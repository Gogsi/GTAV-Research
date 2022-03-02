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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	struct<5> Local_42 = { 0, 0, 0, 0, 0 } ;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	char* sLocal_53 = NULL;
	struct<5> Local_54 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
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
	sLocal_17 = "NULL";
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
	iLocal_47 = -1;
	iLocal_48 = -1;
	fLocal_51 = 1.7f;
	fLocal_52 = 0f;
	sLocal_53 = "";
	iLocal_62 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_131();
	}
	Local_42 = { ScriptParam_0 };
	func_130();
	func_129();
	GlobalFunc_7739(iLocal_47, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_123();
	func_115();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_114(iLocal_47);
		func_113();
		func_111();
		func_104();
		GlobalFunc_7739(iLocal_47, 0, 0);
		func_130();
		func_6();
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !GlobalFunc_2824())
		{
			GlobalFunc_5076();
		}
	}
}






void func_6()//Position - 0x169
{
	bool bVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_42.f_1))
	{
		func_131();
	}
	if (bLocal_49)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_131();
		}
	}
	GlobalFunc_587();
	bVar0 = true;
	switch (Local_59.x)
	{
		case 4:
			func_102();
			return;
		
		case 5:
			func_99();
			return;
		
		case 6:
			func_97();
			return;
		
		case 7:
			func_96();
			return;
		
		case 8:
			func_95();
			return;
		
		case 9:
			func_93();
			return;
		
		case 10:
			func_92();
			func_89();
			func_88();
			return;
		
		case 11:
			func_87();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!Local_59.x == 12)
	{
		return;
	}
	switch (Local_59.f_1)
	{
		case 1:
			if (!func_86())
			{
				func_85();
				func_89();
			}
			break;
		
		case 2:
			func_83();
			break;
		
		case 12:
			func_70();
			break;
		
		case 3:
			func_7();
			break;
		
		default:
			break;
	}
}

void func_7()//Position - 0x283
{
	char* sVar0;
	struct<53> Var1;
	int iVar59;
	
	PED::SET_PED_TO_RAGDOLL(Local_42.f_1, 3000, 3500, 0, 1, 1, 0);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(2500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GlobalFunc_6886(PLAYER::PLAYER_ID(), 0, 57344, 1);
		Global_2404548.f_1373 = 1;
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			Global_2404548.f_1374 = 1;
		}
		else
		{
			Global_2404548.f_1374 = 0;
		}
		GlobalFunc_5476(1);
		func_131();
	}
	sVar0 = "";
	Var1.f_3 = 1064514355;
	Var1.f_30 = 1148829696;
	Var1.f_31 = 1148829696;
	Var1.f_52 = 1148829696;
	iVar59 = 7;
	switch (GlobalFunc_8315())
	{
		case 0:
			if (GlobalFunc_5899() != 2)
			{
				iVar59 = 0;
			}
			else
			{
				iVar59 = 1;
			}
			break;
		
		case 1:
			if (!GlobalFunc_485(126))
			{
				iVar59 = 2;
			}
			else
			{
				iVar59 = 3;
			}
			break;
		
		case 2:
			if (!GlobalFunc_103(4))
			{
				if (GlobalFunc_485(58))
				{
					iVar59 = 4;
				}
				if (GlobalFunc_485(59))
				{
					iVar59 = 5;
				}
				if (iVar59 == 7)
				{
					if (!GlobalFunc_745())
					{
						iVar59 = 4;
					}
					else
					{
						iVar59 = 5;
					}
				}
			}
			else
			{
				iVar59 = 6;
			}
			break;
	}
	switch (iVar59)
	{
		case 0:
			sVar0 = "DWC_MICHAEL_mansion";
			Var1 = "SAVEM_Default@";
			Var1.f_1 = "M_GetOut_R";
			Var1.f_2 = "M_GetOut_R_CAM";
			Var1.f_5 = { -814.181f, 181.1f, 75.74f };
			Var1.f_8 = { 0f, 0f, 21.1994f };
			Var1.f_4 = -1871534317;
			break;
		
		case 1:
			sVar0 = "DWC_MICHAEL_trailer";
			Var1 = "SAVECountryside@";
			Var1.f_1 = "M_GetOut_countryside";
			Var1.f_2 = "M_GetOut_countryside_CAM";
			Var1.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var1.f_8 = { 0f, 0f, 29.7938f };
			Var1.f_4 = -1871534317;
			break;
		
		case 2:
			sVar0 = "DWC_FRANKLIN_city";
			Var1 = "SWITCH@FRANKLIN@BED";
			Var1.f_1 = "Sleep_GetUp_RubEyes";
			Var1.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var1.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var1.f_8 = { 0f, 0f, -179.653f };
			Var1.f_4 = -1871534317;
			break;
		
		case 3:
			sVar0 = "DWC_FRANKLIN_hills";
			Var1 = "SAVEBighouse@";
			Var1.f_1 = "F_GetOut_r_bighouse";
			Var1.f_2 = "F_GetOut_r_bighouse_CAM";
			Var1.f_5 = { -1.049f, 524.283f, 170.064f };
			Var1.f_8 = { 0f, 0f, 24f };
			Var1.f_4 = -1871534317;
			break;
		
		case 4:
			sVar0 = "DWC_TREVOR_trailer";
			Var1 = "SAVECountryside@";
			Var1.f_1 = "T_GetOut_countryside";
			Var1.f_2 = "T_GetOut_countryside_CAM";
			Var1.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var1.f_8 = { 0f, 0f, 29.7938f };
			Var1.f_4 = -1871534317;
			break;
		
		case 5:
			sVar0 = "DWC_TREVOR_beach";
			Var1 = "SAVEVeniceB@";
			Var1.f_1 = "T_GetOut_r_veniceB";
			Var1.f_2 = "T_GetOut_r_veniceB_CAM";
			Var1.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var1.f_8 = { 0f, 0f, 36.25f };
			Var1.f_4 = -1871534317;
			break;
		
		case 6:
			sVar0 = "DWC_TREVOR_stripclub";
			Var1 = "SAVECouch@";
			Var1.f_1 = "T_GetOut_couch";
			Var1.f_2 = "T_GetOut_couch_CAM";
			Var1.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var1.f_8 = { 0f, 0f, 29.7938f };
			Var1.f_4 = -1871534317;
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_42.f_1))
	{
		ENTITY::SET_ENTITY_COORDS(Local_42.f_1, Var1.f_5, 1, 0, 0, 1);
	}
	SYSTEM::WAIT(500);
	StringCopy(&(Var1.f_11), "", 16);
	Var1.f_15 = -1f;
	func_9(sVar0, &Var1, "");
	GlobalFunc_184(126, 1);
	func_131();
}


