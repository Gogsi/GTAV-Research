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
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_73[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_95 = -15;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_131();
	}
	func_130();
	func_128();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (GlobalFunc_6687(4) || Global_87287)
		{
			func_131();
		}
		if (GlobalFunc_82())
		{
			bLocal_94 = false;
			iLocal_48 = (iLocal_48 + 1 % 60);
			iVar0 = 0;
			while (iVar0 < 63)
			{
				if ((iVar0 % 60) == iLocal_48 || Global_96440[iVar0 /*10*/].f_2)
				{
					func_77(iVar0);
				}
				iVar0++;
			}
			func_70();
			func_53();
			func_48();
			func_45();
			func_4();
		}
		else if (!bLocal_94)
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x11E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 20)
	{
		GlobalFunc_2436(iLocal_73[iVar1], 0, 0);
		iLocal_52[iVar1] = 0;
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 63)
	{
		iVar0 = iVar2;
		if (Global_96440[iVar0 /*10*/].f_8 != -1)
		{
			GlobalFunc_2436(iLocal_73[Global_96440[iVar0 /*10*/].f_8], 0, 0);
			func_2(&(Global_96440[iVar0 /*10*/].f_8));
		}
		Global_96440[iVar0 /*10*/].f_7 = 0;
		iVar2++;
	}
	bLocal_94 = true;
}

void func_2(var uParam0)//Position - 0x1A1
{
	if (*uParam0 > -1 && *uParam0 < 20)
	{
		iLocal_52[*uParam0] = 0;
	}
	*uParam0 = -1;
}


void func_4()//Position - 0x2D1
{
	bool bVar0;
	int iVar1;
	struct<7> Var2;
	int iVar34;
	
	if (!GlobalFunc_63(58))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (GlobalFunc_230(17))
			{
				if (!GlobalFunc_485(74))
				{
					if (iLocal_95 == -15)
					{
						iLocal_95 = GlobalFunc_7719();
						GlobalFunc_8385(&iLocal_95, 0, 5, 0, 0, 0, 0);
					}
					else if (GlobalFunc_8448(iLocal_95))
					{
						bVar0 = false;
						iVar1 = 242;
						while (iVar1 <= 261)
						{
							iVar34 = iVar1;
							GlobalFunc_6675(58, &Var2);
							if (GlobalFunc_100(Var2.f_6, GlobalFunc_2247(iVar34, 0)))
							{
								if (HUD::DOES_BLIP_EXIST(Global_Mission_Blips[iVar34 /*23*/].f_19))
								{
									HUD::SET_BLIP_FLASHES(Global_Mission_Blips[iVar34 /*23*/].f_19, 1);
									HUD::SET_BLIP_FLASH_TIMER(Global_Mission_Blips[iVar34 /*23*/].f_19, 10000);
									switch (GlobalFunc_8354())
									{
										case 1:
											GlobalFunc_6677("AM_H_RCFS", 2, 0, 1000, 10000, 7, 0, 0, 0);
											break;
										
										case 0:
											GlobalFunc_6677("AM_H_RCFS_M", 2, 0, 1000, 10000, 7, 0, 0, 0);
											break;
									}
									iLocal_95 = GlobalFunc_7719();
									GlobalFunc_8385(&iLocal_95, 0, 0, 8, 0, 0, 0);
									bVar0 = true;
								}
							}
							iVar1++;
						}
						if (!bVar0)
						{
							iLocal_95 = GlobalFunc_7719();
							GlobalFunc_8385(&iLocal_95, 0, 5, 0, 0, 0, 0);
						}
					}
				}
				else
				{
					GlobalFunc_651(58);
				}
			}
		}
	}
}









































void func_45()//Position - 0x2ACF
{
	if (!GlobalFunc_63(39))
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[27 /*6*/], 3))
		{
			if (GlobalFunc_5216("FS_HELP1") == 2)
			{
				GlobalFunc_6677("FS_HELP1", 1, 0, 2000, 10000, 7, 0, 0, 0);
			}
			else if (GlobalFunc_5216("FS_HELP1") == 1)
			{
				GlobalFunc_651(39);
			}
		}
	}
}



