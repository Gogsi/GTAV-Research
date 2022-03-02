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
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	var uLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<34> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	struct<3> Local_100 = { 0, 0, 1 } ;
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
	struct<4> Local_115[32];
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	sLocal_17 = "NULL";
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
	Local_57 = { ScriptParam_0.f_1[0 /*3*/] };
	func_588();
	if (!func_585())
	{
		func_583();
	}
	while (true)
	{
		GlobalFunc_906();
		if (GlobalFunc_7680())
		{
			func_583();
		}
		if (func_573())
		{
			func_583();
		}
		func_572();
		GlobalFunc_481(&uLocal_94, 0, 0);
		switch (func_570(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_569() >= 2)
				{
					func_568(1);
				}
				break;
			
			case 1:
				func_566();
				func_555();
				func_15();
				break;
			
			case 2:
				func_583();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_569())
			{
				case 0:
					func_14(2);
					break;
				
				case 2:
					func_3();
					func_1();
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

void func_1()//Position - 0x141
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2446554.f_4337)
	{
		if (GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (Local_100.f_2[iVar0 /*12*/].f_3)
			{
				if (!Local_100.f_2[iVar0 /*12*/].f_4)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(Local_60.f_6) && (Local_60.f_7 == 0 || (Local_60.f_7 != 0 && NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(Local_60.f_7))))
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_60.f_6, 1, 1, 0);
						if (Local_60.f_7 != 0)
						{
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_60.f_7, 1, 1, 0);
						}
						Local_100.f_2[iVar0 /*12*/].f_4 = 1;
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(Local_60.f_6);
						if (Local_60.f_7 != 0)
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(Local_60.f_7);
						}
					}
				}
			}
			else if (Local_100.f_2[iVar0 /*12*/].f_4)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(Local_60.f_6) && (Local_60.f_7 == 0 || (Local_60.f_7 != 0 && NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(Local_60.f_7))))
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_60.f_6, 0, 1, 0);
					if (Local_60.f_7 != 0)
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_60.f_7, 0, 1, 0);
					}
					Local_100.f_2[iVar0 /*12*/].f_4 = 0;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(Local_60.f_6);
					if (Local_60.f_7 != 0)
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(Local_60.f_7);
					}
				}
			}
		}
	}
}


void func_3()//Position - 0x2BC
{
	int iVar0;
	
	if (GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 1))
	{
		iVar0 = 0;
		func_13(iVar0);
		if (Local_100.f_2[iVar0 /*12*/].f_6)
		{
			if (func_8(&(Local_100.f_2[iVar0 /*12*/].f_10), Local_60))
			{
				GlobalFunc_434(&(Local_100.f_2[iVar0 /*12*/].f_10));
				func_6(Local_60.f_1);
			}
		}
		else
		{
			GlobalFunc_434(&(Local_100.f_2[iVar0 /*12*/].f_10));
		}
		if (!func_5(&(Local_100.f_2[iVar0 /*12*/]), Local_60))
		{
			GlobalFunc_434(&(Local_100.f_2[iVar0 /*12*/].f_8));
			if (Local_100.f_2[iVar0 /*12*/].f_1 == 0)
			{
				if (Local_100.f_2[iVar0 /*12*/] != 0)
				{
					if (Local_100.f_2[iVar0 /*12*/].f_3)
					{
						Local_100.f_2[iVar0 /*12*/].f_3 = 0;
					}
				}
				else if (func_4(Local_60))
				{
					if (!Local_100.f_2[iVar0 /*12*/].f_3)
					{
						Local_100.f_2[iVar0 /*12*/].f_3 = 1;
					}
				}
			}
			else if (Local_100.f_2[iVar0 /*12*/].f_3)
			{
				Local_100.f_2[iVar0 /*12*/].f_3 = 0;
			}
		}
		else if (!Local_100.f_2[iVar0 /*12*/].f_3)
		{
			if (func_4(Local_60))
			{
				Local_100.f_2[iVar0 /*12*/].f_3 = 1;
			}
		}
	}
}

int func_4(struct<8> Param0, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)//Position - 0x3EA
{
	if (Param0.f_7 != 0)
	{
		if (!OBJECT::IS_GARAGE_EMPTY(Param0.f_1, 1, 2) || !OBJECT::IS_GARAGE_EMPTY(Param0.f_1, 1, 3))
		{
			return 0;
		}
	}
	else if (!OBJECT::IS_GARAGE_EMPTY(Param0.f_1, 1, 2))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)//Position - 0x433
{
	if (uParam0->f_5 || *uParam0 != 0)
	{
		if (uParam0->f_1 == 0)
		{
			if (OBJECT::IS_GARAGE_EMPTY(Param1.f_1, 1, -1))
			{
				if (uParam0->f_5)
				{
					uParam0->f_5 = 0;
				}
				if (uParam0->f_6)
				{
					uParam0->f_6 = 0;
				}
				return 0;
			}
			else
			{
				uParam0->f_5 = 1;
				if (OBJECT::IS_ANY_ENTITY_ENTIRELY_INSIDE_GARAGE(Param1.f_1, 1, 1, 0, -1) && OBJECT::ARE_ENTITIES_ENTIRELY_INSIDE_GARAGE(Param1.f_1, 0, 1, 0, -1))
				{
					uParam0->f_6 = 1;
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (uParam0->f_5)
	{
		uParam0->f_5 = 0;
	}
	if (uParam0->f_6)
	{
		uParam0->f_6 = 0;
	}
	return 0;
}

void func_6(var uParam0)//Position - 0x4CF
{
	OBJECT::CLEAR_OBJECTS_INSIDE_GARAGE(uParam0, 1, 1, 0, 1);
}


int func_8(var uParam0, struct<8> Param1, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)//Position - 0x4EE
{
	int iVar0;
	
	iVar0 = 10000;
	if (!func_12(Param1.f_2))
	{
		if (!GlobalFunc_439(uParam0))
		{
			GlobalFunc_436(uParam0, 0, 0);
		}
		if ((OBJECT::IS_DOOR_CLOSED(Param1.f_6) && (Param1.f_7 != 0 && OBJECT::IS_DOOR_CLOSED(Param1.f_7))) || (GlobalFunc_439(uParam0) && GlobalFunc_5071(uParam0, iVar0, 0)))
		{
			return 1;
		}
	}
	return 0;
}




bool func_12(int iParam0)//Position - 0x60A
{
	return !Global_2446554.f_4338[iParam0 /*12*/].f_3;
}

void func_13(int iParam0)//Position - 0x620
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		uVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar3))
		{
			if (MISC::IS_BIT_SET(Local_115[iVar0 /*4*/].f_2, iParam0))
			{
				MISC::SET_BIT(&(Local_100.f_2[iParam0 /*12*/]), iVar0);
				bVar2 = true;
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_100.f_2[iParam0 /*12*/]), iVar0);
			}
			if (MISC::IS_BIT_SET(Local_115[iVar0 /*4*/].f_3, iParam0))
			{
				MISC::SET_BIT(&(Local_100.f_2[iParam0 /*12*/].f_1), iVar0);
				bVar1 = true;
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_100.f_2[iParam0 /*12*/].f_1), iVar0);
			}
		}
		iVar0++;
	}
	if (!bVar2)
	{
		Local_100.f_2[iParam0 /*12*/] = 0;
	}
	if (!bVar1)
	{
		Local_100.f_2[iParam0 /*12*/].f_1 = 0;
	}
}

void func_14(int iParam0)//Position - 0x6D8
{
	Local_100.x = iParam0;
}

void func_15()//Position - 0x6E4
{
	struct<3> Var0;
	
	if (!Global_2446554.f_4353)
	{
		if ((GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !Global_1312418.f_6)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (Global_2446554.f_4334 == 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_60.f_3, 1) <= 20f)
				{
					if (func_551(PLAYER::PLAYER_PED_ID(), Local_60.f_1, 1, &uLocal_96, 0, 500, 1, 0))
					{
						if (!func_12(Local_60.f_2) || GlobalFunc_5071(&(Global_2446554.f_4356), 7000, 0))
						{
							MISC::SET_BIT(&(Global_2446554.f_4334), 0);
							return;
						}
					}
					else
					{
						GlobalFunc_434(&(Global_2446554.f_4356));
					}
				}
			}
			else if (MISC::IS_BIT_SET(Global_2446554.f_4334, 0))
			{
				if (func_23())
				{
					MISC::CLEAR_BIT(&(Global_2446554.f_4334), 0);
				}
			}
		}
		else if (Global_2446554.f_4355 != 0)
		{
			func_16();
		}
	}
	else if (Global_2446554.f_4355 != 0)
	{
		func_16();
	}
}

void func_16()//Position - 0x7ED
{
	if (Global_2446554.f_4355 != 0)
	{
		if (GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 1))
		{
			GlobalFunc_6939(PLAYER::PLAYER_ID(), 1, 0, 1);
		}
	}
	Global_2446554.f_4358 = 0;
	Global_2446554.f_4355 = 0;
	Global_2446554.f_4359 = 0;
	Global_2446554.f_4360 = 0;
	Global_2446554.f_4361 = 0;
}







int func_23()//Position - 0xC7D
{
	if (Global_2446554.f_4355 > 0)
	{
		if (Global_2446554.f_4362)
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			func_550();
		}
	}
	switch (Global_2446554.f_4355)
	{
		case 0:
			if (GlobalFunc_5417())
			{
				if (!Global_67058)
				{
					GlobalFunc_6939(PLAYER::PLAYER_ID(), 0, 0, 1);
					Global_2446554.f_4359 = 0;
					Global_2446554.f_4360 = 0;
					Global_2446554.f_4355 = 1;
					GlobalFunc_481(&(Global_2446554.f_4356), 0, 0);
				}
			}
			break;
		
		case 1:
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Local_60.f_6) <= 0.1f)
			{
				Global_2446554.f_4355 = 2;
				GlobalFunc_481(&(Global_2446554.f_4356), 0, 0);
			}
			else if (GlobalFunc_5071(&(Global_2446554.f_4356), 3000, 0))
			{
				Global_2446554.f_4355 = 2;
				GlobalFunc_481(&(Global_2446554.f_4356), 0, 0);
			}
			break;
		
		case 2:
			if (!Global_2446554.f_4361)
			{
				if (GlobalFunc_1568(&uLocal_94, &(Global_2446554.f_4356)) >= 500)
				{
					CAM::DO_SCREEN_FADE_OUT(1500);
					Global_2446554.f_4361 = 1;
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (!Global_2446554.f_4360)
				{
					GlobalFunc_6939(PLAYER::PLAYER_ID(), 0, 8192, 1);
					Global_2446554.f_4360 = 1;
				}
			}
			if (!Global_2446554.f_4359)
			{
				if (GlobalFunc_1568(&uLocal_94, &(Global_2446554.f_4356)) >= 3000)
				{
					if (!Global_2446554.f_4359)
					{
						Global_2446554.f_4359 = 1;
						GlobalFunc_434(&(Global_2446554.f_4356));
					}
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT() || Global_2446554.f_4359)
			{
				if (!Global_2446554.f_4360)
				{
					GlobalFunc_6939(PLAYER::PLAYER_ID(), 0, 8192, 1);
					Global_2446554.f_4360 = 1;
				}
				if (!func_27(9, 0, 0, 0, 0, 0, 0, 0, 1, 3000, 1, 1))
				{
					return 0;
				}
				Global_2446554.f_4355 = 3;
			}
			break;
		
		case 3:
			if (Global_2446554.f_4359)
			{
				if (CAM::DOES_CAM_EXIST(Local_60.f_9))
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::DESTROY_CAM(Local_60.f_9, 0);
					GlobalFunc_5321();
					GlobalFunc_1096(12, 0, -1);
					GlobalFunc_1097(1);
					CAM::SET_WIDESCREEN_BORDERS(0, -1);
					HUD::DISPLAY_RADAR(1);
					HUD::DISPLAY_HUD(1);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				CAM::DO_SCREEN_FADE_IN(1000);
				func_16();
				return 1;
			}
			else if (GlobalFunc_1568(&uLocal_94, &(Global_2446554.f_4356)) >= 3000)
			{
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				func_16();
				return 1;
			}
			break;
	}
	return 0;
}




int func_27(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0xFA1
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	GlobalFunc_187();
	if (GlobalFunc_430(PLAYER::PLAYER_ID(), 1))
	{
		if (((bParam4 && GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_219 == 1)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, 1);
		if (!Global_2404548.f_538 == iParam0)
		{
			if (!Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 == 0)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_539) < GlobalFunc_429())
				{
					return 0;
				}
				Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 0;
			}
		}
		if (Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 == 0)
		{
			Global_2404548.f_538 = iParam0;
			Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 2;
			if (bParam2)
			{
				if (!GlobalFunc_8349())
				{
					bParam2 = false;
				}
			}
			Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 2;
			Global_2404548.f_1204 = 0;
			Global_2404548.f_1205 = 0;
			Global_2404548.f_1203 = 0;
		}
		if (Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2404548.f_538 == 11)
			{
				Global_2404548.f_541 = { Global_2408512 };
				Global_2404548.f_544 = Global_2408512.f_5;
				Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 3;
			}
			else if (func_433(&(Global_2404548.f_541), &(Global_2404548.f_544), iParam0, bVar3, iParam3, iParam5, iParam6, iParam8))
			{
				Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 3;
			}
		}
		if (Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						func_428(&iVar2);
					}
					else
					{
						iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						func_427(&iVar2);
					}
					if (GlobalFunc_8349())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) == Global_2404548.f_37.f_43)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								if (iVar4 == Global_2404548.f_37.f_118)
								{
									GlobalFunc_5043();
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 4;
					}
					else
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
						{
							func_419(iVar2);
							GlobalFunc_6765(1);
							Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 6;
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
						}
					}
				}
				else
				{
					GlobalFunc_6765(1);
					Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 6;
				}
			}
		}
		if (Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 == 4)
		{
			if (GlobalFunc_9662())
			{
				if (func_232(Global_2404548.f_541, Global_2404548.f_541.f_1, GlobalFunc_6764(Global_2404548.f_37.f_43), Global_2404548.f_544, 0))
				{
					Global_2404548.f_540 = NETWORK::GET_NETWORK_TIME();
					Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 5;
				}
			}
		}
		if (Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 == 5)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 6;
				if (Global_2404548.f_37.f_120)
				{
					Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_223 = 1;
				}
				else
				{
					Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_223 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_540) > 5000)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 4;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) == 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2404548.f_37.f_118) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2404548.f_37.f_118, 0))
				{
					func_54(PLAYER::PLAYER_PED_ID(), Global_2404548.f_37.f_118, -1);
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 4;
				}
			}
		}
		if (Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 == 6)
		{
			Global_2404548.f_539 = NETWORK::GET_NETWORK_TIME();
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (GlobalFunc_6935(Global_2404548.f_541, Global_2404548.f_544, bVar1, bParam1, 0, 0, 1, bParam4, 1, 1))
			{
				GlobalFunc_6765(0);
				if (Global_2404548.f_1368)
				{
					GlobalFunc_8438();
					Global_2404548.f_1368 = 0;
				}
				Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 10;
			}
		}
		if (Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 == 9)
		{
			if (SYSTEM::VDIST(Global_2408512, Global_2404548.f_541) > 0.1f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar2)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Global_2404548.f_541, Global_2404548.f_541.f_1, Global_2404548.f_541.f_2, &fVar0);
						if (fVar0 == 0f || (Global_2404548.f_541.f_2 - fVar0) > 1.5f)
						{
							if (SYSTEM::VDIST(Global_2408512, Global_2404548.f_541) > 15f)
							{
								Global_2404548.f_541 = { Global_2408512 };
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2404548.f_541, Global_2404548.f_541.f_1, (fVar0 + GlobalFunc_276(ENTITY::GET_ENTITY_MODEL(iVar2))), 1, 0, 0, 1);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2);
								}
								Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 10;
							}
							else
							{
								Global_2404548.f_541.f_2 = (Global_2404548.f_541.f_2 + 1f);
							}
						}
						else
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2404548.f_541, Global_2404548.f_541.f_1, (fVar0 + GlobalFunc_276(ENTITY::GET_ENTITY_MODEL(iVar2))), 1, 0, 0, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2);
							}
							Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 10;
						}
					}
					else
					{
						Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 10;
					}
				}
				else
				{
					Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 10;
				}
			}
			else
			{
				Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 10;
			}
		}
		if (Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 == 10)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2404548.f_37.f_118))
			{
				ENTITY::SET_ENTITY_VISIBLE(Global_2404548.f_37.f_118, true);
			}
			if (bParam2 || bParam7)
			{
				GlobalFunc_6723(iParam9, 0);
			}
			GlobalFunc_5000(GlobalFunc_271(PLAYER::PLAYER_ID()), 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2404548.f_37.f_118))
			{
				GlobalFunc_5043();
			}
			GlobalFunc_269();
			GlobalFunc_5410(0, 0);
			if (bParam10)
			{
				GlobalFunc_267();
			}
			GlobalFunc_266();
			GlobalFunc_265();
			return 1;
		}
	}
	else if (!Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_427(&(Global_2404548.f_37.f_118));
		GlobalFunc_265();
	}
	Global_2404548.f_539 = NETWORK::GET_NETWORK_TIME();
	return 0;
}



























void func_54(int iParam0, int iParam1, int iParam2)//Position - 0x2577
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!GlobalFunc_312(iParam0, uParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 0) };
		if (!SYSTEM::VDIST(Var0, Var3) < 5f || !iParam2 == -1)
		{
			Var3.f_2 = (Var3.f_2 + -4f);
			ENTITY::SET_ENTITY_COORDS(iParam0, Var3, 0, 0, 0, 1);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
		if (Global_1573687)
		{
			if (GlobalFunc_311(ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				func_55(0);
			}
		}
	}
}

