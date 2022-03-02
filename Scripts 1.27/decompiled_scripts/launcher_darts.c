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
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	char* sLocal_100 = NULL;
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	float fLocal_116 = 0f;
	var uLocal_117 = 0;
	struct<13> Local_118 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_131 = 0;
	int iLocal_132 = 0;
	struct<3> Local_133 = { 0, 0, 0 } ;
	struct<3> Local_136 = { 0, 0, 0 } ;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	bool bLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	struct<7> Local_148 = { 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<18> Var0;
	bool bVar23;
	float fVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	
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
	Local_44 = { 500f, 500f, 500f };
	iLocal_95 = -1;
	iLocal_96 = 2050;
	iLocal_97 = -1;
	iLocal_98 = -1;
	sLocal_100 = "CC_SUBSTR";
	fLocal_101 = 125f;
	iLocal_102 = 1;
	iLocal_104 = 262;
	fLocal_116 = 4f;
	bLocal_131 = true;
	bLocal_145 = true;
	iLocal_146 = -1;
	Var0.f_1 = 5;
	Var0.f_17 = 5;
	if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
	{
		Local_89 = { ENTITY::GET_ENTITY_COORDS(iScriptParam_0, 1) };
		uLocal_155 = iScriptParam_0;
		Var0.f_1[0 /*3*/] = { Local_89 };
		uLocal_117 = ENTITY::GET_ENTITY_MODEL(uLocal_155);
	}
	else
	{
		uLocal_155 = iScriptParam_0;
		Var0.f_1[0 /*3*/] = { Local_89 };
	}
	uLocal_85 = uLocal_85;
	Local_68 = { Local_68 };
	bVar23 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_118(1);
	}
	uLocal_84 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_94 = 0;
	GlobalFunc_5312(&Global_96007, 0);
	func_115();
	if (GlobalFunc_747(uLocal_93, 1))
	{
		iLocal_99 = 10;
	}
	else
	{
		iLocal_99 = 9;
	}
	while (!Global_30778)
	{
		SYSTEM::WAIT(0);
	}
	if (!GlobalFunc_747(uLocal_93, 8))
	{
		if (!GlobalFunc_4938(iLocal_99))
		{
			if (GlobalFunc_892(0, iLocal_98))
			{
				func_118(0);
			}
			else
			{
				func_118(1);
			}
		}
	}
	if (iLocal_98 != -1)
	{
		if (!GlobalFunc_892(0, iLocal_98))
		{
			func_118(1);
		}
	}
	if (GlobalFunc_747(uLocal_93, 8388608))
	{
		func_118(1);
	}
	if (GlobalFunc_747(uLocal_93, 524288) && (GlobalFunc_875() && !GlobalFunc_874()))
	{
		func_118(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !GlobalFunc_747(uLocal_93, 4194304))
	{
		if (iLocal_104 != 262)
		{
			GlobalFunc_2436(iLocal_104, 1, 0);
			iLocal_104 = 262;
		}
		func_107(10);
	}
	while (true)
	{
		if (!GlobalFunc_747(uLocal_93, 268435456))
		{
			fVar24 = 0f;
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0.f_1[0 /*3*/], &fVar24))
			{
				if (fVar24 != 0f)
				{
					Var0.f_1[0 /*3*/].f_2 = fVar24;
					GlobalFunc_812(&uLocal_93, 268435456);
				}
			}
		}
		uLocal_84 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (GlobalFunc_747(uLocal_93, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_84))
			{
				func_118(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_84) && !ENTITY::IS_ENTITY_DEAD(iLocal_84))
		{
			Local_86 = { ENTITY::GET_ENTITY_COORDS(iLocal_84, 1) };
			uLocal_92 = SYSTEM::VDIST2(Local_86, Var0.f_1[0 /*3*/]);
			uLocal_92 = uLocal_92;
			Local_110 = { Local_86 };
			Local_113 = { Var0.f_1[0 /*3*/] };
			Local_110.f_2 = 0f;
			Local_113.f_2 = 0f;
			fLocal_109 = SYSTEM::VDIST2(Local_110, Local_113);
			switch (iLocal_94)
			{
				case 0:
					if (GlobalFunc_4938(iLocal_99) || (GlobalFunc_747(uLocal_93, 16) && !GlobalFunc_747(uLocal_93, 524288)))
					{
						iLocal_97 = -1;
						func_105();
						func_107(1);
					}
					else
					{
						if (fLocal_109 > (fLocal_101 * fLocal_101))
						{
							if (iLocal_104 != 262)
							{
								GlobalFunc_2436(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
							func_107(10);
						}
						if ((Local_86.f_2 - Var0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_104())
					{
						iLocal_102 = iLocal_102;
						func_107(3);
					}
					else
					{
						func_105();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_118(1);
						return;
					}
					if (!GlobalFunc_4938(iLocal_99))
					{
						if (!GlobalFunc_747(uLocal_93, 8))
						{
							bVar25 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_89962.f_3), &Local_68))
							{
								Local_68 = { Local_52 };
								bVar25 = false;
							}
							if (bVar25)
							{
								func_118(0);
								break;
							}
						}
					}
					if (!GlobalFunc_747(uLocal_93, 4))
					{
						func_101();
						GlobalFunc_812(&uLocal_93, 4);
					}
					if (fLocal_109 > (fLocal_101 * fLocal_101) && !Global_89996)
					{
						if (iLocal_104 != 262)
						{
							if (GlobalFunc_39(6) && !GlobalFunc_474(iLocal_104))
							{
							}
							else
							{
								GlobalFunc_2436(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
						}
						func_107(10);
					}
					else
					{
						Local_68 = { Local_52 };
						bVar26 = !GlobalFunc_747(uLocal_93, 64);
						GlobalFunc_5312(&uLocal_93, 128);
						if (!GlobalFunc_9670(3) && !Global_89996)
						{
							if (GlobalFunc_747(uLocal_93, 2097152))
							{
								if ((!GlobalFunc_747(uLocal_93, 1) || !ENTITY::DOES_ENTITY_EXIST(GlobalFunc_451())) && !Global_89996)
								{
									func_107(10);
									break;
								}
							}
						}
						if (GlobalFunc_747(uLocal_93, 524288) && (GlobalFunc_875() && !GlobalFunc_874()))
						{
							func_118(1);
						}
						if (GlobalFunc_4522())
						{
							func_118(1);
						}
						if ((!GlobalFunc_8988(6) || Global_96400) || GlobalFunc_4521())
						{
							bVar26 = false;
						}
						if (GlobalFunc_747(uLocal_93, 1))
						{
							if (!func_86())
							{
								GlobalFunc_5211(&uLocal_93, 128);
								bVar26 = false;
							}
						}
						if (GlobalFunc_126(1))
						{
							bVar26 = false;
						}
						if (Global_68245)
						{
							bVar26 = false;
						}
						if (GlobalFunc_488())
						{
							bVar26 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar26 = false;
						}
						if (GlobalFunc_160() || GlobalFunc_153(8, -1))
						{
							bVar26 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar26 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar26 = false;
						}
						if (GlobalFunc_116(0) || GlobalFunc_1593())
						{
							bVar26 = false;
						}
						if (bVar26)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_84, Var0.f_1[0 /*3*/], fLocal_116, fLocal_116, 2f, 0, 1, iLocal_102))
							{
								bVar26 = false;
							}
							if (ENTITY::IS_ENTITY_DEAD(uLocal_155))
							{
								iLocal_155 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_89, 2f, uLocal_117, 1, 0, 1);
								GlobalFunc_5211(&uLocal_93, 128);
								bVar26 = false;
							}
							else
							{
								Local_136 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, Local_133) };
								if (func_77(&Local_118, Local_86, Local_136, iLocal_155))
								{
									bLocal_131 = false;
								}
								else if (Local_118.f_12 == 1)
								{
									bLocal_131 = true;
								}
								if (bLocal_131)
								{
									bVar26 = false;
								}
							}
							if (!iLocal_132)
							{
								bVar26 = false;
							}
							if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_139)
							{
								bVar26 = false;
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar26 = false;
							}
							if (bVar26)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (GlobalFunc_82(uLocal_85))
								{
									if (iLocal_95 == -1)
									{
										GlobalFunc_6774(&iLocal_95, 4, sLocal_100, 0, 0);
										GlobalFunc_5211(&uLocal_93, 2048);
									}
									else if (!GlobalFunc_747(uLocal_93, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										GlobalFunc_5084(&iLocal_95);
										GlobalFunc_5312(&uLocal_93, 2048);
									}
									if (GlobalFunc_5079(iLocal_95, 1))
									{
										sLocal_100 = sLocal_100;
										GlobalFunc_5084(&iLocal_95);
										GlobalFunc_5312(&uLocal_93, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_68);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
										func_107(5);
									}
								}
								else
								{
									sLocal_100 = sLocal_100;
									GlobalFunc_5084(&iLocal_95);
									GlobalFunc_5312(&uLocal_93, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_68);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
									func_107(5);
								}
							}
						}
						if (!bVar26)
						{
							if (iLocal_95 != -1)
							{
								GlobalFunc_5084(&iLocal_95);
								GlobalFunc_5312(&uLocal_93, 2048);
								HUD::CLEAR_HELP(0);
							}
						}
					}
					func_37();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_68))
					{
						if (iLocal_95 != -1)
						{
							GlobalFunc_5084(&iLocal_95);
						}
						iVar27 = 2;
						bVar23 = false;
						if (GlobalFunc_747(uLocal_93, 1))
						{
							if (GlobalFunc_39(6) || GlobalFunc_39(7))
							{
								iVar27 = 1;
								bVar23 = true;
							}
						}
						if (iVar27 != 1)
						{
							iVar27 = GlobalFunc_7905(&iLocal_97, 6, iLocal_99, 0, 0);
						}
						if (iVar27 == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							GlobalFunc_872();
							if (Global_35957)
							{
								GlobalFunc_8395(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
							uLocal_51 = func_23();
							GlobalFunc_5211(&uLocal_93, 2);
							func_107(6);
							GlobalFunc_8641(&uLocal_106);
							if (iLocal_98 != -1)
							{
								GlobalFunc_2656(iLocal_98);
								GlobalFunc_6488(GlobalFunc_4519(iLocal_98), 0, 0);
							}
						}
						else if (iVar27 == 2)
						{
							GlobalFunc_587();
						}
						else if (iVar27 == 0)
						{
							func_107(10);
						}
					}
					else
					{
						GlobalFunc_587();
					}
					break;
				
				case 6:
					if (GlobalFunc_747(Global_96007, 262144))
					{
						GlobalFunc_5312(&Global_96007, 262144);
						GlobalFunc_82();
					}
					if (GlobalFunc_747(uLocal_93, 2097152))
					{
						if (!GlobalFunc_9670(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_51))
						{
							func_107(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_51))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((GlobalFunc_5182(&uLocal_106) * 1000f)), iLocal_98, 0);
						GlobalFunc_235(&uLocal_106);
						GlobalFunc_5312(&uLocal_93, 256);
						GlobalFunc_51();
						if (bVar23)
						{
							GlobalFunc_5312(&uLocal_93, 2);
						}
						else if (GlobalFunc_747(uLocal_93, 2))
						{
							if (GlobalFunc_747(Global_96007, 0))
							{
								GlobalFunc_1997(&iLocal_97);
								iLocal_97 = -1;
								GlobalFunc_5312(&uLocal_93, 2);
							}
							else
							{
								GlobalFunc_1997(&iLocal_97);
								iLocal_97 = -1;
								GlobalFunc_5312(&uLocal_93, 2);
							}
						}
						func_107(0);
						if (iLocal_98 != -1)
						{
							if (GlobalFunc_747(Global_96007, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(GlobalFunc_4519(iLocal_98), 0, Global_89999, 0);
								GlobalFunc_4518(GlobalFunc_4519(iLocal_98), 0, Global_89999, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(GlobalFunc_4519(iLocal_98), 0, Global_89999, 0);
								GlobalFunc_4518(GlobalFunc_4519(iLocal_98), 0, Global_89999, 0, 0);
							}
						}
						GlobalFunc_587();
						GlobalFunc_5312(&Global_96007, 0);
						if (GlobalFunc_747(uLocal_93, 16777216))
						{
							func_118(1);
						}
						if (iLocal_98 != -1)
						{
							if (Global_SAVE_DATA.isGameflowActive)
							{
								if (!GlobalFunc_892(0, iLocal_98))
								{
									func_118(1);
								}
							}
						}
					}
					GlobalFunc_587();
					break;
				
				case 8:
					func_107(0);
					break;
				
				case 10:
					func_118(1);
					break;
				
				case 9:
					if (fLocal_109 > (fLocal_101 * fLocal_101))
					{
						if (iLocal_104 != 262)
						{
							GlobalFunc_2436(iLocal_104, 1, 0);
							iLocal_104 = 262;
						}
						func_107(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_104 != 262)
					{
						GlobalFunc_2436(iLocal_104, 0, 0);
					}
					if (iLocal_95 != -1)
					{
						GlobalFunc_5084(&iLocal_95);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_100))
					{
						if (GlobalFunc_74(sLocal_100))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					func_107(4);
					break;
				
				case 4:
					if ((iLocal_103 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_105 == 2)
							{
								if (iLocal_105 == 2)
								{
									if (GlobalFunc_4938(iLocal_99) && GlobalFunc_892(0, iLocal_98))
									{
										func_115();
										if (iLocal_104 != 262)
										{
											GlobalFunc_2436(iLocal_104, 1, 0);
										}
										func_107(0);
									}
								}
							}
							else if (iLocal_105 == 0)
							{
								if (fLocal_109 > (fLocal_101 * fLocal_101))
								{
									if (iLocal_104 != 262)
									{
										GlobalFunc_2436(iLocal_104, 1, 0);
										iLocal_104 = 262;
									}
									func_107(10);
								}
							}
							else if (iLocal_105 == 1)
							{
								if (fLocal_109 > ((80f + 5f) * (80f + 5f)))
								{
									func_115();
									if (iLocal_104 != 262)
									{
										GlobalFunc_2436(iLocal_104, 1, 0);
									}
									func_107(0);
								}
							}
						}
						else
						{
							GlobalFunc_2436(iLocal_104, 1, 0);
						}
					}
					else
					{
						iLocal_103++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}


void func_2()//Position - 0xAE1
{
	if (bLocal_145)
	{
		if (iLocal_140 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_140);
		}
		if (iLocal_141 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_141);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_dart_1"));
	}
}





















var func_23()//Position - 0xF27
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_155, 2) };
	Local_148 = { ENTITY::GET_ENTITY_COORDS(iLocal_155, 1) };
	Local_148.f_3 = Var0.f_2;
	Local_148.f_4 = iLocal_155;
	if (!MISC::IS_BIT_SET(Global_97314, 10))
	{
		Local_148.f_6 = iLocal_141;
		Local_148.f_5 = uLocal_142;
	}
	else
	{
		Local_148.f_6 = iLocal_140;
		Local_148.f_5 = uLocal_143;
	}
	uVar3 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_52, &Local_148, 7, iLocal_96);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_52);
	return uVar3;
}














