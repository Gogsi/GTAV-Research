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
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 8;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 2;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 8;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 8;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	float fLocal_80 = 0f;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87[4] = { 0, 0, 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	struct<3> Local_96 = { 0, 0, 0 } ;
	var uLocal_99 = 0;
	var uLocal_100 = 3;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 3;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 3;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 3;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 3;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
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
	iLocal_19 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_68 = 1;
	iLocal_69 = 65;
	iLocal_70 = 49;
	iLocal_71 = 64;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&(Global_33955[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	SYSTEM::WAIT(0);
	while (true)
	{
		func_88();
		switch (iLocal_93)
		{
			case 0:
				func_75();
				break;
			
			case 1:
				func_72();
				func_61();
				if (GlobalFunc_4921())
				{
					if (!GlobalFunc_39(9) || Global_96066.f_19 == 4)
					{
						func_33();
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								if (!bLocal_84)
								{
								}
							}
							else if (bLocal_84)
							{
							}
						}
						func_13();
					}
				}
				break;
			
			case 2:
				if (Global_2408510)
				{
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_STATE() == 5))
					{
						Global_2408510 = 0;
						if (STREAMING::IS_IPL_ACTIVE("TrevorsMP"))
						{
							STREAMING::REMOVE_IPL("TrevorsMP");
						}
						if (!STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
						{
							STREAMING::REQUEST_IPL("TrevorsTrailer");
						}
						if (STREAMING::IS_IPL_ACTIVE("shr_int"))
						{
							STREAMING::REMOVE_IPL("shr_int");
						}
						if (!STREAMING::IS_IPL_ACTIVE("fakeint"))
						{
							STREAMING::REQUEST_IPL("fakeint");
						}
					}
				}
				break;
		}
		func_2();
		if ((!iLocal_192 && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && func_1())
		{
			if (!Global_1573337)
			{
				STREAMING::REMOVE_IPL("hei_carrier");
				STREAMING::REMOVE_IPL("hei_carrier_int1");
				STREAMING::REMOVE_IPL("hei_carrier_int2");
				STREAMING::REMOVE_IPL("hei_carrier_int3");
				STREAMING::REMOVE_IPL("hei_carrier_int4");
				STREAMING::REMOVE_IPL("hei_carrier_int5");
				STREAMING::REMOVE_IPL("hei_carrier_int6");
				STREAMING::REMOVE_IPL("hei_carrier_DistantLights");
				STREAMING::REMOVE_IPL("hei_carrier_LODLights");
				STREAMING::REMOVE_IPL("hei_yacht_heist");
				STREAMING::REMOVE_IPL("hei_yacht_heist_enginrm");
				STREAMING::REMOVE_IPL("hei_yacht_heist_Lounge");
				STREAMING::REMOVE_IPL("hei_yacht_heist_Bridge");
				STREAMING::REMOVE_IPL("hei_yacht_heist_Bar");
				STREAMING::REMOVE_IPL("hei_yacht_heist_Bedrm");
			}
			iLocal_192 = 1;
		}
		SYSTEM::WAIT(0);
	}
}

var func_1()//Position - 0x221
{
	return Global_2436009;
}

void func_2()//Position - 0x22D
{
	int iVar0;
	struct<3> Var1;
	int iVar6;
	bool bVar7;
	
	bVar7 = true;
	iVar6 = 0;
	while (iVar6 < 2)
	{
		if (Global_30779[iVar6] != 0 || Global_30782[iVar6] != 0)
		{
			bVar7 = false;
		}
		iVar6++;
	}
	if (bVar7)
	{
		return;
	}
	iVar0 = iLocal_85;
	Var1 = { GlobalFunc_5082(iVar0) };
	if (GlobalFunc_5660(iVar0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var1, 1) > 250f)
		{
			GlobalFunc_5661(iVar0, 0);
			GlobalFunc_7934(iVar0, 1);
			if (iVar0 == 17)
			{
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1773088812))
				{
					OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(1773088812, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1773088812, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1773088812, 1, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1332101528))
				{
					OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(-1332101528, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1332101528, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1332101528, 1, 0, 1);
				}
			}
		}
	}
	if (GlobalFunc_5080(iVar0) && !MISC::ARE_STRINGS_EQUAL(&Global_31718, Var1.f_3))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var1, 1) > 250f)
		{
			GlobalFunc_7678(iVar0, 1);
			GlobalFunc_5081(iVar0, 0);
			if (iVar0 == 17)
			{
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1773088812))
				{
					OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(1773088812, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1773088812, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1773088812, 1, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1332101528))
				{
					OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(-1332101528, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1332101528, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1332101528, 1, 0, 1);
				}
			}
		}
	}
	iLocal_85++;
	if (iLocal_85 == 49)
	{
		iLocal_85 = 0;
	}
}











void func_13()//Position - 0x1370
{
	float fVar0;
	int iVar1;
	
	iLocal_92 = 0;
	iLocal_78++;
	if (iLocal_78 >= 27)
	{
		iLocal_78 = 0;
	}
	if (iLocal_78 == iLocal_79)
	{
		fLocal_80 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34036[iLocal_78 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1);
	}
	else
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34036[iLocal_78 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1);
		if (fVar0 < fLocal_80)
		{
			fLocal_80 = fVar0;
			iLocal_79 = iLocal_78;
		}
	}
	if (!bLocal_82)
	{
		if (Global_34036[iLocal_81 /*31*/].f_24 == 0)
		{
			iLocal_83 = 0;
			iLocal_81++;
			if (iLocal_81 >= 27)
			{
				iLocal_81 = 0;
			}
		}
		else
		{
			iLocal_83++;
			if (iLocal_83 >= Global_34036[iLocal_81 /*31*/].f_24)
			{
				iLocal_83 = 0;
				iLocal_81++;
				if (iLocal_81 >= 27)
				{
					iLocal_81 = 0;
				}
			}
		}
	}
	if (bLocal_82)
	{
		func_22(iLocal_79);
		func_14(iLocal_79);
	}
	else
	{
		func_22(iLocal_81);
		func_14(iLocal_81);
	}
	bLocal_82 = !bLocal_82;
	iVar1 = 0;
	while (iVar1 < iLocal_86)
	{
		func_14(iLocal_87[iVar1]);
		iVar1++;
	}
}