void func_55(bool bParam0)//Position - 0x262B
{
	struct<14> Var0;
	int iVar14;
	
	if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		if ((Global_2404548.f_1381 == -99 || Global_2404548.f_1381 == 0) || !GlobalFunc_6742(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2404548.f_1381))
		{
			if (!bParam0)
			{
				iVar14 = GlobalFunc_6671(576, -1, 0);
			}
		}
		else
		{
			iVar14 = Global_2404548.f_1381;
		}
		Var0 = { GlobalFunc_10837(joaat("mp_m_freemode_01"), 14, iVar14) };
		GlobalFunc_310(PLAYER::PLAYER_PED_ID(), 14, iVar14);
		func_56(PLAYER::PLAYER_PED_ID(), 14, iVar14, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_56(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x26E0
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
		Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
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
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 10, 0) };
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
						GlobalFunc_10920(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, uVar15[iVar0]) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
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
								GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, func_169(iParam0, iVar0, -1)) };
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
			func_164(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10920(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_162(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
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
			iVar69 = GlobalFunc_6740(iParam0, 1);
			iVar3 = func_162(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_162(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
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
						iVar73 = func_162(iParam0, iVar5, 11, iVar70, 3, 0);
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
							func_56(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 8, iVar71) };
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
										Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar82) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10622(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_164(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, func_169(iParam0, 8, -1), iParam2);
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
				func_115(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_164(iParam0, iParam1, iParam2, iParam6, 0);
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
						iVar3 = func_162(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
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
					iVar3 = func_162(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_56(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						if (!func_83(iParam0, 9, iVar97))
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
					iVar99 = func_169(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = func_169(iParam0, 11, -1);
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
					iVar3 = func_162(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_56(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = func_162(iParam0, iVar5, iParam1, iParam2, 14, 1);
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
		if (func_60(iParam0, &uVar4))
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




int func_60(int iParam0, var uParam1)//Position - 0x3C8C
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_169(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (GlobalFunc_6671(741, Global_68104, 0) != -99 && GlobalFunc_6714())
	{
		if (GlobalFunc_278() == 4)
		{
			return 1;
		}
		if (GlobalFunc_6671(741, Global_68104, 0) == 0 && GlobalFunc_6671(742, Global_68104, 0) == 0)
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				if (GlobalFunc_6671(2035, Global_68104, 0) == 0)
				{
					return 0;
				}
			}
			else if (GlobalFunc_6671(740, Global_68104, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = GlobalFunc_6671(741, Global_68104, 0);
		iVar1 = GlobalFunc_6671(742, Global_68104, 0);
		if (!func_83(iParam0, iVar1, iVar0))
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				*uParam1 = GlobalFunc_6671(2035, Global_68104, 0);
			}
			else
			{
				*uParam1 = GlobalFunc_6671(740, Global_68104, 0);
			}
			GlobalFunc_6784(741, -99, Global_68104, 1);
			GlobalFunc_6784(742, 2, Global_68104, 1);
			return 1;
		}
	}
	return 0;
}























int func_83(int iParam0, int iParam1, int iParam2)//Position - 0x533B
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar24;
	int iVar34;
	var uVar35;
	var uVar45;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar0, iParam1, iParam2) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_83(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar24 = { GlobalFunc_7616(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_83(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10837(iVar0, 14, iVar6) };
									if (Global_68106[2 /*14*/].f_12 == iVar5)
									{
										if (func_83(iParam0, 14, iVar6))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_68106[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = GlobalFunc_6740(iParam0, iVar4);
						Global_68106[2 /*14*/] = { GlobalFunc_10837(iVar0, iVar4, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_68106[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != joaat("0"))
		{
			if (GlobalFunc_6671(1743, Global_68104, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar35 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar34 = 0;
		while (iVar34 <= 8)
		{
			if (!func_83(iParam0, 14, uVar35[iVar34]))
			{
				return 0;
			}
			iVar34++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else
	{
		if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (GlobalFunc_6729(iVar0, 11, GlobalFunc_6740(iParam0, 11)))
			{
				if (GlobalFunc_6727(iVar0, 4, iParam2, &uVar45))
				{
					return func_83(iParam0, 4, uVar45);
				}
			}
			else if (GlobalFunc_6726(iVar0, 4, iParam2, &uVar45))
			{
				return func_83(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}
































void func_115(int iParam0, int iParam1, bool bParam2)//Position - 0xA02F
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_9757(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9004(iVar1, 1, Global_68104);
	}
	func_116(iParam0, bParam2, 0);
}

void func_116(int iParam0, bool bParam1, bool bParam2)//Position - 0xA070
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_68104;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar14 = GlobalFunc_303(iParam0);
		bVar15 = func_137(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = func_134(iParam0);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (GlobalFunc_8361(iVar18, iVar0))
			{
				if (GlobalFunc_5123(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9001(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8361(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar20 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar14, iVar19, &Var21))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21))
				{
					iVar36 = (129 + iVar19);
					if (GlobalFunc_8361(iVar36, iVar0))
					{
						if (GlobalFunc_9001(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var21.f_2, Var21.f_3);
							GlobalFunc_294(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}


















int func_134(int iParam0)//Position - 0xDB30
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6671(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar2 = func_169(iParam0, 11, -1);
				if (iVar2 >= 256)
				{
					iVar3 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar2, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_M_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6671(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar4 = func_169(iParam0, 11, -1);
				if (iVar4 >= 256)
				{
					iVar5 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar4, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_F_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}



int func_137(int iParam0)//Position - 0xDCFF
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
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar2 = func_169(iParam0, 11, -1);
						if (iVar2 >= 237)
						{
							iVar3 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar2, 11, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar4 = func_169(iParam0, 8, -1);
						if (iVar4 >= 241)
						{
							iVar5 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar4, 8, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
						case 7:
						case 4:
						case 9:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar6 = func_169(iParam0, 11, -1);
						if (iVar6 >= 256)
						{
							iVar7 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar6, 11, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_169(iParam0, 8, -1);
						if (iVar8 >= 136)
						{
							iVar9 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar8, 8, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (GlobalFunc_302(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

























int func_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x151AC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
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
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
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
	int iVar90;
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
	bool bVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	
	iVar0 = -99;
	if (iParam4 == 2)
	{
		func_163(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = GlobalFunc_6740(iParam0, 8);
					iVar3 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
					iVar4 = GlobalFunc_306(iVar3);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar4 == 6)) || (iVar2 >= 241 && iVar4 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("VEST_SHIRT"), 0)))
					{
						iVar0 = -99;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar5 = GlobalFunc_4913(iParam1, iParam3, 11, 3);
					if (iVar5 != -1)
					{
						bVar6 = true;
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("DRAW_11"), 0))
						{
							iVar2 = GlobalFunc_6740(iParam0, 8);
							iVar7 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
							iVar8 = GlobalFunc_306(iVar7);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar8 == 6)) || (iVar2 >= 241 && iVar8 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("VEST_SHIRT"), 0)))
							{
								bVar6 = false;
							}
						}
						if (bVar6)
						{
							iVar9 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar5);
							iVar10 = 0;
							while (iVar10 < iVar9)
							{
								FILES::GET_FORCED_COMPONENT(iVar5, iVar10, &iVar11, &iVar12, &iVar13);
								if (iVar13 == 3)
								{
									if (iVar11 != 0 && iVar11 != joaat("0"))
									{
										iVar0 = GlobalFunc_4914(iParam1, iVar11, 3, 3);
									}
									else
									{
										iVar0 = iVar12;
									}
									iVar10 = iVar9 + 1;
								}
								iVar10++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = -99;
				}
				else if (iParam3 == 240)
				{
					iVar0 = 14;
				}
				else if (iParam3 >= 241)
				{
					iVar14 = GlobalFunc_4913(iParam1, iParam3, 8, 3);
					if (iVar14 != -1)
					{
						iVar15 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar16 = 0;
						while (iVar16 < iVar15)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar16, &iVar17, &iVar18, &iVar19);
							if (iVar19 == 3)
							{
								if (iVar17 != 0 && iVar17 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar17, 3, 3);
								}
								else
								{
									iVar0 = iVar18;
									iVar16 = iVar15 + 1;
								}
							}
							iVar16++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar20 = -1;
				if (iParam3 >= 237)
				{
					iVar20 = GlobalFunc_306(GlobalFunc_4913(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar20 == 11)
				{
					iVar2 = GlobalFunc_6740(iParam0, 8);
					iVar21 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
					iVar22 = GlobalFunc_306(iVar21);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar22 == 6)) || (iVar2 >= 241 && iVar22 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("VEST_SHIRT"), 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar23 = GlobalFunc_4913(iParam1, iParam3, 11, 3);
					if (iVar23 != -1)
					{
						iVar24 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar23);
						iVar25 = 0;
						while (iVar25 < iVar24)
						{
							FILES::GET_FORCED_COMPONENT(iVar23, iVar25, &iVar26, &iVar27, &iVar28);
							if (iVar28 == 8)
							{
								if (iVar26 != 0 && iVar26 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar26, 8, 3);
								}
								else
								{
									iVar0 = iVar27;
									iVar25 = iVar24 + 1;
								}
							}
							iVar25++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar29 = -1;
				iVar30 = -1;
				if (iParam3 >= 92)
				{
					iVar30 = GlobalFunc_4913(iParam1, iParam3, 7, 3);
					iVar29 = GlobalFunc_306(iVar30);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar29 == 10) || iVar29 == 11) || iVar29 == 12) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("VEST_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("TUX_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("TIE"), 0)))
				{
					iVar2 = GlobalFunc_6740(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = (iVar2 - 48);
						iVar0 = (64 + iVar1);
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = (iVar2 - 112);
						iVar0 = (96 + iVar1);
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = (iVar2 - 176);
						iVar0 = (160 + iVar1);
					}
					else if (iVar2 >= 241)
					{
						iVar31 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
						iVar32 = GlobalFunc_306(iVar31);
						bVar33 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar31, joaat("TUX_VEST"), 0);
						if (((iVar32 == 3 || iVar32 == 7) || iVar32 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar31, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar31 != -1)
							{
								iVar34 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar31);
								iVar35 = 0;
								while (iVar35 < iVar34)
								{
									FILES::GET_VARIANT_COMPONENT(iVar31, iVar35, &iVar36, &iVar37, &iVar38);
									if ((iVar38 == 8 && !bVar33) || (iVar38 == 10 && bVar33))
									{
										if (iVar36 != 0 && iVar36 != joaat("0"))
										{
											iVar0 = GlobalFunc_4914(iParam1, iVar36, 8, 3);
										}
										else
										{
											iVar0 = iVar37;
										}
										iVar35 = iVar34 + 1;
									}
									iVar35++;
								}
							}
						}
					}
				}
				else if ((iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("LOOSE_TIE"), 0)) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("SLACK_TIE"), 0)))
				{
					iVar39 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
					iVar40 = GlobalFunc_306(iVar39);
					bVar41 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar39, joaat("TUX_VEST"), 0);
					if (((iVar40 == 3 || iVar40 == 7) || iVar40 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar39, joaat("OPEN_COLLAR"), 0))
					{
						if (iVar39 != -1)
						{
							iVar42 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar39);
							iVar43 = 0;
							while (iVar43 < iVar42)
							{
								FILES::GET_VARIANT_COMPONENT(iVar39, iVar43, &iVar44, &iVar45, &iVar46);
								if ((iVar46 == 8 && !bVar41) || (iVar46 == 10 && bVar41))
								{
									if (iVar44 != 0 && iVar44 != joaat("0"))
									{
										iVar0 = GlobalFunc_4914(iParam1, iVar44, 8, 3);
									}
									else
									{
										iVar0 = iVar45;
									}
									iVar43 = iVar42 + 1;
								}
								iVar43++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar47 = GlobalFunc_4913(iParam1, iParam3, 7, 3);
					if (iVar47 != -1)
					{
						iVar48 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar47);
						iVar49 = 0;
						while (iVar49 < iVar48)
						{
							FILES::GET_FORCED_COMPONENT(iVar47, iVar49, &iVar50, &iVar51, &iVar52);
							if (iVar52 == 8)
							{
								if (iVar50 != 0 && iVar50 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar50, 8, 3);
								}
								else
								{
									iVar0 = iVar51;
									iVar49 = iVar48 + 1;
								}
							}
							iVar49++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar53 = -1;
				iVar54 = -1;
				if (iParam3 >= 92)
				{
					iVar54 = GlobalFunc_4913(iParam1, iParam3, 7, 3);
					iVar53 = GlobalFunc_306(iVar54);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar53 == 10) || iVar53 == 11) || iVar53 == 12) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar54, joaat("TIE"), 0))
				{
					iVar55 = GlobalFunc_6740(iParam0, 11);
					if (iVar55 >= 237)
					{
						iVar56 = GlobalFunc_4913(iParam1, iVar55, 11, 3);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar56, joaat("SHIRT_BRACES"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar56, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar56 != -1)
							{
								iVar57 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar56);
								iVar58 = 0;
								while (iVar58 < iVar57)
								{
									FILES::GET_VARIANT_COMPONENT(iVar56, iVar58, &iVar59, &iVar60, &iVar61);
									if (iVar61 == 11)
									{
										if (iVar59 != 0 && iVar59 != joaat("0"))
										{
											iVar0 = GlobalFunc_4914(iParam1, iVar59, 11, 3);
										}
										else
										{
											iVar0 = iVar60;
										}
										iVar58 = iVar57 + 1;
									}
									iVar58++;
								}
							}
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar62 = GlobalFunc_6740(iParam0, 11);
				if (iVar62 >= 237)
				{
					iVar63 = GlobalFunc_4913(iParam1, iVar62, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar63, joaat("SHIRT_BRACES"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar63, joaat("OPEN_COLLAR"), 0))
					{
						iVar63 = GlobalFunc_4913(iParam1, iParam3, 11, 3);
						if (iVar63 != -1)
						{
							iVar64 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar63);
							iVar65 = 0;
							while (iVar65 < iVar64)
							{
								FILES::GET_FORCED_COMPONENT(iVar63, iVar65, &iVar66, &iVar67, &iVar68);
								if (iVar68 == 7)
								{
									if (iVar66 != 0 && iVar66 != joaat("0"))
									{
										iVar0 = GlobalFunc_4914(iParam1, iVar66, 7, 3);
									}
									else
									{
										iVar0 = iVar67;
										iVar65 = iVar64 + 1;
									}
								}
								iVar65++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar69 = GlobalFunc_4913(iParam1, iParam3, 14, 3);
					if (iVar69 != -1)
					{
						iVar70 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar69);
						iVar71 = 0;
						while (iVar71 < iVar70)
						{
							FILES::GET_FORCED_COMPONENT(iVar69, iVar71, &iVar72, &iVar73, &iVar74);
							if (iVar74 == 7)
							{
								if (iVar72 != 0 && iVar72 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar72, 7, 3);
								}
								else
								{
									iVar0 = iVar73;
									iVar71 = iVar70 + 1;
								}
							}
							iVar71++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar75 = GlobalFunc_4913(iParam1, iParam3, 4, 3);
					if (iVar75 != -1)
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar75);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_FORCED_COMPONENT(iVar75, iVar77, &iVar78, &iVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar78, 6, 3);
								}
								else
								{
									iVar0 = iVar79;
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar81 = GlobalFunc_4913(iParam1, iParam3, 1, 3);
					if (iVar81 != -1)
					{
						iVar82 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar81);
						iVar83 = 0;
						while (iVar83 < iVar82)
						{
							FILES::GET_FORCED_PROP(iVar81, iVar83, &iVar84, &iVar85, &iVar86);
							if (iVar86 == iParam5)
							{
								if (iVar84 != 0 && iVar84 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar84, 14, 3);
									iVar83 = iVar82 + 1;
								}
								else
								{
									iVar0 = iVar85;
									iVar83 = iVar82 + 1;
								}
							}
							iVar83++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar87 = GlobalFunc_4913(iParam1, iParam3, 11, 4);
					if (iVar87 != -1)
					{
						iVar88 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar87);
						iVar89 = 0;
						while (iVar89 < iVar88)
						{
							FILES::GET_FORCED_COMPONENT(iVar87, iVar89, &iVar90, &iVar91, &iVar92);
							if (iVar92 == 3)
							{
								if (iVar90 != 0 && iVar90 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar90, 3, 4);
								}
								else
								{
									iVar0 = iVar91;
									iVar89 = iVar88 + 1;
								}
							}
							iVar89++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = (iParam3 - 208);
					iVar0 = (103 + iVar1);
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar93 = GlobalFunc_4913(iParam1, iParam3, 11, 4);
					if (iVar93 != -1)
					{
						iVar94 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar93);
						iVar95 = 0;
						while (iVar95 < iVar94)
						{
							FILES::GET_FORCED_COMPONENT(iVar93, iVar95, &iVar96, &iVar97, &iVar98);
							if (iVar98 == 8)
							{
								if (iVar96 != 0 && iVar96 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar96, 8, 4);
								}
								else
								{
									iVar0 = iVar97;
									iVar95 = iVar94 + 1;
								}
							}
							iVar95++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar99 = -1;
				if (iParam3 >= 55)
				{
					iVar99 = GlobalFunc_4913(iParam1, iParam3, 7, 4);
				}
				if ((iVar99 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("TIE"), 0)) || (iVar99 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("BOWTIE"), 0)))
				{
					iVar100 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					bVar101 = false;
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("LOOSE_TIE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("LOOSE_BOWTIE"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar100, joaat("CLOSED_COLLAR"), 0))
						{
							bVar101 = true;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar100, joaat("OPEN_COLLAR"), 0))
					{
						bVar101 = true;
					}
					if (bVar101)
					{
						iVar102 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar100);
						iVar103 = 0;
						while (iVar103 < iVar102)
						{
							FILES::GET_VARIANT_COMPONENT(iVar100, iVar103, &iVar104, &iVar105, &iVar106);
							if (iVar106 == 8)
							{
								if (iVar104 != 0 && iVar104 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar104, 8, 4);
								}
								else
								{
									iVar0 = iVar105;
								}
								iVar103 = iVar102 + 1;
							}
							iVar103++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar107 = GlobalFunc_4913(iParam1, iParam3, 4, 4);
					if (iVar107 != -1)
					{
						iVar108 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar107);
						iVar109 = 0;
						while (iVar109 < iVar108)
						{
							FILES::GET_FORCED_COMPONENT(iVar107, iVar109, &iVar110, &iVar111, &iVar112);
							if (iVar112 == 6)
							{
								if (iVar110 != 0 && iVar110 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar110, 6, 4);
								}
								else
								{
									iVar0 = iVar111;
									iVar109 = iVar108 + 1;
								}
							}
							iVar109++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar113 = GlobalFunc_4913(iParam1, iParam3, 11, 4);
					if (iVar113 != -1)
					{
						iVar114 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar113);
						iVar115 = 0;
						while (iVar115 < iVar114)
						{
							FILES::GET_FORCED_COMPONENT(iVar113, iVar115, &iVar116, &iVar117, &iVar118);
							if (iVar118 == 4)
							{
								if (iVar116 != 0 && iVar116 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar116, 4, 4);
								}
								else
								{
									iVar0 = iVar117;
									iVar115 = iVar114 + 1;
								}
							}
							iVar115++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar119 = GlobalFunc_4913(iParam1, iParam3, 14, 4);
					if (iVar119 != -1)
					{
						iVar120 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar119);
						iVar121 = 0;
						while (iVar121 < iVar120)
						{
							FILES::GET_FORCED_COMPONENT(iVar119, iVar121, &iVar122, &iVar123, &iVar124);
							if (iVar124 == 7)
							{
								if (iVar122 != 0 && iVar122 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar122, 7, 4);
								}
								else
								{
									iVar0 = iVar123;
									iVar121 = iVar120 + 1;
								}
							}
							iVar121++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar125 = GlobalFunc_4913(iParam1, iParam3, 1, 4);
					if (iVar125 != -1)
					{
						iVar126 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar125);
						iVar127 = 0;
						while (iVar127 < iVar126)
						{
							FILES::GET_FORCED_PROP(iVar125, iVar127, &iVar128, &iVar129, &iVar130);
							if (iVar130 == iParam5)
							{
								if (iVar128 != 0 && iVar128 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar128, 14, 4);
									iVar127 = iVar126 + 1;
								}
								else
								{
									iVar0 = iVar129;
									iVar127 = iVar126 + 1;
								}
							}
							iVar127++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

int func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1653A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	
	*iParam4 = -99;
	switch (iParam1)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= GlobalFunc_26(iParam1, 1))
					{
						GlobalFunc_10837(iParam1, 1, iParam3);
						if (Global_2621445 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar0 = GlobalFunc_6740(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = GlobalFunc_4913(iParam1, iVar0, 1, 3);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("NIGHT_VISION"), 0))
						{
							iVar1 = GlobalFunc_4913(iParam1, iParam3, 1, 3);
							if (iVar1 != -1)
							{
								iVar2 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									FILES::GET_FORCED_COMPONENT(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != joaat("0"))
										{
											*iParam4 = GlobalFunc_4914(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= GlobalFunc_26(iParam1, 1))
					{
						GlobalFunc_10837(iParam1, 1, iParam3);
						if (Global_2621445 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar7 = GlobalFunc_6740(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = GlobalFunc_4913(iParam1, iVar7, 1, 4);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("NIGHT_VISION"), 0))
						{
							iVar8 = GlobalFunc_4913(iParam1, iParam3, 1, 4);
							if (iVar8 != -1)
							{
								iVar9 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									FILES::GET_FORCED_COMPONENT(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != joaat("0"))
										{
											*iParam4 = GlobalFunc_4914(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != -99)
	{
		GlobalFunc_6784(741, iParam3, Global_68104, 1);
		GlobalFunc_6784(742, iParam2, Global_68104, 1);
		return 1;
	}
	return 0;
}

void func_164(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x16801
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (GlobalFunc_6737(iVar0, iParam2))
				{
					iParam1 = 8;
					iParam2 = GlobalFunc_6740(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = GlobalFunc_6740(iParam0, 11);
				if (!GlobalFunc_6737(iVar0, iVar1))
				{
					return;
				}
			}
			GlobalFunc_9757(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!GlobalFunc_9719(iVar0, iParam2, 13) && !GlobalFunc_9719(iVar0, iParam2, 14)) && !GlobalFunc_9719(iVar0, iParam2, 15)) && !GlobalFunc_9719(iVar0, iParam2, 16)) && !GlobalFunc_9719(iVar0, iParam2, 71)) && !GlobalFunc_9719(iVar0, iParam2, 72))
				{
					GlobalFunc_9757(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = GlobalFunc_9002(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					GlobalFunc_9013(iParam0, iVar2);
				}
				else
				{
					GlobalFunc_9004(iVar2, 1, Global_68104);
				}
			}
		}
	}
}





int func_169(int iParam0, int iParam1, int iParam2)//Position - 0x16A72
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_83(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_83(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7614(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_6740(iParam0, iParam1);
		}
	}
	return -99;
}































































int func_232(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x33C27
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (GlobalFunc_7624(PLAYER::PLAYER_ID()))
	{
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, 0);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, 1);
	Global_2404548.f_37.f_120 = 0;
	if (GlobalFunc_6763())
	{
		if (GlobalFunc_6762())
		{
			if (GlobalFunc_5040(&iVar2))
			{
				if (GlobalFunc_5039(iVar2))
				{
					func_54(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), 0), 0);
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2404548.f_37.f_44)
	{
		if (GlobalFunc_5038(iVar0))
		{
			if ((GlobalFunc_8349() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2404548.f_37.f_43) || !GlobalFunc_8349())
			{
				if (!GlobalFunc_7824(ENTITY::GET_ENTITY_COORDS(iVar0, 1), 30f, 1, 1, 0, 0, 0, 0))
				{
					if (bParam4)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, GlobalFunc_366(Global_2404548.f_37.f_45.f_42, Param0), 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iVar0, uParam3);
					}
					func_419(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1573687)
	{
		func_427(&iVar0);
	}
	if (GlobalFunc_9662())
	{
		func_427(&(Global_2404548.f_37.f_118));
		if (GlobalFunc_6761())
		{
			if (func_263(GlobalFunc_366(Global_2404548.f_37.f_45.f_42, Param0), fParam3, 1, GlobalFunc_5037(), 0, 1, 0))
			{
				func_234(NETWORK::NET_TO_VEH(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_48));
				return 1;
			}
		}
		else if (func_233(&uVar1, Global_2404548.f_37.f_45.f_42, GlobalFunc_366(Global_2404548.f_37.f_45.f_42, Param0), fParam3, 0, 1, 1, 0, 1, 1))
		{
			func_234(NETWORK::NET_TO_VEH(uVar1));
			return 1;
		}
	}
	return 0;
}

int func_233(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11)//Position - 0x33DE2
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, 1f, 0, 0, 1, 1, true);
	}
	uVar0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = NETWORK::VEH_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar0, iParam10);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
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
		VEHICLE::SET_VEHICLE_IS_STOLEN(iVar0, iParam9);
		return 1;
	}
	return 0;
}

void func_234(int iParam0)//Position - 0x33E65
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
		}
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam0, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	func_419(iParam0);
	Global_2404548.f_37.f_118 = iParam0;
	if (Global_2404548.f_37.f_117)
	{
		GlobalFunc_8336(iParam0, 1);
	}
	else
	{
		GlobalFunc_8969(iParam0, GlobalFunc_318(PLAYER::PLAYER_ID()));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	Global_2404548.f_37.f_120 = 1;
}





























int func_263(struct<3> Param0, var uParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x36D11
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<13> Var6;
	struct<13> Var19;
	struct<13> Var32;
	bool bVar45;
	int iVar46;
	
	if (!GlobalFunc_365(8))
	{
		GlobalFunc_6760(0, 0, 0, 0);
		GlobalFunc_364(8);
	}
	if (Global_2097152[GlobalFunc_177() /*8053*/][iParam5 /*111*/].f_42 == 0)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iParam5 /*111*/].f_72, 6))
	{
		if (!GlobalFunc_365(16))
		{
			GlobalFunc_364(16);
		}
	}
	GlobalFunc_364(31);
	if (!GlobalFunc_5036())
	{
		if (!GlobalFunc_365(0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_48))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (!GlobalFunc_363())
					{
						if (!GlobalFunc_5035())
						{
							func_382(iParam5);
							iVar1 = Global_2097152[GlobalFunc_177() /*8053*/][iParam5 /*111*/].f_42;
							if (!GlobalFunc_357(iVar1) || !GlobalFunc_4928(iVar1))
							{
								func_375(iParam5, -1);
								return 1;
							}
							else if (GlobalFunc_356(iVar1))
							{
								iVar2 = 0;
								if ((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2422140.f_499.f_28) < 15)
								{
									iVar2 = 1;
								}
								if (GlobalFunc_355())
								{
									iVar2 = 1;
								}
								if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_2404548.f_22.f_2) < 15000)
								{
									Global_2404548.f_22.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
									iVar2 = 1;
								}
								if (bParam8)
								{
									iVar2 = 1;
								}
								if (Global_2428891.f_2841.f_147)
								{
									iVar3 = 0;
									iVar2 = 1;
								}
								else
								{
									iVar3 = 1;
								}
								bVar4 = true;
								if (GlobalFunc_5033(PLAYER::PLAYER_ID()) || (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
								{
									bVar4 = false;
								}
								if (Global_2428891.f_2841.f_147)
								{
									if (MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iParam5 /*111*/].f_72, 11))
									{
										MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam5 /*111*/].f_72), 11);
									}
								}
								bVar5 = false;
								if (bParam7)
								{
									bVar5 = true;
								}
								else if (MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iParam5 /*111*/].f_72, 11))
								{
									Var6.f_3 = 1125515264;
									Var6.f_4 = 1;
									Var6.f_5 = 1;
									Var6.f_7 = 1082130432;
									Var6.f_8 = 1;
									Var6.f_11 = 1;
									Var6.f_3 = 50f;
									Var6.f_4 = 0;
									Var6.f_5 = 0;
									Var6.f_8 = iVar3;
									Var6.f_9 = iVar2;
									Var6.f_10 = 1;
									Var6.f_11 = bVar4;
									Var6.f_12 = 1;
									if (func_312(-145.7451f, -1167.937f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &uParam3, &Var6))
									{
										bVar5 = true;
									}
									else if (func_312(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &uParam3, &Var6))
									{
										bVar5 = true;
									}
								}
								else if (MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iParam5 /*111*/].f_72, 6))
								{
									if (GlobalFunc_7659(&Param0, &uParam3))
									{
										bVar5 = true;
									}
								}
								else
								{
									if (bParam6)
									{
										if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
										{
											bParam6 = false;
										}
									}
									if (!bParam6)
									{
										Var19.f_3 = 1125515264;
										Var19.f_4 = 1;
										Var19.f_5 = 1;
										Var19.f_7 = 1082130432;
										Var19.f_8 = 1;
										Var19.f_11 = 1;
										Var19 = 10f;
										Var19.f_8 = iVar3;
										Var19.f_9 = iVar2;
										Var19.f_10 = 1;
										Var19.f_11 = bVar4;
										Var19.f_12 = 1;
										if (func_312(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &uParam3, &Var19))
										{
											bVar5 = true;
										}
									}
									else
									{
										Var32.f_3 = 1125515264;
										Var32.f_4 = 1;
										Var32.f_5 = 1;
										Var32.f_7 = 1082130432;
										Var32.f_8 = 1;
										Var32.f_11 = 1;
										Var32.f_2 = bParam6;
										Var32.f_8 = iVar3;
										Var32.f_9 = iVar2;
										Var32.f_10 = 1;
										Var32.f_11 = bVar4;
										Var32.f_12 = 1;
										if (func_312(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &uParam3, &Var32))
										{
											bVar5 = true;
										}
									}
								}
								if (bVar5)
								{
									MISC::CLEAR_AREA(Param0, 2f, 1, 0, 0, false);
									func_233(&(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_48), iVar1, Param0, uParam3, 0, 1, 0, 0, 1, 1);
									NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_48, PLAYER::PLAYER_ID(), 1);
									iVar0 = NETWORK::NET_TO_VEH(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_48);
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, 1);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
									func_294(&iVar0, iParam5);
									GlobalFunc_8970(iVar0, iParam5);
									if (!bVar4)
									{
										NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, 1);
									}
									if (MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iParam5 /*111*/].f_72, 11))
									{
										GlobalFunc_364(34);
									}
									else
									{
										GlobalFunc_332(34);
									}
									if (iParam5 >= 0 && iParam5 < 39)
									{
										MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam5 /*111*/].f_72), 0);
										iVar46 = 0;
										while (iVar46 < 39)
										{
											bVar45 = false;
											if (iVar46 != iParam5)
											{
												if (MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iVar46 /*111*/].f_72, 11))
												{
													MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iVar46 /*111*/].f_72), 11);
													bVar45 = true;
												}
												if (MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iVar46 /*111*/].f_72, 0))
												{
													MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iVar46 /*111*/].f_72), 0);
													bVar45 = true;
												}
												if (MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iVar46 /*111*/].f_72, 6))
												{
													func_271(iVar46);
													bVar45 = true;
												}
												if (bVar45)
												{
													func_265(iVar46, &(Global_2097152[GlobalFunc_177() /*8053*/][iVar46 /*111*/]), 1, -1, 0, 0);
												}
											}
											iVar46++;
										}
									}
									if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iVar0, 0))
									{
										if (MISC::IS_BIT_SET(Global_2428891.f_5242, 2))
										{
											VEHICLE::LOWER_CONVERTIBLE_ROOF(iVar0, 1);
										}
									}
									func_265(iParam5, &(Global_2097152[GlobalFunc_177() /*8053*/][iParam5 /*111*/]), 1, -1, 0, 0);
									GlobalFunc_323(iVar0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
									if (bParam4)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
									}
									GlobalFunc_364(0);
									GlobalFunc_332(10);
									GlobalFunc_332(1);
									GlobalFunc_332(2);
									GlobalFunc_332(9);
									GlobalFunc_332(12);
									GlobalFunc_332(31);
									GlobalFunc_332(32);
									GlobalFunc_332(33);
									Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_117 = 0;
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}


