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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	struct<3> Local_26 = { 0, 0, 0 } ;
	struct<3> Local_29 = { 0, 0, 0 } ;
	int iLocal_32 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
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
	iLocal_19 = -15;
	iLocal_20 = -15;
	iLocal_21 = -1;
	iLocal_25 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		GlobalFunc_491();
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("stock_controller")) > 1)
	{
		GlobalFunc_491();
	}
	Global_54735 = 1;
	iLocal_21 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(480) / 16f));
	func_96();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_50493[iVar0 /*7*/])
		{
			if (Global_50493[iVar0 /*7*/].f_2)
			{
				if (!Global_50493[iVar0 /*7*/].f_4)
				{
					STATS::STAT_GET_INT(Global_50493[iVar0 /*7*/].f_3, &(Global_50493[iVar0 /*7*/].f_5), -1);
				}
				else
				{
					fVar1 = 0f;
					STATS::STAT_GET_FLOAT(Global_50493[iVar0 /*7*/].f_3, &fVar1, -1);
					Global_50493[iVar0 /*7*/].f_5 = SYSTEM::FLOOR(fVar1);
				}
			}
		}
		iVar0++;
	}
	func_94();
	func_93();
	func_90();
	Global_54735 = 0;
	GlobalFunc_174(1);
	func_86();
	func_83();
	while (true)
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (!Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 < 11)
			{
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 = 0;
			}
			iVar2++;
		}
		func_79();
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !GlobalFunc_39(14))
		{
			func_67();
			iVar3 = 16;
			while (func_66() && iVar3 >= 0)
			{
				iVar3 = (iVar3 - 1);
				func_47();
				Global_51929 = 1;
				func_41();
				Global_54737 = 1;
				func_39();
				func_38();
			}
			if (func_30())
			{
				func_28(0);
				func_38();
				func_27();
				func_38();
				func_86();
				func_38();
			}
			while (Global_51922 > 0)
			{
				func_11(&iLocal_19, 0, 480, 0, 0, 0, 0);
				func_11(&iLocal_20, 0, 480, 0, 0, 0, 0);
				Global_51922 = (Global_51922 - 1);
			}
		}
		func_4();
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1FA
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	iVar1 = GlobalFunc_1421(iVar0);
	if (FIRE::IS_ENTITY_ON_FIRE(iVar1))
	{
		GlobalFunc_184(89, 1);
		if (ENTITY::GET_ENTITY_SPEED(iVar1) > 5f)
		{
			GlobalFunc_184(90, 1);
		}
	}
}



void func_4()//Position - 0x2A9
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (Global_51923)
		{
			Global_51923 = 0;
			Global_51924 = MISC::GET_GAME_TIMER();
			Global_54736 = 1;
		}
		return;
	}
	if (Global_51923)
	{
		if (!STATS::_0xB1D2BB1E1631F5B1())
		{
			iVar0 = func_5();
			Global_51923 = 0;
			if (iVar0 < 5)
			{
				Global_54736 = 0;
			}
		}
	}
}

int func_5()//Position - 0x2F6
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE() || !NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_47050[iVar0 /*36*/].f_8)
		{
			if (Global_47050[iVar0 /*36*/].f_35 > -1)
			{
				uVar2 = Global_49931[Global_47050[iVar0 /*36*/].f_35 /*7*/];
				STATS::STAT_GET_FLOAT(uVar2, &(Global_47050[iVar0 /*36*/].f_9), -1);
				if (Global_47050[iVar0 /*36*/].f_9 > 0f)
				{
					fVar3 = 0f;
					STATS::_0xBED9F5693F34ED17(uVar2, 0, &(Global_47050[iVar0 /*36*/].f_33));
					Global_47050[iVar0 /*36*/].f_31 = Global_47050[iVar0 /*36*/].f_9;
					Global_47050[iVar0 /*36*/].f_32 = Global_47050[iVar0 /*36*/].f_9;
					fVar3 = (fVar3 + Global_47050[iVar0 /*36*/].f_33);
					iVar4 = 0;
					while (iVar4 < 4)
					{
						fVar5 = 0f;
						STATS::_0xBED9F5693F34ED17(uVar2, iVar4 + 1, &fVar5);
						if (fVar5 > Global_47050[iVar0 /*36*/].f_31)
						{
							Global_47050[iVar0 /*36*/].f_31 = fVar5;
						}
						if (fVar5 < Global_47050[iVar0 /*36*/].f_32)
						{
							Global_47050[iVar0 /*36*/].f_32 = fVar5;
						}
						fVar3 = (fVar3 + fVar5);
						iVar4++;
					}
					fVar3 = (fVar3 / 5f);
					fVar6 = func_6(iVar0);
					if (fVar6 > Global_47050[iVar0 /*36*/].f_31)
					{
						Global_47050[iVar0 /*36*/].f_31 = fVar6;
					}
					if (fVar6 < Global_47050[iVar0 /*36*/].f_32)
					{
						Global_47050[iVar0 /*36*/].f_32 = fVar6;
					}
					Global_47050[iVar0 /*36*/].f_33 = (fVar6 - fVar3);
					Global_47050[iVar0 /*36*/].f_34 = ((Global_47050[iVar0 /*36*/].f_33 / fVar3) * 100f);
				}
				else
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

float func_6(int iParam0)//Position - 0x48F
{
	int iVar0;
	float fVar1;
	
	iVar0 = iParam0;
	fVar1 = (Global_47050[iParam0 /*36*/].f_9 * func_7(iVar0));
	return (SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fVar1 * 100f))) / 100f);
}

float func_7(int iParam0)//Position - 0x4C3
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = 1f;
	switch (iParam0)
	{
		case 61:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
			{
				fVar0 = 0.5f;
			}
			break;
		
		case 73:
			if (GlobalFunc_526(25))
			{
				fVar0 = (fVar0 * 3f);
			}
			else
			{
				if (GlobalFunc_526(74) || GlobalFunc_526(75))
				{
					fVar0 = (fVar0 * 0.95f);
				}
				if (GlobalFunc_526(14))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (GlobalFunc_526(16))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (GlobalFunc_526(48))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (GlobalFunc_526(24))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (GlobalFunc_526(27))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
		
		case 66:
			if (GlobalFunc_526(49))
			{
				fVar0 = (fVar0 * 0.5f);
			}
			if (GlobalFunc_526(10))
			{
				fVar0 = (fVar0 * 0.95f);
			}
			break;
		
		case 59:
			if (GlobalFunc_526(93))
			{
				if (!GlobalFunc_526(47))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (GlobalFunc_526(38))
			{
				if (!GlobalFunc_526(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (GlobalFunc_526(84))
			{
				if (!GlobalFunc_526(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			break;
		
		case 69:
			if (GlobalFunc_526(90))
			{
				if (!GlobalFunc_526(14))
				{
					fVar0 = (fVar0 * 0.7f);
				}
			}
			break;
		
		case 16:
			if (GlobalFunc_526(28))
			{
				fVar0 = (fVar0 * 2f);
			}
			break;
		
		case 52:
			if (GlobalFunc_526(93))
			{
				if (!GlobalFunc_526(28))
				{
					fVar0 = (fVar0 * 0.6f);
				}
			}
			break;
		
		case 56:
			if (GlobalFunc_526(61))
			{
				if (!GlobalFunc_526(49))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
	}
	if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_442 < 1)
	{
		return fVar0;
	}
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_443[iVar2] == iParam0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 > -1)
	{
		fVar0 = func_9(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_452[iVar1], Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_461[iVar1]);
	}
	if (fVar0 > 1f)
	{
		fVar3 = (fVar0 - 1f);
		iVar4 = iParam0;
		iVar5 = GlobalFunc_2035(0, iVar4);
		iVar6 = GlobalFunc_2035(1, iVar4);
		iVar7 = GlobalFunc_2035(2, iVar4);
		if (((iVar5 + iVar6) + iVar7) > 0)
		{
			iVar8 = ((Global_51925[0] + Global_51925[1]) + Global_51925[2]);
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar2]));
				}
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar2]));
				}
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar2]));
				}
				iVar2++;
			}
			iVar9 = 700000000;
			iVar10 = 1000000000;
			if (iVar8 > iVar10)
			{
				fVar3 = 0f;
			}
			else if (iVar8 < iVar9)
			{
				fVar3 = 1f;
			}
			else
			{
				fVar11 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
				fVar12 = SYSTEM::TO_FLOAT((iVar10 - iVar9));
				fVar3 = (fVar3 * (1f - (fVar11 / fVar12)));
			}
		}
		fVar0 = (1f + fVar3);
	}
	return fVar0;
}


float func_9(int iParam0, var uParam1)//Position - 0x8AD
{
	float fVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	fVar0 = 0f;
	if (iParam0 < 1)
	{
		return 1f;
	}
	bVar1 = MISC::IS_BIT_SET(uParam1, 0);
	fVar2 = SYSTEM::TO_FLOAT(iParam0);
	iVar3 = 0;
	if (MISC::IS_BIT_SET(uParam1, 3))
	{
		iVar3++;
	}
	if (MISC::IS_BIT_SET(uParam1, 4))
	{
		iVar3 += 2;
	}
	if (MISC::IS_BIT_SET(uParam1, 5))
	{
		iVar3 += 4;
	}
	if (MISC::IS_BIT_SET(uParam1, 20))
	{
		iVar3 += 8;
	}
	fVar4 = SYSTEM::TO_FLOAT((3 * iVar3));
	if (MISC::IS_BIT_SET(uParam1, 2))
	{
		fVar4 = (fVar4 * 7f);
	}
	if (MISC::IS_BIT_SET(uParam1, 1))
	{
		if (GlobalFunc_526(21))
		{
			return 1f;
		}
	}
	else if (fVar4 < 1f)
	{
		return 1f;
	}
	fVar5 = (1f - (fVar2 / fVar4));
	if (MISC::IS_BIT_SET(uParam1, 16))
	{
		fVar0 = (fVar0 - 0.5f);
	}
	if (MISC::IS_BIT_SET(uParam1, 17))
	{
		fVar0 = (fVar0 - 0.25f);
	}
	if (MISC::IS_BIT_SET(uParam1, 18))
	{
		fVar0 = (fVar0 - 0.1f);
	}
	if (MISC::IS_BIT_SET(uParam1, 19))
	{
		fVar0 = (fVar0 - 0.33f);
	}
	if (bVar1)
	{
		fVar0 = -fVar0;
	}
	if (!MISC::IS_BIT_SET(uParam1, 1))
	{
		if (MISC::IS_BIT_SET(uParam1, 6))
		{
			fVar6 = 0f;
			if (MISC::IS_BIT_SET(uParam1, 8))
			{
				fVar6 = (fVar6 + 0.5f);
			}
			if (MISC::IS_BIT_SET(uParam1, 9))
			{
				fVar6 = (fVar6 + 0.25f);
			}
			if (MISC::IS_BIT_SET(uParam1, 10))
			{
				fVar6 = (fVar6 + 0.125f);
			}
			if (fVar5 < fVar6)
			{
				fVar7 = (fVar5 / fVar6);
				if (MISC::IS_BIT_SET(uParam1, 7))
				{
					fVar7 = (1f - fVar7);
					fVar7 = (fVar7 * fVar7);
					fVar7 = (1f - fVar7);
				}
				fVar0 = (fVar0 * fVar7);
			}
		}
		if (MISC::IS_BIT_SET(uParam1, 11))
		{
			fVar8 = 0f;
			if (MISC::IS_BIT_SET(uParam1, 13))
			{
				fVar8 = (fVar8 + 0.5f);
			}
			if (MISC::IS_BIT_SET(uParam1, 14))
			{
				fVar8 = (fVar8 + 0.25f);
			}
			if (MISC::IS_BIT_SET(uParam1, 15))
			{
				fVar8 = (fVar8 + 0.125f);
			}
			fVar9 = (1f - fVar8);
			if (fVar5 > fVar9)
			{
				fVar10 = ((fVar5 - fVar9) / fVar8);
				if (MISC::IS_BIT_SET(uParam1, 12))
				{
					fVar10 = (fVar10 * fVar10);
				}
				fVar0 = (fVar0 * (1f - fVar10));
			}
		}
	}
	fVar0 = (1f + fVar0);
	return fVar0;
}


void func_11(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xAE5
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
	
	iVar0 = GlobalFunc_4975(*iParam0);
	iVar1 = GlobalFunc_210(*iParam0);
	iVar2 = GlobalFunc_209(*iParam0);
	iVar3 = GlobalFunc_208(*iParam0);
	iVar4 = GlobalFunc_207(*iParam0);
	iVar5 = GlobalFunc_206(*iParam0);
	if (((iParam4 == 0 && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		iVar7 = iVar0;
		if (iVar6 < 0)
		{
			iVar6 = 11;
			iVar7 = (iVar7 - 1);
		}
		iVar8 = iVar6;
		iVar9 = GlobalFunc_91(iVar8, iVar7);
		iVar2 = (iVar2 + iVar9);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	GlobalFunc_8059(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}
















void func_27()//Position - 0xF63
{
	int iVar0;
	
	if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_442 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_461[iVar0], 1))
		{
			if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_452[iVar0] > 0)
			{
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_452[iVar0] = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_452[iVar0] - 1);
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_452[iVar0] < 1)
				{
					Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_452[iVar0] = 0;
					Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_442 = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_442 - 1);
				}
			}
		}
		iVar0++;
	}
}

void func_28(bool bParam0)//Position - 0x100D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		func_29(iVar0, bParam0);
		SYSTEM::WAIT(0);
		if (!bParam0)
		{
			func_67();
		}
		iVar0++;
	}
}

void func_29(int iParam0, bool bParam1)//Position - 0x1042
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (Global_47050[iParam0 /*36*/].f_8)
	{
		return;
	}
	fVar0 = Global_47050[iParam0 /*36*/].f_9;
	if (!bParam1)
	{
		fVar0 = func_6(iParam0);
	}
	if (fVar0 == 0f)
	{
		return;
	}
	Global_47050[iParam0 /*36*/].f_14[Global_47050[iParam0 /*36*/].f_13] = fVar0;
	if (fVar0 > Global_47050[iParam0 /*36*/].f_31)
	{
		Global_47050[iParam0 /*36*/].f_31 = fVar0;
	}
	if (fVar0 < Global_47050[iParam0 /*36*/].f_32)
	{
		Global_47050[iParam0 /*36*/].f_32 = fVar0;
	}
	Global_47050[iParam0 /*36*/].f_13++;
	if (Global_47050[iParam0 /*36*/].f_13 >= 16)
	{
		Global_47050[iParam0 /*36*/].f_13 = 0;
	}
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < 16)
	{
		fVar1 = (fVar1 + Global_47050[iParam0 /*36*/].f_14[iVar2]);
		iVar2++;
	}
	fVar1 = (fVar1 / SYSTEM::TO_FLOAT(16));
	Global_47050[iParam0 /*36*/].f_33 = (fVar0 - fVar1);
	Global_47050[iParam0 /*36*/].f_34 = ((Global_47050[iParam0 /*36*/].f_33 / fVar1) * 100f);
}