void func_9(char* sParam0, var uParam1, char* sParam2)//Position - 0x684
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar174;
	int iVar175;
	char* sVar176;
	char* sVar177;
	char* sVar178;
	int iVar179;
	float fVar180;
	float fVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	float fVar185;
	struct<3> Var186;
	struct<3> Var189;
	float fVar192;
	float fVar193;
	float fVar194;
	struct<3> Var195;
	var uVar198;
	float fVar199;
	float fVar200;
	struct<3> Var201;
	struct<3> Var204;
	float fVar207;
	var uVar208;
	float fVar209;
	float fVar210;
	struct<3> Var211;
	var uVar214;
	float fVar215;
	float fVar216;
	struct<3> Var217;
	struct<3> Var220;
	float fVar223;
	int iVar224;
	bool bVar225;
	bool bVar226;
	int iVar227;
	
	fVar0 = 0f;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	MISC::CLEAR_AREA(uParam1->f_5, 5f, 1, 0, 0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_5, 1, 0, 0, 1);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
	SYSTEM::WAIT(0);
	MISC::SET_GAME_PAUSED(1);
	STREAMING::REQUEST_ANIM_DICT(*uParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	iVar1 = MISC::GET_GAME_TIMER() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
		STREAMING::REQUEST_ANIM_DICT(*uParam1);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
		{
			bVar2 = false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		SYSTEM::WAIT(0);
	}
	GlobalFunc_9080();
	if (!GlobalFunc_100(uParam1->f_22, 0f, 0f, 0f))
	{
		PATHFIND::SET_ROADS_IN_AREA(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), 0, 0, 0, 0, 0);
		MISC::CLEAR_AREA(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	MISC::SET_GAME_PAUSED(0);
	MISC::CLEAR_AREA(uParam1->f_5, 15f, 1, 0, 0, 0);
	PED::INSTANTLY_FILL_PED_POPULATION();
	VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
	GlobalFunc_5848();
	while (GlobalFunc_142())
	{
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, 0);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar4, 0);
		uVar5 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != -1871534317)
		{
			iVar6 |= 2;
		}
		func_38(PLAYER::PLAYER_PED_ID(), uParam1->f_18);
		TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		iVar3 = PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, 1);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uVar5, iVar4, uParam1->f_2, *uParam1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			GlobalFunc_159(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
	{
		iVar174 = GlobalFunc_8315();
		iVar175 = -1;
		sVar176 = "";
		switch (iVar174)
		{
			case 0:
				iVar175 = 0;
				sVar176 = "MICHAEL";
				break;
			
			case 1:
				iVar175 = 1;
				sVar176 = "FRANKLIN";
				break;
			
			case 2:
				iVar175 = 2;
				sVar176 = "TREVOR";
				break;
			
			default:
				break;
		}
		GlobalFunc_173(&uVar9, iVar175, PLAYER::PLAYER_PED_ID(), sVar176, 0, 1);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!bVar8)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_26))
					{
						GRAPHICS::ANIMPOSTFX_PLAY(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_27))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_28))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_29))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			GlobalFunc_7629();
			iVar179 = MISC::GET_GAME_TIMER();
			if (iVar179 >= (Global_Next_Notification_Time - 500))
			{
				GlobalFunc_49(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (GlobalFunc_10607(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar182 = 0;
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar177)))
			{
				iVar183 = (PAD::GET_CONTROL_VALUE(2, 195) - 128);
				iVar184 = (PAD::GET_CONTROL_VALUE(2, 196) - 128);
				if (((iVar183 < 64 && iVar183 > -64) && iVar184 < 64) && iVar184 > -64)
				{
				}
				else
				{
					iVar182 = 1;
				}
			}
			else
			{
				fVar180 = -1f;
				fVar181 = -1f;
				iVar182 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar180 = fVar180;
				fVar181 = fVar181;
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var189 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
						fVar192 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var186, Var189, 1);
						fVar185 = GlobalFunc_253(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						GlobalFunc_669(&(uParam1->f_34), PLAYER::PLAYER_PED_ID(), GlobalFunc_8315(), 1E-06f, 300, 300, 0, 0, 1045220557);
						GlobalFunc_668(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = MISC::GET_GAME_TIMER();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
							uVar198 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
							fVar199 = Var195.f_2;
							fVar200 = uVar198;
							uParam1->f_57 = (fVar199 - fVar200);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar193 = uParam1->f_56;
						fVar194 = uParam1->f_57;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar193, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar194);
						CAM::_SET_GAMEPLAY_CAM_RAW_PITCH(fVar193);
						CAM::_SET_GAMEPLAY_CAM_RAW_YAW(fVar194);
						Var201 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var204 = { CAM::GET_GAMEPLAY_CAM_COORD() };
						fVar207 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var201, Var204, 1);
						uVar208 = SYSTEM::ROUND((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						CAM::_0x59424BD75174C9B1();
						if (GlobalFunc_6815(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar178)) || iVar182)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					switch (uParam1->f_4)
					{
						case -1871534317:
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 0);
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
							break;
						
						case -668482597:
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 0, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0, 1, 0);
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									uVar214 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar215 = Var211.f_2;
									fVar216 = uVar214;
									uParam1->f_31 = (fVar215 - fVar216);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar209 = uParam1->f_30;
								fVar210 = uParam1->f_31;
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar209, 1065353216);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar210);
								Var217 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
								Var220 = { CAM::GET_GAMEPLAY_CAM_COORD() };
								fVar223 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var217, Var220, 1);
								iVar224 = SYSTEM::ROUND((fVar223 * 1000f));
								CAM::RENDER_SCRIPT_CAMS(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iVar4);
						iVar4 = -1;
					}
				}
			}
			SYSTEM::WAIT(0);
		}
	}
	if (!GlobalFunc_100(uParam1->f_22, 0f, 0f, 0f))
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	bVar225 = CAM::_0x3044240D2E0FA842();
	bVar226 = false;
	if (uParam1->f_32)
	{
		CAM::_0x59424BD75174C9B1();
		if (!GlobalFunc_6815(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while (bVar225 || bVar226)
		{
			if (bVar225)
			{
			}
			if (bVar226)
			{
			}
			iVar227 = 2;
			func_12(1, 26, &iVar227);
			func_12(1, 79, &iVar227);
			func_12(1, 1, &iVar227);
			func_12(1, 2, &iVar227);
			func_12(0, 22, &iVar227);
			func_12(0, 36, &iVar227);
			func_12(0, 142, &iVar227);
			func_12(0, 141, &iVar227);
			func_12(0, 140, &iVar227);
			func_12(0, 263, &iVar227);
			func_12(0, 264, &iVar227);
			SYSTEM::WAIT(0);
			bVar225 = CAM::_0x3044240D2E0FA842();
			bVar226 = false;
			if (uParam1->f_32)
			{
				CAM::_0x59424BD75174C9B1();
				if (!GlobalFunc_6815(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_16);
	}
	STREAMING::REMOVE_ANIM_DICT(*uParam1);
	CAM::DESTROY_CAM(uVar5, 0);
	GlobalFunc_5810(&(uParam1->f_34));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, iVar3);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	sParam0 = sParam0;
}



void func_12(int iParam0, int iParam1, int iParam2)//Position - 0x111D
{
	PAD::DISABLE_CONTROL_ACTION(iParam0, iParam1, 1);
	*iParam2++;
}


























void func_38(int iParam0, var uParam1)//Position - 0x1E1D
{
	if (GlobalFunc_747(uParam1, 1))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 2))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 4))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 8))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 16))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 32))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 64))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 128))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 256))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 512))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 0))
	{
	}
}









