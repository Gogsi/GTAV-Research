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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
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
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	float fLocal_60[3] = { 0f, 0f, 0f };
	var uLocal_64 = 16;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
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
	var uLocal_160 = 0;
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
	var uLocal_171 = 0;
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
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	struct<2> Local_229 = { 0, 0 } ;
	var uLocal_231 = 745926877;
	var uLocal_232 = 0;
	var uLocal_233 = 3;
	var uLocal_234 = 0;
	var uLocal_235 = -839953400;
	var uLocal_236 = 0;
	var uLocal_237 = -839953400;
	var uLocal_238 = 0;
	var uLocal_239 = -839953400;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251[2] = { 0, 0 };
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_57 = -1f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_112(ScriptParam_0);
	}
	while (true)
	{
		GlobalFunc_906();
		if (GlobalFunc_7741())
		{
			func_96();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			GlobalFunc_587();
			func_93();
			switch (func_92(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				case 0:
					if (func_91() > 0)
					{
						iLocal_251[NETWORK::PARTICIPANT_ID_TO_INT()] = 2;
					}
					break;
				
				case 2:
					func_50();
					if (func_91() == 3)
					{
						iLocal_251[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
					}
					break;
				
				case 3:
					func_96();
					break;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_91())
				{
					case 0:
						Local_229 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()//Position - 0x12A
{
	func_7();
	if (Local_229.f_1.f_2 == 5)
	{
		Local_229 = 3;
	}
	if (GlobalFunc_439(&(Local_229.f_1.f_19)))
	{
		if (GlobalFunc_5071(&(Local_229.f_1.f_19), 20000, 0))
		{
			Local_229 = 3;
		}
	}
	if (GlobalFunc_896())
	{
		Local_229 = 3;
	}
	if (bLocal_47)
	{
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			Local_229 = 3;
		}
	}
	else if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		Local_229 = 3;
	}
	if (GlobalFunc_355())
	{
		Local_229 = 3;
	}
}






void func_7()//Position - 0x25E
{
	switch (Local_229.f_1.f_2)
	{
		case 0:
			func_49(1);
			break;
		
		case 1:
			if (func_34())
			{
				if (func_23())
				{
					GlobalFunc_436(&(Local_229.f_1.f_17), 0, 0);
					func_49(2);
				}
			}
			break;
		
		case 2:
			func_14();
			func_12();
			if (!GlobalFunc_5239(Local_229.f_1))
			{
				if ((GlobalFunc_904(Local_229.f_1.f_3[0 /*2*/]) && GlobalFunc_904(Local_229.f_1.f_3[1 /*2*/])) && GlobalFunc_904(Local_229.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			else if (GlobalFunc_904(Local_229.f_1.f_3[0 /*2*/]))
			{
				if (GlobalFunc_904(Local_229.f_1.f_3[1 /*2*/]) && GlobalFunc_904(Local_229.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			else if (GlobalFunc_904(Local_229.f_1.f_3[1 /*2*/]) && GlobalFunc_904(Local_229.f_1.f_3[2 /*2*/]))
			{
				func_49(3);
			}
			else
			{
				if (GlobalFunc_439(&(Local_229.f_1.f_17)))
				{
					if (GlobalFunc_5071(&(Local_229.f_1.f_17), 120000, 0))
					{
						func_49(3);
					}
				}
				if (GlobalFunc_247(PLAYER::PLAYER_ID(), 0))
				{
					func_49(3);
				}
				if (bLocal_51)
				{
					func_49(3);
				}
			}
			break;
		
		case 3:
			func_14();
			if (!GlobalFunc_5239(Local_229.f_1))
			{
				if ((GlobalFunc_904(Local_229.f_1.f_3[0 /*2*/]) && GlobalFunc_904(Local_229.f_1.f_3[1 /*2*/])) && GlobalFunc_904(Local_229.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			else if (GlobalFunc_904(Local_229.f_1.f_3[0 /*2*/]))
			{
				if (GlobalFunc_904(Local_229.f_1.f_3[1 /*2*/]) && GlobalFunc_904(Local_229.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}





void func_12()//Position - 0x4CD
{
	if (Global_2422140.f_3291)
	{
		GlobalFunc_1270(1, 600000);
		bLocal_51 = true;
	}
	if (Global_2422140.f_3290 >= 250f)
	{
		GlobalFunc_1270(1, 600000);
		bLocal_51 = true;
	}
}


void func_14()//Position - 0x539
{
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (GlobalFunc_5239(Local_229.f_1))
	{
		iLocal_55++;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_229.f_1)))
	{
		GlobalFunc_909(&(Local_229.f_1));
		iLocal_55++;
	}
	if (GlobalFunc_904(Local_229.f_1.f_3[0 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_229.f_1.f_3[0 /*2*/]))
		{
			GlobalFunc_909(&(Local_229.f_1.f_3[0 /*2*/]));
			iLocal_56++;
		}
	}
	else
	{
		iLocal_56++;
	}
	if (GlobalFunc_904(Local_229.f_1.f_3[1 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_229.f_1.f_3[1 /*2*/]))
		{
			GlobalFunc_909(&(Local_229.f_1.f_3[1 /*2*/]));
			iLocal_56++;
		}
	}
	else
	{
		iLocal_56++;
	}
	if (GlobalFunc_904(Local_229.f_1.f_3[2 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_229.f_1.f_3[2 /*2*/]))
		{
			GlobalFunc_909(&(Local_229.f_1.f_3[2 /*2*/]));
			iLocal_56++;
		}
	}
	else
	{
		iLocal_56++;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false) != iLocal_55)
	{
		if (GlobalFunc_6842(iLocal_55, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_55);
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) != iLocal_56)
	{
		if (GlobalFunc_6841(iLocal_56, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_56);
		}
	}
}









int func_23()//Position - 0x8CE
{
	if (GlobalFunc_356(Local_229.f_1.f_1))
	{
		if (GlobalFunc_356(Local_229.f_1.f_3[0 /*2*/].f_1))
		{
			if (!GlobalFunc_5239(Local_229.f_1))
			{
				if (func_32(&(Local_229.f_1), Local_229.f_1.f_1, Local_229.f_1.f_10, 0f, 1, 1, 1, 0, 0, 1))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_229.f_1));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_229.f_1), 1, 1);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_229.f_1));
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_229.f_1), 1);
					func_31(NETWORK::NET_TO_VEH(Local_229.f_1), 4);
					Global_2422140.f_3285 = NETWORK::NET_TO_VEH(Local_229.f_1);
					if (GlobalFunc_900(&(Local_229.f_1.f_3[0 /*2*/]), Local_229.f_1, 4, Local_229.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_25(Local_229.f_1.f_3[0 /*2*/]);
						func_24(NETWORK::NET_TO_PED(Local_229.f_1.f_3[0 /*2*/]), 0, 0, 1);
						NETWORK::_0x0EDE326D47CD0F3E(NETWORK::NET_TO_PED(Local_229.f_1.f_3[0 /*2*/]), PLAYER::PLAYER_ID());
						func_31(NETWORK::NET_TO_PED(Local_229.f_1.f_3[0 /*2*/]), 4);
						Global_2422140.f_3286[0] = NETWORK::NET_TO_PED(Local_229.f_1.f_3[0 /*2*/]);
						if (GlobalFunc_900(&(Local_229.f_1.f_3[1 /*2*/]), Local_229.f_1, 4, Local_229.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_25(Local_229.f_1.f_3[1 /*2*/]);
							func_24(NETWORK::NET_TO_PED(Local_229.f_1.f_3[1 /*2*/]), 1, 1, 1);
							NETWORK::_0x0EDE326D47CD0F3E(NETWORK::NET_TO_PED(Local_229.f_1.f_3[1 /*2*/]), PLAYER::PLAYER_ID());
							func_31(NETWORK::NET_TO_PED(Local_229.f_1.f_3[1 /*2*/]), 4);
							Global_2422140.f_3286[1] = NETWORK::NET_TO_PED(Local_229.f_1.f_3[1 /*2*/]);
							if (GlobalFunc_900(&(Local_229.f_1.f_3[2 /*2*/]), Local_229.f_1, 4, Local_229.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_25(Local_229.f_1.f_3[2 /*2*/]);
								func_24(NETWORK::NET_TO_PED(Local_229.f_1.f_3[2 /*2*/]), 2, 1, 1);
								NETWORK::_0x0EDE326D47CD0F3E(NETWORK::NET_TO_PED(Local_229.f_1.f_3[2 /*2*/]), PLAYER::PLAYER_ID());
								func_31(NETWORK::NET_TO_PED(Local_229.f_1.f_3[2 /*2*/]), 4);
								Global_2422140.f_3286[2] = NETWORK::NET_TO_PED(Local_229.f_1.f_3[2 /*2*/]);
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_24(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xB01
{
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0, 5, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0, 3, 0);
	PED::SET_PED_COMBAT_MOVEMENT(uParam0, 2);
	PED::SET_PED_COMBAT_ABILITY(uParam0, 1);
	PED::SET_PED_COMBAT_RANGE(uParam0, 2);
	PED::SET_PED_TARGET_LOSS_RESPONSE(uParam0, 1);
	PED::SET_PED_HIGHLY_PERCEPTIVE(uParam0, 1);
	PED::SET_PED_CAN_BE_TARGETTED(uParam0, 1);
	PED::SET_PED_SEEING_RANGE(uParam0, (fLocal_60[iParam1] + 100f));
	PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(uParam0, 400f);
	PED::SET_COMBAT_FLOAT(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			ENTITY::SET_ENTITY_MAX_HEALTH(uParam0, 250);
			ENTITY::SET_ENTITY_HEALTH(uParam0, 250);
			PED::SET_PED_ARMOUR(uParam0, 250);
		}
	}
	else
	{
		ENTITY::SET_ENTITY_INVINCIBLE(uParam0, 1);
	}
}

void func_25(var uParam0)//Position - 0xBA9
{
	var uVar0;
	
	if (!GlobalFunc_6722(PLAYER::PLAYER_ID(), 0) && !GlobalFunc_895())
	{
		uVar0 = Global_1574060[5];
	}
	else
	{
		uVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(uParam0), uVar0);
}






void func_31(var uParam0, int iParam1)//Position - 0xCE2
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(uParam0, "AttributeDamage"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(uParam0, "AttributeDamage");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(uParam0, "AttributeDamage", iVar0);
}

int func_32(var uParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)//Position - 0xD15
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = VEHICLE::CREATE_VEHICLE(uParam1, Param2, fParam5, iParam7, iParam6);
	*uParam0 = NETWORK::VEH_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar0, iParam10);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar0))
		{
			if (bParam8)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
			else
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
			}
		}
		VEHICLE::SET_VEHICLE_IS_STOLEN(uVar0, iParam9);
		return 1;
	}
	return 0;
}


int func_34()//Position - 0xDB6
{
	struct<3> Var0;
	
	if (GlobalFunc_105(Local_229.f_1.f_10))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { GlobalFunc_1271(GlobalFunc_271(PLAYER::PLAYER_ID()), 0f, (-200f * SYSTEM::SIN((SYSTEM::TO_FLOAT(Local_229.f_1.f_15) * 30f))), (200f * SYSTEM::COS((SYSTEM::TO_FLOAT(Local_229.f_1.f_15) * 30f))), 0f) };
				Var0.f_2 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_POSITION(Var0.x, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (GlobalFunc_8397(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0))
				{
					Local_229.f_1.f_10 = { Var0 };
					return 1;
				}
				else
				{
					Local_229.f_1.f_15++;
					if (Local_229.f_1.f_15 >= 12)
					{
						Local_229.f_1.f_15 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}















void func_49(int iParam0)//Position - 0x14A0
{
	Local_229.f_1.f_2 = iParam0;
}

void func_50()//Position - 0x14B0
{
	func_89();
	func_51();
}

void func_51()//Position - 0x14C0
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	switch (Local_229.f_1.f_2)
	{
		case 0:
			func_88();
			break;
		
		case 1:
			func_88();
			break;
		
		case 2:
			if (GlobalFunc_5239(Local_229.f_1))
			{
				uVar1 = NETWORK::NET_TO_VEH(Local_229.f_1);
				if (!HUD::DOES_BLIP_EXIST(uLocal_46))
				{
					uLocal_46 = HUD::ADD_BLIP_FOR_ENTITY(uVar1);
					HUD::SET_BLIP_SPRITE(uLocal_46, 353);
					HUD::SHOW_HEIGHT_ON_BLIP(uLocal_46, 0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_46, "MPCT_MERRY3");
					if (GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 1))
					{
						GlobalFunc_5327(&uLocal_46, GlobalFunc_9051(PLAYER::PLAYER_ID(), -2, 0, 0));
					}
				}
				if (func_71(Local_229.f_1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_229.f_1))
					{
						if (func_70())
						{
							if (!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(uVar1))
							{
								VEHICLE::SET_VEHICLE_SEARCHLIGHT(uVar1, 1, 0);
							}
						}
						else if (VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(uVar1))
						{
							VEHICLE::SET_VEHICLE_SEARCHLIGHT(uVar1, 0, 0);
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_229.f_1.f_3[0 /*2*/]))
				{
					uVar0 = NETWORK::NET_TO_PED(Local_229.f_1.f_3[0 /*2*/]);
					if (!PED::IS_PED_INJURED(uVar0))
					{
						iVar2 = TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(uVar1);
						if (iVar2 != 23 || fLocal_60[0] != fLocal_57)
						{
							if (func_71(Local_229.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_229.f_1.f_3[0 /*2*/]))
								{
									fLocal_60[0] = fLocal_57;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 1);
									func_24(uVar0, 0, 0, 0);
									VEHICLE::SET_HELI_BLADES_FULL_SPEED(uVar1);
									VEHICLE::SET_VEHICLE_ENGINE_ON(uVar1, 1, 1);
									if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
									{
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
										{
											TASK::TASK_HELI_MISSION(uVar0, uVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 23, 20f, 40f, -1f, SYSTEM::CEIL(fLocal_60[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
						if (!iLocal_49)
						{
							if (SYSTEM::VDIST(GlobalFunc_271(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_229.f_1), 1)) <= 50f)
							{
								GlobalFunc_10645(&uLocal_64, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_49 = 1;
							}
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_229.f_1.f_3[1 /*2*/]))
				{
					uVar0 = NETWORK::NET_TO_PED(Local_229.f_1.f_3[1 /*2*/]);
					if (!PED::IS_PED_INJURED(uVar0))
					{
						if (!PED::IS_PED_IN_COMBAT(uVar0, 0) || fLocal_60[1] != fLocal_57)
						{
							if (func_71(Local_229.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_229.f_1.f_3[1 /*2*/]))
								{
									fLocal_60[1] = fLocal_57;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 0);
									func_24(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_229.f_1.f_3[2 /*2*/]))
				{
					uVar0 = NETWORK::NET_TO_PED(Local_229.f_1.f_3[2 /*2*/]);
					if (!PED::IS_PED_INJURED(uVar0))
					{
						if (!PED::IS_PED_IN_COMBAT(uVar0, 0) || fLocal_60[2] != fLocal_57)
						{
							if (func_71(Local_229.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_229.f_1.f_3[2 /*2*/]))
								{
									fLocal_60[2] = fLocal_57;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 0);
									func_24(uVar0, 2, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!GlobalFunc_5239(Local_229.f_1) || GlobalFunc_904(Local_229.f_1.f_3[0 /*2*/]))
			{
				func_52();
			}
			break;
		
		case 3:
			func_88();
			if (!GlobalFunc_439(&(Local_229.f_1.f_19)))
			{
				GlobalFunc_436(&(Local_229.f_1.f_19), 0, 0);
			}
			if (GlobalFunc_5239(Local_229.f_1))
			{
				uVar1 = NETWORK::NET_TO_VEH(Local_229.f_1);
				if (!GlobalFunc_904(Local_229.f_1.f_3[0 /*2*/]))
				{
					uVar0 = NETWORK::NET_TO_PED(Local_229.f_1.f_3[0 /*2*/]);
					if (iLocal_52 == 0)
					{
						if (func_71(Local_229.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_229.f_1.f_3[0 /*2*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 0);
								TASK::CLEAR_PED_TASKS(uVar0);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uVar0, Global_1574053);
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_HELI_MISSION(uVar0, uVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										PED::SET_PED_KEEP_TASK(uVar0, 1);
										iLocal_52 = 1;
									}
								}
							}
						}
					}
				}
				if (!GlobalFunc_904(Local_229.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_53 == 0)
					{
						uVar0 = NETWORK::NET_TO_PED(Local_229.f_1.f_3[1 /*2*/]);
						if (func_71(Local_229.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_229.f_1.f_3[1 /*2*/]))
							{
								TASK::CLEAR_PED_TASKS(uVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 1);
								PED::SET_PED_KEEP_TASK(uVar0, 1);
								iLocal_53 = 1;
							}
						}
					}
					if (!iLocal_50)
					{
						if (SYSTEM::VDIST(GlobalFunc_271(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_229.f_1), 1)) <= 50f)
						{
							GlobalFunc_10645(&uLocal_64, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
							iLocal_50 = 1;
						}
					}
				}
				if (!GlobalFunc_904(Local_229.f_1.f_3[2 /*2*/]))
				{
					if (iLocal_54 == 0)
					{
						uVar0 = NETWORK::NET_TO_PED(Local_229.f_1.f_3[2 /*2*/]);
						if (func_71(Local_229.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_229.f_1.f_3[2 /*2*/]))
							{
								TASK::CLEAR_PED_TASKS(uVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar0, 1);
								PED::SET_PED_KEEP_TASK(uVar0, 1);
								iLocal_54 = 1;
							}
						}
					}
				}
			}
			if (!GlobalFunc_5239(Local_229.f_1) || GlobalFunc_904(Local_229.f_1.f_3[0 /*2*/]))
			{
				func_52();
			}
			break;
		
		case 5:
			func_88();
			break;
	}
}

void func_52()//Position - 0x19B7
{
	var uVar0;
	
	if (!GlobalFunc_904(Local_229.f_1.f_3[0 /*2*/]))
	{
		if (func_71(Local_229.f_1.f_3[0 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_229.f_1.f_3[0 /*2*/]))
			{
				uVar0 = NETWORK::NET_TO_PED(Local_229.f_1.f_3[0 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(uVar0, 0);
			}
		}
	}
	if (!GlobalFunc_904(Local_229.f_1.f_3[1 /*2*/]))
	{
		if (func_71(Local_229.f_1.f_3[1 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_229.f_1.f_3[1 /*2*/]))
			{
				uVar0 = NETWORK::NET_TO_PED(Local_229.f_1.f_3[1 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(uVar0, 0);
			}
		}
	}
	if (!GlobalFunc_904(Local_229.f_1.f_3[2 /*2*/]))
	{
		if (func_71(Local_229.f_1.f_3[2 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_229.f_1.f_3[2 /*2*/]))
			{
				uVar0 = NETWORK::NET_TO_PED(Local_229.f_1.f_3[2 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(uVar0, 0);
			}
		}
	}
}


















int func_70()//Position - 0x22AB
{
	if (CLOCK::GET_CLOCK_HOURS() >= 22)
	{
		return 1;
	}
	if (CLOCK::GET_CLOCK_HOURS() <= 6 && CLOCK::GET_CLOCK_HOURS() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_71(var uParam0)//Position - 0x22D9
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(uParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

















void func_88()//Position - 0x2AAA
{
	if (HUD::DOES_BLIP_EXIST(uLocal_46))
	{
		HUD::REMOVE_BLIP(&uLocal_46);
	}
}

void func_89()//Position - 0x2AC1
{
	if (!iLocal_48)
	{
		if (!GlobalFunc_904(Local_229.f_1.f_3[0 /*2*/]))
		{
			GlobalFunc_878(&uLocal_64, 3, NETWORK::NET_TO_PED(Local_229.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_48 = 1;
		}
	}
}


int func_91()//Position - 0x2B97
{
	return Local_229;
}

int func_92(int iParam0)//Position - 0x2BA1
{
	return iLocal_251[iParam0];
}

void func_93()//Position - 0x2BAF
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_57 == -1f)
	{
		bVar0 = true;
	}
	else if (!GlobalFunc_439(&uLocal_58))
	{
		GlobalFunc_436(&uLocal_58, 0, 0);
	}
	else if (GlobalFunc_5071(&uLocal_58, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { GlobalFunc_271(PLAYER::PLAYER_ID()) };
		fLocal_57 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_POSITION(Var1.x, Var1.f_1);
		if (fLocal_57 < 85f)
		{
			fLocal_57 = 85f;
		}
		GlobalFunc_434(&uLocal_58);
	}
}



void func_96()//Position - 0x2C33
{
	var uVar0;
	var uVar1;
	
	Global_2422140.f_3285 = uVar0;
	Global_2422140.f_3286[0] = uVar1;
	Global_2422140.f_3286[1] = uVar1;
	Global_2422140.f_3286[2] = uVar1;
	Global_2422140.f_3290 = 0f;
	Global_2422140.f_3291 = 0;
	GlobalFunc_905(GlobalFunc_7658(1, 1), 10, GlobalFunc_314());
	GlobalFunc_491();
}
















void func_112(struct<20> Param0)//Position - 0x2F9B
{
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_229, 22);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_251, 3);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!GlobalFunc_5091())
	{
		func_96();
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		bLocal_47 = true;
	}
	GlobalFunc_5237(62, 1);
	iLocal_251[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
}








