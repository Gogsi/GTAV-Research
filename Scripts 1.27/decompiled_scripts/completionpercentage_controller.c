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
	var uLocal_27[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_98[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_149[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_215[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_301[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_362[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	struct<3> Local_401 = { 0, 0, 0 } ;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	bool bLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	int iLocal_421 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	GlobalFunc_6663();
	iLocal_405 = MISC::GET_GAME_TIMER();
	iLocal_407 = 0;
	while (true)
	{
		SYSTEM::WAIT(0);
		func_139();
		if (Global_97087)
		{
			if ((iLocal_404 - iLocal_407) > 300000)
			{
				iLocal_412 = 1;
				iLocal_407 = MISC::GET_GAME_TIMER();
				Global_97087 = 0;
			}
			else if (iLocal_407 == 0)
			{
				iLocal_412 = 1;
				iLocal_407 = MISC::GET_GAME_TIMER();
				Global_97087 = 0;
			}
			else
			{
				iLocal_412 = 0;
				Global_97087 = 0;
			}
		}
		if (iLocal_412 == 1)
		{
			if (!iLocal_409)
			{
				if (!iLocal_410)
				{
					if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
					{
						DATAFILE::DATAFILE_DELETE();
					}
					iLocal_395 = 0;
					iLocal_396 = 0;
					iLocal_397 = 0;
					iLocal_398 = 0;
					iLocal_399 = 0;
					iLocal_400 = 0;
					DATAFILE::DATAFILE_CREATE();
					iLocal_413 = DATAFILE::DATAFILE_GET_FILE_DICT();
					DATAFILE::DATADICT_SET_FLOAT(iLocal_413, "tot_pc", Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853);
					uLocal_414 = DATAFILE::DATADICT_CREATE_DICT(iLocal_413, "Sect");
					uLocal_415 = DATAFILE::DATADICT_CREATE_ARRAY(uLocal_414, "mgc");
					uLocal_416 = DATAFILE::DATADICT_CREATE_ARRAY(uLocal_414, "msnc");
					uLocal_417 = DATAFILE::DATADICT_CREATE_ARRAY(uLocal_414, "ojc");
					uLocal_418 = DATAFILE::DATADICT_CREATE_ARRAY(uLocal_414, "rcc");
					uLocal_419 = DATAFILE::DATADICT_CREATE_ARRAY(uLocal_414, "revc");
					uLocal_420 = DATAFILE::DATADICT_CREATE_ARRAY(uLocal_414, "misc");
					iLocal_421 = 0;
					while (iLocal_421 < 321)
					{
						if (!Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 0)
						{
							if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 1 || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 2)
							{
								if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_5 || Global_97088 == 1)
								{
									uLocal_27[iLocal_395] = DATAFILE::DATAARRAY_ADD_DICT(uLocal_416);
									DATAFILE::DATADICT_SET_STRING(uLocal_27[iLocal_395], "nm", &(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/]));
									DATAFILE::DATADICT_SET_BOOL(uLocal_27[iLocal_395], "cmp", Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_5);
									if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 1)
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_27[iLocal_395], "100", 1);
									}
									else
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_27[iLocal_395], "100", 0);
									}
									Local_401 = { func_123(iLocal_421) };
									DATAFILE::DATADICT_SET_INT(uLocal_27[iLocal_395], "x", SYSTEM::ROUND(Local_401.x));
									DATAFILE::DATADICT_SET_INT(uLocal_27[iLocal_395], "y", SYSTEM::ROUND(Local_401.f_1));
									iLocal_395++;
								}
							}
							if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 3 || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 4)
							{
								if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_5 || Global_97088 == 1)
								{
									uLocal_98[iLocal_396] = DATAFILE::DATAARRAY_ADD_DICT(uLocal_415);
									DATAFILE::DATADICT_SET_STRING(uLocal_98[iLocal_396], "nm", &(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/]));
									DATAFILE::DATADICT_SET_BOOL(uLocal_98[iLocal_396], "cmp", Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_5);
									if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 3)
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_98[iLocal_396], "100", 1);
									}
									else
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_98[iLocal_396], "100", 0);
									}
									Local_401 = { func_123(iLocal_421) };
									DATAFILE::DATADICT_SET_INT(uLocal_98[iLocal_396], "x", SYSTEM::ROUND(Local_401.x));
									DATAFILE::DATADICT_SET_INT(uLocal_98[iLocal_396], "y", SYSTEM::ROUND(Local_401.f_1));
									iLocal_396++;
								}
							}
							if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 5 || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 6)
							{
								if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_5 || Global_97088 == 1)
								{
									uLocal_149[iLocal_397] = DATAFILE::DATAARRAY_ADD_DICT(uLocal_417);
									DATAFILE::DATADICT_SET_STRING(uLocal_149[iLocal_397], "nm", &(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/]));
									DATAFILE::DATADICT_SET_BOOL(uLocal_149[iLocal_397], "cmp", Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_5);
									if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 5)
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_149[iLocal_397], "100", 1);
									}
									else
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_149[iLocal_397], "100", 0);
									}
									Local_401 = { func_123(iLocal_421) };
									DATAFILE::DATADICT_SET_INT(uLocal_149[iLocal_397], "x", SYSTEM::ROUND(Local_401.x));
									DATAFILE::DATADICT_SET_INT(uLocal_149[iLocal_397], "y", SYSTEM::ROUND(Local_401.f_1));
									iLocal_397++;
								}
							}
							if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 7 || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 8)
							{
								if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_5 || Global_97088 == 1)
								{
									uLocal_301[iLocal_398] = DATAFILE::DATAARRAY_ADD_DICT(uLocal_418);
									DATAFILE::DATADICT_SET_STRING(uLocal_301[iLocal_398], "nm", &(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/]));
									DATAFILE::DATADICT_SET_BOOL(uLocal_301[iLocal_398], "cmp", Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_5);
									if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 7)
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_301[iLocal_398], "100", 1);
									}
									else
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_301[iLocal_398], "100", 0);
									}
									Local_401 = { func_123(iLocal_421) };
									DATAFILE::DATADICT_SET_INT(uLocal_301[iLocal_398], "x", SYSTEM::ROUND(Local_401.x));
									DATAFILE::DATADICT_SET_INT(uLocal_301[iLocal_398], "y", SYSTEM::ROUND(Local_401.f_1));
									iLocal_398++;
								}
							}
							if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 9 || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 10)
							{
								if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_5 || Global_97088 == 1)
								{
									uLocal_215[iLocal_399] = DATAFILE::DATAARRAY_ADD_DICT(uLocal_419);
									DATAFILE::DATADICT_SET_STRING(uLocal_215[iLocal_399], "nm", &(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/]));
									DATAFILE::DATADICT_SET_BOOL(uLocal_215[iLocal_399], "cmp", Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_5);
									if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 9)
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_215[iLocal_399], "100", 0);
									}
									else
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_215[iLocal_399], "100", 0);
									}
									DATAFILE::DATADICT_SET_INT(uLocal_215[iLocal_399], "x", SYSTEM::ROUND(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_10));
									DATAFILE::DATADICT_SET_INT(uLocal_215[iLocal_399], "y", SYSTEM::ROUND(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_11));
									iLocal_399++;
								}
							}
							if (((Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 11 || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 13) || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 12) || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 14)
							{
								if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_5 || Global_97088 == 1)
								{
									uLocal_362[iLocal_400] = DATAFILE::DATAARRAY_ADD_DICT(uLocal_420);
									DATAFILE::DATADICT_SET_STRING(uLocal_362[iLocal_400], "nm", &(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/]));
									DATAFILE::DATADICT_SET_BOOL(uLocal_362[iLocal_400], "cmp", Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_5);
									if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 11 || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iLocal_421 /*12*/].f_6 == 13)
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_362[iLocal_400], "100", 1);
									}
									else
									{
										DATAFILE::DATADICT_SET_BOOL(uLocal_362[iLocal_400], "100", 0);
									}
									Local_401 = { func_123(iLocal_421) };
									DATAFILE::DATADICT_SET_INT(uLocal_362[iLocal_400], "x", SYSTEM::ROUND(Local_401.x));
									DATAFILE::DATADICT_SET_INT(uLocal_362[iLocal_400], "y", SYSTEM::ROUND(Local_401.f_1));
									iLocal_400++;
								}
							}
						}
						iLocal_421++;
					}
					if (GlobalFunc_5078())
					{
						iLocal_409 = 1;
						iLocal_410 = 0;
						Global_97087 = 0;
						iLocal_412 = 0;
					}
					else
					{
						iLocal_409 = 0;
						iLocal_410 = 0;
						Global_97087 = 0;
						iLocal_412 = 0;
					}
				}
			}
		}
		if (iLocal_409)
		{
			if (!iLocal_410)
			{
				if (DATAFILE::DATAFILE_START_SAVE_TO_CLOUD("GTA5/checklist/index.json"))
				{
					iLocal_410 = 1;
				}
			}
			else if (!DATAFILE::DATAFILE_UPDATE_SAVE_TO_CLOUD(&bLocal_411))
			{
				if (bLocal_411)
				{
				}
				if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
				{
					DATAFILE::DATAFILE_DELETE();
				}
				iLocal_409 = 0;
				iLocal_410 = 0;
			}
		}
		if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3854 == 0)
		{
			if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853 == 100f || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853 > 100f)
			{
				if (GlobalFunc_5078())
				{
					STATS::_UPDATE_STAT_FLOAT(joaat("total_progress_made"), Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853, 0);
					if (NETWORK::_FACEBOOK_IS_AVAILABLE())
					{
						NETWORK::_FACEBOOK_SET_MILESTONE_COMPLETE(0);
						GlobalFunc_5849(0);
					}
				}
				Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3854 = 1;
				GlobalFunc_585(133, 1);
				GlobalFunc_7621(163, 1, 0, 1, 0);
				GlobalFunc_7621(151, 1, 0, 1, 0);
				func_31(joaat("player_one"), 3, 151, 1, 1);
				GlobalFunc_8950(57);
				MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[57 /*6*/]), 1);
				GlobalFunc_8960(13, 1);
			}
		}
		if (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() > Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT)
		{
			if (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() >= 50)
			{
				GlobalFunc_8960(22, 1);
			}
			func_4(GlobalFunc_8354(), 4, (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() - Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT) * 2);
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT = MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS();
			if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT >= 50)
			{
				STATS::_UPDATE_STAT_INT(joaat("sp0_water_cannon_kills"), 100, 0);
			}
			else if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT >= 38)
			{
				STATS::_UPDATE_STAT_INT(joaat("sp0_water_cannon_kills"), 75, 0);
			}
			else if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT >= 25)
			{
				GlobalFunc_7610(289, 0, 0);
				STATS::_UPDATE_STAT_INT(joaat("sp0_water_cannon_kills"), 50, 0);
			}
			else if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT >= 13)
			{
				STATS::_UPDATE_STAT_INT(joaat("sp0_water_cannon_kills"), 25, 0);
			}
		}
	}
}




