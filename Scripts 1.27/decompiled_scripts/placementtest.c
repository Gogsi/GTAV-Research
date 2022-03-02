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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uVar0 = func_13();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uVar0))
		{
			switch (iLocal_44)
			{
				case 0:
					func_11(&uVar0, "OFFR_BLIP_R5", 255, 0, 255, 255, 0);
					func_10(&uVar0);
					iLocal_45 = MISC::GET_GAME_TIMER();
					iLocal_44 = 1;
					break;
				
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_45) > 3000)
					{
						func_9(&uVar0);
						iLocal_44 = 2;
					}
					break;
			}
			if (func_1(&uVar0, 0))
			{
			}
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(var uParam0, bool bParam1)//Position - 0xEC
{
	if (!GlobalFunc_226(&(uParam0->f_2)))
	{
		GlobalFunc_6877(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
	if (bParam1)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (GlobalFunc_5182(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		GlobalFunc_235(&(uParam0->f_2));
		return 0;
	}
	return 1;
}








void func_9(var uParam0)//Position - 0x26C
{
	uParam0->f_1 = 300;
	GlobalFunc_6877(&(uParam0->f_2));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(300);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_10(var uParam0)//Position - 0x299
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_11(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x2B0
{
	uParam0->f_1 = -1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_LABEL");
	GlobalFunc_256(sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam6)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}


var func_13()//Position - 0x310
{
	return unk_0x67D02A194A2FC2BD("SPLASH_TEXT");
}