void func_37()//Position - 0x142F
{
	var uVar0[25];
	int iVar26;
	int iVar27;
	bool bVar28;
	struct<3> Var29;
	float fVar32;
	
	bVar28 = false;
	if (bLocal_145)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var29 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		fVar32 = SYSTEM::VDIST2(Var29, Local_89);
		if (iLocal_146 == 0)
		{
			if (fVar32 < (10f * 10f))
			{
				iLocal_146 = 1;
				if (!GlobalFunc_39(6) && !GlobalFunc_39(7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_142))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_142, 0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_142, uLocal_143, -1, 2049, 3);
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_142, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_143))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_143, 0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_143, iLocal_142, -1, 2049, 3);
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_143, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
					}
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_142))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_142, 0);
						if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1991.677f, 3044.957f, 46.21505f, 0.5f, 1))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_142, 1991.677f, 3044.957f, 46.21505f, 0.5f, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_142, 1991.677f, 3044.957f, 46.21505f, 1f, 20000, 1048576000, 0, 1193033728);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_142);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_143, 0);
						if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1990.37f, 3045.121f, 46.21502f, 0.5f, 1))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_143, 1990.37f, 3045.121f, 46.21502f, 0.5f, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_143, 1990.37f, 3045.121f, 46.21502f, 1f, 20000, 1048576000, 0, 1193033728);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_143);
					}
				}
			}
		}
		else if (iLocal_146 == 1)
		{
			if (fVar32 >= (10f * 10f))
			{
				iLocal_146 = 0;
				if (!GlobalFunc_39(6) && !GlobalFunc_39(7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_142))
					{
						TASK::TASK_STAND_STILL(iLocal_142, -1);
						if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_142))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_142, 1);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
					{
						TASK::TASK_STAND_STILL(iLocal_143, -1);
						if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_143))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_143, 1);
						}
					}
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_142))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_142, 1991.677f, 3044.957f, 46.21505f, 1, 0, 0, 1);
						TASK::TASK_STAND_STILL(iLocal_142, -1);
						if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_142))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_142, 1);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_143, 1990.37f, 3045.121f, 46.21502f, 1, 0, 0, 1);
						TASK::TASK_STAND_STILL(iLocal_143, -1);
						if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_143))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_143, 1);
						}
					}
				}
			}
		}
	}
	if (!iLocal_158)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0)) || PED::IS_ANY_PED_SHOOTING_IN_AREA(937.0616f, -117.8927f, 72.9163f, 1021.849f, -120.5357f, 72.9163f, 1, 1)) || MISC::IS_PROJECTILE_IN_AREA(1991.473f, 3045.98f, 49.532f, 1996.906f, 3052.17f, 46.3392f, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_142))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_142, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_143, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				}
				bVar28 = true;
			}
			else
			{
				iVar26 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
				iVar27 = 0;
				while (iVar27 < iVar26)
				{
					if (!PED::IS_PED_INJURED(uVar0[iVar27]))
					{
						if (PED::IS_PED_IN_MELEE_COMBAT(uVar0[iVar27]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uVar0[iVar27]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_142))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_142, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_143, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							}
							bVar28 = true;
						}
					}
					iVar27++;
				}
			}
		}
		if (!GlobalFunc_39(6) && !GlobalFunc_39(7))
		{
			if (!PED::IS_PED_INJURED(iLocal_142) && !PED::IS_PED_INJURED(iLocal_143))
			{
				if (PED::IS_PED_FLEEING(iLocal_142) || PED::IS_PED_FLEEING(iLocal_143))
				{
					bVar28 = true;
				}
			}
			else
			{
				bVar28 = true;
			}
		}
		if (bVar28)
		{
			if (GlobalFunc_474(func_69()))
			{
				iLocal_158 = 1;
				func_68(0);
			}
			if (iLocal_160)
			{
				STREAMING::REMOVE_ANIM_DICT("mini@dartsintro");
				STREAMING::REMOVE_ANIM_DICT("mini@dartsintro_alt1");
				iLocal_160 = 0;
				iLocal_132 = 0;
			}
		}
	}
	if (iLocal_147 == 1)
	{
		if (!INTERIOR::IS_VALID_INTERIOR(iLocal_156))
		{
			iLocal_156 = INTERIOR::GET_INTERIOR_AT_COORDS(-573.3155f, 291.2963f, 79.5509f);
		}
		else if (iLocal_156 == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_10694(140, 3);
			GlobalFunc_10694(139, 3);
			if (!PED::IS_PED_INJURED(iLocal_142) && !PED::IS_PED_INJURED(iLocal_143))
			{
				if (iLocal_159)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, 0);
					iLocal_159 = 0;
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_142) && !PED::IS_PED_INJURED(iLocal_143))
		{
			if (!iLocal_159)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, 1);
				iLocal_159 = 1;
			}
		}
	}
	else if (iLocal_147 == 2)
	{
		if (!INTERIOR::IS_VALID_INTERIOR(iLocal_157))
		{
			iLocal_157 = INTERIOR::GET_INTERIOR_AT_COORDS(1995.614f, 3049.877f, 46.2153f);
		}
		else if (iLocal_157 == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(iLocal_142) && !PED::IS_PED_INJURED(iLocal_143))
			{
				if (iLocal_159)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, 0);
					iLocal_159 = 0;
				}
			}
			if (!iLocal_160)
			{
				STREAMING::REQUEST_ANIM_DICT("mini@dartsintro");
				STREAMING::REQUEST_ANIM_DICT("mini@dartsintro_alt1");
				iLocal_160 = 1;
			}
			if (iLocal_160)
			{
				if (!iLocal_132)
				{
					if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsintro") || !STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsintro_alt1"))
					{
					}
					else
					{
						iLocal_132 = 1;
					}
				}
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_142) && !PED::IS_PED_INJURED(iLocal_143))
			{
				if (!iLocal_159)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, 1);
					iLocal_159 = 1;
				}
			}
			if (iLocal_160)
			{
				STREAMING::REMOVE_ANIM_DICT("mini@dartsintro");
				STREAMING::REMOVE_ANIM_DICT("mini@dartsintro_alt1");
				iLocal_160 = 0;
				iLocal_132 = 0;
			}
		}
	}
}