void func_48()//Position - 0x2B8B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!GlobalFunc_63(55))
		{
			if ((GlobalFunc_4524(5) && GlobalFunc_879(PLAYER::PLAYER_PED_ID(), func_51(5), 1) < func_49(5)) || (GlobalFunc_4524(6) && GlobalFunc_879(PLAYER::PLAYER_PED_ID(), func_51(6), 1) < func_49(6)))
			{
				if (GlobalFunc_5216("BARSTASH2") == 2)
				{
					GlobalFunc_6677("BARSTASH2", 1, 0, 2000, 10000, 2, 0, 0, 0);
				}
				else if (GlobalFunc_5216("BARSTASH2") == 1)
				{
					GlobalFunc_651(55);
				}
			}
		}
	}
}

float func_49(int iParam0)//Position - 0x2C22
{
	if (iParam0 == 5 || iParam0 == 6)
	{
		return 250f;
	}
	else if (iParam0 == 38)
	{
		return 35f;
	}
	else if (iParam0 == 39)
	{
		return 37.5f;
	}
	else if (iParam0 == 40)
	{
		return 45f;
	}
	else if (iParam0 == 41)
	{
		return 150f;
	}
	else if (iParam0 == 49 || iParam0 == 50)
	{
		return 90f;
	}
	return 250f;
}


Vector3 func_51(int iParam0)//Position - 0x2CE7
{
	if (iParam0 == 5)
	{
		return 1161.31f, -1326.52f, 34.23f;
	}
	else if (iParam0 == 6)
	{
		return -533.15f, -1691.25f, 18.21f;
	}
	else if (iParam0 == 38)
	{
		return -565.8f, 293.14f, 90.8f;
	}
	else if (iParam0 == 39)
	{
		return -1036.65f, 363.59f, 79.82f;
	}
	else if (iParam0 == 40)
	{
		return -620.37f, -264.39f, 37.81f;
	}
	else if (iParam0 == 41)
	{
		return -1115.96f, 31.42f, 53.8f;
	}
	else if (iParam0 == 49)
	{
		return 305.52f, 157.19f, 102.94f;
	}
	else if (iParam0 == 50)
	{
		return 1040.96f, -534.42f, 60.17f;
	}
	return 0f, 0f, 0f;
}


void func_53()//Position - 0x2DDF
{
	if (GlobalFunc_84())
	{
		if (!GlobalFunc_485(114))
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[46 /*6*/], 3))
			{
				GlobalFunc_7168(552744224, 6, 2, 50, 60000, 10000, -1, 181, -1, 0, 1);
				GlobalFunc_585(114, 1);
			}
		}
		else if (!GlobalFunc_485(83))
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[51 /*6*/], 3))
			{
				if (GlobalFunc_2647(552744224))
				{
					GlobalFunc_7682(552744224);
					GlobalFunc_66(181, 0);
				}
			}
		}
	}
}

