int func_265(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x37352
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_652 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (!bParam4)
	{
	}
	iVar1 = GlobalFunc_326(1411, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_107, iParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = GlobalFunc_326(1412, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_108, iParam3, 1);
	if (!bParam4)
	{
	}
	if (GlobalFunc_325(iParam0))
	{
	}
	else
	{
		iVar1 = GlobalFunc_326(1413, iParam0);
		GlobalFunc_5019(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = (GlobalFunc_326(1414, iParam0) + iVar0);
			GlobalFunc_5019(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (GlobalFunc_326(1439, iParam0) + iVar0);
			GlobalFunc_5019(iVar1, uParam1->f_35[iVar0], iParam3, 1);
			iVar0++;
		}
	}
	iVar1 = GlobalFunc_326(1441, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_38, iParam3, 1);
	iVar1 = GlobalFunc_326(1442, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_39, iParam3, 1);
	iVar1 = GlobalFunc_326(1443, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_40, iParam3, 1);
	if (GlobalFunc_325(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = GlobalFunc_326(1444, iParam0);
		GlobalFunc_5019(iVar1, uParam1->f_41, iParam3, 1);
	}
	iVar1 = GlobalFunc_326(1445, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_43, iParam3, 1);
	if (GlobalFunc_325(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = GlobalFunc_326(1446, iParam0);
		GlobalFunc_5019(iVar1, uParam1->f_44, iParam3, 1);
	}
	iVar1 = GlobalFunc_326(1447, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_45, iParam3, 1);
	iVar1 = GlobalFunc_326(1448, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_46, -1, 1);
	iVar1 = GlobalFunc_326(1449, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_47, iParam3, 1);
	iVar1 = GlobalFunc_326(1450, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_48, iParam3, 1);
	iVar1 = GlobalFunc_326(1451, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_49, iParam3, 1);
	iVar1 = GlobalFunc_326(1452, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_5, iParam3, 1);
	iVar1 = GlobalFunc_326(1453, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_6, iParam3, 1);
	iVar1 = GlobalFunc_326(1454, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_7, iParam3, 1);
	iVar1 = GlobalFunc_326(1455, iParam0);
	GlobalFunc_5019(iVar1, uParam1->f_8, iParam3, 1);
	if (GlobalFunc_325(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = GlobalFunc_326(3880, iParam0);
		GlobalFunc_5019(iVar1, uParam1->f_50, iParam3, 1);
		iVar1 = GlobalFunc_326(3881, iParam0);
		GlobalFunc_5019(iVar1, uParam1->f_51, iParam3, 1);
		iVar1 = GlobalFunc_326(3882, iParam0);
		GlobalFunc_5019(iVar1, uParam1->f_52, iParam3, 1);
	}
	iVar2 = Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_652;
	if (bParam5)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	GlobalFunc_6784(1615, iVar2, iParam3, 1);
	if (!bParam4)
	{
	}
	GlobalFunc_6784(GlobalFunc_324(1, iParam0), uParam1->f_72, iParam3, 1);
	if (!bParam4)
	{
	}
	GlobalFunc_6784(GlobalFunc_324(2, iParam0), uParam1->f_73, iParam3, 1);
	if (!bParam4)
	{
	}
	GlobalFunc_6784(GlobalFunc_324(3, iParam0), uParam1->f_74, iParam3, 1);
	if (!bParam4)
	{
	}
	GlobalFunc_6784(GlobalFunc_324(4, iParam0), uParam1->f_42, iParam3, 1);
	GlobalFunc_6784(GlobalFunc_324(5, iParam0), uParam1->f_53, iParam3, 1);
	if (!bParam4)
	{
	}
	GlobalFunc_6784(GlobalFunc_324(7, iParam0), uParam1->f_109, iParam3, 1);
	if (!GlobalFunc_325(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_266(GlobalFunc_324(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_266(int iParam0, var uParam1, int iParam2)//Position - 0x37732
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][GlobalFunc_4916(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, uParam1);
	}
}





void func_271(int iParam0)//Position - 0x38D68
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_72, 2))
	{
		MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_72), 8);
	}
	if (MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_72, 6))
	{
		GlobalFunc_7837(1899, 1, -1);
		MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_72), 16);
	}
	MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_72), 6);
	MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_72), 3);
	MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_72), 11);
	MISC::CLEAR_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_72), 0);
	Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_73 = 0;
	if (!MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_72, 1))
	{
		MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_72), 1);
		if (func_279(4))
		{
			Global_2540566 = 1;
		}
		else
		{
			func_265(iParam0, &(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/]), 1, -1, 0, 0);
			GlobalFunc_4989(3, 0);
		}
		if (!MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_72, 2))
		{
			Global_2446554.f_350 = iParam0;
			Global_2446554.f_351 = 0;
			GlobalFunc_328(iParam0, &iVar0);
			if (iVar0 >= 0)
			{
				GlobalFunc_6748(iVar0, -1, -1);
			}
			if (!GlobalFunc_218())
			{
				func_375(Global_2446554.f_350, -1);
			}
		}
	}
}