void func_68(int iParam0)//Position - 0x5DF8
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_105 = iParam0;
	iLocal_103 = 0;
	iLocal_94 = 7;
}

int func_69()//Position - 0x5E19
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { Local_89 };
		fVar3 = 999999f;
		iVar5 = 1;
		iVar5 = 0;
		while (iVar5 < GlobalFunc_82() + 1)
		{
			if (iVar5 > 0)
			{
				fVar4 = SYSTEM::VDIST2(Var0, func_70(iVar5));
				if (fVar3 > fVar4)
				{
					fVar3 = fVar4;
				}
			}
			iVar5++;
		}
	}
	return 66;
}

Vector3 func_70(int iParam0)//Position - 0x5E7A
{
	switch (iParam0)
	{
		case 1:
			return -572.041f, 294.196f, 79.9374f;
		
		case 2:
			return 1992.27f, 3050.6f, 47.89f;
		
		default:
	}
	return 0f, 0f, 0f;
}







int func_77(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7)//Position - 0x6123
{
	int iVar0;
	var uVar1;
	var uVar4;
	
	uParam0->f_12 = 0;
	iVar0 = 0;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_2 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Param4, 19, uParam7, 7);
			*uParam0 = 1;
			break;
		
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_2, &(uParam0->f_9), &uVar1, &uVar4, &iVar0) == 2)
			{
				if (uParam0->f_9 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_12 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_2, &(uParam0->f_9), &uVar1, &uVar4, &iVar0) == 0)
			{
				*uParam0 = 3;
			}
			break;
		
		case 3:
			*uParam0 = 0;
			break;
	}
	return 0;
}