int func_47(struct<3> Param0, var uParam3, int iParam4, int iParam5)//Position - 0x2143
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		GlobalFunc_2826(0);
		MISC::CLEAR_AREA(Param0, 5f, 1, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0);
		SYSTEM::WAIT(0);
		MISC::CLEAR_AREA(Param0, 5000f, 1, 0, 0, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(Param0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Param0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Param0, 5000f);
		GlobalFunc_2825();
		GlobalFunc_2769();
		SYSTEM::SETTIMERA(0);
		GlobalFunc_2826(1);
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(0);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(0);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				MISC::SET_GAME_PAUSED(0);
				SYSTEM::SETTIMERA(0);
				PED::INSTANTLY_FILL_PED_POPULATION();
				if (iParam5 == 1)
				{
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				}
				else
				{
					SYSTEM::SETTIMERA(5000);
				}
				MISC::POPULATE_NOW();
			}
		}
		while ((!VEHICLE::_HAS_FILLED_VEHICLE_POPULATION() && !GlobalFunc_2768()) && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
		if (iParam4 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2));
			MISC::CLEAR_AREA(Param0, 5f, 1, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3);
				}
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		GlobalFunc_2826(0);
		return 1;
	}
	GlobalFunc_2826(0);
	return 0;
}























void func_70()//Position - 0x2BD7
{
	int iVar0;
	
	if (bLocal_49)
	{
		return;
	}
	Local_42.f_4 = 0;
	if (!func_71(Global_35760[iLocal_63 /*5*/].f_2))
	{
		return;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(500, 3000);
	Local_59.x = 5;
	Local_54.f_2 = (SYSTEM::TIMERA() + iVar0);
}

int func_71(int iParam0)//Position - 0x2C1A
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_82();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_42.f_1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_42.f_1))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_42.f_1))
		{
			return 0;
		}
		if (func_78(Local_42.f_1))
		{
			return 0;
		}
	}
	if (Global_35760[iLocal_63 /*5*/].f_3 < 3 && Global_35760[iLocal_63 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_35760[iLocal_63 /*5*/].f_4 < 9 && Global_35760[iLocal_63 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = GlobalFunc_2366(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
	{
		return 0;
	}
	if (func_78(Local_42.f_1))
	{
		return 0;
	}
	STREAMING::REQUEST_CLIP_SET(sVar1);
	if (func_74(Local_42.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar2);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_42.f_1))
			{
				TASK::TASK_PLAY_ANIM(Local_42.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_53 = sVar3;
			}
		}
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(sVar1))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_42.f_1))
	{
		return 0;
	}
	PED::SET_PED_MOVEMENT_CLIPSET(Local_42.f_1, sVar1, 0.75f);
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		PED::SET_PED_STRAFE_CLIPSET(Local_42.f_1, "move_ped_strafing_firstperson@drunk");
	}
	PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_42.f_1, 0, sVar1, "idle", 2f, 1);
	Local_59.f_2 = sVar1;
	bLocal_50 = true;
	iVar4 = 0;
	switch (GlobalFunc_6674(Local_42.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (PED::IS_PED_A_PLAYER(Local_42.f_1))
			{
				if (!GlobalFunc_5113())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (PED::IS_PED_MALE(Local_42.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_42.f_1, "mood_drunk_1", iVar4);
	PED::SET_PED_RESET_FLAG(Local_42.f_1, 200, 1);
	PED::SET_PED_RESET_FLAG(Local_42.f_1, 46, 1);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_42.f_1, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_42.f_1, 262144, 1);
	AUDIO::SET_PED_IS_DRUNK(Local_42.f_1, 1);
	return 1;
}



int func_74(int iParam0)//Position - 0x2EDB
{
	struct<3> Var0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_CLIMBING(iParam0))
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (GlobalFunc_160())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (GlobalFunc_331())
		{
			return 0;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	if (SYSTEM::VMAG2(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}




int func_78(int iParam0)//Position - 0x3043
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_5900(iParam0);
	uVar1 = GlobalFunc_2366(iVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_59.f_2))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(Local_59.f_2, sVar1);
}




int func_82()//Position - 0x3138
{
	int iVar0;
	
	if (Local_54 == -2)
	{
		return -2;
	}
	if (Local_54 == -1)
	{
		return -1;
	}
	iVar0 = (Local_54 - SYSTEM::TIMERA());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_83()//Position - 0x317E
{
	if (bLocal_49)
	{
		return;
	}
	if (!func_84())
	{
		Local_59.x = 5;
		Local_54.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}
	Local_59.x = 6;
}

bool func_84()//Position - 0x31AA
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_42.f_4 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_42.f_4))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_42.f_1, 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(Local_42.f_4, 1) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_85()//Position - 0x31FA
{
	int iVar0;
	char* sVar1;
	
	if (Local_42.f_1 == PLAYER::PLAYER_PED_ID())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
		if (PED::GET_PED_STEALTH_MOVEMENT(Local_42.f_1))
		{
			if (Global_35760[iLocal_63 /*5*/].f_2 == 0 || Global_35760[iLocal_63 /*5*/].f_2 == 2)
			{
				PED::SET_PED_STEALTH_MOVEMENT(Local_42.f_1, 0, 0);
			}
		}
		if (PED::IS_PED_DUCKING(Local_42.f_1))
		{
			PED::SET_PED_DUCKING(Local_42.f_1, 0);
		}
	}
	if (Local_54 != -2)
	{
		if (Local_54 == -1)
		{
			if (Global_35760[iLocal_63 /*5*/].f_2 != 0)
			{
				Global_35760[iLocal_63 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_54 - SYSTEM::TIMERA());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_35760[iLocal_63 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_35760[iLocal_63 /*5*/].f_2 = 2;
					if (!func_71(2))
					{
						Global_35760[iLocal_63 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_35760[iLocal_63 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_35760[iLocal_63 /*5*/].f_2 = 1;
					if (!func_71(2))
					{
						Global_35760[iLocal_63 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_35760[iLocal_63 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_53))
	{
		if (!func_74(Local_42.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_42.f_1, sVar1, sLocal_53, 3))
			{
				TASK::STOP_ANIM_TASK(Local_42.f_1, sVar1, sLocal_53, -4f);
			}
			sLocal_53 = "";
			return;
		}
	}
	if (Global_35760[iLocal_63 /*5*/].f_3 >= 10 || Global_35760[iLocal_63 /*5*/].f_4 >= 15)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_42.f_1, 1785177548) == 1)
		{
			return;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_42.f_1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 1))
		{
			if (Global_35760[iLocal_63 /*5*/].f_3 >= 10)
			{
				Global_35760[iLocal_63 /*5*/].f_3 = 9;
			}
			if (Global_35760[iLocal_63 /*5*/].f_4 >= 15)
			{
				Global_35760[iLocal_63 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_59.f_1 = 3;
		return;
	}
	if (!bLocal_50)
	{
		return;
	}
	if (!func_78(Local_42.f_1))
	{
		return;
	}
}

int func_86()//Position - 0x3407
{
	int iVar0;
	
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_42.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_42.f_1, 0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		return 0;
	}
	if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == Local_42.f_1)
	{
		return 0;
	}
	Local_42.f_4 = iVar0;
	Local_59.x = 7;
	return 1;
}

void func_87()//Position - 0x345A
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
	{
		Local_59.x = 4;
		return;
	}
}

void func_88()//Position - 0x3475
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	
	if (!bLocal_49)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Var5, Var8) && !PED::IS_COP_PED_IN_AREA_3D(Var5, Var8))
	{
		return;
	}
	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	GlobalFunc_184(73, 1);
}

