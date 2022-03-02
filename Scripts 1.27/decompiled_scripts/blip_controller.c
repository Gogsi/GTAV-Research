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
	char* sLocal_20 = NULL;
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	struct<3> Local_23 = { 0, 0, 0 } ;
	struct<3> Local_26 = { 0, 0, 0 } ;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	bool bLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
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
	sLocal_20 = "CHECKPOINT_NORMAL";
	sLocal_21 = "CHECKPOINT_MISSED";
	sLocal_22 = "CHECKPOINT_PERFECT";
	Local_23 = { 1694.74f, 3276.502f, 41.2796f };
	Local_26 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_29 = 3;
	fLocal_30 = 0f;
	fLocal_34 = -0.0375f;
	fLocal_35 = 0.17f;
	fLocal_38 = 80f;
	fLocal_39 = 140f;
	fLocal_40 = 180f;
	bLocal_49 = true;
	iLocal_52 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		GlobalFunc_491();
	}
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		iVar1 = GlobalFunc_1989(iVar0);
		GlobalFunc_2440(iVar1, GlobalFunc_5572(iVar0));
		iVar0++;
	}
	func_45(90, 1);
	func_45(91, 1);
	Global_24745 = 1;
	while (Global_24747)
	{
		if ((MISC::GET_GAME_TIMER() % 250) == 0)
		{
		}
		SYSTEM::WAIT(0);
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iLocal_54[iVar2] = -1;
		iVar2++;
	}
	MISC::SET_BIT(&(Global_Mission_Blips[iVar2 /*23*/].f_11), 18);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 262)
	{
		MISC::SET_BIT(&(Global_Mission_Blips[iVar2 /*23*/].f_11), 18);
		iVar2++;
	}
	iLocal_70 = Global_30776;
	bVar3 = false;
	func_44();
	func_42();
	while (true)
	{
		if (!bVar3)
		{
			func_41();
		}
		bVar3 = func_34();
		if (bVar3)
		{
			Global_24745 = 1;
		}
		iVar4 = 0;
		iVar5 = 0;
		iVar2 = 0;
		if (Global_24745)
		{
			func_44();
			func_42();
			iVar6 = 0;
			iVar2 = 0;
			while (iVar2 < 262)
			{
				bVar7 = MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 18);
				if (!bVar7)
				{
					if (func_33(iVar2))
					{
						iVar5++;
						bVar7 = true;
					}
				}
				iVar4++;
				if (bVar7)
				{
					iVar8 = 0;
					iVar9 = 0;
					if (Global_30776)
					{
						iVar8++;
						iVar9++;
					}
					else
					{
						if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 13))
						{
							if (func_32())
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 1))
						{
							if (!bLocal_49)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 2))
						{
							if (bLocal_49)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 7))
						{
							if (!GlobalFunc_39(15))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 16))
						{
							if (!GlobalFunc_4938(Global_Mission_Blips[iVar2 /*23*/].f_22))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 14))
						{
							if (GlobalFunc_39(5))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 8))
						{
							if (Global_Mission_Blips[iVar2 /*23*/].f_16 != 4 && Global_Mission_Blips[iVar2 /*23*/].f_16 != 8)
							{
								if (!func_28(iVar2))
								{
									iVar8++;
								}
								iVar9++;
							}
						}
						if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 19))
						{
							switch (iLocal_63)
							{
								case 1:
								case 0:
								case 2:
									break;
								
								default:
									iVar8++;
									break;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 27))
						{
							if (bLocal_44)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (Global_Mission_Blips[iVar2 /*23*/].f_16 == 1)
						{
							func_22();
						}
					}
					if (iVar9 > 0)
					{
						if (iVar8 > 0)
						{
							MISC::CLEAR_BIT(&(Global_Mission_Blips[iVar2 /*23*/].f_11), 0);
						}
						else if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 15))
						{
							MISC::SET_BIT(&(Global_Mission_Blips[iVar2 /*23*/].f_11), 0);
						}
					}
					else if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 15))
					{
						MISC::SET_BIT(&(Global_Mission_Blips[iVar2 /*23*/].f_11), 0);
					}
					if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 0) && MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 3))
					{
						bVar10 = false;
						if (!HUD::DOES_BLIP_EXIST(Global_Mission_Blips[iVar2 /*23*/].f_19))
						{
							while (!HUD::GET_NUMBER_OF_ACTIVE_BLIPS() < 150)
							{
								SYSTEM::WAIT(2000);
							}
							if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_63)
								{
									case 1:
									case 0:
									case 2:
										if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 28))
										{
											Global_Mission_Blips[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_RADIUS(Global_Mission_Blips[iVar2 /*23*/][0 /*3*/], Global_Mission_Blips[iVar2 /*23*/].f_10);
											HUD::SET_BLIP_ALPHA(Global_Mission_Blips[iVar2 /*23*/].f_19, 128);
											HUD::SHOW_HEIGHT_ON_BLIP(Global_Mission_Blips[iVar2 /*23*/].f_19, 0);
										}
										else
										{
											Global_Mission_Blips[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(Global_Mission_Blips[iVar2 /*23*/][iLocal_63 /*3*/]);
											HUD::SET_BLIP_SPRITE(Global_Mission_Blips[iVar2 /*23*/].f_19, Global_Mission_Blips[iVar2 /*23*/].f_12[iLocal_63]);
										}
										break;
									
									default:
										Global_Mission_Blips[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(1f, 2f, 3f);
										break;
								}
							}
							else if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 28))
							{
								Global_Mission_Blips[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_RADIUS(Global_Mission_Blips[iVar2 /*23*/][0 /*3*/], Global_Mission_Blips[iVar2 /*23*/].f_10);
								HUD::SET_BLIP_ALPHA(Global_Mission_Blips[iVar2 /*23*/].f_19, 128);
								HUD::SHOW_HEIGHT_ON_BLIP(Global_Mission_Blips[iVar2 /*23*/].f_19, 0);
							}
							else
							{
								Global_Mission_Blips[iVar2 /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(Global_Mission_Blips[iVar2 /*23*/][0 /*3*/]);
								HUD::SET_BLIP_SPRITE(Global_Mission_Blips[iVar2 /*23*/].f_19, Global_Mission_Blips[iVar2 /*23*/].f_12[0]);
							}
							if (Global_Mission_Blips[iVar2 /*23*/].f_16 == 1)
							{
								bVar10 = true;
							}
						}
						else
						{
							if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_63)
								{
									case 1:
									case 0:
									case 2:
										HUD::SET_BLIP_COORDS(Global_Mission_Blips[iVar2 /*23*/].f_19, Global_Mission_Blips[iVar2 /*23*/][iLocal_63 /*3*/]);
										break;
									
									default:
										break;
								}
							}
							else
							{
								HUD::SET_BLIP_COORDS(Global_Mission_Blips[iVar2 /*23*/].f_19, Global_Mission_Blips[iVar2 /*23*/][0 /*3*/]);
							}
							if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar2 /*23*/].f_11, 9))
							{
								if (iLocal_46)
								{
									HUD::SET_BLIP_FLASHES(Global_Mission_Blips[iVar2 /*23*/].f_19, 1);
									iLocal_46 = 0;
								}
								else
								{
									HUD::SET_BLIP_FLASHES_ALTERNATE(Global_Mission_Blips[iVar2 /*23*/].f_19, 1);
									iLocal_46 = 1;
								}
								HUD::SET_BLIP_FLASH_TIMER(Global_Mission_Blips[iVar2 /*23*/].f_19, 10000);
								MISC::CLEAR_BIT(&(Global_Mission_Blips[iVar2 /*23*/].f_11), 9);
							}
							else
							{
								HUD::SET_BLIP_FLASHES(Global_Mission_Blips[iVar2 /*23*/].f_19, 0);
							}
						}
						func_19(Global_Mission_Blips[iVar2 /*23*/].f_19, iVar2);
						if (bVar10)
						{
							func_18(iVar2);
						}
						iVar5++;
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Global_Mission_Blips[iVar2 /*23*/].f_19))
						{
							HUD::REMOVE_BLIP(&(Global_Mission_Blips[iVar2 /*23*/].f_19));
							iVar5++;
							if (Global_Mission_Blips[iVar2 /*23*/].f_16 == 1)
							{
								func_17(iVar2);
							}
						}
						Global_Mission_Blips[iVar2 /*23*/].f_19 = 0;
					}
				}
				MISC::CLEAR_BIT(&(Global_Mission_Blips[iVar2 /*23*/].f_11), 18);
				iVar11 = 30;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar11 = 250;
				}
				if (iVar5 > iVar11)
				{
					SYSTEM::WAIT(0);
					iVar5 = 0;
				}
				if ((iVar4 / 20) > iVar6)
				{
					iVar6 = (iVar4 / 20);
					SYSTEM::WAIT(0);
				}
				iVar2++;
			}
		}
		Global_24745 = Global_24746;
		Global_24746 = 0;
		if (iVar4 == 0)
		{
			func_10();
			func_6();
			SYSTEM::WAIT(500);
			iLocal_63 = GlobalFunc_8354();
		}
	}
}