int func_86()//Position - 0x62E1
{
	if (GlobalFunc_39(6) || GlobalFunc_39(7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			return GlobalFunc_474(66);
		}
	}
	return 1;
}















void func_101()//Position - 0x6CC3
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	var uVar23;
	
	if (bLocal_145)
	{
		Var0 = { func_70(iLocal_147) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar6 = SYSTEM::VDIST2(Var3, Var0);
		if ((fVar6 > 45f || Global_97315) && !ENTITY::DOES_ENTITY_EXIST(iLocal_142))
		{
			if (Global_97315)
			{
				Global_97315 = 0;
			}
			Var7 = { -573.1373f, 294.0269f, 78.1765f };
			Var10 = { -574.1169f, 292.7964f, 78.1766f };
			Var13 = { 1995.614f, 3049.877f, 46.2153f };
			Var16 = { 1995.488f, 3047.383f, 46.2153f };
			fVar19 = 172.6813f;
			fVar20 = 274.5094f;
			fVar21 = 142.6717f;
			fVar22 = 44.8785f;
			uVar23 = INTERIOR::GET_INTERIOR_AT_COORDS(func_70(iLocal_147));
			if (INTERIOR::IS_VALID_INTERIOR(uVar23))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar23);
				while (!INTERIOR::IS_INTERIOR_READY(iVar23))
				{
					SYSTEM::WAIT(0);
				}
				INTERIOR::UNPIN_INTERIOR(iVar23);
			}
			iLocal_142 = PED::CREATE_PED(26, iLocal_140, GlobalFunc_1087(iLocal_147 == 1, Var7, Var13), GlobalFunc_512(iLocal_147 == 1, fVar19, fVar21), 1, 1);
			iLocal_143 = PED::CREATE_PED(26, iLocal_141, GlobalFunc_1087(iLocal_147 == 1, Var10, Var16), GlobalFunc_512(iLocal_147 == 1, fVar20, fVar22), 1, 1);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_142, 1, 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_143, 1, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, 1);
			iLocal_159 = 1;
			MISC::CLEAR_BIT(&Global_97314, 10);
			iLocal_146 = -1;
			if (fVar6 < (20f * 20f))
			{
				iLocal_146 = 1;
				TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_142, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_143, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
			}
			else
			{
				iLocal_146 = 0;
				TASK::TASK_STAND_STILL(iLocal_142, -1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_142, 1);
				TASK::TASK_STAND_STILL(iLocal_143, -1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_143, 1);
			}
			iLocal_144 = 1;
		}
		else
		{
			if (fVar6 <= 45f)
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
			{
			}
			iLocal_144 = 0;
		}
	}
	else
	{
		iLocal_144 = 0;
	}
}



