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
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67[4] = { 0, 0, 0, 0 };
	int iLocal_72[4] = { 0, 0, 0, 0 };
	struct<3> Local_77 = { 0, 0, 0 } ;
	var uLocal_80 = 0;
	struct<3> Local_81[4];
	struct<3> Local_94[4];
	int iLocal_107[4] = { 0, 0, 0, 0 };
	char cLocal_112[32] = "";
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	struct<8> Local_120[4];
	int iLocal_153 = 0;
	int iLocal_154[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_161[6] = { 0, 0, 0, 0, 0, 0 };
	struct<3> Local_168[6];
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
	iLocal_65 = 318;
	iLocal_66 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_30();
	}
	SYSTEM::WAIT(0);
	func_18();
	func_16();
	GlobalFunc_576();
	while (iLocal_66 && GlobalFunc_9549(4, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_64)
		{
			case 0:
				if (func_4())
				{
					iLocal_64 = 1;
				}
				break;
			
			case 1:
				if (func_2())
				{
					iLocal_64 = 2;
				}
				break;
			
			case 2:
				func_1();
				break;
		}
	}
	func_30();
}

void func_1()//Position - 0xFA
{
	iLocal_66 = 0;
}

int func_2()//Position - 0x105
{
	float fVar0;
	
	func_3(&iLocal_67, &iLocal_107);
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_77);
	if (fVar0 > (100f * 100f))
	{
		return 1;
	}
	return 0;
}

int func_3(int iParam0, int iParam1)//Position - 0x13F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar1]))
		{
			switch ((*iParam1)[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				default:
					break;
			}
			iVar0 = 1;
		}
		else if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1]))
		{
		}
		iVar1++;
	}
	return iVar0;
}

int func_4()//Position - 0x1A1
{
	func_3(&iLocal_67, &iLocal_107);
	if (!GlobalFunc_2927())
	{
		return 1;
	}
	return 0;
}












