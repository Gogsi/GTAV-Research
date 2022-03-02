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
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	bool bVar1;
	
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
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_19();
	}
	MISC::SET_MISSION_FLAG(1);
	GlobalFunc_2224(0);
	func_17();
	SCRIPT::SCRIPT_THREAD_ITERATOR_RESET();
	while (!bVar1)
	{
		uVar0 = SCRIPT::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		if (MISC::ARE_STRINGS_EQUAL(SCRIPT::_GET_NAME_OF_THREAD(uVar0), "heist_ctrl_finale"))
		{
			bVar1 = true;
		}
	}
	CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
	GlobalFunc_3034();
	func_1(96.7f, -1288.1f, 28.1f, 104.5f, -1301f, 30f, 2f, 118.3f, -1309.7f, 29f, 120f, 1, 1, 1, 0, 0);
	func_19();
}

void func_1(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0xE5
{
	GlobalFunc_9248(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}
















void func_17()//Position - 0xC52
{
	int iVar0;
	
	iVar0 = GlobalFunc_8329();
	switch (iVar0)
	{
		case 0:
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("BS_2A_2B_INT", 12, 8);
			break;
		
		case 1:
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("BS_2A_2B_INT", 14, 8);
			break;
		
		case 2:
			CUTSCENE::REQUEST_CUTSCENE("BS_2A_2B_INT", 8);
			break;
	}
	while (!CUTSCENE::HAS_THIS_CUTSCENE_LOADED("BS_2A_2B_INT"))
	{
		SYSTEM::WAIT(0);
	}
}


void func_19()//Position - 0xCC2
{
	GlobalFunc_585(24, 1);
	GlobalFunc_5103(1, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}