void func_14(int iParam0)//Position - 0x146D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	
	if (MISC::IS_BIT_SET(iLocal_92, iParam0))
	{
		return;
	}
	MISC::SET_BIT(&iLocal_92, iParam0);
	if (MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 4))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (!MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 6))
				{
					GlobalFunc_2447(iParam0, 1);
				}
			}
			else if (MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 6))
			{
				GlobalFunc_2447(iParam0, 0);
			}
		}
	}
	if (Global_34036[iParam0 /*31*/].f_24 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_34036[iParam0 /*31*/].f_24)
		{
			iVar1 = Global_34036[iParam0 /*31*/].f_25[iVar0];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				GlobalFunc_583(iParam0, iVar1, 1);
			}
			iVar0++;
		}
	}
	if ((MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 6) || MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 5)) || func_18(iParam0))
	{
		func_17(iParam0);
		iLocal_81 = iParam0;
		if ((((((((Global_34036[iParam0 /*31*/] == -1735618852 || Global_34036[iParam0 /*31*/] == 213039352) || Global_34036[iParam0 /*31*/] == -1247364148) || Global_34036[iParam0 /*31*/] == 935592315) || Global_34036[iParam0 /*31*/] == 179480401) || Global_34036[iParam0 /*31*/] == -804938986) || Global_34036[iParam0 /*31*/] == -599111730) || Global_34036[iParam0 /*31*/] == 1423193534) || Global_34036[iParam0 /*31*/] == -1958174046)
		{
			AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_34036[iParam0 /*31*/], 1);
		}
		if (MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 7))
		{
			func_16(iParam0, 1);
		}
		if (!MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 2))
		{
			if (MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 1))
			{
				if (Global_34036[iParam0 /*31*/].f_22 > -1f)
				{
					Global_34036[iParam0 /*31*/].f_22 = (Global_34036[iParam0 /*31*/].f_22 - (Global_34036[iParam0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
					if (Global_34036[iParam0 /*31*/].f_22 < -1f)
					{
						Global_34036[iParam0 /*31*/].f_22 = -1f;
					}
					MISC::CLEAR_BIT(&(Global_34036[iParam0 /*31*/].f_1), 3);
				}
				else
				{
					MISC::SET_BIT(&(Global_34036[iParam0 /*31*/].f_1), 2);
				}
			}
			else if (Global_34036[iParam0 /*31*/].f_22 < 1f)
			{
				Global_34036[iParam0 /*31*/].f_22 = (Global_34036[iParam0 /*31*/].f_22 + (Global_34036[iParam0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
				if (Global_34036[iParam0 /*31*/].f_22 > 1f)
				{
					Global_34036[iParam0 /*31*/].f_22 = 1f;
				}
				MISC::CLEAR_BIT(&(Global_34036[iParam0 /*31*/].f_1), 3);
			}
			else
			{
				MISC::SET_BIT(&(Global_34036[iParam0 /*31*/].f_1), 2);
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[iParam0 /*31*/], Global_34036[iParam0 /*31*/].f_22, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[iParam0 /*31*/], 1, 0, 1);
		}
		else if (MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 1))
		{
			if (Global_34036[iParam0 /*31*/].f_22 > -1f)
			{
				MISC::CLEAR_BIT(&(Global_34036[iParam0 /*31*/].f_1), 2);
			}
		}
		else if (Global_34036[iParam0 /*31*/].f_22 < 1f)
		{
			MISC::CLEAR_BIT(&(Global_34036[iParam0 /*31*/].f_1), 2);
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 7))
		{
			func_16(iParam0, 0);
		}
		if (!MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 3))
		{
			bVar2 = false;
			iVar3 = VEHICLE::GET_CLOSEST_VEHICLE(Global_34036[iParam0 /*31*/].f_2, 15f, 0, 2175);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, 0))
				{
					fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar3, 1), Global_34036[iParam0 /*31*/].f_2);
					if (fVar4 < Global_34036[iParam0 /*31*/].f_7)
					{
						bVar2 = true;
					}
				}
			}
			if (MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 1))
			{
				if (Global_34036[iParam0 /*31*/].f_22 < 0f)
				{
					if (!bVar2)
					{
						Global_34036[iParam0 /*31*/].f_22 = (Global_34036[iParam0 /*31*/].f_22 + (Global_34036[iParam0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
						if (Global_34036[iParam0 /*31*/].f_22 > 0f)
						{
							Global_34036[iParam0 /*31*/].f_22 = 0f;
						}
						MISC::CLEAR_BIT(&(Global_34036[iParam0 /*31*/].f_1), 2);
					}
				}
				else
				{
					Global_34036[iParam0 /*31*/].f_22 = 0f;
					MISC::SET_BIT(&(Global_34036[iParam0 /*31*/].f_1), 3);
				}
			}
			else if (Global_34036[iParam0 /*31*/].f_22 > 0f)
			{
				if (!bVar2)
				{
					Global_34036[iParam0 /*31*/].f_22 = (Global_34036[iParam0 /*31*/].f_22 - (Global_34036[iParam0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
					if (Global_34036[iParam0 /*31*/].f_22 < 0f)
					{
						Global_34036[iParam0 /*31*/].f_22 = 0f;
					}
					MISC::CLEAR_BIT(&(Global_34036[iParam0 /*31*/].f_1), 2);
				}
			}
			else
			{
				Global_34036[iParam0 /*31*/].f_22 = 0f;
				MISC::SET_BIT(&(Global_34036[iParam0 /*31*/].f_1), 3);
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[iParam0 /*31*/], Global_34036[iParam0 /*31*/].f_22, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[iParam0 /*31*/], 1, 0, 1);
		}
		else
		{
			if ((((((((Global_34036[iParam0 /*31*/] == -1735618852 || Global_34036[iParam0 /*31*/] == 213039352) || Global_34036[iParam0 /*31*/] == -1247364148) || Global_34036[iParam0 /*31*/] == 935592315) || Global_34036[iParam0 /*31*/] == 179480401) || Global_34036[iParam0 /*31*/] == -804938986) || Global_34036[iParam0 /*31*/] == -599111730) || Global_34036[iParam0 /*31*/] == 1423193534) || Global_34036[iParam0 /*31*/] == -1958174046)
			{
				AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_34036[iParam0 /*31*/], 0);
			}
			func_15(iParam0);
		}
	}
}

void func_15(int iParam0)//Position - 0x1A04
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar2 = iLocal_86;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (bVar1)
		{
			iLocal_87[(iVar0 - 1)] = iLocal_87[iVar0];
		}
		else if (iLocal_87[iVar0] == iParam0)
		{
			iLocal_86 = (iLocal_86 - 1);
			bVar1 = true;
		}
		iVar0++;
	}
}

void func_16(int iParam0, bool bParam1)//Position - 0x1A50
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	
	if (Global_34036[iParam0 /*31*/] == -1298870201)
	{
		iVar0 = 23;
	}
	else if (Global_34036[iParam0 /*31*/] == 65926040)
	{
		iVar0 = 22;
	}
	else if (Global_34036[iParam0 /*31*/] == 1423193534)
	{
		iVar0 = 26;
	}
	else if (Global_34036[iParam0 /*31*/] == -1958174046)
	{
		iVar0 = 25;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_34036[iVar0 /*31*/].f_1, 2))
		{
			if (MISC::IS_BIT_SET(Global_34036[iVar0 /*31*/].f_1, 1))
			{
				if (Global_34036[iVar0 /*31*/].f_22 > -1f)
				{
					Global_34036[iVar0 /*31*/].f_22 = (Global_34036[iVar0 /*31*/].f_22 - (Global_34036[iVar0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
					if (Global_34036[iVar0 /*31*/].f_22 < -1f)
					{
						Global_34036[iVar0 /*31*/].f_22 = -1f;
					}
					MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
				}
				else
				{
					MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 2);
				}
			}
			else if (Global_34036[iVar0 /*31*/].f_22 < 1f)
			{
				Global_34036[iVar0 /*31*/].f_22 = (Global_34036[iVar0 /*31*/].f_22 + (Global_34036[iVar0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
				if (Global_34036[iVar0 /*31*/].f_22 > 1f)
				{
					Global_34036[iVar0 /*31*/].f_22 = 1f;
				}
				MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
			}
			else
			{
				MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 2);
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[iVar0 /*31*/], Global_34036[iVar0 /*31*/].f_22, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[iVar0 /*31*/], 1, 0, 1);
		}
		else if (MISC::IS_BIT_SET(Global_34036[iVar0 /*31*/].f_1, 1))
		{
			if (Global_34036[iVar0 /*31*/].f_22 > -1f)
			{
				MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 2);
			}
		}
		else if (Global_34036[iVar0 /*31*/].f_22 < 1f)
		{
			MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 2);
		}
	}
	else if (!MISC::IS_BIT_SET(Global_34036[iVar0 /*31*/].f_1, 3))
	{
		bVar1 = false;
		iVar2 = VEHICLE::GET_CLOSEST_VEHICLE(Global_34036[iVar0 /*31*/].f_2, 15f, 0, 2175);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
			{
				fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar2, 1), Global_34036[iVar0 /*31*/].f_2);
				if (fVar3 < Global_34036[iVar0 /*31*/].f_7)
				{
					bVar1 = true;
				}
			}
		}
		if (MISC::IS_BIT_SET(Global_34036[iVar0 /*31*/].f_1, 1))
		{
			if (Global_34036[iVar0 /*31*/].f_22 < 0f)
			{
				if (!bVar1)
				{
					Global_34036[iVar0 /*31*/].f_22 = (Global_34036[iVar0 /*31*/].f_22 + (Global_34036[iVar0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
					if (Global_34036[iVar0 /*31*/].f_22 > 0f)
					{
						Global_34036[iVar0 /*31*/].f_22 = 0f;
					}
					MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 2);
				}
			}
			else
			{
				Global_34036[iVar0 /*31*/].f_22 = 0f;
				MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
			}
		}
		else if (Global_34036[iVar0 /*31*/].f_22 > 0f)
		{
			if (!bVar1)
			{
				Global_34036[iVar0 /*31*/].f_22 = (Global_34036[iVar0 /*31*/].f_22 - (Global_34036[iVar0 /*31*/].f_23 * SYSTEM::TIMESTEP()));
				if (Global_34036[iVar0 /*31*/].f_22 < 0f)
				{
					Global_34036[iVar0 /*31*/].f_22 = 0f;
				}
				MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 2);
			}
		}
		else
		{
			Global_34036[iVar0 /*31*/].f_22 = 0f;
			MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[iVar0 /*31*/], Global_34036[iVar0 /*31*/].f_22, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[iVar0 /*31*/], 1, 0, 1);
	}
}

void func_17(int iParam0)//Position - 0x1DAA
{
	int iVar0;
	
	if (iLocal_86 < iLocal_87)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_86)
		{
			if (iLocal_87[iVar0] == iParam0)
			{
				return;
			}
			iVar0++;
		}
		iLocal_87[iLocal_86] = iParam0;
		iLocal_86++;
	}
}