void func_4(int iParam0, int iParam1, int iParam2)//Position - 0xD15
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1475[iParam1 /*4*/][iParam0] = (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 2903;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 2903)
			{
				iVar0 = GlobalFunc_6709(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				GlobalFunc_6784(iVar1, iVar0, -1, 1);
			}
			break;
	}
}



























int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x13DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar19;
	int iVar29;
	
	Global_68106[1 /*14*/] = { GlobalFunc_10870(iParam0, iParam1, iParam2) };
	if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			GlobalFunc_31(iParam1, Global_68106[1 /*14*/].f_5, Global_68106[1 /*14*/].f_2, 1, Global_68106[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("player_zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { GlobalFunc_7617(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_31(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_39(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar19 = { GlobalFunc_7616(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_31(iParam0, 14, uVar19[iVar2], 1, 1);
									func_39(iParam0, 14, uVar19[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			GlobalFunc_31(iParam1, Global_68106[1 /*14*/].f_5, Global_68106[1 /*14*/].f_2, 1, Global_68106[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("player_zero"):
					break;
				
				case joaat("player_one"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar29 = (227 + Global_68106[1 /*14*/].f_4);
								func_31(iParam0, 3, iVar29, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar29 = (176 + Global_68106[1 /*14*/].f_4);
								func_31(iParam0, 3, iVar29, 1, 0);
							}
							break;
						
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar29 = (25 + Global_68106[1 /*14*/].f_4);
								func_31(iParam0, 11, iVar29, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar29 = (9 + Global_68106[1 /*14*/].f_4);
								func_31(iParam0, 11, iVar29, 1, 0);
							}
							break;
						
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar29 = (43 + Global_68106[1 /*14*/].f_4);
								func_31(iParam0, 8, iVar29, 1, 0);
								iVar29 = (59 + Global_68106[1 /*14*/].f_4);
								func_31(iParam0, 8, iVar29, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar29 = (27 + Global_68106[1 /*14*/].f_4);
								func_31(iParam0, 8, iVar29, 1, 0);
								iVar29 = (59 + Global_68106[1 /*14*/].f_4);
								func_31(iParam0, 8, iVar29, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar29 = (27 + Global_68106[1 /*14*/].f_4);
								func_31(iParam0, 8, iVar29, 1, 0);
								iVar29 = (43 + Global_68106[1 /*14*/].f_4);
								func_31(iParam0, 8, iVar29, 1, 0);
							}
							break;
						
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar29 = (41 + Global_68106[1 /*14*/].f_4);
								func_31(iParam0, 14, iVar29, 1, 0);
							}
							break;
					}
					break;
				
				case joaat("player_two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar29 = (94 + Global_68106[1 /*14*/].f_4);
								func_31(iParam0, 4, iVar29, 1, 0);
							}
							break;
						
						case 12:
							if (iParam2 == 2)
							{
								func_31(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}








int func_39(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x27FF
{
	Global_68106[1 /*14*/] = { GlobalFunc_10870(iParam0, iParam1, iParam2) };
	if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			GlobalFunc_31(iParam1, Global_68106[1 /*14*/].f_5, Global_68106[1 /*14*/].f_2, 0, Global_68106[1 /*14*/].f_1, 1, 0);
		}
		else
		{
			GlobalFunc_31(iParam1, Global_68106[1 /*14*/].f_5, Global_68106[1 /*14*/].f_2, 0, Global_68106[1 /*14*/].f_1, 0, 1);
		}
		return 1;
	}
	return 0;
}




















































































Vector3 func_123(int iParam0)//Position - 0x1DA83
{
	int iVar0;
	struct<7> Var1;
	int iVar33;
	int iVar34;
	int iVar35;
	
	switch (func_138(iParam0))
	{
		case 1:
			iVar0 = func_135(iParam0);
			if (iVar0 != -1)
			{
				iVar33 = Global_81155[iVar0 /*34*/].f_10;
				if (iVar33 != 262)
				{
					return GlobalFunc_2247(iVar33, 0);
				}
			}
			break;
		
		case 3:
		case 5:
			iVar34 = func_133(iParam0);
			iVar35 = func_131(iVar34, func_132(iParam0));
			if (iVar35 != 262)
			{
				return GlobalFunc_2247(iVar35, 0);
			}
			break;
		
		case 7:
			GlobalFunc_6675(func_129(iParam0), &Var1);
			return Var1.f_6;
			break;
		
		case 9:
			break;
		
		case 11:
			break;
		
		case 13:
			break;
	}
	return 0f, 0f, 0f;
}






int func_129(int iParam0)//Position - 0x1F5E1
{
	int iVar0;
	
	if (func_138(iParam0) != 7 && func_138(iParam0) != 8)
	{
		return -1;
	}
	iVar0 = func_130(iParam0);
	if (iVar0 == 127)
	{
		return -1;
	}
	return iVar0;
}

int func_130(int iParam0)//Position - 0x1F61B
{
	return Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_8 & 127;
}

int func_131(int iParam0, int iParam1)//Position - 0x1F633
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 124;
					break;
				
				case 1:
					return 125;
					break;
				
				case 2:
					return 126;
					break;
				
				case 3:
					return 127;
					break;
				
				case 4:
					return 128;
					break;
				
				case 5:
					return 129;
					break;
				
				case 6:
					return 130;
					break;
				
				case 7:
					return 131;
					break;
				
				case 8:
					return 132;
					break;
				
				case 9:
					return 133;
					break;
				
				case 10:
					return 134;
					break;
				
				case 11:
					return 135;
					break;
				
				case 12:
					return 136;
					break;
			}
			break;
		
		case 19:
			return 64;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 65;
					break;
				
				case 1:
					return 66;
					break;
			}
			break;
		
		case 2:
			return 67;
			break;
			break;
		
		case 3:
			return 68;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 69;
					break;
				
				case 1:
					return 70;
					break;
				
				case 2:
					return 71;
					break;
				
				case 3:
					return 72;
					break;
				
				case 4:
					return 73;
					break;
				
				case 5:
					return 74;
					break;
			}
			break;
		
		case 5:
			return 75;
			break;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 76;
					break;
				
				case 1:
					return 80;
					break;
				
				case 2:
					return 77;
					break;
				
				case 3:
					return 78;
					break;
				
				case 4:
					return 79;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 81;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 83;
					break;
				
				case 3:
					return 84;
					break;
			}
			break;
		
		case 9:
			return 93;
			break;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 85;
					break;
				
				case 1:
					return 86;
					break;
				
				case 2:
					return 87;
					break;
				
				case 3:
					return 88;
					break;
				
				case 4:
					return 89;
					break;
			}
			break;
		
		case 10:
			return 94;
			break;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 90;
					break;
				
				case 1:
					return 91;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 95;
					break;
				
				case 1:
					return 96;
					break;
				
				case 2:
					return 97;
					break;
				
				case 3:
					return 98;
					break;
				
				case 4:
					return 99;
					break;
				
				case 5:
					return 100;
					break;
				
				case 6:
					return 101;
					break;
				
				case 7:
					return 102;
					break;
			}
			break;
		
		case 14:
			return 103;
			break;
			break;
		
		case 15:
			return 104;
			break;
			break;
		
		case 16:
			return 105;
			break;
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 106;
					break;
				
				case 1:
					return 107;
					break;
				
				case 2:
					return 108;
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return 109;
					break;
				
				case 1:
					return 110;
					break;
			}
			break;
		
		case 12:
			return 262;
			break;
			break;
	}
	return 262;
}

