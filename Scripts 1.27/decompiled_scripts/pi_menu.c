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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	float fLocal_46 = 0f;
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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	struct<56> Local_91 = { 10, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_147 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	struct<7> Local_168[10];
	var uLocal_239 = 0;
	struct<2> Local_240[26];
	struct<2> Local_293[76];
	struct<2> Local_446[40];
	float fLocal_527 = 0f;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	char* sLocal_530 = NULL;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	bool bLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	float fLocal_544 = 0f;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	var uLocal_548 = 0;
	bool bLocal_549 = 0;
	var uLocal_550 = 0;
	float fLocal_551 = 0f;
	float fLocal_552 = 0f;
	struct<3> Local_553 = { 0, 0, 0 } ;
	struct<3> Local_556 = { 0, 0, 0 } ;
	float fLocal_559 = 0f;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	float fLocal_565 = 0f;
	float fLocal_566 = 0f;
	float fLocal_567 = 0f;
	var uLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	bool bLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	bool bLocal_587 = 0;
	int iLocal_588 = 0;
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
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = ((0.05f + 0.275f) - 0.01f);
	fLocal_527 = Global_17235;
	iLocal_539 = 1;
	iLocal_543 = 1;
	Local_553 = { 0f, 0.7f, 0f };
	fLocal_559 = 0.0006f;
	fLocal_565 = 0.754f;
	fLocal_566 = 8f;
	fLocal_567 = 0.253f;
	iLocal_575 = 2;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_436();
		iLocal_90 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_561 = 0;
	iLocal_560 = 0;
	iLocal_578 = GlobalFunc_8329();
	StringCopy(&Global_2545339, func_434(), 32);
	while (true)
	{
		if (func_433())
		{
			iLocal_90 = 2;
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (iLocal_90 != 0)
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
				}
			}
		}
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (MISC::IS_BIT_SET(uLocal_89, 0))
			{
				if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 244))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
				}
				else
				{
					MISC::CLEAR_BIT(&uLocal_89, 0);
				}
			}
			iLocal_536 = MISC::GET_GAME_TIMER();
			PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_436();
			iLocal_90 = 0;
		}
		else
		{
			func_428();
		}
		if (func_427())
		{
			iLocal_542 = 1;
		}
		switch (iLocal_90)
		{
			case 0:
				if (!Global_96301)
				{
					Global_96305 = 0;
				}
				if (iLocal_542)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
					iLocal_533 = MISC::GET_GAME_TIMER();
					iLocal_586 = 1;
					sLocal_530 = func_426();
					func_425();
					if (func_425())
					{
						func_421();
						iLocal_542 = 0;
						HUD::CLEAR_HELP(1);
						GlobalFunc_1395();
						iLocal_90 = 1;
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_536) < 500)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
					if (PAD::_IS_USING_KEYBOARD(2))
					{
						if (!HUD::IS_PAUSE_MENU_ACTIVE())
						{
							PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
						}
					}
					iLocal_532 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 1:
				Global_96305 = 1;
				func_324();
				func_35();
				func_23();
				GlobalFunc_2032(1);
				if (iLocal_542 || func_2())
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					iLocal_542 = 0;
					iLocal_90 = 2;
				}
				PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				GlobalFunc_2874(1);
				Global_17236.f_7172 = 1;
				break;
			
			case 2:
				if (MISC::IS_BIT_SET(uLocal_89, 0))
				{
					if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 244))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
					}
					else
					{
						MISC::CLEAR_BIT(&uLocal_89, 0);
					}
				}
				iLocal_536 = MISC::GET_GAME_TIMER();
				PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
				GlobalFunc_2032(0);
				func_436();
				iLocal_543 = 1;
				iLocal_90 = 0;
				break;
		}
		SYSTEM::WAIT(0);
	}
}


int func_2()//Position - 0x31C
{
	if (!MISC::IS_BIT_SET(uLocal_89, 0))
	{
		if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177) || iLocal_581) || bLocal_584)
		{
			if (bLocal_584)
			{
				iLocal_532 = MISC::GET_GAME_TIMER();
				return 1;
			}
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if ((iLocal_538 == 1 || iLocal_538 == 2) || iLocal_538 == 3)
			{
				func_21();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				Local_91.f_55 = iLocal_537;
				iLocal_538 = 0;
				iLocal_539 = 1;
				iLocal_533 = MISC::GET_GAME_TIMER();
				return 0;
			}
			else if (iLocal_538 == 0 && (MISC::GET_GAME_TIMER() - iLocal_533) >= 350)
			{
				iLocal_532 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	if (func_4())
	{
		if (iLocal_545)
		{
			iLocal_545 = 0;
		}
		return 1;
	}
	if (iLocal_538 == 1 && PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
	{
		func_21();
		AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
		Local_91.f_55 = iLocal_537;
		iLocal_538 = 0;
		iLocal_539 = 1;
		iLocal_533 = MISC::GET_GAME_TIMER();
	}
	if (iLocal_538 == 2 && !GlobalFunc_756())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
		Local_91.f_55 = iLocal_537;
		iLocal_538 = 0;
		iLocal_539 = 1;
		iLocal_533 = MISC::GET_GAME_TIMER();
	}
	return 0;
}


int func_4()//Position - 0x46D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = GlobalFunc_8329();
	if (!iLocal_545)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				return 1;
			}
			if (HUD::GET_PAUSE_MENU_STATE() != 0)
			{
				return 1;
			}
			if (GlobalFunc_489())
			{
				return 1;
			}
			if (GlobalFunc_116(0))
			{
				return 1;
			}
			if (HUD::IS_HUD_HIDDEN())
			{
				return 1;
			}
			if (GlobalFunc_39(9))
			{
				return 1;
			}
			if (GlobalFunc_39(10))
			{
				return 1;
			}
			if (GlobalFunc_39(6) || GlobalFunc_39(7))
			{
				return 1;
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !MISC::IS_BIT_SET(uLocal_89, 2))
			{
				return 1;
			}
			if ((!CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::_IS_IN_VEHICLE_CAM_DISABLED()) && !MISC::IS_BIT_SET(uLocal_89, 2))
			{
				return 1;
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_39(15))
			{
				return 1;
			}
			if (Global_35731 != -1)
			{
				return 1;
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				return 1;
			}
			if (TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
			if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				return 1;
			}
			if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
			if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
			if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 0)
			{
				return 1;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("prologue1")) > 0)
			{
				return 1;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("armenian1")) > 0)
			{
				return 1;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
			{
				return 1;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("hao1")) > 0)
			{
				return 1;
			}
			if ((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fanatic1")) > 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fanatic2")) > 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fanatic3")) > 0)
			{
				return 1;
			}
			if (GlobalFunc_6509(iVar0) == 5 && GlobalFunc_39(15))
			{
				return 1;
			}
			if (Global_51932)
			{
				return 1;
			}
			if (GlobalFunc_331())
			{
				return 1;
			}
			if (GlobalFunc_9143(4))
			{
				return 1;
			}
			if (Global_87287)
			{
				return 1;
			}
			iLocal_577 = GlobalFunc_8329();
			if (iLocal_577 != iLocal_576)
			{
				iLocal_576 = iLocal_577;
				iLocal_561 = 0;
				return 1;
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return 1;
			}
			if (GlobalFunc_39(13) || GlobalFunc_39(14))
			{
				return 1;
			}
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar1, &iVar2);
			if (iVar1 != iLocal_528 || iVar2 != iLocal_529)
			{
				iLocal_528 = iVar1;
				iLocal_529 = iVar2;
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

















void func_21()//Position - 0xE17
{
	if (MISC::IS_BIT_SET(uLocal_89, 2))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		CAM::SET_CAM_ACTIVE(uLocal_550, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_550, 0);
		MISC::CLEAR_BIT(&uLocal_89, 2);
		iLocal_546 = 0;
		fLocal_551 = 0f;
		fLocal_552 = 0f;
	}
}


void func_23()//Position - 0xE80
{
	if (iLocal_546 == 0)
	{
		func_34();
	}
	switch (iLocal_546)
	{
		case 0:
			if (MISC::IS_BIT_SET(uLocal_89, 2))
			{
				if (func_29())
				{
					iLocal_546 = 1;
				}
				else if (iLocal_547 == 2)
				{
					MISC::CLEAR_BIT(&uLocal_89, 2);
				}
			}
			break;
		
		case 1:
			if (!CAM::DOES_CAM_EXIST(uLocal_550))
			{
				if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 2560);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				uLocal_550 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0f, 0f, 0f, 50f, 0, 2);
				CAM::ATTACH_CAM_TO_PED_BONE(uLocal_550, PLAYER::PLAYER_PED_ID(), 31086, Local_553, 1);
				CAM::POINT_CAM_AT_PED_BONE(uLocal_550, PLAYER::PLAYER_PED_ID(), 31086, Local_556, 1);
				CAM::SET_CAM_FOV(uLocal_550, 50f);
				CAM::SET_CAM_ACTIVE(uLocal_550, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			iLocal_546 = 2;
			break;
		
		case 2:
			func_27();
			if (func_24())
			{
				iLocal_546 = 3;
			}
			break;
		
		case 3:
			func_21();
			break;
	}
}

int func_24()//Position - 0xFB1
{
	if (!func_25())
	{
		return 1;
	}
	if (!func_29())
	{
		return 1;
	}
	return 0;
}

int func_25()//Position - 0xFD2
{
	if (iLocal_538 == 1 && func_26())
	{
		return 1;
	}
	return 0;
}

int func_26()//Position - 0xFF0
{
	var uVar0;
	
	if (((((((((((((((((((((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("family2")) != 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("franklin0")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("franklin2")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("carsteal3")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fbi1")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fbi2")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fbi4")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fbi5a")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("agency_heist2")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("agency_heist3a")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("agency_heist3b")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("docks_setup")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("docks_heista")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("docks_heistb")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_heist2a")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_heist2b")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) != 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("rural_bank_heist")) != 0)
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uVar0)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_27()//Position - 0x11B4
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	iVar5 = 8;
	GlobalFunc_255(&uVar0, &uVar1, &iVar2, &iVar3, bLocal_587, 0);
	if (PAD::IS_LOOK_INVERTED())
	{
		iVar3 = (iVar3 * -1);
	}
	if (iVar2 < -iVar5 || iVar2 > iVar5)
	{
		bVar4 = true;
		fLocal_551 = (fLocal_551 + (SYSTEM::TO_FLOAT(iVar2) * fLocal_559));
	}
	if (iVar3 < -iVar5 || iVar3 > iVar5)
	{
		bVar4 = true;
		fLocal_552 = (fLocal_552 + (SYSTEM::TO_FLOAT(iVar3) * fLocal_559));
	}
	fVar6 = -0.4f;
	fVar7 = 0.4f;
	fVar8 = -0.2f;
	fVar9 = 0.3f;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		fVar6 = -0.1f;
		fVar7 = 0.1f;
		fVar8 = -0.05f;
		fVar9 = 0.075f;
	}
	if (fLocal_551 < fVar6)
	{
		fLocal_551 = fVar6;
	}
	else if (fLocal_551 > fVar7)
	{
		fLocal_551 = fVar7;
	}
	if (fLocal_552 < fVar8)
	{
		fLocal_552 = fVar8;
	}
	else if (fLocal_552 > fVar9)
	{
		fLocal_552 = fVar9;
	}
	if (bVar4)
	{
		CAM::ATTACH_CAM_TO_PED_BONE(uLocal_550, PLAYER::PLAYER_PED_ID(), 31086, fLocal_551, 0.7f, fLocal_552, 1);
		CAM::POINT_CAM_AT_PED_BONE(uLocal_550, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
}


int func_29()//Position - 0x13EC
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			return 0;
		}
		else
		{
			if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 3f)
			{
				return 0;
			}
			if (!func_33())
			{
				return 0;
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("chop")) > 0)
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (GlobalFunc_1672())
		{
			return 0;
		}
		if (GlobalFunc_5567())
		{
			return 0;
		}
		if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 1))
		{
			return 0;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}




int func_33()//Position - 0x1512
{
	if (iLocal_547 == 2 && !bLocal_549)
	{
		return 1;
	}
	return 0;
}

void func_34()//Position - 0x1530
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	var uVar7;
	var uVar10;
	int iVar11;
	
	if (iLocal_547 == 2)
	{
		iLocal_547 = 0;
	}
	switch (iLocal_547)
	{
		case 0:
			if (func_25())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 31086)) };
					uLocal_548 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_556), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_553), 0.5f, 511, PLAYER::PLAYER_PED_ID(), 4);
					bLocal_549 = false;
					iLocal_547 = 1;
				}
			}
			break;
		
		case 1:
			iVar11 = SHAPETEST::GET_SHAPE_TEST_RESULT(uLocal_548, &iVar3, &uVar4, &uVar7, &uVar10);
			if (iVar11 == 2)
			{
				if (iVar3 == 0)
				{
					bLocal_549 = false;
				}
				else
				{
					bLocal_549 = true;
				}
				iLocal_547 = 2;
			}
			else if (iVar11 == 0)
			{
				iLocal_547 = 0;
			}
			break;
	}
}

void func_35()//Position - 0x1606
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 237);
		PAD::SET_INPUT_EXCLUSIVE(2, 238);
		PAD::SET_INPUT_EXCLUSIVE(2, 241);
		PAD::SET_INPUT_EXCLUSIVE(2, 242);
		PAD::SET_INPUT_EXCLUSIVE(2, 239);
		PAD::SET_INPUT_EXCLUSIVE(2, 240);
		PAD::ENABLE_CONTROL_ACTION(2, 176, 1);
	}
	else
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 176);
		PAD::SET_INPUT_EXCLUSIVE(2, 177);
	}
	PAD::SET_INPUT_EXCLUSIVE(2, 172);
	PAD::SET_INPUT_EXCLUSIVE(2, 173);
	PAD::SET_INPUT_EXCLUSIVE(2, 174);
	PAD::SET_INPUT_EXCLUSIVE(2, 175);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 157, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 158, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 159, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 160, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 161, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 162, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 163, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 164, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 165, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 53, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 45, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 55, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 85, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 137, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 167, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 166, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 168, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 169, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 19, 1);
	func_317();
	func_314();
	func_36();
}

