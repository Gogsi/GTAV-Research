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
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	struct<2> Local_69 = { 0, 0 } ;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 1;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	struct<18> Local_115 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 4;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 4;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 4;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 4;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 4;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 4;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 8;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 21;
	var uLocal_219 = 6;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_629();
	}
	Global_87756 = 0;
	while (true)
	{
		if (!GlobalFunc_4938(0))
		{
			if (!((GlobalFunc_488() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || GlobalFunc_236()))
			{
				if (Global_87845.f_44 == 1)
				{
				}
				if (Global_87845.f_46 != 0)
				{
				}
				func_629();
			}
		}
		if (iLocal_64 == 0)
		{
			func_616();
		}
		if (iLocal_64 == 1)
		{
			func_615();
		}
		if (iLocal_64 == 2)
		{
			func_1();
		}
		if (iLocal_64 == 3)
		{
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xFD
{
	struct<97> Var0;
	struct<97> Var109;
	int iVar229;
	int iVar230;
	int iVar231;
	var uVar232;
	int iVar233;
	struct<3> Var234;
	var uVar237;
	var uVar238;
	var uVar239;
	var uVar240;
	var uVar241;
	var uVar242;
	int iVar243;
	int iVar244;
	int iVar245;
	int iVar246;
	int iVar247;
	int iVar248;
	int iVar249;
	
	Var0.f_1 = -1;
	Var0.f_17 = 4;
	Var0.f_17.f_8 = 4;
	Var0.f_17.f_13 = 4;
	Var0.f_17.f_18 = 4;
	Var0.f_17.f_24 = 4;
	Var0.f_17.f_29 = 4;
	Var0.f_17.f_34 = 4;
	Var0.f_62 = 8;
	Var0.f_96.f_7 = 21;
	Var0.f_96.f_8 = 6;
	switch (Global_87845.f_44)
	{
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var109.f_1 = -1;
				Var109.f_17 = 4;
				Var109.f_17.f_8 = 4;
				Var109.f_17.f_13 = 4;
				Var109.f_17.f_18 = 4;
				Var109.f_17.f_24 = 4;
				Var109.f_17.f_29 = 4;
				Var109.f_17.f_34 = 4;
				Var109.f_62 = 8;
				Var109.f_96.f_7 = 21;
				Var109.f_96.f_8 = 6;
				if (Global_87845.f_46 == 0)
				{
					iVar229 = GlobalFunc_8315();
					if (iVar229 != 145)
					{
						GlobalFunc_3060(iVar229);
					}
					Global_89750 = 0;
					GlobalFunc_3061(6000);
					iVar230 = 0;
					while (iVar230 < 3)
					{
						Global_87746[iVar230 /*3*/][0] = -1;
						Global_87746[iVar230 /*3*/][1] = -1;
						iVar230++;
					}
					Local_115.f_17 = { Global_87845 };
					Local_115 = 0;
					Local_115.f_2 = 318;
					Local_115.f_3 = Global_87845.f_45;
					if (Local_115.f_3 == 3)
					{
						Local_115.f_3 = GlobalFunc_8315();
					}
					if (Local_115.f_3 == 145)
					{
						Local_115.f_3 = GlobalFunc_8315();
					}
					iVar231 = GlobalFunc_237(Global_87845.f_45);
					Local_115.f_17[iVar231] = Global_87845[iVar231];
					if (func_578(Local_115.f_3, &(Local_115.f_2), &uVar232, &Var0, &Var109, iLocal_65) && (iLocal_65 || !GlobalFunc_6687(17)))
					{
						if (iLocal_65)
						{
							if (Local_115.f_2 == 10)
							{
								func_529(&(Local_115.f_2), &uVar232, &Var0, &Var109, iLocal_65);
							}
							if (Local_115.f_2 == 222)
							{
								iVar233 = CLOCK::GET_CLOCK_HOURS();
								if (iVar233 < 9 || iVar233 >= 21)
								{
									Local_115.f_2 = 194;
								}
								else
								{
									Local_115.f_2 = 193;
								}
							}
							else if (Local_115.f_2 == 223)
							{
								Local_115.f_2 = 194;
							}
							else if (Local_115.f_2 == 224)
							{
								Local_115.f_2 = 195;
							}
							MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 150f, 0, 0, 0, 0, 0);
						}
						if ((Local_115.f_2 == 5 || Local_115.f_2 == 6) || Local_115.f_2 == 7)
						{
							if (func_528(Local_115.f_3))
							{
								Var234 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[Local_115.f_3 /*3*/] };
								GlobalFunc_7712(Global_87845[Local_115.f_3]);
							}
							if (GlobalFunc_6710(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[Local_115.f_3]))
							{
								GlobalFunc_9273(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[Local_115.f_3], &uVar237, &uVar238, &uVar239, &uVar240, &uVar241, &uVar242);
								if (!func_523(Local_115.f_3))
								{
									if (!GlobalFunc_537(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[Local_115.f_3 /*3*/], 0f, 0f, 0f, 1.5f))
									{
									}
								}
								else if (!GlobalFunc_537(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[Local_115.f_3 /*3*/], 0f, 0f, 0f, 1.5f))
								{
								}
							}
							else if (!GlobalFunc_537(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[Local_115.f_3 /*3*/], 0f, 0f, 0f, 1.5f))
							{
							}
						}
						else if (func_528(Local_115.f_3))
						{
						}
						else
						{
							GlobalFunc_7215(Var0.f_3);
						}
						Global_87845.f_46++;
					}
					else
					{
						CAM::DO_SCREEN_FADE_IN(800);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						GlobalFunc_11322(PLAYER::PLAYER_PED_ID());
						if (Global_2621550)
						{
						}
						else
						{
							GlobalFunc_11335(PLAYER::PLAYER_PED_ID(), 0);
						}
						if (!GlobalFunc_268())
						{
							if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
							{
								STREAMING::STOP_PLAYER_SWITCH();
							}
						}
						Global_87845.f_44 = 2;
					}
				}
				if (Global_87845.f_46 == 1)
				{
					iVar243 = 0;
					if (iLocal_65)
					{
						iVar243 = 1;
						PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
						HUD::DISABLE_FRONTEND_THIS_FRAME();
					}
					if (iLocal_66)
					{
						if (GlobalFunc_268())
						{
							StringCopy(&(Local_69.f_1), "HUD_INIT", 64);
							GlobalFunc_5483(&Local_69, GlobalFunc_1657(&Local_69));
						}
						else
						{
							iLocal_66 = 0;
							GlobalFunc_1639(0);
						}
					}
					if (((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() > 1) && !Global_2544858)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
							{
							}
							else
							{
								ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
							}
						}
						else
						{
							iVar244 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar244))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar244))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(iVar244))
									{
									}
									else
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar244, 1);
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar244, 1);
									}
								}
							}
						}
					}
					if (func_87(&Local_115, iVar243))
					{
						if (iLocal_65)
						{
							iLocal_65 = 0;
							GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
							if (GlobalFunc_2921(0))
							{
								Global_89503[0 /*74*/] = 0;
								Global_89730[0] = 0;
								Global_89726[0] = 0;
							}
							if (GlobalFunc_2921(1))
							{
								Global_89503[1 /*74*/] = 0;
								Global_89730[1] = 0;
								Global_89726[1] = 0;
							}
							if (GlobalFunc_2921(2))
							{
								Global_89503[2 /*74*/] = 0;
								Global_89730[2] = 0;
								Global_89726[2] = 0;
							}
						}
						if (iLocal_66)
						{
							iLocal_66 = 0;
							GlobalFunc_1639(0);
							PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
							HUD::DISABLE_FRONTEND_THIS_FRAME();
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						}
						if (iLocal_67)
						{
							GlobalFunc_6498();
							iLocal_67 = 0;
						}
						iVar245 = GlobalFunc_237(GlobalFunc_8315());
						if (Local_115.f_17.f_7 != 4)
						{
							if (iVar245 != Local_115.f_17.f_7)
							{
								while (!func_7(&(Local_115.f_17), 1, 0, 0))
								{
									SYSTEM::WAIT(0);
								}
							}
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
						}
						else
						{
							iVar246 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar246))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(iVar246))
								{
								}
								else
								{
									ENTITY::FREEZE_ENTITY_POSITION(iVar246, 0);
								}
							}
						}
						GlobalFunc_7539(Var0.f_3);
						Global_87845.f_44 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Global_68508 != -1)
			{
				iVar247 = 0;
				while (iVar247 < 3)
				{
					iVar248 = -1;
					if (func_3(iVar247, &iVar248))
					{
						iVar248 = -1;
						GlobalFunc_521(iVar247);
					}
					iVar247++;
				}
			}
			Global_68508 = -1;
			Global_2540555 = -1;
			if (Global_87756)
			{
				iVar249 = 0;
				while (iVar249 < 3)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar249 /*3*/] = { 0f, 0f, 0f };
					iVar249++;
				}
				Global_87756 = 0;
			}
			iLocal_64 = 1;
			break;
	}
}


int func_3(int iParam0, int iParam1)//Position - 0x95D
{
	*iParam1 = -1;
	switch (Global_68508)
	{
		case 46:
			if (iParam0 == 0 || iParam0 == 2)
			{
				*iParam1 = Global_68508;
			}
			break;
		
		case 62:
		case 71:
		case 31:
			if (iParam0 == 2)
			{
				*iParam1 = Global_68508;
			}
			break;
		
		case 69:
		case 70:
		case 90:
		case 93:
		case 84:
		case 85:
			*iParam1 = Global_68508;
			break;
		
		case 74:
		case 75:
		case 39:
			if (iParam0 == 0)
			{
				*iParam1 = Global_68508;
			}
			break;
		
		case 8:
			if (iParam0 == 0 || iParam0 == 2)
			{
				*iParam1 = Global_68508;
			}
			break;
		
		default:
			break;
	}
	if (*iParam1 != -1)
	{
		return 1;
	}
	return 0;
}




int func_7(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xA90
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar22;
	var uVar23;
	char* sVar24;
	
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = GlobalFunc_8315();
		if (!uParam0->f_23)
		{
			GlobalFunc_9270(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		GlobalFunc_9270((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 0);
		}
		if (GlobalFunc_6687(0) || GlobalFunc_6687(3))
		{
			if (Global_17098.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (MISC::IS_BIT_SET(Global_81119[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_81119[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_81155[Global_68514.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17098.f_13 = 0;
		uParam0->f_5 = GlobalFunc_237(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = GlobalFunc_237(iVar2);
		uParam0->f_7 = 4;
		iVar22 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		GlobalFunc_7709(iVar22);
		PED::_0xE861D0B05C7662B8(iVar22, 0, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)));
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
				GlobalFunc_7709(iVar0);
				PED::_0xE861D0B05C7662B8(iVar0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, 0, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar24 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar23);
			if (!MISC::IS_STRING_NULL(sVar24))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar24, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 0, 1);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_87649 = 1;
		GlobalFunc_5126(PLAYER::PLAYER_PED_ID());
		GlobalFunc_8376();
		GlobalFunc_582(iVar2);
		GlobalFunc_8999();
		GlobalFunc_8375(iVar2);
		GlobalFunc_10882(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), GlobalFunc_485(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), GlobalFunc_485(68));
		}
		GlobalFunc_6801(iVar2, &iVar22);
		if (((GlobalFunc_39(0) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 0);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 1);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 1);
		}
		if (!GlobalFunc_579())
		{
			GlobalFunc_8382();
		}
		Global_87286 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}
















































































bool func_87(var uParam0, int iParam1)//Position - 0x9147
{
	return func_88(uParam0, 456831/*func_502*/, 456660/*func_501*/, iParam1);
}

int func_88(var uParam0, int iParam1, int iParam2, var uParam3)//Position - 0x915F
{
	int iVar0;
	struct<97> Var1;
	struct<3> Var121;
	int iVar124;
	struct<3> Var125;
	var uVar128;
	struct<3> Var129;
	struct<3> Var132;
	var uVar135;
	char* sVar136;
	char[] cVar152[8];
	char* sVar168;
	var uVar172;
	var uVar173;
	var uVar174;
	var uVar175;
	var uVar176;
	var uVar177;
	char* sVar178;
	char* sVar184;
	int iVar192;
	float fVar193;
	float fVar194;
	int iVar195;
	struct<65> Var196;
	bool bVar261;
	int iVar262;
	bool bVar263;
	bool bVar264;
	int iVar265;
	float fVar266;
	float fVar267;
	bool bVar268;
	bool bVar269;
	struct<6> Var270;
	bool bVar276;
	char cVar277[64];
	char* sVar293;
	char cVar309[64];
	int iVar325;
	int iVar326;
	int iVar327;
	int iVar328;
	char* sVar329;
	bool bVar337;
	int iVar338;
	int iVar339;
	int iVar340;
	
	if (!uParam0->f_62.f_19)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 >= (Global_35464 - 1000))
	{
		GlobalFunc_3061(2666);
	}
	Var1.f_1 = -1;
	Var1.f_17 = 4;
	Var1.f_17.f_8 = 4;
	Var1.f_17.f_13 = 4;
	Var1.f_17.f_18 = 4;
	Var1.f_17.f_24 = 4;
	Var1.f_17.f_29 = 4;
	Var1.f_17.f_34 = 4;
	Var1.f_62 = 8;
	Var1.f_96.f_7 = 21;
	Var1.f_96.f_8 = 6;
	Var121 = { 5f, 5f, 4f };
	if (*uParam0 == 0)
	{
		iVar124 = GlobalFunc_7733(&(uParam0->f_1), 0, 17, 1, 0);
		if (iVar124 == 1)
		{
			STATS::STAT_INCREMENT(joaat("sp_ambient_switch_count"), 1f);
			*uParam0 = 1;
		}
		if (!*uParam0 == 1)
		{
			if (!Global_68507 == -1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_81155[Global_68507 /*34*/]), SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					*uParam0 = 1;
				}
			}
			else if (GlobalFunc_8648() == 36)
			{
				*uParam0 = 1;
			}
		}
	}
	if (*uParam0 == 1)
	{
		uParam0->f_96.f_2 = 0;
		uParam0->f_96.f_3 = 0;
		Global_89750 = 0;
		uParam0->f_61 = GlobalFunc_237(uParam0->f_3);
		if (GlobalFunc_8044(uParam0->f_2, &(uParam0->f_4), &(uParam0->f_7), &(uParam0->f_8)))
		{
			GlobalFunc_7632(1);
			if (GlobalFunc_10760(uParam0, &Var125, &uVar128))
			{
				uParam0->f_4 = { Var125 };
				uParam0->f_7 = uVar128;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[uParam0->f_3 /*3*/] = { Var125 };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[uParam0->f_3] = uVar128;
				if (Global_89726[uParam0->f_3] == 2)
				{
					Global_89734[uParam0->f_3 /*3*/] = { Var125 };
					Global_89744[uParam0->f_3] = uVar128;
				}
			}
			Global_88209 = uParam0->f_2;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
			}
			else if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(uParam0->f_4))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
			}
			else
			{
				uParam0->f_16 = 0;
			}
			if (uParam0->f_16 != 0)
			{
				if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				}
			}
			if ((uParam0->f_2 == 222 || uParam0->f_2 == 223) || uParam0->f_2 == 224)
			{
				GlobalFunc_7934(21, 0);
			}
			GlobalFunc_7225(uParam0->f_2);
			if (GlobalFunc_8632(uParam0->f_2, &Var129, &Var132, &uVar135))
			{
				if ((GlobalFunc_2940(uParam0->f_2, &sVar136, &cVar152) || GlobalFunc_2939(uParam0->f_2, &sVar168, &uVar172, &uVar173, &uVar174, &uVar175, &uVar176, &uVar177)) || GlobalFunc_2938(uParam0->f_2, &sVar178))
				{
					uParam0->f_62.f_10 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					CAM::SET_CAM_COORD(uParam0->f_62.f_10, Var129);
					CAM::SET_CAM_ROT(uParam0->f_62.f_10, Var132, 2);
					CAM::SET_CAM_FOV(uParam0->f_62.f_10, uVar135);
					PED::SET_PED_NON_CREATION_AREA(Var129 - Var121, Var129 + Var121);
					uParam0->f_108 = PED::ADD_SCENARIO_BLOCKING_AREA(Var129 - Var121, Var129 + Var121, 0, 1, 1, 1);
					MISC::CLEAR_AREA(Var129, SYSTEM::VMAG(Var121), 1, 0, 0, 0);
				}
			}
			Global_89750++;
			if (GlobalFunc_2937(uParam0->f_2, &sVar184))
			{
				Global_89750++;
			}
			Global_89502 = uParam0->f_2;
			iVar192 = GlobalFunc_8315();
			if (iVar192 != 145)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar192]))
				{
					fVar193 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Global_89730[iVar192]);
					fVar194 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Global_89730[iVar192]);
					if (fVar193 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_89730[iVar192], (-1000f * 0.25f));
					}
					if (fVar194 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Global_89730[iVar192], (-1000f * 0.25f));
					}
				}
				GlobalFunc_8631(PLAYER::PLAYER_PED_ID(), &(Global_89503[iVar192 /*74*/]), &(Global_89734[iVar192 /*3*/]), &(Global_89744[iVar192]), &(Global_89726[iVar192]), &(Global_2544853[iVar192]));
				func_224(PLAYER::PLAYER_PED_ID(), 0);
				GlobalFunc_8060(PLAYER::PLAYER_PED_ID());
			}
			GlobalFunc_9262(uParam0->f_3, uParam0->f_2);
			iLocal_63 = 0;
			Global_24491 = MISC::GET_GAME_TIMER();
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10f);
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(uParam0->f_3));
			*uParam0 = 3;
		}
		else
		{
			return 1;
		}
	}
	if (*uParam0 == 2)
	{
		*uParam0 = 3;
		iLocal_63++;
		STREAMING::REQUEST_MODEL(GlobalFunc_4917(uParam0->f_3));
		if (uParam0->f_16 != 0)
		{
			if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				*uParam0 = 2;
				if (iLocal_63 > 150)
				{
					iLocal_63 = 0;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
					}
					else
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
					}
					*uParam0 = 3;
				}
			}
		}
	}
	if (*uParam0 == 3)
	{
		if (uParam0->f_2 == 1)
		{
			iVar195 = GlobalFunc_584(uParam0->f_61);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar195]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_17[iVar195], 1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_17[iVar195]));
				}
			}
			uParam0->f_17[uParam0->f_61] = 0;
			uParam0->f_2 = 1;
		}
		if (GlobalFunc_10759(uParam0))
		{
			Var196 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[uParam0->f_61 /*65*/] };
			bVar261 = false;
			if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
			{
				bVar261 = true;
			}
			if (func_193(&(uParam0->f_17[uParam0->f_61]), uParam0->f_3, uParam0->f_4, uParam0->f_7, 1, 0, bVar261))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 0), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 0)) != 3)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[uParam0->f_61 /*65*/] = { Var196 };
					}
				}
				GlobalFunc_5169(uParam0->f_17[uParam0->f_61]);
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_17[uParam0->f_61], 0);
				}
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_17[uParam0->f_61], 1);
				GlobalFunc_2932(uParam0);
				uParam0->f_17.f_39 = 1;
				uParam0->f_17.f_7 = uParam0->f_61;
				uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
				Global_89751 = -1;
				GlobalFunc_5935(uParam0->f_2);
				if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 0), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 0)) == 3)
				{
					if (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
					{
						iVar262 = MISC::GET_GAME_TIMER();
						while (iVar262 + 500 < MISC::GET_GAME_TIMER() && iVar262 > 0)
						{
							if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
							{
								iVar262 = -1;
							}
							SYSTEM::WAIT(0);
						}
						if (!iVar262 == -1)
						{
						}
					}
				}
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_12, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
				Stack.Push(uParam0);
				Call_Loc(iParam1);
				*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
				*uParam0 = 4;
			}
		}
		else
		{
			uParam0->f_17.f_39 = 1;
			uParam0->f_17.f_7 = uParam0->f_61;
			uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
			if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_62.f_12, 1, 1);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_12, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 1);
			PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(uParam0->f_4, 10f, 0);
			if (!GlobalFunc_537(uParam0->f_4, ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 1), 5f) && !GlobalFunc_537(uParam0->f_4, 0f, 0f, 0f, 5f))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
			}
			Global_89751 = -1;
			GlobalFunc_5935(uParam0->f_2);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
			Stack.Push(uParam0);
			Call_Loc(iParam1);
			*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			*uParam0 = 4;
		}
	}
	if (*uParam0 == 4)
	{
		bVar263 = false;
		bVar264 = false;
		iVar265 = 0;
		fVar266 = 0f;
		fVar267 = 0f;
		bVar268 = false;
		bVar269 = false;
		GlobalFunc_9260(uParam0, &bVar263, &bVar264, &iVar265, &fVar266, &fVar267, &bVar268, &bVar269, &uParam3);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
		{
			if (GlobalFunc_2938(uParam0->f_2, &Var270))
			{
				MemCopy(&(uParam0->f_8), {Var270}, 8);
			}
		}
		if (uParam0->f_2 == 231)
		{
			if (!bVar268)
			{
				bVar268 = true;
			}
		}
		bVar276 = false;
		if (!CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (func_184(&(uParam0->f_62), iVar265, uParam3, fVar266, fVar267, bVar268, bVar269, &(uParam0->f_8), 0, 0))
			{
				bVar276 = true;
			}
		}
		else
		{
			MemCopy(&cVar277, {uParam0->f_8}, 16);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar277))
			{
				GlobalFunc_2940(uParam0->f_2, &sVar293, &cVar309);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar309))
				{
					StringConCat(&cVar277, &cVar309, 64);
				}
			}
			if (func_171(&(uParam0->f_62), uParam0->f_62.f_10, iVar265, uParam3, fVar266, fVar267, bVar268, bVar269, &cVar277, 2))
			{
				bVar276 = true;
			}
		}
		if (bVar276)
		{
			iVar326 = 3;
			iVar327 = 8;
			if (Global_3)
			{
				iVar326 = 7;
				iVar327 = 7;
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			{
				iVar325 = STREAMING::GET_PLAYER_SWITCH_STATE();
				if ((iVar325 == 8 || iVar325 == 11) || ((STREAMING::GET_PLAYER_SWITCH_TYPE() == 2 && iVar325 == 3) && !((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)))
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
					{
						if (Global_89750 > 0)
						{
							if (Global_89751 < 0)
							{
								Global_89751 = MISC::GET_GAME_TIMER();
							}
							else
							{
								iVar328 = 12500;
								if (iVar325 == 11)
								{
									iVar328 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar328) * 1.75f));
								}
								if (GlobalFunc_2937(uParam0->f_2, &sVar329))
								{
									iVar328 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar328) * 1.75f));
								}
								if (MISC::GET_GAME_TIMER() > (Global_89751 + iVar328))
								{
									Global_89750 = (Global_89750 - 1);
									STREAMING::ALLOW_PLAYER_SWITCH_OUTRO();
									Global_89751 = -1;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar325 = iVar326;
				iVar327 = iVar326;
			}
			func_147(uParam0);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (iVar325 != 1)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			if (GlobalFunc_747(uParam3, 512))
			{
				if (iVar325 == 1)
				{
					Stack.Push(uParam0);
					Stack.Push(&Var1);
					Stack.Push(uParam3);
					Call_Loc(iParam2);
				}
			}
			if (iVar325 >= iVar326)
			{
				Stack.Push(uParam0);
				Stack.Push(&Var1);
				Stack.Push(uParam3);
				Call_Loc(iParam2);
				if (StackVal)
				{
					if (!uParam0->f_62.f_19)
					{
						if (uParam0->f_62.f_18 && iVar325 >= iVar327)
						{
							bVar337 = false;
							if (func_7(&(uParam0->f_17), bVar263, bVar264, 0))
							{
								bVar337 = true;
							}
							if (bVar337)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13))
								{
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, 1);
								}
								GlobalFunc_2928(&(uParam0->f_17));
								func_147(uParam0);
								GlobalFunc_9259();
								PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
								Global_87845 = { uParam0->f_17 };
								uParam0->f_62.f_19 = 1;
							}
						}
					}
				}
			}
			if (iVar325 >= 3)
			{
				PAD::SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(0);
			}
			if (Global_87678)
			{
				if (uParam0->f_62.f_19)
				{
					if (GlobalFunc_5934(uParam0))
					{
						Global_87678 = 0;
					}
				}
			}
		}
		else
		{
			*uParam0 = 5;
		}
	}
	if (*uParam0 == 5)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_62.f_10))
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_62.f_10))
				{
				}
				else
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, 0);
					CAM::DESTROY_CAM(uParam0->f_62.f_10, 0);
				}
			}
			else
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, 0);
				CAM::DESTROY_CAM(uParam0->f_62.f_10, 0);
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_108, 0);
			PED::CLEAR_PED_NON_CREATION_AREA();
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_9))
			{
				CAM::DESTROY_CAM(uParam0->f_62.f_9, 0);
			}
			if (uParam0->f_62.f_24 > 0)
			{
				iVar338 = 0;
				while (iVar338 <= (uParam0->f_62.f_24 - 1))
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_62[iVar338]))
					{
						CAM::DESTROY_CAM(uParam0->f_62[iVar338], 0);
					}
					iVar338++;
				}
			}
			if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
			{
				GlobalFunc_7632(uParam0->f_62.f_21);
			}
			uParam0->f_62.f_15 = 0;
			uParam0->f_62.f_16 = 0;
			uParam0->f_62.f_17 = 0;
			uParam0->f_62.f_18 = 0;
			uParam0->f_62.f_19 = 0;
			uParam0->f_62.f_20 = 0;
			uParam0->f_62.f_24 = 0;
			if (!Global_35923)
			{
				CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
				CAM::_0x487A82C650EB7799(0f);
				CAM::_0x0225778816FDC28C(0f);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 1, 1000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), 1);
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
				}
			}
			GlobalFunc_749(0);
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_13))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_62.f_13, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 1);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_62.f_12, 0);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, 1);
				if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, 0);
				}
			}
			*uParam0 = 6;
		}
	}
	if (*uParam0 == 6)
	{
		if (uParam0->f_16 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(uParam0->f_16);
		}
		STREAMING::CLEAR_FOCUS();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(uParam0->f_3));
		iVar339 = GlobalFunc_8315();
		if (iVar339 != 145)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar339]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_89730[iVar339], 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_89730[iVar339]));
				}
			}
			iVar340 = Global_89503[iVar339 /*74*/];
			if (iVar340 != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar340);
			}
		}
		GlobalFunc_9271(uParam0->f_3);
		if ((((((uParam0->f_2 != 5 && uParam0->f_2 != 6) && uParam0->f_2 != 7) && uParam0->f_2 != 2) && uParam0->f_2 != 3) && uParam0->f_2 != 4) && uParam0->f_2 != 1)
		{
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[uParam0->f_3] = uParam0->f_2;
			GlobalFunc_5933(uParam0->f_3, uParam0->f_2);
		}
		if (uParam0->f_2 == 1)
		{
			GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
		}
		GlobalFunc_5932(uParam0->f_3);
		GlobalFunc_8629(uParam0, &Var1);
		GlobalFunc_8628(uParam0);
		GlobalFunc_7222(uParam0->f_2);
		GlobalFunc_17(&Global_1312465);
		GlobalFunc_17(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[uParam0->f_3]));
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_96.f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[uParam0->f_3] = 0f;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[uParam0->f_3] = 0;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_87678 = 0;
		Global_89751 = -1;
		GlobalFunc_54(&(uParam0->f_1));
		if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
		{
			GlobalFunc_7632(0);
		}
		return 1;
	}
	return 0;
}



























































