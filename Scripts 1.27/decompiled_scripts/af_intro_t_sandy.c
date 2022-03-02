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
	int iLocal_36 = 0;
	var uLocal_37 = 15;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
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
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var3;
	
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
	GlobalFunc_501(29);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_28();
	}
	iLocal_36 = 0;
	GlobalFunc_500(&uLocal_37);
	GlobalFunc_499(&uLocal_37, 1701.78f, 3225.148f, 40.0202f);
	GlobalFunc_499(&uLocal_37, 1678.909f, 3287.602f, 39.9648f);
	GlobalFunc_499(&uLocal_37, 1710.438f, 3326.499f, 40.1797f);
	GlobalFunc_499(&uLocal_37, 1738.879f, 3335.25f, 40.1493f);
	GlobalFunc_499(&uLocal_37, 1768.387f, 3312.101f, 40.2875f);
	GlobalFunc_499(&uLocal_37, 1819.241f, 3225.449f, 42.9019f);
	GlobalFunc_498(&uLocal_37);
	while (true)
	{
		switch (iLocal_36)
		{
			case 0:
				if (func_18())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var3 = { 1749.71f, 3267.83f, 40.24f };
						if (GlobalFunc_497(Var0, Var3, 75f))
						{
							if (GlobalFunc_496(&uLocal_37, Var0))
							{
								if (Var0.f_2 > 39f && Var0.f_2 < 43f)
								{
									iLocal_36 = 1;
								}
								else
								{
									SYSTEM::WAIT(100);
								}
							}
							else
							{
								SYSTEM::WAIT(100);
							}
						}
						else
						{
							SYSTEM::WAIT(1500);
						}
					}
				}
				else
				{
					SYSTEM::WAIT(1500);
				}
				break;
			
			case 1:
				func_2();
				break;
			
			case 2:
				GlobalFunc_492(29);
				func_28();
				break;
		}
		SYSTEM::WAIT(0);
	}
}


void func_2()//Position - 0x230
{
	GlobalFunc_7682(-815326385);
	GlobalFunc_6677("SHI_T_SANDY_2", 0, 0, -1, 10000, 7, 0, 0, 0);
	SYSTEM::WAIT(0);
	GlobalFunc_6677("SHI_T_SANDY_3", 0, 0, -1, 10000, 7, 0, 0, 0);
	iLocal_36 = 2;
}
















int func_18()//Position - 0xCD5
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (GlobalFunc_8354() != 2)
	{
		return 0;
	}
	if (Global_24446)
	{
		return 0;
	}
	if (Global_54744)
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			return 0;
		}
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (GlobalFunc_488())
	{
		return 0;
	}
	return 1;
}










void func_28()//Position - 0xFE8
{
	BRAIN::_0x0B40ED49D7D6FF84();
	BRAIN::_0x4D953DF78EBF8158();
	SCRIPT::TERMINATE_THIS_THREAD();
}


