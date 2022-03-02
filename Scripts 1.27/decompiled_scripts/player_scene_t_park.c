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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	int iLocal_75 = 0;
	float fLocal_76 = 0f;
	int iLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	char cLocal_85[64] = "";
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	char cLocal_101[64] = "";
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	char cLocal_117[64] = "";
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	struct<3> Local_133 = { 0, 0, 0 } ;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	char* sLocal_138 = NULL;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	char[] cLocal_154[8] = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	char cLocal_170[64] = "";
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	char cLocal_186[64] = "";
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	char cLocal_202[64] = "";
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	int iLocal_219 = 0;
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
	Local_56 = { 0f, 0f, 0f };
	Local_59 = { 0f, 0f, 0f };
	iLocal_62 = -1;
	iLocal_65 = 318;
	iLocal_66 = 1;
	fLocal_136 = -1f;
	fLocal_137 = -1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_56();
	}
	SYSTEM::WAIT(0);
	func_44();
	func_43();
	GlobalFunc_576();
	while (iLocal_66 && GlobalFunc_9549(5, 0))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_64)
		{
			case 0:
				if (func_31())
				{
					iLocal_64 = 1;
				}
				break;
			
			case 1:
				if (func_2())
				{
					iLocal_64 = 2;
				}
				break;
			
			case 2:
				func_1();
				break;
		}
	}
	func_56();
}

void func_1()//Position - 0x100
{
	iLocal_66 = 0;
}

int func_2()//Position - 0x10B
{
	struct<3> Var0;
	float fVar3;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_85))
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_82))
		{
			Var0 = { Vector(32.856f, 3819.65f, 1971.62f) - Local_78 };
			uLocal_82 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(&cLocal_85, Local_78 + Var0, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sLocal_138, &cLocal_154, 2))
		{
			fVar3 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_87697);
			switch (iLocal_219)
			{
				case 0:
					if (fLocal_136 < 0f)
					{
						iLocal_219++;
						return 0;
					}
					if (fVar3 > fLocal_136)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67) || iLocal_84 != -1)
						{
							if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(&cLocal_101, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, iLocal_84, 1f, 0, 0, 0))
							{
								if (MISC::ARE_STRINGS_EQUAL(&cLocal_101, "scr_meth_pipe_smoke"))
								{
									func_15(PLAYER::PLAYER_PED_ID(), 0);
								}
								uLocal_218 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_218, &cLocal_202, PLAYER::PLAYER_PED_ID(), &cLocal_186, 0, 0);
								iLocal_219++;
							}
						}
						else if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(&cLocal_101, iLocal_67, 0f, 0f, -1f, 0f, 0f, 0f, 1065353216, 0, 0, 0))
						{
							if (MISC::ARE_STRINGS_EQUAL(&cLocal_101, "scr_meth_pipe_smoke"))
							{
								func_15(PLAYER::PLAYER_PED_ID(), 0);
							}
							uLocal_218 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_218, &cLocal_202, PLAYER::PLAYER_PED_ID(), &cLocal_186, 0, 0);
							iLocal_219++;
						}
					}
					break;
				
				case 1:
					if (fLocal_137 < 0f)
					{
						iLocal_219++;
						return 0;
					}
					if (fVar3 > fLocal_137)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67) || iLocal_84 != -1)
						{
							if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(&cLocal_101, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, iLocal_84, 1f, 0, 0, 0))
							{
								if (MISC::ARE_STRINGS_EQUAL(&cLocal_101, "scr_meth_pipe_smoke"))
								{
									func_15(PLAYER::PLAYER_PED_ID(), 0);
								}
								uLocal_218 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_218, &cLocal_202, PLAYER::PLAYER_PED_ID(), &cLocal_186, 0, 0);
								iLocal_219++;
							}
						}
						else if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(&cLocal_101, iLocal_67, 0f, 0f, -1f, 0f, 0f, 0f, 1065353216, 0, 0, 0))
						{
							if (MISC::ARE_STRINGS_EQUAL(&cLocal_101, "scr_meth_pipe_smoke"))
							{
								func_15(PLAYER::PLAYER_PED_ID(), 0);
							}
							uLocal_218 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_218, &cLocal_202, PLAYER::PLAYER_PED_ID(), &cLocal_186, 0, 0);
							iLocal_219++;
						}
					}
					break;
				
				case 2:
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_117))
					{
						if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(&cLocal_117, Local_78 + Local_133, 0f, 0f, 0f, 1f, 0, 0, 0))
						{
							iLocal_219++;
						}
					}
					else
					{
						iLocal_219++;
					}
					break;
				
				case 3:
					break;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_67))
				{
					if (iLocal_77 != -1)
					{
						if (fVar3 > fLocal_76)
						{
							func_3(&iLocal_67, iLocal_77);
						}
					}
				}
			}
		}
		else
		{
			if (iLocal_83 != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_83, 0);
				iLocal_83 = 0;
				AUDIO::STOP_SOUND(uLocal_218);
				AUDIO::RELEASE_SOUND_ID(uLocal_218);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_67))
				{
					if (iLocal_77 != -1)
					{
						func_3(&iLocal_67, iLocal_77);
					}
				}
			}
			return 1;
		}
	}
	else
	{
		func_56();
		return 0;
	}
	return 0;
}

