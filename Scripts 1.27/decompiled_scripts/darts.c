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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_33 = 0f;
	struct<3> Local_34 = { 0, 0, 0 } ;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	struct<9> Local_37 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_38 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_39 = { 0, 0, 0 } ;
	struct<3> Local_40 = { 0, 0, 0 } ;
	struct<3> Local_41 = { 0, 0, 0 } ;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	char* sLocal_56 = NULL;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
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
	bool bLocal_87 = 0;
	float fLocal_88 = 0f;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	int iLocal_105[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_106 = 0;
	struct<68> Local_107 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 8;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 2;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 8;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 8;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	float fLocal_154 = 0f;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	struct<3> Local_160 = { 0, 0, 0 } ;
	var uLocal_161[2] = { 0, 0 };
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	bool bLocal_169 = 0;
	bool bLocal_170 = 0;
	bool bLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	bool bLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	bool bLocal_177 = 0;
	bool bLocal_178 = 0;
	bool bLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	bool bLocal_184 = 0;
	var uLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	var uLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	int iLocal_198 = 0;
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
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	struct<3> Local_230 = { 0, 0, 0 } ;
	struct<3> Local_231 = { 0, 0, 0 } ;
	struct<3> Local_232 = { 0, 0, 0 } ;
	struct<3> Local_233 = { 0, 0, 0 } ;
	struct<3> Local_234 = { 0, 0, 0 } ;
	struct<3> Local_235 = { 0, 0, 0 } ;
	float fLocal_236 = 0f;
	float fLocal_237 = 0f;
	float fLocal_238 = 0f;
	float fLocal_239 = 0f;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	char* sLocal_242 = NULL;
	char* sLocal_243 = NULL;
	int iLocal_244 = 0;
	char* sLocal_245 = NULL;
	char* sLocal_246 = NULL;
	char* sLocal_247[3] = { NULL, NULL, NULL };
	char* sLocal_248[3] = { NULL, NULL, NULL };
	char* sLocal_249[3] = { NULL, NULL, NULL };
	char* sLocal_250[3] = { NULL, NULL, NULL };
	struct<5> Local_251 = { 0, 0, 0, 0, 0 } ;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<460> Var0;
	int iVar1;
	struct<4> Var2;
	struct<3> Var3;
	struct<25> Var4;
	struct<682> Var5;
	struct<532> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	struct<3> Var17;
	struct<3> Var18;
	struct<3> Var19;
	struct<3> Var20;
	struct<3> Var21;
	char* sVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26[20];
	var uVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	int iVar35;
	
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
	iLocal_27 = joaat("prop_dart_1");
	iLocal_28 = joaat("prop_dart_2");
	iLocal_31 = joaat("prop_dart_bd_cab_01");
	fLocal_33 = 0.063f;
	Local_34 = { -0.0035f, 0f, -0.001f };
	iLocal_36 = joaat("prop_target_bull");
	Local_41 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_46 = 0.1f;
	iLocal_57 = 3;
	fLocal_60 = 80f;
	fLocal_61 = 140f;
	fLocal_62 = 180f;
	iLocal_68 = 1;
	iLocal_69 = 65;
	iLocal_70 = 49;
	iLocal_71 = 64;
	iLocal_94 = 65;
	iLocal_96 = 660;
	fLocal_101 = 0.27f;
	fLocal_102 = 0.1f;
	fLocal_103 = -120f;
	fLocal_104 = 127f;
	fLocal_154 = ((0.05f + 0.275f) - 0.01f);
	Local_160 = { 500f, 500f, 500f };
	bLocal_171 = true;
	Local_232 = { -573.1373f, 294.0269f, 78.1765f };
	Local_233 = { -574.1169f, 292.7964f, 78.1766f };
	Local_234 = { 1995.295f, 3050.084f, 46.91535f };
	Local_235 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_236 = 172.6813f;
	fLocal_237 = 274.5094f;
	fLocal_238 = 142.6717f;
	fLocal_239 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_4F = 3;
	Var0.f_A4 = 3;
	Var0.f_101 = 16;
	Var0.f_1A6 = 2;
	Var0.f_1A9 = 2;
	Var0.f_1AD = 2;
	Var0.f_1B0 = 2;
	Var0.f_1B5 = 2;
	Var0.f_1B8 = 2;
	Var0.f_1BB = 2;
	Var0.f_1BE = 2;
	Var0.f_1C1 = 2;
	Var4.f_1 = 2;
	Var4.f_1.f_1 = 7;
	Var4.f_1.f_1.f_8 = 7;
	Var5.f_3 = 8;
	Var5.f_C = 8;
	Var5.f_15 = 4;
	Var5.f_1A.f_3 = 8;
	Var5.f_1A.f_C = 8;
	Var5.f_1A.f_15 = 4;
	Var5.f_48 = 3;
	Var5.f_48.f_2C.f_3.f_1 = 4;
	Var5.f_48.f_71 = 2;
	Var5.f_48.f_71.f_1.f_1 = 4;
	Var5.f_48.f_71.f_1.f_42.f_1 = 4;
	Var5.f_48.f_F6.f_6 = 12;
	Var5.f_48.f_F6.f_BB = 3;
	Var5.f_1FD.f_2 = 8;
	Var5.f_1FD.f_2.f_1.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var5.f_2A9 = 2;
	Var6.f_20 = 3;
	Var6.f_24 = 1;
	Var6.f_35 = 2;
	Var6.f_39 = 13;
	Var6.f_47 = 13;
	Var6.f_118 = 13;
	Var6.f_1E9 = 13;
	Var6.f_1F7 = 13;
	Var6.f_205 = 13;
	Var6.f_213 = 13;
	iVar13 = 0;
	sLocal_245 = "facials@gen_female@variations@happy";
	switch (func_477(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			sLocal_246 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_246 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_246 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_247[0] = "mood_happy_1";
	sLocal_247[1] = "mood_happy_2";
	sLocal_247[2] = "mood_happy_3";
	sLocal_248[0] = "darts_outro_01_guy1";
	sLocal_248[1] = "darts_outro_02_guy2";
	sLocal_248[2] = "darts_outro_03_guy2";
	sLocal_249[0] = "darts_outro_01_guy2";
	sLocal_249[1] = "darts_outro_02_guy1";
	sLocal_249[2] = "darts_outro_03_guy1";
	sLocal_250[0] = "darts_outro_01_cam";
	sLocal_250[1] = "darts_outro_02_cam";
	sLocal_250[2] = "darts_outro_03_cam";
	uLocal_161[0] = PLAYER::PLAYER_PED_ID();
	bLocal_174 = true;
	Var17 = { 1992.293f, 3050.583f, 47.98973f };
	Var18 = { -572.0406f, 294.1958f, 79.9374f };
	func_476();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_198 = 1;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
		{
			case 0:
				iLocal_195 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_195 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_193 = 10;
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(ScriptParam_251.f_4))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_198 == 2)
			{
				ScriptParam_251 = { Var18 };
				ScriptParam_251.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_251 = { Var17 };
				ScriptParam_251.f_3 = 57.78315f;
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(ScriptParam_251, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_251.f_4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ScriptParam_251, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(ScriptParam_251, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_251, &Var19, 0);
				ScriptParam_251.f_3 = Var19.f_2;
			}
		}
	}
	else
	{
		Var19 = { ENTITY::GET_ENTITY_COORDS(ScriptParam_251.f_4, 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_475()))
	{
		func_473(iLocal_193, 1);
		if (PED::IS_PED_IN_ANY_VEHICLE(func_475(), 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(func_475(), 0, 0);
		}
		uLocal_161[1] = func_475();
	}
	else
	{
		MISC::SET_MISSION_FLAG(1);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_464();
		func_445(&Var0, &Var5, &Var6);
	}
	HUD::DISPLAY_AREA_NAME(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	func_443(1);
	uLocal_189 = func_440(func_477(uLocal_161[0]), 1);
	fVar15 = (SYSTEM::TO_FLOAT(uLocal_189) / 100f);
	fVar16 = (fVar15 * 1200f);
	iLocal_96 = SYSTEM::ROUND(fVar16);
	if (iLocal_96 < 660)
	{
		iLocal_96 = 660;
	}
	func_439(23, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
		if (iLocal_181 && Var0 < 13)
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Var4, Var4.f_12, Var4.f_15, Var4.f_18, Var4.f_18, 2);
		}
		if ((PED::IS_PED_INJURED(ScriptParam_251.f_5) && !ENTITY::DOES_ENTITY_EXIST(func_475())) || (ENTITY::DOES_ENTITY_EXIST(func_475()) && PED::IS_PED_INJURED(func_475())))
		{
			func_445(&Var0, &Var5, &Var6);
		}
		if (!PED::IS_PED_INJURED(uLocal_161[0]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_161[0], 239, 1);
			PED::SET_PED_RESET_FLAG(uLocal_161[0], 124, 1);
			func_438();
			PAD::_0x7F4724035FDCA1DD(0);
			PAD::_0x7F4724035FDCA1DD(2);
			iVar14 = 0;
			while (iVar14 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar26, -1))
			{
				if (uVar26[iVar14] != uLocal_161[1])
				{
					if (!PED::IS_PED_INJURED(uVar26[iVar14]))
					{
						PED::SET_PED_RESET_FLAG(uVar26[iVar14], 240, 1);
					}
				}
				iVar14++;
			}
			switch (Var0)
			{
				case 0:
					HUD::CLEAR_HELP(1);
					func_437(&(Var0.f_F3), &ScriptParam_251);
					func_436(Var0.f_F3.f_1, Var0.f_F3.f_4);
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_F3))
					{
						Local_230 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Var0.f_F3, 0.7792f, -1.138f, 0.1814f) };
						Local_231 = { -7.9947f, 0f, (Var0.f_F3.f_4 + 36.19176f) };
						uLocal_83 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_230, Local_231, 65f, 0, 2);
						CAM::SET_CAM_FOV(uLocal_83, 30f);
					}
					func_435();
					SYSTEM::SETTIMERA(0);
					Var0 = 1;
					break;
				
				case 1:
					if (SYSTEM::TIMERA() > 500 && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						MISC::CLEAR_AREA(ScriptParam_251, 0.5f, 1, 0, 0, 0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_196);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_196);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_196);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_196);
						}
						Local_41 = { Local_41 };
						Var0 = 2;
					}
					break;
				
				case 2:
					iVar28 = 0;
					while (iVar28 < 2)
					{
						iVar29 = 0;
						while (iVar29 < 3)
						{
							func_434(&(Var0.f_5[iVar28 /*79*/][iVar29 /*26*/]), iVar28);
							iVar29++;
						}
						iVar28++;
					}
					iVar30 = 0;
					while (iVar30 < 3)
					{
						func_434(&(Var0.f_A4[iVar30 /*26*/]), 0);
						iVar30++;
					}
					iVar1 = 2;
					func_433(0);
					func_431(&Var4, iLocal_198, Var0.f_F3.f_1, Var0.f_F3.f_4);
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_F3))
					{
						Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Var0.f_F3, Var4.f_12) };
					}
					func_428(&Var4, &Var5);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					Var0 = 3;
					break;
				
				case 3:
					if (func_425(&Var4, &Var5))
					{
						func_422(&(Var0.f_F3), &Var2, &Var3, 0);
						iLocal_240 = func_477(uLocal_161[0]);
						switch (iLocal_240)
						{
							case 0:
								sLocal_242 = func_421("MICHAEL");
								if (!MISC::IS_BIT_SET(Global_17C22, 0))
								{
									sVar22 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_242 = func_421("FRANKLIN");
								bLocal_178 = true;
								if (!MISC::IS_BIT_SET(Global_17C22, 0))
								{
									sVar22 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_242 = func_421("TREVOR");
								if (!MISC::IS_BIT_SET(Global_17C22, 0))
								{
									sVar22 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!ENTITY::IS_ENTITY_DEAD(func_475()))
						{
							iLocal_241 = func_477(func_475());
							if (iLocal_241 == 145)
							{
								iLocal_241 = func_419(func_475());
							}
							switch (iLocal_241)
							{
								case 0:
									sLocal_243 = func_421("MICHAEL");
									break;
								
								case 1:
									sLocal_243 = func_421("FRANKLIN");
									break;
								
								case 2:
									sLocal_243 = func_421("TREVOR");
									break;
								
								case 19:
									sLocal_243 = func_421("LAMAR");
									PED::SET_PED_COMPONENT_VARIATION(func_475(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_243 = func_421("JIMMY");
									break;
								
								default:
									sLocal_243 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 200);
							if (iLocal_198 == 2)
							{
								if (iVar12 < 51)
								{
									sLocal_243 = func_421("RAYMOND");
									iLocal_244 = 954610991;
								}
								else if (iVar12 < 101)
								{
									sLocal_243 = func_421("JOHAN");
									iLocal_244 = 94453331;
								}
								else if (iVar12 < 151)
								{
									sLocal_243 = func_421("STAN");
									iLocal_244 = 1891555423;
								}
								else
								{
									sLocal_243 = func_421("VINCE");
									iLocal_244 = -1067630349;
								}
							}
							else if (iVar12 < 51)
							{
								sLocal_243 = func_421("KRISTY");
								iLocal_244 = 885327384;
							}
							else if (iVar12 < 101)
							{
								sLocal_243 = func_421("MARLENE");
								iLocal_244 = -1791000994;
							}
							else if (iVar12 < 151)
							{
								sLocal_243 = func_421("LORIE");
								iLocal_244 = 1954368234;
							}
							else
							{
								sLocal_243 = func_421("SHELLEY");
								iLocal_244 = -863218904;
							}
						}
						uLocal_35 = OBJECT::CREATE_OBJECT(iLocal_36, Var3, 1, 1, 0);
						Var0.f_1BE[0] = 0;
						Var0.f_1BE[1] = 0;
						Var0 = 4;
					}
					break;
				
				case 4:
					if (!CAM::_0x705A276EBFF3133D())
					{
						uVar27 = OBJECT::CREATE_OBJECT(joaat("prop_dart_1"), Var3, 1, 1, 0);
						func_416(Var0.f_F3.f_4, Var2, &uVar26, &ScriptParam_251);
						func_414(&Var4, sLocal_242, sLocal_243);
						TASK::CLEAR_PED_TASKS(uLocal_161[1]);
						uLocal_197 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 0, 0);
						}
						func_413(&(Var0.f_101), 0, PLAYER::PLAYER_PED_ID(), sLocal_242, 0, 1);
						if (ENTITY::IS_ENTITY_DEAD(func_475()))
						{
							if (iLocal_198 == 2)
							{
								func_413(&(Var0.f_101), 3, uLocal_161[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_413(&(Var0.f_101), 3, uLocal_161[1], "DartsMelHick1", 0, 1);
							}
							iVar13 = -1;
						}
						else
						{
							func_413(&(Var0.f_101), 3, func_475(), sLocal_243, 0, 1);
							func_412(&uVar25);
							iVar13 = 6;
						}
						if (!MISC::IS_BIT_SET(Global_17C22, 0))
						{
							iVar13 = -1;
						}
						else
						{
							iVar13 = 3;
						}
						func_411(&Var4, 0);
						Var0 = 5;
					}
					break;
				
				case 5:
					if ((((!PED::IS_PED_INJURED(uLocal_161[1]) && PED::IS_PED_ON_FOOT(uLocal_161[0])) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_161[0], 1)) && PED::IS_PED_ON_FOOT(uLocal_161[1])) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_161[1], 1))
					{
						bLocal_169 = func_409(&uLocal_185);
						if ((func_408() && MISC::GET_GAME_TIMER() >= iLocal_187 + 1000) && iVar13 != 9)
						{
							if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
							{
								CAM::DO_SCREEN_FADE_OUT(500);
							}
						}
						if (CAM::IS_SCREEN_FADED_OUT() && iVar13 != 9)
						{
							func_405(0);
							func_403();
							iVar13 = 9;
						}
						switch (iVar13)
						{
							case -1:
								if (!PED::IS_PED_INJURED(uLocal_161[1]))
								{
									uLocal_191 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_251.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_251.f_4) - 3.783146f), 2);
									uLocal_197 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_197, uLocal_191, "darts_ig_intro_cam", "mini@dartsintro");
									CAM::SET_CAM_ACTIVE(uLocal_197, 1);
									CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
									TASK::TASK_CLEAR_LOOK_AT(uLocal_161[0]);
									TASK::TASK_CLEAR_LOOK_AT(uLocal_161[1]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_161[0]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_161[1]);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_161[1], uLocal_191, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_161[0], uLocal_191, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									TASK::TASK_PLAY_ANIM(uLocal_161[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(uLocal_161[0], "mini@dartsintro", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uVar27, uLocal_191, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080);
									func_402(&uVar25);
									iVar13++;
								}
								break;
							
							case 0:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_191))
								{
									if (!bVar9)
									{
										if (func_401(&uVar25) > 1.5f)
										{
											func_400(uLocal_161[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_399(&uVar25);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_161[0]))
									{
										if (!bVar10)
										{
											if (!func_398(&uVar25))
											{
												func_412(&uVar25);
											}
											else if (func_401(&uVar25) > 0.5f)
											{
												func_397(uLocal_161[1]);
												func_399(&uVar25);
												bVar10 = true;
											}
										}
									}
									switch (iLocal_30)
									{
										case 0:
											func_402(&uVar25);
											func_396("DARTS_HOW_TO_2", -1);
											iLocal_30++;
											break;
										
										case 1:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_191) > 0.25f)
											{
												func_402(&uVar25);
												func_396("DARTS_HOW_TO_3", -1);
												iLocal_30++;
											}
											break;
										
										case 2:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_191) > 0.55f)
											{
												func_396("DARTS_HOW_3A", -1);
												iLocal_30++;
											}
											break;
										
										case 3:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_191) > 0.85f)
											{
												func_396("DARTS_HOW_3A", -1);
												iLocal_30++;
											}
											break;
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_191) > 0.95f)
									{
										iLocal_181 = 1;
										iVar13++;
									}
									else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_191) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(uLocal_161[1]))
									{
										func_393(Var0.f_F3.f_1, Var0.f_F3.f_4, func_395(2), func_394(0), 0, 1);
										iLocal_30 = 0;
										HUD::CLEAR_HELP(1);
										CAM::DESTROY_CAM(uLocal_197, 0);
										TASK::CLEAR_PED_TASKS(uLocal_161[0]);
										TASK::CLEAR_PED_TASKS(uLocal_161[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uVar27, -1000f, 0);
										OBJECT::DELETE_OBJECT(&uVar27);
										AUDIO::STOP_AUDIO_SCENE(func_392(0));
										func_399(&uVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 3:
								if (!PED::IS_PED_INJURED(uLocal_161[1]))
								{
									uLocal_191 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_251.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_251.f_4) - 3.783146f), 2);
									uLocal_197 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_197, uLocal_191, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									CAM::SET_CAM_ACTIVE(uLocal_197, 1);
									CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
									TASK::TASK_CLEAR_LOOK_AT(uLocal_161[0]);
									TASK::TASK_CLEAR_LOOK_AT(uLocal_161[1]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_161[0]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_161[1]);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_161[1], uLocal_191, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_161[0], uLocal_191, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									TASK::TASK_PLAY_ANIM(uLocal_161[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(uLocal_161[0], "mini@dartsintro_alt1", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uVar27, uLocal_191, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080);
									func_402(&uVar25);
									iVar13++;
								}
								break;
							
							case 4:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_191))
								{
									if (!bVar9)
									{
										if (func_401(&uVar25) > 0.5f)
										{
											func_400(uLocal_161[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_399(&uVar25);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_161[0]))
									{
										if (!bVar10)
										{
											if (!func_398(&uVar25))
											{
												func_412(&uVar25);
											}
											else if (func_401(&uVar25) > 0.25f)
											{
												func_397(uLocal_161[1]);
												func_399(&uVar25);
												bVar10 = true;
											}
										}
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_191) > 0.95f)
									{
										iLocal_181 = 1;
										iVar13++;
									}
									else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_191) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(uLocal_161[1]))
									{
										func_391();
										CAM::DESTROY_CAM(uLocal_197, 0);
										TASK::CLEAR_PED_TASKS(uLocal_161[0]);
										TASK::CLEAR_PED_TASKS(uLocal_161[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uVar27, -1000f, 0);
										OBJECT::DELETE_OBJECT(&uVar27);
										AUDIO::STOP_AUDIO_SCENE(func_392(0));
										func_399(&uVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 9:
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									iLocal_181 = 1;
									iLocal_30 = 0;
									HUD::CLEAR_HELP(1);
									if (!PED::IS_PED_INJURED(uLocal_161[1]))
									{
										ENTITY::SET_ENTITY_COORDS(uLocal_161[0], Var2, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(uLocal_161[0], Var0.f_F3.f_4);
										ENTITY::SET_ENTITY_COORDS(uLocal_161[1], Var2.f_3, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(uLocal_161[1], Var0.f_F3.f_4);
										TASK::CLEAR_PED_TASKS(uLocal_161[0]);
										TASK::CLEAR_PED_TASKS(uLocal_161[1]);
									}
									CAM::DESTROY_CAM(uLocal_197, 0);
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uVar27, -1000f, 0);
									OBJECT::DELETE_OBJECT(&uVar27);
									if (!MISC::IS_BIT_SET(Global_17C22, 0))
									{
										func_393(Var0.f_F3.f_1, Var0.f_F3.f_4, func_395(2), func_394(0), 0, 1);
									}
									else
									{
										func_391();
									}
									AUDIO::STOP_AUDIO_SCENE(func_392(0));
									func_399(&uVar25);
									CAM::DO_SCREEN_FADE_IN(500);
									Var0 = 6;
									iVar13 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar13)
					{
						case 0:
							iLocal_187 = MISC::GET_GAME_TIMER();
							if (!PED::IS_PED_INJURED(uLocal_161[1]))
							{
								ENTITY::SET_ENTITY_COORDS(uLocal_161[0], Var2, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(uLocal_161[0], Var0.f_F3.f_4);
								ENTITY::SET_ENTITY_COORDS(uLocal_161[1], Var2.f_3, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(uLocal_161[1], Var0.f_F3.f_4);
							}
							AUDIO::START_AUDIO_SCENE(func_392(1));
							iVar13 = 0;
							Var0 = 7;
							break;
						
						case 1:
							if ((MISC::GET_GAME_TIMER() - iLocal_187) > 1500)
							{
								func_389(&(Var5.f_39), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar13++;
							}
							break;
						
						case 2:
							if (!func_388(&(Var5.f_39), 1, 0))
							{
								AUDIO::START_AUDIO_SCENE(func_392(1));
								iVar13 = 0;
								Var0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!MISC::IS_BIT_SET(Global_17C22, 0))
					{
						if (func_385(&iVar1, &(Var0.f_F3), &(Var0.f_F9), &(Var0.f_1), &(Var0.f_A4), &uVar24))
						{
							MISC::SET_BIT(&Global_17C22, 0);
							Var0 = 8;
						}
					}
					else
					{
						CAM::SET_CAM_ACTIVE(uLocal_74, 1);
						Var0 = 8;
					}
					break;
				
				case 8:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					switch (iVar13)
					{
						case 0:
							if (!ENTITY::DOES_ENTITY_EXIST(func_475()))
							{
								if (!MISC::IS_BIT_SET(Global_17C22, 10))
								{
									MISC::SET_BIT(&Global_17C22, 10);
								}
								else
								{
									MISC::CLEAR_BIT(&Global_17C22, 10);
								}
								func_383(&Var5);
								iVar13++;
							}
							else
							{
								func_383(&Var5);
								iVar13++;
							}
							break;
						
						case 1:
							if (MISC::IS_PC_VERSION())
							{
								if (fLocal_88 != GRAPHICS::_GET_ASPECT_RATIO(0))
								{
									fLocal_88 = GRAPHICS::_GET_ASPECT_RATIO(0);
									CAM::SET_CAM_FOV(uLocal_74, func_382(fLocal_88));
									CAM::SET_CAM_FOV(uLocal_75, func_382(fLocal_88));
								}
							}
							if (func_323(&Var5, &(Var0.f_1C4), &(Var0.f_1C5)))
							{
								AUDIO::STOP_AUDIO_SCENE(func_392(1));
								if (Var0.f_1C4 > 0)
								{
									iVar13 = 0;
									if (Var0.f_1C4 > 1 || Var0.f_1C5 > 1)
									{
										func_322(&Var4, 0, 0, 0, 0);
										bVar8 = true;
									}
									func_319(1, -1);
									Var0 = 9;
								}
								else if (Var0.f_1C4 < 0)
								{
									Var0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_312(&Var0, &Var4, &Var5))
					{
						Var0.f_F9.f_4 = 1;
						if (Global_17C49.f_4348.f_5 >= 5 && Global_17C49.f_4348.f_7 >= 0.8f)
						{
							Var0.f_F9.f_4 = 2;
						}
						else if (Global_17C49.f_4348.f_5 >= 3 && Global_17C49.f_4348.f_7 >= 0.66f)
						{
							Var0.f_F9.f_4 = 1;
						}
						else
						{
							Var0.f_F9.f_4 = 0;
						}
						if (func_311(Global_17C49.f_4348.f_5, &iLocal_190))
						{
							func_310(&(Var5.f_29A), 24, 1);
						}
						fLocal_44 = func_309(Global_17C49.f_4348.f_5);
						fLocal_45 = func_308(Global_17C49.f_4348.f_5);
						fLocal_42 = fLocal_44;
						fLocal_43 = fLocal_45;
						iLocal_105[4]++;
						if (!PED::IS_PED_INJURED(uLocal_161[1]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_161[1]);
							ENTITY::SET_ENTITY_COORDS(uLocal_161[1], Var2.f_3, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(uLocal_161[1], Var0.f_F3.f_4);
						}
						if (func_398(&uVar23))
						{
							func_399(&uVar23);
						}
						AUDIO::START_AUDIO_SCENE(func_392(2));
						func_307(uLocal_161[1]);
						Var0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (MISC::IS_PC_VERSION())
					{
						if (fLocal_88 != GRAPHICS::_GET_ASPECT_RATIO(0))
						{
							fLocal_88 = GRAPHICS::_GET_ASPECT_RATIO(0);
							CAM::SET_CAM_FOV(uLocal_74, func_382(fLocal_88));
							CAM::SET_CAM_FOV(uLocal_75, func_382(fLocal_88));
						}
					}
					if (!bLocal_179)
					{
						STREAMING::REQUEST_ANIM_DICT("mini@dartsoutro");
						bLocal_179 = true;
					}
					if (!iLocal_180)
					{
						if (bLocal_179)
						{
							if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_180 = 1;
							}
						}
					}
					func_225(&Var0, &Var3, &Var4, &Var5, &uVar23);
					break;
				
				case 11:
					switch (iVar13)
					{
						case 0:
							if (func_401(&(Var0.f_FE)) > 0.5f)
							{
								HUD::CLEAR_HELP(1);
								HUD::CLEAR_PRINTS();
								func_224(PLAYER::PLAYER_PED_ID());
								func_322(&Var4, Var0.f_1C1[0], Var0.f_1C1[1], Var0.f_1BE[0], Var0.f_1BE[1]);
								iVar31 = 0;
								while (iVar31 < 2)
								{
									iVar32 = 0;
									while (iVar32 < 3)
									{
										func_223(&(Var0.f_5[iVar31 /*79*/][iVar32 /*26*/]));
										iVar32++;
									}
									func_222(&Var4, iVar31);
									iVar31++;
								}
								if (Var0.f_1CB)
								{
									if (Var0.f_1C6)
									{
										func_220(&(Var5.f_3E), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_220(&(Var5.f_3E), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_1CB = 0;
								}
								else if (Var0.f_1C6)
								{
									func_220(&(Var5.f_3E), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_220(&(Var5.f_3E), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar34 = GRAPHICS::_GET_ASPECT_RATIO(1);
								if (fVar34 > 2f)
								{
									Var20 = { 1992.294f, 3047.577f, 46.21517f };
									Var21 = { 0f, 0f, 138.74f };
								}
								else
								{
									Var20 = { 1992.336f, 3047.924f, 46.21517f };
									Var21 = { 0f, 0f, 136.74f };
								}
								iVar33 = func_219();
								uLocal_191 = PED::CREATE_SYNCHRONIZED_SCENE(Var20, Var21, 2);
								uLocal_197 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_197, uLocal_191, sLocal_250[iVar33], "mini@dartsoutro");
								CAM::SET_CAM_ACTIVE(uLocal_197, 1);
								CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
								if (!PED::IS_PED_INJURED(uLocal_161[0]) && !PED::IS_PED_INJURED(uLocal_161[1]))
								{
									if (Var0.f_1C6)
									{
										if ((Var0.f_1B5[0] + Var0.f_1B5[1]) == 1)
										{
											iVar35 = 1;
										}
										else
										{
											iVar35 = 0;
										}
										AUDIO::PLAY_SOUND_FRONTEND(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_218(&uLocal_161, iVar35);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_161[0], uLocal_191, "mini@dartsoutro", sLocal_248[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_161[1], uLocal_191, "mini@dartsoutro", sLocal_249[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_246, sLocal_247[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_217(&uLocal_161);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_161[1], uLocal_191, "mini@dartsoutro", sLocal_248[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_161[0], uLocal_191, "mini@dartsoutro", sLocal_249[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_PLAY_ANIM(uLocal_161[1], sLocal_245, sLocal_247[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar13++;
							}
							break;
						
						case 1:
							if (!func_215(&(Var5.f_3E), 1))
							{
								iVar13++;
							}
							break;
						
						case 2:
							func_399(&(Var0.f_FE));
							iLocal_175 = 0;
							AUDIO::STOP_AUDIO_SCENE(func_392(3));
							func_391();
							if (CAM::DOES_CAM_EXIST(uLocal_197))
							{
								CAM::DESTROY_CAM(uLocal_197, 0);
							}
							iVar13 = 0;
							Var0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_401(&(Var0.f_FE)) > 0.92f)
					{
						func_38(&Var0, &Var5, &Var4, &Var6, bVar8);
					}
					break;
				
				case 13:
					uVar11 = func_10(&Var6, 0, 1065353216, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(func_475()))
					{
						TASK::CLEAR_PED_TASKS(uLocal_161[1]);
						Var0 = 15;
					}
					switch (iVar13)
					{
						case 0:
							TASK::CLEAR_PED_TASKS(uLocal_161[0]);
							if (!bLocal_177)
							{
								CAM::RENDER_SCRIPT_CAMS(0, bLocal_177, 3000, 1, 0, 0);
							}
							else
							{
								CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
							}
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							HUD::CLEAR_PRINTS();
							TASK::TASK_LOOK_AT_ENTITY(uLocal_161[0], uLocal_161[1], 5000, 2049, 3);
							func_412(&uVar25);
							iVar13++;
							break;
						
						case 1:
							if (func_7(&uVar25) > 0.1f)
							{
								if (!bVar7)
								{
								}
								func_412(&uVar25);
								iVar13++;
							}
							break;
						
						case 2:
							if (func_7(&uVar25) > 0.3f)
							{
								if (!PED::IS_PED_INJURED(uLocal_161[1]))
								{
									if (!bVar7)
									{
										func_4(uLocal_161[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_412(&uVar25);
								iVar13++;
							}
							break;
						
						case 3:
							if (uVar11 || bVar7)
							{
								Var0 = 15;
								iVar13++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var5);
					if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_1(uLocal_161[1]);
						iLocal_194 = 2;
						bVar7 = true;
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_392(2)))
						{
							AUDIO::STOP_AUDIO_SCENE(func_392(2));
						}
						Var0 = 13;
					}
					if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_54 = 0;
						}
						func_310(&(Var5.f_29A), 8, 0);
						Var0 = 10;
					}
					break;
				
				case 15:
					func_445(&Var0, &Var5, &Var6);
					break;
				}
		}
	}
}

void func_1(int iParam0)//Position - 0x1DDD
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)//Position - 0x1DFB
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_3(&(uParam0->f_29A), 8))
		{
			func_310(&(uParam0->f_29A), 8, 1);
			func_310(&(uParam0->f_29A), 15, 0);
			func_310(&(uParam0->f_29A), 16, 0);
			func_310(&(uParam0->f_29A), 17, 0);
		}
		HUD::CLEAR_SMALL_PRINTS();
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, 0, -1, 0, 0, 1);
	}
	else if (func_3(&(uParam0->f_29A), 8))
	{
		func_310(&(uParam0->f_29A), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)//Position - 0x1E7F
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1E90
{
	if (!ENTITY::IS_ENTITY_DEAD(func_475()) || iParam2)
	{
		func_400(iParam0, sParam1, iParam3);
	}
	else if (!PED::IS_PED_INJURED(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_56, iParam3);
	}
}

void func_5(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1ECF
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, sParam2, func_6(iParam3), 0);
}

int func_6(int iParam0)//Position - 0x1EE8
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

float func_7(var uParam0)//Position - 0x20DD
{
	if (func_398(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)//Position - 0x211C
{
	var uVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(uVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_9(var uParam0)//Position - 0x2164
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x2174
{
	bool bVar0;
	
	if (MISC::GET_FRAME_COUNT() == uParam0->f_23E)
	{
		return uParam0->f_23F;
	}
	uParam0->f_23E = MISC::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_23F = 1;
			return 1;
		}
		if (TASK::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_23F = 1;
			return 1;
		}
	}
	if (!uParam0->f_234)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			uParam0->f_234 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
	func_36();
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		}
	}
	Global_8A87 = 1;
	if (!uParam0->f_233)
	{
		switch (func_477(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 1000, 0);
				break;
			
			default:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_233 = 1;
	}
	if (uParam0->f_22E == 0)
	{
		uParam0->f_22E = (uParam0->f_23C + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_23C >= (uParam0->f_22E - 1500))
	{
		uParam0->f_22E = uParam0->f_23C + 3000;
	}
	if (uParam0->f_230 == 0f)
	{
		uParam0->f_230 = (uParam0->f_230 + func_35(30f));
		uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_35(25f)));
		if (uParam0->f_38 > 0)
		{
			uParam0->f_230 = (uParam0->f_230 + func_35((25f * 0.5f)));
		}
		if (uParam0->f_225)
		{
			uParam0->f_230 = (uParam0->f_230 + (func_35(30f) - func_35(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_34(1);
		uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_1E < 1f)
			{
				uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_1E = func_14(uParam0->f_1E, 0f, 1f);
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_235)
				{
					uParam0->f_235 = 0;
					uParam0->f_236 = 0;
					uParam0->f_23D = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_223 = (uParam0->f_223 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_223 = func_14(uParam0->f_223, 0f, 1f);
		if ((uParam0->f_223 <= 0.7f && !uParam0->f_221) && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_222 = uParam0->f_23C;
			uParam0->f_221 = 1;
		}
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_224 < 1f)
				{
					uParam0->f_224 = (uParam0->f_224 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_224 = func_14(uParam0->f_224, 0f, 1f);
		if (uParam0->f_232)
		{
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_237)
					{
						func_11(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_22E > uParam0->f_23C + 333)
		{
			if (((!uParam0->f_236 && uParam0->f_38 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_235)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					if (uParam0->f_23C > (uParam0->f_22E - 5000))
					{
						uParam0->f_22E = uParam0->f_23C + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_235 = 0;
					uParam0->f_23D = 0.75f;
				}
				func_11(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
			}
		}
		if ((uParam0->f_235 || uParam0->f_236) && uParam0->f_38 != 0)
		{
			if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_236 && !uParam0->f_235)
				{
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_22F = func_14((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_23D = func_14((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_22F = func_14((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_23D = func_14((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_23C > uParam0->f_22E)
		{
			if (uParam0->f_231)
			{
				if (!uParam0->f_237)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_231 = 0;
					}
				}
			}
			else if ((uParam0->f_23C - uParam0->f_222) > 1000 && uParam0->f_221)
			{
				bVar0 = false;
			}
		}
		uParam0->f_23F = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_34(0);
			}
			return !bVar0;
		}
	}
	func_34(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)//Position - 0x27CC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, true));
	func_12("ES_HELP");
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(215);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, true));
		func_12("ES_XPAND");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(216);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_12(char* sParam0)//Position - 0x2890
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_13(char* sParam0)//Position - 0x28A2
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)//Position - 0x28B0
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_15(var uParam0, float fParam1, bool bParam2)//Position - 0x28D7
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_223 * 255f));
	fVar1 = (func_33() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_1E >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				func_12(&(uParam0->f_D));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_38);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(69);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_38 > 0 && !uParam0->f_3) && uParam0->f_23C > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.15f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
		func_32();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
	fVar3 = 0f;
	if (uParam0->f_237)
	{
		fVar3 = (((0.1388889f + func_35((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_224 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_1E >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_33());
	if (uParam0->f_C)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	fVar7 = func_31(&(uParam0->f_D));
	if (fVar6 < fVar7)
	{
		fVar6 = (fVar7 + (3f * 0.006f));
	}
	if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
	{
		fVar6 = (fVar6 * 1.3f);
	}
	fVar7 = func_31(&(uParam0->f_226));
	fVar8 = (((0.119f + 0.05f) / func_33()) / 2.5f);
	if ((uParam0->f_22C == 1 || uParam0->f_22C == 0) && uParam0->f_22D != 0)
	{
		if (fVar6 < (fVar7 + (2.6f * fVar8)))
		{
			fVar6 = (fVar7 + (2.6f * fVar8));
		}
	}
	else if (fVar6 < (fVar7 + (1.9f * fVar8)))
	{
		fVar6 = (fVar7 + (2f * fVar8));
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	PAD::SET_INPUT_EXCLUSIVE(2, 215);
	PAD::SET_INPUT_EXCLUSIVE(2, 216);
	PAD::SET_INPUT_EXCLUSIVE(2, 200);
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_232 || uParam0->f_237)
	{
		if ((IntToFloat(uParam0->f_22E) - (14000f * fParam1)) < IntToFloat(uParam0->f_23C) || ((uParam0->f_237 && uParam0->f_22F > 0.95f) && (uParam0->f_22E - 10000) < uParam0->f_23C))
		{
			if (uParam0->f_237)
			{
				if (uParam0->f_23A < 0)
				{
					uParam0->f_23A = (uParam0->f_23A * -1);
					uParam0->f_23A = (uParam0->f_23C + uParam0->f_23A);
				}
				if (uParam0->f_23A > 0)
				{
					if ((uParam0->f_23A - uParam0->f_23C) > 0)
					{
						func_28((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_23A = 0;
						uParam0->f_239 = 1;
						uParam0->f_237 = 0;
						uParam0->f_231 = 0;
						uParam0->f_232 = 0;
						uParam0->f_22E = uParam0->f_23C + 500;
						uParam0->f_23A = 0;
					}
				}
				if (uParam0->f_238 < 1f)
				{
					uParam0->f_238 = (uParam0->f_238 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_238 > 1f)
					{
						uParam0->f_238 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_224 < 0.1f) && uParam0->f_23C <= uParam0->f_22E)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_237)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 3;
					uParam0->f_23A = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 4;
					uParam0->f_23A = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 2;
					uParam0->f_23A = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_232)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_232 = 0;
					uParam0->f_231 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	HUD::GET_HUD_COLOUR(1, &iVar13, &iVar14, &iVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, iVar0);
	HUD::SET_TEXT_WRAP(fVar9, fVar10);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_35(6f));
	fVar1 = (fVar1 + (func_35(30f) - func_35((2f * 2f))));
	fVar11 = (fVar2 - func_35((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_35(25f))), 0f, 1f);
		func_32();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_35((2f - 0.5f)) - 0.001388889f)), fVar6, func_27(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_35((2f * 0.3f)));
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_35((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_38)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_33())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_35(25f))), 0f, 1f);
			func_24(uParam0, iVar17, (fVar1 + func_35(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_35(25f));
		iVar17++;
	}
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_35((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_33())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_35(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_35(25f))), 0f, 1f);
			func_32();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_35((2f * 0.5f))), fVar6, func_27(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_225)
	{
		fVar1 = (fVar1 + func_35((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_33())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_35(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_18(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_33()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_33()) / 2.5f));
				if (uParam0->f_22C == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_33()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_33()) / 2.5f));
				}
			}
			if (uParam0->f_22D == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(1);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			func_17(&(uParam0->f_226), fVar20, (fVar1 + func_35((2f * 2f))), 0, 0, 0);
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(0);
			func_32();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			HUD::SET_TEXT_WRAP(fVar20, fVar22);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_22C)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22A);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_35((2f * 2f))), 0);
					break;
				
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22A);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22B);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_35((2f * 2f))), 0);
					break;
				
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22A);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_35((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_22D != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_22D)
				{
					case 1:
						HUD::GET_HUD_COLOUR(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						HUD::GET_HUD_COLOUR(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_35(10f)) + fVar29);
				if (uParam0->f_22C == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_35(30f) - 2f));
		}
	}
}

float func_16(float fParam0)//Position - 0x33C0
{
	return (fParam0 * 0.00078125f);
}

void func_17(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x33D0
{
	HUD::SET_TEXT_CENTRE(iParam3);
	HUD::SET_TEXT_FONT(iParam5);
	func_32();
	if (bParam4)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_18(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x340D
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_23(iParam0);
	uVar1 = func_21(iParam0, bParam1);
	if (MISC::GET_HASH_KEY(uVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_20())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_20())
			{
				fVar4 = 1f;
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		Var7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(uVar0, sVar1) };
		Var7.x = (Var7.x * (func_19(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_19(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_4353)
			{
				*fParam4 = (*fParam4 * (Global_4353 / *fParam3));
				*fParam3 = Global_4353;
			}
		}
		return 1;
	}
	return 0;
}

float func_19(int iParam0)//Position - 0x3574
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_20()//Position - 0x360D
{
	var uVar0;
	var uVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&uVar0, &uVar1);
	fVar2 = (SYSTEM::TO_FLOAT(uVar0) / SYSTEM::TO_FLOAT(uVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_21(int iParam0, bool bParam1)//Position - 0x363F
{
	char* sVar0[2];
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_17A0[iParam0 /*16*/])))
	{
		return func_22(&(Global_4354.f_17A0[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_22(var uParam0)//Position - 0x3A21
{
	return uParam0;
}

char* func_23(int iParam0)//Position - 0x3A2B
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_148F[iParam0 /*16*/])))
	{
		return func_22(&(Global_4354.f_148F[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

void func_24(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0x3A5A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	HUD::SET_TEXT_WRAP(fParam3, fParam4);
	HUD::SET_TEXT_JUSTIFICATION(1);
	HUD::SET_TEXT_SCALE(1f, func_26(14f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_32();
	if (uParam0->f_213[iParam1])
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_47[iParam1 /*16*/]));
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_47[iParam1 /*16*/]));
		if (uParam0->f_39[iParam1] == 16 || uParam0->f_39[iParam1] == 17)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_1E9[iParam1]);
		}
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_205[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_21(7, 0), (fParam4 - 0.006f), ((fParam2 + func_35(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_21(5, 0), (fParam4 - 0.006f), ((fParam2 + func_35(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_21(6, 0), (fParam4 - 0.006f), ((fParam2 + func_35(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_39[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_39[iParam1] == 15)
	{
		HUD::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		HUD::SET_TEXT_JUSTIFICATION(2);
	}
	HUD::SET_TEXT_SCALE(1f, func_26(14f));
	if (uParam0->f_39[iParam1] == 5 || uParam0->f_39[iParam1] == 4)
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	func_25(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_25(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0x3CE5
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_32();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_26(18f));
			HUD::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			else
			{
				HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			HUD::SET_TEXT_SCALE(1f, func_26(14f));
			break;
	}
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iVar0);
	switch (iParam5)
	{
		case 11:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_26(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
			}
			break;
		
		case 6:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
		
		case 7:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
		
		case 8:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 15:
		case 14:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 16:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			HUD::SET_TEXT_SCALE(1f, func_26(14f));
		}
		else
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_26(float fParam0)//Position - 0x4062
{
	return (fParam0 * 0.025f);
}

float func_27(float fParam0)//Position - 0x4072
{
	return (fParam0 * 0.0009259259f);
}

void func_28(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x4082
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_30(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1446E8.f_1 = 1;
		func_29(7, iVar0);
		Global_1446E8.f_C3C[iVar0] = iParam0;
		StringCopy(&(Global_1446E8.f_C3C.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1446E8.f_C3C.f_8A[iVar0] = iParam2;
		Global_1446E8.f_C3C.f_AE[iVar0] = iParam3;
		Global_1446E8.f_C3C.f_93[iVar0] = iParam4;
		Global_1446E8.f_C3C.f_9C[iVar0] = iParam5;
		Global_1446E8.f_C3C.f_C9[iVar0] = iParam6;
		Global_1446E8.f_C3C.f_D2[iVar0] = iParam7;
		Global_1446E8.f_C3C.f_A5[iVar0] = iParam8;
		Global_1446E8.f_C3C.f_FE[iVar0] = iParam9;
		Global_1446E8.f_C3C.f_107[iVar0] = iParam10;
		Global_1446E8.f_C3C.f_121[iVar0] = iParam11;
		Global_1446E8.f_C3C.f_C0[iVar0] = iParam12;
		Global_1446E8.f_C3C.f_DB[iVar0] = iParam13;
	}
}

void func_29(int iParam0, int iParam1)//Position - 0x419C
{
	MISC::SET_BIT(&(Global_1446E8.f_E1D[iParam0]), iParam1);
}

bool func_30(int iParam0, int iParam1)//Position - 0x41B5
{
	return MISC::IS_BIT_SET(Global_1446E8.f_E1D[iParam0], iParam1);
}

float func_31(char* sParam0)//Position - 0x41CE
{
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return (HUD::_END_TEXT_COMMAND_GET_WIDTH(1) / 2f);
}

void func_32()//Position - 0x41E3
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
}

float func_33()//Position - 0x420B
{
	float fVar0;
	
	fVar0 = 1f;
	if (MISC::IS_PC_VERSION())
	{
	}
	return fVar0;
}

void func_34(int iParam0)//Position - 0x421F
{
	Global_10B99 = iParam0;
	Global_10B9A = iParam0;
}

float func_35(float fParam0)//Position - 0x4233
{
	return (fParam0 * 0.001388889f);
}

void func_36()//Position - 0x4243
{
	if (!Global_3839.f_1 == 1)
	{
		if (func_37(0))
		{
			func_405(0);
		}
		MISC::SET_BIT(&Global_8D8, 2);
	}
}

int func_37(int iParam0)//Position - 0x426B
{
	if (iParam0 == 1)
	{
		if (Global_3839.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_8D7, 14))
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
	if (Global_3839.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_38(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x42C5
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	}
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (!iLocal_182)
		{
			if (func_198(uParam1, 0, &iLocal_183))
			{
				func_310(&(uParam1->f_29A), 9, 0);
				iLocal_182 = 1;
			}
		}
	}
	if (iLocal_164)
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		}
		bVar1 = true;
		if (uParam1->f_2A8)
		{
			if (!uParam1->f_286 && !PLAYER::IS_PLAYER_ONLINE())
			{
				uParam1->f_286 = func_189(&(uParam1->f_287), 0);
				bVar1 = false;
				if (uParam1->f_286)
				{
					uParam1->f_2A8 = 0;
					func_310(&(uParam1->f_29A), 9, 0);
					uParam1->f_286 = 0;
				}
			}
			else
			{
				func_111(&(uParam1->f_48), &(uParam1->f_285));
			}
			if (bVar1)
			{
				func_107(&(uParam1->f_1FD), 1128792064, 1, 0, 1, 1065353216);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
				{
					uParam1->f_2A8 = 0;
					func_310(&(uParam1->f_29A), 9, 0);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
				{
					iVar0 = 2;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_106(&(uParam1->f_48)))
			{
				if (!bLocal_184)
				{
					bLocal_184 = true;
					func_105(&(uParam1->f_1FD), 0, 0, 1, 1);
					func_104(&(uParam1->f_1FD), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_104(&(uParam1->f_1FD), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_104(&(uParam1->f_1FD), "IB_BACK", 2, 202, 1, 1, 0);
					func_104(&(uParam1->f_1FD), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_101(&(uParam1->f_1FD), 1);
				}
			}
		}
		else
		{
			iVar0 = func_94(uParam1, 0, 0, iLocal_182);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_191) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_191) >= 0.995f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_191))
		{
			bLocal_177 = true;
			if (CAM::DOES_CAM_EXIST(uLocal_197))
			{
				CAM::DESTROY_CAM(uLocal_197, 0);
				if (!PED::IS_PED_INJURED(uLocal_161[0]) && !PED::IS_PED_INJURED(uLocal_161[1]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_161[0]);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_161[1]);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_161[0], 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_161[1], 0, 0);
				}
			}
			func_93();
		}
		if (func_401(&(uParam0->f_FE)) > 2f)
		{
			if (!iLocal_175)
			{
				if (uParam0->f_1C6)
				{
					if ((uParam0->f_1B5[0] + uParam0->f_1B5[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_218(&uLocal_161, iVar2);
				}
				else
				{
					func_217(&uLocal_161);
				}
				iLocal_175 = 1;
			}
		}
		if (iVar0 == 1)
		{
			HUD::CLEAR_HELP(1);
			AUDIO::STOP_AUDIO_SCENE(func_392(3));
			if (!PED::IS_PED_INJURED(uLocal_161[0]) && !PED::IS_PED_INJURED(uLocal_161[1]))
			{
				TASK::TASK_CLEAR_LOOK_AT(uLocal_161[0]);
				TASK::TASK_CLEAR_LOOK_AT(uLocal_161[1]);
			}
			func_92(uParam3);
			if (bParam4)
			{
				func_322(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_1AD[0] = 0;
			uParam0->f_1AD[1] = 0;
			uParam0->f_1B0[0] = 0;
			uParam0->f_1B0[1] = 0;
			iLocal_29 = 1;
			func_399(&(uParam0->f_FE));
			*uParam0 = 9;
			iLocal_175 = 0;
			iLocal_173 = 0;
			bLocal_177 = false;
			func_89();
			iLocal_182 = 0;
			iLocal_157 = 0;
			uParam1->f_2A8 = 0;
			iLocal_183 = 0;
			bLocal_184 = false;
			func_81(&(uParam1->f_48));
			func_435();
		}
		else if (iVar0 == 2)
		{
			func_80(uParam3);
			AUDIO::STOP_AUDIO_SCENE(func_392(3));
			if (uParam0->f_1BE[0] * 10 > 0)
			{
				func_50(func_75(), 21, uParam0->f_1BE[0] * 10, 0, 0);
			}
			HUD::CLEAR_PRINTS();
			*uParam0 = 13;
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(0, 234) || PAD::IS_CONTROL_JUST_PRESSED(0, 235)) && uParam0->f_F8 == 1) && bVar1)
		{
			uParam0->f_1C9 = 0;
			if (iLocal_163)
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_186 /*26*/], 1) };
				func_49(Var3, 0, iLocal_163);
				iLocal_163 = 0;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
			{
				iLocal_186++;
				if (iLocal_186 >= uParam0->f_1B4)
				{
					iLocal_186 = 0;
				}
				Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_186 /*26*/], 1) };
				func_47(Var3);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
			{
				iLocal_186 = (iLocal_186 - 1);
				if (iLocal_186 < 0)
				{
					iLocal_186 = (uParam0->f_1B4 - 1);
				}
				Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_186 /*26*/], 1) };
				func_47(Var3);
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(0, 211) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 211)) && bVar1) && (iLocal_182 || !PLAYER::IS_PLAYER_ONLINE()))
		{
			uParam1->f_2A8 = 1;
			func_105(&(uParam1->f_1FD), 0, 0, 1, 1);
			func_104(&(uParam1->f_1FD), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_104(&(uParam1->f_1FD), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_104(&(uParam1->f_1FD), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_184)
			{
				func_104(&(uParam1->f_1FD), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_101(&(uParam1->f_1FD), 1);
		}
	}
	else if (!uParam0->f_1C9)
	{
		HUD::CLEAR_HELP(1);
		HUD::CLEAR_PRINTS();
		func_43(uParam3, uParam0->f_1C6, uParam0->f_1AD[iLocal_29], uParam0->f_1B0[iLocal_29], iLocal_105[2], uParam0->f_1B5[0], uParam0->f_1B5[1], uParam0->f_1B8[0], uParam0->f_1B8[1], uParam0->f_1BB[0], uParam0->f_1BB[1], bParam4);
		fVar4 = GRAPHICS::_GET_ASPECT_RATIO(1);
		if (fVar4 > 2f)
		{
			Var5 = { 1992.294f, 3047.577f, 46.21517f };
			Var6 = { 0f, 0f, 138.74f };
		}
		else
		{
			Var5 = { 1992.336f, 3047.924f, 46.21517f };
			Var6 = { 0f, 0f, 136.74f };
		}
		iVar7 = func_219();
		uLocal_191 = PED::CREATE_SYNCHRONIZED_SCENE(Var5, Var6, 2);
		uLocal_197 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_197, uLocal_191, sLocal_250[iVar7], "mini@dartsoutro");
		CAM::SET_CAM_ACTIVE(uLocal_197, 1);
		CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
		if (!PED::IS_PED_INJURED(uLocal_161[0]) && !PED::IS_PED_INJURED(uLocal_161[1]))
		{
			if (uParam0->f_1C6)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_161[0], uLocal_191, "mini@dartsoutro", sLocal_248[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_161[1], uLocal_191, "mini@dartsoutro", sLocal_249[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_246, sLocal_247[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_161[1], uLocal_191, "mini@dartsoutro", sLocal_248[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_161[0], uLocal_191, "mini@dartsoutro", sLocal_249[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				TASK::TASK_PLAY_ANIM(uLocal_161[1], sLocal_245, sLocal_247[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_177 = false;
		uParam0->f_1C9 = 1;
		uParam1->f_29F = MISC::GET_GAME_TIMER();
		iVar8 = 0;
		while (iVar8 < 2)
		{
			iVar9 = 0;
			while (iVar9 < 3)
			{
				func_223(&(uParam0->f_5[iVar8 /*79*/][iVar9 /*26*/]));
				iVar9++;
			}
			func_222(uParam2, iVar8);
			iVar8++;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - uParam1->f_29F) > 400 && func_39(uParam3, 0, 0))
	{
		if (!uParam0->f_1C6)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_164 = 1;
	}
}

int func_39(var uParam0, bool bParam1, int iParam2)//Position - 0x4A88
{
	uParam0->f_C = iParam2;
	func_42(uParam0);
	func_41(uParam0);
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_226), "SPR_RESULT") || (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_226), "") && uParam0->f_38 > 0))
	{
		uParam0->f_236 = 1;
	}
	if (uParam0->f_1 == 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
		uParam0->f_1 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_232 || uParam0->f_237)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_232)
		{
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_232)
	{
		if (uParam0->f_237)
		{
			func_40(uParam0);
		}
		else if (uParam0->f_38 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_10B9A = 1;
	return 1;
}

void func_40(var uParam0)//Position - 0x4C18
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, true));
	func_12("ES_HELP_TU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, true));
	func_12("ES_HELP_TD");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true));
	func_12("ES_HELP_AB");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_41(var uParam0)//Position - 0x4CDD
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, func_26(16f));
	if (uParam0->f_1F == 0)
	{
		if (uParam0->f_1D)
		{
			HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_D));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
		else
		{
			HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(uParam0->f_D));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
	}
	else
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_1F)
		{
			switch (uParam0->f_20[iVar3])
			{
				case 0:
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_35[iVar1]);
					iVar1++;
					break;
				
				case 1:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_42(var uParam0)//Position - 0x4DE5
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0;
	uParam0->f_233 = 0;
	uParam0->f_23C = 0;
	uParam0->f_234 = 0;
	uParam0->f_235 = 0;
	uParam0->f_236 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_23E = 0;
	uParam0->f_23F = 0;
	uParam0->f_23D = 1f;
}

void func_43(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x4E64
{
	uParam0->f_231 = 1;
	if (bParam1)
	{
		func_46(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_46(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_45(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_45(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_45(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_45(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_45(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_45(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_44(uParam0, 0, "", 0, 0, 0, 0);
	func_34(1);
}

void func_44(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4F35
{
	uParam0->f_225 = iParam1;
	StringCopy(&(uParam0->f_226), sParam2, 16);
	uParam0->f_22A = iParam3;
	uParam0->f_22B = iParam4;
	uParam0->f_22C = iParam5;
	uParam0->f_22D = iParam6;
}

void func_45(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0x4F69
{
	int iVar0;
	
	if (uParam0->f_38 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_38;
	uParam0->f_39[iVar0] = iParam1;
	StringCopy(&(uParam0->f_47[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_118[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_1E9[iVar0] = uParam4;
	uParam0->f_1F7[iVar0] = iParam5;
	uParam0->f_205[iVar0] = iParam6;
	uParam0->f_213[iVar0] = iParam7;
	uParam0->f_38++;
}

void func_46(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x4FDC
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_D), sParam2, 64);
	uParam0->f_1D = iParam3;
	uParam0->f_B = 0;
}

void func_47(struct<3> Param0)//Position - 0x4FFF
{
	struct<3> Var0;
	
	Var0 = { func_48(Param0) };
	if (bLocal_87)
	{
		CAM::SET_CAM_COORD(uLocal_85, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_85, uLocal_84, 500, 1, 1);
		bLocal_87 = false;
	}
	else
	{
		CAM::SET_CAM_COORD(uLocal_84, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_84, uLocal_85, 500, 1, 1);
		bLocal_87 = true;
	}
}

Vector3 func_48(struct<3> Param0)//Position - 0x504F
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 0.3495f, -0.0276f, -0.0114f };
	Var0 = { Param0 - Var1 };
	return Var0;
}

void func_49(struct<3> Param0, bool bParam1, bool bParam2)//Position - 0x507B
{
	struct<3> Var0;
	
	Var0 = { func_48(Param0) };
	if (bParam1)
	{
		CAM::SET_CAM_COORD(uLocal_84, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_84, uLocal_83, 1500, 1, 1);
		CAM::SET_CAM_ACTIVE(uLocal_83, 0);
		CAM::SET_CAM_COORD(uLocal_85, Var0);
		bLocal_87 = true;
	}
	else if (bParam2)
	{
		CAM::SET_CAM_COORD(uLocal_84, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_84, uLocal_76, 2000, 1, 1);
		bLocal_87 = true;
	}
	else
	{
		if (bLocal_87)
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_83, uLocal_84, 1500, 1, 1);
		}
		else
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_83, uLocal_85, 1500, 1, 1);
		}
		CAM::SET_CAM_ACTIVE(uLocal_84, 0);
	}
}

void func_50(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x510D
{
	int iVar0;
	int iVar1;
	
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 3)
	{
		return;
	}
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 4)
	{
		return;
	}
	func_51(Global_17C49.f_744E[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_51(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x51F4
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_74();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_73(99, 1);
					func_72(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_72(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_72(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_59(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_58(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_72(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_72(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_72(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_58(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_72(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_72(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_72(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_72(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_72(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_72(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_72(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_72(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_72(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_72(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_72(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_72(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_72(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_72(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_72(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_58(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_72(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_72(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_72(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_72(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_72(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_72(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_57(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_73(95, iParam3);
					break;
				
				case 1:
					func_73(97, iParam3);
					break;
				
				case 2:
					func_73(96, iParam3);
					break;
			}
			func_73(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_54(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_54(iVar1);
	}
	iVar5 = (Global_CAD5[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_CAD5[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_CAD5[iVar2] = 2147483647;
				}
				else
				{
					Global_CAD5[iVar2] = (Global_CAD5[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_72(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_72(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_72(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_CAD5[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_CAD5[iVar2];
			Global_CAD5[iVar2] = (Global_CAD5[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_2[Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_2[Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_2[Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/]++;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1++;
		if (Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_53(iParam0);
	if (Global_8861 == 15)
	{
		func_52(0);
	}
	return 1;
}

void func_52(bool bParam0)//Position - 0x57F3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_CADD[iVar0 /*3*/][0] = Global_17C49.f_5CED[iVar0];
		Global_CADD.f_1F[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_B[iVar0];
		Global_CADD.f_3E[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_16[iVar0];
		Global_CADD.f_5D[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_21[iVar0];
		Global_CADD.f_7C[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_2C[iVar0];
		Global_CADD.f_9B[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_37[iVar0];
		Global_CADD.f_BA[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_42[iVar0];
		Global_CADD.f_D9[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_4D[iVar0];
		Global_CADD.f_F8[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_58[iVar0];
		if (!bParam0)
		{
			Global_CADD[iVar0 /*3*/][1] = Global_17C49.f_5CED[iVar0];
			Global_CADD.f_1F[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_B[iVar0];
			Global_CADD.f_3E[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_16[iVar0];
			Global_CADD.f_5D[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_21[iVar0];
			Global_CADD.f_7C[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_2C[iVar0];
			Global_CADD.f_9B[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_37[iVar0];
			Global_CADD.f_BA[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_42[iVar0];
			Global_CADD.f_D9[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_4D[iVar0];
			Global_CADD.f_F8[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_53(int iParam0)//Position - 0x5A75
{
	int iVar0;
	
	iVar0 = Global_CAD5[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_54(int iParam0)//Position - 0x5ACF
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0) || MISC::IS_BIT_SET(Global_200000[func_56() /*8053*/].f_167C.f_A, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		MISC::CLEAR_BIT(&(Global_200000[func_56() /*8053*/].f_167C.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_55(int iParam0)//Position - 0x5B92
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_56()//Position - 0x5C0D
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_57(int iParam0)//Position - 0x5C1A
{
	func_73(93, iParam0);
	func_73(29, iParam0);
	func_73(30, iParam0);
}

bool func_58(int iParam0)//Position - 0x5C3A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0);
	}
	return MISC::IS_BIT_SET(Global_200000[func_56() /*8053*/].f_167C.f_A, iParam0);
}

int func_59(bool bParam0)//Position - 0x5C76
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_71(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_60(27, 1);
	return 1;
}

int func_60(int iParam0, int iParam1)//Position - 0x5D2D
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_61(iParam0, iParam1);
}

int func_61(int iParam0, int iParam1)//Position - 0x5D48
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_6072 != 0 && !Global_10A95)
	{
		return 0;
	}
	if (func_70(&Global_26D4DB))
	{
		if (func_68(&Global_26D4DB, iParam0))
		{
			return 0;
		}
		if (func_62(&Global_26D4DB, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_62(var uParam0, int iParam1)//Position - 0x5DCC
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_68(uParam0, iParam1))
	{
		return 0;
	}
	func_65(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_63(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_63(var uParam0, int iParam1)//Position - 0x5E52
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_68(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_64(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_64(var uParam0, int iParam1)//Position - 0x5EA2
{
	return (*uParam0)[iParam1] == 61;
}

void func_65(var uParam0)//Position - 0x5EB3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_67(uParam0, iVar0);
		iVar0++;
	}
	func_66(&(uParam0->f_3E), (8f - 0.5f));
}

void func_66(var uParam0, float fParam1)//Position - 0x5EEA
{
	uParam0->f_1 = (func_8(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_67(var uParam0, int iParam1)//Position - 0x5F18
{
	(*uParam0)[iParam1] = 61;
}

bool func_68(var uParam0, int iParam1)//Position - 0x5F28
{
	return func_69(uParam0, iParam1) != -1;
}

int func_69(var uParam0, int iParam1)//Position - 0x5F3A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_70(var uParam0)//Position - 0x5F67
{
	return uParam0->f_44 == 1;
}

int func_71(int iParam0, int iParam1)//Position - 0x5F75
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_72(int iParam0, int iParam1)//Position - 0x5FC6
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_73(int iParam0, int iParam1)//Position - 0x5FE9
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_C53D[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_C53D[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_C53D[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_C53D[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_74()//Position - 0x6046
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_CAD5[0] == iVar0)
		{
			Global_CAD5[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_CAD5[1] == iVar0)
		{
			Global_CAD5[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_CAD5[2] == iVar0)
		{
			Global_CAD5[2] = iVar0;
		}
	}
}

int func_75()//Position - 0x60BB
{
	func_76();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_76()//Position - 0x60D4
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_79(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_477(PLAYER::PLAYER_PED_ID());
			if (func_78(iVar0) && (!func_77(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_78(Global_17C49.f_6C1.f_21B.f_C8D))
				{
					Global_17C49.f_6C1.f_21B.f_C8E = Global_17C49.f_6C1.f_21B.f_C8D;
				}
				Global_17C49.f_6C1.f_21B.f_C8F = iVar0;
				Global_17C49.f_6C1.f_21B.f_C8D = iVar0;
				return;
			}
		}
		else
		{
			if (Global_17C49.f_6C1.f_21B.f_C8D != 145)
			{
				Global_17C49.f_6C1.f_21B.f_C8F = Global_17C49.f_6C1.f_21B.f_C8D;
			}
			return;
		}
	}
	Global_17C49.f_6C1.f_21B.f_C8D = 145;
}

bool func_77(int iParam0)//Position - 0x61D1
{
	return Global_8861 == iParam0;
}

bool func_78(int iParam0)//Position - 0x61DF
{
	return iParam0 < 3;
}

int func_79(int iParam0)//Position - 0x61EB
{
	if (func_78(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_80(var uParam0)//Position - 0x6215
{
	if (uParam0->f_231 || uParam0->f_23C <= uParam0->f_22E)
	{
		uParam0->f_231 = 0;
		uParam0->f_22E = (uParam0->f_23C - 1);
	}
}

void func_81(var uParam0)//Position - 0x6248
{
	if (uParam0->f_4 != 0)
	{
		func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_87(uParam0);
		func_86(uParam0);
		func_85(&Global_1C1269);
	}
	if (Global_1C017E.f_A94 != 0 || Global_1C017E.f_C70)
	{
		func_83();
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_82(&(Global_1C171A.f_31));
	}
	Global_2554DA.f_ED9 = 0;
}

void func_82(var uParam0)//Position - 0x62E9
{
	uParam0->f_1 = 0;
}

void func_83()//Position - 0x62F6
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1C017E[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1C017E.f_A90[iVar0] = 0;
		iVar0++;
	}
	Global_1C017E.f_A94 = 0;
	Global_1C017E.f_A95 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1C017E.f_A96[iVar0] = 0;
		StringCopy(&(Global_1C017E.f_A9D[iVar0 /*6*/]), "", 24);
		Global_1C017E.f_AC2[iVar0] = 0;
		Global_1C017E.f_AC9[iVar0] = 0;
		iVar0++;
	}
	Global_1C017E.f_AD0 = 0;
	Global_1C017E.f_AD1 = 0;
	Global_1C017E.f_AD2 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C017E.f_AD3[iVar0] = 0;
		Global_1C017E.f_AD7[iVar0] = 0;
		iVar0++;
	}
	Global_1C017E.f_ADB = 0;
	func_84(&(Global_1C017E.f_ADC));
	func_82(&(Global_1C017E.f_B07));
	Global_1C017E.f_B09 = -1;
	Global_1C017E.f_B0A = 0;
	func_82(&(Global_1C017E.f_B0B));
	Global_1C017E.f_B0D = 0;
	func_82(&(Global_1C017E.f_B0E));
	Global_1C017E.f_B10 = 0;
	Global_1C017E.f_ADC.f_1C = 0;
	Global_1C017E.f_ADC.f_1B = 0;
	Global_1C017E.f_C70 = 0;
}

void func_84(var uParam0)//Position - 0x6462
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_19 = 1;
	uParam0->f_1A = 0;
	uParam0->f_1B = 0;
	uParam0->f_1C = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1D[iVar0] = 0;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_85(var uParam0)//Position - 0x64BA
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_10), "", 64);
		(uParam0[iVar1 /*100*/])->f_20 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_2D = { Var0 };
		(uParam0[iVar1 /*100*/])->f_3A = 0;
		(uParam0[iVar1 /*100*/])->f_3B = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_3C[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_43[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_4B = 0;
		(uParam0[iVar1 /*100*/])->f_4A = 0;
		(uParam0[iVar1 /*100*/])->f_4C = 0;
		(uParam0[iVar1 /*100*/])->f_4D = 0;
		(uParam0[iVar1 /*100*/])->f_4E = 0;
		(uParam0[iVar1 /*100*/])->f_4F = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_50), "", 16);
		iVar1++;
	}
	func_82(&(Global_1C017E.f_B0E));
}

void func_86(var uParam0)//Position - 0x659C
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_F6 = 0;
	uParam0->f_F6.f_1 = -1;
	uParam0->f_F6.f_2 = 0;
	func_82(&(uParam0->f_F6.f_3));
	uParam0->f_F6.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_F6.f_6[iVar0 /*15*/] = -1;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_F6.f_BB[iVar0] = 0;
		iVar0++;
	}
}

void func_87(var uParam0)//Position - 0x6624
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_2A = 0;
	uParam0->f_2B = 0;
	uParam0->f_2C = 0;
	uParam0->f_2C.f_1 = 0;
	uParam0->f_2C.f_2 = 0;
	uParam0->f_2C.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_71[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_88(var uParam0, var uParam1, var uParam2)//Position - 0x66F2
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1C0000 = 0;
	func_82(&(Global_1C0000.f_1));
	STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
}

void func_89()//Position - 0x671E
{
	struct<68> Var0;
	
	Global_1C0005 = 0;
	Global_1C0005.f_1 = 0;
	Global_1C0005.f_2 = 0;
	Global_1C0005.f_3 = 0;
	Global_1C0005.f_4 = 0;
	func_91(&(Global_1C0005.f_49));
	func_91(&(Global_1C0005.f_8E));
	func_91(&(Global_1C0005.f_D3));
	func_91(&(Global_1C0005.f_118));
	StringCopy(&(Global_1C0005.f_15D), "", 24);
	StringCopy(&(Global_1C0005.f_163), "", 24);
	func_90(&(Global_1C0005.f_169));
	Global_1C0005.f_176 = -1;
	Global_1C017C = 0;
	Global_1C017D = 0;
	Var0.f_2.f_1 = 4;
	Global_1C0005.f_5 = { Var0 };
}

void func_90(var uParam0)//Position - 0x67C2
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

void func_91(var uParam0)//Position - 0x680A
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_92(var uParam0)//Position - 0x6845
{
	func_42(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_93()//Position - 0x686F
{
	CAM::SET_CAM_ACTIVE(uLocal_80, 1);
}

int func_94(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x687E
{
	if (!func_3(&(uParam0->f_29A), 7))
	{
		if (!func_3(&(uParam0->f_29A), 9))
		{
			func_34(1);
			func_105(&(uParam0->f_1FD), 0, 0, 1, 1);
			func_104(&(uParam0->f_1FD), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_104(&(uParam0->f_1FD), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_104(&(uParam0->f_1FD), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !PLAYER::IS_PLAYER_ONLINE())
			{
				func_104(&(uParam0->f_1FD), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_101(&(uParam0->f_1FD), 1);
			func_310(&(uParam0->f_29A), 8, 0);
			func_310(&(uParam0->f_29A), 9, 1);
		}
		if (!func_3(&(uParam0->f_29A), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_97(func_100(uParam0->f_29C < uParam0->f_29D, uParam0->f_29C, uParam0->f_29D), func_99(uParam0->f_29C < uParam0->f_29D, &(uParam0->f_288), &(uParam0->f_28E)), -1, 1, 2, 1, 0, 1, 0, 0, 0);
					func_97(func_100(uParam0->f_29C >= uParam0->f_29D, uParam0->f_29C, uParam0->f_29D), func_99(uParam0->f_29C >= uParam0->f_29D, &(uParam0->f_288), &(uParam0->f_28E)), -1, 1, 2, 1, 0, 1, 0, 0, 0);
				}
				else
				{
					func_97(uParam0->f_29C, &(uParam0->f_288), -1, 1, 2, 1, 0, 1, 0, 0, 0);
				}
				func_388(&(uParam0->f_39), 0, 0);
			}
			func_107(&(uParam0->f_1FD), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if ((MISC::GET_GAME_TIMER() - uParam0->f_29F) > 900)
			{
				if (PAD::IS_CONTROL_PRESSED(2, 216))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_310(&(uParam0->f_29A), 9, 0);
					return 1;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_96();
					func_95();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			return 2;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			func_310(&(uParam0->f_29A), 9, 0);
			func_310(&(uParam0->f_29A), 7, 0);
		}
	}
	return 0;
}

void func_95()//Position - 0x6AB6
{
	if (Global_24F57C.f_84B[0 /*50*/].f_2 != 0)
	{
		Global_24F57C.f_84B[0 /*50*/].f_2 = 5;
	}
}

void func_96()//Position - 0x6ADB
{
	Global_600C = 1;
}

void func_97(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x6AE7
{
	int iVar0;
	int iVar1;
	
	if (func_98(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_30(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1446E8.f_1 = 1;
		func_29(3, iVar0);
		Global_1446E8.f_730[iVar0] = iParam0;
		StringCopy(&(Global_1446E8.f_730.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1446E8.f_730.f_93[iVar0] = iParam3;
		Global_1446E8.f_730.f_8A[iVar0] = iParam2;
		Global_1446E8.f_730.f_A5[iVar0] = iParam4;
		Global_1446E8.f_730.f_AE[iVar0] = iParam5;
		StringCopy(&(Global_1446E8.f_730.f_D1[iVar0 /*16*/]), sParam6, 64);
		Global_1446E8.f_730.f_152[iVar0] = iParam7;
		Global_1446E8.f_730.f_16D[iVar0] = iParam8;
		Global_1446E8.f_730.f_15B[iVar0] = iParam9;
		Global_1446E8.f_730.f_164[iVar0] = iParam10;
	}
}

int func_98(var uParam0)//Position - 0x6BE7
{
	if (MISC::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

char* func_99(bool bParam0, char* sParam1, char* sParam2)//Position - 0x6C21
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_100(bool bParam0, int iParam1, int iParam2)//Position - 0x6C38
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_101(var uParam0, bool bParam1)//Position - 0x6C4F
{
	if (bParam1)
	{
		func_103(&(uParam0->f_1), 1024);
	}
	else
	{
		func_102(&(uParam0->f_1), 1024);
	}
}

void func_102(var uParam0, int iParam1)//Position - 0x6C75
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_103(var uParam0, int iParam1)//Position - 0x6C8A
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_104(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6C9B
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_7B;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_C = 0;
		uParam0->f_2[iVar1 /*15*/].f_D = 0;
		uParam0->f_2[iVar1 /*15*/].f_E = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_D), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_E++;
		uParam0->f_7B++;
		return 1;
	}
	return 0;
}

void func_105(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6D64
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
	if (bParam1)
	{
		func_103(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_103(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_103(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_103(&(uParam0->f_1), 8192);
	}
}

int func_106(var uParam0)//Position - 0x6DDE
{
	if ((MISC::IS_BIT_SET(uParam0->f_2A, 1) && Global_1C017E.f_A90[0] > 0) && uParam0->f_F6.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_107(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x6E15
{
	int iVar0;
	var uVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_110(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!func_109(uParam0->f_1, 256) || (func_109(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_109(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_7B)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_USING_KEYBOARD(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_USING_KEYBOARD(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_E)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_D, iVar7);
						if (!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_C, iVar7))
						{
							sVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, uVar1, bVar2);
						}
						else
						{
							sVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							func_13(sVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_109(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_108(bParam4, func_108(func_109(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_103(&(uParam0->f_1), 256);
		func_102(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

float func_108(bool bParam0, float fParam1, float fParam2)//Position - 0x70D5
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_109(var uParam0, int iParam1)//Position - 0x70EC
{
	return (uParam0 && iParam1) != 0;
}

int func_110(var uParam0)//Position - 0x70FB
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_103(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_111(var uParam0, var uParam1)//Position - 0x7122
{
	func_112(uParam1, uParam0);
}

void func_112(var uParam0, var uParam1)//Position - 0x7132
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	char cVar6[64];
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	struct<3> Var12;
	struct<3> Var13;
	bool bVar14;
	
	func_188(&(Global_1C171A.f_31), 1, 0);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_187();
	func_36();
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_185();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	func_184(1);
	func_183(1);
	if (!func_180())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!MISC::IS_BIT_SET(uParam1->f_2A, 3))
	{
		*uParam0 = func_179();
		MISC::SET_BIT(&(uParam1->f_2A), 3);
	}
	Var10 = { func_178(PLAYER::PLAYER_ID()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) || Global_1C017E.f_B10 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_1C017E.f_B0D != 2)
				{
					MISC::CLEAR_BIT(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
			{
				if (Global_1C017E.f_B0D != 3)
				{
					MISC::CLEAR_BIT(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 3;
				}
			}
			else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
			{
				if (Global_1C017E.f_B0D != 4)
				{
					MISC::CLEAR_BIT(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 4;
				}
			}
			else if (Global_1C017E.f_B10 != 0)
			{
				if (Global_1C017E.f_B0D != 5)
				{
					MISC::CLEAR_BIT(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 5;
				}
			}
			if (!MISC::IS_BIT_SET(uParam1->f_2A, 1))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_177(*uParam0, Global_1C017E.f_ADC);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1C017E.f_ADC.f_1)))
				{
					if (!func_176(uParam1->f_2C))
					{
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							cVar6 = { Global_1C017E.f_ADC.f_9 };
							func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &cVar6, Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					else if (!Global_1C017E.f_ADC.f_1B)
					{
						StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					else
					{
						StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					func_174(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
				}
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 4);
				func_173(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 5);
				func_173(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 6);
				func_173(*uParam0, &iVar3, iVar9, 1, 1);
				MISC::SET_BIT(&(uParam1->f_2A), 1);
				func_172(*uParam0);
				MISC::CLEAR_BIT(&(uParam1->f_2A), 2);
				HUD::CLEAR_HELP(1);
			}
			else
			{
				func_172(*uParam0);
			}
		}
		else
		{
			if (Global_1C017E.f_B0D != 1)
			{
				MISC::CLEAR_BIT(&(uParam1->f_2A), 1);
				Global_1C017E.f_B0D = 1;
			}
			if (!func_137(uParam1))
			{
				uParam1->f_F6.f_1 = -1;
				MISC::CLEAR_BIT(&(uParam1->f_2A), 1);
				if (!MISC::IS_BIT_SET(uParam1->f_2A, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_177(*uParam0, Global_1C017E.f_ADC);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1C017E.f_ADC.f_1)))
					{
						if (!func_176(uParam1->f_2C))
						{
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								cVar6 = { Global_1C017E.f_ADC.f_9 };
								func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &cVar6, 1, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else if (!Global_1C017E.f_ADC.f_1B)
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						func_174(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
					}
					MISC::SET_BIT(&(uParam1->f_2A), 0);
					MISC::CLEAR_BIT(&(uParam1->f_2A), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_1C017E.f_B09 == -1)
				{
					StringCopy(&Var12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_173(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_173(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_173(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						func_136(*uParam0, iVar3, iVar9, &Var12);
						iVar3++;
						iVar0++;
					}
					Global_1C017E.f_B09 = 1;
					func_82(&(Global_1C017E.f_B07));
				}
				else if (func_134(&(Global_1C017E.f_B07), 300, 0))
				{
					StringCopy(&Var13, "SC_LB_DL", 24);
					StringIntConCat(&Var13, Global_1C017E.f_B09, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_173(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_173(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_173(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						func_136(*uParam0, iVar3, iVar9, &Var13);
						iVar3++;
						iVar0++;
					}
					Global_1C017E.f_B09++;
					if (Global_1C017E.f_B09 > 3)
					{
						Global_1C017E.f_B09 = 0;
					}
					func_82(&(Global_1C017E.f_B07));
				}
				func_172(*uParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam1->f_2A), 0);
				if (!MISC::IS_BIT_SET(uParam1->f_2A, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_F6.f_BB[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_177(*uParam0, Global_1C017E.f_ADC);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1C017E.f_ADC.f_1)))
					{
						if (!func_176(uParam1->f_2C))
						{
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								cVar6 = { Global_1C017E.f_ADC.f_9 };
								func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &cVar6, 1, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else if (!Global_1C017E.f_ADC.f_1B)
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB5", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else
						{
							StringCopy(&cVar6, "FMMC_COR_SCLB6", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_175(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						func_174(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_2A, 6))
					{
						func_85(&Global_1C1269);
						func_130(uParam1, &Global_1C1269);
						func_129(uParam1, &Global_1C1269);
					}
					iVar3 = 0;
					uParam1->f_F6.f_2 = 0;
					if ((Global_1C017E.f_A90[0] > 1 || (Global_1C017E.f_A90[0] > 0 && Global_1C017E.f_AD7[0] != -1)) || (((Global_1C017E.f_A90[0] > 0 && Global_1C017E.f_ADC.f_1B) && func_176(uParam1->f_2C)) && Global_1C017E.f_AD7[0] != -1))
					{
						uParam1->f_F6.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_1C1269[iVar0 /*100*/].f_4B == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 4);
									func_173(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1C1269[iVar0 /*100*/].f_4B == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 5);
									if ((Global_1C017E.f_A90[1] < 1 && Global_1C017E.f_AD7[1] == -1) && !(((Global_1C017E.f_A90[1] > 0 && Global_1C017E.f_ADC.f_1B) && func_176(uParam1->f_2C)) && Global_1C017E.f_AD7[1] != -1))
									{
										func_173(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_173(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_1C1269[iVar0 /*100*/].f_4B == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 6);
									if (!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
									{
										bVar14 = true;
									}
									else if (!NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
									{
										bVar14 = true;
									}
									if ((Global_1C017E.f_A90[2] < 2 && Global_1C017E.f_AD7[2] == -1) && !(((Global_1C017E.f_A90[2] > 0 && Global_1C017E.f_ADC.f_1B) && func_176(uParam1->f_2C)) && Global_1C017E.f_AD7[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_173(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_173(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_128(Global_1C1269[iVar0 /*100*/].f_20))
							{
								if (func_176(uParam1->f_2C))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar11);
									if (!Global_1C1269[iVar0 /*100*/].f_4A && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_2C.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_1C017E.f_ADC.f_1B)
									{
										if (func_127(&(Global_1C1269[iVar0 /*100*/].f_20), &Var10))
										{
											MISC::SET_BIT(&iVar9, 1);
											if (uParam1->f_F6.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_F6.f_1 = iVar0;
												MISC::SET_BIT(&iVar9, 3);
											}
										}
									}
									if (func_176(uParam1->f_2C))
									{
										cVar6 = { Global_1C1269[iVar0 /*100*/] };
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1C1269[iVar0 /*100*/].f_54)) && !MISC::ARE_STRINGS_EQUAL(&(Global_1C1269[iVar0 /*100*/].f_54), ""))
										{
											StringConCat(&cVar6, "/", 64);
											StringConCat(&cVar6, &(Global_1C1269[iVar0 /*100*/].f_54), 64);
										}
										func_126(*uParam0, iVar3, iVar9, Global_1C1269[iVar0 /*100*/].f_3B, &cVar6, &(Global_1C1269[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C1269[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									else
									{
										func_126(*uParam0, iVar3, iVar9, Global_1C1269[iVar0 /*100*/].f_3B, &(Global_1C1269[iVar0 /*100*/]), &(Global_1C1269[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C1269[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1C017E.f_A94)
									{
										bVar5 = false;
										if (MISC::IS_BIT_SET(Global_1C017E.f_AD2, iVar1))
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD0, iVar1))
											{
												if (Global_1C017E.f_AC2[iVar1] == Global_1C1269[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_121(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_43[iVar1], 0, Global_1C1269[iVar0 /*100*/].f_3A);
											}
											else
											{
												func_121(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_43[iVar1], Global_1C1269[iVar0 /*100*/].f_4A, Global_1C1269[iVar0 /*100*/].f_3A);
											}
										}
										else
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD0, iVar1))
											{
												if (Global_1C017E.f_AC9[iVar1] == Global_1C1269[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_118(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_3C[iVar1], 0);
											}
											else
											{
												func_118(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_3C[iVar1], Global_1C1269[iVar0 /*100*/].f_4A);
											}
										}
										iVar1++;
									}
									func_117();
									uVar2[(Global_1C1269[iVar0 /*100*/].f_4B - 1)]++;
									if (uVar2[(Global_1C1269[iVar0 /*100*/].f_4B - 1)] == 2)
									{
										if (Global_1C1269[iVar0 /*100*/].f_3B > 2)
										{
											MISC::SET_BIT(&iVar9, 2);
											MISC::SET_BIT(&(uParam1->f_F6.f_6[0 /*15*/].f_1), 2);
											func_116(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3 = (iVar3 + 1);
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_F6.f_BB[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 4);
						func_173(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 5);
						func_173(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 6);
						func_173(*uParam0, &iVar3, iVar9, 1, 0);
					}
					MISC::SET_BIT(&(uParam1->f_2A), 1);
					MISC::CLEAR_BIT(&(uParam1->f_2A), 2);
					func_172(*uParam0);
					HUD::CLEAR_HELP(1);
					if (uParam1->f_F6.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_1C017E.f_A90[0] > 1)
						{
							uParam1->f_F6.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
							func_116(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_172(*uParam0);
					func_113(uParam0, uParam1);
				}
			}
		}
	}
}

void func_113(var uParam0, var uParam1)//Position - 0x810F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_F6.f_1;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		PAD::SET_INPUT_EXCLUSIVE(2, 239);
		PAD::SET_INPUT_EXCLUSIVE(2, 240);
		PAD::SET_INPUT_EXCLUSIVE(2, 237);
		PAD::SET_INPUT_EXCLUSIVE(2, 238);
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241))
		{
			PAD::_SET_CONTROL_NORMAL(2, 188, 1f);
		}
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242))
		{
			PAD::_SET_CONTROL_NORMAL(2, 187, 1f);
		}
		if (HUD::_0x632B2940C67F4EA9(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_F6.f_BB[0])
				{
					if (iVar3 <= (uParam1->f_F6.f_BB[0] + uParam1->f_F6.f_BB[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_F6.f_1 != iVar3)
				{
					uParam1->f_F6.f_1 = iVar3;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					PAD::_SET_CONTROL_NORMAL(2, 217, 1f);
				}
			}
		}
	}
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		func_115(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_F6.f_2 > 0)
	{
		if (!MISC::IS_BIT_SET(uParam1->f_F6, 0))
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 188) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 188)) || iVar6 < -100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_F6.f_1 = (uParam1->f_F6.f_1 + -1);
				MISC::SET_BIT(&(uParam1->f_F6), 0);
				func_82(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_114(uParam1, 188))
		{
			MISC::CLEAR_BIT(&(uParam1->f_F6), 0);
		}
		if (!MISC::IS_BIT_SET(uParam1->f_F6, 1))
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 187) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 187)) || iVar6 > 100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_F6.f_1++;
				MISC::SET_BIT(&(uParam1->f_F6), 1);
				func_82(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_114(uParam1, 187))
		{
			MISC::CLEAR_BIT(&(uParam1->f_F6), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_F6.f_1 < 0)
		{
			uParam1->f_F6.f_1 = (uParam1->f_F6.f_2 - 1);
		}
		if (uParam1->f_F6.f_1 >= uParam1->f_F6.f_2)
		{
			uParam1->f_F6.f_1 = 0;
		}
	}
	if (!MISC::IS_BIT_SET(uParam1->f_F6, 3))
	{
		if ((PAD::IS_CONTROL_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			MISC::SET_BIT(&(uParam1->f_F6), 3);
			func_82(&(uParam1->f_F6.f_3));
			bVar0 = true;
		}
	}
	else if (func_114(uParam1, 204))
	{
		MISC::CLEAR_BIT(&(uParam1->f_F6), 3);
	}
	if (uParam1->f_F6.f_1 >= 0)
	{
		if (uParam1->f_F6.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				MISC::CLEAR_BIT(&(uParam1->f_F6.f_6[iVar1 /*15*/].f_1), 3);
				func_116(*uParam0, uParam1->f_F6.f_6[iVar1 /*15*/], uParam1->f_F6.f_6[iVar1 /*15*/].f_1);
			}
			MISC::SET_BIT(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
			func_116(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
			MISC::CLEAR_BIT(&(uParam1->f_2A), 2);
		}
		if (func_128(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_F6, 2))
			{
				if (PAD::IS_CONTROL_PRESSED(2, 217) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 217))
				{
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						MISC::SET_BIT(&(uParam1->f_F6), 2);
						NETWORK::NETWORK_SHOW_PROFILE_UI(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!PAD::IS_CONTROL_PRESSED(2, 217))
			{
				MISC::CLEAR_BIT(&(uParam1->f_F6), 2);
			}
		}
	}
}

int func_114(var uParam0, int iParam1)//Position - 0x84B1
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_115(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_134(&(uParam0->f_F6.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) || func_134(&(uParam0->f_F6.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_115(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x8550
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_116(var uParam0, int iParam1, int iParam2)//Position - 0x8625
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_117()//Position - 0x8648
{
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_118(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)//Position - 0x8654
{
	switch (Param0.f_1D[iParam14])
	{
		case 4:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(SYSTEM::FLOOR(fParam15));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 18 || Param0.f_1D[iParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_1D[iParam14] == 19 || Param0.f_1D[iParam14] == 20)
					{
						fParam15 = func_120(fParam15);
					}
					else
					{
						fParam15 = func_119(fParam15);
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

float func_119(float fParam0)//Position - 0x8776
{
	return (fParam0 / 0.3048f);
}

float func_120(float fParam0)//Position - 0x8786
{
	return (fParam0 / 1609.344f);
}

void func_121(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)//Position - 0x8796
{
	if (iParam15 == 2147483647 || iParam15 == -2147483647)
	{
		bParam16 = false;
	}
	switch (Param0.f_1D[iParam14])
	{
		case 5:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(-iParam15);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * -1);
				}
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_1D[iParam14] == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * -1);
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_1D[iParam14] == 10)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam15))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SCLB_VEH_CUST");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam15))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 8:
			if (func_125(iParam15) != 0)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_122(func_125(iParam15), 0));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 14 || Param0.f_1D[iParam14] == 16)
				{
					iParam15 = (iParam15 * -1);
				}
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_1D[iParam14] == 15 || Param0.f_1D[iParam14] == 16)
					{
						iParam15 = SYSTEM::FLOOR(func_120(SYSTEM::TO_FLOAT(iParam15)));
					}
					else
					{
						iParam15 = SYSTEM::FLOOR(func_119(SYSTEM::TO_FLOAT(iParam15)));
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_122(int iParam0, bool bParam1)//Position - 0x8B30
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		default:
			if (func_124(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_123(&(Var0.f_1F));
				}
				else
				{
					return func_123(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_123(var uParam0)//Position - 0x938D
{
	return uParam0;
}

int func_124(int iParam0, var uParam1)//Position - 0x9397
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_125(int iParam0)//Position - 0x93D2
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return -947031628;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_126(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char* sParam5)//Position - 0x9545
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (iParam3 > 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(cParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam5);
}

int func_127(var uParam0, var uParam1)//Position - 0x9597
{
	if (!func_128(*uParam0))
	{
		return 0;
	}
	if (!func_128(*uParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_128(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x95D1
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_129(var uParam0, var uParam1)//Position - 0x95E1
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	if (!MISC::IS_BIT_SET(uParam0->f_2A, 5) && !MISC::IS_BIT_SET(uParam0->f_2A, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_4B != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_4B != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_4B < (uParam1[iVar0 /*100*/])->f_4B)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
							(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
							(uParam1[iVar0 /*100*/])->f_4B = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_4B == (uParam1[iVar0 /*100*/])->f_4B)
						{
							if ((uParam1[iVar1 /*100*/])->f_3B != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_3B < (uParam1[iVar0 /*100*/])->f_3B || (uParam1[iVar0 /*100*/])->f_3B == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
									(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
									(uParam1[iVar0 /*100*/])->f_4B = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_130(var uParam0, var uParam1)//Position - 0x9752
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!MISC::IS_BIT_SET(uParam0->f_2A, 5) && !MISC::IS_BIT_SET(uParam0->f_2A, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_133(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_133(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_133(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_131(uParam1);
	}
}

void func_131(var uParam0)//Position - 0x9807
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C017E.f_A90[iVar0] = 0;
		Global_1C017E.f_AD7[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_178(PLAYER::PLAYER_ID()) };
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C017E.f_B0A))
	{
		iVar4 = STATS::LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(Global_1C017E.f_B0A);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_132(&Global_1C11E7);
				iVar2 = 0;
				STATS::LEADERBOARDS_GET_CACHE_DATA_ROW(Global_1C017E.f_B0A, iVar0, &Global_1C11E7);
				*(uParam0[iVar0 /*100*/]) = { Global_1C11E7.f_1 };
				(uParam0[iVar0 /*100*/])->f_10 = { Global_1C11E7.f_11 };
				(uParam0[iVar0 /*100*/])->f_20 = { Global_1C11E7.f_21 };
				(uParam0[iVar0 /*100*/])->f_2D = { Global_1C11E7.f_2E };
				(uParam0[iVar0 /*100*/])->f_3A = Global_1C11E7.f_3B;
				(uParam0[iVar0 /*100*/])->f_3B = Global_1C11E7.f_3C;
				Global_1C017E.f_A94 = Global_1C11E7.f_3E;
				Global_1C017E.f_AD1 = Global_1C11E7.f_3F;
				iVar2 = 0;
				if (MISC::IS_BIT_SET(Global_1C11E7.f_3D, 1))
				{
					iVar2 = 1;
				}
				else if (MISC::IS_BIT_SET(Global_1C11E7.f_3D, 2))
				{
					iVar2 = 2;
				}
				else if (MISC::IS_BIT_SET(Global_1C11E7.f_3D, 3))
				{
					iVar2 = 3;
				}
				Global_1C017E.f_A90[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_4B = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_3B != -1)
				{
					if (MISC::IS_BIT_SET(Global_1C11E7.f_3D, 0))
					{
						(uParam0[iVar0 /*100*/])->f_4A = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_4A = 0;
					}
					if (func_127(&((uParam0[iVar0 /*100*/])->f_20), &Var3))
					{
						Global_1C017E.f_AD7[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1C11E7.f_3E)
				{
					if (MISC::IS_BIT_SET(Global_1C11E7.f_3F, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_43[iVar1] = Global_1C11E7.f_61[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_3C[iVar1] = Global_1C11E7.f_40[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_132(var uParam0)//Position - 0x9A27
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_11), "", 64);
	uParam0->f_21 = { Var0 };
	uParam0->f_2E = { Var0 };
	uParam0->f_3B = 0;
	uParam0->f_3C = 0;
	uParam0->f_3D = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_40[iVar1] = 0f;
		uParam0->f_61[iVar1] = 0;
		iVar1++;
	}
}

int func_133(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x9A9D
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1C017E[iParam3 /*901*/][0 /*75*/].f_3B > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][0 /*75*/] };
			Global_1C11AE[iParam3 /*16*/] = { Global_1C017E[iParam3 /*901*/][0 /*75*/] };
			Global_1C11AE.f_31[iParam3] = Global_1C017E[iParam3 /*901*/][0 /*75*/].f_43[Global_1C017E.f_ADB];
			Global_1C11AE.f_35[iParam3] = Global_1C017E[iParam3 /*901*/][0 /*75*/].f_3C[Global_1C017E.f_ADB];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1C017E.f_AD7[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][Global_1C017E.f_AD7[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1C017E.f_AD7[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
				(uParam0[iParam1 /*100*/])->f_20 = { func_178(PLAYER::PLAYER_ID()) };
				(uParam0[iParam1 /*100*/])->f_3B = -1;
				(uParam0[iParam1 /*100*/])->f_43[0] = -1;
				(uParam0[iParam1 /*100*/])->f_43[1] = -1;
				(uParam0[iParam1 /*100*/])->f_43[2] = -1;
				(uParam0[iParam1 /*100*/])->f_43[3] = -1;
				(uParam0[iParam1 /*100*/])->f_3C[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1C017E.f_AD7[iParam3] - iVar0) >= 1)
		{
			if (Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] - iVar0) /*75*/].f_3B > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_1C017E.f_AD7[iParam3] + iVar0) < 12 && (Global_1C017E.f_AD7[iParam3] + iVar0) > 0)
		{
			if (Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] + iVar0) /*75*/].f_3B > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

int func_134(var uParam0, int iParam1, bool bParam2)//Position - 0x9D46
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_135(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_135(var uParam0, bool bParam1, bool bParam2)//Position - 0x9DA4
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_136(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x9DE9
{
	MISC::SET_BIT(&iParam2, 7);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_137(var uParam0)//Position - 0x9E1D
{
	if (!Global_1C017C)
	{
		if (!func_171(&(Global_1C017E.f_B0B)))
		{
			func_135(&(Global_1C017E.f_B0B), 1, 0);
			return 0;
		}
		else if (!func_134(&(Global_1C017E.f_B0B), 1000, 1))
		{
			return 0;
		}
	}
	if (((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) || Global_1C017E.f_B10 != 0)
	{
		MISC::CLEAR_BIT(&(uParam0->f_2A), 4);
		return 1;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_2A, 4))
	{
		func_170(uParam0);
		MISC::SET_BIT(&(uParam0->f_2A), 4);
		return 0;
	}
	else if (MISC::IS_BIT_SET(uParam0->f_2A, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_168(uParam0))
	{
		return 0;
	}
	if (!func_166(uParam0))
	{
		return 0;
	}
	if (!func_153(uParam0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_2A, 6))
	{
		func_85(&Global_1C1269);
		func_130(uParam0, &Global_1C1269);
		func_129(uParam0, &Global_1C1269);
		MISC::SET_BIT(&(uParam0->f_2A), 6);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_2A, 7))
	{
		if (!func_171(&(Global_1C017E.f_B0E)))
		{
			func_135(&(Global_1C017E.f_B0E), 1, 0);
		}
		else if (func_134(&(Global_1C017E.f_B0E), 30000, 1))
		{
			MISC::SET_BIT(&(uParam0->f_2A), 7);
		}
		if (func_150(&Global_1C1269))
		{
		}
		else
		{
			return 0;
		}
		if (func_147(&Global_1C1269))
		{
		}
		else
		{
			return 0;
		}
		if (func_142(&Global_1C1269))
		{
			func_138(&Global_1C1269);
			MISC::SET_BIT(&(uParam0->f_2A), 7);
			func_138(&Global_1C1269);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_138(var uParam0)//Position - 0x9FE2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_141(Global_1C017E.f_B0A);
	if (Global_1C0DEF.f_51[iVar2] != 0)
	{
		func_140(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_132(&Global_1C11E7);
		if ((uParam0[iVar0 /*100*/])->f_4B != 0)
		{
			Global_1C11E7 = Global_1C017E.f_B0A;
			Global_1C11E7.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*100*/])->f_10), ""))
			{
				Global_1C11E7.f_11 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1C11E7.f_11 = { (uParam0[iVar0 /*100*/])->f_10 };
			}
			Global_1C11E7.f_21 = { (uParam0[iVar0 /*100*/])->f_20 };
			if (func_128((uParam0[iVar0 /*100*/])->f_2D))
			{
				Global_1C11E7.f_2E = { (uParam0[iVar0 /*100*/])->f_2D };
			}
			else
			{
				Global_1C11E7.f_2E = { (uParam0[iVar0 /*100*/])->f_20 };
			}
			Global_1C11E7.f_3B = (uParam0[iVar0 /*100*/])->f_3A;
			Global_1C11E7.f_3C = (uParam0[iVar0 /*100*/])->f_3B;
			Global_1C11E7.f_3E = Global_1C017E.f_A94;
			Global_1C11E7.f_3F = Global_1C017E.f_AD2;
			if ((uParam0[iVar0 /*100*/])->f_4A)
			{
				MISC::SET_BIT(&(Global_1C11E7.f_3D), 0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1C11E7.f_3D), 0);
			}
			MISC::SET_BIT(&(Global_1C11E7.f_3D), (uParam0[iVar0 /*100*/])->f_4B);
			iVar1 = 0;
			while (iVar1 < Global_1C11E7.f_3E)
			{
				if (MISC::IS_BIT_SET(Global_1C11E7.f_3F, iVar1))
				{
					Global_1C11E7.f_61[iVar1] = (uParam0[iVar0 /*100*/])->f_43[iVar1];
				}
				else
				{
					Global_1C11E7.f_40[iVar1] = (uParam0[iVar0 /*100*/])->f_3C[iVar1];
				}
				iVar1++;
			}
			Global_1C0DEF.f_51[iVar2] = Global_1C017E.f_B0A;
			STATS::LEADERBOARDS_CACHE_DATA_ROW(&Global_1C11E7);
		}
		iVar0++;
	}
	Global_1C0DEF.f_57[iVar2 /*3*/] = { func_139(PLAYER::PLAYER_ID()) };
}

Vector3 func_139(int iParam0)//Position - 0xA1CC
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

void func_140(int iParam0, int iParam1)//Position - 0xA1DF
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C0DEF.f_51[iParam1]))
		{
			STATS::_0x8EC74CEB042E7CFF(Global_1C0DEF.f_51[iParam1]);
		}
		Global_1C0DEF.f_51[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(iParam0))
		{
			STATS::_0x8EC74CEB042E7CFF(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1C0DEF.f_51[iVar0] == iParam0)
			{
				Global_1C0DEF.f_51[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_141(int iParam0)//Position - 0xA25B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DEF.f_51[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DEF.f_51[iVar0] == 0)
		{
			return iVar0;
		}
		else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C0DEF.f_51[iVar0]))
		{
			iVar3 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1C0DEF.f_51[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_142(var uParam0)//Position - 0xA2EE
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_4C)
	{
		case 0:
			func_146(uParam0);
			if (MISC::IS_ORBIS_VERSION() && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				(uParam0[0 /*100*/])->f_4C = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_128((uParam0[iVar0 /*100*/])->f_20))
				{
					if (!func_145(&((uParam0[iVar0 /*100*/])->f_20), &Global_1C177A))
					{
						Global_1C177A[Global_1C177A.f_CE /*13*/] = { (uParam0[iVar0 /*100*/])->f_20 };
						Global_1C177A.f_CE++;
					}
				}
				iVar0++;
			}
			if (Global_1C177A.f_CE > 0)
			{
				(uParam0[0 /*100*/])->f_4C = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4C = 3;
			}
			break;
		
		case 1:
			if (func_143(&((uParam0[1 /*100*/])->f_4C), &(Global_1C177A.f_CE), &Global_1C177A, &(Global_1C177A.f_9D)))
			{
				(uParam0[0 /*100*/])->f_4C = 2;
			}
			break;
		
		case 2:
			if (Global_1C177A.f_CE > 12)
			{
				Global_1C177A.f_CE = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1C177A.f_CE)
				{
					if (func_128((uParam0[iVar0 /*100*/])->f_20) && func_128(Global_1C177A[iVar1 /*13*/]))
					{
						if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((uParam0[iVar0 /*100*/])->f_20), &(Global_1C177A[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_50 = { Global_1C177A.f_9D[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_4C = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_143(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xA491
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_START(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_NEW(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_144(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_144(var uParam0, var uParam1)//Position - 0xA54A
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, uParam1);
}

int func_145(var uParam0, var uParam1)//Position - 0xA55C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_128(*(uParam1[iVar0 /*13*/])))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_146(var uParam0)//Position - 0xA59B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_90(&(Global_1C177A[iVar0 /*13*/]));
		StringCopy(&(Global_1C177A.f_9D[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_4C > 0)
	{
		(uParam0[0 /*100*/])->f_4C = 0;
		(uParam0[1 /*100*/])->f_4C = 0;
		if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
		{
			NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
		}
	}
	if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
	{
		NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
	}
	Global_1C177A.f_CE = 0;
}

int func_147(var uParam0)//Position - 0xA60C
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	else if (MISC::IS_DURANGO_VERSION())
	{
		if (!func_149(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_148(&((uParam0[iVar0 /*100*/])->f_4E), &((uParam0[iVar0 /*100*/])->f_20), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_148(var uParam0, var uParam1, char* sParam2)//Position - 0xA670
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_128(*uParam1))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
				{
					if (MISC::IS_DURANGO_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (MISC::IS_XBOX360_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (MISC::IS_ORBIS_VERSION())
						{
						}
						else if (MISC::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_149(var uParam0)//Position - 0xA777
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!MISC::IS_DURANGO_VERSION())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_4E == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_4E)
	{
		case 0:
			Global_1C017E.f_C6F = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1C017E.f_B11[iVar1 /*16*/]), "", 64);
				func_90(&(Global_1C017E.f_BD2[iVar1 /*13*/]));
				if (func_128((uParam0[iVar1 /*100*/])->f_20))
				{
					Global_1C017E.f_BD2[Global_1C017E.f_C6F /*13*/] = { (uParam0[iVar1 /*100*/])->f_20 };
					Global_1C017E.f_C6F++;
				}
				iVar1++;
			}
			if (Global_1C017E.f_C6F > 0)
			{
				(uParam0[0 /*100*/])->f_4F = NETWORK::_0xD66C9E72B3CC4982(&(Global_1C017E.f_BD2), Global_1C017E.f_C6F);
				(uParam0[0 /*100*/])->f_4E = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES((uParam0[0 /*100*/])->f_4F, &(Global_1C017E.f_B11), Global_1C017E.f_C6F);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_128((uParam0[iVar1 /*100*/])->f_20))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1C017E.f_B11[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_4F = -1;
			return 1;
			break;
	}
	return 0;
}

int func_150(var uParam0)//Position - 0xA903
{
	int iVar0;
	
	if (MISC::IS_DURANGO_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_152(&((uParam0[iVar0 /*100*/])->f_4D), &((uParam0[iVar0 /*100*/])->f_10), &((uParam0[iVar0 /*100*/])->f_54), &(Global_1C017E.f_B11), &((uParam0[iVar0 /*100*/])->f_4F)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_151(&((uParam0[iVar0 /*100*/])->f_4D), (uParam0[iVar0 /*100*/])->f_10, &((uParam0[iVar0 /*100*/])->f_54)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)//Position - 0xA996
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_128(Var0))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
				{
					if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (MISC::IS_ORBIS_VERSION())
						{
						}
						else if (MISC::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_152(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)//Position - 0xAAAE
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!MISC::IS_DURANGO_VERSION())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_128(Var1[0 /*13*/]))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var1[0 /*13*/])))
				{
					*uParam4 = NETWORK::_0xD66C9E72B3CC4982(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_153(var uParam0)//Position - 0xABAA
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_13.f_1 = 4;
	iVar5 = -1;
	iVar9 = 2;
	Var12 = { func_178(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_1C017E.f_AD7[iVar9] = -1;
			Global_1C017E.f_A90[iVar9] = 0;
			Global_1C0005.f_176 = -1;
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var12))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_2C.f_2 = uParam0->f_7;
						uParam0->f_2C.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_164(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var12, func_165(), 0, 0, 0))
			{
				func_163(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_165())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar7, &Var0);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_127(&Var0, &Var12) || func_127(&Var0, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var0.f_60;
									}
								}
								if (iVar5 < 0)
								{
									if (MISC::IS_BIT_SET(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= STATS::_0x88578F6EC36B4A3A(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_162(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_60 <= 1)
						{
							if (Global_1C017E.f_A90[iVar9] < 12)
							{
								if (func_165() && iVar5 == 0)
								{
									func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
									Global_1C017E.f_AD7[iVar9] = 0;
									Global_1C017E.f_A90[iVar9]++;
								}
								if (func_165() && (func_127(&Var0, &Var12) || func_127(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_127(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1C017E.f_AD7[iVar9] = 0;
									}
									MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									if (func_160(uParam0->f_2C))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A95);
										if (iVar4 == 1)
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_176(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C017E.f_A90[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_1C017E.f_A90[iVar9]++;
						}
						if (!func_165())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_162(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar7, &Var0);
							if (Global_1C017E.f_A90[iVar9] < 12 && Var0.f_60 > 1)
							{
								if (func_165() && iVar5 == iVar7)
								{
									if (!func_127(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20), &Var12))
									{
										func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
										Global_1C017E.f_A90[iVar9]++;
									}
								}
								if (func_165() && (func_127(&Var0, &Var12) || func_127(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[iVar9] < 12)
								{
									if (func_128(Var0) && !func_127(&Var0, &(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_127(&Var0, &Var12))
										{
											if (Global_1C017E.f_AD7[iVar9] < 0)
											{
												Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
											}
										}
										MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
										Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
										Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
										Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
										if (func_160(uParam0->f_2C))
										{
											iVar4 = STATS::_0x88578F6EC36B4A3A(iVar7, Global_1C017E.f_A95);
											if (iVar4 == 1)
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
											}
										}
										if (func_176(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_1C017E.f_A94)
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar2] = STATS::_0x88578F6EC36B4A3A(iVar7, Global_1C017E.f_A96[iVar2]);
											}
											else
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar2] = STATS::_0x38491439B6BA7F7D(iVar7, Global_1C017E.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C017E.f_A90[iVar9]++;
									}
								}
							}
							func_162(&Var0);
							iVar7++;
						}
						STATS::_0x71B008056E5692D6();
						func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar8)
						{
							if (Global_1C017E.f_AD7[iVar9] == -1 && func_165())
							{
								if (Global_1C017E.f_A90[iVar9] >= 1)
								{
									func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
								Global_1C017E.f_A90[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_1C017E.f_A90[iVar9]++;
						}
						STATS::_0x71B008056E5692D6();
						func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_AD7[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C017E.f_AD7[iVar9] = -1;
					(*uParam0)[iVar9] = 2;
					MISC::SET_BIT(&(Global_1C017E.f_B10), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_1C017E.f_AD7[iVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_155(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar11))
			{
				func_163(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar2, &Var0);
							bVar10 = false;
							if (Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3B > 1 || Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3B <= 0)
							{
								bVar10 = true;
							}
							if (Global_1C017E.f_A90[iVar9] < 12 || bVar10)
							{
								if (func_165() && (func_127(&Var0, &Var12) || func_127(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1C017E[iVar9 /*901*/][0 /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20 = { Var0 };
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3B = Var0.f_60;
									if (func_160(uParam0->f_2C))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A95);
										if (iVar4 == 1)
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3A = 0;
										}
									}
									if (func_176(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (Global_1C017E.f_A90[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1C017E.f_A90[iVar9]++;
										}
									}
								}
								else if (Global_1C017E.f_A90[iVar9] < 12)
								{
									MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									if (func_160(uParam0->f_2C))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(iVar2, Global_1C017E.f_A95);
										if (iVar4 == 1)
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_176(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(iVar2, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(iVar2, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_1C017E.f_A90[iVar9]++;
									}
								}
							}
							func_162(&Var0);
							iVar2++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					STATS::_0x71B008056E5692D6();
					func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					MISC::SET_BIT(&(Global_1C017E.f_B10), iVar9);
					Global_1C017E.f_A90[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1C017E.f_AD7[iVar9] == -1 && func_165())
				{
					if (Global_1C017E.f_A90[iVar9] >= 1)
					{
						func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
					}
					else
					{
						func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
					}
					Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
					Global_1C017E.f_A90[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_154(iVar9, Global_1C0005.f_176);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_154(int iParam0, int iParam1)//Position - 0xB9DD
{
	int iVar0;
	
	if ((func_165() && Global_1C017E.f_A90[iParam0] > Global_1C017E.f_AD7[iParam0]) && Global_1C017E.f_AD7[iParam0] >= 0)
	{
		if (iParam1 != Global_1C017E[iParam0 /*901*/][Global_1C017E.f_AD7[iParam0] /*75*/].f_3B)
		{
			iVar0 = 0;
			while (iVar0 < Global_1C017E.f_A90[iParam0])
			{
				if (iVar0 != Global_1C017E.f_AD7[iParam0])
				{
					if (Global_1C017E[iParam0 /*901*/][iVar0 /*75*/].f_3B >= Global_1C017E[iParam0 /*901*/][Global_1C017E.f_AD7[iParam0] /*75*/].f_3B)
					{
						if (Global_1C017E[iParam0 /*901*/][iVar0 /*75*/].f_3B < iParam1 || iParam1 == -1)
						{
							Global_1C017E[iParam0 /*901*/][iVar0 /*75*/].f_3B++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_165())
		{
		}
		if (Global_1C017E.f_A90[iParam0] <= Global_1C017E.f_AD7[iParam0])
		{
		}
		if (Global_1C017E.f_AD7[iParam0] < 0)
		{
		}
	}
}

int func_155(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0xBB02
{
	switch (*uParam0)
	{
		case 0:
			if (!func_158() && !func_157())
			{
				func_156(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_RANK(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_156(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)//Position - 0xBBB8
{
	Global_1C0000 = 1;
	func_188(&(Global_1C0000.f_1), 1, 0);
	Global_1C0000.f_3 = Param0;
	Global_1C0000.f_4 = Param0.f_1;
}

int func_157()//Position - 0xBBE3
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_180())
	{
		return 1;
	}
	return 0;
}

int func_158()//Position - 0xBC01
{
	if (STATS::LEADERBOARDS_READ_ANY_PENDING() || Global_1C0000)
	{
		func_159();
		return 1;
	}
	return 0;
}

void func_159()//Position - 0xBC23
{
	if (func_134(&(Global_1C0000.f_1), 120000, 1))
	{
		STATS::LEADERBOARDS_READ_CLEAR(Global_1C0000.f_3, Global_1C0000.f_4, -1);
		Global_1C0000 = 0;
		func_82(&(Global_1C0000.f_1));
	}
}

int func_160(int iParam0)//Position - 0xBC5E
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_161(var uParam0, char* sParam1, int iParam2)//Position - 0xBCBC
{
	int iVar0;
	int iVar1;
	
	if (func_176(uParam0->f_2C))
	{
		MemCopy(sParam1, {Global_1C0005.f_163}, 16);
		sParam1->f_20 = { Global_1C0005.f_169 };
		MemCopy(&(sParam1->f_10), {Global_1C0005.f_15D}, 16);
	}
	else
	{
		StringCopy(sParam1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
		sParam1->f_20 = { func_178(PLAYER::PLAYER_ID()) };
	}
	sParam1->f_3B = iParam2;
	if (func_160(uParam0->f_2C))
	{
		iVar0 = Global_1C0005.f_D3.f_24[Global_1C017E.f_A95];
		if (iVar0 == 1)
		{
			sParam1->f_3A = 1;
		}
		else
		{
			sParam1->f_3A = 0;
		}
	}
	sParam1->f_4A = 1;
	iVar1 = 0;
	while (iVar1 < Global_1C017E.f_A94)
	{
		if (MISC::IS_BIT_SET(Global_1C0005.f_8E.f_2, Global_1C017E.f_A96[iVar1]))
		{
			sParam1->f_43[iVar1] = Global_1C0005.f_D3.f_24[Global_1C017E.f_A96[iVar1]];
		}
		else
		{
			sParam1->f_3C[iVar1] = Global_1C0005.f_D3.f_3[Global_1C017E.f_A96[iVar1]];
		}
		iVar1++;
	}
}

void func_162(var uParam0)//Position - 0xBDC9
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
	StringCopy(&(uParam0->f_D), "", 24);
	uParam0->f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_55 = 0;
	StringCopy(&(uParam0->f_56), "", 32);
	StringCopy(&(uParam0->f_5E), "", 8);
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
}

void func_163(var uParam0, var uParam1)//Position - 0xBE77
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_164(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0xBE92
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1C0005.f_D3.f_24[0];
	uVar1 = Global_1C0005.f_D3.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_158() && !func_157())
			{
				func_156(*uParam2);
				if (bParam5)
				{
					if (MISC::IS_BIT_SET(Global_1C0005.f_8E.f_2, 0))
					{
						if (STATS::LEADERBOARDS2_READ_BY_SCORE_INT(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (STATS::LEADERBOARDS2_READ_BY_SCORE_FLOAT(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (STATS::LEADERBOARDS2_READ_BY_RADIUS(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_165()//Position - 0xBFCA
{
	if (Global_1C017C && Global_1C017D)
	{
		return 1;
	}
	return 0;
}

int func_166(var uParam0)//Position - 0xBFE7
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_13.f_1 = 4;
	iVar4 = -1;
	iVar9 = 1;
	Var10 = { func_178(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = NETWORK::NETWORK_GET_FRIEND_COUNT();
			Global_1C017E.f_AD7[1] = -1;
			Global_1C0005.f_176 = -1;
			Global_1C017E.f_A90[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_165())
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (func_167(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &(uParam0->f_71), uParam0->f_71[0 /*66*/], iVar8, 0, 100))
				{
					func_163(&Var1, &(uParam0->f_2C));
					if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
					{
						if (func_165())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									STATS::_0x34770B9CE0E03B91(iVar6, &Var0);
									if (func_176(uParam0->f_2C))
									{
										if (Global_1C0005.f_176 < 0)
										{
											if (func_127(&Var0, &(Global_1C0005.f_169)))
											{
												Global_1C0005.f_176 = Var0.f_60;
											}
										}
									}
									if (MISC::IS_BIT_SET(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= STATS::_0x88578F6EC36B4A3A(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_162(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_165() && iVar4 == 0)
						{
							if (Global_1C017E.f_A90[iVar9] < 12)
							{
								func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								Global_1C017E.f_AD7[iVar9] = 0;
								Global_1C017E.f_A90[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							STATS::_0x34770B9CE0E03B91(0, &Var0);
							if (func_165() && (func_127(&Var0, &Var10) || func_127(&Var0, &(Global_1C0005.f_169))))
							{
							}
							else if (func_128(Var0) && Global_1C017E.f_A90[iVar9] < 12)
							{
								if (func_127(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1C017E.f_AD7[1] = 0;
								}
								MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = 1;
								if (func_160(uParam0->f_2C))
								{
									iVar7 = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A95);
									if (iVar7 == 1)
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
									}
									else
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
									}
								}
								if (func_176(uParam0->f_2C))
								{
									MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
								iVar2 = 0;
								while (iVar2 < Global_1C017E.f_A94)
								{
									if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar2] = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A96[iVar2]);
									}
									else
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar2] = STATS::_0x38491439B6BA7F7D(0, Global_1C017E.f_A96[iVar2]);
									}
									iVar2++;
								}
								Global_1C017E.f_A90[1]++;
							}
							else
							{
								func_162(&Var0);
								STATS::_0x71B008056E5692D6();
								func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
								Global_1C017E.f_A90[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1C017E.f_AD7[iVar9] == -1 && func_165())
								{
									if (Global_1C017E.f_A90[iVar9] >= 1)
									{
										func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
									}
									else
									{
										func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
									}
									Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
									Global_1C017E.f_A90[iVar9]++;
								}
								return 0;
							}
							func_162(&Var0);
						}
						else
						{
							Global_1C017E.f_A90[1] = 0;
							func_162(&Var0);
							STATS::_0x71B008056E5692D6();
							func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
							if (Global_1C017E.f_AD7[iVar9] == -1 && func_165())
							{
								if (Global_1C017E.f_A90[iVar9] >= 1)
								{
									func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
								Global_1C017E.f_A90[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_165())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar6, &Var0);
							if (Global_1C017E.f_A90[iVar9] < 12 && Var0.f_60 > 1)
							{
								if (func_165() && iVar4 == iVar6)
								{
									if (!func_127(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20), &Var10))
									{
										func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
										Global_1C017E.f_A90[iVar9]++;
									}
								}
								if (func_165() && (func_127(&Var0, &Var10) || func_127(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[1] < 12)
								{
									if (func_128(Var0) && !func_127(&Var0, &(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_127(&Var0, &Var10))
										{
											if (Global_1C017E.f_AD7[1] < 0)
											{
												Global_1C017E.f_AD7[1] = Global_1C017E.f_A90[1];
											}
										}
										MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/]), {Var0.f_D}, 16);
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_20 = { Var0 };
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_4A = 1;
										if (func_160(uParam0->f_2C))
										{
											iVar7 = STATS::_0x88578F6EC36B4A3A(iVar6, Global_1C017E.f_A95);
											if (iVar7 == 1)
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3A = 0;
											}
										}
										if (func_176(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_1C017E.f_A94)
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_43[iVar2] = STATS::_0x88578F6EC36B4A3A(iVar6, Global_1C017E.f_A96[iVar2]);
											}
											else
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3C[iVar2] = STATS::_0x38491439B6BA7F7D(iVar6, Global_1C017E.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C017E.f_A90[1]++;
									}
								}
							}
							func_162(&Var0);
							iVar6++;
						}
						STATS::_0x71B008056E5692D6();
						func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						(*uParam0)[1] = 1;
						if (Global_1C017E.f_AD7[iVar9] == -1 && func_165())
						{
							if (Global_1C017E.f_A90[iVar9] >= 1)
							{
								func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
							}
							else
							{
								func_161(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
							}
							Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
							Global_1C017E.f_A90[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_A90[1] = 0;
						(*uParam0)[1] = 1;
						MISC::SET_BIT(&(Global_1C017E.f_B10), 1);
						return 0;
					}
				}
			}
			else
			{
				func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
				Global_1C017E.f_A90[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_154(iVar9, Global_1C0005.f_176);
			(*uParam0)[iVar9] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_167(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0xC9EC
{
	switch (*uParam0)
	{
		case 0:
			if (!func_158() && !func_157())
			{
				func_156(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_168(var uParam0)//Position - 0xCAA8
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_13.f_1 = 4;
	iVar6 = -1;
	iVar10 = 0;
	Var0 = { func_178(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1C017E.f_AD7[iVar10] = -1;
			Global_1C017E.f_A90[iVar10] = 0;
			Global_1C0005.f_176 = -1;
			Global_1C017D = 0;
			if (func_169(uParam0->f_2C))
			{
				if (!Global_1C017D)
				{
					Global_1C017D = 1;
				}
			}
			else if (Global_1C017D)
			{
				Global_1C017D = 0;
			}
			if (!Global_1C017D)
			{
			}
			if (func_164(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var0, func_165(), 0, 0, 0))
			{
				func_163(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_165())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar8, &Var1);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_127(&Var1, &Var0) || func_127(&Var1, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var1.f_60;
									}
								}
								if (iVar6 < 0)
								{
									if (MISC::IS_BIT_SET(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= STATS::_0x88578F6EC36B4A3A(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_162(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var1);
						if (Var1.f_60 <= 1)
						{
							if (Global_1C017E.f_A90[iVar10] < 12)
							{
								if (func_165() && iVar6 == 0)
								{
									func_161(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Var1.f_60);
									Global_1C017E.f_AD7[iVar10] = 0;
									Global_1C017E.f_A90[iVar10]++;
								}
								if (func_165() && (func_127(&Var1, &Var0) || func_127(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_127(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1C017E.f_AD7[iVar10] = 0;
									}
									MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_20 = { Var1 };
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
									if (func_160(uParam0->f_2C))
									{
										iVar5 = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A95);
										if (iVar5 == 1)
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 0;
										}
									}
									if (func_176(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_4A = 1;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C017E.f_A90[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_1C017E.f_A90[iVar10]++;
						}
						if (!func_165())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_162(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar8, &Var1);
							if (Global_1C017E.f_A90[iVar10] < 12 && Var1.f_60 > 1)
							{
								if (func_165() && iVar6 == iVar8)
								{
									if (!func_127(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										func_161(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Var1.f_60);
										Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
										Global_1C017E.f_A90[iVar10]++;
									}
								}
								if (func_165() && (func_127(&Var1, &Var0) || func_127(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[iVar10] < 12)
								{
									if (func_128(Var1) && !func_127(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										if (func_127(&Var1, &Var0))
										{
											if (Global_1C017E.f_AD7[iVar10] < 0)
											{
												Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
											}
										}
										MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_4A = 1;
										if (func_160(uParam0->f_2C))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(iVar8, Global_1C017E.f_A95);
											if (iVar5 == 1)
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_176(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_1C017E.f_A94)
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(iVar8, Global_1C017E.f_A96[iVar3]);
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(iVar8, Global_1C017E.f_A96[iVar3]);
											}
											iVar3++;
										}
										Global_1C017E.f_A90[iVar10]++;
									}
								}
							}
							func_162(&Var1);
							iVar8++;
						}
						STATS::_0x71B008056E5692D6();
						func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar9)
						{
							if (Global_1C017E.f_AD7[iVar10] == -1 && func_165())
							{
								if (Global_1C017E.f_A90[iVar10] >= 1)
								{
									func_161(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Global_1C017E[iVar10 /*901*/][(Global_1C017E.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_161(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), 1);
								}
								Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
								Global_1C017E.f_A90[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_1C017E.f_A90[iVar10]++;
						}
						STATS::_0x71B008056E5692D6();
						func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_AD7[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C017E.f_AD7[iVar10] = -1;
					(*uParam0)[iVar10] = 1;
					MISC::SET_BIT(&(Global_1C017E.f_B10), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_1C017E.f_AD7[iVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_155(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar12))
			{
				func_163(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar3, &Var1);
							if (func_165() && (func_127(&Var1, &Var0) || func_127(&Var1, &(Global_1C0005.f_169))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3B > 1 || Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3B <= 0)
								{
									bVar11 = true;
								}
								if (Global_1C017E.f_A90[iVar10] < 12 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_1C017E[iVar10 /*901*/][0 /*75*/]), {Var1.f_D}, 16);
										Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20 = { Var1 };
										Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3B = Var1.f_60;
										if (func_160(uParam0->f_2C))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(0, Global_1C017E.f_A95);
											if (iVar5 == 1)
											{
												Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3A = 0;
											}
										}
										if (func_176(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C017E[iVar10 /*901*/][0 /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C017E.f_A94)
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar4]))
											{
												Global_1C017E[iVar10 /*901*/][iVar3 /*75*/].f_43[iVar4] = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][iVar3 /*75*/].f_3C[iVar4] = STATS::_0x38491439B6BA7F7D(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (Global_1C017E.f_A90[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1C017E.f_A90[iVar10]++;
											}
										}
										else if (Global_1C017E.f_A90[iVar10] == 1 && Global_1C017E.f_AD7[iVar10] == -1)
										{
											Global_1C017E.f_A90[iVar10]++;
										}
									}
									else if (Global_1C017E.f_A90[iVar10] < 12)
									{
										MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										if (func_160(uParam0->f_2C))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1C017E.f_A95);
											if (iVar5 == 1)
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_176(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C017E.f_A94)
										{
											if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar4]))
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_43[iVar4] = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3C[iVar4] = STATS::_0x38491439B6BA7F7D(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_1C017E.f_A90[iVar10]++;
										}
									}
								}
							}
							func_162(&Var1);
							iVar3++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					MISC::SET_BIT(&(Global_1C017E.f_B10), iVar10);
					func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C017E.f_A90[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1C017E.f_A90[1] = 0;
					(*uParam0)[1] = 1;
					Global_1C017E.f_A90[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1C017E.f_AD7[iVar10] == -1 && func_165())
			{
				if (Global_1C017E.f_A90[iVar10] >= 1)
				{
					func_161(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Global_1C017E[iVar10 /*901*/][(Global_1C017E.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
				}
				else
				{
					func_161(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), 1);
				}
				Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
				Global_1C017E.f_A90[iVar10]++;
			}
			break;
		
		case 2:
			func_154(iVar10, Global_1C0005.f_176);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_169(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)//Position - 0xD8E3
{
	int iVar0;
	
	if (Global_1C017C)
	{
		if (Global_1C0005.f_5 != 0)
		{
			if (Global_1C0005.f_5 == Param0)
			{
				if (Global_1C0005.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_170(var uParam0)//Position - 0xD97B
{
	int iVar0;
	
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C017E.f_B0A))
	{
		iVar0 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1C017E.f_B0A);
		if (iVar0 < 300000)
		{
			MISC::SET_BIT(&(uParam0->f_2A), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_2A), 5);
			func_140(Global_1C017E.f_B0A, -1);
		}
	}
}

bool func_171(var uParam0)//Position - 0xD9CB
{
	return uParam0->f_1;
}

void func_172(var uParam0)//Position - 0xD9D7
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_173(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xD9F7
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (MISC::IS_BIT_SET(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (MISC::IS_BIT_SET(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (MISC::IS_BIT_SET(iParam2, 6))
	{
		*iParam1++;
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if (MISC::IS_ORBIS_VERSION() && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_178(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var4))
				{
					NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var4);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bVar3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		MISC::SET_BIT(&iVar5, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1C017E.f_B10 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (MISC::IS_BIT_SET(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (MISC::IS_BIT_SET(iParam2, 5))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (MISC::IS_BIT_SET(iParam2, 6))
		{
			if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			{
				if (NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
				{
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
					{
						if (MISC::IS_ORBIS_VERSION() && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_178(PLAYER::PLAYER_ID()) };
							if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var6))
							{
								NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var6);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		MISC::SET_BIT(&iVar7, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
		if (bVar3)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
}

void func_174(var uParam0, char* sParam1, var uParam2, int iParam3)//Position - 0xDCCD
{
	int iVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam2[iVar0 /*6*/]);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		iVar0++;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_175(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0xDD0F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_MULTIPLAYER_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_176(int iParam0)//Position - 0xDD9F
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_177(var uParam0, int iParam1)//Position - 0xDDC1
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DISPLAY_TYPE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

struct<13> func_178(int iParam0)//Position - 0xDDDE
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

var func_179()//Position - 0xDDF5
{
	return unk_0x67D02A194A2FC2BD("SC_LEADERBOARD");
}

bool func_180()//Position - 0xDE05
{
	return func_181(PLAYER::PLAYER_ID());
}

int func_181(int iParam0)//Position - 0xDE15
{
	switch (func_182(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 37:
		case 32:
		case 35:
		case 38:
			return 0;
		
		default:
	}
	return 1;
}

int func_182(int iParam0)//Position - 0xDE75
{
	return Global_182604[iParam0 /*324*/].f_A5;
}

void func_183(int iParam0)//Position - 0xDE88
{
	Global_141F58 = iParam0;
}

void func_184(int iParam0)//Position - 0xDE96
{
	Global_1446E8.f_2F4 = iParam0;
}

void func_185()//Position - 0xDEA7
{
	func_187();
	func_186(4, -1);
	func_186(6, -1);
	func_186(7, -1);
	func_186(3, -1);
	func_186(1, -1);
	func_186(2, -1);
	func_186(11, -1);
	func_186(13, -1);
	func_186(14, -1);
	func_186(16, -1);
}

void func_186(int iParam0, int iParam1)//Position - 0xDEF3
{
	MISC::SET_BIT(&(Global_1441E9.f_3B4), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1441E9.f_AA[iParam1] = 1;
			}
			break;
	}
}

void func_187()//Position - 0xDF29
{
	Global_2554DA.f_110E = 0;
}

void func_188(var uParam0, bool bParam1, bool bParam2)//Position - 0xDF39
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_189(var uParam0, bool bParam1)//Position - 0xDF76
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1C171A.f_2 + 5 < MISC::GET_FRAME_COUNT() && Global_1C171A.f_2 > 0)
	{
		func_82(&Global_1C171A);
		func_82(&(Global_1C171A.f_31));
		*uParam0 = 0;
		Global_1C171A.f_2 = 0;
		func_197(0);
	}
	Global_1C171A.f_2 = MISC::GET_FRAME_COUNT();
	iVar1 = -1;
	if (MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0xBD545D44CCE70597() == 0)
		{
			iVar1 = NETWORK::_0x74FB3E29E6D10FA9();
		}
	}
	if ((MISC::IS_ORBIS_VERSION() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_195() && NETWORK::NETWORK_IS_SIGNED_ONLINE()))
	{
		if (NETWORK::_0x8D11E61A4ABF49CC())
		{
			func_192(&(Global_1C171A.f_3), func_194(&(Global_1C171A.f_3)));
			if (!MISC::IS_BIT_SET(*uParam0, 4))
			{
				MISC::SET_BIT(uParam0, 4);
				StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
				func_190(&(Global_1C171A.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 2)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 1)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 5)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (!func_195())
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1);
			}
			if (!MISC::IS_BIT_SET(*uParam0, 0))
			{
				if (!PAD::IS_CONTROL_PRESSED(2, 201))
				{
					MISC::SET_BIT(uParam0, 0);
				}
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
			{
				func_82(&(Global_1C171A.f_31));
				func_82(&Global_1C171A);
				*uParam0 = 0;
				Global_1C171A.f_2 = 0;
				func_197(0);
				return 1;
			}
		}
	}
	else
	{
		func_192(&(Global_1C171A.f_3), func_194(&(Global_1C171A.f_3)));
		if ((func_171(&(Global_1C171A.f_31)) && !func_134(&(Global_1C171A.f_31), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			MISC::SET_BIT(uParam0, 3);
			StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
			func_190(&(Global_1C171A.f_3), 0);
		}
		else if (!MISC::IS_BIT_SET(*uParam0, 3))
		{
			if (!MISC::IS_BIT_SET(*uParam0, 1))
			{
				PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(0);
				MISC::SET_BIT(uParam0, 1);
				StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
				func_190(&(Global_1C171A.f_3), 0);
			}
		}
		if (func_171(&Global_1C171A))
		{
			if (!func_134(&Global_1C171A, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
					}
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						if (!MISC::IS_BIT_SET(*uParam0, 0))
						{
							if (!PAD::IS_CONTROL_PRESSED(2, 201))
							{
								MISC::SET_BIT(uParam0, 0);
							}
						}
						else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							func_82(&Global_1C171A);
							*uParam0 = 0;
							Global_1C171A.f_2 = 0;
							func_197(0);
							return 1;
						}
					}
				}
				else
				{
					func_82(&Global_1C171A);
					*uParam0 = 0;
					Global_1C171A.f_2 = 0;
					func_197(0);
					return 1;
				}
			}
			else if (MISC::IS_BIT_SET(*uParam0, 3))
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!MISC::IS_BIT_SET(*uParam0, 0))
				{
					if (!PAD::IS_CONTROL_PRESSED(2, 201))
					{
						MISC::SET_BIT(uParam0, 0);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					func_82(&(Global_1C171A.f_31));
					func_82(&Global_1C171A);
					*uParam0 = 0;
					Global_1C171A.f_2 = 0;
					func_197(0);
					return 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
					if (!MISC::IS_BIT_SET(*uParam0, 0))
					{
						if (!PAD::IS_CONTROL_PRESSED(2, 201))
						{
							MISC::SET_BIT(uParam0, 0);
						}
					}
					else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_82(&(Global_1C171A.f_31));
						func_82(&Global_1C171A);
						*uParam0 = 0;
						Global_1C171A.f_2 = 0;
						func_197(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_190(var uParam0, bool bParam1)//Position - 0xE3E2
{
	func_191(uParam0);
	if (bParam1)
	{
		func_197(0);
	}
	uParam0->f_23 = 1;
}

void func_191(var uParam0)//Position - 0xE3FF
{
	struct<46> Var0;
	
	Var0.f_29 = 1;
	*uParam0 = { Var0 };
}

void func_192(var uParam0, int iParam1)//Position - 0xE41A
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_193(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_24)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else if (uParam0->f_25)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else if (uParam0->f_27)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_11));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else if (uParam0->f_26)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_11));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else if (uParam0->f_28)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_21, 70);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_29);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_193(var uParam0)//Position - 0xE518
{
	uParam0->f_23 = 0;
}

int func_194(var uParam0)//Position - 0xE525
{
	return uParam0->f_23;
}

int func_195()//Position - 0xE531
{
	if (func_196())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_196()//Position - 0xE551
{
	return Global_2528EC;
}

void func_197(bool bParam0)//Position - 0xE55D
{
	HUD::BUSYSPINNER_OFF();
	if (bParam0)
	{
		HUD::PRELOAD_BUSYSPINNER();
	}
}

int func_198(var uParam0, bool bParam1, bool bParam2)//Position - 0xE572
{
	if (!iLocal_157)
	{
		func_210(&(uParam0->f_48), bParam1);
		iLocal_157 = 1;
		func_310(&(uParam0->f_29A), 9, 0);
	}
	else
	{
		if (Global_1C0005.f_1 && !Global_1C0005.f_2)
		{
			func_207(190, bParam1);
			Global_1C0005.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_199(&(uParam0->f_48)))
		{
			Global_1C017C = 1;
			return 1;
		}
	}
	return 0;
}

int func_199(var uParam0)//Position - 0xE5DB
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_13.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_24 = 32;
	if (func_176(uParam0->f_2C))
	{
		Var3 = { Global_1C0005.f_169 };
	}
	else
	{
		Var3 = { func_178(PLAYER::PLAYER_ID()) };
	}
	switch (Global_1C0005)
	{
		case 0:
			if (func_206(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &Var3))
			{
				func_163(&Var1, &(uParam0->f_2C));
				Global_1C0005.f_8E = uParam0->f_2C;
				Global_1C0005.f_8E.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_2C, 0);
				iVar4 = 0;
				while (iVar4 < Global_1C0005.f_8E.f_1)
				{
					if (!func_205(uParam0->f_2C, iVar4))
					{
						if (func_204(uParam0->f_2C, 4, iVar4))
						{
							MISC::SET_BIT(&(Global_1C0005.f_8E.f_2), iVar4);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_1C0005.f_8E.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_61 != Global_1C0005.f_8E.f_1)
						{
						}
						if (!func_128(Var0))
						{
							Global_1C0005.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1C0005.f_8E.f_1)
							{
								if (!func_205(uParam0->f_2C, iVar4))
								{
									if (func_204(uParam0->f_2C, 4, iVar4))
									{
										Global_1C0005.f_49.f_24[iVar4] = STATS::_0x88578F6EC36B4A3A(0, iVar4);
										if (Global_1C0005.f_49.f_24[iVar4] == -1)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_24[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_1C0005.f_49.f_3[iVar4] = STATS::_0x38491439B6BA7F7D(0, iVar4);
										if (Global_1C0005.f_49.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_1C0005.f_4 = 1;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_1C0005.f_4 = 1;
				}
				Global_1C0005 = 1;
				func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 1:
			Global_1C0005.f_1 = 1;
			if (Global_1C0005.f_2)
			{
				func_203();
				if (Global_1C0005.f_4)
				{
					if (func_202(uParam0->f_2C))
					{
						Global_1C0005 = 3;
					}
					else
					{
						Global_1C0005 = 2;
					}
				}
				else
				{
					Global_1C0005 = 2;
				}
			}
			break;
		
		case 2:
			STATS::LEADERBOARDS2_READ_RANK_PREDICTION(&(Global_1C0005.f_49), &(Global_1C0005.f_8E), &(Global_1C0005.f_D3));
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1C0005.f_D3 = { Global_1C0005.f_8E };
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_201())
			{
				if (func_200())
				{
					Global_1C0005 = 99;
				}
				else
				{
					Global_1C0005 = 999;
					return 1;
				}
			}
			else
			{
				Global_1C0005 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_202(uParam0->f_2C))
			{
				Global_1C0005.f_118 = { Global_1C0005.f_8E };
			}
			else
			{
				Var2 = Global_1C0005.f_8E;
				Var2.f_1 = Global_1C0005.f_8E.f_1;
				Var2.f_2 = Global_1C0005.f_8E.f_2;
				STATS::LEADERBOARDS2_READ_RANK_PREDICTION(&Var2, &(Global_1C0005.f_8E), &(Global_1C0005.f_118));
			}
			Global_1C0005 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_164(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, &Var3, 1, 1, Global_1C0005.f_118.f_24[0], Global_1C0005.f_118.f_3[0]))
			{
				func_163(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (MISC::ARE_STRINGS_EQUAL(&(Var0.f_D), ""))
						{
							Global_ED2E6.f_1 = -1;
						}
						else
						{
							Global_ED2E6.f_1 = Var0.f_60;
						}
					}
					else
					{
						Global_ED2E6.f_1 = -1;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_ED2E6.f_1 = -1;
				}
				Global_1C0005 = 999;
				func_88(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_200()//Position - 0xE9FF
{
	return MISC::IS_BIT_SET(Global_EB67E.f_8, 1);
}

var func_201()//Position - 0xEA12
{
	return Global_25260F.f_3;
}

int func_202(int iParam0)//Position - 0xEA20
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_203()//Position - 0xEAF1
{
	Global_1C0005.f_49 = Global_1C0005.f_8E;
	Global_1C0005.f_49.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_49.f_2 = Global_1C0005.f_8E.f_2;
	Global_1C0005.f_D3 = Global_1C0005.f_8E;
	Global_1C0005.f_D3.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_D3.f_2 = Global_1C0005.f_8E.f_2;
}

int func_204(int iParam0, int iParam1, int iParam2)//Position - 0xEB51
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780 || iParam0 == 778)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = STATS::LEADERBOARDS_GET_COLUMN_TYPE(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_205(int iParam0, int iParam1)//Position - 0xEC60
{
	if (STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_206(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xECBB
{
	switch (*uParam0)
	{
		case 0:
			if (!func_158() && !func_157())
			{
				func_156(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_HANDLE(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_207(int iParam0, bool bParam1)//Position - 0xED6F
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_209(iParam0, &Var0, &Var1, 1, -1, 1, 0))
	{
		func_208(190, 131, 0, 0f, 1);
		func_208(190, 103, iLocal_105[1], 0f, 0);
		func_208(190, 99, iLocal_105[2], 0f, 0);
		func_208(190, 109, iLocal_105[3], 0f, 0);
		func_208(190, 106, iLocal_105[5], 0f, 0);
		func_208(190, 2, iLocal_105[10], 0f, 0);
		func_208(190, 107, iLocal_105[8], 0f, 0);
		func_208(190, 116, iLocal_105[6], 0f, 0);
		iLocal_105[1] = 0;
		iLocal_105[2] = 0;
		iLocal_105[3] = 0;
		iLocal_105[5] = 0;
		iLocal_105[10] = 0;
		iLocal_105[8] = 0;
		iLocal_105[6] = 0;
	}
}

void func_208(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0xEE5F
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(iParam1, iParam2, fParam3);
	}
	if (!Global_1C0005.f_3)
	{
		Global_1C0005.f_8E = iParam0;
		Global_1C0005.f_8E.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Global_1C0005.f_8E, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1C0005.f_8E.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_204(iParam0, 4, iVar1))
				{
					MISC::SET_BIT(&(Global_1C0005.f_8E.f_2), iVar1);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_1C0005.f_8E.f_2), iVar1);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1C0005.f_8E.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1C0005.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1C0005.f_8E.f_24[iVar0] = iParam2;
	Global_1C0005.f_8E.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		MISC::SET_BIT(&(Global_1C0005.f_8E.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		MISC::CLEAR_BIT(&(Global_1C0005.f_8E.f_2), iVar0);
	}
}

int func_209(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xEF7A
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0 = uParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var2 = { func_178(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_25260F.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_19B138.f_A));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}

void func_210(var uParam0, bool bParam1)//Position - 0xF0AE
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_211(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_211(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0xF0D6
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1C017E.f_AD1 = 0;
	Global_1C017E.f_AD2 = 0;
	Global_1C017E.f_AD0 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_214())
				{
					uParam0->f_2C = 826;
				}
				else
				{
					uParam0->f_2C = 815;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_214())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C017E.f_ADC.f_1A = -1;
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_214())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 3;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_214())
				{
					uParam0->f_2C = 827;
				}
				else
				{
					uParam0->f_2C = 824;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_214())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C017E.f_ADC.f_1A = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_214())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 5;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 6;
					Global_1C017E.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 5;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 3;
					Global_1C017E.f_A95 = 6;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_214())
				{
					uParam0->f_2C = 828;
				}
				else
				{
					uParam0->f_2C = 825;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 2;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &Var3);
					MemCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_1C017E.f_ADC.f_1B = 1;
				}
				if (iParam5 > 0 && !func_214())
				{
					uParam0->f_2C.f_3 = 3;
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C017E.f_ADC.f_1A = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_214())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 3;
					Global_1C017E.f_A95 = 4;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_214())
				{
					uParam0->f_2C = 928;
				}
				else
				{
					uParam0->f_2C = 849;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_214())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C017E.f_ADC.f_1A = -1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_214())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 0;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 0;
					Global_1C017E.f_A94 = 1;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_214())
				{
					uParam0->f_2C = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_2C = 975;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_214())
				{
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C017E.f_ADC.f_1A = -1;
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_214())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 3;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				uParam0->f_2C = 762;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 6;
				Global_1C017E.f_A96[3] = 3;
				Global_1C017E.f_A96[4] = 1;
				Global_1C017E.f_A96[5] = 2;
				Global_1C017E.f_A94 = 6;
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 4;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 4;
				Global_1C017E.f_ADC.f_1D[4] = 5;
				Global_1C017E.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 1)
			{
				uParam0->f_2C = 822;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 6;
				Global_1C017E.f_A96[3] = 3;
				Global_1C017E.f_A96[4] = 1;
				Global_1C017E.f_A96[5] = 2;
				Global_1C017E.f_A94 = 6;
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 4;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 4;
				Global_1C017E.f_ADC.f_1D[4] = 5;
				Global_1C017E.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_2C = 823;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 6;
				Global_1C017E.f_A96[3] = 3;
				Global_1C017E.f_A96[4] = 1;
				Global_1C017E.f_A96[5] = 2;
				Global_1C017E.f_A94 = 6;
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 4;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 4;
				Global_1C017E.f_ADC.f_1D[4] = 5;
				Global_1C017E.f_ADC.f_1D[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 3;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 7;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 94:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 3;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 7;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 92:
			uParam0->f_2C = 811;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), "CMSW", 64);
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 0;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 5;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 4;
			Global_1C017E.f_A96[4] = 6;
			Global_1C017E.f_A94 = 5;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			Global_1C017E.f_ADC.f_1C = 6;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 6;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			break;
		
		case 15:
			uParam0->f_2C = 749;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_ARM", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 2;
			Global_1C017E.f_A96[1] = 5;
			Global_1C017E.f_A96[2] = 0;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 4;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 14:
			uParam0->f_2C = 190;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_DARTS", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 7;
			Global_1C017E.f_A96[2] = 5;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 4;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 12:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1C017E.f_ADC.f_9), iParam4 + 1, 64);
			}
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 9;
			Global_1C017E.f_A96[2] = 7;
			Global_1C017E.f_A96[3] = 5;
			Global_1C017E.f_A96[4] = 2;
			Global_1C017E.f_A94 = 5;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			break;
		
		case 87:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 9;
			Global_1C017E.f_A96[2] = 7;
			Global_1C017E.f_A96[3] = 5;
			Global_1C017E.f_A96[4] = 2;
			Global_1C017E.f_A94 = 5;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			break;
		
		case 13:
			uParam0->f_2C = 912;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_ACC", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 2;
			Global_1C017E.f_A96[2] = 1;
			Global_1C017E.f_A96[3] = 3;
			Global_1C017E.f_A94 = 4;
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1C = 4;
			Global_1C017E.f_ADC.f_1D[0] = 4;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_2C = 203;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1C017E.f_ADC.f_9), {func_213(iParam1)}, 16);
			Global_1C017E.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 7;
			Global_1C017E.f_A94 = 2;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			Global_1C017E.f_ADC.f_1C = 4;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_2C = 202;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			Global_1C017E.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 0;
			Global_1C017E.f_A96[2] = 0;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 1;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 2;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 0;
			Global_1C017E.f_ADC.f_1D[3] = 0;
			break;
		
		case 80:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C017E.f_A96[0] = 3;
			Global_1C017E.f_A94 = 1;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 1;
			break;
		
		case 3:
			uParam0->f_2C = 791;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 3;
			Global_1C017E.f_A94 = 4;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_2C = 1200;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 1;
				Global_1C017E.f_A96[2] = 4;
				Global_1C017E.f_A96[3] = 5;
				Global_1C017E.f_A96[4] = 6;
				Global_1C017E.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				Global_1C017E.f_ADC.f_1C = 6;
				Global_1C017E.f_ADC.f_1D[0] = 5;
				Global_1C017E.f_ADC.f_1D[1] = 11;
				Global_1C017E.f_ADC.f_1D[2] = 4;
				Global_1C017E.f_ADC.f_1D[3] = 5;
				Global_1C017E.f_ADC.f_1D[4] = 5;
			}
			else if (Global_187385.f_26 == 1)
			{
				uParam0->f_2C = 777;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_187385.f_1 == 5)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_187385.f_1 == 5)
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 1;
				Global_1C017E.f_A96[2] = 2;
				Global_1C017E.f_A96[3] = 0;
				Global_1C017E.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 2;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 5;
			}
			else
			{
				uParam0->f_2C = 780;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_187385.f_1 == 5)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_187385.f_1 == 5)
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 1;
				Global_1C017E.f_A96[2] = 2;
				Global_1C017E.f_A96[3] = 0;
				Global_1C017E.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 5;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 5;
			}
			break;
		
		case 8:
			uParam0->f_2C = 795;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			MISC::SET_BIT(&(Global_1C017E.f_AD0), 1);
			Global_1C017E.f_AC2[1] = -1;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 11;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 85:
			uParam0->f_2C = 274;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 3;
			Global_1C017E.f_A94 = 2;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_2C = 965;
							break;
						
						case 9:
							uParam0->f_2C = 966;
							break;
						
						case 4:
							uParam0->f_2C = 967;
							break;
						
						case 8:
							uParam0->f_2C = 968;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 4;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 2;
					Global_1C017E.f_A94 = 4;
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_2C = 969;
							break;
						
						case 2:
							uParam0->f_2C = 970;
							break;
						
						case 3:
							uParam0->f_2C = 973;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 4;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 2;
					Global_1C017E.f_A94 = 4;
					MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 4;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
				
				case 7:
					uParam0->f_2C = 971;
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 4;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 2;
					Global_1C017E.f_A94 = 4;
					MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 4;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_2C = 972;
							break;
						
						case 5:
							uParam0->f_2C = 974;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 0;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 2;
					Global_1C017E.f_A96[3] = 1;
					Global_1C017E.f_A94 = 4;
					MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 12;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_2C = 192;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C017E.f_A96[0] = 2;
			Global_1C017E.f_A96[1] = 5;
			Global_1C017E.f_A96[2] = 4;
			Global_1C017E.f_A96[3] = 3;
			Global_1C017E.f_A94 = 4;
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1D[0] = 17;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 82:
			uParam0->f_2C = 850;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 4;
			Global_1C017E.f_A96[2] = 3;
			Global_1C017E.f_A96[3] = 2;
			Global_1C017E.f_A94 = 4;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1D[0] = 10;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 84:
			uParam0->f_2C = 820;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 5;
			Global_1C017E.f_A96[4] = 4;
			Global_1C017E.f_A96[5] = 3;
			Global_1C017E.f_A94 = 6;
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			MISC::CLEAR_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
			Global_1C017E.f_ADC.f_1D[0] = 4;
			Global_1C017E.f_ADC.f_1D[1] = 9;
			Global_1C017E.f_ADC.f_1D[2] = 4;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			Global_1C017E.f_ADC.f_1D[5] = 5;
			break;
		
		case 86:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C017E.f_A96[0] = 2;
			Global_1C017E.f_A94 = 1;
			MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 1;
			break;
		
		case 91:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C017E.f_ADC = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
				Global_1C017E.f_A96[0] = 3;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 1;
				Global_1C017E.f_A96[3] = 0;
				Global_1C017E.f_A95 = 6;
				Global_1C017E.f_A94 = 2;
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				Global_1C017E.f_ADC.f_1C = 4;
				Global_1C017E.f_ADC.f_1D[0] = 1;
				Global_1C017E.f_ADC.f_1D[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
				Global_1C017E.f_A96[0] = 3;
				Global_1C017E.f_A96[1] = 2;
				Global_1C017E.f_A96[2] = 4;
				Global_1C017E.f_A96[3] = 1;
				Global_1C017E.f_A95 = 4;
				Global_1C017E.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				MISC::SET_BIT(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 1;
				Global_1C017E.f_ADC.f_1D[1] = 1;
				Global_1C017E.f_ADC.f_1D[2] = 3;
			}
			Global_1C017E.f_ADB = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1C017E.f_A94)
	{
		if (MISC::IS_BIT_SET(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
		{
			MISC::SET_BIT(&(Global_1C017E.f_AD2), iVar2);
		}
		iVar2++;
	}
	Global_1C017E.f_B0A = func_212(Var0, uParam0->f_2C, iParam1, iParam4, iParam5, bParam6);
}

int func_212(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x134CF
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_176(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

struct<6> func_213(int iParam0)//Position - 0x13541
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_214()//Position - 0x136CA
{
	if (((((((Global_187385.f_6540 == 1 || Global_187385.f_6540 == 3) || Global_187385.f_6540 == 5) || Global_187385.f_6540 == 7) || Global_187385.f_6540 == 8) || Global_187385.f_6540 == 9) || Global_187385.f_6540 == 11) || Global_187385.f_6540 == 13)
	{
		return 1;
	}
	return 0;
}

int func_215(var uParam0, int iParam1)//Position - 0x13750
{
	if (!func_398(&(uParam0->f_2)))
	{
		func_412(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_398(&(uParam0->f_5)))
			{
				func_412(&(uParam0->f_5));
				func_216(uParam0, 1051260355);
			}
		}
		if (func_398(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_399(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_398(&(uParam0->f_5)))
		{
			func_412(&(uParam0->f_5));
			func_216(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_399(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_216(var uParam0, float fParam1)//Position - 0x13853
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_217(var uParam0)//Position - 0x13879
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 40)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!PED::IS_PED_INJURED((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_218(var uParam0, int iParam1)//Position - 0x138F2
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!PED::IS_PED_INJURED((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_219()//Position - 0x139BF
{
	int iVar0;
	
	if (!bLocal_178)
	{
		iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	}
	else
	{
		iLocal_192++;
		iVar0 = (iLocal_192 % 2);
	}
	return iVar0;
}

void func_220(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x139EF
{
	char* sVar0;
	
	sVar0 = func_221(iParam4);
	if (iParam4 != 5)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_12(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_412(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_221(int iParam0)//Position - 0x13A4F
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_222(var uParam0, int iParam1)//Position - 0x13AB0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_SCORES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_223(var uParam0)//Position - 0x13ACE
{
	uParam0->f_2 = { 0f, -2.3685f, -0.2f };
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_14 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::DELETE_OBJECT(uParam0);
	}
	return 1;
}

void func_224(int iParam0)//Position - 0x13B1E
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_76, uLocal_74, 1500, 1, 1);
	CAM::SET_CAM_ACTIVE(uLocal_77, 1);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_76, uLocal_77, 8000, 1, 1);
	CAM::ATTACH_CAM_TO_ENTITY(uLocal_79, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
	CAM::POINT_CAM_AT_ENTITY(uLocal_79, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	CAM::SET_CAM_FOV(uLocal_79, 35f);
}

void func_225(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x13B82
{
	bool bVar0;
	
	if (!CAM::IS_CAM_INTERPOLATING(uLocal_74))
	{
		bVar0 = false;
		func_306(uParam0);
		if (!bLocal_170)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_2A0)
				{
					HUD::CLEAR_HELP(1);
					uParam3->f_2A0 = 0;
				}
			}
			else if (!bLocal_106)
			{
				if (func_3(&(uParam3->f_29A), 18))
				{
					if (!func_3(&(uParam3->f_29A), 21))
					{
						if (!MISC::IS_BIT_SET(Global_17C22, 3))
						{
							func_396("DARTS_INSTR_W", -1);
							MISC::SET_BIT(&Global_17C22, 3);
						}
						func_310(&(uParam3->f_29A), 21, 1);
					}
					else if (!func_3(&(uParam3->f_29A), 20) && func_3(&(uParam3->f_29A), 19))
					{
						if (!MISC::IS_BIT_SET(Global_17C22, 4))
						{
							func_396("DARTS_INSTR_B", -1);
							MISC::SET_BIT(&Global_17C22, 4);
						}
						func_310(&(uParam3->f_29A), 20, 1);
					}
				}
				uParam3->f_2A0 = 1;
			}
			else if (uParam3->f_2A0)
			{
				HUD::CLEAR_HELP(1);
				uParam3->f_2A0 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_83) && uParam0->f_3 == 2)
			{
				func_305(uParam3);
			}
		}
		else
		{
			func_303(uParam3, iLocal_29);
		}
		func_302(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_299(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_291(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_284(uParam0->f_1A6[iLocal_29], &(uParam0->f_F3), &(uParam0->f_4), &(uParam0->f_1CD)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (PAD::IS_CONTROL_PRESSED(2, 228) && iLocal_29 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_29 == 0)
			{
				func_283(iLocal_30, 0);
				if (((((!func_282("DARTS_SHT_USE") && !func_282("DARTS_INSTR_W")) && !func_282("DARTS_INSTR_B")) && !func_282("DARTS_AIM_HLP")) && !func_282("DARTS_STD_HLP")) && !func_282("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_29A), 24))
					{
						func_396("DARTS_LEVEL", -1);
						MISC::SET_BIT(&(Global_17C49.f_4348.f_6), iLocal_190);
						func_310(&(uParam3->f_29A), 24, 0);
					}
				}
				if ((((uParam0->f_1A6[iLocal_29] % 2) == 0 && uParam0->f_1A6[iLocal_29] < 41) && iLocal_30 == 0) && !iLocal_168)
				{
					if (!func_3(&(uParam3->f_29A), 6))
					{
						func_310(&(uParam3->f_29A), 6, 1);
					}
					iLocal_168 = 1;
				}
				else if (uParam0->f_1A6[iLocal_29] == 50 && !iLocal_168)
				{
					if (!func_3(&(uParam3->f_29A), 6))
					{
						func_310(&(uParam3->f_29A), 6, 1);
					}
					iLocal_168 = 1;
				}
				else if (func_272(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_F3), uParam1, bVar0, 0, 0, uParam0->f_F8))
				{
					HUD::CLEAR_PRINTS();
					uParam3->f_29E = (uParam3->f_29E - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_165)
				{
					if (!func_398(uParam4))
					{
						func_270(uParam4);
					}
					else if (func_7(uParam4) > 20f)
					{
						func_269(uLocal_161[(1 - iLocal_29)]);
						func_399(uParam4);
						iLocal_165 = 1;
					}
				}
			}
			else if (iLocal_30 == 0)
			{
				iLocal_188 = 0;
				func_268(&(uParam0->f_1A6), &(uParam0->f_F9));
				func_265(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_F3), &(uParam0->f_1), &(uParam0->f_F9), 0);
			}
			else if (SYSTEM::TIMERA() > MISC::GET_RANDOM_INT_IN_RANGE(1250, 2500))
			{
				func_268(&(uParam0->f_1A6), &(uParam0->f_F9));
				func_265(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_F3), &(uParam0->f_1), &(uParam0->f_F9), 0);
			}
			break;
		
		case 3:
			if (func_252(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_F3), uParam0->f_F8, 0))
			{
				uParam0->f_1B4++;
				uParam0->f_1C7 = func_251(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_29A), 5))
			{
				func_249(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_F3), uParam0->f_1C7);
			}
			func_234(uParam0, uParam3);
			break;
		
		case 5:
			func_227(uParam0, uParam2, uParam3);
			if (func_398(uParam4))
			{
				func_399(uParam4);
			}
			break;
		
		case 6:
			func_226(uParam0, uParam3);
			break;
	}
}

void func_226(var uParam0, var uParam1)//Position - 0x13FE2
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iLocal_188++;
	iLocal_29 = 1;
	iLocal_30 = 0;
	iLocal_172 = 1;
	while (iLocal_30 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_17)
		{
			if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_19)
			{
				iLocal_30++;
			}
			else
			{
				func_249(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_F3), 0);
				func_234(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_18)
		{
			if (bLocal_171)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_17 = 1;
				uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_18 = 0;
				Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_F3.f_1, uParam0->f_F3.f_4, uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_B, (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_B.f_1 + fLocal_33), uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_B.f_2) };
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]))
				{
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/], Var0, 1, 0, 0, 1);
				}
			}
			func_249(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_F3), 0);
			func_234(uParam0, uParam1);
			if (bLocal_171)
			{
				if (iLocal_173)
				{
					uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_1, Local_39, 1, 1, 0);
					Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_F3.f_1, uParam0->f_F3.f_4, uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_B, (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_B.f_1 + fLocal_33), uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_B.f_2) };
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/], Var0, 1, 0, 0, 1);
					fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
					uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11 = { 90f, fVar1, uParam0->f_F3.f_4 };
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/], uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_11, 0, 1);
					uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_17 = 1;
					uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_18 = 0;
				}
			}
		}
		else
		{
			func_268(&(uParam0->f_1A6), &(uParam0->f_F9));
			func_265(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_F3), &(uParam0->f_1), &(uParam0->f_F9), 0);
			uParam0->f_1B4++;
			func_249(&(uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/]), &(uParam0->f_F3), 0);
			if ((uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_15 == 2 || uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14 == 50) && uParam0->f_1A6[iLocal_29] == 0)
			{
				if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14 == 50)
				{
					uParam0->f_1B0[iLocal_29]++;
				}
				func_310(&(uParam1->f_29A), 2, 0);
				func_310(&(uParam1->f_29A), 3, 0);
				func_310(&(uParam1->f_29A), 4, 0);
				func_310(&(uParam1->f_29A), 5, 1);
				SYSTEM::SETTIMERB(0);
			}
			func_234(uParam0, uParam1);
			if (bLocal_171)
			{
				if (iLocal_173)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_30 + 1)
					{
						if (!uParam0->f_5[iLocal_29 /*79*/][iVar2 /*26*/].f_17)
						{
							uParam0->f_5[iLocal_29 /*79*/][iVar2 /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_29 /*79*/][iVar2 /*26*/].f_1, Local_39, 1, 1, 0);
							Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_F3.f_1, uParam0->f_F3.f_4, uParam0->f_5[iLocal_29 /*79*/][iVar2 /*26*/].f_B, (uParam0->f_5[iLocal_29 /*79*/][iVar2 /*26*/].f_B.f_1 + fLocal_33), uParam0->f_5[iLocal_29 /*79*/][iVar2 /*26*/].f_B.f_2) };
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_29 /*79*/][iVar2 /*26*/]))
							{
								ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iVar2 /*26*/], Var0, 1, 0, 0, 1);
							}
							fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
							uParam0->f_5[iLocal_29 /*79*/][iVar2 /*26*/].f_11 = { 90f, fVar3, uParam0->f_F3.f_4 };
							ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_29 /*79*/][iVar2 /*26*/], uParam0->f_5[iLocal_29 /*79*/][iVar2 /*26*/].f_11, 0, 1);
							uParam0->f_5[iLocal_29 /*79*/][iVar2 /*26*/].f_17 = 1;
							uParam0->f_5[iLocal_29 /*79*/][iVar2 /*26*/].f_18 = 0;
						}
						iVar2++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_188 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_227(var uParam0, var uParam1, var uParam2)//Position - 0x1446D
{
	struct<3> Var0;
	int iVar1;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_F8 == 1)
			{
				func_233();
			}
			if (iLocal_29 == 0)
			{
				if (func_3(&(uParam2->f_29A), 3))
				{
					func_232("DARTS_PLR_DUB", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14, 5000, 0);
				}
				else if (func_3(&(uParam2->f_29A), 4))
				{
					func_231("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_29A), 2))
				{
					func_232("DARTS_PLR_BUST", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14, 5000, 0);
				}
				else
				{
					func_232("DARTS_SWITCH_C", uParam0->f_1A6[iLocal_29], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_29A), 3))
			{
				func_232("DARTS_OPP_DUB", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14, 5000, 0);
			}
			else if (func_3(&(uParam2->f_29A), 4))
			{
				func_231("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_29A), 2))
			{
				func_232("DARTS_OPP_BUST", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14, 5000, 0);
			}
			else
			{
				func_232("DARTS_SWITCH_B", uParam0->f_1A6[iLocal_29], 5000, 0);
			}
			SYSTEM::SETTIMERB(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
			{
				iLocal_186++;
				if (iLocal_186 >= uParam0->f_1B4)
				{
					iLocal_186 = 0;
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_186 /*26*/], 1) };
				func_47(Var0);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
			{
				iLocal_186 = (iLocal_186 - 1);
				if (iLocal_186 < 0)
				{
					iLocal_186 = (uParam0->f_1B4 - 1);
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_186 /*26*/], 1) };
				func_47(Var0);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_186 /*26*/], 1) };
				func_49(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				iLocal_162 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || (iLocal_172 && bLocal_171))
			{
				iLocal_162 = 1;
			}
			if ((PAD::IS_CONTROL_JUST_PRESSED(2, 189) || PAD::IS_CONTROL_JUST_PRESSED(2, 190)) && uParam0->f_F8 == 1)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_29 /*79*/][iLocal_186 /*26*/], 1) };
				func_49(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_29A), 6))
			{
				if (!iLocal_167)
				{
					if (func_230(iLocal_29 == 0, &(uLocal_161[1]), (uParam0->f_1A9[iLocal_29] - uParam0->f_1A6[iLocal_29]), uParam0->f_1A6[0], uParam0->f_1A6[1]))
					{
						iLocal_167 = 1;
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 500) < 50)
				{
				}
			}
			else if (!iLocal_167)
			{
				if (func_229(iLocal_29 == 0, &(uLocal_161[1]), (uParam0->f_1A9[iLocal_29] - uParam0->f_1A6[iLocal_29]), uParam0->f_1A6[0], uParam0->f_1A6[1]))
				{
					iLocal_167 = 1;
				}
			}
			else if ((MISC::GET_GAME_TIMER() % 500) < 50)
			{
			}
			if (iLocal_162 || SYSTEM::TIMERB() > 2000)
			{
				iLocal_172 = 0;
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_223(&(uParam0->f_5[iLocal_29 /*79*/][iVar1 /*26*/]));
					iVar1++;
				}
				if (uParam0->f_1A9[iLocal_29] != uParam0->f_1A6[iLocal_29])
				{
					func_228(uParam1, iLocal_29, uParam0->f_1A6[iLocal_29]);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_F3.f_1, 0, 0, 0, 0);
				}
				uParam0->f_1A9[iLocal_29] = uParam0->f_1A6[iLocal_29];
				iLocal_30 = 0;
				uParam0->f_1AC = 0;
				if (iLocal_29 == 0)
				{
					iLocal_29 = 1;
				}
				else
				{
					iLocal_29 = 0;
				}
				func_411(uParam1, iLocal_29);
				iLocal_53 = 0;
				func_391();
				if (!bLocal_171)
				{
					HUD::CLEAR_SMALL_PRINTS();
				}
				iLocal_47 = 0;
				uParam2->f_29E = 3;
				iLocal_168 = 0;
				iLocal_165 = 0;
				iLocal_167 = 0;
				iLocal_162 = 0;
				iLocal_186 = 0;
				uParam0->f_1B4 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_228(var uParam0, int iParam1, int iParam2)//Position - 0x14886
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_DARTS_SCORE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_229(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x148AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < 85)
	{
		if (MISC::IS_BIT_SET(iVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(iVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(iVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_230(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x14AA7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < 75)
	{
		if (MISC::IS_BIT_SET(iVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !ENTITY::DOES_ENTITY_EXIST(func_475()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(iVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(iVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_231(char* sParam0, int iParam1, int iParam2)//Position - 0x14D00
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_232(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14D19
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

void func_233()//Position - 0x14D38
{
	CAM::SET_CAM_ACTIVE(uLocal_83, 1);
	CAM::SET_CAM_ACTIVE(uLocal_74, 0);
}

void func_234(var uParam0, var uParam1)//Position - 0x14D4E
{
	uParam0->f_1C7 = 0;
	if (!func_3(&(uParam1->f_29A), 5))
	{
		uParam0->f_1A6[iLocal_29] = (uParam0->f_1A6[iLocal_29] - uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14);
		uParam0->f_1AC = (uParam0->f_1AC + uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14);
	}
	if (func_3(&(uParam1->f_29A), 5))
	{
		func_246(uParam0);
		func_310(&(uParam1->f_29A), 5, 0);
	}
	else
	{
		uParam0->f_1AD[iLocal_29]++;
		if (iLocal_29 == 0)
		{
			func_244(4);
			iLocal_105[10]++;
		}
		if ((uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_15 == 2 || uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14 == 50) && uParam0->f_1A6[iLocal_29] == 0)
		{
			if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14 == 50)
			{
				uParam0->f_1B0[iLocal_29]++;
				if (iLocal_29 == 0)
				{
					func_244(0);
					iLocal_105[1]++;
				}
			}
			func_310(&(uParam1->f_29A), 2, 0);
			func_310(&(uParam1->f_29A), 3, 0);
			func_310(&(uParam1->f_29A), 4, 0);
			func_310(&(uParam1->f_29A), 5, 1);
			func_246(uParam0);
			func_310(&(uParam1->f_29A), 5, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if ((uParam0->f_1A6[iLocal_29] == 1 || uParam0->f_1A6[iLocal_29] < 0) || (uParam0->f_1A6[iLocal_29] == 0 && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_15 != 2))
		{
			if (uParam0->f_1A6[iLocal_29] == 0 && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_15 != 2)
			{
				func_232("DARTS_PLR_DUB", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14, 5000, 0);
				func_310(&(uParam1->f_29A), 3, 1);
			}
			else if (uParam0->f_1A6[iLocal_29] == 1)
			{
				func_310(&(uParam1->f_29A), 4, 1);
			}
			else if (iLocal_29 == 1)
			{
				func_232("DARTS_OPP_BUST", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14, 5000, 0);
			}
			else
			{
				func_232("DARTS_PLR_BUST", uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14, 5000, 0);
			}
			if (!iLocal_167)
			{
				if (func_243(uLocal_161[(1 - iLocal_29)]))
				{
					iLocal_167 = 1;
				}
			}
			uParam0->f_1A6[iLocal_29] = uParam0->f_1A9[iLocal_29];
			if (uParam0->f_1 == 6)
			{
			}
			SYSTEM::SETTIMERA(0);
			uParam0->f_1 = 5;
			if (iLocal_29 == 0)
			{
				uParam0->f_1B3++;
			}
			func_310(&(uParam1->f_29A), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14 == 50)
			{
				uParam0->f_1B0[iLocal_29]++;
				if (iLocal_29 == 0)
				{
					func_242(uParam1, 1);
					func_244(0);
					iLocal_105[1]++;
				}
				if (!iLocal_167 && !iLocal_172)
				{
					if (func_241(uLocal_161[iLocal_29]))
					{
						iLocal_167 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_14 == 0)
			{
				if (!iLocal_167 && !iLocal_172)
				{
					func_240(uLocal_161[(1 - iLocal_29)]);
					iLocal_167 = 1;
				}
			}
			if (uParam0->f_1AC == 180)
			{
				if (!iLocal_167 && !iLocal_172)
				{
					if (func_239(uLocal_161[1], iLocal_29 == 0))
					{
						iLocal_167 = 1;
					}
				}
				if (iLocal_29 == 0)
				{
					func_242(uParam1, 0);
					func_244(1);
					iLocal_105[2]++;
				}
			}
			if (uParam0->f_1AC == 140)
			{
				if (!iLocal_167 && !iLocal_172)
				{
					if (func_237(uLocal_161[iLocal_29], iLocal_29 == 0))
					{
						iLocal_167 = 1;
					}
				}
			}
			if (iLocal_29 == 0)
			{
				if (iLocal_30 < 2)
				{
					if (uParam0->f_1A6[iLocal_29] <= 170 && !func_3(&(uParam1->f_29A), 18))
					{
						func_310(&(uParam1->f_29A), 18, 1);
					}
					if (!func_3(&(uParam1->f_29A), 19) && func_3(&(uParam1->f_29A), 21))
					{
						func_310(&(uParam1->f_29A), 19, 1);
					}
					if (((uParam0->f_1A6[iLocal_29] < 41 && uParam0->f_1A6[iLocal_29] > 0) && (uParam0->f_1A6[iLocal_29] % 2) == 0) || uParam0->f_1A6[iLocal_29] == 50)
					{
						if (uParam0->f_1A6[iLocal_29] == 50)
						{
						}
						if (!iLocal_166)
						{
							func_236(uLocal_161[1]);
							iLocal_166 = 1;
						}
						if (!uParam0->f_1C8)
						{
							uParam0->f_1C8 = 1;
						}
						if (!func_3(&(uParam1->f_29A), 6))
						{
							func_310(&(uParam1->f_29A), 6, 1);
						}
					}
					else if (uParam0->f_1C8)
					{
						uParam0->f_1C8 = 0;
					}
				}
			}
			if (iLocal_29 == 0 && iLocal_30 < 2)
			{
				func_235("DARTS_REMAIN", (uParam0->f_1A9[iLocal_29] - uParam0->f_1A6[iLocal_29]), uParam0->f_1A6[iLocal_29], 7500, 0);
			}
			else if (iLocal_29 == 1 && iLocal_30 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_302(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_19 = 1;
			iLocal_30++;
			SYSTEM::SETTIMERA(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_1C8 && uParam0->f_F8 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_30 == 3)
			{
				iLocal_30 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_29 == 0)
			{
				uParam0->f_1B3 = 0;
			}
			func_310(&(uParam1->f_29A), 3, 0);
			func_310(&(uParam1->f_29A), 2, 0);
			func_310(&(uParam1->f_29A), 4, 0);
		}
	}
}

void func_235(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x152EB
{
	iParam4 = iParam4;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_PRINT(iParam3, 1);
}

void func_236(int iParam0)//Position - 0x15310
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_237(int iParam0, bool bParam1)//Position - 0x1532E
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_475()))
		{
			if (bParam1)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_475(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_238())
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_238()//Position - 0x153AD
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0, bool bParam1)//Position - 0x153CE
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_475()))
		{
			if (bParam1)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_475(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_238())
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_240(int iParam0)//Position - 0x1544D
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar1 = 1;
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_241(int iParam0)//Position - 0x15490
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_242(var uParam0, int iParam1)//Position - 0x154BC
{
	uParam0->f_2A7 = 1;
	uParam0->f_2AA = iParam1;
}

int func_243(int iParam0)//Position - 0x154D1
{
	int iVar0;
	
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		iVar0 = 1;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_244(int iParam0)//Position - 0x154FD
{
	switch (iParam0)
	{
		case 0:
			Global_17C49.f_4348++;
			func_245("DARTS_STAT_NUM_BULLSEYES", Global_17C49.f_4348);
			break;
		
		case 1:
			Global_17C49.f_4348.f_1++;
			func_245("DARTS_STAT_NUM_180S", Global_17C49.f_4348.f_1);
			break;
		
		case 2:
			Global_17C49.f_4348.f_2++;
			func_245("DARTS_STAT_NUM_WINS", Global_17C49.f_4348.f_2);
			break;
		
		case 3:
			Global_17C49.f_4348.f_3++;
			func_245("DARTS_STAT_NUM_LOSS", Global_17C49.f_4348.f_3);
			break;
		
		case 4:
			Global_17C49.f_4348.f_4++;
			func_245("DARTS_STAT_DARTS_THROWN", Global_17C49.f_4348.f_4);
			break;
		
		case 5:
			Global_17C49.f_4348.f_5++;
			func_245("DARTS_STAT_NUM_GAMES", Global_17C49.f_4348.f_5);
			break;
		
		case 7:
			Global_17C49.f_4348.f_7 = (SYSTEM::TO_FLOAT(Global_17C49.f_4348.f_2) / SYSTEM::TO_FLOAT(Global_17C49.f_4348.f_5));
			break;
		
		case 8:
			Global_17C49.f_4348.f_8 = (SYSTEM::TO_FLOAT(Global_17C49.f_4348.f_4) / SYSTEM::TO_FLOAT(Global_17C49.f_4348.f_5));
			break;
	}
}

void func_245(char* sParam0, var uParam1)//Position - 0x15674
{
}

void func_246(var uParam0)//Position - 0x1567C
{
	if (!uParam0->f_1CC)
	{
		uParam0->f_1CC = 1;
	}
	func_244(5);
	HUD::CLEAR_SMALL_PRINTS();
	HUD::CLEAR_HELP(1);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_392(2)))
	{
		AUDIO::STOP_AUDIO_SCENE(func_392(2));
	}
	if (uParam0->f_F8 == 1)
	{
		func_233();
	}
	if (iLocal_29 == 0)
	{
		uParam0->f_1C6 = 1;
		iLocal_176 = 1;
		uParam0->f_1BE[iLocal_29]++;
		uParam0->f_1B5[iLocal_29]++;
		func_244(2);
		iLocal_105[8]++;
	}
	else
	{
		uParam0->f_1C6 = 0;
		uParam0->f_1BE[iLocal_29]++;
		uParam0->f_1B5[iLocal_29]++;
		func_244(3);
		iLocal_105[9]++;
	}
	func_244(7);
	func_412(&(uParam0->f_FE));
	if (func_248(uParam0))
	{
		uParam0->f_1C1[0] = 0;
		uParam0->f_1C1[1] = 0;
		uParam0->f_1BE[0] = 0;
		uParam0->f_1BE[1] = 0;
		uParam0->f_1BB[iLocal_29]++;
		if (!uParam0->f_1CA)
		{
			if (uParam0->f_1C6)
			{
				func_247(1);
			}
			uParam0->f_1CA = 1;
		}
		if (uParam0->f_1C6)
		{
			iLocal_105[3]++;
			iLocal_194 = 0;
		}
		else
		{
			iLocal_105[5]++;
			iLocal_194 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	AUDIO::START_AUDIO_SCENE(func_392(3));
	iLocal_173 = 1;
	uParam0->f_1AC = 0;
	iLocal_53 = 0;
	uParam0->f_1A9[0] = 301;
	uParam0->f_1A9[1] = 301;
}

void func_247(bool bParam0)//Position - 0x15825
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_75())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

int func_248(var uParam0)//Position - 0x15898
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_100(uParam0->f_1C6, 0, 1);
	switch (uParam0->f_1C4)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_1BE[iVar0] == iVar1)
	{
		uParam0->f_1C1[iVar0]++;
		uParam0->f_1B8[iVar0]++;
		uParam0->f_1BE[0] = 0;
		uParam0->f_1BE[1] = 0;
		uParam0->f_1CB = 1;
		if (iVar0 == 0)
		{
			iLocal_105[6]++;
		}
		if (uParam0->f_1C1[iVar0] == uParam0->f_1C5)
		{
			uParam0->f_1CB = 0;
			return 1;
		}
	}
	return 0;
}

void func_249(var uParam0, var uParam1, bool bParam2)//Position - 0x1595A
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	
	Var3 = { uParam0->f_8 };
	Var3.x = (Var3.x + 0.0041f);
	Var3.f_2 = (Var3.f_2 + 0.0002f);
	fVar1 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, Var3.x, Var3.f_2);
	fVar0 = func_250(Var3);
	uParam0->f_16 = fVar0;
	if (bParam2)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_14 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_14 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_14 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_14 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_15 = 3;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_15 = 2;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_15 = 1;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar5 = (iLocal_32[iVar4] * uParam0->f_15);
				uParam0->f_14 = iVar5;
			}
			fVar2 = (fVar2 + 18f);
			iVar4++;
		}
	}
}

var func_250(struct<3> Param0)//Position - 0x15B8E
{
	return SYSTEM::SQRT(((Param0.x * Param0.x) + (Param0.f_2 * Param0.f_2)));
}

int func_251(var uParam0)//Position - 0x15BA9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_30)
	{
		if (((uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_8 > (uParam0->f_5[iLocal_29 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_8 < (uParam0->f_5[iLocal_29 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_29 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_29 /*79*/][iLocal_30 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_29 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_252(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x15C6F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (iLocal_29 == 0 && iParam2 == 1)
	{
		func_253("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 1);
	}
	fVar2 = MISC::GET_FRAME_TIME();
	Var1 = { uParam0->f_5 * Vector(fVar2, fVar2, fVar2) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var1 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_17 = 1;
		uParam0->f_18 = 0;
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_B, (uParam0->f_B.f_1 + fLocal_33), uParam0->f_B.f_2) };
		ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, 1, 0, 0, 1);
		return 1;
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_33), uParam0->f_2.f_2) };
	ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, 1, 0, 0, 1);
	uParam0->f_11.f_1 = (uParam0->f_11.f_1 + (1000f * fVar2));
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_11, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_253(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x15D8F
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_264(&Var0);
			break;
		
		case 1:
			func_263(&Var0);
			break;
		
		case 5:
			func_262(&Var0);
			break;
		
		case 6:
			func_261(&Var0);
			break;
		
		case 7:
			func_260(&Var0);
			break;
		
		case 8:
			func_259(&Var0);
			break;
		
		case 9:
			func_258(&Var0);
			break;
	}
	if (func_256())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_255(Var0), func_254(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_255(Var0), func_254(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

float func_254(float fParam0)//Position - 0x15E94
{
	return (fParam0 + fLocal_13);
}

float func_255(float fParam0)//Position - 0x15EA1
{
	return (fParam0 + fLocal_12);
}

int func_256()//Position - 0x15EAE
{
	if (func_257())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_257()//Position - 0x15EED
{
	return Global_1406B8;
}

void func_258(var uParam0)//Position - 0x15EF9
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_259(var uParam0)//Position - 0x15F13
{
	uParam0->f_7 = 2;
}

void func_260(var uParam0)//Position - 0x15F20
{
	uParam0->f_7 = 5;
}

void func_261(var uParam0)//Position - 0x15F2D
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_262(var uParam0)//Position - 0x15F4A
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_263(var uParam0)//Position - 0x15F67
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_264(var uParam0)//Position - 0x15F90
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_265(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x15FB8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar9 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_32[iVar5])
			{
				fVar4 = fVar9;
			}
			fVar9 = (fVar9 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(func_267(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-60f, 60f);
		}
		else
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-200f, -60f);
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(func_267(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, -0.3f);
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (SYSTEM::SIN(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (SYSTEM::COS(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_266(uParam0);
	}
	else
	{
		uParam0->f_17 = 0;
		uParam0->f_18 = 1;
		func_266(uParam0);
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, Local_39, 0, 0, 0);
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
		Var7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, Local_40) };
		Var8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_33), uParam0->f_8.f_2) };
		fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D((Var7.x - Var8.x), (Var7.f_1 - Var8.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_11 = { 90f, fVar1, fVar2 };
		ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_11, 0, 1);
		uParam0->f_2 = { Local_40 };
		*uParam2 = 3;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_266(var uParam0)//Position - 0x16311
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar4 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	Var0 = { Local_40 - uParam0->f_8 };
	fVar1 = SYSTEM::VMAG(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
	fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_11.f_2 = (fVar2 - 180f);
	fVar3 = (MISC::TAN(uParam0->f_11.f_2) * fVar4);
	uParam0->f_B = { uParam0->f_8 };
	uParam0->f_B = (uParam0->f_B + fVar3);
	Var0 = { Local_40 - uParam0->f_B };
	fVar1 = SYSTEM::VMAG(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
}

int func_267(var uParam0)//Position - 0x163BD
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_268(var uParam0, var uParam1)//Position - 0x163F1
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_29] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_29] > 60)
	{
		if (((*uParam0)[iLocal_29] % 2) == 1)
		{
			if (func_238())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_29] < 61)
	{
		if ((*uParam0)[iLocal_29] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_29] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_29] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_29] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_29] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_29] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_29] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_29] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_29] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_269(var uParam0)//Position - 0x16543
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 33)
	{
		func_4(uParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_270(var uParam0)//Position - 0x1656F
{
	func_271(uParam0, 0f);
}

void func_271(var uParam0, float fParam1)//Position - 0x1657E
{
	uParam0->f_1 = (func_8(MISC::IS_BIT_SET(*uParam0, 4)) + fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_272(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x165AC
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_51)
			{
				if (SYSTEM::TIMERB() > 50)
				{
					iLocal_52 = 0;
					iLocal_53 = 0;
					iLocal_55 = 0;
					if (func_281(uParam0, uParam1, 0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_51 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(PAD::IS_CONTROL_JUST_PRESSED(2, 223) && iLocal_55) && !bParam4)
				{
					iLocal_52 = 1;
					iLocal_53 = 1;
					if (!iLocal_54)
					{
						func_280(uParam0, *uParam2);
						iLocal_54 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_279();
						}
						func_278(uParam0, iParam6);
						func_277(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { Local_40 };
						iLocal_52 = 1;
						iLocal_53 = 1;
					}
					if (iLocal_52 && iLocal_53)
					{
						if (!iLocal_51)
						{
							HUD::CLEAR_PRINTS();
							iLocal_51 = 1;
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_51)
			{
				func_253("Darts", "Dart_Reticules", &Local_37, 1, 0, 4, 1);
				if (SYSTEM::TIMERB() > 25)
				{
					if (func_281(uParam0, uParam1, 1))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_51 = 0;
						return 1;
					}
				}
			}
			else if (!func_273(uParam0))
			{
				if (!iLocal_54)
				{
					func_280(uParam0, *uParam2);
				}
				else
				{
					func_279();
					func_278(uParam0, iParam6);
					func_277(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_51)
			{
				iLocal_51 = 1;
				SYSTEM::SETTIMERB(0);
			}
			break;
	}
	return 0;
}

int func_273(var uParam0)//Position - 0x16821
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = PAD::GET_CONTROL_NORMAL(2, 220);
	fVar2 = PAD::GET_CONTROL_NORMAL(2, 221);
	iLocal_90 = SYSTEM::ROUND(fVar2);
	switch (iLocal_89)
	{
		case 0:
			if (iLocal_90 > 120)
			{
				iLocal_91 = MISC::GET_GAME_TIMER();
				iLocal_89 = 1;
			}
			if (iLocal_90 < -100)
			{
				iLocal_95 = SYSTEM::ROUND(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_90 > 120)
			{
				iLocal_91 = MISC::GET_GAME_TIMER();
			}
			else if ((iLocal_90 < 120 && iLocal_90 > -120) && (MISC::GET_GAME_TIMER() - iLocal_91) > 500)
			{
				iLocal_89 = 0;
			}
			else if (iLocal_90 < -100)
			{
				iLocal_92 = MISC::GET_GAME_TIMER();
				if ((iLocal_92 - iLocal_91) < 500)
				{
					iLocal_95 = SYSTEM::ROUND(fVar1);
					iLocal_93 = (iLocal_92 - iLocal_91);
					iLocal_89 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_93 > iLocal_94)
			{
				if (iLocal_93 > 100 && iLocal_93 < 150)
				{
					fLocal_98 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_98);
				}
				else
				{
					fLocal_97 = (SYSTEM::TO_FLOAT(iLocal_94) / SYSTEM::TO_FLOAT(iLocal_93));
					fLocal_98 = ((1f - fLocal_97) * fLocal_101);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_98);
				}
			}
			else
			{
				fLocal_98 = 0f;
			}
			if (iLocal_95 > 7)
			{
				fLocal_99 = (SYSTEM::TO_FLOAT(iLocal_95) / fLocal_104);
				fLocal_100 = (fLocal_102 * fLocal_99);
				uParam0->f_8 = (uParam0->f_8 + fLocal_100);
			}
			else if (iLocal_95 < -7)
			{
				fLocal_99 = (SYSTEM::TO_FLOAT(iLocal_95) / fLocal_103);
				fLocal_100 = (fLocal_102 * fLocal_99);
				uParam0->f_8 = (uParam0->f_8 - fLocal_100);
			}
			else
			{
				fLocal_100 = 0f;
			}
			if (fLocal_98 < 0.066477f && fLocal_100 == 0f)
			{
				func_276();
			}
			else if (fLocal_98 <= 0.066477f && fLocal_100 < 0.06f)
			{
				func_275();
			}
			else
			{
				func_274();
			}
			iVar0 = 1;
			iLocal_89 = 0;
			break;
	}
	return iVar0;
}

void func_274()//Position - 0x169DF
{
	Local_38.f_4 = 210;
	Local_38.f_5 = 23;
	Local_38.f_6 = 19;
}

void func_275()//Position - 0x169F9
{
	Local_38.f_4 = 183;
	Local_38.f_5 = 137;
	Local_38.f_6 = 0;
}

void func_276()//Position - 0x16A12
{
	Local_38.f_4 = 16;
	Local_38.f_5 = 184;
	Local_38.f_6 = 10;
}

void func_277(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x16A2C
{
	struct<3> Var0;
	
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_E, (uParam0->f_E.f_1 + fLocal_33), uParam0->f_E.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_E, (uParam0->f_E.f_1 + fLocal_33), uParam0->f_E.f_2) };
	}
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Local_37, &(Local_37.f_1));
	if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_48)
		{
			func_253("Darts", "Dart_Reticules_Zoomed", &Local_37, 1, 0, 4, 1);
		}
		else
		{
			func_253("Darts", "Dart_Reticules", &Local_37, 1, 0, 4, 1);
		}
		if (!iLocal_55)
		{
			iLocal_55 = 1;
		}
	}
}

void func_278(var uParam0, int iParam1)//Position - 0x16ADB
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218);
	fVar4 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219);
	fVar5 = PAD::GET_CONTROL_NORMAL(2, 220);
	fVar6 = PAD::GET_CONTROL_NORMAL(2, 221);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (MISC::ABSF(fVar5) > MISC::ABSF(fVar3) || MISC::ABSF(fVar6) > MISC::ABSF(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (PAD::IS_CONTROL_PRESSED(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_46 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_46 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_46 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_46 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_46 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_46 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_46 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_46 * fVar0));
			}
		}
	}
	uParam0->f_E = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_43), (0f + fLocal_43));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_42), (0f + fLocal_42));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_E = uParam0->f_8;
			uParam0->f_E = (uParam0->f_E + (fVar1 * fVar0));
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_43), (0f + fLocal_43));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_42), (0f + fLocal_42));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_E.f_2 = uParam0->f_8.f_2;
			uParam0->f_E.f_2 = (uParam0->f_E.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_46 = 0.5f;
		if (iLocal_89 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_E = uParam0->f_8;
			uParam0->f_E = (uParam0->f_E + (fVar1 * fVar0));
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_E.f_2 = uParam0->f_8.f_2;
			uParam0->f_E.f_2 = (uParam0->f_E.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_279()//Position - 0x16ECD
{
	if (PAD::IS_CONTROL_PRESSED(2, 227))
	{
		fLocal_46 = 0.3f;
	}
	else
	{
		fLocal_46 = 0.1f;
	}
	if (PAD::IS_CONTROL_PRESSED(2, 229))
	{
		if (bLocal_48)
		{
			if (SYSTEM::TIMERA() > iLocal_96)
			{
				fLocal_42 = fLocal_44;
				fLocal_43 = fLocal_45;
				fLocal_46 = 0.1f;
				bLocal_48 = false;
			}
		}
		else if (iLocal_47 < 1)
		{
			fLocal_42 = 0.03f;
			fLocal_43 = 0.05f;
			fLocal_46 = 0.1f;
			SYSTEM::SETTIMERA(0);
			bLocal_48 = true;
			iLocal_47++;
		}
		else if ((((((!func_282("DARTS_FST_HLP") && !func_282("DARTS_AIM_HLP")) && !func_282("DARTS_CLOCK")) && !func_282("DARTS_STD_HLP")) && !func_282("DARTS_INSTR_W")) && !func_282("DARTS_INSTR_B")) && !iLocal_49)
		{
			iLocal_49 = 1;
			if (!MISC::IS_BIT_SET(Global_17C22, 1))
			{
				func_396("DARTS_SHT_USE", -1);
				MISC::SET_BIT(&Global_17C22, 1);
			}
		}
	}
	else if (bLocal_48)
	{
		fLocal_42 = fLocal_44;
		fLocal_43 = fLocal_45;
		fLocal_46 = 0.1f;
		bLocal_48 = false;
	}
}

void func_280(var uParam0, struct<4> Param1, var uParam2, var uParam3)//Position - 0x16FDF
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	Var0.x = (Var0.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_40 };
}

int func_281(var uParam0, var uParam1, bool bParam2)//Position - 0x17033
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*uParam0, Local_39, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, Local_39, 0, 0, 0);
	}
	bLocal_48 = false;
	fLocal_46 = 0.1f;
	fLocal_42 = fLocal_44;
	fLocal_43 = fLocal_45;
	uParam0->f_17 = 0;
	uParam0->f_18 = 1;
	func_266(uParam0);
	fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
	Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, Local_40) };
	Var2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, (uParam0->f_E + 0.0035f), (uParam0->f_E.f_1 + fLocal_33), uParam0->f_E.f_2) };
	fVar5 = MISC::GET_HEADING_FROM_VECTOR_2D((Var1.x - Var2.x), (Var1.f_1 - Var2.f_1));
	fVar5 = (fVar5 - 180f);
	fVar3 = 90f;
	uParam0->f_11 = { fVar3, fVar4, fVar5 };
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_11, 0, 1);
	iLocal_52 = 0;
	iLocal_54 = 0;
	if (bParam2)
	{
		func_253("Darts", "Dart_Reticules", &Local_37, 1, 0, 4, 1);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_33), uParam0->f_8.f_2) };
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Local_38, &(Local_38.f_1));
	return 1;
}

bool func_282(char* sParam0)//Position - 0x1716A
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_283(int iParam0, int iParam1)//Position - 0x1717D
{
	if (iParam0 == 0)
	{
		if (!MISC::IS_BIT_SET(Global_17C22, 9))
		{
			if ((!func_282("DARTS_SHT_USE") && !func_282("DARTS_INSTR_W")) && !func_282("DARTS_INSTR_B"))
			{
				func_396("DARTS_AIM_HLP", -1);
				MISC::SET_BIT(&Global_17C22, 9);
			}
		}
		else if (iParam1 && !MISC::IS_BIT_SET(Global_17C22, 7))
		{
			if ((!func_282("DARTS_AIM_HLP") && !func_282("DARTS_INSTR_W")) && !func_282("DARTS_INSTR_B"))
			{
				func_396("DARTS_CLOCK", -1);
				MISC::SET_BIT(&Global_17C22, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_17C22, 8))
		{
			if ((!func_282("DARTS_SHT_USE") && !func_282("DARTS_INSTR_W")) && !func_282("DARTS_INSTR_B"))
			{
				func_396("DARTS_STD_HLP", -1);
				MISC::SET_BIT(&Global_17C22, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_50 && !func_282("DARTS_SHT_USE")) && !func_282("DARTS_INSTR_W")) && !func_282("DARTS_INSTR_B"))
		{
			if (!MISC::IS_BIT_SET(Global_17C22, 2))
			{
				func_396("DARTS_FST_HLP", -1);
				MISC::SET_BIT(&Global_17C22, 2);
			}
			iLocal_50 = 1;
		}
	}
}

int func_284(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x172D2
{
	struct<3> Var0;
	
	switch (*uParam2)
	{
		case 0:
			Var0 = { func_287(iParam0) };
			*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, Var0) };
			func_286(*uParam3);
			SYSTEM::SETTIMERB(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (SYSTEM::TIMERB() > 3000 || PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				func_285();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_285()//Position - 0x17343
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_74, uLocal_86, 2000, 1, 1);
	CAM::DESTROY_CAM(uLocal_86, 0);
}

void func_286(struct<3> Param0)//Position - 0x1735F
{
	struct<3> Var0;
	
	Var0 = { -5.5606f, -0.0106f, -131.6781f };
	uLocal_86 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Param0, Var0, 65f, 0, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_86, uLocal_74, 2000, 1, 1);
}

Vector3 func_287(int iParam0)//Position - 0x173A1
{
	float fVar0;
	struct<3> Var1;
	
	if (iParam0 == 50)
	{
		Var1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_290(iParam0);
		Var1.f_1 = -0.5f;
		Var1.x = func_289(fVar0);
		Var1.f_2 = func_288(fVar0);
	}
	return Var1;
}

float func_288(float fParam0)//Position - 0x173E5
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::COS(fParam0) * fVar0);
	return fVar1;
}

float func_289(float fParam0)//Position - 0x17401
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::SIN(fParam0) * fVar0);
	return fVar1;
}

var func_290(int iParam0)//Position - 0x1741D
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_32[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_291(var uParam0)//Position - 0x17459
{
	switch (*uParam0)
	{
		case 0:
			if (PAD::IS_CONTROL_PRESSED(2, 228))
			{
				func_298(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (PAD::IS_CONTROL_PRESSED(2, 228))
			{
				if (!CAM::IS_CAM_INTERPOLATING(uLocal_83))
				{
					func_296();
					func_295(&uLocal_199, Local_230, Local_231, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!PAD::IS_CONTROL_PRESSED(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_292(&uLocal_199, 1, 1, 0, 0, 1045220557, 0);
			}
			break;
		
		case 3:
			func_298(0);
			func_476();
			if (CAM::DOES_CAM_EXIST(uLocal_199))
			{
				if (CAM::IS_CAM_ACTIVE(uLocal_199))
				{
					CAM::SET_CAM_ACTIVE(uLocal_199, 0);
				}
				CAM::DESTROY_CAM(uLocal_199, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_292(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6)//Position - 0x17546
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	
	PAD::_0x7F4724035FDCA1DD(2);
	func_294(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (PAD::IS_LOOK_INVERTED())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		fVar1 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 239);
		fVar2 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 240);
		fVar3 = (fVar1 - uParam0->f_1D);
		fVar4 = (fVar2 - uParam0->f_1E);
		uParam0->f_1D = fVar1;
		uParam0->f_1E = fVar2;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::FLOOR(((fVar3 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::FLOOR(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::FLOOR(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::FLOOR(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_293((iVar0[2] + uParam0->f_18), -127, 127);
		iVar0[3] = func_293((iVar0[3] + uParam0->f_19), -127, 127);
	}
	if (uParam0->f_18 == iVar0[2] && uParam0->f_19 == iVar0[3])
	{
		if (uParam0->f_1B < MISC::GET_GAME_TIMER())
		{
			uParam0->f_18 = 0;
			uParam0->f_19 = 0;
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_1C = 1;
			}
		}
	}
	else
	{
		uParam0->f_18 = iVar0[2];
		uParam0->f_19 = iVar0[3];
		uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
		uParam0->f_1C = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_14));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_16)) / IntToFloat(uParam0->f_14));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_15));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
	}
	fVar5 = (30f * SYSTEM::TIMESTEP());
	Var6 = { uParam0->f_8 + uParam0->f_B };
	if ((PAD::_IS_USING_KEYBOARD(2) && bParam2) && !uParam0->f_1C)
	{
		uParam0->f_E = Var6.x;
		uParam0->f_E.f_1 = Var6.f_1;
		uParam0->f_E.f_2 = Var6.f_2;
	}
	else
	{
		uParam0->f_E = (uParam0->f_E + func_14((((Var6.x - uParam0->f_E) * 0.05f) * fVar5), -3f, 3f));
		uParam0->f_E.f_1 = (uParam0->f_E.f_1 + func_14((((Var6.f_1 - uParam0->f_E.f_1) * 0.05f) * fVar5), -3f, 3f));
		uParam0->f_E.f_2 = (uParam0->f_E.f_2 + func_14((((Var6.f_2 - uParam0->f_E.f_2) * 0.05f) * fVar5), -3f, 3f));
	}
	if (uParam0->f_1A)
	{
		uParam0->f_E = func_14(uParam0->f_E, SYSTEM::TO_FLOAT(-uParam0->f_15), SYSTEM::TO_FLOAT(uParam0->f_15));
		uParam0->f_E.f_1 = func_14(uParam0->f_E.f_1, SYSTEM::TO_FLOAT(-uParam0->f_16), SYSTEM::TO_FLOAT(uParam0->f_16));
		uParam0->f_E.f_2 = func_14(uParam0->f_E.f_2, SYSTEM::TO_FLOAT(-uParam0->f_14), SYSTEM::TO_FLOAT(uParam0->f_14));
	}
	if (PAD::_IS_USING_KEYBOARD(0) && bParam1)
	{
		if (uParam0->f_1C)
		{
			uParam0->f_11 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_11 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar7))
			{
				uParam0->f_11 = (uParam0->f_11 - 5f);
				uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_1C = 0;
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar8))
			{
				uParam0->f_11 = (uParam0->f_11 + 5f);
				uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_1C = 0;
			}
			if (bParam3)
			{
				uParam0->f_11 = func_14(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), uParam0->f_7);
			}
			else
			{
				uParam0->f_11 = func_14(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), (uParam0->f_7 + uParam0->f_13));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
			}
		}
		else
		{
			uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
		}
	}
	uParam0->f_12 = (uParam0->f_12 + (((uParam0->f_11 - uParam0->f_12) * 0.06f) * fVar5));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_E, uParam0->f_12, 0, 1, 1, 2);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			if (CAM::IS_CAM_RENDERING(*uParam0))
			{
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			}
		}
	}
}

int func_293(int iParam0, int iParam1, int iParam2)//Position - 0x179EF
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_294(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x17A14
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_295(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x17B18
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = fParam3;
	uParam0->f_12 = fParam3;
	uParam0->f_17 = iParam8;
	uParam0->f_13 = fParam7;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	CAM::SET_CAM_ACTIVE(*uParam0, 1);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
	}
	if (uParam0->f_17)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_1D = 0f;
	uParam0->f_1E = 0f;
	uParam0->f_1A = 0;
	uParam0->f_1C = 0;
	uParam0->f_1B = 0;
}

void func_296()//Position - 0x17C10
{
	if (iLocal_159)
	{
		return;
	}
	func_297();
	PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Darts Zoom");
	iLocal_159 = 1;
}

void func_297()//Position - 0x17C32
{
	if (iLocal_158 || iLocal_159)
	{
		PAD::_RESET_INPUT_MAPPING_SCHEME();
		iLocal_158 = 0;
		iLocal_159 = 0;
	}
}

void func_298(bool bParam0)//Position - 0x17C55
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_83, uLocal_74, 1000, 1, 1);
	}
	else
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_74, uLocal_83, 1000, 1, 1);
	}
}

void func_299(var uParam0)//Position - 0x17C7F
{
	if (uParam0->f_2A7)
	{
		if (uParam0->f_2A9 == 2)
		{
			uParam0->f_2A9 = 0;
		}
		uParam0->f_2A7 = 0;
	}
	switch (uParam0->f_2A9)
	{
		case 0:
			func_220(&(uParam0->f_3E), func_301(uParam0->f_2AA), "", 2000, 5, 1);
			uParam0->f_2A9 = 1;
			break;
		
		case 1:
			if (!func_215(&(uParam0->f_3E), 0))
			{
				func_300(&(uParam0->f_3E));
				uParam0->f_2A9 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_300(var uParam0)//Position - 0x17D04
{
	uParam0->f_8 = 0;
	func_399(&(uParam0->f_2));
	func_399(&(uParam0->f_5));
}

char* func_301(int iParam0)//Position - 0x17D21
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_302(var uParam0)//Position - 0x17D4E
{
	if (!iLocal_53)
	{
		if (!PAD::IS_CONTROL_PRESSED(2, 201))
		{
			iLocal_53 = 1;
		}
	}
	if ((iLocal_29 == 1 && iLocal_30 < 3) && *uParam0 != 5)
	{
		if ((PAD::IS_CONTROL_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && iLocal_53)
		{
			*uParam0 = 6;
		}
	}
}

void func_303(var uParam0, int iParam1)//Position - 0x17DA6
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_29A), 15) && !iLocal_47 > 0)
			{
				func_105(&(uParam0->f_1FD), 0, 0, 0, 1);
				func_104(&(uParam0->f_1FD), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_104(&(uParam0->f_1FD), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_304(&(uParam0->f_1FD), "DARTS_AIM", 2, 20, 1, 0);
				func_104(&(uParam0->f_1FD), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_104(&(uParam0->f_1FD), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_104(&(uParam0->f_1FD), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_101(&(uParam0->f_1FD), 1);
				func_310(&(uParam0->f_29A), 8, 0);
				func_310(&(uParam0->f_29A), 16, 0);
				func_310(&(uParam0->f_29A), 23, 0);
			}
			else if (iLocal_47 > 0 && !func_3(&(uParam0->f_29A), 17))
			{
				func_105(&(uParam0->f_1FD), 0, 0, 0, 1);
				func_104(&(uParam0->f_1FD), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_104(&(uParam0->f_1FD), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_304(&(uParam0->f_1FD), "DARTS_AIM", 2, 20, 1, 0);
				func_104(&(uParam0->f_1FD), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_104(&(uParam0->f_1FD), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_101(&(uParam0->f_1FD), 1);
				func_310(&(uParam0->f_29A), 8, 0);
				func_310(&(uParam0->f_29A), 16, 0);
				func_310(&(uParam0->f_29A), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_29A), 16))
		{
			func_105(&(uParam0->f_1FD), 1, 0, 0, 1);
			func_104(&(uParam0->f_1FD), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_104(&(uParam0->f_1FD), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_101(&(uParam0->f_1FD), 1);
			func_310(&(uParam0->f_29A), 16, 1);
			func_310(&(uParam0->f_29A), 8, 0);
			func_310(&(uParam0->f_29A), 15, 0);
			func_310(&(uParam0->f_29A), 17, 0);
			func_310(&(uParam0->f_29A), 23, 0);
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		func_184(func_100(func_3(&(uParam0->f_29A), 16), 1, 2));
		func_107(&(uParam0->f_1FD), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_29A), 15) || func_3(&(uParam0->f_29A), 16)) || func_3(&(uParam0->f_29A), 23))
	{
		func_310(&(uParam0->f_29A), 15, 0);
		func_310(&(uParam0->f_29A), 16, 0);
		func_310(&(uParam0->f_29A), 23, 0);
	}
}

int func_304(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x18063
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_7B;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_C = 0;
		uParam0->f_2[iVar0 /*15*/].f_D = 0;
		uParam0->f_2[iVar0 /*15*/].f_E = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_C), 0);
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_D), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_E++;
		uParam0->f_7B++;
		return 1;
	}
	return 0;
}

void func_305(var uParam0)//Position - 0x1812E
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_3(&(uParam0->f_29A), 23))
		{
			func_105(&(uParam0->f_1FD), 0, 0, 0, 1);
			func_304(&(uParam0->f_1FD), "IB_MAPMOVE", 2, 21, 1, 0);
			func_104(&(uParam0->f_1FD), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_101(&(uParam0->f_1FD), 1);
			func_310(&(uParam0->f_29A), 23, 1);
			func_310(&(uParam0->f_29A), 8, 0);
			func_310(&(uParam0->f_29A), 16, 0);
			func_310(&(uParam0->f_29A), 15, 0);
			func_310(&(uParam0->f_29A), 17, 0);
		}
		func_107(&(uParam0->f_1FD), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_29A), 15) || func_3(&(uParam0->f_29A), 16)) || func_3(&(uParam0->f_29A), 23))
	{
		func_310(&(uParam0->f_29A), 15, 0);
		func_310(&(uParam0->f_29A), 16, 0);
		func_310(&(uParam0->f_29A), 23, 0);
		func_310(&(uParam0->f_29A), 17, 0);
	}
}

void func_306(var uParam0)//Position - 0x18240
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_53)
	{
		if (!PAD::IS_CONTROL_PRESSED(2, 201) && !PAD::IS_CONTROL_PRESSED(2, 202))
		{
			iLocal_53 = 1;
		}
		else
		{
			iLocal_53 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_53 && iLocal_52 == 0)
			{
				iLocal_53 = 0;
				bVar0 = false;
				bLocal_170 = false;
				HUD::CLEAR_HELP(1);
			}
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 235) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 235))
		{
			if (!bLocal_170)
			{
				*uParam0 = 14;
				bLocal_170 = true;
				HUD::CLEAR_HELP(1);
			}
		}
		else if (func_282("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_170 = false;
		}
	}
}

void func_307(int iParam0)//Position - 0x182E3
{
	if (!PED::IS_PED_INJURED(uParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_308(int iParam0)//Position - 0x18301
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_309(int iParam0)//Position - 0x18356
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

void func_310(var uParam0, int iParam1, bool bParam2)//Position - 0x183AB
{
	if (bParam2)
	{
		MISC::SET_BIT(uParam0, iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(uParam0, iParam1);
	}
}

int func_311(int iParam0, var uParam1)//Position - 0x183CB
{
	if (iParam0 >= 10)
	{
		if (!MISC::IS_BIT_SET(Global_17C49.f_4348.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_312(int iParam0, var uParam1, var uParam2)//Position - 0x183F7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_1A6[iVar0] = 301;
		iParam0->f_1A9[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_1C6 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_223(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_222(uParam1, iVar0);
		func_228(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_29 = 0;
	iLocal_30 = 0;
	iParam0->f_1AC = 0;
	iParam0->f_F9.f_3 = 0;
	iLocal_186 = 0;
	iParam0->f_1B4 = 0;
	iLocal_47 = 0;
	iLocal_163 = 1;
	iLocal_164 = 0;
	iLocal_166 = 0;
	iLocal_49 = 0;
	iParam0->f_1CA = 0;
	iParam0->f_1C8 = 0;
	iLocal_172 = 0;
	func_310(&(uParam2->f_29A), 6, 0);
	func_318();
	func_316(uParam2);
	if (iParam0->f_1C9)
	{
		func_313(iParam0->f_1C9);
		iParam0->f_1C9 = 0;
	}
	return 1;
}

void func_313(bool bParam0)//Position - 0x184E3
{
	HUD::DISPLAY_RADAR(0);
	if (CAM::IS_CAM_ACTIVE(uLocal_76))
	{
		CAM::SET_CAM_ACTIVE(uLocal_76, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_80))
	{
		CAM::SET_CAM_ACTIVE(uLocal_80, 0);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_315();
		CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_314(bParam0);
}

void func_314(bool bParam0)//Position - 0x18534
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE(uLocal_74, 1);
	}
}

void func_315()//Position - 0x18548
{
	CAM::SET_CAM_ACTIVE(uLocal_76, 1);
}

void func_316(var uParam0)//Position - 0x18557
{
	func_317();
	uParam0->f_29E = 3;
	func_310(&(uParam0->f_29A), 15, 0);
	func_310(&(uParam0->f_29A), 16, 0);
	func_310(&(uParam0->f_29A), 17, 0);
}

void func_317()//Position - 0x1858D
{
	int iVar0;
	
	Local_107.f_42 = -1;
	Local_107.f_43 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_107.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_107.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_107.f_9[iVar0 /*7*/].f_5 = 0;
		Local_107.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_107.f_5 = 0;
	Local_107.f_5.f_1 = -1f;
	Local_107.f_5.f_2 = 0;
	Local_107 = 0;
	Local_107.f_1 = 0;
}

void func_318()//Position - 0x185FD
{
	SYSTEM::SETTIMERA(0);
	iLocal_53 = 0;
	HUD::CLEAR_SMALL_PRINTS();
}

void func_319(bool bParam0, int iParam1)//Position - 0x18611
{
	int iVar0;
	
	if (!func_321(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_4354.f_1C27)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_4354.f_1C27 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_4354.f_1316[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_4354.f_1316[iVar0] = 0;
	}
	if (Global_4354.f_130F[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_4354.f_130F[iVar0] = 0;
	}
	if (bParam0)
	{
		func_320(&(Global_4354.f_1336[iVar0 /*10*/]));
		Global_4354.f_1373[iVar0] = 0;
	}
	else
	{
		Global_4354.f_1373[iVar0] = 0;
	}
}

void func_320(var uParam0)//Position - 0x186AF
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_321(var uParam0, bool bParam1, int iParam2)//Position - 0x186D8
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_4354.f_1373[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_4354.f_1373[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_4354.f_1373[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_322(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18775
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_323(var uParam0, var uParam1, var uParam2)//Position - 0x187A5
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (!func_3(&(uParam0->f_29A), 7))
	{
		func_379(0, 0, 0, 1);
		func_378(0, -1);
		if (func_377())
		{
			if (Global_26CF15 == uParam0->f_294)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_294 = Global_26CF15;
				func_376(uParam0->f_294, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				switch (uParam0->f_294)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
				{
					func_375(sVar0, 0, 0);
				}
			}
			Global_26CF16 = MISC::GET_GAME_TIMER() + 300;
		}
		else if (func_374() && MISC::GET_GAME_TIMER() > Global_26CF16)
		{
			if (Global_26CF15 == uParam0->f_294)
			{
				iVar2 = func_373(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_26CF16 = MISC::GET_GAME_TIMER() + 300;
		}
		if (func_372(&(uParam0->f_27F)))
		{
			uParam0->f_294 = (uParam0->f_294 - 1);
			if (uParam0->f_294 < 0)
			{
				uParam0->f_294 = (uParam0->f_295 - 1);
			}
			func_376(uParam0->f_294, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_294)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_375(sVar0, 0, 0);
			}
		}
		if (func_371(&(uParam0->f_282)))
		{
			uParam0->f_294++;
			if (uParam0->f_294 > (uParam0->f_295 - 1))
			{
				uParam0->f_294 = 0;
			}
			func_376(uParam0->f_294, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_294)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_375(sVar0, 0, 0);
			}
		}
		if (func_370(&(uParam0->f_279)) || func_369(&(uParam0->f_279), uParam0->f_294, iVar1))
		{
			if (uParam0->f_294 == 0)
			{
				uParam0->f_296 = (uParam0->f_296 - 1);
				if (uParam0->f_296 < 0)
				{
					uParam0->f_296 = (uParam0->f_297 - 1);
				}
			}
			else if (uParam0->f_294 == 1)
			{
				uParam0->f_298 = (uParam0->f_298 - 1);
				if (uParam0->f_298 < 0)
				{
					uParam0->f_298 = (uParam0->f_299 - 1);
				}
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_352(uParam0);
		}
		if (func_351(&(uParam0->f_27C)) || func_349(&(uParam0->f_27C), uParam0->f_294, iVar1))
		{
			if (uParam0->f_294 == 0)
			{
				uParam0->f_296++;
				if (uParam0->f_296 > (uParam0->f_297 - 1))
				{
					uParam0->f_296 = 0;
				}
			}
			else if (uParam0->f_294 == 1)
			{
				uParam0->f_298++;
				if (uParam0->f_298 > (uParam0->f_299 - 1))
				{
					uParam0->f_298 = 0;
				}
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_352(uParam0);
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar1 == 1) && uParam0->f_294 == 2)
		{
			*uParam1 = func_348(uParam0->f_296 + 1, 1);
			*uParam2 = func_348(uParam0->f_298 + 1, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_326(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || func_325())
		{
			func_324(0);
			func_310(&(uParam0->f_29A), 8, 0);
			func_310(&(uParam0->f_29A), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			func_34(0);
			*uParam1 = -1;
			return 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			func_352(uParam0);
			func_310(&(uParam0->f_29A), 7, 0);
		}
	}
	return 0;
}

void func_324(bool bParam0)//Position - 0x18BB2
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 250)
	{
		StringCopy(&(Global_4354.f_49[iVar0 /*4*/]), "", 16);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_4354.f_628[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_252911[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 250)
	{
		Global_4354.f_D0C[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_4354.f_E07[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_4354.f_F03[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_4354.f_110E[iVar0] = 0;
		Global_4354.f_1195[iVar0] = 0;
		Global_4354.f_1213[iVar0] = 0;
		Global_4354.f_140B[iVar0] = 0f;
		Global_4354.f_1291[iVar0] = 0;
		Global_4354.f_1388[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_4354.f_10ED[iVar0] = 0;
		Global_4354.f_10F9[iVar0] = 0f;
		Global_4354.f_10F3[iVar0] = -1f;
		Global_4354.f_1100[iVar0] = 0;
		Global_4354.f_1108[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_4354.f_1091[iVar0 /*4*/]), "", 16);
		Global_4354.f_10C2[iVar0] = -1;
		Global_4354.f_10CF[iVar0] = 332;
		Global_4354.f_10DC[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&(Global_4354.f_148F[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_4354.f_17A0[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_26CEC9.f_10), "", 16);
	Global_26CEC9.f_14 = -1;
	Global_4354 = 0;
	Global_4354.f_118C = 0;
	Global_4354.f_118D = 0;
	Global_4354.f_118E = 0;
	Global_4354.f_1190 = 0;
	Global_4354.f_1191 = 0;
	Global_4354.f_1192 = 0;
	Global_4354.f_118F = 0;
	Global_4354.f_1406 = 0;
	Global_4354.f_1382 = 0;
	Global_4354.f_1381 = 0;
	Global_4354.f_1383 = 0;
	StringCopy(&(Global_4354.f_F81), "", 16);
	Global_4354.f_FC7 = 0;
	Global_4354.f_FC8 = 0;
	Global_4354.f_FC9 = 0;
	Global_4354.f_FCA = 0;
	Global_4354.f_FCB = 0;
	Global_4354.f_FCC = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4354.f_F85[iVar0] = 0;
		iVar0++;
	}
	Global_4354.f_FCD = 0;
	StringCopy(&(Global_26CEC9.f_15), "", 16);
	Global_26CEC9.f_3D = 0;
	Global_26CEC9.f_3E = 0;
	Global_26CEC9.f_3F = 0;
	Global_26CEC9.f_40 = 0;
	Global_26CEC9.f_41 = 0;
	Global_26CEC9.f_42 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_26CEC9.f_19[iVar0] = 0;
		iVar0++;
	}
	Global_26CEC9.f_43 = 0;
	StringCopy(&(Global_4354.f_1), "", 16);
	Global_4354.f_10FF = 0f;
	Global_4354.f_44 = 0;
	Global_4354.f_45 = 0;
	Global_4354.f_46 = 0;
	Global_4354.f_47 = 0;
	Global_4354.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4354.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_4354.f_1387 = 0;
	Global_4354.f_1386 = 0;
	Global_4354.f_1384 = 0;
	Global_4354.f_1385 = 0;
	Global_4354.f_FCE = 0;
	Global_4354.f_FCF = 0;
	Global_4354.f_1193 = 10;
	Global_4354.f_1194 = 0;
	Global_4354.f_1408 = 0f;
	Global_4354.f_1409 = 0f;
	Global_4354.f_137A = 0;
	Global_4354.f_137B = 0;
	Global_4354.f_137C = 0f;
	Global_4354.f_137D = 0;
	Global_4354.f_137F = 0;
	Global_4354.f_137E = 0;
	Global_4354.f_1380 = 0;
	Global_4354.f_1C23 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_4354.f_1489[iVar0] = -1;
		Global_4354.f_148C[iVar0] = -1;
		iVar0++;
	}
	Global_4354.f_1106 = 0f;
	Global_4354.f_10E9 = 0;
	Global_4354.f_1107 = 0;
	Global_4354.f_1C0E = 0;
	Global_4354.f_1C09 = 0;
	Global_4354.f_1C13 = 0;
	Global_4354.f_1C18 = 0;
	Global_4354.f_1C1D = 0;
	Global_4354.f_1C1F = 0;
	Global_4354.f_1C25 = 0;
	Global_4351 = 0.05f;
	Global_4352 = 0.05f;
	Global_4353 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_4353 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_4353 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_4353 = 0.225f;
	}
}

int func_325()//Position - 0x1904C
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_326(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x1906B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	float fVar47;
	bool bVar48;
	bool bVar49;
	int iVar50;
	bool bVar51;
	float fVar52;
	float fVar53;
	float fVar54;
	int iVar55;
	int iVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	float fVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	
	if (!func_321(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_345(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar53 = 0f;
	if (Global_4354)
	{
		if (func_18(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar53 = fVar36;
			fVar53 = (fVar53 + 0f);
		}
		else
		{
			Global_4354 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_4354.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar54 = Global_4352;
	}
	else
	{
		fVar54 = (((Global_4352 + fVar53) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_4353;
	}
	fVar57 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar55, &iVar56);
		fVar58 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_20())
		{
			iVar55 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar56) * fVar58));
		}
		fVar59 = (SYSTEM::TO_FLOAT(iVar55) / SYSTEM::TO_FLOAT(iVar56));
		fVar57 = (fVar59 / fVar58);
		if (func_20())
		{
			fVar57 = 1f;
		}
		iVar55 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar55) / fVar57));
		iVar56 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar56) / fVar57));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar55, &iVar56);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_4354.f_137A)
		{
			if (MISC::GET_HASH_KEY(&(Global_4354.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar47 = Global_4352;
			}
			else
			{
				if (Global_4354)
				{
					GRAPHICS::DRAW_SPRITE(func_23(29), func_21(29, 1), (Global_4351 + (fParam5 * 0.5f)), (Global_4352 + ((fVar53 - 0f) * 0.5f)), fParam5, (fVar53 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_4354.f_1C09)
				{
					iVar1 = Global_4354.f_1C05;
					iVar2 = Global_4354.f_1C06;
					iVar3 = Global_4354.f_1C07;
					iVar4 = Global_4354.f_1C08;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_344(Global_4351, (Global_4352 + fVar53), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar47 = (((Global_4352 + fVar53) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_4354.f_1)) != 0)
				{
					func_343();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4354.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_4354.f_44)
					{
						if (Global_4354.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_4354.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E[iVar16], Global_4354.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_4354.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_4354.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_4354.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_4354.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_4354.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_4351 + 0.00390625f), ((Global_4352 + fVar53) + 0.00416664f), 0);
				}
				if (Global_4354.f_137D > Global_4354.f_1193)
				{
					if (Global_4354.f_1380 != 0)
					{
						func_343();
						func_341((((Global_4351 + fParam5) - 0.00390625f) - func_342("CM_ITEM_COUNT", Global_4354.f_1380, Global_4354.f_137F)), ((Global_4352 + fVar53) + 0.00416664f), "CM_ITEM_COUNT", Global_4354.f_1380, Global_4354.f_137F);
					}
				}
			}
			iVar6 = Global_4354.f_1381;
			iVar9 = 0;
			fVar60 = fVar47;
			if (Global_4354.f_1C13)
			{
				iVar1 = Global_4354.f_1C0F;
				iVar2 = Global_4354.f_1C10;
				iVar3 = Global_4354.f_1C11;
				iVar4 = Global_4354.f_1C12;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_4354.f_1193 && iVar6 <= Global_4354.f_118C)
			{
				if (iVar6 >= 0)
				{
					if (Global_4354.f_1291[iVar6])
					{
						if (Global_4354.f_1213[iVar6] && iVar6 != Global_4354.f_1381)
						{
							fVar47 = (fVar47 + 0.00277776f);
						}
						fVar52 = 0.034722f;
						if (Global_4354.f_1388[iVar6] != 0f)
						{
							fVar52 = Global_4354.f_1388[iVar6];
						}
						fVar47 = (fVar47 + fVar52);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar52 = 0.034722f;
					fVar47 = (fVar47 + fVar52);
					iVar9++;
					if (Global_4354.f_118C <= 1)
					{
						Global_4354.f_118C++;
					}
					iVar50 = 1;
				}
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_4351 + (fParam5 * 0.5f)), ((fVar60 + ((fVar47 - fVar60) * 0.5f)) - 0.00138888f), fParam5, (fVar47 - fVar60), 0f, 255, 255, 255, 255, 0);
			if (Global_4354.f_137D > Global_4354.f_1193)
			{
				if (Global_4354.f_1C18)
				{
					iVar1 = Global_4354.f_1C14;
					iVar2 = Global_4354.f_1C15;
					iVar3 = Global_4354.f_1C16;
					iVar4 = Global_4354.f_1C17;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_344(Global_4351, (fVar47 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var37.x = (Var37.x * (0.5f / fVar57));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar57));
				if (Global_4354.f_1C25)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_4351 + (fParam5 * 0.5f)), ((fVar47 + 0f) + (0.034722f * 0.5f)), (Var37.x / IntToFloat(iVar55)), (Var37.f_1 / IntToFloat(iVar56)), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar47 = (fVar47 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_4354.f_F81)) != 0 && Global_4354.f_FCB != -1)
			{
				fVar47 = (fVar47 + (0.00277776f * 2f));
				fVar39 = (Global_4351 + 0.0046875f);
				if (Global_4354.f_FCD != 0)
				{
					func_18(Global_4354.f_FCD, 1, 1, &fVar35, &fVar36, bParam7);
					fVar39 = (((Global_4351 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_340(fVar39);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4354.f_F81));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4354.f_FC7)
				{
					if (Global_4354.f_F85[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_F8A[iVar15]);
						iVar15++;
					}
					else if (Global_4354.f_F85[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_F8E[iVar16], Global_4354.f_F92[iVar16]);
						iVar16++;
					}
					else if (Global_4354.f_F85[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar39, (fVar47 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_344(Global_4351, (fVar47 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_4354.f_1C1D)
				{
					iVar1 = Global_4354.f_1C19;
					iVar2 = Global_4354.f_1C1A;
					iVar3 = Global_4354.f_1C1B;
					iVar4 = Global_4354.f_1C1C;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_4351 + (fParam5 * 0.5f)), ((fVar47 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_340(fVar39);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4354.f_F81));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4354.f_FC7)
				{
					if (Global_4354.f_F85[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_F8A[iVar15]);
						iVar15++;
					}
					else if (Global_4354.f_F85[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_F8E[iVar16], Global_4354.f_F92[iVar16]);
						iVar16++;
					}
					else if (Global_4354.f_F85[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_4354.f_F85[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_F96[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar39, (fVar47 + 0.00277776f), 0);
				if (Global_4354.f_FCD != 0)
				{
					func_18(Global_4354.f_FCD, 1, 1, &fVar35, &fVar36, bParam7);
					func_339(Global_4354.f_FCD, 1, &iVar44, &iVar45, &iVar46);
					GRAPHICS::DRAW_SPRITE(func_23(Global_4354.f_FCD), func_21(Global_4354.f_FCD, 1), ((Global_4351 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar47 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
				}
				fVar47 = (fVar47 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4354.f_FCB > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4354.f_FCC) > Global_4354.f_FCB)
					{
						StringCopy(&(Global_4354.f_F81), "", 16);
						Global_4354.f_FCB = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_26CEC9.f_15)) != 0 && Global_26CEC9.f_41 != -1)
			{
				fVar47 = (fVar47 + (0.00277776f * 2f));
				fVar39 = (Global_4351 + 0.0046875f);
				if (Global_26CEC9.f_43 != 0)
				{
					func_18(Global_26CEC9.f_43, 1, 1, &fVar35, &fVar36, bParam7);
					fVar39 = (((Global_4351 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_340(fVar39);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_26CEC9.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_26CEC9.f_3D)
				{
					if (Global_26CEC9.f_19[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_26CEC9.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_26CEC9.f_22[iVar16], Global_26CEC9.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar39, (fVar47 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_344(Global_4351, (fVar47 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_4354.f_1C1D)
				{
					iVar1 = Global_4354.f_1C19;
					iVar2 = Global_4354.f_1C1A;
					iVar3 = Global_4354.f_1C1B;
					iVar4 = Global_4354.f_1C1C;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_4351 + (fParam5 * 0.5f)), ((fVar47 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_340(fVar39);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_26CEC9.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_26CEC9.f_3D)
				{
					if (Global_26CEC9.f_19[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_26CEC9.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_26CEC9.f_22[iVar16], Global_26CEC9.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_26CEC9.f_19[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_26CEC9.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar39, (fVar47 + 0.00277776f), 0);
				if (Global_26CEC9.f_43 != 0)
				{
					func_18(Global_26CEC9.f_43, 1, 1, &fVar35, &fVar36, bParam7);
					func_339(Global_26CEC9.f_43, 1, &iVar44, &iVar45, &iVar46);
					GRAPHICS::DRAW_SPRITE(func_23(Global_26CEC9.f_43), func_21(Global_26CEC9.f_43, 1), ((Global_4351 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar47 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
				}
				fVar47 = (fVar47 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_26CEC9.f_41 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_26CEC9.f_42) > Global_26CEC9.f_41)
					{
						StringCopy(&(Global_26CEC9.f_15), "", 16);
						Global_26CEC9.f_41 = -1;
					}
				}
			}
			func_333(iVar55, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_4354.f_137A)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar61 = Global_4354.f_118C;
			if (Global_4354.f_137B)
			{
				iVar61 = (Global_4354.f_137E - 1);
			}
			fVar62 = 0f;
			fVar63 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar61)
			{
				fVar52 = 0.034722f;
				if (Global_4354.f_1388[iVar6] != 0f)
				{
					fVar52 = Global_4354.f_1388[iVar6];
				}
				if (Global_4354.f_137B)
				{
					iVar6 = Global_4354.f_1AB1[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_4354.f_1381 && iVar9 < Global_4354.f_1193)
				{
					bVar32 = true;
					if (Global_4354.f_1382 == iVar6)
					{
						fVar63 = fVar62;
					}
					if (Global_4354.f_1213[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar54 + fVar62) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_4354.f_140B[iVar6] = fVar34;
				fVar33 = (Global_4351 + 0.0046875f);
				bVar38 = false;
				bVar31 = Global_4354.f_1382 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar64 = 255;
					iVar65 = 255;
					iVar66 = 255;
					iVar67 = 255;
					if (Global_4354.f_1C1F)
					{
						HUD::GET_HUD_COLOUR(Global_4354.f_1C1E, &iVar64, &iVar65, &iVar66, &iVar67);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar64, &iVar65, &iVar66, &iVar67);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_4351 + (fParam5 * 0.5f)), (((fVar54 + fVar63) + (0.00277776f * IntToFloat(iVar12))) + (fVar52 * 0.5f)), fParam5, fVar52, 0f, iVar64, iVar65, iVar66, iVar67, 0);
					Global_4354.f_1409 = fVar34;
				}
				if (iVar50 && iVar7 == iVar61)
				{
					func_331(bVar31, 1, 0, 0, 0, 0);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("DFLT_MNU_OPT");
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar33, fVar34, 0);
					bVar38 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_4354.f_1194)
					{
						if (MISC::IS_BIT_SET(Global_4354.f_110E[iVar6], iVar8) || Global_4354.f_10ED[iVar8] == 5)
						{
							if (Global_4354.f_137B)
							{
								iVar19 = Global_4354.f_1ABC[((iVar9 * Global_4354.f_1194) + iVar8)];
								iVar20 = Global_4354.f_1AE5[((iVar9 * Global_4354.f_1194) + iVar8)];
								iVar21 = Global_4354.f_1B0E[((iVar9 * Global_4354.f_1194) + iVar8)];
								iVar22 = Global_4354.f_1B37[((iVar9 * Global_4354.f_1194) + iVar8)];
								iVar23 = Global_4354.f_1B60[((iVar9 * Global_4354.f_1194) + iVar8)];
							}
							else
							{
								Global_4354.f_1ABC[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar19;
								Global_4354.f_1AE5[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar20;
								Global_4354.f_1B0E[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar21;
								Global_4354.f_1B37[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar22;
								Global_4354.f_1B60[((iVar9 * Global_4354.f_1194) + iVar8)] = iVar23;
							}
							iVar68 = 0;
							bVar51 = false;
							if (Global_4354.f_148C[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_4354.f_1489[0])
								{
									bVar51 = true;
									iVar68 = 0;
								}
							}
							if (Global_4354.f_148C[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_4354.f_1489[1])
								{
									bVar51 = true;
									iVar68 = 1;
								}
							}
							if (Global_4354.f_10F3[iVar8] != -1f)
							{
								fVar33 = ((Global_4351 + 0.0046875f) + Global_4354.f_10F3[iVar8]);
							}
							if ((iVar8 < 4 && Global_4354.f_10F3[iVar8 + 1] != -1f) && fVar33 < Global_4354.f_10F3[iVar8 + 1])
							{
								fVar43 = (Global_4354.f_10F3[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar43 = (((Global_4351 + Global_4353) - 0.0046875f) - fVar33);
							}
							if ((Global_4354.f_1100[iVar8] && Global_4354.f_1406) && bVar31)
							{
								bVar49 = true;
							}
							else
							{
								bVar49 = false;
							}
							switch (Global_4354.f_10ED[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_4354.f_137B)
										{
											fVar40 = 0f;
											fVar41 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
											{
												bVar48 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5 || Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
													{
														bVar48 = true;
													}
													iVar14++;
												}
												func_331(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, iVar68, bVar48);
												HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_4354.f_49[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 6)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_252911[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 7)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 2)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_D0C[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 3)
												{
													if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E07[(iVar21 + iVar27)], Global_4354.f_E85[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
											{
												fVar40 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_18(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + fVar35);
														if (iVar14 > 0)
														{
															fVar41 = (fVar41 - (0.00078125f * 4f));
														}
														if (Global_4354.f_F03[(iVar22 + iVar14)] == 2)
														{
															fVar41 = (fVar41 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar39 = 0f;
											if (Global_4354.f_1108[iVar8] == 2)
											{
												fVar39 = (fVar39 + ((fVar43 - (fVar40 + fVar41)) + (0.00078125f * 1f)));
											}
											else if (Global_4354.f_1108[iVar8] == 0)
											{
												fVar39 = (fVar39 + (((fVar43 - fVar33) * 0.5f) - ((fVar40 + fVar41) * 0.5f)));
											}
											Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar39;
											Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar40;
											Global_4354.f_1BDB[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar41;
										}
										else
										{
											fVar39 = Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)];
											fVar40 = Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)];
											fVar41 = Global_4354.f_1BDB[((iVar9 * Global_4354.f_1194) + iVar8)];
										}
										if (bVar49)
										{
											if (func_18(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_339(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_23(26), func_21(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_339(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_23(27), func_21(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
										{
											bVar48 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5 || Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
												{
													bVar48 = true;
												}
												iVar14++;
											}
											func_331(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, bVar48);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_330(bVar31);
											}
											HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4354.f_49[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4354.f_49[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_252911[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_252911[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_D0C[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E07[(iVar21 + iVar27)], Global_4354.f_E85[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_4354.f_F03[(iVar22 + iVar28)] == 2)
												{
													if (func_18(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar39 = (fVar39 + (fVar35 * 0.5f));
														if (func_18(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_339(Global_4354.f_F03[(iVar22 + iVar28)], bVar31, &iVar44, &iVar45, &iVar46);
															if (Global_4354.f_1108[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_23(Global_4354.f_F03[(iVar22 + iVar28)]), func_21(Global_4354.f_F03[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar39) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_23(Global_4354.f_F03[(iVar22 + iVar28)]), func_21(Global_4354.f_F03[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar39) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															fVar39 = (fVar39 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_4354.f_49[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_4354.f_1108[iVar8] == 2)
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar33 + fVar39) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar33 + fVar39), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar39 = (fVar39 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_4354.f_F03[(iVar22 + iVar14)] != 2)
												{
													if (func_18(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar39 = (fVar39 + (fVar35 * 0.5f));
														if (func_18(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_339(Global_4354.f_F03[(iVar22 + iVar14)], bVar31, &iVar44, &iVar45, &iVar46);
															if (Global_4354.f_F03[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_23(Global_4354.f_F03[(iVar22 + iVar14)]), func_21(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), (Global_4351 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else if (Global_4354.f_1108[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_23(Global_4354.f_F03[(iVar22 + iVar14)]), func_21(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar39) + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_23(Global_4354.f_F03[(iVar22 + iVar14)]), func_21(Global_4354.f_F03[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar39) + fVar40) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
															}
														}
														fVar39 = (fVar39 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar38 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_4354.f_628[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_4354.f_137B)
										{
											func_331(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_330(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4354.f_D0C[iVar20]);
											fVar40 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar39 = 0f;
											if (Global_4354.f_1108[iVar8] == 2)
											{
												fVar39 = (fVar39 + ((fVar43 - fVar40) + (0.00078125f * 1f)));
											}
											else if (Global_4354.f_1108[iVar8] == 0)
											{
												fVar39 = (fVar39 + (((fVar43 - fVar33) * 0.5f) - (fVar40 * 0.5f)));
											}
											Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar39;
											Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar40;
										}
										else
										{
											fVar39 = Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)];
											fVar40 = Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)];
										}
										if (bVar49)
										{
											if (func_18(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_339(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_23(26), func_21(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_339(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_23(27), func_21(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										func_331(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
										func_329((fVar33 + fVar39), fVar34, "NUMBER", Global_4354.f_D0C[iVar20], 0);
									}
									bVar38 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_4354.f_137B)
										{
											func_331(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
											if (Global_4354.f_1C23 && Global_4354.f_1C24 == iVar6)
											{
												func_330(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4354.f_E07[iVar21], Global_4354.f_E85[iVar21]);
											fVar40 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar39 = 0f;
											if (Global_4354.f_1108[iVar8] == 2)
											{
												fVar39 = (fVar39 + ((fVar43 - fVar40) + (0.00078125f * 1f)));
											}
											else if (Global_4354.f_1108[iVar8] == 0)
											{
												fVar39 = (fVar39 + (((fVar43 - fVar33) * 0.5f) - (fVar40 * 0.5f)));
											}
											Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar39;
											Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar40;
										}
										else
										{
											fVar39 = Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)];
											fVar40 = Global_4354.f_1BB2[((iVar9 * Global_4354.f_1194) + iVar8)];
										}
										if (bVar49)
										{
											if (func_18(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 - (fVar35 * 2f));
												}
												fVar42 = (fVar35 * 0.5f);
												if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_339(26, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_23(26), func_21(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar39 = (fVar39 + fVar35);
												fVar42 = (fVar35 * 0.5f);
												if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_339(27, 1, &iVar44, &iVar45, &iVar46);
													GRAPHICS::DRAW_SPRITE(func_23(27), func_21(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
												}
											}
										}
										func_331(bVar31, Global_4354.f_432[iVar24], Global_4354.f_52D[iVar24], bVar51, 0, 0);
										func_328((fVar33 + fVar39), fVar34, "NUMBER", Global_4354.f_E07[iVar21], Global_4354.f_E85[iVar21]);
									}
									bVar38 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_18(Global_4354.f_F03[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_4354.f_137B)
											{
												fVar41 = fVar35;
												fVar39 = 0f;
												if (Global_4354.f_1108[iVar8] == 2)
												{
													fVar39 = (fVar39 + ((fVar43 - fVar41) + (0.00078125f * 1f)));
												}
												else if (Global_4354.f_1108[iVar8] == 0)
												{
													fVar39 = (fVar39 + (((fVar43 - fVar33) * 0.5f) - (fVar41 * 0.5f)));
												}
												Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar39;
												Global_4354.f_1BDB[((iVar9 * Global_4354.f_1194) + iVar8)] = fVar41;
											}
											else
											{
												fVar39 = Global_4354.f_1B89[((iVar9 * Global_4354.f_1194) + iVar8)];
												fVar41 = Global_4354.f_1BDB[((iVar9 * Global_4354.f_1194) + iVar8)];
											}
											if (bVar49)
											{
												if (func_18(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_4354.f_1108[iVar8] == 2)
													{
														fVar39 = (fVar39 - (fVar35 * 2f));
													}
													fVar42 = (fVar35 * 0.5f);
													if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_339(26, 1, &iVar44, &iVar45, &iVar46);
														GRAPHICS::DRAW_SPRITE(func_23(26), func_21(26, 1), ((fVar33 + fVar39) + fVar42), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
													}
												}
												if (func_18(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar39 = (fVar39 + fVar35);
													fVar42 = (fVar35 * 0.5f);
													if (func_18(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_339(27, 1, &iVar44, &iVar45, &iVar46);
														GRAPHICS::DRAW_SPRITE(func_23(27), func_21(27, 1), (((fVar33 + fVar39) + fVar42) + (fVar40 + fVar41)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), fVar35, fVar36, 0f, iVar44, iVar45, iVar46, 255, 0);
													}
												}
											}
											if (func_18(Global_4354.f_F03[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_339(Global_4354.f_F03[iVar22], bVar31, &iVar44, &iVar45, &iVar46);
												GRAPHICS::DRAW_SPRITE(func_23(Global_4354.f_F03[iVar22]), func_21(Global_4354.f_F03[iVar22], bVar31), ((fVar33 + fVar39) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar52 * 0.5f)), (fVar35 * func_327(Global_4354.f_F03[iVar22])), (fVar36 * func_327(Global_4354.f_F03[iVar22])), 0f, iVar44, iVar45, iVar46, 255, 0);
											}
										}
									}
									bVar38 = true;
									iVar22++;
									break;
								
								case 5:
									bVar38 = true;
									break;
							}
							if (Global_4354.f_10ED[iVar8] == 5)
							{
								if (Global_4354.f_10F9[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_4354.f_10F9[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_4354.f_10F9[iVar8]);
								if (Global_4354.f_1100[iVar8])
								{
									if (func_18(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_4354.f_10F9[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar38)
				{
					if (bVar32)
					{
						Global_4354.f_1AB1[iVar9] = iVar6;
						Global_4354.f_1383 = iVar6;
						iVar9++;
						if (Global_4354.f_1213[iVar6])
						{
							iVar13++;
						}
						if (Global_4354.f_1388[iVar6] != 0f)
						{
							fVar62 = (fVar62 + Global_4354.f_1388[iVar6]);
						}
						else
						{
							fVar62 = (fVar62 + 0.034722f);
						}
					}
					if (!Global_4354.f_137A)
					{
						Global_4354.f_1291[iVar6] = 1;
						if (Global_4354.f_1195[iVar6])
						{
							if (bVar31)
							{
								Global_4354.f_1380 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_4354.f_1380 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_4354.f_137A)
			{
				Global_4354.f_137C = ((fVar54 + fVar62) + (0.00277776f * IntToFloat(iVar12)));
				Global_4354.f_137F = iVar11;
				Global_4354.f_137D = iVar10;
				Global_4354.f_137A = 1;
			}
		}
		iVar5++;
	}
	if (!Global_4354.f_137B)
	{
		Global_4354.f_137E = iVar9;
		Global_4354.f_137B = 1;
	}
	Global_4354.f_1408 = fVar47;
	Global_4354.f_140A = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_4354.f_1408);
	if (!Global_4354.f_1C04)
	{
		func_36();
	}
	Global_4354.f_1C04 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_184(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

float func_327(int iParam0)//Position - 0x1B97D
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_328(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x1B9E6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_329(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1BA05
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_330(bool bParam0)//Position - 0x1BA23
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_4354.f_1C20[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_4354.f_1C20[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_331(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x1BA69
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_332(Global_4354.f_148C[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_332(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1BC00
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_333(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1BE8A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_321(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_345(bParam4, bParam8))
	{
		return;
	}
	if (func_337())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_334(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_4354.f_FCE != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_4354.f_FCE)
			{
				if (Global_4354.f_10CF[iVar1] != 332)
				{
					StringCopy(&(Global_4354.f_FD0[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_4354.f_10CF[iVar1], true), 64);
				}
				else if (Global_4354.f_10DC[iVar1] != 31)
				{
					StringCopy(&(Global_4354.f_FD0[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_4354.f_10DC[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_4354.f_FCF = 0;
		}
		if (!Global_4354.f_FCF)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_4354.f_1106 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_4354.f_FCE)
			{
				if (MISC::GET_HASH_KEY(&(Global_4354.f_1091[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_13(&(Global_4354.f_FD0[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_4354.f_1091[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_13(&(Global_4354.f_FD0[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_4354.f_10C2[iVar1] == -1)
					{
						func_12(&(Global_4354.f_1091[iVar1 /*4*/]));
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4354.f_1091[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_4354.f_10CF[iVar1] != 332 && MISC::IS_BIT_SET(Global_4354.f_10E9, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4354.f_10CF[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(332);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_26CEC9.f_10)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4354.f_FCE);
				func_13(&Global_26CEC9);
				if (Global_26CEC9.f_14 == -1)
				{
					func_12(&(Global_26CEC9.f_10));
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_26CEC9.f_10));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_4354.f_1107)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_4354.f_FCF = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_4354.f_FCE)
		{
			if (Global_4354.f_10C2[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4354.f_1091[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_26CEC9.f_14 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_4354.f_1336[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_26CEC9.f_10));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_4354.f_1C27)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_4354.f_1C27 = 1;
			}
		}
		else if (Global_4354.f_1C27)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_4354.f_1C27 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_4354.f_10EC)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_4354.f_1336[iVar0 /*10*/], Global_4354.f_10EA, Global_4354.f_10EB, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_4354.f_1336[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_334(int iParam0, int iParam1)//Position - 0x1C368
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_335(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_182604[iParam0 /*324*/].f_B4 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_335(int iParam0, bool bParam1)//Position - 0x1C3B3
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_336();
	}
	if (Global_141425[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DB[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_336()//Position - 0x1C3F4
{
	return Global_1407E1;
}

int func_337()//Position - 0x1C400
{
	struct<3> Var0;
	
	if (Global_3839.f_1 > 3)
	{
		return 1;
	}
	if (func_338())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_3802 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_338()//Position - 0x1C46E
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_339(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1C488
{
	var uVar0;
	
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_340(float fParam0)//Position - 0x1C53C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_4351 + Global_4353) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_341(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1C59B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_342(char* sParam0, int iParam1, int iParam2)//Position - 0x1C5BE
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_343();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_343()//Position - 0x1C600
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_4354.f_1C0E)
	{
		iVar0 = Global_4354.f_1C0A;
		iVar1 = Global_4354.f_1C0B;
		iVar2 = Global_4354.f_1C0C;
		iVar3 = Global_4354.f_1C0D;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_4351 + 0.0046875f), ((Global_4351 + Global_4353) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_344(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1C68A
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_345(bool bParam0, bool bParam1)//Position - 0x1C6B9
{
	if (Global_24F57C.f_51E.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_347(8, -1) && func_346() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_10B99) || Global_4354.f_1C26) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_15F9E.f_526)
	{
		return 0;
	}
	return 1;
}

int func_346()//Position - 0x1C756
{
	return Global_1413F8;
}

bool func_347(int iParam0, int iParam1)//Position - 0x1C762
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1441E9.f_CB[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1441E9.f_3B5, iParam0);
}

int func_348(int iParam0, bool bParam1)//Position - 0x1C79D
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_349(var uParam0, int iParam1, int iParam2)//Position - 0x1C824
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_373(0) == 1 && Global_26CF15 == iParam1)
	{
		if (!func_398(uParam0))
		{
			func_350(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_412(uParam0);
			return 1;
		}
	}
	else if (func_398(uParam0))
	{
		func_399(uParam0);
	}
	return 0;
}

void func_350(var uParam0)//Position - 0x1C89C
{
	if (!func_398(uParam0))
	{
		func_412(uParam0);
	}
}

int func_351(var uParam0)//Position - 0x1C8B4
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2, 218);
	}
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 190)) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 190))
	{
		if (!func_398(uParam0))
		{
			func_350(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_412(uParam0);
			return 1;
		}
	}
	else if (func_398(uParam0))
	{
		func_399(uParam0);
	}
	return 0;
}

void func_352(var uParam0)//Position - 0x1C939
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_324(0);
	HUD::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_368(uVar0, uVar1, uVar2, uVar3, 1);
	func_367(1, 2, 0, 0, 0);
	func_366(1, 2, 1, 1, 1);
	func_365(0, 1, 0, 0, 0);
	func_364("DARTS_TITLE");
	func_362(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_359(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_356(0, func_348(uParam0->f_296 + 1, 1), 0);
	func_359(1, "DARTS_SETS", 0, 1, 0, 0);
	func_356(1, func_348(uParam0->f_298 + 1, 0), 0);
	func_355(2, 141, 141, 1);
	func_359(2, "DARTS_START", 0, 1, 0, 0);
	func_354(0);
	func_376(uParam0->f_294, 1, 1);
	if (uParam0->f_294 != 2)
	{
		func_375(func_99(uParam0->f_294 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_353(201, "ITEM_SELECT", -1);
	func_353(202, "IB_QUIT", -1);
}

void func_353(int iParam0, char* sParam1, int iParam2)//Position - 0x1CA2D
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_4354.f_FCE >= 12)
	{
		StringCopy(&Global_26CEC9, sVar0, 64);
		StringCopy(&(Global_26CEC9.f_10), sParam1, 16);
		Global_26CEC9.f_14 = iParam2;
		return;
		return;
	}
	MISC::SET_BIT(&(Global_4354.f_10E9), Global_4354.f_FCE);
	StringCopy(&(Global_4354.f_FD0[Global_4354.f_FCE /*16*/]), sVar0, 64);
	StringCopy(&(Global_4354.f_1091[Global_4354.f_FCE /*4*/]), sParam1, 16);
	Global_4354.f_10C2[Global_4354.f_FCE] = iParam2;
	Global_4354.f_10CF[Global_4354.f_FCE] = iParam0;
	Global_4354.f_10DC[Global_4354.f_FCE] = 31;
	Global_4354.f_FCE++;
}

void func_354(int iParam0)//Position - 0x1CADC
{
	Global_4354.f_1381 = iParam0;
}

void func_355(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1CAEC
{
	Global_4354.f_1C23 = iParam3;
	Global_4354.f_1C20[0] = iParam1;
	Global_4354.f_1C20[1] = iParam2;
	Global_4354.f_1C24 = iParam0;
}

void func_356(int iParam0, int iParam1, bool bParam2)//Position - 0x1CB1A
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_4354.f_118C > iParam0)
	{
		return;
	}
	if (Global_4354.f_118C >= 125)
	{
		return;
	}
	if (Global_4354.f_1190 >= 250)
	{
		return;
	}
	if (Global_4354.f_1386 < Global_4354.f_1384)
	{
		return;
	}
	if (Global_4354.f_118C != iParam0)
	{
		Global_4354.f_118C = iParam0;
		Global_4354.f_118D = 0;
	}
	iVar0 = Global_4354.f_10ED[Global_4354.f_118D];
	if (iVar0 != 2)
	{
		while (Global_4354.f_118D < 4 && iVar0 != 2)
		{
			Global_4354.f_118D++;
			iVar0 = Global_4354.f_10ED[Global_4354.f_118D];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_4354.f_D0C[Global_4354.f_1190] = iParam1;
	Global_4354.f_1190++;
	fVar1 = func_358("NUMBER", iParam1);
	if (Global_4354.f_1100[Global_4354.f_118D])
	{
		func_18(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_4354.f_10F9[Global_4354.f_118D])
	{
		Global_4354.f_10F9[Global_4354.f_118D] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_357("NUMBER", iParam1);
		if (fVar4 > Global_4354.f_1388[iParam0])
		{
			Global_4354.f_1388[iParam0] = fVar4;
		}
	}
	MISC::SET_BIT(&(Global_4354.f_110E[iParam0]), Global_4354.f_118D);
	Global_4354.f_118D++;
	Global_4354.f_1387 = 2;
}

float func_357(char* sParam0, int iParam1)//Position - 0x1CC98
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_358(char* sParam0, int iParam1)//Position - 0x1CCBA
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0f;
	}
	func_331(1, 1, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_359(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1CCEB
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_4354.f_118C > iParam0)
	{
		return;
	}
	if (Global_4354.f_118C >= 125)
	{
		return;
	}
	if (Global_4354.f_118E >= 250)
	{
		return;
	}
	if (Global_4354.f_1386 < Global_4354.f_1384)
	{
		return;
	}
	if (Global_4354.f_118C != iParam0)
	{
		Global_4354.f_118C = iParam0;
		Global_4354.f_118D = 0;
	}
	iVar0 = Global_4354.f_10ED[Global_4354.f_118D];
	if (iVar0 != 1)
	{
		while (Global_4354.f_118D < 4 && iVar0 != 1)
		{
			Global_4354.f_118D++;
			iVar0 = Global_4354.f_10ED[Global_4354.f_118D];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_4354.f_49[Global_4354.f_118E /*4*/]), sParam1, 16);
	Global_4354.f_432[Global_4354.f_118E] = iParam3;
	Global_4354.f_52D[Global_4354.f_118E] = iParam4;
	Global_4354.f_118E++;
	if (iParam2 == 0)
	{
		fVar1 = func_361(sParam1);
		if (Global_4354.f_1100[Global_4354.f_118D])
		{
			func_18(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_4354.f_10F9[Global_4354.f_118D])
		{
			Global_4354.f_10F9[Global_4354.f_118D] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_360(sParam1);
			if (fVar4 > Global_4354.f_1388[iParam0])
			{
				Global_4354.f_1388[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_4354.f_110E[iParam0]), Global_4354.f_118D);
	Global_4354.f_118D++;
	Global_4354.f_1387 = 1;
	Global_4354.f_1385 = (Global_4354.f_118E - 1);
	Global_4354.f_1386 = 0;
	Global_4354.f_1384 = iParam2;
}

float func_360(char* sParam0)//Position - 0x1CEAB
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_361(char* sParam0)//Position - 0x1CEC7
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_331(0, 1, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_362(int iParam0, char* sParam1, char* sParam2)//Position - 0x1CF03
{
	Global_4354 = iParam0;
	func_363(29, sParam1, sParam2);
}

void func_363(int iParam0, char* sParam1, char* sParam2)//Position - 0x1CF1A
{
	StringCopy(&(Global_4354.f_148F[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_4354.f_17A0[iParam0 /*16*/]), sParam2, 64);
}

void func_364(char* sParam0)//Position - 0x1CF3E
{
	int iVar0;
	
	StringCopy(&(Global_4354.f_1), sParam0, 16);
	Global_4354.f_44 = 0;
	Global_4354.f_45 = 0;
	Global_4354.f_46 = 0;
	Global_4354.f_47 = 0;
	Global_4354.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4354.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_365(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1CF89
{
	Global_4354.f_1100[0] = iParam0;
	Global_4354.f_1100[1] = iParam1;
	Global_4354.f_1100[2] = iParam2;
	Global_4354.f_1100[3] = iParam3;
	Global_4354.f_1100[4] = iParam4;
}

void func_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1CFC8
{
	Global_4354.f_1108[0] = iParam0;
	Global_4354.f_1108[1] = iParam1;
	Global_4354.f_1108[2] = iParam2;
	Global_4354.f_1108[3] = iParam3;
	Global_4354.f_1108[4] = iParam4;
}

void func_367(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1D007
{
	Global_4354.f_10ED[0] = iParam0;
	Global_4354.f_10ED[1] = iParam1;
	Global_4354.f_10ED[2] = iParam2;
	Global_4354.f_10ED[3] = iParam3;
	Global_4354.f_10ED[4] = iParam4;
	Global_4354.f_1194 = 0;
	if (iParam0 != 0)
	{
		Global_4354.f_1194++;
	}
	if (iParam1 != 0)
	{
		Global_4354.f_1194++;
	}
	if (iParam2 != 0)
	{
		Global_4354.f_1194++;
	}
	if (iParam3 != 0)
	{
		Global_4354.f_1194++;
	}
	if (iParam4 != 0)
	{
		Global_4354.f_1194++;
	}
}

void func_368(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x1D0B1
{
	Global_4354.f_1C09 = iParam4;
	Global_4354.f_1C05 = uParam0;
	Global_4354.f_1C06 = uParam1;
	Global_4354.f_1C07 = uParam2;
	Global_4354.f_1C08 = uParam3;
}

int func_369(var uParam0, int iParam1, int iParam2)//Position - 0x1D0E1
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_373(0) == -1 && Global_26CF15 == iParam1)
	{
		if (!func_398(uParam0))
		{
			func_350(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_412(uParam0);
			return 1;
		}
	}
	else if (func_398(uParam0))
	{
		func_399(uParam0);
	}
	return 0;
}

int func_370(var uParam0)//Position - 0x1D159
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2, 218);
	}
	if (fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 189))
	{
		if (!func_398(uParam0))
		{
			func_350(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_412(uParam0);
			return 1;
		}
	}
	else if (func_398(uParam0))
	{
		func_399(uParam0);
	}
	return 0;
}

int func_371(var uParam0)//Position - 0x1D1D1
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	}
	if (fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 187))
	{
		if (!func_398(uParam0))
		{
			func_350(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_412(uParam0);
			return 1;
		}
	}
	else if (func_398(uParam0))
	{
		func_399(uParam0);
	}
	return 0;
}

int func_372(var uParam0)//Position - 0x1D249
{
	float fVar0;
	
	fVar0 = 0f;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	}
	if (fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 188))
	{
		if (!func_398(uParam0))
		{
			func_350(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_412(uParam0);
			return 1;
		}
	}
	else if (func_398(uParam0))
	{
		func_399(uParam0);
	}
	return 0;
}

int func_373(float fParam0)//Position - 0x1D2C1
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_4353);
	fVar1 = (Global_4354.f_137C - (IntToFloat(Global_4354.f_137E) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_26CF0F >= fVar0 && Global_26CF0F < fVar5)
		{
			return -999;
		}
	}
	if (Global_26CF0F >= fVar0 && Global_26CF0F < fVar4)
	{
		return -1;
	}
	if (Global_26CF0F >= fVar4 && Global_26CF0F <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_374()//Position - 0x1D38E
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		return PAD::IS_DISABLED_CONTROL_PRESSED(2, 237);
	}
	return 0;
}

void func_375(char* sParam0, int iParam1, int iParam2)//Position - 0x1D3A9
{
	int iVar0;
	
	StringCopy(&(Global_4354.f_F81), sParam0, 16);
	Global_4354.f_FC7 = 0;
	Global_4354.f_FC8 = 0;
	Global_4354.f_FC9 = 0;
	Global_4354.f_FCA = 0;
	Global_4354.f_FCB = iParam1;
	Global_4354.f_FCC = MISC::GET_GAME_TIMER();
	Global_4354.f_FCD = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4354.f_F85[iVar0] = 0;
		iVar0++;
	}
}

void func_376(int iParam0, bool bParam1, int iParam2)//Position - 0x1D40E
{
	int iVar0;
	int iVar1;
	
	Global_4354.f_1382 = iParam0;
	Global_4354.f_1406 = iParam2;
	if (Global_4354.f_1382 < Global_4354.f_1381)
	{
		Global_4354.f_1381 = Global_4354.f_1382;
	}
	else if ((Global_4354.f_137B && Global_4354.f_1382 > Global_4354.f_1383) || (!Global_4354.f_137B && Global_4354.f_1382 >= (Global_4354.f_1381 + Global_4354.f_1193)))
	{
		iVar0 = Global_4354.f_1381;
		while (iVar0 <= Global_4354.f_1382)
		{
			if (iVar0 >= 0 && iVar0 < 124)
			{
				if (Global_4354.f_110E[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_4354.f_1193 && Global_4354.f_1381 < 125)
		{
			Global_4354.f_1381++;
			iVar1 = 0;
			iVar0 = Global_4354.f_1381;
			while (iVar0 <= Global_4354.f_1382)
			{
				if (iVar0 >= 0 && iVar0 < 124)
				{
					if (Global_4354.f_110E[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_4354.f_137A = 0;
	Global_4354.f_137B = 0;
	if (bParam1)
	{
		StringCopy(&(Global_4354.f_F81), "", 16);
		StringCopy(&(Global_26CEC9.f_15), "", 16);
	}
}

int func_377()//Position - 0x1D560
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_26CF15 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_378(int iParam0, int iParam1)//Position - 0x1D587
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	if (Global_26CF15 == -6)
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_26CF15 = -1;
			return 0;
		}
	}
	if (((Global_26CF15 > -1 || Global_26CF15 == -3) || Global_26CF15 == -2) || HUD::_0x3D9ACB1EB139E702())
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_26CF15 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(4);
			Global_26CF15 = -6;
			return 1;
		}
		else
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_MOUSE_CURSOR_SPRITE(1);
	return 0;
}

void func_379(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1D662
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		Global_26CF15 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_4351;
	fVar2 = (fVar0 + Global_4353);
	fVar3 = Global_4354.f_137C;
	fVar1 = (Global_4354.f_137C - (IntToFloat(Global_4354.f_137E) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_4354.f_137E < 1)
	{
		fVar1 = (Global_4354.f_137C - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_381();
	if (Global_26CF15 == -6)
	{
		return;
	}
	Global_26CF15 = -1;
	fVar7 = Global_26CF0F;
	fVar8 = Global_26CF10;
	if (Global_4354.f_137F > Global_4354.f_137E)
	{
		if (((Global_26CF0F >= fVar0 && Global_26CF0F <= fVar2) && Global_26CF10 >= fVar3) && Global_26CF10 < (fVar3 + fVar6))
		{
			Global_26CF15 = -2;
			if (bParam3)
			{
				func_380(0);
			}
			return;
		}
		if (((Global_26CF0F >= fVar0 && Global_26CF0F <= fVar2) && Global_26CF10 >= (fVar3 + fVar6)) && Global_26CF10 < (fVar3 + 0.034722f))
		{
			Global_26CF15 = -3;
			if (bParam3)
			{
				func_380(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_4354.f_137F == -1)
		{
			Global_26CF15 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_4354.f_137E);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_344(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_4353, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_26CF15 = Global_4354.f_1AB1[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_26CF15 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_26CF15 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_26CF15 = -4;
		return;
	}
	Global_26CF15 = -1;
}

void func_380(bool bParam0)//Position - 0x1D90E
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_4351;
	fVar1 = Global_4354.f_137C;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_26CF15 == -2)
	{
		func_344(fVar0, fVar1, Global_4353, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_26CF15 == -3)
	{
		func_344(fVar0, (fVar1 + fVar2), Global_4353, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_381()//Position - 0x1D997
{
	Global_26CF11 = Global_26CF0F;
	Global_26CF12 = Global_26CF10;
	Global_26CF0F = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_26CF10 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_26CF13 = (Global_26CF0F - Global_26CF11);
	Global_26CF14 = (Global_26CF10 - Global_26CF12);
}

float func_382(float fParam0)//Position - 0x1D9DF
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_383(var uParam0)//Position - 0x1DA15
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_294 = 0;
	uParam0->f_295 = 3;
	uParam0->f_296 = 0;
	uParam0->f_297 = 3;
	uParam0->f_298 = 0;
	uParam0->f_299 = 7;
	func_324(0);
	HUD::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_368(uVar0, uVar1, uVar2, uVar3, 1);
	func_367(1, 2, 0, 0, 0);
	func_366(1, 2, 1, 1, 1);
	func_365(0, 1, 0, 0, 0);
	func_364("DARTS_TITLE");
	func_362(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_359(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_356(0, 1, 0);
	func_359(1, "DARTS_SETS", 0, 1, 0, 0);
	func_356(1, 1, 0);
	func_359(2, "DARTS_START", 0, 1, 0, 0);
	func_355(2, 141, 141, 1);
	func_354(0);
	func_376(0, 1, 1);
	func_375("DARTS_LEGD", 0, 0);
	func_384();
	func_353(201, "ITEM_SELECT", -1);
	func_353(202, "IB_QUIT", -1);
}

void func_384()//Position - 0x1DAFF
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

int func_385(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1DB1D
{
	int iVar0;
	int iVar1;
	
	if ((func_408() && MISC::GET_GAME_TIMER() >= iLocal_187 + 1000) && *iParam0 != 8)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_30)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_187 = MISC::GET_GAME_TIMER();
						func_393(uParam1->f_1, uParam1->f_4, func_395(2), func_394(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_265(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_252(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_30++;
							func_412(uParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_401(uParam5) > 1f && !func_282("DARTS_DOUBLE_T"))
					{
						func_396("DARTS_DOUBLE_T", -1);
					}
					if (func_401(uParam5) > 5f)
					{
						func_412(uParam5);
						HUD::CLEAR_HELP(1);
						func_387(uParam1->f_1, uParam1->f_4, func_395(3), func_394(0), 1000);
						iLocal_30 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_30)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(uLocal_82))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_265(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_252(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_30++;
								func_412(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_401(uParam5) > 1f && !func_282("DARTS_TRIPLE_T"))
					{
						func_396("DARTS_TRIPLE_T", -1);
					}
					if (func_401(uParam5) > 5f)
					{
						func_412(uParam5);
						HUD::CLEAR_HELP(1);
						func_393(uParam1->f_1, uParam1->f_4, func_395(4), func_394(0), 1000, 0);
						iLocal_30 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_30)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(uLocal_81))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_265(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_252(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_30++;
								func_412(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_401(uParam5) > 1f && !func_282("DARTS_BULL_T"))
					{
						func_396("DARTS_BULL_T", -1);
					}
					if (func_401(uParam5) > 5f)
					{
						func_412(uParam5);
						HUD::CLEAR_HELP(1);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_387(uParam1->f_1, uParam1->f_4, func_395(5), func_394(1), 1500);
						iLocal_30 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_82) && !func_282("DARTS_DBL_WIN"))
			{
				func_396("DARTS_DBL_WIN", -1);
			}
			if (func_401(uParam5) > 6f)
			{
				func_412(uParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_74, uLocal_82, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_74))
			{
				iLocal_30 = 0;
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_386(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_30 = 0;
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_386(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				CAM::SET_CAM_ACTIVE(uLocal_74, 1);
				CAM::DO_SCREEN_FADE_IN(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_386(var uParam0)//Position - 0x1DF39
{
	struct<3> Var0;
	
	Var0 = { -1668.044f, -1056.45f, 13.1063f };
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, 1, 0, 0, 1);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		OBJECT::DELETE_OBJECT(uParam0);
	}
}

void func_387(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4)//Position - 0x1DF79
{
	CAM::STOP_CAM_POINTING(uLocal_82);
	CAM::SET_CAM_FOV(uLocal_82, 35f);
	CAM::SET_CAM_COORD(uLocal_82, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam1, Param2));
	CAM::SET_CAM_ROT(uLocal_82, Vector(fParam1, 0f, 0f) - Param3, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_82, uLocal_81, iParam4, 1, 1);
}

int func_388(var uParam0, bool bParam1, bool bParam2)//Position - 0x1DFC2
{
	if (!func_398(&(uParam0->f_2)))
	{
		func_412(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
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
	if (func_7(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_399(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_389(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)//Position - 0x1E054
{
	char* sVar0;
	
	sVar0 = func_390(iParam5);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam6)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	func_412(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_390(int iParam0)//Position - 0x1E0E3
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_391()//Position - 0x1E15E
{
	CAM::SET_CAM_ACTIVE(uLocal_74, 1);
	CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
	if (CAM::IS_CAM_ACTIVE(uLocal_81))
	{
		CAM::SET_CAM_ACTIVE(uLocal_81, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_76))
	{
		CAM::SET_CAM_ACTIVE(uLocal_76, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_77))
	{
		CAM::SET_CAM_ACTIVE(uLocal_77, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_78))
	{
		CAM::SET_CAM_ACTIVE(uLocal_78, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_79))
	{
		CAM::SET_CAM_ACTIVE(uLocal_79, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_80))
	{
		CAM::SET_CAM_ACTIVE(uLocal_80, 0);
	}
}

char* func_392(int iParam0)//Position - 0x1E1D9
{
	if (iLocal_198 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_198 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_393(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4, bool bParam5)//Position - 0x1E26C
{
	CAM::STOP_CAM_POINTING(uLocal_81);
	CAM::SET_CAM_FOV(uLocal_81, 35f);
	CAM::SET_CAM_COORD(uLocal_81, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam1, Param2));
	CAM::SET_CAM_ROT(uLocal_81, Vector(fParam1, 0f, 0f) - Param3, 2);
	if (bParam5)
	{
		CAM::SET_CAM_ACTIVE(uLocal_81, 1);
	}
	else
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_81, uLocal_82, iParam4, 1, 1);
	}
}

Vector3 func_394(bool bParam0)//Position - 0x1E2C4
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_395(int iParam0)//Position - 0x1E2ED
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_396(char* sParam0, int iParam1)//Position - 0x1E377
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_397(var uParam0)//Position - 0x1E38E
{
	if (!ENTITY::IS_ENTITY_DEAD(func_475()))
	{
		func_4(func_475(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(uParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_398(var uParam0)//Position - 0x1E3C0
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_399(var uParam0)//Position - 0x1E3D0
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_400(var uParam0, char* sParam1, int iParam2)//Position - 0x1E3E6
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_6(iParam2), 1);
}

float func_401(var uParam0)//Position - 0x1E3FD
{
	if (func_398(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_402(var uParam0)//Position - 0x1E439
{
	if (!func_398(uParam0))
	{
		func_350(uParam0);
	}
	else
	{
		func_412(uParam0);
	}
}

void func_403()//Position - 0x1E45A
{
	Global_38DE = 0;
	func_404();
}

void func_404()//Position - 0x1E46A
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_3839.f_1 == 9) || Global_3838 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
		Global_3839.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_3D4C = 6;
		return;
	}
}

void func_405(int iParam0)//Position - 0x1E4C1
{
	if (Global_38D7)
	{
		func_407(0, 0);
	}
	if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8D8, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_3D4C = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8D7, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 30);
	}
	if (!func_406())
	{
		Global_3839.f_1 = 3;
	}
}

int func_406()//Position - 0x1E531
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_407(bool bParam0, bool bParam1)//Position - 0x1E558
{
	if (bParam0)
	{
		if (func_37(0))
		{
			Global_38D7 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_37FA);
			}
			Global_37F1 = { Global_3803[Global_3802 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37F1);
		}
	}
	else if (Global_38D7 == 1)
	{
		Global_38D7 = 0;
		Global_37F1 = { Global_380A[Global_3802 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37FA);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37F1);
		}
	}
}

int func_408()//Position - 0x1E5CC
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_409(var uParam0)//Position - 0x1E5FE
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!func_410(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), Local_160, 0, 1, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, 1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_410(int iParam0)//Position - 0x1E670
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_411(var uParam0, int iParam1)//Position - 0x1E6B2
{
	iParam1++;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_HIGHLIGHT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_412(var uParam0)//Position - 0x1E6D6
{
	func_66(uParam0, 0f);
}

void func_413(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1E6E5
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_10A95)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_414(var uParam0, var uParam1, char* sParam2)//Position - 0x1E780
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_415(uParam1);
	func_415(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_415(char* sParam0)//Position - 0x1E7A4
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

void func_416(var uParam0, struct<4> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1E7B2
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_475()) && !PED::IS_PED_INJURED(func_475()))
	{
		PED::REMOVE_PED_FROM_GROUP(func_475());
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_5) && !PED::IS_PED_INJURED(uParam5->f_5))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam5->f_5, 1, 1);
			uLocal_161[1] = uParam5->f_5;
			TASK::CLEAR_PED_TASKS(uLocal_161[1]);
		}
		else if (func_418(uParam4))
		{
			TASK::CLEAR_PED_TASKS(uLocal_161[1]);
		}
		else
		{
			uLocal_161[1] = PED::CREATE_PED(26, iLocal_195, Param1.f_3, uParam0, 1, 1);
		}
		if (DECORATOR::DECOR_EXIST_ON(uLocal_161[1], "Darts_name"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(uLocal_161[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_243 = func_421("RAYMOND");
				iLocal_244 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_243 = func_421("JOHAN");
				iLocal_244 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_243 = func_421("STAN");
				iLocal_244 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_243 = func_421("VINCE");
				iLocal_244 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_243 = func_421("KRISTY");
				iLocal_244 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_243 = func_421("MARLENE");
				iLocal_244 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_243 = func_421("LORIE");
				iLocal_244 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_243 = func_421("SHELLEY");
				iLocal_244 = -863218904;
			}
		}
		DECORATOR::DECOR_SET_INT(uLocal_161[1], "Darts_name", iLocal_244);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(uLocal_161[1]);
	func_417(iVar1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_161[1], uLocal_161[0], 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_161[0], uLocal_161[1], 0);
}

void func_417(int iParam0)//Position - 0x1E9AB
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_56 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_56 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_56 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_56 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_56 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_56 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_56 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_56 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_418(var uParam0)//Position - 0x1EA4A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), uParam0, -1))
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if ((((((ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], 1, 1);
				uLocal_161[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_419(int iParam0)//Position - 0x1EB33
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 3;
		while (iVar0 <= (147 - 1))
		{
			if (func_420(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_420(int iParam0)//Position - 0x1EB73
{
	if (!func_78(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

char* func_421(char* sParam0)//Position - 0x1EB9E
{
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 7)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_422(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x1ECD8
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uParam0->f_4 = ENTITY::GET_ENTITY_HEADING(*uParam0);
	}
	if (!bParam3)
	{
		func_424(uParam1, uParam0);
	}
	Local_40 = { 0f, (-2.3685f + fLocal_33), 0.1f };
	Local_40 = { Local_40 + Local_34 };
	Local_39 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1, uParam0->f_4, Local_40) };
	func_423(uParam2, uParam0);
}

void func_423(var uParam0, var uParam1)//Position - 0x1ED40
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_34 };
	*uParam0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_424(var uParam0, var uParam1)//Position - 0x1ED7B
{
	*uParam0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_33), -1.7272f) };
	uParam0->f_3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_33), -1.7272f) };
}

int func_425(var uParam0, var uParam1)//Position - 0x1EDCD
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\DARTS", 0))
	{
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAMILY1_2", 0))
	{
		return 0;
	}
	if ((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_27) || !STREAMING::HAS_MODEL_LOADED(iLocal_28)) || !STREAMING::HAS_MODEL_LOADED(iLocal_36)) || !STREAMING::HAS_MODEL_LOADED(iLocal_195)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_285)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_39)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_3E)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3)) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Darts")) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_245)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_246)) || !func_426(0, -1))
	{
		return 0;
	}
	return 1;
}

bool func_426(char* sParam0, int iParam1)//Position - 0x1EEAE
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_321(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_4354.f_131D[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_131D[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_4354.f_131D[iVar0 /*4*/]), 9);
		Global_4354.f_1316[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_4354.f_131D[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_4354.f_130F[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_4354.f_1336[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_427(&(Global_4354.f_1336[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_427(var uParam0)//Position - 0x1EF7C
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_428(var uParam0, var uParam1)//Position - 0x1F01E
{
	STREAMING::REQUEST_MODEL(iLocal_27);
	STREAMING::REQUEST_MODEL(iLocal_28);
	STREAMING::REQUEST_MODEL(iLocal_36);
	STREAMING::REQUEST_MODEL(iLocal_195);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Darts", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("ShopUI_Title_Darts", 0);
	STREAMING::REQUEST_ANIM_DICT(sLocal_245);
	STREAMING::REQUEST_ANIM_DICT(sLocal_246);
	*uParam0 = unk_0x67D02A194A2FC2BD("darts_scoreboard");
	uParam1->f_285 = func_179();
	uParam1->f_39 = func_430();
	uParam1->f_3E = func_429();
	HUD::REQUEST_ADDITIONAL_TEXT("DARTS", 3);
}

var func_429()//Position - 0x1F08C
{
	return unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
}

var func_430()//Position - 0x1F09C
{
	return unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
}

void func_431(var uParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x1F0AC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			uParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		uParam0->f_12 = { 989.399f, -99.674f, 75.925f };
		uParam0->f_15 = { 180f, 0f, 252.555f };
		uParam0->f_18 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		uParam0->f_12 = { 1992.223f, 3049.814f, 48.333f };
		uParam0->f_15 = { 180f, 0f, 87.77f };
		uParam0->f_18 = { 1.82f, 1.328f, 1f };
	}
	if (!func_432(Param2) && fParam3 != 0f)
	{
		uParam0->f_12 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param2, fParam3, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_15 = { 180f, 0f, (fParam3 - -29.98685f) };
	}
	uParam0->f_1B = 0.885f;
	uParam0->f_1C = 0.244f;
	uParam0->f_1D = 0.17f;
	uParam0->f_1E = 0.415f;
}

int func_432(struct<3> Param0)//Position - 0x1F1C8
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_433(int iParam0)//Position - 0x1F1F2
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_37 = 0.5f;
	Local_37.f_1 = 0.5f;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		Local_37.f_2 = 0.05f;
		Local_37.f_3 = 0.095f;
	}
	else
	{
		Local_37.f_2 = 0.065f;
		Local_37.f_3 = 0.09f;
	}
	Local_37.f_4 = 255;
	Local_37.f_5 = 250;
	Local_37.f_6 = 255;
	Local_37.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_37.f_4 = 255;
		Local_37.f_5 = 255;
		Local_37.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_37.f_4 = 255;
		Local_37.f_5 = 255;
		Local_37.f_6 = 255;
	}
	Local_37.f_8 = 0f;
	Local_38 = 0f;
	Local_38.f_1 = 0f;
	Local_38.f_2 = 0.061f;
	Local_38.f_3 = 0.105f;
	Local_38.f_4 = 200;
	Local_38.f_5 = 45;
	Local_38.f_6 = 40;
	Local_38.f_7 = 255;
	Local_38.f_8 = 0f;
}

void func_434(var uParam0, int iParam1)//Position - 0x1F2C5
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_27;
	}
	else
	{
		uParam0->f_1 = iLocal_28;
	}
	uParam0->f_18 = 0;
	uParam0->f_17 = 0;
}

void func_435()//Position - 0x1F2EC
{
	int iVar0;
	
	STATS::LEADERBOARDS_CLEAR_CACHE_DATA();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1C0DEF.f_51[iVar0] = 0;
		iVar0++;
	}
}

void func_436(struct<3> Param0, float fParam1)//Position - 0x1F315
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	
	fLocal_88 = GRAPHICS::_GET_ASPECT_RATIO(0);
	fVar7 = 30f;
	fVar7 = func_382(fLocal_88);
	Var8 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar9 = 1.7939f;
	fVar10 = -1.3346f;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		Var11 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar12 = -1.3023f;
		fVar13 = -12.4139f;
	}
	else
	{
		Var11 = { -0.112635f, -1.86963f, 0.45417f };
		fVar12 = -3.7542f;
		fVar13 = -14.4576f;
	}
	Var14 = { 0.261599f, -0.750354f, -0.392929f };
	Var16 = { 0.281314f, -0.573735f, -0.39603f };
	Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam1, Var8) };
	Var3 = { fVar10, 0f, (fParam1 - fVar9) };
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam1, Var11) };
	Var2 = { fVar13, 0f, (fParam1 - fVar12) };
	Var4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam1, Var14) };
	Var5 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	Var15 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam1, Var16) };
	Var6 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	uLocal_74 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var0, Var2, fVar7, 0, 2);
	uLocal_75 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var1, Var3, fVar7, 0, 2);
	uLocal_76 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var4, Var5, 65f, 0, 2);
	uLocal_77 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var15, Var6, 65f, 0, 2);
	uLocal_78 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_79 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_81 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_82 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_80 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	CAM::SET_CAM_FOV(uLocal_76, 43.35f);
	CAM::SET_CAM_FOV(uLocal_77, 42.35f);
	CAM::SHAKE_CAM(uLocal_76, "HAND_SHAKE", 0.1f);
	CAM::SHAKE_CAM(uLocal_77, "HAND_SHAKE", 0.1f);
}

void func_437(var uParam0, var uParam1)//Position - 0x1F578
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_32[0] = 20;
	iLocal_32[10] = 3;
	iLocal_32[1] = 1;
	iLocal_32[11] = 19;
	iLocal_32[2] = 18;
	iLocal_32[12] = 7;
	iLocal_32[3] = 4;
	iLocal_32[13] = 16;
	iLocal_32[4] = 13;
	iLocal_32[14] = 8;
	iLocal_32[5] = 6;
	iLocal_32[15] = 11;
	iLocal_32[6] = 10;
	iLocal_32[16] = 14;
	iLocal_32[7] = 15;
	iLocal_32[17] = 9;
	iLocal_32[8] = 2;
	iLocal_32[18] = 12;
	iLocal_32[9] = 17;
	iLocal_32[19] = 5;
	iLocal_32[20] = 20;
}

void func_438()//Position - 0x1F634
{
	Global_42CA.f_6 = 1;
}

void func_439(int iParam0, bool bParam1)//Position - 0x1F642
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_6070, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_6070, iParam0);
	}
}

var func_440(int iParam0, int iParam1)//Position - 0x1F664
{
	var uVar0;
	var uVar1;
	
	uVar1 = func_441(iParam0, iParam1);
	STATS::STAT_GET_INT(uVar1, &uVar0, -1);
	return uVar0;
}

var func_441(int iParam0, int iParam1)//Position - 0x1F682
{
	var uVar0;
	var uVar1;
	
	func_442(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_442(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1F698
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_443(bool bParam0)//Position - 0x1F8EF
{
	if (bParam0)
	{
		func_444();
		if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8D8, 16);
		}
		Global_3839.f_1 = 1;
		if (func_37(0))
		{
			func_405(0);
		}
	}
	else if (Global_3839.f_1 == 1)
	{
		if (!Global_3839.f_1 == 0)
		{
			Global_3839.f_1 = 3;
		}
	}
}

void func_444()//Position - 0x1F952
{
	if (Global_3839.f_1 == 9 || Global_3839.f_1 == 10)
	{
		Global_3D81 = 0;
		Global_3D7D = 1;
	}
}

void func_445(int iParam0, var uParam1, var uParam2)//Position - 0x1F97B
{
	int iVar0;
	int iVar1;
	
	HUD::DISPLAY_AREA_NAME(1);
	func_244(8);
	func_297();
	if (bLocal_169)
	{
		func_463(&uLocal_185);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_386(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_27);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_28);
	if (!PED::IS_PED_INJURED(uLocal_161[0]) && !PED::IS_PED_INJURED(uLocal_161[1]))
	{
		TASK::TASK_CLEAR_LOOK_AT(uLocal_161[0]);
		TASK::TASK_CLEAR_LOOK_AT(uLocal_161[1]);
	}
	func_462();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_36);
	func_461();
	func_460(uParam1->f_285);
	func_459(&(uParam1->f_39));
	if (!ENTITY::IS_ENTITY_DEAD(func_475()))
	{
		PED::SET_PED_AS_GROUP_MEMBER(func_475(), func_458());
		func_457(iLocal_193, iLocal_194);
	}
	else
	{
		func_455(&(uLocal_161[1]));
	}
	func_443(0);
	func_454(uParam2);
	func_34(0);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (iParam0->f_1CC && !iLocal_183)
		{
			func_453(190, 0);
		}
	}
	func_89();
	func_435();
	func_81(&(uParam1->f_48));
	SYSTEM::WAIT(200);
	if (iLocal_176)
	{
		func_449(130, 0, 0);
		func_446();
	}
	func_439(23, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_446()//Position - 0x1FAC7
{
	func_447();
}

int func_447()//Position - 0x1FAD4
{
	if (func_448(0))
	{
		return 0;
	}
	if (Global_15F91.f_8)
	{
		if (Global_15F91.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_15F91.f_A > 1)
	{
		return 0;
	}
	Global_15F91.f_A++;
	return 1;
}

bool func_448(bool bParam0)//Position - 0x1FB1F
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_449(int iParam0, int iParam1, int iParam2)//Position - 0x1FB4A
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_452((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_17C49.f_2100[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_17C49.f_2100[iParam0 /*12*/].f_6 == 11 || Global_17C49.f_2100[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_17C49.f_2100[iParam0 /*12*/].f_5 = 1;
		Global_17C49.f_2100[iParam0 /*12*/].f_A = iParam1;
		Global_17C49.f_2100[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_450();
	}
}

void func_450()//Position - 0x1FC32
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_17B41 = 0;
	Global_17B42 = 0;
	Global_17B43 = 0;
	Global_17B44 = 0;
	Global_17B45 = 0;
	Global_17B46 = 0;
	Global_17B47 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_17C49.f_2100.f_F0D;
	Global_17C49.f_2100.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_17C49.f_2100[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_17C49.f_2100[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_17B41++;
					fVar1 = (fVar1 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_17B42++;
					fVar2 = (fVar2 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_17B43++;
					fVar3 = (fVar3 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_17B44++;
					fVar4 = (fVar4 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_17B45++;
					fVar5 = (fVar5 + (Global_17C49.f_2100[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_17B46++;
					fVar6 = (fVar6 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_17B47++;
					fVar7 = (fVar7 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_17B30 > 0)
	{
		if (Global_17B41 == Global_17B30)
		{
			fVar1 = 55f;
		}
	}
	if (Global_17B31 > 0)
	{
		if (Global_17B42 == Global_17B31)
		{
			fVar2 = 10f;
		}
	}
	if (Global_17B32 > 0)
	{
		if (Global_17B43 == Global_17B32)
		{
			fVar3 = 0f;
		}
	}
	if (Global_17B33 > 0)
	{
		if (Global_17B44 == Global_17B33)
		{
			fVar4 = 10f;
		}
	}
	if (Global_17B34 > 0)
	{
		if (((Global_17B45 == Global_17B34 || (Global_17B34 * 10 / Global_17B45) < 41) || Global_17B45 > Global_17B37) || Global_17B45 == Global_17B37)
		{
			if (!MISC::IS_BIT_SET(Global_17C49.f_2100.f_F10, 14))
			{
				if (Global_17B45 == Global_17B34)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_17B34, 0);
					MISC::SET_BIT(&(Global_17C49.f_2100.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_17B35 > 0)
	{
		if (Global_17B46 == Global_17B35)
		{
			fVar6 = 15f;
		}
	}
	if (Global_17B36 > 0)
	{
		if (Global_17B47 == Global_17B36)
		{
			fVar7 = 5f;
		}
	}
	Global_17C49.f_2100.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_17B45 > Global_17B37 || Global_17B45 == Global_17B37)
	{
		iVar9 = Global_17B37;
	}
	else
	{
		iVar9 = Global_17B45;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_17B41, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_17B30, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_17B42, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_17B31, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_17B43, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_17B32, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_17B44, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_17B33, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_17B37, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_17B47 + Global_17B46), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_17B36 + Global_17B35), 1);
	Global_17B48 = (Global_17B41 * 100 / Global_17B30);
	Global_17B4A = ((Global_17B43 + Global_17B42) * 100 / (Global_17B32 + Global_17B31));
	Global_17B49 = ((Global_17B44 + iVar9) * 100 / (Global_17B33 + Global_17B37));
	Global_17B4B = ((Global_17B46 + Global_17B47) * 100 / (Global_17B35 + Global_17B36));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_17C49.f_2100.f_F0D, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_17B48, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_17B49, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_17B4A, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D))
	{
		func_71(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_451() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_447();
				}
			}
		}
	}
}

int func_451()//Position - 0x200F6
{
	return Global_5F7C;
}

int func_452(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x20101
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_336();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_453(int iParam0, bool bParam1)//Position - 0x2035E
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_209(iParam0, &Var0, &Var1, 1, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(103, iLocal_105[1], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(99, iLocal_105[2], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(109, iLocal_105[3], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(106, iLocal_105[5], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, iLocal_105[10], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(107, iLocal_105[8], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(116, iLocal_105[6], 0f);
	}
}

void func_454(var uParam0)//Position - 0x20409
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_234)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		uParam0->f_234 = 0;
	}
	if (!Global_10BA1)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_10BA2)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_448(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_34(0);
}

void func_455(var uParam0)//Position - 0x204B0
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !PED::IS_PED_INJURED(*uParam0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_196);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_196);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_161[0]))
		{
			TASK::TASK_LOOK_AT_ENTITY(0, uLocal_161[0], 8000, 2049, 3);
		}
		TASK::TASK_STAND_STILL(0, 1000);
		if (bLocal_174)
		{
			if (!MISC::IS_BIT_SET(Global_17C22, 10))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_456(iLocal_198 == 2, Local_233, Local_235), 1f, 20000, 0.25f, 0, func_108(iLocal_198 == 2, fLocal_237, fLocal_239));
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_456(iLocal_198 == 2, Local_232, Local_234), 1f, 20000, 0.25f, 0, func_108(iLocal_198 == 2, fLocal_236, fLocal_238));
			}
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_456(iLocal_198 == 2, Local_232, Local_234), 1f, 20000, 0.25f, 0, func_108(iLocal_198 == 2, 172.6813f, 142.6717f));
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		TASK::CLOSE_SEQUENCE_TASK(uLocal_196);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_196);
		PED::SET_PED_KEEP_TASK(*uParam0, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195);
}

Vector3 func_456(bool bParam0, struct<3> Param1, struct<3> Param2)//Position - 0x205EB
{
	if (bParam0)
	{
		return Param1;
	}
	return Param2;
}

void func_457(int iParam0, var uParam1)//Position - 0x20606
{
	if (Global_150B1 == iParam0)
	{
		Global_150B2 = Global_150B1;
		Global_150B3 = uParam1;
		Global_150B1 = 23;
	}
}

var func_458()//Position - 0x2062E
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_459(var uParam0)//Position - 0x2063E
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
}

void func_460(var uParam0)//Position - 0x2065A
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
}

void func_461()//Position - 0x20668
{
	HUD::CLEAR_HELP(1);
	CAM::DESTROY_ALL_CAMS(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	HUD::DISPLAY_RADAR(1);
}

void func_462()//Position - 0x20689
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_35))
	{
		OBJECT::DELETE_OBJECT(&iLocal_35);
	}
}

void func_463(var uParam0)//Position - 0x206A0
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!func_410(iVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar0, 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, 0);
		}
	}
}

void func_464()//Position - 0x206D6
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_17C49.f_1CAD || func_448(0))
	{
		if (!func_472())
		{
			iVar0 = func_471();
			if (iVar0 != -1)
			{
				if (!func_466(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_465();
		}
	}
}

void func_465()//Position - 0x20747
{
	Global_15F8D = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_10B7D))
		{
			switch (func_75())
			{
				case 0:
					StringCopy(&Global_10B7D, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_10B7D, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_10B7D, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_10B81, "", 16);
		}
		Global_15F8D = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_10B7D))
		{
			switch (func_75())
			{
				case 0:
					StringCopy(&Global_10B7D, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_10B7D, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_10B7D, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_10B81, "", 16);
		}
		Global_15F8D = 0;
		MISC::SET_BIT(&(Global_15F6A.f_14), 25);
	}
}

int func_466(int iParam0)//Position - 0x20836
{
	int iVar0;
	int iVar1;
	
	func_465();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_13CDF[iParam0 /*5*/];
	iVar1 = Global_10BA2.f_6D[iVar0 /*4*/];
	func_470(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_467(&(Global_17C49.f_6C1.f_21B), iVar1);
	if (Global_14A3E == Global_15F8F)
	{
		Global_17C49.f_1CAD.f_148[iVar1 /*6*/].f_1++;
	}
	if (!MISC::IS_BIT_SET(Global_13D03[iVar1 /*34*/].f_F, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_17C49.f_1CAD.f_148[iVar1 /*6*/].f_2++;
	Global_14A3E = Global_15F8F;
	if (iParam0 == -1)
	{
		if (Global_17C49.f_1CAD)
		{
		}
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_13CDF[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_13CDF[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_467(var uParam0, int iParam1)//Position - 0x2094D
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_17C49.f_4193[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_469(Global_17C49.f_4193[iVar0], &Var2, &fVar3))
			{
				Global_17C49.f_4193[iVar0] = 318;
				func_468(&(uParam0->f_5F4[iVar0]));
				uParam0->f_5F8[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_602[iVar0] = 0f;
				uParam0->f_606[iVar0] = 0;
				uParam0->f_60A[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_614[iVar0] = 0;
				Global_156CD[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_9 = 0f;
				Global_156CD[iVar0 /*29*/].f_C = 0f;
				Global_156CD[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_A = 0f;
				Global_156CD[iVar0 /*29*/].f_D = 0f;
				Global_156CD[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_B = 0f;
				Global_156CD[iVar0 /*29*/].f_E = 0f;
				Global_156CD[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1A = 0f;
				Global_156CD[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1B = 0f;
				Global_156CD[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_468(var uParam0)//Position - 0x20B16
{
	*uParam0 = -15;
}

int func_469(int iParam0, var uParam1, float fParam2)//Position - 0x20B24
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_469(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_469(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_470(int iParam0, bool bParam1)//Position - 0x21493
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_14980[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_14980[iParam0 /*2*/] = 0;
	}
}

int func_471()//Position - 0x214D1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (MISC::IS_BIT_SET(Global_13CDF[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_472()//Position - 0x21506
{
	if (((Global_15F6A == 13 || Global_15F6A == 10) || Global_15F6A == 11) || Global_15F6A == 12)
	{
		return 0;
	}
	return 1;
}

void func_473(int iParam0, bool bParam1)//Position - 0x21544
{
	if (PED::IS_PED_INJURED(func_475()))
	{
		return;
	}
	if (bParam1)
	{
		if (!PED::IS_PED_GROUP_MEMBER(func_475(), func_458()))
		{
			return;
		}
		if (!PED::IS_PED_INJURED(func_474()))
		{
			if (!PED::IS_PED_GROUP_MEMBER(func_474(), func_458()))
			{
				return;
			}
		}
	}
	if (Global_150B1 == 23)
	{
		Global_150B3 = 10;
		Global_150B1 = iParam0;
	}
}

var func_474()//Position - 0x215A9
{
	return Global_150B8;
}

int func_475()//Position - 0x215B5
{
	return Global_150B7;
}

void func_476()//Position - 0x215C1
{
	if (iLocal_158 == 1)
	{
		return;
	}
	func_297();
	PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Darts");
	iLocal_158 = 1;
}

int func_477(int iParam0)//Position - 0x215E4
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_79(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