int func_132(int iParam0)//Position - 0x1FA46
{
	return SYSTEM::SHIFT_RIGHT(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_8, 7) & 127;
}

int func_133(int iParam0)//Position - 0x1FA63
{
	int iVar0;
	
	if (func_138(iParam0) != 3 && func_138(iParam0) != 5)
	{
		if (func_138(iParam0) != 4 && func_138(iParam0) != 6)
		{
			return -1;
		}
	}
	iVar0 = func_130(iParam0);
	if (iVar0 == 127)
	{
		return -1;
	}
	return iVar0;
}


int func_135(int iParam0)//Position - 0x1FAF2
{
	int iVar0;
	int iVar1;
	
	if (func_138(iParam0) != 1 && func_138(iParam0) != 2)
	{
		return -1;
	}
	iVar0 = func_130(iParam0);
	if (iVar0 == 127)
	{
		return -1;
	}
	iVar1 = iVar0;
	if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_7 == 1)
	{
		return func_136(iVar1);
	}
	return iVar1;
}

int func_136(int iParam0)//Position - 0x1FB4C
{
	switch (iParam0)
	{
		case 87:
			switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[GlobalFunc_598(0)])
			{
				case 1:
					return 87;
					break;
				
				case 2:
					return 89;
					break;
				
				default:
					return 87;
					break;
			}
			break;
		
		case 74:
			switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[GlobalFunc_598(1)])
			{
				case 3:
					return 74;
					break;
				
				case 4:
					return 75;
					break;
				
				default:
					return 74;
					break;
			}
			break;
		
		case 69:
			switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[GlobalFunc_598(3)])
			{
				case 6:
					return 69;
					break;
				
				case 7:
					return 70;
					break;
				
				default:
					return 69;
					break;
			}
			break;
		
		case 84:
			switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[GlobalFunc_598(4)])
			{
				case 8:
					return 84;
					break;
				
				case 9:
					return 85;
					break;
				
				default:
					return 84;
					break;
			}
			break;
		
		case 78:
			switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[GlobalFunc_598(4)])
			{
				case 8:
					return 78;
					break;
				
				case 9:
					return 79;
					break;
				
				default:
					return 78;
					break;
			}
			break;
		
		case 80:
			switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[GlobalFunc_598(4)])
			{
				case 8:
					return 80;
					break;
				
				case 9:
					return 83;
					break;
				
				default:
					return 80;
					break;
			}
			break;
		
		case 24:
			switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[12])
			{
				case 0:
					return 24;
					break;
				
				case 1:
					return 25;
					break;
				
				case 2:
					return 27;
					break;
				
				default:
					return 24;
					break;
			}
			break;
	}
	return -1;
}


