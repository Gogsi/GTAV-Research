#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	char* sLocal_38 = NULL;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	sLocal_38 = "NULL";
	Local_44 = { 6f, 10f, 2f };
	fLocal_47 = 0.306f;
	fLocal_48 = 0.31f;
	fLocal_49 = 0.98f;
	iLocal_50 = -99;
	iLocal_53 = -1;
	Local_57 = { 0f, -0.97f, 0.05f };
	iLocal_62 = joaat("prop_vend_soda_01");
	iLocal_63 = joaat("prop_vend_soda_02");
	iLocal_64 = joaat("prop_vend_coffe_01");
	iLocal_65 = joaat("prop_vend_condom_01");
	iLocal_66 = joaat("prop_vend_fags_01");
	iLocal_67 = joaat("prop_vend_snak_01");
	iLocal_68 = joaat("prop_vend_water_01");
	func_1(iScriptParam_0);
}

void func_1(int iParam0)//Position - 0xD1
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		{
			func_289();
		}
	}
	if (GlobalFunc_39(13) || GlobalFunc_39(14))
	{
		func_289();
	}
	iLocal_36 = func_287(iParam0);
	if (iLocal_36 == 0)
	{
		func_289();
	}
	GlobalFunc_587();
	func_282();
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_ENTITY_PROOFS(iParam0, 0, 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_289();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (bLocal_71)
		{
			if (GlobalFunc_7680())
			{
				func_289();
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_289();
			}
		}
		if (Global_24446)
		{
			func_289();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 875)
				{
					ENTITY::SET_ENTITY_HEALTH(iParam0, 0);
				}
				switch (iLocal_35)
				{
					case 0:
						if (func_272(iLocal_36))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
							}
							iLocal_35 = 2;
						}
						break;
					
					case 2:
						Local_54 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Local_57) };
						if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_271())
						{
							func_196(iParam0, iLocal_36);
						}
						else
						{
							func_193(1);
							func_3(iLocal_36);
						}
						break;
					
					case 3:
						GlobalFunc_159("VENDEMP", -1);
						ENTITY::SET_ENTITY_HEALTH(iParam0, 0);
						break;
				}
			}
			else
			{
				func_289();
			}
		}
		else
		{
			func_289();
		}
		Global_24694 = 1;
	}
}


void func_3(int iParam0)//Position - 0x262
{
	if (MISC::IS_BIT_SET(uLocal_70, 0))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
		MISC::CLEAR_BIT(&uLocal_70, 0);
	}
	if (Global_68245)
	{
		if (iLocal_39)
		{
			GlobalFunc_7467(PLAYER::PLAYER_ID(), 1, 0, 1);
		}
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		GlobalFunc_8316(0, 1, 1, 0);
		Global_24695 = 0;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT1", 3) || func_271())
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	if (Global_68245)
	{
		if (WEAPON::IS_WEAPON_VALID(iLocal_42))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_42, 0);
		}
		if (iLocal_50 != -99)
		{
			func_9(PLAYER::PLAYER_PED_ID(), 1, iLocal_50, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			iLocal_50 = -99;
		}
		if (iLocal_51)
		{
			GlobalFunc_5474(PLAYER::PLAYER_PED_ID());
			iLocal_51 = 0;
		}
	}
	iLocal_39 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_43))
	{
		func_6(iParam0);
		func_5();
		func_193(0);
	}
	iLocal_37 = 0;
	GlobalFunc_434(&uLocal_60);
}


void func_5()//Position - 0x364
{
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
	iLocal_52++;
}

void func_6(int iParam0)//Position - 0x382
{
	switch (iParam0)
	{
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 5:
			break;
		
		case 6:
			break;
		
		case 7:
			break;
	}
}



