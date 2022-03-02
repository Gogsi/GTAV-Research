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
	int iLocal_17 = 0;
	struct<3> Local_18 = { 0, 0, 0 } ;
	int iLocal_21 = 0;
	var uScriptParam_0 = 0;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_1336615, 1))
		{
			GlobalFunc_491();
		}
		else
		{
			NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
			GlobalFunc_5092(0, -1, 0);
			MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
			iLocal_21 = 1;
		}
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		GlobalFunc_491();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_21 == 1)
		{
			if (GlobalFunc_7814())
			{
				GlobalFunc_491();
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_0))
			{
				switch (iLocal_17)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_0))
						{
							Local_18 = { ENTITY::GET_ENTITY_COORDS(uScriptParam_0, 1) };
							iLocal_17 = 1;
						}
						break;
					
					case 1:
						if ((OBJECT::HAS_OBJECT_BEEN_BROKEN(uScriptParam_0) && ENTITY::IS_ENTITY_VISIBLE(uScriptParam_0)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uScriptParam_0))
						{
							func_1();
							iLocal_17 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				GlobalFunc_491();
			}
		}
		else
		{
			GlobalFunc_491();
		}
	}
}

void func_1()//Position - 0x110
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(70, 121);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(50, 101);
		iVar3 = GlobalFunc_1436(iVar3, 1);
	}
	MISC::SET_BIT(&uVar2, 3);
	MISC::SET_BIT(&uVar2, 4);
	STREAMING::REQUEST_MODEL(iVar0);
	while (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		SYSTEM::WAIT(0);
	}
	OBJECT::CREATE_PICKUP(iVar1, OBJECT::GET_SAFE_PICKUP_COORDS(Local_18, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
}

