int func_30()//Position - 0x114E
{
	int iVar0;
	
	if (iLocal_19 == -15)
	{
		iLocal_19 = GlobalFunc_8058();
		iVar0 = GlobalFunc_208(iLocal_19);
		if (iVar0 == 24)
		{
			iVar0 = 0;
		}
		if (GlobalFunc_740(iVar0, 0, 8))
		{
			GlobalFunc_3030(&iLocal_19, 8);
		}
		else if (GlobalFunc_740(iVar0, 8, 16))
		{
			GlobalFunc_3030(&iLocal_19, 16);
		}
		else if (GlobalFunc_740(iVar0, 16, 24))
		{
			GlobalFunc_3030(&iLocal_19, 0);
			GlobalFunc_8647(&iLocal_19, 0, 0, 0, 1, 0, 0);
		}
		GlobalFunc_3031(&iLocal_19, 0);
		GlobalFunc_3032(&iLocal_19, 0);
		iLocal_20 = iLocal_19;
		return 0;
	}
	if (func_34(iLocal_19))
	{
		if (func_31(&iLocal_19, 1, 8))
		{
			return 0;
		}
		GlobalFunc_8647(&iLocal_19, 0, 480, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1, int iParam2)//Position - 0x1208
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (GlobalFunc_6710(Global_1312465))
	{
		if (bParam1)
		{
			iVar0 = GlobalFunc_8058();
			iVar1 = GlobalFunc_208(Global_1312465);
			iVar2 = GlobalFunc_207(Global_1312465);
			GlobalFunc_3030(&iVar0, iVar1);
			GlobalFunc_3031(&iVar0, iVar2);
			GlobalFunc_3032(&iVar0, 0);
			if (GlobalFunc_7640(GlobalFunc_8058(), iVar0))
			{
				GlobalFunc_8647(&iVar0, 0, 0, 0, 1, 0, 0);
			}
			iVar3 = 0;
			while (GlobalFunc_7640(iVar0, *iParam0) && iVar3 < 24)
			{
				GlobalFunc_8647(iParam0, 0, 0, iParam2, 0, 0, 0);
				iVar3 = (iVar3 + iParam2);
			}
		}
		return 1;
	}
	return 0;
}



bool func_34(int iParam0)//Position - 0x1487
{
	return GlobalFunc_7640(GlobalFunc_8058(), iParam0);
}




void func_38()//Position - 0x170A
{
	SYSTEM::WAIT(0);
	func_67();
}

void func_39()//Position - 0x171B
{
	int iVar0;
	
	iVar0 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
	if (iLocal_25 != iVar0)
	{
		if (iLocal_24 > 48)
		{
			switch (func_40(iLocal_25))
			{
				case 1:
					GlobalFunc_184(85, 1);
					break;
				
				case 2:
					GlobalFunc_184(84, 1);
					break;
				
				case 3:
					GlobalFunc_184(86, 1);
					break;
				
				case 4:
					GlobalFunc_184(87, 1);
					break;
				}
		}
		iLocal_24 = 0;
		iLocal_25 = iVar0;
	}
	switch (func_40(iVar0))
	{
		case 1:
			GlobalFunc_184(77, 1);
			break;
		
		case 2:
			GlobalFunc_184(76, 1);
			break;
		
		case 3:
			GlobalFunc_184(79, 1);
			break;
		
		case 4:
			GlobalFunc_184(80, 1);
			break;
		
		case 0:
			break;
	}
	GlobalFunc_184(78, 1);
	iLocal_24++;
}

int func_40(int iParam0)//Position - 0x17EA
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_41()//Position - 0x1876
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	func_67();
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_50493[iVar0 /*7*/])
		{
			if (Global_50493[iVar0 /*7*/].f_2)
			{
				iVar1 = 0;
				if (!Global_50493[iVar0 /*7*/].f_4)
				{
					STATS::STAT_GET_INT(Global_50493[iVar0 /*7*/].f_3, &iVar1, -1);
				}
				else
				{
					fVar2 = 0f;
					STATS::STAT_GET_FLOAT(Global_50493[iVar0 /*7*/].f_3, &fVar2, -1);
					iVar3 = SYSTEM::FLOOR(fVar2);
					if (Global_50493[iVar0 /*7*/].f_5 < iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = Global_50493[iVar0 /*7*/].f_5;
					}
				}
				Global_50493[iVar0 /*7*/].f_6 = (iVar1 - Global_50493[iVar0 /*7*/].f_5);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			SYSTEM::WAIT(0);
			func_67();
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_47050[iVar0 /*36*/].f_8)
		{
			if (!Global_47050[iVar0 /*36*/].f_10 == 0f)
			{
				Global_47050[iVar0 /*36*/].f_11 = Global_47050[iVar0 /*36*/].f_10;
			}
		}
		if ((iVar0 % 40) == 0)
		{
			SYSTEM::WAIT(0);
			func_67();
		}
		iVar0++;
	}
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_47050[iVar0 /*36*/].f_8)
		{
			fVar5 = 0f;
			if (Global_47050[iVar0 /*36*/].f_10 != 0f)
			{
				fVar5 = (fVar5 + (((0.02f * Global_47050[iVar0 /*36*/].f_9) * Global_47050[iVar0 /*36*/].f_10) - Global_47050[iVar0 /*36*/].f_9));
			}
			fVar5 = (fVar5 + ((MISC::GET_RANDOM_FLOAT_IN_RANGE(-Global_50205[iVar4 /*7*/].f_6, Global_50205[iVar4 /*7*/].f_6) * 0.1f) * Global_47050[iVar0 /*36*/].f_9));
			Global_50205[iVar4 /*7*/] = (Global_50205[iVar4 /*7*/] * 0.995f);
			if (fVar5 < 0f)
			{
				fVar5 = (fVar5 * Global_50205[iVar4 /*7*/].f_2);
			}
			else if (fVar5 > 0f)
			{
				fVar5 = (fVar5 * Global_50205[iVar4 /*7*/].f_1);
			}
			fVar5 = GlobalFunc_253(fVar5, -Global_50205[iVar4 /*7*/].f_5, Global_50205[iVar4 /*7*/].f_5);
			iVar6 = 61;
			if (((iVar0 == iVar6 && GlobalFunc_230(44)) && !GlobalFunc_230(64)) && fVar5 > 0f)
			{
				Global_47050[iVar0 /*36*/].f_9 = (Global_47050[iVar0 /*36*/].f_9 - fVar5);
			}
			else
			{
				if (fVar5 > 0f)
				{
					fVar7 = func_43(iVar0);
					fVar5 = (fVar5 * fVar7);
				}
				Global_47050[iVar0 /*36*/].f_9 = (Global_47050[iVar0 /*36*/].f_9 + fVar5);
			}
			if (Global_47050[iVar0 /*36*/].f_9 > Global_50205[iVar4 /*7*/].f_3)
			{
				fVar8 = (Global_47050[iVar0 /*36*/].f_9 - Global_50205[iVar4 /*7*/].f_3);
				fVar8 = (fVar8 * 0.5f);
				Global_47050[iVar0 /*36*/].f_9 = (Global_47050[iVar0 /*36*/].f_9 - fVar8);
			}
			else if (Global_47050[iVar0 /*36*/].f_9 < Global_50205[iVar4 /*7*/].f_4)
			{
				fVar9 = (Global_50205[iVar4 /*7*/].f_4 - Global_47050[iVar0 /*36*/].f_9);
				fVar9 = (fVar9 * 0.5f);
				Global_47050[iVar0 /*36*/].f_9 = (Global_47050[iVar0 /*36*/].f_9 + fVar9);
			}
			Global_50205[iVar4 /*7*/] = (Global_50205[iVar4 /*7*/] - (((fVar5 * 0.66f) + (Global_50205[iVar4 /*7*/] * 0.33f)) * 0.02f));
			if (!Global_47050[iVar0 /*36*/].f_9 > 0f)
			{
				Global_47050[iVar0 /*36*/].f_9 = (-1f * Global_47050[iVar0 /*36*/].f_9);
				Global_47050[iVar0 /*36*/].f_9 = (Global_47050[iVar0 /*36*/].f_9 + 0.02f);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			SYSTEM::WAIT(0);
			func_67();
		}
		iVar0++;
	}
	func_42();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_50493[iVar0 /*7*/])
		{
			if (Global_50493[iVar0 /*7*/].f_2)
			{
				Global_50493[iVar0 /*7*/].f_5 = (Global_50493[iVar0 /*7*/].f_5 + Global_50493[iVar0 /*7*/].f_6);
			}
		}
		iVar0++;
	}
}

void func_42()//Position - 0x1C35
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (!Global_47050[iVar1 /*36*/].f_8)
		{
			if (iVar0 < 42)
			{
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_103[iVar0] = Global_47050[iVar1 /*36*/].f_9;
				if (Global_47050[iVar1 /*36*/].f_31 > Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_146[iVar0])
				{
					Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_146[iVar0] = Global_47050[iVar1 /*36*/].f_31;
				}
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_189[iVar0] == 0f)
				{
					Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_189[iVar0] = Global_47050[iVar1 /*36*/].f_32;
				}
				else if (Global_47050[iVar1 /*36*/].f_32 < Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_189[iVar0])
				{
					Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_189[iVar0] = Global_47050[iVar1 /*36*/].f_32;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

float func_43(int iParam0)//Position - 0x1D11
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	
	if (Global_47050[iParam0 /*36*/].f_8)
	{
		return 1f;
	}
	iVar0 = GlobalFunc_2035(0, iParam0);
	iVar1 = GlobalFunc_2035(1, iParam0);
	iVar2 = GlobalFunc_2035(2, iParam0);
	if (((iVar0 + iVar1) + iVar2) < 1)
	{
		return 1f;
	}
	iVar3 = 1000000000;
	iVar4 = ((Global_51925[0] + Global_51925[1]) + Global_51925[2]);
	if (Global_51925[0] > iVar3)
	{
		return 0f;
	}
	if (Global_51925[1] > iVar3)
	{
		return 0f;
	}
	if (Global_51925[2] > iVar3)
	{
		return 0f;
	}
	fVar5 = 0f;
	iVar6 = 0;
	while (iVar6 < 10)
	{
		iVar7 = GlobalFunc_2035(0, iVar6);
		if (iVar7 > 0)
		{
			fVar5 = (fVar5 + (func_6(GlobalFunc_2034(0, iVar6)) * IntToFloat(iVar7)));
		}
		if (GlobalFunc_2035(1, iVar6) > 0)
		{
			fVar5 = (fVar5 + (func_6(GlobalFunc_2034(1, iVar6)) * IntToFloat(iVar7)));
		}
		if (GlobalFunc_2035(2, iVar6) > 0)
		{
			fVar5 = (fVar5 + (func_6(GlobalFunc_2034(2, iVar6)) * IntToFloat(iVar7)));
		}
		iVar6++;
	}
	iVar8 = (SYSTEM::FLOOR(fVar5) + iVar4);
	iVar9 = 700000000;
	if (iVar8 > iVar3)
	{
		return 0f;
	}
	if (iVar8 < iVar9)
	{
		return 1f;
	}
	fVar10 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
	fVar11 = SYSTEM::TO_FLOAT((iVar3 - iVar9));
	if (!fVar11 > 0f)
	{
		return 1f;
	}
	return (1f - (fVar10 / fVar11));
}




void func_47()//Position - 0x1F21
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		if (iVar0 == 0)
		{
			GlobalFunc_184(75, 1);
		}
		iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
			if (iVar2 != 0)
			{
				if (func_57(iVar2))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
					func_55(iVar3);
				}
			}
		}
		SYSTEM::WAIT(0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar4 = WEAPON::GET_SELECTED_PED_WEAPON(iVar1);
			func_53(iVar4);
			switch (iVar4)
			{
				case joaat("weapon_molotov"):
				case joaat("weapon_petrolcan"):
					switch (GlobalFunc_8329())
					{
						case 0:
							GlobalFunc_184(147, 1);
							break;
						
						case 1:
							GlobalFunc_184(148, 1);
							break;
						
						case 2:
							GlobalFunc_184(149, 1);
							break;
					}
					break;
				}
			}
	}
}






void func_53(int iParam0)//Position - 0x217B
{
	int iVar0;
	
	iVar0 = func_54(iParam0);
	switch (iVar0)
	{
		case 0:
			GlobalFunc_184(51, 1);
			break;
		
		case 1:
			GlobalFunc_184(52, 1);
			break;
		
		case 2:
			GlobalFunc_184(53, 1);
			break;
	}
}

int func_54(int iParam0)//Position - 0x21C2
{
	switch (iParam0)
	{
		case joaat("weapon_stickybomb"):
		case joaat("weapon_stungun"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_appistol"):
			return 0;
			break;
		
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_remotesniper"):
		case joaat("weapon_rpg"):
		case joaat("weapon_mg"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_grenade"):
		case joaat("weapon_minigun"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		default:
			return 3;
			break;
	}
	return 3;
}

void func_55(int iParam0)//Position - 0x227E
{
	switch (GlobalFunc_2045(iParam0))
	{
		case 0:
			GlobalFunc_184(39, 1);
			break;
		
		case 1:
			GlobalFunc_184(35, 1);
			break;
		
		case 2:
			GlobalFunc_184(32, 1);
			break;
		
		case 3:
			GlobalFunc_184(38, 1);
			break;
		
		case 4:
			GlobalFunc_184(31, 1);
			break;
		
		case 5:
			GlobalFunc_184(33, 1);
			break;
		
		case 6:
			GlobalFunc_184(36, 1);
			break;
		
		case 7:
			GlobalFunc_184(37, 1);
			break;
	}
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			GlobalFunc_184(34, 1);
			break;
	}
}


int func_57(int iParam0)//Position - 0x24A2
{
	var uVar0;
	
	if (Global_68245)
	{
		return VEHICLE::IS_VEHICLE_STOLEN(iParam0);
	}
	if (func_60(iParam0, &uVar0))
	{
		return 0;
	}
	if (GlobalFunc_86(iParam0))
	{
		return 0;
	}
	if (GlobalFunc_85(iParam0))
	{
		return 0;
	}
	return 1;
}



int func_60(int iParam0, var uParam1)//Position - 0x259B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (Global_67138.f_484[iVar0] == iParam0)
		{
			if (GlobalFunc_6682(&(Global_67138.f_555[0 /*21*/]), iVar0))
			{
				if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10) && Global_67138.f_555[0 /*21*/].f_4 == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					*uParam1 = iVar0;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}






int func_66()//Position - 0x4065
{
	if (iLocal_20 == -15)
	{
		return 0;
	}
	if (func_34(iLocal_20))
	{
		if (func_31(&iLocal_20, 1, 8))
		{
			return 0;
		}
		GlobalFunc_8647(&iLocal_20, 0, iLocal_21, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_67()//Position - 0x40A4
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (Global_51930)
	{
		Global_51930 = 0;
		switch (GlobalFunc_2045(Global_51931))
		{
			case 0:
			case 1:
			case 2:
			case 3:
				GlobalFunc_184(29, 1);
				break;
			
			case 4:
			case 5:
			case 6:
			case 7:
				GlobalFunc_184(30, 1);
				break;
			}
	}
	iVar0 = 0;
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar2 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar0);
		switch (iVar2)
		{
			case 140:
				SCRIPT::GET_EVENT_DATA(0, iVar0, &uVar1, 1);
				func_77(uVar1);
				bVar4 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar1))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							func_73(iVar1);
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							if (func_72(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1)))
							{
								GlobalFunc_184(3, 1);
							}
							func_71(ENTITY::GET_ENTITY_MODEL(iVar1));
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
						{
							switch (ENTITY::GET_ENTITY_MODEL(iVar1))
							{
								case joaat("prop_news_disp_01a"):
								case joaat("prop_news_disp_02a"):
								case joaat("prop_news_disp_02a_s"):
								case joaat("prop_news_disp_02b"):
								case joaat("prop_news_disp_02c"):
								case joaat("prop_news_disp_02d"):
								case joaat("prop_news_disp_02e"):
								case joaat("prop_news_disp_03a"):
								case joaat("prop_news_disp_03c"):
								case joaat("prop_news_disp_05a"):
								case -1389481633:
								case 1301918910:
								case joaat("prop_news_disp_06a"):
								case -1406224059:
									GlobalFunc_184(68, 1);
									break;
								
								case -959573699:
								case joaat("prop_postbox_01a"):
								case 1147034058:
								case 1444740423:
								case joaat("prop_postbox_ss_01a"):
									GlobalFunc_184(128, 1);
									break;
								}
							}
						}
				}
				break;
			
			case 139:
				SCRIPT::GET_EVENT_DATA(0, iVar0, &iVar1, 1);
				func_77(iVar1);
				bVar4 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (GlobalFunc_8329() == 0 && iVar3 != PLAYER::PLAYER_PED_ID())
							{
								if (ENTITY::IS_ENTITY_DEAD(iVar1) || IntToFloat(ENTITY::GET_ENTITY_HEALTH(iVar1)) < (0.5f * IntToFloat(PED::GET_PED_MAX_HEALTH(iVar3))))
								{
									if (ENTITY::IS_ENTITY_A_PED(iVar1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
										{
											GlobalFunc_5987(3);
										}
									}
								}
							}
							GlobalFunc_184(111, 1);
							GlobalFunc_184(124, 1);
							if (FIRE::IS_ENTITY_ON_FIRE(iVar1))
							{
								GlobalFunc_184(130, 1);
							}
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							func_68(ENTITY::GET_ENTITY_MODEL(iVar1));
							GlobalFunc_184(111, 1);
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
						{
							GlobalFunc_184(111, 1);
						}
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_68(int iParam0)//Position - 0x4364
{
	switch (GlobalFunc_2045(iParam0))
	{
		case 0:
			GlobalFunc_184(47, 1);
			break;
		
		case 1:
			GlobalFunc_184(43, 1);
			break;
		
		case 2:
			GlobalFunc_184(41, 1);
			break;
		
		case 3:
			GlobalFunc_184(46, 1);
			break;
		
		case 4:
			GlobalFunc_184(40, 1);
			break;
		
		case 5:
			GlobalFunc_184(42, 1);
			break;
		
		case 6:
			GlobalFunc_184(44, 1);
			break;
		
		case 7:
			GlobalFunc_184(45, 1);
			break;
	}
}



void func_71(int iParam0)//Position - 0x44F9
{
	switch (GlobalFunc_2045(iParam0))
	{
		case 0:
			GlobalFunc_184(11, 1);
			break;
		
		case 1:
			GlobalFunc_184(6, 1);
			break;
		
		case 2:
			GlobalFunc_184(1, 1);
			break;
		
		case 3:
			GlobalFunc_184(10, 1);
			break;
		
		case 4:
			GlobalFunc_184(0, 1);
			break;
		
		case 5:
			GlobalFunc_184(2, 1);
			break;
		
		case 6:
			GlobalFunc_184(8, 1);
			break;
		
		case 7:
			GlobalFunc_184(9, 1);
			break;
	}
	if (iParam0 == joaat("taxi"))
	{
		GlobalFunc_184(100, 1);
	}
	GlobalFunc_184(111, 1);
}

int func_72(var uParam0)//Position - 0x45A0
{
	if (VEHICLE::GET_VEHICLE_MOD_KIT(uParam0) >= 0 && VEHICLE::GET_VEHICLE_MOD_KIT(uParam0) < 255)
	{
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 0) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 3) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 4) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 5) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 6) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 7) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 10) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 11) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 12) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 13) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 14) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 15) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 16) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 23) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 24) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 1) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 2) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 8) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(uParam0, 9) != -1)
		{
			return 1;
		}
		if (VEHICLE::IS_TOGGLE_MOD_ON(uParam0, 18))
		{
			return 1;
		}
		if (VEHICLE::IS_TOGGLE_MOD_ON(uParam0, 22))
		{
			return 1;
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0)//Position - 0x4716
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	uVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
	{
		uVar1 = PED::GET_PED_SOURCE_OF_DEATH(uVar0);
		if (ENTITY::IS_ENTITY_A_VEHICLE(uVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			func_76(iVar2, PED::GET_PED_TYPE(uVar0));
		}
		else
		{
			iVar3 = PED::GET_PED_CAUSE_OF_DEATH(uVar0);
			iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
			func_75(iVar3, PED::GET_PED_TYPE(uVar0), iVar4);
		}
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		GlobalFunc_184(129, 1);
	}
	if (!func_74(iParam0))
	{
		return;
	}
	GlobalFunc_184(111, 1);
	iVar5 = MISC::GET_GAME_TIMER();
	iVar6 = (iVar5 - iLocal_22);
	iLocal_22 = iVar5;
	if (iVar6 > 2000)
	{
		iLocal_23 = 0;
	}
	else
	{
		iLocal_23++;
		if (iLocal_23 == 3)
		{
			GlobalFunc_184(127, 1);
		}
	}
}