void func_70()//Position - 0x387F
{
	int iVar0;
	struct<7> Var1;
	
	iLocal_49++;
	iLocal_50++;
	if (iLocal_49 >= 63)
	{
		iLocal_49 = 0;
		iLocal_50 = 0;
		iLocal_51 = 0;
	}
	else if (iLocal_50 > 31)
	{
		iLocal_50 = 0;
		iLocal_51++;
	}
	iVar0 = iLocal_49;
	if (!GlobalFunc_4507(iVar0) || iVar0 == 52)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.VISIBLE_IN_FOW[iLocal_51], iLocal_50))
		{
			GlobalFunc_6675(iVar0, &Var1);
			if (iVar0 == 58)
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.VISIBLE_IN_FOW[iLocal_51]), iLocal_50);
			}
			else if (HUD::GET_MINIMAP_FOW_COORDINATE_IS_REVEALED(Var1.f_6))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.VISIBLE_IN_FOW[iLocal_51]), iLocal_50);
			}
			else if (Global_96440[iVar0 /*10*/].f_8 != -1)
			{
				if (iLocal_52[Global_96440[iVar0 /*10*/].f_8])
				{
					if (MISC::IS_BIT_SET(Global_Mission_Blips[iLocal_73[Global_96440[iVar0 /*10*/].f_8] /*23*/].f_11, 6))
					{
						GlobalFunc_5773(iLocal_73[Global_96440[iVar0 /*10*/].f_8]);
					}
				}
			}
		}
		else if (Global_96440[iVar0 /*10*/].f_8 != -1)
		{
			if (iLocal_52[Global_96440[iVar0 /*10*/].f_8])
			{
				if (!MISC::IS_BIT_SET(Global_Mission_Blips[iLocal_73[Global_96440[iVar0 /*10*/].f_8] /*23*/].f_11, 6))
				{
					GlobalFunc_5774(iLocal_73[Global_96440[iVar0 /*10*/].f_8]);
				}
			}
		}
	}
}







