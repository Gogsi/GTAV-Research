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
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	iVar0 = -1;
	bVar1 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_4();
	}
	while (true)
	{
		if (!bVar1)
		{
			switch (GlobalFunc_6782(PLAYER::PLAYER_PED_ID()))
			{
				case 1:
					if (AUDIO::LOAD_STREAM("MISSION_COMPLETE_FRANKLIN_SMALL", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						bVar1 = true;
					}
					break;
				
				case 2:
					if (AUDIO::LOAD_STREAM("MISSION_COMPLETE_TREVOR_SMALL", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						bVar1 = true;
					}
					break;
				
				default:
					if (AUDIO::LOAD_STREAM("MISSION_COMPLETE_MICHAEL_SMALL", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						bVar1 = true;
					}
					break;
			}
		}
		else if (iVar0 == -1)
		{
			iVar0 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() > iVar0 + 8000)
		{
			func_4();
		}
		SYSTEM::WAIT(0);
	}
}




void func_4()//Position - 0x142
{
	AUDIO::STOP_STREAM();
	SCRIPT::TERMINATE_THIS_THREAD();
}