int func_74(int iParam0)//Position - 0x47CB
{
	int iVar0;
	
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
	{
		return 0;
	}
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	if (GlobalFunc_1421(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())) == iVar0)
	{
		return 1;
	}
	return 0;
}

void func_75(int iParam0, int iParam1, int iParam2)//Position - 0x4803
{
	int iVar0;
	
	iVar0 = func_54(iParam0);
	if (iVar0 == 0)
	{
		GlobalFunc_184(108, 1);
	}
	switch (iParam1)
	{
		case 4:
		case 5:
			switch (iVar0)
			{
				case 0:
					GlobalFunc_184(63, 1);
					break;
				
				case 1:
					GlobalFunc_184(64, 1);
					break;
				
				case 2:
					GlobalFunc_184(65, 1);
					break;
			}
			break;
		
		case 22:
			switch (iVar0)
			{
				case 0:
					GlobalFunc_184(57, 1);
					break;
				
				case 1:
					GlobalFunc_184(58, 1);
					break;
				
				case 2:
					GlobalFunc_184(59, 1);
					break;
			}
			break;
		
		case 27:
		case 6:
			switch (iVar0)
			{
				case 0:
					GlobalFunc_184(54, 1);
					break;
				
				case 1:
					GlobalFunc_184(55, 1);
					break;
				
				case 2:
					GlobalFunc_184(56, 1);
					break;
			}
			break;
	}
	switch (iParam2)
	{
		case joaat("s_f_y_hooker_01"):
			GlobalFunc_184(121, 1);
			break;
		
		case joaat("a_f_m_bodybuild_01"):
		case joaat("a_m_m_beach_02"):
		case joaat("a_m_y_musclbeac_02"):
		case joaat("a_m_y_runner_01"):
		case joaat("a_m_y_roadcyc_01"):
		case joaat("a_m_y_skater_01"):
		case joaat("a_m_y_skater_02"):
		case joaat("a_m_y_sunbathe_01"):
		case joaat("a_m_y_surfer_01"):
		case joaat("a_m_y_yoga_01"):
		case joaat("s_m_y_baywatch_01"):
		case joaat("s_m_y_marine_02"):
			GlobalFunc_184(69, 1);
			break;
		
		case joaat("s_m_y_dealer_01"):
			GlobalFunc_184(125, 1);
			break;
	}
}

void func_76(int iParam0, int iParam1)//Position - 0x496C
{
	GlobalFunc_184(48, 1);
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			GlobalFunc_184(4, 1);
			break;
		
		case joaat("tanker"):
			GlobalFunc_184(5, 1);
			GlobalFunc_184(7, 1);
			GlobalFunc_184(91, 1);
			break;
		
		case joaat("packer"):
			GlobalFunc_184(7, 1);
			break;
		
		case joaat("phantom"):
			GlobalFunc_184(5, 1);
			break;
	}
	switch (GlobalFunc_2045(iParam0))
	{
		case 0:
			GlobalFunc_184(109, 1);
			break;
		
		case 1:
			GlobalFunc_184(104, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					GlobalFunc_184(60, 1);
					break;
			}
			break;
		
		case 2:
			GlobalFunc_184(102, 1);
			break;
		
		case 3:
			GlobalFunc_184(107, 1);
			break;
		
		case 4:
			GlobalFunc_184(101, 1);
			break;
		
		case 5:
			GlobalFunc_184(103, 1);
			break;
		
		case 6:
			GlobalFunc_184(105, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					GlobalFunc_184(61, 1);
					break;
			}
			break;
		
		case 7:
			GlobalFunc_184(106, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					GlobalFunc_184(62, 1);
					break;
			}
			break;
	}
}

void func_77(int iParam0)//Position - 0x4AB3
{
	ENTITY::DOES_ENTITY_EXIST(uParam0);
	ENTITY::IS_ENTITY_DEAD(iParam0);
}


void func_79()//Position - 0x4AD7
{
	int iVar0;
	int iVar1;
	
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		iLocal_32 = 0;
		return;
	}
	if (func_81(PLAYER::GET_PLAYER_INDEX(), -1))
	{
		iLocal_32 = 0;
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0);
		if (iLocal_32 != iVar0)
		{
			Local_26 = { Local_29 };
			iLocal_32 = iVar0;
		}
		if (iVar0 == 0)
		{
			return;
		}
		Local_26 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
		if (iLocal_32 == 0)
		{
			Local_29 = { Local_26 };
			iLocal_32 = iVar0;
			return;
		}
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_80(iVar1, MISC::GET_DISTANCE_BETWEEN_COORDS(Local_26, Local_29, 0)))
		{
			Local_29 = { Local_26 };
		}
	}
}

int func_80(int iParam0, float fParam1)//Position - 0x4B84
{
	if (fParam1 < 10f)
	{
		return 0;
	}
	switch (GlobalFunc_2045(iParam0))
	{
		case 0:
			GlobalFunc_184(28, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 1:
			GlobalFunc_184(24, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 2:
			GlobalFunc_184(21, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 3:
			GlobalFunc_184(27, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 4:
			GlobalFunc_184(20, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 5:
			GlobalFunc_184(22, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 6:
			GlobalFunc_184(25, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 7:
			GlobalFunc_184(26, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
	}
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			GlobalFunc_184(23, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			switch (GlobalFunc_8329())
			{
				case 0:
					GlobalFunc_184(141, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				
				case 1:
					GlobalFunc_184(142, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				
				case 2:
					GlobalFunc_184(143, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
			}
			break;
	}
	return 1;
}

int func_81(var uParam0, int iParam1)//Position - 0x4D28
{
	var uVar0;
	
	if (GlobalFunc_1471(uParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(uParam0), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(uParam0), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


void func_83()//Position - 0x4DB8
{
	func_84(0);
	func_84(1);
	func_84(2);
}

void func_84(int iParam0)//Position - 0x4DCF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_47050[iVar0 /*36*/].f_8)
		{
			iVar1 = Global_47050[iVar0 /*36*/].f_35;
			if (iVar1 > -1)
			{
				iVar2 = func_85(iParam0, iVar0);
				if (Global_47050[iVar0 /*36*/].f_9 <= 0f)
				{
					iVar2 = 0;
				}
				STATS::STAT_SET_INT(Global_49931[iVar1 /*7*/].f_3[iParam0], iVar2, 1);
			}
		}
		iVar0++;
	}
}

int func_85(int iParam0, int iParam1)//Position - 0x4E37
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam0)
		{
			case 0:
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0] == iParam1)
				{
					if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0] > 0)
					{
						return Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
					}
				}
				break;
			
			case 1:
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0] == iParam1)
				{
					if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0] > 0)
					{
						return Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
					}
				}
				break;
			
			case 2:
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0] == iParam1)
				{
					if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0] > 0)
					{
						return Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
					}
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

void func_86()//Position - 0x4F0C
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_52212;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_52215[iVar0 /*14*/].f_13 > 0)
		{
			Global_52215[iVar0 /*14*/].f_13 = (Global_52215[iVar0 /*14*/].f_13 - 1);
		}
		else if (func_88(iVar0))
		{
			func_87(&(Global_52215[iVar0 /*14*/]), -1);
			Global_52215[iVar0 /*14*/].f_13 = 60000;
		}
		SYSTEM::WAIT(0);
		func_67();
		iVar0++;
	}
}

int func_87(var uParam0, int iParam1)//Position - 0x4F7C
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = *uParam0;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_54597[iVar0 /*34*/][iVar1 /*11*/].f_9 == uParam0->f_9)
		{
			uParam0->f_10 = (uParam0->f_10 + 0.05f);
			return 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	fVar2 = 0f;
	iVar3 = -1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_54597[iVar0 /*34*/][iVar1 /*11*/].f_10 > fVar2)
		{
			iVar3 = iVar1;
			fVar2 = Global_54597[iVar0 /*34*/][iVar1 /*11*/].f_10;
		}
		iVar1++;
	}
	if (iVar3 == -1)
	{
		return 0;
	}
	if (uParam0->f_10 <= Global_54597[iVar0 /*34*/][iVar3 /*11*/].f_10)
	{
		uParam0->f_10 = (uParam0->f_10 + 1f);
		Global_54597[iVar0 /*34*/][iVar3 /*11*/].f_10 = uParam0->f_10;
		Global_54597[iVar0 /*34*/][iVar3 /*11*/].f_1 = { uParam0->f_1 };
		Global_54597[iVar0 /*34*/][iVar3 /*11*/].f_5 = { uParam0->f_5 };
		Global_54597[iVar0 /*34*/][iVar3 /*11*/].f_9 = uParam0->f_9;
		Global_54597[iVar0 /*34*/][iVar3 /*11*/] = *uParam0;
		return 1;
	}
	return 0;
}

int func_88(int iParam0)//Position - 0x5097
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	
	iVar0 = Global_52215[iParam0 /*14*/].f_12;
	fVar1 = Global_47050[iVar0 /*36*/].f_9;
	iVar2 = Global_47050[iVar0 /*36*/].f_13;
	while (iVar2 > 15)
	{
		iVar2 = (iVar2 - 16);
	}
	iVar3 = (iVar2 - 10);
	while (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	fVar4 = Global_47050[iVar0 /*36*/].f_14[iVar3];
	Global_47050[iVar0 /*36*/].f_14[Global_47050[iVar0 /*36*/].f_13] = func_6(iVar0);
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = iVar3 + 1;
	if (iVar8 == 16)
	{
		iVar8 = 0;
	}
	iVar9 = 0;
	iVar10 = iVar8;
	iVar11 = 0;
	iVar12 = 0;
	iVar9 = 0;
	while (iVar9 < 8)
	{
		iVar11 = iVar10 + 1;
		if (iVar11 == 16)
		{
			iVar11 = 0;
		}
		iVar12 = iVar11 + 1;
		if (iVar12 == 16)
		{
			iVar12 = 0;
		}
		if (Global_47050[iVar0 /*36*/].f_14[iVar10] < Global_47050[iVar0 /*36*/].f_14[iVar11])
		{
			iVar6++;
			fVar13 = (fVar13 + (Global_47050[iVar0 /*36*/].f_14[iVar11] - Global_47050[iVar0 /*36*/].f_14[iVar10]));
		}
		else
		{
			iVar7++;
			fVar14 = (fVar14 + (Global_47050[iVar0 /*36*/].f_14[iVar10] - Global_47050[iVar0 /*36*/].f_14[iVar11]));
		}
		if (Global_47050[iVar0 /*36*/].f_14[iVar10] < Global_47050[iVar0 /*36*/].f_14[iVar11] && Global_47050[iVar0 /*36*/].f_14[iVar12] < Global_47050[iVar0 /*36*/].f_14[iVar11])
		{
			iVar5++;
		}
		if (Global_47050[iVar0 /*36*/].f_14[iVar10] > Global_47050[iVar0 /*36*/].f_14[iVar11] && Global_47050[iVar0 /*36*/].f_14[iVar12] > Global_47050[iVar0 /*36*/].f_14[iVar11])
		{
			iVar5++;
		}
		iVar10++;
		if (iVar10 == 16)
		{
			iVar10 = 0;
		}
		iVar9++;
	}
	if (iVar6 < 0)
	{
		fVar13 = (fVar13 / IntToFloat(iVar6));
	}
	if (iVar7 > 0)
	{
		fVar14 = (fVar14 / IntToFloat(iVar7));
	}
	fVar15 = (fVar1 - fVar4);
	if (fVar15 < 0f)
	{
		fVar15 = (fVar15 * -1f);
	}
	switch (Global_52215[iParam0 /*14*/].f_11)
	{
		case 0:
			if (iVar6 < 6)
			{
				return 0;
			}
			if (fVar13 < (fVar4 * 0.04f))
			{
				return 0;
			}
			return 1;
			break;
		
		case 1:
			if (iVar7 < 6)
			{
				return 0;
			}
			if (fVar14 < (fVar4 * 0.04f))
			{
				return 0;
			}
			return 1;
			break;
		
		case 2:
			if (iVar5 < 7)
			{
				return 0;
			}
			if (fVar15 > (fVar4 * 0.01f))
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}


void func_90()//Position - 0x55AB
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (iVar0 < 42)
		{
			if (!Global_47050[iVar1 /*36*/].f_8)
			{
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_103[iVar0] > 0f)
				{
					Global_47050[iVar1 /*36*/].f_9 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_103[iVar0];
				}
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_146[iVar0] > 0f)
				{
					Global_47050[iVar1 /*36*/].f_31 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_146[iVar0];
				}
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_189[iVar0] > 0f)
				{
					Global_47050[iVar1 /*36*/].f_32 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_189[iVar0];
				}
				iVar0++;
			}
			if ((Global_47050[iVar1 /*36*/].f_32 > 0f && Global_47050[iVar1 /*36*/].f_31 > 0f) && Global_47050[iVar1 /*36*/].f_9 > 0f)
			{
				fVar2 = Global_47050[iVar1 /*36*/].f_9;
				if (fVar2 > Global_47050[iVar1 /*36*/].f_31)
				{
					Global_47050[iVar1 /*36*/].f_31 = fVar2;
				}
				if (fVar2 < Global_47050[iVar1 /*36*/].f_32)
				{
					Global_47050[iVar1 /*36*/].f_32 = fVar2;
				}
				iVar3 = 0;
				fVar4 = (Global_47050[iVar1 /*36*/].f_31 - Global_47050[iVar1 /*36*/].f_32);
				fVar5 = 0f;
				fVar10 = 2.147484E+09f;
				fVar11 = -2.147484E+09f;
				iVar3 = 15;
				while (iVar3 >= 0)
				{
					fVar6 = ((fVar4 * MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 5f)) * 0.01f);
					fVar8 = 1f;
					fVar9 = 1f;
					if (iVar3 == 15)
					{
						fVar12 = ((Global_47050[iVar1 /*36*/].f_31 - Global_47050[iVar1 /*36*/].f_9) / fVar4);
						if (fVar12 < 0.2f)
						{
							fVar8 = (fVar12 / 0.2f);
						}
						fVar13 = ((Global_47050[iVar1 /*36*/].f_9 - Global_47050[iVar1 /*36*/].f_32) / fVar4);
						if (fVar13 < 0.2f)
						{
							fVar9 = (fVar13 / 0.2f);
						}
						fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_47050[iVar1 /*36*/].f_14[iVar3] = Global_47050[iVar1 /*36*/].f_9;
					}
					else
					{
						fVar14 = ((Global_47050[iVar1 /*36*/].f_31 - Global_47050[iVar1 /*36*/].f_14[iVar3 + 1]) / fVar4);
						if (fVar14 < 0.2f)
						{
							fVar8 = (fVar14 / 0.2f);
						}
						fVar15 = ((Global_47050[iVar1 /*36*/].f_14[iVar3 + 1] - Global_47050[iVar1 /*36*/].f_32) / fVar4);
						if (fVar15 < 0.2f)
						{
							fVar9 = (fVar15 / 0.2f);
						}
						fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_47050[iVar1 /*36*/].f_14[iVar3] = (Global_47050[iVar1 /*36*/].f_14[iVar3 + 1] + fVar7);
					}
					fVar10 = GlobalFunc_2776(fVar10, Global_47050[iVar1 /*36*/].f_14[iVar3]);
					fVar11 = GlobalFunc_567(fVar11, Global_47050[iVar1 /*36*/].f_14[iVar3]);
					fVar5 = (fVar5 + Global_47050[iVar1 /*36*/].f_14[iVar3]);
					iVar3 = (iVar3 + -1);
				}
				Global_47050[iVar1 /*36*/].f_32 = fVar10;
				Global_47050[iVar1 /*36*/].f_31 = fVar11;
				fVar5 = (fVar5 / 16f);
				Global_47050[iVar1 /*36*/].f_33 = (Global_47050[iVar1 /*36*/].f_9 - fVar5);
				Global_47050[iVar1 /*36*/].f_34 = ((Global_47050[iVar1 /*36*/].f_33 / fVar5) * 100f);
				fVar16 = func_7(iVar1);
				if (fVar16 != 1f)
				{
					fVar5 = 0f;
					fVar17 = (fVar16 - 1f);
					iVar3 = 0;
					while (iVar3 <= 15)
					{
						fVar18 = (SYSTEM::TO_FLOAT(iVar3) / 16f);
						Global_47050[iVar1 /*36*/].f_14[iVar3] = (Global_47050[iVar1 /*36*/].f_14[iVar3] * (MISC::GET_RANDOM_FLOAT_IN_RANGE(0.95f, 1.05f) + (fVar18 * fVar17)));
						if (iVar3 == 15)
						{
							Global_47050[iVar1 /*36*/].f_14[iVar3] = (Global_47050[iVar1 /*36*/].f_9 * fVar16);
						}
						fVar5 = (fVar5 + Global_47050[iVar1 /*36*/].f_14[iVar3]);
						Global_47050[iVar1 /*36*/].f_32 = GlobalFunc_2776(Global_47050[iVar1 /*36*/].f_32, Global_47050[iVar1 /*36*/].f_14[iVar3]);
						Global_47050[iVar1 /*36*/].f_31 = GlobalFunc_567(Global_47050[iVar1 /*36*/].f_31, Global_47050[iVar1 /*36*/].f_14[iVar3]);
						iVar3++;
					}
					fVar5 = (fVar5 / 16f);
					Global_47050[iVar1 /*36*/].f_33 = (Global_47050[iVar1 /*36*/].f_9 - fVar5);
					Global_47050[iVar1 /*36*/].f_34 = ((Global_47050[iVar1 /*36*/].f_33 / fVar5) * 100f);
				}
			}
		}
		iVar1++;
	}
}