void func_89()//Position - 0x3544
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_42.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_42.f_1, 0);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1);
		if (!iVar2 == Local_42.f_1)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!PLAYER::PLAYER_PED_ID() == Local_42.f_1)
	{
		return;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		fLocal_52 = 0f;
		func_91(iVar0, 0f);
		return;
	}
	if (SYSTEM::TIMERA() < Local_54.f_4)
	{
		func_91(iVar0, fLocal_52);
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		Local_54.f_4 = SYSTEM::TIMERA() + 2000;
	}
	else
	{
		Local_54.f_4 = SYSTEM::TIMERA() + 1000;
	}
	fVar3 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_52 = 0f;
		func_91(iVar0, 0f);
		return;
	}
	if (Local_54.f_1 == -1)
	{
		fLocal_52 = func_90(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_54.f_1 - SYSTEM::TIMERA());
		if (iVar4 < 5000)
		{
			fLocal_52 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_52 = func_90(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_52 = func_90(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_52 = func_90(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_52 = func_90(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_52 = func_90(iVar0, 0.13f, 0.06f);
		}
	}
	func_91(iVar0, fLocal_52);
}

float func_90(int iParam0, float fParam1, float fParam2)//Position - 0x36CF
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		if (TASK::IS_PED_SPRINTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = GlobalFunc_253(fVar0, -1f, 1f);
	return fVar0;
}

void func_91(int iParam0, float fParam1)//Position - 0x3763
{
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		PED::_0x288DF530C92DAD6F(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		VEHICLE::SET_VEHICLE_STEER_BIAS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
}

void func_92()//Position - 0x3798
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
	{
		Local_59.x = 4;
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_35760[iLocal_63 /*5*/].f_3 >= 10 || Global_35760[iLocal_63 /*5*/].f_4 >= 15)
		{
			if (Global_35760[iLocal_63 /*5*/].f_3 >= 10)
			{
				Global_35760[iLocal_63 /*5*/].f_3 = 9;
			}
			if (Global_35760[iLocal_63 /*5*/].f_4 >= 15)
			{
				Global_35760[iLocal_63 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_49)
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_42.f_1, 0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(Local_42.f_1, 0, 0);
		Local_59.x = 11;
		return;
	}
}

void func_93()//Position - 0x383C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SYSTEM::TIMERA() <= Local_54.f_3)
	{
		return;
	}
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 355471868);
	if (!iVar0 == 7)
	{
		Local_54.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
	{
		Local_59.x = 4;
		Local_54.f_3 = -2;
		return;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_42.f_1, 0);
	iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1);
	if (iVar2 == Local_42.f_1)
	{
		func_94();
		Local_54.f_3 = -2;
		return;
	}
	TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_42.f_1, iVar1);
	Local_59.x = 9;
	Local_54.f_3 = SYSTEM::TIMERA() + 1000;
}

void func_94()//Position - 0x38D5
{
	if (Local_59.x == 10)
	{
		return;
	}
	Local_59.x = 10;
	if (iLocal_47 == -1)
	{
		return;
	}
	GlobalFunc_7739(iLocal_47, 2, 5);
	Local_54.f_4 = SYSTEM::TIMERA();
	fLocal_52 = 0f;
}

void func_95()//Position - 0x3907
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_42.f_1))
	{
		Local_59.x = 10;
		return;
	}
	if (SYSTEM::TIMERA() < Local_54.f_3)
	{
		return;
	}
	Local_59.x = 4;
	Local_54.f_3 = -2;
}

