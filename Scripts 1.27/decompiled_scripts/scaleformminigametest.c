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
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = 0;
	bool bLocal_23 = 0;
	float fLocal_24 = 0f;
	bool bLocal_25 = 0;
	bool bLocal_26 = 0;
	float fLocal_27 = 0f;
	bool bLocal_28 = 0;
	bool bLocal_29 = 0;
	float fLocal_30 = 0f;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	float fLocal_33 = 0f;
	bool bLocal_34 = 0;
	bool bLocal_35 = 0;
	float fLocal_36 = 0f;
	bool bLocal_37 = 0;
	bool bLocal_38 = 0;
	float fLocal_39 = 0f;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	float fLocal_42 = 0f;
	bool bLocal_43 = 0;
	bool bLocal_44 = 0;
	float fLocal_45 = 0f;
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
	uLocal_19 = HUD::ADD_BLIP_FOR_COORD(100f, 100f, 30f);
	iLocal_21 = 1;
	fLocal_24 = 0f;
	fLocal_27 = 0f;
	fLocal_30 = 0f;
	fLocal_33 = 0f;
	fLocal_36 = 0f;
	fLocal_39 = 0f;
	fLocal_42 = 0f;
	fLocal_45 = 0f;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_2();
	}
	uLocal_17 = unk_0x67D02A194A2FC2BD("p_bubblegum");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_17))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (iLocal_20 == 1)
		{
		}
		if (iLocal_21 == 1)
		{
			iLocal_21 = 0;
			uLocal_18 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
			if (CAM::DOES_CAM_EXIST(uLocal_18))
			{
				CAM::SET_CAM_PARAMS(uLocal_18, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				CAM::SET_CAM_NEAR_CLIP(uLocal_18, 0.01f);
				CAM::SET_CAM_FAR_CLIP(uLocal_18, 0.02f);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			HUD::SET_BLIP_SPRITE(uLocal_19, 66);
		}
		iLocal_20 = 1;
		GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_17, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_17);
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x13C
{
	if (Global_14372 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 190))
		{
			Global_14372 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_14372 = 0;
	}
	if (Global_14372 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
		{
			bLocal_22 = true;
			fLocal_24 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 189))
		{
			bLocal_22 = true;
			fLocal_24 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 189))
		{
			bLocal_22 = false;
			fLocal_24 = 0f;
		}
		if (!bLocal_22 == bLocal_23)
		{
			bLocal_23 = bLocal_22;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_24);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
		{
			bLocal_25 = true;
			fLocal_27 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 190))
		{
			bLocal_25 = true;
			fLocal_27 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 190))
		{
			bLocal_25 = false;
			fLocal_27 = 0f;
		}
		if (!bLocal_25 == bLocal_26)
		{
			bLocal_26 = bLocal_25;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_27);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
		{
			bLocal_28 = true;
			fLocal_30 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 188))
		{
			bLocal_28 = true;
			fLocal_30 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 188))
		{
			bLocal_28 = false;
			fLocal_30 = 0f;
		}
		if (!bLocal_28 == bLocal_29)
		{
			bLocal_29 = bLocal_28;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_30);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
		{
			bLocal_31 = true;
			fLocal_33 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 187))
		{
			bLocal_31 = true;
			fLocal_33 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 187))
		{
			bLocal_31 = false;
			fLocal_33 = 0f;
		}
		if (!bLocal_31 == bLocal_32)
		{
			bLocal_32 = bLocal_31;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_33);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
		{
			bLocal_34 = true;
			fLocal_36 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 202))
		{
			bLocal_34 = true;
			fLocal_36 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 202))
		{
			bLocal_34 = false;
			fLocal_36 = 0f;
		}
		if (!bLocal_34 == bLocal_35)
		{
			bLocal_35 = bLocal_34;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_36);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 204))
		{
			bLocal_37 = true;
			fLocal_39 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 204))
		{
			bLocal_37 = true;
			fLocal_39 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 204))
		{
			bLocal_37 = false;
			fLocal_39 = 0f;
		}
		if (!bLocal_37 == bLocal_38)
		{
			bLocal_38 = bLocal_37;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_39);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
		{
			bLocal_40 = true;
			fLocal_42 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			bLocal_40 = true;
			fLocal_42 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 201))
		{
			bLocal_40 = false;
			fLocal_42 = 0f;
		}
		if (!bLocal_40 == bLocal_41)
		{
			bLocal_41 = bLocal_40;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_42);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
		{
			bLocal_43 = true;
			fLocal_45 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 203))
		{
			bLocal_43 = true;
			fLocal_45 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2, 203))
		{
			bLocal_43 = false;
			fLocal_45 = 0f;
		}
		if (!bLocal_43 == bLocal_44)
		{
			bLocal_44 = bLocal_43;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(14);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_45);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_2()//Position - 0x43A
{
	if (CAM::DOES_CAM_EXIST(uLocal_18))
	{
		CAM::DESTROY_CAM(uLocal_18, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	func_3(0);
	MISC::SET_GAME_PAUSED(0);
	HUD::CLEAR_HELP(1);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_17);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(bool bParam0)//Position - 0x477
{
	if (bParam0)
	{
		func_8();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			MISC::SET_BIT(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_4(int iParam0)//Position - 0x4DA
{
	if (Global_14551)
	{
		func_6(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2264, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 30);
	}
	if (!func_5())
	{
		Global_14393.f_1 = 3;
	}
}

int func_5()//Position - 0x54A
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x571
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14330);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
}

int func_7(int iParam0)//Position - 0x5E5
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8()//Position - 0x63F
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