int func_18(int iParam0)//Position - 0x1DE8
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	
	if (Global_34036[iParam0 /*31*/].f_24 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_34036[iParam0 /*31*/].f_24)
		{
			iVar1 = Global_34036[iParam0 /*31*/].f_25[iVar0];
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (SYSTEM::VDIST2(Global_34036[iParam0 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(iVar1, 1)) < Global_34036[iParam0 /*31*/].f_6)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Global_34036[iParam0 /*31*/].f_9, Global_34036[iParam0 /*31*/].f_12, Global_34036[iParam0 /*31*/].f_8, 0, 1, 0))
						{
							iLocal_83 = iVar0;
							return 1;
						}
						if (MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Global_34036[iParam0 /*31*/].f_16, Global_34036[iParam0 /*31*/].f_19, Global_34036[iParam0 /*31*/].f_15, 0, 1, 0))
							{
								iLocal_83 = iVar0;
								return 1;
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
						{
							uVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
							Var3 = { GlobalFunc_649() };
							Var6 = { GlobalFunc_649() };
							Var9 = { GlobalFunc_649() };
							Var12 = { GlobalFunc_649() };
							MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uVar2), &Var3, &Var6);
							Var6.x = 0f;
							Var3.x = 0f;
							Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar2, Var6) };
							Var12 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar2, Var3) };
							if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var9, Global_34036[iParam0 /*31*/].f_9, Global_34036[iParam0 /*31*/].f_12, Global_34036[iParam0 /*31*/].f_8, 0, 1))
							{
								iLocal_83 = iVar0;
								return 1;
							}
							if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var12, Global_34036[iParam0 /*31*/].f_9, Global_34036[iParam0 /*31*/].f_12, Global_34036[iParam0 /*31*/].f_8, 0, 1))
							{
								iLocal_83 = iVar0;
								return 1;
							}
							if (MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 0))
							{
								if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var9, Global_34036[iParam0 /*31*/].f_16, Global_34036[iParam0 /*31*/].f_19, Global_34036[iParam0 /*31*/].f_15, 0, 1))
								{
									iLocal_83 = iVar0;
									return 1;
								}
								if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var12, Global_34036[iParam0 /*31*/].f_16, Global_34036[iParam0 /*31*/].f_19, Global_34036[iParam0 /*31*/].f_15, 0, 1))
								{
									iLocal_83 = iVar0;
									return 1;
								}
							}
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(uVar2))
							{
								iVar15 = 0;
								if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(uVar2, &iVar15))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar15, Global_34036[iParam0 /*31*/].f_9, Global_34036[iParam0 /*31*/].f_12, Global_34036[iParam0 /*31*/].f_8, 0, 1, 0))
									{
										iLocal_83 = iVar0;
										return 1;
									}
									if (MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 0))
									{
										if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar15, Global_34036[iParam0 /*31*/].f_16, Global_34036[iParam0 /*31*/].f_19, Global_34036[iParam0 /*31*/].f_15, 0, 1, 0))
										{
											iLocal_83 = iVar0;
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}




