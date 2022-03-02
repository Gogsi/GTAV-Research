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
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[8];
	int iVar12;
	int iVar13;
	
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_7();
	}
	iVar0 = Global_34874;
	iVar1 = 15;
	while (true)
	{
		if (Global_34913 != 15)
		{
			if (Global_34876 != 0)
			{
				if (Global_34875 != -1)
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_34876))
					{
						GlobalFunc_54(&Global_34875);
					}
				}
			}
		}
		if (Global_34874 > 0)
		{
			Global_34879 = 1;
			if (Global_34874 == iVar0)
			{
				iVar2 = 0;
				if (Global_34874 > 1)
				{
					iVar12 = 0;
					iVar12 = 0;
					while (iVar12 < Global_34874)
					{
						if (GlobalFunc_4938(Global_34880[iVar12 /*4*/].f_2))
						{
							iVar3[iVar12] = 0;
						}
						else
						{
							iVar3[iVar12] = 1;
						}
						if (Global_34880[iVar12 /*4*/].f_1 == 7)
						{
							iVar3[iVar12] = 1;
						}
						iVar12++;
					}
					iVar13 = 0;
					iVar12 = 0;
					iVar12 = 0;
					while (iVar12 < (Global_34874 - 1))
					{
						if (!iVar3[iVar12 + 1])
						{
							if (Global_34880[iVar12 + 1 /*4*/].f_1 < Global_34880[iVar13 /*4*/].f_1)
							{
								iVar13 = iVar12 + 1;
							}
						}
						iVar12++;
					}
					iVar2 = iVar13;
					if (Global_34880[iVar2 /*4*/].f_2 == 15)
					{
						iVar2 = -1;
					}
					if (iVar2 != -1)
					{
						if (!GlobalFunc_4938(Global_34880[iVar2 /*4*/].f_2))
						{
							iVar2 = -1;
						}
					}
				}
				if (iVar2 > -1)
				{
					Global_34875 = Global_34880[iVar2 /*4*/];
					Global_34876 = Global_34880[iVar2 /*4*/].f_3;
					Global_34913 = Global_34880[iVar2 /*4*/].f_2;
					Global_34874 = 0;
					Global_34879 = 0;
				}
				else
				{
					Global_34874 = 0;
					Global_34879 = 0;
				}
			}
		}
		if (iVar1 != Global_34913)
		{
			if (iVar1 == 15)
			{
				GlobalFunc_174(0);
			}
			if (Global_34913 == 15)
			{
				GlobalFunc_174(1);
			}
			Global_34879 = 0;
			Global_30777 = 1;
			if (Global_34913 != 5 && Global_34913 != 15)
			{
				PLAYER::FORCE_CLEANUP(8);
			}
			if (Global_34913 == 15 || Global_34913 == 6)
			{
				GlobalFunc_2032(0);
			}
			else
			{
				GlobalFunc_2032(1);
			}
			if (func_1(Global_34913))
			{
				if (!iLocal_19)
				{
					NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(1);
					iLocal_19 = 1;
				}
			}
			else if (iLocal_19)
			{
				NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(0);
				iLocal_19 = 0;
			}
		}
		iVar1 = Global_34913;
		iVar0 = Global_34874;
		SYSTEM::WAIT(0);
	}
	Global_34879 = 0;
}

int func_1(int iParam0)//Position - 0x232
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
		case 7:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 17:
		case 18:
			return 1;
			break;
	}
	return 0;
}






void func_7()//Position - 0x760
{
	GlobalFunc_54(&Global_34875);
	Global_34879 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