int func_138(int iParam0)//Position - 0x1FD98
{
	return Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_6;
}

void func_139()//Position - 0x1FDAD
{
	int iVar0;
	int iVar1;
	
	iLocal_404 = MISC::GET_GAME_TIMER();
	iLocal_406 = (iLocal_404 - iLocal_405);
	if (iLocal_406 > 5000)
	{
		func_148();
		func_147();
		func_146();
		func_145();
		func_144();
		func_143();
		func_142();
		func_141();
		iLocal_405 = MISC::GET_GAME_TIMER();
		iVar0 = 0;
		iVar1 = 0;
		iVar0 = MISC::GET_PROFILE_SETTING(807);
		switch (iVar0)
		{
			case 0:
				iVar1 = 0;
				break;
			
			case 1:
				iVar1 = 60000;
				break;
			
			case 2:
				iVar1 = 120000;
				break;
			
			case 3:
				iVar1 = 180000;
				break;
			
			case 4:
				iVar1 = 240000;
				break;
			
			case 5:
				iVar1 = 300000;
				break;
			
			case 6:
				iVar1 = 600000;
				break;
			
			case 7:
				iVar1 = 900000;
				break;
			
			case 8:
				iVar1 = 1800000;
				break;
			
			case 9:
				iVar1 = 3600000;
				break;
			
			default:
				iVar1 = 300000;
				break;
		}
		if (iVar1 != Global_97100)
		{
			Global_97100 = iVar1;
		}
	}
	func_140();
}