int func_279(int iParam0)//Position - 0x39075
{
	int iVar0;
	
	if (GlobalFunc_331())
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (GlobalFunc_330(iVar0) == iParam0)
			{
				if (GlobalFunc_8388(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}















void func_294(var uParam0, int iParam1)//Position - 0x39BB4
{
	GlobalFunc_7656(*uParam0, &(Global_2097152[GlobalFunc_177() /*8053*/][iParam1 /*111*/]), 1, 1);
	GlobalFunc_10656(uParam0, iParam1);
}


















int func_312(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)//Position - 0x3A5D4
{
	bool bVar0;
	struct<43> Var1;
	struct<43> Var47;
	
	bVar0 = false;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return 0;
		}
	}
	if (Global_2404548.f_421)
	{
		Global_2404548.f_421 = 0;
		return 0;
	}
	if (!GlobalFunc_354(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!Global_2404548.f_483 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_488) < GlobalFunc_429())
	{
		return 0;
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2404548.f_524)
	{
		if (!Global_2404548.f_525 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_528) < GlobalFunc_429())
			{
				return 0;
			}
			else
			{
				Global_2404548.f_525 = 0;
			}
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_526) > 30000)
	{
		Global_2404548.f_525 = 0;
	}
	if (uParam10->f_5)
	{
		if (GlobalFunc_8972(Param0))
		{
			if (GlobalFunc_6756(&Param0, 1))
			{
			}
		}
	}
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f));
	if (Global_2404548.f_525 == 0)
	{
		Global_2404548.f_531 = 0;
		Global_2404548.f_526 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2404548.f_524 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2404548.f_528 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2404548.f_530 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2404548.f_525 = 2;
		GlobalFunc_352();
		GlobalFunc_6755(Param0);
	}
	switch (Global_2404548.f_525)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f)))
			{
				Global_2404548.f_532 = { Param0 };
				Global_2404548.f_535 = 0f;
				if ((uParam10->f_2 && GlobalFunc_8440(Param0, 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0)) && !uParam10->f_6)
				{
					Global_2404548.f_532 = { Param0 };
					Global_2404548.f_535 = *uParam9;
				}
				else
				{
					Var1.f_6 = 1082130432;
					Var1.f_7 = 1176255488;
					Var1.f_8 = 1;
					Var1.f_10 = 1;
					Var1.f_13 = 1;
					Var1.f_15 = 1;
					Var1.f_16 = 1;
					Var1.f_31 = 1;
					Var1.f_34 = joaat("tailgater");
					Var1.f_43 = 1123024896;
					Var1.f_9 = iParam7;
					Var1.f_3 = 7f;
					Var1.f_10 = uParam10->f_4;
					Var1.f_4 = *uParam10;
					Var1.f_13 = uParam10->f_1;
					Var1.f_5 = uParam10->f_3;
					Var1.f_15 = uParam10->f_5;
					Var1.f_11 = uParam10->f_6;
					Var1.f_6 = uParam10->f_7;
					Var1.f_16 = uParam10->f_8;
					Var1.f_17 = uParam10->f_9;
					Var1 = { Param3 };
					Var1.f_12 = 1;
					Var1.f_34 = iParam6;
					Var1.f_31 = uParam10->f_11;
					Var1.f_30 = 1;
					Var1.f_42 = uParam10->f_12;
					if (Global_2404548.f_1060 > 0 && func_353(&(Global_2404548.f_532), &(Global_2404548.f_535), &Var1))
					{
					}
					else
					{
						func_324(&(Global_2404548.f_532), &(Global_2404548.f_535), &Var1);
					}
				}
				GlobalFunc_8338(Global_2404548.f_532, Global_2404548.f_535, iParam6);
				Global_2404548.f_522 = 0;
				Global_2404548.f_523 = 0;
				Global_2404548.f_531++;
				Global_2404548.f_527 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2404548.f_526 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2404548.f_525 = 3;
			}
			break;
		
		case 3:
			if (Global_2404548.f_522)
			{
				if (Global_2404548.f_523)
				{
					if (uParam10->f_10 && !uParam10->f_9)
					{
						GlobalFunc_5024(Global_2404548.f_532, 2f);
						Global_2404548.f_525 = 4;
						Global_2404548.f_529 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					GlobalFunc_339();
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_527) > 3000)
			{
				GlobalFunc_339();
			}
			break;
		
		case 4:
			if (uParam10->f_10 && !uParam10->f_9)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_527) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2404548.f_536))
					{
						if (NETWORK::_0x4DF7CFFF471A7FB1(Global_2404548.f_536))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2404548.f_536))
							{
								if (GlobalFunc_6751(Global_2404548.f_532, Global_2404548.f_535, iParam6, PLAYER::PLAYER_ID(), 0) || func_314(Global_2404548.f_532, Global_2404548.f_535, iParam6, 1, 0, 0, 0, 1, 0))
								{
									GlobalFunc_339();
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								GlobalFunc_339();
							}
						}
					}
					else
					{
						GlobalFunc_339();
					}
				}
				else
				{
					GlobalFunc_339();
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2404548.f_532 = { Param0 };
			Global_2404548.f_535 = 0f;
			Var47.f_6 = 1082130432;
			Var47.f_7 = 1176255488;
			Var47.f_8 = 1;
			Var47.f_10 = 1;
			Var47.f_13 = 1;
			Var47.f_15 = 1;
			Var47.f_16 = 1;
			Var47.f_31 = 1;
			Var47.f_34 = joaat("tailgater");
			Var47.f_43 = 1123024896;
			Var47.f_9 = iParam7;
			Var47.f_3 = 3.5f;
			Var47.f_10 = uParam10->f_4;
			Var47.f_4 = *uParam10;
			Var47.f_12 = 1;
			Var47.f_13 = 0;
			Var47.f_15 = uParam10->f_5;
			Var47.f_11 = uParam10->f_6;
			Var47.f_6 = uParam10->f_7;
			Var47 = { Param3 };
			Var47.f_34 = iParam6;
			Var47.f_31 = uParam10->f_11;
			Var47.f_30 = 1;
			Var47.f_42 = uParam10->f_12;
			if (Global_2404548.f_1060 > 0 && func_353(&(Global_2404548.f_532), &(Global_2404548.f_535), &Var47))
			{
			}
			else
			{
				func_324(&(Global_2404548.f_532), &(Global_2404548.f_535), &Var47);
			}
			Global_2404548.f_525 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2404548.f_528 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		*uParam8 = { Global_2404548.f_532 };
		*uParam9 = Global_2404548.f_535;
		Global_2404548.f_525 = 0;
		GlobalFunc_352();
		GlobalFunc_336();
		return 1;
	}
	return 0;
}


int func_314(struct<3> Param0, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x3AC10
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (GlobalFunc_252(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && GlobalFunc_338(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && GlobalFunc_6936(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (GlobalFunc_5022(GlobalFunc_271(iVar1), Param0, uParam3, iParam4, 1036831949))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}










void func_324(var uParam0, var uParam1, var uParam2)//Position - 0x3B0C6
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	struct<3> Var23;
	var uVar26;
	struct<3> Var27;
	var uVar30;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (GlobalFunc_9661(uParam2->f_35, uParam0, uParam2->f_38, uParam2->f_41, 1, 1))
		{
			uParam2->f_6 = 9999.9f;
		}
	}
	if (uParam2->f_45)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_42)
	{
		if (GlobalFunc_7663(uParam0, 1))
		{
		}
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2408329.f_162 = 0;
	Global_2408329.f_163 = 0;
	Global_2408329.f_164 = -99;
	Global_2408329.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2408329[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2408329.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, iVar0, &uVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &Var1);
			bVar12 = false;
			if (Global_2408329.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2408329.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, *uParam0) > uParam2->f_4)
				{
					if (!GlobalFunc_5029(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!GlobalFunc_5028(Var1))
									{
										if (Var1.f_2 >= (uParam0->f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
										{
											if (Var1.f_2 <= (uParam0->f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
											{
												if (GlobalFunc_342(Var1, uParam2) || uParam2->f_33 >= 2)
												{
													if ((uParam2->f_42 && !GlobalFunc_7663(&Var1, 0)) || uParam2->f_42 == 0)
													{
														Var1 = { GlobalFunc_6753(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_45) };
														if (!bVar12)
														{
															if (bVar11)
															{
																iVar0 = (iVar0 + -1);
															}
														}
														if (SYSTEM::VMAG(Var1) > 0f)
														{
															if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.x, Var1.f_1, 0f, *uParam0, uParam0->f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
															{
																if ((uParam2->f_12 && !GlobalFunc_7662(Var1, uVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, 1)) || !uParam2->f_12)
																{
																	if (!uParam2->f_15 || !GlobalFunc_9661(uParam2->f_35, &Var1, uParam2->f_38, uParam2->f_41, 0, 1))
																	{
																		if (uParam2->f_8)
																		{
																			iVar17 = uParam2->f_31;
																			bVar18 = true;
																			iVar19 = 1;
																			fVar20 = uParam2->f_43;
																			if (uParam2->f_17)
																			{
																				iVar17 = 0;
																				bVar18 = false;
																				iVar19 = 0;
																				if (uParam2->f_33 == 1)
																				{
																					fVar20 = (fVar20 * 0.375f);
																				}
																			}
																			else
																			{
																				bVar18 = true;
																				iVar19 = 1;
																				if (uParam2->f_28)
																				{
																					if (uParam2->f_33 == 1)
																					{
																						fVar20 = (fVar20 * 0.375f);
																					}
																				}
																			}
																			iVar21 = 0;
																			if (uParam2->f_3 > 7f)
																			{
																				if (GlobalFunc_8440(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																			}
																			else if (GlobalFunc_8440(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0) && !func_314(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																			{
																				iVar21 = 1;
																			}
																			if (iVar21 || uParam2->f_33 >= 2)
																			{
																				if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2)
																				{
																					if (uParam2->f_30)
																					{
																						if (Global_2408329.f_162 == 0)
																						{
																							Global_2408329[0 /*3*/] = { Var1 };
																							Global_2408329.f_121[0] = uVar4;
																						}
																						else
																						{
																							iVar16 = 0;
																							while (iVar16 < Global_2408329.f_162 + 1)
																							{
																								if (iVar16 < 40)
																								{
																									if (SYSTEM::VDIST2(Var1, *uParam0) < SYSTEM::VDIST2(Global_2408329[iVar16 /*3*/], *uParam0))
																									{
																										GlobalFunc_341(Var1, uVar4, iVar16);
																										iVar16 = Global_2408329.f_162 + 1;
																									}
																								}
																								iVar16++;
																							}
																						}
																						Global_2408329.f_162++;
																						if (Global_2408329.f_162 >= 5)
																						{
																							iVar0 = 100;
																						}
																					}
																					else
																					{
																						Global_2408329[Global_2408329.f_162 /*3*/] = { Var1 };
																						Global_2408329.f_121[Global_2408329.f_162] = uVar4;
																						Global_2408329.f_162++;
																						if (GlobalFunc_342(Var1, uParam2))
																						{
																							Global_2408329.f_163++;
																						}
																						if (Global_2408329.f_162 >= 10)
																						{
																							iVar0 = 100;
																						}
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = uVar4;
																					return;
																				}
																			}
																			else
																			{
																				iVar0++;
																			}
																		}
																		else
																		{
																			*uParam0 = { Var1 };
																			*uParam1 = uVar4;
																			return;
																		}
																	}
																}
																else
																{
																	iVar15++;
																}
															}
															else
															{
																iVar0 = 100;
															}
														}
													}
													else
													{
														iVar0++;
													}
												}
												else if (!uParam2->f_32)
												{
													iVar0 = 100;
												}
											}
											else
											{
												iVar0++;
											}
										}
										else
										{
											iVar0++;
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2408329.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2408329[0 /*3*/] };
						*uParam1 = Global_2408329.f_121[0];
						return;
					}
					else
					{
						if (Global_2408329.f_163 > 0 && !Global_2408329.f_163 == Global_2408329.f_162)
						{
							GlobalFunc_5026(0, uParam2);
						}
						iVar22 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2408329.f_162);
						Var23 = { Global_2408329[0 /*3*/] };
						uVar26 = Global_2408329.f_121[0];
						Global_2408329[0 /*3*/] = { Global_2408329[iVar22 /*3*/] };
						Global_2408329.f_121[0] = Global_2408329.f_121[iVar22];
						Global_2408329[iVar22 /*3*/] = { Var23 };
						Global_2408329.f_121[iVar22] = uVar26;
						*uParam0 = { Global_2408329[0 /*3*/] };
						*uParam1 = Global_2408329.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_324(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iVar15), (40 + iVar15));
						PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*uParam0, iVar0, &Var1, &uVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { GlobalFunc_6753(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_45) };
						Var27 = { Var1 };
						uVar30 = uVar4;
						if (GlobalFunc_9661(uParam2->f_35, &Var27, uParam2->f_38, uParam2->f_41, 1, 1) || GlobalFunc_7663(&Var27, 1))
						{
							if (!uParam2->f_44)
							{
								uParam2->f_33 = 0;
								uParam2->f_44 = 1;
								*uParam0 = { Var27 };
								*uParam1 = uVar30;
								func_324(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = uVar30;
								return;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = uVar30;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_324(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				GlobalFunc_8339(&Global_1312061, uParam0, uParam1, PLAYER::PLAYER_ID());
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2408329.f_164 = iVar8;
	}
}





























int func_353(var uParam0, var uParam1, var uParam2)//Position - 0x3CE78
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	struct<3> Var12;
	var uVar15;
	
	if (Global_2404548.f_1060 > 0)
	{
		iVar0 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (GlobalFunc_9661(uParam2->f_35, uParam0, uParam2->f_38, uParam2->f_41, 1, 1))
			{
			}
		}
		if (uParam2->f_42)
		{
			if (GlobalFunc_7663(uParam0, 1))
			{
			}
		}
		Global_2408329.f_162 = 0;
		Global_2408329.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2408329[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2408329.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404548.f_1060)
		{
			Var1 = { Global_2404548.f_1061[iVar0 /*4*/] };
			uVar4 = Global_2404548.f_1061[iVar0 /*4*/].f_3;
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				if ((uParam2->f_12 && !GlobalFunc_7662(Var1, uVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, 1)) || !uParam2->f_12)
				{
					if (!uParam2->f_15 || !GlobalFunc_9661(uParam2->f_35, &Var1, uParam2->f_38, uParam2->f_41, 0, 1))
					{
						if (uParam2->f_8)
						{
							iVar6 = uParam2->f_31;
							bVar7 = true;
							iVar8 = 1;
							fVar9 = uParam2->f_43;
							if (uParam2->f_17)
							{
								iVar6 = 0;
								bVar7 = false;
								iVar8 = 0;
								if (uParam2->f_33 == 1)
								{
									fVar9 = (fVar9 * 0.375f);
								}
							}
							else
							{
								bVar7 = true;
								iVar8 = 1;
								if (uParam2->f_28)
								{
									if (uParam2->f_33 == 1)
									{
										fVar9 = (fVar9 * 0.375f);
									}
								}
							}
							bVar10 = false;
							if (uParam2->f_3 > 7f)
							{
								if (GlobalFunc_8440(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0))
								{
									bVar10 = true;
								}
							}
							else if (GlobalFunc_8440(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0) && !func_314(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
							{
								bVar10 = true;
							}
							if (bVar10)
							{
								if (uParam2->f_29 || uParam2->f_30)
								{
									if (uParam2->f_30)
									{
										if (Global_2408329.f_162 == 0)
										{
											Global_2408329[0 /*3*/] = { Var1 };
											Global_2408329.f_121[0] = uVar4;
										}
										else
										{
											iVar5 = 0;
											while (iVar5 < Global_2408329.f_162 + 1)
											{
												if (iVar5 < 40)
												{
													if (SYSTEM::VDIST2(Var1, *uParam0) < SYSTEM::VDIST2(Global_2408329[iVar5 /*3*/], *uParam0))
													{
														GlobalFunc_341(Var1, uVar4, iVar5);
														iVar5 = Global_2408329.f_162 + 1;
													}
												}
												iVar5++;
											}
										}
										Global_2408329.f_162++;
										if (Global_2408329.f_162 >= 5)
										{
											iVar0 = 100;
										}
									}
									else
									{
										Global_2408329[Global_2408329.f_162 /*3*/] = { Var1 };
										Global_2408329.f_121[Global_2408329.f_162] = uVar4;
										Global_2408329.f_162++;
										if (Global_2408329.f_162 >= 10)
										{
											iVar0 = Global_2404548.f_1060;
										}
									}
								}
								else
								{
									*uParam0 = { Var1 };
									*uParam1 = uVar4;
									return 1;
								}
							}
						}
						else
						{
							*uParam0 = { Var1 };
							*uParam1 = uVar4;
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2408329.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2408329[0 /*3*/] };
				*uParam1 = Global_2408329.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2408329.f_163 > 0 && !Global_2408329.f_163 == Global_2408329.f_162)
				{
					GlobalFunc_5026(0, uParam2);
				}
				iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2408329.f_162);
				Var12 = { Global_2408329[0 /*3*/] };
				uVar15 = Global_2408329.f_121[0];
				Global_2408329[0 /*3*/] = { Global_2408329[iVar11 /*3*/] };
				Global_2408329.f_121[0] = Global_2408329.f_121[iVar11];
				Global_2408329[iVar11 /*3*/] = { Var12 };
				Global_2408329.f_121[iVar11] = uVar15;
				*uParam0 = { Global_2408329[0 /*3*/] };
				*uParam1 = Global_2408329.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_353(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_324(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}






















void func_375(int iParam0, int iParam1)//Position - 0x3DDFE
{
	GlobalFunc_6759(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/]));
	Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_652 = NETWORK::GET_CLOUD_TIME_AS_INT();
	func_265(iParam0, &(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/]), 0, iParam1, 0, 0);
}







void func_382(int iParam0)//Position - 0x3E584
{
	if (GlobalFunc_359(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_42)))
	{
		func_383(iParam0);
	}
}

void func_383(int iParam0)//Position - 0x3E5AA
{
	GlobalFunc_358(&(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/].f_42));
	func_265(iParam0, &(Global_2097152[GlobalFunc_177() /*8053*/][iParam0 /*111*/]), 0, -1, 0, 0);
}




































void func_419(int iParam0)//Position - 0x3F012
{
	bool bVar0;
	struct<2> Var1;
	
	bVar0 = false;
	if (GlobalFunc_5002(iParam0, &bVar0))
	{
		VEHICLE::SET_VEHICLE_FIXED(iParam0);
		GlobalFunc_378(iParam0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1);
		VEHICLE::SET_VEHICLE_LIGHTS(iParam0, 3);
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
		}
		GlobalFunc_5042(iParam0);
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) > -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam0, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
		{
			func_54(PLAYER::PLAYER_PED_ID(), iParam0, -1);
		}
		if (Global_1573687)
		{
			GlobalFunc_375(iParam0);
			VEHICLE::_0x5E569EC46EC21CAE(iParam0, 1);
		}
		if (Global_1573691)
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, 0);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iParam0));
	}
	if (bVar0)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
	Global_2404548.f_1376 = { Var1 };
}








int func_427(int iParam0)//Position - 0x3F2EE
{
	var uVar0;
	
	uVar0 = *iParam0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!func_428(&uVar0))
		{
			Global_2404548.f_1364 = *iParam0;
			return 1;
		}
	}
	*iParam0 = 0;
	return 0;
}

int func_428(var uParam0)//Position - 0x3F325
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!GlobalFunc_312(PLAYER::PLAYER_PED_ID(), *uParam0))
		{
			if (GlobalFunc_5045(uParam0))
			{
				if (!GlobalFunc_5044(*uParam0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam0))
					{
						if (!GlobalFunc_7824(ENTITY::GET_ENTITY_COORDS(*uParam0, 0), 10f, 1, 1, 0, 1, 1, 0) || !GlobalFunc_369())
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
							{
								if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(*uParam0))
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 1))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 0, 1);
										VEHICLE::DELETE_VEHICLE(uParam0);
										return 1;
									}
									else
									{
										*uParam0 = -1;
									}
								}
								else
								{
									*uParam0 = -1;
								}
							}
							else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 0))
							{
								VEHICLE::DELETE_VEHICLE(uParam0);
								return 1;
							}
							else
							{
								*uParam0 = -1;
							}
						}
						else
						{
							*uParam0 = -1;
						}
					}
					else if (GlobalFunc_380() && !GlobalFunc_369())
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*uParam0);
					}
					else
					{
						*uParam0 = -1;
					}
				}
				else
				{
					*uParam0 = -1;
				}
			}
			else
			{
				*uParam0 = -1;
			}
		}
	}
	return 0;
}