int func_3(int iParam0, int iParam1)//Position - 0x3D8
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	char* sVar26;
	struct<3> Var27;
	struct<3> Var30;
	char* sVar33;
	int iVar34;
	char* sVar35;
	char[] cVar51[8];
	var uVar67;
	char* sVar68;
	char[] cVar84[8];
	char[] cVar100[8];
	var uVar116;
	var uVar117;
	
	iVar0 = GlobalFunc_5187();
	switch (iParam1)
	{
		case 0:
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
			}
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("prop_cs_ironing_board") && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("prop_iron_01"))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
				ENTITY::SET_ENTITY_DYNAMIC(*iParam0, 1);
			}
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("prop_iron_01"))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, 1) };
				Var4 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
				ENTITY::SET_ENTITY_COORDS(*iParam0, Var1 + Vector(0.1f, 0f, 0f), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(*iParam0, Var4.x, Var4.f_1, Var4.f_2, 2, 1);
			}
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("p_defilied_ragdoll_01_s"))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
			}
			return 1;
			break;
		
		case 1:
			OBJECT::DELETE_OBJECT(iParam0);
			return 1;
			break;
		
		case 2:
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
			}
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
			ENTITY::SET_ENTITY_DYNAMIC(*iParam0, 1);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
			*iParam0 = 0;
			return 1;
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
			}
			if (((ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("prop_chateau_table_01") && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_res_tt_flusher")) && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_ilev_fh_lampa_on")) && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("prop_cs_remote_01"))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
			}
			if ((ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_ilev_fh_dineeamesa") && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_res_tt_flusher")) && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_ilev_fh_lampa_on"))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
			}
			ENTITY::SET_ENTITY_DYNAMIC(*iParam0, 1);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
			return 1;
			break;
		
		case 4:
			Var7 = { ENTITY::GET_ENTITY_COORDS(*iParam0, 1) };
			Var10 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
			iVar13 = 0;
			switch (ENTITY::GET_ENTITY_MODEL(*iParam0))
			{
				case joaat("p_laptop_02_s"):
					iVar13 = joaat("prop_laptop_02_closed");
					break;
				
				case joaat("v_ilev_m_dinechair"):
					iVar13 = joaat("p_dinechair_01_s");
					break;
				
				case joaat("prop_acc_guitar_01"):
					iVar13 = joaat("prop_acc_guitar_01_d1");
					break;
				
				case joaat("p_defilied_ragdoll_01_s"):
					iVar13 = joaat("prop_defilied_ragdoll_01");
					break;
				
				case joaat("p_hand_toilet_s"):
					iVar13 = joaat("prop_toiletfoot_static");
					break;
				
				case joaat("prop_laptop_02_closed"):
				case joaat("p_dinechair_01_s"):
				case joaat("prop_acc_guitar_01_d1"):
				case joaat("prop_defilied_ragdoll_01"):
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
					return 1;
					break;
				
				case joaat("prop_toiletfoot_static"):
					Var14 = { 1971.669f, 3819.449f, 32.766f };
					Var17 = { 0f, 0f, 53.6f };
					ENTITY::SET_ENTITY_COORDS(*iParam0, Var14, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(*iParam0, Var17, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 1);
					return 1;
					break;
				
				default:
					iVar13 = 0;
					return 0;
					break;
			}
			STREAMING::REQUEST_MODEL(iVar13);
			while (!STREAMING::HAS_MODEL_LOADED(iVar13))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				HUD::CLEAR_REMINDER_MESSAGE();
				if (Global_14393.f_1 != 1)
				{
					GlobalFunc_7632(1);
				}
				SYSTEM::WAIT(0);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			if (Global_14393.f_1 != 1)
			{
				GlobalFunc_7632(1);
			}
			OBJECT::DELETE_OBJECT(iParam0);
			*iParam0 = OBJECT::CREATE_OBJECT(iVar13, Var7, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, Var10, 2, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar13);
			return 1;
			break;
		
		case 5:
			FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(*iParam0, 1), 0, 1056964608, 1, 0, 1065353216);
			OBJECT::DELETE_OBJECT(iParam0);
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pistol")))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 30, 0, 1);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 1);
				}
				OBJECT::DELETE_OBJECT(iParam0);
				return 1;
			}
			else
			{
				OBJECT::DELETE_OBJECT(iParam0);
				return 0;
			}
			break;
		
		case 8:
			Var20 = { ENTITY::GET_ENTITY_COORDS(*iParam0, 1) };
			Var23 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
			sVar26 = "";
			switch (ENTITY::GET_ENTITY_MODEL(*iParam0))
			{
				case joaat("prop_cs_beer_bot_01"):
					sVar26 = "scr_pts_glass_bottle";
					break;
				
				case joaat("prop_pineapple"):
					sVar26 = "ent_dst_pineapple";
					break;
				
				case joaat("prop_acc_guitar_01"):
					sVar26 = "scr_pts_guitar_break";
					break;
				
				default:
					sVar26 = "";
					return 0;
					break;
			}
			STREAMING::REQUEST_PTFX_ASSET();
			while (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				HUD::CLEAR_REMINDER_MESSAGE();
				if (Global_14393.f_1 != 1)
				{
					GlobalFunc_7632(1);
				}
				SYSTEM::WAIT(0);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			if (Global_14393.f_1 != 1)
			{
				GlobalFunc_7632(1);
			}
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(sVar26, Var20, Var23, 1065353216, 0, 0, 0);
			OBJECT::DELETE_OBJECT(iParam0);
			return 1;
			break;
		
		case 9:
			Var27 = { ENTITY::GET_ENTITY_COORDS(*iParam0, 1) };
			Var30 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
			sVar33 = "";
			switch (ENTITY::GET_ENTITY_MODEL(*iParam0))
			{
				case joaat("prop_cs_beer_bot_01"):
					sVar33 = "scr_pts_glass_bottle";
					break;
				
				case joaat("prop_pineapple"):
					sVar33 = "ent_dst_pineapple";
					break;
				
				case joaat("prop_acc_guitar_01"):
				case joaat("prop_acc_guitar_01_d1"):
					sVar33 = "scr_pts_guitar_break";
					break;
				
				default:
					sVar33 = "";
					return 0;
					break;
			}
			STREAMING::REQUEST_PTFX_ASSET();
			while (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				HUD::CLEAR_REMINDER_MESSAGE();
				if (Global_14393.f_1 != 1)
				{
					GlobalFunc_7632(1);
				}
				SYSTEM::WAIT(0);
			}
			iVar34 = 0;
			switch (ENTITY::GET_ENTITY_MODEL(*iParam0))
			{
				case joaat("prop_acc_guitar_01_d1"):
					return 0;
					break;
				
				case joaat("p_laptop_02_s"):
					iVar34 = joaat("prop_laptop_02_closed");
					break;
				
				case joaat("v_ilev_m_dinechair"):
					iVar34 = joaat("p_dinechair_01_s");
					break;
				
				case joaat("prop_acc_guitar_01"):
					iVar34 = joaat("prop_acc_guitar_01_d1");
					break;
				
				case joaat("p_defilied_ragdoll_01_s"):
					iVar34 = joaat("prop_defilied_ragdoll_01");
					break;
				
				default:
					iVar34 = 0;
					return 0;
					break;
			}
			STREAMING::REQUEST_MODEL(iVar34);
			while (!STREAMING::HAS_MODEL_LOADED(iVar34))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				HUD::CLEAR_REMINDER_MESSAGE();
				if (Global_14393.f_1 != 1)
				{
					GlobalFunc_7632(1);
				}
				SYSTEM::WAIT(0);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			if (Global_14393.f_1 != 1)
			{
				GlobalFunc_7632(1);
			}
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(sVar33, Var27, Var30, 1065353216, 0, 0, 0);
			OBJECT::DELETE_OBJECT(iParam0);
			*iParam0 = OBJECT::CREATE_OBJECT(iVar34, Var27, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, Var30, 2, 1);
			if (func_6(iVar0, &sVar35, &cVar51, &uVar67))
			{
				if (GlobalFunc_5930(iVar0, &sVar68, &cVar84, &cVar100, &uVar116, &uVar117))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, &sVar68, &sVar35, 2))
					{
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(*iParam0, Global_87697, &sVar35, &sVar68, 1000f, -8f, uVar67, 1148846080);
					}
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar34);
			return 1;
			break;
	}
	return 0;
}



