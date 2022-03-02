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
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	struct<8> Local_53[50];
	struct<3> Local_454 = { 0, 0, 0 } ;
	int iLocal_457 = 0;
	var uLocal_458 = 0;
	bool bLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	float fVar15;
	bool bVar16;
	int iVar17;
	
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
	fLocal_45 = (20f * 20f);
	iLocal_48 = -1;
	iLocal_49 = -1;
	iLocal_50 = -1;
	iLocal_51 = -1;
	iLocal_52 = -1;
	Local_454 = { 0f, 0f, 0f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		GlobalFunc_2529(&iLocal_48);
		GlobalFunc_2529(&iLocal_49);
		GlobalFunc_2529(&iLocal_50);
		GlobalFunc_2529(&iLocal_51);
		GlobalFunc_2529(&iLocal_52);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_114();
	while (GlobalFunc_2796())
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		func_106();
		if (func_105() && iLocal_46 == 0)
		{
			iLocal_46 = 2;
		}
		if (!GlobalFunc_2(0) && !GlobalFunc_39(14))
		{
			if (iLocal_46 == 0)
			{
				if (GlobalFunc_2796())
				{
					fVar0 = 0f;
					iLocal_47 = func_102(&fVar0);
					iLocal_460 = MISC::IS_BIT_SET(Global_2264, 28);
					if (iLocal_47 != -1)
					{
						if (fVar0 < fLocal_45)
						{
							Var1 = { Local_454 };
							Var4 = { Local_454 };
							Var7 = { Local_454 };
							Var10 = { Local_454 };
							func_99(iLocal_47, &Var1, &Var4, &Var7, &Var10);
							fVar13 = 0f;
							fVar14 = 0f;
							func_98(Var1, Var4, Var7, &fVar13, &fVar14);
							fVar15 = (fVar13 * fVar14);
							if (((((fVar15 >= 0.35f && func_97(Var1, 0f, 1f)) && func_97(Var4, 0f, 1f)) && func_97(Var7, 0f, 1f)) && func_97(Var10, 0f, 1f)) || ((((fVar15 < 0.35f && func_97(Var1, 0.05f, 0.95f)) && func_97(Var4, 0.05f, 0.95f)) && func_97(Var7, 0.05f, 0.95f)) && func_97(Var10, 0.05f, 0.95f)))
							{
								if (fVar13 >= 0.08f && fVar14 >= 0.101f)
								{
									func_96(&iLocal_48, Local_53[iLocal_47 /*8*/], 0.01f);
									func_96(&iLocal_49, Var1, 0.01f);
									func_96(&iLocal_50, Var4, 0.01f);
									func_96(&iLocal_51, Var7, 0.01f);
									func_96(&iLocal_52, Var10, 0.01f);
									bVar16 = false;
									iVar17 = 0;
									while (iVar17 < 10 && !bVar16)
									{
										bVar16 = ((((GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_48) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_49)) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_50)) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_51)) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_52));
										iVar17++;
										SYSTEM::WAIT(0);
									}
									if (bVar16)
									{
										func_95(iLocal_47, 1);
										STATS::STAT_SET_INT(joaat("num_hidden_packages_6"), func_92(), 1);
										bLocal_459 = true;
										if (func_105())
										{
											func_6();
										}
										GlobalFunc_4907();
										GlobalFunc_2793(1);
									}
									GlobalFunc_2529(&iLocal_48);
									GlobalFunc_2529(&iLocal_49);
									GlobalFunc_2529(&iLocal_50);
									GlobalFunc_2529(&iLocal_51);
									GlobalFunc_2529(&iLocal_52);
								}
							}
						}
					}
					iLocal_46 = 1;
				}
			}
			else if (iLocal_46 == 1)
			{
				if (!GlobalFunc_2796())
				{
					GlobalFunc_2793(iLocal_460);
					iLocal_46 = 0;
				}
			}
			else if (iLocal_46 == 2)
			{
				if (!bLocal_459)
				{
					if (GlobalFunc_84())
					{
						GlobalFunc_2645(33, 1);
						func_1();
						GlobalFunc_4907();
						SCRIPT::TERMINATE_THIS_THREAD();
					}
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x398
{
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PHOTOGRAPHY_MONKEY_FLAGS[1] = -1;
}





void func_6()//Position - 0x503
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = true;
	bVar1 = true;
	GlobalFunc_11185(joaat("player_two"), 3, 22, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 3, 23, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 3, 24, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 3, 25, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 3, 26, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 3, 76, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 3, 77, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 3, 78, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 4, 87, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 4, 88, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 4, 89, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 4, 90, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 4, 97, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 4, 98, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 4, 99, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 4, 100, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 4, 101, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 4, 102, bVar0, bVar1, 0, 0);
	GlobalFunc_11185(joaat("player_two"), 4, 103, bVar0, bVar1, 0, 0);
}






















































































int func_92()//Position - 0x1893B
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_93(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_93(int iParam0)//Position - 0x1896A
{
	int iVar0;
	var uVar1;
	
	func_94(iParam0, &iVar0, &uVar1);
	return MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PHOTOGRAPHY_MONKEY_FLAGS[iVar0], uVar1);
}

void func_94(int iParam0, var uParam1, var uParam2)//Position - 0x1898F
{
	*uParam1 = (iParam0 / 32);
	*uParam2 = (iParam0 % 32);
}

void func_95(int iParam0, bool bParam1)//Position - 0x189A7
{
	int iVar0;
	var uVar1;
	
	func_94(iParam0, &iVar0, &uVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PHOTOGRAPHY_MONKEY_FLAGS[iVar0]), uVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PHOTOGRAPHY_MONKEY_FLAGS[iVar0]), iVar1);
	}
}