int func_433(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7)//Position - 0x3F4EC
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	if (!GlobalFunc_354(PLAYER::PLAYER_ID()) && !Global_2414009[PLAYER::PLAYER_ID() /*254*/] == 10)
	{
		return 0;
	}
	if (!Global_2404548.f_525 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_528) < GlobalFunc_429())
	{
		return 0;
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2404548.f_489)
	{
		if (!Global_2404548.f_483 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_488) < GlobalFunc_429())
			{
				return 0;
			}
			else
			{
				Global_2404548.f_483 = 0;
			}
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_486) > 30000)
	{
		Global_2404548.f_483 = 0;
	}
	if (Global_2404548.f_483 == 0)
	{
		Global_2404548.f_484 = 0;
		Global_2404548.f_485 = 0;
		Global_2404548.f_512 = 0;
		Global_2404548.f_486 = NETWORK::GET_NETWORK_TIME();
		Global_2404548.f_489 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2404548.f_483 = 1;
		Global_2404548.f_488 = NETWORK::GET_NETWORK_TIME();
		Global_2404548.f_1379 = uParam5;
		Global_2404548.f_1417 = 0;
		GlobalFunc_428();
	}
	switch (Global_2404548.f_483)
	{
		case 1:
			if (func_437(&(Global_2404548.f_492), iParam2, bParam3, iParam4, iParam6, uParam7))
			{
				if (iParam2 == 11 || Global_2404548.f_1379)
				{
					bVar0 = true;
				}
				else
				{
					Global_2404548.f_513 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
					GlobalFunc_8345(Global_2404548.f_492, Global_2404548.f_513);
					Global_2404548.f_510 = 0;
					Global_2404548.f_511 = 0;
					Global_2404548.f_487 = NETWORK::GET_NETWORK_TIME();
					Global_2404548.f_486 = NETWORK::GET_NETWORK_TIME();
					Global_2404548.f_483 = 2;
				}
			}
			break;
		
		case 2:
			if (Global_2404548.f_510)
			{
				if (Global_2404548.f_514 == Global_2404548.f_513)
				{
					if (Global_2404548.f_511 && !Global_2404548.f_512 == -1)
					{
						bVar0 = true;
					}
					else if (Global_2404548.f_484 < 7)
					{
						GlobalFunc_5046(&(Global_2404548.f_492));
						Global_2404548.f_484++;
						Global_2404548.f_1417++;
						Global_2404548.f_483 = 1;
					}
					else
					{
						Global_2404548.f_483 = 3;
					}
				}
				else
				{
					Global_2404548.f_510 = 0;
					Global_2404548.f_511 = 0;
					Global_2404548.f_512 = -1;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_487) > 3000 || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_487) < 0)
			{
				if (Global_2404548.f_485 < 3)
				{
					Global_2404548.f_485++;
					Global_2404548.f_483 = 1;
				}
				else
				{
					Global_2404548.f_483 = 3;
				}
			}
			break;
		
		case 3:
			if (func_437(&(Global_2404548.f_492), iParam2, bParam3, iParam4, iParam6, uParam7))
			{
				Global_2404548.f_483 = 4;
			}
			break;
		
		case 4:
			bVar0 = true;
			break;
	}
	Global_2404548.f_488 = NETWORK::GET_NETWORK_TIME();
	if (bVar0)
	{
		if (Global_2404548.f_404 == 8)
		{
			Global_2404548.f_1050 = Global_2404548.f_1049;
		}
		if (Global_2404548.f_512 == -1)
		{
			Global_2404548.f_512 = 0;
		}
		*uParam0 = { Global_2404548.f_492[Global_2404548.f_512 /*3*/] };
		*uParam1 = Global_2404548.f_492.f_10[Global_2404548.f_512];
		if (Global_2404548.f_37.f_28)
		{
			if (iParam2 == 3 && SYSTEM::VMAG(Global_2404548.f_37.f_25) > 0f)
			{
				if (bParam3)
				{
				}
				else
				{
					Var1 = { Global_2404548.f_37.f_25 - *uParam0 };
					*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
					if (Global_2404548.f_37.f_29)
					{
						*uParam1 = (*uParam1 + 180f);
					}
					Global_2404548.f_1368 = 1;
				}
			}
		}
		Global_2404548.f_1417 = 0;
		Global_2404548.f_483 = 0;
		GlobalFunc_428();
		return 1;
	}
	return 0;
}