int func_147(var uParam0)//Position - 0x17040
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	char* sVar9;
	
	iVar0 = uParam0->f_2;
	uParam0->f_96.f_4 = uParam0->f_62.f_9;
	switch (iVar0)
	{
		case 234:
			if (Global_3)
			{
				if (func_170(uParam0, &fVar1))
				{
					return GlobalFunc_9272(19, 0, "EXTRASUNNY", "Cirrus", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 192:
			if (Global_3)
			{
				if (func_170(uParam0, &fVar1))
				{
					return GlobalFunc_9272(9, 0, "Overcast", "RAIN", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 75:
			if (Global_3)
			{
				if (func_170(uParam0, &fVar1))
				{
					return GlobalFunc_9272(19, 45, "SMOG", "Wispy", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 95:
			if (Global_3)
			{
				if (func_170(uParam0, &fVar1))
				{
					return GlobalFunc_9272(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 280:
			if (Global_3)
			{
				if (func_170(uParam0, &fVar1))
				{
					return GlobalFunc_9272(18, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 76:
			if (Global_3)
			{
				if (func_170(uParam0, &fVar1))
				{
					return GlobalFunc_9272(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 174:
			if (func_170(uParam0, &fVar1))
			{
				GlobalFunc_741(20, &uVar3, &iVar2);
				return GlobalFunc_9272(iVar2, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
		
		case 231:
			if (func_170(uParam0, &fVar1))
			{
				GlobalFunc_741(15, &uVar5, &iVar4);
				return GlobalFunc_9272(iVar4, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
	}
	if (GlobalFunc_6710(Global_1312465))
	{
		iVar6 = GlobalFunc_208(Global_1312465);
		iVar7 = GlobalFunc_207(Global_1312465);
		sVar8 = "";
		sVar9 = "";
		if (!GlobalFunc_2929())
		{
			sVar8 = "SMOG";
		}
		if (func_148(&fVar1, 5f))
		{
			return GlobalFunc_9272(iVar6, iVar7, sVar8, sVar9, &(uParam0->f_96), fVar1, 0, 1, 5f);
		}
	}
	else if (!GlobalFunc_2929())
	{
	}
	return 0;
}

int func_148(float fParam0, float fParam1)//Position - 0x1726F
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (iLocal_62 == -1)
	{
		iLocal_62 = iVar0;
	}
	iVar1 = (iVar0 - iLocal_62);
	*fParam0 = (SYSTEM::TO_FLOAT(iVar1) / (fParam1 * 1000f));
	if (*fParam0 < 0f)
	{
		*fParam0 = 0f;
	}
	if (*fParam0 > 1f)
	{
		*fParam0 = 1f;
	}
	return 1;
}






















int func_170(var uParam0, float fParam1)//Position - 0x17D10
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	
	Var0 = { Local_56 };
	Var3 = { Local_59 };
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_13))
	{
		Local_56 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, 1) };
		Var0 = { Local_56 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_12))
	{
		Local_59 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, 1) };
		Var3 = { Local_59 };
	}
	Var6 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 0);
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var6, 0);
	*fParam1 = (fVar10 / fVar9);
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	if (*fParam1 > 1f)
	{
		*fParam1 = 1f;
	}
	return 1;
}

int func_171(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char[4] cParam8, int iParam9)//Position - 0x17DB9
{
	return func_172(uParam0, iParam1, iParam2, uParam3, fParam4, fParam5, bParam6, bParam7, cParam8, iParam9, 0, 0, 0);
	return 1;
}

int func_172(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x17DE0
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = uParam3;
	if (!uParam0->f_16)
	{
		if (STREAMING::_0x71E7B2E657449AAD())
		{
			if (!bParam10)
			{
				uParam0->f_13 = PLAYER::PLAYER_PED_ID();
			}
			if ((!PED::IS_PED_INJURED(uParam0->f_13) || bParam10) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				uParam0->f_27 = 0;
				Global_87286 = 1;
				if (!bParam10)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
						GlobalFunc_750(iVar1, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 1);
				}
				uParam0->f_21 = GlobalFunc_701();
				GlobalFunc_7632(1);
				if (bParam6)
				{
					iVar0 |= 4;
				}
				if (bParam7)
				{
					iVar0 |= 8;
				}
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(uParam8))
				{
					iVar0 |= 2;
				}
				if (GlobalFunc_268())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, uParam2);
					if (bParam11)
					{
						STREAMING::_0x5F2013F8BC24EE69(iParam12);
					}
					switch (GlobalFunc_6674(uParam0->f_13))
					{
						case 0:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 1:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 2:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDTrevorOut");
							break;
					}
					GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDOut");
				}
				else if (STREAMING::_0x933BBEEB8C61B5F4())
				{
					STREAMING::_SWITCH_IN_PLAYER(uParam0->f_12);
					GlobalFunc_749(0);
				}
				else
				{
					return 0;
				}
				if (CAM::DOES_CAM_EXIST(iParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(iParam1), CAM::GET_CAM_ROT(iParam1, iParam9), CAM::GET_CAM_FOV(iParam1), CAM::GET_CAM_FAR_CLIP(iParam1), iParam9);
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(uParam8);
				}
				if (!Global_17098.f_111)
				{
					AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) == 3)
					{
						AUDIO::PLAY_SOUND(-1, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
					if (Global_17098.f_109 == -1)
					{
						Global_17098.f_109 = AUDIO::GET_SOUND_ID();
					}
					Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
					AUDIO::PLAY_SOUND(Global_17098.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
					AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					AUDIO::STOP_SOUND(Global_17098.f_109);
					AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
					Global_17098.f_109 = -1;
					Global_17098.f_110 = 0;
				}
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				GlobalFunc_748(1);
				HUD::SET_MINIMAP_IN_SPECTATOR_MODE(1, uParam0->f_13);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
				}
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
				}
				if (!bParam10)
				{
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(0))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(0));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(2))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(2));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(1))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(1));
					}
					else
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
					}
					GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(0f);
				}
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!Global_17098.f_111)
			{
			}
			if (GlobalFunc_747(uParam3, 512))
			{
				if (!STREAMING::IS_SWITCH_READY_FOR_DESCENT())
				{
				}
				else if (Global_89750 == 0)
				{
					STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
				}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() >= 1)
				{
					if (!uParam0->f_18)
					{
						GlobalFunc_737();
						uParam0->f_18 = 1;
					}
					if (!uParam0->f_22)
					{
						GlobalFunc_7850(0, 1);
						uParam0->f_22 = 1;
					}
				}
			}
			else
			{
				if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8)
				{
					if (!uParam0->f_18)
					{
						GlobalFunc_737();
						uParam0->f_18 = 1;
					}
				}
				if (!uParam0->f_18)
				{
					if (STREAMING::IS_SWITCH_SKIPPING_DESCENT() && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var5 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						fVar8 = 20f;
						fVar9 = SYSTEM::VDIST2(Var2, Var5);
						if (fVar9 < (fVar8 * fVar8))
						{
							GlobalFunc_737();
							uParam0->f_18 = 1;
						}
					}
				}
				if (!uParam0->f_22)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						GlobalFunc_7850(0, 1);
						uParam0->f_22 = 1;
					}
				}
				if (!uParam0->f_23)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 3)
					{
						GRAPHICS::CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE("CSM_ST_BOX3x3");
						uParam0->f_23 = 1;
					}
				}
			}
		}
		else
		{
			if (!uParam0->f_18)
			{
				uParam0->f_18 = 1;
				GlobalFunc_737();
			}
			if (!uParam0->f_22)
			{
				GlobalFunc_7850(0, 1);
				uParam0->f_22 = 1;
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		iVar10 = GlobalFunc_5187();
		if (((iVar10 != 8 && iVar10 != 9) && iVar10 != 10) && iVar10 != 55)
		{
			GlobalFunc_7632(uParam0->f_21);
		}
		if (uParam0->f_23)
		{
			GRAPHICS::_CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE();
			uParam0->f_23 = 0;
		}
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
			Global_17098.f_109 = -1;
			Global_17098.f_110 = 0;
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_17098.f_107 != -1 && Global_17098.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_107);
			Global_17098.f_107 = -1;
			Global_17098.f_108 = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
		}
		if (!Global_35923)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			CAM::_0x487A82C650EB7799(0f);
			CAM::_0x0225778816FDC28C(0f);
		}
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13, 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_13, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_13, 0))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_13, 1, 0);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
				{
					iVar11 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
					GlobalFunc_750(iVar11, 1);
				}
			}
		}
		GlobalFunc_749(0);
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13) || bParam10)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 0);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(GlobalFunc_707(GlobalFunc_8315()));
		}
		GlobalFunc_748(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}












int func_184(var uParam0, int iParam1, var uParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, int iParam9)//Position - 0x18623
{
	return func_172(uParam0, 0, iParam1, uParam2, fParam3, fParam4, bParam5, bParam6, uParam7, 2, 0, bParam8, iParam9);
	return 1;
}









int func_193(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x18DCE
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8645(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			GlobalFunc_11322(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			GlobalFunc_11335(*uParam0, bParam8);
			GlobalFunc_516(*uParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}































void func_224(int iParam0, int iParam1)//Position - 0x1DEB1
{
	int iVar0;
	struct<3> Var1;
	
	GlobalFunc_9270(iParam0, 0);
	GlobalFunc_11323(iParam0, 0);
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (PATHFIND::GET_SAFE_COORD_FOR_PED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/], iParam1, &Var1, 16))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] = { Var1 };
			}
		}
	}
}











































































































































































































































































































bool func_523(int iParam0)//Position - 0x70AB4
{
	int iVar0;
	
	iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0];
	return func_524(iVar0);
}

int func_524(int iParam0)//Position - 0x70AD5
{
	return GlobalFunc_10380(iParam0, 1);
}