int func_6(int iParam0, char* sParam1, char* sParam2, var uParam3)//Position - 0x2204
{
	*uParam3 = 0;
	StringCopy(sParam2, "", 64);
	switch (iParam0)
	{
		case 192:
			StringCopy(sParam1, "002110_04_MAGD_3_WEED_EXCHANGE_WEEDBOTTLE", 64);
			return 1;
			break;
		
		case 156:
			StringCopy(sParam1, "AROUND_THE_TABLE_SELFISH_Lap_Top", 64);
			return 1;
			break;
		
		case 189:
			StringCopy(sParam1, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_CHAIR", 64);
			return 1;
			break;
		
		case 94:
			StringCopy(sParam1, "exit_table", 64);
			StringCopy(sParam2, "", 64);
			return 1;
			break;
		
		case 150:
			StringCopy(sParam1, "RONEX_IG5_P2_CHAIR_01", 64);
			StringCopy(sParam2, "RONEX_IG5_P2_CHAIR_02", 64);
			return 1;
			break;
		
		case 151:
			StringCopy(sParam1, "001510_02_GC_MICS3_IG_1_EXIT_CHAIR", 64);
			StringCopy(sParam2, "", 64);
			return 1;
			break;
		
		case 171:
			StringCopy(sParam1, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_$", 64);
			return 1;
			break;
		
		case 172:
			StringCopy(sParam1, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_CASH", 64);
			return 1;
			break;
		
		case 249:
			StringCopy(sParam1, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_GUITAR", 64);
			return 1;
			break;
		
		case 296:
			StringCopy(sParam1, "BEAR_IN_FLOYDS_FACE_EXIT_rasp", 64);
			return 1;
			break;
		
		case 297:
			StringCopy(sParam1, "BEAR_FLOYDS_FACE_SMELL_EXIT_doll", 64);
			return 1;
			break;
		
		case 298:
			StringCopy(sParam1, "Pineapple_EXIT_PINEAPPLE", 64);
			return 1;
			break;
		
		case 311:
			StringCopy(sParam1, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT_Foot", 64);
			return 1;
			break;
		
		case 103:
			StringCopy(sParam1, "pier_lean_smoke_outro_CIG", 64);
			return 1;
			break;
		
		case 244:
			StringCopy(sParam1, "EXIT_Taco", 64);
			return 1;
			break;
		
		case 198:
			StringCopy(sParam1, "Garbage_Toss_BAG", 64);
			*uParam3 = 1;
			return 1;
			break;
		
		case 200:
			StringCopy(sParam1, "THROW_CUP_EXIT_CUP", 64);
			return 1;
			break;
		
		case 201:
			StringCopy(sParam1, "HIT_CUP_HAND_EXIT_CUP", 64);
			return 1;
			break;
		
		case 236:
			StringCopy(sParam1, "EXIT_Beer", 64);
			return 1;
			break;
		
		case 164:
			StringCopy(sParam1, "001404_01_MICS3_16_READS_SCRIPT_EXIT_PROP", 64);
			return 1;
			break;
		
		case 80:
			StringCopy(sParam1, "EXIT_FORWARD_CHAIR", 64);
			return 1;
			break;
	}
	return 0;
}









void func_15(int iParam0, int iParam1)//Position - 0x262C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = 20000;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 *= 3;
	}
	if (!GlobalFunc_5459(iParam0))
	{
		GlobalFunc_5471(iParam0, iVar0, 0);
		GlobalFunc_1668(iVar0, iVar0, 0.3f, 1f, iParam1, 0);
		iVar1 = GlobalFunc_1667(iParam0);
		if (iVar1 == -1)
		{
			iVar2 = GlobalFunc_1666(iVar1);
			if (!iVar2 == -1)
			{
				Global_35760[iVar2 /*5*/].f_4++;
			}
		}
	}
	else
	{
		iVar3 = GlobalFunc_1667(iParam0);
		iVar4 = -1;
		if (iVar3 == -1)
		{
			iVar4 = GlobalFunc_1666(iVar3);
			if (!iVar4 == -1)
			{
				Global_35760[iVar4 /*5*/].f_4++;
			}
		}
		Global_35925 = (Global_35925 + iVar0);
		GlobalFunc_8456(iParam0, iVar0);
	}
	Global_35930 = 0.25f;
	StringCopy(&Global_35931, "STONED", 16);
	iVar5 = GlobalFunc_1667(iParam0);
	if (iVar5 == -1)
	{
		iVar6 = GlobalFunc_1666(iVar5);
		if (!iVar6 == -1)
		{
		}
		return;
	}
	GlobalFunc_7847(1, iVar5, 4, iParam0);
}
















int func_31()//Position - 0x2BA2
{
	if (!iLocal_68 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67))
		{
			STREAMING::REQUEST_MODEL(iLocal_68);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_68))
			{
				STREAMING::REQUEST_MODEL(iLocal_68);
			}
			else if (iLocal_75 != -1)
			{
				iLocal_67 = OBJECT::CREATE_OBJECT(iLocal_68, Local_78, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_75), Local_69, Local_72, 0, 0, 0, 0, 2, 1);
			}
			else
			{
				iLocal_67 = OBJECT::CREATE_OBJECT(iLocal_68, Local_78 + Local_69, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_67, Local_78 + Local_69, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_67, Vector(uLocal_81, 0f, 0f) + Local_72, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_67, 1);
			}
		}
	}
	if (!GlobalFunc_2927())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
		{
			if (iLocal_75 != -1)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_75), Local_69, Local_72, 0, 0, 0, 0, 2, 1);
				}
			}
		}
		return 1;
	}
	return 0;
}