void func_96(int iParam0, struct<3> Param1, float fParam4)//Position - 0x189E7
{
	*iParam0 = GRAPHICS::CREATE_TRACKED_POINT();
	if (*iParam0 == 0)
	{
	}
	else
	{
		GRAPHICS::SET_TRACKED_POINT_INFO(*iParam0, Param1, fParam4);
	}
}

int func_97(struct<3> Param0, float fParam3, float fParam4)//Position - 0x18A0D
{
	float fVar0;
	float fVar1;
	
	if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param0, &fVar0, &fVar1))
	{
		if (fVar0 >= fParam3 && fVar0 <= fParam4)
		{
			if (fVar1 >= fParam3 && fVar1 <= fParam4)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_98(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, float fParam10)//Position - 0x18A4D
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param0, &Var0, &(Var0.f_1));
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param3, &Var3, &(Var3.f_1));
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param6, &Var6, &(Var6.f_1));
	*fParam9 = SYSTEM::VDIST(Var0, Var3);
	*fParam10 = SYSTEM::VDIST(Var0, Var6);
}

void func_99(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x18AA0
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var17;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	fVar11 = 0.01f;
	if (iParam0 == 29 && Var0.f_2 <= 35f)
	{
		Var3 = { -95.402f, -744.506f, 37.2165f };
		Var6 = { 0.9047f, 0.4261f, 0f };
		fVar9 = 0.51f;
		fVar10 = 0.35f;
	}
	else if (iParam0 == 29 && Var0.f_2 <= 36f)
	{
		Var3 = { -95.4013f, -744.5073f, 37.1846f };
		Var6 = { 0.9047f, 0.4261f, 0f };
		fVar9 = 0.51f;
		fVar10 = 0.43f;
	}
	else
	{
		Var3 = { Local_53[iParam0 /*8*/] };
		Var6 = { Local_53[iParam0 /*8*/].f_3 };
		fVar9 = Local_53[iParam0 /*8*/].f_6;
		fVar10 = Local_53[iParam0 /*8*/].f_7;
	}
	fVar12 = (fVar9 / 2f);
	fVar13 = (fVar10 / 2f);
	Var14 = { func_100(GlobalFunc_277(Var6, 0f, 0f, -1f)) };
	Var17 = { func_100(GlobalFunc_277(Var6, Var14)) };
	*uParam1 = { Var3 + Vector(fVar12, fVar12, fVar12) * Var14 + Vector(fVar13, fVar13, fVar13) * Var17 + Var6 * Vector(fVar11, fVar11, fVar11) };
	*uParam2 = { Var3 + Vector(fVar12, fVar12, fVar12) * -Var14 + Vector(fVar13, fVar13, fVar13) * Var17 + Var6 * Vector(fVar11, fVar11, fVar11) };
	*uParam3 = { Var3 + Vector(fVar12, fVar12, fVar12) * Var14 + Vector(fVar13, fVar13, fVar13) * -Var17 + Var6 * Vector(fVar11, fVar11, fVar11) };
	*uParam4 = { Var3 + Vector(fVar12, fVar12, fVar12) * -Var14 + Vector(fVar13, fVar13, fVar13) * -Var17 + Var6 * Vector(fVar11, fVar11, fVar11) };
}