int func_528(int iParam0)//Position - 0x70D6B
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_237(iParam0);
	iVar1 = Global_87845[iVar0];
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!PED::IS_PED_INJURED(iVar1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_529(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x70D9D
{
	*uParam0 = 318;
	*uParam1 = -1f;
	if (!bParam4)
	{
		if (func_576(1, uParam0, uParam1, uParam2, uParam3))
		{
			return *uParam0 != 318;
		}
	}
	switch (GlobalFunc_8043())
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			func_574(uParam0, uParam1, uParam2, uParam3, 475734/*func_575*/, bParam4);
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_572(uParam0, uParam1, uParam2, uParam3, 475217/*func_573*/, bParam4);
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			func_570(uParam0, uParam1, uParam2, uParam3, 473807/*func_571*/, bParam4);
			break;
		
		case 21:
		case 22:
		case 23:
		case 0:
		case 1:
		case 2:
			func_530(uParam0, uParam1, uParam2, uParam3, 472129/*func_568*/, bParam4);
			break;
	}
	return *uParam0 != 318;
}

bool func_530(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x70EC7
{
	int iVar0;
	int iVar1[13];
	float fVar15[13];
	int iVar29[9];
	float fVar39[9];
	
	iVar0 = 1;
	if (!GlobalFunc_485(126))
	{
		iVar1[0] = 221;
		fVar15[0] = 10f;
		if (GlobalFunc_230(43))
		{
			iVar1[1] = 218;
			fVar15[1] = 1f;
			iVar1[2] = 219;
			fVar15[2] = 1f;
			iVar1[3] = 220;
			fVar15[3] = 1f;
			iVar1[4] = 225;
			fVar15[3] = 5f;
			if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 3, bParam5, 218, 219, 220, 225, 196, 318))
			{
				return func_565(iVar0, *uParam0, 3);
			}
		}
		else
		{
			iVar1[1] = 318;
			fVar15[1] = 0f;
			iVar1[2] = 318;
			fVar15[2] = 0f;
			iVar1[3] = 318;
			fVar15[3] = 0f;
			iVar1[4] = 318;
			fVar15[4] = 0f;
			if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 3, bParam5, 196, 318, 318, 318, 318, 318))
			{
				return func_565(iVar0, *uParam0, 3);
			}
		}
		iVar1[5] = 226;
		fVar15[5] = 1f;
		iVar1[6] = 227;
		fVar15[6] = 1f;
		iVar1[7] = 228;
		fVar15[7] = 1f;
		iVar1[8] = 229;
		fVar15[8] = 1f;
		iVar1[9] = 230;
		fVar15[9] = 1f;
		if (GlobalFunc_230(8) && !GlobalFunc_230(11))
		{
			iVar1[10] = 222;
			fVar15[10] = 5f;
			iVar1[11] = 223;
			fVar15[11] = 5f;
			iVar1[12] = 224;
			fVar15[12] = 5f;
		}
		else
		{
			iVar1[10] = 318;
			fVar15[10] = 0f;
			iVar1[11] = 318;
			fVar15[11] = 0f;
			iVar1[12] = 318;
			fVar15[12] = 0f;
		}
		if (func_531(iVar0, &iVar1, &fVar15, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 3, bParam5, 197, 318, 318, 318, 318, 318))
	{
		return func_565(iVar0, *uParam0, 3);
	}
	iVar29[0] = 221;
	fVar39[0] = 14.2f;
	if (GlobalFunc_230(8) && !GlobalFunc_230(11))
	{
		iVar29[1] = 222;
		fVar39[1] = 4.7f;
		iVar29[2] = 223;
		fVar39[2] = 4.7f;
		iVar29[3] = 224;
		fVar39[3] = 4.7f;
	}
	else
	{
		iVar29[1] = 318;
		fVar39[1] = 0f;
		iVar29[2] = 318;
		fVar39[2] = 0f;
		iVar29[3] = 318;
		fVar39[3] = 0f;
	}
	iVar29[4] = 226;
	fVar39[4] = 13.5f;
	iVar29[5] = 227;
	fVar39[5] = 13.5f;
	iVar29[6] = 228;
	fVar39[6] = 13.5f;
	iVar29[7] = 229;
	fVar39[7] = 13.5f;
	iVar29[8] = 230;
	fVar39[8] = 13.5f;
	if (func_531(iVar0, &iVar29, &fVar39, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
	{
		return *uParam0 != 318;
	}
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(bParam5);
	Call_Loc(iParam4);
	return StackVal;
}

int func_531(int iParam0, int iParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7, bool bParam8)//Position - 0x71207
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	char cVar11[32];
	float fVar19;
	float fVar20;
	
	fVar0 = 0f;
	iVar1 = 0;
	while (iVar1 < *fParam2)
	{
		if (func_534((*iParam1)[iVar1], iParam0, uParam5, uParam6, bParam7, bParam8))
		{
			fVar0 = (fVar0 + (*fParam2)[iVar1]);
		}
		else
		{
			(*iParam1)[iVar1] = 318;
			(*fParam2)[iVar1] = 0f;
		}
		iVar1++;
	}
	if (!bParam7 && !bParam8)
	{
		if (Global_87680[iParam0] == 1)
		{
			iVar2 = Global_87684[iParam0];
			iVar3 = Global_81155[iVar2 /*34*/].f_10;
			if (!GlobalFunc_4324(iVar3))
			{
				Var4 = { GlobalFunc_2247(iVar3, 0) };
			}
			else
			{
				Var4 = { GlobalFunc_2247(iVar3, iParam0) };
			}
			Var7 = { 0f, 0f, 0f };
			fVar10 = 0f;
			StringCopy(&cVar11, "", 32);
			iVar1 = 0;
			while (iVar1 < *fParam2)
			{
				if ((*iParam1)[iVar1] != 318)
				{
					if (GlobalFunc_8044((*iParam1)[iVar1], &Var7, &fVar10, &cVar11))
					{
						fVar19 = SYSTEM::VDIST2(Var4, Var7);
						if (fVar19 < 22500f)
						{
							*uParam3 = (*iParam1)[iVar1];
							*uParam4 = 100f;
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	fVar20 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar0);
	iVar1 = 0;
	while (iVar1 < *fParam2)
	{
		if ((*iParam1)[iVar1] != 318)
		{
			if (fVar20 < (*fParam2)[iVar1])
			{
				*uParam3 = (*iParam1)[iVar1];
				*uParam4 = (*fParam2)[iVar1];
				return 1;
			}
			fVar20 = (fVar20 - (*fParam2)[iVar1]);
		}
		iVar1++;
	}
	*uParam3 = 318;
	*uParam4 = -1f;
	return 0;
}



int func_534(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x713FE
{
	struct<4> Var0;
	float fVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	if (iParam0 == 318 || iParam0 == 0)
	{
		return 0;
	}
	if (bParam4)
	{
		if (((((((((((((((((((((((((iParam0 == 196 || iParam0 == 197) || iParam0 == 305) || iParam0 == 313) || iParam0 == 314) || iParam0 == 105) || iParam0 == 106) || iParam0 == 107) || iParam0 == 208) || iParam0 == 209) || iParam0 == 210) || iParam0 == 192) || iParam0 == 222) || iParam0 == 223) || iParam0 == 224) || iParam0 == 281) || iParam0 == 282) || iParam0 == 283) || iParam0 == 284) || iParam0 == 275) || iParam0 == 276) || iParam0 == 277) || iParam0 == 218) || iParam0 == 219) || iParam0 == 220) || iParam0 == 225)
		{
			return 0;
		}
		StringCopy(&Var0, "", 32);
		fVar8 = 0f;
		if (GlobalFunc_2980(iParam0, &Var0, &fVar8, &uVar9, &uVar10, &uVar11))
		{
			return 0;
		}
	}
	if (func_563(iParam0))
	{
		return 0;
	}
	if (func_561(iParam1, iParam0))
	{
		return 0;
	}
	if (func_560(iParam1, iParam0))
	{
		return 0;
	}
	if (func_558(iParam0))
	{
		return 0;
	}
	if (func_556(iParam0, uParam2, uParam3))
	{
		return 0;
	}
	if (!bParam5)
	{
		if (func_554(iParam0))
		{
			return 0;
		}
	}
	if (func_553(iParam0))
	{
		return 0;
	}
	if (func_548(iParam0))
	{
		return 0;
	}
	if (func_545(iParam0, uParam2, uParam3, bParam4))
	{
		return 0;
	}
	if (func_543(iParam1, iParam0))
	{
		return 0;
	}
	if (!bParam5)
	{
		if (func_540(iParam0))
		{
			return 0;
		}
	}
	if (func_538(iParam0, bParam4))
	{
		return 0;
	}
	if (func_537(iParam1, iParam0, bParam4))
	{
		return 0;
	}
	if (func_536(iParam1, iParam0))
	{
		return 0;
	}
	if (!bParam5)
	{
		if (func_535(iParam0, bParam4, 1137180672))
		{
			return 0;
		}
	}
	else if (func_535(iParam0, bParam4, 15f))
	{
		return 0;
	}
	return 1;
}

int func_535(int iParam0, bool bParam1, float fParam2)//Position - 0x71678
{
	struct<3> Var0;
	float fVar3;
	char[] cVar4[8];
	struct<3> Var12;
	float fVar15;
	
	if (bParam1)
	{
		return 0;
	}
	if (GlobalFunc_8044(iParam0, &Var0, &fVar3, &cVar4))
	{
		Var12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		fVar15 = SYSTEM::VDIST2(Var0, Var12);
		if (fVar15 < (fParam2 * fParam2))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_536(int iParam0, int iParam1)//Position - 0x716C7
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	float fVar9;
	char[] cVar10[8];
	float fVar18;
	
	if (iParam1 == 197)
	{
		return 0;
	}
	Var0 = { 0f, 0f, 0f };
	fVar3 = -1f;
	switch (iParam0)
	{
		case 0:
			if (25 <= 31)
			{
				iVar4 = 9;
				iVar5 = 25;
			}
			else
			{
				iVar4 = 10;
				iVar5 = (25 - 31);
			}
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar4], iVar5))
			{
				Var0 = { -808.7974f, 169.3193f, 70.9558f };
				fVar3 = 85f;
			}
			break;
		
		case 1:
			if (24 <= 31)
			{
				iVar4 = 9;
				iVar5 = 24;
			}
			else
			{
				iVar4 = 10;
				iVar5 = (24 - 31);
			}
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar4], iVar5))
			{
				Var0 = { -2.62564f, 528.3256f, 178.392f };
				fVar3 = 65f;
			}
			break;
		
		default:
			return 0;
			break;
	}
	if (fVar3 < 0f)
	{
		return 0;
	}
	if (GlobalFunc_8044(iParam1, &Var6, &fVar9, &cVar10))
	{
		fVar18 = SYSTEM::VDIST2(Var6, Var0);
		if (fVar18 < (fVar3 * fVar3))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_537(int iParam0, int iParam1, bool bParam2)//Position - 0x717DA
{
	int iVar0;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0];
	if (!GlobalFunc_6710(iVar0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 77:
		case 78:
		case 89:
		case 90:
		case 83:
		case 82:
		case 84:
		case 163:
		case 175:
		case 176:
		case 292:
		case 295:
		case 293:
		case 294:
			if (!GlobalFunc_10380(iVar0, 6))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_538(int iParam0, bool bParam1)//Position - 0x7187A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	switch (iParam0)
	{
		case 87:
		case 88:
		case 80:
		case 164:
		case 152:
		case 184:
		case 185:
		case 241:
		case 247:
		case 286:
			iVar0 = MISC::GET_PREV_WEATHER_TYPE_HASH_NAME();
			iVar1 = MISC::GET_NEXT_WEATHER_TYPE_HASH_NAME();
			iVar3 = 0;
			iVar4 = 0;
			if (!bParam1)
			{
				if ((iVar0 == 1420204096 || iVar0 == -1233681761) || iVar0 == -273223690)
				{
					iVar3 = 1;
				}
			}
			if ((iVar1 == 1420204096 || iVar1 == -1233681761) || iVar1 == -273223690)
			{
				iVar3 = 1;
			}
			if (iVar3 || iVar4)
			{
				return 1;
			}
			iVar2 = GlobalFunc_8043();
			if (iVar2 < 9 || iVar2 >= 14)
			{
				return 1;
			}
			break;
		
		case 192:
		case 193:
		case 202:
			iVar2 = GlobalFunc_8043();
			if (iVar2 < 9 || iVar2 >= 21)
			{
				return 1;
			}
			break;
		
		case 81:
			iVar2 = GlobalFunc_8043();
			if (!GlobalFunc_4393(iVar2))
			{
				return 1;
			}
			break;
		
		case 296:
			if (Global_32360[145] != 1)
			{
				return 1;
			}
			break;
		
		case 89:
		case 90:
		case 112:
		case 113:
		case 123:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[128])
			{
				return 1;
			}
			break;
	}
	return 0;
}


int func_540(int iParam0)//Position - 0x71A17
{
	struct<3> Var0;
	float fVar3;
	char[] cVar4[8];
	int iVar12;
	int iVar13;
	struct<3> Var14;
	float fVar17;
	int iVar18;
	struct<3> Var19;
	float fVar22;
	int iVar23;
	int iVar24;
	struct<3> Var25;
	
	if (GlobalFunc_8044(iParam0, &Var0, &fVar3, &cVar4))
	{
		iVar12 = 0;
		while (iVar12 < 8)
		{
			if (Global_87300[iVar12 /*17*/] && Global_87300[iVar12 /*17*/].f_3 != 1)
			{
				iVar13 = Global_87300[iVar12 /*17*/].f_9;
				if (iVar13 >= 0 && iVar13 < 262)
				{
					Var14 = { GlobalFunc_2247(iVar13, 0) };
					fVar17 = 0f;
					if (func_542(iParam0, Var0, Var14, &fVar17, iVar13, 0))
					{
						return 1;
					}
				}
			}
			iVar12++;
		}
		iVar18 = 0;
		while (iVar18 < 262)
		{
			if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar18 /*23*/].f_11, 0))
			{
				Var19 = { GlobalFunc_2247(iVar18, 0) };
				fVar22 = 0f;
				if (func_542(iParam0, Var0, Var19, &fVar22, iVar18, 0))
				{
					return 1;
				}
				if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar18 /*23*/].f_11, 19))
				{
					iVar24 = 3;
					iVar23 = 0;
					while (iVar23 < iVar24)
					{
						Var25 = { GlobalFunc_2247(iVar18, iVar23) };
						if (!GlobalFunc_105(Var25))
						{
							if (func_542(iParam0, Var0, Var25, &fVar22, iVar18, iVar23))
							{
								return 1;
							}
						}
						iVar23++;
					}
				}
			}
			iVar18++;
		}
	}
	return 0;
}


int func_542(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9)//Position - 0x71B76
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = iParam8;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam8 == 262)
	{
		return 0;
	}
	if (((Global_Mission_Blips[iVar0 /*23*/].f_16 == 6 || Global_Mission_Blips[iVar0 /*23*/].f_16 == 1) || Global_Mission_Blips[iVar0 /*23*/].f_16 == 9) || Global_Mission_Blips[iVar0 /*23*/].f_16 == 7)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(Param1, Param4) < (7.5f * 7.5f))
	{
		*fParam7 = SYSTEM::VDIST2(Param1, Param4);
		return 1;
	}
	fVar1 = -1f;
	if (Global_Mission_Blips[iVar0 /*23*/].f_16 == 4)
	{
		fVar1 = 10f;
		iVar2 = 0;
		while (iVar2 < 8)
		{
			if (Global_87300[iVar2 /*17*/])
			{
				if (Global_87300[iVar2 /*17*/].f_9 == iParam8)
				{
					fVar1 = Global_84352[Global_87300[iVar2 /*17*/].f_5 /*2*/].f_1;
				}
			}
			iVar2++;
		}
	}
	else if (Global_Mission_Blips[iVar0 /*23*/].f_16 == 8)
	{
		fVar1 = 20f;
	}
	if (fVar1 > 0f)
	{
		if (SYSTEM::VDIST2(Param1, Param4) < (fVar1 * fVar1))
		{
			*fParam7 = SYSTEM::VDIST2(Param1, Param4);
			return 1;
		}
		if (iParam0 != 89)
		{
			iVar3 = 0;
			while (iVar3 < 10)
			{
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iVar3], 0))
				{
					if (SYSTEM::VDIST2(Global_85405[iVar3 /*10*/], Param4) < (50f * 50f))
					{
						if (SYSTEM::VDIST2(Global_85405[iVar3 /*10*/], Param1) < (30f * 30f))
						{
							*fParam7 = SYSTEM::VDIST2(Global_85405[iVar3 /*10*/], Param1);
							iParam0 = iParam0;
							return 1;
						}
					}
				}
				iVar3++;
			}
		}
	}
	iParam9 = iParam9;
	*fParam7 = 0f;
	return 0;
}

int func_543(int iParam0, int iParam1)//Position - 0x71D4D
{
	switch (iParam0)
	{
		case 0:
			if (GlobalFunc_485(130) && !GlobalFunc_485(131))
			{
				if (func_544(iParam1))
				{
					return 1;
				}
			}
			return 0;
			break;
		
		case 2:
			if (GlobalFunc_485(58))
			{
				if (func_544(iParam1))
				{
					return 1;
				}
			}
			if (GlobalFunc_485(59))
			{
				if (!func_544(iParam1))
				{
					return 1;
				}
			}
			if (GlobalFunc_485(130) && !GlobalFunc_485(131))
			{
				if (func_544(iParam1))
				{
					return 1;
				}
			}
			return 0;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_544(int iParam0)//Position - 0x71DEF
{
	struct<2> Var0;
	float fVar3;
	char[] cVar4[8];
	
	if (GlobalFunc_8044(iParam0, &Var0, &fVar3, &cVar4))
	{
		if (Var0.f_1 < 400f)
		{
			if (Var0 < 1400f)
			{
				if (Var0 > -1900f)
				{
					if (Var0.f_1 > -3500f)
					{
						return 1;
					}
				}
			}
		}
		return 0;
	}
	return 0;
}

int func_545(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x71E3F
{
	if (bParam3)
	{
		return 0;
	}
	*uParam1 = 0;
	uParam1->f_2 = iParam0;
	uParam1->f_3 = Global_87845.f_45;
	if (GlobalFunc_7224(*uParam1, uParam2))
	{
		if (iParam0 == 132)
		{
			uParam2->f_111 = 36;
		}
		if (uParam2->f_111 != 145)
		{
			if (GlobalFunc_7231(uParam2->f_111))
			{
				return 1;
			}
		}
	}
	return 0;
}



int func_548(int iParam0)//Position - 0x72006
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	char[] cVar5[8];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (GlobalFunc_8044(iParam0, &Var1, &fVar4, &cVar5))
	{
		iVar13 = 0;
		while (iVar13 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
		{
			iVar14 = GlobalFunc_2566(iVar13);
			if (iVar14 != -1)
			{
				if ((((((((((((((((((((((((iVar14 != -1 && iVar14 != 51) && iVar14 != 62) && iVar14 != 52) && iVar14 != 62) && iVar14 != 53) && iVar14 != 62) && iVar14 != 54) && iVar14 != 62) && iVar14 != 55) && iVar14 != 62) && iVar14 != 56) && iVar14 != 62) && iVar14 != 57) && iVar14 != 62) && iVar14 != 58) && iVar14 != 62) && iVar14 != 59) && iVar14 != 62) && iVar14 != 60) && iVar14 != 62) && iVar14 != 61) && iVar14 != 62) && iVar14 != 62) && iVar14 != 63)
				{
					iVar15 = (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar13 /*15*/].Queue_Time - iVar0);
					if (iVar15 < 180000)
					{
						if (GlobalFunc_2565(Var1, iVar14))
						{
							return 1;
						}
					}
				}
			}
			iVar13++;
		}
		iVar13 = 0;
		while (iVar13 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts)
		{
			iVar16 = GlobalFunc_2564(iVar13);
			if (iVar16 != -1)
			{
				if ((((((((((((((((((((((((iVar16 != -1 && iVar16 != 51) && iVar16 != 62) && iVar16 != 52) && iVar16 != 62) && iVar16 != 53) && iVar16 != 62) && iVar16 != 54) && iVar16 != 62) && iVar16 != 55) && iVar16 != 62) && iVar16 != 56) && iVar16 != 62) && iVar16 != 57) && iVar16 != 62) && iVar16 != 58) && iVar16 != 62) && iVar16 != 59) && iVar16 != 62) && iVar16 != 60) && iVar16 != 62) && iVar16 != 61) && iVar16 != 62) && iVar16 != 62) && iVar16 != 63)
				{
					iVar17 = (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar13 /*14*/].Queue_Time - iVar0);
					if (iVar17 < 180000)
					{
						if (GlobalFunc_2565(Var1, iVar16))
						{
							return 1;
						}
					}
				}
			}
			iVar13++;
		}
		iVar13 = 0;
		while (iVar13 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails)
		{
			iVar18 = GlobalFunc_2563(iVar13);
			if (iVar18 != -1)
			{
				if ((((((((((((((((((((((((iVar18 != -1 && iVar18 != 51) && iVar18 != 62) && iVar18 != 52) && iVar18 != 62) && iVar18 != 53) && iVar18 != 62) && iVar18 != 54) && iVar18 != 62) && iVar18 != 55) && iVar18 != 62) && iVar18 != 56) && iVar18 != 62) && iVar18 != 57) && iVar18 != 62) && iVar18 != 58) && iVar18 != 62) && iVar18 != 59) && iVar18 != 62) && iVar18 != 60) && iVar18 != 62) && iVar18 != 61) && iVar18 != 62) && iVar18 != 62) && iVar18 != 63)
				{
					iVar19 = (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar13 /*10*/].Queue_Time - iVar0);
					if (iVar19 < 180000)
					{
						if (GlobalFunc_2565(Var1, iVar18))
						{
							return 1;
						}
					}
				}
			}
			iVar13++;
		}
	}
	return 0;
}





