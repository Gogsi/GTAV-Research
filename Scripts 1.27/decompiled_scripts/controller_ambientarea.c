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
	var uLocal_33 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
	{
		GlobalFunc_491();
	}
	func_14();
	iVar0 = 0;
	while (true)
	{
		SYSTEM::WAIT(500);
		iVar1 = 0;
		Var2 = { 0f, 0f, 0f };
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		while (iVar1 != 2)
		{
			if (func_13(&(Global_24709[iVar0 /*7*/])))
			{
				if (func_12(iVar0, Var2))
				{
					GlobalFunc_811(&(Global_24709[iVar0 /*7*/]), 2);
					if (Global_24709[iVar0 /*7*/].f_5 != 0)
					{
						if (SCRIPT::IS_THREAD_ACTIVE(Global_24709[iVar0 /*7*/].f_5))
						{
							PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_24709[iVar0 /*7*/].f_5, 1);
						}
						Global_24709[iVar0 /*7*/].f_5 = 0;
					}
				}
			}
			else if (!GlobalFunc_747(Global_24709[iVar0 /*7*/], 4))
			{
				if (func_5(&(Global_24709[iVar0 /*7*/]), Var2))
				{
					func_1(iVar0);
				}
			}
			iVar1++;
			iVar0++;
			if (iVar0 == 5)
			{
				iVar0 = 0;
			}
		}
	}
}

void func_1(int iParam0)//Position - 0x146
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 1424;
	bVar3 = true;
	switch (iParam0)
	{
		case 0:
			sVar0 = "re_ArmyBase";
			iVar1 = joaat("re_armybase");
			break;
		
		case 1:
			iVar2 = 3650;
			sVar0 = "golf_ai_foursome";
			iVar1 = joaat("golf_ai_foursome");
			bVar3 = false;
			break;
		
		case 3:
			sVar0 = "re_Prison";
			iVar1 = joaat("re_prison");
			break;
		
		case 2:
			iVar2 = 3650;
			sVar0 = "golf_ai_foursome_putting";
			iVar1 = joaat("golf_ai_foursome_putting");
			bVar3 = false;
			break;
		
		case 4:
			iVar2 = 2050;
			sVar0 = "stripclub";
			iVar1 = joaat("stripclub");
			bVar3 = false;
			break;
	}
	if (!bVar3 && GlobalFunc_5775())
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(sVar0) != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar1) == 0)
		{
			SCRIPT::REQUEST_SCRIPT(sVar0);
			while (!SCRIPT::HAS_SCRIPT_LOADED(sVar0))
			{
				SYSTEM::WAIT(0);
			}
			Global_24709[iParam0 /*7*/].f_5 = SYSTEM::START_NEW_SCRIPT(sVar0, iVar2);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
			if (Global_24709[iParam0 /*7*/].f_5 != 0)
			{
				GlobalFunc_812(&(Global_24709[iParam0 /*7*/]), 2);
			}
		}
	}
}




int func_5(var uParam0, struct<3> Param1)//Position - 0x27C
{
	if (!GlobalFunc_747(*uParam0, 1))
	{
		if (GlobalFunc_756() && !GlobalFunc_6687(6))
		{
			return 0;
		}
	}
	if (SYSTEM::VDIST2(Param1, uParam0->f_2) > uParam0->f_1)
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2080.115f, 3292.193f, -11.667f, -2112.049f, 3224.331f, 11.667f, 115f, 1, 0, 0))
		{
			return 0;
		}
	}
	return 1;
}







int func_12(int iParam0, struct<3> Param1)//Position - 0x54F
{
	Param1.f_2 = 0f;
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_24709[iParam0 /*7*/].f_5))
	{
		return 1;
	}
	if (GlobalFunc_747(Global_24709[iParam0 /*7*/], 4))
	{
		return 1;
	}
	if (GlobalFunc_756() && !GlobalFunc_6687(6))
	{
		if (!GlobalFunc_747(Global_24709[iParam0 /*7*/], 1))
		{
			if (iParam0 == 1 || iParam0 == 2)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("golf")) == 0)
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	if (SYSTEM::VDIST2(Global_24709[iParam0 /*7*/].f_2, Param1) > (Global_24709[iParam0 /*7*/].f_1 + 400f))
	{
		return 1;
	}
	return 0;
}

bool func_13(var uParam0)//Position - 0x5FA
{
	return GlobalFunc_747(*uParam0, 2);
}

void func_14()//Position - 0x60A
{
	int iVar0;
	
	Global_24709[0 /*7*/].f_2 = { -2189.545f, 3129.613f, 0f };
	Global_24709[0 /*7*/].f_1 = (1000f * 1000f);
	Global_24709[0 /*7*/] = 0;
	Global_24709[0 /*7*/].f_5 = 0;
	Global_24709[1 /*7*/].f_2 = { -1172.822f, 66.5235f, 0f };
	Global_24709[1 /*7*/].f_1 = (300f * 300f);
	Global_24709[1 /*7*/] = 0;
	Global_24709[1 /*7*/].f_5 = 0;
	Global_24709[3 /*7*/].f_2 = { 1692.147f, 2562.313f, 0f };
	Global_24709[3 /*7*/].f_1 = (300f * 300f);
	Global_24709[3 /*7*/] = 0;
	Global_24709[3 /*7*/].f_5 = 0;
	Global_24709[2 /*7*/].f_2 = { -1329.68f, 60.3478f, 0f };
	Global_24709[2 /*7*/].f_1 = (250f * 250f);
	Global_24709[2 /*7*/] = 0;
	Global_24709[2 /*7*/].f_5 = 0;
	Global_24709[4 /*7*/].f_2 = { 114.64f, -1290.34f, 0f };
	Global_24709[4 /*7*/].f_1 = (100f * 100f);
	Global_24709[4 /*7*/] = 1;
	Global_24709[4 /*7*/].f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Global_24709[iVar0 /*7*/].f_2.f_2 = 0f;
		iVar0++;
	}
}