void func_140()//Position - 0x1FEBB
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_heist2a")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("rural_bank_heist")) == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (iLocal_408)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						SYSTEM::WAIT(0);
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 18))
							{
								STATS::_UPDATE_STAT_INT(joaat("sp0_stars_evaded"), 5, 0);
								MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 18);
							}
							iLocal_408 = 0;
						}
						else
						{
							iLocal_408 = 0;
						}
					}
				}
				else
				{
					iLocal_408 = 0;
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 4)
			{
				iLocal_408 = 1;
			}
		}
		else
		{
			iLocal_408 = 0;
		}
	}
	else
	{
		iLocal_408 = 0;
	}
}

void func_141()//Position - 0x1FF7D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	STATS::STAT_GET_INT(joaat("sp0_shots"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("sp1_shots"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("sp2_shots"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	if (iVar0 > 4999999)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 17))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_shots"), 5000000, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 13);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 14);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 15);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 16);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 17);
		}
	}
	if (iVar0 > 3999999)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 16))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_shots"), 4000000, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 13);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 14);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 15);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 16);
		}
	}
	if (iVar0 > 2999999)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 15))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_shots"), 3000000, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 13);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 14);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 15);
		}
	}
	if (iVar0 > 1999999)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 14))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_shots"), 2000000, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 13);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 14);
		}
	}
	if (iVar0 > 999999)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 13))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_shots"), 1000000, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 13);
		}
	}
}