void func_93()//Position - 0x5A16
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (!Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_101)
	{
		iVar0 = 0;
		while (iVar0 < 80)
		{
			if (!Global_47050[iVar0 /*36*/].f_8)
			{
				Global_47050[iVar0 /*36*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 290f);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			func_28(1);
			iVar0 = 0;
			while (iVar0 < 80)
			{
				fVar2 = 0.85f;
				fVar3 = 1.15f;
				if (Global_47050[iVar0 /*36*/].f_9 < 5f)
				{
					fVar2 = 1.1f;
				}
				else if (Global_47050[iVar0 /*36*/].f_9 < 10f)
				{
					fVar2 = 0.95f;
				}
				else if (Global_47050[iVar0 /*36*/].f_9 > 285f)
				{
					fVar3 = 0.97f;
				}
				else if (Global_47050[iVar0 /*36*/].f_9 > 270f)
				{
					fVar3 = 1.05f;
				}
				Global_47050[iVar0 /*36*/].f_9 = (Global_47050[iVar0 /*36*/].f_9 * MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar2, fVar3));
				Global_47050[iVar0 /*36*/].f_9 = GlobalFunc_2776(GlobalFunc_567(MISC::ABSF(Global_47050[iVar0 /*36*/].f_9), 3.5f), 290f);
				iVar0++;
			}
			iVar1++;
		}
		func_42();
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_101 = 1;
	}
}

void func_94()//Position - 0x5B5B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_52212 = 0;
	Global_52214 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			StringCopy(&(Global_54597[iVar0 /*34*/][iVar1 /*11*/].f_1), "BSNEWS_DEFAULT", 16);
			StringCopy(&(Global_54597[iVar0 /*34*/][iVar1 /*11*/].f_5), "BSNEWS_DEFAULT", 16);
			iVar1++;
		}
		iVar0++;
	}
	func_95(55, "ECL_P_SR_H", "ECL_P_SR_C", 0, 0);
	func_95(55, "ECL_P_SF_H", "ECL_P_SF_C", 1, 0);
	func_95(55, "ECL_P_RF_H", "ECL_P_RF_C", 2, 0);
	func_95(51, "BGR_P_SR_H", "BGR_P_SR_C", 0, 0);
	func_95(51, "BGR_P_SF_H", "BGR_P_SF_C", 1, 0);
	func_95(52, "CLK_P_SR_H", "CLK_P_SR_C", 0, 0);
	func_95(52, "CLK_P_SF_H", "CLK_P_SF_C", 1, 0);
	func_95(52, "CLK_P_RF_H", "CLK_P_RF_C", 2, 0);
	func_95(48, "BEN_P_SR_H", "BEN_P_SR_C", 0, 0);
	func_95(48, "BEN_P_SF_H", "BEN_P_SF_C", 1, 0);
	func_95(48, "BEN_P_RF_H", "BEN_P_RF_C", 2, 0);
	func_95(13, "FLC_P_SR_H", "FLC_P_SR_C", 0, 0);
	func_95(13, "FLC_P_SF_H", "FLC_P_SF_C", 1, 0);
	func_95(13, "FLC_P_RF_H", "FLC_P_RF_C", 2, 0);
	func_95(64, "PRO_P_SR_H", "PRO_P_SR_C", 0, 0);
	func_95(64, "PRO_P_SF_H", "PRO_P_SF_C", 1, 0);
	func_95(64, "PRO_P_RF_H", "PRO_P_RF_C", 2, 0);
	func_95(70, "UNI_P_SR_H", "UNI_P_SR_C", 0, 0);
	func_95(70, "UNI_P_SF_H", "UNI_P_SF_C", 1, 0);
	func_95(70, "UNI_P_RF_H", "UNI_P_RF_C", 2, 0);
	func_95(60, "KRP_P_SR_H", "KRP_P_SR_C", 0, 0);
	func_95(60, "KRP_P_SF_H", "KRP_P_SF_C", 1, 0);
	func_95(60, "KRP_P_RF_H", "KRP_P_RF_C", 2, 0);
	func_95(56, "FUS_P_SR_H", "FUS_P_SR_C", 0, 0);
	func_95(56, "FUS_P_SF_H", "FUS_P_SF_C", 1, 0);
	func_95(56, "FUS_P_RF_H", "FUS_P_RF_C", 2, 0);
	func_95(58, "GOP_P_SR_H", "GOP_P_SR_C", 0, 0);
	func_95(58, "GOP_P_SF_H", "GOP_P_SF_C", 1, 0);
	func_95(58, "GOP_P_RF_H", "GOP_P_RF_C", 2, 0);
	func_95(53, "BAN_P_SR_H", "BAN_P_SR_C", 0, 0);
	func_95(53, "BAN_P_SF_H", "BAN_P_SF_C", 1, 0);
	func_95(53, "BAN_P_RF_H", "BAN_P_RF_C", 2, 0);
	func_95(62, "MAX_P_SR_H", "MAX_P_SR_C", 0, 0);
	func_95(62, "MAX_P_SF_H", "MAX_P_SF_C", 1, 0);
	func_95(62, "MAX_P_RF_H", "MAX_P_RF_C", 2, 0);
	func_95(57, "GAS_P_SR_H", "GAS_P_SR_C", 0, 0);
	func_95(57, "GAS_P_SF_H", "GAS_P_SF_C", 1, 0);
	func_95(57, "GAS_P_RF_H", "GAS_P_RF_C", 2, 0);
	func_95(59, "GRU_P_SR_H", "GRU_P_SR_C", 0, 0);
	func_95(59, "GRU_P_SF_H", "GRU_P_SF_C", 1, 0);
	func_95(59, "GRU_P_RF_H", "GRU_P_RF_C", 2, 0);
	func_95(44, "PMP_P_SR_H", "PMP_P_SR_C", 0, 0);
	func_95(44, "PMP_P_SF_H", "PMP_P_SF_C", 1, 0);
	func_95(44, "PMP_P_RF_H", "PMP_P_RF_C", 2, 0);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, (Global_52212 - 1));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			Global_54597[iVar0 /*34*/][iVar1 /*11*/].f_10 = 5000f;
			while (!func_87(&(Global_52215[iVar2 /*14*/]), iVar0))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, (Global_52212 - 1));
				SYSTEM::WAIT(2000);
			}
			Global_52215[iVar2 /*14*/].f_10 = 0f;
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, (Global_52212 - 1));
			iVar1++;
		}
		iVar0++;
	}
}