void func_6()//Position - 0x8CC
{
	if (GlobalFunc_8354() == 1)
	{
		if (GlobalFunc_485(63))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (GlobalFunc_485(126))
				{
					if (GlobalFunc_474(137))
					{
						GlobalFunc_2436(137, 0, 0);
					}
					if (!GlobalFunc_474(138))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("chop")) == 0)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 19.3f, 528.24f, 169.63f, 1) > 50f)
							{
								GlobalFunc_2436(138, 1, 0);
							}
						}
					}
				}
				else
				{
					if (GlobalFunc_474(138))
					{
						GlobalFunc_2436(138, 0, 0);
					}
					if (!GlobalFunc_474(137))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("chop")) == 0)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -11.15f, -1425.56f, 29.67f, 1) > 50f)
							{
								GlobalFunc_2436(137, 1, 0);
							}
						}
					}
				}
			}
		}
	}
}




void func_10()//Position - 0xB1A
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	Var0 = { GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()) };
	iVar3 = -1;
	fVar4 = 1000000f;
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (iLocal_54[iVar5] != -1)
		{
			if (HUD::DOES_BLIP_EXIST(Global_Mission_Blips[iLocal_54[iVar5] /*23*/].f_19))
			{
				fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, HUD::GET_BLIP_COORDS(Global_Mission_Blips[iLocal_54[iVar5] /*23*/].f_19), 1);
				if (fVar6 < fVar4)
				{
					fVar4 = fVar6;
					iVar3 = iVar5;
				}
			}
		}
		iVar5++;
	}
	if (iLocal_52 == iVar3)
	{
		return;
	}
	iLocal_52 = iVar3;
	if (iVar3 == -1)
	{
		return;
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (iLocal_54[iVar5] != -1)
		{
			if (iVar5 == iVar3)
			{
				if (HUD::DOES_BLIP_EXIST(Global_Mission_Blips[iLocal_54[iVar5] /*23*/].f_19))
				{
					GlobalFunc_5774(iLocal_54[iVar5]);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Global_Mission_Blips[iLocal_54[iVar5] /*23*/].f_19))
			{
				GlobalFunc_5773(iLocal_54[iVar5]);
			}
		}
		iVar5++;
	}
}