int func_437(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5)//Position - 0x3F9B0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var16;
	int iVar19;
	int iVar20;
	struct<3> Var21;
	struct<18> Var24;
	var uVar42;
	struct<3> Var50;
	struct<3> Var53;
	struct<3> Var56;
	struct<3> Var59;
	struct<3> Var62[4];
	var uVar75[4];
	int iVar80[4];
	var uVar85[4];
	float fVar90;
	int iVar91;
	bool bVar92;
	int iVar93;
	int iVar94;
	float fVar95;
	float fVar96;
	float fVar97;
	var uVar98;
	struct<33> Var99;
	int iVar145;
	
	bVar2 = false;
	Var24 = 3;
	Var24.f_10 = 3;
	Var24.f_14 = 3;
	uVar42 = 3;
	uVar42.f_4 = 3;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
	{
		return 0;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_469) > 60000 || !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2404548.f_468)
	{
		Global_2404548.f_464 = 0;
		Global_2404548.f_466 = 0;
		Global_2404548.f_518 = 0;
		Global_2404548.f_519 = 0;
		Global_2404548.f_1204 = 0;
		Global_2404548.f_1205 = 0;
		Global_2404548.f_1203 = 0;
	}
	if (iParam1 == 13 || Global_2404548.f_404 == 13)
	{
		if (!Global_2404548.f_1204)
		{
			if (Global_2404548.f_1203 == 0)
			{
				if (GlobalFunc_7824(Global_2408512, 150f, 1, 1, 0, 0, 0, 0))
				{
					GlobalFunc_8348(Global_2408512);
					Global_2404548.f_1205 = 0;
					Global_2404548.f_1202 = NETWORK::GET_NETWORK_TIME();
					Global_2404548.f_1203 = 1;
				}
				else
				{
					Global_2404548.f_1205 = 1;
					Global_2404548.f_1204 = 1;
					Global_2404548.f_1203 = 2;
				}
			}
			if (Global_2404548.f_1203 == 1)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1202) > 4000 || Global_2404548.f_1205 == 0)
				{
					Global_2404548.f_1204 = 1;
					Global_2404548.f_1203 = 2;
				}
				else if (Global_2404548.f_1205 == 1)
				{
					Global_2404548.f_1204 = 1;
					Global_2404548.f_1203 = 2;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2404548.f_464 == 0)
	{
		GlobalFunc_427();
		Global_2404548.f_469 = NETWORK::GET_NETWORK_TIME();
		Global_2404548.f_468 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2404548.f_537 = 0;
		Global_2404548.f_420 = 0;
		Global_2404548.f_422 = { Global_2404548.f_37.f_25 };
		Global_2404548.f_422.f_3 = Global_2404548.f_37.f_31;
		Global_2404548.f_422.f_4 = Global_2404548.f_37.f_34;
		Global_2404548.f_440.f_16 = 1;
		Global_2404548.f_440.f_15 = Global_2404548.f_37.f_41;
		Global_2404548.f_465 = 0;
		Global_2404548.f_440.f_4 = 125f;
		Global_2404548.f_1368 = 0;
		Global_2404548.f_518 = 0;
		Global_2404548.f_519 = 0;
		Global_2404548.f_467 = 0;
		if (!Global_2404548.f_37.f_28)
		{
			Global_2404548.f_37.f_25 = { 0f, 0f, 0f };
		}
		Global_2404548.f_404 = iParam1;
		if (Global_2404548.f_404 == 0 || GlobalFunc_6678(PLAYER::PLAYER_ID(), 0))
		{
			Global_2404548.f_404 = GlobalFunc_7673();
		}
		if ((Global_2404548.f_37.f_41 && Global_2404548.f_37.f_240) && Global_2404548.f_404 == 16)
		{
			Global_2404548.f_404 = 5;
		}
		Global_2404548.f_1370 = 0;
		Global_2404548.f_473 = 0f;
		Global_2404548.f_37.f_240 = 0;
		if (GlobalFunc_7646(PLAYER::PLAYER_ID(), 1))
		{
			Global_2404548.f_440.f_17 = 1;
		}
		else
		{
			Global_2404548.f_440.f_17 = 0;
		}
		switch (Global_2404548.f_404)
		{
			case 9:
				func_536(&Global_1311923, &(Global_2404548.f_440), &(Global_2404548.f_440.f_3), 10f);
				bVar2 = true;
				break;
			
			case 8:
				if (!Global_2404548.f_546)
				{
					Global_2404548.f_546 = 1;
				}
				uVar42 = { GlobalFunc_9889(bParam2) };
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar0 == 0)
					{
						if (uVar42[iVar0] > -1)
						{
							Global_2404548.f_440 = { Global_2404548.f_548[uVar42[iVar0] /*5*/] };
							Global_2404548.f_440.f_3 = Global_2404548.f_548[uVar42[iVar0] /*5*/].f_3;
							Global_2404548.f_1049 = uVar42[0];
							bVar2 = true;
							iParam4 = 1;
						}
						else
						{
							Global_2404548.f_440 = { Global_2404548.f_548[0 /*5*/] };
							Global_2404548.f_440.f_3 = Global_2404548.f_548[0 /*5*/].f_3;
							Global_2404548.f_422.f_6 = 1;
							Global_2404548.f_440.f_4 = 150f;
						}
					}
					else if (uVar42[iVar0] > -1)
					{
						Var24[iVar0 /*3*/] = { Global_2404548.f_548[uVar42[iVar0] /*5*/] };
						Var24.f_10[iVar0] = Global_2404548.f_548[uVar42[iVar0] /*5*/].f_3;
					}
					iVar0++;
				}
				break;
			
			case 7:
				Global_2404548.f_440 = { 23.6269f, -17.1858f, 0.0025f };
				Global_2404548.f_440.f_3 = 0f;
				Global_2404548.f_1379 = 1;
				bVar2 = true;
				break;
			
			case 12:
				func_536(&Global_1311956, &(Global_2404548.f_440), &(Global_2404548.f_440.f_3), 1123024896);
				bVar2 = true;
				break;
			
			case 1:
				Var21 = { Global_2404548.f_417 };
				if (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_6 > 0)
				{
					iVar19 = Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_6;
					Var21 = { Global_1048995[iVar19 /*1425*/].f_3[0 /*3*/] };
				}
				if (Global_1600024 > -1)
				{
					if (GlobalFunc_252(Global_1600024, 0, 1))
					{
						if (GlobalFunc_8441(Global_1600024))
						{
							Global_2404548.f_422.f_13 = { GlobalFunc_271(Global_1600024) };
							if (!GlobalFunc_7646(PLAYER::PLAYER_ID(), 1))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1600024), 0))
								{
									Global_2404548.f_422.f_16 = 250f;
								}
								else
								{
									Global_2404548.f_422.f_16 = 125f;
								}
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1600024), 0))
							{
								Global_2404548.f_422.f_16 = 125f;
							}
							else
							{
								Global_2404548.f_422.f_16 = 75f;
							}
						}
					}
				}
				if (GlobalFunc_347(Var21, Global_2404548.f_422.f_13, Global_2404548.f_422.f_16, 1, 1))
				{
					GlobalFunc_345(&Var21, Global_2404548.f_422.f_13, Global_2404548.f_422.f_16, 1036831949, 0);
				}
				Global_2404548.f_440 = { Var21 };
				Global_2404548.f_440.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				if (Global_2404548.f_37.f_243 > -1f)
				{
					Global_2404548.f_422.f_5 = Global_2404548.f_37.f_243;
				}
				if (GlobalFunc_7646(PLAYER::PLAYER_ID(), 1))
				{
					Global_2404548.f_473 = Global_2404548.f_37.f_244;
				}
				else
				{
					Global_2404548.f_473 = 40f;
				}
				fVar12 = (Global_2404548.f_422.f_5 - 65f);
				if (fVar12 < 0f)
				{
					fVar12 = 0f;
				}
				if (GlobalFunc_7646(PLAYER::PLAYER_ID(), 1))
				{
					Global_2404548.f_440.f_4 = (120f + fVar12);
				}
				else
				{
					Global_2404548.f_440.f_4 = (135f + fVar12);
				}
				Global_2404548.f_440.f_4 = ((95f + Global_2404548.f_473) + fVar12);
				if (Global_2404548.f_440.f_4 > 250f)
				{
					Global_2404548.f_440.f_4 = 250f;
				}
				Global_2404548.f_470 = { Global_2404548.f_417 };
				fVar12 = (Global_2404548.f_440.f_4 * 0.5f);
				if (fVar12 < Global_2404548.f_422.f_5)
				{
					fVar12 = Global_2404548.f_422.f_5;
				}
				Var13 = { GlobalFunc_9068(Global_2404548.f_440, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2404548.f_440.f_2;
					Var16 = { Global_2404548.f_440 - Var13 };
					Var16 = { Var16 / FtoV(SYSTEM::VMAG(Var16)) };
					Var16 = { Var16 * Vector(fVar12, fVar12, fVar12) };
					Global_2404548.f_440 = { Global_2404548.f_440 + Var16 };
				}
				if (GlobalFunc_8984(&(Global_2404548.f_440), 1))
				{
				}
				if (GlobalFunc_8349())
				{
					Global_2404548.f_440.f_4 = 400f;
					Global_2404548.f_473 = 100f;
					bParam2 = true;
				}
				break;
			
			case 20:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var16 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				}
				else
				{
					Var16 = { Global_2404548.f_417 };
				}
				Global_2404548.f_470 = { Var16 };
				Global_2404548.f_473 = 125f;
				if (GlobalFunc_8984(&Var16, 1))
				{
				}
				if (Global_1573682)
				{
					if (GlobalFunc_252(Global_1573268.f_11, 0, 1))
					{
						Global_2404548.f_422.f_13 = { GlobalFunc_271(Global_1573268.f_11) };
						if (GlobalFunc_8349())
						{
							Global_2404548.f_422.f_16 = 250f;
						}
						else
						{
							Global_2404548.f_422.f_16 = 125f;
						}
					}
				}
				if (GlobalFunc_347(Var16, Global_2404548.f_422.f_13, Global_2404548.f_422.f_16, 1, 1))
				{
					GlobalFunc_345(&Var16, Global_2404548.f_422.f_13, Global_2404548.f_422.f_16, 1036831949, 0);
				}
				Global_2404548.f_440 = { Var16 };
				Global_2404548.f_440.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2404548.f_440.f_4 = 250f;
				if (Global_2404548.f_422.f_3)
				{
					if (!INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Global_2404548.f_417)))
					{
						Global_2404548.f_422.f_3 = 0;
					}
				}
				if (GlobalFunc_8349())
				{
					Global_2404548.f_440.f_4 = 400f;
					Global_2404548.f_473 = 100f;
					bParam2 = true;
				}
				break;
			
			case 2:
				Global_2404548.f_440 = { GlobalFunc_5065() };
				Global_2404548.f_440.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			
			case 26:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					iVar9 = GlobalFunc_5064(GlobalFunc_271(PLAYER::PLAYER_ID()));
				}
				else
				{
					iVar9 = GlobalFunc_5064(Global_2404548.f_417);
				}
				GlobalFunc_422(&(Global_2404548.f_37[iVar9 /*12*/]));
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Global_2404548.f_440.f_18 = { GlobalFunc_271(PLAYER::PLAYER_ID()) };
				}
				else
				{
					Global_2404548.f_440.f_18 = { Global_2404548.f_417 };
				}
				if (GlobalFunc_7646(PLAYER::PLAYER_ID(), 1))
				{
					Global_2404548.f_473 = Global_2404548.f_37.f_244;
				}
				else
				{
					Global_2404548.f_473 = 40f;
				}
				Global_2404548.f_470 = { Global_2404548.f_440.f_18 };
				Var50 = { Global_2404548.f_440.f_18 };
				switch (Global_2404548.f_37[iVar9 /*12*/].f_10)
				{
					case 0:
						fVar90 = Global_2404548.f_37[iVar9 /*12*/].f_6;
						fVar90 = (fVar90 * 0.5f);
						break;
					
					case 1:
						fVar90 = SYSTEM::VMAG(Global_2404548.f_37[iVar9 /*12*/] - Global_2404548.f_37[iVar9 /*12*/].f_3);
						fVar90 = (fVar90 * 0.5f);
						fVar90 = (fVar90 * 0.5f);
						break;
					
					case 2:
						fVar90 = Global_2404548.f_37[iVar9 /*12*/].f_6;
						fVar90 = (fVar90 * 0.5f);
						fVar90 = (fVar90 * 0.5f);
						break;
				}
				if (!GlobalFunc_5031(Var50, &(Global_2404548.f_37[iVar9 /*12*/]), 1008981770, 0, 0))
				{
					GlobalFunc_6769(&Var50, &(Global_2404548.f_37[iVar9 /*12*/]), fVar90);
				}
				if (Global_2404548.f_37.f_243 > -1f)
				{
					Global_2404548.f_422.f_5 = Global_2404548.f_37.f_243;
				}
				fVar96 = (Global_2404548.f_422.f_5 * 1.5f);
				iVar91 = GlobalFunc_9067(Var50, fVar96, &uVar98);
				if (iVar91 > 0 || Global_2404548.f_440.f_15)
				{
					if (Global_2404548.f_440.f_15)
					{
						Var50 = { GlobalFunc_9888(Var50, Global_2404548.f_37[iVar9 /*12*/], Global_2404548.f_37[iVar9 /*12*/].f_3, Global_2404548.f_37[iVar9 /*12*/].f_6, Global_2404548.f_37[iVar9 /*12*/].f_10, fVar96) };
						Global_2404548.f_473 = 0f;
						fVar97 = 40f;
					}
					else
					{
						bVar92 = false;
						Var53 = { GlobalFunc_9066(Var50, fVar96) };
						Var56 = { GlobalFunc_9065(Var50, fVar96) };
						Var59 = { Var50 - Var53 };
						Var59 = { Var59 / FtoV(SYSTEM::VMAG(Var59)) };
						Var59 = { Var59 * Vector(fVar96, fVar96, fVar96) };
						iVar0 = 0;
						while (iVar0 < 4)
						{
							Var16 = { Var59 };
							GlobalFunc_251(&Var16, 0f, 0f, (SYSTEM::TO_FLOAT(iVar0) * 90f));
							Var62[iVar0 /*3*/] = { Var53 + Var16 };
							if (!GlobalFunc_5031(Var62[iVar0 /*3*/], &(Global_2404548.f_37[iVar9 /*12*/]), 1008981770, 0, 0))
							{
								GlobalFunc_6769(&(Var62[iVar0 /*3*/]), &(Global_2404548.f_37[iVar9 /*12*/]), 1036831949);
							}
							uVar75[iVar0] = GlobalFunc_9067(Var62[iVar0 /*3*/], fVar96, &(uVar85[iVar0]));
							Var16 = { Var53 - Var62[iVar0 /*3*/] };
							if (GlobalFunc_168(Var16, Var56) < 0f)
							{
								iVar80[iVar0] = 1;
							}
							else
							{
								iVar80[iVar0] = 0;
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if ((uVar75[iVar0] == 0 && iVar80[iVar0] == 0) && !bVar92)
							{
								Var50 = { Var62[iVar0 /*3*/] };
								bVar92 = true;
							}
							iVar0++;
						}
						if (!bVar92)
						{
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar75[iVar0] == 0 && !bVar92)
								{
									Var50 = { Var62[iVar0 /*3*/] };
									bVar92 = true;
								}
								iVar0++;
							}
						}
						if (!bVar92)
						{
							iVar93 = 999;
							iVar94 = -1;
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar75[iVar0] < iVar93)
								{
									iVar94 = iVar0;
									fVar95 = uVar85[iVar0];
									iVar93 = uVar75[iVar0];
								}
								else if (uVar75[iVar0] == iVar93)
								{
									if (uVar85[iVar0] > fVar95)
									{
										fVar95 = uVar85[iVar0];
										iVar94 = iVar0;
									}
								}
								iVar0++;
							}
							if (!iVar94 == -1 && iVar93 < iVar91)
							{
								Var50 = { Var62[iVar94 /*3*/] };
								bVar92 = true;
							}
						}
						if (!bVar92)
						{
						}
						else
						{
							Global_2404548.f_473 = 0f;
						}
					}
				}
				Global_2404548.f_440.f_18 = { Var50 };
				Global_2404548.f_440.f_21 = 1;
				Global_2404548.f_422.f_6 = 1;
				Global_2404548.f_440.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			
			case 3:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, GlobalFunc_419());
				GlobalFunc_422(&(Global_2404548.f_37[iVar0 /*12*/]));
				if (GlobalFunc_8341(&(Global_2404548.f_440), 0, 0, 0))
				{
					Global_2404548.f_420 = 1;
				}
				break;
			
			case 15:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var21 = { Global_2404548.f_417 };
				}
				else
				{
					Var21 = { GlobalFunc_271(PLAYER::PLAYER_ID()) };
				}
				if (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_6 > 0)
				{
					iVar19 = Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_6;
					Var21 = { Global_1048995[iVar19 /*1425*/].f_3[0 /*3*/] };
				}
				fVar10 = GlobalFunc_418(Var21, &Global_2406393, &iVar7);
				if (GlobalFunc_5062(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 3)
					{
						iVar19 = GlobalFunc_5062(iVar0, -1);
						if (Global_1048995[iVar19 /*1425*/].f_34 == 0)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var21, Global_1048995[iVar19 /*1425*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var21, Global_1048995[iVar19 /*1425*/].f_3[0 /*3*/]);
								iVar8 = iVar19;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1048995[iVar8 /*1425*/].f_34)
					{
						case 0:
							GlobalFunc_7672(iVar8, &(Global_2404548.f_440), &(Global_2404548.f_440.f_3));
							Global_2404548.f_1372 = 0;
							break;
						
						case 1:
							Global_2404548.f_440 = { Global_1048995[iVar8 /*1425*/].f_1262.f_20 };
							Global_2404548.f_440.f_3 = Global_1048995[iVar8 /*1425*/].f_1262.f_23;
							if (Global_2404548.f_484 == 0)
							{
								Global_2404548.f_1372 = 1;
							}
							Global_2404548.f_1379 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2404548.f_484 == 0)
					{
						Global_2404548.f_1371 = 1;
					}
					Global_2404548.f_1370 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						GlobalFunc_422(&(Global_2406393[iVar7 /*12*/]));
					}
					else
					{
						GlobalFunc_422(&(Global_2406393[0 /*12*/]));
					}
					Global_2404548.f_1378 = 1;
				}
				Global_2404548.f_537 = 1;
				break;
			
			case 23:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var21 = { Global_2404548.f_417 };
				}
				else
				{
					Var21 = { GlobalFunc_271(PLAYER::PLAYER_ID()) };
				}
				fVar10 = GlobalFunc_418(Var21, &Global_2406393, &iVar7);
				if (iVar7 > -1)
				{
					GlobalFunc_422(&(Global_2406393[iVar7 /*12*/]));
				}
				else
				{
					GlobalFunc_422(&(Global_2406393[0 /*12*/]));
				}
				Global_2404548.f_1378 = 1;
				Global_2404548.f_537 = 1;
				break;
			
			case 25:
				Var21 = { Global_2408512 };
				fVar11 = GlobalFunc_418(Var21, &Global_2406539, &iVar8);
				if (iVar8 > -1)
				{
					GlobalFunc_422(&(Global_2406539[iVar8 /*12*/]));
				}
				else
				{
					GlobalFunc_422(&(Global_2406539[0 /*12*/]));
				}
				Global_2404548.f_537 = 1;
				break;
			
			case 24:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var21 = { Global_2404548.f_417 };
				}
				else
				{
					Var21 = { GlobalFunc_271(PLAYER::PLAYER_ID()) };
				}
				fVar10 = GlobalFunc_418(Var21, &Global_2406454, &iVar7);
				if (iVar7 > -1)
				{
					GlobalFunc_422(&(Global_2406454[iVar7 /*12*/]));
				}
				else
				{
					GlobalFunc_422(&(Global_2406454[0 /*12*/]));
				}
				Global_2404548.f_537 = 1;
				break;
			
			case 22:
				Var21 = { Global_2408512 };
				fVar10 = GlobalFunc_418(Var21, &Global_2406393, &iVar7);
				if (GlobalFunc_5062(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 3)
					{
						iVar19 = GlobalFunc_5062(iVar0, -1);
						if (Global_1048995[iVar19 /*1425*/].f_34 == 0)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var21, Global_1048995[iVar19 /*1425*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var21, Global_1048995[iVar19 /*1425*/].f_3[0 /*3*/]);
								iVar8 = iVar19;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1048995[iVar8 /*1425*/].f_34)
					{
						case 0:
							GlobalFunc_7672(iVar8, &(Global_2404548.f_440), &(Global_2404548.f_440.f_3));
							Global_2404548.f_1372 = 0;
							break;
						
						case 1:
							if (Global_2404548.f_484 == 0)
							{
								Global_2404548.f_1372 = 1;
							}
							Global_2404548.f_440 = { Global_1048995[iVar8 /*1425*/].f_1262.f_20 };
							Global_2404548.f_440.f_3 = Global_1048995[iVar8 /*1425*/].f_1262.f_23;
							Global_2404548.f_1379 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2404548.f_484 == 0)
					{
						Global_2404548.f_1371 = 1;
					}
					Global_2404548.f_1370 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						GlobalFunc_422(&(Global_2406393[iVar7 /*12*/]));
					}
					else
					{
						GlobalFunc_422(&(Global_2406393[0 /*12*/]));
					}
					Global_2404548.f_1378 = 1;
				}
				Global_2404548.f_537 = 1;
				break;
			
			case 17:
				if (Global_2408497 > 0)
				{
					iVar20 = Global_2408497;
				}
				else
				{
					iVar20 = GlobalFunc_7671();
				}
				Global_2408497 = 0;
				if (!iVar20 > 0)
				{
				}
				iVar19 = iVar20;
				Global_2404548.f_440 = { Global_1048995[iVar19 /*1425*/].f_1262.f_20 };
				Global_2404548.f_440.f_3 = Global_1048995[iVar19 /*1425*/].f_1262.f_23;
				Global_2404548.f_1379 = 1;
				bVar2 = true;
				Global_2404548.f_537 = 1;
				if (Global_2404548.f_484 == 0)
				{
					Global_2404548.f_1372 = 1;
				}
				if (Global_2404548.f_484 == 0)
				{
					Global_2404548.f_1371 = 1;
				}
				Global_2404548.f_1370 = 1;
				break;
			
			case 18:
				if (Global_2408497 > 0)
				{
					iVar20 = Global_2408497;
				}
				else
				{
					iVar20 = GlobalFunc_7671();
				}
				Global_2408497 = 0;
				if (iVar20 <= 0)
				{
				}
				iVar19 = iVar20;
				switch (Global_1048995[iVar19 /*1425*/].f_34)
				{
					case 0:
						GlobalFunc_7672(iVar19, &(Global_2404548.f_440), &(Global_2404548.f_440.f_3));
						Global_2404548.f_1372 = 0;
						break;
					
					case 1:
						if (Global_2404548.f_484 == 0)
						{
							Global_2404548.f_1372 = 1;
						}
						Global_2404548.f_440 = { Global_1048995[iVar19 /*1425*/].f_1262.f_20 };
						Global_2404548.f_440.f_3 = Global_1048995[iVar19 /*1425*/].f_1262.f_23;
						Global_2404548.f_1379 = 1;
						break;
				}
				bVar2 = true;
				Global_2404548.f_537 = 1;
				if (Global_2404548.f_484 == 0)
				{
					Global_2404548.f_1371 = 1;
				}
				Global_2404548.f_1370 = 1;
				break;
			
			case 19:
				iVar20 = GlobalFunc_7671();
				if (iVar20 <= 0)
				{
				}
				if (iVar20 > 72)
				{
					iVar20 = Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_680;
				}
				if (iVar20 > 72)
				{
					iVar20 = 0;
				}
				iVar19 = iVar20;
				switch (Global_1048995[iVar19 /*1425*/].f_34)
				{
					case 0:
						switch (GlobalFunc_414())
						{
							case 4:
								Global_2404548.f_440 = { Global_1048995[iVar19 /*1425*/].f_146.f_74[4 /*96*/] };
								Global_2404548.f_440.f_3 = Global_1048995[iVar19 /*1425*/].f_146.f_74[4 /*96*/].f_3;
								break;
							
							case 5:
								Global_2404548.f_440 = { Global_1048995[iVar19 /*1425*/].f_146.f_74[1 /*96*/] };
								Global_2404548.f_440.f_3 = Global_1048995[iVar19 /*1425*/].f_146.f_74[1 /*96*/].f_3;
								break;
							
							default:
								GlobalFunc_7672(iVar20, &(Global_2404548.f_440), &(Global_2404548.f_440.f_3));
								break;
						}
						Global_2404548.f_1372 = 0;
						break;
					
					case 1:
						if (Global_2404548.f_484 == 0)
						{
							Global_2404548.f_1372 = 1;
						}
						Global_2404548.f_440 = { Global_1048995[iVar19 /*1425*/].f_1262.f_20 };
						Global_2404548.f_440.f_3 = Global_1048995[iVar19 /*1425*/].f_1262.f_23;
						Global_2404548.f_1379 = 1;
						break;
				}
				MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4), 4);
				bVar2 = true;
				Global_2404548.f_537 = 1;
				if (Global_2404548.f_484 == 0)
				{
					Global_2404548.f_1371 = 1;
				}
				Global_2404548.f_1370 = 1;
				break;
			
			case 4:
				if (!NETWORK::_0xFB1F9381E80FA13F(0, &(Global_2404548.f_440)))
				{
					Global_2404548.f_440 = { GlobalFunc_5060() };
					Global_2404548.f_440 = { GlobalFunc_5059(Global_2404548.f_440, 50f, 25f) };
				}
				Global_2404548.f_440.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			
			case 5:
				Global_2404548.f_440 = { GlobalFunc_271(PLAYER::PLAYER_ID()) };
				Global_2404548.f_470 = { Global_2404548.f_440 };
				Global_2404548.f_473 = 20f;
				Global_2404548.f_440.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2404548.f_422.f_6 = 1;
				Global_2404548.f_440.f_4 = 150f;
				break;
			
			case 21:
				Global_2404548.f_440 = { GlobalFunc_5058(GlobalFunc_271(PLAYER::PLAYER_ID()), 200f) };
				Global_2404548.f_470 = { Global_2404548.f_440 };
				Global_2404548.f_473 = 0f;
				Global_2404548.f_440.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2404548.f_422.f_6 = 0;
				Global_2404548.f_440.f_4 = 150f;
				break;
			
			case 6:
				Global_2404548.f_440 = { GlobalFunc_271(PLAYER::PLAYER_ID()) };
				Global_2404548.f_440.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			
			case 14:
				if (!Global_2408512.f_10)
				{
				}
				else
				{
					Global_2404548.f_440 = { 0f, 0f, 0f };
					Global_2404548.f_440.f_3 = 0f;
					Global_2404548.f_440.f_4 = 0f;
					Global_2404548.f_440.f_7 = 1;
					Global_2404548.f_440.f_8 = { Global_2408512.f_11 };
					Global_2404548.f_440.f_11 = { Global_2408512.f_14 };
					Global_2404548.f_440.f_14 = Global_2408512.f_17;
					Global_2404548.f_470 = { 0f, 0f, 0f };
					Global_2404548.f_473 = 0f;
					Global_2404548.f_422.f_6 = Global_2408512.f_22;
					if (SYSTEM::VMAG(Global_2408512.f_18) > 0f)
					{
						Global_2404548.f_422 = { Global_2408512.f_18 };
					}
					else
					{
						Global_2404548.f_422 = { Global_2408512.f_11 + Global_2408512.f_14 / Vector(2f, 2f, 2f) };
					}
					Global_2404548.f_422.f_4 = Global_2408512.f_8;
					Global_2404548.f_422.f_3 = Global_2408512.f_9;
					Global_2404548.f_440.f_16 = Global_2408512.f_7;
					Global_2404548.f_422.f_5 = Global_2408512.f_21;
					Global_2404548.f_440.f_22 = Global_2408512.f_23;
				}
				break;
			
			case 10:
				if (Global_2408512.f_10)
				{
				}
				else
				{
					Global_2404548.f_440 = { Global_2408512 };
					Global_2404548.f_440.f_3 = Global_2408512.f_5;
					Global_2404548.f_440.f_4 = Global_2408512.f_4;
					Global_2404548.f_440.f_7 = 0;
					Global_2404548.f_440.f_8 = { 0f, 0f, 0f };
					Global_2404548.f_440.f_11 = { 0f, 0f, 0f };
					Global_2404548.f_440.f_14 = 0f;
					Global_2404548.f_470 = { Global_2404548.f_440 };
					Global_2404548.f_473 = Global_2408512.f_3;
					Global_2404548.f_422.f_6 = Global_2408512.f_22;
					Global_2404548.f_422 = { Global_2408512 };
					Global_2404548.f_422.f_4 = Global_2408512.f_8;
					Global_2404548.f_422.f_3 = Global_2408512.f_9;
					Global_2404548.f_440.f_16 = Global_2408512.f_7;
					Global_2404548.f_422.f_5 = Global_2408512.f_21;
					Global_2404548.f_440.f_22 = Global_2408512.f_23;
				}
				break;
			
			case 16:
				if (Global_2404548.f_405.f_3 && !GlobalFunc_9064(Global_2408512))
				{
					Global_2404548.f_440 = { GlobalFunc_9887() };
					Global_2404548.f_440.f_3 = Global_2408512.f_5;
					Global_2404548.f_440.f_4 = Global_2408512.f_4;
					bVar2 = true;
					bParam2 = false;
					Global_2404548.f_1379 = 1;
				}
				else
				{
					Global_2404548.f_440 = { Global_2408512 };
					Global_2404548.f_440.f_3 = Global_2408512.f_5;
					Global_2404548.f_440.f_4 = Global_2408512.f_4;
					bVar2 = true;
					bParam2 = false;
					if (!Global_2404548.f_405.f_3)
					{
						Global_2404548.f_1379 = 1;
					}
				}
				break;
			
			case 11:
				if (Global_2408512.f_10)
				{
				}
				else
				{
					Global_2404548.f_440 = { Global_2408512 };
					Global_2404548.f_440.f_3 = Global_2408512.f_5;
					Global_2404548.f_440.f_4 = Global_2408512.f_4;
					Global_2404548.f_1379 = 1;
					bVar2 = true;
					bParam2 = false;
				}
				break;
			
			case 13:
				if (Global_2408512.f_10)
				{
				}
				else if (Global_2404548.f_1205 == 1)
				{
					Global_2404548.f_440 = { Global_2408512 };
					Global_2404548.f_440.f_3 = Global_2408512.f_5;
					Global_2404548.f_440.f_4 = Global_2408512.f_4;
					bVar2 = true;
				}
				else
				{
					Global_2404548.f_440 = { Global_2408512 };
					Global_2404548.f_440.f_3 = Global_2408512.f_5;
					Global_2404548.f_440.f_4 = Global_2408512.f_4;
					Global_2404548.f_470 = { Global_2404548.f_440 };
					if (Global_2408512.f_3 < (Global_2408512.f_4 / 2f))
					{
						Global_2404548.f_473 = (Global_2408512.f_4 / 2f);
					}
					else
					{
						Global_2404548.f_473 = Global_2408512.f_3;
					}
					Global_2404548.f_422.f_6 = 1;
				}
				if (GlobalFunc_8341(&(Global_2404548.f_440), 0, 0, 0))
				{
					Global_2404548.f_420 = 1;
				}
				break;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (GlobalFunc_8979())
			{
				Global_2404548.f_464 = 4;
			}
			else
			{
				Global_2404548.f_464 = 3;
			}
		}
		else if (bVar2)
		{
			Var24[0 /*3*/] = { Global_2404548.f_440 };
			Var24.f_10[0] = Global_2404548.f_440.f_3;
			Global_2404548.f_464 = 0;
			Global_2404548.f_466 = 0;
			Global_2404548.f_518 = 0;
			Global_2404548.f_519 = 0;
			Global_2404548.f_1204 = 0;
			Global_2404548.f_1205 = 0;
			Global_2404548.f_1203 = 0;
			*uParam0 = { Var24 };
			return 1;
		}
		else
		{
			GlobalFunc_9665();
		}
	}
	if (Global_2404548.f_464 == 3)
	{
		if (bParam2)
		{
			if (!Global_2404548.f_440.f_7)
			{
				fVar3 = (Global_2404548.f_440 - Global_2404548.f_440.f_4);
				fVar5 = (Global_2404548.f_440.f_1 - Global_2404548.f_440.f_4);
				fVar4 = (Global_2404548.f_440 + Global_2404548.f_440.f_4);
				fVar6 = (Global_2404548.f_440.f_1 + Global_2404548.f_440.f_4);
			}
			else
			{
				if (Global_2404548.f_440.f_8 < Global_2404548.f_440.f_11)
				{
					fVar3 = (Global_2404548.f_440.f_8 - (0.5f * Global_2404548.f_440.f_14));
					fVar4 = (Global_2404548.f_440.f_11 + (0.5f * Global_2404548.f_440.f_14));
				}
				else
				{
					fVar3 = (Global_2404548.f_440.f_11 - (0.5f * Global_2404548.f_440.f_14));
					fVar4 = (Global_2404548.f_440.f_8 + (0.5f * Global_2404548.f_440.f_14));
				}
				if (Global_2404548.f_440.f_8.f_1 < Global_2404548.f_440.f_11.f_1)
				{
					fVar5 = (Global_2404548.f_440.f_8.f_1 - (0.5f * Global_2404548.f_440.f_14));
					fVar6 = (Global_2404548.f_440.f_11.f_1 + (0.5f * Global_2404548.f_440.f_14));
				}
				else
				{
					fVar5 = (Global_2404548.f_440.f_11.f_1 - (0.5f * Global_2404548.f_440.f_14));
					fVar6 = (Global_2404548.f_440.f_8.f_1 + (0.5f * Global_2404548.f_440.f_14));
				}
			}
		}
		PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(fVar3, fVar5, fVar4, fVar6);
		if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar3, fVar5, fVar4, fVar6))
		{
			if (Global_2404548.f_440.f_21)
			{
				Var24[0 /*3*/] = { Global_2404548.f_440.f_18 };
				Var24.f_10[0] = Global_2404548.f_440.f_3;
			}
			else
			{
				Var24[0 /*3*/] = { Global_2404548.f_440 };
				Var24.f_10[0] = Global_2404548.f_440.f_3;
			}
			Var99.f_6 = 1082130432;
			Var99.f_7 = 1176255488;
			Var99.f_8 = 1;
			Var99.f_10 = 1;
			Var99.f_13 = 1;
			Var99.f_15 = 1;
			Var99.f_16 = 1;
			Var99.f_31 = 1;
			Var99.f_34 = joaat("tailgater");
			Var99.f_43 = 1123024896;
			Var99 = { Global_2404548.f_422 };
			Var99.f_4 = Global_2404548.f_473;
			Var99.f_12 = bParam2;
			Var99.f_3 = Global_2404548.f_422.f_5;
			Var99.f_5 = fVar97;
			Var99.f_18 = 1;
			if (Global_2404548.f_440.f_7)
			{
				Var99.f_26 = 1;
				Var99.f_19 = { Global_2404548.f_440.f_8 };
				Var99.f_22 = { Global_2404548.f_440.f_11 };
				Var99.f_25 = Global_2404548.f_440.f_14;
			}
			else
			{
				Var99.f_26 = 0;
				Var99.f_19 = { Global_2404548.f_440 };
				Var99.f_25 = Global_2404548.f_440.f_4;
				Var99.f_4 = 0f;
			}
			if ((GlobalFunc_413() && GlobalFunc_8349()) && GlobalFunc_8341(&(Global_2404548.f_417), 0, 0, 0))
			{
				Var99.f_10 = 0;
			}
			Var99.f_9 = uParam5;
			Var99.f_11 = GlobalFunc_8978();
			if (Global_2404548.f_422.f_6)
			{
				Var99.f_30 = 1;
				Var99.f_29 = 0;
			}
			else
			{
				Var99.f_30 = 0;
				Var99.f_29 = 1;
			}
			if (Global_2404548.f_404 == 3)
			{
				Var99.f_28 = 1;
				Var99.f_29 = 1;
				Var99.f_30 = 0;
			}
			else if (Global_2404548.f_404 == 26)
			{
				Var99.f_28 = 1;
				Var99.f_30 = 1;
				Var99.f_29 = 0;
				Var99.f_32 = 1;
			}
			if (Global_2404548.f_404 == 1)
			{
				Var99.f_7 = 15f;
			}
			func_324(&(Var24[0 /*3*/]), &(Var24.f_10[0]), &Var99);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (iVar0 < Global_2408329.f_162 && iVar0 > 0)
				{
					Var24[iVar0 /*3*/] = { Global_2408329[iVar0 /*3*/] };
					Var24.f_10[iVar0] = Global_2408329.f_121[iVar0];
				}
				iVar0++;
			}
			if (Var99.f_11 && Var99.f_27)
			{
				Global_2404548.f_37.f_240 = 1;
			}
			else
			{
				Global_2404548.f_37.f_240 = 0;
			}
			Global_2404548.f_467++;
			Global_2404548.f_465 = 3;
			Global_2404548.f_464 = 5;
		}
	}
	if (Global_2404548.f_464 == 4)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2404548.f_440.f_7)
			{
				Var24[iVar0 /*3*/] = { GlobalFunc_10657(Global_2404548.f_440.f_8, Global_2404548.f_440.f_11, Global_2404548.f_440.f_14, 1) };
			}
			else
			{
				Var24[iVar0 /*3*/] = { GlobalFunc_10657(Global_2404548.f_440, 0f, 0f, 0f, Global_2404548.f_440.f_4, 0) };
			}
			if (SYSTEM::VMAG(Global_2404548.f_422) > 0f)
			{
				Var21 = { Global_2404548.f_422 - Var24[iVar0 /*3*/] };
				Var24.f_10[iVar0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var21.x, Var21.f_1);
			}
			iVar0++;
		}
		Global_2404548.f_37.f_240 = 0;
		Global_2404548.f_467++;
		Global_2404548.f_465 = 4;
		Global_2404548.f_464 = 5;
	}
	if (Global_2404548.f_464 == 5)
	{
		if (Global_2404548.f_404 == 11 && Global_2404548.f_37.f_35 > 0f)
		{
			if (SYSTEM::VDIST(Var24[0 /*3*/], Global_2404548.f_37.f_36) > SYSTEM::VDIST(Global_2408512, Global_2404548.f_37.f_36))
			{
				Var24[0 /*3*/] = { Global_2408512 };
				Var24.f_10[0] = Global_2408512.f_5;
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if ((GlobalFunc_410(Global_2404548.f_404) && !GlobalFunc_6758(Var24[iVar0 /*3*/], 0.01f)) && !GlobalFunc_8979())
			{
				if (iVar0 == 2 || SYSTEM::VMAG(Var24[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2404548.f_465 == 4 || Global_2404548.f_465 == 3) && Global_2404548.f_467 < 2)
					{
						Global_2404548.f_464 = Global_2404548.f_465;
						iVar0 = 3;
					}
					else
					{
						GlobalFunc_9665();
					}
				}
			}
			else if ((GlobalFunc_7824(Var24[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0) || GlobalFunc_7661(Var24[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2404548.f_37.f_240)
			{
				if (iVar0 == 2 || SYSTEM::VMAG(Var24[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2404548.f_465 == 4 || Global_2404548.f_465 == 3) && Global_2404548.f_467 < 2)
					{
						Global_2404548.f_464 = Global_2404548.f_465;
						iVar0 = 3;
					}
					else
					{
						GlobalFunc_9665();
					}
				}
			}
			else
			{
				iVar145 = 0;
				while (iVar145 < 3)
				{
					if ((iVar0 + iVar145) < 3)
					{
						Var24[iVar145 /*3*/] = { Var24[(iVar0 + iVar145) /*3*/] };
						Var24.f_10[iVar145] = Var24.f_10[(iVar0 + iVar145)];
						Var24.f_14[iVar145] = Var24.f_14[(iVar0 + iVar145)];
					}
					else
					{
						Var24[iVar145 /*3*/] = { 0f, 0f, 0f };
						Var24.f_10[iVar145] = 0f;
						Var24.f_14[iVar145] = 0;
					}
					iVar145++;
				}
				Global_2404548.f_464 = 2;
				iVar0 = 3;
			}
			iVar0++;
		}
	}
	if (Global_2404548.f_464 == 6)
	{
		if (Global_2404548.f_466 == 2 || Global_2404548.f_440.f_16 == 0)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = iParam3;
		}
		if (Global_2404548.f_422.f_5 > (Global_2404548.f_440.f_4 * 2f))
		{
			Global_2404548.f_422.f_5 = (Global_2404548.f_440.f_4 * 2f);
		}
		Global_2404548.f_440.f_5 = 1;
		Global_2404548.f_440.f_6 = iVar1;
		Global_2404548.f_440.f_15 = Global_2404548.f_37.f_41;
		Global_2404548.f_422.f_8 = 0;
		Global_2404548.f_422.f_9 = GlobalFunc_8978();
		Global_2404548.f_422.f_10 = 0;
		if (func_438(&(Global_2404548.f_440), &(Global_2404548.f_422), &Var24))
		{
			Global_2404548.f_416 = 0;
			Global_2404548.f_464 = 2;
		}
	}
	if (Global_2404548.f_464 == 2)
	{
		*uParam0 = { Var24 };
		Global_2404548.f_464 = 0;
		Global_2404548.f_466 = 0;
		Global_2404548.f_518 = 0;
		Global_2404548.f_519 = 0;
		Global_2404548.f_1204 = 0;
		Global_2404548.f_1205 = 0;
		Global_2404548.f_1203 = 0;
		return 1;
	}
	return 0;
}

int func_438(var uParam0, var uParam1, var uParam2)//Position - 0x41E21
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	bool bVar18;
	struct<46> Var19;
	bool bVar65;
	
	bVar18 = false;
	if (!uParam0->f_7)
	{
		if (((!Global_2404548.f_1192 == *uParam0 || !Global_2404548.f_1192.f_1 == uParam0->f_1) || !Global_2404548.f_1192.f_2 == uParam0->f_2) || !Global_2404548.f_1195 == uParam0->f_4)
		{
			bVar18 = true;
		}
	}
	else if ((((((!Global_2404548.f_1206 == uParam0->f_8 || !Global_2404548.f_1206.f_1 == uParam0->f_8.f_1) || !Global_2404548.f_1206.f_2 == uParam0->f_8.f_2) || !Global_2404548.f_1209 == uParam0->f_11) || !Global_2404548.f_1209.f_1 == uParam0->f_11.f_1) || !Global_2404548.f_1209.f_2 == uParam0->f_11.f_2) || !Global_2404548.f_1212 == uParam0->f_14)
	{
		bVar18 = true;
	}
	if (bVar18)
	{
		if (Global_2404548.f_1190 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2404548.f_1199))
			{
				if (Global_2404548.f_1199 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1196) < GlobalFunc_429())
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1196) < GlobalFunc_429())
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			GlobalFunc_409();
		}
		Global_2404548.f_1190 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1196) > GlobalFunc_429())
	{
		Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
	}
	if (!uParam0->f_7)
	{
		fVar4 = (*uParam0 - uParam0->f_4);
		fVar5 = (uParam0->f_1 - uParam0->f_4);
		fVar6 = (*uParam0 + uParam0->f_4);
		fVar7 = (uParam0->f_1 + uParam0->f_4);
	}
	else
	{
		if (uParam0->f_8 < uParam0->f_11)
		{
			fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
			fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
		}
		else
		{
			fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
			fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
		}
		if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
		{
			fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
			fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
		}
		else
		{
			fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
			fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
		}
	}
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(fVar4, fVar5, fVar6, fVar7);
	if (!uParam0->f_7)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2404548.f_1190)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		GlobalFunc_409();
		if (uParam1->f_7 && !uParam0->f_7)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (GlobalFunc_8440(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!uParam0->f_7)
			{
				Global_2404548.f_1192 = { *uParam0 };
				Global_2404548.f_1195 = uParam0->f_4;
				Global_2404548.f_1213 = 0;
			}
			else
			{
				Global_2404548.f_1206 = { uParam0->f_8 };
				Global_2404548.f_1209 = { uParam0->f_11 };
				Global_2404548.f_1212 = uParam0->f_14;
				Global_2404548.f_1192 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
				Global_2404548.f_1213 = 1;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				GlobalFunc_408(Var8.x, Var8.f_1);
			}
			Global_2404548.f_1191 = 1;
			Global_2404548.f_1190 = 1;
			Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
			Global_2404548.f_1196 = NETWORK::GET_NETWORK_TIME();
			Global_2404548.f_1199 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404548.f_1190)
	{
		if (Global_2404548.f_1191 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar4, fVar5, fVar6, fVar7) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1197) > 5000)
			{
				Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var8 };
					}
					Var19.f_6 = 1082130432;
					Var19.f_7 = 1176255488;
					Var19.f_8 = 1;
					Var19.f_10 = 1;
					Var19.f_13 = 1;
					Var19.f_15 = 1;
					Var19.f_16 = 1;
					Var19.f_31 = 1;
					Var19.f_34 = joaat("tailgater");
					Var19.f_43 = 1123024896;
					Var19 = { *uParam1 };
					Var19.f_3 = uParam1->f_5;
					Var19.f_11 = uParam1->f_9;
					Var19.f_18 = 1;
					if (uParam0->f_7)
					{
						Var19.f_26 = 1;
						Var19.f_19 = { uParam0->f_8 };
						Var19.f_22 = { uParam0->f_11 };
						Var19.f_25 = uParam0->f_14;
					}
					else
					{
						Var19.f_26 = 0;
						Var19.f_19 = { *uParam0 };
						Var19.f_25 = uParam0->f_4;
					}
					Var19.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var19.f_30 = 1;
						Var19.f_32 = 1;
					}
					Var19.f_38 = { uParam1->f_13 };
					Var19.f_41 = uParam1->f_16;
					Var19.f_45 = uParam1->f_17;
					func_324(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var19);
					if ((uParam1->f_7 && uParam1->f_9) && !uParam0->f_7)
					{
						if (!GlobalFunc_347(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404548.f_1191 = 9;
				}
				else
				{
					Global_2404548.f_1191 = 2;
				}
			}
		}
		if (Global_2404548.f_1191 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var11, Var14) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1197) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(Var11, Var14) == 0)
			{
				Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !GlobalFunc_6678(PLAYER::PLAYER_ID(), 0))
				{
					Global_2404548.f_1191 = 3;
				}
				else
				{
					Global_2404548.f_1191 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1201) > 7000)
			{
				GlobalFunc_5055(Var8.x, Var8.f_1);
			}
		}
		if (Global_2404548.f_1191 == 3)
		{
			if (GlobalFunc_407() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1197) > 10000)
			{
				Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
				Global_2404548.f_1191 = 4;
			}
		}
		if (Global_2404548.f_1191 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				iVar0 = 0;
				GlobalFunc_5054();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					if (!uParam0->f_7)
					{
						if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
						{
							Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
							Global_2404548.f_1191 = 5;
						}
					}
					else if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
					{
						Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
						Global_2404548.f_1191 = 5;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
					Global_2404548.f_1191 = 5;
					if (!uParam0->f_7)
					{
						PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					}
					else
					{
						PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					}
				}
			}
		}
		if (Global_2404548.f_1191 == 5)
		{
			if (func_445(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404548.f_1217.f_4)
				{
					Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
					Global_2404548.f_1191 = 6;
				}
				else
				{
					Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
						}
					}
					Global_2404548.f_1191 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1197) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
				Global_2404548.f_1191 = 8;
			}
		}
		if (Global_2404548.f_1191 == 6)
		{
			iVar0 = 0;
			Global_2404548.f_1217 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (!uParam0->f_7)
			{
				if (!GlobalFunc_386(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!GlobalFunc_385(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
			Global_2404548.f_1191 = 7;
			if (!uParam0->f_7)
			{
				PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
			}
			else
			{
				PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
			}
		}
		if (Global_2404548.f_1191 == 7)
		{
			if (func_445(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2404548.f_1324[iVar17 /*3*/]) == 0f)
							{
								if (!uParam0->f_7)
								{
									if (SYSTEM::VDIST(Global_2404548.f_1324[iVar17 /*3*/], *uParam0) < uParam0->f_4)
									{
									}
								}
								else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2404548.f_1324[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
								{
									*(uParam2[0 /*3*/]) = { Global_2404548.f_1324[iVar17 /*3*/] };
								}
							}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						if (!uParam0->f_7)
						{
							Var1 = { *uParam0 };
						}
						else
						{
							Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
						}
						func_440(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404548.f_1191 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1197) > 20000)
			{
				Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
				Global_2404548.f_1191 = 8;
			}
		}
		if (Global_2404548.f_1191 == 8)
		{
			if (uParam0->f_5)
			{
				if (GlobalFunc_410(Global_2404548.f_404))
				{
				}
			}
			else if (Global_2404548.f_1217.f_1)
			{
				GlobalFunc_383(uParam2, &(Global_2404548.f_1217.f_5));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar65 = false;
				}
				else
				{
					bVar65 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404548.f_1192 };
				func_440(uParam2[0 /*3*/], 0, bVar65, 0, 0, uParam0, uParam1);
			}
			Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
			Global_2404548.f_1191 = 9;
		}
		if (Global_2404548.f_1191 == 9)
		{
			Global_2404548.f_1190 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			GlobalFunc_409();
			return 1;
		}
		Global_2404548.f_1196 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}


void func_440(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x42A98
{
	struct<3> Var0;
	var uVar3;
	struct<46> Var4;
	var uVar50;
	bool bVar51;
	int iVar52;
	struct<3> Var53;
	struct<3> Var56;
	struct<3> Var59;
	float fVar62;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_43 = 1123024896;
	if (bParam1)
	{
		iVar52 = 0;
	}
	else
	{
		iVar52 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar52 += 4;
			}
			else if (!uParam5->f_7)
			{
				Var53 = { *uParam5 };
				if (GlobalFunc_386(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var53)))
				{
					iVar52 += 4;
				}
			}
			else
			{
				Var53 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
				if (GlobalFunc_385(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var53)))
				{
					iVar52 += 4;
				}
			}
		}
		else
		{
			iVar52 += 4;
		}
	}
	if (GlobalFunc_10613(*uParam0, &Var0, iVar52, iParam3, 1))
	{
	}
	else
	{
		bVar51 = true;
	}
	if (bVar51)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (bParam4)
		{
			Var4.f_18 = 1;
			if (uParam5->f_7)
			{
				Var4.f_26 = 1;
				Var4.f_19 = { uParam5->f_8 };
				Var4.f_22 = { uParam5->f_11 };
				Var4.f_25 = uParam5->f_14;
			}
			else
			{
				Var4.f_26 = 0;
				Var4.f_19 = { *uParam5 };
				Var4.f_25 = uParam5->f_4;
			}
		}
		Var4.f_38 = { uParam6->f_13 };
		Var4.f_41 = uParam6->f_16;
		Var4.f_45 = uParam6->f_17;
		func_324(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		if (uParam5->f_7)
		{
			Var56 = { uParam5->f_8 };
			Var59 = { uParam5->f_11 };
			fVar62 = uParam5->f_14;
		}
		else
		{
			Var56 = { *uParam5 };
			fVar62 = uParam5->f_4;
		}
		if (!GlobalFunc_384(Var0, uParam5->f_7, Var56, Var59, fVar62))
		{
			if (GlobalFunc_10613(*uParam0, &Var0, iVar52, iParam3, 0))
			{
				if (!GlobalFunc_384(Var0, uParam5->f_7, Var56, Var59, fVar62))
				{
					if (uParam5->f_7)
					{
						Var0 = { Var56 + Var59 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var56 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar50))
					{
						Var0.f_2 = uVar50;
					}
				}
			}
			else
			{
				if (uParam5->f_7)
				{
					Var0 = { Var56 + Var59 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var56 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar50))
				{
					Var0.f_2 = uVar50;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404548.f_518 = 1;
}





int func_445(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x42EF5
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404548.f_1217 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2404548.f_1217)))
			{
				case 0:
					if (uParam2->f_7 && !Global_2404548.f_440.f_7)
					{
						*(uParam0[0 /*3*/]) = { *uParam1 };
						uParam0->f_10[0] = uParam1->f_3;
						return 1;
					}
					else
					{
						if (uParam1->f_21)
						{
							*(uParam0[0 /*3*/]) = { uParam1->f_18 };
						}
						else
						{
							*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
						}
						if (uParam1->f_5 && GlobalFunc_410(Global_2404548.f_404))
						{
							if (!Global_2404548.f_1217.f_4)
							{
								Global_2404548.f_1217.f_4 = 1;
							}
							else
							{
								func_440(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
							}
						}
						else
						{
							func_440(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
						}
						uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
						return 1;
					}
					break;
				
				case 1:
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					Global_2404548.f_1217 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2404548.f_1217.f_4 = 1;
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		GlobalFunc_5053(Global_2404548.f_440, &(Global_2404548.f_1217.f_30), &(Global_2404548.f_1217.f_63));
	}
	if (uParam2->f_7 && !Global_2404548.f_1217.f_3)
	{
		Global_2404548.f_1217.f_3 = 1;
		func_448(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 43;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2404548.f_1217 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404548.f_1217)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404548.f_1217.f_2)
					{
						iVar4 = Global_2404548.f_1217.f_2 + 1;
					}
					if (iVar4 > (Global_2404548.f_1217 - 1))
					{
						iVar4 = (Global_2404548.f_1217 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar4);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar4, &iVar5);
					}
					func_448(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404548.f_1217.f_2 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2404548.f_1217;
		}
		if (Global_2404548.f_1217 == iVar4)
		{
			if (uParam1->f_5 && GlobalFunc_410(Global_2404548.f_404))
			{
				if (Global_2404548.f_1217.f_1)
				{
					GlobalFunc_383(uParam0, &(Global_2404548.f_1217.f_5));
					GlobalFunc_387(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
					func_440(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					GlobalFunc_387(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404548.f_1217.f_1)
			{
				GlobalFunc_383(uParam0, &(Global_2404548.f_1217.f_5));
				GlobalFunc_387(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2404548.f_1217);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!GlobalFunc_6766(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					GlobalFunc_387(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
					func_440(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					GlobalFunc_387(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
				func_440(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				GlobalFunc_387(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
		if (uParam1->f_5 && GlobalFunc_410(Global_2404548.f_404))
		{
			if (!Global_2404548.f_1217.f_4)
			{
				Global_2404548.f_1217.f_4 = 1;
			}
			else
			{
				func_440(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_440(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		GlobalFunc_387(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}



void func_448(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)//Position - 0x4356A
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<8> Var11;
	bool bVar19;
	bool bVar20;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404548.f_404 == 1)
		{
			if (MISC::ABSF((Global_2404548.f_417.f_2 - Param0.f_2)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam4->f_5)
	{
		if (GlobalFunc_7646(PLAYER::PLAYER_ID(), 1))
		{
			if (iParam7 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!GlobalFunc_7670(Param0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam4->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam4->f_5)
	{
		if (!GlobalFunc_7824(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	if (SYSTEM::VMAG(uParam5->f_13) > 0f)
	{
		if (SYSTEM::VDIST(Param0, uParam5->f_13) > uParam5->f_16)
		{
			iVar7 += 64;
		}
	}
	else
	{
		iVar7 += 64;
	}
	if (uParam4->f_5)
	{
		if (!Global_2404548.f_537)
		{
			if (GlobalFunc_8972(Global_2404548.f_417))
			{
				if ((!GlobalFunc_8341(&Param0, 0, 0, 0) && !GlobalFunc_8340(&Param0, 0, 0)) && !GlobalFunc_5029(&Param0, 0))
				{
					iVar7 += 128;
				}
			}
			else if ((!GlobalFunc_8340(&Param0, 0, 0) && !GlobalFunc_5029(&Param0, 0)) && !GlobalFunc_349(Param0, 0.5f))
			{
				iVar7 += 128;
			}
		}
		else
		{
			iVar7 += 128;
		}
	}
	else if (!GlobalFunc_400(Param0, 2.5f, 3))
	{
		iVar7 += 128;
	}
	if (uParam4->f_5)
	{
		if (func_469(Param0, fParam3, uParam4->f_15, GlobalFunc_399(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 256;
			iVar7 += 512;
		}
		else
		{
			iVar9 = Global_2404548.f_1;
		}
	}
	else if (!GlobalFunc_7661(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!GlobalFunc_7665(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 512;
			iVar7 += 256;
		}
		else if (!GlobalFunc_7665(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 256;
		}
	}
	if (uParam4->f_5)
	{
		if (!(GlobalFunc_7668(PLAYER::PLAYER_ID()) && GlobalFunc_5051(PLAYER::PLAYER_ID())))
		{
			if (!GlobalFunc_5050(&Param0, &(Global_2404548.f_1217.f_63), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!GlobalFunc_5051(PLAYER::PLAYER_ID()))
		{
			if (!GlobalFunc_395(Param0, &(Global_2404548.f_1217.f_30), &(Global_2404548.f_1217.f_63), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (GlobalFunc_394(Param0))
	{
		if (uParam4->f_5)
		{
			if (GlobalFunc_394(Param0))
			{
				if (GlobalFunc_410(Global_2404548.f_404))
				{
					if (GlobalFunc_6758(Param0, 1f))
					{
						iVar7 += 4096;
					}
				}
				else
				{
					iVar7 += 4096;
				}
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (GlobalFunc_393(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404548.f_37.f_31)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (!GlobalFunc_6766(&Param0, 0))
	{
		iVar7 = (iVar7 + 32768);
	}
	else
	{
		iVar7 = -1;
	}
	if (uParam4->f_5)
	{
	}
	else if (GlobalFunc_392(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var11.f_2 = 1176256410;
	bVar19 = false;
	bVar20 = false;
	iVar10 = 0;
	while (iVar10 < 3)
	{
		if (iVar7 >= Global_2404548.f_1217.f_5[iVar10 /*8*/])
		{
			if (uParam4->f_5)
			{
				if (!bVar19)
				{
					if (bParam6)
					{
						uParam5->f_4 = 0;
						bVar4 = false;
					}
					else
					{
						bVar4 = true;
					}
					if (uParam4->f_21)
					{
						fVar0 = GlobalFunc_9886(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					else
					{
						fVar0 = GlobalFunc_9886(Param0, Global_2404548.f_1192, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar19 = true;
				}
				if ((GlobalFunc_410(Global_2404548.f_404) && iVar7 == Global_2404548.f_1217.f_5[iVar10 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar20)
					{
						fVar2 = GlobalFunc_5047(Param0);
						bVar20 = true;
					}
					if (fVar2 < Global_2404548.f_1217.f_5[iVar10 /*8*/].f_2)
					{
						Var11.f_4 = { Param0 };
						Var11.f_7 = fParam3;
						Var11 = iVar7;
						Var11.f_1 = fVar0;
						Var11.f_2 = fVar2;
						GlobalFunc_389(Var11, iVar10);
						Global_2404548.f_1217.f_1 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404548.f_1217.f_5[iVar10 /*8*/] || (iVar7 == Global_2404548.f_1217.f_5[iVar10 /*8*/] && fVar0 > Global_2404548.f_1217.f_5[iVar10 /*8*/].f_1))
				{
					Var11.f_4 = { Param0 };
					Var11.f_7 = fParam3;
					Var11 = iVar7;
					Var11.f_1 = fVar0;
					GlobalFunc_389(Var11, iVar10);
					Global_2404548.f_1217.f_1 = 1;
					return;
				}
			}
			else
			{
				if (!bVar19)
				{
					if (uParam4->f_15)
					{
						fVar1 = 3.5f;
					}
					else
					{
						fVar1 = 1f;
					}
					fVar5 = GlobalFunc_7667(Param0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = GlobalFunc_9063(Param0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = GlobalFunc_388(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = GlobalFunc_388(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					bVar19 = true;
				}
				if (iVar7 > Global_2404548.f_1217.f_5[iVar10 /*8*/] || (iVar7 == Global_2404548.f_1217.f_5[iVar10 /*8*/] && fVar3 > Global_2404548.f_1217.f_5[iVar10 /*8*/].f_3))
				{
					Var11.f_4 = { Param0 };
					Var11.f_7 = fParam3;
					Var11 = iVar7;
					Var11.f_3 = fVar3;
					GlobalFunc_389(Var11, iVar10);
					Global_2404548.f_1217.f_1 = 1;
					return;
				}
			}
		}
		iVar10++;
	}
}





















int func_469(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)//Position - 0x44802
{
	Global_2404548.f_1 = 0;
	if (!GlobalFunc_7661(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2404548.f_1++;
		if (bParam5)
		{
			if (GlobalFunc_8440(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404548.f_1 = (Global_2404548.f_1 + Global_2404548);
				if (!GlobalFunc_8346(Param0, fParam12))
				{
					Global_2404548.f_1++;
					if (!GlobalFunc_7669(Param0))
					{
						Global_2404548.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404548.f_1 = (Global_2404548.f_1 + Global_2404548);
			}
		}
		else if (!bParam4)
		{
			if (GlobalFunc_8440(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404548.f_1 = (Global_2404548.f_1 + Global_2404548);
				if (!GlobalFunc_8346(Param0, fParam12))
				{
					Global_2404548.f_1++;
					if (!GlobalFunc_5052(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404548.f_1++;
						if (!GlobalFunc_7669(Param0))
						{
							Global_2404548.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404548.f_1 = (Global_2404548.f_1 + Global_2404548);
			}
		}
		else if (GlobalFunc_8440(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
		{
			Global_2404548.f_1 = (Global_2404548.f_1 + Global_2404548);
			if (!GlobalFunc_8346(Param0, fParam12))
			{
				Global_2404548.f_1++;
				if (!GlobalFunc_5052(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404548.f_1++;
					if (!GlobalFunc_7669(Param0))
					{
						Global_2404548.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404548.f_1 = (Global_2404548.f_1 + Global_2404548);
		}
	}
	return 0;
}



































































void func_536(var uParam0, var uParam1, var uParam2, float fParam3)//Position - 0x47C2E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam0);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = (iVar0 + iVar2);
		if (!iVar1 < *uParam0)
		{
			iVar1 = (iVar1 - *uParam0);
		}
		if (func_469(*(uParam0[iVar1 /*4*/]), (uParam0[iVar1 /*4*/])->f_3, 0, 1, 0, 0, fParam3, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			*uParam1 = { *(uParam0[iVar1 /*4*/]) };
			*uParam2 = (uParam0[iVar1 /*4*/])->f_3;
			return;
		}
		iVar0++;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam0);
	*uParam1 = { *(uParam0[iVar0 /*4*/]) };
	*uParam2 = (uParam0[iVar0 /*4*/])->f_3;
}














void func_550()//Position - 0x48060
{
	if (Global_2446554.f_4362)
	{
		Global_2446554.f_4362 = 0;
		GlobalFunc_434(&(Global_2446554.f_4363));
	}
}

int func_551(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, int iParam7)//Position - 0x48085
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<8> Var3;
	
	if (!GlobalFunc_439(uParam3))
	{
		GlobalFunc_436(uParam3, 0, 0);
	}
	GlobalFunc_1440(&Var3, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (GlobalFunc_5432(iParam0, iParam1, 30))
			{
				if (ENTITY::IS_ENTITY_A_PED(iParam0))
				{
					uVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
					if (!PED::IS_PED_INJURED(uVar0))
					{
						if (PED::IS_PED_A_PLAYER(iVar0))
						{
							uVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
							if (bParam2)
							{
								if (OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, uVar2, fParam4, -1))
								{
									if (iParam7 || (!OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, uVar2, 2) && !(Var3.f_7 != 0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, uVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, uVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, uVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, uVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
						{
							uVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(uVar1))
							{
								if (bParam2)
								{
									if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iVar1, fParam4, -1))
									{
										if (iParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
							{
								if (iParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0) || ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
				{
					if (bParam2)
					{
						if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
						{
							if (iParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	GlobalFunc_434(uParam3);
	return 0;
}




void func_555()//Position - 0x48CDF
{
	var uVar0;
	struct<3> Var2;
	bool bVar5;
	bool bVar6;
	
	if (func_565())
	{
		switch (Global_2446554.f_4352)
		{
			case 0:
				Local_60.f_9.f_16 = 0;
				if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Local_60.f_3, 1) <= 20f)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
							{
								if (func_564(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
								{
									bVar5 = true;
								}
							}
						}
						if (bVar5)
						{
							if (func_12(Local_60.f_2))
							{
								if (func_551(PLAYER::PLAYER_PED_ID(), Local_60.f_1, 0, &uVar0, 0f, 0, 1, 0))
								{
									if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Local_60.f_6) > 0.4f)
									{
										Global_2446554.f_4352 = 1;
									}
								}
							}
							else if (func_551(PLAYER::PLAYER_PED_ID(), Local_60.f_1, 1, &uVar0, 0f, 0, 1, 0))
							{
								if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Local_60.f_6) > 0.4f)
								{
									Global_2446554.f_4352 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				NETWORK::SET_STORE_ENABLED(0);
				iLocal_99 = 1;
				GlobalFunc_7629();
				if (!CAM::DOES_CAM_EXIST(Local_60.f_9))
				{
					Local_60.f_9 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					CAM::SET_CAM_ACTIVE(Local_60.f_9, 1);
					CAM::SET_CAM_PARAMS(Local_60.f_9, Local_60.f_9.f_1, Local_60.f_9.f_4, Local_60.f_9.f_7, 0, 1, 1, 2);
					CAM::SHAKE_CAM(Local_60.f_9, "Hand_shake", 0.3f);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					GlobalFunc_5304();
					GlobalFunc_1096(12, 1, -1);
					GlobalFunc_1097(0);
					CAM::SET_WIDESCREEN_BORDERS(1, -1);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
				}
				if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
				{
					HUD::LOCK_MINIMAP_ANGLE(SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
				}
				Global_2446554.f_4352 = 2;
				if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							bVar5 = true;
						}
					}
				}
				if ((!func_551(PLAYER::PLAYER_PED_ID(), Local_60.f_1, 0, &uVar0, 0f, 0, 1, 0) || (!bVar5 && !bVar6)) && !func_557())
				{
					func_556();
				}
				break;
			
			case 2:
				if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							bVar5 = true;
						}
					}
				}
				GlobalFunc_7629();
				if (Local_60.f_9.f_15)
				{
					CAM::SET_CAM_PARAMS(Local_60.f_9, CAM::GET_CAM_COORD(Local_60.f_9), CAM::GET_CAM_ROT(Local_60.f_9, 2), CAM::GET_CAM_FOV(Local_60.f_9), 0, 1, 1, 2);
					Local_60.f_9.f_15 = 0;
				}
				if (!func_12(Local_60.f_2))
				{
					Global_2446554.f_4352 = 3;
				}
				if ((!func_551(PLAYER::PLAYER_PED_ID(), Local_60.f_1, 0, &uVar0, 0f, 0, 1, 0) || (!bVar5 && !bVar6)) && !func_557())
				{
					func_556();
				}
				break;
			
			case 3:
				if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							bVar5 = true;
						}
					}
				}
				GlobalFunc_7629();
				if (!Local_60.f_9.f_15)
				{
					CAM::SET_CAM_PARAMS(Local_60.f_9, Local_60.f_9.f_8, Local_60.f_9.f_11, Local_60.f_9.f_14, 16000, 0, 0, 2);
					Local_60.f_9.f_15 = 1;
				}
				if (func_12(Local_60.f_2) && !func_557())
				{
					Global_2446554.f_4352 = 2;
				}
				if ((!func_551(PLAYER::PLAYER_PED_ID(), Local_60.f_1, 0, &uVar0, 0f, 0, 1, 0) || (!bVar5 && !bVar6)) && !func_557())
				{
					func_556();
				}
				break;
			
			case 4:
				func_556();
				break;
		}
	}
	else if (Global_2446554.f_4352 > 0)
	{
		func_556();
	}
	iLocal_98++;
	if (iLocal_98 >= 1)
	{
		iLocal_98 = 0;
	}
}

void func_556()//Position - 0x490DD
{
	Local_60.f_9.f_15 = 0;
	Global_2446554.f_4352 = 0;
	HUD::UNLOCK_MINIMAP_ANGLE();
	if (iLocal_99)
	{
		NETWORK::SET_STORE_ENABLED(1);
		iLocal_99 = 0;
	}
	if (CAM::DOES_CAM_EXIST(Local_60.f_9))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(Local_60.f_9, 0);
		GlobalFunc_5321();
		GlobalFunc_1096(12, 0, -1);
		GlobalFunc_1097(1);
		CAM::SET_WIDESCREEN_BORDERS(0, -1);
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
}

int func_557()//Position - 0x49146
{
	if (Global_2446554.f_4355 != 0)
	{
		return 1;
	}
	return 0;
}







int func_564(int iParam0)//Position - 0x49342
{
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uParam0)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	return 1;
}

bool func_565()//Position - 0x4936D
{
	return !Global_2446554.f_4351;
}

void func_566()//Position - 0x4937D
{
	func_567();
	if (Local_115[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 != Global_2446554.f_4332)
	{
		Local_115[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 = Global_2446554.f_4332;
	}
	if (Local_115[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 != Global_2446554.f_4332.f_1)
	{
		Local_115[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = Global_2446554.f_4332.f_1;
	}
}

void func_567()//Position - 0x493D7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2446554.f_4338[0 /*12*/] = { Local_100.f_2[iVar0 /*12*/] };
		iVar0++;
	}
}

void func_568(int iParam0)//Position - 0x49409
{
	Local_115[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = iParam0;
}

int func_569()//Position - 0x4941B
{
	return Local_100.x;
}

int func_570(int iParam0)//Position - 0x49425
{
	return Local_115[iParam0 /*4*/];
}


void func_572()//Position - 0x49470
{
	if (Global_2446554.f_4362)
	{
		if (GlobalFunc_5071(&(Global_2446554.f_4363), 5000, 0))
		{
			Global_2446554.f_4362 = 0;
		}
	}
}

int func_573()//Position - 0x4949C
{
	if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(GlobalFunc_271(PLAYER::PLAYER_ID()), Local_57, 0) > 125f)
		{
			return 1;
		}
	}
	return 0;
}










void func_583()//Position - 0x496D6
{
	func_556();
	func_16();
	GlobalFunc_491();
}


int func_585()//Position - 0x496F6
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_100, 15);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_115, 129);
	if (!GlobalFunc_5091())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	return 1;
}



void func_588()//Position - 0x4989E
{
	if (GlobalFunc_537(Local_57, 1204.429f, -3110.847f, 4.3988f, 0.5f))
	{
		Local_60.f_1 = 1215605247;
	}
	GlobalFunc_1440(&Local_60, Local_60.f_1);
}