void func_95(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x5ED5
{
	if (Global_52212 == 150)
	{
		return;
	}
	Global_52215[Global_52212 /*14*/].f_11 = iParam3;
	Global_52215[Global_52212 /*14*/] = iParam4;
	StringCopy(&(Global_52215[Global_52212 /*14*/].f_1), sParam1, 16);
	StringCopy(&(Global_52215[Global_52212 /*14*/].f_5), sParam2, 16);
	Global_52215[Global_52212 /*14*/].f_9 = Global_52214;
	Global_52215[Global_52212 /*14*/].f_12 = iParam0;
	Global_52212++;
	Global_52214++;
}

void func_96()//Position - 0x5F43
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		Global_47050[iVar0 /*36*/].f_33 = 0f;
		Global_47050[iVar0 /*36*/].f_13 = 0;
		Global_47050[iVar0 /*36*/].f_12 = 0;
		Global_47050[iVar0 /*36*/].f_31 = 0f;
		Global_47050[iVar0 /*36*/].f_32 = 3.402823E+38f;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_47050[iVar0 /*36*/].f_14[iVar1] = 0f;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		Global_50493[iVar0 /*7*/].f_2 = 0;
		iVar0++;
	}
	StringCopy(&(Global_47050[0 /*36*/]), "BSS_BSTR_0", 16);
	StringCopy(&(Global_47050[0 /*36*/].f_4), "BSS_BSTR_1", 16);
	Global_47050[0 /*36*/].f_8 = 1;
	Global_47050[0 /*36*/].f_35 = 0;
	StringCopy(&(Global_47050[1 /*36*/]), "BSS_BSTR_2", 16);
	StringCopy(&(Global_47050[1 /*36*/].f_4), "BSS_BSTR_3", 16);
	Global_47050[1 /*36*/].f_8 = 1;
	Global_47050[1 /*36*/].f_35 = 1;
	StringCopy(&(Global_47050[2 /*36*/]), "BSS_BSTR_4", 16);
	StringCopy(&(Global_47050[2 /*36*/].f_4), "BSS_BSTR_5", 16);
	Global_47050[2 /*36*/].f_8 = 0;
	Global_47050[2 /*36*/].f_35 = 0;
	StringCopy(&(Global_47050[3 /*36*/]), "BSS_BSTR_6", 16);
	StringCopy(&(Global_47050[3 /*36*/].f_4), "BSS_BSTR_7", 16);
	Global_47050[3 /*36*/].f_8 = 1;
	Global_47050[3 /*36*/].f_35 = 2;
	StringCopy(&(Global_47050[4 /*36*/]), "BSS_BSTR_8", 16);
	StringCopy(&(Global_47050[4 /*36*/].f_4), "BSS_BSTR_9", 16);
	Global_47050[4 /*36*/].f_8 = 1;
	Global_47050[4 /*36*/].f_35 = 3;
	StringCopy(&(Global_47050[5 /*36*/]), "BSS_BSTR_10", 16);
	StringCopy(&(Global_47050[5 /*36*/].f_4), "BSS_BSTR_11", 16);
	Global_47050[5 /*36*/].f_8 = 1;
	Global_47050[5 /*36*/].f_35 = 4;
	StringCopy(&(Global_47050[6 /*36*/]), "BSS_BSTR_12", 16);
	StringCopy(&(Global_47050[6 /*36*/].f_4), "BSS_BSTR_13", 16);
	Global_47050[6 /*36*/].f_8 = 1;
	Global_47050[6 /*36*/].f_35 = 5;
	StringCopy(&(Global_47050[7 /*36*/]), "BSS_BSTR_14", 16);
	StringCopy(&(Global_47050[7 /*36*/].f_4), "BSS_BSTR_15", 16);
	Global_47050[7 /*36*/].f_8 = 1;
	Global_47050[7 /*36*/].f_35 = 6;
	StringCopy(&(Global_47050[8 /*36*/]), "BSS_BSTR_16", 16);
	StringCopy(&(Global_47050[8 /*36*/].f_4), "BSS_BSTR_16", 16);
	Global_47050[8 /*36*/].f_8 = 1;
	Global_47050[8 /*36*/].f_35 = 7;
	StringCopy(&(Global_47050[9 /*36*/]), "BSS_BSTR_17", 16);
	StringCopy(&(Global_47050[9 /*36*/].f_4), "BSS_BSTR_18", 16);
	Global_47050[9 /*36*/].f_8 = 1;
	Global_47050[9 /*36*/].f_35 = 8;
	StringCopy(&(Global_47050[10 /*36*/]), "BSS_BSTR_19", 16);
	StringCopy(&(Global_47050[10 /*36*/].f_4), "BSS_BSTR_20", 16);
	Global_47050[10 /*36*/].f_8 = 1;
	Global_47050[10 /*36*/].f_35 = 9;
	StringCopy(&(Global_47050[11 /*36*/]), "BSS_BSTR_21", 16);
	StringCopy(&(Global_47050[11 /*36*/].f_4), "BSS_BSTR_22", 16);
	Global_47050[11 /*36*/].f_8 = 1;
	Global_47050[11 /*36*/].f_35 = 10;
	StringCopy(&(Global_47050[12 /*36*/]), "BSS_BSTR_23", 16);
	StringCopy(&(Global_47050[12 /*36*/].f_4), "BSS_BSTR_24", 16);
	Global_47050[12 /*36*/].f_8 = 1;
	Global_47050[12 /*36*/].f_35 = 11;
	StringCopy(&(Global_47050[13 /*36*/]), "BSS_BSTR_25", 16);
	StringCopy(&(Global_47050[13 /*36*/].f_4), "BSS_BSTR_26", 16);
	Global_47050[13 /*36*/].f_8 = 0;
	Global_47050[13 /*36*/].f_35 = 1;
	StringCopy(&(Global_47050[14 /*36*/]), "BSS_BSTR_27", 16);
	StringCopy(&(Global_47050[14 /*36*/].f_4), "BSS_BSTR_28", 16);
	Global_47050[14 /*36*/].f_8 = 0;
	Global_47050[14 /*36*/].f_35 = 2;
	StringCopy(&(Global_47050[15 /*36*/]), "BSS_BSTR_29", 16);
	StringCopy(&(Global_47050[15 /*36*/].f_4), "BSS_BSTR_30", 16);
	Global_47050[15 /*36*/].f_8 = 1;
	Global_47050[15 /*36*/].f_35 = 12;
	StringCopy(&(Global_47050[16 /*36*/]), "BSS_BSTR_31", 16);
	StringCopy(&(Global_47050[16 /*36*/].f_4), "BSS_BSTR_32", 16);
	Global_47050[16 /*36*/].f_8 = 0;
	Global_47050[16 /*36*/].f_35 = 3;
	StringCopy(&(Global_47050[17 /*36*/]), "BSS_BSTR_33", 16);
	StringCopy(&(Global_47050[17 /*36*/].f_4), "BSS_BSTR_34", 16);
	Global_47050[17 /*36*/].f_8 = 0;
	Global_47050[17 /*36*/].f_35 = 4;
	StringCopy(&(Global_47050[18 /*36*/]), "BSS_BSTR_35", 16);
	StringCopy(&(Global_47050[18 /*36*/].f_4), "BSS_BSTR_36", 16);
	Global_47050[18 /*36*/].f_8 = 0;
	Global_47050[18 /*36*/].f_35 = 5;
	StringCopy(&(Global_47050[19 /*36*/]), "BSS_BSTR_37", 16);
	StringCopy(&(Global_47050[19 /*36*/].f_4), "BSS_BSTR_38", 16);
	Global_47050[19 /*36*/].f_8 = 0;
	Global_47050[19 /*36*/].f_35 = 6;
	StringCopy(&(Global_47050[20 /*36*/]), "BSS_BSTR_39", 16);
	StringCopy(&(Global_47050[20 /*36*/].f_4), "BSS_BSTR_40", 16);
	Global_47050[20 /*36*/].f_8 = 1;
	Global_47050[20 /*36*/].f_35 = 13;
	StringCopy(&(Global_47050[21 /*36*/]), "BSS_BSTR_41", 16);
	StringCopy(&(Global_47050[21 /*36*/].f_4), "BSS_BSTR_42", 16);
	Global_47050[21 /*36*/].f_8 = 1;
	Global_47050[21 /*36*/].f_35 = 14;
	StringCopy(&(Global_47050[22 /*36*/]), "BSS_BSTR_43", 16);
	StringCopy(&(Global_47050[22 /*36*/].f_4), "BSS_BSTR_44", 16);
	Global_47050[22 /*36*/].f_8 = 1;
	Global_47050[22 /*36*/].f_35 = 15;
	StringCopy(&(Global_47050[23 /*36*/]), "BSS_BSTR_45", 16);
	StringCopy(&(Global_47050[23 /*36*/].f_4), "BSS_BSTR_46", 16);
	Global_47050[23 /*36*/].f_8 = 1;
	Global_47050[23 /*36*/].f_35 = 16;
	StringCopy(&(Global_47050[24 /*36*/]), "BSS_BSTR_47", 16);
	StringCopy(&(Global_47050[24 /*36*/].f_4), "BSS_BSTR_48", 16);
	Global_47050[24 /*36*/].f_8 = 0;
	Global_47050[24 /*36*/].f_35 = 7;
	StringCopy(&(Global_47050[25 /*36*/]), "BSS_BSTR_49", 16);
	StringCopy(&(Global_47050[25 /*36*/].f_4), "BSS_BSTR_50", 16);
	Global_47050[25 /*36*/].f_8 = 1;
	Global_47050[25 /*36*/].f_35 = 17;
	StringCopy(&(Global_47050[26 /*36*/]), "BSS_BSTR_51", 16);
	StringCopy(&(Global_47050[26 /*36*/].f_4), "BSS_BSTR_52", 16);
	Global_47050[26 /*36*/].f_8 = 0;
	Global_47050[26 /*36*/].f_35 = 8;
	StringCopy(&(Global_47050[27 /*36*/]), "BSS_BSTR_53", 16);
	StringCopy(&(Global_47050[27 /*36*/].f_4), "BSS_BSTR_54", 16);
	Global_47050[27 /*36*/].f_8 = 1;
	Global_47050[27 /*36*/].f_35 = 18;
	StringCopy(&(Global_47050[28 /*36*/]), "BSS_BSTR_55", 16);
	StringCopy(&(Global_47050[28 /*36*/].f_4), "BSS_BSTR_56", 16);
	Global_47050[28 /*36*/].f_8 = 1;
	Global_47050[28 /*36*/].f_35 = 19;
	StringCopy(&(Global_47050[29 /*36*/]), "BSS_BSTR_57", 16);
	StringCopy(&(Global_47050[29 /*36*/].f_4), "BSS_BSTR_58", 16);
	Global_47050[29 /*36*/].f_8 = 0;
	Global_47050[29 /*36*/].f_35 = 9;
	StringCopy(&(Global_47050[30 /*36*/]), "BSS_BSTR_59", 16);
	StringCopy(&(Global_47050[30 /*36*/].f_4), "BSS_BSTR_60", 16);
	Global_47050[30 /*36*/].f_8 = 1;
	Global_47050[30 /*36*/].f_35 = 20;
	StringCopy(&(Global_47050[31 /*36*/]), "BSS_BSTR_61", 16);
	StringCopy(&(Global_47050[31 /*36*/].f_4), "BSS_BSTR_62", 16);
	Global_47050[31 /*36*/].f_8 = 1;
	Global_47050[31 /*36*/].f_35 = 21;
	StringCopy(&(Global_47050[32 /*36*/]), "BSS_BSTR_63", 16);
	StringCopy(&(Global_47050[32 /*36*/].f_4), "BSS_BSTR_64", 16);
	Global_47050[32 /*36*/].f_8 = 1;
	Global_47050[32 /*36*/].f_35 = 22;
	StringCopy(&(Global_47050[33 /*36*/]), "BSS_BSTR_65", 16);
	StringCopy(&(Global_47050[33 /*36*/].f_4), "BSS_BSTR_66", 16);
	Global_47050[33 /*36*/].f_8 = 1;
	Global_47050[33 /*36*/].f_35 = 23;
	StringCopy(&(Global_47050[34 /*36*/]), "BSS_BSTR_67", 16);
	StringCopy(&(Global_47050[34 /*36*/].f_4), "BSS_BSTR_68", 16);
	Global_47050[34 /*36*/].f_8 = 1;
	Global_47050[34 /*36*/].f_35 = 24;
	StringCopy(&(Global_47050[35 /*36*/]), "BSS_BSTR_69", 16);
	StringCopy(&(Global_47050[35 /*36*/].f_4), "BSS_BSTR_70", 16);
	Global_47050[35 /*36*/].f_8 = 1;
	Global_47050[35 /*36*/].f_35 = 25;
	StringCopy(&(Global_47050[36 /*36*/]), "BSS_BSTR_71", 16);
	StringCopy(&(Global_47050[36 /*36*/].f_4), "BSS_BSTR_72", 16);
	Global_47050[36 /*36*/].f_8 = 1;
	Global_47050[36 /*36*/].f_35 = 26;
	StringCopy(&(Global_47050[37 /*36*/]), "BSS_BSTR_73", 16);
	StringCopy(&(Global_47050[37 /*36*/].f_4), "BSS_BSTR_74", 16);
	Global_47050[37 /*36*/].f_8 = 1;
	Global_47050[37 /*36*/].f_35 = 27;
	StringCopy(&(Global_47050[38 /*36*/]), "BSS_BSTR_75", 16);
	StringCopy(&(Global_47050[38 /*36*/].f_4), "BSS_BSTR_76", 16);
	Global_47050[38 /*36*/].f_8 = 1;
	Global_47050[38 /*36*/].f_35 = 28;
	StringCopy(&(Global_47050[39 /*36*/]), "BSS_BSTR_77", 16);
	StringCopy(&(Global_47050[39 /*36*/].f_4), "BSS_BSTR_78", 16);
	Global_47050[39 /*36*/].f_8 = 1;
	Global_47050[39 /*36*/].f_35 = 29;
	StringCopy(&(Global_47050[40 /*36*/]), "BSS_BSTR_79", 16);
	StringCopy(&(Global_47050[40 /*36*/].f_4), "BSS_BSTR_80", 16);
	Global_47050[40 /*36*/].f_8 = 0;
	Global_47050[40 /*36*/].f_35 = 10;
	StringCopy(&(Global_47050[41 /*36*/]), "BSS_BSTR_81", 16);
	StringCopy(&(Global_47050[41 /*36*/].f_4), "BSS_BSTR_82", 16);
	Global_47050[41 /*36*/].f_8 = 1;
	Global_47050[41 /*36*/].f_35 = 30;
	StringCopy(&(Global_47050[42 /*36*/]), "BSS_BSTR_83", 16);
	StringCopy(&(Global_47050[42 /*36*/].f_4), "BSS_BSTR_84", 16);
	Global_47050[42 /*36*/].f_8 = 1;
	Global_47050[42 /*36*/].f_35 = 31;
	StringCopy(&(Global_47050[43 /*36*/]), "BSS_BSTR_85", 16);
	StringCopy(&(Global_47050[43 /*36*/].f_4), "BSS_BSTR_86", 16);
	Global_47050[43 /*36*/].f_8 = 1;
	Global_47050[43 /*36*/].f_35 = 32;
	StringCopy(&(Global_47050[44 /*36*/]), "BSS_BSTR_87", 16);
	StringCopy(&(Global_47050[44 /*36*/].f_4), "BSS_BSTR_88", 16);
	Global_47050[44 /*36*/].f_8 = 1;
	Global_47050[44 /*36*/].f_35 = 33;
	StringCopy(&(Global_47050[45 /*36*/]), "BSS_BSTR_89", 16);
	StringCopy(&(Global_47050[45 /*36*/].f_4), "BSS_BSTR_90", 16);
	Global_47050[45 /*36*/].f_8 = 1;
	Global_47050[45 /*36*/].f_35 = 34;
	StringCopy(&(Global_47050[46 /*36*/]), "BSS_BSTR_91", 16);
	StringCopy(&(Global_47050[46 /*36*/].f_4), "BSS_BSTR_92", 16);
	Global_47050[46 /*36*/].f_8 = 1;
	Global_47050[46 /*36*/].f_35 = 35;
	StringCopy(&(Global_47050[47 /*36*/]), "BSS_BSTR_93", 16);
	StringCopy(&(Global_47050[47 /*36*/].f_4), "BSS_BSTR_94", 16);
	Global_47050[47 /*36*/].f_8 = 0;
	Global_47050[47 /*36*/].f_35 = 11;
	StringCopy(&(Global_47050[48 /*36*/]), "BSS_BSTR_95", 16);
	StringCopy(&(Global_47050[48 /*36*/].f_4), "BSS_BSTR_96", 16);
	Global_47050[48 /*36*/].f_8 = 0;
	Global_47050[48 /*36*/].f_35 = 12;
	StringCopy(&(Global_47050[49 /*36*/]), "BSS_BSTR_97", 16);
	StringCopy(&(Global_47050[49 /*36*/].f_4), "BSS_BSTR_98", 16);
	Global_47050[49 /*36*/].f_8 = 0;
	Global_47050[49 /*36*/].f_35 = 13;
	StringCopy(&(Global_47050[50 /*36*/]), "BSS_BSTR_99", 16);
	StringCopy(&(Global_47050[50 /*36*/].f_4), "BSS_BSTR_100", 16);
	Global_47050[50 /*36*/].f_8 = 0;
	Global_47050[50 /*36*/].f_35 = 14;
	StringCopy(&(Global_47050[51 /*36*/]), "BSS_BSTR_101", 16);
	StringCopy(&(Global_47050[51 /*36*/].f_4), "BSS_BSTR_102", 16);
	Global_47050[51 /*36*/].f_8 = 0;
	Global_47050[51 /*36*/].f_35 = 15;
	StringCopy(&(Global_47050[52 /*36*/]), "BSS_BSTR_103", 16);
	StringCopy(&(Global_47050[52 /*36*/].f_4), "BSS_BSTR_104", 16);
	Global_47050[52 /*36*/].f_8 = 0;
	Global_47050[52 /*36*/].f_35 = 16;
	StringCopy(&(Global_47050[53 /*36*/]), "BSS_BSTR_105", 16);
	StringCopy(&(Global_47050[53 /*36*/].f_4), "BSS_BSTR_106", 16);
	Global_47050[53 /*36*/].f_8 = 0;
	Global_47050[53 /*36*/].f_35 = 17;
	StringCopy(&(Global_47050[54 /*36*/]), "BSS_BSTR_107", 16);
	StringCopy(&(Global_47050[54 /*36*/].f_4), "BSS_BSTR_108", 16);
	Global_47050[54 /*36*/].f_8 = 0;
	Global_47050[54 /*36*/].f_35 = 18;
	StringCopy(&(Global_47050[55 /*36*/]), "BSS_BSTR_109", 16);
	StringCopy(&(Global_47050[55 /*36*/].f_4), "BSS_BSTR_110", 16);
	Global_47050[55 /*36*/].f_8 = 0;
	Global_47050[55 /*36*/].f_35 = 19;
	StringCopy(&(Global_47050[56 /*36*/]), "BSS_BSTR_111", 16);
	StringCopy(&(Global_47050[56 /*36*/].f_4), "BSS_BSTR_112", 16);
	Global_47050[56 /*36*/].f_8 = 0;
	Global_47050[56 /*36*/].f_35 = 20;
	StringCopy(&(Global_47050[57 /*36*/]), "BSS_BSTR_113", 16);
	StringCopy(&(Global_47050[57 /*36*/].f_4), "BSS_BSTR_114", 16);
	Global_47050[57 /*36*/].f_8 = 0;
	Global_47050[57 /*36*/].f_35 = 21;
	StringCopy(&(Global_47050[58 /*36*/]), "BSS_BSTR_115", 16);
	StringCopy(&(Global_47050[58 /*36*/].f_4), "BSS_BSTR_116", 16);
	Global_47050[58 /*36*/].f_8 = 0;
	Global_47050[58 /*36*/].f_35 = 22;
	StringCopy(&(Global_47050[59 /*36*/]), "BSS_BSTR_117", 16);
	StringCopy(&(Global_47050[59 /*36*/].f_4), "BSS_BSTR_118", 16);
	Global_47050[59 /*36*/].f_8 = 0;
	Global_47050[59 /*36*/].f_35 = 23;
	StringCopy(&(Global_47050[60 /*36*/]), "BSS_BSTR_119", 16);
	StringCopy(&(Global_47050[60 /*36*/].f_4), "BSS_BSTR_120", 16);
	Global_47050[60 /*36*/].f_8 = 0;
	Global_47050[60 /*36*/].f_35 = 24;
	StringCopy(&(Global_47050[61 /*36*/]), "BSS_BSTR_121", 16);
	StringCopy(&(Global_47050[61 /*36*/].f_4), "BSS_BSTR_122", 16);
	Global_47050[61 /*36*/].f_8 = 0;
	Global_47050[61 /*36*/].f_35 = 25;
	StringCopy(&(Global_47050[62 /*36*/]), "BSS_BSTR_123", 16);
	StringCopy(&(Global_47050[62 /*36*/].f_4), "BSS_BSTR_124", 16);
	Global_47050[62 /*36*/].f_8 = 0;
	Global_47050[62 /*36*/].f_35 = 26;
	StringCopy(&(Global_47050[63 /*36*/]), "BSS_BSTR_125", 16);
	StringCopy(&(Global_47050[63 /*36*/].f_4), "BSS_BSTR_126", 16);
	Global_47050[63 /*36*/].f_8 = 0;
	Global_47050[63 /*36*/].f_35 = 27;
	StringCopy(&(Global_47050[64 /*36*/]), "BSS_BSTR_127", 16);
	StringCopy(&(Global_47050[64 /*36*/].f_4), "BSS_BSTR_128", 16);
	Global_47050[64 /*36*/].f_8 = 0;
	Global_47050[64 /*36*/].f_35 = 28;
	StringCopy(&(Global_47050[65 /*36*/]), "BSS_BSTR_129", 16);
	StringCopy(&(Global_47050[65 /*36*/].f_4), "BSS_BSTR_130", 16);
	Global_47050[65 /*36*/].f_8 = 0;
	Global_47050[65 /*36*/].f_35 = 29;
	StringCopy(&(Global_47050[66 /*36*/]), "BSS_BSTR_131", 16);
	StringCopy(&(Global_47050[66 /*36*/].f_4), "BSS_BSTR_132", 16);
	Global_47050[66 /*36*/].f_8 = 0;
	Global_47050[66 /*36*/].f_35 = 30;
	StringCopy(&(Global_47050[67 /*36*/]), "BSS_BSTR_133", 16);
	StringCopy(&(Global_47050[67 /*36*/].f_4), "BSS_BSTR_134", 16);
	Global_47050[67 /*36*/].f_8 = 0;
	Global_47050[67 /*36*/].f_35 = 31;
	StringCopy(&(Global_47050[68 /*36*/]), "BSS_BSTR_135", 16);
	StringCopy(&(Global_47050[68 /*36*/].f_4), "BSS_BSTR_136", 16);
	Global_47050[68 /*36*/].f_8 = 0;
	Global_47050[68 /*36*/].f_35 = 32;
	StringCopy(&(Global_47050[69 /*36*/]), "BSS_BSTR_137", 16);
	StringCopy(&(Global_47050[69 /*36*/].f_4), "BSS_BSTR_138", 16);
	Global_47050[69 /*36*/].f_8 = 0;
	Global_47050[69 /*36*/].f_35 = 33;
	StringCopy(&(Global_47050[70 /*36*/]), "BSS_BSTR_139", 16);
	StringCopy(&(Global_47050[70 /*36*/].f_4), "BSS_BSTR_140", 16);
	Global_47050[70 /*36*/].f_8 = 0;
	Global_47050[70 /*36*/].f_35 = 34;
	StringCopy(&(Global_47050[71 /*36*/]), "BSS_BSTR_141", 16);
	StringCopy(&(Global_47050[71 /*36*/].f_4), "BSS_BSTR_142", 16);
	Global_47050[71 /*36*/].f_8 = 1;
	Global_47050[71 /*36*/].f_35 = 36;
	StringCopy(&(Global_47050[72 /*36*/]), "BSS_BSTR_143", 16);
	StringCopy(&(Global_47050[72 /*36*/].f_4), "BSS_BSTR_144", 16);
	Global_47050[72 /*36*/].f_8 = 0;
	Global_47050[72 /*36*/].f_35 = 35;
	StringCopy(&(Global_47050[73 /*36*/]), "BSS_BSTR_145", 16);
	StringCopy(&(Global_47050[73 /*36*/].f_4), "BSS_BSTR_146", 16);
	Global_47050[73 /*36*/].f_8 = 0;
	Global_47050[73 /*36*/].f_35 = 36;
	StringCopy(&(Global_47050[74 /*36*/]), "BSS_BSTR_147", 16);
	StringCopy(&(Global_47050[74 /*36*/].f_4), "BSS_BSTR_148", 16);
	Global_47050[74 /*36*/].f_8 = 0;
	Global_47050[74 /*36*/].f_35 = 37;
	StringCopy(&(Global_47050[75 /*36*/]), "BSS_BSTR_149", 16);
	StringCopy(&(Global_47050[75 /*36*/].f_4), "BSS_BSTR_150", 16);
	Global_47050[75 /*36*/].f_8 = 0;
	Global_47050[75 /*36*/].f_35 = 38;
	StringCopy(&(Global_47050[76 /*36*/]), "BSS_BSTR_151", 16);
	StringCopy(&(Global_47050[76 /*36*/].f_4), "BSS_BSTR_152", 16);
	Global_47050[76 /*36*/].f_8 = 1;
	Global_47050[76 /*36*/].f_35 = 37;
	StringCopy(&(Global_47050[77 /*36*/]), "BSS_BSTR_153", 16);
	StringCopy(&(Global_47050[77 /*36*/].f_4), "BSS_BSTR_154", 16);
	Global_47050[77 /*36*/].f_8 = 1;
	Global_47050[77 /*36*/].f_35 = 38;
	StringCopy(&(Global_47050[78 /*36*/]), "BSS_BSTR_155", 16);
	StringCopy(&(Global_47050[78 /*36*/].f_4), "BSS_BSTR_156", 16);
	Global_47050[78 /*36*/].f_8 = 0;
	Global_47050[78 /*36*/].f_35 = 39;
	StringCopy(&(Global_47050[79 /*36*/]), "BSS_BSTR_157", 16);
	StringCopy(&(Global_47050[79 /*36*/].f_4), "BSS_BSTR_158", 16);
	Global_47050[79 /*36*/].f_8 = 0;
	Global_47050[79 /*36*/].f_35 = 40;
	Global_50205[0 /*7*/].f_2 = 1f;
	Global_50205[0 /*7*/].f_1 = 1f;
	Global_50205[0 /*7*/].f_3 = 1000f;
	Global_50205[0 /*7*/].f_4 = 3.5f;
	Global_50205[0 /*7*/].f_5 = 3.5f;
	Global_50205[0 /*7*/].f_6 = 0.1f;
	Global_50205[1 /*7*/].f_2 = 1f;
	Global_50205[1 /*7*/].f_1 = 1f;
	Global_50205[1 /*7*/].f_3 = 1000f;
	Global_50205[1 /*7*/].f_4 = 3.5f;
	Global_50205[1 /*7*/].f_5 = 3.5f;
	Global_50205[1 /*7*/].f_6 = 0.1f;
	Global_50205[2 /*7*/].f_2 = 1f;
	Global_50205[2 /*7*/].f_1 = 1f;
	Global_50205[2 /*7*/].f_3 = 1000f;
	Global_50205[2 /*7*/].f_4 = 3.5f;
	Global_50205[2 /*7*/].f_5 = 3.5f;
	Global_50205[2 /*7*/].f_6 = 0.1f;
	Global_50205[3 /*7*/].f_2 = 1f;
	Global_50205[3 /*7*/].f_1 = 1f;
	Global_50205[3 /*7*/].f_3 = 1000f;
	Global_50205[3 /*7*/].f_4 = 3.5f;
	Global_50205[3 /*7*/].f_5 = 3.5f;
	Global_50205[3 /*7*/].f_6 = 0.1f;
	Global_50205[4 /*7*/].f_2 = 1f;
	Global_50205[4 /*7*/].f_1 = 1f;
	Global_50205[4 /*7*/].f_3 = 1000f;
	Global_50205[4 /*7*/].f_4 = 3.5f;
	Global_50205[4 /*7*/].f_5 = 3.5f;
	Global_50205[4 /*7*/].f_6 = 0.1f;
	Global_50205[5 /*7*/].f_2 = 1f;
	Global_50205[5 /*7*/].f_1 = 1f;
	Global_50205[5 /*7*/].f_3 = 1000f;
	Global_50205[5 /*7*/].f_4 = 3.5f;
	Global_50205[5 /*7*/].f_5 = 3.5f;
	Global_50205[5 /*7*/].f_6 = 0.1f;
	Global_50205[6 /*7*/].f_2 = 1f;
	Global_50205[6 /*7*/].f_1 = 1f;
	Global_50205[6 /*7*/].f_3 = 1000f;
	Global_50205[6 /*7*/].f_4 = 3.5f;
	Global_50205[6 /*7*/].f_5 = 3.5f;
	Global_50205[6 /*7*/].f_6 = 0.1f;
	Global_50205[7 /*7*/].f_2 = 1f;
	Global_50205[7 /*7*/].f_1 = 1f;
	Global_50205[7 /*7*/].f_3 = 1000f;
	Global_50205[7 /*7*/].f_4 = 3.5f;
	Global_50205[7 /*7*/].f_5 = 3.5f;
	Global_50205[7 /*7*/].f_6 = 0.1f;
	Global_50205[8 /*7*/].f_2 = 1f;
	Global_50205[8 /*7*/].f_1 = 1f;
	Global_50205[8 /*7*/].f_3 = 1000f;
	Global_50205[8 /*7*/].f_4 = 3.5f;
	Global_50205[8 /*7*/].f_5 = 3.5f;
	Global_50205[8 /*7*/].f_6 = 0.1f;
	Global_50205[9 /*7*/].f_2 = 1f;
	Global_50205[9 /*7*/].f_1 = 1f;
	Global_50205[9 /*7*/].f_3 = 1000f;
	Global_50205[9 /*7*/].f_4 = 3.5f;
	Global_50205[9 /*7*/].f_5 = 3.5f;
	Global_50205[9 /*7*/].f_6 = 0.1f;
	Global_50205[10 /*7*/].f_2 = 1f;
	Global_50205[10 /*7*/].f_1 = 1f;
	Global_50205[10 /*7*/].f_3 = 1000f;
	Global_50205[10 /*7*/].f_4 = 3.5f;
	Global_50205[10 /*7*/].f_5 = 3.5f;
	Global_50205[10 /*7*/].f_6 = 0.1f;
	Global_50205[11 /*7*/].f_2 = 1f;
	Global_50205[11 /*7*/].f_1 = 1f;
	Global_50205[11 /*7*/].f_3 = 1000f;
	Global_50205[11 /*7*/].f_4 = 3.5f;
	Global_50205[11 /*7*/].f_5 = 3.5f;
	Global_50205[11 /*7*/].f_6 = 0.1f;
	Global_50205[12 /*7*/].f_2 = 1f;
	Global_50205[12 /*7*/].f_1 = 1f;
	Global_50205[12 /*7*/].f_3 = 1000f;
	Global_50205[12 /*7*/].f_4 = 3.5f;
	Global_50205[12 /*7*/].f_5 = 3.5f;
	Global_50205[12 /*7*/].f_6 = 0.1f;
	Global_50205[13 /*7*/].f_2 = 1f;
	Global_50205[13 /*7*/].f_1 = 1f;
	Global_50205[13 /*7*/].f_3 = 1000f;
	Global_50205[13 /*7*/].f_4 = 3.5f;
	Global_50205[13 /*7*/].f_5 = 3.5f;
	Global_50205[13 /*7*/].f_6 = 0.1f;
	Global_50205[14 /*7*/].f_2 = 1f;
	Global_50205[14 /*7*/].f_1 = 1f;
	Global_50205[14 /*7*/].f_3 = 1000f;
	Global_50205[14 /*7*/].f_4 = 3.5f;
	Global_50205[14 /*7*/].f_5 = 3.5f;
	Global_50205[14 /*7*/].f_6 = 0.1f;
	Global_50205[15 /*7*/].f_2 = 1f;
	Global_50205[15 /*7*/].f_1 = 1f;
	Global_50205[15 /*7*/].f_3 = 1000f;
	Global_50205[15 /*7*/].f_4 = 3.5f;
	Global_50205[15 /*7*/].f_5 = 3.5f;
	Global_50205[15 /*7*/].f_6 = 0.1f;
	Global_50205[16 /*7*/].f_2 = 1f;
	Global_50205[16 /*7*/].f_1 = 1f;
	Global_50205[16 /*7*/].f_3 = 1000f;
	Global_50205[16 /*7*/].f_4 = 3.5f;
	Global_50205[16 /*7*/].f_5 = 3.5f;
	Global_50205[16 /*7*/].f_6 = 0.1f;
	Global_50205[17 /*7*/].f_2 = 1f;
	Global_50205[17 /*7*/].f_1 = 1f;
	Global_50205[17 /*7*/].f_3 = 1000f;
	Global_50205[17 /*7*/].f_4 = 3.5f;
	Global_50205[17 /*7*/].f_5 = 3.5f;
	Global_50205[17 /*7*/].f_6 = 0.1f;
	Global_50205[18 /*7*/].f_2 = 1f;
	Global_50205[18 /*7*/].f_1 = 1f;
	Global_50205[18 /*7*/].f_3 = 1000f;
	Global_50205[18 /*7*/].f_4 = 3.5f;
	Global_50205[18 /*7*/].f_5 = 3.5f;
	Global_50205[18 /*7*/].f_6 = 0.1f;
	Global_50205[19 /*7*/].f_2 = 1f;
	Global_50205[19 /*7*/].f_1 = 1f;
	Global_50205[19 /*7*/].f_3 = 1000f;
	Global_50205[19 /*7*/].f_4 = 3.5f;
	Global_50205[19 /*7*/].f_5 = 3.5f;
	Global_50205[19 /*7*/].f_6 = 0.1f;
	Global_50205[20 /*7*/].f_2 = 1f;
	Global_50205[20 /*7*/].f_1 = 1f;
	Global_50205[20 /*7*/].f_3 = 1000f;
	Global_50205[20 /*7*/].f_4 = 3.5f;
	Global_50205[20 /*7*/].f_5 = 3.5f;
	Global_50205[20 /*7*/].f_6 = 0.1f;
	Global_50205[21 /*7*/].f_2 = 1f;
	Global_50205[21 /*7*/].f_1 = 1f;
	Global_50205[21 /*7*/].f_3 = 1000f;
	Global_50205[21 /*7*/].f_4 = 3.5f;
	Global_50205[21 /*7*/].f_5 = 3.5f;
	Global_50205[21 /*7*/].f_6 = 0.1f;
	Global_50205[22 /*7*/].f_2 = 1f;
	Global_50205[22 /*7*/].f_1 = 1f;
	Global_50205[22 /*7*/].f_3 = 1000f;
	Global_50205[22 /*7*/].f_4 = 3.5f;
	Global_50205[22 /*7*/].f_5 = 3.5f;
	Global_50205[22 /*7*/].f_6 = 0.1f;
	Global_50205[23 /*7*/].f_2 = 1f;
	Global_50205[23 /*7*/].f_1 = 1f;
	Global_50205[23 /*7*/].f_3 = 1000f;
	Global_50205[23 /*7*/].f_4 = 3.5f;
	Global_50205[23 /*7*/].f_5 = 3.5f;
	Global_50205[23 /*7*/].f_6 = 0.1f;
	Global_50205[24 /*7*/].f_2 = 1f;
	Global_50205[24 /*7*/].f_1 = 1f;
	Global_50205[24 /*7*/].f_3 = 1000f;
	Global_50205[24 /*7*/].f_4 = 3.5f;
	Global_50205[24 /*7*/].f_5 = 3.5f;
	Global_50205[24 /*7*/].f_6 = 0.1f;
	Global_50205[25 /*7*/].f_2 = 1f;
	Global_50205[25 /*7*/].f_1 = 1f;
	Global_50205[25 /*7*/].f_3 = 1000f;
	Global_50205[25 /*7*/].f_4 = 3.5f;
	Global_50205[25 /*7*/].f_5 = 3.5f;
	Global_50205[25 /*7*/].f_6 = 0.1f;
	Global_50205[26 /*7*/].f_2 = 1f;
	Global_50205[26 /*7*/].f_1 = 1f;
	Global_50205[26 /*7*/].f_3 = 1000f;
	Global_50205[26 /*7*/].f_4 = 3.5f;
	Global_50205[26 /*7*/].f_5 = 3.5f;
	Global_50205[26 /*7*/].f_6 = 0.1f;
	Global_50205[27 /*7*/].f_2 = 1f;
	Global_50205[27 /*7*/].f_1 = 1f;
	Global_50205[27 /*7*/].f_3 = 1000f;
	Global_50205[27 /*7*/].f_4 = 3.5f;
	Global_50205[27 /*7*/].f_5 = 3.5f;
	Global_50205[27 /*7*/].f_6 = 0.1f;
	Global_50205[28 /*7*/].f_2 = 1f;
	Global_50205[28 /*7*/].f_1 = 1f;
	Global_50205[28 /*7*/].f_3 = 1000f;
	Global_50205[28 /*7*/].f_4 = 3.5f;
	Global_50205[28 /*7*/].f_5 = 3.5f;
	Global_50205[28 /*7*/].f_6 = 0.1f;
	Global_50205[29 /*7*/].f_2 = 1f;
	Global_50205[29 /*7*/].f_1 = 1f;
	Global_50205[29 /*7*/].f_3 = 1000f;
	Global_50205[29 /*7*/].f_4 = 3.5f;
	Global_50205[29 /*7*/].f_5 = 3.5f;
	Global_50205[29 /*7*/].f_6 = 0.1f;
	Global_50205[30 /*7*/].f_2 = 1f;
	Global_50205[30 /*7*/].f_1 = 1f;
	Global_50205[30 /*7*/].f_3 = 1000f;
	Global_50205[30 /*7*/].f_4 = 3.5f;
	Global_50205[30 /*7*/].f_5 = 3.5f;
	Global_50205[30 /*7*/].f_6 = 0.1f;
	Global_50205[31 /*7*/].f_2 = 1f;
	Global_50205[31 /*7*/].f_1 = 1f;
	Global_50205[31 /*7*/].f_3 = 1000f;
	Global_50205[31 /*7*/].f_4 = 3.5f;
	Global_50205[31 /*7*/].f_5 = 3.5f;
	Global_50205[31 /*7*/].f_6 = 0.1f;
	Global_50205[32 /*7*/].f_2 = 1f;
	Global_50205[32 /*7*/].f_1 = 1f;
	Global_50205[32 /*7*/].f_3 = 1000f;
	Global_50205[32 /*7*/].f_4 = 3.5f;
	Global_50205[32 /*7*/].f_5 = 3.5f;
	Global_50205[32 /*7*/].f_6 = 0.1f;
	Global_50205[33 /*7*/].f_2 = 1f;
	Global_50205[33 /*7*/].f_1 = 1f;
	Global_50205[33 /*7*/].f_3 = 1000f;
	Global_50205[33 /*7*/].f_4 = 3.5f;
	Global_50205[33 /*7*/].f_5 = 3.5f;
	Global_50205[33 /*7*/].f_6 = 0.1f;
	Global_50205[34 /*7*/].f_2 = 1f;
	Global_50205[34 /*7*/].f_1 = 1f;
	Global_50205[34 /*7*/].f_3 = 1000f;
	Global_50205[34 /*7*/].f_4 = 3.5f;
	Global_50205[34 /*7*/].f_5 = 3.5f;
	Global_50205[34 /*7*/].f_6 = 0.1f;
	Global_50205[35 /*7*/].f_2 = 1f;
	Global_50205[35 /*7*/].f_1 = 1f;
	Global_50205[35 /*7*/].f_3 = 1000f;
	Global_50205[35 /*7*/].f_4 = 3.5f;
	Global_50205[35 /*7*/].f_5 = 3.5f;
	Global_50205[35 /*7*/].f_6 = 0.1f;
	Global_50205[36 /*7*/].f_2 = 1f;
	Global_50205[36 /*7*/].f_1 = 1f;
	Global_50205[36 /*7*/].f_3 = 1000f;
	Global_50205[36 /*7*/].f_4 = 3.5f;
	Global_50205[36 /*7*/].f_5 = 3.5f;
	Global_50205[36 /*7*/].f_6 = 0.1f;
	Global_50205[37 /*7*/].f_2 = 1f;
	Global_50205[37 /*7*/].f_1 = 1f;
	Global_50205[37 /*7*/].f_3 = 1000f;
	Global_50205[37 /*7*/].f_4 = 3.5f;
	Global_50205[37 /*7*/].f_5 = 3.5f;
	Global_50205[37 /*7*/].f_6 = 0.1f;
	Global_50205[38 /*7*/].f_2 = 1f;
	Global_50205[38 /*7*/].f_1 = 1f;
	Global_50205[38 /*7*/].f_3 = 1000f;
	Global_50205[38 /*7*/].f_4 = 3.5f;
	Global_50205[38 /*7*/].f_5 = 3.5f;
	Global_50205[38 /*7*/].f_6 = 0.1f;
	Global_50205[39 /*7*/].f_2 = 1f;
	Global_50205[39 /*7*/].f_1 = 1f;
	Global_50205[39 /*7*/].f_3 = 1000f;
	Global_50205[39 /*7*/].f_4 = 3.5f;
	Global_50205[39 /*7*/].f_5 = 3.5f;
	Global_50205[39 /*7*/].f_6 = 0.1f;
	Global_50205[40 /*7*/].f_2 = 1f;
	Global_50205[40 /*7*/].f_1 = 1f;
	Global_50205[40 /*7*/].f_3 = 1000f;
	Global_50205[40 /*7*/].f_4 = 3.5f;
	Global_50205[40 /*7*/].f_5 = 3.5f;
	Global_50205[40 /*7*/].f_6 = 0.1f;
	Global_50493[0 /*7*/].f_1 = joaat("sm_brvecdesbfa");
	Global_50493[0 /*7*/] = 1;
	Global_50493[1 /*7*/].f_1 = joaat("sm_brvecdesbru");
	Global_50493[1 /*7*/] = 1;
	Global_50493[3 /*7*/].f_1 = joaat("sm_brvecdeslsc");
	Global_50493[3 /*7*/] = 1;
	Global_50493[4 /*7*/].f_1 = joaat("sm_brvecdeslst");
	Global_50493[4 /*7*/] = 1;
	Global_50493[5 /*7*/].f_1 = joaat("sm_brvecdesltd");
	Global_50493[5 /*7*/] = 1;
	Global_50493[6 /*7*/].f_1 = joaat("sm_brvecdesmai");
	Global_50493[6 /*7*/] = 1;
	Global_50493[7 /*7*/].f_1 = joaat("sm_brvecdesron");
	Global_50493[7 /*7*/] = 1;
	Global_50493[8 /*7*/].f_1 = joaat("sm_brvecdessht");
	Global_50493[8 /*7*/] = 1;
	Global_50493[9 /*7*/].f_1 = joaat("sm_brvecdesuma");
	Global_50493[9 /*7*/] = 1;
	Global_50493[10 /*7*/].f_1 = joaat("sm_brvecdesvap");
	Global_50493[10 /*7*/] = 1;
	Global_50493[11 /*7*/].f_1 = joaat("sm_brvecdeshvy");
	Global_50493[11 /*7*/] = 1;
	Global_50493[12 /*7*/].f_1 = joaat("sm_vecbuybfa");
	Global_50493[12 /*7*/] = 1;
	Global_50493[13 /*7*/].f_1 = joaat("sm_vecbuybru");
	Global_50493[13 /*7*/] = 1;
	Global_50493[15 /*7*/].f_1 = joaat("sm_vecbuymai");
	Global_50493[15 /*7*/] = 1;
	Global_50493[16 /*7*/].f_1 = joaat("sm_vecbuysht");
	Global_50493[16 /*7*/] = 1;
	Global_50493[17 /*7*/].f_1 = joaat("sm_vecbuyuma");
	Global_50493[17 /*7*/] = 1;
	Global_50493[18 /*7*/].f_1 = joaat("sm_vecbuyvap");
	Global_50493[18 /*7*/] = 1;
	Global_50493[19 /*7*/].f_1 = joaat("sm_vecbuyhvy");
	Global_50493[19 /*7*/] = 1;
	Global_50493[20 /*7*/].f_1 = joaat("sm_disdrivbfa");
	Global_50493[20 /*7*/] = 1;
	Global_50493[21 /*7*/].f_1 = joaat("sm_disdrivbru");
	Global_50493[21 /*7*/] = 1;
	Global_50493[23 /*7*/].f_1 = joaat("sm_disdrivlst");
	Global_50493[23 /*7*/] = 1;
	Global_50493[24 /*7*/].f_1 = joaat("sm_disdrivmai");
	Global_50493[24 /*7*/] = 1;
	Global_50493[25 /*7*/].f_1 = joaat("sm_disdrivsht");
	Global_50493[25 /*7*/] = 1;
	Global_50493[26 /*7*/].f_1 = joaat("sm_disdrivuma");
	Global_50493[26 /*7*/] = 1;
	Global_50493[27 /*7*/].f_1 = joaat("sm_disdrivvap");
	Global_50493[27 /*7*/] = 1;
	Global_50493[28 /*7*/].f_1 = joaat("sm_disdrivhvy");
	Global_50493[28 /*7*/] = 1;
	Global_50493[30 /*7*/].f_1 = joaat("sm_vecmodlsc");
	Global_50493[30 /*7*/] = 1;
	Global_50493[31 /*7*/].f_1 = joaat("sm_vecstolbfa");
	Global_50493[31 /*7*/] = 1;
	Global_50493[32 /*7*/].f_1 = joaat("sm_vecstolbru");
	Global_50493[32 /*7*/] = 1;
	Global_50493[34 /*7*/].f_1 = joaat("sm_vecstollst");
	Global_50493[34 /*7*/] = 1;
	Global_50493[35 /*7*/].f_1 = joaat("sm_vecstolmai");
	Global_50493[35 /*7*/] = 1;
	Global_50493[36 /*7*/].f_1 = joaat("sm_vecstolsht");
	Global_50493[36 /*7*/] = 1;
	Global_50493[37 /*7*/].f_1 = joaat("sm_vecstoluma");
	Global_50493[37 /*7*/] = 1;
	Global_50493[38 /*7*/].f_1 = joaat("sm_vecstolvap");
	Global_50493[38 /*7*/] = 1;
	Global_50493[39 /*7*/].f_1 = joaat("sm_vecstolhvy");
	Global_50493[39 /*7*/] = 1;
	Global_50493[40 /*7*/].f_1 = joaat("sm_vecdmgbfa");
	Global_50493[40 /*7*/] = 1;
	Global_50493[41 /*7*/].f_1 = joaat("sm_vecdmgbru");
	Global_50493[41 /*7*/] = 1;
	Global_50493[43 /*7*/].f_1 = joaat("sm_vecdmgmai");
	Global_50493[43 /*7*/] = 1;
	Global_50493[44 /*7*/].f_1 = joaat("sm_vecdmgsht");
	Global_50493[44 /*7*/] = 1;
	Global_50493[45 /*7*/].f_1 = joaat("sm_vecdmguma");
	Global_50493[45 /*7*/] = 1;
	Global_50493[46 /*7*/].f_1 = joaat("sm_vecdmgvap");
	Global_50493[46 /*7*/] = 1;
	Global_50493[47 /*7*/].f_1 = joaat("sm_vecdmghvy");
	Global_50493[47 /*7*/] = 1;
	Global_50493[48 /*7*/].f_1 = joaat("sm_vecpedkil");
	Global_50493[48 /*7*/] = 1;
	Global_50493[49 /*7*/].f_1 = joaat("sm_wepbuyshr");
	Global_50493[49 /*7*/] = 1;
	Global_50493[50 /*7*/].f_1 = joaat("sm_wepbuyhal");
	Global_50493[50 /*7*/] = 1;
	Global_50493[51 /*7*/].f_1 = joaat("sm_weptakevom");
	Global_50493[51 /*7*/] = 1;
	Global_50493[52 /*7*/].f_1 = joaat("sm_weptakeshr");
	Global_50493[52 /*7*/] = 1;
	Global_50493[53 /*7*/].f_1 = joaat("sm_weptakehal");
	Global_50493[53 /*7*/] = 1;
	Global_50493[54 /*7*/].f_1 = joaat("sm_kilcopvom");
	Global_50493[54 /*7*/] = 1;
	Global_50493[55 /*7*/].f_1 = joaat("sm_kilcopshr");
	Global_50493[55 /*7*/] = 1;
	Global_50493[56 /*7*/].f_1 = joaat("sm_kilcophal");
	Global_50493[56 /*7*/] = 1;
	Global_50493[57 /*7*/].f_1 = joaat("sm_kilcrimvom");
	Global_50493[57 /*7*/] = 1;
	Global_50493[58 /*7*/].f_1 = joaat("sm_kilcrimshr");
	Global_50493[58 /*7*/] = 1;
	Global_50493[59 /*7*/].f_1 = joaat("sm_kilcrimhal");
	Global_50493[59 /*7*/] = 1;
	Global_50493[60 /*7*/].f_1 = joaat("sm_kilcivmai");
	Global_50493[60 /*7*/] = 1;
	Global_50493[61 /*7*/].f_1 = joaat("sm_kilcivsht");
	Global_50493[61 /*7*/] = 1;
	Global_50493[62 /*7*/].f_1 = joaat("sm_kilcivuma");
	Global_50493[62 /*7*/] = 1;
	Global_50493[63 /*7*/].f_1 = joaat("sm_kilcivvom");
	Global_50493[63 /*7*/] = 1;
	Global_50493[64 /*7*/].f_1 = joaat("sm_kilcivshr");
	Global_50493[64 /*7*/] = 1;
	Global_50493[65 /*7*/].f_1 = joaat("sm_kilcivhal");
	Global_50493[65 /*7*/] = 1;
	Global_50493[67 /*7*/].f_1 = joaat("sm_venusespu");
	Global_50493[67 /*7*/] = 1;
	Global_50493[68 /*7*/].f_1 = joaat("sm_newdam");
	Global_50493[68 /*7*/] = 1;
	Global_50493[69 /*7*/].f_1 = joaat("sm_hpkil");
	Global_50493[69 /*7*/] = 1;
	Global_50493[70 /*7*/].f_1 = joaat("sm_pubclub");
	Global_50493[70 /*7*/] = 1;
	Global_50493[71 /*7*/].f_1 = joaat("sm_tdrnk");
	Global_50493[71 /*7*/] = 1;
	Global_50493[72 /*7*/].f_1 = joaat("sm_frnpub");
	Global_50493[72 /*7*/] = 1;
	Global_50493[73 /*7*/].f_1 = joaat("sm_drnkcrm");
	Global_50493[73 /*7*/] = 1;
	Global_50493[74 /*7*/].f_1 = joaat("sm_ramcom");
	Global_50493[74 /*7*/] = 1;
	Global_50493[76 /*7*/].f_1 = joaat("sm_radcnt");
	Global_50493[76 /*7*/] = 1;
	Global_50493[77 /*7*/].f_1 = joaat("sm_radwzl");
	Global_50493[77 /*7*/] = 1;
	Global_50493[78 /*7*/].f_1 = joaat("sm_radzit");
	Global_50493[78 /*7*/] = 1;
	Global_50493[81 /*7*/].f_1 = joaat("sm_zititcnt");
	Global_50493[81 /*7*/] = 1;
	Global_50493[82 /*7*/].f_1 = joaat("sm_zititwzl");
	Global_50493[82 /*7*/] = 1;
	Global_50493[83 /*7*/].f_1 = joaat("sm_zititzit");
	Global_50493[83 /*7*/] = 1;
	Global_50493[84 /*7*/].f_1 = joaat("sm_radchacnt");
	Global_50493[84 /*7*/] = 1;
	Global_50493[85 /*7*/].f_1 = joaat("sm_radchawzl");
	Global_50493[85 /*7*/] = 1;
	Global_50493[88 /*7*/].f_1 = joaat("sm_para");
	Global_50493[88 /*7*/] = 1;
	Global_50493[89 /*7*/].f_1 = joaat("sm_tkfire");
	Global_50493[89 /*7*/] = 1;
	Global_50493[90 /*7*/].f_1 = joaat("sm_fibai");
	Global_50493[90 /*7*/] = 1;
	Global_50493[91 /*7*/].f_1 = joaat("sm_tandes");
	Global_50493[91 /*7*/] = 1;
	Global_50493[92 /*7*/].f_1 = joaat("sm_garep");
	Global_50493[92 /*7*/] = 1;
	Global_50493[93 /*7*/].f_1 = joaat("sm_gamonsp");
	Global_50493[93 /*7*/] = 1;
	Global_50493[94 /*7*/].f_1 = joaat("sm_monb");
	Global_50493[94 /*7*/] = 1;
	Global_50493[98 /*7*/].f_1 = joaat("sm_monupshk");
	Global_50493[98 /*7*/] = 1;
	Global_50493[100 /*7*/].f_1 = joaat("sm_taxdest");
	Global_50493[100 /*7*/] = 1;
	Global_50493[101 /*7*/].f_1 = joaat("sm_kilwbfa");
	Global_50493[101 /*7*/] = 1;
	Global_50493[102 /*7*/].f_1 = joaat("sm_kilwbru");
	Global_50493[102 /*7*/] = 1;
	Global_50493[104 /*7*/].f_1 = joaat("sm_kilwmai");
	Global_50493[104 /*7*/] = 1;
	Global_50493[105 /*7*/].f_1 = joaat("sm_kilwsht");
	Global_50493[105 /*7*/] = 1;
	Global_50493[106 /*7*/].f_1 = joaat("sm_kilwuma");
	Global_50493[106 /*7*/] = 1;
	Global_50493[107 /*7*/].f_1 = joaat("sm_kilwvap");
	Global_50493[107 /*7*/] = 1;
	Global_50493[108 /*7*/].f_1 = joaat("sm_kilwvom");
	Global_50493[108 /*7*/] = 1;
	Global_50493[109 /*7*/].f_1 = joaat("sm_kilwhvy");
	Global_50493[109 /*7*/] = 1;
	Global_50493[112 /*7*/].f_1 = joaat("sm_clobofbin");
	Global_50493[112 /*7*/] = 1;
	Global_50493[113 /*7*/].f_1 = joaat("sm_clobofpkw");
	Global_50493[113 /*7*/] = 1;
	Global_50493[114 /*7*/].f_1 = joaat("sm_clobofpon");
	Global_50493[114 /*7*/] = 1;
	Global_50493[117 /*7*/].f_1 = joaat("sm_yoga");
	Global_50493[117 /*7*/] = 1;
	Global_50493[118 /*7*/].f_1 = joaat("sm_tri");
	Global_50493[118 /*7*/] = 1;
	Global_50493[119 /*7*/].f_1 = joaat("sm_gym");
	Global_50493[119 /*7*/] = 1;
	Global_50493[120 /*7*/].f_1 = joaat("sm_strip");
	Global_50493[120 /*7*/] = 1;
	Global_50493[121 /*7*/].f_1 = joaat("sm_ughok");
	Global_50493[121 /*7*/] = 1;
	Global_50493[122 /*7*/].f_1 = joaat("sm_strtro");
	Global_50493[122 /*7*/] = 1;
	Global_50493[123 /*7*/].f_1 = joaat("sm_pisco");
	Global_50493[123 /*7*/] = 1;
	Global_50493[124 /*7*/].f_1 = joaat("sm_totinj");
	Global_50493[124 /*7*/] = 1;
	Global_50493[125 /*7*/].f_1 = joaat("sm_drugkil");
	Global_50493[125 /*7*/] = 1;
	Global_50493[126 /*7*/].f_1 = joaat("sm_hangovr");
	Global_50493[126 /*7*/] = 1;
	Global_50493[127 /*7*/].f_1 = joaat("sm_killspr");
	Global_50493[127 /*7*/] = 1;
	Global_50493[129 /*7*/].f_1 = joaat("sm_pedfirekill");
	Global_50493[129 /*7*/] = 1;
	Global_50493[130 /*7*/].f_1 = joaat("sm_pedfiretick");
	Global_50493[130 /*7*/] = 1;
	Global_50493[131 /*7*/].f_1 = joaat("sm_tvtickwap");
	Global_50493[131 /*7*/] = 1;
	Global_50493[132 /*7*/].f_1 = joaat("sm_tvtickwiw");
	Global_50493[132 /*7*/] = 1;
	Global_50493[134 /*7*/].f_1 = joaat("sm_zitpopzit");
	Global_50493[134 /*7*/] = 1;
	Global_50493[135 /*7*/].f_1 = joaat("sm_carapp");
	Global_50493[135 /*7*/] = 1;
	Global_50493[137 /*7*/].f_1 = joaat("sm_storob");
	Global_50493[137 /*7*/] = 1;
	Global_50493[162 /*7*/].f_1 = joaat("sm_phoncalbdg");
	Global_50493[162 /*7*/] = 1;
	Global_50493[163 /*7*/].f_1 = joaat("sm_phoncaltnk");
	Global_50493[163 /*7*/] = 1;
	Global_50493[164 /*7*/].f_1 = joaat("sm_phoncalwiz");
	Global_50493[164 /*7*/] = 1;
	Global_50493[165 /*7*/].f_1 = joaat("sm_phontxtbdg");
	Global_50493[165 /*7*/] = 1;
	Global_50493[166 /*7*/].f_1 = joaat("sm_phontxttnk");
	Global_50493[166 /*7*/] = 1;
	Global_50493[167 /*7*/].f_1 = joaat("sm_phontxtwiz");
	Global_50493[167 /*7*/] = 1;
	Global_50493[168 /*7*/].f_1 = joaat("sm_chtickbdg");
	Global_50493[168 /*7*/] = 1;
	Global_50493[169 /*7*/].f_1 = joaat("sm_chticktnk");
	Global_50493[169 /*7*/] = 1;
	Global_50493[170 /*7*/].f_1 = joaat("sm_chtickwiz");
	Global_50493[170 /*7*/] = 1;
	Global_50493[171 /*7*/].f_1 = joaat("sm_calcanbdg");
	Global_50493[171 /*7*/] = 1;
	Global_50493[172 /*7*/].f_1 = joaat("sm_calcantnk");
	Global_50493[172 /*7*/] = 1;
	Global_50493[173 /*7*/].f_1 = joaat("sm_calcanwiz");
	Global_50493[173 /*7*/] = 1;
	Global_50493[138 /*7*/].f_2 = 1;
	Global_50493[138 /*7*/].f_3 = joaat("sp0_dist_walking");
	Global_50493[138 /*7*/].f_4 = 1;
	Global_50493[139 /*7*/].f_2 = 1;
	Global_50493[139 /*7*/].f_3 = joaat("sp1_dist_walking");
	Global_50493[139 /*7*/].f_4 = 1;
	Global_50493[140 /*7*/].f_2 = 1;
	Global_50493[140 /*7*/].f_3 = joaat("sp2_dist_walking");
	Global_50493[140 /*7*/].f_4 = 1;
	Global_50493[141 /*7*/].f_2 = 1;
	Global_50493[141 /*7*/].f_3 = joaat("sp0_dist_driving_bicycle");
	Global_50493[141 /*7*/].f_4 = 1;
	Global_50493[142 /*7*/].f_2 = 1;
	Global_50493[142 /*7*/].f_3 = joaat("sp1_dist_driving_bicycle");
	Global_50493[142 /*7*/].f_4 = 1;
	Global_50493[143 /*7*/].f_2 = 1;
	Global_50493[143 /*7*/].f_3 = joaat("sp2_dist_driving_bicycle");
	Global_50493[143 /*7*/].f_4 = 1;
	Global_50493[144 /*7*/].f_2 = 1;
	Global_50493[144 /*7*/].f_3 = joaat("sp0_bailed_from_vehicle");
	Global_50493[144 /*7*/].f_4 = 0;
	Global_50493[145 /*7*/].f_2 = 1;
	Global_50493[145 /*7*/].f_3 = joaat("sp1_bailed_from_vehicle");
	Global_50493[145 /*7*/].f_4 = 0;
	Global_50493[146 /*7*/].f_2 = 1;
	Global_50493[146 /*7*/].f_3 = joaat("sp2_bailed_from_vehicle");
	Global_50493[146 /*7*/].f_4 = 0;
	Global_50493[150 /*7*/].f_2 = 1;
	Global_50493[150 /*7*/].f_3 = joaat("sp0_large_accidents");
	Global_50493[150 /*7*/].f_4 = 0;
	Global_50493[151 /*7*/].f_2 = 1;
	Global_50493[151 /*7*/].f_3 = joaat("sp1_large_accidents");
	Global_50493[151 /*7*/].f_4 = 0;
	Global_50493[152 /*7*/].f_2 = 1;
	Global_50493[152 /*7*/].f_3 = joaat("sp2_large_accidents");
	Global_50493[152 /*7*/].f_4 = 0;
	Global_50493[153 /*7*/].f_2 = 1;
	Global_50493[153 /*7*/].f_3 = joaat("sp0_total_legitimate_kills");
	Global_50493[153 /*7*/].f_4 = 0;
	Global_50493[154 /*7*/].f_2 = 1;
	Global_50493[154 /*7*/].f_3 = joaat("sp1_total_legitimate_kills");
	Global_50493[154 /*7*/].f_4 = 0;
	Global_50493[155 /*7*/].f_2 = 1;
	Global_50493[155 /*7*/].f_3 = joaat("sp2_total_legitimate_kills");
	Global_50493[155 /*7*/].f_4 = 0;
	Global_50493[156 /*7*/].f_2 = 1;
	Global_50493[156 /*7*/].f_3 = joaat("sp0_money_spent_on_taxis");
	Global_50493[156 /*7*/].f_4 = 0;
	Global_50493[157 /*7*/].f_2 = 1;
	Global_50493[157 /*7*/].f_3 = joaat("sp1_money_spent_on_taxis");
	Global_50493[157 /*7*/].f_4 = 0;
	Global_50493[158 /*7*/].f_2 = 1;
	Global_50493[158 /*7*/].f_3 = joaat("sp2_money_spent_on_taxis");
	Global_50493[158 /*7*/].f_4 = 0;
	Global_50493[159 /*7*/].f_2 = 1;
	Global_50493[159 /*7*/].f_3 = joaat("sp0_money_spent_on_healthcare");
	Global_50493[159 /*7*/].f_4 = 0;
	Global_50493[160 /*7*/].f_2 = 1;
	Global_50493[160 /*7*/].f_3 = joaat("sp1_money_spent_on_healthcare");
	Global_50493[160 /*7*/].f_4 = 0;
	Global_50493[161 /*7*/].f_2 = 1;
	Global_50493[161 /*7*/].f_3 = joaat("sp2_money_spent_on_healthcare");
	Global_50493[161 /*7*/].f_4 = 0;
	Global_50493[174 /*7*/].f_2 = 1;
	Global_50493[174 /*7*/].f_3 = joaat("sp0_money_spent_in_cop_bribes");
	Global_50493[174 /*7*/].f_4 = 0;
	Global_50493[175 /*7*/].f_2 = 1;
	Global_50493[175 /*7*/].f_3 = joaat("sp1_money_spent_in_cop_bribes");
	Global_50493[175 /*7*/].f_4 = 0;
	Global_50493[176 /*7*/].f_2 = 1;
	Global_50493[176 /*7*/].f_3 = joaat("sp2_money_spent_in_cop_bribes");
	Global_50493[176 /*7*/].f_4 = 0;
	Global_50493[177 /*7*/].f_2 = 1;
	Global_50493[177 /*7*/].f_3 = joaat("sp0_busted");
	Global_50493[177 /*7*/].f_4 = 0;
	Global_50493[178 /*7*/].f_2 = 1;
	Global_50493[178 /*7*/].f_3 = joaat("sp1_busted");
	Global_50493[178 /*7*/].f_4 = 0;
	Global_50493[179 /*7*/].f_2 = 1;
	Global_50493[179 /*7*/].f_3 = joaat("sp2_busted");
	Global_50493[179 /*7*/].f_4 = 0;
	Global_50493[180 /*7*/].f_2 = 1;
	Global_50493[180 /*7*/].f_3 = joaat("sp0_died_in_fall");
	Global_50493[180 /*7*/].f_4 = 0;
	Global_50493[181 /*7*/].f_2 = 1;
	Global_50493[181 /*7*/].f_3 = joaat("sp1_died_in_fall");
	Global_50493[181 /*7*/].f_4 = 0;
	Global_50493[182 /*7*/].f_2 = 1;
	Global_50493[182 /*7*/].f_3 = joaat("sp2_died_in_fall");
	Global_50493[182 /*7*/].f_4 = 0;
	Global_50493[183 /*7*/].f_2 = 1;
	Global_50493[183 /*7*/].f_3 = joaat("sp0_stars_attained");
	Global_50493[183 /*7*/].f_4 = 0;
	Global_50493[184 /*7*/].f_2 = 1;
	Global_50493[184 /*7*/].f_3 = joaat("sp1_stars_attained");
	Global_50493[184 /*7*/].f_4 = 0;
	Global_50493[185 /*7*/].f_2 = 1;
	Global_50493[185 /*7*/].f_3 = joaat("sp2_stars_attained");
	Global_50493[185 /*7*/].f_4 = 0;
	Global_50493[186 /*7*/].f_2 = 1;
	Global_50493[186 /*7*/].f_3 = joaat("sp0_stars_evaded");
	Global_50493[186 /*7*/].f_4 = 0;
	Global_50493[187 /*7*/].f_2 = 1;
	Global_50493[187 /*7*/].f_3 = joaat("sp1_stars_evaded");
	Global_50493[187 /*7*/].f_4 = 0;
	Global_50493[188 /*7*/].f_2 = 1;
	Global_50493[188 /*7*/].f_3 = joaat("sp2_stars_evaded");
	Global_50493[188 /*7*/].f_4 = 0;
	Global_50493[189 /*7*/].f_2 = 1;
	Global_50493[189 /*7*/].f_3 = joaat("sp0_manual_saved");
	Global_50493[189 /*7*/].f_4 = 0;
	Global_50493[190 /*7*/].f_2 = 1;
	Global_50493[190 /*7*/].f_3 = joaat("sp1_manual_saved");
	Global_50493[190 /*7*/].f_4 = 0;
	Global_50493[191 /*7*/].f_2 = 1;
	Global_50493[191 /*7*/].f_3 = joaat("sp2_manual_saved");
	Global_50493[191 /*7*/].f_4 = 0;
	Global_50493[192 /*7*/].f_2 = 1;
	Global_50493[192 /*7*/].f_3 = joaat("sp0_kills_cop");
	Global_50493[192 /*7*/].f_4 = 0;
	Global_50493[193 /*7*/].f_2 = 1;
	Global_50493[193 /*7*/].f_3 = joaat("sp1_kills_cop");
	Global_50493[193 /*7*/].f_4 = 0;
	Global_50493[194 /*7*/].f_2 = 1;
	Global_50493[194 /*7*/].f_3 = joaat("sp2_kills_cop");
	Global_50493[194 /*7*/].f_4 = 0;
	Global_50493[195 /*7*/].f_2 = 1;
	Global_50493[195 /*7*/].f_3 = joaat("sp0_kills_swat");
	Global_50493[195 /*7*/].f_4 = 0;
	Global_50493[196 /*7*/].f_2 = 1;
	Global_50493[196 /*7*/].f_3 = joaat("sp1_kills_swat");
	Global_50493[196 /*7*/].f_4 = 0;
	Global_50493[197 /*7*/].f_2 = 1;
	Global_50493[197 /*7*/].f_3 = joaat("sp2_kills_swat");
	Global_50493[197 /*7*/].f_4 = 0;
	Global_50493[198 /*7*/].f_2 = 1;
	Global_50493[198 /*7*/].f_3 = joaat("sp0_time_in_cover");
	Global_50493[198 /*7*/].f_4 = 0;
	Global_50493[199 /*7*/].f_2 = 1;
	Global_50493[199 /*7*/].f_3 = joaat("sp1_time_in_cover");
	Global_50493[199 /*7*/].f_4 = 0;
	Global_50493[200 /*7*/].f_2 = 1;
	Global_50493[200 /*7*/].f_3 = joaat("sp2_time_in_cover");
	Global_50493[200 /*7*/].f_4 = 0;
	Global_49931[0 /*7*/] = joaat("sm_price_amu");
	Global_49931[0 /*7*/].f_3[0] = joaat("amu_ow0");
	Global_49931[0 /*7*/].f_3[1] = joaat("amu_ow1");
	Global_49931[0 /*7*/].f_3[2] = joaat("amu_ow2");
	Global_49931[1 /*7*/] = joaat("sm_price_bdg");
	Global_49931[1 /*7*/].f_3[0] = joaat("bdg_ow0");
	Global_49931[1 /*7*/].f_3[1] = joaat("bdg_ow1");
	Global_49931[1 /*7*/].f_3[2] = joaat("bdg_ow2");
	Global_49931[2 /*7*/] = joaat("sm_price_bfa");
	Global_49931[2 /*7*/].f_3[0] = joaat("bfa_ow0");
	Global_49931[2 /*7*/].f_3[1] = joaat("bfa_ow1");
	Global_49931[2 /*7*/].f_3[2] = joaat("bfa_ow2");
	Global_49931[3 /*7*/] = joaat("sm_price_bin");
	Global_49931[3 /*7*/].f_3[0] = joaat("bin_ow0");
	Global_49931[3 /*7*/].f_3[1] = joaat("bin_ow1");
	Global_49931[3 /*7*/].f_3[2] = joaat("bin_ow2");
	Global_49931[4 /*7*/] = joaat("sm_price_btr");
	Global_49931[4 /*7*/].f_3[0] = joaat("btr_ow0");
	Global_49931[4 /*7*/].f_3[1] = joaat("btr_ow1");
	Global_49931[4 /*7*/].f_3[2] = joaat("btr_ow2");
	Global_49931[5 /*7*/] = joaat("sm_price_ble");
	Global_49931[5 /*7*/].f_3[0] = joaat("ble_ow0");
	Global_49931[5 /*7*/].f_3[1] = joaat("ble_ow1");
	Global_49931[5 /*7*/].f_3[2] = joaat("ble_ow2");
	Global_49931[6 /*7*/] = joaat("sm_price_bru");
	Global_49931[6 /*7*/].f_3[0] = joaat("bru_ow0");
	Global_49931[6 /*7*/].f_3[1] = joaat("bru_ow1");
	Global_49931[6 /*7*/].f_3[2] = joaat("bru_ow2");
	Global_49931[7 /*7*/] = joaat("sm_price_cnt");
	Global_49931[7 /*7*/].f_3[0] = joaat("cnt_ow0");
	Global_49931[7 /*7*/].f_3[1] = joaat("cnt_ow1");
	Global_49931[7 /*7*/].f_3[2] = joaat("cnt_ow2");
	Global_49931[8 /*7*/] = joaat("sm_price_cre");
	Global_49931[8 /*7*/].f_3[0] = joaat("cre_ow0");
	Global_49931[8 /*7*/].f_3[1] = joaat("cre_ow1");
	Global_49931[8 /*7*/].f_3[2] = joaat("cre_ow2");
	Global_49931[9 /*7*/] = joaat("sm_price_dgp");
	Global_49931[9 /*7*/].f_3[0] = joaat("dgp_ow0");
	Global_49931[9 /*7*/].f_3[1] = joaat("dgp_ow1");
	Global_49931[9 /*7*/].f_3[2] = joaat("dgp_ow2");
	Global_49931[10 /*7*/] = joaat("sm_price_wap");
	Global_49931[10 /*7*/].f_3[0] = joaat("wap_ow0");
	Global_49931[10 /*7*/].f_3[1] = joaat("wap_ow1");
	Global_49931[10 /*7*/].f_3[2] = joaat("wap_ow2");
	Global_49931[11 /*7*/] = joaat("sm_price_fac");
	Global_49931[11 /*7*/].f_3[0] = joaat("fac_ow0");
	Global_49931[11 /*7*/].f_3[1] = joaat("fac_ow1");
	Global_49931[11 /*7*/].f_3[2] = joaat("fac_ow2");
	Global_49931[12 /*7*/] = joaat("sm_price_frt");
	Global_49931[12 /*7*/].f_3[0] = joaat("frt_ow0");
	Global_49931[12 /*7*/].f_3[1] = joaat("frt_ow1");
	Global_49931[12 /*7*/].f_3[2] = joaat("frt_ow2");
	Global_49931[13 /*7*/] = joaat("sm_price_lsc");
	Global_49931[13 /*7*/].f_3[0] = joaat("lsc_ow0");
	Global_49931[13 /*7*/].f_3[1] = joaat("lsc_ow1");
	Global_49931[13 /*7*/].f_3[2] = joaat("lsc_ow2");
	Global_49931[14 /*7*/] = joaat("sm_price_lst");
	Global_49931[14 /*7*/].f_3[0] = joaat("lst_ow0");
	Global_49931[14 /*7*/].f_3[1] = joaat("lst_ow1");
	Global_49931[14 /*7*/].f_3[2] = joaat("lst_ow2");
	Global_49931[15 /*7*/] = joaat("sm_price_ltd");
	Global_49931[15 /*7*/].f_3[0] = joaat("ltd_ow0");
	Global_49931[15 /*7*/].f_3[1] = joaat("ltd_ow1");
	Global_49931[15 /*7*/].f_3[2] = joaat("ltd_ow2");
	Global_49931[16 /*7*/] = joaat("sm_price_mai");
	Global_49931[16 /*7*/].f_3[0] = joaat("mai_ow0");
	Global_49931[16 /*7*/].f_3[1] = joaat("mai_ow1");
	Global_49931[16 /*7*/].f_3[2] = joaat("mai_ow2");
	Global_49931[17 /*7*/] = joaat("sm_price_pkw");
	Global_49931[17 /*7*/].f_3[0] = joaat("pkw_ow0");
	Global_49931[17 /*7*/].f_3[1] = joaat("pkw_ow1");
	Global_49931[17 /*7*/].f_3[2] = joaat("pkw_ow2");
	Global_49931[18 /*7*/] = joaat("sm_price_pis");
	Global_49931[18 /*7*/].f_3[0] = joaat("pis_ow0");
	Global_49931[18 /*7*/].f_3[1] = joaat("pis_ow1");
	Global_49931[18 /*7*/].f_3[2] = joaat("pis_ow2");
	Global_49931[19 /*7*/] = joaat("sm_price_pon");
	Global_49931[19 /*7*/].f_3[0] = joaat("pon_ow0");
	Global_49931[19 /*7*/].f_3[1] = joaat("pon_ow1");
	Global_49931[19 /*7*/].f_3[2] = joaat("pon_ow2");
	Global_49931[20 /*7*/] = joaat("sm_price_ron");
	Global_49931[20 /*7*/].f_3[0] = joaat("ron_ow0");
	Global_49931[20 /*7*/].f_3[1] = joaat("ron_ow1");
	Global_49931[20 /*7*/].f_3[2] = joaat("ron_ow2");
	Global_49931[21 /*7*/] = joaat("sm_price_sht");
	Global_49931[21 /*7*/].f_3[0] = joaat("sht_ow0");
	Global_49931[21 /*7*/].f_3[1] = joaat("sht_ow1");
	Global_49931[21 /*7*/].f_3[2] = joaat("sht_ow2");
	Global_49931[22 /*7*/] = joaat("sm_price_spu");
	Global_49931[22 /*7*/].f_3[0] = joaat("spu_ow0");
	Global_49931[22 /*7*/].f_3[1] = joaat("spu_ow1");
	Global_49931[22 /*7*/].f_3[2] = joaat("spu_ow2");
	Global_49931[23 /*7*/] = joaat("sm_price_tnk");
	Global_49931[23 /*7*/].f_3[0] = joaat("tnk_ow0");
	Global_49931[23 /*7*/].f_3[1] = joaat("tnk_ow1");
	Global_49931[23 /*7*/].f_3[2] = joaat("tnk_ow2");
	Global_49931[24 /*7*/] = joaat("sm_price_wiw");
	Global_49931[24 /*7*/].f_3[0] = joaat("wiw_ow0");
	Global_49931[24 /*7*/].f_3[1] = joaat("wiw_ow1");
	Global_49931[24 /*7*/].f_3[2] = joaat("wiw_ow2");
	Global_49931[25 /*7*/] = joaat("sm_price_uma");
	Global_49931[25 /*7*/].f_3[0] = joaat("uma_ow0");
	Global_49931[25 /*7*/].f_3[1] = joaat("uma_ow1");
	Global_49931[25 /*7*/].f_3[2] = joaat("uma_ow2");
	Global_49931[26 /*7*/] = joaat("sm_price_vap");
	Global_49931[26 /*7*/].f_3[0] = joaat("vap_ow0");
	Global_49931[26 /*7*/].f_3[1] = joaat("vap_ow1");
	Global_49931[26 /*7*/].f_3[2] = joaat("vap_ow2");
	Global_49931[27 /*7*/] = joaat("sm_price_vom");
	Global_49931[27 /*7*/].f_3[0] = joaat("vom_ow0");
	Global_49931[27 /*7*/].f_3[1] = joaat("vom_ow1");
	Global_49931[27 /*7*/].f_3[2] = joaat("vom_ow2");
	Global_49931[28 /*7*/] = joaat("sm_price_wzl");
	Global_49931[28 /*7*/].f_3[0] = joaat("wzl_ow0");
	Global_49931[28 /*7*/].f_3[1] = joaat("wzl_ow1");
	Global_49931[28 /*7*/].f_3[2] = joaat("wzl_ow2");
	Global_49931[29 /*7*/] = joaat("sm_price_wiz");
	Global_49931[29 /*7*/].f_3[0] = joaat("wiz_ow0");
	Global_49931[29 /*7*/].f_3[1] = joaat("wiz_ow1");
	Global_49931[29 /*7*/].f_3[2] = joaat("wiz_ow2");
	Global_49931[30 /*7*/] = joaat("sm_price_zit");
	Global_49931[30 /*7*/].f_3[0] = joaat("zit_ow0");
	Global_49931[30 /*7*/].f_3[1] = joaat("zit_ow1");
	Global_49931[30 /*7*/].f_3[2] = joaat("zit_ow2");
	Global_49931[31 /*7*/] = joaat("sm_price_shk");
	Global_49931[31 /*7*/].f_3[0] = joaat("shk_ow0");
	Global_49931[31 /*7*/].f_3[1] = joaat("shk_ow1");
	Global_49931[31 /*7*/].f_3[2] = joaat("shk_ow2");
	Global_49931[32 /*7*/] = joaat("sm_price_mol");
	Global_49931[32 /*7*/].f_3[0] = joaat("mol_ow0");
	Global_49931[32 /*7*/].f_3[1] = joaat("mol_ow1");
	Global_49931[32 /*7*/].f_3[2] = joaat("mol_ow2");
	Global_49931[33 /*7*/] = joaat("sm_price_pmp");
	Global_49931[33 /*7*/].f_3[0] = joaat("pmp_ow0");
	Global_49931[33 /*7*/].f_3[1] = joaat("pmp_ow1");
	Global_49931[33 /*7*/].f_3[2] = joaat("pmp_ow2");
	Global_49931[34 /*7*/] = joaat("sm_price_got");
	Global_49931[34 /*7*/].f_3[0] = joaat("got_ow0");
	Global_49931[34 /*7*/].f_3[1] = joaat("got_ow1");
	Global_49931[34 /*7*/].f_3[2] = joaat("got_ow2");
	Global_49931[35 /*7*/] = joaat("sm_price_eye");
	Global_49931[35 /*7*/].f_3[0] = joaat("eye_ow0");
	Global_49931[35 /*7*/].f_3[1] = joaat("eye_ow1");
	Global_49931[35 /*7*/].f_3[2] = joaat("eye_ow2");
	Global_49931[36 /*7*/] = joaat("sm_price_hvy");
	Global_49931[36 /*7*/].f_3[0] = joaat("hvy_ow0");
	Global_49931[36 /*7*/].f_3[1] = joaat("hvy_ow1");
	Global_49931[36 /*7*/].f_3[2] = joaat("hvy_ow2");
	Global_49931[37 /*7*/] = joaat("sm_price_shr");
	Global_49931[37 /*7*/].f_3[0] = joaat("shr_ow0");
	Global_49931[37 /*7*/].f_3[1] = joaat("shr_ow1");
	Global_49931[37 /*7*/].f_3[2] = joaat("shr_ow2");
	Global_49931[38 /*7*/] = joaat("sm_price_hal");
	Global_49931[38 /*7*/].f_3[0] = joaat("hal_ow0");
	Global_49931[38 /*7*/].f_3[1] = joaat("hal_ow1");
	Global_49931[38 /*7*/].f_3[2] = joaat("hal_ow2");
}