void func_77(int iParam0)//Position - 0x3C06
{
	struct<31> Var0;
	var uVar32;
	int iVar33;
	bool bVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<2> Var57;
	bool bVar59;
	int iVar60;
	float fVar61;
	int iVar62;
	int iVar63;
	char* sVar64;
	
	if (iParam0 == -1)
	{
		return;
	}
	GlobalFunc_6675(iParam0, &Var0);
	Global_96440[iParam0 /*10*/].f_2 = 0;
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 1))
	{
		if (!Var0.f_23)
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 1);
		}
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 0) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 3))
	{
		if (!Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/].f_1)
		{
			uVar32 = GlobalFunc_7719();
			GlobalFunc_8385(&uVar32, 0, 0, Var0.f_15, 0, 0, 0);
			if (iParam0 == 57)
			{
				iVar33 = MISC::GET_RANDOM_INT_IN_RANGE(3, 11);
				iVar33 *= 30;
				GlobalFunc_8385(&uVar32, 0, 0, iVar33, 0, 0, 0);
			}
			Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/].f_2 = uVar32;
			Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/].f_1 = 1;
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 1))
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 2))
			{
				bVar34 = true;
				if (Var0.f_14 != -1)
				{
					if (!GlobalFunc_485(Var0.f_14))
					{
						bVar34 = false;
					}
				}
				if (func_122(iParam0))
				{
					bVar34 = false;
				}
				if (GlobalFunc_6483(iParam0))
				{
					bVar34 = false;
				}
				if (func_119(Var0.f_30))
				{
					bVar34 = false;
				}
				if (Var0.f_15 > 0 && bVar34)
				{
					if (!GlobalFunc_8448(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/].f_2))
					{
						GlobalFunc_9261(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/].f_2, &uVar35, &uVar36, &uVar37, &iVar38, &iVar39, &iVar40);
						if ((iVar40 > 0 || iVar39 > 0) || iVar38 > 10)
						{
							Var57 = { GlobalFunc_4918(iParam0) };
							Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/].f_2 = GlobalFunc_7719();
							GlobalFunc_8385(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/].f_2), 0, 0, Var0.f_15, 0, 0, 0);
						}
						bVar34 = false;
					}
				}
				if (!func_115(Var0.f_27, Var0.f_28))
				{
					bVar34 = false;
				}
				if (bVar34)
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 2);
					Global_96440[iParam0 /*10*/].f_4 = 0;
					Global_96440[iParam0 /*10*/].f_6 = 0;
					Global_96440[iParam0 /*10*/].f_5 = 0;
					if (iParam0 == 35)
					{
						Global_96440[iParam0 /*10*/].f_3 = 0;
						BRAIN::_0x6D6840CEE8845831("launcher_MrsPhilips");
					}
					else if (iParam0 == 58)
					{
						Global_96440[iParam0 /*10*/].f_3 = 0;
						BRAIN::_0x6D6840CEE8845831("launcher_Tonya");
					}
					else
					{
						Global_96440[iParam0 /*10*/].f_3 = 1;
					}
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 2) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 3))
	{
		bVar59 = true;
		if (func_122(iParam0))
		{
			bVar59 = false;
		}
		if (GlobalFunc_6483(iParam0))
		{
			bVar59 = false;
		}
		if (func_119(Var0.f_30))
		{
			bVar59 = false;
		}
		if (bVar59)
		{
			if (!func_115(Var0.f_27, Var0.f_28))
			{
				bVar59 = false;
			}
		}
		if (!bVar59)
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 2);
		}
	}
	iVar60 = 1;
	if (Global_96440[iParam0 /*10*/].f_1)
	{
		Global_96440[iParam0 /*10*/].f_2 = 1;
		Global_96440[iParam0 /*10*/].f_1 = 0;
		Global_96440[iParam0 /*10*/].f_3 = 1;
	}
	else if (Global_96440[iParam0 /*10*/].f_3)
	{
		if (((((Var0.f_4 == 0 || Var0.f_4 == 2) || Var0.f_4 == 3) || Var0.f_4 == 11) || Var0.f_4 == 16) || Var0.f_4 == 17)
		{
			fVar61 = 100f;
		}
		else
		{
			fVar61 = 209f;
		}
		if (!GlobalFunc_142() && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 0) > fVar61)
		{
			Global_96440[iParam0 /*10*/].f_3 = 0;
		}
		else
		{
			if (iParam0 == 10 && Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[109] != 1)
			{
				func_101(109, 1);
			}
			iVar60 = 0;
		}
	}
	iVar62 = 0;
	if ((((iVar60 && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 3)) && MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 0)) && MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 1)) && MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 2))
	{
		if (iParam0 == 58 && GlobalFunc_489())
		{
		}
		else
		{
			iVar62 = 2;
		}
	}
	if (Global_96440[iParam0 /*10*/].f_7 != iVar62)
	{
		if (func_99(&(Global_96440[iParam0 /*10*/].f_8)))
		{
			if (GlobalFunc_100(Var0.f_6, 0f, 0f, 0f))
			{
			}
			else
			{
				iVar63 = iLocal_73[Global_96440[iParam0 /*10*/].f_8];
				if (iVar62 == 0)
				{
					GlobalFunc_2436(iVar63, 0, 0);
					GlobalFunc_2416(iVar63, 0);
					func_2(&(Global_96440[iParam0 /*10*/].f_8));
				}
				else if (iVar62 == 2)
				{
					if (func_97(iParam0))
					{
						func_96(iVar63, 1);
						GlobalFunc_3013(iVar63, func_51(iParam0));
						func_94(iVar63, func_49(iParam0));
					}
					else
					{
						func_96(iVar63, 0);
						GlobalFunc_4548(iVar63, Var0.f_9);
						GlobalFunc_3013(iVar63, Var0.f_6);
					}
					func_90(iVar63, iParam0);
					GlobalFunc_3056(iVar63);
					if (GlobalFunc_2016(Var0.f_26, 1))
					{
						GlobalFunc_5986(iVar63, 1, 1, 0);
					}
					if (GlobalFunc_2016(Var0.f_26, 0))
					{
						GlobalFunc_5986(iVar63, 1, 0, 0);
					}
					if (GlobalFunc_2016(Var0.f_26, 2))
					{
						GlobalFunc_5986(iVar63, 1, 2, 0);
					}
					if (GlobalFunc_4507(iParam0) && iParam0 != 52)
					{
						GlobalFunc_5773(iVar63);
					}
					if (GlobalFunc_4507(iParam0))
					{
						if (func_85(iParam0))
						{
							GlobalFunc_2416(iVar63, 1);
						}
					}
					if (iParam0 == 58)
					{
						GlobalFunc_2637(iVar63, 4);
					}
					else
					{
						GlobalFunc_2637(iVar63, 8);
					}
					GlobalFunc_2436(iVar63, 1, 0);
				}
			}
			Global_96440[iParam0 /*10*/].f_7 = iVar62;
		}
	}
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 4))
	{
		if (MISC::GET_HASH_KEY(&(Var0.f_10)) == MISC::GET_HASH_KEY(""))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 4);
		}
		else if (iVar62 == 2)
		{
			if (GlobalFunc_2016(Var0.f_26, GlobalFunc_8354()))
			{
				if (!GlobalFunc_488() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (iParam0 == 58)
						{
							if (GlobalFunc_2641(242))
							{
								if (GlobalFunc_474(242))
								{
									GlobalFunc_6677(&(Var0.f_10), 1, 0, -1, 10000, Var0.f_26, 0, 0, 0);
									GlobalFunc_66(63, 1000);
									MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 4);
								}
							}
						}
						else if ((iParam0 == 5 || iParam0 == 38) || iParam0 == 49)
						{
							GlobalFunc_6677(&(Var0.f_10), 1, 5000, -1, 10000, Var0.f_26, 0, 0, 0);
							MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 4);
						}
						else
						{
							GlobalFunc_6677(&(Var0.f_10), 1, 0, -1, 10000, Var0.f_26, 0, 0, 0);
							MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 4);
						}
					}
				}
			}
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!GlobalFunc_63(35))
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 2) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 3))
			{
				if (((((!GlobalFunc_2016(Var0.f_26, GlobalFunc_8354()) && !func_97(iParam0)) && !GlobalFunc_4507(iParam0)) && !func_80(iParam0)) && !func_79(iParam0)) && !Global_96440[iParam0 /*10*/].f_3)
				{
					if (SYSTEM::VDIST2(Var0.f_6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 81f)
					{
						sVar64 = "";
						if (MISC::IS_BIT_SET(Var0.f_26, 1))
						{
							sVar64 = "TRIG_RC_F";
						}
						else if (MISC::IS_BIT_SET(Var0.f_26, 0))
						{
							sVar64 = "TRIG_RC_M";
						}
						else
						{
							sVar64 = "TRIG_RC_T";
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar64))
						{
							switch (GlobalFunc_5216(sVar64))
							{
								case 2:
									GlobalFunc_6677(sVar64, 1, 0, 1000, 10000, GlobalFunc_8917(), 0, 0, 0);
									break;
								
								case 1:
									GlobalFunc_651(35);
									StringCopy(&Global_95999, "", 16);
									break;
								}
							}
						}
					}
				}
			}
	}
}


