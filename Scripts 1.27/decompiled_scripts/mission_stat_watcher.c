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
	struct<563> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	float fLocal_628 = 0f;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	bool bLocal_631 = 0;
	int iLocal_632 = 0;
	bool bLocal_633 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
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
	iLocal_622 = iLocal_621;
	iLocal_623 = iLocal_622;
	fLocal_628 = 100f;
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	Global_54744 = 0;
	Global_54751 = 0;
	iVar0 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_108();
		Global_66845 = 0;
		Global_54745 = 0;
		Global_54771 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iVar1 = 0;
	SYSTEM::WAIT(0);
	func_106();
	while (!Global_54743)
	{
		SYSTEM::WAIT(200);
		if (Global_54751)
		{
			func_108();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	Global_54758 = 0;
	Global_54745 = 1;
	while (!Global_54744)
	{
		if (Global_66845 > 0)
		{
			func_100();
			if (Global_54778 == -1)
			{
				Global_54778 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - Global_54778) > 1000)
			{
				func_99();
			}
		}
		if (Global_54751)
		{
			func_108();
			Global_54745 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		SYSTEM::WAIT(0);
	}
	Global_54745 = 0;
	if (func_98())
	{
		while (func_98())
		{
			SYSTEM::WAIT(0);
		}
	}
	bVar2 = false;
	while (!bVar2)
	{
		if (!Global_54746 == iLocal_630)
		{
			if (Global_54746)
			{
				SYSTEM::SETTIMERB(0);
				iLocal_620 = 0;
				Global_54761 = 0;
			}
			iLocal_630 = Global_54746;
		}
		while (Global_54750)
		{
			SYSTEM::WAIT(1000);
		}
		if (Global_54744 && !Global_54751)
		{
			if (Global_54743 || iLocal_632)
			{
				Global_54748 = 0;
				if (bLocal_631)
				{
				}
				if (Global_54744)
				{
				}
				if (!bLocal_631 == Global_54744)
				{
					func_97(&Local_44);
					Local_44.f_562 = 1;
					func_96();
					func_95();
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < Global_66845)
					{
						if (Global_66846[iVar3 /*9*/] > 0)
						{
							if (Global_54975[Global_66846[iVar3 /*9*/] /*13*/] == 4)
							{
								if (!Global_54975[Global_66846[iVar3 /*9*/] /*13*/].f_7)
								{
									if (Global_54975[Global_66846[iVar3 /*9*/] /*13*/].f_3)
									{
										if (Global_66846[iVar3 /*9*/].f_1 == 0)
										{
											Global_66846[iVar3 /*9*/].f_3 = 5;
										}
									}
								}
							}
						}
						iVar3++;
					}
					bVar4 = false;
					if ((Global_68505 && !Global_54740) || Global_54752)
					{
						bVar4 = true;
					}
					bVar5 = false;
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
						bVar5 = true;
					}
					else
					{
						if (Global_90001.f_8)
						{
							bVar5 = true;
						}
						if (Global_54770)
						{
							bVar5 = true;
						}
					}
					if (func_94(0))
					{
						bVar5 = true;
						Global_54770 = 1;
					}
					iVar6 = Global_66996;
					if (Global_54753)
					{
						func_91(Global_54754);
						iVar0 = 2;
						func_90(&Local_44, "HISHPA", &Global_54765, 0);
						if (iVar6 == 69 || iVar6 == 70)
						{
							func_89(&Local_44, 3, "ACTATAKE_AG", "", Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[Global_54754 /*23*/], 0, 0, 0);
						}
						else
						{
							func_89(&Local_44, 3, "POTATAKE", "", Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[Global_54754 /*23*/], 0, 0, 0);
						}
						iVar7 = 0;
						iVar7 = 0;
						while (iVar7 < Global_86597[Global_54754 /*38*/].f_37)
						{
							if (Global_86597[Global_54754 /*38*/].f_31[iVar7] > 0)
							{
								func_89(&Local_44, 3, func_88(Global_86597[Global_54754 /*38*/].f_25[iVar7]), "", (-1 * Global_86597[Global_54754 /*38*/].f_31[iVar7]), 0, 0, 0);
							}
							iVar7++;
						}
						if ((((Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[Global_54754 /*23*/].f_2[0] > 0 || iVar6 == 74) || iVar6 == 75) || iVar6 == 69) || iVar6 == 70)
						{
							func_89(&Local_44, 3, "ACTATAKE_M", "", Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[Global_54754 /*23*/].f_2[0], 0, 0, 0);
						}
						if ((Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[Global_54754 /*23*/].f_2[1] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_89(&Local_44, 3, "ACTATAKE_F", "", Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[Global_54754 /*23*/].f_2[1], 0, 0, 0);
						}
						if ((Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[Global_54754 /*23*/].f_2[2] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_89(&Local_44, 3, "ACTATAKE_T", "", Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[Global_54754 /*23*/].f_2[2], 0, 0, 0);
						}
						if (Global_86587.f_7 > 0)
						{
							func_89(&Local_44, 3, "ACTATAKE_L", "", Global_86587.f_7, 0, 0, 0);
						}
						iVar8 = func_86(func_87(Global_54754));
						iVar9 = 0;
						iVar10 = 0;
						iVar7 = 0;
						while (iVar7 < Global_86396[iVar8 /*19*/])
						{
							if (!func_85(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar8 /*6*/][iVar7]))
							{
								iVar9 = (iVar9 + Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[Global_54754 /*23*/].f_17[iVar7]);
							}
							else
							{
								iVar10 = (iVar10 + Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[Global_54754 /*23*/].f_17[iVar7]);
							}
							iVar7++;
						}
						if (iVar6 == 74 || iVar6 == 75)
						{
							func_89(&Local_44, 3, "LACKTAKE", "", iVar9, 0, 0, 0);
						}
						else
						{
							func_89(&Local_44, 3, "CREWTAKE", "", iVar9, 0, 0, 0);
						}
						if (iVar10 > 0)
						{
							if (!func_94(0))
							{
								switch (iVar6)
								{
									case 90:
										STATS::STAT_SET_INT(joaat("hcs_penalty_jewel_funeral"), iVar10, 1);
										break;
									
									case 93:
										STATS::STAT_SET_INT(joaat("hcs_penalty_paleto_funeral"), iVar10, 1);
										break;
									
									case 69:
									case 70:
										STATS::STAT_SET_INT(joaat("hcs_penalty_bureau_funeral"), iVar10, 1);
										break;
									
									case 84:
									case 85:
										STATS::STAT_SET_INT(joaat("hcs_penalty_bigs_funeral"), iVar10, 1);
										break;
									}
							}
							func_89(&Local_44, 3, "HSTENDPFUN", "", iVar10, 0, 0, 0);
						}
					}
					else
					{
						func_90(&Local_44, "MISHPA", &Global_54765, 0);
					}
					if (Global_66845 > 0)
					{
						func_70(&Local_44);
					}
					if (!Global_54740)
					{
						func_63();
					}
					while (!bVar5)
					{
						if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
						{
							bVar5 = true;
						}
						SYSTEM::WAIT(0);
					}
					if ((bVar5 || Global_54770) && !bVar4)
					{
						if (!Global_54752)
						{
							func_59(&Local_44, 0, 0);
						}
						bVar11 = false;
						if (!Global_66995)
						{
							switch (Global_66996)
							{
								case 50:
								case 51:
								case 52:
									AUDIO::SET_AUDIO_FLAG("HoldMissionCompleteWhenPrepared", 1);
									func_55(1);
									bVar11 = true;
									break;
								
								default:
									AUDIO::SET_AUDIO_FLAG("HoldMissionCompleteWhenPrepared", 1);
									func_55(0);
									bVar11 = true;
									break;
							}
						}
						else
						{
							AUDIO::SET_AUDIO_FLAG("HoldMissionCompleteWhenPrepared", 1);
							func_55(1);
							bVar11 = true;
						}
						iVar1 = func_54();
						HUD::REQUEST_ADDITIONAL_TEXT("MISHSTA", 3);
						while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
						{
							SYSTEM::WAIT(0);
						}
						bLocal_633 = true;
						while (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							SYSTEM::WAIT(0);
						}
						while (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
						{
							SYSTEM::WAIT(0);
						}
						func_59(&Local_44, 1, 0);
						AUDIO::SET_AUDIO_FLAG("HoldMissionCompleteWhenPrepared", 0);
						if (bVar11)
						{
							while (!AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI())
							{
								SYSTEM::WAIT(0);
							}
						}
						AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
					}
					if (Global_54743)
					{
						iLocal_632 = 1;
						Global_54743 = 0;
					}
					SYSTEM::SETTIMERA(0);
				}
				if (bLocal_633 && !Global_54751)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
					{
						func_51(0);
					}
					if (Global_66845 > 0 || Global_54740)
					{
						if (Global_54770)
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						}
						if (iVar1 && !Global_54740)
						{
							Global_35729 = 1;
						}
						if (!Global_54752)
						{
							if (func_21(&Local_44, 0, SYSTEM::TO_FLOAT(iVar0), 0, 0, 0))
							{
								Global_54751 = 1;
							}
							func_20();
						}
						if (Global_54770)
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						}
					}
					func_19(1);
					if (!CAM::IS_SCREEN_FADED_IN())
					{
						func_17();
					}
					if (!func_16(0))
					{
						switch (func_14("AM_H_PASS"))
						{
							case 2:
								func_11("AM_H_PASS", 3, 2000, 2500, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_10(0);
								break;
							}
						}
				}
				bLocal_631 = Global_54744;
				if (Global_54741)
				{
				}
				else
				{
					PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX());
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())) < 1)
					{
						Global_54752 = 1;
					}
					if (((((func_98() || func_9()) || Global_54751) || Global_68514) || Global_54752) || !bLocal_633)
					{
						Global_54740 = 0;
						Global_54744 = 0;
						iLocal_632 = 0;
						Global_54747 = 0;
						Global_54748 = 0;
						Global_54758 = 0;
						Global_54761 = 0;
						func_19(0);
						func_2();
						Global_54751 = 0;
						bVar2 = true;
					}
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	func_1(&Local_44);
	Global_24693 = 0;
	Global_54755 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)//Position - 0x8BA
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		uParam0->f_564 = 0;
	}
	if (!Global_68513)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_68514)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_94(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_19(0);
}

void func_2()//Position - 0x960
{
	if (Global_54750)
	{
		return;
	}
	Global_54759 = 0;
	Global_66845 = 0;
	Global_54761 = 0;
	if (Global_54758)
	{
	}
	Global_54758 = 0;
	func_19(0);
	func_8();
	Global_66997 = 0;
	Global_54749 = 1;
	func_6();
	func_5();
	func_4();
	func_3();
	Global_54740 = 0;
	Global_54770 = 0;
	Global_54778 = -1;
}

void func_3()//Position - 0x9B6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_67032[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_67041 = 0;
}

void func_4()//Position - 0x9E3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_66998[iVar0 /*2*/] = 0;
		Global_66998[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_67031 = 0;
}

void func_5()//Position - 0xA1A
{
	Global_54909 = 0;
}

void func_6()//Position - 0xA26
{
	Global_54769 = 0;
	Global_54773 = func_7(joaat("sp0_shots"));
	Global_54772 = func_7(joaat("sp0_hits"));
	Global_54775 = func_7(joaat("sp1_shots"));
	Global_54774 = func_7(joaat("sp1_hits"));
	Global_54777 = func_7(joaat("sp2_shots"));
	Global_54776 = func_7(joaat("sp2_hits"));
}

int func_7(int iParam0)//Position - 0xA7A
{
	var uVar0;
	
	STATS::STAT_GET_INT(iParam0, &uVar0, -1);
	return uVar0;
}

void func_8()//Position - 0xA8E
{
	int iVar0;
	
	Global_54779 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_54780[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

var func_9()//Position - 0xAB8
{
	return Global_1315900;
}

void func_10(int iParam0)//Position - 0xAC4
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1]), iVar0);
	}
}

void func_11(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xB06
{
	func_12(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_12(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xB27
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount < 9)
	{
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/]), sParam0, 16);
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_4), sParam1, 16);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_9 = iParam5;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_11 = iParam6;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_12 = uParam2;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_13 = iParam7;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_14 = iParam8;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = -1;
		}
		Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount++;
		func_13();
	}
}

void func_13()//Position - 0xCFA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 0))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 1))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 2))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_14(char* sParam0)//Position - 0xE1A
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_95999))
	{
		return 1;
	}
	if (func_15(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_15(char* sParam0)//Position - 0xE41
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::ARE_STRINGS_EQUAL(uParam0, &(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0xE7C
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1], iVar0);
	}
	return 0;
}

void func_17()//Position - 0xEBF
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_18();
}

void func_18()//Position - 0xECF
{
	Global_17098.f_134 = 1;
}

void func_19(int iParam0)//Position - 0xEDD
{
	Global_68505 = iParam0;
	Global_68506 = iParam0;
}

void func_20()//Position - 0xEF1
{
	Global_17098.f_6 = 1;
}