void func_22(int iParam0)//Position - 0x219A
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			switch (iParam0)
			{
				case 13:
					if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[78 /*34*/].f_6) == 0)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_34036[13 /*31*/].f_2, 1) <= 100f)
							{
								if (!GlobalFunc_580(13, PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_5669(13, PLAYER::PLAYER_PED_ID());
								}
							}
							else if (GlobalFunc_580(13, PLAYER::PLAYER_PED_ID()))
							{
								GlobalFunc_583(13, PLAYER::PLAYER_PED_ID(), 0);
							}
						}
					}
					else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[78 /*34*/].f_6) == 0)
					{
						if (GlobalFunc_580(13, PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_583(13, PLAYER::PLAYER_PED_ID(), 0);
						}
					}
					break;
				
				case 17:
				case 16:
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[9 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("extreme2")) == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_34036[17 /*31*/].f_2, 1) <= 100f)
						{
							switch (GlobalFunc_8329())
							{
								case 0:
									if (GlobalFunc_78(12, 5))
									{
										if (!GlobalFunc_580(17, PLAYER::PLAYER_PED_ID()))
										{
											GlobalFunc_5669(17, PLAYER::PLAYER_PED_ID());
										}
										if (!GlobalFunc_580(16, PLAYER::PLAYER_PED_ID()))
										{
											GlobalFunc_5669(16, PLAYER::PLAYER_PED_ID());
										}
									}
									else
									{
										if (GlobalFunc_580(17, PLAYER::PLAYER_PED_ID()))
										{
											GlobalFunc_583(17, PLAYER::PLAYER_PED_ID(), 0);
										}
										if (GlobalFunc_580(16, PLAYER::PLAYER_PED_ID()))
										{
											GlobalFunc_583(16, PLAYER::PLAYER_PED_ID(), 0);
										}
									}
									break;
								
								case 1:
									if (GlobalFunc_78(13, 5))
									{
										if (!GlobalFunc_580(17, PLAYER::PLAYER_PED_ID()))
										{
											GlobalFunc_5669(17, PLAYER::PLAYER_PED_ID());
										}
										if (!GlobalFunc_580(16, PLAYER::PLAYER_PED_ID()))
										{
											GlobalFunc_5669(16, PLAYER::PLAYER_PED_ID());
										}
									}
									else
									{
										if (GlobalFunc_580(17, PLAYER::PLAYER_PED_ID()))
										{
											GlobalFunc_583(17, PLAYER::PLAYER_PED_ID(), 0);
										}
										if (GlobalFunc_580(16, PLAYER::PLAYER_PED_ID()))
										{
											GlobalFunc_583(16, PLAYER::PLAYER_PED_ID(), 0);
										}
									}
									break;
								
								case 2:
									if (GlobalFunc_78(14, 5))
									{
										if (!GlobalFunc_580(17, PLAYER::PLAYER_PED_ID()))
										{
											GlobalFunc_5669(17, PLAYER::PLAYER_PED_ID());
										}
										if (!GlobalFunc_580(16, PLAYER::PLAYER_PED_ID()))
										{
											GlobalFunc_5669(16, PLAYER::PLAYER_PED_ID());
										}
									}
									else
									{
										if (GlobalFunc_580(17, PLAYER::PLAYER_PED_ID()))
										{
											GlobalFunc_583(17, PLAYER::PLAYER_PED_ID(), 0);
										}
										if (GlobalFunc_580(16, PLAYER::PLAYER_PED_ID()))
										{
											GlobalFunc_583(16, PLAYER::PLAYER_PED_ID(), 0);
										}
									}
									break;
							}
						}
						else
						{
							if (GlobalFunc_580(17, PLAYER::PLAYER_PED_ID()))
							{
								GlobalFunc_583(17, PLAYER::PLAYER_PED_ID(), 0);
							}
							if (GlobalFunc_580(16, PLAYER::PLAYER_PED_ID()))
							{
								GlobalFunc_583(16, PLAYER::PLAYER_PED_ID(), 0);
							}
						}
					}
					break;
				
				case 22:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_34036[22 /*31*/].f_2, 1) <= 100f)
					{
						switch (GlobalFunc_8329())
						{
							case 0:
								if (GlobalFunc_78(12, 5))
								{
									if (!GlobalFunc_580(22, PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_5669(22, PLAYER::PLAYER_PED_ID());
									}
									if (!GlobalFunc_580(23, PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_5669(23, PLAYER::PLAYER_PED_ID());
									}
								}
								else
								{
									if (GlobalFunc_580(22, PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_583(22, PLAYER::PLAYER_PED_ID(), 0);
									}
									if (GlobalFunc_580(23, PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_583(23, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
								break;
							
							case 1:
								if (GlobalFunc_78(13, 5))
								{
									if (!GlobalFunc_580(22, PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_5669(22, PLAYER::PLAYER_PED_ID());
									}
									if (!GlobalFunc_580(23, PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_5669(23, PLAYER::PLAYER_PED_ID());
									}
								}
								else
								{
									if (GlobalFunc_580(22, PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_583(22, PLAYER::PLAYER_PED_ID(), 0);
									}
									if (GlobalFunc_580(23, PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_583(23, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
								break;
							
							case 2:
								if (GlobalFunc_78(14, 5))
								{
									if (!GlobalFunc_580(22, PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_5669(22, PLAYER::PLAYER_PED_ID());
									}
									if (!GlobalFunc_580(23, PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_5669(23, PLAYER::PLAYER_PED_ID());
									}
								}
								else
								{
									if (GlobalFunc_580(22, PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_583(22, PLAYER::PLAYER_PED_ID(), 0);
									}
									if (GlobalFunc_580(23, PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_583(23, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
								break;
						}
					}
					else
					{
						if (GlobalFunc_580(22, PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_583(22, PLAYER::PLAYER_PED_ID(), 0);
						}
						if (GlobalFunc_580(23, PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_583(23, PLAYER::PLAYER_PED_ID(), 0);
						}
					}
					break;
				
				case 14:
				case 15:
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[27 /*34*/].f_6) == 0)
					{
						if (GlobalFunc_580(14, PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_583(14, PLAYER::PLAYER_PED_ID(), 0);
						}
						if (GlobalFunc_580(15, PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_583(15, PLAYER::PLAYER_PED_ID(), 0);
						}
					}
					break;
				
				case 24:
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 480.4354f, -1317.91f, 29.5957f) < 400f)
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[8 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_81155[10 /*34*/].f_6) == 0)
						{
							if (GlobalFunc_580(24, PLAYER::PLAYER_PED_ID()))
							{
								if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != INTERIOR::GET_INTERIOR_AT_COORDS(480.4354f, -1317.91f, 29.5957f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 486.86f, -1316.604f, 27.71937f, 484.8906f, -1312.647f, 31.72312f, 4.25f, 0, 1, 0))
								{
									GlobalFunc_583(24, PLAYER::PLAYER_PED_ID(), 0);
								}
							}
							else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(480.4354f, -1317.91f, 29.5957f, "v_chopshop"))
							{
								GlobalFunc_5669(24, PLAYER::PLAYER_PED_ID());
							}
						}
						else if (!GlobalFunc_580(24, PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_5669(24, PLAYER::PLAYER_PED_ID());
						}
					}
					break;
				
				case 25:
				case 26:
					if (!GlobalFunc_580(25, PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_5669(25, PLAYER::PLAYER_PED_ID());
					}
					if (!GlobalFunc_580(26, PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_5669(26, PLAYER::PLAYER_PED_ID());
					}
					break;
				
				case 4:
					if (!GlobalFunc_580(4, PLAYER::PLAYER_PED_ID()))
					{
						switch (GlobalFunc_8329())
						{
							case 0:
								if (SYSTEM::VDIST2(Global_34036[4 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 10000f)
								{
									GlobalFunc_5669(4, PLAYER::PLAYER_PED_ID());
								}
								break;
							
							case 1:
								if (GlobalFunc_230(2))
								{
									if (GlobalFunc_230(17))
									{
										if (GlobalFunc_230(19) || GlobalFunc_891(19))
										{
											if (SYSTEM::VDIST2(Global_34036[4 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 10000f)
											{
												GlobalFunc_5669(4, PLAYER::PLAYER_PED_ID());
											}
										}
									}
									else if (SYSTEM::VDIST2(Global_34036[4 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 10000f)
									{
										GlobalFunc_5669(4, PLAYER::PLAYER_PED_ID());
									}
								}
								break;
							
							case 2:
								if (GlobalFunc_230(20))
								{
									if (SYSTEM::VDIST2(Global_34036[4 /*31*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 10000f)
									{
										GlobalFunc_5669(4, PLAYER::PLAYER_PED_ID());
									}
								}
								break;
							}
					}
					break;
				}
			}
	}
}











void func_33()//Position - 0x2BF9
{
	var uVar0;
	int iVar236;
	
	uVar0 = 225;
	uVar0.f_227 = 8;
	func_56(&Global_31726, &uVar0);
	func_34(iLocal_76);
	iVar236 = 0;
	while (iVar236 < uVar0.f_226)
	{
		if (uVar0[iVar236] != iLocal_76)
		{
			func_34(uVar0[iVar236]);
		}
		iVar236++;
	}
	iLocal_76++;
	if (iLocal_76 >= 225)
	{
		iLocal_76 = 0;
	}
}

void func_34(int iParam0)//Position - 0x2C59
{
	if ((MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] != 2) && !MISC::IS_BIT_SET(Global_31031[(iParam0 / 32)], (iParam0 % 32)))
	{
		Global_30805[iParam0] = (Global_30805[iParam0] - 1);
		if (Global_30805[iParam0] <= 0)
		{
			MISC::CLEAR_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
			Global_30805[iParam0] = 0;
		}
	}
	else
	{
		GlobalFunc_10067(iParam0);
	}
}






















void func_56(var uParam0, var uParam1)//Position - 0x6DF8
{
	*uParam1 = { *uParam0 };
	uParam1->f_226 = uParam0->f_226;
	uParam0->f_226 = 0;
	uParam0->f_227 = { uParam1->f_227 };
}





void func_61()//Position - 0x6E79
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!GlobalFunc_4921())
	{
		if (Global_33156 >= 198)
		{
			if (!bLocal_94)
			{
				func_71();
				iLocal_93 = 2;
				return;
			}
		}
	}
	iLocal_77 = (iLocal_77 + 1 % 198);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar0 = (iLocal_77 + iVar1 * 198);
		if (iVar0 < 198)
		{
			if (func_66(iVar0))
			{
				if (((((iVar0 == 179 || iVar0 == 174) || iVar0 == 178) || iVar0 == 175) || iVar0 == 176) || iVar0 == 177)
				{
					func_66(179);
					func_66(174);
					func_66(178);
					func_66(175);
					func_66(176);
					func_66(177);
				}
			}
		}
		iVar1++;
	}
	if (Global_33157)
	{
		iVar0 = 0;
		while (iVar0 < 198)
		{
			GlobalFunc_60(&Local_96, iVar0);
			func_64(&Local_96, iVar0, Global_32360[iVar0]);
			func_62(&Local_96, iVar0, Global_32360[iVar0]);
			Global_33357[iVar0] = 0;
			iVar0++;
		}
		Global_33157 = 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		iVar2 = 0;
		while (iVar2 < 10)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_33955[iVar2 /*8*/])))
			{
				if (STREAMING::IS_IPL_ACTIVE(&(Global_33955[iVar2 /*8*/])))
				{
					STREAMING::REMOVE_IPL(&(Global_33955[iVar2 /*8*/]));
				}
				StringCopy(&(Global_33955[iVar2 /*8*/]), "", 32);
			}
			iVar2++;
		}
	}
}

void func_62(var uParam0, int iParam1, int iParam2)//Position - 0x6FD7
{
	if (!GlobalFunc_100(uParam0->f_79, 0f, 0f, 0f))
	{
		if (iParam2 == 0)
		{
			if (Global_33158[iParam1])
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_33755[iParam1], 0);
				Global_33158[iParam1] = 0;
			}
		}
		else if (iParam2 == 1 || iParam2 == 2)
		{
			if (!Global_33158[iParam1])
			{
				Global_33755[iParam1] = PED::ADD_SCENARIO_BLOCKING_AREA(uParam0->f_79, uParam0->f_82, 0, 1, 1, 1);
				Global_33158[iParam1] = 1;
			}
		}
	}
}


void func_64(var uParam0, int iParam1, int iParam2)//Position - 0x707F
{
	if (!GlobalFunc_100(uParam0->f_58, 0f, 0f, 0f) && !GlobalFunc_100(uParam0->f_61, 0f, 0f, 0f))
	{
		if (uParam0->f_64[iParam2])
		{
			PATHFIND::SET_ROADS_IN_AREA(uParam0->f_58, uParam0->f_61, 1, 1);
		}
		else
		{
			PATHFIND::SET_ROADS_IN_AREA(uParam0->f_58, uParam0->f_61, 0, 1);
		}
	}
	if (!GlobalFunc_100(uParam0->f_68, 0f, 0f, 0f))
	{
		if (uParam0->f_75[iParam2])
		{
			if (!Global_32758[iParam1])
			{
				Global_32559[iParam1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(uParam0->f_68, uParam0->f_71, uParam0->f_74, 0, 7);
				Global_32758[iParam1] = 1;
			}
		}
		else if (Global_32758[iParam1])
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_32559[iParam1]);
			Global_32758[iParam1] = 0;
		}
	}
	if (!GlobalFunc_100(uParam0->f_85, 0f, 0f, 0f) && !GlobalFunc_100(uParam0->f_88, 0f, 0f, 0f))
	{
		if (uParam0->f_91[iParam2])
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uParam0->f_85, uParam0->f_88, 0, 1);
		}
		else
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uParam0->f_85, uParam0->f_88, 1, 1);
		}
	}
}


int func_66(int iParam0)//Position - 0xA895
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	if (Global_32161[iParam0] || (!GlobalFunc_4921() && !Global_32957[iParam0]))
	{
		if (GlobalFunc_6676(iParam0, 0, 0, 0))
		{
			iVar1 = 1;
		}
	}
	if (Global_32360[iParam0] == 1)
	{
		GlobalFunc_60(&Local_96, iParam0);
		bVar0 = true;
		if (Local_96.f_33)
		{
			if (MISC::GET_HASH_KEY(&(Local_96.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(""))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_96, 1) > 250f)
				{
					GlobalFunc_7621(iParam0, 2, 0, 1, 0);
				}
			}
		}
	}
	if (Global_33556[iParam0])
	{
		if (!bVar0)
		{
			GlobalFunc_60(&Local_96, iParam0);
			bVar0 = true;
		}
		func_64(&Local_96, iParam0, Global_32360[iParam0]);
		Global_33556[iParam0] = 0;
	}
	if (Global_33357[iParam0])
	{
		if (!bVar0)
		{
			GlobalFunc_60(&Local_96, iParam0);
			bVar0 = true;
		}
		func_62(&Local_96, iParam0, Global_32360[iParam0]);
		Global_33357[iParam0] = 0;
	}
	return iVar1;
}





void func_71()//Position - 0xB40F
{
	int iVar0;
	struct<7> Var1;
	
	if (Global_30786)
	{
		iVar0 = 0;
		while (iVar0 < 225)
		{
			Var1 = { GlobalFunc_511(iVar0) };
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var1.f_5))
			{
				OBJECT::REMOVE_DOOR_FROM_SYSTEM(Var1.f_5);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 27)
		{
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[iVar0 /*31*/]))
			{
				OBJECT::REMOVE_DOOR_FROM_SYSTEM(Global_34036[iVar0 /*31*/]);
			}
			iVar0++;
		}
	}
	Global_30786 = 0;
}

void func_72()//Position - 0xB480
{
	if (!iLocal_95 && MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[27 /*3*/], 2))
	{
		iLocal_95 = 1;
		bLocal_94 = true;
	}
	if (bLocal_94 && (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_STATE() == 5)))
	{
		if (STREAMING::IS_IPL_ACTIVE("prologue01"))
		{
			STREAMING::REMOVE_IPL("prologue01");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue02"))
		{
			STREAMING::REMOVE_IPL("prologue02");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue03"))
		{
			STREAMING::REMOVE_IPL("prologue03");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue04"))
		{
			STREAMING::REMOVE_IPL("prologue04");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue05"))
		{
			STREAMING::REMOVE_IPL("prologue05");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue06"))
		{
			STREAMING::REMOVE_IPL("prologue06");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologuerd"))
		{
			STREAMING::REMOVE_IPL("prologuerd");
		}
		if (STREAMING::IS_IPL_ACTIVE("Prologue01c"))
		{
			STREAMING::REMOVE_IPL("Prologue01c");
		}
		if (STREAMING::IS_IPL_ACTIVE("Prologue01d"))
		{
			STREAMING::REMOVE_IPL("Prologue01d");
		}
		if (STREAMING::IS_IPL_ACTIVE("Prologue01e"))
		{
			STREAMING::REMOVE_IPL("Prologue01e");
		}
		if (STREAMING::IS_IPL_ACTIVE("Prologue01f"))
		{
			STREAMING::REMOVE_IPL("Prologue01f");
		}
		if (STREAMING::IS_IPL_ACTIVE("Prologue01g"))
		{
			STREAMING::REMOVE_IPL("Prologue01g");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue01h"))
		{
			STREAMING::REMOVE_IPL("prologue01h");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue01i"))
		{
			STREAMING::REMOVE_IPL("prologue01i");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue01j"))
		{
			STREAMING::REMOVE_IPL("prologue01j");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue01k"))
		{
			STREAMING::REMOVE_IPL("prologue01k");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue01z"))
		{
			STREAMING::REMOVE_IPL("prologue01z");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue03b"))
		{
			STREAMING::REMOVE_IPL("prologue03b");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue04b"))
		{
			STREAMING::REMOVE_IPL("prologue04b");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue05b"))
		{
			STREAMING::REMOVE_IPL("prologue05b");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue06b"))
		{
			STREAMING::REMOVE_IPL("prologue06b");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologuerdb"))
		{
			STREAMING::REMOVE_IPL("prologuerdb");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue_occl"))
		{
			STREAMING::REMOVE_IPL("prologue_occl");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue06_int"))
		{
			STREAMING::REMOVE_IPL("prologue06_int");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue04_cover"))
		{
			STREAMING::REMOVE_IPL("prologue04_cover");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue03_grv_dug"))
		{
			STREAMING::REMOVE_IPL("prologue03_grv_dug");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue03_grv_cov"))
		{
			STREAMING::REMOVE_IPL("prologue03_grv_cov");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue03_grv_fun"))
		{
			STREAMING::REMOVE_IPL("prologue03_grv_fun");
		}
		if (STREAMING::IS_IPL_ACTIVE("prologue_grv_torch"))
		{
			STREAMING::REMOVE_IPL("prologue_grv_torch");
		}
		if (GlobalFunc_4921())
		{
			GlobalFunc_2449("prologue_DistantLights");
			GlobalFunc_2449("prologue_LODLights");
		}
		else
		{
			if (STREAMING::IS_IPL_ACTIVE("prologue_DistantLights"))
			{
				STREAMING::REMOVE_IPL("prologue_DistantLights");
			}
			if (STREAMING::IS_IPL_ACTIVE("prologue_LODLights"))
			{
				STREAMING::REMOVE_IPL("prologue_LODLights");
			}
		}
		STREAMING::REMOVE_IPL("DES_ProTree_start");
		STREAMING::REMOVE_IPL("DES_ProTree_start_lod");
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Prologue_Main", 0);
		GlobalFunc_2448(0);
		bLocal_94 = false;
	}
}



void func_75()//Position - 0xB838
{
	int iVar0;
	
	if (GlobalFunc_4921())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (GlobalFunc_1011())
		{
			return;
		}
	}
	else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_3() != 2)
	{
		return;
	}
	if (Global_2435235)
	{
		func_71();
		func_85(0);
		Global_2435235 = 0;
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5))
	{
		return;
	}
	STREAMING::REMOVE_IPL("SUNK_SHIP_FIRE");
	STREAMING::REMOVE_IPL("SpaceInterior");
	if (STREAMING::IS_IPL_ACTIVE("PO1_08_sub_waterplane"))
	{
		STREAMING::REMOVE_IPL("PO1_08_sub_waterplane");
	}
	Global_2422140.f_73.f_425 = 0;
	if (!func_84())
	{
		GlobalFunc_7123();
		iLocal_191 = 1;
	}
	Global_31726.f_226 = 0;
	iVar0 = 0;
	while (iVar0 < 225)
	{
		MISC::SET_BIT(&(Global_30787[(iVar0 / 32)]), (iVar0 % 32));
		Global_30805[iVar0] = 0;
		MISC::CLEAR_BIT(&(Global_30796[(iVar0 / 32)]), (iVar0 % 32));
		Global_31257[iVar0] = 0;
		Global_31483[iVar0] = 1;
		MISC::SET_BIT(&(Global_31031[(iVar0 / 32)]), (iVar0 % 32));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 198)
	{
		Global_31962[iVar0] = 0;
		if (Global_32758[iVar0])
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_32559[iVar0]);
			Global_32758[iVar0] = 0;
		}
		if (Global_33158[iVar0])
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_33755[iVar0], 0);
			Global_33158[iVar0] = 0;
		}
		Global_32957[iVar0] = 0;
		iVar0++;
	}
	Global_33156 = 0;
	if (GlobalFunc_4921())
	{
		func_82();
		func_81();
		func_85(1);
		func_80();
	}
	else
	{
		func_71();
		func_85(0);
	}
	iLocal_75 = 0;
	iLocal_76 = 0;
	iLocal_77 = 0;
	bLocal_94 = true;
	iLocal_95 = 0;
	Global_30785 = 0;
	if (GlobalFunc_4921())
	{
		MISC::SET_BIT(&iLocal_75, 1);
		MISC::SET_BIT(&iLocal_75, 2);
	}
	else
	{
		MISC::SET_BIT(&iLocal_75, 0);
	}
	if (iLocal_191)
	{
		GlobalFunc_9183(1);
		iLocal_191 = 0;
	}
	iLocal_93 = 1;
}





void func_80()//Position - 0xBC35
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 225)
	{
		Var1 = { GlobalFunc_511(iVar0) };
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var1.f_5))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(Var1.f_5, Var1.f_3, Var1, 0, 0, 0);
		}
		iVar0++;
	}
	Global_30786 = 1;
}

void func_81()//Position - 0xBC7D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(Global_34036[iVar0 /*31*/], Global_34036[iVar0 /*31*/].f_5, Global_34036[iVar0 /*31*/].f_2, 1, 1, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[iVar0 /*31*/], 1, 1, 0);
		Global_34036[iVar0 /*31*/].f_22 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Global_34036[iVar0 /*31*/]);
		MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 2);
		MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
		MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 5);
		MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 6);
		iVar0++;
	}
	bLocal_84 = true;
}

void func_82()//Position - 0xBD17
{
	int iVar0;
	
	iVar0 = 4;
	Global_34036[iVar0 /*31*/] = -1735618852;
	Global_34036[iVar0 /*31*/].f_2 = { -844f, 156f, 66f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_lrggate_02_ld");
	Global_34036[iVar0 /*31*/].f_6 = 900f;
	Global_34036[iVar0 /*31*/].f_7 = 36f;
	Global_34036[iVar0 /*31*/].f_8 = 15f;
	Global_34036[iVar0 /*31*/].f_9 = { -851.8159f, 170.8743f, 61.30219f };
	Global_34036[iVar0 /*31*/].f_12 = { -851.57f, 148.1459f, 71.34533f };
	Global_34036[iVar0 /*31*/].f_15 = 15f;
	Global_34036[iVar0 /*31*/].f_16 = { -836.6597f, 175.3366f, 65.05977f };
	Global_34036[iVar0 /*31*/].f_19 = { -836.6878f, 152.789f, 73.66382f };
	Global_34036[iVar0 /*31*/].f_23 = 0.25f;
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 4);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 0;
	Global_34036[iVar0 /*31*/] = -303823323;
	Global_34036[iVar0 /*31*/].f_2 = { 19f, -2530f, 5f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_34036[iVar0 /*31*/].f_6 = 625f;
	Global_34036[iVar0 /*31*/].f_7 = 49f;
	Global_34036[iVar0 /*31*/].f_8 = 7.75f;
	Global_34036[iVar0 /*31*/].f_9 = { 15.18826f, -2531.203f, 5.05037f };
	Global_34036[iVar0 /*31*/].f_12 = { 30.92092f, -2542.128f, 7.5043f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 1;
	Global_34036[iVar0 /*31*/] = -1110491335;
	Global_34036[iVar0 /*31*/].f_2 = { 11f, -2542f, 5f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_34036[iVar0 /*31*/].f_6 = 625f;
	Global_34036[iVar0 /*31*/].f_7 = 49f;
	Global_34036[iVar0 /*31*/].f_8 = 7.75f;
	Global_34036[iVar0 /*31*/].f_9 = { 13.80261f, -2540.929f, 5.050376f };
	Global_34036[iVar0 /*31*/].f_12 = { -5.521768f, -2527.885f, 7.542066f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 2;
	Global_34036[iVar0 /*31*/] = 883531289;
	Global_34036[iVar0 /*31*/].f_2 = { -193f, -2515f, 5f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_34036[iVar0 /*31*/].f_6 = 625f;
	Global_34036[iVar0 /*31*/].f_7 = 49f;
	Global_34036[iVar0 /*31*/].f_8 = 12f;
	Global_34036[iVar0 /*31*/].f_9 = { -190.6964f, -2515.288f, 4.678052f };
	Global_34036[iVar0 /*31*/].f_12 = { -190.7913f, -2536.692f, 9.000118f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 3;
	Global_34036[iVar0 /*31*/] = -1464860354;
	Global_34036[iVar0 /*31*/].f_2 = { -203f, -2515f, 5f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_34036[iVar0 /*31*/].f_6 = 625f;
	Global_34036[iVar0 /*31*/].f_7 = 49f;
	Global_34036[iVar0 /*31*/].f_8 = 12f;
	Global_34036[iVar0 /*31*/].f_9 = { -200.208f, -2515.379f, 5.047561f };
	Global_34036[iVar0 /*31*/].f_12 = { -200.3241f, -2495.309f, 7.891297f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 5;
	Global_34036[iVar0 /*31*/] = 1862541262;
	Global_34036[iVar0 /*31*/].f_2 = { 476f, -3116f, 5f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_34036[iVar0 /*31*/].f_6 = 900f;
	Global_34036[iVar0 /*31*/].f_7 = 49f;
	Global_34036[iVar0 /*31*/].f_8 = 40f;
	Global_34036[iVar0 /*31*/].f_9 = { 484.581f, -3115.548f, 4.652226f };
	Global_34036[iVar0 /*31*/].f_12 = { 473.6379f, -3116.051f, 11.0701f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 6;
	Global_34036[iVar0 /*31*/] = 747815589;
	Global_34036[iVar0 /*31*/].f_2 = { 492f, -3116f, 5f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_gate_docks_ld");
	Global_34036[iVar0 /*31*/].f_6 = 900f;
	Global_34036[iVar0 /*31*/].f_7 = 49f;
	Global_34036[iVar0 /*31*/].f_8 = 40f;
	Global_34036[iVar0 /*31*/].f_9 = { 484.0876f, -3115.801f, 4.652227f };
	Global_34036[iVar0 /*31*/].f_12 = { 494.8903f, -3115.787f, 11.06866f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 7;
	Global_34036[iVar0 /*31*/] = 616346630;
	Global_34036[iVar0 /*31*/].f_2 = { 1600f, -2806f, 16f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_gate_military_01");
	Global_34036[iVar0 /*31*/].f_6 = 900f;
	Global_34036[iVar0 /*31*/].f_7 = 25f;
	Global_34036[iVar0 /*31*/].f_8 = 40f;
	Global_34036[iVar0 /*31*/].f_9 = { -1599.609f, 2805.895f, 15.67009f };
	Global_34036[iVar0 /*31*/].f_12 = { -1593.815f, 2811.392f, 22.02457f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 8;
	Global_34036[iVar0 /*31*/] = 447317969;
	Global_34036[iVar0 /*31*/].f_2 = { 1605f, -2801f, 16f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_gate_military_01");
	Global_34036[iVar0 /*31*/].f_6 = 900f;
	Global_34036[iVar0 /*31*/].f_7 = 25f;
	Global_34036[iVar0 /*31*/].f_8 = 40f;
	Global_34036[iVar0 /*31*/].f_9 = { -1599.609f, 2805.895f, 15.67009f };
	Global_34036[iVar0 /*31*/].f_12 = { -1605.858f, 2800.541f, 22.5089f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 9;
	Global_34036[iVar0 /*31*/] = -367370493;
	Global_34036[iVar0 /*31*/].f_2 = { -1041f, 4906f, 209f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_gate_cult_01_l");
	Global_34036[iVar0 /*31*/].f_6 = 900f;
	Global_34036[iVar0 /*31*/].f_7 = 25f;
	Global_34036[iVar0 /*31*/].f_8 = 40f;
	Global_34036[iVar0 /*31*/].f_9 = { -1050.437f, 4909.196f, 200f };
	Global_34036[iVar0 /*31*/].f_12 = { -1027.922f, 4921.748f, 215f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 10;
	Global_34036[iVar0 /*31*/] = -1402957286;
	Global_34036[iVar0 /*31*/].f_2 = { -1045f, 4915f, 209f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_gate_cult_01_r");
	Global_34036[iVar0 /*31*/].f_6 = 900f;
	Global_34036[iVar0 /*31*/].f_7 = 36f;
	Global_34036[iVar0 /*31*/].f_8 = 40f;
	Global_34036[iVar0 /*31*/].f_9 = { -1050.437f, 4909.196f, 200f };
	Global_34036[iVar0 /*31*/].f_12 = { -1027.922f, 4921.748f, 215f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 11;
	Global_34036[iVar0 /*31*/] = -170964766;
	Global_34036[iVar0 /*31*/].f_2 = { 523.982f, 167.7104f, 100.5962f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_hw1_03_gardoor_01");
	Global_34036[iVar0 /*31*/].f_6 = 625f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 21.75f;
	Global_34036[iVar0 /*31*/].f_9 = { 520.2437f, 164.8932f, 98.04417f };
	Global_34036[iVar0 /*31*/].f_12 = { 523.08f, 172.6999f, 102.7824f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 12;
	Global_34036[iVar0 /*31*/] = -1247364148;
	Global_34036[iVar0 /*31*/].f_2 = { 18.6504f, 546.3401f, 176.3448f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_ch_025c_g_door_01");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 14.75f;
	Global_34036[iVar0 /*31*/].f_9 = { 19.32684f, 550.176f, 174.0001f };
	Global_34036[iVar0 /*31*/].f_12 = { 15.76926f, 543.8351f, 178.023f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 13;
	Global_34036[iVar0 /*31*/] = 213039352;
	Global_34036[iVar0 /*31*/].f_2 = { 397.83f, -1607.34f, 28.34f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_facgate_07b");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 14.5f;
	Global_34036[iVar0 /*31*/].f_9 = { 405.3651f, -1612.886f, 27.52282f };
	Global_34036[iVar0 /*31*/].f_12 = { 396.684f, -1605.761f, 32.76698f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 14;
	Global_34036[iVar0 /*31*/] = -166321961;
	Global_34036[iVar0 /*31*/].f_2 = { -2559.19f, 1910.86f, 169.07f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_lrggate_01c_l");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 13f;
	Global_34036[iVar0 /*31*/].f_9 = { -2551.36f, 1909.907f, 166.4336f };
	Global_34036[iVar0 /*31*/].f_12 = { -2572.051f, 1924.18f, 171.3947f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 15;
	Global_34036[iVar0 /*31*/] = -2036678178;
	Global_34036[iVar0 /*31*/].f_2 = { -2556.66f, 1915.72f, 169.07f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_lrggate_01c_r");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 13f;
	Global_34036[iVar0 /*31*/].f_9 = { -2551.36f, 1909.907f, 166.4336f };
	Global_34036[iVar0 /*31*/].f_12 = { -2572.051f, 1924.18f, 171.3947f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 16;
	Global_34036[iVar0 /*31*/] = -599111730;
	Global_34036[iVar0 /*31*/].f_2 = { -961.23f, -2796.28f, 13.96f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_sec_barrier_ld_01a");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 7f;
	Global_34036[iVar0 /*31*/].f_9 = { -958.5402f, -2798.281f, 12.71478f };
	Global_34036[iVar0 /*31*/].f_12 = { -964.4572f, -2808.593f, 17.71479f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 17;
	Global_34036[iVar0 /*31*/] = -804938986;
	Global_34036[iVar0 /*31*/].f_2 = { -967.01f, -2802.45f, 13.96f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_sec_barrier_ld_01a");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 6.5f;
	Global_34036[iVar0 /*31*/].f_9 = { -970.272f, -2800.353f, 12.71479f };
	Global_34036[iVar0 /*31*/].f_12 = { -965.0052f, -2791.101f, 17.71479f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 18;
	Global_34036[iVar0 /*31*/] = 935592315;
	Global_34036[iVar0 /*31*/].f_2 = { 431.41f, -1000.16f, 28.65f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_com_gar_door_01");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 11f;
	Global_34036[iVar0 /*31*/].f_9 = { 433.7827f, -1001.49f, 23.79724f };
	Global_34036[iVar0 /*31*/].f_12 = { 433.8862f, -1017.222f, 29.59358f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 19;
	Global_34036[iVar0 /*31*/] = 179480401;
	Global_34036[iVar0 /*31*/].f_2 = { 436.22f, -1001.17f, 26.71f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_com_gar_door_01");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 11f;
	Global_34036[iVar0 /*31*/].f_9 = { 433.7827f, -1001.49f, 23.79724f };
	Global_34036[iVar0 /*31*/].f_12 = { 433.8862f, -1017.222f, 29.59358f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 20;
	Global_34036[iVar0 /*31*/] = -2128682856;
	Global_34036[iVar0 /*31*/].f_2 = { -1588.27f, 2794.21f, 16.85f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_sec_barrier_ld_01a");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 6.75f;
	Global_34036[iVar0 /*31*/].f_9 = { -1585.349f, 2796.765f, 15.33345f };
	Global_34036[iVar0 /*31*/].f_12 = { -1573.874f, 2783.339f, 20.00324f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 21;
	Global_34036[iVar0 /*31*/] = 313531445;
	Global_34036[iVar0 /*31*/].f_2 = { -1589.58f, 2793.67f, 16.86f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_sec_barrier_ld_01a");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 6.75f;
	Global_34036[iVar0 /*31*/].f_9 = { -1592.552f, 2791.04f, 15.32601f };
	Global_34036[iVar0 /*31*/].f_12 = { -1604.54f, 2805.558f, 20.1746f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 22;
	Global_34036[iVar0 /*31*/] = -1298870201;
	Global_34036[iVar0 /*31*/].f_2 = { -984.08f, -2348.4f, 12.94f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_facgate_01");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 15.25f;
	Global_34036[iVar0 /*31*/].f_9 = { -979.2388f, -2341.411f, 11.92474f };
	Global_34036[iVar0 /*31*/].f_12 = { -993.5251f, -2333.147f, 20.42473f };
	Global_34036[iVar0 /*31*/].f_15 = 15.25f;
	Global_34036[iVar0 /*31*/].f_16 = { -984.4644f, -2357.32f, 11.92474f };
	Global_34036[iVar0 /*31*/].f_19 = { -1002.451f, -2346.988f, 20.44472f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 23;
	Global_34036[iVar0 /*31*/] = 65926040;
	Global_34036[iVar0 /*31*/].f_2 = { -994.5f, -2341.65f, 12.94f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_facgate_01");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 15.25f;
	Global_34036[iVar0 /*31*/].f_9 = { -979.2388f, -2341.411f, 11.92474f };
	Global_34036[iVar0 /*31*/].f_12 = { -993.5251f, -2333.147f, 20.42473f };
	Global_34036[iVar0 /*31*/].f_15 = 15.25f;
	Global_34036[iVar0 /*31*/].f_16 = { -984.4644f, -2357.32f, 11.92474f };
	Global_34036[iVar0 /*31*/].f_19 = { -1002.451f, -2346.988f, 20.44472f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 24;
	Global_34036[iVar0 /*31*/] = 1061779107;
	Global_34036[iVar0 /*31*/].f_2 = { 484.56f, -1315.57f, 30.2f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_com_gar_door_01");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 6.5f;
	Global_34036[iVar0 /*31*/].f_9 = { 486.4057f, -1311.665f, 27.75163f };
	Global_34036[iVar0 /*31*/].f_12 = { 488.9124f, -1316.529f, 31.65202f };
	Global_34036[iVar0 /*31*/].f_15 = 8.5f;
	Global_34036[iVar0 /*31*/].f_16 = { 482.3187f, -1319.807f, 26.91848f };
	Global_34036[iVar0 /*31*/].f_19 = { 478.041f, -1311.511f, 31.95297f };
	Global_34036[iVar0 /*31*/].f_23 = 0.55f;
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 25;
	Global_34036[iVar0 /*31*/] = 1423193534;
	Global_34036[iVar0 /*31*/].f_2 = { 451.81f, -1994.17f, 22.14f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_facgate_01");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 10f;
	Global_34036[iVar0 /*31*/].f_9 = { 444.0669f, -1993.736f, 21.10992f };
	Global_34036[iVar0 /*31*/].f_12 = { 459.423f, -2010.026f, 26.19515f };
	Global_34036[iVar0 /*31*/].f_15 = 10f;
	Global_34036[iVar0 /*31*/].f_16 = { 452.2514f, -1987.255f, 21.18945f };
	Global_34036[iVar0 /*31*/].f_19 = { 466.8117f, -2002.878f, 25.8988f };
	Global_34036[iVar0 /*31*/].f_23 = 0.3f;
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::CLEAR_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
	iVar0 = 26;
	Global_34036[iVar0 /*31*/] = -1958174046;
	Global_34036[iVar0 /*31*/].f_2 = { 460.06f, -2003.11f, 22.14f };
	Global_34036[iVar0 /*31*/].f_5 = joaat("prop_facgate_01b");
	Global_34036[iVar0 /*31*/].f_6 = 324f;
	Global_34036[iVar0 /*31*/].f_7 = 9f;
	Global_34036[iVar0 /*31*/].f_8 = 10f;
	Global_34036[iVar0 /*31*/].f_9 = { 444.0669f, -1993.736f, 21.10992f };
	Global_34036[iVar0 /*31*/].f_12 = { 459.423f, -2010.026f, 26.19515f };
	Global_34036[iVar0 /*31*/].f_15 = 10f;
	Global_34036[iVar0 /*31*/].f_16 = { 452.2514f, -1987.255f, 21.18945f };
	Global_34036[iVar0 /*31*/].f_19 = { 466.8117f, -2002.878f, 25.8988f };
	Global_34036[iVar0 /*31*/].f_23 = 0.3f;
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 0);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 1);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 3);
	MISC::SET_BIT(&(Global_34036[iVar0 /*31*/].f_1), 7);
}


bool func_84()//Position - 0xD7F4
{
	if (GlobalFunc_4921())
	{
		return Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_425;
	}
	return Global_2422140.f_73.f_425;
}

void func_85(bool bParam0)//Position - 0xD81C
{
	func_86("MPINT_MISC_DOOR", joaat("prop_sc1_12_door"), -58.47f, -1530.51f, 34.54f, bParam0);
	func_86("MPINT_HIGHEND1_DOOR_L", joaat("prop_ss1_mpint_door_l"), -778.36f, 313.54f, 86.14f, bParam0);
	func_86("MPINT_HIGHEND1_DOOR_R", joaat("prop_ss1_mpint_door_r"), -776.2f, 313.54f, 86.14f, bParam0);
	func_86("MPINT_HIGHEND1_DOOR_GARAGE", joaat("prop_ss1_mpint_garage"), -796.08f, 313.78f, 86.68f, bParam0);
	func_86("MPINT_HIGHEND5_DOOR_L", joaat("prop_dt1_20_mp_door_l"), -263.46f, -970.52f, 31.61f, bParam0);
	func_86("MPINT_HIGHEND5_DOOR_R", joaat("prop_dt1_20_mp_door_r"), -260.66f, -969.21f, 31.61f, bParam0);
	func_86("MPINT_HIGHEND5_DOOR_GARAGE", joaat("prop_dt1_20_mp_gar"), -282.55f, -995.16f, 24.67f, bParam0);
	func_86("MPINT_HIGHEND7_DOOR_L", joaat("sm_14_mp_door_l"), -1444.28f, -545.01f, 34.98f, bParam0);
	func_86("MPINT_HIGHEND7_DOOR_R", joaat("sm_14_mp_door_r"), -1442.3f, -543.63f, 34.98f, bParam0);
	func_86("MPINT_HIGHEND7_DOOR_GARAGE", joaat("prop_sm_14_mp_gar"), -1455.81f, -503.98f, 32.29f, bParam0);
	func_86("MPINT_HIGHEND9_DOOR_L", joaat("prop_bh1_09_mp_l"), -914.06f, -453.65f, 39.81f, bParam0);
	func_86("MPINT_HIGHEND9_DOOR_R", joaat("prop_bh1_09_mp_r"), -912.91f, -455.89f, 39.81f, bParam0);
	func_86("MPINT_HIGHEND9_DOOR_GARAGE", joaat("prop_bh1_09_mp_gar"), -820.57f, -436.81f, 37.44f, bParam0);
	func_86("MPINT_HIGHEND12_DOOR_L", joaat("dt1_03_mp_door"), -47.84f, -588.77f, 38.36f, bParam0);
	func_86("MPINT_HIGHEND12_DOOR_GARAGE", joaat("prop_com_gar_door_01"), -33.79f, -621.62f, 36.11f, bParam0);
	func_86("MPINT_HIGHEND14_DOOR_GARAGE", joaat("prop_bh1_08_mp_gar"), -878.02f, -359.46f, 36.27f, bParam0);
	func_86("MPINT_HIGHEND16_DOOR_L", joaat("prop_ss1_mpint_door_l"), -615.8f, 38.37f, 44.04f, bParam0);
	func_86("MPINT_HIGHEND16_DOOR_R", joaat("prop_ss1_mpint_door_r"), -613.64f, 38.37f, 44.04f, bParam0);
	func_86("MPINT_HIGHEND16_DOOR_GARAGE", joaat("prop_ss1_mpint_garage"), -629.91f, 56.57f, 44.72f, bParam0);
	func_86("MPINT_LOWEND1_DOOR", joaat("p_cut_door_01"), -40.19f, -58.21f, 64.21f, bParam0);
	func_86("MPINT_LOWEND2_DOOR", joaat("p_cut_door_03"), -200.29f, 185.6f, 80.66f, bParam0);
	func_86("MPINT_LOWEND3_DOOR_L", joaat("prop_kt1_10_mpdoor_l"), -812.83f, -979.01f, 14.6f, bParam0);
	func_86("MPINT_LOWEND3_DOOR_R", joaat("prop_kt1_10_mpdoor_r"), -811.25f, -981.27f, 14.61f, bParam0);
	func_86("MPINT_LOWEND4_DOOR", joaat("kt1_11_mp_door"), -661.87f, -854.63f, 24.69f, bParam0);
	func_86("MPINT_LOWEND5_DOOR", joaat("prop_sm_10_mp_door"), -1533.58f, -327.59f, 48.09f, bParam0);
	func_86("MPINT_LOWEND6_DOOR_L", joaat("prop_sm1_11_doorr"), -1565.58f, -406.92f, 42.61f, bParam0);
	func_86("MPINT_LOWEND6_DOOR_R", joaat("prop_sm1_11_doorl"), -1564.01f, -405.04f, 42.61f, bParam0);
	func_86("MP_APARTMENT_DOOR_01", joaat("prop_sm1_11_doorr"), -1605.014f, -431.9617f, 40.6384f, bParam0);
	func_86("MPINT_LOWEND7_DOOR_GARAGE", joaat("prop_sm1_11_garaged"), -1605.26f, -447.18f, 38.58f, bParam0);
	func_86("MPINT_MIDEND1_DOOR_L", joaat("prop_bh1_44_door_01l"), 286.91f, -159.22f, 64.84f, bParam0);
	func_86("MPINT_MIDEND1_DOOR_R", joaat("prop_bh1_44_door_01r"), 285.94f, -161.88f, 64.84f, bParam0);
	func_86("MPINT_MIDEND2_DOOR", joaat("prop_bh1_44_door_01r"), 4.4f, 37.32f, 71.75f, bParam0);
	func_86("MPINT_MIDEND3_DOOR", joaat("prop_bh1_44_door_01r"), 8.74f, 81.31f, 78.65f, bParam0);
	func_86("MPINT_MIDEND4_DOOR_L", joaat("prop_sm1_11_doorl"), -510.42f, 108f, 64.02f, bParam0);
	func_86("MPINT_MIDEND4_DOOR_R", joaat("prop_sm1_11_doorr"), -512.84f, 107.66f, 64.02f, bParam0);
	func_86("MPINT_MIDEND5_DOOR", joaat("prop_ss1_05_mp_door"), -197.23f, 85.16f, 69.9f, bParam0);
	func_86("MPINT_MIDEND6_DOOR_L", joaat("prop_ss1_08_mp_door_l"), -627.34f, 170.87f, 61.29f, bParam0);
	func_86("MPINT_MIDEND6_DOOR_R", joaat("prop_ss1_08_mp_door_r"), -627.34f, 168.53f, 61.29f, bParam0);
	func_86("MPINT_MIDEND7_DOOR_L", joaat("vb_43_door_l_mp"), -969.36f, -1429.98f, 7.97f, bParam0);
	func_86("MPINT_MIDEND7_DOOR_R", joaat("vb_43_door_r_mp"), -968.6f, -1432.04f, 6.77f, bParam0);
	func_86("MPINT_MIDEND8_DOOR_L", joaat("prop_kt1_10_mpdoor_r"), -830.05f, -862.99f, 21.09f, bParam0);
	func_86("MPINT_MIDEND8_DOOR_R", joaat("prop_kt1_10_mpdoor_l"), -832.81f, -862.99f, 21.09f, bParam0);
	func_86("MPINT_MIDEND9_DOOR_L", joaat("prop_kt1_06_door_l"), -763.9f, -755.08f, 28.19f, bParam0);
	func_86("MPINT_MIDEND9_DOOR_R", joaat("prop_kt1_06_door_r"), -763.9f, -752.49f, 28.19f, bParam0);
}

void func_86(char* sParam0, int iParam1, struct<3> Param2, bool bParam5)//Position - 0xDD4C
{
	var uVar0;
	
	uVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam5)
	{
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar0))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iVar0, iParam1, Param2, 0, 0, 0);
		}
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 1, 0, 1);
	}
	else if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 0, 0, 1);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iVar0);
	}
}


void func_88()//Position - 0xDDAA
{
	if (GlobalFunc_4921())
	{
		if (((!Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_425 || MISC::IS_BIT_SET(iLocal_75, 0)) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || Global_30785)
		{
			if (!Global_2436008)
			{
				if (MISC::IS_BIT_SET(iLocal_75, 0) || Global_30785)
				{
					iLocal_191 = 1;
				}
				iLocal_93 = 0;
			}
		}
	}
	else if ((MISC::IS_BIT_SET(iLocal_75, 1) || ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !GlobalFunc_1117()) && !GlobalFunc_5777())) || Global_30785)
	{
		if (GlobalFunc_3() == 2)
		{
			if (MISC::IS_BIT_SET(iLocal_75, 2))
			{
				iLocal_93 = 0;
			}
		}
		else
		{
			iLocal_93 = 0;
		}
		if (MISC::IS_BIT_SET(iLocal_75, 1))
		{
			iLocal_191 = 1;
		}
	}
}