void func_96()//Position - 0x3939
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_49)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_42.f_1))
	{
		if (!bLocal_49)
		{
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_42.f_1, 0);
		if (!iVar0 == Local_42.f_4)
		{
			if (!bLocal_49)
			{
			}
			if (!bLocal_49)
			{
				if (!bLocal_49)
				{
				}
				TASK::TASK_LEAVE_ANY_VEHICLE(Local_42.f_1, 0, 0);
				Local_59.x = 11;
				return;
			}
			Local_42.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_49)
			{
			}
			func_94();
			return;
		}
		if (!bLocal_49)
		{
			if (!bLocal_49)
			{
			}
			func_94();
			return;
		}
		if (!bLocal_49)
		{
		}
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_42.f_4, -1);
		if (iVar2 == Local_42.f_1)
		{
			func_94();
			return;
		}
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_42.f_1, iVar0);
		Local_59.x = 9;
		Local_54.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!func_84())
	{
		TASK::CLEAR_PED_TASKS(Local_42.f_1);
		Local_59.x = 4;
		return;
	}
	if (!bLocal_49)
	{
		iVar3 = TASK::GET_SCRIPT_TASK_STATUS(Local_42.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
			{
				TASK::CLEAR_PED_TASKS(Local_42.f_1);
				Local_59.x = 4;
				return;
			}
		}
	}
}