int func_79(int iParam0)//Position - 0x4447
{
	if (iParam0 == 2)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[3 /*6*/], 3) && Global_96440[3 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	else if (iParam0 == 3)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[2 /*6*/], 3) && Global_96440[2 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_80(int iParam0)//Position - 0x44AB
{
	if (iParam0 == 2 || iParam0 == 3)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[2 /*6*/], 0) && MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[3 /*6*/], 0))
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[2 /*6*/], 3) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[3 /*6*/], 3))
			{
				return 1;
			}
		}
	}
	return 0;
}





int func_85(int iParam0)//Position - 0x466B
{
	int iVar0;
	int iVar1;
	
	if (!GlobalFunc_4507(iParam0))
	{
		return 0;
	}
	iVar0 = 194;
	iVar1 = (iParam0 - 52);
	if (GlobalFunc_485(108) == 1)
	{
		return 1;
	}
	if (Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[iVar1 /*2*/] >= 1)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 3))
	{
		return 1;
	}
	return GlobalFunc_433((iVar0 + iVar1), 0);
}





void func_90(int iParam0, int iParam1)//Position - 0x4881
{
	GlobalFunc_4328(iParam0, 0);
	if (iParam1 == 1)
	{
		GlobalFunc_2440(iParam0, "B_ABI");
	}
	else if (((iParam1 == 2 || iParam1 == 3) || iParam1 == 4) || iParam1 == 7)
	{
		if ((MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[2 /*6*/], 3) || MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[3 /*6*/], 3)) || MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[4 /*6*/], 3))
		{
			GlobalFunc_2440(iParam0, "B_BAR");
		}
		else
		{
			GlobalFunc_2440(iParam0, "BLIP_66");
			GlobalFunc_4548(iParam0, 66);
		}
	}
	else if (iParam1 == 5 || iParam1 == 6)
	{
		GlobalFunc_2440(iParam0, "B_STA");
	}
	else if (iParam1 == 8)
	{
		GlobalFunc_2440(iParam0, "B_DRE");
	}
	else if ((((((iParam1 == 10 || iParam1 == 11) || iParam1 == 12) || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 16)
	{
		GlobalFunc_2440(iParam0, "B_EPS");
	}
	else if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
	{
		GlobalFunc_2440(iParam0, "B_EXT");
	}
	else if ((iParam1 == 21 || iParam1 == 22) || iParam1 == 23)
	{
		if ((MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[21 /*6*/], 3) || MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[22 /*6*/], 3)) || MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[23 /*6*/], 3))
		{
			GlobalFunc_2440(iParam0, "B_FAN");
		}
		else
		{
			GlobalFunc_2440(iParam0, "BLIP_66");
			GlobalFunc_4548(iParam0, 66);
		}
	}
	else if (iParam1 == 26)
	{
		GlobalFunc_2440(iParam0, "B_HUN");
	}
	else if ((iParam1 == 28 || iParam1 == 29) || iParam1 == 30)
	{
		GlobalFunc_2440(iParam0, "B_JOS");
	}
	else if (iParam1 == 33 || iParam1 == 34)
	{
		GlobalFunc_2440(iParam0, "B_MIN");
	}
	else if (((iParam1 == 38 || iParam1 == 39) || iParam1 == 40) || iParam1 == 41)
	{
		GlobalFunc_2440(iParam0, "B_CEL");
	}
	else if (iParam1 == 42 || iParam1 == 43)
	{
		GlobalFunc_2440(iParam0, "B_NIG");
	}
	else if (iParam1 == 45)
	{
		GlobalFunc_2440(iParam0, "B_OME");
	}
	else if ((iParam1 == 47 || iParam1 == 48) || iParam1 == 51)
	{
		GlobalFunc_2440(iParam0, "B_PAP");
	}
	else if (iParam1 == 49 || iParam1 == 50)
	{
		GlobalFunc_2440(iParam0, "B_PHO");
	}
	else if (iParam1 == 52)
	{
		GlobalFunc_2440(iParam0, "BLIP_66");
	}
	else if (((iParam1 == 53 || iParam1 == 54) || iParam1 == 55) || iParam1 == 56)
	{
		GlobalFunc_2440(iParam0, "BLIP_84");
	}
	else if (((iParam1 == 59 || iParam1 == 60) || iParam1 == 61) || iParam1 == 62)
	{
		GlobalFunc_2440(iParam0, "B_TON");
	}
	else
	{
		GlobalFunc_2440(iParam0, "BLIP_66");
	}
}




