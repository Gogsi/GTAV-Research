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
	struct<10> Local_47[16];
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	int iLocal_212[120] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_365 = 0;
	int iLocal_366[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 8;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419[4] = { 0, 0, 0, 0 };
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 4;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 4;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 4;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 4;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 4;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 4;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	struct<40> Local_466[55];
	var uLocal_2667 = 40;
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
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
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
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
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
	var uLocal_3078 = 0;
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
	var uLocal_3108 = 0;
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
	var uLocal_3135 = 0;
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
	var uLocal_3165 = 0;
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
	var uLocal_3192 = 0;
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
	var uLocal_3222 = 0;
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
	var uLocal_3249 = 0;
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
	var uLocal_3279 = 0;
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
	var uLocal_3306 = 0;
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
	var uLocal_3336 = 0;
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
	var uLocal_3363 = 0;
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
	var uLocal_3393 = 0;
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
	var uLocal_3420 = 0;
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
	var uLocal_3450 = 0;
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
	var uLocal_3477 = 0;
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
	var uLocal_3507 = 0;
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
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
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
	var uLocal_3722 = 0;
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
	var uLocal_3749 = 0;
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
	var uLocal_3779 = 0;
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
	var uLocal_3806 = 0;
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
	var uLocal_3836 = 0;
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
	var uLocal_3863 = 0;
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
	var uLocal_3893 = 0;
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
	var uLocal_3920 = 0;
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
	var uLocal_3950 = 0;
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
	var uLocal_3977 = 0;
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
	var uLocal_4007 = 0;
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
	var uLocal_4034 = 0;
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
	var uLocal_4064 = 0;
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
	var uLocal_4091 = 0;
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
	var uLocal_4121 = 0;
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
	var uLocal_4148 = 0;
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
	var uLocal_4178 = 0;
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
	var uLocal_4205 = 0;
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
	var uLocal_4235 = 0;
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
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	struct<40> Local_4268[3];
	struct<19> Local_4389[35];
	var uLocal_5055 = 0;
	int iLocal_5056 = 0;
	int iLocal_5057 = 0;
	int iLocal_5058 = 0;
	int iLocal_5059 = 0;
	int iLocal_5060 = 0;
	int iLocal_5061 = 0;
	int iLocal_5062 = 0;
	int iLocal_5063 = 0;
	int iLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	int iLocal_5067 = 0;
	int iLocal_5068 = 0;
	int iLocal_5069 = 0;
	int iLocal_5070 = 0;
	int iLocal_5071 = 0;
	int iLocal_5072 = 0;
	int iLocal_5073 = 0;
	int iLocal_5074 = 0;
	int iLocal_5075 = 0;
	int iLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	int iLocal_5079 = 0;
	int iLocal_5080 = 0;
	int iLocal_5081 = 0;
	var uLocal_5082 = 0;
	int iLocal_5083 = 0;
	int iLocal_5084 = 0;
	int iLocal_5085 = 0;
	int iLocal_5086 = 0;
	int iLocal_5087 = 0;
	int iLocal_5088 = 0;
	int iLocal_5089 = 0;
	int iLocal_5090 = 0;
	int iLocal_5091 = 0;
	int iLocal_5092 = 0;
	int iLocal_5093 = 0;
	int iLocal_5094 = 0;
	int iLocal_5095 = 0;
	int iLocal_5096 = 0;
	var uLocal_5097 = 0;
	int iLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	struct<6> Local_5101 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_5107 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_5113 = 0;
	int iLocal_5114 = 0;
	int iLocal_5115 = 0;
	int iLocal_5116 = 0;
	int iLocal_5117 = 0;
	var uLocal_5118 = 0;
	int iLocal_5119 = 0;
	var uLocal_5120 = 0;
	int iLocal_5121 = 0;
	int iLocal_5122 = 0;
	int iLocal_5123 = 0;
	int iLocal_5124 = 0;
	int iLocal_5125 = 0;
	int iLocal_5126 = 0;
	int iLocal_5127 = 0;
	int iLocal_5128 = 0;
	int iLocal_5129 = 0;
	int iLocal_5130 = 0;
	int iLocal_5131 = 0;
	int iLocal_5132 = 0;
	int iLocal_5133 = 0;
	var uLocal_5134 = 0;
	int iLocal_5135 = 0;
	int iLocal_5136 = 0;
	int iLocal_5137 = 0;
	int iLocal_5138 = 0;
	float fLocal_5139 = 0f;
	int iLocal_5140 = 0;
	int iLocal_5141[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5162 = 0;
	int iLocal_5163 = 0;
	int iLocal_5164 = 0;
	int iLocal_5165 = 0;
	int iLocal_5166 = 0;
	int iLocal_5167 = 0;
	int iLocal_5168 = 0;
	int iLocal_5169[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5185[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5208 = 0;
	int iLocal_5209 = 0;
	int iLocal_5210 = 0;
	int iLocal_5211 = 0;
	bool bLocal_5212 = 0;
	int iLocal_5213 = 0;
	int iLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	bool bLocal_5218 = 0;
	var uLocal_5219 = 0;
	int iLocal_5220 = 0;
	int iLocal_5221[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_5234 = 10;
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
	int iLocal_5245 = 0;
	bool bLocal_5246 = 0;
	int iLocal_5247 = 0;
	int iLocal_5248 = 0;
	bool bLocal_5249 = 0;
	int iLocal_5250[4] = { 0, 0, 0, 0 };
	int iLocal_5255 = 0;
	int iLocal_5256 = 0;
	int iLocal_5257 = 0;
	int iLocal_5258 = 0;
	var uLocal_5259[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_5275 = 0;
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
	float fLocal_5286 = 0f;
	float fLocal_5287 = 0f;
	float fLocal_5288 = 0f;
	float fLocal_5289 = 0f;
	float fLocal_5290 = 0f;
	float fLocal_5291 = 0f;
	float fLocal_5292 = 0f;
	float fLocal_5293 = 0f;
	float fLocal_5294 = 0f;
	int iLocal_5295 = 0;
	bool bLocal_5296 = 0;
	struct<3> Local_5297 = { 0, 0, 0 } ;
	struct<3> Local_5300 = { 0, 0, 0 } ;
	int iLocal_5303 = 0;
	var uLocal_5304 = 0;
	struct<3> Local_5305 = { 0, 0, 0 } ;
	struct<3> Local_5308 = { 0, 0, 0 } ;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	int iLocal_5315[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5326[3] = { 0, 0, 0 };
	var uLocal_5330 = 0;
	int iLocal_5331 = 0;
	struct<3> Local_5332 = { 0, 0, 0 } ;
	struct<3> Local_5335 = { 0, 0, 0 } ;
	struct<3> Local_5338 = { 0, 0, 0 } ;
	struct<3> Local_5341 = { 0, 0, 0 } ;
	int iLocal_5344 = 0;
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
	var uLocal_5362 = 0;
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
	int iLocal_5373 = 0;
	int iLocal_5374 = 0;
	int iLocal_5375 = 0;
	int iLocal_5376 = 0;
	int iLocal_5377 = 0;
	int iLocal_5378 = 0;
	int iLocal_5379 = 0;
	int iLocal_5380 = 0;
	int iLocal_5381 = 0;
	int iLocal_5382 = 0;
	int iLocal_5383 = 0;
	int iLocal_5384 = 0;
	struct<8> Local_5385[1];
	struct<16> Local_5394[1];
	struct<16> Local_5411[3];
	struct<16> Local_5460[2];
	struct<16> Local_5493[5];
	struct<16> Local_5574[3];
	struct<16> Local_5623[1];
	struct<16> Local_5640[2];
	struct<16> Local_5673[1];
	struct<16> Local_5690[1];
	struct<16> Local_5707[4];
	struct<16> Local_5772[3];
	int iLocal_5821[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_5835[5] = { 0, 0, 0, 0, 0 };
	struct<3> Local_5841[13];
	float fLocal_5881[13] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_5895[13];
	float fLocal_5935[13] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_5949[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<4> Local_5963 = { 0, 0, 0, 0 } ;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	struct<4> Local_5970 = { 0, 0, 0, 0 } ;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	struct<4> Local_5977 = { 0, 0, 0, 0 } ;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	struct<4> Local_5984 = { 0, 0, 0, 0 } ;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	struct<4> Local_5991 = { 0, 0, 0, 0 } ;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	struct<4> Local_5998 = { 0, 0, 0, 0 } ;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	struct<3> Local_6005 = { 0, 0, 0 } ;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	struct<4> Local_6012 = { 0, 0, 0, 0 } ;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	struct<4> Local_6019 = { 0, 0, 0, 0 } ;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	struct<4> Local_6026 = { 0, 0, 0, 0 } ;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	int iLocal_6033 = 0;
	int iLocal_6034 = 0;
	int iLocal_6035 = 0;
	int iLocal_6036 = 0;
	int iLocal_6037 = 0;
	var uLocal_6038 = 0;
	int iLocal_6039 = 0;
	float fLocal_6040[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_6056[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_6079 = 0f;
	float fLocal_6080 = 0f;
	float fLocal_6081 = 0f;
	float fLocal_6082 = 0f;
	float fLocal_6083 = 0f;
	float fLocal_6084[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_6091 = 0f;
	float fLocal_6092 = 0f;
	float fLocal_6093 = 0f;
	float fLocal_6094 = 0f;
	var uLocal_6095[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_6111[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_6134 = 0;
	int iLocal_6135 = 0;
	int iLocal_6136 = 0;
	int iLocal_6137 = 0;
	int iLocal_6138 = 0;
	var uLocal_6139[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_6146 = 0;
	int iLocal_6147 = 0;
	int iLocal_6148 = 0;
	int iLocal_6149 = 0;
	int iLocal_6150 = 0;
	int iLocal_6151 = 0;
	int iLocal_6152 = 0;
	var uLocal_6153[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_6164[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	struct<3> Local_6177 = { 0, 0, 0 } ;
	struct<3> Local_6180 = { 0, 0, 0 } ;
	struct<3> Local_6183 = { 0, 0, 0 } ;
	struct<3> Local_6186 = { 0, 0, 0 } ;
	struct<3> Local_6189[15];
	struct<13> Local_6235[15];
	struct<3> Local_6431[22];
	struct<13> Local_6498[22];
	struct<3> Local_6785 = { 0, 0, 0 } ;
	struct<3> Local_6788 = { 0, 0, 0 } ;
	struct<3> Local_6791 = { 0, 0, 0 } ;
	struct<3> Local_6794 = { 0, 0, 0 } ;
	struct<3> Local_6797[6];
	struct<3> Local_6816 = { 0, 0, 0 } ;
	var uLocal_6819[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_6842[3] = { 0, 0, 0 };
	var uLocal_6846 = 0;
	var uLocal_6847 = 0;
	var uLocal_6848[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_6874[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_6900 = 0f;
	float fLocal_6901 = 0f;
	float fLocal_6902 = 0f;
	float fLocal_6903 = 0f;
	float fLocal_6904 = 0f;
	float fLocal_6905 = 0f;
	float fLocal_6906 = 0f;
	float fLocal_6907 = 0f;
	float fLocal_6908 = 0f;
	float fLocal_6909 = 0f;
	float fLocal_6910 = 0f;
	float fLocal_6911 = 0f;
	int iLocal_6912 = 0;
	float fLocal_6913 = 0f;
	float fLocal_6914 = 0f;
	float fLocal_6915 = 0f;
	int iLocal_6916 = 0;
	struct<3> Local_6917 = { 0, 0, 0 } ;
	struct<3> Local_6920 = { 0, 0, 0 } ;
	struct<3> Local_6923 = { 0, 0, 0 } ;
	struct<3> Local_6926 = { 0, 0, 0 } ;
	struct<3> Local_6929 = { 0, 0, 0 } ;
	struct<3> Local_6932 = { 0, 0, 0 } ;
	struct<3> Local_6935 = { 0, 0, 0 } ;
	struct<3> Local_6938 = { 0, 0, 0 } ;
	struct<3> Local_6941 = { 0, 0, 0 } ;
	struct<3> Local_6944 = { 0, 0, 0 } ;
	float fLocal_6947 = 0f;
	float fLocal_6948 = 0f;
	struct<3> Local_6949 = { 0, 0, 0 } ;
	struct<3> Local_6952 = { 0, 0, 0 } ;
	struct<3> Local_6955 = { 0, 0, 0 } ;
	struct<3> Local_6958 = { 0, 0, 0 } ;
	struct<3> Local_6961 = { 0, 0, 0 } ;
	struct<3> Local_6964 = { 0, 0, 0 } ;
	struct<3> Local_6967 = { 0, 0, 0 } ;
	struct<3> Local_6970 = { 0, 0, 0 } ;
	struct<3> Local_6973 = { 0, 0, 0 } ;
	struct<3> Local_6976 = { 0, 0, 0 } ;
	struct<3> Local_6979 = { 0, 0, 0 } ;
	struct<3> Local_6982 = { 0, 0, 0 } ;
	struct<3> Local_6985 = { 0, 0, 0 } ;
	struct<3> Local_6988 = { 0, 0, 0 } ;
	struct<3> Local_6991 = { 0, 0, 0 } ;
	struct<3> Local_6994 = { 0, 0, 0 } ;
	struct<6> Local_6997 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_7003 = 0;
	var uLocal_7004 = 1092616192;
	var uLocal_7005 = 1101004800;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 3;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 0;
	var uLocal_7021 = 0;
	int iLocal_7022 = 0;
	var uLocal_7023 = 16;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
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
	var uLocal_7059 = 0;
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
	var uLocal_7086 = 0;
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
	var uLocal_7116 = 0;
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
	var uLocal_7143 = 0;
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
	var uLocal_7173 = 0;
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
	int iLocal_7195 = 0;
	int iLocal_7196 = 0;
	int iLocal_7197 = 0;
	struct<25> Local_7198[2];
	struct<89> Local_7249 = { 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	int iLocal_7340 = 0;
	int iLocal_7341 = 0;
	int iLocal_7342 = 0;
	int iLocal_7343 = 0;
	int iLocal_7344 = 0;
	int iLocal_7345 = 0;
	int iLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	int iLocal_7350 = 0;
	int iLocal_7351 = 0;
	int iLocal_7352 = 0;
	int iLocal_7353 = 0;
	int iLocal_7354 = 0;
	int iLocal_7355 = 0;
	int iLocal_7356 = 0;
	int iLocal_7357 = 0;
	int iLocal_7358 = 0;
	int iLocal_7359 = 0;
	int iLocal_7360 = 0;
	int iLocal_7361 = 0;
	int iLocal_7362 = 0;
	struct<3> Local_7363 = { 0, 0, 0 } ;
	int iLocal_7366 = 0;
	int iLocal_7367 = 0;
	float fLocal_7368 = 0f;
	int iLocal_7369 = 0;
	int iLocal_7370 = 0;
	int iLocal_7371 = 0;
	int iLocal_7372 = 0;
	int iLocal_7373 = 0;
	char* sLocal_7374 = NULL;
	int iLocal_7375 = 0;
	int iLocal_7376 = 0;
	int iLocal_7377 = 0;
	int iLocal_7378 = 0;
	int iLocal_7379 = 0;
	int iLocal_7380 = 0;
	int iLocal_7381 = 0;
	struct<3> Local_7382 = { 0, 0, 0 } ;
	int iLocal_7385 = 0;
	int iLocal_7386 = 0;
	int iLocal_7387 = 0;
	int iLocal_7388 = 0;
	int iLocal_7389 = 0;
	int iLocal_7390 = 0;
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
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_5093 = AUDIO::GET_SOUND_ID();
	uLocal_5095 = AUDIO::GET_SOUND_ID();
	iLocal_5098 = -1;
	iLocal_5214 = 1;
	iLocal_5257 = 1;
	fLocal_5286 = 1f;
	fLocal_5287 = 0.48f;
	fLocal_5288 = 0.42f;
	fLocal_5289 = -5.7f;
	fLocal_5290 = 9.8f;
	fLocal_5291 = 30f;
	fLocal_5292 = 7f;
	fLocal_5293 = 7f;
	fLocal_5294 = 10.1f;
	Local_5300 = { -53.6982f, -2415.79f, 5.05f };
	Local_5305 = { -1.3f, -6.08f, 1.4f };
	Local_5308 = { 1.3f, -6.08f, 1.4f };
	Local_5332 = { -0.8f, 0f, 0f };
	Local_5335 = { -2f, 0f, 1.3f };
	Local_5338 = { 0f, 0f, 0f };
	iLocal_5375 = joaat("prop_dock_rtg_ld");
	iLocal_5376 = joaat("p_dock_crane_sld_s");
	iLocal_5377 = joaat("p_dock_rtg_ld_cab");
	iLocal_5378 = joaat("prop_container_ld");
	iLocal_5379 = joaat("p_dock_rtg_ld_wheel");
	iLocal_5380 = joaat("p_dock_rtg_ld_wheel");
	iLocal_5381 = joaat("p_dock_rtg_ld_wheel");
	iLocal_5382 = joaat("prop_cntrdoor_ld_l");
	iLocal_5383 = joaat("prop_cntrdoor_ld_r");
	iLocal_5384 = iLocal_5379;
	fLocal_6079 = 133.1177f;
	fLocal_6081 = 30.6234f;
	fLocal_6082 = 30.6234f;
	fLocal_6083 = 233.1648f;
	fLocal_6091 = 0.8f;
	fLocal_6092 = 0.8f;
	fLocal_6093 = 3.1f;
	fLocal_6094 = 3.5f;
	Local_6177 = { -1154.928f, -1521.5f, 9.6346f };
	Local_6180 = { -1154.928f, -1521.5f, 9.6346f };
	Local_6183 = { -1149.949f, -1528.327f, 3.2755f };
	Local_6186 = { -1149.949f, -1526.327f, 3.2755f };
	Local_6785 = { 18.1416f, -2532.493f, 5.0504f };
	Local_6788 = { -95.8455f, -2455.761f, 5.0191f };
	Local_6791 = { 12.2127f, -2531.034f, 5.0509f };
	Local_6794 = { -59.0169f, -2531.692f, 5.0103f };
	Local_6816 = { -52.94f, -2415.64f, 14.76f };
	fLocal_6900 = 5.5f;
	fLocal_6901 = -6.4f;
	fLocal_6902 = -3f;
	fLocal_6903 = -14f;
	fLocal_6904 = 5f;
	fLocal_6905 = -56.6f;
	fLocal_6906 = 3f;
	fLocal_6907 = 3f;
	fLocal_6908 = 3f;
	fLocal_6909 = 5f;
	fLocal_6910 = 3f;
	fLocal_6911 = 3f;
	iLocal_6912 = 120;
	fLocal_6913 = 1.4f;
	fLocal_6914 = 4f;
	fLocal_6915 = 1.3f;
	Local_6917 = { 15.1064f, -25.8022f, 11.841f };
	Local_6920 = { 13.6553f, -23.6718f, 10.3063f };
	Local_6923 = { 20f, -21.4f, 14.2f };
	Local_6926 = { 2.8f, -2.8f, 4.343f };
	Local_6929 = { 15.1069f, -25.8024f, 11.8412f };
	Local_6932 = { 13.6548f, -23.6745f, 10.3039f };
	Local_6935 = { 15.1069f, -25.5991f, -10f };
	Local_6938 = { 13.6548f, -23.1884f, -10.5f };
	Local_6941 = { -1.512f, 0f, -1.078f };
	Local_6944 = { -89f, 0f, -90f };
	fLocal_6947 = 100f;
	fLocal_6948 = 45.0193f;
	Local_6949 = { -2.6f, -1f, 0.285f };
	Local_6952 = { 1f, -2.55f, 1.75f };
	Local_6955 = { 2.6f, -1f, 0.285f };
	Local_6958 = { 1f, 2.65f, 1.75f };
	Local_6961 = { -2.6f, 1f, 0.285f };
	Local_6964 = { -1f, -2.55f, 1.75f };
	Local_6967 = { 2.6f, 1f, 0.285f };
	Local_6970 = { -1f, 2.65f, 1.75f };
	Local_6973 = { 2.6f, 0.05f, 0.285f };
	Local_6976 = { -0.05f, 2.65f, 1.75f };
	Local_6979 = { 2.6f, -0.05f, 0.285f };
	Local_6982 = { 0.05f, 2.65f, 1.75f };
	Local_6985 = { -2.6f, 0.05f, 0.285f };
	Local_6988 = { -0.05f, -2.55f, 1.75f };
	Local_6991 = { -2.6f, -0.05f, 0.285f };
	Local_6994 = { 0.05f, -2.55f, 1.75f };
	iLocal_7022 = joaat("weapon_advancedrifle");
	iLocal_7195 = 3;
	iLocal_7343 = 270;
	iLocal_7344 = 225;
	iLocal_7345 = -1;
	iLocal_7346 = 9999;
	iLocal_7376 = 1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		GlobalFunc_585(20, 0);
		iLocal_5058 = 0;
		func_749(0, 0);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_ThePortOfLSHeistSetup", 0);
		if (iLocal_5085 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		if (iLocal_5113)
		{
			func_746();
		}
		if (iLocal_5117)
		{
			if (AUDIO::HAS_SOUND_FINISHED(uLocal_6037))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_6037, "Generic_Alarm_Electronic_01", 0, 1);
			}
		}
		if (iLocal_7196 == 9)
		{
			if (iLocal_6034 > 5)
			{
				if (iLocal_6034 != 99 || iLocal_6034 != 98)
				{
					func_745();
				}
			}
		}
		if (iLocal_7196 == 10)
		{
			func_745();
		}
		if (iLocal_7196 > 5)
		{
			TASK::SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(25.3383f);
		}
		if (iLocal_7196 < 9)
		{
			func_744();
			func_743();
		}
		if (iLocal_7196 > 5 && iLocal_7196 < 9)
		{
			func_742();
		}
		func_741();
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_7196 > 0 && iLocal_7196 < 5)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_6785, 1) < 200f)
				{
					func_735(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				}
			}
			else if (iLocal_7196 > 0)
			{
				if (iLocal_7196 > 4 && Local_5411[0 /*16*/].f_4 > 7)
				{
					if (iLocal_5821[12] == 1)
					{
						iLocal_5821[12] = 0;
					}
					if (iLocal_5821[1] == 1)
					{
						iLocal_5821[1] = 0;
					}
					if (iLocal_5821[2] == 1)
					{
						iLocal_5821[2] = 0;
					}
					if (iLocal_5821[3] == 1)
					{
						iLocal_5821[3] = 0;
					}
					if (iLocal_5821[5] == 1)
					{
						iLocal_5821[5] = 0;
					}
					if (iLocal_5821[7] == 1)
					{
						iLocal_5821[7] = 0;
					}
					if (iLocal_5821[4] == 1)
					{
						iLocal_5821[4] = 0;
					}
					iLocal_6035 = 0;
					while (iLocal_6035 < Local_5385)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_5385[iLocal_6035 /*8*/]))
						{
							func_734(&(Local_5385[iLocal_6035 /*8*/]), 1, 0);
						}
						iLocal_6035++;
					}
					iLocal_6035 = 0;
					while (iLocal_6035 < Local_5574)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_5574[iLocal_6035 /*16*/]))
						{
							func_733(&(Local_5574[iLocal_6035 /*16*/]), 1, 0);
						}
						iLocal_6035++;
					}
					iLocal_6035 = 0;
					while (iLocal_6035 < Local_5640)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_5640[iLocal_6035 /*16*/]))
						{
							func_733(&(Local_5640[iLocal_6035 /*16*/]), 1, 0);
						}
						iLocal_6035++;
					}
					iLocal_6035 = 0;
					while (iLocal_6035 < Local_5772)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_5772[iLocal_6035 /*16*/]))
						{
							func_733(&(Local_5772[iLocal_6035 /*16*/]), 1, 0);
						}
						iLocal_6035++;
					}
					iLocal_6035 = 0;
					while (iLocal_6035 < Local_5493)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_5493[iLocal_6035 /*16*/]))
						{
							func_733(&(Local_5493[iLocal_6035 /*16*/]), 1, 0);
						}
						iLocal_6035++;
					}
					iLocal_6035 = 0;
					while (iLocal_6035 < Local_5707)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_5707[iLocal_6035 /*16*/]))
						{
							func_733(&(Local_5707[iLocal_6035 /*16*/]), 1, 0);
						}
						iLocal_6035++;
					}
					iLocal_6035 = 0;
					while (iLocal_6035 < Local_5460)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_5460[iLocal_6035 /*16*/]))
						{
							func_733(&(Local_5460[iLocal_6035 /*16*/]), 1, 0);
						}
						iLocal_6035++;
					}
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
					STREAMING::REMOVE_ANIM_DICT("missdocksshowoffcar@idle_a");
					STREAMING::REMOVE_ANIM_DICT("missdocksshowoffcar@idle_b");
					STREAMING::REMOVE_ANIM_DICT("missdocksshowoffcar@base");
				}
			}
		}
		func_732();
		func_731();
		if (iLocal_7196 < 4)
		{
			if (Global_24677 == 0)
			{
				Global_24677 = 1;
			}
		}
		else if (Global_24677 == 1)
		{
			GlobalFunc_5125(2, PLAYER::PLAYER_PED_ID());
			GlobalFunc_5125(3, PLAYER::PLAYER_PED_ID());
			Global_24677 = 0;
		}
		if (iLocal_7196 > 8)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 497.6256f, -3113.236f, 4.570056f, 471.1862f, -3113.17f, 15.35226f, 13.25f, 0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			}
		}
		if (iLocal_7196 > 2 && iLocal_7196 < 9)
		{
			func_728();
		}
		if (iLocal_7196 >= 4)
		{
			func_725();
		}
		switch (iLocal_7196)
		{
			case 0:
				func_701();
				break;
			
			case 1:
				func_607();
				break;
			
			case 2:
				func_598();
				break;
			
			case 3:
				func_594();
				break;
			
			case 4:
				func_579();
				break;
			
			case 5:
				func_572();
				break;
			
			case 6:
				func_569();
				break;
			
			case 7:
				func_550();
				break;
			
			case 8:
				func_521();
				break;
			
			case 9:
				func_476();
				break;
			
			case 10:
				func_290();
				break;
			
			case 11:
				func_285();
				break;
			
			case 12:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x97F
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	AUDIO::TRIGGER_MUSIC_EVENT("AHP1_FAIL");
	switch (iLocal_7340)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED";
			break;
		
		case 5:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_FL";
			break;
		
		case 6:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_FD";
			break;
		
		case 7:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_WL";
			break;
		
		case 20:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_WD";
			break;
		
		case 4:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_FFLD";
			break;
		
		case 3:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_FLD";
			break;
		
		case 1:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_TTD";
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_TTS";
			break;
		
		case 10:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_TRD";
			break;
		
		case 11:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_TRS";
			break;
		
		case 8:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_CBL";
			break;
		
		case 9:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_CBL";
			break;
		
		case 14:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_DC";
			break;
		
		case 16:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_DC";
			break;
		
		case 12:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_HD";
			break;
		
		case 13:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_HS";
			break;
		
		case 15:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_HCD";
			break;
		
		case 18:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_FWD";
			break;
		
		case 17:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_AD";
			break;
		
		case 19:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_DTC";
			break;
	}
	GlobalFunc_10835(sVar0);
	GlobalFunc_585(20, 0);
	if (GlobalFunc_2539(141) != 0)
	{
		GlobalFunc_7621(141, 0, 0, 1, 0);
	}
	if (GlobalFunc_2539(139) != 0)
	{
		GlobalFunc_7621(139, 0, 0, 1, 0);
	}
	if (GlobalFunc_2539(140) != 0)
	{
		GlobalFunc_7621(140, 0, 0, 1, 0);
	}
	while (!GlobalFunc_145())
	{
		if (bLocal_5218)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 8)
			{
				PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_7249.f_15[iVar1]);
				PHYSICS::STOP_ROPE_WINDING(Local_7249.f_15[iVar1]);
				iVar1++;
			}
		}
		SYSTEM::WAIT(0);
	}
	GlobalFunc_5100(2, iLocal_5213);
	func_9();
	if (iLocal_7197 > 2)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						if ((((VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("handler")) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("hauler"))) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("forklift"))) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("barracks"))) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("barracks2")))
						{
						}
						if (ENTITY::GET_ENTITY_MODEL(iVar2) == GlobalFunc_4931(2, 0))
						{
							GlobalFunc_5166(27.8582f, -2553.947f, 5.0001f, 263.0292f);
						}
					}
				}
			}
		}
		GlobalFunc_5129(20.1336f, -2536.149f, 5.0502f, 232.2569f);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar2, GlobalFunc_4931(2, 0)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar2, -1))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar2, -1);
						}
					}
				}
			}
		}
	}
	func_749(0, 0);
}








void func_9()//Position - 0x1020
{
	GlobalFunc_2000(&Global_91351);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_10(PLAYER::PLAYER_PED_ID(), &(Global_89752[GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) /*65*/]), 0);
	}
}

void func_10(int iParam0, var uParam1, bool bParam2)//Position - 0x1053
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
			if (GlobalFunc_11103(iParam0, iVar1, &iVar2, 0))
			{
				func_244(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11099(iParam0, iVar1, &iVar2))
			{
				func_244(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_15(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_15(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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





int func_15(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x132A
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
		Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10983(iVar5, iParam1, iParam2, 1);
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
					Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 10, 0) };
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
						GlobalFunc_10983(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iVar0, uVar15[iVar0]) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10983(iVar5, iVar0, uVar15[iVar0], 1);
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
								GlobalFunc_10983(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iVar0, GlobalFunc_11098(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_15(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				GlobalFunc_9233(iVar57, 0, Global_68104);
			}
			func_120(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10983(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11097(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_15(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar3 = GlobalFunc_11097(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10983(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_15(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						iVar73 = GlobalFunc_11097(iParam0, iVar5, 11, iVar70, 3, 0);
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
							func_15(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
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
								func_15(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_15(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 8, iVar71) };
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
										Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 11, iVar82) };
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
								func_15(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_15(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10719(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_120(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11098(iParam0, 8, -1), iParam2);
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
				func_71(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_120(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10719(iVar5, iVar85);
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
						iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
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
					iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_15(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						if (!GlobalFunc_10981(iParam0, 9, iVar97))
						{
							func_15(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_15(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_15(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = GlobalFunc_11098(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11098(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_15(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_15(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_15(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_15(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11190(iParam0, &uVar4))
		{
			func_15(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_15(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_15(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_15(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_15(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}
























































void func_71(int iParam0, int iParam1, bool bParam2)//Position - 0x8B89
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_100(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9233(iVar1, 1, Global_68104);
	}
	func_72(iParam0, bParam2, 0);
}

void func_72(int iParam0, bool bParam1, bool bParam2)//Position - 0x8BCB
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
		bVar15 = GlobalFunc_11192(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = GlobalFunc_11191(iParam0);
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




























void func_100(int iParam0, int iParam1)//Position - 0xFA04
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
					GlobalFunc_9233(13, 0, Global_68104);
					GlobalFunc_9233(14, 0, Global_68104);
					GlobalFunc_9233(15, 0, Global_68104);
					GlobalFunc_9233(16, 0, Global_68104);
					GlobalFunc_9233(71, 0, Global_68104);
					GlobalFunc_9233(72, 0, Global_68104);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar13 == 3)
					{
						GlobalFunc_9233(73, 0, Global_68104);
						GlobalFunc_9233(74, 0, Global_68104);
						GlobalFunc_9233(75, 0, Global_68104);
						GlobalFunc_9233(76, 0, Global_68104);
						GlobalFunc_9233(77, 0, Global_68104);
						GlobalFunc_9233(78, 0, Global_68104);
						GlobalFunc_9233(79, 0, Global_68104);
						GlobalFunc_9233(80, 0, Global_68104);
						GlobalFunc_9233(81, 0, Global_68104);
						GlobalFunc_9233(82, 0, Global_68104);
						GlobalFunc_9233(83, 0, Global_68104);
						GlobalFunc_9233(84, 0, Global_68104);
						GlobalFunc_9233(85, 0, Global_68104);
						GlobalFunc_9233(86, 0, Global_68104);
						GlobalFunc_9233(90, 0, Global_68104);
						GlobalFunc_9233(91, 0, Global_68104);
						GlobalFunc_9233(124, 0, Global_68104);
						GlobalFunc_9233(125, 0, Global_68104);
						GlobalFunc_9233(87, 0, Global_68104);
						GlobalFunc_9233(88, 0, Global_68104);
						GlobalFunc_9233(89, 0, Global_68104);
						iVar15 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar14 = 0;
						while (iVar14 < iVar15)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar14, &Var16))
							{
								if (Var16.f_6 == 277073536)
								{
									GlobalFunc_9233((129 + iVar14), 0, Global_68104);
								}
							}
							iVar14++;
						}
					}
					else
					{
						GlobalFunc_9233(73, 0, Global_68104);
						GlobalFunc_9233(74, 0, Global_68104);
						GlobalFunc_9233(75, 0, Global_68104);
						GlobalFunc_9233(76, 0, Global_68104);
						GlobalFunc_9233(77, 0, Global_68104);
						GlobalFunc_9233(78, 0, Global_68104);
						GlobalFunc_9233(79, 0, Global_68104);
						GlobalFunc_9233(80, 0, Global_68104);
						GlobalFunc_9233(81, 0, Global_68104);
						GlobalFunc_9233(82, 0, Global_68104);
						GlobalFunc_9233(83, 0, Global_68104);
						GlobalFunc_9233(84, 0, Global_68104);
						GlobalFunc_9233(85, 0, Global_68104);
						GlobalFunc_9233(92, 0, Global_68104);
						GlobalFunc_9233(87, 0, Global_68104);
						GlobalFunc_9233(88, 0, Global_68104);
						GlobalFunc_9233(89, 0, Global_68104);
						iVar32 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar31 = 0;
						while (iVar31 < iVar32)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar31, &Var33))
							{
								if (Var33.f_6 == 277073536)
								{
									GlobalFunc_9233((129 + iVar31), 0, Global_68104);
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
						GlobalFunc_9233(93, 0, Global_68104);
						GlobalFunc_9233(94, 0, Global_68104);
						GlobalFunc_9233(95, 0, Global_68104);
						GlobalFunc_9233(96, 0, Global_68104);
						GlobalFunc_9233(97, 0, Global_68104);
						GlobalFunc_9233(98, 0, Global_68104);
						GlobalFunc_9233(99, 0, Global_68104);
						GlobalFunc_9233(100, 0, Global_68104);
						GlobalFunc_9233(101, 0, Global_68104);
						GlobalFunc_9233(102, 0, Global_68104);
						GlobalFunc_9233(103, 0, Global_68104);
						GlobalFunc_9233(104, 0, Global_68104);
						GlobalFunc_9233(105, 0, Global_68104);
						GlobalFunc_9233(106, 0, Global_68104);
						GlobalFunc_9233(107, 0, Global_68104);
						GlobalFunc_9233(108, 0, Global_68104);
						GlobalFunc_9233(109, 0, Global_68104);
						GlobalFunc_9233(110, 0, Global_68104);
						GlobalFunc_9233(111, 0, Global_68104);
						GlobalFunc_9233(112, 0, Global_68104);
						GlobalFunc_9233(113, 0, Global_68104);
						GlobalFunc_9233(114, 0, Global_68104);
						GlobalFunc_9233(115, 0, Global_68104);
						GlobalFunc_9233(116, 0, Global_68104);
						GlobalFunc_9233(117, 0, Global_68104);
						GlobalFunc_9233(123, 0, Global_68104);
						iVar49 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar48 = 0;
						while (iVar48 < iVar49)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar48, &Var50))
							{
								if (Var50.f_6 == 2140335355)
								{
									GlobalFunc_9233((129 + iVar48), 0, Global_68104);
								}
							}
							iVar48++;
						}
					}
					else
					{
						GlobalFunc_9233(93, 0, Global_68104);
						GlobalFunc_9233(94, 0, Global_68104);
						GlobalFunc_9233(95, 0, Global_68104);
						GlobalFunc_9233(96, 0, Global_68104);
						GlobalFunc_9233(97, 0, Global_68104);
						GlobalFunc_9233(98, 0, Global_68104);
						GlobalFunc_9233(99, 0, Global_68104);
						GlobalFunc_9233(100, 0, Global_68104);
						GlobalFunc_9233(101, 0, Global_68104);
						GlobalFunc_9233(102, 0, Global_68104);
						GlobalFunc_9233(103, 0, Global_68104);
						GlobalFunc_9233(104, 0, Global_68104);
						GlobalFunc_9233(105, 0, Global_68104);
						GlobalFunc_9233(106, 0, Global_68104);
						GlobalFunc_9233(107, 0, Global_68104);
						GlobalFunc_9233(108, 0, Global_68104);
						GlobalFunc_9233(109, 0, Global_68104);
						GlobalFunc_9233(110, 0, Global_68104);
						GlobalFunc_9233(111, 0, Global_68104);
						GlobalFunc_9233(112, 0, Global_68104);
						GlobalFunc_9233(113, 0, Global_68104);
						GlobalFunc_9233(114, 0, Global_68104);
						GlobalFunc_9233(115, 0, Global_68104);
						GlobalFunc_9233(116, 0, Global_68104);
						GlobalFunc_9233(117, 0, Global_68104);
						GlobalFunc_9233(118, 0, Global_68104);
						GlobalFunc_9233(119, 0, Global_68104);
						GlobalFunc_9233(120, 0, Global_68104);
						GlobalFunc_9233(121, 0, Global_68104);
						GlobalFunc_9233(122, 0, Global_68104);
						GlobalFunc_9233(123, 0, Global_68104);
						iVar66 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar65 = 0;
						while (iVar65 < iVar66)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar65, &Var67))
							{
								if (Var67.f_6 == 2140335355)
								{
									GlobalFunc_9233((129 + iVar65), 0, Global_68104);
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
						GlobalFunc_9233(Var0.f_11, 0, Global_68104);
					}
				}
				iVar82++;
			}
		}
	}
}




















void func_120(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1540D
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
			func_100(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!GlobalFunc_10242(iVar0, iParam2, 13) && !GlobalFunc_10242(iVar0, iParam2, 14)) && !GlobalFunc_10242(iVar0, iParam2, 15)) && !GlobalFunc_10242(iVar0, iParam2, 16)) && !GlobalFunc_10242(iVar0, iParam2, 71)) && !GlobalFunc_10242(iVar0, iParam2, 72))
				{
					func_100(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = GlobalFunc_9231(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					GlobalFunc_9232(iParam0, iVar2);
				}
				else
				{
					GlobalFunc_9233(iVar2, 1, Global_68104);
				}
			}
		}
	}
}




























































































































int func_244(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x45257
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
	int iVar10;
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8613(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = GlobalFunc_7614(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7614(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7614(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68149 };
		}
		else
		{
			uVar11 = { GlobalFunc_7617(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, iVar0, uVar11[iVar0]) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68165 };
						}
						else
						{
							uVar27 = { GlobalFunc_7616(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8613(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11238(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_244(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							GlobalFunc_4911(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
						}
						GlobalFunc_8613(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11238(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_244(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, iVar0, GlobalFunc_11101(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11103(iParam0, iVar10, &iVar4, 1))
							{
								func_244(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_244(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10878(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_244(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_244(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_244(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_244(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_244(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { GlobalFunc_7616(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8613(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11238(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_244(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8613(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11238(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_244(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11238(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_244(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11100(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11103(iParam0, iVar10, &iVar4, 0))
		{
			func_244(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11099(iParam0, iVar10, &iVar4))
		{
			func_244(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}









































void func_285()//Position - 0x4CF61
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	GlobalFunc_553(579);
	GlobalFunc_505(1, 1, 1);
	GlobalFunc_585(20, 1);
	if (GlobalFunc_2539(141) != 1)
	{
		GlobalFunc_7621(141, 1, 0, 1, 0);
	}
	if (GlobalFunc_2539(139) != 1)
	{
		GlobalFunc_7621(139, 1, 0, 1, 0);
	}
	if (GlobalFunc_2539(140) != 1)
	{
		GlobalFunc_7621(140, 1, 0, 1, 0);
	}
	GlobalFunc_5103(1, 0);
	func_749(0, 1);
}





void func_290()//Position - 0x4D193
{
	int iVar0;
	int iVar1;
	
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1147.401f, -1522.577f, 9.413f, 1) < 30f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	}
	if (iLocal_6034 > 0)
	{
		if (iLocal_7390 == 0)
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_7389 == 0)
				{
					iLocal_7389 = 1;
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
					iLocal_7388 = MISC::GET_GAME_TIMER();
				}
			}
			else if (iLocal_7389 == 0)
			{
				iLocal_7389 = 1;
			}
			if (GlobalFunc_588(&iLocal_7387, 60000) || (GlobalFunc_588(&iLocal_7388, 7500) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_473())
					{
						if (GlobalFunc_10663(&Local_47, 20, "D1AUD", "DS1_12", 9, 0, 0, 1))
						{
							iLocal_7390 = 1;
						}
					}
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1150.459f, -1521.551f, 9.632723f, -1153.755f, -1516.601f, 12.38272f, 22.25f, 0, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
	}
	func_471();
	switch (iLocal_6034)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_469();
			}
			while (!func_468(10))
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::REQUEST_MODEL(joaat("tiptruck"));
			GlobalFunc_563(0);
			func_409(9, "Drive home", 1, 0, 0, 1);
			GlobalFunc_2427(6, 0);
			GlobalFunc_2434(6, 0);
			GlobalFunc_7621(139, 1, 0, 1, 0);
			GlobalFunc_7621(140, 1, 0, 1, 0);
			GlobalFunc_7621(141, 1, 0, 1, 0);
			iLocal_5121 = 0;
			iLocal_5079 = AUDIO::GET_SOUND_ID();
			func_405(1);
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
			AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
			iLocal_7387 = MISC::GET_GAME_TIMER();
			iLocal_7390 = 0;
			GlobalFunc_173(&Local_47, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			GlobalFunc_173(&Local_47, 0, 0, "NERVOUSRON", 0, 1);
			iLocal_6034++;
			break;
		
		case 1:
			iLocal_6034++;
			break;
		
		case 2:
			if (!func_403("Floyd_Beating"))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\PORT_OF_LS_01_FLOYD_BEATING", 0))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_5079, "Floyd_Beating", 479f, -3106f, 8f, "DOCKS_HEIST_SETUP_SOUNDS", 0, 0, 0);
					func_400("Floyd_Beating", 1);
				}
			}
			if (STREAMING::HAS_MODEL_LOADED(joaat("tiptruck")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6147))
				{
					func_399(&iLocal_6147, joaat("tiptruck"), 465.8751f, -3037.084f, 5.0686f, 126.3433f, -1, 1f, 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (!iLocal_5210)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1147.401f, -1522.577f, 9.413f) < 5625f)
					{
						GlobalFunc_585(20, 1);
						iLocal_5210 = 1;
					}
				}
				else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1147.401f, -1522.577f, 9.413f) > 6400f)
				{
					GlobalFunc_585(16, 0);
					iLocal_5210 = 0;
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1147.401f, -1522.577f, 9.413f, 1) < 30f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
			}
			if (!func_403("Pin interior"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1147.401f, -1522.577f, 9.413f, 1) < 100f)
				{
					iLocal_5344 = INTERIOR::GET_INTERIOR_AT_COORDS(-1158.341f, -1520.893f, 9.6345f);
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_3");
					if (INTERIOR::IS_VALID_INTERIOR(iLocal_5344))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_5344);
						func_400("Pin interior", 1);
					}
				}
			}
			else
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1147.401f, -1522.577f, 9.413f, 1) < 100f)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
					{
						func_358(7, Local_6186, fLocal_6082);
					}
					else if (!func_403("wade_sit_couch"))
					{
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_3");
						TASK::REQUEST_WAYPOINT_RECORDING("d1leadin");
						if (!PED::IS_PED_INJURED(iLocal_6135))
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1leadinoutlsdhs_mcs_3") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("d1leadin"))
							{
								PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 0, 0, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 1, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 2, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 3, 1, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 4, 1, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 5, 1, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 6, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 7, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 8, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 9, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 10, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 11, 0, 0, 0);
								TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("d1leadin", 1, 1f, 0.5f);
								uLocal_5097 = PED::CREATE_SYNCHRONIZED_SCENE(-1158.595f, -1519.261f, 9.608f, 0f, 0f, -51f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6135, uLocal_5097, "missheistdockssetup1leadinoutlsdhs_mcs_3", "wade_sit_couch", 1000f, -1000f, 4, 0, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5097, 1);
								PED::SET_PED_KEEP_TASK(iLocal_6135, 1);
								func_400("wade_sit_couch", 1);
							}
						}
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1147.401f, -1522.577f, 9.413f, 1) > 120f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
					{
						PED::DELETE_PED(&iLocal_6135);
						func_400("wade_sit_couch", 0);
					}
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_3");
					if (iLocal_5344 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_5344);
						func_400("Pin interior", 0);
					}
				}
			}
			if (func_316(&Local_6997, -1156.189f, -1519.613f, 9.6327f, 0.1f, 0.1f, 2f, 1, "AW_RETURN_HOME", 1, 1, -1))
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_5079))
				{
					AUDIO::STOP_SOUND(iLocal_5079);
					AUDIO::RELEASE_SOUND_ID(iLocal_5079);
				}
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_3");
				iLocal_6034++;
			}
			else
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1153.995f, -1518.854f, 9.632723f, -1155.096f, -1517.376f, 12.38272f, 2.25f, 0, 1, 0))
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_5079))
					{
						AUDIO::STOP_SOUND(iLocal_5079);
						AUDIO::RELEASE_SOUND_ID(iLocal_5079);
					}
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_3");
					iLocal_6034++;
				}
				iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
				if (iVar0 == 0)
				{
					iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
					if (iVar1 == 4)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1149.638f, -1522.367f, 9.382867f, -1151.354f, -1519.901f, 12.38273f, 1.5f, 0, 1, 0))
						{
							if (!func_403("DS1_MCS3LI"))
							{
								if (!GlobalFunc_5172(&Local_6997, 1))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10630(&Local_47, "D1AUD", "DS1_MCS3LI", "DS1_MCS3LI_3", 7, 0, 0))
										{
											func_400("DS1_MCS3LI", 1);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
			if (iVar0 == 0)
			{
				iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				if (iVar1 != 4)
				{
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_3");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1leadinoutlsdhs_mcs_3"))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
							TASK::TASK_SWAP_WEAPON(0, 1);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1155.587f, -1518.972f, 9.6327f, 1f, 20000, 0.25f, 1, 1193033728);
							TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1leadinoutlsdhs_mcs_3", "trevor_react", 4f, -4f, -1, 0, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_6175);
						}
						SYSTEM::SETTIMERB(0);
						iLocal_6034++;
					}
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					SYSTEM::SETTIMERB(1500);
					iLocal_6034++;
				}
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERB() > 420)
			{
				if (!GlobalFunc_116(0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				}
				if (SYSTEM::TIMERB() > 1500)
				{
					iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
					if (iVar0 == 0)
					{
						iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
						if (iVar1 != 4)
						{
							if (!func_403("DS1_MCS3LI"))
							{
								if (!GlobalFunc_5172(&Local_6997, 1))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_MCS3LI", 7, 0, 0, 0))
										{
											func_400("DS1_MCS3LI", 1);
										}
									}
								}
							}
							else if (!GlobalFunc_111())
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
								{
									if (!PED::IS_PED_INJURED(iLocal_6135))
									{
										Global_86864.f_9[0] = iLocal_6135;
									}
								}
								func_292();
								func_291();
							}
						}
						else if (!GlobalFunc_111())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
							{
								if (!PED::IS_PED_INJURED(iLocal_6135))
								{
									Global_86864.f_9[0] = iLocal_6135;
								}
							}
							func_292();
							func_291();
						}
					}
				}
			}
			break;
	}
}

void func_291()//Position - 0x4DA1F
{
	iLocal_7196++;
	func_292();
}

void func_292()//Position - 0x4DA33
{
	iLocal_6034 = 0;
	iLocal_6036 = 0;
	iLocal_6033 = 0;
	bLocal_5246 = false;
	iLocal_5220 = 0;
	iLocal_6916 = 0;
	GlobalFunc_7139(&Local_6997, 0);
	iLocal_5250[0] = 0;
	iLocal_5250[1] = 0;
	iLocal_5250[2] = 0;
}
























bool func_316(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11)//Position - 0x4E4D1
{
	return func_317(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 1, 0, 0, 0, 0, sParam8, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam9, GlobalFunc_648(), 0, 0, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_317(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x4E522
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
	if (func_337(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
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




















int func_337(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x4F5C4
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
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 1073741824, 1, 0);
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





















int func_358(int iParam0, struct<3> Param1, float fParam4)//Position - 0x50DA5
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			STREAMING::REQUEST_MODEL(joaat("hauler"));
			STREAMING::REQUEST_MODEL(joaat("docktrailer"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("hauler")) && STREAMING::HAS_MODEL_LOADED(joaat("docktrailer")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6149))
				{
					func_399(&iLocal_6149, joaat("hauler"), -117.9839f, -2416.627f, 5.0003f, 91.3366f, -1, 0, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6150))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6149, 0))
					{
						func_399(&iLocal_6150, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_6149, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_6149), -1, 0, 1);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_6150, 1, true);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_6149, 0, 0);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_6149, 1, 0);
						GlobalFunc_534(iLocal_6150, 0);
						GlobalFunc_534(iLocal_6149, 1);
						return 1;
					}
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6150, 0))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_6150, 1, true);
					}
					return 1;
				}
			}
			break;
		
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]))
			{
				STREAMING::REQUEST_MODEL(joaat("prop_contr_03b_ld"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_contr_03b_ld")))
				{
					iLocal_5326[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_contr_03b_ld"), -96.71f, -2455.31f, 5.02f, 1, 1, 0);
					if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_5326[0]))
					{
						OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_5326[0], 5000f, -1f, 0f, 0f, 0f, 0f, 0f, 0f, -1082130432, -1082130432, -1082130432);
					}
					ENTITY::SET_ENTITY_ROTATION(iLocal_5326[0], 0f, 0f, 55f, 2, 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5326[0], 1);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
			{
				iLocal_5326[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_contr_03b_ld"), -99.99f, -2461.02f, 5.02f, 1, 1, 0);
				if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_5326[1]))
				{
					OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_5326[1], 5000f, -1f, 0f, 0f, 0f, 0f, 0f, 0f, -1082130432, -1082130432, -1082130432);
				}
				ENTITY::SET_ENTITY_ROTATION(iLocal_5326[1], 0.03f, 0.02f, 54.13f, 2, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5326[1], 1);
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]))
			{
				STREAMING::REQUEST_MODEL(joaat("prop_contr_03b_ld"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_contr_03b_ld")))
				{
					iLocal_5326[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_contr_03b_ld"), 42.8294f, -2476.966f, 4.933219f, 1, 1, 0);
					if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_5326[0]))
					{
						OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_5326[0], 5000f, -1f, 0f, 0f, 0f, 0f, 0f, 0f, -1082130432, -1082130432, -1082130432);
					}
					ENTITY::SET_ENTITY_ROTATION(iLocal_5326[0], 0f, 0f, 55.24812f, 2, 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5326[0], 1);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
			{
				iLocal_5326[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_contr_03b_ld"), 39.75147f, -2481.113f, 4.981983f, 1, 1, 0);
				if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_5326[1]))
				{
					OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_5326[1], 5000f, -1f, 0f, 0f, 0f, 0f, 0f, 0f, -1082130432, -1082130432, -1082130432);
				}
				ENTITY::SET_ENTITY_ROTATION(iLocal_5326[1], 0f, 0f, 55.00298f, 2, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5326[1], 1);
			}
			else
			{
				return 1;
			}
			break;
		
		case 4:
			STREAMING::REQUEST_MODEL(joaat("hauler"));
			STREAMING::REQUEST_MODEL(joaat("docktrailer"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("hauler")) && STREAMING::HAS_MODEL_LOADED(joaat("docktrailer")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6146))
				{
					func_399(&iLocal_6146, joaat("hauler"), 479.47f, -3109.19f, 6.28f, 180.19f, -1, 0, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6151))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
					{
						func_399(&iLocal_6151, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_6146, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_6146), -1, 0, 1);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_6151, 1, false);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_6146, 0, 0);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6146, 0);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_6146);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_6151);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_6146, iLocal_6151, 1065353216);
						GlobalFunc_534(iLocal_6146, 2);
						GlobalFunc_534(iLocal_6151, 3);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_6146, 0, 0);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_6146, 1, 0);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 12:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
			{
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@kick_idle"))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iLocal_6134) && ENTITY::DOES_ENTITY_EXIST(uLocal_6095[4])) && ENTITY::DOES_ENTITY_EXIST(uLocal_6095[5]))
						{
							if ((!PED::IS_PED_INJURED(iLocal_6134) && !PED::IS_PED_INJURED(uLocal_6095[4])) && !PED::IS_PED_INJURED(uLocal_6095[5]))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5077))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6134, 1);
									PED::REMOVE_PED_FROM_GROUP(iLocal_6134);
									uLocal_5077 = PED::CREATE_SYNCHRONIZED_SCENE(478.596f, -3116.911f, 5.069f, 0f, 0f, 53.446f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5077, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_dockworker", 2f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_6095[4], uLocal_5077, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_guard1", 2f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_6095[5], uLocal_5077, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_guard2", 2f, -8f, 1, 16, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5077, 1);
									return 1;
								}
							}
						}
						else if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6095[4]))
							{
								func_397(4, 0);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6095[5]))
							{
								func_397(5, 0);
							}
						}
					}
				}
			}
			else if (GlobalFunc_7047(&iLocal_6134, 32, 479.753f, -3114.32f, 5.07f, 0f, 1))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_6134, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6134, 1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_6134, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6134, 1862763509);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6134, iLocal_464);
				ENTITY::SET_ENTITY_PROOFS(iLocal_6134, 0, 0, 0, 1, 0, 0, 0, 0);
				PED::SET_PED_AS_ENEMY(iLocal_6134, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_6134, 151, 1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_6134, 1, 0);
				GlobalFunc_173(&Local_47, 3, iLocal_6134, "FLOYD", 0, 1);
			}
			break;
		
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6137))
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("bodhi2"), 3);
				func_363(&iLocal_6137, 2, Param1, fParam4, 1, 0);
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("bodhi2"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("bodhi2")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_6137, 1);
						GlobalFunc_504(iLocal_6137, -1);
						GlobalFunc_503(iLocal_6137, -1);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_6137, 1);
						VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_6137, 1);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_6137, 0, 0);
						VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_6137, 0);
						return 1;
					}
				}
			}
			break;
		
		case 6:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
			{
				if (GlobalFunc_7047(&iLocal_6134, 32, Param1, fParam4, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_6134, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6134, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_6134, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6134, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6134, iLocal_464);
					ENTITY::SET_ENTITY_PROOFS(iLocal_6134, 0, 0, 0, 1, 0, 0, 0, 0);
					PED::SET_PED_AS_ENEMY(iLocal_6134, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_6134, 151, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_6134, 1, 0);
					GlobalFunc_173(&Local_47, 3, iLocal_6134, "FLOYD", 0, 1);
					if (iLocal_7196 == 1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 1, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 6, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 7, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 8, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 11, 0, 0, 0);
						PED::CLEAR_ALL_PED_PROPS(iLocal_6134);
					}
					return 1;
				}
			}
			else
			{
				if (Local_47[3 /*10*/] != iLocal_6134)
				{
					GlobalFunc_173(&Local_47, 3, iLocal_6134, "FLOYD", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_6134, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6134, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_6134, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6134, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6134, iLocal_464);
					ENTITY::SET_ENTITY_PROOFS(iLocal_6134, 0, 0, 0, 1, 0, 0, 0, 0);
					PED::SET_PED_AS_ENEMY(iLocal_6134, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_6134, 151, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_6134, 1, 0);
				}
				return 1;
			}
			break;
		
		case 7:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
			{
				if (GlobalFunc_7047(&iLocal_6135, 24, Param1, fParam4, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_6135, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6135, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_6135, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6135, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6135, iLocal_464);
					ENTITY::SET_ENTITY_PROOFS(iLocal_6135, 0, 0, 0, 1, 0, 0, 0, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_6135, 151, 1);
					PED::SET_PED_AS_ENEMY(iLocal_6135, 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_6135, 1, 0);
					GlobalFunc_173(&Local_47, 4, iLocal_6135, "WADE", 0, 1);
					return 1;
				}
			}
			else
			{
				if (Local_47[4 /*10*/] != iLocal_6135)
				{
					GlobalFunc_173(&Local_47, 4, iLocal_6135, "WADE", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_6135))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_6135, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6135, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_6135, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6135, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6135, iLocal_464);
					ENTITY::SET_ENTITY_PROOFS(iLocal_6135, 0, 0, 0, 1, 0, 0, 0, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_6135, 151, 1);
					PED::SET_PED_AS_ENEMY(iLocal_6135, 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_6135, 1, 0);
				}
				return 1;
			}
			break;
		
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6136))
			{
				STREAMING::REQUEST_MODEL(joaat("s_m_m_dockwork_01"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_dockwork_01")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6136))
					{
						func_360(&iLocal_6136, joaat("s_m_m_dockwork_01"), Local_6791, fLocal_6083, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_6136, 16);
						PED::SET_PED_CAPSULE(iLocal_6136, 0.4f);
						return 1;
					}
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 9:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6138))
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("handler"), 3);
				STREAMING::REQUEST_MODEL(joaat("handler"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("handler")))
				{
					func_399(&iLocal_6138, joaat("handler"), -129.77f, -2418.28f, 6.24f, 183.085f, -1, 0, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_6138);
					VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_6138, 0);
					GlobalFunc_534(iLocal_6138, 4);
					return 1;
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("handler"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("handler")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
					{
						return 1;
					}
				}
			}
			break;
		
		case 10:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6152))
			{
				STREAMING::REQUEST_MODEL(joaat("towtruck"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("towtruck")))
				{
					func_399(&iLocal_6152, joaat("towtruck"), 505.882f, -3053.231f, 5.0695f, 180.3786f, -1, 0, 1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_6152, "5T3ALM3");
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 11:
			if ((!ENTITY::DOES_ENTITY_EXIST(uLocal_6095[4]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_6095[5])) && !ENTITY::DOES_ENTITY_EXIST(uLocal_6095[6]))
			{
				STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")))
				{
					func_397(4, 0);
					func_397(5, 0);
					func_397(6, 0);
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(uLocal_6095[4]))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_6095[4], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
				}
				if (!PED::IS_PED_INJURED(uLocal_6095[5]))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_6095[5], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
				}
				if (!PED::IS_PED_INJURED(uLocal_6095[6]))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_6095[6], "WORLD_HUMAN_GUARD_STAND", 0, 0);
				}
				return 1;
			}
			break;
		
		case 0:
			if (GlobalFunc_105(Param1))
			{
			}
			if (fParam4 > 0f)
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_7249))
			{
				STREAMING::REQUEST_MODEL(iLocal_5375);
				STREAMING::REQUEST_MODEL(iLocal_5376);
				STREAMING::REQUEST_MODEL(iLocal_5377);
				STREAMING::REQUEST_MODEL(iLocal_5379);
				STREAMING::REQUEST_MODEL(iLocal_5380);
				STREAMING::REQUEST_MODEL(iLocal_5381);
				STREAMING::REQUEST_MODEL(iLocal_5378);
				STREAMING::REQUEST_MODEL(iLocal_5382);
				STREAMING::REQUEST_MODEL(iLocal_5383);
				STREAMING::REQUEST_COLLISION_FOR_MODEL(iLocal_5376);
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_1_p2");
				PHYSICS::ROPE_LOAD_TEXTURES();
				if (((((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_5375) && STREAMING::HAS_MODEL_LOADED(iLocal_5376)) && STREAMING::HAS_MODEL_LOADED(iLocal_5377)) && STREAMING::HAS_MODEL_LOADED(iLocal_5378)) && STREAMING::HAS_MODEL_LOADED(iLocal_5382)) && STREAMING::HAS_MODEL_LOADED(iLocal_5383)) && STREAMING::HAS_MODEL_LOADED(iLocal_5379)) && STREAMING::HAS_MODEL_LOADED(iLocal_5380)) && STREAMING::HAS_MODEL_LOADED(iLocal_5381)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Crane", 0)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Crane_Stress", 0)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Crane_Impact_Sweeteners", 0)) && STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1leadinoutlsdhs_mcs_1_p2")) && PHYSICS::ROPE_ARE_TEXTURES_LOADED())
				{
					STREAMING::REMOVE_IPL("pcranecont");
					Local_7249.f_33 = { Local_5300 };
					Local_7249 = OBJECT::CREATE_OBJECT(iLocal_5375, Local_7249.f_33, 1, 1, 0);
					ENTITY::SET_ENTITY_HEADING(Local_7249, 180f);
					ENTITY::FREEZE_ENTITY_POSITION(Local_7249, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5375);
					Local_7249.f_1 = OBJECT::CREATE_OBJECT(iLocal_5377, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249, Local_7249.f_24), 1, 1, 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_7249.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249, Local_7249.f_24), 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_7249.f_1, ENTITY::GET_ENTITY_HEADING(Local_7249));
					ENTITY::FREEZE_ENTITY_POSITION(Local_7249.f_1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5377);
					Local_7249.f_27 = { 0f, 0f, -7f };
					Local_7249.f_2 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_5376, Local_6816, 1, 1, 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_7249.f_2, 0);
					OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_7249.f_2, -1f, -1f, -1f, -1f, -1f, 1f, 2.3f, 0.7f, -1082130432, -1082130432, -1082130432);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7249.f_2, Local_7249.f_1, -1, Local_7249.f_27, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
					ENTITY::DETACH_ENTITY(Local_7249.f_2, 1, 0);
					Local_5297 = { Local_7249.f_27 - Vector(-7f, 0f, 0f) };
					Local_7249.f_13 = OBJECT::CREATE_OBJECT(iLocal_5376, Local_6816, 1, 1, 0);
					ENTITY::SET_ENTITY_HEADING(Local_7249.f_13, ENTITY::GET_ENTITY_HEADING(Local_7249.f_1));
					ENTITY::FREEZE_ENTITY_POSITION(Local_7249.f_13, 1);
					ENTITY::SET_ENTITY_VISIBLE(Local_7249.f_13, 0);
					ENTITY::SET_ENTITY_COLLISION(Local_7249.f_13, 0, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5376);
					Local_7249.f_86 = 0;
					Local_7249.f_36[0 /*3*/] = { 4.7f, 9.45f, 0.68f };
					Local_7249.f_36[1 /*3*/] = { 3.3f, 9.45f, 0.68f };
					Local_7249.f_36[2 /*3*/] = { -5f, 9.45f, 0.68f };
					Local_7249.f_36[3 /*3*/] = { -3.6f, 9.45f, 0.68f };
					Local_7249.f_36[4 /*3*/] = { 4.7f, -9.025f, 0.68f };
					Local_7249.f_36[5 /*3*/] = { 3.3f, -9.025f, 0.68f };
					Local_7249.f_36[6 /*3*/] = { -5f, -9.025f, 0.68f };
					Local_7249.f_36[7 /*3*/] = { -3.6f, -9.025f, 0.68f };
					iVar0 = 0;
					while (iVar0 < Local_7249.f_4)
					{
						if (iVar0 > 3)
						{
							iLocal_5384 = iLocal_5380;
							Local_7249.f_4[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_5384, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249, Local_7249.f_36[iVar0 /*3*/]), 1, 1, 0);
							ENTITY::SET_ENTITY_HEADING(Local_7249.f_4[iVar0], (ENTITY::GET_ENTITY_HEADING(Local_7249) - 180f));
						}
						else
						{
							Local_7249.f_4[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_5384, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249, Local_7249.f_36[iVar0 /*3*/]), 1, 1, 0);
							ENTITY::SET_ENTITY_HEADING(Local_7249.f_4[iVar0], ENTITY::GET_ENTITY_HEADING(Local_7249));
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 < Local_7249.f_4)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7249.f_4[iVar0], Local_7249, -1, Local_7249.f_36[iVar0 /*3*/], 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						iVar0++;
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5379);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5380);
					Local_7249.f_80 = AUDIO::GET_SOUND_ID();
					Local_7249.f_83 = AUDIO::GET_SOUND_ID();
					Local_7249.f_82 = AUDIO::GET_SOUND_ID();
					Local_7249.f_84 = AUDIO::GET_SOUND_ID();
					Local_7249.f_85 = AUDIO::GET_SOUND_ID();
					Local_7249.f_81 = AUDIO::GET_SOUND_ID();
					Local_7249.f_79 = 0;
				}
			}
			else if (!bLocal_5218)
			{
				if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_7249.f_2) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_7249.f_1))
				{
					if (bLocal_5249 && iLocal_7196 > 6)
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_7249.f_1, 0);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_7249.f_33, 1, 0, 0, 1);
						STREAMING::LOAD_SCENE(Local_7249.f_33);
						SYSTEM::WAIT(500);
					}
					Local_7249.f_15[0] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, -1f, -2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_6914, fLocal_6913, 0, 0, 1, 1065353216, 0, 0);
					Local_7249.f_15[1] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, -1f, 2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_6914, fLocal_6913, 0, 0, 1, 1065353216, 0, 0);
					Local_7249.f_15[2] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, 1f, 2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_6914, fLocal_6913, 0, 0, 1, 1065353216, 0, 0);
					Local_7249.f_15[3] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, 1f, 2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_6914, fLocal_6913, 0, 0, 1, 1065353216, 0, 0);
					Local_7249.f_15[4] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, -0.05f, -2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_6914, fLocal_6913, 0, 0, 1, 1065353216, 0, 0);
					Local_7249.f_15[5] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, -0.05f, 2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_6914, fLocal_6913, 0, 0, 1, 1065353216, 0, 0);
					Local_7249.f_15[6] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, 0.05f, -2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_6914, fLocal_6913, 0, 0, 1, 1065353216, 0, 0);
					Local_7249.f_15[7] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, 0.05f, 2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_6914, fLocal_6913, 0, 0, 1, 1065353216, 0, 0);
					PHYSICS::_0x36CCB9BE67B970FD(Local_7249.f_15[0], 1);
					PHYSICS::_0x36CCB9BE67B970FD(Local_7249.f_15[1], 1);
					PHYSICS::_0x36CCB9BE67B970FD(Local_7249.f_15[2], 1);
					PHYSICS::_0x36CCB9BE67B970FD(Local_7249.f_15[3], 1);
					PHYSICS::_0x36CCB9BE67B970FD(Local_7249.f_15[4], 1);
					PHYSICS::_0x36CCB9BE67B970FD(Local_7249.f_15[5], 1);
					PHYSICS::_0x36CCB9BE67B970FD(Local_7249.f_15[6], 1);
					PHYSICS::_0x36CCB9BE67B970FD(Local_7249.f_15[7], 1);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_7249.f_15[0], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_7249.f_15[1], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_7249.f_15[2], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_7249.f_15[3], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_7249.f_15[4], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_7249.f_15[5], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_7249.f_15[6], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_7249.f_15[7], 2);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_7249.f_15[0], Local_7249.f_1, Local_7249.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, Local_6949), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, Local_6952), 7f, 0, 0, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_7249.f_15[1], Local_7249.f_1, Local_7249.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, Local_6955), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, Local_6958), 7f, 0, 0, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_7249.f_15[2], Local_7249.f_1, Local_7249.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, Local_6961), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, Local_6964), 7f, 0, 0, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_7249.f_15[3], Local_7249.f_1, Local_7249.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, Local_6967), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, Local_6970), 7f, 0, 0, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_7249.f_15[4], Local_7249.f_1, Local_7249.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, Local_6973), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, Local_6976), 7f, 0, 0, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_7249.f_15[5], Local_7249.f_1, Local_7249.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, Local_6979), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, Local_6982), 7f, 0, 0, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_7249.f_15[6], Local_7249.f_1, Local_7249.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, Local_6985), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, Local_6988), 7f, 0, 0, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_7249.f_15[7], Local_7249.f_1, Local_7249.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, Local_6991), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, Local_6994), 7f, 0, 0, 0, 0);
					if (iLocal_7196 != 8)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[14]))
						{
							if (!PED::IS_PED_INJURED(iLocal_6111[14]))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5082))
								{
									uLocal_5082 = PED::CREATE_SYNCHRONIZED_SCENE(3.05f, -0.35f, 0.35f, 0f, 0f, 180f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5082, Local_7249.f_1, -1);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6111[14], uLocal_5082, "missheistdockssetup1leadinoutlsdhs_mcs_1_p2", "leadin_idle_b", 1000f, -1000f, 1, 16, 1148846080, 0);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6111[14], Local_7249.f_1, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5082, 1);
								}
							}
						}
					}
					bLocal_5218 = true;
					ENTITY::FREEZE_ENTITY_POSITION(Local_7249.f_2, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_7249.f_2, 1, 0f, 0f, 0.01f, 0, 0, 1, 0);
					if (bLocal_5249 && iLocal_7196 > 4)
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_7249.f_1, 1);
					}
					return 1;
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_7249.f_2))
					{
					}
					if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_7249.f_1))
					{
					}
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 13:
			STREAMING::REQUEST_MODEL(iLocal_5378);
			STREAMING::REQUEST_MODEL(iLocal_5382);
			STREAMING::REQUEST_MODEL(iLocal_5383);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_5378) && STREAMING::HAS_MODEL_LOADED(iLocal_5382)) && STREAMING::HAS_MODEL_LOADED(iLocal_5383))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]))
				{
					Local_7198[0 /*25*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_5378, -53.2547f, -2412.868f, 5.0007f, 1, 1, 0);
					ENTITY::SET_ENTITY_HEADING(Local_7198[0 /*25*/], 91.2705f);
					ENTITY::FREEZE_ENTITY_POSITION(Local_7198[0 /*25*/], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/].f_1))
				{
					Local_7198[0 /*25*/].f_1 = OBJECT::CREATE_OBJECT(iLocal_5382, -53.2547f, -2411.868f, 5.0007f, 1, 1, 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_7198[0 /*25*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[0 /*25*/], Local_5305), 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_7198[0 /*25*/].f_1, (ENTITY::GET_ENTITY_HEADING(Local_7198[0 /*25*/]) - 150f));
					ENTITY::FREEZE_ENTITY_POSITION(Local_7198[0 /*25*/].f_1, 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/].f_2))
				{
					Local_7198[0 /*25*/].f_2 = OBJECT::CREATE_OBJECT(iLocal_5383, -53.2547f, -2413.868f, 5.0007f, 1, 1, 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_7198[0 /*25*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[0 /*25*/], Local_5308), 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_7198[0 /*25*/].f_2, (ENTITY::GET_ENTITY_HEADING(Local_7198[0 /*25*/]) + 150f));
					ENTITY::FREEZE_ENTITY_POSITION(Local_7198[0 /*25*/].f_2, 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
				{
					Local_7198[1 /*25*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_5378, -52.8189f, -2418.336f, 5.0009f, 1, 1, 0);
					ENTITY::SET_ENTITY_HEADING(Local_7198[1 /*25*/], 91.2705f);
					ENTITY::FREEZE_ENTITY_POSITION(Local_7198[1 /*25*/], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/].f_1))
				{
					Local_7198[1 /*25*/].f_1 = OBJECT::CREATE_OBJECT(iLocal_5382, -52.8189f, -2417.336f, 5.0009f, 1, 1, 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_7198[1 /*25*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[1 /*25*/], Local_5305), 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_7198[1 /*25*/].f_1, (ENTITY::GET_ENTITY_HEADING(Local_7198[0 /*25*/]) - 150f));
					ENTITY::FREEZE_ENTITY_POSITION(Local_7198[1 /*25*/].f_1, 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/].f_2))
				{
					Local_7198[1 /*25*/].f_2 = OBJECT::CREATE_OBJECT(iLocal_5383, -52.8189f, -2415.336f, 5.0009f, 1, 1, 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_7198[1 /*25*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[1 /*25*/], Local_5308), 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_7198[1 /*25*/].f_2, (ENTITY::GET_ENTITY_HEADING(Local_7198[0 /*25*/]) + 150f));
					ENTITY::FREEZE_ENTITY_POSITION(Local_7198[1 /*25*/].f_2, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/].f_1))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7198[0 /*25*/].f_1, Local_7198[0 /*25*/], -1, Local_5305, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_7198[0 /*25*/].f_1, Local_7198[0 /*25*/], 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/].f_2))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7198[0 /*25*/].f_2, Local_7198[0 /*25*/], -1, Local_5308, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_7198[0 /*25*/].f_2, Local_7198[0 /*25*/], 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]) && ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/].f_1) && ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/].f_1))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7198[1 /*25*/].f_1, Local_7198[1 /*25*/], -1, Local_5305, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_7198[1 /*25*/].f_1, Local_7198[1 /*25*/], 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/].f_2) && ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/].f_2))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7198[1 /*25*/].f_2, Local_7198[1 /*25*/], -1, Local_5308, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_7198[1 /*25*/].f_2, Local_7198[1 /*25*/], 1);
					}
					return 1;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5378);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5382);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5383);
			}
			break;
	}
	return 0;
}


void func_360(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6)//Position - 0x52838
{
	STREAMING::REQUEST_MODEL(iParam1);
	while (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam5, 1, 1);
		if (iParam6 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
		}
	}
}



int func_363(int iParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, int iParam7)//Position - 0x52900
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
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
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
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
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var5);
			if (STREAMING::HAS_MODEL_LOADED(Var5))
			{
				bVar81 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, uParam5, 1, 1);
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
					GlobalFunc_531(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}


































void func_397(int iParam0, int iParam1)//Position - 0x5710D
{
	char cVar0[16];
	
	func_360(&(uLocal_6095[iParam0]), joaat("s_m_y_blackops_01"), Local_6189[iParam0 /*3*/], fLocal_6040[iParam0], 0);
	if (!PED::IS_PED_INJURED(uLocal_6095[iParam0]))
	{
		PED::SET_PED_COMBAT_RANGE(uLocal_6095[iParam0], 2);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_6095[iParam0], 2);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6095[iParam0], iLocal_464);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uLocal_6095[iParam0], 1);
		WEAPON::GIVE_WEAPON_TO_PED(uLocal_6095[iParam0], iLocal_7022, -1, 1, 1);
		if (iParam1 == 1)
		{
			if (iLocal_5169[iParam0] == 0)
			{
				StringCopy(&cVar0, "miss_merc", 16);
				StringIntConCat(&cVar0, iParam0, 16);
				if (!GlobalFunc_105(Local_6235[iParam0 /*13*/][0 /*3*/]))
				{
					TASK::DELETE_PATROL_ROUTE(&cVar0);
					TASK::OPEN_PATROL_ROUTE(&cVar0);
					if (!GlobalFunc_105(Local_6235[iParam0 /*13*/][0 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_6235[iParam0 /*13*/][0 /*3*/], Local_6235[iParam0 /*13*/][0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(500, 1500));
					}
					if (!GlobalFunc_105(Local_6235[iParam0 /*13*/][1 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_6235[iParam0 /*13*/][1 /*3*/], Local_6235[iParam0 /*13*/][1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
					}
					if (!GlobalFunc_105(Local_6235[iParam0 /*13*/][2 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_6235[iParam0 /*13*/][2 /*3*/], Local_6235[iParam0 /*13*/][2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
					}
					if (!GlobalFunc_105(Local_6235[iParam0 /*13*/][3 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(4, "WORLD_HUMAN_GUARD_STAND", Local_6235[iParam0 /*13*/][3 /*3*/], Local_6235[iParam0 /*13*/][3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
					}
					TASK::ADD_PATROL_ROUTE_LINK(1, 2);
					TASK::ADD_PATROL_ROUTE_LINK(2, 3);
					TASK::ADD_PATROL_ROUTE_LINK(3, 4);
					TASK::ADD_PATROL_ROUTE_LINK(4, 1);
					TASK::CLOSE_PATROL_ROUTE();
					TASK::CREATE_PATROL_ROUTE();
					if (!PED::IS_PED_INJURED(uLocal_6095[iParam0]))
					{
						TASK::TASK_PATROL(uLocal_6095[iParam0], &cVar0, 0, 1, 1);
					}
				}
				iLocal_5169[iParam0] = 1;
			}
		}
	}
}


void func_399(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, float fParam7, int iParam8)//Position - 0x57323
{
	STREAMING::REQUEST_MODEL(iParam1);
	while (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*iParam0, 1);
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		if (iParam6 >= 0)
		{
			VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam6);
		}
		if (fParam7 >= 0f)
		{
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, fParam7);
		}
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(*iParam0, iParam8);
	}
}

void func_400(char* sParam0, bool bParam1)//Position - 0x5739F
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
		while (!bVar2 && iVar1 < iLocal_212)
		{
			if (iLocal_212[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_212[iVar1] == 0)
			{
				iLocal_212[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_402(iVar0);
		if (iVar3 != -1)
		{
			iLocal_212[iVar3] = 0;
			func_401();
		}
	}
}

void func_401()//Position - 0x57415
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_212 - 1))
	{
		if (iLocal_212[iVar0] == 0)
		{
			if (iLocal_212[iVar0 + 1] != 0)
			{
				iLocal_212[iVar0] = iLocal_212[iVar0 + 1];
				iLocal_212[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_402(int iParam0)//Position - 0x57462
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_212)
	{
		if (iLocal_212[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_212[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_403(char* sParam0)//Position - 0x574A2
{
	return func_402(MISC::GET_HASH_KEY(sParam0)) != -1;
}


void func_405(bool bParam0)//Position - 0x57551
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	iLocal_5113 = 1;
	iLocal_5121 = 0;
	if (bParam0)
	{
		GlobalFunc_2781(500);
	}
}




void func_409(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x57621
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
		GlobalFunc_10960(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_Current_Checkpoint)
	{
	}
}



























































bool func_468(int iParam0)//Position - 0x5DD3F
{
	return func_358(iParam0, 0f, 0f, 0f, 0);
}

void func_469()//Position - 0x5DD51
{
	func_244(PLAYER::PLAYER_PED_ID(), 12, 2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_5128(2);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
	{
		if (!PED::IS_PED_INJURED(iLocal_6134))
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 5, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 11, 0, 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
	{
		if (!PED::IS_PED_INJURED(iLocal_6135))
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 5, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 11, 0, 0, 0);
		}
	}
}


void func_471()//Position - 0x5DED4
{
	switch (iLocal_5374)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6146, 0))
				{
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 485.275f, -3108.498f, 5.069427f, 485.7743f, -3285.951f, 17.06867f, 52f, 0, 1, 0))
				{
					iLocal_5374 = 1;
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 471.2268f, -3083.326f, 3.819052f, 497.8507f, -3085f, 16.60583f, 63.75f, 0, 1, 0))
				{
					iLocal_6035 = 0;
					while (iLocal_6035 <= 14)
					{
						if (!PED::IS_PED_INJURED(uLocal_6095[iLocal_6035]))
						{
							if ((((((((PED::HAS_PED_RECEIVED_EVENT(uLocal_6095[iLocal_6035], 122) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_6095[iLocal_6035], -15f, -15f, -15f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_6095[iLocal_6035], 15f, 15f, 15f), 0, 1)) || MISC::IS_SNIPER_BULLET_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_6095[iLocal_6035], -2f, -2f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_6095[iLocal_6035], 2f, 2f, 1f))) || PED::HAS_PED_RECEIVED_EVENT(uLocal_6095[iLocal_6035], 123)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_6095[iLocal_6035], PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(uLocal_6095[iLocal_6035], 86)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(471.6109f, -3121.304f, 13.55971f, 484.6995f, -3121.514f, 4.570057f, 12.75f, joaat("weapon_grenade"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(471.6109f, -3121.304f, 13.55971f, 484.6995f, -3121.514f, 4.570057f, 12.75f, joaat("weapon_smokegrenade"), 0)) || ((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_6095[iLocal_6035]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_6095[iLocal_6035])) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_6095[iLocal_6035], 10f, 10f, 10f, 0, 1, 0)))
							{
								iLocal_5374 = 1;
							}
						}
						iLocal_6035++;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 471.2268f, -3083.326f, 3.819052f, 497.8507f, -3085f, 16.60583f, 63.75f, 0, 1, 0))
			{
				iLocal_6035 = 0;
				while (iLocal_6035 <= 14)
				{
					if (!PED::IS_PED_INJURED(uLocal_6095[iLocal_6035]))
					{
						if ((((((((PED::HAS_PED_RECEIVED_EVENT(uLocal_6095[iLocal_6035], 122) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_6095[iLocal_6035], -15f, -15f, -15f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_6095[iLocal_6035], 15f, 15f, 15f), 0, 1)) || MISC::IS_SNIPER_BULLET_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_6095[iLocal_6035], -2f, -2f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_6095[iLocal_6035], 2f, 2f, 1f))) || PED::HAS_PED_RECEIVED_EVENT(uLocal_6095[iLocal_6035], 123)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_6095[iLocal_6035], PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(uLocal_6095[iLocal_6035], 86)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(471.6109f, -3121.304f, 13.55971f, 484.6995f, -3121.514f, 4.570057f, 12.75f, joaat("weapon_grenade"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(471.6109f, -3121.304f, 13.55971f, 484.6995f, -3121.514f, 4.570057f, 12.75f, joaat("weapon_smokegrenade"), 0)) || ((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_6095[iLocal_6035]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_6095[iLocal_6035])) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_6095[iLocal_6035], 10f, 10f, 10f, 0, 1, 0)))
						{
							iLocal_5374 = 1;
						}
					}
					iLocal_6035++;
				}
			}
			break;
		
		case 1:
			iLocal_6035 = 0;
			while (iLocal_6035 <= 14)
			{
				if (!PED::IS_PED_INJURED(uLocal_6095[iLocal_6035]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6095[iLocal_6035], iLocal_465);
					TASK::TASK_COMBAT_PED(uLocal_6095[iLocal_6035], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_5079))
				{
					AUDIO::STOP_SOUND(iLocal_5079);
					AUDIO::RELEASE_SOUND_ID(iLocal_5079);
				}
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
				iLocal_5084 = MISC::GET_GAME_TIMER();
				iLocal_5374 = 2;
				iLocal_6035++;
			}
			break;
		
		case 2:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5078))
			{
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@exit");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@exit"))
					{
						if (!PED::IS_PED_INJURED(iLocal_6134))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5077))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5077) > 0.99f)
								{
									if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@kick_idle"))
									{
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
									}
									uLocal_5078 = PED::CREATE_SYNCHRONIZED_SCENE(478.596f, -3116.911f, 5.069f, 0f, 0f, 53.446f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5078, "missheistdockssetup1ig_13@exit", "guard_beatup_exit_dockworker", 2f, -2f, 5, 16, 1148846080, 0);
								}
							}
						}
					}
				}
			}
			if (iLocal_7196 == 9 || (iLocal_7196 == 10 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 478.596f, -3116.911f, 5.069f) < 40000f))
			{
				if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
				{
					if (GlobalFunc_588(&iLocal_5084, 7000))
					{
						iLocal_7340 = 8;
						iLocal_7196 = 12;
					}
				}
			}
			break;
	}
}


int func_473()//Position - 0x5E506
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6136))
	{
		if (!PED::IS_PED_INJURED(iLocal_6136))
		{
			if (Local_47[1 /*10*/] == 0)
			{
				GlobalFunc_173(&Local_47, 1, iLocal_6136, "GATEGUARD", 0, 1);
			}
		}
	}
	else if (Local_47[1 /*10*/] != 0)
	{
		GlobalFunc_200(&Local_47, 1);
	}
	GlobalFunc_173(&Local_47, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
	{
		if (!PED::IS_PED_INJURED(iLocal_6134))
		{
			if (Local_47[3 /*10*/].f_7 == 0)
			{
				GlobalFunc_173(&Local_47, 3, iLocal_6134, "FLOYD", 0, 1);
			}
		}
	}
	else if (Local_47[3 /*10*/].f_7 == 1)
	{
		GlobalFunc_200(&Local_47, 3);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
	{
		if (!PED::IS_PED_INJURED(iLocal_6135))
		{
			if (Local_47[4 /*10*/] == 0)
			{
				GlobalFunc_173(&Local_47, 4, iLocal_6135, "WADE", 0, 1);
			}
		}
	}
	else if (Local_47[4 /*10*/] != 0)
	{
		GlobalFunc_200(&Local_47, 4);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_5394[0 /*16*/]))
	{
		if (!PED::IS_PED_INJURED(Local_5394[0 /*16*/]))
		{
			GlobalFunc_173(&Local_47, 6, Local_5394[0 /*16*/], "SUPERVISOR1", 0, 1);
		}
	}
	else if (Local_47[6 /*10*/] != 0)
	{
		GlobalFunc_200(&Local_47, 6);
	}
	if (iLocal_7196 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_5640[0 /*16*/]))
		{
			if (!PED::IS_PED_INJURED(Local_5640[0 /*16*/]))
			{
				GlobalFunc_173(&Local_47, 5, Local_5640[0 /*16*/], "LONGSHOREMAN", 0, 1);
			}
		}
		else if (Local_47[5 /*10*/] != 0)
		{
			GlobalFunc_200(&Local_47, 5);
		}
	}
	if (iLocal_7196 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_5673[0 /*16*/]))
		{
			if (!PED::IS_PED_INJURED(Local_5673[0 /*16*/]))
			{
				GlobalFunc_173(&Local_47, 7, Local_5673[0 /*16*/], "SUPERVISOR2", 0, 1);
			}
		}
		else if (Local_47[7 /*10*/] != 0)
		{
			GlobalFunc_200(&Local_47, 7);
		}
	}
	if (iLocal_7196 > 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[14]))
		{
			if (!PED::IS_PED_INJURED(iLocal_6111[14]))
			{
				GlobalFunc_173(&Local_47, 8, iLocal_6111[14], "SIGNALMAN", 0, 1);
			}
		}
		else if (Local_47[8 /*10*/] != 0)
		{
			GlobalFunc_200(&Local_47, 8);
		}
	}
	return 1;
}



void func_476()//Position - 0x5E748
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -108.5857f, -2429.462f, 26.25068f, -108.8082f, -2400.434f, 16.00068f, 13f, 0, 1, 0))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.25f);
	}
	if (!func_403("TEXT FROM RON"))
	{
		if (GlobalFunc_588(&iLocal_7378, 5000))
		{
			GlobalFunc_10725(20, "TXT_PHOTO_R", 1, 0, 0, 0, 0, 1, 0, 1);
			func_400("TEXT FROM RON", 1);
		}
	}
	func_508();
	if (!func_403("DH_1_GET_TO_TRUCK"))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_PHONE_RON"))
		{
			AUDIO::STOP_AUDIO_SCENE("DH_1_PHONE_RON");
		}
		else
		{
			AUDIO::START_AUDIO_SCENE("DH_1_GET_TO_TRUCK");
			func_400("DH_1_GET_TO_TRUCK", 1);
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6146, 0))
		{
			if (!func_403("DH_1_DRIVE_TO_DOCKS"))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_GET_TO_TRUCK"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_1_GET_TO_TRUCK");
				}
				else
				{
					AUDIO::START_AUDIO_SCENE("DH_1_DRIVE_TO_DOCKS");
					func_400("DH_1_DRIVE_TO_DOCKS", 1);
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -207.1467f, -2515.569f, 4.152911f, -187.4182f, -2515.733f, 13.29794f, 43f, 0, 1, 0))
	{
		GlobalFunc_2790(3, 1, 0);
		AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_34036[3 /*31*/], 1);
	}
	else
	{
		GlobalFunc_2447(3, 0);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 20.90446f, -2527.153f, 4.268342f, 9.272564f, -2544.316f, 11.3005f, 46.25f, 0, 1, 0))
	{
		GlobalFunc_2790(1, 1, 0);
		AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_34036[1 /*31*/], 1);
	}
	else
	{
		GlobalFunc_2447(1, 0);
	}
	func_504();
	if (!iLocal_7385)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -183.0395f, -2523.408f, 13.26272f, -208.736f, -2522.903f, 4.504209f, 12.75f, 0, 1, 0))
		{
			iLocal_7385 = 1;
		}
	}
	if (iLocal_7385)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(5.0966f, -2528.87f, 5.0503f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 300f)
		{
			GlobalFunc_2782(uLocal_6095[0], joaat("s_m_y_blackops_01"), 1, 0, 0);
			GlobalFunc_2782(uLocal_6095[1], joaat("s_m_y_blackops_01"), 1, 0, 0);
			GlobalFunc_2782(uLocal_6095[2], joaat("s_m_y_blackops_01"), 1, 0, 0);
			GlobalFunc_2782(uLocal_6095[3], joaat("s_m_y_blackops_01"), 1, 0, 0);
			GlobalFunc_2782(uLocal_6095[7], joaat("s_m_y_blackops_01"), 1, 0, 0);
			GlobalFunc_2782(uLocal_6095[8], joaat("s_m_y_blackops_01"), 1, 0, 0);
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(485.0831f, -3051.722f, 5.2262f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 100f)
	{
		if (!func_403("REQ_MERRYWEATHER_GUARDS_AT_OTHER_DOCKS"))
		{
			if (func_468(11))
			{
				func_400("REQ_MERRYWEATHER_GUARDS_AT_OTHER_DOCKS", 1);
			}
		}
	}
	if ((iLocal_6034 < 6 || iLocal_6034 == 98) || iLocal_6034 == 99)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[5 /*31*/], 1f, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[5 /*31*/], 5, 1, 0);
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 497.5187f, -3065.054f, 3.576474f, 471.4108f, -3065.454f, 35.06919f, 100f, 0, 1, 0))
		{
			func_471();
			func_502();
		}
	}
	switch (iLocal_6034)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_469();
			}
			Local_7249.f_70 = fLocal_6905;
			Local_7249.f_74 = 0f;
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6138))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_6138);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[17]))
			{
				PED::DELETE_PED(&(iLocal_6111[17]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[18]))
			{
				PED::DELETE_PED(&(iLocal_6111[18]));
			}
			if (func_473())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_6146))
					{
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_6146, iLocal_6151, 1065353216);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
					{
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							if (!PED::IS_PED_INJURED(iLocal_6134))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_6134);
								ENTITY::SET_ENTITY_COORDS(iLocal_6134, -120.1837f, -2418.383f, 5.0014f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_6134, 2.055f);
								ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_6134, 1);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -118.3164f, -2412.324f, 5f, 1f, 20000, 1048576000, 0, 1193033728);
								TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_STAND_IMPATIENT", -118.3164f, -2412.324f, 5f, 330.0682f, 0, 0, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_6134, uLocal_6175);
							}
						}
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_6151, 1, false);
						if (!PED::IS_PED_INJURED(iLocal_6111[13]))
						{
							TASK::TASK_WANDER_STANDARD(iLocal_6111[13], 1193033728, 0);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_6111[13]));
						}
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_a");
						STREAMING::REMOVE_ANIM_DICT("oddjobs@towingpleadingidle_a");
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6146, 1);
						STREAMING::REQUEST_MODEL(joaat("tiptruck"));
						iLocal_5067 = 17;
						iLocal_7379 = 0;
						iLocal_5133 = 0;
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
						func_409(8, "Drive to the other docks", 0, 0, 0, 1);
						PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
						MISC::CLEAR_AREA(476.4661f, -3040.609f, 6.0984f, 100f, 0, 0, 0, 0);
						PED::SET_PED_NON_CREATION_AREA(682.4604f, -2936.867f, 2.9499f, 260.5602f, -3529.125f, -17.7944f);
						PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 2, 1);
						ENTITY::CREATE_FORCED_OBJECT(479.2571f, -3115.551f, 5.0701f, 50f, joaat("prop_gate_docks_ld"), 1);
						GlobalFunc_5125(5, PLAYER::PLAYER_PED_ID());
						if (bLocal_5249 == 1)
						{
							Local_5300 = { -110.2902f, -2415.79f, 5.05f };
							Local_6816 = { -109.87f, -2415.71f, 14.67f };
							if (func_468(0))
							{
								iLocal_7385 = 0;
								iLocal_6034++;
							}
						}
						else
						{
							iLocal_7385 = 0;
							iLocal_6034++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_5127 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_6146, -117.1943f, -2415.818f, 5.0001f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_6146, 89.5928f);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
						{
							OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]))
						{
							OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/]));
						}
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -118.3399f, -2410.158f, 5.0013f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 145.9175f);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
						{
							if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_6146))
							{
								VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_6146, iLocal_6151, 1065353216);
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_6134))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_6146, 0))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_6134, iLocal_6146, 0);
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/]));
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_6146, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_6151, 0);
					}
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_6151, 1, false);
					STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
					STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@base");
					STREAMING::REQUEST_ANIM_DICT("amb@code_human_police_crowd_control@idle_a");
					STREAMING::REQUEST_ANIM_DICT("misslsdhs");
					STREAMING::REQUEST_MODEL(joaat("p_cs_clipboard"));
					STREAMING::REQUEST_MODEL(joaat("prop_pencil_01"));
					STREAMING::REQUEST_MODEL(joaat("tiptruck"));
					STREAMING::REQUEST_MODEL(joaat("prop_barrier_work06a"));
					iLocal_5127 = 1;
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_6146))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_6146, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_6151, 0);
					}
					func_405(1);
					func_501(21, 1);
					STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
					STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@base");
					STREAMING::REQUEST_ANIM_DICT("amb@code_human_police_crowd_control@idle_a");
					STREAMING::REQUEST_ANIM_DICT("misslsdhs");
					STREAMING::REQUEST_MODEL(joaat("p_cs_clipboard"));
					STREAMING::REQUEST_MODEL(joaat("prop_pencil_01"));
					STREAMING::REQUEST_MODEL(joaat("tiptruck"));
					STREAMING::REQUEST_MODEL(joaat("prop_barrier_work06a"));
					iLocal_6034 = 99;
				}
				else
				{
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_6146, iLocal_6151, 1065353216);
				}
			}
			break;
		
		case 99:
			STREAMING::REQUEST_MODEL(joaat("tiptruck"));
			if (((((((STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs") && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@code_human_police_crowd_control@idle_a")) && STREAMING::HAS_MODEL_LOADED(joaat("p_cs_clipboard"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pencil_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("tiptruck"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_barrier_work06a")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6153[2]))
				{
					uLocal_6153[2] = OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), -128.2126f, -2568.825f, 5.001f, 1, 1, 0);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6164[2]))
				{
					uLocal_6164[2] = OBJECT::CREATE_OBJECT(joaat("prop_pencil_01"), -128.2126f, -2568.825f, 5.001f, 1, 1, 0);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6153[3]))
				{
					uLocal_6153[3] = OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), Local_6785, 1, 1, 0);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6164[3]))
				{
					uLocal_6164[3] = OBJECT::CREATE_OBJECT(joaat("prop_pencil_01"), Local_6785, 1, 1, 0);
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[15]))
					{
						if (!PED::IS_PED_INJURED(iLocal_6111[15]))
						{
							PED::CLEAR_ALL_PED_PROPS(iLocal_6111[15]);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_6164[3], iLocal_6111[15], PED::GET_PED_BONE_INDEX(iLocal_6111[15], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_6153[3], iLocal_6111[15], PED::GET_PED_BONE_INDEX(iLocal_6111[15], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
							TASK::TASK_PLAY_ANIM(iLocal_6111[15], "misslsdhsclipboard@base", "base", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
							GlobalFunc_173(&Local_47, 5, iLocal_6111[15], "GATEGUARD", 0, 1);
							PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_6111[15], 0);
							PED::SET_PED_KEEP_TASK(iLocal_6111[15], 1);
						}
					}
					if (STREAMING::HAS_MODEL_LOADED(joaat("tiptruck")))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6148))
						{
							func_399(&iLocal_6148, joaat("tiptruck"), 491.91f, -3051.15f, 5.77f, 6.2f, -1, 1f, 0);
						}
					}
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_barrier_work06a")))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5315[0]))
						{
							iLocal_5315[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_barrier_work06a"), 488.82f, -3048.82f, 5.11f, 1, 1, 0);
						}
					}
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_barrier_work06a")))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5315[1]))
						{
							iLocal_5315[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_barrier_work06a"), 494.7f, -3049.03f, 5.11f, 1, 1, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[16]))
					{
						if (!PED::IS_PED_INJURED(iLocal_6111[16]))
						{
							PED::CLEAR_ALL_PED_PROPS(iLocal_6111[16]);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_6164[2], iLocal_6111[16], PED::GET_PED_BONE_INDEX(iLocal_6111[16], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_6153[2], iLocal_6111[16], PED::GET_PED_BONE_INDEX(iLocal_6111[16], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
							TASK::TASK_PLAY_ANIM(iLocal_6111[16], "misslsdhsclipboard@base", "base", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
							GlobalFunc_173(&Local_47, 6, iLocal_6111[16], "GATEGUARD", 0, 1);
							PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_6111[16], 0);
							PED::SET_PED_KEEP_TASK(iLocal_6111[16], 1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[21]))
					{
						if (!PED::IS_PED_INJURED(iLocal_6111[21]))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_6111[16], -1, 0, 2);
							TASK::TASK_PLAY_ANIM(0, "amb@code_human_police_crowd_control@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000));
							TASK::TASK_PLAY_ANIM(0, "amb@code_human_police_crowd_control@idle_a", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "amb@code_human_police_crowd_control@idle_a", "idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 1000));
							TASK::TASK_PLAY_ANIM(0, "amb@code_human_police_crowd_control@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "amb@code_human_police_crowd_control@idle_a", "idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "amb@code_human_police_crowd_control@idle_a", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::SET_SEQUENCE_TO_REPEAT(uLocal_6175, 1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_6111[21], uLocal_6175);
							PED::SET_PED_KEEP_TASK(iLocal_6111[21], 1);
							PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_6111[21], 0);
						}
					}
					if (bLocal_5249)
					{
						iLocal_6034 = 3;
					}
					else
					{
						iLocal_6034 = 2;
					}
				}
			}
			break;
		
		case 2:
			Local_7382 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (Local_7382.f_2 > 6.1f)
			{
				if (func_316(&Local_6997, -106.4769f, -2404.531f, 5.0013f, 0.1f, 0.1f, 2f, 1, "DESCRA", 0, 1, -1))
				{
				}
				else if (Local_7382.f_2 < 6.1f)
				{
					if (!func_403("DS1_37"))
					{
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_6997, 1))
								{
									if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_37", 8, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
										func_400("DS1_37", 1);
									}
								}
							}
						}
						else
						{
							func_400("DS1_37", 1);
						}
					}
					else
					{
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_1");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_2");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_3");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_4");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_5");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_6");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_7");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_8");
						GlobalFunc_5652(&Local_6997, 1, 0);
						iLocal_7386 = MISC::GET_GAME_TIMER();
						iLocal_6034 = 98;
					}
				}
			}
			else if (Local_7382.f_2 < 6.1f)
			{
				if (!func_403("DS1_37"))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_6997, 1))
							{
								if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_37", 8, 0, 0, 0))
								{
									func_400("DS1_37", 1);
								}
							}
						}
					}
					else
					{
						func_400("DS1_37", 1);
					}
				}
				else
				{
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_1");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_2");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_3");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_4");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_5");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_6");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_7");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_8");
					GlobalFunc_5652(&Local_6997, 1, 0);
					iLocal_7386 = MISC::GET_GAME_TIMER();
					iLocal_6034 = 98;
				}
			}
			break;
		
		case 98:
			if (!PED::IS_PED_INJURED(iLocal_6134))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_6134, iLocal_6146, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_6134, -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_6134, iLocal_6146, 20000, 0, 1f, 1048576, 0);
						}
					}
				}
			}
			if (GlobalFunc_588(&iLocal_7386, 5000))
			{
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_6134) || PED::IS_PED_IN_VEHICLE(iLocal_6134, iLocal_6146, 0))
						{
							GlobalFunc_5652(&Local_6997, 1, 0);
							iLocal_5256 = 0;
							iLocal_5074 = MISC::GET_GAME_TIMER();
							iLocal_6034 = 3;
						}
					}
				}
			}
			if (!func_403("DS1_37b"))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_6997, 1))
					{
						if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_37b", 8, 0, 0, 0))
						{
							func_400("DS1_37b", 1);
							if (!PED::IS_PED_INJURED(iLocal_6134))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
								{
									TASK::CLEAR_PED_TASKS(iLocal_6134);
									TASK::TASK_ENTER_VEHICLE(iLocal_6134, iLocal_6146, 20000, 0, 1f, 1048576, 0);
								}
							}
							iLocal_5074 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_6134))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
				{
					if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_6134) || PED::IS_PED_IN_VEHICLE(iLocal_6134, iLocal_6146, 0))
					{
						GlobalFunc_5652(&Local_6997, 1, 0);
						iLocal_5256 = 0;
						iLocal_5074 = MISC::GET_GAME_TIMER();
						iLocal_6034 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_6134))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_6134, iLocal_6146, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_6134, -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_6134, iLocal_6146, 20000, 0, 1f, 1048576, 0);
						}
					}
				}
			}
			if (!func_403("GET IN BIG RIG"))
			{
				if (!GlobalFunc_5172(&Local_6997, 2))
				{
					GlobalFunc_5884("AW_TREVTRU");
					func_400("GET IN BIG RIG", 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_6146))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 471.7297f, -3121.692f, 4.570057f, 484.0707f, -3121.886f, 11.82006f, 11.25f, 0, 1, 0))
				{
					iLocal_7197 = iLocal_7196;
					iLocal_7340 = 8;
					iLocal_7196 = 12;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.6729f, -3107.97f, 4.570056f, 474.0042f, -3108.687f, 12.07006f, 12.75f, 0, 1, 0))
			{
				iLocal_7197 = iLocal_7196;
				iLocal_7340 = 8;
				iLocal_7196 = 12;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_6146))
				{
					if (func_498(&Local_6997, 476.4661f, -3040.609f, 5.0913f, 0.1f, 0.1f, 2f, 0, iLocal_6134, iLocal_6146, "AW_DRI_SUB", "AW_DONT_LEAVE_T", "", "AW_GETBACK_INT", 0, 0, 1, -1))
					{
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Local_6997.f_5))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 476.4661f, -3040.609f, 6.0984f, 7f, 7f, 7f, 0, 1, 0))
							{
								STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
								if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a"))
								{
									GlobalFunc_5105();
									if (!PED::IS_PED_INJURED(iLocal_6111[15]))
									{
										fVar0 = GlobalFunc_156(iLocal_6111[15], iLocal_6146, 1);
									}
									if (!PED::IS_PED_INJURED(iLocal_6111[16]))
									{
										fVar1 = GlobalFunc_156(iLocal_6111[16], iLocal_6146, 1);
									}
									if (fVar0 < fVar1)
									{
										iVar2 = iLocal_6111[15];
									}
									else
									{
										iVar2 = iLocal_6111[16];
									}
									if (!PED::IS_PED_INJURED(iVar2))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
										TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
										TASK::TASK_PERFORM_SEQUENCE(iVar2, uLocal_6175);
									}
									CUTSCENE::REMOVE_CUTSCENE();
									CUTSCENE::REQUEST_CUTSCENE("LSDHS_MCS_2", 8);
									STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
									GlobalFunc_5652(&Local_6997, 1, 0);
									iLocal_6034++;
								}
							}
							if (!func_403("DS1_37c"))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_6997, 1))
									{
										if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_37c", 7, 0, 0, 0))
										{
											RECORDING::_0x293220DA1B46CEBC(8f, 10f, 4);
											func_400("DS1_37c", 1);
										}
									}
								}
							}
							else if (iLocal_5256 == 0)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_6997, 1))
									{
										if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_16", 7, 0, 0, 0))
										{
											iLocal_5256 = 1;
										}
									}
								}
							}
							else if (!func_403("DS1_39"))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_6997, 1))
									{
										if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_39", 7, 0, 0, 0))
										{
											func_400("DS1_39", 1);
										}
									}
								}
							}
						}
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6146, 0))
						{
							if (!HUD::DOES_BLIP_EXIST(Local_6997))
							{
								Local_6997 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_6146);
								HUD::SET_BLIP_COLOUR(Local_6997, 3);
							}
						}
						if (iLocal_5256 == 1)
						{
							if (HUD::DOES_BLIP_EXIST(Local_6997.f_5))
							{
								if (GlobalFunc_620())
								{
									HUD::CLEAR_PRINTS();
									GlobalFunc_619(0);
								}
							}
							else if (!GlobalFunc_620())
							{
								if (GlobalFunc_663("AW_GETBACK_INT", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								GlobalFunc_619(1);
							}
						}
					}
				}
				else if (GlobalFunc_588(&iLocal_5074, 3000))
				{
					if (HUD::DOES_BLIP_EXIST(Local_6997.f_5) || HUD::DOES_BLIP_EXIST(Local_6997))
					{
						GlobalFunc_5652(&Local_6997, 1, 0);
					}
				}
			}
			break;
		
		case 4:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Floyd", iLocal_6134, 0);
			}
			if (!func_403("DS1_17"))
			{
				if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_17", 8, 0, 0, 0))
				{
					func_400("DS1_17", 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_6146))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 471.7297f, -3121.692f, 4.570057f, 484.0707f, -3121.886f, 11.82006f, 11.25f, 0, 1, 0))
				{
					iLocal_7197 = iLocal_7196;
					iLocal_7340 = 8;
					iLocal_7196 = 12;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.6729f, -3107.97f, 4.570056f, 474.0042f, -3108.687f, 12.07006f, 12.75f, 0, 1, 0))
			{
				iLocal_7197 = iLocal_7196;
				iLocal_7340 = 8;
				iLocal_7196 = 12;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_6146))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_6151, 478.7119f, -3105.557f, 4.570057f, 479.1657f, -3123.542f, 10.82006f, 6.5f, 0, 1, 0))
						{
							if (func_498(&Local_6997, 478.8654f, -3107.202f, 5.069f, 5f, 5f, 2f, 1, iLocal_6134, iLocal_6146, "", "AW_DONT_LEAVE_T", "AW_DOCK1", "AW_GETBACK_INT", 0, 0, 1, -1))
							{
								if (!func_403("HALT"))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Truck_Stop", iLocal_6146, "DOCKS_HEIST_SETUP_SOUNDS", 0, 0);
										func_400("HALT", 1);
									}
								}
								if (GlobalFunc_530(iLocal_6146, 6f, 1, 1056964608, 0, 1))
								{
									RECORDING::_0x293220DA1B46CEBC(6f, 0f, 3);
									iLocal_5126 = 1;
									GlobalFunc_4935();
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
									CUTSCENE::REQUEST_CUTSCENE("LSDHS_MCS_2", 8);
									iLocal_5208 = 1;
									iLocal_5060 = 0;
									iLocal_5057 = 0;
									iLocal_6034++;
								}
							}
						}
						else
						{
							iLocal_7197 = iLocal_7196;
							iLocal_7340 = 8;
							iLocal_7196 = 12;
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(Local_6997.f_5) || HUD::DOES_BLIP_EXIST(Local_6997))
				{
					GlobalFunc_5652(&Local_6997, 1, 0);
				}
			}
			break;
		
		case 5:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_DRIVE_TO_DOCKS"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_1_DRIVE_TO_DOCKS");
				}
				func_482();
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@main_action");
				STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
				iLocal_7381 = MISC::GET_GAME_TIMER();
				iLocal_6034++;
			}
			break;
		
		case 6:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6152))
			{
				func_468(10);
			}
			else if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@main_action"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6137))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_6137);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4931(2, 0));
					}
					else
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4931(2, 0));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
					{
						PED::DELETE_PED(&iLocal_6135);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(24));
					}
					else
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(24));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_5772[0 /*16*/].f_6))
					{
						OBJECT::DELETE_OBJECT(&(Local_5772[0 /*16*/].f_6));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_package_01"));
					}
					else
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_package_01"));
					}
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_4@start_idle");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@base");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_4@main_action");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_a");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_3@talk");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_3@base");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@main_action");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_5@base");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_7");
					STREAMING::REMOVE_ANIM_DICT("misslsdhsclipboard@idle_a");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_c");
					func_480();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6146, 0);
					}
					GlobalFunc_583(5, PLAYER::PLAYER_PED_ID(), 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[5 /*31*/], 0f, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[5 /*31*/], 1, 1, 0);
					iLocal_6034++;
				}
			}
			break;
		
		case 7:
			if (GlobalFunc_588(&iLocal_7381, 3000))
			{
				func_471();
			}
			if (!func_403("DS1_SOF"))
			{
				if (!GlobalFunc_5172(&Local_6997, 1))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_SOF", 7, 0, 0, 0))
						{
							func_400("DS1_SOF", 1);
						}
					}
				}
			}
			if (func_477(&Local_6997, 476.6509f, -3048.033f, 5.0939f, 522.4032f, -3048.688f, 4.068941f, 465.622f, -3048.312f, 21.16893f, 8f, 0, "LEAVE_RESTA", 0, 1, -1))
			{
				RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
				GlobalFunc_5652(&Local_6997, 1, 0);
				iLocal_6034++;
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_6997.f_5))
				{
					HUD::REMOVE_BLIP(&(Local_6997.f_5));
				}
				if (SYSTEM::VDIST(476.6509f, -3048.033f, 5.0939f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 100f)
				{
					if (HUD::DOES_BLIP_EXIST(Local_6997.f_5))
					{
						HUD::REMOVE_BLIP(&(Local_6997.f_5));
					}
					GlobalFunc_5652(&Local_6997, 1, 0);
					iLocal_6034++;
				}
			}
			break;
		
		case 8:
			GlobalFunc_2427(6, 0);
			GlobalFunc_2434(6, 0);
			func_292();
			func_291();
			break;
	}
}

bool func_477(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, char* sParam12, bool bParam13, bool bParam14, int iParam15)//Position - 0x600C0
{
	return func_317(uParam0, Param1, GlobalFunc_716(), Param4, Param7, iParam11, 1, 0, 0, 0, 0, sParam12, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam13, GlobalFunc_648(), 1, 0, bParam14, iParam15, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 1, fParam10);
}



void func_480()//Position - 0x601DE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (PHYSICS::DOES_ROPE_EXIST(&(Local_7249.f_15[iVar0])))
		{
			PHYSICS::DELETE_ROPE(&(Local_7249.f_15[iVar0]));
		}
		bLocal_5218 = false;
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249))
	{
		OBJECT::DELETE_OBJECT(&Local_7249);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_1))
	{
		OBJECT::DELETE_OBJECT(&(Local_7249.f_1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_2))
	{
		OBJECT::DELETE_OBJECT(&(Local_7249.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_3))
	{
		OBJECT::DELETE_OBJECT(&(Local_7249.f_3));
	}
	iVar0 = 0;
	while (iVar0 < Local_7249.f_4)
	{
		GlobalFunc_2537(&(Local_7249.f_4[iVar0]), 1);
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_13))
	{
		OBJECT::DELETE_OBJECT(&(Local_7249.f_13));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_14))
	{
		OBJECT::DELETE_OBJECT(&(Local_7249.f_14));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5376);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5377);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5378);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5379);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5380);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5381);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5382);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5383);
}


void func_482()//Position - 0x60329
{
	int iVar0;
	int iVar1;
	
	iLocal_5257 = 1;
	while (iLocal_5257)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_ThePortOfLSHeistSetup", 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[5 /*31*/], 1f, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[5 /*31*/], 5, 1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6152))
		{
			func_468(10);
		}
		if (iLocal_5060 == 0)
		{
			if (iLocal_5058)
			{
				iLocal_5058 = 0;
			}
			else if (iLocal_5057 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@main_action");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@main_action") && STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@main_action"))
				{
					iLocal_5257 = 1;
					iLocal_5168 = 0;
					CUTSCENE::REQUEST_CUTSCENE("LSDHS_MCS_2", 8);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
					{
						AUDIO::SET_VEH_RADIO_STATION(iLocal_6146, "OFF");
					}
					iLocal_5057++;
				}
			}
			else if (iLocal_5057 == 1)
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					else
					{
						SYSTEM::WAIT(0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_6146, "Trevors_Lorry", 0, 0, 0);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_6146, 0, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_6146, 1, 0, 0f);
					}
					if (!PED::IS_PED_INJURED(iLocal_6134))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_6134, "Floyd", 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_6095[4]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_6095[4], "Guard_kick_Floyd_back", 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_6095[5]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_6095[5], "Office_guard", 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_6095[6]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_6095[6], "Guard_with_gun", 0, 0, 0);
					}
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					GlobalFunc_8316(1, 1, 1, 0);
					iLocal_5056 = 0;
					iLocal_5057 = 0;
					iLocal_5060 = 1;
				}
			}
		}
		if (iLocal_5060 == 1)
		{
			if (iLocal_5168 == 1)
			{
				if (!iLocal_5056)
				{
					if (GlobalFunc_1080())
					{
						iLocal_5056 = 1;
					}
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_5168 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_6151);
					}
					MISC::CLEAR_AREA(476.4661f, -3040.609f, 6.0984f, 100f, 1, 1, 0, 0);
					iLocal_5168 = 1;
				}
			}
			if (!func_403("DAMAGE FLOYD"))
			{
				iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Floyd", joaat("cs_floyd"));
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				}
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("Floyd_Beaten")))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							PED::APPLY_PED_DAMAGE_DECAL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 1, 0.426f, 0.755f, 218.157f, 1f, 1f, 3, 1, "bruise");
							func_400("DAMAGE FLOYD", 1);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_briefcase_02"), -1, 1, 1);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 1, 1, 0);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3000, 1.2757f, 0, 0);
				}
				else
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 3f, 3000, 1.2757f, 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Floyd", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(iLocal_6134) && ENTITY::DOES_ENTITY_EXIST(uLocal_6095[4])) && ENTITY::DOES_ENTITY_EXIST(uLocal_6095[5]))
					{
						if ((!PED::IS_PED_INJURED(iLocal_6134) && !PED::IS_PED_INJURED(uLocal_6095[4])) && !PED::IS_PED_INJURED(uLocal_6095[5]))
						{
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5077))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6134, 1);
								PED::REMOVE_PED_FROM_GROUP(iLocal_6134);
								uLocal_5077 = PED::CREATE_SYNCHRONIZED_SCENE(478.596f, -3116.911f, 5.069f, 0f, 0f, 53.446f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5077, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_dockworker", 2f, -8f, 5, 16, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(uLocal_6095[4], uLocal_5077, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_guard1", 2f, -8f, 5, 16, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(uLocal_6095[5], uLocal_5077, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_guard2", 2f, -8f, 5, 16, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5077, 1);
								PED::SET_PED_KEEP_TASK(iLocal_6134, 1);
								PED::SET_PED_KEEP_TASK(uLocal_6095[4], 1);
								PED::SET_PED_KEEP_TASK(uLocal_6095[5], 1);
							}
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_5168 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_6095[6]))
				{
					if (!PED::IS_PED_INJURED(uLocal_6095[6]))
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_6095[6], 481.6f, -3119.79f, 6.07f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uLocal_6095[6], 51.57f);
						TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_6095[6], "WORLD_HUMAN_GUARD_STAND", 0, 0);
					}
				}
				iLocal_5060 = 2;
			}
		}
		if (iLocal_5060 == 2)
		{
			if (iLocal_5056)
			{
				RECORDING::_0x13B350B8AD0EEE10();
				CUTSCENE::STOP_CUTSCENE(0);
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			RECORDING::_0x81CBAE94390F9F89();
			GlobalFunc_8316(0, 1, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_5057 = 0;
			iLocal_5060 = 0;
			iLocal_5257 = 0;
		}
		if (iLocal_5060 == 3)
		{
			CUTSCENE::STOP_CUTSCENE(0);
			iLocal_5056 = 1;
			iLocal_5060 = 1;
		}
	}
}
















bool func_498(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x60CC5
{
	return func_499(uParam0, Param1, Param4, iParam7, iParam8, 0, 0, iParam9, sParam10, sParam11, sParam11, sParam11, sParam11, sParam12, sParam13, bParam14, bParam15, bParam16, iParam17);
}

bool func_499(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)//Position - 0x60CF9
{
	return func_317(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, iParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}


void func_501(int iParam0, int iParam1)//Position - 0x60D55
{
	char cVar0[16];
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6111[iParam0]))
	{
		if (GlobalFunc_105(Local_6431[iParam0 /*3*/]))
		{
		}
		func_360(&(iLocal_6111[iParam0]), joaat("s_m_m_dockwork_01"), Local_6431[iParam0 /*3*/], fLocal_6056[iParam0], 0);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_6111[iParam0], 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_6111[iParam0], 185, 1);
	}
	else if (!PED::IS_PED_INJURED(iLocal_6111[iParam0]))
	{
		PED::SET_PED_COMBAT_RANGE(iLocal_6111[iParam0], 2);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_6111[iParam0], 3);
		PED::SET_PED_CONFIG_FLAG(iLocal_6111[iParam0], 128, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6111[iParam0], iLocal_464);
		if (iParam0 == 7)
		{
			if (!PED::IS_PED_INJURED(iLocal_6111[14]))
			{
				if (Local_47[8 /*10*/] == 0)
				{
					GlobalFunc_173(&Local_47, 8, iLocal_6111[14], "SIGNALMAN", 0, 1);
				}
			}
		}
		if (iParam1 == 1)
		{
			if (iLocal_5185[iParam0] == 0)
			{
				StringCopy(&cVar0, "miss_dock", 16);
				StringIntConCat(&cVar0, iParam0, 16);
				if (!GlobalFunc_105(Local_6498[iParam0 /*13*/][0 /*3*/]))
				{
					TASK::DELETE_PATROL_ROUTE(&cVar0);
					TASK::OPEN_PATROL_ROUTE(&cVar0);
					if (!GlobalFunc_105(Local_6498[iParam0 /*13*/][0 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(1, "StandGuard", Local_6498[iParam0 /*13*/][0 /*3*/], Local_6498[iParam0 /*13*/][0 /*3*/], 1000);
					}
					if (!GlobalFunc_105(Local_6498[iParam0 /*13*/][1 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(2, "StandGuard", Local_6498[iParam0 /*13*/][1 /*3*/], Local_6498[iParam0 /*13*/][1 /*3*/], 1000);
					}
					if (!GlobalFunc_105(Local_6498[iParam0 /*13*/][2 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(3, "StandGuard", Local_6498[iParam0 /*13*/][2 /*3*/], Local_6498[iParam0 /*13*/][2 /*3*/], 1000);
					}
					if (!GlobalFunc_105(Local_6498[iParam0 /*13*/][3 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(4, "StandGuard", Local_6498[iParam0 /*13*/][3 /*3*/], Local_6498[iParam0 /*13*/][3 /*3*/], 1000);
					}
					TASK::ADD_PATROL_ROUTE_LINK(1, 2);
					TASK::ADD_PATROL_ROUTE_LINK(2, 3);
					TASK::ADD_PATROL_ROUTE_LINK(3, 4);
					TASK::ADD_PATROL_ROUTE_LINK(4, 1);
					TASK::CLOSE_PATROL_ROUTE();
					TASK::CREATE_PATROL_ROUTE();
					if (!PED::IS_PED_INJURED(iLocal_6111[iParam0]))
					{
						TASK::TASK_PATROL(iLocal_6111[iParam0], &cVar0, 0, 1, 1);
					}
				}
				iLocal_5185[iParam0] = 1;
			}
		}
	}
}

void func_502()//Position - 0x60F9C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6146, 0))
		{
			if (iLocal_5133 == 0)
			{
				GlobalFunc_2427(6, 1);
				iLocal_6035 = 0;
				while (iLocal_6035 <= 14)
				{
					if (!PED::IS_PED_INJURED(uLocal_6095[iLocal_6035]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6095[iLocal_6035], iLocal_464);
					}
					iLocal_6035++;
				}
				iLocal_5133 = 1;
			}
		}
		else if (iLocal_5133 == 1)
		{
			GlobalFunc_2427(6, 0);
			GlobalFunc_2434(6, 0);
			iLocal_6035 = 0;
			while (iLocal_6035 <= 14)
			{
				if (!PED::IS_PED_INJURED(uLocal_6095[iLocal_6035]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6095[iLocal_6035], iLocal_465);
				}
				iLocal_6035++;
			}
			iLocal_5133 = 0;
		}
	}
	else if (iLocal_5133 == 1)
	{
		GlobalFunc_2427(6, 0);
		GlobalFunc_2434(6, 0);
		iLocal_6035 = 0;
		while (iLocal_6035 <= 14)
		{
			if (!PED::IS_PED_INJURED(uLocal_6095[iLocal_6035]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6095[iLocal_6035], iLocal_465);
			}
			iLocal_6035++;
		}
		iLocal_5133 = 0;
	}
}


int func_504()//Position - 0x61103
{
	if (iLocal_7196 == 2)
	{
		if (iLocal_5250[0] == 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_6785, 1) < 100f)
			{
				STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
				STREAMING::REQUEST_MODEL(joaat("s_m_m_dockwork_01"));
				STREAMING::REQUEST_MODEL(joaat("biff"));
				STREAMING::REQUEST_MODEL(joaat("forklift"));
				if (((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_dockwork_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("biff"))) && STREAMING::HAS_MODEL_LOADED(joaat("forklift")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6139[0]))
					{
						func_399(&(uLocal_6139[0]), joaat("biff"), Local_6797[0 /*3*/], fLocal_6084[0], -1, 1f, 0);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6139[1]))
					{
						func_399(&(uLocal_6139[1]), joaat("forklift"), Local_6797[1 /*3*/], fLocal_6084[1], -1, 1f, 0);
					}
					else
					{
						func_397(0, 1);
						func_397(1, 1);
						func_397(2, 1);
						func_397(3, 0);
						func_397(7, 0);
						func_397(8, 0);
						func_501(4, 1);
						func_501(5, 1);
						func_501(6, 1);
						func_501(7, 1);
						func_501(8, 1);
						if (iLocal_7196 != 6)
						{
							func_501(12, 1);
						}
						func_501(13, 1);
						func_501(14, 1);
						func_501(17, 1);
						func_501(18, 1);
						iLocal_5250[0] = 1;
					}
				}
			}
		}
	}
	if (iLocal_7196 > 2 && iLocal_7196 < 5)
	{
		if (iLocal_5250[0] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			STREAMING::REQUEST_MODEL(joaat("s_m_m_dockwork_01"));
			STREAMING::REQUEST_MODEL(joaat("biff"));
			STREAMING::REQUEST_MODEL(joaat("forklift"));
			if (((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_dockwork_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("biff"))) && STREAMING::HAS_MODEL_LOADED(joaat("forklift")))
			{
				if (iLocal_7196 == 3)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6139[2]))
					{
						func_399(&(uLocal_6139[2]), joaat("biff"), Local_6797[2 /*3*/], fLocal_6084[2], -1, 1f, 0);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6139[3]))
					{
						func_399(&(uLocal_6139[3]), joaat("biff"), Local_6797[3 /*3*/], fLocal_6084[3], -1, 1f, 0);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6139[0]))
					{
						func_399(&(uLocal_6139[0]), joaat("biff"), Local_6797[0 /*3*/], fLocal_6084[0], -1, 1f, 0);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6139[1]))
					{
						func_399(&(uLocal_6139[1]), joaat("forklift"), Local_6797[1 /*3*/], fLocal_6084[1], -1, 1f, 0);
					}
					else
					{
						func_397(0, 1);
						func_397(1, 1);
						func_397(2, 1);
						func_397(3, 0);
						func_397(7, 0);
						func_397(8, 0);
						func_501(4, 1);
						func_501(5, 1);
						func_501(6, 1);
						func_501(7, 1);
						func_501(8, 1);
						if (iLocal_7196 != 6)
						{
							func_501(12, 1);
						}
						func_501(13, 1);
						func_501(14, 1);
						func_501(17, 1);
						func_501(18, 1);
						iLocal_5250[0] = 1;
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6139[1]))
				{
					func_399(&(uLocal_6139[1]), joaat("forklift"), Local_6797[1 /*3*/], fLocal_6084[1], -1, 1f, 0);
				}
				else
				{
					func_397(0, 1);
					func_397(1, 1);
					func_397(2, 1);
					func_397(3, 0);
					func_397(7, 0);
					func_397(8, 0);
					func_501(4, 1);
					func_501(5, 1);
					func_501(6, 1);
					func_501(7, 1);
					func_501(8, 1);
					if (iLocal_7196 != 6)
					{
						func_501(12, 1);
					}
					func_501(13, 1);
					func_501(14, 1);
					func_501(17, 1);
					func_501(18, 1);
					iLocal_5250[0] = 1;
				}
			}
		}
	}
	if (iLocal_7196 > 4)
	{
		if (iLocal_5250[0] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
			STREAMING::REQUEST_MODEL(joaat("s_m_m_dockwork_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_blackops_01")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_dockwork_01")))
			{
				func_397(0, 1);
				func_397(1, 1);
				func_397(2, 1);
				func_397(3, 0);
				func_397(7, 0);
				func_397(8, 0);
				func_501(4, 1);
				func_501(5, 1);
				func_501(6, 1);
				func_501(7, 1);
				func_501(8, 1);
				if (iLocal_7196 != 6)
				{
					func_501(12, 1);
				}
				func_501(13, 1);
				func_501(14, 1);
				func_501(17, 1);
				func_501(18, 1);
				iLocal_5250[0] = 1;
			}
		}
	}
	if (iLocal_7196 > 3 && iLocal_7196 < 11)
	{
		if (iLocal_5250[1] == 0)
		{
			if (iLocal_5250[0] == 1)
			{
				STREAMING::REQUEST_MODEL(joaat("handler"));
				STREAMING::REQUEST_MODEL(joaat("forklift"));
				STREAMING::REQUEST_MODEL(joaat("prop_contr_03b_ld"));
				if ((STREAMING::HAS_MODEL_LOADED(joaat("forklift")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_contr_03b_ld"))) && STREAMING::HAS_MODEL_LOADED(joaat("handler")))
				{
					if (iLocal_7196 < 7)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6138))
						{
							if (iLocal_7196 == 6)
							{
								func_399(&iLocal_6138, joaat("handler"), -92.7994f, -2448.478f, 5.0163f, 257.5271f, -1, 1f, 0);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6138, 0);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_6138, 0);
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_6138, 0, 0);
								VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_6138, 0);
							}
							else
							{
								func_399(&iLocal_6138, joaat("handler"), -129.77f, -2418.28f, 6.24f, 183.085f, -1, 1f, 0);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6138, 0);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_6138, 0);
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_6138, 0, 0);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_6138, 1);
								VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_6138, 0);
							}
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_6095[3]))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_6095[3], "WORLD_HUMAN_GUARD_STAND", -123.91f, -2352.94f, 9.32f, -0.21f, 0, 0, 1);
					}
					if (!PED::IS_PED_INJURED(uLocal_6095[7]))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_6095[7], "WORLD_HUMAN_SMOKING", -133.26f, -2379.25f, 9.32f, 153.86f, 0, 0, 1);
					}
					if (!PED::IS_PED_INJURED(uLocal_6095[8]))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_6095[8], "WORLD_HUMAN_BINOCULARS", -216.83f, -2376.18f, 26.46f, -160.35f, 0, 0, 1);
					}
					if (!PED::IS_PED_INJURED(iLocal_6111[6]))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_6111[6], "WORLD_HUMAN_WELDING", 0, 0);
						PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_6111[6], 0);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_6111[6], 16);
					}
					if (!PED::IS_PED_INJURED(iLocal_6111[8]))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_6111[8], "WORLD_HUMAN_STAND_MOBILE", 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_6111[13]))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_6111[13], "WORLD_HUMAN_CLIPBOARD", 0, 0);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_6111[13], 16);
					}
					iLocal_5250[1] = 1;
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_6111[6]))
		{
			PED::SET_PED_CAPSULE(iLocal_6111[6], 0.5f);
		}
	}
	if (iLocal_7196 == 7)
	{
		if (iLocal_5250[3] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("hauler"));
			STREAMING::REQUEST_MODEL(joaat("docktrailer"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("hauler")) && STREAMING::HAS_MODEL_LOADED(joaat("docktrailer")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6149))
				{
					func_399(&iLocal_6149, joaat("hauler"), -117.9839f, -2416.627f, 5.0003f, 91.3366f, -1, 0, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6150))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6149, 0))
					{
						func_399(&iLocal_6150, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_6149, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_6149), -1, 0, 1);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_6149);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_6150);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_6150, 1, true);
					}
				}
				else
				{
					iLocal_5250[3] = 1;
				}
			}
		}
	}
	if (iLocal_7196 == 8)
	{
		if (iLocal_5250[3] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("hauler"));
			STREAMING::REQUEST_MODEL(joaat("docktrailer"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("hauler")) && STREAMING::HAS_MODEL_LOADED(joaat("docktrailer")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6146))
				{
					func_399(&iLocal_6146, joaat("hauler"), -117.9839f, -2416.627f, 5.0003f, 91.3366f, -1, 0, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6151))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
					{
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_6146, 0, 0);
						func_399(&iLocal_6151, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_6146, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_6146), -1, 0, 1);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_6146);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_6151);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_6151, 1, true);
					}
				}
				else
				{
					iLocal_5250[3] = 1;
				}
			}
		}
	}
	if (iLocal_7196 > 8)
	{
		if (iLocal_5250[2] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_m_dockwork_01"));
			STREAMING::REQUEST_MODEL(joaat("tiptruck"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_dockwork_01")) && STREAMING::HAS_MODEL_LOADED(joaat("tiptruck")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6147))
				{
					func_399(&iLocal_6147, joaat("tiptruck"), 465.8751f, -3037.084f, 5.0686f, 126.3433f, -1, 0, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6111[15]))
				{
					func_501(15, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6111[16]))
				{
					func_501(16, 1);
				}
				else
				{
					iLocal_5250[2] = 1;
				}
			}
		}
	}
	if (iLocal_7196 > 2)
	{
		if (iLocal_7196 == 3)
		{
			if (iLocal_5250[0] == 1)
			{
				func_505();
				return 1;
			}
		}
		if (iLocal_7196 == 3)
		{
			if (iLocal_5250[0] == 1)
			{
				func_505();
				return 1;
			}
		}
		if (iLocal_7196 == 4)
		{
			if (iLocal_5250[0] == 1 && iLocal_5250[1] == 1)
			{
				func_505();
				return 1;
			}
		}
		if (iLocal_7196 == 5)
		{
			if (iLocal_5250[0] == 1 && iLocal_5250[1] == 1)
			{
				func_505();
				return 1;
			}
		}
		if (iLocal_7196 == 6)
		{
			if (iLocal_5250[0] == 1 && iLocal_5250[1] == 1)
			{
				func_505();
				return 1;
			}
		}
		if (iLocal_7196 == 7)
		{
			if ((iLocal_5250[0] == 1 && iLocal_5250[1] == 1) && iLocal_5250[3] == 1)
			{
				func_505();
				return 1;
			}
		}
		if (iLocal_7196 == 8)
		{
			if ((iLocal_5250[0] == 1 && iLocal_5250[1] == 1) && iLocal_5250[3] == 1)
			{
				func_505();
				return 1;
			}
		}
		if (iLocal_7196 == 9)
		{
			if ((iLocal_5250[0] == 1 && iLocal_5250[1] == 1) && iLocal_5250[2] == 1)
			{
				func_505();
				return 1;
			}
		}
	}
	return 0;
}

void func_505()//Position - 0x61B7D
{
	int iVar0;
	
	if (iLocal_343 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_343 - 1))
		{
			if (iLocal_344[iVar0] != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_344[iVar0]);
				iLocal_344[iVar0] = 0;
			}
			iVar0++;
		}
	}
	iLocal_343 = 0;
}



void func_508()//Position - 0x61CA0
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(-119.67f, -2415.13f, 6f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 100f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_7249))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_7249))
			{
				OBJECT::DELETE_OBJECT(&Local_7249);
				OBJECT::DELETE_OBJECT(&(Local_7249.f_1));
				OBJECT::DELETE_OBJECT(&(Local_7249.f_2));
				OBJECT::DELETE_OBJECT(&(Local_7249.f_13));
				OBJECT::DELETE_OBJECT(&(Local_7249.f_4[0]));
				OBJECT::DELETE_OBJECT(&(Local_7249.f_4[1]));
				OBJECT::DELETE_OBJECT(&(Local_7249.f_4[2]));
				OBJECT::DELETE_OBJECT(&(Local_7249.f_4[3]));
				OBJECT::DELETE_OBJECT(&(Local_7249.f_4[4]));
				OBJECT::DELETE_OBJECT(&(Local_7249.f_4[5]));
				OBJECT::DELETE_OBJECT(&(Local_7249.f_4[6]));
				OBJECT::DELETE_OBJECT(&(Local_7249.f_4[7]));
				OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/]));
				OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/].f_1));
				OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/].f_2));
				OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/]));
				OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/].f_1));
				OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/].f_2));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5375);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5376);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5377);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5378);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5379);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5380);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5381);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5382);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5383);
				STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_a");
				STREAMING::REQUEST_IPL("pcranecont");
			}
		}
	}
}













void func_521()//Position - 0x62CDF
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -108.5857f, -2429.462f, 26.25068f, -108.8082f, -2400.434f, 16.00068f, 13f, 0, 1, 0))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.25f);
	}
	if (!func_403("DH_1_TAKE_PHOTOS"))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_USE_CRANE"))
		{
			AUDIO::STOP_AUDIO_SCENE("DH_1_USE_CRANE");
		}
		else
		{
			AUDIO::START_AUDIO_SCENE("DH_1_TAKE_PHOTOS");
			RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
			func_400("DH_1_TAKE_PHOTOS", 1);
		}
	}
	if (iLocal_6034 > 0)
	{
		if (!iLocal_7375)
		{
			if (GlobalFunc_2796())
			{
				GlobalFunc_565(585, 1, 0);
				iLocal_7375 = 1;
			}
		}
		else if (!GlobalFunc_2796())
		{
			iLocal_7375 = 0;
		}
	}
	func_547(0);
	if (iLocal_6034 > 2 && iLocal_6034 != 66)
	{
		func_543();
	}
	if (iLocal_7377 == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
	}
	else if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	if (iLocal_6034 > 2)
	{
		if (!func_403("START SKIP FADE"))
		{
			if (bLocal_5249 == 1)
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_5090 = MISC::GET_GAME_TIMER();
					func_400("START SKIP FADE", 1);
				}
			}
		}
		else if (CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN())
		{
			if (GlobalFunc_588(&iLocal_5090, 800))
			{
				func_405(1);
				bLocal_5249 = false;
			}
		}
	}
	switch (iLocal_6034)
	{
		case 0:
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_1");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_2");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_3");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_4");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_5");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_6");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_7");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_8");
			iLocal_7377 = 0;
			iLocal_7376 = 1;
			GlobalFunc_2795(1);
			iLocal_7375 = 0;
			Local_5300 = { -110.2902f, -2415.79f, 5.05f };
			Local_6816 = { -109.87f, -2415.71f, 14.67f };
			if (bLocal_5249 == 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				if (func_468(0))
				{
					func_409(7, "Photograph Boat", 0, 0, 0, 1);
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					iLocal_6034++;
				}
			}
			else
			{
				Global_24677 = 0;
				func_409(7, "Photograph Boat", 0, 0, 0, 1);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
				iLocal_6034++;
			}
			break;
		
		case 1:
			Local_5300 = { -110.2902f, -2415.79f, 5.05f };
			if (bLocal_5249 == 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			}
			if (HUD::IS_RADAR_HIDDEN())
			{
				HUD::DISPLAY_RADAR(1);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_469();
			}
			GlobalFunc_2794(20);
			if (func_540(0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
				{
					if (func_473())
					{
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_6146, iLocal_6151, 1065353216);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -114.5969f, -2406.811f, 22.2282f, 2f, 2f, 2f, 0, 1, 0))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -114.5969f, -2406.811f, 22.2282f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 359.8527f);
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
						{
							OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/].f_1))
						{
							OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/].f_1));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/].f_2));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]))
						{
							OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/].f_1))
						{
							OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/].f_1));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/].f_2));
						}
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_6151, 1, false);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(PLAYER::PLAYER_PED_ID(), 1);
						ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						if (!GlobalFunc_116(0))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_5067 = 13;
						iLocal_5061 = 0;
						iLocal_5062 = 0;
						if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_1))
						{
							ENTITY::SET_ENTITY_COLLISION(Local_7249.f_1, 1, 0);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_377))
						{
							HUD::REMOVE_BLIP(&uLocal_377);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_5312))
						{
							HUD::REMOVE_BLIP(&uLocal_5312);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_5313))
						{
							HUD::REMOVE_BLIP(&uLocal_5313);
						}
						iLocal_6034++;
					}
				}
			}
			break;
		
		case 2:
			if (bLocal_5249 == 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6146))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6151))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
					{
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_6146, iLocal_6151, 1065353216);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6146))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_6146);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6151))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_6151);
				}
			}
			GlobalFunc_2793(1);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			GlobalFunc_8316(0, 1, 1, 0);
			GlobalFunc_7632(0);
			HUD::UNLOCK_MINIMAP_ANGLE();
			if (bLocal_5249 == 0)
			{
				func_405(1);
			}
			iLocal_6034 = 66;
			break;
		
		case 66:
			if (bLocal_5249 == 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			}
			if (!func_403("DH1_START"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("DH1_START");
				func_400("DH1_START", 1);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (!func_403("DS1_SNAP"))
				{
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_SNAP", 8, 0, 0, 0))
					{
						func_400("DS1_SNAP", 1);
					}
				}
				else if (bLocal_5249 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_7249))
					{
						if (func_534(&Local_6997, -114.5757f, -2407.023f, 22.4f, 0.5f, 0.5f, 2f, 1, "AW_VANTAGE", 0, 1, -1, 1))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_377))
							{
								HUD::REMOVE_BLIP(&uLocal_377);
							}
							HUD::REMOVE_BLIP(&(Local_6997.f_5));
							if (GlobalFunc_663("AW_VANTAGE", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_7377 = 1;
							iLocal_6034 = 3;
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -114.5977f, -2406.989f, 22.04523f, -112.7933f, -2407.079f, 24.33722f, 1.75f, 0, 1, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_377))
							{
								HUD::REMOVE_BLIP(&uLocal_377);
							}
							HUD::REMOVE_BLIP(&(Local_6997.f_5));
							if (GlobalFunc_663("AW_VANTAGE", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_7377 = 1;
							iLocal_6034 = 3;
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_377))
					{
						HUD::REMOVE_BLIP(&uLocal_377);
					}
					HUD::REMOVE_BLIP(&(Local_6997.f_5));
					if (GlobalFunc_663("AW_VANTAGE", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					iLocal_6034 = 3;
				}
			}
			break;
		
		case 3:
			if (!func_403("AW_TAKE_PHOTO"))
			{
				if (!GlobalFunc_5172(&Local_6997, 1))
				{
					GlobalFunc_5884("AW_TAKE_PHOTO");
					func_400("AW_TAKE_PHOTO", 1);
				}
			}
			if (MISC::IS_BIT_SET(Global_2263, 21))
			{
				if (GlobalFunc_74("PHOTO_H1A"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("s_m_m_dockwork_01"), -84.0127f, -2365.912f, 16.5003f, 1) && GlobalFunc_742(-84.0127f, -2365.912f, 16.5003f, 0.2f, 200f))
			{
				if (GlobalFunc_2796())
				{
					if (!GlobalFunc_2561())
					{
						HUD::CLEAR_HELP(1);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						iLocal_5331 = MISC::GET_GAME_TIMER();
						iLocal_5061 = 1;
						iLocal_6034 = 99;
					}
					if (iLocal_6034 != 99)
					{
						if (iLocal_7376)
						{
							iLocal_7376 = 0;
						}
					}
				}
			}
			break;
		
		case 99:
			GlobalFunc_5077();
			if (!GlobalFunc_2796())
			{
				if (!PED::IS_PED_INJURED(uLocal_6095[0]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_6095[0]);
				}
				if (!PED::IS_PED_INJURED(uLocal_6095[1]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_6095[1]);
				}
				if (!PED::IS_PED_INJURED(uLocal_6095[2]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_6095[2]);
				}
				if (!PED::IS_PED_INJURED(uLocal_6095[3]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_6095[3]);
				}
				iLocal_6034 = 4;
			}
			break;
		
		case 4:
			GlobalFunc_5077();
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
			if (MISC::IS_BIT_SET(Global_2263, 21))
			{
				if (GlobalFunc_74("PHOTO_H2A"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (((!PED::IS_PED_INJURED(uLocal_6095[0]) && !PED::IS_PED_INJURED(uLocal_6095[1])) && !PED::IS_PED_INJURED(uLocal_6095[2])) && !PED::IS_PED_INJURED(uLocal_6095[3]))
			{
				if (((PED::IS_TRACKED_PED_VISIBLE(uLocal_6095[0]) || PED::IS_TRACKED_PED_VISIBLE(uLocal_6095[1])) || PED::IS_TRACKED_PED_VISIBLE(uLocal_6095[2])) || PED::IS_TRACKED_PED_VISIBLE(uLocal_6095[3]))
				{
					if (((func_528(uLocal_6095[0], fLocal_5287, fLocal_5288) || func_528(uLocal_6095[1], fLocal_5287, fLocal_5288)) || func_528(uLocal_6095[2], fLocal_5287, fLocal_5288)) || func_528(uLocal_6095[3], fLocal_5287, fLocal_5288))
					{
						if (GlobalFunc_2796())
						{
							if (!GlobalFunc_2561())
							{
								HUD::CLEAR_HELP(1);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
								iLocal_5061 = 2;
								iLocal_5331 = MISC::GET_GAME_TIMER();
								iLocal_6034 = 98;
							}
							if (iLocal_6034 != 98)
							{
								if (iLocal_7376)
								{
									iLocal_7376 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 98:
			GlobalFunc_5077();
			if (!GlobalFunc_2796())
			{
				iLocal_6034 = 5;
			}
			break;
		
		case 5:
			GlobalFunc_5077();
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
			if (MISC::IS_BIT_SET(Global_2263, 21))
			{
				if (GlobalFunc_74("PHOTO_H2A"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("s_m_m_dockwork_01"), -220.3576f, -2365.85f, 28.6856f, 1))
			{
				if (GlobalFunc_2796() && GlobalFunc_588(&iLocal_5331, 2200))
				{
					if (!GlobalFunc_2561())
					{
						if (func_527())
						{
							func_526(0);
						}
						GlobalFunc_2792(1);
						GlobalFunc_5884("PHOTO_OB1");
						iLocal_5061 = 3;
						iLocal_6034++;
						SYSTEM::SETTIMERA(0);
					}
					if (iLocal_6034 != 6)
					{
						if (iLocal_7376)
						{
							iLocal_7376 = 0;
						}
					}
				}
			}
			break;
		
		case 6:
			GlobalFunc_5077();
			if (GlobalFunc_666())
			{
				if (GlobalFunc_116(0))
				{
					GlobalFunc_553(578);
					GlobalFunc_2775(20);
					iLocal_6034++;
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
			break;
		
		case 7:
			if (GlobalFunc_2791(20))
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
				iLocal_7377 = 0;
				iLocal_6034++;
				GlobalFunc_2792(0);
				SYSTEM::SETTIMERA(0);
			}
			break;
		
		case 8:
			if (!func_403("DH_1_PHONE_RON"))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_TAKE_PHOTOS"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_1_TAKE_PHOTOS");
				}
				else
				{
					AUDIO::START_AUDIO_SCENE("DH_1_PHONE_RON");
					func_400("DH_1_PHONE_RON", 1);
				}
			}
			if (SYSTEM::TIMERA() > 2000)
			{
				iLocal_5257 = 0;
				GlobalFunc_2793(0);
				SYSTEM::SETTIMERA(0);
				iLocal_7378 = MISC::GET_GAME_TIMER();
				iLocal_6034++;
			}
			break;
		
		case 9:
			if (SYSTEM::TIMERA() > 2000)
			{
				iLocal_6034++;
			}
			break;
		
		case 10:
			if (func_732())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6146, 1);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("DH1_STOP");
				GlobalFunc_2795(0);
				func_292();
				iLocal_7196 = 9;
			}
			break;
	}
}





void func_526(int iParam0)//Position - 0x638D4
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 15);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 15);
	}
}

int func_527()//Position - 0x638F7
{
	if (MISC::IS_BIT_SET(Global_2263, 15))
	{
		return 1;
	}
	return 0;
}

int func_528(int iParam0, float fParam1, float fParam2)//Position - 0x63913
{
	float fVar0;
	float fVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
				{
					if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 0.001f))
					{
						GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, 1), &fVar0, &fVar1);
						if (((fVar0 > (0.5f - fParam1) && fVar0 < (0.5f + fParam1)) && fVar1 > (0.5f - fParam2)) && fVar1 < (0.5f + fParam2))
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






bool func_534(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x63A3D
{
	return func_317(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 3, 0, 0, 0, 0, sParam8, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam9, GlobalFunc_648(), 0, 0, bParam10, iParam11, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), bParam12, 1065353216);
}






int func_540(bool bParam0)//Position - 0x63C2B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249))
	{
		iVar0 = 0;
		SYSTEM::WAIT(0);
		if (bParam0)
		{
			STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1trevor_crane"))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5366))
				{
					uLocal_5366 = PED::CREATE_SYNCHRONIZED_SCENE(-0.1f, -0.15f, -0.35f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5366, Local_7249.f_1, -1);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_5366, "missheistdockssetup1trevor_crane", "idle", 8f, -8f, 1, 16, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_5366, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5366, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/].f_1))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7198[0 /*25*/].f_1, Local_7198[0 /*25*/], -1, Local_5305, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/].f_2))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7198[0 /*25*/].f_2, Local_7198[0 /*25*/], -1, Local_5308, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/].f_1))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7198[1 /*25*/].f_1, Local_7198[1 /*25*/], -1, Local_5305, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/].f_2))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7198[1 /*25*/].f_2, Local_7198[1 /*25*/], -1, Local_5308, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
		}
		ENTITY::DETACH_ENTITY(Local_7249.f_1, 1, 1);
		ENTITY::FREEZE_ENTITY_POSITION(Local_7249.f_1, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7249.f_1, Local_7249, -1, Local_7249.f_24, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		iVar0 = 0;
		while (iVar0 < Local_7249.f_4)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7249.f_4[iVar0], Local_7249, -1, Local_7249.f_36[iVar0 /*3*/], 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			iVar0++;
		}
		return 1;
	}
	return 0;
}



void func_543()//Position - 0x63E62
{
	switch (iLocal_5062)
	{
		case 0:
			if (!MISC::IS_BIT_SET(Global_2263, 21))
			{
			}
			if (!GlobalFunc_2283())
			{
				if (GlobalFunc_74("PH_HELP2"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (!GlobalFunc_116(0))
			{
				if (iLocal_5061 == 3)
				{
					if (!GlobalFunc_2791(20))
					{
						if (!func_403("PH_HELP6"))
						{
							GlobalFunc_159("PH_HELP6", -1);
							func_400("PH_HELP6", 1);
						}
					}
				}
				if (GlobalFunc_74("PH_HELP2"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			else
			{
				if (GlobalFunc_74("PH_HELP1"))
				{
					HUD::CLEAR_HELP(1);
				}
				iLocal_5062++;
			}
			break;
		
		case 1:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
			{
				if (iLocal_5061 != 3)
				{
					if (!GlobalFunc_74("PH_HELP2"))
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
						GlobalFunc_Display_Help_Text("PH_HELP2");
					}
				}
			}
			else
			{
				if (iLocal_5061 == 3)
				{
					if (!GlobalFunc_2791(20))
					{
						if (!func_403("PH_HELP6"))
						{
							GlobalFunc_159("PH_HELP6", -1);
							func_400("PH_HELP6", 1);
						}
					}
				}
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(1);
				}
				if (MISC::IS_BIT_SET(Global_2263, 18))
				{
					iLocal_5062++;
				}
			}
			if (!GlobalFunc_116(0))
			{
				iLocal_5062 = 0;
			}
			break;
		
		case 2:
			if (iLocal_5061 == 0)
			{
				if (!GlobalFunc_74("PHOTO_H1A"))
				{
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(1);
					}
					SYSTEM::SETTIMERA(0);
					if (!MISC::IS_BIT_SET(Global_2263, 21))
					{
						GlobalFunc_159("PHOTO_H1A", 60000);
					}
				}
			}
			else
			{
				if (iLocal_5061 == 1)
				{
					iLocal_5062++;
				}
				if (iLocal_5061 == 2)
				{
					iLocal_5062 = 4;
				}
				if (iLocal_5061 == 3)
				{
					iLocal_5062 = 5;
				}
			}
			if (GlobalFunc_116(0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					iLocal_5062 = 1;
				}
			}
			else
			{
				iLocal_5062 = 0;
			}
			break;
		
		case 3:
			if (iLocal_5061 == 1)
			{
				if (!GlobalFunc_74("PHOTO_H2A"))
				{
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(1);
					}
					SYSTEM::SETTIMERA(0);
					if (!MISC::IS_BIT_SET(Global_2263, 21))
					{
						GlobalFunc_159("PHOTO_H2A", 60000);
					}
				}
			}
			else
			{
				if (iLocal_5061 == 2)
				{
					iLocal_5062++;
				}
				if (iLocal_5061 == 3)
				{
					iLocal_5062 = 5;
				}
			}
			if (GlobalFunc_116(0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					iLocal_5062 = 1;
				}
			}
			else
			{
				iLocal_5062 = 0;
			}
			break;
		
		case 4:
			if (iLocal_5061 == 2)
			{
				if (!GlobalFunc_74("PHOTO_H3A"))
				{
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(1);
					}
					SYSTEM::SETTIMERA(0);
					if (!MISC::IS_BIT_SET(Global_2263, 21))
					{
						GlobalFunc_159("PHOTO_H3A", 60000);
					}
				}
			}
			else if (iLocal_5061 == 3)
			{
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(1);
				}
				SYSTEM::SETTIMERA(0);
				if (!MISC::IS_BIT_SET(Global_2263, 21))
				{
					GlobalFunc_Display_Help_Text("PH_HELP5");
					iLocal_5062++;
				}
			}
			if (GlobalFunc_116(0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					iLocal_5062 = 1;
				}
			}
			else
			{
				iLocal_5062 = 0;
			}
			break;
		
		case 5:
			if (GlobalFunc_116(0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) != 0)
				{
					if (GlobalFunc_666())
					{
						if (GlobalFunc_74("PH_HELP5"))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					if (!GlobalFunc_2791(20))
					{
					}
					else
					{
						if (GlobalFunc_74("PH_HELP5"))
						{
							HUD::CLEAR_HELP(1);
						}
						iLocal_5062++;
					}
				}
				else
				{
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(1);
					}
					iLocal_5062 = 0;
				}
			}
			else
			{
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(1);
				}
				iLocal_5062 = 0;
			}
			break;
		
		case 6:
			if (iLocal_5061 == 3)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					iLocal_5062++;
					HUD::CLEAR_HELP(1);
				}
			}
			break;
	}
}




void func_547(int iParam0)//Position - 0x64256
{
	if (iParam0 == 0)
	{
	}
	ENTITY::CREATE_MODEL_HIDE(-72.16f, -2390.39f, 24.11f, 200f, joaat("prop_dock_crane_02"), iParam0);
}



void func_550()//Position - 0x64343
{
	if (!func_403("DH_1_USE_CRANE"))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_CLIMB_UP_CRANE"))
		{
			AUDIO::STOP_AUDIO_SCENE("DH_1_CLIMB_UP_CRANE");
		}
		else
		{
			AUDIO::START_AUDIO_SCENE("DH_1_USE_CRANE");
			func_400("DH_1_USE_CRANE", 1);
		}
	}
	func_547(0);
	func_504();
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	switch (iLocal_6034)
	{
		case 0:
			func_568();
			uLocal_5100 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
			if (bLocal_5249)
			{
				Local_7249.f_70 = 0.297f;
				Local_7249.f_74 = 0f;
				Local_5300 = { -53.6982f, -2415.79f, 5.05f };
				Local_6816 = { -53.02f, -2416.04f, 14.75f };
				func_400("DS1_10", 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_6138, -166.8165f, -2460.648f, 5.2973f, 1, 0, 0, 1);
					VEHICLE::DELETE_VEHICLE(&iLocal_6138);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("handler"));
				}
				while ((!func_468(0) || !func_468(1)) || !func_468(13))
				{
					SYSTEM::WAIT(0);
					RECORDING::_0x208784099002BC30("M_ThePortOfLSHeistSetup", 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6149, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6150, 0))
				{
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_6149, iLocal_6150, 1065353216);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_6149, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_6150, 1);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_6150, 1, true);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_6150, 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_6150, 1);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_469();
				}
				if (func_473())
				{
					if (!PED::IS_PED_INJURED(iLocal_6134))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_6134, -114.33f, -2426.18f, 6f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_6134, -4.84f);
					}
					uLocal_5314 = HUD::GET_MAIN_PLAYER_BLIP_ID();
					if (HUD::DOES_BLIP_EXIST(uLocal_5314))
					{
						HUD::SET_BLIP_ALPHA(uLocal_5314, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[12]))
					{
						PED::DELETE_PED(&(iLocal_6111[12]));
					}
					Global_24677 = 0;
					iLocal_5067 = 12;
					iLocal_5063 = 0;
					STREAMING::REMOVE_IPL("pcranecont");
					func_567(1);
					func_409(6, "Use Crane", 0, 0, 0, 1);
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
					GRAPHICS::_0x0AE73D8DF3A762B2(0);
					iLocal_6034++;
				}
			}
			else
			{
				func_400("DS1_10", 1);
				func_409(6, "Use Crane", 0, 0, 0, 1);
				func_473();
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::DESTROY_CAM(uLocal_6176, 0);
				func_563(1);
				iLocal_5166 = 0;
				iLocal_5165 = 0;
				iLocal_5063 = 0;
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				GRAPHICS::_0x0AE73D8DF3A762B2(0);
				iLocal_6034++;
			}
			break;
		
		case 1:
			if (!bLocal_5249)
			{
				func_563(1);
				if (func_540(1))
				{
					if (!PED::IS_PED_INJURED(iLocal_6111[13]))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_6111[13], -116.91f, -2401.23f, 6f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_6111[13], 163.87f);
					}
					if (!PED::IS_PED_INJURED(Local_5673[0 /*16*/]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_6164[1]))
						{
							OBJECT::DELETE_OBJECT(&(uLocal_6164[1]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_6153[1]))
						{
							OBJECT::DELETE_OBJECT(&(uLocal_6153[1]));
						}
						TASK::TASK_WANDER_IN_AREA(Local_5673[0 /*16*/], -149.3773f, -2482.709f, 5.0189f, 15f, 1077936128, 1086324736);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_6138, -166.8165f, -2460.648f, 5.2973f, 1, 0, 0, 1);
						VEHICLE::DELETE_VEHICLE(&iLocal_6138);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("handler"));
					}
					else
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_6138);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("handler"));
					}
					iLocal_6034++;
				}
			}
			else if (func_540(1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6149, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6150, 0))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_6149))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_6150, 1, true);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_6149, iLocal_6150, 1065353216);
						ENTITY::SET_ENTITY_PROOFS(iLocal_6150, 0, 0, 0, 1, 0, 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_6111[11]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_6139[0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_6139[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_6111[11], uLocal_6139[0], 0))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_6139[0], 1, "AWDock1", 1);
								VEHICLE::SET_PLAYBACK_SPEED(uLocal_6139[0], 0.8f);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6149, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_6150))
					{
						if (!PED::IS_PED_INJURED(iLocal_6111[13]))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_6111[13], -116.91f, -2401.23f, 6f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_6111[13], 163.87f);
						}
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_6149, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_6150, 1);
						iLocal_6034++;
					}
				}
			}
			break;
		
		case 2:
			func_563(1);
			if (bLocal_5249 == 0)
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_7249))
			{
				bLocal_5249 = false;
				STREAMING::REQUEST_ANIM_DICT("misslsdhs");
				Local_7249.f_77 = 0;
				func_405(1);
				if (CAM::DOES_CAM_EXIST(uLocal_5099))
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_5304, uLocal_5099, 2000, 1, 1);
				}
				AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", 1);
				AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_04_PUNK");
				GlobalFunc_574(584, 0);
				GlobalFunc_6685(0);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.2f);
				iLocal_6034++;
			}
			break;
		
		case 3:
			GlobalFunc_7629();
			PAD::DISABLE_CONTROL_ACTION(0, 85, 1);
			if (!bLocal_5249)
			{
				if (!iLocal_5166)
				{
					if (func_468(1))
					{
						iLocal_5166 = 1;
					}
				}
			}
			if (!iLocal_5165)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6149, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6150, 0))
					{
						if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_6149))
						{
							VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_6149, iLocal_6150, 1065353216);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_6149, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_6150, 1);
							VEHICLE::SET_VEHICLE_EXTRA(iLocal_6150, 1, true);
							iLocal_5165 = 1;
						}
					}
				}
			}
			PAD::_0x7F4724035FDCA1DD(0);
			PAD::_0x7F4724035FDCA1DD(2);
			func_563(0);
			func_556();
			if (bLocal_5246)
			{
				if (!PED::IS_PED_INJURED(iLocal_6111[13]))
				{
					if (func_403("CLAMP SOUND"))
					{
						AUDIO::STOP_SOUND(iLocal_5093);
						func_400("CLAMP SOUND", 0);
					}
					GlobalFunc_571(0, -1);
					GlobalFunc_200(&Local_47, 8);
					GlobalFunc_173(&Local_47, 8, iLocal_6111[13], "SIGNALMAN", 0, 1);
					iLocal_6034++;
				}
			}
			break;
		
		case 4:
			func_554();
			if (iLocal_5303)
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_THEFT_EXPORT_CARS_CRANE_SECTION_SCENE");
				iLocal_5303 = 0;
			}
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
			GRAPHICS::_0x0AE73D8DF3A762B2(1);
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
			func_553();
			iLocal_6034++;
			break;
		
		case 5:
			uLocal_5314 = HUD::GET_MAIN_PLAYER_BLIP_ID();
			if (HUD::DOES_BLIP_EXIST(uLocal_5314))
			{
				HUD::SET_BLIP_ALPHA(uLocal_5314, 100);
			}
			GlobalFunc_703(&uLocal_6846);
			GlobalFunc_703(&uLocal_5311);
			CAM::STOP_GAMEPLAY_HINT(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_6146, 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6146, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_6151, 1);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_377))
			{
				HUD::REMOVE_BLIP(&uLocal_377);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_5312))
			{
				HUD::REMOVE_BLIP(&uLocal_5312);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_5313))
			{
				HUD::REMOVE_BLIP(&uLocal_5313);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1trevor_crane");
			SYSTEM::SETTIMERA(0);
			AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", 0);
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
			iLocal_6034++;
			break;
		
		case 6:
			if (func_732())
			{
				STREAMING::REMOVE_ANIM_DICT("map_objects");
				func_551();
				func_292();
				func_291();
			}
			break;
	}
}

void func_551()//Position - 0x64A83
{
	if (HUD::DOES_BLIP_EXIST(uLocal_378))
	{
		HUD::REMOVE_BLIP(&uLocal_378);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_377))
	{
		HUD::REMOVE_BLIP(&uLocal_377);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_379))
	{
		HUD::REMOVE_BLIP(&uLocal_379);
	}
}


void func_553()//Position - 0x64AD6
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_7341)
		{
			PAD::_RESET_INPUT_MAPPING_SCHEME();
			iLocal_7341 = 0;
		}
	}
}

void func_554()//Position - 0x64AF3
{
	int iVar0;
	
	SYSTEM::SETTIMERA(0);
	iLocal_5257 = 1;
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	while (iLocal_5257)
	{
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		if (!func_403("DS1_10j"))
		{
			if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10j", 8, 0, 0, 0))
			{
				func_400("DS1_10j", 1);
			}
		}
		switch (iLocal_5295)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1trevor_crane"))
				{
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					iLocal_5127 = 0;
					if (!PED::IS_PED_INJURED(iLocal_6111[13]))
					{
						PED::CLEAR_ALL_PED_PROPS(iLocal_6111[13]);
					}
					iVar0 = 0;
					while (iVar0 < Local_7198)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_7198[iVar0 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(Local_7198[iVar0 /*25*/]))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_7198[iVar0 /*25*/]))
							{
								ENTITY::DETACH_ENTITY(Local_7198[iVar0 /*25*/], 1, 1);
								ENTITY::SET_ENTITY_COORDS(Local_7198[iVar0 /*25*/], -110.2111f, -2416.435f, 6.472473f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(Local_7198[iVar0 /*25*/], -0.051485f, 1E-06f, 91.33805f, 2, 1);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_6151) && !ENTITY::IS_ENTITY_DEAD(iLocal_6151))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7198[iVar0 /*25*/], iLocal_6151, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_6151, -110.2111f, -2416.435f, 6.472473f), 0f, 0f, 0f, 1, 0, 1, 0, 2, 1);
								}
							}
						}
						iVar0++;
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					GlobalFunc_7632(0);
					CAM::DESTROY_ALL_CAMS(0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					GlobalFunc_8316(1, 1, 1, 0);
					Local_7249.f_70 = 0.297f;
					Local_7249.f_74 = 0f;
					iLocal_5119 = 1;
					func_405(1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					GlobalFunc_4935();
					GlobalFunc_200(&Local_47, 8);
					GlobalFunc_173(&Local_47, 8, iLocal_6111[13], "SIGNALMAN", 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[14]))
					{
						PED::DELETE_PED(&(iLocal_6111[14]));
					}
					if (!CAM::DOES_CAM_EXIST(uLocal_6176))
					{
						uLocal_6176 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
					}
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_7249, -110.2902f, -2415.79f, 5f, 0, 0, 1);
					CAM::PLAY_CAM_ANIM(uLocal_6176, "get_out_cam", "missheistdockssetup1trevor_crane", -108.078f, -2413.115f, 20.586f, 0f, 0f, 180f, 0, 2);
					CAM::SET_CAM_ACTIVE(uLocal_6176, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					GlobalFunc_8316(1, 1, 1, 0);
					uLocal_5366 = PED::CREATE_SYNCHRONIZED_SCENE(-0.1f, -0.1f, -0.35f, 0f, 0f, 0f, 2);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_5366, 1);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5366, 0);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5366, Local_7249.f_1, -1);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_5366, "missheistdockssetup1trevor_crane", "get_out", 8f, -4f, 5, 0, 1148846080, 0);
					AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", 0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					iLocal_5295++;
				}
				break;
			
			case 1:
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs"))
				{
					if (!PED::IS_PED_INJURED(iLocal_6111[13]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "misslsdhs", "reaction_to_truck", 8f, -4f, -1, 262144, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "misslsdhs", "wave_truck", 8f, -4f, -1, 262144, 0, 0, 0, 0);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_CLIPBOARD", 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_6111[13], uLocal_6175);
					}
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
					if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					}
					ENTITY::SET_ENTITY_COLLISION(Local_7249.f_1, 1, 0);
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(uLocal_5100);
					iLocal_5295++;
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5366))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5366) > 0.95f)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(PLAYER::PLAYER_PED_ID(), -105.3195f, -2603.989f, 5.0007f, 0);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						CAM::SET_WIDESCREEN_BORDERS(0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-90f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						GlobalFunc_2781(500);
						HUD::CLEAR_PRINTS();
						CAM::RENDER_SCRIPT_CAMS(0, 1, 1000, 1, 0, 0);
						CAM::SET_WIDESCREEN_BORDERS(0, 0);
						MISC::SET_TIME_SCALE(1f);
						HUD::DISPLAY_RADAR(1);
						STREAMING::REMOVE_ANIM_DICT("misslsdhs");
						GlobalFunc_8316(0, 1, 1, 0);
						HUD::DISPLAY_HUD(1);
						GlobalFunc_7632(0);
						HUD::CLEAR_HELP(1);
						GlobalFunc_4935();
						RECORDING::_0x81CBAE94390F9F89();
						GlobalFunc_4937(0, 0);
						GlobalFunc_8316(0, 1, 1, 0);
						iLocal_5295 = 0;
						iLocal_5113 = 0;
						iLocal_5257 = 0;
					}
				}
				break;
		}
	}
}


void func_556()//Position - 0x6501D
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	struct<3> Var25;
	
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_5289);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_5289);
	func_560();
	if (iLocal_5063 > 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_2))
		{
			Var9 = { ENTITY::GET_ENTITY_COORDS(Local_7249.f_2, 1) };
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]))
		{
			Var16 = { ENTITY::GET_ENTITY_COORDS(Local_7198[0 /*25*/], 0) };
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
		{
			Var19 = { ENTITY::GET_ENTITY_COORDS(Local_7198[1 /*25*/], 0) };
		}
		if (func_559(Var16, Var9) || func_559(Var19, Var9))
		{
			if (Local_7249.f_77 == 0)
			{
				if (iLocal_5063 < 15)
				{
					if (!GlobalFunc_74("CRH_PICKUC"))
					{
						GlobalFunc_Display_Help_Text("CRH_PICKUC");
					}
				}
			}
			else if (bLocal_5296)
			{
				if (!GlobalFunc_74("CRH_H3A"))
				{
					GlobalFunc_Display_Help_Text("CRH_H3A");
				}
			}
			else if (!GlobalFunc_74("CRH_H3B"))
			{
				GlobalFunc_Display_Help_Text("CRH_H3B");
			}
		}
		else if (Local_7249.f_77 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_7198[1 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(iLocal_6151))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(Local_7198[1 /*25*/], iLocal_6151, 1.5f, 1f, 1f, 0, 1, 0))
					{
						func_558();
						if (iLocal_5063 < 15)
						{
							if (!GlobalFunc_74("CRH_RELC"))
							{
								GlobalFunc_Display_Help_Text("CRH_RELC");
							}
						}
					}
					else if (bLocal_5296)
					{
						if (!GlobalFunc_74("CRH_H3A"))
						{
							GlobalFunc_Display_Help_Text("CRH_H3A");
						}
					}
					else if (!GlobalFunc_74("CRH_H3B"))
					{
						GlobalFunc_Display_Help_Text("CRH_H3B");
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_7198[0 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(iLocal_6151))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(Local_7198[0 /*25*/], iLocal_6151, 1.5f, 1f, 1f, 0, 1, 0))
					{
						func_558();
						if (!GlobalFunc_74("CRH_RELC"))
						{
							GlobalFunc_Display_Help_Text("CRH_RELC");
						}
					}
					else if (bLocal_5296)
					{
						if (!GlobalFunc_74("CRH_H3A"))
						{
							GlobalFunc_Display_Help_Text("CRH_H3A");
						}
					}
					else if (!GlobalFunc_74("CRH_H3B"))
					{
						GlobalFunc_Display_Help_Text("CRH_H3B");
					}
				}
			}
		}
		else if (bLocal_5296)
		{
			if (!GlobalFunc_74("CRH_H3A"))
			{
				GlobalFunc_Display_Help_Text("CRH_H3A");
			}
		}
		else if (!GlobalFunc_74("CRH_H3B"))
		{
			GlobalFunc_Display_Help_Text("CRH_H3B");
		}
	}
	if (iLocal_5063 == 5)
	{
		if (bLocal_5296)
		{
			if (!GlobalFunc_74("CRH_HELP2A"))
			{
				GlobalFunc_Display_Help_Text("CRH_HELP2A");
			}
		}
		else if (!GlobalFunc_74("CRH_HELP2B"))
		{
			GlobalFunc_Display_Help_Text("CRH_HELP2B");
		}
	}
	if (iLocal_5063 == 6)
	{
		if (MISC::ABSF((Var9.x - Var12.x)) < 5f)
		{
		}
		if (bLocal_5296)
		{
			if (!GlobalFunc_74("CRH_HELP3A"))
			{
				GlobalFunc_Display_Help_Text("CRH_HELP3A");
			}
		}
		else if (!GlobalFunc_74("CRH_HELP3B"))
		{
			GlobalFunc_Display_Help_Text("CRH_HELP3B");
		}
	}
	if (iLocal_5063 == 1)
	{
		if (bLocal_5296)
		{
			if (!GlobalFunc_74("CRH_H1A"))
			{
				GlobalFunc_Display_Help_Text("CRH_H1A");
			}
		}
		else if (!GlobalFunc_74("CRH_H1B"))
		{
			GlobalFunc_Display_Help_Text("CRH_H1B");
		}
	}
	if (iLocal_5063 > 8)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6149, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_6149))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_6149) > 9757f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6150))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_6150);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6149))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_6149);
					}
				}
			}
		}
	}
	if (iLocal_5063 > 10 && iLocal_5063 < 15)
	{
		if (Local_7249.f_77)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_377))
				{
					uLocal_377 = GlobalFunc_5104(ENTITY::GET_ENTITY_COORDS(iLocal_6151, 1), 0);
					ENTITY::SET_ENTITY_PROOFS(iLocal_6151, 1, 1, 1, 1, 1, 0, 0, 0);
					HUD::SET_BLIP_COLOUR(uLocal_377, 3);
				}
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_5312))
			{
				HUD::REMOVE_BLIP(&uLocal_5312);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_5313))
			{
				HUD::REMOVE_BLIP(&uLocal_5313);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_377))
			{
				HUD::REMOVE_BLIP(&uLocal_377);
			}
			if (iLocal_5248 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_5312) && !HUD::DOES_BLIP_EXIST(HUD::GET_BLIP_FROM_ENTITY(Local_7198[0 /*25*/])))
					{
						uLocal_5312 = GlobalFunc_6783(Local_7198[0 /*25*/], 0, 0);
						HUD::SET_BLIP_COLOUR(uLocal_5312, 2);
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_5312))
			{
				HUD::REMOVE_BLIP(&uLocal_5312);
			}
			if (iLocal_5247 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_5313) && !HUD::DOES_BLIP_EXIST(HUD::GET_BLIP_FROM_ENTITY(Local_7198[1 /*25*/])))
					{
						uLocal_5313 = GlobalFunc_6783(Local_7198[1 /*25*/], 0, 0);
						HUD::SET_BLIP_COLOUR(uLocal_5313, 2);
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_5313))
			{
				HUD::REMOVE_BLIP(&uLocal_5313);
			}
		}
	}
	else if (iLocal_5063 > 0)
	{
		if (Local_7249.f_77)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_5312))
			{
				HUD::REMOVE_BLIP(&uLocal_5312);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_5313))
			{
				HUD::REMOVE_BLIP(&uLocal_5313);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6150, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_377))
				{
					uLocal_377 = GlobalFunc_5104(ENTITY::GET_ENTITY_COORDS(iLocal_6150, 1), 0);
					HUD::SET_BLIP_COLOUR(uLocal_377, 3);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_377))
			{
				HUD::REMOVE_BLIP(&uLocal_377);
			}
			if (iLocal_5248 == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_5312))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]))
					{
						uLocal_5312 = GlobalFunc_6783(Local_7198[0 /*25*/], 0, 0);
						HUD::SET_BLIP_COLOUR(uLocal_5312, 2);
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_5312))
			{
				HUD::REMOVE_BLIP(&uLocal_5312);
			}
			if (iLocal_5247 == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_5313))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
					{
						uLocal_5313 = GlobalFunc_6783(Local_7198[1 /*25*/], 0, 0);
						HUD::SET_BLIP_COLOUR(uLocal_5313, 2);
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_5313))
			{
				HUD::REMOVE_BLIP(&uLocal_5313);
			}
		}
	}
	if (func_403("DS1_10a"))
	{
		if (!func_403("DS1_10a2"))
		{
			if (!GlobalFunc_5172(&Local_6997, 1))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10a2", 7, 0, 0, 0))
					{
						func_400("DS1_10a2", 1);
					}
				}
			}
		}
	}
	switch (iLocal_5063)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DOCKS_HEIST_USING_CRANE"))
			{
				AUDIO::START_AUDIO_SCENE("DOCKS_HEIST_USING_CRANE");
			}
			STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
			func_557(1);
			func_557(0);
			func_557(3);
			func_557(2);
			if (!func_403("DS1_10"))
			{
				if (!GlobalFunc_5172(&Local_6997, 1))
				{
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10", 7, 0, 0, 0))
					{
						func_400("DS1_10", 1);
					}
				}
			}
			else if (!GlobalFunc_5172(&Local_6997, 2))
			{
				GlobalFunc_5884("AW_GRAB_CR");
				uLocal_5312 = GlobalFunc_6783(Local_7198[0 /*25*/], 0, 0);
				uLocal_5313 = GlobalFunc_6783(Local_7198[1 /*25*/], 0, 0);
				HUD::SET_BLIP_COLOUR(uLocal_5312, 2);
				HUD::SET_BLIP_COLOUR(uLocal_5313, 2);
				if (bLocal_5296)
				{
					if (!GlobalFunc_74("CRH_H1A"))
					{
						GlobalFunc_Display_Help_Text("CRH_H1A");
					}
				}
				else if (!GlobalFunc_74("CRH_H1B"))
				{
					GlobalFunc_Display_Help_Text("CRH_H1B");
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				GlobalFunc_6685(1);
				SYSTEM::SETTIMERA(0);
				iLocal_5220 = 0;
				iLocal_5083 = MISC::GET_GAME_TIMER();
				Local_5341 = { ENTITY::GET_ENTITY_COORDS(Local_7249.f_1, 0) };
				iLocal_5063++;
			}
			break;
		
		case 1:
			if (GlobalFunc_588(&iLocal_5083, 200))
			{
				if (!func_403("DS1_10a"))
				{
					if (!GlobalFunc_5172(&Local_6997, 1))
					{
						if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10a", 7, 0, 0, 0))
						{
							func_400("DS1_10a", 1);
						}
					}
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_7249.f_1, 0) };
				Var3 = { ENTITY::GET_ENTITY_COORDS(Local_7198[0 /*25*/], 0) };
				Var6 = { ENTITY::GET_ENTITY_COORDS(Local_7198[1 /*25*/], 0) };
				if ((SYSTEM::VDIST(Local_5341, Var0) > 1f || MISC::ABSF((Var0.x - Var3.x)) < 1f) || MISC::ABSF((Var0.x - Var6.x)) < 1f)
				{
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_2))
				{
					Var9 = { ENTITY::GET_ENTITY_COORDS(Local_7249.f_2, 1) };
				}
				if (func_559(ENTITY::GET_ENTITY_COORDS(Local_7198[0 /*25*/], 0), Var9) || func_559(ENTITY::GET_ENTITY_COORDS(Local_7198[1 /*25*/], 0), Var9))
				{
					HUD::CLEAR_HELP(1);
					if (!GlobalFunc_74("CRH_SPR"))
					{
						GlobalFunc_Display_Help_Text("CRH_SPR");
					}
					iLocal_5083 = MISC::GET_GAME_TIMER();
					Local_5341 = { ENTITY::GET_ENTITY_COORDS(Local_7249.f_1, 0) };
					func_557(2);
					iLocal_5063++;
				}
				if (Var0.f_1 < -2418.09f || Var0.f_1 > -2413.05f)
				{
					HUD::CLEAR_HELP(1);
					if (!GlobalFunc_74("CRH_SPR"))
					{
						GlobalFunc_Display_Help_Text("CRH_SPR");
					}
					iLocal_5083 = MISC::GET_GAME_TIMER();
					Local_5341 = { ENTITY::GET_ENTITY_COORDS(Local_7249.f_1, 0) };
					func_557(2);
					iLocal_5063++;
				}
				else
				{
					func_557(2);
				}
			}
			else
			{
				func_557(1);
				func_557(0);
				func_557(3);
				func_557(2);
			}
			break;
		
		case 2:
			if (!func_403("DS1_10b"))
			{
				if (!GlobalFunc_5172(&Local_6997, 1))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10b", 7, 0, 0, 0))
						{
							func_400("DS1_10b", 1);
						}
					}
				}
			}
			else
			{
				iLocal_5063++;
			}
			break;
		
		case 3:
			if (GlobalFunc_588(&iLocal_5083, 1000))
			{
				if (!GlobalFunc_5172(&Local_6997, 1))
				{
					if (!func_403("DS1_10c"))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10c", 7, 0, 0, 0))
							{
								func_400("DS1_10c", 1);
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_2))
				{
					Var9 = { ENTITY::GET_ENTITY_COORDS(Local_7249.f_2, 1) };
				}
				if (func_559(ENTITY::GET_ENTITY_COORDS(Local_7198[0 /*25*/], 0), Var9) || func_559(ENTITY::GET_ENTITY_COORDS(Local_7198[1 /*25*/], 0), Var9))
				{
					if (GlobalFunc_74("CRH_SPR"))
					{
						HUD::CLEAR_HELP(1);
					}
					if (GlobalFunc_663("AW_GRAB_CR", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (!GlobalFunc_74("CRH_PICKUC"))
					{
						GlobalFunc_Display_Help_Text("CRH_PICKUC");
					}
					SYSTEM::SETTIMERA(0);
					iLocal_5063++;
				}
				else
				{
					func_557(2);
				}
			}
			else
			{
				func_557(1);
				func_557(0);
				func_557(3);
				func_557(2);
			}
			break;
		
		case 4:
			if (Local_7249.f_77)
			{
				if (GlobalFunc_74("CRH_PICKUC"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6150, 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_6150, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_6150, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_6150, 1);
					ENTITY::SET_ENTITY_PROOFS(iLocal_6150, 1, 1, 1, 1, 1, 0, 0, 0);
				}
				HUD::REMOVE_BLIP(&uLocal_5312);
				HUD::REMOVE_BLIP(&uLocal_5313);
				if (bLocal_5296)
				{
					if (!GlobalFunc_74("CRH_HELP2A"))
					{
						GlobalFunc_Display_Help_Text("CRH_HELP2A");
					}
				}
				else if (!GlobalFunc_74("CRH_HELP2B"))
				{
					GlobalFunc_Display_Help_Text("CRH_HELP2B");
				}
				iLocal_5063++;
			}
			else if (!GlobalFunc_5172(&Local_6997, 1))
			{
				if (!func_403("DS1_10d"))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10d", 7, 0, 0, 0))
						{
							func_400("DS1_10d", 1);
						}
					}
				}
			}
			break;
		
		case 5:
			if (Local_7249.f_77)
			{
				if (Local_7249.f_70 < -55f)
				{
					if (GlobalFunc_74("CRH_HELP2A"))
					{
						HUD::CLEAR_HELP(1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6150))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_6150, 1);
					}
					VEHICLE::DELETE_VEHICLE(&iLocal_6146);
					VEHICLE::DELETE_VEHICLE(&iLocal_6151);
					func_557(2);
					iLocal_5063++;
				}
				else
				{
					if (!GlobalFunc_5172(&Local_6997, 1))
					{
						if (!func_403("DS1_10e"))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10e", 7, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
									func_400("DS1_10e", 1);
								}
							}
						}
					}
					if (func_403("DS1_10e"))
					{
						if (!func_403("DS1_10e3"))
						{
							if (!GlobalFunc_5172(&Local_6997, 1))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10e3", 7, 0, 0, 0))
									{
										func_400("DS1_10e3", 1);
									}
								}
							}
						}
						else if (!func_403("DS1_10e5"))
						{
							if (!GlobalFunc_5172(&Local_6997, 1))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10e5", 7, 0, 0, 0))
									{
										func_400("DS1_10e5", 1);
									}
								}
							}
						}
					}
					func_557(2);
				}
			}
			break;
		
		case 6:
			if ((!ENTITY::IS_ENTITY_DEAD(Local_7198[1 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(Local_7198[0 /*25*/])) && !ENTITY::IS_ENTITY_DEAD(iLocal_6150))
			{
				if ((ENTITY::IS_ENTITY_AT_ENTITY(Local_7198[1 /*25*/], iLocal_6150, 1.5f, 1f, 1f, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(Local_7198[1 /*25*/]) < 0.3f) || (ENTITY::IS_ENTITY_AT_ENTITY(Local_7198[0 /*25*/], iLocal_6150, 1.5f, 1f, 1f, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(Local_7198[0 /*25*/]) < 0.3f))
				{
					if (!GlobalFunc_74("CRH_RELC"))
					{
						GlobalFunc_Display_Help_Text("CRH_RELC");
					}
					func_558();
					func_557(2);
					iLocal_5063++;
				}
				else
				{
					if (!GlobalFunc_5172(&Local_6997, 1))
					{
						if (!func_403("DS1_10f"))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10f", 7, 0, 0, 0))
								{
									func_400("DS1_10f", 1);
								}
							}
						}
					}
					if (func_403("DS1_10f"))
					{
						if (!func_403("DS1_10e2"))
						{
							if (!GlobalFunc_5172(&Local_6997, 1))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10e2", 7, 0, 0, 0))
									{
										func_400("DS1_10e2", 1);
									}
								}
							}
						}
					}
					func_557(2);
				}
			}
			break;
		
		case 7:
			if ((!ENTITY::IS_ENTITY_DEAD(Local_7198[1 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(Local_7198[0 /*25*/])) && !ENTITY::IS_ENTITY_DEAD(iLocal_6150))
			{
				if ((ENTITY::IS_ENTITY_AT_ENTITY(Local_7198[1 /*25*/], iLocal_6150, 1.5f, 1f, 1f, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(Local_7198[1 /*25*/]) < 0.3f) || (ENTITY::IS_ENTITY_AT_ENTITY(Local_7198[0 /*25*/], iLocal_6150, 1.5f, 1f, 1f, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(Local_7198[0 /*25*/]) < 0.3f))
				{
					func_558();
					if (Local_7249.f_77 == 0)
					{
						if (GlobalFunc_74("CRH_RELC"))
						{
							HUD::CLEAR_HELP(1);
						}
						func_557(2);
						func_557(1);
						func_557(0);
						func_557(3);
						iLocal_5063++;
					}
				}
				else
				{
					func_557(2);
				}
			}
			if (func_403("DS1_10f"))
			{
				if (!func_403("DS1_10e2"))
				{
					if (!GlobalFunc_5172(&Local_6997, 1))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10e2", 7, 0, 0, 0))
							{
								func_400("DS1_10e2", 1);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6150, 0))
			{
				if (Local_7249.f_77 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_377))
					{
						HUD::REMOVE_BLIP(&uLocal_377);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6150))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_7198[1 /*25*/]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_7198[1 /*25*/], iLocal_6150, 1.5f, 1f, 1f, 0, 1, 0))
							{
								func_558();
								if (ENTITY::GET_ENTITY_SPEED(Local_7198[1 /*25*/]) < 0.3f)
								{
									if (!HUD::DOES_BLIP_EXIST(uLocal_5312))
									{
										uLocal_5312 = GlobalFunc_6783(Local_7198[0 /*25*/], 0, 0);
									}
									HUD::REMOVE_BLIP(&uLocal_377);
									if (HUD::DOES_BLIP_EXIST(uLocal_5313))
									{
										HUD::REMOVE_BLIP(&uLocal_5313);
									}
									Var22 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_6150, ENTITY::GET_ENTITY_COORDS(Local_7198[1 /*25*/], 1)) };
									ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7198[1 /*25*/], iLocal_6150, 0, Var22, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
									iLocal_5247 = 1;
									iLocal_5220 = 1;
									Local_7198[1 /*25*/].f_15 = 1;
								}
							}
							else
							{
								if (!ENTITY::IS_ENTITY_ATTACHED(Local_7198[1 /*25*/]))
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_7198[1 /*25*/]) < 0.2f)
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(Local_7198[1 /*25*/], iLocal_6150, 10.5f, 2f, 10f, 0, 1, 0))
										{
											if (!GlobalFunc_5172(&Local_6997, 1))
											{
												if (!func_403("DS1_10l"))
												{
													if (!GlobalFunc_111())
													{
														if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10l", 7, 0, 0, 0))
														{
															func_400("DS1_10l", 1);
														}
													}
												}
											}
										}
									}
								}
								if (!ENTITY::IS_ENTITY_DEAD(Local_7198[0 /*25*/]))
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(Local_7198[0 /*25*/], iLocal_6150, 1.5f, 1f, 1f, 0, 1, 0))
									{
										func_558();
										if (ENTITY::GET_ENTITY_SPEED(Local_7198[0 /*25*/]) < 0.3f)
										{
											if (!HUD::DOES_BLIP_EXIST(uLocal_5313))
											{
												uLocal_5313 = GlobalFunc_6783(Local_7198[1 /*25*/], 0, 0);
											}
											if (HUD::DOES_BLIP_EXIST(uLocal_5312))
											{
												HUD::REMOVE_BLIP(&uLocal_5312);
											}
											HUD::REMOVE_BLIP(&uLocal_377);
											Var22 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_6150, ENTITY::GET_ENTITY_COORDS(Local_7198[0 /*25*/], 1)) };
											ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7198[0 /*25*/], iLocal_6150, 0, Var22, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_6149, 0);
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_6150, 0);
											iLocal_5248 = 1;
											iLocal_5220 = 1;
											Local_7198[0 /*25*/].f_15 = 1;
										}
									}
									else if (!ENTITY::IS_ENTITY_ATTACHED(Local_7198[0 /*25*/]))
									{
										if (ENTITY::GET_ENTITY_SPEED(Local_7198[0 /*25*/]) < 0.2f)
										{
											if (!GlobalFunc_5172(&Local_6997, 1))
											{
												if (!func_403("DS1_10l"))
												{
													if (!GlobalFunc_111())
													{
														if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10l", 7, 0, 0, 0))
														{
															func_400("DS1_10l", 1);
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_5248 || iLocal_5247)
					{
						func_557(0);
						func_557(2);
						if (!func_403("DS1_10f3"))
						{
							if (!GlobalFunc_5172(&Local_6997, 1))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10f3", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
										func_400("DS1_10f3", 1);
									}
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6149, 0))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_6150, Local_7198[0 /*25*/]) || ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_6150, Local_7198[1 /*25*/]))
							{
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "AWDocks1"))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_6149, 0);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_6150, 0);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_6149, 2, "AWDocks1", 1);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
									iLocal_6916 = 1;
									iLocal_5064 = MISC::GET_GAME_TIMER();
									iLocal_5132 = 1;
									func_400("DS1_10l", 0);
									iLocal_5063++;
								}
								else
								{
									VEHICLE::REQUEST_VEHICLE_RECORDING(2, "AWDocks1");
								}
							}
						}
					}
				}
				else
				{
					func_557(1);
					func_557(0);
					func_557(3);
				}
			}
			break;
		
		case 9:
			func_557(2);
			func_557(0);
			if (!GlobalFunc_5172(&Local_6997, 1))
			{
				if (!func_403("DS1_10g"))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10g", 7, 0, 0, 0))
						{
							func_400("DS1_10g", 1);
						}
					}
				}
			}
			if (!GlobalFunc_588(&iLocal_5064, 1000))
			{
				iVar15 = 0;
				while (iVar15 < 8)
				{
					PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_7249.f_15[iVar15]);
					PHYSICS::START_ROPE_WINDING(Local_7249.f_15[iVar15]);
					iVar15++;
				}
				if (AUDIO::HAS_SOUND_FINISHED(Local_7249.f_82))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_7249.f_82, "CRANE_MOVE_U_D", Local_7249.f_2, 0, 0, 0);
				}
			}
			if (GlobalFunc_588(&iLocal_5064, 5000))
			{
				iLocal_5132 = 0;
				iLocal_6916 = 0;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				iLocal_5064 = MISC::GET_GAME_TIMER();
				iLocal_5063++;
			}
			break;
		
		case 10:
			if (!func_403("DS1_10g"))
			{
				if (!GlobalFunc_5172(&Local_6997, 1))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10g", 7, 0, 0, 0))
						{
							func_400("DS1_10g", 1);
						}
					}
				}
			}
			else if (!func_403("DS1_10g2"))
			{
				if (!GlobalFunc_5172(&Local_6997, 1))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10g2", 7, 0, 0, 0))
						{
							func_400("DS1_10g2", 1);
						}
					}
				}
			}
			if (GlobalFunc_588(&iLocal_5064, 3000))
			{
				iLocal_5220 = 0;
			}
			if (Local_7249.f_77)
			{
				func_557(2);
			}
			if (Local_7249.f_77 || Local_7249.f_70 > -22f)
			{
				HUD::CLEAR_PRINTS();
				iLocal_5220 = 0;
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6146))
				{
					func_399(&iLocal_6146, joaat("hauler"), -117.9839f, -2416.627f, 5.0003f, 91.3366f, -1, 0, 1);
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6151))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
						{
							func_399(&iLocal_6151, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_6146, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_6146), -1, 0, 1);
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_6146, 0, 0);
							VEHICLE::SET_VEHICLE_EXTRA(iLocal_6151, 1, true);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6151))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_6134))
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_6134, iLocal_6146, 20000, -1, 1073741824, 1, 0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_6151))
								{
									VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_6146, iLocal_6151, 1065353216);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_6146, 1);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_6151, 1);
									ENTITY::SET_ENTITY_PROOFS(iLocal_6151, 0, 0, 0, 1, 0, 0, 0, 0);
									iLocal_5063++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 11:
			if (!func_403("DS1_10g3"))
			{
				if (!GlobalFunc_5172(&Local_6997, 1))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10g3", 7, 0, 0, 0))
						{
							func_400("DS1_10g3", 1);
						}
					}
				}
			}
			if (Local_7249.f_77 == 1)
			{
				func_557(2);
			}
			if (Local_7249.f_70 < -55f)
			{
				iLocal_5063++;
			}
			break;
		
		case 12:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
			{
				Var12 = { ENTITY::GET_ENTITY_COORDS(iLocal_6146, 1) };
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
				{
					if (Local_7249.f_77 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_6151))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_7198[1 /*25*/]))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(Local_7198[1 /*25*/], iLocal_6151, 1.5f, 1f, 1f, 0, 1, 0))
								{
									func_558();
									if (ENTITY::GET_ENTITY_SPEED(Local_7198[1 /*25*/]) < 0.3f)
									{
										if (iLocal_5247 == 0)
										{
											ENTITY::DETACH_ENTITY(Local_7198[1 /*25*/], 1, 1);
											Local_7198[1 /*25*/].f_15 = 1;
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_6151, ENTITY::GET_ENTITY_COORDS(Local_7198[1 /*25*/], 1)) };
											ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7198[1 /*25*/], iLocal_6151, 0, Var25, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
											iLocal_5247 = 1;
											iLocal_5220 = 1;
											PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
											if (HUD::DOES_BLIP_EXIST(uLocal_5312))
											{
												HUD::REMOVE_BLIP(&uLocal_5312);
											}
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_6149))
											{
												VEHICLE::DELETE_VEHICLE(&iLocal_6149);
											}
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_6150))
											{
												VEHICLE::DELETE_VEHICLE(&iLocal_6150);
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]))
											{
												OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/]));
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/].f_1))
											{
												OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/].f_1));
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/].f_2))
											{
												OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/].f_2));
											}
											HUD::CLEAR_PRINTS();
											iLocal_5063++;
										}
									}
								}
								else if (iLocal_5248 == 0)
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_7198[0 /*25*/]))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(Local_7198[0 /*25*/], iLocal_6151, 1.5f, 1f, 1f, 0, 1, 0))
										{
											func_558();
											if (ENTITY::GET_ENTITY_SPEED(Local_7198[0 /*25*/]) < 0.3f)
											{
												Local_7198[0 /*25*/].f_15 = 1;
												ENTITY::DETACH_ENTITY(Local_7198[0 /*25*/], 1, 1);
												Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_6151, ENTITY::GET_ENTITY_COORDS(Local_7198[0 /*25*/], 1)) };
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7198[0 /*25*/], iLocal_6151, 0, Var25, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
												iLocal_5248 = 1;
												iLocal_5220 = 1;
												PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
												if (HUD::DOES_BLIP_EXIST(uLocal_5313))
												{
													HUD::REMOVE_BLIP(&uLocal_5313);
												}
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_6149))
												{
													VEHICLE::DELETE_VEHICLE(&iLocal_6149);
												}
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_6150))
												{
													VEHICLE::DELETE_VEHICLE(&iLocal_6150);
												}
												if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
												{
													OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/]));
												}
												if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/].f_1))
												{
													OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/].f_1));
												}
												if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/].f_2))
												{
													OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/].f_2));
												}
												HUD::CLEAR_PRINTS();
												iLocal_5063++;
											}
										}
										else if (!func_403("DS1_noton"))
										{
											if (!GlobalFunc_5172(&Local_6997, 1))
											{
												if (!GlobalFunc_111())
												{
													if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_noton", 7, 0, 0, 0))
													{
														func_400("DS1_noton", 1);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 13:
			func_557(2);
			if (Local_7249.f_77 == 0)
			{
				if (Local_7249.f_70 < -55f)
				{
					HUD::CLEAR_PRINTS();
					SYSTEM::SETTIMERA(0);
					iLocal_6916 = 1;
					iLocal_5132 = 1;
					iLocal_5063++;
				}
				else
				{
					SYSTEM::SETTIMERA(0);
				}
			}
			break;
		
		case 14:
			if (Local_7249.f_77 == 0)
			{
				iVar15 = 0;
				while (iVar15 < 8)
				{
					PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_7249.f_15[iVar15]);
					PHYSICS::START_ROPE_WINDING(Local_7249.f_15[iVar15]);
					iVar15++;
				}
				if (SYSTEM::TIMERA() > 3000)
				{
					if (Local_7249.f_70 < -55f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_6146, 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_6151, 0);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_377))
						{
							HUD::REMOVE_BLIP(&uLocal_377);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_5312))
						{
							HUD::REMOVE_BLIP(&uLocal_5312);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_5313))
						{
							HUD::REMOVE_BLIP(&uLocal_5313);
						}
						if (!AUDIO::HAS_SOUND_FINISHED(Local_7249.f_82))
						{
							AUDIO::STOP_SOUND(Local_7249.f_82);
						}
						HUD::UNLOCK_MINIMAP_ANGLE();
						GlobalFunc_553(577);
						bLocal_5246 = true;
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DOCKS_HEIST_USING_CRANE"))
						{
							AUDIO::STOP_AUDIO_SCENE("DOCKS_HEIST_USING_CRANE");
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						iLocal_5132 = 0;
						iLocal_5063++;
					}
				}
				else if (!Local_7249.f_79)
				{
					if (AUDIO::HAS_SOUND_FINISHED(Local_7249.f_82))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_7249.f_82, "CRANE_MOVE_U_D", Local_7249.f_2, 0, 0, 0);
					}
					AUDIO::SET_VARIABLE_ON_SOUND(Local_7249.f_82, "Speed", (fLocal_6907 / 2f));
				}
				else if (!AUDIO::HAS_SOUND_FINISHED(Local_7249.f_82))
				{
					AUDIO::STOP_SOUND(Local_7249.f_82);
				}
			}
			else
			{
				func_557(2);
			}
			break;
		
		case 15:
			HUD::UNLOCK_MINIMAP_ANGLE();
			HUD::DISPLAY_RADAR(1);
			if (!GlobalFunc_5172(&Local_6997, 1))
			{
				HUD::CLEAR_PRINTS();
			}
			if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				HUD::CLEAR_HELP(1);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_377))
			{
				HUD::REMOVE_BLIP(&uLocal_377);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_5312))
			{
				HUD::REMOVE_BLIP(&uLocal_5312);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_5313))
			{
				HUD::REMOVE_BLIP(&uLocal_5313);
			}
			break;
	}
}

void func_557(int iParam0)//Position - 0x66ABE
{
	if (iParam0 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 219, 1);
	}
	if (iParam0 == 2)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 235, 1);
	}
	if (iParam0 == 1)
	{
		if (bLocal_5296)
		{
			PAD::DISABLE_CONTROL_ACTION(2, 220, 1);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(2, 221, 1);
		}
	}
	if (iParam0 == 3)
	{
		if (bLocal_5296)
		{
			PAD::DISABLE_CONTROL_ACTION(2, 221, 1);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(2, 220, 1);
		}
	}
}

void func_558()//Position - 0x66B20
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_7198[0 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(iLocal_6150))
	{
		if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) < 0f)
		{
			func_557(0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_7198[0 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(iLocal_6151))
	{
		if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) < 0f)
		{
			func_557(0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_7198[1 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(iLocal_6150))
	{
		if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) < 0f)
		{
			func_557(0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_7198[1 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(iLocal_6151))
	{
		if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) < 0f)
		{
			func_557(0);
		}
	}
}

int func_559(struct<3> Param0, struct<3> Param3)//Position - 0x66BD8
{
	if (!iLocal_5220)
	{
		if (MISC::ABSF((Param0.x - Param3.x)) < fLocal_6091)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) < fLocal_6092)
			{
				if ((Param3.f_2 - Param0.f_2) > fLocal_6093)
				{
					if ((Param3.f_2 - Param0.f_2) < fLocal_6094)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_560()//Position - 0x66C30
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_7198[0 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(iLocal_6150))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_7198[0 /*25*/], iLocal_6150))
		{
			if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) < 0f)
			{
				func_557(0);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_7198[0 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(iLocal_6151))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_7198[0 /*25*/], iLocal_6151))
		{
			if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) < 0f)
			{
				func_557(0);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_7198[1 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(iLocal_6150))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_7198[1 /*25*/], iLocal_6150))
		{
			if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) < 0f)
			{
				func_557(0);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_7198[1 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(iLocal_6151))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_7198[1 /*25*/], iLocal_6151))
		{
			if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) < 0f)
			{
				func_557(0);
			}
		}
	}
}



void func_563(bool bParam0)//Position - 0x66D9A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	struct<3> Var46;
	float fVar49;
	float fVar50;
	float fVar51;
	struct<3> Var52;
	struct<3> Var55;
	float fVar58;
	struct<3> Var59;
	struct<3> Var62;
	float fVar65;
	int iVar66;
	int iVar67;
	float fVar68;
	float fVar69;
	float fVar70;
	struct<3> Var71;
	struct<3> Var74;
	float fVar77;
	float fVar78;
	struct<3> Var79;
	struct<3> Var82;
	struct<3> Var85;
	struct<3> Var88;
	struct<3> Var91;
	struct<3> Var94;
	struct<3> Var97;
	struct<3> Var100;
	
	PAD::_0x7F4724035FDCA1DD(0);
	PAD::_0x7F4724035FDCA1DD(2);
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePortContainersPO102"), -80f, -2410f, 0, 0);
	if (bLocal_5296)
	{
		HUD::LOCK_MINIMAP_ANGLE(iLocal_7343);
		if (!func_403("CRANE TIMECYCLE"))
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			GRAPHICS::SET_TIMECYCLE_MODIFIER("crane_cam");
			func_400("CRANE TIMECYCLE", 1);
			func_400("CINEMATIC TIMECYCLE", 0);
		}
	}
	else
	{
		HUD::LOCK_MINIMAP_ANGLE(iLocal_7344);
		if (!func_403("CINEMATIC TIMECYCLE"))
		{
			GRAPHICS::_0x36F6626459D91457(0.5f);
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.2f);
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			GRAPHICS::SET_TIMECYCLE_MODIFIER("crane_cam_cinematic");
			func_400("CINEMATIC TIMECYCLE", 1);
			func_400("CRANE TIMECYCLE", 0);
		}
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iLocal_6916 == 0)
	{
		iVar0 = (PAD::GET_CONTROL_VALUE(2, 220) - 128);
		iVar1 = (PAD::GET_CONTROL_VALUE(2, 221) - 128);
		iVar2 = (PAD::GET_CONTROL_VALUE(2, 219) - 128);
	}
	iVar3 = 0;
	iVar4 = -1;
	iVar3 = 0;
	while (iVar3 < Local_7198)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_7198[iVar3 /*25*/]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_7198[iVar3 /*25*/]))
			{
				iVar4 = iVar3;
			}
		}
		iVar3++;
	}
	if (MISC::ABSI(iVar0) < 15)
	{
		iVar0 = 0;
	}
	if (MISC::ABSI(iVar1) < 15)
	{
		iVar1 = 0;
	}
	if (MISC::ABSI(iVar2) < 15)
	{
		iVar2 = 0;
	}
	Var5 = { ENTITY::GET_ENTITY_VELOCITY(Local_7249.f_2) };
	Var8 = { ENTITY::GET_ENTITY_COORDS(Local_7249.f_2, 1) };
	Var11 = { ENTITY::GET_ENTITY_ROTATION(Local_7249.f_2, 2) };
	if (iVar4 >= 0)
	{
		Var26 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, 0f, 5f, -3.5f) };
		Var29 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, 0f, -5f, -3.5f) };
	}
	else
	{
		Var26 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, 0f, 5f, -1f) };
		Var29 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, 0f, -5f, -1f) };
	}
	STREAMING::REQUEST_ANIM_DICT("map_objects");
	if (!Local_7249.f_79)
	{
		if (iVar2 >= 1)
		{
			Local_7249.f_87++;
			if (Local_7249.f_87 > 10)
			{
				if ((Var5.f_2 > -0.1f && MISC::ABSF(Var11.f_1) < 5f) && MISC::ABSF((Local_7249.f_67.f_1 - Var11.f_1)) < 0.5f)
				{
					Local_7249.f_79 = 1;
					Local_7249.f_87 = 0;
					Local_7249.f_88 = 0;
				}
			}
		}
		else
		{
			Local_7249.f_87 = 0;
			Local_7249.f_88 = 0;
		}
	}
	else
	{
		if (iVar0 != 0)
		{
			Local_7249.f_88++;
		}
		if (((MISC::ABSF((Local_7249.f_64.f_2 - Var8.f_2)) > 0.01f || MISC::ABSF((Local_7249.f_67.f_1 - Var11.f_1)) > 0.5f) || MISC::ABSF(Var11.f_1) > 5f) || MISC::ABSF(Var11.x) > 5f)
		{
			func_557(0);
			Local_7249.f_79 = 0;
			Local_7249.f_87 = 0;
			Local_7249.f_88 = 0;
		}
	}
	Local_7249.f_64 = { Var8 };
	Local_7249.f_67 = { Var11 };
	iVar3 = 0;
	while (iVar3 < 8)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_7249.f_15[iVar3]);
		PHYSICS::STOP_ROPE_WINDING(Local_7249.f_15[iVar3]);
		if (iVar2 < 0)
		{
			PHYSICS::START_ROPE_WINDING(Local_7249.f_15[iVar3]);
		}
		if (iVar2 > 0)
		{
			PHYSICS::START_ROPE_UNWINDING_FRONT(Local_7249.f_15[iVar3]);
		}
		iVar3++;
	}
	if (iVar2 > 0)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var26 + Vector(50f, 0f, 0f), &fVar32);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var29 + Vector(50f, 0f, 0f), &fVar33);
		if (fVar32 > Var26.f_2 || fVar33 > Var29.f_2)
		{
			iVar2 = 0;
		}
	}
	if (iVar0 != 0)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var14 + Vector(50f, 0f, 0f), &fVar34);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var17 + Vector(50f, 0f, 0f), &fVar35);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var20 + Vector(50f, 0f, 0f), &fVar36);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var23 + Vector(50f, 0f, 0f), &fVar37);
		if (fVar34 > Var14.f_2 || fVar35 > Var17.f_2)
		{
			if (iVar0 < 0)
			{
				iVar0 = 0;
			}
		}
		else if (fVar36 > Var20.f_2 || fVar37 > Var23.f_2)
		{
			if (iVar0 > 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (iVar1 != 0)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var14 + Vector(50f, 0f, 0f), &fVar38);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var17 + Vector(50f, 0f, 0f), &fVar39);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var20 + Vector(50f, 0f, 0f), &fVar40);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var23 + Vector(50f, 0f, 0f), &fVar41);
		if (fVar38 > Var14.f_2 || fVar39 > Var17.f_2)
		{
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
		}
		else if (fVar40 > Var20.f_2 || fVar41 > Var23.f_2)
		{
			if (iVar1 > 0)
			{
				iVar1 = 0;
			}
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_7198)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_7198[iVar3 /*25*/]))
		{
			if (iVar3 != iVar4)
			{
				if (iVar0 != 0)
				{
					if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var14, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[iVar3 /*25*/], 0f, -6f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[iVar3 /*25*/], 0f, 6f, 3f), 3f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var17, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[iVar3 /*25*/], 0f, -6f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[iVar3 /*25*/], 0f, 6f, 3f), 3f, 0, 1))
					{
						if (iVar0 < 0)
						{
							iVar0 = 0;
						}
					}
					if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var20, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[iVar3 /*25*/], 0f, -6f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[iVar3 /*25*/], 0f, 6f, 3f), 3f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var23, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[iVar3 /*25*/], 0f, -6f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[iVar3 /*25*/], 0f, 6f, 3f), 3f, 0, 1))
					{
						if (iVar0 > 0)
						{
							iVar0 = 0;
						}
					}
				}
				if (iVar2 > 0)
				{
					if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var26, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[iVar3 /*25*/], 0f, -6f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[iVar3 /*25*/], 0f, 6f, 2.7f), 3f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var29, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[iVar3 /*25*/], 0f, -6f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7198[iVar3 /*25*/], 0f, 6f, 2.7f), 3f, 0, 1))
					{
						iVar2 = 0;
					}
				}
			}
		}
		iVar3++;
	}
	if (!iLocal_5303)
	{
		AUDIO::START_AUDIO_SCENE("CAR_THEFT_EXPORT_CARS_CRANE_SECTION_SCENE");
		iLocal_5303 = 1;
	}
	if (MISC::ABSI(iVar0) > MISC::ABSI(iVar1))
	{
		iVar1 = 0;
	}
	else
	{
		iVar0 = 0;
	}
	fVar42 = 1f;
	if (MISC::ABSF((Local_7249.f_24.f_1 - fLocal_6900)) < 4f && Local_7249.f_71 > 0f)
	{
		fVar42 = (MISC::ABSF((Local_7249.f_24.f_1 - fLocal_6900)) / 4f);
	}
	else if (MISC::ABSF((Local_7249.f_24.f_1 - fLocal_6901)) < 4f && Local_7249.f_71 < 0f)
	{
		fVar42 = (MISC::ABSF((Local_7249.f_24.f_1 - fLocal_6901)) / 4f);
	}
	if (bLocal_5296)
	{
		fVar43 = (((SYSTEM::TO_FLOAT(iVar0) / 128f) * fLocal_6906) * fVar42);
		GlobalFunc_2797(&(Local_7249.f_71), fVar43, fLocal_6909, 1);
		Local_7249.f_24.f_1 = (Local_7249.f_24.f_1 + (Local_7249.f_71 * SYSTEM::TIMESTEP()));
	}
	else
	{
		fVar43 = (((SYSTEM::TO_FLOAT(iVar1) / -128f) * fLocal_6906) * fVar42);
		GlobalFunc_2797(&(Local_7249.f_71), fVar43, fLocal_6909, 1);
		Local_7249.f_24.f_1 = (Local_7249.f_24.f_1 + (Local_7249.f_71 * SYSTEM::TIMESTEP()));
	}
	if (Local_7249.f_24.f_1 < fLocal_6901)
	{
		Local_7249.f_24.f_1 = fLocal_6901;
		Local_7249.f_71 = 0f;
	}
	else if (Local_7249.f_24.f_1 > fLocal_6900)
	{
		Local_7249.f_24.f_1 = fLocal_6900;
		Local_7249.f_71 = 0f;
	}
	if (MISC::ABSF(Local_7249.f_71) > 0.01f)
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_7249.f_80))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_7249.f_80, "Move_L_R", Local_7249.f_2, "CRANE_SOUNDS", 0, 0);
		}
		AUDIO::SET_VARIABLE_ON_SOUND(Local_7249.f_80, "Speed", MISC::ABSF((Local_7249.f_71 / fLocal_6906)));
	}
	else if (!AUDIO::HAS_SOUND_FINISHED(Local_7249.f_80))
	{
		AUDIO::STOP_SOUND(Local_7249.f_80);
	}
	fVar44 = 1f;
	if (MISC::ABSF((Local_7249.f_27.f_2 - fLocal_6902)) < 4f && Local_7249.f_72 > 0f)
	{
		fVar44 = (MISC::ABSF((Local_7249.f_27.f_2 - fLocal_6902)) / 4f);
	}
	else if (MISC::ABSF((Local_7249.f_27.f_2 - fLocal_6903)) < 4f && Local_7249.f_72 < 0f)
	{
		fVar44 = (MISC::ABSF((Local_7249.f_27.f_2 - fLocal_6903)) / 4f);
	}
	fVar45 = (((SYSTEM::TO_FLOAT(iVar2) / 128f) * -fLocal_6907) * fVar44);
	if (Local_7249.f_79)
	{
		if (fVar45 < 0f)
		{
			fVar45 = 0f;
		}
	}
	if (bLocal_5296)
	{
		fVar45 = (((SYSTEM::TO_FLOAT(iVar2) / 128f) * fLocal_6907) * fVar44);
		GlobalFunc_2797(&(Local_7249.f_72), fVar45, fLocal_6910, 1);
		Local_7249.f_27.f_2 = (Local_7249.f_27.f_2 + (Local_7249.f_72 * SYSTEM::TIMESTEP()));
	}
	else
	{
		fVar45 = (((SYSTEM::TO_FLOAT(iVar2) / 128f) * -fLocal_6907) * fVar44);
		GlobalFunc_2797(&(Local_7249.f_72), fVar45, fLocal_6910, 1);
		Local_7249.f_27.f_2 = (Local_7249.f_27.f_2 + (Local_7249.f_72 * SYSTEM::TIMESTEP()));
	}
	if (Local_7249.f_27.f_2 < fLocal_6903)
	{
		Local_7249.f_27.f_2 = fLocal_6903;
		Local_7249.f_72 = 0f;
	}
	else if (Local_7249.f_27.f_2 > fLocal_6902)
	{
		Local_7249.f_27.f_2 = fLocal_6902;
		Local_7249.f_72 = 0f;
	}
	Local_5297 = { Local_7249.f_27, Local_7249.f_27.f_1, (Local_7249.f_27.f_2 - -7f) };
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_1))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_7249.f_13, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, Local_5297), 0, 0, 1);
	}
	if (!GlobalFunc_588(&iLocal_7342, 5000))
	{
		if (!func_403("CLAMP SOUND"))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_5093, "Clamp", Local_7249.f_2, "CRANE_SOUNDS", 0, 0);
			func_400("CLAMP SOUND", 1);
		}
	}
	else if (func_403("CLAMP SOUND"))
	{
		AUDIO::STOP_SOUND(iLocal_5093);
		func_400("CLAMP SOUND", 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_2))
	{
		Var46 = { ENTITY::GET_ENTITY_COORDS(Local_7249.f_2, 1) };
	}
	if (iVar2 != 0 && !Local_7249.f_79)
	{
		if (Var46.f_2 > 17.52f)
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_7249.f_82))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_7249.f_82, "Move_Fail", Local_7249.f_2, "CRANE_SOUNDS", 0, 0);
			}
			AUDIO::SET_VARIABLE_ON_SOUND(Local_7249.f_82, "Speed", (fLocal_6907 / 2f));
		}
		else
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_7249.f_82))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_7249.f_82, "Move_U_D", Local_7249.f_2, "CRANE_SOUNDS", 0, 0);
			}
			AUDIO::SET_VARIABLE_ON_SOUND(Local_7249.f_82, "Speed", (fLocal_6907 / 2f));
		}
	}
	else if (!iLocal_5132)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_7249.f_82))
		{
			AUDIO::STOP_SOUND(Local_7249.f_82);
		}
	}
	if (bLocal_5296)
	{
		fVar49 = ((SYSTEM::TO_FLOAT(iVar1) / 128f) * -fLocal_6908);
		GlobalFunc_2797(&(Local_7249.f_74), fVar49, fLocal_6911, 1);
		Local_7249.f_70 = (Local_7249.f_70 + (Local_7249.f_74 * SYSTEM::TIMESTEP()));
	}
	else
	{
		fVar50 = ((SYSTEM::TO_FLOAT(iVar0) / 128f) * -fLocal_6908);
		GlobalFunc_2797(&(Local_7249.f_74), fVar50, fLocal_6911, 1);
		Local_7249.f_70 = (Local_7249.f_70 + (Local_7249.f_74 * SYSTEM::TIMESTEP()));
	}
	if (Local_7249.f_70 < fLocal_6905)
	{
		Local_7249.f_70 = fLocal_6905;
		Local_7249.f_74 = 0f;
	}
	else if (Local_7249.f_70 > fLocal_6904)
	{
		Local_7249.f_70 = fLocal_6904;
		Local_7249.f_74 = 0f;
	}
	fVar51 = 0f;
	if (MISC::ABSI(iVar1) > 0 || MISC::ABSI(iVar0) > 0)
	{
		Local_7249.f_86 = -1;
		Var52 = { ENTITY::GET_ENTITY_VELOCITY(Local_7249.f_2) };
		Var55 = { Local_7249.f_74, -Local_7249.f_71, Var52.f_2 };
		fVar58 = 0.3f;
		ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_7249.f_2, 1, Var55 - Var52 * Vector(fVar58, fVar58, fVar58), 0, 0, 1, 0);
	}
	else
	{
		if (Local_7249.f_86 == -1)
		{
			Local_7249.f_86 = iLocal_6912;
		}
		if (Local_7249.f_86 > 0)
		{
			fVar51 = fLocal_6915;
			Local_7249.f_86 = (Local_7249.f_86 - 1);
		}
	}
	PHYSICS::SET_DAMPING(Local_7249.f_2, 1, fVar51);
	if (MISC::ABSF(Local_7249.f_74) > 0.01f)
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_7249.f_83))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_7249.f_83, "Move_Base", Local_7249.f_2, "CRANE_SOUNDS", 0, 0);
		}
		AUDIO::SET_VARIABLE_ON_SOUND(Local_7249.f_83, "Speed", MISC::ABSF((Local_7249.f_74 / fLocal_6908)));
	}
	else if (!AUDIO::HAS_SOUND_FINISHED(Local_7249.f_83))
	{
		AUDIO::STOP_SOUND(Local_7249.f_83);
	}
	Var59 = { ENTITY::GET_ENTITY_VELOCITY(Local_7249.f_2) };
	if ((Var59.x == 0f && Var59.f_1 == 0f) && Var59.f_2 == 0f)
	{
		if (iVar2 < -10)
		{
			ENTITY::SET_ENTITY_VELOCITY(Local_7249.f_2, 0f, 0f, 4f);
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_7198)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_7198[iVar3 /*25*/]))
		{
			Local_7198[iVar3 /*25*/].f_18 = Local_7198[iVar3 /*25*/].f_17;
			Local_7198[iVar3 /*25*/].f_17 = MISC::ABSF(func_565(ENTITY::GET_ENTITY_VELOCITY(Local_7198[iVar3 /*25*/]), 0));
			Var62 = { ENTITY::GET_ENTITY_COORDS(Local_7198[iVar3 /*25*/], 1) };
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_7198[iVar3 /*25*/]))
			{
				if (Local_7198[iVar3 /*25*/].f_17 < 0.02f)
				{
					if (Var62.f_2 > 1f)
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_7198[iVar3 /*25*/], 1);
					}
				}
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 235))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]))
				{
					if (!func_559(ENTITY::GET_ENTITY_COORDS(Local_7198[0 /*25*/], 1), ENTITY::GET_ENTITY_COORDS(Local_7249.f_2, 1)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
						{
							if (!func_559(ENTITY::GET_ENTITY_COORDS(Local_7198[1 /*25*/], 1), ENTITY::GET_ENTITY_COORDS(Local_7249.f_2, 1)))
							{
								if (AUDIO::HAS_SOUND_FINISHED(Local_7249.f_81))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(Local_7249.f_81, "Attach_Container_Fail", Local_7249.f_2, "CRANE_SOUNDS", 0, 0);
								}
							}
						}
					}
				}
				func_564(&(Local_7198[iVar3 /*25*/]));
			}
			fVar65 = MISC::ABSF((Local_7198[iVar3 /*25*/].f_17 - Local_7198[iVar3 /*25*/].f_18));
			if (fVar65 > 6f)
			{
				iVar66 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iVar66, "Container_Impact", Local_7198[iVar3 /*25*/], "CRANE_SOUNDS", 0, 0);
				AUDIO::SET_VARIABLE_ON_SOUND(iVar66, "Speed", (fVar65 / 100f));
				AUDIO::RELEASE_SOUND_ID(iVar66);
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_7198[iVar3 /*25*/]))
			{
				if (!Local_7198[iVar3 /*25*/].f_24)
				{
					if ((MISC::GET_GAME_TIMER() - Local_7198[iVar3 /*25*/].f_22) < 3000 && (MISC::GET_GAME_TIMER() - Local_7198[iVar3 /*25*/].f_23) > 4000)
					{
						if (Local_7198[iVar3 /*25*/].f_17 > 5f)
						{
							Local_7198[iVar3 /*25*/].f_24 = 1;
						}
					}
				}
				else if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_7198[iVar3 /*25*/]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Container_Impact_Land", Local_7198[iVar3 /*25*/], "CRANE_SOUNDS", 0, 0);
					Local_7198[iVar3 /*25*/].f_24 = 0;
					Local_7198[iVar3 /*25*/].f_23 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				Local_7198[iVar3 /*25*/].f_24 = 0;
				Local_7198[iVar3 /*25*/].f_23 = 0;
			}
		}
		iVar3++;
	}
	iVar67 = 0;
	if (MISC::ABSF(Local_7249.f_72) > 0.01f)
	{
		iVar67 = 0;
		while (iVar67 < 8)
		{
			PHYSICS::ROPE_RESET_LENGTH(Local_7249.f_15[iVar67], 0);
			iVar67++;
		}
	}
	else
	{
		iVar67 = 0;
		while (iVar67 < 8)
		{
			PHYSICS::ROPE_RESET_LENGTH(Local_7249.f_15[iVar67], 1);
			iVar67++;
		}
		fVar68 = 0f;
		fVar69 = 1000f;
		iVar67 = 0;
		while (iVar67 < 8)
		{
			fVar70 = PHYSICS::ROPE_GET_DISTANCE_BETWEEN_ENDS(Local_7249.f_15[iVar67]);
			if (fVar70 > fVar68)
			{
				fVar68 = fVar70;
			}
			if (fVar70 < fVar69)
			{
				fVar69 = fVar70;
			}
			iVar67++;
		}
		if ((fVar68 - fVar69) > 0.02f)
		{
			iVar67 = 0;
			while (iVar67 < 8)
			{
				PHYSICS::ROPE_FORCE_LENGTH(Local_7249.f_15[iVar67], fVar68);
				iVar67++;
			}
		}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 236))
	{
		bLocal_5296 = !bLocal_5296;
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_5304))
	{
		uLocal_5304 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		CAM::SHAKE_CAM(uLocal_5304, "HAND_SHAKE", 0.1f);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_7249, Local_7249.f_33 + Vector(0f, 0f, Local_7249.f_70), 0, 0, 1);
	ENTITY::DETACH_ENTITY(Local_7249.f_1, 1, 1);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7249.f_1, Local_7249, -1, Local_7249.f_24, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	iVar3 = 0;
	while (iVar3 < Local_7249.f_4)
	{
		ENTITY::DETACH_ENTITY(Local_7249.f_4[iVar3], 1, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_7249.f_4[iVar3], Local_7249, -1, Local_7249.f_36[iVar3 /*3*/], 0f, ((Local_7249.f_70 * 70f) * -1f), 0f, 0, 0, 0, 0, 2, 1);
		iVar3++;
	}
	if (!bLocal_5296)
	{
		Var71 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_7249.f_1, Var8) };
		Var74 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_7249, Var8) };
		if (Var71.f_2 < fLocal_6903)
		{
			Var71.f_2 = fLocal_6903;
		}
		else if (Var71.f_2 > fLocal_6902)
		{
			Var71.f_2 = fLocal_6902;
		}
		if (Var74.x < fLocal_6901)
		{
			Var74.x = fLocal_6901;
		}
		else if (Var74.x > fLocal_6900)
		{
			Var74.x = fLocal_6900;
		}
		fVar77 = ((Var74.x - fLocal_6901) / (fLocal_6900 - fLocal_6901));
		fVar78 = (1f - ((Var71.f_2 - fLocal_6903) / (fLocal_6902 - fLocal_6903)));
		if (bParam0)
		{
			Local_7249.f_75 = fVar78;
			Local_7249.f_76 = fVar77;
		}
		else
		{
			Local_7249.f_75 = (Local_7249.f_75 + ((fVar78 - Local_7249.f_75) * 0.2f));
			Local_7249.f_76 = (Local_7249.f_76 + ((fVar77 - Local_7249.f_76) * 0.1f));
		}
		Var79 = { Local_6917 };
		Var79.x = (Var79.x + ((Local_6923.x - Local_6917.x) * Local_7249.f_76));
		Var79.f_1 = (Var79.f_1 + ((Local_6923.f_1 - Local_6917.f_1) * Local_7249.f_76));
		Var79.f_2 = (Var79.f_2 + ((Local_6923.f_2 - Local_6917.f_2) * Local_7249.f_76));
		Var79.x = (Var79.x + ((Local_6935.x - Local_6929.x) * Local_7249.f_75));
		Var79.f_1 = (Var79.f_1 + ((Local_6935.f_1 - Local_6929.f_1) * Local_7249.f_75));
		Var79.f_2 = (Var79.f_2 + ((Local_6935.f_2 - Local_6929.f_2) * Local_7249.f_75));
		Var82 = { Local_6920 };
		Var82.x = (Var82.x + ((Local_6926.x - Local_6920.x) * Local_7249.f_76));
		Var82.f_1 = (Var82.f_1 + ((Local_6926.f_1 - Local_6920.f_1) * Local_7249.f_76));
		Var82.f_2 = (Var82.f_2 + ((Local_6926.f_2 - Local_6920.f_2) * Local_7249.f_76));
		Var82.x = (Var82.x + ((Local_6938.x - Local_6932.x) * Local_7249.f_75));
		Var82.f_1 = (Var82.f_1 + ((Local_6938.f_1 - Local_6932.f_1) * Local_7249.f_75));
		Var82.f_2 = (Var82.f_2 + ((Local_6938.f_2 - Local_6932.f_2) * Local_7249.f_75));
		CAM::ATTACH_CAM_TO_ENTITY(uLocal_5304, Local_7249.f_1, Var79, 1);
		CAM::POINT_CAM_AT_ENTITY(uLocal_5304, Local_7249.f_1, Var82, 1);
		CAM::SET_CAM_FOV(uLocal_5304, fLocal_6948);
		CAM::SHAKE_CAM(uLocal_5304, "HAND_SHAKE", 0.1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-70f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-70f, 1065353216);
	}
	else
	{
		Var85 = { ENTITY::GET_ENTITY_COORDS(Local_7249.f_2, 1) };
		Var88 = { ENTITY::GET_ENTITY_COORDS(Local_7249.f_1, 1) };
		Var91.x = (((Var88.x + Var85.x) * 0.5f) - Var85.x);
		Var91.f_1 = (((Var88.f_1 + Var85.f_1) * 0.5f) - Var85.f_1);
		Var91.f_2 = (Local_6941.f_2 - 1.55f);
		CAM::ATTACH_CAM_TO_ENTITY(uLocal_5304, Local_7249.f_1, Var91, 1);
		CAM::STOP_CAM_POINTING(uLocal_5304);
		CAM::SET_CAM_NEAR_CLIP(uLocal_5304, 0.1f);
		CAM::SET_CAM_ROT(uLocal_5304, Local_6944, 2);
		CAM::SET_CAM_FOV(uLocal_5304, fLocal_6947);
	}
	Var94 = { Var8 };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var8, &(Var94.f_2));
	Var94.f_2 = (Var94.f_2 + 0.5f);
	if (!Local_7249.f_77)
	{
		iVar3 = 0;
		while (iVar3 < Local_7198)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_7198[iVar3 /*25*/]))
			{
				Var97 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_7198[iVar3 /*25*/], Var94) };
				if (MISC::ABSF(Var97.x) < 1.3f)
				{
					if (MISC::ABSF(Var97.f_1) < 6f)
					{
						if (Var97.f_2 < 2.8f)
						{
							Var100 = { ENTITY::GET_ENTITY_COORDS(Local_7198[iVar3 /*25*/], 1) };
							Var94.f_2 = (Var100.f_2 + 3f);
						}
					}
				}
			}
			iVar3++;
		}
	}
	if (!Local_7249.f_77)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_2))
		{
			GRAPHICS::DRAW_SPOT_LIGHT(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, 1.2658f, 6.0654f, -0.6602f), 0f, 0f, -1f, 0, 255, 0, fLocal_5290, fLocal_5291, fLocal_5292, fLocal_5293, fLocal_5294);
			GRAPHICS::DRAW_SPOT_LIGHT(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, -1.2819f, 6.0349f, -0.7461f), 0f, 0f, -1f, 0, 255, 0, fLocal_5290, fLocal_5291, fLocal_5292, fLocal_5293, fLocal_5294);
			GRAPHICS::DRAW_SPOT_LIGHT(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, -1.2073f, -5.9944f, -0.6715f), 0f, 0f, -1f, 0, 255, 0, fLocal_5290, fLocal_5291, fLocal_5292, fLocal_5293, fLocal_5294);
			GRAPHICS::DRAW_SPOT_LIGHT(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_2, 1.1668f, -5.9398f, -0.5084f), 0f, 0f, -1f, 0, 255, 0, fLocal_5290, fLocal_5291, fLocal_5292, fLocal_5293, fLocal_5294);
		}
	}
	if (Local_7249.f_77)
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_7249.f_85))
		{
			iVar3 = 0;
			while (iVar3 < Local_7198)
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_7198[iVar3 /*25*/], Local_7249.f_2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_7249.f_85, "Strain", Local_7198[iVar3 /*25*/], "CRANE_SOUNDS", 0, 0);
				}
				iVar3++;
			}
		}
	}
	else if (!AUDIO::HAS_SOUND_FINISHED(Local_7249.f_85))
	{
		AUDIO::STOP_SOUND(Local_7249.f_85);
	}
}

void func_564(var uParam0)//Position - 0x682F3
{
	if (!iLocal_5220)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_7249.f_2, "Dock_crane_SLD_unload", "map_objects", 8f, 0, 1, 0, 0, 0);
				ENTITY::DETACH_ENTITY(*uParam0, 1, 0);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(*uParam0, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Detach_Container", *uParam0, "CRANE_SOUNDS", 0, 0);
				iLocal_7342 = MISC::GET_GAME_TIMER();
				Local_7249.f_77 = 0;
			}
			else if (!Local_7249.f_77)
			{
				if (func_559(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), ENTITY::GET_ENTITY_COORDS(Local_7249.f_2, 1)))
				{
					ENTITY::PLAY_ENTITY_ANIM(Local_7249.f_2, "Dock_crane_SLD_load", "map_objects", 8f, 0, 1, 0, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(*uParam0, Local_7249.f_2, -1, -1, Local_5332, Local_5335, Local_5338, -1f, iLocal_5214, uLocal_5215, uLocal_5216, uLocal_5217, 2);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Attach_Container", *uParam0, "CRANE_SOUNDS", 0, 0);
					iLocal_7342 = MISC::GET_GAME_TIMER();
					Local_7249.f_77 = 1;
				}
			}
		}
	}
}

float func_565(struct<3> Param0, bool bParam3)//Position - 0x68415
{
	float fVar0;
	
	fVar0 = (((Param0.x * Param0.x) + (Param0.f_1 * Param0.f_1)) + (Param0.f_2 * Param0.f_2));
	if (bParam3)
	{
		return SYSTEM::SQRT(fVar0);
	}
	return fVar0;
}


void func_567(int iParam0)//Position - 0x684A6
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_7249.f_2, iParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_7249, iParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_1))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_7249.f_1, iParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_3))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_7249.f_3, iParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_14))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_7249.f_14, iParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_2))
	{
		ENTITY::SET_ENTITY_COORDS(Local_7249.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7249.f_1, Local_7249.f_27) - Vector(1f, 0f, 0f), 1, 0, 0, 1);
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_7249.f_15[0])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_7249.f_15[1])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_7249.f_15[2])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_7249.f_15[3])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_7249.f_15[4])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_7249.f_15[5])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_7249.f_15[6])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_7249.f_15[7])))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_4[0]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_7249.f_4[0], iParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_4[1]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_7249.f_4[1], iParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_4[2]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_7249.f_4[2], iParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_4[3]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_7249.f_4[3], iParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_4[4]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_7249.f_4[4], iParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_4[5]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_7249.f_4[5], iParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_4[6]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_7249.f_4[6], iParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_4[7]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_7249.f_4[7], iParam0);
	}
}

void func_568()//Position - 0x686AA
{
	if (MISC::IS_PC_VERSION())
	{
		if (!iLocal_7341)
		{
			PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Port_LS_Heist_crane");
			iLocal_7341 = 1;
		}
	}
}

void func_569()//Position - 0x686CE
{
	func_571();
	func_504();
	func_570();
	if (iLocal_6034 > 0 && iLocal_6034 < 8)
	{
		TASK::REQUEST_WAYPOINT_RECORDING("cranassist");
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("cranassist"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("cranassist", 1, 1f, 0.5f);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[14]) && !iLocal_5211)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_6111[14], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_6111[14], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_6111[14], 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_6111[14], 8, 1, 0, 0);
		iLocal_5211 = 1;
	}
	if (iLocal_6034 < 5)
	{
		if (!func_403("GOT TO CABIN EARLY"))
		{
			if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -51.94623f, -2414.439f, 20.53363f, -51.96425f, -2413.214f, 22.33562f, 1.75f, 0, 1, 0))
				{
					iLocal_6034 = 5;
					func_400("GOT TO CABIN EARLY", 1);
				}
			}
		}
	}
	switch (iLocal_6034)
	{
		case 0:
			if (func_473())
			{
				Local_7249.f_70 = 0.297f;
				Local_7249.f_74 = 0f;
				Local_6816 = { -53.02f, -2416.04f, 14.75f };
				while (!func_468(0))
				{
					SYSTEM::WAIT(0);
					RECORDING::_0x208784099002BC30("M_ThePortOfLSHeistSetup", 0);
				}
				if (bLocal_5249 == 1)
				{
					if (!PED::IS_PED_INJURED(iLocal_6134))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
						{
							uLocal_5367 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5367, "missheistdockssetup1ig_14", "floyd_lets_get_going", 8f, -8f, 1, 16, 1148846080, 0);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5367, iLocal_6138, -1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 1);
							iLocal_5088 = 4;
						}
					}
				}
				func_567(1);
				iLocal_5067 = 11;
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6134, 1);
				}
				CUTSCENE::REMOVE_CUTSCENE();
				func_409(5, "Follow Floyd to crane", 0, 0, 0, 1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					while (!func_468(13))
					{
						SYSTEM::WAIT(0);
						RECORDING::_0x208784099002BC30("M_ThePortOfLSHeistSetup", 0);
					}
					func_469();
				}
				STREAMING::REMOVE_IPL("pcranecont");
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[12]))
				{
					PED::DELETE_PED(&(iLocal_6111[12]));
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 2, 0);
				sLocal_7374 = "AW_CLIMB_CRA";
				iLocal_6034++;
			}
			break;
		
		case 1:
			func_405(1);
			iLocal_6034++;
			break;
		
		case 2:
			if (func_316(&Local_6997, -49.847f, -2404.448f, 5.0006f, 0.1f, 0.1f, 2f, 1, "AW_DRIVE_TO_CRA", 0, 1, -1))
			{
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_6997.f_5))
				{
					HUD::SET_BLIP_ROUTE(Local_6997.f_5, 0);
				}
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
				{
					GlobalFunc_5652(&Local_6997, 1, 0);
					RECORDING::_0x293220DA1B46CEBC(3f, 3f, 4);
					iLocal_6034 = 3;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -36.00893f, -2398.948f, 5f, -65.41509f, -2398.951f, 15.03632f, 35f, 0, 1, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
							RECORDING::_0x293220DA1B46CEBC(3f, 3f, 4);
							iLocal_6034++;
						}
						else
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 3f, 4);
							GlobalFunc_5652(&Local_6997, 1, 0);
							iLocal_6034 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_6134))
					{
						if (iLocal_5088 == 5)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5367))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5367) > 0.6f)
								{
									if (!PED::IS_PED_INJURED(iLocal_6134))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
										{
											TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0);
											ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 1);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					GlobalFunc_5652(&Local_6997, 1, 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6138, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					iLocal_6034++;
				}
			}
			break;
		
		case 4:
			if (!func_403("DH_1_CLIMB_UP_CRANE"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_HANDLER_START"))
						{
							AUDIO::STOP_AUDIO_SCENE("DH_1_HANDLER_START");
						}
						else
						{
							AUDIO::START_AUDIO_SCENE("DH_1_CLIMB_UP_CRANE");
							func_400("DH_1_CLIMB_UP_CRANE", 1);
						}
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
				{
					sLocal_7374 = "";
					iLocal_6034 = (iLocal_6034 - 1);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_6134))
			{
				if (iLocal_5088 == 5)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5367))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5367) > 0.6f)
						{
							if (!PED::IS_PED_INJURED(iLocal_6134))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
									{
										TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0);
									}
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 1);
								}
							}
						}
					}
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
			{
				if (func_534(&Local_6997, -49.847f, -2404.448f, 5.0006f, 0.1f, 0.1f, 2f, 1, sLocal_7374, 0, 1, -1, 1))
				{
					iLocal_6034++;
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -48.89576f, -2405.314f, 4.250962f, -50.76531f, -2405.31f, 7.750961f, 2.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -48.72139f, -2405.79f, 7.76052f, -50.12113f, -2405.804f, 9.510519f, 1f, 0, 1, 0))
				{
					GlobalFunc_5652(&Local_6997, 1, 0);
					iLocal_6034++;
				}
			}
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -53.42506f, -2407.837f, 14.78902f, -49.81722f, -2407.882f, 17.53902f, 1.25f, 0, 1, 0))
			{
				if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				}
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
			}
			if (!func_403("DS1_MCS1_P2"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -51.25686f, -2406.552f, 18.55877f, -50.18517f, -2406.576f, 20.95283f, 1.5f, 0, 1, 0))
				{
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_MCS1_P2", 8, 0, 0, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_6111[14], PLAYER::PLAYER_PED_ID(), -1, 2048, 3);
						RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
						func_400("DS1_MCS1_P2", 1);
					}
				}
			}
			else if (!GlobalFunc_111())
			{
				if (!GlobalFunc_5172(&Local_6997, 1))
				{
					if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_403("DS1_getin"))
						{
							if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_getin", 8, 0, 0, 0))
							{
								func_400("DS1_getin", 1);
							}
						}
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_6997.f_5))
			{
				AUDIO::SET_GPS_ACTIVE(0);
			}
			if (func_534(&Local_6997, -52.253f, -2413.952f, 20.5856f, 0.1f, 0.1f, 2f, 1, "", 0, 1, -1, 1))
			{
			}
			else if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -51.94623f, -2414.439f, 20.53363f, -51.96425f, -2413.214f, 22.33562f, 1.75f, 0, 1, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						}
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_377))
					{
						HUD::REMOVE_BLIP(&uLocal_377);
					}
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
					HUD::REMOVE_BLIP(&(Local_6997.f_5));
					iLocal_6034++;
				}
			}
			break;
		
		case 6:
			STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1trevor_crane"))
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_6176))
				{
					uLocal_6176 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
				}
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Container_Lifter");
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Creak_V1");
				GlobalFunc_8316(1, 1, 1, 0);
				CAM::PLAY_CAM_ANIM(uLocal_6176, "get_in_cam", "missheistdockssetup1trevor_crane", -53.139f, -2415.768f, 22.604f, 0f, 0f, -178.2f, 0, 2);
				CAM::SET_CAM_ACTIVE(uLocal_6176, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				uLocal_5366 = PED::CREATE_SYNCHRONIZED_SCENE(-0.1f, -0.1f, -0.35f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5366, Local_7249.f_1, -1);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_5366, "missheistdockssetup1trevor_crane", "get_in", 1000f, -8f, 0, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_5366, 1);
				iLocal_6034++;
			}
			break;
		
		case 7:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			func_468(13);
			STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1trevor_crane"))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5366))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5366) == 1f)
					{
						GlobalFunc_8316(0, 1, 1, 0);
						uLocal_5366 = PED::CREATE_SYNCHRONIZED_SCENE(-0.1f, -0.1f, -0.35f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5366, Local_7249.f_1, -1);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_5366, "missheistdockssetup1trevor_crane", "idle", 8f, -8f, 5, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_5366, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5366, 1);
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_6997, 1))
							{
								if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
								{
									if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_climbin", 8, 0, 0, 0))
									{
										func_400("DS1_climbin", 1);
									}
								}
							}
						}
						iLocal_6034++;
					}
				}
			}
			break;
		
		case 8:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_6138, -166.8165f, -2460.648f, 5.2973f, 1, 0, 0, 1);
				VEHICLE::DELETE_VEHICLE(&iLocal_6138);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("handler"));
			}
			TASK::REMOVE_WAYPOINT_RECORDING("cranassist");
			iLocal_6034++;
			break;
		
		case 9:
			if (func_732())
			{
				func_292();
				func_291();
			}
			break;
	}
}

void func_570()//Position - 0x690AE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_6138))
		{
			Local_7363 = { ENTITY::GET_ENTITY_ROTATION(iLocal_6138, 2) };
			if (Local_7363.x > 80f || Local_7363.x < -80f)
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_6134, iLocal_6138))
				{
					ENTITY::DETACH_ENTITY(iLocal_6134, 1, 1);
					func_400("HANDLER NOT SAFE", 1);
				}
			}
		}
		else
		{
			func_400("HANDLER NOT SAFE", 0);
		}
	}
}

void func_571()//Position - 0x69121
{
	if (!func_403("HANDLER NOT SAFE"))
	{
		switch (iLocal_5088)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_14");
				if (iLocal_7196 == 6)
				{
					iLocal_5088 = 6;
				}
				else
				{
					iLocal_5088++;
				}
				break;
			
			case 1:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
				{
					if (!PED::IS_PED_INJURED(iLocal_6134))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
						{
							uLocal_5367 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5367, "missheistdockssetup1ig_14", "floyd_lets_get_going", 8f, -8f, 1, 16, 1148846080, 0);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5367, iLocal_6138, -1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 1);
							iLocal_5088++;
						}
					}
				}
				break;
			
			case 2:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5367))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5367) == 1f)
						{
							if (!PED::IS_PED_INJURED(iLocal_6134))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
								{
									uLocal_5367 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5367, "missheistdockssetup1ig_14", "floyd_get_to_the_containers", 8f, -8f, 1, 16, 1148846080, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5367, iLocal_6138, -1);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 1);
									iLocal_5088++;
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5367))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5367) == 1f)
						{
							if (!PED::IS_PED_INJURED(iLocal_6134))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
								{
									uLocal_5367 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5367, "missheistdockssetup1ig_14", "floyd_idle_base", 8f, -8f, 1, 16, 1148846080, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5367, iLocal_6138, -1);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 1);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5367, 1);
									iLocal_5088++;
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					if (iLocal_7196 != 6)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
							{
								if (GlobalFunc_156(iLocal_6138, iLocal_5326[0], 1) < 8f || GlobalFunc_156(iLocal_6138, iLocal_5326[1], 1) < 8f)
								{
									if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
									{
										uLocal_5367 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5367, "missheistdockssetup1ig_14", "floyd_ok_now_grab_the_container", 8f, -8f, 1, 16, 1148846080, 0);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5367, iLocal_6138, -1);
										ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 1);
										iLocal_5088 = 3;
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
							{
								if (VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_6138, 1), -97.1716f, -2459.185f, 5.0204f, 1) > 10f)
									{
										uLocal_5367 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5367, "missheistdockssetup1ig_14", "floyd_take_this_to_the_loading_area", 8f, -8f, 1, 16, 1148846080, 0);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5367, iLocal_6138, -1);
										ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 1);
										iLocal_5088 = 3;
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
							{
								if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[0], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[1], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
									{
										if (!func_403("GOOD WORK"))
										{
											uLocal_5367 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5367, "missheistdockssetup1ig_14", "floyd_good_work", 8f, -8f, 1, 16, 1148846080, 0);
											PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5367, iLocal_6138, -1);
											ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 1);
											func_400("GOOD WORK", 1);
											iLocal_5088 = 3;
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
							{
								if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[0], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[1], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
									{
										if (func_403("GOOD WORK"))
										{
											if (!func_403("TASK COMPLETE"))
											{
												uLocal_5367 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
												TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5367, "missheistdockssetup1ig_14", "floyd_task_complete", 8f, -8f, 1, 16, 1148846080, 0);
												PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5367, iLocal_6138, -1);
												ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 1);
												func_400("TASK COMPLETE", 1);
												iLocal_5088 = 3;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_6034 > 2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
						{
							uLocal_5367 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5367, "missheistdockssetup1ig_14", "floyd_climb_down", 8f, -8f, 1, 16, 1148846080, 0);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5367, iLocal_6138, -1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 1);
							iLocal_5088 = 5;
						}
					}
				}
				break;
			
			case 5:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5367))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5367) == 1f)
						{
							if (!PED::IS_PED_INJURED(iLocal_6134))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
								{
									if (!PED::IS_PED_INJURED(iLocal_6134))
									{
										PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_6134, 16);
									}
									TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -120.65f, -2422.97f, 6f, 1f, -1, 0.25f, 0, -38.16f);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 1);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_6134, uLocal_6175);
									iLocal_5088 = 7;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
				{
					if (!PED::IS_PED_INJURED(iLocal_6134))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
						{
							uLocal_5367 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5367, "missheistdockssetup1ig_14", "floyd_idle_base", 8f, -8f, 0, 0, 1148846080, 0);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5367, iLocal_6138, -1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 1);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5367, 1);
							func_400("TASK COMPLETE", 1);
							func_400("GOOD WORK", 1);
							iLocal_5088 = 4;
						}
					}
				}
				break;
			}
	}
}

void func_572()//Position - 0x6983D
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_6138))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
		{
			VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(2f);
			PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(2f);
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	if (!func_403("DH_1_HANDLER_START"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER");
				}
				else
				{
					AUDIO::START_AUDIO_SCENE("DH_1_HANDLER_START");
					func_400("DH_1_HANDLER_START", 1);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_5411[0 /*16*/]))
	{
		if (!PED::IS_PED_INJURED(Local_5411[0 /*16*/]))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_5411[0 /*16*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 5f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5411[0 /*16*/]))
				{
					PED::DELETE_PED(&(Local_5411[0 /*16*/]));
				}
			}
		}
	}
	if (Local_5411[0 /*16*/].f_4 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_5411[1 /*16*/]))
		{
			if (!PED::IS_PED_INJURED(Local_5411[1 /*16*/]))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_5411[1 /*16*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 5f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5411[1 /*16*/]))
					{
						PED::DELETE_PED(&(Local_5411[1 /*16*/]));
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_5411[2 /*16*/]))
		{
			if (!PED::IS_PED_INJURED(Local_5411[2 /*16*/]))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_5411[2 /*16*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 5f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5411[2 /*16*/]))
					{
						PED::DELETE_PED(&(Local_5411[2 /*16*/]));
					}
				}
			}
		}
	}
	if (!func_403("SET UP PHYSICS FOR 0"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_5326[0]))
			{
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_5326[0], 15000f, -1f, 0f, 0f, 0f, 0f, 0f, 0f, -1082130432, -1082130432, -1082130432);
				func_400("SET UP PHYSICS FOR 0", 1);
			}
		}
	}
	if (!func_403("SET UP PHYSICS FOR 1"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_5326[1]))
			{
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_5326[1], 15000f, -1f, 0f, 0f, 0f, 0f, 0f, 0f, -1082130432, -1082130432, -1082130432);
				func_400("SET UP PHYSICS FOR 1", 1);
			}
		}
	}
	func_570();
	func_504();
	func_358(2, 0f, 0f, 0f, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
	{
		func_571();
	}
	else
	{
		func_504();
	}
	if (iLocal_6034 > 0)
	{
		if (bLocal_5249 == 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_6134))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5367))
				{
					func_405(1);
					bLocal_5249 = false;
				}
			}
		}
	}
	switch (iLocal_6034)
	{
		case 0:
			if (func_473())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_469();
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
					{
						func_578(&uLocal_378, &iLocal_6138, 1);
					}
				}
				func_409(4, "Handler Work", 0, 0, 0, 1);
				iLocal_5122 = 0;
				iLocal_5088 = 0;
				iLocal_5067 = 9;
				iLocal_7373 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6138))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6138, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_6138, 0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_6134);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6134, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6137, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[12]))
				{
					if (!PED::IS_PED_INJURED(iLocal_6111[12]))
					{
						PED::DELETE_PED(&(iLocal_6111[12]));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[7]))
				{
					if (!PED::IS_PED_INJURED(iLocal_6111[7]))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_6111[7], "WORLD_HUMAN_AA_SMOKE", 0, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[13]))
				{
					if (!PED::IS_PED_INJURED(iLocal_6111[13]))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_6111[13], "WORLD_HUMAN_CLIPBOARD", 0, 0);
					}
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 2, 0);
				STREAMING::REQUEST_IPL("pcranecont");
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_6138))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
					{
						if (bLocal_5249 == 0)
						{
							if (iLocal_5121 == 0)
							{
								if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_07h", 7, 0, 0, 0))
								{
									iLocal_5069 = 0;
									iLocal_5121 = 0;
									iLocal_6034++;
								}
							}
						}
						else
						{
							if (!func_403("AW_HAND_TASK"))
							{
								GlobalFunc_527("AW_HAND_TASK", 7500, 0);
								func_400("AW_HAND_TASK", 1);
							}
							iLocal_5069 = 0;
							iLocal_5121 = 0;
							iLocal_6034++;
						}
					}
					else
					{
						iLocal_5069 = 0;
						iLocal_5121 = 0;
						iLocal_6034++;
					}
				}
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_6138))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
				{
					if (GlobalFunc_663("AW_GETIN_HAND", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_378))
					{
						HUD::REMOVE_BLIP(&uLocal_378);
					}
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_07ha", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(2f, 10f, 4);
						GlobalFunc_574(583, 0);
						iLocal_5130 = 0;
						iLocal_5122 = 0;
						iLocal_5131 = 0;
						iLocal_5164 = 0;
						iLocal_6034++;
					}
				}
				else
				{
					if (!GlobalFunc_111())
					{
						if (iLocal_5122 == 0)
						{
							GlobalFunc_5884("AW_GETIN_HAND");
							iLocal_5122 = 1;
						}
					}
					if (iLocal_5122 == 1)
					{
						if (!func_403("DS1_Act"))
						{
							if (!GlobalFunc_5172(&Local_6997, 1))
							{
								if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_Act", 7, 0, 0, 0))
								{
									func_400("DS1_Act", 1);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			func_573();
			if (iLocal_5164 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
					{
						if (!GlobalFunc_5172(&Local_6997, 1))
						{
							GlobalFunc_5884("AW_HAND_TASK");
							iLocal_5164 = 1;
						}
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
			{
				if (iLocal_5163 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[0], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[1], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
					{
						if (iLocal_7373 == 0)
						{
							iLocal_7372 = MISC::GET_GAME_TIMER();
							iLocal_7373 = 1;
						}
						if (iLocal_7373 == 1)
						{
							if (func_403("CONTAINER LAND") || GlobalFunc_588(&iLocal_7372, 1000))
							{
								if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::CLEAR_HELP(1);
								}
								func_551();
								GlobalFunc_703(&uLocal_6847);
								GlobalFunc_571(0, -1);
								iLocal_5091 = MISC::GET_GAME_TIMER();
								GlobalFunc_5105();
								iLocal_6034++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_588(&iLocal_5091, 2000))
			{
				if (!GlobalFunc_5172(&Local_6997, 1))
				{
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_08a", 7, 0, 0, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_6111[14]))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -57.339f, -2448.356f, 6.2399f, 1f, 20000, 1048576000, 0, 1193033728);
							TASK::TASK_ACHIEVE_HEADING(0, 144.9673f, 0);
							TASK::TASK_STAND_STILL(0, 2000);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_COFFEE", 0, 1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_6111[14], uLocal_6175);
						}
						if (!PED::IS_PED_INJURED(iLocal_6136))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_6136);
						}
						RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
						iLocal_6034++;
					}
				}
			}
			break;
		
		case 4:
			if (func_732())
			{
				bLocal_5249 = false;
				STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_a");
				GlobalFunc_703(&(uLocal_6842[0]));
				GlobalFunc_703(&(uLocal_6842[1]));
				GlobalFunc_703(&(uLocal_6842[2]));
				func_292();
				func_291();
			}
			break;
	}
}

void func_573()//Position - 0x6A00C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
	{
		if (VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
		{
			iLocal_5163 = 1;
		}
		else
		{
			iLocal_5163 = 0;
		}
	}
	func_576();
	if (iLocal_5069 > 1)
	{
		func_575();
	}
	switch (iLocal_5069)
	{
		case 0:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Container_Lifter", 0);
			func_400("HD_HELP1", 0);
			iLocal_5069++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
				{
					if (func_403("DS1_07hc"))
					{
						func_400("DS1_07hc", 0);
					}
					if (GlobalFunc_663("AW_BACK_IN_HAND", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_378))
					{
						GlobalFunc_703(&uLocal_378);
					}
					if (!func_403("HD_HELP1"))
					{
						GlobalFunc_Display_Help_Text("HD_HELP1");
						func_400("HD_HELP1", 1);
					}
					if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[0], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
							{
								func_574(&(uLocal_6842[0]), ENTITY::GET_ENTITY_COORDS(iLocal_5326[0], 1), 0);
								HUD::SET_BLIP_COLOUR(uLocal_6842[0], 2);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_6842[0], "CONT_LABEL");
							}
							else
							{
								GlobalFunc_703(&(uLocal_6842[0]));
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[1], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
							{
								func_574(&(uLocal_6842[1]), ENTITY::GET_ENTITY_COORDS(iLocal_5326[1], 1), 0);
								HUD::SET_BLIP_COLOUR(uLocal_6842[1], 2);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_6842[1], "CONT_LABEL");
							}
							else
							{
								GlobalFunc_703(&(uLocal_6842[1]));
							}
						}
					}
					iLocal_5130 = 0;
					iLocal_5069++;
				}
				else
				{
					if (iLocal_5130 == 0)
					{
						if (!GlobalFunc_663("AW_BACK_IN_HAND", 0, 0))
						{
							GlobalFunc_703(&(uLocal_6842[0]));
							GlobalFunc_703(&(uLocal_6842[1]));
							GlobalFunc_703(&uLocal_6847);
							func_578(&uLocal_378, &iLocal_6138, 1);
							GlobalFunc_5105();
							if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_HELP(1);
							}
							HUD::CLEAR_PRINTS();
							if (!GlobalFunc_5172(&Local_6997, 2))
							{
								if (!func_403("AW_BACK_IN_HAND"))
								{
									GlobalFunc_527("AW_BACK_IN_HAND", 7500, 0);
									func_400("AW_BACK_IN_HAND", 1);
								}
								iLocal_5130 = 1;
							}
						}
					}
					if (func_403("AW_BACK_IN_HAND"))
					{
						if (!func_403("DS1_07hc"))
						{
							GlobalFunc_5105();
							if (!GlobalFunc_5172(&Local_6997, 1))
							{
								if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_07hc", 7, 0, 0, 0))
								{
									func_400("DS1_07hc", 1);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
			{
				iLocal_5069 = 1;
			}
			if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
			{
				if (GlobalFunc_74("HD_HELP2"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
			{
				if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[0], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_6842[0]))
							{
								func_574(&(uLocal_6842[0]), ENTITY::GET_ENTITY_COORDS(iLocal_5326[0], 1), 0);
								HUD::SET_BLIP_COLOUR(uLocal_6842[0], 2);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_6842[0], "CONT_LABEL");
							}
						}
						else
						{
							func_400("1st CONTAINER IN", 1);
							GlobalFunc_703(&(uLocal_6842[0]));
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[1], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_6842[1]))
							{
								func_574(&(uLocal_6842[1]), ENTITY::GET_ENTITY_COORDS(iLocal_5326[1], 1), 0);
								HUD::SET_BLIP_COLOUR(uLocal_6842[1], 2);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_6842[1], "CONT_LABEL");
							}
						}
						else
						{
							func_400("2nd CONTAINER IN", 1);
							GlobalFunc_703(&(uLocal_6842[1]));
						}
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_6847))
					{
						GlobalFunc_703(&uLocal_6847);
					}
					if (GlobalFunc_156(iLocal_6138, iLocal_5326[0], 1) < 30f || GlobalFunc_156(iLocal_6138, iLocal_5326[1], 1) < 30f)
					{
						if (iLocal_5131 == 0)
						{
							if (!GlobalFunc_74("HD_HELP1"))
							{
								GlobalFunc_159("HD_HELP1", -1);
								func_400("HD_HELP1", 1);
								iLocal_5131 = 1;
							}
						}
					}
				}
				else
				{
					GlobalFunc_703(&(uLocal_6842[0]));
					GlobalFunc_703(&(uLocal_6842[1]));
					GlobalFunc_703(&(uLocal_6842[2]));
					func_574(&uLocal_6847, Local_6788, 0);
					iLocal_5122 = 0;
					iLocal_7370 = 0;
					iLocal_5069++;
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
			{
				if (!GlobalFunc_5172(&Local_6997, 2))
				{
					if (iLocal_5122 == 0)
					{
						if (func_403("AW_HAND_GOTC"))
						{
							GlobalFunc_527("AW_HAND_GOTC", 7500, 0);
							iLocal_5122 = 1;
						}
					}
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
			{
				iLocal_5069 = 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
			{
				if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[0], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[1], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
					{
						HUD::CLEAR_PRINTS();
						GlobalFunc_703(&uLocal_6847);
						if (!func_403("AW_HAND_TASK"))
						{
							GlobalFunc_527("AW_HAND_TASK", 7500, 0);
							func_400("AW_HAND_TASK", 1);
						}
					}
					if (GlobalFunc_663("AW_HAND_GOTC", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (GlobalFunc_663("AW_HAND_DROP", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(1);
					}
					iLocal_5069 = 2;
				}
				else if (VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
				{
					if (iLocal_7370 == 0)
					{
						if (VEHICLE::IS_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138, iLocal_5326[0]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[0], -93.6264f, -2450.864f, 28.26669f, -102.8726f, -2464.123f, 3.520514f, 16.25f, 0, 1, 0))
						{
							if (!func_403("AW_HAND_DROP"))
							{
								HUD::CLEAR_PRINTS();
								GlobalFunc_527("AW_HAND_DROP", 7500, 0);
								func_400("AW_HAND_DROP", 1);
							}
							GlobalFunc_159("HD_HELP2", -1);
							iLocal_7370 = 1;
						}
						if (VEHICLE::IS_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138, iLocal_5326[1]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[1], -93.6264f, -2450.864f, 28.26669f, -102.8726f, -2464.123f, 3.520514f, 16.25f, 0, 1, 0))
						{
							if (!func_403("AW_HAND_DROP"))
							{
								HUD::CLEAR_PRINTS();
								GlobalFunc_527("AW_HAND_DROP", 7500, 0);
								func_400("AW_HAND_DROP", 1);
							}
							GlobalFunc_159("HD_HELP2", -1);
							iLocal_7370 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_574(var uParam0, struct<3> Param1, int iParam4)//Position - 0x6A73C
{
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		*uParam0 = HUD::ADD_BLIP_FOR_COORD(Param1);
		HUD::SET_BLIP_ROUTE(*uParam0, iParam4);
	}
}

void func_575()//Position - 0x6A763
{
	switch (iLocal_5094)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					if ((ENTITY::GET_ENTITY_SPEED(iLocal_6138) > 30f && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_6138)) || fLocal_7368 > (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iLocal_6138)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_6138)))
					{
						if (!func_403("DS1_07hb"))
						{
							AUDIO::INTERRUPT_CONVERSATION(iLocal_6134, "DH1_DXAA", "FLOYD");
							iLocal_7369 = MISC::GET_GAME_TIMER();
							func_400("DS1_07hb", 1);
						}
						else if (GlobalFunc_588(&iLocal_7369, 12000))
						{
							func_400("DS1_07hb", 0);
						}
					}
				}
				fLocal_7368 = (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iLocal_6138)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_6138));
				if (!func_403("DS1_41b"))
				{
					if (!GlobalFunc_5172(&Local_6997, 1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
						{
							if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
							{
								if (ENTITY::GET_ENTITY_SPEED(iLocal_5326[0]) > 4f || ENTITY::GET_ENTITY_SPEED(iLocal_5326[1]) > 4f)
								{
									if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_41b", 7, 0, 0, 0))
									{
										iLocal_5087 = MISC::GET_GAME_TIMER();
										func_400("DS1_41b", 1);
									}
								}
							}
						}
					}
				}
				else if (GlobalFunc_588(&iLocal_5087, 7000))
				{
					func_400("DS1_41b", 0);
				}
				if (!func_403("DS1_sees"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_5326[0], 1) < 15f || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_5326[1], 1) < 15f)
						{
							GlobalFunc_5105();
							if (!GlobalFunc_5172(&Local_6997, 1))
							{
								if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_sees", 7, 0, 0, 0))
								{
									func_400("DS1_sees", 1);
								}
							}
						}
					}
				}
				if (!func_403("DS1_line"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_5326[0], 1) < 4f || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_5326[1], 1) < 4f)
						{
							GlobalFunc_5105();
							if (!GlobalFunc_5172(&Local_6997, 1))
							{
								if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_line", 7, 0, 0, 0))
								{
									func_400("DS1_line", 1);
								}
							}
						}
					}
				}
				if (!func_403("DS1_attach"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
					{
						if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[0], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
							{
								if (VEHICLE::_IS_HANDLER_FRAME_ABOVE_CONTAINER(iLocal_6138, iLocal_5326[0]))
								{
									if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
									{
										GlobalFunc_5105();
										if (!GlobalFunc_5172(&Local_6997, 1))
										{
											if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_attach", 7, 0, 0, 0))
											{
												func_400("DS1_attach", 1);
											}
										}
									}
								}
							}
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[1], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
							{
								if (VEHICLE::_IS_HANDLER_FRAME_ABOVE_CONTAINER(iLocal_6138, iLocal_5326[1]))
								{
									if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
									{
										GlobalFunc_5105();
										if (!GlobalFunc_5172(&Local_6997, 1))
										{
											if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_attach", 7, 0, 0, 0))
											{
												func_400("DS1_attach", 1);
											}
										}
									}
								}
							}
						}
					}
				}
				else if (func_403("DS1_08"))
				{
					if (!func_403("DS1_attach2"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
						{
							if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[0], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
								{
									if (VEHICLE::_IS_HANDLER_FRAME_ABOVE_CONTAINER(iLocal_6138, iLocal_5326[0]))
									{
										if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
										{
											GlobalFunc_5105();
											if (!GlobalFunc_5172(&Local_6997, 1))
											{
												if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_attach", 7, 0, 0, 0))
												{
													func_400("DS1_attach2", 1);
												}
											}
										}
									}
								}
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[1], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
								{
									if (VEHICLE::_IS_HANDLER_FRAME_ABOVE_CONTAINER(iLocal_6138, iLocal_5326[1]))
									{
										if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
										{
											GlobalFunc_5105();
											if (!GlobalFunc_5172(&Local_6997, 1))
											{
												if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_attach", 7, 0, 0, 0))
												{
													func_400("DS1_attach2", 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!func_403("DS1_dockf"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
						{
							if (VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
							{
								GlobalFunc_5105();
								if (!GlobalFunc_5172(&Local_6997, 1))
								{
									if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_dockf", 7, 0, 0, 0))
									{
										func_400("DS1_dockf", 1);
									}
								}
							}
						}
					}
				}
				if (!func_403("DS1_13"))
				{
					if (!GlobalFunc_5172(&Local_6997, 1))
					{
						if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_13", 7, 0, 0, 0))
						{
							func_400("DS1_13", 1);
						}
					}
				}
				else if (func_403("DS1_attach2"))
				{
					if (!func_403("DS1_13b"))
					{
						if (!GlobalFunc_5172(&Local_6997, 1))
						{
							if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_13b", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
								func_400("DS1_13b", 1);
							}
						}
					}
				}
				if (func_403("DS1_dockf"))
				{
					if (!func_403("DS1_13c"))
					{
						if (!GlobalFunc_5172(&Local_6997, 1))
						{
							if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_13c", 7, 0, 0, 0))
							{
								func_400("DS1_13c", 1);
							}
						}
					}
					else if (!func_403("DS1_08"))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[0], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[1], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
						{
							GlobalFunc_5105();
							if (!GlobalFunc_5172(&Local_6997, 1))
							{
								if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_Drop", 7, 0, 0, 0))
								{
									func_400("DS1_08", 1);
								}
							}
						}
					}
					else if (!func_403("DS1_13d"))
					{
						if (!GlobalFunc_5172(&Local_6997, 1))
						{
							if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_13d", 7, 0, 0, 0))
							{
								func_400("DS1_13d", 1);
							}
						}
					}
				}
			}
			break;
	}
	if (!func_403("DS1_07hb"))
	{
		if (!GlobalFunc_5172(&Local_6997, 1))
		{
			if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_07hb", 7, 0, 0, 0))
			{
				func_400("DS1_07hb", 1);
			}
		}
	}
}

void func_576()//Position - 0x6AE92
{
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_6138, 1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
		{
			if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
			{
				if (VEHICLE::_IS_HANDLER_FRAME_ABOVE_CONTAINER(iLocal_6138, iLocal_5326[0]) || VEHICLE::_IS_HANDLER_FRAME_ABOVE_CONTAINER(iLocal_6138, iLocal_5326[1]))
				{
					if (!func_403("HD_HELP1B"))
					{
						if (GlobalFunc_74("HD_HELP1"))
						{
							HUD::CLEAR_HELP(1);
						}
						else
						{
							iLocal_7367 = MISC::GET_GAME_TIMER();
							GlobalFunc_Display_Help_Text("HD_HELP1B");
							func_400("HD_HELP1B", 1);
						}
					}
				}
				else if (func_403("HD_HELP1B"))
				{
					if (GlobalFunc_588(&iLocal_7367, 3000))
					{
						if (GlobalFunc_74("HD_HELP1B"))
						{
							HUD::CLEAR_HELP(1);
							func_400("HD_HELP1B", 0);
						}
					}
				}
			}
		}
	}
	if (func_403("PICKED UP A CONTAINER"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
		{
			if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
			{
				if (!func_403("Container_Release_audio"))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Container_Release", iLocal_6138, "CONTAINER_LIFTER_SOUNDS", 0, 0);
					iLocal_5081 = MISC::GET_GAME_TIMER();
					func_400("CONTAINER LAND", 0);
					func_400("Container_Release_audio", 1);
				}
			}
		}
	}
	else if (VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
	{
		if (!func_403("PICKED UP A CONTAINER"))
		{
			func_400("PICKED UP A CONTAINER", 1);
		}
	}
	if (func_403("PICKED UP A CONTAINER"))
	{
		if (GlobalFunc_588(&iLocal_5081, 20))
		{
			if (!func_403("CONTAINER LAND"))
			{
				if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_5326[0]) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_5326[1]))
					{
						if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Container_Lifter", 0))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Container_Land", iLocal_6138, "CONTAINER_LIFTER_SOUNDS", 0, 0);
						}
						func_400("CONTAINER LAND", 1);
					}
				}
			}
		}
	}
	if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
	{
		if (GlobalFunc_588(&iLocal_5081, 1000))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
				{
					if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
						{
							if (VEHICLE::_IS_HANDLER_FRAME_ABOVE_CONTAINER(iLocal_6138, iLocal_5326[0]))
							{
								if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Container_Lifter", 0))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Container_Attach", iLocal_6138, "CONTAINER_LIFTER_SOUNDS", 0, 0);
								}
								VEHICLE::_0x6A98C2ECF57FA5D4(iLocal_6138, iLocal_5326[0]);
								if (!func_403("PICKED UP A CONTAINER"))
								{
									func_400("PICKED UP A CONTAINER", 1);
								}
								func_400("Container_Release_audio", 0);
							}
						}
					}
					if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
						{
							if (VEHICLE::_IS_HANDLER_FRAME_ABOVE_CONTAINER(iLocal_6138, iLocal_5326[1]))
							{
								if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Container_Lifter", 0))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Container_Attach", iLocal_6138, "CONTAINER_LIFTER_SOUNDS", 0, 0);
								}
								VEHICLE::_0x6A98C2ECF57FA5D4(iLocal_6138, iLocal_5326[1]);
								if (!func_403("PICKED UP A CONTAINER"))
								{
									func_400("PICKED UP A CONTAINER", 1);
								}
								func_400("Container_Release_audio", 0);
							}
						}
					}
				}
			}
		}
	}
	else if (GlobalFunc_74("HD_HELP1B"))
	{
		HUD::CLEAR_HELP(1);
	}
}


void func_578(var uParam0, int iParam1, bool bParam2)//Position - 0x6B1B7
{
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				*uParam0 = HUD::ADD_BLIP_FOR_ENTITY(*iParam1);
				HUD::SET_BLIP_AS_FRIENDLY(*uParam0, iParam2);
			}
		}
	}
}

void func_579()//Position - 0x6B1F2
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6138))
	{
		func_399(&iLocal_6138, joaat("handler"), -129.77f, -2418.28f, 6.24f, 183.085f, -1, 1f, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6138, 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_6138, 0);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_6138, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_6138, 1);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_6138, 0);
	}
	if (iLocal_5209 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_6134))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_6134, -89.28268f, -2481.734f, 1.273084f, -91.874f, -2485.462f, 10.77087f, 2.25f, 0, 1, 0))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_START");
				AUDIO::START_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER");
				iLocal_5209 = 1;
			}
		}
	}
	if (iLocal_6034 > 6 && iLocal_6034 < 12)
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -127.4011f, -2416.404f, 4.500676f, -127.3519f, -2418.019f, 7.250676f, 1.75f, 0, 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		else if (iLocal_6034 < 10)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
		}
	}
	if (iLocal_6034 > 0 && iLocal_6034 < 7)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
	}
	func_504();
	func_570();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
	{
		if (!PED::IS_PED_INJURED(iLocal_6135))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_6135))
			{
				PED::DELETE_PED(&iLocal_6135);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_wade"));
			}
		}
	}
	if (!iLocal_5129)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6138))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_6139[1], 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_6138, 3);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6138, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_6139[1], 0);
				iLocal_5129 = 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_6134))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_6134))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
		}
	}
	if (iLocal_6034 > 4 && iLocal_6034 < 7)
	{
		func_584();
	}
	if (iLocal_6034 > 2)
	{
		if (iLocal_5125 == 0)
		{
			if (GlobalFunc_663("AW_FLOW_FLO", 0, 0))
			{
				if (GlobalFunc_588(&iLocal_5068, 5000))
				{
					HUD::CLEAR_PRINTS();
					iLocal_5125 = 1;
				}
			}
		}
	}
	if (iLocal_6034 < 7)
	{
		STREAMING::REQUEST_CLIP_SET("ANIM_GROUP_GESTURE_MISS_DocksSetup1");
		if (STREAMING::HAS_ANIM_SET_LOADED("ANIM_GROUP_GESTURE_MISS_DocksSetup1"))
		{
			PED::SET_PED_GESTURE_GROUP(PLAYER::PLAYER_PED_ID(), "ANIM_GROUP_GESTURE_MISS_DocksSetup1");
			if (!PED::IS_PED_INJURED(iLocal_6134))
			{
				PED::SET_PED_GESTURE_GROUP(iLocal_6134, "ANIM_GROUP_GESTURE_MISS_DocksSetup1");
			}
		}
	}
	switch (iLocal_6034)
	{
		case 0:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (!PED::IS_PED_INJURED(iLocal_6134))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_6134, 15f, 15f, 15f, 0, 1, 0))
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.8f);
				}
			}
			if (func_473())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6137, 0);
				}
				func_583(&uLocal_377, &iLocal_6134, 1);
				TASK::REQUEST_WAYPOINT_RECORDING("floyddocks1");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks3");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks6");
				iLocal_5821[7] = 1;
				iLocal_5821[11] = 1;
				iLocal_5821[3] = 1;
				iLocal_5821[6] = 1;
				iLocal_5245 = 0;
				iLocal_5122 = 0;
				iLocal_5121 = 0;
				iLocal_5129 = 0;
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1b");
				TASK::REQUEST_WAYPOINT_RECORDING("floyddocks1");
				STREAMING::REQUEST_IPL("pcranecont");
				iLocal_5067 = 3;
				func_409(3, "Follow Floyd", 0, 0, 0, 1);
				iLocal_5373 = 0;
				GlobalFunc_7632(1);
				iLocal_5074 = MISC::GET_GAME_TIMER();
				iLocal_5221[6] = 0;
				iLocal_5221[5] = 0;
				bLocal_5249 = false;
				iLocal_5209 = 0;
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
				TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_469();
				}
				iLocal_5094 = 0;
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_FOLLOW_FLOYD_START"))
				{
					AUDIO::START_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_START");
				}
				iLocal_6034++;
			}
			break;
		
		case 1:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (!PED::IS_PED_INJURED(iLocal_6134))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_6134, 15f, 15f, 15f, 0, 1, 0))
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.8f);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_6134))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_6134, 6f, 6f, 6f, 0, 1, 0))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks6"))
					{
						if (iLocal_5124 == 0)
						{
							if (!GlobalFunc_663("AW_FLOW_FLO", 0, 0))
							{
								GlobalFunc_4935();
								GlobalFunc_164("AW_FLOW_FLO", 7500, 1);
							}
							iLocal_5124 = 1;
						}
						PED::REMOVE_PED_FROM_GROUP(iLocal_6134);
						iLocal_5068 = MISC::GET_GAME_TIMER();
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_4@main_action");
						func_405(1);
						iLocal_6034++;
					}
				}
				else if (iLocal_5124 == 0)
				{
					iLocal_5068 = MISC::GET_GAME_TIMER();
					if (!GlobalFunc_663("AW_FLOW_FLO", 0, 0))
					{
						GlobalFunc_4935();
						GlobalFunc_164("AW_FLOW_FLO", 7500, 1);
					}
					iLocal_5124 = 1;
				}
			}
			break;
		
		case 2:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_4@main_action"))
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("floyddocks1"))
				{
					TASK::CLEAR_PED_TASKS(iLocal_6134);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "floyddocks1", 0, 8, -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_6134, uLocal_6175);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_6175);
					iLocal_5162 = 1;
					if (!PED::IS_PED_INJURED(iLocal_6134))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_6134, 0);
					iLocal_6034++;
				}
			}
			break;
		
		case 3:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_6134))
			{
				iLocal_6034++;
			}
			break;
		
		case 4:
			if (func_468(13))
			{
				iLocal_6034++;
			}
			break;
		
		case 5:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("floyddocks1") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks3"))
			{
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("floyddocks1"))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_6134);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_6134, 0);
						iLocal_5821[8] = 1;
						iLocal_6034++;
					}
				}
			}
			else
			{
				TASK::REQUEST_WAYPOINT_RECORDING("floyddocks1");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks3");
			}
			break;
		
		case 6:
			if (iLocal_5821[11] == 0)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -102.1558f, -2475.921f, 5.0203f, 3f, 3f, 3f, 0, 1, 0))
				{
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@main_action");
					iLocal_5821[11] = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_6134))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -121.87f, -2425.34f, 6f, 5f, 5f, 5f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_6134, -121.87f, -2425.34f, 6f, 5f, 5f, 5f, 0, 1, 0))
				{
					iLocal_5245 = 0;
					GlobalFunc_4935();
					func_582();
					if (!PED::IS_PED_INJURED(Local_5673[0 /*16*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -123.5851f, -2422.352f, 5.0013f, 1f, 20000, 0.25f, 8192, 1193033728);
						TASK::TASK_LOOK_AT_ENTITY(0, Local_5673[0 /*16*/], 6000, 2048, 2);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_6134, uLocal_6175);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_6175);
					}
					HUD::CLEAR_PRINTS();
					iLocal_6034++;
				}
				else if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -121.87f, -2425.34f, 6f, 10f, 10f, 10f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_6134, -121.87f, -2425.34f, 6f, 5f, 5f, 5f, 0, 1, 0)) && !GlobalFunc_111())
				{
					GlobalFunc_4935();
					func_582();
					if (!PED::IS_PED_INJURED(Local_5673[0 /*16*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -123.5851f, -2422.352f, 5.0013f, 1f, 20000, 0.25f, 8192, 1193033728);
						TASK::TASK_LOOK_AT_ENTITY(0, Local_5673[0 /*16*/], 6000, 0, 2);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_6134, uLocal_6175);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_6175);
					}
					HUD::CLEAR_PRINTS();
					iLocal_6034++;
				}
				else if (!func_403("ANIMATEFLOYD"))
				{
					STREAMING::REQUEST_ANIM_DICT("MissHeistDocksSetup1");
					if (!STREAMING::HAS_ANIM_DICT_LOADED("MissHeistDocksSetup1"))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_6134, -121.87f, -2425.34f, 6f, 5f, 5f, 5f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -121.87f, -2425.34f, 6f, 5f, 5f, 5f, 0, 1, 0))
						{
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_6175);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							TASK::TASK_PLAY_ANIM(0, "MissHeistDocksSetup1", "Beckon", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
							TASK::TASK_PLAY_ANIM(0, "amb@dockworker@stand@idle_a", "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_6134, uLocal_6175);
							func_400("ANIMATEFLOYD", 1);
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -121.87f, -2425.34f, 6f, 5f, 5f, 5f, 0, 1, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_6134);
				}
			}
			break;
		
		case 7:
			STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@main_action");
			STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@start_idle");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@main_action") && STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@start_idle"))
			{
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					if (!PED::IS_PED_INJURED(Local_5673[0 /*16*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_6134, 6000, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_9@main_action", "forklift_supervise_mainaction_supervisor", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_9@start_idle", "forklift_supervise_idlea_supervisor", 8f, -8f, -1, 262145, 0f, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
						TASK::TASK_PERFORM_SEQUENCE(Local_5673[0 /*16*/], uLocal_6175);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_6175);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_5673[0 /*16*/], 16);
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_9@main_action");
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_9@start_idle");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_6139[1]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_6139[1], 0))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_6139[1]))
						{
							VEHICLE::DELETE_VEHICLE(&(uLocal_6139[1]));
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[12]))
				{
					if (!PED::IS_PED_INJURED(iLocal_6111[12]))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_6111[12]))
						{
							PED::DELETE_PED(&(iLocal_6111[12]));
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_6138, 1);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6138, 0);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_377))
				{
					HUD::REMOVE_BLIP(&uLocal_377);
				}
				STREAMING::REMOVE_ANIM_SET("ANIM_GROUP_GESTURE_MISS_DocksSetup1");
				TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), 1);
				iLocal_6034++;
			}
			break;
		
		case 8:
			if (!func_403("DS1_05e"))
			{
				if (func_473())
				{
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_05e", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(2f, 10f, 4);
						func_400("DS1_05e", 1);
					}
				}
			}
			else
			{
				iLocal_7366 = MISC::GET_GAME_TIMER();
				iLocal_6034++;
			}
			break;
		
		case 9:
			if (GlobalFunc_588(&iLocal_7366, 2000))
			{
				if (!func_403("TASK FLOYD"))
				{
					PED::SET_PED_STEERS_AROUND_VEHICLES(iLocal_6134, 0);
					if (!PED::IS_PED_INJURED(iLocal_6134))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, -127.37f, -2417.29f, 5.54f, 1f, 20000, 88.64f, 1056964608);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_6134, uLocal_6175);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_6175);
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_14");
						func_400("TASK FLOYD", 1);
					}
				}
				else if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
						{
							if (func_580(iLocal_6134, -127.37f, -2417.29f, 5.94f, 97.5f, 0.2f, 0.2f, 2f, 1135869952, 0))
							{
								uLocal_5367 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5367, "missheistdockssetup1ig_14", "floyd_climb_up", 8f, -8f, 1, 16, 8f, 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6134, iLocal_6138, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5367, iLocal_6138, -1);
								PED::SET_PED_STEERS_AROUND_VEHICLES(iLocal_6134, 0);
								iLocal_6034++;
							}
						}
					}
				}
			}
			break;
		
		case 10:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5367))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5367) > 0.5f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_6138, 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6138, 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
					{
						func_578(&uLocal_378, &iLocal_6138, 1);
					}
					iLocal_6034++;
				}
			}
			break;
		
		case 11:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5367))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5367) >= 1f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_6138, 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
					{
						func_578(&uLocal_378, &iLocal_6138, 1);
					}
					if (func_732())
					{
						GlobalFunc_703(&uLocal_377);
						func_292();
						func_291();
					}
				}
			}
			break;
	}
}

int func_580(int iParam0, struct<3> Param1, float fParam4, struct<3> Param5, float fParam8, int iParam9)//Position - 0x6BEC1
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam9 == 0)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, Param5, 0, 1, 0) && GlobalFunc_2786(iParam0, fParam4, fParam8))
				{
					return 1;
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -2017877118) != 1)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, Param5, 0, 1, 0) && GlobalFunc_2786(iParam0, fParam4, fParam8))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_582()//Position - 0x6BFEA
{
	if (!PED::IS_PED_INJURED(iLocal_6134))
	{
		TASK::CLEAR_PED_TASKS(iLocal_6134);
		PED::CLEAR_PED_ALTERNATE_WALK_ANIM(iLocal_6134, -1056964608);
		PED::CLEAR_PED_ALTERNATE_WALK_ANIM(PLAYER::PLAYER_PED_ID(), -1056964608);
	}
	if (iLocal_5821[12] == 1)
	{
		iLocal_5821[12] = 0;
	}
	if (iLocal_5821[1] == 1)
	{
		iLocal_5821[1] = 0;
	}
	if (iLocal_5821[2] == 1)
	{
		iLocal_5821[2] = 0;
	}
	if (iLocal_5821[3] == 1)
	{
		iLocal_5821[3] = 0;
	}
	if (iLocal_5821[5] == 1)
	{
		iLocal_5821[5] = 0;
	}
	if (iLocal_5821[7] == 1)
	{
		iLocal_5821[7] = 0;
	}
	if (iLocal_5821[4] == 1)
	{
		iLocal_5821[4] = 0;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5385)
	{
		func_734(&(Local_5385[iLocal_6035 /*8*/]), 1, 0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5574)
	{
		func_733(&(Local_5574[iLocal_6035 /*16*/]), 1, 0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5640)
	{
		func_733(&(Local_5640[iLocal_6035 /*16*/]), 1, 0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5772)
	{
		func_733(&(Local_5772[iLocal_6035 /*16*/]), 1, 0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5493)
	{
		func_733(&(Local_5493[iLocal_6035 /*16*/]), 1, 0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5707)
	{
		func_733(&(Local_5707[iLocal_6035 /*16*/]), 1, 0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5460)
	{
		func_733(&(Local_5460[iLocal_6035 /*16*/]), 1, 0);
		iLocal_6035++;
	}
	STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
	STREAMING::REMOVE_ANIM_DICT("missdocksshowoffcar@idle_a");
	STREAMING::REMOVE_ANIM_DICT("missdocksshowoffcar@idle_b");
	STREAMING::REMOVE_ANIM_DICT("missdocksshowoffcar@base");
	STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@main_action");
	STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_14");
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6138, 0);
	}
}

void func_583(var uParam0, int iParam1, bool bParam2)//Position - 0x6C1E4
{
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				*uParam0 = GlobalFunc_6783(*iParam1, !bParam2, 0);
			}
		}
	}
}

void func_584()//Position - 0x6C21A
{
	struct<6> Var0;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	
	if (!PED::IS_PED_INJURED(iLocal_6134))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_6134, 0);
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1.2f || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
		}
		if (ENTITY::GET_ENTITY_SPEED(iLocal_6134) < 0.1f)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_6134);
		}
		if (MISC::GET_GAME_TIMER() <= iLocal_5074 + 1500)
		{
		}
		if (MISC::GET_GAME_TIMER() <= iLocal_5074 + 1000)
		{
		}
		if (iLocal_5138)
		{
			fLocal_5139 = (fLocal_5139 + (0.014f * SYSTEM::TIMESTEP()));
			if (fLocal_5139 > 1.08f)
			{
				fLocal_5139 = 1.08f;
			}
		}
		if (!iLocal_5135)
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_6134, 7f, 7f, 4f, 0, 1, 0))
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_8");
				STREAMING::REQUEST_ANIM_DICT("MissHeistDocksSetup1");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_8") && STREAMING::HAS_ANIM_DICT_LOADED("MissHeistDocksSetup1"))
				{
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_6175);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					iLocal_7362 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
					if (iLocal_7362 == 0)
					{
						TASK::TASK_PLAY_ANIM(0, "MissHeistDocksSetup1", "Beckon", 8f, -8f, -1, 0, 0, 0, 0, 0);
					}
					else if (iLocal_7362 == 1)
					{
						TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_8", "are_you_coming", 8f, -8f, -1, 0, 0, 0, 0, 0);
					}
					else if (iLocal_7362 == 2)
					{
						TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_8", "Are_You_Gonna_Hurt", 8f, -8f, -1, 0, 0, 0, 0, 0);
					}
					else if (iLocal_7362 == 3)
					{
						TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_8", "its_over_here_if", 8f, -8f, -1, 0, 0, 0, 0, 0);
					}
					else if (iLocal_7362 == 4)
					{
						TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_8", "this_dont_make_me", 8f, -8f, -1, 0, 0, 0, 0, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_6134, uLocal_6175);
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_6134);
					TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					iLocal_5136 = 0;
					iLocal_5137 = 0;
					iLocal_5162 = 0;
					iLocal_5135 = 1;
				}
			}
			else
			{
				func_593();
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_6134, 7f, 3.2f, 4f, 0, 1, 0))
				{
					iLocal_5138 = 1;
				}
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_6134, 1) < 1f)
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.91f);
				}
				else
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.94f);
				}
				if (iLocal_5140)
				{
					if (func_591())
					{
						iLocal_5140 = 0;
						iLocal_5162 = 1;
					}
				}
				if (iLocal_5162 == 1)
				{
					if (GlobalFunc_111())
					{
						Var0 = { GlobalFunc_2209() };
						if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_05a_1"))
						{
							iLocal_5098 = 0;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_05a_3"))
						{
							iLocal_5098 = 1;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_05b_1"))
						{
							iLocal_5098 = 2;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_05b_13"))
						{
							iLocal_5098 = 3;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_05b_11"))
						{
							iLocal_5098 = 4;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_06_1"))
						{
							iLocal_5098 = 5;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_06_8"))
						{
							iLocal_5098 = 6;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_06_12"))
						{
							iLocal_5098 = 7;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_06_15"))
						{
							iLocal_5098 = 8;
						}
						if (iLocal_5098 >= 0)
						{
							if (!iLocal_5141[iLocal_5098])
							{
								switch (iLocal_5098)
								{
									case 0:
										sVar6 = "you_ever_get_helicopters_trevor";
										sVar7 = "you_ever_get_helicopters_floyd";
										sVar8 = "missheistdockssetup1ig_2_p2";
										break;
									
									case 1:
										sVar6 = "now_this_is_restricted_trevor";
										sVar7 = "now_this_is_restricted_floyd";
										sVar8 = "missheistdockssetup1ig_2_p2";
										break;
									
									case 2:
										sVar6 = "how_is_a_man_trevor";
										sVar7 = "how_is_a_man_floyd";
										sVar8 = "missheistdockssetup1ig_2_p3";
										break;
									
									case 3:
										sVar6 = "i_just_said_they_trevor";
										sVar7 = "i_just_said_they_floyd";
										sVar8 = "missheistdockssetup1ig_2_p3";
										break;
									
									case 4:
										sVar6 = "maybe_ill_have_to_trevor";
										sVar7 = "maybe_ill_have_to_floyd";
										sVar8 = "missheistdockssetup1ig_2_p3";
										break;
									
									case 5:
										sVar6 = "thats_the_freighter_i_trevor";
										sVar7 = "thats_the_freighter_i_floyd";
										sVar8 = "missheistdockssetup1ig_7";
										break;
									
									case 6:
										sVar6 = "but_these_are_marked_trevor";
										sVar7 = "but_these_are_marked_floyd";
										sVar8 = "missheistdockssetup1ig_7";
										break;
									
									case 7:
										sVar6 = "the_government_stuff_is_floyd";
										sVar7 = "the_government_stuff_is_trevor";
										sVar8 = "missheistdockssetup1ig_7";
										break;
									
									case 8:
										sVar6 = "you_are_beginning_to_trevor";
										sVar7 = "you_are_beginning_to_floyd";
										sVar8 = "missheistdockssetup1ig_7";
										break;
								}
								if (bLocal_5212)
								{
									TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sVar8, sVar6, 8f, -8f, -1, 114736, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(iLocal_6134, sVar8, sVar7, 8f, -8f, -1, 114736, 0, 0, 0, 0);
								}
								iLocal_5141[iLocal_5098] = 1;
								STREAMING::REMOVE_ANIM_DICT(sVar8);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!iLocal_5136)
			{
				func_587();
				iLocal_5136 = 1;
			}
			if (!iLocal_5137)
			{
				if (iLocal_6034 > 5)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_5073)
					{
						if (!GlobalFunc_620())
						{
							GlobalFunc_619(1);
						}
						else if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_6134) || !AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_5653(iLocal_6134, "DH1_CAAA", "FLOYD", 9);
							iLocal_5137 = 1;
							iLocal_5073 = MISC::GET_GAME_TIMER() + 10000;
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_6134, 3.2f, 3.2f, 4f, 0, 1, 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_6134, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_6134, -1, 0, 2);
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
					HUD::CLEAR_PRINTS();
				}
				else
				{
					func_585();
					iLocal_5136 = 0;
					iLocal_5162 = 1;
					iLocal_5135 = 0;
				}
			}
		}
	}
}

void func_585()//Position - 0x6C7BE
{
	if (!PED::IS_PED_INJURED(iLocal_6134))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_6134, "floyddocks1", 0, 40, -1);
	}
}


void func_587()//Position - 0x6C7FA
{
	struct<6> Var0;
	
	if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		iLocal_5140 = 1;
		Local_5101 = { Var0 };
		Local_5107 = { GlobalFunc_514() };
		GlobalFunc_5105();
	}
}




int func_591()//Position - 0x6C941
{
	if (iLocal_5140)
	{
		if (!GlobalFunc_111())
		{
			GlobalFunc_10626(&Local_47, "D1AUD", &Local_5101, &Local_5107, 8, 0, 0);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}


void func_593()//Position - 0x6C9CD
{
	if (!PED::IS_PED_INJURED(iLocal_6134))
	{
		if (!func_403("FLOYD SEEN BOAT"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_6134, -101.6586f, -2472.183f, 4.021717f, -98.12972f, -2474.699f, 8.271718f, 2.25f, 0, 1, 0))
			{
				func_400("FLOYD SEEN BOAT", 1);
			}
		}
		switch (iLocal_5373)
		{
			case 0:
				if (!GlobalFunc_111())
				{
					if (func_473())
					{
						if (!GlobalFunc_5172(&Local_6997, 1))
						{
							if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_04", 8, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(2f, 10f, 4);
								iLocal_5373++;
							}
						}
					}
				}
				break;
			
			case 1:
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_05a", 8, 0, 0, 0))
					{
						iLocal_5373++;
					}
				}
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					if (!func_403("DS1_05b"))
					{
						if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_05b", 8, 0, 0, 0))
						{
							func_400("DS1_05b", 1);
						}
					}
					else
					{
						iLocal_5373 = 4;
					}
				}
				break;
			
			case 3:
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_05c", 8, 0, 0, 0))
					{
						iLocal_5373++;
					}
				}
				break;
			
			case 4:
				if (func_403("FLOYD SEEN BOAT"))
				{
					if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("CREAK_V1", 0))
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER"))
						{
							AUDIO::START_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER");
						}
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_06", 8, 0, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "CREAK_01", -212.592f, -2375.617f, 16.3326f, "DOCKS_HEIST_SETUP_SOUNDS", 0, 0, 0);
								iLocal_5373++;
							}
						}
					}
				}
				break;
			
			case 5:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5352) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5353)) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5354))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_04b", 8, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(Local_5411[0 /*16*/]))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_6134, Local_5411[0 /*16*/], 5000, 2048, 4);
							}
							iLocal_5373++;
						}
					}
				}
				break;
			}
	}
}

void func_594()//Position - 0x6CC20
{
	if (!func_403("DS1_02b"))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -39.35932f, -2382.809f, 4.25079f, -130.7467f, -2514.06f, 14.20469f, 83f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -291.8988f, -2400.596f, 4.250148f, -124.8526f, -2449.263f, 7.767045f, 144f, 0, 1, 0))
		{
			if (GlobalFunc_745())
			{
				if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_02b", 7, 0, 0, 0))
				{
					iLocal_7361 = MISC::GET_GAME_TIMER();
					func_400("DS1_02b", 1);
				}
			}
			else if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 7, 0, 0, 0))
			{
				iLocal_7361 = MISC::GET_GAME_TIMER();
				func_400("DS1_38", 1);
			}
		}
	}
	else if (GlobalFunc_588(&iLocal_7361, MISC::GET_RANDOM_INT_IN_RANGE(12000, 22000)))
	{
		func_400("DS1_02b", 0);
	}
	if (iLocal_6034 > 2)
	{
		if (GlobalFunc_588(&iLocal_7360, 4000))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6137, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, 0);
				}
			}
		}
	}
	func_596();
	func_504();
	if (iLocal_6034 > 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
		{
			if (!PED::IS_PED_INJURED(iLocal_6135))
			{
				if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("ig_wade"), ENTITY::GET_ENTITY_COORDS(iLocal_6135, 1), 1) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_6135))
				{
					PED::DELETE_PED(&iLocal_6135);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_wade"));
				}
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, 0))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misslsdhs", "reaction_from_truck_fds", 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "misslsdhs", "reaction_from_truck_fds", -1056964608);
			}
		}
	}
	if (iLocal_6034 > 1)
	{
		GlobalFunc_7632(1);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.5f);
		if (!func_403("DH_1_FOLLOW_FLOYD_START"))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_DRIVE_APPROACH_DOCKS"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_1_DRIVE_APPROACH_DOCKS");
			}
			else
			{
				AUDIO::START_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_START");
				func_400("DH_1_FOLLOW_FLOYD_START", 1);
			}
		}
	}
	switch (iLocal_6034)
	{
		case 0:
			if (func_473())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_469();
					if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_6134) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_6135))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_5075 = 0;
				}
				func_409(2, "Park up", 0, 0, 0, 1);
				iLocal_5821[5] = 1;
				iLocal_5821[12] = 1;
				iLocal_5821[4] = 1;
				iLocal_5821[3] = 1;
				iLocal_5067 = 2;
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
				STREAMING::REQUEST_IPL("pcranecont");
				Global_24677 = 0;
				OBJECT::_DOOR_CONTROL(joaat("p_cut_door_02"), -63.19f, -2519.27f, 7.79f, 1, 0f, 0f, 0f);
				bLocal_5249 = false;
				func_405(1);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
				if (iLocal_5167 == 0)
				{
					STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
					STREAMING::REQUEST_ANIM_DICT("misslsdhs");
					if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a") && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs"))
					{
						if (!PED::IS_PED_INJURED(iLocal_6136))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
							TASK::TASK_PLAY_ANIM(0, "misslsdhs", "wave_truck", 2f, -4f, -1, 262144, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "misslsdhs", "reaction_to_truck", 8f, -4f, -1, 262144, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", "idle_a", 8f, -4f, -1, 262144, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_6136, uLocal_6175);
							iLocal_5167 = 1;
						}
					}
				}
				iLocal_6034++;
			}
			break;
		
		case 1:
			if (func_499(&Local_6997, Local_6794, 0.001f, 0.001f, 2f, 1, iLocal_6134, iLocal_6135, 0, iLocal_6137, "AW_GO_PARK", "AW_DONT_LEAVE_T", "AW_DONT_LEAVE_W", "", "AW_PICK_UP_B", "AW_DOCK1", "AW_GETBACK_IN", 0, 0, 1, -1))
			{
				iLocal_5821[1] = 1;
				iLocal_5122 = 0;
				iLocal_5121 = 0;
				GlobalFunc_4935();
				HUD::REMOVE_BLIP(&(Local_6997.f_5));
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@start_idle");
				iLocal_7360 = MISC::GET_GAME_TIMER();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
				iLocal_6034++;
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_6997.f_5))
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -70.13792f, -2523.794f, 4.010104f, -56.48965f, -2533.662f, 9.010103f, 7.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -60.26057f, -2528.605f, 4.010104f, -55.28746f, -2531.859f, 9.010103f, 11.5f, 0, 1, 0)) && GlobalFunc_552(1, 1, 1))
					{
						if (GlobalFunc_530(iLocal_6137, 5f, -1, 1056964608, 0, 1))
						{
							iLocal_5821[1] = 1;
							iLocal_5122 = 0;
							iLocal_5121 = 0;
							GlobalFunc_4935();
							HUD::REMOVE_BLIP(&(Local_6997.f_5));
							STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@start_idle");
							iLocal_7360 = MISC::GET_GAME_TIMER();
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
							iLocal_6034++;
						}
					}
				}
				if (iLocal_5128 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1.572346f, -2541.402f, 4.841759f, 14.9989f, -2521.36f, 6.507655f, 2.25f, 0, 1, 0) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						if (!PED::IS_PED_INJURED(iLocal_6134))
						{
							TASK::CLEAR_PED_TASKS(iLocal_6134);
						}
						if (!PED::IS_PED_INJURED(iLocal_6135))
						{
							TASK::CLEAR_PED_TASKS(iLocal_6135);
						}
						iLocal_5128 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@start_idle");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_2_p1@start_idle"))
				{
					if (func_473())
					{
						OBJECT::_DOOR_CONTROL(joaat("p_cut_door_02"), -63.19f, -2519.27f, 7.79f, 0, 0f, 0f, 0f);
						if (GlobalFunc_663("AW_GO_PARK", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						GlobalFunc_5105();
						if (!PED::IS_PED_INJURED(iLocal_6135))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_6135, 226, 1);
						}
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 173, 1);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6137, 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_6135))
						{
							if (!PED::IS_PED_INJURED(iLocal_6134))
							{
								PED::REMOVE_PED_FROM_GROUP(iLocal_6134);
								PED::SET_PED_CAN_RAGDOLL(iLocal_6134, 0);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 1000, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_6135, 3000, 0, 2);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
								{
									if (!func_595(iLocal_6137, 238.3604f, 60f))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -62.05f, -2524.82f, 6.01f, 1f, 20000, 0.1f, 1, 1193033728);
									}
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_5841[1 /*3*/], 1f, 20000, 0.1f, 512, fLocal_5881[1]);
								TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_2_p1@start_idle", "supervisor_exitdoor_startidle_floyd", 8f, -8f, -1, 262145, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_6134, uLocal_6175);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_6175);
							}
							if (!PED::IS_PED_INJURED(iLocal_6135))
							{
								PED::REMOVE_PED_FROM_GROUP(iLocal_6135);
								PED::SET_PED_CAN_RAGDOLL(iLocal_6135, 0);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_6134, 3000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -58.3f, -2525.55f, 6.16f, 1f, 20000, 0.1f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_5895[1 /*3*/], 1f, 20000, 0.1f, 512, fLocal_5935[1]);
								TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_2_p1@start_idle", "supervisor_exitdoor_startidle_wade", 8f, -8f, -1, 262145, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_6135, uLocal_6175);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_6175);
							}
						}
						func_583(&uLocal_377, &iLocal_6134, 1);
						if (!PED::IS_PED_INJURED(iLocal_6134))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_6134, -1, 0, 2);
						}
						iLocal_5080 = MISC::GET_GAME_TIMER();
						iLocal_6034++;
					}
				}
			}
			break;
		
		case 3:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
			}
			if (!func_403("DS1_02a"))
			{
				if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_02a", 7, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(2f, 7f, 4);
					func_400("DS1_02a", 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_6134) && !PED::IS_PED_INJURED(iLocal_6135))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_6134, iLocal_6137, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_6135, iLocal_6137, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_6135))
						{
							PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_6135, 16);
						}
						if (!PED::IS_PED_INJURED(iLocal_6134))
						{
							PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_6134, 16);
						}
						iLocal_5122 = 0;
						iLocal_5121 = 0;
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 173, 0);
						iLocal_6034++;
					}
				}
			}
			break;
		
		case 4:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			if (GlobalFunc_588(&iLocal_5080, 4000))
			{
				if (!PED::IS_PED_INJURED(iLocal_6135))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_6135, 1f);
				}
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_6134, 1f);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
			if (Local_5394[0 /*16*/].f_4 > 3)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6137, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, 0);
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_6134, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
				if (!PED::IS_PED_INJURED(iLocal_6135))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_6135, 226, 0);
				}
				STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_2_p1@start_idle");
				OBJECT::_DOOR_CONTROL(joaat("p_cut_door_02"), -63.19f, -2519.27f, 7.79f, 1, 0f, 0f, 0f);
				iLocal_5821[7] = 1;
				iLocal_5821[11] = 1;
				iLocal_5821[6] = 1;
				iLocal_5121 = 0;
				iLocal_5125 = 0;
				iLocal_5122 = 0;
				iLocal_6034++;
			}
			break;
		
		case 5:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6137, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, 0);
				}
				else if (func_732())
				{
					func_292();
					iLocal_7196 = 4;
				}
			}
			break;
	}
}

int func_595(int iParam0, float fParam1, float fParam2)//Position - 0x6D674
{
	float fVar0;
	float fVar1;
	
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (fVar0 > fVar1)
		{
			if (ENTITY::GET_ENTITY_HEADING(iParam0) < fVar0 && ENTITY::GET_ENTITY_HEADING(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (ENTITY::GET_ENTITY_HEADING(iParam0) < fVar0 || ENTITY::GET_ENTITY_HEADING(iParam0) > fVar1)
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

void func_596()//Position - 0x6D715
{
	switch (iLocal_5075)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_6136))
			{
				STREAMING::REQUEST_ANIM_DICT("misslsdhs");
				STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
				iLocal_5075++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_6136))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a") && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs"))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_6136, 242628503) != 1)
					{
						iLocal_5076 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_6136))
			{
				if (GlobalFunc_588(&iLocal_5076, 1000))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_6136, "misslsdhsclipboard@idle_a", "idle_a", 3))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 6.580805f, -2543.855f, 5.050115f, 19.95751f, -2525.048f, 6.009008f, 20f, 0, 1, 0))
						{
							STREAMING::REQUEST_ANIM_DICT("misslsdhs");
							STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
							if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs") && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a"))
							{
								if (!PED::IS_PED_INJURED(iLocal_6136))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_PLAY_ANIM(0, "misslsdhs", "reaction_to_truck", 8f, -4f, -1, 262144, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, "misslsdhs", "wave_truck", 8f, -4f, -1, 262144, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", "idle_a", 8f, -4f, -1, 262145, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_6136, uLocal_6175);
									iLocal_5075++;
								}
							}
						}
					}
					else
					{
						STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
						if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a"))
						{
							if (!PED::IS_PED_INJURED(iLocal_6136))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
								TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", "idle_a", 8f, -4f, -1, 262145, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_6136, uLocal_6175);
								iLocal_5075++;
							}
						}
					}
				}
			}
			break;
	}
}


void func_598()//Position - 0x6D94E
{
	func_504();
	func_606();
	switch (iLocal_6034)
	{
		case 0:
			if ((func_473() && func_358(6, Local_6183, fLocal_6081)) && func_358(7, Local_6186, fLocal_6082))
			{
				GlobalFunc_2224(1);
				iLocal_5121 = 0;
				iLocal_5067 = 0;
				GlobalFunc_8316(0, 1, 1, 0);
				bLocal_5249 = false;
				func_604();
				iLocal_5167 = 0;
				iLocal_5121 = 0;
				iLocal_5122 = 0;
				SYSTEM::SETTIMERA(0);
				Global_24677 = 1;
				OBJECT::_DOOR_CONTROL(joaat("p_cut_door_02"), -63.19f, -2519.27f, 7.79f, 1, 0f, 0f, 0f);
				RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (!func_403("TOD SWITCH"))
					{
						CLOCK::SET_CLOCK_TIME(6, 0, 0);
						func_400("TOD SWITCH", 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1156.523f, -1523.552f, 3.3044f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 306.1213f);
							}
							else
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1156.886f, -1524.194f, 3.2833f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 313.4019f);
								PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 100, 0, 1, 0);
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_6134))
						{
							if (!GlobalFunc_1533(iLocal_6134, iLocal_6137, 0))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_6134, iLocal_6137, 0);
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_6135))
						{
							if (!GlobalFunc_1533(iLocal_6135, iLocal_6137, 1))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_6135, iLocal_6137, 1);
							}
						}
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					if (GlobalFunc_2202(3))
					{
						GlobalFunc_2798(3);
					}
				}
				iLocal_6034 = 99;
			}
			break;
		
		case 99:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_469();
			}
			GlobalFunc_7621(145, 1, 0, 1, 0);
			GlobalFunc_7621(146, 0, 0, 1, 0);
			PED::ADD_SCENARIO_BLOCKING_AREA(18.38092f, -2524.46f, 10.00037f, 10.18092f, -2534.46f, 4.800374f, 0, 1, 1, 1);
			MISC::CLEAR_AREA(Local_6785, 40f, 1, 0, 0, 0);
			GlobalFunc_583(1, PLAYER::PLAYER_PED_ID(), 0);
			OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(Global_34036[1 /*31*/], 0);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[1 /*31*/], 0f, 1, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[1 /*31*/], 1, 1, 0);
			func_405(1);
			GlobalFunc_2224(0);
			iLocal_5256 = 0;
			iLocal_6034 = 1;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (!func_403("DH_1_DRIVE_START"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, 0))
					{
						AUDIO::START_AUDIO_SCENE("DH_1_DRIVE_START");
						func_400("DH_1_DRIVE_START", 1);
					}
				}
			}
			else if (!func_403("DH_1_DRIVE_APPROACH_DOCKS"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 352.8846f, -2391.758f, 8.183699f, 351.2024f, -2238.529f, 12.79882f, 29f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 369.153f, -2225.73f, 9.336354f, 342.8319f, -2223.623f, 27.36833f, 86.5f, 0, 1, 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_DRIVE_START"))
					{
						AUDIO::STOP_AUDIO_SCENE("DH_1_DRIVE_START");
					}
					else
					{
						AUDIO::START_AUDIO_SCENE("DH_1_DRIVE_APPROACH_DOCKS");
						func_400("DH_1_DRIVE_APPROACH_DOCKS", 1);
					}
				}
			}
			if (!func_403("TURN OFF RAGDOLL"))
			{
				if (!PED::IS_PED_INJURED(iLocal_6135))
				{
					if (GlobalFunc_1533(iLocal_6135, iLocal_6137, 1))
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_6135, 0);
						PED::SET_PED_CAN_RAGDOLL(iLocal_6135, 1);
						func_400("TURN OFF RAGDOLL", 1);
					}
				}
			}
			if (func_499(&Local_6997, Local_6785, 0.1f, 0.1f, 2f, 1, iLocal_6134, iLocal_6135, 0, iLocal_6137, "AW_GO_DOCKS", "AW_DONT_LEAVE_T", "AW_DONT_LEAVE_W", "", "AW_PICK_UP_B", "AW_YTREVTRU", "AW_GETBACK_IN", 0, 1, 1, -1))
			{
				RECORDING::_0x293220DA1B46CEBC(10f, 10f, 4);
				iLocal_5122 = 0;
				iLocal_5256 = 0;
				GlobalFunc_4935();
				iLocal_6034++;
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_6997.f_5))
				{
					if (func_403("DS1_01b"))
					{
						func_400("DS1_01b", 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_6134))
					{
						PED::SET_PED_CAN_RAGDOLL(iLocal_6134, 1);
					}
					if (!PED::IS_PED_INJURED(iLocal_6135))
					{
						PED::SET_PED_CAN_RAGDOLL(iLocal_6135, 1);
					}
					if (GlobalFunc_663("AW_YTREVTRU", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (!GlobalFunc_5172(&Local_6997, 1))
					{
						if (iLocal_5256 == 0)
						{
							if (func_473())
							{
								if (GlobalFunc_7066() == 0)
								{
									if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_01", 7, 0, 0, 0))
									{
										iLocal_5256 = 1;
									}
								}
								else if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_01", 7, 0, 0, 0))
								{
									iLocal_5256 = 1;
								}
							}
						}
					}
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 11.94329f, -2544.413f, 4.79992f, 23.73103f, -2528.029f, 8.649944f, 22.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 11.94329f, -2544.413f, 4.79992f, 23.73103f, -2528.029f, 8.649944f, 22.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 10.62807f, -2533.845f, 7.54014f, 32.96722f, -2550.335f, 19.50006f, 16f, 0, 1, 0))
					{
						if (iLocal_5167 == 0)
						{
							STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
							if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a"))
							{
								if (!PED::IS_PED_INJURED(iLocal_6136))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_PLAY_ANIM(0, "misslsdhs", "reaction_to_truck", 8f, -8f, -1, 262144, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, "misslsdhs", "wave_truck", 8f, -8f, -1, 262144, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", "idle_a", 8f, -8f, -1, 262145, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_6136, uLocal_6175);
									iLocal_5167 = 1;
								}
							}
						}
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_6137, 11f, 1, 0);
						iLocal_5122 = 0;
						STREAMING::REQUEST_IPL("Talklaugh_Pipe");
						GlobalFunc_5652(&Local_6997, 1, 0);
						GlobalFunc_5105();
						iLocal_6034++;
					}
				}
				else
				{
					if (!func_403("DS1_01b"))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (!GlobalFunc_5172(&Local_6997, 1))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_01b", 7, 0, 0, 0))
									{
										func_400("DS1_01b", 1);
									}
								}
							}
						}
					}
					if (!func_403("DS1_00"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_6997))
						{
							if (!GlobalFunc_5172(&Local_6997, 1))
							{
								if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_00", 7, 0, 0, 0))
								{
									func_400("DS1_00", 1);
								}
							}
						}
					}
				}
				if (iLocal_5256 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_6997.f_5))
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
							HUD::CLEAR_PRINTS();
						}
					}
					else if (GlobalFunc_111())
					{
						if (!GlobalFunc_620())
						{
							GlobalFunc_619(1);
							HUD::CLEAR_PRINTS();
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_403("DS1_02"))
			{
				if (func_473())
				{
					GlobalFunc_5105();
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_02", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(2f, 10f, 4);
							func_400("DS1_02", 1);
						}
					}
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, 0))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misslsdhs", "reaction_from_truck_fds", 3))
						{
							TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "misslsdhs", "reaction_from_truck_fds", -1056964608);
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
					TASK::TASK_PLAY_ANIM(0, "misslsdhs", "reaction_from_truck_fps", 4f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_6134, uLocal_6175);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
					TASK::TASK_PLAY_ANIM(0, "misslsdhs", "reaction_from_truck_fds", 4f, -4f, -1, 48, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_6175);
				}
				iLocal_5821[5] = 1;
				iLocal_5821[4] = 1;
				iLocal_5821[12] = 1;
				STREAMING::REMOVE_ANIM_DICT("misslsdhs");
				STREAMING::REMOVE_ANIM_DICT("misslsdhsclipboard@idle_a");
				STREAMING::REMOVE_ANIM_DICT("misslsdhsclipboard@base");
				Global_24677 = 0;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				iLocal_6034++;
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, 0))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misslsdhs", "reaction_from_truck_fds", 3))
					{
						TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "misslsdhs", "reaction_from_truck_fds", -1056964608);
					}
				}
			}
			if (func_732())
			{
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_6134);
				}
				if (!PED::IS_PED_INJURED(iLocal_6135))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_6135);
				}
				func_292();
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
				func_291();
			}
			break;
	}
}






void func_604()//Position - 0x6E310
{
	Local_7249.f_24 = { 0f, 0f, 18f };
	Local_6189[0 /*3*/] = { -104.07f, -2374.69f, 8.3191f };
	fLocal_6040[0] = 93.83f;
	Local_6235[0 /*13*/][0 /*3*/] = { -104.07f, -2374.69f, 8.3191f };
	Local_6235[0 /*13*/][1 /*3*/] = { -147.4f, -2378.3f, 8.3191f };
	Local_6235[0 /*13*/][2 /*3*/] = { -104.07f, -2374.69f, 8.3191f };
	Local_6235[0 /*13*/][3 /*3*/] = { -147.4f, -2378.3f, 8.3191f };
	Local_6189[1 /*3*/] = { -212.235f, -2377.446f, 16.3326f };
	fLocal_6040[1] = 94.3986f;
	Local_6235[1 /*13*/][0 /*3*/] = { -212.235f, -2377.446f, 16.3326f };
	Local_6235[1 /*13*/][1 /*3*/] = { -231.7264f, -2377.594f, 16.3319f };
	Local_6235[1 /*13*/][2 /*3*/] = { -232.1804f, -2374.66f, 16.3308f };
	Local_6235[1 /*13*/][3 /*3*/] = { -231.7264f, -2377.594f, 16.3319f };
	Local_6189[2 /*3*/] = { -248.9245f, -2376.209f, 8.3191f };
	fLocal_6040[2] = 274.0258f;
	Local_6235[2 /*13*/][0 /*3*/] = { -248.9245f, -2376.209f, 8.3191f };
	Local_6235[2 /*13*/][1 /*3*/] = { -209.7266f, -2378.254f, 8.3191f };
	Local_6235[2 /*13*/][2 /*3*/] = { -186.3949f, -2377.668f, 8.3191f };
	Local_6235[2 /*13*/][3 /*3*/] = { -163.5379f, -2378.049f, 8.3191f };
	Local_6189[3 /*3*/] = { -123.4885f, -2352.826f, 8.3191f };
	fLocal_6040[3] = 3.7757f;
	Local_6235[3 /*13*/][0 /*3*/] = { -151.35f, -2408.006f, 5.0005f };
	Local_6235[3 /*13*/][1 /*3*/] = { -102.0827f, -2408.034f, 5.0005f };
	Local_6235[3 /*13*/][2 /*3*/] = { -102.24f, -2423.97f, 5.0005f };
	Local_6235[3 /*13*/][3 /*3*/] = { -61.0789f, -2423.813f, 5.0012f };
	Local_6189[4 /*3*/] = { 483.6f, -3119.91f, 5.0696f };
	fLocal_6040[4] = -11.93f;
	Local_6189[5 /*3*/] = { 484.6697f, -3110.707f, 5.2948f };
	fLocal_6040[5] = 1.5744f;
	Local_6189[6 /*3*/] = { 482.53f, -3119.3f, 6.07f };
	fLocal_6040[6] = 44.12f;
	Local_6189[7 /*3*/] = { -124.56f, -2371.68f, 9.32f };
	fLocal_6040[7] = -75.45f;
	Local_6189[8 /*3*/] = { 482.53f, -3119.3f, 6.07f };
	fLocal_6040[8] = 44.12f;
	Local_6431[0 /*3*/] = { -151.35f, -2408.006f, 5.0005f };
	fLocal_6056[0] = 268.7411f;
	Local_6498[0 /*13*/][0 /*3*/] = { -151.35f, -2408.006f, 5.0005f };
	Local_6498[0 /*13*/][1 /*3*/] = { -102.0827f, -2408.034f, 5.0005f };
	Local_6498[0 /*13*/][2 /*3*/] = { -102.24f, -2423.97f, 5.0005f };
	Local_6498[0 /*13*/][3 /*3*/] = { -61.0789f, -2423.813f, 5.0012f };
	Local_6431[1 /*3*/] = { -43.6959f, -2520.378f, 6.3988f };
	fLocal_6056[1] = 321.2447f;
	Local_6431[2 /*3*/] = { -176.3674f, -2408.158f, 5.0007f };
	fLocal_6056[2] = 271.7324f;
	Local_6431[3 /*3*/] = { -62.19f, -2539.51f, 6.01f };
	fLocal_6056[3] = -157.31f;
	Local_6431[4 /*3*/] = { -56.7946f, -2448.853f, 6.2398f };
	fLocal_6056[4] = 66.4825f;
	Local_6431[5 /*3*/] = { 14.2126f, -2507.898f, 5.0067f };
	fLocal_6056[5] = 102.6f;
	Local_6431[6 /*3*/] = { -121.86f, -2451.69f, 5.02f };
	fLocal_6056[6] = -5.8f;
	Local_6431[7 /*3*/] = { -133.5132f, -2450.706f, 5.0167f };
	fLocal_6056[7] = 321.2153f;
	Local_6431[8 /*3*/] = { -104.743f, -2496.965f, 5.0058f };
	fLocal_6056[8] = 319.1118f;
	Local_6431[9 /*3*/] = { -124.0598f, -2479.051f, 5.0196f };
	fLocal_6056[9] = 329.9548f;
	Local_6431[10 /*3*/] = { -72.4153f, -2485.434f, 5.0334f };
	fLocal_6056[10] = 52.6711f;
	Local_6498[10 /*13*/][0 /*3*/] = { -72.4153f, -2485.434f, 5.0334f };
	Local_6498[10 /*13*/][1 /*3*/] = { -96.9927f, -2468.286f, 5.0208f };
	Local_6498[10 /*13*/][2 /*3*/] = { -88.6509f, -2456.401f, 5.0196f };
	Local_6498[10 /*13*/][3 /*3*/] = { -135.2554f, -2449.306f, 5.017f };
	Local_6431[11 /*3*/] = { -115.3376f, -2517.028f, 5.0005f };
	fLocal_6056[11] = 245.6216f;
	Local_6431[12 /*3*/] = { -106.1724f, -2464.829f, 5.0208f };
	fLocal_6056[12] = 125.7997f;
	Local_6431[13 /*3*/] = { -98.68f, -2467.15f, 6.02f };
	fLocal_6056[13] = -7.74f;
	Local_6431[14 /*3*/] = { -67.21f, -2437.73f, 7.25f };
	fLocal_6056[14] = 81.13f;
	Local_6431[15 /*3*/] = { 481.98f, -3052.5f, 6.23f };
	fLocal_6056[15] = -0.95f;
	Local_6431[16 /*3*/] = { 489.35f, -3050.57f, 6.12f };
	fLocal_6056[16] = 346.3188f;
	Local_6431[17 /*3*/] = { 488.6217f, -3050.333f, 5.1097f };
	fLocal_6056[17] = 2.1321f;
	Local_6431[18 /*3*/] = { 479.67f, -3049.37f, 5.1097f };
	fLocal_6056[18] = 2.1321f;
	Local_6431[19 /*3*/] = { -227.7128f, -2426.82f, 5.1497f };
	fLocal_6056[19] = 327.6013f;
	Local_6431[20 /*3*/] = { 463.81f, -3040.37f, 6.07f };
	fLocal_6056[20] = 327.6013f;
	Local_6431[21 /*3*/] = { 493.09f, -3047.2f, 6.11f };
	fLocal_6056[21] = 135.22f;
	Local_6797[0 /*3*/] = { -104.8244f, -2513.374f, 4.5183f };
	fLocal_6084[0] = 56.5885f;
	Local_6797[1 /*3*/] = { -104.7854f, -2465.955f, 5.0208f };
	fLocal_6084[1] = 235.9101f;
	Local_6797[2 /*3*/] = { -69.5243f, -2505.926f, 5.0075f };
	fLocal_6084[2] = 324.8585f;
	Local_6797[3 /*3*/] = { -39.19f, -2449.159f, 5.0043f };
	fLocal_6084[3] = 144.4548f;
	Local_5411[0 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5411[1 /*16*/].f_2 = joaat("s_m_y_blackops_01");
	Local_5411[2 /*16*/].f_2 = joaat("s_m_y_blackops_01");
	Local_5411[0 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_5411[0 /*16*/].f_10 = 0f;
	Local_5411[1 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_5411[1 /*16*/].f_10 = 0f;
	Local_5411[2 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_5411[2 /*16*/].f_10 = 0f;
	Local_5394[0 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5394[0 /*16*/].f_7 = { -62.229f, -2518.568f, 6.4002f };
	Local_5394[0 /*16*/].f_10 = 143.9633f;
	Local_5673[0 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5673[0 /*16*/].f_7 = { -122.25f, -2419.58f, 6f };
	Local_5673[0 /*16*/].f_10 = 179.2108f;
	Local_5690[0 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5690[0 /*16*/].f_7 = { -96.715f, -2455.282f, 5.0189f };
	Local_5690[0 /*16*/].f_10 = 225.5408f;
	Local_5640[0 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5640[0 /*16*/].f_7 = { -110.41f, -2481.24f, 6.02f };
	Local_5640[0 /*16*/].f_10 = -109.52f;
	Local_5640[1 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5640[1 /*16*/].f_7 = { -108.83f, -2482.12f, 6.02f };
	Local_5640[1 /*16*/].f_10 = -88.92f;
	Local_5707[0 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5707[1 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5707[2 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5707[3 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5707[0 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_5707[1 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_5707[2 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_5707[3 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_5707[0 /*16*/].f_10 = 143.9633f;
	Local_5707[1 /*16*/].f_10 = 143.9633f;
	Local_5707[2 /*16*/].f_10 = 143.9633f;
	Local_5707[3 /*16*/].f_10 = 143.9633f;
	Local_5460[0 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5460[1 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5460[0 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_5460[1 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_5460[0 /*16*/].f_10 = 143.9633f;
	Local_5460[1 /*16*/].f_10 = 143.9633f;
	Local_5623[0 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5623[0 /*16*/].f_7 = { -107.9554f, -2465.78f, 7.8185f };
	Local_5623[0 /*16*/].f_10 = 331.6483f;
	Local_5493[0 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5493[1 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5493[2 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5493[3 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5493[4 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5385[0 /*8*/].f_1 = joaat("buffalo");
	Local_5385[0 /*8*/].f_4 = { -109.5377f, -2519.489f, 5f };
	Local_5385[0 /*8*/].f_7 = 51.6828f;
	Local_5493[0 /*16*/].f_7 = { -105.6039f, -2520.684f, 5f };
	Local_5493[0 /*16*/].f_10 = 10f;
	Local_5493[1 /*16*/].f_7 = { -107.4489f, -2523.355f, 5f };
	Local_5493[1 /*16*/].f_10 = 22f;
	Local_5493[2 /*16*/].f_7 = { -111.844f, -2520.272f, 5f };
	Local_5493[2 /*16*/].f_10 = 55f;
	Local_5493[3 /*16*/].f_7 = { -110.1655f, -2516.717f, 5f };
	Local_5493[3 /*16*/].f_10 = 43f;
	Local_5493[4 /*16*/].f_7 = { -114.7683f, -2516.28f, 5.0999f };
	Local_5493[4 /*16*/].f_10 = 84f;
	Local_5574[0 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5574[1 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5574[2 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5574[0 /*16*/].f_7 = { -77.0331f, -2527.087f, 5.0101f };
	Local_5574[1 /*16*/].f_7 = { -75.1044f, -2529.473f, 5.0101f };
	Local_5574[2 /*16*/].f_7 = { -73.6988f, -2529.595f, 5.0101f };
	Local_5574[0 /*16*/].f_10 = 20f;
	Local_5574[1 /*16*/].f_10 = 60f;
	Local_5574[2 /*16*/].f_10 = 266f;
	Local_5772[0 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5772[1 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5772[2 /*16*/].f_2 = joaat("s_m_m_dockwork_01");
	Local_5574[0 /*16*/].f_12 = { -68.32f, -2531.518f, 5.06f };
	Local_5574[0 /*16*/].f_15 = 3.64f;
	Local_5574[1 /*16*/].f_12 = { -68.32f, -2531.518f, 5.06f };
	Local_5574[1 /*16*/].f_15 = 3.64f;
	Local_5574[2 /*16*/].f_12 = { -68.32f, -2531.518f, 5.06f };
	Local_5574[2 /*16*/].f_15 = 3.64f;
	Local_5707[0 /*16*/].f_12 = { -115.7235f, -2477.598f, 22.2266f };
	Local_5707[1 /*16*/].f_12 = { -117.2564f, -2479.737f, 22.2266f };
	Local_5707[2 /*16*/].f_12 = { -114.1917f, -2475.431f, 22.2266f };
	Local_5707[3 /*16*/].f_12 = { -117.7939f, -2480.589f, 22.2266f };
	Local_5963 = { -60.173f, -2525.329f, 4.925f };
	Local_5963.f_3 = { 0f, 0f, 59.25f };
	Local_6026 = { -88.341f, -2502.575f, 5.011f };
	Local_6026.f_3 = { 0f, 0f, -32.844f };
	Local_5991 = { -68.929f, -2530.365f, 5.126f };
	Local_5991.f_3 = { 0f, 0f, 46f };
	Local_6019 = { -110.715f, -2429.089f, 5.001f };
	Local_6019.f_3 = { 0f, 0f, 91f };
	Local_6005 = { -131.496f, -2423.041f, 5f };
	Local_6026.f_3 = { 0f, 0f, 63.72f };
	Local_5970 = { -116.113f, -2475.791f, 22.206f };
	Local_5970.f_3 = { 0f, 0f, 145.52f };
	Local_5977 = { -29.053f, -2481.937f, 22.205f };
	Local_5977.f_3 = { 0f, 0f, 147.28f };
	Local_5998 = { -108.066f, -2464.675f, 5.02f };
	Local_5998.f_3 = { 0f, 0f, 55f };
	Local_5394[0 /*16*/].f_12 = { -62.11877f, -2519.221f, 7.414408f };
	Local_5394[0 /*16*/].f_15 = -170.75f;
	Local_5841[2 /*3*/] = { -76.45f, -2508.3f, 6.01f };
	fLocal_5881[2] = -38.15f;
}


void func_606()//Position - 0x6F163
{
	if (!func_403("CREATE DOCKS SECURITY"))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_6785, 1) < 100f)
		{
			func_468(8);
			STREAMING::REQUEST_ANIM_DICT("misslsdhs");
			STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
			STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@base");
			STREAMING::REQUEST_MODEL(joaat("p_cs_clipboard"));
			STREAMING::REQUEST_MODEL(joaat("prop_pencil_01"));
			if ((((STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs") && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@base")) && STREAMING::HAS_MODEL_LOADED(joaat("p_cs_clipboard"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pencil_01")))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6153[0]))
					{
						uLocal_6153[0] = OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), Local_6785, 1, 1, 0);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6164[0]))
					{
						uLocal_6164[0] = OBJECT::CREATE_OBJECT(joaat("prop_pencil_01"), Local_6785, 1, 1, 0);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_6136))
					{
						if (!PED::IS_PED_INJURED(iLocal_6136))
						{
							PED::CLEAR_ALL_PED_PROPS(iLocal_6136);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_6164[0], iLocal_6136, PED::GET_PED_BONE_INDEX(iLocal_6136, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_6153[0], iLocal_6136, PED::GET_PED_BONE_INDEX(iLocal_6136, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_6153[0], iLocal_6136, 1);
							TASK::TASK_PLAY_ANIM(iLocal_6136, "misslsdhsclipboard@base", "base", 1000f, -1000f, -1, 262145, 0, 0, 0, 0);
							GlobalFunc_173(&Local_47, 1, iLocal_6136, "GATEGUARD", 0, 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_6136, 16);
							PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_6136, 0);
							func_400("CREATE DOCKS SECURITY", 1);
						}
					}
				}
			}
		}
	}
}

void func_607()//Position - 0x6F328
{
	int iVar0;
	int iVar1;
	
	iLocal_5257 = 1;
	func_700();
	if (GlobalFunc_8315() != 2)
	{
		func_628(2, 1);
	}
	if (iLocal_5060 == 0)
	{
		if (iLocal_5058)
		{
			GlobalFunc_2781(500);
			iLocal_5058 = 0;
		}
		else if (iLocal_5057 == 0)
		{
			iLocal_5257 = 1;
			if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
				iLocal_6134 = Global_86864.f_9[0];
			}
			if (!PED::IS_PED_INJURED(Global_86864.f_9[1]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[1], 1, 1);
				iLocal_6135 = Global_86864.f_9[1];
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5059, 0))
			{
			}
			if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				while (!func_358(6, Local_6183, fLocal_6081) || !func_358(7, Local_6186, fLocal_6082))
				{
					SYSTEM::WAIT(0);
				}
			}
			STREAMING::REQUEST_MODEL(GlobalFunc_4931(2, 1));
			CUTSCENE::REQUEST_CUTSCENE("LSDH_INT", 8);
			GlobalFunc_5128(2);
			iLocal_5168 = 0;
			iLocal_5057++;
		}
		else if (iLocal_5057 == 1)
		{
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) || CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), 0);
				}
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					if (!PED::IS_PED_INJURED(iLocal_6134))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Floyd", iLocal_6134, 0);
					}
				}
				else if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Floyd", iLocal_6134, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_6135))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Wade", iLocal_6135, 0);
				}
				iLocal_5057++;
			}
		}
		else if (iLocal_5057 == 2)
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				else
				{
					SYSTEM::WAIT(0);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_6135))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_6135, "Wade", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_6134, "Floyd", 0, 0, 0);
				}
				GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				GlobalFunc_562(71);
				GlobalFunc_8316(1, 1, 1, 0);
				iLocal_7355 = 0;
				iLocal_5056 = 0;
				iLocal_5060 = 1;
			}
		}
	}
	if (iLocal_5060 == 1)
	{
		if (!iLocal_5056)
		{
			if (GlobalFunc_1080())
			{
			}
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (iLocal_5168 == 0)
			{
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					GlobalFunc_2781(500);
				}
				iLocal_5059 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				GlobalFunc_2224(1);
				GlobalFunc_8365(1187f, -1398f, 4.3f, 10f, 0);
				GlobalFunc_7695(7);
				GlobalFunc_9805(-1167.187f, -1506.044f, 2.992951f, -1146.531f, -1533.76f, 6.597246f, 9f, -1187.182f, -1491.174f, 3.3797f, 304.3311f, 5f, 5f, 3f, 1, 1, 1, 0, 0);
				MISC::CLEAR_AREA(-1154.612f, -1520.07f, 3.3456f, 200f, 1, 0, 0, 0);
				GlobalFunc_6791(2, 0);
				CAM::STOP_GAMEPLAY_HINT(1);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
				iLocal_5168 = 1;
			}
			if (!func_403("TOD SWITCH"))
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 111300)
				{
					CLOCK::SET_CLOCK_TIME(6, 0, 0);
					func_469();
					func_400("TOD SWITCH", 1);
				}
			}
		}
		if (iLocal_5168 == 1)
		{
			func_358(5, -1155.02f, -1522.81f, 3.3397f, 38.4f);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
			{
				iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					iLocal_6135 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
			{
				iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Floyd_Wades_Cousin", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					iLocal_6134 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
				}
			}
			if (!func_403("LSDH_INT CAMERA EXIT"))
			{
			}
			if (!func_403("LSDH_INT TREVOR EXIT"))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						func_469();
					}
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, -1, -1, 1f, 1048576, 0);
					}
					func_400("LSDH_INT TREVOR EXIT", 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Floyd", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
				{
					if (!PED::IS_PED_INJURED(iLocal_6134))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 0, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 1, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 2, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 3, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 4, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 5, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 6, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 7, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 9, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 10, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6134, 11, 0, 0, 0);
						}
						PED::FORCE_PED_MOTION_STATE(iLocal_6134, -668482597, 1, 1, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Wade", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
				{
					if (!PED::IS_PED_INJURED(iLocal_6135))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 0, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 1, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 2, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 3, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 4, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 5, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 6, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 7, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 8, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 9, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 10, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6135, 11, 0, 0, 0);
						}
						PED::FORCE_PED_MOTION_STATE(iLocal_6135, -668482597, 1, 1, 0);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_5168 == 1)
			{
				iLocal_5060 = 2;
			}
		}
	}
	if (iLocal_5060 == 2)
	{
		if (iLocal_5056)
		{
			RECORDING::_0x13B350B8AD0EEE10();
			CUTSCENE::STOP_CUTSCENE(0);
			if (!CAM::IS_SCREEN_FADING_OUT() || !CAM::IS_SCREEN_FADED_OUT())
			{
				GlobalFunc_2787(500);
			}
			if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			while ((!func_358(6, Local_6183, fLocal_6081) || !func_358(7, Local_6186, fLocal_6082)) || !func_358(5, -1155.02f, -1522.81f, 3.3397f, 38.4f))
			{
				SYSTEM::WAIT(0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_6137, -1))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, -1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_6134))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_6137, 0))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_6134, Local_6183, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_6134, fLocal_6081);
						PED::SET_PED_INTO_VEHICLE(iLocal_6134, iLocal_6137, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_6135))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_6137, 1))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_6135, Local_6183, 1, 0, 0, 1);
						PED::SET_PED_INTO_VEHICLE(iLocal_6135, iLocal_6137, 1);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
				{
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_6137))
			{
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_6137, 0, 0);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_6137, 1);
			}
		}
		RECORDING::_0x81CBAE94390F9F89();
		GlobalFunc_657();
		GlobalFunc_8316(0, 1, 1, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_5057 = 0;
		iLocal_7196 = 2;
		iLocal_5060 = 0;
		GlobalFunc_695(0);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		iLocal_5257 = 0;
	}
	if (iLocal_5060 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(0);
		iLocal_5056 = 1;
		iLocal_5060 = 1;
	}
}





















int func_628(int iParam0, bool bParam1)//Position - 0x71EB6
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
		func_698(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_671(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_631(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_631(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x7206E
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
	
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
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
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = GlobalFunc_8315();
		if (!uParam0->f_23)
		{
			func_665(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		func_665((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
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
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, 0);
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
		uParam0->f_5 = GlobalFunc_237(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = GlobalFunc_237(iVar2);
		uParam0->f_7 = 4;
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
		func_637(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}






void func_637(int iParam0)//Position - 0x7269D
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_30787[(38 / 32)]), (38 % 32));
			func_638(38, 0);
			MISC::SET_BIT(&(Global_30787[(41 / 32)]), (41 % 32));
			func_638(41, 0);
			MISC::SET_BIT(&(Global_30787[(43 / 32)]), (43 % 32));
			func_638(43, 0);
			MISC::SET_BIT(&(Global_30787[(42 / 32)]), (42 % 32));
			func_638(42, 0);
			MISC::SET_BIT(&(Global_30787[(44 / 32)]), (44 % 32));
			func_638(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_638(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_638(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_30787[(53 / 32)]), (53 % 32));
			func_638(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_30787[(81 / 32)]), (81 % 32));
			func_638(81, 0);
			MISC::SET_BIT(&(Global_30787[(82 / 32)]), (82 % 32));
			func_638(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_30787[(47 / 32)]), (47 % 32));
			func_638(47, 0);
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_638(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_638(50, 0);
			break;
	}
}

void func_638(int iParam0, int iParam1)//Position - 0x7282D
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
			func_640(iParam0);
			if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				GlobalFunc_510(iParam0);
			}
		}
	}
}


void func_640(int iParam0)//Position - 0x72974
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
		func_645(iParam0, &Var0);
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
			iVar9 = GlobalFunc_8990(iParam0);
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





void func_645(int iParam0, var uParam1)//Position - 0x731A0
{
	var uVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(uParam1->f_4, 2))
	{
		return;
	}
	uVar0 = GlobalFunc_7732();
	iVar1 = GlobalFunc_483(uVar0);
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




















void func_665(int iParam0, bool bParam1)//Position - 0x7788D
{
	GlobalFunc_8565(iParam0);
	GlobalFunc_7700(iParam0, bParam1);
	GlobalFunc_7713(iParam0);
	GlobalFunc_7705(iParam0);
	GlobalFunc_7712(iParam0);
	GlobalFunc_7711(iParam0);
	GlobalFunc_7710(iParam0);
}






int func_671(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x77B6A
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
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			GlobalFunc_8564(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_690(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_8016(*iParam0);
			func_673(*iParam0, bParam8);
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


int func_673(int iParam0, bool bParam1)//Position - 0x77C82
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_677(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_677(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10984(iParam0, 3, 169))
					{
						func_244(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 6))
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 17))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 20))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 21))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 22))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 11))
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 10))
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 50))
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 14, 59))
			{
				func_244(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10984(iParam0, 8, 22))
			{
				func_244(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 14))
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10984(iParam0, 12, 13))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 14))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 15))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 4))
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 3))
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 14, 82))
			{
				func_244(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10984(iParam0, 8, 76))
			{
				func_244(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 1))
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10984(iParam0, 12, 12))
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 15))
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10984(iParam0, 3, 71))
				{
					func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 17))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 18))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 19))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 7))
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 6))
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 14, 88))
			{
				func_244(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10984(iParam0, 8, 17))
			{
				func_244(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 11))
			{
				func_244(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_677(int iParam0, int iParam1)//Position - 0x783D3
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
				iVar1 = GlobalFunc_11101(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_10(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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













void func_690(int iParam0)//Position - 0x792CC
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
		func_10(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11101(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11194(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11101(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11101(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11101(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_10(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








int func_698(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x79CDA
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
				func_690(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_8016(*iParam0);
				func_673(*iParam0, bParam6);
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


void func_700()//Position - 0x79DBA
{
	switch (iLocal_7355)
	{
		case 0:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_7356))
				{
					iLocal_7357 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Trevor", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_7357))
					{
						iLocal_7356 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_7357);
					}
				}
				else
				{
					iLocal_7355++;
				}
			}
			break;
		
		case 1:
			iLocal_7359 = PED::GET_PED_DRAWABLE_VARIATION(iLocal_7356, 4);
			iLocal_7358 = PED::GET_PED_TEXTURE_VARIATION(iLocal_7356, 4);
			PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_7356, 4, 25, 0);
			iLocal_7355++;
			break;
		
		case 2:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 54435)
			{
				if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_7356))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_7356, 4, 25, 0, 0);
					PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_7356, 4, iLocal_7359, iLocal_7358);
					iLocal_7355++;
				}
			}
			break;
		
		case 3:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 76453)
			{
				if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_7356))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_7356, 4, iLocal_7359, iLocal_7358, 0);
					iLocal_7355++;
				}
			}
			break;
	}
}

void func_701()//Position - 0x79EBA
{
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(38.31939f, -3161.031f, 509.7758f) - Vector(43f, 240f, 87.25f), Vector(38.31939f, -3161.031f, 509.7758f) + Vector(43f, 240f, 87.25f), 0, 1, 1, 1);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-107f, -2415.304f, 5.381f, 16.4f, 15.3f, 1.6f, -1.619f, 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-53.081f, -2415.703f, 5.119f, 16.4f, 15.3f, 1.6f, 1.584f, 0, 7);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(8.000994f, -2415.801f, -73.98793f) - Vector(3.25f, 8f, 43.25f), Vector(8.000994f, -2415.801f, -73.98793f) + Vector(3.25f, 8f, 43.25f), 0, 1, 1, 1);
	GlobalFunc_9132(1);
	GlobalFunc_695(0);
	HUD::REQUEST_ADDITIONAL_TEXT("DOCKH1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_601(23, 1);
	func_719(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_464);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_465);
	PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_464);
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_465);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_464, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_464);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_465, iLocal_464);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_465, iLocal_465);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_465, iLocal_465);
	PED::SET_GROUP_SEPARATION_RANGE(GlobalFunc_468(), 150f);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.4f);
	GlobalFunc_563(1);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("forklift"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("biff"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GlobalFunc_4946(24), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GlobalFunc_4946(32), 1);
	iLocal_5213 = GlobalFunc_5101(2);
	func_473();
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (GlobalFunc_Get_Mission_Fail_Checkpoint() > 0 && GlobalFunc_Get_Mission_Fail_Checkpoint() < 11)
		{
			iLocal_5072 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (Global_84544 == 1)
			{
				iLocal_5072++;
				if (iLocal_5072 < 11)
				{
					if (iLocal_5072 == 1)
					{
						GlobalFunc_5116(24.4835f, -2536.458f, 5.041f, 55.2078f, 1, 0);
						iLocal_7196 = 3;
					}
					else if (iLocal_5072 == 2)
					{
						GlobalFunc_5116(24.4835f, -2536.458f, 5.041f, 55.2078f, 1, 0);
						iLocal_7196 = 3;
					}
					else if (iLocal_5072 == 3)
					{
						GlobalFunc_5116(-61.5066f, -2525.512f, 5.0101f, 56.9516f, 1, 0);
						iLocal_7196 = 4;
					}
					else if (iLocal_5072 == 4)
					{
						GlobalFunc_5116(-125.5439f, -2421.881f, 5.0005f, 49.08f, 1, 0);
						iLocal_7196 = 5;
					}
					else if (iLocal_5072 == 5)
					{
						GlobalFunc_5116(-88.8838f, -2451.568f, 5.0175f, 317.2729f, 1, 0);
						iLocal_7196 = 6;
					}
					else if (iLocal_5072 == 6)
					{
						GlobalFunc_5116(-50.2985f, -2403.904f, 5.0003f, 191.216f, 1, 0);
						iLocal_7196 = 7;
					}
					else if (iLocal_5072 == 7)
					{
						GlobalFunc_5116(-114.5969f, -2406.811f, 22.2282f, 359.8527f, 1, 0);
						iLocal_7196 = 8;
					}
					else if (iLocal_5072 == 8)
					{
						GlobalFunc_5116(-120.9023f, -2411.269f, 5.0007f, 195.5543f, 1, 0);
						iLocal_7196 = 9;
					}
					else if (iLocal_5072 == 9)
					{
						GlobalFunc_5116(479.0352f, -3050.491f, 5.0937f, 0.7722f, 1, 0);
						iLocal_7196 = 10;
					}
					else if (iLocal_5072 == 10)
					{
						iLocal_7196 = 11;
						GlobalFunc_5116(-1153.431f, -1517.17f, 9.6327f, 126.3936f, 1, 0);
						iLocal_7196 = 11;
					}
					else if (iLocal_5072 == 11)
					{
						iLocal_7196 = 11;
						GlobalFunc_5116(-1153.431f, -1517.17f, 9.6327f, 126.3936f, 1, 0);
						iLocal_7196 = 11;
					}
				}
				else
				{
					CAM::DO_SCREEN_FADE_IN(250);
					iLocal_7196 = 11;
				}
			}
			else if (iLocal_5072 == 0)
			{
				GlobalFunc_5116(-1156.409f, -1523.928f, 3.2957f, 323.2638f, 1, 0);
				iLocal_7196 = 2;
			}
			else if (iLocal_5072 == 2)
			{
				GlobalFunc_5116(24.4835f, -2536.458f, 5.041f, 55.2078f, 1, 0);
				iLocal_7196 = 3;
			}
			else if (iLocal_5072 == 3)
			{
				GlobalFunc_5116(-61.5066f, -2525.512f, 5.0101f, 56.9516f, 1, 0);
				iLocal_7196 = 4;
			}
			else if (iLocal_5072 == 4)
			{
				GlobalFunc_5116(-125.5439f, -2421.881f, 5.0005f, 49.08f, 1, 0);
				iLocal_7196 = 5;
			}
			else if (iLocal_5072 == 5)
			{
				GlobalFunc_5116(-88.8838f, -2451.568f, 5.0175f, 317.2729f, 1, 0);
				iLocal_7196 = 6;
			}
			else if (iLocal_5072 == 6)
			{
				GlobalFunc_5116(-50.2985f, -2403.904f, 5.0003f, 191.216f, 1, 0);
				iLocal_7196 = 7;
			}
			else if (iLocal_5072 == 7)
			{
				GlobalFunc_5116(-114.5969f, -2406.811f, 22.2282f, 359.8527f, 1, 0);
				iLocal_7196 = 8;
			}
			else if (iLocal_5072 == 8)
			{
				GlobalFunc_5116(-120.9023f, -2411.269f, 5.0007f, 195.5543f, 1, 0);
				iLocal_7196 = 9;
			}
			else if (iLocal_5072 == 9)
			{
				GlobalFunc_5116(479.0352f, -3050.491f, 5.0937f, 0.7722f, 1, 0);
				iLocal_7196 = 10;
			}
		}
		else if (iLocal_5072 == 0)
		{
			if (Global_84544 == 1)
			{
				iLocal_7196 = 3;
			}
			else
			{
				iLocal_7196 = 2;
			}
		}
		else
		{
			iLocal_7196 = 1;
		}
	}
	else
	{
		iLocal_7196 = 1;
	}
	if (iLocal_7196 != 1)
	{
		while (!iLocal_5115)
		{
			SYSTEM::WAIT(0);
			func_702(iLocal_7196);
		}
	}
	iLocal_5115 = 0;
}

void func_702(int iParam0)//Position - 0x7A497
{
	int iVar0;
	
	if (!iLocal_5114)
	{
		if (iLocal_5255 == 1)
		{
			GlobalFunc_2787(500);
		}
		if (GlobalFunc_116(0))
		{
			GlobalFunc_6685(0);
		}
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
		GlobalFunc_601(23, 1);
		func_749(1, 0);
		HUD::CLEAR_PRINTS();
		if (iParam0 != 1)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
		}
		PED::ADD_SCENARIO_BLOCKING_AREA(18.38092f, -2524.46f, 10.00037f, 10.18092f, -2534.46f, 4.800374f, 0, 1, 1, 1);
		PED::ADD_SCENARIO_BLOCKING_AREA(Vector(38.31939f, -3161.031f, 509.7758f) - Vector(43f, 240f, 87.25f), Vector(38.31939f, -3161.031f, 509.7758f) + Vector(43f, 240f, 87.25f), 0, 1, 1, 1);
		PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1712.584f, 3304.912f, 41.96f, 13f, 13.6f, 3.7f, 15.578f, 0, 7);
		PED::ADD_SCENARIO_BLOCKING_AREA(18.38092f, -2524.46f, 10.00037f, 10.18092f, -2534.46f, 4.800374f, 0, 1, 1, 1);
		PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-107f, -2415.304f, 5.381f, 16.4f, 15.3f, 1.6f, -1.619f, 0, 7);
		PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-53.081f, -2415.703f, 5.119f, 16.4f, 15.3f, 1.6f, 1.584f, 0, 7);
		PED::ADD_SCENARIO_BLOCKING_AREA(Vector(8.000994f, -2415.801f, -73.98793f) - Vector(3.25f, 8f, 43.25f), Vector(8.000994f, -2415.801f, -73.98793f) + Vector(3.25f, 8f, 43.25f), 0, 1, 1, 1);
		MISC::CLEAR_AREA(Local_6177, 1000f, 1, 1, 0, 0);
		MISC::CLEAR_AREA(Local_6785, 1000f, 1, 1, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		iLocal_5169[0] = 0;
		iLocal_5169[1] = 0;
		iLocal_5169[2] = 0;
		iLocal_6033 = 0;
		iLocal_5057 = 0;
		iLocal_5076 = 0;
		iLocal_5117 = 0;
		iLocal_5129 = 0;
		iLocal_5127 = 0;
		bLocal_5249 = true;
		iLocal_5060 = 0;
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			iLocal_5221[iVar0] = 0;
			iVar0++;
		}
		iLocal_5113 = 0;
		iLocal_5247 = 0;
		iLocal_5248 = 0;
		iLocal_5220 = 0;
		bLocal_5249 = true;
		GlobalFunc_563(1);
		GlobalFunc_695(0);
		iLocal_5114 = 1;
	}
	switch (iLocal_6033)
	{
		case 0:
			func_604();
			func_719(1);
			if (iParam0 == 1)
			{
				if (func_628(2, 1))
				{
					iLocal_6033++;
				}
			}
			else if (iParam0 == 2)
			{
				if (func_628(2, 1))
				{
					while (((!func_358(6, Local_6183, fLocal_6081) || !func_358(7, Local_6186, fLocal_6082)) || !func_358(5, -1155.02f, -1522.81f, 3.3397f, 38.4f)) || !func_468(8))
					{
						SYSTEM::WAIT(0);
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
						func_712();
						iLocal_6033++;
					}
					else
					{
						func_710(iParam0);
						func_712();
						iLocal_6033++;
					}
				}
			}
			else if (iParam0 == 3)
			{
				if (func_628(2, 1))
				{
					while (((!func_468(8) || !func_358(5, 21.3604f, -2534.9f, 5.0505f, 55.3357f)) || !func_358(6, Local_6183, fLocal_6081)) || !func_358(7, Local_6186, fLocal_6082))
					{
						SYSTEM::WAIT(0);
					}
					func_709(joaat("s_m_y_blackops_01"));
					func_709(joaat("s_m_m_dockwork_01"));
					func_709(GlobalFunc_4946(24));
					func_709(GlobalFunc_4946(32));
					func_709(joaat("biff"));
					func_709(joaat("forklift"));
					STREAMING::REQUEST_ANIM_DICT("misslsdhs");
					func_712();
					if (!PED::IS_PED_INJURED(iLocal_6134))
					{
						if (!PED::IS_PED_INJURED(iLocal_6135))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_6137, 1))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_6135, iLocal_6137, 1);
								}
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_6137, 0))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_6134, iLocal_6137, 0);
								}
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_6137, 1, 1);
								MISC::CLEAR_AREA(12.2127f, -2531.034f, 5.0509f, 100f, 1, 1, 1, 0);
								PED::SET_PED_NON_CREATION_AREA(Vector(5.0509f, -2531.034f, 12.2127f) - Vector(10f, 10f, 10f), Vector(5.0509f, -2531.034f, 12.2127f) + Vector(10f, 10f, 10f));
							}
						}
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(iLocal_6137, -1, 1);
						func_712();
						iLocal_6033++;
					}
					else
					{
						func_710(iParam0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_6137, -1))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, -1);
							}
						}
						STREAMING::LOAD_SCENE(21.3604f, -2534.9f, 5.0505f);
						func_712();
						iLocal_6033++;
					}
				}
			}
			else if (iParam0 == 4)
			{
				if (func_628(2, 1))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks1");
					TASK::REQUEST_WAYPOINT_RECORDING("floyddocks1");
					TASK::REQUEST_WAYPOINT_RECORDING("docksplayer1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
					func_709(joaat("s_m_y_blackops_01"));
					func_709(joaat("s_m_m_dockwork_01"));
					func_709(GlobalFunc_4946(32));
					func_709(joaat("biff"));
					func_709(joaat("forklift"));
					func_712();
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
						iLocal_6033++;
					}
					else
					{
						func_710(iParam0);
						iLocal_6033++;
					}
				}
			}
			else if (iParam0 == 5)
			{
				if (func_628(2, 1))
				{
					while (!func_358(2, 0f, 0f, 0f, 0))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks3");
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
					func_709(joaat("s_m_y_blackops_01"));
					func_709(joaat("s_m_m_dockwork_01"));
					func_709(GlobalFunc_4946(32));
					func_709(joaat("biff"));
					func_709(joaat("forklift"));
					func_712();
					Local_5411[0 /*16*/].f_4 = 8;
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
						iLocal_6033++;
					}
					else
					{
						func_710(iParam0);
						iLocal_6033++;
					}
				}
			}
			else if (iParam0 == 6)
			{
				if (func_628(2, 1))
				{
					while (!func_358(3, 0f, 0f, 0f, 0))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_14");
					AUDIO::START_AUDIO_SCENE("DH_1_HANDLER_START");
					func_709(joaat("s_m_y_blackops_01"));
					func_709(joaat("s_m_m_dockwork_01"));
					func_709(GlobalFunc_4946(32));
					func_709(joaat("biff"));
					func_709(joaat("forklift"));
					func_709(joaat("prop_contr_03b_ld"));
					func_712();
					Local_5411[0 /*16*/].f_4 = 8;
					iLocal_5088 = 0;
					Local_6816 = { -53.02f, -2416.04f, 14.75f };
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
						iLocal_6033++;
					}
					else
					{
						func_710(iParam0);
						iLocal_6033++;
					}
				}
			}
			else if (iParam0 == 7)
			{
				if (func_628(2, 1))
				{
					while (!func_358(3, 0f, 0f, 0f, 0))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(2, "AWDocks1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
					func_709(joaat("s_m_y_blackops_01"));
					func_709(joaat("s_m_m_dockwork_01"));
					func_709(GlobalFunc_4946(32));
					func_709(joaat("biff"));
					func_709(joaat("forklift"));
					func_709(joaat("hauler"));
					func_709(joaat("docktrailer"));
					func_712();
					Local_5411[0 /*16*/].f_4 = 8;
					Local_6816 = { -53.02f, -2416.04f, 14.75f };
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
						iLocal_6033++;
					}
					else
					{
						func_710(iParam0);
						iLocal_6033++;
					}
				}
			}
			else if (iParam0 == 8)
			{
				if (func_628(2, 1))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					while (!func_358(3, 0f, 0f, 0f, 0))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
					func_709(joaat("s_m_y_blackops_01"));
					func_709(joaat("s_m_m_dockwork_01"));
					func_709(GlobalFunc_4946(32));
					func_709(joaat("hauler"));
					func_709(joaat("docktrailer"));
					func_712();
					Local_5411[0 /*16*/].f_4 = 8;
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
						iLocal_6033++;
					}
					else
					{
						func_710(iParam0);
						iLocal_6033++;
					}
				}
			}
			else if (iParam0 == 9)
			{
				if (func_628(2, 1))
				{
					while (!func_358(3, 0f, 0f, 0f, 0))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
					func_709(joaat("s_m_y_blackops_01"));
					func_709(joaat("s_m_m_dockwork_01"));
					func_709(GlobalFunc_4946(32));
					func_709(joaat("biff"));
					func_709(joaat("forklift"));
					func_709(joaat("biff"));
					func_709(joaat("hauler"));
					func_709(joaat("docktrailer"));
					func_712();
					Local_5411[0 /*16*/].f_4 = 8;
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
						iLocal_6033++;
					}
					else
					{
						func_710(iParam0);
						STREAMING::LOAD_SCENE(-120.9023f, -2411.269f, 5.0007f);
						iLocal_6033++;
					}
				}
			}
			else if (iParam0 == 10)
			{
				if (func_628(2, 1))
				{
					while (!func_358(3, 0f, 0f, 0f, 0))
					{
						SYSTEM::WAIT(0);
					}
					while (!func_468(4))
					{
						SYSTEM::WAIT(0);
					}
					while (!func_468(12))
					{
						SYSTEM::WAIT(0);
					}
					func_709(joaat("s_m_y_blackops_01"));
					func_709(joaat("s_m_m_dockwork_01"));
					func_709(GlobalFunc_4946(32));
					func_709(joaat("biff"));
					func_709(joaat("hauler"));
					func_709(joaat("docktrailer"));
					func_712();
					Local_5411[0 /*16*/].f_4 = 8;
					if (GlobalFunc_188())
					{
						GlobalFunc_5108(0, -1, 1);
						iLocal_6033++;
					}
					else
					{
						func_710(iParam0);
						iLocal_6033++;
					}
				}
			}
			else if (iParam0 == 11)
			{
				if (GlobalFunc_188())
				{
					GlobalFunc_5108(0, -1, 1);
					iLocal_6033++;
				}
				else
				{
					STREAMING::LOAD_SCENE(-1153.431f, -1517.17f, 9.6327f);
					func_710(iParam0);
					iLocal_6033++;
				}
			}
			break;
		
		case 1:
			if (func_708())
			{
				if (func_707("AWDocks1"))
				{
					if (iParam0 == 1)
					{
						iLocal_6033++;
					}
					else if (iParam0 == 2)
					{
						if (func_628(2, 1))
						{
							func_469();
							if ((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_6134) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_6135)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
							{
								iLocal_6033++;
							}
						}
					}
					else if (iParam0 == 3)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
						{
							func_706(&iLocal_6134, GlobalFunc_4946(32), Local_6183, fLocal_6081, 1, joaat("weapon_unarmed"), 1, "FLOYD", 3);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
						{
							func_706(&iLocal_6135, GlobalFunc_4946(24), Local_6186, fLocal_6082, 1, joaat("weapon_unarmed"), 1, "WADE", 4);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6137))
						{
							func_358(5, Local_6785, 55.2078f);
						}
						else if (func_504())
						{
							if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6153[0]))
							{
								uLocal_6153[0] = OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), Local_6785, 1, 1, 0);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6164[0]))
							{
								uLocal_6164[0] = OBJECT::CREATE_OBJECT(joaat("prop_pencil_01"), Local_6785, 1, 1, 0);
								func_469();
							}
							else if (ENTITY::DOES_ENTITY_EXIST(iLocal_6136))
							{
								if (!PED::IS_PED_INJURED(iLocal_6136))
								{
									STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@base");
									if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@base") && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs"))
									{
										if (!PED::IS_PED_INJURED(iLocal_6134) && !PED::IS_PED_INJURED(iLocal_6135))
										{
											if ((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_6134) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_6135)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
											{
												PED::CLEAR_ALL_PED_PROPS(iLocal_6136);
												ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_6164[0], iLocal_6136, PED::GET_PED_BONE_INDEX(iLocal_6136, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_6153[0], iLocal_6136, PED::GET_PED_BONE_INDEX(iLocal_6136, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
												ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_6153[0], iLocal_6136, 1);
												TASK::TASK_PLAY_ANIM(iLocal_6136, "misslsdhsclipboard@base", "base", 1000f, -8f, -1, 1, 0, 0, 0, 0);
												GlobalFunc_173(&Local_47, 1, iLocal_6136, "GATEGUARD", 0, 1);
												PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_6136, 0);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_6136, 0, 0);
												iLocal_6033++;
											}
										}
									}
								}
							}
						}
					}
					else if (iParam0 == 4)
					{
						if (((TASK::GET_IS_WAYPOINT_RECORDING_LOADED("floyddocks1") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksplayer1")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1"))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
							{
								func_706(&iLocal_6134, GlobalFunc_4946(32), -63.91f, -2523.12f, 5.011f, 58.62f, 1, joaat("weapon_unarmed"), 1, "FLOYD", 3);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6137))
							{
								while (!func_358(5, Local_6794, 56f))
								{
									SYSTEM::WAIT(0);
								}
							}
							else if (func_504())
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
								{
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6137, 0);
								}
								iLocal_6033++;
							}
						}
					}
					else if (iParam0 == 5)
					{
						if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks3"))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
							{
								func_706(&iLocal_6134, GlobalFunc_4946(32), -58.7087f, -2524.675f, 5.011f, 191.0631f, 1, joaat("weapon_unarmed"), 1, "FLOYD", 3);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6137))
							{
								while (!func_358(5, Local_6794, 56f))
								{
									SYSTEM::WAIT(0);
								}
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6138))
							{
								func_399(&iLocal_6138, joaat("handler"), -129.77f, -2418.28f, 6.24f, 183.085f, -1, 1f, 1);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_6138, 0);
								VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_6138, 0);
							}
							else if (func_504())
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_5673[0 /*16*/]))
								{
									STREAMING::REQUEST_MODEL(Local_5673[0 /*16*/].f_2);
									if (STREAMING::HAS_MODEL_LOADED(Local_5673[0 /*16*/].f_2))
									{
										Local_5673[0 /*16*/] = func_705(Local_5673[0 /*16*/].f_2, Local_5673[0 /*16*/].f_7, Local_5673[0 /*16*/].f_10, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
									}
								}
								else
								{
									STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@start_idle");
									if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@start_idle"))
									{
										STREAMING::REQUEST_MODEL(joaat("p_cs_clipboard"));
										if (STREAMING::HAS_MODEL_LOADED(joaat("p_cs_clipboard")))
										{
											if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6153[1]))
											{
												uLocal_6153[1] = OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), -131.08f, -2423.25f, 8f, 1, 1, 0);
											}
											else
											{
												STREAMING::REQUEST_MODEL(joaat("prop_pencil_01"));
												if (STREAMING::HAS_MODEL_LOADED(joaat("prop_pencil_01")))
												{
													if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6164[1]))
													{
														uLocal_6164[1] = OBJECT::CREATE_OBJECT(joaat("prop_pencil_01"), -131.08f, -2423.25f, 8f, 1, 1, 0);
													}
													else if (ENTITY::DOES_ENTITY_EXIST(Local_5673[0 /*16*/]))
													{
														if (!ENTITY::IS_ENTITY_ATTACHED(uLocal_6164[1]))
														{
															if (!PED::IS_PED_INJURED(Local_5673[0 /*16*/]))
															{
																ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_6164[1], Local_5673[0 /*16*/], PED::GET_PED_BONE_INDEX(Local_5673[0 /*16*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
															}
														}
														else if (!ENTITY::IS_ENTITY_ATTACHED(uLocal_6153[1]))
														{
															if (!PED::IS_PED_INJURED(Local_5673[0 /*16*/]))
															{
																ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_6153[1], Local_5673[0 /*16*/], PED::GET_PED_BONE_INDEX(Local_5673[0 /*16*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
															}
														}
														else
														{
															if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
															{
																VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6137, 0);
															}
															iLocal_6033++;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					else if (iParam0 == 6)
					{
						if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2")) && STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
							{
								func_706(&iLocal_6134, GlobalFunc_4946(32), -129.77f, -2418.28f, 6.24f, 191.0631f, 1, joaat("weapon_unarmed"), 1, "FLOYD", 3);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6137))
							{
								while (!func_358(5, Local_6794, 56f))
								{
									SYSTEM::WAIT(0);
								}
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6138))
							{
								func_399(&iLocal_6138, joaat("handler"), -88.8838f, -2451.568f, 5.0175f, 317.2729f, -1, 1f, 1);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_6138, 0);
								VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_6138, 0);
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
								{
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_6138, -1))
									{
										PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, -1);
									}
								}
								else if (func_504())
								{
									iLocal_6033++;
								}
							}
						}
					}
					else if (iParam0 == 7)
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2"))
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1trevor_crane"))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
								{
									func_706(&iLocal_6134, GlobalFunc_4946(32), -120.65f, -2422.97f, 5f, -38.16f, 1, joaat("weapon_unarmed"), 1, "FLOYD", 3);
								}
								else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6137))
								{
									while (!func_358(5, Local_6794, 56f))
									{
										SYSTEM::WAIT(0);
									}
								}
								else if (func_504())
								{
									iLocal_6033++;
								}
							}
						}
					}
					else if (iParam0 == 8)
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2"))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
							{
								func_706(&iLocal_6134, GlobalFunc_4946(32), -145.1769f, -2472.315f, 5.031f, fLocal_6081, 1, joaat("weapon_unarmed"), 1, "FLOYD", 3);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6146))
							{
								func_399(&iLocal_6146, joaat("hauler"), -117.9839f, -2416.627f, 5.0003f, 91.3366f, -1, 0, 1);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6151))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
								{
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_6146, 0, 0);
									func_399(&iLocal_6151, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_6146, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_6146), -1, 0, 1);
									VEHICLE::SET_VEHICLE_EXTRA(iLocal_6151, 1, false);
								}
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
								{
									if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_6146))
									{
										VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_6146, iLocal_6151, 1065353216);
									}
									else
									{
										if (!PED::IS_PED_INJURED(iLocal_6134))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
											{
												if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_6146, 0))
												{
													PED::SET_PED_INTO_VEHICLE(iLocal_6134, iLocal_6146, 0);
												}
											}
										}
										if (func_504())
										{
											iLocal_6033++;
										}
										ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
									}
								}
							}
						}
					}
					else if (iParam0 == 9)
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2"))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
							{
								func_706(&iLocal_6134, GlobalFunc_4946(32), -145.1769f, -2472.315f, 5.031f, fLocal_6081, 1, joaat("weapon_unarmed"), 1, "FLOYD", 3);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6146))
							{
								func_399(&iLocal_6146, joaat("hauler"), -116.3106f, -2415.39f, 5.0005f, 88.7066f, -1, 0, 1);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6151))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
								{
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_6146, 0, 0);
									func_399(&iLocal_6151, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_6146, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_6146), -1, 0, 1);
									VEHICLE::SET_VEHICLE_EXTRA(iLocal_6151, 1, false);
								}
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
								{
									if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_6146))
									{
										VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_6146, iLocal_6151, 1065353216);
									}
									else if (!PED::IS_PED_INJURED(iLocal_6134))
									{
										if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_6146, 0))
										{
											PED::SET_PED_INTO_VEHICLE(iLocal_6134, iLocal_6146, 0);
										}
										if (func_504())
										{
											STREAMING::REQUEST_IPL("pcranecont");
											iLocal_6033++;
										}
									}
								}
							}
						}
					}
					else if (iParam0 == 10)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6147))
						{
							func_399(&iLocal_6147, joaat("tiptruck"), 465.8751f, -3037.084f, 5.0686f, 126.3433f, -1, 1f, 1);
						}
						else
						{
							iLocal_6033++;
						}
					}
					else if (iParam0 == 11)
					{
						if (GlobalFunc_188())
						{
							GlobalFunc_5108(0, -1, 1);
							iLocal_6033++;
						}
						else
						{
							func_710(iParam0);
							iLocal_6033++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iParam0 > 1)
			{
				func_469();
			}
			if (iParam0 > 3)
			{
				GlobalFunc_5125(2, PLAYER::PLAYER_PED_ID());
				GlobalFunc_5125(3, PLAYER::PLAYER_PED_ID());
				GlobalFunc_583(1, PLAYER::PLAYER_PED_ID(), 0);
			}
			if (iParam0 != 2 || iParam0 != 1)
			{
				iLocal_6034 = 0;
				if (!GlobalFunc_Is_Mission_Retry())
				{
					func_710(iParam0);
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			if (iParam0 == 1)
			{
				iLocal_6034 = 0;
				iLocal_7196 = 1;
				func_704();
			}
			else if (iParam0 == 2)
			{
				iLocal_6034 = 0;
				iLocal_7196 = 2;
				if (iLocal_5255 == 1)
				{
				}
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				func_704();
			}
			else if (iParam0 == 3)
			{
				iLocal_7196 = 3;
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				func_704();
			}
			else if (iParam0 == 4)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_6134, -668482597, 0, 1, 0);
				}
				iLocal_7196 = 4;
				func_704();
			}
			else if (iParam0 == 5)
			{
				func_505();
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_6138, -1))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, -1);
					}
				}
				iLocal_7196 = 5;
				func_704();
			}
			else if (iParam0 == 6)
			{
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				iLocal_7196 = 6;
				func_704();
			}
			else if (iParam0 == 7)
			{
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				iLocal_7196 = 7;
				func_704();
			}
			else if (iParam0 == 8)
			{
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				iLocal_7196 = 8;
				CAM::STOP_GAMEPLAY_HINT(0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				SYSTEM::SETTIMERA(0);
				func_704();
			}
			else if (iParam0 == 9)
			{
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				iLocal_7196 = 9;
				func_704();
			}
			else if (iParam0 == 10)
			{
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				func_505();
				func_703();
				iLocal_7196 = 10;
				func_704();
			}
			else if (iParam0 == 11)
			{
				func_505();
				func_703();
				iLocal_7196 = 11;
				func_704();
			}
			break;
	}
}

void func_703()//Position - 0x7BB99
{
	int iVar0;
	
	if (iLocal_5258 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_5258 - 1))
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED(uLocal_5259[iVar0]))
			{
				STREAMING::REMOVE_ANIM_DICT(uLocal_5259[iVar0]);
			}
			iVar0++;
		}
	}
	iLocal_5258 = 0;
}

void func_704()//Position - 0x7BBDB
{
	func_292();
	iLocal_5115 = 1;
}

int func_705(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x7BBEB
{
	var uVar0;
	
	if (GlobalFunc_105(Param1))
	{
	}
	uVar0 = PED::CREATE_PED(iParam9, uParam0, Param1, fParam4, 1, 1);
	WEAPON::GIVE_WEAPON_TO_PED(uVar0, iParam8, -1, 1, 1);
	WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, iParam8);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam6);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam6);
	PED::ADD_ARMOUR_TO_PED(iVar0, iParam7);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam5);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, 1);
	return iVar0;
}

void func_706(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10)//Position - 0x7BC54
{
	STREAMING::REQUEST_MODEL(iParam1);
	if (STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam5, 1, 1);
		}
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(*iParam0, iParam7, 800, 1, 1);
			PED::SET_PED_CAN_BE_TARGETTED(*iParam0, 0);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_464);
			ENTITY::SET_ENTITY_PROOFS(*iParam0, 0, 0, 0, 0, 0, 0, 0, 0);
			ENTITY::SET_ENTITY_HEALTH(*iParam0, 200);
			if (iParam8 == 1)
			{
			}
			PED::SET_PED_AS_ENEMY(*iParam0, 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iParam6 == 1)
			{
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
			{
				GlobalFunc_173(&Local_47, iParam10, *iParam0, sParam9, 0, 1);
			}
		}
	}
}

int func_707(char* sParam0)//Position - 0x7BD20
{
	int iVar0;
	
	if (iLocal_365 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_365 - 1))
		{
			if (!MISC::IS_STRING_NULL(sParam0))
			{
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_366[iVar0], sParam0))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_708()//Position - 0x7BD65
{
	int iVar0;
	
	if (iLocal_343 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_343 - 1))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_344[iVar0]))
			{
				SYSTEM::WAIT(0);
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

void func_709(int iParam0)//Position - 0x7BDA3
{
	int iVar0;
	bool bVar1;
	
	STREAMING::REQUEST_MODEL(iParam0);
	if (iLocal_343 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_343 - 1))
		{
			if (iLocal_344[iVar0] == iParam0)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			iLocal_344[iLocal_343] = iParam0;
			iLocal_343++;
		}
	}
	else if (iLocal_343 == 0)
	{
		iLocal_344[0] = iParam0;
		iLocal_343++;
	}
}

void func_710(int iParam0)//Position - 0x7BE0F
{
	if (iParam0 == 0 || iParam0 == 2)
	{
		Local_6177 = { Local_6180 };
		fLocal_6080 = fLocal_6079;
	}
	else if (iParam0 == 3)
	{
		Local_6177 = { 24.4835f, -2536.458f, 5.041f };
		fLocal_6080 = 55.2078f;
	}
	else if (iParam0 == 4)
	{
		Local_6177 = { -61.5066f, -2525.512f, 5.0101f };
		fLocal_6080 = 56.9516f;
	}
	else if (iParam0 == 5)
	{
		Local_6177 = { -125.5439f, -2421.881f, 5.0005f };
		fLocal_6080 = 49.08f;
	}
	else if (iParam0 == 6)
	{
		Local_6177 = { -88.8838f, -2451.568f, 5.0175f };
		fLocal_6080 = 317.2729f;
	}
	else if (iParam0 == 7)
	{
		Local_6177 = { -50.2985f, -2403.904f, 5.0003f };
		fLocal_6080 = 191.216f;
	}
	else if (iParam0 == 8)
	{
		Local_6177 = { -114.5969f, -2406.811f, 22.2282f };
		fLocal_6080 = 359.8527f;
	}
	else if (iParam0 == 9)
	{
		Local_6177 = { -120.9023f, -2411.269f, 5.0007f };
		fLocal_6080 = 195.5543f;
	}
	else if (iParam0 == 10)
	{
		Local_6177 = { -120.9023f, -2411.269f, 5.0007f };
		fLocal_6080 = 195.5543f;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		}
		GlobalFunc_2788(Local_6177, fLocal_6080, 1);
	}
}


void func_712()//Position - 0x7BFE7
{
	iLocal_5250[0] = 0;
	iLocal_5250[1] = 0;
	iLocal_5250[2] = 0;
}







void func_719(int iParam0)//Position - 0x7C1E9
{
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_01", iParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_02", iParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_03", iParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_04", iParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_05", iParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_06", iParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_07", iParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_08", iParam0);
}






void func_725()//Position - 0x7C395
{
	if (Local_5411[0 /*16*/].f_4 > 0 && Local_5411[0 /*16*/].f_4 < 5)
	{
		if (!func_403("MERRYWEATHER SHOUT"))
		{
			if (GlobalFunc_745())
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Local_5411[1 /*16*/], 1))
				{
					GlobalFunc_5122(Local_5411[1 /*16*/], "GENERIC_INSULT_HIGH", 24);
					func_400("MERRYWEATHER SHOUT", 1);
					iLocal_7371 = MISC::GET_GAME_TIMER();
				}
			}
			else if (!PED::IS_PED_DEAD_OR_DYING(Local_5411[2 /*16*/], 1))
			{
				GlobalFunc_5122(Local_5411[2 /*16*/], "GENERIC_INSULT_HIGH", 24);
				func_400("MERRYWEATHER SHOUT", 1);
				iLocal_7371 = MISC::GET_GAME_TIMER();
			}
		}
		else if (GlobalFunc_588(&iLocal_7371, MISC::GET_RANDOM_INT_IN_RANGE(7000, 14000)))
		{
			func_400("MERRYWEATHER SHOUT", 0);
		}
	}
	if (Local_5411[0 /*16*/].f_4 < 7)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_5411[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5411[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5411[2 /*16*/]))
		{
			if ((!PED::IS_PED_INJURED(Local_5411[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5411[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5411[2 /*16*/]))
			{
				if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_5411[0 /*16*/]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_5411[0 /*16*/])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_5411[0 /*16*/]))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_5411[0 /*16*/], -4f, 1);
					TASK::TASK_SMART_FLEE_COORD(Local_5411[0 /*16*/], -294.5143f, -2497.98f, 5.0015f, 100f, -1, 0, 0);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_5411[1 /*16*/], -4f, 1);
					TASK::TASK_COMBAT_PED(Local_5411[1 /*16*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_5411[2 /*16*/], -4f, 1);
					TASK::TASK_COMBAT_PED(Local_5411[2 /*16*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					Local_5411[0 /*16*/].f_4 = 7;
				}
			}
		}
	}
	if (iLocal_5821[11])
	{
		func_727(0);
		if (!ENTITY::DOES_ENTITY_EXIST(Local_5411[0 /*16*/]))
		{
			if (iLocal_7196 > 2 && iLocal_7196 < 5)
			{
				STREAMING::REQUEST_MODEL(Local_5411[0 /*16*/].f_2);
				STREAMING::REQUEST_MODEL(Local_5411[1 /*16*/].f_2);
				STREAMING::REQUEST_MODEL(Local_5411[2 /*16*/].f_2);
				if ((STREAMING::HAS_MODEL_LOADED(Local_5411[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(Local_5411[1 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_5411[2 /*16*/].f_2))
				{
					Local_5411[0 /*16*/] = func_705(Local_5411[0 /*16*/].f_2, -294.5143f, -2497.98f, 5.0015f, 87.3385f, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_5411[0 /*16*/], 1);
					PED::SET_PED_CAPSULE(Local_5411[0 /*16*/], 0.4f);
					Local_5411[1 /*16*/] = func_705(Local_5411[1 /*16*/].f_2, -295.4659f, -2496.879f, 5.0015f, 349.2262f, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_5411[1 /*16*/], 1);
					Local_5411[2 /*16*/] = func_705(Local_5411[2 /*16*/].f_2, -294.3614f, -2495.912f, 5.0015f, 181.5108f, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_5411[2 /*16*/], 1);
					func_726(&Local_5411, "Blackwater with dockworker");
				}
			}
		}
		else if (iLocal_5821[11])
		{
			if (Local_5411[0 /*16*/].f_4 > 3)
			{
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			}
			switch (Local_5411[0 /*16*/].f_4)
			{
				case 0:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_6019, 1) < 60f)
					{
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
						AUDIO::_0xC8EDE9BDBCCBA6D4("LSDHS_IG_13", Local_6019);
						Local_5411[0 /*16*/].f_4++;
					}
					break;
				
				case 1:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
					if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("LSDHS_IG_13", 0))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@start_idle"))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_6019, 1) < 60f)
							{
								if ((ENTITY::DOES_ENTITY_EXIST(Local_5411[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5411[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5411[2 /*16*/]))
								{
									if ((!PED::IS_PED_INJURED(Local_5411[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5411[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5411[2 /*16*/]))
									{
										if (!PED::IS_PED_INJURED(Local_5574[0 /*16*/]))
										{
											TASK::CLEAR_PED_TASKS(Local_5574[0 /*16*/]);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5574[0 /*16*/]));
										}
										if (!PED::IS_PED_INJURED(Local_5574[1 /*16*/]))
										{
											TASK::CLEAR_PED_TASKS(Local_5574[1 /*16*/]);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5574[1 /*16*/]));
										}
										if (!PED::IS_PED_INJURED(Local_5574[2 /*16*/]))
										{
											TASK::CLEAR_PED_TASKS(Local_5574[2 /*16*/]);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5574[2 /*16*/]));
										}
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_a");
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_b");
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_c");
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_d");
										if (!PED::IS_PED_INJURED(Local_5640[0 /*16*/]))
										{
											TASK::CLEAR_PED_TASKS(Local_5640[0 /*16*/]);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5640[0 /*16*/]));
										}
										if (!PED::IS_PED_INJURED(Local_5640[1 /*16*/]))
										{
											TASK::CLEAR_PED_TASKS(Local_5640[1 /*16*/]);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5640[1 /*16*/]));
										}
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_5@base");
										uLocal_5352 = PED::CREATE_SYNCHRONIZED_SCENE(Local_6019, Local_6019.f_3, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5411[0 /*16*/], uLocal_5352, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_dockworker", 2f, -8f, 1, 16, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5411[1 /*16*/], uLocal_5352, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_guard1", 2f, -8f, 1, 16, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5411[2 /*16*/], uLocal_5352, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_guard2", 2f, -8f, 1, 16, 1148846080, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5352, 1);
										STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@main_action");
										Local_5411[0 /*16*/].f_4++;
									}
								}
							}
						}
					}
					break;
				
				case 2:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@main_action");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@main_action"))
					{
						if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_6019) < 50f)
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_5411[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5411[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5411[2 /*16*/]))
							{
								if ((!PED::IS_PED_INJURED(Local_5411[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5411[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5411[2 /*16*/]))
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(Local_5411[0 /*16*/]))
									{
										if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5352))
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5352) > 0.99f)
											{
												uLocal_5353 = PED::CREATE_SYNCHRONIZED_SCENE(Local_6019, Local_6019.f_3, 2);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_5411[0 /*16*/], uLocal_5353, "missheistdockssetup1ig_13@main_action", "guard_beatup_mainaction_dockworker", 2f, -8f, 1, 16, 1148846080, 0);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_5411[1 /*16*/], uLocal_5353, "missheistdockssetup1ig_13@main_action", "guard_beatup_mainaction_guard1", 2f, -8f, 1, 16, 1148846080, 0);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_5411[2 /*16*/], uLocal_5353, "missheistdockssetup1ig_13@main_action", "guard_beatup_mainaction_guard2", 2f, -8f, 1, 16, 1148846080, 0);
												PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5353, 0);
												if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@start_idle"))
												{
													STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
												}
												AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(uLocal_5353);
												STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
												Local_5411[0 /*16*/].f_4 = 4;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 3:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@kick_idle"))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Local_5411[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5411[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5411[2 /*16*/]))
						{
							if ((!PED::IS_PED_INJURED(Local_5411[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5411[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5411[2 /*16*/]))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5353))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5353) >= 1f)
									{
										uLocal_5354 = PED::CREATE_SYNCHRONIZED_SCENE(Local_6019, Local_6019.f_3, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5411[0 /*16*/], uLocal_5354, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_dockworker", 2f, -1000f, 1, 16, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5411[1 /*16*/], uLocal_5354, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_guard1", 2f, -1000f, 1, 16, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5411[2 /*16*/], uLocal_5354, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_guard2", 2f, -1000f, 1, 16, 1148846080, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5354, 0);
										if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@main_action"))
										{
											STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@main_action");
										}
										STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@exit");
										Local_5411[0 /*16*/].f_4++;
									}
								}
							}
						}
					}
					break;
				
				case 4:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@exit");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@exit"))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Local_5411[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5411[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5411[2 /*16*/]))
						{
							if ((!PED::IS_PED_INJURED(Local_5411[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5411[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5411[2 /*16*/]))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5353))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5353) > 0.99f)
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@kick_idle"))
										{
											STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
										}
										if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@main_action"))
										{
											STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@main_action");
										}
										uLocal_5355 = PED::CREATE_SYNCHRONIZED_SCENE(Local_6019, Local_6019.f_3, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5411[0 /*16*/], uLocal_5355, "missheistdockssetup1ig_13@exit", "guard_beatup_exit_dockworker", 2f, -1000f, 1, 16, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5411[1 /*16*/], uLocal_5355, "missheistdockssetup1ig_13@exit", "guard_beatup_exit_guard1", 2f, -4f, 1, 16, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5411[2 /*16*/], uLocal_5355, "missheistdockssetup1ig_13@exit", "guard_beatup_exit_guard2", 2f, -4f, 1, 16, 1148846080, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5355, 0);
										Local_5411[0 /*16*/].f_4++;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@exit");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@exit"))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Local_5411[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5411[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5411[2 /*16*/]))
						{
							if ((!PED::IS_PED_INJURED(Local_5411[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5411[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5411[2 /*16*/]))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5355))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5355) > 0.99f)
									{
										uLocal_5356 = PED::CREATE_SYNCHRONIZED_SCENE(Local_6019, Local_6019.f_3, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5411[0 /*16*/], uLocal_5356, "missheistdockssetup1ig_13@exit", "GUARD_Beatup_RollIdle_DockWorker", 2f, -8f, 1, 16, 1148846080, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5356, 1);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_5411[1 /*16*/], -4f, 1);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_5411[2 /*16*/], -4f, 1);
										TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
										TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000, 0, 2);
										TASK::TASK_PAUSE(0, 1000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -116.125f, -2386.333f, 5f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
										TASK::TASK_PERFORM_SEQUENCE(Local_5411[1 /*16*/], uLocal_6175);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_6175);
										if (!PED::IS_PED_INJURED(Local_5411[1 /*16*/]))
										{
											PED::SET_PED_CONFIG_FLAG(Local_5411[1 /*16*/], 132, 1);
										}
										PED::SET_PED_KEEP_TASK(Local_5411[1 /*16*/], 1);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5411[1 /*16*/]));
										TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -68.8121f, -2431.885f, 5.0005f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
										TASK::TASK_PERFORM_SEQUENCE(Local_5411[2 /*16*/], uLocal_6175);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_6175);
										if (!PED::IS_PED_INJURED(Local_5411[2 /*16*/]))
										{
											PED::SET_PED_CONFIG_FLAG(Local_5411[2 /*16*/], 132, 1);
										}
										PED::SET_PED_KEEP_TASK(Local_5411[2 /*16*/], 1);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5411[2 /*16*/]));
										Local_5411[0 /*16*/].f_4++;
									}
								}
							}
						}
					}
					break;
				
				case 6:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@exit");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@exit"))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Local_5411[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5411[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5411[2 /*16*/]))
						{
							if ((!PED::IS_PED_INJURED(Local_5411[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5411[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5411[2 /*16*/]))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5356))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5356) > 0.99f)
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_5411[0 /*16*/], -4f, 1);
										TASK::CLEAR_PED_TASKS(Local_5411[0 /*16*/]);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5411[0 /*16*/]));
										Local_5411[0 /*16*/].f_4++;
									}
								}
							}
						}
					}
					break;
				
				case 7:
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@exit");
					Local_5411[0 /*16*/].f_4++;
					iLocal_5821[11] = 0;
					if (ENTITY::DOES_ENTITY_EXIST(Local_5411[0 /*16*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5411[0 /*16*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_5411[1 /*16*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5411[1 /*16*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_5411[2 /*16*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5411[2 /*16*/]));
					}
					break;
				}
			}
	}
}

void func_726(int iParam0, char* sParam1)//Position - 0x7D0CB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*16*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0 /*16*/], 1);
			if (!(iParam0[iVar0 /*16*/])->f_3 == 1)
			{
				(iParam0[iVar0 /*16*/])->f_3 = 1;
			}
			(iParam0[iVar0 /*16*/])->f_4 = 0;
			if ((iParam0[iVar0 /*16*/])->f_5 != 0)
			{
				(iParam0[iVar0 /*16*/])->f_5 = 0;
			}
			sParam1 = sParam1;
		}
		iVar0++;
	}
}

void func_727(int iParam0)//Position - 0x7D13B
{
	switch (iParam0)
	{
		case 0:
			if ((!PED::IS_PED_INJURED(Local_5411[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5411[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5411[2 /*16*/]))
			{
				if (Local_5411[0 /*16*/].f_4 == 0)
				{
				}
			}
			break;
		
		case 1:
			if ((!PED::IS_PED_INJURED(Local_5574[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5574[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5574[2 /*16*/]))
			{
			}
			break;
	}
}

void func_728()//Position - 0x7D1C4
{
	int iVar0;
	
	if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if (iLocal_7196 != 8)
			{
				if (iVar0 != joaat("weapon_unarmed") && !GlobalFunc_116(0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 45, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
}



void func_731()//Position - 0x7D37C
{
	if (!PED::IS_PED_INJURED(iLocal_6111[15]))
	{
		if (PED::IS_PED_IN_COMBAT(iLocal_6111[15], PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(iLocal_6111[15]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uLocal_6164[3]))
			{
				ENTITY::DETACH_ENTITY(uLocal_6164[3], 1, 1);
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uLocal_6153[3]))
			{
				ENTITY::DETACH_ENTITY(uLocal_6153[3], 1, 1);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_6136))
	{
		if (PED::IS_PED_IN_COMBAT(iLocal_6136, PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(iLocal_6136))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uLocal_6164[0]))
			{
				ENTITY::DETACH_ENTITY(uLocal_6164[0], 1, 1);
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uLocal_6153[0]))
			{
				ENTITY::DETACH_ENTITY(uLocal_6153[0], 1, 1);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_6111[16]))
	{
		if (PED::IS_PED_IN_COMBAT(iLocal_6111[16], PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(iLocal_6111[16]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uLocal_6164[2]))
			{
				ENTITY::DETACH_ENTITY(uLocal_6164[2], 1, 1);
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uLocal_6153[2]))
			{
				ENTITY::DETACH_ENTITY(uLocal_6153[2], 1, 1);
			}
		}
	}
}

int func_732()//Position - 0x7D4A4
{
	int iVar0;
	
	iVar0 = iLocal_7196 + 1;
	switch (iLocal_6036)
	{
		case 0:
			if (iVar0 == 0)
			{
				iLocal_6036++;
			}
			else if (iVar0 == 1)
			{
				iLocal_6036++;
			}
			else if (iVar0 == 2)
			{
				iLocal_6036++;
			}
			else if (iVar0 == 3)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks4");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks5");
				iLocal_6036++;
			}
			else if (iVar0 == 4)
			{
				func_505();
				TASK::REQUEST_WAYPOINT_RECORDING("floyddocks1");
				TASK::REQUEST_WAYPOINT_RECORDING("docksplayer1");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
				iLocal_6036++;
			}
			else if (iVar0 == 5)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks3");
				iLocal_6036++;
			}
			else if (iVar0 == 6)
			{
				func_505();
				func_709(joaat("prop_dock_rtg_ld"));
				func_709(joaat("p_dock_rtg_ld_spdr"));
				func_709(joaat("p_dock_rtg_ld_cab"));
				func_709(joaat("prop_container_ld"));
				func_709(joaat("p_dock_rtg_ld_wheel"));
				func_709(joaat("p_dock_rtg_ld_wheel"));
				func_709(joaat("prop_cntrdoor_ld_l"));
				func_709(joaat("prop_cntrdoor_ld_r"));
				iLocal_6036++;
			}
			else if (iVar0 == 7)
			{
				func_505();
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, "AWDocks1");
				func_709(joaat("biff"));
				func_709(joaat("hauler"));
				func_709(joaat("docktrailer"));
				iLocal_6036++;
			}
			else if (iVar0 == 8)
			{
				func_505();
				func_709(joaat("biff"));
				func_709(joaat("hauler"));
				func_709(joaat("docktrailer"));
				iLocal_6036++;
			}
			else if (iVar0 == 9)
			{
				func_505();
				func_709(joaat("hauler"));
				func_709(joaat("docktrailer"));
				func_709(joaat("tiptruck"));
				func_709(joaat("s_m_y_blackops_01"));
				func_709(joaat("s_m_m_dockwork_01"));
				iLocal_6036++;
			}
			break;
		
		case 1:
			if (func_708() && func_707("AWDocks1"))
			{
				iLocal_6036++;
			}
			break;
		
		case 2:
			if (iVar0 == 0)
			{
				iLocal_6036++;
			}
			else if (iVar0 == 1)
			{
				iLocal_6036++;
			}
			else if (iVar0 == 2)
			{
				iLocal_6036++;
			}
			else if (iVar0 == 3)
			{
				iLocal_6036++;
			}
			else if (iVar0 == 4)
			{
				if (((TASK::GET_IS_WAYPOINT_RECORDING_LOADED("floyddocks1") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksplayer1")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2"))
				{
					iLocal_6036++;
				}
			}
			else if (iVar0 == 5)
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks3"))
				{
					iLocal_6036++;
				}
			}
			else if (iVar0 == 6)
			{
				iLocal_6036++;
			}
			else if (iVar0 == 7)
			{
				iLocal_6036++;
			}
			else if (iVar0 == 8)
			{
				func_703();
				func_505();
				iLocal_6036++;
			}
			else if (iVar0 == 9)
			{
				iLocal_6036++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_733(int iParam0, bool bParam1, bool bParam2)//Position - 0x7D7AD
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			TASK::CLEAR_PED_TASKS(*uParam0);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, 0f, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_6, 1, 1);
			if (bParam2)
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_6));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_6));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (bParam2)
		{
			PED::DELETE_PED(uParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		TASK::REMOVE_COVER_POINT(iParam0->f_11);
	}
	if (bParam1)
	{
		iParam0->f_3 = 0;
		iParam0->f_4 = 0;
		iParam0->f_5 = 0;
	}
}

void func_734(var uParam0, bool bParam1, bool bParam2)//Position - 0x7D85F
{
	if (bParam2)
	{
		VEHICLE::DELETE_VEHICLE(uParam0);
	}
	else
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
	}
	if (bParam1)
	{
		uParam0->f_2 = 0;
		if (uParam0->f_3 != 0)
		{
			uParam0->f_3 = 0;
		}
	}
}

void func_735(struct<3> Param0)//Position - 0x7D892
{
	STREAMING::REQUEST_MODEL(joaat("s_m_m_dockwork_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_blackops_01"));
	if (!func_740(1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_5394[0 /*16*/]))
		{
			if (iLocal_7196 > 2 && iLocal_7196 < 4)
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
				STREAMING::REQUEST_MODEL(Local_5394[0 /*16*/].f_2);
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_2_p1@new_structure") && STREAMING::HAS_MODEL_LOADED(Local_5394[0 /*16*/].f_2))
				{
					Local_5394[0 /*16*/] = func_705(Local_5394[0 /*16*/].f_2, Local_5394[0 /*16*/].f_12, Local_5394[0 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
					GlobalFunc_173(&Local_47, 6, Local_5394[0 /*16*/], "SUPERVISOR1", 0, 1);
					func_726(&Local_5394, "Arrive at docks");
					Local_5841[1 /*3*/] = { -61.3f, -2523.86f, 6.16f };
					fLocal_5881[1] = -31.41f;
					Local_5895[1 /*3*/] = { -60.5f, -2523.52f, 6.16f };
					fLocal_5935[1] = 59.25f;
				}
			}
		}
		else if (iLocal_5821[1])
		{
			switch (Local_5394[0 /*16*/].f_4)
			{
				case 0:
					if ((ENTITY::DOES_ENTITY_EXIST(Local_5394[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_6135)) && ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
					{
						if ((!PED::IS_PED_INJURED(Local_5394[0 /*16*/]) && !PED::IS_PED_INJURED(iLocal_6135)) && !PED::IS_PED_INJURED(iLocal_6134))
						{
							if (func_473())
							{
								uLocal_5345 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5963, Local_5963.f_3, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5394[0 /*16*/], uLocal_5345, "missheistdockssetup1ig_2_p1@new_structure", "walk_down_supervisor", 8f, -8f, 1, 16, 1148846080, 0);
								Local_5394[0 /*16*/].f_4++;
							}
						}
					}
					break;
				
				case 1:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5345) > 0.1f)
					{
						if (!func_403("DS1_03b"))
						{
							if (!PED::IS_PED_INJURED(Local_5394[0 /*16*/]))
							{
								GlobalFunc_5653(Local_5394[0 /*16*/], "DH1_BXAB", "SUPERVISOR", 4);
								func_400("DS1_03b", 1);
							}
						}
					}
					if ((ENTITY::DOES_ENTITY_EXIST(Local_5394[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_6135)) && ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
					{
						if ((!PED::IS_PED_INJURED(Local_5394[0 /*16*/]) && !PED::IS_PED_INJURED(iLocal_6135)) && !PED::IS_PED_INJURED(iLocal_6134))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5345))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5345) == 1f)
								{
									uLocal_5345 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5963, Local_5963.f_3, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5394[0 /*16*/], uLocal_5345, "missheistdockssetup1ig_2_p1@new_structure", "wait_loop_supervisor", 4f, -8f, 1, 16, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5345, 1);
									Local_5394[0 /*16*/].f_4++;
								}
							}
						}
					}
					break;
				
				case 2:
					if ((ENTITY::DOES_ENTITY_EXIST(Local_5394[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_6135)) && ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
					{
						if ((!PED::IS_PED_INJURED(Local_5394[0 /*16*/]) && !PED::IS_PED_INJURED(iLocal_6135)) && !PED::IS_PED_INJURED(iLocal_6134))
						{
							if (func_580(iLocal_6135, Local_5895[1 /*3*/], fLocal_5935[1], 0.2f, 0.2f, 2f, 360f, 1) && func_580(iLocal_6134, Local_5841[1 /*3*/], fLocal_5881[1], 0.2f, 0.2f, 2f, 360f, 1))
							{
								if (!func_403("DS1_03c"))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_6997, 1))
										{
											if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_03c", 8, 0, 0, 0))
											{
												RECORDING::_0x293220DA1B46CEBC(2f, 7f, 4);
												func_400("DS1_03c", 1);
											}
										}
									}
								}
								else
								{
									uLocal_5346 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5963, Local_5963.f_3, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5394[0 /*16*/], uLocal_5346, "missheistdockssetup1ig_2_p1@new_structure", "push_guy_back_supervisor", 4f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6135, uLocal_5346, "missheistdockssetup1ig_2_p1@new_structure", "push_guy_back_wade", 4f, -8f, 1, 16, 4f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5346, "missheistdockssetup1ig_2_p1@new_structure", "push_guy_back_floyd", 4f, -8f, 1, 16, 4f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5346, 0);
									Local_5394[0 /*16*/].f_4++;
								}
							}
						}
					}
					break;
				
				case 3:
					if ((ENTITY::DOES_ENTITY_EXIST(Local_5394[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_6135)) && ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
					{
						if ((!PED::IS_PED_INJURED(Local_5394[0 /*16*/]) && !PED::IS_PED_INJURED(iLocal_6135)) && !PED::IS_PED_INJURED(iLocal_6134))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5346))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5346) > 0.7f)
								{
									OBJECT::_DOOR_CONTROL(joaat("p_cut_door_02"), -63.19f, -2519.27f, 7.79f, 1, 0f, 0f, 0f);
									STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@end_idle");
									Local_5394[0 /*16*/].f_4++;
								}
							}
						}
					}
					break;
				
				case 4:
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_2_p1@end_idle"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
						{
							if (!PED::IS_PED_INJURED(iLocal_6134))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5346))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5346) == 1f)
									{
										if (iLocal_7196 == 3)
										{
											uLocal_5346 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5963, Local_5963.f_3, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5346, "missheistdockssetup1ig_2_p1@end_idle", "supervisor_exitdoor_endidle_floyd", 8f, -4f, 1, 0, 1148846080, 0);
											PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5346, 1);
											STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
											iLocal_5949[1] = 1;
											Local_5394[0 /*16*/].f_4++;
										}
										else if (iLocal_7196 == 4)
										{
											if (iLocal_6034 < 3)
											{
												uLocal_5346 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5963, Local_5963.f_3, 2);
												TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6134, uLocal_5346, "missheistdockssetup1ig_2_p1@end_idle", "supervisor_exitdoor_endidle_floyd", 8f, -4f, 1, 0, 1148846080, 0);
												PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5346, 1);
												STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
												iLocal_5949[1] = 1;
												Local_5394[0 /*16*/].f_4++;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 5:
					break;
				}
			}
	}
	if (!func_740(2))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_5772[0 /*16*/]))
		{
			if (iLocal_7196 > 2)
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_4@start_idle");
				STREAMING::REQUEST_MODEL(Local_5772[0 /*16*/].f_2);
				STREAMING::REQUEST_MODEL(Local_5772[1 /*16*/].f_2);
				STREAMING::REQUEST_MODEL(Local_5772[2 /*16*/].f_2);
				if (((STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_4@start_idle") && STREAMING::HAS_MODEL_LOADED(Local_5772[0 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_5772[1 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_5772[2 /*16*/].f_2))
				{
					Local_5772[0 /*16*/] = func_705(Local_5772[0 /*16*/].f_2, Local_5772[0 /*16*/].f_12, Local_5772[0 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
					Local_5772[1 /*16*/] = func_705(Local_5772[1 /*16*/].f_2, Local_5772[1 /*16*/].f_12, Local_5772[0 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
					Local_5772[2 /*16*/] = func_705(Local_5772[2 /*16*/].f_2, Local_5772[2 /*16*/].f_12, Local_5772[0 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
					func_726(&Local_5772, "Floyd Grabs Package");
				}
			}
		}
		else
		{
			PED::SET_PED_CAPSULE(Local_5772[0 /*16*/], 0.4f);
			PED::SET_PED_CAPSULE(Local_5772[1 /*16*/], 0.7f);
			PED::SET_PED_CAPSULE(Local_5772[2 /*16*/], 0.4f);
			switch (Local_5772[0 /*16*/].f_4)
			{
				case 0:
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_4@start_idle"))
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_5772[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5772[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5772[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
						{
							if (((!PED::IS_PED_INJURED(Local_5772[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5772[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5772[2 /*16*/])) && !PED::IS_PED_INJURED(iLocal_6134))
							{
								uLocal_5372 = PED::CREATE_SYNCHRONIZED_SCENE(-88.341f, -2502.575f, 5.011f, 0f, 0f, -32.844f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5772[0 /*16*/], uLocal_5372, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_DockWorker1", 8f, -8f, 1, 16, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5772[1 /*16*/], uLocal_5372, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_DockWorker2", 8f, -8f, 1, 16, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5772[2 /*16*/], uLocal_5372, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_DockWorker3", 8f, -8f, 1, 16, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5372, 1);
								Local_5772[0 /*16*/].f_4++;
							}
						}
					}
					break;
				
				case 1:
					if (iLocal_7196 == 4)
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_5772[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5772[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5772[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
						{
							if (func_403("FLOYD SEEN BOAT"))
							{
								if (((!PED::IS_PED_INJURED(Local_5772[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5772[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5772[2 /*16*/])) && !PED::IS_PED_INJURED(iLocal_6134))
								{
									if ((!ENTITY::IS_ENTITY_ON_SCREEN(Local_5772[0 /*16*/]) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_5772[1 /*16*/])) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_5772[2 /*16*/]))
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_5772[0 /*16*/], -4f, 1);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_5772[1 /*16*/], -4f, 1);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_5772[2 /*16*/], -4f, 1);
										TASK::CLEAR_PED_TASKS(Local_5772[0 /*16*/]);
										TASK::CLEAR_PED_TASKS(Local_5772[1 /*16*/]);
										TASK::CLEAR_PED_TASKS(Local_5772[2 /*16*/]);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5772[0 /*16*/]));
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5772[1 /*16*/]));
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5772[2 /*16*/]));
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_4@start_idle");
										iLocal_5949[2] = 1;
									}
								}
							}
						}
					}
					break;
				}
			}
	}
	if (!func_740(5))
	{
		if (iLocal_5821[5])
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_5574[0 /*16*/]))
			{
				if (iLocal_7196 > 2)
				{
					STREAMING::REQUEST_MODEL(Local_5574[0 /*16*/].f_2);
					STREAMING::REQUEST_MODEL(Local_5574[1 /*16*/].f_2);
					STREAMING::REQUEST_MODEL(Local_5574[2 /*16*/].f_2);
					if ((STREAMING::HAS_MODEL_LOADED(Local_5574[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(Local_5574[1 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_5574[2 /*16*/].f_2))
					{
						Local_5574[0 /*16*/] = func_705(Local_5574[0 /*16*/].f_2, Local_5574[0 /*16*/].f_12, Local_5574[0 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
						Local_5574[1 /*16*/] = func_705(Local_5574[1 /*16*/].f_2, Local_5574[1 /*16*/].f_12, Local_5574[1 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
						PED::SET_PED_COMPONENT_VARIATION(Local_5574[1 /*16*/], 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5574[1 /*16*/], 1, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5574[1 /*16*/], 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5574[1 /*16*/], 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5574[1 /*16*/], 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5574[1 /*16*/], 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5574[1 /*16*/], 6, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5574[1 /*16*/], 7, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5574[1 /*16*/], 8, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5574[1 /*16*/], 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5574[1 /*16*/], 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5574[1 /*16*/], 11, 0, 0, 0);
						PED::SET_PED_PROP_INDEX(Local_5574[1 /*16*/], 0, 0, 0, false);
						Local_5574[2 /*16*/] = func_705(Local_5574[2 /*16*/].f_2, Local_5574[2 /*16*/].f_12, Local_5574[2 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
						func_726(&Local_5574, "Working on pipe");
					}
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_5991, 1) < 100f)
			{
				switch (Local_5574[0 /*16*/].f_4)
				{
					case 0:
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_10@base");
						Local_5574[0 /*16*/].f_4++;
						break;
					
					case 1:
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_10@base"))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_5574[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5574[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5574[2 /*16*/]))
							{
								if ((!PED::IS_PED_INJURED(Local_5574[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5574[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5574[2 /*16*/]))
								{
									uLocal_5347 = PED::CREATE_SYNCHRONIZED_SCENE(-68.32f, -2531.518f, 5.06f, 0f, 0f, 3.64f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[0 /*16*/], uLocal_5347, "missheistdockssetup1ig_10@base", "talk_pipe_base_worker1", 1000f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[1 /*16*/], uLocal_5347, "missheistdockssetup1ig_10@base", "talk_pipe_base_worker2", 1000f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[2 /*16*/], uLocal_5347, "missheistdockssetup1ig_10@base", "talk_pipe_base_worker3", 1000f, -8f, 1, 16, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5347, 1);
									Local_5574[0 /*16*/].f_4++;
								}
							}
						}
						break;
					
					case 2:
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_5991, 1) < 20f)
						{
							STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_10@laugh");
							if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_10@laugh"))
							{
								if ((ENTITY::DOES_ENTITY_EXIST(Local_5574[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5574[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5574[2 /*16*/]))
								{
									if ((!PED::IS_PED_INJURED(Local_5574[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5574[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5574[2 /*16*/]))
									{
										uLocal_5348 = PED::CREATE_SYNCHRONIZED_SCENE(-68.32f, -2531.518f, 5.06f, 0f, 0f, 3.64f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[0 /*16*/], uLocal_5348, "missheistdockssetup1ig_10@laugh", "laugh_pipe_worker1", 8f, -8f, 1, 16, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[1 /*16*/], uLocal_5348, "missheistdockssetup1ig_10@laugh", "laugh_pipe_worker2", 8f, -8f, 1, 16, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[2 /*16*/], uLocal_5348, "missheistdockssetup1ig_10@laugh", "laugh_pipe_worker3", 8f, -8f, 1, 16, 1148846080, 0);
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@laugh");
										STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_10@idle_b");
										Local_5574[0 /*16*/].f_4++;
									}
								}
							}
						}
						break;
					
					case 3:
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_10@idle_b"))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_5574[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5574[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5574[2 /*16*/]))
							{
								if ((!PED::IS_PED_INJURED(Local_5574[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5574[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5574[2 /*16*/]))
								{
									PED::SET_PED_CAPSULE(Local_5574[0 /*16*/], 0.5f);
									PED::SET_PED_CAPSULE(Local_5574[1 /*16*/], 0.5f);
									PED::SET_PED_CAPSULE(Local_5574[2 /*16*/], 0.5f);
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5348))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5348) == 1f)
										{
											uLocal_5349 = PED::CREATE_SYNCHRONIZED_SCENE(-68.32f, -2531.518f, 5.06f, 0f, 0f, 3.64f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[0 /*16*/], uLocal_5349, "missheistdockssetup1ig_10@idle_b", "talk_pipe_b_worker1", 1000f, -8f, 1, 16, 1148846080, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[1 /*16*/], uLocal_5349, "missheistdockssetup1ig_10@idle_b", "talk_pipe_b_worker2", 1000f, -8f, 1, 16, 1148846080, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[2 /*16*/], uLocal_5349, "missheistdockssetup1ig_10@idle_b", "talk_pipe_b_worker3", 1000f, -8f, 1, 16, 1148846080, 0);
											STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_b");
											STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_10@idle_c");
											Local_5574[0 /*16*/].f_4++;
										}
									}
								}
							}
						}
						break;
					
					case 4:
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_10@idle_c"))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_5574[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5574[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5574[2 /*16*/]))
							{
								if ((!PED::IS_PED_INJURED(Local_5574[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5574[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5574[2 /*16*/]))
								{
									PED::SET_PED_CAPSULE(Local_5574[0 /*16*/], 0.5f);
									PED::SET_PED_CAPSULE(Local_5574[1 /*16*/], 0.5f);
									PED::SET_PED_CAPSULE(Local_5574[2 /*16*/], 0.5f);
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5349))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5349) == 1f)
										{
											uLocal_5350 = PED::CREATE_SYNCHRONIZED_SCENE(-68.32f, -2531.518f, 5.06f, 0f, 0f, 3.64f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[0 /*16*/], uLocal_5350, "missheistdockssetup1ig_10@idle_c", "talk_pipe_c_worker1", 1000f, -8f, 1, 16, 1148846080, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[1 /*16*/], uLocal_5350, "missheistdockssetup1ig_10@idle_c", "talk_pipe_c_worker2", 1000f, -8f, 1, 16, 1148846080, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[2 /*16*/], uLocal_5350, "missheistdockssetup1ig_10@idle_c", "talk_pipe_c_worker3", 1000f, -8f, 1, 16, 1148846080, 0);
											STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_c");
											STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_10@idle_d");
											Local_5574[0 /*16*/].f_4++;
										}
									}
								}
							}
						}
						break;
					
					case 5:
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_10@idle_d"))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_5574[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5574[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5574[2 /*16*/]))
							{
								if ((!PED::IS_PED_INJURED(Local_5574[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5574[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5574[2 /*16*/]))
								{
									PED::SET_PED_CAPSULE(Local_5574[0 /*16*/], 0.5f);
									PED::SET_PED_CAPSULE(Local_5574[1 /*16*/], 0.5f);
									PED::SET_PED_CAPSULE(Local_5574[2 /*16*/], 0.5f);
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5350))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5350) == 1f)
										{
											uLocal_5351 = PED::CREATE_SYNCHRONIZED_SCENE(-68.32f, -2531.518f, 5.06f, 0f, 0f, 3.64f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[0 /*16*/], uLocal_5351, "missheistdockssetup1ig_10@idle_d", "talk_pipe_d_worker1", 1000f, -8f, 1, 16, 1148846080, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[1 /*16*/], uLocal_5351, "missheistdockssetup1ig_10@idle_d", "talk_pipe_d_worker2", 1000f, -8f, 1, 16, 1148846080, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_5574[2 /*16*/], uLocal_5351, "missheistdockssetup1ig_10@idle_d", "talk_pipe_d_worker3", 1000f, -8f, 1, 16, 1148846080, 0);
											PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5351, 1);
											Local_5574[0 /*16*/].f_4++;
										}
									}
								}
							}
						}
						break;
					
					case 6:
						if ((!PED::IS_PED_INJURED(Local_5574[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5574[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5574[2 /*16*/]))
						{
							if ((!ENTITY::IS_ENTITY_ON_SCREEN(Local_5574[0 /*16*/]) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_5574[1 /*16*/])) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_5574[2 /*16*/]))
							{
								if (!PED::IS_PED_INJURED(Local_5574[0 /*16*/]))
								{
									TASK::CLEAR_PED_TASKS(Local_5574[0 /*16*/]);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5574[0 /*16*/]));
								}
								if (!PED::IS_PED_INJURED(Local_5574[1 /*16*/]))
								{
									TASK::CLEAR_PED_TASKS(Local_5574[1 /*16*/]);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5574[1 /*16*/]));
								}
								if (!PED::IS_PED_INJURED(Local_5574[2 /*16*/]))
								{
									TASK::CLEAR_PED_TASKS(Local_5574[2 /*16*/]);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_5574[2 /*16*/]));
								}
								STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_d");
								iLocal_5949[5] = 1;
							}
						}
						break;
					}
				}
			}
	}
	if (iLocal_5821[3])
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_5707[0 /*16*/]))
		{
			STREAMING::REQUEST_MODEL(Local_5707[0 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_5707[1 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_5707[2 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_5707[3 /*16*/].f_2);
			if (((STREAMING::HAS_MODEL_LOADED(Local_5707[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(Local_5707[1 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_5707[2 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_5707[3 /*16*/].f_2))
			{
				Local_5707[0 /*16*/] = func_705(Local_5707[0 /*16*/].f_2, Local_5707[0 /*16*/].f_12, Local_5707[0 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				Local_5707[1 /*16*/] = func_705(Local_5707[1 /*16*/].f_2, Local_5707[1 /*16*/].f_12, Local_5707[1 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				Local_5707[2 /*16*/] = func_705(Local_5707[2 /*16*/].f_2, Local_5707[2 /*16*/].f_12, Local_5707[2 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				Local_5707[3 /*16*/] = func_705(Local_5707[3 /*16*/].f_2, Local_5707[3 /*16*/].f_12, Local_5707[3 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				func_726(&Local_5707, "Gantry guys dynamic");
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_5970, 1) < 100f)
		{
			switch (Local_5707[0 /*16*/].f_4)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@base");
					Local_5707[0 /*16*/].f_4++;
					break;
				
				case 1:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@base");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_12@base"))
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_5707[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5707[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5707[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5707[3 /*16*/]))
						{
							if (((!PED::IS_PED_INJURED(Local_5707[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5707[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5707[2 /*16*/])) && !PED::IS_PED_INJURED(Local_5707[3 /*16*/]))
							{
								uLocal_5357 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5970, Local_5970.f_3, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[0 /*16*/], uLocal_5357, "missheistdockssetup1ig_12@base", "TALK_Gantry_Idle_Base_Worker1", 1000f, -8f, 1, 16, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[1 /*16*/], uLocal_5357, "missheistdockssetup1ig_12@base", "TALK_Gantry_Idle_Base_Worker2", 1000f, -8f, 1, 16, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[2 /*16*/], uLocal_5357, "missheistdockssetup1ig_12@base", "TALK_Gantry_Idle_Base_Worker3", 1000f, -8f, 1, 16, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[3 /*16*/], uLocal_5357, "missheistdockssetup1ig_12@base", "TALK_Gantry_Idle_Base_Worker4", 1000f, -8f, 1, 16, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5357, 1);
								Local_5707[0 /*16*/].f_4++;
							}
						}
					}
					break;
				
				case 2:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_5970, 1) < 50f)
					{
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@idle_a");
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_12@idle_a"))
						{
							if (((ENTITY::DOES_ENTITY_EXIST(Local_5707[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5707[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5707[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5707[3 /*16*/]))
							{
								if (((!PED::IS_PED_INJURED(Local_5707[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5707[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5707[2 /*16*/])) && !PED::IS_PED_INJURED(Local_5707[3 /*16*/]))
								{
									uLocal_5358 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5970, Local_5970.f_3, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[0 /*16*/], uLocal_5358, "missheistdockssetup1ig_12@idle_a", "TALK_Gantry_Idle_A_Worker1", 4f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[1 /*16*/], uLocal_5358, "missheistdockssetup1ig_12@idle_a", "TALK_Gantry_Idle_A_Worker2", 4f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[2 /*16*/], uLocal_5358, "missheistdockssetup1ig_12@idle_a", "TALK_Gantry_Idle_A_Worker3", 4f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[3 /*16*/], uLocal_5358, "missheistdockssetup1ig_12@idle_a", "TALK_Gantry_Idle_A_Worker4", 4f, -8f, 1, 16, 1148846080, 0);
									STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@idle_b");
									Local_5707[0 /*16*/].f_4++;
								}
							}
						}
					}
					break;
				
				case 3:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@idle_b");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_12@idle_b"))
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_5707[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5707[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5707[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5707[3 /*16*/]))
						{
							if (((!PED::IS_PED_INJURED(Local_5707[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5707[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5707[2 /*16*/])) && !PED::IS_PED_INJURED(Local_5707[3 /*16*/]))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5358) == 1f)
								{
									uLocal_5359 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5970, Local_5970.f_3, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[0 /*16*/], uLocal_5359, "missheistdockssetup1ig_12@idle_b", "TALK_Gantry_Idle_B_Worker1", 8f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[1 /*16*/], uLocal_5359, "missheistdockssetup1ig_12@idle_b", "TALK_Gantry_Idle_B_Worker2", 8f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[2 /*16*/], uLocal_5359, "missheistdockssetup1ig_12@idle_b", "TALK_Gantry_Idle_B_Worker3", 8f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[3 /*16*/], uLocal_5359, "missheistdockssetup1ig_12@idle_b", "TALK_Gantry_Idle_B_Worker4", 8f, -8f, 1, 16, 1148846080, 0);
									STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@idle_c");
									Local_5707[0 /*16*/].f_4++;
								}
							}
						}
					}
					break;
				
				case 4:
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_b");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_12@idle_c"))
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_5707[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5707[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5707[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5707[3 /*16*/]))
						{
							if (((!PED::IS_PED_INJURED(Local_5707[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5707[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5707[2 /*16*/])) && !PED::IS_PED_INJURED(Local_5707[3 /*16*/]))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5359) == 1f)
								{
									uLocal_5360 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5970, Local_5970.f_3, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[0 /*16*/], uLocal_5360, "missheistdockssetup1ig_12@idle_c", "TALK_Gantry_Idle_C_Worker1", 8f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[1 /*16*/], uLocal_5360, "missheistdockssetup1ig_12@idle_c", "TALK_Gantry_Idle_C_Worker2", 8f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[2 /*16*/], uLocal_5360, "missheistdockssetup1ig_12@idle_c", "TALK_Gantry_Idle_C_Worker3", 8f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5707[3 /*16*/], uLocal_5360, "missheistdockssetup1ig_12@idle_c", "TALK_Gantry_Idle_C_Worker4", 8f, -8f, 1, 16, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5360, 1);
									Local_5707[0 /*16*/].f_4++;
								}
							}
						}
					}
					break;
				
				case 5:
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_a");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_c");
					break;
				}
			}
	}
	if (iLocal_5821[4])
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_5493[4 /*16*/]))
		{
			STREAMING::REQUEST_MODEL(Local_5493[0 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_5493[1 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_5493[2 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_5493[3 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_5493[4 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(joaat("buffalo"));
			if (((((STREAMING::HAS_MODEL_LOADED(Local_5493[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(Local_5493[1 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_5493[2 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_5493[3 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_5493[4 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_5385[0 /*8*/].f_1))
			{
				Local_5385[0 /*8*/] = func_739(joaat("buffalo"), Local_5385[0 /*8*/].f_4, Local_5385[0 /*8*/].f_7);
				if (!Local_5385[0 /*8*/].f_2)
				{
					Local_5385[0 /*8*/].f_2 = 1;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_5385[0 /*8*/].f_1);
				Local_5493[0 /*16*/] = func_705(Local_5493[0 /*16*/].f_2, Local_5493[0 /*16*/].f_7, Local_5493[0 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				Local_5493[1 /*16*/] = func_705(Local_5493[1 /*16*/].f_2, Local_5493[1 /*16*/].f_7, Local_5493[1 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				Local_5493[2 /*16*/] = func_705(Local_5493[2 /*16*/].f_2, Local_5493[2 /*16*/].f_7, Local_5493[2 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				Local_5493[3 /*16*/] = func_705(Local_5493[3 /*16*/].f_2, Local_5493[3 /*16*/].f_7, Local_5493[3 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				Local_5493[4 /*16*/] = func_705(Local_5493[4 /*16*/].f_2, Local_5493[4 /*16*/].f_7, Local_5493[4 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				func_726(&Local_5493, "Show off car");
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5385[0 /*8*/], 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(Local_5385[0 /*8*/], 1), 1) < 100f)
			{
				if (Local_5493[0 /*16*/].f_4 > 1)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(Local_5385[0 /*8*/], 1), 1) > 20f)
					{
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_a");
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_b");
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1showcar@base");
						Local_5493[0 /*16*/].f_4 = 1;
					}
				}
				switch (Local_5493[0 /*16*/].f_4)
				{
					case 0:
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1showcar@base");
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5385[0 /*8*/], 0))
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_5385[0 /*8*/], 0);
							ENTITY::FREEZE_ENTITY_POSITION(Local_5385[0 /*8*/], 1);
						}
						Local_5493[0 /*16*/].f_4++;
						break;
					
					case 1:
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1showcar@base"))
						{
							if ((((ENTITY::DOES_ENTITY_EXIST(Local_5493[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5493[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5493[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5493[3 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5493[4 /*16*/]))
							{
								if ((((!PED::IS_PED_INJURED(Local_5493[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5493[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5493[2 /*16*/])) && !PED::IS_PED_INJURED(Local_5493[3 /*16*/])) && !PED::IS_PED_INJURED(Local_5493[4 /*16*/]))
								{
									uLocal_5361 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5984, Local_5984.f_3, 2);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5385[0 /*8*/], 0))
									{
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5361, Local_5385[0 /*8*/], -1);
									}
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[0 /*16*/], uLocal_5361, "missheistdockssetup1showcar@base", "base_1", 1000f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[1 /*16*/], uLocal_5361, "missheistdockssetup1showcar@base", "base_2", 1000f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[2 /*16*/], uLocal_5361, "missheistdockssetup1showcar@base", "base_3", 1000f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[3 /*16*/], uLocal_5361, "missheistdockssetup1showcar@base", "base_4", 1000f, -8f, 1, 16, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[4 /*16*/], uLocal_5361, "missheistdockssetup1showcar@base", "base_5", 1000f, -8f, 1, 16, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5361, 1);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_5493[0 /*16*/], Local_5385[0 /*8*/], 0);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_5493[1 /*16*/], Local_5385[0 /*8*/], 0);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_5493[2 /*16*/], Local_5385[0 /*8*/], 0);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_5493[3 /*16*/], Local_5385[0 /*8*/], 0);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_5493[4 /*16*/], Local_5385[0 /*8*/], 0);
									Local_5493[0 /*16*/].f_4++;
								}
							}
						}
						break;
					
					case 2:
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(Local_5385[0 /*8*/], 1), 1) < 15f)
						{
							STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1showcar@idle_a");
							Local_5493[0 /*16*/].f_4++;
						}
						break;
					
					case 3:
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1showcar@idle_a");
						if (((((STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1showcar@idle_a") && ENTITY::DOES_ENTITY_EXIST(Local_5493[0 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5493[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5493[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5493[3 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5493[4 /*16*/]))
						{
							if ((((!PED::IS_PED_INJURED(Local_5493[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5493[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5493[2 /*16*/])) && !PED::IS_PED_INJURED(Local_5493[3 /*16*/])) && !PED::IS_PED_INJURED(Local_5493[4 /*16*/]))
							{
								uLocal_5362 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5984, Local_5984.f_3, 2);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5385[0 /*8*/], 0))
								{
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5362, Local_5385[0 /*8*/], -1);
								}
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[0 /*16*/], uLocal_5362, "missheistdockssetup1showcar@idle_a", "idle_a_1", 1000f, -8f, 1, 16, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[1 /*16*/], uLocal_5362, "missheistdockssetup1showcar@idle_a", "idle_a_2", 1000f, -8f, 1, 16, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[2 /*16*/], uLocal_5362, "missheistdockssetup1showcar@idle_a", "idle_a_3", 1000f, -8f, 1, 16, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[3 /*16*/], uLocal_5362, "missheistdockssetup1showcar@idle_a", "idle_a_4", 1000f, -8f, 1, 16, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[4 /*16*/], uLocal_5362, "missheistdockssetup1showcar@idle_a", "idle_a_5", 1000f, -8f, 1, 16, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5362, 1);
								STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_a");
								STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1showcar@idle_b");
								Local_5493[0 /*16*/].f_4++;
							}
						}
						break;
					
					case 4:
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1showcar@idle_b");
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1showcar@idle_b"))
						{
							if ((((ENTITY::DOES_ENTITY_EXIST(Local_5493[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5493[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5493[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5493[3 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5493[4 /*16*/]))
							{
								if ((((!PED::IS_PED_INJURED(Local_5493[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5493[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5493[2 /*16*/])) && !PED::IS_PED_INJURED(Local_5493[3 /*16*/])) && !PED::IS_PED_INJURED(Local_5493[4 /*16*/]))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5362) == 1f)
									{
										uLocal_5363 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5984, Local_5984.f_3, 2);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5385[0 /*8*/], 0))
										{
											PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_5363, Local_5385[0 /*8*/], -1);
										}
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[0 /*16*/], uLocal_5363, "missheistdockssetup1showcar@idle_b", "idle_b_1", 1000f, -8f, 1, 16, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[1 /*16*/], uLocal_5363, "missheistdockssetup1showcar@idle_b", "idle_b_2", 1000f, -8f, 1, 16, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[2 /*16*/], uLocal_5363, "missheistdockssetup1showcar@idle_b", "idle_b_3", 1000f, -8f, 1, 16, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[3 /*16*/], uLocal_5363, "missheistdockssetup1showcar@idle_b", "idle_b_4", 1000f, -8f, 1, 16, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5493[4 /*16*/], uLocal_5363, "missheistdockssetup1showcar@idle_b", "idle_b_5", 1000f, -8f, 1, 16, 1148846080, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5363, 1);
										Local_5493[0 /*16*/].f_4++;
									}
								}
							}
						}
						break;
					
					case 5:
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_b");
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_a");
						Local_5493[0 /*16*/].f_4++;
						break;
				}
			}
			else
			{
				STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_b");
				STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_a");
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_5623[0 /*16*/]))
	{
		STREAMING::REQUEST_MODEL(Local_5623[0 /*16*/].f_2);
		STREAMING::REQUEST_MODEL(joaat("prop_weld_torch"));
		if (STREAMING::HAS_MODEL_LOADED(Local_5623[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(joaat("prop_weld_torch")))
		{
			if (Local_5623[0 /*16*/].f_4 < 1)
			{
				Local_5623[0 /*16*/] = func_705(Local_5623[0 /*16*/].f_2, Local_5623[0 /*16*/].f_7, Local_5623[0 /*16*/].f_10, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				Local_5623[0 /*16*/].f_6 = OBJECT::CREATE_OBJECT(joaat("prop_weld_torch"), -110.56f, -2463.63f, 5.04f, 1, 1, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_5623[0 /*16*/], 16);
				func_726(&Local_5623, "Welder");
			}
		}
	}
	else if (iLocal_5821[6])
	{
		switch (Local_5623[0 /*16*/].f_4)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -102.1558f, -2475.921f, 5.0203f, 10f, 10f, 10f, 0, 1, 0))
				{
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_3@enter");
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_3@talk");
					Local_5623[0 /*16*/].f_4++;
				}
				break;
			
			case 1:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_3@enter"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_5623[0 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_5623[0 /*16*/]))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5623[0 /*16*/]))
							{
								uLocal_5369 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5998, Local_5998.f_3, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5623[0 /*16*/], uLocal_5369, "missheistdockssetup1ig_3@enter", "welding_enter_dockworker", 8f, -8f, 5, 16, 1148846080, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_5623[0 /*16*/].f_6, Local_5623[0 /*16*/], PED::GET_PED_BONE_INDEX(Local_5623[0 /*16*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_3@enter");
								Local_5623[0 /*16*/].f_4++;
							}
						}
					}
				}
				break;
			
			case 2:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_3@talk"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_5623[0 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_5623[0 /*16*/]))
						{
							PED::SET_PED_CAPSULE(Local_5623[0 /*16*/], 0.4f);
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5369))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_5369) == 1f)
								{
									uLocal_5369 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5998, Local_5998.f_3, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5623[0 /*16*/], uLocal_5369, "missheistdockssetup1ig_3@talk", "oh_hey_vin_dockworker", 8f, -8f, 1, 16, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5369, 1);
									STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_3@talk");
									Local_5623[0 /*16*/].f_4++;
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (!PED::IS_PED_INJURED(Local_5623[0 /*16*/]))
				{
					PED::SET_PED_CAPSULE(Local_5623[0 /*16*/], 0.4f);
				}
				break;
			}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_5640[0 /*16*/]))
	{
		STREAMING::REQUEST_MODEL(Local_5640[0 /*16*/].f_2);
		STREAMING::REQUEST_MODEL(Local_5640[1 /*16*/].f_2);
		if (STREAMING::HAS_MODEL_LOADED(Local_5640[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(Local_5640[1 /*16*/].f_2))
		{
			if (Local_5640[0 /*16*/].f_4 < 0)
			{
				Local_5640[0 /*16*/] = func_705(Local_5640[0 /*16*/].f_2, Local_5640[0 /*16*/].f_7, Local_5640[0 /*16*/].f_10, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				Local_5640[1 /*16*/] = func_705(Local_5640[1 /*16*/].f_2, Local_5640[1 /*16*/].f_7, Local_5640[1 /*16*/].f_10, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				func_726(&Local_5640, "Dockworkers talking by crates");
			}
		}
	}
	else if (iLocal_5821[7])
	{
		if (Local_5640[0 /*16*/].f_4 == 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_5640[0 /*16*/].f_7, 1) < 20f)
			{
				Local_5640[0 /*16*/].f_4 = 1;
			}
			else
			{
				STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_5@base");
			}
		}
		switch (Local_5640[0 /*16*/].f_4)
		{
			case 0:
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_5@base");
				Local_5640[0 /*16*/].f_4++;
				break;
			
			case 2:
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_5@base");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_5@base"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_5640[1 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5640[0 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_5640[1 /*16*/]) && !PED::IS_PED_INJURED(Local_5640[0 /*16*/]))
						{
							uLocal_5364 = PED::CREATE_SYNCHRONIZED_SCENE(-110.402f, -2481.259f, 6.018f, 0f, 0f, -122f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_5640[0 /*16*/], uLocal_5364, "missheistdockssetup1ig_5@base", "workers_talking_base_dockworker1", 8f, -8f, 1, 16, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5364, 1);
							uLocal_5365 = PED::CREATE_SYNCHRONIZED_SCENE(-109.253f, -2481.959f, 6.018f, 0f, 0f, 26.64f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_5640[1 /*16*/], uLocal_5365, "missheistdockssetup1ig_5@base", "workers_talking_base_dockworker2", 8f, -8f, 1, 16, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5365, 1);
							Local_5640[0 /*16*/].f_4++;
						}
					}
				}
				break;
			
			case 3:
				break;
			}
	}
	if (iLocal_5821[8])
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_5673[0 /*16*/]))
		{
			if (iLocal_7196 > 2)
			{
				STREAMING::REQUEST_MODEL(Local_5673[0 /*16*/].f_2);
				if (STREAMING::HAS_MODEL_LOADED(Local_5673[0 /*16*/].f_2))
				{
					Local_5673[0 /*16*/] = func_705(Local_5673[0 /*16*/].f_2, Local_5673[0 /*16*/].f_7, Local_5673[0 /*16*/].f_10, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
					func_726(&Local_5673, "Supervisor A");
					PED::SET_PED_COMPONENT_VARIATION(Local_5673[0 /*16*/], 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5673[0 /*16*/], 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5673[0 /*16*/], 4, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5673[0 /*16*/], 8, 0, 0, 0);
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_6005, 1) < 50f)
		{
			switch (Local_5673[0 /*16*/].f_4)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@start_idle");
					Local_5673[0 /*16*/].f_4++;
					break;
				
				case 1:
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@start_idle"))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6153[1]))
						{
							uLocal_6153[1] = OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), -131.08f, -2423.25f, 8f, 1, 1, 0);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6164[1]))
						{
							uLocal_6164[1] = OBJECT::CREATE_OBJECT(joaat("prop_pencil_01"), -131.08f, -2423.25f, 8f, 1, 1, 0);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(Local_5673[0 /*16*/]))
						{
							if (!PED::IS_PED_INJURED(Local_5673[0 /*16*/]))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_6164[1], Local_5673[0 /*16*/], PED::GET_PED_BONE_INDEX(Local_5673[0 /*16*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_6153[1], Local_5673[0 /*16*/], PED::GET_PED_BONE_INDEX(Local_5673[0 /*16*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
								TASK::TASK_PLAY_ANIM(Local_5673[0 /*16*/], "missheistdockssetup1ig_9@start_idle", "forklift_supervise_idlebase_supervisor", 8f, -8f, -1, 1, 0, 0, 0, 0);
								PED::SET_PED_CAN_RAGDOLL(Local_5673[0 /*16*/], 1);
								Local_5673[0 /*16*/].f_4++;
							}
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
	if (iLocal_5821[9])
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_5690[0 /*16*/]))
		{
			if (iLocal_7196 > 2 && iLocal_7196 < 5)
			{
				STREAMING::REQUEST_MODEL(Local_5690[0 /*16*/].f_2);
				if (STREAMING::HAS_MODEL_LOADED(Local_5690[0 /*16*/].f_2))
				{
					if (func_738(Local_6012))
					{
						Local_5690[0 /*16*/] = func_705(Local_5690[0 /*16*/].f_2, Local_5690[0 /*16*/].f_7, Local_5640[0 /*16*/].f_10, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
						func_726(&Local_5673, "Supervisor B");
					}
					else
					{
						func_736(9);
					}
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_6012, 1) < 50f)
		{
			switch (Local_5690[0 /*16*/].f_4)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
					Local_5690[0 /*16*/].f_4++;
					break;
				
				case 1:
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_2_p1@new_structure"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_5690[0 /*16*/]))
						{
							if (!PED::IS_PED_INJURED(Local_5690[0 /*16*/]))
							{
								uLocal_5368 = PED::CREATE_SYNCHRONIZED_SCENE(Local_6012, Local_6012.f_3, 2);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5368, 1);
								Local_5690[0 /*16*/].f_4++;
							}
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
	if (iLocal_5821[12])
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_5460[0 /*16*/]))
		{
			STREAMING::REQUEST_MODEL(Local_5460[0 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_5460[1 /*16*/].f_2);
			if (STREAMING::HAS_MODEL_LOADED(Local_5460[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(Local_5460[1 /*16*/].f_2))
			{
				Local_5460[0 /*16*/] = func_705(Local_5460[0 /*16*/].f_2, Local_5460[0 /*16*/].f_12, Local_5460[0 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				Local_5460[1 /*16*/] = func_705(Local_5460[1 /*16*/].f_2, Local_5460[1 /*16*/].f_12, Local_5460[1 /*16*/].f_15, iLocal_464, 200, 0, joaat("weapon_unarmed"), 26);
				func_726(&Local_5460, "Static Crane guys");
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_5977, 1) < 100f)
		{
			switch (Local_5460[0 /*16*/].f_4)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@base");
					Local_5460[0 /*16*/].f_4++;
					break;
				
				case 1:
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_12@base"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_5460[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5460[1 /*16*/]))
						{
							if (!PED::IS_PED_INJURED(Local_5460[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5460[1 /*16*/]))
							{
								uLocal_5370 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5977, Local_5977.f_3, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5460[0 /*16*/], uLocal_5370, "missheistdockssetup1ig_12@base", "talk_gantry_idle_base_worker2", 8f, -8f, 1, 16, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5460[1 /*16*/], uLocal_5370, "missheistdockssetup1ig_12@base", "talk_gantry_idle_base_worker1", 8f, -8f, 1, 16, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_5370, 1);
								Local_5460[0 /*16*/].f_4++;
							}
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
}

void func_736(int iParam0)//Position - 0x80780
{
	switch (iParam0)
	{
		case 1:
			if (!func_738(Local_5963))
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
				STREAMING::REQUEST_MODEL(joaat("s_m_m_dockwork_01"));
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_2_p1@new_structure") && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_dockwork_01")))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5345))
					{
						uLocal_5835[0] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
						uLocal_5835[1] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
						uLocal_5835[2] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
						uLocal_5371 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5963, Local_5963.f_3, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_5835[0], uLocal_5371, "missheistdockssetup1ig_2_p1@new_structure", "supervisor_exitdoor_startidle_supervisor", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_5835[1], uLocal_5371, "missheistdockssetup1ig_2_p1@new_structure", "supervisor_exitdoor_startidle_wade", 8f, -8f, 0, 16, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_5835[2], uLocal_5371, "missheistdockssetup1ig_2_p1@new_structure", "supervisor_exitdoor_startidle_floyd", 8f, -8f, 0, 16, 1148846080, 0);
					}
					else
					{
						if (!PED::IS_PED_INJURED(uLocal_5835[0]))
						{
							Local_5394[0 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[0], 1) };
							Local_5394[0 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_5835[0]);
							PED::DELETE_PED(&(uLocal_5835[0]));
						}
						if (!PED::IS_PED_INJURED(uLocal_5835[1]))
						{
							Local_5895[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[1], 1) };
							fLocal_5935[1] = ENTITY::GET_ENTITY_HEADING(uLocal_5835[1]);
							PED::DELETE_PED(&(uLocal_5835[1]));
						}
						if (!PED::IS_PED_INJURED(uLocal_5835[2]))
						{
							Local_5841[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[2], 1) };
							fLocal_5881[1] = ENTITY::GET_ENTITY_HEADING(uLocal_5835[2]);
							PED::DELETE_PED(&(uLocal_5835[2]));
						}
						Local_5963.f_6 = 1;
					}
				}
			}
			break;
		
		case 5:
			if (!func_738(Local_5963))
			{
				STREAMING::REQUEST_MODEL(joaat("s_m_m_dockwork_01"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_dockwork_01")))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5371))
					{
						uLocal_5835[0] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
						uLocal_5835[1] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
						uLocal_5835[2] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
						uLocal_5371 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5991, Local_5991.f_3, 2);
					}
					else
					{
						if (!PED::IS_PED_INJURED(uLocal_5835[0]))
						{
							Local_5574[0 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[0], 1) };
							Local_5574[0 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_5835[0]);
							PED::DELETE_PED(&(uLocal_5835[0]));
						}
						if (!PED::IS_PED_INJURED(uLocal_5835[1]))
						{
							Local_5574[1 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[1], 1) };
							Local_5574[1 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_5835[1]);
							PED::DELETE_PED(&(uLocal_5835[1]));
						}
						if (!PED::IS_PED_INJURED(uLocal_5835[2]))
						{
							Local_5574[2 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[2], 1) };
							Local_5574[2 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_5835[2]);
							PED::DELETE_PED(&(uLocal_5835[2]));
						}
						Local_5991.f_6 = 1;
					}
				}
			}
			break;
		
		case 11:
			if (!func_738(Local_6019))
			{
				STREAMING::REQUEST_MODEL(joaat("s_m_m_dockwork_01"));
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5371))
				{
					uLocal_5835[0] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
					uLocal_5835[1] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
					uLocal_5835[2] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
					uLocal_5371 = PED::CREATE_SYNCHRONIZED_SCENE(Local_6019, Local_6019.f_3, 2);
				}
				else
				{
					if (!PED::IS_PED_INJURED(uLocal_5835[0]))
					{
						Local_5411[0 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[0], 1) };
						Local_5411[0 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_5835[0]);
						PED::DELETE_PED(&(uLocal_5835[0]));
					}
					if (!PED::IS_PED_INJURED(uLocal_5835[1]))
					{
						Local_5411[1 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[1], 1) };
						Local_5411[1 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_5835[1]);
						PED::DELETE_PED(&(uLocal_5835[1]));
					}
					if (!PED::IS_PED_INJURED(uLocal_5835[2]))
					{
						Local_5411[2 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[2], 1) };
						Local_5411[2 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_5835[2]);
						PED::DELETE_PED(&(uLocal_5835[2]));
					}
					Local_6019.f_6 = 1;
				}
			}
			break;
		
		case 2:
			if (!func_738(Local_6026))
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_4@start_idle");
				STREAMING::REQUEST_MODEL(joaat("s_m_m_dockwork_01"));
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_4@start_idle") && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_dockwork_01")))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5371))
					{
						uLocal_5835[0] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
						uLocal_5835[1] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
						uLocal_5835[2] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
						uLocal_5835[3] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
						uLocal_5371 = PED::CREATE_SYNCHRONIZED_SCENE(Local_6026, Local_6026.f_3, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_5835[0], uLocal_5371, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_DockWorker1", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_5835[1], uLocal_5371, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_DockWorker2", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_5835[2], uLocal_5371, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_DockWorker3", 8f, -8f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_5835[3], uLocal_5371, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_Floyd", 8f, -8f, 0, 16, 1148846080, 0);
					}
					else
					{
						if (!PED::IS_PED_INJURED(uLocal_5835[0]))
						{
							Local_5772[0 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[0], 1) };
							Local_5772[0 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_5835[0]);
							PED::DELETE_PED(&(uLocal_5835[0]));
						}
						if (!PED::IS_PED_INJURED(uLocal_5835[1]))
						{
							Local_5772[1 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[1], 1) };
							Local_5772[1 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_5835[1]);
							PED::DELETE_PED(&(uLocal_5835[1]));
						}
						if (!PED::IS_PED_INJURED(uLocal_5835[2]))
						{
							Local_5772[2 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[2], 1) };
							Local_5772[2 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_5835[2]);
							PED::DELETE_PED(&(uLocal_5835[2]));
						}
						if (!PED::IS_PED_INJURED(uLocal_5835[3]))
						{
							Local_5841[2 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[3], 1) };
							fLocal_5881[2] = ENTITY::GET_ENTITY_HEADING(uLocal_5835[3]);
							PED::DELETE_PED(&(uLocal_5835[3]));
						}
						Local_6026.f_6 = 1;
					}
				}
			}
			break;
		
		case 6:
			if (!func_738(Local_5998))
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_3");
				STREAMING::REQUEST_MODEL(joaat("s_m_m_dockwork_01"));
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_3") && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_dockwork_01")))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_5371))
					{
						uLocal_5835[0] = func_737(joaat("s_m_m_dockwork_01"), -81.7436f, -2456.116f, 5.0189f, 87.3373f, iLocal_464, 2000, 0, 26);
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_5835[0]))
						{
							if (!PED::IS_PED_INJURED(uLocal_5835[0]))
							{
								uLocal_5371 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5998, Local_5998.f_3, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(uLocal_5835[0], uLocal_5371, "missheistdockssetup1ig_3", "welding_enter_dockworker", 8f, -8f, 0, 0, 1148846080, 0);
							}
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(uLocal_5835[0]))
						{
							Local_5623[0 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_5835[0], 1) };
							Local_5623[0 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_5835[0]);
							PED::DELETE_PED(&(uLocal_5835[0]));
						}
						Local_5998.f_6 = 1;
					}
				}
			}
			break;
	}
}

int func_737(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x81091
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(iParam8, iParam0, Param1, fParam4, 1, 1);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam6);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam6);
	PED::ADD_ARMOUR_TO_PED(iVar0, iParam7);
	ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
	ENTITY::SET_ENTITY_INVINCIBLE(iVar0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam5);
	return iVar0;
}

int func_738(struct<7> Param0)//Position - 0x810DB
{
	if (Param0.f_6)
	{
		return 1;
	}
	return 0;
}

int func_739(int iParam0, struct<3> Param1, float fParam4)//Position - 0x810F2
{
	var uVar0;
	
	uVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
	return uVar0;
}

int func_740(int iParam0)//Position - 0x8110C
{
	if (iLocal_5949[iParam0])
	{
		return 1;
	}
	return 0;
}

void func_741()//Position - 0x81123
{
	switch (iLocal_5067)
	{
		case 0:
			if (iLocal_7196 == 2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
				{
					if (HUD::DOES_BLIP_EXIST(Local_6997.f_5))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 352.8846f, -2391.758f, 8.183699f, 351.2024f, -2238.529f, 12.79882f, 29f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 369.153f, -2225.73f, 9.336354f, 342.8319f, -2223.623f, 27.36833f, 86.5f, 0, 1, 0))
						{
							if (func_473())
							{
								if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_01a", 8, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(2f, 10f, 4);
									iLocal_5067++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_7196 == 2)
			{
				iLocal_5067++;
			}
			break;
		
		case 2:
			if (iLocal_7196 == 3)
			{
				if (iLocal_6034 >= 4)
				{
					iLocal_5067++;
				}
			}
			break;
		
		case 3:
			iLocal_5067++;
			break;
		
		case 4:
			iLocal_5067++;
			break;
		
		case 5:
			iLocal_5067++;
			break;
		
		case 6:
			iLocal_5067++;
			break;
		
		case 7:
			iLocal_5067++;
			break;
		
		case 8:
			if (iLocal_7196 == 4)
			{
				if (iLocal_5257)
				{
					if (iLocal_6039 > 0)
					{
						if (func_473())
						{
							iLocal_5067++;
						}
					}
				}
			}
			break;
		
		case 9:
			if (iLocal_7196 == 5)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
					{
						if (func_473())
						{
							iLocal_5067++;
						}
					}
				}
			}
			break;
		
		case 10:
			if (iLocal_7196 == 5)
			{
				iLocal_5067++;
			}
			break;
		
		case 11:
			if (iLocal_7196 == 6)
			{
				if (func_473())
				{
					iLocal_5121 = 0;
					iLocal_5122 = 0;
					iLocal_5067++;
				}
			}
			break;
		
		case 12:
			if (iLocal_7196 == 7)
			{
				if (iLocal_6034 > 1)
				{
					if (func_473())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[14]))
						{
							if (!PED::IS_PED_INJURED(iLocal_6111[14]))
							{
								GlobalFunc_173(&Local_47, 8, iLocal_6111[14], "SIGNALMAN", 0, 1);
							}
						}
						else if (Local_47[8 /*10*/] != 0)
						{
							GlobalFunc_200(&Local_47, 8);
						}
						iLocal_5067++;
					}
				}
			}
			break;
		
		case 13:
			if (iLocal_7196 == 8)
			{
				if (iLocal_6034 == 2)
				{
					if (func_473())
					{
						if (!GlobalFunc_663("AW_TAKE_PHOTO", 0, 0))
						{
							if (func_473())
							{
								iLocal_5067++;
							}
						}
					}
				}
			}
			break;
		
		case 14:
			if (iLocal_7196 == 8)
			{
				if (iLocal_6034 == 4)
				{
					if (func_473())
					{
						iLocal_5067++;
					}
				}
			}
			break;
		
		case 15:
			if (iLocal_7196 == 8)
			{
				if (iLocal_6034 == 5)
				{
					if (func_473())
					{
						iLocal_5067++;
					}
				}
			}
			break;
		
		case 16:
			iLocal_5067++;
			break;
		
		case 17:
			if (iLocal_7196 == 9)
			{
				if (func_473())
				{
					iLocal_5067++;
				}
			}
			break;
		
		case 18:
			break;
	}
}

void func_742()//Position - 0x81453
{
	switch (iLocal_5096)
	{
		case 0:
			if ((AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Crane", 0) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Crane_Stress", 0)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Crane_Impact_Sweeteners", 0))
			{
				iLocal_5096++;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]) && ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_7198[0 /*25*/], Local_7249.f_2) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_7198[1 /*25*/], Local_7249.f_2))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_5095, "Strain_No_Container", Local_7249.f_2, "CRANE_SOUNDS", 0, 0);
						iLocal_5096++;
					}
				}
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]) && ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_7198[0 /*25*/], Local_7249.f_2) || ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_7198[1 /*25*/], Local_7249.f_2))
					{
						iLocal_5096++;
					}
				}
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_7198[0 /*25*/]) && ENTITY::DOES_ENTITY_EXIST(Local_7198[1 /*25*/]))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_7198[0 /*25*/], Local_7249.f_2) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_7198[1 /*25*/], Local_7249.f_2))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_5095, "Strain_No_Container", Local_7249.f_2, "CRANE_SOUNDS", 0, 0);
						iLocal_5096 = 1;
					}
				}
			}
			break;
	}
}

void func_743()//Position - 0x815ED
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_5623[0 /*16*/]))
	{
		if (!PED::IS_PED_INJURED(Local_5623[0 /*16*/]))
		{
			if (!PED::IS_PED_INJURED(iLocal_6134))
			{
				if (GlobalFunc_588(&iLocal_5089, MISC::GET_RANDOM_INT_IN_RANGE(8000, 10000)))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_6134, 1), ENTITY::GET_ENTITY_COORDS(Local_5623[0 /*16*/], 1), 1) < 10f)
					{
						if (!PED::IS_PED_INJURED(Local_5623[0 /*16*/]))
						{
							GlobalFunc_5653(Local_5623[0 /*16*/], "DH1_CRAA", "DOCKWORKER1", 6);
							iLocal_5089 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[5]))
	{
		if (!PED::IS_PED_INJURED(iLocal_6111[5]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_6111[5], 1), 1) < 10f)
			{
				if (!func_403("DH1_CUAA"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_6111[5]))
					{
						GlobalFunc_5653(iLocal_6111[5], "DH1_CUAA", "DS1DOCKW3", 3);
						func_400("DH1_CUAA", 1);
					}
				}
				else if (!func_403("DH1_CUAB"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_6111[5]))
					{
						GlobalFunc_5653(iLocal_6111[5], "DH1_CUAB", "DS1DOCKW3", 3);
						func_400("DH1_CUAB", 1);
					}
				}
				else if (!func_403("DH1_CUAC"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_6111[5]))
					{
						GlobalFunc_5653(iLocal_6111[5], "DH1_CUAC", "DS1DOCKW3", 3);
						func_400("DH1_CUAC", 1);
					}
				}
				else if (!func_403("DH1_CUAD"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_6111[5]))
					{
						GlobalFunc_5653(iLocal_6111[5], "DH1_CUAD", "DS1DOCKW3", 3);
						func_400("DH1_CUAD", 1);
						iLocal_7353 = MISC::GET_GAME_TIMER();
					}
				}
				else if (GlobalFunc_588(&iLocal_7353, MISC::GET_RANDOM_INT_IN_RANGE(8000, 15000)))
				{
					func_400("DH1_CUAD", 0);
					func_400("DH1_CUAC", 0);
					func_400("DH1_CUAB", 0);
					func_400("DH1_CUAA", 0);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_5574[0 /*16*/]))
	{
		if ((!PED::IS_PED_INJURED(Local_5574[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5574[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5574[2 /*16*/]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_5574[0 /*16*/], 1), 1) < 10f)
			{
				if (!func_403("DH1_CYAA"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5574[0 /*16*/]))
					{
						GlobalFunc_5653(Local_5574[0 /*16*/], "DH1_CYAA", "DS1DOCKW4", 3);
						func_400("DH1_CYAA", 1);
					}
				}
				else if (!func_403("DH1_CYAB"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5574[0 /*16*/]))
					{
						GlobalFunc_5653(Local_5574[1 /*16*/], "DH1_CYAB", "DS1DOCKW5", 3);
						func_400("DH1_CYAB", 1);
					}
				}
				else if (!func_403("DH1_CYAC"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5574[1 /*16*/]))
					{
						GlobalFunc_5653(Local_5574[0 /*16*/], "DH1_CYAC", "DS1DOCKW4", 3);
						func_400("DH1_CYAC", 1);
					}
				}
				else if (!func_403("DH1_CYAD"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5574[0 /*16*/]))
					{
						GlobalFunc_5653(Local_5574[2 /*16*/], "DH1_CYAD", "DS1DOCKW6", 3);
						func_400("DH1_CYAD", 1);
					}
				}
				else if (!func_403("DH1_CYAE"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5574[2 /*16*/]))
					{
						GlobalFunc_5653(Local_5574[0 /*16*/], "DH1_CYAE", "DS1DOCKW4", 3);
						func_400("DH1_CYAE", 1);
					}
				}
				else if (!func_403("DH1_CYAF"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5574[0 /*16*/]))
					{
						GlobalFunc_5653(Local_5574[2 /*16*/], "DH1_CYAF", "DS1DOCKW6", 3);
						func_400("DH1_CYAF", 1);
					}
				}
				else if (!func_403("DH1_CYAG"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5574[2 /*16*/]))
					{
						GlobalFunc_5653(Local_5574[0 /*16*/], "DH1_CYAG", "DS1DOCKW4", 3);
						func_400("DH1_CYAG", 1);
					}
				}
				else if (!func_403("DH1_CYAH"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5574[0 /*16*/]))
					{
						GlobalFunc_5653(Local_5574[2 /*16*/], "DH1_CYAH", "DS1DOCKW6", 3);
						func_400("DH1_CYAH", 1);
					}
				}
				else if (!func_403("DH1_CYAI"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5574[2 /*16*/]))
					{
						GlobalFunc_5653(Local_5574[1 /*16*/], "DH1_CYAI", "DS1DOCKW5", 3);
						func_400("DH1_CYAI", 1);
					}
				}
				else if (!func_403("DH1_CYAJ"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5574[1 /*16*/]))
					{
						GlobalFunc_5653(Local_5574[0 /*16*/], "DH1_CYAJ", "DS1DOCKW4", 3);
						func_400("DH1_CYAJ", 1);
						iLocal_7354 = MISC::GET_GAME_TIMER();
					}
				}
				else if (GlobalFunc_588(&iLocal_7354, MISC::GET_RANDOM_INT_IN_RANGE(8000, 15000)))
				{
					func_400("DH1_CYAJ", 1);
					func_400("DH1_CYAI", 1);
					func_400("DH1_CYAH", 1);
					func_400("DH1_CYAF", 1);
					func_400("DH1_CYAE", 1);
					func_400("DH1_CYAD", 1);
					func_400("DH1_CYAC", 1);
					func_400("DH1_CYAB", 1);
					func_400("DH1_CYAA", 1);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[7]))
	{
		if (!PED::IS_PED_INJURED(iLocal_6111[7]))
		{
			if (GlobalFunc_588(&iLocal_5089, MISC::GET_RANDOM_INT_IN_RANGE(8000, 10000)))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_6111[7], 1), 1) < 10f)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_6111[7], PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
					GlobalFunc_5653(iLocal_6111[7], "DH1_CZAA", "DS1DOCKW4", 3);
					iLocal_5089 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_5772[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5772[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5772[2 /*16*/]))
	{
		if ((!PED::IS_PED_INJURED(Local_5772[0 /*16*/]) && !PED::IS_PED_INJURED(Local_5772[1 /*16*/])) && !PED::IS_PED_INJURED(Local_5772[2 /*16*/]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_5772[0 /*16*/], 1), 1) < 10f)
			{
				if (!func_403("DH1_COAA"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5772[0 /*16*/]))
					{
						GlobalFunc_5653(Local_5772[0 /*16*/], "DH1_COAA", "DS1DOCKWORKER1", 3);
						func_400("DH1_COAA", 1);
					}
				}
				else if (!func_403("DH1_COAB"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5772[1 /*16*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5772[0 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_5772[1 /*16*/]))
						{
							GlobalFunc_5653(Local_5772[1 /*16*/], "DH1_COAB", "DS1DOCKW2", 3);
							func_400("DH1_COAB", 1);
						}
					}
				}
				else if (!func_403("DH1_COAC"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5772[0 /*16*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5772[1 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_5772[0 /*16*/]))
						{
							GlobalFunc_5653(Local_5772[0 /*16*/], "DH1_COAC", "DS1DOCKWORKER1", 3);
							func_400("DH1_COAC", 1);
						}
					}
				}
				else if (!func_403("DH1_COAD"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5772[1 /*16*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5772[0 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_5772[1 /*16*/]))
						{
							GlobalFunc_5653(Local_5772[1 /*16*/], "DH1_COAD", "DS1DOCKW2", 3);
							iLocal_7352 = MISC::GET_GAME_TIMER();
							func_400("DH1_COAD", 1);
						}
					}
				}
				else if (!func_403("DH1_COAE"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5772[0 /*16*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5772[1 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_5772[0 /*16*/]))
						{
							GlobalFunc_5653(Local_5772[0 /*16*/], "DH1_COAE", "DS1DOCKWORKER1", 3);
							iLocal_7352 = MISC::GET_GAME_TIMER();
							func_400("DH1_COAE", 1);
						}
					}
				}
				else if (!func_403("DH1_COAF"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5772[1 /*16*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5772[0 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_5772[1 /*16*/]))
						{
							GlobalFunc_5653(Local_5772[1 /*16*/], "DH1_COAF", "DS1DOCKW2", 3);
							iLocal_7352 = MISC::GET_GAME_TIMER();
							func_400("DH1_COAF", 1);
						}
					}
				}
				else if (GlobalFunc_588(&iLocal_7352, 25000))
				{
					func_400("DH1_COAA", 0);
					func_400("DH1_COAB", 0);
					func_400("DH1_COAC", 0);
					func_400("DH1_COAD", 0);
					func_400("DH1_COAE", 0);
					func_400("DH1_COAF", 0);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[13]))
	{
		if (!PED::IS_PED_INJURED(iLocal_6111[13]))
		{
			if (iLocal_7196 == 5)
			{
				if (iLocal_5163 == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_6138, 1), ENTITY::GET_ENTITY_COORDS(iLocal_6111[13], 1), 1) < 15f)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_6111[13], 1), 1) < 8f)
							{
								if (GlobalFunc_588(&iLocal_5089, MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000)))
								{
									if (!PED::IS_PED_INJURED(iLocal_6111[13]))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_6111[13], PLAYER::PLAYER_PED_ID(), 0);
										TASK::TASK_LOOK_AT_ENTITY(iLocal_6111[13], PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
										GlobalFunc_5653(iLocal_6111[13], "DH1_AYAA", "SUPERVISOR2", 3);
										iLocal_5089 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_6138, 1), ENTITY::GET_ENTITY_COORDS(iLocal_6111[13], 1), 1) < 15f)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_6111[13], 1), 1) < 12f)
							{
								if (GlobalFunc_588(&iLocal_5089, MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000)))
								{
									if (!PED::IS_PED_INJURED(iLocal_6111[13]))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_6111[13], PLAYER::PLAYER_PED_ID(), 0);
										TASK::TASK_LOOK_AT_ENTITY(iLocal_6111[13], PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
										GlobalFunc_5653(iLocal_6111[13], "DH1_AZAA", "SUPERVISOR2", 3);
										iLocal_5089 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_744()//Position - 0x82020
{
	int iVar0;
	
	if (iLocal_7196 < 5 && iLocal_7196 > 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_5673[0 /*16*/]))
		{
			if (!PED::IS_PED_INJURED(Local_5673[0 /*16*/]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						if (!PED::IS_PED_INJURED(Local_5673[0 /*16*/]))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, Local_5673[0 /*16*/]))
							{
								iLocal_7340 = 8;
								iLocal_7196 = 12;
							}
						}
					}
				}
				if (PED::IS_PED_RAGDOLL(Local_5673[0 /*16*/]))
				{
					iLocal_7340 = 8;
					iLocal_7196 = 12;
				}
			}
		}
	}
	if (iLocal_7196 > 2 && iLocal_7196 < 5)
	{
		if (!func_403("WORLD_HUMAN_JANITOR"))
		{
			if (!PED::IS_PED_INJURED(iLocal_6111[3]))
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_6111[3], "WORLD_HUMAN_JANITOR", -62.19f, -2539.51f, 6.01f, -157.31f, 0, 0, 1);
				func_400("WORLD_HUMAN_JANITOR", 1);
			}
		}
	}
	if (iLocal_7196 == 3)
	{
		if (iLocal_5221[9] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_6111[1]))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_6111[1], "WORLD_HUMAN_STAND_MOBILE", 0, 0);
					iLocal_5221[9] = 1;
				}
			}
		}
		if (iLocal_5221[10] == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_6139[3], 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_6111[17]))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks5");
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks5"))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_6111[17], uLocal_6139[3], 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_6139[3]))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_6139[3], 1, "AWDocks5", 1);
								VEHICLE::SET_PLAYBACK_SPEED(uLocal_6139[3], 0.7f);
								iLocal_5221[10] = 1;
							}
						}
						else if (VEHICLE::IS_VEHICLE_SEAT_FREE(uLocal_6139[3], -1))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_6111[17], uLocal_6139[3], -1);
						}
					}
					else
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks5");
					}
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_6111[17]))
			{
				PED::DELETE_PED(&(iLocal_6111[17]));
			}
		}
		if (SYSTEM::TIMERA() > 4000)
		{
			if (iLocal_5221[11] == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6139[2]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_6139[2], 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_6111[18]))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks4");
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks4"))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_6111[18], uLocal_6139[2], 0))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_6139[2]))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_6139[2], 1, "AWDocks4", 1);
										VEHICLE::SET_PLAYBACK_SPEED(uLocal_6139[2], 0.7f);
										iLocal_5221[11] = 1;
									}
								}
								else if (VEHICLE::IS_VEHICLE_SEAT_FREE(uLocal_6139[2], -1))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_6111[18], uLocal_6139[2], -1);
								}
							}
							else
							{
								VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks4");
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[18]))
					{
						PED::DELETE_PED(&(iLocal_6111[18]));
					}
				}
			}
		}
	}
	else if (iLocal_7196 >= 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_6139[2]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_6139[2], 0))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_6139[2], 1) > 30f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_6139[2]))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_6139[2]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("biff"));
						VEHICLE::REMOVE_VEHICLE_RECORDING(1, "AWDocks4");
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_6139[3]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_6139[3], 0))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_6139[3], 1) > 30f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_6139[3]))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_6139[3]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("biff"));
						VEHICLE::REMOVE_VEHICLE_RECORDING(1, "AWDocks5");
					}
				}
			}
		}
	}
	if (iLocal_7196 > 3 && iLocal_7196 < 9)
	{
		if (!PED::IS_PED_INJURED(iLocal_6134))
		{
			if (iLocal_5221[0] == 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_6111[11]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_6139[0], 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_6175);
					TASK::TASK_ENTER_VEHICLE(0, uLocal_6139[0], 1, -1, 1073741824, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_6175);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_6111[11], uLocal_6175);
				}
				iLocal_5221[0] = 1;
			}
			if (iLocal_5221[1] == 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_6111[11]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_6139[0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_6111[11], uLocal_6139[0], 0))
					{
						iLocal_5221[1] = 1;
					}
				}
			}
			if (iLocal_5221[2] == 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_6111[4]) && !PED::IS_PED_INJURED(iLocal_6111[5]))
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_6111[4], "WORLD_HUMAN_SMOKING", -109.06f, -2481.83f, 6.02f, 144.23f, 0, 0, 1);
					TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_6111[5], "WORLD_HUMAN_HANG_OUT_STREET", -110.18f, -2482.25f, 6.02f, -80.21f, 0, 0, 1);
					iLocal_5221[2] = 1;
				}
			}
			if (iLocal_7196 == 4 || iLocal_7196 == 5)
			{
				if (iLocal_5221[5] == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_6111[14]))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_6111[14], "WORLD_HUMAN_DRINKING", 0, 0);
						iLocal_5221[5] = 1;
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_6134))
			{
				if (iLocal_5221[6] == 0)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_6134, -106.5262f, -2482.104f, 5.0181f, 5f, 5f, 5f, 0, 1, 0) || (iLocal_7196 > 4 && iLocal_7196 < 9))
					{
						if (!PED::IS_PED_INJURED(iLocal_6111[12]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_6139[1], 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(uLocal_6139[1], -1))
							{
								iLocal_5085 = MISC::GET_GAME_TIMER() + 1000;
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_6139[1], 3);
								PED::SET_PED_INTO_VEHICLE(iLocal_6111[12], uLocal_6139[1], -1);
								VEHICLE::SET_FORKLIFT_FORK_HEIGHT(uLocal_6139[1], 1f);
							}
							else
							{
								PED::DELETE_PED(&(iLocal_6111[12]));
							}
							iLocal_5221[6] = 1;
						}
					}
				}
				if (iLocal_5221[6] == 1)
				{
					if (iLocal_5221[7] == 0)
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2"))
						{
							if (!PED::IS_PED_INJURED(iLocal_6111[12]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_6139[1], 0))
							{
								if (!PED::IS_PED_INJURED(iLocal_6111[7]))
								{
									TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_6111[7], "WORLD_HUMAN_AA_SMOKE", 0, 0);
								}
								if (PED::IS_PED_IN_VEHICLE(iLocal_6111[12], uLocal_6139[1], 0))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_6139[1], 1, "AWDocks2", 1);
									VEHICLE::SET_PLAYBACK_SPEED(uLocal_6139[1], 1.1f);
									iLocal_5221[7] = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_745()//Position - 0x826C8
{
	switch (iLocal_7379)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_6134))
			{
				iLocal_7380 = MISC::GET_GAME_TIMER();
				AUDIO::PLAY_PAIN(iLocal_6134, 4, 0, 0);
				iLocal_7379++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(uLocal_6095[4]))
			{
				if (GlobalFunc_588(&iLocal_7380, MISC::GET_RANDOM_INT_IN_RANGE(9000, 24000)))
				{
					iLocal_7380 = MISC::GET_GAME_TIMER();
					if (GlobalFunc_745())
					{
						GlobalFunc_5122(uLocal_6095[4], "GENERIC_INSULT_HIGH", 35);
					}
					else if (!PED::IS_PED_INJURED(uLocal_6095[5]))
					{
						GlobalFunc_5122(uLocal_6095[5], "GENERIC_INSULT_HIGH", 35);
					}
					iLocal_7379++;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_7380, MISC::GET_RANDOM_INT_IN_RANGE(2000, 6000)))
			{
				iLocal_7379 = 0;
			}
			break;
	}
}

void func_746()//Position - 0x8279A
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	int iVar8[5];
	int iVar14;
	int iVar15;
	int iVar16;
	struct<3> Var17;
	int iVar20;
	struct<3> Var21;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_7197 = iLocal_7196;
		iLocal_7196 = 12;
	}
	if (iLocal_7196 != 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6137))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
			{
				iLocal_7197 = iLocal_7196;
				iLocal_7340 = 1;
				iLocal_7196 = 12;
			}
			else if (GlobalFunc_2226(&iLocal_6137))
			{
				iLocal_7197 = iLocal_7196;
				iLocal_7340 = 2;
				iLocal_7196 = 12;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
			{
				if (iLocal_7196 < 4)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(iLocal_6135))
						{
							func_747(ENTITY::GET_ENTITY_COORDS(iLocal_6135, 1), 150f, 200f, "AW_DONT_LEAVE_W", "AW_DISTWARNW", 7);
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135) && ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
		{
			if (iLocal_7196 < 4)
			{
				if (PED::IS_PED_INJURED(iLocal_6135) && PED::IS_PED_INJURED(iLocal_6134))
				{
					iLocal_7197 = iLocal_7196;
					iLocal_7340 = 18;
					iLocal_7196 = 12;
				}
				else if (PED::IS_PED_INJURED(iLocal_6135))
				{
					if (iLocal_7196 < 4)
					{
						iLocal_7197 = iLocal_7196;
						iLocal_7340 = 20;
						iLocal_7196 = 12;
					}
				}
				else if (PED::IS_PED_INJURED(iLocal_6134))
				{
					iLocal_7197 = iLocal_7196;
					iLocal_7340 = 6;
					iLocal_7196 = 12;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
		{
			if (PED::IS_PED_INJURED(iLocal_6134))
			{
				iLocal_7197 = iLocal_7196;
				iLocal_7340 = 6;
				iLocal_7196 = 12;
			}
		}
		if (iLocal_7196 < 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
			{
				if (!PED::IS_PED_INJURED(iLocal_6134))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_7196 == 2)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(iLocal_6134, iLocal_6137, 0))
								{
									func_747(ENTITY::GET_ENTITY_COORDS(iLocal_6134, 1), 190f, 250f, "AW_DONT_LEAVE_T", "AW_DISTWARNF", 5);
								}
							}
						}
						else if (iLocal_7196 == 4)
						{
							func_747(ENTITY::GET_ENTITY_COORDS(iLocal_6134, 1), 190f, 250f, "AW_DONT_LEAVE_T", "AW_DISTWARNF", 5);
						}
						else if (iLocal_7196 == 6)
						{
							func_747(-65.59f, -2467.65f, 5.96f, 180f, 250f, "AW_DISTWARNL", "AW_DISTWARND", 17);
						}
						else if (iLocal_7196 == 7)
						{
							func_747(-65.59f, -2467.65f, 5.96f, 180f, 250f, "AW_DISTWARNL", "AW_DISTWARND", 17);
						}
						else
						{
							if (iLocal_7196 == 3)
							{
								if (iLocal_6034 > 1)
								{
									func_747(-65.59f, -2467.65f, 5.96f, 250f, 270f, "AW_DISTWARNL", "AW_DISTWARND", 17);
								}
							}
							if (iLocal_7196 > 3 && iLocal_7196 < 9)
							{
								if (iLocal_7196 != 6 || iLocal_7196 != 7)
								{
									func_747(-65.59f, -2467.65f, 5.96f, 250f, 270f, "AW_DISTWARNL", "AW_DISTWARND", 17);
								}
							}
						}
						if (iLocal_7196 > 3 && iLocal_7196 < 4)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uVar0, iLocal_6134))
								{
									if (PED::IS_PED_RAGDOLL(iLocal_6134))
									{
										iLocal_7197 = iLocal_7196;
										iLocal_7340 = 8;
										iLocal_7196 = 12;
									}
								}
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_6134))
								{
									iLocal_7197 = iLocal_7196;
									iLocal_7340 = 8;
									iLocal_7196 = 12;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_7196 > 7 && iLocal_5126 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6146))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
				{
					iLocal_7197 = iLocal_7196;
					iLocal_7340 = 10;
					iLocal_7196 = 12;
				}
				else if (GlobalFunc_2226(&iLocal_6146))
				{
					iLocal_7197 = iLocal_7196;
					iLocal_7340 = 11;
					iLocal_7196 = 12;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6151))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
				{
					iLocal_7197 = iLocal_7196;
					iLocal_7340 = 14;
					iLocal_7196 = 12;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_6146))
					{
						if (ENTITY::IS_ENTITY_IN_WATER(iLocal_6151))
						{
							iLocal_7197 = iLocal_7196;
							iLocal_7340 = 14;
							iLocal_7196 = 12;
						}
					}
				}
			}
		}
		if (iLocal_7196 == 9)
		{
			if (iLocal_6034 > 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6146))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6146, 0))
					{
						if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_6146))
						{
							if (!func_403("TRAILER DISCONNECTED"))
							{
								iLocal_7351 = MISC::GET_GAME_TIMER();
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6151, 0))
								{
									if (!HUD::DOES_BLIP_EXIST(uLocal_7349))
									{
										uLocal_7349 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_6151);
										HUD::SET_BLIP_COLOUR(uLocal_7349, 3);
									}
								}
								if (GlobalFunc_111())
								{
									if (!GlobalFunc_620())
									{
										GlobalFunc_619(1);
									}
								}
								GlobalFunc_5884("AW_RECONTRA");
								func_400("TRAILER DISCONNECTED", 1);
							}
							else if (GlobalFunc_588(&iLocal_7351, 45000))
							{
								iLocal_7197 = iLocal_7196;
								iLocal_7340 = 19;
								iLocal_7196 = 12;
							}
						}
						else if (func_403("TRAILER DISCONNECTED"))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_7349))
							{
								HUD::REMOVE_BLIP(&uLocal_7349);
							}
							if (GlobalFunc_620())
							{
								GlobalFunc_619(0);
							}
							if (GlobalFunc_663("AW_RECONTRA", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							func_400("TRAILER DISCONNECTED", 0);
						}
					}
				}
			}
		}
		if (iLocal_7196 < 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6138))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0) || ENTITY::IS_ENTITY_IN_WATER(iLocal_6138))
				{
					iLocal_7197 = iLocal_7196;
					iLocal_7340 = 12;
					iLocal_7196 = 12;
				}
				else if (GlobalFunc_2226(&iLocal_6138))
				{
					iLocal_7197 = iLocal_7196;
					iLocal_7340 = 13;
					iLocal_7196 = 12;
				}
			}
		}
		if (iLocal_7196 == 7)
		{
			if (iLocal_5070 == 0)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < Local_7198)
				{
					if (Local_7198[iVar1 /*25*/].f_15 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_7198[iVar1 /*25*/]))
						{
							Var2 = { ENTITY::GET_ENTITY_ROTATION(Local_7198[iVar1 /*25*/], 2) };
							Var5 = { ENTITY::GET_ENTITY_VELOCITY(Local_7198[iVar1 /*25*/]) };
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_7198[iVar1 /*25*/]))
							{
								if (Var2.f_1 > 45f || Var2.f_1 < -45f)
								{
									iLocal_5070 = MISC::GET_GAME_TIMER();
								}
							}
							else if (Var2.f_1 > 32f || Var2.f_1 < -32f)
							{
								iLocal_5070 = MISC::GET_GAME_TIMER();
							}
							if (Local_7198[iVar1 /*25*/].f_19.f_2 < -8f)
							{
								if ((Var5.f_2 - Local_7198[iVar1 /*25*/].f_19.f_2) > 5f)
								{
									iLocal_5070 = MISC::GET_GAME_TIMER();
								}
							}
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_7198[iVar1 /*25*/]))
							{
								if (Var2.f_2 > (91.2705f + 15f) || Var2.f_2 < (91.2705f - 15f))
								{
									iLocal_5070 = MISC::GET_GAME_TIMER();
								}
							}
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_7198[iVar1 /*25*/]))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_7198[iVar1 /*25*/], -48.32701f, -2415.719f, 2.000961f, -110.6421f, -2416.208f, 22.25046f, 14.5f, 0, 1, 0))
								{
									iLocal_5070 = MISC::GET_GAME_TIMER();
								}
							}
							if (iLocal_5070 == 0)
							{
								if (!GlobalFunc_5172(&Local_6997, 1))
								{
									if (MISC::ABSF((SYSTEM::VMAG(Var5) - SYSTEM::VMAG(Local_7198[iVar1 /*25*/].f_19))) > 4f)
									{
										GlobalFunc_5105();
										if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10h", 7, 0, 0, 0))
										{
											iLocal_5071 = MISC::GET_GAME_TIMER();
										}
									}
									if (((MISC::GET_GAME_TIMER() - iLocal_5071) > 8000 && MISC::ABSF(Var2.f_1) > 45f) && ENTITY::IS_ENTITY_ATTACHED(Local_7198[iVar1 /*25*/]))
									{
										GlobalFunc_5105();
										if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_10h", 7, 0, 0, 0))
										{
											iLocal_5071 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
							Local_7198[iVar1 /*25*/].f_19 = { Var5 };
						}
					}
					iVar1++;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_5070) > 1000)
			{
				iLocal_7197 = iLocal_7196;
				iLocal_7340 = 14;
				iLocal_7196 = 12;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iLocal_5326[0]))
			{
				iLocal_7197 = iLocal_7196;
				iLocal_7340 = 16;
				iLocal_7196 = 12;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iLocal_5326[1]))
			{
				iLocal_7197 = iLocal_7196;
				iLocal_7340 = 16;
				iLocal_7196 = 12;
			}
		}
		if ((iLocal_7196 > 2 || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_6785, 20f, 20f, 20f, 0, 1, 0) && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))) && iLocal_7196 < 10)
		{
			if (iLocal_5208 == 0)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_7197 = iLocal_7196;
					iLocal_7340 = 8;
					iLocal_7196 = 12;
				}
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
				{
					GlobalFunc_5105();
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
						iLocal_7197 = iLocal_7196;
						iLocal_7340 = 8;
						iLocal_7196 = 12;
					}
				}
				iVar14 = 0;
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar8, -1);
					iVar14 = 0;
					while (iVar14 <= (iVar8 - 1))
					{
						if (!PED::IS_PED_INJURED(iVar8[iVar14]))
						{
							if (!PED::IS_PED_MODEL(iVar8[iVar14], joaat("ig_wade")) && !PED::IS_PED_MODEL(iVar8[iVar14], joaat("ig_floyd")))
							{
								if (PED::IS_PED_MODEL(iVar8[iVar14], joaat("s_m_y_blackops_01")))
								{
									if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar8[iVar14], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_IN_COMBAT(iVar8[iVar14], PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar8[iVar14]))
									{
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar8[iVar14], iLocal_465);
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_465, 1862763509);
										TASK::TASK_COMBAT_PED(iVar8[iVar14], PLAYER::PLAYER_PED_ID(), 0, 16);
										GlobalFunc_4935();
										if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
										{
											iLocal_7197 = iLocal_7196;
											iLocal_7340 = 8;
											iLocal_7196 = 12;
										}
									}
									if (PED::HAS_PED_RECEIVED_EVENT(iVar8[iVar14], 66))
									{
										GlobalFunc_4935();
										if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
										{
											iLocal_7197 = iLocal_7196;
											iLocal_7340 = 9;
											iLocal_7196 = 12;
										}
									}
								}
								else
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar8[iVar14], PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_IN_COMBAT(iVar8[iVar14], PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_4935();
										if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
										{
											iLocal_7197 = iLocal_7196;
											iLocal_7340 = 8;
											iLocal_7196 = 12;
										}
									}
									if (PED::HAS_PED_RECEIVED_EVENT(iVar8[iVar14], 66))
									{
										GlobalFunc_4935();
										if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
										{
											iLocal_7197 = iLocal_7196;
											iLocal_7340 = 9;
											iLocal_7196 = 12;
										}
									}
								}
							}
						}
						iVar14++;
					}
				}
				iVar14 = 0;
				while (iVar14 <= (iVar8 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar8[iVar14]))
					{
						if (!PED::IS_PED_INJURED(iVar8[iVar14]))
						{
							if ((PED::IS_PED_MODEL(iVar8[iVar14], joaat("s_m_y_blackops_01")) || PED::IS_PED_MODEL(iVar8[iVar14], joaat("s_m_y_dockwork_01"))) || PED::IS_PED_MODEL(iVar8[iVar14], joaat("s_m_m_dockwork_01")))
							{
								if (!PED::IS_PED_MODEL(iVar8[iVar14], joaat("ig_wade")) && !PED::IS_PED_MODEL(iVar8[iVar14], joaat("ig_floyd")))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar8[iVar14], iLocal_5326[0], 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar8[iVar14], iLocal_5326[1], 1))
										{
											TASK::TASK_SMART_FLEE_PED(iVar8[iVar14], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
											iLocal_7197 = iLocal_7196;
											iLocal_7340 = 8;
											iLocal_7196 = 12;
										}
									}
								}
							}
						}
					}
					iVar14++;
				}
				iVar14 = 0;
				while (iVar14 < iLocal_6111)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[iVar14]))
					{
						if (!PED::IS_PED_INJURED(iLocal_6111[iVar14]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (PED::HAS_PED_RECEIVED_EVENT(iLocal_6111[iVar14], 60) || PED::HAS_PED_RECEIVED_EVENT(iLocal_6111[iVar14], 66))
								{
									if (!func_403("DS1_41"))
									{
										if (!PED::IS_PED_INJURED(iLocal_6134))
										{
											GlobalFunc_4935();
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_6138))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6138, 0))
												{
													if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6138, 0))
													{
														GlobalFunc_5653(iLocal_6134, "DH1_EWAA", "FLOYD", 4);
													}
													else if (GlobalFunc_631(PLAYER::PLAYER_PED_ID(), iLocal_6134))
													{
														GlobalFunc_5653(iLocal_6134, "DH1_EWAA", "FLOYD", 4);
													}
													else
													{
														GlobalFunc_5653(iLocal_6134, "DH1_EWAA", "FLOYD", 6);
													}
												}
												else if (GlobalFunc_631(PLAYER::PLAYER_PED_ID(), iLocal_6134))
												{
													GlobalFunc_5653(iLocal_6134, "DH1_EWAA", "FLOYD", 4);
												}
												else
												{
													GlobalFunc_5653(iLocal_6134, "DH1_EWAA", "FLOYD", 6);
												}
											}
											else if (GlobalFunc_631(PLAYER::PLAYER_PED_ID(), iLocal_6134))
											{
												GlobalFunc_5653(iLocal_6134, "DH1_EWAA", "FLOYD", 4);
											}
											else
											{
												GlobalFunc_5653(iLocal_6134, "DH1_EWAA", "FLOYD", 6);
											}
											func_400("DS1_41", 1);
											iLocal_7350 = MISC::GET_GAME_TIMER();
										}
									}
									else if (GlobalFunc_588(&iLocal_7350, 9000))
									{
										func_400("DS1_41", 0);
									}
								}
							}
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_6111[iVar14], PLAYER::PLAYER_PED_ID(), 1) || (PED::IS_PED_RAGDOLL(iLocal_6111[iVar14]) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_6111[iVar14], PLAYER::PLAYER_PED_ID())))
							{
								GlobalFunc_4935();
								if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
								{
									PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
									PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
									PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
									iLocal_7197 = iLocal_7196;
									iLocal_7340 = 8;
									iLocal_7196 = 12;
								}
							}
						}
						else
						{
							GlobalFunc_4935();
							if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
							{
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
								iLocal_7197 = iLocal_7196;
								iLocal_7340 = 8;
								iLocal_7196 = 12;
							}
						}
					}
					iVar14++;
				}
				if (!PED::IS_PED_INJURED(iLocal_6136))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (PED::HAS_PED_RECEIVED_EVENT(iLocal_6136, 60) || PED::HAS_PED_RECEIVED_EVENT(iLocal_6136, 66))
						{
							if (!func_403("DS1_41"))
							{
								if (!PED::IS_PED_INJURED(iLocal_6134))
								{
									GlobalFunc_4935();
									GlobalFunc_5653(iLocal_6134, "DH1_EWAA", "FLOYD", 6);
									func_400("DS1_41", 1);
									iLocal_7350 = MISC::GET_GAME_TIMER();
								}
							}
							else if (GlobalFunc_588(&iLocal_7350, 9000))
							{
								func_400("DS1_41", 0);
							}
						}
					}
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_4935();
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
						iLocal_7197 = iLocal_7196;
						iLocal_7340 = 8;
						iLocal_7196 = 12;
					}
				}
				if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_4935();
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
						iLocal_7197 = iLocal_7196;
						iLocal_7340 = 8;
						iLocal_7196 = 12;
					}
				}
				if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0))
				{
					GlobalFunc_4935();
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
						iLocal_7197 = iLocal_7196;
						iLocal_7340 = 8;
						iLocal_7196 = 12;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -63.84386f, -2515.959f, 6.150424f, -51.07678f, -2525.074f, 9.171206f, 4.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -63.25744f, -2519.075f, 8.900423f, -62.21776f, -2519.835f, 6.150424f, 0.5f, 0, 1, 0))
				{
					GlobalFunc_4935();
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
						iLocal_7197 = iLocal_7196;
						iLocal_7340 = 8;
						iLocal_7196 = 12;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -77.75518f, -2364.333f, 38.79614f, -252.8183f, -2363.692f, -2.910417f, 35.75f, 0, 1, 0))
				{
					GlobalFunc_4935();
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
						iLocal_7197 = iLocal_7196;
						iLocal_7340 = 8;
						iLocal_7196 = 12;
					}
				}
				if (!func_403("MERRYWEATHER ALERTED"))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(uLocal_6095[4]) && ENTITY::DOES_ENTITY_EXIST(uLocal_6095[5])) && ENTITY::DOES_ENTITY_EXIST(uLocal_6095[5]))
					{
						if ((!PED::IS_PED_INJURED(uLocal_6095[4]) && !PED::IS_PED_INJURED(uLocal_6095[5])) && !PED::IS_PED_INJURED(uLocal_6095[6]))
						{
							if ((PED::IS_PED_IN_COMBAT(uLocal_6095[4], 0) || PED::IS_PED_IN_COMBAT(uLocal_6095[5], 0)) || PED::IS_PED_IN_COMBAT(uLocal_6095[6], 0))
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_5079))
								{
									AUDIO::STOP_SOUND(iLocal_5079);
									AUDIO::RELEASE_SOUND_ID(iLocal_5079);
								}
								iLocal_5086 = MISC::GET_GAME_TIMER();
								func_400("MERRYWEATHER ALERTED", 1);
							}
						}
						else if (iLocal_7196 == 9 || (iLocal_7196 == 10 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 478.596f, -3116.911f, 5.069f) < 40000f))
						{
							GlobalFunc_4935();
							if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
							{
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
								iLocal_7197 = iLocal_7196;
								iLocal_7340 = 8;
								iLocal_7196 = 12;
							}
						}
					}
				}
				else if (GlobalFunc_588(&iLocal_5086, 6000))
				{
					GlobalFunc_4935();
					if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
						iLocal_7197 = iLocal_7196;
						iLocal_7340 = 8;
						iLocal_7196 = 12;
					}
				}
			}
		}
		if (iLocal_5208 == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -63.60088f, -2517.614f, 6.400066f, -61.07001f, -2519.373f, 8.900066f, 1.75f, 0, 1, 0))
			{
				GlobalFunc_4935();
				if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
					iLocal_7197 = iLocal_7196;
					iLocal_7340 = 8;
					iLocal_7196 = 12;
				}
			}
			if (iLocal_7196 > 2)
			{
				iVar15 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(-62.7f, -2527.79f, 5.01f, 40f, 0, 4);
				if (iVar15 != iLocal_6137)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar15))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar15, -52.45776f, -2535.258f, 4.010103f, -73.38586f, -2520.341f, 8.510103f, 14.25f, 0, 1, 0))
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
							iLocal_7197 = iLocal_7196;
							iLocal_7340 = 8;
							iLocal_7196 = 12;
						}
					}
				}
				iVar16 = 0;
				while (iVar16 <= 21)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[iVar16]))
					{
						if (!PED::IS_PED_INJURED(iLocal_6111[iVar16]))
						{
							if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_6111[iVar16]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_6111[iVar16]))
							{
								GlobalFunc_4935();
								if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_6111[iVar16], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
									iLocal_7197 = iLocal_7196;
									iLocal_7340 = 8;
									iLocal_7196 = 12;
								}
							}
						}
					}
					iVar16++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6136))
				{
					if (!PED::IS_PED_INJURED(iLocal_6136))
					{
						if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_6136) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_6136))
						{
							GlobalFunc_4935();
							if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_6136, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
								iLocal_7197 = iLocal_7196;
								iLocal_7340 = 8;
								iLocal_7196 = 12;
							}
						}
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_6136, PLAYER::PLAYER_PED_ID(), 1))
						{
							if (GlobalFunc_10618(&Local_47, "D1AUD", "DS1_38", 8, 0, 0, 0))
							{
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, iLocal_464);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_465, 1862763509);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_464, iLocal_465);
								iLocal_7197 = iLocal_7196;
								iLocal_7340 = 8;
								iLocal_7196 = 12;
							}
						}
					}
				}
				iVar16 = 0;
				while (iVar16 <= 21)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[iVar16]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5326[1]))
						{
							if (!PED::IS_PED_INJURED(iLocal_6111[iVar16]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_6111[iVar16], iLocal_5326[0], 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_6111[iVar16], iLocal_5326[1], 1))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_6111[iVar16], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
									iLocal_7197 = iLocal_7196;
									iLocal_7340 = 8;
									iLocal_7196 = 12;
								}
							}
							else
							{
								iLocal_7197 = iLocal_7196;
								iLocal_7340 = 8;
								iLocal_7196 = 12;
							}
						}
					}
					iVar16++;
				}
			}
		}
		if (iLocal_7196 == 5)
		{
			if (iLocal_5092 == 0)
			{
				iVar20 = 0;
				iVar20 = 0;
				while (iVar20 < iLocal_5326)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[iVar20]))
					{
						if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
						{
							if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_6138))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5326[iVar20], -92.52367f, -2461.8f, 8.267201f, -103.6381f, -2453.989f, 4.520514f, 14.75f, 0, 1, 0))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[iVar20]))
									{
										Var21 = { ENTITY::GET_ENTITY_ROTATION(iLocal_5326[iVar20], 2) };
										if (Var21.f_1 > 75f || Var21.f_1 < -75f)
										{
											iLocal_5092 = MISC::GET_GAME_TIMER();
										}
										if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_5326[iVar20]))
										{
											if (Var21.f_2 > (55.003f + 35f) || Var21.f_2 < (55.003f - 35f))
											{
												iLocal_5092 = MISC::GET_GAME_TIMER();
											}
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_5326[iVar20]))
									{
										Var17 = { ENTITY::GET_ENTITY_COORDS(iLocal_5326[iVar20], 1) };
										if (Var17.f_2 > 10.6f)
										{
											iLocal_5092 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
					iVar20++;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_5092) > 2000)
			{
				iLocal_7197 = iLocal_7196;
				iLocal_7340 = 15;
				iLocal_7196 = 12;
			}
		}
	}
}

void func_747(struct<3> Param0, float fParam3, float fParam4, char* sParam5, char* sParam6, int iParam7)//Position - 0x83E72
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param0, 1) > fParam4)
	{
		iLocal_7197 = iLocal_7196;
		iLocal_7340 = iParam7;
		iLocal_7196 = 12;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param0, 1) > fParam3)
	{
		if (!iLocal_5123)
		{
			GlobalFunc_5884(sParam5);
			iLocal_5123 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param0, 1) < (fParam3 - 25f))
	{
		if (iLocal_5123)
		{
			GlobalFunc_5884(sParam6);
			iLocal_5123 = 0;
		}
	}
}


void func_749(bool bParam0, int iParam1)//Position - 0x83F59
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 2, 1);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), 1);
	}
	GlobalFunc_2795(0);
	GlobalFunc_9132(0);
	GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
	func_719(0);
	func_755();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	GlobalFunc_601(23, 0);
	ENTITY::REMOVE_FORCED_OBJECT(479.2571f, -3115.551f, 5.0701f, 50f, joaat("prop_gate_docks_ld"));
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_1");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_2");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_3");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_4");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_5");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_6");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_7");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_8");
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("cranassist"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("cranassist");
	}
	if (iLocal_5303)
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_THEFT_EXPORT_CARS_CRANE_SECTION_SCENE");
		iLocal_5303 = 0;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_5093))
	{
		AUDIO::STOP_SOUND(iLocal_5093);
		AUDIO::RELEASE_SOUND_ID(iLocal_5093);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DOCKS_HEIST_USING_CRANE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DOCKS_HEIST_USING_CRANE");
	}
	if (GlobalFunc_2203(3))
	{
		if (GlobalFunc_2799(3))
		{
			GlobalFunc_2798(3);
		}
	}
	GlobalFunc_583(5, PLAYER::PLAYER_PED_ID(), 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[5 /*31*/], 0f, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[5 /*31*/], 1, 1, 0);
	GlobalFunc_2790(3, 0, 0);
	GlobalFunc_2790(1, 0, 0);
	HUD::UNLOCK_MINIMAP_ANGLE();
	AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", 0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	GlobalFunc_2792(0);
	GlobalFunc_2793(0);
	MISC::CLEAR_BIT(&Global_2263, 22);
	GlobalFunc_2224(0);
	GlobalFunc_4937(0, 0);
	iLocal_5208 = 0;
	PHYSICS::ROPE_UNLOAD_TEXTURES();
	if (HUD::DOES_BLIP_EXIST(uLocal_6847))
	{
		HUD::REMOVE_BLIP(&uLocal_6847);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_5141)
	{
		iLocal_5141[iVar0] = 0;
		iVar0++;
	}
	func_752();
	uLocal_5314 = HUD::GET_MAIN_PLAYER_BLIP_ID();
	if (HUD::DOES_BLIP_EXIST(uLocal_5314))
	{
		HUD::SET_BLIP_ALPHA(uLocal_5314, 100);
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		CUTSCENE::STOP_CUTSCENE(0);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		}
	}
	if (bParam0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_6152);
			}
			else
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				VEHICLE::DELETE_VEHICLE(&iLocal_6152);
			}
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_6152);
		}
	}
	else
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_6152);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[14]))
	{
		if (!PED::IS_PED_INJURED(iLocal_6111[14]))
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_6111[14], 1);
			AUDIO::STOP_PED_SPEAKING(iLocal_6111[14], 1);
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_6111[14]))
			{
				PED::DELETE_PED(&(iLocal_6111[14]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_6111[14]));
			}
		}
	}
	Local_5300 = { -53.6982f, -2415.79f, 5.05f };
	iLocal_5127 = 0;
	Global_24677 = 0;
	iVar1 = 0;
	while (iVar1 < iLocal_5821)
	{
		iLocal_5821[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < iLocal_5949)
	{
		iLocal_5949[iVar1] = 0;
		iVar1++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5385)
	{
		func_734(&(Local_5385[iLocal_6035 /*8*/]), 1, bParam0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5411)
	{
		func_733(&(Local_5411[iLocal_6035 /*16*/]), 1, bParam0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5574)
	{
		func_733(&(Local_5574[iLocal_6035 /*16*/]), 1, bParam0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5640)
	{
		func_733(&(Local_5640[iLocal_6035 /*16*/]), 1, bParam0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5673)
	{
		func_733(&(Local_5673[iLocal_6035 /*16*/]), 1, bParam0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5690)
	{
		func_733(&(Local_5690[iLocal_6035 /*16*/]), 1, bParam0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5411)
	{
		func_733(&(Local_5411[iLocal_6035 /*16*/]), 1, bParam0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5460)
	{
		func_733(&(Local_5460[iLocal_6035 /*16*/]), 1, bParam0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5493)
	{
		func_733(&(Local_5493[iLocal_6035 /*16*/]), 1, bParam0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5394)
	{
		func_733(&(Local_5394[iLocal_6035 /*16*/]), 1, bParam0);
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 < Local_5623)
	{
		func_733(&(Local_5623[iLocal_6035 /*16*/]), 1, bParam0);
		iLocal_6035++;
	}
	GlobalFunc_695(1);
	GlobalFunc_563(0);
	func_505();
	func_703();
	func_751("");
	GlobalFunc_200(&Local_47, 0);
	GlobalFunc_200(&Local_47, 1);
	GlobalFunc_200(&Local_47, 2);
	GlobalFunc_200(&Local_47, 3);
	GlobalFunc_200(&Local_47, 4);
	GlobalFunc_200(&Local_47, 5);
	GlobalFunc_200(&Local_47, 6);
	GlobalFunc_200(&Local_47, 7);
	GlobalFunc_200(&Local_47, 8);
	GlobalFunc_200(&Local_47, 9);
	GlobalFunc_4935();
	if (HUD::DOES_BLIP_EXIST(uLocal_6842[0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_6842[0]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_6842[1]))
	{
		HUD::REMOVE_BLIP(&(uLocal_6842[1]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_6842[2]))
	{
		HUD::REMOVE_BLIP(&(uLocal_6842[2]));
	}
	iLocal_6916 = 0;
	iLocal_5220 = 0;
	iLocal_5126 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6137, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6137, 0))
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_6137, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6137))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_6137);
				}
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		GlobalFunc_6685(0);
		MISC::SET_GAME_PAUSED(0);
	}
	if (!bParam0)
	{
		func_405(0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("forklift"), 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("biff"), 0);
	}
	iLocal_6035 = 0;
	while (iLocal_6035 <= 9)
	{
		if (bParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_6153[iLocal_6035]))
			{
				OBJECT::DELETE_OBJECT(&(uLocal_6153[iLocal_6035]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uLocal_6153[iLocal_6035]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_6153[iLocal_6035]));
		}
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 <= 9)
	{
		if (bParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_6164[iLocal_6035]))
			{
				OBJECT::DELETE_OBJECT(&(uLocal_6164[iLocal_6035]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uLocal_6164[iLocal_6035]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_6164[iLocal_6035]));
		}
		iLocal_6035++;
	}
	iLocal_5067 = 0;
	iLocal_5096 = 0;
	iLocal_6035 = 0;
	while (iLocal_6035 <= 34)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_4389[iLocal_6035 /*19*/]))
		{
			if (bParam0)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_4389[iLocal_6035 /*19*/]));
					}
					else
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
						VEHICLE::DELETE_VEHICLE(&(Local_4389[iLocal_6035 /*19*/]));
					}
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4389[iLocal_6035 /*19*/]));
				}
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4389[iLocal_6035 /*19*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_4389[iLocal_6035 /*19*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_4389[iLocal_6035 /*19*/].f_1));
		}
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 <= 54)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_466[iLocal_6035 /*40*/]))
		{
			if (bParam0)
			{
				PED::DELETE_PED(&(Local_466[iLocal_6035 /*40*/]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_466[iLocal_6035 /*40*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_466[iLocal_6035 /*40*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_466[iLocal_6035 /*40*/].f_1));
		}
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_4268[iLocal_6035 /*40*/]))
		{
			if (bParam0)
			{
				PED::DELETE_PED(&(Local_4268[iLocal_6035 /*40*/]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_4268[iLocal_6035 /*40*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_4268[iLocal_6035 /*40*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_4268[iLocal_6035 /*40*/].f_1));
		}
		iLocal_6035++;
	}
	if (iLocal_5116 == 1)
	{
		GlobalFunc_139();
	}
	if (iLocal_5185[0] == 1)
	{
		TASK::DELETE_PATROL_ROUTE("miss_dock");
		iLocal_5185[0] = 0;
	}
	if (iLocal_5185[1] == 1)
	{
		TASK::DELETE_PATROL_ROUTE("miss_merc0");
		TASK::DELETE_PATROL_ROUTE("miss_merc1");
		TASK::DELETE_PATROL_ROUTE("miss_merc2");
		iLocal_5185[1] = 0;
	}
	if (iLocal_5169[0] == 1)
	{
		TASK::DELETE_PATROL_ROUTE("miss_merc0");
		TASK::DELETE_PATROL_ROUTE("miss_merc1");
		TASK::DELETE_PATROL_ROUTE("miss_merc2");
		iLocal_5185[0] = 0;
		iLocal_5185[1] = 0;
		iLocal_5185[2] = 0;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 <= 24)
	{
		if (iLocal_6874[iLocal_6035])
		{
			GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6848[iLocal_6035], 0);
			iLocal_6874[iLocal_6035] = 0;
		}
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 <= 21)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6111[iLocal_6035]))
		{
			if (bParam0)
			{
				PED::DELETE_PED(&(iLocal_6111[iLocal_6035]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_6111[iLocal_6035]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_6819[iLocal_6035]))
		{
			HUD::REMOVE_BLIP(&(uLocal_6819[iLocal_6035]));
		}
		iLocal_6035++;
	}
	iLocal_6035 = 0;
	while (iLocal_6035 <= 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_6095[iLocal_6035]))
		{
			if (bParam0)
			{
				PED::DELETE_PED(&(uLocal_6095[iLocal_6035]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_6095[iLocal_6035]));
			}
		}
		iLocal_6035++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_419[0]))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&(uLocal_419[0]));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_419[0]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_419[2]))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&(uLocal_419[2]));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_419[2]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_419[1]))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&(uLocal_419[1]));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_419[1]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6134))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&iLocal_6134);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_6134);
		}
	}
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
		{
			if (bParam0)
			{
				PED::DELETE_PED(&iLocal_6135);
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_6135);
			}
		}
	}
	iLocal_6035 = 0;
	while (iLocal_6035 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_6139[iLocal_6035]))
		{
			if (bParam0)
			{
				VEHICLE::DELETE_VEHICLE(&(uLocal_6139[iLocal_6035]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_6139[iLocal_6035]));
			}
		}
		iLocal_6035++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6137))
	{
		if (bParam0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_6137);
				}
				else
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
					VEHICLE::DELETE_VEHICLE(&iLocal_6137);
				}
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_6137);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_6137))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_6137, 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_6137);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6146))
	{
		if (bParam0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_6146);
				}
				else
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
					VEHICLE::DELETE_VEHICLE(&iLocal_6146);
				}
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_6146);
			}
		}
		else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_6146, 0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_6146);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6151))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_6151);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_6151);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6149))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_6149);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_6149);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6150))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_6150);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_6150);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6148))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_6148);
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_6148);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6138))
	{
		if (bParam0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_6138);
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					VEHICLE::DELETE_VEHICLE(&iLocal_6138);
				}
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_6138);
			}
		}
		else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_6138, 0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_6138);
		}
	}
	if (bLocal_5218)
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 8)
		{
			if (PHYSICS::DOES_ROPE_EXIST(&(Local_7249.f_15[iVar2])))
			{
				PHYSICS::DELETE_ROPE(&(Local_7249.f_15[iVar2]));
			}
			iVar2++;
		}
		bLocal_5218 = false;
	}
	STREAMING::REMOVE_ANIM_DICT("map_objects");
	if (ENTITY::DOES_ENTITY_EXIST(Local_7249))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -62.8851f, -2406.872f, 5.0009f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 338.2688f);
				}
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_7249.f_2))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_7249.f_2, 1);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			OBJECT::DELETE_OBJECT(&Local_7249);
			OBJECT::DELETE_OBJECT(&(Local_7249.f_1));
			OBJECT::DELETE_OBJECT(&(Local_7249.f_2));
			OBJECT::DELETE_OBJECT(&(Local_7249.f_13));
			OBJECT::DELETE_OBJECT(&(Local_7249.f_4[0]));
			OBJECT::DELETE_OBJECT(&(Local_7249.f_4[1]));
			OBJECT::DELETE_OBJECT(&(Local_7249.f_4[2]));
			OBJECT::DELETE_OBJECT(&(Local_7249.f_4[3]));
			OBJECT::DELETE_OBJECT(&(Local_7249.f_4[4]));
			OBJECT::DELETE_OBJECT(&(Local_7249.f_4[5]));
			OBJECT::DELETE_OBJECT(&(Local_7249.f_4[6]));
			OBJECT::DELETE_OBJECT(&(Local_7249.f_4[7]));
			OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/]));
			OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/].f_1));
			OBJECT::DELETE_OBJECT(&(Local_7198[0 /*25*/].f_2));
			OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/]));
			OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/].f_1));
			OBJECT::DELETE_OBJECT(&(Local_7198[1 /*25*/].f_2));
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_7249);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7249.f_1));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7249.f_2));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7249.f_13));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7249.f_4[0]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7249.f_4[1]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7249.f_4[2]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7249.f_4[3]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7249.f_4[4]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7249.f_4[5]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7249.f_4[6]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7249.f_4[7]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7198[0 /*25*/]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7198[0 /*25*/].f_1));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7198[0 /*25*/].f_2));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7198[1 /*25*/]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7198[1 /*25*/].f_1));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_7198[1 /*25*/].f_2));
		}
	}
	if (func_527())
	{
		func_526(0);
	}
	func_551();
	func_505();
	func_751("AWDocks1");
	func_703();
	if (bParam0)
	{
		MISC::CLEAR_AREA(Local_6180, 200f, 1, 1, 0, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(Local_6180, 200f, 0);
		MISC::CLEAR_AREA(Local_6785, 500f, 1, 1, 0, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(Local_6785, 500f, 0);
		GRAPHICS::WASH_DECALS_IN_RANGE(Local_6785, 500f, 1f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_6785, 500f);
		OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("pickup_weapon_assaultrifle"));
		HUD::CLEAR_PRINTS();
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
				}
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
		iLocal_6035 = 0;
		while (iLocal_6035 <= 24)
		{
			iLocal_6874[iLocal_6035] = 0;
			iLocal_6035++;
		}
	}
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
	MISC::SET_TIME_SCALE(1f);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	func_553();
	if (!bParam0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(6);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}


void func_751(char* sParam0)//Position - 0x84FD8
{
	int iVar0;
	
	if (iLocal_365 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_365 - 1))
		{
			if (!MISC::IS_STRING_NULL(sParam0))
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_366[iVar0], sParam0);
				iLocal_366[iVar0] = 0;
			}
			iVar0++;
		}
	}
	iLocal_365 = 0;
}

void func_752()//Position - 0x85020
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_212)
	{
		iLocal_212[iVar0] = 0;
		iVar0++;
	}
}



void func_755()//Position - 0x85083
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_DRIVE_START"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_DRIVE_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_DRIVE_APPROACH_DOCKS"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_DRIVE_APPROACH_DOCKS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_FOLLOW_FLOYD_START"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_HANDLER_START"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_HANDLER_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_CLIMB_UP_CRANE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_CLIMB_UP_CRANE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_USE_CRANE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_USE_CRANE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_TAKE_PHOTOS"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_TAKE_PHOTOS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_PHONE_RON"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_PHONE_RON");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_GET_TO_TRUCK"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_GET_TO_TRUCK");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_DRIVE_TO_DOCKS"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_DRIVE_TO_DOCKS");
	}
}