int func_21(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xEFF
{
	bool bVar0;
	
	if (MISC::GET_FRAME_COUNT() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = MISC::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (TASK::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			uParam0->f_564 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
	func_49();
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		}
	}
	Global_35463 = 1;
	if (!uParam0->f_563)
	{
		switch (func_46(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 1000, 0);
				break;
			
			default:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_45(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_45(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_45((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_45(30f) - func_45(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_19(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_26(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_25(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = func_25(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = func_25(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_22(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_22(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_559 = func_25((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = func_25((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_25((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = func_25((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_19(0);
			}
			return !bVar0;
		}
	}
	func_19(0);
	return 1;
}

void func_22(var uParam0, bool bParam1)//Position - 0x1551
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_24(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, 1));
	func_23("ES_HELP");
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(215);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_24(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, 1));
		func_23("ES_XPAND");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(216);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_23(char* sParam0)//Position - 0x1614
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_24(var uParam0)//Position - 0x1626
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

float func_25(float fParam0, float fParam1, float fParam2)//Position - 0x1634
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_26(var uParam0, float fParam1, int iParam2)//Position - 0x165B
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_44() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_23(&(uParam0->f_5));
				func_23(&(uParam0->f_13));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_56);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(69);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.15f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
		func_43();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_45((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_44());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	fVar7 = func_42(&(uParam0->f_13));
	if (fVar6 < fVar7)
	{
		fVar6 = (fVar7 + (3f * 0.006f));
	}
	if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
	{
		fVar6 = (fVar6 * 1.3f);
	}
	fVar7 = func_42(&(uParam0->f_550));
	fVar8 = (((0.119f + 0.05f) / func_44()) / 2.5f);
	if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
	{
		if (fVar6 < (fVar7 + (2.6f * fVar8)))
		{
			fVar6 = (fVar7 + (2.6f * fVar8));
		}
	}
	else if (fVar6 < (fVar7 + (1.9f * fVar8)))
	{
		fVar6 = (fVar7 + (2f * fVar8));
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	PAD::SET_INPUT_EXCLUSIVE(2, 215);
	PAD::SET_INPUT_EXCLUSIVE(2, 216);
	PAD::SET_INPUT_EXCLUSIVE(2, 200);
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_39((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	HUD::GET_HUD_COLOUR(1, &uVar13, &uVar14, &uVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, iVar0);
	HUD::SET_TEXT_WRAP(fVar9, fVar10);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_45(6f));
	fVar1 = (fVar1 + (func_45(30f) - func_45((2f * 2f))));
	fVar11 = (fVar2 - func_45((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_25((fVar11 / (0.6f * func_45(25f))), 0f, 1f);
		func_43();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_45((2f - 0.5f)) - 0.001388889f)), fVar6, func_38(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_45((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_45((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_44())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_45(25f))), 0f, 1f);
			func_35(uParam0, iVar17, (fVar1 + func_45(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_45(25f));
		iVar17++;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_45((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_44())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_45(2f));
			fVar12 = func_25((fVar11 / (0.6f * func_45(25f))), 0f, 1f);
			func_43();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_45((2f * 0.5f))), fVar6, func_38(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_45((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_44())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_45(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_29(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_44()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_44()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_44()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_44()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(1);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			func_28(&(uParam0->f_550), fVar20, (fVar1 + func_45((2f * 2f))), 0, 0, 0);
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(0);
			func_43();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			HUD::SET_TEXT_WRAP(fVar20, fVar22);
			HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_45((2f * 2f))), 0);
					break;
				
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_555);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_45((2f * 2f))), 0);
					break;
				
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_45((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						HUD::GET_HUD_COLOUR(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						HUD::GET_HUD_COLOUR(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_27(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_45(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_45(30f) - 2f));
		}
	}
}

float func_27(float fParam0)//Position - 0x2144
{
	return (fParam0 * 0.00078125f);
}

void func_28(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x2154
{
	HUD::SET_TEXT_CENTRE(iParam3);
	HUD::SET_TEXT_FONT(iParam5);
	func_43();
	if (bParam4)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_29(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x2191
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_34(iParam0);
	uVar1 = func_32(iParam0, bParam1);
	if (MISC::GET_HASH_KEY(uVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_31())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_31())
			{
				fVar4 = 1f;
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		Var7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(uVar0, uVar1) };
		Var7.x = (Var7.x * (func_30(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_30(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17235)
			{
				*fParam4 = (*fParam4 * (Global_17235 / *fParam3));
				*fParam3 = Global_17235;
			}
		}
		return 1;
	}
	return 0;
}

float func_30(int iParam0)//Position - 0x22F8
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_31()//Position - 0x2391
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_32(int iParam0, bool bParam1)//Position - 0x23C3
{
	char* sVar0[2];
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17236.f_6048[iParam0 /*16*/])))
	{
		return func_33(&(Global_17236.f_6048[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_33(var uParam0)//Position - 0x27A3
{
	return uParam0;
}

char* func_34(int iParam0)//Position - 0x27AD
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17236.f_5263[iParam0 /*16*/])))
	{
		return func_33(&(Global_17236.f_5263[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

void func_35(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0x27DC
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
	HUD::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, iParam5);
	HUD::SET_TEXT_WRAP(fParam3, fParam4);
	HUD::SET_TEXT_JUSTIFICATION(1);
	HUD::SET_TEXT_SCALE(1f, func_37(14f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_43();
	if (uParam0->f_531[iParam1])
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
		}
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_29(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_32(7, 0), (fParam4 - 0.006f), ((fParam2 + func_45(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_29(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_32(5, 0), (fParam4 - 0.006f), ((fParam2 + func_45(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_29(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_32(6, 0), (fParam4 - 0.006f), ((fParam2 + func_45(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		HUD::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		HUD::SET_TEXT_JUSTIFICATION(2);
	}
	HUD::SET_TEXT_SCALE(1f, func_37(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	HUD::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, iParam5);
	func_36(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_36(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0x2A67
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_43();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_37(18f));
			HUD::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			else
			{
				HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			HUD::SET_TEXT_SCALE(1f, func_37(14f));
			break;
	}
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iVar0);
	switch (iParam5)
	{
		case 11:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_37(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
			}
			break;
		
		case 6:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
		
		case 7:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
		
		case 8:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 15:
		case 14:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 16:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			HUD::SET_TEXT_SCALE(1f, func_37(14f));
		}
		else
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_37(float fParam0)//Position - 0x2DE0
{
	return (fParam0 * 0.025f);
}

float func_38(float fParam0)//Position - 0x2DF0
{
	return (fParam0 * 0.0009259259f);
}

void func_39(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2E00
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_41(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_40(7, iVar0);
		Global_1328872.f_3132[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = iParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = iParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = iParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
	}
}

void func_40(int iParam0, int iParam1)//Position - 0x2F1A
{
	MISC::SET_BIT(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_41(int iParam0, int iParam1)//Position - 0x2F33
{
	return MISC::IS_BIT_SET(Global_1328872.f_3613[iParam0], iParam1);
}

float func_42(char* sParam0)//Position - 0x2F4C
{
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return (HUD::_END_TEXT_COMMAND_GET_WIDTH(1) / 2f);
}

void func_43()//Position - 0x2F61
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
}

float func_44()//Position - 0x2F89
{
	float fVar0;
	
	fVar0 = 1f;
	if (MISC::IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_45(float fParam0)//Position - 0x2F9D
{
	return (fParam0 * 0.001388889f);
}

int func_46(int iParam0)//Position - 0x2FAD
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)//Position - 0x2FEA
{
	if (func_48(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_48(int iParam0)//Position - 0x3014
{
	return iParam0 < 3;
}

void func_49()//Position - 0x3020
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_50(0))
		{
			func_51(0);
		}
		MISC::SET_BIT(&Global_2264, 2);
	}
}

int func_50(int iParam0)//Position - 0x3048
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0)//Position - 0x30A2
{
	if (Global_14551)
	{
		func_53(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2264, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 30);
	}
	if (!func_52())
	{
		Global_14393.f_1 = 3;
	}
}

int func_52()//Position - 0x3112
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_53(bool bParam0, bool bParam1)//Position - 0x3139
{
	if (bParam0)
	{
		if (func_50(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14330);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
}

int func_54()//Position - 0x31AD
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		if (Global_66846[iVar0 /*9*/] > 0)
		{
			if (Global_54975[Global_66846[iVar0 /*9*/] /*13*/].f_7 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_55(bool bParam0)//Position - 0x31F1
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_56())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

int func_56()//Position - 0x3264
{
	func_57();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_57()//Position - 0x327D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_47(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_46(PLAYER::PLAYER_PED_ID());
			if (func_48(iVar0) && (!func_58(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_48(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

bool func_58(int iParam0)//Position - 0x337A
{
	return Global_34913 == iParam0;
}

int func_59(var uParam0, bool bParam1, int iParam2)//Position - 0x3388
{
	uParam0->f_12 = iParam2;
	func_62(uParam0);
	func_61(uParam0);
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (uParam0->f_1 == 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
		uParam0->f_1 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_60(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_22(uParam0, 1);
		}
		else
		{
			func_22(uParam0, 0);
		}
	}
	Global_68506 = 1;
	return 1;
}

void func_60(var uParam0)//Position - 0x3517
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	func_24(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, 1));
	func_23("ES_HELP_TU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	func_24(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, 1));
	func_23("ES_HELP_TD");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_24(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, 1));
	func_23("ES_HELP_AB");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_61(var uParam0)//Position - 0x35DB
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, func_37(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
		else
		{
			HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(uParam0->f_13));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
	}
	else
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_62(var uParam0)//Position - 0x36E3
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_63()//Position - 0x3762
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	struct<3> Var80;
	
	if (Global_66845 == 0)
	{
		return;
	}
	if (Global_66996 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		if (Global_66846[iVar0 /*9*/].f_3 != 0)
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		iVar3 = Global_66846[iVar0 /*9*/];
		bVar4 = !Global_54975[iVar3 /*13*/].f_7;
		bVar5 = Global_54975[iVar3 /*13*/].f_8;
		uVar6 = Global_54975[iVar3 /*13*/].f_12;
		fVar7 = Global_54975[iVar3 /*13*/].f_9;
		bVar8 = false;
		bVar8 = false;
		if (func_69(iVar3, Global_66846[iVar0 /*9*/].f_1))
		{
			bVar8 = true;
		}
		if (bVar4)
		{
			if (bVar8)
			{
				iVar1 = (iVar1 + 100000000);
			}
		}
		if (bVar5)
		{
			iVar9 = Global_66846[iVar0 /*9*/].f_1;
			iVar10 = SYSTEM::FLOOR((IntToFloat(iVar9) * fVar7));
			iVar2 = (iVar2 + iVar10);
			iVar1 = (iVar1 + iVar10);
		}
		iVar0++;
	}
	Global_66991 = iVar1;
	Global_66992 = iVar2;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (Global_66995 == 0)
		{
			iVar11 = Global_66996;
			if (iVar11 == 90)
			{
				if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[func_68(0)] == 2)
				{
					Var12.f_2.f_1 = 4;
					Var12.x = 716;
					STATS::LEADERBOARDS2_WRITE_DATA(&Var12);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(810), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(811), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(812), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(813), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(141, func_67(814), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(815), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(816), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(817), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(818), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(819), 0f);
					Var12.x = 717;
					STATS::LEADERBOARDS2_WRITE_DATA(&Var12);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(810), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(811), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(812), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(813), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(141, func_67(814), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(815), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(816), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(817), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(818), 0f);
					STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(819), 0f);
				}
				else
				{
					func_65(iVar11);
				}
			}
			else if (iVar11 == 47)
			{
				Var80.f_2.f_1 = 4;
				Var80.x = 673;
				STATS::LEADERBOARDS2_WRITE_DATA(&Var80);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(413), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(414), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(415), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(416), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(417), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(418), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(419), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(420), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(421), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(422), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(423), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(424), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(141, func_67(425), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(426), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(427), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(428), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(140, 0, 0f);
				Var80.x = 672;
				STATS::LEADERBOARDS2_WRITE_DATA(&Var80);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(413), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(414), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(415), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(416), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(417), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(418), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(419), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(420), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(421), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(422), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(423), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(424), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(141, func_67(425), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(426), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(427), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(428), 0f);
				STATS::LEADERBOARDS_WRITE_ADD_COLUMN(140, 0, 0f);
			}
			else
			{
				func_65(iVar11);
			}
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar11 /*6*/].f_4 = Global_66991;
		}
		else
		{
			func_64(Global_66996);
		}
	}
}

void func_64(var uParam0)//Position - 0x3C9C
{
	var uVar0;
	
	uVar0 = uParam0;
	uVar0 = uVar0;
}

void func_65(int iParam0)//Position - 0x3CAC
{
	struct<3> Var0;
	struct<13> Var68;
	var uVar81;
	
	Var0.f_2.f_1 = 4;
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return;
	}
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Var68 = { func_66(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var68))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar81, 35, &Var68))
			{
				Var0.f_1 = uVar81;
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			Var0.x = 577;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(0), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(148, func_67(1), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(2), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(3), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(4), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(5), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(6), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(7), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(8), 0f);
			Var0.x = 913;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(0), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(148, func_67(1), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(2), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(3), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(4), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(5), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(6), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(7), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(8), 0f);
			return;
		
		case 1:
			Var0.x = 576;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(9), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(10), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(11), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(12), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(13), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(14), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(15), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(16), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(17), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(18), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(19), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(20), 0f);
			Var0.x = 575;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(9), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(10), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(11), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(12), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(13), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(14), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(15), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(16), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(17), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(18), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(19), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(20), 0f);
			return;
		
		case 2:
			Var0.x = 579;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(21), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(22), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(23), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(24), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(25), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(26), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(27), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(28), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(29), 0f);
			Var0.x = 578;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(21), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(22), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(23), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(24), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(25), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(26), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(27), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(28), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(29), 0f);
			return;
		
		case 3:
			Var0.x = 797;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(30), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(31), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(32), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(33), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(34), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(35), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(36), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(37), 0f);
			Var0.x = 796;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(30), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(31), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(32), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(33), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(34), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(35), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(36), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(37), 0f);
			return;
		
		case 4:
			Var0.x = 799;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(43), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(44), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(45), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(46), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(47), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(48), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(49), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(50), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(51), 0f);
			Var0.x = 798;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(43), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(44), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(45), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(46), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(47), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(48), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(49), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(50), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(51), 0f);
			return;
		
		case 5:
			Var0.x = 801;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(57), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(58), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(59), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(60), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(61), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(62), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(63), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(64), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(65), 0f);
			Var0.x = 800;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(57), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(58), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(59), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(60), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(61), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(62), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(63), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(64), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(65), 0f);
			return;
		
		case 6:
			Var0.x = 803;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(71), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(72), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(73), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(74), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(75), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(76), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(77), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(78), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(79), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(80), 0f);
			Var0.x = 802;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(71), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(72), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(73), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(74), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(75), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(76), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(77), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(78), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(79), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(80), 0f);
			return;
		
		case 7:
			Var0.x = 805;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(86), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(87), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(88), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(89), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(90), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(91), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(92), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(93), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(94), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(95), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(96), 0f);
			Var0.x = 804;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(86), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(87), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(88), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(89), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(90), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(91), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(92), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(93), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(94), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(95), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(96), 0f);
			return;
		
		case 9:
			Var0.x = 639;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(102), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(103), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(104), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(105), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(106), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(107), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(108), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(109), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(110), 0f);
			Var0.x = 638;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(102), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(103), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(104), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(105), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(106), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(107), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(108), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(109), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(110), 0f);
			return;
		
		case 8:
			Var0.x = 641;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(111), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(112), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(113), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(114), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(115), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(116), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(117), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(118), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(119), 0f);
			Var0.x = 640;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(111), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(112), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(113), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(114), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(115), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(116), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(117), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(118), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(119), 0f);
			return;
		
		case 10:
			Var0.x = 646;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(120), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(121), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(122), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(123), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(124), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(125), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(126), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(127), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(128), 0f);
			Var0.x = 645;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(120), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(121), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(122), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(123), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(124), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(125), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(126), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(127), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(128), 0f);
			return;
		
		case 11:
			Var0.x = 671;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(129), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(130), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(131), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(132), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(133), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(134), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(135), 0f);
			Var0.x = 670;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(129), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(130), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(131), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(132), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(133), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(134), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(135), 0f);
			return;
		
		case 12:
			Var0.x = 603;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(136), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(137), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(138), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(139), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(140), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(141), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(142), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(143), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(144), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(145), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(146), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(147), 0f);
			Var0.x = 602;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(136), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(137), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(138), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(139), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(140), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(141), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(142), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(143), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(144), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(145), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(146), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(147), 0f);
			return;
		
		case 13:
			Var0.x = 605;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(148), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(149), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(150), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(151), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(152), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(153), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(154), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(155), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(156), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(157), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(158), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(159), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(160), 0f);
			Var0.x = 604;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(148), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(149), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(150), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(151), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(152), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(153), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(154), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(155), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(156), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(157), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(158), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(159), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(160), 0f);
			return;
		
		case 14:
			Var0.x = 648;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(161), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(162), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(163), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(164), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(165), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(166), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(167), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(168), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(169), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(170), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(171), 0f);
			Var0.x = 647;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(161), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(162), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(163), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(164), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(165), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(166), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(167), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(168), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(169), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(170), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(171), 0f);
			return;
		
		case 15:
			Var0.x = 650;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(172), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(173), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(174), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(175), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(176), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(177), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(178), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(179), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(180), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(181), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(182), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(183), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(184), 0f);
			Var0.x = 649;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(172), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(173), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(174), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(175), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(176), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(177), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(178), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(179), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(180), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(181), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(182), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(183), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(184), 0f);
			return;
		
		case 16:
			Var0.x = 656;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(185), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(186), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(187), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(188), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(189), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(190), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(191), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(192), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(193), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(194), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(195), 0f);
			Var0.x = 655;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(185), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(186), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(187), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(188), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(189), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(190), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(191), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(192), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(193), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(194), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(195), 0f);
			return;
		
		case 17:
			Var0.x = 583;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(196), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(197), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(198), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(199), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(200), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(201), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(202), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(203), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(204), 0f);
			Var0.x = 582;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(196), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(197), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(198), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(199), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(200), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(201), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(202), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(203), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(204), 0f);
			return;
		
		case 18:
			Var0.x = 585;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(205), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(206), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(207), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(208), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(209), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(210), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(211), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(212), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(140, func_67(213), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(214), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(215), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(216), 0f);
			Var0.x = 584;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(205), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(206), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(207), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(208), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(209), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(210), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(211), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(212), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(140, func_67(213), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(214), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(215), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(216), 0f);
			return;
		
		case 19:
			Var0.x = 587;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(217), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(218), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(219), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(220), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(221), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(222), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(223), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(224), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(225), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(226), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(227), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(228), 0f);
			Var0.x = 586;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(217), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(218), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(219), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(220), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(221), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(222), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(223), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(224), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(225), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(226), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(227), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(228), 0f);
			return;
		
		case 20:
			Var0.x = 609;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(229), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(230), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(231), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(232), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(233), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(234), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(235), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(236), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(237), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(238), 0f);
			Var0.x = 608;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(229), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(230), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(231), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(232), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(233), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(234), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(235), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(236), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(237), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(238), 0f);
			return;
		
		case 21:
			Var0.x = 621;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(239), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(240), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(241), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(242), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(243), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(244), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(245), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(246), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(247), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(248), 0f);
			Var0.x = 620;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(239), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(240), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(241), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(242), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(243), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(244), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(245), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(246), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(247), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(248), 0f);
			return;
		
		case 22:
			Var0.x = 675;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(249), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(250), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(251), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(252), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(253), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(254), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(255), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(256), 0f);
			Var0.x = 674;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(249), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(250), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(251), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(252), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(253), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(254), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(255), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(256), 0f);
			return;
		
		case 26:
			Var0.x = 712;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(257), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(258), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(259), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(260), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(261), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(262), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(263), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(264), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(265), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(266), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(267), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(268), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(269), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(270), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(271), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(103, func_67(272), 0f);
			Var0.x = 711;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(257), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(258), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(259), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(260), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(261), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(262), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(263), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(264), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(265), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(266), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(267), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(268), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(269), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(270), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(271), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(103, func_67(272), 0f);
			return;
		
		case 29:
			Var0.x = 611;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(273), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(274), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(275), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(276), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(277), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(278), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(279), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(280), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(281), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(282), 0f);
			Var0.x = 610;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(273), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(274), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(275), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(276), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(277), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(278), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(279), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(280), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(281), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(282), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 30:
			Var0.x = 615;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(283), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(284), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(285), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(286), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(287), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(288), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(289), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(290), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(291), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(292), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(293), 0f);
			Var0.x = 614;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(283), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(284), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(285), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(286), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(287), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(288), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(289), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(290), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(291), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(292), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(293), 0f);
			return;
		
		case 31:
			Var0.x = 623;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(294), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(295), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(296), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(297), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(298), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(299), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(300), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(301), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(302), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(303), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(304), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(305), 0f);
			Var0.x = 622;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(294), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(295), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(296), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(297), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(298), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(299), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(300), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(301), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(302), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(303), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(304), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(305), 0f);
			return;
		
		case 38:
			Var0.x = 627;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(306), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(307), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(308), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(309), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(310), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(311), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(312), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(313), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(314), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(315), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(316), 0f);
			Var0.x = 626;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(306), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(307), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(308), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(309), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(310), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(311), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(312), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(313), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(314), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(315), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(316), 0f);
			return;
		
		case 33:
			Var0.x = 741;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(317), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(318), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(319), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(320), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(321), 0f);
			Var0.x = 740;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(317), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(318), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(319), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(320), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(321), 0f);
			return;
		
		case 34:
			Var0.x = 745;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(322), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(323), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(324), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(325), 0f);
			Var0.x = 742;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(322), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(323), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(324), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(325), 0f);
			return;
		
		case 39:
			Var0.x = 658;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(326), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(327), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(328), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(329), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(330), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(331), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(332), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(333), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(334), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(335), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(336), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(337), 0f);
			Var0.x = 657;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(326), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(327), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(328), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(329), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(330), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(331), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(332), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(333), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(334), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(335), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(336), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(337), 0f);
			return;
		
		case 40:
			Var0.x = 581;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(338), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(339), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(340), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(341), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(140, func_67(342), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(343), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(344), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(345), 0f);
			Var0.x = 580;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(338), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(339), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(340), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(341), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(140, func_67(342), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(343), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(344), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(345), 0f);
			return;
		
		case 41:
			Var0.x = 619;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(346), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(347), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(348), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(349), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(350), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(351), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(352), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(353), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(354), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(355), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(356), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(357), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(358), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(359), 0f);
			Var0.x = 618;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(346), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(347), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(348), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(349), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(350), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(351), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(352), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(353), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(354), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(355), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(356), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(357), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(358), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(359), 0f);
			return;
		
		case 42:
			Var0.x = 704;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(360), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(361), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(362), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(363), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(364), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(365), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(366), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(367), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(368), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(369), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(370), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(371), 0f);
			Var0.x = 703;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(360), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(361), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(362), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(363), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(364), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(365), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(366), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(367), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(368), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(369), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(370), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(371), 0f);
			return;
		
		case 43:
			Var0.x = 593;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(372), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(373), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(374), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(375), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(376), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(377), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(378), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(379), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(380), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(381), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(382), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(383), 0f);
			Var0.x = 592;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(372), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(373), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(374), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(375), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(376), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(377), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(378), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(379), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(380), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(381), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(382), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(383), 0f);
			return;
		
		case 44:
			Var0.x = 589;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(384), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(385), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(386), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(387), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(388), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(389), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(390), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(391), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(392), 0f);
			Var0.x = 588;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(384), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(385), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(386), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(387), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(388), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(389), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(390), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(391), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(392), 0f);
			return;
		
		case 45:
			Var0.x = 635;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(393), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(394), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(395), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(396), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(397), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(398), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(399), 0f);
			Var0.x = 634;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(393), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(394), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(395), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(396), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(397), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(398), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(399), 0f);
			return;
		
		case 46:
			Var0.x = 669;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(400), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(401), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(402), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(403), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(404), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(405), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(406), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(407), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(408), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(409), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(410), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(411), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(412), 0f);
			Var0.x = 668;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(400), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(401), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(402), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(403), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(404), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(405), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(406), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(407), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(408), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(409), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(410), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(411), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(412), 0f);
			return;
		
		case 47:
			Var0.x = 673;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(413), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(414), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(415), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(416), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(417), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(418), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(419), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(420), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(421), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(422), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(423), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(424), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(141, func_67(425), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(426), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(427), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(428), 0f);
			Var0.x = 672;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(413), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(414), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(415), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(416), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(417), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(418), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(419), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(420), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(421), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(422), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(423), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(424), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(141, func_67(425), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(426), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(427), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(428), 0f);
			return;
		
		case 48:
			Var0.x = 694;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(429), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(430), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(431), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(432), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(433), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(434), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(435), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(436), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(437), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(438), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(439), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(440), 0f);
			Var0.x = 693;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(429), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(430), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(431), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(432), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(433), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(434), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(435), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(436), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(437), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(438), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(439), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(440), 0f);
			return;
		
		case 49:
			Var0.x = 702;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(441), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(442), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(443), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(444), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(445), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(446), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(447), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(448), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(449), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(450), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(451), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(452), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(453), 0f);
			Var0.x = 701;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(441), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(442), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(443), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(444), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(445), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(446), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(447), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(448), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(449), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(450), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(451), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(452), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(453), 0f);
			return;
		
		case 53:
			Var0.x = 714;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(454), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(455), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(456), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(457), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(458), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(459), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(460), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(461), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(462), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(463), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(464), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(465), 0f);
			Var0.x = 713;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(454), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(455), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(456), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(457), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(458), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(459), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(460), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(461), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(462), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(463), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(464), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(465), 0f);
			return;
		
		case 60:
			Var0.x = 809;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(466), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(467), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(468), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(469), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(470), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(471), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(472), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(473), 0f);
			Var0.x = 808;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(466), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(467), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(468), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(469), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(470), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(471), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(472), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(473), 0f);
			return;
		
		case 61:
			Var0.x = 637;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(474), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(475), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(476), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(477), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(478), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(479), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(480), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(481), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(482), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(483), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(484), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(485), 0f);
			Var0.x = 636;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(474), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(475), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(476), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(477), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(478), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(479), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(480), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(481), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(482), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(483), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(484), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(485), 0f);
			return;
		
		case 62:
			Var0.x = 599;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(486), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(487), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(488), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(489), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(490), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(491), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(492), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(493), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(494), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(495), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(496), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(497), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(498), 0f);
			Var0.x = 598;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(486), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(487), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(488), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(489), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(490), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(491), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(492), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(493), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(494), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(495), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(496), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(497), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(498), 0f);
			return;
		
		case 63:
			Var0.x = 601;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(499), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(500), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(501), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(502), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(503), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(504), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(505), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(506), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(507), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(508), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(509), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(510), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(511), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(512), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(513), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(9, func_67(514), 0f);
			Var0.x = 600;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(499), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(500), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(501), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(502), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(503), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(504), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(505), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(506), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(507), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(508), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(509), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(510), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(511), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(512), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(513), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(9, func_67(514), 0f);
			return;
		
		case 64:
			Var0.x = 607;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(515), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(516), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(517), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(518), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(519), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(520), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(521), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(522), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(523), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(524), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(525), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(526), 0f);
			Var0.x = 606;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(515), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(516), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(517), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(518), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(519), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(520), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(521), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(522), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(523), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(524), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(525), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(526), 0f);
			return;
		
		case 66:
			Var0.x = 680;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(527), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(528), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(529), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(530), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(531), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(532), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(533), 0f);
			Var0.x = 676;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(527), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(528), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(529), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(530), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(531), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(532), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(533), 0f);
			return;
		
		case 67:
			Var0.x = 679;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(534), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(535), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(536), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(537), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(538), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(539), 0f);
			Var0.x = 678;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(534), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(535), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(536), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(537), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(538), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(539), 0f);
			return;
		
		case 68:
			Var0.x = 725;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(540), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(541), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(542), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(543), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(544), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(545), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(546), 0f);
			Var0.x = 724;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(540), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(541), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(542), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(543), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(544), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(545), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(546), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 69:
			Var0.x = 686;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(547), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(548), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(549), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(550), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(551), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(552), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(553), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(554), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(555), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(556), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(557), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(558), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(559), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(560), 0f);
			Var0.x = 681;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(547), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(548), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(549), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(550), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(551), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(552), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(553), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(554), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(555), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(556), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(557), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(558), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(559), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(560), 0f);
			return;
		
		case 70:
			Var0.x = 721;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(561), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(562), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(563), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(564), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(565), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(566), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(567), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(568), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(569), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(570), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(571), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(572), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(573), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(574), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(575), 0f);
			Var0.x = 720;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(561), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(562), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(563), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(564), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(565), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(566), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(567), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(568), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(569), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(570), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(571), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(572), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(573), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(574), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(575), 0f);
			return;
		
		case 71:
			Var0.x = 617;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(576), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(577), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(578), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(579), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(580), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(581), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(582), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(583), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(584), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(585), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(586), 0f);
			Var0.x = 616;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(576), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(577), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(578), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(579), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(580), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(581), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(582), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(583), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(584), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(585), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(586), 0f);
			return;
		
		case 72:
			Var0.x = 727;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(587), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(588), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(589), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(590), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(591), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(592), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(593), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(594), 0f);
			Var0.x = 726;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(587), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(588), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(589), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(590), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(591), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(592), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(593), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(594), 0f);
			return;
		
		case 73:
			Var0.x = 729;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(595), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(596), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(597), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(598), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(599), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(600), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(601), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(602), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(603), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(604), 0f);
			Var0.x = 728;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(595), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(596), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(597), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(598), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(599), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(600), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(601), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(602), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(603), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(604), 0f);
			return;
		
		case 74:
			Var0.x = 625;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(605), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(606), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(607), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(608), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(609), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(610), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(611), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(612), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(613), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(614), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(615), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(616), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(617), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(618), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(619), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(620), 0f);
			Var0.x = 624;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(605), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(606), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(607), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(608), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(609), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(610), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(611), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(612), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(613), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(614), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(615), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(616), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(617), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(618), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(619), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(620), 0f);
			return;
		
		case 75:
			Var0.x = 719;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(621), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(622), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(623), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(624), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(625), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(626), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(627), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(628), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(629), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(630), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(631), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(632), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(633), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(634), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(635), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(636), 0f);
			Var0.x = 718;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(621), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(622), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(623), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(624), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(625), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(626), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(627), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(628), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(629), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(630), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(631), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(632), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(633), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(634), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(635), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(636), 0f);
			return;
		
		case 76:
			Var0.x = 667;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(637), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(638), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(639), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(640), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(641), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(642), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(643), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(644), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(645), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(646), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(647), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(648), 0f);
			Var0.x = 666;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(637), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(638), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(639), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(640), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(641), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(642), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(643), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(644), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(645), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(646), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(647), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(648), 0f);
			return;
		
		case 78:
			Var0.x = 735;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(649), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(650), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(651), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(652), 0f);
			Var0.x = 734;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(649), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(650), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(651), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(652), 0f);
			return;
		
		case joaat("mpsv_lp0_31"):
			Var0.x = 737;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(653), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(654), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(655), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(656), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(657), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(658), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(659), 0f);
			Var0.x = 736;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(653), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(654), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(655), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(656), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(657), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(658), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(659), 0f);
			return;
		
		case 84:
			Var0.x = 706;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(660), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(661), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(662), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(663), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(664), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(665), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(666), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(667), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(668), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(669), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(670), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(671), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(672), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(673), 0f);
			Var0.x = 705;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(660), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(661), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(662), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(663), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(664), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(665), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(666), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(667), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(668), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(669), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(670), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(671), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(672), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(673), 0f);
			return;
		
		case 85:
			Var0.x = 723;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(674), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(675), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(676), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(677), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(678), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(679), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(680), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(681), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(682), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(683), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(684), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(685), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(686), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(687), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(688), 0f);
			Var0.x = 722;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(674), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(675), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(676), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(677), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(678), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(679), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(680), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(681), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(682), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(683), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(684), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(685), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(686), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(687), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(688), 0f);
			return;
		
		case 86:
			Var0.x = 595;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(689), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(690), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(691), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(692), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(693), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(694), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(695), 0f);
			Var0.x = 594;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(689), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(690), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(691), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(692), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(693), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(694), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(695), 0f);
			return;
		
		case 87:
			Var0.x = 731;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(696), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(697), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(698), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(699), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(700), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(701), 0f);
			Var0.x = 730;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(696), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(697), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(698), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(699), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(700), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(701), 0f);
			return;
		
		case 88:
			Var0.x = 733;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(702), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(703), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(704), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(705), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(706), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(707), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(708), 0f);
			Var0.x = 732;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(702), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(703), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(704), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(139, func_67(705), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(706), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(707), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(708), 0f);
			return;
		
		case 91:
			Var0.x = 652;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(709), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(710), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(711), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(712), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(713), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(714), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(715), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(716), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(717), 0f);
			Var0.x = 651;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(709), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(710), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(711), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(712), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(713), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(142, func_67(714), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(715), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(716), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(717), 0f);
			return;
		
		case 92:
			Var0.x = 739;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(718), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(719), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(720), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(721), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(722), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(723), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(724), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(725), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(726), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(727), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(728), 0f);
			Var0.x = 738;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(718), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(719), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(720), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(721), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(722), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(723), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(724), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(725), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(726), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(727), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(728), 0f);
			return;
		
		case 93:
			Var0.x = 654;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(729), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(730), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(731), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(732), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(733), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(734), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(735), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(736), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(737), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(738), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(739), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(740), 0f);
			Var0.x = 653;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(729), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(730), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(731), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(732), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(733), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(734), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(735), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(87, func_67(736), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(1, func_67(737), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(738), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(739), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(740), 0f);
			return;
		
		case 90:
			Var0.x = 597;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(810), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(811), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(812), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(813), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(141, func_67(814), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(815), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(816), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(817), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(818), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(819), 0f);
			Var0.x = 596;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(810), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(811), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(812), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(813), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(141, func_67(814), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(815), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(816), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(817), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(818), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(819), 0f);
			return;
		
		case 36:
			Var0.x = 831;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(820), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(821), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(822), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(823), 0f);
			Var0.x = 832;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(820), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(821), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(822), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(823), 0f);
			return;
		
		case 37:
			Var0.x = 833;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(824), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(825), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(826), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(827), 0f);
			Var0.x = 834;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(824), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(825), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(826), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(827), 0f);
			return;
		
		case 24:
			Var0.x = 848;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(846), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(847), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(848), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(849), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(850), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(851), 0f);
			Var0.x = 847;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(846), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(847), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(848), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(849), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(850), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(851), 0f);
			return;
		
		case 25:
			Var0.x = 846;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(852), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(853), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(854), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(855), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(856), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(857), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(858), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(859), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(860), 0f);
			Var0.x = 845;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(852), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(853), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(854), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(5, func_67(855), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(856), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(857), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(858), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(859), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(860), 0f);
			return;
		
		case 59:
			Var0.x = 807;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(861), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(862), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(863), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(864), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(865), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(866), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(867), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(868), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(869), 0f);
			Var0.x = 806;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(861), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(862), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(863), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(135, func_67(864), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(865), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(136, func_67(866), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(867), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(868), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(137, func_67(869), 0f);
			return;
		
		case 65:
			Var0.x = 838;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(870), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(871), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(872), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(873), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(874), 0f);
			Var0.x = 837;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(870), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(871), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(872), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(873), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(874), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 80:
			Var0.x = 917;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(875), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(876), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(877), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(878), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(879), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(880), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(881), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(882), 0f);
			Var0.x = 916;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(875), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(876), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(877), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(878), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(879), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(880), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(881), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(882), 0f);
			return;
		
		case 81:
			Var0.x = 919;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(883), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(884), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(885), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(886), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(887), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(888), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(889), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(890), 0f);
			Var0.x = 918;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(883), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(884), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(885), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(886), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(887), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(888), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(889), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(890), 0f);
			return;
		
		case 82:
			Var0.x = 921;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(891), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(892), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(893), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(894), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(895), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(896), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(897), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(898), 0f);
			Var0.x = 920;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(891), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(892), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(893), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(894), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(895), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(896), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(897), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(898), 0f);
			return;
		
		case 83:
			Var0.x = 923;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(899), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(900), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(901), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(902), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(903), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(904), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(905), 0f);
			Var0.x = 922;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(899), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(134, func_67(900), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(92, func_67(901), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(133, func_67(902), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(903), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(904), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(905), 0f);
			return;
		
		case 89:
			Var0.x = 925;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(906), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(907), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(908), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(909), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(910), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(911), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(912), 0f);
			Var0.x = 924;
			STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, Global_66991, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(162, Global_66992, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(126, 1, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(161, Global_66994, 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(138, func_67(906), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, func_67(907), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(7, func_67(908), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(127, func_67(909), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(95, func_67(910), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(90, func_67(911), 0f);
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(132, func_67(912), 0f);
			return;
		
		default:
	}
}

struct<13> func_66(var uParam0)//Position - 0xB3C6
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

int func_67(int iParam0)//Position - 0xB3DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0)
	{
		case 665:
		case 676:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[Global_54754 /*23*/].f_11[iVar0] == 1)
				{
					iVar1 = (iVar1 + Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[Global_54754 /*23*/].f_17[iVar0]);
				}
				iVar0++;
			}
			return iVar1;
		
		default:
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		if (Global_66846[iVar0 /*9*/] == iParam0)
		{
			return Global_66846[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0)//Position - 0xB477
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_69(int iParam0, int iParam1)//Position - 0xB4CC
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_54975[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_SAVE_DATA.PROPERTIES_SAVED_DATA[4 /*4*/] == func_56())
	{
		Global_54975[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_54975[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_54975[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_54975[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

void func_70(var uParam0)//Position - 0xB596
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	if (Global_54740)
	{
		Global_54755 = 0;
		return;
	}
	iLocal_621 = 0;
	iLocal_622 = 0;
	iVar0 = 0;
	if (func_94(0))
	{
		MISC::CLEAR_REPLAY_STATS();
		Global_54742 = 1;
		MISC::BEGIN_REPLAY_STATS(33, 33);
	}
	iVar1 = -1;
	iLocal_626 = 0;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		switch (Global_66846[iVar0 /*9*/])
		{
			case 852:
			case 846:
				Global_66846[iVar0 /*9*/].f_1 = 1;
				break;
		}
		if (func_81(uParam0, iVar0))
		{
		}
		if (Global_66846[iVar0 /*9*/] >= 0)
		{
			if (!Global_54975[Global_66846[iVar0 /*9*/] /*13*/].f_7)
			{
				iLocal_622++;
				if (Global_66846[iVar0 /*9*/].f_3 == 2)
				{
					bVar2 = true;
				}
			}
		}
		switch (Global_66846[iVar0 /*9*/])
		{
			case 84:
			case 100:
			case 69:
			case 41:
			case 54:
				iVar1 = Global_66846[iVar0 /*9*/].f_1;
				break;
		}
		iVar0++;
	}
	Global_66994 = iLocal_621;
	fVar3 = func_76(uParam0, iLocal_621, iLocal_622, bVar2);
	if (func_94(0))
	{
		MISC::ADD_REPLAY_STAT_VALUE(Global_66996);
		MISC::ADD_REPLAY_STAT_VALUE(SYSTEM::ROUND(fVar3));
		if (bVar2)
		{
			MISC::ADD_REPLAY_STAT_VALUE(1);
		}
		else
		{
			MISC::ADD_REPLAY_STAT_VALUE(0);
		}
		if (Global_66995)
		{
			MISC::ADD_REPLAY_STAT_VALUE(1);
		}
		else
		{
			MISC::ADD_REPLAY_STAT_VALUE(0);
		}
		MISC::END_REPLAY_STATS();
		Global_54742 = 0;
	}
	Global_54755 = 0;
	if (iVar1 > -1)
	{
		fVar3 = SYSTEM::TO_FLOAT(iVar1);
	}
	func_71(fVar3, bVar2);
}

void func_71(float fParam0, bool bParam1)//Position - 0xB709
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Global_66995)
	{
		iVar1 = Global_66996;
		fVar0 = func_75(iVar1);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iMissionGolds++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_74(iVar1, fParam0, bParam1);
		}
	}
	else if (Global_66996 == -1)
	{
	}
	else
	{
		iVar2 = Global_66996;
		fVar0 = func_73(iVar2);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iMissionGolds++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_72(iVar2, fParam0, bParam1);
		}
	}
}

void func_72(int iParam0, float fParam1, bool bParam2)//Position - 0xB7BA
{
	if (bParam2)
	{
		Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_24453 = 1;
}

float func_73(int iParam0)//Position - 0xB7F5
{
	return Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iParam0 /*6*/].f_5;
}

void func_74(int iParam0, float fParam1, bool bParam2)//Position - 0xB80D
{
	if (bParam2)
	{
		Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_24453 = 1;
}

var func_75(int iParam0)//Position - 0xB842
{
	return Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/].f_5;
}

float func_76(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xB857
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = func_80(iParam1, iParam2, 0);
	iVar1 = func_79(fVar0);
	if (bParam3)
	{
		fVar0 = 50f;
		iVar1 = 1;
	}
	if (fVar0 == 0f)
	{
		func_78(uParam0, 1, "MTPHPER", 0, 0, 0, 0);
		return fVar0;
	}
	iVar2 = 0;
	switch (func_77(iVar1))
	{
		case 109:
			iVar2 = 3;
			break;
		
		case 108:
			iVar2 = 2;
			break;
		
		case 107:
			iVar2 = 1;
			break;
	}
	switch (func_77(iVar1))
	{
		case 109:
			func_78(uParam0, 1, "MTPHPER", SYSTEM::ROUND(fVar0), 0, 0, iVar2);
			break;
		
		case 108:
			func_78(uParam0, 1, "MTPHPER", SYSTEM::ROUND(fVar0), 0, 0, iVar2);
			break;
		
		case 107:
			func_78(uParam0, 1, "MTPHPER", SYSTEM::ROUND(fVar0), 0, 0, iVar2);
			break;
	}
	return fVar0;
}

int func_77(int iParam0)//Position - 0xB935
{
	int iVar0;
	
	iVar0 = 107;
	switch (iParam0)
	{
		case 3:
			iVar0 = 109;
			break;
		
		case 2:
			iVar0 = 108;
			break;
		
		case 1:
			iVar0 = 107;
			break;
	}
	return iVar0;
}

void func_78(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB971
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
}

int func_79(float fParam0)//Position - 0xB9A5
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_80(int iParam0, int iParam1, bool bParam2)//Position - 0xB9DA
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_81(var uParam0, int iParam1)//Position - 0xBA39
{
	float fVar0;
	float fVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	char* sVar19;
	char* sVar20;
	int iVar21;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (Global_66846[iParam1 /*9*/] >= 0)
	{
	}
	else
	{
		return 0;
	}
	Var2 = { Global_54975[Global_66846[iParam1 /*9*/] /*13*/] };
	if (Var2 == 15)
	{
		Global_66846[iParam1 /*9*/].f_1 = iLocal_629;
	}
	if (Var2 == 9)
	{
		Global_66846[iParam1 /*9*/].f_2 = fLocal_628;
	}
	if (Var2 == 14)
	{
		Global_66846[iParam1 /*9*/].f_1 = SYSTEM::FLOOR(Global_66846[iParam1 /*9*/].f_2);
	}
	if (func_69(Global_66846[iParam1 /*9*/], Global_66846[iParam1 /*9*/].f_1))
	{
		fVar0 = 1f;
	}
	if (Global_66846[iParam1 /*9*/].f_3 != 0)
	{
		fVar0 = 0f;
	}
	if (!Var2.f_2 == 0)
	{
		fVar1 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_66846[iParam1 /*9*/].f_1) / SYSTEM::TO_FLOAT(Var2.f_2)) * 100f)));
		if (fVar1 > 100f)
		{
			fVar1 = 100f;
		}
	}
	iVar15 = func_84(Var2.f_4);
	iVar16 = 0;
	switch (Global_66846[iParam1 /*9*/])
	{
		case 42:
		case 55:
		case 85:
		case 70:
		case 101:
			iVar16 = 1;
			break;
		
		case 84:
		case 100:
		case 69:
		case 41:
		case 54:
			iVar16 = 1;
			break;
	}
	if (Global_66846[iParam1 /*9*/].f_3 == 0 || iVar16)
	{
		if (Var2.f_3)
		{
			if ((iVar15 > Global_66846[iParam1 /*9*/].f_1 || iVar15 < 0) || iVar15 == -1)
			{
				func_83(Global_66846[iParam1 /*9*/].f_1, Global_66846[iParam1 /*9*/]);
			}
		}
		else if ((Global_66846[iParam1 /*9*/].f_1 > iVar15 || iVar15 < 0) || iVar15 == -1)
		{
			func_83(Global_66846[iParam1 /*9*/].f_1, Global_66846[iParam1 /*9*/]);
		}
	}
	iVar17 = Global_66846[iParam1 /*9*/].f_1;
	if (Var2.f_7)
	{
		return 1;
	}
	iVar18 = 1;
	if (fVar0 == 1f)
	{
		iLocal_621++;
		iVar18 = 2;
	}
	sVar19 = func_82(Global_66846[iParam1 /*9*/]);
	if (Global_66846[iParam1 /*9*/].f_3 != 0)
	{
		if (!func_94(0))
		{
			func_83(-1, Global_66846[iParam1 /*9*/]);
		}
		sVar20 = "MTPHPERRET";
		switch (Global_66846[iParam1 /*9*/].f_3)
		{
			case 4:
				sVar20 = "MTPHPERCHE";
				break;
			
			case 2:
				sVar20 = "MTPHPERSKI";
				break;
			
			case 3:
				sVar20 = "MTPHPERTAX";
				break;
			
			case 5:
				sVar20 = "MTPHPERNOREC";
				break;
		}
		if (iLocal_626 == Global_66846[iParam1 /*9*/].f_3)
		{
			sVar20 = "";
		}
		iLocal_626 = Global_66846[iParam1 /*9*/].f_3;
		func_89(uParam0, 6, sVar19, sVar20, Global_66846[iParam1 /*9*/].f_1, 0, 3, 0);
	}
	else
	{
		iLocal_626 = 0;
		switch (Var2)
		{
			case 1:
				func_89(uParam0, 8, sVar19, "", Global_66846[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 2:
				func_89(uParam0, 9, sVar19, "", Global_66846[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 3:
				func_89(uParam0, 0, sVar19, "", Global_66846[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 4:
			case 17:
				func_89(uParam0, 9, sVar19, "", Global_66846[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 5:
				func_89(uParam0, 11, sVar19, "", SYSTEM::CEIL(((SYSTEM::TO_FLOAT(Global_66846[iParam1 /*9*/].f_1) / SYSTEM::TO_FLOAT(Var2.f_2)) * 100f)), 0, iVar18, 0);
				break;
			
			case 6:
				func_89(uParam0, 0, sVar19, "", Global_66846[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 7:
				if (iVar17 > Var2.f_2)
				{
					iVar17 = Var2.f_2;
				}
				func_89(uParam0, 2, sVar19, "", iVar17, Var2.f_2, iVar18, 0);
				break;
			
			case 8:
				iVar21 = Global_66846[iParam1 /*9*/].f_1;
				if (iVar21 > Var2.f_2)
				{
					iVar21 = Var2.f_2;
				}
				func_89(uParam0, 2, sVar19, "", iVar21, Var2.f_2, iVar18, 0);
				break;
			
			case 9:
				func_89(uParam0, 11, sVar19, "", SYSTEM::ROUND(Global_66846[iParam1 /*9*/].f_2), 0, iVar18, 0);
				break;
			
			case 10:
			case 15:
			case 16:
				func_89(uParam0, 1, sVar19, "", Global_66846[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 11:
				func_89(uParam0, 11, sVar19, "", Global_66846[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 14:
				func_89(uParam0, 12, sVar19, "", Global_66846[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 12:
			case 13:
				func_89(uParam0, 3, sVar19, "", Global_66846[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			default:
				break;
			}
	}
	return 0;
}

char* func_82(int iParam0)//Position - 0xBF39
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTA_0";
		
		case 9:
			return "MISHSTA_1";
		
		case 10:
			return "MISHSTA_2";
		
		case 21:
			return "MISHSTA_1";
		
		case 22:
			return "MISHSTA_3";
		
		case 338:
			return "MISHSTA_0";
		
		case 339:
			return "MISHSTA_4";
		
		case 196:
			return "MISHSTA_5";
		
		case 197:
			return "MISHSTA_0";
		
		case 205:
			return "MISHSTA_6";
		
		case 206:
			return "MISHSTA_7";
		
		case 207:
			return "MISHSTA_8";
		
		case 218:
			return "MISHSTA_1";
		
		case 217:
			return "MISHSTA_0";
		
		case 384:
			return "MISHSTA_1";
		
		case 385:
			return "MISHSTA_9";
		
		case 372:
			return "MISHSTA_10";
		
		case 373:
			return "MISHSTA_11";
		
		case 375:
			return "MISHSTA_1";
		
		case 374:
			return "MISHSTA_12";
		
		case 486:
			return "MISHSTA_13";
		
		case 487:
			return "MISHSTA_11";
		
		case 488:
			return "MISHSTA_1";
		
		case 489:
			return "MISHSTA_14";
		
		case 490:
			return "MISHSTA_15";
		
		case 499:
			return "MISHSTA_11";
		
		case 500:
			return "MISHSTA_1";
		
		case 501:
			return "MISHSTA_16";
		
		case 502:
			return "MISHSTA_17";
		
		case 515:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 516:
			return "MISHSTA_18";
		
		case 517:
			return "MISHSTA_12";
		
		case 518:
			return "MISHSTA_19";
		
		case 137:
			return "MISHSTA_12";
		
		case 136:
			return "MISHSTA_20";
		
		case 148:
			return "MISHSTA_11";
		
		case 149:
			return "MISHSTA_12";
		
		case 150:
			return "MISHSTA_21";
		
		case 229:
			return "MISHSTA_6";
		
		case 230:
			return "MISHSTA_22";
		
		case 273:
			return "MISHSTA_10";
		
		case 274:
			return "MISHSTA_11";
		
		case 275:
			return "MISHSTA_1";
		
		case 276:
			return "MISHSTA_23";
		
		case 277:
			return "MISHSTA_12";
		
		case 283:
			return "MISHSTA_1";
		
		case 284:
			return "MISHSTA_10";
		
		case 285:
			return "MISHSTA_11";
		
		case 346:
			return "MISHSTA_1";
		
		case 239:
			return "MISHSTA_1";
		
		case 240:
			return "MISHSTA_24";
		
		case 241:
			return "MISHSTA_25";
		
		case 242:
			return "MISHSTA_26";
		
		case 294:
			return "MISHSTA_27";
		
		case 295:
			return "MISHSTA_28";
		
		case 296:
			return "MISHSTA_29";
		
		case 297:
			return "MISHSTA_30";
		
		case 298:
			return "MISHSTA_31";
		
		case 308:
			return "MISHSTA_32";
		
		case 102:
			return "MISHSTA_0";
		
		case 115:
			return "MISHSTA_33";
		
		default:
	}
	switch (iParam0)
	{
		case 114:
			return "MISHSTA_1";
		
		case 111:
			return "MISHSTA_34";
		
		case 112:
			return "MISHSTA_35";
		
		case 113:
			return "MISHSTA_36";
		
		case 396:
			return "MISHSTA_1";
		
		case 393:
			return "MISHSTA_37";
		
		case 394:
			return "MISHSTA_38";
		
		case 395:
			return "MISHSTA_39";
		
		case 120:
			return "MISHSTA_0";
		
		case 121:
			return "MISHSTA_6";
		
		case 122:
			return "MISHSTA_40";
		
		case 123:
			return "MISHSTA_41";
		
		case 124:
			return "MISHSTA_42";
		
		case 161:
			return "MISHSTA_43";
		
		case 172:
			return "MISHSTA_43";
		
		case 173:
			return "MISHSTA_1";
		
		case 174:
			return "MISHSTA_11";
		
		case 175:
			return "MISHSTA_44";
		
		case 185:
			return "MISHSTA_1";
		
		case 186:
			return "MISHSTA_6";
		
		case 187:
			return "MISHSTA_45";
		
		case 326:
			return "MISHSTA_46";
		
		case 129:
			return "MISHSTA_1";
		
		case 130:
			return "MISHSTA_0";
		
		case 466:
			return "MISHSTA_1";
		
		case 400:
			return "MISHSTA_1";
		
		case 401:
			return "MISHSTA_47";
		
		case 413:
			return "MISHSTA_48";
		
		case 414:
			return "MISHSTA_10";
		
		case 415:
			return "MISHSTA_11";
		
		case 416:
			return "MISHSTA_49";
		
		default:
	}
	switch (iParam0)
	{
		case 417:
			return "MISHSTA_50";
		
		case 249:
			return "MISHSTA_1";
		
		case 474:
			return "MISHSTA_1";
		
		case 257:
			return "MISHSTA_1";
		
		case 527:
			return "MISHSTA_51";
		
		case 528:
			return "MISHSTA_52";
		
		case 529:
			return "MISHSTA_53";
		
		case 534:
			return "MISHSTA_54";
		
		case 709:
			return "MISHSTA_55";
		
		case 576:
			return "MISHSTA_1";
		
		case 577:
			return "MISHSTA_56";
		
		case 578:
			return "MISHSTA_57";
		
		case 579:
			return "MISHSTA_58";
		
		case 742:
			return "MISHSTA_59";
		
		case 741:
			return "MISHSTA_60";
		
		case 743:
			return "MISHSTA_61";
		
		case 745:
			return "MISHSTA_62";
		
		case 748:
			return "MISHSTA_62";
		
		case 747:
			return "MISHSTA_63";
		
		case 749:
			return "MISHSTA_64";
		
		case 750:
			return "MISHSTA_65";
		
		case 751:
			return "MISHSTA_66";
		
		case 754:
			return "MISHSTA_67";
		
		case 753:
			return "MISHSTA_68";
		
		case 757:
			return "MISHSTA_69";
		
		case 756:
			return "MISHSTA_70";
		
		case 755:
			return "MISHSTA_71";
		
		case 759:
			return "MISHSTA_72";
		
		case 758:
			return "MISHSTA_73";
		
		case 761:
			return "MISHSTA_74";
		
		case 760:
			return "MISHSTA_75";
		
		default:
	}
	switch (iParam0)
	{
		case 762:
			return "MISHSTA_76";
		
		case 763:
			return "MISHSTA_77";
		
		case 766:
			return "MISHSTA_78";
		
		case 769:
			return "MISHSTA_79";
		
		case 768:
			return "MISHSTA_80";
		
		case 767:
			return "MISHSTA_81";
		
		case 771:
			return "MISHSTA_82";
		
		case 770:
			return "MISHSTA_83";
		
		case 773:
			return "MISHSTA_84";
		
		case 772:
			return "MISHSTA_85";
		
		case 775:
			return "MISHSTA_86";
		
		case 774:
			return "MISHSTA_87";
		
		case 777:
			return "MISHSTA_88";
		
		case 776:
			return "MISHSTA_89";
		
		case 779:
			return "MISHSTA_90";
		
		case 778:
			return "MISHSTA_91";
		
		case 782:
			return "MISHSTA_92";
		
		case 780:
			return "MISHSTA_93";
		
		case 781:
			return "MISHSTA_94";
		
		case 784:
			return "MISHSTA_95";
		
		case 783:
			return "MISHSTA_96";
		
		case 786:
			return "MISHSTA_97";
		
		case 785:
			return "MISHSTA_98";
		
		case 788:
			return "MISHSTA_99";
		
		case 787:
			return "MISHSTA_100";
		
		case 789:
			return "MISHSTA_101";
		
		case 792:
			return "MISHSTA_102";
		
		case 791:
			return "MISHSTA_103";
		
		case 790:
			return "MISHSTA_104";
		
		case 793:
			return "MISHSTA_105";
		
		case 794:
			return "MISHSTA_106";
		
		default:
	}
	switch (iParam0)
	{
		case 795:
			return "MISHSTA_0";
		
		case 796:
			return "MISHSTA_107";
		
		case 797:
			return "MISHSTA_108";
		
		case 798:
			return "MISHSTA_109";
		
		case 799:
			return "MISHSTA_110";
		
		case 800:
			return "MISHSTA_111";
		
		case 801:
			return "MISHSTA_112";
		
		case 802:
			return "MISHSTA_113";
		
		case 803:
			return "MISHSTA_114";
		
		case 804:
			return "MISHSTA_115";
		
		case 805:
			return "MISHSTA_116";
		
		case 806:
			return "MISHSTA_117";
		
		case 807:
			return "MISHSTA_118";
		
		case 808:
			return "MISHSTA_119";
		
		case 809:
			return "MISHSTA_120";
		
		case 429:
			return "MISHSTA_1";
		
		case 441:
			return "MISHSTA_1";
		
		case 4:
			return "MISHSTA_121";
		
		case 13:
			return "MISHSTA_11";
		
		case 341:
			return "MISHSTA_122";
		
		case 5:
			return "MISHSTA_123";
		
		case 6:
			return "MISHSTA_124";
		
		case 20:
			return "MISHSTA_10";
		
		case 169:
			return "MISHSTA_125";
		
		case 731:
			return "MISHSTA_126";
		
		case 737:
			return "MISHSTA_10";
		
		case 145:
			return "MISHSTA_127";
		
		case 159:
			return "MISHSTA_10";
		
		case 353:
			return "MISHSTA_10";
		
		case 357:
			return "MISHSTA_11";
		
		case 605:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 606:
			return "MISHSTA_10";
		
		case 613:
			return "MISHSTA_128";
		
		case 616:
			return "MISHSTA_129";
		
		case 628:
			return "MISHSTA_130";
		
		case 309:
			return "MISHSTA_11";
		
		case 310:
			return "MISHSTA_10";
		
		case 313:
			return "MISHSTA_131";
		
		case 477:
			return "MISHSTA_37";
		
		case 482:
			return "MISHSTA_132";
		
		case 484:
			return "MISHSTA_133";
		
		case 715:
			return "MISHSTA_123";
		
		case 570:
			return "MISHSTA_10";
		
		case 566:
			return "MISHSTA_11";
		
		case 565:
			return "MISHSTA_134";
		
		case 572:
			return "MISHSTA_135";
		
		case 574:
			return "MISHSTA_136";
		
		case 431:
			return "MISHSTA_11";
		
		case 443:
			return "MISHSTA_137";
		
		case 446:
			return "MISHSTA_138";
		
		case 452:
			return "MISHSTA_139";
		
		case 364:
			return "MISHSTA_11";
		
		case 365:
			return "MISHSTA_10";
		
		case 369:
			return "MISHSTA_140";
		
		case 668:
			return "MISHSTA_11";
		
		case 670:
			return "MISHSTA_141";
		
		case 678:
			return "MISHSTA_11";
		
		case 265:
			return "MISHSTA_11";
		
		case 266:
			return "MISHSTA_10";
		
		case 270:
			return "MISHSTA_142";
		
		case 271:
			return "MISHSTA_143";
		
		case 272:
			return "MISHSTA_144";
		
		default:
	}
	switch (iParam0)
	{
		case 765:
			return "MISHSTA_145";
		
		case 764:
			return "MISHSTA_146";
		
		case 330:
			return "MISHSTA_11";
		
		case 331:
			return "MISHSTA_10";
		
		case 643:
			return "MISHSTA_147";
		
		case 644:
			return "MISHSTA_148";
		
		case 645:
			return "MISHSTA_149";
		
		case 646:
			return "MISHSTA_150";
		
		case 404:
			return "MISHSTA_10";
		
		case 721:
			return "MISHSTA_151";
		
		case 752:
			return "MISHSTA_152";
		
		case 147:
			return "MISHSTA_1";
		
		case 336:
			return "MISHSTA_1";
		
		case 371:
			return "MISHSTA_1";
		
		case 557:
			return "MISHSTA_1";
		
		case 575:
			return "MISHSTA_1";
		
		case 629:
			return "MISHSTA_1";
		
		case 647:
			return "MISHSTA_1";
		
		case 685:
			return "MISHSTA_1";
		
		case 693:
			return "MISHSTA_1";
		
		case 738:
			return "MISHSTA_1";
		
		case 650:
			return "MISHSTA_0";
		
		case 649:
			return "MISHSTA_153";
		
		case 825:
			return "MISHSTA_154";
		
		case 824:
			return "MISHSTA_155";
		
		case 821:
			return "MISHSTA_156";
		
		case 820:
			return "MISHSTA_157";
		
		case 319:
			return "MISHSTA_158";
		
		case 318:
			return "MISHSTA_159";
		
		case 317:
			return "MISHSTA_1";
		
		case 322:
			return "MISHSTA_1";
		
		default:
	}
	switch (iParam0)
	{
		case 323:
			return "MISHSTA_0";
		
		case 324:
			return "MISHSTA_160";
		
		case 816:
			return "MISHSTA_161";
		
		case 815:
			return "MISHSTA_162";
		
		case 814:
			return "MISHSTA_163";
		
		case 746:
			return "MISHSTA_164";
		
		case 514:
			return "MISHSTA_165";
		
		case 744:
			return "MISHSTA_166";
		
		case 841:
			return "MISHSTA_167";
		
		case 840:
			return "MISHSTA_1";
		
		case 838:
			return "MISHSTA_167";
		
		case 828:
			return "MISHSTA_1";
		
		case 829:
			return "MISHSTA_167";
		
		case 831:
			return "MISHSTA_1";
		
		case 832:
			return "MISHSTA_167";
		
		case 834:
			return "MISHSTA_1";
		
		case 835:
			return "MISHSTA_167";
		
		case 837:
			return "MISHSTA_1";
		
		case 739:
			return "MISHSTA_168";
		
		case 619:
			return "MISHSTA_169";
		
		case 560:
			return "MISHSTA_170";
		
		case 559:
			return "MISHSTA_171";
		
		case 558:
			return "MISHSTA_172";
		
		case 673:
			return "MISHSTA_10";
		
		case 688:
			return "MISHSTA_10";
		
		case 687:
			return "MISHSTA_173";
		
		case 844:
			return "MISHSTA_174";
		
		case 845:
			return "MISHSTA_175";
		
		case 843:
			return "MISHSTA_176";
		
		case 236:
			return "MISHSTA_177";
		
		case 29:
			return "MISHSTA_178";
		
		default:
	}
	switch (iParam0)
	{
		case 109:
			return "MISHSTA_179";
		
		case 108:
			return "MISHSTA_180";
		
		case 135:
			return "MISHSTA_181";
		
		case 227:
			return "MISHSTA_182";
		
		case 852:
			return "MISHSTA_183";
		
		case 846:
			return "MISHSTA_184";
		
		case 440:
			return "MISHSTA_185";
		
		case 864:
			return "MISHSTA_186";
		
		case 863:
			return "MISHSTA_187";
		
		case 861:
			return "MISHSTA_1";
		
		case 862:
			return "MISHSTA_188";
		
		case 870:
			return "MISHSTA_1";
		
		case 544:
			return "MISHSTA_0";
		
		case 543:
			return "MISHSTA_189";
		
		case 593:
			return "MISHSTA_190";
		
		case 592:
			return "MISHSTA_1";
		
		case 603:
			return "MISHSTA_1";
		
		case 899:
			return "MISHSTA_1";
		
		case 900:
			return "MISHSTA_191";
		
		case 883:
			return "MISHSTA_192";
		
		case 891:
			return "MISHSTA_192";
		
		case 657:
			return "MISHSTA_193";
		
		case 875:
			return "MISHSTA_192";
		
		case 906:
			return "MISHSTA_194";
		
		case 706:
			return "MISHSTA_195";
		
		case 699:
			return "MISHSTA_196";
		
		case 726:
			return "MISHSTA_197";
		
		case 237:
			return "MISHSTA_198";
		
		case 658:
			return "MISHSTA_1";
		
		case 877:
			return "MISHSTA_0";
		
		case 885:
			return "MISHSTA_0";
		
		default:
	}
	switch (iParam0)
	{
		case 893:
			return "MISHSTA_0";
		
		case 694:
			return "MISHSTA_110";
		
		case 881:
			return "MISHSTA_199";
		
		case 889:
			return "MISHSTA_199";
		
		case 897:
			return "MISHSTA_199";
		
		case 633:
			return "MISHSTA_200";
		
		case 632:
			return "MISHSTA_201";
		
		case 38:
			return "MISHSTA_202";
		
		case 41:
			return "MISHSTA_203";
		
		case 39:
			return "MISHSTA_204";
		
		case 40:
			return "MISHSTA_205";
		
		case 42:
			return "MISHSTA_206";
		
		case 56:
			return "MISHSTA_205";
		
		case 52:
			return "MISHSTA_202";
		
		case 53:
			return "MISHSTA_207";
		
		case 54:
			return "MISHSTA_203";
		
		case 55:
			return "MISHSTA_206";
		
		case 70:
			return "MISHSTA_206";
		
		case 69:
			return "MISHSTA_203";
		
		case 67:
			return "MISHSTA_132";
		
		case 68:
			return "MISHSTA_205";
		
		case 66:
			return "MISHSTA_202";
		
		case 81:
			return "MISHSTA_202";
		
		case 82:
			return "MISHSTA_208";
		
		case 84:
			return "MISHSTA_203";
		
		case 83:
			return "MISHSTA_205";
		
		case 85:
			return "MISHSTA_206";
		
		case 97:
			return "MISHSTA_202";
		
		case 98:
			return "MISHSTA_209";
		
		case 100:
			return "MISHSTA_203";
		
		case 99:
			return "MISHSTA_205";
		
		default:
	}
	switch (iParam0)
	{
		case 101:
			return "MISHSTA_206";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_83(int iParam0, int iParam1)//Position - 0xD0EA
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_54975[iParam1 /*13*/].f_4;
	if (iVar0 == 0)
	{
		return;
	}
	Global_54975[iParam1 /*13*/].f_1 = iParam0;
	uVar1 = iParam0 + 1;
	STATS::STAT_SET_INT(iVar0, uVar1, 1);
	if (func_94(0) && Global_54742)
	{
		MISC::ADD_REPLAY_STAT_VALUE(iVar0);
		MISC::ADD_REPLAY_STAT_VALUE(iParam0);
		MISC::ADD_REPLAY_STAT_VALUE(iParam1);
	}
}

int func_84(int iParam0)//Position - 0xD143
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (STATS::STAT_GET_INT(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

bool func_85(int iParam0)//Position - 0xD16C
{
	return MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dead_Bitset, iParam0);
}

int func_86(int iParam0)//Position - 0xD182
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[iParam0];
}

int func_87(int iParam0)//Position - 0xD1AF
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

char* func_88(int iParam0)//Position - 0xD200
{
	switch (iParam0)
	{
		case 1:
			return "JCSLMVANR";
		
		case 2:
			return "JCHMDRAZ";
		
		case 3:
			return "HSTAGNCUT";
		
		case 4:
			return "UNSELLWEAP";
		
		case 0:
			return "HSTECUT";
		
		case 5:
			return "HSTSLWLD";
		
		case 6:
			return "HSTCASECUT";
		
		default:
	}
	return "UNSET_HEISTPENALTY";
}

void func_89(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD26E
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_90(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xD2E1
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_91(int iParam0)//Position - 0xD304
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
	
	if (Global_86587.f_3)
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1 = 201600000;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/] = 201600000;
			break;
		
		case 3:
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1 = 331985;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/] = 331985;
			break;
		
		case 1:
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/] = 20000000;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1 = 20000000;
			break;
	}
	iVar0 = func_86(func_68(iParam0));
	iVar1 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1;
	switch (iParam0)
	{
		case 0:
			func_93(iParam0, 2, 2500000);
			break;
		
		case 1:
			func_93(iParam0, 4, 20000000);
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_17[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < Global_86597[iParam0 /*38*/].f_37)
	{
		if (Global_86597[iParam0 /*38*/].f_31[iVar2] > 0)
		{
			iVar3 = (iVar3 + Global_86597[iParam0 /*38*/].f_31[iVar2]);
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1 = (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1 - Global_86597[iParam0 /*38*/].f_31[iVar2]);
		}
		iVar2++;
	}
	iVar1 = (iVar1 - iVar3);
	if (iParam0 == 2)
	{
		iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1) * 0.78f));
		func_93(iParam0, 3, iVar4);
		Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1 = (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1 - iVar4);
		iVar1 = (iVar1 - iVar4);
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		iVar5 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar0 /*6*/][iVar2];
		switch (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_11[iVar2])
		{
			case 1:
			case 2:
			case 0:
				Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_17[iVar2] = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(Global_86242[iVar5 /*5*/].f_1) * 0.01f) * IntToFloat(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1)));
				break;
			
			case 3:
				Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_17[iVar2] = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(Global_86242[iVar5 /*5*/].f_1) * 0.015f) * IntToFloat(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1)));
				break;
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_86396[iVar0 /*19*/])
	{
		iVar1 = (iVar1 - Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_17[iVar2]);
		iVar2++;
	}
	Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_2[0] = 0;
	Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_2[1] = 0;
	Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_2[2] = 0;
	Global_86587.f_7 = 0;
	switch (iParam0)
	{
		case 0:
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_6[0] = 0f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_6[1] = 0f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_6[2] = -1f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_2[1] = SYSTEM::CEIL((0.12f * IntToFloat(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_2[1]);
			Global_86587.f_7 = SYSTEM::CEIL((0.14f * IntToFloat(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_86587.f_7);
			Global_86587.f_6 = 14f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_2[0] = iVar1;
			break;
		
		case 1:
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[1 /*23*/].f_6[0] = 0f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[1 /*23*/].f_6[1] = 0f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[1 /*23*/].f_6[2] = 0f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[1 /*23*/].f_2[0] = 0;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[1 /*23*/].f_2[1] = 0;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[1 /*23*/].f_2[2] = 0;
			Global_86587.f_6 = -1f;
			break;
		
		case 2:
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[2 /*23*/].f_6[0] = 0f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[2 /*23*/].f_6[1] = 0f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[2 /*23*/].f_6[2] = 0f;
			Global_86587.f_7 = SYSTEM::CEIL((0.12f * IntToFloat(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_86587.f_7);
			Global_86587.f_6 = 12f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[2 /*23*/].f_2[0] = (iVar1 / 3);
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[2 /*23*/].f_2[1] = (iVar1 / 3);
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[2 /*23*/].f_2[2] = (iVar1 / 3);
			Global_86587.f_6 = 0f;
			break;
		
		case 3:
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[3 /*23*/].f_6[0] = -1f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[3 /*23*/].f_6[1] = 0f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[3 /*23*/].f_6[2] = 0f;
			Global_86587.f_7 = SYSTEM::CEIL((0.12f * IntToFloat(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_86587.f_7);
			Global_86587.f_6 = 12f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[3 /*23*/].f_2[1] = iVar1;
			break;
		
		case 4:
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_6[0] = 0f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_6[1] = 0f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_6[2] = 0f;
			Global_86587.f_7 = SYSTEM::CEIL((0.12f * IntToFloat(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_86587.f_7);
			Global_86587.f_6 = 12f;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_2[0] = (iVar1 / 3);
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_2[1] = (iVar1 / 3);
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_2[2] = (iVar1 / 3);
			Global_86587.f_6 = 0f;
			break;
	}
	iVar6 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1;
	if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_6[0] != -1f)
	{
		Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_6[0] = ((SYSTEM::TO_FLOAT(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_2[0]) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
	}
	if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_6[1] != -1f)
	{
		Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_6[1] = ((SYSTEM::TO_FLOAT(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_2[1]) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
	}
	if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_6[2] != -1f)
	{
		Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_6[2] = ((SYSTEM::TO_FLOAT(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_2[2]) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
	}
	if (Global_86587.f_6 != -1f)
	{
		Global_86587.f_6 = ((SYSTEM::TO_FLOAT(Global_86587.f_7) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
	}
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("jewel_heist_raw_take"), Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/], 1);
			break;
	}
	iVar7 = 0;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		iVar7 = (iVar7 + Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_2[iVar8]);
		iVar8++;
	}
	switch (iParam0)
	{
		case 0:
			func_92(810, Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1, 1);
			func_92(811, iVar7, 1);
			break;
		
		case 1:
			switch (func_86(8))
			{
				case 3:
					func_92(610, Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1, 1);
					func_92(611, iVar7, 1);
					break;
				
				case 4:
					func_92(622, Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1, 1);
					func_92(623, iVar7, 1);
					break;
			}
			break;
		
		case 2:
			func_92(734, Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1, 1);
			func_92(735, iVar7, 1);
			break;
		
		case 3:
			switch (func_86(10))
			{
				case 6:
					break;
				
				case 7:
					break;
			}
			break;
		
		case 4:
			switch (func_86(11))
			{
				case 8:
					func_92(664, Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1, 1);
					func_92(671, iVar7, 1);
					break;
				
				case 9:
					func_92(674, Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iParam0 /*23*/].f_1, 1);
					func_92(682, iVar7, 1);
					break;
			}
			break;
	}
	Global_86587.f_3 = 1;
	Global_54750 = 0;
}

void func_92(int iParam0, int iParam1, bool bParam2)//Position - 0xDC05
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		if (Global_66846[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_66846[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_66846[iVar0 /*9*/].f_1 = (Global_66846[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_66846[iVar0 /*9*/] != -1)
	{
		if (Global_54975[Global_66846[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_66846[iVar0 /*9*/].f_1 > 1)
			{
				Global_66846[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_66846[iVar0 /*9*/].f_1 < 0)
			{
				Global_66846[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_93(int iParam0, int iParam1, int iParam2)//Position - 0xDCAF
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0)
	{
		return;
	}
	iVar0 = iParam2;
	if (iVar0 < 0)
	{
		iVar0 = (iVar0 * -1);
	}
	bVar1 = false;
	if (Global_86597[iParam0 /*38*/].f_37 == 5)
	{
		bVar1 = true;
	}
	iVar2 = Global_86597[iParam0 /*38*/].f_37;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_86597[iParam0 /*38*/].f_25[iVar3] == iParam1)
		{
			Global_86597[iParam0 /*38*/].f_25[iVar3] = iParam1;
			Global_86597[iParam0 /*38*/].f_31[iVar3] = iVar0;
			return;
		}
		iVar3++;
	}
	if (bVar1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("hcs_penalty_paleto_drop_money"), iParam2, 1);
					break;
				
				case 4:
					STATS::STAT_SET_INT(joaat("hcs_penalty_bigs_drop_money"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("hcs_penalty_jewel_madr_house"), iParam2, 1);
			break;
		
		case 4:
			STATS::STAT_SET_INT(joaat("hcs_penalty_docks_unsell_wpn"), iParam2, 1);
			break;
		
		case 3:
			STATS::STAT_SET_INT(joaat("hcs_penalty_paleto_agent_cut"), iParam2, 1);
			break;
		
		case 5:
			STATS::STAT_SET_INT(joaat("hcs_penalty_bigs_slow_loading"), iParam2, 1);
			break;
		
		case 6:
			STATS::STAT_SET_INT(joaat("hcs_penalty_bigs_hostage_gift"), iParam2, 1);
			break;
	}
	Global_86597[iParam0 /*38*/].f_25[Global_86597[iParam0 /*38*/].f_37] = iParam1;
	Global_86597[iParam0 /*38*/].f_31[Global_86597[iParam0 /*38*/].f_37] = iVar0;
	Global_86597[iParam0 /*38*/].f_37++;
}

bool func_94(bool bParam0)//Position - 0xDE67
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

void func_95()//Position - 0xDE92
{
	int iVar0;
	int iVar1;
	
	if (Global_66845 > 16)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		if (Global_66846[iVar0 /*9*/].f_1 == 0)
		{
			if (Global_66846[iVar0 /*9*/].f_2 != 0f)
			{
				Global_66846[iVar0 /*9*/].f_1 = SYSTEM::FLOOR(Global_66846[iVar0 /*9*/].f_2);
			}
		}
		iVar1 = Global_66846[iVar0 /*9*/];
		if (iVar1 > 0)
		{
			if (Global_54975[iVar1 /*13*/] == 9)
			{
				Global_66846[iVar0 /*9*/].f_1 = SYSTEM::ROUND(fLocal_628);
			}
			if (Global_54975[iVar1 /*13*/] == 15)
			{
				Global_66846[iVar0 /*9*/].f_1 = iLocal_629;
			}
		}
		iVar0++;
	}
}

void func_96()//Position - 0xDF39
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_54769)
	{
		return;
	}
	Global_54769 = 1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (func_7(joaat("sp0_shots")) - Global_54773);
	iVar1 = (func_7(joaat("sp0_hits")) - Global_54772);
	iVar0 = (iVar0 + (func_7(joaat("sp1_shots")) - Global_54775));
	iVar1 = (iVar1 + (func_7(joaat("sp1_hits")) - Global_54774));
	iVar0 = (iVar0 + (func_7(joaat("sp2_shots")) - Global_54777));
	iVar1 = (iVar1 + (func_7(joaat("sp2_hits")) - Global_54776));
	SYSTEM::WAIT(0);
	fVar2 = 100f;
	if (!iVar0 == 0)
	{
		fVar3 = SYSTEM::TO_FLOAT(iVar0);
		fVar4 = SYSTEM::TO_FLOAT(iVar1);
		fVar2 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR(((fVar4 / fVar3) * 100f)));
		if (fVar2 > 100f)
		{
			fVar2 = 100f;
		}
	}
	fLocal_628 = fVar2;
	iLocal_629 = iVar0;
}

void func_97(var uParam0)//Position - 0xE00F
{
	func_62(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

int func_98()//Position - 0xE039
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

void func_99()//Position - 0xE055
{
	int iVar0;
	
	if (Global_24689 == 0 && !Global_24693)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		Global_66846[iVar0 /*9*/].f_3 = 4;
		iVar0++;
	}
}

void func_100()//Position - 0xE094
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	func_101();
	if (((Global_54756 && PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())) && !CUTSCENE::IS_CUTSCENE_ACTIVE()) && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		Global_54756 = 0;
	}
	if (Global_54749)
	{
		Global_54749 = 0;
		iLocal_620 = 0;
	}
	bVar0 = true;
	bVar1 = true;
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		bVar0 = false;
	}
	if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (Global_54756)
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (bVar0)
	{
		iLocal_620 = SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f));
	}
	iVar2 = 0;
	fVar3 = 0f;
	iVar2 = 0;
	while (iVar2 < Global_66845)
	{
		if (Global_66846[iVar2 /*9*/] >= 0)
		{
			iVar4 = Global_54975[Global_66846[iVar2 /*9*/] /*13*/];
			switch (iVar4)
			{
				case 6:
					if (Global_66846[iVar2 /*9*/].f_6 != 0)
					{
						if (Global_66846[iVar2 /*9*/].f_7 == 1)
						{
							Global_66846[iVar2 /*9*/].f_8 = 0;
							Global_66846[iVar2 /*9*/].f_1 = 0;
							Global_66846[iVar2 /*9*/].f_7 = 0;
						}
						else if (ENTITY::DOES_ENTITY_EXIST(Global_66846[iVar2 /*9*/].f_6))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_66846[iVar2 /*9*/].f_6))
							{
								iLocal_624 = Global_66846[iVar2 /*9*/].f_8;
								iLocal_623 = ENTITY::GET_ENTITY_HEALTH(Global_66846[iVar2 /*9*/].f_6);
								iLocal_625 = (iLocal_624 - iLocal_623);
								if (iLocal_625 > 0)
								{
									Global_66846[iVar2 /*9*/].f_1 = (Global_66846[iVar2 /*9*/].f_1 + iLocal_625);
									if (Global_66846[iVar2 /*9*/].f_1 < 0)
									{
										Global_66846[iVar2 /*9*/].f_1 = (Global_66846[iVar2 /*9*/].f_1 * -1);
									}
								}
								Global_66846[iVar2 /*9*/].f_8 = iLocal_623;
							}
						}
						else
						{
							Global_66846[iVar2 /*9*/].f_6 = 0;
						}
					}
					break;
				
				case 1:
					Global_66846[iVar2 /*9*/].f_1 = (Global_66846[iVar2 /*9*/].f_1 + iLocal_620);
					break;
				
				case 2:
					if (Global_54757)
					{
						Global_66846[iVar2 /*9*/].f_1 = (Global_66846[iVar2 /*9*/].f_1 + iLocal_620);
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (Global_54758)
					{
						if (Global_54760 == -1 || Global_66846[iVar2 /*9*/] == Global_54760)
						{
							if (((Global_66846[iVar2 /*9*/] == 339 || Global_66846[iVar2 /*9*/] == 179) || Global_66846[iVar2 /*9*/] == 342) || Global_66846[iVar2 /*9*/] == 234)
							{
								Global_66846[iVar2 /*9*/].f_1 = (Global_66846[iVar2 /*9*/].f_1 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
							}
							else
							{
								Global_66846[iVar2 /*9*/].f_1 = (Global_66846[iVar2 /*9*/].f_1 + iLocal_620);
							}
						}
					}
					break;
				
				case 5:
					if (bVar1)
					{
						if (Global_54762 == -1 || Global_54762 == Global_66846[iVar2 /*9*/])
						{
							if (!Global_54761 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Global_54761))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Global_54761))
									{
										if (ENTITY::IS_ENTITY_A_VEHICLE(Global_54761))
										{
											fVar3 = ENTITY::GET_ENTITY_SPEED(Global_54761);
											if (fVar3 > Global_66846[iVar2 /*9*/].f_2)
											{
												Global_66846[iVar2 /*9*/].f_2 = fVar3;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 13:
					break;
				
				case 12:
					break;
				
				case 10:
				case 11:
				case 14:
					break;
				
				case 16:
					break;
				
				case 17:
					if (func_48(func_56()))
					{
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()) && PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::GET_PLAYER_INDEX()))
						{
							Global_66846[iVar2 /*9*/].f_1 = (Global_66846[iVar2 /*9*/].f_1 + iLocal_620);
						}
					}
					break;
				
				case 15:
					break;
				
				default:
					break;
				}
		}
		iVar2++;
	}
}

void func_101()//Position - 0xE46B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if ((((Global_67041 == 0 && Global_67031 == 0) && Global_54909 == 0) && Global_54779 == 0) && !Global_66997)
	{
		return;
	}
	iVar10 = 0;
	if (Global_54779 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_54780[iVar0 /*2*/] != 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_54780[iVar0 /*2*/]))
				{
					Global_54780[iVar0 /*2*/] = 0;
					Global_54779 = (Global_54779 - 1);
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar3 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar0);
		switch (iVar3)
		{
			case 140:
				SCRIPT::GET_EVENT_DATA(0, iVar0, &iVar4, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					ENTITY::IS_ENTITY_DEAD(iVar4);
					if (Global_54909 > 0)
					{
						iVar7 = ENTITY::GET_ENTITY_MODEL(iVar4);
						iVar1 = 0;
						iVar1 = 0;
						while (iVar1 < Global_54909)
						{
							if (Global_54910[iVar1 /*2*/] == iVar7)
							{
								iVar10 = (iVar10 + Global_54910[iVar1 /*2*/].f_1);
							}
							iVar1++;
						}
					}
					if (ENTITY::IS_ENTITY_A_PED(iVar4) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4) != PLAYER::PLAYER_PED_ID())
					{
						uVar5 = PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4));
						iVar14 = 0;
						if (ENTITY::DOES_ENTITY_EXIST(uVar5))
						{
							if (ENTITY::IS_ENTITY_A_VEHICLE(iVar5))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									iVar15 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								}
								else
								{
									iVar15 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								}
								if (ENTITY::DOES_ENTITY_EXIST(iVar15) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar5) == iVar15)
								{
									iVar14 = 1;
								}
							}
						}
						if ((ENTITY::IS_ENTITY_A_PED(iVar5) && PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()) == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5)) || iVar14)
						{
							if (ENTITY::IS_ENTITY_A_PED(iVar5))
							{
								iVar6 = PED::GET_PED_CAUSE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4));
								if (Global_54779 > 0)
								{
									iVar11 = func_105(iVar4);
									if (iVar11 != -1)
									{
										PED::GET_PED_LAST_DAMAGE_BONE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_54780[iVar11 /*2*/]), &iLocal_627);
										if (iLocal_627 == 31086 || iLocal_627 == 39317)
										{
											if (iVar6 != 0 && iVar6 != joaat("weapon_unarmed"))
											{
												func_104();
												Global_54780[iVar11 /*2*/] = 0;
												Global_54779 = (Global_54779 - 1);
											}
										}
									}
								}
								if (Global_67041 > 0)
								{
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < Global_67041)
									{
										if (Global_67032[iVar1 /*2*/] == iVar6)
										{
											func_92(Global_67032[iVar1 /*2*/].f_1, 1, 0);
										}
										iVar1++;
									}
								}
							}
							if (Global_66997)
							{
								iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
								iVar13 = PED::GET_PED_TYPE(iVar12);
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4) && ((((((!iVar13 == 22 && !iVar13 == 19) && !iVar13 == 17) && !iVar13 == 18) && !iVar13 == 27) && !iVar13 == 29) && !iVar13 == 28))
								{
									iVar9 = PED::GET_RELATIONSHIP_BETWEEN_PEDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4));
									switch (iVar9)
									{
										case 255:
										case 0:
										case 1:
										case 2:
											if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4)))
											{
												func_103();
											}
											break;
										
										default:
											break;
										}
									}
							}
							if (Global_67031 > 0)
							{
								iVar1 = 0;
								iVar2 = Global_67031;
								bVar8 = false;
								while (!bVar8)
								{
									if (Global_66998[iVar1 /*2*/] != 0)
									{
										if (ENTITY::DOES_ENTITY_EXIST(Global_66998[iVar1 /*2*/]))
										{
											if (ENTITY::IS_ENTITY_DEAD(Global_66998[iVar1 /*2*/]))
											{
												if (Global_66998[iVar1 /*2*/] == iVar4)
												{
													func_92(Global_66998[iVar1 /*2*/].f_1, 1, 0);
													Global_66998[iVar1 /*2*/] = 0;
												}
											}
										}
										else
										{
											Global_66998[iVar1 /*2*/] = 0;
										}
										iVar2 = (iVar2 - 1);
									}
									iVar1++;
									if (iVar1 == 16 || iVar2 == 0)
									{
										bVar8 = true;
									}
								}
								if (Global_67031 > 0)
								{
									while (Global_66998[(Global_67031 - 1) /*2*/] == 0 && Global_67031 > 1)
									{
										if (Global_67031 > 1)
										{
											Global_67031 = (Global_67031 - 1);
										}
									}
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
	if (iVar10 > 0)
	{
		func_102(iVar10);
	}
}

void func_102(int iParam0)//Position - 0xE872
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		iVar1 = Global_66846[iVar0 /*9*/];
		if (Global_54975[iVar1 /*13*/] == 13)
		{
			Global_66846[iVar0 /*9*/].f_1 = (Global_66846[iVar0 /*9*/].f_1 + iParam0);
		}
		iVar0++;
	}
}