void func_142()//Position - 0x2018F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	STATS::STAT_GET_INT(joaat("sp0_deaths"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("sp1_deaths"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("sp2_deaths"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	if (iVar0 > 249)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 12))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_deaths"), 250, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 8);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 9);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 10);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 11);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 12);
		}
	}
	if (iVar0 > 99)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 11))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_deaths"), 100, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 8);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 9);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 10);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 11);
		}
	}
	if (iVar0 > 49)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 10))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_deaths"), 50, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 8);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 9);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 10);
		}
	}
	if (iVar0 > 24)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 9))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_deaths"), 25, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 8);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 9);
		}
	}
	if (iVar0 > 9)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 8))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_deaths"), 10, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 8);
		}
	}
}

void func_143()//Position - 0x20389
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	STATS::STAT_GET_INT(joaat("sp0_busted"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("sp1_busted"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("sp2_busted"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	if (iVar0 > 249)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 7))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_busted"), 250, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 3);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 4);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 5);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 6);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 7);
		}
	}
	if (iVar0 > 99)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 6))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_busted"), 100, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 3);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 4);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 5);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 6);
		}
	}
	if (iVar0 > 49)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 5))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_busted"), 50, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 3);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 4);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 5);
		}
	}
	if (iVar0 > 24)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 4))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_busted"), 25, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 3);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 4);
		}
	}
	if (iVar0 > 9)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 3))
		{
			STATS::_UPDATE_STAT_INT(joaat("sp0_busted"), 10, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 3);
		}
	}
}

