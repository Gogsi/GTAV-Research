void __EntryFunction__()//Position - 0x0
{
	MISC::START_SAVE_DATA(&Global_2883584, 1, 1);
	func_1();
	MISC::STOP_SAVE_DATA();
	MISC::SET_BIT(&Global_2545212, 1);
}

void func_1()//Position - 0x23
{
	MISC::REGISTER_INT_TO_SAVE(&Global_2883584, "PILOT_SCHOOL_DUMMY_DATA");
}