void func_17(int iParam0)//Position - 0xE25
{
	int iVar0;
	
	if (iLocal_53 < 1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_54[iVar0] == iParam0)
		{
			iLocal_53 = (iLocal_53 - 1);
			iLocal_54[iVar0] = -1;
			if (iParam0 == iLocal_52)
			{
				iLocal_52 = -1;
			}
			return;
		}
		iVar0++;
	}
}

void func_18(int iParam0)//Position - 0xE70
{
	int iVar0;
	int iVar1;
	
	if (iLocal_53 == 7)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_53)
	{
		if (iLocal_54[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_54[iVar0] == -1)
		{
			iVar1 = iVar0;
			iVar0 = 7;
		}
		iVar0++;
	}
	iLocal_54[iVar1] = iParam0;
	iLocal_53++;
}

void func_19(var uParam0, int iParam1)//Position - 0xED9
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = GlobalFunc_8354();
	HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(uParam0, 1);
	HUD::SET_BLIP_PRIORITY(uParam0, 2);
	HUD::SET_BLIP_COLOUR(uParam0, func_21(iParam1));
	if (Global_Mission_Blips[iParam1 /*23*/].f_16 == 4 || Global_Mission_Blips[iParam1 /*23*/].f_16 == 8)
	{
		switch (iVar0)
		{
			case 0:
				HUD::SET_BLIP_COLOUR(uParam0, 42);
				break;
			
			case 1:
				HUD::SET_BLIP_COLOUR(uParam0, 43);
				break;
			
			case 2:
				HUD::SET_BLIP_COLOUR(uParam0, 44);
				break;
			}
	}
	if (!MISC::IS_BIT_SET(Global_Mission_Blips[iParam1 /*23*/].f_11, 28))
	{
		HUD::SET_BLIP_SCALE(uParam0, 1f);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_Mission_Blips[iParam1 /*23*/].f_20)))
	{
		if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_Mission_Blips[iParam1 /*23*/].f_20)))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0, &(Global_Mission_Blips[iParam1 /*23*/].f_20));
		}
	}
	bVar1 = MISC::IS_BIT_SET(Global_Mission_Blips[iParam1 /*23*/].f_11, 4);
	bVar2 = MISC::IS_BIT_SET(Global_Mission_Blips[iParam1 /*23*/].f_11, 5);
	bVar3 = MISC::IS_BIT_SET(Global_Mission_Blips[iParam1 /*23*/].f_11, 6);
	bVar4 = false;
	if (GlobalFunc_6687(0))
	{
		bVar4 = MISC::IS_BIT_SET(Global_Mission_Blips[iParam1 /*23*/].f_11, 11);
	}
	if (bVar3 && !bVar4)
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(uParam0, false);
	}
	else
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(uParam0, true);
	}
	if (bVar2 && bVar1)
	{
		HUD::SET_BLIP_DISPLAY(uParam0, 4);
	}
	else
	{
		if (bVar2)
		{
			HUD::SET_BLIP_DISPLAY(uParam0, 5);
		}
		if (bVar1)
		{
			HUD::SET_BLIP_DISPLAY(uParam0, 3);
		}
	}
	switch (Global_Mission_Blips[iParam1 /*23*/].f_16)
	{
		case 7:
			HUD::SET_BLIP_PRIORITY(uParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
		
		case 6:
		case 5:
			HUD::SET_BLIP_PRIORITY(uParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
		
		case 1:
			HUD::SET_BLIP_PRIORITY(uParam0, 3);
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			break;
		
		case 9:
			HUD::SET_BLIP_PRIORITY(uParam0, 1);
			HUD::SET_BLIP_CATEGORY(uParam0, 10);
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
		
		case 4:
		case 8:
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			if (Global_Mission_Blips[iParam1 /*23*/].f_16 == 4)
			{
				HUD::SET_BLIP_PRIORITY(uParam0, 7);
			}
			else
			{
				HUD::SET_BLIP_PRIORITY(uParam0, 5);
			}
			if (MISC::IS_BIT_SET(Global_Mission_Blips[iParam1 /*23*/].f_11, 8))
			{
				if (!func_28(iParam1))
				{
					if (MISC::IS_BIT_SET(Global_Mission_Blips[iParam1 /*23*/].f_11, 28))
					{
						HUD::SET_BLIP_ALPHA(uParam0, 0);
					}
					else
					{
						if (Global_Mission_Blips[iParam1 /*23*/].f_17 == 0)
						{
							HUD::SET_BLIP_COLOUR(uParam0, 42);
						}
						if (Global_Mission_Blips[iParam1 /*23*/].f_17 == 1)
						{
							HUD::SET_BLIP_COLOUR(uParam0, 43);
						}
						if (Global_Mission_Blips[iParam1 /*23*/].f_17 == 2)
						{
							HUD::SET_BLIP_COLOUR(uParam0, 44);
						}
						if (Global_Mission_Blips[iParam1 /*23*/].f_16 == 8)
						{
							HUD::SET_BLIP_AS_SHORT_RANGE(uParam0, MISC::IS_BIT_SET(Global_Mission_Blips[iParam1 /*23*/].f_11, 5));
							HUD::SET_BLIP_PRIORITY(uParam0, 3);
							HUD::SET_BLIP_AS_SHORT_RANGE(uParam0, true);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(uParam0, 1);
							HUD::SET_BLIP_SCALE(uParam0, 0.77f);
						}
						else
						{
							HUD::SET_BLIP_SCALE(uParam0, 0.72f);
						}
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(Global_Mission_Blips[iParam1 /*23*/].f_11, 28))
					{
						HUD::SET_BLIP_ALPHA(uParam0, 128);
					}
					if (Global_Mission_Blips[iParam1 /*23*/].f_16 == 8)
					{
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(uParam0, 0);
					}
				}
			}
			break;
		
		default:
			HUD::SET_BLIP_PRIORITY(uParam0, 5);
			break;
	}
	switch (iParam1)
	{
		case 48:
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
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			break;
	}
	if (MISC::IS_BIT_SET(Global_Mission_Blips[iParam1 /*23*/].f_11, 19))
	{
		switch (iVar0)
		{
			case 1:
			case 0:
			case 2:
				HUD::SET_BLIP_COORDS(Global_Mission_Blips[iParam1 /*23*/].f_19, Global_Mission_Blips[iParam1 /*23*/][iVar0 /*3*/]);
				break;
			}
	}
	if (MISC::IS_BIT_SET(Global_Mission_Blips[iParam1 /*23*/].f_11, 17))
	{
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(uParam0, 1);
	}
	else
	{
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(uParam0, 0);
	}
	if (MISC::IS_BIT_SET(Global_Mission_Blips[iParam1 /*23*/].f_11, 20))
	{
		HUD::SHOW_TICK_ON_BLIP(uParam0, 1);
	}
	else
	{
		HUD::SHOW_TICK_ON_BLIP(uParam0, 0);
	}
	if (MISC::IS_BIT_SET(Global_Mission_Blips[iParam1 /*23*/].f_11, 29))
	{
		HUD::SET_BLIP_COLOUR(uParam0, 39);
	}
}


int func_21(int iParam0)//Position - 0x1309
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

void func_22()//Position - 0x134C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_23(iVar0);
		iVar0++;
	}
}