void func_97()//Position - 0x3A53
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	if (bLocal_49)
	{
		return;
	}
	if (Local_42.f_4 == 0)
	{
		Local_59.x = 4;
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_42.f_4, 0))
	{
		Local_42.f_4 = 0;
		Local_59.x = 4;
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_42.f_1, 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(Local_42.f_4, 1) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_71(Global_35760[iLocal_63 /*5*/].f_2))
		{
			Local_59.x = 12;
			return;
		}
		Local_59.x = 5;
		Local_54.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}
	iVar7 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_42.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_42.f_4, iVar8))
			{
				bVar9 = false;
			}
			else
			{
				iVar8++;
			}
		}
		else
		{
			bVar9 = false;
			iVar8 = -1;
		}
	}
	if (iVar8 == -1)
	{
		if (iVar8 == -1)
		{
			Local_59.x = 4;
			return;
		}
	}
	func_98();
	TASK::TASK_ENTER_VEHICLE(Local_42.f_1, Local_42.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_59.x = 7;
}

void func_98()//Position - 0x3B55
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_42.f_1))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(Local_42.f_1))
	{
		PED::RESET_PED_MOVEMENT_CLIPSET(Local_42.f_1, 1048576000);
		PED::RESET_PED_STRAFE_CLIPSET(Local_42.f_1);
		PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Local_42.f_1, 0, -1056964608);
		Local_59.f_2 = "";
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_42.f_1);
		PED::SET_PED_RESET_FLAG(Local_42.f_1, 200, 0);
		PED::SET_PED_RESET_FLAG(Local_42.f_1, 46, 0);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_42.f_1, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_42.f_1, 262144, 0);
		AUDIO::SET_PED_IS_DRUNK(Local_42.f_1, 0);
	}
	if (!bLocal_50)
	{
		return;
	}
	bLocal_50 = false;
}