void func_36()//Position - 0x1791
{
	if (iLocal_545)
	{
		MISC::SET_GAME_PAUSED(1);
		PAD::SET_INPUT_EXCLUSIVE(2, 201);
		PAD::SET_INPUT_EXCLUSIVE(2, 202);
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
		{
			Global_96301 = 1;
			iLocal_90 = 2;
			CAM::DO_SCREEN_FADE_OUT(250);
			iLocal_545 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			MISC::SET_GAME_PAUSED(0);
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
		{
			iLocal_545 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			MISC::SET_GAME_PAUSED(0);
		}
	}
	else if (bLocal_541)
	{
		if (func_313() || iLocal_580 == 1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
			if (iLocal_538 == 0)
			{
				switch (Local_91.f_55)
				{
					case 0:
						func_297();
						iLocal_90 = 2;
						break;
					
					case 1:
						iLocal_537 = Local_91.f_55;
						Local_91.f_55 = 0;
						iLocal_538 = 1;
						iLocal_539 = 1;
						break;
					
					case 2:
						iLocal_537 = Local_91.f_55;
						Local_91.f_55 = 0;
						iLocal_538 = 2;
						iLocal_539 = 1;
						break;
					
					case 3:
						iLocal_537 = Local_91.f_55;
						Local_91.f_55 = 0;
						iLocal_538 = 3;
						iLocal_539 = 1;
						break;
					
					case 4:
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						iLocal_545 = 1;
						break;
				}
			}
			else if (iLocal_538 == 1)
			{
				Local_168[iLocal_538 /*7*/][Local_91.f_55]++;
				if (Local_168[iLocal_538 /*7*/][Local_91.f_55] > func_295(Local_91.f_55))
				{
					Local_168[iLocal_538 /*7*/][Local_91.f_55] = 0;
				}
				iLocal_539 = 1;
				func_37();
			}
		}
	}
}

void func_37()//Position - 0x1918
{
	if (iLocal_538 == 1)
	{
		if (Local_91.f_55 == 2)
		{
			if (iLocal_569 > 1)
			{
				if (GlobalFunc_8329() == 1)
				{
					if (Local_240[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/].f_1 != 9)
					{
						Local_168[1 /*7*/][0] = 0;
						Local_168[1 /*7*/][1] = 0;
					}
				}
				else
				{
					Local_168[1 /*7*/][0] = 0;
					Local_168[1 /*7*/][1] = 0;
				}
				if (Local_168[1 /*7*/][2] != 0)
				{
					if (GlobalFunc_8329() == 0)
					{
						func_281(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						func_281(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
						if (GlobalFunc_10958(PLAYER::PLAYER_PED_ID(), 8, 9))
						{
							func_281(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_281(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					func_281(PLAYER::PLAYER_PED_ID(), 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				func_223(1);
				if (GlobalFunc_8329() == 1)
				{
					if (Local_240[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/].f_1 != 9)
					{
						func_281(PLAYER::PLAYER_PED_ID(), Local_446[Local_168[1 /*7*/][0] /*2*/], Local_446[Local_168[1 /*7*/][0] /*2*/].f_1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
						func_281(PLAYER::PLAYER_PED_ID(), Local_293[Local_168[1 /*7*/][1] /*2*/], Local_293[Local_168[1 /*7*/][1] /*2*/].f_1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				else
				{
					func_281(PLAYER::PLAYER_PED_ID(), Local_446[Local_168[1 /*7*/][0] /*2*/], Local_446[Local_168[1 /*7*/][0] /*2*/].f_1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					func_281(PLAYER::PLAYER_PED_ID(), Local_293[Local_168[1 /*7*/][1] /*2*/], Local_293[Local_168[1 /*7*/][1] /*2*/].f_1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_310(PLAYER::PLAYER_PED_ID(), Local_240[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/], Local_240[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/].f_1);
				func_281(PLAYER::PLAYER_PED_ID(), Local_240[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/], Local_240[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/].f_1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				if (Local_240[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/].f_1 == 0)
				{
					if (GlobalFunc_8329() == 0)
					{
						func_281(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						func_281(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
						if (GlobalFunc_10958(PLAYER::PLAYER_PED_ID(), 8, 9))
						{
							func_281(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_281(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				MISC::SET_BIT(&uLocal_89, 2);
			}
		}
		else if (Local_91.f_55 == 1)
		{
			if (iLocal_570 > 1)
			{
				if (Local_168[1 /*7*/][2] != 0)
				{
					if (GlobalFunc_8329() == 1)
					{
						if (!GlobalFunc_10958(PLAYER::PLAYER_PED_ID(), 8, 9))
						{
							Local_168[1 /*7*/][2] = 0;
							func_281(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
							func_281(PLAYER::PLAYER_PED_ID(), Local_240[Local_168[iLocal_538 /*7*/][2] /*2*/], Local_240[Local_168[iLocal_538 /*7*/][2] /*2*/].f_1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						Local_168[1 /*7*/][2] = 0;
						func_281(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
						func_281(PLAYER::PLAYER_PED_ID(), Local_240[Local_168[iLocal_538 /*7*/][2] /*2*/], Local_240[Local_168[iLocal_538 /*7*/][2] /*2*/].f_1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				func_223(0);
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_310(PLAYER::PLAYER_PED_ID(), Local_293[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/], Local_293[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/].f_1);
				func_281(PLAYER::PLAYER_PED_ID(), Local_293[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/], Local_293[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/].f_1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				MISC::SET_BIT(&uLocal_89, 2);
			}
		}
		else if (Local_91.f_55 == 0)
		{
			if (iLocal_571 > 1 && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (Local_168[1 /*7*/][2] != 0)
				{
					if (GlobalFunc_8329() == 1)
					{
						if (!GlobalFunc_10958(PLAYER::PLAYER_PED_ID(), 8, 9))
						{
							Local_168[1 /*7*/][2] = 0;
							func_281(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
							func_281(PLAYER::PLAYER_PED_ID(), Local_240[Local_168[iLocal_538 /*7*/][2] /*2*/], Local_240[Local_168[iLocal_538 /*7*/][2] /*2*/].f_1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						Local_168[1 /*7*/][2] = 0;
						func_281(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
						func_281(PLAYER::PLAYER_PED_ID(), Local_240[Local_168[iLocal_538 /*7*/][2] /*2*/], Local_240[Local_168[iLocal_538 /*7*/][2] /*2*/].f_1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				func_223(0);
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_310(PLAYER::PLAYER_PED_ID(), Local_446[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/], Local_446[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/].f_1);
				func_281(PLAYER::PLAYER_PED_ID(), Local_446[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/], Local_446[Local_168[iLocal_538 /*7*/][Local_91.f_55] /*2*/].f_1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				MISC::SET_BIT(&uLocal_89, 2);
			}
		}
	}
	func_38(PLAYER::PLAYER_PED_ID(), 0);
}

void func_38(int iParam0, int iParam1)//Position - 0x1EAD
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6712(iParam0);
		if (GlobalFunc_42(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11072(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_53(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			GlobalFunc_8532(iParam0, &Var2, 1);
			Global_89752[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_9151();
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















void func_53(int iParam0, var uParam1, bool bParam2)//Position - 0x333E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6712(iParam0);
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
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
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
			if (GlobalFunc_11071(iParam0, iVar1, &iVar2, 0))
			{
				func_281(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11070(iParam0, iVar1, &iVar2))
			{
				func_281(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_56(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_56(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x35D5
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
				Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, GlobalFunc_11069(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_56(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			GlobalFunc_10637(iParam0, 11, uVar15[11], iParam6, 0);
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
						iVar3 = GlobalFunc_11068(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_56(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar3 = GlobalFunc_11068(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
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
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_56(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						iVar73 = GlobalFunc_11068(iParam0, iVar5, 11, iVar70, 3, 0);
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
							func_56(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_56(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
									func_56(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_56(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_56(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
			GlobalFunc_10637(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11069(iParam0, 8, -1), iParam2);
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
				GlobalFunc_11261(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10637(iParam0, iParam1, iParam2, iParam6, 0);
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
						iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7953(iParam0, iVar95);
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
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_56(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						if (!GlobalFunc_10955(iParam0, 9, iVar97))
						{
							func_56(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_56(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_56(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = GlobalFunc_11069(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11069(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_56(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_56(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_56(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_56(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11178(iParam0, &uVar4))
		{
			func_56(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_56(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_56(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_56(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_56(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}







































































































































































void func_223(int iParam0)//Position - 0x34B62
{
	if (GlobalFunc_8329() == 0)
	{
		if (((((GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 1 || GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 7) || GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 9) || GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 14) || GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 21) || GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 23)
		{
			func_281(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	else if (GlobalFunc_8329() == 1)
	{
		if (((((GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 3 || GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 4) || GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 5) || GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 8) || (GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 9 && iParam0)) || GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 75)
		{
			func_281(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 2, -1) == 20)
		{
			func_281(PLAYER::PLAYER_PED_ID(), 2, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	else if (GlobalFunc_8329() == 2)
	{
		if ((((GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 2 || GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 7) || GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 11) || GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 14) || GlobalFunc_11072(PLAYER::PLAYER_PED_ID(), 8, -1) == 16)
		{
			func_281(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
}


























































int func_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x478B8
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
	
	if (PED::IS_PED_INJURED(uParam0) || iParam2 == -99)
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
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iParam1, iParam2) };
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
			iVar7 = GlobalFunc_7953(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7953(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7953(iParam0, 2);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_281(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = GlobalFunc_11231(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_281(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, GlobalFunc_11072(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11071(iParam0, iVar10, &iVar4, 1))
							{
								func_281(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_281(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10828(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_281(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_281(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_281(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_281(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_281(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_281(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11231(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_281(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11231(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_281(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11027(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11071(iParam0, iVar10, &iVar4, 0))
		{
			func_281(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11070(iParam0, iVar10, &iVar4))
		{
			func_281(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}














int func_295(int iParam0)//Position - 0x49E60
{
	if (iLocal_538 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return iLocal_575;
			
			case 5:
				if (func_296() == 0)
				{
					return (2 - 1);
				}
				else if (func_296() == 1)
				{
					return (2 - 1);
				}
				else if (func_296() == 2)
				{
					return (2 - 1);
				}
				break;
		}
	}
	else if (iLocal_538 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return iLocal_574;
			
			case 1:
				return iLocal_573;
			
			case 2:
				return iLocal_572;
			}
		
		default:
	}
	return 0;
}

int func_296()//Position - 0x49EF1
{
	if (GlobalFunc_39(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/])
			{
				return 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/])
			{
				return 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
			{
				return 2;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			return 3;
		}
	}
	return GlobalFunc_8329();
}

void func_297()//Position - 0x49F74
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_88)
		{
			case 0:
				HUD::_DELETE_WAYPOINT();
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 1:
				iVar4 = GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), GlobalFunc_8329(), 1);
				Var1 = { GlobalFunc_2247(Global_85405[iVar4 /*10*/].f_7, 0) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 2:
				Var1 = { func_306(Global_87300[0 /*17*/].f_9) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 3:
				Var1 = { func_306(Global_87300[1 /*17*/].f_9) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 4:
				Var1 = { func_306(Global_87300[2 /*17*/].f_9) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 5:
				Var1 = { func_306(Global_87300[3 /*17*/].f_9) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 6:
				Var1 = { func_306(Global_87300[4 /*17*/].f_9) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 7:
				Var1 = { func_306(Global_87300[5 /*17*/].f_9) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 8:
				Var1 = { func_306(Global_87300[6 /*17*/].f_9) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 9:
				Var1 = { func_306(Global_87300[7 /*17*/].f_9) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 10:
				Var1 = { func_304() };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 11:
				iVar0 = GlobalFunc_9011(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, -1, 0, 1);
				Var1 = { GlobalFunc_546(iVar0) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 12:
				iVar0 = GlobalFunc_9011(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, -1, 0, 1);
				Var1 = { GlobalFunc_546(iVar0) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 13:
				iVar0 = func_300();
				Var1 = { GlobalFunc_546(iVar0) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 14:
				iVar0 = func_299();
				Var1 = { GlobalFunc_546(iVar0) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 15:
				iVar0 = func_298();
				Var1 = { GlobalFunc_546(iVar0) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 16:
				iVar0 = GlobalFunc_9011(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0, -1, 0, 1);
				Var1 = { GlobalFunc_546(iVar0) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 17:
				iVar0 = GlobalFunc_9011(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, -1, 0, 1);
				Var1 = { GlobalFunc_546(iVar0) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 18:
				iVar0 = 21;
				Var1 = { GlobalFunc_546(iVar0) };
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			
			case 19:
				if (GlobalFunc_8329() == 0)
				{
					iVar5 = 21;
				}
				else if (GlobalFunc_8329() == 1)
				{
					iVar5 = 22;
				}
				else if (GlobalFunc_8329() == 2)
				{
					iVar5 = 23;
				}
				if (HUD::DOES_BLIP_EXIST(Global_67138.f_208[iVar5]))
				{
					Var1 = { HUD::GET_BLIP_COORDS(Global_67138.f_208[iVar5]) };
				}
				HUD::SET_NEW_WAYPOINT(Var1.x, Var1.f_1);
				HUD::REFRESH_WAYPOINT();
				return;
				break;
			}
	}
}

int func_298()//Position - 0x4A347
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	int iVar5;
	
	fVar1 = 1000000f;
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar5 = 18;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(18), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 18;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(19), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 19;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(20), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 20;
	}
	return iVar5;
}

int func_299()//Position - 0x4A3CC
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	int iVar5;
	
	fVar1 = 1000000f;
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar5 = 14;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(14), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 14;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(15), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 15;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(16), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 16;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(17), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 17;
	}
	return iVar5;
}

int func_300()//Position - 0x4A472
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	int iVar5;
	
	fVar1 = 1000000f;
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar5 = 7;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(7), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 7;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(8), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 8;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(9), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 9;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(10), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 10;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(11), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 11;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(12), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 12;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, GlobalFunc_546(13), 1);
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
		iVar5 = 13;
	}
	return iVar5;
}




Vector3 func_304()//Position - 0x4AAF0
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	int iVar5;
	
	fVar1 = 9999.9f;
	Var2 = { -717.7181f, -915.658f, 18.2156f };
	iVar5 = 0;
	while (iVar5 < 89)
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_305(iVar5), 1);
		if (fVar0 < fVar1)
		{
			fVar1 = fVar0;
			Var2 = { func_305(iVar5) };
		}
		iVar5++;
	}
	return Var2;
}

Vector3 func_305(int iParam0)//Position - 0x4AB55
{
	switch (iParam0)
	{
		case 0:
			return 2558.324f, 350.988f, 107.5975f;
		
		case 1:
			return -301.6573f, -829.5886f, 31.41977f;
		
		case 2:
			return -303.2257f, -829.3121f, 31.41977f;
		
		case 3:
			return -204.0193f, -861.0091f, 29.27133f;
		
		case 4:
			return 118.6416f, -883.5695f, 30.13945f;
		
		case 5:
			return 24.5933f, -945.543f, 28.33305f;
		
		case 6:
			return 5.686035f, -919.9551f, 28.48088f;
		
		case 7:
			return 296.1756f, -896.2318f, 28.29015f;
		
		case 8:
			return 296.8775f, -894.3196f, 28.26148f;
		
		case 9:
			return 147.4731f, -1036.218f, 28.38707f;
		
		case 10:
			return 145.8392f, -1035.625f, 28.38707f;
		
		case 11:
			return -256.6386f, -715.8899f, 32.7883f;
		
		case 12:
			return 112.4762f, -819.8081f, 30.33955f;
		
		case 13:
			return -259.2767f, -723.2651f, 32.70155f;
		
		case 14:
			return -254.5219f, -692.8869f, 32.57825f;
		
		case 15:
			return -27.89034f, -724.1089f, 43.22287f;
		
		case 16:
			return -30.09956f, -723.2863f, 43.22287f;
		
		case 17:
			return 111.3886f, -774.8402f, 30.43766f;
		
		case 18:
			return 114.5474f, -775.972f, 30.41737f;
		
		case 19:
			return 289.53f, -1256.788f, 28.44057f;
		
		case 20:
			return 289.2679f, -1282.32f, 28.65519f;
		
		case 21:
			return 158.7965f, 234.7452f, 105.6433f;
		
		case 22:
			return 228.0324f, 337.8501f, 104.5013f;
		
		case 23:
			return 527.7776f, -160.6609f, 56.13671f;
		
		case 24:
			return -57.17029f, -92.37918f, 56.75069f;
		
		case 25:
			return 285.3485f, 142.9751f, 103.1623f;
		
		case 26:
			return 357.1284f, 174.0836f, 102.0597f;
		
		case 27:
			return 89.81339f, 2.880329f, 67.35216f;
		
		case 28:
			return 1077.779f, -776.9664f, 57.25652f;
		
		case 29:
			return 1137.811f, -468.8625f, 65.69865f;
		
		case 30:
			return 1167.06f, -455.6541f, 65.81857f;
		
		case 31:
			return -165.5844f, 234.7659f, 93.92897f;
		
		case 32:
			return -165.5844f, 232.6955f, 93.92897f;
		
		case 33:
			return -1205.378f, -326.5286f, 36.85104f;
		
		case 34:
			return -1206.142f, -325.0316f, 36.85104f;
		
		case 35:
			return -846.6537f, -341.509f, 37.6685f;
		
		case 36:
			return -847.204f, -340.4291f, 37.6793f;
		
		case 37:
			return -720.6288f, -415.5243f, 33.97996f;
		
		case 38:
			return -867.013f, -187.9928f, 36.88218f;
		
		case 39:
			return -867.9745f, -186.3419f, 36.88218f;
		
		case 40:
			return -1415.48f, -212.3324f, 45.49542f;
		
		case 41:
			return -1430.663f, -211.3587f, 45.47162f;
		
		case 42:
			return -1410.736f, -98.92789f, 51.39701f;
		
		case 43:
			return -1410.183f, -100.6454f, 51.39652f;
		
		case 44:
			return -1282.098f, -210.5599f, 41.43031f;
		
		case 45:
			return -1286.704f, -213.7827f, 41.43031f;
		
		case 46:
			return -1289.742f, -227.165f, 41.43031f;
		
		case 47:
			return -1285.136f, -223.9422f, 41.43031f;
		
		case 48:
			return -1569.84f, -547.0309f, 33.93216f;
		
		case 49:
			return -1570.765f, -547.7035f, 33.93216f;
		
		case 50:
			return -1315.416f, -834.431f, 15.95233f;
		
		case 51:
			return -1314.466f, -835.6913f, 15.95233f;
		
		case 52:
			return -2071.928f, -317.2862f, 12.31808f;
		
		case 53:
			return -821.8936f, -1081.555f, 10.13664f;
		
		case 54:
			return -1110.228f, -1691.154f, 3.378483f;
		
		case 55:
			return -712.9357f, -818.4827f, 22.74066f;
		
		case 56:
			return -710.0828f, -818.4756f, 22.73634f;
		
		case 57:
			return -617.8035f, -708.8591f, 29.04321f;
		
		case 58:
			return -617.8035f, -706.8521f, 29.04321f;
		
		case 59:
			return 2564f, 2584.553f, 37.06807f;
		
		case 60:
			return -3241.455f, 997.9085f, 11.66582f;
		
		case 61:
			return -614.5187f, -705.5981f, 30.224f;
		
		case 62:
			return -611.8581f, -705.5981f, 30.224f;
		
		case 63:
			return -660.6763f, -854.4882f, 23.45663f;
		
		case 64:
			return -537.8052f, -854.9357f, 28.27543f;
		
		case 65:
			return -594.6144f, -1160.852f, 21.33351f;
		
		case 66:
			return -596.1251f, -1160.85f, 21.3336f;
		
		case 67:
			return -526.7791f, -1223.374f, 17.45272f;
		
		case 68:
			return 156.1886f, 6643.2f, 30.59372f;
		
		case 69:
			return 173.8246f, 6638.217f, 30.59372f;
		
		case 70:
			return -386.4596f, 6046.411f, 30.47399f;
		
		case 71:
			return -282.7141f, 6226.43f, 30.49648f;
		
		case 72:
			return -132.6663f, 6366.876f, 30.47258f;
		
		case 73:
			return -95.87029f, 6457.462f, 30.47394f;
		
		case 74:
			return -97.63721f, 6455.732f, 30.46793f;
		
		case 75:
			return 1687.395f, 4815.9f, 41.00647f;
		
		case 76:
			return 1700.694f, 6426.762f, 31.63297f;
		
		case 77:
			return 1822.971f, 3682.577f, 33.26745f;
		
		case 78:
			return 1171.523f, 2703.139f, 37.1477f;
		
		case joaat("mpsv_lp0_31"):
			return 1172.457f, 2703.139f, 37.1477f;
		
		case 80:
			return -2956.848f, 487.2158f, 14.478f;
		
		case 81:
			return -2958.977f, 487.3071f, 14.478f;
		
		case 82:
			return -2974.586f, 380.1269f, 14.32212f;
		
		case 83:
			return -1091.887f, 2709.053f, 17.91941f;
		
		case 84:
			return -2295.853f, 357.9348f, 173.6014f;
		
		case 85:
			return -2295.069f, 356.2556f, 173.6014f;
		
		case 86:
			return -2294.3f, 354.6056f, 173.6014f;
		
		case 87:
			return -3043.835f, 594.1639f, 6.732796f;
		
		case 88:
			return -3144.887f, 1127.811f, 19.83804f;
		
		default:
	}
	return 158.7965f, 234.7452f, 105.6433f;
}

Vector3 func_306(int iParam0)//Position - 0x4B3CB
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (iParam0 == 223)
	{
		Var0 = { -1581.045f, 2791.694f, 15.85525f };
	}
	else
	{
		Var0 = { GlobalFunc_2247(iParam0, GlobalFunc_8329()) };
		if (GlobalFunc_105(Var0))
		{
			Var0 = { GlobalFunc_2247(iParam0, 0) };
		}
	}
	return Var0;
}







int func_313()//Position - 0x4B644
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if ((!PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 237) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 176)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 176))
	{
		return 1;
	}
	return 0;
}

int func_314()//Position - 0x4B68B
{
	if (!iLocal_545)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 173) || iLocal_583)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_534) > 250 || iLocal_583)
			{
				iLocal_534 = MISC::GET_GAME_TIMER();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				Local_91.f_55++;
				if (Local_91.f_55 > (func_316() - 1))
				{
					Local_91.f_55 = 0;
				}
				GlobalFunc_1355(Local_91.f_55, 1, 1);
				iLocal_539 = 1;
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(2, 172) || iLocal_582)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_534) > 250 || iLocal_582)
			{
				iLocal_534 = MISC::GET_GAME_TIMER();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				Local_91.f_55 = (Local_91.f_55 - 1);
				if (Local_91.f_55 < 0)
				{
					Local_91.f_55 = (func_316() - 1);
				}
				GlobalFunc_1355(Local_91.f_55, 1, 1);
				iLocal_539 = 1;
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 174) || iLocal_585 == -1)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_534) > 250)
			{
				iLocal_534 = MISC::GET_GAME_TIMER();
				if (func_295(Local_91.f_55) > 0 && iLocal_540 == 1)
				{
					Local_168[iLocal_538 /*7*/][Local_91.f_55] = (Local_168[iLocal_538 /*7*/][Local_91.f_55] - 1);
					if (Local_168[iLocal_538 /*7*/][Local_91.f_55] < 0)
					{
						Local_168[iLocal_538 /*7*/][Local_91.f_55] = func_295(Local_91.f_55);
					}
					func_37();
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					iLocal_539 = 1;
					return 1;
				}
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 175) || iLocal_585 == 1)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_534) > 250)
			{
				iLocal_534 = MISC::GET_GAME_TIMER();
				if (func_295(Local_91.f_55) > 0 && iLocal_540 == 1)
				{
					Local_168[iLocal_538 /*7*/][Local_91.f_55]++;
					if (Local_168[iLocal_538 /*7*/][Local_91.f_55] > func_295(Local_91.f_55))
					{
						Local_168[iLocal_538 /*7*/][Local_91.f_55] = 0;
					}
					func_37();
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					iLocal_539 = 1;
					return 1;
				}
			}
		}
	}
	return 1;
}


int func_316()//Position - 0x4BA06
{
	switch (iLocal_538)
	{
		case 0:
			return 5;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		default:
	}
	return 6;
}

void func_317()//Position - 0x4BA3F
{
	int iVar0;
	
	iLocal_580 = 0;
	iLocal_581 = 0;
	bLocal_584 = false;
	iLocal_582 = 0;
	iLocal_583 = 0;
	iLocal_585 = 0;
	bLocal_587 = false;
	iVar0 = 0;
	if (iLocal_90 != 1)
	{
		if (!func_323())
		{
			return;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (iLocal_546 != 2)
		{
			func_321(0, &iLocal_586);
		}
		else
		{
			bLocal_587 = func_321(1, &iLocal_586);
		}
		if (Global_2543381 > -1)
		{
			if (GlobalFunc_1774())
			{
				if (Global_2543381 == Local_91.f_55)
				{
					if (func_295(Local_91.f_55) > 0 && iLocal_540 == 1)
					{
						iVar0 = GlobalFunc_1390(0.045f);
						if (iVar0 == -1 || iVar0 == 1)
						{
							iLocal_585 = iVar0;
						}
					}
				}
			}
			if (func_318())
			{
				if (Global_2543381 == Local_91.f_55)
				{
					if (func_295(Local_91.f_55) > 0 && iLocal_540 == 1)
					{
						if (iLocal_538 == 0 && Local_91.f_55 == 0)
						{
							iLocal_585 = GlobalFunc_1390(0.045f);
							if (iLocal_585 == -999)
							{
								iLocal_580 = 1;
							}
						}
						else
						{
							iLocal_585 = GlobalFunc_1390(0);
						}
					}
					else
					{
						iLocal_580 = 1;
					}
				}
				else
				{
					Local_91.f_55 = Global_2543381;
					GlobalFunc_1355(Local_91.f_55, 1, 1);
					iLocal_539 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			if (Global_2543381 == Local_91.f_55)
			{
				if ((Local_91.f_55 == 0 && iLocal_538 == 0) && GlobalFunc_1390(0.045f) == -999)
				{
					HUD::_SET_MOUSE_CURSOR_SPRITE(5);
				}
			}
		}
		else if (iLocal_546 != 2 && iLocal_535 != MISC::GET_GAME_TIMER())
		{
			if (func_318())
			{
				bLocal_584 = true;
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			iLocal_581 = 1;
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241) || (func_318() && Global_2543381 == -2))
		{
			iLocal_582 = 1;
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 242) || (func_318() && Global_2543381 == -3))
		{
			iLocal_583 = 1;
		}
	}
}

int func_318()//Position - 0x4BC2D
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 237))
		{
			return 1;
		}
	}
	return 0;
}



int func_321(bool bParam0, int iParam1)//Position - 0x4BD34
{
	float fVar0;
	float fVar1;
	
	if (bParam0)
	{
		GlobalFunc_1393(1, -1);
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 237))
		{
			if (Global_2543375 < 1f)
			{
				return 1;
			}
		}
	}
	else
	{
		GlobalFunc_1393(0, -1);
		if (*iParam1)
		{
			if (((Global_2543375 > (1f - 0.05f) || Global_2543375 < 0.05f) || Global_2543376 > (1f - 0.03f)) || Global_2543376 < 0.03f)
			{
				return 0;
			}
			else
			{
				*iParam1 = 0;
			}
		}
		if (Global_2543381 == -1 || Global_2543381 == -4)
		{
			if (Global_2543375 > (1f - (0.05f * 0.75f)))
			{
				HUD::_SET_MOUSE_CURSOR_SPRITE(7);
				fVar0 = (0.05f - (1f - Global_2543375));
				if (fVar0 > 0.05f)
				{
					fVar0 = 0.05f;
				}
				fVar1 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
				fVar1 = (fVar1 - (70f * fVar0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar1);
			}
			else if (Global_2543375 < (0.05f * 0.75f))
			{
				HUD::_SET_MOUSE_CURSOR_SPRITE(6);
				fVar0 = (0.05f - Global_2543375);
				if (fVar0 > 0.05f)
				{
					fVar0 = 0.05f;
				}
				fVar1 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
				fVar1 = (fVar1 + (70f * fVar0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar1);
			}
			else if (Global_2543376 > (1f - (0.03f * 0.75f)))
			{
			}
			else if (Global_2543376 < (0.03f * 0.75f))
			{
			}
		}
	}
	return 0;
}


int func_323()//Position - 0x4BF81
{
	uLocal_568 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2("TEXTFIELD");
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_568))
	{
		return 1;
	}
	return 0;
}

void func_324()//Position - 0x4BFA4
{
	if (GlobalFunc_4998(0, -1) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		if (!MISC::IS_BIT_SET(uLocal_89, 1) || iLocal_539)
		{
			func_390();
			iLocal_539 = 0;
			iLocal_535 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_535) > 2000)
		{
			iLocal_539 = 1;
		}
		if (!MISC::IS_BIT_SET(uLocal_89, 1))
		{
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
			MISC::SET_BIT(&uLocal_89, 1);
		}
		if (iLocal_538 == 2 || iLocal_538 == 3)
		{
			if (func_323())
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, -0.0755f, 0f, 0f);
				GRAPHICS::_0xEFABC7722293DA7C();
				GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_568, 0.113f, fLocal_565, 0.225f, 1f, 255, 255, 255, 255, 0);
				GRAPHICS::_0xEFABC7722293DA7C();
				GRAPHICS::DRAW_RECT(0.1125f, fLocal_567, 0.225f, 0.003f, 255, 255, 255, 255, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		func_363();
		HUD::HIDE_HELP_TEXT_THIS_FRAME();
		GlobalFunc_6900(0, 0, 0, 1);
		GlobalFunc_8446(1, -1, 1, 0, 0, fLocal_527, 0, 1);
	}
}







































void func_363()//Position - 0x503ED
{
	switch (iLocal_538)
	{
		case 0:
			if (Local_91.f_55 == 0)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael1")) > 0)
				{
					GlobalFunc_1353("PIM_GPSOFF", 0, 0);
				}
				else
				{
					GlobalFunc_1353("PIM_HQGPS", 0, 0);
				}
			}
			else if (Local_91.f_55 == 1)
			{
				if (func_26())
				{
					GlobalFunc_1353("PIM_INV", 0, 0);
				}
				else
				{
					GlobalFunc_1353("PIM_INVOFF", 0, 0);
				}
			}
			else if (Local_91.f_55 == 2)
			{
				if ((((((GlobalFunc_756() && !GlobalFunc_39(6)) && !GlobalFunc_39(7)) && !GlobalFunc_39(10)) && !GlobalFunc_39(9)) && !GlobalFunc_39(5)) && GRAPHICS::_0x5E657EF1099EDD65(2))
				{
					GlobalFunc_1353("PIM_THOBJ", 0, 0);
				}
				else
				{
					GlobalFunc_1353("PIM_OBJOFF", 0, 0);
				}
			}
			else if (Local_91.f_55 == 3)
			{
				if (GRAPHICS::_0x5E657EF1099EDD65(1))
				{
					GlobalFunc_1353("PIM_THHELP", 0, 0);
				}
				else
				{
					GlobalFunc_1353("PIM_HELPOF", 0, 0);
				}
			}
			else if (Local_91.f_55 == 4)
			{
				switch (func_364(0, 0, 118))
				{
					case 0:
						GlobalFunc_1353("PIM_DIRECT", 0, 0);
						break;
					
					case 1:
						GlobalFunc_1353("FBR_BLK_CLEAN", 0, 0);
						break;
					
					case 2:
						GlobalFunc_1353("DI_BLK_RNNNG", 0, 0);
						break;
					
					case 13:
						GlobalFunc_1353("DI_BLK_DEAD", 0, 0);
						break;
					
					case 3:
						GlobalFunc_1353("DI_BLK_MISS", 0, 0);
						break;
					
					case 5:
						GlobalFunc_1353("DI_BLK_SHOP", 0, 0);
						break;
					
					case 4:
						GlobalFunc_1353("DI_BLK_CUTS", 0, 0);
						break;
					
					case 6:
						GlobalFunc_1353("DI_BLK_WANT", 0, 0);
						break;
					
					case 7:
						GlobalFunc_1353("DI_BLK_ONLI", 0, 0);
						break;
					
					case 8:
						GlobalFunc_1353("DI_BLK_ACT", 0, 0);
						break;
					
					case 9:
						GlobalFunc_1353("DI_BLK_LOC", 0, 0);
						break;
					
					case 10:
						GlobalFunc_1353("DI_BLK_VEH", 0, 0);
						break;
					
					case 11:
						GlobalFunc_1353("DI_BLK_PARA", 0, 0);
						break;
					
					case 12:
						GlobalFunc_1353("DI_BLK_FALL", 0, 0);
						break;
					
					default:
						break;
					}
			}
			break;
		
		case 1:
			if (Local_91.f_55 == 0)
			{
				GlobalFunc_1353("PIM_HATS", 0, 0);
			}
			else if (Local_91.f_55 == 1)
			{
				GlobalFunc_1353("PIM_HGLAS", 0, 0);
			}
			else if (Local_91.f_55 == 2)
			{
				GlobalFunc_1353("PIM_HMASK", 0, 0);
			}
			break;
	}
}

int func_364(int iParam0, bool bParam1, int iParam2)//Position - 0x50674
{
	int iVar0;
	
	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 13;
	}
	if (bParam1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
		{
			return 2;
		}
	}
	if (GlobalFunc_756() && !GlobalFunc_39(14))
	{
		return 3;
	}
	if (GlobalFunc_489())
	{
		return 3;
	}
	if (GlobalFunc_2383())
	{
		return 8;
	}
	if (bParam1)
	{
		if (GlobalFunc_486())
		{
			return 8;
		}
	}
	if (Global_87287)
	{
		return 3;
	}
	if (Global_24697)
	{
		return 8;
	}
	if (Global_24592)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("creator")) > 0)
	{
		return 3;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(bParam1))
	{
		return 3;
	}
	if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 12;
	}
	if (GlobalFunc_747(Global_96378, 256))
	{
		return 3;
	}
	if (((GlobalFunc_490() || GlobalFunc_331()) || GlobalFunc_9169()) || GlobalFunc_2382())
	{
		return 5;
	}
	if (GlobalFunc_2382())
	{
		return 5;
	}
	if (GlobalFunc_2381())
	{
		return 5;
	}
	if (GlobalFunc_2380())
	{
		return 5;
	}
	if (GlobalFunc_331())
	{
		return 5;
	}
	if (GlobalFunc_160() && !Global_96305)
	{
		return 8;
	}
	if (GlobalFunc_9169())
	{
		return 5;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || GlobalFunc_488())
	{
		return 4;
	}
	if (GlobalFunc_268())
	{
		return 4;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_368(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
			{
				return 11;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || Global_96400)
			{
				return 10;
			}
		}
	}
	if (Global_24695)
	{
		return 8;
	}
	if (Global_68243)
	{
		return 4;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
		{
			return 6;
		}
		if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		if (TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
		{
			return 8;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 7;
	}
	if (GlobalFunc_2378())
	{
		return 8;
	}
	if (Global_24446)
	{
		return 3;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 4;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
	{
		return 9;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!GlobalFunc_5747(0))
		{
			return 8;
		}
	}
	if (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	return 0;
}




int func_368(int iParam0)//Position - 0x50AE6
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		return 5;
	}
	Var0 = { GlobalFunc_80(PLAYER::PLAYER_ID()) };
	if (Global_96440[10 /*10*/].f_1)
	{
		if (SYSTEM::VDIST2(Var0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (GlobalFunc_230(2) && !GlobalFunc_230(17))
	{
		if (SYSTEM::VDIST2(Var0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (SYSTEM::VDIST2(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 128.83f, -1297.98f, 29.3f) < 2f || SYSTEM::VDIST2(Var0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (SYSTEM::VDIST2(Var0, 1081.951f, -1976.762f, 30.47218f) < 6f && GlobalFunc_891(26))
	{
		return 9;
	}
	if (!iLocal_33)
	{
		func_369(iParam0);
	}
	iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_96316 || iVar3 == Global_96317) || iVar3 == Global_96318)
	{
		return 9;
	}
	else if (iVar3 == Global_96307)
	{
		return 9;
	}
	else if (iVar3 == Global_96308)
	{
		return 9;
	}
	else if (iVar3 == Global_96311)
	{
		return 9;
	}
	else if (iVar3 == Global_96310)
	{
		return 9;
	}
	else if (iVar3 == Global_96312)
	{
		return 9;
	}
	else if (iVar3 == Global_96313)
	{
		return 9;
	}
	else if (iVar3 == Global_96314)
	{
		return 9;
	}
	else if (iVar3 == Global_96315)
	{
		return 9;
	}
	else if (iVar3 == Global_96319)
	{
		return 9;
	}
	else if (iVar3 == Global_96320)
	{
		return 9;
	}
	else if (iVar3 == Global_96321)
	{
		return 9;
	}
	else if (iVar3 == Global_96322)
	{
		return 9;
	}
	else if (iVar3 == Global_96323)
	{
		return 9;
	}
	else if ((iVar3 == Global_96324 || iVar3 == Global_96325) && GlobalFunc_230(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_96326[iVar4])
		{
			return 9;
		}
		iVar4++;
	}
	return 0;
}

void func_369(var uParam0)//Position - 0x50F0E
{
	int iVar0;
	
	uParam0 = uParam0;
	GlobalFunc_7109(24, &Global_96307);
	GlobalFunc_7109(47, &Global_96308);
	GlobalFunc_7109(10, &Global_96316);
	GlobalFunc_7109(9, &Global_96317);
	GlobalFunc_7109(8, &Global_96318);
	GlobalFunc_7109(21, &Global_96319);
	GlobalFunc_7109(11, &Global_96320);
	GlobalFunc_7109(18, &Global_96324);
	GlobalFunc_7109(19, &Global_96325);
	Global_96311 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_96310 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_96312 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_96313 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_96314 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_96315 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_96321 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_96322 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_96323 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_96326[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS(GlobalFunc_5748(iVar0));
		iVar0++;
	}
	iLocal_33 = 1;
}





















void func_390()//Position - 0x52400
{
	float fVar0;
	float fVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	fVar0 = func_417();
	fVar1 = (((fVar0 - 1f) / fLocal_566) + 1f);
	fLocal_565 = (0.754f * fVar1);
	fLocal_567 = (fLocal_565 - 0.501f);
	bLocal_541 = false;
	iLocal_540 = 0;
	GlobalFunc_262(1);
	GlobalFunc_1317(1, 1, 0, 0, 0);
	GlobalFunc_1316(1, 2, 1, 1, 1);
	GlobalFunc_1983(5);
	if (GlobalFunc_8329() == 0)
	{
		iVar6 = 143;
	}
	else if (GlobalFunc_8329() == 1)
	{
		iVar6 = 144;
	}
	else
	{
		iVar6 = 145;
	}
	HUD::GET_HUD_COLOUR(iVar6, &uVar2, &uVar3, &uVar4, &uVar5);
	GlobalFunc_4666(uVar2, uVar3, uVar4, uVar5, 1);
	switch (iLocal_538)
	{
		case 0:
			func_407();
			if (bLocal_541 == 1)
			{
				GlobalFunc_1354(176, "PIM_CSEL", -1);
			}
			GlobalFunc_1354(177, "PIM_CEXI", -1);
			break;
		
		case 1:
			func_403();
			if (bLocal_541 == 1)
			{
				if (((Local_91.f_55 == 0 && iLocal_571 > 1) || (Local_91.f_55 == 1 && iLocal_570 > 1)) || (Local_91.f_55 == 2 && iLocal_569 > 1))
				{
					GlobalFunc_1354(176, "PIM_CNEX", -1);
				}
			}
			GlobalFunc_1354(177, "PIM_CEXI", -1);
			break;
		
		case 2:
			func_402();
			GlobalFunc_1354(177, "PIM_CEXI", -1);
			break;
		
		case 3:
			func_391();
			GlobalFunc_1354(177, "PIM_CEXI", -1);
			break;
	}
	GlobalFunc_1355(Local_91.f_55, 1, 1);
	GlobalFunc_1353("", 0, 0);
}

void func_391()//Position - 0x52576
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	GlobalFunc_1318("PIM_TITLE1");
	GlobalFunc_6546(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_530), sLocal_530, sLocal_530);
	if (func_398(&uVar0, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5))
	{
		GlobalFunc_4665(uVar3, uVar4, uVar5, 255, 1);
		GlobalFunc_4666(uVar3, uVar4, uVar5, 255, 1);
		GlobalFunc_4664(1);
	}
	else
	{
		GlobalFunc_4665(uVar3, uVar4, uVar5, 255, 0);
		GlobalFunc_4666(uVar3, uVar4, uVar5, 255, 0);
		GlobalFunc_4664(0);
	}
	GlobalFunc_7830(0, "PIM_THELP", 0, 1, 0, 0);
	func_392(0);
}

void func_392(bool bParam0)//Position - 0x52600
{
	if (func_323())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_568, "SET_TEXT");
		if (bParam0)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING(2);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING(1);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iLocal_539 = 1;
	}
}






int func_398(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5288E
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	switch (GlobalFunc_8329())
	{
		case 0:
			HUD::GET_HUD_COLOUR(143, uParam3, uParam4, uParam5, &uVar1);
			*uParam0 = 15;
			*uParam1 = 27;
			*uParam2 = 32;
			iVar0 = 1;
			break;
		
		case 1:
			HUD::GET_HUD_COLOUR(144, iParam3, iParam4, iParam5, &uVar1);
			*uParam0 = 25;
			*uParam1 = 35;
			*uParam2 = 25;
			iVar0 = 1;
			break;
		
		case 2:
			HUD::GET_HUD_COLOUR(145, iParam3, iParam4, iParam5, &uVar1);
			*uParam0 = 38;
			*uParam1 = 24;
			*uParam2 = 13;
			iVar0 = 1;
			break;
	}
	return iVar0;
}




void func_402()//Position - 0x529A5
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	GlobalFunc_1318("PIM_TITLE1");
	GlobalFunc_6546(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_530), sLocal_530, sLocal_530);
	if (func_398(&uVar0, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5))
	{
		GlobalFunc_4665(uVar3, uVar4, uVar5, 255, 1);
		GlobalFunc_4666(uVar3, uVar4, uVar5, 255, 1);
		GlobalFunc_4664(1);
	}
	else
	{
		GlobalFunc_4665(uVar3, uVar4, uVar5, 255, 0);
		GlobalFunc_4666(uVar3, uVar4, uVar5, 255, 0);
		GlobalFunc_4664(0);
	}
	GlobalFunc_7830(0, "PIM_TOBJ", 0, 1, 0, 0);
	func_392(1);
}

void func_403()//Position - 0x52A2F
{
	struct<14> Var0;
	int iVar14;
	struct<2> Var15;
	int iVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	
	iVar14 = GlobalFunc_4917(GlobalFunc_8329());
	uVar20 = PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID());
	GlobalFunc_1318("PIM_TITLE2");
	GlobalFunc_6546(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_530), sLocal_530, sLocal_530);
	if (func_398(&uVar21, &uVar22, &uVar23, &uVar24, &uVar25, &uVar26))
	{
		GlobalFunc_4665(uVar24, uVar25, uVar26, 255, 1);
		GlobalFunc_4666(uVar24, uVar25, uVar26, 255, 1);
		GlobalFunc_4664(1);
	}
	else
	{
		GlobalFunc_4665(uVar24, uVar25, uVar26, 255, 0);
		GlobalFunc_4666(uVar24, uVar25, uVar26, 255, 0);
		GlobalFunc_4664(0);
	}
	Local_147.f_13.f_2 = Global_17235;
	fLocal_527 = Global_17235;
	iVar19 = 1;
	if (iLocal_571 <= 1 || uVar20)
	{
		iVar19 = 1;
	}
	GlobalFunc_7830(0, "PIM_THELM", 0, 1, 0, 0);
	if (Local_168[iLocal_538 /*7*/][0] > 0)
	{
		Var0 = { GlobalFunc_10828(iVar14, Local_446[Local_168[iLocal_538 /*7*/][0] /*2*/], Local_446[Local_168[iLocal_538 /*7*/][0] /*2*/].f_1) };
	}
	else
	{
		StringCopy(&(Var0.f_8), "PIM_NHELM", 16);
	}
	StringCopy(&Var15, func_405(&(Var0.f_8)), 16);
	GlobalFunc_7830(0, &Var15, 0, iVar19, 0, 0);
	if (Local_91.f_55 == 0 && iVar19 == 1)
	{
		bLocal_541 = true;
	}
	GlobalFunc_7830(1, "PIM_TGLAS", 0, 1, 0, 0);
	if (Local_168[iLocal_538 /*7*/][1] > 0)
	{
		Var0 = { GlobalFunc_10828(iVar14, Local_293[Local_168[iLocal_538 /*7*/][1] /*2*/], Local_293[Local_168[iLocal_538 /*7*/][1] /*2*/].f_1) };
		if (GlobalFunc_8329() == 0)
		{
			if (Local_293[Local_168[iLocal_538 /*7*/][1] /*2*/].f_1 == 104)
			{
				StringCopy(&(Var0.f_8), "PIM_SHDE1", 16);
			}
			else if (Local_293[Local_168[iLocal_538 /*7*/][1] /*2*/].f_1 == 108)
			{
				StringCopy(&(Var0.f_8), "PIM_SHDE2", 16);
			}
			else if (Local_293[Local_168[iLocal_538 /*7*/][1] /*2*/].f_1 == 110)
			{
				StringCopy(&(Var0.f_8), "PIM_SHDE3", 16);
			}
			else if (Local_293[Local_168[iLocal_538 /*7*/][1] /*2*/].f_1 == 109)
			{
				StringCopy(&(Var0.f_8), "PIM_SHDE4", 16);
			}
		}
		else if (GlobalFunc_8329() == 1)
		{
			if (Local_293[Local_168[iLocal_538 /*7*/][1] /*2*/].f_1 == 124)
			{
				StringCopy(&(Var0.f_8), "PIM_SHDE5", 16);
			}
		}
	}
	else
	{
		StringCopy(&(Var0.f_8), "PIM_NGLAS", 16);
	}
	StringCopy(&Var15, func_405(&(Var0.f_8)), 16);
	GlobalFunc_7830(1, &Var15, 0, 1, 0, 0);
	if (Local_91.f_55 == 1)
	{
		bLocal_541 = true;
	}
	iVar19 = 1;
	if (iLocal_569 <= 1 || uVar20)
	{
		iVar19 = 1;
	}
	GlobalFunc_7830(2, "PIM_TMASK", 0, 1, 0, 0);
	if (Local_168[iLocal_538 /*7*/][2] > 0)
	{
		Var0 = { GlobalFunc_10828(iVar14, Local_240[Local_168[iLocal_538 /*7*/][2] /*2*/], Local_240[Local_168[iLocal_538 /*7*/][2] /*2*/].f_1) };
	}
	else
	{
		StringCopy(&(Var0.f_8), "PIM_NHELM1", 16);
	}
	StringCopy(&Var15, func_405(&(Var0.f_8)), 16);
	GlobalFunc_7830(2, &Var15, 0, iVar19, 0, 0);
	if (Local_91.f_55 == 2 && iVar19 == 1)
	{
		bLocal_541 = true;
	}
	if ((Local_91.f_55 == 2 && bLocal_541 == 1) || (Local_91.f_55 == 0 && bLocal_541 == 1))
	{
		GlobalFunc_1315(0, 1, 0, 0, 0);
		iLocal_540 = 1;
	}
	else if (Local_91.f_55 == 1 && iLocal_570 > 1)
	{
		GlobalFunc_1315(0, 1, 0, 0, 0);
		iLocal_540 = 1;
	}
	else
	{
		GlobalFunc_1315(0, 0, 0, 0, 0);
	}
}


char* func_405(char* sParam0)//Position - 0x52DD6
{
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "PROPS_P0_H2"))
	{
		return "PIM_P0_H2";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E4_6"))
	{
		return "PIM_P0_E4_6";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E5"))
	{
		return "PIM_P0_E5";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E5_1"))
	{
		return "PIM_P0_E5_1";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E5_2"))
	{
		return "PIM_P0_E5_2";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E5_4"))
	{
		return "PIM_P0_E5_4";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E5_5"))
	{
		return "PIM_P0_E5_5";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E5_6"))
	{
		return "PIM_P0_E5_6";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E5_7"))
	{
		return "PIM_P0_E5_7";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E5_8"))
	{
		return "PIM_P0_E5_8";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E5_9"))
	{
		return "PIM_P0_E5_9";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E6"))
	{
		return "PIM_P0_E6";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E6_1"))
	{
		return "PIM_P0_E6_1";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E6_5"))
	{
		return "PIM_P0_E6_5";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E6_8"))
	{
		return "PIM_P0_E6_8";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E8_6"))
	{
		return "PIM_P0_E8_6";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E8_7"))
	{
		return "PIM_P0_E8_7";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E9_1"))
	{
		return "PIM_P0_E9_1";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P0_E9_4"))
	{
		return "PIM_P0_E9_4";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_E1_5"))
	{
		return "PIM_P1_E1_5";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_E4_0"))
	{
		return "PIM_P1_E4_0";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_E4_1"))
	{
		return "PIM_P1_E4_1";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_E7_0"))
	{
		return "PIM_P1_E7_0";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_E7_1"))
	{
		return "PIM_P1_E7_1";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_E7_3"))
	{
		return "PIM_P1_E7_3";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_E8_5"))
	{
		return "PIM_P1_E8_5";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_E8_7"))
	{
		return "PIM_P1_E8_7";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_E9_2"))
	{
		return "PIM_P1_E9_2";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_E9_7"))
	{
		return "PIM_P1_E9_7";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_E10_3"))
	{
		return "PIM_P1_E10_3";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_E10_4"))
	{
		return "PIM_P1_E10_4";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_H26_4"))
	{
		return "PIM_P1_H26_4";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_H19_0"))
	{
		return "PIM_P1_H19_0";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_H19_3"))
	{
		return "PIM_P1_H19_3";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_H19_5"))
	{
		return "PIM_P1_H19_5";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_H19_10"))
	{
		return "PIM_P1_H19_10";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_H19_12"))
	{
		return "PIM_P1_H19_12";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_H19_13"))
	{
		return "PIM_P1_H19_13";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P1_H19_14"))
	{
		return "PIM_P1_H19_14";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E1"))
	{
		return "PIM_P2_E1";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E3"))
	{
		return "PIM_P2_E3";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E3_6"))
	{
		return "PIM_P2_E3_6";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E3_7"))
	{
		return "PIM_P2_E3_7";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E3_8"))
	{
		return "PIM_P2_E3_8";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E8_4"))
	{
		return "PIM_P2_E8_4";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E8_5"))
	{
		return "PIM_P2_E8_5";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E8_6"))
	{
		return "PIM_P2_E8_6";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E9_1"))
	{
		return "PIM_P2_E9_1";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E9_2"))
	{
		return "PIM_P2_E9_2";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E9_3"))
	{
		return "PIM_P2_E9_3";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E9_5"))
	{
		return "PIM_P2_E9_5";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E9_6"))
	{
		return "PIM_P2_E9_6";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E9_7"))
	{
		return "PIM_P2_E9_7";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E9_8"))
	{
		return "PIM_P2_E9_8";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E9_9"))
	{
		return "PIM_P2_E9_9";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E10_3"))
	{
		return "PIM_P2_E10_3";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E10_7"))
	{
		return "PIM_P2_E10_7";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "PROPS_P2_E10_8"))
	{
		return "PIM_P2_E10_8";
	}
	return sParam0;
}


void func_407()//Position - 0x5340E
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8[8];
	int iVar17;
	int iVar18;
	int iVar19;
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
	struct<4> Var31;
	int iVar35;
	
	GlobalFunc_1318("PIM_TITLE1");
	GlobalFunc_6546(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_530), sLocal_530, sLocal_530);
	if (func_398(&uVar0, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5))
	{
		GlobalFunc_4665(uVar3, uVar4, uVar5, 255, 1);
		GlobalFunc_4666(uVar3, uVar4, uVar5, 255, 1);
		GlobalFunc_4664(1);
	}
	else
	{
		GlobalFunc_4665(uVar3, uVar4, uVar5, 255, 0);
		GlobalFunc_4666(uVar3, uVar4, uVar5, 255, 0);
		GlobalFunc_4664(0);
	}
	Local_147.f_13.f_2 = Global_17235;
	fLocal_527 = Global_17235;
	iVar6 = 0;
	iVar7 = 0;
	GlobalFunc_7830(0, "PIM_TQGPS", 0, 1, 0, 0);
	StringCopy(&(Local_91.f_51), "PIM_QGPS0", 16);
	iLocal_88 = 0;
	iVar18 = GlobalFunc_8329();
	iLocal_575 = 0;
	iLocal_575++;
	iVar17 = 0;
	while (iVar17 < 8)
	{
		if (((Global_87300[iVar17 /*17*/].f_5 != -1 && Global_87300[iVar17 /*17*/].f_5 != 80) && Global_87300[iVar17 /*17*/].f_5 != 81) && Global_87300[iVar17 /*17*/].f_5 != 82)
		{
			if (GlobalFunc_2016(Global_81155[Global_87300[iVar17 /*17*/].f_5 /*34*/].f_11, iVar18) && GlobalFunc_474(Global_87300[iVar17 /*17*/].f_9))
			{
				if (GlobalFunc_39(15) || GlobalFunc_39(5))
				{
					iLocal_575++;
					iVar8[iVar17] = iLocal_575;
				}
			}
		}
		iVar17++;
	}
	iLocal_575++;
	iVar19 = iLocal_575;
	iVar20 = -1;
	if ((((((((((GlobalFunc_8373(28) || GlobalFunc_8373(29)) || GlobalFunc_8373(30)) || GlobalFunc_8373(31)) || GlobalFunc_8373(32)) || GlobalFunc_8373(33)) || GlobalFunc_8373(34)) || GlobalFunc_8373(35)) || GlobalFunc_8373(36)) || GlobalFunc_8373(37)) || GlobalFunc_8373(38))
	{
		iLocal_575++;
		iVar20 = iLocal_575;
	}
	iVar21 = -1;
	if ((((GlobalFunc_8373(39) || GlobalFunc_8373(40)) || GlobalFunc_8373(41)) || GlobalFunc_8373(42)) || GlobalFunc_8373(43))
	{
		iLocal_575++;
		iVar21 = iLocal_575;
	}
	iVar22 = -1;
	if ((((((GlobalFunc_8373(7) || GlobalFunc_8373(8)) || GlobalFunc_8373(9)) || GlobalFunc_8373(10)) || GlobalFunc_8373(11)) || GlobalFunc_8373(12)) || GlobalFunc_8373(13))
	{
		iLocal_575++;
		iVar22 = iLocal_575;
	}
	iVar23 = -1;
	if (((GlobalFunc_8373(14) || GlobalFunc_8373(15)) || GlobalFunc_8373(16)) || GlobalFunc_8373(17))
	{
		iLocal_575++;
		iVar23 = iLocal_575;
	}
	iVar24 = -1;
	if ((GlobalFunc_8373(18) || GlobalFunc_8373(19)) || GlobalFunc_8373(20))
	{
		iLocal_575++;
		iVar24 = iLocal_575;
	}
	iVar25 = -1;
	if (GlobalFunc_8373(21))
	{
		iLocal_575++;
		iVar25 = iLocal_575;
	}
	iVar26 = -1;
	if ((((((GlobalFunc_8373(0) || GlobalFunc_8373(1)) || GlobalFunc_8373(2)) || GlobalFunc_8373(3)) || GlobalFunc_8373(4)) || GlobalFunc_8373(5)) || GlobalFunc_8373(6))
	{
		iLocal_575++;
		iVar26 = iLocal_575;
	}
	iVar27 = -1;
	if (((((GlobalFunc_8373(22) || GlobalFunc_8373(23)) || GlobalFunc_8373(24)) || GlobalFunc_8373(25)) || GlobalFunc_8373(26)) || GlobalFunc_8373(27))
	{
		iLocal_575++;
		iVar27 = iLocal_575;
	}
	iVar28 = -1;
	if (GlobalFunc_8329() == 0)
	{
		iVar29 = 21;
	}
	else if (GlobalFunc_8329() == 1)
	{
		iVar29 = 22;
	}
	else if (GlobalFunc_8329() == 2)
	{
		iVar29 = 23;
	}
	if (HUD::DOES_BLIP_EXIST(Global_67138.f_208[iVar29]))
	{
		iLocal_575++;
		iVar28 = iLocal_575;
	}
	iVar17 = 0;
	iVar30 = 0;
	while (iVar30 <= iLocal_575)
	{
		if (Local_168[0 /*7*/][0] == iVar30)
		{
			if (iVar30 == 0)
			{
				iLocal_88 = 0;
				StringCopy(&(Local_91.f_51), "PIM_QGPS0", 16);
			}
			else if (iVar30 == 1)
			{
				iLocal_88 = 1;
				StringCopy(&(Local_91.f_51), "BLIP_40", 16);
			}
			else if (iVar30 == iVar19)
			{
				iLocal_88 = 10;
				StringCopy(&(Local_91.f_51), "SPPIM_ATM", 16);
			}
			else if (iVar30 == iVar20)
			{
				iLocal_88 = 11;
				StringCopy(&(Local_91.f_51), "BLIP_110", 16);
			}
			else if (iVar30 == iVar21)
			{
				iLocal_88 = 12;
				StringCopy(&(Local_91.f_51), "BLIP_72", 16);
			}
			else if (iVar30 == iVar22)
			{
				iLocal_88 = 13;
				StringCopy(&(Local_91.f_51), "PIM_LECLTH", 16);
			}
			else if (iVar30 == iVar23)
			{
				iLocal_88 = 14;
				StringCopy(&(Local_91.f_51), "PIM_MECLTH", 16);
			}
			else if (iVar30 == iVar24)
			{
				iLocal_88 = 15;
				StringCopy(&(Local_91.f_51), "PIM_HECLTH", 16);
			}
			else if (iVar30 == iVar25)
			{
				iLocal_88 = 18;
				StringCopy(&(Local_91.f_51), "BLIP_362", 16);
			}
			else if (iVar30 == iVar26)
			{
				iLocal_88 = 16;
				StringCopy(&(Local_91.f_51), "BLIP_71", 16);
			}
			else if (iVar30 == iVar27)
			{
				iLocal_88 = 17;
				StringCopy(&(Local_91.f_51), "BLIP_75", 16);
			}
			else if (iVar30 == iVar28)
			{
				iLocal_88 = 19;
				StringCopy(&(Local_91.f_51), "BLIP_357", 16);
			}
			else
			{
				iVar17 = 0;
				while (iVar17 < 8)
				{
					if (iVar30 == iVar8[iVar17])
					{
						iLocal_88 = (2 + iVar17);
						StringCopy(&Var31, func_408(Global_87300[iVar17 /*17*/].f_5), 16);
						Local_91.f_51 = { Var31 };
					}
					iVar17++;
				}
			}
		}
		iVar30++;
	}
	iVar7 = 1;
	GlobalFunc_7830(0, &(Local_91.f_51), 0, iVar7, 0, 0);
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael1")) > 0)
	{
		iVar7 = 0;
	}
	if (Local_91.f_55 == 0)
	{
		if (iVar7 == 1)
		{
			bLocal_541 = true;
		}
		else
		{
			bLocal_541 = false;
		}
	}
	if (func_26())
	{
		GlobalFunc_7830(1, "PIM_TINVE", 0, 1, 0, 0);
		if (Local_91.f_55 == 1)
		{
			bLocal_541 = true;
		}
	}
	else
	{
		GlobalFunc_7830(1, "PIM_TINVE", 0, 0, 0, 0);
		if (Local_91.f_55 == 1)
		{
			bLocal_541 = false;
		}
	}
	if ((((((GlobalFunc_756() && !GlobalFunc_39(6)) && !GlobalFunc_39(7)) && !GlobalFunc_39(10)) && !GlobalFunc_39(9)) && !GlobalFunc_39(5)) && GRAPHICS::_0x5E657EF1099EDD65(2))
	{
		GlobalFunc_7830(2, "PIM_TOBJ", 0, 1, 0, 0);
		if (Local_91.f_55 == 2)
		{
			bLocal_541 = true;
		}
	}
	else
	{
		GlobalFunc_7830(2, "PIM_TOBJ", 0, 0, 0, 0);
		if (Local_91.f_55 == 2)
		{
			bLocal_541 = false;
		}
	}
	if (GRAPHICS::_0x5E657EF1099EDD65(1))
	{
		GlobalFunc_7830(3, "PIM_THELP", 0, 1, 0, 0);
		if (Local_91.f_55 == 3)
		{
			bLocal_541 = true;
		}
	}
	else
	{
		GlobalFunc_7830(3, "PIM_THELP", 0, 0, 0, 0);
		if (Local_91.f_55 == 3)
		{
			bLocal_541 = false;
		}
	}
	iVar35 = func_364(0, 0, 60);
	if (iLocal_588 != iVar35)
	{
		iLocal_539 = 1;
		iLocal_588 = iVar35;
	}
	if (iVar35 == 0)
	{
		GlobalFunc_7830(4, "CM_IN_TIT", 0, 1, 0, 0);
		if (Local_91.f_55 == 4)
		{
			bLocal_541 = true;
		}
	}
	else
	{
		GlobalFunc_7830(4, "CM_IN_TIT", 0, 0, 0, 0);
		if (Local_91.f_55 == 4)
		{
			bLocal_541 = false;
		}
	}
	if (Local_91.f_55 == 0)
	{
		iVar6 = 1;
	}
	if (iVar6 && iVar7)
	{
		GlobalFunc_1315(0, 1, 0, 0, 0);
		iLocal_540 = 1;
	}
	else
	{
		GlobalFunc_1315(0, 0, 0, 0, 0);
		iLocal_540 = 0;
	}
}

char* func_408(int iParam0)//Position - 0x53B91
{
	int iVar0;
	
	switch (iParam0)
	{
		case 87:
			return "M_JHP1A";
			break;
		
		case 89:
			return "M_JHP1B";
			break;
		
		case 88:
			return "M_JHP2A";
			break;
		
		case 72:
			return "M_DHP1";
			break;
		
		case 73:
			return "M_DHP2b";
			break;
		
		case 78:
			return "M_FHPRA";
			break;
		
		case joaat("mpsv_lp0_31"):
			return "M_FHPRB";
			break;
		
		case 83:
			return "PIM_TRAIN";
			break;
		
		case 33:
			return "M_FB4P1";
			break;
		
		case 34:
			return "M_FB4P2";
			break;
		
		case 35:
			return "M_FB4P3";
			break;
		
		case 36:
			return "M_FB4P4";
			break;
		
		case 37:
			return "M_FB4P5";
			break;
		
		case 47:
			return "PIM_FRANK";
			break;
		
		case 62:
			return "PIM_MIKE";
			break;
		
		case 19:
			if (GlobalFunc_8329() == 1)
			{
				return "PIM_MIKE";
			}
			break;
	}
	iVar0 = GlobalFunc_3059(iParam0);
	switch (iVar0)
	{
		case 0:
			return "PIM_AGEN";
			break;
		
		case 1:
			return "PIM_ARM";
			break;
		
		case 2:
			return "PIM_ASSA";
			break;
		
		case 3:
			return "PIM_CARS";
			break;
		
		case 4:
			return "PIM_CHIN";
			break;
		
		case 5:
			return "PIM_DOCKS";
			break;
		
		case 6:
			return "PIM_DOCKS";
			break;
		
		case 7:
			return "PIM_EXIL";
			break;
		
		case 8:
			return "PIM_FAM";
			break;
		
		case 9:
			return "PIM_FIB";
			break;
		
		case 10:
			return "PIM_FIB";
			break;
		
		case 11:
			return "PIM_FIB";
			break;
		
		case 12:
			return "PIM_FIB";
			break;
		
		case 13:
			return "PIM_FIB";
			break;
		
		case 14:
			return "PIM_FINAL";
			break;
		
		case 15:
			return "PIM_BIGS";
			break;
		
		case 16:
			return "PIM_BIGS";
			break;
		
		case 17:
			return "PIM_BIGS";
			break;
		
		case 18:
			return "PIM_BIGS";
			break;
		
		case 19:
			return "PIM_FRANK";
			break;
		
		case 20:
			return "PIM_JEWEL";
			break;
		
		case 21:
			return "PIM_JEWEL";
			break;
		
		case 22:
			return "PIM_LAM";
			break;
		
		case 23:
			return "PIM_LEST";
			break;
		
		case 24:
			return "PIM_MART";
			break;
		
		case 25:
			return "PIM_MIKE";
			break;
		
		case 26:
			return "";
			break;
		
		case 27:
			return "";
			break;
		
		case 28:
			return "PIM_RURAL";
			break;
		
		case 29:
			return "PIM_SHRINK";
			break;
		
		case 30:
			return "PIM_SOL";
			break;
		
		case 31:
			return "PIM_TREV";
			break;
	}
	return "";
}









float func_417()//Position - 0x54952
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (!GlobalFunc_1313())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
		fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
		fVar3 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
		fVar4 = (fVar3 / fVar2);
		return fVar4;
	}
	return 1f;
}




void func_421()//Position - 0x54B21
{
	Local_91.f_55 = 0;
	iLocal_562 = iLocal_561;
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iLocal_528, &iLocal_529);
	func_423();
	func_323();
	func_422(&Local_147);
	iLocal_539 = 1;
	iLocal_534 = MISC::GET_GAME_TIMER();
}

void func_422(var uParam0)//Position - 0x54B58
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	Global_17234 = (((0.034722f / func_417()) * (3f / func_417())) + 0.05f);
	uParam0->f_13 = 0.188f;
	uParam0->f_13.f_1 = (0.1f + 0.034722f);
	uParam0->f_13.f_2 = Global_17235;
	uParam0->f_13.f_3 = 0.09f;
	if (GlobalFunc_8329() == 0)
	{
		iVar4 = 143;
	}
	else if (GlobalFunc_8329() == 1)
	{
		iVar4 = 144;
	}
	else
	{
		iVar4 = 145;
	}
	iLocal_576 = GlobalFunc_8329();
	HUD::GET_HUD_COLOUR(iVar4, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_13.f_4 = uVar0;
	uParam0->f_13.f_5 = uVar1;
	uParam0->f_13.f_6 = uVar2;
	uParam0->f_13.f_7 = uVar3;
	*uParam0 = 1;
	uParam0->f_1 = 0.8f;
	uParam0->f_2 = 1.05f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 0;
	uParam0->f_9 = 0f;
	uParam0->f_8 = 0f;
	uParam0->f_11 = 0.182f;
	uParam0->f_11.f_1 = 0.107f;
	GlobalFunc_6546(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_530), sLocal_530, sLocal_530);
}

void func_423()//Position - 0x54C62
{
	int iVar0;
	int iVar1;
	
	iVar1 = GlobalFunc_4917(GlobalFunc_8329());
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (GlobalFunc_10909(iVar1, 9, func_424(2, (iVar0 - 1), 9)))
		{
			Local_240[iLocal_569 /*2*/] = 9;
			Local_240[iLocal_569 /*2*/].f_1 = func_424(2, (iVar0 - 1), 9);
			if (GlobalFunc_10958(PLAYER::PLAYER_PED_ID(), 9, func_424(2, (iVar0 - 1), 9)))
			{
				Local_168[1 /*7*/][2] = iLocal_569;
			}
			iLocal_569++;
			iLocal_572 = (iLocal_569 - 1);
		}
		if (GlobalFunc_10909(iVar1, 14, func_424(2, (iVar0 - 1), 14)))
		{
			Local_240[iLocal_569 /*2*/] = 14;
			Local_240[iLocal_569 /*2*/].f_1 = func_424(2, (iVar0 - 1), 14);
			if (GlobalFunc_10958(PLAYER::PLAYER_PED_ID(), 14, func_424(2, (iVar0 - 1), 14)))
			{
				Local_168[1 /*7*/][2] = iLocal_569;
			}
			iLocal_569++;
			iLocal_572 = (iLocal_569 - 1);
		}
		if (iVar0 == 0)
		{
			Local_240[iLocal_569 /*2*/] = 14;
			Local_240[iLocal_569 /*2*/].f_1 = 0;
			iLocal_569++;
			iLocal_572 = (iLocal_569 - 1);
		}
		iVar0++;
	}
	if (GlobalFunc_8329() == 1)
	{
		if (GlobalFunc_10909(iVar1, 8, 9))
		{
			Local_240[iLocal_569 /*2*/] = 8;
			Local_240[iLocal_569 /*2*/].f_1 = 9;
			if (GlobalFunc_10958(PLAYER::PLAYER_PED_ID(), 8, 9))
			{
				Local_168[1 /*7*/][2] = iLocal_569;
			}
			iLocal_569++;
			iLocal_572 = (iLocal_569 - 1);
		}
	}
	iVar0 = 0;
	while (iVar0 < 76)
	{
		if (iVar0 > 0)
		{
			if (GlobalFunc_10909(iVar1, 14, func_424(1, (iVar0 - 1), 14)))
			{
				Local_293[iLocal_570 /*2*/] = 14;
				Local_293[iLocal_570 /*2*/].f_1 = func_424(1, (iVar0 - 1), 14);
				if (GlobalFunc_10958(PLAYER::PLAYER_PED_ID(), 14, func_424(1, (iVar0 - 1), 14)))
				{
					Local_168[1 /*7*/][1] = iLocal_570;
				}
				iLocal_570++;
				iLocal_573 = (iLocal_570 - 1);
			}
		}
		else
		{
			Local_293[iLocal_570 /*2*/] = 14;
			Local_293[iLocal_570 /*2*/].f_1 = 1;
			iLocal_570++;
			iLocal_573 = (iLocal_570 - 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (iVar0 > 0)
		{
			if (GlobalFunc_10909(iVar1, 14, func_424(0, (iVar0 - 1), 14)))
			{
				Local_446[iLocal_571 /*2*/] = 14;
				Local_446[iLocal_571 /*2*/].f_1 = func_424(0, (iVar0 - 1), 14);
				if (GlobalFunc_10958(PLAYER::PLAYER_PED_ID(), 14, func_424(0, (iVar0 - 1), 14)))
				{
					Local_168[1 /*7*/][0] = iLocal_571;
				}
				iLocal_571++;
				iLocal_574 = (iLocal_571 - 1);
			}
		}
		else
		{
			Local_446[iLocal_571 /*2*/] = 14;
			Local_446[iLocal_571 /*2*/].f_1 = 0;
			iLocal_571++;
			iLocal_574 = (iLocal_571 - 1);
		}
		iVar0++;
	}
}

int func_424(int iParam0, int iParam1, int iParam2)//Position - 0x54F1F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == 1)
	{
		if (GlobalFunc_8329() == 0)
		{
			iVar0 = (58 + iParam1);
			if (iVar0 == 60 || iVar0 == 59)
			{
				return -99;
			}
			if (iVar0 > 110)
			{
				return -99;
			}
			else
			{
				return iVar0;
			}
		}
		else if (GlobalFunc_8329() == 1)
		{
			iVar0 = (82 + iParam1);
			if (iVar0 > 156)
			{
				return -99;
			}
			else
			{
				return iVar0;
			}
		}
		else if (GlobalFunc_8329() == 2)
		{
			iVar0 = (88 + iParam1);
			if (iVar0 > 152)
			{
				return -99;
			}
			else
			{
				return iVar0;
			}
		}
	}
	else
	{
		iVar3 = 0;
		iVar4 = GlobalFunc_8329();
		iVar5 = GlobalFunc_4917(iVar4);
		if (iVar4 == 0)
		{
			if (iParam2 == 14)
			{
				iVar2 = 10;
				iVar1 = 56;
			}
			else if (iParam2 == 9)
			{
				iVar2 = 9;
				iVar1 = 14;
			}
		}
		else if (iVar4 == 1)
		{
			if (iParam2 == 14)
			{
				iVar2 = 10;
				iVar1 = 80;
			}
			else if (iParam2 == 9)
			{
				iVar2 = 5;
				iVar1 = 10;
			}
		}
		else if (iVar4 == 2)
		{
			if (iParam2 == 14)
			{
				iVar2 = 10;
				iVar1 = 86;
			}
			else if (iParam2 == 9)
			{
				iVar2 = 9;
				iVar1 = 16;
			}
		}
		while (iVar2 <= iVar1)
		{
			if (iParam0 == 0)
			{
				if (GlobalFunc_6665(iVar5, iParam2, iVar2))
				{
					if (iVar4 == 2 && iVar2 != 18)
					{
						if (iVar3 == iParam1)
						{
							return iVar2;
						}
						else
						{
							iVar3++;
						}
					}
					else if (iVar4 == 1 && iVar2 != 40)
					{
						if (iVar3 == iParam1)
						{
							return iVar2;
						}
						else
						{
							iVar3++;
						}
					}
					else if (iVar4 == 0)
					{
						if (iVar3 == iParam1)
						{
							return iVar2;
						}
						else
						{
							iVar3++;
						}
					}
				}
			}
			else if (iParam0 == 2)
			{
				if (GlobalFunc_6666(iVar5, iParam2, iVar2))
				{
					if (iVar3 == iParam1)
					{
						return iVar2;
					}
					else
					{
						iVar3++;
					}
				}
			}
			iVar2++;
		}
		if (iVar2 > iVar1)
		{
			return -99;
		}
	}
	return -99;
}

int func_425()//Position - 0x55111
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_530))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_530, 0);
		iLocal_531 = 1;
		return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_530);
	}
	return 1;
}

char* func_426()//Position - 0x5513B
{
	switch (GlobalFunc_8329())
	{
		case 0:
			return "ShopUI_Title_Graphics_Michael";
			break;
		
		case 1:
			return "ShopUI_Title_Graphics_Franklin";
			break;
		
		case 2:
			return "ShopUI_Title_Graphics_Trevor";
			break;
	}
	return "";
}

int func_427()//Position - 0x55182
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(uLocal_89, 0))
	{
		iVar0 = 0;
		if (!PAD::_IS_USING_KEYBOARD(0))
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 244))
			{
				iVar0 = 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(0, 244))
		{
			iVar0 = 1;
		}
		if ((iVar0 && !func_4()) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 199))
		{
			if (!PAD::_IS_USING_KEYBOARD(0))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_532) >= 350)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
					MISC::SET_BIT(&uLocal_89, 0);
					iLocal_532 = MISC::GET_GAME_TIMER();
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					return 1;
				}
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
				MISC::SET_BIT(&uLocal_89, 0);
				iLocal_532 = MISC::GET_GAME_TIMER();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				return 1;
			}
		}
		else
		{
			iLocal_532 = MISC::GET_GAME_TIMER();
			return 0;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 244))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_89, 0);
	}
	return 0;
}

void func_428()//Position - 0x5526B
{
	var uVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	
	uVar1 = func_432();
	sVar2 = "IgnoreMoverBlend_filter";
	if (GlobalFunc_2561() && func_430() == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(0, 174))
		{
			iLocal_563 = 1;
		}
		else
		{
			iLocal_563 = 0;
		}
		iVar3 = 0;
		iLocal_579 = GlobalFunc_8329();
		if (iLocal_579 != iLocal_578)
		{
			iLocal_578 = iLocal_579;
			iVar3 = 1;
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(0, 175) && (MISC::GET_GAME_TIMER() - iLocal_534) > 250) && !MISC::IS_BIT_SET(Global_2544648, 10)) || iVar3)
		{
			iLocal_534 = MISC::GET_GAME_TIMER();
			iLocal_562++;
			if (iLocal_562 > func_295(5))
			{
				iLocal_562 = 0;
			}
			StringCopy(&Global_2545339, func_434(), 32);
			iLocal_564 = 1;
			MISC::SET_BIT(&Global_2544648, 10);
		}
	}
	else
	{
		iLocal_563 = 0;
	}
	switch (iLocal_560)
	{
		case 0:
			if (GlobalFunc_2561() && func_430() == 0)
			{
				if (iLocal_564)
				{
					iLocal_561 = iLocal_562;
					StringCopy(&Global_2545339, func_434(), 32);
					iLocal_564 = 0;
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
					{
						STREAMING::REQUEST_ANIM_DICT(sVar1);
					}
					if (iLocal_563 && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
						{
							uVar0 = func_429();
							if ((!TASK::IS_PLAYING_PHONE_GESTURE_ANIM(PLAYER::PLAYER_PED_ID()) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1)) && !MISC::IS_STRING_NULL_OR_EMPTY(uVar0))
							{
								TASK::TASK_PLAY_PHONE_GESTURE_ANIMATION(PLAYER::PLAYER_PED_ID(), sVar1, sVar0, sVar2, 0.25f, 0.25f, 0, 0);
								iLocal_560 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_2561() && func_430() == 0)
			{
				if (!TASK::IS_PLAYING_PHONE_GESTURE_ANIM(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_560 = 0;
				}
			}
			else
			{
				if (TASK::IS_PLAYING_PHONE_GESTURE_ANIM(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_STOP_PHONE_GESTURE_ANIMATION(PLAYER::PLAYER_PED_ID(), -1000f);
				}
				iLocal_560 = 0;
			}
			break;
	}
}

char* func_429()//Position - 0x5542F
{
	if (func_296() == 0)
	{
		switch (iLocal_561)
		{
			case 0:
				return "FINGER_POINT";
				break;
			
			case 1:
				return "STRETCH_NECK";
				break;
		}
	}
	else if (func_296() == 1)
	{
		switch (iLocal_561)
		{
			case 0:
				return "CHEST_BUMP";
				break;
			
			case 1:
				return "WEST_COAST";
				break;
		}
	}
	else if (func_296() == 2)
	{
		switch (iLocal_561)
		{
			case 0:
				return "PROUD_FINGER";
				break;
			
			case 1:
				return "THROAT_SLIT";
				break;
			}
	}
	return "";
}

int func_430()//Position - 0x554D6
{
	if (Global_16727 == 6 || Global_16727 > 6)
	{
		return 1;
	}
	return 0;
}


char* func_432()//Position - 0x55514
{
	if (func_296() == 0)
	{
		return "cellphone@self@michael@";
	}
	else if (func_296() == 1)
	{
		return "cellphone@self@franklin@";
	}
	else if (func_296() == 2)
	{
		return "cellphone@self@trevor@";
	}
	return "";
}

int func_433()//Position - 0x55555
{
	float fVar0;
	
	fVar0 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (iLocal_543)
	{
		fLocal_544 = fVar0;
		iLocal_543 = 0;
		return 0;
	}
	if (fLocal_544 != fVar0)
	{
		fLocal_544 = fVar0;
		return 1;
	}
	fLocal_544 = fVar0;
	return 0;
}

char* func_434()//Position - 0x55595
{
	if (func_296() == 0)
	{
		switch (iLocal_561)
		{
			case 0:
				return "SELF_M1";
				break;
			
			case 1:
				return "SELF_M3";
				break;
		}
	}
	else if (func_296() == 1)
	{
		switch (iLocal_561)
		{
			case 0:
				return "SELF_F1";
				break;
			
			case 1:
				return "SELF_F3";
				break;
		}
	}
	else if (func_296() == 2)
	{
		switch (iLocal_561)
		{
			case 0:
				return "SELF_T2";
				break;
			
			case 1:
				return "SELF_T3";
				break;
			}
	}
	return "";
}


void func_436()//Position - 0x55655
{
	int iVar0;
	int iVar1;
	
	iLocal_540 = 0;
	bLocal_541 = false;
	iLocal_545 = 0;
	iLocal_538 = 0;
	iLocal_537 = 0;
	iLocal_569 = 0;
	iLocal_570 = 0;
	iLocal_571 = 0;
	iLocal_586 = 0;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (iVar1 == 0)
			{
			}
			else
			{
				Local_168[iVar1 /*7*/][iVar0] = 0;
			}
			iVar0++;
		}
		iVar1++;
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_568);
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
	func_21();
	func_439();
	GlobalFunc_4988(1, -1);
	GlobalFunc_2874(0);
}



void func_439()//Position - 0x557A1
{
	if (iLocal_531)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_530))
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_530);
		}
		iLocal_531 = 0;
	}
}

