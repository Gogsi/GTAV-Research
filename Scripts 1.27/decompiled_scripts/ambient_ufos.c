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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
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
	struct<3> Local_59 = { 0, 0, 0 } ;
	float fLocal_62 = 0f;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	struct<3> Local_73[2];
	bool bLocal_80 = 0;
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	Local_59 = { -1124.392f, -514.7001f, 33.21493f };
	fLocal_62 = 200f;
	Local_63 = { 2490f, 3777f, 2402.879f };
	Local_66 = { -2052f, 3237f, 1450.078f };
	iLocal_69 = -1;
	iLocal_71 = -1;
	bLocal_80 = true;
	fLocal_81 = 10f;
	fLocal_82 = 90f;
	fLocal_83 = 35f;
	fLocal_84 = 60f;
	fLocal_85 = 275f;
	iLocal_86 = 1500;
	iLocal_87 = -1;
	iLocal_89 = 3000;
	iLocal_90 = 708;
	iLocal_91 = 377;
	iLocal_92 = 1000;
	iLocal_93 = 2093;
	iLocal_96 = -1;
	iLocal_97 = -1;
	bLocal_98 = true;
	bLocal_99 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_12();
	}
	while (CAM::IS_SCREEN_FADED_OUT())
	{
		SYSTEM::WAIT(0);
	}
	if (!STREAMING::IS_IPL_ACTIVE("ufo"))
	{
		STREAMING::REQUEST_IPL("ufo");
	}
	Local_73[0 /*3*/] = { Local_63 };
	Local_73[1 /*3*/] = { Local_66 };
	while (true)
	{
		GlobalFunc_852(PLAYER::PLAYER_PED_ID());
		if (Global_24448 == 1)
		{
			func_12();
		}
		if (bLocal_80)
		{
			if (!GlobalFunc_882(PLAYER::PLAYER_PED_ID(), Local_73[0 /*3*/], (290f + 50f)))
			{
				if (!GlobalFunc_882(PLAYER::PLAYER_PED_ID(), Local_73[1 /*3*/], (290f + 50f)))
				{
					func_12();
				}
			}
			if (iLocal_72 != 0)
			{
				if (!GlobalFunc_882(PLAYER::PLAYER_PED_ID(), Local_73[0 /*3*/], (fLocal_85 + 50f)))
				{
					if (!GlobalFunc_882(PLAYER::PLAYER_PED_ID(), Local_73[1 /*3*/], (fLocal_85 + 50f)))
					{
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
						iLocal_72 = 0;
						iLocal_71 = -1;
					}
				}
			}
		}
		func_8();
		switch (iLocal_72)
		{
			case 0:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_73.x)
				{
					if (GlobalFunc_882(PLAYER::PLAYER_PED_ID(), Local_73[iVar0 /*3*/], fLocal_85))
					{
						iLocal_71 = iVar0;
						iLocal_72 = 1;
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 1, 1);
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 1, 1);
					}
					iVar0++;
				}
				break;
			
			case 1:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_73.x)
				{
					if (GlobalFunc_882(PLAYER::PLAYER_PED_ID(), Local_73[iVar0 /*3*/], fLocal_82))
					{
						iLocal_71 = iVar0;
						iLocal_72 = 2;
					}
					iVar0++;
				}
				break;
			
			case 2:
				if (iLocal_71 == -1)
				{
					iLocal_72 = 1;
				}
				else
				{
					iLocal_69 = MISC::GET_GAME_TIMER();
					iLocal_70 = 0;
					iLocal_72 = 3;
				}
				break;
			
			case 3:
				if (GlobalFunc_882(PLAYER::PLAYER_PED_ID(), Local_73[iLocal_71 /*3*/], fLocal_82))
				{
					iLocal_70 = (MISC::GET_GAME_TIMER() - iLocal_69);
					if (iLocal_70 >= iLocal_86)
					{
						iLocal_72 = 4;
						iLocal_87 = AUDIO::GET_SOUND_ID();
						iLocal_88 = MISC::GET_GAME_TIMER();
						if (iLocal_71 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_87, "SPECIAL_EVIL_UFO_DEATH_RAY", Local_73[iLocal_71 /*3*/], 0, 0, 0, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_87, "SPECIAL_EVIL_UFO_DEATH_RAY_3", Local_73[iLocal_71 /*3*/], 0, 0, 0, 0);
						}
						func_7();
						func_6();
					}
				}
				else
				{
					iLocal_72 = 1;
				}
				break;
			
			case 4:
				func_5();
				func_7();
				func_6();
				if (MISC::GET_GAME_TIMER() > (iLocal_88 + iLocal_89))
				{
					GlobalFunc_894(&iLocal_87);
				}
				if (!GlobalFunc_882(PLAYER::PLAYER_PED_ID(), Local_73[iLocal_71 /*3*/], fLocal_85))
				{
					func_1();
					iLocal_71 = -1;
					iLocal_72 = 0;
					GlobalFunc_894(&iLocal_97);
					GlobalFunc_894(&iLocal_96);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x398
{
	var uVar0;
	
	if (GlobalFunc_852(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (GlobalFunc_5230(uVar0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(uVar0, 1, 0);
			}
		}
	}
}




void func_5()//Position - 0x43E
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (GlobalFunc_5230(uVar0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uVar0, 0, 0);
			ENTITY::APPLY_FORCE_TO_ENTITY(uVar0, 2, 0f, 0f, -fLocal_81, 0f, 1f, 0f, 0, 0, 1, 1, 0, 1);
		}
	}
}

void func_6()//Position - 0x483
{
	if (bLocal_99)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_94)
		{
			if (iLocal_96 != -1)
			{
				GlobalFunc_894(&iLocal_96);
				iLocal_94 = (MISC::GET_GAME_TIMER() + iLocal_93);
			}
			else
			{
				iLocal_96 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(iLocal_96, "ent_amb_elec_crackle", 0, 0, 0, 1);
				iLocal_94 = (MISC::GET_GAME_TIMER() + iLocal_91);
			}
		}
	}
}

void func_7()//Position - 0x4CD
{
	if (bLocal_98)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_95)
		{
			if (iLocal_97 != -1)
			{
				GlobalFunc_894(&iLocal_97);
				iLocal_95 = (MISC::GET_GAME_TIMER() + iLocal_92);
			}
			else
			{
				iLocal_97 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND(iLocal_97, "spl_stun_npc_master", 0, 0, 0, 1);
				iLocal_95 = (MISC::GET_GAME_TIMER() + iLocal_90);
			}
		}
	}
}

void func_8()//Position - 0x517
{
	struct<3> Var0;
	
	if (iLocal_71 == -1)
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	if (!GlobalFunc_882(PLAYER::PLAYER_PED_ID(), Local_73[iLocal_71 /*3*/], fLocal_83))
	{
		return;
	}
	Var0 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Local_73[iLocal_71 /*3*/]) * Vector(fLocal_84, fLocal_84, fLocal_84) };
	ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 2, Var0, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
}




void func_12()//Position - 0x5FD
{
	if (STREAMING::IS_IPL_ACTIVE("ufo"))
	{
		STREAMING::REMOVE_IPL("ufo");
	}
	GlobalFunc_894(&iLocal_97);
	GlobalFunc_894(&iLocal_96);
	GlobalFunc_894(&iLocal_87);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