int func_553(int iParam0)//Position - 0x724BD
{
	switch (iParam0)
	{
		case 315:
		case 311:
		case 234:
		case 316:
		case 245:
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[35 /*6*/], 3) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[36 /*6*/], 3))
			{
				return 1;
			}
			break;
	}
	switch (Global_68509)
	{
		case 42:
			if (iParam0 == 118)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_554(int iParam0)//Position - 0x72538
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 86:
		case 87:
		case 122:
		case 89:
			iVar0 = 17;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			iVar0 = 19;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			iVar0 = 62;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			break;
		
		case 83:
		case 82:
		case 85:
		case 124:
			iVar0 = 22;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			break;
		
		case 173:
		case 171:
		case 161:
		case 163:
		case 169:
		case 168:
		case 167:
		case 152:
		case 170:
		case 151:
		case 156:
		case 172:
		case 155:
			iVar0 = 49;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			break;
		
		case 212:
		case 211:
		case 218:
		case 219:
		case 220:
		case 225:
			iVar0 = 41;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			break;
		
		case 291:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 302:
		case 303:
		case 292:
		case 293:
		case 294:
		case 295:
			iVar0 = iLocal_41;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			iVar0 = iLocal_39;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			iVar0 = 71;
			if (GlobalFunc_891(iVar0))
			{
				return 1;
			}
			break;
		
		case 270:
			iVar0 = 71;
			if (!GlobalFunc_230(iVar0))
			{
				return 1;
			}
			break;
		
		case 267:
			iVar0 = 77;
			if (GlobalFunc_230(iVar0))
			{
				return 1;
			}
			break;
	}
	return 0;
}


int func_556(int iParam0, var uParam1, var uParam2)//Position - 0x72792
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	uParam1->f_2 = iParam0;
	uParam1->f_3 = Global_87845.f_45;
	if (GlobalFunc_7224(*uParam1, uParam2))
	{
		if (uParam2->f_111 != 145 && uParam2->f_111 != 144)
		{
			iVar0 = 0;
			switch (uParam2->f_111)
			{
				case 19:
					iVar0 = 8;
					break;
				
				case 14:
					iVar0 = 16;
					break;
				
				case 17:
					iVar0 = 32;
					break;
				
				default:
					return 0;
					break;
			}
			iVar3 = 0;
			while (iVar3 < Global_81119)
			{
				if (Global_81119[iVar3 /*5*/] != -1)
				{
					uVar1 = Global_68514.f_109[Global_81119[iVar3 /*5*/] /*4*/];
					iVar2 = uVar1;
					if (GlobalFunc_747(Global_81155[iVar2 /*34*/].f_12, iVar0))
					{
						return 1;
					}
				}
				iVar3++;
			}
		}
	}
	return 0;
}


int func_558(int iParam0)//Position - 0x7286A
{
	switch (iParam0)
	{
		case 218:
		case 219:
		case 220:
		case 225:
			if (GlobalFunc_7909(1, 19))
			{
				return 1;
			}
			if (GlobalFunc_7909(2, 19))
			{
				return 1;
			}
			break;
		
		case 86:
		case 101:
		case 102:
		case 171:
		case 173:
			if (GlobalFunc_7909(0, 14))
			{
				return 1;
			}
			if (GlobalFunc_7909(1, 14))
			{
				return 1;
			}
			if (GlobalFunc_7909(2, 14))
			{
				return 1;
			}
			break;
		
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 94:
		case 98:
		case 122:
		case 151:
			if (GlobalFunc_7909(0, 17))
			{
				return 1;
			}
			if (GlobalFunc_891(19))
			{
				return 1;
			}
			break;
		
		case 291:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 302:
		case 303:
		case 292:
		case 295:
		case 293:
		case 294:
			if (GlobalFunc_891(74) || GlobalFunc_891(75))
			{
				return 1;
			}
			break;
	}
	return 0;
}


int func_560(int iParam0, int iParam1)//Position - 0x72A30
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam1 == Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_4[iParam0 /*6*/][iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_561(int iParam0, int iParam1)//Position - 0x72A65
{
	if (iParam1 == Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0])
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			if (func_562(iParam0, iParam1, 79, 80, 81, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 77, 78, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 82, 83, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 87, 88, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 91, 92, 93, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 112, 113, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 135, 136, 137, 138, 139, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 98, 99, 100, 101, 102, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 95, 96, 97, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 115, 116, 117, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 105, 106, 107, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 118, 119, 120, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 103, 104, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 108, 109, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 110, 111, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 89, 90, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 165, 166, 167, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 170, 171, 172, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_562(iParam0, iParam1, 192, 193, 194, 195, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 200, 201, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 222, 223, 224, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 211, 213, 216, 217, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 226, 227, 228, 229, 230, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 184, 185, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_562(iParam0, iParam1, 250, 251, 252, 253, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 240, 241, 242, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 273, 274, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 275, 276, 277, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 292, 293, 294, 295, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 296, 297, 298, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 299, 300, 301, 302, 303, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 264, 265, 266, 267, 268, 269, 270, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 281, 282, 283, 284, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 256, 257, 258, 246, 239, 259, 260, 261))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 278, 279, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			if (func_562(iParam0, iParam1, 243, 244, 318, 318, 318, 318, 318, 318))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_562(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x72FA0
{
	if ((((((((Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam2 && iParam2 != 318) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam3 && iParam3 != 318)) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam4 && iParam4 != 318)) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam5 && iParam5 != 318)) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam6 && iParam6 != 318)) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam7 && iParam7 != 318)) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam8 && iParam8 != 318)) || (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam9 && iParam9 != 318))
	{
		if ((((((((iParam1 == iParam2 && iParam2 != 318) || (iParam1 == iParam3 && iParam3 != 318)) || (iParam1 == iParam4 && iParam4 != 318)) || (iParam1 == iParam5 && iParam5 != 318)) || (iParam1 == iParam6 && iParam6 != 318)) || (iParam1 == iParam7 && iParam7 != 318)) || (iParam1 == iParam8 && iParam8 != 318)) || (iParam1 == iParam9 && iParam9 != 318))
		{
			return 1;
		}
	}
	return 0;
}

int func_563(int iParam0)//Position - 0x7314F
{
	int iVar0;
	
	if (GlobalFunc_2926(iParam0, &iVar0))
	{
		if (iParam0 == 197)
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_23, iVar0))
			{
				if (GlobalFunc_230(9))
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_23), iVar0);
				}
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_23, iVar0))
		{
			return 1;
		}
	}
	return 0;
}


int func_565(int iParam0, int iParam1, int iParam2)//Position - 0x732DE
{
	if (iParam0 != 145)
	{
	}
	if (iParam1 != 318)
	{
	}
	if (iParam2 != 0)
	{
	}
	return 1;
}