void func_94(int iParam0, var uParam1)//Position - 0x4D1D
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	Global_24745 = 1;
	Global_Mission_Blips[iVar0 /*23*/].f_10 = uParam1;
	Global_30775 = 1;
	MISC::SET_BIT(&(Global_Mission_Blips[iVar0 /*23*/].f_11), 18);
}


void func_96(int iParam0, bool bParam1)//Position - 0x4E01
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_Mission_Blips[iVar0 /*23*/].f_11), 28);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_Mission_Blips[iVar0 /*23*/].f_11), 28);
	}
	if (Global_24745 == 1)
	{
		Global_24746 = 1;
	}
	Global_24745 = 1;
	MISC::SET_BIT(&(Global_Mission_Blips[iVar0 /*23*/].f_11), 18);
}

int func_97(int iParam0)//Position - 0x4E73
{
	if (((((((iParam0 == 5 || iParam0 == 6) || iParam0 == 38) || iParam0 == 39) || iParam0 == 40) || iParam0 == 41) || iParam0 == 49) || iParam0 == 50)
	{
		return 1;
	}
	return 0;
}


int func_99(var uParam0)//Position - 0x4F5C
{
	int iVar0;
	
	if (*uParam0 != -1)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!iLocal_52[iVar0])
		{
			*uParam0 = iVar0;
			iLocal_52[iVar0] = 1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}