void func_16()//Position - 0x51C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < iLocal_72)
		{
			if (iLocal_72[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_72[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_72[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_72[iVar0]);
					bVar2 = false;
				}
			}
			iVar0++;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_112))
		{
			STREAMING::REQUEST_ANIM_DICT(&cLocal_112);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_112))
			{
				STREAMING::REQUEST_ANIM_DICT(&cLocal_112);
				bVar2 = false;
			}
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_67)
	{
		if (iLocal_72[iVar0] != 0)
		{
			iLocal_67[iVar0] = PED::CREATE_PED(26, iLocal_72[iVar0], Local_77 + Local_81[iVar0 /*3*/], 0, 1, 1);
			ENTITY::SET_ENTITY_ROTATION(iLocal_67[iVar0], Vector(uLocal_80, 0f, 0f) + Local_94[iVar0 /*3*/], 2, 1);
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_67[iVar0], 0);
			if (iLocal_65 == 288)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_67[iVar0], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_67[iVar0], 4, 0, 0, 0);
			}
			else
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_67[iVar0], 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_67[iVar0], 13, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_67[iVar0], 17, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67[iVar0], 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_67[iVar0], 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_67[iVar0], &cLocal_112, &(Local_120[iVar0 /*8*/]), Local_77 + Local_81[iVar0 /*3*/], Vector(uLocal_80, 0f, 0f) + Local_94[iVar0 /*3*/], 1000f, -8f, -1, iLocal_153, 0, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67[iVar0], 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_67[iVar0], 1);
			PED::SET_PED_RESET_FLAG(iLocal_67[iVar0], 55, 1);
			if (iLocal_161[iVar0] > 0)
			{
				PED::APPLY_PED_BLOOD_BY_ZONE(iLocal_67[iVar0], 1, 0.36f, 0.71f, "ShotgunSmall");
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_67[iVar0], 1, 0.81f, 0.733f, 4);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_67[iVar0], 0, 0.94f, 0.59f, 3);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_67[iVar0], 3, 0.24f, 0.62f, 4);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_67[iVar0], 2, 0f, 0.15f, 2);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_67[iVar0], 5, 0.46f, 0.853f, 3);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_67[iVar0], 4, 0.308f, 0.786f, 3);
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_67[iVar0], 3, 0.375f, 0.398f, 0f, 1f, -1, 0f, "BasicSlash");
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_67[iVar0], 3, 0.5f, 0.6f, 0f, 1f, -1, 0f, "BasicSlash");
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_67[iVar0], 3, 0.6f, 0.25f, 50f, 0.5f, -1, 0f, "BasicSlash");
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_67[iVar0], 3, 0.65f, 0.325f, 50f, 0.5f, -1, 0f, "BasicSlash");
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_67[iVar0], 0, 0.58f, 0.704f, 0f, 1f, -1, 0f, "ShotgunLarge");
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_154)
	{
		if (iLocal_161[iVar0] > 0)
		{
			Var3 = { 0f, 0f, -1f };
			Var6 = { GlobalFunc_107(0f, 1f, 0f) };
			fVar9 = 1.5f;
			fVar10 = 1.5f;
			fVar11 = 0.196f;
			fVar12 = 0f;
			fVar13 = 0f;
			fVar14 = 1f;
			fVar15 = -1f;
			iLocal_154[iVar0] = GRAPHICS::ADD_DECAL(iLocal_161[iVar0], Local_77 + Local_168[iVar0 /*3*/], Var3, Var6, fVar9, fVar10, fVar11, fVar12, fVar13, fVar14, fVar15, 0, 0, 0);
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
}


void func_18()//Position - 0x8E3
{
	char[] cVar0[8];
	struct<109> Var8;
	struct<97> Var117;
	
	iLocal_65 = Global_89502;
	GlobalFunc_8273(iLocal_65, &Local_77, &uLocal_80, &cVar0);
	Var8.f_1 = -1;
	Var8.f_17 = 4;
	Var8.f_17.f_8 = 4;
	Var8.f_17.f_13 = 4;
	Var8.f_17.f_18 = 4;
	Var8.f_17.f_24 = 4;
	Var8.f_17.f_29 = 4;
	Var8.f_17.f_34 = 4;
	Var8.f_62 = 8;
	Var8.f_96.f_7 = 21;
	Var8.f_96.f_8 = 6;
	Var117.f_1 = -1;
	Var117.f_17 = 4;
	Var117.f_17.f_8 = 4;
	Var117.f_17.f_13 = 4;
	Var117.f_17.f_18 = 4;
	Var117.f_17.f_24 = 4;
	Var117.f_17.f_29 = 4;
	Var117.f_17.f_34 = 4;
	Var117.f_62 = 8;
	Var117.f_96.f_7 = 21;
	Var117.f_96.f_8 = 6;
	Var8 = 0;
	Var8.f_2 = iLocal_65;
	Var8.f_3 = Global_87845.f_45;
	GlobalFunc_7224(Var8, &Var117);
	switch (iLocal_65)
	{
		case 280:
			StringCopy(&cLocal_112, "DEAD", 32);
			StringCopy(&(Local_120[0 /*8*/]), "Dead_A", 32);
			StringCopy(&(Local_120[1 /*8*/]), "Dead_D", 32);
			StringCopy(&(Local_120[2 /*8*/]), "Dead_E", 32);
			StringCopy(&(Local_120[3 /*8*/]), "Dead_G", 32);
			Local_81[0 /*3*/] = { 14.613f, 8.4563f, 0.9751f };
			Local_81[1 /*3*/] = { 10.6489f, 8.6708f, 0.7701f };
			Local_81[2 /*3*/] = { 6.3982f, 1.4604f, 1.1f };
			Local_81[3 /*3*/] = { 4.2327f, 5.864f, (0.9f - 0.15f) };
			Local_94[0 /*3*/] = { 0f, 0f, 23.047f };
			Local_94[1 /*3*/] = { 0f, 0f, 97.2582f };
			Local_94[2 /*3*/] = { 0f, 0f, 34.2158f };
			Local_94[3 /*3*/] = { 0f, 0f, 61.2158f };
			iLocal_72[0] = joaat("g_m_y_lost_01");
			iLocal_72[1] = joaat("g_m_y_lost_01");
			iLocal_72[2] = joaat("g_m_y_lost_02");
			iLocal_72[3] = joaat("g_m_y_lost_03");
			iLocal_153 = 2621440;
			iLocal_107[0] = 1;
			iLocal_107[1] = 1;
			iLocal_107[2] = 1;
			iLocal_107[3] = 1;
			iLocal_161[0] = 1110;
			iLocal_161[1] = 1110;
			iLocal_161[2] = 1110;
			iLocal_161[3] = 1110;
			Local_168[0 /*3*/] = { Vector(0.37364f, -1445.534f, 2803.76f) - Local_77 + Vector(0.1f, 0f, 0f) };
			Local_168[1 /*3*/] = { Vector(0.28778f, -1444.863f, 2800.022f) - Local_77 + Vector(0.1f, 0f, 0f) };
			Local_168[2 /*3*/] = { Vector(0.6045f, -1452.404f, 2795.934f) - Local_77 + Vector(0.1f, 0f, 0f) };
			Local_168[3 /*3*/] = { Vector(0.28483f, -1448.033f, 2794.301f) - Local_77 + Vector(0.1f, 0f, 0f) };
			iLocal_161[4] = 1015;
			iLocal_161[5] = 1015;
			Local_168[4 /*3*/] = { Local_168[0 /*3*/] + Local_168[2 /*3*/] / Vector(2f, 2f, 2f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 0.5f)) };
			Local_168[5 /*3*/] = { Local_168[1 /*3*/] + Local_168[2 /*3*/] / Vector(2f, 2f, 2f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 0.5f)) };
			break;
		
		default:
			StringCopy(&cLocal_112, "", 32);
			StringCopy(&(Local_120[0 /*8*/]), "", 32);
			StringCopy(&(Local_120[1 /*8*/]), "", 32);
			StringCopy(&(Local_120[2 /*8*/]), "", 32);
			StringCopy(&(Local_120[3 /*8*/]), "", 32);
			iLocal_72[0] = 0;
			Local_81[0 /*3*/] = { 0f, 0f, 0f };
			Local_94[0 /*3*/] = { 0f, 0f, 0f };
			iLocal_72[1] = 0;
			Local_81[1 /*3*/] = { 0f, 0f, 0f };
			Local_94[1 /*3*/] = { 0f, 0f, 0f };
			iLocal_72[2] = 0;
			Local_81[2 /*3*/] = { 0f, 0f, 0f };
			Local_94[2 /*3*/] = { 0f, 0f, 0f };
			iLocal_72[3] = 0;
			Local_81[3 /*3*/] = { 0f, 0f, 0f };
			Local_94[3 /*3*/] = { 0f, 0f, 0f };
			iLocal_153 = 0;
			iLocal_107[0] = -1;
			iLocal_107[1] = -1;
			iLocal_107[2] = -1;
			iLocal_107[3] = -1;
			iLocal_161[0] = -1;
			iLocal_161[1] = -1;
			iLocal_161[2] = -1;
			iLocal_161[3] = -1;
			iLocal_161[4] = -1;
			iLocal_161[5] = -1;
			break;
	}
}












void func_30()//Position - 0x91AC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_72)
	{
		if (iLocal_72[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_72[iVar0]);
		}
		iVar0++;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_112))
	{
		STREAMING::REMOVE_ANIM_DICT(&cLocal_112);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_154)
	{
		if (GRAPHICS::IS_DECAL_ALIVE(iLocal_154[iVar0]))
		{
		}
		iVar0++;
	}
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

