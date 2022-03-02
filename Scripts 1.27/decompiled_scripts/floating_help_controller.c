void __EntryFunction__()//Position - 0x0
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()//Position - 0x1C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_96008)
	{
		if (Global_96008[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (MISC::GET_GAME_TIMER() > Global_96008[iVar0 /*28*/].f_21 && Global_96008[iVar0 /*28*/].f_21 != -1)
			{
				if (GlobalFunc_5662(iVar0))
				{
					HUD::CLEAR_FLOATING_HELP(iVar1, 0);
				}
				GlobalFunc_1452(iVar0);
			}
			else if (GlobalFunc_5662(iVar0))
			{
				if (Global_96008[iVar0 /*28*/].f_21 != -1)
				{
					if (!MISC::IS_BIT_SET(Global_96008[iVar0 /*28*/].f_27, 0))
					{
						Global_96008[iVar0 /*28*/].f_21 = (Global_96008[iVar0 /*28*/].f_21 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
						if (HUD::IS_FLOATING_HELP_TEXT_ON_SCREEN(iVar1))
						{
							MISC::SET_BIT(&(Global_96008[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_96008[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_96008[iVar0 /*28*/].f_23 != 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_96008[iVar0 /*28*/].f_23))
						{
							if (!MISC::IS_BIT_SET(Global_96008[iVar0 /*28*/].f_27, 3))
							{
								HUD::SET_FLOATING_HELP_TEXT_WORLD_POSITION(iVar1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96008[iVar0 /*28*/].f_23, Global_96008[iVar0 /*28*/].f_24));
							}
							else
							{
								HUD::SET_FLOATING_HELP_TEXT_TO_ENTITY(iVar1, Global_96008[iVar0 /*28*/].f_23, Global_96008[iVar0 /*28*/].f_24, Global_96008[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_96008[iVar0 /*28*/].f_24 != 0f || Global_96008[iVar0 /*28*/].f_24.f_1 != 0f) || Global_96008[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						HUD::SET_FLOATING_HELP_TEXT_WORLD_POSITION(iVar1, Global_96008[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					HUD::SET_FLOATING_HELP_TEXT_SCREEN_POSITION(iVar1, Global_96008[iVar0 /*28*/].f_24, Global_96008[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((MISC::GET_GAME_TIMER() - Global_96008[iVar0 /*28*/].f_22) > 1000)
			{
				GlobalFunc_1452(iVar0);
			}
		}
		iVar0++;
	}
}