int func_566(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x732FC
{
	int iVar0;
	int iVar1[6];
	float fVar8[6];
	
	if (Global_87680[iParam0] == 1)
	{
		return 0;
	}
	if (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_24[iParam0 /*5*/][iParam5])
	{
		if (iParam7 != 318)
		{
			iVar1[iVar0] = iParam7;
			fVar8[iVar0] = 1f;
			iVar0++;
		}
		if (iParam8 != 318)
		{
			iVar1[iVar0] = iParam8;
			fVar8[iVar0] = 1f;
			iVar0++;
		}
		if (iParam9 != 318)
		{
			iVar1[iVar0] = iParam9;
			fVar8[iVar0] = 1f;
			iVar0++;
		}
		if (iParam10 != 318)
		{
			iVar1[iVar0] = iParam10;
			fVar8[iVar0] = 1f;
			iVar0++;
		}
		if (iParam11 != 318)
		{
			iVar1[iVar0] = iParam11;
			fVar8[iVar0] = 1f;
			iVar0++;
		}
		if (iParam12 != 318)
		{
			iVar1[iVar0] = iParam12;
			fVar8[iVar0] = 1f;
			iVar0++;
		}
		if (func_531(iParam0, &iVar1, &fVar8, uParam1, uParam2, uParam3, uParam4, bParam6, 0))
		{
			return *uParam1 != 318;
		}
		Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_24[iParam0 /*5*/][iParam5] = 0;
	}
	return 0;
}


bool func_568(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x73441
{
	return func_574(uParam0, uParam1, uParam2, uParam3, 472155/*func_569*/, bParam4);
}

bool func_569(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x7345B
{
	*uParam0 = 318;
	*uParam1 = -1f;
	uParam2->f_2 = uParam2->f_2;
	uParam3->f_111 = uParam3->f_111;
	uParam4 = uParam4;
	return *uParam0 != 318;
}

bool func_570(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x73488
{
	int iVar0;
	int iVar1[29];
	float fVar31[29];
	int iVar61[30];
	float fVar92[30];
	
	iVar0 = 1;
	if (!GlobalFunc_485(126))
	{
		if (GlobalFunc_230(43))
		{
			iVar1[0] = 218;
			fVar31[0] = 3.8f;
			iVar1[1] = 219;
			fVar31[1] = 3.8f;
			iVar1[2] = 220;
			fVar31[2] = 3.8f;
			if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 218, 219, 220, 196, 318, 318))
			{
				return func_565(iVar0, *uParam0, 2);
			}
		}
		else
		{
			iVar1[0] = 318;
			fVar31[0] = 0f;
			iVar1[1] = 318;
			fVar31[1] = 0f;
			iVar1[2] = 318;
			fVar31[2] = 0f;
			iVar1[3] = 318;
			fVar31[3] = 0f;
			if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 196, 318, 318, 318, 318, 318))
			{
				return func_565(iVar0, *uParam0, 2);
			}
		}
		iVar1[4] = 208;
		fVar31[4] = 5f;
		iVar1[5] = 209;
		fVar31[5] = 5f;
		iVar1[6] = 210;
		fVar31[6] = 5f;
		if (GlobalFunc_485(118))
		{
			iVar1[7] = 211;
			fVar31[7] = 2f;
			iVar1[8] = 216;
			fVar31[8] = 2f;
			iVar1[9] = 217;
			fVar31[9] = 2f;
		}
		else
		{
			iVar1[7] = 318;
			fVar31[7] = 0f;
			iVar1[8] = 318;
			fVar31[8] = 0f;
			iVar1[9] = 318;
			fVar31[9] = 0f;
		}
		iVar1[10] = 192;
		fVar31[10] = 2f;
		iVar1[11] = 193;
		fVar31[11] = 2f;
		iVar1[12] = 194;
		fVar31[12] = 2f;
		iVar1[13] = 195;
		fVar31[13] = 2f;
		iVar1[14] = 198;
		fVar31[14] = 6f;
		iVar1[15] = 200;
		fVar31[15] = 2f;
		iVar1[16] = 201;
		fVar31[16] = 2f;
		iVar1[17] = 212;
		fVar31[17] = 6f;
		iVar1[18] = 226;
		fVar31[18] = 1.5f;
		iVar1[19] = 227;
		fVar31[19] = 1.5f;
		iVar1[20] = 228;
		fVar31[20] = 1.5f;
		iVar1[21] = 229;
		fVar31[21] = 1.5f;
		iVar1[22] = 230;
		fVar31[22] = 1.5f;
		if (GlobalFunc_230(8) && !GlobalFunc_230(11))
		{
			iVar1[23] = 222;
			fVar31[23] = 6f;
			iVar1[24] = 223;
			fVar31[24] = 5f;
			iVar1[25] = 224;
			fVar31[25] = 6f;
		}
		else
		{
			iVar1[23] = 318;
			fVar31[23] = 0f;
			iVar1[24] = 318;
			fVar31[24] = 0f;
			iVar1[25] = 318;
			fVar31[25] = 0f;
		}
		if (GlobalFunc_485(63))
		{
			iVar1[26] = 203;
			fVar31[26] = 6f;
			iVar1[27] = 204;
			fVar31[27] = 6f;
		}
		else
		{
			iVar1[26] = 318;
			fVar31[26] = 0f;
			iVar1[27] = 318;
			fVar31[27] = 0f;
		}
		if (func_531(iVar0, &iVar1, &fVar31, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 197, 318, 318, 318, 318, 318))
	{
		return func_565(iVar0, *uParam0, 2);
	}
	iVar61[0] = 202;
	fVar92[0] = 4.3f;
	iVar61[1] = 208;
	fVar92[1] = 1.4f;
	iVar61[2] = 209;
	fVar92[2] = 1.4f;
	iVar61[3] = 210;
	fVar92[3] = 1.4f;
	if (GlobalFunc_485(118))
	{
		iVar61[4] = 213;
		fVar92[4] = 1.4f;
		iVar61[5] = 216;
		fVar92[5] = 1.4f;
		iVar61[6] = 217;
		fVar92[6] = 1.4f;
	}
	else
	{
		iVar61[4] = 318;
		fVar92[4] = 0f;
		iVar61[5] = 318;
		fVar92[5] = 0f;
		iVar61[6] = 318;
		fVar92[6] = 0f;
	}
	iVar61[7] = 192;
	fVar92[7] = 4.3f;
	iVar61[8] = 193;
	fVar92[8] = 4.3f;
	iVar61[9] = 194;
	fVar92[9] = 4.3f;
	iVar61[10] = 195;
	fVar92[10] = 4.3f;
	iVar61[11] = 199;
	fVar92[11] = 4.3f;
	iVar61[12] = 200;
	fVar92[12] = 2.15f;
	iVar61[13] = 201;
	fVar92[13] = 2.15f;
	if (GlobalFunc_230(8) && !GlobalFunc_230(11))
	{
		iVar61[14] = 222;
		fVar92[14] = 1.4f;
		iVar61[15] = 223;
		fVar92[15] = 1.4f;
		iVar61[16] = 224;
		fVar92[16] = 1.4f;
	}
	else
	{
		iVar61[14] = 318;
		fVar92[14] = 0f;
		iVar61[15] = 318;
		fVar92[15] = 0f;
		iVar61[16] = 318;
		fVar92[16] = 0f;
	}
	iVar61[17] = 226;
	fVar92[17] = 7f;
	iVar61[18] = 227;
	fVar92[18] = 7f;
	iVar61[19] = 228;
	fVar92[19] = 7f;
	iVar61[20] = 229;
	fVar92[20] = 7f;
	iVar61[21] = 230;
	fVar92[21] = 7f;
	if (GlobalFunc_485(63))
	{
		iVar61[22] = 205;
		fVar92[22] = 4.3f;
	}
	else
	{
		iVar61[22] = 318;
		fVar92[22] = 0f;
	}
	iVar61[23] = 191;
	fVar92[23] = 8.3f;
	iVar61[24] = 188;
	fVar92[24] = 8.3f;
	iVar61[25] = 189;
	fVar92[25] = 8.3f;
	iVar61[26] = 214;
	fVar92[26] = 8.3f;
	iVar61[27] = 190;
	fVar92[27] = 8.3f;
	iVar61[28] = 186;
	fVar92[28] = 8.3f;
	iVar61[29] = 187;
	fVar92[29] = 8.2f;
	if (func_531(iVar0, &iVar61, &fVar92, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
	{
		return *uParam0 != 318;
	}
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(bParam5);
	Call_Loc(iParam4);
	return StackVal;
}

bool func_571(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x73ACF
{
	return func_530(uParam0, uParam1, uParam2, uParam3, 472155/*func_569*/, bParam4);
}

bool func_572(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x73AE9
{
	int iVar0;
	int iVar1[20];
	float fVar22[20];
	int iVar43[25];
	float fVar69[25];
	
	iVar0 = 1;
	if (!GlobalFunc_485(126))
	{
		if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 1, bParam5, 196, 318, 318, 318, 318, 318))
		{
			return func_565(iVar0, *uParam0, 1);
		}
		iVar1[0] = 192;
		fVar22[0] = 6.2f;
		iVar1[1] = 193;
		fVar22[1] = 6.2f;
		iVar1[2] = 194;
		fVar22[2] = 6.2f;
		iVar1[3] = 195;
		fVar22[3] = 6.2f;
		iVar1[4] = 198;
		fVar22[4] = 9.6f;
		iVar1[5] = 200;
		fVar22[5] = 3.3f;
		iVar1[6] = 201;
		fVar22[6] = 3.3f;
		iVar1[7] = 208;
		fVar22[7] = 1.6f;
		iVar1[8] = 209;
		fVar22[8] = 1.6f;
		iVar1[9] = 210;
		fVar22[9] = 1.6f;
		if (GlobalFunc_485(118))
		{
			iVar1[10] = 211;
			fVar22[10] = 1.6f;
			iVar1[11] = 216;
			fVar22[11] = 1.6f;
			iVar1[12] = 217;
			fVar22[12] = 1.6f;
		}
		else
		{
			iVar1[10] = 318;
			fVar22[10] = 0f;
			iVar1[11] = 318;
			fVar22[11] = 0f;
			iVar1[12] = 318;
			fVar22[12] = 0f;
		}
		iVar1[13] = 202;
		fVar22[13] = 6.6f;
		iVar1[14] = 212;
		fVar22[14] = 6.6f;
		if (GlobalFunc_230(8) && !GlobalFunc_230(11))
		{
			iVar1[15] = 222;
			fVar22[15] = 7.2f;
			iVar1[16] = 223;
			fVar22[16] = 7.2f;
			iVar1[17] = 224;
			fVar22[17] = 7.2f;
		}
		else
		{
			iVar1[15] = 318;
			fVar22[15] = 0f;
			iVar1[16] = 318;
			fVar22[16] = 0f;
			iVar1[17] = 318;
			fVar22[17] = 0f;
		}
		if (GlobalFunc_485(63))
		{
			iVar1[18] = 203;
			fVar22[18] = 6.6f;
			iVar1[19] = 204;
			fVar22[19] = 6.6f;
		}
		else
		{
			iVar1[18] = 318;
			fVar22[18] = 0f;
			iVar1[19] = 318;
			fVar22[19] = 0f;
		}
		if (func_531(1, &iVar1, &fVar22, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 1, bParam5, 197, 318, 318, 318, 318, 318))
	{
		return func_565(iVar0, *uParam0, 1);
	}
	iVar43[0] = 192;
	fVar69[0] = 1.5f;
	iVar43[1] = 193;
	fVar69[1] = 1.5f;
	iVar43[2] = 194;
	fVar69[2] = 1.5f;
	iVar43[3] = 195;
	fVar69[3] = 1.5f;
	iVar43[4] = 199;
	fVar69[4] = 4.5f;
	iVar43[5] = 202;
	fVar69[5] = 4.5f;
	iVar43[6] = 208;
	fVar69[6] = 1.5f;
	iVar43[7] = 209;
	fVar69[7] = 1.5f;
	iVar43[8] = 210;
	fVar69[8] = 1.5f;
	if (GlobalFunc_485(118))
	{
		iVar43[9] = 213;
		fVar69[9] = 1.5f;
		iVar43[10] = 216;
		fVar69[10] = 1.5f;
		iVar43[11] = 217;
		fVar69[11] = 1.5f;
	}
	else
	{
		iVar43[9] = 318;
		fVar69[9] = 0f;
		iVar43[10] = 318;
		fVar69[10] = 0f;
		iVar43[11] = 318;
		fVar69[11] = 0f;
	}
	if (GlobalFunc_230(8) && !GlobalFunc_230(11))
	{
		iVar43[12] = 222;
		fVar69[12] = 1.5f;
		iVar43[13] = 223;
		fVar69[13] = 1.5f;
		iVar43[14] = 224;
		fVar69[14] = 1.5f;
	}
	else
	{
		iVar43[12] = 318;
		fVar69[12] = 0f;
		iVar43[13] = 318;
		fVar69[13] = 0f;
		iVar43[14] = 318;
		fVar69[14] = 0f;
	}
	iVar43[15] = 184;
	fVar69[15] = 6.5f;
	iVar43[16] = 185;
	fVar69[16] = 6.5f;
	if (GlobalFunc_485(63))
	{
		iVar43[17] = 205;
		fVar69[17] = 1.5f;
	}
	else
	{
		iVar43[17] = 318;
		fVar69[17] = 0f;
	}
	iVar43[18] = 191;
	fVar69[18] = 8.5f;
	iVar43[19] = 188;
	fVar69[19] = 8.5f;
	iVar43[20] = 189;
	fVar69[20] = 8.5f;
	iVar43[21] = 214;
	fVar69[21] = 4.5f;
	iVar43[22] = 190;
	fVar69[22] = 8.5f;
	iVar43[23] = 186;
	fVar69[23] = 8.5f;
	iVar43[24] = 187;
	fVar69[24] = 8.5f;
	if (func_531(1, &iVar43, &fVar69, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
	{
		return *uParam0 != 318;
	}
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(bParam5);
	Call_Loc(iParam4);
	return StackVal;
}

bool func_573(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x74051
{
	return func_570(uParam0, uParam1, uParam2, uParam3, 472155/*func_569*/, bParam4);
}

bool func_574(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x7406B
{
	int iVar0;
	int iVar1[6];
	float fVar8[6];
	int iVar15[8];
	float fVar24[8];
	
	iVar0 = 1;
	if (!GlobalFunc_485(126))
	{
		if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 0, bParam5, 196, 318, 318, 318, 318, 318))
		{
			return func_565(iVar0, *uParam0, 0);
		}
		iVar1[0] = 175;
		fVar8[0] = 30f;
		iVar1[1] = 179;
		fVar8[1] = 10f;
		iVar1[2] = 181;
		fVar8[2] = 10f;
		iVar1[3] = 182;
		fVar8[3] = 10f;
		iVar1[4] = 225;
		fVar8[4] = 10f;
		iVar1[5] = 221;
		fVar8[5] = 10f;
		if (func_531(1, &iVar1, &fVar8, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 0, bParam5, 197, 318, 318, 318, 318, 318))
	{
		return func_565(iVar0, *uParam0, 0);
	}
	iVar15[0] = 176;
	fVar24[0] = (50f / 3f);
	iVar15[1] = 177;
	fVar24[1] = (50f / 3f);
	iVar15[2] = 178;
	fVar24[2] = (50f / 3f);
	iVar15[3] = 180;
	fVar24[3] = 10f;
	iVar15[4] = 191;
	fVar24[4] = 10f;
	iVar15[5] = 215;
	fVar24[5] = 10f;
	iVar15[6] = 188;
	fVar24[6] = 10f;
	iVar15[7] = 183;
	fVar24[7] = 10f;
	if (func_531(1, &iVar15, &fVar24, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
	{
		return *uParam0 != 318;
	}
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(bParam5);
	Call_Loc(iParam4);
	return StackVal;
}

bool func_575(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x74256
{
	return func_572(uParam0, uParam1, uParam2, uParam3, 472155/*func_569*/, bParam4);
}

int func_576(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x74270
{
	int iVar0[3];
	float fVar4[3];
	int iVar8;
	
	iVar8 = -1;
	if (GlobalFunc_891(19))
	{
		if (iParam0 == 0)
		{
			iVar0[0] = 140;
			fVar4[0] = 33.3f;
			iVar0[1] = 90;
			fVar4[1] = 33.3f;
			iVar0[2] = 116;
			fVar4[2] = 33.3f;
			iVar8 = 19;
		}
	}
	if (GlobalFunc_891(41))
	{
		if (iParam0 == 1)
		{
			iVar0[0] = 201;
			fVar4[0] = 40f;
			iVar0[1] = 200;
			fVar4[1] = 40f;
			iVar0[2] = 209;
			fVar4[2] = 20f;
			iVar8 = 41;
		}
	}
	if (GlobalFunc_891(45))
	{
		if (iParam0 == 0)
		{
			iVar0[0] = 112;
			fVar4[0] = 33.3f;
			iVar0[1] = 113;
			fVar4[1] = 33.3f;
			iVar0[2] = 115;
			fVar4[2] = 33.3f;
			iVar8 = 45;
		}
	}
	if (GlobalFunc_891(46))
	{
		if (iParam0 == 0)
		{
			iVar0[0] = 97;
			fVar4[0] = 33.3f;
			iVar0[1] = 95;
			fVar4[1] = 33.3f;
			iVar0[2] = 115;
			fVar4[2] = 33.3f;
			iVar8 = 46;
		}
		if (iParam0 == 2)
		{
			iVar0[0] = 251;
			fVar4[0] = 50f;
			iVar0[1] = 260;
			fVar4[1] = 25f;
			iVar0[2] = 239;
			fVar4[2] = 25f;
			iVar8 = 46;
		}
	}
	if (GlobalFunc_891(47))
	{
		if (iParam0 == 1)
		{
			iVar0[0] = 218;
			fVar4[0] = 33.3f;
			iVar0[1] = 209;
			fVar4[1] = 33.3f;
			iVar0[2] = 226;
			fVar4[2] = 33.3f;
			iVar8 = 47;
		}
	}
	if (GlobalFunc_891(76))
	{
		if (iParam0 == 0)
		{
			iVar0[0] = 97;
			fVar4[0] = 33.3f;
			iVar0[1] = 95;
			fVar4[1] = 33.3f;
			iVar0[2] = 104;
			fVar4[2] = 33.3f;
			iVar8 = 76;
		}
		if (iParam0 == 2)
		{
			iVar0[0] = 290;
			fVar4[0] = 33.3f;
			iVar0[1] = 236;
			fVar4[1] = 33.3f;
			iVar0[2] = 272;
			fVar4[2] = 33.3f;
			iVar8 = 76;
		}
	}
	if (GlobalFunc_891(77))
	{
		if (iParam0 == 0)
		{
			iVar0[0] = 97;
			fVar4[0] = 33.3f;
			iVar0[1] = 95;
			fVar4[1] = 33.3f;
			iVar0[2] = 104;
			fVar4[2] = 33.3f;
			iVar8 = 77;
		}
		if (iParam0 == 2)
		{
			iVar0[0] = 290;
			fVar4[0] = 33.3f;
			iVar0[1] = 236;
			fVar4[1] = 33.3f;
			iVar0[2] = 272;
			fVar4[2] = 33.3f;
			iVar8 = 77;
		}
	}
	if (GlobalFunc_891(91))
	{
		if (iParam0 == 2)
		{
			iVar0[0] = 240;
			fVar4[0] = 33.3f;
			iVar0[1] = 310;
			fVar4[1] = 33.3f;
			iVar0[2] = 277;
			fVar4[2] = 33.3f;
			iVar8 = 91;
		}
	}
	if (GlobalFunc_891(75))
	{
		if (iParam0 == 0)
		{
			iVar0[0] = 91;
			fVar4[0] = 33.3f;
			iVar0[1] = 121;
			fVar4[1] = 33.3f;
			iVar0[2] = 318;
			fVar4[2] = 33.3f;
			iVar8 = 75;
		}
		if (iParam0 == 2)
		{
			iVar0[0] = 246;
			fVar4[0] = 33.3f;
			iVar0[1] = 291;
			fVar4[1] = 33.3f;
			iVar0[2] = 298;
			fVar4[2] = 33.3f;
			iVar8 = 75;
		}
	}
	if (GlobalFunc_891(11))
	{
		if (iParam0 == 2)
		{
			iVar0[0] = 235;
			fVar4[0] = 33.3f;
			iVar0[1] = 237;
			fVar4[1] = 33.3f;
			iVar0[2] = 236;
			fVar4[2] = 33.3f;
			iVar8 = 11;
		}
	}
	if (iVar8 != -1)
	{
		if (func_531(iParam0, &iVar0, &fVar4, uParam1, uParam2, uParam3, uParam4, 0, 1))
		{
			return *uParam1 != 318;
		}
	}
	return 0;
}


bool func_578(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5)//Position - 0x74689
{
	bool bVar0;
	int iVar1[2];
	float fVar4[2];
	int iVar7[3];
	float fVar11[3];
	int iVar15[4];
	float fVar20[4];
	int iVar25[6];
	float fVar32[6];
	int iVar39[1];
	float fVar41[1];
	int iVar43[4];
	float fVar48[4];
	int iVar53[2];
	float fVar56[2];
	int iVar59[3];
	float fVar63[3];
	int iVar67[3];
	float fVar71[3];
	int iVar75[2];
	float fVar78[2];
	int iVar81[4];
	float fVar86[4];
	int iVar91[4];
	float fVar96[4];
	int iVar101[2];
	float fVar104[2];
	int iVar107[5];
	float fVar113[5];
	int iVar119[3];
	float fVar123[3];
	int iVar127[2];
	float fVar130[2];
	int iVar133[2];
	float fVar136[2];
	int iVar139[4];
	float fVar144[4];
	int iVar149[5];
	float fVar155[5];
	int iVar161;
	
	*uParam1 = 318;
	*uParam2 = -1f;
	bVar0 = false;
	if (iParam0 >= 3)
	{
		*uParam1 = 318;
		*uParam2 = -1f;
		return *uParam1 != 318;
	}
	if (Global_3)
	{
		switch (iParam0)
		{
			case 0:
				*uParam2 = 100f;
				*uParam1 = 95;
				return *uParam1 != 318;
				break;
			
			case 1:
				*uParam2 = 100f;
				*uParam1 = 76;
				return *uParam1 != 318;
				break;
			
			case 2:
				*uParam2 = 100f;
				*uParam1 = 280;
				return *uParam1 != 318;
				break;
			}
	}
	if (!bVar0)
	{
		if (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == 0)
		{
			if (!GlobalFunc_10380(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0], 6))
			{
				*uParam2 = 100f;
				*uParam1 = 1;
				return *uParam1 != 318;
			}
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] = 318;
		}
	}
	if (!bParam5)
	{
		if (!GlobalFunc_8633(iParam0))
		{
			if (func_528(iParam0))
			{
				switch (iParam0)
				{
					case 0:
						*uParam2 = 100f;
						*uParam1 = 5;
						return *uParam1 != 318;
						break;
					
					case 1:
						*uParam2 = 100f;
						*uParam1 = 6;
						return *uParam1 != 318;
						break;
					
					case 2:
						*uParam2 = 100f;
						*uParam1 = 7;
						return *uParam1 != 318;
						break;
					}
			}
			if (!GlobalFunc_5141(iParam0))
			{
				*uParam1 = 318;
				*uParam2 = -1f;
				return *uParam1 != 318;
			}
		}
		else if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "debug"))
		{
		}
	}
	switch (iParam0)
	{
		case 0:
			if (GlobalFunc_891(20))
			{
				*uParam2 = 100f;
				*uParam1 = 174;
				return *uParam1 != 318;
			}
			break;
		
		case 1:
			if (GlobalFunc_891(15) && !Global_84352[15 /*2*/])
			{
				*uParam2 = 100f;
				*uParam1 = 231;
				return *uParam1 != 318;
			}
			else if (GlobalFunc_891(15))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iParam0 /*3*/] = { 0f, 0f, 0f };
			}
			if (GlobalFunc_891(67))
			{
				*uParam2 = 100f;
				if (GlobalFunc_485(11))
				{
					*uParam1 = 232;
				}
				else
				{
					*uParam1 = 233;
				}
				return *uParam1 != 318;
			}
			break;
		
		case 2:
			break;
	}
	if (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == 2)
	{
		*uParam2 = 100f;
		*uParam1 = 2;
		return *uParam1 != 318;
	}
	if (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == 3)
	{
		*uParam2 = 100f;
		*uParam1 = 3;
		return *uParam1 != 318;
	}
	if (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == 4)
	{
		*uParam2 = 100f;
		*uParam1 = 4;
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 13, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 14, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 15, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 12, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 16, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 17, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 21, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar1[0] = 124;
		fVar4[0] = 90f;
		iVar1[1] = 85;
		fVar4[1] = 10f;
		if (func_531(0, &iVar1, &fVar4, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(0, 21, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 18, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 19, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 20, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 22, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 23, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 24, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 67, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 25, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 26, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 27, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 28, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 29, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		if (!GlobalFunc_485(126))
		{
			if (!GlobalFunc_891(41))
			{
				iVar7[0] = 203;
				fVar11[0] = 80f;
				iVar7[1] = 179;
				fVar11[1] = 10f;
				iVar7[2] = 211;
				fVar11[2] = 10f;
			}
			else
			{
				iVar7[0] = 228;
				fVar11[0] = 30f;
				iVar7[1] = 219;
				fVar11[1] = 40f;
				iVar7[2] = 230;
				fVar11[2] = 30f;
			}
		}
		else
		{
			iVar7[0] = 205;
			fVar11[0] = 80f;
			iVar7[1] = 180;
			fVar11[1] = 10f;
			iVar7[2] = 213;
			fVar11[2] = 10f;
		}
		if (func_531(1, &iVar7, &fVar11, uParam1, uParam2, uParam3, uParam4, bVar0, 1))
		{
			return *uParam1 != 318;
		}
		if (func_606(1, 29, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 30, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar15[0] = 262;
		fVar20[0] = 85f;
		iVar15[1] = 244;
		fVar20[1] = 5f;
		iVar15[2] = 249;
		fVar20[2] = 5f;
		iVar15[3] = 248;
		fVar20[3] = 5f;
		if (func_531(2, &iVar15, &fVar20, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(2, 30, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 31, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		if (!GlobalFunc_485(126))
		{
			iVar25[0] = 200;
			fVar32[0] = 80f;
			iVar25[1] = 228;
			fVar32[1] = 10f;
			iVar25[2] = 218;
			fVar32[2] = 2.5f;
			iVar25[3] = 219;
			fVar32[3] = 2.5f;
			iVar25[4] = 220;
			fVar32[4] = 2.5f;
			iVar25[3] = 202;
			fVar32[3] = 2.5f;
		}
		else
		{
			iVar25[0] = 214;
			fVar32[0] = 80f;
			iVar25[1] = 180;
			fVar32[1] = 10f;
			iVar25[2] = 213;
			fVar32[2] = 2.5f;
			iVar25[3] = 205;
			fVar32[3] = 2.5f;
			iVar25[4] = 197;
			fVar32[4] = 2.5f;
			iVar25[5] = 202;
			fVar32[5] = 2.5f;
		}
		if (func_531(1, &iVar25, &fVar32, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(1, 31, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 32, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar39[0] = 280;
		fVar41[0] = 100f;
		if (func_531(2, &iVar39, &fVar41, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(2, 32, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 33, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar43[0] = 315;
		fVar48[0] = 80f;
		iVar43[1] = 311;
		fVar48[1] = 10f;
		iVar43[2] = 304;
		fVar48[2] = 10f;
		iVar43[3] = 234;
		fVar48[3] = 10f;
		if (func_531(2, &iVar43, &fVar48, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(2, 33, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 34, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar53[0] = 156;
		fVar56[0] = 50f;
		iVar53[1] = 168;
		fVar56[1] = 50f;
		if (func_531(0, &iVar53, &fVar56, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(0, 34, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 35, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar59[0] = 197;
		fVar63[0] = 50f;
		iVar59[1] = 206;
		fVar63[1] = 25f;
		iVar59[2] = 207;
		fVar63[2] = 25f;
		if (func_531(1, &iVar59, &fVar63, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(1, 35, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 36, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar67[0] = 87;
		fVar71[0] = 50f;
		iVar67[1] = 85;
		fVar71[1] = 50f;
		iVar67[2] = 124;
		fVar71[1] = 50f;
		if (func_531(0, &iVar67, &fVar71, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(0, 36, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 37, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		if (!GlobalFunc_485(126))
		{
			iVar75[0] = 212;
			fVar78[0] = 50f;
			iVar75[1] = 179;
			fVar78[1] = 50f;
		}
		else
		{
			iVar75[0] = 214;
			fVar78[0] = 50f;
			iVar75[1] = 180;
			fVar78[1] = 50f;
		}
		if (func_531(1, &iVar75, &fVar78, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(1, 37, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 58, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 59, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 60, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 39, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar81[0] = 315;
		fVar86[0] = 80f;
		iVar81[1] = 245;
		fVar86[1] = 10f;
		iVar81[2] = 304;
		fVar86[2] = 10f;
		iVar81[3] = 234;
		fVar86[3] = 10f;
		if (func_531(2, &iVar81, &fVar86, uParam1, uParam2, uParam3, uParam4, bVar0, 1))
		{
			return *uParam1 != 318;
		}
		if (func_606(2, 39, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 38, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 40, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 41, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (((func_607(iParam0, 42, uParam1, uParam2, uParam3, uParam4, 1065353216) || func_607(iParam0, 43, uParam1, uParam2, uParam3, uParam4, 1065353216)) || func_607(iParam0, 44, uParam1, uParam2, uParam3, uParam4, 1065353216)) || func_607(iParam0, 45, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		switch (Global_89490)
		{
			case 0:
				iVar91[0] = 42;
				fVar96[0] = 25f;
				iVar91[1] = 43;
				fVar96[1] = 25f;
				iVar91[2] = 44;
				fVar96[2] = 25f;
				iVar91[3] = 45;
				fVar96[3] = 25f;
				if (func_531(iParam0, &iVar91, &fVar96, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
				{
					return *uParam1 != 318;
				}
				break;
			
			case 1:
				if (GlobalFunc_745())
				{
					*uParam1 = 236;
					*uParam2 = 50f;
					return *uParam1 != 318;
				}
				else
				{
					*uParam1 = 290;
					*uParam2 = 50f;
					return *uParam1 != 318;
				}
				break;
			
			case 2:
				if (!GlobalFunc_485(126))
				{
					if (GlobalFunc_745())
					{
						*uParam1 = 179;
						*uParam2 = 50f;
						return *uParam1 != 318;
					}
					else
					{
						*uParam1 = 181;
						*uParam2 = 50f;
						return *uParam1 != 318;
					}
				}
				else if (GlobalFunc_745())
				{
					*uParam1 = 226;
					*uParam2 = 50f;
					return *uParam1 != 318;
				}
				else
				{
					*uParam1 = 227;
					*uParam2 = 50f;
					return *uParam1 != 318;
				}
				break;
			
			default:
				break;
			}
	}
	if (func_607(iParam0, 46, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar101[0] = 126;
		fVar104[0] = 95f;
		iVar101[1] = 130;
		fVar104[1] = 5f;
		if (func_531(0, &iVar101, &fVar104, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(0, 46, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 47, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 49, uParam1, uParam2, uParam3, uParam4, 3f))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 48, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 50, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 51, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 52, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 66, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 53, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar107[0] = 189;
		fVar113[0] = 10f;
		iVar107[1] = 190;
		fVar113[1] = 5f;
		iVar107[2] = 188;
		fVar113[2] = 75f;
		iVar107[3] = 180;
		fVar113[3] = 5f;
		iVar107[4] = 197;
		fVar113[4] = 5f;
		if (func_531(1, &iVar107, &fVar113, uParam1, uParam2, uParam3, uParam4, bVar0, 1))
		{
			return *uParam1 != 318;
		}
		if (func_606(1, 53, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 54, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 55, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 56, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 57, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 61, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 62, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 63, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 68, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar119[0] = 124;
		fVar123[0] = 40f;
		iVar119[1] = 85;
		fVar123[1] = 60f;
		iVar119[2] = 318;
		fVar123[2] = 0f;
		if (func_531(0, &iVar119, &fVar123, uParam1, uParam2, uParam3, uParam4, bVar0, 1))
		{
			return *uParam1 != 318;
		}
		if (func_606(0, 68, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 69, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 64, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 65, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		return *uParam1 != 318;
	}
	if (func_607(iParam0, 70, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar127[0] = 185;
		fVar130[0] = 95f;
		iVar127[1] = 215;
		fVar130[1] = 5f;
		if (func_531(1, &iVar127, &fVar130, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(1, 70, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 71, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar133[0] = 185;
		fVar136[0] = 95f;
		iVar133[1] = 215;
		fVar136[1] = 5f;
		if (func_531(1, &iVar133, &fVar136, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(1, 71, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 72, uParam1, uParam2, uParam3, uParam4, 1065353216) && GlobalFunc_5899() == 3)
	{
		iVar139[0] = 155;
		fVar144[0] = 85f;
		iVar139[1] = 156;
		fVar144[1] = 5f;
		iVar139[2] = 168;
		fVar144[2] = 5f;
		iVar139[3] = 163;
		fVar144[3] = 5f;
		if (func_531(0, &iVar139, &fVar144, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(0, 72, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	if (func_607(iParam0, 73, uParam1, uParam2, uParam3, uParam4, 1065353216))
	{
		iVar149[0] = 215;
		fVar155[0] = 95f;
		iVar149[1] = 185;
		fVar155[1] = 2f;
		iVar149[2] = 184;
		fVar155[2] = 1f;
		iVar149[3] = 191;
		fVar155[3] = 1f;
		iVar149[4] = 228;
		fVar155[4] = 1f;
		if (func_531(1, &iVar149, &fVar155, uParam1, uParam2, uParam3, uParam4, bVar0, 0))
		{
			return *uParam1 != 318;
		}
		if (func_606(1, 73, uParam1, uParam2, uParam3, uParam4))
		{
			return *uParam1 != 318;
		}
	}
	iVar161 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0];
	if (GlobalFunc_6710(iVar161))
	{
		if (!bParam5)
		{
			if (!GlobalFunc_537(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iParam0 /*3*/], 0f, 0f, 0f, 1.5f))
			{
				if (!GlobalFunc_10380(iVar161, 3))
				{
					if (func_604(iParam0))
					{
						switch (iParam0)
						{
							case 0:
								*uParam2 = 100f;
								*uParam1 = 5;
								return *uParam1 != 318;
								break;
							
							case 1:
								*uParam2 = 100f;
								*uParam1 = 6;
								return *uParam1 != 318;
								break;
							
							case 2:
								*uParam2 = 100f;
								*uParam1 = 7;
								return *uParam1 != 318;
								break;
							}
						}
					}
				}
			}
	}
	if (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == 8)
	{
		if (!func_535(8, bVar0, 150f))
		{
			if (GlobalFunc_485(72))
			{
				*uParam2 = 100f;
				*uParam1 = 8;
				return *uParam1 != 318;
			}
			GlobalFunc_17(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0]));
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] = 318;
		}
	}
	if (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == 9)
	{
		if (!func_535(9, bVar0, 150f))
		{
			if (GlobalFunc_485(72))
			{
				*uParam2 = 100f;
				*uParam1 = 9;
				return *uParam1 != 318;
			}
			GlobalFunc_17(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0]));
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] = 318;
		}
	}
	if (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == 10)
	{
		if (!func_535(10, bVar0, 150f))
		{
			if (GlobalFunc_485(72))
			{
				*uParam2 = 100f;
				*uParam1 = 10;
				return *uParam1 != 318;
			}
			GlobalFunc_17(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0]));
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] = 318;
		}
	}
	if (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == 49)
	{
		if (GlobalFunc_230(39))
		{
			GlobalFunc_17(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0]));
			Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] = 318;
		}
	}
	switch (iParam0)
	{
		case 0:
			func_592(uParam1, uParam2, uParam3, uParam4, bVar0);
			break;
		
		case 1:
			func_529(uParam1, uParam2, uParam3, uParam4, bVar0);
			break;
		
		case 2:
			func_579(uParam1, uParam2, uParam3, uParam4, bVar0);
			break;
	}
	if (*uParam1 == 318)
	{
		if (!GlobalFunc_6710(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0]))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0] = GlobalFunc_8058();
		}
		if (GlobalFunc_537(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iParam0 /*3*/], 0f, 0f, 0f, 1.5f))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iParam0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iParam0] = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		}
		switch (iParam0)
		{
			case 0:
				*uParam2 = 100f;
				*uParam1 = 5;
				return *uParam1 != 318;
				break;
			
			case 1:
				*uParam2 = 100f;
				*uParam1 = 6;
				return *uParam1 != 318;
				break;
			
			case 2:
				*uParam2 = 100f;
				*uParam1 = 7;
				return *uParam1 != 318;
				break;
			}
	}
	return *uParam1 != 318;
}

bool func_579(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x75F34
{
	*uParam0 = 318;
	*uParam1 = -1f;
	if (!bParam4)
	{
		if (func_576(2, uParam0, uParam1, uParam2, uParam3))
		{
			return *uParam0 != 318;
		}
	}
	switch (GlobalFunc_8043())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			func_591(uParam0, uParam1, uParam2, uParam3, bParam4);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_589(uParam0, uParam1, uParam2, uParam3, bParam4);
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			func_580(uParam0, uParam1, uParam2, uParam3, bParam4);
			break;
	}
	return *uParam0 != 318;
}

int func_580(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x7603C
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar74;
	
	iVar0 = 0;
	iVar1 = 2;
	iVar2 = 71;
	fVar74 = 71;
	if (!GlobalFunc_485(58))
	{
		if (!GlobalFunc_230(iLocal_39))
		{
			if (func_566(iVar1, uParam0, uParam1, uParam2, uParam3, 3, bParam4, 296, 297, 298, 318, 318, 318))
			{
				return func_565(iVar1, *uParam0, 3);
			}
		}
		if (!GlobalFunc_485(1))
		{
			func_588(250, 5f, &iVar2, &fVar74, &iVar0);
			func_588(251, 5f, &iVar2, &fVar74, &iVar0);
			if (GlobalFunc_230(30))
			{
				func_588(252, 5f, &iVar2, &fVar74, &iVar0);
			}
			func_588(253, 5f, &iVar2, &fVar74, &iVar0);
		}
		func_588(235, 2.5f, &iVar2, &fVar74, &iVar0);
		if (!GlobalFunc_891(85))
		{
			func_588(236, (2.5f / 2f), &iVar2, &fVar74, &iVar0);
			func_588(237, (2.5f / 2f), &iVar2, &fVar74, &iVar0);
		}
		func_588(238, 2.5f, &iVar2, &fVar74, &iVar0);
		func_587(&iVar0, 70f, &iVar2, &fVar74);
	}
	if (!GlobalFunc_485(59))
	{
		if (func_566(iVar1, uParam0, uParam1, uParam2, uParam3, 3, bParam4, 267, 270, 318, 318, 318, 318))
		{
			return func_565(iVar1, *uParam0, 3);
		}
		if (GlobalFunc_230(12) && !GlobalFunc_230(93))
		{
			if (!GlobalFunc_891(93) && !GlobalFunc_891(91))
			{
				func_588(305, 5f, &iVar2, &fVar74, &iVar0);
			}
		}
		if (!func_586(25, 2) && !func_586(26, 2))
		{
			if (func_584(2, joaat("weapon_sniperrifle")) || func_584(2, joaat("weapon_heavysniper")))
			{
				func_588(306, 5f, &iVar2, &fVar74, &iVar0);
				func_588(307, 5f, &iVar2, &fVar74, &iVar0);
				func_588(308, 5f, &iVar2, &fVar74, &iVar0);
			}
		}
		if (GlobalFunc_466(2) == 2)
		{
			func_588(309, 10f, &iVar2, &fVar74, &iVar0);
		}
		func_588(315, 5f, &iVar2, &fVar74, &iVar0);
		func_588(316, 5f, &iVar2, &fVar74, &iVar0);
		func_581(&iVar0, 30f, &iVar2, &fVar74);
	}
	return func_531(iVar1, &iVar2, &fVar74, uParam0, uParam1, uParam2, uParam3, bParam4, 0);
}

int func_581(int iParam0, float fParam1, var uParam2, var uParam3)//Position - 0x76285
{
	var uVar0;
	int iVar1;
	
	uVar0 = *iParam0;
	switch (GlobalFunc_8043())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			func_582(iParam0, 240, uParam2);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_582(iParam0, 241, uParam2);
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			break;
	}
	if (GlobalFunc_466(13) != 2)
	{
		func_582(iParam0, 258, uParam2);
	}
	func_582(iParam0, 274, uParam2);
	func_582(iParam0, 265, uParam2);
	func_582(iParam0, 267, uParam2);
	func_582(iParam0, 268, uParam2);
	func_582(iParam0, 270, uParam2);
	func_582(iParam0, 276, uParam2);
	func_582(iParam0, 277, uParam2);
	func_582(iParam0, 282, uParam2);
	if (func_584(2, joaat("weapon_pistol")))
	{
		func_582(iParam0, 312, uParam2);
	}
	if (GlobalFunc_230(63))
	{
		func_582(iParam0, 314, uParam2);
	}
	func_582(iParam0, 313, uParam2);
	func_582(iParam0, 310, uParam2);
	func_582(iParam0, 311, uParam2);
	iVar1 = uVar0;
	while (iVar1 <= (*uParam3 - 1))
	{
		if ((*uParam2)[iVar1] == 0)
		{
			(*uParam2)[iVar1] = 318;
		}
		if ((*uParam2)[iVar1] != 318)
		{
			(*uParam3)[iVar1] = (fParam1 / SYSTEM::TO_FLOAT(*iParam0));
		}
		else
		{
			(*uParam3)[iVar1] = 0f;
		}
		iVar1++;
	}
	return 1;
}

int func_582(var uParam0, int iParam1, var uParam2)//Position - 0x76463
{
	if (*uParam0 >= *uParam2)
	{
		return 0;
	}
	(*uParam2)[*uParam0] = iParam1;
	*uParam0++;
	return 1;
}


int func_584(int iParam0, int iParam1)//Position - 0x7649D
{
	int iVar0;
	
	iVar0 = WEAPON::GET_WEAPONTYPE_SLOT(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iParam0 /*284*/][GlobalFunc_3268(iVar0) /*3*/] == iParam1)
	{
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iParam0 /*284*/][GlobalFunc_3268(iVar0) /*3*/].f_1 > 0)
		{
			return 1;
		}
	}
	return 0;
}


int func_586(int iParam0, int iParam1)//Position - 0x766EB
{
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_587(int iParam0, float fParam1, var uParam2, var uParam3)//Position - 0x7670C
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = *iParam0;
	iVar1 = GlobalFunc_8043();
	switch (iVar1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			func_582(iParam0, 239, uParam2);
			func_582(iParam0, 242, uParam2);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_582(iParam0, 246, uParam2);
			func_582(iParam0, 247, uParam2);
			func_582(iParam0, 248, uParam2);
			func_582(iParam0, 249, uParam2);
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			if (iVar1 == 18 || iVar1 == 19)
			{
				func_582(iParam0, 287, uParam2);
				func_582(iParam0, 287, uParam2);
			}
			else
			{
				func_582(iParam0, 254, uParam2);
				func_582(iParam0, 255, uParam2);
			}
			break;
	}
	func_582(iParam0, 243, uParam2);
	func_582(iParam0, 244, uParam2);
	func_582(iParam0, 256, uParam2);
	func_582(iParam0, 257, uParam2);
	func_582(iParam0, 259, uParam2);
	func_582(iParam0, 260, uParam2);
	func_582(iParam0, 261, uParam2);
	func_582(iParam0, 263, uParam2);
	if (!GlobalFunc_891(8))
	{
		func_582(iParam0, 264, uParam2);
	}
	func_582(iParam0, 266, uParam2);
	func_582(iParam0, 269, uParam2);
	func_582(iParam0, 271, uParam2);
	if (GlobalFunc_230(65))
	{
		if (GlobalFunc_103(4))
		{
			func_582(iParam0, 272, uParam2);
			func_582(iParam0, 290, uParam2);
		}
	}
	func_582(iParam0, 273, uParam2);
	func_582(iParam0, 275, uParam2);
	func_582(iParam0, 278, uParam2);
	func_582(iParam0, 279, uParam2);
	func_582(iParam0, 281, uParam2);
	func_582(iParam0, 283, uParam2);
	func_582(iParam0, 284, uParam2);
	func_582(iParam0, 285, uParam2);
	func_582(iParam0, 286, uParam2);
	func_582(iParam0, 288, uParam2);
	func_582(iParam0, 289, uParam2);
	if (!GlobalFunc_230(iLocal_39))
	{
		func_582(iParam0, 262, uParam2);
		func_582(iParam0, 292, uParam2);
		func_582(iParam0, 293, uParam2);
		func_582(iParam0, 294, uParam2);
		func_582(iParam0, 295, uParam2);
	}
	iVar2 = uVar0;
	while (iVar2 <= (*uParam3 - 1))
	{
		if ((*uParam2)[iVar2] == 0)
		{
			(*uParam2)[iVar2] = 318;
		}
		if ((*uParam2)[iVar2] != 318)
		{
			(*uParam3)[iVar2] = (fParam1 / SYSTEM::TO_FLOAT(*iParam0));
		}
		else
		{
			(*uParam3)[iVar2] = 0f;
		}
		iVar2++;
	}
	return 1;
}

int func_588(int iParam0, float fParam1, var uParam2, var uParam3, int iParam4)//Position - 0x76A21
{
	if (*iParam4 >= *uParam2)
	{
		return 0;
	}
	(*uParam2)[*iParam4] = iParam0;
	(*uParam3)[*iParam4] = fParam1;
	*iParam4++;
	return 1;
}

int func_589(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x76A51
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar67;
	
	iVar0 = 0;
	iVar1 = 2;
	iVar2 = 64;
	fVar67 = 64;
	if (!GlobalFunc_485(58))
	{
		if (!GlobalFunc_230(iLocal_39))
		{
			if (func_566(iVar1, uParam0, uParam1, uParam2, uParam3, 2, bParam4, 296, 297, 298, 318, 318, 318))
			{
				return func_565(iVar1, *uParam0, 2);
			}
		}
		if (!GlobalFunc_230(iLocal_39))
		{
			func_588(291, 20f, &iVar2, &fVar67, &iVar0);
		}
		func_587(&iVar0, 80f, &iVar2, &fVar67);
	}
	if (!GlobalFunc_485(59))
	{
		if (func_566(iVar1, uParam0, uParam1, uParam2, uParam3, 2, bParam4, 267, 270, 318, 318, 318, 318))
		{
			return func_565(iVar1, *uParam0, 2);
		}
		if (GlobalFunc_230(12) && !GlobalFunc_230(93))
		{
			if (!GlobalFunc_891(93) && !GlobalFunc_891(91))
			{
				func_588(305, 5f, &iVar2, &fVar67, &iVar0);
			}
		}
		if (GlobalFunc_892(0, 3))
		{
			if (!func_586(25, 2) && !func_586(26, 2))
			{
				if (func_584(2, joaat("weapon_sniperrifle")) || func_584(2, joaat("weapon_heavysniper")))
				{
					func_588(306, 5f, &iVar2, &fVar67, &iVar0);
					func_588(307, 5f, &iVar2, &fVar67, &iVar0);
					func_588(308, 5f, &iVar2, &fVar67, &iVar0);
				}
			}
		}
		if (GlobalFunc_466(2) == 2)
		{
			func_588(309, 10f, &iVar2, &fVar67, &iVar0);
		}
		func_588(315, 5f, &iVar2, &fVar67, &iVar0);
		func_588(316, 5f, &iVar2, &fVar67, &iVar0);
		func_581(&iVar0, 40f, &iVar2, &fVar67);
	}
	return func_531(iVar1, &iVar2, &fVar67, uParam0, uParam1, uParam2, uParam3, bParam4, 0);
}


int func_591(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x76C6D
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar75;
	
	iVar0 = 0;
	iVar1 = 2;
	iVar2 = 72;
	fVar75 = 72;
	if (!GlobalFunc_485(58))
	{
		if (!GlobalFunc_230(iLocal_39))
		{
			if (func_566(iVar1, uParam0, uParam1, uParam2, uParam3, 1, bParam4, 296, 297, 298, 318, 318, 318))
			{
				return func_565(iVar1, *uParam0, 1);
			}
		}
		if (!GlobalFunc_230(iLocal_39))
		{
			func_588(292, 7.5f, &iVar2, &fVar75, &iVar0);
			func_588(293, 7.5f, &iVar2, &fVar75, &iVar0);
			func_588(294, 7.5f, &iVar2, &fVar75, &iVar0);
			func_588(295, 7.5f, &iVar2, &fVar75, &iVar0);
			func_588(296, 1f, &iVar2, &fVar75, &iVar0);
			func_588(297, 1f, &iVar2, &fVar75, &iVar0);
			func_588(298, 1f, &iVar2, &fVar75, &iVar0);
		}
		func_588(235, 5f, &iVar2, &fVar75, &iVar0);
		if (!GlobalFunc_891(85))
		{
			func_588(236, (5f / 2f), &iVar2, &fVar75, &iVar0);
			func_588(237, (5f / 2f), &iVar2, &fVar75, &iVar0);
		}
		func_588(238, 5f, &iVar2, &fVar75, &iVar0);
		func_587(&iVar0, 50f, &iVar2, &fVar75);
	}
	if (!GlobalFunc_485(59))
	{
		if (func_566(iVar1, uParam0, uParam1, uParam2, uParam3, 1, bParam4, 267, 270, 318, 318, 318, 318))
		{
			return func_565(iVar1, *uParam0, 1);
		}
		func_588(304, 15f, &iVar2, &fVar75, &iVar0);
		func_588(245, 15f, &iVar2, &fVar75, &iVar0);
		if (GlobalFunc_230(12) && !GlobalFunc_230(93))
		{
			if (!GlobalFunc_891(93) && !GlobalFunc_891(91))
			{
				func_588(305, 5f, &iVar2, &fVar75, &iVar0);
			}
		}
		if (GlobalFunc_466(2) == 2)
		{
			func_588(309, 10f, &iVar2, &fVar75, &iVar0);
		}
		func_588(315, 5f, &iVar2, &fVar75, &iVar0);
		func_588(316, 5f, &iVar2, &fVar75, &iVar0);
		func_581(&iVar0, 30f, &iVar2, &fVar75);
	}
	return func_531(iVar1, &iVar2, &fVar75, uParam0, uParam1, uParam2, uParam3, bParam4, 0);
}

bool func_592(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x76EA2
{
	*uParam0 = 318;
	*uParam1 = -1f;
	if (!bParam4)
	{
		if (func_576(0, uParam0, uParam1, uParam2, uParam3))
		{
			return *uParam0 != 318;
		}
	}
	switch (GlobalFunc_8043())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			func_602(uParam0, uParam1, uParam2, uParam3, 494180/*func_603*/, bParam4);
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			func_597(uParam0, uParam1, uParam2, uParam3, 493137/*func_601*/, bParam4);
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_595(uParam0, uParam1, uParam2, uParam3, 490280/*func_596*/, bParam4);
			break;
		
		case 20:
		case 21:
		case 22:
		case 23:
			func_593(uParam0, uParam1, uParam2, uParam3, 488600/*func_594*/, bParam4);
			break;
	}
	return *uParam0 != 318;
}

bool func_593(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x76FCC
{
	int iVar0;
	int iVar1;
	int iVar2[12];
	float fVar15[12];
	int iVar28[10];
	float fVar39[10];
	int iVar50[11];
	float fVar62[11];
	int iVar74[9];
	float fVar84[9];
	
	iVar0 = 0;
	*uParam0 = 318;
	*uParam1 = -1f;
	iVar1 = GlobalFunc_5899();
	if (iVar1 == 0)
	{
		iVar2[0] = 91;
		fVar15[0] = 8f;
		iVar2[1] = 86;
		fVar15[1] = 14f;
		iVar2[2] = 103;
		fVar15[2] = 1f;
		iVar2[3] = 104;
		fVar15[3] = 1f;
		iVar2[4] = 112;
		fVar15[4] = 1f;
		iVar2[5] = 113;
		fVar15[5] = 1f;
		if (GlobalFunc_230(17))
		{
			iVar2[6] = 121;
			fVar15[6] = 8f;
		}
		else
		{
			iVar2[6] = 318;
			fVar15[6] = 0f;
		}
		iVar2[7] = 122;
		fVar15[7] = 10f;
		if (GlobalFunc_230(18) && !GlobalFunc_230(20))
		{
			iVar2[8] = 100;
			fVar15[8] = 21f;
		}
		else
		{
			iVar2[8] = 318;
			fVar15[8] = 0f;
		}
		iVar2[9] = 125;
		fVar15[9] = 7f;
		iVar2[10] = 140;
		fVar15[10] = (5f / 2f);
		iVar2[11] = 141;
		fVar15[11] = (5f / 2f);
		if (GlobalFunc_230(18) && !GlobalFunc_230(20))
		{
			if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 0, bParam5, 122, 100, 125, 318, 318, 318))
			{
				return func_565(iVar0, *uParam0, 0);
			}
		}
		else if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 0, bParam5, 122, 125, 318, 318, 318, 318))
		{
			return func_565(iVar0, *uParam0, 0);
		}
		if (func_531(iVar0, &iVar2, &fVar15, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 1)
	{
		iVar28[0] = 91;
		fVar39[0] = 4f;
		iVar28[1] = 92;
		fVar39[1] = 3f;
		iVar28[2] = 93;
		fVar39[2] = 3f;
		iVar28[3] = 103;
		fVar39[3] = 5f;
		iVar28[4] = 104;
		fVar39[4] = 5f;
		iVar28[5] = 112;
		fVar39[5] = 5f;
		iVar28[6] = 113;
		fVar39[6] = 5f;
		iVar28[7] = 123;
		fVar39[7] = 10f;
		iVar28[8] = 125;
		fVar39[8] = 10f;
		iVar28[9] = 124;
		fVar39[9] = 10f;
		if (func_531(iVar0, &iVar28, &fVar39, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 2)
	{
		iVar50[0] = 130;
		fVar62[0] = 20f;
		iVar50[1] = 131;
		fVar62[1] = 30f;
		iVar50[2] = 132;
		fVar62[2] = 30f;
		iVar50[3] = 135;
		fVar62[3] = 4f;
		iVar50[4] = 136;
		fVar62[4] = 4f;
		iVar50[5] = 137;
		fVar62[5] = 4f;
		iVar50[6] = 138;
		fVar62[6] = 4f;
		iVar50[7] = 139;
		fVar62[7] = 4f;
		iVar50[8] = 142;
		fVar62[8] = 5f;
		iVar50[9] = 143;
		fVar62[9] = 5f;
		iVar50[10] = 150;
		fVar62[10] = 20f;
		if (func_531(iVar0, &iVar50, &fVar62, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 3)
	{
		iVar74[0] = 151;
		fVar84[0] = 10f;
		if (GlobalFunc_230(iLocal_40))
		{
			iVar74[1] = 157;
			fVar84[1] = 20f;
		}
		else
		{
			iVar74[1] = 318;
			fVar84[1] = 0f;
		}
		iVar74[2] = 163;
		fVar84[2] = 10f;
		iVar74[3] = 165;
		fVar84[3] = 5f;
		iVar74[4] = 166;
		fVar84[4] = 5f;
		iVar74[5] = 167;
		fVar84[5] = 5f;
		iVar74[6] = 168;
		fVar84[6] = 15f;
		iVar74[7] = 169;
		fVar84[7] = 15f;
		iVar74[8] = 158;
		fVar84[8] = 15f;
		if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 0, bParam5, 165, 156, 168, 318, 318, 318))
		{
			return func_565(iVar0, *uParam0, 0);
		}
		if (func_531(iVar0, &iVar74, &fVar84, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	*uParam0 = 318;
	*uParam1 = -1f;
	return *uParam0 != 318;
}

bool func_594(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x77498
{
	return func_602(uParam0, uParam1, uParam2, uParam3, 472155/*func_569*/, bParam4);
}

bool func_595(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x774B2
{
	int iVar0;
	int iVar1;
	int iVar2[16];
	float fVar19[16];
	int iVar36[25];
	float fVar62[25];
	int iVar88[13];
	float fVar102[13];
	int iVar116[19];
	float fVar136[19];
	
	iVar0 = 0;
	*uParam0 = 318;
	*uParam1 = -1f;
	iVar1 = GlobalFunc_5899();
	if (iVar1 == 0)
	{
		iVar2[0] = 103;
		fVar19[0] = 9f;
		iVar2[1] = 104;
		fVar19[1] = 5f;
		iVar2[2] = 105;
		fVar19[2] = 7f;
		iVar2[3] = 106;
		fVar19[3] = 9f;
		iVar2[4] = 107;
		fVar19[4] = 7f;
		iVar2[5] = 108;
		fVar19[5] = 5f;
		iVar2[6] = 109;
		fVar19[6] = 1f;
		iVar2[7] = 110;
		fVar19[7] = 5f;
		iVar2[8] = 111;
		fVar19[8] = 5f;
		iVar2[9] = 112;
		fVar19[9] = 5f;
		iVar2[10] = 113;
		fVar19[10] = 5f;
		if (GlobalFunc_230(17))
		{
			iVar2[11] = 121;
			fVar19[11] = 10f;
		}
		else
		{
			iVar2[11] = 318;
			fVar19[11] = 0f;
		}
		iVar2[12] = 122;
		fVar19[12] = 16f;
		iVar2[13] = 94;
		fVar19[13] = 5f;
		iVar2[14] = 140;
		fVar19[14] = (2f / 2f);
		iVar2[15] = 141;
		fVar19[15] = (2f / 2f);
		if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 3, bParam5, 122, 94, 318, 318, 318, 318))
		{
			return func_565(iVar0, *uParam0, 3);
		}
		if (func_531(iVar0, &iVar2, &fVar19, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 1)
	{
		iVar36[0] = 82;
		fVar62[0] = 10f;
		iVar36[1] = 83;
		fVar62[1] = 10.5f;
		iVar36[2] = 91;
		fVar62[2] = 3f;
		iVar36[3] = 92;
		fVar62[3] = 3f;
		iVar36[4] = 93;
		fVar62[4] = 3f;
		iVar36[5] = 103;
		fVar62[5] = 3f;
		iVar36[6] = 104;
		fVar62[6] = 3f;
		iVar36[7] = 105;
		fVar62[7] = 3f;
		iVar36[8] = 106;
		fVar62[8] = 3f;
		iVar36[9] = 107;
		fVar62[9] = 4f;
		iVar36[10] = 108;
		fVar62[10] = 1.5f;
		iVar36[11] = 109;
		fVar62[11] = 1f;
		iVar36[12] = 110;
		fVar62[12] = 1f;
		iVar36[13] = 111;
		fVar62[13] = 1f;
		iVar36[14] = 112;
		fVar62[14] = 1.5f;
		iVar36[15] = 113;
		fVar62[15] = 1.5f;
		iVar36[16] = 115;
		fVar62[16] = 4f;
		iVar36[17] = 116;
		fVar62[17] = 3f;
		iVar36[18] = 117;
		fVar62[18] = 3f;
		iVar36[19] = 123;
		fVar62[19] = 4f;
		iVar36[20] = 95;
		fVar62[20] = 2.5f;
		iVar36[21] = 96;
		fVar62[21] = 2.5f;
		iVar36[22] = 97;
		fVar62[22] = 5f;
		iVar36[23] = 125;
		fVar62[23] = 8f;
		iVar36[23] = 124;
		fVar62[23] = 8f;
		if (func_531(iVar0, &iVar36, &fVar62, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 2)
	{
		iVar88[0] = 130;
		fVar102[0] = 20f;
		iVar88[1] = 131;
		fVar102[2] = 15f;
		iVar88[2] = 132;
		fVar102[2] = 15f;
		iVar88[3] = 133;
		fVar102[3] = 20f;
		iVar88[4] = 134;
		fVar102[4] = 15f;
		iVar88[5] = 135;
		fVar102[5] = 4f;
		iVar88[6] = 136;
		fVar102[6] = 4f;
		iVar88[7] = 137;
		fVar102[7] = 4f;
		iVar88[8] = 138;
		fVar102[8] = 4f;
		iVar88[9] = 139;
		fVar102[9] = 4f;
		iVar88[10] = 148;
		fVar102[10] = 1.5f;
		iVar88[11] = 149;
		fVar102[11] = 1.5f;
		iVar88[12] = 150;
		fVar102[12] = 7.5f;
		if (func_531(iVar0, &iVar88, &fVar102, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 3)
	{
		iVar116[0] = 151;
		fVar136[0] = 10f;
		iVar116[3] = 164;
		fVar136[3] = 5f;
		iVar116[4] = 165;
		fVar136[4] = 5f;
		iVar116[5] = 166;
		fVar136[5] = 5f;
		iVar116[6] = 167;
		fVar136[6] = 5f;
		iVar116[7] = 168;
		fVar136[7] = 5f;
		iVar116[8] = 169;
		fVar136[8] = 5f;
		iVar116[9] = 170;
		fVar136[9] = 5f;
		iVar116[10] = 171;
		fVar136[10] = 5f;
		iVar116[11] = 172;
		fVar136[11] = 5f;
		if (GlobalFunc_230(iLocal_40))
		{
			iVar116[1] = 153;
			fVar136[1] = (5f / 2f);
			iVar116[2] = 154;
			fVar136[2] = (5f / 2f);
			iVar116[12] = 157;
			fVar136[12] = 5f;
		}
		else
		{
			iVar116[1] = 318;
			fVar136[1] = 0f;
			iVar116[2] = 318;
			fVar136[2] = 0f;
			iVar116[12] = 318;
			fVar136[12] = 0f;
		}
		iVar116[13] = 152;
		fVar136[13] = 10f;
		iVar116[14] = 173;
		fVar136[14] = 5f;
		iVar116[15] = 156;
		fVar136[15] = 10f;
		iVar116[16] = 161;
		fVar136[16] = 5f;
		iVar116[17] = 155;
		fVar136[17] = 5f;
		if (GlobalFunc_230(iLocal_40))
		{
			if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 3, bParam5, 170, 171, 172, 168, 318, 318))
			{
				return func_565(iVar0, *uParam0, 3);
			}
		}
		else if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 3, bParam5, 170, 171, 172, 156, 318, 318))
		{
			return func_565(iVar0, *uParam0, 3);
		}
		if (func_531(iVar0, &iVar116, &fVar136, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	*uParam0 = 318;
	*uParam1 = -1f;
	return *uParam0 != 318;
}

bool func_596(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x77B28
{
	return func_593(uParam0, uParam1, uParam2, uParam3, 472155/*func_569*/, bParam4);
}

bool func_597(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x77B42
{
	int iVar0;
	int iVar1;
	int iVar2[30];
	float fVar33[30];
	int iVar64[23];
	float fVar88[23];
	int iVar112[14];
	float fVar127[14];
	int iVar142[12];
	float fVar155[12];
	
	iVar0 = 0;
	*uParam0 = 318;
	*uParam1 = -1f;
	iVar1 = GlobalFunc_5899();
	if (iVar1 == 0)
	{
		iVar2[0] = 87;
		fVar33[0] = 1.5f;
		iVar2[1] = 88;
		fVar33[1] = 1.5f;
		if (GlobalFunc_892(0, 2))
		{
			iVar2[2] = 81;
			fVar33[2] = 2f;
		}
		else
		{
			iVar2[2] = 318;
			fVar33[2] = 0f;
		}
		iVar2[3] = 103;
		fVar33[3] = 1f;
		iVar2[4] = 104;
		fVar33[4] = 1f;
		iVar2[5] = 105;
		fVar33[5] = 1f;
		iVar2[6] = 106;
		fVar33[6] = 1f;
		iVar2[7] = 107;
		fVar33[7] = 1f;
		iVar2[8] = 108;
		fVar33[8] = 2f;
		iVar2[9] = 109;
		fVar33[9] = 1f;
		iVar2[10] = 98;
		fVar33[10] = 10.5f;
		if (GlobalFunc_230(18))
		{
			if (!GlobalFunc_230(20))
			{
				iVar2[11] = 99;
				fVar33[11] = 10.5f;
			}
			else
			{
				iVar2[11] = 318;
				fVar33[11] = 0f;
			}
			iVar2[12] = 101;
			fVar33[12] = 10.5f;
			iVar2[13] = 102;
			fVar33[13] = 10.5f;
		}
		else
		{
			iVar2[11] = 318;
			fVar33[11] = 0f;
			iVar2[12] = 318;
			fVar33[12] = 0f;
			iVar2[13] = 318;
			fVar33[13] = 0f;
		}
		iVar2[14] = 110;
		fVar33[14] = 3f;
		iVar2[15] = 111;
		fVar33[15] = 2f;
		iVar2[16] = 115;
		fVar33[16] = 1f;
		iVar2[17] = 116;
		fVar33[17] = 1f;
		iVar2[18] = 117;
		fVar33[18] = 1f;
		if (GlobalFunc_230(19))
		{
			iVar2[19] = 118;
			fVar33[19] = 2f;
			iVar2[20] = 119;
			fVar33[20] = 2f;
			iVar2[21] = 120;
			fVar33[21] = 2f;
		}
		else
		{
			iVar2[19] = 318;
			fVar33[19] = 0f;
			iVar2[20] = 318;
			fVar33[20] = 0f;
			iVar2[21] = 318;
			fVar33[21] = 0f;
		}
		iVar2[22] = 94;
		fVar33[22] = 10f;
		iVar2[24] = 114;
		fVar33[24] = 5f;
		if (GlobalFunc_230(17))
		{
			iVar2[25] = 121;
			fVar33[25] = 1f;
		}
		else
		{
			iVar2[25] = 318;
			fVar33[25] = 0f;
		}
		iVar2[26] = 122;
		fVar33[26] = 5f;
		iVar2[27] = 140;
		fVar33[27] = (2f / 2f);
		iVar2[28] = 141;
		fVar33[28] = (2f / 2f);
		iVar2[29] = 80;
		fVar33[29] = 10f;
		if (GlobalFunc_230(18))
		{
			if (!GlobalFunc_230(20))
			{
				if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 98, 99, 101, 102, 122, 318))
				{
					return func_565(iVar0, *uParam0, 2);
				}
			}
			else if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 98, 101, 102, 122, 318, 318))
			{
				return func_565(iVar0, *uParam0, 2);
			}
		}
		else if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 98, 122, 318, 318, 318, 318))
		{
			return func_565(iVar0, *uParam0, 2);
		}
		if (func_531(iVar0, &iVar2, &fVar33, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 1)
	{
		iVar64[0] = 82;
		fVar88[0] = 10.5f;
		iVar64[1] = 83;
		fVar88[1] = 10.5f;
		iVar64[2] = 87;
		fVar88[2] = 5f;
		iVar64[3] = 88;
		fVar88[3] = 5f;
		iVar64[4] = 91;
		fVar88[4] = 2.5f;
		iVar64[5] = 92;
		fVar88[5] = 2.5f;
		iVar64[6] = 103;
		fVar88[6] = 2.5f;
		iVar64[7] = 104;
		fVar88[7] = 2.5f;
		iVar64[8] = 105;
		fVar88[8] = 2f;
		iVar64[9] = 106;
		fVar88[9] = 2f;
		iVar64[10] = 107;
		fVar88[10] = 2f;
		iVar64[11] = 108;
		fVar88[11] = 2f;
		iVar64[12] = 109;
		fVar88[12] = 1f;
		iVar64[13] = 110;
		fVar88[13] = 2f;
		iVar64[14] = 112;
		fVar88[14] = 2f;
		iVar64[15] = 113;
		fVar88[15] = 2f;
		iVar64[16] = 115;
		fVar88[16] = 3f;
		iVar64[17] = 116;
		fVar88[17] = 3f;
		iVar64[18] = 117;
		fVar88[18] = 2f;
		iVar64[19] = 95;
		fVar88[19] = 10f;
		iVar64[20] = 96;
		fVar88[20] = 5f;
		iVar64[21] = 97;
		fVar88[21] = 10f;
		iVar64[22] = 124;
		fVar88[22] = 10f;
		if (func_531(iVar0, &iVar64, &fVar88, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 2)
	{
		iVar112[0] = 129;
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2708[0 /*166*/][12 /*11*/][(32 / 32)], (32 % 32)))
		{
			fVar127[0] = (20f * 2f);
		}
		else
		{
			fVar127[0] = 20f;
		}
		iVar112[1] = 131;
		fVar127[1] = 20f;
		iVar112[2] = 132;
		fVar127[2] = 20f;
		iVar112[3] = 133;
		fVar127[3] = 15f;
		iVar112[4] = 134;
		fVar127[4] = 15f;
		iVar112[5] = 135;
		fVar127[5] = 3f;
		iVar112[6] = 136;
		fVar127[6] = 3f;
		iVar112[7] = 137;
		fVar127[7] = 3f;
		iVar112[8] = 138;
		fVar127[8] = 3f;
		iVar112[9] = 139;
		fVar127[9] = 3f;
		iVar112[10] = 146;
		fVar127[10] = 1.5f;
		iVar112[11] = 147;
		fVar127[11] = 1.5f;
		iVar112[12] = 84;
		fVar127[12] = 2.5f;
		iVar112[13] = 150;
		fVar127[13] = 15f;
		if (func_531(iVar0, &iVar112, &fVar127, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 3)
	{
		iVar142[0] = 151;
		fVar155[0] = 10f;
		iVar142[1] = 162;
		fVar155[1] = 15f;
		iVar142[2] = 164;
		fVar155[2] = 15f;
		iVar142[3] = 170;
		fVar155[3] = 3.33f;
		iVar142[4] = 171;
		fVar155[4] = 3.33f;
		iVar142[5] = 172;
		fVar155[5] = 3.33f;
		iVar142[6] = 153;
		fVar155[6] = (5f / 2f);
		iVar142[7] = 154;
		fVar155[7] = (5f / 2f);
		if (GlobalFunc_8899(0))
		{
			iVar142[8] = 159;
			fVar155[8] = 10f;
		}
		else
		{
			iVar142[8] = 318;
			fVar155[8] = 0f;
		}
		iVar142[9] = 160;
		fVar155[9] = 10f;
		iVar142[10] = 161;
		fVar155[10] = 10f;
		iVar142[11] = 155;
		fVar155[11] = 15f;
		if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 2, bParam5, 153, 154, 161, 155, 156, 168))
		{
			return func_565(iVar0, *uParam0, 2);
		}
		if (func_531(iVar0, &iVar142, &fVar155, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	*uParam0 = 318;
	*uParam1 = -1f;
	return *uParam0 != 318;
}




bool func_601(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x78651
{
	return func_595(uParam0, uParam1, uParam2, uParam3, 472155/*func_569*/, bParam4);
}

bool func_602(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)//Position - 0x7866B
{
	int iVar0;
	int iVar1;
	int iVar2[10];
	float fVar13[10];
	int iVar24[9];
	float fVar34[9];
	int iVar44[11];
	float fVar56[11];
	int iVar68[5];
	float fVar74[5];
	
	iVar0 = 0;
	*uParam0 = 318;
	*uParam1 = -1f;
	iVar1 = GlobalFunc_5899();
	if (iVar1 == 0)
	{
		iVar2[0] = 77;
		fVar13[0] = 25f;
		iVar2[1] = 78;
		fVar13[1] = 25f;
		iVar2[2] = 89;
		fVar13[2] = 7f;
		iVar2[3] = 90;
		fVar13[3] = 3f;
		iVar2[4] = 85;
		fVar13[4] = 15f;
		iVar2[5] = 79;
		fVar13[5] = 12f;
		iVar2[6] = 140;
		fVar13[6] = (2f / 2f);
		iVar2[7] = 141;
		fVar13[7] = (2f / 2f);
		if (GlobalFunc_8043() > 4)
		{
			iVar2[8] = 108;
			fVar13[8] = 2f;
			iVar2[9] = 109;
			fVar13[9] = 1f;
		}
		else
		{
			iVar2[8] = 318;
			fVar13[8] = 0f;
			iVar2[9] = 318;
			fVar13[9] = 0f;
		}
		if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 1, bParam5, 318, 318, 318, 318, 318, 318))
		{
			return func_565(iVar0, *uParam0, 1);
		}
		if (func_531(iVar0, &iVar2, &fVar13, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 1)
	{
		iVar24[0] = 82;
		fVar34[0] = 30f;
		iVar24[1] = 83;
		fVar34[1] = 30f;
		iVar24[2] = 85;
		fVar34[2] = 30f;
		iVar24[3] = 91;
		fVar34[3] = 3f;
		iVar24[4] = 92;
		fVar34[4] = 3f;
		iVar24[5] = 93;
		fVar34[5] = 3f;
		iVar24[6] = 112;
		fVar34[6] = 3f;
		iVar24[7] = 113;
		fVar34[7] = 3f;
		iVar24[8] = 124;
		fVar34[8] = 3f;
		if (func_531(iVar0, &iVar24, &fVar34, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 2)
	{
		iVar44[0] = 126;
		fVar56[0] = 20f;
		iVar44[1] = 127;
		fVar56[1] = 10f;
		iVar44[2] = 135;
		fVar56[2] = 2f;
		iVar44[3] = 136;
		fVar56[3] = 2f;
		iVar44[4] = 137;
		fVar56[4] = 2f;
		iVar44[5] = 138;
		fVar56[5] = 2f;
		iVar44[6] = 139;
		fVar56[6] = 2f;
		iVar44[7] = 128;
		fVar56[7] = 10f;
		iVar44[8] = 144;
		fVar56[8] = 2.5f;
		iVar44[9] = 145;
		fVar56[9] = 2.5f;
		iVar44[10] = 150;
		fVar56[10] = 10f;
		if (func_531(iVar0, &iVar44, &fVar56, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	if (iVar1 == 3)
	{
		iVar68[0] = 85;
		fVar74[0] = 15f;
		iVar68[1] = 163;
		fVar74[1] = 25f;
		iVar68[2] = 169;
		fVar74[2] = 20f;
		iVar68[3] = 168;
		fVar74[3] = 20f;
		iVar68[4] = 158;
		fVar74[4] = 20f;
		if (func_566(iVar0, uParam0, uParam1, uParam2, uParam3, 1, bParam5, 169, 168, 318, 318, 318, 318))
		{
			return func_565(iVar0, *uParam0, 1);
		}
		if (func_531(iVar0, &iVar68, &fVar74, uParam0, uParam1, uParam2, uParam3, bParam5, 0))
		{
			return *uParam0 != 318;
		}
		else
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(uParam3);
			Stack.Push(bParam5);
			Call_Loc(iParam4);
			return StackVal;
		}
	}
	*uParam0 = 318;
	*uParam1 = -1f;
	return *uParam0 != 318;
}

bool func_603(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x78A64
{
	return func_597(uParam0, uParam1, uParam2, uParam3, 472155/*func_569*/, bParam4);
}

int func_604(int iParam0)//Position - 0x78A7E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_89503[iParam0 /*74*/] == joaat("blimp") || Global_89503[iParam0 /*74*/] == joaat("blimp2"))
	{
		switch (iParam0)
		{
			case 0:
				if (Global_89503[1 /*74*/] == joaat("blimp") || Global_89503[1 /*74*/] == joaat("blimp2"))
				{
					iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[1];
					if (GlobalFunc_6710(iVar0))
					{
						if (!GlobalFunc_537(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[1 /*3*/], 0f, 0f, 0f, 1.5f))
						{
							if (!GlobalFunc_10380(iVar0, 3))
							{
								return 0;
							}
						}
					}
				}
				if (Global_89503[2 /*74*/] == joaat("blimp") || Global_89503[2 /*74*/] == joaat("blimp2"))
				{
					iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[2];
					if (GlobalFunc_6710(iVar0))
					{
						if (!GlobalFunc_537(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[2 /*3*/], 0f, 0f, 0f, 1.5f))
						{
							if (!GlobalFunc_10380(iVar0, 3))
							{
								return 0;
							}
						}
					}
				}
				break;
			
			case 1:
				if (Global_89503[0 /*74*/] == joaat("blimp") || Global_89503[0 /*74*/] == joaat("blimp2"))
				{
					iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[0];
					if (GlobalFunc_6710(iVar0))
					{
						if (!GlobalFunc_537(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[0 /*3*/], 0f, 0f, 0f, 1.5f))
						{
							if (!GlobalFunc_10380(iVar0, 3))
							{
								return 0;
							}
						}
					}
				}
				if (Global_89503[2 /*74*/] == joaat("blimp") || Global_89503[2 /*74*/] == joaat("blimp2"))
				{
					iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[2];
					if (GlobalFunc_6710(iVar0))
					{
						if (!GlobalFunc_537(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[2 /*3*/], 0f, 0f, 0f, 1.5f))
						{
							if (!GlobalFunc_10380(iVar0, 3))
							{
								return 0;
							}
						}
					}
				}
				break;
			
			case 2:
				if (Global_89503[0 /*74*/] == joaat("blimp") || Global_89503[0 /*74*/] == joaat("blimp2"))
				{
					iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[0];
					if (GlobalFunc_6710(iVar0))
					{
						if (!GlobalFunc_537(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[0 /*3*/], 0f, 0f, 0f, 1.5f))
						{
							if (!GlobalFunc_10380(iVar0, 3))
							{
								return 0;
							}
						}
					}
				}
				if (Global_89503[1 /*74*/] == joaat("blimp") || Global_89503[1 /*74*/] == joaat("blimp2"))
				{
					iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[1];
					if (GlobalFunc_6710(iVar0))
					{
						if (!GlobalFunc_537(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[1 /*3*/], 0f, 0f, 0f, 1.5f))
						{
							if (!GlobalFunc_10380(iVar0, 3))
							{
								return 0;
							}
						}
					}
				}
				break;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == joaat("blimp") || iVar2 == joaat("blimp2"))
			{
				return 0;
			}
		}
	}
	return 1;
}


bool func_606(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x78E34
{
	switch (iParam0)
	{
		case 0:
			func_592(uParam2, uParam3, uParam4, uParam5, 0);
			break;
		
		case 1:
			func_529(uParam2, uParam3, uParam4, uParam5, 0);
			break;
		
		case 2:
			func_579(uParam2, uParam3, uParam4, uParam5, 0);
			break;
		
		default:
			iParam1 = iParam1;
			return 0;
			break;
	}
	return *uParam2 != 318;
}

int func_607(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0x78E9A
{
	if (Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] == iParam1)
	{
		if (!GlobalFunc_10380(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0], SYSTEM::ROUND((SYSTEM::TO_FLOAT(1) * fParam6))))
		{
			*uParam3 = 100f;
			*uParam2 = iParam1;
			return *uParam2 != 318;
		}
		GlobalFunc_17(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0]));
		Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam0] = 318;
		return *uParam2 != 318;
	}
	*uParam2 = 318;
	*uParam3 = -1f;
	uParam4->f_2 = uParam4->f_2;
	uParam5->f_111 = uParam5->f_111;
	return 0;
}








void func_615()//Position - 0x79073
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (Global_87845.f_44 == 1)
	{
		iLocal_64 = 2;
	}
	if (Global_17098)
	{
		if (!iLocal_68)
		{
			iLocal_68 = 1;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!GlobalFunc_8633(iVar0))
				{
					iVar1 = GlobalFunc_4917(iVar0);
					STREAMING::REQUEST_MODEL(iVar1);
					if (STREAMING::HAS_MODEL_LOADED(iVar1))
					{
					}
					else
					{
						iLocal_68 = 0;
					}
				}
				iVar0++;
			}
		}
	}
	else if (iLocal_68)
	{
		iLocal_68 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (!GlobalFunc_8633(iVar2))
			{
				iVar3 = GlobalFunc_4917(iVar2);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
			}
			iVar2++;
		}
	}
}

void func_616()//Position - 0x7910B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	struct<3> Var16;
	float fVar19;
	int iVar20;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) > 0)
	{
		return;
	}
	if (Global_2)
	{
		return;
	}
	if (Global_68246 && !GlobalFunc_2(0))
	{
		bVar0 = false;
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[27 /*3*/], 1))
		{
			bVar0 = true;
			iVar1 = 0;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 5295.47f, -5207.442f, 81.7308f, 1, 0, 0, 1);
			}
		}
		else if (!GlobalFunc_230(53))
		{
			bVar0 = true;
			iVar1 = 0;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 5295.47f, -5207.442f, 81.7308f, 1, 0, 0, 1);
			}
		}
		else
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				if (!bVar0)
				{
					iVar3 = Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar2 /*3*/].f_1;
					if (iVar3 != -1)
					{
						if (Global_68514.f_6825[iVar3 /*3*/] == -868169264)
						{
							bVar0 = true;
							iVar4 = Global_68514.f_109[Global_68514.f_6825[iVar3 /*3*/].f_2 /*4*/];
							if (MISC::IS_BIT_SET(Global_81155[iVar4 /*34*/].f_11, 0))
							{
								iVar1 = 0;
							}
							else if (MISC::IS_BIT_SET(Global_81155[iVar4 /*34*/].f_11, 1))
							{
								iVar1 = 1;
							}
							else if (MISC::IS_BIT_SET(Global_81155[iVar4 /*34*/].f_11, 2))
							{
								iVar1 = 2;
							}
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								switch (iVar4)
								{
									case 53:
										ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 5295.47f, -5207.442f, 81.7308f, 1, 0, 0, 1);
										break;
									
									case 0:
										ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1890.646f, -598.3062f, 10.8933f, 1, 0, 0, 1);
										break;
									
									case 90:
										ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 702.9835f, -984.5344f, 23.0969f, 1, 0, 0, 1);
										break;
									}
								}
							}
						}
				}
				iVar2++;
			}
		}
		if (bVar0 && !GlobalFunc_2(0))
		{
			STREAMING::STOP_PLAYER_SWITCH();
			GlobalFunc_749(0);
			GlobalFunc_7850(0, 1);
			GlobalFunc_748(0);
			HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			GlobalFunc_1639(0);
			if (GlobalFunc_8315() != iVar1)
			{
				while (!func_621(GlobalFunc_237(iVar1), 1))
				{
					SYSTEM::WAIT(0);
				}
			}
			iVar5 = 0;
			while (iVar5 < 4)
			{
				if (GlobalFunc_584(iVar5) != iVar1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_87845[iVar5]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_87845[iVar5], 0, 1);
						PED::DELETE_PED(&(Global_87845[iVar5]));
					}
				}
				iVar5++;
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			bVar0 = false;
			Global_87845.f_46 = 0;
			Global_87845.f_44 = 0;
			iLocal_64 = 1;
			return;
		}
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			}
			else
			{
				iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar6))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar6))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar6, 1);
					}
				}
			}
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::REVIVE_INJURED_PED(PLAYER::PLAYER_PED_ID());
			}
		}
		GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
		if (Global_68508 == 46)
		{
			GlobalFunc_2448(0);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			GRAPHICS::_RESET_EXTRA_TIMECYCLE_MODIFIER_STRENGTH();
			iLocal_67 = 1;
		}
		GlobalFunc_5493(&Local_69, 0);
		iLocal_66 = 1;
		iLocal_65 = 1;
		bVar7 = false;
		iVar9 = 0;
		while (iVar9 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
		{
			if (!bVar7)
			{
				if (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar9 /*15*/].Priority == 5)
				{
					if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar9 /*15*/].Player_Char_Bitset, 0))
					{
						Global_87845.f_45 = 0;
						bVar7 = true;
					}
					else if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar9 /*15*/].Player_Char_Bitset, 1))
					{
						Global_87845.f_45 = 1;
						bVar7 = true;
					}
					else if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar9 /*15*/].Player_Char_Bitset, 2))
					{
						Global_87845.f_45 = 2;
						bVar7 = true;
					}
				}
			}
			iVar9++;
		}
		if (!bVar7)
		{
			if (Global_68508 != -1)
			{
				iVar8 = 0;
				while (iVar8 < 3)
				{
					if (!bVar7)
					{
						iVar10 = iVar8;
						if (GlobalFunc_5141(iVar10))
						{
							if (!MISC::IS_BIT_SET(Global_81155[Global_68508 /*34*/].f_11, iVar8))
							{
								Global_87845.f_45 = iVar10;
								bVar7 = true;
							}
						}
					}
					iVar8++;
				}
			}
		}
		iVar11 = GlobalFunc_624();
		if (Global_1312466 == -1)
		{
		}
		else if (MISC::GET_GAME_TIMER() > (Global_1312466 + 120000))
		{
		}
		else if (!bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 3)
			{
				if (!bVar7)
				{
					iVar12 = iVar8;
					if (GlobalFunc_5141(iVar12))
					{
						if (iVar12 != iVar11)
						{
							Global_87845.f_45 = iVar12;
							bVar7 = true;
						}
					}
				}
				iVar8++;
			}
		}
		if ((!bVar7 || !GlobalFunc_42(Global_87845.f_45)) || !GlobalFunc_5141(Global_87845.f_45))
		{
			Global_87845.f_45 = iVar11;
			bVar7 = true;
		}
		if (Global_87845.f_44 != 1)
		{
			Global_87845.f_46 = 0;
			Global_87845.f_44 = 1;
		}
		PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 0, 0);
		Global_87756 = 1;
		iLocal_64 = 2;
	}
	if (!GlobalFunc_236())
	{
		if (Global_87845.f_44 == 2)
		{
			Global_87845.f_46 = 0;
			Global_87845.f_44 = 0;
		}
		if (Global_87845.f_44 != 0)
		{
			Global_87845.f_46 = 0;
			Global_87845.f_44 = 0;
		}
		iLocal_64 = 1;
	}
	if (Global_87845.f_46 != 0)
	{
		Global_87845.f_46 = 0;
	}
	if (iLocal_64 == 0)
	{
		if (Global_87845.f_44 == 2)
		{
			Global_87845.f_46 = 0;
			Global_87845.f_44 = 0;
		}
		if (Global_87845.f_44 == 1)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("maintransition")) > 0)
			{
				iVar13 = MISC::GET_GAME_TIMER() + 10000;
				while (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("maintransition")) > 0 && MISC::GET_GAME_TIMER() < iVar13)
				{
					SYSTEM::WAIT(0);
				}
			}
			HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			iVar14 = GlobalFunc_8315();
			bVar15 = false;
			iVar13 = MISC::GET_GAME_TIMER() + 10000;
			while (!bVar15 && MISC::GET_GAME_TIMER() < iVar13)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (GlobalFunc_42(iVar14))
					{
						Var16 = { -1234.7f, -1135.56f, 6.81f };
						fVar19 = 135f;
						iVar20 = GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), GlobalFunc_8315(), 1);
						if (iVar20 != 10)
						{
							Var16 = { Global_85405[iVar20 /*10*/].f_3 };
							fVar19 = Global_85405[iVar20 /*10*/].f_6;
						}
						func_617(Var16, fVar19, 0, 12000, 1123680256, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						bVar15 = true;
					}
				}
				SYSTEM::WAIT(0);
			}
			GlobalFunc_749(0);
			GlobalFunc_7850(0, 1);
			GlobalFunc_748(0);
			GlobalFunc_1639(0);
			CAM::DO_SCREEN_FADE_IN(2500);
			Global_87845.f_46 = 0;
			Global_87845.f_44 = 0;
			iLocal_64 = 1;
		}
		if (Global_87845.f_44 != 0)
		{
			Global_87845.f_46 = 0;
			Global_87845.f_44 = 0;
		}
		iLocal_64 = 1;
	}
}