void func_43()//Position - 0x2FF7
{
	int iVar0;
	bool bVar1;
	
	STREAMING::REQUEST_PTFX_ASSET();
	iVar0 = 0;
	bVar1 = false;
	while (!bVar1 && iVar0 < 400)
	{
		bVar1 = true;
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && (STREAMING::GET_PLAYER_SWITCH_STATE() != 8 || STREAMING::GET_PLAYER_SWITCH_STATE() == 1))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_PTFX_ASSET();
		if (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			bVar1 = false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_170))
		{
			if (!AUDIO::REQUEST_AMBIENT_AUDIO_BANK(&cLocal_170, 0))
			{
				bVar1 = false;
			}
		}
		if (!iLocal_68 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67))
			{
				STREAMING::REQUEST_MODEL(iLocal_68);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_68))
				{
					bVar1 = false;
					STREAMING::REQUEST_MODEL(iLocal_68);
				}
				else if (iLocal_75 != -1)
				{
					if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && (STREAMING::GET_PLAYER_SWITCH_STATE() != 8 || STREAMING::GET_PLAYER_SWITCH_STATE() == 1))
					{
						bVar1 = false;
					}
					else
					{
						iLocal_67 = OBJECT::CREATE_OBJECT(iLocal_68, Local_78, 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_75), Local_69, Local_72, 0, 0, 0, 0, 2, 1);
					}
				}
				else
				{
					iLocal_67 = OBJECT::CREATE_OBJECT(iLocal_68, Local_78 + Local_69, 1, 1, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_67, Local_78 + Local_69, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iLocal_67, Vector(uLocal_81, 0f, 0f) + Local_72, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_67, 1);
				}
			}
		}
		if (!bVar1)
		{
			iVar0++;
		}
		SYSTEM::WAIT(0);
	}
}