void func_23(int iParam0)//Position - 0x136C
{
	bool bVar0;
	
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_85405[iParam0 /*10*/].f_7 == 262)
	{
		return;
	}
	bVar0 = false;
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iParam0], 0))
	{
		if (Global_85405[iParam0 /*10*/].f_9 != GlobalFunc_8354())
		{
			bVar0 = true;
		}
		else if (!GlobalFunc_5648(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (GlobalFunc_103(6))
		{
			bVar0 = false;
		}
	}
	if (GlobalFunc_6687(14))
	{
		bVar0 = false;
	}
	GlobalFunc_2436(Global_85405[iParam0 /*10*/].f_7, bVar0, 0);
}





int func_28(int iParam0)//Position - 0x1583
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(Global_Mission_Blips[iVar0 /*23*/].f_11, 8))
	{
		return 0;
	}
	if (Global_Mission_Blips[iVar0 /*23*/].f_17 == GlobalFunc_8354())
	{
		return 1;
	}
	if (!MISC::IS_BIT_SET(Global_Mission_Blips[iVar0 /*23*/].f_11, 10))
	{
		return 0;
	}
	if (Global_Mission_Blips[iVar0 /*23*/].f_18 == GlobalFunc_8354())
	{
		return 1;
	}
	return 0;
}