void func_99()//Position - 0x3BEA
{
	if (SYSTEM::TIMERA() < Local_54.f_2)
	{
		func_85();
		return;
	}
	func_100();
	Local_54.f_2 = -2;
	Local_59.x = 12;
}

int func_100()//Position - 0x3C14
{
	if (!func_78(Local_42.f_1))
	{
		return 0;
	}
	if (!bLocal_50)
	{
		return 0;
	}
	func_101(Local_42.f_1);
	Local_59.f_2 = "";
	return 1;
}

void func_101(int iParam0)//Position - 0x3C45
{
	PED::RESET_PED_MOVEMENT_CLIPSET(uParam0, 1048576000);
	PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(uParam0, 0, -1056964608);
	PED::SET_PED_RESET_FLAG(uParam0, 200, 0);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 262144, 0);
	AUDIO::SET_PED_IS_DRUNK(iParam0, 0);
}

void func_102()//Position - 0x3C86
{
	int iVar0;
	
	if (Local_54 == -1)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35760[iLocal_63 /*5*/].f_3 < 3 && Global_35760[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
	{
		Local_59.x = 10;
		return;
	}
	if (func_78(Local_42.f_1))
	{
		Local_59.x = 12;
		return;
	}
	if (Local_54 == -2)
	{
		return;
	}
	if (!func_71(Global_35760[iLocal_63 /*5*/].f_2))
	{
		return;
	}
	Local_59.x = 12;
}


void func_104()//Position - 0x3D64
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_35841[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_35841[iVar1 /*5*/].f_1 == iLocal_47)
			{
				func_106(iVar1);
				GlobalFunc_2827(iVar1);
			}
			else if (Global_35841[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_48 == -1)
				{
					if (iLocal_48 == Global_35841[iVar1 /*5*/])
					{
						func_106(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}


void func_106(int iParam0)//Position - 0x3E29
{
	int iVar0;
	
	iVar0 = Global_35841[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_131();
			break;
		
		case 2:
			func_110(Global_35841[iParam0 /*5*/].f_4);
			break;
		
		case 3:
			func_109();
			break;
		
		case 4:
			func_108();
			break;
		
		case 5:
			func_107();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_107()//Position - 0x3EA2
{
	Local_59.f_1 = 2;
}

void func_108()//Position - 0x3EAF
{
	int iVar0;
	
	Global_35760[iLocal_63 /*5*/].f_4++;
	if (Local_54 == -1)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35760[iLocal_63 /*5*/].f_4 < 9 && Global_35760[iLocal_63 /*5*/].f_4 != 0)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_42.f_1))
		{
			func_71(Global_35760[iLocal_63 /*5*/].f_2);
		}
	}
}

void func_109()//Position - 0x3F6F
{
	int iVar0;
	
	Global_35760[iLocal_63 /*5*/].f_3++;
	if (Local_54 == -1)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35760[iLocal_63 /*5*/].f_3 < 3 && Global_35760[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_42.f_1))
		{
			func_71(Global_35760[iLocal_63 /*5*/].f_2);
		}
	}
}

void func_110(int iParam0)//Position - 0x402F
{
	Local_42.f_3 = (Local_42.f_3 + iParam0);
	Local_42.f_2 = (Local_42.f_2 + iParam0);
	Local_54.f_1 = (Local_54.f_1 + iParam0);
	Local_54 = (Local_54 + iParam0);
}