Vector3 func_100(struct<3> Param0)//Position - 0x18C41
{
	float fVar0;
	
	fVar0 = SYSTEM::VMAG(Param0);
	return Param0 / Vector(fVar0, fVar0, fVar0);
}


int func_102(float fParam0)//Position - 0x18C94
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	iVar1 = -1;
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!func_93(iVar0))
		{
			fVar5 = SYSTEM::VDIST2(Var2, Local_53[iVar0 /*8*/]);
			if (iVar1 == -1 || fVar5 < *fParam0)
			{
				iVar1 = iVar0;
				*fParam0 = fVar5;
			}
		}
		iVar0++;
	}
	return iVar1;
}



bool func_105()//Position - 0x18D32
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PHOTOGRAPHY_MONKEY_FLAGS[1] == -1)
	{
		return 1;
	}
	func_94(49, &iVar0, &iVar1);
	if (iVar0 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iVar0 - 1))
		{
			if (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PHOTOGRAPHY_MONKEY_FLAGS[iVar2] != -1)
			{
				return 0;
			}
			iVar2++;
		}
	}
	if (iVar1 == 31)
	{
		return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PHOTOGRAPHY_MONKEY_FLAGS[iVar0] == -1;
	}
	return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PHOTOGRAPHY_MONKEY_FLAGS[iVar0] == (SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(iVar1 + 1))) - 1);
}

