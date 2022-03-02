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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90[23] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	iLocal_27 = 3;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	iLocal_88 = 3;
	iLocal_89 = 9;
	if (GlobalFunc_3() == 2)
	{
		while (true)
		{
			SYSTEM::WAIT(0);
		}
	}
	HUD::_LOG_DEBUG_INFO(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1312436 = 1;
	iVar0 = 0;
	Global_1326068.f_281 = 1;
	Global_1323632.f_1 = 0;
	Global_1323632.f_3 = 0;
	Global_1323632.f_5 = 0;
	func_134(&Global_1326068);
	func_133(&Global_1326068);
	func_132(&Global_1326068);
	func_128();
	func_127(0, &Global_1326068);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(337714004);
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(-1884422346);
	HUD::_0x4895BDEA16E7C080(0);
	func_126();
	iVar5 = 1;
	switch (iScriptParam_0)
	{
		case 3:
			while (iVar0 == 0)
			{
				SYSTEM::WAIT(0);
				if (iVar5 == 1)
				{
					if (iVar6 == 0)
					{
						if (HUD::IS_FRONTEND_READY_FOR_CONTROL())
						{
							HUD::TAKE_CONTROL_OF_FRONTEND();
							iVar6 = 1;
						}
					}
				}
				if (GlobalFunc_5358(201))
				{
					if (iVar5 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						Global_1323632.f_1 = 0;
						Global_1323632.f_3 = 0;
						iVar5 = 1;
						func_127(0, &Global_1326068);
						func_133(&Global_1326068);
						func_132(&Global_1326068);
						func_124(&Global_1326068, &Global_1323632);
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				}
				if (iVar5 == 0)
				{
					if (GlobalFunc_5358(189) || GlobalFunc_5358(190))
					{
						iVar0 = 1;
					}
				}
				if (GlobalFunc_5358(202))
				{
					func_122();
					if (iVar5 == 1)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(337714004);
						HUD::_0x4895BDEA16E7C080(0);
						func_133(&Global_1326068);
						func_132(&Global_1326068);
						func_127(-1, &Global_1326068);
						iVar5 = 0;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar0 = 1;
						HUD::RELEASE_CONTROL_OF_FRONTEND();
					}
				}
				if (HUD::_0xF284AC67940C6812())
				{
					HUD::_GET_PAUSE_MENU_SELECTION(&iVar2, &uVar3);
				}
				if (HUD::_0x2E22FEFA0100275E())
				{
					HUD::_GET_PAUSE_MENU_SELECTION_DATA(&uVar1, &iVar2, &uVar3);
					iVar4 = iVar2 + 1000;
					if (iVar4 >= 0)
					{
						if (iVar4 >= 9)
						{
							iVar4 = 8;
						}
						Global_1323632.f_1 = (iVar4 % 3);
						Global_1323632.f_3 = (iVar4 / 3);
						func_127(iVar4, &Global_1326068);
						func_132(&Global_1326068);
					}
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsCommon", 0);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang0", 0);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang1", 0);
				func_9(&Global_1326068, &Global_1323632);
				if (iVar5 == 1)
				{
					func_1(&Global_1326068, &Global_1323632, &uLocal_114);
				}
			}
			break;
		
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
	HUD::RELEASE_CONTROL_OF_FRONTEND();
	HUD::_LOG_DEBUG_INFO(0);
	Global_1312436 = 0;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2)//Position - 0x309
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!GlobalFunc_439(uParam2) || (GlobalFunc_439(uParam2) && GlobalFunc_5071(uParam2, 250, 0)))
	{
		iVar0 = 1;
	}
	if ((PAD::IS_CONTROL_PRESSED(2, 187) || GlobalFunc_1382(187, &(Global_1327593.f_961), 1)) && iVar0)
	{
		GlobalFunc_434(uParam2);
		GlobalFunc_436(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 0);
	}
	if ((PAD::IS_CONTROL_PRESSED(2, 188) || GlobalFunc_1382(188, &(Global_1327593.f_961), 1)) && iVar0)
	{
		GlobalFunc_434(uParam2);
		GlobalFunc_436(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 1);
	}
	if (((PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 241)) || GlobalFunc_1382(189, &(Global_1327593.f_961), 1)) && iVar0)
	{
		GlobalFunc_434(uParam2);
		GlobalFunc_436(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 2);
	}
	if (((PAD::IS_CONTROL_PRESSED(2, 190) || PAD::IS_CONTROL_PRESSED(2, 242)) || GlobalFunc_1382(190, &(Global_1327593.f_961), 1)) && iVar0)
	{
		MISC::SET_BIT(&(uParam0->f_285), 3);
		GlobalFunc_434(uParam2);
		GlobalFunc_436(uParam2, 0, 0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 1);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		uParam1->f_3 = (uParam1->f_3 - 1);
		if (uParam1->f_3 < 0)
		{
			uParam1->f_3 = 2;
		}
		func_127(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
		func_133(uParam0);
		func_132(uParam0);
		func_124(uParam0, uParam1);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		uParam1->f_3++;
		if (uParam1->f_3 > 2)
		{
			uParam1->f_3 = 0;
		}
		func_127(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
		func_133(uParam0);
		func_132(uParam0);
		func_124(uParam0, uParam1);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 2);
		uParam1->f_1 = (uParam1->f_1 - 1);
		if (uParam1->f_1 < 0)
		{
			if (iLocal_88 > 1)
			{
				func_134(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			if (uParam1->f_5 > 0)
			{
				uParam1->f_5 = (uParam1->f_5 - 1);
				uParam1->f_1 = 2;
			}
			else
			{
				uParam1->f_5 = iLocal_88;
				uParam1->f_1 = 2;
				iVar1 = (uParam1->f_1 + uParam1->f_3 * 3);
				if (iVar1 >= iLocal_89)
				{
					uParam1->f_1 = ((iLocal_89 - 1) % 3);
					uParam1->f_3 = ((iLocal_89 - 1) / 3);
				}
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_127(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
		func_133(uParam0);
		func_132(uParam0);
		func_124(uParam0, uParam1);
	}
	if (MISC::IS_BIT_SET(uParam0->f_285, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 3);
		uParam1->f_1++;
		iVar2 = (uParam1->f_1 + uParam1->f_3 * 3);
		if (uParam1->f_1 > 2 || (uParam1->f_5 == iLocal_88 && iVar2 >= iLocal_89))
		{
			if (iLocal_88 > 1)
			{
				func_134(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			uParam1->f_1 = 0;
			uParam1->f_5++;
			if (uParam1->f_5 > iLocal_88)
			{
				uParam1->f_5 = 0;
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_127(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
		func_133(uParam0);
		func_132(uParam0);
		func_124(uParam0, uParam1);
	}
}

void func_2(var uParam0)//Position - 0x68F
{
	uParam0->f_281 = 0;
}

int func_3(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x69D
{
	int iVar0;
	int iVar1;
	
	iVar0 = (*uParam0 + *uParam1 * 3);
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_88)
			{
				if (iVar0 > (iLocal_89 - 1))
				{
					*uParam1 = 0;
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 187:
			if (iParam2 == iLocal_88)
			{
				if (iVar0 > (iLocal_89 - 1))
				{
					if (*uParam1 > 0)
					{
						*uParam1 = (*uParam1 - 1);
					}
					else
					{
						*uParam1 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 189:
			break;
		
		case 190:
			if (iParam2 == iLocal_88)
			{
				if (*uParam0 == 0)
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > (iLocal_89 - 1))
						{
							*uParam1 = (*uParam1 - 1);
							iVar0 = (*uParam0 + *uParam1 * 3);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_89 - 1))
				{
					if (*uParam0 > 0)
					{
						*uParam0 = (*uParam0 - 1);
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
	}
	return iVar0;
}






void func_9(var uParam0, var uParam1)//Position - 0x9BB
{
	if ((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsCommon") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang0")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang1"))
	{
		if (GlobalFunc_153(8, -1) == 0)
		{
			*uParam1 = GlobalFunc_5();
		}
		func_126();
		switch (uParam1->f_5)
		{
			case 0:
				if (!uParam0->f_1[0])
				{
					func_94(joaat("weapon_pistol"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_combatpistol"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_appistol"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_microsmg"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_smg"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_assaultrifle"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_carbinerifle"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_advancedrifle"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_mg"), uParam0, *uParam1, 0);
				}
				break;
			
			case 1:
				if (!uParam0->f_1[0])
				{
					func_94(joaat("weapon_combatmg"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_assaultsmg"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_pumpshotgun"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_assaultshotgun"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_sniperrifle"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_heavysniper"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_grenadelauncher"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_minigun"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_rpg"), uParam0, *uParam1, 0);
				}
				break;
			
			case 2:
				if (!uParam0->f_1[0])
				{
					func_94(joaat("weapon_knife"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_nightstick"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_bat"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_crowbar"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_golfclub"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_molotov"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_grenade"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_smokegrenade"), uParam0, *uParam1, 0);
					func_94(joaat("weapon_stickybomb"), uParam0, *uParam1, 0);
				}
				break;
			
			default:
				if (!uParam0->f_1[0])
				{
					func_91(uParam0, uParam1);
				}
				break;
		}
		func_10(uParam0, GlobalFunc_4611(uParam0));
	}
}

void func_10(var uParam0, int iParam1)//Position - 0xBFA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_2(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			iVar5 = 0;
			if (uParam0->f_1[iVar0] == 1)
			{
				if (uParam0->f_85[iVar0] != 0)
				{
					bVar2 = func_86(uParam0->f_85[iVar0], uParam0->f_276, 0);
				}
				bVar3 = func_83(uParam0->f_85[iVar0], uParam0->f_276, 0);
				iVar1 = 0;
				while (iVar1 <= 8)
				{
					iVar4 = GlobalFunc_4980(uParam0->f_85[iVar0], iVar1);
					if (!bVar3)
					{
						func_66(iVar4, uParam0->f_85[iVar0], 0, 0, 0);
						func_64(iVar4, uParam0->f_85[iVar0], 0);
						func_58(iVar4, uParam0->f_85[iVar0], 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(GlobalFunc_4978(iVar4, uParam0->f_85[iVar0]), "WCT_CLIP1"))
					{
						func_66(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_64(iVar4, uParam0->f_85[iVar0], 1);
							func_58(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if (MISC::ARE_STRINGS_EQUAL(GlobalFunc_4978(iVar4, uParam0->f_85[iVar0]), "WCT_SCOPE_LRG"))
					{
						func_66(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_64(iVar4, uParam0->f_85[iVar0], 1);
							func_58(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if ((uParam0->f_85[iVar0] == joaat("weapon_bullpupshotgun") || uParam0->f_85[iVar0] == joaat("weapon_pistol50")) || uParam0->f_85[iVar0] == joaat("weapon_snspistol"))
					{
						func_66(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						func_64(iVar4, uParam0->f_85[iVar0], 1);
						func_58(iVar4, uParam0->f_85[iVar0], 1);
					}
					if (bVar3 && func_54(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (bVar2 && func_49(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
						{
							iVar5 = (iVar5 + func_47(iVar4, uParam0->f_85[iVar0], 8));
						}
					}
					else if (iVar4 != 0)
					{
						iVar5 = (iVar5 + func_47(iVar4, uParam0->f_85[iVar0], 4));
					}
					iVar1++;
				}
			}
			iVar6 = 0;
			if (uParam0->f_85[iVar0] != 0)
			{
				if (bVar3)
				{
					if (((func_86(uParam0->f_85[iVar0], uParam0->f_276, 0) || (uParam0->f_85[iVar0] == joaat("weapon_pistol") && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0))) || func_45(uParam0->f_85[iVar0])) || func_29(uParam0->f_85[iVar0], uParam0->f_276))
					{
						iVar6++;
					}
					else
					{
						iVar6 += 2;
					}
				}
				else
				{
					iVar6 += 4;
				}
			}
			if (uParam0->f_1[iVar0] == 0 || MISC::ARE_STRINGS_EQUAL(GlobalFunc_5379(uParam0->f_85[iVar0], 0), GlobalFunc_5379(0, 0)))
			{
				iVar6 = 0;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_85[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar0++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*uParam0 = 1;
	}
	func_23(uParam0, func_25(uParam0));
	func_14(uParam0, func_22(uParam0));
	func_11(uParam0, func_13(uParam0));
}

void func_11(var uParam0, int iParam1)//Position - 0xF66
{
	if (iParam1 == 1)
	{
		uParam0->f_279 = 0;
		func_12(uParam0);
	}
	if (uParam0->f_279 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_277);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_279 = 1;
	}
}

void func_12(var uParam0)//Position - 0xFB8
{
	uParam0->f_283 = 0;
}

int func_13(var uParam0)//Position - 0xFC6
{
	return uParam0->f_283;
}

void func_14(var uParam0, int iParam1)//Position - 0xFD3
{
	struct<2> Var0;
	int iVar4;
	
	StringCopy(&Var0, " ", 16);
	if (iParam1 == 1)
	{
		uParam0->f_280 = 0;
		func_21(uParam0);
	}
	if (uParam0->f_280 == 0)
	{
		if (uParam0->f_277 > -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
			iVar4 = (uParam0->f_215[uParam0->f_277] - uParam0->f_165[uParam0->f_277]);
			if (iVar4 < 0)
			{
				iVar4 = 0;
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GlobalFunc_726(&(uParam0->f_11[uParam0->f_277 /*4*/]));
			GlobalFunc_726(&(uParam0->f_48[uParam0->f_277 /*4*/]));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_95[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_105[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_135[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_115[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_145[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_155[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_165[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_185[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_195[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_205[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_225[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_125[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_175[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_235[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(GlobalFunc_8137(uParam0->f_85[uParam0->f_277]));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (func_15(uParam0->f_85[uParam0->f_277]))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726("PM_ACCURACY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726("PM_RANGE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726("PM_CLIPSIZE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726("PM_KD_RATIO");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726("PM_HEADSHOTS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726("PM_MY_ACCURACY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		uParam0->f_280 = 1;
	}
}

int func_15(int iParam0)//Position - 0x129F
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_bat"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_grenade"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_molotov"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_proxmine"):
		case joaat("weapon_knuckle"):
			return 1;
			break;
	}
	return 0;
}






void func_21(var uParam0)//Position - 0x17C8
{
	uParam0->f_284 = 0;
}

int func_22(var uParam0)//Position - 0x17D6
{
	return uParam0->f_284;
}

void func_23(var uParam0, int iParam1)//Position - 0x17E3
{
	if (iParam1 == 1)
	{
		uParam0->f_278 = 0;
		func_24(uParam0);
	}
	if (uParam0->f_278 == 0)
	{
		if (uParam0->f_275 != 9999)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_275);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_275 = 9999;
			uParam0->f_278 = 1;
		}
	}
}

void func_24(var uParam0)//Position - 0x1835
{
	uParam0->f_282 = 0;
}

int func_25(var uParam0)//Position - 0x1843
{
	return uParam0->f_282;
}




bool func_29(int iParam0, int iParam1)//Position - 0x20F2
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (GlobalFunc_6714() == 0)
	{
		return 0;
	}
	if (GlobalFunc_1434())
	{
		return 0;
	}
	iVar0 = GlobalFunc_3267(iParam0);
	if (iVar0 != 223 && GlobalFunc_6707(iVar0, -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	uVar1 = func_33(iParam0, iParam1);
	iVar2 = GlobalFunc_4977(iParam0);
	return MISC::IS_BIT_SET(uVar1, GlobalFunc_299(iVar2));
}




int func_33(int iParam0, int iParam1)//Position - 0x2507
{
	int iVar0;
	
	iVar0 = GlobalFunc_6671(GlobalFunc_7284(iParam0), iParam1, 0);
	return iVar0;
}












int func_45(int iParam0)//Position - 0x297B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
			bVar0 = true;
			iVar3 = 481;
			break;
		
		case joaat("weapon_golfclub"):
			bVar0 = true;
			iVar3 = 235;
			break;
		
		case joaat("weapon_bat"):
			bVar0 = true;
			iVar3 = 228;
			break;
		
		case joaat("weapon_crowbar"):
			bVar0 = true;
			iVar3 = 200;
			break;
	}
	if (bVar0)
	{
		iVar1 = GlobalFunc_1343(PLAYER::PLAYER_ID());
		iVar2 = GlobalFunc_8137(iParam0);
		if (iVar1 >= iVar2)
		{
			if (GlobalFunc_6671(iVar3, -1, 0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}


int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x2A0F
{
	int iVar0;
	
	iVar0 = func_48(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 32768;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 524288;
					break;
				
				case 1:
					return 262144;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
		
		case 128:
			switch (iParam2)
			{
				case 4:
					return 4194304;
					break;
				
				case 1:
					return 2097152;
					break;
				
				case 8:
					return 8388608;
					break;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)//Position - 0x2C0F
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 16;
				
				case joaat("component_pistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 16;
				
				case joaat("component_pistol50_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 16;
				
				case joaat("component_combatpistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 16;
				
				case joaat("component_appistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 16;
				
				case joaat("component_microsmg_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_scope_macro"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 16;
				
				case joaat("component_assaultsmg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_at_scope_macro"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 16;
				
				case joaat("component_smg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				case joaat("component_at_scope_macro_02"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 16;
				
				case joaat("component_assaultrifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_macro"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 16;
				
				case joaat("component_carbinerifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_medium"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 16;
				
				case joaat("component_specialcarbine_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_medium"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 16;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 16;
				
				case joaat("component_heavypistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 16;
				
				case joaat("component_snspistol_clip_02"):
					return 32;
				
				default:
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 16;
				
				case joaat("component_advancedrifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 16;
				
				case joaat("component_mg_clip_02"):
					return 32;
				
				case joaat("component_at_scope_small_02"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 16;
				
				case joaat("component_combatmg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_scope_medium"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 1;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 16;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_at_scope_max"):
					return 4;
				
				case joaat("component_at_scope_large"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_at_scope_max"):
					return 4;
				
				case joaat("component_at_scope_large"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 16;
				
				case joaat("component_vintagepistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 16;
				
				case joaat("component_gusenberg_clip_02"):
					return 32;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 16;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 16;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 32;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 64;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 16;
				
				case joaat("component_combatpdw_clip_02"):
					return 32;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
					break;
			}
			break;
	}
	return 0;
}

bool func_49(int iParam0, int iParam1, int iParam2)//Position - 0x32BA
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = func_52(iParam0, iParam1, iParam2);
	iVar1 = GlobalFunc_5846(iParam0, iParam1);
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}



var func_52(int iParam0, int iParam1, int iParam2)//Position - 0x3D22
{
	var uVar0;
	
	uVar0 = GlobalFunc_6671(GlobalFunc_7439(iParam0, iParam1), iParam2, 0);
	return uVar0;
}


bool func_54(int iParam0, int iParam1, int iParam2)//Position - 0x3DEB
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = func_55(iParam0, iParam1, iParam2);
	iVar1 = GlobalFunc_5846(iParam0, iParam1);
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}

var func_55(int iParam0, int iParam1, int iParam2)//Position - 0x3E20
{
	var uVar0;
	
	uVar0 = GlobalFunc_6671(GlobalFunc_7465(iParam0, iParam1), iParam2, 0);
	return uVar0;
}



void func_58(int iParam0, int iParam1, bool bParam2)//Position - 0x4503
{
	if (bParam2)
	{
		if (!func_63(iParam0, iParam1, -1))
		{
			func_59(iParam0, iParam1, 1);
		}
	}
	else if (func_63(iParam0, iParam1, -1))
	{
		func_59(iParam0, iParam1, 0);
	}
}

void func_59(int iParam0, int iParam1, bool bParam2)//Position - 0x453E
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_62(iParam0, iParam1, -1);
	iVar1 = GlobalFunc_5846(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&uVar0, GlobalFunc_299(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&uVar0, GlobalFunc_299(iVar1));
		}
		GlobalFunc_6670(GlobalFunc_7438(iParam0, iParam1), uVar0, -1, 1);
	}
}



var func_62(int iParam0, int iParam1, int iParam2)//Position - 0x466D
{
	var uVar0;
	
	uVar0 = GlobalFunc_6671(GlobalFunc_7438(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

bool func_63(int iParam0, int iParam1, int iParam2)//Position - 0x4688
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = func_62(iParam0, iParam1, iParam2);
	iVar1 = GlobalFunc_5846(iParam0, iParam1);
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}

void func_64(int iParam0, int iParam1, bool bParam2)//Position - 0x46BD
{
	if (bParam2)
	{
		if (!func_49(iParam0, iParam1, -1))
		{
			func_65(iParam0, iParam1, 1);
		}
	}
	else if (func_49(iParam0, iParam1, -1))
	{
		func_65(iParam0, iParam1, 0);
	}
}

void func_65(int iParam0, int iParam1, bool bParam2)//Position - 0x46F8
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_52(iParam0, iParam1, -1);
	iVar1 = GlobalFunc_5846(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&uVar0, GlobalFunc_299(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&uVar0, GlobalFunc_299(iVar1));
		}
		GlobalFunc_6670(GlobalFunc_7439(iParam0, iParam1), uVar0, -1, 1);
	}
}

void func_66(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x474E
{
	if (bParam2)
	{
		if (!func_54(iParam0, iParam1, -1))
		{
			func_81(iParam0, iParam1, 1);
		}
		if (bParam3)
		{
			if (GlobalFunc_8861(iParam0, iParam1) == 0)
			{
				GlobalFunc_5377(16, GlobalFunc_4978(iParam0, 0), GlobalFunc_6365(iParam0, 0), GlobalFunc_4180(iParam1), GlobalFunc_4179(iParam1), -1, 0, 0, 0, -1);
				GlobalFunc_8216(iParam0, iParam1, 1);
			}
		}
		if (bParam4)
		{
			func_67(iParam0, iParam1, 1);
		}
	}
	else if (func_54(iParam0, iParam1, -1))
	{
		func_81(iParam0, iParam1, 0);
	}
}

void func_67(int iParam0, int iParam1, bool bParam2)//Position - 0x47D6
{
	if (bParam2)
	{
		if (!func_71(iParam0, iParam1, -1))
		{
			func_68(iParam0, iParam1, 1);
		}
	}
	else if (func_71(iParam0, iParam1, -1))
	{
		func_68(iParam0, iParam1, 0);
	}
}

void func_68(int iParam0, int iParam1, bool bParam2)//Position - 0x4811
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_70(iParam0, iParam1, -1);
	iVar1 = GlobalFunc_5846(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&uVar0, GlobalFunc_299(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&uVar0, GlobalFunc_299(iVar1));
		}
		GlobalFunc_6670(GlobalFunc_7463(iParam0, iParam1), uVar0, -1, 1);
	}
}


var func_70(int iParam0, int iParam1, int iParam2)//Position - 0x4915
{
	var uVar0;
	
	uVar0 = GlobalFunc_6671(GlobalFunc_7463(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

bool func_71(int iParam0, int iParam1, int iParam2)//Position - 0x4930
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = func_70(iParam0, iParam1, iParam2);
	iVar1 = GlobalFunc_5846(iParam0, iParam1);
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}










void func_81(int iParam0, int iParam1, bool bParam2)//Position - 0x539F
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_55(iParam0, iParam1, -1);
	iVar1 = GlobalFunc_5846(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&uVar0, GlobalFunc_299(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&uVar0, GlobalFunc_299(iVar1));
		}
		GlobalFunc_6670(GlobalFunc_7465(iParam0, iParam1), uVar0, -1, 1);
	}
}


bool func_83(int iParam0, int iParam1, int iParam2)//Position - 0x5C11
{
	var uVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = func_84(iParam0, iParam1);
	iVar1 = GlobalFunc_4977(iParam0);
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}

var func_84(int iParam0, int iParam1)//Position - 0x5C48
{
	var uVar0;
	
	uVar0 = GlobalFunc_6671(GlobalFunc_6912(iParam0), iParam1, 0);
	return uVar0;
}


bool func_86(int iParam0, int iParam1, int iParam2)//Position - 0x5CE0
{
	var uVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (GlobalFunc_1434())
	{
		return 0;
	}
	if (GlobalFunc_6714() == 0)
	{
		return 0;
	}
	if (iParam0 != joaat("gadget_parachute"))
	{
		if (GlobalFunc_6707(GlobalFunc_3264(iParam0), -1))
		{
			return 0;
		}
	}
	uVar0 = func_87(iParam0, iParam1);
	iVar1 = GlobalFunc_4977(iParam0);
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}

var func_87(int iParam0, int iParam1)//Position - 0x5D3F
{
	var uVar0;
	
	uVar0 = GlobalFunc_6671(GlobalFunc_7283(iParam0), iParam1, 0);
	return uVar0;
}




void func_91(var uParam0, var uParam1)//Position - 0x60C9
{
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hammer")) && iLocal_90[10] == uParam1->f_5)
	{
		func_94(joaat("weapon_hammer"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_pistol50")) && iLocal_90[0] == uParam1->f_5)
	{
		func_94(joaat("weapon_pistol50"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bullpupshotgun")) && iLocal_90[1] == uParam1->f_5)
	{
		func_94(joaat("weapon_bullpupshotgun"), uParam0, *uParam1, 0);
	}
	if (GlobalFunc_524(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("weapon_sawnoffshotgun")) && iLocal_90[2] == uParam1->f_5)
		{
			func_94(joaat("weapon_sawnoffshotgun"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bottle")) && iLocal_90[3] == uParam1->f_5)
	{
		func_94(joaat("weapon_bottle"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_snspistol")) && iLocal_90[4] == uParam1->f_5)
	{
		func_94(joaat("weapon_snspistol"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_gusenberg")) && iLocal_90[11] == uParam1->f_5)
	{
		func_94(joaat("weapon_gusenberg"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_heavypistol")) && iLocal_90[7] == uParam1->f_5)
	{
		func_94(joaat("weapon_heavypistol"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_specialcarbine")) && iLocal_90[5] == uParam1->f_5)
	{
		func_94(joaat("weapon_specialcarbine"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bullpuprifle")) && iLocal_90[6] == uParam1->f_5)
	{
		func_94(joaat("weapon_bullpuprifle"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_dagger")) && iLocal_90[8] == uParam1->f_5)
	{
		func_94(joaat("weapon_dagger"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_vintagepistol")) && iLocal_90[9] == uParam1->f_5)
	{
		func_94(joaat("weapon_vintagepistol"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_firework")) && iLocal_90[14] == uParam1->f_5)
	{
		func_94(joaat("weapon_firework"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_musket")) && iLocal_90[13] == uParam1->f_5)
	{
		func_94(joaat("weapon_musket"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_heavyshotgun")) && iLocal_90[15] == uParam1->f_5)
	{
		func_94(joaat("weapon_heavyshotgun"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_marksmanrifle")) && iLocal_90[16] == uParam1->f_5)
	{
		func_94(joaat("weapon_marksmanrifle"), uParam0, *uParam1, 0);
	}
	if (GlobalFunc_84())
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hatchet")) && iLocal_90[22] == uParam1->f_5)
		{
			func_94(joaat("weapon_hatchet"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_proxmine")) && iLocal_90[17] == uParam1->f_5)
	{
		func_94(joaat("weapon_proxmine"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hominglauncher")) && iLocal_90[18] == uParam1->f_5)
	{
		func_94(joaat("weapon_hominglauncher"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_combatpdw")) && iLocal_90[19] == uParam1->f_5)
	{
		func_94(joaat("weapon_combatpdw"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_marksmanpistol")) && iLocal_90[20] == uParam1->f_5)
	{
		func_94(joaat("weapon_marksmanpistol"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_flaregun")) && iLocal_90[12] == uParam1->f_5)
	{
		func_94(joaat("weapon_flaregun"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_knuckle")) && iLocal_90[21] == uParam1->f_5)
	{
		func_94(joaat("weapon_knuckle"), uParam0, *uParam1, 0);
	}
}



void func_94(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x65A5
{
	struct<2> Var0;
	char cVar4[16];
	float fVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	var uVar12;
	struct<5> Var13;
	struct<5> Var18;
	struct<5> Var23;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	
	iParam3 = iParam3;
	StringCopy(&Var0, GlobalFunc_5379(iParam0, 0), 16);
	StringCopy(&cVar4, func_119(iParam0), 16);
	fVar8 = func_118(iParam0);
	uVar9 = func_117(iParam0, iParam2);
	uVar10 = func_116(iParam0, iParam2);
	iVar11 = func_115(iParam0, iParam2);
	uVar12 = func_114(iParam0, iParam2);
	WEAPON::GET_WEAPON_HUD_STATS(iParam0, &Var13);
	Var13.f_2 = WEAPON::GET_WEAPON_CLIP_SIZE(iParam0);
	bVar31 = false;
	iVar30 = 0;
	while (iVar30 <= 8)
	{
		if (uParam1->f_1[iVar30] == 0 && WEAPON::IS_WEAPON_VALID(iParam0))
		{
			if (func_86(iParam0, iParam2, 0))
			{
				bVar31 = true;
				if (bVar31)
				{
				}
			}
			iVar29 = 0;
			while (iVar29 <= 8)
			{
				iVar28 = GlobalFunc_4980(iParam0, iVar29);
				if (iVar28 != 0)
				{
					if (func_54(iVar28, iParam0, uParam1->f_276) && bVar31)
					{
						if (WEAPON::GET_WEAPON_COMPONENT_HUD_STATS(iVar28, &Var18))
						{
							Var23 = (Var23 + Var18);
							Var23.f_1 = (Var23.f_1 + Var18.f_1);
							Var23.f_2 = (Var23.f_2 + Var18.f_2);
							Var23.f_3 = (Var23.f_3 + Var18.f_3);
							Var23.f_4 = (Var23.f_4 + Var18.f_4);
						}
					}
					if (func_63(iVar28, iParam0, uParam1->f_276))
					{
					}
					if (func_49(iVar28, iParam0, uParam1->f_276))
					{
					}
				}
				iVar29++;
			}
			Var23.f_2 = func_113(iParam0);
			func_112(iVar30, &Var0, &cVar4, uParam1);
			func_111(iVar30, Var13, uParam1);
			func_110(iVar30, Var23, uParam1);
			if (func_15(iParam0))
			{
				func_109(iVar30, -1, uParam1);
				func_108(iVar30, Var23.f_3, uParam1);
				func_107(iVar30, -1, uParam1);
				func_106(iVar30, Var23.f_4, uParam1);
				func_105(iVar30, -1, uParam1);
				func_104(iVar30, Var23.f_2, uParam1);
			}
			else
			{
				func_109(iVar30, Var13.f_3, uParam1);
				func_108(iVar30, Var23.f_3, uParam1);
				func_107(iVar30, Var13.f_4, uParam1);
				func_106(iVar30, Var23.f_4, uParam1);
				func_105(iVar30, Var13.f_2, uParam1);
				func_104(iVar30, Var23.f_2, uParam1);
			}
			func_103(iVar30, uVar10, uParam1);
			func_102(iVar30, uVar9, uParam1);
			if (func_15(iParam0))
			{
				func_101(iVar30, -1f, uParam1);
				func_100(iVar30, -1, uParam1);
			}
			else
			{
				func_101(iVar30, fVar8, uParam1);
				func_100(iVar30, iVar11, uParam1);
			}
			func_99(iVar30, uVar12, uParam1);
			func_98(iVar30, Var13.f_1, uParam1);
			func_97(iVar30, Var23.f_1, uParam1);
			func_96(iVar30, iParam0, uParam1);
			func_95(iParam2, uParam1);
			uParam1->f_1[iVar30] = 1;
			iVar30 = 9;
		}
		iVar30++;
	}
}

void func_95(int iParam0, var uParam1)//Position - 0x683B
{
	uParam1->f_276 = iParam0;
}

void func_96(int iParam0, int iParam1, var uParam2)//Position - 0x684A
{
	uParam2->f_85[iParam0] = iParam1;
}

void func_97(int iParam0, var uParam1, var uParam2)//Position - 0x685C
{
	uParam2->f_205[iParam0] = uParam1;
}

void func_98(int iParam0, var uParam1, var uParam2)//Position - 0x686E
{
	uParam2->f_155[iParam0] = uParam1;
}

void func_99(int iParam0, var uParam1, var uParam2)//Position - 0x6880
{
	uParam2->f_135[iParam0] = uParam1;
}

void func_100(int iParam0, int iParam1, var uParam2)//Position - 0x6892
{
	uParam2->f_125[iParam0] = iParam1;
}

void func_101(int iParam0, float fParam1, var uParam2)//Position - 0x68A4
{
	uParam2->f_115[iParam0] = fParam1;
}

void func_102(int iParam0, var uParam1, var uParam2)//Position - 0x68B6
{
	uParam2->f_95[iParam0] = uParam1;
}

void func_103(int iParam0, var uParam1, var uParam2)//Position - 0x68C8
{
	uParam2->f_105[iParam0] = uParam1;
}

void func_104(int iParam0, var uParam1, var uParam2)//Position - 0x68DA
{
	uParam2->f_215[iParam0] = uParam1;
}

void func_105(int iParam0, int iParam1, var uParam2)//Position - 0x68EC
{
	uParam2->f_165[iParam0] = iParam1;
}

void func_106(int iParam0, var uParam1, var uParam2)//Position - 0x68FE
{
	uParam2->f_235[iParam0] = uParam1;
}

void func_107(int iParam0, int iParam1, var uParam2)//Position - 0x6910
{
	uParam2->f_175[iParam0] = iParam1;
}

void func_108(int iParam0, var uParam1, var uParam2)//Position - 0x6922
{
	uParam2->f_225[iParam0] = uParam1;
}

void func_109(int iParam0, int iParam1, var uParam2)//Position - 0x6934
{
	uParam2->f_185[iParam0] = iParam1;
}

void func_110(int iParam0, var uParam1, var uParam2)//Position - 0x6946
{
	uParam2->f_195[iParam0] = uParam1;
}

void func_111(int iParam0, var uParam1, var uParam2)//Position - 0x6958
{
	uParam2->f_145[iParam0] = uParam1;
}

void func_112(int iParam0, char* sParam1, char* sParam2, var uParam3)//Position - 0x696A
{
	StringCopy(&(uParam3->f_11[iParam0 /*4*/]), sParam1, 16);
	StringCopy(&(uParam3->f_48[iParam0 /*4*/]), sParam2, 16);
}

int func_113(int iParam0)//Position - 0x698A
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 16;
		
		case joaat("weapon_combatpistol"):
			return 16;
		
		case joaat("weapon_appistol"):
			return 36;
		
		case joaat("weapon_microsmg"):
			return 30;
		
		case joaat("weapon_smg"):
			return 60;
		
		case joaat("weapon_assaultrifle"):
			return 60;
		
		case joaat("weapon_carbinerifle"):
			return 60;
		
		case joaat("weapon_advancedrifle"):
			return 60;
		
		case joaat("weapon_mg"):
			return 100;
		
		case joaat("weapon_combatmg"):
			return 200;
		
		case joaat("weapon_assaultshotgun"):
			return 32;
		
		case joaat("weapon_pistol50"):
			return 12;
		
		case joaat("weapon_assaultsmg"):
			return 60;
		
		case joaat("weapon_snspistol"):
			return 12;
		
		case joaat("weapon_specialcarbine"):
			return 60;
		
		case joaat("weapon_bullpuprifle"):
			return 60;
		
		case joaat("weapon_heavypistol"):
			return 36;
		
		case joaat("weapon_vintagepistol"):
			return 14;
		
		case joaat("weapon_gusenberg"):
			return 50;
		
		case joaat("weapon_marksmanrifle"):
			return 16;
		
		case joaat("weapon_heavyshotgun"):
			return 12;
		
		case joaat("weapon_combatpdw"):
			return 60;
		
		default:
	}
	return 0;
	return 0;
}

float func_114(int iParam0, int iParam1)//Position - 0x6A90
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(238, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(239, iParam1, 0)));
		
		case joaat("weapon_combatpistol"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(248, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(249, iParam1, 0)));
		
		case joaat("weapon_appistol"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(268, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(269, iParam1, 0)));
		
		case joaat("weapon_microsmg"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(278, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(279, iParam1, 0)));
		
		case joaat("weapon_smg"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(288, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(289, iParam1, 0)));
		
		case joaat("weapon_assaultrifle"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(308, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(309, iParam1, 0)));
		
		case joaat("weapon_carbinerifle"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(317, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(318, iParam1, 0)));
		
		case joaat("weapon_advancedrifle"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(326, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(327, iParam1, 0)));
		
		case joaat("weapon_mg"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(335, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(336, iParam1, 0)));
		
		case joaat("weapon_combatmg"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(344, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(345, iParam1, 0)));
		
		case joaat("weapon_pumpshotgun"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(362, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(363, iParam1, 0)));
		
		case joaat("weapon_sawnoffshotgun"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(371, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(372, iParam1, 0)));
		
		case joaat("weapon_assaultshotgun"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(390, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(391, iParam1, 0)));
		
		case joaat("weapon_sniperrifle"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(409, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(410, iParam1, 0)));
		
		case joaat("weapon_heavysniper"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(418, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(419, iParam1, 0)));
		
		case joaat("weapon_grenadelauncher"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(429, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(430, iParam1, 0)));
		
		case joaat("weapon_rpg"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(436, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(437, iParam1, 0)));
		
		case joaat("weapon_minigun"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(443, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(444, iParam1, 0)));
		
		case joaat("weapon_grenade"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(452, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(453, iParam1, 0)));
		
		case joaat("weapon_smokegrenade"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(460, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(461, iParam1, 0)));
		
		case joaat("weapon_stickybomb"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(469, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(470, iParam1, 0)));
		
		case joaat("weapon_molotov"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(477, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(478, iParam1, 0)));
		
		case joaat("weapon_stungun"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(399, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(400, iParam1, 0)));
		
		case joaat("weapon_knife"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(181, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(183, iParam1, 0)));
		
		case joaat("weapon_nightstick"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(189, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(191, iParam1, 0)));
		
		case joaat("weapon_hammer"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(217, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(219, iParam1, 0)));
		
		case joaat("weapon_bat"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(224, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(226, iParam1, 0)));
		
		case joaat("weapon_crowbar"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(196, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(198, iParam1, 0)));
		
		case joaat("weapon_golfclub"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(231, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(233, iParam1, 0)));
		
		case joaat("weapon_pistol50"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(258, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(259, iParam1, 0)));
		
		case joaat("weapon_assaultsmg"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(298, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(299, iParam1, 0)));
		
		case joaat("weapon_bullpupshotgun"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(381, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(382, iParam1, 0)));
		
		case -572349828:
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(353, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(354, iParam1, 0)));
		
		case 392730790:
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(308, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(309, iParam1, 0)));
		
		case -947031628:
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(418, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(419, iParam1, 0)));
		
		case -1887867191:
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(308, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(309, iParam1, 0)));
		
		case joaat("weapon_bottle"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(1715, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(1716, iParam1, 0)));
		
		case joaat("weapon_snspistol"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(1725, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(1726, iParam1, 0)));
		
		case joaat("weapon_specialcarbine"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(2448, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(2449, iParam1, 0)));
		
		case joaat("weapon_bullpuprifle"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(2458, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(2459, iParam1, 0)));
		
		case joaat("weapon_heavypistol"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(2438, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(2439, iParam1, 0)));
		
		case joaat("weapon_dagger"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(2741, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(2742, iParam1, 0)));
		
		case joaat("weapon_vintagepistol"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(2751, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(2752, iParam1, 0)));
		
		case joaat("weapon_gusenberg"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(2468, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(2469, iParam1, 0)));
		
		case joaat("weapon_musket"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(2771, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(2772, iParam1, 0)));
		
		case joaat("weapon_firework"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(2761, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(2762, iParam1, 0)));
		
		case joaat("weapon_heavyshotgun"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(2849, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(2850, iParam1, 0)));
		
		case joaat("weapon_marksmanrifle"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(2859, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(2860, iParam1, 0)));
		
		case joaat("weapon_hominglauncher"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(2885, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(2886, iParam1, 0)));
		
		case joaat("weapon_proxmine"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(2877, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(2878, iParam1, 0)));
		
		case joaat("weapon_combatpdw"):
			return (SYSTEM::TO_FLOAT(GlobalFunc_6671(2893, iParam1, 0)) / SYSTEM::TO_FLOAT(GlobalFunc_6671(2894, iParam1, 0)));
		
		default:
	}
	return 0f;
}

int func_115(int iParam0, int iParam1)//Position - 0x7222
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return GlobalFunc_6671(242, iParam1, 0);
		
		case joaat("weapon_combatpistol"):
			return GlobalFunc_6671(252, iParam1, 0);
		
		case joaat("weapon_appistol"):
			return GlobalFunc_6671(272, iParam1, 0);
		
		case joaat("weapon_microsmg"):
			return GlobalFunc_6671(282, iParam1, 0);
		
		case joaat("weapon_smg"):
			return GlobalFunc_6671(292, iParam1, 0);
		
		case joaat("weapon_assaultrifle"):
			return GlobalFunc_6671(312, iParam1, 0);
		
		case joaat("weapon_carbinerifle"):
			return GlobalFunc_6671(321, iParam1, 0);
		
		case joaat("weapon_advancedrifle"):
			return GlobalFunc_6671(330, iParam1, 0);
		
		case joaat("weapon_mg"):
			return GlobalFunc_6671(339, iParam1, 0);
		
		case joaat("weapon_combatmg"):
			return GlobalFunc_6671(348, iParam1, 0);
		
		case joaat("weapon_pumpshotgun"):
			return GlobalFunc_6671(366, iParam1, 0);
		
		case joaat("weapon_sawnoffshotgun"):
			return GlobalFunc_6671(375, iParam1, 0);
		
		case joaat("weapon_assaultshotgun"):
			return GlobalFunc_6671(394, iParam1, 0);
		
		case joaat("weapon_sniperrifle"):
			return GlobalFunc_6671(413, iParam1, 0);
		
		case joaat("weapon_heavysniper"):
			return GlobalFunc_6671(422, iParam1, 0);
		
		case joaat("weapon_minigun"):
			return GlobalFunc_6671(447, iParam1, 0);
		
		case joaat("weapon_pistol50"):
			return GlobalFunc_6671(262, iParam1, 0);
		
		case joaat("weapon_assaultsmg"):
			return GlobalFunc_6671(302, iParam1, 0);
		
		case -947031628:
			return GlobalFunc_6671(422, iParam1, 0);
		
		case joaat("weapon_bullpupshotgun"):
			return GlobalFunc_6671(385, iParam1, 0);
		
		case -572349828:
			return GlobalFunc_6671(357, iParam1, 0);
		
		case 392730790:
			return GlobalFunc_6671(312, iParam1, 0);
		
		case -1887867191:
			return GlobalFunc_6671(312, iParam1, 0);
		
		case -837150131:
			return GlobalFunc_6671(312, iParam1, 0);
		
		case joaat("weapon_snspistol"):
			return GlobalFunc_6671(1729, iParam1, 0);
		
		case joaat("weapon_specialcarbine"):
			return GlobalFunc_6671(2452, iParam1, 0);
		
		case joaat("weapon_bullpuprifle"):
			return GlobalFunc_6671(2462, iParam1, 0);
		
		case joaat("weapon_heavypistol"):
			return GlobalFunc_6671(2442, iParam1, 0);
		
		case joaat("weapon_vintagepistol"):
			return GlobalFunc_6671(2755, iParam1, 0);
		
		case joaat("weapon_gusenberg"):
			return GlobalFunc_6671(2472, iParam1, 0);
		
		case joaat("weapon_musket"):
			return GlobalFunc_6671(2775, iParam1, 0);
		
		case joaat("weapon_firework"):
			return GlobalFunc_6671(2765, iParam1, 0);
		
		case joaat("weapon_heavyshotgun"):
			return GlobalFunc_6671(2853, iParam1, 0);
		
		case joaat("weapon_marksmanrifle"):
			return GlobalFunc_6671(2863, iParam1, 0);
		
		case joaat("weapon_combatpdw"):
			return GlobalFunc_6671(2897, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_116(int iParam0, int iParam1)//Position - 0x74C9
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return GlobalFunc_6671(239, iParam1, 0);
		
		case joaat("weapon_combatpistol"):
			return GlobalFunc_6671(249, iParam1, 0);
		
		case joaat("weapon_appistol"):
			return GlobalFunc_6671(269, iParam1, 0);
		
		case joaat("weapon_microsmg"):
			return GlobalFunc_6671(279, iParam1, 0);
		
		case joaat("weapon_smg"):
			return GlobalFunc_6671(289, iParam1, 0);
		
		case joaat("weapon_assaultrifle"):
			return GlobalFunc_6671(309, iParam1, 0);
		
		case joaat("weapon_carbinerifle"):
			return GlobalFunc_6671(318, iParam1, 0);
		
		case joaat("weapon_advancedrifle"):
			return GlobalFunc_6671(327, iParam1, 0);
		
		case joaat("weapon_mg"):
			return GlobalFunc_6671(336, iParam1, 0);
		
		case joaat("weapon_combatmg"):
			return GlobalFunc_6671(345, iParam1, 0);
		
		case joaat("weapon_pumpshotgun"):
			return GlobalFunc_6671(363, iParam1, 0);
		
		case joaat("weapon_sawnoffshotgun"):
			return GlobalFunc_6671(372, iParam1, 0);
		
		case joaat("weapon_assaultshotgun"):
			return GlobalFunc_6671(391, iParam1, 0);
		
		case joaat("weapon_sniperrifle"):
			return GlobalFunc_6671(410, iParam1, 0);
		
		case joaat("weapon_heavysniper"):
			return GlobalFunc_6671(419, iParam1, 0);
		
		case joaat("weapon_grenadelauncher"):
			return GlobalFunc_6671(430, iParam1, 0);
		
		case joaat("weapon_rpg"):
			return GlobalFunc_6671(437, iParam1, 0);
		
		case joaat("weapon_minigun"):
			return GlobalFunc_6671(444, iParam1, 0);
		
		case joaat("weapon_grenade"):
			return GlobalFunc_6671(453, iParam1, 0);
		
		case joaat("weapon_smokegrenade"):
			return GlobalFunc_6671(461, iParam1, 0);
		
		case joaat("weapon_stickybomb"):
			return GlobalFunc_6671(470, iParam1, 0);
		
		case joaat("weapon_molotov"):
			return GlobalFunc_6671(478, iParam1, 0);
		
		case joaat("weapon_stungun"):
			return GlobalFunc_6671(400, iParam1, 0);
		
		case joaat("weapon_knife"):
			return GlobalFunc_6671(183, iParam1, 0);
		
		case joaat("weapon_nightstick"):
			return GlobalFunc_6671(191, iParam1, 0);
		
		case joaat("weapon_hammer"):
			return GlobalFunc_6671(219, iParam1, 0);
		
		case joaat("weapon_bat"):
			return GlobalFunc_6671(226, iParam1, 0);
		
		case joaat("weapon_crowbar"):
			return GlobalFunc_6671(198, iParam1, 0);
		
		case joaat("weapon_golfclub"):
			return GlobalFunc_6671(233, iParam1, 0);
		
		case joaat("weapon_pistol50"):
			return GlobalFunc_6671(259, iParam1, 0);
		
		case joaat("weapon_assaultsmg"):
			return GlobalFunc_6671(299, iParam1, 0);
		
		case -947031628:
			return GlobalFunc_6671(419, iParam1, 0);
		
		case joaat("weapon_bullpupshotgun"):
			return GlobalFunc_6671(382, iParam1, 0);
		
		case -572349828:
			return GlobalFunc_6671(354, iParam1, 0);
		
		case 392730790:
			return GlobalFunc_6671(309, iParam1, 0);
		
		case -1887867191:
			return GlobalFunc_6671(309, iParam1, 0);
		
		case -837150131:
			return GlobalFunc_6671(309, iParam1, 0);
		
		case joaat("weapon_bottle"):
			return GlobalFunc_6671(1716, iParam1, 0);
		
		case joaat("weapon_snspistol"):
			return GlobalFunc_6671(1726, iParam1, 0);
		
		case joaat("weapon_specialcarbine"):
			return GlobalFunc_6671(2449, iParam1, 0);
		
		case joaat("weapon_bullpuprifle"):
			return GlobalFunc_6671(2459, iParam1, 0);
		
		case joaat("weapon_heavypistol"):
			return GlobalFunc_6671(2439, iParam1, 0);
		
		case joaat("weapon_dagger"):
			return GlobalFunc_6671(2742, iParam1, 0);
		
		case joaat("weapon_vintagepistol"):
			return GlobalFunc_6671(2752, iParam1, 0);
		
		case joaat("weapon_gusenberg"):
			return GlobalFunc_6671(2469, iParam1, 0);
		
		case joaat("weapon_musket"):
			return GlobalFunc_6671(2772, iParam1, 0);
		
		case joaat("weapon_firework"):
			return GlobalFunc_6671(2762, iParam1, 0);
		
		case joaat("weapon_heavyshotgun"):
			return GlobalFunc_6671(2850, iParam1, 0);
		
		case joaat("weapon_marksmanrifle"):
			return GlobalFunc_6671(2860, iParam1, 0);
		
		case joaat("weapon_proxmine"):
			return GlobalFunc_6671(2878, iParam1, 0);
		
		case joaat("weapon_hominglauncher"):
			return GlobalFunc_6671(2886, iParam1, 0);
		
		case joaat("weapon_combatpdw"):
			return GlobalFunc_6671(2894, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_117(int iParam0, int iParam1)//Position - 0x78AD
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return GlobalFunc_6671(238, iParam1, 0);
		
		case joaat("weapon_combatpistol"):
			return GlobalFunc_6671(248, iParam1, 0);
		
		case joaat("weapon_appistol"):
			return GlobalFunc_6671(268, iParam1, 0);
		
		case joaat("weapon_microsmg"):
			return GlobalFunc_6671(278, iParam1, 0);
		
		case joaat("weapon_smg"):
			return GlobalFunc_6671(288, iParam1, 0);
		
		case joaat("weapon_assaultrifle"):
			return GlobalFunc_6671(308, iParam1, 0);
		
		case joaat("weapon_carbinerifle"):
			return GlobalFunc_6671(317, iParam1, 0);
		
		case joaat("weapon_advancedrifle"):
			return GlobalFunc_6671(326, iParam1, 0);
		
		case joaat("weapon_mg"):
			return GlobalFunc_6671(335, iParam1, 0);
		
		case joaat("weapon_combatmg"):
			return GlobalFunc_6671(344, iParam1, 0);
		
		case joaat("weapon_pumpshotgun"):
			return GlobalFunc_6671(362, iParam1, 0);
		
		case joaat("weapon_sawnoffshotgun"):
			return GlobalFunc_6671(371, iParam1, 0);
		
		case joaat("weapon_assaultshotgun"):
			return GlobalFunc_6671(390, iParam1, 0);
		
		case joaat("weapon_sniperrifle"):
			return GlobalFunc_6671(409, iParam1, 0);
		
		case joaat("weapon_heavysniper"):
			return GlobalFunc_6671(418, iParam1, 0);
		
		case joaat("weapon_grenadelauncher"):
			return GlobalFunc_6671(429, iParam1, 0);
		
		case joaat("weapon_rpg"):
			return GlobalFunc_6671(436, iParam1, 0);
		
		case joaat("weapon_minigun"):
			return GlobalFunc_6671(443, iParam1, 0);
		
		case joaat("weapon_grenade"):
			return GlobalFunc_6671(452, iParam1, 0);
		
		case joaat("weapon_smokegrenade"):
			return GlobalFunc_6671(460, iParam1, 0);
		
		case joaat("weapon_stickybomb"):
			return GlobalFunc_6671(469, iParam1, 0);
		
		case joaat("weapon_molotov"):
			return GlobalFunc_6671(477, iParam1, 0);
		
		case joaat("weapon_stungun"):
			return GlobalFunc_6671(399, iParam1, 0);
		
		case joaat("weapon_knife"):
			return GlobalFunc_6671(181, iParam1, 0);
		
		case joaat("weapon_nightstick"):
			return GlobalFunc_6671(189, iParam1, 0);
		
		case joaat("weapon_hammer"):
			return GlobalFunc_6671(217, iParam1, 0);
		
		case joaat("weapon_bat"):
			return GlobalFunc_6671(224, iParam1, 0);
		
		case joaat("weapon_crowbar"):
			return GlobalFunc_6671(196, iParam1, 0);
		
		case joaat("weapon_golfclub"):
			return GlobalFunc_6671(231, iParam1, 0);
		
		case joaat("weapon_pistol50"):
			return GlobalFunc_6671(258, iParam1, 0);
		
		case joaat("weapon_assaultsmg"):
			return GlobalFunc_6671(298, iParam1, 0);
		
		case -947031628:
			return GlobalFunc_6671(418, iParam1, 0);
		
		case joaat("weapon_bullpupshotgun"):
			return GlobalFunc_6671(381, iParam1, 0);
		
		case -572349828:
			return GlobalFunc_6671(353, iParam1, 0);
		
		case 392730790:
			return GlobalFunc_6671(308, iParam1, 0);
		
		case -1887867191:
			return GlobalFunc_6671(308, iParam1, 0);
		
		case -837150131:
			return GlobalFunc_6671(308, iParam1, 0);
		
		case joaat("weapon_bottle"):
			return GlobalFunc_6671(1715, iParam1, 0);
		
		case joaat("weapon_snspistol"):
			return GlobalFunc_6671(1725, iParam1, 0);
		
		case joaat("weapon_specialcarbine"):
			return GlobalFunc_6671(2448, iParam1, 0);
		
		case joaat("weapon_bullpuprifle"):
			return GlobalFunc_6671(2458, iParam1, 0);
		
		case joaat("weapon_heavypistol"):
			return GlobalFunc_6671(2438, iParam1, 0);
		
		case joaat("weapon_dagger"):
			return GlobalFunc_6671(2741, iParam1, 0);
		
		case joaat("weapon_vintagepistol"):
			return GlobalFunc_6671(2751, iParam1, 0);
		
		case joaat("weapon_gusenberg"):
			return GlobalFunc_6671(2468, iParam1, 0);
		
		case joaat("weapon_musket"):
			return GlobalFunc_6671(2771, iParam1, 0);
		
		case joaat("weapon_firework"):
			return GlobalFunc_6671(2761, iParam1, 0);
		
		case joaat("weapon_heavyshotgun"):
			return GlobalFunc_6671(2849, iParam1, 0);
		
		case joaat("weapon_marksmanrifle"):
			return GlobalFunc_6671(2859, iParam1, 0);
		
		case joaat("weapon_proxmine"):
			return GlobalFunc_6671(2877, iParam1, 0);
		
		case joaat("weapon_hominglauncher"):
			return GlobalFunc_6671(2885, iParam1, 0);
		
		case joaat("weapon_combatpdw"):
			return GlobalFunc_6671(2893, iParam1, 0);
		
		default:
	}
	return 0;
}

float func_118(int iParam0)//Position - 0x7C91
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	
	if (iParam0 == joaat("weapon_pistol"))
	{
		iVar0 = 240;
		iVar1 = 241;
	}
	else if (iParam0 == joaat("weapon_combatpistol"))
	{
		iVar0 = 250;
		iVar1 = 251;
	}
	else if (iParam0 == joaat("weapon_appistol"))
	{
		iVar0 = 270;
		iVar1 = 271;
	}
	else if (iParam0 == joaat("weapon_microsmg"))
	{
		iVar0 = 280;
		iVar1 = 281;
	}
	else if (iParam0 == joaat("weapon_smg"))
	{
		iVar0 = 290;
		iVar1 = 291;
	}
	else if (iParam0 == joaat("weapon_assaultrifle"))
	{
		iVar0 = 310;
		iVar1 = 311;
	}
	else if (iParam0 == joaat("weapon_carbinerifle"))
	{
		iVar0 = 319;
		iVar1 = 320;
	}
	else if (iParam0 == joaat("weapon_specialcarbine"))
	{
		iVar0 = 2450;
		iVar1 = 2451;
	}
	else if (iParam0 == joaat("weapon_snspistol"))
	{
		iVar0 = 1727;
		iVar1 = 1728;
	}
	else if (iParam0 == joaat("weapon_advancedrifle"))
	{
		iVar0 = 328;
		iVar1 = 329;
	}
	else if (iParam0 == joaat("weapon_mg"))
	{
		iVar0 = 337;
		iVar1 = 338;
	}
	else if (iParam0 == joaat("weapon_combatmg"))
	{
		iVar0 = 346;
		iVar1 = 347;
	}
	else if (iParam0 == joaat("weapon_sawnoffshotgun"))
	{
		iVar0 = 373;
		iVar1 = 374;
	}
	else if (iParam0 == joaat("weapon_pumpshotgun"))
	{
		iVar0 = 364;
		iVar1 = 365;
	}
	else if (iParam0 == joaat("weapon_assaultshotgun"))
	{
		iVar0 = 392;
		iVar1 = 393;
	}
	else if (iParam0 == joaat("weapon_sniperrifle"))
	{
		iVar0 = 411;
		iVar1 = 412;
	}
	else if (iParam0 == joaat("weapon_heavysniper"))
	{
		iVar0 = 420;
		iVar1 = 421;
	}
	else if (iParam0 == joaat("weapon_grenadelauncher"))
	{
		iVar0 = 431;
		iVar1 = 429;
	}
	else if (iParam0 == joaat("weapon_minigun"))
	{
		iVar0 = 445;
		iVar1 = 446;
	}
	else if (iParam0 == joaat("weapon_rpg"))
	{
		iVar0 = 438;
		iVar1 = 436;
	}
	else if (iParam0 == joaat("weapon_bullpupshotgun"))
	{
		iVar0 = 383;
		iVar1 = 384;
	}
	else if (iParam0 == joaat("weapon_assaultsmg"))
	{
		iVar0 = 300;
		iVar1 = 301;
	}
	else if (iParam0 == joaat("weapon_pistol50"))
	{
		iVar0 = 260;
		iVar1 = 261;
	}
	else if (iParam0 == joaat("weapon_heavypistol"))
	{
		iVar0 = 2440;
		iVar1 = 2441;
	}
	else if (iParam0 == joaat("weapon_bullpuprifle"))
	{
		iVar0 = 2460;
		iVar1 = 2461;
	}
	else if (iParam0 == joaat("weapon_gusenberg"))
	{
		iVar0 = 2470;
		iVar1 = 2471;
	}
	else if (iParam0 == joaat("weapon_vintagepistol"))
	{
		iVar0 = 2753;
		iVar1 = 2754;
	}
	else if (iParam0 == joaat("weapon_musket"))
	{
		iVar0 = 2773;
		iVar1 = 2774;
	}
	else if (iParam0 == joaat("weapon_firework"))
	{
		iVar0 = 2763;
		iVar1 = 2764;
	}
	else if (iParam0 == joaat("weapon_heavyshotgun"))
	{
		iVar0 = 2851;
		iVar1 = 2852;
	}
	else if (iParam0 == joaat("weapon_marksmanrifle"))
	{
		iVar0 = 2861;
		iVar1 = 2862;
	}
	else if (iParam0 == joaat("weapon_hominglauncher"))
	{
		iVar0 = 2887;
		iVar1 = 2885;
	}
	else if (iParam0 == joaat("weapon_proxmine"))
	{
		iVar0 = 2879;
		iVar1 = 2877;
	}
	else if (iParam0 == joaat("weapon_combatpdw"))
	{
		iVar0 = 2895;
		iVar1 = 2893;
	}
	else
	{
		return 0f;
	}
	fVar2 = SYSTEM::TO_FLOAT(GlobalFunc_6671(iVar0, -1, 0));
	fVar3 = SYSTEM::TO_FLOAT(GlobalFunc_6671(iVar1, -1, 0));
	if (fVar2 > 0f)
	{
		fVar4 = (fVar3 / fVar2);
		if (fVar4 > 1f)
		{
			fVar4 = 1f;
		}
		fVar4 = (fVar4 * 100f);
		uVar5 = SYSTEM::ROUND(fVar4);
		fVar4 = SYSTEM::TO_FLOAT(uVar5);
		return fVar4;
	}
	return 0f;
}

char* func_119(int iParam0)//Position - 0x7FFB
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case joaat("weapon_unarmed"):
			return "";
			break;
		
		case joaat("weapon_pistol"):
			return "WT_PIST_DESC";
			break;
		
		case joaat("weapon_combatpistol"):
			return "WTD_PIST_CBT";
			break;
		
		case joaat("weapon_appistol"):
			return "WTD_PIST_AP";
			break;
		
		case joaat("weapon_smg"):
			return "WTD_SMG";
			break;
		
		case joaat("weapon_microsmg"):
			return "WTD_SMG_MCR";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "WTD_RIFLE_ASL";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "WTD_RIFLE_CBN";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "WTD_RIFLE_ADV";
			break;
		
		case joaat("weapon_mg"):
			return "WTD_MG";
			break;
		
		case joaat("weapon_combatmg"):
			return "WTD_MG_CBT";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "WTD_SG_PMP";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "WTD_SG_SOF";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "WTD_SG_ASL";
			break;
		
		case joaat("weapon_heavysniper"):
			return "WTD_SNIP_HVY";
			break;
		
		case joaat("weapon_remotesniper"):
			return "WTD_SNIP_RMT";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "WTD_SNIP_RIF";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "WTD_GL";
			break;
		
		case joaat("weapon_rpg"):
			return "WTD_RPG";
			break;
		
		case joaat("weapon_minigun"):
			return "WTD_MINIGUN";
			break;
		
		case joaat("weapon_grenade"):
			return "WTD_GNADE";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "WTD_GNADE_SMK";
			break;
		
		case joaat("weapon_stickybomb"):
			return "WTD_GNADE_STK";
			break;
		
		case joaat("weapon_molotov"):
			return "WTD_MOLOTOV";
			break;
		
		case joaat("weapon_stungun"):
			return "WTD_STUN";
			break;
		
		case joaat("weapon_petrolcan"):
			return "WTD_PETROL";
			break;
		
		case joaat("weapon_digiscanner"):
			return "WTD_DIGI";
			break;
		
		case joaat("weapon_electric_fence"):
			return "WTD_ELCFEN";
			break;
		
		case joaat("vehicle_weapon_tank"):
			return "";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "";
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			return "";
			break;
		
		case joaat("object"):
			return "";
			break;
		
		case joaat("gadget_parachute"):
			return "WTD_PARA";
			break;
		
		case joaat("AMMO_RPG"):
			return "";
			break;
		
		case joaat("AMMO_TANK"):
			return "";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "";
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			return "";
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			return "";
			break;
		
		case joaat("weapon_knife"):
			return "WTD_KNIFE";
			break;
		
		case joaat("weapon_nightstick"):
			return "WTD_NGTSTK";
			break;
		
		case joaat("weapon_hammer"):
			return "WTD_HAMMER";
			break;
		
		case joaat("weapon_bat"):
			return "WTD_BAT";
			break;
		
		case joaat("weapon_crowbar"):
			return "WTD_CROWBAR";
			break;
		
		case joaat("weapon_golfclub"):
			return "WTD_GOLFCLUB";
			break;
		
		case joaat("weapon_rammed_by_car"):
			return "";
			break;
		
		case joaat("weapon_run_over_by_car"):
			return "";
			break;
		
		case joaat("weapon_assaultsmg"):
			return "WTD_SMG_ASL";
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return "WTD_SG_BLP";
			break;
		
		case joaat("weapon_pistol50"):
			return "WTD_PIST_50";
			break;
		
		case joaat("weapon_vintagepistol"):
			return "WTD_VPISTOL";
			break;
		
		case joaat("weapon_dagger"):
			return "WTD_DAGGER";
			break;
		
		case joaat("weapon_proxmine"):
			return "WTD_PRXMINE";
			break;
		
		case joaat("weapon_hominglauncher"):
			return "WTD_HOMLNCH";
			break;
		
		default:
			if (GlobalFunc_221(iParam0, &Var0) != -1)
			{
				return GlobalFunc_217(&(Var0.f_15));
			}
			break;
	}
	return "WT_INVALID";
}



void func_122()//Position - 0x83D4
{
	func_123(0, -1, -1, 0, 0);
}

void func_123(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x83E5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GlobalFunc_726("");
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_124(var uParam0, var uParam1)//Position - 0x8442
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	func_126();
	iVar0 = 9;
	iVar1 = uParam0->f_277;
	if (uParam1->f_5 < iLocal_88)
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	else
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	iVar2 = uParam1->f_5 + 1;
	uVar3 = iLocal_88 + 1;
	func_123(0, iVar2, uVar3, "HUD_PAGE", 0);
}


void func_126()//Position - 0x8533
{
	iLocal_89 = 0;
	iLocal_88 = 3;
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hammer")))
	{
		iLocal_90[10] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[10] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_pistol50")))
	{
		iLocal_90[0] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[0] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bullpupshotgun")))
	{
		iLocal_90[1] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[1] = -1;
	}
	if (GlobalFunc_524(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("weapon_sawnoffshotgun")))
		{
			iLocal_90[2] = ((iLocal_89 / 9) + iLocal_88);
			iLocal_89++;
		}
		else
		{
			iLocal_90[2] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bottle")))
	{
		iLocal_90[3] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[3] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_snspistol")))
	{
		iLocal_90[4] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[4] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_gusenberg")))
	{
		iLocal_90[11] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[11] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_heavypistol")))
	{
		iLocal_90[7] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[7] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_specialcarbine")))
	{
		iLocal_90[5] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[5] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_bullpuprifle")))
	{
		iLocal_90[6] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[6] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_dagger")))
	{
		iLocal_90[8] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[8] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_vintagepistol")))
	{
		iLocal_90[9] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[9] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_firework")))
	{
		iLocal_90[14] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[14] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_musket")))
	{
		iLocal_90[13] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[13] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_heavyshotgun")))
	{
		iLocal_90[15] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[15] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_marksmanrifle")))
	{
		iLocal_90[16] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[16] = -1;
	}
	if (GlobalFunc_84())
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hatchet")))
		{
			iLocal_90[22] = ((iLocal_89 / 9) + iLocal_88);
			iLocal_89++;
		}
		else
		{
			iLocal_90[22] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_hominglauncher")))
	{
		iLocal_90[18] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[18] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_proxmine")))
	{
		iLocal_90[17] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[17] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_flaregun")))
	{
		iLocal_90[12] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[12] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_combatpdw")))
	{
		iLocal_90[19] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[19] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_marksmanpistol")))
	{
		iLocal_90[20] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[20] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("weapon_knuckle")))
	{
		iLocal_90[21] = ((iLocal_89 / 9) + iLocal_88);
		iLocal_89++;
	}
	else
	{
		iLocal_90[21] = -1;
	}
	if (iLocal_89 == 0)
	{
		iLocal_88 = 2;
		iLocal_89 = 9;
	}
	else
	{
		iLocal_88 = (iLocal_88 + (iLocal_89 / 9));
		iLocal_89 = (iLocal_89 - (9 * (iLocal_89 / 9)));
	}
}

void func_127(int iParam0, var uParam1)//Position - 0x892E
{
	uParam1->f_277 = iParam0;
}

void func_128()//Position - 0x893D
{
	func_126();
	func_129();
	func_123(0, 1, iLocal_88 + 1, "HUD_PAGE", 0);
}

void func_129()//Position - 0x895C
{
	func_130(1);
}

void func_130(bool bParam0)//Position - 0x8969
{
	if (bParam0)
	{
		func_131(0, 3, 0, 2, 0, 0);
	}
	else
	{
		func_131(0, 2, 0, 2, 1, 0);
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x898D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_132(var uParam0)//Position - 0x89D0
{
	uParam0->f_284 = 1;
}

void func_133(var uParam0)//Position - 0x89DE
{
	uParam0->f_283 = 1;
}

void func_134(var uParam0)//Position - 0x89EC
{
	func_135(uParam0);
	uParam0->f_281 = 1;
}

void func_135(var uParam0)//Position - 0x8A00
{
	*uParam0 = { Global_1325782 };
}