int func_9(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x538
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
		Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10957(iVar5, iParam1, iParam2, 1);
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
					Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 10, 0) };
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
						GlobalFunc_10957(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, uVar15[iVar0]) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10957(iVar5, iVar0, uVar15[iVar0], 1);
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
								GlobalFunc_10957(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, GlobalFunc_11145(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_9(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			GlobalFunc_10815(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10957(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11144(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_9(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar69 = GlobalFunc_6740(iParam0, 1);
			iVar3 = GlobalFunc_11144(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10957(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11144(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_9(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar70 = GlobalFunc_6740(iParam0, 11);
				iVar71 = GlobalFunc_6740(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_6740(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11144(iParam0, iVar5, 11, iVar70, 3, 0);
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
					iVar70 = GlobalFunc_6740(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_9(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
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
								func_9(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_9(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 8, iVar71) };
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
										Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iVar82) };
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
								func_9(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_9(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10622(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			GlobalFunc_10815(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11145(iParam0, 8, -1), iParam2);
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
				GlobalFunc_11280(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10815(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6740(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_6740(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_6740(iParam0, 7);
				if (!GlobalFunc_8332(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
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
					iVar94 = GlobalFunc_6740(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11144(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
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
					iVar3 = GlobalFunc_11144(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_9(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7648(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_11019(iParam0, 9, iVar97))
						{
							func_9(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_9(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_9(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = GlobalFunc_11145(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11145(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_9(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_9(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11144(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_9(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11144(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_9(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11216(iParam0, &uVar4))
		{
			func_9(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_9(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_9(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_9(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_9(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}
























































































































































































void func_193(bool bParam0)//Position - 0x31E63
{
	func_194();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_43))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_43))
		{
			ENTITY::DETACH_ENTITY(iLocal_43, 1, 1);
			if (bParam0)
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_43, 1, Local_44, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
			}
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_43);
	}
	iLocal_40 = 0;
	iLocal_41 = 0;
}

void func_194()//Position - 0x31EAE
{
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 322, 1);
	}
	GlobalFunc_187();
}


void func_196(int iParam0, int iParam1)//Position - 0x31F68
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	GRAPHICS::DRAW_DEBUG_TEXT_2D("runVendingMachine", 0.02f, 0.05f, 0f, 0, 0, 255, 255);
	switch (iLocal_37)
	{
		case 0:
			GRAPHICS::DRAW_DEBUG_TEXT_2D("playerOutOfRange", 0.2f, 0.05f, 0f, 0, 0, 255, 255);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT3", 3))
			{
				if (Global_68245)
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT3") > 0.9f)
					{
						if (WEAPON::IS_WEAPON_VALID(iLocal_42))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_42, 0);
						}
						if (iLocal_50 != -99)
						{
							func_9(PLAYER::PLAYER_PED_ID(), 1, iLocal_50, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							iLocal_50 = -99;
						}
						if (iLocal_51)
						{
							GlobalFunc_5474(PLAYER::PLAYER_PED_ID());
							iLocal_51 = 0;
						}
					}
				}
				func_194();
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_54, 3.2f, 3.2f, 3.2f, 0, 1, 0))
				{
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0))
					{
						iLocal_40 = 0;
						iLocal_41 = 0;
						iLocal_37 = 1;
					}
				}
			}
			break;
		
		case 1:
			GRAPHICS::DRAW_DEBUG_TEXT_2D("waitForPlayer", 0.2f, 0.05f, 0f, 0, 0, 255, 255);
			if (MISC::IS_BIT_SET(uLocal_69, 0))
			{
				if (!Global_90014.f_1318)
				{
					MISC::CLEAR_BIT(&uLocal_69, 0);
				}
			}
			if (GlobalFunc_552(1, 0, 1))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if ((((((((!(PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) && !func_269(iParam0)) && !OBJECT::IS_OBJECT_NEAR_POINT(joaat("prop_bin_06a"), Local_54, 1f)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_54, 0.6f, 0.6f, 1f, 0, 1, 0)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT2", 3)) && !func_271()) && Global_24694)
					{
						if (func_267() || (Global_68245 && MONEY::NETWORK_CAN_SPEND_MONEY(1, 0, 0, 1, -1)))
						{
							if (!GlobalFunc_160() && !HUD::IS_PAUSE_MENU_ACTIVE())
							{
								if (iLocal_53 == -1)
								{
									GlobalFunc_6774(&iLocal_53, 3, "VENDHLP", 0, 0);
								}
								if (GlobalFunc_5079(iLocal_53, 1))
								{
									if (Global_68245 && !HUD::IS_PAUSE_MENU_ACTIVE())
									{
										if (GlobalFunc_4962(6) || iLocal_41)
										{
											if (GlobalFunc_218())
											{
												if (!iLocal_41)
												{
												}
												iLocal_41 = 1;
											}
										}
										if (GlobalFunc_218())
										{
											iLocal_72 = 1;
											iLocal_73 = 0;
											iVar1 = -1;
											while (func_252(&iVar1, -221807075, 537254313, iVar0, iLocal_41))
											{
												SYSTEM::WAIT(0);
											}
											switch (iVar1)
											{
												case 0:
													GlobalFunc_5084(&iLocal_53);
													return;
													break;
												
												case 2:
													break;
												
												default:
													break;
											}
										}
										GlobalFunc_7467(PLAYER::PLAYER_ID(), 0, 66304, 1);
										WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_42, 1);
										WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
										if (GlobalFunc_6666(GlobalFunc_1432(), 1, GlobalFunc_11145(PLAYER::PLAYER_PED_ID(), 1, -1)))
										{
											iLocal_50 = GlobalFunc_11145(PLAYER::PLAYER_PED_ID(), 1, -1);
											func_9(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
										}
										if (GlobalFunc_1671(PLAYER::PLAYER_PED_ID(), 7))
										{
											PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
											PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
										}
										if (GlobalFunc_5474(PLAYER::PLAYER_PED_ID()))
										{
											iLocal_51 = 1;
										}
										if (GlobalFunc_6742(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, GlobalFunc_11145(PLAYER::PLAYER_PED_ID(), 14, 0)))
										{
											PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
										}
									}
									else
									{
										MISC::CLEAR_AREA_OF_PROJECTILES(Local_54, 3f, 0);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
										Global_24695 = 1;
										GlobalFunc_8316(1, 1, 0, 0);
									}
									WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 1, 1, 0);
									AUDIO::REQUEST_AMBIENT_AUDIO_BANK("VENDING_MACHINE", 0);
									PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
									iLocal_39 = 1;
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 2000, 2048, 2);
									PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 322, 1);
									TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_54, 1f, 20000, ENTITY::GET_ENTITY_HEADING(iParam0), 0.1f);
									GlobalFunc_436(&uLocal_60, 0, 0);
									GlobalFunc_5084(&iLocal_53);
									GlobalFunc_7629();
									if (!MISC::IS_BIT_SET(uLocal_69, 1))
									{
										iLocal_37 = 2;
									}
									else
									{
										iLocal_37 = 3;
									}
								}
							}
							else
							{
								GlobalFunc_5084(&iLocal_53);
							}
						}
						else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							GlobalFunc_5084(&iLocal_53);
							GlobalFunc_159("VENDCSH", -1);
						}
						else
						{
							if (iLocal_53 == -1)
							{
								GlobalFunc_6774(&iLocal_53, 3, "VENDHLP", 0, 0);
							}
							if (GlobalFunc_5079(iLocal_53, 1))
							{
								if (!MISC::IS_BIT_SET(uLocal_69, 0))
								{
									GlobalFunc_1540(337428855, 1, 0);
									GlobalFunc_7677(0, 31, 3);
									MISC::SET_BIT(&uLocal_69, 0);
								}
							}
						}
					}
					else
					{
						GlobalFunc_5084(&iLocal_53);
					}
				}
				else
				{
					GlobalFunc_5084(&iLocal_53);
				}
			}
			else
			{
				GlobalFunc_5084(&iLocal_53);
			}
			break;
		
		case 3:
			if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_37 = 2;
				MISC::CLEAR_BIT(&uLocal_69, 1);
			}
			break;
		
		case 2:
			GRAPHICS::DRAW_DEBUG_TEXT_2D("grabPlayer", 0.2f, 0.05f, 0f, 0, 0, 255, 255);
			GlobalFunc_7629();
			func_194();
			if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 7 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_54, 0.1f, 0.1f, 0.1f, 0, 1, 0))
			{
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT1", 2f, -4f, -1, 1048576, 0, 0, 0, 0);
				GlobalFunc_434(&uLocal_60);
				iLocal_37 = 4;
			}
			else if (GlobalFunc_5071(&uLocal_60, 2500, 0) || func_271())
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (Global_68245)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_42, 0);
				}
				if (iLocal_50 != -99)
				{
					func_9(PLAYER::PLAYER_PED_ID(), 1, iLocal_50, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					iLocal_50 = -99;
				}
				if (iLocal_51)
				{
					GlobalFunc_5474(PLAYER::PLAYER_PED_ID());
					iLocal_51 = 0;
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				GlobalFunc_8316(0, 1, 1, 0);
				Global_24695 = 0;
				iLocal_37 = 0;
				GlobalFunc_434(&uLocal_60);
			}
			break;
		
		case 4:
			GRAPHICS::DRAW_DEBUG_TEXT_2D("runVend", 0.2f, 0.05f, 0f, 0, 0, 255, 255);
			GlobalFunc_7629();
			func_194();
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT1", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT1") < 0.52f)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_54, 0.1f, 0.1f, 0.1f, 0, 1, 0))
					{
						func_193(1);
						func_3(iParam1);
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT1", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT1") > fLocal_48)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_43))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT1") > fLocal_49)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT2", 3))
								{
									TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT2", 4f, -1000f, -1, 1048576, 0f, 0, 2052, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
								if (Global_68245)
								{
									GlobalFunc_7467(PLAYER::PLAYER_ID(), 1, 0, 1);
								}
								else
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
									PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
								}
								iLocal_39 = 0;
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT1", 3))
								{
									TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT1", -1.5f);
								}
							}
						}
						else if (Global_68245)
						{
							iLocal_43 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01b"), Local_54, 1, 0, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_43, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
						else
						{
							iLocal_43 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01b"), Local_54, 0, 0, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_43, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT1") > 0.1f)
					{
						if (!iLocal_40)
						{
							func_198(iVar0);
							iLocal_40 = 1;
							switch (iParam1)
							{
								case 2:
									GlobalFunc_184(67, 1);
									break;
								
								case 7:
									GlobalFunc_184(66, 1);
									break;
								}
							}
						}
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT2", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT2") > 0.98f)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT3", 3))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT3", 1000f, -4f, -1, 1048624, 0f, 0, 2048, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					iLocal_37 = 5;
				}
			}
			else
			{
				func_3(iParam1);
			}
			break;
		
		case 5:
			GRAPHICS::DRAW_DEBUG_TEXT_2D("resetVend", 0.2f, 0.05f, 0f, 0, 0, 255, 255);
			GlobalFunc_7629();
			func_194();
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT3", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), sLocal_38, "PLYR_BUY_DRINK_PT3") > fLocal_47)
				{
					func_5();
					Global_24695 = 0;
					if (Global_68245)
					{
						GlobalFunc_7467(PLAYER::PLAYER_ID(), 1, 0, 1);
					}
					else
					{
						GlobalFunc_8316(0, 1, 1, 0);
					}
					func_6(iParam1);
					iLocal_39 = 0;
					PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
					if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("VENDING_MACHINE", 0))
					{
						AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
					}
					AUDIO::HINT_AMBIENT_AUDIO_BANK("VENDING_MACHINE", 0);
					func_193(1);
					if (iLocal_52 > 9)
					{
						iLocal_35 = 3;
					}
					else
					{
						func_194();
						iLocal_37 = 0;
					}
				}
			}
			else
			{
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
				func_3(iParam1);
			}
			break;
	}
}


void func_198(int iParam0)//Position - 0x32912
{
	bool bVar0;
	
	GlobalFunc_184(67, 1);
	bVar0 = true;
	if (GlobalFunc_4962(6))
	{
		GlobalFunc_4960(6);
		bVar0 = false;
	}
	if (bVar0)
	{
		if (Global_68245)
		{
			if (GlobalFunc_218())
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(GlobalFunc_1360(GlobalFunc_5422()));
			}
			if (GlobalFunc_470(0) > 0)
			{
				MONEY::NETWORK_BUY_ITEM(iParam0, MISC::GET_HASH_KEY("soda"), 12, 1, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				MONEY::NETWORK_BUY_ITEM(iParam0, MISC::GET_HASH_KEY("soda"), 12, 1, 0, 0, 0, 0, 0, 1);
			}
			if (GlobalFunc_218())
			{
				GlobalFunc_5069(GlobalFunc_5422());
			}
		}
		else
		{
			GlobalFunc_10834(GlobalFunc_8315(), 1, iParam0);
		}
	}
}






















































int func_252(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3401E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_72)
	{
		switch (iLocal_73)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (bParam4)
				{
					iVar2 = 0;
				}
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
				{
					if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
					{
						if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				if (func_258(78225582, iParam1, -1829785317, iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (bParam4)
					{
						if (func_258(78225582, iParam1, -1829785317, iParam2, 1, 0, 1, 8, 283722020, 3))
						{
						}
						else
						{
							iLocal_73 = 3;
							return 1;
						}
					}
					if (GlobalFunc_6940())
					{
						HUD::_0x170F541E1CADD1DE(1);
						HUD::_SET_PLAYER_CASH_CHANGE(-iVar0, -iVar1);
						iLocal_73 = 1;
					}
					else
					{
						iLocal_73 = 3;
					}
				}
				else
				{
					iLocal_73 = 3;
				}
				break;
			
			case 1:
				if (GlobalFunc_1363(GlobalFunc_5422()))
				{
					if (GlobalFunc_1362(GlobalFunc_5422()) == 2)
					{
						iLocal_73 = 2;
					}
					else
					{
						iLocal_73 = 3;
					}
				}
				break;
			
			case 2:
				iLocal_72 = 0;
				iLocal_73 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam0 = 2;
				return 0;
				break;
			
			case 3:
				GlobalFunc_5069(GlobalFunc_5422());
				iLocal_72 = 0;
				iLocal_73 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam0 = 0;
				return 0;
				break;
		}
		GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1);
		return 1;
	}
	iLocal_73 = 0;
	*iParam0 = -1;
	return 0;
}






int func_258(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x34545
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!GlobalFunc_218())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(GlobalFunc_5()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_2540557 = 1;
			return 0;
		}
		if (Global_2435880)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2540558 = 1;
				return 0;
			}
		}
	}
	iVar1 = GlobalFunc_5422();
	if (iVar1 == -1)
	{
		if (!GlobalFunc_6955(&iVar1, iParam0, iParam1, uParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && GlobalFunc_1542(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_2540096[iVar1 /*69*/].f_66 = Var2;
		Global_2540096[iVar1 /*69*/].f_67 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}









int func_267()//Position - 0x34A8D
{
	if (Global_68245)
	{
		if (GlobalFunc_470(1) > 0)
		{
			return 1;
		}
	}
	else if (GlobalFunc_469(GlobalFunc_8315()) > 0)
	{
		return 1;
	}
	return 0;
}


int func_269(int iParam0)//Position - 0x34B15
{
	if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0) == MISC::GET_HASH_KEY("V_7_RecAreaRm") || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0) == MISC::GET_HASH_KEY("V_7_GunSHopRm"))
	{
		if (OBJECT::IS_OBJECT_NEAR_POINT(joaat("v_ret_gc_chair02"), Local_54, 1f))
		{
			return 1;
		}
	}
	return 0;
}


int func_271()//Position - 0x34C3A
{
	if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_smokegrenade"), 0))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
		return 1;
	}
	return 0;
}

int func_272(int iParam0)//Position - 0x34C8A
{
	switch (iParam0)
	{
		case 1:
			if (MISC::ARE_STRINGS_EQUAL(sLocal_38, "NULL"))
			{
				sLocal_38 = "MINI@SPRUNK@FIRST_PERSON";
			}
			break;
		
		case 2:
			if (MISC::ARE_STRINGS_EQUAL(sLocal_38, "NULL"))
			{
				sLocal_38 = "MINI@SPRUNK@FIRST_PERSON";
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 5:
			break;
		
		case 6:
			break;
		
		case 7:
			break;
	}
	sLocal_38 = "MINI@SPRUNK@FIRST_PERSON";
	STREAMING::REQUEST_ANIM_DICT(sLocal_38);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_38))
	{
		AUDIO::HINT_AMBIENT_AUDIO_BANK("VENDING_MACHINE", 0);
		return 1;
	}
	return 0;
}










void func_282()//Position - 0x34F65
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		bLocal_71 = true;
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
		GlobalFunc_5092(0, -1, 0);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
}





int func_287(int iParam0)//Position - 0x350C1
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == iLocal_62)
		{
			return 1;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == iLocal_63)
		{
			return 2;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == iLocal_64)
		{
			return 3;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == iLocal_65)
		{
			return 4;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == iLocal_66)
		{
			return 5;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == iLocal_67)
		{
			return 6;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == iLocal_68)
		{
			return 7;
		}
	}
	return 0;
}


void func_289()//Position - 0x3515C
{
	if (MISC::IS_BIT_SET(uLocal_70, 0))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
		MISC::CLEAR_BIT(&uLocal_70, 0);
	}
	if (iLocal_39)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (!MISC::ARE_STRINGS_EQUAL(sLocal_38, "NULL"))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_38);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_can_01b"));
		AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
		GlobalFunc_5084(&iLocal_53);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_43) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_43))
	{
		ENTITY::DETACH_ENTITY(iLocal_43, 1, 1);
		OBJECT::DELETE_OBJECT(&iLocal_43);
	}
	Global_24695 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