void func_44()//Position - 0x3146
{
	char[] cVar0[8];
	struct<109> Var8;
	struct<97> Var117;
	char[] cVar237[8];
	var uVar253;
	var uVar254;
	
	iLocal_65 = Global_89502;
	GlobalFunc_8273(iLocal_65, &Local_78, &uLocal_81, &cVar0);
	switch (iLocal_65)
	{
		case 273:
		case 274:
			StringCopy(&cLocal_170, "TREVOR_PUKEINTOFOUNT", 64);
			StringCopy(&cLocal_186, "TREVOR_PUKEINTOFOUNT_SOUNDS", 64);
			StringCopy(&cLocal_202, "Puke", 64);
			fLocal_136 = 0.19f;
			fLocal_137 = 0.33f;
			iLocal_84 = 31086;
			StringCopy(&cLocal_85, "", 64);
			StringCopy(&cLocal_101, "scr_trev_amb_puke", 64);
			StringCopy(&cLocal_117, "scr_pts_vomit_water", 64);
			if (iLocal_65 == 273)
			{
				Local_133 = { Vector((34.97325f + 0.25f), -441.7662f, -118.3218f) - Local_78 };
			}
			else if (iLocal_65 == 274)
			{
				Local_133 = { 0.125f, -1.1486f, (0.0588f + 0.1f) };
			}
			else
			{
				Local_133 = { -0.125f, 1.1486f, -0.0588f };
			}
			break;
		
		case 245:
		case 40:
			StringCopy(&cLocal_170, "", 64);
			StringCopy(&cLocal_186, "", 64);
			StringCopy(&cLocal_202, "", 64);
			fLocal_136 = 0.19f;
			fLocal_137 = 0.47f;
			iLocal_84 = 31086;
			StringCopy(&cLocal_85, "", 64);
			StringCopy(&cLocal_101, "scr_meth_pipe_smoke", 64);
			StringCopy(&cLocal_117, "", 64);
			break;
		
		case 310:
			StringCopy(&cLocal_170, "", 64);
			StringCopy(&cLocal_186, "", 64);
			StringCopy(&cLocal_202, "", 64);
			fLocal_136 = 0.22f;
			fLocal_137 = 0.24f;
			iLocal_84 = -1;
			StringCopy(&cLocal_85, "", 64);
			StringCopy(&cLocal_101, "scr_pts_digging", 64);
			StringCopy(&cLocal_117, "", 64);
			iLocal_68 = joaat("prop_tool_shovel");
			Local_69 = { 0f, 0f, -0.045f };
			Local_72 = { 0f, 180f, 0f };
			iLocal_75 = 28422;
			fLocal_76 = 0.7f;
			iLocal_77 = 0;
			break;
		
		case 311:
			StringCopy(&cLocal_170, "", 64);
			StringCopy(&cLocal_186, "", 64);
			StringCopy(&cLocal_202, "", 64);
			fLocal_136 = 0.5f;
			fLocal_137 = 0.55f;
			iLocal_84 = 52301;
			StringCopy(&cLocal_85, "scr_pts_flush", 64);
			StringCopy(&cLocal_101, "scr_pts_footsplash", 64);
			StringCopy(&cLocal_117, "", 64);
			break;
		
		case 315:
			StringCopy(&cLocal_170, "", 64);
			StringCopy(&cLocal_186, "", 64);
			StringCopy(&cLocal_202, "", 64);
			fLocal_136 = 0.15f;
			fLocal_137 = -1f;
			iLocal_84 = 31086;
			StringCopy(&cLocal_85, "", 64);
			StringCopy(&cLocal_101, "scr_pts_headsplash_trev", 64);
			StringCopy(&cLocal_117, "", 64);
			iLocal_68 = joaat("prop_cs_sink_filler_02");
			Local_69 = { -0.54f, 0.08f, -0.13f };
			Local_72 = { 0f, 0f, -12f };
			iLocal_75 = -1;
			fLocal_76 = 0.7f;
			iLocal_77 = -1;
			break;
		
		case 124:
			StringCopy(&cLocal_170, "", 64);
			StringCopy(&cLocal_186, "", 64);
			StringCopy(&cLocal_202, "", 64);
			fLocal_136 = 0.07f;
			fLocal_137 = -1f;
			iLocal_84 = 60309;
			StringCopy(&cLocal_85, "", 64);
			StringCopy(&cLocal_101, "scr_pts_headsplash", 64);
			StringCopy(&cLocal_117, "", 64);
			iLocal_68 = joaat("prop_cs_sink_filler_03");
			Local_69 = { -0.72f, 0.9f, 0.21f };
			Local_72 = { 0f, 0f, 9f };
			iLocal_75 = -1;
			fLocal_76 = 0.7f;
			iLocal_77 = -1;
			break;
		
		default:
			break;
	}
	Var8.f_1 = -1;
	Var8.f_17 = 4;
	Var8.f_17.f_8 = 4;
	Var8.f_17.f_13 = 4;
	Var8.f_17.f_18 = 4;
	Var8.f_17.f_24 = 4;
	Var8.f_17.f_29 = 4;
	Var8.f_17.f_34 = 4;
	Var8.f_62 = 8;
	Var8.f_96.f_7 = 21;
	Var8.f_96.f_8 = 6;
	Var117.f_1 = -1;
	Var117.f_17 = 4;
	Var117.f_17.f_8 = 4;
	Var117.f_17.f_13 = 4;
	Var117.f_17.f_18 = 4;
	Var117.f_17.f_24 = 4;
	Var117.f_17.f_29 = 4;
	Var117.f_17.f_34 = 4;
	Var117.f_62 = 8;
	Var117.f_96.f_7 = 21;
	Var117.f_96.f_8 = 6;
	Var8 = 0;
	Var8.f_2 = iLocal_65;
	Var8.f_3 = Global_87845.f_45;
	GlobalFunc_7224(Var8, &Var117);
	GlobalFunc_5930(iLocal_65, &sLocal_138, &cVar237, &cLocal_154, &uVar253, &uVar254);
}












void func_56()//Position - 0xB9ED
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		if (iLocal_77 != -1)
		{
			func_3(&iLocal_67, iLocal_77);
		}
	}
	if (iLocal_83 != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_83, 0);
		iLocal_83 = 0;
		AUDIO::STOP_SOUND(uLocal_218);
		AUDIO::RELEASE_SOUND_ID(uLocal_218);
	}
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