int func_104()//Position - 0x6EDF
{
	if (bLocal_145)
	{
		return ((STREAMING::HAS_MODEL_LOADED(iLocal_140) && STREAMING::HAS_MODEL_LOADED(iLocal_141)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_dart_1")));
	}
	return 1;
}

void func_105()//Position - 0x6F0F
{
	int iVar0;
	
	if (bLocal_145)
	{
		iVar0 = func_69();
		switch (iVar0)
		{
			case 65:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 0:
						iLocal_140 = joaat("a_m_y_vinewood_01");
						break;
					
					case 1:
						iLocal_140 = joaat("a_m_y_stlat_01");
						break;
					
					case 2:
						iLocal_140 = joaat("a_m_y_vinewood_04");
						break;
				}
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iLocal_141 = joaat("a_m_y_stwhi_02");
						break;
					
					case 1:
						iLocal_141 = joaat("a_m_y_vinewood_03");
						break;
				}
				iLocal_147 = 1;
				break;
			
			case 66:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iLocal_140 = joaat("a_f_m_salton_01");
						iLocal_141 = joaat("a_f_o_salton_01");
						break;
					
					case 1:
						iLocal_140 = joaat("a_f_o_salton_01");
						iLocal_141 = joaat("a_f_m_salton_01");
						break;
				}
				iLocal_147 = 2;
				break;
		}
		STREAMING::REQUEST_MODEL(iLocal_140);
		STREAMING::REQUEST_MODEL(iLocal_141);
		STREAMING::REQUEST_MODEL(joaat("prop_dart_1"));
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_142, 1, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_143, 1, 0);
		}
	}
}


