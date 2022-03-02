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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_6();
	}
	if ((!Global_1 && !MISC::IS_PC_VERSION()) && MISC::_0x6FDDF453C0C756EC())
	{
		SCRIPT::SET_NO_LOADING_SCREEN(1);
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
		}
		iLocal_19 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		iLocal_20 = unk_0x67D02A194A2FC2BD("INSTRUCTIONAL_BUTTONS");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_19) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_20))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_19, "SHOW_CENTERED_MP_MESSAGE");
		GlobalFunc_726("INSTALL_COMP");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_20, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_20, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GlobalFunc_257(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, 1));
		GlobalFunc_726("HUD_CONTINUE");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_20, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		SCRIPT::SHUTDOWN_LOADING_SCREEN();
		while (!iLocal_21)
		{
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_19, 255, 255, 255, 0, 0);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_20, 255, 255, 255, 0, 0);
			if (PAD::IS_CONTROL_PRESSED(2, 201))
			{
				iLocal_21 = 1;
			}
			SYSTEM::WAIT(0);
		}
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		GlobalFunc_842(1, 1);
		GlobalFunc_4907();
	}
	Global_68514.f_1 = 0;
	MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 0);
	func_6();
}






void func_6()//Position - 0x228
{
	if (iLocal_19 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_19);
	}
	if (iLocal_20 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_20);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	SCRIPT::SET_NO_LOADING_SCREEN(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