void func_111()//Position - 0x405F
{
	int iVar0;
	
	if (!bLocal_49)
	{
		iLocal_62 = -1;
		return;
	}
	if (iLocal_62 < 0)
	{
		iLocal_62 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (iVar0 != iLocal_62)
	{
		if (iVar0 > iLocal_62)
		{
			GlobalFunc_587();
		}
		iLocal_62 = iVar0;
		return;
	}
}


void func_113()//Position - 0x40B1
{
	if (!Local_54 == -1)
	{
		if (!Local_54 == -2)
		{
			if (SYSTEM::TIMERA() >= Local_54)
			{
				func_98();
				Local_54 = -2;
				Local_59.x = 12;
			}
		}
		if (SYSTEM::TIMERA() > Local_54.f_1)
		{
			func_131();
		}
	}
}

void func_114(int iParam0)//Position - 0x40F0
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_35841[iVar0 /*5*/])
		{
			GlobalFunc_2827(iVar0);
		}
		iVar0++;
	}
}

void func_115()//Position - 0x4120
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Local_59.x = 4;
	if (!ENTITY::IS_ENTITY_DEAD(Local_42.f_1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_42.f_1))
		{
			Local_59.x = 10;
		}
	}
	if (bLocal_49)
	{
		GlobalFunc_587();
		GlobalFunc_184(71, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = GlobalFunc_6671(2041, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_119(iVar1);
			}
			GlobalFunc_6784(2041, iVar0 + 1, -1, 1);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			STATS::STAT_GET_INT(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			STATS::STAT_GET_INT(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			STATS::STAT_GET_INT(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_119(iVar6);
			}
			switch (GlobalFunc_8315())
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_59.f_1 = 1;
		return;
	}
	Local_59.f_1 = 12;
	if (Local_54 == -1)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35760[iLocal_63 /*5*/].f_3 < 3 && Global_35760[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_35760[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_54 - SYSTEM::TIMERA());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_35760[iLocal_63 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_35760[iLocal_63 /*5*/].f_2 = 1;
		}
	}
}




void func_119(int iParam0)//Position - 0x4336
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(81);
	Global_2408820[iVar0 /*83*/] = 81;
	Global_2408820[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}




void func_123()//Position - 0x43F4
{
	Local_54 = Local_42.f_2;
	Local_54.f_1 = Local_42.f_3;
	Local_54.f_2 = -2;
	Local_54.f_3 = -2;
}






void func_129()//Position - 0x453B
{
	int iVar0;
	
	bLocal_49 = false;
	if (Local_42.f_1 == PLAYER::PLAYER_PED_ID())
	{
		bLocal_49 = true;
		Global_35956 = 1;
		Global_35958++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_42.f_1))
	{
		iVar0 = GlobalFunc_6674(Local_42.f_1);
		switch (iVar0)
		{
			case 17:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_42.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_42.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_130()//Position - 0x45A7
{
	if (!iLocal_47 == -1)
	{
		return;
	}
	iLocal_47 = GlobalFunc_1667(Local_42.f_1);
	if (iLocal_47 == -1)
	{
		return;
	}
	iLocal_63 = GlobalFunc_1666(iLocal_47);
}

void func_131()//Position - 0x45D5
{
	int iVar0;
	
	if (!GlobalFunc_39(0) && !GlobalFunc_39(3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_42.f_1))
		{
			iVar0 = GlobalFunc_6674(Local_42.f_1);
			if (Global_35760[iLocal_63 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						GlobalFunc_5122(Local_42.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						GlobalFunc_5122(Local_42.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						GlobalFunc_5122(Local_42.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_42.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_42.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_98();
	if (bLocal_49)
	{
		Global_35956 = 0;
	}
	func_132();
	STREAMING::REMOVE_ANIM_DICT(GlobalFunc_2366(0));
	STREAMING::REMOVE_ANIM_DICT(GlobalFunc_2366(2));
	STREAMING::REMOVE_ANIM_DICT(GlobalFunc_2366(1));
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
	{
		GlobalFunc_6685(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_132()//Position - 0x46D3
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_42.f_1))
	{
		return;
	}
	uVar0 = Local_42.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_42.f_1, 0))
	{
		uVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_42.f_1, 0);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar1, -1);
		if (!Local_42.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || !PLAYER::PLAYER_PED_ID() == Local_42.f_1)
	{
		return;
	}
	fLocal_52 = 0f;
	func_91(uVar0, 0f);
}