void func_107(int iParam0)//Position - 0x7028
{
	iLocal_94 = iParam0;
}








void func_115()//Position - 0x73CE
{
	bool bVar0;
	
	StringCopy(&Local_52, "Darts", 64);
	sLocal_100 = "PLAY_DARTS";
	iLocal_98 = 1;
	fLocal_116 = 2.5f;
	Local_133 = { 0f, -0.5f, 0f };
	iLocal_104 = 66;
	bVar0 = false;
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_70(2), 100f, 100f, 100f, 0, 0, 0))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		func_68(0);
	}
	if (GlobalFunc_39(6) || GlobalFunc_39(7))
	{
		iLocal_102 = 0;
	}
	iLocal_139 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_89);
	GlobalFunc_812(&uLocal_93, 1);
	GlobalFunc_5211(&uLocal_93, 524288);
	iLocal_96 = 17000;
}



void func_118(bool bParam0)//Position - 0x7489
{
	if (bParam0)
	{
		if (iLocal_104 != 262)
		{
			GlobalFunc_2436(iLocal_104, 0, 0);
		}
	}
	GlobalFunc_5084(&iLocal_95);
	if (GlobalFunc_747(uLocal_93, 2))
	{
		GlobalFunc_587();
		GlobalFunc_5312(&uLocal_93, 2);
		GlobalFunc_1997(&iLocal_97);
	}
	iLocal_97 = -1;
	func_119();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_119()//Position - 0x74D2
{
	GlobalFunc_5312(&uLocal_93, 4);
	func_120();
	if (SCRIPT::IS_THREAD_ACTIVE(uLocal_51))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_51, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_68))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_68) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_68);
		}
	}
}

void func_120()//Position - 0x750F
{
	if (iLocal_158)
	{
		func_121(func_69());
	}
}

void func_121(int iParam0)//Position - 0x7524
{
	if (iParam0 != 262)
	{
		GlobalFunc_2436(iParam0, 1, 0);
	}
}