void func_103()//Position - 0xE8BF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		iVar1 = Global_66846[iVar0 /*9*/];
		if (Global_54975[iVar1 /*13*/] == 16)
		{
			Global_66846[iVar0 /*9*/].f_1++;
		}
		iVar0++;
	}
}

void func_104()//Position - 0xE90B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_54779 == 0)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Global_66845)
	{
		iVar2 = Global_66846[iVar1 /*9*/];
		if (Global_54975[iVar2 /*13*/] == 7)
		{
			Global_66846[iVar1 /*9*/].f_1++;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_105(int iParam0)//Position - 0xE969
{
	int iVar0;
	
	if (Global_54779 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_54780[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_106()//Position - 0xE9A4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (MISC::_0xD642319C54AADEB6())
	{
		if (MISC::_0x5B1F2E327B6B6FE1() == 33)
		{
			if (MISC::GET_REPLAY_STAT_MISSION_TYPE() == 33)
			{
				iVar0 = MISC::GET_REPLAY_STAT_COUNT();
				iVar1 = -1;
				iVar2 = (iVar0 - 4);
				if (((iVar0 - 4) % 3) == 0)
				{
					iVar0 = ((iVar0 - 4) / 3);
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < iVar0)
					{
						iVar4 = MISC::GET_REPLAY_STAT_AT_INDEX(iVar3 * 3 + 1);
						iVar5 = MISC::GET_REPLAY_STAT_AT_INDEX(iVar3 * 3 + 2);
						switch (iVar5)
						{
							case 84:
							case 100:
							case 69:
							case 41:
							case 54:
								iVar1 = iVar4;
								break;
						}
						func_83(iVar4, iVar5);
						iVar3++;
					}
					uVar6 = MISC::GET_REPLAY_STAT_AT_INDEX(iVar2);
					uVar7 = MISC::GET_REPLAY_STAT_AT_INDEX(iVar2 + 1);
					bVar8 = false;
					if (MISC::GET_REPLAY_STAT_AT_INDEX(iVar2 + 2) > 0)
					{
						bVar8 = true;
					}
					iVar9 = 0;
					if (MISC::GET_REPLAY_STAT_AT_INDEX(iVar2 + 3) > 0)
					{
						iVar9 = 1;
					}
					Global_66995 = iVar9;
					Global_66996 = uVar6;
					if (iVar1 == -1)
					{
						func_71(SYSTEM::TO_FLOAT(uVar7), bVar8);
					}
					else
					{
						func_71(SYSTEM::TO_FLOAT(iVar1), bVar8);
					}
				}
				func_107();
			}
		}
		if (MISC::_0x5B1F2E327B6B6FE1() == 13)
		{
			if (MISC::GET_REPLAY_STAT_MISSION_TYPE() == 37)
			{
				iVar10 = MISC::GET_REPLAY_STAT_COUNT();
				if (iVar10 == 3)
				{
					iVar11 = MISC::GET_REPLAY_STAT_AT_INDEX(0);
					iVar12 = MISC::GET_REPLAY_STAT_AT_INDEX(1);
					iVar13 = MISC::GET_REPLAY_STAT_AT_INDEX(2);
					Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[iVar11 /*2*/] = iVar12;
					Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[iVar11 /*2*/].f_1 = iVar13;
					func_107();
				}
			}
		}
	}
}

int func_107()//Position - 0xEB04
{
	if (func_94(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

void func_108()//Position - 0xEB4F
{
	Global_68505 = 0;
	Global_68506 = 0;
	Global_54750 = 0;
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	HUD::THEFEED_RESUME();
	iLocal_620 = 0;
	Global_54746 = 0;
	Global_54760 = -1;
	iLocal_630 = 0;
	Global_54744 = 0;
	Global_54743 = 0;
	iLocal_632 = 0;
	Global_54761 = 0;
	Global_54759 = 0;
	Global_54740 = 0;
	Global_67041 = 0;
	Global_67031 = 0;
	func_4();
	func_3();
	if (bLocal_633)
	{
		func_1(&Local_44);
		bLocal_633 = false;
	}
	if (Global_3)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	Global_54755 = 0;
	Global_54751 = 0;
}

