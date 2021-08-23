void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	
	MISC::START_SAVE_DATA(&Global_2621548, 1, 1);
	MISC::REGISTER_INT_TO_SAVE(&Global_2621548, "aFakeSavedInt");
	MISC::STOP_SAVE_DATA();
	MISC::SET_BIT(&Global_2545212, 0);
	iVar0 = 1;
	iVar1 = MISC::GET_SIZE_OF_SAVE_DATA(1);
	if (iVar0 != iVar1)
	{
	}
}