void func_101(int iParam0, int iParam1)//Position - 0x4FC7
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
			func_103(iParam0);
			if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				GlobalFunc_510(iParam0);
			}
		}
	}
}


void func_103(int iParam0)//Position - 0x510E
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
		GlobalFunc_8505(iParam0, &Var0);
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
			iVar9 = GlobalFunc_9041(iParam0);
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
		if (GlobalFunc_9040())
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












int func_115(int iParam0, int iParam1)//Position - 0x8F60
{
	int iVar0;
	
	iVar0 = (GlobalFunc_208(GlobalFunc_7719()) * 100 + GlobalFunc_207(GlobalFunc_7719()));
	if (iParam1 > iParam0)
	{
		if (iVar0 < iParam0 || iVar0 > iParam1)
		{
			return 0;
		}
	}
	else if (iVar0 < iParam0 && iVar0 > iParam1)
	{
		return 0;
	}
	return 1;
}




int func_119(bool bParam0)//Position - 0x9216
{
	if (bParam0)
	{
		if (GlobalFunc_485(130) && !GlobalFunc_485(131))
		{
			return 1;
		}
	}
	return 0;
}



int func_122(int iParam0)//Position - 0x92B1
{
	if ((iParam0 == 58 || iParam0 == 59) || iParam0 == 62)
	{
		if (((GlobalFunc_891(40) || GlobalFunc_891(41)) || GlobalFunc_891(43)) || GlobalFunc_891(47))
		{
			return 1;
		}
	}
	if (iParam0 == 24)
	{
		if (GlobalFunc_891(41))
		{
			return 1;
		}
	}
	return 0;
}






void func_128()//Position - 0x95A2
{
	int iVar0;
	
	iLocal_73[0] = 242;
	iLocal_73[1] = 243;
	iLocal_73[2] = 244;
	iLocal_73[3] = 245;
	iLocal_73[4] = 246;
	iLocal_73[5] = 247;
	iLocal_73[6] = 248;
	iLocal_73[7] = 249;
	iLocal_73[8] = 250;
	iLocal_73[9] = 251;
	iLocal_73[10] = 252;
	iLocal_73[11] = 253;
	iLocal_73[12] = 254;
	iLocal_73[13] = 255;
	iLocal_73[14] = 256;
	iLocal_73[15] = 257;
	iLocal_73[16] = 258;
	iLocal_73[17] = 259;
	iLocal_73[18] = 260;
	iLocal_73[19] = 261;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iLocal_52[iVar0] = 0;
		GlobalFunc_2436(iLocal_73[iVar0], 0, 0);
		GlobalFunc_3054(iLocal_73[iVar0], 4);
		GlobalFunc_2637(iLocal_73[iVar0], 8);
		GlobalFunc_5774(iLocal_73[iVar0]);
		GlobalFunc_4328(iLocal_73[iVar0], 0);
		GlobalFunc_4548(iLocal_73[iVar0], 66);
		GlobalFunc_3056(iLocal_73[iVar0]);
		iVar0++;
	}
}


void func_130()//Position - 0x9710
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 63)
	{
		Global_96440[iVar0 /*10*/].f_5 = 0;
		Global_96440[iVar0 /*10*/].f_6 = 0;
		Global_96440[iVar0 /*10*/].f_4 = 0;
		Global_96440[iVar0 /*10*/].f_7 = 0;
		Global_96440[iVar0 /*10*/].f_8 = -1;
		Global_96440[iVar0 /*10*/].f_9 = -1;
		iVar0++;
	}
}

void func_131()//Position - 0x976D
{
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