void func_617(struct<3> Param0, float fParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x797DF
{
	int iVar0;
	
	if (bParam4)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
		}
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		STREAMING::SET_FOCUS_POS_AND_VEL(Param0, 0f, 0f, 0f);
		iVar0 = (MISC::GET_GAME_TIMER() + iParam5);
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, iParam6, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && MISC::GET_GAME_TIMER() < iVar0)
		{
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!bParam7)
			{
				Param0.f_2 = (Param0.f_2 + 1f);
				MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2));
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
			if (fParam3 != -1f)
			{
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
		STREAMING::CLEAR_FOCUS();
		STREAMING::NEW_LOAD_SCENE_STOP();
		MISC::CLEAR_AREA(Param0, 5000f, 1, 0, 0, 0);
		PED::INSTANTLY_FILL_PED_POPULATION();
		VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (bParam4)
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
}




int func_621(int iParam0, bool bParam1)//Position - 0x79937
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	Global_17098.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = GlobalFunc_584(iParam0);
	iVar1 = GlobalFunc_4917(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_624(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_193(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_7(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_624(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x79AEF
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				GlobalFunc_8645(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				GlobalFunc_11322(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				GlobalFunc_11335(*uParam0, bParam6);
				GlobalFunc_516(*uParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}





void func_629()//Position - 0x79DC9
{
	int iVar0;
	int iVar1;
	
	if (Global_87845.f_44 == 1)
	{
	}
	if (Global_87845.f_46 != 0)
	{
	}
	if (iLocal_68)
	{
		iLocal_68 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!GlobalFunc_8633(iVar0))
			{
				iVar1 = GlobalFunc_4917(iVar0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
			}
			iVar0++;
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

