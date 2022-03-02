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
	int iLocal_42 = 0;
	var uLocal_43 = 8;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 2;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 8;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 8;
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
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	struct<858> Local_78 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<3> Local_947 = { 0, 0, 0 } ;
	struct<3> Local_950 = { 0, 0, 0 } ;
	int iLocal_953 = 0;
	var uLocal_954 = 0;
	int iLocal_955[2] = { 0, 0 };
	int iLocal_958 = 0;
	struct<5> Local_959 = { 0, 0, 0, 0, 0 } ;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 21;
	var uLocal_967 = 6;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	int iLocal_971 = 0;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	var uLocal_976[2] = { 0, 0 };
	int iLocal_979 = 0;
	int iLocal_980 = 0;
	int iScriptParam_0 = 0;
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
	iLocal_77 = joaat("p_amb_phone_01");
	Local_947 = { 0f, 0f, 0f };
	Local_950 = { 0f, 0f, 0f };
	iLocal_953 = -1;
	iLocal_974 = joaat("s_m_m_autoshop_02");
	iLocal_975 = joaat("taxi");
	iLocal_979 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(35))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 1)
		{
			func_935(0);
		}
		else
		{
			func_935(5);
		}
		func_928();
	}
	func_918();
	SYSTEM::WAIT(0);
	while (iLocal_979)
	{
		SYSTEM::WAIT(0);
		switch (Local_78)
		{
			case 0:
				func_917(iScriptParam_0);
				if (Local_78.f_1 != 7)
				{
					func_935(Local_78.f_1);
				}
				break;
			
			case 1:
				func_907();
				if (Local_78.f_1 != 7)
				{
					func_935(Local_78.f_1);
				}
				break;
			
			case 2:
				if (Local_78.f_2)
				{
					Local_78.f_2 = 0;
					func_898();
				}
				func_831();
				if (Local_78.f_1 != 7)
				{
					func_935(Local_78.f_1);
				}
				break;
			
			case 3:
				if (func_830())
				{
					func_818();
				}
				break;
			
			case 4:
				if (func_817())
				{
					func_815();
				}
				break;
			
			case 5:
				if (func_781())
				{
					func_818();
				}
				break;
			
			case 6:
				if (Local_78.f_2)
				{
					Local_78.f_2 = 0;
					func_775();
				}
				func_288();
				if (Local_78.f_1 != 7)
				{
					func_935(Local_78.f_1);
				}
				break;
			
			case 7:
				if (func_4(1))
				{
					func_1();
				}
				break;
			
			case 8:
				if (func_4(0))
				{
					func_1();
				}
				break;
			
			default:
				break;
		}
	}
	func_928();
}

void func_1()//Position - 0x1E1
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_4907();
	iLocal_979 = 0;
}



int func_4(bool bParam0)//Position - 0x26C
{
	struct<151> Var0;
	int iVar154;
	
	if (REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
	{
		func_283();
		func_282(4);
		return 0;
	}
	else if (GlobalFunc_142())
	{
		if (GlobalFunc_145())
		{
			func_282(3);
			return 0;
		}
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_282(0);
		return 0;
	}
	else if ((GlobalFunc_6687(6) && !GlobalFunc_39(6)) && !GlobalFunc_39(7))
	{
		func_282(1);
		return 0;
	}
	else
	{
		Var0 = 6;
		Var0.f_112 = 2;
		Var0.f_140 = 3;
		Var0.f_150 = 3;
		if (bParam0)
		{
			func_275(Local_78.f_644, &Var0);
		}
		else
		{
			func_274(Global_86194, &Var0);
		}
		if (func_65(&Var0, &(Local_78.f_650), &(Local_78.f_259), &(Local_78.f_257), &(Local_78.f_651), Local_78.f_56.f_7, Local_78.f_109.f_7, &(Local_78.f_649), Local_78.f_56.f_8, Local_78.f_109.f_8))
		{
			iVar154 = 0;
			while (iVar154 < 9)
			{
				if (GlobalFunc_2014(iVar154) == 4 && GlobalFunc_3050(iVar154) == 0)
				{
					func_62(iVar154);
				}
				iVar154++;
			}
			if (Local_78.f_56.f_1 != 145)
			{
				STATS::PLAYSTATS_FRIEND_ACTIVITY(GlobalFunc_769(Local_78.f_56.f_1), 0);
			}
			if (Local_78.f_109.f_1 != 145)
			{
				STATS::PLAYSTATS_FRIEND_ACTIVITY(GlobalFunc_769(Local_78.f_109.f_1), 0);
			}
			func_5(&(Local_78.f_3), 0, 1);
			func_5(&(Local_78.f_56), 0, 1);
			func_5(&(Local_78.f_109), 0, 1);
			return 1;
		}
	}
	return 0;
}

void func_5(var uParam0, int iParam1, int iParam2)//Position - 0x3EF
{
	if (*uParam0 != 0)
	{
		if (GlobalFunc_42(uParam0->f_1))
		{
			MISC::CLEAR_BIT(&Global_86218, uParam0->f_1);
		}
		func_58(uParam0);
		func_57(uParam0, 0);
		func_51(uParam0);
		if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
		}
		if (HUD::DOES_BLIP_EXIST(uParam0->f_11))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_11));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_9))
			{
				ENTITY::DETACH_ENTITY(uParam0->f_9, 1, 1);
			}
			OBJECT::DELETE_OBJECT(&(uParam0->f_9));
		}
		func_49(uParam0);
		func_46(uParam0);
		if (uParam0->f_35 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_35);
		}
		if (uParam0->f_34 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_34);
		}
		if (uParam0->f_50)
		{
			GlobalFunc_3060(uParam0->f_1);
		}
		if (GlobalFunc_42(uParam0->f_1) && (((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam2))
		{
			func_42(uParam0, 2, 0);
		}
		else
		{
			func_42(uParam0, 1, 0);
		}
		func_41(uParam0->f_1, 1);
		func_40(uParam0);
		func_36(uParam0->f_1);
		if (iParam1 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_8, 0))
			{
				VEHICLE::DELETE_VEHICLE(&(uParam0->f_8));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && uParam0->f_7 != PLAYER::PLAYER_PED_ID())
		{
			if (iParam1 == 0 || iParam1 == 1)
			{
				PED::DELETE_PED(&(uParam0->f_7));
			}
			else if (iParam1 == 2)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_7));
			}
			else if (iParam1 == 4)
			{
				func_35(uParam0->f_7, uParam0->f_1);
			}
			else if (iParam1 == 5)
			{
				func_14(uParam0->f_7, uParam0->f_1, Global_86214);
			}
			else if (iParam1 == 6)
			{
				func_11(uParam0->f_7, uParam0->f_1);
			}
			else if (iParam1 == 3)
			{
			}
		}
		func_6(uParam0);
	}
}

void func_6(var uParam0)//Position - 0x5C8
{
	*uParam0 = 0;
	uParam0->f_1 = 145;
	uParam0->f_2 = 25;
	StringCopy(&(uParam0->f_3), "", 16);
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	GlobalFunc_6877(&(uParam0->f_15));
	uParam0->f_21 = { 0f, 0f, 0f };
	uParam0->f_24 = { 0f, 0f, 0f };
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	GlobalFunc_235(&(uParam0->f_29));
	uParam0->f_32 = 0;
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_37 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_41 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 7;
}





void func_11(int iParam0, int iParam1)//Position - 0x71D
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_GROUP_MEMBER(iParam0, GlobalFunc_468()))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		PED::SET_PED_KEEP_TASK(iParam0, 1);
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1146898486);
		if (iVar0 != 1 && iVar0 != 0)
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			TASK::TASK_WANDER_STANDARD(iParam0, 1193033728, 0);
		}
	}
	func_12(iParam0, iParam1, 5);
}

void func_12(int iParam0, int iParam1, int iParam2)//Position - 0x781
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
	else if (!GlobalFunc_42(iParam1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
	else if (Global_68245)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("friends_controller")) == 0)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
	else if (GlobalFunc_39(2))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
	else if ((Global_34913 == 6 || Global_34913 == 7) && Global_86193 < 22)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
	else
	{
		if (!PED::IS_PED_INJURED(Global_86205[iParam1]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
		Global_86205[iParam1] = iParam0;
		Global_86209[iParam1] = iParam2;
	}
}


void func_14(int iParam0, int iParam1, int iParam2)//Position - 0x847
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	var uVar8;
	var uVar9;
	var uVar10;
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (PED::IS_PED_GROUP_MEMBER(iParam0, GlobalFunc_468()))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		PED::SET_PED_KEEP_TASK(iParam0, 1);
		TASK::CLEAR_PED_TASKS(iParam0);
		bVar0 = false;
		if (iParam2 == 44)
		{
			Var1 = { 1382.859f, -1706.069f, 62.8927f };
			bVar0 = true;
		}
		else if (iParam2 != -1)
		{
			iVar4 = Global_81155[iParam2 /*34*/].f_10;
			if (GlobalFunc_4324(iVar4))
			{
				Var5 = { GlobalFunc_2247(iVar4, GlobalFunc_8315()) };
			}
			else
			{
				Var5 = { GlobalFunc_2247(iVar4, 0) };
			}
			Var1 = { Var5 + GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(iParam0, 1) - Var5) * Vector(50f, 50f, 50f) };
			if (func_15(Var1, &Var1, &uVar8, &uVar9, 1, 0, 1))
			{
				bVar0 = true;
			}
		}
		TASK::OPEN_SEQUENCE_TASK(&uVar10);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		}
		TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 3072, 2);
		TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(800, 1200));
		if (bVar0)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var1, 1f, -1, 0.25f, 5, 1193033728);
		}
		TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar10);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar10);
		TASK::CLEAR_SEQUENCE_TASK(&uVar10);
	}
	func_12(iParam0, iParam1, 4);
}

int func_15(struct<3> Param0, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x983
{
	int iVar0;
	
	while (true)
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, iParam6, uParam3, uParam4, uParam5, 1, 1077936128, 0))
		{
			if (GlobalFunc_8397(*uParam3, 10f, 1f, 1f, 5f, iParam7, bParam8, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iParam6++;
		iVar0++;
		if (iVar0 > 75)
		{
			*uParam3 = { Param0 };
			return 0;
		}
	}
	return 0;
}




















void func_35(int iParam0, int iParam1)//Position - 0x11AE
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (PED::IS_PED_GROUP_MEMBER(iParam0, GlobalFunc_468()))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		PED::SET_PED_KEEP_TASK(iParam0, 1);
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1805844857);
		if (iVar0 != 1 && iVar0 != 0)
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 5000f, -1, 1, 0);
		}
	}
	func_12(iParam0, iParam1, 6);
}

int func_36(int iParam0)//Position - 0x1218
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		GlobalFunc_5984(iVar0, &iVar1, &iVar2);
		if (iVar1 == iParam0 || iVar2 == iParam0)
		{
			iVar4 = GlobalFunc_2014(iVar0);
			if (iVar4 == 3 || iVar4 == 4)
			{
				GlobalFunc_2640(iVar0, 0);
				iVar3 = 1;
			}
		}
		iVar0++;
	}
	return iVar3;
}




void func_40(var uParam0)//Position - 0x1351
{
	if (*uParam0 != 0)
	{
		if (uParam0->f_2 < 24)
		{
			if (uParam0->f_28 != 0)
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_28, 0);
				uParam0->f_28 = 0;
			}
		}
	}
}

void func_41(int iParam0, int iParam1)//Position - 0x137F
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				Global_85373[8] = 140;
				break;
			
			case 1:
				break;
			
			case 2:
				Global_85373[9] = 140;
				break;
			
			case 19:
				Global_85373[6] = 140;
				break;
			
			case 14:
				Global_85373[0] = 140;
				break;
			
			case 17:
				Global_85373[2] = 140;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				if (Global_85373[8] == 140)
				{
					Global_85373[8] = 141;
				}
				break;
			
			case 1:
				break;
			
			case 2:
				if (Global_85373[9] == 140)
				{
					Global_85373[9] = 141;
				}
				break;
			
			case 19:
				if (Global_85373[6] == 140)
				{
					Global_85373[6] = 141;
				}
				break;
			
			case 14:
				if (Global_85373[0] == 140)
				{
					Global_85373[0] = 141;
				}
				break;
			
			case 17:
				if (Global_85373[2] == 140)
				{
					Global_85373[2] = 141;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_42(var uParam0, int iParam1, int iParam2)//Position - 0x14A8
{
	if (uParam0->f_50 || iParam2)
	{
		if (Local_78.f_3.f_1 != 145 && Local_78.f_3.f_1 != uParam0->f_1)
		{
			GlobalFunc_8000(Local_78.f_3.f_1, uParam0->f_1, iParam1);
		}
		if (Local_78.f_56.f_50 && Local_78.f_56.f_1 != uParam0->f_1)
		{
			GlobalFunc_8000(Local_78.f_56.f_1, uParam0->f_1, iParam1);
		}
		if (Local_78.f_109.f_50 && Local_78.f_109.f_1 != uParam0->f_1)
		{
			GlobalFunc_8000(Local_78.f_109.f_1, uParam0->f_1, iParam1);
		}
	}
}




void func_46(var uParam0)//Position - 0x1756
{
	if (*uParam0 != 0)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			PED::SET_PED_SUFFERS_CRITICAL_HITS(uParam0->f_7, 1);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uParam0->f_7, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 32, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 107, false);
			if (PED::DOES_GROUP_EXIST(GlobalFunc_468()) && PED::IS_PED_GROUP_MEMBER(uParam0->f_7, GlobalFunc_468()))
			{
				PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(uParam0->f_7, GlobalFunc_468(), 0);
			}
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_7, 0);
			if (uParam0->f_1 != 0)
			{
				if (GlobalFunc_580(4, uParam0->f_7))
				{
					GlobalFunc_583(4, uParam0->f_7, 0);
				}
			}
			if (uParam0->f_7 != PLAYER::PLAYER_PED_ID())
			{
				if (PED::IS_PED_IN_GROUP(uParam0->f_7))
				{
					PED::REMOVE_PED_FROM_GROUP(uParam0->f_7);
				}
			}
		}
	}
}



void func_49(var uParam0)//Position - 0x18FC
{
	char* sVar0;
	
	if (func_50(uParam0, &sVar0))
	{
		STREAMING::REMOVE_ANIM_DICT(&sVar0);
	}
}

int func_50(var uParam0, char* sParam1)//Position - 0x1915
{
	if (uParam0->f_1 == 0)
	{
		StringCopy(sParam1, "friends@frm@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 1)
	{
		StringCopy(sParam1, "friends@frf@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 2)
	{
		StringCopy(sParam1, "friends@frt@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 19)
	{
		StringCopy(sParam1, "friends@frl@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 14)
	{
		StringCopy(sParam1, "friends@frj@ig_1", 64);
		return 1;
	}
	else if (uParam0->f_1 == 17)
	{
		StringCopy(sParam1, "friends@fra@ig_1", 64);
		return 1;
	}
	return 0;
}

void func_51(var uParam0)//Position - 0x19A1
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_11))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_11));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_10));
	}
	if (uParam0->f_47 == 1)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		uParam0->f_47 = 0;
	}
	func_55("FR_HV_HORN", &(uParam0->f_3));
	func_55("FR_H_PKUP", &(uParam0->f_3));
	func_55("FR_H_WAIT", &(uParam0->f_3));
	func_55("FR_H_DROPOFF0", &(uParam0->f_3));
	func_55("FR_H_DROPOFF1", &(uParam0->f_3));
	func_55("FR_H_DROPOFF2", &(uParam0->f_3));
	func_54("FR_GETBACK", &(uParam0->f_3));
	func_52("FR_GETBACK2");
}

void func_52(char* sParam0)//Position - 0x1A41
{
	if (GlobalFunc_165(sParam0, 0, 0))
	{
		HUD::CLEAR_PRINTS();
	}
}


void func_54(char* sParam0, var uParam1)//Position - 0x1A76
{
	if (GlobalFunc_165(sParam0, 1, uParam1))
	{
		HUD::CLEAR_PRINTS();
	}
}

void func_55(char* sParam0, var uParam1)//Position - 0x1A8E
{
	if (func_56(sParam0, uParam1))
	{
		HUD::CLEAR_HELP(1);
	}
}

bool func_56(char[4] cParam0, int iParam1)//Position - 0x1AA6
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(cParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_57(var uParam0, int iParam1)//Position - 0x1ABF
{
	if (uParam0->f_47 || iParam1)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		uParam0->f_47 = 0;
	}
	func_55("FR_HV_HORN", &(uParam0->f_3));
}

void func_58(var uParam0)//Position - 0x1AF7
{
	if (*uParam0 != 0)
	{
		if (GlobalFunc_42(uParam0->f_1))
		{
			if (uParam0->f_45)
			{
				if ((Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[uParam0->f_1] == 2 || Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[uParam0->f_1] == 3) || Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[uParam0->f_1] == 4)
				{
					func_59(uParam0->f_1);
				}
				uParam0->f_45 = 0;
			}
		}
	}
}

void func_59(int iParam0)//Position - 0x1B61
{
	if ((Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] != 2 && Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] != 3) && Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] != 4)
	{
		return;
	}
	Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] = 318;
	Global_88210[iParam0 /*109*/].f_3 = 145;
	Global_88210[iParam0 /*109*/].f_2 = 318;
	Global_88210[iParam0 /*109*/].f_4 = { 0f, 0f, 0f };
	Global_88210[iParam0 /*109*/].f_7 = 0f;
}



void func_62(int iParam0)//Position - 0x1C48
{
	if (iParam0 < 9)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_18, 0))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_18), 0);
		}
	}
}



int func_65(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9)//Position - 0x1CC4
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	struct<2> Var14;
	struct<2> Var17;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	struct<3> Var32;
	struct<3> Var35;
	struct<3> Var38;
	var uVar41;
	int iVar42;
	int iVar43;
	var uVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	struct<3> Var49;
	struct<3> Var52;
	
	iVar0 = 0;
	if (uParam0->f_124 < 2f)
	{
		if (*uParam3 >= 402)
		{
			iVar0 = 1;
		}
	}
	else if (*uParam3 >= 403 && SYSTEM::TIMERA() > SYSTEM::ROUND(((uParam0->f_124 - 2f) * 1000f)))
	{
		iVar0 = 1;
	}
	if (*uParam3 > 301 && *uParam3 < 900)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			*uParam3 = 900;
		}
		else if (iVar0 == 0)
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				if (GlobalFunc_4926(1000))
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
			}
		}
	}
	if (*uParam3 > 0)
	{
		if (*uParam4 < MISC::GET_GAME_TIMER())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
				{
					func_262(PLAYER::PLAYER_PED_ID(), 5000);
				}
			}
			if (!PED::IS_PED_INJURED(iParam5))
			{
				if (GlobalFunc_5459(iParam5))
				{
					func_262(iParam5, 5000);
				}
			}
			if (!PED::IS_PED_INJURED(iParam6))
			{
				if (GlobalFunc_5459(iParam6))
				{
					func_262(iParam6, 5000);
				}
			}
			*uParam4 = MISC::GET_GAME_TIMER() + 5000;
		}
	}
	if (*uParam3 == 0)
	{
		func_145(uParam0->f_105, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		GlobalFunc_4935();
		*uParam7 = 0;
		SYSTEM::SETTIMERA(0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
			{
				func_262(PLAYER::PLAYER_PED_ID(), 6000);
			}
		}
		if (!PED::IS_PED_INJURED(iParam5))
		{
			if (GlobalFunc_5459(iParam5))
			{
				func_262(iParam5, 6000);
			}
		}
		if (!PED::IS_PED_INJURED(iParam6))
		{
			if (GlobalFunc_5459(iParam6))
			{
				func_262(iParam6, 6000);
			}
		}
		*uParam4 = MISC::GET_GAME_TIMER() + 5000;
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			CAM::DO_SCREEN_FADE_IN(500);
			*uParam3 = 101;
		}
		else
		{
			*uParam3 = 301;
		}
	}
	else if (*uParam3 == 101)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::OPEN_SEQUENCE_TASK(&uVar2);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_109, 1f, 20000, 0.25f, 0, 1193033728);
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar2);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar2);
			TASK::CLEAR_SEQUENCE_TASK(&uVar2);
		}
		if (!PED::IS_PED_INJURED(iParam5))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::OPEN_SEQUENCE_TASK(&uVar2);
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam5, 0))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 550, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_112[0 /*3*/], 1f, 20000, 0.25f, 0, 1193033728);
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar2);
			TASK::TASK_PERFORM_SEQUENCE(iParam5, uVar2);
			TASK::CLEAR_SEQUENCE_TASK(&uVar2);
		}
		if (!PED::IS_PED_INJURED(iParam6))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::OPEN_SEQUENCE_TASK(&uVar2);
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam6, 0))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 800, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_112[1 /*3*/], 1f, 20000, 0.25f, 0, 1193033728);
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar2);
			TASK::TASK_PERFORM_SEQUENCE(iParam6, uVar2);
			TASK::CLEAR_SEQUENCE_TASK(&uVar2);
		}
		SYSTEM::SETTIMERA(0);
		*uParam3++;
	}
	else if (*uParam3 == 102)
	{
		if (SYSTEM::TIMERA() > 1500)
		{
			SYSTEM::SETTIMERA(0);
			*uParam3 = 301;
		}
	}
	else if (*uParam3 == 301)
	{
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		*uParam1 = func_143(uParam0, uParam7, iParam5, iParam6, iParam8, iParam9, iVar3);
		if (*uParam1 == 3)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam7, 0))
			{
				if (SYSTEM::TIMERA() < 15000)
				{
					*uParam7 = func_142(uParam0->f_105, uParam0->f_108);
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam7, 0))
					{
						return 0;
					}
				}
				else
				{
					*uParam1 = 0;
					*uParam7 = iVar3;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam7))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam7, 0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam7, 1, 0);
			}
		}
		if (*uParam1 != 1)
		{
			if (iParam8 != *uParam7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam8))
				{
					VEHICLE::DELETE_VEHICLE(&iParam8);
				}
			}
		}
		if (*uParam1 != 2)
		{
			if (iParam9 != *uParam7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam9))
				{
					VEHICLE::DELETE_VEHICLE(&iParam9);
				}
			}
		}
		if (*uParam1 != 0)
		{
			if (*uParam7 != iVar3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					func_140(iVar3, &(uParam0->f_135), 0);
				}
			}
		}
		if (*uParam1 == 2)
		{
			*uParam1 = 1;
		}
		Var4 = { uParam0->f_109 - Vector(50f, 150f, 150f) };
		Var7 = { uParam0->f_109 + Vector(50f, 150f, 150f) };
		MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_109, 150f, 0, 0, 0, 0, 0);
		MISC::CLEAR_AREA_OF_PEDS(uParam0->f_109, 150f, 0);
		PATHFIND::SET_PED_PATHS_IN_AREA(Var4, Var7, 0, 0);
		PATHFIND::SET_ROADS_IN_AREA(Var4, Var7, 0, 1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 240, true);
			if (GlobalFunc_5459(iParam5))
			{
				func_262(PLAYER::PLAYER_PED_ID(), 20000);
			}
			if (GlobalFunc_4924(iParam5))
			{
				TASK::CLEAR_PED_TASKS(iParam5);
				AUDIO::STOP_PED_SPEAKING(iParam5, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam5, 1);
				PED::SET_PED_CONFIG_FLAG(iParam5, 240, true);
				if (PED::IS_PED_IN_GROUP(iParam5))
				{
					PED::REMOVE_PED_FROM_GROUP(iParam5);
				}
				if (GlobalFunc_5459(iParam5))
				{
					func_262(iParam5, 20000);
				}
			}
			if (GlobalFunc_4924(iParam6))
			{
				TASK::CLEAR_PED_TASKS(iParam6);
				AUDIO::STOP_PED_SPEAKING(iParam6, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam6, 1);
				PED::SET_PED_CONFIG_FLAG(iParam6, 240, true);
				if (PED::IS_PED_IN_GROUP(iParam6))
				{
					PED::REMOVE_PED_FROM_GROUP(iParam6);
				}
				if (GlobalFunc_5459(iParam6))
				{
					func_262(iParam6, 20000);
				}
			}
			MISC::CLEAR_AREA(uParam0->f_109, 15f, 1, 0, 0, 0);
			Var10 = { uParam0->f_109 + Vector(1f, 0f, 0f) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var10, &(Var10.f_2));
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var10, 1, 0, 0, 1);
			GlobalFunc_2294(PLAYER::PLAYER_PED_ID(), uParam0->f_112[0 /*3*/] + uParam0->f_112[1 /*3*/] * Vector(0.5f, 0.5f, 0.5f));
			if (GlobalFunc_4924(iParam5))
			{
				Var10 = { uParam0->f_112[0 /*3*/] + Vector(1f, 0f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var10, &(Var10.f_2));
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam5);
				ENTITY::SET_ENTITY_COORDS(iParam5, Var10, 1, 0, 0, 1);
				GlobalFunc_2294(iParam5, uParam0->f_109);
			}
			if (GlobalFunc_4924(iParam6))
			{
				Var10 = { uParam0->f_112[1 /*3*/] + Vector(1f, 0f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var10, &(Var10.f_2));
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam6);
				ENTITY::SET_ENTITY_COORDS(iParam6, Var10, 1, 0, 0, 1);
				GlobalFunc_2294(iParam6, uParam0->f_109);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam7))
			{
				if (ENTITY::IS_ENTITY_DEAD(*uParam7))
				{
					VEHICLE::DELETE_VEHICLE(uParam7);
				}
				else
				{
					MISC::CLEAR_AREA(uParam0->f_105, 15f, 1, 0, 0, 0);
					ENTITY::SET_ENTITY_COORDS(*uParam7, uParam0->f_105, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(*uParam7, uParam0->f_108);
					if (*uParam1 == 1)
					{
						if (!func_137(*uParam7, uParam0->f_132))
						{
							ENTITY::SET_ENTITY_HEADING(*uParam7, (uParam0->f_108 + 180f));
						}
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam7);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(*uParam7, 1);
				}
			}
			if (*uParam1 == 0)
			{
				if (*uParam7 == iVar3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar3);
						if (iVar13 != 0)
						{
							MISC::GET_MODEL_DIMENSIONS(iVar13, &Var14, &Var17);
							if (((Var17 > 2.5f || Var17.f_1 > 4f) || Var14 < -2.5f) || Var14.f_1 < -4f)
							{
								func_140(iVar3, &(uParam0->f_135), 1);
							}
						}
					}
				}
			}
			func_136(uParam0[0 /*15*/]);
			SYSTEM::SETTIMERA(-SYSTEM::ROUND((uParam0->f_123 * 1000f)));
			SYSTEM::SETTIMERB(0);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(1000);
		}
		*uParam3++;
	}
	else if (*uParam3 == 302)
	{
		if (SYSTEM::TIMERA() > 0)
		{
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
					{
						iVar20 = 60;
					}
					else if (GlobalFunc_4924(iParam5) && GlobalFunc_4924(iParam6))
					{
						iVar20 = 61;
					}
					else
					{
						iVar20 = 59;
					}
					iVar21 = iParam5;
					if (PED::IS_PED_INJURED(iParam5))
					{
						iVar21 = iParam6;
					}
					if (GlobalFunc_4924(iVar21))
					{
						if (func_117(PLAYER::PLAYER_PED_ID(), iVar21, iVar20, uParam2))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iVar21, -1, 2048, 4);
							*uParam3++;
						}
					}
					else
					{
						*uParam3++;
					}
				}
			}
			else
			{
				*uParam3++;
			}
		}
	}
	else if (*uParam3 == 303)
	{
		if (!GlobalFunc_111())
		{
			if (SYSTEM::TIMERB() > SYSTEM::ROUND(((uParam0[0 /*15*/])->f_13 * 1000f)))
			{
				*uParam3++;
			}
		}
	}
	else if (*uParam3 == 304)
	{
		if ((PED::IS_PED_INJURED(iParam5) || !PED::IS_PED_IN_ANY_VEHICLE(iParam5, 0)) && (PED::IS_PED_INJURED(iParam6) || !PED::IS_PED_IN_ANY_VEHICLE(iParam6, 0)))
		{
			if (uParam0->f_127 && !PED::IS_PED_INJURED(iParam6))
			{
				func_136(uParam0[2 /*15*/]);
			}
			else
			{
				func_136(uParam0[1 /*15*/]);
			}
			*uParam3++;
		}
	}
	else if (*uParam3 == 305)
	{
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iParam5))
		{
			iVar22 = GlobalFunc_8315();
			iVar23 = func_113(iParam5);
			iVar24 = 50;
			if (iVar22 != 145 && iVar23 != 145)
			{
				iVar24 = func_112(iVar22, iVar23);
			}
			if (GlobalFunc_5459(iParam5))
			{
				iVar25 = 65;
			}
			else if (iVar24 < 20)
			{
				iVar25 = 64;
			}
			else if (iVar24 < 40)
			{
				iVar25 = 63;
			}
			else
			{
				iVar25 = 62;
			}
			if (func_117(PLAYER::PLAYER_PED_ID(), iParam5, iVar25, uParam2))
			{
				*uParam3++;
			}
		}
		else
		{
			*uParam3++;
		}
	}
	else if (*uParam3 == 306)
	{
		if (!GlobalFunc_111())
		{
			if (uParam0->f_127 == 0 && !PED::IS_PED_INJURED(iParam6))
			{
				func_136(uParam0[2 /*15*/]);
			}
			*uParam3++;
		}
	}
	else if (*uParam3 == 307)
	{
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(iParam6))
		{
			iVar26 = GlobalFunc_8315();
			iVar27 = func_113(iParam6);
			iVar28 = 50;
			if (iVar26 != 145 && iVar27 != 145)
			{
				iVar28 = func_112(iVar26, iVar27);
			}
			if (GlobalFunc_5459(iParam6))
			{
				iVar29 = 65;
			}
			else if (iVar28 < 20)
			{
				iVar29 = 64;
			}
			else if (iVar28 < 40)
			{
				iVar29 = 63;
			}
			else
			{
				iVar29 = 62;
			}
			if (func_117(PLAYER::PLAYER_PED_ID(), iParam6, iVar29, uParam2))
			{
				*uParam3++;
			}
		}
		else
		{
			*uParam3++;
		}
	}
	else if (*uParam3 == 308)
	{
		if (!GlobalFunc_111())
		{
			*uParam3 = 401;
		}
	}
	else if (*uParam3 == 401)
	{
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			if (*uParam1 != 1)
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
		}
		iVar30 = 1;
		iVar31 = 2;
		if (*uParam1 == 3 && VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam7, 0))
		{
			if (!PED::IS_PED_INJURED(iParam5))
			{
				Var32 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam7) };
				Var35 = { Var32.f_1, -Var32.x, 0f };
				Var38 = { ENTITY::GET_ENTITY_COORDS(iParam5, 1) - ENTITY::GET_ENTITY_COORDS(*uParam7, 1) };
				if (GlobalFunc_880(Var35, Var38) > 0f)
				{
					iVar30 = 2;
					iVar31 = 1;
				}
			}
			if (ENTITY::GET_ENTITY_MODEL(*uParam7) != iLocal_975)
			{
				if (!PED::IS_PED_INJURED(iParam5))
				{
					iVar30 = -1;
				}
				else
				{
					iVar30 = iVar31;
					iVar31 = -1;
				}
			}
		}
		if (GlobalFunc_4924(iParam5))
		{
			TASK::TASK_CLEAR_LOOK_AT(iParam5);
			TASK::CLEAR_PED_TASKS(iParam5);
			if (*uParam1 == 1)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam5, uParam0->f_129, 1f, -1, 0.25f, 0, 1193033728);
			}
			else if (*uParam1 == 3 && VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam7, 0))
			{
				TASK::TASK_ENTER_VEHICLE(iParam5, *uParam7, 20000, iVar30, 1f, 1, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam5, uParam0->f_119, 1f, -1, 0.25f, 0, 1193033728);
			}
		}
		if (GlobalFunc_4924(iParam6))
		{
			TASK::TASK_CLEAR_LOOK_AT(iParam6);
			TASK::CLEAR_PED_TASKS(iParam6);
			TASK::OPEN_SEQUENCE_TASK(&uVar41);
			TASK::TASK_PAUSE(0, 500);
			if (*uParam1 == 1)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_129, 1f, -1, 0.25f, 0, 1193033728);
			}
			else if (*uParam1 == 3 && VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam7, 0))
			{
				TASK::TASK_ENTER_VEHICLE(0, *uParam7, 20000, iVar31, 1f, 1, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_119, 1f, -1, 0.25f, 0, 1193033728);
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar41);
			TASK::TASK_PERFORM_SEQUENCE(iParam6, uVar41);
			TASK::CLEAR_SEQUENCE_TASK(&uVar41);
		}
		*uParam3++;
	}
	else if (*uParam3 == 402)
	{
		if (SYSTEM::TIMERA() > 500)
		{
			if (*uParam1 != 1)
			{
				func_136(uParam0[3 /*15*/]);
			}
			else
			{
				func_136(uParam0[4 /*15*/]);
			}
			SYSTEM::SETTIMERA(0);
			if (*uParam1 != 1)
			{
				*uParam3++;
			}
			else
			{
				*uParam3 = 501;
			}
		}
	}
	else if (*uParam3 == 403)
	{
		if (uParam0->f_124 > 0.1f)
		{
			if (SYSTEM::TIMERA() > SYSTEM::ROUND((uParam0->f_124 * 1000f)))
			{
				*uParam3 = 900;
			}
		}
		else if (SYSTEM::TIMERA() > 10000)
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
		}
		else if (SYSTEM::TIMERA() > 2500)
		{
			if (*uParam1 != 3)
			{
				if ((PED::IS_PED_INJURED(iParam5) || !ENTITY::IS_ENTITY_AT_ENTITY(iParam5, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, 0, 1, 0)) && (PED::IS_PED_INJURED(iParam6) || !ENTITY::IS_ENTITY_AT_ENTITY(iParam6, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, 0, 1, 0)))
				{
					*uParam3 = 900;
				}
				else if ((!PED::IS_PED_INJURED(iParam5) && ENTITY::IS_ENTITY_AT_COORD(iParam5, uParam0->f_119, 0.5f, 0.5f, 0.5f, 0, 1, 0)) || (!PED::IS_PED_INJURED(iParam6) && ENTITY::IS_ENTITY_AT_COORD(iParam6, uParam0->f_119, 0.5f, 0.5f, 0.5f, 0, 1, 0)))
				{
					*uParam3 = 900;
				}
			}
			else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam7, 0) || !ENTITY::IS_ENTITY_AT_ENTITY(*uParam7, PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, 0, 1, 0))
			{
				*uParam3 = 900;
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam7, 0) && ENTITY::IS_ENTITY_AT_COORD(*uParam7, uParam0->f_132, 1f, 1f, 1f, 0, 1, 0))
			{
				*uParam3 = 900;
			}
		}
		if (*uParam1 == 3 && VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam7, 0))
		{
			if ((PED::IS_PED_INJURED(iParam5) || PED::IS_PED_IN_ANY_VEHICLE(iParam5, 0)) && (PED::IS_PED_INJURED(iParam6) || PED::IS_PED_IN_ANY_VEHICLE(iParam6, 0)))
			{
				iVar42 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam7, -1);
				if (!PED::IS_PED_INJURED(iVar42))
				{
					if (!GlobalFunc_6964(iVar42, -1817882002))
					{
						TASK::CLEAR_PED_TASKS(iVar42);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(iVar42, *uParam7, uParam0->f_132, 10f, 0, iLocal_975, 786603, 5f, 5f);
					}
				}
			}
		}
	}
	else if (*uParam3 == 501)
	{
		if (SYSTEM::TIMERA() > 10000)
		{
			SYSTEM::SETTIMERA(0);
			*uParam3++;
		}
		else if ((PED::IS_PED_INJURED(iParam5) || !ENTITY::IS_ENTITY_ON_SCREEN(iParam5)) && (PED::IS_PED_INJURED(iParam6) || !ENTITY::IS_ENTITY_ON_SCREEN(iParam6)))
		{
			SYSTEM::SETTIMERA(0);
			*uParam3++;
		}
	}
	else if (*uParam3 == 502)
	{
		if (SYSTEM::TIMERA() > SYSTEM::ROUND((uParam0->f_125 * 1000f)))
		{
			iVar43 = 0;
			if (!PED::IS_PED_INJURED(iParam5))
			{
				PED::SET_PED_INTO_VEHICLE(iParam5, *uParam7, -1);
				if (!PED::IS_PED_INJURED(iParam6))
				{
					PED::SET_PED_INTO_VEHICLE(iParam6, *uParam7, 0);
				}
				iVar43 = iParam5;
			}
			else if (!PED::IS_PED_INJURED(iParam6))
			{
				PED::SET_PED_INTO_VEHICLE(iParam6, *uParam7, -1);
				iVar43 = iParam6;
			}
			if (!PED::IS_PED_INJURED(iVar43))
			{
				TASK::CLEAR_PED_TASKS(iVar43);
				TASK::OPEN_SEQUENCE_TASK(&uVar44);
				TASK::TASK_PAUSE(0, 750);
				iVar45 = 786469 | 512;
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, *uParam7, uParam0->f_132, 10f, 0, ENTITY::GET_ENTITY_MODEL(*uParam7), iVar45, 5f, 5f);
				TASK::CLOSE_SEQUENCE_TASK(uVar44);
				TASK::TASK_PERFORM_SEQUENCE(iVar43, uVar44);
				TASK::CLEAR_SEQUENCE_TASK(&uVar44);
			}
			SYSTEM::SETTIMERA(0);
			func_136(uParam0[5 /*15*/]);
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_2294(PLAYER::PLAYER_PED_ID(), uParam0->f_105);
			}
			*uParam3++;
		}
	}
	else if (*uParam3 == 503)
	{
		if (uParam0->f_126 > 0.1f)
		{
			if (SYSTEM::TIMERA() > SYSTEM::ROUND((uParam0->f_126 * 1000f)))
			{
				*uParam3 = 900;
			}
		}
		else if (SYSTEM::TIMERA() > 20000)
		{
			*uParam3 = 900;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam7, 0) || !ENTITY::IS_ENTITY_ON_SCREEN(*uParam7))
		{
			SYSTEM::SETTIMERA(0);
			*uParam3++;
		}
	}
	else if (*uParam3 == 504)
	{
		if (SYSTEM::TIMERA() > 2000)
		{
			*uParam3 = 900;
		}
	}
	else if (*uParam3 == 900)
	{
		if (*uParam1 != 1)
		{
			func_109(&(uParam0->f_91), uParam0->f_97);
		}
		else
		{
			func_109(&(uParam0->f_98), uParam0->f_104);
		}
		GlobalFunc_4935();
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam7) && !ENTITY::IS_ENTITY_DEAD(*uParam7))
		{
			if (GlobalFunc_4924(iParam5) && func_105(*uParam7, iParam5))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam7, 2);
			}
			if (GlobalFunc_4924(Local_78.f_109.f_7) && func_105(*uParam7, iParam6))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam7, 2);
			}
		}
		if (GlobalFunc_4924(iParam5))
		{
			iVar46 = func_113(iParam5);
			if (GlobalFunc_42(iVar46))
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam7, 0) && PED::IS_PED_IN_VEHICLE(iParam5, *uParam7, 0)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam7, -1) == iParam5)
				{
					ENTITY::SET_ENTITY_COORDS(*uParam7, uParam0->f_140[2 /*3*/], 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(*uParam7, uParam0->f_150[2]);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam7);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iParam5, uParam0->f_140[0 /*3*/] - Vector(1f, 0f, 0f), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iParam5, uParam0->f_150[0]);
				}
				func_81(iParam5, 0);
				GlobalFunc_8631(iParam5, &(Global_89503[iVar46 /*74*/]), &(Global_89734[iVar46 /*3*/]), &(Global_89744[iVar46]), &(Global_89726[iVar46]), &(Global_2544853[iVar46]));
				Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar46] = 318;
				if (Global_89726[iVar46] == 1)
				{
					Global_89726[iVar46] = 0;
				}
			}
			PED::DELETE_PED(&iParam5);
		}
		if (GlobalFunc_4924(iParam6))
		{
			iVar47 = func_113(iParam6);
			if (GlobalFunc_42(iVar47))
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam7, 0) && PED::IS_PED_IN_VEHICLE(iParam6, *uParam7, 0)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam7, -1) == iParam6)
				{
					ENTITY::SET_ENTITY_COORDS(*uParam7, uParam0->f_140[2 /*3*/], 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(*uParam7, uParam0->f_150[2]);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam7);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iParam6, uParam0->f_140[1 /*3*/] - Vector(1f, 0f, 0f), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iParam6, uParam0->f_150[1]);
				}
				func_81(iParam6, 0);
				GlobalFunc_8631(iParam6, &(Global_89503[iVar47 /*74*/]), &(Global_89734[iVar47 /*3*/]), &(Global_89744[iVar47]), &(Global_89726[iVar47]), &(Global_2544853[iVar47]));
				Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar47] = 318;
				if (Global_89726[iVar47] == 1)
				{
					Global_89726[iVar47] = 0;
				}
			}
			PED::DELETE_PED(&iParam6);
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam7))
		{
			if (*uParam1 != 3)
			{
				if (*uParam1 == 1)
				{
					VEHICLE::DELETE_VEHICLE(uParam7);
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam7);
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam7))
				{
					iVar48 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam7, -1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar48))
					{
						PED::DELETE_PED(&iVar48);
					}
				}
				VEHICLE::DELETE_VEHICLE(uParam7);
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_975);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_974);
		*uParam3++;
	}
	else if (*uParam3 == 901)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		}
		else
		{
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_976[0]))
		{
			CAM::DESTROY_CAM(uLocal_976[0], 0);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_976[1]))
		{
			CAM::DESTROY_CAM(uLocal_976[1], 0);
		}
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 240, false);
		}
		Var49 = { uParam0->f_109 - Vector(50f, 150f, 150f) };
		Var52 = { uParam0->f_109 + Vector(50f, 150f, 150f) };
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Var49, Var52, 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var49, Var52, 1);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
		func_66(0, 0, 1, 1);
		return 1;
	}
	return 0;
}

void func_66(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x312F
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
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
		if ((iLocal_42 != 0 && iLocal_42 != joaat("object")) && iLocal_42 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_42, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_42, 0);
				}
			}
		}
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}















void func_81(int iParam0, bool bParam1)//Position - 0x3C8D
{
	GlobalFunc_8644(iParam0);
	GlobalFunc_7904(iParam0, bParam1);
	GlobalFunc_7713(iParam0);
	GlobalFunc_7705(iParam0);
	GlobalFunc_7712(iParam0);
	GlobalFunc_7711(iParam0);
	GlobalFunc_7710(iParam0);
}
























int func_105(int iParam0, int iParam1)//Position - 0x51DD
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<58> Var3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!GlobalFunc_315(iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			iVar1 = func_113(iParam1);
			bVar2 = GlobalFunc_42(iVar1);
			if (iVar1 < 147)
			{
				Var3.f_11 = 12;
				Var3.f_31 = 25;
				Var3.f_57 = 2;
				if (bVar2)
				{
					GlobalFunc_97(iVar1, &Var3, 1);
				}
				else
				{
					func_106(iVar1, &Var3, 1);
				}
				if (Var3 == iVar0)
				{
					if ((VEHICLE::IS_THIS_MODEL_A_BIKE(Var3) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(Var3)) || MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Var3.f_27)))
					{
						return 1;
					}
				}
				if (bVar2)
				{
					GlobalFunc_97(iVar1, &Var3, 2);
				}
				else
				{
					func_106(iVar1, &Var3, 2);
				}
				if (Var3 == iVar0)
				{
					if ((VEHICLE::IS_THIS_MODEL_A_BIKE(Var3) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(Var3)) || MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Var3.f_27)))
					{
						return 1;
					}
				}
				if (bVar2)
				{
					GlobalFunc_97(iVar1, &Var3, 3);
				}
				else
				{
					func_106(iVar1, &Var3, 3);
				}
				if (Var3 == iVar0)
				{
					if ((VEHICLE::IS_THIS_MODEL_A_BIKE(Var3) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(Var3)) || MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Var3.f_27)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_106(int iParam0, int iParam1, int iParam2)//Position - 0x5319
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
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("tribike");
			}
			else
			{
				iVar0 = joaat("tribike");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("tribike"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("issi2");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = joaat("sentinel2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("faggio2");
			}
			else
			{
				iVar0 = joaat("sentinel2");
			}
			switch (iVar0)
			{
				case joaat("sentinel2"):
					Var1 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "KRYST4L", 16);
					break;
				
				case joaat("faggio2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = joaat("speedo");
			}
			else if (iParam2 == 3)
			{
				iVar0 = joaat("emperor");
			}
			else
			{
				iVar0 = joaat("speedo");
			}
			switch (iVar0)
			{
				case joaat("speedo"):
					Var1 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_27), "LAMAR G", 16);
					break;
				
				case joaat("emperor"):
					Var1 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "07KZF345", 16);
					break;
			}
			break;
		
		case 29:
			Var1 = joaat("adder");
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_10 = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_27), "N4M4ST3", 16);
			break;
		
		case 30:
			Var1 = joaat("oracle2");
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_27), "81TDS937", 16);
			break;
		
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
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
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = joaat("asterope");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("asterope");
			}
			switch (iVar0)
			{
				case joaat("asterope"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*iParam1 = { Var1 };
}



int func_109(var uParam0, float fParam1)//Position - 0x59A6
{
	if (CAM::DOES_CAM_EXIST(uLocal_976[0]))
	{
		CAM::DESTROY_CAM(uLocal_976[0], 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_976[1]))
	{
		CAM::DESTROY_CAM(uLocal_976[1], 0);
	}
	uLocal_976[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	if (CAM::DOES_CAM_EXIST(uLocal_976[0]))
	{
		CAM::SET_CAM_COORD(uLocal_976[0], *uParam0);
		CAM::SET_CAM_ROT(uLocal_976[0], uParam0->f_3, 2);
		CAM::SET_CAM_FOV(uLocal_976[0], fParam1);
		CAM::SET_CAM_ACTIVE(uLocal_976[0], 1);
		CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}



int func_112(int iParam0, int iParam1)//Position - 0x5A8B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	iVar2 = GlobalFunc_768(iVar0, iVar1);
	return Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_17;
}

int func_113(int iParam0)//Position - 0x5ABC
{
	int iVar0;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (iVar0 == 145)
	{
		iVar0 = GlobalFunc_7493(iParam0);
	}
	return iVar0;
}




int func_117(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x5B61
{
	char* sVar0;
	char[] cVar4[8];
	int iVar8;
	int iVar9;
	
	iVar8 = func_113(iParam0);
	iVar9 = func_113(iParam1);
	func_131(uParam3, iVar8, iParam0, 1);
	func_131(uParam3, iVar9, iParam1, 1);
	if (func_128(iVar8, iVar9, iParam2, &sVar0, &cVar4))
	{
		if (GlobalFunc_10618(uParam3, &sVar0, &cVar4, 4, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}











int func_128(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x620D
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	if (iVar0 == 7 || iVar1 == 7)
	{
		return 0;
	}
	*sParam4 = { GlobalFunc_5197(iVar0, iVar1, 7, 1) };
	*sParam3 = { *sParam4 };
	StringConCat(sParam3, "AU", 16);
	StringConCat(sParam4, "_", 16);
	switch (iParam2)
	{
		case 0:
			StringConCat(sParam4, "PkOk", 16);
			break;
		
		case 1:
			StringConCat(sParam4, "PkLt", 16);
			break;
		
		case 2:
			StringConCat(sParam4, "PkFt", 16);
			break;
		
		case 3:
			StringConCat(sParam4, "PkFul", 16);
			break;
		
		case 4:
			StringConCat(sParam4, "PkOdd", 16);
			break;
		
		case 5:
			StringConCat(sParam4, "PkUDr", 16);
			break;
		
		case 6:
			StringConCat(sParam4, "GrOk", 16);
			break;
		
		case 7:
			StringConCat(sParam4, "GrIr", 16);
			break;
		
		case 8:
			StringConCat(sParam4, "GrVi", 16);
			break;
		
		case 9:
			StringConCat(sParam4, "GrPl", 16);
			break;
		
		case 10:
			StringConCat(sParam4, "GrUDr", 16);
			break;
		
		case 11:
			StringConCat(sParam4, "AmbH_ok", 16);
			break;
		
		case 12:
			StringConCat(sParam4, "AmbH_rc", 16);
			break;
		
		case 13:
			StringConCat(sParam4, "AmbH_ir", 16);
			break;
		
		case 14:
			StringConCat(sParam4, "AmbB_mi", 16);
			break;
		
		case 15:
			StringConCat(sParam4, "AmbB_ok", 16);
			break;
		
		case 16:
			StringConCat(sParam4, "AmbO_qu", 16);
			break;
		
		case 17:
			StringConCat(sParam4, "AmbO_Y1", 16);
			break;
		
		case 18:
			StringConCat(sParam4, "AmbO_Y2", 16);
			break;
		
		case 19:
			StringConCat(sParam4, "AmbO_N1", 16);
			break;
		
		case 20:
			StringConCat(sParam4, "AmbG_ok", 16);
			break;
		
		case 21:
			StringConCat(sParam4, "AmbG_ir", 16);
			break;
		
		case 22:
			StringConCat(sParam4, "AmbS1", 16);
			break;
		
		case 23:
			StringConCat(sParam4, "AmbS2", 16);
			break;
		
		case 24:
			StringConCat(sParam4, "AmbS3", 16);
			break;
		
		case 25:
			StringConCat(sParam4, "AmbS4_1", 16);
			break;
		
		case 26:
			StringConCat(sParam4, "AmbS4_2", 16);
			break;
		
		case 27:
			StringConCat(sParam4, "AmbS4_3", 16);
			break;
		
		case 28:
			StringConCat(sParam4, "AmbS4_4", 16);
			break;
		
		case 29:
			StringConCat(sParam4, "AmbS_ft", 16);
			break;
		
		case 30:
			StringConCat(sParam4, "AmbT1", 16);
			break;
		
		case 31:
			StringConCat(sParam4, "AmbT1_r", 16);
			break;
		
		case 32:
			StringConCat(sParam4, "AmbT2", 16);
			break;
		
		case 33:
			StringConCat(sParam4, "AmbT3", 16);
			break;
		
		case 34:
			StringConCat(sParam4, "AmbT4", 16);
			break;
		
		case 35:
			StringConCat(sParam4, "AmbP1a", 16);
			break;
		
		case 36:
			StringConCat(sParam4, "AmbP1b", 16);
			break;
		
		case 37:
			StringConCat(sParam4, "AmbP1c", 16);
			break;
		
		case 38:
			StringConCat(sParam4, "AmbP2", 16);
			break;
		
		case 39:
			StringConCat(sParam4, "VDrunk", 16);
			break;
		
		case 40:
			StringConCat(sParam4, "Satis", 16);
			break;
		
		case 41:
			StringConCat(sParam4, "Done", 16);
			break;
		
		case 42:
			StringConCat(sParam4, "ZnStory", 16);
			break;
		
		case 43:
			StringConCat(sParam4, "ZnSquad", 16);
			break;
		
		case 44:
			StringConCat(sParam4, "ZnDrunk", 16);
			break;
		
		case 45:
			StringConCat(sParam4, "ZnCncl", 16);
			break;
		
		case 46:
			StringConCat(sParam4, "ZnCnclD", 16);
			break;
		
		case 47:
			StringConCat(sParam4, "RjTime", 16);
			break;
		
		case 48:
			StringConCat(sParam4, "RjOk", 16);
			break;
		
		case 49:
			StringConCat(sParam4, "RjCrazy", 16);
			break;
		
		case 50:
			StringConCat(sParam4, "RjStuck", 16);
			break;
		
		case 51:
			StringConCat(sParam4, "SqStart", 16);
			break;
		
		case 52:
			StringConCat(sParam4, "SqPass", 16);
			break;
		
		case 53:
			StringConCat(sParam4, "NewH", 16);
			break;
		
		case 54:
			StringConCat(sParam4, "NewC", 16);
			break;
		
		case 55:
			StringConCat(sParam4, "NewT", 16);
			break;
		
		case 56:
			StringConCat(sParam4, "CinMlt", 16);
			break;
		
		case 57:
			StringConCat(sParam4, "CarDam", 16);
			break;
		
		case 58:
			StringConCat(sParam4, "PedDam", 16);
			break;
		
		case 59:
			StringConCat(sParam4, "DrpOp", 16);
			break;
		
		case 60:
			StringConCat(sParam4, "DrpOpDr", 16);
			break;
		
		case 61:
			StringConCat(sParam4, "DrpOpPl", 16);
			break;
		
		case 62:
			StringConCat(sParam4, "DrpA", 16);
			break;
		
		case 63:
			StringConCat(sParam4, "DrpB", 16);
			break;
		
		case 64:
			StringConCat(sParam4, "DrpC", 16);
			break;
		
		case 65:
			StringConCat(sParam4, "DrpDr", 16);
			break;
		
		case 66:
			StringConCat(sParam4, "DrpCar", 16);
			break;
		
		case 67:
			StringConCat(sParam4, "Death", 16);
			break;
		
		default:
			if (iParam2 != 69)
			{
			}
			return 0;
			break;
	}
	return 1;
}



void func_131(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6865
{
	struct<2> Var0;
	int iVar4;
	
	StringCopy(&Var0, func_134(iParam1), 16);
	iVar4 = func_133(iParam1);
	if (bParam3)
	{
	}
	GlobalFunc_173(uParam0, iVar4, iParam2, &Var0, 0, 1);
}


int func_133(int iParam0)//Position - 0x692D
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 19:
			return 3;
			break;
		
		case 14:
			return 4;
			break;
		
		case 17:
			return 5;
			break;
	}
	return 9;
}

char* func_134(int iParam0)//Position - 0x698C
{
	switch (iParam0)
	{
		case 0:
			return "MICHAEL";
			break;
		
		case 1:
			return "FRANKLIN";
			break;
		
		case 2:
			return "TREVOR";
			break;
		
		case 19:
			return "LAMAR";
			break;
		
		case 14:
			return "JIMMY";
			break;
		
		case 17:
			return "AMANDA";
			break;
	}
	return "invalid";
}


int func_136(var uParam0)//Position - 0x6A21
{
	if (uParam0->f_14)
	{
		if (CAM::DOES_CAM_EXIST(uLocal_976[0]))
		{
			CAM::DESTROY_CAM(uLocal_976[0], 0);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_976[1]))
		{
			CAM::DESTROY_CAM(uLocal_976[1], 0);
		}
		uLocal_976[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
		uLocal_976[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
		if (CAM::DOES_CAM_EXIST(uLocal_976[0]) && CAM::DOES_CAM_EXIST(uLocal_976[1]))
		{
			CAM::SET_CAM_COORD(uLocal_976[0], *uParam0);
			CAM::SET_CAM_ROT(uLocal_976[0], uParam0->f_3, 2);
			CAM::SET_CAM_FOV(uLocal_976[0], uParam0->f_12);
			CAM::SET_CAM_COORD(uLocal_976[1], uParam0->f_6);
			CAM::SET_CAM_ROT(uLocal_976[1], uParam0->f_6.f_3, 2);
			CAM::SET_CAM_FOV(uLocal_976[1], uParam0->f_12);
			CAM::SHAKE_CAM(uLocal_976[0], "HAND_SHAKE", 0.25f);
			CAM::SHAKE_CAM(uLocal_976[1], "HAND_SHAKE", 0.25f);
			if (uParam0->f_13 > 0.1f)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_976[1], uLocal_976[0], SYSTEM::ROUND((uParam0->f_13 * 1000f)), 1, 1);
			}
			else
			{
				CAM::SET_CAM_ACTIVE(uLocal_976[0], 1);
			}
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			return 1;
		}
	}
	return 0;
}

int func_137(int iParam0, struct<3> Param1)//Position - 0x6B6A
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	if (GlobalFunc_880(Var0, Var3) > 0f)
	{
		return 1;
	}
	return 0;
}



void func_140(int iParam0, var uParam1, int iParam2)//Position - 0x6C21
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var4;
	struct<3> Var7;
	bool bVar10;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		VEHICLE::DELETE_VEHICLE(&iParam0);
	}
	else
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		MISC::GET_MODEL_DIMENSIONS(iVar0, &Var1, &Var4);
		Var7 = { 0f, 0f, 0f };
		bVar10 = false;
		Var4 = (Var4 - 1.02f);
		Var1 = (Var1 + 1.02f);
		Var4.f_1 = (Var4.f_1 - 2.57f);
		Var1.f_1 = (Var1.f_1 + 2.61f);
		if (GlobalFunc_747(uParam1->f_4, 1) && (iParam2 || Var4 > 0f))
		{
			Var7.x = (Var7.x - Var4);
			bVar10 = true;
		}
		else if (GlobalFunc_747(uParam1->f_4, 2) && (iParam2 || Var1 < 0f))
		{
			Var7.x = (Var7.x - Var1);
			bVar10 = true;
		}
		if (GlobalFunc_747(uParam1->f_4, 4) && (iParam2 || Var1.f_1 < 0f))
		{
			Var7.f_1 = (Var7.f_1 - Var1.f_1);
			bVar10 = true;
		}
		else if (GlobalFunc_747(uParam1->f_4, 8) && (iParam2 || Var4.f_1 > 0f))
		{
			Var7.f_1 = (Var7.f_1 - Var4.f_1);
			bVar10 = true;
		}
		if (bVar10)
		{
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam1->f_3, Var7) };
		}
		ENTITY::SET_ENTITY_COORDS(iParam0, *uParam1 + Vector(1f, 0f, 0f), 0, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iParam0, uParam1->f_3);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0, 1);
	}
}


int func_142(struct<3> Param0, var uParam3)//Position - 0x6D8C
{
	int iVar0;
	int iVar1;
	
	STREAMING::REQUEST_MODEL(iLocal_974);
	STREAMING::REQUEST_MODEL(iLocal_975);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_974) && STREAMING::HAS_MODEL_LOADED(iLocal_975))
	{
		MISC::CLEAR_AREA(Param0, 6f, 1, 0, 0, 0);
		iVar0 = VEHICLE::CREATE_VEHICLE(iLocal_975, Param0, uParam3, 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				iVar1 = PED::CREATE_PED_INSIDE_VEHICLE(iVar0, 4, iLocal_974, -1, 1, 1);
				if (!PED::IS_PED_INJURED(iVar1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_974);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_975);
					return iVar0;
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar0);
				}
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&iVar0);
			}
		}
	}
	return 0;
}

int func_143(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6E2F
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam0->f_128 == 0 && (uParam0[5 /*15*/])->f_14 == 0)
	{
		*uParam1 = iParam6;
		iVar0 = 0;
	}
	else if ((GlobalFunc_4924(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, 0)) && ENTITY::IS_ENTITY_AT_COORD(iParam4, uParam0->f_105, 60f, 60f, 60f, 0, 1, 0))
	{
		*uParam1 = iParam4;
		if (uParam0->f_128)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if ((GlobalFunc_4924(iParam3) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam5, 0)) && ENTITY::IS_ENTITY_AT_COORD(iParam5, uParam0->f_105, 60f, 60f, 60f, 0, 1, 0))
	{
		*uParam1 = iParam5;
		if (uParam0->f_128)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (uParam0->f_128)
	{
		*uParam1 = 0;
		iVar0 = 3;
	}
	else
	{
		*uParam1 = iParam6;
		iVar0 = 0;
	}
	return iVar0;
}


void func_145(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x6F27
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
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
					if (GlobalFunc_10939(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11260(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10939(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11260(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10939(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10939(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11260(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10939(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11260(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_271(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
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
			iLocal_42 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_42 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}





















































































































void func_262(int iParam0, int iParam1)//Position - 0x230D6
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = GlobalFunc_1667(iParam0);
	iVar1 = -1;
	if (iVar0 == -1)
	{
		iVar1 = GlobalFunc_867(iParam0);
		if (!iVar1 == -1)
		{
			Global_35734[iVar1 /*5*/].f_3 = (Global_35734[iVar1 /*5*/].f_3 + iParam1);
			Global_35734[iVar1 /*5*/].f_2 = (Global_35734[iVar1 /*5*/].f_2 + iParam1);
		}
		return;
	}
	func_263(1, iVar0, 2, iParam1);
}

void func_263(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x23155
{
	func_264(iParam0, iParam1, iParam2, 0, iParam3);
}

void func_264(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x2316A
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (GlobalFunc_5227(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = GlobalFunc_868();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35841[iVar0 /*5*/] = iParam0;
	Global_35841[iVar0 /*5*/].f_1 = iParam1;
	Global_35841[iVar0 /*5*/].f_2 = iParam2;
	Global_35841[iVar0 /*5*/].f_3 = iParam3;
	Global_35841[iVar0 /*5*/].f_4 = uParam4;
}










int func_274(int iParam0, var uParam1)//Position - 0x233D1
{
	switch (iParam0)
	{
		case 7:
			*(uParam1[0 /*15*/]) = { 405.9127f, -711.7676f, 31.2618f };
			(uParam1[0 /*15*/])->f_3 = { 19.919f, 0f, 90.3396f };
			(uParam1[0 /*15*/])->f_6 = { 405.4205f, -711.784f, 29.3979f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 5.5077f, 0f, 99.6259f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 398.0591f, -714.2009f, 29.6786f };
			(uParam1[1 /*15*/])->f_3 = { -2.2484f, 0.0024f, 51.3791f };
			(uParam1[1 /*15*/])->f_6 = { 397.969f, -714.1289f, 29.6741f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.2484f, 0.0024f, 51.174f };
			(uParam1[1 /*15*/])->f_12 = 38.1457f;
			(uParam1[1 /*15*/])->f_13 = 5.58f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 398.3901f, -714.3004f, 29.7155f };
			(uParam1[2 /*15*/])->f_3 = { -1.9825f, -0.0437f, 50.2219f };
			(uParam1[2 /*15*/])->f_6 = { 398.3167f, -714.2393f, 29.7122f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -1.9825f, -0.0437f, 48.076f };
			(uParam1[2 /*15*/])->f_12 = 39.2093f;
			(uParam1[2 /*15*/])->f_13 = 13f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 405.5188f, -709.9571f, 29.6613f };
			(uParam1[3 /*15*/])->f_3 = { -2.8617f, 0.0312f, 110.409f };
			(uParam1[3 /*15*/])->f_6 = { 405.8275f, -709.2303f, 29.6882f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -2.8617f, 0.0312f, 103.4981f };
			(uParam1[3 /*15*/])->f_12 = 38.1457f;
			(uParam1[3 /*15*/])->f_13 = 8.375f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 397.4691f, -712.0601f, 29.7563f };
			(uParam1[5 /*15*/])->f_3 = { -5.987f, -0.017f, 154.1207f };
			(uParam1[5 /*15*/])->f_6 = { 397.4691f, -712.0601f, 29.7563f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -5.987f, -0.017f, 154.1207f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 397.4691f, -712.0601f, 29.7563f };
			uParam1->f_91.f_3 = { -5.987f, -0.017f, 154.1207f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 397.6112f, -710.4716f, 29.7051f };
			uParam1->f_98.f_3 = { 4.6835f, -0.3053f, 163.9312f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 401.2501f, -709.6287f, 28.1688f };
			uParam1->f_108 = 0f;
			uParam1->f_109 = { 396.8529f, -713.7012f, 28.2854f };
			uParam1->f_112[0 /*3*/] = { 395.8499f, -711.9299f, 28.2849f };
			uParam1->f_112[1 /*3*/] = { 397.0676f, -712.2994f, 28.285f };
			uParam1->f_119 = { 396.5359f, -692.8924f, 28.2871f };
			uParam1->f_123 = 1.55f;
			uParam1->f_124 = 7.705f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 5.115f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 1;
			uParam1->f_129 = { 398.3131f, -708.6296f, 28.2844f };
			uParam1->f_132 = { 402.7359f, -689.6898f, 28.2549f };
			uParam1->f_135 = { 401.3918f, -718.0711f, 28.1762f };
			uParam1->f_135.f_3 = 0f;
			uParam1->f_135.f_4 = 10;
			uParam1->f_140[0 /*3*/] = { 390.1166f, -686.0222f, 28.27f };
			uParam1->f_150[0] = 94.1853f;
			uParam1->f_140[1 /*3*/] = { 444.7804f, -686.5525f, 27.5881f };
			uParam1->f_150[1] = 270.72f;
			uParam1->f_140[2 /*3*/] = { 382.391f, -671.3192f, 28.2481f };
			uParam1->f_150[2] = 57.3318f;
			return 1;
			break;
		
		case 8:
			*(uParam1[0 /*15*/]) = { -1405.148f, -195.824f, 50.5379f };
			(uParam1[0 /*15*/])->f_3 = { 15.4864f, 0f, 126.9167f };
			(uParam1[0 /*15*/])->f_6 = { -1405.472f, -195.2269f, 48.3459f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -6.4786f, 0f, 133.4543f };
			(uParam1[0 /*15*/])->f_12 = 43.8728f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1414.142f, -200.2502f, 47.8477f };
			(uParam1[1 /*15*/])->f_3 = { -3.1055f, 0f, -105.8073f };
			(uParam1[1 /*15*/])->f_6 = { -1414.117f, -200.2495f, 47.8464f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -3.1055f, 0f, -105.1865f };
			(uParam1[1 /*15*/])->f_12 = 35.8476f;
			(uParam1[1 /*15*/])->f_13 = 8.425f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1414.262f, -199.6994f, 47.8791f };
			(uParam1[2 /*15*/])->f_3 = { -3.8011f, 0f, -118.3642f };
			(uParam1[2 /*15*/])->f_6 = { -1414.096f, -199.7538f, 47.8676f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -3.8011f, 0f, -119.1302f };
			(uParam1[2 /*15*/])->f_12 = 35.8476f;
			(uParam1[2 /*15*/])->f_13 = 11.175f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1410.383f, -193.2492f, 47.9417f };
			(uParam1[3 /*15*/])->f_3 = { -2.9923f, 0f, 176.5927f };
			(uParam1[3 /*15*/])->f_6 = { -1410.383f, -193.2492f, 47.9417f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -2.9923f, 0f, -172.945f };
			(uParam1[3 /*15*/])->f_12 = 40.3821f;
			(uParam1[3 /*15*/])->f_13 = 6.35f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1411.703f, -200.2036f, 47.7778f };
			(uParam1[5 /*15*/])->f_3 = { -3.8893f, 0f, 130.3052f };
			(uParam1[5 /*15*/])->f_6 = { -1411.703f, -200.2036f, 47.7778f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.8893f, 0f, 130.3052f };
			(uParam1[5 /*15*/])->f_12 = 50.0049f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1411.703f, -200.2036f, 47.7778f };
			uParam1->f_91.f_3 = { -3.8893f, 0f, 130.3052f };
			uParam1->f_97 = 50.0049f;
			uParam1->f_98 = { -1411.703f, -200.2036f, 47.7778f };
			uParam1->f_98.f_3 = { -3.8893f, 0f, 130.3052f };
			uParam1->f_104 = 50.0049f;
			uParam1->f_105 = { -1407.576f, -199.3733f, 46.0344f };
			uParam1->f_108 = 216.25f;
			uParam1->f_109 = { -1412.964f, -200.9753f, 46.2845f };
			uParam1->f_112[0 /*3*/] = { -1410.982f, -200.6391f, 46.2294f };
			uParam1->f_112[1 /*3*/] = { -1411.232f, -201.405f, 46.2381f };
			uParam1->f_119 = { -1427.788f, -187.1937f, 46.4753f };
			uParam1->f_123 = 1.75f;
			uParam1->f_124 = 9.84f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 1;
			uParam1->f_129 = { -1427.788f, -187.1937f, 46.4753f };
			uParam1->f_132 = { -1358.114f, -272.4378f, 41.4143f };
			uParam1->f_135 = { -1439.46f, -202.4132f, 46.6154f };
			uParam1->f_135.f_3 = 322.56f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -1383.764f, -264.7188f, 41.9284f };
			uParam1->f_150[0] = 130.32f;
			uParam1->f_140[1 /*3*/] = { -1473.486f, -257.2262f, 48.9357f };
			uParam1->f_150[1] = 44.64f;
			uParam1->f_140[2 /*3*/] = { -1382.035f, -271.8694f, 41.9838f };
			uParam1->f_150[2] = 132.0433f;
			return 1;
			break;
		
		case 9:
			*(uParam1[0 /*15*/]) = { 290.8533f, 172.5629f, 105.446f };
			(uParam1[0 /*15*/])->f_3 = { 24.0829f, 0f, -19.9766f };
			(uParam1[0 /*15*/])->f_6 = { 290.8804f, 172.6505f, 105.1818f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.3518f, 0f, -17.3689f };
			(uParam1[0 /*15*/])->f_12 = 36.3239f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 298.6032f, 181.1218f, 104.7438f };
			(uParam1[1 /*15*/])->f_3 = { -3.2463f, 0f, 81.368f };
			(uParam1[1 /*15*/])->f_6 = { 298.5056f, 181.1366f, 104.7382f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -3.1642f, 0f, 81.8605f };
			(uParam1[1 /*15*/])->f_12 = 35.122f;
			(uParam1[1 /*15*/])->f_13 = 6.625f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 298.311f, 180.892f, 104.7343f };
			(uParam1[2 /*15*/])->f_3 = { -3.3284f, 0f, 74.3088f };
			(uParam1[2 /*15*/])->f_6 = { 298.2302f, 180.9147f, 104.7294f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.3434f, 0f, 73.7343f };
			(uParam1[2 /*15*/])->f_12 = 35.122f;
			(uParam1[2 /*15*/])->f_13 = 10.175f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 299.5133f, 174.0084f, 104.6379f };
			(uParam1[3 /*15*/])->f_3 = { 0.7548f, 0f, 40.582f };
			(uParam1[3 /*15*/])->f_6 = { 299.5133f, 174.0084f, 104.6379f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.7548f, 0f, 60.3641f };
			(uParam1[3 /*15*/])->f_12 = 42.6649f;
			(uParam1[3 /*15*/])->f_13 = 6.925f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 295.994f, 180.8288f, 104.8471f };
			(uParam1[5 /*15*/])->f_3 = { -9.6963f, 0f, -42.3682f };
			(uParam1[5 /*15*/])->f_6 = { 295.994f, 180.8288f, 104.8471f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -9.6963f, 0f, -42.3682f };
			(uParam1[5 /*15*/])->f_12 = 49.972f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 295.994f, 180.8288f, 104.8471f };
			uParam1->f_91.f_3 = { -9.6963f, 0f, -42.3682f };
			uParam1->f_97 = 49.972f;
			uParam1->f_98 = { 295.994f, 180.8288f, 104.8471f };
			uParam1->f_98.f_3 = { -9.6963f, 0f, -42.3682f };
			uParam1->f_104 = 49.972f;
			uParam1->f_105 = { 290.7559f, 177.1301f, 103.1523f };
			uParam1->f_108 = 74.52f;
			uParam1->f_109 = { 297.1597f, 181.7558f, 103.2131f };
			uParam1->f_112[0 /*3*/] = { 295.0739f, 181.1341f, 103.2455f };
			uParam1->f_112[1 /*3*/] = { 294.9557f, 182.0589f, 103.2534f };
			uParam1->f_119 = { 301.1894f, 190.1084f, 103.1125f };
			uParam1->f_123 = 1.65f;
			uParam1->f_124 = 11.1f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 1;
			uParam1->f_129 = { 301.1894f, 190.1084f, 103.1125f };
			uParam1->f_132 = { 153.4835f, 223.6109f, 105.7286f };
			uParam1->f_135 = { 280.205f, 152.9264f, 103.1841f };
			uParam1->f_135.f_3 = 248.76f;
			uParam1->f_135.f_4 = 5;
			uParam1->f_140[0 /*3*/] = { 227.2966f, 223.5158f, 104.5494f };
			uParam1->f_150[0] = 340.2f;
			uParam1->f_140[1 /*3*/] = { 196.4739f, 139.1099f, 100.2864f };
			uParam1->f_150[1] = 159.8148f;
			uParam1->f_140[2 /*3*/] = { 225.8337f, 237.2527f, 104.5132f };
			uParam1->f_150[2] = 337.7378f;
			return 1;
			break;
	}
	return 0;
}

int func_275(int iParam0, var uParam1)//Position - 0x2412E
{
	switch (iParam0)
	{
		case 1:
			*(uParam1[0 /*15*/]) = { -826.7827f, 183.7083f, 72.275f };
			(uParam1[0 /*15*/])->f_3 = { 24.3451f, 0f, -121.7598f };
			(uParam1[0 /*15*/])->f_6 = { -826.7559f, 183.7018f, 71.8113f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.8335f, 0f, -148.4988f };
			(uParam1[0 /*15*/])->f_12 = 47.4693f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -826.2693f, 180.629f, 71.8522f };
			(uParam1[1 /*15*/])->f_3 = { 0.3385f, 0f, -125.3694f };
			(uParam1[1 /*15*/])->f_6 = { -826.1978f, 180.5609f, 71.8527f };
			(uParam1[1 /*15*/])->f_6.f_3 = { 0.3385f, 0f, -125.3694f };
			(uParam1[1 /*15*/])->f_12 = 32.278f;
			(uParam1[1 /*15*/])->f_13 = 2.6f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -825.2714f, 181.3561f, 71.8458f };
			(uParam1[2 /*15*/])->f_3 = { 0.3457f, 0f, -154.4318f };
			(uParam1[2 /*15*/])->f_6 = { -825.2325f, 181.2749f, 71.8464f };
			(uParam1[2 /*15*/])->f_6.f_3 = { 0.3457f, 0f, -154.4318f };
			(uParam1[2 /*15*/])->f_12 = 29.2584f;
			(uParam1[2 /*15*/])->f_13 = 3f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -823.177f, 180.3802f, 71.8216f };
			(uParam1[3 /*15*/])->f_3 = { -3.9551f, 0f, 122.8645f };
			(uParam1[3 /*15*/])->f_6 = { -823.3178f, 180.3653f, 71.8129f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -3.7621f, 0f, 116.8534f };
			(uParam1[3 /*15*/])->f_12 = 50f;
			(uParam1[3 /*15*/])->f_13 = 3f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -826.7559f, 183.7018f, 71.8113f };
			(uParam1[5 /*15*/])->f_3 = { 3.8335f, 0f, -148.4988f };
			(uParam1[5 /*15*/])->f_6 = { -826.7559f, 183.7018f, 71.8113f };
			(uParam1[5 /*15*/])->f_6.f_3 = { 3.8335f, 0f, -148.4988f };
			(uParam1[5 /*15*/])->f_12 = 47.4693f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -826.7559f, 183.7018f, 71.8113f };
			uParam1->f_91.f_3 = { 3.8335f, 0f, -148.4988f };
			uParam1->f_97 = 47.4693f;
			uParam1->f_98 = { -826.7559f, 183.7018f, 71.8113f };
			uParam1->f_98.f_3 = { 3.8335f, 0f, -148.4988f };
			uParam1->f_104 = 47.4693f;
			uParam1->f_105 = { -830.1575f, 175.3299f, 71.1486f };
			uParam1->f_108 = 335f;
			uParam1->f_109 = { -825.5045f, 179.6075f, 70.4304f };
			uParam1->f_112[0 /*3*/] = { -824.0706f, 179.5434f, 70.4812f };
			uParam1->f_112[1 /*3*/] = { -824.3851f, 178.7221f, 70.3815f };
			uParam1->f_119 = { -816.7786f, 178.2218f, 71.2278f };
			uParam1->f_123 = 3.03f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -816.7786f, 178.2218f, 71.2278f };
			uParam1->f_132 = { -816.7786f, 178.2218f, 71.2278f };
			uParam1->f_135 = { -857.8395f, 158.6697f, 64.0398f };
			uParam1->f_135.f_3 = 352.08f;
			uParam1->f_135.f_4 = 1;
			uParam1->f_140[0 /*3*/] = { -791.8809f, 155.0175f, 70.6749f };
			uParam1->f_150[0] = 189.9119f;
			uParam1->f_140[1 /*3*/] = { -795.0798f, 176.0365f, 72.835f };
			uParam1->f_150[1] = 186.5013f;
			return 1;
			break;
		
		case 2:
			*(uParam1[0 /*15*/]) = { 1988.662f, 3809.245f, 33.889f };
			(uParam1[0 /*15*/])->f_3 = { 2.3222f, 0f, 59.8915f };
			(uParam1[0 /*15*/])->f_6 = { 1988.41f, 3808.381f, 32.7818f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.5227f, 0f, 34.7012f };
			(uParam1[0 /*15*/])->f_12 = 41.7859f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 1999.131f, 3808.382f, 37.36f };
			(uParam1[1 /*15*/])->f_3 = { -19.3735f, 0f, 77.9903f };
			(uParam1[1 /*15*/])->f_6 = { 1999.131f, 3808.382f, 34.36f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -19.3735f, 0f, 77.9903f };
			(uParam1[1 /*15*/])->f_12 = 50f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 1986.536f, 3808.712f, 32.7272f };
			(uParam1[2 /*15*/])->f_3 = { -4.2982f, 0.0419f, -15.1045f };
			(uParam1[2 /*15*/])->f_6 = { 1986.546f, 3808.747f, 32.7245f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.2982f, 0.0419f, -17.9532f };
			(uParam1[2 /*15*/])->f_12 = 27.6284f;
			(uParam1[2 /*15*/])->f_13 = 4f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 1984.67f, 3817.902f, 32.6427f };
			(uParam1[3 /*15*/])->f_3 = { -1.1635f, 0.0008f, -168.368f };
			(uParam1[3 /*15*/])->f_6 = { 1984.887f, 3817.297f, 32.6298f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -1.1635f, 0.0008f, -168.368f };
			(uParam1[3 /*15*/])->f_12 = 39.0874f;
			(uParam1[3 /*15*/])->f_13 = 5f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 1985.8f, 3811.2f, 32.6f };
			(uParam1[5 /*15*/])->f_3 = { -3.2f, 0f, -172.8f };
			(uParam1[5 /*15*/])->f_6 = { 1985.8f, 3811.2f, 32.6f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.2f, 0f, -172.8f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 1985.8f, 3811.2f, 32.6f };
			uParam1->f_91.f_3 = { -3.2f, 0f, -172.8f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 1985.8f, 3811.2f, 32.6f };
			uParam1->f_98.f_3 = { -3.2f, 0f, -172.8f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 1984.545f, 3797.065f, 31.253f };
			uParam1->f_108 = 303.75f;
			uParam1->f_109 = { 1986.351f, 3809.745f, 31.1284f };
			uParam1->f_112[0 /*3*/] = { 1986.562f, 3811.748f, 31.1313f };
			uParam1->f_112[1 /*3*/] = { 1987.799f, 3811.082f, 31.0998f };
			uParam1->f_119 = { 1977.868f, 3815.664f, 32.7359f };
			uParam1->f_123 = 3.225f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 1977.868f, 3815.664f, 32.7359f };
			uParam1->f_132 = { 1977.868f, 3815.664f, 32.7359f };
			uParam1->f_135 = { 1996.434f, 3822.849f, 31.1168f };
			uParam1->f_135.f_3 = 200.88f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 1970.161f, 3832.697f, 31.0051f };
			uParam1->f_150[0] = 345.24f;
			uParam1->f_140[1 /*3*/] = { 1923.846f, 3793.484f, 31.3044f };
			uParam1->f_150[1] = 24.6026f;
			return 1;
			break;
		
		case 3:
			*(uParam1[0 /*15*/]) = { -15.8397f, -1454.149f, 32.0213f };
			(uParam1[0 /*15*/])->f_3 = { -0.6298f, 0.0085f, -9.3542f };
			(uParam1[0 /*15*/])->f_6 = { -15.0177f, -1455.3f, 31.1352f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -4.2034f, -0.0715f, -24.1621f };
			(uParam1[0 /*15*/])->f_12 = 38.6495f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -25.7417f, -1450.132f, 33.5422f };
			(uParam1[1 /*15*/])->f_3 = { -11.1198f, 0f, -123.8078f };
			(uParam1[1 /*15*/])->f_6 = { -25.7417f, -1450.132f, 30.5422f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -11.1198f, 0f, -123.8078f };
			(uParam1[1 /*15*/])->f_12 = 38.2875f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { -13.6389f, -1451.056f, 31.0825f };
			(uParam1[2 /*15*/])->f_3 = { -3.2369f, -0.029f, 176.9312f };
			(uParam1[2 /*15*/])->f_6 = { -25.7417f, -1450.132f, 30.5422f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -11.1198f, 0f, -123.8078f };
			(uParam1[2 /*15*/])->f_12 = 26.097f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -15.5813f, -1457.149f, 30.8433f };
			(uParam1[3 /*15*/])->f_3 = { -1.3844f, 0f, -15.1833f };
			(uParam1[3 /*15*/])->f_6 = { -15.6248f, -1457.021f, 30.8406f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -0.4872f, 0f, -12.8425f };
			(uParam1[3 /*15*/])->f_12 = 32.9661f;
			(uParam1[3 /*15*/])->f_13 = 4f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -14.4f, -1453.1f, 31f };
			(uParam1[5 /*15*/])->f_3 = { -3f, 0f, -144f };
			(uParam1[5 /*15*/])->f_6 = { -14.4f, -1453.1f, 31f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3f, 0f, -144f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -14.4f, -1453.1f, 31f };
			uParam1->f_91.f_3 = { -3f, 0f, -144f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -14.4f, -1453.1f, 31f };
			uParam1->f_98.f_3 = { -3f, 0f, -144f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -5.0612f, -1456.55f, 29.4097f };
			uParam1->f_108 = 96.12f;
			uParam1->f_109 = { -13.8595f, -1454.332f, 29.5001f };
			uParam1->f_112[0 /*3*/] = { -14.2219f, -1452.365f, 29.5429f };
			uParam1->f_112[1 /*3*/] = { -13.2385f, -1452.184f, 29.548f };
			uParam1->f_119 = { -13.9595f, -1441.432f, 30.2797f };
			uParam1->f_123 = 3f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -13.9595f, -1441.432f, 30.2797f };
			uParam1->f_132 = { -13.9595f, -1441.432f, 30.2797f };
			uParam1->f_135 = { -31.3914f, -1468.314f, 30.0697f };
			uParam1->f_135.f_3 = 274.68f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -14.3429f, -1423.344f, 29.7124f };
			uParam1->f_150[0] = 257.04f;
			uParam1->f_140[1 /*3*/] = { 9.0406f, -1416.897f, 28.3067f };
			uParam1->f_150[1] = 270.72f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		
		case 4:
			*(uParam1[0 /*15*/]) = { 21.2376f, 576.7308f, 185.7817f };
			(uParam1[0 /*15*/])->f_3 = { 1.9456f, 0.0255f, 179.1536f };
			(uParam1[0 /*15*/])->f_6 = { 21.2591f, 576.9102f, 183.7657f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			(uParam1[0 /*15*/])->f_12 = 39.704f;
			(uParam1[0 /*15*/])->f_13 = 6f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 12.3045f, 550.5663f, 176.4523f };
			(uParam1[1 /*15*/])->f_3 = { -4.0739f, 0f, 153.0748f };
			(uParam1[1 /*15*/])->f_6 = { 12.171f, 550.1313f, 176.4203f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -3.1393f, 0f, 151.833f };
			(uParam1[1 /*15*/])->f_12 = 31.4978f;
			(uParam1[1 /*15*/])->f_13 = 10f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -9.2007f, 554.8126f, 180.3407f };
			(uParam1[2 /*15*/])->f_3 = { -8.5854f, -0.0669f, -106.6038f };
			(uParam1[2 /*15*/])->f_6 = { -9.2007f, 554.8126f, 177.3407f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -8.5854f, -0.0669f, -106.6038f };
			(uParam1[2 /*15*/])->f_12 = 35.9812f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 11.9662f, 545.9982f, 176.342f };
			(uParam1[3 /*15*/])->f_3 = { -4.2197f, 0.0086f, 36.2193f };
			(uParam1[3 /*15*/])->f_6 = { 11.9368f, 546.1504f, 176.3316f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -4.2197f, 0.0086f, 35.5229f };
			(uParam1[3 /*15*/])->f_12 = 50f;
			(uParam1[3 /*15*/])->f_13 = 4f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 21.2591f, 576.9102f, 183.7657f };
			(uParam1[5 /*15*/])->f_3 = { -6.2299f, 0.0255f, 171.9914f };
			(uParam1[5 /*15*/])->f_6 = { 21.2591f, 576.9102f, 183.7657f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			(uParam1[5 /*15*/])->f_12 = 39.704f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 21.2591f, 576.9102f, 183.7657f };
			uParam1->f_91.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			uParam1->f_97 = 39.704f;
			uParam1->f_98 = { 21.2591f, 576.9102f, 183.7657f };
			uParam1->f_98.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			uParam1->f_104 = 39.704f;
			uParam1->f_105 = { 16.4339f, 549.3853f, 175.3116f };
			uParam1->f_108 = 56.25f;
			uParam1->f_109 = { 10.8375f, 549.054f, 174.9718f };
			uParam1->f_112[0 /*3*/] = { 11.4257f, 547.3162f, 174.9038f };
			uParam1->f_112[1 /*3*/] = { 10.0769f, 547.0983f, 174.7723f };
			uParam1->f_119 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_123 = 3.025f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_132 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_135 = { 24.9549f, 566.2881f, 177.4016f };
			uParam1->f_135.f_3 = 110.16f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 14.6234f, 526.126f, 173.6292f };
			uParam1->f_150[0] = 115.56f;
			uParam1->f_140[1 /*3*/] = { 11.0096f, 521.315f, 169.2275f };
			uParam1->f_150[1] = 197.1696f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		
		case 5:
			*(uParam1[0 /*15*/]) = { 1988.662f, 3809.245f, 33.889f };
			(uParam1[0 /*15*/])->f_3 = { 2.3222f, 0f, 59.8915f };
			(uParam1[0 /*15*/])->f_6 = { 1988.41f, 3808.381f, 32.7818f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.5227f, 0f, 34.7012f };
			(uParam1[0 /*15*/])->f_12 = 41.7859f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 1999.131f, 3808.382f, 37.36f };
			(uParam1[1 /*15*/])->f_3 = { -19.3735f, 0f, 77.9903f };
			(uParam1[1 /*15*/])->f_6 = { 1999.131f, 3808.382f, 34.36f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -19.3735f, 0f, 77.9903f };
			(uParam1[1 /*15*/])->f_12 = 50f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 1986.536f, 3808.712f, 32.7272f };
			(uParam1[2 /*15*/])->f_3 = { -4.2982f, 0.0419f, -15.1045f };
			(uParam1[2 /*15*/])->f_6 = { 1986.546f, 3808.747f, 32.7245f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.2982f, 0.0419f, -17.9532f };
			(uParam1[2 /*15*/])->f_12 = 27.6284f;
			(uParam1[2 /*15*/])->f_13 = 4f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 1984.67f, 3817.902f, 32.6427f };
			(uParam1[3 /*15*/])->f_3 = { -1.1635f, 0.0008f, -168.368f };
			(uParam1[3 /*15*/])->f_6 = { 1984.887f, 3817.297f, 32.6298f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -1.1635f, 0.0008f, -168.368f };
			(uParam1[3 /*15*/])->f_12 = 39.0874f;
			(uParam1[3 /*15*/])->f_13 = 5f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 1985.8f, 3811.2f, 32.6f };
			(uParam1[5 /*15*/])->f_3 = { -3.2f, 0f, -172.8f };
			(uParam1[5 /*15*/])->f_6 = { 1985.8f, 3811.2f, 32.6f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.2f, 0f, -172.8f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 1985.8f, 3811.2f, 32.6f };
			uParam1->f_91.f_3 = { -3.2f, 0f, -172.8f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 21.2591f, 576.9102f, 183.7657f };
			uParam1->f_98.f_3 = { -6.2299f, 0.0255f, 171.9914f };
			uParam1->f_104 = 39.704f;
			uParam1->f_105 = { 1984.545f, 3797.065f, 31.253f };
			uParam1->f_108 = 303.75f;
			uParam1->f_109 = { 1986.351f, 3809.745f, 31.1284f };
			uParam1->f_112[0 /*3*/] = { 1986.562f, 3811.748f, 31.1313f };
			uParam1->f_112[1 /*3*/] = { 1987.799f, 3811.082f, 31.0998f };
			uParam1->f_119 = { 1977.868f, 3815.664f, 32.7359f };
			uParam1->f_123 = 3.225f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_132 = { 8.1316f, 539.2505f, 174.9739f };
			uParam1->f_135 = { 1996.434f, 3822.849f, 31.1168f };
			uParam1->f_135.f_3 = 200.88f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 1970.161f, 3832.697f, 31.0051f };
			uParam1->f_150[0] = 345.24f;
			uParam1->f_140[1 /*3*/] = { 1923.846f, 3793.484f, 31.3044f };
			uParam1->f_150[1] = 24.6026f;
			return 1;
			break;
		
		case 6:
			*(uParam1[0 /*15*/]) = { -1189.419f, -1506.489f, 4.811f };
			(uParam1[0 /*15*/])->f_3 = { 4.0569f, 0f, -111.2564f };
			(uParam1[0 /*15*/])->f_6 = { -1189.142f, -1505.771f, 4.8109f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 4.1072f, 0.0399f, -111.7328f };
			(uParam1[0 /*15*/])->f_12 = 41.5362f;
			(uParam1[0 /*15*/])->f_13 = 5.55f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1160.05f, -1514.512f, 4.7395f };
			(uParam1[1 /*15*/])->f_3 = { -2.2734f, 0.0031f, -127.6174f };
			(uParam1[1 /*15*/])->f_6 = { -1159.904f, -1514.625f, 4.7321f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -0.9723f, 0.0031f, -126.8698f };
			(uParam1[1 /*15*/])->f_12 = 26.7346f;
			(uParam1[1 /*15*/])->f_13 = 5.65f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1159.954f, -1514.022f, 4.7491f };
			(uParam1[2 /*15*/])->f_3 = { -2.2734f, 0.0031f, -143.3719f };
			(uParam1[2 /*15*/])->f_6 = { -1159.839f, -1514.176f, 4.7415f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.2734f, 0.0031f, -144.9591f };
			(uParam1[2 /*15*/])->f_12 = 26.7346f;
			(uParam1[2 /*15*/])->f_13 = 10f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1157.197f, -1524.042f, 4.3609f };
			(uParam1[3 /*15*/])->f_3 = { 2.9759f, 0f, 4.513f };
			(uParam1[3 /*15*/])->f_6 = { -1157.153f, -1523.628f, 4.3821f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 2.9759f, 0f, 4.513f };
			(uParam1[3 /*15*/])->f_12 = 26.7346f;
			(uParam1[3 /*15*/])->f_13 = 4f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1156.8f, -1515.6f, 4.6f };
			(uParam1[5 /*15*/])->f_3 = { -2.9f, 0f, 94f };
			(uParam1[5 /*15*/])->f_6 = { -1156.8f, -1515.6f, 4.6f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -2.9f, 0f, 94f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1156.8f, -1515.6f, 4.6f };
			uParam1->f_91.f_3 = { -2.9f, 0f, 94f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -1156.8f, -1515.6f, 4.6f };
			uParam1->f_98.f_3 = { -2.9f, 0f, 94f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -1168.042f, -1519.458f, 3.2867f };
			uParam1->f_108 = 306.25f;
			uParam1->f_109 = { -1158.243f, -1515.221f, 3.2073f };
			uParam1->f_112[0 /*3*/] = { -1157.554f, -1517.099f, 3.3741f };
			uParam1->f_112[1 /*3*/] = { -1158.492f, -1517.444f, 3.357f };
			uParam1->f_119 = { -1148.843f, -1521.801f, 3.4073f };
			uParam1->f_123 = 2.95f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -1148.843f, -1521.801f, 3.4073f };
			uParam1->f_132 = { -1148.843f, -1521.801f, 3.4073f };
			uParam1->f_135 = { -1176.761f, -1521.671f, 3.4037f };
			uParam1->f_135.f_3 = 301.68f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -1148.9f, -1523.479f, 9.6331f };
			uParam1->f_150[0] = 34.92f;
			uParam1->f_140[1 /*3*/] = { -1134.435f, -1532.005f, 3.315f };
			uParam1->f_150[1] = 309.24f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		
		case 7:
			*(uParam1[0 /*15*/]) = { 129.8136f, -1313.469f, 29.9182f };
			(uParam1[0 /*15*/])->f_3 = { 21.2995f, -0.0209f, -12.3644f };
			(uParam1[0 /*15*/])->f_6 = { 129.8168f, -1313.456f, 29.3543f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.8903f, -0.0209f, -14.9554f };
			(uParam1[0 /*15*/])->f_12 = 36.2014f;
			(uParam1[0 /*15*/])->f_13 = 5.325f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 132.7778f, -1307.627f, 29.7443f };
			(uParam1[1 /*15*/])->f_3 = { -2.534f, 0.0048f, -0.6283f };
			(uParam1[1 /*15*/])->f_6 = { 132.7788f, -1307.527f, 29.7398f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.534f, 0.0048f, -0.6283f };
			(uParam1[1 /*15*/])->f_12 = 27.0556f;
			(uParam1[1 /*15*/])->f_13 = 5.1f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 132.4454f, -1307.645f, 29.748f };
			(uParam1[2 /*15*/])->f_3 = { -3.058f, 0.0048f, -11.2444f };
			(uParam1[2 /*15*/])->f_6 = { 132.4589f, -1307.577f, 29.7443f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.534f, 0.0048f, -11.3535f };
			(uParam1[2 /*15*/])->f_12 = 27.0556f;
			(uParam1[2 /*15*/])->f_13 = 10.05f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 129.1269f, -1301.723f, 29.4008f };
			(uParam1[3 /*15*/])->f_3 = { 0.316f, -0.0209f, -128.7821f };
			(uParam1[3 /*15*/])->f_6 = { 128.7942f, -1301.455f, 29.3985f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.316f, -0.0209f, -128.7821f };
			(uParam1[3 /*15*/])->f_12 = 40.468f;
			(uParam1[3 /*15*/])->f_13 = 10.725f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 132.8f, -1305.1f, 29.7f };
			(uParam1[5 /*15*/])->f_3 = { -6.6f, 0f, 177.3f };
			(uParam1[5 /*15*/])->f_6 = { 132.8f, -1305.1f, 29.7f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -6.6f, 0f, 177.3f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 132.8f, -1305.1f, 29.7f };
			uParam1->f_91.f_3 = { -6.6f, 0f, 177.3f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 132.8f, -1305.1f, 29.7f };
			uParam1->f_98.f_3 = { -6.6f, 0f, 177.3f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 133.1947f, -1312.149f, 28.1072f };
			uParam1->f_108 = 126.05f;
			uParam1->f_109 = { 133.0748f, -1306.509f, 28.133f };
			uParam1->f_112[0 /*3*/] = { 132.4439f, -1304.66f, 28.2045f };
			uParam1->f_112[1 /*3*/] = { 133.2145f, -1304.75f, 28.1905f };
			uParam1->f_119 = { 128.5787f, -1298.368f, 28.3026f };
			uParam1->f_123 = 2.925f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 128.5787f, -1298.368f, 28.3026f };
			uParam1->f_132 = { 128.5787f, -1298.368f, 28.3026f };
			uParam1->f_135 = { 154.0517f, -1307.696f, 28.2026f };
			uParam1->f_135.f_3 = 149.04f;
			uParam1->f_135.f_4 = 10;
			uParam1->f_140[0 /*3*/] = { 95.7223f, -1313.171f, 28.294f };
			uParam1->f_150[0] = 83.16f;
			uParam1->f_140[1 /*3*/] = { 112.8357f, -1276.493f, 28.0221f };
			uParam1->f_150[1] = 99.36f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		
		case 8:
			*(uParam1[0 /*15*/]) = { 166.9471f, -1340.813f, 31.2908f };
			(uParam1[0 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[0 /*15*/])->f_6 = { 166.9471f, -1340.813f, 29.2908f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 5.325f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 132.7778f, -1307.627f, 29.7443f };
			(uParam1[1 /*15*/])->f_3 = { -2.534f, 0.0048f, -0.6283f };
			(uParam1[1 /*15*/])->f_6 = { 132.7788f, -1307.527f, 29.7398f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.534f, 0.0048f, -0.6283f };
			(uParam1[1 /*15*/])->f_12 = 27.0556f;
			(uParam1[1 /*15*/])->f_13 = 5.1f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 132.4454f, -1307.645f, 29.748f };
			(uParam1[2 /*15*/])->f_3 = { -3.058f, 0.0048f, -11.2444f };
			(uParam1[2 /*15*/])->f_6 = { 132.4589f, -1307.577f, 29.7443f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.534f, 0.0048f, -11.3535f };
			(uParam1[2 /*15*/])->f_12 = 27.0556f;
			(uParam1[2 /*15*/])->f_13 = 10.05f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 129.1269f, -1301.723f, 29.4008f };
			(uParam1[3 /*15*/])->f_3 = { 0.316f, -0.0209f, -128.7821f };
			(uParam1[3 /*15*/])->f_6 = { 128.7942f, -1301.455f, 29.3985f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.316f, -0.0209f, -128.7821f };
			(uParam1[3 /*15*/])->f_12 = 40.468f;
			(uParam1[3 /*15*/])->f_13 = 10.725f;
			(uParam1[3 /*15*/])->f_14 = 0;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 166.9471f, -1340.813f, 31.2908f };
			(uParam1[5 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[5 /*15*/])->f_6 = { 166.9471f, -1340.813f, 31.2908f };
			(uParam1[5 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 166.9471f, -1340.813f, 31.2908f };
			uParam1->f_91.f_3 = { 0f, 0f, 0f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 132.8f, -1305.1f, 29.7f };
			uParam1->f_98.f_3 = { -6.6f, 0f, 177.3f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 176.9471f, -1340.813f, 28.2908f };
			uParam1->f_108 = 0f;
			uParam1->f_109 = { 176.9471f, -1340.813f, 28.2908f };
			uParam1->f_112[0 /*3*/] = { 177.5471f, -1340.513f, 28.2908f };
			uParam1->f_112[1 /*3*/] = { 177.5471f, -1341.113f, 28.2908f };
			uParam1->f_119 = { 181.9471f, -1340.813f, 28.2908f };
			uParam1->f_123 = 2.925f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 128.5787f, -1298.368f, 28.3026f };
			uParam1->f_132 = { 128.5787f, -1298.368f, 28.3026f };
			uParam1->f_135 = { 154.0517f, -1307.696f, 28.2026f };
			uParam1->f_135.f_3 = 149.04f;
			uParam1->f_135.f_4 = 10;
			uParam1->f_140[0 /*3*/] = { 176.9471f, -1340.813f, 28.2908f };
			uParam1->f_150[0] = 0f;
			uParam1->f_140[1 /*3*/] = { 176.9471f, -1340.813f, 28.2908f };
			uParam1->f_150[1] = 0f;
			return 1;
			break;
		
		case 9:
			*(uParam1[0 /*15*/]) = { -56.3573f, -1460.427f, 34.1991f };
			(uParam1[0 /*15*/])->f_3 = { 8.1986f, 0f, 33.5765f };
			(uParam1[0 /*15*/])->f_6 = { -56.5558f, -1460.149f, 32.6568f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -4.0126f, 0f, 51.7138f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 6.3f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -57.7509f, -1459.455f, 32.518f };
			(uParam1[1 /*15*/])->f_3 = { -2.6848f, 0f, 75.5677f };
			(uParam1[1 /*15*/])->f_6 = { -57.7917f, -1459.445f, 32.516f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.4783f, 0f, 75.5677f };
			(uParam1[1 /*15*/])->f_12 = 26.9657f;
			(uParam1[1 /*15*/])->f_13 = 5.375f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -57.7837f, -1459.794f, 32.5223f };
			(uParam1[2 /*15*/])->f_3 = { -2.6848f, 0f, 58.9447f };
			(uParam1[2 /*15*/])->f_6 = { -57.8125f, -1459.687f, 32.5185f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.6848f, 0f, 58.169f };
			(uParam1[2 /*15*/])->f_12 = 26.9657f;
			(uParam1[2 /*15*/])->f_13 = 10.975f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -61.4802f, -1449.468f, 32.2744f };
			(uParam1[3 /*15*/])->f_3 = { 0.1485f, 0f, -174.2878f };
			(uParam1[3 /*15*/])->f_6 = { -61.4802f, -1449.468f, 32.2744f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.1485f, 0f, -177.7354f };
			(uParam1[3 /*15*/])->f_12 = 35.5635f;
			(uParam1[3 /*15*/])->f_13 = 4.175f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -58.6f, -1458.2f, 32.7f };
			(uParam1[5 /*15*/])->f_3 = { -9.2f, 0f, 149f };
			(uParam1[5 /*15*/])->f_6 = { -58.6f, -1458.2f, 32.7f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -9.2f, 0f, 149f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -58.6f, -1458.2f, 32.7f };
			uParam1->f_91.f_3 = { -9.2f, 0f, 149f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -58.6f, -1458.2f, 32.7f };
			uParam1->f_98.f_3 = { -9.2f, 0f, 149f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -62.9473f, -1462.459f, 30.9713f };
			uParam1->f_108 = 116.37f;
			uParam1->f_109 = { -59.0633f, -1459.54f, 30.9904f };
			uParam1->f_112[0 /*3*/] = { -60.5552f, -1458.208f, 31.0545f };
			uParam1->f_112[1 /*3*/] = { -59.8892f, -1457.462f, 31.0777f };
			uParam1->f_119 = { -67.2833f, -1451.74f, 30.994f };
			uParam1->f_123 = 3.55f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -67.2833f, -1451.74f, 30.994f };
			uParam1->f_132 = { -67.2833f, -1451.74f, 30.994f };
			uParam1->f_135 = { -46.4771f, -1460.511f, 30.8037f };
			uParam1->f_135.f_3 = 95.76f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -68.4237f, -1436.754f, 31.1236f };
			uParam1->f_150[0] = 116.64f;
			uParam1->f_140[1 /*3*/] = { -74.2421f, -1420.867f, 28.3225f };
			uParam1->f_150[1] = 271.8f;
			uParam1->f_140[2 /*3*/] = { 0f, 0f, 0f };
			uParam1->f_150[2] = 0f;
			return 1;
			break;
		
		case 10:
			*(uParam1[0 /*15*/]) = { -10.932f, -117.3033f, 57.4867f };
			(uParam1[0 /*15*/])->f_3 = { 28.1405f, -0.0662f, 15.2927f };
			(uParam1[0 /*15*/])->f_6 = { -11.2653f, -117.2236f, 57.1882f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 0.5113f, -0.0662f, 30.565f };
			(uParam1[0 /*15*/])->f_12 = 49.9706f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -7.0757f, -120.2365f, 61.4475f };
			(uParam1[1 /*15*/])->f_3 = { -4.7436f, 0.1427f, 49.9124f };
			(uParam1[1 /*15*/])->f_6 = { -6.8992f, -120.3944f, 58.5944f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -4.7436f, 0.1427f, 49.9124f };
			(uParam1[1 /*15*/])->f_12 = 44.4311f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { -11.5998f, -116.8049f, 57.3232f };
			(uParam1[2 /*15*/])->f_3 = { -1.4412f, 0f, 19.334f };
			(uParam1[2 /*15*/])->f_6 = { -6.8992f, -120.3944f, 58.5944f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.7436f, 0.1427f, 49.9124f };
			(uParam1[2 /*15*/])->f_12 = 28.2808f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -20.2221f, -111.6242f, 57.1864f };
			(uParam1[3 /*15*/])->f_3 = { -1.4928f, 0f, -95.3855f };
			(uParam1[3 /*15*/])->f_6 = { -20.2221f, -111.6242f, 57.1864f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -1.4928f, 0f, -89.5594f };
			(uParam1[3 /*15*/])->f_12 = 42.4439f;
			(uParam1[3 /*15*/])->f_13 = 0f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -12.2428f, -118.5385f, 57.0926f };
			(uParam1[4 /*15*/])->f_3 = { -2.338f, -0.0148f, -1.9302f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 49.9706f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -10.7f, -114.5f, 57.2f };
			(uParam1[5 /*15*/])->f_3 = { -0.7f, 0f, 115.2f };
			(uParam1[5 /*15*/])->f_6 = { -10.7f, -114.5f, 57.2f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -0.7f, 0f, 109.1433f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 4.575f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -10.7f, -114.5f, 57.2f };
			uParam1->f_91.f_3 = { -0.7f, 0f, 115.2f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -13.0725f, -115.19f, 57.2984f };
			uParam1->f_98.f_3 = { -4.2214f, -0.8691f, -107.3625f };
			uParam1->f_104 = 49.9706f;
			uParam1->f_105 = { -18.5821f, -115.3713f, 55.7963f };
			uParam1->f_108 = 73.08f;
			uParam1->f_109 = { -11.6174f, -115.3955f, 55.781f };
			uParam1->f_112[0 /*3*/] = { -13.4109f, -114.6339f, 55.8221f };
			uParam1->f_112[1 /*3*/] = { -12.6469f, -114.0475f, 55.8117f };
			uParam1->f_119 = { -13.4678f, -109.2617f, 56.1351f };
			uParam1->f_123 = 2.675f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 6f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -16.8713f, -118.8766f, 55.8675f };
			uParam1->f_132 = { -97.4889f, -89.0346f, 56.5371f };
			uParam1->f_135 = { -1.682f, -108.0647f, 55.8574f };
			uParam1->f_135.f_3 = 160.56f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -60.4338f, -88.276f, 56.7463f };
			uParam1->f_150[0] = 346.32f;
			uParam1->f_140[1 /*3*/] = { -29.7926f, -85.2089f, 56.2538f };
			uParam1->f_150[1] = 42.12f;
			uParam1->f_140[2 /*3*/] = { -64.4417f, -76.578f, 57.13f };
			uParam1->f_150[2] = 350.7988f;
			return 1;
			break;
		
		case 11:
			*(uParam1[0 /*15*/]) = { -599.6635f, -307.1347f, 35.5723f };
			(uParam1[0 /*15*/])->f_3 = { 6.6136f, 0.0661f, 14.4573f };
			(uParam1[0 /*15*/])->f_6 = { -599.6488f, -307.1032f, 35.4806f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 0.6974f, 0.0661f, -24.9427f };
			(uParam1[0 /*15*/])->f_12 = 45.1942f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -598.3406f, -305.7075f, 35.495f };
			(uParam1[1 /*15*/])->f_3 = { -1.8206f, 0f, -24.4412f };
			(uParam1[1 /*15*/])->f_6 = { -598.2725f, -305.5562f, 35.4897f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.2461f, 0f, -23.8667f };
			(uParam1[1 /*15*/])->f_12 = 27.1855f;
			(uParam1[1 /*15*/])->f_13 = 10.225f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -595.8862f, -335.8199f, 39.8311f };
			(uParam1[2 /*15*/])->f_3 = { -2.4437f, 0.0925f, 2.7068f };
			(uParam1[2 /*15*/])->f_6 = { -595.8862f, -335.8199f, 36.8311f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -2.4437f, 0.0925f, 2.7068f };
			(uParam1[2 /*15*/])->f_12 = 30.8234f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { -603.5041f, -298.5019f, 35.5324f };
			(uParam1[3 /*15*/])->f_3 = { -0.4957f, 0f, -127.7728f };
			(uParam1[3 /*15*/])->f_6 = { -603.7752f, -298.292f, 35.8069f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -0.4957f, 0f, -127.7728f };
			(uParam1[3 /*15*/])->f_12 = 37.7459f;
			(uParam1[3 /*15*/])->f_13 = 4.875f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -589.7507f, -307.463f, 35.5272f };
			(uParam1[4 /*15*/])->f_3 = { -4.1072f, 0.0055f, 69.2885f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 24.1002f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -598.8f, -304.1f, 35.4f };
			(uParam1[5 /*15*/])->f_3 = { 0.3f, 0f, -105.1f };
			(uParam1[5 /*15*/])->f_6 = { -598.8f, -304.1f, 35.4f };
			(uParam1[5 /*15*/])->f_6.f_3 = { 0.3f, 0f, -118.5139f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 6.525f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -598.8f, -304.1f, 35.4f };
			uParam1->f_91.f_3 = { 0.3f, 0f, -105.1f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -598.8f, -304.1f, 35.4f };
			uParam1->f_98.f_3 = { 0.3f, 0f, -118.5139f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -591.6484f, -304.453f, 33.8604f };
			uParam1->f_108 = 122.04f;
			uParam1->f_109 = { -597.5052f, -304.8516f, 33.9584f };
			uParam1->f_112[0 /*3*/] = { -597.8029f, -303.0807f, 33.9633f };
			uParam1->f_112[1 /*3*/] = { -596.705f, -302.7705f, 33.9718f };
			uParam1->f_119 = { -604.737f, -293.2985f, 33.9548f };
			uParam1->f_123 = 2.925f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.37f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -591.2324f, -302.5901f, 33.9939f };
			uParam1->f_132 = { -612.3061f, -316.7069f, 33.7226f };
			uParam1->f_135 = { -585.7039f, -300.9887f, 33.9348f };
			uParam1->f_135.f_3 = 116.64f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -623.0575f, -252.5577f, 37.6049f };
			uParam1->f_150[0] = 346.32f;
			uParam1->f_140[1 /*3*/] = { -585.6531f, -270.6682f, 34.6228f };
			uParam1->f_150[1] = 33.48f;
			uParam1->f_140[2 /*3*/] = { -649.7907f, -296.3604f, 34.3442f };
			uParam1->f_150[2] = 32.4f;
			return 1;
			break;
		
		case 12:
			*(uParam1[0 /*15*/]) = { -158.1838f, -175.1498f, 44.1235f };
			(uParam1[0 /*15*/])->f_3 = { -1.234f, 0f, -24.3748f };
			(uParam1[0 /*15*/])->f_6 = { -157.466f, -176.0162f, 44.1356f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.234f, 0f, -54.2213f };
			(uParam1[0 /*15*/])->f_12 = 38.9525f;
			(uParam1[0 /*15*/])->f_13 = 7.5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -162.7006f, -153.3978f, 45.8229f };
			(uParam1[1 /*15*/])->f_3 = { -4.6874f, 0.0837f, -166.4122f };
			(uParam1[1 /*15*/])->f_6 = { -162.7006f, -153.3978f, 42.8229f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -4.6874f, 0.0837f, -166.4122f };
			(uParam1[1 /*15*/])->f_12 = 30.9732f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { -162.7006f, -153.3978f, 45.8229f };
			(uParam1[2 /*15*/])->f_3 = { -4.6874f, 0.0837f, -166.4122f };
			(uParam1[2 /*15*/])->f_6 = { -162.7006f, -153.3978f, 42.8229f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.6874f, 0.0837f, -166.4122f };
			(uParam1[2 /*15*/])->f_12 = 30.9732f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_12 = 0f;
			(uParam1[3 /*15*/])->f_13 = 0f;
			(uParam1[3 /*15*/])->f_14 = 0;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -155.5f, -173.6f, 44.3f };
			(uParam1[5 /*15*/])->f_3 = { -5.3f, 0f, 176.7f };
			(uParam1[5 /*15*/])->f_6 = { -155.5f, -173.6f, 44.3f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -5.3f, 0f, 176.7f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -155.5f, -173.6f, 44.3f };
			uParam1->f_91.f_3 = { -5.3f, 0f, 176.7f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -155.5f, -173.6f, 44.3f };
			uParam1->f_98.f_3 = { -5.3f, 0f, 176.7f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -159.0514f, -179.6376f, 42.6038f };
			uParam1->f_108 = 340.79f;
			uParam1->f_109 = { -155.6107f, -175.4378f, 42.7616f };
			uParam1->f_112[0 /*3*/] = { -155.2113f, -173.4781f, 42.7592f };
			uParam1->f_112[1 /*3*/] = { -154.2314f, -173.6778f, 42.7592f };
			uParam1->f_119 = { -151.4107f, -167.0978f, 42.7614f };
			uParam1->f_123 = 2.675f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 5.985f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -157.8152f, -173.411f, 42.6205f };
			uParam1->f_132 = { -180.3291f, -85.6264f, 51.5502f };
			uParam1->f_135 = { -178.2606f, -176.797f, 42.6219f };
			uParam1->f_135.f_3 = 247.32f;
			uParam1->f_135.f_4 = 8;
			uParam1->f_140[0 /*3*/] = { -111.5168f, -176.4249f, 49.3869f };
			uParam1->f_150[0] = 337.9647f;
			uParam1->f_140[1 /*3*/] = { -146.1066f, -289.7199f, 40.319f };
			uParam1->f_150[1] = 162.6801f;
			uParam1->f_140[2 /*3*/] = { -184.0584f, -92.239f, 51.4793f };
			uParam1->f_150[2] = 339.5543f;
			return 1;
			break;
		
		case 13:
			*(uParam1[0 /*15*/]) = { 216.6692f, -50.2341f, 71.0802f };
			(uParam1[0 /*15*/])->f_3 = { 9.2136f, 0.0713f, 39.639f };
			(uParam1[0 /*15*/])->f_6 = { 215.4209f, -49.6516f, 69.8986f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -2.9289f, 0.0803f, 45.7664f };
			(uParam1[0 /*15*/])->f_12 = 24.7144f;
			(uParam1[0 /*15*/])->f_13 = 6.025f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 210.3946f, -45.6195f, 69.3571f };
			(uParam1[1 /*15*/])->f_3 = { 0.0814f, 0.0714f, 46.1003f };
			(uParam1[1 /*15*/])->f_6 = { 210.3504f, -45.577f, 69.3572f };
			(uParam1[1 /*15*/])->f_6.f_3 = { 0.0814f, 0.0714f, 46.1003f };
			(uParam1[1 /*15*/])->f_12 = 24.7144f;
			(uParam1[1 /*15*/])->f_13 = 5.9f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 210.6824f, -46.2715f, 69.2401f };
			(uParam1[2 /*15*/])->f_3 = { -0.8841f, 0.0714f, 32.8208f };
			(uParam1[2 /*15*/])->f_6 = { 210.5762f, -46.1068f, 69.2371f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -0.8841f, 0.0714f, 31.8309f };
			(uParam1[2 /*15*/])->f_12 = 24.7144f;
			(uParam1[2 /*15*/])->f_13 = 11.2f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 215.5824f, -47.3697f, 69.1787f };
			(uParam1[3 /*15*/])->f_3 = { 2.7258f, 0.0713f, 56.249f };
			(uParam1[3 /*15*/])->f_6 = { 215.5824f, -47.3697f, 69.1787f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 2.5404f, 0.0713f, 52.4503f };
			(uParam1[3 /*15*/])->f_12 = 33.9919f;
			(uParam1[3 /*15*/])->f_13 = 4.75f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 202.2701f, -56.2778f, 69.5264f };
			(uParam1[4 /*15*/])->f_3 = { -4.8356f, 0.0133f, -30.2715f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 24.7144f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 209.4f, -43.8f, 69.5f };
			(uParam1[5 /*15*/])->f_3 = { -6.8f, 0f, 164.6f };
			(uParam1[5 /*15*/])->f_6 = { 209.4f, -43.8f, 69.5f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -6.8f, 0f, 158.8225f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 5.625f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 209.4f, -43.8f, 69.5f };
			uParam1->f_91.f_3 = { -6.8f, 0f, 164.6f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 209.4f, -43.8f, 69.5f };
			uParam1->f_98.f_3 = { -6.8f, 0f, 158.8225f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { 210.5713f, -51.1838f, 67.8538f };
			uParam1->f_108 = 70.71f;
			uParam1->f_109 = { 209.114f, -45.0546f, 67.9221f };
			uParam1->f_112[0 /*3*/] = { 208.0977f, -42.7594f, 67.8671f };
			uParam1->f_112[1 /*3*/] = { 209.2602f, -42.3165f, 67.9124f };
			uParam1->f_119 = { 201.3204f, -27.2177f, 68.9116f };
			uParam1->f_123 = 3.425f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.1f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 201.3804f, -45.9723f, 67.6405f };
			uParam1->f_132 = { 169.5868f, -39.8977f, 67.1079f };
			uParam1->f_135 = { 220.3531f, -54.6546f, 68.0668f };
			uParam1->f_135.f_3 = 72.36f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 142.2029f, -8.6707f, 66.601f };
			uParam1->f_150[0] = 341.28f;
			uParam1->f_140[1 /*3*/] = { 193.9097f, -0.0854f, 72.4415f };
			uParam1->f_150[1] = 63.36f;
			uParam1->f_140[2 /*3*/] = { 141.1481f, 4.3401f, 67.0326f };
			uParam1->f_150[2] = 340.2f;
			return 1;
			break;
		
		case 14:
			*(uParam1[0 /*15*/]) = { -190.1953f, -796.7072f, 31.3248f };
			(uParam1[0 /*15*/])->f_3 = { 5.1543f, -0.1219f, 2.2711f };
			(uParam1[0 /*15*/])->f_6 = { -190.1855f, -796.9056f, 31.3069f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.8464f, -0.1219f, 21.1543f };
			(uParam1[0 /*15*/])->f_12 = 37.4511f;
			(uParam1[0 /*15*/])->f_13 = 5.7f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -195.8433f, -782.9503f, 30.9256f };
			(uParam1[1 /*15*/])->f_3 = { -1.2833f, 0.0184f, 56.2469f };
			(uParam1[1 /*15*/])->f_6 = { -196.0999f, -782.7787f, 30.9187f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.2833f, 0.0184f, 56.2469f };
			(uParam1[1 /*15*/])->f_12 = 27.5662f;
			(uParam1[1 /*15*/])->f_13 = 11.4f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -174.1382f, -798.4118f, 34.3625f };
			(uParam1[2 /*15*/])->f_3 = { -4.1411f, 0.0443f, -50.839f };
			(uParam1[2 /*15*/])->f_6 = { -174.1382f, -798.4118f, 31.3625f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -4.1411f, 0.0443f, -50.839f };
			(uParam1[2 /*15*/])->f_12 = 45f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { -207.453f, -783.0007f, 30.6883f };
			(uParam1[3 /*15*/])->f_3 = { 0.9957f, -0.0267f, -64.616f };
			(uParam1[3 /*15*/])->f_6 = { -207.483f, -782.9033f, 30.6885f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0.9957f, -0.0267f, -64.1235f };
			(uParam1[3 /*15*/])->f_12 = 39.0431f;
			(uParam1[3 /*15*/])->f_13 = 3.925f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -199.962f, -783.7169f, 30.9963f };
			(uParam1[4 /*15*/])->f_3 = { -3.9471f, 0.0848f, -37.9213f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 27.5662f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -198.6f, -781.3f, 31f };
			(uParam1[5 /*15*/])->f_3 = { -3.1f, 0f, -86.6f };
			(uParam1[5 /*15*/])->f_6 = { -198.6f, -781.3f, 31f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.1f, 0f, -86.6f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -198.6f, -781.3f, 31f };
			uParam1->f_91.f_3 = { -3.1f, 0f, -86.6f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { -194.9262f, -780.7396f, 30.7532f };
			uParam1->f_98.f_3 = { -1.3809f, 0f, 100.1161f };
			uParam1->f_104 = 50f;
			uParam1->f_105 = { -162.74f, -789.3305f, 30.9774f };
			uParam1->f_108 = 154.8f;
			uParam1->f_109 = { -197.2339f, -781.257f, 29.454f };
			uParam1->f_112[0 /*3*/] = { -200.024f, -781.1829f, 29.454f };
			uParam1->f_112[1 /*3*/] = { -199.6951f, -780.3373f, 29.454f };
			uParam1->f_119 = { -208.5797f, -778.6299f, 29.3554f };
			uParam1->f_123 = 3.05f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0.2f;
			uParam1->f_126 = 5.175f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -193.8266f, -787.1005f, 29.454f };
			uParam1->f_132 = { -176.0065f, -830.4868f, 29.6752f };
			uParam1->f_135 = { -160.5266f, -783.0484f, 31.0433f };
			uParam1->f_135.f_3 = 164.52f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -245.7672f, -772.6562f, 31.4945f };
			uParam1->f_150[0] = 340.2f;
			uParam1->f_140[1 /*3*/] = { -240.8987f, -803.7341f, 29.8505f };
			uParam1->f_150[1] = 78.12f;
			uParam1->f_140[2 /*3*/] = { -219.2494f, -869.4808f, 28.864f };
			uParam1->f_150[2] = 73.08f;
			return 1;
			break;
		
		case 15:
			*(uParam1[0 /*15*/]) = { -830.9531f, -1088.276f, 13.0086f };
			(uParam1[0 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[0 /*15*/])->f_6 = { -830.9531f, -1088.276f, 11.0086f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 0f;
			(uParam1[0 /*15*/])->f_14 = 0;
			*(uParam1[1 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[1 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[1 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[1 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[1 /*15*/])->f_12 = 0f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[2 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[2 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[2 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[2 /*15*/])->f_12 = 0f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[3 /*15*/])->f_12 = 0f;
			(uParam1[3 /*15*/])->f_13 = 0f;
			(uParam1[3 /*15*/])->f_14 = 0;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -830.9531f, -1088.276f, 13.0086f };
			(uParam1[5 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[5 /*15*/])->f_6 = { -830.9531f, -1088.276f, 13.0086f };
			(uParam1[5 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[5 /*15*/])->f_12 = 50f;
			(uParam1[5 /*15*/])->f_13 = 0f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -830.9531f, -1088.276f, 13.0086f };
			uParam1->f_91.f_3 = { 0f, 0f, 0f };
			uParam1->f_97 = 50f;
			uParam1->f_98 = { 0f, 0f, 0f };
			uParam1->f_98.f_3 = { 0f, 0f, 0f };
			uParam1->f_104 = 0f;
			uParam1->f_105 = { -820.9531f, -1088.276f, 10.0086f };
			uParam1->f_108 = 0f;
			uParam1->f_109 = { -820.9531f, -1088.276f, 10.0086f };
			uParam1->f_112[0 /*3*/] = { -820.3531f, -1087.976f, 10.0086f };
			uParam1->f_112[1 /*3*/] = { -820.3531f, -1088.576f, 10.0086f };
			uParam1->f_119 = { -815.9531f, -1088.276f, 10.0086f };
			uParam1->f_123 = 0f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 0f;
			uParam1->f_127 = 0;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 0f, 0f, 0f };
			uParam1->f_132 = { 0f, 0f, 0f };
			uParam1->f_135 = { 0f, 0f, 0f };
			uParam1->f_135.f_3 = 0f;
			uParam1->f_135.f_4 = 0;
			uParam1->f_140[0 /*3*/] = { -820.9531f, -1088.276f, 10.0086f };
			uParam1->f_150[0] = 0f;
			uParam1->f_140[1 /*3*/] = { -820.9531f, -1088.276f, 10.0086f };
			uParam1->f_150[1] = 0f;
			uParam1->f_140[2 /*3*/] = { -64.4417f, -76.578f, 57.13f };
			uParam1->f_150[2] = 350.7988f;
			return 1;
			break;
		
		case 16:
			*(uParam1[0 /*15*/]) = { 231.1337f, -972.4833f, 30.5744f };
			(uParam1[0 /*15*/])->f_3 = { 16.554f, 0f, 19.9826f };
			(uParam1[0 /*15*/])->f_6 = { 231.1004f, -972.3924f, 30.3643f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 5.1901f, 0f, 18.1092f };
			(uParam1[0 /*15*/])->f_12 = 39.727f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 231.1243f, -960.4684f, 29.9486f };
			(uParam1[1 /*15*/])->f_3 = { -3.325f, 0.0034f, 44.3253f };
			(uParam1[1 /*15*/])->f_6 = { 231.0919f, -960.4258f, 29.9455f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -3.325f, 0.0034f, 44.3253f };
			(uParam1[1 /*15*/])->f_12 = 18.438f;
			(uParam1[1 /*15*/])->f_13 = 4.925f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 231.1691f, -961.2233f, 29.9703f };
			(uParam1[2 /*15*/])->f_3 = { -1.486f, 0f, 33.1161f };
			(uParam1[2 /*15*/])->f_6 = { 231.019f, -960.993f, 29.9631f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -1.486f, 0f, 33.6074f };
			(uParam1[2 /*15*/])->f_12 = 18.8257f;
			(uParam1[2 /*15*/])->f_13 = 9.525f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 201.2578f, -968.2456f, 31.4906f };
			(uParam1[3 /*15*/])->f_3 = { -3.687f, 0f, -68.9103f };
			(uParam1[3 /*15*/])->f_6 = { 201.1927f, -968.077f, 31.4906f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -3.687f, 0f, -68.9103f };
			(uParam1[3 /*15*/])->f_12 = 30.4755f;
			(uParam1[3 /*15*/])->f_13 = 4.95f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 242.8073f, -959.5851f, 29.7023f };
			(uParam1[4 /*15*/])->f_3 = { 0.2064f, 0.0551f, 93.2706f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 35.954f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 229.2498f, -959.5234f, 29.8773f };
			(uParam1[5 /*15*/])->f_3 = { -3.2186f, 0f, -71.4419f };
			(uParam1[5 /*15*/])->f_6 = { 229.2498f, -959.5234f, 29.8773f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.2186f, 0f, -75.0536f };
			(uParam1[5 /*15*/])->f_12 = 50.036f;
			(uParam1[5 /*15*/])->f_13 = 5.31f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 229.2498f, -959.5234f, 29.8773f };
			uParam1->f_91.f_3 = { -3.2186f, 0f, -71.4419f };
			uParam1->f_97 = 50.036f;
			uParam1->f_98 = { 229.2498f, -959.5234f, 29.8773f };
			uParam1->f_98.f_3 = { -3.2186f, 0f, -75.0536f };
			uParam1->f_104 = 50.036f;
			uParam1->f_105 = { 240.7464f, -951.9853f, 28.1878f };
			uParam1->f_108 = 158.97f;
			uParam1->f_109 = { 230.4242f, -959.2939f, 28.3431f };
			uParam1->f_112[0 /*3*/] = { 228.2315f, -958.0656f, 28.3444f };
			uParam1->f_112[1 /*3*/] = { 228.8929f, -957.1745f, 28.3397f };
			uParam1->f_119 = { 213.1038f, -944.3844f, 29.6918f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 7.635f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 236.7469f, -954.621f, 28.2767f };
			uParam1->f_132 = { 229.3741f, -985.0717f, 28.207f };
			uParam1->f_135 = { 243.9274f, -942.5368f, 28.2134f };
			uParam1->f_135.f_3 = 160.56f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 209.7067f, -912.3889f, 29.6919f };
			uParam1->f_150[0] = 325.08f;
			uParam1->f_140[1 /*3*/] = { 195.2277f, -985.6662f, 29.0919f };
			uParam1->f_150[1] = 108f;
			uParam1->f_140[2 /*3*/] = { 145.6692f, -1008.577f, 28.4015f };
			uParam1->f_150[2] = 74.2663f;
			return 1;
			break;
		
		case 17:
			*(uParam1[0 /*15*/]) = { 248.2705f, -1007.885f, 29.7324f };
			(uParam1[0 /*15*/])->f_3 = { 62.7218f, 0f, -110.9959f };
			(uParam1[0 /*15*/])->f_6 = { 248.4682f, -1007.96f, 29.724f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -2.253f, 0f, -107.2616f };
			(uParam1[0 /*15*/])->f_12 = 40.2691f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 229.6498f, -1017.933f, 34.3134f };
			(uParam1[1 /*15*/])->f_3 = { -8.7545f, -0.043f, -60.4954f };
			(uParam1[1 /*15*/])->f_6 = { 229.6498f, -1017.933f, 31.3134f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -8.7545f, -0.043f, -60.4954f };
			(uParam1[1 /*15*/])->f_12 = 36.2565f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 0;
			*(uParam1[2 /*15*/]) = { 229.6498f, -1017.933f, 34.3134f };
			(uParam1[2 /*15*/])->f_3 = { -8.7545f, -0.043f, -60.4954f };
			(uParam1[2 /*15*/])->f_6 = { 229.6498f, -1017.933f, 31.3134f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -8.7545f, -0.043f, -60.4954f };
			(uParam1[2 /*15*/])->f_12 = 36.2565f;
			(uParam1[2 /*15*/])->f_13 = 0f;
			(uParam1[2 /*15*/])->f_14 = 0;
			*(uParam1[3 /*15*/]) = { 245.8116f, -1013.307f, 29.7147f };
			(uParam1[3 /*15*/])->f_3 = { 1.2147f, 0f, -54.9007f };
			(uParam1[3 /*15*/])->f_6 = { 245.8373f, -1013.343f, 29.7147f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 1.2147f, 0f, -57.703f };
			(uParam1[3 /*15*/])->f_12 = 40.2691f;
			(uParam1[3 /*15*/])->f_13 = 3.75f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 244.272f, -1004.543f, 29.5566f };
			(uParam1[4 /*15*/])->f_3 = { -4.8904f, -0.4852f, -110.0739f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 45f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 250.6561f, -1009.151f, 29.8025f };
			(uParam1[5 /*15*/])->f_3 = { -5.4451f, 0f, 14.2227f };
			(uParam1[5 /*15*/])->f_6 = { 250.6561f, -1009.151f, 29.8025f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -5.4451f, 0f, 12.1978f };
			(uParam1[5 /*15*/])->f_12 = 49.9613f;
			(uParam1[5 /*15*/])->f_13 = 6.945f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 250.6561f, -1009.151f, 29.8025f };
			uParam1->f_91.f_3 = { -5.4451f, 0f, 14.2227f };
			uParam1->f_97 = 49.9613f;
			uParam1->f_98 = { 248.7408f, -1006.52f, 29.6853f };
			uParam1->f_98.f_3 = { -2.7843f, 0.0116f, -145.7124f };
			uParam1->f_104 = 49.9613f;
			uParam1->f_105 = { 247.4841f, -1004.881f, 28.1653f };
			uParam1->f_108 = 345.6f;
			uParam1->f_109 = { 250.0948f, -1007.888f, 28.272f };
			uParam1->f_112[0 /*3*/] = { 251.6908f, -1009.03f, 28.2721f };
			uParam1->f_112[1 /*3*/] = { 250.5304f, -1009.593f, 28.2708f };
			uParam1->f_119 = { 255.7346f, -1013.608f, 28.2705f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 0f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.1f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 247.3293f, -1011.432f, 28.2669f };
			uParam1->f_132 = { 282.2794f, -906.4485f, 27.9033f };
			uParam1->f_135 = { 244.7239f, -1014.886f, 28.1332f };
			uParam1->f_135.f_3 = 348.48f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 265.8661f, -1031.151f, 28.2119f };
			uParam1->f_150[0] = 218.52f;
			uParam1->f_140[1 /*3*/] = { 279.8312f, -962.0749f, 28.4125f };
			uParam1->f_150[1] = 266.76f;
			uParam1->f_140[2 /*3*/] = { 284.2156f, -955.7428f, 28.3454f };
			uParam1->f_150[2] = 267.5414f;
			return 1;
			break;
		
		case 18:
			*(uParam1[0 /*15*/]) = { -223.04f, -1494.461f, 32.1563f };
			(uParam1[0 /*15*/])->f_3 = { -2.3031f, 0.0137f, 170.1147f };
			(uParam1[0 /*15*/])->f_6 = { -222.5391f, -1494.285f, 32.1495f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -2.3031f, 0.0137f, -141.8289f };
			(uParam1[0 /*15*/])->f_12 = 33.267f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -216.6314f, -1498.653f, 31.918f };
			(uParam1[1 /*15*/])->f_3 = { -1.2591f, -0.0294f, -155.8858f };
			(uParam1[1 /*15*/])->f_6 = { -216.5979f, -1498.728f, 31.9162f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.2591f, -0.0294f, -157.2869f };
			(uParam1[1 /*15*/])->f_12 = 17.2517f;
			(uParam1[1 /*15*/])->f_13 = 0f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -216.0729f, -1498.936f, 31.8561f };
			(uParam1[2 /*15*/])->f_3 = { -1.2116f, 0.0137f, -167.8524f };
			(uParam1[2 /*15*/])->f_6 = { -216.035f, -1499.112f, 31.8523f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -1.2116f, 0.0137f, -169.2618f };
			(uParam1[2 /*15*/])->f_12 = 21.1725f;
			(uParam1[2 /*15*/])->f_13 = 10.4f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -215.1879f, -1494.078f, 31.6461f };
			(uParam1[3 /*15*/])->f_3 = { -0.3716f, 0.0137f, 167.1272f };
			(uParam1[3 /*15*/])->f_6 = { -215.4108f, -1494.492f, 31.6431f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -0.3716f, 0.0137f, 164.7599f };
			(uParam1[3 /*15*/])->f_12 = 34.7576f;
			(uParam1[3 /*15*/])->f_13 = 4.825f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -214.1399f, -1497.863f, 31.5615f };
			(uParam1[4 /*15*/])->f_3 = { -1.6427f, 0.0712f, 174.9291f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 50f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -215.9396f, -1502.092f, 31.9881f };
			(uParam1[5 /*15*/])->f_3 = { -8.182f, 0.0137f, -39.2424f };
			(uParam1[5 /*15*/])->f_6 = { -215.9396f, -1502.092f, 31.9881f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -8.182f, 0.0137f, -42.089f };
			(uParam1[5 /*15*/])->f_12 = 50.0069f;
			(uParam1[5 /*15*/])->f_13 = 6.795f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -215.9396f, -1502.092f, 31.9881f };
			uParam1->f_91.f_3 = { -8.182f, 0.0137f, -39.2424f };
			uParam1->f_97 = 50.0069f;
			uParam1->f_98 = { -213.5682f, -1500.077f, 31.854f };
			uParam1->f_98.f_3 = { -2.4576f, 0.0837f, 111.3005f };
			uParam1->f_104 = 50.0069f;
			uParam1->f_105 = { -209.7381f, -1495.071f, 30.2667f };
			uParam1->f_108 = 141.48f;
			uParam1->f_109 = { -215.1646f, -1500.812f, 30.4305f };
			uParam1->f_112[0 /*3*/] = { -215.0512f, -1503.367f, 30.4623f };
			uParam1->f_112[1 /*3*/] = { -215.9888f, -1503.289f, 30.4622f };
			uParam1->f_119 = { -222.2676f, -1510.992f, 30.6938f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4.175f;
			uParam1->f_125 = 0.54f;
			uParam1->f_126 = 9.69f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -206.9685f, -1494.614f, 30.4733f };
			uParam1->f_132 = { -162.9734f, -1508.385f, 32.3938f };
			uParam1->f_135 = { -224.7263f, -1488.164f, 30.3038f };
			uParam1->f_135.f_3 = 139.68f;
			uParam1->f_135.f_4 = 8;
			uParam1->f_140[0 /*3*/] = { -239.6648f, -1549.731f, 30.6344f };
			uParam1->f_150[0] = 136.44f;
			uParam1->f_140[1 /*3*/] = { -263.615f, -1540.688f, 30.6904f };
			uParam1->f_150[1] = 187.56f;
			uParam1->f_140[2 /*3*/] = { -144.4396f, -1549.473f, 33.4471f };
			uParam1->f_150[2] = 139.0999f;
			return 1;
			break;
		
		case 19:
			*(uParam1[0 /*15*/]) = { -1181.397f, -826.845f, 16.5792f };
			(uParam1[0 /*15*/])->f_3 = { 9.6959f, 0f, 47.2246f };
			(uParam1[0 /*15*/])->f_6 = { -1181.98f, -827.2338f, 14.7335f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 4.1175f, 0f, 52.9134f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1184.33f, -826.4483f, 14.7437f };
			(uParam1[1 /*15*/])->f_3 = { -0.6489f, -0.0007f, 62.8269f };
			(uParam1[1 /*15*/])->f_6 = { -1184.571f, -826.3248f, 14.7407f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -0.1044f, -0.0007f, 62.8269f };
			(uParam1[1 /*15*/])->f_12 = 18.4352f;
			(uParam1[1 /*15*/])->f_13 = 5.55f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1184.338f, -826.9095f, 14.7463f };
			(uParam1[2 /*15*/])->f_3 = { -0.6489f, -0.0007f, 50.098f };
			(uParam1[2 /*15*/])->f_6 = { -1184.433f, -826.8304f, 14.7449f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -0.6489f, -0.0007f, 48.6321f };
			(uParam1[2 /*15*/])->f_12 = 18.4352f;
			(uParam1[2 /*15*/])->f_13 = 11.425f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1183.2f, -830.7167f, 14.5212f };
			(uParam1[3 /*15*/])->f_3 = { 1.0563f, 0f, 27.379f };
			(uParam1[3 /*15*/])->f_6 = { -1183.022f, -830.6245f, 14.5212f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 2.0449f, 0f, 26.6091f };
			(uParam1[3 /*15*/])->f_12 = 42.0117f;
			(uParam1[3 /*15*/])->f_13 = 5.2f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -1188.466f, -824.3413f, 14.8546f };
			(uParam1[4 /*15*/])->f_3 = { 1.5615f, -0.1037f, -118.6105f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 53.386f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1186.471f, -824.6526f, 14.8865f };
			(uParam1[5 /*15*/])->f_3 = { -3.8721f, 0f, 169.2043f };
			(uParam1[5 /*15*/])->f_6 = { -1186.471f, -824.6526f, 14.8865f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.8721f, 0f, 173.8093f };
			(uParam1[5 /*15*/])->f_12 = 49.9849f;
			(uParam1[5 /*15*/])->f_13 = 5.52f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1186.471f, -824.6526f, 14.8865f };
			uParam1->f_91.f_3 = { -3.8721f, 0f, 169.2043f };
			uParam1->f_97 = 49.9849f;
			uParam1->f_98 = { -1186.429f, -827.6542f, 14.7835f };
			uParam1->f_98.f_3 = { -0.7502f, 0.0313f, -9.5858f };
			uParam1->f_104 = 49.9849f;
			uParam1->f_105 = { -1189.128f, -832.9972f, 13.2161f };
			uParam1->f_108 = 218.52f;
			uParam1->f_109 = { -1186.425f, -825.9056f, 13.3321f };
			uParam1->f_112[0 /*3*/] = { -1187.74f, -824.2661f, 13.3448f };
			uParam1->f_112[1 /*3*/] = { -1186.4f, -824.4038f, 13.3008f };
			uParam1->f_119 = { -1190.961f, -806.6936f, 17.0174f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4f;
			uParam1->f_125 = 0.27f;
			uParam1->f_126 = 8.625f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -1192.524f, -834.0498f, 13.3085f };
			uParam1->f_132 = { -1131.694f, -912.2311f, 2.2148f };
			uParam1->f_135 = { -1196.721f, -872.5267f, 12.5092f };
			uParam1->f_135.f_3 = 299.52f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -1265.435f, -727.5261f, 21.1402f };
			uParam1->f_150[0] = 25.92f;
			uParam1->f_140[1 /*3*/] = { -1222.269f, -784.6736f, 16.6973f };
			uParam1->f_150[1] = 30.96f;
			uParam1->f_140[2 /*3*/] = { -1140.77f, -935.9708f, 1.6022f };
			uParam1->f_150[2] = 125.0739f;
			return 1;
			break;
		
		case 20:
			*(uParam1[0 /*15*/]) = { -1400.438f, -585.9051f, 30.9432f };
			(uParam1[0 /*15*/])->f_3 = { 32.3305f, 0f, -105.6953f };
			(uParam1[0 /*15*/])->f_6 = { -1400.362f, -585.9331f, 30.9394f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -2.7052f, 0f, -110.3139f };
			(uParam1[0 /*15*/])->f_12 = 50f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1397.601f, -589.7619f, 30.8651f };
			(uParam1[1 /*15*/])->f_3 = { -4.6041f, 0.0007f, -69.4751f };
			(uParam1[1 /*15*/])->f_6 = { -1397.428f, -589.6965f, 30.8501f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -4.6041f, 0.0007f, -69.4751f };
			(uParam1[1 /*15*/])->f_12 = 25.7248f;
			(uParam1[1 /*15*/])->f_13 = 5.075f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1398.365f, -590.4213f, 30.7041f };
			(uParam1[2 /*15*/])->f_3 = { -1.8133f, 0.0007f, -54.5359f };
			(uParam1[2 /*15*/])->f_6 = { -1398.268f, -590.3511f, 30.7003f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -1.8133f, 0.0007f, -53.8792f };
			(uParam1[2 /*15*/])->f_12 = 25.7248f;
			(uParam1[2 /*15*/])->f_13 = 10.05f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1392.434f, -584.4755f, 30.6697f };
			(uParam1[3 /*15*/])->f_3 = { -3.5396f, 0f, 147.9476f };
			(uParam1[3 /*15*/])->f_6 = { -1392.684f, -584.874f, 30.6406f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -2.1681f, 0f, 149.1801f };
			(uParam1[3 /*15*/])->f_12 = 32.1336f;
			(uParam1[3 /*15*/])->f_13 = 8.025f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1395.967f, -590.8463f, 30.9775f };
			(uParam1[5 /*15*/])->f_3 = { -7.0494f, 0f, -16.7103f };
			(uParam1[5 /*15*/])->f_6 = { -1395.967f, -590.8463f, 30.9775f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -7.0494f, 0f, -2.2177f };
			(uParam1[5 /*15*/])->f_12 = 49.3689f;
			(uParam1[5 /*15*/])->f_13 = 4.785f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1395.967f, -590.8463f, 30.9775f };
			uParam1->f_91.f_3 = { -7.0494f, 0f, -16.7103f };
			uParam1->f_97 = 49.3689f;
			uParam1->f_98 = { -1395.967f, -590.8463f, 30.9775f };
			uParam1->f_98.f_3 = { -7.0494f, 0f, -2.2177f };
			uParam1->f_104 = 49.3689f;
			uParam1->f_105 = { -1396.863f, -583.7726f, 29.2332f };
			uParam1->f_108 = 305.28f;
			uParam1->f_109 = { -1395.69f, -589.4706f, 29.2947f };
			uParam1->f_112[0 /*3*/] = { -1394.478f, -588.175f, 29.2765f };
			uParam1->f_112[1 /*3*/] = { -1395.249f, -586.9717f, 29.2791f };
			uParam1->f_119 = { -1387.374f, -586.2861f, 29.2117f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.16f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -1395.365f, -585.9979f, 29.2759f };
			uParam1->f_132 = { -1437.236f, -602.3437f, 29.7106f };
			uParam1->f_135 = { -1402.181f, -587.1375f, 29.2292f };
			uParam1->f_135.f_3 = 301.68f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { -1363.934f, -597.2744f, 28.115f };
			uParam1->f_150[0] = 212.4f;
			uParam1->f_140[1 /*3*/] = { -1317.086f, -534.9244f, 31.6545f };
			uParam1->f_150[1] = 284.04f;
			uParam1->f_140[2 /*3*/] = { -1521.922f, -692.8118f, 27.4762f };
			uParam1->f_150[2] = 232.8838f;
			return 1;
			break;
		
		case 21:
			*(uParam1[0 /*15*/]) = { -1366.922f, -398.731f, 41.0798f };
			(uParam1[0 /*15*/])->f_3 = { 17.4675f, -0.1845f, -77.0057f };
			(uParam1[0 /*15*/])->f_6 = { -1366.93f, -398.9865f, 40.0866f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -5.1001f, -0.1845f, -65.4537f };
			(uParam1[0 /*15*/])->f_12 = 30.8234f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -1345.72f, -386.2633f, 37.2103f };
			(uParam1[1 /*15*/])->f_3 = { -1.0508f, -0.1845f, -61.7459f };
			(uParam1[1 /*15*/])->f_6 = { -1345.581f, -386.1886f, 37.2074f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.0508f, -0.1845f, -61.7459f };
			(uParam1[1 /*15*/])->f_12 = 21.5932f;
			(uParam1[1 /*15*/])->f_13 = 6.925f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -1345.955f, -386.2108f, 37.2211f };
			(uParam1[2 /*15*/])->f_3 = { -3.4291f, -0.1845f, -72.0063f };
			(uParam1[2 /*15*/])->f_6 = { -1345.777f, -386.153f, 37.2099f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -3.185f, -0.1845f, -72.0063f };
			(uParam1[2 /*15*/])->f_12 = 21.5932f;
			(uParam1[2 /*15*/])->f_13 = 10.075f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -1337.814f, -390.8861f, 37.0116f };
			(uParam1[3 /*15*/])->f_3 = { -0.8397f, -0.1845f, 42.1048f };
			(uParam1[3 /*15*/])->f_6 = { -1338.064f, -391.1115f, 37.0105f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -0.8397f, -0.1845f, 42.1048f };
			(uParam1[3 /*15*/])->f_12 = 33.8628f;
			(uParam1[3 /*15*/])->f_13 = 10.375f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { -1347.607f, -384.3f, 37.2427f };
			(uParam1[4 /*15*/])->f_3 = { -5.1716f, -0.1784f, -101.7165f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 33.8628f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -1342.915f, -385.4987f, 37.2378f };
			(uParam1[5 /*15*/])->f_3 = { -3.0101f, -0.1845f, 62.5899f };
			(uParam1[5 /*15*/])->f_6 = { -1342.915f, -385.4987f, 37.2378f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.0101f, -0.1845f, 49.9371f };
			(uParam1[5 /*15*/])->f_12 = 49.9943f;
			(uParam1[5 /*15*/])->f_13 = 5.52f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -1342.915f, -385.4987f, 37.2378f };
			uParam1->f_91.f_3 = { -3.0101f, -0.1845f, 62.5899f };
			uParam1->f_97 = 49.9943f;
			uParam1->f_98 = { -1344.697f, -383.5359f, 37.1767f };
			uParam1->f_98.f_3 = { -7.7089f, -0.22f, -177.5366f };
			uParam1->f_104 = 49.9943f;
			uParam1->f_105 = { -1346.659f, -382.4048f, 35.755f };
			uParam1->f_108 = 304.2f;
			uParam1->f_109 = { -1344.319f, -385.1048f, 35.7534f };
			uParam1->f_112[0 /*3*/] = { -1342.346f, -384.7795f, 35.7455f };
			uParam1->f_112[1 /*3*/] = { -1342.183f, -385.7662f, 35.745f };
			uParam1->f_119 = { -1315.982f, -383.286f, 35.7237f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 5.685f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -1341.672f, -376.5873f, 35.7475f };
			uParam1->f_132 = { -1275.441f, -344.9638f, 35.6584f };
			uParam1->f_135 = { -1326.111f, -395.0894f, 35.4495f };
			uParam1->f_135.f_3 = 212.4f;
			uParam1->f_135.f_4 = 8;
			uParam1->f_140[0 /*3*/] = { -1300.443f, -383.3367f, 35.5787f };
			uParam1->f_150[0] = 208.44f;
			uParam1->f_140[1 /*3*/] = { -1331.939f, -325.6764f, 36.3622f };
			uParam1->f_150[1] = 29.88f;
			uParam1->f_140[2 /*3*/] = { -1293.166f, -383.7935f, 35.5591f };
			uParam1->f_150[2] = 207.2801f;
			return 1;
			break;
		
		case 22:
			*(uParam1[0 /*15*/]) = { -12.9499f, 6502.845f, 32.7873f };
			(uParam1[0 /*15*/])->f_3 = { 9.5209f, 0f, 28.9591f };
			(uParam1[0 /*15*/])->f_6 = { -12.9172f, 6502.981f, 32.0578f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.2163f, 0f, 28.4487f };
			(uParam1[0 /*15*/])->f_12 = 31.35f;
			(uParam1[0 /*15*/])->f_13 = 5f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { -15.8414f, 6504.559f, 32.0731f };
			(uParam1[1 /*15*/])->f_3 = { -2.4909f, 0f, -79.5938f };
			(uParam1[1 /*15*/])->f_6 = { -15.719f, 6504.578f, 32.0677f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -2.4909f, 0f, -79.5938f };
			(uParam1[1 /*15*/])->f_12 = 26.7402f;
			(uParam1[1 /*15*/])->f_13 = 6.8f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { -15.2964f, 6503.461f, 32.0741f };
			(uParam1[2 /*15*/])->f_3 = { -3.2163f, 0f, -40.2756f };
			(uParam1[2 /*15*/])->f_6 = { -15.2178f, 6503.554f, 32.0673f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -3.2163f, 0f, -40.2756f };
			(uParam1[2 /*15*/])->f_12 = 31.35f;
			(uParam1[2 /*15*/])->f_13 = 9.425f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { -17.4111f, 6499.129f, 31.9122f };
			(uParam1[3 /*15*/])->f_3 = { -1.2605f, 0f, -35.0484f };
			(uParam1[3 /*15*/])->f_6 = { -17.3962f, 6499.245f, 31.9101f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -1.2605f, 0f, -38.0048f };
			(uParam1[3 /*15*/])->f_12 = 28.2785f;
			(uParam1[3 /*15*/])->f_13 = 10.825f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { -13.457f, 6504.143f, 32.0189f };
			(uParam1[5 /*15*/])->f_3 = { -5.428f, 0f, 29.793f };
			(uParam1[5 /*15*/])->f_6 = { -13.457f, 6504.143f, 32.0189f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -5.428f, 0f, 25.0133f };
			(uParam1[5 /*15*/])->f_12 = 49.9863f;
			(uParam1[5 /*15*/])->f_13 = 5.1f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { -13.457f, 6504.143f, 32.0189f };
			uParam1->f_91.f_3 = { -5.428f, 0f, 29.793f };
			uParam1->f_97 = 49.9863f;
			uParam1->f_98 = { -14.0094f, 6506.85f, 32.039f };
			uParam1->f_98.f_3 = { -7.8212f, 0f, 154.0325f };
			uParam1->f_104 = 49.9863f;
			uParam1->f_105 = { -14.8887f, 6510.313f, 30.2857f };
			uParam1->f_108 = 317.16f;
			uParam1->f_109 = { -14.6068f, 6505.243f, 30.5313f };
			uParam1->f_112[0 /*3*/] = { -13.406f, 6504.645f, 30.5605f };
			uParam1->f_112[1 /*3*/] = { -13.3913f, 6506.082f, 30.5421f };
			uParam1->f_119 = { -2.3765f, 6505.239f, 30.4432f };
			uParam1->f_123 = 2.505f;
			uParam1->f_124 = 4.125f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 7.32f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { -14.5603f, 6510.57f, 30.2871f };
			uParam1->f_132 = { 21.5285f, 6548.239f, 30.2918f };
			uParam1->f_135 = { -22.4419f, 6502.546f, 30.2973f };
			uParam1->f_135.f_3 = 313.56f;
			uParam1->f_135.f_4 = 9;
			uParam1->f_140[0 /*3*/] = { 0.2704f, 6440.619f, 30.4253f };
			uParam1->f_150[0] = 226.08f;
			uParam1->f_140[1 /*3*/] = { 42.3786f, 6499.078f, 30.4253f };
			uParam1->f_150[1] = 230.76f;
			uParam1->f_140[2 /*3*/] = { 85.8481f, 6593.306f, 30.4944f };
			uParam1->f_150[2] = 229.9428f;
			return 1;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = { 1398.366f, 3589.792f, 35.7675f };
			(uParam1[0 /*15*/])->f_3 = { 16.1439f, 0f, 12.7999f };
			(uParam1[0 /*15*/])->f_6 = { 1398.386f, 3589.78f, 35.4151f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -3.1277f, 0f, 60.2753f };
			(uParam1[0 /*15*/])->f_12 = 41.4763f;
			(uParam1[0 /*15*/])->f_13 = 6.45f;
			(uParam1[0 /*15*/])->f_14 = 1;
			*(uParam1[1 /*15*/]) = { 1393.177f, 3589.758f, 35.3621f };
			(uParam1[1 /*15*/])->f_3 = { -1.7755f, 0f, -47.7455f };
			(uParam1[1 /*15*/])->f_6 = { 1393.235f, 3589.811f, 35.3597f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -1.7755f, 0f, -47.7455f };
			(uParam1[1 /*15*/])->f_12 = 25.6712f;
			(uParam1[1 /*15*/])->f_13 = 5.925f;
			(uParam1[1 /*15*/])->f_14 = 1;
			*(uParam1[2 /*15*/]) = { 1393.233f, 3589.382f, 35.3779f };
			(uParam1[2 /*15*/])->f_3 = { -4.1375f, 0f, -43.9328f };
			(uParam1[2 /*15*/])->f_6 = { 1393.384f, 3589.538f, 35.3621f };
			(uParam1[2 /*15*/])->f_6.f_3 = { -3.8599f, 0f, -43.0485f };
			(uParam1[2 /*15*/])->f_12 = 25.6712f;
			(uParam1[2 /*15*/])->f_13 = 10.675f;
			(uParam1[2 /*15*/])->f_14 = 1;
			*(uParam1[3 /*15*/]) = { 1401.436f, 3593.278f, 34.9226f };
			(uParam1[3 /*15*/])->f_3 = { 4.7665f, 0f, 89.9214f };
			(uParam1[3 /*15*/])->f_6 = { 1401.411f, 3593.278f, 34.9247f };
			(uParam1[3 /*15*/])->f_6.f_3 = { 2.3666f, 0f, 93.3675f };
			(uParam1[3 /*15*/])->f_12 = 40.2577f;
			(uParam1[3 /*15*/])->f_13 = 7.025f;
			(uParam1[3 /*15*/])->f_14 = 1;
			*(uParam1[4 /*15*/]) = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_6.f_3 = { 0f, 0f, 0f };
			(uParam1[4 /*15*/])->f_12 = 0f;
			(uParam1[4 /*15*/])->f_13 = 0f;
			(uParam1[4 /*15*/])->f_14 = 0;
			*(uParam1[5 /*15*/]) = { 1393.014f, 3590.391f, 35.3415f };
			(uParam1[5 /*15*/])->f_3 = { -3.6763f, 0f, -73.5766f };
			(uParam1[5 /*15*/])->f_6 = { 1393.014f, 3590.391f, 35.3415f };
			(uParam1[5 /*15*/])->f_6.f_3 = { -3.6763f, 0f, -76.3552f };
			(uParam1[5 /*15*/])->f_12 = 49.9894f;
			(uParam1[5 /*15*/])->f_13 = 5.895f;
			(uParam1[5 /*15*/])->f_14 = 1;
			uParam1->f_91 = { 1393.014f, 3590.391f, 35.3415f };
			uParam1->f_91.f_3 = { -3.6763f, 0f, -73.5766f };
			uParam1->f_97 = 49.9894f;
			uParam1->f_98 = { 1395.981f, 3590.8f, 35.2591f };
			uParam1->f_98.f_3 = { -1.4534f, -0.0615f, 64.6092f };
			uParam1->f_104 = 49.9894f;
			uParam1->f_105 = { 1401.176f, 3591.584f, 33.9257f };
			uParam1->f_108 = 287.28f;
			uParam1->f_109 = { 1394.206f, 3591.311f, 33.8731f };
			uParam1->f_112[0 /*3*/] = { 1395.798f, 3592.12f, 33.885f };
			uParam1->f_112[1 /*3*/] = { 1395.861f, 3591.15f, 33.8331f };
			uParam1->f_119 = { 1394.218f, 3599.675f, 33.9149f };
			uParam1->f_123 = 3.505f;
			uParam1->f_124 = 4.125f;
			uParam1->f_125 = 0f;
			uParam1->f_126 = 8.205f;
			uParam1->f_127 = 1;
			uParam1->f_128 = 0;
			uParam1->f_129 = { 1398.347f, 3589.341f, 33.9425f };
			uParam1->f_132 = { 1489.784f, 3614.96f, 33.8271f };
			uParam1->f_135 = { 1382.274f, 3593.806f, 33.8937f };
			uParam1->f_135.f_3 = 12.96f;
			uParam1->f_135.f_4 = 5;
			uParam1->f_140[0 /*3*/] = { 1452.449f, 3638.907f, 33.6778f };
			uParam1->f_150[0] = 13.68f;
			uParam1->f_140[1 /*3*/] = { 1347.231f, 3612.064f, 33.876f };
			uParam1->f_150[1] = 28.8212f;
			uParam1->f_140[2 /*3*/] = { 1459.649f, 3651.67f, 33.5887f };
			uParam1->f_150[2] = 14.7733f;
			return 1;
			break;
	}
	return 0;
}







void func_282(int iParam0)//Position - 0x2A8F2
{
	Local_78.f_1 = iParam0;
}

void func_283()//Position - 0x2A900
{
	int iVar0;
	int iVar1;
	
	if (Local_78.f_258 != 0)
	{
		func_51(&(Local_78.f_3));
		func_51(&(Local_78.f_56));
		func_51(&(Local_78.f_109));
		if (HUD::DOES_BLIP_EXIST(Local_78.f_648))
		{
			HUD::REMOVE_BLIP(&(Local_78.f_648));
		}
		if (GlobalFunc_74("FR_H_ACTIV1"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (GlobalFunc_74("FR_H_ACTIV2"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (Local_78.f_618)
		{
			iVar0 = 0;
			while (iVar0 < 22)
			{
				iVar1 = Global_86103[iVar0 /*2*/];
				if (GlobalFunc_474(iVar1))
				{
					GlobalFunc_2198(iVar1, 0, 0);
				}
				iVar0++;
			}
			GlobalFunc_2729(&(Local_78.f_631));
			Local_78.f_633 = 0;
		}
		Local_78.f_258 = 0;
	}
}





void func_288()//Position - 0x2AB12
{
	func_774();
	if (REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
	{
		func_283();
		func_282(4);
		return;
	}
	else if (GlobalFunc_142())
	{
		if (GlobalFunc_145())
		{
			func_282(3);
		}
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_283();
		func_282(0);
	}
	else if (((GlobalFunc_6687(6) && !GlobalFunc_39(6)) && !GlobalFunc_39(7)) && !GlobalFunc_39(2))
	{
		func_283();
		func_771(0, 48, 0);
		func_282(1);
	}
	else if (func_770())
	{
		func_465();
		func_432();
		func_292(1);
		func_283();
		if (!func_291())
		{
			if (func_289())
			{
				func_282(6);
			}
		}
	}
}

int func_289()//Position - 0x2ABCB
{
	int iVar0;
	
	if (Local_78.f_56 != 0 || Local_78.f_109 != 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Local_78.f_162[iVar0 /*28*/].f_1 != 0 && Local_78.f_162[iVar0 /*28*/].f_1 != 11)
		{
			return 0;
		}
		iVar0++;
	}
	if (GlobalFunc_535(&(Local_78.f_703)) == 3 || Local_78.f_670 > 0)
	{
		return 0;
	}
	return 1;
}


int func_291()//Position - 0x2AC4E
{
	int iVar0;
	
	if ((Local_78.f_56 != 0 && Local_78.f_56 < 7) || (Local_78.f_109 != 0 && Local_78.f_109 < 7))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Local_78.f_162[iVar0 /*28*/].f_1 != 0 && Local_78.f_162[iVar0 /*28*/].f_1 != 11) && Local_78.f_162[iVar0 /*28*/].f_1 < 14)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_292(bool bParam0)//Position - 0x2ACCF
{
	func_363(&(Local_78.f_703), &(Local_78.f_737));
	func_358();
	func_355();
	func_296();
	if (bParam0)
	{
		func_293();
	}
}

void func_293()//Position - 0x2ACFA
{
	if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_408 == 0)
	{
		if (Local_78.f_162[0 /*28*/].f_1 == 3 || Local_78.f_162[0 /*28*/].f_1 == 7)
		{
			if (func_294("FR_H_BUDM_A"))
			{
				Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_408 = 1;
				return;
			}
		}
		else if (Local_78.f_162[1 /*28*/].f_1 == 3 || Local_78.f_162[1 /*28*/].f_1 == 7)
		{
			if (func_294("FR_H_BUDF_A"))
			{
				Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_408 = 1;
				return;
			}
		}
		else if (Local_78.f_162[2 /*28*/].f_1 == 3 || Local_78.f_162[2 /*28*/].f_1 == 7)
		{
			if (func_294("FR_H_BUDT_A"))
			{
				Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_408 = 1;
				return;
			}
		}
	}
	if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_409 == 0)
	{
		if (Local_78.f_857)
		{
			if (func_294("FR_H_BUD_SW"))
			{
				Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_409 = 1;
				return;
			}
		}
	}
	else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (GlobalFunc_74("FR_H_BUD_SW"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
}

int func_294(char* sParam0)//Position - 0x2AE0E
{
	if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
	{
		GlobalFunc_159(sParam0, -1);
		return 1;
	}
	return 0;
}


void func_296()//Position - 0x2AE41
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Local_78.f_671[iVar1 /*6*/].f_1 != 6 && Local_78.f_671[iVar1 /*6*/] != iVar0)
		{
			if (!GlobalFunc_226(&(Local_78.f_671[iVar1 /*6*/].f_3)) || GlobalFunc_7084(&(Local_78.f_671[iVar1 /*6*/].f_3), 0f))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(func_349(Local_78.f_671[iVar1 /*6*/])))
				{
					iVar2 = -1924990311;
					if (Local_78.f_671[iVar1 /*6*/].f_1 == 2)
					{
						iVar2 = GlobalFunc_4327(GlobalFunc_769(Local_78.f_671[iVar1 /*6*/]));
					}
					if (iVar2 != -1)
					{
						func_297(iVar0, Local_78.f_671[iVar1 /*6*/], Local_78.f_671[iVar1 /*6*/].f_1, 1, Local_78.f_671[iVar1 /*6*/].f_2, iVar2, -1);
					}
					Local_78.f_671[iVar1 /*6*/].f_1 = 6;
					Local_78.f_702 = (Local_78.f_702 - 1);
				}
			}
		}
		iVar1++;
	}
}

int func_297(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2AF31
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	
	iVar0 = 3;
	iVar1 = GlobalFunc_769(iParam1);
	iVar2 = GlobalFunc_2962(iParam0);
	iVar3 = 10000;
	if (iParam3 == 0)
	{
		if (GlobalFunc_7494(iVar1, iParam2, -1, &iVar4, &iVar5))
		{
			if (iParam5 == -1)
			{
				return 0;
			}
			iVar6 = 0;
			if (((((iParam5 == 2091854273 || iParam5 == 328868333) || iParam5 == -1813399915) || iParam5 == 465306446) || iParam5 == -816460512) || iParam5 == -702667427)
			{
				iVar6 = 262144;
			}
			iVar7 = -1;
			if (iParam5 == 2091854273)
			{
				iVar7 = 24;
			}
			else if (iParam5 == 328868333)
			{
				iVar7 = 25;
			}
			else if (iParam5 == -1813399915)
			{
				iVar7 = 26;
			}
			else if (iParam5 == 465306446)
			{
				iVar7 = 27;
			}
			else if (iParam5 == -816460512)
			{
				iVar7 = 28;
			}
			else if (iParam5 == -702667427)
			{
				iVar7 = 29;
			}
			if (GlobalFunc_7121(iParam5, iVar4, iVar5, iVar0, iVar2, iParam1, iVar3, 10000, iParam6, iParam4, iVar7, iVar6, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	else if (GlobalFunc_6420(iVar1, iParam2, -1, &sVar8))
	{
		if (func_328(iParam1, &sVar8, 1, 0, 0, 0, 0, 1, 0, 1))
		{
			if (iParam4 != 0)
			{
				switch (iParam4)
				{
					case 202:
						func_327();
						break;
					
					case 203:
						func_326();
						break;
					
					case 204:
						func_325();
						break;
					
					case 205:
						func_324();
						break;
					
					case 206:
						func_298();
						break;
					}
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_298()//Position - 0x2B0DB
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 127, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 127, (iVar1 / 10));
	}
}


























void func_324()//Position - 0x2C058
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 126, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 126, (iVar1 / 10));
	}
}

void func_325()//Position - 0x2C09A
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 125, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 125, (iVar1 / 10));
	}
}

void func_326()//Position - 0x2C0DC
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 124, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 124, (iVar1 / 10));
	}
}

void func_327()//Position - 0x2C11E
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 123, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 123, (iVar1 / 10));
	}
}

int func_328(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x2C160
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_2263, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_329(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			Global_2873[3 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			MISC::SET_BIT(&Global_2263, 1);
			MISC::SET_BIT(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_329(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x2C1F8
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	GlobalFunc_8951();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (GlobalFunc_5406() == 0)
	{
		GlobalFunc_5405();
		return 0;
	}
	GlobalFunc_1500(Global_16759);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/]), sParam1, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_24 = iParam2;
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_25 = iParam7;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_26 = uParam8;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_29 = uParam9;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_30 = uParam12;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_31 = uParam11;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_28 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_33), sParam4, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_50), sParam5, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_2263, 10))
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
		Global_2969 = 4;
		GlobalFunc_1494(0);
		GlobalFunc_1494(2);
		GlobalFunc_1494(1);
	}
	else
	{
		GlobalFunc_8951();
		switch (iParam16)
		{
			case 3:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[Global_14393] = 1;
				break;
			
			case 0:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14393)
			{
				case 0:
					GlobalFunc_1494(0);
					Global_2969 = 0;
					break;
				
				case 1:
					GlobalFunc_1494(1);
					Global_2969 = 1;
					break;
				
				case 2:
					GlobalFunc_1494(2);
					Global_2969 = 2;
					break;
				
				case 3:
					GlobalFunc_1494(3);
					Global_2969 = 3;
					break;
				
				default:
					Global_2969 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_2263, 10))
		{
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16761[Global_16759] = 0;
	if (bParam10)
	{
		GlobalFunc_8951();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!GlobalFunc_268())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			GlobalFunc_7199(1);
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}




















int func_349(int iParam0)//Position - 0x2D6A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		iVar0 = GlobalFunc_237(iParam0);
		return Global_87845[iVar0];
	}
	else
	{
		iVar1 = GlobalFunc_769(iParam0);
		if (iVar1 != 7)
		{
			iVar2 = (iVar1 - 3);
			if (iVar2 < 3)
			{
				return Global_86201[iVar2];
			}
		}
	}
	return 0;
}






void func_355()//Position - 0x2D7AE
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	
	if (Local_78.f_670 > 0)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = Local_78.f_654[0 /*3*/];
			iVar1 = GlobalFunc_769(Local_78.f_654[0 /*3*/]);
			if (iVar1 < 6)
			{
				Var2 = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar0 /*29*/].f_3 };
				switch (Local_78.f_654[0 /*3*/].f_1)
				{
					case 0:
						if (iVar1 != 5)
						{
							func_357("FR_X_INJ_1m", &Var2, -1);
						}
						else
						{
							func_357("FR_X_INJ_1f", &Var2, -1);
						}
						if (Local_78.f_654[0 /*3*/].f_2 != 0)
						{
							func_356(Local_78.f_654[0 /*3*/], 2, 1092616192, Local_78.f_654[0 /*3*/].f_2);
						}
						break;
					
					case 3:
						if (iVar1 != 5)
						{
							func_357("FR_X_FLEE_1m", &Var2, -1);
						}
						else
						{
							func_357("FR_X_FLEE_1f", &Var2, -1);
						}
						break;
					
					case 4:
						if (iVar1 != 5)
						{
							func_357("FR_X_ATAC_1m", &Var2, -1);
						}
						else
						{
							func_357("FR_X_ATAC_1f", &Var2, -1);
						}
						break;
					
					case 1:
						if (iVar1 != 5)
						{
							func_357("FR_X_LOST_1m", &Var2, -1);
						}
						else
						{
							func_357("FR_X_LOST_1f", &Var2, -1);
						}
						func_356(Local_78.f_654[0 /*3*/], 0, 1092616192, Local_78.f_654[0 /*3*/].f_2);
						break;
					
					case 2:
						func_357("FR_X_LATE", &Var2, -1);
						func_356(Local_78.f_654[0 /*3*/], 1, 1092616192, Local_78.f_654[0 /*3*/].f_2);
						break;
				}
			}
			Local_78.f_670 = (Local_78.f_670 - 1);
			iVar6 = 0;
			while (iVar6 < Local_78.f_670)
			{
				Local_78.f_654[iVar6 /*3*/] = { Local_78.f_654[iVar6 + 1 /*3*/] };
				iVar6++;
			}
		}
	}
}

int func_356(int iParam0, int iParam1, float fParam2, var uParam3)//Position - 0x2D95D
{
	int iVar0;
	
	if (iParam0 >= 145)
	{
	}
	else if (iParam1 >= 5)
	{
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Local_78.f_671[iVar0 /*6*/].f_1 == 6)
			{
				Local_78.f_671[iVar0 /*6*/] = iParam0;
				Local_78.f_671[iVar0 /*6*/].f_1 = iParam1;
				Local_78.f_671[iVar0 /*6*/].f_2 = uParam3;
				GlobalFunc_4963(&(Local_78.f_671[iVar0 /*6*/].f_3), -fParam2);
				Local_78.f_702++;
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

void func_357(char* sParam0, int iParam1, int iParam2)//Position - 0x2D9E2
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam2);
}

void func_358()//Position - 0x2D9FF
{
	if (GlobalFunc_451() != Local_78.f_56.f_7)
	{
		func_361(Local_78.f_56.f_7);
	}
	if (GlobalFunc_450() != Local_78.f_109.f_7)
	{
		func_359(Local_78.f_109.f_7);
	}
}

void func_359(int iParam0)//Position - 0x2DA35
{
	Global_86200 = iParam0;
}


void func_361(int iParam0)//Position - 0x2DA4F
{
	Global_86199 = iParam0;
}


void func_363(var uParam0, var uParam1)//Position - 0x2DA69
{
	char* sVar0;
	char[] cVar4[8];
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar8 = GlobalFunc_8315();
	switch (*uParam0)
	{
		case 20:
			if (uParam0->f_3 != 20)
			{
				func_431(uParam0, uParam0->f_3, 145, 69);
			}
			break;
		
		case 0:
			if (uParam0->f_2 == 0)
			{
				if (!func_430(uParam1))
				{
					func_429(uParam1, 0);
				}
				else
				{
					uParam0->f_32 = func_425(0);
					if (func_128(iVar8, uParam0->f_32, func_424(), &sVar0, &cVar4))
					{
						func_423(uParam1, &sVar0, &cVar4);
					}
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_430(uParam1))
				{
					func_431(uParam0, 1, 145, 69);
				}
			}
			break;
		
		case 1:
			break;
		
		case 2:
			if (uParam0->f_2 == 0)
			{
				if (GlobalFunc_7084(&(uParam0->f_4), 20f))
				{
					uParam0->f_2++;
				}
				else if (func_430(uParam1))
				{
					uParam0->f_32 = func_425(0);
					if (func_128(iVar8, uParam0->f_32, func_422(), &sVar0, &cVar4))
					{
						func_423(uParam1, &sVar0, &cVar4);
					}
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_430(uParam1))
				{
					func_421(uParam0);
				}
			}
			break;
		
		case 3:
			if (uParam0->f_32 == 145)
			{
				func_421(uParam0);
			}
			else if (uParam0->f_2 == 0)
			{
				if (func_430(uParam1))
				{
					if (func_128(iVar8, uParam0->f_32, uParam0->f_33, &sVar0, &cVar4))
					{
						func_423(uParam1, &sVar0, &cVar4);
					}
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_430(uParam1))
				{
					func_421(uParam0);
				}
			}
			break;
		
		case 4:
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_490())
			{
				func_421(uParam0);
			}
			else
			{
				func_419(uParam1, 1);
			}
			break;
		
		case 5:
			if (uParam0->f_2 == 0)
			{
				if (!func_430(uParam1))
				{
					func_429(uParam1, 1);
				}
				func_421(uParam0);
			}
			break;
		
		case 6:
			if (uParam0->f_2 == 0)
			{
				func_429(uParam1, 0);
				if (GlobalFunc_7084(&(uParam0->f_7), -100f))
				{
					GlobalFunc_4963(&(uParam0->f_7), -100f);
				}
				uParam0->f_2++;
			}
			else if (uParam0->f_2 == 1)
			{
				if (GlobalFunc_7084(&(uParam0->f_4), 60f))
				{
					uParam0->f_2++;
				}
				else if (GlobalFunc_7084(&(uParam0->f_4), 3f))
				{
					if (func_418(1))
					{
						if (func_430(uParam1))
						{
							if ((iVar8 == 2 && Local_78.f_56.f_1 == 19) && func_406(2, 19, 1, 2, func_415(), &sVar0, &cVar4, 1))
							{
								func_423(uParam1, &sVar0, &cVar4);
								uParam0->f_2++;
							}
							else if (func_406(iVar8, Local_78.f_56.f_1, Local_78.f_109.f_1, 2, func_415(), &sVar0, &cVar4, 1))
							{
								func_423(uParam1, &sVar0, &cVar4);
								uParam0->f_2++;
							}
							else
							{
								uParam0->f_32 = func_425(0);
								if (uParam0->f_32 == 145 || !func_128(iVar8, uParam0->f_32, 39, &sVar0, &cVar4))
								{
									uParam0->f_2++;
								}
								else
								{
									func_423(uParam1, &sVar0, &cVar4);
									uParam0->f_2++;
								}
							}
						}
					}
				}
			}
			else if (uParam0->f_2 == 2)
			{
				if (func_430(uParam1))
				{
					func_421(uParam0);
				}
			}
			break;
		
		case 7:
			if (!MISC::IS_BIT_SET(Global_86218, 3))
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_490())
				{
					func_421(uParam0);
				}
			}
			else
			{
				func_419(uParam1, 1);
				if (GlobalFunc_7084(&(uParam0->f_4), 0f))
				{
					if (!func_405(uParam1))
					{
						iVar9 = 0;
						if (GlobalFunc_745())
						{
							if (func_403(&(Local_78.f_56)))
							{
								iVar9 = Local_78.f_56.f_7;
							}
						}
						else if (func_403(&(Local_78.f_109)))
						{
							iVar9 = Local_78.f_109.f_7;
						}
						if (!PED::IS_PED_INJURED(iVar9) && !AUDIO::IS_ANY_SPEECH_PLAYING(iVar9))
						{
							GlobalFunc_5130(iVar9, "ROBBERY_FRIEND_WITNESS", 3);
							if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar9))
							{
								GlobalFunc_4963(&(uParam0->f_4), -5f);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (uParam0->f_32 == 145)
			{
				func_421(uParam0);
			}
			else if (uParam0->f_2 == 0)
			{
				if (!func_430(uParam1))
				{
					func_429(uParam1, 0);
				}
				else
				{
					if (func_128(iVar8, uParam0->f_32, func_396(uParam0->f_32, &bVar10), &sVar0, &cVar4))
					{
						func_423(uParam1, &sVar0, &cVar4);
					}
					if (bVar10)
					{
						func_393(iVar8, uParam0->f_32, 3);
					}
					GlobalFunc_6877(&(uParam0->f_4));
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_430(uParam1))
				{
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 2)
			{
				if (GlobalFunc_7084(&(uParam0->f_4), 20f) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 3)
			{
				if (GlobalFunc_7084(&(uParam0->f_4), 30f) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					uParam0->f_2++;
				}
				else if (PED::IS_PED_IN_VEHICLE(func_349(uParam0->f_32), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (func_430(uParam1))
					{
						if (func_128(iVar8, uParam0->f_32, func_392(uParam0->f_32), &sVar0, &cVar4))
						{
							func_423(uParam1, &sVar0, &cVar4);
						}
						uParam0->f_2++;
					}
				}
			}
			else if (uParam0->f_2 == 4)
			{
				if (func_430(uParam1))
				{
					func_421(uParam0);
				}
			}
			break;
		
		case 9:
			func_421(uParam0);
			break;
		
		case 10:
			if (uParam0->f_2 == 0)
			{
				if (func_391(Global_86194) != 4)
				{
					func_429(uParam1, 0);
					uParam0->f_2++;
				}
				else
				{
					uParam0->f_2 = 2;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (GlobalFunc_7084(&(uParam0->f_4), 30f))
				{
					uParam0->f_2++;
				}
				else if (GlobalFunc_7084(&(uParam0->f_4), 0.5f))
				{
					if (func_430(uParam1))
					{
						if (((Global_86194 < 22 && Global_86103[Global_86194 /*2*/].f_1 == 1) && Local_78.f_3.f_1 == 0) && Local_78.f_56.f_1 == 17)
						{
							if (!PED::IS_PED_INJURED(Local_78.f_56.f_7))
							{
								if (Global_86195 == 0)
								{
									GlobalFunc_5130(Local_78.f_56.f_7, "FAC_LEAVE_TENNIS_WON", 3);
								}
								else if (Global_86195 == 3)
								{
									GlobalFunc_5130(Local_78.f_56.f_7, "FAC_LEAVE_TENNIS_LOST", 3);
								}
								else if (Global_86195 == 2)
								{
									GlobalFunc_5130(Local_78.f_56.f_7, "FAC_LEAVE_TENNIS_QUIT", 3);
								}
							}
							uParam0->f_2++;
						}
						else if (Global_86194 == 12)
						{
							uParam0->f_32 = func_425(1);
							if (uParam0->f_32 != 145)
							{
								if (func_390(iVar8, uParam0->f_32, Global_86194, Global_86195, GlobalFunc_5459(PLAYER::PLAYER_PED_ID()), &sVar0, &cVar4))
								{
									func_423(uParam1, &sVar0, &cVar4);
								}
								uParam0->f_2++;
							}
						}
						else
						{
							uParam0->f_32 = func_425(0);
							if (func_390(iVar8, uParam0->f_32, Global_86194, Global_86195, GlobalFunc_5459(PLAYER::PLAYER_PED_ID()), &sVar0, &cVar4))
							{
								func_423(uParam1, &sVar0, &cVar4);
							}
							uParam0->f_2++;
						}
					}
				}
			}
			else if (uParam0->f_2 == 2)
			{
				if (((Global_86194 < 22 && Global_86103[Global_86194 /*2*/].f_1 == 1) && Local_78.f_3.f_1 == 0) && Local_78.f_56.f_1 == 17)
				{
					if (PED::IS_PED_INJURED(Local_78.f_56.f_7) || !AUDIO::IS_ANY_SPEECH_PLAYING(Local_78.f_56.f_7))
					{
						GlobalFunc_6877(&(uParam0->f_4));
						uParam0->f_2++;
					}
				}
				else if (func_430(uParam1))
				{
					GlobalFunc_6877(&(uParam0->f_4));
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 3)
			{
				if (GlobalFunc_7084(&(uParam0->f_4), 1.5f))
				{
					if (func_388(1))
					{
						if (func_430(uParam1))
						{
							uParam0->f_32 = func_425(0);
							if (func_128(iVar8, uParam0->f_32, func_387(), &sVar0, &cVar4))
							{
								func_423(uParam1, &sVar0, &cVar4);
							}
							uParam0->f_2++;
						}
					}
				}
			}
			else if (uParam0->f_2 == 4)
			{
				if (func_430(uParam1))
				{
					func_421(uParam0);
				}
			}
			break;
		
		case 11:
			if (uParam0->f_32 == 145)
			{
				func_421(uParam0);
			}
			else if (uParam0->f_2 == 0)
			{
				func_419(uParam1, 0);
				iVar11 = func_349(uParam0->f_32);
				if (PED::IS_PED_INJURED(iVar11) || !PED::IS_PED_RAGDOLL(iVar11))
				{
					if (func_430(uParam1))
					{
						if (func_128(iVar8, uParam0->f_32, uParam0->f_33, &sVar0, &cVar4))
						{
							func_423(uParam1, &sVar0, &cVar4);
						}
						uParam0->f_2++;
					}
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_430(uParam1))
				{
					func_421(uParam0);
				}
			}
			break;
		
		case 12:
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_421(uParam0);
			}
			else
			{
				func_419(uParam1, 1);
				if (uParam0->f_2 == 0)
				{
					if (!func_405(uParam1))
					{
						iVar12 = 0;
						if (GlobalFunc_745())
						{
							if (func_403(&(Local_78.f_56)))
							{
								iVar12 = Local_78.f_56.f_7;
							}
						}
						else if (func_403(&(Local_78.f_109)))
						{
							iVar12 = Local_78.f_109.f_7;
						}
						if (!PED::IS_PED_INJURED(iVar12) && !AUDIO::IS_ANY_SPEECH_PLAYING(iVar12))
						{
							GlobalFunc_5130(iVar12, "GET_WANTED_LEVEL", 3);
							if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar12))
							{
								uParam0->f_2++;
							}
						}
					}
				}
			}
			break;
		
		case 13:
			if (func_430(uParam1))
			{
				GlobalFunc_6877(&(uParam0->f_10));
				func_386(uParam0);
				func_421(uParam0);
			}
			else if (((uParam0->f_28[0] != 145 && !func_385(uParam0->f_28[0])) || (uParam0->f_28[1] != 145 && !func_385(uParam0->f_28[1]))) || (uParam0->f_28[2] != 145 && !func_385(uParam0->f_28[2])))
			{
				func_429(uParam1, 0);
				GlobalFunc_6877(&(uParam0->f_10));
				func_421(uParam0);
			}
			else
			{
				func_382(uParam0, uParam1);
			}
			break;
		
		case 14:
			if (uParam0->f_32 == 145)
			{
				func_421(uParam0);
			}
			else if (uParam0->f_2 == 0)
			{
				func_419(uParam1, 1);
				if (func_430(uParam1))
				{
					if (func_128(iVar8, uParam0->f_32, uParam0->f_33, &sVar0, &cVar4))
					{
						func_423(uParam1, &sVar0, &cVar4);
					}
					uParam0->f_2++;
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_430(uParam1))
				{
					func_421(uParam0);
				}
			}
			break;
		
		case 15:
			if (func_430(uParam1))
			{
				func_421(uParam0);
			}
			break;
		
		case 16:
			if (uParam0->f_2 == 0)
			{
				if (uParam0->f_13 == 0)
				{
					if (func_418(0))
					{
						if (GlobalFunc_7084(&(uParam0->f_4), 5f))
						{
							if (func_430(uParam1))
							{
								uParam0->f_32 = func_425(0);
								if (func_406(iVar8, uParam0->f_32, 145, 1, func_415(), &sVar0, &cVar4, 1))
								{
									func_423(uParam1, &sVar0, &cVar4);
									uParam0->f_13 = 1;
									uParam0->f_2++;
								}
							}
						}
					}
				}
			}
			else if (uParam0->f_2 == 1)
			{
				if (func_430(uParam1))
				{
					uParam0->f_2 = 0;
				}
			}
			break;
		
		case 17:
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
			{
				if (func_430(uParam1))
				{
					if (func_381(uParam0, 120000))
					{
						if (!GlobalFunc_7084(&(uParam0->f_4), 15f))
						{
							if (GlobalFunc_7084(&(uParam0->f_4), 1.5f) && func_418(0))
							{
								if (func_431(uParam0, 13, 145, 69))
								{
									func_380(uParam1, &(uParam0->f_15), &(uParam0->f_19), &(uParam0->f_23));
									func_379(uParam0, uParam0->f_28[0], uParam0->f_28[1], uParam0->f_28[2]);
									GlobalFunc_4963(&(uParam0->f_7), func_378(uParam0));
									func_386(uParam0);
								}
							}
						}
						else
						{
							func_386(uParam0);
						}
					}
					else
					{
						if (uParam0->f_14 == 0)
						{
							if (GlobalFunc_7084(&(uParam0->f_4), 5f) && GlobalFunc_7084(&(uParam0->f_7), 0f))
							{
								if (func_418(0))
								{
									if (func_406(iVar8, Local_78.f_56.f_1, Local_78.f_109.f_1, 0, func_415(), &sVar0, &cVar4, 1) && func_431(uParam0, 13, 145, 69))
									{
										func_423(uParam1, &sVar0, &cVar4);
										func_379(uParam0, iVar8, Local_78.f_56.f_1, Local_78.f_109.f_1);
										GlobalFunc_4963(&(uParam0->f_7), func_378(uParam0));
										uParam0->f_14++;
									}
								}
							}
						}
						else if (uParam0->f_14 < 3)
						{
							if (GlobalFunc_7084(&(uParam0->f_4), 5f) && GlobalFunc_7084(&(uParam0->f_7), 0f))
							{
								if (func_418(0))
								{
									if (func_406(iVar8, Local_78.f_56.f_1, Local_78.f_109.f_1, 1, func_415(), &sVar0, &cVar4, 1) && func_431(uParam0, 13, 145, 69))
									{
										func_423(uParam1, &sVar0, &cVar4);
										func_379(uParam0, iVar8, Local_78.f_56.f_1, Local_78.f_109.f_1);
										GlobalFunc_4963(&(uParam0->f_7), func_378(uParam0));
										uParam0->f_14++;
									}
								}
							}
						}
						if (GlobalFunc_7084(&(uParam0->f_4), 3f))
						{
							if (func_388(1))
							{
								if (func_377(iVar8) != Local_78.f_624)
								{
									iVar13 = func_425(1);
									if (iVar13 != 145)
									{
										func_431(uParam0, 14, iVar13, 55);
									}
								}
								else if (func_376(iVar8) != Local_78.f_622)
								{
									iVar13 = func_425(1);
									if (iVar13 != 145)
									{
										func_431(uParam0, 14, iVar13, 53);
									}
								}
								else if (func_375(iVar8) != Local_78.f_623)
								{
									iVar13 = func_425(1);
									if (iVar13 != 145)
									{
										func_431(uParam0, 14, iVar13, 54);
									}
								}
								else if (GlobalFunc_7084(&(uParam0->f_4), 10f))
								{
									if (uParam0->f_14 > 0)
									{
										if (!GlobalFunc_226(&(uParam0->f_10)) || GlobalFunc_7084(&(uParam0->f_10), 20f))
										{
											iVar14 = Local_78.f_642;
											if (func_371(iVar14) || func_369(Local_78.f_3.f_1, Local_78.f_56.f_1, &iVar14))
											{
												iVar13 = func_425(0);
												if (iVar13 != 145 && iVar14 < 22)
												{
													if (func_368(iVar8, iVar13, iVar14, &sVar0, &cVar4) && func_431(uParam0, 15, 145, 69))
													{
														func_366(Local_78.f_3.f_1, Local_78.f_56.f_1, iVar14);
														func_423(uParam1, &sVar0, &cVar4);
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
		
		case 18:
			break;
		
		default:
			break;
	}
	if (*uParam0 != 12)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_431(uParam0, 12, 145, 69);
			}
		}
	}
	if (*uParam0 != 7)
	{
		if (MISC::IS_BIT_SET(Global_86218, 3))
		{
			func_431(uParam0, 7, 145, 69);
		}
	}
	if (*uParam0 != 4)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && GlobalFunc_490())
		{
			func_431(uParam0, 4, 145, 69);
		}
	}
	if ((((((*uParam0 != 16 && *uParam0 != 17) && *uParam0 != 8) && *uParam0 != 9) && *uParam0 != 10) && *uParam0 != 4) && *uParam0 != 20)
	{
		Local_78.f_623 = func_375(iVar8);
		Local_78.f_622 = func_376(iVar8);
		Local_78.f_624 = func_377(iVar8);
	}
	func_364(uParam1);
}

void func_364(var uParam0)//Position - 0x2E9CD
{
	switch (*uParam0)
	{
		case 1:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10618(&(Local_78.f_259), &(uParam0->f_1), &(uParam0->f_5), 3, 0, 0, 0))
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10626(&(Local_78.f_259), &(uParam0->f_1), &(uParam0->f_5), &(uParam0->f_9), 3, 0, 0))
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 3:
			if (!GlobalFunc_111())
			{
				*uParam0 = 0;
			}
			break;
	}
}


void func_366(int iParam0, int iParam1, int iParam2)//Position - 0x2EAA3
{
	func_367(&(Local_78.f_634), Global_86103[iParam2 /*2*/].f_1);
	if (iParam1 == 14)
	{
		if (iParam2 < 22 && Global_86103[iParam2 /*2*/].f_1 == 5)
		{
			if (iParam0 == 0)
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_410), 5);
			}
			else if (iParam0 == 2)
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_410), 4);
			}
		}
	}
}

void func_367(var uParam0, int iParam1)//Position - 0x2EB0B
{
	if (iParam1 < 32)
	{
		MISC::SET_BIT(uParam0, iParam1);
	}
	else if (iParam1 < 64)
	{
		MISC::SET_BIT(&(uParam0->f_1), (iParam1 - 32));
	}
}

int func_368(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2EB3C
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	if (iVar0 == 7 || iVar1 == 7)
	{
		return 0;
	}
	*sParam4 = { GlobalFunc_5197(iVar0, iVar1, 7, 1) };
	*sParam3 = { *sParam4 };
	StringConCat(sParam3, "AU", 16);
	StringConCat(sParam4, "_Sg", 16);
	switch (Global_86103[iParam2 /*2*/].f_1)
	{
		case 4:
			StringConCat(sParam4, "Cin", 16);
			break;
		
		case 0:
			StringConCat(sParam4, "Glf", 16);
			break;
		
		case 2:
			StringConCat(sParam4, "Str", 16);
			break;
		
		case 1:
			StringConCat(sParam4, "Tns", 16);
			break;
		
		case 3:
			StringConCat(sParam4, "Drt", 16);
			break;
		
		case 5:
			StringConCat(sParam4, "Bar", 16);
			break;
		
		default:
			StringConCat(sParam4, "BAD", 16);
			return 0;
			break;
	}
	return 1;
}

int func_369(int iParam0, int iParam1, int iParam2)//Position - 0x2EC14
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 14)
	{
		if ((iParam0 == 0 && !MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_410, 5)) || (iParam0 == 2 && !MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_410, 4)))
		{
			if (!func_370(&(Local_78.f_634), 5))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 23;
					fVar1 = (100000f * 100000f);
					iVar2 = 0;
					while (iVar2 < 22)
					{
						if (Global_86103[iVar2 /*2*/].f_1 == 5)
						{
							fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), GlobalFunc_2247(Global_86103[iVar2 /*2*/], 0));
							if (fVar1 > fVar3)
							{
								fVar1 = fVar3;
								iVar0 = iVar2;
							}
						}
						iVar2++;
					}
					if (iVar0 != 23 && fVar1 < (400f * 400f))
					{
						*iParam2 = iVar0;
						return 1;
					}
				}
			}
		}
	}
	*iParam2 = 23;
	return 0;
}

int func_370(var uParam0, int iParam1)//Position - 0x2ED00
{
	if (iParam1 < 32)
	{
		return MISC::IS_BIT_SET(*uParam0, iParam1);
	}
	if (iParam1 < 64)
	{
		return MISC::IS_BIT_SET(uParam0->f_1, (iParam1 - 32));
	}
	return 0;
}

int func_371(int iParam0)//Position - 0x2ED39
{
	int iVar0;
	
	if (Local_78.f_642 < 22 && Local_78.f_642 != 16)
	{
		iVar0 = Global_86103[iParam0 /*2*/].f_1;
		if (func_370(&(Local_78.f_631), iVar0) && !func_370(&(Local_78.f_634), iVar0))
		{
			if (func_373(PLAYER::PLAYER_PED_ID(), func_374(iParam0), 175f) && func_372(PLAYER::PLAYER_PED_ID(), func_374(iParam0), 75f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_372(int iParam0, struct<3> Param1, float fParam4)//Position - 0x2EDB7
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var0.x = (Var0.x - Param1.x);
	Var0.f_1 = (Var0.f_1 - Param1.f_1);
	Var0.f_2 = (Var0.f_2 - Param1.f_2);
	return (((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) > (fParam4 * fParam4);
}

bool func_373(int iParam0, struct<3> Param1, float fParam4)//Position - 0x2EE0A
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var0.x = (Var0.x - Param1.x);
	Var0.f_1 = (Var0.f_1 - Param1.f_1);
	Var0.f_2 = (Var0.f_2 - Param1.f_2);
	return (((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= (fParam4 * fParam4);
}

Vector3 func_374(int iParam0)//Position - 0x2EE5D
{
	return GlobalFunc_2247(Global_86103[iParam0 /*2*/], 0);
}

int func_375(int iParam0)//Position - 0x2EE72
{
	if (GlobalFunc_42(iParam0))
	{
		return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1564[iParam0];
	}
	return -15;
}

int func_376(int iParam0)//Position - 0x2EE9A
{
	if (GlobalFunc_42(iParam0))
	{
		return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1568[iParam0];
	}
	return -1;
}

int func_377(int iParam0)//Position - 0x2EEC0
{
	if (GlobalFunc_42(iParam0))
	{
		return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1572[iParam0];
	}
	return -1;
}

float func_378(var uParam0)//Position - 0x2EEE6
{
	float fVar0;
	float fVar1;
	
	fVar0 = (2f + (SYSTEM::TO_FLOAT(uParam0->f_14) * 1.5f));
	fVar1 = (3f + (SYSTEM::TO_FLOAT(uParam0->f_14) * 1.5f));
	return MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar1 * -60f), (fVar0 * -60f));
}

void func_379(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x2EF26
{
	uParam0->f_28[0] = iParam1;
	uParam0->f_28[1] = uParam2;
	uParam0->f_28[2] = uParam3;
}

void func_380(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x2EF49
{
	if (*uParam0 == 0)
	{
		if (!GlobalFunc_111())
		{
			*uParam0 = 2;
			uParam0->f_1 = { *uParam1 };
			uParam0->f_5 = { *uParam2 };
			uParam0->f_9 = { *uParam3 };
		}
	}
}

int func_381(var uParam0, int iParam1)//Position - 0x2EF82
{
	if (iParam1 < 0 || (MISC::GET_GAME_TIMER() - uParam0->f_27) < iParam1)
	{
		if (((((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_15)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_15), "NULL")) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_19))) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_19), "NULL")) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23))) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_23), "NULL"))
		{
			return 1;
		}
	}
	return 0;
}

void func_382(var uParam0, var uParam1)//Position - 0x2F000
{
	if (func_383(uParam1, &(uParam0->f_15), &(uParam0->f_19), &(uParam0->f_23)))
	{
		uParam0->f_27 = MISC::GET_GAME_TIMER();
	}
	else
	{
		StringCopy(&(uParam0->f_15), "", 16);
		StringCopy(&(uParam0->f_19), "", 16);
		StringCopy(&(uParam0->f_23), "", 16);
	}
}

int func_383(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x2F040
{
	if (*uParam0 == 3)
	{
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			*uParam1 = { uParam0->f_1 };
			*uParam2 = { uParam0->f_5 };
			MemCopy(uParam3, {GlobalFunc_514()}, 4);
			return 1;
		}
	}
	return 0;
}


int func_385(int iParam0)//Position - 0x2F124
{
	if (iParam0 == GlobalFunc_8315())
	{
		return 1;
	}
	else
	{
		if (Local_78.f_56.f_1 == iParam0)
		{
			if (Local_78.f_56 == 2)
			{
				return 1;
			}
		}
		if (Local_78.f_109.f_1 == iParam0)
		{
			if (Local_78.f_109 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_386(var uParam0)//Position - 0x2F16B
{
	StringCopy(&(uParam0->f_15), "", 16);
	StringCopy(&(uParam0->f_19), "", 16);
	StringCopy(&(uParam0->f_23), "", 16);
}

int func_387()//Position - 0x2F18B
{
	if (Local_78.f_640 == 1)
	{
		return 40;
	}
	else if (Local_78.f_641)
	{
		return 41;
	}
	return 69;
}

int func_388(int iParam0)//Position - 0x2F1B3
{
	struct<3> Var0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	else if (iParam0 && HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	else if (GlobalFunc_331())
	{
		return 0;
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (Local_78.f_56.f_50)
		{
			if ((Local_78.f_56 != 2 || !ENTITY::IS_ENTITY_AT_COORD(Local_78.f_56.f_7, Var0, 25f, 25f, 25f, 0, 1, 0)) || PED::IS_PED_IN_COMBAT(Local_78.f_56.f_7, 0))
			{
				return 0;
			}
		}
		if (Local_78.f_109.f_50)
		{
			if ((Local_78.f_109 != 2 || !ENTITY::IS_ENTITY_AT_COORD(Local_78.f_109.f_7, Var0, 25f, 25f, 25f, 0, 1, 0)) || PED::IS_PED_IN_COMBAT(Local_78.f_109.f_7, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}


int func_390(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, char* sParam6)//Position - 0x2F2AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	if (iVar0 == 7 || iVar1 == 7)
	{
		return 0;
	}
	*sParam6 = { GlobalFunc_5197(iVar0, iVar1, 7, 1) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	iVar2 = Global_86103[iParam2 /*2*/].f_1;
	StringConCat(sParam6, "_", 16);
	switch (iVar2)
	{
		case 4:
			StringConCat(sParam6, "Cin", 16);
			break;
		
		case 5:
			StringConCat(sParam6, "Bar", 16);
			break;
		
		case 0:
			StringConCat(sParam6, "Glf", 16);
			break;
		
		case 2:
			StringConCat(sParam6, "Str", 16);
			break;
		
		case 1:
			StringConCat(sParam6, "Tns", 16);
			break;
		
		case 3:
			StringConCat(sParam6, "Drt", 16);
			break;
		
		default:
			StringConCat(sParam6, "BAD", 16);
			return 0;
			break;
	}
	if (bParam4 && (iVar2 != 0 && iVar2 != 1))
	{
		StringConCat(sParam6, "Dr", 16);
	}
	else
	{
		switch (iParam3)
		{
			case 0:
				StringConCat(sParam6, "Wn", 16);
				break;
			
			case 3:
				StringConCat(sParam6, "Ls", 16);
				break;
			
			case 4:
				StringConCat(sParam6, "Ls", 16);
				break;
			
			case 1:
				StringConCat(sParam6, "Ti", 16);
				break;
			
			case 2:
				StringConCat(sParam6, "Qt", 16);
				break;
			
			default:
				StringConCat(sParam6, "XX", 16);
				return 0;
				break;
			}
	}
	return 1;
}

int func_391(int iParam0)//Position - 0x2F414
{
	if (iParam0 < 22)
	{
		return Global_86103[iParam0 /*2*/].f_1;
	}
	return 8;
}

int func_392(int iParam0)//Position - 0x2F432
{
	int iVar0;
	
	iVar0 = func_112(GlobalFunc_8315(), iParam0);
	if (((Local_78.f_56.f_1 == iParam0 && ENTITY::DOES_ENTITY_EXIST(Local_78.f_56.f_8)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_78.f_56.f_8, 0)) && func_105(Local_78.f_56.f_8, Local_78.f_56.f_7))
	{
		return 10;
	}
	else if (((Local_78.f_109.f_1 == iParam0 && ENTITY::DOES_ENTITY_EXIST(Local_78.f_109.f_8)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_78.f_109.f_8, 0)) && func_105(Local_78.f_56.f_8, Local_78.f_56.f_7))
	{
		return 10;
	}
	else if (Local_78.f_56 == 2 && Local_78.f_109 == 2)
	{
		return 9;
	}
	else if (iVar0 < 20)
	{
		return 8;
	}
	else if (iVar0 < 40)
	{
		return 7;
	}
	return 6;
}

void func_393(int iParam0, int iParam1, int iParam2)//Position - 0x2F515
{
	switch (iParam2)
	{
		case 0:
			func_394(iParam0, iParam1, -1);
			break;
		
		case 5:
			func_394(iParam0, iParam1, -1);
			break;
		
		case 3:
			func_394(iParam0, iParam1, -2);
			break;
		
		case 4:
			func_394(iParam0, iParam1, -5);
			break;
		
		case 1:
			func_394(iParam0, iParam1, -5);
			break;
		
		case 2:
			func_394(iParam0, iParam1, -5);
			break;
		
		case 6:
			func_394(iParam0, iParam1, 5);
			break;
		
		case 7:
			func_394(iParam0, iParam1, 3);
			break;
		
		default:
			break;
	}
}

void func_394(int iParam0, int iParam1, int iParam2)//Position - 0x2F5BF
{
	GlobalFunc_5844(iParam0, iParam1, (func_112(iParam0, iParam1) + iParam2));
}


int func_396(int iParam0, var uParam1)//Position - 0x2F655
{
	if (iParam0 == Local_78.f_56.f_1)
	{
		return func_397(&(Local_78.f_3), &(Local_78.f_56), uParam1);
	}
	else if (iParam0 == Local_78.f_109.f_1)
	{
		return func_397(&(Local_78.f_3), &(Local_78.f_109), uParam1);
	}
	return 69;
}

int func_397(var uParam0, var uParam1, var uParam2)//Position - 0x2F69A
{
	int iVar0;
	
	*uParam2 = 0;
	if (uParam1->f_51)
	{
		return 69;
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_226(&(uParam1->f_12))) && !GlobalFunc_7084(&(uParam1->f_12), 8f))
	{
		return 5;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!GlobalFunc_4273(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			return 3;
		}
	}
	if ((Local_78.f_653 == 0 && GlobalFunc_7084(&(uParam1->f_15), (2f * 60f))) || (Local_78.f_653 == 1 && GlobalFunc_7084(&(uParam1->f_15), (3.5f * 60f))))
	{
		*uParam2 = 1;
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		return 2;
	}
	if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0, 15f, 15f, 15f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_7, iVar0, 15f, 15f, 15f, 0, 1, 0))
	{
		return 2;
	}
	if ((((((PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || func_398(ENTITY::GET_ENTITY_MODEL(iVar0))) || ENTITY::GET_ENTITY_HEALTH(iVar0) < 500)
	{
		if ((((uParam0->f_1 != 0 && uParam1->f_1 != 14) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			return 4;
		}
	}
	return 0;
}

int func_398(int iParam0)//Position - 0x2F851
{
	int iVar0;
	int iVar1[92];
	
	iVar1[0] = joaat("ambulance");
	iVar1[1] = joaat("benson");
	iVar1[2] = joaat("biff");
	iVar1[3] = joaat("bus");
	iVar1[4] = joaat("firetruk");
	iVar1[5] = joaat("forklift");
	iVar1[6] = joaat("mule");
	iVar1[7] = joaat("mule2");
	iVar1[8] = joaat("packer");
	iVar1[9] = joaat("phantom");
	iVar1[10] = joaat("police");
	iVar1[11] = joaat("stockade");
	iVar1[12] = joaat("squalo");
	iVar1[13] = joaat("maverick");
	iVar1[14] = joaat("polmav");
	iVar1[15] = joaat("airtug");
	iVar1[16] = joaat("fbi");
	iVar1[17] = joaat("annihilator");
	iVar1[18] = joaat("dinghy");
	iVar1[19] = joaat("police");
	iVar1[20] = joaat("ripley");
	iVar1[21] = joaat("trash");
	iVar1[22] = joaat("burrito");
	iVar1[23] = joaat("pony");
	iVar1[24] = joaat("speedo");
	iVar1[25] = joaat("marquis");
	iVar1[26] = joaat("sanchez");
	iVar1[27] = joaat("airtug");
	iVar1[28] = joaat("taco");
	iVar1[29] = joaat("barracks");
	iVar1[30] = joaat("romero");
	iVar1[31] = joaat("blazer");
	iVar1[32] = joaat("blazer2");
	iVar1[33] = 0;
	iVar1[34] = joaat("bodhi2");
	iVar1[35] = joaat("boxville2");
	iVar1[36] = joaat("bulldozer");
	iVar1[37] = joaat("caddy");
	iVar1[38] = joaat("caddy2");
	iVar1[39] = 0;
	iVar1[40] = joaat("camper");
	iVar1[41] = 0;
	iVar1[42] = joaat("tiptruck");
	iVar1[43] = joaat("tourbus");
	iVar1[44] = joaat("towtruck");
	iVar1[45] = joaat("towtruck2");
	iVar1[46] = joaat("tractor");
	iVar1[47] = joaat("tractor2");
	iVar1[48] = joaat("utillitruck");
	iVar1[49] = joaat("utillitruck2");
	iVar1[50] = joaat("utillitruck3");
	iVar1[51] = joaat("bfinjection");
	iVar1[52] = 0;
	iVar1[53] = joaat("dloader");
	iVar1[54] = joaat("docktug");
	iVar1[55] = joaat("dump");
	iVar1[56] = joaat("gburrito");
	iVar1[57] = joaat("handler");
	iVar1[58] = joaat("hauler");
	iVar1[59] = joaat("journey");
	iVar1[60] = joaat("lguard");
	iVar1[61] = 0;
	iVar1[62] = 0;
	iVar1[63] = 0;
	iVar1[64] = joaat("mixer");
	iVar1[65] = 0;
	iVar1[66] = joaat("rhino");
	iVar1[67] = joaat("cutter");
	iVar1[68] = joaat("pounder");
	iVar1[69] = joaat("tiptruck2");
	iVar1[70] = joaat("mixer2");
	iVar1[71] = joaat("tiptruck2");
	iVar1[72] = joaat("rubble");
	iVar1[73] = joaat("scrap");
	iVar1[74] = joaat("armytanker");
	iVar1[75] = joaat("barracks2");
	iVar1[76] = 0;
	iVar1[77] = joaat("airbus");
	iVar1[78] = joaat("coach");
	iVar1[79] = joaat("pbus");
	iVar1[80] = joaat("riot");
	iVar1[81] = 0;
	iVar1[82] = joaat("stockade3");
	iVar1[83] = joaat("flatbed");
	iVar1[84] = joaat("boxville");
	iVar1[85] = joaat("burrito2");
	iVar1[86] = joaat("burrito3");
	iVar1[87] = joaat("burrito4");
	iVar1[88] = joaat("rumpo");
	iVar1[89] = joaat("speedo2");
	iVar1[90] = 0;
	iVar1[91] = 0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iParam0 == iVar1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	if ((((GlobalFunc_540(iParam0) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}





int func_403(var uParam0)//Position - 0x2FF2B
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(uParam0->f_7))
	{
		if (uParam0->f_1 == GlobalFunc_8315())
		{
			return 1;
		}
		if (*uParam0 == 2 || *uParam0 == 4)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 75f, 75f, 75f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}


int func_405(var uParam0)//Position - 0x2FFB4
{
	if (*uParam0 == 3)
	{
		if (GlobalFunc_111())
		{
			return 1;
		}
	}
	return 0;
}

int func_406(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7)//Position - 0x2FFCF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	iVar2 = GlobalFunc_769(iParam2);
	if ((iVar0 == 7 || iVar1 == 7) || (iVar2 == 7 && iParam2 != 145))
	{
		return 0;
	}
	if (iVar2 == 7)
	{
		iVar5 = GlobalFunc_768(iVar0, iVar1);
		if (iVar5 >= 9)
		{
			return 0;
		}
		if (((iParam0 == 1 && iParam1 == 19) && GlobalFunc_485(137)) && iParam3 == 1)
		{
			if (func_413(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_388), iParam3, &iVar3, &iVar4, iParam4))
			{
				if (bParam7)
				{
					func_408(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return 0;
			}
		}
		else if (func_413(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar5 /*19*/].f_9), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_408(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar5 /*19*/].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar6 = GlobalFunc_766(iVar0, iVar1, iVar2);
		if (iVar6 >= 2)
		{
			return 0;
		}
		if (func_413(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_347[iVar6 /*7*/]), iParam3, &iVar3, &iVar4, iParam4))
		{
			if (bParam7)
			{
				func_408(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_347[iVar6 /*7*/]), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	*sParam6 = { GlobalFunc_5197(iVar0, iVar1, iVar2, 2) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return 1;
}


void func_408(var uParam0, int iParam1, int iParam2)//Position - 0x3031C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	func_412((*uParam0)[iParam2], &iVar0, &iVar1, &iVar2);
	func_411((*uParam0)[iParam2], &iVar3, &iVar4, &iVar5);
	func_410((*uParam0)[iParam2], &iVar6);
	if (iParam1 == 0)
	{
		iVar0++;
		if (iVar0 > iVar3)
		{
			iVar0 = iVar3;
		}
	}
	else if (iParam1 == 1)
	{
		iVar1++;
		if (iVar1 > iVar4)
		{
			iVar1 = iVar4;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2++;
		if (iVar2 > iVar5)
		{
			iVar2 = iVar5;
		}
	}
	GlobalFunc_767(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}


void func_410(var uParam0, int iParam1)//Position - 0x3044C
{
	*iParam1 = uParam0 & 255;
}

void func_411(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3045C
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(uParam0, 16) & 15;
	*iParam2 = SYSTEM::SHIFT_RIGHT(iParam0, 12) & 15;
	*iParam3 = SYSTEM::SHIFT_RIGHT(iParam0, 8) & 15;
}

void func_412(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3048E
{
	*iParam1 = SYSTEM::SHIFT_RIGHT(uParam0, 28) & 15;
	*iParam2 = SYSTEM::SHIFT_RIGHT(iParam0, 24) & 15;
	*iParam3 = SYSTEM::SHIFT_RIGHT(iParam0, 20) & 15;
}

int func_413(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x304C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	*iParam2 = 0;
	while (*iParam2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		func_410((*uParam0)[*iParam2], &iVar6);
		if (MISC::IS_BIT_SET(iParam4, iVar6))
		{
			func_412((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
			func_411((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0)
			{
				if (iVar0 < iVar3)
				{
					*uParam3 = iVar0;
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (iVar1 < iVar4)
				{
					*uParam3 = iVar1;
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				if (iVar2 < iVar5)
				{
					*uParam3 = iVar2;
					return 1;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0;
	*uParam3 = 0;
	return 0;
}


int func_415()//Position - 0x305AB
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 1);
	if (Local_78.f_109 == 0)
	{
		MISC::SET_BIT(&iVar0, 2);
	}
	if (GlobalFunc_485(128))
	{
		MISC::SET_BIT(&iVar0, 4);
		if (!GlobalFunc_230(24))
		{
			MISC::SET_BIT(&iVar0, 21);
		}
	}
	else
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	if (GlobalFunc_485(131))
	{
		MISC::SET_BIT(&iVar0, 6);
	}
	else
	{
		MISC::SET_BIT(&iVar0, 5);
	}
	if (GlobalFunc_485(137))
	{
		MISC::SET_BIT(&iVar0, 9);
	}
	else if (GlobalFunc_485(126))
	{
		MISC::SET_BIT(&iVar0, 8);
	}
	else
	{
		MISC::SET_BIT(&iVar0, 7);
	}
	if (GlobalFunc_485(137))
	{
		if (!GlobalFunc_485(135) && !GlobalFunc_485(136))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		if (GlobalFunc_485(135))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
		else
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		if (GlobalFunc_485(136))
		{
			MISC::SET_BIT(&iVar0, 12);
		}
		else
		{
			MISC::SET_BIT(&iVar0, 14);
		}
	}
	if (!GlobalFunc_230(20))
	{
		MISC::SET_BIT(&iVar0, 15);
	}
	if (!GlobalFunc_230(46))
	{
		MISC::SET_BIT(&iVar0, 16);
	}
	if (GlobalFunc_485(129) && !MISC::IS_BIT_SET(iVar0, 9))
	{
		MISC::SET_BIT(&iVar0, 17);
	}
	if (GlobalFunc_230(40) && !GlobalFunc_230(43))
	{
		MISC::SET_BIT(&iVar0, 18);
	}
	if (GlobalFunc_230(43) && !GlobalFunc_230(42))
	{
		MISC::SET_BIT(&iVar0, 19);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_416(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
		{
			MISC::SET_BIT(&iVar0, 20);
		}
	}
	return iVar0;
}

int func_416(struct<2> Param0, Vector3 vParam2)//Position - 0x30743
{
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


int func_418(int iParam0)//Position - 0x307AC
{
	struct<3> Var0;
	int iVar3;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	else if (iParam0 && HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	else if (GlobalFunc_490())
	{
		return 0;
	}
	else if (Local_78.f_56.f_50 == 0 && Local_78.f_109.f_50 == 0)
	{
		return 0;
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		iVar3 = 0;
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (Local_78.f_56.f_50)
		{
			if (Local_78.f_56 != 2 || PED::IS_PED_IN_COMBAT(Local_78.f_56.f_7, 0))
			{
				return 0;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_78.f_56.f_7, iVar3, 0))
				{
					return 0;
				}
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(Local_78.f_56.f_7, Var0, 25f, 25f, 25f, 0, 1, 0))
			{
				return 0;
			}
		}
		if (Local_78.f_109.f_50)
		{
			if (Local_78.f_109 != 2 || PED::IS_PED_IN_COMBAT(Local_78.f_109.f_7, 0))
			{
				return 0;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_78.f_109.f_7, iVar3, 0))
				{
					return 0;
				}
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(Local_78.f_109.f_7, Var0, 25f, 25f, 25f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_419(var uParam0, int iParam1)//Position - 0x30915
{
	if (*uParam0 == 3)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(iParam1);
	}
	*uParam0 = 0;
}


void func_421(var uParam0)//Position - 0x30940
{
	*uParam0 = 20;
	uParam0->f_1 = 8;
	uParam0->f_32 = 145;
	uParam0->f_33 = 69;
	uParam0->f_2 = 0;
}

int func_422()//Position - 0x30964
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
	{
		return 46;
	}
	return 45;
}

void func_423(var uParam0, char* sParam1, char[4] cParam2)//Position - 0x3098C
{
	if (*uParam0 == 0)
	{
		if (!GlobalFunc_111())
		{
			*uParam0 = 1;
			uParam0->f_1 = { *sParam1 };
			uParam0->f_5 = { *cParam2 };
		}
	}
}

int func_424()//Position - 0x309BB
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
	{
		return 44;
	}
	return 42;
}

int func_425(int iParam0)//Position - 0x309E3
{
	var uVar0[5];
	int iVar6;
	int iVar7;
	
	iVar6 = 0;
	if (func_403(&(Local_78.f_56)))
	{
		if (iParam0 == 0 || func_428(&(Local_78.f_56)))
		{
			uVar0[iVar6] = Local_78.f_56.f_1;
			iVar6++;
		}
	}
	if (func_403(&(Local_78.f_109)))
	{
		if (iParam0 == 0 || func_428(&(Local_78.f_109)))
		{
			uVar0[iVar6] = Local_78.f_109.f_1;
			iVar6++;
		}
	}
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (func_427(&(Local_78.f_162[iVar7 /*28*/])))
		{
			if (iParam0 == 0 || func_426(&(Local_78.f_162[iVar7 /*28*/])))
			{
				uVar0[iVar6] = Local_78.f_162[iVar7 /*28*/];
				iVar6++;
			}
		}
		iVar7++;
	}
	if (iVar6 > 0)
	{
		return uVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6)];
	}
	return 145;
}

int func_426(var uParam0)//Position - 0x30ABB
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uParam0->f_3) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_427(var uParam0)//Position - 0x30AE0
{
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4924(uParam0->f_3))
	{
		if (*uParam0 == GlobalFunc_8315())
		{
			return 1;
		}
		if (((uParam0->f_1 == 4 || uParam0->f_1 == 5) || uParam0->f_1 == 6) || uParam0->f_1 == 12)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 75f, 75f, 75f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_428(var uParam0)//Position - 0x30B62
{
	if (!PED::IS_PED_INJURED(uParam0->f_7))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uParam0->f_7) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_429(var uParam0, int iParam1)//Position - 0x30B87
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(iParam1);
	*uParam0 = 0;
}

int func_430(var uParam0)//Position - 0x30B9A
{
	if (*uParam0 == 0)
	{
		if (!GlobalFunc_111())
		{
			return 1;
		}
	}
	return 0;
}

int func_431(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x30BB6
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 8;
	if (iParam1 == 0)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 3)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 4)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 5)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 6)
	{
		iVar0 = 2;
	}
	else if (iParam1 == 7)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 8)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 9)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 10)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 11)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 12)
	{
		iVar0 = 5;
	}
	else if (iParam1 == 13)
	{
		iVar0 = 6;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 7;
	}
	else if (iParam1 == 15)
	{
		iVar0 = 7;
	}
	else if (iParam1 == 16)
	{
		iVar0 = 8;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 8;
	}
	else if (iParam1 == 18)
	{
		iVar0 = 8;
	}
	bVar1 = iVar0 > uParam0->f_1;
	if (bVar1 == 0)
	{
		*uParam0 = iParam1;
		uParam0->f_1 = iVar0;
		uParam0->f_32 = iParam2;
		uParam0->f_33 = iParam3;
		uParam0->f_2 = 0;
		GlobalFunc_6877(&(uParam0->f_4));
		return 1;
	}
	return 0;
}

void func_432()//Position - 0x30CEC
{
	bool bVar0;
	
	func_444();
	bVar0 = false;
	if (!func_442())
	{
		if (Local_78.f_56 >= 7)
		{
			func_441(&(Local_78.f_56), &(Local_78.f_629));
			func_435(&(Local_78.f_56));
			bVar0 = true;
		}
		if (Local_78.f_109 >= 7)
		{
			func_441(&(Local_78.f_109), &(Local_78.f_630));
			func_435(&(Local_78.f_109));
			bVar0 = true;
		}
		if (bVar0)
		{
			func_433(1);
		}
	}
}

int func_433(bool bParam0)//Position - 0x30D4E
{
	int iVar0;
	bool bVar1;
	struct<53> Var2;
	struct<53> Var55;
	struct<53> Var108;
	
	iVar0 = GlobalFunc_8315();
	bVar1 = false;
	if (Local_78.f_56 != 0 && Local_78.f_56.f_1 == iVar0)
	{
		Var2 = { Local_78.f_3 };
		Local_78.f_3 = { Local_78.f_56 };
		Local_78.f_56 = { Var2 };
		bVar1 = true;
	}
	if (Local_78.f_109 != 0 && Local_78.f_109.f_1 == iVar0)
	{
		Var55 = { Local_78.f_3 };
		Local_78.f_3 = { Local_78.f_109 };
		Local_78.f_109 = { Var55 };
		bVar1 = true;
	}
	if (bParam0)
	{
		if (Local_78.f_56 == 0 && Local_78.f_109 != 0)
		{
			Var108 = { Local_78.f_56 };
			Local_78.f_56 = { Local_78.f_109 };
			Local_78.f_109 = { Var108 };
			bVar1 = true;
		}
	}
	func_434();
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_434()//Position - 0x30E30
{
	if (GlobalFunc_4924(Local_78.f_3.f_7))
	{
		PED::SET_PED_CONFIG_FLAG(Local_78.f_3.f_7, 206, false);
	}
	if (GlobalFunc_4924(Local_78.f_56.f_7))
	{
		PED::SET_PED_CONFIG_FLAG(Local_78.f_56.f_7, 206, false);
	}
	if (GlobalFunc_4924(Local_78.f_109.f_7))
	{
		PED::SET_PED_CONFIG_FLAG(Local_78.f_109.f_7, 206, false);
	}
	if (GlobalFunc_4924(Local_78.f_56.f_7) && Local_78.f_56.f_50)
	{
		if (!Local_78.f_109.f_50)
		{
			PED::SET_PED_CONFIG_FLAG(Local_78.f_56.f_7, 206, true);
			return Local_78.f_56.f_1;
		}
	}
	if (GlobalFunc_4924(Local_78.f_109.f_7) && Local_78.f_109.f_50)
	{
		if (!Local_78.f_56.f_50)
		{
			PED::SET_PED_CONFIG_FLAG(Local_78.f_109.f_7, 206, true);
			return Local_78.f_56.f_1;
		}
	}
	return 145;
}

void func_435(var uParam0)//Position - 0x30EF8
{
	int iVar0;
	
	if (*uParam0 == 9)
	{
		iVar0 = GlobalFunc_769(uParam0->f_1);
		func_439(iVar0, GlobalFunc_4327(iVar0));
		func_436(uParam0->f_1, 0, GlobalFunc_5942(uParam0->f_7));
		func_5(uParam0, 2, 0);
	}
	else if (*uParam0 == 10)
	{
		func_436(uParam0->f_1, 2, 0);
		func_5(uParam0, 0, 0);
	}
	else if (*uParam0 == 11)
	{
		func_436(uParam0->f_1, 1, 0);
		func_5(uParam0, 0, 0);
	}
	else if (*uParam0 == 8)
	{
		func_5(uParam0, 5, 0);
	}
	else if (*uParam0 == 12)
	{
		func_436(uParam0->f_1, 3, 0);
		func_5(uParam0, 4, 0);
	}
	else if (*uParam0 == 13)
	{
		func_436(uParam0->f_1, 4, 0);
		func_5(uParam0, 4, 0);
	}
	else if (*uParam0 == 14)
	{
		func_5(uParam0, 6, 0);
	}
	else if (*uParam0 == 7)
	{
		func_5(uParam0, 6, 0);
	}
	else
	{
		func_5(uParam0, 6, 0);
	}
}

void func_436(var uParam0, int iParam1, int iParam2)//Position - 0x30FEE
{
	if (Local_78.f_670 < 5)
	{
		Local_78.f_654[Local_78.f_670 /*3*/] = uParam0;
		Local_78.f_654[Local_78.f_670 /*3*/].f_1 = iParam1;
		Local_78.f_654[Local_78.f_670 /*3*/].f_2 = iParam2;
		Local_78.f_670++;
	}
}



void func_439(int iParam0, int iParam1)//Position - 0x3114C
{
	if (iParam0 < 6)
	{
		GlobalFunc_6877(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_362[iParam0 /*3*/]));
		Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_381[iParam0] = iParam1;
		if (iParam1 != -1)
		{
			GlobalFunc_5693(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_362[iParam0 /*3*/]));
		}
	}
}


void func_441(var uParam0, var uParam1)//Position - 0x311D1
{
	if (*uParam0 != 7)
	{
		*uParam1 = uParam0->f_1;
	}
}

int func_442()//Position - 0x311E7
{
	if (GlobalFunc_236())
	{
		return 1;
	}
	return 0;
}


void func_444()//Position - 0x31217
{
	if ((Local_78.f_614 && Global_86213 != 4) && Global_86213 != 5)
	{
		if (func_463())
		{
			if ((Local_78.f_703 != 0 && Local_78.f_703 != 1) && Local_78.f_615 != Global_86214)
			{
				func_431(&(Local_78.f_703), 0, 145, 69);
				Local_78.f_615 = Global_86214;
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (Local_78.f_703 != 0)
					{
						func_771(1, 48, 0);
					}
				}
			}
		}
		else if (Local_78.f_703 == 1)
		{
			if (Global_86213 != 3)
			{
				func_431(&(Local_78.f_703), 2, 145, 69);
			}
		}
	}
	if (Local_78.f_56 == 4)
	{
		if (func_462(&(Local_78.f_56)) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (GlobalFunc_42(Local_78.f_56.f_1))
			{
				func_460(&(Local_78.f_56), 1, 48);
			}
			else
			{
				func_460(&(Local_78.f_56), 1, 49);
			}
		}
	}
	if (Local_78.f_109 == 4)
	{
		if (func_462(&(Local_78.f_109)) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (GlobalFunc_42(Local_78.f_109.f_1))
			{
				func_460(&(Local_78.f_109), 1, 48);
			}
			else
			{
				func_460(&(Local_78.f_109), 1, 49);
			}
		}
	}
	if (func_458())
	{
		if (func_430(&(Local_78.f_737)) && (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || MISC::ABSF(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID())) < 0.5f))
		{
			func_446(1, 47);
		}
	}
	if (GlobalFunc_2018(12))
	{
		func_446(1, 69);
	}
}


void func_446(int iParam0, int iParam1)//Position - 0x313B5
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 != iVar0)
		{
			func_447(&(Local_78.f_162[iVar1 /*28*/]), Global_86216, iParam0, iParam1);
		}
		iVar1++;
	}
}

int func_447(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x313F1
{
	int iVar0;
	char* sVar1;
	bool bVar5;
	struct<3> Var6;
	int iVar9;
	struct<3> Var10;
	var uVar13;
	var uVar14;
	var uVar15;
	
	if (uParam0->f_1 != 0 && uParam0->f_1 < 14)
	{
		iVar0 = GlobalFunc_8315();
		if (GlobalFunc_4924(uParam0->f_3) && *uParam0 != iVar0)
		{
			if (func_427(uParam0))
			{
				if (iParam3 != 69)
				{
					if (iParam2 == 0)
					{
						if (func_457(*uParam0, iParam3, &sVar1))
						{
							GlobalFunc_5117(uParam0->f_3, &sVar1, func_134(*uParam0), 4);
						}
					}
					else if (GlobalFunc_535(&(Local_78.f_703)) != 3)
					{
						func_431(&(Local_78.f_703), 3, *uParam0, iParam3);
					}
				}
			}
			bVar5 = false;
			if (iParam1 != -1)
			{
				iVar9 = Global_81155[iParam1 /*34*/].f_10;
				if (GlobalFunc_4324(iVar9))
				{
					Var10 = { GlobalFunc_2247(iVar9, GlobalFunc_8315()) };
				}
				else
				{
					Var10 = { GlobalFunc_2247(iVar9, 0) };
				}
				Var6 = { Var10 + GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1) - Var10) * Vector(50f, 50f, 50f) };
				if (func_15(Var6, &Var6, &uVar13, &uVar14, 1, 0, 1))
				{
					bVar5 = true;
				}
			}
			if (PED::IS_PED_GROUP_MEMBER(uParam0->f_3, GlobalFunc_468()))
			{
				PED::REMOVE_PED_FROM_GROUP(uParam0->f_3);
			}
			DECORATOR::DECOR_SET_BOOL(uParam0->f_3, "BlockFriendGrab", 1);
			PED::SET_PED_KEEP_TASK(uParam0->f_3, 1);
			TASK::OPEN_SEQUENCE_TASK(&uVar15);
			if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			}
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 3072, 2);
			TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(800, 1200));
			if (bVar5)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var6, 1f, -1, 0.25f, 5, 1193033728);
			}
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar15);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar15);
			TASK::CLEAR_SEQUENCE_TASK(&uVar15);
			func_448(uParam0, 2);
			return 1;
		}
		else
		{
			func_448(uParam0, 2);
			return 1;
		}
	}
	return 0;
}

void func_448(var uParam0, int iParam1)//Position - 0x315AF
{
	if (uParam0->f_1 != 0)
	{
		GlobalFunc_846(&(uParam0->f_4));
		func_454(uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		{
			if (uParam0->f_1 == 12 && iParam1 != 3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_3, 1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, 1, 1);
					}
				}
			}
			func_453(uParam0);
			if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
			{
				if (PED::IS_PED_IN_GROUP(uParam0->f_3))
				{
					PED::REMOVE_PED_FROM_GROUP(uParam0->f_3);
				}
				if (iParam1 == 0)
				{
					PED::DELETE_PED(&(uParam0->f_3));
				}
				else if (iParam1 == 2)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
				}
			}
		}
		func_451(uParam0);
		func_450(uParam0, &Global_86221);
		func_36(*uParam0);
		func_449(uParam0, *uParam0);
	}
}

void func_449(var uParam0, int iParam1)//Position - 0x31672
{
	*uParam0 = iParam1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1;
	GlobalFunc_235(&(uParam0->f_7));
	uParam0->f_10 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_18 = 0;
	uParam0->f_17 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 145;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
}

void func_450(var uParam0, var uParam1)//Position - 0x316E7
{
	MISC::CLEAR_BIT(uParam1, *uParam0);
}

void func_451(var uParam0)//Position - 0x316F8
{
	int iVar0;
	int iVar1;
	
	iVar0 = *uParam0;
	if (MISC::IS_BIT_SET(Global_86220, iVar0))
	{
		MISC::CLEAR_BIT(&Global_86220, iVar0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (*uParam0 != iVar1 && func_452(&(Local_78.f_162[iVar1 /*28*/]), Global_86220))
			{
				GlobalFunc_8000(*uParam0, iVar1, 1);
			}
			iVar1++;
		}
	}
}

bool func_452(var uParam0, int iParam1)//Position - 0x31756
{
	return MISC::IS_BIT_SET(uParam1, *uParam0);
}

void func_453(var uParam0)//Position - 0x31767
{
	if (GlobalFunc_4924(uParam0->f_3))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_3, 0);
		AUDIO::STOP_PED_SPEAKING(uParam0->f_3, 0);
		PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 2);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(uParam0->f_3, 1);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uParam0->f_3, 0);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 107, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 206, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 0);
		WEAPON::SET_PED_INFINITE_AMMO(uParam0->f_3, 0, 0);
		if (PED::GET_PED_STEALTH_MOVEMENT(uParam0->f_3))
		{
			PED::SET_PED_STEALTH_MOVEMENT(uParam0->f_3, 0, 0);
		}
	}
}

void func_454(var uParam0)//Position - 0x317E5
{
	float fVar0;
	
	if (GlobalFunc_4924(uParam0->f_3))
	{
		if (ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_3) > SYSTEM::FLOOR(200f))
		{
			fVar0 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(uParam0->f_3)) * (200f / 400f));
			ENTITY::SET_ENTITY_MAX_HEALTH(uParam0->f_3, SYSTEM::FLOOR(200f));
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_3, SYSTEM::FLOOR(fVar0));
		}
	}
}



int func_457(int iParam0, int iParam1, char* sParam2)//Position - 0x3187E
{
	switch (iParam1)
	{
		case 48:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				default:
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				default:
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				default:
			}
			break;
		
		case 52:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 1:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 2:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 19:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 14:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				case 17:
					StringCopy(sParam2, "FaFM_CAAA", 16);
					return 1;
				
				default:
			}
			break;
		
		default:
			StringCopy(sParam2, "FaFM_BVAA", 16);
			return 0;
			break;
	}
	StringCopy(sParam2, "FaFM_BVAA", 16);
	return 0;
}

int func_458()//Position - 0x31A95
{
	int iVar0;
	int iVar1;
	
	if (Global_86213 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			iVar0 = GlobalFunc_8315();
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (iVar1 != iVar0)
				{
					if (func_427(&(Local_78.f_162[iVar1 /*28*/])) && func_459(&(Local_78.f_162[iVar1 /*28*/])))
					{
						return 1;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_459(var uParam0)//Position - 0x31AF5
{
	if (GlobalFunc_7084(&(uParam0->f_7), 300f))
	{
		return 1;
	}
	return 0;
}

int func_460(var uParam0, bool bParam1, int iParam2)//Position - 0x31B12
{
	int iVar0;
	char* sVar1;
	
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		iVar0 = GlobalFunc_8315();
		if (GlobalFunc_4924(uParam0->f_7) && uParam0->f_1 != iVar0)
		{
			if (func_403(uParam0))
			{
				if (iParam2 != 69)
				{
					if (bParam1 == 0)
					{
						if (func_457(uParam0->f_1, iParam2, &sVar1))
						{
							GlobalFunc_5117(uParam0->f_7, &sVar1, func_134(uParam0->f_1), 4);
						}
					}
					else if (GlobalFunc_535(&(Local_78.f_703)) != 3)
					{
						func_431(&(Local_78.f_703), 3, uParam0->f_1, iParam2);
					}
				}
			}
		}
		GlobalFunc_1057(uParam0, 8);
		return 1;
	}
	return 0;
}


int func_462(var uParam0)//Position - 0x31BBC
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, 0);
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_463()//Position - 0x31C0F
{
	int iVar0;
	int iVar1;
	
	if (Global_86213 == 3 && GlobalFunc_747(Global_81155[Global_86214 /*34*/].f_11, GlobalFunc_2962(GlobalFunc_8315())))
	{
		if ((func_403(&(Local_78.f_56)) && func_464(Local_78.f_56.f_1, Global_86215)) || (func_403(&(Local_78.f_109)) && func_464(Local_78.f_109.f_1, Global_86215)))
		{
			return 1;
		}
		iVar0 = GlobalFunc_8315();
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (iVar1 != iVar0)
			{
				if (func_427(&(Local_78.f_162[iVar1 /*28*/])) && func_464(iVar1, Global_86215))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_464(int iParam0, int iParam1)//Position - 0x31CC2
{
	return !MISC::IS_BIT_SET(uParam1, GlobalFunc_769(iParam0));
}

void func_465()//Position - 0x31CD7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_732(&(Local_78.f_162[iVar0 /*28*/]));
		iVar0++;
	}
	func_467(&(Local_78.f_3));
	func_467(&(Local_78.f_56));
	func_467(&(Local_78.f_109));
	GlobalFunc_502();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
		WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(PLAYER::PLAYER_PED_ID());
	}
	if (!PED::IS_PED_INJURED(Local_78.f_56.f_7))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_78.f_56.f_7);
		WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_78.f_56.f_7);
	}
	if (!PED::IS_PED_INJURED(Local_78.f_109.f_7))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_78.f_109.f_7);
		WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_78.f_109.f_7);
	}
}


void func_467(var uParam0)//Position - 0x31DE5
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char[] cVar8[8];
	char[] cVar12[8];
	
	if (*uParam0 == 0 || *uParam0 >= 7)
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			iVar1 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_8);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_8, 0))
			{
				if (iVar1 < (uParam0->f_38 - 50))
				{
					bVar0 = true;
				}
			}
			uParam0->f_38 = iVar1;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_8);
			WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_8);
		}
		else
		{
			if (uParam0->f_38 != -1)
			{
				bVar0 = true;
			}
			uParam0->f_38 = -1;
		}
	}
	if (GlobalFunc_42(uParam0->f_1))
	{
		MISC::CLEAR_BIT(&Global_86218, uParam0->f_1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && PED::IS_PED_INJURED(uParam0->f_7))
	{
		if (uParam0->f_50)
		{
			func_393(Local_78.f_3.f_1, uParam0->f_1, 1);
		}
		if (GlobalFunc_42(uParam0->f_1))
		{
			func_58(uParam0);
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[uParam0->f_1] = 0;
		}
		func_731(1);
		GlobalFunc_1057(uParam0, 9);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		if ((*uParam0 == 2 || *uParam0 == 3) || *uParam0 == 4)
		{
			GlobalFunc_1057(uParam0, 7);
			return;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && uParam0->f_7 != PLAYER::PLAYER_PED_ID())
	{
		iVar2 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3) && PED::IS_PED_IN_VEHICLE(uParam0->f_7, iVar3, 0))
			{
				iVar2 = 1;
			}
		}
		if (iVar2 == 1)
		{
			uParam0->f_40 = 1;
		}
		else if (((!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(uParam0->f_7)) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam0->f_7))
		{
			uParam0->f_40 = 0;
		}
		iVar4 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_7);
		if (uParam0->f_40 == 0)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (iVar4 < (uParam0->f_41 - 10))
				{
					func_730(uParam0, 1);
				}
			}
		}
		uParam0->f_41 = iVar4;
	}
	if (*uParam0 != 4)
	{
		if (func_729())
		{
			if (uParam0->f_1 != GlobalFunc_8315())
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
				{
					func_726(uParam0, 1, 0);
				}
			}
			return;
		}
	}
	if (*uParam0 == 1)
	{
		if (uParam0->f_2 == 25 || (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && func_372(uParam0->f_7, uParam0->f_24, 20f)))
		{
			GlobalFunc_6877(&(uParam0->f_15));
		}
	}
	Global_35465[uParam0->f_1] = MISC::GET_GAME_TIMER() + 20000;
	if (!PED::IS_PED_INJURED(uParam0->f_7))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_7, 328, 1);
	}
	if (uParam0->f_1 != GlobalFunc_8315())
	{
		if (*uParam0 == 1)
		{
			func_725(uParam0);
			if (!func_442())
			{
				if ((Local_78.f_653 == 0 && GlobalFunc_7084(&(uParam0->f_15), (4f * 60f))) || (Local_78.f_653 == 1 && GlobalFunc_7084(&(uParam0->f_15), (8f * 60f))))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
					{
						if (!uParam0->f_46)
						{
							GlobalFunc_8000(Local_78.f_3.f_1, uParam0->f_1, 0);
							func_393(Local_78.f_3.f_1, uParam0->f_1, 4);
							GlobalFunc_1057(uParam0, 10);
							return;
						}
					}
				}
				if (!uParam0->f_46)
				{
					if (func_724(uParam0->f_1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
						{
							func_721(&(Local_78.f_424), uParam0->f_1);
						}
						else if (func_713(&(Local_78.f_259), Local_78.f_3.f_1, uParam0->f_1))
						{
							uParam0->f_46 = 1;
							return;
						}
					}
				}
				else if (GlobalFunc_781())
				{
					uParam0->f_46 = 0;
					return;
				}
				else if (GlobalFunc_687())
				{
					GlobalFunc_8000(Local_78.f_3.f_1, uParam0->f_1, 0);
					GlobalFunc_1057(uParam0, 7);
					return;
				}
				if (!func_442())
				{
					if (!PED::IS_PED_INJURED(uParam0->f_7))
					{
						if (uParam0->f_51 || func_706(uParam0))
						{
							func_703(uParam0);
							func_703(&(Local_78.f_3));
							return;
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 25f, 25f, 25f, 0, 1, 0))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || MISC::ABSF(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID())) < 10f)
							{
								if (uParam0->f_1 == 14 || uParam0->f_1 == 17)
								{
									if (func_702(uParam0, 0))
									{
										func_701(uParam0, 0);
										return;
									}
								}
								else if (func_702(uParam0, 1))
								{
									func_703(uParam0);
									func_703(&(Local_78.f_3));
									return;
								}
							}
						}
					}
				}
				if (func_372(PLAYER::PLAYER_PED_ID(), uParam0->f_24, 10f))
				{
					ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_24, Global_18, 1, 1, 0);
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(uParam0->f_7))
				{
					if (func_700())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, 0), 1);
						}
						else
						{
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7, 1);
						}
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, 0), 0);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_7, 0);
					}
				}
				GlobalFunc_235(&(uParam0->f_29));
				uParam0->f_46 = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
			{
				if (!func_442())
				{
					func_726(uParam0, 0, 1);
				}
			}
			else if (!func_696(uParam0, func_700()))
			{
				func_487(uParam0);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_7))
			{
				func_480(uParam0);
			}
		}
		else if (*uParam0 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_9))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_9, 1, 1);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_9));
			}
			if (func_478(uParam0))
			{
				func_701(uParam0, 0);
			}
			else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_7, GlobalFunc_468()))
			{
				GlobalFunc_1057(uParam0, 3);
			}
			else if (func_477(uParam0))
			{
				GlobalFunc_1057(uParam0, 6);
			}
			else if (func_476(uParam0))
			{
				GlobalFunc_1057(uParam0, 5);
				PED::REMOVE_PED_FROM_GROUP(uParam0->f_7);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, 1);
				TASK::CLEAR_PED_TASKS(uParam0->f_7);
			}
			else
			{
				if (GlobalFunc_42(uParam0->f_1))
				{
					MISC::SET_BIT(&Global_86218, uParam0->f_1);
				}
				PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(uParam0->f_7, GlobalFunc_468(), 1);
				if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
				{
					iVar5 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, 0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar5) && func_475(&iVar5, 0)) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar5, 0))
					{
						if (!GlobalFunc_6964(uParam0->f_7, -828834893))
						{
							TASK::CLEAR_PED_TASKS(uParam0->f_7);
							TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_7, 0, 0);
						}
					}
				}
				if (MISC::GET_GAME_TIMER() < uParam0->f_37)
				{
					if (!func_702(uParam0, 1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 20f, 20f, 20f, 0, 1, 0))
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_7, 1f);
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, 0, 1, 0))
				{
					if (!GlobalFunc_6964(uParam0->f_7, 150319005))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, 0), 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
						}
					}
					if (!GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), 150319005))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || !PED::IS_PED_IN_VEHICLE(uParam0->f_7, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 3000, 0, 2);
						}
					}
				}
				if (bVar0)
				{
					if (GlobalFunc_42(uParam0->f_1))
					{
						if (Local_78.f_703 != 11)
						{
							func_431(&(Local_78.f_703), 11, uParam0->f_1, 57);
							uParam0->f_39 = MISC::GET_GAME_TIMER() + 18000;
						}
					}
				}
			}
		}
		else if (*uParam0 == 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_9))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_9, 1, 1);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_9));
			}
			if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_7, GlobalFunc_468()))
			{
				if (!PED::IS_PED_RAGDOLL(uParam0->f_7))
				{
					if (GlobalFunc_7058(&(Local_78.f_589), uParam0->f_7, 25f, 0))
					{
						PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_7, GlobalFunc_468());
					}
				}
			}
			if (func_478(uParam0))
			{
				func_701(uParam0, 0);
			}
			else if (func_470(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 200f))
			{
				GlobalFunc_1057(uParam0, 11);
			}
			else if (func_477(uParam0))
			{
				GlobalFunc_1057(uParam0, 6);
			}
			else if (func_476(uParam0))
			{
				GlobalFunc_1057(uParam0, 5);
				PED::REMOVE_PED_FROM_GROUP(uParam0->f_7);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, 1);
				TASK::CLEAR_PED_TASKS(uParam0->f_7);
			}
			else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_7, GlobalFunc_468()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_VEHICLE(uParam0->f_7, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					GlobalFunc_1057(uParam0, 2);
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
				{
					iVar6 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, 0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar6) && func_475(&iVar6, 0)) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6, 0))
					{
						if (!GlobalFunc_6964(uParam0->f_7, -828834893))
						{
							TASK::CLEAR_PED_TASKS(uParam0->f_7);
							TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_7, 0, 0);
						}
					}
				}
			}
		}
		else if (*uParam0 == 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_9))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_9, 1, 1);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_9));
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
			{
				iVar7 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, 0);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar7) && func_475(&iVar7, 0)) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, 0))
				{
					if (!GlobalFunc_6964(uParam0->f_7, -828834893))
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_7);
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_7, 0, 0);
					}
				}
			}
			if (uParam0->f_36 == 0)
			{
				if (func_430(&(Local_78.f_737)) && func_128(GlobalFunc_8315(), uParam0->f_1, 50, &cVar8, &cVar12))
				{
					if (GlobalFunc_10618(&(Local_78.f_259), &cVar8, &cVar12, 4, 1, 0, 0))
					{
						uParam0->f_36 = 1;
					}
				}
			}
		}
		else if (*uParam0 == 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_9))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_9, 1, 1);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_9));
			}
			if (func_469(uParam0))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_7);
				if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_7, GlobalFunc_468()))
				{
					if (!PED::IS_PED_RAGDOLL(uParam0->f_7))
					{
						if (GlobalFunc_7058(&(Local_78.f_589), uParam0->f_7, 25f, 0))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_7, GlobalFunc_468());
						}
					}
				}
				if (PED::IS_PED_GROUP_MEMBER(uParam0->f_7, GlobalFunc_468()))
				{
					GlobalFunc_1057(uParam0, 2);
				}
				else
				{
					GlobalFunc_1057(uParam0, 3);
				}
			}
			else if (!GlobalFunc_6964(uParam0->f_7, 63541484))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_7);
				TASK::TASK_PAUSE(uParam0->f_7, -1);
			}
		}
		else if (*uParam0 == 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_9))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_9, 1, 1);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_9));
			}
			if (func_468(uParam0))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_7);
				PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(uParam0->f_7);
				if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_7, GlobalFunc_468()))
				{
					if (!PED::IS_PED_RAGDOLL(uParam0->f_7))
					{
						if (GlobalFunc_7058(&(Local_78.f_589), uParam0->f_7, 25f, 0))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_7, GlobalFunc_468());
						}
					}
				}
				if (PED::IS_PED_GROUP_MEMBER(uParam0->f_7, GlobalFunc_468()))
				{
					GlobalFunc_1057(uParam0, 2);
				}
				else
				{
					GlobalFunc_1057(uParam0, 3);
				}
			}
			else
			{
				if (!GlobalFunc_6964(uParam0->f_7, 1226945658))
				{
					uParam0->f_42 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_7, uParam0->f_42, 20f, 20f, 20f, 0, 1, 0))
					{
						uParam0->f_42.f_2 = (uParam0->f_42.f_2 + 40f);
					}
					TASK::CLEAR_PED_TASKS(uParam0->f_7);
					TASK::TASK_PARACHUTE_TO_TARGET(uParam0->f_7, uParam0->f_42);
					uParam0->f_33 = MISC::GET_GAME_TIMER() + 1000;
				}
				else if (uParam0->f_33 < MISC::GET_GAME_TIMER() || ENTITY::IS_ENTITY_AT_COORD(uParam0->f_7, uParam0->f_42, 20f, 20f, 20f, 0, 1, 0))
				{
					uParam0->f_42 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_7, uParam0->f_42, 20f, 20f, 20f, 0, 1, 0))
					{
						uParam0->f_42.f_2 = (uParam0->f_42.f_2 + 40f);
					}
					TASK::SET_PARACHUTE_TASK_TARGET(uParam0->f_7, uParam0->f_42);
					uParam0->f_33 = MISC::GET_GAME_TIMER() + 1000;
				}
				if (PED::GET_PED_PARACHUTE_STATE(uParam0->f_7) == 0)
				{
					PED::FORCE_PED_TO_OPEN_PARACHUTE(uParam0->f_7);
				}
			}
		}
	}
}

int func_468(var uParam0)//Position - 0x32A85
{
	if (!ENTITY::IS_ENTITY_IN_AIR(uParam0->f_7))
	{
		if (PED::GET_PED_PARACHUTE_STATE(uParam0->f_7) == -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_469(var uParam0)//Position - 0x32AAA
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
		{
			return 1;
		}
		else
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					return 1;
				}
				else if (ENTITY::GET_ENTITY_SPEED(iVar0) < 5f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) < 30f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_470(int iParam0, int iParam1, float fParam2)//Position - 0x32B18
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	Var0.x = (Var0.x - Var3.x);
	Var0.f_1 = (Var0.f_1 - Var3.f_1);
	Var0.f_2 = (Var0.f_2 - Var3.f_2);
	return (((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) > (fParam2 * fParam2);
}





int func_475(int iParam0, int iParam1)//Position - 0x32D4D
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(*iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_476(var uParam0)//Position - 0x32D81
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
		if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
		{
			if (ENTITY::IS_ENTITY_IN_AIR(uParam0->f_7))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
				{
					if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_7) > 50f)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_7, joaat("gadget_parachute"), 0))
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

int func_477(var uParam0)//Position - 0x32DFC
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
			{
				if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) > 50f)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_7, joaat("gadget_parachute"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_478(var uParam0)//Position - 0x32E66
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	
	if (*uParam0 != 0 && !PED::IS_PED_INJURED(uParam0->f_7))
	{
		if (!func_479(uParam0))
		{
			if (PED::IS_PED_FLEEING(uParam0->f_7))
			{
				return 1;
			}
			else if (uParam0->f_1 == 14 || uParam0->f_1 == 17)
			{
				if (MISC::IS_BIT_SET(Global_86218, 3))
				{
					return 1;
				}
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), 0, 1))
				{
					return 1;
				}
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uParam0->f_7, 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uParam0->f_7, 0, 1))
				{
					return 1;
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
				{
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var3 = { Var0 - Vector(50f, 50f, 50f) };
						Var6 = { Var0 + Vector(50f, 50f, 50f) };
						if (PED::IS_COP_PED_IN_AREA_3D(Var3, Var6))
						{
							return 1;
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
				{
					iVar9 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar9))
					{
						if (ENTITY::IS_ENTITY_DEAD(iVar9) || FIRE::IS_ENTITY_ON_FIRE(iVar9))
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

int func_479(var uParam0)//Position - 0x32FAC
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) > 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_480(var uParam0)//Position - 0x32FE4
{
	if (!PED::IS_PED_RAGDOLL(uParam0->f_7) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam0->f_7))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
		{
			func_485(uParam0);
		}
		else if ((GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && func_484(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 15f))
		{
			func_483(uParam0);
		}
		else
		{
			func_481(uParam0);
		}
	}
}

void func_481(var uParam0)//Position - 0x3305A
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	char* sVar7;
	char* sVar23;
	
	if (func_372(uParam0->f_7, uParam0->f_21, 1.5f))
	{
		if (!GlobalFunc_6964(uParam0->f_7, 713668775))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_7, uParam0->f_21, 2f, -1, 0.25f, 512, 1193033728);
		}
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_7) };
		Var3 = { GlobalFunc_107(uParam0->f_24 - uParam0->f_21) };
		fVar6 = 0f;
		if ((Var0.x != 0f || Var0.f_1 != 0f) && (Var3.x != 0f || Var3.f_1 != 0f))
		{
			fVar6 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.f_1, Var3.x, Var3.f_1);
		}
		if (fVar6 > 20f || !func_725(uParam0))
		{
			if (!GlobalFunc_6964(uParam0->f_7, 1464580341) && !GlobalFunc_6964(uParam0->f_7, -2017877118))
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_7, uParam0->f_24, 6000);
			}
		}
		else if (!GlobalFunc_6964(uParam0->f_7, -2017877118))
		{
			func_50(uParam0, &sVar7);
			func_482(uParam0, &sVar23);
			if (uParam0->f_1 == 17)
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_7, &sVar7, &sVar23, 1.5f, -1.5f, -1, 1, 0, 0, 0, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_7, &sVar7, &sVar23, 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_482(var uParam0, char* sParam1)//Position - 0x331BE
{
	int iVar0;
	
	if (uParam0->f_1 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "impatient_idle_a", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "impatient_idle_b", 64);
		}
		else
		{
			StringCopy(sParam1, "impatient_idle_c", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "impatient_idle_a", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "impatient_idle_b", 64);
		}
		else if (iVar0 == 2)
		{
			StringCopy(sParam1, "impatient_idle_c", 64);
		}
		else
		{
			StringCopy(sParam1, "impatient_idle_d", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 2)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "trevor_impatient_wait_1", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "trevor_impatient_wait_2", 64);
		}
		else if (iVar0 == 2)
		{
			StringCopy(sParam1, "trevor_impatient_wait_3", 64);
		}
		else
		{
			StringCopy(sParam1, "trevor_impatient_wait_4", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 19)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "idle_a_lamar", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "idle_b_lamar", 64);
		}
		else
		{
			StringCopy(sParam1, "idle_c_lamar", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 14)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "idle_a", 64);
		}
		else if (iVar0 == 1)
		{
			StringCopy(sParam1, "idle_b", 64);
		}
		else if (iVar0 == 2)
		{
			StringCopy(sParam1, "idle_c", 64);
		}
		else
		{
			StringCopy(sParam1, "idle_d", 64);
		}
		return 1;
	}
	else if (uParam0->f_1 == 17)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		if (iVar0 == 0)
		{
			StringCopy(sParam1, "impatient_idle_a", 64);
		}
		else
		{
			StringCopy(sParam1, "impatient_idle_b", 64);
		}
		return 1;
	}
	return 0;
}

void func_483(var uParam0)//Position - 0x3336F
{
	if (!GlobalFunc_6964(uParam0->f_7, 1227113341))
	{
		if (!PED::IS_PED_INJURED(Local_78.f_3.f_7))
		{
			TASK::TASK_GO_TO_ENTITY(uParam0->f_7, Local_78.f_3.f_7, -1, 5f, 1073741824, 1073741824, 0);
		}
	}
}

bool func_484(int iParam0, int iParam1, float fParam2)//Position - 0x333B1
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	Var0.x = (Var0.x - Var3.x);
	Var0.f_1 = (Var0.f_1 - Var3.f_1);
	Var0.f_2 = (Var0.f_2 - Var3.f_2);
	return (((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= (fParam2 * fParam2);
}

void func_485(var uParam0)//Position - 0x3340F
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	GlobalFunc_6877(&(uParam0->f_12));
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, 0);
	Var1 = { Global_85668[uParam0->f_2 /*18*/].f_13 };
	fVar4 = GlobalFunc_713(uParam0->f_7, Var1, 1);
	iVar5 = 512 | 256 | 32 | 2;
	iVar6 = iVar5 | 524288 | 8 | 4 | 16;
	iVar7 = iVar5 | 1;
	fVar8 = 0f;
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_7) <= 1f)
	{
		if (!GlobalFunc_226(&(uParam0->f_29)))
		{
			GlobalFunc_6877(&(uParam0->f_29));
		}
		else
		{
			fVar8 = GlobalFunc_5182(&(uParam0->f_29));
		}
	}
	else
	{
		GlobalFunc_235(&(uParam0->f_29));
	}
	if ((fVar4 < 2f || (fVar4 < 15f && fVar8 > 1f)) || (fVar4 < 20f && fVar8 > 6f))
	{
		if (!GlobalFunc_6964(uParam0->f_7, -828834893))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
			}
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_7, 0, 0);
		}
	}
	else if (fVar4 < 10f)
	{
		if (!GlobalFunc_6964(uParam0->f_7, -1273030092) || uParam0->f_32 != 0)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_7);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uParam0->f_7, iVar0, Var1, 4, 10f, iVar7, 2f, 10f, 1);
			uParam0->f_32 = 0;
		}
	}
	else
	{
		if (!GlobalFunc_6964(uParam0->f_7, -1273030092) || uParam0->f_32 != 1)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_7);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uParam0->f_7, iVar0, Var1, 4, 10f, iVar6, 2f, 20f, 1);
			uParam0->f_32 = 1;
		}
		if (fVar4 < 30f)
		{
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_7, 10f);
		}
		else
		{
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_7, 18f);
		}
	}
}


int func_487(var uParam0)//Position - 0x33615
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	bool bVar15;
	struct<58> Var16;
	bool bVar90;
	
	if (uParam0->f_2 != 25)
	{
		if (func_373(PLAYER::PLAYER_PED_ID(), uParam0->f_21, 30f))
		{
			Var0 = { Global_85668[uParam0->f_2 /*18*/].f_9 };
			fVar3 = Global_85668[uParam0->f_2 /*18*/].f_12;
			if ((Var0.x == 0f && Var0.f_1 == 0f) && Var0.f_2 == 0f)
			{
				Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (VEHICLE::_0xA4822F1CF23F4810(&Var4, &Var7, &Var10, 0f, 180f, 200f, false, 1, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var7, 1) < 250f)
				{
					Var10 = { Var4 - Var7 };
					Var0 = { Var7 };
					fVar3 = MISC::GET_HEADING_FROM_VECTOR_2D(Var10.x, Var10.f_1);
				}
			}
			if ((Var0.x != 0f || Var0.f_1 != 0f) || Var0.f_2 != 0f)
			{
				iVar14 = joaat("asea");
				bVar15 = false;
				Var16.f_11 = 12;
				Var16.f_31 = 25;
				Var16.f_57 = 2;
				if (uParam0->f_49)
				{
					if (((!GlobalFunc_42(uParam0->f_1) || Global_89726[uParam0->f_1] != 2) || Global_89503[uParam0->f_1 /*74*/] == 0) || func_398(Global_89503[uParam0->f_1 /*74*/]))
					{
						uParam0->f_49 = 0;
					}
				}
				if (uParam0->f_49)
				{
					iVar14 = Global_89503[uParam0->f_1 /*74*/];
					iVar13 = GlobalFunc_4917(uParam0->f_1);
				}
				else if (GlobalFunc_42(uParam0->f_1))
				{
					GlobalFunc_97(uParam0->f_1, &Var16, 1);
					iVar14 = Var16;
					iVar13 = GlobalFunc_4917(uParam0->f_1);
				}
				else if (uParam0->f_1 == 14)
				{
					func_106(uParam0->f_1, &Var16, 2);
					iVar14 = Var16;
					iVar13 = GlobalFunc_4946(uParam0->f_1);
				}
				else
				{
					func_106(uParam0->f_1, &Var16, 1);
					iVar14 = Var16;
					iVar13 = GlobalFunc_4946(uParam0->f_1);
				}
				if (iVar14 == 0)
				{
					iVar14 = joaat("asea");
				}
				STREAMING::REQUEST_MODEL(iVar13);
				STREAMING::REQUEST_MODEL(iVar14);
				if (STREAMING::HAS_MODEL_LOADED(iVar14) && STREAMING::HAS_MODEL_LOADED(iVar13))
				{
					if (GlobalFunc_42(uParam0->f_1))
					{
						bVar90 = false;
						if (uParam0->f_49)
						{
							bVar90 = func_695(&(uParam0->f_8), uParam0->f_1, Var0, fVar3, 1, &(Global_89503[uParam0->f_1 /*74*/]));
						}
						else
						{
							bVar90 = func_671(&(uParam0->f_8), uParam0->f_1, Var0, fVar3, 1, 1);
						}
						if (bVar90)
						{
							bVar15 = func_504(&(uParam0->f_7), uParam0->f_1, uParam0->f_8, -1, 1, 0, 0);
						}
					}
					else if (func_498(&(uParam0->f_8), uParam0->f_1, Var0, fVar3, 1, 1))
					{
						bVar15 = GlobalFunc_7061(&(uParam0->f_7), uParam0->f_1, uParam0->f_8, -1, 1);
						if (!PED::IS_PED_INJURED(uParam0->f_7) && uParam0->f_1 == 17)
						{
							func_490(uParam0->f_7, 83);
						}
					}
				}
				if (bVar15)
				{
					if (uParam0->f_49)
					{
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
					{
						ENTITY::SET_ENTITY_COORDS(uParam0->f_8, Var0, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uParam0->f_8, fVar3);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_8);
					}
					func_488(uParam0, &(Local_78.f_259), 0);
					uParam0->f_48 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_488(var uParam0, var uParam1, bool bParam2)//Position - 0x33935
{
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			if (bParam2)
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_7);
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_7);
				if (!GlobalFunc_580(4, uParam0->f_7))
				{
					GlobalFunc_5669(4, uParam0->f_7);
				}
				func_131(uParam1, uParam0->f_1, uParam0->f_7, 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 32, false);
			}
			else
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_7);
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uParam0->f_7);
				uParam0->f_41 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_7);
				if (!GlobalFunc_580(4, uParam0->f_7))
				{
					GlobalFunc_5669(4, uParam0->f_7);
				}
				func_131(uParam1, uParam0->f_1, uParam0->f_7, 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_7, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_7, 1862763509);
				PED::SET_PED_HELMET(uParam0->f_7, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_7, 1);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uParam0->f_7, 1);
				TASK::SET_PED_PATH_CAN_USE_LADDERS(uParam0->f_7, 1);
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(uParam0->f_7, 1);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(uParam0->f_7, 1);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uParam0->f_7, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(uParam0->f_7, 0);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uParam0->f_7, 3);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 107, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 32, false);
				PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(uParam0->f_7, 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 174, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 182, true);
				PED::SET_PED_DIES_INSTANTLY_IN_WATER(uParam0->f_7, 0);
				PED::SET_PED_DIES_IN_WATER(uParam0->f_7, 0);
				if (PED::IS_PED_USING_ACTION_MODE(uParam0->f_7))
				{
					PED::SET_PED_USING_ACTION_MODE(uParam0->f_7, 0, -1, 0);
				}
				if (uParam0->f_1 != 14 && uParam0->f_1 != 17)
				{
					if (!uParam0->f_50)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, 1);
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, 0);
					}
					PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 118, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 5, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 17, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 23, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 30, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 46, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 4, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 2, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 0, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 3, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 2, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 512, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 1024, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 2048, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 16384, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 131072, 1);
					PED::SET_PED_COMBAT_ABILITY(uParam0->f_7, 2);
					PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_7, 2);
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_7, 0, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 512, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 1, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_7, 4, 1);
				}
			}
		}
	}
}


void func_490(int iParam0, int iParam1)//Position - 0x33CA6
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
	int iVar11;
	var uVar12;
	
	if (func_494(iParam1, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &uVar12))
	{
		GlobalFunc_5944(iParam0, iVar0);
		GlobalFunc_5944(iParam0, iVar1);
		GlobalFunc_5944(iParam0, iVar2);
		GlobalFunc_5944(iParam0, iVar3);
		GlobalFunc_5944(iParam0, iVar4);
		GlobalFunc_5944(iParam0, iVar5);
		GlobalFunc_5944(iParam0, iVar6);
		GlobalFunc_5944(iParam0, iVar7);
		GlobalFunc_5944(iParam0, iVar8);
		GlobalFunc_5944(iParam0, iVar9);
		GlobalFunc_5944(iParam0, iVar10);
		GlobalFunc_5944(iParam0, iVar11);
		if (GlobalFunc_747(uVar12, 1))
		{
			PED::CLEAR_ALL_PED_PROPS(iParam0);
		}
		if (GlobalFunc_747(uVar12, 2))
		{
			PED::CLEAR_ALL_PED_PROPS(iParam0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, false);
		}
		if (GlobalFunc_747(uVar12, 4))
		{
			PED::CLEAR_ALL_PED_PROPS(iParam0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 1, 0, false);
		}
	}
}




int func_494(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0x35049
{
	switch (iParam0)
	{
		case 34:
			*uParam1 = 0;
			*uParam2 = 4;
			*uParam3 = 12;
			*uParam4 = 18;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 35:
			*uParam1 = 0;
			*uParam2 = 2;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 36:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 37:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 20;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 38:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 14;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 39:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 7;
			*uParam4 = 16;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 4);
			return 1;
			break;
		
		case 40:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 41:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 19;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 42:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 17;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 43:
			*uParam1 = 0;
			*uParam2 = 3;
			*uParam3 = 10;
			*uParam4 = 16;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			*uParam1 = 44;
			*uParam2 = 53;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 80:
			*uParam1 = 44;
			*uParam2 = 47;
			*uParam3 = 54;
			*uParam4 = 63;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 81:
			*uParam1 = 44;
			*uParam2 = 48;
			*uParam3 = 55;
			*uParam4 = 64;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 82:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 2);
			return 1;
			break;
		
		case 83:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 84:
			*uParam1 = 46;
			*uParam2 = 51;
			*uParam3 = 62;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 4);
			return 1;
			break;
		
		case 85:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 58;
			*uParam4 = 67;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 86:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 87:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 61;
			*uParam4 = 70;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 2);
			return 1;
			break;
		
		case 88:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 57;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 131:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 111;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 132:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 102;
			*uParam4 = 110;
			*uParam5 = 115;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 123;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 133:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 97;
			*uParam4 = 105;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 122;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 134:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 135:
			*uParam1 = 89;
			*uParam2 = 95;
			*uParam3 = 101;
			*uParam4 = 108;
			*uParam5 = 116;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 126;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 158:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 151;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 159:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 160:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 141;
			*uParam4 = 145;
			*uParam5 = 147;
			*uParam6 = 150;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
		
		case 161:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 140;
			*uParam4 = 144;
			*uParam5 = 147;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			GlobalFunc_812(uParam13, 1);
			return 1;
			break;
	}
	return 0;
}




int func_498(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, int iParam7)//Position - 0x35A2A
{
	struct<74> Var0;
	int iVar74;
	int iVar75;
	
	if (!GlobalFunc_42(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_106(iParam1, &Var0, iParam7);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][0 /*74*/] == Var0) || (iParam1 == 15 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][1 /*74*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar74 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar74 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Var0.f_2);
				iVar75 = 0;
				while (iVar75 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar75 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_11[iVar75]);
					iVar75++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, 0))
					{
						if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, 1);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, 1);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_27));
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_4971(uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Var0.f_72);
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
				}
				GlobalFunc_2526(*uParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0);
			if (STREAMING::HAS_MODEL_LOADED(Var0))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Var0, Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
				GlobalFunc_7216(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					GlobalFunc_2526(*uParam0);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}






int func_504(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x36480
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
			if (ENTITY::DOES_ENTITY_EXIST(uParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				GlobalFunc_8645(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				GlobalFunc_11321(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				GlobalFunc_11334(*uParam0, bParam6);
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







































































































































































int func_671(int iParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, int iParam7)//Position - 0x63DD1
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
				GlobalFunc_4971(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
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
				GlobalFunc_4971(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
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
				GlobalFunc_4971(iParam0, &(Var5.f_31), &(Var5.f_57));
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
























int func_695(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, var uParam7)//Position - 0x67FE3
{
	if (*uParam7 == 0)
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(*uParam0) != *uParam7)
		{
		}
		return 1;
	}
	STREAMING::REQUEST_MODEL(*uParam7);
	if (STREAMING::HAS_MODEL_LOADED(*uParam7))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(*uParam7, Param2, uParam5, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
		GlobalFunc_7216(uParam0, *uParam7);
		if (uParam7->f_73)
		{
			if (iParam1 == 2)
			{
				if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("bodhi2"))
				{
					GlobalFunc_4970(uParam0);
				}
			}
			GlobalFunc_194(*uParam0, iParam1);
		}
		if (bParam6)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam7);
		}
		return 1;
	}
	return 0;
}

int func_696(var uParam0, bool bParam1)//Position - 0x6809C
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	bool bVar8;
	
	if (uParam0->f_2 != 25)
	{
		if (uParam0->f_48 == 0)
		{
			Var0 = { uParam0->f_21 };
			Var3 = { uParam0->f_24 - uParam0->f_21 };
			fVar6 = MISC::GET_HEADING_FROM_VECTOR_2D(Var3.x, Var3.f_1);
			fVar7 = 225f;
			if (func_373(PLAYER::PLAYER_PED_ID(), Var0, 300f) && (func_372(PLAYER::PLAYER_PED_ID(), Var0, fVar7) || bParam1))
			{
				if (GlobalFunc_42(uParam0->f_1))
				{
					bVar8 = func_699(&(uParam0->f_7), uParam0->f_1, Var0, fVar6, 1, 0, 0);
				}
				else
				{
					bVar8 = GlobalFunc_6808(&(uParam0->f_7), uParam0->f_1, Var0, fVar6, 1);
				}
				if (!PED::IS_PED_INJURED(uParam0->f_7) && uParam0->f_1 == 17)
				{
					func_697(uParam0->f_7);
				}
				if (bVar8)
				{
					func_488(uParam0, &(Local_78.f_259), 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_697(int iParam0)//Position - 0x68182
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = 83;
	if (func_494(iVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &iVar12, &uVar13))
	{
		GlobalFunc_5944(iParam0, iVar2);
		GlobalFunc_5944(iParam0, iVar3);
		GlobalFunc_5944(iParam0, iVar4);
		GlobalFunc_5944(iParam0, iVar5);
		GlobalFunc_5944(iParam0, iVar6);
		GlobalFunc_5944(iParam0, iVar7);
		GlobalFunc_5944(iParam0, iVar8);
		GlobalFunc_5944(iParam0, iVar9);
		GlobalFunc_5944(iParam0, iVar10);
		GlobalFunc_5944(iParam0, iVar11);
		GlobalFunc_5944(iParam0, iVar12);
		if (GlobalFunc_747(uVar13, 1))
		{
			PED::CLEAR_ALL_PED_PROPS(iParam0);
		}
		if (GlobalFunc_747(uVar13, 2))
		{
			PED::CLEAR_ALL_PED_PROPS(iParam0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, false);
		}
		if (GlobalFunc_747(uVar13, 4))
		{
			PED::CLEAR_ALL_PED_PROPS(iParam0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 1, 0, false);
		}
	}
}


int func_699(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x682DB
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
			GlobalFunc_8645(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			GlobalFunc_11321(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			GlobalFunc_11334(*uParam0, bParam8);
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

int func_700()//Position - 0x6837A
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if ((STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() == 8) && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_701(var uParam0, int iParam1)//Position - 0x683AE
{
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			if (iParam1 && func_403(uParam0))
			{
				if (GlobalFunc_535(&(Local_78.f_703)) != 3)
				{
					func_431(&(Local_78.f_703), 3, uParam0->f_1, 67);
				}
			}
			GlobalFunc_1057(uParam0, 12);
		}
	}
}

int func_702(var uParam0, bool bParam1)//Position - 0x6840A
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam1)
		{
			if (PED::_0x336B3D200AB007CB(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f) > 0)
			{
				return 1;
			}
			if (PED::_0x336B3D200AB007CB(uParam0->f_7, ENTITY::GET_ENTITY_COORDS(uParam0->f_7, 1), 50f) > 0)
			{
				return 1;
			}
		}
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), 0, 1))
		{
			return 1;
		}
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uParam0->f_7, 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uParam0->f_7, 0, 1))
		{
			return 1;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Var3 = { Var0 - Vector(50f, 50f, 50f) };
			Var6 = { Var0 + Vector(50f, 50f, 50f) };
			if (PED::IS_COP_PED_IN_AREA_3D(Var3, Var6))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_703(var uParam0)//Position - 0x684FE
{
	GlobalFunc_1057(uParam0, 2);
	uParam0->f_50 = 1;
	func_49(uParam0);
	if (Local_78.f_3.f_1 != uParam0->f_1)
	{
		GlobalFunc_5693(&(uParam0->f_15));
		func_434();
		func_58(uParam0);
		func_57(uParam0, 1);
		TASK::CLEAR_PED_TASKS(uParam0->f_7);
		uParam0->f_37 = MISC::GET_GAME_TIMER() + 10000;
		PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_7, GlobalFunc_468());
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_7, 0);
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
		if (uParam0->f_1 == 19)
		{
			if (Local_78.f_3.f_1 == 1)
			{
				GlobalFunc_585(77, 1);
			}
			if (Local_78.f_3.f_1 == 2)
			{
				GlobalFunc_585(77, 1);
			}
		}
		if (uParam0->f_1 == 14 || uParam0->f_1 == 17)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, 1);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, 0);
		}
		if (!func_704(&(Local_78.f_703)))
		{
			if (uParam0->f_51)
			{
				func_431(&(Local_78.f_703), 9, uParam0->f_1, 69);
			}
			else
			{
				func_431(&(Local_78.f_703), 8, uParam0->f_1, 69);
			}
		}
	}
}

int func_704(var uParam0)//Position - 0x6860A
{
	if (*uParam0 == 8 || *uParam0 == 9)
	{
		return 1;
	}
	return 0;
}


int func_706(var uParam0)//Position - 0x68671
{
	char cVar0[16];
	bool bVar4;
	
	StringCopy(&cVar0, "FR_HV_HORN", 16);
	bVar4 = func_710(uParam0);
	if ((bVar4 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !GlobalFunc_2268())
	{
		if (uParam0->f_47 == 0)
		{
			if (!CAM::IS_CINEMATIC_CAM_RENDERING())
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(0);
				}
				else
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(uParam0->f_7, 0f, 0f, 0f, 1, -1, 3000, 3000, 0);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
					uParam0->f_47 = 1;
				}
			}
		}
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if ((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bmx")))
			{
				func_708(&cVar0, &(uParam0->f_3));
			}
		}
	}
	else
	{
		if (uParam0->f_47 == 1)
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
			uParam0->f_47 = 0;
		}
		if (func_56(&cVar0, &(uParam0->f_3)))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if ((!PED::IS_PED_RAGDOLL(uParam0->f_7) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(uParam0->f_7)) && !GlobalFunc_2268())
	{
		if (bVar4)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				return 1;
			}
			else if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			else if (func_372(uParam0->f_7, uParam0->f_21, 2f))
			{
				return 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (GlobalFunc_630(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_630(uParam0->f_7))
				{
					if (func_484(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 12.5f))
					{
						return 1;
					}
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
			{
				if (GlobalFunc_630(PLAYER::PLAYER_PED_ID()))
				{
					if (GlobalFunc_630(uParam0->f_7))
					{
						if (func_484(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 30f))
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


void func_708(char[4] cParam0, int iParam1)//Position - 0x6888C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
}


int func_710(var uParam0)//Position - 0x688EB
{
	if (*uParam0 == 1)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_484(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 12.5f))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_7))
						{
							return 1;
						}
					}
				}
				else if (func_484(uParam0->f_7, PLAYER::PLAYER_PED_ID(), 12.5f))
				{
					return 1;
				}
				else if (uParam0->f_2 != 25)
				{
					if (func_373(uParam0->f_7, uParam0->f_21, 20f))
					{
						if (func_373(PLAYER::PLAYER_PED_ID(), uParam0->f_24, 12.5f))
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



int func_713(var uParam0, int iParam1, int iParam2)//Position - 0x689E2
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char[] cVar6[8];
	char[] cVar10[8];
	
	func_720(func_112(iParam1, iParam2), &iVar0, &iVar1);
	func_719(iParam1, iParam2, iVar0, &sVar2, &cVar6);
	func_719(iParam1, iParam2, iVar1, &sVar2, &cVar10);
	func_131(uParam0, iParam1, PLAYER::PLAYER_PED_ID(), 1);
	func_131(uParam0, iParam2, 0, 1);
	if (func_714(uParam0, iParam2, &sVar2, &cVar6, &cVar6, &cVar10, &cVar10, 12, 1, 0, 0, 0))
	{
		if (iVar1 == 34)
		{
			Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_405 = 1;
		}
		return 1;
	}
	return 0;
}

bool func_714(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x68A62
{
	var uVar0;
	var uVar11;
	
	GlobalFunc_513(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	GlobalFunc_2443();
	if (iParam8 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	GlobalFunc_5776(2, &uVar0, &uVar11, cParam3, cParam4, cParam5, cParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return GlobalFunc_9753(&uVar0, &uVar11, iParam7, bParam11);
}





int func_719(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x68EFA
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	if (iVar0 == 7 || iVar1 == 7)
	{
		return 0;
	}
	*sParam4 = { GlobalFunc_5197(iVar0, iVar1, 7, 0) };
	*sParam3 = { *sParam4 };
	StringConCat(sParam3, "AU", 16);
	StringConCat(sParam4, "_", 16);
	switch (iParam2)
	{
		case 0:
			StringConCat(sParam4, "G1", 16);
			break;
		
		case 1:
			StringConCat(sParam4, "G2", 16);
			break;
		
		case 2:
			StringConCat(sParam4, "G2_mm", 16);
			break;
		
		case 3:
			StringConCat(sParam4, "G2_mf", 16);
			break;
		
		case 4:
			StringConCat(sParam4, "G2_mt", 16);
			break;
		
		case 5:
			StringConCat(sParam4, "G2_ml", 16);
			break;
		
		case 6:
			StringConCat(sParam4, "Y1_ok", 16);
			break;
		
		case 7:
			StringConCat(sParam4, "Y1_ir", 16);
			break;
		
		case 8:
			StringConCat(sParam4, "Y1_vi", 16);
			break;
		
		case 9:
			StringConCat(sParam4, "Y1_fs", 16);
			break;
		
		case 10:
			StringConCat(sParam4, "Y1_lo", 16);
			break;
		
		case 11:
			StringConCat(sParam4, "Y1_bs", 16);
			break;
		
		case 12:
			StringConCat(sParam4, "Y1_cm", 16);
			break;
		
		case 13:
			StringConCat(sParam4, "Y2_ok", 16);
			break;
		
		case 14:
			StringConCat(sParam4, "Y2_cm", 16);
			break;
		
		case 15:
			StringConCat(sParam4, "N1_ok", 16);
			break;
		
		case 16:
			StringConCat(sParam4, "N1_fc", 16);
			break;
		
		case 17:
			StringConCat(sParam4, "N1_ph", 16);
			break;
		
		case 18:
			StringConCat(sParam4, "N1_bl", 16);
			break;
		
		case 19:
			StringConCat(sParam4, "N2", 16);
			break;
		
		case 20:
			StringConCat(sParam4, "B1", 16);
			break;
		
		case 21:
			StringConCat(sParam4, "B1_d2", 16);
			break;
		
		case 22:
			StringConCat(sParam4, "B1_r", 16);
			break;
		
		case 23:
			StringConCat(sParam4, "B1_a", 16);
			break;
		
		case 24:
			StringConCat(sParam4, "B1_b1", 16);
			break;
		
		case 25:
			StringConCat(sParam4, "B1_b2", 16);
			break;
		
		case 26:
			StringConCat(sParam4, "B1_f1", 16);
			break;
		
		case 27:
			StringConCat(sParam4, "B1_f2", 16);
			break;
		
		case 28:
			StringConCat(sParam4, "B1_f4", 16);
			break;
		
		case 29:
			StringConCat(sParam4, "B1_f5", 16);
			break;
		
		case 30:
			StringConCat(sParam4, "Cncl", 16);
			break;
		
		case 31:
			StringConCat(sParam4, "CnclH", 16);
			break;
		
		case 32:
			StringConCat(sParam4, "CnclM", 16);
			break;
		
		case 33:
			StringConCat(sParam4, "CnclL", 16);
			break;
		
		case 34:
			StringConCat(sParam4, "CnclF", 16);
			break;
		
		case 35:
			StringConCat(sParam4, "Lay1", 16);
			break;
		
		case 36:
			StringConCat(sParam4, "Lay2", 16);
			break;
		
		case 37:
			StringConCat(sParam4, "Lay3", 16);
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_720(int iParam0, var uParam1, var uParam2)//Position - 0x69208
{
	*uParam1 = 30;
	if (iParam0 > 70)
	{
		*uParam2 = 31;
	}
	else if (iParam0 > 45)
	{
		*uParam2 = 32;
	}
	else
	{
		*uParam2 = 33;
	}
	return 1;
}

int func_721(var uParam0, int iParam1)//Position - 0x69239
{
	int iVar0;
	char* sVar1;
	char[] cVar5[8];
	
	GlobalFunc_173(uParam0, 1, 0, func_134(iParam1), 0, 1);
	iVar0 = 0;
	func_723(GlobalFunc_769(iParam1), &sVar1, &cVar5);
	if (GlobalFunc_10638(uParam0, iParam1, &sVar1, &cVar5, 2, iVar0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}


int func_723(int iParam0, char* sParam1, char* sParam2)//Position - 0x692DC
{
	StringCopy(sParam1, "ANAUD", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam2, "MIC_APH1", 16);
			break;
		
		case 1:
			StringCopy(sParam2, "ARI_APH1", 16);
			break;
		
		case 2:
			StringCopy(sParam2, "TRE_APH1", 16);
			break;
		
		case 3:
			StringCopy(sParam2, "LAM_APH1", 16);
			break;
		
		case 4:
			StringCopy(sParam2, "JIM_APH1", 16);
			break;
		
		case 5:
			StringCopy(sParam2, "AMA_APH1", 16);
			break;
		
		default:
			StringCopy(sParam2, "XXX_APH1", 16);
			return 0;
			break;
	}
	return 1;
}

int func_724(int iParam0)//Position - 0x69371
{
	if (Global_16806 == 1)
	{
		return 0;
	}
	if (Global_16805 == 0)
	{
		return 0;
	}
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14393.f_1 == 10)
		{
			if (Global_1578 == iParam0)
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
	return 0;
}

int func_725(var uParam0)//Position - 0x693C5
{
	char* sVar0;
	
	if (func_50(uParam0, &sVar0))
	{
		STREAMING::REQUEST_ANIM_DICT(&sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
		{
			return 0;
		}
	}
	return 1;
}

int func_726(var uParam0, int iParam1, bool bParam2)//Position - 0x693ED
{
	bool bVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = false;
	iVar1 = 0;
	if (iParam1 || func_470(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 400f))
	{
		bVar0 = true;
	}
	else if ((PED::IS_PED_FALLING(uParam0->f_7) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(uParam0->f_7)) && ((!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(uParam0->f_7) || !MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(uParam0->f_7, 1), &fVar2)) || fVar2 < -200f))
	{
		bVar0 = true;
		iVar1 = 1;
	}
	else if ((PED::IS_PED_ON_FOOT(uParam0->f_7) && func_373(PLAYER::PLAYER_PED_ID(), uParam0->f_21, 30f)) && func_470(PLAYER::PLAYER_PED_ID(), uParam0->f_7, 175f))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar3 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, 0))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_7, 0);
		}
		if (GlobalFunc_42(uParam0->f_1) && iVar1 == 0)
		{
			func_727(uParam0->f_7);
			if (bParam2)
			{
				GlobalFunc_7976(uParam0->f_7, iVar3, &(Global_89503[uParam0->f_1 /*74*/]), &(Global_89734[uParam0->f_1 /*3*/]), &(Global_89744[uParam0->f_1]), &(Global_89726[uParam0->f_1]), &(Global_2544853[uParam0->f_1]), 0);
				uParam0->f_49 = 1;
			}
		}
		PED::DELETE_PED(&(uParam0->f_7));
		uParam0->f_7 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar3, 1))
		{
			VEHICLE::DELETE_VEHICLE(&iVar3);
		}
		return 1;
	}
	return 0;
}

void func_727(int iParam0)//Position - 0x6955C
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	
	iVar0 = GlobalFunc_6674(iParam0);
	Var1 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] };
	uVar4 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar0];
	uVar5 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[iVar0];
	Var6 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[iVar0 /*3*/] };
	func_81(iParam0, 0);
	if (!GlobalFunc_100(Var1, 0f, 0f, 0f))
	{
		fVar9 = MISC::ABSF((Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/].f_2 - Var1.f_2));
		fVar10 = SYSTEM::VDIST2(Var1, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/]);
		fVar11 = SYSTEM::VMAG(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[iVar0 /*3*/]);
		bVar12 = false;
		if (fVar11 > 25f)
		{
			if (fVar9 > 25f)
			{
				bVar12 = true;
			}
			if (fVar10 > (25f * 25f))
			{
				bVar12 = true;
			}
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				bVar12 = true;
			}
			if (!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iParam0))
			{
				bVar12 = true;
			}
		}
		if (bVar12)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] = { Var1 };
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar0] = uVar4;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[iVar0] = uVar5;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[iVar0 /*3*/] = { Var6 };
		}
	}
}


int func_729()//Position - 0x69703
{
	int iVar0;
	
	iVar0 = GlobalFunc_8315();
	if ((iVar0 != Local_78.f_3.f_1 && iVar0 != Local_78.f_56.f_1) && iVar0 != Local_78.f_109.f_1)
	{
		return 1;
	}
	return 0;
}

void func_730(var uParam0, int iParam1)//Position - 0x6973E
{
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			func_42(uParam0, 2, iParam1);
			GlobalFunc_1057(uParam0, 13);
		}
	}
}

void func_731(int iParam0)//Position - 0x69775
{
	if (Local_78.f_56 == 2 || Local_78.f_56 == 3)
	{
		func_701(&(Local_78.f_56), iParam0);
	}
	if (Local_78.f_109 == 2 || Local_78.f_109 == 3)
	{
		func_701(&(Local_78.f_109), iParam0);
	}
}

void func_732(var uParam0)//Position - 0x697BB
{
	int iVar0;
	var uVar1;
	
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && uParam0->f_1 != 0)
	{
		iVar0 = GlobalFunc_8315();
		if (GlobalFunc_42(*uParam0) && !MISC::IS_BIT_SET(Global_86220, *uParam0))
		{
			if (GlobalFunc_4924(uParam0->f_3))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0) || PLAYER::PLAYER_PED_ID() == uParam0->f_3)
				{
					func_769(uParam0);
				}
			}
		}
		func_768();
		if (iVar0 != *uParam0)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_3))
				{
					uParam0->f_17 = MISC::GET_GAME_TIMER() + 7000;
				}
				else if (PED::IS_PED_IN_COMBAT(uParam0->f_3, 0))
				{
					if (func_767(uParam0))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_3, "SHOOT", GlobalFunc_566(34), 1);
						uParam0->f_18 = 1;
					}
				}
				else if (uParam0->f_18)
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_3, "KILLED_ALL", GlobalFunc_566(34), 1);
					uParam0->f_18 = 0;
				}
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (uParam0->f_2)
				{
					uParam0->f_10 = func_765(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &(uParam0->f_11));
					if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(uParam0->f_10))
					{
						uParam0->f_11 = { func_764(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_11) };
					}
					uParam0->f_2 = 0;
				}
				if (func_761(uParam0))
				{
					func_760(uParam0);
					func_759(uParam0);
					if (!GlobalFunc_2018(9))
					{
						func_758(uParam0, 3);
					}
					else
					{
						func_758(uParam0, 7);
					}
				}
				else
				{
					uParam0->f_26++;
				}
				break;
			
			case 2:
				if (func_757(uParam0))
				{
					func_760(uParam0);
					func_759(uParam0);
					func_758(uParam0, 4);
				}
				else if (uParam0->f_26 < 150)
				{
					uParam0->f_26++;
				}
				else
				{
					func_448(uParam0, 2);
					func_36(*uParam0);
				}
				break;
			
			case 3:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_758(uParam0, 14);
				}
				else if (func_452(uParam0, Global_86221))
				{
					func_758(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_758(uParam0, 11);
				}
				else if (func_756(uParam0))
				{
					func_758(uParam0, 15);
				}
				else if (func_755())
				{
					func_758(uParam0, 13);
				}
				else if (func_754(uParam0))
				{
					if (func_753(uParam0))
					{
						func_758(uParam0, 8);
					}
					else if (func_751(uParam0))
					{
						func_758(uParam0, 6);
					}
					else if (func_750(uParam0, 0))
					{
						func_758(uParam0, 5);
					}
					else if (func_749(uParam0))
					{
						func_758(uParam0, 7);
					}
					else
					{
						func_758(uParam0, 4);
					}
				}
				else
				{
					func_748(uParam0);
				}
				break;
			
			case 4:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_758(uParam0, 14);
				}
				else if (func_452(uParam0, Global_86221))
				{
					func_758(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_758(uParam0, 11);
				}
				else if (func_756(uParam0))
				{
					func_758(uParam0, 15);
				}
				else if (func_755())
				{
					func_758(uParam0, 13);
				}
				else if (func_747(uParam0))
				{
					func_758(uParam0, 10);
				}
				else if (func_753(uParam0))
				{
					func_758(uParam0, 8);
				}
				else if (func_751(uParam0))
				{
					func_758(uParam0, 6);
				}
				else if (func_750(uParam0, 0))
				{
					func_758(uParam0, 5);
				}
				else if (func_749(uParam0))
				{
					func_758(uParam0, 7);
				}
				else
				{
					func_746(uParam0);
				}
				break;
			
			case 7:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_758(uParam0, 14);
				}
				else if (func_452(uParam0, Global_86221))
				{
					func_758(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_758(uParam0, 11);
				}
				else if (func_756(uParam0))
				{
					func_758(uParam0, 15);
				}
				else if (func_755())
				{
					func_758(uParam0, 13);
				}
				else if (func_747(uParam0))
				{
					func_758(uParam0, 10);
				}
				else if (func_753(uParam0))
				{
					func_758(uParam0, 8);
				}
				else if (func_751(uParam0))
				{
					func_758(uParam0, 6);
				}
				else if (func_750(uParam0, 0))
				{
					func_758(uParam0, 5);
				}
				else if (!func_749(uParam0))
				{
					func_758(uParam0, 4);
				}
				else
				{
					func_743(uParam0);
				}
				break;
			
			case 5:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_758(uParam0, 14);
				}
				else if (func_452(uParam0, Global_86221))
				{
					func_758(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_758(uParam0, 11);
				}
				else if (func_756(uParam0))
				{
					func_758(uParam0, 15);
				}
				else if (func_755())
				{
					func_758(uParam0, 13);
				}
				else if (func_747(uParam0))
				{
					func_758(uParam0, 10);
				}
				else if (func_753(uParam0))
				{
					func_758(uParam0, 8);
				}
				else if (func_751(uParam0))
				{
					func_758(uParam0, 6);
				}
				else if (!func_750(uParam0, 1))
				{
					if (func_749(uParam0))
					{
						func_758(uParam0, 7);
					}
					else
					{
						func_758(uParam0, 4);
					}
				}
				else
				{
					func_741(uParam0);
				}
				break;
			
			case 6:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_758(uParam0, 14);
				}
				else if (func_452(uParam0, Global_86221))
				{
					func_758(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_758(uParam0, 11);
				}
				else if (func_756(uParam0))
				{
					func_758(uParam0, 15);
				}
				else if (func_755())
				{
					func_758(uParam0, 13);
				}
				else if (func_747(uParam0))
				{
					func_758(uParam0, 10);
				}
				else if (func_753(uParam0))
				{
					func_758(uParam0, 8);
				}
				else if (!func_751(uParam0))
				{
					if (func_750(uParam0, 0))
					{
						func_758(uParam0, 5);
					}
					else if (func_749(uParam0))
					{
						func_758(uParam0, 7);
					}
					else
					{
						func_758(uParam0, 4);
					}
				}
				else
				{
					func_740(uParam0);
				}
				break;
			
			case 8:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_758(uParam0, 14);
				}
				else if (func_452(uParam0, Global_86221))
				{
					func_758(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_758(uParam0, 11);
				}
				else if (func_756(uParam0))
				{
					func_758(uParam0, 15);
				}
				else if (func_755())
				{
					func_758(uParam0, 13);
				}
				else if (func_747(uParam0))
				{
					func_758(uParam0, 10);
				}
				else if (func_739(uParam0))
				{
					if (func_751(uParam0))
					{
						func_758(uParam0, 6);
					}
					else if (func_750(uParam0, 0))
					{
						func_758(uParam0, 5);
					}
					else if (func_749(uParam0))
					{
						func_758(uParam0, 7);
					}
					else
					{
						func_758(uParam0, 4);
					}
				}
				else
				{
					func_738(uParam0);
				}
				break;
			
			case 10:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_758(uParam0, 14);
				}
				else if (func_452(uParam0, Global_86221))
				{
					func_758(uParam0, 12);
				}
				else if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
				{
					func_758(uParam0, 11);
				}
				else if (func_756(uParam0))
				{
					func_758(uParam0, 15);
				}
				else if (func_755())
				{
					func_758(uParam0, 13);
				}
				else if (!func_747(uParam0))
				{
					if (func_753(uParam0))
					{
						func_758(uParam0, 8);
					}
					else if (func_751(uParam0))
					{
						func_758(uParam0, 6);
					}
					else if (func_750(uParam0, 0))
					{
						func_758(uParam0, 5);
					}
					else if (func_749(uParam0))
					{
						func_758(uParam0, 7);
					}
					else
					{
						func_758(uParam0, 4);
					}
				}
				else
				{
					func_736(uParam0);
				}
				break;
			
			case 11:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_758(uParam0, 14);
				}
				else if (func_452(uParam0, Global_86221))
				{
					func_758(uParam0, 12);
				}
				else if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, 1, 1);
					WEAPON::SET_PED_INFINITE_AMMO(uParam0->f_3, 0, 0);
					if (func_756(uParam0))
					{
						func_758(uParam0, 15);
					}
					else if (func_755())
					{
						func_758(uParam0, 13);
					}
					else if (func_747(uParam0))
					{
						func_758(uParam0, 10);
					}
					else if (func_753(uParam0))
					{
						func_758(uParam0, 8);
					}
					else if (func_751(uParam0))
					{
						func_758(uParam0, 6);
					}
					else if (func_750(uParam0, 0))
					{
						func_758(uParam0, 5);
					}
					else if (func_749(uParam0))
					{
						func_758(uParam0, 7);
					}
					else
					{
						func_758(uParam0, 4);
					}
				}
				else
				{
					uParam0->f_2 = 0;
					uParam0->f_19 = 0;
				}
				break;
			
			case 12:
				if (PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_758(uParam0, 14);
				}
				else if (!func_452(uParam0, Global_86221))
				{
					if (*uParam0 == iVar0)
					{
						func_758(uParam0, 11);
					}
					else
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, 1, 1);
						if (func_756(uParam0))
						{
							func_758(uParam0, 15);
						}
						else if (func_755())
						{
							func_758(uParam0, 13);
						}
						else if (func_747(uParam0))
						{
							func_758(uParam0, 10);
						}
						else if (func_753(uParam0))
						{
							func_758(uParam0, 8);
						}
						else if (func_751(uParam0))
						{
							func_758(uParam0, 6);
						}
						else if (func_750(uParam0, 0))
						{
							func_758(uParam0, 5);
						}
						else if (func_749(uParam0))
						{
							func_758(uParam0, 7);
						}
						else
						{
							func_758(uParam0, 4);
						}
					}
				}
				else
				{
					uParam0->f_19 = 0;
					uParam0->f_2 = 0;
				}
				break;
			
			case 13:
				MISC::CLEAR_BIT(&Global_86220, *uParam0);
				MISC::CLEAR_BIT(&Global_86221, *uParam0);
				if (uParam0->f_2)
				{
					if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							if ((PED::IS_PED_ON_FOOT(uParam0->f_3) && !ENTITY::IS_ENTITY_IN_AIR(uParam0->f_3)) && !PED::IS_PED_RAGDOLL(uParam0->f_3))
							{
								if (func_768())
								{
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_3, GlobalFunc_468()))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_3);
									}
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
									ENTITY::SET_ENTITY_PROOFS(uParam0->f_3, 1, 1, 1, 1, 1, 0, 0, 0);
									PED::SET_PED_KEEP_TASK(uParam0->f_3, 1);
									TASK::CLEAR_PED_TASKS(uParam0->f_3);
									TASK::OPEN_SEQUENCE_TASK(&uVar1);
									TASK::TASK_PLAY_ANIM(0, "random@arrests", "idle_2_hands_up", 4f, -4f, -1, 8, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, "random@arrests", "kneeling_arrest_idle", 4f, -4f, -1, 9, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uVar1);
									TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar1);
									TASK::CLEAR_SEQUENCE_TASK(&uVar1);
									uParam0->f_2 = 0;
								}
							}
						}
					}
				}
				break;
			}
	}
	func_733(uParam0);
}

void func_733(var uParam0)//Position - 0x6A280
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if ((((uParam0->f_1 >= 14 || uParam0->f_1 == 1) || uParam0->f_1 == 2) || PED::IS_PED_INJURED(uParam0->f_3)) || uParam0->f_3 == PLAYER::PLAYER_PED_ID())
	{
		bVar0 = false;
	}
	else if (uParam0->f_1 == 3)
	{
		bVar0 = true;
	}
	else if (uParam0->f_1 == 7 && PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
	{
		bVar0 = true;
	}
	else if (uParam0->f_1 == 8)
	{
		bVar0 = true;
	}
	else if (uParam0->f_20 == 0)
	{
		bVar0 = false;
		if (func_470(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 100f))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
		if (func_484(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 25f) && (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_3) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), 0))))
		{
			bVar0 = false;
		}
	}
	iVar1 = 0;
	if (bVar0)
	{
		if (!func_452(uParam0, Global_86220))
		{
			iVar1 = 1;
		}
		else if (uParam0->f_1 == 3)
		{
			iVar1 = 1;
		}
		else if (uParam0->f_1 == 7 && PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
		{
			iVar1 = 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
		{
			iVar1 = 2;
		}
		else
		{
			iVar1 = 3;
		}
	}
	if (uParam0->f_20 != iVar1)
	{
		GlobalFunc_846(&(uParam0->f_4));
		uParam0->f_20 = 0;
		switch (iVar1)
		{
			case 1:
				uParam0->f_4 = GlobalFunc_5739(uParam0->f_3, 1, 1, 5);
				if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
				{
					if (*uParam0 == 0)
					{
						HUD::SET_BLIP_SPRITE(uParam0->f_4, 78);
					}
					else if (*uParam0 == 1)
					{
						HUD::SET_BLIP_SPRITE(uParam0->f_4, 88);
					}
					else if (*uParam0 == 2)
					{
						HUD::SET_BLIP_SPRITE(uParam0->f_4, 79);
					}
					HUD::SET_BLIP_COLOUR(uParam0->f_4, 3);
				}
				uParam0->f_20 = 1;
				break;
			
			case 2:
				uParam0->f_4 = GlobalFunc_5740(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), 1, 5);
				uParam0->f_20 = 2;
				break;
			
			case 3:
				uParam0->f_4 = GlobalFunc_5739(uParam0->f_3, 1, 1, 5);
				uParam0->f_20 = 3;
				break;
			}
	}
}



void func_736(var uParam0)//Position - 0x6A525
{
	if (uParam0->f_2)
	{
		func_737(uParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		uParam0->f_2 = 0;
	}
	if (PED::IS_PED_GROUP_MEMBER(uParam0->f_3, GlobalFunc_468()))
	{
		PED::REMOVE_PED_FROM_GROUP(uParam0->f_3);
	}
}

void func_737(var uParam0)//Position - 0x6A567
{
	if (GlobalFunc_4924(uParam0->f_3))
	{
		PED::SET_GROUP_SEPARATION_RANGE(GlobalFunc_468(), 100f);
		if (GlobalFunc_2018(5))
		{
			PED::SET_GROUP_FORMATION(GlobalFunc_468(), 1);
			PED::SET_GROUP_FORMATION_SPACING(GlobalFunc_468(), 4f, -1082130432, -1082130432);
		}
		else if (GlobalFunc_2018(14))
		{
			PED::SET_GROUP_FORMATION(GlobalFunc_468(), 0);
			PED::SET_GROUP_FORMATION_SPACING(GlobalFunc_468(), 2f, -1082130432, -1082130432);
		}
		else
		{
			PED::SET_GROUP_FORMATION(GlobalFunc_468(), 0);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, 1862763509);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uParam0->f_3, 1);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(uParam0->f_3, 1);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(uParam0->f_3, 1);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(uParam0->f_3, 1);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uParam0->f_3, 1);
		PED::SET_PED_DIES_INSTANTLY_IN_WATER(uParam0->f_3, 0);
		PED::SET_PED_DIES_IN_WATER(uParam0->f_3, 0);
		if (GlobalFunc_2018(6))
		{
			PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 1);
		}
		else
		{
			PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 2);
		}
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 13, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 5, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 23, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 30, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 46, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 4, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 2, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 3, 0);
		PED::SET_PED_COMBAT_ABILITY(uParam0->f_3, 2);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 512, 1);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(uParam0->f_3, 0);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uParam0->f_3, 1);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 107, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 182, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 206, GlobalFunc_2018(11));
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_3, 0);
		AUDIO::STOP_PED_SPEAKING(uParam0->f_3, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_3, 1);
	}
}

void func_738(var uParam0)//Position - 0x6A717
{
	if (uParam0->f_2)
	{
		func_737(uParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		uParam0->f_2 = 0;
	}
	if (!GlobalFunc_6964(uParam0->f_3, 1226945658))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		TASK::TASK_PARACHUTE_TO_TARGET(uParam0->f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		uParam0->f_24 = MISC::GET_GAME_TIMER() + 1000;
	}
	else if (uParam0->f_24 < MISC::GET_GAME_TIMER())
	{
		TASK::SET_PARACHUTE_TASK_TARGET(uParam0->f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		uParam0->f_24 = MISC::GET_GAME_TIMER() + 1000;
	}
	if (PED::GET_PED_PARACHUTE_STATE(uParam0->f_3) == 0)
	{
		PED::FORCE_PED_TO_OPEN_PARACHUTE(uParam0->f_3);
	}
}

int func_739(var uParam0)//Position - 0x6A7B5
{
	if (!ENTITY::IS_ENTITY_IN_AIR(uParam0->f_3))
	{
		if (PED::GET_PED_PARACHUTE_STATE(uParam0->f_3) != 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_740(var uParam0)//Position - 0x6A7DA
{
	int iVar0;
	char[] cVar1[8];
	char* sVar5;
	var uVar9;
	int iVar10;
	int iVar11;
	
	if (uParam0->f_2)
	{
		func_737(uParam0);
		if (PED::IS_PED_IN_GROUP(uParam0->f_3))
		{
			PED::REMOVE_PED_FROM_GROUP(uParam0->f_3);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if (GlobalFunc_2018(8))
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam0->f_3, -2145.486f, 3018.294f, 31.81f, 10f, 0, 0);
			uParam0->f_25 = 1;
		}
		else
		{
			PED::REMOVE_PED_DEFENSIVE_AREA(uParam0->f_3, 0);
			uParam0->f_25 = 0;
		}
		uParam0->f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 1000));
		uParam0->f_24 = 0;
		uParam0->f_2 = 0;
	}
	if (GlobalFunc_2018(8) != uParam0->f_25)
	{
		uParam0->f_2 = 1;
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && !func_442())
	{
		if (uParam0->f_19)
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_VEHICLE(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) || (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_FOOT(uParam0->f_3)))
			{
				iVar0 = GlobalFunc_8315();
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111()) && func_128(iVar0, *uParam0, 51, &cVar1, &sVar5))
				{
					func_131(&(Local_78.f_259), *uParam0, uParam0->f_3, 1);
					func_131(&(Local_78.f_259), iVar0, PLAYER::PLAYER_PED_ID(), 1);
					if (GlobalFunc_10618(&(Local_78.f_259), &cVar1, &sVar5, 4, 0, 0, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 3500, 0, 2);
						uParam0->f_19 = 0;
					}
				}
				else if (func_457(*uParam0, 51, &sVar5))
				{
					GlobalFunc_5117(uParam0->f_3, &sVar5, func_134(*uParam0), 4);
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 3500, 0, 2);
					uParam0->f_19 = 0;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
		{
			uVar9 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0);
			if (ENTITY::GET_ENTITY_SPEED(uVar9) > 3f)
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_3);
				VEHICLE::BRING_VEHICLE_TO_HALT(iVar9, 0.5f, 10, 0);
			}
			else if (!GlobalFunc_6964(uParam0->f_3, -828834893))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_3);
				TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 257);
			}
		}
		else if (uParam0->f_23 < MISC::GET_GAME_TIMER())
		{
			if (!GlobalFunc_6964(uParam0->f_3, -1442466670))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_3);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uParam0->f_3, 60f, 0);
			}
		}
		if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_3, &iVar10, 1);
			if (iVar10 == joaat("weapon_unarmed") || WEAPON::GET_AMMO_IN_PED_WEAPON(uParam0->f_3, iVar10) == 0)
			{
				iVar11 = WEAPON::GET_BEST_PED_WEAPON(uParam0->f_3, 0);
				if (iVar11 != joaat("weapon_unarmed"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_3, iVar11, 1);
				}
			}
		}
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::GET_PED_STEALTH_MOVEMENT(uParam0->f_3))
			{
				if (uParam0->f_24 == 0)
				{
					uParam0->f_24 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 1200));
				}
				else if (uParam0->f_24 < MISC::GET_GAME_TIMER())
				{
					PED::SET_PED_STEALTH_MOVEMENT(uParam0->f_3, 1, 0);
					uParam0->f_24 = 0;
				}
			}
			else
			{
				uParam0->f_24 = 0;
			}
		}
		else if (PED::GET_PED_STEALTH_MOVEMENT(uParam0->f_3))
		{
			if (uParam0->f_24 == 0)
			{
				uParam0->f_24 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 1200));
			}
			else if (uParam0->f_24 < MISC::GET_GAME_TIMER())
			{
				PED::SET_PED_STEALTH_MOVEMENT(uParam0->f_3, 0, 0);
				uParam0->f_24 = 0;
			}
		}
		else
		{
			uParam0->f_24 = 0;
		}
	}
}

void func_741(var uParam0)//Position - 0x6AB13
{
	int iVar0;
	char[] cVar1[8];
	char* sVar5;
	int iVar9;
	int iVar10;
	
	if (uParam0->f_2)
	{
		func_737(uParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 0);
		PED::REGISTER_HATED_TARGETS_AROUND_PED(uParam0->f_3, 100f);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if (GlobalFunc_2018(5))
		{
			PED::SET_GROUP_FORMATION(GlobalFunc_468(), 1);
			PED::SET_GROUP_FORMATION_SPACING(GlobalFunc_468(), 4f, -1082130432, -1082130432);
		}
		else
		{
			PED::SET_GROUP_FORMATION(GlobalFunc_468(), 0);
		}
		uParam0->f_24 = 0;
		uParam0->f_2 = 0;
	}
	if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_3, GlobalFunc_468()))
	{
		PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_3, GlobalFunc_468());
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && !func_442())
	{
		if (uParam0->f_19)
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_VEHICLE(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) || (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_FOOT(uParam0->f_3)))
			{
				iVar0 = GlobalFunc_8315();
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111()) && func_128(iVar0, *uParam0, 51, &cVar1, &sVar5))
				{
					func_131(&(Local_78.f_259), *uParam0, uParam0->f_3, 1);
					func_131(&(Local_78.f_259), iVar0, PLAYER::PLAYER_PED_ID(), 1);
					if (GlobalFunc_10618(&(Local_78.f_259), &cVar1, &sVar5, 4, 0, 0, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 3500, 0, 2);
						uParam0->f_19 = 0;
					}
				}
				else if (func_457(*uParam0, 51, &sVar5))
				{
					GlobalFunc_5117(uParam0->f_3, &sVar5, func_134(*uParam0), 4);
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 3500, 0, 2);
					uParam0->f_19 = 0;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0) && !VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), 0))
		{
			if (!GlobalFunc_6964(uParam0->f_3, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 0);
			}
		}
		else if ((((!GlobalFunc_2018(13) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_3)) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0))) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), -1) == uParam0->f_3) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
		{
			if (!GlobalFunc_6964(uParam0->f_3, -258271821))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), 60f, 786468);
			}
		}
		else if (GlobalFunc_6964(uParam0->f_3, -258271821) || GlobalFunc_6964(uParam0->f_3, -828834893))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
		}
		if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_3, &iVar9, 1);
			if (iVar9 == joaat("weapon_unarmed") || WEAPON::GET_AMMO_IN_PED_WEAPON(uParam0->f_3, iVar9) == 0)
			{
				iVar10 = WEAPON::GET_BEST_PED_WEAPON(uParam0->f_3, 0);
				if (iVar10 != joaat("weapon_unarmed"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_3, iVar10, 1);
				}
			}
		}
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::GET_PED_STEALTH_MOVEMENT(uParam0->f_3))
			{
				if (uParam0->f_24 == 0)
				{
					uParam0->f_24 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 1200));
				}
				else if (uParam0->f_24 < MISC::GET_GAME_TIMER())
				{
					PED::SET_PED_STEALTH_MOVEMENT(uParam0->f_3, 1, 0);
					uParam0->f_24 = 0;
				}
			}
			else
			{
				uParam0->f_24 = 0;
			}
		}
		else if (PED::GET_PED_STEALTH_MOVEMENT(uParam0->f_3))
		{
			if (uParam0->f_24 == 0)
			{
				uParam0->f_24 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 1200));
			}
			else if (uParam0->f_24 < MISC::GET_GAME_TIMER())
			{
				PED::SET_PED_STEALTH_MOVEMENT(uParam0->f_3, 0, 0);
				uParam0->f_24 = 0;
			}
		}
		else
		{
			uParam0->f_24 = 0;
		}
	}
}


void func_743(var uParam0)//Position - 0x6AE9A
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	if (uParam0->f_2)
	{
		func_737(uParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		uParam0->f_22 = GlobalFunc_8315();
		uParam0->f_21 = 0;
		uParam0->f_2 = 0;
	}
	fVar0 = GlobalFunc_156(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 1);
	iVar1 = 524288 | 512 | 256 | 32 | 2 | 4 | 8 | 16;
	fVar2 = 25f;
	if (GlobalFunc_2018(10) && fVar0 > 50f)
	{
		fVar2 = 40f;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
	{
		if (func_744(uParam0))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_5, 0))
			{
				if (GlobalFunc_156(uParam0->f_3, uParam0->f_5, 1) > 30f)
				{
					if (!GlobalFunc_6964(uParam0->f_3, 1227113341))
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_3);
						TASK::TASK_GO_TO_ENTITY(uParam0->f_3, uParam0->f_5, -1, 0.5f, 1073741824, 1073741824, 0);
					}
				}
				else if (!GlobalFunc_6964(uParam0->f_3, -1794415470))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_3);
					TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_5, -1, -1, 1073741824, 1, 0);
				}
			}
		}
		else if (!GlobalFunc_6964(uParam0->f_3, 1227113341))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_GO_TO_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 5f, 1073741824, 1073741824, 0);
		}
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), 0))
	{
		if (!GlobalFunc_6964(uParam0->f_3, -828834893))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 0);
		}
	}
	else
	{
		if (!GlobalFunc_6964(uParam0->f_3, -1273030092))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), PLAYER::PLAYER_PED_ID(), 7, fVar2, iVar1, 2f, 20f, 1);
		}
		TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(uParam0->f_3, fVar2);
		TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_3, fVar2);
	}
}

int func_744(var uParam0)//Position - 0x6B082
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_5, 0))
	{
		iVar11 = PED::GET_PED_NEARBY_VEHICLES(uParam0->f_3, &iVar0);
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0[iVar12], 0))
			{
				iVar0[iVar12] = 0;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0[iVar12], -1)))
			{
				iVar0[iVar12] = 0;
			}
			else
			{
				Var13 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var16 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1) };
				Var19 = { ENTITY::GET_ENTITY_COORDS(iVar0[iVar12], 1) };
				if (SYSTEM::VDIST2(Var16, Var19) > (70f * 70f) || SYSTEM::VDIST2(Var13, Var19) > ((200f - 30f) * (200f - 30f)))
				{
					iVar0[iVar12] = 0;
				}
			}
			iVar12++;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			if (iVar0[iVar12] != 0)
			{
				if (!func_398(ENTITY::GET_ENTITY_MODEL(iVar0[iVar12])))
				{
					uParam0->f_5 = iVar0[iVar12];
					return 1;
				}
			}
			iVar12++;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			if (iVar0[iVar12] != 0)
			{
				uParam0->f_5 = iVar0[iVar12];
				return 1;
			}
			iVar12++;
		}
		return 0;
	}
	return 1;
}


void func_746(var uParam0)//Position - 0x6B22F
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (uParam0->f_2 || uParam0->f_22 != GlobalFunc_8315())
	{
		func_737(uParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		uParam0->f_22 = GlobalFunc_8315();
		uParam0->f_21 = 0;
		uParam0->f_2 = 0;
	}
	fVar0 = GlobalFunc_156(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 1);
	iVar1 = 524288 | 512 | 256 | 32 | 2 | 4 | 8 | 16;
	iVar2 = 524288 | 512 | 256 | 32 | 2 | 1;
	fVar3 = 25f;
	if (GlobalFunc_2018(10))
	{
		fVar3 = 40f;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
	{
		if (!GlobalFunc_6964(uParam0->f_3, 1227113341))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_GO_TO_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 5f, 1073741824, 1073741824, 0);
		}
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), 0))
	{
		if (!GlobalFunc_6964(uParam0->f_3, -828834893))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 0);
		}
	}
	else if (fVar0 > 30f)
	{
		if (!GlobalFunc_6964(uParam0->f_3, -1273030092) || uParam0->f_21 == 1)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), PLAYER::PLAYER_PED_ID(), 4, fVar3, iVar1, 10f, 15f, 1);
		}
		uParam0->f_21 = 0;
	}
	else if (fVar0 > 12f && ENTITY::GET_ENTITY_SPEED(uParam0->f_3) > 1f)
	{
		if (!GlobalFunc_6964(uParam0->f_3, -1273030092) || uParam0->f_21 == 0)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), PLAYER::PLAYER_PED_ID(), 4, 10f, iVar2, 10f, 15f, 1);
		}
		uParam0->f_21 = 1;
	}
	else if (fVar0 > 12f)
	{
		if (!GlobalFunc_6964(uParam0->f_3, -828834893) || uParam0->f_21 == 0)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 0);
		}
		uParam0->f_21 = 1;
	}
	else
	{
		if (!GlobalFunc_6964(uParam0->f_3, -828834893) || uParam0->f_21 == 0)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 0);
		}
		uParam0->f_21 = 1;
	}
}

int func_747(var uParam0)//Position - 0x6B488
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
			if (GlobalFunc_4924(iVar1))
			{
				iVar2 = GlobalFunc_8315();
				iVar3 = 0;
				while (iVar3 < 3)
				{
					if (iVar3 != iVar2 && iVar3 != *uParam0)
					{
						if (Local_78.f_162[iVar3 /*28*/].f_3 == iVar1)
						{
							return 1;
						}
					}
					iVar3++;
				}
			}
		}
	}
	return 0;
}

void func_748(var uParam0)//Position - 0x6B502
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	
	if (uParam0->f_2)
	{
		func_737(uParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		uParam0->f_14 = 0;
		uParam0->f_15 = MISC::GET_GAME_TIMER() + 1000;
		uParam0->f_16 = 0;
		uParam0->f_2 = 0;
	}
	fVar0 = GlobalFunc_156(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 1);
	fVar1 = GlobalFunc_713(uParam0->f_3, uParam0->f_11, 1);
	iVar2 = 524288 | 512 | 256 | 32 | 2;
	iVar3 = iVar2 | 8 | 4 | 16;
	iVar4 = iVar2 | 8;
	iVar5 = iVar2 | 8 | 1;
	fVar6 = 20f;
	if (GlobalFunc_2018(10))
	{
		fVar6 = 40f;
	}
	iVar7 = 0;
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_3) > 1f)
	{
		uParam0->f_15 = MISC::GET_GAME_TIMER() + 2000;
	}
	else if (uParam0->f_15 < MISC::GET_GAME_TIMER())
	{
		iVar7 = 1;
	}
	if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), 0) || fVar0 < 12f) || ((fVar0 < 20f && fVar1 < 10f) && iVar7))
	{
		if (!GlobalFunc_6964(uParam0->f_3, -828834893) || uParam0->f_14 != 0)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_3, 0, 0);
			uParam0->f_14 = 0;
		}
	}
	else if (fVar1 < 2f)
	{
		if (!GlobalFunc_6964(uParam0->f_3, -1273030092) || uParam0->f_14 != 1)
		{
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), uParam0->f_11, 5, 0f, iVar4, 2f, 20f, 1);
			uParam0->f_14 = 1;
		}
	}
	else if (fVar1 < 7f)
	{
		if (!GlobalFunc_6964(uParam0->f_3, -1273030092) || uParam0->f_14 != 2)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), uParam0->f_11, 4, 10f, iVar5, 2f, 20f, 1);
			uParam0->f_14 = 2;
		}
	}
	else if (fVar0 < 30f || fVar1 < 40f)
	{
		if (!GlobalFunc_6964(uParam0->f_3, -1273030092) || uParam0->f_14 != 3)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), uParam0->f_11, 4, 10f, iVar4, 2f, 20f, 1);
			uParam0->f_14 = 3;
		}
	}
	else if (!GlobalFunc_6964(uParam0->f_3, -1273030092) || uParam0->f_14 != 4)
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), uParam0->f_11, 4, fVar6, iVar3, 10f, 15f, 1);
		uParam0->f_14 = 4;
	}
	if (uParam0->f_16 >= 0)
	{
		if (uParam0->f_16 == 0)
		{
			if ((PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_3) && !PED::IS_PED_ON_ANY_BIKE(uParam0->f_3)) && ((fVar1 < 2f && iVar7) && fVar0 > 20f))
			{
				AUDIO::_0x9D3AF56E94C9AE98(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), 50f);
				uParam0->f_16 = MISC::GET_GAME_TIMER() + 500;
			}
		}
		else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_3) || PED::IS_PED_ON_ANY_BIKE(uParam0->f_3))
		{
			uParam0->f_16 = -1;
		}
		else if (uParam0->f_16 < MISC::GET_GAME_TIMER())
		{
			AUDIO::_0x9D3AF56E94C9AE98(PED::GET_VEHICLE_PED_IS_IN(uParam0->f_3, 0), 500f);
			uParam0->f_16 = -1;
		}
	}
}

int func_749(var uParam0)//Position - 0x6B85C
{
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_VEHICLE(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && !GlobalFunc_4273(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
	{
		return 1;
	}
	if (GlobalFunc_2018(9))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_750(var uParam0, bool bParam1)//Position - 0x6B8DD
{
	float fVar0;
	
	fVar0 = 25f;
	if (bParam1)
	{
		fVar0 = 100f;
		if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_3, GlobalFunc_468()))
		{
			return 0;
		}
	}
	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_3, fVar0, fVar0, 3f, 0, 1, 0))
	{
		if (!func_749(uParam0))
		{
			if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_3, GlobalFunc_468()))
			{
				PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_3, GlobalFunc_468());
			}
			if (PED::IS_PED_GROUP_MEMBER(uParam0->f_3, GlobalFunc_468()))
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_IN_GROUP(uParam0->f_3))
	{
		PED::REMOVE_PED_FROM_GROUP(uParam0->f_3);
	}
	return 0;
}

int func_751(var uParam0)//Position - 0x6B970
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_2018(8))
		{
			return 1;
		}
	}
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) || (GlobalFunc_2018(9) && (uParam0->f_1 == 7 || uParam0->f_1 == 6)))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 100f, 100f, 50f, 0, 1, 0))
		{
			if (func_752(uParam0, 100f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_752(var uParam0, float fParam1)//Position - 0x6B9F2
{
	var uVar0[25];
	int iVar26;
	int iVar27;
	int iVar28;
	
	iVar26 = PED::GET_PED_NEARBY_PEDS(uParam0->f_3, &uVar0, -1);
	iVar27 = 0;
	while (iVar27 < iVar26)
	{
		if (GlobalFunc_4924(uVar0[iVar27]))
		{
			iVar28 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uVar0[iVar27]);
			if (iVar28 != -86095805)
			{
				if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(1862763509, iVar28) == 5)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(uVar0[iVar27], uParam0->f_3, fParam1, fParam1, fParam1, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
		iVar27++;
	}
	return 0;
}

int func_753(var uParam0)//Position - 0x6BA71
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
			{
				if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_3) > 50f)
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_3, joaat("gadget_parachute"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_754(var uParam0)//Position - 0x6BAE0
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_5, 0) || !PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_5, 0))
	{
		return 1;
	}
	return 0;
}

int func_755()//Position - 0x6BB0E
{
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

int func_756(var uParam0)//Position - 0x6BB27
{
	if (MISC::IS_BIT_SET(Global_86220, *uParam0))
	{
		if (uParam0->f_1 == 8 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return func_470(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 200f);
		}
		else
		{
			return GlobalFunc_156(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 1) > 200f;
		}
	}
	return 0;
}

int func_757(var uParam0)//Position - 0x6BB85
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = GlobalFunc_4917(*uParam0);
	STREAMING::REQUEST_MODEL(iVar0);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var1, 0, &Var4, 0))
		{
			if (SYSTEM::VDIST(Var1, Var4) < 25f)
			{
				if (func_699(&(uParam0->f_3), *uParam0, Var4, 0f, 1, 0, 0))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_3, joaat("weapon_pistol"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_3, joaat("weapon_pistol"), (WEAPON::GET_WEAPON_CLIP_SIZE(joaat("weapon_pistol")) * MISC::GET_RANDOM_INT_IN_RANGE(6, 10)), 0, 1);
						GlobalFunc_7904(uParam0->f_3, 0);
					}
					uParam0->f_19 = 0;
					uParam0->f_5 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_758(var uParam0, int iParam1)//Position - 0x6BC36
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = 1;
}

void func_759(var uParam0)//Position - 0x6BC49
{
	float fVar0;
	
	if (GlobalFunc_4924(uParam0->f_3))
	{
		if (ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_3) < SYSTEM::FLOOR(400f))
		{
			fVar0 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(uParam0->f_3)) * (400f / 200f));
			ENTITY::SET_ENTITY_MAX_HEALTH(uParam0->f_3, SYSTEM::FLOOR(400f));
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_3, SYSTEM::FLOOR(fVar0));
		}
	}
}

void func_760(var uParam0)//Position - 0x6BCA9
{
	var uVar0;
	
	uVar0 = WEAPON::GET_BEST_PED_WEAPON(uParam0->f_3, 0);
	WEAPON::SET_PED_INFINITE_AMMO(uParam0->f_3, 1, 0);
	WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_3, uVar0, 1);
}

int func_761(var uParam0)//Position - 0x6BCD1
{
	struct<58> Var0;
	int iVar74;
	int iVar75;
	struct<3> Var76;
	bool bVar79;
	struct<3> Var80;
	var uVar83;
	int iVar86;
	struct<3> Var87;
	struct<3> Var90;
	struct<3> Var93;
	float fVar96;
	var uVar97;
	
	Var0.f_11 = 12;
	Var0.f_31 = 25;
	Var0.f_57 = 2;
	GlobalFunc_97(*uParam0, &Var0, uParam0->f_6);
	iVar74 = GlobalFunc_4917(*uParam0);
	iVar75 = Var0;
	if (iVar75 == 0)
	{
		iVar75 = joaat("asea");
	}
	STREAMING::REQUEST_MODEL(iVar74);
	STREAMING::REQUEST_MODEL(iVar75);
	if (STREAMING::HAS_MODEL_LOADED(iVar75) && STREAMING::HAS_MODEL_LOADED(iVar74))
	{
		Var76 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		bVar79 = GlobalFunc_2018(0);
		if (bVar79)
		{
		}
		if (VEHICLE::_0xA4822F1CF23F4810(&Var76, &Var80, &uVar83, 0f, 180f, 300f, bVar79, 1, 1))
		{
			if (GlobalFunc_2018(1))
			{
				iVar86 = GlobalFunc_877(Var76, 3, 0, 0);
				if (iVar86 != GlobalFunc_877(Var80, 3, 0, 0))
				{
					if (!VEHICLE::_0xA4822F1CF23F4810(&(uParam0->f_11), &Var80, &uVar83, 0f, 180f, 300f, bVar79, 1, 1))
					{
						return 0;
					}
					else if (SYSTEM::VDIST2(Var76, Var80) < (300f * 300f))
					{
						return 0;
					}
					else if (iVar86 != GlobalFunc_877(Var80, 3, 0, 0))
					{
						return 0;
					}
				}
			}
			if (GlobalFunc_2018(2))
			{
				if (uParam0->f_26 < 60)
				{
					if (func_762(Var80, 890f, -3365f, 0f, 1312f, -2888f, 0f))
					{
						return 0;
					}
				}
			}
			if (uParam0->f_26 < 30)
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(iVar75, Var80, 1))
				{
					return 0;
				}
			}
			MISC::CLEAR_AREA_OF_VEHICLES(Var80, 10f, 0, 0, 0, 0, 0);
			Var87 = { Var80 - Vector(3f, 3f, 3f) };
			Var90 = { Var80 + Vector(3f, 3f, 3f) };
			if (MISC::IS_AREA_OCCUPIED(Var87, Var90, 0, 1, 0, 0, 0, 0, 0))
			{
				return 0;
			}
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var80, 1, &Var93, &fVar96, &uVar97, 1, 1077936128, 0);
			Var93 = { Var80 };
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if (func_671(&(uParam0->f_5), *uParam0, Var93, fVar96, 1, uParam0->f_6))
				{
					if (GlobalFunc_880(ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_5), Var93 - Var76) > 0f)
					{
						ENTITY::SET_ENTITY_HEADING(uParam0->f_5, (fVar96 + 180f));
					}
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_5, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_5, 1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if (func_504(&(uParam0->f_3), *uParam0, uParam0->f_5, -1, 1, 0, 0))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_3, joaat("weapon_pistol"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_3, joaat("weapon_pistol"), (WEAPON::GET_WEAPON_CLIP_SIZE(joaat("weapon_pistol")) * MISC::GET_RANDOM_INT_IN_RANGE(6, 10)), 0, 1);
						GlobalFunc_7904(uParam0->f_3, 0);
					}
					uParam0->f_19 = 1;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_762(struct<2> Param0, var uParam2, struct<2> Param3, float fParam5, struct<2> Param6, float fParam8)//Position - 0x6BF6F
{
	if (((Param3 <= Param0 && Param0 <= Param6) && Param3.f_1 <= Param0.f_1) && Param0.f_1 <= Param6.f_1)
	{
		return 1;
	}
	return 0;
}


Vector3 func_764(struct<3> Param0, struct<3> Param3)//Position - 0x6CD03
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	bVar0 = PATHFIND::_GET_POINT_ON_ROAD_SIDE(Param3, 0, &Var2);
	bVar1 = PATHFIND::_GET_POINT_ON_ROAD_SIDE(Param3, 1, &Var5);
	if (bVar0)
	{
		Var2 = { Var2 + GlobalFunc_107(Param3 - Var2) * Vector(3.5f, 3.5f, 3.5f) };
	}
	if (bVar1)
	{
		Var5 = { Var5 + GlobalFunc_107(Param3 - Var5) * Vector(3.5f, 3.5f, 3.5f) };
	}
	if (bVar0 && bVar1)
	{
		if (SYSTEM::VDIST2(Param0, Var2) < SYSTEM::VDIST2(Param0, Var5))
		{
			return Var2;
		}
		else
		{
			return Var5;
		}
	}
	if (bVar0)
	{
		return Var2;
	}
	if (bVar1)
	{
		return Var5;
	}
	return Param3;
}

int func_765(struct<3> Param0, var uParam3)//Position - 0x6CDC7
{
	var uVar0;
	int iVar1;
	
	iVar1 = GlobalFunc_2018(3);
	uVar0 = func_766(Param0, uParam3, 4);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar0) && (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, *uParam3, 1) < 50f || iVar1))
	{
		return uVar0;
	}
	if (iVar1 == 0)
	{
		uVar0 = func_766(Param0, uParam3, 5);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar0))
		{
			return uVar0;
		}
	}
	*uParam3 = { Param0 };
	return 0;
}

int func_766(struct<3> Param0, var uParam3, int iParam4)//Position - 0x6CE3B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	iVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Param0, iVar0, iParam4, 1077936128, 0);
	while (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar1))
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 != 0 && Local_78.f_162[iVar2 /*28*/].f_10 == iVar1)
			{
				iVar1 = 0;
				iVar0++;
			}
			iVar2++;
		}
		if (iVar1 == 0)
		{
			iVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Param0, iVar0, iParam4, 1077936128, 0);
		}
		else
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar1, uParam3);
			return iVar1;
		}
	}
	return 0;
}

int func_767(var uParam0)//Position - 0x6CEC5
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	
	iVar12 = PED::GET_PED_NEARBY_PEDS(uParam0->f_3, &uVar0, -1);
	iVar11 = 0;
	while (iVar11 < iVar12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar0[iVar11]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uVar0[iVar11], uParam0->f_3, 1) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uVar0[iVar11], 0, 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uVar0[iVar11]);
				return 1;
			}
		}
		iVar11++;
	}
	return 0;
}

bool func_768()//Position - 0x6CF33
{
	STREAMING::REQUEST_ANIM_DICT("random@arrests");
	return STREAMING::HAS_ANIM_DICT_LOADED("random@arrests");
}

void func_769(var uParam0)//Position - 0x6CF4D
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (!MISC::IS_BIT_SET(Global_86220, iVar0))
	{
		MISC::SET_BIT(&Global_86220, iVar0);
		GlobalFunc_6877(&(uParam0->f_7));
	}
}

int func_770()//Position - 0x6CF7A
{
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FRIENDS", 5))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("FRIENDS", 5);
		return 0;
	}
	return 1;
}

void func_771(bool bParam0, int iParam1, bool bParam2)//Position - 0x6CFA2
{
	if (bParam0)
	{
	}
	if (bParam2)
	{
		if (func_773(&(Local_78.f_56)) && !func_462(&(Local_78.f_56)))
		{
			func_772(&(Local_78.f_56));
		}
		else
		{
			func_460(&(Local_78.f_56), bParam0, iParam1);
		}
	}
	else if (func_464(Local_78.f_56.f_1, Global_86215) || !func_403(&(Local_78.f_56)))
	{
		func_460(&(Local_78.f_56), bParam0, iParam1);
	}
	if (bParam2)
	{
		if (func_773(&(Local_78.f_109)) && !func_462(&(Local_78.f_109)))
		{
			func_772(&(Local_78.f_109));
		}
		else
		{
			func_460(&(Local_78.f_109), bParam0, iParam1);
		}
	}
	else if (func_464(Local_78.f_109.f_1, Global_86215) || !func_403(&(Local_78.f_109)))
	{
		func_460(&(Local_78.f_109), bParam0, iParam1);
	}
}

void func_772(var uParam0)//Position - 0x6D07E
{
	if (!PED::IS_PED_INJURED(uParam0->f_7))
	{
		TASK::TASK_PAUSE(uParam0->f_7, -1);
		uParam0->f_36 = 0;
		GlobalFunc_1057(uParam0, 4);
	}
}

int func_773(var uParam0)//Position - 0x6D0A7
{
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		return 1;
	}
	return 0;
}

void func_774()//Position - 0x6D0C6
{
	Local_78.f_1 = 7;
}

void func_775()//Position - 0x6D0D3
{
	func_777();
	func_776(0);
}

void func_776(int iParam0)//Position - 0x6D0E4
{
	if (Local_78.f_614 != iParam0)
	{
		Local_78.f_614 = iParam0;
		if (iParam0 == 1)
		{
		}
		else
		{
			if (Local_78.f_703 == 0 || Local_78.f_703 == 1)
			{
				func_421(&(Local_78.f_703));
			}
			Local_78.f_615 = -1;
		}
	}
}

void func_777()//Position - 0x6D12F
{
	func_778(Global_86214, Global_86215, 0);
}

void func_778(int iParam0, var uParam1, int iParam2)//Position - 0x6D144
{
	if (iParam0 == -1)
	{
	}
	else if (!MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_15, 15))
	{
	}
	else
	{
		Global_86216 = iParam0;
		Global_86217 = uParam1;
		if (iParam2 || !GlobalFunc_39(2))
		{
			GlobalFunc_5198(iParam0);
		}
	}
}



int func_781()//Position - 0x6D22F
{
	struct<74> Var0;
	
	Var0 = 2;
	Var0.f_19 = 2;
	Var0.f_53 = 3;
	Var0.f_63 = 3;
	Var0.f_73 = 3;
	func_814(Global_86193, &Var0);
	if (func_783(Global_86193, &Var0, &(Local_78.f_257), Local_78.f_56.f_7, Local_78.f_109.f_7, &(Local_78.f_259)))
	{
		GlobalFunc_484(Global_86193, 0);
		return 1;
	}
	return 0;
}


int func_783(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0x6D2BA
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	float fVar8;
	char* sVar9;
	char[] cVar13[8];
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	var uVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	struct<3> Var25;
	struct<3> Var28;
	
	if (uParam1->f_44 == 0)
	{
		if (*uParam2 > 0 && *uParam2 < 4)
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CLOCK::ADD_TO_CLOCK_TIME(iLocal_973, 0, 0);
				*uParam2 = 98;
				return 0;
			}
			else if (!CAM::IS_SCREEN_FADING_IN())
			{
				if (GlobalFunc_4926(1000))
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
			}
		}
		if (*uParam2 < 3)
		{
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", 0);
		}
	}
	if (*uParam2 != -1)
	{
		PLAYER::_0x5501B7A5CDB79D37(PLAYER::PLAYER_ID());
	}
	if (*uParam2 == 0)
	{
		if (func_812(5f))
		{
			func_145(uParam1->f_53[0 /*3*/], 1, 1, 0, 0, 0, 1, 1, 1, 1, 1);
			iLocal_958 = 0;
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(uParam1->f_46, uParam1->f_49, uParam1->f_52, 1, 0, 0, 0, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(uParam1->f_46, uParam1->f_49, uParam1->f_52, 0, 0, 1);
			func_811(uParam1, &Var0, &Var3);
			PATHFIND::SET_PED_PATHS_IN_AREA(Var0, Var3, 0, 0);
			MISC::CLEAR_AREA(Var0 + Var3 * Vector(0.5f, 0.5f, 0.5f), (SYSTEM::VDIST(Var3, Var0) * 0.5f), 1, 0, 0, 0);
			SYSTEM::SETTIMERA(0);
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(25, 35);
			iLocal_973 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_809(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iParam0, 0, 0, 0);
				if (GlobalFunc_4924(iParam3))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_53[0 /*3*/], 1, 0, 0, 1);
					GlobalFunc_2294(PLAYER::PLAYER_PED_ID(), uParam1->f_53[1 /*3*/]);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_53[1 /*3*/], 1f, -1, 0.25f, 1024, 1193033728);
					if (uParam1->f_44 && !GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam3, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
					ENTITY::SET_ENTITY_COORDS(iParam3, uParam1->f_63[0 /*3*/], 1, 0, 0, 1);
					GlobalFunc_2294(iParam3, uParam1->f_63[1 /*3*/]);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam3);
					PED::SET_PED_STEALTH_MOVEMENT(iParam3, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam3, joaat("weapon_unarmed"), 1);
					AUDIO::STOP_PED_SPEAKING(iParam3, 1);
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_63[1 /*3*/], 1f, -1, 0.25f, 0, 1193033728);
					if (uParam1->f_44 && !GlobalFunc_5459(iParam3))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(iParam3, uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
				}
				if (GlobalFunc_4924(iParam4))
				{
					ENTITY::SET_ENTITY_COORDS(iParam4, uParam1->f_73[0 /*3*/], 1, 0, 0, 1);
					GlobalFunc_2294(iParam4, uParam1->f_73[1 /*3*/]);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam4);
					PED::SET_PED_STEALTH_MOVEMENT(iParam4, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam4, joaat("weapon_unarmed"), 1);
					AUDIO::STOP_PED_SPEAKING(iParam4, 1);
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_73[1 /*3*/], 1f, -1, 0.25f, 0, 1193033728);
					if (uParam1->f_44 && !GlobalFunc_5459(iParam4))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(iParam4, uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
				}
				if (uParam1->f_44 == 0)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						func_808(PLAYER::PLAYER_PED_ID(), iParam0, iVar7);
					}
					if (!PED::IS_PED_INJURED(iParam3))
					{
						func_808(iParam3, iParam0, iVar7);
					}
					if (!PED::IS_PED_INJURED(iParam4))
					{
						func_808(iParam4, iParam0, iVar7);
					}
					func_807(iParam0);
				}
				iLocal_955[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
				CAM::SET_CAM_COORD(iLocal_955[0], *(uParam1[0 /*6*/]));
				CAM::SET_CAM_ROT(iLocal_955[0], (uParam1[0 /*6*/])->f_3, 2);
				CAM::SET_CAM_FOV(iLocal_955[0], uParam1->f_32);
				iLocal_955[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
				CAM::SET_CAM_COORD(iLocal_955[1], *(uParam1[1 /*6*/]));
				CAM::SET_CAM_ROT(iLocal_955[1], (uParam1[1 /*6*/])->f_3, 2);
				CAM::SET_CAM_FOV(iLocal_955[1], uParam1->f_32);
				fVar8 = uParam1->f_35;
				if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
				{
					fVar8 = uParam1->f_36;
				}
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_955[1], iLocal_955[0], SYSTEM::FLOOR((fVar8 * 1000f)), 1, 1);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			}
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			*uParam2++;
		}
	}
	else if (*uParam2 == 1)
	{
		if ((uParam1->f_44 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(iParam3))
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				iVar17 = GlobalFunc_8315();
				iVar18 = func_113(iParam3);
				if ((((Global_86195 == 1 && iVar17 == 1) && iVar18 == 0) && !GlobalFunc_5459(PLAYER::PLAYER_PED_ID())) && func_128(iVar17, iVar18, 56, &sVar9, &cVar13))
				{
					if (SYSTEM::TIMERA() > SYSTEM::FLOOR((uParam1->f_35 * 1000f)) || GlobalFunc_10618(uParam5, &sVar9, &cVar13, 4, 0, 0, 0))
					{
						*uParam2++;
					}
				}
				else
				{
					if (Global_86195 == 1)
					{
						Global_86195 = 0;
					}
					if ((!func_390(iVar17, iVar18, 7, Global_86195, GlobalFunc_5459(PLAYER::PLAYER_PED_ID()), &sVar9, &cVar13) || GlobalFunc_10618(uParam5, &sVar9, &cVar13, 4, 0, 0, 0)) || SYSTEM::TIMERA() > SYSTEM::FLOOR((uParam1->f_35 * 1000f)))
					{
						*uParam2++;
					}
				}
			}
		}
		else
		{
			*uParam2++;
		}
	}
	else if (*uParam2 == 2)
	{
		fVar19 = uParam1->f_35;
		if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()) && GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
		{
			fVar19 = uParam1->f_36;
		}
		if (SYSTEM::TIMERA() > SYSTEM::FLOOR((fVar19 * 1000f)))
		{
			if (uParam1->f_44)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					*uParam2 = 50;
				}
				else
				{
					func_806(iParam0);
					*uParam2 = 100;
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(iLocal_955[0]))
				{
					CAM::DESTROY_CAM(iLocal_955[0], 0);
				}
				iLocal_955[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
				CAM::SET_CAM_COORD(iLocal_955[0], uParam1->f_13);
				CAM::SET_CAM_ROT(iLocal_955[0], uParam1->f_13.f_3, 2);
				CAM::SET_CAM_FOV(iLocal_955[0], uParam1->f_33);
				CAM::SET_CAM_ACTIVE(iLocal_955[0], 1);
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				HUD::CLEAR_PRINTS();
				iVar20 = 55;
				if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_113(PLAYER::PLAYER_PED_ID()) == 2) || (!PED::IS_PED_INJURED(iParam3) && func_113(iParam3) == 2)) || (!PED::IS_PED_INJURED(iParam4) && func_113(iParam4) == 2))
				{
					iVar20 = 75;
				}
				iVar20 += 2;
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					if (!GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_5471(PLAYER::PLAYER_PED_ID(), iVar20 * 1000, 0);
					}
					else
					{
						func_262(PLAYER::PLAYER_PED_ID(), iVar20 * 1000);
					}
				}
				if (!PED::IS_PED_INJURED(iParam3))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam3);
					if (!GlobalFunc_5459(iParam3))
					{
						GlobalFunc_5471(iParam3, iVar20 * 1000, 0);
					}
					else
					{
						func_262(iParam3, iVar20 * 1000);
					}
				}
				if (GlobalFunc_4924(iParam4))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam4);
					if (!GlobalFunc_5459(iParam4))
					{
						GlobalFunc_5471(iParam4, iVar20 * 1000, 0);
					}
					else
					{
						func_262(iParam4, iVar20 * 1000);
					}
				}
				iLocal_958 = 1;
				SYSTEM::SETTIMERA(0);
				*uParam2++;
			}
		}
	}
	else if (*uParam2 == 3)
	{
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", 0))
		{
			Local_959.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(Local_959.f_4, uParam1->f_13, uParam1->f_13.f_3, 2500, 3, 2);
			CAM::ADD_CAM_SPLINE_NODE(Local_959.f_4, uParam1->f_13, uParam1->f_13.f_3, 2500, 3, 2);
			CAM::SET_CAM_FOV(Local_959.f_4, uParam1->f_33);
			CAM::SET_CAM_ACTIVE(Local_959.f_4, 1);
			Local_959 = GlobalFunc_8058();
			Local_959.f_1 = GlobalFunc_8058();
			func_803(&Local_959, 1, 0, 2000, 1, 1, 0, 1);
			iLocal_971 = ((CLOCK::GET_CLOCK_HOURS() + iLocal_973) % 24);
			iLocal_972 = CLOCK::GET_CLOCK_MINUTES();
			*uParam2++;
		}
	}
	else if (*uParam2 == 4)
	{
		if (func_787(iLocal_971, iLocal_972, "", "", &Local_959, -1082130432, 0, 1, 1065353216))
		{
			*uParam2++;
		}
	}
	else if (*uParam2 == 5)
	{
		SYSTEM::SETTIMERA(0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_53[1 /*3*/], 1, 0, 0, 1);
			GlobalFunc_2294(PLAYER::PLAYER_PED_ID(), uParam1->f_53[2 /*3*/]);
			TASK::OPEN_SEQUENCE_TASK(&uVar21);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_53[2 /*3*/], 1f, -1, 0.25f, 8192, 1193033728);
			TASK::CLOSE_SEQUENCE_TASK(uVar21);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar21);
			TASK::CLEAR_SEQUENCE_TASK(&uVar21);
			if (!PED::IS_PED_INJURED(iParam3))
			{
				ENTITY::SET_ENTITY_COORDS(iParam3, uParam1->f_63[1 /*3*/], 1, 0, 0, 1);
				GlobalFunc_2294(iParam3, uParam1->f_63[2 /*3*/]);
				if (PED::IS_PED_GROUP_MEMBER(iParam3, GlobalFunc_468()))
				{
					PED::REMOVE_PED_FROM_GROUP(iParam3);
				}
				TASK::OPEN_SEQUENCE_TASK(&uVar21);
				TASK::TASK_PAUSE(0, 250);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_63[2 /*3*/], 1f, -1, 0.25f, 8192, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar21);
				TASK::TASK_PERFORM_SEQUENCE(iParam3, uVar21);
				TASK::CLEAR_SEQUENCE_TASK(&uVar21);
			}
			if (GlobalFunc_4924(iParam4))
			{
				ENTITY::SET_ENTITY_COORDS(iParam4, uParam1->f_73[1 /*3*/], 1, 0, 0, 1);
				GlobalFunc_2294(iParam4, uParam1->f_73[2 /*3*/]);
				if (PED::IS_PED_GROUP_MEMBER(iParam4, GlobalFunc_468()))
				{
					PED::REMOVE_PED_FROM_GROUP(iParam4);
				}
				TASK::OPEN_SEQUENCE_TASK(&uVar21);
				TASK::TASK_PAUSE(0, 1200);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_73[2 /*3*/], 1f, -1, 0.25f, 8192, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar21);
				TASK::TASK_PERFORM_SEQUENCE(iParam4, uVar21);
				TASK::CLEAR_SEQUENCE_TASK(&uVar21);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_955[0]))
			{
				CAM::DESTROY_CAM(iLocal_955[0], 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_955[1]))
			{
				CAM::DESTROY_CAM(iLocal_955[1], 0);
			}
			func_803(&Local_959, 0, 0, 2000, 1, 0, 0, 1);
			iLocal_955[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
			CAM::SET_CAM_COORD(iLocal_955[0], uParam1->f_19[0 /*6*/]);
			CAM::SET_CAM_ROT(iLocal_955[0], uParam1->f_19[0 /*6*/].f_3, 2);
			CAM::SET_CAM_FOV(iLocal_955[0], uParam1->f_34);
			iLocal_955[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
			CAM::SET_CAM_COORD(iLocal_955[1], uParam1->f_19[1 /*6*/]);
			CAM::SET_CAM_ROT(iLocal_955[1], uParam1->f_19[1 /*6*/].f_3, 2);
			CAM::SET_CAM_FOV(iLocal_955[1], uParam1->f_34);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_955[1], iLocal_955[0], 5000, 1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
		}
		if (iParam0 == 2)
		{
			MISC::CLEAR_AREA_OF_PEDS(uParam1->f_53[0 /*3*/], 300f, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(uParam1->f_53[0 /*3*/], 300f, 0);
		}
		*uParam2++;
	}
	else if (*uParam2 == 6)
	{
		if (SYSTEM::TIMERA() > 5000)
		{
			iVar22 = 55;
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_113(PLAYER::PLAYER_PED_ID()) == 2) || (!PED::IS_PED_INJURED(iParam3) && func_113(iParam3) == 2)) || (!PED::IS_PED_INJURED(iParam4) && func_113(iParam4) == 2))
			{
				iVar22 = 75;
			}
			func_786(iVar22 * 1000, 30000, 1050253722, 1065353216, 0, 0);
			Global_35930 = 0.25f;
			StringCopy(&Global_35931, "DRUNK", 16);
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
			{
				*uParam2 = 50;
			}
			else
			{
				if (uParam1->f_45)
				{
					if (CAM::DOES_CAM_EXIST(iLocal_955[1]))
					{
						CAM::DESTROY_CAM(iLocal_955[1], 0);
					}
					iLocal_955[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
					CAM::SET_CAM_COORD(iLocal_955[1], uParam1->f_37);
					CAM::SET_CAM_ROT(iLocal_955[1], uParam1->f_37.f_3, 2);
					CAM::SET_CAM_FOV(iLocal_955[1], uParam1->f_43);
					CAM::SET_CAM_ACTIVE(iLocal_955[1], 1);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				}
				*uParam2 = 100;
			}
		}
	}
	else if (*uParam2 == 50)
	{
		GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
		SYSTEM::SETTIMERA(0);
		*uParam2++;
	}
	else if (*uParam2 == 51)
	{
		if (SYSTEM::TIMERA() > 300)
		{
			*uParam2 = 100;
		}
	}
	else if (*uParam2 == 98)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_955[0]))
		{
			CAM::DESTROY_CAM(iLocal_955[0], 0);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_955[1]))
		{
			CAM::DESTROY_CAM(iLocal_955[1], 0);
		}
		iLocal_955[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		if (uParam1->f_45 == 0)
		{
			CAM::SET_CAM_COORD(iLocal_955[1], uParam1->f_19[1 /*6*/]);
			CAM::SET_CAM_ROT(iLocal_955[1], uParam1->f_19[1 /*6*/].f_3, 2);
			CAM::SET_CAM_FOV(iLocal_955[1], uParam1->f_34);
		}
		else
		{
			CAM::SET_CAM_COORD(iLocal_955[1], uParam1->f_37);
			CAM::SET_CAM_ROT(iLocal_955[1], uParam1->f_37.f_3, 2);
			CAM::SET_CAM_FOV(iLocal_955[1], uParam1->f_43);
		}
		CAM::SET_CAM_ACTIVE(iLocal_955[1], 1);
		CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_53[2 /*3*/], 1, 0, 0, 1);
			GlobalFunc_2294(PLAYER::PLAYER_PED_ID(), uParam1->f_53[2 /*3*/] + uParam1->f_53[2 /*3*/] - uParam1->f_53[1 /*3*/]);
		}
		if (!PED::IS_PED_INJURED(iParam3))
		{
			ENTITY::SET_ENTITY_COORDS(iParam3, uParam1->f_63[2 /*3*/], 1, 0, 0, 1);
			GlobalFunc_2294(iParam3, uParam1->f_63[2 /*3*/] + uParam1->f_63[2 /*3*/] - uParam1->f_63[1 /*3*/]);
			if (PED::IS_PED_GROUP_MEMBER(iParam3, GlobalFunc_468()))
			{
				PED::REMOVE_PED_FROM_GROUP(iParam3);
			}
		}
		if (GlobalFunc_4924(iParam4))
		{
			ENTITY::SET_ENTITY_COORDS(iParam4, uParam1->f_73[2 /*3*/], 1, 0, 0, 1);
			GlobalFunc_2294(iParam4, uParam1->f_73[2 /*3*/] + uParam1->f_73[2 /*3*/] - uParam1->f_73[1 /*3*/]);
			if (PED::IS_PED_GROUP_MEMBER(iParam4, GlobalFunc_468()))
			{
				PED::REMOVE_PED_FROM_GROUP(iParam4);
			}
		}
		iVar23 = 55;
		if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_113(PLAYER::PLAYER_PED_ID()) == 2) || (!PED::IS_PED_INJURED(iParam3) && func_113(iParam3) == 2)) || (!PED::IS_PED_INJURED(iParam4) && func_113(iParam4) == 2))
		{
			iVar23 = 75;
		}
		func_786(iVar23 * 1000, 30000, 1050253722, 1065353216, 0, 0);
		Global_35930 = 0.25f;
		StringCopy(&Global_35931, "DRUNK", 16);
		iVar23++;
		if (iLocal_958 == 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				if (!GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_5471(PLAYER::PLAYER_PED_ID(), iVar23 * 1000, 0);
				}
				else
				{
					func_262(PLAYER::PLAYER_PED_ID(), iVar23 * 1000);
				}
			}
			if (!PED::IS_PED_INJURED(iParam3))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam3);
				if (!GlobalFunc_5459(iParam3))
				{
					GlobalFunc_5471(iParam3, iVar23 * 1000, 0);
				}
				else
				{
					func_262(iParam3, iVar23 * 1000);
				}
			}
			if (GlobalFunc_4924(iParam4))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam4);
				if (!GlobalFunc_5459(iParam3))
				{
					GlobalFunc_5471(iParam4, iVar23 * 1000, 0);
				}
				else
				{
					func_262(iParam4, iVar23 * 1000);
				}
			}
			iLocal_958 = 1;
		}
		SYSTEM::SETTIMERA(0);
		*uParam2++;
	}
	else if (*uParam2 == 99)
	{
		if (SYSTEM::TIMERA() > 2000)
		{
			CAM::DO_SCREEN_FADE_IN(1000);
			*uParam2++;
		}
	}
	else if (*uParam2 == 100)
	{
		if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		}
		else
		{
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
		}
		iVar24 = 0;
		while (iVar24 < iLocal_955)
		{
			if (CAM::DOES_CAM_EXIST(iLocal_955[iVar24]))
			{
				CAM::DESTROY_CAM(iLocal_955[iVar24], 0);
			}
			iVar24++;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (!PED::IS_PED_INJURED(iParam3))
		{
			AUDIO::STOP_PED_SPEAKING(iParam3, 0);
		}
		if (!PED::IS_PED_INJURED(iParam4))
		{
			AUDIO::STOP_PED_SPEAKING(iParam4, 0);
		}
		func_811(uParam1, &Var25, &Var28);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Var25, Var28, 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(uParam1->f_46, uParam1->f_49, uParam1->f_52, 1);
		func_66(1, 0, 1, 1);
		*uParam2 = -1;
	}
	if (*uParam2 == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3))
			{
				if (!PED::IS_PED_GROUP_MEMBER(iParam3, GlobalFunc_468()))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iParam3, GlobalFunc_468());
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam3, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam4) && !PED::IS_PED_INJURED(iParam4))
			{
				if (!PED::IS_PED_GROUP_MEMBER(iParam4, GlobalFunc_468()))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iParam4, GlobalFunc_468());
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam4, 0);
				}
			}
		}
		GlobalFunc_7942(SYSTEM::TO_FLOAT(iLocal_973));
		CAM::DO_SCREEN_FADE_IN(1000);
		return 1;
	}
	return 0;
}



void func_786(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x6E44B
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_35923)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);
	}
	if (!CAM::IS_CINEMATIC_CAM_SHAKING())
	{
		CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (fParam3 * Global_35922));
	}
	if (CAM::DOES_CAM_EXIST(iParam4))
	{
		CAM::SHAKE_CAM(iParam4, "DRUNK_SHAKE", fParam3);
		Global_35924 = iParam4;
	}
	else
	{
		Global_35924 = 0;
	}
	Global_35923 = 1;
	iVar0 = MISC::GET_GAME_TIMER();
	Global_35925 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_35925 = -1;
		}
	}
	Global_35926 = iParam1;
	Global_35927 = fParam2;
	Global_35929 = fParam3;
	Global_35928 = fParam3;
}

int func_787(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, int iParam8)//Position - 0x6E509
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = GlobalFunc_8058();
			iVar5 = GlobalFunc_8058();
			GlobalFunc_3030(&iVar5, iParam0);
			GlobalFunc_3031(&iVar5, iParam1);
			GlobalFunc_3032(&iVar5, 0);
			if (GlobalFunc_7640(*uParam4, iVar5))
			{
				GlobalFunc_8647(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			GlobalFunc_8384(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			GlobalFunc_7942((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
				GRAPHICS::_0x0AE73D8DF3A762B2(0);
			}
			GlobalFunc_738();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			GlobalFunc_737();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4))
				{
					fVar0 = CAM::GET_CAM_SPLINE_PHASE(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (MISC::GET_HASH_KEY(sParam2) != 0)
						{
							MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, iParam8);
						}
						if (MISC::GET_HASH_KEY(sParam3) != 0)
						{
							MISC::_CLEAR_CLOUD_HAT();
							MISC::LOAD_CLOUD_HAT(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				GlobalFunc_8647(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(GlobalFunc_208(iVar5), GlobalFunc_207(iVar5), GlobalFunc_206(iVar5));
				if (bParam7)
				{
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				}
				AUDIO::STOP_SOUND(uParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				if (bParam7)
				{
					GRAPHICS::_0x0AE73D8DF3A762B2(1);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = GlobalFunc_253(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			GlobalFunc_8647(&iVar5, iVar4, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(GlobalFunc_208(iVar5), GlobalFunc_207(iVar5), GlobalFunc_206(iVar5));
			if (GlobalFunc_209(iVar5) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(GlobalFunc_209(iVar5), GlobalFunc_210(iVar5), GlobalFunc_4975(iVar5));
			}
			GlobalFunc_5077();
			GRAPHICS::_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return 0;
}
















void func_803(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x6EE8F
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(1);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 0);
			}
			CAM::DESTROY_CAM(uParam0->f_4, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	GlobalFunc_8316(bParam1, 1, 0, 0);
	GlobalFunc_737();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 != -15)
		{
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_8058();
		}
	}
}



void func_806(int iParam0)//Position - 0x6F0EB
{
	var uVar0;
	
	uVar0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
	if (CAM::DOES_CAM_EXIST(uVar0))
	{
		switch (iParam0)
		{
			case 7:
				CAM::SET_CAM_COORD(iVar0, 397.2f, -716.2f, 29.9f);
				CAM::SET_CAM_ROT(iVar0, -4f, 0f, -9.3f, 2);
				CAM::SET_CAM_FOV(iVar0, 50f);
				break;
			
			case 8:
				CAM::SET_CAM_COORD(iVar0, -1411.5f, -200.6f, 47.8f);
				CAM::SET_CAM_ROT(iVar0, -3.8f, 0f, 19.7f, 2);
				CAM::SET_CAM_FOV(iVar0, 50f);
				break;
			
			case 9:
				CAM::SET_CAM_COORD(iVar0, 298.9f, 200.8f, 105f);
				CAM::SET_CAM_ROT(iVar0, -7.6f, 0f, 161.6f, 2);
				CAM::SET_CAM_FOV(iVar0, 50f);
				break;
			
			default:
				return;
				break;
		}
		if (CAM::DOES_CAM_EXIST(iLocal_955[0]))
		{
			CAM::DESTROY_CAM(iLocal_955[0], 0);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_955[1]))
		{
			CAM::DESTROY_CAM(iLocal_955[1], 0);
		}
		CAM::SET_CAM_ACTIVE(iVar0, 1);
		iLocal_955[0] = iVar0;
	}
}

void func_807(int iParam0)//Position - 0x6F204
{
	if ((iParam0 == 0 || iParam0 == 4) || iParam0 == 6)
	{
		GlobalFunc_184(70, 1);
	}
	else
	{
		GlobalFunc_184(72, 1);
	}
}

void func_808(int iParam0, int iParam1, int iParam2)//Position - 0x6F238
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 14;
			break;
		
		case 1:
			iVar0 = 15;
			break;
		
		case 2:
			iVar0 = 16;
			break;
		
		case 3:
			iVar0 = 19;
			break;
		
		case 4:
			iVar0 = 17;
			break;
		
		case 5:
			iVar0 = 18;
			break;
		
		case 6:
			iVar0 = 20;
			break;
	}
	iVar1 = func_113(iParam0);
	if ((iVar1 == 0 || iVar1 == 1) || iVar1 == 2)
	{
		iVar2 = GlobalFunc_469(iVar1);
		if (iVar2 > iParam2)
		{
			GlobalFunc_10834(iVar1, iVar0, iParam2);
		}
		else if (iVar2 > 0)
		{
			GlobalFunc_10834(iVar1, iVar0, iVar2);
		}
	}
}

int func_809(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6F2F6
{
	struct<3> Var0;
	
	if (func_810(iParam1, &Var0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (iParam2 == 0 || ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
			{
				if (iParam1 == 10 && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("swift"))
				{
					Var0 = { 2015.569f, 3060.911f, 46.0499f };
					Var0.f_3 = 62.5587f;
					Var0.f_4 = 0;
				}
				if ((iParam3 == 0 || (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && !CAM::IS_SPHERE_VISIBLE(Var0, 5f))) || (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_VISIBLE(iParam0)))
				{
					func_140(iParam0, &Var0, iParam4);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_810(int iParam0, var uParam1)//Position - 0x6F3AB
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1396.903f, -584.5709f, 29.15f };
			uParam1->f_3 = 298.9717f;
			uParam1->f_4 = 9;
			return 1;
			break;
		
		case 1:
			*uParam1 = { -255.8321f, 6287.256f, 30.4584f };
			uParam1->f_3 = 127.8f;
			uParam1->f_4 = 9;
			return 1;
			break;
		
		case 2:
			*uParam1 = { 972.553f, -117.5186f, 73.3531f };
			uParam1->f_3 = 318.8789f;
			uParam1->f_4 = 10;
			return 1;
			break;
		
		case 3:
			*uParam1 = { 246.8546f, -1007.368f, 28.2705f };
			uParam1->f_3 = 345.6f;
			uParam1->f_4 = 5;
			return 1;
			break;
		
		case 4:
			*uParam1 = { 506.485f, -1535.975f, 28.1243f };
			uParam1->f_3 = 143.9599f;
			uParam1->f_4 = 9;
			return 1;
			break;
		
		case 5:
			*uParam1 = { -141.1919f, 6386.074f, 30.5182f };
			uParam1->f_3 = 311.4f;
			uParam1->f_4 = 5;
			return 1;
			break;
		
		case 6:
			*uParam1 = { 231.4387f, 301.6899f, 104.5082f };
			uParam1->f_3 = 266.2629f;
			uParam1->f_4 = 4;
			return 1;
			break;
		
		case 7:
			*uParam1 = { 401.448f, -706.8287f, 28.2877f };
			uParam1->f_3 = 176.4f;
			uParam1->f_4 = 9;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -1404.611f, -203.9962f, 45.6678f };
			uParam1->f_3 = 33.7834f;
			uParam1->f_4 = 10;
			return 1;
			break;
		
		case 9:
			*uParam1 = { 292.0633f, 176.608f, 103.3739f };
			uParam1->f_3 = 74.52f;
			uParam1->f_4 = 1;
			return 1;
			break;
		
		case 10:
			*uParam1 = { 1991.652f, 3075.729f, 46.0322f };
			uParam1->f_3 = 64.5087f;
			uParam1->f_4 = 10;
			return 1;
			break;
		
		case 11:
			*uParam1 = { -1391.148f, 53.6687f, 52.5963f };
			uParam1->f_3 = 309.1061f;
			uParam1->f_4 = 8;
			return 1;
			break;
		
		case 13:
			*uParam1 = { -1161.35f, -1593.913f, 3.357f };
			uParam1->f_3 = 214.4588f;
			uParam1->f_4 = 6;
			return 1;
			break;
		
		case 14:
			*uParam1 = { -2885.435f, -24.0344f, 4.722f };
			uParam1->f_3 = 72.8704f;
			uParam1->f_4 = 1;
			return 1;
			break;
		
		case 15:
			*uParam1 = { -1655.661f, 292.1499f, 59.3852f };
			uParam1->f_3 = 291.5096f;
			uParam1->f_4 = 1;
			return 1;
			break;
		
		case 16:
			*uParam1 = { -824.0479f, 157.3689f, 68.7834f };
			uParam1->f_3 = 263.9772f;
			uParam1->f_4 = 8;
			return 1;
			break;
		
		case 17:
			*uParam1 = { -1246.826f, 383.8191f, 74.3899f };
			uParam1->f_3 = 108.8693f;
			uParam1->f_4 = 10;
			return 1;
			break;
		
		case 18:
			*uParam1 = { -939.0586f, -1230.34f, 4.1746f };
			uParam1->f_3 = 300.1688f;
			uParam1->f_4 = 1;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 510.0929f, -241.3109f, 47.5251f };
			uParam1->f_3 = 159.3072f;
			uParam1->f_4 = 1;
			return 1;
			break;
		
		case 20:
			*uParam1 = { -1391.299f, -123.1333f, 48.9688f };
			uParam1->f_3 = 4.0577f;
			uParam1->f_4 = 1;
			return 1;
			break;
		
		case 12:
			*uParam1 = { 136.4575f, -1301.642f, 28.2124f };
			uParam1->f_3 = 60.6745f;
			uParam1->f_4 = 8;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			uParam1->f_3 = 0f;
			uParam1->f_4 = 1;
			return 0;
			break;
	}
	return 0;
}

void func_811(var uParam0, var uParam1, var uParam2)//Position - 0x6F7AA
{
	int iVar0;
	struct<3> Var1;
	
	*uParam1 = { uParam0->f_53[0 /*3*/] };
	*uParam2 = { uParam0->f_53[0 /*3*/] };
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (iVar0 == 0)
		{
			Var1 = { uParam0->f_53[0 /*3*/] };
		}
		else if (iVar0 == 1)
		{
			Var1 = { uParam0->f_53[1 /*3*/] };
		}
		else if (iVar0 == 2)
		{
			Var1 = { uParam0->f_53[2 /*3*/] };
		}
		else if (iVar0 == 3)
		{
			Var1 = { uParam0->f_63[0 /*3*/] };
		}
		else if (iVar0 == 4)
		{
			Var1 = { uParam0->f_63[1 /*3*/] };
		}
		else if (iVar0 == 5)
		{
			Var1 = { uParam0->f_63[2 /*3*/] };
		}
		else if (iVar0 == 6)
		{
			Var1 = { uParam0->f_73[0 /*3*/] };
		}
		else if (iVar0 == 7)
		{
			Var1 = { uParam0->f_73[1 /*3*/] };
		}
		else if (iVar0 == 8)
		{
			Var1 = { uParam0->f_73[2 /*3*/] };
		}
		if (uParam0->f_44 == 0 || (iVar0 % 3) != 2)
		{
			if (Var1.x < *uParam1)
			{
				*uParam1 = Var1.x;
			}
			if (Var1.f_1 < uParam1->f_1)
			{
				uParam1->f_1 = Var1.f_1;
			}
			if (Var1.f_2 < uParam1->f_2)
			{
				uParam1->f_2 = Var1.f_2;
			}
			if (Var1.x > *uParam2)
			{
				*uParam2 = Var1.x;
			}
			if (Var1.f_1 > uParam2->f_1)
			{
				uParam2->f_1 = Var1.f_1;
			}
			if (Var1.f_2 > uParam2->f_2)
			{
				uParam2->f_2 = Var1.f_2;
			}
		}
		iVar0++;
	}
	*uParam1 = { *uParam1 - Vector(2.5f, 0.5f, 0.5f) };
	*uParam2 = { *uParam2 + Vector(2.5f, 0.5f, 0.5f) };
}

int func_812(float fParam0)//Position - 0x6F954
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fParam0, 1, 1056964608, 0, 1))
		{
			return 0;
		}
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			return 0;
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	}
	return 1;
}


int func_814(int iParam0, var uParam1)//Position - 0x6FB92
{
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*6*/]) = { -1391.351f, -582.5974f, 30.663f };
			(uParam1[0 /*6*/])->f_3 = { 0.5957f, 0f, -144.2531f };
			*(uParam1[1 /*6*/]) = { -1391.281f, -581.3097f, 31.7334f };
			(uParam1[1 /*6*/])->f_3 = { 39.9521f, 0f, -167.3445f };
			uParam1->f_32 = 39.9409f;
			uParam1->f_13 = { -1391.281f, -581.3097f, 31.7334f };
			uParam1->f_13.f_3 = { 39.9521f, 0f, -167.3445f };
			uParam1->f_33 = 39.9409f;
			uParam1->f_19[0 /*6*/] = { -1391.281f, -581.3097f, 31.7334f };
			uParam1->f_19[0 /*6*/].f_3 = { 39.9521f, 0f, -167.3445f };
			uParam1->f_19[1 /*6*/] = { -1392.11f, -581.7819f, 30.0333f };
			uParam1->f_19[1 /*6*/].f_3 = { 6.5184f, 0f, -146.8236f };
			uParam1->f_34 = 39.9409f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 6.25f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { -1391.666f, -583.7601f, 29.2301f };
			uParam1->f_53[1 /*3*/] = { -1388.344f, -587.0388f, 29.2182f };
			uParam1->f_53[2 /*3*/] = { -1390.437f, -583.8992f, 29.2238f };
			uParam1->f_63[0 /*3*/] = { -1392.969f, -585.0537f, 29.2474f };
			uParam1->f_63[1 /*3*/] = { -1389.948f, -586.8618f, 29.2263f };
			uParam1->f_63[2 /*3*/] = { -1391.245f, -585.6469f, 29.2325f };
			uParam1->f_73[0 /*3*/] = { -1388.344f, -583.0257f, 29.2097f };
			uParam1->f_73[1 /*3*/] = { -1387.864f, -586.0078f, 29.2138f };
			uParam1->f_73[2 /*3*/] = { -1388.823f, -584.4099f, 29.216f };
			uParam1->f_46 = { -1394.79f, -577.7897f, 29.2828f };
			uParam1->f_49 = { -1388.232f, -587.291f, 38.4828f };
			uParam1->f_52 = 7.4f;
			uParam1->f_45 = 0;
			return 1;
			break;
		
		case 1:
			*(uParam1[0 /*6*/]) = { -259.9789f, 6286.261f, 31.6806f };
			(uParam1[0 /*6*/])->f_3 = { 1.7404f, 0f, 32.0027f };
			*(uParam1[1 /*6*/]) = { -260.7272f, 6283.594f, 34.3499f };
			(uParam1[1 /*6*/])->f_3 = { 12.5339f, 0f, 13.1607f };
			uParam1->f_32 = 39.9699f;
			uParam1->f_13 = { -260.7272f, 6283.594f, 34.3499f };
			uParam1->f_13.f_3 = { 12.5339f, 0f, 13.1607f };
			uParam1->f_33 = 39.9699f;
			uParam1->f_19[0 /*6*/] = { -257.0971f, 6298.866f, 32.2329f };
			uParam1->f_19[0 /*6*/].f_3 = { 5.4313f, 0f, 156.46f };
			uParam1->f_19[1 /*6*/] = { -255.0959f, 6296.013f, 31.8561f };
			uParam1->f_19[1 /*6*/].f_3 = { 3.6231f, 0f, 140.3088f };
			uParam1->f_34 = 49.9655f;
			uParam1->f_35 = 4.5f;
			uParam1->f_36 = 6f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { -262.3289f, 6286.172f, 30.4615f };
			uParam1->f_53[1 /*3*/] = { -262.2624f, 6291.064f, 30.4905f };
			uParam1->f_53[2 /*3*/] = { -260.3908f, 6289.659f, 30.4718f };
			uParam1->f_63[0 /*3*/] = { -263.8451f, 6286.95f, 30.4752f };
			uParam1->f_63[1 /*3*/] = { -262.683f, 6290.633f, 30.49f };
			uParam1->f_63[2 /*3*/] = { -261.1694f, 6288.462f, 30.469f };
			uParam1->f_73[0 /*3*/] = { -263.6732f, 6285.289f, 30.464f };
			uParam1->f_73[1 /*3*/] = { -261.9075f, 6292.078f, 30.4943f };
			uParam1->f_73[2 /*3*/] = { -260.8339f, 6291.501f, 30.4857f };
			uParam1->f_46 = { -264.4563f, 6284.892f, 30.4666f };
			uParam1->f_49 = { -252.8467f, 6295.897f, 39.4666f };
			uParam1->f_52 = 13.2f;
			uParam1->f_37 = { -258.3154f, 6289.813f, 31.88316f };
			uParam1->f_37.f_3 = { 2.278223f, -0.211094f, 96.08327f };
			uParam1->f_43 = 50.00686f;
			uParam1->f_45 = 1;
			return 1;
			break;
		
		case 2:
			*(uParam1[0 /*6*/]) = { 988.7534f, -105.37f, 75.0866f };
			(uParam1[0 /*6*/])->f_3 = { 1.7315f, 0f, 79.8844f };
			*(uParam1[1 /*6*/]) = { 990.1754f, -104.4526f, 77.38616f };
			(uParam1[1 /*6*/])->f_3 = { 15.28894f, 0f, 99.28104f };
			uParam1->f_32 = 39.2167f;
			uParam1->f_13 = { 990.1754f, -104.4526f, 77.38616f };
			uParam1->f_13.f_3 = { 15.28894f, 0f, 99.28104f };
			uParam1->f_33 = 39.2167f;
			uParam1->f_19[0 /*6*/] = { 990.1754f, -104.4526f, 77.38616f };
			uParam1->f_19[0 /*6*/].f_3 = { 15.28894f, 0f, 99.28104f };
			uParam1->f_19[1 /*6*/] = { 988.2397f, -108.0459f, 74.6292f };
			uParam1->f_19[1 /*6*/].f_3 = { 0.8744f, 0f, 65.974f };
			uParam1->f_34 = 39.2167f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 5f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { 984.4031f, -107.614f, 73.3531f };
			uParam1->f_53[1 /*3*/] = { 981.8692f, -103.1675f, 73.8535f };
			uParam1->f_53[2 /*3*/] = { 984.304f, -106.5439f, 73.3531f };
			uParam1->f_63[0 /*3*/] = { 984.598f, -108.5928f, 73.3531f };
			uParam1->f_63[1 /*3*/] = { 981.6747f, -104.151f, 73.8535f };
			uParam1->f_63[2 /*3*/] = { 983.0098f, -106.4819f, 73.3531f };
			uParam1->f_73[0 /*3*/] = { 985.7677f, -107.4711f, 73.3531f };
			uParam1->f_73[1 /*3*/] = { 982.6229f, -102.9315f, 73.8535f };
			uParam1->f_73[2 /*3*/] = { 983.2742f, -103.8405f, 73.8535f };
			uParam1->f_46 = { 988.8345f, -110.7915f, 73.0401f };
			uParam1->f_49 = { 981.274f, -103.3357f, 82.7901f };
			uParam1->f_52 = 12.9f;
			uParam1->f_45 = 0;
			return 1;
			break;
		
		case 3:
			*(uParam1[0 /*6*/]) = { 250.298f, -1011.375f, 28.8803f };
			(uParam1[0 /*6*/])->f_3 = { 9.4187f, 0f, -112.0547f };
			*(uParam1[1 /*6*/]) = { 250.1848f, -1011.189f, 28.9707f };
			(uParam1[1 /*6*/])->f_3 = { 68.6477f, 0f, -125.9116f };
			uParam1->f_32 = 41.2174f;
			uParam1->f_13 = { 250.1848f, -1011.189f, 28.9707f };
			uParam1->f_13.f_3 = { 68.6477f, 0f, -125.9116f };
			uParam1->f_33 = 41.2174f;
			uParam1->f_19[0 /*6*/] = { 250.5783f, -1019.129f, 29.3398f };
			uParam1->f_19[0 /*6*/].f_3 = { 2.5216f, 0f, -25.583f };
			uParam1->f_19[1 /*6*/] = { 250.4407f, -1018.376f, 29.3662f };
			uParam1->f_19[1 /*6*/].f_3 = { 2.5216f, 0f, -16.6002f };
			uParam1->f_34 = 50.0143f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 6.5f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { 251.4444f, -1010.6f, 28.2705f };
			uParam1->f_53[1 /*3*/] = { 255.0215f, -1013.098f, 28.2704f };
			uParam1->f_53[2 /*3*/] = { 252.7474f, -1012.346f, 28.2699f };
			uParam1->f_63[0 /*3*/] = { 250.1186f, -1013.43f, 28.2671f };
			uParam1->f_63[1 /*3*/] = { 254.7028f, -1013.853f, 28.2703f };
			uParam1->f_63[2 /*3*/] = { 251.1483f, -1012.704f, 28.2685f };
			uParam1->f_73[0 /*3*/] = { 251.5051f, -1009.049f, 28.2719f };
			uParam1->f_73[1 /*3*/] = { 255.8904f, -1012.592f, 28.2714f };
			uParam1->f_73[2 /*3*/] = { 251.1808f, -1010.198f, 28.2707f };
			uParam1->f_46 = { 252.6843f, -1007.851f, 28.2784f };
			uParam1->f_49 = { 249.2258f, -1018.628f, 32.5284f };
			uParam1->f_52 = 8.8f;
			uParam1->f_45 = 0;
			return 1;
			break;
		
		case 4:
			*(uParam1[0 /*6*/]) = { 499.1641f, -1542.46f, 29.695f };
			(uParam1[0 /*6*/])->f_3 = { -1.8745f, 0f, 76.9106f };
			*(uParam1[1 /*6*/]) = { 501.6507f, -1541.101f, 31.2484f };
			(uParam1[1 /*6*/])->f_3 = { 16.131f, 0f, 87.0601f };
			uParam1->f_32 = 37.9427f;
			uParam1->f_13 = { 501.6507f, -1541.101f, 31.2484f };
			uParam1->f_13.f_3 = { 16.131f, 0f, 87.0601f };
			uParam1->f_33 = 37.9427f;
			uParam1->f_19[0 /*6*/] = { 501.6507f, -1541.101f, 31.2484f };
			uParam1->f_19[0 /*6*/].f_3 = { 16.131f, 0f, 87.0601f };
			uParam1->f_19[1 /*6*/] = { 501.2673f, -1539.48f, 29.6989f };
			uParam1->f_19[1 /*6*/].f_3 = { -3.6143f, 0.0075f, 113.304f };
			uParam1->f_34 = 37.9427f;
			uParam1->f_35 = 5.5f;
			uParam1->f_36 = 6.75f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { 499.1487f, -1540.312f, 28.2512f };
			uParam1->f_53[1 /*3*/] = { 493.8625f, -1541.538f, 28.2877f };
			uParam1->f_53[2 /*3*/] = { 496.6065f, -1542.547f, 28.2572f };
			uParam1->f_63[0 /*3*/] = { 499.6836f, -1538.177f, 28.2656f };
			uParam1->f_63[1 /*3*/] = { 495.8752f, -1540.644f, 28.2805f };
			uParam1->f_63[2 /*3*/] = { 496.1659f, -1541.45f, 28.2708f };
			uParam1->f_73[0 /*3*/] = { 499.701f, -1543.873f, 28.1129f };
			uParam1->f_73[1 /*3*/] = { 494.0248f, -1542.483f, 28.2833f };
			uParam1->f_73[2 /*3*/] = { 495.5604f, -1544.205f, 28.2538f };
			uParam1->f_46 = { 492.2227f, -1547.434f, 28.2585f };
			uParam1->f_49 = { 500.1553f, -1537.77f, 35.2585f };
			uParam1->f_52 = 14f;
			uParam1->f_45 = 0;
			return 1;
			break;
		
		case 5:
			*(uParam1[0 /*6*/]) = { -138.1448f, 6379.621f, 33.59f };
			(uParam1[0 /*6*/])->f_3 = { -12.7782f, 0f, -106.0116f };
			*(uParam1[1 /*6*/]) = { -138.6336f, 6380.503f, 34.4018f };
			(uParam1[1 /*6*/])->f_3 = { 23.2267f, 0f, -107.6306f };
			uParam1->f_32 = 50f;
			uParam1->f_13 = { -138.6336f, 6380.503f, 34.4018f };
			uParam1->f_13.f_3 = { 23.2267f, 0f, -107.6306f };
			uParam1->f_33 = 50f;
			uParam1->f_19[0 /*6*/] = { -138.6336f, 6380.503f, 34.4018f };
			uParam1->f_19[0 /*6*/].f_3 = { 23.2267f, 0f, -107.6306f };
			uParam1->f_19[1 /*6*/] = { -139.2361f, 6381.063f, 31.9137f };
			uParam1->f_19[1 /*6*/].f_3 = { 0.8374f, 0f, -107.1374f };
			uParam1->f_34 = 50f;
			uParam1->f_35 = 5.25f;
			uParam1->f_36 = 6.5f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { -136.33f, 6380.167f, 30.5513f };
			uParam1->f_53[1 /*3*/] = { -132.3319f, 6376.808f, 31.18f };
			uParam1->f_53[2 /*3*/] = { -135.7501f, 6379.678f, 30.6291f };
			uParam1->f_63[0 /*3*/] = { -137.1064f, 6379.521f, 30.5464f };
			uParam1->f_63[1 /*3*/] = { -133.3788f, 6376.069f, 31.18f };
			uParam1->f_63[2 /*3*/] = { -135.8515f, 6378.645f, 30.6931f };
			uParam1->f_73[0 /*3*/] = { -136.2626f, 6382.05f, 30.5032f };
			uParam1->f_73[1 /*3*/] = { -132.1531f, 6377.452f, 31.18f };
			uParam1->f_73[2 /*3*/] = { -133.3998f, 6379.033f, 30.8417f };
			uParam1->f_46 = { -141.2375f, 6383.441f, 30.5265f };
			uParam1->f_49 = { -133.2909f, 6375.645f, 36.5765f };
			uParam1->f_52 = 8.1f;
			uParam1->f_45 = 0;
			return 1;
			break;
		
		case 6:
			*(uParam1[0 /*6*/]) = { 228.6531f, 306.2192f, 106.3708f };
			(uParam1[0 /*6*/])->f_3 = { -5.0435f, 0.2052f, 109.1608f };
			*(uParam1[1 /*6*/]) = { 229.2501f, 305.8874f, 107.8613f };
			(uParam1[1 /*6*/])->f_3 = { 22.4767f, 0.2052f, 118.4014f };
			uParam1->f_32 = 49.9886f;
			uParam1->f_13 = { 229.2501f, 305.8874f, 107.8613f };
			uParam1->f_13.f_3 = { 22.4767f, 0.2052f, 118.4014f };
			uParam1->f_33 = 49.9886f;
			uParam1->f_19[0 /*6*/] = { 229.2501f, 305.8874f, 107.8613f };
			uParam1->f_19[0 /*6*/].f_3 = { 22.4767f, 0.2052f, 118.4014f };
			uParam1->f_19[1 /*6*/] = { 228.8797f, 305.0008f, 106.0803f };
			uParam1->f_19[1 /*6*/].f_3 = { -7.3693f, 0.2052f, 137.621f };
			uParam1->f_34 = 49.9886f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 6f;
			uParam1->f_44 = 0;
			uParam1->f_53[0 /*3*/] = { 227.038f, 302.324f, 104.534f };
			uParam1->f_53[1 /*3*/] = { 221.2218f, 304.1971f, 104.5653f };
			uParam1->f_53[2 /*3*/] = { 227.038f, 302.324f, 104.534f };
			uParam1->f_63[0 /*3*/] = { 228.5144f, 302.3003f, 104.3811f };
			uParam1->f_63[1 /*3*/] = { 219.9782f, 305.6431f, 104.5847f };
			uParam1->f_63[2 /*3*/] = { 224.1672f, 302.8337f, 104.5366f };
			uParam1->f_73[0 /*3*/] = { 227.6132f, 301.1576f, 104.5328f };
			uParam1->f_73[1 /*3*/] = { 220.1857f, 303.6531f, 104.5743f };
			uParam1->f_73[2 /*3*/] = { 222.3438f, 302.954f, 104.5386f };
			uParam1->f_46 = { 230.5813f, 304.3873f, 104.4136f };
			uParam1->f_49 = { 220.4306f, 307.9557f, 112.5136f };
			uParam1->f_52 = 12.5f;
			uParam1->f_45 = 0;
			return 1;
			break;
		
		case 7:
			*(uParam1[0 /*6*/]) = { 405.9127f, -711.7676f, 31.2618f };
			(uParam1[0 /*6*/])->f_3 = { 19.919f, 0f, 90.3396f };
			*(uParam1[1 /*6*/]) = { 405.4205f, -711.784f, 29.3979f };
			(uParam1[1 /*6*/])->f_3 = { 5.5077f, 0f, 99.6259f };
			uParam1->f_32 = 50f;
			uParam1->f_13 = { 405.4205f, -711.784f, 29.3979f };
			uParam1->f_13.f_3 = { 5.5077f, 0f, 99.6259f };
			uParam1->f_33 = 50f;
			uParam1->f_19[0 /*6*/] = { 405.4205f, -711.784f, 29.3979f };
			uParam1->f_19[0 /*6*/].f_3 = { 5.5077f, 0f, 99.6259f };
			uParam1->f_19[1 /*6*/] = { 405.4205f, -711.784f, 29.3979f };
			uParam1->f_19[1 /*6*/].f_3 = { 5.5077f, 0f, 99.6259f };
			uParam1->f_34 = 50f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 5f;
			uParam1->f_44 = 1;
			uParam1->f_53[0 /*3*/] = { 393.142f, -713.4531f, 28.2855f };
			uParam1->f_53[1 /*3*/] = { 397.1506f, -714.0617f, 28.2857f };
			uParam1->f_53[2 /*3*/] = { 399.4089f, -714.5928f, 28.2858f };
			uParam1->f_63[0 /*3*/] = { 394.7705f, -712.7902f, 28.2853f };
			uParam1->f_63[1 /*3*/] = { 397.9654f, -713.1153f, 28.2854f };
			uParam1->f_63[2 /*3*/] = { 398.8918f, -713.4561f, 28.2855f };
			uParam1->f_73[0 /*3*/] = { 395.3366f, -714.9562f, 28.2859f };
			uParam1->f_73[1 /*3*/] = { 397.7031f, -715.1816f, 28.286f };
			uParam1->f_73[2 /*3*/] = { 398.9623f, -715.4068f, 28.286f };
			uParam1->f_46 = { 392.7992f, -712.5184f, 28.2852f };
			uParam1->f_49 = { 411.5248f, -712.1509f, 32.5352f };
			uParam1->f_52 = 9.2f;
			uParam1->f_45 = 0;
			return 1;
			break;
		
		case 8:
			*(uParam1[0 /*6*/]) = { -1405.714f, -195.728f, 54.0098f };
			(uParam1[0 /*6*/])->f_3 = { -4.2783f, 0f, 121.8633f };
			*(uParam1[1 /*6*/]) = { -1407.545f, -194.7853f, 47.9021f };
			(uParam1[1 /*6*/])->f_3 = { 4.3037f, 0f, 134.3144f };
			uParam1->f_32 = 50f;
			uParam1->f_13 = { -1407.545f, -194.7853f, 47.9021f };
			uParam1->f_13.f_3 = { 4.3037f, 0f, 134.3144f };
			uParam1->f_33 = 50f;
			uParam1->f_19[0 /*6*/] = { 989.1804f, -103.8445f, 78.8565f };
			uParam1->f_19[0 /*6*/].f_3 = { 2.7704f, 0f, 103.6486f };
			uParam1->f_19[1 /*6*/] = { 988.2397f, -108.0459f, 74.6292f };
			uParam1->f_19[1 /*6*/].f_3 = { 0.8744f, 0f, 65.974f };
			uParam1->f_34 = 39.2167f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 5f;
			uParam1->f_44 = 1;
			uParam1->f_53[0 /*3*/] = { -1417.29f, -203.6409f, 45.5004f };
			uParam1->f_53[1 /*3*/] = { -1412.44f, -199.2623f, 46.2752f };
			uParam1->f_53[2 /*3*/] = { -1403.62f, -162.356f, 46.5711f };
			uParam1->f_63[0 /*3*/] = { -1416.808f, -201.9135f, 46.1048f };
			uParam1->f_63[1 /*3*/] = { -1412.86f, -197.2908f, 46.2686f };
			uParam1->f_63[2 /*3*/] = { -1404.78f, -163.073f, 46.5422f };
			uParam1->f_73[0 /*3*/] = { -1419.292f, -202.7134f, 45.5004f };
			uParam1->f_73[1 /*3*/] = { -1414.398f, -198.1992f, 46.2804f };
			uParam1->f_73[2 /*3*/] = { -1411.028f, -198.9657f, 46.2444f };
			uParam1->f_46 = { -1426.329f, -215.1618f, 45.5004f };
			uParam1->f_49 = { -1404.331f, -192.3439f, 51.2004f };
			uParam1->f_52 = 9.6f;
			uParam1->f_45 = 0;
			return 1;
			break;
		
		case 9:
			*(uParam1[0 /*6*/]) = { 293.481f, 195.6959f, 105.3287f };
			(uParam1[0 /*6*/])->f_3 = { 28.8303f, 0f, -42.0262f };
			*(uParam1[1 /*6*/]) = { 293.481f, 195.6959f, 105.3287f };
			(uParam1[1 /*6*/])->f_3 = { 7.0245f, 0f, -60.5823f };
			uParam1->f_32 = 50f;
			uParam1->f_13 = { 320.8777f, 167.7101f, 104.4684f };
			uParam1->f_13.f_3 = { 6.111f, 0f, -66.0239f };
			uParam1->f_33 = 50f;
			uParam1->f_19[0 /*6*/] = { 323.4883f, 156.7916f, 103.6546f };
			uParam1->f_19[0 /*6*/].f_3 = { 5.5771f, 0f, -38.892f };
			uParam1->f_19[1 /*6*/] = { 323.4883f, 156.7916f, 103.6546f };
			uParam1->f_19[1 /*6*/].f_3 = { 5.5771f, 0f, -38.892f };
			uParam1->f_34 = 50f;
			uParam1->f_35 = 5f;
			uParam1->f_36 = 5f;
			uParam1->f_44 = 1;
			uParam1->f_53[0 /*3*/] = { 300.1136f, 202.9304f, 103.3684f };
			uParam1->f_53[1 /*3*/] = { 298.376f, 199.1103f, 103.3446f };
			uParam1->f_53[2 /*3*/] = { 337.552f, 166.9108f, 102.3808f };
			uParam1->f_63[0 /*3*/] = { 301.1823f, 202.7771f, 103.3837f };
			uParam1->f_63[1 /*3*/] = { 299.3044f, 198.6458f, 103.3357f };
			uParam1->f_63[2 /*3*/] = { 238.395f, 299.476f, 104.589f };
			uParam1->f_73[0 /*3*/] = { 299.5274f, 203.6378f, 103.3739f };
			uParam1->f_73[1 /*3*/] = { 297.01f, 198.748f, 103.3481f };
			uParam1->f_73[2 /*3*/] = { 238.394f, 299.476f, 104.589f };
			uParam1->f_46 = { 336.7123f, 180.7974f, 102.009f };
			uParam1->f_49 = { 313.8644f, 161.0981f, 106.609f };
			uParam1->f_52 = 10.7f;
			uParam1->f_45 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_815()//Position - 0x71142
{
	func_816(2);
}

void func_816(int iParam0)//Position - 0x7114F
{
	if (Local_78 != iParam0)
	{
		Local_78 = iParam0;
		Local_78.f_2 = 1;
		Local_78.f_257 = 0;
	}
}

int func_817()//Position - 0x7116D
{
	struct<74> Var0;
	
	Var0 = 2;
	Var0.f_19 = 2;
	Var0.f_53 = 3;
	Var0.f_63 = 3;
	Var0.f_73 = 3;
	func_814(Global_86194, &Var0);
	if (func_783(Global_86194, &Var0, &(Local_78.f_257), Local_78.f_56.f_7, Local_78.f_109.f_7, &(Local_78.f_259)))
	{
		return 1;
	}
	return 0;
}

void func_818()//Position - 0x711C7
{
	Global_34913 = 6;
	if (GlobalFunc_226(&(Local_78.f_703.f_7)) && GlobalFunc_225(&(Local_78.f_703.f_7)))
	{
		GlobalFunc_6421(&(Local_78.f_703.f_7));
	}
	GlobalFunc_6877(&(Local_78.f_703.f_10));
	func_421(&(Local_78.f_703));
	if (Global_86194 == 21)
	{
		func_421(&(Local_78.f_703));
		func_431(&(Local_78.f_703), 17, 145, 69);
		func_816(2);
	}
	else
	{
		func_367(&(Local_78.f_636), Global_86103[Global_86194 /*2*/].f_1);
		func_367(&(Local_78.f_638), Global_86194);
		Local_78.f_640++;
		if (Local_78.f_640 >= 4 && Global_86194 != 12)
		{
			Local_78.f_641 = 1;
		}
		if (((Global_86195 == 0 || Global_86195 == 1) || Global_86195 == 3) || Global_86195 == 4)
		{
			if (Local_78.f_640 < 4)
			{
				if (Local_78.f_56 != 0)
				{
					func_393(Local_78.f_3.f_1, Local_78.f_56.f_1, 7);
				}
				if (Local_78.f_109 != 0)
				{
					func_393(Local_78.f_3.f_1, Local_78.f_109.f_1, 7);
				}
			}
		}
		switch (Global_86103[Global_86194 /*2*/].f_1)
		{
			case 5:
				GlobalFunc_7610(312, 0, 0);
				break;
			
			case 4:
				GlobalFunc_7610(313, 0, 0);
				break;
			
			case 3:
				GlobalFunc_7610(314, 0, 0);
				break;
			
			case 0:
				GlobalFunc_7610(315, 0, 0);
				break;
			
			case 2:
				GlobalFunc_7610(316, 0, 0);
				break;
			
			case 1:
				GlobalFunc_7610(317, 0, 0);
				break;
		}
		if ((((Global_86194 < 22 && Global_86103[Global_86194 /*2*/].f_1 != 2) && Global_86103[Global_86194 /*2*/].f_1 != 0) && Global_86103[Global_86194 /*2*/].f_1 != 5) && Global_86103[Global_86194 /*2*/].f_1 != 1)
		{
			func_809(Local_78.f_252, Global_86194, 0, 0, 0);
		}
		if (Global_86194 < 22 && Global_86103[Global_86194 /*2*/].f_1 == 4)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 10)
			{
				func_816(8);
			}
			else
			{
				func_816(4);
			}
		}
		else
		{
			if (Global_86195 == 5)
			{
				func_730(&(Local_78.f_56), 0);
				func_825(&(Local_78.f_109), 0);
			}
			else if (Global_86195 == 6)
			{
				func_730(&(Local_78.f_109), 0);
				func_825(&(Local_78.f_56), 0);
			}
			else if (Global_86195 == 7)
			{
				func_730(&(Local_78.f_56), 0);
				func_730(&(Local_78.f_109), 0);
			}
			else if (Global_86194 == 12)
			{
				func_819(&(Local_78.f_56), 1);
				func_819(&(Local_78.f_109), 1);
			}
			func_488(&(Local_78.f_3), &(Local_78.f_259), 1);
			func_488(&(Local_78.f_56), &(Local_78.f_259), 0);
			func_488(&(Local_78.f_109), &(Local_78.f_259), 0);
			func_816(2);
		}
	}
}

void func_819(var uParam0, int iParam1)//Position - 0x714A8
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (*uParam0 != 0)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			if ((((iParam1 == 1 || *uParam0 == 5) || *uParam0 == 6) || *uParam0 == 3) || *uParam0 == 11)
			{
				bVar0 = true;
			}
			else
			{
				iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(121.9946f, -1292.546f, 29.2792f);
				if (iVar1 != 0)
				{
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uParam0->f_7) == iVar1)
					{
						bVar0 = true;
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_10) && HUD::GET_BLIP_FROM_ENTITY(uParam0->f_7) == 0)
		{
			func_821(uParam0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		func_820(uParam0);
	}
}

void func_820(var uParam0)//Position - 0x71566
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_10));
	}
}

int func_821(var uParam0)//Position - 0x71581
{
	if (*uParam0 == 0)
	{
	}
	else if (!PED::IS_PED_INJURED(uParam0->f_7))
	{
		uParam0->f_10 = GlobalFunc_7254(uParam0->f_7, 0, 145);
		if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::SET_BLIP_AS_FRIENDLY(uParam0->f_10, 1);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_10, &(uParam0->f_3));
		}
		return uParam0->f_10;
	}
	return 0;
}




void func_825(var uParam0, int iParam1)//Position - 0x716E3
{
	if (*uParam0 != 0 && *uParam0 < 7)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			func_42(uParam0, 2, iParam1);
			GlobalFunc_1057(uParam0, 14);
		}
	}
}





int func_830()//Position - 0x71F60
{
	if (Global_86193 != 23)
	{
		if (!GlobalFunc_39(7))
		{
			Global_34913 = 7;
		}
		if (GlobalFunc_226(&(Local_78.f_703.f_7)) && !GlobalFunc_225(&(Local_78.f_703.f_7)))
		{
			GlobalFunc_5693(&(Local_78.f_703.f_7));
		}
		if (Local_78.f_625 == 0)
		{
			if (((((((((Global_86193 == 12 || Global_86193 == 11) || Global_86193 == 13) || Global_86193 == 14) || Global_86193 == 15) || Global_86193 == 16) || Global_86193 == 17) || Global_86193 == 18) || Global_86193 == 19) || Global_86193 == 20)
			{
				if (func_809(Local_78.f_252, Global_86193, 1, 1, 0))
				{
					Local_78.f_625 = 1;
				}
			}
		}
		return 0;
	}
	return 1;
}

void func_831()//Position - 0x7204D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_774();
	if (REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
	{
		func_283();
		func_282(4);
		return;
	}
	else if (GlobalFunc_142())
	{
		func_283();
		if (GlobalFunc_145())
		{
			func_282(3);
		}
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_283();
		func_282(0);
	}
	else if (GlobalFunc_39(2))
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		func_283();
		func_431(&(Local_78.f_703), 5, 145, 69);
		GlobalFunc_1648(&(Local_78.f_703), 18);
		Local_78.f_629 = 145;
		Local_78.f_630 = 145;
		func_771(0, 48, 1);
		func_816(6);
	}
	else if (GlobalFunc_39(18))
	{
		func_283();
		func_896();
		func_282(1);
	}
	else if ((GlobalFunc_6687(6) && !GlobalFunc_39(6)) && !GlobalFunc_39(7))
	{
		func_283();
		func_771(0, 48, 0);
		func_282(1);
	}
	else if (Global_86193 != 23)
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		if (Global_86193 < 22)
		{
			iVar0 = Global_86103[Global_86193 /*2*/].f_1;
			if (((iVar0 == 5 || iVar0 == 0) || iVar0 == 2) || iVar0 == 6)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(1);
			}
			else
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
		}
		else
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		}
		func_283();
		func_816(3);
	}
	else if (func_893())
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		func_283();
		func_816(5);
	}
	else if (func_891())
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		func_283();
		func_816(7);
		return;
	}
	else if (!func_888(&(Local_78.f_256)))
	{
		GlobalFunc_187();
		return;
	}
	else if (func_770())
	{
		bVar1 = func_851(1);
		func_465();
		func_432();
		func_292(0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
		}
		if (Global_67138.f_577 == 1)
		{
			if (Local_78.f_252 != 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_78.f_252))
				{
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_78.f_252, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_78.f_252));
					}
					Local_78.f_252 = 0;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (Local_78.f_252 != iVar2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_78.f_252))
					{
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_78.f_252, 0))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_78.f_252));
						}
						Local_78.f_252 = 0;
					}
					Local_78.f_252 = iVar2;
					if (Local_78.f_56 != 0)
					{
						if (GlobalFunc_6795(iVar2, Local_78.f_56.f_1, 0))
						{
							Local_78.f_56.f_8 = iVar2;
						}
					}
					if (Local_78.f_109 != 0)
					{
						if (GlobalFunc_6795(iVar2, Local_78.f_109.f_1, 0))
						{
							Local_78.f_109.f_8 = iVar2;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_78.f_252))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_78.f_252, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_78.f_252, 1, 1);
				}
			}
		}
		func_848();
		if (Local_78.f_619 == 0)
		{
			if (func_370(&(Local_78.f_638), 12))
			{
				if (func_372(PLAYER::PLAYER_PED_ID(), GlobalFunc_2247(93, 0), 200f))
				{
					if ((PED::IS_PED_INJURED(Local_78.f_56.f_7) || INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_78.f_56.f_7) == 0) && (PED::IS_PED_INJURED(Local_78.f_109.f_7) || INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_78.f_109.f_7) == 0))
					{
						GlobalFunc_2196(0, 9, 0);
						Local_78.f_619 = 1;
					}
				}
			}
		}
		if (!func_291())
		{
			func_283();
			if (func_289())
			{
				func_282(6);
			}
		}
		else if (((Local_78.f_56 == 3 || Local_78.f_56 == 11) || Local_78.f_56 == 6) || ((Local_78.f_109 == 3 || Local_78.f_109 == 11) || Local_78.f_109 == 6))
		{
			func_844();
		}
		else
		{
			func_832(bVar1);
		}
	}
}

void func_832(bool bParam0)//Position - 0x72417
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	
	bVar2 = false;
	if (Local_78.f_258 != 5)
	{
		func_283();
		Local_78.f_258 = 5;
		if (Local_78.f_640 > 0)
		{
			Var3 = { Local_78.f_645 };
			func_843(Local_78.f_644, &Var3);
			Local_78.f_648 = GlobalFunc_5920(Var3, 0);
			Local_78.f_652 = 0;
			if (HUD::DOES_BLIP_EXIST(Local_78.f_648))
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_78.f_648, "FR_DROPBLIP");
			}
		}
		bParam0 = true;
		bVar2 = true;
	}
	else if (bParam0)
	{
		bVar2 = true;
	}
	if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_401 == 0)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_401 = 1;
			GlobalFunc_159("FR_H_ACTIV1", -1);
		}
	}
	else if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_402 == 0)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_402 = 1;
			GlobalFunc_159("FR_H_ACTIV2", -1);
		}
	}
	else if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_403 == 0)
	{
		if (Local_78.f_640 > 0)
		{
			Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_403 = 1;
			if (Local_78.f_109 == 0)
			{
				if (Local_78.f_56.f_1 != 17)
				{
					func_357("FR_H_DROPOFF0", &(Local_78.f_56.f_3), -1);
				}
				else
				{
					func_357("FR_H_DROPOFF1", &(Local_78.f_56.f_3), -1);
				}
			}
			else
			{
				GlobalFunc_159("FR_H_DROPOFF2", -1);
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(Local_78.f_648))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (Local_78.f_652 == 0)
			{
				iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if ((PED::IS_PED_INJURED(Local_78.f_56.f_7) || PED::IS_PED_IN_VEHICLE(Local_78.f_56.f_7, iVar6, 0)) && (PED::IS_PED_INJURED(Local_78.f_109.f_7) || PED::IS_PED_IN_VEHICLE(Local_78.f_109.f_7, iVar6, 0)))
				{
					HUD::SET_BLIP_ROUTE(Local_78.f_648, 1);
					Local_78.f_652 = 1;
				}
			}
		}
		else if (Local_78.f_652 == 1)
		{
			HUD::SET_BLIP_ROUTE(Local_78.f_648, 0);
			Local_78.f_652 = 0;
		}
	}
	iVar7 = func_841();
	iVar8 = func_840();
	if (!bParam0)
	{
		if (!Local_78.f_641)
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (Local_78.f_616 != iVar7 || Local_78.f_617 != iVar8)
				{
					bParam0 = true;
					bVar2 = true;
				}
			}
		}
	}
	if (bParam0)
	{
		GlobalFunc_2729(&(Local_78.f_631));
		Local_78.f_633 = 0;
		iVar0 = 0;
		while (iVar0 < 22)
		{
			iVar1 = Global_86103[iVar0 /*2*/];
			if (!Local_78.f_641 && func_836(iVar0, Local_78.f_3.f_1, Local_78.f_56.f_1, Local_78.f_109.f_1, Local_78.f_636, Local_78.f_638, Local_78.f_644, iVar7, iVar8, bVar2))
			{
				GlobalFunc_2198(iVar1, 1, 0);
				GlobalFunc_2201(iVar1, 0);
				GlobalFunc_4328(iVar1, 5);
				if (!func_370(&(Local_78.f_631), Global_86103[iVar0 /*2*/].f_1))
				{
					func_367(&(Local_78.f_631), Global_86103[iVar0 /*2*/].f_1);
					Local_78.f_633++;
				}
			}
			else
			{
				GlobalFunc_2198(iVar1, 0, 0);
			}
			iVar0++;
		}
		Local_78.f_616 = iVar7;
		Local_78.f_617 = iVar8;
	}
	iVar9 = Local_78.f_642;
	fVar10 = (99999f * 99999f);
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iVar1 = Global_86103[iVar0 /*2*/];
		if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar1 /*23*/].f_11, 0))
		{
			fVar11 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), GlobalFunc_2247(Global_86103[iVar0 /*2*/], 0));
			if (fVar10 > fVar11)
			{
				iVar9 = iVar0;
				fVar10 = fVar11;
			}
		}
		iVar0++;
	}
	if (Local_78.f_642 != iVar9)
	{
		Local_78.f_642 = iVar9;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iVar1 = Global_86103[iVar0 /*2*/];
		if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar1 /*23*/].f_11, 0))
		{
			if (iVar0 == Local_78.f_642)
			{
				if (!MISC::IS_BIT_SET(Global_Mission_Blips[iVar1 /*23*/].f_11, 6))
				{
					GlobalFunc_2439(iVar1, 1, 0);
				}
			}
			else if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar1 /*23*/].f_11, 6))
			{
				GlobalFunc_2439(iVar1, 0, 0);
			}
		}
		iVar0++;
	}
	func_819(&(Local_78.f_56), 0);
	func_819(&(Local_78.f_109), 0);
}




int func_836(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x72992
{
	struct<3> Var0;
	bool bVar3;
	
	if (iParam0 >= 22)
	{
		return 0;
	}
	if (iParam0 == 21)
	{
		if (bParam11)
		{
		}
		return 0;
	}
	if (Global_86103[iParam0 /*2*/].f_1 == 4)
	{
		if (iParam9 == 0)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_86103[iParam0 /*2*/].f_1 == 0)
	{
		if (iParam10 == 0)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 10)
	{
		if (func_838(iParam1, 12) || func_838(iParam1, 13))
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 16)
	{
		if ((((((((func_838(iParam1, 14) || func_838(iParam1, 17)) || func_838(iParam1, 18)) || func_838(iParam1, 19)) || func_838(iParam1, 20)) || func_838(iParam1, 21)) || func_838(iParam1, 22)) || func_838(iParam1, 46)) || func_838(iParam1, 62))
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 9)
	{
		if (func_838(iParam1, 49))
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 12)
	{
		if (((func_838(iParam1, 76) || func_838(iParam1, 77)) || func_838(iParam1, 84)) || func_838(iParam1, 85))
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 13)
	{
		if (((func_838(iParam1, 71) || func_838(iParam1, 74)) || func_838(iParam1, 75)) || func_838(iParam1, 65))
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_86103[iParam0 /*2*/].f_1 != 5)
	{
		if (func_370(&uParam4, Global_86103[iParam0 /*2*/].f_1))
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	else if (func_370(&uParam6, iParam0))
	{
		if (bParam11)
		{
		}
		return 0;
	}
	if (iParam8 == 17)
	{
		if (iParam0 == 3)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam8 == 20)
	{
		if (iParam0 == 0)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam8 == 7)
	{
		if (iParam0 == 12)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_86103[iParam0 /*2*/].f_1 == 3 || Global_86103[iParam0 /*2*/].f_1 == 1)
	{
		if (iParam2 != 145 && iParam3 != 145)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 16)
	{
		if ((iParam1 != 0 && iParam2 != 0) && iParam3 != 0)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_86103[iParam0 /*2*/].f_1 != 5 && Global_86103[iParam0 /*2*/].f_1 != 1)
	{
		if (iParam2 == 17)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_86103[iParam0 /*2*/].f_1 == 1)
	{
		if ((iParam1 == 1 || iParam2 == 1) || iParam3 == 1)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_86103[iParam0 /*2*/].f_1 == 1)
	{
		if ((iParam1 == 19 || iParam2 == 19) || iParam3 == 19)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_86103[iParam0 /*2*/].f_1 == 0)
	{
		if (((((iParam1 == 14 || iParam1 == 19) || iParam2 == 14) || iParam2 == 19) || iParam3 == 14) || iParam3 == 19)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_86103[iParam0 /*2*/].f_1 == 5 || Global_86103[iParam0 /*2*/].f_1 == 2)
	{
		if ((iParam1 == 0 || iParam1 == 2) && iParam2 == 14)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (iParam0 == 2)
	{
		if ((iParam1 == 2 || iParam2 == 2) || iParam3 == 2)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (GlobalFunc_485(130) && !GlobalFunc_485(131))
	{
		if (((iParam1 != 1 && iParam1 != 19) || ((iParam2 != 1 && iParam2 != 19) && iParam2 != 145)) || ((iParam3 != 1 && iParam3 != 19) && iParam3 != 145))
		{
			Var0 = { GlobalFunc_2247(Global_86103[iParam0 /*2*/], 0) };
			if (func_416(Var0))
			{
				if (bParam11)
				{
				}
				return 0;
			}
		}
	}
	if (!GlobalFunc_485(73))
	{
		if (iParam0 == 10)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (Global_SAVE_DATA.isGameflowActive)
	{
		bVar3 = false;
		switch (Global_86103[iParam0 /*2*/].f_1)
		{
			case 0:
				bVar3 = GlobalFunc_892(0, 2);
				break;
			
			case 1:
				bVar3 = GlobalFunc_892(0, 13);
				break;
			
			case 2:
				bVar3 = GlobalFunc_892(0, 9);
				break;
			
			case 3:
				bVar3 = GlobalFunc_892(0, 1);
				break;
			
			case 4:
				bVar3 = GlobalFunc_485(53);
				break;
			
			case 5:
				bVar3 = true;
				break;
			
			default:
				if (bParam11)
				{
				}
				return 0;
				break;
		}
		if (!bVar3)
		{
			if (bParam11)
			{
			}
			return 0;
		}
	}
	if (bParam11)
	{
	}
	return 1;
}


int func_838(int iParam0, int iParam1)//Position - 0x72F1A
{
	if (GlobalFunc_891(iParam1))
	{
		if (GlobalFunc_747(Global_81155[iParam1 /*34*/].f_11, GlobalFunc_2962(iParam0)))
		{
			return 1;
		}
	}
	return 0;
}


int func_840()//Position - 0x72FAF
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8058();
	iVar1 = GlobalFunc_208(iVar0);
	if (iVar1 >= 6 && iVar1 < 18)
	{
		return 1;
	}
	return 0;
}

int func_841()//Position - 0x72FDB
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8058();
	iVar1 = GlobalFunc_208(iVar0);
	if (iVar1 >= 10 && iVar1 <= 22)
	{
		return 1;
	}
	return 0;
}


int func_843(int iParam0, var uParam1)//Position - 0x73034
{
	struct<151> Var0;
	
	Var0 = 6;
	Var0.f_112 = 2;
	Var0.f_140 = 3;
	Var0.f_150 = 3;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 != 25)
		{
			if (func_275(iParam0, &Var0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					*uParam1 = { Var0.f_105 };
				}
				else
				{
					*uParam1 = { Var0.f_109 };
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_844()//Position - 0x7309B
{
	int iVar0;
	
	if (Local_78.f_258 == 4)
	{
		iVar0 = 4;
	}
	else if (((Local_78.f_56 == 3 || Local_78.f_56 == 11) || Local_78.f_56 == 6) && ((Local_78.f_109 == 3 || Local_78.f_109 == 11) || Local_78.f_109 == 6))
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 3;
	}
	if (Local_78.f_258 != iVar0)
	{
		func_283();
		if (iVar0 == 3)
		{
			if ((Local_78.f_56 == 3 || Local_78.f_56 == 11) || Local_78.f_56 == 6)
			{
				GlobalFunc_715("FR_GETBACK", &(Local_78.f_56.f_3), 7500, 0);
			}
			else if ((Local_78.f_109 == 3 || Local_78.f_109 == 11) || Local_78.f_109 == 6)
			{
				GlobalFunc_715("FR_GETBACK", &(Local_78.f_109.f_3), 7500, 0);
			}
		}
		else
		{
			GlobalFunc_164("FR_GETBACK2", 7500, 0);
		}
		Local_78.f_258 = iVar0;
	}
	func_819(&(Local_78.f_56), 0);
	func_819(&(Local_78.f_109), 0);
}




void func_848()//Position - 0x73262
{
	int iVar0;
	
	iVar0 = 1;
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
	{
		iVar0 = 2;
	}
	else if (Local_78.f_56.f_1 == 14 || Local_78.f_56.f_1 == 17)
	{
		if (PED::_0x336B3D200AB007CB(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f) > 0)
		{
			iVar0 = 3;
		}
	}
	if (Local_78.f_621 != iVar0)
	{
		if (PED::DOES_GROUP_EXIST(GlobalFunc_468()))
		{
			Local_78.f_621 = iVar0;
			if (iVar0 == 1)
			{
				PED::SET_GROUP_FORMATION(GlobalFunc_468(), 0);
				PED::RESET_GROUP_FORMATION_DEFAULT_SPACING(GlobalFunc_468());
			}
			else if (iVar0 == 2)
			{
				PED::SET_GROUP_FORMATION(GlobalFunc_468(), 0);
				PED::SET_GROUP_FORMATION_SPACING(GlobalFunc_468(), 1.5f, -1082130432, -1082130432);
			}
			else if (iVar0 == 3)
			{
				PED::SET_GROUP_FORMATION(GlobalFunc_468(), 1);
				PED::SET_GROUP_FORMATION_SPACING(GlobalFunc_468(), 6.5f, -1082130432, -1082130432);
			}
			else
			{
				Local_78.f_621 = 0;
			}
		}
		else
		{
			Local_78.f_621 = 0;
		}
	}
}



int func_851(bool bParam0)//Position - 0x7341E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if (!func_442())
	{
		if (func_886(&iVar0) > 0)
		{
			if (func_884(iVar0, &iVar1))
			{
				bVar2 = false;
				if (GlobalFunc_3050(iVar0) == 3)
				{
					bVar2 = true;
				}
				if (bVar2)
				{
					bVar3 = false;
					if (Local_78.f_56 == 1)
					{
						func_5(&(Local_78.f_56), 2, 0);
						bVar3 = true;
					}
					if (Local_78.f_109 == 1)
					{
						func_5(&(Local_78.f_109), 2, 0);
						bVar3 = true;
					}
					if (bVar3)
					{
						func_433(1);
					}
				}
				else if (bParam0)
				{
					GlobalFunc_2640(iVar0, 0);
					return 0;
				}
				if (Local_78.f_56 == 0)
				{
					iVar4 = func_872(Local_78.f_3.f_1, iVar1, 1, Local_78.f_109.f_2);
					if (func_868(iVar0, 0))
					{
						if (func_861(&(Local_78.f_56), iVar1, iVar4, 0, bVar2))
						{
							func_852(Local_78.f_56.f_1, Local_78.f_3.f_1);
							func_852(Local_78.f_56.f_1, Local_78.f_109.f_1);
							return 1;
						}
					}
				}
				else if (Local_78.f_109 == 0)
				{
					iVar5 = func_872(Local_78.f_3.f_1, iVar1, 1, Local_78.f_56.f_2);
					if (func_868(iVar0, 0))
					{
						if (func_861(&(Local_78.f_109), iVar1, iVar5, 1, bVar2))
						{
							func_852(Local_78.f_109.f_1, Local_78.f_3.f_1);
							func_852(Local_78.f_109.f_1, Local_78.f_56.f_1);
							return 1;
						}
					}
				}
			}
			GlobalFunc_2640(iVar0, 0);
			return 0;
		}
	}
	return 0;
}

void func_852(int iParam0, int iParam1)//Position - 0x7356F
{
	if (iParam0 != 145 && iParam1 != 145)
	{
		if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
		{
			func_853(-1924990311, iParam0, iParam1);
			func_853(2091854273, iParam0, iParam1);
			func_853(328868333, iParam0, iParam1);
			func_853(-1813399915, iParam0, iParam1);
			func_853(465306446, iParam0, iParam1);
			func_853(-816460512, iParam0, iParam1);
			func_853(-702667427, iParam0, iParam1);
		}
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			func_853(-1924990311, iParam1, iParam0);
			func_853(2091854273, iParam1, iParam0);
			func_853(328868333, iParam1, iParam0);
			func_853(-1813399915, iParam1, iParam0);
			func_853(465306446, iParam1, iParam0);
			func_853(-816460512, iParam1, iParam0);
			func_853(-702667427, iParam1, iParam0);
		}
	}
}

int func_853(int iParam0, int iParam1, int iParam2)//Position - 0x73683
{
	int iVar0;
	int iVar1;
	
	if (!GlobalFunc_42(iParam1))
	{
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
	{
		if ((Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/] == iParam0 && Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/].NPC_Character == iParam2) && MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/].Player_Char_Bitset, iParam1))
		{
			if (Global_35460 != iVar0)
			{
				GlobalFunc_6781(iVar0);
				GlobalFunc_6780(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Missed_Calls)
	{
		if ((Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_MISSED_CALLS_ARRAY[iVar0 /*15*/] == iParam0 && Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_MISSED_CALLS_ARRAY[iVar0 /*15*/].f_6 == iParam2) && MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_MISSED_CALLS_ARRAY[iVar0 /*15*/].f_2, iParam1))
		{
			GlobalFunc_6780(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Chat_Calls)
	{
		if ((Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAT_CALLS_ARRAY[iVar0 /*15*/] == iParam0 && Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAT_CALLS_ARRAY[iVar0 /*15*/].f_6 == iParam2) && MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAT_CALLS_ARRAY[iVar0 /*15*/].f_2, iParam1))
		{
			GlobalFunc_494(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts)
	{
		if ((Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar0 /*14*/] == iParam0 && Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar0 /*14*/].NPC_Character == iParam2) && MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar0 /*14*/].Player_Char_Bitset, iParam1))
		{
			GlobalFunc_6779(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails)
	{
		if ((Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar0 /*10*/] == iParam0 && Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar0 /*10*/].NPC_Character == iParam2) && MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar0 /*10*/].Player_Char_Bitset, iParam1))
		{
			GlobalFunc_493(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}








int func_861(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x73D27
{
	int iVar0;
	struct<58> Var1;
	
	if (iParam1 == 145)
	{
	}
	else
	{
		iVar0 = GlobalFunc_769(iParam1);
		if (iVar0 >= 6)
		{
		}
		else
		{
			GlobalFunc_1057(uParam0, 1);
			uParam0->f_1 = iParam1;
			uParam0->f_2 = iParam2;
			uParam0->f_3 = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam1 /*29*/].f_3 };
			GlobalFunc_6877(&(uParam0->f_15));
			if (iParam2 < 24)
			{
				func_867(uParam0, iParam3);
				func_865(uParam0);
				if (((iParam2 == 2 || iParam2 == 5) || iParam2 == 22) || iParam2 == 23)
				{
					Local_78.f_653 = 1;
				}
			}
			if (iParam2 == 0)
			{
				uParam0->f_48 = 1;
			}
			func_864(uParam0);
			if (bParam4)
			{
				uParam0->f_51 = 1;
				func_703(uParam0);
				func_703(&(Local_78.f_3));
			}
			else
			{
				uParam0->f_51 = 0;
				func_862(uParam0);
			}
			Var1.f_11 = 12;
			Var1.f_31 = 25;
			Var1.f_57 = 2;
			if (GlobalFunc_42(uParam0->f_1))
			{
				GlobalFunc_97(uParam0->f_1, &Var1, 1);
				uParam0->f_35 = Var1;
				uParam0->f_34 = GlobalFunc_4917(uParam0->f_1);
			}
			else if (uParam0->f_1 == 14)
			{
				func_106(uParam0->f_1, &Var1, 2);
				uParam0->f_35 = Var1;
				uParam0->f_34 = GlobalFunc_4946(uParam0->f_1);
			}
			else
			{
				func_106(uParam0->f_1, &Var1, 1);
				uParam0->f_35 = Var1;
				uParam0->f_34 = GlobalFunc_4946(uParam0->f_1);
			}
			if (uParam0->f_35 == 0)
			{
				uParam0->f_35 = joaat("asea");
			}
			STREAMING::REQUEST_MODEL(uParam0->f_35);
			STREAMING::REQUEST_MODEL(uParam0->f_34);
			func_41(iParam1, 0);
			return 1;
		}
	}
	return 0;
}

void func_862(var uParam0)//Position - 0x73EA8
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	if (*uParam0 != 0)
	{
		if (uParam0->f_2 < 24)
		{
			if (uParam0->f_28 == 0)
			{
				fVar0 = (10f / 2f);
				Var1 = { fVar0, fVar0, fVar0 };
				Var4 = { func_863(uParam0->f_2) - Var1 };
				Var7 = { func_863(uParam0->f_2) + Var1 };
				uParam0->f_28 = PED::ADD_SCENARIO_BLOCKING_AREA(Var4, Var7, 0, 1, 1, 1);
			}
		}
	}
}

Vector3 func_863(int iParam0)//Position - 0x73F14
{
	return Global_85668[iParam0 /*18*/];
}

void func_864(var uParam0)//Position - 0x73F26
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (*uParam0 != 0)
	{
		if (uParam0->f_1 == GlobalFunc_8315())
		{
			if (uParam0->f_7 != PLAYER::PLAYER_PED_ID())
			{
				uParam0->f_7 = PLAYER::PLAYER_PED_ID();
				func_488(uParam0, &(Local_78.f_259), 1);
			}
			return;
		}
		else if (uParam0->f_1 != 145)
		{
			if (GlobalFunc_42(uParam0->f_1))
			{
				iVar0 = GlobalFunc_237(uParam0->f_1);
				uVar1 = Global_87845[iVar0];
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
				{
					uParam0->f_7 = uVar1;
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(uVar1))
				{
					PED::DELETE_PED(&(uParam0->f_7));
				}
			}
			else
			{
				iVar2 = GlobalFunc_769(uParam0->f_1);
				iVar3 = (iVar2 - 3);
				if (iVar2 == 7)
				{
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
				{
					uParam0->f_7 = Global_86201[iVar3];
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Global_86201[iVar3]))
				{
					PED::DELETE_PED(&(uParam0->f_7));
				}
			}
			if (!PED::IS_PED_INJURED(uParam0->f_7))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_7, 1))
				{
					if (uParam0->f_50)
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_7, 1, 1);
					func_488(uParam0, &(Local_78.f_259), 0);
				}
			}
		}
	}
}

void func_865(var uParam0)//Position - 0x7403D
{
	struct<3> Var0;
	
	if (*uParam0 != 0)
	{
		if (GlobalFunc_42(uParam0->f_1))
		{
			if (uParam0->f_2 < 24)
			{
				Var0 = { uParam0->f_24 - uParam0->f_21 };
				func_866(uParam0->f_1, uParam0->f_21, MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1));
				uParam0->f_45 = 1;
			}
		}
	}
}

void func_866(int iParam0, struct<3> Param1, var uParam4)//Position - 0x7408E
{
	switch (iParam0)
	{
		case 0:
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] = 2;
			break;
		
		case 1:
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] = 3;
			break;
		
		case 2:
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] = 4;
			break;
		
		default:
			return;
			break;
	}
	Global_88210[iParam0 /*109*/].f_3 = iParam0;
	Global_88210[iParam0 /*109*/].f_2 = Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0];
	Global_88210[iParam0 /*109*/].f_4 = { Param1 };
	Global_88210[iParam0 /*109*/].f_7 = uParam4;
}

void func_867(var uParam0, int iParam1)//Position - 0x7411F
{
	struct<3> Var0;
	
	if (uParam0->f_2 < 24)
	{
		if (iParam1 == 0)
		{
			Var0 = { Global_85668[uParam0->f_2 /*18*/].f_3 };
		}
		else if (iParam1 == 1)
		{
			Var0 = { Global_85668[uParam0->f_2 /*18*/].f_6 };
		}
		else
		{
			Var0 = { Global_85668[uParam0->f_2 /*18*/].f_6 };
			iParam1 = 1;
		}
		uParam0->f_24 = { Global_85668[uParam0->f_2 /*18*/] };
		uParam0->f_21 = { Global_85668[uParam0->f_2 /*18*/] + Var0 };
		uParam0->f_27 = iParam1;
	}
}

int func_868(int iParam0, int iParam1)//Position - 0x741AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_871(&iVar0);
	if (iVar2 == 0)
	{
		GlobalFunc_2640(iParam0, 4);
		func_870(iParam0, iParam1);
		return 1;
	}
	else if (iVar2 == 1)
	{
		if (func_869(iParam0, iVar0, &iVar1) && GlobalFunc_2014(iVar1) != -1)
		{
			GlobalFunc_2640(iParam0, 4);
			GlobalFunc_2640(iVar1, 4);
			func_870(iParam0, iParam1);
			func_870(iVar1, iParam1);
			return 1;
		}
	}
	return 0;
}

int func_869(int iParam0, int iParam1, var uParam2)//Position - 0x74219
{
	int iVar0;
	int iVar1;
	
	iVar0 = 7;
	iVar1 = 7;
	if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/] == Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/])
	{
		iVar0 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_1;
		iVar1 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/].f_1;
	}
	else if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_1 == Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/].f_1)
	{
		iVar0 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/];
		iVar1 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/];
	}
	else if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/] == Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/].f_1)
	{
		iVar0 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_1;
		iVar1 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/];
	}
	else if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_1 == Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/])
	{
		iVar0 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/];
		iVar1 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam1 /*19*/].f_1;
	}
	if (GlobalFunc_42(GlobalFunc_3049(iVar0)) || GlobalFunc_42(GlobalFunc_3049(iVar1)))
	{
		*uParam2 = GlobalFunc_768(iVar0, iVar1);
		if (*uParam2 != 10)
		{
			return 1;
		}
	}
	*uParam2 = 10;
	return 0;
}

void func_870(int iParam0, var uParam1)//Position - 0x74366
{
	if (iParam0 < 9)
	{
		Global_86223[iParam0 /*2*/].f_1 = uParam1;
	}
}

int func_871(var uParam0)//Position - 0x74384
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	*uParam0 = 10;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Global_86223[iVar1 /*2*/] == 4)
		{
			if (*uParam0 == 10)
			{
				*uParam0 = iVar1;
			}
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_872(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x743C8
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	int iVar5;
	struct<3> Var6;
	var uVar9;
	var uVar10;
	float fVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (iParam1 == 145)
	{
		return 25;
	}
	if (iParam2 && GlobalFunc_5586(iParam0, iParam1, &iVar5))
	{
		switch (GlobalFunc_3050(iVar5))
		{
			case 1:
				if (func_882())
				{
					GlobalFunc_811(&(Global_85668[0 /*18*/].f_17), 1024);
					return 0;
				}
				break;
			}
	}
	if (GlobalFunc_42(iParam1))
	{
		if (!GlobalFunc_10380(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam1], 1))
		{
			Var6 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iParam1 /*3*/] };
			if (SYSTEM::VDIST(Var2, Var6) < (1800f * 0.5f))
			{
				Var2 = { Var6 };
			}
		}
	}
	bVar13 = func_873(Var2, iVar0, iVar1, 0, 1, &uVar9, &fVar11, iParam3);
	bVar14 = func_873(Var2, iVar0, iVar1, 0, 0, &uVar10, &uVar12, iParam3);
	if (bVar13 && bVar14)
	{
		if (fVar11 > 1800f)
		{
			return uVar10;
		}
		else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 25)
		{
			return uVar10;
		}
		else
		{
			return uVar9;
		}
	}
	else if (bVar13)
	{
		return uVar9;
	}
	else if (bVar14)
	{
		return uVar10;
	}
	iVar15 = 10;
	return iVar15;
}

bool func_873(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, var uParam7, var uParam8, int iParam9)//Position - 0x74520
{
	int iVar0;
	float fVar1;
	
	*uParam7 = 25;
	*uParam8 = (999999f * 999999f);
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (iParam9 == 25 || SYSTEM::VDIST(Global_85668[iVar0 /*18*/], Global_85668[iParam9 /*18*/]) > 200f)
		{
			if (func_878(iVar0, iParam4))
			{
				if ((bParam5 == 0 && func_877(iVar0, 128)) || (bParam5 == 1 && func_877(iVar0, 256)))
				{
					if (iParam6 == func_877(iVar0, 512))
					{
						if (func_874(iParam3, iParam4, iVar0, bParam5))
						{
							fVar1 = SYSTEM::VDIST(Param0, Global_85668[iVar0 /*18*/]);
							if (*uParam8 > fVar1)
							{
								*uParam8 = fVar1;
								*uParam7 = iVar0;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam6 == 1)
	{
	}
	return *uParam7 != 25;
}

int func_874(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x74604
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	float fVar7;
	struct<3> Var8;
	float fVar11;
	float fVar12;
	
	if (((iParam0 == 0 || iParam0 == 2) || iParam1 == 0) || iParam1 == 2)
	{
		if (func_416(Global_85668[iParam2 /*18*/]))
		{
			if (GlobalFunc_485(130) && !GlobalFunc_485(131))
			{
				return 0;
			}
		}
	}
	if (iParam2 == 4)
	{
		bVar0 = false;
		if (24 <= 31)
		{
			bVar0 = MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[9], 24);
		}
		else
		{
			bVar0 = MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[10], (24 - 31));
		}
		if (bVar0)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		bVar1 = false;
		if (25 <= 31)
		{
			bVar1 = MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[9], 25);
		}
		else
		{
			bVar1 = MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[10], (25 - 31));
		}
		if (bVar1)
		{
			return 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 94)
	{
		if (GlobalFunc_891(iVar2) && !func_876(iVar2))
		{
			iVar6 = Global_81155[iVar2 /*34*/].f_10;
			if (iVar6 != 262)
			{
				if (GlobalFunc_4324(iVar6))
				{
					Var3 = { GlobalFunc_2247(iVar6, GlobalFunc_8315()) };
				}
				else
				{
					Var3 = { GlobalFunc_2247(iVar6, 0) };
				}
				fVar7 = SYSTEM::VDIST(Var3, Global_85668[iParam2 /*18*/]);
				if (fVar7 < 100f)
				{
					return 0;
				}
			}
		}
		iVar2++;
	}
	Var8 = { Global_85668[iParam2 /*18*/] };
	fVar11 = SYSTEM::VDIST2(Var8, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	if (!bParam3)
	{
		fVar12 = 350f;
	}
	else
	{
		fVar12 = 100f;
	}
	if (fVar11 < (fVar12 * fVar12))
	{
		return 0;
	}
	if (Global_85668[iParam2 /*18*/].f_16 != 10)
	{
		if (!GlobalFunc_103(Global_85668[iParam2 /*18*/].f_16))
		{
			return 0;
		}
	}
	return 1;
}


int func_876(int iParam0)//Position - 0x747FA
{
	switch (iParam0)
	{
		case 88:
		case 92:
		case 33:
			return 1;
			break;
	}
	return 0;
}

bool func_877(int iParam0, int iParam1)//Position - 0x74823
{
	return (Global_85668[iParam0 /*18*/].f_17 && iParam1) == iParam1;
}

int func_878(int iParam0, int iParam1)//Position - 0x7483B
{
	switch (iParam1)
	{
		case 0:
			return Global_85668[iParam0 /*18*/].f_17 & 1 != 0;
			break;
		
		case 2:
			return Global_85668[iParam0 /*18*/].f_17 & 4 != 0;
			break;
		
		case 3:
			return Global_85668[iParam0 /*18*/].f_17 & 8 != 0;
			break;
		
		case 4:
			return Global_85668[iParam0 /*18*/].f_17 & 16 != 0;
			break;
		
		case 5:
			return Global_85668[iParam0 /*18*/].f_17 & 32 != 0;
			break;
		
		case 1:
			return Global_85668[iParam0 /*18*/].f_17 & 2 != 0;
			break;
	}
	return 0;
}




bool func_882()//Position - 0x74970
{
	return Global_85668[0 /*18*/].f_17 & 1024 != 0;
}


int func_884(int iParam0, var uParam1)//Position - 0x749CC
{
	int iVar0;
	
	if (func_885(iParam0, &iVar0))
	{
		*uParam1 = GlobalFunc_3049(iVar0);
		if (*uParam1 != 145)
		{
			return 1;
		}
	}
	*uParam1 = 145;
	return 0;
}

int func_885(int iParam0, var uParam1)//Position - 0x749FA
{
	int iVar0;
	
	iVar0 = GlobalFunc_769(Global_86101);
	if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_1 == iVar0)
	{
		*uParam1 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/];
		return 1;
	}
	if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/] == iVar0)
	{
		*uParam1 = Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iParam0 /*19*/].f_1;
		return 1;
	}
	*uParam1 = 7;
	return 0;
}

int func_886(var uParam0)//Position - 0x74A61
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	*uParam0 = 10;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Global_86223[iVar1 /*2*/] == 3)
		{
			if (*uParam0 == 10)
			{
				*uParam0 = iVar1;
			}
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}


int func_888(var uParam0)//Position - 0x74AB3
{
	int iVar0;
	
	if (!GlobalFunc_39(6) && !GlobalFunc_39(7))
	{
		iVar0 = GlobalFunc_7733(uParam0, 1, 6, 0, 0);
		HUD::REQUEST_ADDITIONAL_TEXT("FRIENDS", 5);
		if (iVar0 != 1)
		{
			return 0;
		}
		if (!MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(1);
		}
	}
	return 1;
}



int func_891()//Position - 0x74C83
{
	struct<3> Var0;
	
	if (Local_78.f_628 == 0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_78.f_648) && Local_78.f_644 < 24)
		{
			Var0 = { Local_78.f_645 };
			if (func_843(Local_78.f_644, &Var0))
			{
				HUD::SET_BLIP_COORDS(Local_78.f_648, Var0);
			}
			if (GlobalFunc_552(1, 0, 1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, Global_18, 1, 1, 0))
					{
						Local_78.f_628 = 1;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, Global_21, 1, 1, 0))
				{
					Local_78.f_628 = 1;
				}
			}
		}
	}
	if (Local_78.f_628)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 10f, 8, 1056964608, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}


int func_893()//Position - 0x74E41
{
	int iVar0;
	
	if (Local_78.f_627 == 23)
	{
		if (GlobalFunc_552(1, 0, 1))
		{
			iVar0 = 0;
			while (iVar0 < 22)
			{
				if (Global_86103[iVar0 /*2*/].f_1 == 5)
				{
					if (!func_370(&(Local_78.f_638), iVar0))
					{
						if (func_895(iVar0))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), GlobalFunc_2247(Global_86103[iVar0 /*2*/], 0), Global_18, 1, 1, 0))
							{
								Local_78.f_627 = iVar0;
							}
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (Local_78.f_627 != 23)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 5f, 8, 1056964608, 0, 1))
		{
			GlobalFunc_5083(Local_78.f_627, 1);
			return 1;
		}
	}
	return 0;
}


int func_895(int iParam0)//Position - 0x74F65
{
	if (!GlobalFunc_39(6) && !GlobalFunc_39(7))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(GlobalFunc_451()))
	{
		return 0;
	}
	if (!PED::IS_PED_GROUP_MEMBER(GlobalFunc_451(), GlobalFunc_468()))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(GlobalFunc_450()))
	{
		if (!PED::IS_PED_GROUP_MEMBER(GlobalFunc_450(), GlobalFunc_468()))
		{
			return 0;
		}
	}
	if (!GlobalFunc_474(Global_86103[iParam0 /*2*/]))
	{
		return 0;
	}
	return 1;
}

void func_896()//Position - 0x74FDD
{
	func_5(&(Local_78.f_3), 0, 0);
	func_5(&(Local_78.f_56), 0, 0);
	func_5(&(Local_78.f_109), 0, 0);
}


void func_898()//Position - 0x75011
{
	Local_78.f_642 = 23;
	Local_78.f_625 = 0;
	func_906();
	if (Local_78.f_618 == 0)
	{
		func_904();
		Local_78.f_618 = 1;
	}
	func_386(&(Local_78.f_703));
	Local_78.f_622 = func_376(Local_78.f_3.f_1);
	Local_78.f_623 = func_375(Local_78.f_3.f_1);
	Local_78.f_624 = func_377(Local_78.f_3.f_1);
	Local_78.f_627 = 23;
	Local_78.f_628 = 0;
	func_776(1);
	func_900();
	if (Local_78.f_56.f_1 == 17 || Local_78.f_109.f_1 == 17)
	{
		if (GlobalFunc_892(0, 9) == 1)
		{
			GlobalFunc_2196(0, 9, 0);
			Local_78.f_619 = 1;
		}
	}
	else if (Local_78.f_56.f_1 == 14 || Local_78.f_109.f_1 == 14)
	{
		if (((Local_78.f_56.f_1 == 0 || Local_78.f_109.f_1 == 0) || Local_78.f_3.f_1 == 0) || ((Local_78.f_56.f_1 == 2 || Local_78.f_109.f_1 == 2) || Local_78.f_3.f_1 == 2))
		{
			if (GlobalFunc_892(0, 9) == 1)
			{
				GlobalFunc_2196(0, 9, 0);
				Local_78.f_619 = 1;
			}
		}
	}
	if (Local_78.f_640 == 0)
	{
		Local_78.f_644 = 25;
		Local_78.f_645 = { 0f, 0f, 0f };
	}
	else
	{
		Local_78.f_644 = func_899(Local_78.f_3.f_1, Local_78.f_56.f_1, 1);
		Local_78.f_645 = { func_863(Local_78.f_644) };
	}
	GlobalFunc_1648(&(Local_78.f_703), 17);
	if (!Local_78.f_620)
	{
		if (Local_78.f_640 > 0)
		{
			if (Global_86103[Global_86194 /*2*/].f_1 == 5)
			{
				func_431(&(Local_78.f_703), 6, 145, 69);
			}
			else
			{
				func_431(&(Local_78.f_703), 10, 145, 69);
			}
		}
	}
	else
	{
		func_421(&(Local_78.f_703));
		Local_78.f_620 = 0;
	}
}

int func_899(int iParam0, int iParam1, int iParam2)//Position - 0x751E7
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	var uVar6;
	float fVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (iParam1 == 145)
	{
		return 25;
	}
	bVar9 = func_873(Var2, iVar0, iVar1, 1, 1, &uVar5, &fVar7, 25);
	bVar10 = func_873(Var2, iVar0, iVar1, 1, 0, &uVar6, &uVar8, 25);
	if (iParam2 && bVar10)
	{
		return uVar6;
	}
	else if (bVar9 && bVar10)
	{
		if (fVar7 > 1800f)
		{
			return uVar6;
		}
		else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
		{
			return uVar6;
		}
		else
		{
			return uVar5;
		}
	}
	else if (bVar9)
	{
		return uVar5;
	}
	else if (bVar10)
	{
		return uVar6;
	}
	iVar11 = 10;
	return iVar11;
}

void func_900()//Position - 0x752B0
{
	struct<3> Var0;
	char* sVar3;
	
	sVar3 = "launcher_tennis";
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	else
	{
		return;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("launcher_tennis")) == 0)
	{
		if (func_901(Var0, 100))
		{
			BRAIN::_0x6D6840CEE8845831(sVar3);
		}
	}
}

int func_901(struct<3> Param0, int iParam3)//Position - 0x75304
{
	float fVar0;
	
	fVar0 = GlobalFunc_3364(iParam3);
	if (GlobalFunc_1990(Param0, -1171.28f, -1599.59f, 3.34f) < fVar0)
	{
		return 1;
	}
	else if (GlobalFunc_1990(Param0, -780.4614f, 156.5187f, 66.4744f) < fVar0)
	{
		return 1;
	}
	else if (GlobalFunc_1990(Param0, 487.5186f, -217.7695f, 52.7864f) < fVar0)
	{
		return 1;
	}
	else if (GlobalFunc_1990(Param0, -1223.908f, 338.3682f, 78.9859f) < fVar0)
	{
		return 1;
	}
	else if (GlobalFunc_1990(Param0, -1233.088f, 372.8105f, 78.9812f) < fVar0)
	{
		return 1;
	}
	else if (GlobalFunc_1990(Param0, -1618.487f, 266.4707f, 58.5552f) < fVar0)
	{
		return 1;
	}
	else if (GlobalFunc_1990(Param0, -1372.016f, -101.2861f, 49.7046f) < fVar0)
	{
		return 1;
	}
	else if (GlobalFunc_1990(Param0, -2869.991f, 9.229736f, 10.6083f) < fVar0)
	{
		return 1;
	}
	else if (GlobalFunc_1990(Param0, -939.617f, -1255.732f, 6.9773f) < fVar0)
	{
		return 1;
	}
	return 0;
}



int func_904()//Position - 0x75481
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iVar1 = Global_86103[iVar0 /*2*/];
		if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar1 /*23*/].f_11, 0))
		{
		}
		Global_86148[iVar0 /*2*/].f_1 = func_905(iVar1);
		Global_86148[iVar0 /*2*/] = Global_Mission_Blips[iVar1 /*23*/].f_11;
		GlobalFunc_2198(iVar1, 0, 0);
		iVar0++;
	}
	return 1;
}

int func_905(int iParam0)//Position - 0x754E4
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	uVar1 = MISC::GET_BITS_IN_RANGE(Global_Mission_Blips[iVar0 /*23*/].f_11, 21, 26);
	return uVar1;
}

void func_906()//Position - 0x75527
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_77);
}

void func_907()//Position - 0x75535
{
	func_774();
	if (REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
	{
		func_283();
		func_282(4);
		return;
	}
	else if (GlobalFunc_142())
	{
		func_283();
		if (GlobalFunc_145())
		{
			func_282(3);
		}
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_283();
		func_282(0);
	}
	else if (GlobalFunc_39(2))
	{
		func_283();
		func_431(&(Local_78.f_703), 5, 145, 69);
		GlobalFunc_1648(&(Local_78.f_703), 18);
		Local_78.f_629 = 145;
		Local_78.f_630 = 145;
		func_771(0, 48, 1);
		func_816(6);
	}
	else if (GlobalFunc_39(18))
	{
		func_283();
		func_896();
		func_282(1);
	}
	else if (((GlobalFunc_6687(6) && !GlobalFunc_39(6)) && !GlobalFunc_39(7)) && !GlobalFunc_39(17))
	{
		func_283();
		func_771(0, 48, 0);
		func_282(1);
	}
	else if (!func_914())
	{
		func_5(&(Local_78.f_3), 2, 0);
		func_5(&(Local_78.f_56), 2, 0);
		func_5(&(Local_78.f_109), 2, 0);
		func_283();
		func_282(2);
		return;
	}
	else if (func_913() && !func_888(&(Local_78.f_256)))
	{
		GlobalFunc_187();
		return;
	}
	else if (func_912())
	{
		func_851(0);
		func_465();
		func_432();
		func_292(0);
		func_848();
		if (func_913())
		{
			if (Local_78.f_618 == 0)
			{
				func_904();
				Local_78.f_618 = 1;
			}
		}
		if (func_442())
		{
			func_283();
		}
		else if (!func_291())
		{
			func_283();
			if (func_289())
			{
				func_282(6);
			}
		}
		else if (((Local_78.f_56 == 3 || Local_78.f_56 == 11) || Local_78.f_56 == 6) || ((Local_78.f_109 == 3 || Local_78.f_109 == 11) || Local_78.f_109 == 6))
		{
			func_844();
		}
		else if ((Local_78.f_3 == 1 || Local_78.f_56 == 1) || Local_78.f_109 == 1)
		{
			func_908();
		}
		else
		{
			func_283();
			func_433(1);
			func_816(2);
		}
	}
}

void func_908()//Position - 0x7575F
{
	if (Local_78.f_258 != 2)
	{
		func_283();
		Local_78.f_258 = 2;
	}
	if (Local_78.f_56 == 1)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_78.f_56.f_11))
		{
			func_911(&(Local_78.f_56));
		}
	}
	else
	{
		func_910(&(Local_78.f_56));
	}
	if (Local_78.f_109 == 1)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_78.f_109.f_11))
		{
			func_911(&(Local_78.f_109));
		}
	}
	else
	{
		func_910(&(Local_78.f_109));
	}
	if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_399 == 0)
	{
		Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_399 = 1;
		HUD::CLEAR_HELP(1);
		if (Local_78.f_56.f_1 != 17)
		{
			func_357("FR_H_PKUP", &(Local_78.f_56.f_3), -1);
		}
		else
		{
			func_357("FR_H_PKUPf", &(Local_78.f_56.f_3), -1);
		}
		if (HUD::DOES_BLIP_EXIST(Local_78.f_56.f_11))
		{
			HUD::SET_BLIP_FLASHES(Local_78.f_56.f_11, 1);
			HUD::SET_BLIP_FLASH_TIMER(Local_78.f_56.f_11, 10000);
		}
	}
	else if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_400 == 0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_78.f_56.f_10))
		{
			if (Local_78.f_56.f_1 != 17)
			{
				func_357("FR_H_WAIT", &(Local_78.f_56.f_3), -1);
			}
			else
			{
				func_357("FR_H_WAITf", &(Local_78.f_56.f_3), -1);
			}
			Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_400 = 1;
		}
		else if (HUD::DOES_BLIP_EXIST(Local_78.f_109.f_10))
		{
			if (Local_78.f_109.f_1 != 17)
			{
				func_357("FR_H_WAIT", &(Local_78.f_109.f_3), -1);
			}
			else
			{
				func_357("FR_H_WAITf", &(Local_78.f_109.f_3), -1);
			}
			Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_400 = 1;
		}
	}
	func_819(&(Local_78.f_56), func_909(&(Local_78.f_56)));
	func_819(&(Local_78.f_109), func_909(&(Local_78.f_109)));
}

int func_909(var uParam0)//Position - 0x758F9
{
	if (*uParam0 == 1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		if (func_372(uParam0->f_7, uParam0->f_24, 20f) && func_373(PLAYER::PLAYER_PED_ID(), uParam0->f_21, 30f))
		{
			return 1;
		}
	}
	return 0;
}

void func_910(var uParam0)//Position - 0x75949
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_11))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_11));
	}
}

int func_911(var uParam0)//Position - 0x75964
{
	if (*uParam0 == 0)
	{
	}
	else if (uParam0->f_2 != 25)
	{
		uParam0->f_11 = GlobalFunc_5920(uParam0->f_24, 0);
		if (HUD::DOES_BLIP_EXIST(uParam0->f_11))
		{
			HUD::SET_BLIP_AS_FRIENDLY(uParam0->f_11, true);
			HUD::SET_BLIP_SPRITE(uParam0->f_11, 280);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_11, "FR_PKUPBLIP");
		}
		return uParam0->f_11;
	}
	return 0;
}

int func_912()//Position - 0x759C2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 1;
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FRIENDS", 5))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("FRIENDS", 5);
		iVar0 = 0;
	}
	STREAMING::REQUEST_MODEL(iLocal_77);
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_77))
	{
		iVar1 = 0;
	}
	if (iVar0 && iVar1)
	{
		return 1;
	}
	return 0;
}

int func_913()//Position - 0x75A0F
{
	if ((Local_78.f_3.f_50 || Local_78.f_56.f_50) || Local_78.f_109.f_50)
	{
		return 1;
	}
	return 0;
}

int func_914()//Position - 0x75A3D
{
	int iVar0;
	
	if (func_442())
	{
		iVar0 = GlobalFunc_8315();
		if (Local_78.f_247 != iVar0)
		{
			func_40(&(Local_78.f_3));
			func_40(&(Local_78.f_56));
			func_40(&(Local_78.f_109));
			func_916(&(Local_78.f_3));
			func_433(0);
			func_915();
			func_867(&(Local_78.f_56), 0);
			func_867(&(Local_78.f_109), 1);
			func_862(&(Local_78.f_3));
			func_862(&(Local_78.f_56));
			func_862(&(Local_78.f_109));
			Local_78.f_247 = iVar0;
			Local_78.f_248 = 1;
		}
	}
	else
	{
		func_915();
		if (Local_78.f_248)
		{
			func_58(&(Local_78.f_3));
			func_865(&(Local_78.f_56));
			func_865(&(Local_78.f_109));
			Local_78.f_248 = 0;
			if (func_729())
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_915()//Position - 0x75AF1
{
	func_864(&(Local_78.f_3));
	func_864(&(Local_78.f_56));
	func_864(&(Local_78.f_109));
}

void func_916(var uParam0)//Position - 0x75B11
{
	int iVar0[3];
	struct<3> Var4;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	
	if (*uParam0 == 0)
	{
	}
	iVar0[0] = Local_78.f_3.f_2;
	iVar0[1] = Local_78.f_56.f_2;
	iVar0[2] = Local_78.f_109.f_2;
	if (!PED::IS_PED_INJURED(uParam0->f_7))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_7, 1) };
		fVar7 = (999999f * 999999f);
		iVar8 = -1;
		iVar9 = 0;
		while (iVar9 < iVar0)
		{
			if (iVar0[iVar9] < 24)
			{
				fVar10 = SYSTEM::VDIST2(Var4, Global_85668[iVar0[iVar9] /*18*/]);
				if (fVar7 > fVar10)
				{
					fVar7 = fVar10;
					iVar8 = iVar9;
				}
			}
			iVar9++;
		}
		if (iVar8 != -1)
		{
			uParam0->f_2 = iVar0[iVar8];
		}
	}
	if (uParam0->f_2 < 24)
	{
		func_867(uParam0, 0);
	}
}

void func_917(int iParam0)//Position - 0x75BD8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar1 = GlobalFunc_3050(iParam0);
	bVar2 = false;
	if (iVar1 == 3)
	{
		bVar2 = true;
	}
	if (REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
	{
		func_282(4);
		return;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_282(0);
		return;
	}
	else if (GlobalFunc_2014(iParam0) != 3)
	{
		func_282(1);
		return;
	}
	else if (!func_885(iParam0, &iVar0))
	{
		func_282(1);
		return;
	}
	else if (bVar2 == 0 || func_888(&(Local_78.f_256)))
	{
		if ((GlobalFunc_6687(6) && !GlobalFunc_39(6)) && !GlobalFunc_39(7))
		{
			func_282(1);
			return;
		}
		else
		{
			func_912();
			iVar3 = GlobalFunc_8315();
			iVar4 = GlobalFunc_3049(iVar0);
			iVar5 = func_872(iVar3, iVar4, 1, 25);
			func_861(&(Local_78.f_3), iVar3, 25, -1, 0);
			func_861(&(Local_78.f_56), iVar4, iVar5, 0, bVar2);
			GlobalFunc_1648(&(Local_78.f_703), 16);
			iLocal_980 = 1;
			if (!func_868(iParam0, 0))
			{
				func_282(1);
				return;
			}
			func_852(iVar3, iVar4);
			if (bVar2 == 0)
			{
				func_816(1);
			}
			else
			{
				func_816(2);
			}
		}
	}
}

void func_918()//Position - 0x75D04
{
	func_923(0);
	func_921();
	func_6(&(Local_78.f_3));
	func_6(&(Local_78.f_56));
	func_6(&(Local_78.f_109));
	func_449(&(Local_78.f_162[0 /*28*/]), 0);
	func_449(&(Local_78.f_162[1 /*28*/]), 1);
	func_449(&(Local_78.f_162[2 /*28*/]), 2);
	func_920();
	func_919();
	Local_78 = 0;
	Local_78.f_1 = 7;
	Local_78.f_2 = 0;
	Local_78.f_256 = -1;
	Local_78.f_616 = 0;
	Local_78.f_617 = 0;
	Local_78.f_618 = 0;
	Local_78.f_619 = 0;
	Local_78.f_620 = 0;
	Local_78.f_621 = 1;
	Local_78.f_622 = func_376(Local_78.f_3.f_1);
	Local_78.f_623 = func_375(Local_78.f_3.f_1);
	Local_78.f_624 = func_377(Local_78.f_3.f_1);
	Local_78.f_643 = 23;
	Local_78.f_629 = 145;
	Local_78.f_630 = 145;
	iLocal_979 = 1;
	Global_87677 = 1;
	Global_86198 = 145;
	iLocal_980 = 0;
	Local_78.f_247 = GlobalFunc_8315();
	Local_78.f_248 = 0;
	Local_78.f_249 = 6;
	Local_78.f_250 = 145;
	Local_78.f_251 = 145;
	Local_78.f_703 = 20;
	Local_78.f_703.f_1 = 8;
	Local_78.f_703.f_2 = 0;
	Local_78.f_703.f_3 = 20;
	Local_78.f_703.f_32 = 145;
	Local_78.f_703.f_33 = 69;
	Local_78.f_703.f_28[0] = 145;
	Local_78.f_703.f_28[1] = 145;
	Local_78.f_703.f_28[2] = 145;
	GlobalFunc_235(&(Local_78.f_703.f_4));
	GlobalFunc_6877(&(Local_78.f_703.f_7));
	GlobalFunc_235(&(Local_78.f_703.f_10));
	Local_78.f_703.f_13 = 0;
	Local_78.f_703.f_14 = 0;
	Local_78.f_737 = 0;
	GlobalFunc_2729(&(Local_78.f_631));
	Local_78.f_633 = 0;
	GlobalFunc_2729(&(Local_78.f_634));
	GlobalFunc_2729(&(Local_78.f_636));
	GlobalFunc_2729(&(Local_78.f_638));
	Local_78.f_640 = 0;
	Local_78.f_641 = 0;
	Local_78.f_644 = 25;
	Local_78.f_652 = 0;
	Local_78.f_653 = 0;
	Local_78.f_614 = 1;
	Local_78.f_615 = -1;
	Local_78.f_778 = 0;
	Local_78.f_857 = 0;
	Local_78.f_777 = 0;
}

void func_919()//Position - 0x75EF8
{
	int iVar0;
	
	Local_78.f_702 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Local_78.f_671[iVar0 /*6*/].f_1 = 6;
		iVar0++;
	}
}

void func_920()//Position - 0x75F24
{
	Local_78.f_670 = 0;
}

void func_921()//Position - 0x75F32
{
	func_922(11, 0, 67);
	func_922(13, 1, 95);
	func_922(16, 1, 96);
	func_922(19, 1, 97);
	func_922(17, 1, 98);
	func_922(15, 1, 99);
	func_922(18, 1, 100);
	func_922(20, 1, 101);
	func_922(14, 1, 102);
	func_922(12, 2, 93);
	func_922(10, 3, 66);
	func_922(9, 4, 111);
	func_922(7, 4, 112);
	func_922(8, 4, 113);
	func_922(0, 5, 116);
	func_922(1, 5, 117);
	func_922(2, 5, 118);
	func_922(3, 5, 119);
	func_922(4, 5, 120);
	func_922(5, 5, 121);
	func_922(6, 5, 122);
	func_922(21, 6, 161);
}

void func_922(int iParam0, int iParam1, int iParam2)//Position - 0x75FF8
{
	Global_86103[iParam0 /*2*/].f_1 = iParam1;
	Global_86103[iParam0 /*2*/] = iParam2;
}

void func_923(bool bParam0)//Position - 0x76016
{
	if (bParam0)
	{
		func_927(0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 10);
		func_926(0f, 0f, 0f, 0f, 0f, 0f, 0f);
	}
	func_927(1, -824.9975f, 179.9752f, 70.4895f, 5.8945f, -0.6014f, 0.6636f, 7.3145f, -2.6014f, 0.7136f, 0);
	func_926(-860.8041f, 136.4404f, 59.025f, 0.6456f, -828.7663f, 178.8821f, 71.2117f);
	func_925(1);
	func_924(896);
	func_927(2, 1986.868f, 3810.984f, 31.1159f, -2.28f, 0.42f, 0.11f, -1.02f, 2.28f, 0.0138f, 1);
	func_926(2138.562f, 3767.596f, 32.1819f, 120.8022f, 1995.681f, 3818.576f, 32.1837f);
	func_925(1);
	func_924(896);
	func_927(3, -13.8595f, -1454.332f, 29.4997f, 0.1999f, 8.5446f, 0.1003f, -1.0001f, 7.9046f, 0.1003f, 5);
	func_926(70.9006f, -1477.241f, 28.2852f, 140.958f, -24.3995f, -1457.326f, 30.6446f);
	func_925(2);
	func_924(896);
	func_927(4, 10.8316f, 549.0906f, 174.9739f, -1.4644f, -9.0339f, 0.0539f, -2.4844f, -8.6139f, -0.0211f, 6);
	func_926(-90.6814f, 511.137f, 142.8975f, 68.9617f, 5.0911f, 547.0732f, 174.9908f);
	func_925(2);
	func_924(896);
	func_927(5, 1986.867f, 3810.984f, 31.1159f, -2.28f, 0.42f, 0.11f, -1.02f, 2.28f, 0.0138f, 2);
	func_926(2138.562f, 3767.596f, 32.1819f, 120.8022f, 1995.681f, 3818.576f, 32.1837f);
	func_925(4);
	func_924(896);
	func_927(6, -1158.263f, -1515.861f, 3.2873f, 3.7331f, 0.363f, 0.0341f, 3.1931f, 1.563f, 0.0341f, 3);
	func_926(-1079.374f, -1475.24f, 4.1272f, 25.0007f, -1166.17f, -1519.469f, 4.229f);
	func_925(4);
	func_924(896);
	func_927(7, 132.7787f, -1305.208f, 28.1826f, -1.1933f, 4.1322f, 0.0451f, -2.1933f, 3.8922f, -0.0049f, 4);
	func_926(65.7439f, -1308.325f, 28.3417f, 210.5102f, 125.2967f, -1307.992f, 29.2187f);
	func_925(4);
	func_924(768);
	func_927(8, 176.9471f, -1340.813f, 28.2908f, -1.2f, 2.1f, 0.0032f, -3f, 0.12f, 0.0032f, 4);
	func_926(361.4975f, -1296.77f, 31.3318f, 140.8159f, 182.2761f, -1333.38f, 28.8827f);
	func_925(4);
	func_924(640);
	func_927(9, -57.8633f, -1459.24f, 30.994f, -1.14f, 2.52f, 0.22f, -3.36f, 1.74f, 0.1667f, 10);
	func_926(68.9364f, -1479.64f, 29.2941f, 145.6588f, -50.0051f, -1459.135f, 31.9645f);
	func_925(8);
	func_924(896);
	func_927(10, -14.7793f, -114.3548f, 55.8073f, -0.7199f, 3.7608f, 0.05f, 0.76f, 3.48f, 0.05f, 10);
	func_926(40.216f, -256.6415f, 47.4194f, 340.2766f, -23.3476f, -113.7569f, 55.8956f);
	func_925(1);
	func_924(384);
	func_927(11, -597.897f, -305.1185f, 33.9548f, -1.02f, 0.84f, -0.047f, 0f, 1.68f, -0.047f, 10);
	func_926(-584.9772f, -258.7058f, 34.8225f, 210.2552f, -590.3728f, -302.9131f, 34.853f);
	func_925(32);
	func_924(384);
	func_927(12, -155.6107f, -175.4378f, 42.7614f, 4.5615f, 6.7732f, -0.1419f, 3.1815f, 7.1932f, -0.1419f, 10);
	func_926(-107.3334f, -191.8515f, 45.7935f, 165.1659f, -158.1629f, -174.8294f, 43.2478f);
	func_925(16);
	func_924(384);
	func_927(13, 194.0434f, -42.2946f, 67.5703f, 0.24f, 4.86f, 0f, 1.5f, 4.68f, 0f, 10);
	func_926(298.4399f, -19.2893f, 75.8441f, 157.1038f, 202.8657f, -46.2839f, 68.6749f);
	func_925(6);
	func_924(384);
	func_927(14, -165.44f, -788.5505f, 30.9774f, -6.3719f, 2.4632f, 0.0021f, -7.3019f, 1.7432f, 0.0021f, 10);
	func_926(-156.6818f, -713.4197f, 33.5995f, 241.8992f, -159.4454f, -778.2214f, 32.2215f);
	func_925(33);
	func_924(384);
	func_927(15, -820.9531f, -1088.276f, 10.0086f, -1.804f, 4.1191f, 0.1191f, -3.124f, 3.2191f, 0.1191f, 10);
	func_926(-841.6274f, -1165.006f, 6.0014f, 294.8121f, -819.1121f, -1091.451f, 10.6171f);
	func_925(6);
	func_924(128);
	func_927(16, 234.715f, -959.095f, 28.2856f, -1.6816f, -0.2787f, 0.0127f, -1.0216f, 1.4013f, 0.0127f, 10);
	func_926(354.8806f, -855.5883f, 28.3444f, 89.9428f, 240.9607f, -948.6324f, 28.1587f);
	func_925(18);
	func_924(384);
	func_927(17, 249.3746f, -1008.328f, 28.2705f, 3.848f, -3.0003f, 0.0001f, 4.328f, -1.8003f, 0.0001f, 10);
	func_926(238.4106f, -1127.997f, 28.2691f, 87.3779f, 244.4703f, -1020.02f, 29.1059f);
	func_925(4);
	func_924(256);
	func_927(18, -210.3783f, -1498.204f, 30.4273f, 2.28f, -2.727f, 0.1f, 0.6f, -2.727f, 0.1f, 10);
	func_926(-281.035f, -1533.152f, 26.3419f, 343.7635f, -219.2698f, -1492.04f, 31.2461f);
	func_925(8);
	func_924(384);
	func_927(19, -1220.569f, -773.4271f, 17.1055f, 3.8194f, 4.9089f, 0.0656f, 5.9194f, 4.1889f, -0.0844f, 10);
	func_926(-1212.768f, -876.4072f, 12.1331f, 309.3317f, -1209.417f, -785.0978f, 16.9499f);
	func_925(49);
	func_924(384);
	func_927(20, -1391.763f, -584.7326f, 29.2332f, -2.1715f, -1.7725f, -0.01f, -2.6515f, -3.3925f, -0.11f, 10);
	func_926(-1513.684f, -678.0259f, 27.4965f, 47.765f, -1409.272f, -590.8218f, 30.3243f);
	func_925(4);
	func_924(256);
	func_927(21, -1345.279f, -385.1048f, 35.755f, 1.86f, -0.78f, 0f, 1.2f, -1.62f, 0f, 10);
	func_926(-1325.355f, -453.5642f, 33.4523f, 35.295f, -1346.246f, -397.871f, 36.6207f);
	func_925(10);
	func_924(384);
	func_927(22, -14.6068f, 6505.243f, 30.5105f, -0.5104f, -7.4223f, 0.0239f, 0.8696f, -6.2223f, 0.0239f, 10);
	func_926(90.1534f, 6595.789f, 30.5382f, 47.4841f, -8.4122f, 6513.607f, 31.3368f);
	func_925(63);
	func_924(384);
	func_927(23, 1393.716f, 3592.585f, 33.9297f, 0.8771f, 4.9569f, 0.0859f, -0.9829f, 5.4369f, 0.0859f, 10);
	func_926(1449.097f, 3669.69f, 33.1474f, 201.6678f, 1408.635f, 3599.183f, 34.8791f);
	func_925(63);
	func_924(384);
}

void func_924(int iParam0)//Position - 0x7697C
{
	Global_85668[iLocal_76 /*18*/].f_17 = (Global_85668[iLocal_76 /*18*/].f_17 || iParam0);
}

void func_925(int iParam0)//Position - 0x7699B
{
	Global_85668[iLocal_76 /*18*/].f_17 = (Global_85668[iLocal_76 /*18*/].f_17 || iParam0);
}

void func_926(struct<3> Param0, float fParam3, struct<3> Param4)//Position - 0x769BA
{
	Global_85668[iLocal_76 /*18*/].f_9 = { Param0 };
	Global_85668[iLocal_76 /*18*/].f_12 = fParam3;
	Global_85668[iLocal_76 /*18*/].f_13 = { Param4 };
}

void func_927(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, int iParam10)//Position - 0x769EE
{
	iLocal_76 = iParam0;
	Global_85668[iLocal_76 /*18*/] = { Param1 };
	Global_85668[iLocal_76 /*18*/].f_3 = { Param4 };
	Global_85668[iLocal_76 /*18*/].f_6 = { Param7 };
	Global_85668[iLocal_76 /*18*/].f_17 = 0;
	Global_85668[iLocal_76 /*18*/].f_16 = iParam10;
}

void func_928()//Position - 0x76A3F
{
	int iVar0;
	
	if (iLocal_980)
	{
		func_5(&(Local_78.f_3), 6, 0);
		func_5(&(Local_78.f_56), 6, 0);
		func_5(&(Local_78.f_109), 6, 0);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			func_448(&(Local_78.f_162[iVar0 /*28*/]), 2);
			iVar0++;
		}
		func_361(0);
		func_359(0);
		func_906();
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		MISC::SET_GAME_PAUSED(0);
		GlobalFunc_5105();
		if (Local_78.f_619)
		{
			GlobalFunc_2196(0, 9, 1);
		}
	}
	func_932();
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	Global_86218 = 0;
	Global_86220 = 0;
	Global_86221 = 0;
	Global_87677 = 0;
	Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_395 = 0;
	func_931();
	if (Local_78.f_618)
	{
		func_930();
		Local_78.f_618 = 0;
	}
	if (Local_78.f_256 != -1)
	{
		GlobalFunc_54(&(Local_78.f_256));
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}


void func_930()//Position - 0x76B51
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iVar1 = Global_86103[iVar0 /*2*/];
		if (MISC::IS_BIT_SET(Global_86148[iVar0 /*2*/], 0))
		{
		}
		if (func_905(iVar1) != Global_86148[iVar0 /*2*/].f_1)
		{
			GlobalFunc_4328(iVar1, Global_86148[iVar0 /*2*/].f_1);
			MISC::SET_BIT(&(Global_Mission_Blips[iVar1 /*23*/].f_11), 18);
		}
		if (Global_Mission_Blips[iVar1 /*23*/].f_11 != Global_86148[iVar0 /*2*/])
		{
			Global_Mission_Blips[iVar1 /*23*/].f_11 = Global_86148[iVar0 /*2*/];
			MISC::SET_BIT(&(Global_Mission_Blips[iVar1 /*23*/].f_11), 18);
		}
		if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar1 /*23*/].f_11, 18))
		{
			if (Global_24745 == 1)
			{
				Global_24746 = 1;
			}
			Global_24745 = 1;
		}
		iVar0++;
	}
}

int func_931()//Position - 0x76C10
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = GlobalFunc_2014(iVar1);
		if (iVar2 == 3 || iVar2 == 4)
		{
			GlobalFunc_2640(iVar1, 0);
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

void func_932()//Position - 0x76C53
{
	Global_85668[0 /*18*/].f_17 = 0;
}



void func_935(int iParam0)//Position - 0x76C99
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	if (Local_78.f_629 != 145)
	{
		STATS::PLAYSTATS_FRIEND_ACTIVITY(Local_78.f_629, 1);
	}
	if (Local_78.f_630 != 145 && Local_78.f_630 != Local_78.f_629)
	{
		STATS::PLAYSTATS_FRIEND_ACTIVITY(Local_78.f_630, 1);
	}
	switch (iParam0)
	{
		case 5:
			break;
		
		case 0:
			if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
			{
				iVar1 = 4;
			}
			else
			{
				iVar1 = 3;
				func_938();
			}
			if (iVar0 != 0 && func_937(&(Local_78.f_162[0 /*28*/]), 1))
			{
				func_297(iVar0, 0, iVar1, 0, 0, -1924990311, -1);
			}
			else if (iVar0 != 1 && func_937(&(Local_78.f_162[1 /*28*/]), 1))
			{
				func_297(iVar0, 1, iVar1, 0, 0, -1924990311, -1);
			}
			else if (iVar0 != 2 && func_937(&(Local_78.f_162[2 /*28*/]), 1))
			{
				func_297(iVar0, 2, iVar1, 0, 0, -1924990311, -1);
			}
			else if (iVar0 != 0 && func_937(&(Local_78.f_162[0 /*28*/]), 0))
			{
				func_297(iVar0, 0, iVar1, 0, 0, -1924990311, -1);
			}
			else if (iVar0 != 1 && func_937(&(Local_78.f_162[1 /*28*/]), 0))
			{
				func_297(iVar0, 1, iVar1, 0, 0, -1924990311, -1);
			}
			else if (iVar0 != 2 && func_937(&(Local_78.f_162[2 /*28*/]), 0))
			{
				func_297(iVar0, 2, iVar1, 0, 0, -1924990311, -1);
			}
			else if (Local_78.f_3 == 0 || !func_729())
			{
				if (Local_78.f_56 != 0)
				{
					func_297(iVar0, Local_78.f_56.f_1, iVar1, 0, 0, -1924990311, -1);
				}
				else if (Local_78.f_109 != 0)
				{
					func_297(iVar0, Local_78.f_109.f_1, iVar1, 0, 0, -1924990311, -1);
				}
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			func_448(&(Local_78.f_162[0 /*28*/]), 0);
			func_448(&(Local_78.f_162[1 /*28*/]), 0);
			func_448(&(Local_78.f_162[2 /*28*/]), 0);
			func_5(&(Local_78.f_3), 0, 0);
			func_5(&(Local_78.f_56), 0, 0);
			func_5(&(Local_78.f_109), 0, 0);
			break;
		
		case 4:
			func_448(&(Local_78.f_162[0 /*28*/]), 1);
			func_448(&(Local_78.f_162[1 /*28*/]), 1);
			func_448(&(Local_78.f_162[2 /*28*/]), 1);
			func_5(&(Local_78.f_3), 1, 0);
			func_5(&(Local_78.f_56), 1, 0);
			func_5(&(Local_78.f_109), 1, 0);
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
	if (iParam0 != 5)
	{
		func_936();
	}
	iLocal_979 = 0;
}

void func_936()//Position - 0x76F38
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Local_78.f_671[iVar0 /*6*/].f_1 != 6)
		{
			iVar1 = -1924990311;
			if (Local_78.f_671[iVar0 /*6*/].f_1 == 2)
			{
				iVar1 = GlobalFunc_4327(GlobalFunc_769(Local_78.f_671[iVar0 /*6*/]));
			}
			if (iVar1 != -1)
			{
				func_297(GlobalFunc_8315(), Local_78.f_671[iVar0 /*6*/], Local_78.f_671[iVar0 /*6*/].f_1, 0, Local_78.f_671[iVar0 /*6*/].f_2, iVar1, -1);
			}
			Local_78.f_671[iVar0 /*6*/].f_1 = 6;
			Local_78.f_702 = (Local_78.f_702 - 1);
		}
		iVar0++;
	}
}

int func_937(var uParam0, int iParam1)//Position - 0x76FD4
{
	if (func_452(uParam0, Global_86220))
	{
		if (iParam1 == 0 || GlobalFunc_4924(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_938()//Position - 0x77003
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar0 != iVar1 && func_937(&(Local_78.f_162[iVar1 /*28*/]), 0))
		{
			Global_86198 = iVar1;
			return 1;
		}
		iVar1++;
	}
	if (Local_78.f_56.f_50)
	{
		Global_86198 = Local_78.f_56.f_1;
		return 1;
	}
	if (Local_78.f_109.f_50)
	{
		Global_86198 = Local_78.f_109.f_1;
		return 1;
	}
	Global_86198 = 145;
	return 0;
}

