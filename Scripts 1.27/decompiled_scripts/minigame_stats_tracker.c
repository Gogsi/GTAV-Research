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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_17();
	}
	while (true)
	{
		switch (iLocal_44)
		{
			case 0:
				uLocal_45 = unk_0x67D02A194A2FC2BD("mission_complete");
				iLocal_44 = 1;
				break;
			
			case 1:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_45))
				{
					iLocal_44 = 2;
				}
				break;
			
			case 2:
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(uLocal_45, "SET_MISSION_TITLE", ScriptParam_0, ScriptParam_0.f_1, 0, 0, 0);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_45, "SET_MISSION_TITLE_COLOUR", ScriptParam_0.f_2, ScriptParam_0.f_2, ScriptParam_0.f_2, -1082130432, -1082130432);
				if (ScriptParam_0.f_5.f_1 != -1f && !MISC::IS_STRING_NULL(ScriptParam_0.f_5.f_2))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(uLocal_45, "SET_TOTAL", SYSTEM::TO_FLOAT(ScriptParam_0.f_5), ScriptParam_0.f_5.f_1, -1f, -1f, -1f, ScriptParam_0.f_5.f_2, 0, 0, 0, 0);
				}
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_45, "SET_MEDAL", SYSTEM::TO_FLOAT(ScriptParam_0.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_45, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_0.f_66 + 1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_45, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ScriptParam_0.f_9[iVar0 /*7*/]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ScriptParam_0.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 4)
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(SYSTEM::FLOOR((ScriptParam_0.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						if (!MISC::IS_STRING_NULL(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							GlobalFunc_726(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!MISC::IS_STRING_NULL(ScriptParam_0.f_9[iVar0 /*7*/].f_5) && !MISC::IS_STRING_NULL(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ScriptParam_0.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(ScriptParam_0.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
							HUD::ADD_TEXT_COMPONENT_FLOAT(ScriptParam_0.f_9[iVar0 /*7*/].f_3, 2);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(ScriptParam_0.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
							HUD::ADD_TEXT_COMPONENT_FLOAT(ScriptParam_0.f_9[iVar0 /*7*/].f_4, 2);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
						if (!MISC::IS_STRING_NULL(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							GlobalFunc_726(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
						if (!MISC::IS_STRING_NULL(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							GlobalFunc_726(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iVar0++;
				}
				if (ScriptParam_0.f_5 != 0 && !MISC::IS_STRING_NULL(ScriptParam_0.f_5.f_2))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_45, "SET_TOTAL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ScriptParam_0.f_5);
					if (!MISC::IS_STRING_NULL(ScriptParam_0.f_5.f_3))
					{
						GlobalFunc_726(ScriptParam_0.f_5.f_3);
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(ScriptParam_0.f_5.f_1);
					}
					GlobalFunc_726(ScriptParam_0.f_5.f_2);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_45, "DRAW_MENU_LIST");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GlobalFunc_6685(1);
				GlobalFunc_7731(&uLocal_46);
				if (!GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 4096))
				{
					GlobalFunc_5211(&(Global_SAVE_DATA.TAXI_iGenData), 4096);
				}
				iLocal_44 = 3;
				break;
			
			case 3:
				if (((GlobalFunc_4981(&uLocal_46) > ScriptParam_0.f_67 && ScriptParam_0.f_67 != -1f) || CAM::IS_SCREEN_FADED_OUT()) || Global_24588)
				{
					func_17();
				}
				else
				{
					GlobalFunc_778(1);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_45, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (HUD::IS_HUD_COMPONENT_ACTIVE(10))
					{
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
					}
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
	func_17();
}

















void func_17()//Position - 0x6FB
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_45);
	Global_24588 = 0;
	GlobalFunc_778(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