void func_144()//Position - 0x2056F
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0f;
	STATS::STAT_GET_FLOAT(joaat("sp0_dist_swimming"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp1_dist_swimming"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp2_dist_swimming"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	if (fVar0 > (1609.344f * 1000f))
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 27))
		{
			STATS::_UPDATE_STAT_FLOAT(joaat("sp0_dist_swimming"), 1000f, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 25);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 26);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 27);
		}
	}
	if (fVar0 > (1609.344f * 100f))
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 26))
		{
			STATS::_UPDATE_STAT_FLOAT(joaat("sp0_dist_swimming"), 100f, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 25);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 26);
		}
	}
	if (fVar0 > (1609.344f * 50f))
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 25))
		{
			STATS::_UPDATE_STAT_FLOAT(joaat("sp0_dist_swimming"), 50f, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 25);
		}
	}
}

void func_145()//Position - 0x206B2
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0f;
	STATS::STAT_GET_FLOAT(joaat("sp0_dist_running"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp1_dist_running"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp2_dist_running"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	if (fVar0 > (1609.344f * 1000f))
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 24))
		{
			STATS::_UPDATE_STAT_FLOAT(joaat("sp0_dist_running"), 1000f, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 22);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 23);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 24);
		}
	}
	if (fVar0 > (1609.344f * 100f))
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 23))
		{
			STATS::_UPDATE_STAT_FLOAT(joaat("sp0_dist_running"), 100f, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 22);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 23);
		}
	}
	if (fVar0 > (1609.344f * 50f))
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 22))
		{
			STATS::_UPDATE_STAT_FLOAT(joaat("sp0_dist_running"), 50f, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 22);
		}
	}
}

void func_146()//Position - 0x207F5
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0f;
	STATS::STAT_GET_FLOAT(joaat("sp0_dist_driving_plane"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp0_dist_driving_heli"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp1_dist_driving_plane"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp1_dist_driving_heli"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp2_dist_driving_plane"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp2_dist_driving_heli"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	if (fVar0 > (1609.344f * 50000f))
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 21))
		{
			STATS::_UPDATE_STAT_FLOAT(joaat("sp0_dist_driving_plane"), 50000f, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 19);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 20);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 21);
		}
	}
	if (fVar0 > (1609.344f * 5000f))
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 20))
		{
			STATS::_UPDATE_STAT_FLOAT(joaat("sp0_dist_driving_plane"), 5000f, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 19);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 20);
		}
	}
	if (fVar0 > (1609.344f * 500f))
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 19))
		{
			STATS::_UPDATE_STAT_FLOAT(joaat("sp0_dist_driving_plane"), 500f, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 19);
		}
	}
}

void func_147()//Position - 0x20989
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0f;
	STATS::STAT_GET_FLOAT(joaat("sp0_dist_driving_car"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp0_dist_driving_quadbike"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp0_dist_driving_bike"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp0_dist_driving_bicycle"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp1_dist_driving_car"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp1_dist_driving_quadbike"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp1_dist_driving_bike"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp1_dist_driving_bicycle"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp2_dist_driving_car"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp2_dist_driving_quadbike"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp2_dist_driving_bike"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("sp2_dist_driving_bicycle"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	if (fVar0 > (1609.344f * 50000f))
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 2))
		{
			STATS::_UPDATE_STAT_FLOAT(joaat("sp0_dist_driving_car"), 50000f, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 1);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 2);
		}
	}
	if (fVar0 > (1609.344f * 5000f))
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 1))
		{
			STATS::_UPDATE_STAT_FLOAT(joaat("sp0_dist_driving_car"), 5000f, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 1);
		}
	}
	if (fVar0 > (1609.344f * 500f))
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855, 0))
		{
			STATS::_UPDATE_STAT_FLOAT(joaat("sp0_dist_driving_car"), 500f, 0);
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3855), 0);
		}
	}
}

void func_148()//Position - 0x20B8C
{
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3856, 15))
	{
		if (STATS::_0x5EAD2BF6484852E4())
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3856), 15);
			STATS::_UPDATE_STAT_INT(joaat("sp_vehicle_models_driven"), 200, 0);
		}
	}
}