int func_32()//Position - 0x1809
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != 0)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x1822
{
	if (iLocal_67 && MISC::IS_BIT_SET(Global_Mission_Blips[iParam0 /*23*/].f_11, 13))
	{
		MISC::SET_BIT(&(Global_Mission_Blips[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_68 && ((MISC::IS_BIT_SET(Global_Mission_Blips[iParam0 /*23*/].f_11, 7) || MISC::IS_BIT_SET(Global_Mission_Blips[iParam0 /*23*/].f_11, 11)) || MISC::IS_BIT_SET(Global_Mission_Blips[iParam0 /*23*/].f_11, 16)))
	{
		MISC::SET_BIT(&(Global_Mission_Blips[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_69 && MISC::IS_BIT_SET(Global_Mission_Blips[iParam0 /*23*/].f_11, 14))
	{
		MISC::SET_BIT(&(Global_Mission_Blips[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_64 && ((MISC::IS_BIT_SET(Global_Mission_Blips[iParam0 /*23*/].f_11, 10) || MISC::IS_BIT_SET(Global_Mission_Blips[iParam0 /*23*/].f_11, 8)) || MISC::IS_BIT_SET(Global_Mission_Blips[iParam0 /*23*/].f_11, 19)))
	{
		MISC::SET_BIT(&(Global_Mission_Blips[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (bLocal_65)
	{
		MISC::SET_BIT(&(Global_Mission_Blips[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_71 && MISC::IS_BIT_SET(Global_Mission_Blips[iParam0 /*23*/].f_11, 27))
	{
		MISC::SET_BIT(&(Global_Mission_Blips[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if ((iLocal_72 && (MISC::IS_BIT_SET(Global_Mission_Blips[iParam0 /*23*/].f_11, 1) || MISC::IS_BIT_SET(Global_Mission_Blips[iParam0 /*23*/].f_11, 2))) || Global_Mission_Blips[iParam0 /*23*/].f_16 == 1)
	{
		MISC::SET_BIT(&(Global_Mission_Blips[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	return 0;
}

int func_34()//Position - 0x19C2
{
	int iVar0;
	
	iVar0 = 0;
	if (func_40())
	{
		if (!iLocal_66)
		{
			iLocal_66 = 1;
			iVar0 = 1;
		}
	}
	if (func_39())
	{
		if (!iLocal_67)
		{
			iLocal_67 = 1;
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		if (!iLocal_68)
		{
			iLocal_68 = 1;
			iVar0 = 1;
		}
	}
	if (func_37())
	{
		if (!iLocal_69)
		{
			iLocal_69 = 1;
			iVar0 = 1;
		}
	}
	bLocal_65 = false;
	if (Global_30776 != iLocal_70)
	{
		iLocal_70 = Global_30776;
		if (!bLocal_65)
		{
			bLocal_65 = true;
			iVar0 = 1;
		}
	}
	if (func_35())
	{
		if (!iLocal_72)
		{
			iLocal_72 = 1;
			iVar0 = 1;
		}
	}
	iLocal_63 = GlobalFunc_8354();
	if (iLocal_63 != iLocal_62)
	{
		iLocal_62 = iLocal_63;
		iLocal_64 = 1;
		iVar0 = 1;
	}
	iLocal_45 = bLocal_44;
	if (GlobalFunc_485(130))
	{
		bLocal_44 = true;
	}
	if (GlobalFunc_485(131))
	{
		bLocal_44 = false;
	}
	if (bLocal_44 != iLocal_45)
	{
		if (!iLocal_71)
		{
			iVar0 = 1;
		}
		iLocal_71 = 1;
	}
	return iVar0;
}

int func_35()//Position - 0x1A90
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
	{
		return 0;
	}
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	if (iLocal_50 != iVar0)
	{
		iLocal_50 = iVar0;
		if (iVar0 == 0 || func_36(iVar0))
		{
			bLocal_49 = true;
		}
		else
		{
			bLocal_49 = false;
		}
		return 1;
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x1AE5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (Global_29[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_37()//Position - 0x1B14
{
	if (iLocal_51 != GlobalFunc_6687(0))
	{
		iLocal_51 = GlobalFunc_6687(0);
		return 1;
	}
	return 0;
}

bool func_38()//Position - 0x1B32
{
	bool bVar0;
	
	bVar0 = Global_30777;
	Global_30777 = 0;
	if (bVar0)
	{
	}
	return bVar0;
}

int func_39()//Position - 0x1B4A
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != iLocal_48)
	{
		iLocal_48 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		return 1;
	}
	return 0;
}

int func_40()//Position - 0x1B6E
{
	if (Global_34913 != 15)
	{
		return 0;
	}
	if (CLOCK::GET_CLOCK_HOURS() != iLocal_47)
	{
		iLocal_47 = CLOCK::GET_CLOCK_HOURS();
		return 1;
	}
	return 0;
}

void func_41()//Position - 0x1B96
{
	iLocal_64 = 0;
	bLocal_65 = false;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	iLocal_70 = 0;
	iLocal_71 = 0;
	iLocal_72 = 0;
}

void func_42()//Position - 0x1BB9
{
	if (GlobalFunc_230(0) == 1 && !GlobalFunc_39(6))
	{
		GlobalFunc_2436(111, 1, 0);
		GlobalFunc_2436(112, 1, 0);
		GlobalFunc_2436(113, 1, 0);
	}
}


void func_44()//Position - 0x1C1A
{
	if (GlobalFunc_230(0) == 1 && !GlobalFunc_39(6))
	{
		GlobalFunc_2436(155, 1, 0);
		GlobalFunc_2436(156, 1, 0);
		GlobalFunc_2436(160, 1, 0);
		GlobalFunc_2436(159, 1, 0);
		GlobalFunc_2436(157, 1, 0);
		GlobalFunc_5773(157);
		GlobalFunc_2436(158, 1, 0);
		GlobalFunc_5773(158);
	}
}

void func_45(int iParam0, bool bParam1)//Position - 0x1C73
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_Mission_Blips[iVar0 /*23*/].f_11, 2))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_Mission_Blips[iVar0 /*23*/].f_11), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_Mission_Blips[iVar0 /*23*/].f_11), 2);
	}
	if (Global_24745 == 1)
	{
		Global_24746 = 1;
	}
	Global_24745 = 1;
	MISC::SET_BIT(&(Global_Mission_Blips[iVar0 /*23*/].f_11), 18);
}






