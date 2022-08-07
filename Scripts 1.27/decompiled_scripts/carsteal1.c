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
	float fLocal_27 = 0f;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	bool bLocal_30 = 0;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	var uLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	float fLocal_62[340] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_403[340] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_744[340] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1085[340] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1426[340] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	float fLocal_1771[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1832[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1893[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1954[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_2015[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_2076[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_2137[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_2163[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_2189[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_2215[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_2241 = 0f;
	float fLocal_2242 = 0f;
	float fLocal_2243 = 0f;
	float fLocal_2244 = 0f;
	float fLocal_2245 = 0f;
	float fLocal_2246 = 0f;
	float fLocal_2247 = 0f;
	float fLocal_2248 = 0f;
	float fLocal_2249 = 0f;
	float fLocal_2250 = 0f;
	float fLocal_2251 = 0f;
	float fLocal_2252 = 0f;
	float fLocal_2253 = 0f;
	float fLocal_2254 = 0f;
	float fLocal_2255 = 0f;
	float fLocal_2256 = 0f;
	float fLocal_2257 = 0f;
	float fLocal_2258 = 0f;
	float fLocal_2259 = 0f;
	float fLocal_2260 = 0f;
	float fLocal_2261 = 0f;
	int iLocal_2262[340] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2603[340] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2944[340] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3285[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3346[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3407[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3468[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3494 = 0;
	int iLocal_3495 = 0;
	int iLocal_3496 = 0;
	int iLocal_3497 = 0;
	int iLocal_3498 = 0;
	int iLocal_3499 = 0;
	int iLocal_3500 = 0;
	int iLocal_3501 = 0;
	int iLocal_3502 = 0;
	int iLocal_3503 = 0;
	int iLocal_3504 = 0;
	int iLocal_3505 = 0;
	int iLocal_3506 = 0;
	int iLocal_3507 = 0;
	int iLocal_3508 = 0;
	int iLocal_3509 = 0;
	int iLocal_3510 = 0;
	struct<3> Local_3511[340];
	struct<3> Local_4532[25];
	struct<3> Local_4608[60];
	struct<3> Local_4789 = { 0, 0, 0 } ;
	struct<3> Local_4792 = { 0, 0, 0 } ;
	struct<3> Local_4795 = { 0, 0, 0 } ;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	struct<3> Local_4804 = { 0, 0, 0 } ;
	struct<3> Local_4807 = { 0, 0, 0 } ;
	struct<3> Local_4810 = { 0, 0, 0 } ;
	struct<3> Local_4813 = { 0, 0, 0 } ;
	char cLocal_4816[64] = "";
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	int iLocal_4832 = 0;
	int iLocal_4833[340] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5174[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5200[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5261 = 0;
	int iLocal_5262 = 0;
	int iLocal_5263 = 0;
	int iLocal_5264[340] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5605[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5618[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5644[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5705[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5716 = 0;
	int iLocal_5717 = 0;
	int iLocal_5718 = 0;
	var uLocal_5719 = 12;
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
	var uLocal_5731 = 0;
	int iLocal_5732 = 0;
	int iLocal_5733 = 0;
	int iLocal_5734[5] = { 0, 0, 0, 0, 0 };
	int iLocal_5740[3] = { 0, 0, 0 };
	int iLocal_5744 = 0;
	int iLocal_5745 = 0;
	int iLocal_5746[3] = { 0, 0, 0 };
	struct<3> Local_5750[3];
	struct<3> Local_5760[3];
	float fLocal_5770[3] = { 0f, 0f, 0f };
	var uLocal_5774[3] = { 0, 0, 0 };
	int iLocal_5778 = 0;
	int iLocal_5779[3] = { 0, 0, 0 };
	float fLocal_5783[3] = { 0f, 0f, 0f };
	float fLocal_5787[3] = { 0f, 0f, 0f };
	int iLocal_5791 = 0;
	int iLocal_5792 = 0;
	int iLocal_5793 = 0;
	int iLocal_5794 = 0;
	int iLocal_5795 = 0;
	int iLocal_5796 = 0;
	bool bLocal_5797 = 0;
	int iLocal_5798 = 0;
	int iLocal_5799 = 0;
	int iLocal_5800 = 0;
	int iLocal_5801 = 0;
	int iLocal_5802 = 0;
	int iLocal_5803 = 0;
	bool bLocal_5804 = 0;
	bool bLocal_5805 = 0;
	struct<3> Local_5806 = { 0, 0, 0 } ;
	float fLocal_5809 = 0f;
	struct<3> Local_5810 = { 0, 0, 0 } ;
	struct<3> Local_5813 = { 0, 0, 0 } ;
	struct<3> Local_5816 = { 0, 0, 0 } ;
	struct<3> Local_5819 = { 0, 0, 0 } ;
	struct<3> Local_5822 = { 0, 0, 0 } ;
	struct<3> Local_5825 = { 0, 0, 0 } ;
	struct<3> Local_5828 = { 0, 0, 0 } ;
	char* sLocal_5831 = NULL;
	char* sLocal_5832 = NULL;
	char* sLocal_5833 = NULL;
	char* sLocal_5834 = NULL;
	float fLocal_5835 = 0f;
	char* sLocal_5836 = NULL;
	char* sLocal_5837 = NULL;
	int iLocal_5838 = 0;
	int iLocal_5839 = 0;
	int iLocal_5840 = 0;
	int iLocal_5841 = 0;
	int iLocal_5842 = 0;
	int iLocal_5843 = 0;
	int iLocal_5844 = 0;
	int iLocal_5845 = 0;
	int iLocal_5846 = 0;
	int iLocal_5847 = 0;
	int iLocal_5848 = 0;
	int iLocal_5849 = 0;
	int iLocal_5850 = 0;
	var uLocal_5851[5] = { 0, 0, 0, 0, 0 };
	var uLocal_5857 = 0;
	int iLocal_5858 = 0;
	int iLocal_5859 = 0;
	int iLocal_5860 = 0;
	int iLocal_5861 = 0;
	int iLocal_5862 = 0;
	int iLocal_5863 = 0;
	int iLocal_5864 = 0;
	int iLocal_5865 = 0;
	var uLocal_5866 = 0;
	int iLocal_5867 = 0;
	var uLocal_5868 = 0;
	int iLocal_5869 = 0;
	int iLocal_5870 = 0;
	int iLocal_5871 = 0;
	int iLocal_5872 = 0;
	int iLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 3;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 1092616192;
	var uLocal_5882 = 1101004800;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 3;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = -1;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 1000;
	var uLocal_5909 = 1000;
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
	var uLocal_5929 = 16;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
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
	var uLocal_5959 = 0;
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
	var uLocal_5989 = 0;
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
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
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
	int iLocal_6094 = 0;
	int iLocal_6095 = 0;
	int iLocal_6096 = 0;
	int iLocal_6097 = 0;
	char* sLocal_6098 = NULL;
	int iLocal_6099[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_6200 = 0;
	int iLocal_6201[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_6227[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_6258[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_6279 = 0;
	int iLocal_6280 = 0;
	var uLocal_6281 = 4;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 4;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 4;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 4;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 4;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 4;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 4;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	struct<21> Local_6325 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	bool bLocal_6359 = 0;
	int iLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 2;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 2;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 20;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = -1;
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
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 1065353216;
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
	var uLocal_6432 = -1;
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
	var uLocal_6459 = 0;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 1065353216;
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
	var uLocal_6489 = -1;
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
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 1065353216;
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
	var uLocal_6546 = -1;
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
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 1065353216;
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
	var uLocal_6603 = -1;
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
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 1065353216;
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
	var uLocal_6660 = -1;
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
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 1065353216;
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
	var uLocal_6717 = -1;
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
	var uLocal_6744 = 0;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 1065353216;
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
	var uLocal_6774 = -1;
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
	var uLocal_6801 = 0;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 1065353216;
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
	var uLocal_6831 = -1;
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
	var uLocal_6858 = 0;
	var uLocal_6859 = 0;
	var uLocal_6860 = 0;
	var uLocal_6861 = 1065353216;
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
	var uLocal_6888 = -1;
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
	var uLocal_6915 = 0;
	var uLocal_6916 = 0;
	var uLocal_6917 = 0;
	var uLocal_6918 = 1065353216;
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
	var uLocal_6945 = -1;
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
	var uLocal_6972 = 0;
	var uLocal_6973 = 0;
	var uLocal_6974 = 0;
	var uLocal_6975 = 1065353216;
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
	var uLocal_7002 = -1;
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
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = 0;
	var uLocal_7032 = 1065353216;
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
	var uLocal_7059 = -1;
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
	var uLocal_7089 = 1065353216;
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
	var uLocal_7116 = -1;
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
	var uLocal_7146 = 1065353216;
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
	var uLocal_7173 = -1;
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
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 1065353216;
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
	var uLocal_7230 = -1;
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
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = 0;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 1065353216;
	var uLocal_7261 = 0;
	var uLocal_7262 = 0;
	var uLocal_7263 = 0;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 0;
	var uLocal_7274 = 0;
	var uLocal_7275 = 0;
	var uLocal_7276 = 0;
	var uLocal_7277 = 0;
	var uLocal_7278 = 0;
	var uLocal_7279 = 0;
	var uLocal_7280 = 0;
	var uLocal_7281 = 0;
	var uLocal_7282 = 0;
	var uLocal_7283 = 0;
	var uLocal_7284 = 0;
	var uLocal_7285 = 0;
	var uLocal_7286 = 0;
	var uLocal_7287 = -1;
	var uLocal_7288 = 0;
	var uLocal_7289 = 0;
	var uLocal_7290 = 0;
	var uLocal_7291 = 0;
	var uLocal_7292 = 0;
	var uLocal_7293 = 0;
	var uLocal_7294 = 0;
	var uLocal_7295 = 0;
	var uLocal_7296 = 0;
	var uLocal_7297 = 0;
	var uLocal_7298 = 0;
	var uLocal_7299 = 0;
	var uLocal_7300 = 0;
	var uLocal_7301 = 0;
	var uLocal_7302 = 0;
	var uLocal_7303 = 0;
	var uLocal_7304 = 0;
	var uLocal_7305 = 0;
	var uLocal_7306 = 0;
	var uLocal_7307 = 0;
	var uLocal_7308 = 0;
	var uLocal_7309 = 0;
	var uLocal_7310 = 0;
	var uLocal_7311 = 0;
	var uLocal_7312 = 0;
	var uLocal_7313 = 0;
	var uLocal_7314 = 0;
	var uLocal_7315 = 0;
	var uLocal_7316 = 0;
	var uLocal_7317 = 1065353216;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
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
	var uLocal_7336 = 0;
	var uLocal_7337 = 0;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 0;
	var uLocal_7342 = 0;
	var uLocal_7343 = 0;
	var uLocal_7344 = -1;
	var uLocal_7345 = 0;
	var uLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	var uLocal_7350 = 0;
	var uLocal_7351 = 0;
	var uLocal_7352 = 0;
	var uLocal_7353 = 0;
	var uLocal_7354 = 0;
	var uLocal_7355 = 0;
	var uLocal_7356 = 0;
	var uLocal_7357 = 0;
	var uLocal_7358 = 0;
	var uLocal_7359 = 0;
	var uLocal_7360 = 0;
	var uLocal_7361 = 0;
	var uLocal_7362 = 0;
	var uLocal_7363 = 0;
	var uLocal_7364 = 0;
	var uLocal_7365 = 0;
	var uLocal_7366 = 0;
	var uLocal_7367 = 0;
	var uLocal_7368 = 0;
	var uLocal_7369 = 0;
	var uLocal_7370 = 0;
	var uLocal_7371 = 0;
	var uLocal_7372 = 0;
	var uLocal_7373 = 0;
	var uLocal_7374 = 1065353216;
	var uLocal_7375 = 0;
	var uLocal_7376 = 0;
	var uLocal_7377 = 0;
	var uLocal_7378 = 0;
	var uLocal_7379 = 0;
	var uLocal_7380 = 0;
	var uLocal_7381 = 0;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = 0;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = 0;
	var uLocal_7392 = 0;
	var uLocal_7393 = 0;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = -1;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 0;
	var uLocal_7407 = 0;
	var uLocal_7408 = 0;
	var uLocal_7409 = 0;
	var uLocal_7410 = 0;
	var uLocal_7411 = 0;
	var uLocal_7412 = 0;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = 0;
	var uLocal_7416 = 0;
	var uLocal_7417 = 0;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 0;
	var uLocal_7421 = 0;
	var uLocal_7422 = 0;
	var uLocal_7423 = 0;
	var uLocal_7424 = 0;
	var uLocal_7425 = 0;
	var uLocal_7426 = 0;
	var uLocal_7427 = 0;
	var uLocal_7428 = 0;
	var uLocal_7429 = 0;
	var uLocal_7430 = 0;
	var uLocal_7431 = 1065353216;
	var uLocal_7432 = 0;
	var uLocal_7433 = 0;
	var uLocal_7434 = 0;
	var uLocal_7435 = 0;
	var uLocal_7436 = 0;
	var uLocal_7437 = 0;
	var uLocal_7438 = 0;
	var uLocal_7439 = 0;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 0;
	var uLocal_7443 = 0;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
	var uLocal_7446 = 0;
	var uLocal_7447 = 0;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 0;
	var uLocal_7452 = 0;
	var uLocal_7453 = 0;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = 0;
	var uLocal_7457 = 0;
	var uLocal_7458 = -1;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 0;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 0;
	var uLocal_7472 = 0;
	var uLocal_7473 = 0;
	var uLocal_7474 = 0;
	var uLocal_7475 = 0;
	var uLocal_7476 = 0;
	var uLocal_7477 = 0;
	var uLocal_7478 = 0;
	var uLocal_7479 = 0;
	var uLocal_7480 = 0;
	var uLocal_7481 = 0;
	var uLocal_7482 = 0;
	var uLocal_7483 = 0;
	var uLocal_7484 = 0;
	var uLocal_7485 = 0;
	var uLocal_7486 = 0;
	var uLocal_7487 = 0;
	var uLocal_7488 = 1065353216;
	var uLocal_7489 = 0;
	var uLocal_7490 = 0;
	var uLocal_7491 = 0;
	var uLocal_7492 = 0;
	var uLocal_7493 = 0;
	var uLocal_7494 = 0;
	var uLocal_7495 = 0;
	var uLocal_7496 = 0;
	var uLocal_7497 = 0;
	var uLocal_7498 = 0;
	var uLocal_7499 = 0;
	var uLocal_7500 = 0;
	var uLocal_7501 = 0;
	var uLocal_7502 = 0;
	var uLocal_7503 = 0;
	var uLocal_7504 = 0;
	var uLocal_7505 = 0;
	var uLocal_7506 = 0;
	var uLocal_7507 = 0;
	var uLocal_7508 = 0;
	var uLocal_7509 = 0;
	var uLocal_7510 = 0;
	var uLocal_7511 = 0;
	var uLocal_7512 = 16;
	var uLocal_7513 = 0;
	var uLocal_7514 = -1082130432;
	var uLocal_7515 = 0;
	var uLocal_7516 = -1082130432;
	var uLocal_7517 = 0;
	var uLocal_7518 = -1082130432;
	var uLocal_7519 = 0;
	var uLocal_7520 = -1082130432;
	var uLocal_7521 = 0;
	var uLocal_7522 = -1082130432;
	var uLocal_7523 = 0;
	var uLocal_7524 = -1082130432;
	var uLocal_7525 = 0;
	var uLocal_7526 = -1082130432;
	var uLocal_7527 = 0;
	var uLocal_7528 = -1082130432;
	var uLocal_7529 = 0;
	var uLocal_7530 = -1082130432;
	var uLocal_7531 = 0;
	var uLocal_7532 = -1082130432;
	var uLocal_7533 = 0;
	var uLocal_7534 = -1082130432;
	var uLocal_7535 = 0;
	var uLocal_7536 = -1082130432;
	var uLocal_7537 = 0;
	var uLocal_7538 = -1082130432;
	var uLocal_7539 = 0;
	var uLocal_7540 = -1082130432;
	var uLocal_7541 = 0;
	var uLocal_7542 = -1082130432;
	var uLocal_7543 = 0;
	var uLocal_7544 = -1082130432;
	var uLocal_7545 = 16;
	var uLocal_7546 = 0;
	var uLocal_7547 = -1082130432;
	var uLocal_7548 = 0;
	var uLocal_7549 = -1082130432;
	var uLocal_7550 = 0;
	var uLocal_7551 = -1082130432;
	var uLocal_7552 = 0;
	var uLocal_7553 = -1082130432;
	var uLocal_7554 = 0;
	var uLocal_7555 = -1082130432;
	var uLocal_7556 = 0;
	var uLocal_7557 = -1082130432;
	var uLocal_7558 = 0;
	var uLocal_7559 = -1082130432;
	var uLocal_7560 = 0;
	var uLocal_7561 = -1082130432;
	var uLocal_7562 = 0;
	var uLocal_7563 = -1082130432;
	var uLocal_7564 = 0;
	var uLocal_7565 = -1082130432;
	var uLocal_7566 = 0;
	var uLocal_7567 = -1082130432;
	var uLocal_7568 = 0;
	var uLocal_7569 = -1082130432;
	var uLocal_7570 = 0;
	var uLocal_7571 = -1082130432;
	var uLocal_7572 = 0;
	var uLocal_7573 = -1082130432;
	var uLocal_7574 = 0;
	var uLocal_7575 = -1082130432;
	var uLocal_7576 = 0;
	var uLocal_7577 = -1082130432;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = 0;
	var uLocal_7582 = 0;
	var uLocal_7583 = 0;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 0;
	var uLocal_7587 = 0;
	var uLocal_7588 = 0;
	var uLocal_7589 = 0;
	var uLocal_7590 = 0;
	var uLocal_7591 = 0;
	var uLocal_7592 = 0;
	var uLocal_7593 = 0;
	var uLocal_7594 = -1082130432;
	var uLocal_7595 = -1082130432;
	var uLocal_7596 = 1;
	var uLocal_7597 = 1;
	var uLocal_7598 = 1;
	var uLocal_7599 = -1;
	var uLocal_7600 = -1;
	var uLocal_7601 = -1;
	struct<2> Local_7602 = { 0, 0 } ;
	var uLocal_7604 = 0;
	var uLocal_7605 = 0;
	var uLocal_7606 = 2;
	var uLocal_7607 = 0;
	var uLocal_7608 = 0;
	var uLocal_7609 = 2;
	var uLocal_7610 = 0;
	var uLocal_7611 = 0;
	var uLocal_7612 = 20;
	var uLocal_7613 = 0;
	var uLocal_7614 = 0;
	var uLocal_7615 = 0;
	var uLocal_7616 = -1;
	var uLocal_7617 = 0;
	var uLocal_7618 = 0;
	var uLocal_7619 = 0;
	var uLocal_7620 = 0;
	var uLocal_7621 = 0;
	var uLocal_7622 = 0;
	var uLocal_7623 = 0;
	var uLocal_7624 = 0;
	var uLocal_7625 = 0;
	var uLocal_7626 = 0;
	var uLocal_7627 = 0;
	var uLocal_7628 = 0;
	var uLocal_7629 = 0;
	var uLocal_7630 = 0;
	var uLocal_7631 = 0;
	var uLocal_7632 = 0;
	var uLocal_7633 = 0;
	var uLocal_7634 = 0;
	var uLocal_7635 = 0;
	var uLocal_7636 = 0;
	var uLocal_7637 = 0;
	var uLocal_7638 = 0;
	var uLocal_7639 = 0;
	var uLocal_7640 = 0;
	var uLocal_7641 = 0;
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 1065353216;
	var uLocal_7647 = 0;
	var uLocal_7648 = 0;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = 0;
	var uLocal_7652 = 0;
	var uLocal_7653 = 0;
	var uLocal_7654 = 0;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = 0;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 0;
	var uLocal_7665 = 0;
	var uLocal_7666 = 0;
	var uLocal_7667 = 0;
	var uLocal_7668 = 0;
	var uLocal_7669 = 0;
	var uLocal_7670 = 0;
	var uLocal_7671 = 0;
	var uLocal_7672 = 0;
	var uLocal_7673 = -1;
	var uLocal_7674 = 0;
	var uLocal_7675 = 0;
	var uLocal_7676 = 0;
	var uLocal_7677 = 0;
	var uLocal_7678 = 0;
	var uLocal_7679 = 0;
	var uLocal_7680 = 0;
	var uLocal_7681 = 0;
	var uLocal_7682 = 0;
	var uLocal_7683 = 0;
	var uLocal_7684 = 0;
	var uLocal_7685 = 0;
	var uLocal_7686 = 0;
	var uLocal_7687 = 0;
	var uLocal_7688 = 0;
	var uLocal_7689 = 0;
	var uLocal_7690 = 0;
	var uLocal_7691 = 0;
	var uLocal_7692 = 0;
	var uLocal_7693 = 0;
	var uLocal_7694 = 0;
	var uLocal_7695 = 0;
	var uLocal_7696 = 0;
	var uLocal_7697 = 0;
	var uLocal_7698 = 0;
	var uLocal_7699 = 0;
	var uLocal_7700 = 0;
	var uLocal_7701 = 0;
	var uLocal_7702 = 0;
	var uLocal_7703 = 1065353216;
	var uLocal_7704 = 0;
	var uLocal_7705 = 0;
	var uLocal_7706 = 0;
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
	var uLocal_7711 = 0;
	var uLocal_7712 = 0;
	var uLocal_7713 = 0;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = 0;
	var uLocal_7717 = 0;
	var uLocal_7718 = 0;
	var uLocal_7719 = 0;
	var uLocal_7720 = 0;
	var uLocal_7721 = 0;
	var uLocal_7722 = 0;
	var uLocal_7723 = 0;
	var uLocal_7724 = 0;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 0;
	var uLocal_7728 = 0;
	var uLocal_7729 = 0;
	var uLocal_7730 = -1;
	var uLocal_7731 = 0;
	var uLocal_7732 = 0;
	var uLocal_7733 = 0;
	var uLocal_7734 = 0;
	var uLocal_7735 = 0;
	var uLocal_7736 = 0;
	var uLocal_7737 = 0;
	var uLocal_7738 = 0;
	var uLocal_7739 = 0;
	var uLocal_7740 = 0;
	var uLocal_7741 = 0;
	var uLocal_7742 = 0;
	var uLocal_7743 = 0;
	var uLocal_7744 = 0;
	var uLocal_7745 = 0;
	var uLocal_7746 = 0;
	var uLocal_7747 = 0;
	var uLocal_7748 = 0;
	var uLocal_7749 = 0;
	var uLocal_7750 = 0;
	var uLocal_7751 = 0;
	var uLocal_7752 = 0;
	var uLocal_7753 = 0;
	var uLocal_7754 = 0;
	var uLocal_7755 = 0;
	var uLocal_7756 = 0;
	var uLocal_7757 = 0;
	var uLocal_7758 = 0;
	var uLocal_7759 = 0;
	var uLocal_7760 = 1065353216;
	var uLocal_7761 = 0;
	var uLocal_7762 = 0;
	var uLocal_7763 = 0;
	var uLocal_7764 = 0;
	var uLocal_7765 = 0;
	var uLocal_7766 = 0;
	var uLocal_7767 = 0;
	var uLocal_7768 = 0;
	var uLocal_7769 = 0;
	var uLocal_7770 = 0;
	var uLocal_7771 = 0;
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = 0;
	var uLocal_7776 = 0;
	var uLocal_7777 = 0;
	var uLocal_7778 = 0;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = 0;
	var uLocal_7782 = 0;
	var uLocal_7783 = 0;
	var uLocal_7784 = 0;
	var uLocal_7785 = 0;
	var uLocal_7786 = 0;
	var uLocal_7787 = -1;
	var uLocal_7788 = 0;
	var uLocal_7789 = 0;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 0;
	var uLocal_7793 = 0;
	var uLocal_7794 = 0;
	var uLocal_7795 = 0;
	var uLocal_7796 = 0;
	var uLocal_7797 = 0;
	var uLocal_7798 = 0;
	var uLocal_7799 = 0;
	var uLocal_7800 = 0;
	var uLocal_7801 = 0;
	var uLocal_7802 = 0;
	var uLocal_7803 = 0;
	var uLocal_7804 = 0;
	var uLocal_7805 = 0;
	var uLocal_7806 = 0;
	var uLocal_7807 = 0;
	var uLocal_7808 = 0;
	var uLocal_7809 = 0;
	var uLocal_7810 = 0;
	var uLocal_7811 = 0;
	var uLocal_7812 = 0;
	var uLocal_7813 = 0;
	var uLocal_7814 = 0;
	var uLocal_7815 = 0;
	var uLocal_7816 = 0;
	var uLocal_7817 = 1065353216;
	var uLocal_7818 = 0;
	var uLocal_7819 = 0;
	var uLocal_7820 = 0;
	var uLocal_7821 = 0;
	var uLocal_7822 = 0;
	var uLocal_7823 = 0;
	var uLocal_7824 = 0;
	var uLocal_7825 = 0;
	var uLocal_7826 = 0;
	var uLocal_7827 = 0;
	var uLocal_7828 = 0;
	var uLocal_7829 = 0;
	var uLocal_7830 = 0;
	var uLocal_7831 = 0;
	var uLocal_7832 = 0;
	var uLocal_7833 = 0;
	var uLocal_7834 = 0;
	var uLocal_7835 = 0;
	var uLocal_7836 = 0;
	var uLocal_7837 = 0;
	var uLocal_7838 = 0;
	var uLocal_7839 = 0;
	var uLocal_7840 = 0;
	var uLocal_7841 = 0;
	var uLocal_7842 = 0;
	var uLocal_7843 = 0;
	var uLocal_7844 = -1;
	var uLocal_7845 = 0;
	var uLocal_7846 = 0;
	var uLocal_7847 = 0;
	var uLocal_7848 = 0;
	var uLocal_7849 = 0;
	var uLocal_7850 = 0;
	var uLocal_7851 = 0;
	var uLocal_7852 = 0;
	var uLocal_7853 = 0;
	var uLocal_7854 = 0;
	var uLocal_7855 = 0;
	var uLocal_7856 = 0;
	var uLocal_7857 = 0;
	var uLocal_7858 = 0;
	var uLocal_7859 = 0;
	var uLocal_7860 = 0;
	var uLocal_7861 = 0;
	var uLocal_7862 = 0;
	var uLocal_7863 = 0;
	var uLocal_7864 = 0;
	var uLocal_7865 = 0;
	var uLocal_7866 = 0;
	var uLocal_7867 = 0;
	var uLocal_7868 = 0;
	var uLocal_7869 = 0;
	var uLocal_7870 = 0;
	var uLocal_7871 = 0;
	var uLocal_7872 = 0;
	var uLocal_7873 = 0;
	var uLocal_7874 = 1065353216;
	var uLocal_7875 = 0;
	var uLocal_7876 = 0;
	var uLocal_7877 = 0;
	var uLocal_7878 = 0;
	var uLocal_7879 = 0;
	var uLocal_7880 = 0;
	var uLocal_7881 = 0;
	var uLocal_7882 = 0;
	var uLocal_7883 = 0;
	var uLocal_7884 = 0;
	var uLocal_7885 = 0;
	var uLocal_7886 = 0;
	var uLocal_7887 = 0;
	var uLocal_7888 = 0;
	var uLocal_7889 = 0;
	var uLocal_7890 = 0;
	var uLocal_7891 = 0;
	var uLocal_7892 = 0;
	var uLocal_7893 = 0;
	var uLocal_7894 = 0;
	var uLocal_7895 = 0;
	var uLocal_7896 = 0;
	var uLocal_7897 = 0;
	var uLocal_7898 = 0;
	var uLocal_7899 = 0;
	var uLocal_7900 = 0;
	var uLocal_7901 = -1;
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = 0;
	var uLocal_7907 = 0;
	var uLocal_7908 = 0;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = 0;
	var uLocal_7912 = 0;
	var uLocal_7913 = 0;
	var uLocal_7914 = 0;
	var uLocal_7915 = 0;
	var uLocal_7916 = 0;
	var uLocal_7917 = 0;
	var uLocal_7918 = 0;
	var uLocal_7919 = 0;
	var uLocal_7920 = 0;
	var uLocal_7921 = 0;
	var uLocal_7922 = 0;
	var uLocal_7923 = 0;
	var uLocal_7924 = 0;
	var uLocal_7925 = 0;
	var uLocal_7926 = 0;
	var uLocal_7927 = 0;
	var uLocal_7928 = 0;
	var uLocal_7929 = 0;
	var uLocal_7930 = 0;
	var uLocal_7931 = 1065353216;
	var uLocal_7932 = 0;
	var uLocal_7933 = 0;
	var uLocal_7934 = 0;
	var uLocal_7935 = 0;
	var uLocal_7936 = 0;
	var uLocal_7937 = 0;
	var uLocal_7938 = 0;
	var uLocal_7939 = 0;
	var uLocal_7940 = 0;
	var uLocal_7941 = 0;
	var uLocal_7942 = 0;
	var uLocal_7943 = 0;
	var uLocal_7944 = 0;
	var uLocal_7945 = 0;
	var uLocal_7946 = 0;
	var uLocal_7947 = 0;
	var uLocal_7948 = 0;
	var uLocal_7949 = 0;
	var uLocal_7950 = 0;
	var uLocal_7951 = 0;
	var uLocal_7952 = 0;
	var uLocal_7953 = 0;
	var uLocal_7954 = 0;
	var uLocal_7955 = 0;
	var uLocal_7956 = 0;
	var uLocal_7957 = 0;
	var uLocal_7958 = -1;
	var uLocal_7959 = 0;
	var uLocal_7960 = 0;
	var uLocal_7961 = 0;
	var uLocal_7962 = 0;
	var uLocal_7963 = 0;
	var uLocal_7964 = 0;
	var uLocal_7965 = 0;
	var uLocal_7966 = 0;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = 0;
	var uLocal_7972 = 0;
	var uLocal_7973 = 0;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = 0;
	var uLocal_7977 = 0;
	var uLocal_7978 = 0;
	var uLocal_7979 = 0;
	var uLocal_7980 = 0;
	var uLocal_7981 = 0;
	var uLocal_7982 = 0;
	var uLocal_7983 = 0;
	var uLocal_7984 = 0;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 0;
	var uLocal_7988 = 1065353216;
	var uLocal_7989 = 0;
	var uLocal_7990 = 0;
	var uLocal_7991 = 0;
	var uLocal_7992 = 0;
	var uLocal_7993 = 0;
	var uLocal_7994 = 0;
	var uLocal_7995 = 0;
	var uLocal_7996 = 0;
	var uLocal_7997 = 0;
	var uLocal_7998 = 0;
	var uLocal_7999 = 0;
	var uLocal_8000 = 0;
	var uLocal_8001 = 0;
	var uLocal_8002 = 0;
	var uLocal_8003 = 0;
	var uLocal_8004 = 0;
	var uLocal_8005 = 0;
	var uLocal_8006 = 0;
	var uLocal_8007 = 0;
	var uLocal_8008 = 0;
	var uLocal_8009 = 0;
	var uLocal_8010 = 0;
	var uLocal_8011 = 0;
	var uLocal_8012 = 0;
	var uLocal_8013 = 0;
	var uLocal_8014 = 0;
	var uLocal_8015 = -1;
	var uLocal_8016 = 0;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 0;
	var uLocal_8020 = 0;
	var uLocal_8021 = 0;
	var uLocal_8022 = 0;
	var uLocal_8023 = 0;
	var uLocal_8024 = 0;
	var uLocal_8025 = 0;
	var uLocal_8026 = 0;
	var uLocal_8027 = 0;
	var uLocal_8028 = 0;
	var uLocal_8029 = 0;
	var uLocal_8030 = 0;
	var uLocal_8031 = 0;
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 0;
	var uLocal_8037 = 0;
	var uLocal_8038 = 0;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = 0;
	var uLocal_8042 = 0;
	var uLocal_8043 = 0;
	var uLocal_8044 = 0;
	var uLocal_8045 = 1065353216;
	var uLocal_8046 = 0;
	var uLocal_8047 = 0;
	var uLocal_8048 = 0;
	var uLocal_8049 = 0;
	var uLocal_8050 = 0;
	var uLocal_8051 = 0;
	var uLocal_8052 = 0;
	var uLocal_8053 = 0;
	var uLocal_8054 = 0;
	var uLocal_8055 = 0;
	var uLocal_8056 = 0;
	var uLocal_8057 = 0;
	var uLocal_8058 = 0;
	var uLocal_8059 = 0;
	var uLocal_8060 = 0;
	var uLocal_8061 = 0;
	var uLocal_8062 = 0;
	var uLocal_8063 = 0;
	var uLocal_8064 = 0;
	var uLocal_8065 = 0;
	var uLocal_8066 = 0;
	var uLocal_8067 = 0;
	var uLocal_8068 = 0;
	var uLocal_8069 = 0;
	var uLocal_8070 = 0;
	var uLocal_8071 = 0;
	var uLocal_8072 = -1;
	var uLocal_8073 = 0;
	var uLocal_8074 = 0;
	var uLocal_8075 = 0;
	var uLocal_8076 = 0;
	var uLocal_8077 = 0;
	var uLocal_8078 = 0;
	var uLocal_8079 = 0;
	var uLocal_8080 = 0;
	var uLocal_8081 = 0;
	var uLocal_8082 = 0;
	var uLocal_8083 = 0;
	var uLocal_8084 = 0;
	var uLocal_8085 = 0;
	var uLocal_8086 = 0;
	var uLocal_8087 = 0;
	var uLocal_8088 = 0;
	var uLocal_8089 = 0;
	var uLocal_8090 = 0;
	var uLocal_8091 = 0;
	var uLocal_8092 = 0;
	var uLocal_8093 = 0;
	var uLocal_8094 = 0;
	var uLocal_8095 = 0;
	var uLocal_8096 = 0;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 0;
	var uLocal_8102 = 1065353216;
	var uLocal_8103 = 0;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = 0;
	var uLocal_8107 = 0;
	var uLocal_8108 = 0;
	var uLocal_8109 = 0;
	var uLocal_8110 = 0;
	var uLocal_8111 = 0;
	var uLocal_8112 = 0;
	var uLocal_8113 = 0;
	var uLocal_8114 = 0;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = 0;
	var uLocal_8118 = 0;
	var uLocal_8119 = 0;
	var uLocal_8120 = 0;
	var uLocal_8121 = 0;
	var uLocal_8122 = 0;
	var uLocal_8123 = 0;
	var uLocal_8124 = 0;
	var uLocal_8125 = 0;
	var uLocal_8126 = 0;
	var uLocal_8127 = 0;
	var uLocal_8128 = 0;
	var uLocal_8129 = -1;
	var uLocal_8130 = 0;
	var uLocal_8131 = 0;
	var uLocal_8132 = 0;
	var uLocal_8133 = 0;
	var uLocal_8134 = 0;
	var uLocal_8135 = 0;
	var uLocal_8136 = 0;
	var uLocal_8137 = 0;
	var uLocal_8138 = 0;
	var uLocal_8139 = 0;
	var uLocal_8140 = 0;
	var uLocal_8141 = 0;
	var uLocal_8142 = 0;
	var uLocal_8143 = 0;
	var uLocal_8144 = 0;
	var uLocal_8145 = 0;
	var uLocal_8146 = 0;
	var uLocal_8147 = 0;
	var uLocal_8148 = 0;
	var uLocal_8149 = 0;
	var uLocal_8150 = 0;
	var uLocal_8151 = 0;
	var uLocal_8152 = 0;
	var uLocal_8153 = 0;
	var uLocal_8154 = 0;
	var uLocal_8155 = 0;
	var uLocal_8156 = 0;
	var uLocal_8157 = 0;
	var uLocal_8158 = 0;
	var uLocal_8159 = 1065353216;
	var uLocal_8160 = 0;
	var uLocal_8161 = 0;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 0;
	var uLocal_8167 = 0;
	var uLocal_8168 = 0;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = 0;
	var uLocal_8172 = 0;
	var uLocal_8173 = 0;
	var uLocal_8174 = 0;
	var uLocal_8175 = 0;
	var uLocal_8176 = 0;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 0;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 0;
	var uLocal_8185 = 0;
	var uLocal_8186 = -1;
	var uLocal_8187 = 0;
	var uLocal_8188 = 0;
	var uLocal_8189 = 0;
	var uLocal_8190 = 0;
	var uLocal_8191 = 0;
	var uLocal_8192 = 0;
	var uLocal_8193 = 0;
	var uLocal_8194 = 0;
	var uLocal_8195 = 0;
	var uLocal_8196 = 0;
	var uLocal_8197 = 0;
	var uLocal_8198 = 0;
	var uLocal_8199 = 0;
	var uLocal_8200 = 0;
	var uLocal_8201 = 0;
	var uLocal_8202 = 0;
	var uLocal_8203 = 0;
	var uLocal_8204 = 0;
	var uLocal_8205 = 0;
	var uLocal_8206 = 0;
	var uLocal_8207 = 0;
	var uLocal_8208 = 0;
	var uLocal_8209 = 0;
	var uLocal_8210 = 0;
	var uLocal_8211 = 0;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 0;
	var uLocal_8215 = 0;
	var uLocal_8216 = 1065353216;
	var uLocal_8217 = 0;
	var uLocal_8218 = 0;
	var uLocal_8219 = 0;
	var uLocal_8220 = 0;
	var uLocal_8221 = 0;
	var uLocal_8222 = 0;
	var uLocal_8223 = 0;
	var uLocal_8224 = 0;
	var uLocal_8225 = 0;
	var uLocal_8226 = 0;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 0;
	var uLocal_8232 = 0;
	var uLocal_8233 = 0;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = 0;
	var uLocal_8237 = 0;
	var uLocal_8238 = 0;
	var uLocal_8239 = 0;
	var uLocal_8240 = 0;
	var uLocal_8241 = 0;
	var uLocal_8242 = 0;
	var uLocal_8243 = -1;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 0;
	var uLocal_8250 = 0;
	var uLocal_8251 = 0;
	var uLocal_8252 = 0;
	var uLocal_8253 = 0;
	var uLocal_8254 = 0;
	var uLocal_8255 = 0;
	var uLocal_8256 = 0;
	var uLocal_8257 = 0;
	var uLocal_8258 = 0;
	var uLocal_8259 = 0;
	var uLocal_8260 = 0;
	var uLocal_8261 = 0;
	var uLocal_8262 = 0;
	var uLocal_8263 = 0;
	var uLocal_8264 = 0;
	var uLocal_8265 = 0;
	var uLocal_8266 = 0;
	var uLocal_8267 = 0;
	var uLocal_8268 = 0;
	var uLocal_8269 = 0;
	var uLocal_8270 = 0;
	var uLocal_8271 = 0;
	var uLocal_8272 = 0;
	var uLocal_8273 = 1065353216;
	var uLocal_8274 = 0;
	var uLocal_8275 = 0;
	var uLocal_8276 = 0;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 0;
	var uLocal_8280 = 0;
	var uLocal_8281 = 0;
	var uLocal_8282 = 0;
	var uLocal_8283 = 0;
	var uLocal_8284 = 0;
	var uLocal_8285 = 0;
	var uLocal_8286 = 0;
	var uLocal_8287 = 0;
	var uLocal_8288 = 0;
	var uLocal_8289 = 0;
	var uLocal_8290 = 0;
	var uLocal_8291 = 0;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 0;
	var uLocal_8297 = 0;
	var uLocal_8298 = 0;
	var uLocal_8299 = 0;
	var uLocal_8300 = -1;
	var uLocal_8301 = 0;
	var uLocal_8302 = 0;
	var uLocal_8303 = 0;
	var uLocal_8304 = 0;
	var uLocal_8305 = 0;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 0;
	var uLocal_8315 = 0;
	var uLocal_8316 = 0;
	var uLocal_8317 = 0;
	var uLocal_8318 = 0;
	var uLocal_8319 = 0;
	var uLocal_8320 = 0;
	var uLocal_8321 = 0;
	var uLocal_8322 = 0;
	var uLocal_8323 = 0;
	var uLocal_8324 = 0;
	var uLocal_8325 = 0;
	var uLocal_8326 = 0;
	var uLocal_8327 = 0;
	var uLocal_8328 = 0;
	var uLocal_8329 = 0;
	var uLocal_8330 = 1065353216;
	var uLocal_8331 = 0;
	var uLocal_8332 = 0;
	var uLocal_8333 = 0;
	var uLocal_8334 = 0;
	var uLocal_8335 = 0;
	var uLocal_8336 = 0;
	var uLocal_8337 = 0;
	var uLocal_8338 = 0;
	var uLocal_8339 = 0;
	var uLocal_8340 = 0;
	var uLocal_8341 = 0;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 0;
	var uLocal_8345 = 0;
	var uLocal_8346 = 0;
	var uLocal_8347 = 0;
	var uLocal_8348 = 0;
	var uLocal_8349 = 0;
	var uLocal_8350 = 0;
	var uLocal_8351 = 0;
	var uLocal_8352 = 0;
	var uLocal_8353 = 0;
	var uLocal_8354 = 0;
	var uLocal_8355 = 0;
	var uLocal_8356 = 0;
	var uLocal_8357 = -1;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 0;
	var uLocal_8362 = 0;
	var uLocal_8363 = 0;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = 0;
	var uLocal_8367 = 0;
	var uLocal_8368 = 0;
	var uLocal_8369 = 0;
	var uLocal_8370 = 0;
	var uLocal_8371 = 0;
	var uLocal_8372 = 0;
	var uLocal_8373 = 0;
	var uLocal_8374 = 0;
	var uLocal_8375 = 0;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 0;
	var uLocal_8380 = 0;
	var uLocal_8381 = 0;
	var uLocal_8382 = 0;
	var uLocal_8383 = 0;
	var uLocal_8384 = 0;
	var uLocal_8385 = 0;
	var uLocal_8386 = 0;
	var uLocal_8387 = 1065353216;
	var uLocal_8388 = 0;
	var uLocal_8389 = 0;
	var uLocal_8390 = 0;
	var uLocal_8391 = 0;
	var uLocal_8392 = 0;
	var uLocal_8393 = 0;
	var uLocal_8394 = 0;
	var uLocal_8395 = 0;
	var uLocal_8396 = 0;
	var uLocal_8397 = 0;
	var uLocal_8398 = 0;
	var uLocal_8399 = 0;
	var uLocal_8400 = 0;
	var uLocal_8401 = 0;
	var uLocal_8402 = 0;
	var uLocal_8403 = 0;
	var uLocal_8404 = 0;
	var uLocal_8405 = 0;
	var uLocal_8406 = 0;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 0;
	var uLocal_8410 = 0;
	var uLocal_8411 = 0;
	var uLocal_8412 = 0;
	var uLocal_8413 = 0;
	var uLocal_8414 = -1;
	var uLocal_8415 = 0;
	var uLocal_8416 = 0;
	var uLocal_8417 = 0;
	var uLocal_8418 = 0;
	var uLocal_8419 = 0;
	var uLocal_8420 = 0;
	var uLocal_8421 = 0;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 0;
	var uLocal_8427 = 0;
	var uLocal_8428 = 0;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = 0;
	var uLocal_8432 = 0;
	var uLocal_8433 = 0;
	var uLocal_8434 = 0;
	var uLocal_8435 = 0;
	var uLocal_8436 = 0;
	var uLocal_8437 = 0;
	var uLocal_8438 = 0;
	var uLocal_8439 = 0;
	var uLocal_8440 = 0;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 1065353216;
	var uLocal_8445 = 0;
	var uLocal_8446 = 0;
	var uLocal_8447 = 0;
	var uLocal_8448 = 0;
	var uLocal_8449 = 0;
	var uLocal_8450 = 0;
	var uLocal_8451 = 0;
	var uLocal_8452 = 0;
	var uLocal_8453 = 0;
	var uLocal_8454 = 0;
	var uLocal_8455 = 0;
	var uLocal_8456 = 0;
	var uLocal_8457 = 0;
	var uLocal_8458 = 0;
	var uLocal_8459 = 0;
	var uLocal_8460 = 0;
	var uLocal_8461 = 0;
	var uLocal_8462 = 0;
	var uLocal_8463 = 0;
	var uLocal_8464 = 0;
	var uLocal_8465 = 0;
	var uLocal_8466 = 0;
	var uLocal_8467 = 0;
	var uLocal_8468 = 0;
	var uLocal_8469 = 0;
	var uLocal_8470 = 0;
	var uLocal_8471 = -1;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 0;
	var uLocal_8475 = 0;
	var uLocal_8476 = 0;
	var uLocal_8477 = 0;
	var uLocal_8478 = 0;
	var uLocal_8479 = 0;
	var uLocal_8480 = 0;
	var uLocal_8481 = 0;
	var uLocal_8482 = 0;
	var uLocal_8483 = 0;
	var uLocal_8484 = 0;
	var uLocal_8485 = 0;
	var uLocal_8486 = 0;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 0;
	var uLocal_8492 = 0;
	var uLocal_8493 = 0;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = 0;
	var uLocal_8497 = 0;
	var uLocal_8498 = 0;
	var uLocal_8499 = 0;
	var uLocal_8500 = 0;
	var uLocal_8501 = 1065353216;
	var uLocal_8502 = 0;
	var uLocal_8503 = 0;
	var uLocal_8504 = 0;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 0;
	var uLocal_8508 = 0;
	var uLocal_8509 = 0;
	var uLocal_8510 = 0;
	var uLocal_8511 = 0;
	var uLocal_8512 = 0;
	var uLocal_8513 = 0;
	var uLocal_8514 = 0;
	var uLocal_8515 = 0;
	var uLocal_8516 = 0;
	var uLocal_8517 = 0;
	var uLocal_8518 = 0;
	var uLocal_8519 = 0;
	var uLocal_8520 = 0;
	var uLocal_8521 = 0;
	var uLocal_8522 = 0;
	var uLocal_8523 = 0;
	var uLocal_8524 = 0;
	var uLocal_8525 = 0;
	var uLocal_8526 = 0;
	var uLocal_8527 = 0;
	var uLocal_8528 = -1;
	var uLocal_8529 = 0;
	var uLocal_8530 = 0;
	var uLocal_8531 = 0;
	var uLocal_8532 = 0;
	var uLocal_8533 = 0;
	var uLocal_8534 = 0;
	var uLocal_8535 = 0;
	var uLocal_8536 = 0;
	var uLocal_8537 = 0;
	var uLocal_8538 = 0;
	var uLocal_8539 = 0;
	var uLocal_8540 = 0;
	var uLocal_8541 = 0;
	var uLocal_8542 = 0;
	var uLocal_8543 = 0;
	var uLocal_8544 = 0;
	var uLocal_8545 = 0;
	var uLocal_8546 = 0;
	var uLocal_8547 = 0;
	var uLocal_8548 = 0;
	var uLocal_8549 = 0;
	var uLocal_8550 = 0;
	var uLocal_8551 = 0;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 0;
	var uLocal_8557 = 0;
	var uLocal_8558 = 1065353216;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = 0;
	var uLocal_8562 = 0;
	var uLocal_8563 = 0;
	var uLocal_8564 = 0;
	var uLocal_8565 = 0;
	var uLocal_8566 = 0;
	var uLocal_8567 = 0;
	var uLocal_8568 = 0;
	var uLocal_8569 = 0;
	var uLocal_8570 = 0;
	var uLocal_8571 = 0;
	var uLocal_8572 = 0;
	var uLocal_8573 = 0;
	var uLocal_8574 = 0;
	var uLocal_8575 = 0;
	var uLocal_8576 = 0;
	var uLocal_8577 = 0;
	var uLocal_8578 = 0;
	var uLocal_8579 = 0;
	var uLocal_8580 = 0;
	var uLocal_8581 = 0;
	var uLocal_8582 = 0;
	var uLocal_8583 = 0;
	var uLocal_8584 = 0;
	var uLocal_8585 = -1;
	var uLocal_8586 = 0;
	var uLocal_8587 = 0;
	var uLocal_8588 = 0;
	var uLocal_8589 = 0;
	var uLocal_8590 = 0;
	var uLocal_8591 = 0;
	var uLocal_8592 = 0;
	var uLocal_8593 = 0;
	var uLocal_8594 = 0;
	var uLocal_8595 = 0;
	var uLocal_8596 = 0;
	var uLocal_8597 = 0;
	var uLocal_8598 = 0;
	var uLocal_8599 = 0;
	var uLocal_8600 = 0;
	var uLocal_8601 = 0;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 0;
	var uLocal_8605 = 0;
	var uLocal_8606 = 0;
	var uLocal_8607 = 0;
	var uLocal_8608 = 0;
	var uLocal_8609 = 0;
	var uLocal_8610 = 0;
	var uLocal_8611 = 0;
	var uLocal_8612 = 0;
	var uLocal_8613 = 0;
	var uLocal_8614 = 0;
	var uLocal_8615 = 1065353216;
	var uLocal_8616 = 0;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 0;
	var uLocal_8623 = 0;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = 0;
	var uLocal_8627 = 0;
	var uLocal_8628 = 0;
	var uLocal_8629 = 0;
	var uLocal_8630 = 0;
	var uLocal_8631 = 0;
	var uLocal_8632 = 0;
	var uLocal_8633 = 0;
	var uLocal_8634 = 0;
	var uLocal_8635 = 0;
	var uLocal_8636 = 0;
	var uLocal_8637 = 0;
	var uLocal_8638 = 0;
	var uLocal_8639 = 0;
	var uLocal_8640 = 0;
	var uLocal_8641 = 0;
	var uLocal_8642 = -1;
	var uLocal_8643 = 0;
	var uLocal_8644 = 0;
	var uLocal_8645 = 0;
	var uLocal_8646 = 0;
	var uLocal_8647 = 0;
	var uLocal_8648 = 0;
	var uLocal_8649 = 0;
	var uLocal_8650 = 0;
	var uLocal_8651 = 0;
	var uLocal_8652 = 0;
	var uLocal_8653 = 0;
	var uLocal_8654 = 0;
	var uLocal_8655 = 0;
	var uLocal_8656 = 0;
	var uLocal_8657 = 0;
	var uLocal_8658 = 0;
	var uLocal_8659 = 0;
	var uLocal_8660 = 0;
	var uLocal_8661 = 0;
	var uLocal_8662 = 0;
	var uLocal_8663 = 0;
	var uLocal_8664 = 0;
	var uLocal_8665 = 0;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 0;
	var uLocal_8670 = 0;
	var uLocal_8671 = 0;
	var uLocal_8672 = 1065353216;
	var uLocal_8673 = 0;
	var uLocal_8674 = 0;
	var uLocal_8675 = 0;
	var uLocal_8676 = 0;
	var uLocal_8677 = 0;
	var uLocal_8678 = 0;
	var uLocal_8679 = 0;
	var uLocal_8680 = 0;
	var uLocal_8681 = 0;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 0;
	var uLocal_8687 = 0;
	var uLocal_8688 = 0;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = 0;
	var uLocal_8692 = 0;
	var uLocal_8693 = 0;
	var uLocal_8694 = 0;
	var uLocal_8695 = 0;
	var uLocal_8696 = 0;
	var uLocal_8697 = 0;
	var uLocal_8698 = 0;
	var uLocal_8699 = -1;
	var uLocal_8700 = 0;
	var uLocal_8701 = 0;
	var uLocal_8702 = 0;
	var uLocal_8703 = 0;
	var uLocal_8704 = 0;
	var uLocal_8705 = 0;
	var uLocal_8706 = 0;
	var uLocal_8707 = 0;
	var uLocal_8708 = 0;
	var uLocal_8709 = 0;
	var uLocal_8710 = 0;
	var uLocal_8711 = 0;
	var uLocal_8712 = 0;
	var uLocal_8713 = 0;
	var uLocal_8714 = 0;
	var uLocal_8715 = 0;
	var uLocal_8716 = 0;
	var uLocal_8717 = 0;
	var uLocal_8718 = 0;
	var uLocal_8719 = 0;
	var uLocal_8720 = 0;
	var uLocal_8721 = 0;
	var uLocal_8722 = 0;
	var uLocal_8723 = 0;
	var uLocal_8724 = 0;
	var uLocal_8725 = 0;
	var uLocal_8726 = 0;
	var uLocal_8727 = 0;
	var uLocal_8728 = 0;
	var uLocal_8729 = 1065353216;
	var uLocal_8730 = 0;
	var uLocal_8731 = 0;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 0;
	var uLocal_8735 = 0;
	var uLocal_8736 = 0;
	var uLocal_8737 = 0;
	var uLocal_8738 = 0;
	var uLocal_8739 = 0;
	var uLocal_8740 = 0;
	var uLocal_8741 = 0;
	var uLocal_8742 = 0;
	var uLocal_8743 = 0;
	var uLocal_8744 = 0;
	var uLocal_8745 = 0;
	var uLocal_8746 = 0;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 0;
	var uLocal_8752 = 0;
	var uLocal_8753 = 16;
	var uLocal_8754 = 0;
	var uLocal_8755 = -1082130432;
	var uLocal_8756 = 0;
	var uLocal_8757 = -1082130432;
	var uLocal_8758 = 0;
	var uLocal_8759 = -1082130432;
	var uLocal_8760 = 0;
	var uLocal_8761 = -1082130432;
	var uLocal_8762 = 0;
	var uLocal_8763 = -1082130432;
	var uLocal_8764 = 0;
	var uLocal_8765 = -1082130432;
	var uLocal_8766 = 0;
	var uLocal_8767 = -1082130432;
	var uLocal_8768 = 0;
	var uLocal_8769 = -1082130432;
	var uLocal_8770 = 0;
	var uLocal_8771 = -1082130432;
	var uLocal_8772 = 0;
	var uLocal_8773 = -1082130432;
	var uLocal_8774 = 0;
	var uLocal_8775 = -1082130432;
	var uLocal_8776 = 0;
	var uLocal_8777 = -1082130432;
	var uLocal_8778 = 0;
	var uLocal_8779 = -1082130432;
	var uLocal_8780 = 0;
	var uLocal_8781 = -1082130432;
	var uLocal_8782 = 0;
	var uLocal_8783 = -1082130432;
	var uLocal_8784 = 0;
	var uLocal_8785 = -1082130432;
	var uLocal_8786 = 16;
	var uLocal_8787 = 0;
	var uLocal_8788 = -1082130432;
	var uLocal_8789 = 0;
	var uLocal_8790 = -1082130432;
	var uLocal_8791 = 0;
	var uLocal_8792 = -1082130432;
	var uLocal_8793 = 0;
	var uLocal_8794 = -1082130432;
	var uLocal_8795 = 0;
	var uLocal_8796 = -1082130432;
	var uLocal_8797 = 0;
	var uLocal_8798 = -1082130432;
	var uLocal_8799 = 0;
	var uLocal_8800 = -1082130432;
	var uLocal_8801 = 0;
	var uLocal_8802 = -1082130432;
	var uLocal_8803 = 0;
	var uLocal_8804 = -1082130432;
	var uLocal_8805 = 0;
	var uLocal_8806 = -1082130432;
	var uLocal_8807 = 0;
	var uLocal_8808 = -1082130432;
	var uLocal_8809 = 0;
	var uLocal_8810 = -1082130432;
	var uLocal_8811 = 0;
	var uLocal_8812 = -1082130432;
	var uLocal_8813 = 0;
	var uLocal_8814 = -1082130432;
	var uLocal_8815 = 0;
	var uLocal_8816 = -1082130432;
	var uLocal_8817 = 0;
	var uLocal_8818 = -1082130432;
	var uLocal_8819 = 0;
	var uLocal_8820 = 0;
	var uLocal_8821 = 0;
	var uLocal_8822 = 0;
	var uLocal_8823 = 0;
	var uLocal_8824 = 0;
	var uLocal_8825 = 0;
	var uLocal_8826 = 0;
	var uLocal_8827 = 0;
	var uLocal_8828 = 0;
	var uLocal_8829 = 0;
	var uLocal_8830 = 0;
	var uLocal_8831 = 0;
	var uLocal_8832 = 0;
	var uLocal_8833 = 0;
	var uLocal_8834 = 0;
	var uLocal_8835 = -1082130432;
	var uLocal_8836 = -1082130432;
	var uLocal_8837 = 1;
	var uLocal_8838 = 1;
	var uLocal_8839 = 1;
	var uLocal_8840 = -1;
	var uLocal_8841 = -1;
	var uLocal_8842 = -1;
	char* sLocal_8843 = NULL;
	char* sLocal_8844 = NULL;
	char* sLocal_8845 = NULL;
	char* sLocal_8846 = NULL;
	float fLocal_8847 = 0f;
	float fLocal_8848 = 0f;
	var uLocal_8849 = 0;
	float fLocal_8850 = 0f;
	var uLocal_8851 = 0;
	float fLocal_8852 = 0f;
	var uLocal_8853 = 0;
	float fLocal_8854 = 0f;
	int iLocal_8855 = 0;
	int iLocal_8856 = 0;
	struct<3> Local_8857 = { 0, 0, 0 } ;
	float fLocal_8860 = 0f;
	struct<3> Local_8861 = { 0, 0, 0 } ;
	float fLocal_8864 = 0f;
	var uLocal_8865 = 0;
	var uLocal_8866 = 0;
	var uLocal_8867 = 0;
	var uLocal_8868 = 0;
	struct<3> Local_8869 = { 0, 0, 0 } ;
	float fLocal_8872 = 0f;
	int iLocal_8873 = 0;
	struct<3> Local_8874 = { 0, 0, 0 } ;
	struct<3> Local_8877 = { 0, 0, 0 } ;
	struct<3> Local_8880 = { 0, 0, 0 } ;
	int iLocal_8883 = 0;
	struct<3> Local_8884 = { 0, 0, 0 } ;
	struct<3> Local_8887 = { 0, 0, 0 } ;
	struct<3> Local_8890 = { 0, 0, 0 } ;
	int iLocal_8893 = 0;
	struct<3> Local_8894 = { 0, 0, 0 } ;
	struct<3> Local_8897 = { 0, 0, 0 } ;
	struct<3> Local_8900 = { 0, 0, 0 } ;
	var uLocal_8903 = 0;
	int iLocal_8904 = 0;
	float fLocal_8905 = 0f;
	int iLocal_8906 = 0;
	int iLocal_8907 = 0;
	int iLocal_8908 = 0;
	int iLocal_8909 = 0;
	int iLocal_8910 = 0;
	int iLocal_8911 = 0;
	int iLocal_8912 = 0;
	float fLocal_8913 = 0f;
	float fLocal_8914 = 0f;
	int iLocal_8915 = 0;
	int iLocal_8916 = 0;
	float fLocal_8917 = 0f;
	float fLocal_8918 = 0f;
	float fLocal_8919 = 0f;
	float fLocal_8920 = 0f;
	var uLocal_8921 = 16;
	var uLocal_8922 = 0;
	var uLocal_8923 = 0;
	var uLocal_8924 = 0;
	var uLocal_8925 = 0;
	var uLocal_8926 = 0;
	var uLocal_8927 = 0;
	var uLocal_8928 = 0;
	var uLocal_8929 = 0;
	var uLocal_8930 = 0;
	var uLocal_8931 = 0;
	var uLocal_8932 = 0;
	var uLocal_8933 = 0;
	var uLocal_8934 = 0;
	var uLocal_8935 = 0;
	var uLocal_8936 = 0;
	var uLocal_8937 = 0;
	var uLocal_8938 = 0;
	var uLocal_8939 = 0;
	var uLocal_8940 = 0;
	var uLocal_8941 = 0;
	var uLocal_8942 = 0;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = 0;
	var uLocal_8947 = 0;
	var uLocal_8948 = 0;
	var uLocal_8949 = 0;
	var uLocal_8950 = 0;
	var uLocal_8951 = 0;
	var uLocal_8952 = 0;
	var uLocal_8953 = 0;
	var uLocal_8954 = 0;
	var uLocal_8955 = 0;
	var uLocal_8956 = 0;
	var uLocal_8957 = 0;
	var uLocal_8958 = 0;
	var uLocal_8959 = 0;
	var uLocal_8960 = 0;
	var uLocal_8961 = 0;
	var uLocal_8962 = 0;
	var uLocal_8963 = 0;
	var uLocal_8964 = 0;
	var uLocal_8965 = 0;
	var uLocal_8966 = 0;
	var uLocal_8967 = 0;
	var uLocal_8968 = 0;
	var uLocal_8969 = 0;
	var uLocal_8970 = 0;
	var uLocal_8971 = 0;
	var uLocal_8972 = 0;
	var uLocal_8973 = 0;
	var uLocal_8974 = 0;
	var uLocal_8975 = 0;
	var uLocal_8976 = 0;
	var uLocal_8977 = 0;
	var uLocal_8978 = 0;
	var uLocal_8979 = 0;
	var uLocal_8980 = 0;
	var uLocal_8981 = 0;
	var uLocal_8982 = 0;
	var uLocal_8983 = 0;
	var uLocal_8984 = 0;
	var uLocal_8985 = 0;
	var uLocal_8986 = 0;
	var uLocal_8987 = 0;
	var uLocal_8988 = 0;
	var uLocal_8989 = 0;
	var uLocal_8990 = 0;
	var uLocal_8991 = 0;
	var uLocal_8992 = 0;
	var uLocal_8993 = 0;
	var uLocal_8994 = 0;
	var uLocal_8995 = 0;
	var uLocal_8996 = 0;
	var uLocal_8997 = 0;
	var uLocal_8998 = 0;
	var uLocal_8999 = 0;
	var uLocal_9000 = 0;
	var uLocal_9001 = 0;
	var uLocal_9002 = 0;
	var uLocal_9003 = 0;
	var uLocal_9004 = 0;
	var uLocal_9005 = 0;
	var uLocal_9006 = 0;
	var uLocal_9007 = 0;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = 0;
	var uLocal_9012 = 0;
	var uLocal_9013 = 0;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = 0;
	var uLocal_9017 = 0;
	var uLocal_9018 = 0;
	var uLocal_9019 = 0;
	var uLocal_9020 = 0;
	var uLocal_9021 = 0;
	var uLocal_9022 = 0;
	var uLocal_9023 = 0;
	var uLocal_9024 = 0;
	var uLocal_9025 = 0;
	var uLocal_9026 = 0;
	var uLocal_9027 = 0;
	var uLocal_9028 = 0;
	var uLocal_9029 = 0;
	var uLocal_9030 = 0;
	var uLocal_9031 = 0;
	var uLocal_9032 = 0;
	var uLocal_9033 = 0;
	var uLocal_9034 = 0;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = 0;
	var uLocal_9038 = 0;
	var uLocal_9039 = 0;
	var uLocal_9040 = 0;
	var uLocal_9041 = 0;
	var uLocal_9042 = 0;
	var uLocal_9043 = 0;
	var uLocal_9044 = 0;
	var uLocal_9045 = 0;
	var uLocal_9046 = 0;
	var uLocal_9047 = 0;
	var uLocal_9048 = 0;
	var uLocal_9049 = 0;
	var uLocal_9050 = 0;
	var uLocal_9051 = 0;
	var uLocal_9052 = 0;
	var uLocal_9053 = 0;
	var uLocal_9054 = 0;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 0;
	var uLocal_9060 = 0;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = 0;
	var uLocal_9065 = 0;
	var uLocal_9066 = 0;
	var uLocal_9067 = 0;
	var uLocal_9068 = 0;
	var uLocal_9069 = 0;
	var uLocal_9070 = 0;
	var uLocal_9071 = 0;
	var uLocal_9072 = 0;
	var uLocal_9073 = 0;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = 0;
	var uLocal_9077 = 0;
	var uLocal_9078 = 0;
	var uLocal_9079 = 0;
	var uLocal_9080 = 0;
	var uLocal_9081 = 0;
	var uLocal_9082 = 0;
	var uLocal_9083 = 0;
	var uLocal_9084 = 0;
	var uLocal_9085 = 0;
	var uLocal_9086 = 0;
	var uLocal_9087 = 0;
	var uLocal_9088 = 0;
	var uLocal_9089 = 0;
	var uLocal_9090 = 0;
	char* sLocal_9091 = NULL;
	int iLocal_9092 = 0;
	float fLocal_9093 = 0f;
	float fLocal_9094 = 0f;
	int iLocal_9095 = 0;
	int iLocal_9096 = 0;
	int iLocal_9097 = 0;
	struct<3> Local_9098 = { 0, 0, 0 } ;
	struct<3> Local_9101 = { 0, 0, 0 } ;
	float fLocal_9104 = 0f;
	bool bLocal_9105 = 0;
	bool bLocal_9106 = 0;
	bool bLocal_9107 = 0;
	int iLocal_9108 = 0;
	int iLocal_9109 = 0;
	int iLocal_9110 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
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
	fLocal_27 = 1f;
	bLocal_31 = true;
	iLocal_38 = 1;
	bLocal_60 = true;
	fLocal_2241 = 120f;
	fLocal_2242 = 0f;
	fLocal_2244 = 1f;
	fLocal_2245 = 0f;
	fLocal_2246 = 1f;
	fLocal_2247 = 30f;
	fLocal_2249 = 1f;
	fLocal_2250 = 5f;
	fLocal_2251 = 1f;
	fLocal_2252 = 1f;
	fLocal_2253 = 100f;
	fLocal_2254 = 100f;
	fLocal_2255 = 0f;
	fLocal_2256 = 7000f;
	fLocal_2257 = 0f;
	fLocal_2258 = 0f;
	fLocal_2259 = 0.3f;
	fLocal_2260 = 0.5f;
	fLocal_2261 = 50f;
	iLocal_3497 = -1;
	iLocal_3505 = -1;
	iLocal_3506 = -1;
	iLocal_5794 = 1;
	bLocal_5805 = true;
	Local_5806 = { 0f, 0f, 0f };
	fLocal_5809 = 0f;
	Local_5810 = { 117.105f, -414.6006f, 40.1527f };
	Local_5813 = { 2577.23f, 360.6015f, 107.8564f };
	Local_5816 = { 2583.554f, 360.265f, 107.7638f };
	Local_5819 = { 2682.775f, 5131.357f, 43.8418f };
	Local_5822 = { 2684.931f, 5131.944f, 43.8593f };
	Local_5825 = { 2571.36f, 360.45f, 107.4569f };
	Local_5828 = { 488.887f, -1323.684f, 28.1722f };
	sLocal_5831 = "ALgasstation";
	sLocal_5832 = "ALubersetup";
	sLocal_5833 = "ALubercop";
	sLocal_5834 = "ALgarage";
	fLocal_5835 = 1f;
	sLocal_5836 = "misscarsteal3";
	sLocal_5837 = "misscarsteal3pullover";
	iLocal_5871 = -449343164;
	sLocal_6098 = "CST3AUD";
	bLocal_6359 = true;
	sLocal_8843 = "misscarsteal3leadinout";
	sLocal_8844 = "veh@bike@quad@front@base";
	sLocal_8845 = "shake_cam_all@";
	sLocal_8846 = "carsteal1_customswitch";
	fLocal_8847 = 0f;
	fLocal_8848 = 3.8f;
	fLocal_8850 = 0f;
	fLocal_8852 = 4500f;
	fLocal_8854 = 0f;
	iLocal_8855 = 5000;
	iLocal_8856 = 800;
	Local_8857 = { 2686.879f, 5131.908f, 43.8515f };
	fLocal_8860 = 151.6033f;
	Local_8861 = { 2682.775f, 5131.357f, 43.8418f };
	fLocal_8864 = 147.9465f;
	Local_8869 = { 2801.3f, 4435.5f, 47.9f };
	fLocal_8872 = 14.29f;
	Local_8874 = { 2683.3f, 5132.5f, 43.8f };
	Local_8884 = { 2683f, 5130.8f, 43.9f };
	Local_8894 = { 2683.3f, 5132.5f, 44.8f };
	fLocal_8905 = 30000f;
	iLocal_8906 = -1;
	iLocal_8907 = -1;
	iLocal_8908 = -1;
	fLocal_8913 = 0.54f;
	fLocal_8914 = 0.63f;
	fLocal_8917 = 0.54f;
	fLocal_8918 = 0.78f;
	fLocal_8919 = 0.57f;
	fLocal_8920 = 0.78f;
	fLocal_9093 = 1f;
	fLocal_9094 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_838(0, 1);
	}
	MISC::SET_MISSION_FLAG(1);
	if (GlobalFunc_7091(Local_5806, 1))
	{
		GlobalFunc_10701(135.7141f, -432.904f, 40.0295f, 162.7001f, 0, 145);
	}
	if (GlobalFunc_8315() != 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
		{
			if (!PED::IS_PED_INJURED(Global_86864.f_9[3]))
			{
				uLocal_6281[1] = Global_86864.f_9[3];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_6281[1], 1, 1);
				iVar0 = PLAYER::PLAYER_PED_ID();
				GlobalFunc_9134(&uLocal_6281, 1);
				func_802(&uLocal_6281, 1, 1, 1);
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(iVar0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_86864[0]))
		{
			iLocal_5850 = Global_86864[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5850, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_86864[1]))
		{
			iLocal_5844 = Global_86864[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5844, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
		{
			iLocal_5840 = Global_86864.f_9[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5840, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[1]))
		{
			iLocal_5841 = Global_86864.f_9[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5841, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_86864[2]))
		{
			iLocal_5849 = Global_86864[2];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_5849, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[4]))
		{
			uLocal_6281[2] = Global_86864.f_9[4];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_6281[2], 1, 1);
		}
	}
	if (!GlobalFunc_Is_Mission_Retry())
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("CAR_1_INT_CONCAT"))
		{
			HUD::THEFEED_FLUSH_QUEUE();
			GlobalFunc_8316(1, 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844) && !ENTITY::IS_ENTITY_DEAD(iLocal_5844))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5844, "Franklins_car", 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5840) && !ENTITY::IS_ENTITY_DEAD(iLocal_5840))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5840, "DEVIN", 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5841) && !ENTITY::IS_ENTITY_DEAD(iLocal_5841))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5841, "MOLLY", 1, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5849) && !ENTITY::IS_ENTITY_DEAD(iLocal_5849))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5849, "Devins_car", 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5850) && !ENTITY::IS_ENTITY_DEAD(iLocal_5850))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5850, "Car_1_Felon", 1, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_6281[2]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_6281[2], "TREVOR", 1, 0, 0);
			}
			CUTSCENE::START_CUTSCENE(0);
			SYSTEM::WAIT(0);
			GlobalFunc_6791(0, 0);
			GlobalFunc_6791(2, 0);
			GlobalFunc_10063(110.8117f, -421.1416f, 36.19677f, 126.1116f, -380.1021f, 57.26146f, 40f, 120.5374f, -429.8324f, 40.0967f, 289.2337f, GlobalFunc_625(), 1, 1, 1, 0, 0);
			MISC::CLEAR_AREA(115.5694f, -400.4633f, 40.26558f, 20f, 1, 0, 0, 0);
			GRAPHICS::_0x1612C45F9E3E0D44();
			CAM::STOP_GAMEPLAY_HINT(1);
			func_785();
			iLocal_5796 = 1;
		}
	}
	GlobalFunc_2240(&(uLocal_6281[0]));
	GlobalFunc_562(8);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_IFoughtTheLaw", 0);
		func_778();
		if (iLocal_6096 <= 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845))
				{
					func_775(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5845), sLocal_5832);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_5845, fLocal_5835);
					iLocal_47 = 1;
					func_774();
					func_751(iLocal_5845, fLocal_5835);
					fLocal_2253 = 300f;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_5846, fLocal_5835);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_5844, (fLocal_5835 * 1.25f));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5847))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_5847, (fLocal_5835 * 1.25f));
				}
			}
		}
		else if (iLocal_6096 == 6 && iLocal_5792)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5847))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
				{
					func_775(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847), sLocal_5833);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_5847, fLocal_5835);
					iLocal_47 = 1;
					func_774();
					func_751(iLocal_5847, fLocal_5835);
					fLocal_2253 = 300f;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_5845, fLocal_5835);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845))
					{
						GlobalFunc_2513(&iLocal_5846, VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5845));
					}
					else
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_5846, fLocal_5835);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(iLocal_5847) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847)) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) < 153107.8f)
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_5844, fLocal_5835);
					}
					else
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_5844, 0.7f);
					}
				}
			}
		}
		if (iLocal_5802)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 479.0568f, -1316.825f, 28.2038f, 1) < 240f)
			{
				GlobalFunc_7934(21, 0);
				iLocal_5802 = 0;
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 528.9999f, -1417.176f, 27.14547f, 424.9881f, -1212.275f, 139.6725f, 150f, 0, 1, 0) || iLocal_6096 == 9)
		{
			if (!func_742("ChopShopDoors"))
			{
				ENTITY::CREATE_MODEL_HIDE(498.7252f, -1317.755f, 28.2534f, 1f, joaat("prop_sc1_06_gate_l"), 1);
				ENTITY::CREATE_MODEL_HIDE(494.6904f, -1312.066f, 28.2534f, 1f, joaat("prop_sc1_06_gate_r"), 1);
				func_739("ChopShopDoors", 1);
			}
			if (iLocal_5867 == 0)
			{
				iLocal_5867 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.1439f, -1314.47f, 28.2017f, "v_chopshop");
			}
			else if (iLocal_5801 == 0)
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_5867);
				if (!INTERIOR::IS_INTERIOR_READY(iLocal_5867))
				{
				}
				else
				{
					iLocal_5801 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 528.9999f, -1417.176f, 27.14547f, 424.9881f, -1212.275f, 139.6725f, 150f, 0, 1, 0))
		{
			if (func_742("ChopShopDoors"))
			{
				ENTITY::REMOVE_MODEL_HIDE(498.7252f, -1317.755f, 28.2534f, 1f, joaat("prop_sc1_06_gate_l"), 0);
				ENTITY::REMOVE_MODEL_HIDE(494.6904f, -1312.066f, 28.2534f, 1f, joaat("prop_sc1_06_gate_r"), 0);
				func_739("ChopShopDoors", 0);
			}
			if (iLocal_5867 != 0)
			{
				if (iLocal_5801 == 1)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_5867);
					iLocal_5801 = 0;
				}
			}
		}
		if (iLocal_5794 == 0)
		{
			if (HUD::IS_RADAR_PREFERENCE_SWITCHED_ON())
			{
				HUD::DISPLAY_RADAR(0);
			}
			if (HUD::IS_HUD_PREFERENCE_SWITCHED_ON())
			{
				HUD::DISPLAY_HUD(0);
			}
		}
		else
		{
			if (HUD::IS_RADAR_PREFERENCE_SWITCHED_ON())
			{
				HUD::DISPLAY_RADAR(1);
			}
			if (HUD::IS_HUD_PREFERENCE_SWITCHED_ON())
			{
				HUD::DISPLAY_HUD(1);
			}
		}
		if (!bLocal_5804)
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				bLocal_5804 = true;
				GlobalFunc_553(115);
			}
		}
		if (iLocal_6096 == 6)
		{
			if (CAM::DOES_CAM_EXIST(Local_7602.f_1) && CAM::IS_CAM_ACTIVE(Local_7602.f_1))
			{
				iVar1 = 0;
				iVar2 = 0;
				iVar3 = 0;
				iVar4 = 0;
				func_737(&iVar1, &iVar2, &iVar3, &iVar4, 0);
				func_724(&Local_7602);
				if ((((((CAM::GET_CAM_SPLINE_PHASE(Local_7602.f_1) >= 1f || iVar1 != 0) || iVar2 != 0) || iVar3 != 0) || iVar4 != 0) || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 72))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
					{
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, fLocal_8848, 1, 0);
					}
					CAM::SET_CAM_ACTIVE(Local_7602.f_1, 0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
			}
		}
		if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != 0)
		{
			GlobalFunc_503(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1);
			GlobalFunc_504(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1);
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		func_719();
		func_718();
		if (iLocal_6096 >= 4 && iLocal_6096 <= 8)
		{
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
		}
		else
		{
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
		}
		switch (iLocal_6096)
		{
			case 0:
				if (func_714(GlobalFunc_4917(1)) && func_714(joaat("f620")))
				{
					func_651();
				}
				break;
			
			case 1:
				func_650();
				break;
			
			case 2:
				if (func_647(1, sLocal_5831) && func_647(2, sLocal_5831))
				{
					func_585();
				}
				break;
			
			case 3:
				if (((((func_714(joaat("ig_car3guy2")) && func_714(joaat("ig_car3guy1"))) && func_714(joaat("cheetah"))) && func_714(joaat("entityxf"))) && func_647(500, sLocal_5832)) && func_647(501, sLocal_5832))
				{
					func_581();
				}
				break;
			
			case 4:
				if ((((func_647(500, sLocal_5832) && func_647(501, sLocal_5832)) && func_647(401, sLocal_5832)) && func_647(403, sLocal_5832)) && func_578(sLocal_5837))
				{
					func_570();
				}
				break;
			
			case 5:
				if ((((((((func_714(GlobalFunc_4917(0)) && func_714(GlobalFunc_4917(2))) && func_714(joaat("policeb"))) && func_714(joaat("prop_player_phone_01"))) && func_714(joaat("prop_donut_02"))) && func_714(joaat("prop_donut_02b"))) && func_647(600, "ALuberSetup")) && func_578(sLocal_8843)) && func_578(sLocal_8844))
				{
					func_538();
				}
				break;
			
			case 6:
				if (((((func_647(500, sLocal_5833) && func_647(400, sLocal_5833)) && func_647(401, sLocal_5833)) && func_647(402, sLocal_5833)) && func_578(sLocal_5836)) && func_578(sLocal_5837))
				{
					func_464();
				}
				break;
			
			case 7:
				func_462();
				break;
			
			case 8:
				if (func_714(joaat("p_ld_id_card_01")))
				{
					func_318();
				}
				break;
			
			case 9:
				if ((((((func_714(joaat("felon")) && func_714(joaat("s_m_y_dwservice_02"))) && func_714(GlobalFunc_4946(45))) && func_714(GlobalFunc_4946(29))) && func_647(1, sLocal_5834)) && func_647(2, sLocal_5834)) && func_647(3, sLocal_5834))
				{
					func_28();
				}
				break;
			
			case 10:
				func_21();
				break;
			
			case 11:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xDB0
{
	func_785();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5838) && !PED::IS_PED_INJURED(iLocal_5838))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_5838, 2112745624) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_5838, -1273030092) != 1)
		{
			TASK::CLEAR_PED_TASKS(iLocal_5838);
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && !ENTITY::IS_ENTITY_DEAD(iLocal_5845)) && PED::IS_PED_IN_VEHICLE(iLocal_5838, iLocal_5845, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844) && !ENTITY::IS_ENTITY_DEAD(iLocal_5844))
				{
					TASK::TASK_VEHICLE_MISSION(iLocal_5838, iLocal_5845, iLocal_5844, 8, 50f, 262144, 1f, 1f, 1);
				}
			}
			else
			{
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_5838, PLAYER::PLAYER_PED_ID());
			}
			PED::SET_PED_KEEP_TASK(iLocal_5838, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5839) && !PED::IS_PED_INJURED(iLocal_5839))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_5839, 2112745624) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_5839, -1273030092) != 1)
		{
			TASK::CLEAR_PED_TASKS(iLocal_5839);
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_5846) && !ENTITY::IS_ENTITY_DEAD(iLocal_5846)) && PED::IS_PED_IN_VEHICLE(iLocal_5839, iLocal_5846, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844) && !ENTITY::IS_ENTITY_DEAD(iLocal_5844))
				{
					TASK::TASK_VEHICLE_MISSION(iLocal_5839, iLocal_5846, iLocal_5844, 8, 50f, 262144, 1f, 1f, 1);
				}
			}
			else
			{
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_5839, PLAYER::PLAYER_PED_ID());
			}
			PED::SET_PED_KEEP_TASK(iLocal_5839, 1);
		}
	}
	func_20(10);
	if (func_742("MollyContact"))
	{
		GlobalFunc_780(45);
	}
	if (iLocal_6096 == 5)
	{
		GlobalFunc_4935();
		GlobalFunc_6685(1);
	}
	switch (iLocal_6097)
	{
		case 0:
			GlobalFunc_509("S3_FAIL");
			break;
		
		case 1:
			GlobalFunc_509("S3_FAIL");
			break;
		
		case 2:
			GlobalFunc_509("CMN_MDIED");
			break;
		
		case 3:
			GlobalFunc_509("CMN_FDIED");
			break;
		
		case 4:
			GlobalFunc_509("CMN_TDIED");
			break;
		
		case 5:
			GlobalFunc_509("S3_FSHOTTREVOR");
			break;
		
		case 6:
			GlobalFunc_509("S3_FDEVINDIED");
			break;
		
		case 7:
			GlobalFunc_509("S3_FSHOTDEVIN");
			break;
		
		case 8:
			GlobalFunc_509("S3_FDEVINCAR");
			break;
		
		case 9:
			GlobalFunc_509("S3_FSHOTDEVCAR");
			break;
		
		case 10:
			GlobalFunc_509("S3_FRACERDIED");
			break;
		
		case 11:
			GlobalFunc_509("CMN_GENDEST");
			break;
		
		case 12:
			GlobalFunc_509("S3_FBIKEDEST");
			break;
		
		case 13:
			GlobalFunc_509("S3_FBIKEDESTT");
			break;
		
		case 14:
			GlobalFunc_509("S3_FBIKEDAMT");
			break;
		
		case 15:
			GlobalFunc_509("S3_FLOSTRACE");
			break;
		
		case 16:
			GlobalFunc_509("S3_FBIKEABAN");
			break;
		
		case 17:
			GlobalFunc_509("S3_FCARABAN");
			break;
		
		case 18:
			GlobalFunc_509("S3_FSHOTRACER");
			break;
		
		case 19:
			GlobalFunc_509("S3_FSPKDRACER");
			break;
		
		case 20:
			GlobalFunc_509("S3_FRACERLEFT");
			break;
		
		case 21:
			GlobalFunc_509("S3_FDMGCAR");
			break;
		
		case 22:
			GlobalFunc_509("S3_FSTUCKCAR");
			break;
		
		case 23:
			GlobalFunc_509("S3_FDISRACE");
			break;
	}
	GlobalFunc_10616(0);
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	func_838(0, 0);
}



















void func_20(int iParam0)//Position - 0x21E4
{
	iLocal_6280 = iParam0;
	func_718();
}

void func_21()//Position - 0x21F5
{
	int iVar0;
	
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
	if (!func_742("MollyContact"))
	{
		switch (GlobalFunc_8315())
		{
			case 0:
				iVar0 = 0;
				break;
			
			case 1:
				iVar0 = 1;
				break;
			
			case 2:
				iVar0 = 2;
				break;
		}
		GlobalFunc_9621(45, iVar0, 1);
	}
	func_785();
	GlobalFunc_5103(0, 0);
	iLocal_5799 = 1;
	func_838(0, 0);
}







void func_28()//Position - 0x264F
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (func_316())
	{
		iLocal_5794 = 0;
		CUTSCENE::REQUEST_CUTSCENE("car_1_ext_concat", 8);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GARAGE_ARRIVAL"))
		{
			AUDIO::START_AUDIO_SCENE("CAR_1_GARAGE_ARRIVAL");
		}
		if (func_315())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			TASK::CLEAR_PED_TASKS(uLocal_6281[1]);
			TASK::CLEAR_PED_TASKS(uLocal_6281[2]);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			PED::CLEAR_PED_PROP(uLocal_6281[2], 0);
			GlobalFunc_2510(PLAYER::PLAYER_PED_ID(), 485.9252f, -1330.517f, 28.2488f, 293.9519f, 0);
			GlobalFunc_2510(uLocal_6281[1], 486.2881f, -1331.084f, 28.285f, 296.1121f, 0);
			GlobalFunc_2510(uLocal_6281[2], 485.592f, -1330.721f, 28.2454f, 296.1122f, 0);
			GlobalFunc_2239(iLocal_5844, 485.399f, -1332.901f, 28.3095f, 292.4873f);
			GlobalFunc_2239(iLocal_5845, 485.9952f, -1335.449f, 28.2862f, 286.6455f);
			GlobalFunc_2239(iLocal_5846, 487.1696f, -1337.845f, 28.2688f, 293.0351f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_5844, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_5845, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_5846, 1);
			if (iLocal_5801 == 0)
			{
				iLocal_5867 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.1439f, -1314.47f, 28.2017f, "v_chopshop");
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_5867);
				while (!INTERIOR::IS_INTERIOR_READY(iLocal_5867))
				{
					func_312(0);
				}
				iLocal_5801 = 1;
			}
			if (!bLocal_5797)
			{
				func_311(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1101004800);
			}
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_5844, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_5845, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_5846, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5844);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5845);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5846);
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5845, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5845, -1);
			}
			if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[1], iLocal_5844, 0))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_6281[1], iLocal_5844, -1);
			}
			if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[2], iLocal_5846, 0))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_6281[2], iLocal_5846, -1);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_11086("Franklin", func_309(1), 0, 2);
			GlobalFunc_11086("Michael", func_309(0), 0, 2);
			GlobalFunc_11086("Trevor", func_309(2), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("MOLLY", 1, 0, 0, 0);
		}
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		fVar0 = 1f;
		if (iLocal_5732 < 4)
		{
			if ((((!PED::IS_PED_INJURED(iLocal_5842) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5842)) && (!PED::IS_PED_INJURED(iLocal_5843) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5843))) && (!PED::IS_PED_INJURED(iLocal_5841) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5841))) && (!PED::IS_PED_INJURED(iLocal_5840) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5840)))
			{
				fVar0 = 0.5f;
				SYSTEM::SETTIMERB(0);
				func_739("WaitingForPeds", 0);
			}
			else
			{
				fVar0 = 0f;
				SYSTEM::SETTIMERB(0);
				func_739("WaitingForPeds", 1);
			}
		}
		else if (iLocal_5732 == 4)
		{
			if ((((!PED::IS_PED_INJURED(iLocal_5842) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5842)) && (!PED::IS_PED_INJURED(iLocal_5843) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5843))) && (!PED::IS_PED_INJURED(iLocal_5841) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5841))) && (!PED::IS_PED_INJURED(iLocal_5840) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5840)))
			{
				if (!func_742("WaitingForPeds"))
				{
					fVar0 = (0.5f + GlobalFunc_1572(0f, 0.5f, 0f, 3000f, SYSTEM::TO_FLOAT(SYSTEM::TIMERA())));
				}
				else
				{
					fVar0 = (0f + GlobalFunc_1572(0f, 1f, 0f, 6000f, SYSTEM::TO_FLOAT(SYSTEM::TIMERB())));
				}
			}
			else
			{
				fVar0 = 0f;
				SYSTEM::SETTIMERB(0);
				func_739("WaitingForPeds", 1);
			}
		}
		else
		{
			fVar0 = 1f;
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[24 /*31*/]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(Global_34036[24 /*31*/], Global_34036[24 /*31*/].f_5, Global_34036[24 /*31*/].f_2, 1, 1, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[24 /*31*/]))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Global_34036[24 /*31*/]) != fVar0 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Global_34036[24 /*31*/]) != 4)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[24 /*31*/], fVar0, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[24 /*31*/], 4, 0, 1);
			}
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_5871))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_5871, joaat("prop_sc1_06_gate_r"), 500.1759f, -1320.545f, 28.2499f, 1, 1, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_5871))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_5871) != -1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_5871) != 5)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_5871, -1f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_5871, 5, 0, 1);
			}
		}
		switch (iLocal_5732)
		{
			case 0:
				if (!func_742("svolCarStealOutro"))
				{
					uLocal_5868 = STREAMING::STREAMVOL_CREATE_FRUSTUM(498.1f, -1334.323f, 31.27863f, GlobalFunc_107(-0.022675f, 0.266968f, -0.017954f), 300f, 12, 127);
					func_739("svolCarStealOutro", 1);
				}
				if (iLocal_5801 == 0)
				{
					iLocal_5867 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.1439f, -1314.47f, 28.2017f, "v_chopshop");
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_5867);
				}
				iLocal_5740[0] = MISC::GET_GAME_TIMER() + 20000;
				func_301();
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 482.3565f, -1307.464f, 27.70667f, 497.5435f, -1328.468f, 33.34179f, 10f, 0, 1, 0))
				{
					func_300(PLAYER::PLAYER_ID(), 0, 0);
				}
				iLocal_5801 = 1;
				func_300(PLAYER::PLAYER_ID(), 0, 0);
				GlobalFunc_8316(1, 1, 1, 0);
				GlobalFunc_6685(1);
				iVar15 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar15, 1), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_5834), sLocal_5834), 1);
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, sLocal_5834), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_5834), sLocal_5834), 1);
				fVar6 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_5834);
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar15, 0))
				{
					fVar7 = 80f;
				}
				else
				{
					fVar7 = 100f;
				}
				fVar8 = GlobalFunc_253(((fVar6 / fVar5) * (fVar5 - fVar4)), 0f, ((fVar6 / 100f) * fVar7));
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iVar15, 3, sLocal_5834, 1);
				if (ENTITY::GET_ENTITY_MODEL(iVar15) == joaat("cheetah"))
				{
					VEHICLE::_0xFAF2A78061FD9EF4(iVar15, 0f, 0f, -0.225f);
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar15) == joaat("entityxf"))
				{
					VEHICLE::_0xFAF2A78061FD9EF4(iVar15, 0f, 0f, -0.15f);
				}
				if (fVar8 < ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_5834) / 100f) * 40f))
				{
					fVar8 = ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_5834) / 100f) * 40f);
				}
				GlobalFunc_2513(&iVar15, fVar8);
				Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, fVar8, sLocal_5834) };
				if (GlobalFunc_8315() != 1)
				{
					iVar15 = iLocal_5844;
				}
				else if (GlobalFunc_8315() != 0)
				{
					iVar15 = iLocal_5845;
				}
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar15, 1), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_5834), sLocal_5834), 1);
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, 0f, sLocal_5834), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_5834), sLocal_5834), 1);
				fVar6 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_5834);
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar15, 0))
				{
					fVar7 = 80f;
				}
				else
				{
					fVar7 = 100f;
				}
				fVar8 = GlobalFunc_253(((fVar6 / fVar5) * (fVar5 - fVar4)), 0f, ((fVar6 / 100f) * fVar7));
				if (fVar8 < ((fVar6 / 100f) * 95f))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, fVar8, sLocal_5834), Var9, 1) <= 10f && MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, fVar8, sLocal_5834), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_5834), sLocal_5834), 1) > 5f)
					{
						fVar8 = GlobalFunc_253((((fVar6 / fVar5) * (fVar5 - fVar4)) - 1500f), 0f, ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_5834) / 100f) * fVar7));
					}
				}
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iVar15, 1, sLocal_5834, 1);
				if (ENTITY::GET_ENTITY_MODEL(iVar15) == joaat("f620"))
				{
					VEHICLE::_0xFAF2A78061FD9EF4(iVar15, 0f, 0f, 0.2f);
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar15) == joaat("cheetah"))
				{
					VEHICLE::_0xFAF2A78061FD9EF4(iVar15, 0f, 0f, -0.05f);
				}
				if (fVar8 < ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_5834) / 100f) * 40f))
				{
					fVar8 = ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_5834) / 100f) * 40f);
				}
				GlobalFunc_2513(&iVar15, fVar8);
				Var12 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, fVar8, sLocal_5834) };
				if (GlobalFunc_8315() != 2)
				{
					iVar15 = iLocal_5846;
				}
				else if (GlobalFunc_8315() != 0)
				{
					iVar15 = iLocal_5845;
				}
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar15, 1), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_5834), sLocal_5834), 1);
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, 0f, sLocal_5834), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_5834), sLocal_5834), 1);
				fVar6 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_5834);
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar15, 0))
				{
					fVar7 = 80f;
				}
				else
				{
					fVar7 = 100f;
				}
				fVar8 = GlobalFunc_253(((fVar6 / fVar5) * (fVar5 - fVar4)), 0f, ((fVar6 / 100f) * fVar7));
				if (fVar8 < ((fVar6 / 100f) * 95f))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, fVar8, sLocal_5834), Var9, 1) <= 10f && MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, fVar8, sLocal_5834), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_5834), sLocal_5834), 1) > 5f)
					{
						fVar8 = GlobalFunc_253((((fVar6 / fVar5) * (fVar5 - fVar4)) - 1500f), 0f, ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_5834) / 100f) * fVar7));
					}
				}
				if (fVar8 < ((fVar6 / 100f) * 95f))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, fVar8, sLocal_5834), Var12, 1) <= 10f && MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, fVar8, sLocal_5834), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_5834), sLocal_5834), 1) > 5f)
					{
						fVar8 = GlobalFunc_253((((fVar6 / fVar5) * (fVar5 - fVar4)) - 1500f), 0f, ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_5834) / 100f) * fVar7));
					}
				}
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iVar15, 2, sLocal_5834, 1);
				if (ENTITY::GET_ENTITY_MODEL(iVar15) == joaat("f620"))
				{
					VEHICLE::_0xFAF2A78061FD9EF4(iVar15, 0f, 0f, 0.275f);
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar15) == joaat("entityxf"))
				{
					VEHICLE::_0xFAF2A78061FD9EF4(iVar15, 0f, 0f, 0.1f);
				}
				if (fVar8 < ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_5834) / 100f) * 40f))
				{
					fVar8 = ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_5834) / 100f) * 40f);
				}
				GlobalFunc_2513(&iVar15, fVar8);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_309(1), 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_309(0), 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_309(2), 1);
				if (!PED::IS_PED_IN_VEHICLE(func_309(1), iLocal_5844, 0))
				{
					PED::SET_PED_INTO_VEHICLE(func_309(1), iLocal_5844, -1);
				}
				if (!PED::IS_PED_IN_VEHICLE(func_309(0), iLocal_5845, 0))
				{
					PED::SET_PED_INTO_VEHICLE(func_309(0), iLocal_5845, -1);
				}
				if (!PED::IS_PED_IN_VEHICLE(func_309(2), iLocal_5846, 0))
				{
					PED::SET_PED_INTO_VEHICLE(func_309(2), iLocal_5846, -1);
				}
				func_312(0);
				MISC::CLEAR_AREA(485.399f, -1332.901f, 28.3095f, 500f, 1, 0, 0, 0);
				if (!CAM::DOES_CAM_EXIST(uLocal_5864))
				{
					uLocal_5864 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				iVar16 = 0;
				iVar15 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar15))
				{
					if (SYSTEM::ROUND((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iVar15)) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iVar15))) > iVar16)
					{
						iVar16 = SYSTEM::ROUND((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iVar15)) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iVar15)));
					}
				}
				CAM::SET_CAM_PARAMS(uLocal_5864, 490.6984f, -1337.07f, 30.85708f, -0.61913f, 0.022362f, -15.04257f, 25.97729f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_5864, 491.1262f, -1337.16f, 30.10476f, -0.61913f, 0.022362f, -16.54691f, 25.97729f, iVar16 + 500, 0, 0, 2);
				CAM::SHAKE_CAM(uLocal_5864, "HAND_SHAKE", 0.2f);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
				RECORDING::_0x293220DA1B46CEBC(8f, 0f, 4);
				RECORDING::_0x48621C9FCA3EBD28(4);
				func_785();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				iLocal_5740[0] = MISC::GET_GAME_TIMER() + 20000;
				func_301();
				break;
			
			case 2:
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				iVar1 = 1;
				iVar2 = 1;
				iVar3 = 1;
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5844) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5844)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5844);
				}
				else
				{
					iVar3 = 0;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5845) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5845)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5845);
				}
				else
				{
					iVar1 = 0;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5846) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5846)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5846);
				}
				else
				{
					iVar2 = 0;
				}
				PED::SET_PED_RESET_FLAG(func_309(0), 287, 1);
				PED::SET_PED_RESET_FLAG(func_309(2), 287, 1);
				PED::SET_PED_RESET_FLAG(func_309(1), 287, 1);
				if (((GlobalFunc_8315() == 1 && (iVar3 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844))) || (GlobalFunc_8315() == 0 && (iVar1 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845)))) || (GlobalFunc_8315() == 2 && (iVar2 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846))))
				{
					func_298(&iLocal_5850, joaat("felon"), 481.3185f, -1317.789f, 28.2023f, -63.4145f, -1, 0);
					func_297(&iLocal_5842, joaat("s_m_y_dwservice_02"), 480.6057f, -1317.021f, 28.2028f, 75.2925f, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_5842, 0, 1, 0, 0);
					func_297(&iLocal_5843, joaat("s_m_y_dwservice_02"), 478.7872f, -1317.622f, 28.2028f, -56.3168f, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_5843, 0, 2, 0, 0);
					GlobalFunc_7047(&iLocal_5841, 45, 479.5576f, -1315.942f, 28.2028f, -66.9277f, 1);
					PED::SET_PED_PROP_INDEX(iLocal_5841, 1, 0, 0, 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5841, 1);
					GlobalFunc_7047(&iLocal_5840, 29, 479.905f, -1314.857f, 28.2028f, 170.8332f, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_5840, 3, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_5840, 4, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_5840, 10, 1, 0, 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5840, 1);
					func_301();
				}
				break;
			
			case 3:
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				iVar1 = 1;
				iVar2 = 1;
				iVar3 = 1;
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5844) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5844)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5844);
				}
				else
				{
					iVar3 = 0;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5845) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5845)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5845);
				}
				else
				{
					iVar1 = 0;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5846) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5846)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5846);
				}
				else
				{
					iVar2 = 0;
				}
				PED::SET_PED_RESET_FLAG(func_309(0), 287, 1);
				PED::SET_PED_RESET_FLAG(func_309(2), 287, 1);
				PED::SET_PED_RESET_FLAG(func_309(1), 287, 1);
				if (iVar3 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_309(1), 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_5866);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 400, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 479.905f, -1314.857f, 29.1361f, 1f, 20000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_5866);
						TASK::TASK_PERFORM_SEQUENCE(func_309(1), uLocal_5866);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_5866);
					}
				}
				if (iVar1 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_309(0), 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_5866);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 479.905f, -1314.857f, 29.1361f, 1f, 20000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_5866);
						TASK::TASK_PERFORM_SEQUENCE(func_309(0), uLocal_5866);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_5866);
					}
				}
				if (iVar2 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_309(2), 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_5866);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 150, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 479.905f, -1314.857f, 29.1361f, 1f, 20000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_5866);
						TASK::TASK_PERFORM_SEQUENCE(func_309(2), uLocal_5866);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_5866);
					}
				}
				if (SYSTEM::TIMERA() > 500)
				{
					CAM::SET_CAM_PARAMS(uLocal_5864, 506.6584f, -1312.661f, 29.65644f, 1.058747f, 0.013282f, 96.03135f, 36.6866f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_5864, 505.9593f, -1312.439f, 29.66883f, 1.058747f, 0.013282f, 96.03135f, 36.6866f, 6000, 0, 0, 2);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5844) < ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5844)) / 100f) * 80f))
					{
						GlobalFunc_2513(&iLocal_5844, ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5844)) / 100f) * 80f));
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_5844, 1);
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5845) < ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5845)) / 100f) * 80f))
					{
						GlobalFunc_2513(&iLocal_5845, ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5845)) / 100f) * 80f));
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_5845, 1);
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5846) < ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5846)) / 100f) * 80f))
					{
						GlobalFunc_2513(&iLocal_5846, ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5846)) / 100f) * 80f));
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_5846, 1);
					}
					func_301();
				}
				break;
			
			case 4:
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				iVar1 = 1;
				iVar2 = 1;
				iVar3 = 1;
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5844) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5844)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5844);
				}
				else
				{
					iVar3 = 0;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5845) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5845)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5845);
				}
				else
				{
					iVar1 = 0;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5846) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5846)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5846);
				}
				else
				{
					iVar2 = 0;
				}
				PED::SET_PED_RESET_FLAG(func_309(0), 287, 1);
				PED::SET_PED_RESET_FLAG(func_309(2), 287, 1);
				PED::SET_PED_RESET_FLAG(func_309(1), 287, 1);
				if (iVar3 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_309(1), 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_5866);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 400, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 479.905f, -1314.857f, 29.1361f, 1f, 20000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_5866);
						TASK::TASK_PERFORM_SEQUENCE(func_309(1), uLocal_5866);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_5866);
					}
				}
				if (iVar1 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_309(0), 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_5866);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 479.905f, -1314.857f, 29.1361f, 1f, 20000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_5866);
						TASK::TASK_PERFORM_SEQUENCE(func_309(0), uLocal_5866);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_5866);
					}
				}
				if (iVar2 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_309(2), 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_5866);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 150, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 479.905f, -1314.857f, 29.1361f, 1f, 20000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_5866);
						TASK::TASK_PERFORM_SEQUENCE(func_309(2), uLocal_5866);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_5866);
					}
				}
				if ((((((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844) || iVar3) && (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845) || iVar1)) && (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846) || iVar2)) && (SYSTEM::TIMERA() > 3000 && GlobalFunc_550("car_1_ext_concat"))) && (((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5842) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5843)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5841)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5840))) || MISC::GET_GAME_TIMER() > iLocal_5740[0])
				{
					if (STREAMING::STREAMVOL_IS_VALID(uLocal_5868))
					{
						STREAMING::STREAMVOL_DELETE(uLocal_5868);
					}
					GlobalFunc_729(&uLocal_6281, 0, 0);
					GlobalFunc_729(&uLocal_6281, 1, 0);
					GlobalFunc_729(&uLocal_6281, 2, 0);
					iVar17 = PLAYER::PLAYER_PED_ID();
					if (GlobalFunc_8315() != 0)
					{
						GlobalFunc_9134(&uLocal_6281, 0);
						func_802(&uLocal_6281, 1, 1, 1);
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(iVar17);
					}
					func_300(PLAYER::PLAYER_ID(), 0, 0);
					GlobalFunc_8316(1, 1, 1, 0);
					if (GlobalFunc_8315() != 0)
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_309(0), "Michael", 0, 0, 0);
					}
					if (GlobalFunc_8315() != 1)
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_309(1), "Franklin", 0, 0, 0);
					}
					if (GlobalFunc_8315() != 2)
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_309(2), "Trevor", 0, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_5850))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5850, "Car_in_garage", 1, 0, 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5844, "Franklins_car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5845, "Car_Racer_runsaway", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5846, "Car_Racer_dies", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5841, "MOLLY", 1, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5840, "DEVIN", 1, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_5842))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5842, "Car_1_guy", 1, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_5843))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5843, "Car_1_guy_2", 1, 0, 0);
					}
					CUTSCENE::START_CUTSCENE(0);
					func_312(0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
					func_301();
				}
				break;
			
			case 5:
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					iLocal_5798 = 1;
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
				}
				if (!func_742("CutsceneFadeOut"))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((108f * 1000f)))
					{
						if (!iLocal_5798)
						{
							if (!func_742("RemoveCopUniform"))
							{
								GlobalFunc_5100(0, iLocal_5803);
								GlobalFunc_5100(2, iLocal_5803);
								func_32(func_309(0));
								func_739("RemoveCopUniform", 1);
							}
						}
						ENTITY::SET_ENTITY_VISIBLE(iLocal_5844, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_5845, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_5846, 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5844, 0, 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5845, 0, 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5846, 0, 1);
						if (GlobalFunc_8315() != 0)
						{
							ENTITY::SET_ENTITY_VISIBLE(uLocal_6281[0], 0);
						}
						if (GlobalFunc_8315() != 1)
						{
							ENTITY::SET_ENTITY_VISIBLE(uLocal_6281[1], 0);
						}
						if (GlobalFunc_8315() != 2)
						{
							ENTITY::SET_ENTITY_VISIBLE(uLocal_6281[2], 0);
						}
						ENTITY::REMOVE_MODEL_HIDE(498.7252f, -1317.755f, 28.2534f, 1f, joaat("prop_sc1_06_gate_l"), 0);
						ENTITY::REMOVE_MODEL_HIDE(494.6904f, -1312.066f, 28.2534f, 1f, joaat("prop_sc1_06_gate_r"), 0);
						func_739("CutsceneFadeOut", 1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
					PED::FORCE_PED_MOTION_STATE(func_309(0), -668482597, 1, 1, 0);
				}
				if (iLocal_5798)
				{
					if (!func_742("ForceFadeOut"))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_739("ForceFadeOut", 1);
						}
					}
					else
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					RECORDING::_0x81CBAE94390F9F89();
					if (iLocal_5798)
					{
						func_311(498.7252f, -1317.755f, 28.2534f, 75f);
						if (!func_742("RemoveCopUniform"))
						{
							GlobalFunc_5100(0, iLocal_5803);
							GlobalFunc_5100(2, iLocal_5803);
							func_32(func_309(0));
						}
						iVar18 = MISC::GET_GAME_TIMER() + 10000;
						while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_309(0)) && MISC::GET_GAME_TIMER() < iVar18)
						{
							func_312(0);
						}
						GlobalFunc_2510(func_309(0), 480.9356f, -1315.806f, 28.2023f, 270.8615f, 0);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
						PED::FORCE_PED_MOTION_STATE(func_309(0), -668482597, 1, 1, 0);
						func_312(100);
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					iLocal_5798 = 0;
					GlobalFunc_8316(0, 1, 1, 0);
					func_300(PLAYER::PLAYER_ID(), 1, 0);
					GlobalFunc_2244(&iLocal_5850);
					GlobalFunc_2244(&iLocal_5844);
					GlobalFunc_2244(&iLocal_5845);
					GlobalFunc_2244(&iLocal_5846);
					GlobalFunc_2240(&iLocal_5841);
					GlobalFunc_2240(&iLocal_5840);
					GlobalFunc_2240(&iLocal_5842);
					GlobalFunc_2240(&iLocal_5843);
					if (GlobalFunc_8315() != 0)
					{
						GlobalFunc_2240(&(uLocal_6281[0]));
					}
					if (GlobalFunc_8315() != 1)
					{
						GlobalFunc_2240(&(uLocal_6281[1]));
					}
					if (GlobalFunc_8315() != 2)
					{
						GlobalFunc_2240(&(uLocal_6281[2]));
					}
					func_30();
				}
				break;
			}
	}
	if (func_29())
	{
		if (STREAMING::STREAMVOL_IS_VALID(uLocal_5868))
		{
			STREAMING::STREAMVOL_DELETE(uLocal_5868);
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_312(0);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GARAGE_ARRIVAL"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_GARAGE_ARRIVAL");
		}
		iLocal_6096++;
	}
}

int func_29()//Position - 0x3FC3
{
	int iVar0;
	
	if (iLocal_5793 == 1)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_5792 = 0;
		iLocal_5793 = 0;
		iLocal_5732 = 0;
		iLocal_5733 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_5734)
		{
			iLocal_5734[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_5740)
		{
			iLocal_5740[iVar0] = 0;
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_30()//Position - 0x4027
{
	iLocal_5793 = 1;
}


void func_32(int iParam0)//Position - 0x404B
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
		func_133(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11083(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11083(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11083(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11083(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_133(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}





































































































void func_133(int iParam0, var uParam1, bool bParam2)//Position - 0x1E3E9
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
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], 0);
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
			if (GlobalFunc_11085(iParam0, iVar1, &iVar2, 0))
			{
				func_273(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11084(iParam0, iVar1, &iVar2))
			{
				func_273(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_136(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_136(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_136(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x1E680
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
		Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
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
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 10, 0) };
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
						GlobalFunc_10920(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, uVar15[iVar0]) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
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
								GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, func_231(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_136(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9005();
			if (iVar57 != -1)
			{
				GlobalFunc_9004(iVar57, 0, Global_68104);
			}
			GlobalFunc_10633(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10920(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11040(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_136(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar3 = GlobalFunc_11040(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_136(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						iVar73 = GlobalFunc_11040(iParam0, iVar5, 11, iVar70, 3, 0);
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
							func_136(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
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
								func_136(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_136(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 8, iVar71) };
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
										Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar82) };
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
								func_136(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_136(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10622(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			GlobalFunc_10633(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, func_231(iParam0, 8, -1), iParam2);
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
				func_180(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10633(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
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
						iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7980(iParam0, iVar95);
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
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_136(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						if (!GlobalFunc_10918(iParam0, 9, iVar97))
						{
							func_136(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_136(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_136(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = func_231(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = func_231(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_136(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_136(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_136(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_136(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_137(iParam0, &uVar4))
		{
			func_136(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_136(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_136(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_136(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_136(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_137(int iParam0, var uParam1)//Position - 0x1F744
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_231(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (GlobalFunc_6671(741, Global_68104, 0) != -99 && GlobalFunc_6714())
	{
		if (GlobalFunc_278() == 4)
		{
			return 1;
		}
		if (GlobalFunc_6671(741, Global_68104, 0) == 0 && GlobalFunc_6671(742, Global_68104, 0) == 0)
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				if (GlobalFunc_6671(2035, Global_68104, 0) == 0)
				{
					return 0;
				}
			}
			else if (GlobalFunc_6671(740, Global_68104, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = GlobalFunc_6671(741, Global_68104, 0);
		iVar1 = GlobalFunc_6671(742, Global_68104, 0);
		if (!GlobalFunc_10918(iParam0, iVar1, iVar0))
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				*uParam1 = GlobalFunc_6671(2035, Global_68104, 0);
			}
			else
			{
				*uParam1 = GlobalFunc_6671(740, Global_68104, 0);
			}
			GlobalFunc_6784(741, -99, Global_68104, 1);
			GlobalFunc_6784(742, 2, Global_68104, 1);
			return 1;
		}
	}
	return 0;
}











































void func_180(int iParam0, int iParam1, bool bParam2)//Position - 0x24765
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_9757(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9004(iVar1, 1, Global_68104);
	}
	func_181(iParam0, bParam2, 0);
}

void func_181(int iParam0, bool bParam1, bool bParam2)//Position - 0x247A7
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
		bVar15 = func_202(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = func_199(iParam0);
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
			if (GlobalFunc_8361(iVar18, iVar0))
			{
				if (GlobalFunc_5123(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9001(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8361(123, iVar0))
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
					if (GlobalFunc_8361(iVar36, iVar0))
					{
						if (GlobalFunc_9001(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
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


















int func_199(int iParam0)//Position - 0x283B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6671(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar2 = func_231(iParam0, 11, -1);
				if (iVar2 >= 256)
				{
					iVar3 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar2, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_M_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6671(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar4 = func_231(iParam0, 11, -1);
				if (iVar4 >= 256)
				{
					iVar5 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar4, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_F_Tshirt_1"))
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



int func_202(int iParam0)//Position - 0x28585
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
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar2 = func_231(iParam0, 11, -1);
						if (iVar2 >= 237)
						{
							iVar3 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar2, 11, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar4 = func_231(iParam0, 8, -1);
						if (iVar4 >= 241)
						{
							iVar5 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar4, 8, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
						case 7:
						case 4:
						case 9:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar6 = func_231(iParam0, 11, -1);
						if (iVar6 >= 256)
						{
							iVar7 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar6, 11, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_231(iParam0, 8, -1);
						if (iVar8 >= 136)
						{
							iVar9 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar8, 8, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (GlobalFunc_302(iParam0))
		{
			return 1;
		}
	}
	return 0;
}





























int func_231(int iParam0, int iParam1, int iParam2)//Position - 0x310CF
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (GlobalFunc_10918(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (GlobalFunc_10918(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7980(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_6669(iParam0, iParam1);
		}
	}
	return -99;
}










































int func_273(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x48F8E
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
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8357(iParam1);
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
			iVar7 = GlobalFunc_7980(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7980(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7980(iParam0, 2);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11234(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_273(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8357(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11234(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_273(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11083(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11085(iParam0, iVar10, &iVar4, 1))
							{
								func_273(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_273(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10836(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_273(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_273(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_273(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_273(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_273(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11234(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_273(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11234(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_273(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11234(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_273(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11036(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11085(iParam0, iVar10, &iVar4, 0))
		{
			func_273(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11084(iParam0, iVar10, &iVar4))
		{
			func_273(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}
























void func_297(int iParam0, int iParam1, struct<3> Param2, int iParam5, int iParam6)//Position - 0x4BA0A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = PED::CREATE_PED(26, iParam1, Param2, iParam5, 1, 1);
		if (iParam6 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
		}
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*iParam0, 1);
	}
}

void func_298(int iParam0, int iParam1, struct<3> Param2, int iParam5, int iParam6, int iParam7)//Position - 0x4BA45
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, iParam5, 1, 1);
		if (iParam6 >= 0)
		{
			VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam6);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, iParam6, iParam6);
		}
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, iParam7);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*iParam0, 1);
	}
}


void func_300(int iParam0, int iParam1, int iParam2)//Position - 0x4BABD
{
	PLAYER::SET_PLAYER_CONTROL(iParam0, iParam1, iParam2);
	bLocal_6359 = iParam1;
}

void func_301()//Position - 0x4BAD4
{
	SYSTEM::SETTIMERA(0);
	iLocal_5732++;
}








int func_309(int iParam0)//Position - 0x4C7A1
{
	if (GlobalFunc_8315() == iParam0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return uLocal_6281[GlobalFunc_237(iParam0)];
}


void func_311(struct<3> Param0, float fParam3)//Position - 0x4C802
{
	int iVar0;
	
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, fParam3, 0);
	iVar0 = MISC::GET_GAME_TIMER() + 20000;
	while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && MISC::GET_GAME_TIMER() < iVar0)
	{
		func_312(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
}

void func_312(int iParam0)//Position - 0x4C848
{
	int iVar0;
	
	iVar0 = (MISC::GET_GAME_TIMER() + iParam0);
	while (MISC::GET_GAME_TIMER() <= iVar0)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_IFoughtTheLaw", 0);
		func_778();
	}
}



int func_315()//Position - 0x4C8C5
{
	if (iLocal_5795 == 1)
	{
		iLocal_5795 = 0;
		return 1;
	}
	return 0;
}

int func_316()//Position - 0x4C8E0
{
	if (iLocal_5792 == 0)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_5792 = 1;
		return 1;
	}
	return 0;
}


void func_318()//Position - 0x4C92B
{
	int iVar0;
	struct<3> Var1;
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
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<3> Var24;
	struct<3> Var27;
	float fVar30;
	
	if (func_316())
	{
		HUD::THEFEED_PAUSE();
		func_20(9);
		func_397(3, "stageDriveHome", 1, 0, func_309(1), 1);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(1, 0);
		MISC::ENABLE_DISPATCH_SERVICE(2, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		MISC::ENABLE_DISPATCH_SERVICE(4, 0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		func_300(PLAYER::PLAYER_ID(), 1, 0);
		GlobalFunc_2511(&uLocal_6281, 2, 0, 1);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_5844, 1);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_5845, 1);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_5846, 1);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_5844, 1);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_5845, 1);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_5846, 1);
		VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(iLocal_5844, 1);
		VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(iLocal_5845, 1);
		VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(iLocal_5846, 1);
		VEHICLE::_0x88BC673CA9E0AE99(iLocal_5844, 1);
		VEHICLE::_0x88BC673CA9E0AE99(iLocal_5845, 1);
		VEHICLE::_0x88BC673CA9E0AE99(iLocal_5846, 1);
		iLocal_5779[0] = ENTITY::GET_ENTITY_HEALTH(iLocal_5844);
		fLocal_5783[0] = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_5844);
		fLocal_5787[0] = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_5844);
		iLocal_5779[1] = ENTITY::GET_ENTITY_HEALTH(iLocal_5845);
		fLocal_5783[1] = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_5845);
		fLocal_5787[1] = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_5845);
		iLocal_5779[2] = ENTITY::GET_ENTITY_HEALTH(iLocal_5846);
		fLocal_5783[2] = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_5846);
		fLocal_5787[2] = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_5846);
		AUDIO::SET_VEH_RADIO_STATION(iLocal_5845, "RADIO_02_POP");
		AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_5845, 1);
		AUDIO::SET_VEH_RADIO_STATION(iLocal_5846, "RADIO_09_HIPHOP_OLD");
		AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_5846, 1);
		GlobalFunc_2241(&iLocal_5869);
		iLocal_5869 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_ld_id_card_01"), -1918.706f, 4604.16f, 56.035f, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5869))
		{
			ENTITY::SET_ENTITY_ROTATION(iLocal_5869, -90f, 0f, 12.6f, 2, 1);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_ld_id_card_01"));
		if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 1)
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5844, 1);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5845, 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5846, 0);
		}
		else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5844, 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5845, 1);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5846, 0);
		}
		else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 2)
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5844, 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5845, 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5846, 1);
		}
		func_739("CMN_GENGETIN", 0);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_GARAGE"))
		{
			AUDIO::START_AUDIO_SCENE("CAR_1_GET_TO_GARAGE");
		}
		iLocal_5794 = 0;
		func_393("S3_DRIVE", 7500, 1);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(16);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(17);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(20);
		iLocal_5800 = 1;
		iLocal_5802 = 1;
		SYSTEM::SETTIMERB(0);
		if (!HUD::DOES_BLIP_EXIST(iLocal_5863))
		{
			func_391(&iLocal_5863, Local_5828, 1);
		}
		bLocal_5805 = true;
		iLocal_5740[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
		bLocal_9105 = false;
		bLocal_9106 = false;
		bLocal_9107 = false;
		iLocal_9108 = 0;
		iLocal_9109 = 0;
		iLocal_9110 = 0;
		MISC::CLEAR_AREA(-1907.446f, 4621.807f, 56.0429f, 200f, 1, 0, 0, 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(56.0588f, 4597.978f, -1928.376f) - Vector(1000f, 1000f, 1000f), Vector(56.0588f, 4597.978f, -1928.376f) + Vector(1000f, 1000f, 1000f), 1);
		if (func_315())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			PED::CLEAR_PED_PROP(uLocal_6281[2], 0);
			GlobalFunc_2510(PLAYER::PLAYER_PED_ID(), Vector(56.0562f, 4604.91f, -1921.732f) + Vector(0f, -0.37f, 0.36f), 135.026f, 0);
			GlobalFunc_2510(uLocal_6281[1], -1910.995f, 4615.918f, 56.0528f, 23.9654f, 0);
			GlobalFunc_2510(uLocal_6281[2], -1917.872f, 4608.782f, 56.0547f, 135.062f, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5845, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5846, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5844, 0);
			GlobalFunc_2239(iLocal_5847, -1909.106f, 4619.6f, 56.044f, 135.7088f);
			GlobalFunc_2239(iLocal_5848, -1907.504f, 4618.121f, 56.0526f, 137.0636f);
			GlobalFunc_2239(iLocal_5844, -1912.547f, 4616.361f, 56.0427f, 134.6697f);
			GlobalFunc_2239(iLocal_5845, -1923.022f, 4605.493f, 56.044f, 135.0786f);
			GlobalFunc_2239(iLocal_5846, -1919.328f, 4609.285f, 56.0532f, 135.0284f);
			VEHICLE::SET_VEHICLE_SIREN(iLocal_5847, 1);
			VEHICLE::SET_VEHICLE_SIREN(iLocal_5848, 1);
			if (!bLocal_5797)
			{
				func_311(-1917.872f, 4608.782f, 56.0547f, 50f);
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5847);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5848);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5844);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5845);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5846);
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cheetah"), 2);
			while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("cheetah")))
			{
				func_312(0);
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_309(0)) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_309(2)))
			{
				func_312(0);
			}
			MISC::CLEAR_AREA(-1917.872f, 4608.782f, 56.0547f, 200f, 1, 0, 0, 0);
			PED::SET_PED_INTO_VEHICLE(func_309(1), iLocal_5844, -1);
			PED::SET_PED_INTO_VEHICLE(func_309(0), iLocal_5845, -1);
			PED::SET_PED_INTO_VEHICLE(func_309(2), iLocal_5846, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5838) && !PED::IS_PED_INJURED(iLocal_5838))
			{
				GlobalFunc_2510(iLocal_5838, -1915.626f, 4600.51f, 56.0301f, 141.4507f, 0);
				TASK::TASK_SMART_FLEE_PED(iLocal_5838, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				PED::FORCE_PED_MOTION_STATE(iLocal_5838, -530524, 0, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_5838, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_5838);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5839) && !PED::IS_PED_INJURED(iLocal_5839))
			{
				GlobalFunc_2510(iLocal_5839, -1921.258f, 4590.635f, 56.0301f, 141.4507f, 0);
				TASK::TASK_SMART_FLEE_PED(iLocal_5839, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				PED::FORCE_PED_MOTION_STATE(iLocal_5839, -530524, 0, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_5839, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_5839);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((141.1f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			func_312(1000);
			while (!VEHICLE::IS_VEHICLE_HIGH_DETAIL(iLocal_5845) || !VEHICLE::IS_VEHICLE_HIGH_DETAIL(iLocal_5846))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_5845, 1);
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_5846, 1);
				func_312(0);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		if ((SYSTEM::TIMERB() < 800 && !GlobalFunc_126(0)) && !GlobalFunc_126(1))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(16);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(17);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(20);
		}
		else if (iLocal_5800)
		{
			HUD::THEFEED_RESUME();
			iLocal_5794 = 1;
			iLocal_5800 = 0;
		}
		if (GlobalFunc_105(Local_5750[0 /*3*/]))
		{
			Local_5750[0 /*3*/] = { 100f, 0f, 0f };
		}
		if (GlobalFunc_105(Local_5750[2 /*3*/]))
		{
			Local_5750[2 /*3*/] = { 0f, 100f, 0f };
		}
		if (GlobalFunc_105(Local_5750[1 /*3*/]))
		{
			Local_5750[1 /*3*/] = { 0f, 0f, 100f };
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5838) && !PED::IS_PED_INJURED(iLocal_5838))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5838, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_5838);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5839) && !PED::IS_PED_INJURED(iLocal_5839))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5839, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_5839);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5847) && !ENTITY::IS_ENTITY_DEAD(iLocal_5847))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5847, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 200f)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_5847);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5848) && !ENTITY::IS_ENTITY_DEAD(iLocal_5848))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5848, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 200f)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_5848);
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1919.329f, 4609.286f, (56.0538f - 1f), 10f, 10f, 10f, 0, 1, 0))
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		}
		else
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		}
		if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -387.4472f, -2211.64f, -200f, 1478.489f, -552.18f, 1500f, 0, 1, 0))
		{
			PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(-387.4472f, -2211.64f, 1478.489f, -552.18f);
		}
		else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -3624.217f, -3439.024f, -200f, 1435.432f, 967.9354f, 1500f, 0, 1, 0))
		{
			PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(-3624.217f, -3439.024f, 1435.432f, 967.9354f);
		}
		else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -3624.217f, -3439.024f, -200f, 1435.432f, 2366.105f, 1500f, 0, 1, 0))
		{
			PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(-3624.217f, -3439.024f, 1435.432f, 2366.105f);
		}
		else
		{
			PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(-3624.993f, -3439.024f, 1435.432f, 5642.219f);
		}
		if (!func_742("LOAD_ALL_PATH_NODES"))
		{
			if (((!PATHFIND::ARE_NODES_LOADED_FOR_AREA(-387.4472f, -2211.64f, 1478.489f, -552.18f) && !PATHFIND::ARE_NODES_LOADED_FOR_AREA(-3624.217f, -3439.024f, 1435.432f, 967.9354f)) && !PATHFIND::ARE_NODES_LOADED_FOR_AREA(-3624.217f, -3439.024f, 1435.432f, 2366.105f)) && !PATHFIND::ARE_NODES_LOADED_FOR_AREA(-3624.993f, -3439.024f, 1435.432f, 5642.219f))
			{
			}
			else
			{
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5844, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5845, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5846, 0);
				func_739("LOAD_ALL_PATH_NODES", 1);
			}
		}
		if (((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 5f)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_5745)
			{
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, &Var1, &uVar4, &iVar5, 0, 1077936128, 0);
				iLocal_5745 = MISC::GET_GAME_TIMER() + 500;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_5750[iVar0 /*3*/], 1) > (40f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) / 5f)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1, 1) < (5f + IntToFloat(iVar5)))
				{
					Local_5760[iVar0 /*3*/] = { Local_5750[iVar0 /*3*/] };
					uLocal_5774[iVar0] = fLocal_5770[iVar0];
					Local_5750[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1) };
					fLocal_5770[iVar0] = ENTITY::GET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
				}
				iVar0++;
			}
		}
		if (SYSTEM::TIMERA() > 1000)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5844, 481.8133f, -1306.417f, 28.20081f, 497.2177f, -1328.955f, 34.34184f, 15f, 0, 1, 0))
			{
				if (GlobalFunc_8315() != 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[1]))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[1], iLocal_5844, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_6281[1], -1794415470) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(uLocal_6281[1], iLocal_5844, -1, -1, 1f, 1, 0);
							}
							if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_6281[1]) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5844))
							{
								PED::SET_PED_INTO_VEHICLE(uLocal_6281[1], iLocal_5844, -1);
							}
						}
						else if (func_742("LOAD_ALL_PATH_NODES"))
						{
							if (bLocal_5805 == 0)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_6281[1], 496.117f, -1323.824f, 28.8653f, 20f, 20f, 5f, 0, 1, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_6281[1], 567490903) != 1)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(uLocal_6281[1], iLocal_5844, 496.117f, -1323.824f, 28.8653f, 100f, 786469, 1f);
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_6281[1], 567490903) == 1)
								{
									TASK::CLEAR_PED_TASKS(uLocal_6281[1]);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_6281[1], iLocal_5844, 496.117f, -1323.824f, 28.8653f, 20f, 0, joaat("f620"), 786603, 2f, 4f);
								}
								if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5845, 0)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5846, 0))
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5844))
									{
										iLocal_5746[0] = MISC::GET_GAME_TIMER() + 3000;
									}
									else if ((MISC::GET_GAME_TIMER() > iLocal_5746[0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) > (50f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) / 5f))) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_5760[0 /*3*/], 1) > (40f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) / 5f)))
									{
										if ((((!GlobalFunc_105(Local_5760[0 /*3*/]) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_5760[0 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) > 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_5760[0 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) > 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_5760[0 /*3*/], 493.657f, -1319.088f, 28.5502f, 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 496.117f, -1323.824f, 28.8653f, 1)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 493.657f, -1319.088f, 28.5502f, 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 496.117f, -1323.824f, 28.8653f, 1))
										{
											MISC::CLEAR_AREA(Local_5760[0 /*3*/], 3f, 1, 0, 0, 0);
											GlobalFunc_2239(iLocal_5844, Local_5760[0 /*3*/], uLocal_5774[0]);
											VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_5844, 10f);
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5844, 1, 1);
											iLocal_5746[0] = (MISC::GET_GAME_TIMER() + (6000 - GlobalFunc_254(SYSTEM::ROUND((VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) * VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))), 0, 3000)));
										}
									}
								}
							}
						}
					}
				}
				else
				{
					iVar6 = 16;
					func_737(&iVar7, &iVar8, &iVar9, &iVar10, 0);
					if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 567490903) == 1 && CAM::GET_RENDERING_CAM() != Local_6325.f_9) && (((MISC::GET_GAME_TIMER() > iLocal_5744 || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 72)) || (iVar7 < -iVar6 || iVar7 > iVar6)))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5844, 1, 1);
					}
				}
			}
			else
			{
				GlobalFunc_729(&uLocal_6281, 1, 1);
				if (bLocal_9106 == 0 && bLocal_9107 == 0)
				{
					bLocal_9105 = true;
				}
				else if ((bLocal_9106 == 1 && iLocal_9110 == 0) || (bLocal_9107 == 1 && iLocal_9109 == 0))
				{
					iLocal_9108 = 1;
				}
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5846, 481.8133f, -1306.417f, 28.20081f, 497.2177f, -1328.955f, 34.34184f, 15f, 0, 1, 0))
			{
				if (GlobalFunc_8315() != 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[2]))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[2], iLocal_5846, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_6281[2], -1794415470) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(uLocal_6281[2], iLocal_5846, -1, -1, 1f, 1, 0);
							}
							if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_6281[2]) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5846))
							{
								PED::SET_PED_INTO_VEHICLE(uLocal_6281[2], iLocal_5846, -1);
							}
						}
						else if (func_742("LOAD_ALL_PATH_NODES"))
						{
							if (bLocal_5805 == 0)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_6281[2], 490.8354f, -1311.987f, 28.2584f, 20f, 20f, 5f, 0, 1, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_6281[2], 567490903) != 1)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(uLocal_6281[2], iLocal_5846, 490.8354f, -1311.987f, 28.2584f, 100f, 786469, 1f);
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_6281[2], 567490903) == 1)
								{
									TASK::CLEAR_PED_TASKS(uLocal_6281[2]);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_6281[2], iLocal_5846, 490.8354f, -1311.987f, 28.2584f, 10f, 0, joaat("cheetah"), 786603, 2f, 4f);
								}
								if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5845, 0)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5846, 0))
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5846))
									{
										iLocal_5746[2] = MISC::GET_GAME_TIMER() + 3000;
									}
									else if ((MISC::GET_GAME_TIMER() > iLocal_5746[2] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) > (50f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) / 5f))) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_5760[2 /*3*/], 1) > (40f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) / 5f)))
									{
										if ((((!GlobalFunc_105(Local_5760[2 /*3*/]) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_5760[2 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) > 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_5760[2 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) > 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_5760[2 /*3*/], 490.8354f, -1311.987f, 28.2584f, 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 490.8354f, -1311.987f, 28.2584f, 1)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 490.8354f, -1311.987f, 28.2584f, 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 490.8354f, -1311.987f, 28.2584f, 1))
										{
											MISC::CLEAR_AREA(Local_5760[2 /*3*/], 3f, 1, 0, 0, 0);
											GlobalFunc_2239(iLocal_5846, Local_5760[2 /*3*/], uLocal_5774[2]);
											VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_5846, 10f);
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5846, 1, 1);
											iLocal_5746[2] = (MISC::GET_GAME_TIMER() + (6000 - GlobalFunc_254(SYSTEM::ROUND((VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) * VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))), 0, 3000)));
										}
									}
								}
							}
						}
					}
				}
				else
				{
					iVar11 = 16;
					func_737(&iVar12, &iVar13, &iVar14, &iVar15, 0);
					if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 567490903) == 1 && CAM::GET_RENDERING_CAM() != Local_6325.f_9) && (((MISC::GET_GAME_TIMER() > iLocal_5744 || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 72)) || (iVar12 < -iVar11 || iVar12 > iVar11)))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5846, 1, 1);
					}
				}
			}
			else
			{
				GlobalFunc_729(&uLocal_6281, 2, 1);
				if (bLocal_9105 == 0 && bLocal_9107 == 0)
				{
					bLocal_9106 = true;
				}
				else if ((bLocal_9105 == 1 && iLocal_9110 == 0) || (bLocal_9107 == 1 && iLocal_9108 == 0))
				{
					iLocal_9109 = 1;
				}
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5845, 481.8133f, -1306.417f, 28.20081f, 497.2177f, -1328.955f, 34.34184f, 15f, 0, 1, 0))
			{
				if (GlobalFunc_8315() != 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[0]))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[0], iLocal_5845, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_6281[0], -1794415470) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(uLocal_6281[0], iLocal_5845, -1, -1, 1f, 1, 0);
							}
							if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_6281[0]) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5845))
							{
								PED::SET_PED_INTO_VEHICLE(uLocal_6281[0], iLocal_5845, -1);
							}
						}
						else if (func_742("LOAD_ALL_PATH_NODES"))
						{
							if (bLocal_5805 == 0)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_6281[0], 489.1545f, -1312.989f, 28.6664f, 20f, 20f, 5f, 0, 1, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_6281[0], 567490903) != 1)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(uLocal_6281[0], iLocal_5845, 489.1545f, -1312.989f, 28.6664f, 100f, 786469, 1f);
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_6281[0], 567490903) == 1)
								{
									TASK::CLEAR_PED_TASKS(uLocal_6281[0]);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_6281[0], iLocal_5845, 489.1545f, -1312.989f, 28.6664f, 20f, 0, joaat("entityxf"), 786603, 2f, 4f);
								}
								if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5845, 0)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5846, 0))
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5845))
									{
										iLocal_5746[1] = MISC::GET_GAME_TIMER() + 3000;
									}
									else if ((MISC::GET_GAME_TIMER() > iLocal_5746[1] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) > (50f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) / 5f))) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_5760[1 /*3*/], 1) > (40f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) / 5f)))
									{
										if ((((!GlobalFunc_105(Local_5760[1 /*3*/]) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_5760[1 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) > 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_5760[1 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) > 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_5760[1 /*3*/], 493.657f, -1319.088f, 28.5502f, 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 489.1545f, -1312.989f, 28.6664f, 1)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 493.657f, -1319.088f, 28.5502f, 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 496.117f, -1323.824f, 28.8653f, 1))
										{
											MISC::CLEAR_AREA(Local_5760[1 /*3*/], 3f, 1, 0, 0, 0);
											GlobalFunc_2239(iLocal_5845, Local_5760[1 /*3*/], uLocal_5774[1]);
											VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_5845, 10f);
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5845, 1, 1);
											iLocal_5746[1] = (MISC::GET_GAME_TIMER() + (6000 - GlobalFunc_254(SYSTEM::ROUND((VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) * VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))), 0, 3000)));
										}
									}
								}
							}
						}
					}
				}
				else
				{
					iVar16 = 16;
					func_737(&iVar17, &iVar18, &iVar19, &iVar20, 0);
					if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 567490903) == 1 && CAM::GET_RENDERING_CAM() != Local_6325.f_9) && (((MISC::GET_GAME_TIMER() > iLocal_5744 || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 72)) || (iVar17 < -iVar16 || iVar17 > iVar16)))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5845, 1, 1);
					}
				}
			}
			else
			{
				GlobalFunc_729(&uLocal_6281, 0, 1);
				if (bLocal_9105 == 0 && bLocal_9106 == 0)
				{
					bLocal_9107 = true;
				}
				else if ((bLocal_9105 == 1 && iLocal_9109 == 0) || (bLocal_9106 == 1 && iLocal_9108 == 0))
				{
					iLocal_9110 = 1;
				}
			}
		}
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
		{
			if ((func_742("SwitchOnce") && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !GlobalFunc_236())
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 492.6501f, -1317.192f, 28.25825f, 1) > 500f)
				{
					if ((!func_742("CST3_GoHomeM") && !func_742("CST3_GoHomeT")) && !func_742("CST3_GoHomeF"))
					{
						if (!func_742("MollyDialogue"))
						{
							GlobalFunc_173(&uLocal_5929, 5, 0, "Molly", 0, 1);
							func_739("MollyDialogue", 1);
						}
						if (GlobalFunc_8315() == 0)
						{
							if (GlobalFunc_10638(&uLocal_5929, 45, sLocal_6098, "CST3_GoHomeM", 8, 1, 0, 0, 0))
							{
								func_739("CST3_GoHomeM", 1);
							}
						}
						else if (GlobalFunc_8315() == 2)
						{
							if (GlobalFunc_10638(&uLocal_5929, 45, sLocal_6098, "CST3_GoHomeT", 8, 1, 0, 0, 0))
							{
								func_739("CST3_GoHomeT", 1);
							}
						}
						else if (GlobalFunc_8315() == 1)
						{
							if (GlobalFunc_10638(&uLocal_5929, 45, sLocal_6098, "CST3_GoHomeF", 8, 1, 0, 0, 0))
							{
								func_739("CST3_GoHomeF", 1);
							}
						}
					}
					else if (!func_742("MollyContact"))
					{
						switch (GlobalFunc_8315())
						{
							case 0:
								iVar21 = 0;
								break;
							
							case 1:
								iVar21 = 1;
								break;
							
							case 2:
								iVar21 = 2;
								break;
						}
						GlobalFunc_9621(45, iVar21, 1);
						func_739("MollyContact", 1);
					}
					else if ((!func_742("CST3_MollyM") && !func_742("CST3_MollyF")) && !func_742("CST3_MollyT"))
					{
						if (GlobalFunc_8315() == 0)
						{
							func_373("CST3_MollyM", 7, 1, 0, 0);
						}
						else if (GlobalFunc_8315() == 1)
						{
							func_373("CST3_MollyF", 7, 1, 0, 0);
						}
						else if (GlobalFunc_8315() == 2)
						{
							func_373("CST3_MollyT", 7, 1, 0, 0);
						}
					}
					else if ((!func_742("CST3_ShitM") && !func_742("CST3_ShitF")) && !func_742("CST3_ShitT"))
					{
						if (GlobalFunc_8315() == 0)
						{
							func_373("CST3_ShitT", 7, 1, 0, 0);
							iLocal_5740[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
						}
						else if (GlobalFunc_8315() == 1)
						{
							func_373("CST3_ShitM", 7, 1, 0, 0);
							iLocal_5740[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
						}
						else if (GlobalFunc_8315() == 2)
						{
							func_373("CST3_ShitF", 7, 1, 0, 0);
							iLocal_5740[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
						}
					}
					else if (!func_742("CST3_RAD1"))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_5740[1])
						{
							func_373("CST3_RAD1", 7, 1, 0, 0);
							iLocal_5740[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(40000, 55000));
						}
					}
					else if (!func_742("CST3_RAD2"))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_5740[1])
						{
							func_373("CST3_RAD2", 7, 1, 0, 0);
							iLocal_5740[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(40000, 55000));
						}
					}
					else if (!func_742("CST3_RAD3"))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_5740[1])
						{
							func_373("CST3_RAD3", 7, 1, 0, 0);
							iLocal_5740[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(40000, 55000));
						}
					}
					else if (!func_742("CST3_RAD4"))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_5740[1])
						{
							func_373("CST3_RAD4", 7, 1, 0, 0);
							iLocal_5740[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(40000, 55000));
						}
					}
				}
			}
		}
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
		{
			if (GlobalFunc_8315() != 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844) && !ENTITY::IS_ENTITY_DEAD(iLocal_5844))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5844, PLAYER::PLAYER_PED_ID(), 1))
					{
						func_373("CST3_CrashF", 7, 1, 0, 0);
					}
				}
			}
			if (GlobalFunc_8315() != 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && !ENTITY::IS_ENTITY_DEAD(iLocal_5845))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5845, PLAYER::PLAYER_PED_ID(), 1))
					{
						func_373("CST3_CrashM", 7, 1, 0, 0);
					}
				}
			}
			if (GlobalFunc_8315() != 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5846) && !ENTITY::IS_ENTITY_DEAD(iLocal_5846))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5846, PLAYER::PLAYER_PED_ID(), 1))
					{
						func_373("CST3_CrashT", 7, 1, 0, 0);
					}
				}
			}
		}
		if ((ENTITY::GET_ENTITY_HEALTH(iLocal_5844) < iLocal_5779[0] || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_5844) < fLocal_5783[0]) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_5844) < fLocal_5787[0])
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5844) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_5844))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_5778)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						if (!func_742("CST3_StackF"))
						{
							func_373("CST3_StackF", 7, 1, 0, 0);
						}
						else if (!func_742("CST3_StackM"))
						{
							func_373("CST3_StackM", 7, 1, 0, 0);
						}
					}
				}
			}
			iLocal_5779[0] = ENTITY::GET_ENTITY_HEALTH(iLocal_5844);
			fLocal_5783[0] = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_5844);
			fLocal_5787[0] = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_5844);
			iLocal_5778 = MISC::GET_GAME_TIMER() + 7500;
		}
		if ((ENTITY::GET_ENTITY_HEALTH(iLocal_5845) < iLocal_5779[1] || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_5845) < fLocal_5783[1]) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_5845) < fLocal_5787[1])
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5845) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_5845))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_5778)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						if (!func_742("CST3_StackM"))
						{
							func_373("CST3_StackM", 7, 1, 0, 0);
						}
						else if (!func_742("CST3_StackT"))
						{
							func_373("CST3_StackT", 7, 1, 0, 0);
						}
					}
				}
			}
			iLocal_5779[1] = ENTITY::GET_ENTITY_HEALTH(iLocal_5845);
			fLocal_5783[1] = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_5845);
			fLocal_5787[1] = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_5845);
			iLocal_5778 = MISC::GET_GAME_TIMER() + 7500;
		}
		if ((ENTITY::GET_ENTITY_HEALTH(iLocal_5846) < iLocal_5779[2] || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_5846) < fLocal_5783[2]) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_5846) < fLocal_5787[2])
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5846) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_5846))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_5778)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						if (!func_742("CST3_StackT"))
						{
							func_373("CST3_StackT", 7, 1, 0, 0);
						}
						else if (!func_742("CST3_StackF"))
						{
							func_373("CST3_StackF", 7, 1, 0, 0);
						}
					}
				}
			}
			iLocal_5779[2] = ENTITY::GET_ENTITY_HEALTH(iLocal_5846);
			fLocal_5783[2] = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_5846);
			fLocal_5787[2] = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_5846);
			iLocal_5778 = MISC::GET_GAME_TIMER() + 7500;
		}
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
		{
			if ((func_742("SwitchOnce") && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !GlobalFunc_236())
			{
				if (bLocal_9105 || iLocal_9108)
				{
					if (!func_742("CST3_FinishF"))
					{
						if (bLocal_9105)
						{
							if ((PED::IS_PED_IN_VEHICLE(func_309(1), iLocal_5844, 0) && PED::IS_PED_IN_VEHICLE(func_309(0), iLocal_5845, 0)) && PED::IS_PED_IN_VEHICLE(func_309(2), iLocal_5846, 0))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) < 100f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) < 100f)
								{
									func_373("CST3_JUSTF", 7, 1, 0, 0);
								}
								else
								{
									func_373("CST3_FinishF", 7, 1, 0, 0);
								}
							}
						}
						func_739("CST3_FinishF", 1);
					}
				}
				if (bLocal_9106 || iLocal_9109)
				{
					if (!func_742("CST3_FinishT"))
					{
						if (bLocal_9106)
						{
							if ((PED::IS_PED_IN_VEHICLE(func_309(1), iLocal_5844, 0) && PED::IS_PED_IN_VEHICLE(func_309(0), iLocal_5845, 0)) && PED::IS_PED_IN_VEHICLE(func_309(2), iLocal_5846, 0))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) < 100f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) < 100f)
								{
									func_373("CST3_JUSTT", 7, 1, 0, 0);
								}
								else
								{
									func_373("CST3_FinishT", 7, 1, 0, 0);
								}
							}
						}
						func_739("CST3_FinishT", 1);
					}
				}
				if (bLocal_9107 || iLocal_9110)
				{
					if (!func_742("CST3_FinishM"))
					{
						if (bLocal_9107)
						{
							if ((PED::IS_PED_IN_VEHICLE(func_309(1), iLocal_5844, 0) && PED::IS_PED_IN_VEHICLE(func_309(0), iLocal_5845, 0)) && PED::IS_PED_IN_VEHICLE(func_309(2), iLocal_5846, 0))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) < 100f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) < 100f)
								{
									func_373("CST3_JUSTM", 7, 1, 0, 0);
								}
								else
								{
									func_373("CST3_FinishM", 7, 1, 0, 0);
								}
							}
						}
						func_739("CST3_FinishM", 1);
					}
				}
			}
		}
		if (((GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) != 1 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5844, 509.4869f, -1338.531f, 27.32558f, 475.6854f, -1289.89f, 44.55663f, 55f, 0, 1, 0)) || (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) != 0 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5845, 509.4869f, -1338.531f, 27.32558f, 475.6854f, -1289.89f, 44.55663f, 55f, 0, 1, 0))) || (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) != 2 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5846, 509.4869f, -1338.531f, 27.32558f, 475.6854f, -1289.89f, 44.55663f, 55f, 0, 1, 0)))
		{
			if (!Local_6325.f_20)
			{
				if (!func_742("SwitchOnce"))
				{
					if (SYSTEM::TIMERA() < 20000)
					{
						if (func_742("CST3_Return"))
						{
							func_371("S3_RACEHOME", 1, -1);
						}
						if (GlobalFunc_10061(&uLocal_6281, 1, 1))
						{
							if (!GlobalFunc_751(&uLocal_6281, 3))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								GlobalFunc_565(118, 1, 0);
								Local_6325.f_12 = uLocal_6281[uLocal_6281.f_7];
								Local_6325.f_20 = 1;
								iLocal_9097 = PED::GET_VEHICLE_PED_IS_USING(Local_6325.f_12);
								Local_9098 = { Local_5806 };
								Local_9101 = { Local_5806 };
								fLocal_9104 = 0f;
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_9097) && !ENTITY::IS_ENTITY_DEAD(iLocal_9097))
								{
									Local_9098 = { ENTITY::GET_ENTITY_COORDS(iLocal_9097, 1) };
									Local_9101 = { ENTITY::GET_ENTITY_ROTATION(iLocal_9097, 2) };
									fLocal_9104 = ENTITY::GET_ENTITY_SPEED(iLocal_9097);
								}
								func_739("SwitchOnce", 1);
							}
						}
					}
					else
					{
						func_739("SwitchOnce", 1);
					}
				}
			}
			else if (func_325(&Local_6325, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
				if (Local_6325.f_18)
				{
					if (!Local_6325.f_19)
					{
						if (func_802(&uLocal_6281, 1, 1, 0))
						{
							iLocal_5740[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
							iLocal_5744 = MISC::GET_GAME_TIMER() + 5000;
							if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 1)
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5844, 1, 1);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5844, 1);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5845, 0);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5846, 0);
							}
							else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5845, 1, 1);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5844, 0);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5845, 1);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5846, 0);
							}
							else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 2)
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5846, 1, 1);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5844, 0);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5845, 0);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5846, 1);
							}
							Local_6325.f_19 = 1;
						}
					}
				}
			}
		}
		if (!GlobalFunc_100(Local_9098, Local_5806))
		{
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			{
				iVar22 = STREAMING::GET_PLAYER_SWITCH_STATE();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_9097) && !ENTITY::IS_ENTITY_DEAD(iLocal_9097))
				{
					if (iVar22 > 3)
					{
						MISC::CLEAR_AREA(Local_9098, 15f, 1, 0, 0, 0);
						if (iLocal_5844 != iLocal_9097)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_5844, ENTITY::GET_ENTITY_COORDS(iLocal_9097, 1) - Vector(1f, 0f, 0f), 4f, 4f, 4f, 0, 1, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iLocal_5844, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_9097, 0f, -10f, 1f), 1, 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(iLocal_5844, ENTITY::GET_ENTITY_ROTATION(iLocal_5844, 2), 2, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5844);
							}
						}
						if (iLocal_5845 != iLocal_9097)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_5845, ENTITY::GET_ENTITY_COORDS(iLocal_9097, 1) - Vector(1f, 0f, 0f), 4f, 4f, 4f, 0, 1, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iLocal_5845, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_9097, 0f, -10f, 1f), 1, 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(iLocal_5845, ENTITY::GET_ENTITY_ROTATION(iLocal_5845, 2), 2, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5845);
							}
						}
						if (iLocal_5846 != iLocal_9097)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_5846, ENTITY::GET_ENTITY_COORDS(iLocal_9097, 1) - Vector(1f, 0f, 0f), 4f, 4f, 4f, 0, 1, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iLocal_5846, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_9097, 0f, -10f, 1f), 1, 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(iLocal_5846, ENTITY::GET_ENTITY_ROTATION(iLocal_5846, 2), 2, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5846);
							}
						}
						ENTITY::SET_ENTITY_COORDS(iLocal_9097, Local_9098, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_9097, Local_9101, 2, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_9097);
						if (iVar22 > 8)
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_9097, fLocal_9104);
							Local_9098 = { Local_5806 };
							Local_9101 = { Local_5806 };
							fLocal_9104 = 0f;
						}
					}
				}
			}
		}
		if (!func_742("MichaelHelmet"))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(func_309(0), 0))
			{
				PED::CLEAR_PED_PROP(func_309(0), 0);
				PED::REMOVE_PED_HELMET(func_309(0), 1);
				func_739("MichaelHelmet", 1);
			}
		}
		if (!func_742("TrevorHelmet"))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(func_309(2), 0))
			{
				PED::CLEAR_PED_PROP(func_309(2), 0);
				PED::REMOVE_PED_HELMET(func_309(2), 1);
				func_739("TrevorHelmet", 1);
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5845, 0))
		{
			GlobalFunc_504(iLocal_5845, -1);
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5846, 0))
		{
			GlobalFunc_504(iLocal_5846, -1);
		}
		if (!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
		{
			if (bLocal_5805 == 0)
			{
				if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 1)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, 0))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_5740[0])
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5844, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5845, -10f, 0f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5845, 10f, 10f, 5f), 10f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5844, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5846, -10f, 0f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5846, 10f, 10f, 5f), 10f, 0, 1, 0))
							{
								iLocal_5733 = 0;
								if (iLocal_5734[iLocal_5733] == -1)
								{
									iLocal_5734[iLocal_5733] = 3;
								}
								else if (iLocal_5734[iLocal_5733] > 0)
								{
									func_373("CST3_OverF", 7, 0, 0, 0);
									iLocal_5740[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
									iLocal_5734[iLocal_5733] = (iLocal_5734[iLocal_5733] - 1);
								}
							}
						}
					}
				}
				if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5845, 0))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_5740[0])
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5845, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5844, -10f, 0f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5844, 10f, 10f, 5f), 10f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5845, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5846, -10f, 0f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5846, 10f, 10f, 5f), 10f, 0, 1, 0))
							{
								iLocal_5733 = 1;
								if (iLocal_5734[iLocal_5733] == -1)
								{
									iLocal_5734[iLocal_5733] = 3;
								}
								else if (iLocal_5734[iLocal_5733] > 0)
								{
									func_373("CST3_OverM", 7, 0, 0, 0);
									iLocal_5740[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
									iLocal_5734[iLocal_5733] = (iLocal_5734[iLocal_5733] - 1);
								}
							}
						}
					}
				}
				if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5846, 0))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_5740[0])
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5846, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5844, -10f, 0f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5844, 10f, 10f, 5f), 10f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5846, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5845, -10f, 0f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5845, 10f, 10f, 5f), 10f, 0, 1, 0))
							{
								iLocal_5733 = 2;
								if (iLocal_5734[iLocal_5733] == -1)
								{
									iLocal_5734[iLocal_5733] = 3;
								}
								else if (iLocal_5734[iLocal_5733] > 0)
								{
									func_373("CST3_OverT", 7, 0, 0, 0);
									iLocal_5740[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
									iLocal_5734[iLocal_5733] = (iLocal_5734[iLocal_5733] - 1);
								}
							}
						}
					}
				}
			}
		}
		if (!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
		{
			if ((func_742("SwitchOnce") && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !GlobalFunc_236())
			{
				if ((!func_742("CST3_ShitM") || !func_742("CST3_ShitF")) || !func_742("CST3_ShitT"))
				{
					if (SYSTEM::TIMERA() > 60000)
					{
						if (!func_742("CST3_FR_M"))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) - 300f) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) - 300f))
							{
								func_373("CST3_FR_M", 7, 1, 0, 0);
							}
						}
						else
						{
							if (!func_742("CST3_CATCHF"))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) - 300f))
								{
									func_373("CST3_CATCHF", 7, 1, 0, 0);
								}
							}
							if (!func_742("CST3_CATCHT"))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) - 300f))
								{
									func_373("CST3_CATCHT", 7, 1, 0, 0);
								}
							}
						}
						if (!func_742("CST3_FR_F"))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) - 300f) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) - 300f))
							{
								func_373("CST3_FR_F", 7, 1, 0, 0);
							}
						}
						else
						{
							if (!func_742("CST3_CATCHM"))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) - 300f))
								{
									func_373("CST3_CATCHM", 7, 1, 0, 0);
								}
							}
							if (!func_742("CST3_CATCHT"))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) - 300f))
								{
									func_373("CST3_CATCHT", 7, 1, 0, 0);
								}
							}
						}
						if (!func_742("CST3_FR_T"))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) - 300f) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) - 300f))
							{
								func_373("CST3_FR_T", 7, 1, 0, 0);
							}
						}
						else
						{
							if (!func_742("CST3_CATCHM"))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) - 300f))
								{
									func_373("CST3_CATCHM", 7, 1, 0, 0);
								}
							}
							if (!func_742("CST3_CATCHF"))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) - 300f))
								{
									func_373("CST3_CATCHF", 7, 1, 0, 0);
								}
							}
						}
					}
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5870))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -2575.949f, 3186.57f, 71.91477f, 200f, 200f, 50f, 0, 1, 0))
			{
				if (func_714(joaat("prop_mp_ramp_03")))
				{
					iLocal_5870 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_mp_ramp_03"), -2589.9f, 3126.1f, 32.58f, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(iLocal_5870, 0f, 0f, 170.74f, 2, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_mp_ramp_03"));
				}
			}
		}
		if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5845, 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5846, 0)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, 0))
		{
			if (bLocal_5805)
			{
				iVar23 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (((ENTITY::DOES_ENTITY_EXIST(iVar23) && !ENTITY::IS_ENTITY_DEAD(iVar23)) && ENTITY::GET_ENTITY_SPEED(iVar23) > 5f) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1908.292f, 4619.04f, 55.05199f, -1924.486f, 4602.392f, 60.05745f, 10f, 0, 1, 0))
				{
					bLocal_5805 = false;
				}
			}
			if (HUD::GET_BLIP_FROM_ENTITY(iLocal_5844) == iLocal_5858)
			{
				func_323(&iLocal_5858);
			}
			if (HUD::GET_BLIP_FROM_ENTITY(iLocal_5845) == iLocal_5859)
			{
				func_323(&iLocal_5859);
			}
			if (HUD::GET_BLIP_FROM_ENTITY(iLocal_5846) == iLocal_5860)
			{
				func_323(&iLocal_5860);
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_5858))
				{
					HUD::SET_BLIP_COORDS(iLocal_5858, ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1));
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_5859))
				{
					HUD::SET_BLIP_COORDS(iLocal_5859, ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1));
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_5860))
				{
					HUD::SET_BLIP_COORDS(iLocal_5860, ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1));
				}
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5845, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5844, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5846, 0);
				}
				func_323(&iLocal_5859);
				if (!HUD::DOES_BLIP_EXIST(iLocal_5860))
				{
					iLocal_5860 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1));
					HUD::SET_BLIP_COLOUR(iLocal_5860, 3);
					HUD::SET_BLIP_PRIORITY(iLocal_5860, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_5860, "S3_BLIPVEH");
				}
				Var24 = { ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1) };
				Var27 = { HUD::GET_BLIP_COORDS(iLocal_5860) };
				fVar30 = (1f + GlobalFunc_253((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) / 4f), 0f, 17.5f));
				Var27.x = (Var27.x + ((((Var24.x - Var27.x) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				Var27.f_1 = (Var27.f_1 + ((((Var24.f_1 - Var27.f_1) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				Var27.f_2 = (Var27.f_2 + ((((Var24.f_2 - Var27.f_2) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(iLocal_5860, Var27);
				if (!HUD::DOES_BLIP_EXIST(iLocal_5858))
				{
					iLocal_5858 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1));
					HUD::SET_BLIP_COLOUR(iLocal_5858, 3);
					HUD::SET_BLIP_PRIORITY(iLocal_5858, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_5858, "S3_BLIPVEH");
				}
				Var24 = { ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1) };
				Var27 = { HUD::GET_BLIP_COORDS(iLocal_5858) };
				fVar30 = (1f + GlobalFunc_253((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) / 4f), 0f, 17.5f));
				Var27.x = (Var27.x + ((((Var24.x - Var27.x) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				Var27.f_1 = (Var27.f_1 + ((((Var24.f_1 - Var27.f_1) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				Var27.f_2 = (Var27.f_2 + ((((Var24.f_2 - Var27.f_2) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(iLocal_5858, Var27);
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5846, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5844, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5845, 0);
				}
				func_323(&iLocal_5860);
				if (!HUD::DOES_BLIP_EXIST(iLocal_5859))
				{
					iLocal_5859 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1));
					HUD::SET_BLIP_COLOUR(iLocal_5859, 3);
					HUD::SET_BLIP_PRIORITY(iLocal_5859, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_5859, "S3_BLIPVEH");
				}
				Var24 = { ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1) };
				Var27 = { HUD::GET_BLIP_COORDS(iLocal_5859) };
				fVar30 = (1f + GlobalFunc_253((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) / 4f), 0f, 17.5f));
				Var27.x = (Var27.x + ((((Var24.x - Var27.x) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				Var27.f_1 = (Var27.f_1 + ((((Var24.f_1 - Var27.f_1) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				Var27.f_2 = (Var27.f_2 + ((((Var24.f_2 - Var27.f_2) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(iLocal_5859, Var27);
				if (!HUD::DOES_BLIP_EXIST(iLocal_5858))
				{
					iLocal_5858 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1));
					HUD::SET_BLIP_COLOUR(iLocal_5858, 3);
					HUD::SET_BLIP_PRIORITY(iLocal_5858, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_5858, "S3_BLIPVEH");
				}
				Var24 = { ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1) };
				Var27 = { HUD::GET_BLIP_COORDS(iLocal_5858) };
				fVar30 = (1f + GlobalFunc_253((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) / 4f), 0f, 17.5f));
				Var27.x = (Var27.x + ((((Var24.x - Var27.x) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				Var27.f_1 = (Var27.f_1 + ((((Var24.f_1 - Var27.f_1) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				Var27.f_2 = (Var27.f_2 + ((((Var24.f_2 - Var27.f_2) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(iLocal_5858, Var27);
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5845, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5846, 0);
				}
				func_323(&iLocal_5858);
				if (!HUD::DOES_BLIP_EXIST(iLocal_5859))
				{
					iLocal_5859 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1));
					HUD::SET_BLIP_COLOUR(iLocal_5859, 3);
					HUD::SET_BLIP_PRIORITY(iLocal_5859, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_5859, "S3_BLIPVEH");
				}
				Var24 = { ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1) };
				Var27 = { HUD::GET_BLIP_COORDS(iLocal_5859) };
				fVar30 = (1f + GlobalFunc_253((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) / 4f), 0f, 17.5f));
				Var27.x = (Var27.x + ((((Var24.x - Var27.x) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				Var27.f_1 = (Var27.f_1 + ((((Var24.f_1 - Var27.f_1) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				Var27.f_2 = (Var27.f_2 + ((((Var24.f_2 - Var27.f_2) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(iLocal_5859, Var27);
				if (!HUD::DOES_BLIP_EXIST(iLocal_5860))
				{
					iLocal_5860 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1));
					HUD::SET_BLIP_COLOUR(iLocal_5860, 3);
					HUD::SET_BLIP_PRIORITY(iLocal_5860, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_5860, "S3_BLIPVEH");
				}
				Var24 = { ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1) };
				Var27 = { HUD::GET_BLIP_COORDS(iLocal_5860) };
				fVar30 = (1f + GlobalFunc_253((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) / 4f), 0f, 17.5f));
				Var27.x = (Var27.x + ((((Var24.x - Var27.x) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				Var27.f_1 = (Var27.f_1 + ((((Var24.f_1 - Var27.f_1) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				Var27.f_2 = (Var27.f_2 + ((((Var24.f_2 - Var27.f_2) / fVar30) * 15f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(iLocal_5860, Var27);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_5863))
			{
				HUD::CLEAR_PRINTS();
				func_393("S3_DRIVE", 7500, 1);
				func_391(&iLocal_5863, Local_5828, 1);
			}
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
			{
				if (!func_742("CST3_Return"))
				{
					func_373("CST3_Return", 7, 1, 0, 0);
				}
				else if ((!func_742("CST3_RaceM") && !func_742("CST3_RaceF")) && !func_742("CST3_RaceT"))
				{
					if (GlobalFunc_8315() == 0)
					{
						func_373("CST3_RaceM", 7, 1, 0, 0);
					}
					else if (GlobalFunc_8315() == 1)
					{
						func_373("CST3_RaceF", 7, 1, 0, 0);
					}
					else if (GlobalFunc_8315() == 2)
					{
						func_373("CST3_RaceT", 7, 1, 0, 0);
					}
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) <= 50f)
			{
				func_714(joaat("felon"));
				func_714(joaat("s_m_y_dwservice_02"));
				func_714(GlobalFunc_4946(45));
				func_714(GlobalFunc_4946(29));
			}
			if (!func_742("svolCarStealOutro"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) <= 250f)
				{
					uLocal_5868 = STREAMING::STREAMVOL_CREATE_FRUSTUM(498.1f, -1334.323f, 31.27863f, GlobalFunc_107(-0.022675f, 0.266968f, -0.017954f), 300f, 12, 127);
					if (iLocal_5801 == 0)
					{
						iLocal_5867 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.1439f, -1314.47f, 28.2017f, "v_chopshop");
						INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_5867);
					}
					func_739("svolCarStealOutro", 1);
				}
			}
			if (!func_742("car_1_ext_concat"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 492.9378f, -1317.739f, (29.25194f - 1f), 1) < (100f * 2f))
				{
					CUTSCENE::REQUEST_CUTSCENE("car_1_ext_concat", 8);
					func_739("car_1_ext_concat", 1);
				}
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11086("Franklin", func_309(1), 0, 2);
				GlobalFunc_11086("Michael", func_309(0), 0, 2);
				GlobalFunc_11086("Trevor", func_309(2), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("MOLLY", 1, 0, 0, 0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 492.9378f, -1317.739f, (29.25194f - 1f), 0f, 0f, 2f, 1, 1, 0))
			{
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 501.6855f, -1324.219f, 27.31081f, 488.5428f, -1304.171f, 32.35542f, 20f, 0, 1, 0))
			{
				func_30();
			}
			func_739("GetInCar", 0);
		}
		else
		{
			if (bLocal_5805)
			{
				SYSTEM::SETTIMERA(0);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_5863))
			{
				HUD::CLEAR_PRINTS();
				func_323(&iLocal_5863);
			}
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
			{
				if (!func_742("GetInCar"))
				{
					if (!func_742("CMN_GENGETIN"))
					{
						func_739("CMN_GENGETIN", 1);
					}
					else if (!func_742("CMN_GENGETBCK"))
					{
						func_393("CMN_GENGETBCK", 7500, 1);
					}
					func_739("GetInCar", 1);
				}
			}
			if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
			{
				func_319(&iLocal_5859, &iLocal_5845, 0);
				func_323(&iLocal_5860);
				func_323(&iLocal_5858);
			}
			else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 2)
			{
				func_319(&iLocal_5860, &iLocal_5846, 0);
				func_323(&iLocal_5859);
				func_323(&iLocal_5858);
			}
			else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 1)
			{
				func_319(&iLocal_5858, &iLocal_5844, 0);
				func_323(&iLocal_5859);
				func_323(&iLocal_5860);
			}
			if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) >= 75f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) >= 75f) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) >= 75f)
			{
				iLocal_6097 = 17;
				func_1();
			}
		}
	}
	if (func_29())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_GARAGE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_GET_TO_GARAGE");
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5844, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5845, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5846, 0);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5844);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5845);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5846);
		}
		GlobalFunc_2240(&iLocal_5838);
		GlobalFunc_2240(&iLocal_5839);
		iLocal_6096++;
	}
}

void func_319(int iParam0, int iParam1, bool bParam2)//Position - 0x50412
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				*iParam0 = func_320(*iParam1, bParam2, 0);
				if (bParam2 == 0)
				{
					HUD::SET_BLIP_PRIORITY(*iParam0, 7);
				}
			}
		}
	}
}

int func_320(int iParam0, bool bParam1, bool bParam2)//Position - 0x50455
{
	return func_321(iParam0, !bParam1, bParam2);
}

int func_321(int iParam0, bool bParam1, bool bParam2)//Position - 0x50468
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}


void func_323(int iParam0)//Position - 0x50523
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
}


int func_325(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, char* sParam7, bool bParam8, int iParam9)//Position - 0x50564
{
	return func_326(uParam0, 0, iParam1, iParam2, fParam3, fParam4, bParam5, bParam6, sParam7, 2, 0, bParam8, iParam9);
	return 1;
}

int func_326(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)//Position - 0x5058B
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
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
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
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
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
						GlobalFunc_7981(0, 1);
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
						GlobalFunc_7981(0, 1);
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
				GlobalFunc_7981(0, 1);
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
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(GlobalFunc_707(GlobalFunc_8315()));
		}
		GlobalFunc_748(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}













































void func_371(char* sParam0, bool bParam1, int iParam2)//Position - 0x528DA
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (!func_742(sParam0))
		{
			GlobalFunc_159(sParam0, iParam2);
			func_739(sParam0, bParam1);
		}
	}
}


void func_373(char* sParam0, int iParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x5291B
{
	if (!func_742(sParam0))
	{
		while (!GlobalFunc_10618(&uLocal_5929, sLocal_6098, sParam0, iParam1, iParam3, iParam4, 0))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			func_312(0);
		}
		func_739(sParam0, bParam2);
	}
}


















void func_391(int iParam0, struct<3> Param1, int iParam4)//Position - 0x530A3
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = func_392(Param1, iParam4);
		HUD::SET_BLIP_PRIORITY(*iParam0, 9);
	}
}

int func_392(struct<3> Param0, int iParam3)//Position - 0x530CC
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, iParam3);
	return iVar0;
}

void func_393(char* sParam0, int iParam1, bool bParam2)//Position - 0x530F8
{
	if (!func_742(sParam0))
	{
		GlobalFunc_164(sParam0, iParam1, 1);
		func_739(sParam0, bParam2);
	}
}




void func_397(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5316B
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

































































void func_462()//Position - 0x59A96
{
	if (func_316())
	{
		func_300(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(1, 0);
		MISC::ENABLE_DISPATCH_SERVICE(2, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		MISC::ENABLE_DISPATCH_SERVICE(4, 0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_5847, 1);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_5848, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5845, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5846, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_6281[1], 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_6281[2], 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5844, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5838))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5845, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5839))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5846, 0);
		}
		iLocal_5794 = 0;
		CUTSCENE::REQUEST_CUTSCENE("Car_steal_3_mcs_3", 4);
		if (func_315())
		{
			func_20(9);
			GlobalFunc_2510(PLAYER::PLAYER_PED_ID(), Vector(56.0562f, 4604.91f, -1921.732f) + Vector(0f, -0.37f, 0.36f), 135.026f, 0);
			if (!bLocal_5797)
			{
				func_311(-1917.872f, 4608.782f, 56.0547f, 50f);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_11086("Franklin", func_309(1), 0, 2);
			GlobalFunc_11086("Michael", func_309(0), 0, 2);
			GlobalFunc_11086("Trevor", func_309(2), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_dies", iLocal_5838, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_runsaway", iLocal_5839, 0);
		}
		switch (iLocal_5732)
		{
			case 0:
				if (GlobalFunc_Has_Cutscene_Loaded())
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cheetah"), 2);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_309(1), "Franklin", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_309(2), "Trevor", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5838, "Racer_that_dies", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5839, "Racer_that_runsaway", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5844, "Franklins_car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5845, "Car_Racer_runsaway", 0, 0, 32);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5846, "Car_Racer_dies", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5847, "Trevors_police_bike", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5848, "Michaels_Police_bike", 0, 0, 0);
					GlobalFunc_8316(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					func_312(0);
					PATHFIND::SET_ROADS_IN_AREA(Vector(56.0588f, 4597.978f, -1928.376f) - Vector(1000f, 1000f, 1000f), Vector(56.0588f, 4597.978f, -1928.376f) + Vector(1000f, 1000f, 1000f), 0, 1);
					MISC::CLEAR_AREA(-1928.376f, 4597.978f, 56.0588f, 2000f, 1, 0, 0, 0);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5847);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5844, 0, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5845, 0, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5846, 0, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5847, 0, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5848, 0, 1);
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("f620"), 3);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					func_301();
				}
				break;
			
			case 1:
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_5845, 1);
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_5846, 1);
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Racer_that_dies", 0))
				{
					GlobalFunc_2510(iLocal_5838, -1915.626f, 4600.51f, 56.0301f, 141.4507f, 0);
					TASK::TASK_SMART_FLEE_PED(iLocal_5838, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
					PED::FORCE_PED_MOTION_STATE(iLocal_5838, -530524, 0, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_5838, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Racer_that_runsaway", 0))
				{
					GlobalFunc_2510(iLocal_5839, -1921.258f, 4590.635f, 56.0301f, 141.4507f, 0);
					TASK::TASK_SMART_FLEE_PED(iLocal_5839, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
					PED::FORCE_PED_MOTION_STATE(iLocal_5839, -530524, 0, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_5839, 1);
				}
				if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) != -1 || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((46.68706f * 1000f)))
					{
						PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5845, -1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					PED::SET_PED_INTO_VEHICLE(uLocal_6281[1], iLocal_5844, -1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					PED::CLEAR_PED_PROP(uLocal_6281[2], 0);
					PED::REMOVE_PED_HELMET(uLocal_6281[2], 1);
					PED::SET_PED_INTO_VEHICLE(uLocal_6281[2], iLocal_5846, -1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_car", 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5844, 0);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_5844, 1);
					func_739("WheelCompression[vehPlayer](Car_steal_3_mcs_3)", 1);
				}
				if (!func_742("WheelCompression[vehPlayer](Car_steal_3_mcs_3)"))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_5844, 1, 1, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Car_Racer_runsaway", 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5845, 0);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_5845, 1);
					func_739("WheelCompression[vehRival1](Car_steal_3_mcs_3)", 1);
				}
				if (!func_742("WheelCompression[vehRival1](Car_steal_3_mcs_3)"))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_5845, 1, 1, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Car_Racer_dies", 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5846, 0);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_5846, 1);
					func_739("WheelCompression[vehRival2](Car_steal_3_mcs_3)", 1);
				}
				if (!func_742("WheelCompression[vehRival2](Car_steal_3_mcs_3)"))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_5846, 1, 1, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_police_bike", 0))
				{
					GlobalFunc_2239(iLocal_5847, -1909.106f, 4619.6f, 56.044f, 135.7088f);
					func_739("WheelCompression[vehPolice1](Car_steal_3_mcs_3)", 1);
				}
				if (!func_742("WheelCompression[vehPolice1](Car_steal_3_mcs_3)"))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_5847, 1, 1, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_Police_bike", 0))
				{
					GlobalFunc_2239(iLocal_5848, -1907.504f, 4618.121f, 56.0526f, 137.0636f);
					func_739("WheelCompression[vehPolice2](Car_steal_3_mcs_3)", 1);
				}
				if (!func_742("WheelCompression[vehPolice2](Car_steal_3_mcs_3)"))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_5848, 1, 1, 1);
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					GlobalFunc_8316(0, 1, 1, 0);
					func_312(0);
					RECORDING::_0x81CBAE94390F9F89();
					RECORDING::_0x293220DA1B46CEBC(0f, 8f, 4);
					func_30();
				}
				break;
			}
	}
	if (func_29())
	{
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_312(0);
		}
		MISC::CLEAR_AREA(-1907.446f, 4621.807f, 56.0429f, 1000f, 1, 0, 0, 0);
		func_323(&iLocal_5858);
		func_323(&iLocal_5859);
		func_323(&iLocal_5860);
		iLocal_6096++;
	}
}


void func_464()//Position - 0x5A0E6
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (func_316())
	{
		func_397(2, "stageChase", 0, 0, func_309(1), 1);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(1, 0);
		MISC::ENABLE_DISPATCH_SERVICE(2, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		MISC::ENABLE_DISPATCH_SERVICE(4, 0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		iLocal_5794 = 1;
		if (GlobalFunc_8315() != 0)
		{
			GlobalFunc_9134(&uLocal_6281, 0);
			func_802(&uLocal_6281, 1, 0, 0);
			func_273(PLAYER::PLAYER_PED_ID(), 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_5128(0);
			GlobalFunc_2239(iLocal_5847, Local_5819, 147.9465f);
			GlobalFunc_2239(iLocal_5848, 2686.879f, 5131.908f, 43.8515f, 151.6033f);
			ENTITY::SET_ENTITY_ROTATION(iLocal_5848, -0.3083f, -9.4703f, 151.234f, 2, 1);
			if (!GlobalFunc_367(iLocal_5848, 0, 0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5848, -1) != PLAYER::PLAYER_PED_ID())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5848, -1));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[2]))
			{
				if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[2], iLocal_5847, 0))
				{
					PED::SET_PED_INTO_VEHICLE(uLocal_6281[2], iLocal_5847, -1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[0]))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_6281[0], iLocal_5848, 0))
				{
					GlobalFunc_2240(&(uLocal_6281[0]));
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5848, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5848, -1);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6281[2], iLocal_5872);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6281[1], iLocal_5872);
		if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 4, 1);
			PED::SET_PED_HELMET_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0);
		}
		PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1, 16384, -1);
		if (!PED::IS_PED_WEARING_HELMET(uLocal_6281[2]))
		{
			PED::SET_PED_HELMET_PROP_INDEX(uLocal_6281[2], 5, 1);
			PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_6281[2], 0);
		}
		PED::GIVE_PED_HELMET(uLocal_6281[2], 1, 16384, -1);
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5845);
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5846);
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5844);
		func_521(1, 1);
		fLocal_5835 = 1f;
		func_514(sLocal_5833, 500, 1, 1);
		func_513();
		iLocal_47 = 1;
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5847, 500, sLocal_5833, 1);
		}
		else
		{
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_5847, 1f);
		}
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5845, 400, sLocal_5833, 1);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5846, 401, sLocal_5833, 1);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5844, 402, sLocal_5833, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_5844, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_5845, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_5846, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5845, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5846, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5844, 1);
		ENTITY::SET_ENTITY_COLLISION(iLocal_5845, 0, 0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_5846, 0, 0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_5844, 0, 0);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_5844, 1);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_5845, 1);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_5846, 1);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_5847, 1);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_5848, 1);
		fLocal_5835 = 1f;
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[1]))
		{
			if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[1], iLocal_5844, 0))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_6281[1], iLocal_5844, -1);
			}
		}
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5847, 1, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5848, 1, 1);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_6281[2], 0);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 3);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_CHASE_MAIN"))
		{
			AUDIO::START_AUDIO_SCENE("CAR_1_BIKE_CHASE_MAIN");
		}
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_5847, "CAR_1_TREVORS_BIKE", 0);
		iLocal_5794 = 1;
		func_393("S3_COP", 6000, 1);
		iLocal_8856 = MISC::GET_GAME_TIMER() + 1000;
		PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
		func_20(6);
		if (func_315())
		{
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5847);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5845);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5846);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5844);
			if (!bLocal_5797)
			{
				func_311(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1101004800);
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_309(0)) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_309(2)))
			{
				func_312(0);
			}
			iVar0 = MISC::GET_GAME_TIMER() + 5000;
			while (!AUDIO::LOAD_STREAM("CAR_STEAL_1_PASSBY", "CAR_STEAL_1_SOUNDSET") && MISC::GET_GAME_TIMER() < iVar0)
			{
				func_312(0);
			}
			GlobalFunc_2241(&iLocal_8873);
			iLocal_8873 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_donut_02b"), 2683.878f, 5130.149f, 43.85238f, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_8873))
			{
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_8873);
			}
			GlobalFunc_2241(&iLocal_8883);
			iLocal_8883 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_donut_02b"), 2683.29f, 5128.592f, 43.85796f, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_8883))
			{
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_8883);
			}
			func_20(8);
			GlobalFunc_2239(iLocal_5848, 2686.879f, 5131.908f, 43.8515f, 151.6033f);
			ENTITY::SET_ENTITY_ROTATION(iLocal_5848, -0.3083f, -9.4703f, 151.234f, 2, 1);
			if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 5, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			}
			PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1, 16384, -1);
			if (!PED::IS_PED_WEARING_HELMET(uLocal_6281[2]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(uLocal_6281[2], 5, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_6281[2], 0);
			}
			PED::GIVE_PED_HELMET(uLocal_6281[2], 1, 16384, -1);
			func_312(500);
			VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5847);
			VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5845);
			VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5846);
			VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5844);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) != 4)
			{
				func_512(&Local_7602, &iLocal_5848);
				GlobalFunc_7718(&Local_7602);
				CAM::SET_CAM_ACTIVE(Local_7602.f_1, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			iLocal_8856 = MISC::GET_GAME_TIMER() + 1000;
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (MISC::GET_GAME_TIMER() < iLocal_8856)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
		}
		GlobalFunc_10692(&uLocal_5899, iLocal_5845, "S3_HELP2", 0, 1, 1, 1);
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2370.747f, 5771.055f, 45.03312f, 2119.456f, 6025.142f, 60.06299f, 50f, 0, 1, 0))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_ENTER_TUNNEL"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_1_BIKE_ENTER_TUNNEL");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_ENTER_TUNNEL"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_ENTER_TUNNEL");
		}
		switch (iLocal_5732)
		{
			case 0:
				if (AUDIO::LOAD_STREAM("CAR_STEAL_1_PASSBY", "CAR_STEAL_1_SOUNDSET"))
				{
					AUDIO::PLAY_STREAM_FRONTEND();
				}
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 500f, 0, 0, 0, 0, 0);
				func_301();
				break;
			
			case 1:
				if (SYSTEM::TIMERA() >= 1000)
				{
					func_300(PLAYER::PLAYER_ID(), 1, 0);
					func_301();
				}
				break;
			
			case 2:
				if (SYSTEM::TIMERA() >= 1000)
				{
					VEHICLE::SET_VEHICLE_SIREN(iLocal_5847, 1);
					func_301();
				}
				break;
			
			case 3:
				if (SYSTEM::TIMERA() >= 2000)
				{
					VEHICLE::SET_VEHICLE_SIREN(iLocal_5848, 1);
					func_301();
				}
				break;
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5848, 0) && PED::IS_PED_IN_VEHICLE(func_309(2), iLocal_5847, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 8000f)
				{
					if (!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
					{
						func_373("CST3_Chase", 7, 1, 0, 0);
					}
				}
			}
		}
		if (!func_742("CST3_Tunnel"))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 37000f)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
						func_373("CST3_Tunnel", 7, 1, 0, 0);
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 15000f)
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
				{
					if (!func_742("CST3_Lag"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_6281[2], 1), 1) > 120f)
						{
							func_373("CST3_Lag", 7, 1, 0, 0);
							iLocal_5740[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
						}
					}
					else if (!func_742("CST3_Catchup"))
					{
						func_373("CST3_Catchup", 7, 1, 0, 0);
						iLocal_5740[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 40000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) < 110000f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_6281[2], 1), 1) < 30f)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						if (MISC::GET_GAME_TIMER() > iLocal_5740[0])
						{
							if (iLocal_5734[0] == -1)
							{
								iLocal_5734[0] = 5;
							}
							else if (iLocal_5734[1] == -1)
							{
								iLocal_5734[1] = 5;
							}
							if (iLocal_5734[iLocal_5733] > 0)
							{
								if (iLocal_5733 == 0)
								{
									func_373("CST3_Stay", 6, 0, 0, 0);
								}
								else if (iLocal_5733 == 1)
								{
									func_373("CST3_LetsGo", 6, 0, 0, 0);
								}
								iLocal_5740[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
								iLocal_5734[iLocal_5733] = (iLocal_5734[iLocal_5733] - 1);
							}
							if (iLocal_5733 < 1)
							{
								iLocal_5733++;
							}
							else
							{
								iLocal_5733 = 0;
							}
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 78000f)
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
				{
					if (!func_742("CST3_Bay"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_6281[2], 1), 1) < 30f)
						{
							func_373("CST3_Bay", 7, 1, 0, 0);
							RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
							iLocal_5740[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 93000f)
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
				{
					if (!func_742("CST3_FRAN"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_6281[2], 1), 1) < 30f)
						{
							func_373("CST3_FRAN", 7, 1, 0, 0);
							iLocal_5740[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 14000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) < 30000f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_6281[2], 1), 1) < 30f)
				{
					if (!func_742("CST3_Split"))
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
						{
							TASK::CLEAR_PED_TASKS(uLocal_6281[2]);
							TASK::CLEAR_PED_SECONDARY_TASK(uLocal_6281[2]);
							TASK::TASK_PLAY_ANIM(uLocal_6281[2], sLocal_5836, "point_left", 8f, -8f, -1, 131104, 0f, 0, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_6281[2], 0, 0);
							func_373("CST3_Split", 7, 1, 0, 0);
							RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_6281[2], sLocal_5836, "point_left", 3))
				{
					if (SYSTEM::TIMERB() < 1500)
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_6281[2], sLocal_5836, "point_left") > 0.55f)
						{
							ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uLocal_6281[2], sLocal_5836, "point_left", 0.55f);
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 106000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) < 109000f)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_PASS_THE_LOST"))
				{
					AUDIO::START_AUDIO_SCENE("CAR_1_BIKE_PASS_THE_LOST");
				}
			}
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 106000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) < 108000f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_5644[3]))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_5644[3], "CAR_1_THE_LOST", 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[4]) && !ENTITY::IS_ENTITY_DEAD(iLocal_5644[4]))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_5644[4], "CAR_1_THE_LOST", 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[5]) && !ENTITY::IS_ENTITY_DEAD(iLocal_5644[5]))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_5644[5], "CAR_1_THE_LOST", 0);
				}
			}
			if (!func_742("CST3_Epic"))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 90000f)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						func_373("CST3_Epic", 7, 1, 0, 0);
						RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
						iLocal_5740[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
					}
				}
			}
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 105000f)
			{
				if (!func_742("CST3_Bikers"))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						func_373("CST3_Bikers", 7, 1, 0, 0);
						RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
						iLocal_5740[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
					}
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_PASS_THE_LOST"))
				{
					if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_5644[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_5644[3])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5644[3], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 50f) || !ENTITY::DOES_ENTITY_EXIST(iLocal_5644[3])) && (((ENTITY::DOES_ENTITY_EXIST(iLocal_5644[4]) && !ENTITY::IS_ENTITY_DEAD(iLocal_5644[4])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5644[4], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 50f) || !ENTITY::DOES_ENTITY_EXIST(iLocal_5644[4]))) && (((ENTITY::DOES_ENTITY_EXIST(iLocal_5644[5]) && !ENTITY::IS_ENTITY_DEAD(iLocal_5644[5])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5644[5], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 50f) || !ENTITY::DOES_ENTITY_EXIST(iLocal_5644[5])))
					{
						AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_PASS_THE_LOST");
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[3]))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5644[3], 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[4]))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5644[4], 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[5]))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5644[5], 0);
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 120000f)
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
				{
					if (!func_742("CST3_Caught"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_6281[2], 1), 1) < 30f)
						{
							func_373("CST3_Caught", 7, 1, 0, 0);
						}
					}
					else if (!func_742("CST3_MGood"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_6281[2], 1), 1) < 30f)
						{
							func_373("CST3_MGood", 7, 1, 0, 0);
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 110000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) < 133000f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_6281[2], 1), 1) < 30f)
				{
					if ((!func_742("CST3_PullT") && !func_742("CST3_Pull")) && !func_742("CST3_PullLas"))
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
						{
							if (MISC::GET_GAME_TIMER() > iLocal_5740[0])
							{
								iLocal_5733 = 2;
								if (iLocal_5734[iLocal_5733] == -1)
								{
									iLocal_5734[iLocal_5733] = 7;
								}
								else if (iLocal_5734[iLocal_5733] > 0)
								{
									func_373("CST3_PullT", 6, 0, 0, 0);
									RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
									iLocal_5740[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_5734[iLocal_5733] = (iLocal_5734[iLocal_5733] - 1);
								}
							}
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
		{
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 120000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) < 143000f)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_5740[1])
					{
						if (!func_742("CST3_Pull_1"))
						{
							func_473("CST3_Pull", "CST3_Pull_1", 7, 1);
						}
						else if (!func_742("CST3_Pull_2"))
						{
							func_473("CST3_Pull", "CST3_Pull_2", 7, 1);
						}
						else if (!func_742("CST3_Pull_3"))
						{
							func_473("CST3_Pull", "CST3_Pull_3", 7, 1);
						}
						else if (!func_742("CST3_Pull_4"))
						{
							func_473("CST3_Pull", "CST3_Pull_4", 7, 1);
						}
						else if (!func_742("CST3_Pull_5"))
						{
							func_473("CST3_Pull", "CST3_Pull_5", 7, 1);
						}
						iLocal_5740[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 133000f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_6281[2], 1), 1) < 30f)
				{
					if (!func_742("PullOverTwo"))
					{
						TASK::CLEAR_PED_TASKS(uLocal_6281[2]);
						TASK::CLEAR_PED_SECONDARY_TASK(uLocal_6281[2]);
						TASK::TASK_PLAY_ANIM(uLocal_6281[2], sLocal_5836, "point_right_micheal", 8f, -8f, -1, 131104, 0f, 0, 2, 0);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_6281[2], iLocal_5844, 5000, 0, 2);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_6281[2], 0, 0);
						SYSTEM::SETTIMERB(2000);
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
						{
							if (!func_742("CST3_Pull_1"))
							{
								func_473("CST3_Pull", "CST3_Pull_1", 7, 1);
							}
							else if (!func_742("CST3_Pull_2"))
							{
								func_473("CST3_Pull", "CST3_Pull_2", 7, 1);
							}
							else if (!func_742("CST3_Pull_3"))
							{
								func_473("CST3_Pull", "CST3_Pull_3", 7, 1);
							}
							else if (!func_742("CST3_Pull_4"))
							{
								func_473("CST3_Pull", "CST3_Pull_4", 7, 1);
							}
							else if (!func_742("CST3_Pull_5"))
							{
								func_473("CST3_Pull", "CST3_Pull_5", 7, 1);
							}
						}
						RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
						func_739("PullOverTwo", 1);
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5844) > 135000f)
						{
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_5844, 0, 1);
						}
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5845) > 145000f)
						{
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_5845, 0, 1);
						}
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5846) > 146000f)
						{
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_5846, 0, 1);
						}
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 143000f)
					{
						if (!func_742("PullOverTwo"))
						{
							TASK::CLEAR_PED_TASKS(uLocal_6281[2]);
							TASK::CLEAR_PED_SECONDARY_TASK(uLocal_6281[2]);
							TASK::TASK_PLAY_ANIM(uLocal_6281[2], sLocal_5836, "point_right_micheal", 8f, -8f, -1, 131104, 0f, 0, 2, 0);
							TASK::TASK_LOOK_AT_ENTITY(uLocal_6281[2], iLocal_5844, 5000, 0, 2);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_6281[2], 0, 0);
							SYSTEM::SETTIMERB(0);
							func_739("PullOverTwo", 1);
						}
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
						{
							func_373("CST3_PullLas", 7, 1, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_6281[2], sLocal_5836, "point_right_micheal", 3))
				{
					if (SYSTEM::TIMERB() < 4000)
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_6281[2], sLocal_5836, "point_right_micheal") > 0.55f)
						{
							ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uLocal_6281[2], sLocal_5836, "point_right_micheal", 0.55f);
						}
					}
				}
			}
		}
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
		{
			if (func_742("CST3_PullLas"))
			{
				if (!func_742("CST3_Over"))
				{
					func_373("CST3_Over", 7, 1, 0, 0);
				}
				else if (!func_742("CST3_About"))
				{
					func_373("CST3_About", 7, 1, 0, 0);
				}
			}
		}
		if (!func_742("ThroughTunnel"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2122.7f, 6032.38f, 48.97f, 2113.73f, 6019.76f, 55.97f, 5f, 0, 1, 0))
			{
				GlobalFunc_553(113);
				TASK::CLEAR_PED_TASKS(uLocal_6281[2]);
				TASK::CLEAR_PED_SECONDARY_TASK(uLocal_6281[2]);
				TASK::TASK_PLAY_ANIM(uLocal_6281[2], sLocal_5836, "punch_air", 8f, -8f, -1, 131104, 0f, 0, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_6281[2], 0, 0);
				if (!GlobalFunc_111())
				{
					GlobalFunc_5130(func_309(2), "GENERIC_CURSE_HIGH", 10);
				}
				RECORDING::_0x293220DA1B46CEBC(5f, 2f, 3);
				func_739("ThroughTunnel", 1);
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5848, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_5861))
			{
				func_319(&iLocal_5861, &iLocal_5847, 0);
				HUD::SET_BLIP_SCALE(iLocal_5861, 0.5f);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_5858))
			{
				func_319(&iLocal_5858, &iLocal_5844, 0);
				HUD::SET_BLIP_SCALE(iLocal_5858, 0.5f);
			}
			func_319(&iLocal_5859, &iLocal_5845, 0);
			func_319(&iLocal_5860, &iLocal_5846, 0);
			if (HUD::DOES_BLIP_EXIST(uLocal_5862))
			{
				HUD::CLEAR_PRINTS();
				func_393("S3_COP", 7500, 1);
				func_323(&iLocal_5862);
			}
		}
		else
		{
			if (GlobalFunc_74("S3_HELP2"))
			{
				HUD::CLEAR_HELP(1);
			}
			func_323(&iLocal_5861);
			func_323(&iLocal_5858);
			func_323(&iLocal_5859);
			func_323(&iLocal_5860);
			if (!HUD::DOES_BLIP_EXIST(iLocal_5862))
			{
				HUD::CLEAR_PRINTS();
				func_393("CMN_GENGETBCKBK", 7500, 1);
				func_319(&iLocal_5862, &iLocal_5848, 0);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1765.396f, 4732.705f, 50.9022f, -1786.844f, 4754.609f, 60.9306f, 80f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5848, 0))
		{
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
			{
				func_393("S3_STOP", 7500, 1);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1778.073f, 4740.481f, 56.03952f, -1953.011f, 4565.768f, 66.02429f, 20.5f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5848, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5848, 1), -1906.921f, 4621.751f, 56.044f, 1) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5847, 1), -1906.921f, 4621.751f, 56.044f, 1) + GlobalFunc_253(ENTITY::GET_ENTITY_SPEED(iLocal_5847), 0f, 7.5f)))
			{
				if (fLocal_5809 > -50f)
				{
					fLocal_5809 = (fLocal_5809 - (25f * SYSTEM::TIMESTEP()));
				}
				if (ENTITY::GET_ENTITY_SPEED(iLocal_5848) > 7.5f && ENTITY::GET_ENTITY_SPEED(iLocal_5848) > ENTITY::GET_ENTITY_SPEED(iLocal_5847))
				{
					Var1 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_5848) };
					ENTITY::SET_ENTITY_VELOCITY(iLocal_5848, (Var1.x / 1.05f), (Var1.f_1 / 1.05f), Var1.f_2);
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5848, 1), -1906.921f, 4621.751f, 56.044f, 1) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5847, 1), -1906.921f, 4621.751f, 56.044f, 1) + GlobalFunc_253((ENTITY::GET_ENTITY_SPEED(iLocal_5847) + 2.5f), 0f, 10f)))
			{
				if (fLocal_5809 < 0f)
				{
					fLocal_5809 = (fLocal_5809 + (25f * SYSTEM::TIMESTEP()));
				}
			}
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_5848, fLocal_5809);
			Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_5847, ENTITY::GET_ENTITY_COORDS(iLocal_5848, 1)) };
			if ((ENTITY::GET_ENTITY_HEADING(iLocal_5848) > 121.7529f && ENTITY::GET_ENTITY_HEADING(iLocal_5848) < 223.1123f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5848, -1956.187f, 4560.51f, 56.03042f, -1799.061f, 4717.293f, 66.00614f, 16f, 0, 1, 0))
			{
				VEHICLE::SET_VEHICLE_STEER_BIAS(iLocal_5848, GlobalFunc_253((Var4.x / 4f), -0.05f, 0f));
			}
			else if ((ENTITY::GET_ENTITY_HEADING(iLocal_5848) > 43.7849f && ENTITY::GET_ENTITY_HEADING(iLocal_5848) < 224.4444f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5848, -1805.952f, 4724.2f, 56.04435f, -1963.063f, 4567.36f, 66.06973f, 3f, 0, 1, 0))
			{
				VEHICLE::SET_VEHICLE_STEER_BIAS(iLocal_5848, GlobalFunc_253((Var4.x / 4f), 0f, 0.05f));
			}
			if (!func_742("BridgeSlowDown"))
			{
				func_20(9);
				func_739("BridgeSlowDown", 1);
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5848, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1912.8f, 4602.7f, 56.01148f, -1944.621f, 4574.321f, 66.01389f, 21.5f, 0, 1, 0))
			{
				if (GlobalFunc_530(iLocal_5848, 10.5f, 1, 0.5f, 0, 1))
				{
					if (ENTITY::GET_ENTITY_SPEED(iLocal_5847) < 0.5f && ENTITY::GET_ENTITY_SPEED(iLocal_5847) < 0.5f)
					{
						func_300(PLAYER::PLAYER_ID(), 0, 0);
						func_312(100);
						func_30();
					}
				}
			}
		}
		if (!func_742("BikerSpawn1"))
		{
			func_739("BikerSpawn1", func_466(iLocal_5644[3], joaat("g_m_y_lost_01"), 26));
		}
		if (!func_742("BikerSpawn2"))
		{
			func_739("BikerSpawn2", func_466(iLocal_5644[4], joaat("g_m_y_lost_01"), 26));
		}
		if (!func_742("BikerSpawn3"))
		{
			func_739("BikerSpawn3", func_466(iLocal_5644[5], joaat("g_m_y_lost_01"), 26));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_5644[3]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5644[3]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[3], -1)))
				{
					if ((PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[3], -1)) || (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[3], -1)) && ENTITY::GET_ENTITY_HEALTH(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[3], -1)) < 200)) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_5644[3], 1) - Vector(50f, 50f, 50f), ENTITY::GET_ENTITY_COORDS(iLocal_5644[3], 1) + Vector(25f, 25f, 25f), 0, 1))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5644[3]);
						if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[3], -1)) && !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[3], -1)))
						{
							if (!PED::IS_PED_IN_COMBAT(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[3], -1), 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[3], -1), joaat("weapon_pistol"), -1, 0, 1);
								PED::SET_PED_KEEP_TASK(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[3], -1), 1);
								TASK::TASK_COMBAT_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[3], -1), PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[4]) && !ENTITY::IS_ENTITY_DEAD(iLocal_5644[4]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5644[4]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[4], -1)))
				{
					if ((PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[4], -1)) || (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[4], -1)) && ENTITY::GET_ENTITY_HEALTH(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[4], -1)) < 200)) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_5644[4], 1) - Vector(50f, 50f, 50f), ENTITY::GET_ENTITY_COORDS(iLocal_5644[4], 1) + Vector(25f, 25f, 25f), 0, 1))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5644[4]);
						if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[4], -1)) && !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[4], -1)))
						{
							if (!PED::IS_PED_IN_COMBAT(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[4], -1), 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[4], -1), joaat("weapon_smg"), -1, 0, 1);
								PED::SET_PED_KEEP_TASK(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[4], -1), 1);
								TASK::TASK_COMBAT_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[4], -1), PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[5]) && !ENTITY::IS_ENTITY_DEAD(iLocal_5644[5]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5644[5]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[5], -1)))
				{
					if ((PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[5], -1)) || (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[5], -1)) && ENTITY::GET_ENTITY_HEALTH(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[5], -1)) < 200)) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_5644[5], 1) - Vector(50f, 50f, 50f), ENTITY::GET_ENTITY_COORDS(iLocal_5644[5], 1) + Vector(25f, 25f, 25f), 0, 1))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5644[5]);
						if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[5], -1)) && !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[5], -1)))
						{
							if (!PED::IS_PED_IN_COMBAT(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[5], -1), 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[5], -1), joaat("weapon_sawnoffshotgun"), -1, 0, 1);
								PED::SET_PED_KEEP_TASK(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[5], -1), 1);
								TASK::TASK_COMBAT_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[5], -1), PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5847) > 130000f)
			{
				CUTSCENE::REQUEST_CUTSCENE("Car_steal_3_mcs_3", 8);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					GlobalFunc_11086("Franklin", func_309(1), 0, 2);
					GlobalFunc_11086("Michael", func_309(0), 0, 2);
					GlobalFunc_11086("Trevor", func_309(2), 0, 2);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_dies", iLocal_5838, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_runsaway", iLocal_5839, 0);
				}
			}
		}
		PED::SET_PED_RESET_FLAG(uLocal_6281[2], 55, 1);
		if ((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846)) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_5845, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_5846, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_5844, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5845, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5846, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5844, 0);
		}
	}
	if (func_29())
	{
		func_20(9);
		GlobalFunc_4948(&uLocal_5899, 0, 0);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_CHASE_MAIN"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_CHASE_MAIN");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_ENTER_TUNNEL"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_ENTER_TUNNEL");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_PASS_THE_LOST"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_PASS_THE_LOST");
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5847))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5847, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[3]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5644[3], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[4]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5644[4], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[5]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5644[5], 0);
		}
		HUD::CLEAR_HELP(1);
		func_323(&iLocal_5859);
		func_323(&iLocal_5860);
		func_323(&iLocal_5861);
		func_323(&iLocal_5862);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5844);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5845);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5846);
		}
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_5844, 0, 0);
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_5845, 0, 0);
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_5846, 0, 0);
		func_521(0, 1);
		ENTITY::SET_ENTITY_COLLISION(iLocal_5845, 1, 0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_5846, 1, 0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_5844, 1, 0);
		iLocal_6096++;
	}
}


int func_466(int iParam0, int iParam1, int iParam2)//Position - 0x5C29D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		bVar0 = false;
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) != iParam1)
				{
					bVar0 = true;
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			STREAMING::REQUEST_MODEL(iParam1);
			if (STREAMING::HAS_MODEL_LOADED(iParam1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 0);
					PED::DELETE_PED(&iVar1);
				}
				iVar2 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, iParam2, iParam1, -1, 0, 0);
				if (GlobalFunc_2222(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, iLocal_4832);
				}
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar2, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar2, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar2, 0);
				PED::SET_PED_CONFIG_FLAG(iVar2, 32, 0);
				if (bLocal_61)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 8192, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 2, 0);
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iParam0, 1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
				GlobalFunc_2221(iVar2);
				return 1;
			}
		}
	}
	return 0;
}







void func_473(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x5C7EE
{
	if (!func_742(sParam1))
	{
		while (!GlobalFunc_10630(&uLocal_5929, sLocal_6098, sParam0, sParam1, iParam2, 0, 0))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
				func_312(0);
			}
		}
		func_739(sParam1, bParam3);
	}
}







































void func_512(var uParam0, int iParam1)//Position - 0x5E791
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 2.518f, 2.853f, 0.246f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0.669f, -0.085f, 0.248f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 0f;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 1;
		uParam0->f_10[0 /*57*/].f_29 = 0.8f;
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
		uParam0->f_10[1 /*57*/].f_5 = 5000;
		uParam0->f_10[1 /*57*/].f_6 = { 2.1235f, 2.5186f, 0.246f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 0.63f, -0.2496f, 0.25f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 0f;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
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
		uParam0->f_1217 = 2;
		uParam0->f_1218 = 0;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_CarSteal_EndCam.txt";
		uParam0->f_1225 = "CameraInfo_CarSteal_EndCam.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = *iParam1;
}

void func_513()//Position - 0x5EB72
{
	Local_3511[0 /*3*/] = { 2651.678f, 5083.716f, 44.2504f };
	fLocal_62[0] = 0.0013f;
	fLocal_403[0] = 0.0025f;
	fLocal_744[0] = 0.0925f;
	fLocal_1085[0] = 0.9957f;
	iLocal_2262[0] = 1;
	fLocal_1426[0] = 2009284f;
	iLocal_4833[0] = joaat("asterope");
	Local_3511[1 /*3*/] = { 2578.677f, 5206.689f, 44.1481f };
	fLocal_62[1] = 0.0007f;
	fLocal_403[1] = -0.0009f;
	fLocal_744[1] = 0.9908f;
	fLocal_1085[1] = -0.1355f;
	iLocal_2262[1] = 2;
	fLocal_1426[1] = 4224f;
	iLocal_4833[1] = joaat("emperor");
	Local_3511[2 /*3*/] = { 2564.135f, 5263.969f, 44.0797f };
	fLocal_62[2] = 0f;
	fLocal_403[2] = 0.0007f;
	fLocal_744[2] = 0.9896f;
	fLocal_1085[2] = -0.1436f;
	iLocal_2262[2] = 3;
	fLocal_1426[2] = 4422f;
	iLocal_4833[2] = joaat("emperor");
	Local_3511[3 /*3*/] = { 2571.262f, 5256.623f, 44.1779f };
	fLocal_62[3] = 0.0001f;
	fLocal_403[3] = 0.0007f;
	fLocal_744[3] = 0.9922f;
	fLocal_1085[3] = -0.1243f;
	iLocal_2262[3] = 4;
	fLocal_1426[3] = 4620f;
	iLocal_4833[3] = joaat("journey");
	Local_3511[5 /*3*/] = { 2567.121f, 5272.35f, 44.3493f };
	fLocal_62[5] = -0.0003f;
	fLocal_403[5] = 0.0005f;
	fLocal_744[5] = 0.9923f;
	fLocal_1085[5] = -0.1239f;
	iLocal_2262[5] = 6;
	fLocal_1426[5] = 5280f;
	iLocal_4833[5] = joaat("asterope");
	Local_3511[6 /*3*/] = { 2581.354f, 5314.89f, 44.0127f };
	fLocal_62[6] = -0.0004f;
	fLocal_403[6] = -0.0005f;
	fLocal_744[6] = 0.1847f;
	fLocal_1085[6] = 0.9828f;
	iLocal_2262[6] = 7;
	fLocal_1426[6] = 5610f;
	iLocal_4833[6] = joaat("emperor");
	Local_3511[7 /*3*/] = { 2548.699f, 5322.883f, 44.3774f };
	fLocal_62[7] = -0.0001f;
	fLocal_403[7] = 0.0006f;
	fLocal_744[7] = 0.992f;
	fLocal_1085[7] = -0.1263f;
	iLocal_2262[7] = 8;
	fLocal_1426[7] = 6006f;
	iLocal_4833[7] = joaat("journey");
	Local_3511[8 /*3*/] = { 2553.131f, 5327.975f, 44.2761f };
	fLocal_62[8] = 0.0001f;
	fLocal_403[8] = 0.0007f;
	fLocal_744[8] = 0.991f;
	fLocal_1085[8] = -0.134f;
	iLocal_2262[8] = 9;
	fLocal_1426[8] = 6072f;
	iLocal_4833[8] = joaat("asterope");
	Local_3511[10 /*3*/] = { 2593.381f, 5293.014f, 44.3104f };
	fLocal_62[10] = -0.0007f;
	fLocal_403[10] = 0.0001f;
	fLocal_744[10] = 0.1465f;
	fLocal_1085[10] = 0.9892f;
	iLocal_2262[10] = 11;
	fLocal_1426[10] = 6468f;
	iLocal_4833[10] = joaat("asterope");
	Local_3511[11 /*3*/] = { 2548.921f, 5343.364f, 44.1531f };
	fLocal_62[11] = 0.0001f;
	fLocal_403[11] = 0.0007f;
	fLocal_744[11] = 0.9962f;
	fLocal_1085[11] = -0.0873f;
	iLocal_2262[11] = 12;
	fLocal_1426[11] = 6930f;
	iLocal_4833[11] = joaat("asterope");
	Local_3511[12 /*3*/] = { 2539.341f, 5358.377f, 43.9659f };
	fLocal_62[12] = 0.0002f;
	fLocal_403[12] = 0.0002f;
	fLocal_744[12] = 0.9915f;
	fLocal_1085[12] = -0.13f;
	iLocal_2262[12] = 13;
	fLocal_1426[12] = 7326f;
	iLocal_4833[12] = joaat("emperor");
	Local_3511[14 /*3*/] = { 2547.925f, 5346.385f, 44.3941f };
	fLocal_62[14] = -0.0001f;
	fLocal_403[14] = 0.0004f;
	fLocal_744[14] = 0.994f;
	fLocal_1085[14] = -0.109f;
	iLocal_2262[14] = 15;
	fLocal_1426[14] = 8646f;
	iLocal_4833[14] = joaat("minivan");
	Local_3511[15 /*3*/] = { 2554.264f, 5406.557f, 44.3017f };
	fLocal_62[15] = -0.0015f;
	fLocal_403[15] = -0.0006f;
	fLocal_744[15] = 0.1376f;
	fLocal_1085[15] = 0.9905f;
	iLocal_2262[15] = 16;
	fLocal_1426[15] = 9174f;
	iLocal_4833[15] = joaat("journey");
	Local_3511[16 /*3*/] = { 2556.246f, 5399.689f, 44.2142f };
	fLocal_62[16] = -0.0001f;
	fLocal_403[16] = 0.0001f;
	fLocal_744[16] = 0.142f;
	fLocal_1085[16] = 0.9899f;
	iLocal_2262[16] = 17;
	fLocal_1426[16] = 10164f;
	iLocal_4833[16] = joaat("asterope");
	Local_3511[18 /*3*/] = { 2546.309f, 5449.573f, 44.2454f };
	fLocal_62[18] = -0.0001f;
	fLocal_403[18] = 0.0001f;
	fLocal_744[18] = 0.152f;
	fLocal_1085[18] = 0.9884f;
	iLocal_2262[18] = 19;
	fLocal_1426[18] = 10890f;
	iLocal_4833[18] = joaat("asterope");
	Local_3511[19 /*3*/] = { 2512.841f, 5449.729f, 44.3785f };
	fLocal_62[19] = 0f;
	fLocal_403[19] = -0.0002f;
	fLocal_744[19] = 0.9875f;
	fLocal_1085[19] = -0.1577f;
	iLocal_2262[19] = 20;
	fLocal_1426[19] = 10956f;
	iLocal_4833[19] = joaat("minivan");
	Local_3511[20 /*3*/] = { 2536.328f, 5478.375f, 43.9978f };
	fLocal_62[20] = 0.0006f;
	fLocal_403[20] = 0.0001f;
	fLocal_744[20] = 0.1958f;
	fLocal_1085[20] = 0.9806f;
	iLocal_2262[20] = 21;
	fLocal_1426[20] = 11484f;
	iLocal_4833[20] = joaat("emperor");
	Local_3511[21 /*3*/] = { 2493.391f, 5506.577f, 44.1779f };
	fLocal_62[21] = 0.0001f;
	fLocal_403[21] = -0.0016f;
	fLocal_744[21] = 0.9845f;
	fLocal_1085[21] = -0.1754f;
	iLocal_2262[21] = 22;
	fLocal_1426[21] = 12144f;
	iLocal_4833[21] = joaat("journey");
	Local_3511[22 /*3*/] = { 2509.642f, 5537.393f, 44.1639f };
	fLocal_62[22] = 0.0009f;
	fLocal_403[22] = 0.0002f;
	fLocal_744[22] = 0.1787f;
	fLocal_1085[22] = 0.9839f;
	iLocal_2262[22] = 23;
	fLocal_1426[22] = 12606f;
	iLocal_4833[22] = joaat("emperor");
	Local_3511[23 /*3*/] = { 2503.355f, 5556.064f, 44.3684f };
	fLocal_62[23] = 0.0009f;
	fLocal_403[23] = 0.0003f;
	fLocal_744[23] = 0.1796f;
	fLocal_1085[23] = 0.9837f;
	iLocal_2262[23] = 24;
	fLocal_1426[23] = 13398f;
	iLocal_4833[23] = joaat("asterope");
	Local_3511[28 /*3*/] = { 2494.879f, 5594.319f, 44.4232f };
	fLocal_62[28] = 0.0012f;
	fLocal_403[28] = 0f;
	fLocal_744[28] = 0.1843f;
	fLocal_1085[28] = 0.9829f;
	iLocal_2262[28] = 29;
	fLocal_1426[28] = 15708f;
	iLocal_4833[28] = joaat("minivan");
	Local_3511[29 /*3*/] = { 2445.102f, 5638.984f, 44.4275f };
	fLocal_62[29] = 0.0004f;
	fLocal_403[29] = -0.0014f;
	fLocal_744[29] = 0.9702f;
	fLocal_1085[29] = -0.2423f;
	iLocal_2262[29] = 30;
	fLocal_1426[29] = 15840f;
	iLocal_4833[29] = joaat("emperor");
	Local_3511[30 /*3*/] = { 2461.457f, 5658.556f, 44.8311f };
	fLocal_62[30] = 0.0013f;
	fLocal_403[30] = 0.0003f;
	fLocal_744[30] = 0.2075f;
	fLocal_1085[30] = 0.9782f;
	iLocal_2262[30] = 31;
	fLocal_1426[30] = 16302f;
	iLocal_4833[30] = joaat("journey");
	Local_3511[31 /*3*/] = { 2427.976f, 5673.877f, 44.6726f };
	fLocal_62[31] = 0.0004f;
	fLocal_403[31] = -0.0017f;
	fLocal_744[31] = 0.9732f;
	fLocal_1085[31] = -0.23f;
	iLocal_2262[31] = 32;
	fLocal_1426[31] = 17094f;
	iLocal_4833[31] = joaat("journey");
	Local_3511[33 /*3*/] = { 2400.923f, 5713.977f, 45.1135f };
	fLocal_62[33] = 0.0007f;
	fLocal_403[33] = -0.003f;
	fLocal_744[33] = 0.9697f;
	fLocal_1085[33] = -0.2445f;
	iLocal_2262[33] = 34;
	fLocal_1426[33] = 18084f;
	iLocal_4833[33] = joaat("surfer");
	Local_3511[34 /*3*/] = { 2393.489f, 5737.167f, 45.0127f };
	fLocal_62[34] = 0.001f;
	fLocal_403[34] = -0.0043f;
	fLocal_744[34] = 0.9713f;
	fLocal_1085[34] = -0.2379f;
	iLocal_2262[34] = 35;
	fLocal_1426[34] = 18810f;
	iLocal_4833[34] = joaat("emperor");
	Local_3511[35 /*3*/] = { 2424.103f, 5737.523f, 45.1532f };
	fLocal_62[35] = 0.0035f;
	fLocal_403[35] = 0.0008f;
	fLocal_744[35] = 0.2295f;
	fLocal_1085[35] = 0.9733f;
	iLocal_2262[35] = 36;
	fLocal_1426[35] = 18876f;
	iLocal_4833[35] = joaat("asterope");
	Local_3511[36 /*3*/] = { 2390.885f, 5743.321f, 45.2131f };
	fLocal_62[36] = 0.0011f;
	fLocal_403[36] = -0.0043f;
	fLocal_744[36] = 0.9535f;
	fLocal_1085[36] = -0.3014f;
	iLocal_2262[36] = 37;
	fLocal_1426[36] = 19338f;
	iLocal_4833[36] = joaat("minivan");
	Local_3511[37 /*3*/] = { 2412.966f, 5770.177f, 45.1403f };
	fLocal_62[37] = 0.0039f;
	fLocal_403[37] = 0.0009f;
	fLocal_744[37] = 0.2406f;
	fLocal_1085[37] = 0.9706f;
	iLocal_2262[37] = 38;
	fLocal_1426[37] = 19404f;
	iLocal_4833[37] = joaat("emperor");
	Local_3511[38 /*3*/] = { 2386.727f, 5749.759f, 45.3162f };
	fLocal_62[38] = 0.0011f;
	fLocal_403[38] = -0.0046f;
	fLocal_744[38] = 0.967f;
	fLocal_1085[38] = -0.2546f;
	iLocal_2262[38] = 39;
	fLocal_1426[38] = 19734f;
	iLocal_4833[38] = joaat("asterope");
	Local_3511[39 /*3*/] = { 2379.043f, 5762.482f, 45.2977f };
	fLocal_62[39] = 0.0015f;
	fLocal_403[39] = -0.0046f;
	fLocal_744[39] = 0.9501f;
	fLocal_1085[39] = -0.312f;
	iLocal_2262[39] = 40;
	fLocal_1426[39] = 20328f;
	iLocal_4833[39] = joaat("emperor");
	Local_3511[40 /*3*/] = { 2341.268f, 5808.588f, 46.1418f };
	fLocal_62[40] = -0.0018f;
	fLocal_403[40] = -0.0084f;
	fLocal_744[40] = 0.9447f;
	fLocal_1085[40] = -0.3278f;
	iLocal_2262[40] = 41;
	fLocal_1426[40] = 21120f;
	iLocal_4833[40] = joaat("journey");
	Local_3511[41 /*3*/] = { 2334.064f, 5818.228f, 46.4928f };
	fLocal_62[41] = -0.0019f;
	fLocal_403[41] = -0.0082f;
	fLocal_744[41] = 0.9489f;
	fLocal_1085[41] = -0.3156f;
	iLocal_2262[41] = 42;
	fLocal_1426[41] = 21450f;
	iLocal_4833[41] = joaat("asterope");
	Local_3511[42 /*3*/] = { 2341.32f, 5808.52f, 46.3244f };
	fLocal_62[42] = -0.0015f;
	fLocal_403[42] = -0.0085f;
	fLocal_744[42] = 0.9358f;
	fLocal_1085[42] = -0.3523f;
	iLocal_2262[42] = 43;
	fLocal_1426[42] = 21648f;
	iLocal_4833[42] = joaat("surfer");
	Local_3511[44 /*3*/] = { 2356.755f, 5852.997f, 46.8044f };
	fLocal_62[44] = 0.0077f;
	fLocal_403[44] = 0.0023f;
	fLocal_744[44] = 0.2911f;
	fLocal_1085[44] = 0.9567f;
	iLocal_2262[44] = 45;
	fLocal_1426[44] = 22440f;
	iLocal_4833[44] = joaat("minivan");
	Local_3511[45 /*3*/] = { 2306.99f, 5851.712f, 47.3458f };
	fLocal_62[45] = 0.0013f;
	fLocal_403[45] = -0.01f;
	fLocal_744[45] = 0.9375f;
	fLocal_1085[45] = -0.3479f;
	iLocal_2262[45] = 46;
	fLocal_1426[45] = 22638f;
	iLocal_4833[45] = joaat("journey");
	Local_3511[48 /*3*/] = { 2305.791f, 5853.135f, 47.0949f };
	fLocal_62[48] = 0.0004f;
	fLocal_403[48] = -0.0102f;
	fLocal_744[48] = 0.9353f;
	fLocal_1085[48] = -0.3536f;
	iLocal_2262[48] = 49;
	fLocal_1426[48] = 24024f;
	iLocal_4833[48] = joaat("journey");
	Local_3511[49 /*3*/] = { 2264.785f, 5905.348f, 48.6f };
	fLocal_62[49] = 0.0056f;
	fLocal_403[49] = -0.0124f;
	fLocal_744[49] = 0.9091f;
	fLocal_1085[49] = -0.4164f;
	iLocal_2262[49] = 50;
	fLocal_1426[49] = 24222f;
	iLocal_4833[49] = joaat("asterope");
	Local_3511[50 /*3*/] = { 2276.753f, 5892.99f, 48.1198f };
	fLocal_62[50] = 0.0046f;
	fLocal_403[50] = -0.0105f;
	fLocal_744[50] = 0.9142f;
	fLocal_1085[50] = -0.4052f;
	iLocal_2262[50] = 51;
	fLocal_1426[50] = 24354f;
	iLocal_4833[50] = joaat("emperor");
	Local_3511[51 /*3*/] = { 2294.085f, 5934.695f, 48.315f };
	fLocal_62[51] = 0.0128f;
	fLocal_403[51] = 0.0035f;
	fLocal_744[51] = 0.3199f;
	fLocal_1085[51] = 0.9473f;
	iLocal_2262[51] = 52;
	fLocal_1426[51] = 24618f;
	iLocal_4833[51] = joaat("minivan");
	Local_3511[55 /*3*/] = { 2245.712f, 5916.903f, 49.1332f };
	fLocal_62[55] = 0.0036f;
	fLocal_403[55] = -0.0122f;
	fLocal_744[55] = 0.9221f;
	fLocal_1085[55] = -0.3867f;
	iLocal_2262[55] = 56;
	fLocal_1426[55] = 26334f;
	iLocal_4833[55] = joaat("emperor");
	Local_3511[56 /*3*/] = { 2194.014f, 5963.922f, 50.5311f };
	fLocal_62[56] = 0.0019f;
	fLocal_403[56] = -0.004f;
	fLocal_744[56] = 0.9006f;
	fLocal_1085[56] = -0.4346f;
	iLocal_2262[56] = 57;
	fLocal_1426[56] = 26532f;
	iLocal_4833[56] = joaat("journey");
	Local_3511[58 /*3*/] = { 2225.789f, 5935.94f, 49.7968f };
	fLocal_62[58] = 0.0087f;
	fLocal_403[58] = -0.008f;
	fLocal_744[58] = 0.9007f;
	fLocal_1085[58] = -0.4343f;
	iLocal_2262[58] = 59;
	fLocal_1426[58] = 26928f;
	iLocal_4833[58] = joaat("emperor");
	Local_3511[61 /*3*/] = { 2151.948f, 6004.317f, 50.8595f };
	fLocal_62[61] = -0.0007f;
	fLocal_403[61] = 0.0013f;
	fLocal_744[61] = 0.8772f;
	fLocal_1085[61] = -0.4801f;
	iLocal_2262[61] = 62;
	fLocal_1426[61] = 27918f;
	iLocal_4833[61] = joaat("asterope");
	Local_3511[62 /*3*/] = { 2143.459f, 6010.695f, 50.9416f };
	fLocal_62[62] = -0.0006f;
	fLocal_403[62] = 0.0012f;
	fLocal_744[62] = 0.8935f;
	fLocal_1085[62] = -0.449f;
	iLocal_2262[62] = 63;
	fLocal_1426[62] = 28248f;
	iLocal_4833[62] = joaat("asterope");
	Local_3511[66 /*3*/] = { 2128.223f, 6021.958f, 50.5741f };
	fLocal_62[66] = -0.0034f;
	fLocal_403[66] = 0.0038f;
	fLocal_744[66] = 0.8762f;
	fLocal_1085[66] = -0.482f;
	iLocal_2262[66] = 67;
	fLocal_1426[66] = 30096f;
	iLocal_4833[66] = joaat("emperor");
	Local_3511[68 /*3*/] = { 2106.088f, 6030.783f, 50.0777f };
	fLocal_62[68] = -0.0059f;
	fLocal_403[68] = 0.0126f;
	fLocal_744[68] = 0.9114f;
	fLocal_1085[68] = -0.4112f;
	iLocal_2262[68] = 69;
	fLocal_1426[68] = 30690f;
	iLocal_4833[68] = joaat("emperor");
	Local_3511[71 /*3*/] = { 2077.383f, 6053.549f, 49.1698f };
	fLocal_62[71] = -0.0056f;
	fLocal_403[71] = 0.0132f;
	fLocal_744[71] = 0.922f;
	fLocal_1085[71] = -0.387f;
	iLocal_2262[71] = 72;
	fLocal_1426[71] = 31482f;
	iLocal_4833[71] = joaat("asterope");
	Local_3511[73 /*3*/] = { 2025.274f, 6101.408f, 47.5248f };
	fLocal_62[73] = -0.008f;
	fLocal_403[73] = 0.0081f;
	fLocal_744[73] = 0.9381f;
	fLocal_1085[73] = -0.3461f;
	iLocal_2262[73] = 74;
	fLocal_1426[73] = 31878f;
	iLocal_4833[73] = joaat("surfer");
	Local_3511[74 /*3*/] = { 2056.405f, 6071.644f, 48.3698f };
	fLocal_62[74] = -0.0049f;
	fLocal_403[74] = 0.012f;
	fLocal_744[74] = 0.9275f;
	fLocal_1085[74] = -0.3735f;
	iLocal_2262[74] = 75;
	fLocal_1426[74] = 32208f;
	iLocal_4833[74] = joaat("minivan");
	Local_3511[75 /*3*/] = { 2016.881f, 6117.559f, 47.1699f };
	fLocal_62[75] = -0.0044f;
	fLocal_403[75] = 0.0108f;
	fLocal_744[75] = 0.9266f;
	fLocal_1085[75] = -0.376f;
	iLocal_2262[75] = 76;
	fLocal_1426[75] = 32274f;
	iLocal_4833[75] = joaat("asterope");
	Local_3511[76 /*3*/] = { 2064.544f, 6124.388f, 49.5683f };
	fLocal_62[76] = -0.0121f;
	fLocal_403[76] = -0.005f;
	fLocal_744[76] = 0.4074f;
	fLocal_1085[76] = 0.9131f;
	iLocal_2262[76] = 77;
	fLocal_1426[76] = (32274f - 1000f);
	iLocal_4833[76] = joaat("journey");
	Local_3511[78 /*3*/] = { 2011.321f, 6123.388f, 46.7588f };
	fLocal_62[78] = -0.0037f;
	fLocal_403[78] = 0.0097f;
	fLocal_744[78] = 0.9278f;
	fLocal_1085[78] = -0.3729f;
	iLocal_2262[78] = 79;
	fLocal_1426[78] = 32868f;
	iLocal_4833[78] = joaat("asterope");
	Local_3511[79 /*3*/] = { 2022.534f, 6104.149f, 47.5842f };
	fLocal_62[79] = -0.0083f;
	fLocal_403[79] = 0.0076f;
	fLocal_744[79] = 0.9083f;
	fLocal_1085[79] = -0.4181f;
	iLocal_2262[79] = 80;
	fLocal_1426[79] = 33264f;
	iLocal_4833[79] = joaat("minivan");
	Local_3511[80 /*3*/] = { 1988.732f, 6150.891f, 45.9257f };
	fLocal_62[80] = -0.0041f;
	fLocal_403[80] = 0.0108f;
	fLocal_744[80] = 0.9411f;
	fLocal_1085[80] = -0.3378f;
	iLocal_2262[80] = 81;
	fLocal_1426[80] = 33396f;
	iLocal_4833[80] = joaat("emperor");
	Local_3511[81 /*3*/] = { 1985.008f, 6155.766f, 45.922f };
	fLocal_62[81] = -0.0028f;
	fLocal_403[81] = 0.0112f;
	fLocal_744[81] = 0.9647f;
	fLocal_1085[81] = -0.263f;
	iLocal_2262[81] = 82;
	fLocal_1426[81] = 33792f;
	iLocal_4833[81] = joaat("minivan");
	Local_3511[82 /*3*/] = { 1955.813f, 6202.283f, 44.6369f };
	fLocal_62[82] = -0.0026f;
	fLocal_403[82] = 0.0127f;
	fLocal_744[82] = 0.9876f;
	fLocal_1085[82] = -0.1563f;
	iLocal_2262[82] = 83;
	fLocal_1426[82] = 34650f;
	iLocal_4833[82] = joaat("asterope");
	Local_3511[83 /*3*/] = { 1951.531f, 6214.445f, 44.0232f };
	fLocal_62[83] = -0.0024f;
	fLocal_403[83] = 0.0129f;
	fLocal_744[83] = 0.9803f;
	fLocal_1085[83] = -0.1973f;
	iLocal_2262[83] = 84;
	fLocal_1426[83] = 36498f;
	iLocal_4833[83] = joaat("emperor");
	Local_3511[84 /*3*/] = { 1941.91f, 6251.784f, 43.0887f };
	fLocal_62[84] = -0.0024f;
	fLocal_403[84] = 0.0126f;
	fLocal_744[84] = 0.9769f;
	fLocal_1085[84] = -0.2135f;
	iLocal_2262[84] = 85;
	fLocal_1426[84] = 37224f;
	iLocal_4833[84] = joaat("journey");
	Local_3511[86 /*3*/] = { 1895.512f, 6313.563f, 41.4656f };
	fLocal_62[86] = -0.0063f;
	fLocal_403[86] = 0.0114f;
	fLocal_744[86] = 0.8745f;
	fLocal_1085[86] = -0.4849f;
	iLocal_2262[86] = 87;
	fLocal_1426[86] = 37686f;
	iLocal_4833[86] = joaat("asterope");
	Local_3511[87 /*3*/] = { 1862.374f, 6328.804f, 40.3474f };
	fLocal_62[87] = -0.0113f;
	fLocal_403[87] = 0.0158f;
	fLocal_744[87] = 0.8149f;
	fLocal_1085[87] = -0.5793f;
	iLocal_2262[87] = 88;
	fLocal_1426[87] = 38346f;
	iLocal_4833[87] = joaat("surfer");
	Local_3511[88 /*3*/] = { 1891.943f, 6349.652f, 41.5862f };
	fLocal_62[88] = -0.0107f;
	fLocal_403[88] = -0.0078f;
	fLocal_744[88] = 0.567f;
	fLocal_1085[88] = 0.8236f;
	iLocal_2262[88] = 89;
	fLocal_1426[88] = 38412f;
	iLocal_4833[88] = joaat("minivan");
	Local_3511[89 /*3*/] = { 1846.812f, 6363.404f, 40.1519f };
	fLocal_62[89] = -0.0114f;
	fLocal_403[89] = -0.0087f;
	fLocal_744[89] = 0.6037f;
	fLocal_1085[89] = 0.7971f;
	iLocal_2262[89] = 90;
	fLocal_1426[89] = 39204f;
	iLocal_4833[89] = joaat("emperor");
	Local_3511[90 /*3*/] = { 1784.391f, 6370.211f, 37.9927f };
	fLocal_62[90] = -0.0174f;
	fLocal_403[90] = -0.0171f;
	fLocal_744[90] = 0.6835f;
	fLocal_1085[90] = 0.7295f;
	iLocal_2262[90] = 91;
	fLocal_1426[90] = 41778f;
	iLocal_4833[90] = joaat("asterope");
	Local_4532[0 /*3*/] = { 1732.155f, 6403.55f, 34.4566f };
	fLocal_2137[0] = -0.0159f;
	fLocal_2163[0] = -0.0254f;
	fLocal_2189[0] = -0.255f;
	fLocal_2215[0] = 0.9665f;
	iLocal_5174[0] = joaat("minivan");
	Local_3511[91 /*3*/] = { 1773.861f, 6343.825f, 36.3343f };
	fLocal_62[91] = -0.013f;
	fLocal_403[91] = 0.019f;
	fLocal_744[91] = 0.7427f;
	fLocal_1085[91] = -0.6692f;
	iLocal_2262[91] = 92;
	fLocal_1426[91] = 41910f;
	iLocal_4833[91] = joaat("journey");
	Local_3511[92 /*3*/] = { 1725.815f, 6352.495f, 33.9923f };
	fLocal_62[92] = -0.0156f;
	fLocal_403[92] = 0.0212f;
	fLocal_744[92] = 0.7943f;
	fLocal_1085[92] = -0.607f;
	iLocal_2262[92] = 93;
	fLocal_1426[92] = 42108f;
	iLocal_4833[92] = joaat("asterope");
	Local_3511[93 /*3*/] = { 1693.923f, 6380.958f, 31.6176f };
	fLocal_62[93] = -0.0288f;
	fLocal_403[93] = -0.022f;
	fLocal_744[93] = 0.6188f;
	fLocal_1085[93] = 0.7847f;
	iLocal_2262[93] = 94;
	fLocal_1426[93] = 42702f;
	iLocal_4833[93] = joaat("asterope");
	Local_3511[94 /*3*/] = { 1675.192f, 6368.179f, 31.2057f };
	fLocal_62[94] = -0.017f;
	fLocal_403[94] = 0.023f;
	fLocal_744[94] = 0.8127f;
	fLocal_1085[94] = -0.5819f;
	iLocal_2262[94] = 95;
	fLocal_1426[94] = 42900f;
	iLocal_4833[94] = joaat("asterope");
	Local_3511[95 /*3*/] = { 1648.975f, 6371.304f, 29.7276f };
	fLocal_62[95] = -0.0172f;
	fLocal_403[95] = 0.0237f;
	fLocal_744[95] = 0.806f;
	fLocal_1085[95] = -0.5912f;
	iLocal_2262[95] = 96;
	fLocal_1426[95] = 43428f;
	iLocal_4833[95] = joaat("surfer");
	Local_3511[96 /*3*/] = { 1621.543f, 6382.089f, 27.9963f };
	fLocal_62[96] = -0.0179f;
	fLocal_403[96] = 0.026f;
	fLocal_744[96] = 0.822f;
	fLocal_1085[96] = -0.5686f;
	iLocal_2262[96] = 97;
	fLocal_1426[96] = 44088f;
	iLocal_4833[96] = joaat("journey");
	Local_3511[97 /*3*/] = { 1613.968f, 6404.02f, 26.7857f };
	fLocal_62[97] = -0.0289f;
	fLocal_403[97] = -0.0185f;
	fLocal_744[97] = 0.5576f;
	fLocal_1085[97] = 0.8294f;
	iLocal_2262[97] = 98;
	fLocal_1426[97] = 44418f;
	iLocal_4833[97] = joaat("emperor");
	Local_3511[98 /*3*/] = { 1594.12f, 6392.896f, 25.6806f };
	fLocal_62[98] = -0.0173f;
	fLocal_403[98] = 0.0277f;
	fLocal_744[98] = 0.8492f;
	fLocal_1085[98] = -0.5271f;
	iLocal_2262[98] = 99;
	fLocal_1426[98] = 44814f;
	iLocal_4833[98] = joaat("emperor");
	Local_3511[99 /*3*/] = { 1593.061f, 6413.142f, 25.312f };
	fLocal_62[99] = -0.0286f;
	fLocal_403[99] = -0.0196f;
	fLocal_744[99] = 0.5784f;
	fLocal_1085[99] = 0.815f;
	iLocal_2262[99] = 100;
	fLocal_1426[99] = 44946f;
	iLocal_4833[99] = joaat("minivan");
	Local_3511[101 /*3*/] = { 1588.169f, 6421.329f, 24.7918f };
	fLocal_62[101] = -0.0301f;
	fLocal_403[101] = -0.0185f;
	fLocal_744[101] = 0.5236f;
	fLocal_1085[101] = 0.8512f;
	iLocal_2262[101] = 102;
	fLocal_1426[101] = 45342f;
	iLocal_4833[101] = joaat("asterope");
	Local_3511[102 /*3*/] = { 1587.339f, 6396.222f, 25.2695f };
	fLocal_62[102] = -0.0181f;
	fLocal_403[102] = 0.0275f;
	fLocal_744[102] = 0.8375f;
	fLocal_1085[102] = -0.5455f;
	iLocal_2262[102] = 103;
	fLocal_1426[102] = 45474f;
	iLocal_4833[102] = joaat("journey");
	Local_3511[103 /*3*/] = { 1542.328f, 6415.587f, 23.3908f };
	fLocal_62[103] = -0.0083f;
	fLocal_403[103] = 0.0124f;
	fLocal_744[103] = 0.8169f;
	fLocal_1085[103] = -0.5765f;
	iLocal_2262[103] = 104;
	fLocal_1426[103] = 46068f;
	iLocal_4833[103] = joaat("emperor");
	Local_4532[2 /*3*/] = { 1576.537f, 6451.119f, 24.521f };
	fLocal_2137[2] = 0.0361f;
	fLocal_2163[2] = -0.0126f;
	fLocal_2189[2] = -0.2494f;
	fLocal_2215[2] = 0.9676f;
	iLocal_5174[2] = joaat("minivan");
	Local_4532[3 /*3*/] = { 1532.332f, 6408.234f, 23.1721f };
	fLocal_2137[3] = 0f;
	fLocal_2163[3] = 0f;
	fLocal_2189[3] = 0.8056f;
	fLocal_2215[3] = -0.5924f;
	iLocal_5174[3] = joaat("emperor");
	Local_3511[106 /*3*/] = { 1531.354f, 6419.348f, 23.3128f };
	fLocal_62[106] = -0.0092f;
	fLocal_403[106] = 0.0122f;
	fLocal_744[106] = 0.8038f;
	fLocal_1085[106] = -0.5947f;
	iLocal_2262[106] = 107;
	fLocal_1426[106] = 46992f;
	iLocal_4833[106] = joaat("surfer");
	Local_3511[107 /*3*/] = { 1487.266f, 6441.641f, 21.9444f };
	fLocal_62[107] = -0.0092f;
	fLocal_403[107] = 0.0102f;
	fLocal_744[107] = 0.7991f;
	fLocal_1085[107] = -0.601f;
	iLocal_2262[107] = 108;
	fLocal_1426[107] = 47520f;
	iLocal_4833[107] = joaat("journey");
	Local_3511[109 /*3*/] = { 1406.005f, 6480.377f, 19.6421f };
	fLocal_62[109] = -0.0031f;
	fLocal_403[109] = -0.0048f;
	fLocal_744[109] = 0.6208f;
	fLocal_1085[109] = 0.784f;
	iLocal_2262[109] = 110;
	fLocal_1426[109] = 49368f;
	iLocal_4833[109] = joaat("emperor");
	Local_3511[110 /*3*/] = { 1394.327f, 6471.685f, 19.6279f };
	fLocal_62[110] = -0.001f;
	fLocal_403[110] = 0.0034f;
	fLocal_744[110] = 0.7756f;
	fLocal_1085[110] = -0.6312f;
	iLocal_2262[110] = 111;
	fLocal_1426[110] = 49566f;
	iLocal_4833[110] = joaat("journey");
	Local_3511[111 /*3*/] = { 1373.033f, 6476.132f, 19.4375f };
	fLocal_62[111] = 0.0019f;
	fLocal_403[111] = 0.0044f;
	fLocal_744[111] = 0.7449f;
	fLocal_1085[111] = -0.6672f;
	iLocal_2262[111] = 112;
	fLocal_1426[111] = 50028f;
	iLocal_4833[111] = joaat("emperor");
	Local_3511[112 /*3*/] = { 1372.028f, 6482.614f, 19.6764f };
	fLocal_62[112] = -0.0018f;
	fLocal_403[112] = -0.0012f;
	fLocal_744[112] = 0.6428f;
	fLocal_1085[112] = 0.766f;
	iLocal_2262[112] = 113;
	fLocal_1426[112] = 50094f;
	iLocal_4833[112] = joaat("asterope");
	Local_3511[113 /*3*/] = { 1385.501f, 6480.014f, 19.7448f };
	fLocal_62[113] = -0.002f;
	fLocal_403[113] = -0.0017f;
	fLocal_744[113] = 0.6064f;
	fLocal_1085[113] = 0.7951f;
	iLocal_2262[113] = 114;
	fLocal_1426[113] = 50292f;
	iLocal_4833[113] = joaat("surfer");
	Local_3511[114 /*3*/] = { 1383.441f, 6473.891f, 19.8693f };
	fLocal_62[114] = 0.0022f;
	fLocal_403[114] = 0.0043f;
	fLocal_744[114] = 0.7876f;
	fLocal_1085[114] = -0.6162f;
	iLocal_2262[114] = 115;
	fLocal_1426[114] = 50358f;
	iLocal_4833[114] = joaat("journey");
	Local_3511[115 /*3*/] = { 1322.904f, 6483.072f, 19.6677f };
	fLocal_62[115] = 0.0041f;
	fLocal_403[115] = 0.002f;
	fLocal_744[115] = 0.7191f;
	fLocal_1085[115] = -0.6949f;
	iLocal_2262[115] = 116;
	fLocal_1426[115] = 51084f;
	iLocal_4833[115] = joaat("asterope");
	Local_3511[116 /*3*/] = { 1203.285f, 6495.178f, 20.7136f };
	fLocal_62[116] = 0.0013f;
	fLocal_403[116] = 0.0012f;
	fLocal_744[116] = 0.7118f;
	fLocal_1085[116] = 0.7024f;
	iLocal_2262[116] = 117;
	fLocal_1426[116] = 54120f;
	iLocal_4833[116] = joaat("minivan");
	Local_4532[4 /*3*/] = { 1167.276f, 6510.267f, 20.4517f };
	fLocal_2137[4] = -0.0056f;
	fLocal_2163[4] = 0.0116f;
	fLocal_2189[4] = 0.6716f;
	fLocal_2215[4] = 0.7408f;
	iLocal_5174[4] = joaat("minivan");
	Local_3511[117 /*3*/] = { 1155.165f, 6482.533f, 20.727f };
	fLocal_62[117] = -0.0035f;
	fLocal_403[117] = -0.0023f;
	fLocal_744[117] = -0.7037f;
	fLocal_1085[117] = 0.7105f;
	iLocal_2262[117] = 118;
	fLocal_1426[117] = 55110f;
	iLocal_4833[117] = joaat("surfer");
	Local_4532[5 /*3*/] = { 1140.607f, 6511.646f, 20.5916f };
	fLocal_2137[5] = -0.0319f;
	fLocal_2163[5] = 0.0231f;
	fLocal_2189[5] = 0.6637f;
	fLocal_2215[5] = 0.7469f;
	iLocal_5174[5] = joaat("minivan");
	Local_3511[118 /*3*/] = { 1124.693f, 6494.405f, 20.5125f };
	fLocal_62[118] = 0.0029f;
	fLocal_403[118] = -0.0031f;
	fLocal_744[118] = 0.7094f;
	fLocal_1085[118] = 0.7048f;
	iLocal_2262[118] = 119;
	fLocal_1426[118] = 55704f;
	iLocal_4833[118] = joaat("emperor");
	Local_3511[119 /*3*/] = { 1119.526f, 6488.295f, 20.7457f };
	fLocal_62[119] = 0.0031f;
	fLocal_403[119] = -0.0033f;
	fLocal_744[119] = 0.7145f;
	fLocal_1085[119] = 0.6997f;
	iLocal_2262[119] = 120;
	fLocal_1426[119] = 56034f;
	iLocal_4833[119] = joaat("asterope");
	Local_3511[120 /*3*/] = { 1106.922f, 6481.554f, 20.5177f };
	fLocal_62[120] = 0.003f;
	fLocal_403[120] = 0.0031f;
	fLocal_744[120] = 0.7152f;
	fLocal_1085[120] = -0.6989f;
	iLocal_2262[120] = 121;
	fLocal_1426[120] = 56166f;
	iLocal_4833[120] = joaat("asterope");
	Local_4532[6 /*3*/] = { 1112.504f, 6510.346f, 20.6561f };
	fLocal_2137[6] = 0f;
	fLocal_2163[6] = 0f;
	fLocal_2189[6] = 0.6373f;
	fLocal_2215[6] = 0.7707f;
	iLocal_5174[6] = joaat("asterope");
	Local_3511[121 /*3*/] = { 1089.84f, 6482.092f, 20.4654f };
	fLocal_62[121] = -0.0021f;
	fLocal_403[121] = -0.0042f;
	fLocal_744[121] = -0.6711f;
	fLocal_1085[121] = 0.7414f;
	iLocal_2262[121] = 122;
	fLocal_1426[121] = 56562f;
	iLocal_4833[121] = joaat("emperor");
	Local_3511[122 /*3*/] = { 1064.264f, 6481.459f, 20.5162f };
	fLocal_62[122] = 0.002f;
	fLocal_403[122] = 0.0035f;
	fLocal_744[122] = 0.7168f;
	fLocal_1085[122] = -0.6973f;
	iLocal_2262[122] = 123;
	fLocal_1426[122] = 57156f;
	iLocal_4833[122] = joaat("journey");
	Local_3511[123 /*3*/] = { 1060.381f, 6493.458f, 20.7409f };
	fLocal_62[123] = 0.0021f;
	fLocal_403[123] = -0.0037f;
	fLocal_744[123] = 0.6976f;
	fLocal_1085[123] = 0.7165f;
	iLocal_2262[123] = 124;
	fLocal_1426[123] = 57156f;
	iLocal_4833[123] = joaat("asterope");
	Local_3511[124 /*3*/] = { 1048.428f, 6481.55f, 20.7796f };
	fLocal_62[124] = 0.0036f;
	fLocal_403[124] = 0.0026f;
	fLocal_744[124] = 0.7133f;
	fLocal_1085[124] = -0.7008f;
	iLocal_2262[124] = 125;
	fLocal_1426[124] = 57486f;
	iLocal_4833[124] = joaat("journey");
	Local_4532[7 /*3*/] = { 1038.675f, 6504.091f, 20.5573f };
	fLocal_2137[7] = 0.0135f;
	fLocal_2163[7] = -0.0175f;
	fLocal_2189[7] = 0.7902f;
	fLocal_2215[7] = 0.6125f;
	iLocal_5174[7] = joaat("minivan");
	Local_3511[125 /*3*/] = { 1029.081f, 6488.599f, 20.3729f };
	fLocal_62[125] = 0.0001f;
	fLocal_403[125] = -0.0004f;
	fLocal_744[125] = 0.6854f;
	fLocal_1085[125] = 0.7282f;
	iLocal_2262[125] = 126;
	fLocal_1426[125] = 57882f;
	iLocal_4833[125] = joaat("emperor");
	Local_3511[126 /*3*/] = { 1013.028f, 6481.343f, 20.373f };
	fLocal_62[126] = 0.0031f;
	fLocal_403[126] = 0.0031f;
	fLocal_744[126] = 0.7262f;
	fLocal_1085[126] = -0.6875f;
	iLocal_2262[126] = 127;
	fLocal_1426[126] = 58278f;
	iLocal_4833[126] = joaat("emperor");
	Local_3511[127 /*3*/] = { 1002.968f, 6481.8f, 20.7867f };
	fLocal_62[127] = -0.0033f;
	fLocal_403[127] = -0.0029f;
	fLocal_744[127] = -0.6788f;
	fLocal_1085[127] = 0.7343f;
	iLocal_2262[127] = 128;
	fLocal_1426[127] = 58476f;
	iLocal_4833[127] = joaat("minivan");
	Local_3511[128 /*3*/] = { 987.0549f, 6481.98f, 20.6444f };
	fLocal_62[128] = -0.0032f;
	fLocal_403[128] = -0.0033f;
	fLocal_744[128] = -0.7041f;
	fLocal_1085[128] = 0.7101f;
	iLocal_2262[128] = 129;
	fLocal_1426[128] = 58872f;
	iLocal_4833[128] = joaat("surfer");
	Local_3511[129 /*3*/] = { 978.0116f, 6482.137f, 20.6604f };
	fLocal_62[129] = 0.0037f;
	fLocal_403[129] = 0.0022f;
	fLocal_744[129] = 0.7221f;
	fLocal_1085[129] = -0.6918f;
	iLocal_2262[129] = 130;
	fLocal_1426[129] = 59598f;
	iLocal_4833[129] = joaat("asterope");
	Local_3511[130 /*3*/] = { 934.914f, 6495.55f, 20.5344f };
	fLocal_62[130] = 0.0025f;
	fLocal_403[130] = -0.0002f;
	fLocal_744[130] = 0.6975f;
	fLocal_1085[130] = 0.7165f;
	iLocal_2262[130] = 131;
	fLocal_1426[130] = 60060f;
	iLocal_4833[130] = joaat("emperor");
	Local_3511[131 /*3*/] = { 932.5633f, 6483.07f, 20.9136f };
	fLocal_62[131] = 0.0052f;
	fLocal_403[131] = 0.0011f;
	fLocal_744[131] = 0.7226f;
	fLocal_1085[131] = -0.6913f;
	iLocal_2262[131] = 132;
	fLocal_1426[131] = 60390f;
	iLocal_4833[131] = joaat("journey");
	Local_3511[132 /*3*/] = { 909.9576f, 6483.846f, 20.7867f };
	fLocal_62[132] = 0.0069f;
	fLocal_403[132] = -0.0002f;
	fLocal_744[132] = 0.7339f;
	fLocal_1085[132] = -0.6792f;
	iLocal_2262[132] = 133;
	fLocal_1426[132] = 60984f;
	iLocal_4833[132] = joaat("journey");
	Local_3511[133 /*3*/] = { 888.3078f, 6491.088f, 21.314f };
	fLocal_62[133] = 0.0049f;
	fLocal_403[133] = 0.0028f;
	fLocal_744[133] = 0.6906f;
	fLocal_1085[133] = 0.7232f;
	iLocal_2262[133] = 134;
	fLocal_1426[133] = 61116f;
	iLocal_4833[133] = joaat("minivan");
	Local_3511[134 /*3*/] = { 889.868f, 6484.972f, 21.28f };
	fLocal_62[134] = 0.0071f;
	fLocal_403[134] = -0.0009f;
	fLocal_744[134] = 0.725f;
	fLocal_1085[134] = -0.6887f;
	iLocal_2262[134] = 135;
	fLocal_1426[134] = 61446f;
	iLocal_4833[134] = joaat("journey");
	Local_3511[135 /*3*/] = { 842.5891f, 6488.062f, 22.1128f };
	fLocal_62[135] = 0.0123f;
	fLocal_403[135] = -0.007f;
	fLocal_744[135] = 0.7344f;
	fLocal_1085[135] = -0.6786f;
	iLocal_2262[135] = 136;
	fLocal_1426[135] = 62172f;
	iLocal_4833[135] = joaat("journey");
	Local_3511[136 /*3*/] = { 841.4916f, 6494.06f, 21.7476f };
	fLocal_62[136] = 0.0096f;
	fLocal_403[136] = 0.0076f;
	fLocal_744[136] = 0.6762f;
	fLocal_1085[136] = 0.7366f;
	iLocal_2262[136] = 137;
	fLocal_1426[136] = 62172f;
	iLocal_4833[136] = joaat("emperor");
	Local_3511[137 /*3*/] = { 822.6181f, 6489.598f, 22.7336f };
	fLocal_62[137] = 0.0142f;
	fLocal_403[137] = -0.0097f;
	fLocal_744[137] = 0.7634f;
	fLocal_1085[137] = -0.6457f;
	iLocal_2262[137] = 138;
	fLocal_1426[137] = 62634f;
	iLocal_4833[137] = joaat("minivan");
	Local_3511[138 /*3*/] = { 798.2071f, 6491.523f, 23.6704f };
	fLocal_62[138] = 0.0171f;
	fLocal_403[138] = -0.0136f;
	fLocal_744[138] = 0.7653f;
	fLocal_1085[138] = -0.6434f;
	iLocal_2262[138] = 139;
	fLocal_1426[138] = 63228f;
	iLocal_4833[138] = joaat("minivan");
	Local_3511[139 /*3*/] = { 795.2281f, 6497.89f, 23.5202f };
	fLocal_62[139] = 0.0163f;
	fLocal_403[139] = 0.0138f;
	fLocal_744[139] = 0.6766f;
	fLocal_1085[139] = 0.7361f;
	iLocal_2262[139] = 140;
	fLocal_1426[139] = 63228f;
	iLocal_4833[139] = joaat("minivan");
	Local_3511[140 /*3*/] = { 797.379f, 6503.725f, 23.3211f };
	fLocal_62[140] = 0.0169f;
	fLocal_403[140] = 0.0141f;
	fLocal_744[140] = 0.6396f;
	fLocal_1085[140] = 0.7684f;
	iLocal_2262[140] = 141;
	fLocal_1426[140] = 63558f;
	iLocal_4833[140] = joaat("emperor");
	Local_3511[141 /*3*/] = { 747.9111f, 6498.405f, 26.0047f };
	fLocal_62[141] = 0.0165f;
	fLocal_403[141] = -0.0131f;
	fLocal_744[141] = 0.7684f;
	fLocal_1085[141] = -0.6397f;
	iLocal_2262[141] = 142;
	fLocal_1426[141] = 64350f;
	iLocal_4833[141] = joaat("journey");
	Local_3511[142 /*3*/] = { 713.0914f, 6505.18f, 26.9262f };
	fLocal_62[142] = 0.0099f;
	fLocal_403[142] = -0.0055f;
	fLocal_744[142] = 0.7799f;
	fLocal_1085[142] = -0.6259f;
	iLocal_2262[142] = 143;
	fLocal_1426[142] = 65142f;
	iLocal_4833[142] = joaat("journey");
	Local_3511[144 /*3*/] = { 725.2426f, 6509.24f, 26.9223f };
	fLocal_62[144] = 0.0136f;
	fLocal_403[144] = 0.0054f;
	fLocal_744[144] = 0.6585f;
	fLocal_1085[144] = 0.7525f;
	iLocal_2262[144] = 145;
	fLocal_1426[144] = 65472f;
	iLocal_4833[144] = joaat("minivan");
	Local_3511[147 /*3*/] = { 669.4201f, 6515.019f, 27.8855f };
	fLocal_62[147] = 0.0052f;
	fLocal_403[147] = 0.0006f;
	fLocal_744[147] = 0.7765f;
	fLocal_1085[147] = -0.6301f;
	iLocal_2262[147] = 148;
	fLocal_1426[147] = 66396f;
	iLocal_4833[147] = joaat("journey");
	Local_3511[148 /*3*/] = { 648.7714f, 6519.734f, 28.0324f };
	fLocal_62[148] = 0.0045f;
	fLocal_403[148] = 0.0014f;
	fLocal_744[148] = 0.766f;
	fLocal_1085[148] = -0.6428f;
	iLocal_2262[148] = 149;
	fLocal_1426[148] = 67188f;
	iLocal_4833[148] = joaat("minivan");
	Local_3511[149 /*3*/] = { 617.5839f, 6538.985f, 27.6398f };
	fLocal_62[149] = 0.0007f;
	fLocal_403[149] = -0.0028f;
	fLocal_744[149] = 0.6262f;
	fLocal_1085[149] = 0.7797f;
	iLocal_2262[149] = 150;
	fLocal_1426[149] = 67584f;
	iLocal_4833[149] = joaat("emperor");
	Local_3511[150 /*3*/] = { 595.9203f, 6531.194f, 27.9013f };
	fLocal_62[150] = 0.0016f;
	fLocal_403[150] = 0.0049f;
	fLocal_744[150] = 0.7801f;
	fLocal_1085[150] = -0.6256f;
	iLocal_2262[150] = 151;
	fLocal_1426[150] = 68112f;
	iLocal_4833[150] = joaat("journey");
	Local_3511[151 /*3*/] = { 573.7428f, 6536.121f, 27.4576f };
	fLocal_62[151] = 0.0012f;
	fLocal_403[151] = 0.0059f;
	fLocal_744[151] = 0.7853f;
	fLocal_1085[151] = -0.6191f;
	iLocal_2262[151] = 152;
	fLocal_1426[151] = 68442f;
	iLocal_4833[151] = joaat("journey");
	Local_3511[152 /*3*/] = { 569.4676f, 6549.877f, 27.7749f };
	fLocal_62[152] = -0.0003f;
	fLocal_403[152] = -0.0058f;
	fLocal_744[152] = 0.6257f;
	fLocal_1085[152] = 0.78f;
	iLocal_2262[152] = 153;
	fLocal_1426[152] = 68706f;
	iLocal_4833[152] = joaat("minivan");
	Local_3511[153 /*3*/] = { 553.1826f, 6540.714f, 27.5681f };
	fLocal_62[153] = 0.0006f;
	fLocal_403[153] = 0.0064f;
	fLocal_744[153] = 0.7703f;
	fLocal_1085[153] = -0.6376f;
	iLocal_2262[153] = 154;
	fLocal_1426[153] = 69366f;
	iLocal_4833[153] = joaat("journey");
	Local_3511[156 /*3*/] = { 490.8492f, 6565.363f, 26.8575f };
	fLocal_62[156] = -0.0004f;
	fLocal_403[156] = -0.0041f;
	fLocal_744[156] = 0.6584f;
	fLocal_1085[156] = 0.7526f;
	iLocal_2262[156] = 157;
	fLocal_1426[156] = 70488f;
	iLocal_4833[156] = joaat("minivan");
	Local_3511[157 /*3*/] = { 504.1685f, 6557.917f, 26.9448f };
	fLocal_62[157] = -0.0045f;
	fLocal_403[157] = -0.0036f;
	fLocal_744[157] = 0.6266f;
	fLocal_1085[157] = 0.7793f;
	iLocal_2262[157] = 158;
	fLocal_1426[157] = 70686f;
	iLocal_4833[157] = joaat("journey");
	Local_3511[158 /*3*/] = { 468.7714f, 6557.208f, 26.8139f };
	fLocal_62[158] = 0.0029f;
	fLocal_403[158] = 0.0027f;
	fLocal_744[158] = 0.7754f;
	fLocal_1085[158] = -0.6314f;
	iLocal_2262[158] = 159;
	fLocal_1426[158] = 71016f;
	iLocal_4833[158] = joaat("minivan");
	Local_3511[159 /*3*/] = { 443.9303f, 6561.51f, 26.5272f };
	fLocal_62[159] = 0.0017f;
	fLocal_403[159] = -0.0019f;
	fLocal_744[159] = 0.7477f;
	fLocal_1085[159] = -0.6641f;
	iLocal_2262[159] = 160;
	fLocal_1426[159] = 71544f;
	iLocal_4833[159] = joaat("journey");
	Local_3511[160 /*3*/] = { 410.8601f, 6564.738f, 27.172f };
	fLocal_62[160] = 0.0061f;
	fLocal_403[160] = -0.0049f;
	fLocal_744[160] = 0.7329f;
	fLocal_1085[160] = -0.6803f;
	iLocal_2262[160] = 161;
	fLocal_1426[160] = 72336f;
	iLocal_4833[160] = joaat("journey");
	Local_3511[161 /*3*/] = { 405.5365f, 6576.076f, 27.3538f };
	fLocal_62[161] = 0.0096f;
	fLocal_403[161] = 0.0013f;
	fLocal_744[161] = 0.6791f;
	fLocal_1085[161] = 0.7339f;
	iLocal_2262[161] = 162;
	fLocal_1426[161] = 72468f;
	iLocal_4833[161] = joaat("minivan");
	Local_3511[163 /*3*/] = { 395.5341f, 6577.059f, 27.2913f };
	fLocal_62[163] = 0.0078f;
	fLocal_403[163] = 0.0014f;
	fLocal_744[163] = 0.6561f;
	fLocal_1085[163] = 0.7546f;
	iLocal_2262[163] = 164;
	fLocal_1426[163] = 72798f;
	iLocal_4833[163] = joaat("surfer");
	Local_3511[164 /*3*/] = { 348.5958f, 6567.658f, 28.2457f };
	fLocal_62[164] = -0.0079f;
	fLocal_403[164] = 0.0079f;
	fLocal_744[164] = -0.6893f;
	fLocal_1085[164] = 0.7244f;
	iLocal_2262[164] = 165;
	fLocal_1426[164] = 73788f;
	iLocal_4833[164] = joaat("minivan");
	Local_3511[165 /*3*/] = { 341.6452f, 6578.404f, 28.4158f };
	fLocal_62[165] = 0.0112f;
	fLocal_403[165] = 0.0051f;
	fLocal_744[165] = 0.7104f;
	fLocal_1085[165] = 0.7037f;
	iLocal_2262[165] = 166;
	fLocal_1426[165] = 73986f;
	iLocal_4833[165] = joaat("journey");
	Local_4532[8 /*3*/] = { 301.0602f, 6596.749f, 29.7845f };
	fLocal_2137[8] = -0.0241f;
	fLocal_2163[8] = 0.0122f;
	fLocal_2189[8] = -0.1432f;
	fLocal_2215[8] = 0.9893f;
	iLocal_5174[8] = joaat("surfer");
	Local_3511[169 /*3*/] = { 289.2193f, 6565.667f, 29.8009f };
	fLocal_62[169] = -0.0105f;
	fLocal_403[169] = 0.0097f;
	fLocal_744[169] = -0.6653f;
	fLocal_1085[169] = 0.7465f;
	iLocal_2262[169] = 170;
	fLocal_1426[169] = 75570f;
	iLocal_4833[169] = joaat("minivan");
	Local_3511[170 /*3*/] = { 280.0489f, 6564.274f, 30.5158f };
	fLocal_62[170] = -0.0102f;
	fLocal_403[170] = 0.0098f;
	fLocal_744[170] = -0.6946f;
	fLocal_1085[170] = 0.7193f;
	iLocal_2262[170] = 171;
	fLocal_1426[170] = 75768f;
	iLocal_4833[170] = joaat("mule");
	Local_3511[171 /*3*/] = { 223.4678f, 6553.761f, 31.5455f };
	fLocal_62[171] = -0.0027f;
	fLocal_403[171] = 0.0055f;
	fLocal_744[171] = -0.6048f;
	fLocal_1085[171] = 0.7963f;
	iLocal_2262[171] = 172;
	fLocal_1426[171] = 76626f;
	iLocal_4833[171] = joaat("journey");
	Local_3511[173 /*3*/] = { 204.3794f, 6547.874f, 31.7291f };
	fLocal_62[173] = -0.0001f;
	fLocal_403[173] = 0.0024f;
	fLocal_744[173] = -0.538f;
	fLocal_1085[173] = 0.843f;
	iLocal_2262[173] = 174;
	fLocal_1426[173] = 77220f;
	iLocal_4833[173] = joaat("minivan");
	Local_3511[174 /*3*/] = { 191.195f, 6542.26f, 31.7253f };
	fLocal_62[174] = 0.0012f;
	fLocal_403[174] = -0.0008f;
	fLocal_744[174] = -0.5002f;
	fLocal_1085[174] = 0.8659f;
	iLocal_2262[174] = 175;
	fLocal_1426[174] = 77880f;
	iLocal_4833[174] = joaat("minivan");
	Local_4532[9 /*3*/] = { 150.8109f, 6597.513f, 30.8449f };
	fLocal_2137[9] = 0f;
	fLocal_2163[9] = 0f;
	fLocal_2189[9] = -0.0089f;
	fLocal_2215[9] = 1f;
	iLocal_5174[9] = joaat("mule");
	Local_4532[10 /*3*/] = { 146.6424f, 6579.655f, 30.8164f };
	fLocal_2137[10] = 0f;
	fLocal_2163[10] = 0f;
	fLocal_2189[10] = -0.6845f;
	fLocal_2215[10] = 0.729f;
	iLocal_5174[10] = joaat("mule");
	Local_3511[176 /*3*/] = { 136.9821f, 6540.778f, 31.3868f };
	fLocal_62[176] = -0.018f;
	fLocal_403[176] = -0.002f;
	fLocal_744[176] = 0.9253f;
	fLocal_1085[176] = -0.3787f;
	iLocal_2262[176] = 177;
	fLocal_1426[176] = 78672f;
	iLocal_4833[176] = joaat("minivan");
	Local_3511[177 /*3*/] = { 88.7146f, 6597.552f, 31.327f };
	fLocal_62[177] = -0.0033f;
	fLocal_403[177] = 0.008f;
	fLocal_744[177] = 0.3907f;
	fLocal_1085[177] = 0.9205f;
	iLocal_2262[177] = 178;
	fLocal_1426[177] = 79794f;
	iLocal_4833[177] = joaat("minivan");
	Local_3511[178 /*3*/] = { 62.4602f, 6447.905f, 31.1752f };
	fLocal_62[178] = 0.0041f;
	fLocal_403[178] = -0.0017f;
	fLocal_744[178] = 0.922f;
	fLocal_1085[178] = 0.3872f;
	iLocal_2262[178] = 179;
	fLocal_1426[178] = 81906f;
	iLocal_4833[178] = joaat("minivan");
	Local_4532[11 /*3*/] = { 40.8196f, 6439.584f, 30.3269f };
	fLocal_2137[11] = 0f;
	fLocal_2163[11] = 0f;
	fLocal_2189[11] = 0.9229f;
	fLocal_2215[11] = 0.385f;
	iLocal_5174[11] = joaat("mule");
	Local_3511[179 /*3*/] = { 95.0551f, 6464.879f, 31.4468f };
	fLocal_62[179] = 0.0059f;
	fLocal_403[179] = -0.0024f;
	fLocal_744[179] = -0.3842f;
	fLocal_1085[179] = 0.9232f;
	iLocal_2262[179] = 180;
	fLocal_1426[179] = 82104f;
	iLocal_4833[179] = joaat("mule");
	Local_3511[180 /*3*/] = { 35.1529f, 6421.506f, 31.1415f };
	fLocal_62[180] = 0.0036f;
	fLocal_403[180] = -0.0021f;
	fLocal_744[180] = 0.921f;
	fLocal_1085[180] = 0.3895f;
	iLocal_2262[180] = 181;
	fLocal_1426[180] = 82302f;
	iLocal_4833[180] = joaat("journey");
	Local_3511[181 /*3*/] = { 54.4397f, 6424.631f, 30.9632f };
	fLocal_62[181] = -0.0006f;
	fLocal_403[181] = 0f;
	fLocal_744[181] = -0.3767f;
	fLocal_1085[181] = 0.9263f;
	iLocal_2262[181] = 182;
	fLocal_1426[181] = 82434f;
	iLocal_4833[181] = joaat("surfer");
	Local_3511[182 /*3*/] = { 44.9629f, 6415.152f, 31.1338f };
	fLocal_62[182] = -0.0006f;
	fLocal_403[182] = 0f;
	fLocal_744[182] = -0.4186f;
	fLocal_1085[182] = 0.9082f;
	iLocal_2262[182] = 183;
	fLocal_1426[182] = 82566f;
	iLocal_4833[182] = joaat("minivan");
	Local_3511[184 /*3*/] = { 24.52f, 6394.301f, 31.1302f };
	fLocal_62[184] = -0.0004f;
	fLocal_403[184] = 0f;
	fLocal_744[184] = -0.421f;
	fLocal_1085[184] = 0.9071f;
	iLocal_2262[184] = 185;
	fLocal_1426[184] = 82962f;
	iLocal_4833[184] = joaat("minivan");
	Local_3511[186 /*3*/] = { 47.3566f, 6417.546f, 31.4162f };
	fLocal_62[186] = -0.0047f;
	fLocal_403[186] = 0.0019f;
	fLocal_744[186] = -0.3832f;
	fLocal_1085[186] = 0.9237f;
	iLocal_2262[186] = 187;
	fLocal_1426[186] = 83424f;
	iLocal_4833[186] = joaat("mule");
	Local_3511[187 /*3*/] = { 9.9551f, 6396.016f, 31.1338f };
	fLocal_62[187] = 0.0002f;
	fLocal_403[187] = -0.0006f;
	fLocal_744[187] = 0.9382f;
	fLocal_1085[187] = 0.3461f;
	iLocal_2262[187] = 188;
	fLocal_1426[187] = 83622f;
	iLocal_4833[187] = joaat("minivan");
	Local_3511[188 /*3*/] = { 13.5893f, 6399.649f, 31.5825f };
	fLocal_62[188] = 0.0002f;
	fLocal_403[188] = 0.0004f;
	fLocal_744[188] = 0.926f;
	fLocal_1085[188] = 0.3776f;
	iLocal_2262[188] = 189;
	fLocal_1426[188] = 83886f;
	iLocal_4833[188] = joaat("mule");
	Local_3511[190 /*3*/] = { -2.7613f, 6366.929f, 31.1338f };
	fLocal_62[190] = -0.0006f;
	fLocal_403[190] = 0f;
	fLocal_744[190] = -0.4186f;
	fLocal_1085[190] = 0.9082f;
	iLocal_2262[190] = 191;
	fLocal_1426[190] = 84216f;
	iLocal_4833[190] = joaat("minivan");
	Local_3511[192 /*3*/] = { -4.7622f, 6364.703f, 31.5749f };
	fLocal_62[192] = -0.0012f;
	fLocal_403[192] = 0.0005f;
	fLocal_744[192] = -0.3836f;
	fLocal_1085[192] = 0.9235f;
	iLocal_2262[192] = 193;
	fLocal_1426[192] = 85206f;
	iLocal_4833[192] = joaat("mule");
	Local_3511[194 /*3*/] = { -46.7229f, 6323.081f, 30.9614f };
	fLocal_62[194] = -0.0005f;
	fLocal_403[194] = 0.0002f;
	fLocal_744[194] = -0.3384f;
	fLocal_1085[194] = 0.941f;
	iLocal_2262[194] = 195;
	fLocal_1426[194] = 86064f;
	iLocal_4833[194] = joaat("surfer");
	Local_3511[196 /*3*/] = { -57.0975f, 6312.946f, 31.1302f };
	fLocal_62[196] = -0.001f;
	fLocal_403[196] = 0.0002f;
	fLocal_744[196] = -0.3729f;
	fLocal_1085[196] = 0.9279f;
	iLocal_2262[196] = 197;
	fLocal_1426[196] = 86922f;
	iLocal_4833[196] = joaat("minivan");
	Local_3511[197 /*3*/] = { -118.5549f, 6259.634f, 30.9714f };
	fLocal_62[197] = 0.0034f;
	fLocal_403[197] = -0.0035f;
	fLocal_744[197] = -0.3943f;
	fLocal_1085[197] = 0.919f;
	iLocal_2262[197] = 198;
	fLocal_1426[197] = 87450f;
	iLocal_4833[197] = joaat("minivan");
	Local_4532[12 /*3*/] = { -139.0886f, 6276.704f, 31.0148f };
	fLocal_2137[12] = 0f;
	fLocal_2163[12] = 0f;
	fLocal_2189[12] = 0.4019f;
	fLocal_2215[12] = 0.9157f;
	iLocal_5174[12] = joaat("minivan");
	Local_4532[13 /*3*/] = { -104.6942f, 6263.705f, 30.2543f };
	fLocal_2137[13] = 0f;
	fLocal_2163[13] = 0f;
	fLocal_2189[13] = -0.3802f;
	fLocal_2215[13] = 0.9249f;
	iLocal_5174[13] = joaat("mule");
	Local_3511[198 /*3*/] = { -129.7646f, 6239.847f, 30.9729f };
	fLocal_62[198] = -0.0003f;
	fLocal_403[198] = 0.0004f;
	fLocal_744[198] = -0.3557f;
	fLocal_1085[198] = 0.9346f;
	iLocal_2262[198] = 199;
	fLocal_1426[198] = 87978f;
	iLocal_4833[198] = joaat("minivan");
	Local_4532[14 /*3*/] = { -131.429f, 6282.802f, 31.0148f };
	fLocal_2137[14] = 0f;
	fLocal_2163[14] = 0f;
	fLocal_2189[14] = 0.9305f;
	fLocal_2215[14] = -0.3662f;
	iLocal_5174[14] = joaat("minivan");
	Local_3511[199 /*3*/] = { -143.0423f, 6242.148f, 30.9584f };
	fLocal_62[199] = 0.0007f;
	fLocal_403[199] = 0.0017f;
	fLocal_744[199] = 0.9282f;
	fLocal_1085[199] = 0.3721f;
	iLocal_2262[199] = 200;
	fLocal_1426[199] = 88110f;
	iLocal_4833[199] = joaat("journey");
	Local_4532[15 /*3*/] = { -142.2711f, 6252.664f, 31.2133f };
	fLocal_2137[15] = 0f;
	fLocal_2163[15] = 0f;
	fLocal_2189[15] = 0.7589f;
	fLocal_2215[15] = -0.6512f;
	iLocal_5174[15] = joaat("minivan");
	Local_3511[200 /*3*/] = { -149.4187f, 6219.917f, 31.4495f };
	fLocal_62[200] = -0.0013f;
	fLocal_403[200] = 0.0007f;
	fLocal_744[200] = -0.3658f;
	fLocal_1085[200] = 0.9307f;
	iLocal_2262[200] = 201;
	fLocal_1426[200] = 88638f;
	iLocal_4833[200] = joaat("mule");
	Local_3511[201 /*3*/] = { -159.8186f, 6226.015f, 31.0039f };
	fLocal_62[201] = 0.0001f;
	fLocal_403[201] = -0.0003f;
	fLocal_744[201] = 0.9112f;
	fLocal_1085[201] = 0.4121f;
	iLocal_2262[201] = 202;
	fLocal_1426[201] = 88704f;
	iLocal_4833[201] = joaat("minivan");
	Local_3511[202 /*3*/] = { -156.576f, 6212.621f, 31.2925f };
	fLocal_62[202] = -0.0032f;
	fLocal_403[202] = 0.0011f;
	fLocal_744[202] = -0.3874f;
	fLocal_1085[202] = 0.9219f;
	iLocal_2262[202] = 203;
	fLocal_1426[202] = 89232f;
	iLocal_4833[202] = joaat("mule");
	Local_3511[203 /*3*/] = { -177.8305f, 6207.833f, 30.8371f };
	fLocal_62[203] = -0.0005f;
	fLocal_403[203] = -0.0003f;
	fLocal_744[203] = 0.9093f;
	fLocal_1085[203] = 0.4161f;
	iLocal_2262[203] = 204;
	fLocal_1426[203] = 89298f;
	iLocal_4833[203] = joaat("surfer");
	Local_4532[16 /*3*/] = { -197.4503f, 6228.776f, 30.9489f };
	fLocal_2137[16] = 0f;
	fLocal_2163[16] = 0f;
	fLocal_2189[16] = 0.4072f;
	fLocal_2215[16] = 0.9133f;
	iLocal_5174[16] = joaat("minivan");
	Local_3511[204 /*3*/] = { -200.7223f, 6184.806f, 31.0163f };
	fLocal_62[204] = 0.0039f;
	fLocal_403[204] = -0.0021f;
	fLocal_744[204] = 0.9257f;
	fLocal_1085[204] = 0.3782f;
	iLocal_2262[204] = 205;
	fLocal_1426[204] = 90024f;
	iLocal_4833[204] = joaat("journey");
	Local_4532[17 /*3*/] = { -238.7583f, 6196.229f, 31.1881f };
	fLocal_2137[17] = 0f;
	fLocal_2163[17] = 0f;
	fLocal_2189[17] = -0.3988f;
	fLocal_2215[17] = 0.917f;
	iLocal_5174[17] = joaat("minivan");
	Local_3511[206 /*3*/] = { -200.2096f, 6169.229f, 31.5074f };
	fLocal_62[206] = -0.0012f;
	fLocal_403[206] = -0.0042f;
	fLocal_744[206] = -0.3741f;
	fLocal_1085[206] = 0.9274f;
	iLocal_2262[206] = 207;
	fLocal_1426[206] = 91080f;
	iLocal_4833[206] = joaat("mule");
	Local_3511[207 /*3*/] = { -219.4954f, 6166.065f, 31.0585f };
	fLocal_62[207] = 0.0039f;
	fLocal_403[207] = -0.0023f;
	fLocal_744[207] = 0.9082f;
	fLocal_1085[207] = 0.4186f;
	iLocal_2262[207] = 208;
	fLocal_1426[207] = 91278f;
	iLocal_4833[207] = joaat("minivan");
	Local_3511[208 /*3*/] = { -242.7871f, 6133.875f, 31.0087f };
	fLocal_62[208] = -0.0016f;
	fLocal_403[208] = -0.0034f;
	fLocal_744[208] = -0.3642f;
	fLocal_1085[208] = 0.9313f;
	iLocal_2262[208] = 209;
	fLocal_1426[208] = 91542f;
	iLocal_4833[208] = joaat("minivan");
	Local_4532[18 /*3*/] = { -227.085f, 6120.908f, 31.4034f };
	fLocal_2137[18] = 0f;
	fLocal_2163[18] = 0f;
	fLocal_2189[18] = 0.9135f;
	fLocal_2215[18] = 0.4068f;
	iLocal_5174[18] = joaat("minivan");
	Local_3511[209 /*3*/] = { -273.2502f, 6094.917f, 31.3158f };
	fLocal_62[209] = -0.0014f;
	fLocal_403[209] = -0.0017f;
	fLocal_744[209] = -0.3911f;
	fLocal_1085[209] = 0.9203f;
	iLocal_2262[209] = 210;
	fLocal_1426[209] = 92664f;
	iLocal_4833[209] = joaat("mule");
	Local_4532[19 /*3*/] = { -268.2806f, 6066.724f, 31.4731f };
	fLocal_2137[19] = 0f;
	fLocal_2163[19] = 0f;
	fLocal_2189[19] = -0.5672f;
	fLocal_2215[19] = 0.8236f;
	iLocal_5174[19] = joaat("minivan");
	Local_3511[211 /*3*/] = { -320.4204f, 6065.177f, 31.4226f };
	fLocal_62[211] = 0.0022f;
	fLocal_403[211] = -0.001f;
	fLocal_744[211] = 0.9238f;
	fLocal_1085[211] = 0.3829f;
	iLocal_2262[211] = 212;
	fLocal_1426[211] = 93918f;
	iLocal_4833[211] = joaat("mule");
	Local_4532[20 /*3*/] = { -343.3658f, 6076.274f, 31.2703f };
	fLocal_2137[20] = 0f;
	fLocal_2163[20] = 0f;
	fLocal_2189[20] = 0.9055f;
	fLocal_2215[20] = -0.4243f;
	iLocal_5174[20] = joaat("minivan");
	Local_3511[212 /*3*/] = { -342.7433f, 6026.788f, 30.9903f };
	fLocal_62[212] = -0.0027f;
	fLocal_403[212] = -0.0012f;
	fLocal_744[212] = -0.3927f;
	fLocal_1085[212] = 0.9197f;
	iLocal_2262[212] = 213;
	fLocal_1426[212] = 94908f;
	iLocal_4833[212] = joaat("minivan");
	Local_3511[213 /*3*/] = { -345.5276f, 6024.096f, 30.8184f };
	fLocal_62[213] = -0.0024f;
	fLocal_403[213] = 0.0009f;
	fLocal_744[213] = -0.332f;
	fLocal_1085[213] = 0.9433f;
	iLocal_2262[213] = 214;
	fLocal_1426[213] = 95238f;
	iLocal_4833[213] = joaat("surfer");
	Local_3511[214 /*3*/] = { -366.1345f, 6019.911f, 31.0597f };
	fLocal_62[214] = 0.0047f;
	fLocal_403[214] = 0.0006f;
	fLocal_744[214] = 0.9468f;
	fLocal_1085[214] = 0.3219f;
	iLocal_2262[214] = 215;
	fLocal_1426[214] = 95436f;
	iLocal_4833[214] = joaat("journey");
	Local_3511[215 /*3*/] = { -386.347f, 5988.085f, 31.3453f };
	fLocal_62[215] = -0.0057f;
	fLocal_403[215] = -0.006f;
	fLocal_744[215] = -0.3475f;
	fLocal_1085[215] = 0.9376f;
	iLocal_2262[215] = 216;
	fLocal_1426[215] = 96228f;
	iLocal_4833[215] = joaat("minivan");
	Local_3511[216 /*3*/] = { -397.9482f, 6021.191f, 31.1729f };
	fLocal_62[216] = -0.0166f;
	fLocal_403[216] = -0.0055f;
	fLocal_744[216] = 0.9252f;
	fLocal_1085[216] = -0.3791f;
	iLocal_2262[216] = 217;
	fLocal_1426[216] = 96426f;
	iLocal_4833[216] = joaat("minivan");
	Local_3511[217 /*3*/] = { -396.4938f, 5985.07f, 31.6773f };
	fLocal_62[217] = 0.001f;
	fLocal_403[217] = 0.0024f;
	fLocal_744[217] = 0.9301f;
	fLocal_1085[217] = 0.3674f;
	iLocal_2262[217] = 218;
	fLocal_1426[217] = 96492f;
	iLocal_4833[217] = joaat("mule");
	Local_3511[218 /*3*/] = { -385.9991f, 5979.59f, 31.8351f };
	fLocal_62[218] = -0.0034f;
	fLocal_403[218] = 0.0014f;
	fLocal_744[218] = -0.3756f;
	fLocal_1085[218] = 0.9268f;
	iLocal_2262[218] = 219;
	fLocal_1426[218] = 96558f;
	iLocal_4833[218] = joaat("mule");
	Local_3511[219 /*3*/] = { -425.9279f, 5933.403f, 32.0897f };
	fLocal_62[219] = -0.0076f;
	fLocal_403[219] = 0.0026f;
	fLocal_744[219] = -0.2957f;
	fLocal_1085[219] = 0.9553f;
	iLocal_2262[219] = 220;
	fLocal_1426[219] = 97812f;
	iLocal_4833[219] = joaat("minivan");
	Local_3511[221 /*3*/] = { -450.5932f, 5901.583f, 32.5169f };
	fLocal_62[221] = -0.007f;
	fLocal_403[221] = 0.0019f;
	fLocal_744[221] = -0.2731f;
	fLocal_1085[221] = 0.962f;
	iLocal_2262[221] = 222;
	fLocal_1426[221] = 98736f;
	iLocal_4833[221] = joaat("surfer");
	Local_3511[224 /*3*/] = { -451.5227f, 5899.928f, 33.1721f };
	fLocal_62[224] = -0.0071f;
	fLocal_403[224] = 0.0025f;
	fLocal_744[224] = -0.3279f;
	fLocal_1085[224] = 0.9447f;
	iLocal_2262[224] = 225;
	fLocal_1426[224] = 99264f;
	iLocal_4833[224] = joaat("mule");
	Local_3511[227 /*3*/] = { -494.7882f, 5834.927f, 33.9774f };
	fLocal_62[227] = -0.0086f;
	fLocal_403[227] = 0.0026f;
	fLocal_744[227] = -0.2869f;
	fLocal_1085[227] = 0.9579f;
	iLocal_2262[227] = 228;
	fLocal_1426[227] = 100584f;
	iLocal_4833[227] = joaat("minivan");
	Local_3511[228 /*3*/] = { -512.1516f, 5804.124f, 34.6696f };
	fLocal_62[228] = -0.0113f;
	fLocal_403[228] = -0.0016f;
	fLocal_744[228] = -0.2395f;
	fLocal_1085[228] = 0.9708f;
	iLocal_2262[228] = 229;
	fLocal_1426[228] = 101310f;
	iLocal_4833[228] = joaat("journey");
	Local_3511[230 /*3*/] = { -522.2422f, 5783.059f, 35.6767f };
	fLocal_62[230] = -0.0124f;
	fLocal_403[230] = -0.0021f;
	fLocal_744[230] = -0.1982f;
	fLocal_1085[230] = 0.9801f;
	iLocal_2262[230] = 231;
	fLocal_1426[230] = 102366f;
	iLocal_4833[230] = joaat("mule");
	Local_3511[231 /*3*/] = { -544.503f, 5760.582f, 35.6938f };
	fLocal_62[231] = 0.0025f;
	fLocal_403[231] = 0.0112f;
	fLocal_744[231] = 0.9733f;
	fLocal_1085[231] = 0.2292f;
	iLocal_2262[231] = 232;
	fLocal_1426[231] = 102630f;
	iLocal_4833[231] = joaat("surfer");
	Local_3511[232 /*3*/] = { -540.8187f, 5768.099f, 35.9515f };
	fLocal_62[232] = 0.0016f;
	fLocal_403[232] = 0.0081f;
	fLocal_744[232] = 0.9812f;
	fLocal_1085[232] = 0.1929f;
	iLocal_2262[232] = 233;
	fLocal_1426[232] = 102828f;
	iLocal_4833[232] = joaat("mule");
	Local_3511[233 /*3*/] = { -540.1239f, 5740.191f, 36.2707f };
	fLocal_62[233] = -0.0113f;
	fLocal_403[233] = 0.002f;
	fLocal_744[233] = -0.193f;
	fLocal_1085[233] = 0.9811f;
	iLocal_2262[233] = 234;
	fLocal_1426[233] = 104346f;
	iLocal_4833[233] = joaat("minivan");
	Local_3511[234 /*3*/] = { -567.8047f, 5677.111f, 37.7006f };
	fLocal_62[234] = -0.01f;
	fLocal_403[234] = -0.0015f;
	fLocal_744[234] = -0.2147f;
	fLocal_1085[234] = 0.9766f;
	iLocal_2262[234] = 235;
	fLocal_1426[234] = 104676f;
	iLocal_4833[234] = joaat("journey");
	Local_3511[235 /*3*/] = { -578.9499f, 5679.693f, 38.2365f };
	fLocal_62[235] = 0.006f;
	fLocal_403[235] = 0.0086f;
	fLocal_744[235] = 0.9778f;
	fLocal_1085[235] = 0.2094f;
	iLocal_2262[235] = 236;
	fLocal_1426[235] = 104676f;
	iLocal_4833[235] = joaat("mule");
	Local_3511[236 /*3*/] = { -582.9236f, 5643.653f, 38.4277f };
	fLocal_62[236] = -0.0074f;
	fLocal_403[236] = -0.0028f;
	fLocal_744[236] = -0.2457f;
	fLocal_1085[236] = 0.9693f;
	iLocal_2262[236] = 237;
	fLocal_1426[236] = 105534f;
	iLocal_4833[236] = joaat("minivan");
	Local_3511[237 /*3*/] = { -603.3911f, 5611.917f, 38.8401f };
	fLocal_62[237] = -0.0034f;
	fLocal_403[237] = -0.0034f;
	fLocal_744[237] = -0.3058f;
	fLocal_1085[237] = 0.9521f;
	iLocal_2262[237] = 238;
	fLocal_1426[237] = 106458f;
	iLocal_4833[237] = joaat("minivan");
	Local_3511[238 /*3*/] = { -617.3054f, 5612.073f, 39.1315f };
	fLocal_62[238] = 0.0027f;
	fLocal_403[238] = 0.0034f;
	fLocal_744[238] = 0.9518f;
	fLocal_1085[238] = 0.3068f;
	iLocal_2262[238] = 239;
	fLocal_1426[238] = 106524f;
	iLocal_4833[238] = joaat("mule");
	Local_3511[239 /*3*/] = { -631.8846f, 5579.895f, 38.7442f };
	fLocal_62[239] = 0.0031f;
	fLocal_403[239] = -0.0014f;
	fLocal_744[239] = -0.4165f;
	fLocal_1085[239] = 0.9091f;
	iLocal_2262[239] = 240;
	fLocal_1426[239] = 107382f;
	iLocal_4833[239] = joaat("journey");
	Local_3511[240 /*3*/] = { -652.1945f, 5563.649f, 38.9956f };
	fLocal_62[240] = 0.0059f;
	fLocal_403[240] = -0.0028f;
	fLocal_744[240] = -0.4297f;
	fLocal_1085[240] = 0.9029f;
	iLocal_2262[240] = 241;
	fLocal_1426[240] = 107910f;
	iLocal_4833[240] = joaat("mule");
	Local_3511[242 /*3*/] = { -681.4705f, 5543.076f, 37.919f };
	fLocal_62[242] = 0.0095f;
	fLocal_403[242] = -0.01f;
	fLocal_744[242] = -0.4741f;
	fLocal_1085[242] = 0.8803f;
	iLocal_2262[242] = 243;
	fLocal_1426[242] = 108702f;
	iLocal_4833[242] = joaat("journey");
	Local_3511[243 /*3*/] = { -698.1723f, 5532.084f, 37.6632f };
	fLocal_62[243] = 0.009f;
	fLocal_403[243] = -0.01f;
	fLocal_744[243] = -0.4885f;
	fLocal_1085[243] = 0.8724f;
	iLocal_2262[243] = 244;
	fLocal_1426[243] = 109164f;
	iLocal_4833[243] = joaat("mule");
	Local_3511[244 /*3*/] = { -723.4635f, 5515.535f, 36.1629f };
	fLocal_62[244] = 0.0138f;
	fLocal_403[244] = -0.0127f;
	fLocal_744[244] = -0.4765f;
	fLocal_1085[244] = 0.879f;
	iLocal_2262[244] = 245;
	fLocal_1426[244] = 111276f;
	iLocal_4833[244] = joaat("surfer");
	Local_3511[245 /*3*/] = { -771.7394f, 5485.485f, 34.3527f };
	fLocal_62[245] = 0.0092f;
	fLocal_403[245] = -0.0046f;
	fLocal_744[245] = -0.4793f;
	fLocal_1085[245] = 0.8776f;
	iLocal_2262[245] = 246;
	fLocal_1426[245] = 111408f;
	iLocal_4833[245] = joaat("journey");
	Local_3511[246 /*3*/] = { -780.158f, 5479.962f, 34.1691f };
	fLocal_62[246] = 0.0085f;
	fLocal_403[246] = -0.0063f;
	fLocal_744[246] = -0.4854f;
	fLocal_1085[246] = 0.8742f;
	iLocal_2262[246] = 247;
	fLocal_1426[246] = 111606f;
	iLocal_4833[246] = joaat("minivan");
	Local_3511[247 /*3*/] = { -751.5074f, 5512.347f, 35.3637f };
	fLocal_62[247] = -0.0086f;
	fLocal_403[247] = -0.0153f;
	fLocal_744[247] = 0.875f;
	fLocal_1085[247] = 0.4838f;
	iLocal_2262[247] = 248;
	fLocal_1426[247] = 111870f;
	iLocal_4833[247] = joaat("minivan");
	Local_3511[248 /*3*/] = { -782.3395f, 5478.522f, 34.5592f };
	fLocal_62[248] = 0.0088f;
	fLocal_403[248] = -0.0068f;
	fLocal_744[248] = -0.4877f;
	fLocal_1085[248] = 0.8729f;
	iLocal_2262[248] = 249;
	fLocal_1426[248] = 111936f;
	iLocal_4833[248] = joaat("mule");
	Local_3511[249 /*3*/] = { -797.4579f, 5469.087f, 33.8033f };
	fLocal_62[249] = 0.0048f;
	fLocal_403[249] = -0.0049f;
	fLocal_744[249] = -0.447f;
	fLocal_1085[249] = 0.8945f;
	iLocal_2262[249] = 250;
	fLocal_1426[249] = 112134f;
	iLocal_4833[249] = joaat("minivan");
	Local_3511[250 /*3*/] = { -802.7859f, 5465.808f, 33.697f };
	fLocal_62[250] = 0.0022f;
	fLocal_403[250] = -0.0034f;
	fLocal_744[250] = -0.463f;
	fLocal_1085[250] = 0.8864f;
	iLocal_2262[250] = 251;
	fLocal_1426[250] = 112530f;
	iLocal_4833[250] = joaat("journey");
	Local_3511[253 /*3*/] = { -859.1169f, 5432.999f, 34.5357f };
	fLocal_62[253] = -0.0169f;
	fLocal_403[253] = 0.0056f;
	fLocal_744[253] = -0.5386f;
	fLocal_1085[253] = 0.8424f;
	iLocal_2262[253] = 254;
	fLocal_1426[253] = 113652f;
	iLocal_4833[253] = joaat("minivan");
	Local_4532[21 /*3*/] = { -860.6396f, 5415.557f, 34.4756f };
	fLocal_2137[21] = 0.0733f;
	fLocal_2163[21] = 0.047f;
	fLocal_2189[21] = 0.7841f;
	fLocal_2215[21] = -0.6145f;
	iLocal_5174[21] = joaat("emperor");
	Local_3511[255 /*3*/] = { -886.913f, 5421.822f, 35.2647f };
	fLocal_62[255] = -0.0193f;
	fLocal_403[255] = 0.0078f;
	fLocal_744[255] = -0.5541f;
	fLocal_1085[255] = 0.8322f;
	iLocal_2262[255] = 256;
	fLocal_1426[255] = 114312f;
	iLocal_4833[255] = joaat("emperor");
	Local_3511[256 /*3*/] = { -902.929f, 5422.261f, 36.246f };
	fLocal_62[256] = -0.0162f;
	fLocal_403[256] = 0.0127f;
	fLocal_744[256] = -0.6064f;
	fLocal_1085[256] = 0.7949f;
	iLocal_2262[256] = 257;
	fLocal_1426[256] = 114708f;
	iLocal_4833[256] = joaat("journey");
	Local_3511[257 /*3*/] = { -915.9521f, 5418.475f, 36.7077f };
	fLocal_62[257] = -0.0183f;
	fLocal_403[257] = 0.0146f;
	fLocal_744[257] = -0.6257f;
	fLocal_1085[257] = 0.7797f;
	iLocal_2262[257] = 258;
	fLocal_1426[257] = 114972f;
	iLocal_4833[257] = joaat("surfer");
	Local_3511[258 /*3*/] = { -928.0029f, 5414.97f, 37.9183f };
	fLocal_62[258] = -0.0186f;
	fLocal_403[258] = 0.0139f;
	fLocal_744[258] = -0.6015f;
	fLocal_1085[258] = 0.7985f;
	iLocal_2262[258] = 259;
	fLocal_1426[258] = 115236f;
	iLocal_4833[258] = joaat("mule");
	Local_3511[259 /*3*/] = { -933.9056f, 5421.649f, 37.2376f };
	fLocal_62[259] = 0.017f;
	fLocal_403[259] = 0.016f;
	fLocal_744[259] = 0.7839f;
	fLocal_1085[259] = 0.6205f;
	iLocal_2262[259] = 260;
	fLocal_1426[259] = 115236f;
	iLocal_4833[259] = joaat("emperor");
	Local_3511[261 /*3*/] = { -1004.6f, 5376.787f, 41.1807f };
	fLocal_62[261] = -0.0222f;
	fLocal_403[261] = 0.0058f;
	fLocal_744[261] = -0.4104f;
	fLocal_1085[261] = 0.9116f;
	iLocal_2262[261] = 262;
	fLocal_1426[261] = 117150f;
	iLocal_4833[261] = joaat("emperor");
	Local_3511[263 /*3*/] = { -1064.376f, 5337.089f, 44.8801f };
	fLocal_62[263] = 0.0202f;
	fLocal_403[263] = 0.0325f;
	fLocal_744[263] = 0.8517f;
	fLocal_1085[263] = 0.5226f;
	iLocal_2262[263] = 264;
	fLocal_1426[263] = 118800f;
	iLocal_4833[263] = joaat("emperor");
	Local_3511[264 /*3*/] = { -1033.554f, 5346.641f, 43.3626f };
	fLocal_62[264] = -0.0208f;
	fLocal_403[264] = 0.0066f;
	fLocal_744[264] = -0.3975f;
	fLocal_1085[264] = 0.9173f;
	iLocal_2262[264] = 265;
	fLocal_1426[264] = 119394f;
	iLocal_4833[264] = joaat("minivan");
	Local_3511[265 /*3*/] = { -1098.057f, 5324.034f, 47.8281f };
	fLocal_62[265] = 0.0294f;
	fLocal_403[265] = 0.0288f;
	fLocal_744[265] = 0.8094f;
	fLocal_1085[265] = 0.5858f;
	iLocal_2262[265] = 266;
	fLocal_1426[265] = 119592f;
	iLocal_4833[265] = joaat("emperor");
	Local_3511[268 /*3*/] = { -1146.144f, 5276.428f, 53.3106f };
	fLocal_62[268] = -0.0174f;
	fLocal_403[268] = 0.0065f;
	fLocal_744[268] = -0.3905f;
	fLocal_1085[268] = 0.9204f;
	iLocal_2262[268] = 269;
	fLocal_1426[268] = 121176f;
	iLocal_4833[268] = joaat("mule");
	Local_3511[269 /*3*/] = { -1167.208f, 5261.193f, 53.1992f };
	fLocal_62[269] = 0.0181f;
	fLocal_403[269] = -0.0049f;
	fLocal_744[269] = -0.4946f;
	fLocal_1085[269] = 0.8689f;
	iLocal_2262[269] = 270;
	fLocal_1426[269] = 121770f;
	iLocal_4833[269] = joaat("minivan");
	Local_3511[270 /*3*/] = { -1181.101f, 5255.342f, 52.4125f };
	fLocal_62[270] = 0.0222f;
	fLocal_403[270] = -0.0182f;
	fLocal_744[270] = -0.5681f;
	fLocal_1085[270] = 0.8225f;
	iLocal_2262[270] = 271;
	fLocal_1426[270] = 122166f;
	iLocal_4833[270] = joaat("journey");
	Local_3511[273 /*3*/] = { -1194.364f, 5265.022f, 51.7508f };
	fLocal_62[273] = -0.0139f;
	fLocal_403[273] = -0.0305f;
	fLocal_744[273] = 0.7712f;
	fLocal_1085[273] = 0.6357f;
	iLocal_2262[273] = 274;
	fLocal_1426[273] = 122628f;
	iLocal_4833[273] = joaat("minivan");
	Local_3511[274 /*3*/] = { -1231.947f, 5253.253f, 49.5905f };
	fLocal_62[274] = -0.004f;
	fLocal_403[274] = 0.0105f;
	fLocal_744[274] = 0.7549f;
	fLocal_1085[274] = -0.6557f;
	iLocal_2262[274] = 275;
	fLocal_1426[274] = 123222f;
	iLocal_4833[274] = joaat("emperor");
	Local_3511[275 /*3*/] = { -1240.953f, 5255.086f, 49.8296f };
	fLocal_62[275] = 0.0025f;
	fLocal_403[275] = 0.0004f;
	fLocal_744[275] = 0.7601f;
	fLocal_1085[275] = -0.6498f;
	iLocal_2262[275] = 276;
	fLocal_1426[275] = 123486f;
	iLocal_4833[275] = joaat("journey");
	Local_3511[276 /*3*/] = { -1243.113f, 5255.403f, 49.8544f };
	fLocal_62[276] = -0.0025f;
	fLocal_403[276] = 0.0006f;
	fLocal_744[276] = 0.7863f;
	fLocal_1085[276] = -0.6178f;
	iLocal_2262[276] = 277;
	fLocal_1426[276] = 124014f;
	iLocal_4833[276] = joaat("minivan");
	Local_3511[281 /*3*/] = { -1395.809f, 5080.688f, 61.3721f };
	fLocal_62[281] = -0.0031f;
	fLocal_403[281] = -0.0056f;
	fLocal_744[281] = -0.4942f;
	fLocal_1085[281] = 0.8693f;
	iLocal_2262[281] = 282;
	fLocal_1426[281] = 129228f;
	iLocal_4833[281] = joaat("mule");
	Local_3511[282 /*3*/] = { -1344.086f, 5116.772f, 60.9809f };
	fLocal_62[282] = 0.0056f;
	fLocal_403[282] = -0.0028f;
	fLocal_744[282] = -0.4235f;
	fLocal_1085[282] = 0.9059f;
	iLocal_2262[282] = 283;
	fLocal_1426[282] = 129426f;
	iLocal_4833[282] = joaat("emperor");
	Local_3511[283 /*3*/] = { -1410.303f, 5072.49f, 60.5543f };
	fLocal_62[283] = -0.0072f;
	fLocal_403[283] = -0.0075f;
	fLocal_744[283] = -0.4753f;
	fLocal_1085[283] = 0.8798f;
	iLocal_2262[283] = 284;
	fLocal_1426[283] = 131208f;
	iLocal_4833[283] = joaat("emperor");
	Local_3511[285 /*3*/] = { -1465.665f, 5046.791f, 61.7431f };
	fLocal_62[285] = 0.0046f;
	fLocal_403[285] = 0.01f;
	fLocal_744[285] = 0.8994f;
	fLocal_1085[285] = 0.4369f;
	iLocal_2262[285] = 286;
	fLocal_1426[285] = 131934f;
	iLocal_4833[285] = joaat("minivan");
	Local_3511[287 /*3*/] = { -1526.055f, 4986.172f, 62.3233f };
	fLocal_62[287] = 0.001f;
	fLocal_403[287] = -0.0075f;
	fLocal_744[287] = 0.9346f;
	fLocal_1085[287] = 0.3556f;
	iLocal_2262[287] = 288;
	fLocal_1426[287] = 133320f;
	iLocal_4833[287] = joaat("journey");
	Local_3511[289 /*3*/] = { -1522.067f, 4982.613f, 61.9106f };
	fLocal_62[289] = 0.0017f;
	fLocal_403[289] = -0.0088f;
	fLocal_744[289] = 0.9479f;
	fLocal_1085[289] = 0.3184f;
	iLocal_2262[289] = 290;
	fLocal_1426[289] = 133716f;
	iLocal_4833[289] = joaat("emperor");
	Local_4532[22 /*3*/] = { -1545.165f, 4929.5f, 61.3231f };
	fLocal_2137[22] = 0f;
	fLocal_2163[22] = 0.0255f;
	fLocal_2189[22] = -0.4983f;
	fLocal_2215[22] = 0.8666f;
	iLocal_5174[22] = joaat("minivan");
	Local_4532[23 /*3*/] = { -1533.836f, 4941.946f, 61.2712f };
	fLocal_2137[23] = 0.0113f;
	fLocal_2163[23] = -0.0309f;
	fLocal_2189[23] = 0.9258f;
	fLocal_2215[23] = -0.3765f;
	iLocal_5174[23] = joaat("emperor");
	Local_3511[294 /*3*/] = { -1586.323f, 4902.927f, 61.0933f };
	fLocal_62[294] = -0.0001f;
	fLocal_403[294] = -0.0062f;
	fLocal_744[294] = -0.2908f;
	fLocal_1085[294] = 0.9568f;
	iLocal_2262[294] = 295;
	fLocal_1426[294] = 135762f;
	iLocal_4833[294] = joaat("journey");
	Local_3511[296 /*3*/] = { -1594.733f, 4892.088f, 60.943f };
	fLocal_62[296] = 0.0014f;
	fLocal_403[296] = -0.0052f;
	fLocal_744[296] = -0.3516f;
	fLocal_1085[296] = 0.9361f;
	iLocal_2262[296] = 297;
	fLocal_1426[296] = 136158f;
	iLocal_4833[296] = joaat("emperor");
	Local_3511[298 /*3*/] = { -1623.186f, 4865.924f, 60.3676f };
	fLocal_62[298] = 0.0022f;
	fLocal_403[298] = -0.0013f;
	fLocal_744[298] = -0.3832f;
	fLocal_1085[298] = 0.9236f;
	iLocal_2262[298] = 299;
	fLocal_1426[298] = 137082f;
	iLocal_4833[298] = joaat("emperor");
	Local_3511[299 /*3*/] = { -1624.285f, 4863.733f, 60.733f };
	fLocal_62[299] = 0.0023f;
	fLocal_403[299] = -0.001f;
	fLocal_744[299] = -0.4036f;
	fLocal_1085[299] = 0.9149f;
	iLocal_2262[299] = 300;
	fLocal_1426[299] = 137412f;
	iLocal_4833[299] = joaat("journey");
	Local_3511[301 /*3*/] = { -1657.753f, 4832.572f, 60.5535f };
	fLocal_62[301] = 0.0013f;
	fLocal_403[301] = -0.0017f;
	fLocal_744[301] = -0.4077f;
	fLocal_1085[301] = 0.9131f;
	iLocal_2262[301] = 302;
	fLocal_1426[301] = 138336f;
	iLocal_4833[301] = joaat("minivan");
	Local_3511[304 /*3*/] = { -1673.632f, 4818.702f, 60.5406f };
	fLocal_62[304] = 0.0021f;
	fLocal_403[304] = -0.0057f;
	fLocal_744[304] = -0.4375f;
	fLocal_1085[304] = 0.8992f;
	iLocal_2262[304] = 305;
	fLocal_1426[304] = 139986f;
	iLocal_4833[304] = joaat("minivan");
	Local_3511[305 /*3*/] = { -1719.698f, 4782.985f, 57.8986f };
	fLocal_62[305] = 0.0181f;
	fLocal_403[305] = -0.0128f;
	fLocal_744[305] = -0.4471f;
	fLocal_1085[305] = 0.8942f;
	iLocal_2262[305] = 306;
	fLocal_1426[305] = 140184f;
	iLocal_4833[305] = joaat("emperor");
	Local_3511[306 /*3*/] = { -1729.249f, 4775.835f, 57.803f };
	fLocal_62[306] = 0.0131f;
	fLocal_403[306] = -0.0119f;
	fLocal_744[306] = -0.4648f;
	fLocal_1085[306] = 0.8853f;
	iLocal_2262[306] = 307;
	fLocal_1426[306] = 140778f;
	iLocal_4833[306] = joaat("minivan");
	Local_3511[308 /*3*/] = { -1761.872f, 4747.967f, 56.8266f };
	fLocal_62[308] = -0.0002f;
	fLocal_403[308] = -0.0081f;
	fLocal_744[308] = -0.4103f;
	fLocal_1085[308] = 0.9119f;
	iLocal_2262[308] = 309;
	fLocal_1426[308] = 141306f;
	iLocal_4833[308] = joaat("emperor");
	Local_3511[309 /*3*/] = { -1771.112f, 4740.036f, 56.8407f };
	fLocal_62[309] = -0.0029f;
	fLocal_403[309] = -0.0035f;
	fLocal_744[309] = -0.4186f;
	fLocal_1085[309] = 0.9081f;
	iLocal_2262[309] = 310;
	fLocal_1426[309] = 141570f;
	iLocal_4833[309] = joaat("minivan");
	Local_3511[310 /*3*/] = { -1771.182f, 4739.965f, 56.7243f };
	fLocal_62[310] = -0.0029f;
	fLocal_403[310] = -0.0037f;
	fLocal_744[310] = -0.4187f;
	fLocal_1085[310] = 0.9081f;
	iLocal_2262[310] = 311;
	fLocal_1426[310] = 141834f;
	iLocal_4833[310] = joaat("emperor");
	Local_3511[313 /*3*/] = { -1815.708f, 4695.482f, 56.7461f };
	fLocal_62[313] = -0.0019f;
	fLocal_403[313] = -0.0041f;
	fLocal_744[313] = -0.3735f;
	fLocal_1085[313] = 0.9276f;
	iLocal_2262[313] = 314;
	fLocal_1426[313] = 142956f;
	iLocal_4833[313] = joaat("emperor");
	Local_3511[318 /*3*/] = { -1862.825f, 4649.134f, 56.8577f };
	fLocal_62[318] = -0.0019f;
	fLocal_403[318] = -0.0041f;
	fLocal_744[318] = -0.3536f;
	fLocal_1085[318] = 0.9354f;
	iLocal_2262[318] = 319;
	fLocal_1426[318] = 144540f;
	iLocal_4833[318] = joaat("minivan");
	Local_3511[319 /*3*/] = { -1864.941f, 4646.207f, 56.5935f };
	fLocal_62[319] = -0.0015f;
	fLocal_403[319] = -0.0043f;
	fLocal_744[319] = -0.3406f;
	fLocal_1085[319] = 0.9402f;
	iLocal_2262[319] = 320;
	fLocal_1426[319] = 144738f;
	iLocal_4833[319] = joaat("minivan");
	Local_3511[323 /*3*/] = { -1909.155f, 4602.009f, 56.827f };
	fLocal_62[323] = -0.0017f;
	fLocal_403[323] = -0.0009f;
	fLocal_744[323] = -0.3819f;
	fLocal_1085[323] = 0.9242f;
	iLocal_2262[323] = 324;
	fLocal_1426[323] = 146190f;
	iLocal_4833[323] = joaat("journey");
	Local_3511[329 /*3*/] = { -1984.52f, 4527.219f, 56.8599f };
	fLocal_62[329] = -0.0017f;
	fLocal_403[329] = -0.0037f;
	fLocal_744[329] = -0.3489f;
	fLocal_1085[329] = 0.9372f;
	iLocal_2262[329] = 330;
	fLocal_1426[329] = 149226f;
	iLocal_4833[329] = joaat("minivan");
	Local_3511[333 /*3*/] = { -2026.841f, 4484.115f, 56.8037f };
	fLocal_62[333] = -0.0035f;
	fLocal_403[333] = -0.0029f;
	fLocal_744[333] = -0.4273f;
	fLocal_1085[333] = 0.9041f;
	iLocal_2262[333] = 334;
	fLocal_1426[333] = 151800f;
	iLocal_4833[333] = joaat("minivan");
	Local_4608[3 /*3*/] = { -526.2304f, 5788.813f, 34.7703f };
	fLocal_1771[3] = 0.0075f;
	fLocal_1832[3] = 0.0489f;
	fLocal_1893[3] = 0.9749f;
	fLocal_1954[3] = 0.2171f;
	iLocal_3285[3] = 403;
	fLocal_2015[3] = 102000f;
	fLocal_2076[3] = 1f;
	iLocal_5200[3] = joaat("hexer");
	Local_4608[4 /*3*/] = { -523.5488f, 5790.636f, 34.7089f };
	fLocal_1771[4] = 0.0081f;
	fLocal_1832[4] = 0.0484f;
	fLocal_1893[4] = 0.9763f;
	fLocal_1954[4] = 0.2109f;
	iLocal_3285[4] = 404;
	fLocal_2015[4] = 102000f;
	fLocal_2076[4] = 1f;
	iLocal_5200[4] = joaat("hexer");
	Local_4608[5 /*3*/] = { -527.1961f, 5790.407f, 34.7552f };
	fLocal_1771[5] = 0.0115f;
	fLocal_1832[5] = 0.0382f;
	fLocal_1893[5] = 0.9777f;
	fLocal_1954[5] = 0.206f;
	iLocal_3285[5] = 405;
	fLocal_2015[5] = 102000f;
	fLocal_2076[5] = 1f;
	iLocal_5200[5] = joaat("hexer");
}

void func_514(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x652F9
{
	struct<3> Var0;
	
	StringCopy(&cLocal_4816, sParam0, 64);
	iLocal_38 = 1;
	iLocal_43 = 0;
	iLocal_3494 = 0;
	iLocal_3495 = 0;
	iLocal_3496 = 0;
	iLocal_3497 = iParam1;
	iLocal_3498 = 0;
	iLocal_3499 = 0;
	iLocal_3500 = 0;
	iLocal_3504 = 0;
	iLocal_3507 = 0;
	iLocal_3505 = -1;
	iLocal_3506 = -1;
	iLocal_3508 = 0;
	iLocal_3509 = 0;
	fLocal_2257 = 0f;
	fLocal_2258 = 0f;
	fLocal_2243 = 0f;
	iLocal_44 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_4792.x = (Var0.x - 100f);
		Local_4792.f_1 = (Var0.f_1 - 100f);
		Local_4792.f_2 = (Var0.f_2 - 100f);
		Local_4795.x = (Var0.x + 100f);
		Local_4795.f_1 = (Var0.f_1 + 100f);
		Local_4795.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_4792, Local_4795, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_4832);
	GlobalFunc_2512();
	if (bParam3)
	{
		GlobalFunc_9191(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_CREATE_RANDOM_COPS(0);
	}
	func_515();
}

void func_515()//Position - 0x6541B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 340)
	{
		iLocal_5264[iVar0] = 0;
		Local_3511[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_62[iVar0] = 0f;
		fLocal_403[iVar0] = 0f;
		fLocal_744[iVar0] = 0f;
		fLocal_1085[iVar0] = 0f;
		iLocal_2262[iVar0] = 0;
		fLocal_1426[iVar0] = 0f;
		iLocal_2603[iVar0] = 0;
		iLocal_4833[iVar0] = 0;
		iLocal_2944[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_5605[iVar0] = 0;
		iVar0++;
	}
	iLocal_3494 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iLocal_5618[iVar0] = 0;
		Local_4532[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_2137[iVar0] = 0f;
		fLocal_2163[iVar0] = 0f;
		fLocal_2189[iVar0] = 0f;
		fLocal_2215[iVar0] = 0f;
		iLocal_3468[iVar0] = 0;
		iLocal_5174[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_5705[iVar0] = 0;
		iVar0++;
	}
	iLocal_3496 = 0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		iLocal_5644[iVar0] = 0;
		Local_4608[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1771[iVar0] = 0f;
		fLocal_1832[iVar0] = 0f;
		fLocal_1893[iVar0] = 0f;
		fLocal_1954[iVar0] = 0f;
		iLocal_3285[iVar0] = 0;
		fLocal_2015[iVar0] = 0f;
		iLocal_3346[iVar0] = 0;
		iLocal_5200[iVar0] = 0;
		iLocal_3407[iVar0] = 0;
		iVar0++;
	}
	iLocal_3495 = 0;
	iLocal_3498 = 0;
	iLocal_3501 = 0;
	iLocal_3502 = 0;
	iLocal_3503 = 0;
}






void func_521(bool bParam0, bool bParam1)//Position - 0x6571E
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_4816))
	{
		iLocal_44 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_4832);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_60)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_534());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_530();
			func_529();
			func_526();
		}
		else
		{
			func_522();
			func_515();
		}
		if (bParam1)
		{
			GlobalFunc_9191(0);
		}
	}
}

void func_522()//Position - 0x657DA
{
	func_525();
	func_524();
	func_523();
}

void func_523()//Position - 0x657EE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5644[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5644[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5644[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_5644[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_5644[iVar0]));
			}
		}
		iLocal_3346[iVar0] = 0;
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_3285[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_3285[iVar0], &cLocal_4816);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!iLocal_5200[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5200[iVar0]);
		}
		iVar0++;
	}
}

void func_524()//Position - 0x658E4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5618[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_5618[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_5618[iVar0]));
			}
		}
		iLocal_3468[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_5174[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5174[iVar0]);
		}
		iVar0++;
	}
	iLocal_3499 = 0;
	iLocal_3496 = 0;
}

void func_525()//Position - 0x65961
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 340)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5264[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5264[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5264[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5264[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5264[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_5264[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_5264[iVar0]));
			}
		}
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_2262[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_2262[iVar0], &cLocal_4816);
			}
		}
		iLocal_2603[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 340)
	{
		if (!iLocal_4833[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_4833[iVar0]);
		}
		iVar0++;
	}
	iLocal_3498 = 0;
	iLocal_3494 = 0;
}

void func_526()//Position - 0x65A61
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5644[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5644[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5644[iVar0]);
				}
			}
			func_528(iLocal_5644[iVar0]);
			GlobalFunc_2210(iLocal_5644[iVar0]);
		}
		iLocal_3346[iVar0] = 0;
		iLocal_3407[iVar0] = 0;
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_3285[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_3285[iVar0], &cLocal_4816);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!iLocal_5200[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5200[iVar0]);
		}
		iVar0++;
	}
	iLocal_3500 = 0;
}


void func_528(int iParam0)//Position - 0x65B45
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
				if (bLocal_61)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_529()//Position - 0x65BDE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5618[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_5618[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_5618[iVar0], 1, 0);
			}
			GlobalFunc_2210(iLocal_5618[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_5174[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5174[iVar0]);
		}
		iVar0++;
	}
	iLocal_3499 = 0;
	iLocal_3496 = 0;
}

void func_530()//Position - 0x65C61
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 340)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5264[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_5264[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_5264[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5264[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5264[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5264[iVar0]);
				}
			}
			func_528(iLocal_5264[iVar0]);
			GlobalFunc_2210(iLocal_5264[iVar0]);
		}
		iLocal_2603[iVar0] = 0;
		iLocal_2944[iVar0] = 0;
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_2262[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_2262[iVar0], &cLocal_4816);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 340)
	{
		if (!iLocal_4833[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_4833[iVar0]);
		}
		iVar0++;
	}
	iLocal_3498 = 0;
	iLocal_3494 = 0;
}




int func_534()//Position - 0x65D77
{
	if (iLocal_5261 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_5261;
}




void func_538()//Position - 0x65E96
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (func_316())
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(1, 0);
		MISC::ENABLE_DISPATCH_SERVICE(2, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		MISC::ENABLE_DISPATCH_SERVICE(4, 0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5847))
		{
			func_298(&iLocal_5847, joaat("policeb"), Local_5819, 147.9465f, -1, 0);
			GlobalFunc_534(iLocal_5847, 2);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5847, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5848))
		{
			func_298(&iLocal_5848, joaat("policeb"), Local_5822, 135.0532f, -1, 0);
			GlobalFunc_534(iLocal_5848, 3);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5848, 1);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_5847, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_5848, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeb"));
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6281[2]))
		{
			func_548(&(uLocal_6281[2]), 2, Local_8857, fLocal_8860, 0);
			if (!PED::IS_PED_WEARING_HELMET(uLocal_6281[2]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(uLocal_6281[2], 5, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_6281[2], 0);
			}
			while (!func_273(uLocal_6281[2], 12, 3, 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				func_312(0);
			}
			GlobalFunc_5128(2);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6281[2], iLocal_5872);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_6281[2], 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_6281[2], 32, 0);
		}
		if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[2], iLocal_5847, 0))
		{
			PED::SET_PED_INTO_VEHICLE(uLocal_6281[2], iLocal_5847, -1);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(2));
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6281[0]))
		{
			func_548(&(uLocal_6281[0]), 0, Local_8861, fLocal_8864, 0);
			while (!func_273(uLocal_6281[0], 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				func_312(0);
			}
			GlobalFunc_5128(0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6281[0], iLocal_5872);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_6281[0], 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_6281[0], 32, 0);
		}
		if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[0], iLocal_5848, 0))
		{
			PED::SET_PED_INTO_VEHICLE(uLocal_6281[0], iLocal_5848, -1);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
		GlobalFunc_173(&uLocal_5929, 1, uLocal_6281[0], "MICHAEL", 0, 1);
		GlobalFunc_173(&uLocal_5929, 2, uLocal_6281[2], "TREVOR", 0, 1);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_5844, 1000f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_5844, 1000f);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_5845, 1000f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_5845, 1000f);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_5846, 1000f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_5846, 1000f);
		iLocal_5794 = 0;
		CUTSCENE::REQUEST_CUTSCENE("Car_steal_3_mcs_2", 4);
		STREAMING::REQUEST_ANIM_DICT(sLocal_8845);
		func_20(3);
		if (func_315())
		{
			func_20(4);
			MISC::CLEAR_AREA(2716.992f, 4787.348f, 43.5334f, 1000f, 1, 0, 0, 0);
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, -1);
			GlobalFunc_2510(PLAYER::PLAYER_PED_ID(), 2716.992f, 4787.348f, 43.5334f, 11.8873f, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5844, 1, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_11086("Michael", func_309(0), 0, 2);
			GlobalFunc_11086("Trevor", func_309(2), 0, 2);
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_5859))
			{
				HUD::SET_BLIP_COORDS(iLocal_5859, ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1));
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_5860))
			{
				HUD::SET_BLIP_COORDS(iLocal_5860, ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1));
			}
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_5859))
		{
			iLocal_5859 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1));
			HUD::SET_BLIP_COLOUR(iLocal_5859, 3);
			HUD::SET_BLIP_PRIORITY(iLocal_5859, 9);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_5859, "S3_BLIPVEH");
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1) };
		Var3 = { HUD::GET_BLIP_COORDS(iLocal_5859) };
		fVar6 = (1f + GlobalFunc_253((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) / 4f), 0f, 17.5f));
		Var3.x = (Var3.x + ((((Var0.x - Var3.x) / fVar6) * 15f) * SYSTEM::TIMESTEP()));
		Var3.f_1 = (Var3.f_1 + ((((Var0.f_1 - Var3.f_1) / fVar6) * 15f) * SYSTEM::TIMESTEP()));
		Var3.f_2 = (Var3.f_2 + ((((Var0.f_2 - Var3.f_2) / fVar6) * 15f) * SYSTEM::TIMESTEP()));
		HUD::SET_BLIP_COORDS(iLocal_5859, Var3);
		if (!HUD::DOES_BLIP_EXIST(iLocal_5860))
		{
			iLocal_5860 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1));
			HUD::SET_BLIP_COLOUR(iLocal_5860, 3);
			HUD::SET_BLIP_PRIORITY(iLocal_5860, 9);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_5860, "S3_BLIPVEH");
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1) };
		Var3 = { HUD::GET_BLIP_COORDS(iLocal_5860) };
		fVar6 = (1f + GlobalFunc_253((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) / 4f), 0f, 17.5f));
		Var3.x = (Var3.x + ((((Var0.x - Var3.x) / fVar6) * 15f) * SYSTEM::TIMESTEP()));
		Var3.f_1 = (Var3.f_1 + ((((Var0.f_1 - Var3.f_1) / fVar6) * 15f) * SYSTEM::TIMESTEP()));
		Var3.f_2 = (Var3.f_2 + ((((Var0.f_2 - Var3.f_2) / fVar6) * 15f) * SYSTEM::TIMESTEP()));
		HUD::SET_BLIP_COORDS(iLocal_5860, Var3);
		switch (iLocal_5732)
		{
			case 0:
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				if (CUTSCENE::HAS_CUTSCENE_LOADED() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, 0))
				{
					if (CAM::DOES_CAM_EXIST(uLocal_5865))
					{
						if (CAM::IS_CAM_ACTIVE(iLocal_5865))
						{
							CAM::SET_CAM_ACTIVE(iLocal_5865, 0);
							CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						}
					}
					GlobalFunc_8316(1, 1, 1, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5845, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5846, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_5844, 1);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_5844, 0);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_5845, 0);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_5846, 0);
					GlobalFunc_2241(&iLocal_8873);
					iLocal_8873 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_donut_02"), Local_8874, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_8873))
					{
						if (ENTITY::DOES_ENTITY_EXIST(func_309(0)))
						{
							if (!ENTITY::IS_ENTITY_DEAD(func_309(0)))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_8873, func_309(0), PED::GET_PED_BONE_INDEX(func_309(0), 28422), Local_8877, Local_8880, 0, 0, 0, 0, 2, 1);
							}
						}
					}
					GlobalFunc_2241(&iLocal_8883);
					iLocal_8883 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_donut_02b"), Local_8884, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_8883))
					{
						if (ENTITY::DOES_ENTITY_EXIST(func_309(2)))
						{
							if (!ENTITY::IS_ENTITY_DEAD(func_309(2)))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_8883, func_309(2), PED::GET_PED_BONE_INDEX(func_309(2), 28422), Local_8887, Local_8890, 0, 0, 0, 0, 2, 1);
							}
						}
					}
					GlobalFunc_2241(&iLocal_8893);
					iLocal_8893 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_player_phone_01"), Local_8894, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_8893))
					{
						if (ENTITY::DOES_ENTITY_EXIST(func_309(0)))
						{
							if (!ENTITY::IS_ENTITY_DEAD(func_309(0)))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_8893, func_309(0), PED::GET_PED_BONE_INDEX(func_309(0), 60309), Local_8897, Local_8900, 0, 0, 0, 0, 2, 1);
							}
						}
					}
					func_300(PLAYER::PLAYER_ID(), 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 1);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_309(1)) && !ENTITY::IS_ENTITY_DEAD(iLocal_5844))
					{
						TASK::CLEAR_PED_TASKS(func_309(1));
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_5844, ENTITY::GET_ENTITY_SPEED(iLocal_5844));
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5844, 1, 1);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_309(1), iLocal_5844, 2602.3f, 5299.4f, 44.4f, 200f, 0, 0, 786599, 5f, 2f);
						PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
						GlobalFunc_173(&uLocal_5929, 1, func_309(0), "MICHAEL", 0, 1);
						GlobalFunc_173(&uLocal_5929, 3, func_309(1), "FRANKLIN", 0, 1);
						GlobalFunc_10638(&uLocal_5929, 0, "CST3AUD", "CST3_2secs", 8, 1, 0, 0, 0);
					}
					iLocal_6360 = 1;
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					STREAMING::PREFETCH_SRL(sLocal_8846);
					STREAMING::_0xBEB2D9A1D9A8F55A(3, 3, 3, 3);
					STREAMING::_0xF8155A7F03DDFC8E(2);
					func_301();
				}
				break;
			
			case 1:
				VEHICLE::REQUEST_VEHICLE_RECORDING(600, "ALuberSetup");
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("policeb"), 15);
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5844, 2751.026f, 4623.216f, 33.91202f, 2621.143f, 5207.859f, 63.72282f, 40f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5844, 2624.585f, 5179.363f, 33.77198f, 2512.106f, 5542.451f, 63.77262f, 40f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_5844, 2742.848f, 4658.284f, 33.53484f, 2804.212f, 4427.761f, 66.24969f, 40f, 0, 1, 0))
				{
					iLocal_6097 = 15;
					func_1();
				}
				if ((((SYSTEM::TIMERA() > 5000 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(600, "ALuberSetup")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("policeb"))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_309(0))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_309(2)))
				{
					func_397(2, "stageChase", 0, 0, func_309(1), 1);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_FRANKLIN_CALLS_MICHAEL"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_1_FRANKLIN_CALLS_MICHAEL");
					}
					if (!iLocal_5791)
					{
						RECORDING::_0x48621C9FCA3EBD28(4);
						iLocal_5791 = 1;
					}
					if (!func_742("SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER"))
					{
						VEHICLE::_SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER(0f);
						func_739("SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER", 1);
					}
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						func_547(&uLocal_5911, func_309(0), 0, 2f, (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - SYSTEM::ROUND((3.27493f * 1000f))), (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - SYSTEM::ROUND((3.27493f * 1000f))), ((CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - SYSTEM::ROUND((3.27493f * 1000f))) - 300), ((CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - SYSTEM::ROUND((3.27493f * 1000f))) / 3) * 2, 0.2f);
					}
					func_301();
				}
				break;
			
			case 2:
				AUDIO::LOAD_STREAM("CAR_STEAL_1_PASSBY", "CAR_STEAL_1_SOUNDSET");
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (!func_742("PushInMichael"))
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((3.27493f * 1000f)))
							{
								CAM::STOP_CUTSCENE_CAM_SHAKING();
								if (GlobalFunc_6815(&uLocal_5911, 0, 1, 1, 0, 1, 0))
								{
									func_739("PushInMichael", 1);
								}
							}
						}
					}
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (!func_742("HereTheyCome"))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((21.28532f * 1000f)))
						{
							func_20(5);
							func_543(6);
							func_739("HereTheyCome", 1);
						}
					}
				}
				if (func_541(&uLocal_6361, &Local_7602))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[2], iLocal_5847, 0))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_6281[2], iLocal_5847, -1);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_6281[2], 0, 0);
					if (!PED::IS_PED_WEARING_HELMET(uLocal_6281[2]))
					{
						PED::SET_PED_HELMET_PROP_INDEX(uLocal_6281[2], 5, 1);
						PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_6281[2], 0);
					}
					PED::GIVE_PED_HELMET(uLocal_6281[2], 1, 16384, -1);
					if (!PED::IS_PED_IN_VEHICLE(func_309(0), iLocal_5848, 0))
					{
						PED::SET_PED_INTO_VEHICLE(func_309(0), iLocal_5848, -1);
					}
					if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 4, 1);
						PED::SET_PED_HELMET_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0);
					}
					PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1, 16384, -1);
					func_273(func_309(0), 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					GlobalFunc_5128(0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5847, 1, 1);
					if (func_647(500, sLocal_5833))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5847, 500, sLocal_5833, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_5847, 0f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_5847, 0);
					}
					GlobalFunc_2239(iLocal_5848, 2686.863f, 5131.928f, 43.8426f, 150.224f);
					ENTITY::SET_ENTITY_ROTATION(iLocal_5848, 0.541f, -9.993f, 150.224f, 2, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_309(0), 1, 0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5848, 1, 1);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_5848);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						GlobalFunc_5810(&uLocal_5911);
					}
					GlobalFunc_8316(0, 1, 1, 0);
					STREAMING::REMOVE_ANIM_DICT(sLocal_8845);
					func_30();
				}
				PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
				break;
			}
	}
	if (func_29())
	{
		if (func_742("SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER"))
		{
			VEHICLE::_SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER(1f);
			func_739("SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER", 0);
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_312(0);
		}
		if (iLocal_5791)
		{
			RECORDING::_0x81CBAE94390F9F89();
			iLocal_5791 = 0;
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_MAIN"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_MAIN");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_FRANKLIN_CALLS_MICHAEL"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_FRANKLIN_CALLS_MICHAEL");
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_309(0)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_309(0)))
			{
				PED::SET_PED_CONFIG_FLAG(func_309(0), 243, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_309(2)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_309(2)))
			{
				PED::SET_PED_CONFIG_FLAG(func_309(2), 243, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_309(1)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_309(1)))
			{
				PED::SET_PED_CONFIG_FLAG(func_309(1), 243, 0);
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_player_phone_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_donut_02"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_donut_02b"));
		ENTITY::SET_ENTITY_VISIBLE(iLocal_5844, 1);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_5845, 1);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_5846, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_5847, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_5848, 0);
		func_323(&iLocal_5859);
		func_323(&iLocal_5860);
		GlobalFunc_2241(&iLocal_8893);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(56.0588f, 4597.978f, -1928.376f) - Vector(1000f, 1000f, 1000f), Vector(56.0588f, 4597.978f, -1928.376f) + Vector(1000f, 1000f, 1000f), 1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
		iLocal_6096++;
	}
}



int func_541(var uParam0, var uParam1)//Position - 0x66C90
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	Var2 = { 2683.8f, 5131.16f, 43.901f };
	Var5 = { 0f, 0f, -4.68f };
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	GRAPHICS::_0xE3E2C1B4C59DBC77(6);
	switch (iLocal_6360)
	{
		case 1:
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
			CAM::DESTROY_ALL_CAMS(0);
			func_542(uParam0, &iLocal_5844, &iLocal_5848);
			GlobalFunc_7718(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			MISC::CLEAR_AREA(2716.992f, 4787.348f, 43.5334f, 1000f, 1, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_5844))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5844, 600, "ALuberSetup", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_5844, fLocal_8905);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_5844, 1);
				}
			}
			STREAMING::BEGIN_SRL();
			fLocal_8847 = -9999f;
			GlobalFunc_4937(1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					MISC::CLEAR_BIT(&Global_2263, 27);
				}
			}
			iLocal_8909 = 0;
			iLocal_8910 = 0;
			iLocal_8915 = 0;
			iLocal_8916 = 0;
			iLocal_8904 = 0;
			iLocal_6360 = 2;
			break;
		
		case 2:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			fLocal_8847 = (fLocal_8847 + (MISC::GET_FRAME_TIME() * 1000f));
			if (fLocal_8847 < 0f)
			{
				fLocal_8847 = 0f;
			}
			STREAMING::SET_SRL_TIME(fLocal_8847);
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				iVar0 = func_724(uParam0);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
				if (iLocal_8909 == 0)
				{
					if (fVar1 >= fLocal_8917)
					{
						iLocal_8906 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_8906, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_8909 = 1;
					}
				}
				if (iLocal_8910 == 0)
				{
					if (fVar1 >= fLocal_8918)
					{
						AUDIO::STOP_SOUND(iLocal_8906);
						iLocal_8910 = 1;
					}
				}
				if (iLocal_8911 == 0)
				{
					if (fVar1 >= fLocal_8919)
					{
						iLocal_8907 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_8907, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_8911 = 1;
					}
				}
				if (iLocal_8912 == 0)
				{
					if (fVar1 >= fLocal_8920)
					{
						AUDIO::STOP_SOUND(iLocal_8907);
						iLocal_8912 = 1;
					}
				}
				if (!iLocal_8915)
				{
					if (fVar1 >= fLocal_8913)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortFranklinIn", 0, 0);
						iLocal_8915 = 1;
					}
				}
				if (!iLocal_8916)
				{
					if (fVar1 >= fLocal_8914)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelMid", 0, 0);
						iLocal_8916 = 1;
					}
				}
				if (!iLocal_8904)
				{
					if (iVar0 > 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(func_309(0)) && !ENTITY::IS_ENTITY_DEAD(func_309(2)))
						{
							uLocal_8849 = PED::CREATE_SYNCHRONIZED_SCENE(Var2, Var5, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(func_309(0), uLocal_8849, sLocal_8843, "byBike_idle_Mic", 1000f, -1000f, 4, 0, 1000f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(func_309(2), uLocal_8849, sLocal_8843, "byBike_idle_Trev", 1000f, -1000f, 4, 0, 1000f, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_8849, 1);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_5847))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_5847))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_5847, Local_5819, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(iLocal_5847, 147.9465f);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5847);
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_5847);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_5848))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_5848))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_5848, Local_5822, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(iLocal_5848, 135.0532f);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5848);
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_5848);
								}
							}
						}
						iLocal_8904 = 1;
					}
				}
				if (fVar1 >= 1f)
				{
					STREAMING::END_SRL();
					iLocal_6360 = 3;
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
		
		case 3:
			if (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
			}
			AUDIO::STOP_SOUND(iLocal_8908);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_MAIN"))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_MAIN");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_FRANKLIN_CALLS_MICHAEL"))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_1_FRANKLIN_CALLS_MICHAEL");
			}
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_5847, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_5848, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_309(2), "Trevor", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_309(0), "Michael", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5847, "Trevors_police_bike", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5848, "Michaels_Police_bike", 0, 0, 0);
			GlobalFunc_8316(1, 1, 1, 0);
			if (GlobalFunc_8315() != 0)
			{
				GlobalFunc_9134(&uLocal_6281, 0);
				func_802(&uLocal_6281, 1, 1, 1);
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_6281[1]);
			}
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
			CUTSCENE::START_CUTSCENE(0);
			func_785();
			GlobalFunc_4937(0, 0);
			iLocal_6360 = 4;
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::DOES_CAM_EXIST(uParam0->f_1))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_8849))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(uLocal_8849);
					}
					MISC::SET_TIME_SCALE(1f);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::DESTROY_CAM(uParam0->f_1, 0);
					VEHICLE::REMOVE_VEHICLE_RECORDING(600, "ALuberSetup");
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_8893))
					{
						ENTITY::DETACH_ENTITY(iLocal_8893, 1, 1);
						GlobalFunc_2241(&iLocal_8893);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_8873))
					{
						ENTITY::DETACH_ENTITY(iLocal_8873, 1, 1);
						GlobalFunc_2241(&iLocal_8873);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_8883))
					{
						ENTITY::DETACH_ENTITY(iLocal_8883, 1, 1);
						GlobalFunc_2241(&iLocal_8883);
					}
				}
				iLocal_6360 = 5;
			}
			break;
		
		case 5:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				return 0;
			}
			else
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) != 4)
				{
					func_512(uParam1, &iLocal_5848);
					GlobalFunc_7718(uParam1);
					CAM::SET_CAM_ACTIVE(uParam1->f_1, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				}
				GlobalFunc_2241(&iLocal_8873);
				iLocal_8873 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_donut_02b"), 2683.878f, 5130.149f, 43.85238f, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_8873))
				{
					OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_8873);
				}
				GlobalFunc_2241(&iLocal_8883);
				iLocal_8883 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_donut_02b"), 2683.29f, 5128.592f, 43.85796f, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_8883))
				{
					OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_8883);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_6360 = 0;
				return 1;
			}
		
		case 6:
			if (GlobalFunc_8315() != 0)
			{
				GlobalFunc_9134(&uLocal_6281, 0);
				func_802(&uLocal_6281, 1, 0, 0);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_6360 = 7;
			break;
		
		case 7:
			iVar0 = func_724(uParam1);
			if (SYSTEM::TIMERA() > iLocal_8856)
			{
				iLocal_6360 = 8;
			}
			break;
		
		case 8:
			if (CAM::IS_CAM_ACTIVE(uParam1->f_1))
			{
				iVar0 = func_724(uParam1);
				SYSTEM::SETTIMERA(0);
				iLocal_6360 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_542(var uParam0, int iParam1, int iParam2)//Position - 0x672AE
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -2.3643f, -0.5889f, 0.4792f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0.0183f, 0.0447f, 0.3025f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 40f;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 2;
		uParam0->f_10[0 /*57*/].f_23 = 1f;
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
		uParam0->f_10[1 /*57*/].f_5 = 2900;
		uParam0->f_10[1 /*57*/].f_6 = { -1.9817f, -0.5034f, 0.4696f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 0.0203f, 0.0344f, 0.2803f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 40f;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 1f;
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
		uParam0->f_10[2 /*57*/].f_6 = { -7.6252f, 24.0532f, 0.344f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -4.9335f, 0f, -72.5827f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 40f;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 1f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 1f;
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
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { 2.7024f, -65.6113f, 3.9747f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -2.9265f, 0.0274f, 3.5865f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 30f;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 2f;
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
		uParam0->f_10[4 /*57*/].f_34 = 1;
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
		uParam0->f_10[5 /*57*/].f_5 = 600;
		uParam0->f_10[5 /*57*/].f_6 = { -0.8088f, -7.2793f, 0.979f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { 1.181f, 0.6552f, 0.4279f };
		uParam0->f_10[5 /*57*/].f_18 = 1;
		uParam0->f_10[5 /*57*/].f_19 = 1;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 30f;
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
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 900;
		uParam0->f_10[6 /*57*/].f_6 = { -0.856f, -6.5132f, 0.9411f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { 1.181f, 0.653f, 0.427f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 30f;
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
		uParam0->f_1217 = 7;
		uParam0->f_1218 = 3;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_CarSteal_CarToBike.txt";
		uParam0->f_1225 = "CameraInfo_CarSteal_CarToBike.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = *iParam1;
	uParam0->f_4[1] = *iParam2;
}

void func_543(int iParam0)//Position - 0x67DC1
{
	iLocal_6279 = iParam0;
	func_718();
}




void func_547(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, float fParam8)//Position - 0x68199
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = uParam7;
	uParam0->f_13 = fParam8;
}

void func_548(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6)//Position - 0x681D1
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		while (!func_549(uParam0, iParam1, Param2, fParam5, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (iParam6 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
		}
	}
}

int func_549(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x6820E
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
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8564(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_32(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7707(*iParam0);
			func_551(*iParam0, bParam8);
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


int func_551(int iParam0, bool bParam1)//Position - 0x68326
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_555(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_555(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10915(iParam0, 3, 169))
					{
						func_273(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 10))
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 50))
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 59))
			{
				func_273(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 22))
			{
				func_273(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10915(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 4))
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 3))
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 82))
			{
				func_273(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 76))
			{
				func_273(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 1))
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10915(iParam0, 12, 12))
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10915(iParam0, 3, 71))
				{
					func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 7))
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 88))
			{
				func_273(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 17))
			{
				func_273(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				func_273(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_555(int iParam0, int iParam1)//Position - 0x68A75
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
				iVar1 = GlobalFunc_11083(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_133(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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















void func_570()//Position - 0x69E55
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	
	if (func_316())
	{
		func_397(1, "stageRace", 0, 0, func_309(1), 1);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(1, 0);
		MISC::ENABLE_DISPATCH_SERVICE(2, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		MISC::ENABLE_DISPATCH_SERVICE(4, 0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		func_300(PLAYER::PLAYER_ID(), 0, 0);
		fLocal_5835 = 1f;
		func_514(sLocal_5832, 500, 1, 1);
		func_577();
		VEHICLE::SET_VEHICLE_STRONG(iLocal_5844, 1);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_5845, 1);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_5846, 1);
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_5844, 1);
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_5845, 1);
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_5846, 1);
		ENTITY::SET_ENTITY_COLLISION(iLocal_5844, 1, 0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_5845, 1, 0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_5846, 1, 0);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_5844, 1);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_5845, 1);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_5846, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5838))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_5838, iLocal_5845, 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_5838, iLocal_5845, -1);
			}
			PED::SET_DRIVER_RACING_MODIFIER(iLocal_5838, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5839))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_5839, iLocal_5846, 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_5839, iLocal_5846, -1);
			}
			PED::SET_DRIVER_RACING_MODIFIER(iLocal_5839, 1f);
		}
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_5845, "CAR_1_RACERS", 0);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_5846, "CAR_1_RACERS", 0);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_MAIN"))
		{
			AUDIO::START_AUDIO_SCENE("CAR_1_RACE_MAIN");
		}
		func_393("S3_RACE", 7500, 1);
		if (!CAM::DOES_CAM_EXIST(iLocal_5865))
		{
			iLocal_5865 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
		}
		iLocal_5794 = 1;
		bLocal_5804 = false;
		func_20(1);
		if (func_315())
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, -1);
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_5838, iLocal_5845, 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_5838, iLocal_5845, -1);
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_5839, iLocal_5846, 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_5839, iLocal_5846, -1);
			}
			GlobalFunc_2239(iLocal_5844, 2571.327f, 360.4416f, 107.457f, 359.7253f);
			GlobalFunc_2239(iLocal_5845, Local_5813, 0f);
			GlobalFunc_2239(iLocal_5846, Local_5816, -1.3639f);
			if (!bLocal_5797)
			{
				func_311(2570.577f, 364.8711f, 107.4569f, 50f);
			}
			iVar0 = MISC::GET_GAME_TIMER() + 5000;
			while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("RACE_IGNITIONS", 0) && MISC::GET_GAME_TIMER() < iVar0)
			{
				func_312(0);
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_STEAL_1_IGNITIONS", iLocal_5845, "CAR_STEAL_1_SOUNDSET", 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5844);
			PHYSICS::ACTIVATE_PHYSICS(iLocal_5844);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5845, 500, sLocal_5832, 1);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_5845, 0f);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_5845, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5846, 501, sLocal_5832, 1);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_5846, 0f);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_5846, 1);
			if (GlobalFunc_Is_Mission_Retry())
			{
				func_20(2);
			}
			func_312(500);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		GlobalFunc_10692(&uLocal_5899, iLocal_5845, "S3_HELP2", 0, 1, 1, 1);
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
		}
		switch (iLocal_5732)
		{
			case 0:
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5844, 1, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5845, 1, 0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5846, 1, 0);
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5845, 500, sLocal_5832, 1);
				}
				else
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_5845, 1f);
				}
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5846, 501, sLocal_5832, 1);
				}
				else
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_5846, 1f);
				}
				func_301();
				break;
		}
		if (SYSTEM::TIMERA() >= 500)
		{
			if (!func_576())
			{
				func_300(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, 0))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_5858))
			{
				HUD::CLEAR_PRINTS();
				func_393("S3_RACE", 7500, 1);
				HUD::REMOVE_BLIP(&iLocal_5858);
			}
		}
		else
		{
			if (GlobalFunc_74("S3_HELP1"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_5858))
			{
				HUD::CLEAR_PRINTS();
				func_393("CMN_GENGETIN", 7500, 1);
				func_323(&iLocal_5859);
				func_323(&iLocal_5860);
				iLocal_5858 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_5844);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_5858, true);
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_9096) > 200)
		{
			iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 0, GlobalFunc_2220());
			iLocal_9096 = MISC::GET_GAME_TIMER();
		}
		func_574(iVar1);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[1]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_5851[0]))
				{
					func_298(&(uLocal_5851[0]), joaat("trailers2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(401, "ALubersetup"), 0f), 0f, -1, 0);
					ENTITY::SET_ENTITY_ROTATION(uLocal_5851[0], VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(401, "ALubersetup"), 0f), 2, 1);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_5851[0], iLocal_5644[1], 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5851[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_5851[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_5644[1]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5644[1]))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_5851[0]))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_5851[0], 401, "ALubersetup", 1);
								}
							}
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_5851[0]))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5644[1]))
								{
									GlobalFunc_2513(&(uLocal_5851[0]), VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5644[1]));
								}
							}
							else if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_5644[1]))
							{
								VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_5644[1], uLocal_5851[0], 1065353216);
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[2]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_5851[1]))
				{
					func_298(&(uLocal_5851[1]), joaat("trailers"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(403, "ALubersetup"), 0f), 0f, -1, 0);
					ENTITY::SET_ENTITY_ROTATION(uLocal_5851[1], VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(403, "ALubersetup"), 0f), 2, 1);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_5851[1], iLocal_5644[2], 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5851[1]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_5851[1]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[2]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_5644[2]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5644[2]))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_5851[1]))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_5851[1], 403, "ALubersetup", 1);
								}
							}
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_5851[1]))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5644[2]))
								{
									GlobalFunc_2513(&(uLocal_5851[1]), VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5644[2]));
								}
							}
							else if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_5644[2]))
							{
								VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_5644[2], uLocal_5851[1], 1065353216);
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5851[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_5851[1]))
			{
				if (!func_742("BetweenTrucks"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_5851[0], 0) - Vector(5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(uLocal_5851[1], 0) + Vector(5f, 0f, 0f), 8f, 0, 1, 0))
					{
						GlobalFunc_553(111);
						RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[2]))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TRUCK_HORN", iLocal_5644[2], "CAR_STEAL_1_SOUNDSET", 0, 0);
						}
						if (!iLocal_5791)
						{
							RECORDING::_0x48621C9FCA3EBD28(3);
							iLocal_5791 = 1;
						}
						func_739("BetweenTrucks", 1);
					}
				}
				else if (!func_742("BetweenBuses"))
				{
					if (iLocal_5791)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_5851[0], 0) - Vector(5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(uLocal_5851[1], 0) + Vector(5f, 0f, 0f), 8f, 0, 1, 0))
						{
							RECORDING::_0x81CBAE94390F9F89();
							iLocal_5791 = 0;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[3]) && ENTITY::DOES_ENTITY_EXIST(iLocal_5644[4]))
			{
				if (!func_742("BetweenBuses"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_5644[3], 0) - Vector(5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(iLocal_5644[4], 0) + Vector(5f, 0f, 0f), 8f, 0, 1, 0))
					{
						GlobalFunc_553(112);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BUS_HORN", iLocal_5644[3], "CAR_STEAL_1_SOUNDSET", 0, 0);
						RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
						if (!iLocal_5791)
						{
							RECORDING::_0x48621C9FCA3EBD28(3);
							iLocal_5791 = 1;
						}
						func_739("BetweenBuses", 1);
					}
				}
				else if (iLocal_5791)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_5644[3], 0) - Vector(5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(iLocal_5644[4], 0) + Vector(5f, 0f, 0f), 8f, 0, 1, 0))
					{
						RECORDING::_0x81CBAE94390F9F89();
						iLocal_5791 = 0;
					}
				}
			}
			if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_5264[5]) && !ENTITY::IS_ENTITY_DEAD(iLocal_5264[5])) && ENTITY::DOES_ENTITY_EXIST(iLocal_5264[6])) && !ENTITY::IS_ENTITY_DEAD(iLocal_5264[6])) && ENTITY::DOES_ENTITY_EXIST(iLocal_5264[7])) && !ENTITY::IS_ENTITY_DEAD(iLocal_5264[7]))
			{
				if (!func_742("CAR_1_RACE_SKIDDING_CARS"))
				{
					if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5264[5], 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) < 20f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5264[6], 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) < 20f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5264[7], 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) < 20f)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_SKIDDING_CARS"))
						{
							AUDIO::START_AUDIO_SCENE("CAR_1_RACE_SKIDDING_CARS");
						}
						RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
						func_739("CAR_1_RACE_SKIDDING_CARS", 1);
					}
				}
				else
				{
					if (!func_742("CAR_1_BRAKING_CARS_1"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5264[5], 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) < 20f)
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_5264[5], "CAR_1_SKIDDING_CARS_GROUP", 0);
							RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
							func_739("CAR_1_BRAKING_CARS_1", 1);
						}
					}
					else if (ENTITY::GET_ENTITY_SPEED(iLocal_5264[5]) < 1f)
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5264[5], 0);
					}
					if (!func_742("CAR_1_BRAKING_CARS_2"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5264[6], 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) < 20f)
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_5264[6], "CAR_1_SKIDDING_CARS_GROUP", 0);
							RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
							func_739("CAR_1_BRAKING_CARS_2", 1);
						}
					}
					else if (ENTITY::GET_ENTITY_SPEED(iLocal_5264[6]) < 1f)
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5264[6], 0);
					}
					if (!func_742("CAR_1_BRAKING_CARS_3"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5264[7], 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) < 20f)
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_5264[7], "CAR_1_SKIDDING_CARS_GROUP", 0);
							RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
							func_739("CAR_1_BRAKING_CARS_3", 1);
						}
					}
					else if (ENTITY::GET_ENTITY_SPEED(iLocal_5264[7]) < 1f)
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5264[7], 0);
					}
					if ((func_742("CAR_1_BRAKING_CARS_1") && func_742("CAR_1_BRAKING_CARS_2")) && func_742("CAR_1_BRAKING_CARS_3"))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_SKIDDING_CARS"))
						{
							AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_SKIDDING_CARS");
						}
					}
				}
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5845) > 100000f)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5847))
					{
						if (func_714(joaat("policeb")))
						{
							func_298(&iLocal_5847, joaat("policeb"), Local_5819, 147.9465f, -1, 0);
							GlobalFunc_534(iLocal_5847, 2);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5847, 1);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6281[2]))
					{
						if (func_714(GlobalFunc_4917(2)))
						{
							func_548(&(uLocal_6281[2]), 2, Local_8857, fLocal_8860, 0);
							if (!PED::IS_PED_WEARING_HELMET(uLocal_6281[2]))
							{
								PED::SET_PED_HELMET_PROP_INDEX(uLocal_6281[2], 5, 1);
								PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_6281[2], 0);
							}
							func_273(uLocal_6281[2], 12, 3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							GlobalFunc_5128(2);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6281[2], iLocal_5872);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_6281[2], 1);
							PED::SET_PED_CONFIG_FLAG(uLocal_6281[2], 32, 0);
						}
					}
					else if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[2], iLocal_5847, 0))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_6281[2], iLocal_5847, -1);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5848))
					{
						if (func_714(joaat("policeb")))
						{
							func_298(&iLocal_5848, joaat("policeb"), Local_5822, 135.0532f, -1, 0);
							GlobalFunc_534(iLocal_5848, 3);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5848, 1);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6281[0]))
					{
						if (func_714(GlobalFunc_4917(0)))
						{
							func_548(&(uLocal_6281[0]), 0, Local_8861, fLocal_8864, 0);
							func_273(uLocal_6281[0], 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							GlobalFunc_5128(0);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6281[0], iLocal_5872);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_6281[0], 1);
							PED::SET_PED_CONFIG_FLAG(uLocal_6281[0], 32, 0);
						}
					}
					else if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[0], iLocal_5848, 0))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_6281[0], iLocal_5848, -1);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[2]) && ENTITY::DOES_ENTITY_EXIST(uLocal_6281[0]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_6281[2], 1), 1) < 100f)
				{
					CUTSCENE::REQUEST_CUTSCENE("Car_steal_3_mcs_2", 8);
					STREAMING::REQUEST_ANIM_DICT(sLocal_8845);
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						GlobalFunc_11086("Michael", func_309(0), 0, 2);
						GlobalFunc_11086("Trevor", func_309(2), 0, 2);
					}
				}
			}
			if (!func_742("S3_OVER"))
			{
				if (!bLocal_5804)
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5845) > 23000f)
					{
						if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
						{
							if (PAD::_IS_USING_KEYBOARD(0))
							{
								func_371("S3_OVER_KM", 1, 12000);
							}
							else
							{
								func_371("S3_OVER", 1, 12000);
							}
						}
						else
						{
							func_739("S3_OVER", 1);
						}
					}
				}
			}
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				if (GlobalFunc_74("S3_OVER"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (MISC::IS_PC_VERSION())
				{
					if (GlobalFunc_74("S3_OVER_KM"))
					{
						HUD::CLEAR_HELP(1);
					}
				}
			}
		}
		if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5846) > (86000f - 3000f)) || VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_5846))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_5846, 1);
		}
		if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5845) > (102000f - 3000f)) || VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_5845))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_5845, 1);
		}
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_5838, -1273030092) == 1)
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5845))
			{
				iLocal_5746[1] = MISC::GET_GAME_TIMER() + 1500;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_5746[1] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) > (30f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) / 5f)))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 2391.149f, 5804.083f, 45.1577f, 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2391.149f, 5804.083f, 45.1577f, 1))
				{
					Var2 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(500, (func_573(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 500, sLocal_5832, 10) - 1000f), sLocal_5832) };
					if (!CAM::IS_SPHERE_VISIBLE(Var2, 5f))
					{
						MISC::CLEAR_AREA(Var2, 5f, 1, 0, 0, 0);
						GlobalFunc_2239(iLocal_5845, Var2, GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(500, (func_573(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 500, sLocal_5832, 10) - 1000f), sLocal_5832)));
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_5845, ENTITY::GET_ENTITY_SPEED(iLocal_5844));
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5845, 1, 1);
						iLocal_5746[1] = (MISC::GET_GAME_TIMER() + (3000 - GlobalFunc_254(SYSTEM::ROUND((VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) * VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))), 0, 1500)));
					}
				}
			}
		}
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_5839, -1273030092) == 1)
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5846))
			{
				iLocal_5746[2] = MISC::GET_GAME_TIMER() + 1500;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_5746[2] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) > (30f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) / 5f)))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 2391.149f, 5804.083f, 45.1577f, 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2391.149f, 5804.083f, 45.1577f, 1))
				{
					Var5 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(501, (func_573(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 501, sLocal_5832, 10) - 1000f), sLocal_5832) };
					if (!CAM::IS_SPHERE_VISIBLE(Var5, 5f))
					{
						MISC::CLEAR_AREA(Var5, 5f, 1, 0, 0, 0);
						GlobalFunc_2239(iLocal_5846, Var5, GlobalFunc_2245(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(501, (func_573(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 501, sLocal_5832, 10) - 1000f), sLocal_5832)));
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_5846, ENTITY::GET_ENTITY_SPEED(iLocal_5844));
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5846, 1, 1);
						iLocal_5746[2] = (MISC::GET_GAME_TIMER() + (3000 - GlobalFunc_254(SYSTEM::ROUND((VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) * VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))), 0, 1500)));
					}
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, 0))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_5859))
				{
					HUD::SET_BLIP_COORDS(iLocal_5859, ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1));
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_5860))
				{
					HUD::SET_BLIP_COORDS(iLocal_5860, ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1));
				}
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_5859))
			{
				iLocal_5859 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1));
				HUD::SET_BLIP_COLOUR(iLocal_5859, 3);
				HUD::SET_BLIP_PRIORITY(iLocal_5859, 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_5859, "S3_BLIPVEH");
			}
			Var8 = { ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1) };
			Var11 = { HUD::GET_BLIP_COORDS(iLocal_5859) };
			fVar14 = (1f + GlobalFunc_253((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) / 4f), 0f, 17.5f));
			Var11.x = (Var11.x + ((((Var8.x - Var11.x) / fVar14) * 15f) * SYSTEM::TIMESTEP()));
			Var11.f_1 = (Var11.f_1 + ((((Var8.f_1 - Var11.f_1) / fVar14) * 15f) * SYSTEM::TIMESTEP()));
			Var11.f_2 = (Var11.f_2 + ((((Var8.f_2 - Var11.f_2) / fVar14) * 15f) * SYSTEM::TIMESTEP()));
			HUD::SET_BLIP_COORDS(iLocal_5859, Var11);
			if (!HUD::DOES_BLIP_EXIST(iLocal_5860))
			{
				iLocal_5860 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1));
				HUD::SET_BLIP_COLOUR(iLocal_5860, 3);
				HUD::SET_BLIP_PRIORITY(iLocal_5860, 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_5860, "S3_BLIPVEH");
			}
			Var8 = { ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1) };
			Var11 = { HUD::GET_BLIP_COORDS(iLocal_5860) };
			fVar14 = (1f + GlobalFunc_253((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) / 4f), 0f, 17.5f));
			Var11.x = (Var11.x + ((((Var8.x - Var11.x) / fVar14) * 15f) * SYSTEM::TIMESTEP()));
			Var11.f_1 = (Var11.f_1 + ((((Var8.f_1 - Var11.f_1) / fVar14) * 15f) * SYSTEM::TIMESTEP()));
			Var11.f_2 = (Var11.f_2 + ((((Var8.f_2 - Var11.f_2) / fVar14) * 15f) * SYSTEM::TIMESTEP()));
			HUD::SET_BLIP_COORDS(iLocal_5860, Var11);
		}
		else
		{
			func_323(&iLocal_5859);
			func_323(&iLocal_5860);
		}
		PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(1651.788f, 3131.189f, 3216.789f, 6348.194f);
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2479.381f, 4728.353f, 23.32393f, 3015.382f, 4846.076f, 153.6302f, 450f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, 0))
		{
			if (GlobalFunc_552(1, 0, 1))
			{
				func_30();
			}
		}
	}
	if (func_29())
	{
		GlobalFunc_4948(&uLocal_5899, 0, 0);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_SKIDDING_CARS"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_SKIDDING_CARS");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_5845, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_5846, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
		GlobalFunc_2244(&(uLocal_5851[0]));
		GlobalFunc_2244(&(uLocal_5851[1]));
		RECORDING::_0x293220DA1B46CEBC(10f, 0f, 4);
		iLocal_6096++;
	}
}



float func_573(struct<3> Param0, int iParam3, char* sParam4, int iParam5)//Position - 0x6B384
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(iParam3, sParam4);
	fVar1 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0);
	fVar2 = (fVar1 / 2f);
	fVar3 = (fVar1 / 2f);
	iVar4 = 0;
	while (iVar4 <= iParam5)
	{
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, GlobalFunc_253((fVar2 - fVar3), 0f, fVar1))) < SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, GlobalFunc_253((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 - fVar3);
		}
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, GlobalFunc_253((fVar2 - fVar3), 0f, fVar1))) > SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, GlobalFunc_253((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 + fVar3);
		}
		iVar4++;
	}
	return fVar2;
}

void func_574(int iParam0)//Position - 0x6B449
{
	int iVar0;
	int iVar1;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_9095) > 2000)
	{
		if (iParam0 != iLocal_5845 && iParam0 != iLocal_5846)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
				if (!PED::IS_PED_INJURED(iVar0))
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					if (iVar1 == 0)
					{
						VEHICLE::START_VEHICLE_HORN(iParam0, 2000, 0, 0);
					}
					else if (iVar1 == 1)
					{
						GlobalFunc_5130(iVar0, "GENERIC_CURSE_HIGH", 6);
					}
					else if (iVar1 == 2)
					{
						VEHICLE::START_VEHICLE_HORN(iParam0, 2000, 0, 0);
						GlobalFunc_5130(iVar0, "GENERIC_CURSE_HIGH", 6);
					}
					iLocal_9095 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}


int func_576()//Position - 0x6B4F0
{
	if (bLocal_6359)
	{
		return 1;
	}
	return 0;
}

void func_577()//Position - 0x6B503
{
	Local_3511[0 /*3*/] = { 2531.837f, 567.2463f, 111.271f };
	fLocal_62[0] = 0.0104f;
	fLocal_403[0] = 0.0256f;
	fLocal_744[0] = 0.9981f;
	fLocal_1085[0] = -0.0547f;
	iLocal_2262[0] = 1;
	fLocal_1426[0] = 3432f;
	iLocal_4833[0] = joaat("mule");
	Local_3511[1 /*3*/] = { 2528.394f, 602.4405f, 108.8434f };
	fLocal_62[1] = 0.0095f;
	fLocal_403[1] = 0.0302f;
	fLocal_744[1] = 0.996f;
	fLocal_1085[1] = -0.0832f;
	iLocal_2262[1] = 2;
	fLocal_1426[1] = 4884f;
	iLocal_4833[1] = joaat("minivan");
	Local_3511[2 /*3*/] = { 2523.923f, 590.3826f, 109.196f };
	fLocal_62[2] = -0.018f;
	fLocal_403[2] = 0.028f;
	fLocal_744[2] = 0.9992f;
	fLocal_1085[2] = -0.0234f;
	iLocal_2262[2] = 3;
	fLocal_1426[2] = 5214f;
	iLocal_4833[2] = joaat("minivan");
	Local_3511[3 /*3*/] = { 2518.837f, 628.9053f, 107.6059f };
	fLocal_62[3] = -0.0193f;
	fLocal_403[3] = 0.03f;
	fLocal_744[3] = 0.9973f;
	fLocal_1085[3] = -0.0645f;
	iLocal_2262[3] = 4;
	fLocal_1426[3] = 5676f;
	iLocal_4833[3] = joaat("mule");
	Local_3511[4 /*3*/] = { 2517.663f, 641.6564f, 106.3506f };
	fLocal_62[4] = -0.0138f;
	fLocal_403[4] = 0.0317f;
	fLocal_744[4] = 0.9955f;
	fLocal_1085[4] = -0.0884f;
	iLocal_2262[4] = 5;
	fLocal_1426[4] = 7194f;
	iLocal_4833[4] = joaat("minivan");
	Local_3511[5 /*3*/] = { 2511.847f, 706.9466f, 102.3872f };
	fLocal_62[5] = 0.0098f;
	fLocal_403[5] = 0.0355f;
	fLocal_744[5] = 0.9951f;
	fLocal_1085[5] = -0.0922f;
	iLocal_2262[5] = 6;
	fLocal_1426[5] = 8118f;
	iLocal_4833[5] = joaat("mule");
	Local_3511[6 /*3*/] = { 2500.542f, 736.9729f, 99.4502f };
	fLocal_62[6] = -0.0158f;
	fLocal_403[6] = 0.034f;
	fLocal_744[6] = 0.9966f;
	fLocal_1085[6] = -0.0739f;
	iLocal_2262[6] = 7;
	fLocal_1426[6] = 8910f;
	iLocal_4833[6] = joaat("emperor");
	Local_3511[7 /*3*/] = { 2504.551f, 746.0255f, 99.1176f };
	fLocal_62[7] = 0.0095f;
	fLocal_403[7] = 0.0367f;
	fLocal_744[7] = 0.9902f;
	fLocal_1085[7] = -0.1342f;
	iLocal_2262[7] = 8;
	fLocal_1426[7] = 9240f;
	iLocal_4833[7] = joaat("minivan");
	Local_3511[8 /*3*/] = { 2490.19f, 789.2353f, 96.4467f };
	fLocal_62[8] = -0.0208f;
	fLocal_403[8] = 0.0316f;
	fLocal_744[8] = 0.994f;
	fLocal_1085[8] = -0.1028f;
	iLocal_2262[8] = 9;
	fLocal_1426[8] = 10164f;
	iLocal_4833[8] = joaat("mule");
	Local_3511[9 /*3*/] = { 2488.142f, 798.9224f, 95.2954f };
	fLocal_62[9] = -0.021f;
	fLocal_403[9] = 0.0298f;
	fLocal_744[9] = 0.9967f;
	fLocal_1085[9] = -0.0728f;
	iLocal_2262[9] = 10;
	fLocal_1426[9] = 10362f;
	iLocal_4833[9] = joaat("minivan");
	Local_3511[10 /*3*/] = { 2487.103f, 803.4872f, 95.1668f };
	fLocal_62[10] = -0.0199f;
	fLocal_403[10] = 0.0299f;
	fLocal_744[10] = 0.9966f;
	fLocal_1085[10] = -0.0736f;
	iLocal_2262[10] = 11;
	fLocal_1426[10] = 10890f;
	iLocal_4833[10] = joaat("minivan");
	Local_3511[11 /*3*/] = { 2474.486f, 851.2122f, 92.7213f };
	fLocal_62[11] = -0.0209f;
	fLocal_403[11] = 0.0219f;
	fLocal_744[11] = 0.9875f;
	fLocal_1085[11] = -0.1549f;
	iLocal_2262[11] = 12;
	fLocal_1426[11] = 11616f;
	iLocal_4833[11] = joaat("mule");
	Local_3511[12 /*3*/] = { 2471.356f, 860.8902f, 91.7206f };
	fLocal_62[12] = -0.0232f;
	fLocal_403[12] = 0.0194f;
	fLocal_744[12] = 0.9796f;
	fLocal_1085[12] = -0.1984f;
	iLocal_2262[12] = 13;
	fLocal_1426[12] = 11946f;
	iLocal_4833[12] = joaat("minivan");
	Local_3511[13 /*3*/] = { 2462.596f, 902.452f, 89.8936f };
	fLocal_62[13] = 0.0072f;
	fLocal_403[13] = 0.0228f;
	fLocal_744[13] = 0.9802f;
	fLocal_1085[13] = -0.1965f;
	iLocal_2262[13] = 14;
	fLocal_1426[13] = 12738f;
	iLocal_4833[13] = joaat("minivan");
	Local_3511[14 /*3*/] = { 2456.27f, 917.0245f, 89.0053f };
	fLocal_62[14] = 0.0082f;
	fLocal_403[14] = 0.0213f;
	fLocal_744[14] = 0.969f;
	fLocal_1085[14] = -0.2462f;
	iLocal_2262[14] = 15;
	fLocal_1426[14] = 13068f;
	iLocal_4833[14] = joaat("emperor");
	Local_3511[15 /*3*/] = { 2479.744f, 924.9675f, 86.5518f };
	fLocal_62[15] = 0.0025f;
	fLocal_403[15] = -0.0175f;
	fLocal_744[15] = 0.2824f;
	fLocal_1085[15] = 0.9591f;
	iLocal_2262[15] = 16;
	fLocal_1426[15] = 13068f;
	iLocal_4833[15] = joaat("minivan");
	Local_3511[16 /*3*/] = { 2442.264f, 946.6888f, 88.5245f };
	fLocal_62[16] = 0.0092f;
	fLocal_403[16] = 0.0222f;
	fLocal_744[16] = 0.9713f;
	fLocal_1085[16] = -0.2368f;
	iLocal_2262[16] = 17;
	fLocal_1426[16] = 13662f;
	iLocal_4833[16] = joaat("mule");
	Local_3511[17 /*3*/] = { 2450.368f, 964.5439f, 85.8815f };
	fLocal_62[17] = 0.001f;
	fLocal_403[17] = -0.0181f;
	fLocal_744[17] = 0.3259f;
	fLocal_1085[17] = 0.9452f;
	iLocal_2262[17] = 18;
	fLocal_1426[17] = 13992f;
	iLocal_4833[17] = joaat("minivan");
	Local_3511[18 /*3*/] = { 2430.643f, 968.1787f, 87.0446f };
	fLocal_62[18] = 0.0072f;
	fLocal_403[18] = 0.0228f;
	fLocal_744[18] = 0.9626f;
	fLocal_1085[18] = -0.2698f;
	iLocal_2262[18] = 19;
	fLocal_1426[18] = 14190f;
	iLocal_4833[18] = joaat("minivan");
	Local_3511[19 /*3*/] = { 2428.416f, 971.8596f, 86.6286f };
	fLocal_62[19] = 0.0082f;
	fLocal_403[19] = 0.0227f;
	fLocal_744[19] = 0.974f;
	fLocal_1085[19] = -0.2251f;
	iLocal_2262[19] = 20;
	fLocal_1426[19] = 14454f;
	iLocal_4833[19] = joaat("emperor");
	Local_3511[20 /*3*/] = { 2425.73f, 1005.211f, 85.5479f };
	fLocal_62[20] = -0.013f;
	fLocal_403[20] = -0.0026f;
	fLocal_744[20] = 0.339f;
	fLocal_1085[20] = 0.9407f;
	iLocal_2262[20] = 21;
	fLocal_1426[20] = 14916f;
	iLocal_4833[20] = joaat("minivan");
	Local_3511[21 /*3*/] = { 2404.28f, 1007.865f, 85.5689f };
	fLocal_62[21] = -0.0026f;
	fLocal_403[21] = 0.0243f;
	fLocal_744[21] = 0.9489f;
	fLocal_1085[21] = -0.3145f;
	iLocal_2262[21] = 22;
	fLocal_1426[21] = 15114f;
	iLocal_4833[21] = joaat("mule");
	Local_3511[22 /*3*/] = { 2381.649f, 1026.749f, 83.5159f };
	fLocal_62[22] = -0.0257f;
	fLocal_403[22] = 0.019f;
	fLocal_744[22] = 0.9447f;
	fLocal_1085[22] = -0.3263f;
	iLocal_2262[22] = 23;
	fLocal_1426[22] = 15708f;
	iLocal_4833[22] = joaat("minivan");
	Local_3511[25 /*3*/] = { 2357.725f, 1055.238f, 81.2879f };
	fLocal_62[25] = -0.0317f;
	fLocal_403[25] = 0.0111f;
	fLocal_744[25] = 0.9215f;
	fLocal_1085[25] = -0.3869f;
	iLocal_2262[25] = 26;
	fLocal_1426[25] = 16434f;
	iLocal_4833[25] = joaat("emperor");
	Local_3511[27 /*3*/] = { 2353.711f, 1066.811f, 80.6639f };
	fLocal_62[27] = 0.0105f;
	fLocal_403[27] = 0.0261f;
	fLocal_744[27] = 0.9482f;
	fLocal_1085[27] = -0.3164f;
	iLocal_2262[27] = 28;
	fLocal_1426[27] = 16962f;
	iLocal_4833[27] = joaat("asterope");
	Local_3511[29 /*3*/] = { 2322.847f, 1102.305f, 79.378f };
	fLocal_62[29] = 0.0049f;
	fLocal_403[29] = 0.0175f;
	fLocal_744[29] = 0.9272f;
	fLocal_1085[29] = -0.3742f;
	iLocal_2262[29] = 30;
	fLocal_1426[29] = 17688f;
	iLocal_4833[29] = joaat("minivan");
	Local_3511[31 /*3*/] = { 2382.247f, 1099.532f, 69.9259f };
	fLocal_62[31] = -0.0722f;
	fLocal_403[31] = -0.0345f;
	fLocal_744[31] = 0.3048f;
	fLocal_1085[31] = 0.949f;
	iLocal_2262[31] = 32;
	fLocal_1426[31] = 18282f;
	iLocal_4833[31] = joaat("minivan");
	Local_3511[35 /*3*/] = { 2296.198f, 1131.949f, 78.3355f };
	fLocal_62[35] = 0.0125f;
	fLocal_403[35] = 0.0162f;
	fLocal_744[35] = 0.9365f;
	fLocal_1085[35] = -0.35f;
	iLocal_2262[35] = 36;
	fLocal_1426[35] = 19602f;
	iLocal_4833[35] = joaat("minivan");
	Local_3511[36 /*3*/] = { 2260.124f, 1173.175f, 77.3797f };
	fLocal_62[36] = 0.0113f;
	fLocal_403[36] = 0.0126f;
	fLocal_744[36] = 0.9313f;
	fLocal_1085[36] = -0.3639f;
	iLocal_2262[36] = 37;
	fLocal_1426[36] = 19602f;
	iLocal_4833[36] = joaat("minivan");
	Local_3511[37 /*3*/] = { 2254.763f, 1178.725f, 76.9189f };
	fLocal_62[37] = 0.012f;
	fLocal_403[37] = 0.0128f;
	fLocal_744[37] = 0.9249f;
	fLocal_1085[37] = -0.3797f;
	iLocal_2262[37] = 38;
	fLocal_1426[37] = 20196f;
	iLocal_4833[37] = joaat("asterope");
	Local_3511[40 /*3*/] = { 2254.008f, 1178.555f, 77.0527f };
	fLocal_62[40] = 0.0076f;
	fLocal_403[40] = 0.0111f;
	fLocal_744[40] = 0.9422f;
	fLocal_1085[40] = -0.3348f;
	iLocal_2262[40] = 41;
	fLocal_1426[40] = 21186f;
	iLocal_4833[40] = joaat("emperor");
	Local_3511[41 /*3*/] = { 2191.623f, 1245.793f, 75.92f };
	fLocal_62[41] = -0.0131f;
	fLocal_403[41] = 0.0023f;
	fLocal_744[41] = 0.944f;
	fLocal_1085[41] = -0.3296f;
	iLocal_2262[41] = 42;
	fLocal_1426[41] = 21648f;
	iLocal_4833[41] = joaat("asterope");
	Local_3511[42 /*3*/] = { 2186.247f, 1285.219f, 75.6404f };
	fLocal_62[42] = -0.007f;
	fLocal_403[42] = 0.0073f;
	fLocal_744[42] = 0.3289f;
	fLocal_1085[42] = 0.9443f;
	iLocal_2262[42] = 43;
	fLocal_1426[42] = 22176f;
	iLocal_4833[42] = joaat("minivan");
	Local_3511[43 /*3*/] = { 2177.394f, 1287.115f, 75.2953f };
	fLocal_62[43] = 0.002f;
	fLocal_403[43] = -0.0179f;
	fLocal_744[43] = 0.3596f;
	fLocal_1085[43] = 0.9329f;
	iLocal_2262[43] = 44;
	fLocal_1426[43] = 22440f;
	iLocal_4833[43] = joaat("emperor");
	Local_3511[45 /*3*/] = { 2168.658f, 1284.153f, 76.0682f };
	fLocal_62[45] = 0.0078f;
	fLocal_403[45] = 0.0062f;
	fLocal_744[45] = 0.9487f;
	fLocal_1085[45] = -0.3161f;
	iLocal_2262[45] = 46;
	fLocal_1426[45] = 22836f;
	iLocal_4833[45] = joaat("mule");
	Local_3511[46 /*3*/] = { 2159.547f, 1320.89f, 75.0434f };
	fLocal_62[46] = -0.0036f;
	fLocal_403[46] = 0.0046f;
	fLocal_744[46] = 0.2774f;
	fLocal_1085[46] = 0.9607f;
	iLocal_2262[46] = 47;
	fLocal_1426[46] = 23034f;
	iLocal_4833[46] = joaat("asterope");
	Local_3511[47 /*3*/] = { 2155.504f, 1317.011f, 75.368f };
	fLocal_62[47] = 0.0021f;
	fLocal_403[47] = -0.015f;
	fLocal_744[47] = 0.268f;
	fLocal_1085[47] = 0.9633f;
	iLocal_2262[47] = 48;
	fLocal_1426[47] = 23232f;
	iLocal_4833[47] = joaat("minivan");
	Local_3511[48 /*3*/] = { 2125.944f, 1334.538f, 75.2456f };
	fLocal_62[48] = -0.017f;
	fLocal_403[48] = -0.004f;
	fLocal_744[48] = 0.9526f;
	fLocal_1085[48] = -0.3038f;
	iLocal_2262[48] = 49;
	fLocal_1426[48] = 23694f;
	iLocal_4833[48] = joaat("minivan");
	Local_3511[49 /*3*/] = { 2118.601f, 1355.438f, 74.9437f };
	fLocal_62[49] = 0.0123f;
	fLocal_403[49] = 0.0044f;
	fLocal_744[49] = 0.9453f;
	fLocal_1085[49] = -0.326f;
	iLocal_2262[49] = 50;
	fLocal_1426[49] = 24024f;
	iLocal_4833[49] = joaat("minivan");
	Local_3511[50 /*3*/] = { 2111.55f, 1365.316f, 74.9957f };
	fLocal_62[50] = 0.0127f;
	fLocal_403[50] = 0.003f;
	fLocal_744[50] = 0.9686f;
	fLocal_1085[50] = -0.2483f;
	iLocal_2262[50] = 51;
	fLocal_1426[50] = 24288f;
	iLocal_4833[50] = joaat("emperor");
	Local_3511[52 /*3*/] = { 2114.032f, 1361.751f, 74.952f };
	fLocal_62[52] = 0.0198f;
	fLocal_403[52] = 0.0097f;
	fLocal_744[52] = 0.9551f;
	fLocal_1085[52] = -0.2954f;
	iLocal_2262[52] = 53;
	fLocal_1426[52] = 25476f;
	iLocal_4833[52] = joaat("minivan");
	Local_3511[53 /*3*/] = { 2094.216f, 1411.408f, 75.2758f };
	fLocal_62[53] = 0.0052f;
	fLocal_403[53] = -0.0165f;
	fLocal_744[53] = 0.2652f;
	fLocal_1085[53] = 0.964f;
	iLocal_2262[53] = 54;
	fLocal_1426[53] = 25608f;
	iLocal_4833[53] = joaat("minivan");
	Local_3511[54 /*3*/] = { 2078.286f, 1449.053f, 74.9826f };
	fLocal_62[54] = -0.0015f;
	fLocal_403[54] = 0.0112f;
	fLocal_744[54] = 0.2564f;
	fLocal_1085[54] = 0.9665f;
	iLocal_2262[54] = 55;
	fLocal_1426[54] = 26466f;
	iLocal_4833[54] = joaat("asterope");
	Local_3511[55 /*3*/] = { 2070.576f, 1419.489f, 75.2672f };
	fLocal_62[55] = -0.0106f;
	fLocal_403[55] = -0.0032f;
	fLocal_744[55] = 0.9545f;
	fLocal_1085[55] = -0.2979f;
	iLocal_2262[55] = 56;
	fLocal_1426[55] = 26664f;
	iLocal_4833[55] = joaat("asterope");
	Local_3511[56 /*3*/] = { 2074.433f, 1445.065f, 75.0597f };
	fLocal_62[56] = 0.0051f;
	fLocal_403[56] = -0.0166f;
	fLocal_744[56] = 0.2513f;
	fLocal_1085[56] = 0.9677f;
	iLocal_2262[56] = 57;
	fLocal_1426[56] = 26730f;
	iLocal_4833[56] = joaat("emperor");
	Local_3511[57 /*3*/] = { 2034.114f, 1491.644f, 75.418f };
	fLocal_62[57] = -0.0116f;
	fLocal_403[57] = -0.0029f;
	fLocal_744[57] = 0.9807f;
	fLocal_1085[57] = -0.1953f;
	iLocal_2262[57] = 58;
	fLocal_1426[57] = 27192f;
	iLocal_4833[57] = joaat("minivan");
	Local_3511[58 /*3*/] = { 2031.29f, 1498.936f, 75.1537f };
	fLocal_62[58] = -0.0155f;
	fLocal_403[58] = -0.0053f;
	fLocal_744[58] = 0.9681f;
	fLocal_1085[58] = -0.2499f;
	iLocal_2262[58] = 59;
	fLocal_1426[58] = 27456f;
	iLocal_4833[58] = joaat("minivan");
	Local_3511[60 /*3*/] = { 2039.688f, 1528.827f, 75.42f };
	fLocal_62[60] = -0.0045f;
	fLocal_403[60] = -0.0085f;
	fLocal_744[60] = 0.203f;
	fLocal_1085[60] = 0.9791f;
	iLocal_2262[60] = 61;
	fLocal_1426[60] = 27984f;
	iLocal_4833[60] = joaat("minivan");
	Local_3511[61 /*3*/] = { 2017.703f, 1529.898f, 75.0193f };
	fLocal_62[61] = 0.0036f;
	fLocal_403[61] = 0.0035f;
	fLocal_744[61] = 0.9739f;
	fLocal_1085[61] = -0.2269f;
	iLocal_2262[61] = 62;
	fLocal_1426[61] = 28050f;
	iLocal_4833[61] = joaat("emperor");
	Local_3511[62 /*3*/] = { 2039.093f, 1530.857f, 75.1213f };
	fLocal_62[62] = -0.0058f;
	fLocal_403[62] = -0.0118f;
	fLocal_744[62] = 0.1708f;
	fLocal_1085[62] = 0.9852f;
	iLocal_2262[62] = 63;
	fLocal_1426[62] = 28512f;
	iLocal_4833[62] = joaat("minivan");
	Local_3511[63 /*3*/] = { 2003.016f, 1606.651f, 73.644f };
	fLocal_62[63] = -0.018f;
	fLocal_403[63] = -0.0027f;
	fLocal_744[63] = 0.1751f;
	fLocal_1085[63] = 0.9844f;
	iLocal_2262[63] = 64;
	fLocal_1426[63] = 29502f;
	iLocal_4833[63] = joaat("minivan");
	Local_3511[64 /*3*/] = { 2007.392f, 1610.443f, 73.2368f };
	fLocal_62[64] = -0.0188f;
	fLocal_403[64] = -0.0044f;
	fLocal_744[64] = 0.1347f;
	fLocal_1085[64] = 0.9907f;
	iLocal_2262[64] = 65;
	fLocal_1426[64] = 29832f;
	iLocal_4833[64] = joaat("asterope");
	Local_3511[65 /*3*/] = { 1961.829f, 1653.688f, 72.4539f };
	fLocal_62[65] = -0.0041f;
	fLocal_403[65] = 0.0207f;
	fLocal_744[65] = 0.9811f;
	fLocal_1085[65] = -0.1924f;
	iLocal_2262[65] = 66;
	fLocal_1426[65] = 30756f;
	iLocal_4833[65] = joaat("minivan");
	Local_3511[66 /*3*/] = { 1979.6f, 1672.97f, 70.8238f };
	fLocal_62[66] = -0.0266f;
	fLocal_403[66] = -0.0043f;
	fLocal_744[66] = 0.1589f;
	fLocal_1085[66] = 0.9869f;
	iLocal_2262[66] = 67;
	fLocal_1426[66] = 30954f;
	iLocal_4833[66] = joaat("mule");
	Local_3511[68 /*3*/] = { 1946.994f, 1689.089f, 70.3624f };
	fLocal_62[68] = -0.0058f;
	fLocal_403[68] = 0.0249f;
	fLocal_744[68] = 0.9723f;
	fLocal_1085[68] = -0.2323f;
	iLocal_2262[68] = 69;
	fLocal_1426[68] = 31548f;
	iLocal_4833[68] = joaat("minivan");
	Local_3511[69 /*3*/] = { 1934.688f, 1715.086f, 68.7313f };
	fLocal_62[69] = -0.004f;
	fLocal_403[69] = 0.0275f;
	fLocal_744[69] = 0.985f;
	fLocal_1085[69] = -0.1705f;
	iLocal_2262[69] = 70;
	fLocal_1426[69] = 32142f;
	iLocal_4833[69] = joaat("asterope");
	Local_3511[70 /*3*/] = { 1957.866f, 1743.557f, 66.1376f };
	fLocal_62[70] = -0.0282f;
	fLocal_403[70] = -0.0039f;
	fLocal_744[70] = 0.1453f;
	fLocal_1085[70] = 0.989f;
	iLocal_2262[70] = 71;
	fLocal_1426[70] = 32472f;
	iLocal_4833[70] = joaat("minivan");
	Local_3511[71 /*3*/] = { 1925.929f, 1749.324f, 67.6292f };
	fLocal_62[71] = -0.0055f;
	fLocal_403[71] = 0.0275f;
	fLocal_744[71] = 0.9804f;
	fLocal_1085[71] = -0.1948f;
	iLocal_2262[71] = 72;
	fLocal_1426[71] = 32736f;
	iLocal_4833[71] = joaat("mule");
	Local_3511[72 /*3*/] = { 1952.072f, 1761.215f, 64.832f };
	fLocal_62[72] = -0.027f;
	fLocal_403[72] = -0.0033f;
	fLocal_744[72] = 0.1259f;
	fLocal_1085[72] = 0.9917f;
	iLocal_2262[72] = 73;
	fLocal_1426[72] = 32802f;
	iLocal_4833[72] = joaat("minivan");
	Local_3511[73 /*3*/] = { 1918.161f, 1753.964f, 66.4773f };
	fLocal_62[73] = -0.0044f;
	fLocal_403[73] = 0.0278f;
	fLocal_744[73] = 0.9868f;
	fLocal_1085[73] = -0.1597f;
	iLocal_2262[73] = 74;
	fLocal_1426[73] = 32934f;
	iLocal_4833[73] = joaat("emperor");
	Local_3511[75 /*3*/] = { 1939.949f, 1804.677f, 62.5258f };
	fLocal_62[75] = -0.0236f;
	fLocal_403[75] = -0.0021f;
	fLocal_744[75] = 0.0882f;
	fLocal_1085[75] = 0.9958f;
	iLocal_2262[75] = 76;
	fLocal_1426[75] = 33726f;
	iLocal_4833[75] = joaat("emperor");
	Local_3511[77 /*3*/] = { 1910.192f, 1924.527f, 57.8338f };
	fLocal_62[77] = -0.0158f;
	fLocal_403[77] = -0.0019f;
	fLocal_744[77] = 0.1139f;
	fLocal_1085[77] = 0.9934f;
	iLocal_2262[77] = 78;
	fLocal_1426[77] = 35970f;
	iLocal_4833[77] = joaat("asterope");
	Local_3511[79 /*3*/] = { 1906.633f, 1942.234f, 57.3684f };
	fLocal_62[79] = -0.0149f;
	fLocal_403[79] = -0.0021f;
	fLocal_744[79] = 0.1458f;
	fLocal_1085[79] = 0.9892f;
	iLocal_2262[79] = 80;
	fLocal_1426[79] = 36696f;
	iLocal_4833[79] = joaat("minivan");
	Local_3511[80 /*3*/] = { 1838.212f, 1987.831f, 56.5357f };
	fLocal_62[80] = -0.001f;
	fLocal_403[80] = 0.0096f;
	fLocal_744[80] = 0.9949f;
	fLocal_1085[80] = -0.1009f;
	iLocal_2262[80] = 81;
	fLocal_1426[80] = 37620f;
	iLocal_4833[80] = joaat("emperor");
	Local_3511[82 /*3*/] = { 1893.268f, 2037.745f, 55.7725f };
	fLocal_62[82] = -0.009f;
	fLocal_403[82] = -0.0005f;
	fLocal_744[82] = 0.0559f;
	fLocal_1085[82] = 0.9984f;
	iLocal_2262[82] = 83;
	fLocal_1426[82] = 38082f;
	iLocal_4833[82] = joaat("mule");
	Local_3511[85 /*3*/] = { 1875.64f, 2133.173f, 53.9558f };
	fLocal_62[85] = -0.0011f;
	fLocal_403[85] = -0.0002f;
	fLocal_744[85] = 0.0396f;
	fLocal_1085[85] = 0.9992f;
	iLocal_2262[85] = 86;
	fLocal_1426[85] = 39864f;
	iLocal_4833[85] = joaat("asterope");
	Local_3511[87 /*3*/] = { 1836.639f, 2125.587f, 70.6828f };
	fLocal_62[87] = -0.0345f;
	fLocal_403[87] = -0.0056f;
	fLocal_744[87] = -0.0538f;
	fLocal_1085[87] = 0.9979f;
	iLocal_2262[87] = 88;
	fLocal_1426[87] = 40260f;
	iLocal_4833[87] = joaat("mule");
	Local_3511[88 /*3*/] = { 1837.862f, 2177.184f, 66.247f };
	fLocal_62[88] = -0.0378f;
	fLocal_403[88] = 0.003f;
	fLocal_744[88] = -0.0833f;
	fLocal_1085[88] = 0.9958f;
	iLocal_2262[88] = 89;
	fLocal_1426[88] = 40920f;
	iLocal_4833[88] = joaat("asterope");
	Local_3511[89 /*3*/] = { 1843.855f, 2182.256f, 65.5808f };
	fLocal_62[89] = -0.0391f;
	fLocal_403[89] = 0.0042f;
	fLocal_744[89] = -0.1129f;
	fLocal_1085[89] = 0.9928f;
	iLocal_2262[89] = 90;
	fLocal_1426[89] = 41118f;
	iLocal_4833[89] = joaat("emperor");
	Local_3511[90 /*3*/] = { 1846.661f, 2198.628f, 64.5254f };
	fLocal_62[90] = -0.0382f;
	fLocal_403[90] = 0.0036f;
	fLocal_744[90] = -0.1322f;
	fLocal_1085[90] = 0.9905f;
	iLocal_2262[90] = 91;
	fLocal_1426[90] = 41316f;
	iLocal_4833[90] = joaat("minivan");
	Local_3511[91 /*3*/] = { 1877.027f, 2216.197f, 54.8171f };
	fLocal_62[91] = -0.0001f;
	fLocal_403[91] = 0f;
	fLocal_744[91] = -0.0436f;
	fLocal_1085[91] = 0.9991f;
	iLocal_2262[91] = 92;
	fLocal_1426[91] = 41382f;
	iLocal_4833[91] = joaat("mule");
	Local_3511[93 /*3*/] = { 1878.197f, 2232.242f, 54.0437f };
	fLocal_62[93] = 0f;
	fLocal_403[93] = 0f;
	fLocal_744[93] = -0.01f;
	fLocal_1085[93] = 0.9999f;
	iLocal_2262[93] = 94;
	fLocal_1426[93] = 42108f;
	iLocal_4833[93] = joaat("minivan");
	Local_3511[94 /*3*/] = { 1866.376f, 2284.51f, 58.3637f };
	fLocal_62[94] = -0.0299f;
	fLocal_403[94] = 0.0084f;
	fLocal_744[94] = -0.09f;
	fLocal_1085[94] = 0.9955f;
	iLocal_2262[94] = 95;
	fLocal_1426[94] = 42702f;
	iLocal_4833[94] = joaat("minivan");
	Local_3511[95 /*3*/] = { 1859.998f, 2279.672f, 58.5171f };
	fLocal_62[95] = -0.0314f;
	fLocal_403[95] = -0.0016f;
	fLocal_744[95] = -0.0917f;
	fLocal_1085[95] = 0.9953f;
	iLocal_2262[95] = 96;
	fLocal_1426[95] = 43098f;
	iLocal_4833[95] = joaat("emperor");
	Local_3511[96 /*3*/] = { 1889.902f, 2301.965f, 54.3177f };
	fLocal_62[96] = 0f;
	fLocal_403[96] = 0f;
	fLocal_744[96] = -0.0948f;
	fLocal_1085[96] = 0.9955f;
	iLocal_2262[96] = 97;
	fLocal_1426[96] = 43494f;
	iLocal_4833[96] = joaat("minivan");
	Local_3511[98 /*3*/] = { 1914.807f, 2371.75f, 54.0472f };
	fLocal_62[98] = 0f;
	fLocal_403[98] = -0.0002f;
	fLocal_744[98] = -0.1181f;
	fLocal_1085[98] = 0.993f;
	iLocal_2262[98] = 99;
	fLocal_1426[98] = 44550f;
	iLocal_4833[98] = joaat("minivan");
	Local_3511[99 /*3*/] = { 1919.331f, 2385.455f, 54.0774f };
	fLocal_62[99] = -0.0003f;
	fLocal_403[99] = 0.0002f;
	fLocal_744[99] = -0.1213f;
	fLocal_1085[99] = 0.9926f;
	iLocal_2262[99] = 100;
	fLocal_1426[99] = 45012f;
	iLocal_4833[99] = joaat("emperor");
	Local_3511[100 /*3*/] = { 1881.08f, 2420.813f, 53.937f };
	fLocal_62[100] = -0.0009f;
	fLocal_403[100] = -0.0044f;
	fLocal_744[100] = 0.9667f;
	fLocal_1085[100] = 0.256f;
	iLocal_2262[100] = 101;
	fLocal_1426[100] = 45606f;
	iLocal_4833[100] = joaat("asterope");
	Local_3511[101 /*3*/] = { 1942.564f, 2449.508f, 53.9608f };
	fLocal_62[101] = 0f;
	fLocal_403[101] = 0f;
	fLocal_744[101] = -0.2572f;
	fLocal_1085[101] = 0.9664f;
	iLocal_2262[101] = 102;
	fLocal_1426[101] = 45936f;
	iLocal_4833[101] = joaat("asterope");
	Local_3511[102 /*3*/] = { 1919.266f, 2471.769f, 55.0404f };
	fLocal_62[102] = -0.0002f;
	fLocal_403[102] = -0.0007f;
	fLocal_744[102] = 0.9583f;
	fLocal_1085[102] = 0.2858f;
	iLocal_2262[102] = 103;
	fLocal_1426[102] = 46332f;
	iLocal_4833[102] = joaat("mule");
	Local_3511[103 /*3*/] = { 1959.335f, 2493.466f, 54.0472f };
	fLocal_62[103] = 0f;
	fLocal_403[103] = -0.0002f;
	fLocal_744[103] = -0.2531f;
	fLocal_1085[103] = 0.9674f;
	iLocal_2262[103] = 104;
	fLocal_1426[103] = 46860f;
	iLocal_4833[103] = joaat("minivan");
	Local_3511[104 /*3*/] = { 1922.311f, 2504.747f, 54.315f };
	fLocal_62[104] = 0.0003f;
	fLocal_403[104] = -0.0003f;
	fLocal_744[104] = 0.9483f;
	fLocal_1085[104] = 0.3174f;
	iLocal_2262[104] = 105;
	fLocal_1426[104] = 46926f;
	iLocal_4833[104] = joaat("minivan");
	Local_3511[105 /*3*/] = { 1923.53f, 2514.652f, 54.2393f };
	fLocal_62[105] = -0.0009f;
	fLocal_403[105] = -0.0014f;
	fLocal_744[105] = 0.9517f;
	fLocal_1085[105] = 0.3071f;
	iLocal_2262[105] = 106;
	fLocal_1426[105] = 47124f;
	iLocal_4833[105] = joaat("asterope");
	Local_3511[106 /*3*/] = { 1973.268f, 2514.693f, 54.3217f };
	fLocal_62[106] = 0.0003f;
	fLocal_403[106] = -0.0001f;
	fLocal_744[106] = -0.3002f;
	fLocal_1085[106] = 0.9539f;
	iLocal_2262[106] = 107;
	fLocal_1426[106] = 47322f;
	iLocal_4833[106] = joaat("minivan");
	Local_3511[107 /*3*/] = { 1980.194f, 2510.078f, 54.7849f };
	fLocal_62[107] = -0.0006f;
	fLocal_403[107] = 0f;
	fLocal_744[107] = -0.3186f;
	fLocal_1085[107] = 0.9479f;
	iLocal_2262[107] = 108;
	fLocal_1426[107] = 47586f;
	iLocal_4833[107] = joaat("mule");
	Local_3511[108 /*3*/] = { 1927.301f, 2511.628f, 54.0738f };
	fLocal_62[108] = -0.0006f;
	fLocal_403[108] = -0.0019f;
	fLocal_744[108] = 0.9542f;
	fLocal_1085[108] = 0.2992f;
	iLocal_2262[108] = 109;
	fLocal_1426[108] = 47718f;
	iLocal_4833[108] = joaat("emperor");
	Local_3511[109 /*3*/] = { 1978.608f, 2570.125f, 54.0438f };
	fLocal_62[109] = 0.0003f;
	fLocal_403[109] = 0.0009f;
	fLocal_744[109] = 0.9199f;
	fLocal_1085[109] = 0.3921f;
	iLocal_2262[109] = 110;
	fLocal_1426[109] = 48444f;
	iLocal_4833[109] = joaat("emperor");
	Local_3511[110 /*3*/] = { 1978.637f, 2577.612f, 54.2875f };
	fLocal_62[110] = 0.0017f;
	fLocal_403[110] = 0.0005f;
	fLocal_744[110] = 0.9266f;
	fLocal_1085[110] = 0.3761f;
	iLocal_2262[110] = 111;
	fLocal_1426[110] = 48510f;
	iLocal_4833[110] = joaat("minivan");
	Local_3511[111 /*3*/] = { 2025.821f, 2557.657f, 54.3789f };
	fLocal_62[111] = -0.0047f;
	fLocal_403[111] = -0.0141f;
	fLocal_744[111] = -0.3716f;
	fLocal_1085[111] = 0.9283f;
	iLocal_2262[111] = 112;
	fLocal_1426[111] = 48708f;
	iLocal_4833[111] = joaat("minivan");
	Local_3511[112 /*3*/] = { 2044.867f, 2576.521f, 53.6568f };
	fLocal_62[112] = -0.0123f;
	fLocal_403[112] = 0.0049f;
	fLocal_744[112] = -0.4343f;
	fLocal_1085[112] = 0.9007f;
	iLocal_2262[112] = 113;
	fLocal_1426[112] = 49104f;
	iLocal_4833[112] = joaat("asterope");
	Local_3511[113 /*3*/] = { 2035.24f, 2575.033f, 53.956f };
	fLocal_62[113] = -0.0042f;
	fLocal_403[113] = 0.0054f;
	fLocal_744[113] = -0.3938f;
	fLocal_1085[113] = 0.9192f;
	iLocal_2262[113] = 114;
	fLocal_1426[113] = 49302f;
	iLocal_4833[113] = joaat("minivan");
	Local_3511[114 /*3*/] = { 2034.013f, 2613.809f, 53.9144f };
	fLocal_62[114] = -0.0026f;
	fLocal_403[114] = 0.0158f;
	fLocal_744[114] = 0.912f;
	fLocal_1085[114] = 0.41f;
	iLocal_2262[114] = 115;
	fLocal_1426[114] = 49632f;
	iLocal_4833[114] = joaat("mule");
	Local_3511[115 /*3*/] = { 2082.613f, 2618.121f, 52.2736f };
	fLocal_62[115] = -0.015f;
	fLocal_403[115] = 0.0061f;
	fLocal_744[115] = -0.4216f;
	fLocal_1085[115] = 0.9066f;
	iLocal_2262[115] = 116;
	fLocal_1426[115] = 50226f;
	iLocal_4833[115] = joaat("minivan");
	Local_3511[116 /*3*/] = { 2074.028f, 2642.633f, 51.7169f };
	fLocal_62[116] = 0.0077f;
	fLocal_403[116] = 0.0159f;
	fLocal_744[116] = 0.9037f;
	fLocal_1085[116] = 0.4278f;
	iLocal_2262[116] = 117;
	fLocal_1426[116] = 50556f;
	iLocal_4833[116] = joaat("emperor");
	Local_3511[117 /*3*/] = { 2100.893f, 2629.021f, 51.335f };
	fLocal_62[117] = -0.0147f;
	fLocal_403[117] = 0.0073f;
	fLocal_744[117] = -0.2968f;
	fLocal_1085[117] = 0.9548f;
	iLocal_2262[117] = 118;
	fLocal_1426[117] = 51150f;
	iLocal_4833[117] = joaat("minivan");
	Local_3511[118 /*3*/] = { 2102.909f, 2675.583f, 50.9682f };
	fLocal_62[118] = 0.0123f;
	fLocal_403[118] = 0.0138f;
	fLocal_744[118] = 0.9176f;
	fLocal_1085[118] = 0.397f;
	iLocal_2262[118] = 119;
	fLocal_1426[118] = 51348f;
	iLocal_4833[118] = joaat("mule");
	Local_3511[119 /*3*/] = { 2096.352f, 2662.056f, 50.7263f };
	fLocal_62[119] = 0.006f;
	fLocal_403[119] = 0.0159f;
	fLocal_744[119] = 0.9315f;
	fLocal_1085[119] = 0.3634f;
	iLocal_2262[119] = 120;
	fLocal_1426[119] = 51546f;
	iLocal_4833[119] = joaat("asterope");
	Local_3511[120 /*3*/] = { 2139.484f, 2709.685f, 48.5264f };
	fLocal_62[120] = 0.0083f;
	fLocal_403[120] = 0.0169f;
	fLocal_744[120] = 0.9252f;
	fLocal_1085[120] = 0.379f;
	iLocal_2262[120] = 121;
	fLocal_1426[120] = 52338f;
	iLocal_4833[120] = joaat("asterope");
	Local_3511[121 /*3*/] = { 2158.105f, 2682.178f, 48.5176f };
	fLocal_62[121] = -0.0233f;
	fLocal_403[121] = -0.0056f;
	fLocal_744[121] = -0.4217f;
	fLocal_1085[121] = 0.9064f;
	iLocal_2262[121] = 122;
	fLocal_1426[121] = 52338f;
	iLocal_4833[121] = joaat("emperor");
	Local_3511[122 /*3*/] = { 2150.633f, 2676.246f, 49.1083f };
	fLocal_62[122] = -0.0175f;
	fLocal_403[122] = 0.0035f;
	fLocal_744[122] = -0.3898f;
	fLocal_1085[122] = 0.9207f;
	iLocal_2262[122] = 123;
	fLocal_1426[122] = 52536f;
	iLocal_4833[122] = joaat("minivan");
	Local_3511[123 /*3*/] = { 2157.312f, 2720.9f, 47.7763f };
	fLocal_62[123] = 0.0129f;
	fLocal_403[123] = 0.0152f;
	fLocal_744[123] = 0.9163f;
	fLocal_1085[123] = 0.4f;
	iLocal_2262[123] = 124;
	fLocal_1426[123] = 52668f;
	iLocal_4833[123] = joaat("minivan");
	Local_3511[124 /*3*/] = { 2161.894f, 2732.978f, 47.1336f };
	fLocal_62[124] = 0.004f;
	fLocal_403[124] = 0.019f;
	fLocal_744[124] = 0.9056f;
	fLocal_1085[124] = 0.4237f;
	iLocal_2262[124] = 125;
	fLocal_1426[124] = 52998f;
	iLocal_4833[124] = joaat("asterope");
	Local_3511[125 /*3*/] = { 2165.214f, 2735.364f, 46.9517f };
	fLocal_62[125] = 0.0054f;
	fLocal_403[125] = 0.019f;
	fLocal_744[125] = 0.9231f;
	fLocal_1085[125] = 0.3839f;
	iLocal_2262[125] = 126;
	fLocal_1426[125] = 53328f;
	iLocal_4833[125] = joaat("emperor");
	Local_3511[126 /*3*/] = { 2168.572f, 2731.146f, 47.171f };
	fLocal_62[126] = 0.016f;
	fLocal_403[126] = 0.0146f;
	fLocal_744[126] = 0.9366f;
	fLocal_1085[126] = 0.3497f;
	iLocal_2262[126] = 127;
	fLocal_1426[126] = 53460f;
	iLocal_4833[126] = joaat("minivan");
	Local_3511[128 /*3*/] = { 2204.32f, 2729.65f, 46.0701f };
	fLocal_62[128] = -0.0151f;
	fLocal_403[128] = 0.0134f;
	fLocal_744[128] = -0.4697f;
	fLocal_1085[128] = 0.8826f;
	iLocal_2262[128] = 129;
	fLocal_1426[128] = 53856f;
	iLocal_4833[128] = joaat("asterope");
	Local_3511[129 /*3*/] = { 2223.924f, 2745.003f, 44.8964f };
	fLocal_62[129] = -0.0148f;
	fLocal_403[129] = 0.0123f;
	fLocal_744[129] = -0.4397f;
	fLocal_1085[129] = 0.898f;
	iLocal_2262[129] = 130;
	fLocal_1426[129] = 54252f;
	iLocal_4833[129] = joaat("minivan");
	Local_3511[130 /*3*/] = { 2235.416f, 2785.003f, 43.919f };
	fLocal_62[130] = 0.0114f;
	fLocal_403[130] = 0.0146f;
	fLocal_744[130] = 0.9048f;
	fLocal_1085[130] = 0.4254f;
	iLocal_2262[130] = 131;
	fLocal_1426[130] = 54516f;
	iLocal_4833[130] = joaat("minivan");
	Local_3511[132 /*3*/] = { 2245.466f, 2799.805f, 43.1371f };
	fLocal_62[132] = 0.0068f;
	fLocal_403[132] = 0.0152f;
	fLocal_744[132] = 0.9105f;
	fLocal_1085[132] = 0.4132f;
	iLocal_2262[132] = 133;
	fLocal_1426[132] = 54912f;
	iLocal_4833[132] = joaat("asterope");
	Local_3511[133 /*3*/] = { 2266.867f, 2784.885f, 42.9903f };
	fLocal_62[133] = -0.0177f;
	fLocal_403[133] = 0.0036f;
	fLocal_744[133] = -0.4714f;
	fLocal_1085[133] = 0.8817f;
	iLocal_2262[133] = 134;
	fLocal_1426[133] = 55374f;
	iLocal_4833[133] = joaat("asterope");
	Local_3511[134 /*3*/] = { 2283.884f, 2797.646f, 42.0955f };
	fLocal_62[134] = -0.0178f;
	fLocal_403[134] = -0.0002f;
	fLocal_744[134] = -0.4409f;
	fLocal_1085[134] = 0.8974f;
	iLocal_2262[134] = 135;
	fLocal_1426[134] = 55506f;
	iLocal_4833[134] = joaat("emperor");
	Local_3511[135 /*3*/] = { 2266.421f, 2815.703f, 42.4122f };
	fLocal_62[135] = 0.0006f;
	fLocal_403[135] = 0.016f;
	fLocal_744[135] = 0.8986f;
	fLocal_1085[135] = 0.4385f;
	iLocal_2262[135] = 136;
	fLocal_1426[135] = 55638f;
	iLocal_4833[135] = joaat("minivan");
	Local_3511[136 /*3*/] = { 2278.169f, 2793.719f, 42.5558f };
	fLocal_62[136] = -0.0181f;
	fLocal_403[136] = -0.0022f;
	fLocal_744[136] = -0.4076f;
	fLocal_1085[136] = 0.913f;
	iLocal_2262[136] = 137;
	fLocal_1426[136] = 55770f;
	iLocal_4833[136] = joaat("minivan");
	Local_3511[137 /*3*/] = { 2288.335f, 2826.155f, 41.7135f };
	fLocal_62[137] = 0.0093f;
	fLocal_403[137] = 0.0108f;
	fLocal_744[137] = 0.879f;
	fLocal_1085[137] = 0.4765f;
	iLocal_2262[137] = 138;
	fLocal_1426[137] = 55968f;
	iLocal_4833[137] = joaat("minivan");
	Local_3511[138 /*3*/] = { 2307.548f, 2840.069f, 40.9374f };
	fLocal_62[138] = 0.0082f;
	fLocal_403[138] = 0.0077f;
	fLocal_744[138] = 0.9129f;
	fLocal_1085[138] = 0.4081f;
	iLocal_2262[138] = 139;
	fLocal_1426[138] = 56364f;
	iLocal_4833[138] = joaat("asterope");
	Local_3511[139 /*3*/] = { 2347.161f, 2876.978f, 40.2483f };
	fLocal_62[139] = -0.0009f;
	fLocal_403[139] = 0.0054f;
	fLocal_744[139] = 0.9061f;
	fLocal_1085[139] = 0.4231f;
	iLocal_2262[139] = 140;
	fLocal_1426[139] = 57420f;
	iLocal_4833[139] = joaat("minivan");
	Local_3511[140 /*3*/] = { 2353.289f, 2843.331f, 40.1427f };
	fLocal_62[140] = -0.0013f;
	fLocal_403[140] = 0.013f;
	fLocal_744[140] = -0.4505f;
	fLocal_1085[140] = 0.8927f;
	iLocal_2262[140] = 141;
	fLocal_1426[140] = 57420f;
	iLocal_4833[140] = joaat("emperor");
	Local_3511[141 /*3*/] = { 2345.499f, 2845.313f, 40.196f };
	fLocal_62[141] = -0.0105f;
	fLocal_403[141] = -0.0046f;
	fLocal_744[141] = -0.4457f;
	fLocal_1085[141] = 0.8951f;
	iLocal_2262[141] = 142;
	fLocal_1426[141] = 58080f;
	iLocal_4833[141] = joaat("minivan");
	Local_3511[142 /*3*/] = { 2393.79f, 2875.586f, 39.6648f };
	fLocal_62[142] = 0.0016f;
	fLocal_403[142] = 0.0069f;
	fLocal_744[142] = -0.4279f;
	fLocal_1085[142] = 0.9038f;
	iLocal_2262[142] = 143;
	fLocal_1426[142] = 58146f;
	iLocal_4833[142] = joaat("minivan");
	Local_3511[143 /*3*/] = { 2376.062f, 2899.533f, 39.7828f };
	fLocal_62[143] = -0.0036f;
	fLocal_403[143] = 0.0024f;
	fLocal_744[143] = 0.9093f;
	fLocal_1085[143] = 0.416f;
	iLocal_2262[143] = 144;
	fLocal_1426[143] = 58212f;
	iLocal_4833[143] = joaat("emperor");
	Local_3511[144 /*3*/] = { 2431.891f, 2860.458f, 48.4824f };
	fLocal_62[144] = 0.0078f;
	fLocal_403[144] = 0.004f;
	fLocal_744[144] = -0.4613f;
	fLocal_1085[144] = 0.8872f;
	iLocal_2262[144] = 145;
	fLocal_1426[144] = 58476f;
	iLocal_4833[144] = joaat("emperor");
	Local_3511[145 /*3*/] = { 2437.681f, 2853.661f, 48.6681f };
	fLocal_62[145] = -0.0023f;
	fLocal_403[145] = 0.0016f;
	fLocal_744[145] = 0.753f;
	fLocal_1085[145] = -0.6581f;
	iLocal_2262[145] = 146;
	fLocal_1426[145] = 58542f;
	iLocal_4833[145] = joaat("minivan");
	Local_3511[148 /*3*/] = { 2423.122f, 2899.488f, 39.7634f };
	fLocal_62[148] = 0.0048f;
	fLocal_403[148] = 0.007f;
	fLocal_744[148] = -0.3871f;
	fLocal_1085[148] = 0.922f;
	iLocal_2262[148] = 149;
	fLocal_1426[148] = 59334f;
	iLocal_4833[148] = joaat("minivan");
	Local_3511[149 /*3*/] = { 2443.444f, 2922.713f, 40.1022f };
	fLocal_62[149] = -0.0115f;
	fLocal_403[149] = -0.0064f;
	fLocal_744[149] = -0.3552f;
	fLocal_1085[149] = 0.9347f;
	iLocal_2262[149] = 150;
	fLocal_1426[149] = 59598f;
	iLocal_4833[149] = joaat("asterope");
	Local_3511[150 /*3*/] = { 2461.119f, 2971.092f, 40.4965f };
	fLocal_62[150] = -0.0027f;
	fLocal_403[150] = -0.0056f;
	fLocal_744[150] = 0.9087f;
	fLocal_1085[150] = 0.4173f;
	iLocal_2262[150] = 151;
	fLocal_1426[150] = 60192f;
	iLocal_4833[150] = joaat("asterope");
	Local_3511[152 /*3*/] = { 2478.981f, 2986.512f, 40.8035f };
	fLocal_62[152] = -0.0028f;
	fLocal_403[152] = -0.006f;
	fLocal_744[152] = 0.9128f;
	fLocal_1085[152] = 0.4083f;
	iLocal_2262[152] = 153;
	fLocal_1426[152] = 60786f;
	iLocal_4833[152] = joaat("asterope");
	Local_3511[153 /*3*/] = { 2526.046f, 2987.505f, 41.3395f };
	fLocal_62[153] = 0.0115f;
	fLocal_403[153] = -0.0008f;
	fLocal_744[153] = -0.4057f;
	fLocal_1085[153] = 0.9139f;
	iLocal_2262[153] = 154;
	fLocal_1426[153] = 61380f;
	iLocal_4833[153] = joaat("asterope");
	Local_3511[154 /*3*/] = { 2541.451f, 3001.824f, 41.8341f };
	fLocal_62[154] = 0.016f;
	fLocal_403[154] = -0.0028f;
	fLocal_744[154] = -0.4384f;
	fLocal_1085[154] = 0.8986f;
	iLocal_2262[154] = 155;
	fLocal_1426[154] = 61710f;
	iLocal_4833[154] = joaat("minivan");
	Local_3511[156 /*3*/] = { 2488.69f, 2995.338f, 40.9617f };
	fLocal_62[156] = -0.0026f;
	fLocal_403[156] = -0.006f;
	fLocal_744[156] = 0.9098f;
	fLocal_1085[156] = 0.4149f;
	iLocal_2262[156] = 157;
	fLocal_1426[156] = 61974f;
	iLocal_4833[156] = joaat("asterope");
	Local_3511[158 /*3*/] = { 2592.366f, 3056.721f, 45.2098f };
	fLocal_62[158] = 0.0221f;
	fLocal_403[158] = -0.0095f;
	fLocal_744[158] = -0.3915f;
	fLocal_1085[158] = 0.9199f;
	iLocal_2262[158] = 159;
	fLocal_1426[158] = 63096f;
	iLocal_4833[158] = joaat("minivan");
	Local_3511[159 /*3*/] = { 2622.852f, 3091.066f, 47.3566f };
	fLocal_62[159] = 0.0239f;
	fLocal_403[159] = -0.0086f;
	fLocal_744[159] = -0.3428f;
	fLocal_1085[159] = 0.9391f;
	iLocal_2262[159] = 160;
	fLocal_1426[159] = 64020f;
	iLocal_4833[159] = joaat("asterope");
	Local_3511[160 /*3*/] = { 2610.313f, 3112.682f, 47.6941f };
	fLocal_62[160] = -0.0083f;
	fLocal_403[160] = -0.0242f;
	fLocal_744[160] = 0.9453f;
	fLocal_1085[160] = 0.3251f;
	iLocal_2262[160] = 161;
	fLocal_1426[160] = 64152f;
	iLocal_4833[160] = joaat("emperor");
	Local_3511[161 /*3*/] = { 2646.117f, 3116.894f, 49.0079f };
	fLocal_62[161] = 0.0228f;
	fLocal_403[161] = -0.0081f;
	fLocal_744[161] = -0.3662f;
	fLocal_1085[161] = 0.9302f;
	iLocal_2262[161] = 162;
	fLocal_1426[161] = 64680f;
	iLocal_4833[161] = joaat("minivan");
	Local_3511[162 /*3*/] = { 2637.148f, 3137.296f, 49.773f };
	fLocal_62[162] = -0.0085f;
	fLocal_403[162] = -0.0225f;
	fLocal_744[162] = 0.947f;
	fLocal_1085[162] = 0.3205f;
	iLocal_2262[162] = 163;
	fLocal_1426[162] = 64878f;
	iLocal_4833[162] = joaat("minivan");
	Local_3511[165 /*3*/] = { 2665.626f, 3175.402f, 51.7303f };
	fLocal_62[165] = -0.006f;
	fLocal_403[165] = -0.0194f;
	fLocal_744[165] = 0.9567f;
	fLocal_1085[165] = 0.2902f;
	iLocal_2262[165] = 166;
	fLocal_1426[165] = 65934f;
	iLocal_4833[165] = joaat("asterope");
	Local_3511[166 /*3*/] = { 2668.354f, 3180.072f, 51.9595f };
	fLocal_62[166] = -0.0054f;
	fLocal_403[166] = -0.0191f;
	fLocal_744[166] = 0.9583f;
	fLocal_1085[166] = 0.285f;
	iLocal_2262[166] = 167;
	fLocal_1426[166] = 66396f;
	iLocal_4833[166] = joaat("asterope");
	Local_3511[167 /*3*/] = { 2704.178f, 3199.582f, 53.4408f };
	fLocal_62[167] = 0.0155f;
	fLocal_403[167] = -0.0043f;
	fLocal_744[167] = -0.2745f;
	fLocal_1085[167] = 0.9615f;
	iLocal_2262[167] = 168;
	fLocal_1426[167] = 66792f;
	iLocal_4833[167] = joaat("minivan");
	Local_3511[168 /*3*/] = { 2696.931f, 3187.343f, 52.7233f };
	fLocal_62[168] = 0.0165f;
	fLocal_403[168] = -0.0042f;
	fLocal_744[168] = -0.2499f;
	fLocal_1085[168] = 0.9681f;
	iLocal_2262[168] = 169;
	fLocal_1426[168] = 66990f;
	iLocal_4833[168] = joaat("emperor");
	Local_3511[169 /*3*/] = { 2745.041f, 3260.313f, 55.039f };
	fLocal_62[169] = 0.0089f;
	fLocal_403[169] = 0.0007f;
	fLocal_744[169] = -0.2473f;
	fLocal_1085[169] = 0.9689f;
	iLocal_2262[169] = 170;
	fLocal_1426[169] = 68112f;
	iLocal_4833[169] = joaat("asterope");
	Local_3511[170 /*3*/] = { 2766.009f, 3302.247f, 55.506f };
	fLocal_62[170] = 0.0044f;
	fLocal_403[170] = -0.001f;
	fLocal_744[170] = -0.1799f;
	fLocal_1085[170] = 0.9837f;
	iLocal_2262[170] = 171;
	fLocal_1426[170] = 69234f;
	iLocal_4833[170] = joaat("minivan");
	Local_3511[171 /*3*/] = { 2773.783f, 3320.949f, 55.8819f };
	fLocal_62[171] = 0.0016f;
	fLocal_403[171] = -0.0002f;
	fLocal_744[171] = -0.2109f;
	fLocal_1085[171] = 0.9775f;
	iLocal_2262[171] = 172;
	fLocal_1426[171] = 69498f;
	iLocal_4833[171] = joaat("minivan");
	Local_3511[174 /*3*/] = { 2806.511f, 3409.546f, 55.3729f };
	fLocal_62[174] = -0.0039f;
	fLocal_403[174] = 0.0009f;
	fLocal_744[174] = -0.2034f;
	fLocal_1085[174] = 0.9791f;
	iLocal_2262[174] = 175;
	fLocal_1426[174] = 71412f;
	iLocal_4833[174] = joaat("asterope");
	Local_3511[176 /*3*/] = { 2812.219f, 3421.841f, 55.2114f };
	fLocal_62[176] = -0.004f;
	fLocal_403[176] = 0.0008f;
	fLocal_744[176] = -0.1992f;
	fLocal_1085[176] = 0.9799f;
	iLocal_2262[176] = 177;
	fLocal_1426[176] = 71676f;
	iLocal_4833[176] = joaat("emperor");
	Local_3511[177 /*3*/] = { 2789.799f, 3433.596f, 55.2778f };
	fLocal_62[177] = 0.0014f;
	fLocal_403[177] = 0.0052f;
	fLocal_744[177] = 0.9741f;
	fLocal_1085[177] = 0.2262f;
	iLocal_2262[177] = 178;
	fLocal_1426[177] = 71742f;
	iLocal_4833[177] = joaat("asterope");
	Local_3511[178 /*3*/] = { 2821.139f, 3430.965f, 55.0884f };
	fLocal_62[178] = -0.0039f;
	fLocal_403[178] = 0.0004f;
	fLocal_744[178] = -0.1594f;
	fLocal_1085[178] = 0.9872f;
	iLocal_2262[178] = 179;
	fLocal_1426[178] = 71940f;
	iLocal_4833[178] = joaat("minivan");
	Local_3511[179 /*3*/] = { 2814.321f, 3478.431f, 54.8139f };
	fLocal_62[179] = 0.0019f;
	fLocal_403[179] = 0.0068f;
	fLocal_744[179] = 0.9771f;
	fLocal_1085[179] = 0.2126f;
	iLocal_2262[179] = 180;
	fLocal_1426[179] = 72798f;
	iLocal_4833[179] = joaat("minivan");
	Local_3511[180 /*3*/] = { 2803.961f, 3466.078f, 54.7513f };
	fLocal_62[180] = 0.0016f;
	fLocal_403[180] = 0.0066f;
	fLocal_744[180] = 0.9723f;
	fLocal_1085[180] = 0.2335f;
	iLocal_2262[180] = 181;
	fLocal_1426[180] = 73128f;
	iLocal_4833[180] = joaat("minivan");
	Local_3511[181 /*3*/] = { 2847.736f, 3505.271f, 54.2615f };
	fLocal_62[181] = -0.0076f;
	fLocal_403[181] = 0.0013f;
	fLocal_744[181] = -0.1921f;
	fLocal_1085[181] = 0.9814f;
	iLocal_2262[181] = 182;
	fLocal_1426[181] = 73854f;
	iLocal_4833[181] = joaat("minivan");
	Local_3511[183 /*3*/] = { 2877.022f, 3588.119f, 52.803f };
	fLocal_62[183] = -0.0076f;
	fLocal_403[183] = 0.0011f;
	fLocal_744[183] = -0.1616f;
	fLocal_1085[183] = 0.9868f;
	iLocal_2262[183] = 184;
	fLocal_1426[183] = 75240f;
	iLocal_4833[183] = joaat("minivan");
	Local_3511[184 /*3*/] = { 2879.719f, 3577.665f, 52.7755f };
	fLocal_62[184] = -0.0077f;
	fLocal_403[184] = 0.0015f;
	fLocal_744[184] = -0.1889f;
	fLocal_1085[184] = 0.982f;
	iLocal_2262[184] = 185;
	fLocal_1426[184] = 75570f;
	iLocal_4833[184] = joaat("asterope");
	Local_3511[185 /*3*/] = { 2865.009f, 3612.821f, 52.2994f };
	fLocal_62[185] = 0.0008f;
	fLocal_403[185] = 0.0041f;
	fLocal_744[185] = 0.9899f;
	fLocal_1085[185] = 0.1414f;
	iLocal_2262[185] = 186;
	fLocal_1426[185] = 75636f;
	iLocal_4833[185] = joaat("asterope");
	Local_3511[186 /*3*/] = { 2858.722f, 3611.338f, 52.533f };
	fLocal_62[186] = -0.0042f;
	fLocal_403[186] = 0.0082f;
	fLocal_744[186] = 0.9904f;
	fLocal_1085[186] = 0.1376f;
	iLocal_2262[186] = 187;
	fLocal_1426[186] = 75768f;
	iLocal_4833[186] = joaat("minivan");
	Local_3511[188 /*3*/] = { 2871.333f, 3659.245f, 52.2244f };
	fLocal_62[188] = 0.0001f;
	fLocal_403[188] = 0f;
	fLocal_744[188] = 0.989f;
	fLocal_1085[188] = 0.148f;
	iLocal_2262[188] = 189;
	fLocal_1426[188] = 76626f;
	iLocal_4833[188] = joaat("asterope");
	Local_3511[189 /*3*/] = { 2875.569f, 3652.132f, 52.2426f };
	fLocal_62[189] = 0.0002f;
	fLocal_403[189] = 0f;
	fLocal_744[189] = 0.9862f;
	fLocal_1085[189] = 0.1656f;
	iLocal_2262[189] = 190;
	fLocal_1426[189] = 76890f;
	iLocal_4833[189] = joaat("asterope");
	Local_3511[190 /*3*/] = { 2905.482f, 3668.888f, 52.2389f };
	fLocal_62[190] = 0f;
	fLocal_403[190] = 0f;
	fLocal_744[190] = -0.1334f;
	fLocal_1085[190] = 0.9911f;
	iLocal_2262[190] = 191;
	fLocal_1426[190] = 76956f;
	iLocal_4833[190] = joaat("asterope");
	Local_3511[195 /*3*/] = { 2903.878f, 3758.218f, 52.416f };
	fLocal_62[195] = 0.0001f;
	fLocal_403[195] = 0.0004f;
	fLocal_744[195] = 0.9907f;
	fLocal_1085[195] = 0.1359f;
	iLocal_2262[195] = 196;
	fLocal_1426[195] = 78936f;
	iLocal_4833[195] = joaat("minivan");
	Local_3511[196 /*3*/] = { 2921.532f, 3747.864f, 52.4151f };
	fLocal_62[196] = -0.0004f;
	fLocal_403[196] = 0.0014f;
	fLocal_744[196] = -0.1704f;
	fLocal_1085[196] = 0.9854f;
	iLocal_2262[196] = 197;
	fLocal_1426[196] = 79068f;
	iLocal_4833[196] = joaat("minivan");
	Local_3511[198 /*3*/] = { 2910.401f, 3810.927f, 52.1188f };
	fLocal_62[198] = 0.0001f;
	fLocal_403[198] = 0.0013f;
	fLocal_744[198] = 0.9992f;
	fLocal_1085[198] = 0.0405f;
	iLocal_2262[198] = 199;
	fLocal_1426[198] = 79794f;
	iLocal_4833[198] = joaat("minivan");
	Local_3511[199 /*3*/] = { 2916.367f, 3820.11f, 52.1236f };
	fLocal_62[199] = -0.0001f;
	fLocal_403[199] = 0.0021f;
	fLocal_744[199] = 0.9999f;
	fLocal_1085[199] = 0.016f;
	iLocal_2262[199] = 200;
	fLocal_1426[199] = 80124f;
	iLocal_4833[199] = joaat("emperor");
	Local_3511[200 /*3*/] = { 2942.557f, 3832.198f, 52.3031f };
	fLocal_62[200] = -0.0019f;
	fLocal_403[200] = 0.0001f;
	fLocal_744[200] = -0.0657f;
	fLocal_1085[200] = 0.9978f;
	iLocal_2262[200] = 201;
	fLocal_1426[200] = 81444f;
	iLocal_4833[200] = joaat("minivan");
	Local_3511[201 /*3*/] = { 2939.486f, 3896.611f, 51.8115f };
	fLocal_62[201] = -0.0032f;
	fLocal_403[201] = 0f;
	fLocal_744[201] = 0.0027f;
	fLocal_1085[201] = 1f;
	iLocal_2262[201] = 202;
	fLocal_1426[201] = 81510f;
	iLocal_4833[201] = joaat("asterope");
	Local_3511[206 /*3*/] = { 2941.112f, 3958.011f, 51.5513f };
	fLocal_62[206] = -0.0038f;
	fLocal_403[206] = -0.0016f;
	fLocal_744[206] = 0.0433f;
	fLocal_1085[206] = 0.9991f;
	iLocal_2262[206] = 207;
	fLocal_1426[206] = 83292f;
	iLocal_4833[206] = joaat("minivan");
	Local_3511[210 /*3*/] = { 2926.082f, 4017.531f, 51.0611f };
	fLocal_62[210] = -0.0042f;
	fLocal_403[210] = -0.0018f;
	fLocal_744[210] = 0.0771f;
	fLocal_1085[210] = 0.997f;
	iLocal_2262[210] = 211;
	fLocal_1426[210] = 84480f;
	iLocal_4833[210] = joaat("minivan");
	Local_3511[211 /*3*/] = { 2925.87f, 4016.104f, 50.8968f };
	fLocal_62[211] = -0.0042f;
	fLocal_403[211] = -0.0003f;
	fLocal_744[211] = 0.1139f;
	fLocal_1085[211] = 0.9935f;
	iLocal_2262[211] = 212;
	fLocal_1426[211] = 85140f;
	iLocal_4833[211] = joaat("asterope");
	Local_3511[212 /*3*/] = { 2902.591f, 4129.481f, 50.1421f };
	fLocal_62[212] = -0.0017f;
	fLocal_403[212] = -0.0004f;
	fLocal_744[212] = 0.1585f;
	fLocal_1085[212] = 0.9874f;
	iLocal_2262[212] = 213;
	fLocal_1426[212] = 86262f;
	iLocal_4833[212] = joaat("asterope");
	Local_3511[213 /*3*/] = { 2872.584f, 4122.162f, 49.9296f };
	fLocal_62[213] = -0.0004f;
	fLocal_403[213] = 0.0031f;
	fLocal_744[213] = 0.9907f;
	fLocal_1085[213] = -0.1358f;
	iLocal_2262[213] = 214;
	fLocal_1426[213] = 86262f;
	iLocal_4833[213] = joaat("emperor");
	Local_3511[214 /*3*/] = { 2882.539f, 4110.017f, 50.284f };
	fLocal_62[214] = 0.0007f;
	fLocal_403[214] = 0.0034f;
	fLocal_744[214] = 0.9832f;
	fLocal_1085[214] = -0.1824f;
	iLocal_2262[214] = 215;
	fLocal_1426[214] = 86526f;
	iLocal_4833[214] = joaat("minivan");
	Local_3511[216 /*3*/] = { 2838.92f, 4220.802f, 49.8474f };
	fLocal_62[216] = -0.0005f;
	fLocal_403[216] = -0.0008f;
	fLocal_744[216] = 0.9795f;
	fLocal_1085[216] = -0.2013f;
	iLocal_2262[216] = 217;
	fLocal_1426[216] = 88374f;
	iLocal_4833[216] = joaat("minivan");
	Local_3511[217 /*3*/] = { 2838.721f, 4233.904f, 49.6966f };
	fLocal_62[217] = 0.0003f;
	fLocal_403[217] = -0.001f;
	fLocal_744[217] = 0.9882f;
	fLocal_1085[217] = -0.1534f;
	iLocal_2262[217] = 218;
	fLocal_1426[217] = 88638f;
	iLocal_4833[217] = joaat("asterope");
	Local_3511[218 /*3*/] = { 2861.107f, 4254.66f, 49.6824f };
	fLocal_62[218] = 0.0013f;
	fLocal_403[218] = 0.0001f;
	fLocal_744[218] = 0.1495f;
	fLocal_1085[218] = 0.9888f;
	iLocal_2262[218] = 219;
	fLocal_1426[218] = 88836f;
	iLocal_4833[218] = joaat("asterope");
	Local_3511[219 /*3*/] = { 2854.592f, 4258.179f, 49.6395f };
	fLocal_62[219] = 0.0015f;
	fLocal_403[219] = 0.0001f;
	fLocal_744[219] = 0.1592f;
	fLocal_1085[219] = 0.9872f;
	iLocal_2262[219] = 220;
	fLocal_1426[219] = 88968f;
	iLocal_4833[219] = joaat("emperor");
	Local_3511[220 /*3*/] = { 2823.999f, 4256.281f, 49.9823f };
	fLocal_62[220] = 0.0063f;
	fLocal_403[220] = -0.0003f;
	fLocal_744[220] = 0.9811f;
	fLocal_1085[220] = -0.1932f;
	iLocal_2262[220] = 221;
	fLocal_1426[220] = 89166f;
	iLocal_4833[220] = joaat("minivan");
	Local_3511[221 /*3*/] = { 2831.485f, 4251.955f, 49.775f };
	fLocal_62[221] = -0.0035f;
	fLocal_403[221] = -0.0023f;
	fLocal_744[221] = 0.9817f;
	fLocal_1085[221] = -0.1904f;
	iLocal_2262[221] = 222;
	fLocal_1426[221] = 89430f;
	iLocal_4833[221] = joaat("asterope");
	Local_3511[222 /*3*/] = { 2849.766f, 4287.169f, 49.6947f };
	fLocal_62[222] = 0.0007f;
	fLocal_403[222] = -0.0002f;
	fLocal_744[222] = 0.1893f;
	fLocal_1085[222] = 0.9819f;
	iLocal_2262[222] = 223;
	fLocal_1426[222] = 89496f;
	iLocal_4833[222] = joaat("minivan");
	Local_3511[223 /*3*/] = { 2853.804f, 4277.071f, 49.944f };
	fLocal_62[223] = 0.0019f;
	fLocal_403[223] = -0.0014f;
	fLocal_744[223] = 0.1232f;
	fLocal_1085[223] = 0.9924f;
	iLocal_2262[223] = 224;
	fLocal_1426[223] = 89628f;
	iLocal_4833[223] = joaat("minivan");
	Local_3511[225 /*3*/] = { 2826.743f, 4358.825f, 49.4738f };
	fLocal_62[225] = -0.0056f;
	fLocal_403[225] = -0.0011f;
	fLocal_744[225] = 0.1658f;
	fLocal_1085[225] = 0.9861f;
	iLocal_2262[225] = 226;
	fLocal_1426[225] = 91014f;
	iLocal_4833[225] = joaat("asterope");
	Local_3511[226 /*3*/] = { 2790.552f, 4346.271f, 49.4405f };
	fLocal_62[226] = -0.0012f;
	fLocal_403[226] = 0.0065f;
	fLocal_744[226] = 0.9817f;
	fLocal_1085[226] = -0.1902f;
	iLocal_2262[226] = 227;
	fLocal_1426[226] = 91014f;
	iLocal_4833[226] = joaat("asterope");
	Local_3511[227 /*3*/] = { 2798.868f, 4337.996f, 49.7406f };
	fLocal_62[227] = -0.003f;
	fLocal_403[227] = 0.004f;
	fLocal_744[227] = 0.9768f;
	fLocal_1085[227] = -0.214f;
	iLocal_2262[227] = 228;
	fLocal_1426[227] = 91344f;
	iLocal_4833[227] = joaat("minivan");
	Local_3511[228 /*3*/] = { 2790.376f, 4346.402f, 49.3544f };
	fLocal_62[228] = -0.0015f;
	fLocal_403[228] = 0.0069f;
	fLocal_744[228] = 0.981f;
	fLocal_1085[228] = -0.194f;
	iLocal_2262[228] = 229;
	fLocal_1426[228] = 91608f;
	iLocal_4833[228] = joaat("emperor");
	Local_3511[229 /*3*/] = { 2805.982f, 4392.129f, 48.9902f };
	fLocal_62[229] = -0.0079f;
	fLocal_403[229] = -0.0017f;
	fLocal_744[229] = 0.1483f;
	fLocal_1085[229] = 0.9889f;
	iLocal_2262[229] = 230;
	fLocal_1426[229] = 91806f;
	iLocal_4833[229] = joaat("minivan");
	Local_3511[230 /*3*/] = { 2827.915f, 4412.431f, 48.4923f };
	fLocal_62[230] = -0.001f;
	fLocal_403[230] = 0.0052f;
	fLocal_744[230] = -0.3744f;
	fLocal_1085[230] = 0.9273f;
	iLocal_2262[230] = 231;
	fLocal_1426[230] = 92334f;
	iLocal_4833[230] = joaat("emperor");
	Local_3511[231 /*3*/] = { 2796.719f, 4464.096f, 47.6579f };
	fLocal_62[231] = -0.01f;
	fLocal_403[231] = -0.0019f;
	fLocal_744[231] = 0.1384f;
	fLocal_1085[231] = 0.9903f;
	iLocal_2262[231] = 232;
	fLocal_1426[231] = 93192f;
	iLocal_4833[231] = joaat("minivan");
	Local_3511[232 /*3*/] = { 2763.431f, 4396.779f, 48.5387f };
	fLocal_62[232] = -0.0067f;
	fLocal_403[232] = -0.0059f;
	fLocal_744[232] = -0.5931f;
	fLocal_1085[232] = 0.8051f;
	iLocal_2262[232] = 233;
	fLocal_1426[232] = 93390f;
	iLocal_4833[232] = joaat("asterope");
	Local_3511[233 /*3*/] = { 2796.616f, 4463.253f, 47.4005f };
	fLocal_62[233] = -0.0099f;
	fLocal_403[233] = -0.0015f;
	fLocal_744[233] = 0.1715f;
	fLocal_1085[233] = 0.9851f;
	iLocal_2262[233] = 234;
	fLocal_1426[233] = 93588f;
	iLocal_4833[233] = joaat("minivan");
	Local_3511[235 /*3*/] = { 2750.021f, 4510.155f, 46.5679f };
	fLocal_62[235] = -0.0052f;
	fLocal_403[235] = 0.0092f;
	fLocal_744[235] = 0.9893f;
	fLocal_1085[235] = -0.1454f;
	iLocal_2262[235] = 236;
	fLocal_1426[235] = 94314f;
	iLocal_4833[235] = joaat("minivan");
	Local_3511[236 /*3*/] = { 2769.102f, 4543.756f, 45.7959f };
	fLocal_62[236] = -0.0094f;
	fLocal_403[236] = -0.001f;
	fLocal_744[236] = 0.1361f;
	fLocal_1085[236] = 0.9907f;
	iLocal_2262[236] = 237;
	fLocal_1426[236] = 94842f;
	iLocal_4833[236] = joaat("asterope");
	Local_3511[239 /*3*/] = { 2733.699f, 4556.13f, 45.3717f };
	fLocal_62[239] = -0.0009f;
	fLocal_403[239] = 0.0091f;
	fLocal_744[239] = 0.9966f;
	fLocal_1085[239] = -0.0817f;
	iLocal_2262[239] = 240;
	fLocal_1426[239] = 95304f;
	iLocal_4833[239] = joaat("minivan");
	Local_3511[241 /*3*/] = { 2735.279f, 4578.147f, 44.9966f };
	fLocal_62[241] = -0.0005f;
	fLocal_403[241] = 0.0079f;
	fLocal_744[241] = 0.999f;
	fLocal_1085[241] = -0.0442f;
	iLocal_2262[241] = 242;
	fLocal_1426[241] = 95700f;
	iLocal_4833[241] = joaat("minivan");
	Local_3511[243 /*3*/] = { 2733.351f, 4558.614f, 45.5368f };
	fLocal_62[243] = 0.0003f;
	fLocal_403[243] = 0.0089f;
	fLocal_744[243] = 0.9931f;
	fLocal_1085[243] = -0.1167f;
	iLocal_2262[243] = 244;
	fLocal_1426[243] = 96030f;
	iLocal_4833[243] = joaat("minivan");
	Local_3511[244 /*3*/] = { 2753.395f, 4625.864f, 44.4231f };
	fLocal_62[244] = -0.0065f;
	fLocal_403[244] = -0.0008f;
	fLocal_744[244] = 0.118f;
	fLocal_1085[244] = 0.993f;
	iLocal_2262[244] = 245;
	fLocal_1426[244] = 96558f;
	iLocal_4833[244] = joaat("minivan");
	Local_3511[245 /*3*/] = { 2756.684f, 4587.31f, 44.9834f };
	fLocal_62[245] = -0.0078f;
	fLocal_403[245] = -0.0012f;
	fLocal_744[245] = 0.128f;
	fLocal_1085[245] = 0.9917f;
	iLocal_2262[245] = 246;
	fLocal_1426[245] = 97086f;
	iLocal_4833[245] = joaat("asterope");
	Local_3511[246 /*3*/] = { 2745.113f, 4663.157f, 44.1967f };
	fLocal_62[246] = -0.0036f;
	fLocal_403[246] = -0.0003f;
	fLocal_744[246] = 0.1046f;
	fLocal_1085[246] = 0.9945f;
	iLocal_2262[246] = 247;
	fLocal_1426[246] = 97614f;
	iLocal_4833[246] = joaat("asterope");
	Local_3511[250 /*3*/] = { 2699.853f, 4746.02f, 43.9265f };
	fLocal_62[250] = 0.0002f;
	fLocal_403[250] = -0.0005f;
	fLocal_744[250] = 0.9962f;
	fLocal_1085[250] = -0.0871f;
	iLocal_2262[250] = 251;
	fLocal_1426[250] = 98934f;
	iLocal_4833[250] = joaat("minivan");
	Local_3511[254 /*3*/] = { 2698.028f, 4733.717f, 44.1639f };
	fLocal_62[254] = -0.0027f;
	fLocal_403[254] = -0.001f;
	fLocal_744[254] = 0.9943f;
	fLocal_1085[254] = -0.1066f;
	iLocal_2262[254] = 255;
	fLocal_1426[254] = 100188f;
	iLocal_4833[254] = joaat("minivan");
	Local_3511[256 /*3*/] = { 2682.878f, 4826.216f, 44.3648f };
	fLocal_62[256] = 0.0005f;
	fLocal_403[256] = -0.0007f;
	fLocal_744[256] = 0.9942f;
	fLocal_1085[256] = -0.1075f;
	iLocal_2262[256] = 257;
	fLocal_1426[256] = 100782f;
	iLocal_4833[256] = joaat("minivan");
	Local_3511[257 /*3*/] = { 2671.125f, 4851.187f, 44.1884f };
	fLocal_62[257] = -0.0018f;
	fLocal_403[257] = -0.0008f;
	fLocal_744[257] = 0.9956f;
	fLocal_1085[257] = -0.0933f;
	iLocal_2262[257] = 258;
	fLocal_1426[257] = 101178f;
	iLocal_4833[257] = joaat("minivan");
	Local_3511[258 /*3*/] = { 2670.646f, 4856.549f, 44.3695f };
	fLocal_62[258] = -0.0002f;
	fLocal_403[258] = -0.0006f;
	fLocal_744[258] = 0.9887f;
	fLocal_1085[258] = -0.1497f;
	iLocal_2262[258] = 259;
	fLocal_1426[258] = 101574f;
	iLocal_4833[258] = joaat("asterope");
	Local_3511[261 /*3*/] = { 2667.858f, 4869.266f, 44.22f };
	fLocal_62[261] = 0.0001f;
	fLocal_403[261] = -0.0005f;
	fLocal_744[261] = 0.9908f;
	fLocal_1085[261] = -0.1351f;
	iLocal_2262[261] = 262;
	fLocal_1426[261] = 101970f;
	iLocal_4833[261] = joaat("minivan");
	Local_3511[264 /*3*/] = { 2654.731f, 4947.659f, 44.4515f };
	fLocal_62[264] = 0f;
	fLocal_403[264] = -0.0006f;
	fLocal_744[264] = 0.9925f;
	fLocal_1085[264] = -0.1222f;
	iLocal_2262[264] = 265;
	fLocal_1426[264] = 103422f;
	iLocal_4833[264] = joaat("asterope");
	Local_3511[267 /*3*/] = { 2650.312f, 4943.588f, 44.5048f };
	fLocal_62[267] = 0.0013f;
	fLocal_403[267] = -0.0007f;
	fLocal_744[267] = 0.9957f;
	fLocal_1085[267] = -0.0931f;
	iLocal_2262[267] = 268;
	fLocal_1426[267] = 103950f;
	iLocal_4833[267] = joaat("minivan");
	Local_3511[274 /*3*/] = { 2618.794f, 5190.987f, 44.4486f };
	fLocal_62[274] = -0.0007f;
	fLocal_403[274] = -0.0001f;
	fLocal_744[274] = 0.1434f;
	fLocal_1085[274] = 0.9897f;
	iLocal_2262[274] = 275;
	fLocal_1426[274] = 107646f;
	iLocal_4833[274] = joaat("asterope");
	Local_3511[275 /*3*/] = { 2620.955f, 5181.92f, 44.3305f };
	fLocal_62[275] = -0.0006f;
	fLocal_403[275] = 0.0002f;
	fLocal_744[275] = 0.1561f;
	fLocal_1085[275] = 0.9877f;
	iLocal_2262[275] = 276;
	fLocal_1426[275] = 107844f;
	iLocal_4833[275] = joaat("asterope");
	Local_3511[276 /*3*/] = { 2587.116f, 5198.97f, 44.2932f };
	fLocal_62[276] = 0f;
	fLocal_403[276] = 0.0002f;
	fLocal_744[276] = 0.9877f;
	fLocal_1085[276] = -0.1562f;
	iLocal_2262[276] = 277;
	fLocal_1426[276] = 107976f;
	iLocal_4833[276] = joaat("minivan");
	Local_3511[279 /*3*/] = { 2600.965f, 5267.518f, 44.1361f };
	fLocal_62[279] = -0.0006f;
	fLocal_403[279] = 0f;
	fLocal_744[279] = 0.1429f;
	fLocal_1085[279] = 0.9897f;
	iLocal_2262[279] = 280;
	fLocal_1426[279] = 109164f;
	iLocal_4833[279] = joaat("minivan");
	Local_3511[283 /*3*/] = { 2553.794f, 5321.504f, 44.5224f };
	fLocal_62[283] = -0.0002f;
	fLocal_403[283] = 0.0005f;
	fLocal_744[283] = 0.9943f;
	fLocal_1085[283] = -0.1065f;
	iLocal_2262[283] = 284;
	fLocal_1426[283] = 110484f;
	iLocal_4833[283] = joaat("minivan");
	Local_3511[287 /*3*/] = { 2528.255f, 5399.929f, 44.2416f };
	fLocal_62[287] = 0.0002f;
	fLocal_403[287] = 0.0002f;
	fLocal_744[287] = 0.9906f;
	fLocal_1085[287] = -0.1368f;
	iLocal_2262[287] = 288;
	fLocal_1426[287] = 112002f;
	iLocal_4833[287] = joaat("asterope");
	Local_3511[290 /*3*/] = { 2534.561f, 5394.726f, 44.0934f };
	fLocal_62[290] = -0.0002f;
	fLocal_403[290] = 0.0006f;
	fLocal_744[290] = 0.9907f;
	fLocal_1085[290] = -0.1359f;
	iLocal_2262[290] = 291;
	fLocal_1426[290] = 113124f;
	iLocal_4833[290] = joaat("minivan");
	Local_3511[291 /*3*/] = { 2531.496f, 5407.476f, 44.0435f };
	fLocal_62[291] = 0f;
	fLocal_403[291] = -0.0001f;
	fLocal_744[291] = 0.9919f;
	fLocal_1085[291] = -0.127f;
	iLocal_2262[291] = 292;
	fLocal_1426[291] = 113256f;
	iLocal_4833[291] = joaat("emperor");
	Local_4608[1 /*3*/] = { 2297.076f, 1144.48f, 78.6363f };
	fLocal_1771[1] = 0.0023f;
	fLocal_1832[1] = -0.0176f;
	fLocal_1893[1] = 0.3532f;
	fLocal_1954[1] = 0.9354f;
	iLocal_3285[1] = 400;
	fLocal_2015[1] = 16000f;
	fLocal_2076[1] = 1f;
	iLocal_5200[1] = joaat("hauler");
	Local_4608[2 /*3*/] = { 2284.078f, 1167.931f, 78.0065f };
	fLocal_1771[2] = -0.0169f;
	fLocal_1832[2] = 0.0226f;
	fLocal_1893[2] = 0.3469f;
	fLocal_1954[2] = 0.9375f;
	iLocal_3285[2] = 402;
	fLocal_2015[2] = 17000f;
	fLocal_2076[2] = 1f;
	iLocal_5200[2] = joaat("packer");
	Local_4608[3 /*3*/] = { 1886.976f, 2084.243f, 55.6819f };
	fLocal_1771[3] = -0.0082f;
	fLocal_1832[3] = 0.0048f;
	fLocal_1893[3] = 0.0651f;
	fLocal_1954[3] = 0.9978f;
	iLocal_3285[3] = 404;
	fLocal_2015[3] = 36000f;
	fLocal_2076[3] = 1f;
	iLocal_5200[3] = joaat("coach");
	Local_4608[4 /*3*/] = { 1881.849f, 2073.808f, 54.9369f };
	fLocal_1771[4] = -0.0051f;
	fLocal_1832[4] = -0.0067f;
	fLocal_1893[4] = 0.0702f;
	fLocal_1954[4] = 0.9975f;
	iLocal_3285[4] = 405;
	fLocal_2015[4] = 36000f;
	fLocal_2076[4] = 1f;
	iLocal_5200[4] = joaat("bus");
	Local_4608[5 /*3*/] = { 2893.288f, 3642.327f, 52.8881f };
	fLocal_1771[5] = 0.0015f;
	fLocal_1832[5] = -0.0036f;
	fLocal_1893[5] = -0.1382f;
	fLocal_1954[5] = 0.9904f;
	iLocal_3285[5] = 406;
	fLocal_2015[5] = 72000f;
	fLocal_2076[5] = 1f;
	iLocal_5200[5] = joaat("mule");
}

int func_578(char* sParam0)//Position - 0x70A62
{
	if (!func_580(sParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(sParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
		{
			func_579(sParam0, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_579(char* sParam0, bool bParam1)//Position - 0x70A92
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_6258;
	iVar2 = 0;
	bVar3 = false;
	while (iVar2 < iVar1 && !bVar3)
	{
		if (bParam1)
		{
			if (iLocal_6258[iVar2] == 0)
			{
				iLocal_6258[iVar2] = iVar0;
				bVar3 = true;
			}
		}
		else if (iLocal_6258[iVar2] == iVar0)
		{
			iLocal_6258[iVar2] = 0;
			bVar3 = true;
		}
		iVar2++;
	}
}

int func_580(char* sParam0)//Position - 0x70AFC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_6258;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_6258[iVar2] == iVar0)
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_581()//Position - 0x70B38
{
	if (func_316())
	{
		func_397(1, "stageRace", 0, 0, func_309(1), 1);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(1, 0);
		MISC::ENABLE_DISPATCH_SERVICE(2, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		MISC::ENABLE_DISPATCH_SERVICE(4, 0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
		{
			iLocal_5845 = func_584(joaat("entityxf"), Local_5813, 0f);
			GlobalFunc_534(iLocal_5845, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5845, 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5845, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5845, 2);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5845, 0, 0);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5845, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5838))
		{
			func_297(&iLocal_5838, joaat("ig_car3guy1"), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 0, 1);
			PED::SET_PED_INTO_VEHICLE(iLocal_5838, iLocal_5845, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5838, iLocal_5873);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5838, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_car3guy1"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
		{
			iLocal_5846 = func_584(joaat("cheetah"), Local_5816, -1.3639f);
			GlobalFunc_534(iLocal_5846, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5846, 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5846, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5846, 2);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5846, 0, 0);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5846, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5839))
		{
			func_297(&iLocal_5839, joaat("ig_car3guy2"), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 0, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 4, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(iLocal_5839, 1, 0, 0, false);
			PED::SET_PED_INTO_VEHICLE(iLocal_5839, iLocal_5846, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5839, iLocal_5873);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5839, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_car3guy2"));
		}
		GlobalFunc_173(&uLocal_5929, 4, iLocal_5838, "CST3RACER1", 0, 1);
		GlobalFunc_173(&uLocal_5929, 5, iLocal_5839, "CST3RACER2", 0, 1);
		func_300(PLAYER::PLAYER_ID(), 0, 0);
		fLocal_5835 = 1f;
		iLocal_5794 = 0;
		CUTSCENE::REQUEST_CUTSCENE("Car_steal_3_mcs_1", 4);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
		func_543(1);
		if (func_315())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_11086("Franklin", func_309(1), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_dies", iLocal_5838, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Racer_that_dies", 8, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_runsaway", iLocal_5839, 0);
		}
		switch (iLocal_5732)
		{
			case 0:
				if (GlobalFunc_Has_Cutscene_Loaded())
				{
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					GlobalFunc_5105();
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5844, "Franklins_car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5845, "Car_Racer_runsaway", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5846, "Car_Racer_dies", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5838, "Racer_that_dies", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5839, "Racer_that_runsaway", 0, 0, 0);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_5844, 0, 0, 0f);
					GlobalFunc_8316(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					func_312(0);
					CAM::STOP_GAMEPLAY_HINT(1);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					MISC::CLEAR_AREA(2570.577f, 364.8711f, 107.4569f, 1000f, 1, 0, 0, 0);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					func_301();
				}
				break;
			
			case 1:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					STREAMING::_0xEF39EE20C537E98C(2571.3f, 354.8937f, 110.0358f, GlobalFunc_107(2215.981f, 0.427734f, -0.092331f));
				}
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_car", 0))
				{
					RECORDING::_0x81CBAE94390F9F89();
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, -1);
					}
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_5844, 1);
					func_739("WheelCompression[vehPlayer](Car_steal_3_mcs_1)", 1);
				}
				if (!func_742("WheelCompression[vehPlayer](Car_steal_3_mcs_1)"))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_5844, 1, 1, 1);
				}
				if (!func_742("RacerRev"))
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("RACE_IGNITIONS", 0))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((12.38428f * 1000f)))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_STEAL_1_IGNITIONS", iLocal_5845, "CAR_STEAL_1_SOUNDSET", 0, 0);
							func_739("RacerRev", 1);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Car_Racer_runsaway", 0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5845, 500, sLocal_5832, 1);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_5845, 0f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_5845, 1);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_5845, 1);
					func_739("Car_steal_3_mcs_1:Car_Racer_runsaway", 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Car_Racer_dies", 0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5846, 501, sLocal_5832, 1);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_5846, 0f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_5846, 1);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_5846, 1);
					func_739("Car_steal_3_mcs_1:Car_Racer_dies", 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Racer_that_runsaway", 0))
				{
					func_739("Car_steal_3_mcs_1:Racer_that_runsaway", 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Racer_that_dies", 0))
				{
					func_739("Car_steal_3_mcs_1:Racer_that_dies", 1);
				}
				if (func_742("Car_steal_3_mcs_1:Car_Racer_runsaway") && func_742("Car_steal_3_mcs_1:Racer_that_runsaway"))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_5838, iLocal_5845, 0))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_5838, iLocal_5845, -1);
					}
				}
				if (func_742("Car_steal_3_mcs_1:Car_Racer_dies") && func_742("Car_steal_3_mcs_1:Racer_that_dies"))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_5839, iLocal_5846, 0))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_5839, iLocal_5846, -1);
					}
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (iLocal_5791)
					{
						RECORDING::_0x81CBAE94390F9F89();
						iLocal_5791 = 0;
					}
					func_20(1);
					func_30();
				}
				break;
			}
	}
	if (func_29())
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_312(0);
		}
		GlobalFunc_8316(0, 1, 1, 0);
		CAM::STOP_GAMEPLAY_HINT(1);
		func_785();
		iLocal_5794 = 1;
		iLocal_6096++;
	}
}



int func_584(int iParam0, struct<3> Param1, int iParam4)//Position - 0x710FC
{
	int iVar0;
	
	if (iParam0 == joaat("monroe"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, iParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 89, 89);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 88, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " FA5T66 ");
	}
	else if (iParam0 == joaat("cheetah"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, iParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 62, 62);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 68, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " SDTM1YP");
	}
	else if (iParam0 == joaat("stinger"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, iParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 27, 27);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 36, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "ALPHADOG");
		VEHICLE::SET_VEHICLE_EXTRA(iVar0, 1, true);
	}
	else if (iParam0 == joaat("jb700"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, iParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "  4G3NT");
	}
	else if (iParam0 == joaat("entityxf"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, iParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 38, 38);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 37, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " MKB652 ");
	}
	else if (iParam0 == joaat("ztype"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, iParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 0, 0);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 10, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " V1NTAG3");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, 0, 0);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
	}
	return iVar0;
}

void func_585()//Position - 0x71285
{
	if (func_316())
	{
		func_300(PLAYER::PLAYER_ID(), 1, 0);
		GlobalFunc_52(0, 1);
		iLocal_5794 = 1;
		PED::ADD_SCENARIO_BLOCKING_AREA(Vector(116.4686f, 361.8055f, 2581.106f) - Vector(10f, 25f, 25f), Vector(116.4686f, 361.8055f, 2581.106f) + Vector(10f, 25f, 25f), 0, 1, 1, 1);
		PATHFIND::SET_ROADS_IN_AREA(Vector(116.4686f, 361.8055f, 2581.106f) - Vector(10f, 25f, 25f), Vector(116.4686f, 361.8055f, 2581.106f) + Vector(10f, 25f, 25f), 0, 1);
		if (func_315())
		{
			GlobalFunc_2510(PLAYER::PLAYER_PED_ID(), 117.2437f, -405.8348f, 40.2589f, 172.2073f, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5849))
			{
				STREAMING::REQUEST_MODEL(joaat("adder"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("adder")))
				{
					SYSTEM::WAIT(0);
				}
				func_298(&iLocal_5849, joaat("adder"), 119.2013f, -398.4865f, 40.1208f, -171.4098f, -1, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_5849, 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_5849, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5849, 10);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5849, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5840))
			{
				STREAMING::REQUEST_MODEL(GlobalFunc_4946(29));
				while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(29)))
				{
					SYSTEM::WAIT(0);
				}
				while (!GlobalFunc_6790(&iLocal_5840, 29, iLocal_5849, -1, 1))
				{
					func_312(0);
				}
				PED::SET_PED_COMPONENT_VARIATION(iLocal_5840, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_5840, 4, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_5840, 10, 1, 0, 0);
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5840))
				{
					func_312(0);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5840, iLocal_5872);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5840, 1);
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_5840, iLocal_5849, 30f, 786599);
				PED::SET_PED_KEEP_TASK(iLocal_5840, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(29));
			}
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			func_312(10);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[24 /*31*/]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(Global_34036[24 /*31*/], Global_34036[24 /*31*/].f_5, Global_34036[24 /*31*/].f_2, 1, 1, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[24 /*31*/]))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Global_34036[24 /*31*/]) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Global_34036[24 /*31*/]) != 4)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[24 /*31*/], 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[24 /*31*/], 4, 0, 1);
			}
		}
		func_634(80, 4);
		switch (iLocal_5732)
		{
			case 0:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_DEVIN_DRIVES_AWAY"))
				{
					AUDIO::START_AUDIO_SCENE("CAR_1_DEVIN_DRIVES_AWAY");
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5849) && !ENTITY::IS_ENTITY_DEAD(iLocal_5849))
				{
					if (!func_742("CAR_1_DEVINS_CAR_GROUP"))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_5849, "CAR_1_DEVINS_CAR_GROUP", 0);
						func_739("CAR_1_DEVINS_CAR_GROUP", 1);
					}
				}
				if (!func_742("CST3_Phone"))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2597.919f, 361.8182f, 106.4276f, 1) < 1500f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2597.919f, 361.8182f, 106.4276f, 1) > 200f)
					{
						GlobalFunc_173(&uLocal_5929, 3, func_309(1), "FRANKLIN", 0, 1);
						GlobalFunc_173(&uLocal_5929, 1, 0, "MICHAEL", 0, 1);
						GlobalFunc_10638(&uLocal_5929, 0, "CST3AUD", "CST3_Phone", 8, 1, 0, 0, 0);
						func_739("CST3_Phone", 1);
					}
				}
				if (!func_742("LeaveVehicle"))
				{
					func_596(&uLocal_5874, Local_5825, 0f, 0f, 2f, 1, iLocal_5844, "S3_GOTO", "CMN_GENGETIN", "CMN_GENGETBCK", 1, 0, 1, -1);
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_RACE"))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844))
					{
						AUDIO::START_AUDIO_SCENE("CAR_1_GET_TO_RACE");
					}
				}
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2558.926f, 355.2874f, 107.1211f, 2598.12f, 353.7659f, 121.9944f, 35f, 0, 1, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844)) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (GlobalFunc_552(1, 0, 1))
					{
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_START_SPHERE(2580.911f, 354.0207f, 107.457f, 50f, 0);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5844, 1, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5838))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_5838);
							TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_5838, sLocal_5836, "racer_argue_action_01", Vector(107.662f, 358.981f, 2581.546f) + Vector(0f, 0f, -0.45f), 0f, 0f, 90f, 8f, -8f, -1, 536576, 0.7f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_5838, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5839))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_5839);
							TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_5839, sLocal_5836, "racer_argue_action_02", 2581.546f, 358.981f, 107.662f, 0f, 0f, 90f, 8f, -8f, -1, 536576, 0.7f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_5839, 0, 0);
						}
						RECORDING::_0x293220DA1B46CEBC(10f, 10f, 3);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5844, 1, sLocal_5831, 1);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_5844, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_5844, 0.75f);
						if (!CAM::DOES_CAM_EXIST(uLocal_5864))
						{
							iLocal_5864 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
						}
						CAM::SET_CAM_PARAMS(iLocal_5864, 2564.087f, 365.7411f, 110.5641f, -5.48984f, 0f, -143.2919f, 27.32363f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(iLocal_5864, 2564.048f, 365.79f, 109.912f, -10.08791f, 0f, -122.9544f, 27.32363f, 3500, 3, 3, 2);
						CAM::SHAKE_CAM(iLocal_5864, "HAND_SHAKE", 0.4f);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(1);
						MISC::CLEAR_AREA(2570.577f, 364.8711f, 107.4569f, 1000f, 1, 0, 0, 0);
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						iLocal_5794 = 0;
						func_300(PLAYER::PLAYER_ID(), 0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, -1);
						func_739("FranklinExitCar", 1);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_RACE"))
						{
							AUDIO::STOP_AUDIO_SCENE("CAR_1_GET_TO_RACE");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_PARK_UP_CUTSCENE"))
						{
							AUDIO::START_AUDIO_SCENE("CAR_1_PARK_UP_CUTSCENE");
						}
						func_301();
					}
				}
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2559.319f, 370.3448f, 107.121f, 2598.887f, 368.6747f, 122.0023f, 35f, 0, 1, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844)) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (GlobalFunc_552(1, 0, 1))
					{
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_START_SPHERE(2580.911f, 354.0207f, 107.457f, 50f, 0);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5844, 1, 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5844, 2, sLocal_5831, 1);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_5844, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_5844, 0.75f);
						if (!CAM::DOES_CAM_EXIST(iLocal_5864))
						{
							iLocal_5864 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
						}
						CAM::SET_CAM_PARAMS(iLocal_5864, 2595.213f, 341.7507f, 110.4466f, 9.125167f, 0.100839f, 16.44817f, 39.31348f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(iLocal_5864, 2593.474f, 340.793f, 109.0829f, 2.509332f, 0.100839f, 29.0332f, 39.31348f, SYSTEM::ROUND(VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_5831)), 1, 1, 2);
						CAM::SHAKE_CAM(iLocal_5864, "HAND_SHAKE", 0.4f);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(1);
						MISC::CLEAR_AREA(2570.577f, 364.8711f, 107.4569f, 1000f, 1, 0, 0, 0);
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						iLocal_5794 = 0;
						HUD::DISPLAY_RADAR(0);
						HUD::DISPLAY_HUD(0);
						func_300(PLAYER::PLAYER_ID(), 0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, -1);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_RACE"))
						{
							AUDIO::STOP_AUDIO_SCENE("CAR_1_GET_TO_RACE");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_PARK_UP_CUTSCENE"))
						{
							AUDIO::START_AUDIO_SCENE("CAR_1_PARK_UP_CUTSCENE");
						}
						if (!func_742("CST3_MCS1_LI"))
						{
							if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
							{
								GlobalFunc_173(&uLocal_5929, 4, iLocal_5838, "CST3RACER1", 0, 1);
								GlobalFunc_173(&uLocal_5929, 5, iLocal_5839, "CST3RACER2", 0, 1);
								iLocal_6095 = 0;
								iLocal_6094 = 0;
								func_373("CST3_MCS1_LI", 7, 1, 1, 0);
							}
						}
						func_312(SYSTEM::ROUND(VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_5831)));
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5844);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5838))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_5838);
							TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_5838, sLocal_5836, "racer_argue_action_01", Vector(107.662f, 358.981f, 2581.546f) + Vector(0f, 0f, -0.45f), 0f, 0f, 90f, 8f, -8f, -1, 536576, 0f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_5838, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5839))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_5839);
							TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_5839, sLocal_5836, "racer_argue_action_02", 2581.546f, 358.981f, 107.662f, 0f, 0f, 90f, 8f, -8f, -1, 536576, 0f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_5839, 0, 0);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_5844, 1, sLocal_5831, 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_5844, 1000f);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_5844, 0.75f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_5844, 1);
						CAM::SET_CAM_PARAMS(iLocal_5864, 2564.07f, 365.7609f, 110.2885f, -7.603287f, -0.187008f, -134.6351f, 27.32363f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(iLocal_5864, 2564.048f, 365.79f, 109.912f, -10.08791f, 0f, -122.9544f, 27.32363f, 2500, 3, 3, 2);
						func_312(0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5838))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_5838, sLocal_5836, "racer_argue_action_01", 3))
							{
								ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_5838, sLocal_5836, "racer_argue_action_01", 0.7f);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5839))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_5839, sLocal_5836, "racer_argue_action_02", 3))
							{
								ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_5839, sLocal_5836, "racer_argue_action_02", 0.7f);
							}
						}
						func_739("FranklinExitCar", 1);
						func_301();
					}
				}
				break;
			
			case 1:
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844) || (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5844) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_5844)) / 100f) * 90f)))
				{
					if (func_742("FranklinExitCar"))
					{
						TASK::TASK_LEAVE_VEHICLE(func_309(1), iLocal_5844, 64);
						func_312(1000);
					}
					func_30();
				}
				break;
		}
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_5838) && !PED::IS_PED_INJURED(iLocal_5838)) && ENTITY::DOES_ENTITY_EXIST(iLocal_5839)) && !PED::IS_PED_INJURED(iLocal_5839))
		{
			if (!func_742("CST3_MCS1_LI"))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_5838, sLocal_5836, "racer_argue_action_01", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_5839, sLocal_5836, "racer_argue_action_02", 3))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_6094) > iLocal_6095)
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
						{
							if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2581.72f, 336.2517f, 112.4433f, 25f, 35f, 8f, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_5844) <= 25f) || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2581.72f, 336.2517f, 112.4433f, 35f, 60f, 8f, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_5844) > 25f))
							{
								GlobalFunc_173(&uLocal_5929, 4, iLocal_5838, "CST3RACER1", 0, 1);
								GlobalFunc_173(&uLocal_5929, 5, iLocal_5839, "CST3RACER2", 0, 1);
								iLocal_6095 = 0;
								iLocal_6094 = 0;
								func_373("CST3_MCS1_LI", 7, 1, 1, 0);
							}
						}
					}
				}
			}
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
			{
				if (((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2581.72f, 336.2517f, 112.4433f, 25f, 35f, 8f, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_5844) <= 25f) || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2581.72f, 336.2517f, 112.4433f, 35f, 60f, 8f, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_5844) > 25f)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_5844, 0)) && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > GlobalFunc_739((func_595(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2581.72f, 336.2517f, 113.4433f) - 30f), 0f, 360f)) && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < GlobalFunc_739((func_595(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2581.72f, 336.2517f, 113.4433f) + 30f), 0f, 360f))
				{
					if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::SET_GAMEPLAY_COORD_HINT(ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), -1, 1500, 2000, 1511508800);
					}
				}
				else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(0);
				}
			}
		}
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_5840) && !PED::IS_PED_INJURED(iLocal_5840)) && ENTITY::DOES_ENTITY_EXIST(iLocal_5849)) && !ENTITY::IS_ENTITY_DEAD(iLocal_5849))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5840, 1), 1) > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_5840);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_5849);
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2597.919f, 361.8182f, 106.4276f, 1) < 100f && !GlobalFunc_2233())
		{
			if (((ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && ENTITY::DOES_ENTITY_EXIST(iLocal_5838)) && ENTITY::DOES_ENTITY_EXIST(iLocal_5846)) && ENTITY::DOES_ENTITY_EXIST(iLocal_5839))
			{
				CUTSCENE::REQUEST_CUTSCENE("Car_steal_3_mcs_1", 8);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					GlobalFunc_11086("Franklin", func_309(1), 0, 2);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_dies", iLocal_5838, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Racer_that_dies", 8, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_runsaway", iLocal_5839, 0);
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2597.919f, 361.8182f, 106.4276f, 1) > 120f || GlobalFunc_2233())
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2597.919f, 361.8182f, 106.4276f, 1) < 300f)
		{
			if (func_578(sLocal_5836))
			{
				if (func_714(joaat("entityxf")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
					{
						iLocal_5845 = func_584(joaat("entityxf"), Local_5813, 0f);
						GlobalFunc_534(iLocal_5845, 0);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5845, 1);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5845, 1);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5845, 3);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5845, 0, 0);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5845, 1, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
					}
				}
				if (func_714(joaat("ig_car3guy1")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5838))
					{
						func_297(&iLocal_5838, joaat("ig_car3guy1"), 2581.546f, 358.981f, 107.662f, 0, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5838, iLocal_5873);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5838, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_car3guy1"));
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_5838, sLocal_5836, "racer_argue_01", 2581.546f, 358.981f, 107.662f, 0f, 0f, 90f, 8f, -8f, -1, 12289, 0f, 2, 0);
						GlobalFunc_173(&uLocal_5929, 4, iLocal_5838, "CST3RACER1", 0, 1);
					}
				}
				if (func_714(joaat("cheetah")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
					{
						iLocal_5846 = func_584(joaat("cheetah"), Local_5816, -1.3639f);
						GlobalFunc_534(iLocal_5846, 1);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5846, 1);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5846, 1);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5846, 3);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5846, 0, 0);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5846, 1, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
					}
				}
				if (func_714(joaat("ig_car3guy2")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5839))
					{
						func_297(&iLocal_5839, joaat("ig_car3guy2"), 2581.546f, 358.981f, 107.662f, 0, 1);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 4, 0, 0, 0);
						PED::SET_PED_PROP_INDEX(iLocal_5839, 1, 0, 0, false);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5839, iLocal_5873);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5839, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_car3guy2"));
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_5839, sLocal_5836, "racer_argue_02", 2581.546f, 358.981f, 107.662f, 0f, 0f, 90f, 8f, -8f, -1, 12289, 0f, 2, 0);
						GlobalFunc_173(&uLocal_5929, 5, iLocal_5839, "CST3RACER2", 0, 1);
					}
				}
			}
			func_647(500, sLocal_5832);
			func_647(501, sLocal_5832);
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2597.919f, 361.8182f, 106.4276f, 1) < 100f)
		{
			if (((((((ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && !ENTITY::IS_ENTITY_DEAD(iLocal_5845)) && ENTITY::DOES_ENTITY_EXIST(iLocal_5846)) && !ENTITY::IS_ENTITY_DEAD(iLocal_5846)) && ENTITY::DOES_ENTITY_EXIST(iLocal_5838)) && !PED::IS_PED_INJURED(iLocal_5838)) && ENTITY::DOES_ENTITY_EXIST(iLocal_5839)) && !PED::IS_PED_INJURED(iLocal_5839))
			{
				if (((ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_5845) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_5846)) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_5838)) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_5839))
				{
					if (((((((PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()) && (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_5845 || PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_5846)) || (!ENTITY::IS_ENTITY_DEAD(iLocal_5845) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5845, PLAYER::PLAYER_PED_ID(), 1))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_5846) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5846, PLAYER::PLAYER_PED_ID(), 1))) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_5845, Local_5813, 0.1f, 0.1f, 2f, 0, 1, 0)) || (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5845, 0f, 2.15f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5845, 0f, -2.07f, 5f), 2f, 0, 1, 0)))) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_5846) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_5846, Local_5816, 0.1f, 0.1f, 2f, 0, 1, 0)) || (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5846, 0f, 2.63f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_5846, 0f, -2.14f, 5f), 2f, 0, 1, 0)))) || (((ENTITY::DOES_ENTITY_EXIST(iLocal_5838) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_5838, sLocal_5836, "racer_argue_01", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_5838, sLocal_5836, "racer_argue_action_01", 3)) && PED::IS_PED_RAGDOLL(iLocal_5838))) || (((ENTITY::DOES_ENTITY_EXIST(iLocal_5839) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_5839, sLocal_5836, "racer_argue_02", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_5839, sLocal_5836, "racer_argue_action_02", 3)) && PED::IS_PED_RAGDOLL(iLocal_5839)))
					{
						if (((ENTITY::DOES_ENTITY_EXIST(iLocal_5838) && !PED::IS_PED_INJURED(iLocal_5838)) && (TASK::GET_SCRIPT_TASK_STATUS(iLocal_5838, -258271821) == 1 || (TASK::GET_SCRIPT_TASK_STATUS(iLocal_5838, 242628503) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_5838) == 2))) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_5839) && !PED::IS_PED_INJURED(iLocal_5839)) && (TASK::GET_SCRIPT_TASK_STATUS(iLocal_5839, -258271821) == 1 || (TASK::GET_SCRIPT_TASK_STATUS(iLocal_5839, 242628503) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_5839) == 2))))
						{
							iLocal_6097 = 20;
						}
						else
						{
							iLocal_6097 = 19;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5838) && !PED::IS_PED_INJURED(iLocal_5838))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_5838, 2112745624) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_5838, -1273030092) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_5838);
								if ((ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && !ENTITY::IS_ENTITY_DEAD(iLocal_5845)) && PED::IS_PED_IN_VEHICLE(iLocal_5838, iLocal_5845, 0))
								{
									TASK::TASK_VEHICLE_MISSION(iLocal_5838, iLocal_5845, iLocal_5844, 8, 50f, 262144, 1f, 1f, 1);
								}
								else
								{
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_5838, PLAYER::PLAYER_PED_ID());
								}
								PED::SET_PED_KEEP_TASK(iLocal_5838, 1);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5839) && !PED::IS_PED_INJURED(iLocal_5839))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_5839, 2112745624) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_5839, -1273030092) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_5839);
								if ((ENTITY::DOES_ENTITY_EXIST(iLocal_5846) && !ENTITY::IS_ENTITY_DEAD(iLocal_5846)) && PED::IS_PED_IN_VEHICLE(iLocal_5839, iLocal_5846, 0))
								{
									TASK::TASK_VEHICLE_MISSION(iLocal_5839, iLocal_5846, iLocal_5844, 8, 50f, 262144, 1f, 1f, 1);
								}
								else
								{
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_5839, PLAYER::PLAYER_PED_ID());
								}
								PED::SET_PED_KEEP_TASK(iLocal_5839, 1);
							}
						}
						func_312(500);
						func_1();
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2578.795f, 398.8773f, 106.4573f, 2576.777f, 331.0414f, 117.4527f, 75f, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5838))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_5838, sLocal_5836, "racer_argue_01", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_5866);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_5836, "racer_argue_action_01", 2581.546f, 358.981f, 107.662f, 0f, 0f, 90f, 4f, -8f, -1, 12288, 0f, 2, 0);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_5845, -1, -1, 1f, 1, 0);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_5845, 30f, 786599);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_5866);
					iLocal_6094 = MISC::GET_GAME_TIMER();
					iLocal_6095 = 7500;
					TASK::TASK_PERFORM_SEQUENCE(iLocal_5838, uLocal_5866);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_5866);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5839))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_5839, sLocal_5836, "racer_argue_02", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_5866);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_5836, "racer_argue_action_02", 2581.546f, 358.981f, 107.662f, 0f, 0f, 90f, 4f, -8f, -1, 12288, 0f, 2, 0);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_5846, -1, -1, 1f, 1, 0);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_5846, 30f, 786599);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_5866);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_5839, uLocal_5866);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_5866);
					iLocal_6094 = MISC::GET_GAME_TIMER();
					iLocal_6095 = 7500;
				}
			}
		}
	}
	if (func_29())
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_RACE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_GET_TO_RACE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_PARK_UP_CUTSCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_PARK_UP_CUTSCENE");
		}
		func_588(&uLocal_5874, 1, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		GlobalFunc_5744();
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		GlobalFunc_5105();
		func_323(&uLocal_5857);
		GlobalFunc_2240(&iLocal_5840);
		GlobalFunc_2240(&iLocal_5841);
		GlobalFunc_2244(&iLocal_5849);
		GlobalFunc_2244(&iLocal_5850);
		iLocal_6096++;
	}
}



void func_588(int iParam0, bool bParam1, bool bParam2)//Position - 0x72A34
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	GlobalFunc_629(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
		}
		GlobalFunc_628(iVar0, uParam0);
		GlobalFunc_627(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), iVar0);
			MISC::CLEAR_BIT(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::REMOVE_BLIP(uParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_17[iVar0], 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 32, 1);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 305, 0);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], GlobalFunc_468()) && iParam0->f_17[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					PED::REMOVE_PED_FROM_GROUP(iParam0->f_17[iVar0]);
				}
			}
			if (!MISC::IS_BIT_SET(iParam0->f_13, 29))
			{
				PED::SET_PED_USING_ACTION_MODE(iParam0->f_17[iVar0], 0, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		}
	}
	iParam0->f_21 = 0;
}







float func_595(struct<3> Param0, struct<3> Param3)//Position - 0x72CEE
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1);
}

int func_596(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)//Position - 0x72D0D
{
	return func_597(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, 0, 0, 0, iParam8, sParam9, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_597(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x72D5C
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
	if (func_613(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
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
					if ((!GlobalFunc_5172(iParam0, 1) && !GlobalFunc_633(iParam0)) && !MISC::IS_BIT_SET(iParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(iParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								GlobalFunc_5130(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(iParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(iParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								GlobalFunc_5130(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*iParam0))
						{
							HUD::REMOVE_BLIP(iParam0);
						}
						iParam0->f_5 = func_392(Var3, 0);
						if (!iParam31 == -1)
						{
							HUD::SET_BLIP_SPRITE(iParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							GlobalFunc_632(iParam0->f_5, iParam0);
						}
					}
					else if (!GlobalFunc_537(Var3, HUD::GET_BLIP_COORDS(iParam0->f_5), 0.1f))
					{
						HUD::SET_BLIP_COORDS(iParam0->f_5, Var3);
						if (bParam35)
						{
							GlobalFunc_632(iParam0->f_5, iParam0);
						}
					}
					if (!GlobalFunc_5172(iParam0, 2))
					{
						if (!MISC::IS_BIT_SET(iParam0->f_13, 2))
						{
							GlobalFunc_5145(iParam0, sParam19, 0);
							MISC::SET_BIT(&(iParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (MISC::IS_BIT_SET(iParam0->f_13, 13))
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
							if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar2], GlobalFunc_468()) || !GlobalFunc_5144(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (GlobalFunc_5143(iParam0))
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
								func_588(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam18))
			{
				if ((bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!MISC::IS_BIT_SET(iParam0->f_13, 9) && !MISC::IS_BIT_SET(iParam0->f_13, 22)))
				{
					GlobalFunc_635(sParam24);
					GlobalFunc_635(sParam27);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5) || HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						HUD::REMOVE_BLIP(iParam0);
						GlobalFunc_635(sParam19);
					}
					if ((!GlobalFunc_5172(iParam0, 1) && !GlobalFunc_633(iParam0)) && !MISC::IS_BIT_SET(iParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(iParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								GlobalFunc_5130(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(iParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(iParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								GlobalFunc_5130(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(*iParam0))
						{
							if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(iParam0->f_5));
								GlobalFunc_635(sParam19);
							}
							*iParam0 = func_598(iParam18, 0, 0);
							HUD::SET_BLIP_DISPLAY(*iParam0, 2);
							if (!MISC::IS_BIT_SET(iParam0->f_13, 4))
							{
								GlobalFunc_632(*iParam0, iParam0);
							}
						}
						if (!GlobalFunc_5172(iParam0, 2))
						{
							if (!MISC::IS_BIT_SET(iParam0->f_13, 3))
							{
								GlobalFunc_5145(iParam0, sParam24, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (MISC::IS_BIT_SET(iParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam27))
								{
									if (!MISC::IS_BIT_SET(iParam0->f_13, 4))
									{
										GlobalFunc_5145(iParam0, sParam27, 0);
										MISC::SET_BIT(&(iParam0->f_13), 4);
									}
								}
								else if (!MISC::IS_BIT_SET(iParam0->f_13, 4))
								{
									GlobalFunc_5145(iParam0, sParam24, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
								if (!MISC::IS_BIT_SET(iParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
									{
										GlobalFunc_5130(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_5));
					GlobalFunc_635(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!GlobalFunc_5172(iParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!MISC::IS_BIT_SET(iParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8);
									if (!PED::IS_PED_INJURED(iParam0->f_17[iVar9]))
									{
										GlobalFunc_5130(iParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									GlobalFunc_5145(iParam0, "MORE_SEATS", 0);
									MISC::SET_BIT(&(iParam0->f_13), 13);
								}
							}
							else if (!MISC::IS_BIT_SET(iParam0->f_13, 3))
							{
								GlobalFunc_5145(iParam0, sParam24, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (!MISC::IS_BIT_SET(iParam0->f_13, 4))
							{
								if (MISC::IS_BIT_SET(iParam0->f_13, 9))
								{
									GlobalFunc_5145(iParam0, sParam27, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!GlobalFunc_5172(iParam0, 2))
					{
						if (!MISC::IS_BIT_SET(iParam0->f_13, 3))
						{
							GlobalFunc_5145(iParam0, sParam24, 0);
							MISC::SET_BIT(&(iParam0->f_13), 3);
							MISC::CLEAR_BIT(&(iParam0->f_13), 4);
						}
						else if (MISC::IS_BIT_SET(iParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam27))
							{
								if (!MISC::IS_BIT_SET(iParam0->f_13, 4))
								{
									GlobalFunc_5145(iParam0, sParam27, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
							else if (!MISC::IS_BIT_SET(iParam0->f_13, 4))
							{
								GlobalFunc_5145(iParam0, sParam24, 0);
								MISC::SET_BIT(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iParam0->f_13, 0))
		{
			MISC::CLEAR_BIT(&(iParam0->f_13), 0);
		}
		GlobalFunc_635(sParam19);
		GlobalFunc_635(sParam24);
		GlobalFunc_635(sParam27);
		GlobalFunc_635(sParam24);
		GlobalFunc_635("LOSE_WANTED");
		if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*iParam0))
		{
			HUD::REMOVE_BLIP(iParam0);
		}
	}
	MISC::CLEAR_BIT(&(iParam0->f_13), 11);
	MISC::CLEAR_BIT(&(iParam0->f_13), 12);
	return 0;
}

int func_598(int iParam0, bool bParam1, bool bParam2)//Position - 0x736D2
{
	return func_321(iParam0, !bParam1, bParam2);
}















int func_613(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x73A7F
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
							GlobalFunc_5130(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
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
								uParam0->f_1[iVar0] = func_598(uParam0->f_17[iVar0], 0, 0);
								HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									GlobalFunc_632(uParam0->f_1[iVar0], uParam0);
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
								GlobalFunc_632(uParam0->f_1[iVar0], uParam0);
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
										uParam0->f_1[iVar0] = func_598(uParam0->f_17[iVar0], 0, 0);
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





















void func_634(int iParam0, int iParam1)//Position - 0x7525E
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
			func_636(iParam0);
			if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				GlobalFunc_510(iParam0);
			}
		}
	}
}


void func_636(int iParam0)//Position - 0x753A5
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
		func_640(iParam0, &Var0);
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




void func_640(int iParam0, var uParam1)//Position - 0x75BC7
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







int func_647(int iParam0, char* sParam1)//Position - 0x79241
{
	if (!func_649(iParam0, sParam1))
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1))
		{
			func_648(iParam0, sParam1, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_648(int iParam0, char* sParam1, bool bParam2)//Position - 0x7927C
{
	char cVar0[16];
	int iVar4;
	int iVar5;
	bool bVar6;
	
	IntToString(&cVar0, iParam0, 16);
	StringConCat(&cVar0, sParam1, 16);
	iVar4 = MISC::GET_HASH_KEY(&cVar0);
	iVar5 = 0;
	bVar6 = false;
	while (iVar5 < iLocal_6227 && !bVar6)
	{
		if (bParam2)
		{
			if (iLocal_6227[iVar5] == 0)
			{
				iLocal_6227[iVar5] = iVar4;
				bVar6 = true;
			}
		}
		else if (iLocal_6227[iVar5] == iVar4)
		{
			iLocal_6227[iVar5] = 0;
			bVar6 = true;
		}
		iVar5++;
	}
}

int func_649(int iParam0, char* sParam1)//Position - 0x792EE
{
	char cVar0[16];
	int iVar4;
	int iVar5;
	
	IntToString(&cVar0, iParam0, 16);
	StringConCat(&cVar0, sParam1, 16);
	iVar4 = MISC::GET_HASH_KEY(&cVar0);
	iVar5 = 0;
	while (iVar5 < iLocal_6227)
	{
		if (iLocal_6227[iVar5] == iVar4)
		{
			return 1;
		}
		iVar5++;
	}
	return 0;
}

void func_650()//Position - 0x7932F
{
	int iVar0;
	int iVar1;
	
	if (func_316())
	{
		func_300(PLAYER::PLAYER_ID(), 0, 0);
		iLocal_5794 = 0;
		if (bLocal_5797 == 0 && iLocal_5796 == 0)
		{
			CUTSCENE::REQUEST_CUTSCENE("CAR_1_INT_CONCAT", 4);
		}
		if (func_315())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5849))
			{
				STREAMING::REQUEST_MODEL(joaat("adder"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("adder")))
				{
					SYSTEM::WAIT(0);
				}
				func_298(&iLocal_5849, joaat("adder"), 119.2013f, -398.4865f, 40.1208f, -171.4098f, -1, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_5849, 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_5849, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5849, 10);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5849, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5840))
			{
				STREAMING::REQUEST_MODEL(GlobalFunc_4946(29));
				while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(29)))
				{
					SYSTEM::WAIT(0);
				}
				while (!GlobalFunc_6790(&iLocal_5840, 29, iLocal_5849, -1, 1))
				{
					func_312(0);
				}
				PED::SET_PED_COMPONENT_VARIATION(iLocal_5840, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_5840, 4, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_5840, 10, 1, 0, 0);
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5840))
				{
					func_312(0);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5840, iLocal_5872);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5840, 1);
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_5840, iLocal_5849, 30f, 786599);
				PED::SET_PED_KEEP_TASK(iLocal_5840, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(29));
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
		}
	}
	else
	{
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
		if (bLocal_5797 == 0 && iLocal_5796 == 0)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (GlobalFunc_8315() == 1)
				{
					GlobalFunc_11086("Franklin", func_309(1), 0, 2);
				}
				else if (GlobalFunc_8315() == 0)
				{
					GlobalFunc_11086("Michael", func_309(0), 0, 2);
				}
				else if (GlobalFunc_8315() == 2)
				{
					GlobalFunc_11086("Trevor", func_309(2), 0, 2);
				}
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("DEVIN", 3, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("DEVIN", 4, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("DEVIN", 10, 1, 0, 0);
			}
		}
		switch (iLocal_5732)
		{
			case 0:
				if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("CAR_1_INT_CONCAT") || bLocal_5797 == 1) || iLocal_5796 == 1)
				{
					if (bLocal_5797 == 0 && iLocal_5796 == 0)
					{
						HUD::THEFEED_FLUSH_QUEUE();
						GlobalFunc_8316(1, 1, 1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844) && !ENTITY::IS_ENTITY_DEAD(iLocal_5844))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5844, "Franklins_car", 0, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5840) && !PED::IS_PED_INJURED(iLocal_5840))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5840, "DEVIN", 0, GlobalFunc_4946(29), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "DEVIN", 2, GlobalFunc_4946(29), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5849) && !ENTITY::IS_ENTITY_DEAD(iLocal_5849))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5849, "Devins_car", 0, joaat("adder"), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Devins_car", 2, joaat("adder"), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5841) && !ENTITY::IS_ENTITY_DEAD(iLocal_5841))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5841, "MOLLY", 1, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5850) && !ENTITY::IS_ENTITY_DEAD(iLocal_5850))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5850, "Car_1_Felon", 1, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_6281[2]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_6281[2], "TREVOR", 1, 0, 0);
						}
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x48621C9FCA3EBD28(4);
						func_312(0);
						GlobalFunc_6791(0, 0);
						GlobalFunc_6791(2, 0);
						GlobalFunc_10063(110.8117f, -421.1416f, 36.19677f, 126.1116f, -380.1021f, 57.26146f, 40f, 120.5374f, -429.8324f, 40.0967f, 289.2337f, GlobalFunc_625(), 1, 1, 1, 0, 0);
						MISC::CLEAR_AREA(115.5694f, -400.4633f, 40.26558f, 20f, 1, 0, 0, 0);
						GRAPHICS::_0x1612C45F9E3E0D44();
						CAM::STOP_GAMEPLAY_HINT(1);
						func_785();
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					func_301();
				}
				break;
			
			case 1:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5840))
				{
					iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("DEVIN", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						iLocal_5840 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5840, iLocal_5872);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5840, 1);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5849))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5849))
					{
						iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Devins_car", 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							iLocal_5849 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_5849, 0, 0);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_5849, 0, 0);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					RECORDING::_0x81CBAE94390F9F89();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_car", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("DEVIN", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5849) && !ENTITY::IS_ENTITY_DEAD(iLocal_5849))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5849) && !PED::IS_PED_INJURED(iLocal_5840))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_5840, iLocal_5849, -1);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5840, iLocal_5872);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5840, 1);
							TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_5840, iLocal_5849, 30f, 786599);
							PED::SET_PED_KEEP_TASK(iLocal_5840, 1);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MOLLY", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Devins_car", 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5849, 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5849, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
					GRAPHICS::_0x5DEBD9C4DC995692();
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
				}
				if (bLocal_5797 == 1 || CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					func_300(PLAYER::PLAYER_ID(), 1, 0);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5849))
					{
						STREAMING::REQUEST_MODEL(joaat("adder"));
						while (!STREAMING::HAS_MODEL_LOADED(joaat("adder")))
						{
							SYSTEM::WAIT(0);
						}
						func_298(&iLocal_5849, joaat("adder"), 119.2013f, -398.4865f, 40.1208f, -171.4098f, -1, 0);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_5849, 0, 0);
						VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_5849, 0, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5849, 10);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5849, 0);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5840))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_4946(29));
						while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(29)))
						{
							SYSTEM::WAIT(0);
						}
						while (!GlobalFunc_6790(&iLocal_5840, 29, iLocal_5849, -1, 1))
						{
							func_312(0);
						}
						PED::SET_PED_COMPONENT_VARIATION(iLocal_5840, 3, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_5840, 4, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_5840, 10, 1, 0, 0);
						while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_5840))
						{
							func_312(0);
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5840, iLocal_5872);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5840, 1);
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_5840, iLocal_5849, 30f, 786599);
						PED::SET_PED_KEEP_TASK(iLocal_5840, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(29));
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					func_30();
				}
				break;
			}
	}
	if (func_29())
	{
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_312(0);
		}
		GlobalFunc_8316(0, 1, 1, 0);
		iLocal_6096++;
	}
}

void func_651()//Position - 0x79A10
{
	if (func_316())
	{
		func_300(PLAYER::PLAYER_ID(), 1, 0);
		GlobalFunc_7934(21, 0);
		HUD::REQUEST_ADDITIONAL_TEXT("CRSTL3", 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_hwaycop_01"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeb"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("f620"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("entityxf"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cheetah"), 1);
		if (GlobalFunc_8315() != 1)
		{
			iLocal_5803 = GlobalFunc_5101(GlobalFunc_8315());
			while (!func_710(1, 1))
			{
				SYSTEM::WAIT(0);
			}
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_5872);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_5873);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_5872, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_5872);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5844))
		{
			func_298(&iLocal_5844, joaat("f620"), Local_5810, 268.8413f, 0, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5844, 1);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_5844, 43, 43);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_5844, 48, 48);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("f620"));
		GlobalFunc_173(&uLocal_5929, 3, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		if (GlobalFunc_Is_Mission_Retry())
		{
			MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
		}
		else
		{
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 60f);
		}
		if (func_315())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		func_30();
	}
	if (func_29())
	{
		iLocal_6096++;
		if (GlobalFunc_Is_Mission_Retry())
		{
			if (Global_84544 == 1)
			{
				func_652(GlobalFunc_Get_Mission_Fail_Checkpoint() + 1);
			}
			else
			{
				func_652(GlobalFunc_Get_Mission_Fail_Checkpoint());
			}
		}
	}
}

void func_652(int iParam0)//Position - 0x79BC4
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { Local_5810 };
			fVar3 = 268.8413f;
			break;
		
		case 1:
			Var0 = { 2570.577f, 364.8711f, 107.4569f };
			fVar3 = 357.8433f;
			break;
		
		case 2:
			Var0 = { 2686.879f, 5131.908f, 43.8515f };
			fVar3 = 151.6033f;
			break;
		
		case 3:
			Var0 = { -1923.022f, 4605.496f, 56.0558f };
			fVar3 = 135.0792f;
			break;
		
		case 4:
			Var0 = { 492.7253f, -1311.563f, 28.2627f };
			fVar3 = 293.8439f;
			break;
	}
	GlobalFunc_5116(Var0, fVar3, 0, 0);
	GlobalFunc_5108(0, -1, 0);
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_AREA(Local_5810, 100f, 1, 0, 0, 0);
			GlobalFunc_2510(PLAYER::PLAYER_PED_ID(), Local_5810, 268.8413f, 1);
			iLocal_6096 = 2;
			break;
		
		case 1:
			GlobalFunc_52(0, 1);
			func_704(iLocal_5844);
			GlobalFunc_2244(&iLocal_5844);
			if (GlobalFunc_622() == joaat("f620"))
			{
				func_653(&iLocal_5844, 2570.577f, 364.8711f, 107.4569f, 357.8433f, 1, 1, 0, 0, 1, joaat("f620"), 0, 145);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5844, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5844, 1);
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("f620"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("f620")))
				{
					func_312(0);
				}
				func_298(&iLocal_5844, joaat("f620"), 2570.577f, 364.8711f, 107.4569f, 357.8433f, 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5844, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_5844, 43, 43);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_5844, 48, 48);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("f620"));
			}
			STREAMING::REQUEST_MODEL(joaat("entityxf"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
			{
				func_312(0);
			}
			iLocal_5845 = func_584(joaat("entityxf"), Local_5813, 0f);
			GlobalFunc_534(iLocal_5845, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5845, 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5845, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5845, 2);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5845, 0, 0);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5845, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
			STREAMING::REQUEST_MODEL(joaat("ig_car3guy1"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("ig_car3guy1")))
			{
				func_312(0);
			}
			func_297(&iLocal_5838, joaat("ig_car3guy1"), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 0, 1);
			PED::SET_PED_INTO_VEHICLE(iLocal_5838, iLocal_5845, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5838, iLocal_5873);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5838, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_car3guy1"));
			STREAMING::REQUEST_MODEL(joaat("cheetah"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				func_312(0);
			}
			iLocal_5846 = func_584(joaat("cheetah"), Local_5816, -1.3639f);
			GlobalFunc_534(iLocal_5846, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5846, 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5846, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5846, 2);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5846, 0, 0);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5846, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
			STREAMING::REQUEST_MODEL(joaat("ig_car3guy2"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("ig_car3guy2")))
			{
				func_312(0);
			}
			func_297(&iLocal_5839, joaat("ig_car3guy2"), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 0, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 4, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(iLocal_5839, 1, 0, 0, false);
			PED::SET_PED_INTO_VEHICLE(iLocal_5839, iLocal_5846, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5839, iLocal_5873);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5839, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_car3guy2"));
			GlobalFunc_173(&uLocal_5929, 4, iLocal_5838, "CST3RACER1", 0, 1);
			GlobalFunc_173(&uLocal_5929, 5, iLocal_5839, "CST3RACER2", 0, 1);
			if (Global_84544 == 1)
			{
				iLocal_6096 = 3;
			}
			else
			{
				iLocal_6096 = 4;
			}
			break;
		
		case 2:
			GlobalFunc_52(0, 1);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 2);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
			PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), -1, 1);
			func_704(iLocal_5844);
			GlobalFunc_2244(&iLocal_5844);
			if (GlobalFunc_622() == joaat("f620"))
			{
				func_653(&iLocal_5844, 2716.992f, 4787.348f, 43.5334f, 11.8873f, 1, 1, 0, 0, 1, joaat("f620"), 0, 145);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5844, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5844, 1);
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("f620"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("f620")))
				{
					func_312(0);
				}
				func_298(&iLocal_5844, joaat("f620"), 2716.992f, 4787.348f, 43.5334f, 11.8873f, 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5844, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_5844, 43, 43);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_5844, 48, 48);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("f620"));
			}
			STREAMING::REQUEST_MODEL(joaat("entityxf"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
			{
				func_312(0);
			}
			iLocal_5845 = func_584(joaat("entityxf"), Local_5813, 0f);
			GlobalFunc_534(iLocal_5845, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5845, 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5845, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5845, 2);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5845, 0, 0);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5845, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
			STREAMING::REQUEST_MODEL(joaat("ig_car3guy1"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("ig_car3guy1")))
			{
				func_312(0);
			}
			func_297(&iLocal_5838, joaat("ig_car3guy1"), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 0, 1);
			PED::SET_PED_INTO_VEHICLE(iLocal_5838, iLocal_5845, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5838, iLocal_5873);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5838, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_car3guy1"));
			STREAMING::REQUEST_MODEL(joaat("cheetah"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				func_312(0);
			}
			iLocal_5846 = func_584(joaat("cheetah"), Local_5816, -1.3639f);
			GlobalFunc_534(iLocal_5846, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5846, 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5846, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_5846, 2);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5846, 0, 0);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5846, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
			STREAMING::REQUEST_MODEL(joaat("ig_car3guy2"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("ig_car3guy2")))
			{
				func_312(0);
			}
			func_297(&iLocal_5839, joaat("ig_car3guy2"), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 0, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 4, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(iLocal_5839, 1, 0, 0, false);
			PED::SET_PED_INTO_VEHICLE(iLocal_5839, iLocal_5846, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5839, iLocal_5873);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5839, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_car3guy2"));
			GlobalFunc_173(&uLocal_5929, 4, iLocal_5838, "CST3RACER1", 0, 1);
			GlobalFunc_173(&uLocal_5929, 5, iLocal_5839, "CST3RACER2", 0, 1);
			STREAMING::REQUEST_MODEL(joaat("policeb"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("policeb")))
			{
				func_312(0);
			}
			GlobalFunc_2244(&iLocal_5847);
			func_298(&iLocal_5847, joaat("policeb"), Local_5819, 147.9465f, -1, 0);
			GlobalFunc_534(iLocal_5847, 2);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5847, 1);
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(2));
			while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(2)))
			{
				func_312(0);
			}
			func_548(&(uLocal_6281[2]), 2, Local_8857, fLocal_8860, 0);
			if (!PED::IS_PED_WEARING_HELMET(uLocal_6281[2]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(uLocal_6281[2], 5, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_6281[2], 0);
			}
			while (!func_273(uLocal_6281[2], 12, 3, 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				func_312(0);
			}
			GlobalFunc_5128(2);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6281[2], iLocal_5872);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_6281[2], 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_6281[2], 32, 0);
			if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[2], iLocal_5847, 0))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_6281[2], iLocal_5847, -1);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(2));
			GlobalFunc_2244(&iLocal_5848);
			func_298(&iLocal_5848, joaat("policeb"), Local_5822, 135.0532f, -1, 0);
			GlobalFunc_534(iLocal_5848, 3);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5848, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeb"));
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
			while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)))
			{
				func_312(0);
			}
			func_548(&(uLocal_6281[0]), 0, Local_8861, fLocal_8864, 0);
			while (!func_273(uLocal_6281[0], 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				func_312(0);
			}
			GlobalFunc_5128(0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6281[0], iLocal_5872);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_6281[0], 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_6281[0], 32, 0);
			if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[0], iLocal_5848, 0))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_6281[0], iLocal_5848, -1);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
			GlobalFunc_173(&uLocal_5929, 1, uLocal_6281[0], "MICHAEL", 0, 1);
			GlobalFunc_173(&uLocal_5929, 2, uLocal_6281[2], "TREVOR", 0, 1);
			if (Global_84544 == 1)
			{
				iLocal_6096 = 5;
			}
			else
			{
				GlobalFunc_9134(&uLocal_6281, 0);
				while (!func_802(&uLocal_6281, 1, 0, 0))
				{
					func_312(0);
				}
				iLocal_6096 = 6;
			}
			break;
		
		case 3:
			GlobalFunc_52(0, 1);
			func_704(iLocal_5844);
			GlobalFunc_2244(&iLocal_5844);
			if (GlobalFunc_622() == joaat("f620"))
			{
				func_653(&iLocal_5844, -1912.547f, 4616.361f, 56.0427f, 134.6697f, 1, 1, 0, 0, 1, joaat("f620"), 0, 145);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5844, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5844, 1);
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("f620"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("f620")))
				{
					func_312(0);
				}
				func_298(&iLocal_5844, joaat("f620"), -1912.547f, 4616.361f, 56.0427f, 134.6697f, 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5844, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_5844, 43, 43);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_5844, 48, 48);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("f620"));
			}
			STREAMING::REQUEST_MODEL(joaat("policeb"));
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(2));
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
			STREAMING::REQUEST_MODEL(joaat("entityxf"));
			STREAMING::REQUEST_MODEL(joaat("ig_car3guy1"));
			STREAMING::REQUEST_MODEL(joaat("cheetah"));
			STREAMING::REQUEST_MODEL(joaat("ig_car3guy2"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("policeb")))
			{
				func_312(0);
			}
			func_298(&iLocal_5847, joaat("policeb"), Local_5819, 147.9465f, -1, 0);
			GlobalFunc_534(iLocal_5847, 2);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5847, 1);
			while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(2)))
			{
				func_312(0);
			}
			func_548(&(uLocal_6281[2]), 2, Local_8857, fLocal_8860, 0);
			if (!PED::IS_PED_WEARING_HELMET(uLocal_6281[2]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(uLocal_6281[2], 5, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_6281[2], 0);
			}
			while (!func_273(uLocal_6281[2], 12, 3, 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				func_312(0);
			}
			GlobalFunc_5128(2);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6281[2], iLocal_5872);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_6281[2], 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_6281[2], 32, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(2));
			func_298(&iLocal_5848, joaat("policeb"), Local_5822, 135.0532f, -1, 0);
			GlobalFunc_534(iLocal_5848, 3);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5848, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeb"));
			while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)))
			{
				func_312(0);
			}
			func_548(&(uLocal_6281[0]), 0, Vector(56.0562f, 4604.91f, -1921.732f) + Vector(0f, -0.37f, 0.36f), 135.026f, 0);
			MISC::CLEAR_AREA(-1921.732f, 4604.91f, 56.0562f, 200f, 1, 0, 0, 0);
			while (!func_273(uLocal_6281[0], 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				func_312(0);
			}
			GlobalFunc_5128(0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6281[0], iLocal_5872);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_6281[0], 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_6281[0], 32, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
			GlobalFunc_173(&uLocal_5929, 1, uLocal_6281[0], "MICHAEL", 0, 1);
			GlobalFunc_173(&uLocal_5929, 2, uLocal_6281[2], "TREVOR", 0, 1);
			while (!STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
			{
				func_312(0);
			}
			iLocal_5845 = func_584(joaat("entityxf"), -1923.022f, 4605.493f, 56.044f, 135.0786f);
			GlobalFunc_534(iLocal_5845, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5845, 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5845, 1);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5845, 0, 0);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5845, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("ig_car3guy1")))
			{
				func_312(0);
			}
			func_297(&iLocal_5838, joaat("ig_car3guy1"), -1915.626f, 4600.51f, 56.0301f, 141.4507f, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5838, iLocal_5873);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5838, 1);
			TASK::TASK_SMART_FLEE_PED(iLocal_5838, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			PED::FORCE_PED_MOTION_STATE(iLocal_5838, -530524, 0, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_5838, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_car3guy1"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				func_312(0);
			}
			iLocal_5846 = func_584(joaat("cheetah"), -1919.328f, 4609.285f, 56.0532f, 135.0284f);
			GlobalFunc_534(iLocal_5846, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5846, 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5846, 1);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5846, 0, 0);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5846, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("ig_car3guy2")))
			{
				func_312(0);
			}
			func_297(&iLocal_5839, joaat("ig_car3guy2"), -1921.258f, 4590.635f, 56.0301f, 141.4507f, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_5839, 4, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(iLocal_5839, 1, 0, 0, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_5839, iLocal_5873);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5839, 1);
			TASK::TASK_SMART_FLEE_PED(iLocal_5839, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			PED::FORCE_PED_MOTION_STATE(iLocal_5839, -530524, 0, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_5839, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_car3guy2"));
			GlobalFunc_173(&uLocal_5929, 4, iLocal_5838, "CST3RACER1", 0, 1);
			GlobalFunc_173(&uLocal_5929, 5, iLocal_5839, "CST3RACER2", 0, 1);
			GlobalFunc_9134(&uLocal_6281, 0);
			while (!func_802(&uLocal_6281, 1, 0, 0))
			{
				func_312(0);
			}
			if (Global_84544 == 1)
			{
				iLocal_6096 = 7;
			}
			else
			{
				iLocal_6096 = 8;
			}
			break;
		
		case 4:
			GlobalFunc_52(0, 1);
			func_704(iLocal_5844);
			GlobalFunc_2244(&iLocal_5844);
			if (GlobalFunc_622() == joaat("f620"))
			{
				func_653(&iLocal_5844, 485.399f, -1332.901f, 28.3095f, 292.4873f, 1, 1, 0, 0, 1, joaat("f620"), 0, 145);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5844, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5844, 1);
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("f620"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("f620")))
				{
					func_312(0);
				}
				func_298(&iLocal_5844, joaat("f620"), 485.399f, -1332.901f, 28.3095f, 292.4873f, 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5844, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_5844, 43, 43);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_5844, 48, 48);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("f620"));
			}
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(2));
			while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(2)))
			{
				func_312(0);
			}
			func_548(&(uLocal_6281[2]), 2, 485.592f, -1330.721f, 28.2454f, 296.1122f, 0);
			if (!PED::IS_PED_WEARING_HELMET(uLocal_6281[2]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(uLocal_6281[2], 5, 1);
				PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_6281[2], 0);
			}
			while (!func_273(uLocal_6281[2], 12, 3, 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				func_312(0);
			}
			GlobalFunc_5128(2);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6281[2], iLocal_5872);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_6281[2], 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_6281[2], 32, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(2));
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
			while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)))
			{
				func_312(0);
			}
			func_548(&(uLocal_6281[0]), 0, 485.9252f, -1330.517f, 28.2488f, 293.9519f, 0);
			while (!func_273(uLocal_6281[0], 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				func_312(0);
			}
			GlobalFunc_5128(0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_6281[0], iLocal_5872);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_6281[0], 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_6281[0], 32, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
			GlobalFunc_173(&uLocal_5929, 1, uLocal_6281[0], "MICHAEL", 0, 1);
			GlobalFunc_173(&uLocal_5929, 2, uLocal_6281[2], "TREVOR", 0, 1);
			STREAMING::REQUEST_MODEL(joaat("entityxf"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
			{
				func_312(0);
			}
			iLocal_5845 = func_584(joaat("entityxf"), 485.9952f, -1335.449f, 28.2862f, 286.6455f);
			GlobalFunc_534(iLocal_5845, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5845, 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5845, 1);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5845, 0, 0);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5845, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
			STREAMING::REQUEST_MODEL(joaat("cheetah"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				func_312(0);
			}
			iLocal_5846 = func_584(joaat("cheetah"), 487.1696f, -1337.845f, 28.2688f, 293.0351f);
			GlobalFunc_534(iLocal_5846, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_5846, 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5846, 1);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5846, 0, 0);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_5846, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
			GlobalFunc_9134(&uLocal_6281, 0);
			while (!func_802(&uLocal_6281, 1, 0, 0))
			{
				func_312(0);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			GlobalFunc_2510(PLAYER::PLAYER_PED_ID(), 492.7253f, -1311.563f, 28.2627f, 293.8439f, 0);
			iLocal_6096 = 9;
			break;
	}
	iLocal_5795 = 1;
	bLocal_5797 = true;
}

void func_653(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x7AD4F
{
	int iVar0;
	
	iVar0 = 1;
	if (!GlobalFunc_Is_Mission_Retry() || !GlobalFunc_7698())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!GlobalFunc_9009(iParam6, iParam7, iParam8))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		GlobalFunc_8368();
		while (!GlobalFunc_8367())
		{
			SYSTEM::WAIT(0);
		}
		*iParam0 = GlobalFunc_10154(Param1, iParam4);
	}
	else if (iParam9 == 1)
	{
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
		{
			Param1 = { Global_93588.f_2167 };
			iParam4 = Global_93588.f_2167.f_6;
		}
		MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
		GlobalFunc_8365(Param1, 5f, 0);
		if (GlobalFunc_42(iParam12))
		{
			GlobalFunc_6791(iParam12, 0);
			while (!func_654(iParam0, iParam12, Param1, iParam4, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(iParam10);
			while (!STREAMING::HAS_MODEL_LOADED(iParam10))
			{
				SYSTEM::WAIT(0);
			}
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam10, Param1, iParam4, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (iParam11 == 0)
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 0);
				}
				else if (iParam11 > 0)
				{
					VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam11, iParam11);
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam10);
		}
	}
	if (iParam5 == 1)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0)) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, -1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
		}
	}
}

int func_654(int iParam0, int iParam1, struct<3> Param2, int iParam5, bool bParam6, int iParam7)//Position - 0x7AED7
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, iParam5, 0, 0);
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
				GlobalFunc_5107(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5106(iParam0);
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, iParam5, 0, 0);
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
				GlobalFunc_5107(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5106(iParam0);
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, iParam5, 1, 1);
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
				GlobalFunc_5107(iParam0, &(Var5.f_31), &(Var5.f_57));
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
						GlobalFunc_5106(iParam0);
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


















































void func_704(int iParam0)//Position - 0x81638
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
				}
			}
			iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar1))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}






int func_710(int iParam0, bool bParam1)//Position - 0x8187F
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
		func_713(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_549(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_802(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_713(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x81A37
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
				func_32(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7707(*iParam0);
				func_551(*iParam0, bParam6);
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

int func_714(int iParam0)//Position - 0x81AE9
{
	if (!func_716(iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			func_715(iParam0, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_715(var uParam0, bool bParam1)//Position - 0x81B19
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam0;
	iVar1 = 0;
	bVar2 = false;
	while (iVar1 < iLocal_6201 && !bVar2)
	{
		if (bParam1)
		{
			if (iLocal_6201[iVar1] == 0)
			{
				iLocal_6201[iVar1] = iVar0;
				bVar2 = true;
			}
		}
		else if (iLocal_6201[iVar1] == iVar0)
		{
			iLocal_6201[iVar1] = 0;
			bVar2 = true;
		}
		iVar1++;
	}
}

int func_716(var uParam0)//Position - 0x81B7B
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = 0;
	while (iVar1 < iLocal_6201)
	{
		if (iLocal_6201[iVar1] == iVar0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}


void func_718()//Position - 0x81BD6
{
	if (iLocal_6280 == 0 && (!AUDIO::IS_MUSIC_ONESHOT_PLAYING() || MISC::GET_GAME_TIMER() > iLocal_9092))
	{
		switch (iLocal_6279)
		{
			case 1:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_9091) || !MISC::ARE_STRINGS_EQUAL(sLocal_9091, "CAR1_MISSION_START"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_9091))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_9091);
					}
					sLocal_9091 = "CAR1_MISSION_START";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("CAR1_MISSION_START"))
				{
					iLocal_6279 = 0;
				}
				break;
			
			case 6:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_9091) || !MISC::ARE_STRINGS_EQUAL(sLocal_9091, "CAR1_CHASE_START"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_9091))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_9091);
					}
					sLocal_9091 = "CAR1_CHASE_START";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("CAR1_CHASE_START"))
				{
					iLocal_6279 = 0;
				}
				break;
			}
	}
	switch (iLocal_6280)
	{
		case 1:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_9091) || !MISC::ARE_STRINGS_EQUAL(sLocal_9091, "CAR1_MISSION_START"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_9091))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_9091);
				}
				sLocal_9091 = "CAR1_MISSION_START";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("CAR1_MISSION_START"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_MISSION_START"))
				{
					iLocal_9092 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_6280 = 0;
				}
			}
			break;
		
		case 2:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_MISSION_RESTART"))
			{
				iLocal_6280 = 0;
			}
			break;
		
		case 3:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_COP_BIKES"))
			{
				iLocal_6280 = 0;
			}
			break;
		
		case 4:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_COPS_RESTART"))
			{
				iLocal_6280 = 0;
			}
			break;
		
		case 5:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_APPROACH"))
			{
				iLocal_6280 = 0;
			}
			break;
		
		case 6:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_9091) || !MISC::ARE_STRINGS_EQUAL(sLocal_9091, "CAR1_CHASE_START"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_9091))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_9091);
				}
				sLocal_9091 = "CAR1_CHASE_START";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("CAR1_CHASE_START"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_CHASE_START"))
				{
					iLocal_9092 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_6280 = 0;
				}
			}
			break;
		
		case 7:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_PULL_OVER"))
			{
				iLocal_6280 = 0;
			}
			break;
		
		case 8:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_CHASE_RESTART"))
			{
				iLocal_6280 = 0;
			}
			break;
		
		case 9:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_BRIDGE"))
			{
				iLocal_6280 = 0;
			}
			break;
		
		case 10:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_MISSION_FAIL"))
			{
				iLocal_6280 = 0;
			}
			break;
	}
}

void func_719()//Position - 0x81E52
{
	if (iLocal_6096 == 5)
	{
		func_714(GlobalFunc_4917(0));
	}
	if (iLocal_6096 == 0)
	{
		func_714(GlobalFunc_4917(1));
	}
	if (iLocal_6096 == 5)
	{
		func_714(GlobalFunc_4917(2));
	}
	if (iLocal_6096 == 3)
	{
		func_714(joaat("ig_car3guy2"));
	}
	if (iLocal_6096 == 3)
	{
		func_714(joaat("ig_car3guy1"));
	}
	if (iLocal_6096 == 0)
	{
		func_714(joaat("f620"));
	}
	if (iLocal_6096 == 3)
	{
		func_714(joaat("cheetah"));
	}
	if (iLocal_6096 == 3)
	{
		func_714(joaat("entityxf"));
	}
	if (iLocal_6096 == 4)
	{
		func_714(joaat("asterope"));
	}
	if (iLocal_6096 == 4)
	{
		func_714(joaat("trailers"));
		func_714(joaat("trailers2"));
	}
	if (iLocal_6096 == 5)
	{
		func_714(joaat("policeb"));
	}
	if (iLocal_6096 >= 4 && iLocal_6096 <= 5)
	{
		func_714(joaat("prop_player_phone_01"));
	}
	if (iLocal_6096 >= 4 && iLocal_6096 <= 5)
	{
		func_714(joaat("prop_donut_02"));
	}
	if (iLocal_6096 >= 4 && iLocal_6096 <= 5)
	{
		func_714(joaat("prop_donut_02b"));
	}
	if (iLocal_6096 == 2)
	{
		func_647(1, sLocal_5831);
		func_647(2, sLocal_5831);
	}
	else
	{
		func_721(1, sLocal_5831);
		func_721(2, sLocal_5831);
	}
	if (iLocal_6096 >= 3 && iLocal_6096 <= 4)
	{
		func_647(500, sLocal_5832);
		func_647(501, sLocal_5832);
		func_647(401, sLocal_5832);
		func_647(403, sLocal_5832);
	}
	else if (iLocal_6096 != 2)
	{
		func_721(500, sLocal_5832);
		func_721(501, sLocal_5832);
		func_721(401, sLocal_5832);
		func_721(403, sLocal_5832);
	}
	if (iLocal_6096 >= 5 && iLocal_6096 <= 6)
	{
		func_647(500, sLocal_5833);
		func_647(400, sLocal_5833);
		func_647(401, sLocal_5833);
		func_647(402, sLocal_5833);
	}
	else
	{
		func_721(500, sLocal_5833);
		func_721(400, sLocal_5833);
		func_721(401, sLocal_5833);
		func_721(402, sLocal_5833);
	}
	if (iLocal_6096 >= 8 && iLocal_6096 <= 9)
	{
		func_647(1, sLocal_5834);
		func_647(2, sLocal_5834);
		func_647(3, sLocal_5834);
	}
	else
	{
		func_721(1, sLocal_5834);
		func_721(2, sLocal_5834);
		func_721(3, sLocal_5834);
	}
	if (iLocal_6096 >= 2 && iLocal_6096 <= 6)
	{
		func_578(sLocal_5836);
	}
	else
	{
		func_720(sLocal_5836);
	}
	if (iLocal_6096 >= 2 && iLocal_6096 <= 6)
	{
		func_578(sLocal_5837);
	}
	else
	{
		func_720(sLocal_5837);
	}
	if (iLocal_6096 >= 4 && iLocal_6096 <= 5)
	{
		func_578(sLocal_8843);
	}
	else
	{
		func_720(sLocal_8843);
	}
	if (iLocal_6096 >= 4 && iLocal_6096 <= 5)
	{
		func_578(sLocal_8844);
	}
	else
	{
		func_720(sLocal_8844);
	}
}

void func_720(char* sParam0)//Position - 0x82152
{
	if (func_580(sParam0))
	{
		STREAMING::REMOVE_ANIM_DICT(sParam0);
		func_579(sParam0, 0);
	}
}

void func_721(int iParam0, char* sParam1)//Position - 0x82170
{
	if (func_649(iParam0, sParam1))
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, sParam1);
		func_648(iParam0, sParam1, 0);
	}
}



int func_724(var uParam0)//Position - 0x82211
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
				fLocal_27 = GlobalFunc_551(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			
			case 1:
				fLocal_27 = GlobalFunc_5161(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 2:
				fLocal_27 = GlobalFunc_5160(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 3:
				fLocal_27 = GlobalFunc_5159(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_27);
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













void func_737(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x82BEC
{
	*iParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*iParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*iParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*iParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*iParam0) == 0f && IntToFloat(*iParam1) == 0f)
		{
			*iParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*iParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*iParam2) == 0f && IntToFloat(*iParam3) == 0f)
		{
			*iParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*iParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}


void func_739(char* sParam0, bool bParam1)//Position - 0x82D32
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_742(sParam0))
		{
			iVar1 = iLocal_6099;
			if (iLocal_6200 < iVar1)
			{
				iLocal_6099[iLocal_6200] = iVar0;
				iLocal_6200++;
			}
		}
	}
	else
	{
		iVar2 = func_741(iVar0);
		if (iVar2 != -1)
		{
			iLocal_6099[iVar2] = 0;
			func_740();
			iLocal_6200 = (iLocal_6200 - 1);
		}
	}
}

void func_740()//Position - 0x82D95
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_6099;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_6099[iVar1] == 0)
		{
			if (iLocal_6099[iVar1 + 1] != 0)
			{
				iLocal_6099[iVar1] = iLocal_6099[iVar1 + 1];
				iLocal_6099[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

int func_741(int iParam0)//Position - 0x82DEC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_6200)
	{
		if (iLocal_6099[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_742(char* sParam0)//Position - 0x82E1D
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_741(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}









void func_751(int iParam0, float fParam1)//Position - 0x83D70
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_59 = false;
	if (!bLocal_41)
	{
		if (bLocal_40)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_41 = true;
		}
	}
	else if (!bLocal_40)
	{
		GlobalFunc_2214();
		bLocal_41 = false;
	}
	if (bLocal_40)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_34)
	{
		if (iLocal_29)
		{
			fLocal_2246 = 0f;
		}
		else
		{
			fLocal_2246 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_39 = 1;
					}
					else
					{
						iLocal_39 = 0;
					}
				}
				fLocal_2243 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_2244) * fLocal_2246));
				if (iLocal_38)
				{
					func_772(iParam0, fLocal_2243);
					func_771(iParam0, fLocal_2253);
					if (fLocal_2248 > 1000f)
					{
						if (iLocal_3510 == 0)
						{
							func_770(iParam0, fLocal_2253);
						}
						fVar0 = ((fLocal_2243 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_3510) * 2000f));
						func_769(iParam0, fVar0, fLocal_2247);
						iLocal_3510++;
						if (iLocal_3510 > 2)
						{
							fLocal_2248 = 0f;
						}
					}
					else
					{
						iLocal_3510 = 0;
						fLocal_2248 = (fLocal_2248 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_2243 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_46)
		{
			if (!iLocal_28)
			{
				func_766(iParam0, ((fParam1 * fLocal_2244) * fLocal_2246), 0);
				if (!iLocal_49)
				{
				}
				iLocal_49 = 0;
			}
			if (bLocal_31)
			{
				func_765(iParam0);
			}
			if (!iLocal_28)
			{
				func_754(iParam0, ((fParam1 * fLocal_2244) * fLocal_2246), 0);
			}
		}
		if (iLocal_36)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_5716 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_4789 = { ENTITY::GET_ENTITY_COORDS(iLocal_5716, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_5716, &uLocal_1767, &uLocal_1768, &uLocal_1769, &uLocal_1770);
				}
			}
			iLocal_36 = 0;
		}
		if (iLocal_35)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5716))
			{
				GlobalFunc_2210(iLocal_5717);
				iLocal_5717 = iLocal_5716;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5717, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_5717, Local_4789, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_5717, uLocal_1767, uLocal_1768, uLocal_1769, uLocal_1770);
			}
			fLocal_2242 = fLocal_2245;
			iLocal_28 = 1;
			iLocal_35 = 0;
		}
		if (iLocal_28)
		{
			while (!func_752(&iParam0, fLocal_2242))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_29 = 1;
		}
		if (iLocal_42)
		{
			iLocal_42 = 0;
		}
	}
}

int func_752(int iParam0, float fParam1)//Position - 0x8400D
{
	if (!iLocal_43)
	{
		iLocal_28 = 1;
		func_522();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_3497 == -1)
			{
				while (!func_753(iParam0, iLocal_3497, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_33)
				{
					iLocal_29 = 1;
					fLocal_2246 = 0f;
					iLocal_3498 = 0;
					iLocal_3500 = 0;
					iLocal_3499 = 0;
					iLocal_3494 = 0;
					iLocal_3495 = 0;
					iLocal_3496 = 0;
					iLocal_3501 = 0;
					iLocal_3502 = 0;
					iLocal_3503 = 0;
				}
			}
		}
		iLocal_43 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_2244) * fLocal_2246));
				func_753(iParam0, iLocal_3497, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_2243 = fParam1;
		iLocal_3504 = 0;
		iLocal_3507 = 0;
		fLocal_2258 = 0f;
		fLocal_2257 = 0f;
		func_754(*iParam0, ((1f * fLocal_2244) * fLocal_2246), 1);
		func_766(*iParam0, ((1f * fLocal_2244) * fLocal_2246), 1);
		func_765(*iParam0);
		if ((iLocal_3501 == 0 && iLocal_3502 == 0) && iLocal_3503 == 0)
		{
			iLocal_29 = 0;
			iLocal_28 = 0;
			iLocal_43 = 0;
			return 1;
		}
	}
	return 0;
}

int func_753(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x8413F
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_4816);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_4816))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_4816, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_3505 && iParam1 != iLocal_3506)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_4816, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_4816, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_4816, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_4816, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_4816))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_4816);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_4816, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_3505 && iParam1 != iLocal_3506)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_4816, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_4816, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_4816, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_4816, 1);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_754(int iParam0, float fParam1, bool bParam2)//Position - 0x84325
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
		iVar0 = iLocal_3500;
		while (iVar0 < 60)
		{
			if (iLocal_3346[iVar0] != 99)
			{
				if (iLocal_3346[iVar0] == 0)
				{
					if (iLocal_3285[iVar0] > 0)
					{
						if (!iLocal_28)
						{
							if (fLocal_2243 > (fLocal_2015[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_5200[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_3407[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_5200[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_3407[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_3407[iVar0]), 1);
								iLocal_3346[iVar0]++;
								iLocal_3502++;
							}
						}
						else
						{
							fVar12 = (fLocal_2243 - fLocal_2015[iVar0]);
							fVar12 = (fVar12 * fLocal_2076[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_764(iLocal_3285[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_5200[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_3407[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_5200[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_3407[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_3407[iVar0]), 1);
									iLocal_3346[iVar0]++;
									iLocal_3502++;
								}
								else
								{
									iLocal_3346[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_3346[iVar0] = 99;
					}
				}
				else if (iLocal_3346[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_3285[iVar0], &cLocal_4816);
					if (MISC::IS_BIT_SET(iLocal_3407[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_55 && ((!MISC::IS_BIT_SET(iLocal_3407[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_3407[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_534());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_534());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5644[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_5200[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_5200[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_3285[iVar0], &cLocal_4816))
							{
								if (fLocal_2243 >= (fLocal_2015[iVar0] - (fLocal_2256 * fParam1)))
								{
									if ((iLocal_42 || bParam2) || (!bLocal_59 && !func_763(Local_4608[iVar0 /*3*/], Var9, 5f, fLocal_2254)))
									{
										if (iLocal_38)
										{
											func_762(Local_4608[iVar0 /*3*/], Var9, fLocal_2247);
										}
										iLocal_5644[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_5200[iVar0], Local_4608[iVar0 /*3*/], 0, 0, 0);
										if (iLocal_5200[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_5644[iVar0], 0);
										}
										if (uLocal_51 && !MISC::IS_BIT_SET(iLocal_3407[iVar0], 0))
										{
											func_761(iLocal_5644[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_3407[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5644[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_5644[iVar0], Local_4608[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_5644[iVar0], fLocal_1771[iVar0], fLocal_1832[iVar0], fLocal_1893[iVar0], fLocal_1954[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_5200[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_5200[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5644[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_3407[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5644[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_5644[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_5644[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5200[iVar0]);
										iLocal_3502 = (iLocal_3502 - 1);
										iLocal_3346[iVar0]++;
										bLocal_59 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_5644[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5644[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_5644[iVar0], Local_4608[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_5644[iVar0], fLocal_1771[iVar0], fLocal_1832[iVar0], fLocal_1893[iVar0], fLocal_1954[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_5200[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_5200[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5644[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_5644[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5200[iVar0]);
							iLocal_3502 = (iLocal_3502 - 1);
							iLocal_3346[iVar0]++;
						}
					}
				}
				else if (iLocal_3346[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_3285[iVar0], &cLocal_4816);
					if (!MISC::IS_BIT_SET(iLocal_3407[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_3407[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_55 && ((!MISC::IS_BIT_SET(iLocal_3407[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_3407[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_534());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_534());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_5644[iVar0]))
						{
							if (!bLocal_59 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_5644[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_5644[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_42)
									{
										func_760(&(iLocal_5644[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_3407[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5644[iVar0], 0))
					{
						if (fLocal_2243 >= fLocal_2015[iVar0])
						{
							if (15 > iLocal_3495)
							{
								fVar12 = (fLocal_2243 - fLocal_2015[iVar0]);
								fVar12 = (fVar12 * fLocal_2076[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_3285[iVar0], &cLocal_4816))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_3285[iVar0], &cLocal_4816))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_5644[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_3285[iVar0], fVar12, &cLocal_4816) };
										if (((!func_763(Var3, Var9, 5f, fLocal_2254) && func_763(Var6, Var9, 5f, fLocal_2254)) && !iLocal_42) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_3407[iVar0], 1))
											{
												func_760(&(iLocal_5644[iVar0]), iVar19, 1);
											}
											iLocal_3495++;
											iLocal_3346[iVar0]++;
										}
										else if (((!bLocal_59 || MISC::IS_BIT_SET(iLocal_3407[iVar0], 1)) || iLocal_42) || bParam2)
										{
											if (func_753(&(iLocal_5644[iVar0]), iLocal_3285[iVar0], fVar12, 1, 0, 0, bLocal_57, bLocal_56))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_5644[iVar0], (fParam1 * fLocal_2076[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5644[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_3407[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5644[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_5644[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_5644[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_5200[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_5644[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_3407[iVar0], 1))
												{
													func_760(&(iLocal_5644[iVar0]), iVar19, 1);
												}
												iLocal_3495++;
												iLocal_3346[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_3407[iVar0], 1))
										{
											func_760(&(iLocal_5644[iVar0]), iVar19, 1);
										}
										iLocal_3495++;
										iLocal_3346[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_3407[iVar0], 1))
								{
									func_760(&(iLocal_5644[iVar0]), iVar19, 1);
								}
								iLocal_3495++;
								iLocal_3346[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_3407[iVar0], 1))
						{
							func_760(&(iLocal_5644[iVar0]), iVar19, 1);
						}
						iLocal_3495++;
						iLocal_3346[iVar0]++;
					}
				}
				else if (iLocal_3346[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5644[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5644[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_32 && !iLocal_29) && !bLocal_48) && (((!bLocal_57 && !bLocal_56) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_5644[iVar0])) || func_759(iLocal_5644[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_50)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_5644[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_5644[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_5644[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_755(iLocal_5644[iVar0]);
												iLocal_3346[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_5644[iVar0], (fParam1 * fLocal_2076[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5644[iVar0]);
							}
						}
						else
						{
							iLocal_3346[iVar0]++;
						}
					}
					else
					{
						iLocal_3346[iVar0]++;
					}
				}
				else if (iLocal_3346[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5644[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5644[iVar0]))
						{
							iLocal_3346[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_5644[iVar0], (fParam1 * fLocal_2076[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5644[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_3285[iVar0], &cLocal_4816))
							{
								if (fLocal_2243 > (fLocal_2015[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_3285[iVar0], &cLocal_4816)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5644[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5644[iVar0]);
							}
						}
					}
					else
					{
						iLocal_3346[iVar0]++;
					}
				}
				else if (iLocal_3346[iVar0] == 5)
				{
					if (!iLocal_5644[iVar0] == iLocal_5718)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5644[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5644[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_5644[iVar0]);
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
						if (!bLocal_40 && !bLocal_53)
						{
							if (iLocal_3285[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_3285[iVar0], &cLocal_4816);
							}
						}
						if (!bLocal_30)
						{
							if (!bLocal_58)
							{
								GlobalFunc_2210(iLocal_5644[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_5644[iVar0]));
						}
					}
					iLocal_3495 = (iLocal_3495 - 1);
					iLocal_3346[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_3500 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_526();
	}
}

void func_755(int iParam0)//Position - 0x84F23
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_528(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}




int func_759(var uParam0)//Position - 0x85086
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_54)
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

int func_760(var uParam0, int iParam1, bool bParam2)//Position - 0x850E3
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_4832);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_534(), -1, 0, 0);
				if (bLocal_60)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_534());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_61)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_59 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_761(int iParam0)//Position - 0x851D8
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_5262 >= -1 && iLocal_5263 >= -1)
	{
		while (iVar0 == iLocal_5262 || iVar0 == iLocal_5263)
		{
			iVar0++;
		}
	}
	else if (iLocal_5262 >= -1)
	{
		if (iVar0 == iLocal_5262)
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

void func_762(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x85351
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_41)
	{
		if (!func_763(Param0, Param3, fParam6, 200f))
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

int func_763(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x853C1
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_41)
		{
			if (!iLocal_28)
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

float func_764(int iParam0)//Position - 0x85408
{
	float fVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_4816);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_4816))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_4816);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_4816);
	return fVar0;
}

void func_765(int iParam0)//Position - 0x85444
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
		iVar0 = iLocal_3499;
		while (iVar0 < 25)
		{
			switch (iLocal_3468[iVar0])
			{
				case 0:
					if (!iLocal_5174[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_4532[iVar0 /*3*/], fLocal_2241, fLocal_2241, fLocal_2241, 0, 1, 0))
						{
							iLocal_3501++;
							iLocal_3468[iVar0]++;
						}
					}
					else
					{
						iLocal_3468[iVar0] = 99;
					}
					break;
				
				case 1:
					if (10 > iLocal_3496)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5618[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_5174[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_5174[iVar0]))
							{
								if ((iLocal_28 || iLocal_42) || (!bLocal_59 && !func_763(Local_4532[iVar0 /*3*/], Var1, 5f, fLocal_2254)))
								{
									if (iLocal_38)
									{
										func_762(Local_4532[iVar0 /*3*/], Var1, fLocal_2247);
									}
									iLocal_5618[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_5174[iVar0], Local_4532[iVar0 /*3*/], 0, 0, 0);
									if (iLocal_5174[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_5618[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_5618[iVar0], fLocal_2137[iVar0], fLocal_2163[iVar0], fLocal_2189[iVar0], fLocal_2215[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_5174[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_5618[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_5618[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_5174[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_5618[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_5618[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_5618[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5618[iVar0], 1);
									iLocal_3501 = (iLocal_3501 - 1);
									iLocal_3496++;
									iLocal_3468[iVar0]++;
									bLocal_59 = true;
								}
							}
						}
						else
						{
							iLocal_3501 = (iLocal_3501 - 1);
							iLocal_3496++;
							iLocal_3468[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5618[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_5618[iVar0], 1) };
						}
						if (fLocal_2255 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_2255 * fLocal_2255))
						{
							if (!GlobalFunc_5654(iLocal_5618[iVar0], iParam0, 0))
							{
								if (!bLocal_30)
								{
									GlobalFunc_2210(iLocal_5618[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_5618[iVar0]));
								}
								iLocal_3496 = (iLocal_3496 - 1);
								iLocal_3468[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_3468[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_3499 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_529();
	}
}

void func_766(int iParam0, float fParam1, int iParam2)//Position - 0x8573B
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
			fLocal_2243 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_3498;
		while (iVar0 < 340 && !bVar23)
		{
			if (iLocal_2603[iVar0] != 99)
			{
				if (iLocal_2603[iVar0] == 0)
				{
					if (iLocal_2262[iVar0] > 0 && iLocal_4833[iVar0] != 0)
					{
						if (!iLocal_28)
						{
							if (fLocal_2243 < (fLocal_1426[iVar0] + 20000f))
							{
								if (fLocal_2243 >= (fLocal_1426[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_4833[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_2944[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_4833[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_2944[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_2944[iVar0]), 1);
									iLocal_3503++;
									iLocal_2603[iVar0]++;
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
								func_768(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_2243 - fLocal_1426[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_764(iLocal_2262[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_4833[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_2944[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_4833[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_2944[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_2944[iVar0]), 1);
									iLocal_3503++;
									iLocal_2603[iVar0]++;
								}
								else
								{
									func_768(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_768(iVar0, 1090519040);
					}
				}
				else if (iLocal_2603[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_2262[iVar0], &cLocal_4816);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_2944[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_55 && ((!MISC::IS_BIT_SET(iLocal_2944[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_2944[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_534());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_534());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5264[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_4833[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_4833[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_2262[iVar0], &cLocal_4816)) && bVar17)
						{
							if (fLocal_2243 >= (fLocal_1426[iVar0] - (fLocal_2256 * fParam1)))
							{
								if ((iLocal_42 || iParam2) || (!bLocal_59 && !func_763(Local_3511[iVar0 /*3*/], Var12, 5f, fLocal_2254)))
								{
									if (iLocal_38)
									{
										func_762(Local_3511[iVar0 /*3*/], Var12, fLocal_2247);
									}
									iLocal_5264[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_4833[iVar0], Local_3511[iVar0 /*3*/], 0, 0, 0);
									if (iLocal_4833[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_5264[iVar0], 0);
									}
									if (uLocal_51 && !MISC::IS_BIT_SET(iLocal_2944[iVar0], 0))
									{
										func_761(iLocal_5264[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_5264[iVar0], Local_3511[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_5264[iVar0], fLocal_62[iVar0], fLocal_403[iVar0], fLocal_744[iVar0], fLocal_1085[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_4833[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_4833[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_5264[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_2944[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_5264[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_2944[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_5264[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_5264[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_5264[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_5264[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_4833[iVar0]);
									iLocal_3503 = (iLocal_3503 - 1);
									iLocal_2603[iVar0]++;
									bLocal_59 = true;
								}
								else if (fLocal_2243 > fLocal_1426[iVar0])
								{
									iLocal_3503 = (iLocal_3503 - 1);
									func_768(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_2603[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_3509 || iLocal_3509 == 0)) || iLocal_42) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_2944[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_2944[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_55 && ((!MISC::IS_BIT_SET(iLocal_2944[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_2944[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_534());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_534());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_5264[iVar0]))
							{
								if (!bLocal_59 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_5264[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_5264[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_42)
										{
											func_760(&(iLocal_5264[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_2944[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5264[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_2262[iVar0], &cLocal_4816);
							if (fLocal_2243 >= fLocal_1426[iVar0])
							{
								if (12 > iLocal_3494)
								{
									fVar15 = (fLocal_2243 - fLocal_1426[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_2262[iVar0], &cLocal_4816))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_2262[iVar0], &cLocal_4816))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_5264[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_2262[iVar0], fVar15, &cLocal_4816) };
											if (!func_763(Var6, Var12, 5f, fLocal_2254) && func_763(Var9, Var12, 5f, fLocal_2254))
											{
												if (!MISC::IS_BIT_SET(iLocal_2944[iVar0], 1))
												{
													func_760(&(iLocal_5264[iVar0]), iVar21, 0);
												}
												func_768(iVar0, 1090519040);
											}
											else if (((!bLocal_59 || MISC::IS_BIT_SET(iLocal_2944[iVar0], 1)) || iLocal_42) || iParam2)
											{
												if (func_753(&(iLocal_5264[iVar0]), iLocal_2262[iVar0], fVar15, 1, 0, 0, 1, bLocal_56))
												{
													if (!MISC::IS_BIT_SET(iLocal_2944[iVar0], 1))
													{
														func_760(&(iLocal_5264[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_5264[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_5264[iVar0], fParam1);
													iLocal_3494++;
													iLocal_2603[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_2944[iVar0], 1))
											{
												func_760(&(iLocal_5264[iVar0]), iVar21, 0);
											}
											func_768(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_2262[iVar0], &cLocal_4816))
									{
										if (!MISC::IS_BIT_SET(iLocal_2944[iVar0], 1))
										{
											func_760(&(iLocal_5264[iVar0]), iVar21, 0);
										}
										func_768(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_2944[iVar0], 1))
									{
										func_760(&(iLocal_5264[iVar0]), iVar21, 0);
									}
									func_768(iVar0, 1090519040);
								}
							}
							else if (iLocal_39 && !iLocal_47)
							{
								if (!MISC::IS_BIT_SET(iLocal_2944[iVar0], 1))
								{
									func_760(&(iLocal_5264[iVar0]), iVar21, 0);
								}
								func_768(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_2944[iVar0], 1))
							{
								func_760(&(iLocal_5264[iVar0]), iVar21, 0);
							}
							func_768(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_3509 = iVar0;
					}
				}
				else if (iLocal_2603[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5264[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5264[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5264[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_37)
									{
										if ((!bLocal_32 && !iLocal_29) && func_759(iLocal_5264[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_3508 || iLocal_3508 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_5264[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_5264[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_3508 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_52 && !MISC::IS_BIT_SET(iLocal_2944[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_3508 || iLocal_3508 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_5264[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_3508 = iVar0;
										}
									}
									if (bVar24)
									{
										func_755(iLocal_5264[iVar0]);
										iLocal_2603[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_5264[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5264[iVar0]);
							}
						}
						else
						{
							iLocal_2603[iVar0]++;
						}
					}
					else
					{
						iLocal_2603[iVar0]++;
					}
				}
				else if (iLocal_2603[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5264[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5264[iVar0]))
						{
							iLocal_2603[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5264[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_5264[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5264[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_2262[iVar0], &cLocal_4816))
							{
								if (fLocal_2243 > (fLocal_1426[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_2262[iVar0], &cLocal_4816)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5264[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5264[iVar0]);
							}
						}
					}
					else
					{
						iLocal_2603[iVar0]++;
					}
				}
				else if (iLocal_2603[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_5264[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_5264[iVar0]);
					}
					iLocal_3494 = (iLocal_3494 - 1);
					func_768(iVar0, fVar16);
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
			iLocal_3498 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_3508 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_3509 = 0;
		}
	}
	else
	{
		func_530();
	}
}


void func_768(int iParam0, float fParam1)//Position - 0x86307
{
	int iVar0;
	
	if (!iLocal_4833[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_4833[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_5264[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_5264[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_5264[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_5264[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_5264[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_61)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_30)
	{
		if (!bLocal_58)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_2210(iLocal_5264[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5264[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_5264[iParam0]));
		}
	}
	if (!bLocal_40 && !bLocal_53)
	{
		if (iLocal_2262[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_2262[iParam0], &cLocal_4816);
		}
	}
	iLocal_2603[iParam0] = 99;
}

void func_769(int iParam0, float fParam1, float fParam2)//Position - 0x86460
{
	var uVar0;
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
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fParam1) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Var7 = { Var4 - Var1 };
			fVar13 = SYSTEM::VMAG(Var7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_762(Var1, Var10, fVar13);
		}
	}
}

void func_770(int iParam0, float fParam1)//Position - 0x864E3
{
	if (!bLocal_41)
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

void func_771(int iParam0, float fParam1)//Position - 0x86530
{
	if (!bLocal_41)
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

void func_772(int iParam0, float fParam1)//Position - 0x8657D
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_2257 + 2000f);
		fVar2 = (fLocal_2258 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_3504 == 0)
				{
					Local_4804 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_2257) };
					iLocal_3504++;
				}
				else if (iLocal_3504 == 1)
				{
					Local_4807 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_3504++;
				}
				else if (!bLocal_59)
				{
					if (Local_4804.x > Local_4807.x)
					{
						fVar3 = Local_4804.x;
						Local_4804.x = Local_4807.x;
						Local_4807.x = fVar3;
					}
					if (Local_4804.f_1 > Local_4807.f_1)
					{
						fVar3 = Local_4804.f_1;
						Local_4804.f_1 = Local_4807.f_1;
						Local_4807.f_1 = fVar3;
					}
					if (Local_4804.f_2 > Local_4807.f_2)
					{
						fVar3 = Local_4804.f_2;
						Local_4804.f_2 = Local_4807.f_2;
						Local_4807.f_2 = fVar3;
					}
					Local_4804 = { Local_4804 - Vector(fLocal_2261, fLocal_2261, fLocal_2261) };
					Local_4807 = { Local_4807 + Vector(fLocal_2261, fLocal_2261, fLocal_2261) };
					PATHFIND::SET_ROADS_IN_AREA(Local_4804, Local_4807, 0, 0);
					fLocal_2257 = fVar1;
					iLocal_3504 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_3507 == 0)
			{
				Local_4810 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_2258) };
				iLocal_3507++;
			}
			else if (iLocal_3507 == 1)
			{
				Local_4813 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_3507++;
			}
			else if (!bLocal_59 && !bVar4)
			{
				if (Local_4810.x > Local_4813.x)
				{
					fVar3 = Local_4810.x;
					Local_4810.x = Local_4813.x;
					Local_4813.x = fVar3;
				}
				if (Local_4810.f_1 > Local_4813.f_1)
				{
					fVar3 = Local_4810.f_1;
					Local_4810.f_1 = Local_4813.f_1;
					Local_4813.f_1 = fVar3;
				}
				if (Local_4810.f_2 > Local_4813.f_2)
				{
					fVar3 = Local_4810.f_2;
					Local_4810.f_2 = Local_4813.f_2;
					Local_4813.f_2 = fVar3;
				}
				Local_4810 = { Local_4810 - Vector(fLocal_2261, fLocal_2261, fLocal_2261) };
				Local_4813 = { Local_4813 + Vector(fLocal_2261, fLocal_2261, fLocal_2261) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_4810, Local_4813, 1);
				fLocal_2258 = fVar2;
				iLocal_3507 = 0;
			}
		}
	}
}


void func_774()//Position - 0x8686B
{
	iLocal_42 = 1;
}

void func_775(float fParam0, char* sParam1)//Position - 0x86876
{
	if (MISC::ARE_STRINGS_EQUAL(sParam1, sLocal_5832))
	{
		if (fParam0 < 2000f)
		{
			fLocal_9093 = 1f;
		}
		else if (fParam0 < 5000f)
		{
			GlobalFunc_2219(&fLocal_9094, &iLocal_5844, iLocal_5846, 2.5f, 5f, 25f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < 15000f)
		{
			GlobalFunc_2219(&fLocal_9094, &iLocal_5844, iLocal_5846, 5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < 86000f)
		{
			GlobalFunc_2219(&fLocal_9094, &iLocal_5844, iLocal_5846, 5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < 102000f)
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5846);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_5839, -1273030092) != 1)
			{
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_5839, iLocal_5846, 2336.798f, 5885.911f, 46.6832f, 14, 60f, 786469, 1f, 1f, 1);
			}
			GlobalFunc_2219(&fLocal_9094, &iLocal_5844, iLocal_5845, 5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(500, sParam1))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5845);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_5838, -1273030092) != 1)
			{
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_5838, iLocal_5845, 2336.798f, 5885.911f, 46.6832f, 14, 60f, 786469, 1f, 1f, 1);
			}
		}
		GlobalFunc_2514(&fLocal_9093, fLocal_9094, 1008981770);
		fLocal_5835 = fLocal_9093;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam1, sLocal_5833))
	{
		if (fParam0 < 5000f)
		{
			fLocal_9093 = 1f;
		}
		else if (fParam0 < 128000f)
		{
			GlobalFunc_2219(&fLocal_9094, &iLocal_5848, iLocal_5847, 5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < 135000f)
		{
			GlobalFunc_2219(&fLocal_9094, &iLocal_5848, iLocal_5847, 10f, 15f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < 140000f)
		{
			GlobalFunc_2219(&fLocal_9094, &iLocal_5848, iLocal_5847, 5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < 153107.8f)
		{
			GlobalFunc_2219(&fLocal_9094, &iLocal_5848, iLocal_5847, 5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(500, sParam1) - 100f))
		{
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_5847);
		}
		else if (fParam0 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(500, sParam1))
		{
			if (fLocal_9093 < 1f)
			{
				fLocal_9093 = (fLocal_9093 + (0.1f * SYSTEM::TIMESTEP()));
			}
			else if (fLocal_9093 > 1f)
			{
				fLocal_9093 = (fLocal_9093 - (0.1f * SYSTEM::TIMESTEP()));
			}
		}
		GlobalFunc_2514(&fLocal_9093, fLocal_9094, 1008981770);
		fLocal_5835 = fLocal_9093;
	}
}



void func_778()//Position - 0x86E14
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_6097 = 0;
		func_1();
	}
	if (func_782(&(uLocal_6281[0])))
	{
		iLocal_6097 = 2;
		func_1();
	}
	if (func_782(&(uLocal_6281[2])))
	{
		iLocal_6097 = 4;
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[2]))
	{
		if (iLocal_6096 == 6)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_6281[2], PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_6097 = 5;
				func_1();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_5847))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_5847))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_6281[2], iLocal_5847, 0))
						{
							iLocal_6097 = 5;
							func_1();
						}
					}
				}
			}
		}
	}
	if (func_782(&(uLocal_6281[1])))
	{
		iLocal_6097 = 3;
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5840) && !PED::IS_PED_INJURED(iLocal_5840))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5840, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_6097 = 7;
			func_1();
		}
	}
	if (func_782(&iLocal_5840))
	{
		iLocal_6097 = 6;
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5849) && !ENTITY::IS_ENTITY_DEAD(iLocal_5849))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5849, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_6097 = 9;
			func_1();
		}
	}
	func_782(&iLocal_5841);
	func_782(&iLocal_5842);
	func_782(&iLocal_5843);
	if (func_781(&iLocal_5849))
	{
		iLocal_6097 = 8;
		func_1();
	}
	if (iLocal_6096 <= 7)
	{
		if (func_782(&iLocal_5838) || func_782(&iLocal_5839))
		{
			iLocal_6097 = 10;
			func_1();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5838) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5838, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_6097 = 18;
			func_1();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5838) && ((((((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_5838, 1), 10f, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_5838, 1), 20f)) || PED::IS_PED_BEING_JACKED(iLocal_5838)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_5845))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5838, PLAYER::PLAYER_PED_ID(), 1)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5845, PLAYER::PLAYER_PED_ID(), 0))) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5838, 1), 1) < 25f)))
		{
			iLocal_6097 = 19;
			func_1();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5839) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5839, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_6097 = 18;
			func_1();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5839) && ((((((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_5839, 1), 10f, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_5839, 1), 20f)) || PED::IS_PED_BEING_JACKED(iLocal_5839)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_5846) && (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_5846))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5839, PLAYER::PLAYER_PED_ID(), 1)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_5846) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5846, PLAYER::PLAYER_PED_ID(), 0))) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5839, 1), 1) < 25f)))
		{
			iLocal_6097 = 19;
			func_1();
		}
	}
	if (func_781(&iLocal_5844))
	{
		if (GlobalFunc_2226(&iLocal_5844))
		{
			iLocal_6097 = 22;
		}
		else
		{
			iLocal_6097 = 11;
		}
		func_1();
	}
	if (func_781(&iLocal_5845))
	{
		if (GlobalFunc_2226(&iLocal_5845))
		{
			iLocal_6097 = 22;
		}
		else
		{
			iLocal_6097 = 11;
		}
		func_1();
	}
	if (func_781(&iLocal_5846))
	{
		if (GlobalFunc_2226(&iLocal_5846))
		{
			iLocal_6097 = 22;
		}
		else
		{
			iLocal_6097 = 11;
		}
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844) && ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5844, PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_5844) < 700) || (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_5844, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_5844, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_5844, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_5844, 5, 0))))
	{
		iLocal_6097 = 21;
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5845, PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_5845) < 700) || (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_5845, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_5845, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_5845, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_5845, 5, 0))))
	{
		iLocal_6097 = 21;
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5846) && ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5846, PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_5846) < 700) || (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_5846, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_5846, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_5846, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_5846, 5, 0))))
	{
		iLocal_6097 = 21;
		func_1();
	}
	if (func_781(&iLocal_5847))
	{
		if (iLocal_6096 < 8)
		{
			iLocal_6097 = 13;
			func_1();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5847) && !ENTITY::IS_ENTITY_DEAD(iLocal_5847))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_5847, PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_6097 = 14;
			func_1();
		}
	}
	if (func_781(&iLocal_5848))
	{
		if (iLocal_6096 < 8)
		{
			iLocal_6097 = 12;
			func_1();
		}
	}
	if (iLocal_6096 == 2)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) >= 150f)
			{
				iLocal_6097 = 17;
				func_1();
			}
		}
	}
	if (iLocal_6096 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if ((((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_5838, -1273030092) != 1) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5845) < 47936f) && ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_5839, -1273030092) != 1) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_5846) < 70000f)) && (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) >= 300f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) >= 300f))
				{
					iLocal_6097 = 15;
					func_1();
				}
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_5838, -1273030092) != 1 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) >= 600f) || (TASK::GET_SCRIPT_TASK_STATUS(iLocal_5839, -1273030092) != 1 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) >= 600f))
				{
					iLocal_6097 = 15;
					func_1();
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5844, 1), 1) >= 75f)
				{
					iLocal_6097 = 17;
					func_1();
				}
				GlobalFunc_2515(iLocal_5859, iLocal_5845, 250f, 1061158912, 0);
				GlobalFunc_2515(iLocal_5860, iLocal_5846, 250f, 1061158912, 0);
			}
		}
	}
	if (iLocal_6096 == 6)
	{
		if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_5844) && ENTITY::DOES_ENTITY_EXIST(iLocal_5845)) && ENTITY::DOES_ENTITY_EXIST(iLocal_5846)) && ENTITY::DOES_ENTITY_EXIST(iLocal_5847)) && ENTITY::DOES_ENTITY_EXIST(iLocal_5848))
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if ((((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847)) || func_742("S3_STOP"))
				{
					if (((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5845, 1), 1) >= 600f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5846, 1), 1) >= 600f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5847, 1), 1) >= 300f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5848, 1), 1) >= 300f)
					{
						iLocal_6097 = 15;
						func_1();
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5848))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_5848, 1), 1) >= 75f)
						{
							iLocal_6097 = 16;
							func_1();
						}
					}
				}
				GlobalFunc_2515(iLocal_5858, iLocal_5844, 500f, 1061158912, 0);
				GlobalFunc_2515(iLocal_5859, iLocal_5845, 500f, 1061158912, 0);
				GlobalFunc_2515(iLocal_5860, iLocal_5846, 500f, 1061158912, 0);
				GlobalFunc_2515(iLocal_5861, iLocal_5847, 250f, 1061158912, 0);
				GlobalFunc_2515(iLocal_5862, iLocal_5848, 250f, 1061158912, 0);
			}
		}
	}
}



int func_781(int iParam0)//Position - 0x878DD
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if ((ENTITY::IS_ENTITY_DEAD(*iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)) || GlobalFunc_2226(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_782(int iParam0)//Position - 0x87919
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*iParam0) || PED::IS_PED_INJURED(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}



void func_785()//Position - 0x87983
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5385(1);
	GlobalFunc_4956();
}

















int func_802(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x88525
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
			func_820(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		func_820((*uParam0)[uParam0->f_7], 0);
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
		GlobalFunc_8378();
		GlobalFunc_582(iVar2);
		GlobalFunc_8999();
		GlobalFunc_8375(iVar2);
		func_808(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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
			GlobalFunc_8382();
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






void func_808(int iParam0)//Position - 0x88C02
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_30787[(38 / 32)]), (38 % 32));
			func_634(38, 0);
			MISC::SET_BIT(&(Global_30787[(41 / 32)]), (41 % 32));
			func_634(41, 0);
			MISC::SET_BIT(&(Global_30787[(43 / 32)]), (43 % 32));
			func_634(43, 0);
			MISC::SET_BIT(&(Global_30787[(42 / 32)]), (42 % 32));
			func_634(42, 0);
			MISC::SET_BIT(&(Global_30787[(44 / 32)]), (44 % 32));
			func_634(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_634(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_634(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_30787[(53 / 32)]), (53 % 32));
			func_634(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_30787[(81 / 32)]), (81 % 32));
			func_634(81, 0);
			MISC::SET_BIT(&(Global_30787[(82 / 32)]), (82 % 32));
			func_634(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_30787[(47 / 32)]), (47 % 32));
			func_634(47, 0);
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_634(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_634(50, 0);
			break;
	}
}












void func_820(int iParam0, bool bParam1)//Position - 0x896FC
{
	GlobalFunc_8565(iParam0);
	GlobalFunc_7700(iParam0, bParam1);
	GlobalFunc_7713(iParam0);
	GlobalFunc_7705(iParam0);
	GlobalFunc_7712(iParam0);
	GlobalFunc_7711(iParam0);
	GlobalFunc_7710(iParam0);
}


















void func_838(bool bParam0, bool bParam1)//Position - 0x8A16C
{
	int iVar0;
	
	if (iLocal_5791)
	{
		RECORDING::_0x81CBAE94390F9F89();
		iLocal_5791 = 0;
	}
	GlobalFunc_5810(&uLocal_5911);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	HUD::CLEAR_HELP(1);
	GRAPHICS::_0x5DEBD9C4DC995692();
	if (func_742("SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER"))
	{
		VEHICLE::_SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER(1f);
		func_739("SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER", 0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				GlobalFunc_2510(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 2);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), -1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_309(0)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_309(0)))
		{
			PED::SET_PED_CONFIG_FLAG(func_309(0), 243, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_309(2)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_309(2)))
		{
			PED::SET_PED_CONFIG_FLAG(func_309(2), 243, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_309(1)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_309(1)))
		{
			PED::SET_PED_CONFIG_FLAG(func_309(1), 243, 0);
		}
	}
	GlobalFunc_5100(0, iLocal_5803);
	GlobalFunc_5100(2, iLocal_5803);
	if (iLocal_5799 == 0)
	{
		func_32(PLAYER::PLAYER_PED_ID());
	}
	GlobalFunc_52(1, 1);
	func_323(&uLocal_5857);
	func_323(&iLocal_5858);
	func_323(&iLocal_5859);
	func_323(&iLocal_5860);
	func_323(&iLocal_5861);
	func_323(&iLocal_5863);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5847) && !ENTITY::IS_ENTITY_DEAD(iLocal_5847))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5847))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5847);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844) && !ENTITY::IS_ENTITY_DEAD(iLocal_5844))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5844))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5844);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && !ENTITY::IS_ENTITY_DEAD(iLocal_5845))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5845))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5845);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5846) && !ENTITY::IS_ENTITY_DEAD(iLocal_5846))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_5846))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_5846);
			}
		}
	}
	if (!bParam1)
	{
		GlobalFunc_2240(&(uLocal_6281[0]));
		GlobalFunc_2240(&(uLocal_6281[2]));
		GlobalFunc_2240(&(uLocal_6281[1]));
		GlobalFunc_2240(&iLocal_5838);
		GlobalFunc_2240(&iLocal_5839);
		GlobalFunc_2240(&iLocal_5840);
		GlobalFunc_2240(&iLocal_5841);
		GlobalFunc_2240(&iLocal_5842);
		GlobalFunc_2240(&iLocal_5843);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_5844))
			{
				GlobalFunc_2244(&iLocal_5844);
			}
		}
		GlobalFunc_2244(&iLocal_5845);
		GlobalFunc_2244(&iLocal_5847);
		GlobalFunc_2244(&iLocal_5849);
		GlobalFunc_2244(&iLocal_5850);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_6281[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[2]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_6281[2]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[1]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_6281[1]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5838))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_5838);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5839))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_5839);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5840))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_5840);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5841))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_5841);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5842))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_5842);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5843))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_5843);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_5844))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_5844);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_5845);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5847))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_5847);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5849))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_5849);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5850))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_5850);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_6281[1]))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_6281[1], 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_6281[0]))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_6281[0], 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_6281[2]))
	{
		if (!PED::IS_PED_INJURED(uLocal_6281[2]))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_6281[2], 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844) && !ENTITY::IS_ENTITY_DEAD(iLocal_5844))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_5844) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_5844, 1))
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_5844, 0, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_5844, 1, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_5844);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845) && !ENTITY::IS_ENTITY_DEAD(iLocal_5845))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_5845) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_5845, 1))
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_5845, 0, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_5845, 1, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_5845);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5846) && !ENTITY::IS_ENTITY_DEAD(iLocal_5846))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_5846) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_5846, 1))
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_5846, 0, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_5846, 1, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_5846);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_8893))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_8893);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_8873))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_8873);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_8883))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_8883);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5869))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_5869);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5870))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_5870);
	}
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("cheetah"));
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("f620"));
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("policeb"));
	if (func_742("ChopShopDoors"))
	{
		ENTITY::REMOVE_MODEL_HIDE(498.7252f, -1317.755f, 28.2534f, 1f, joaat("prop_sc1_06_gate_l"), 0);
		ENTITY::REMOVE_MODEL_HIDE(494.6904f, -1312.066f, 28.2534f, 1f, joaat("prop_sc1_06_gate_r"), 0);
		func_739("ChopShopDoors", 0);
	}
	GlobalFunc_4937(0, 0);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	GlobalFunc_4948(&uLocal_5899, 0, 0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
	CAM::STOP_GAMEPLAY_HINT(1);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
	STREAMING::END_SRL();
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_5868))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_5868);
	}
	func_843();
	func_842();
	func_841();
	func_840();
	SYSTEM::SETTIMERA(0);
	iLocal_5732 = 0;
	iLocal_5733 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_5734)
	{
		iLocal_5734[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_5740)
	{
		iLocal_5740[iVar0] = 0;
		iVar0++;
	}
	iLocal_5792 = 0;
	bLocal_5797 = false;
	iLocal_5798 = 0;
	func_588(&uLocal_5874, 1, 0);
	fLocal_5809 = 0f;
	func_521(1, 1);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_699();
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(4, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(56.0588f, 4597.978f, -1928.376f) - Vector(1000f, 1000f, 1000f), Vector(56.0588f, 4597.978f, -1928.376f) + Vector(1000f, 1000f, 1000f), 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(116.4686f, 361.8055f, 2581.106f) - Vector(10f, 25f, 25f), Vector(116.4686f, 361.8055f, 2581.106f) + Vector(10f, 25f, 25f), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_hwaycop_01"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeb"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("f620"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("entityxf"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cheetah"), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_5872);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_5873);
	GlobalFunc_729(&uLocal_6281, 0, 0);
	GlobalFunc_729(&uLocal_6281, 1, 0);
	GlobalFunc_729(&uLocal_6281, 2, 0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_DEVIN_DRIVES_AWAY"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_DEVIN_DRIVES_AWAY");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_RACE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_GET_TO_RACE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_MAIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_MAIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_SKIDDING_CARS"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_SKIDDING_CARS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_FRANKLIN_CALLS_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_FRANKLIN_CALLS_MICHAEL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_CHASE_MAIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_CHASE_MAIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_ENTER_TUNNEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_ENTER_TUNNEL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_PASS_THE_LOST"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_PASS_THE_LOST");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_GARAGE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_GET_TO_GARAGE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GARAGE_ARRIVAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_GARAGE_ARRIVAL");
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5844))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5844, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5845))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5845, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5846))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5846, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5847))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5847, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[3]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5644[3], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[4]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5644[4], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5644[5]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_5644[5], 0);
	}
	func_20(10);
	AUDIO::STOP_STREAM();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_785();
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	GlobalFunc_8316(0, 1, 1, 0);
	func_521(0, 1);
	iLocal_6360 = 0;
	iLocal_5799 = 0;
	if (bParam0 == 0)
	{
		GlobalFunc_5661(21, 1);
	}
	else
	{
		GlobalFunc_7934(21, 1);
	}
	if (bParam0 == 0)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_5871))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_5871);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}


void func_840()//Position - 0x8AAE6
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_6258;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_6258[iVar1] = 0;
		iVar1++;
	}
}

void func_841()//Position - 0x8AB11
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_6227)
	{
		iLocal_6227[iVar0] = 0;
		iVar0++;
	}
}

void func_842()//Position - 0x8AB38
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_6201)
	{
		iLocal_6201[iVar0] = 0;
		iVar0++;
	}
}

void func_843()//Position - 0x8AB5F
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_6099;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_6099[iVar1] = 0;
		iVar1++;
	}
	iLocal_6200 = 0;
}