void func_106()//Position - 0x18DC5
{
	if (bLocal_459)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_458))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_458, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
		switch (iLocal_457)
		{
			case 0:
				iLocal_461 = MISC::GET_GAME_TIMER() + 2000;
				iLocal_457++;
				break;
			
			case 1:
				if (iLocal_461 < MISC::GET_GAME_TIMER())
				{
					if (!GlobalFunc_489())
					{
						uLocal_458 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
						iLocal_461 = MISC::GET_GAME_TIMER() + 5000;
						iLocal_457++;
					}
				}
				break;
			
			case 2:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_458) || iLocal_461 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_461 < MISC::GET_GAME_TIMER())
					{
						bLocal_459 = false;
						iLocal_457 = 0;
					}
					else
					{
						iLocal_457++;
					}
				}
				break;
			
			case 3:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_458, "SHOW_BRIDGES_KNIVES_PROGRESS");
				GlobalFunc_726("PM_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(50);
				GlobalFunc_726("PM_PASS");
				GlobalFunc_726("PM_CHALLENGE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_92());
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_461 = MISC::GET_GAME_TIMER() + 7500;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
				iLocal_457++;
				break;
			
			case 4:
				if ((((((iLocal_461 < MISC::GET_GAME_TIMER() || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || GlobalFunc_489()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || GlobalFunc_142()) || GlobalFunc_3062())
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_458, "SHARD_ANIM_OUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_461 = MISC::GET_GAME_TIMER() + 500;
					iLocal_457++;
				}
				break;
			
			case 5:
				if ((((((iLocal_461 < MISC::GET_GAME_TIMER() || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || GlobalFunc_489()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || GlobalFunc_142()) || GlobalFunc_3062())
				{
					iLocal_457++;
				}
				break;
			
			case 6:
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_458);
				if (func_105())
				{
					iLocal_461 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_457++;
				}
				else
				{
					bLocal_459 = false;
					iLocal_457 = 0;
				}
				break;
			
			case 7:
				if (iLocal_461 < MISC::GET_GAME_TIMER())
				{
					if (GlobalFunc_230(62) && !GlobalFunc_230(24))
					{
						GlobalFunc_159("PM_CLOTHES", 10000);
					}
					bLocal_459 = false;
				}
				break;
			}
	}
}








void func_114()//Position - 0x19146
{
	func_115(0, 157.9448f, -1171.397f, 29.1414f, -0.0872f, 0.9962f, -0.0002f, 0.505f, 0.47f);
	func_115(1, 1124.153f, -1270.971f, 23.3037f, -0.8098f, -0.5868f, 0f, 0.4f, 0.4f);
	func_115(2, 149.5787f, -1183.787f, 31.1711f, 0.4427f, -0.7223f, 0.5313f, 0.49f, 0.5f);
	func_115(3, -146.9499f, 229.0641f, 97.7295f, 0f, 1f, 0f, 0.42f, 0.42f);
	func_115(4, -1939.495f, -408.4034f, 37.6704f, 0.5596f, 0.8288f, -0.0011f, 0.41f, 0.38f);
	func_115(5, 2547.155f, 394.4722f, 111.3622f, -0.9994f, 0.0341f, 0f, 0.54f, 0.52f);
	func_115(6, -1104.941f, 2724.464f, 21.7053f, 0.7479f, 0.6638f, 0f, 0.44f, 0.41f);
	func_115(7, 205.5913f, -2026.605f, 17.8582f, -0.3632f, -0.9317f, -0.0015f, 0.39f, 0.33f);
	func_115(8, 1143.953f, -667.2766f, 58.1309f, 0.9955f, 0.0953f, 0f, 0.59f, 0.51f);
	func_115(9, -495.583f, -457.0046f, 32.6311f, -0.9928f, 0.1194f, -0.0002f, 0.6f, 0.61f);
	func_115(10, 1674.295f, 4973.919f, 45.5824f, -0.707f, 0.7072f, 0f, 0.38f, 0.35f);
	func_115(11, 1511.48f, 3567.613f, 38.0881f, 0.866f, 0.5f, -0.0004f, 0.39f, 0.38f);
	func_115(12, 84.4525f, 213.9647f, 119.2064f, 0.9397f, -0.3419f, -0.0018f, 0.6f, 0.6f);
	func_115(13, 3420.168f, 3769.68f, 35.8602f, -0.4229f, 0.9062f, 0.0001f, 0.71f, 0.72f);
	func_115(14, -420.5195f, 1090.325f, 332.0972f, -0.9639f, 0.2661f, 0.0007f, 0.41f, 0.39f);
	func_115(15, 341.514f, 345.7831f, 105.1536f, 0.9709f, -0.2397f, 0f, 0.51f, 0.5f);
	func_115(16, -940.438f, 332.8253f, 72.5064f, 0f, 1f, 0f, 0.33f, 0.31f);
	func_115(17, -1828.902f, -1266.722f, 7.7045f, 0.766f, -0.6428f, 0f, 0.189f, 0.16f);
	func_115(18, -1168.009f, -2033.271f, 14.4629f, -0.6428f, -0.766f, 0f, 0.409f, 0.41f);
	func_115(19, -346.3339f, -2275.362f, 7.0538f, 1f, 0f, 0f, 0.419f, 0.42f);
	func_115(20, 1725.725f, 4780.778f, 42.7613f, 1f, 0f, 0f, 0.38f, 0.38f);
	func_115(21, 2394.642f, 3142.628f, 48.0601f, 0.9096f, -0.4155f, 0f, 0.52f, 0.52f);
	func_115(22, 559.5842f, -551.627f, 27.5494f, 0.9925f, -0.1219f, 0f, 0.32f, 0.32f);
	func_115(23, 282.2999f, -477.448f, 33.6627f, -0.2438f, 0.9698f, -0.0001f, 0.3f, 0.3f);
	func_115(24, -808.8348f, -2749.262f, 13.5377f, 0.866f, -0.5f, 0f, 0.42f, 0.42f);
	func_115(25, 354.246f, 3397.849f, 36.0745f, 0.3677f, -0.93f, 0f, 0.39f, 0.36f);
	func_115(26, 472.6187f, -1470.425f, 34.864f, 0.2627f, -0.9649f, 0f, 0.59f, 0.54f);
	func_115(27, -466.3089f, -1447.866f, 20.7979f, 0.6997f, -0.7144f, 0f, 0.58f, 0.58f);
	func_115(28, -1370.422f, -524.2557f, 30.5145f, -0.8256f, -0.5643f, -0.0001f, 0.41f, 0.39f);
	func_115(29, -95.4015f, -744.507f, 37.1422f, 0.9047f, 0.4261f, 0f, 0.48f, 0.48f);
	func_115(30, -1985.92f, 4521.647f, 19.9029f, 0.6943f, 0.6959f, -0.1836f, 0.63f, 0.62f);
	func_115(31, 555.9847f, 2800.784f, 41.7896f, -0.0712f, 0.9975f, 0f, 0.44f, 0.43f);
	func_115(32, 1914.375f, 3735.661f, 33.7799f, -0.8666f, -0.4989f, 0.0002f, 0.34f, 0.33f);
	func_115(33, 753.8581f, -1861.106f, 51.9038f, 0.0823f, 0.9966f, -0.0012f, 0.54f, 0.53f);
	func_115(34, 1570.844f, -2130.846f, 77.1156f, 0.9637f, 0.267f, 0.0006f, 0.48f, 0.45f);
	func_115(35, 894.0941f, 3619.246f, 32.319f, 0f, -1f, 0f, 0.36f, 0.35f);
	func_115(36, -251.753f, 6235.92f, 30.9796f, 0.7092f, -0.705f, 0f, 0.23f, 0.23f);
	func_115(37, 1240.086f, -3318.439f, 5.6199f, 1f, 0f, 0f, 0.42f, 0.42f);
	func_115(38, -1382.786f, -905.4655f, 15.0535f, 0.7934f, 0.6087f, 0f, 0.7f, 0.54f);
	func_115(39, -1677.953f, 174.439f, 62.1203f, 0.4226f, -0.9063f, 0.6201f, 0.244f, 0.23f);
	func_115(40, 249.8769f, -3310.74f, 5.6313f, 0f, -0.9063f, 0.0001f, 0.654f, 0.66f);
	func_115(41, 158.6217f, 6657.858f, 35.7506f, 0.7054f, 0.7059f, 0f, 0.544f, 0.47f);
	func_115(42, -1378.472f, -362.0254f, 42.8204f, -0.9687f, 0.2484f, 0f, 1.744f, 1.65f);
	func_115(43, -1706.735f, -265.9444f, 50.891f, -0.8055f, 0.5926f, 0f, 0.365f, 0.32f);
	func_115(44, -1279.316f, -1611.953f, 6.3379f, -0.8219f, -0.5697f, 0.0001f, 2.439f, 2.091f);
	func_115(45, -1035.474f, -160.1076f, 37.9679f, -0.9366f, 0.3504f, 0f, 0.273f, 0.228f);
	func_115(46, 591.9451f, 142.8853f, 103.5083f, -0.3445f, -0.9388f, 0.0038f, 0.355f, 0.36f);
	func_115(47, -463.3655f, -18.1181f, 51.925f, -0.9986f, 0.0523f, 0f, 0.834f, 0.829f);
	func_115(48, -956.4725f, -775.4922f, 16.6361f, 0.6088f, 0.7934f, 0f, 0.258f, 0.263f);
	func_115(49, -814.0197f, -1255.709f, 5.4366f, -0.6431f, -0.7658f, -0.0001f, 0.471f, 0.471f);
}

void func_115(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8)//Position - 0x19996
{
	Local_53[iParam0 /*8*/] = { Param1 };
	Local_53[iParam0 /*8*/].f_3 = { Param4 };
	Local_53[iParam0 /*8*/].f_6 = fParam7;
	Local_53[iParam0 /*8*/].f_7 = fParam8;
}


