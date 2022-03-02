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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	bool bVar1;
	char* sVar2;
	var uVar3[25];
	bool bVar29;
	struct<3> Var30;
	int iVar33;
	struct<3> Var34;
	bool bVar37;
	int iVar38;
	int iVar39;
	bool bVar40;
	
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
	iLocal_45 = -1;
	uVar0 = uScriptParam_0;
	if (!ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_16();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_39(13) || GlobalFunc_39(14))
	{
		func_16();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_30776)
	{
		func_16();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_67064)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	bVar1 = false;
	sVar2 = "tvscreen";
	bVar29 = true;
	Var30 = { ENTITY::GET_ENTITY_COORDS(uVar0, 1) - ENTITY::GET_ENTITY_FORWARD_VECTOR(uVar0) * Vector(0.6f, 0.6f, 0.6f) };
	Var30.f_2 = (Var30.f_2 + 0.5f);
	while (bVar29)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			if (Global_1582590)
			{
				if (!bVar1)
				{
					iVar33 = ENTITY::GET_ENTITY_MODEL(uVar0);
					if (iVar33 == joaat("prop_laptop_01a"))
					{
						ENTITY::CREATE_MODEL_HIDE(ENTITY::GET_ENTITY_COORDS(uScriptParam_0, 1), 1f, joaat("prop_laptop_01a"), 0);
						Var34 = { ENTITY::GET_ENTITY_ROTATION(uVar0, 2) };
						uVar0 = OBJECT::CREATE_OBJECT(joaat("prop_laptop_lester2"), ENTITY::GET_ENTITY_COORDS(uVar0, 1), 0, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(uVar0, Var34, 2, 1);
						bVar1 = true;
					}
				}
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(uVar0))
			{
				func_16();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
		if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(uVar0)) && !CUTSCENE::IS_CUTSCENE_PLAYING()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(uVar0))
			{
				bVar37 = false;
				iVar38 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar3, -1);
				iVar39 = 0;
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar3[iVar39]))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uVar3[iVar39], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar37 = true;
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uVar3[iVar39], "MP_COMMON_MISS", "HACK_LOOP", 3))
						{
							bVar37 = true;
						}
					}
					iVar39++;
				}
				if (Global_16)
				{
					bVar37 = true;
				}
				if (((((((((!bVar37 && !GlobalFunc_116(0)) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) && !GlobalFunc_488()) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var30, 0.6f, 0.6f, 0.8f, 0, 1, 1)) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0)) && !MISC::IS_BIT_SET(Global_2359301, 15)) && !GlobalFunc_2289()) && !(Global_68245 && GlobalFunc_1591())) && !(!Global_68245 && GlobalFunc_2025()))
				{
					if (iLocal_45 == -1)
					{
						if (bVar1)
						{
							GlobalFunc_6774(&iLocal_45, 1, "MPLA_BILL", 0, 0);
						}
						else
						{
							GlobalFunc_6774(&iLocal_45, 1, "BROWSEINPUTTRIG", 0, 0);
						}
					}
					if (GlobalFunc_5079(iLocal_45, 1))
					{
						if (iLocal_45 != -1)
						{
							GlobalFunc_5084(&iLocal_45);
						}
						if (!bVar1)
						{
							GlobalFunc_5590(0);
							if (!iLocal_46)
							{
								GlobalFunc_5076();
								iLocal_46 = 1;
							}
							bVar40 = true;
							while (bVar40)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1.5f, 1.5f, 4f, 0, 1, 1))
								{
									Global_67061 = 1;
								}
								if (Global_67058 || Global_67061)
								{
									bVar40 = false;
								}
								SYSTEM::WAIT(0);
							}
							while (Global_67058)
							{
								SYSTEM::WAIT(0);
							}
							SYSTEM::WAIT(1000);
							iLocal_46 = 0;
						}
					}
				}
				else
				{
					if (iLocal_45 != -1)
					{
						GlobalFunc_5084(&iLocal_45);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
					{
						if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_0))
						{
							bVar29 = false;
						}
					}
				}
			}
			else if (iLocal_45 != -1)
			{
				GlobalFunc_5084(&iLocal_45);
			}
		}
		else
		{
			if (iLocal_45 != -1)
			{
				GlobalFunc_5084(&iLocal_45);
			}
			bVar29 = false;
		}
		SYSTEM::WAIT(0);
	}
	if (bVar1)
	{
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar2))
		{
			HUD::RELEASE_NAMED_RENDERTARGET(sVar2);
		}
	}
}
















void func_16()//Position - 0x7F5
{
	if (iLocal_45 != -1)
	{
		GlobalFunc_5084(&iLocal_45);
	}
}

