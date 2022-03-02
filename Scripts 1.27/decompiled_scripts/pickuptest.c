void __EntryFunction__()//Position - 0x0
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		GlobalFunc_491();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}


