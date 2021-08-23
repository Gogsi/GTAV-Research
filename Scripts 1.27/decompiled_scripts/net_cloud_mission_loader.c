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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
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
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	struct<5> Local_88 = { 0, 0, 0, 0, 0 } ;
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
	var uLocal_105 = 1;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = -1;
	var uLocal_110 = -1;
	var uLocal_111 = 2;
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
	var uLocal_123 = 2;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
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
	var uLocal_154 = 0;
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
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	struct<86> Local_181 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_267 = 0;
	bool bLocal_268 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	struct<10> Var1;
	char cVar11[64];
	int iVar19;
	int iVar20;
	bool bVar21;
	char[] cVar22[8];
	int iVar30;
	bool bVar31;
	
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
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		bLocal_268 = false;
		bVar0 = func_181();
		Global_2394628.f_3 = 0;
		Global_2394788 = 0;
		if (func_180())
		{
			bLocal_268 = true;
			Var1 = { Global_2394628.f_4 };
			MemCopy(&cVar11, {Var1.f_3}, 8);
			iVar19 = func_179(Global_2394628.f_4);
			iVar20 = PLAYER::PLAYER_ID();
			bVar21 = Global_2394628.f_14;
			if (bVar21)
			{
				cVar11 = { Global_2394628.f_15 };
			}
			if (Global_2394628.f_25)
			{
				func_178(&Local_88, 1, 1);
				MISC::CLEAR_BIT(&(Global_1582596[iVar20 /*324*/].f_31.f_18), 2);
				MISC::CLEAR_BIT(&(Global_1582596[iVar20 /*324*/].f_31.f_18), 1);
				MISC::CLEAR_BIT(&(Global_1582596[iVar20 /*324*/].f_31.f_18), 3);
				func_177();
				func_176();
				Global_2394628.f_25 = 0;
			}
			if (!func_72(&Local_88, &cVar11, &(Global_1582596[iVar20 /*324*/].f_31.f_18), iVar19, 0, 0, 1, 0, 1, bVar21, 0, 1, 0, 0))
			{
				Global_2394628.f_23 = 0;
				Global_2394628.f_27 = -1;
				if (bVar0)
				{
					func_178(&Local_88, 1, 1);
					NETWORK::UGC_CANCEL_QUERY();
					func_71();
					Global_2394628.f_23 = 1;
					Global_2394628.f_24 = 0;
					if (Global_2394628.f_27 < 0)
					{
						Global_2394628.f_27 = 0;
					}
					else
					{
						Global_2394628.f_27++;
						if (Global_2394628.f_27 >= 10)
						{
							func_70();
							Global_2394628.f_25 = 1;
						}
					}
				}
			}
			else if (Local_88)
			{
				Global_2394628.f_23 = 1;
				Global_2394628.f_24 = 1;
				if (Global_2394628.f_27 < 0)
				{
					Global_2394628.f_27 = 0;
				}
				else
				{
					Global_2394628.f_27++;
					if (Global_2394628.f_27 >= 10)
					{
						func_70();
					}
				}
			}
			else
			{
				Global_2394628.f_26++;
				if (Global_2394628.f_26 >= 3)
				{
					Global_2394628.f_23 = 1;
					Global_2394628.f_24 = 0;
					if (Global_2394628.f_27 < 0)
					{
						Global_2394628.f_27 = 0;
					}
					else
					{
						Global_2394628.f_27++;
						if (Global_2394628.f_27 >= 10)
						{
							func_70();
							Global_2394628.f_25 = 1;
						}
					}
				}
				else
				{
					Global_2394628.f_25 = 1;
				}
			}
		}
		if (func_69())
		{
			bLocal_268 = true;
			MemCopy(&cVar22, {Global_2394628.f_4.f_3}, 8);
			if (Global_2394628.f_23)
			{
				func_70();
			}
			else
			{
				if (Global_2394628.f_25)
				{
					func_178(&Local_88, 1, 1);
					Global_2394628.f_25 = 0;
				}
				if (!func_66(&Local_88, &cVar22, &Local_181))
				{
					Global_2394628.f_23 = 0;
					Global_2394628.f_27 = -1;
				}
				else if (Local_88)
				{
					Global_2394628.f_23 = 1;
					Global_2394628.f_24 = 1;
					Global_2394628.f_28 = Local_181.f_65;
					Global_2394628.f_29 = Local_181.f_68;
					Global_2394628.f_30 = { Local_181.f_22 };
					Global_2394628.f_46 = { Local_181.f_38 };
					Global_2398287 = { Local_181 };
				}
				else
				{
					Global_2394628.f_23 = 1;
					Global_2394628.f_24 = 0;
				}
			}
		}
		if (func_65())
		{
			bLocal_268 = true;
			if (Global_2394628.f_23)
			{
				func_70();
			}
			else
			{
				if (Global_2394628.f_25)
				{
					func_178(&Local_88, 1, 1);
					Global_2394628.f_25 = 0;
				}
				iVar30 = Local_88.f_4;
				if (!func_4(&Local_88))
				{
					Global_2394788 = 1;
					if (iVar30 != Local_88.f_4)
					{
						if (Local_88.f_4 == 4)
						{
							iLocal_267 = (MISC::GET_GAME_TIMER() + 50000);
						}
					}
					bVar31 = false;
					if (Local_88.f_4 == 4)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_267)
						{
							Global_2394628.f_23 = 1;
							Global_2394628.f_24 = 0;
							bVar31 = true;
						}
					}
					if (!bVar31)
					{
						Global_2394628.f_23 = 0;
						Global_2394628.f_27 = -1;
					}
				}
				else if (Local_88)
				{
					Global_2394628.f_23 = 1;
					Global_2394628.f_24 = 1;
				}
				else
				{
					Global_2394628.f_23 = 1;
					Global_2394628.f_24 = 0;
				}
			}
		}
		if (!bLocal_268)
		{
			if (func_3(PLAYER::PLAYER_ID()) || func_2(PLAYER::PLAYER_ID()))
			{
				if (!func_1(PLAYER::PLAYER_ID(), 1))
				{
					SCRIPT::TERMINATE_THIS_THREAD();
				}
			}
		}
	}
}

int func_1(int iParam0, bool bParam1)//Position - 0x44D
{
	if (MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_235.f_4, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_235.f_4, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_2(int iParam0)//Position - 0x48D
{
	return Global_2414009[iParam0 /*254*/].f_114 == 7;
}

bool func_3(int iParam0)//Position - 0x4A1
{
	return Global_2414009[iParam0 /*254*/].f_114 == 2;
}

int func_4(bool bParam0)//Position - 0x4B5
{
	if (!func_64())
	{
		if (func_61())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (func_60())
			{
				return 0;
			}
			if (func_59())
			{
				return 0;
			}
			func_58();
			func_57();
			func_56();
			if (func_64())
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(1);
			}
			else
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(0);
			}
			bParam0->f_13 = Global_2394787;
			bParam0->f_9 = 1100;
			if (bParam0->f_13 == 0)
			{
				return 1;
			}
			func_55(bParam0, 24);
			break;
		
		case 24:
			if (func_53(bParam0->f_13))
			{
				func_178(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				func_55(bParam0, 1);
			}
			break;
		
		case 1:
			if (NETWORK::UGC_QUERY_BY_CONTENT_IDS(&Global_2394690, bParam0->f_13, 1, func_52(0)))
			{
				func_55(bParam0, 2);
			}
			break;
		
		case 2:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				if (NETWORK::UGC_DID_GET_SUCCEED())
				{
					*bParam0 = 0;
				}
				else
				{
					func_178(bParam0, 1, 1);
					bParam0->f_40 = NETWORK::UGC_GET_QUERY_RESULT();
					*bParam0 = 0;
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					func_55(bParam0, 4);
				}
				else
				{
					func_178(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if (NETWORK::_0xC87E740D9F3872CC())
			{
				func_57();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (1100 + bParam0->f_13))
			{
				func_178(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				bParam0->f_7 = 0;
				while (bParam0->f_7 < bParam0->f_13)
				{
					if (bParam0->f_9 < 1118)
					{
						if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
						{
							DATAFILE::DATAFILE_DELETE();
						}
						if (DATAFILE::DATAFILE_SELECT_UGC_DATA(bParam0->f_7))
						{
							func_5(bParam0, 1);
						}
						else if (bParam0->f_8 > 200)
						{
							func_57();
							bParam0->f_7++;
							bParam0->f_8 = 0;
						}
					}
					bParam0->f_7++;
				}
			}
			break;
	}
	return 0;
}

void func_5(bool bParam0, bool bParam1)//Position - 0x68F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<86> Var5;
	int iVar91;
	
	iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	iVar1 = DATAFILE::DATADICT_GET_DICT(iVar0, "mission");
	iVar2 = DATAFILE::DATADICT_GET_DICT(iVar1, "gen");
	if (func_64())
	{
		if (func_51(NETWORK::UGC_GET_CONTENT_ID(bParam0->f_7)))
		{
			if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
			{
				DATAFILE::DATAFILE_DELETE();
			}
			return;
		}
	}
	if ((DATAFILE::DATADICT_GET_INT(iVar2, "type") == 0 && DATAFILE::DATADICT_GET_INT(iVar2, "subtype") == 7) && bParam0->f_9 < 1100)
	{
		if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
		{
			DATAFILE::DATAFILE_DELETE();
		}
		return;
	}
	if (Global_262145.f_6052)
	{
		if (DATAFILE::DATADICT_GET_INT(iVar2, "type") == 0)
		{
			if (DATAFILE::DATADICT_GET_INT(iVar2, "subtype") == 1 || DATAFILE::DATADICT_GET_INT(iVar2, "subtype") == 7)
			{
				if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
				{
					DATAFILE::DATAFILE_DELETE();
				}
				return;
			}
			iVar3 = DATAFILE::DATADICT_GET_INT(iVar2, "optbs");
			if (MISC::IS_BIT_SET(iVar3, 4) || MISC::IS_BIT_SET(iVar3, 12))
			{
				if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
				{
					DATAFILE::DATAFILE_DELETE();
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		Global_794503.f_2 = 0;
		Global_794503.f_108484 = 0;
		func_50();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794503.f_108499[iVar4] = 0;
			Global_794503.f_108485[iVar4] = 0;
			iVar4++;
		}
		if (func_47())
		{
			func_46(1);
			func_46(0);
			func_44(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794503.f_4[bParam0->f_9 /*86*/] = { Var5 };
	if (!func_64())
	{
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_4 = NETWORK::UGC_GET_CONTENT_FILE_VERSION(bParam0->f_7, 0);
		Global_794503.f_4[bParam0->f_9 /*86*/].f_67 = func_43(bParam0->f_7);
		Global_794503.f_4[bParam0->f_9 /*86*/].f_66 = NETWORK::UGC_GET_CONTENT_FILE_VERSION(bParam0->f_7, Global_794503.f_4[bParam0->f_9 /*86*/].f_67);
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_5 = NETWORK::UGC_GET_CONTENT_LANGUAGE(bParam0->f_7);
	}
	Global_794503.f_4[bParam0->f_9 /*86*/].f_56 = { func_42(iVar2, "start") };
	if (DATAFILE::DATADICT_GET_TYPE(iVar2, "optbs") == 2)
	{
		Global_794503.f_4[bParam0->f_9 /*86*/].f_76 = DATAFILE::DATADICT_GET_INT(iVar2, "optbs");
	}
	MISC::CLEAR_BIT(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 15);
	MISC::CLEAR_BIT(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 18);
	MISC::CLEAR_BIT(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 19);
	Global_794503.f_4[bParam0->f_9 /*86*/].f_59 = { func_42(iVar2, "cam") };
	Global_794503.f_4[bParam0->f_9 /*86*/].f_62 = { func_41(iVar2) };
	if (!func_64())
	{
		if (NETWORK::UGC_IS_LANGUAGE_SUPPORTED(NETWORK::UGC_GET_CONTENT_LANGUAGE(bParam0->f_7)))
		{
			Global_794503.f_4[bParam0->f_9 /*86*/].f_54 = NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(bParam0->f_7);
		}
		else
		{
			Global_794503.f_4[bParam0->f_9 /*86*/].f_54 = -1;
		}
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar2, "mgrk") == 2)
	{
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_7 = DATAFILE::DATADICT_GET_INT(iVar2, "mgrk");
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar2, "mght") == 2)
	{
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_8 = DATAFILE::DATADICT_GET_INT(iVar2, "mght");
	}
	Global_794503.f_96153[bParam0->f_9 /*11*/].f_10 = DATAFILE::DATADICT_GET_INT(iVar2, "cncmbs");
	Global_794503.f_4[bParam0->f_9 /*86*/].f_69 = DATAFILE::DATADICT_GET_INT(iVar2, "min");
	Global_794503.f_4[bParam0->f_9 /*86*/].f_71 = DATAFILE::DATADICT_GET_INT(iVar2, "num");
	if (Global_794503.f_4[bParam0->f_9 /*86*/].f_71 == -1)
	{
		Global_794503.f_4[bParam0->f_9 /*86*/].f_71 = 30;
	}
	StringCopy(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_22), NETWORK::UGC_GET_CONTENT_NAME(bParam0->f_7), 64);
	Global_794503.f_4[bParam0->f_9 /*86*/].f_65 = DATAFILE::DATADICT_GET_INT(iVar2, "type");
	if (func_64())
	{
		StringCopy(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_6), func_40(), 64);
	}
	else
	{
		StringCopy(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_6), NETWORK::UGC_GET_CONTENT_USER_ID(bParam0->f_7), 64);
	}
	Global_794503.f_4[bParam0->f_9 /*86*/].f_70 = DATAFILE::DATADICT_GET_INT(iVar2, "rank");
	Global_794503.f_96153[bParam0->f_9 /*11*/] = DATAFILE::DATADICT_GET_INT(iVar2, "tnum");
	if (!func_64())
	{
		Global_794503.f_4[bParam0->f_9 /*86*/].f_73 = func_39(NETWORK::UGC_GET_CONTENT_RATING(bParam0->f_7, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(bParam0->f_7, 0));
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_3 = NETWORK::UGC_GET_CONTENT_RATING_COUNT(bParam0->f_7, 0);
	}
	Global_794503.f_4[bParam0->f_9 /*86*/].f_75 = DATAFILE::DATADICT_GET_INT(iVar2, "charcon");
	Global_794503.f_4[bParam0->f_9 /*86*/].f_77 = DATAFILE::DATADICT_GET_INT(iVar2, "ltm");
	if (Global_794503.f_4[bParam0->f_9 /*86*/].f_65 == 6 && !bParam1)
	{
		if (Global_963585.f_598 < 85)
		{
			Global_794503.f_4[bParam0->f_9 /*86*/].f_68 = Global_963585.f_598;
			Global_963585[Global_794503.f_4[bParam0->f_9 /*86*/].f_68 /*3*/] = { func_42(iVar2, "area") };
			if (DATAFILE::DATADICT_GET_TYPE(iVar2, "rad") == 2)
			{
				Global_963585.f_512[Global_794503.f_4[bParam0->f_9 /*86*/].f_68] = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iVar2, "rad"));
			}
			else
			{
				Global_963585.f_512[Global_794503.f_4[bParam0->f_9 /*86*/].f_68] = DATAFILE::DATADICT_GET_FLOAT(iVar2, "rad");
			}
			Global_963585.f_256[Global_794503.f_4[bParam0->f_9 /*86*/].f_68 /*3*/] = { Global_794503.f_4[bParam0->f_9 /*86*/].f_56 };
			Global_794503.f_4[bParam0->f_9 /*86*/].f_56 = { Global_794503.f_4[bParam0->f_9 /*86*/].f_59 };
			Global_963585.f_598++;
		}
	}
	else
	{
		Global_794503.f_4[bParam0->f_9 /*86*/].f_68 = DATAFILE::DATADICT_GET_INT(iVar2, "subtype");
	}
	StringCopy(&(Global_794503.f_4[bParam0->f_9 /*86*/]), NETWORK::UGC_GET_CONTENT_ID(bParam0->f_7), 24);
	iVar91 = MISC::GET_HASH_KEY(&(Global_794503.f_4[bParam0->f_9 /*86*/]));
	Global_794503.f_96153[bParam0->f_9 /*11*/].f_2 = iVar91;
	func_38(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, &(Global_794503.f_4[bParam0->f_9 /*86*/].f_71), &(Global_794503.f_4[bParam0->f_9 /*86*/].f_69));
	if (func_64())
	{
		if (MISC::ARE_STRINGS_EQUAL(NETWORK::UGC_GET_CONTENT_ID(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794503.f_4[bParam0->f_9 /*86*/].f_56 = { 897.5109f, -2340.599f, 29.4461f };
		}
	}
	MISC::SET_BIT(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 13);
	if (Global_794503.f_4[bParam0->f_9 /*86*/].f_65 < 13 && !bParam1)
	{
		if (Global_794503.f_4[bParam0->f_9 /*86*/].f_70 <= 1000)
		{
			Global_794503.f_108485[Global_794503.f_4[bParam0->f_9 /*86*/].f_65]++;
			if (func_37(bParam0->f_9))
			{
				Global_794503.f_108485[7]++;
			}
			else if (func_36(bParam0->f_9))
			{
				Global_794503.f_108485[4]++;
			}
			else if (func_35(bParam0->f_9))
			{
				Global_794503.f_108485[10]++;
			}
		}
	}
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
	if (!func_64())
	{
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_1 = MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(bParam0->f_7));
		if ((Global_794503.f_108484 < 5 && Global_794503.f_4[bParam0->f_9 /*86*/].f_65 == 0) && Global_794503.f_4[bParam0->f_9 /*86*/].f_68 == 1)
		{
			Global_794503.f_96153[bParam0->f_9 /*11*/].f_9 = Global_794503.f_108484;
			StringCopy(&(Global_794503.f_108453[Global_794503.f_108484 /*6*/]), NETWORK::UGC_GET_ROOT_CONTENT_ID(bParam0->f_7), 24);
			Global_794503.f_108484++;
		}
		func_31(Global_794503.f_96153[bParam0->f_9 /*11*/].f_1, &(Global_794503.f_4[bParam0->f_9 /*86*/].f_76));
		if (bParam1)
		{
			if (NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(bParam0->f_7))
			{
				MISC::SET_BIT(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 14);
			}
		}
		else
		{
			if ((MISC::IS_BIT_SET(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 15) || MISC::IS_BIT_SET(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 18)) || MISC::IS_BIT_SET(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 19))
			{
				Global_794503.f_108485[11]++;
			}
			if (NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(bParam0->f_7))
			{
				MISC::SET_BIT(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 14);
				if (MISC::IS_BIT_SET(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 1) || Global_794503.f_4[bParam0->f_9 /*86*/].f_68 == 2)
				{
					Global_794503.f_108485[9]++;
				}
				if (Global_794503.f_4[bParam0->f_9 /*86*/].f_70 <= 1000)
				{
					if (Global_794503.f_4[bParam0->f_9 /*86*/].f_65 < 13)
					{
						Global_794503.f_108499[Global_794503.f_4[bParam0->f_9 /*86*/].f_65]++;
					}
				}
				Global_794503.f_96153[bParam0->f_9 /*11*/].f_6 = NETWORK::UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(bParam0->f_7);
			}
		}
	}
	if (!bParam1)
	{
		if (func_47())
		{
			func_29(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, Global_794503.f_4[bParam0->f_9 /*86*/].f_68, MISC::IS_BIT_SET(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 14), Global_794503.f_4[bParam0->f_9 /*86*/].f_70, 0);
			func_27(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, Global_794503.f_4[bParam0->f_9 /*86*/].f_68, Global_794503.f_4[bParam0->f_9 /*86*/].f_70, 0);
			func_25(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, Global_794503.f_4[bParam0->f_9 /*86*/].f_68, Global_794503.f_4[bParam0->f_9 /*86*/].f_75, Global_794503.f_4[bParam0->f_9 /*86*/].f_70, MISC::IS_BIT_SET(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 14));
			func_6(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, Global_794503.f_4[bParam0->f_9 /*86*/].f_68, Global_794503.f_4[bParam0->f_9 /*86*/].f_75, Global_794503.f_4[bParam0->f_9 /*86*/].f_70);
		}
	}
	if (Global_794503.f_4[bParam0->f_9 /*86*/].f_65 == 6)
	{
		Global_964184[0 /*37*/]++;
	}
	bParam0->f_9++;
	Global_794503.f_2++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1186
{
	int iVar0;
	int iVar1;
	
	if (!func_13(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = func_12(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	func_7(iVar1, 1);
}

void func_7(int iParam0, int iParam1)//Position - 0x11BB
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_10(iParam0))
	{
		func_9(iParam0, iVar0);
	}
	else
	{
		func_8(iParam0, iVar0);
	}
}

void func_8(int iParam0, int iParam1)//Position - 0x11EF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1335485 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1335488 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1335489 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1335490 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1335491 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1335492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1335493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1335494 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1335495 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1335496 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1335497 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1335498 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1335499 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1335500 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1335501 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_9(int iParam0, int iParam1)//Position - 0x1314
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_10(int iParam0)//Position - 0x1330
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_11(var uParam0)//Position - 0x13B4
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_12(int iParam0)//Position - 0x13D2
{
	switch (iParam0)
	{
		case 12:
			return joaat("mpply_total_contact_0");
		
		case 19:
			return joaat("mpply_total_contact_1");
		
		case 86:
			return joaat("mpply_total_contact_2");
		
		case 20:
			return joaat("mpply_total_contact_3");
		
		case 31:
			return joaat("mpply_total_contact_4");
		
		case 2:
			return joaat("mpply_total_contact_5");
		
		case 18:
			return joaat("mpply_total_contact_6");
		
		default:
	}
	return -1;
}

int func_13(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x1444
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		return 0;
	}
	if (iParam1 != 2)
	{
		return 0;
	}
	if (func_19(PLAYER::PLAYER_ID()) < iParam4)
	{
		return 0;
	}
	iVar0 = func_14(iParam2);
	*uParam3 = 145;
	if (iVar0 != 0)
	{
		*uParam3 = iVar0;
	}
	if (*uParam3 == 145)
	{
		return 0;
	}
	return 1;
}

int func_14(int iParam0)//Position - 0x1496
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 > 0 && iParam0 <= 200)
	{
		if (iParam0 > 90)
		{
			return 0;
		}
		switch (iParam0)
		{
			case 10:
				return 12;
			
			case 17:
				return 19;
			
			case 18:
				return 20;
			
			case 28:
				return 31;
			
			case 75:
				return 12;
			
			default:
		}
		return iParam0;
	}
	iVar0 = func_15(iParam0);
	if (iVar0 == 145)
	{
		return 0;
	}
	return iVar0;
}

int func_15(int iParam0)//Position - 0x151C
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 145;
	}
	iVar0 = 0;
	iVar1 = 145;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = func_17(iVar0);
		if (iParam0 == func_16(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 145;
}

int func_16(int iParam0)//Position - 0x1563
{
	switch (iParam0)
	{
		case 86:
			return 131908481;
		
		case 19:
			return joaat("LAMAR");
		
		case 12:
			return -1917614010;
		
		case 31:
			return -328739832;
		
		case 20:
			return -1984782235;
		
		case 18:
			return -2105450473;
		
		case 2:
			return joaat("TREVOR");
		
		case 76:
			return joaat("AGENT14");
		
		case 145:
			return 0;
		
		default:
	}
	return 0;
}

int func_17(int iParam0)//Position - 0x15ED
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	uVar1 = func_18(iVar0);
	return uVar1;
}

int func_18(int iParam0)//Position - 0x1603
{
	switch (iParam0)
	{
		case 0:
			return 86;
		
		case 1:
			return 19;
		
		case 2:
			return 12;
		
		case 3:
			return 31;
		
		case 4:
			return 20;
		
		case 5:
			return 18;
		
		case 6:
			return 2;
		
		case 7:
			return 76;
		
		default:
	}
	return 19;
}

int func_19(int iParam0)//Position - 0x166B
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_20(iVar0, 0);
}

int func_20(int iParam0, int iParam1)//Position - 0x168C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_270489[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270489[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_21(int iParam0)//Position - 0x174B
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1335605[func_23(-1)];
			}
			else if (func_22(iParam0))
			{
				return Global_1582596[iParam0 /*324*/].f_180.f_1;
			}
		}
	}
	else
	{
		return Global_1335605[func_23(-1)];
	}
	return 0;
}

int func_22(int iParam0)//Position - 0x17A8
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2422140.f_1, iParam0);
	}
	return 1;
}

int func_23(int iParam0)//Position - 0x17CD
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

int func_24()//Position - 0x1801
{
	return Global_1312737;
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x180D
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		return;
	}
	if (!func_13(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = func_26(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	func_7(iVar1, 1);
}

int func_26(int iParam0)//Position - 0x184B
{
	switch (iParam0)
	{
		case 12:
			return joaat("mpply_unique_contact_0");
		
		case 19:
			return joaat("mpply_unique_contact_1");
		
		case 86:
			return joaat("mpply_unique_contact_2");
		
		case 20:
			return joaat("mpply_unique_contact_3");
		
		case 31:
			return joaat("mpply_unique_contact_4");
		
		case 2:
			return joaat("mpply_unique_contact_5");
		
		case 18:
			return joaat("mpply_unique_contact_6");
		
		default:
	}
	return -1;
}

void func_27(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x18BD
{
	int iVar0;
	
	if (func_47())
	{
		if (iParam0 == 0)
		{
			if ((iParam1 != 6 && iParam1 != 5) && iParam1 != 4)
			{
				if (func_19(PLAYER::PLAYER_ID()) < iParam2)
				{
					return;
				}
			}
		}
		iVar0 = func_28(iParam0, iParam1, bParam3);
		if (iVar0 == -1)
		{
			return;
		}
		func_7(iVar0, 1);
	}
}

int func_28(int iParam0, int iParam1, bool bParam2)//Position - 0x1917
{
	switch (iParam0)
	{
		case 2:
			if (bParam2)
			{
				return joaat("mpply_available_races_v");
			}
			else
			{
				return joaat("mpply_available_races");
			}
			break;
		
		case 1:
			if (bParam2)
			{
				return joaat("mpply_available_dms_v");
			}
			else
			{
				return joaat("mpply_available_dms");
			}
			break;
		
		case 8:
			if (bParam2)
			{
				return joaat("mpply_available_paras_v");
			}
			else
			{
				return joaat("mpply_available_paras");
			}
			break;
		
		case 3:
			if (bParam2)
			{
				return joaat("mpply_available_survival_v");
			}
			else
			{
				return joaat("mpply_available_survival");
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam2)
					{
						return joaat("mpply_available_ctf_v");
					}
					else
					{
						return joaat("mpply_available_ctf");
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return joaat("mpply_available_lts_v");
					}
					else
					{
						return joaat("mpply_available_lts");
					}
					break;
				
				case 4:
					if (bParam2)
					{
						return joaat("mpply_available_versus_v");
					}
					else
					{
						return joaat("mpply_available_versus");
					}
					break;
				
				case 1:
					if (bParam2)
					{
						return joaat("mpply_available_heist_finale_v");
					}
					else
					{
						return joaat("mpply_available_heist_finale");
					}
					break;
				
				case 7:
					if (bParam2)
					{
						return joaat("mpply_available_heist_planv");
					}
					else
					{
						return joaat("mpply_available_heist_plan");
					}
					break;
			}
			if (bParam2)
			{
				return joaat("mpply_available_missions_v");
			}
			else
			{
				return joaat("mpply_available_missions");
			}
			break;
	}
	return -1;
}

void func_29(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x1A78
{
	int iVar0;
	
	if (!func_47())
	{
		return;
	}
	if (!bParam2)
	{
		return;
	}
	if (iParam0 == 0)
	{
		if ((iParam1 != 6 && iParam1 != 5) && iParam1 != 4)
		{
			if (func_19(PLAYER::PLAYER_ID()) < iParam3)
			{
				return;
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (iParam3 >= 9999)
		{
			return;
		}
	}
	iVar0 = func_30(iParam0, iParam1, bParam4);
	if (iVar0 == -1)
	{
		return;
	}
	func_7(iVar0, 1);
}

int func_30(int iParam0, int iParam1, bool bParam2)//Position - 0x1AF3
{
	switch (iParam0)
	{
		case 2:
			if (bParam2)
			{
				return joaat("mpply_unique_races_v");
			}
			else
			{
				return joaat("mpply_unique_races");
			}
			break;
		
		case 1:
			if (bParam2)
			{
				return joaat("mpply_unique_dms_v");
			}
			else
			{
				return joaat("mpply_unique_dms");
			}
			break;
		
		case 8:
			if (bParam2)
			{
				return joaat("mpply_unique_paras_v");
			}
			else
			{
				return joaat("mpply_unique_paras");
			}
			break;
		
		case 3:
			if (bParam2)
			{
				return joaat("mpply_unique_survival_v");
			}
			else
			{
				return joaat("mpply_unique_survival");
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam2)
					{
						return joaat("mpply_unique_ctf_v");
					}
					else
					{
						return joaat("mpply_unique_ctf");
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return joaat("mpply_unique_lts_v");
					}
					else
					{
						return joaat("mpply_unique_lts");
					}
					break;
				
				case 4:
					if (bParam2)
					{
						return joaat("mpply_unique_versus_v");
					}
					else
					{
						return joaat("mpply_unique_versus");
					}
					break;
				
				case 1:
					if (bParam2)
					{
						return joaat("mpply_unique_heist_finale_v");
					}
					else
					{
						return joaat("mpply_unique_heist_finale");
					}
					break;
				
				case 7:
					if (bParam2)
					{
						return joaat("mpply_unique_heist_planning_v");
					}
					else
					{
						return joaat("mpply_unique_heist_planning");
					}
					break;
			}
			if (bParam2)
			{
				return joaat("mpply_unique_missions_v");
			}
			else
			{
				return joaat("mpply_unique_missions");
			}
			break;
	}
	return -1;
}

void func_31(int iParam0, var uParam1)//Position - 0x1C54
{
	if (func_34(iParam0))
	{
		MISC::SET_BIT(uParam1, 15);
	}
	else if (func_33(iParam0))
	{
		MISC::SET_BIT(uParam1, 18);
	}
	else if (func_32(iParam0))
	{
		MISC::SET_BIT(uParam1, 19);
	}
}

int func_32(int iParam0)//Position - 0x1C95
{
	if ((((iParam0 == Global_262145.f_7242 || iParam0 == Global_262145.f_7243) || iParam0 == Global_262145.f_7244) || iParam0 == Global_262145.f_7245) || iParam0 == Global_262145.f_7246)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x1CEF
{
	if ((((iParam0 == Global_262145.f_7237 || iParam0 == Global_262145.f_7238) || iParam0 == Global_262145.f_7239) || iParam0 == Global_262145.f_7240) || iParam0 == Global_262145.f_7241)
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x1D49
{
	if ((((((iParam0 == Global_262145.f_7230 || iParam0 == Global_262145.f_7231) || iParam0 == Global_262145.f_7232) || iParam0 == Global_262145.f_7233) || iParam0 == Global_262145.f_7234) || iParam0 == Global_262145.f_7235) || iParam0 == Global_262145.f_7236)
	{
		return 1;
	}
	return 0;
}

bool func_35(int iParam0)//Position - 0x1DC3
{
	return MISC::IS_BIT_SET(Global_794503.f_4[iParam0 /*86*/].f_76, 3);
}

bool func_36(int iParam0)//Position - 0x1DDC
{
	return MISC::IS_BIT_SET(Global_794503.f_4[iParam0 /*86*/].f_76, 10);
}

bool func_37(int iParam0)//Position - 0x1DF6
{
	return MISC::IS_BIT_SET(Global_794503.f_4[iParam0 /*86*/].f_76, 7);
}

void func_38(int iParam0, var uParam1, var uParam2)//Position - 0x1E0F
{
	if (iParam0 == 1)
	{
		if (*uParam2 < 2)
		{
			*uParam2 = 2;
		}
	}
	else if (*uParam2 < 1)
	{
		*uParam2 = 1;
	}
	if (*uParam1 < *uParam2)
	{
		*uParam1 = *uParam2;
	}
}

int func_39(float fParam0, int iParam1)//Position - 0x1E45
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = SYSTEM::ROUND((fParam0 * 100f));
	if (iVar0 < 0)
	{
		iVar0 = -1;
	}
	return iVar0;
}

var func_40()//Position - 0x1E70
{
	return HUD::_GET_LABEL_TEXT("CREATOR_RSC");
}

Vector3 func_41(int iParam0)//Position - 0x1E7F
{
	struct<3> Var0;
	
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camp") == 3)
	{
		Var0.x = DATAFILE::DATADICT_GET_FLOAT(iParam0, "camp");
	}
	else if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camp") == 2)
	{
		Var0.x = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iParam0, "camp"));
	}
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camh") == 3)
	{
		Var0.f_2 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "camh");
	}
	else if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camh") == 2)
	{
		Var0.f_2 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_42(int iParam0, char* sParam1)//Position - 0x1EFD
{
	struct<3> Var0;
	int iVar3;
	
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 5)
	{
		Var0 = { DATAFILE::DATADICT_GET_VECTOR(iParam0, sParam1) };
	}
	else if (DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 6)
	{
		iVar3 = DATAFILE::DATADICT_GET_DICT(iParam0, sParam1);
		if (DATAFILE::DATADICT_GET_TYPE(iVar3, "x") == 2)
		{
			Var0.x = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iVar3, "x"));
		}
		else
		{
			Var0.x = DATAFILE::DATADICT_GET_FLOAT(iVar3, "x");
		}
		if (DATAFILE::DATADICT_GET_TYPE(iVar3, "y") == 2)
		{
			Var0.f_1 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iVar3, "y"));
		}
		else
		{
			Var0.f_1 = DATAFILE::DATADICT_GET_FLOAT(iVar3, "y");
		}
		if (DATAFILE::DATADICT_GET_TYPE(iVar3, "z") == 2)
		{
			Var0.f_2 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iVar3, "z"));
		}
		else
		{
			Var0.f_2 = DATAFILE::DATADICT_GET_FLOAT(iVar3, "z");
		}
	}
	return Var0;
}

int func_43(int iParam0)//Position - 0x1FC0
{
	if (NETWORK::_0x7FCC39C46C3C03BD(iParam0))
	{
		return 2;
	}
	else if (NETWORK::_0x1D610EB0FEA716D9(iParam0))
	{
		return 1;
	}
	return 1;
}

void func_44(int iParam0)//Position - 0x1FE6
{
	func_45(joaat("mpply_big_feed_init"), iParam0);
}

void func_45(int iParam0, var uParam1)//Position - 0x1FF9
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, uParam1, 1);
	}
}

void func_46(bool bParam0)//Position - 0x2015
{
	if (!func_47())
	{
		return;
	}
	if (bParam0)
	{
		func_9(joaat("mpply_unique_races"), 0);
		func_9(joaat("mpply_unique_dms"), 0);
		func_9(joaat("mpply_unique_paras"), 0);
		func_9(joaat("mpply_unique_survival"), 0);
		func_9(joaat("mpply_unique_ctf"), 0);
		func_9(joaat("mpply_unique_lts"), 0);
		func_9(joaat("mpply_unique_versus"), 0);
		func_9(joaat("mpply_unique_missions"), 0);
		func_9(joaat("mpply_unique_heist_planning"), 0);
		func_9(joaat("mpply_unique_heist_finale"), 0);
		func_9(joaat("mpply_available_races"), 0);
		func_9(joaat("mpply_available_dms"), 0);
		func_9(joaat("mpply_available_paras"), 0);
		func_9(joaat("mpply_available_survival"), 0);
		func_9(joaat("mpply_available_lts"), 0);
		func_9(joaat("mpply_available_ctf"), 0);
		func_9(joaat("mpply_available_versus"), 0);
		func_9(joaat("mpply_available_missions"), 0);
		func_9(joaat("mpply_available_heist_plan"), 0);
		func_9(joaat("mpply_available_heist_finale"), 0);
		func_9(joaat("mpply_unique_contact_0"), 0);
		func_9(joaat("mpply_unique_contact_1"), 0);
		func_9(joaat("mpply_unique_contact_2"), 0);
		func_9(joaat("mpply_unique_contact_3"), 0);
		func_9(joaat("mpply_unique_contact_4"), 0);
		func_9(joaat("mpply_unique_contact_5"), 0);
		func_9(joaat("mpply_unique_contact_6"), 0);
		func_9(joaat("mpply_total_contact_0"), 0);
		func_9(joaat("mpply_total_contact_1"), 0);
		func_9(joaat("mpply_total_contact_2"), 0);
		func_9(joaat("mpply_total_contact_3"), 0);
		func_9(joaat("mpply_total_contact_4"), 0);
		func_9(joaat("mpply_total_contact_5"), 0);
		func_9(joaat("mpply_total_contact_6"), 0);
	}
	else
	{
		func_9(joaat("mpply_unique_races_v"), 0);
		func_9(joaat("mpply_unique_dms_v"), 0);
		func_9(joaat("mpply_unique_paras_v"), 0);
		func_9(joaat("mpply_unique_survival_v"), 0);
		func_9(joaat("mpply_unique_ctf_v"), 0);
		func_9(joaat("mpply_unique_lts_v"), 0);
		func_9(joaat("mpply_unique_versus_v"), 0);
		func_9(joaat("mpply_unique_missions_v"), 0);
		func_9(joaat("mpply_unique_heist_planning_v"), 0);
		func_9(joaat("mpply_unique_heist_finale_v"), 0);
		func_9(joaat("mpply_available_races_v"), 0);
		func_9(joaat("mpply_available_dms_v"), 0);
		func_9(joaat("mpply_available_paras_v"), 0);
		func_9(joaat("mpply_available_survival_v"), 0);
		func_9(joaat("mpply_available_lts_v"), 0);
		func_9(joaat("mpply_available_ctf_v"), 0);
		func_9(joaat("mpply_available_versus_v"), 0);
		func_9(joaat("mpply_available_missions_v"), 0);
		func_9(joaat("mpply_available_heist_planv"), 0);
		func_9(joaat("mpply_available_heist_finale_v"), 0);
	}
}

int func_47()//Position - 0x224C
{
	if (func_49() && func_48(0))
	{
		return 1;
	}
	return 0;
}

var func_48(int iParam0)//Position - 0x226A
{
	return Global_1312369[iParam0];
}

var func_49()//Position - 0x227A
{
	return func_48(func_24() + 1);
}

void func_50()//Position - 0x228C
{
	int iVar0;
	
	Global_963585.f_598 = 0;
	iVar0 = 0;
	while (iVar0 <= 84)
	{
		Global_963585[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_963585.f_256[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_963585.f_512[iVar0] = 0f;
		iVar0++;
	}
}

int func_51(char* sParam0)//Position - 0x22D8
{
	if ((((((((((((((((MISC::ARE_STRINGS_EQUAL(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || MISC::ARE_STRINGS_EQUAL(sParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || MISC::ARE_STRINGS_EQUAL(sParam0, "Cdgvsa-E8katW71P6VWhQg")) || MISC::ARE_STRINGS_EQUAL(sParam0, "W3U0oyo5okGvED-f7CPzhg")) || MISC::ARE_STRINGS_EQUAL(sParam0, "7CpnaZYqMEKxxbW2rbp33A")) || MISC::ARE_STRINGS_EQUAL(sParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || MISC::ARE_STRINGS_EQUAL(sParam0, "hCC18F4SuU254v5vlgPRmA")) || MISC::ARE_STRINGS_EQUAL(sParam0, "tSm64WIuK0yqti6Po8oQCg")) || MISC::ARE_STRINGS_EQUAL(sParam0, "5mwusUtO5E6AVvnUrgFZcg")) || MISC::ARE_STRINGS_EQUAL(sParam0, "_dFdLIICm0OaNP3ewdkmqA")) || MISC::ARE_STRINGS_EQUAL(sParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || MISC::ARE_STRINGS_EQUAL(sParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || MISC::ARE_STRINGS_EQUAL(sParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || MISC::ARE_STRINGS_EQUAL(sParam0, "te4f3O-vVUOkF3YAbnzD2A")) || MISC::ARE_STRINGS_EQUAL(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || MISC::ARE_STRINGS_EQUAL(sParam0, "gYOgjaTS7EedRGFuBasioQ")) || MISC::ARE_STRINGS_EQUAL(sParam0, "OGuQ53X7G0qx-jteU3gBkg"))
	{
		return 1;
	}
	return 0;
}

char* func_52(int iParam0)//Position - 0x23ED
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

int func_53(int iParam0)//Position - 0x2441
{
	int iVar0;
	int iVar1;
	int iVar2[16];
	int iVar19;
	
	if (Global_262145.f_3738 == 1)
	{
		return 0;
	}
	if (Global_786484 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar19 = 0;
		iVar1 = 0;
		while (iVar1 < Global_786484)
		{
			if (iVar19 == 0)
			{
				if (Global_786484.f_3012[iVar1 /*11*/].f_1 == MISC::GET_HASH_KEY(&(Global_2394690[iVar0 /*6*/])))
				{
					iVar19 = 1;
					iVar2[iVar0] = iVar1;
				}
			}
			iVar1++;
		}
		if (iVar19 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		Global_794503.f_4[(1100 + iVar0) /*86*/] = { Global_786484.f_1[iVar2[iVar0] /*86*/] };
		Global_794503.f_96153[(1100 + iVar0) /*11*/] = { Global_786484.f_3012[iVar2[iVar0] /*11*/] };
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_1684076.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786484.f_3398[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	func_54(1);
	return 1;
}

void func_54(int iParam0)//Position - 0x257C
{
	Global_1684076.f_1784 = iParam0;
}

void func_55(bool bParam0, int iParam1)//Position - 0x258D
{
	bParam0->f_4 = iParam1;
}

void func_56()//Position - 0x259B
{
	struct<86> Var0;
	int iVar86;
	
	Var0.f_65 = -1;
	Var0.f_66 = -1;
	Var0.f_67 = 2;
	iVar86 = 1100;
	while (iVar86 <= 1117)
	{
		Global_794503.f_4[iVar86 /*86*/] = { Var0 };
		iVar86++;
	}
}

void func_57()//Position - 0x25E0
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
}

void func_58()//Position - 0x25F4
{
	if (func_64())
	{
		NETWORK::UGC_CLEAR_OFFLINE_QUERY();
	}
	else
	{
		NETWORK::UGC_CLEAR_QUERY_RESULTS();
	}
}

bool func_59()//Position - 0x260E
{
	return Global_2434575.f_4;
}

int func_60()//Position - 0x261C
{
	if (NETWORK::_0x9FEDF86898F100E9())
	{
		return 1;
	}
	else if (NETWORK::UGC_IS_GETTING())
	{
		return 1;
	}
	else if (NETWORK::_0x45E816772E93A9DB())
	{
		return 1;
	}
	return 0;
}

int func_61()//Position - 0x264C
{
	if (!func_62())
	{
		return 1;
	}
	return 0;
}

int func_62()//Position - 0x2661
{
	if (func_63())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_63()//Position - 0x2681
{
	return Global_2435308;
}

bool func_64()//Position - 0x268D
{
	return Global_1572867.f_4;
}

bool func_65()//Position - 0x269B
{
	return Global_2394628.f_2;
}

int func_66(bool bParam0, char* sParam1, char* sParam2)//Position - 0x26A9
{
	switch (bParam0->f_4)
	{
		case 0:
			*bParam0 = 0;
			if (func_60())
			{
				return 0;
			}
			func_58();
			func_57();
			if (func_64())
			{
				*bParam0 = 0;
				return 1;
			}
			else
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(0);
			}
			func_55(bParam0, 1);
			break;
		
		case 1:
			if (NETWORK::SET_BALANCE_ADD_MACHINE(sParam1, func_52(0)))
			{
				func_55(bParam0, 3);
			}
			break;
		
		case 3:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				bParam0->f_40 = NETWORK::UGC_GET_QUERY_RESULT();
				if (NETWORK::UGC_DID_GET_SUCCEED())
				{
				}
				else
				{
					func_178(bParam0, 1, 1);
					bParam0->f_40 = NETWORK::UGC_GET_QUERY_RESULT();
					*bParam0 = 0;
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					if (DATAFILE::DATAFILE_SELECT_UGC_DATA(0))
					{
						func_67(sParam2, 0);
						func_178(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_178(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_67(char* sParam0, int iParam1)//Position - 0x2791
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	iVar1 = DATAFILE::DATADICT_GET_DICT(iVar0, "mission");
	iVar2 = DATAFILE::DATADICT_GET_DICT(iVar1, "gen");
	StringCopy(sParam0, NETWORK::UGC_GET_CONTENT_ID(iParam1), 24);
	StringCopy(&(sParam0->f_6), NETWORK::UGC_GET_CONTENT_USER_ID(iParam1), 64);
	StringCopy(&(sParam0->f_22), NETWORK::UGC_GET_CONTENT_NAME(iParam1), 64);
	sParam0->f_56 = { func_42(iVar2, "start") };
	sParam0->f_59 = { func_42(iVar2, "cam") };
	sParam0->f_62 = { func_41(iVar2) };
	sParam0->f_65 = DATAFILE::DATADICT_GET_INT(iVar2, "type");
	sParam0->f_68 = DATAFILE::DATADICT_GET_INT(iVar2, "subtype");
	sParam0->f_78 = DATAFILE::DATADICT_GET_INT(iVar2, "testcomplete");
	sParam0->f_69 = DATAFILE::DATADICT_GET_INT(iVar2, "min");
	sParam0->f_70 = DATAFILE::DATADICT_GET_INT(iVar2, "rank");
	sParam0->f_71 = DATAFILE::DATADICT_GET_INT(iVar2, "num");
	sParam0->f_73 = func_39(NETWORK::UGC_GET_CONTENT_RATING(iParam1, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = DATAFILE::DATADICT_GET_INT(iVar2, "charcon");
	if (func_68() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4709)
		{
			sParam0->f_71 = Global_262145.f_4709;
		}
		if (sParam0->f_69 > Global_262145.f_4709)
		{
			sParam0->f_69 = Global_262145.f_4709;
		}
	}
	if (!func_64())
	{
		iVar3 = NETWORK::UGC_GET_CONTENT_LANGUAGE(iParam1);
		if (NETWORK::UGC_IS_LANGUAGE_SUPPORTED(iVar3))
		{
			sParam0->f_54 = NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar2, "ltm") == 2)
	{
		sParam0->f_77 = DATAFILE::DATADICT_GET_INT(iVar2, "ltm");
	}
	MISC::SET_BIT(&(sParam0->f_76), 13);
	func_57();
}

int func_68()//Position - 0x2904
{
	return Global_24444;
}

bool func_69()//Position - 0x290F
{
	return Global_2394628.f_1;
}

void func_70()//Position - 0x291D
{
	struct<62> Var0;
	
	Var0.f_4.f_1 = -1;
	Var0.f_4.f_2 = -1;
	Var0.f_4.f_9 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Global_2394628 = { Var0 };
	StringCopy(&(Global_2394628.f_30), "", 64);
	StringCopy(&(Global_2394628.f_46), "", 64);
	StringCopy(&(Global_2394628.f_15), "", 32);
}

void func_71()//Position - 0x2980
{
	Global_2434575.f_8 = 0;
	Global_2434575.f_7 = 0;
}

int func_72(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13)//Position - 0x2996
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		MISC::SET_BIT(uParam2, 3);
		if (!MISC::IS_BIT_SET(*uParam2, 2))
		{
		}
		MISC::SET_BIT(uParam2, 2);
		return 1;
	}
	if ((func_175() && func_174()) || func_173())
	{
		if (!MISC::IS_BIT_SET(*uParam2, 2))
		{
		}
		MISC::SET_BIT(uParam2, 2);
		MISC::SET_BIT(uParam2, 1);
		MISC::SET_BIT(uParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!MISC::IS_BIT_SET(*uParam2, 3))
		{
			MISC::SET_BIT(uParam2, 3);
		}
		return 1;
	}
	if (bParam4)
	{
		if (!func_172())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (func_171())
		{
			if (MISC::IS_BIT_SET(*uParam2, 2))
			{
				MISC::SET_BIT(uParam2, 3);
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam6)
	{
		if (func_59())
		{
			return 0;
		}
	}
	if (!MISC::IS_BIT_SET(*uParam2, 2))
	{
		if (!MISC::IS_BIT_SET(*uParam2, 1))
		{
			if (!bParam12)
			{
				func_163(1, 1, bParam11);
			}
			MISC::SET_BIT(uParam2, 1);
			func_178(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_84(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, iParam13))
		{
			if (((func_83() || Global_1602437 == 31) || Global_1602437 == 6) || Global_1602437 == 4)
			{
				if (Global_1602437.f_18 < 1)
				{
					Global_1602437.f_18 = 1;
				}
				if (Global_1602437.f_17 < 1)
				{
					Global_1602437.f_17 = 1;
				}
			}
			else if (Global_1602437 == 1)
			{
				Global_1335674.f_4 = 99;
				Global_1335674.f_6 = Global_1602437.f_39;
				Global_1335674.f_7 = Global_1602437.f_32189;
				Global_1335674.f_9 = Global_1602437.f_26304;
				Global_1335674.f_11 = Global_1602437.f_40;
				Global_1335674.f_12 = Global_1602437.f_42;
				Global_1335674.f_13 = Global_1602437.f_44;
				Global_1335674.f_14 = Global_1602437.f_43;
				Global_1335674.f_16 = Global_1602437.f_15;
				Global_1335674.f_5 = Global_1602437.f_37;
				Global_1335674.f_10 = Global_1602437.f_50;
			}
			else if (func_82())
			{
				Global_2476470.f_7 = 9901;
				Global_2476470.f_8 = Global_1602437.f_25919 + 1;
				if (func_81(Global_1602437.f_22502))
				{
					Global_1602437.f_22502 = { Global_1602437.f_54 };
				}
			}
			MISC::SET_BIT(uParam2, 2);
			MISC::CLEAR_BIT(uParam2, 1);
			MISC::SET_BIT(uParam2, 3);
			if (*uParam0)
			{
				func_80();
				func_79();
				if (func_78())
				{
					func_75(Global_1602437.f_13);
				}
				Global_1602437.f_57336 = 1;
			}
			else
			{
				func_176();
			}
			if (!func_74())
			{
				func_73();
			}
			return 1;
		}
		else
		{
			uParam0->f_15 = 1;
		}
	}
	else
	{
		MISC::SET_BIT(uParam2, 3);
		if (Global_1602437.f_57336)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_73()//Position - 0x2C82
{
	Global_2428131.f_26.f_49 = 1;
}

int func_74()//Position - 0x2C93
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1602437.f_56986[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_75(int iParam0)//Position - 0x2CCA
{
	if (!func_77())
	{
		NETWORK::_0x4811BBAC21C5FCD5(2);
		NETWORK::_0x5539C3EBF104A53A(1);
		if (iParam0 == 0)
		{
			iParam0 = 32;
		}
		NETWORK::_0x702BC4D605522539((iParam0 / 2));
		func_76();
	}
}

void func_76()//Position - 0x2CFA
{
	MISC::SET_BIT(&(Global_2428131.f_2), 3);
}

bool func_77()//Position - 0x2D0D
{
	return MISC::IS_BIT_SET(Global_2428131.f_2, 3);
}

bool func_78()//Position - 0x2D20
{
	return MISC::IS_BIT_SET(Global_2428891.f_1.f_2807, 8);
}

void func_79()//Position - 0x2D37
{
	MISC::SET_BIT(&Global_2428131, 4);
}

void func_80()//Position - 0x2D48
{
	MISC::SET_BIT(&Global_2428131, 28);
}

int func_81(struct<3> Param0)//Position - 0x2D5A
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_82()//Position - 0x2D84
{
	if (Global_1602437 == 2 || Global_1602437 == 8)
	{
		return 1;
	}
	return 0;
}

int func_83()//Position - 0x2DA7
{
	if ((((((Global_1602437 == 0 || Global_1602437 == 4) || Global_1602437 == 6) || Global_1602437 == 3) || Global_1602437 == 31) || Global_1602437.f_1 == 6) || Global_1602437.f_1 == 5)
	{
		return 1;
	}
	return 0;
}

int func_84(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, var uParam14)//Position - 0x2E0A
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<16> Var17;
	int iVar33;
	
	if (uParam0->f_26 == 0)
	{
		if (func_59() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!func_64() || (iParam2 != 0 && iParam2 != 1))
	{
		if (func_61())
		{
			*uParam0 = 0;
			return 1;
		}
	}
	switch (uParam0->f_4)
	{
		case 0:
			*uParam0 = 0;
			uParam0->f_1 = 0;
			uParam0->f_28 = 0;
			uParam0->f_24 = func_162(1);
			uParam0->f_25 = func_160(1);
			if (func_60())
			{
				return 0;
			}
			func_58();
			func_57();
			if (func_64() || bParam9)
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(1);
			}
			else
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(0);
			}
			func_158();
			if (bParam4)
			{
				func_55(uParam0, 11);
			}
			else
			{
				func_55(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_64() || bParam9)
			{
				if (DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(sParam1))
				{
					if (iParam2 == 0)
					{
						Global_1602437.f_57339 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_1602437.f_56980), sParam1, 24);
						}
						func_120(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_55(uParam0, 9);
						*uParam0 = 1;
						func_71();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_965455.f_34), sParam1, 24);
							Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_19 = { Global_965455.f_12 };
							func_119(&iVar1, &uVar0, &Global_965455);
							if (Global_965455.f_57 == 0)
							{
								func_178(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_57();
								func_71();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_964222.f_34), sParam1, 24);
							Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_19 = { Global_964222.f_12 };
							func_119(&iVar1, &uVar0, &Global_964222);
							uParam0->f_8 = 0;
							if (Global_964222.f_57 == 0)
							{
								func_178(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_57();
								func_71();
								return 1;
							}
						}
						func_57();
						NETWORK::UGC_CLEAR_OFFLINE_QUERY();
						NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(1);
						func_118(uParam0);
						func_55(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						func_71();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					func_71();
					func_57();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = NETWORK::UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(func_52(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				DATAFILE::DATAFILE_WATCH_REQUEST_ID(uParam0->f_5);
				func_55(uParam0, 4);
			}
			else if (bParam10)
			{
				if (NETWORK::UGC_QUERY_BY_CONTENT_ID(sParam1, 1, func_52(iParam2)))
				{
					func_55(uParam0, 3);
				}
			}
			else if (NETWORK::SET_BALANCE_ADD_MACHINE(sParam1, func_52(iParam2)))
			{
				func_55(uParam0, 3);
			}
			break;
		
		case 3:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				uParam0->f_40 = NETWORK::UGC_GET_QUERY_RESULT();
				if (NETWORK::UGC_DID_GET_SUCCEED())
				{
				}
				else
				{
					func_178(uParam0, 1, 1);
					uParam0->f_40 = NETWORK::UGC_GET_QUERY_RESULT();
					*uParam0 = 0;
					func_71();
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					if (!bParam12 && !func_116(uParam0->f_24, uParam0->f_25, NETWORK::UGC_GET_CONTENT_USER_ID(0), NETWORK::UGC_GET_CONTENT_CATEGORY(0)))
					{
						func_178(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_71();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = NETWORK::UGC_REQUEST_CONTENT_DATA_FROM_INDEX(0, 0);
						DATAFILE::DATAFILE_WATCH_REQUEST_ID(uParam0->f_5);
						func_55(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (DATAFILE::DATAFILE_SELECT_UGC_DATA(0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_965455.f_12), NETWORK::UGC_GET_CONTENT_NAME(0), 32);
								StringCopy(&(Global_965455.f_28), NETWORK::UGC_GET_CONTENT_ID(0), 24);
								StringCopy(&(Global_965455.f_34), sParam1, 24);
								Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_19 = { Global_965455.f_12 };
								func_119(&iVar1, &uVar0, &Global_965455);
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_964222.f_12), NETWORK::UGC_GET_CONTENT_NAME(0), 32);
								StringCopy(&(Global_964222.f_28), NETWORK::UGC_GET_CONTENT_ID(0), 24);
								StringCopy(&(Global_964222.f_34), sParam1, 24);
								Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_19 = { Global_964222.f_12 };
								func_119(&iVar1, &uVar0, &Global_964222);
								uParam0->f_8 = 0;
							}
							func_57();
							func_55(uParam0, 10);
						}
						else
						{
							func_178(uParam0, 1, 1);
							*uParam0 = 0;
							func_71();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (DATAFILE::DATAFILE_SELECT_UGC_DATA(0))
						{
							if (uParam0->f_16)
							{
								func_114(&iVar1, &uVar0, &Global_965455, iParam6);
								if (iParam6 == 1)
								{
									func_178(uParam0, 1, 1);
									*uParam0 = 1;
									func_71();
									return 1;
								}
								StringCopy(&(Global_965455.f_12), NETWORK::UGC_GET_CONTENT_NAME(0), 32);
								StringCopy(&(Global_965455.f_28), NETWORK::UGC_GET_CONTENT_ID(0), 24);
								StringCopy(&(Global_965455.f_34), sParam1, 24);
								Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_19 = { Global_965455.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_114(&iVar1, &uVar0, &Global_964222, iParam6);
								if (iParam6 == 1)
								{
									func_178(uParam0, 1, 1);
									*uParam0 = 1;
									func_71();
									return 1;
								}
								StringCopy(&(Global_964222.f_12), NETWORK::UGC_GET_CONTENT_NAME(0), 32);
								StringCopy(&(Global_964222.f_28), NETWORK::UGC_GET_CONTENT_ID(0), 24);
								StringCopy(&(Global_964222.f_34), sParam1, 24);
								Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_19 = { Global_964222.f_12 };
								uParam0->f_8 = 0;
							}
							func_57();
							func_55(uParam0, 10);
						}
						else
						{
							func_178(uParam0, 1, 1);
							*uParam0 = 0;
							func_71();
							return 1;
						}
					}
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					func_71();
					return 1;
				}
			}
			break;
		
		case 4:
			if (NETWORK::CLOUD_HAS_REQUEST_COMPLETED(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					HUD::BUSYSPINNER_OFF();
				}
				if (NETWORK::CLOUD_DID_REQUEST_SUCCEED(uParam0->f_5))
				{
					func_55(uParam0, 6);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_55(uParam0, 0);
					return 0;
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					func_71();
					return 1;
				}
			}
			else if (func_113() || func_112() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("FMMC_DOWNLOAD");
					HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(5);
				}
			}
			break;
		
		case 6:
			if (bParam13 && !func_111())
			{
				return 0;
			}
			if (DATAFILE::DATAFILE_HAS_LOADED_FILE_DATA(uParam0->f_5))
			{
				if (DATAFILE::DATAFILE_SELECT_ACTIVE_FILE(uParam0->f_5))
				{
					if (bParam3)
					{
						if (bParam13)
						{
							func_163(1, 1, bParam11);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_1602437.f_57339 = 1;
							Global_1602437.f_57332 = 1;
							StringCopy(&(Global_1602437.f_56669), "", 64);
							StringCopy(&(Global_1602437.f_56716), "", 24);
							StringCopy(&(Global_1602437.f_56694), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_1602437.f_56980), sParam1, 24);
							}
							uParam0->f_34 = uParam0->f_22;
						}
						else
						{
							Global_1602437.f_56693 = MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(0));
							if (Global_1602437.f_57339 == 1 || Global_1602437.f_57339 == 2)
							{
								StringCopy(&(Global_1602437.f_56694), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_1602437.f_56694), NETWORK::UGC_GET_CONTENT_USER_ID(0), 24);
							}
							StringCopy(&(Global_1602437.f_56716), NETWORK::UGC_GET_CONTENT_USER_ID(0), 24);
							Global_1602437.f_57339 = NETWORK::UGC_GET_CONTENT_CATEGORY(0);
							if ((Global_1602437.f_57339 == 0 || Global_1602437.f_57339 == 3) && NETWORK::_0x8C8D2739BA44AF0F(0))
							{
								StringCopy(&(Global_1602437.f_56669), PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
							}
							else if ((MISC::IS_DURANGO_VERSION() && (Global_1602437.f_57339 == 0 || Global_1602437.f_57339 == 3)) && func_110(&iVar33, &(Global_1602437.f_56716)))
							{
								StringCopy(&(Global_1602437.f_56669), PLAYER::GET_PLAYER_NAME(iVar33), 64);
							}
							else
							{
								StringCopy(&(Global_1602437.f_56669), NETWORK::UGC_GET_CONTENT_USER_NAME(0), 64);
							}
							Global_1602437.f_57000 = NETWORK::UGC_GET_CONTENT_RATING_COUNT(0, 0);
							Global_1602437.f_57334 = NETWORK::_0xAEAB987727C5A8A4(0);
							uParam0->f_23 = func_43(0);
							Global_1602437.f_69943 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_1602437.f_56980), NETWORK::UGC_GET_CONTENT_ID(0), 24);
							}
							if (Global_1602437.f_57339 == 0 || Global_1602437.f_57339 == 3)
							{
								if ((NETWORK::_0x584770794D758C18(0, &uVar4) && NETWORK::NETWORK_IS_HANDLE_VALID(&uVar4, 13)) && NETWORK::NETWORK_IS_FRIEND(&uVar4))
								{
									Var17 = { Global_1602437.f_56669 };
									func_109(1, Var17);
								}
								else
								{
									func_109(0, Var17);
								}
							}
							else
							{
								func_109(0, Var17);
							}
							Global_1602437.f_6 = func_39(NETWORK::UGC_GET_CONTENT_RATING(0, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(0, 0));
							if (NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(uParam0->f_7))
							{
								Global_1602437.f_57333 = NETWORK::UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(0);
								Global_1602437.f_57335 = 1;
							}
							else
							{
								Global_1602437.f_57333 = 0;
								Global_1602437.f_57335 = 0;
							}
							Global_1602437.f_57332 = NETWORK::UGC_GET_CONTENT_IS_PUBLISHED(0);
							uParam0->f_34 = NETWORK::UGC_GET_CONTENT_LANGUAGE(0);
							if (!func_64())
							{
								if (NETWORK::UGC_IS_LANGUAGE_SUPPORTED(uParam0->f_34))
								{
									uParam0->f_30 = NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(0);
								}
								else
								{
									uParam0->f_30 = -1;
								}
							}
							Global_1602437.f_56999 = uParam0->f_30;
							Global_2428891.f_3957.f_3 = NETWORK::UGC_GET_CONTENT_RATING_NEGATIVE_COUNT(0, 0);
							Global_2428891.f_3957.f_2 = NETWORK::UGC_GET_CONTENT_RATING_POSITIVE_COUNT(0, 0);
							if (Global_1602437.f_57339 == 1 || Global_1602437.f_57339 == 2)
							{
								StringCopy(&(Global_1602437.f_56669), func_40(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_1602437.f_56980), sParam1, 24);
						}
						uParam0->f_31 = 0;
						if (!func_64())
						{
							func_120(uParam0->f_34, bParam11, (bParam13 || uParam14), uParam0->f_31);
							if (bParam13 || uParam14)
							{
								func_55(uParam0, 5);
								return 0;
							}
						}
						else
						{
							func_120(-1, bParam11, 0, 0);
						}
						if (func_106(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						iVar1 = DATAFILE::DATAFILE_GET_FILE_DICT();
						iVar2 = DATAFILE::DATADICT_GET_DICT(iVar1, "mission");
						iVar3 = DATAFILE::DATADICT_GET_DICT(iVar2, "gen");
						StringCopy(&(Global_2422140.f_3042), NETWORK::UGC_GET_CONTENT_NAME(0), 32);
						Global_2422140.f_3042.f_8 = DATAFILE::DATADICT_GET_INT(iVar3, "type");
						uParam0->f_17 = NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(0);
						*uParam0 = 1;
						func_71();
						DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(uParam0->f_5);
						func_57();
						return 1;
					}
					DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(uParam0->f_5);
					func_57();
				}
				else if (iParam2 == 0)
				{
					func_178(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_71();
					return 1;
				}
				else
				{
					uParam0->f_8++;
					if (uParam0->f_8 > 1000)
					{
						func_178(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_71();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			func_120(uParam0->f_34, bParam11, (bParam13 || uParam14), uParam0->f_31);
			if (uParam0->f_31 >= 6)
			{
				if (func_106(uParam0, iParam2, (bParam13 || uParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_31++;
			break;
		
		case 9:
			if (func_104(uParam0, 0, bParam3, 0))
			{
				func_55(uParam0, 0);
				func_57();
				if ((((func_98(Global_1602437.f_56693) && func_83()) && !bParam9) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1602437.f_56986[0 /*6*/]))) && (func_113() || (func_93() && !func_92())))
				{
					uParam0->f_8 = 0;
					func_55(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = func_43(0);
						uParam0->f_21 = NETWORK::UGC_GET_CONTENT_FILE_VERSION(0, uParam0->f_23);
					}
					func_91(&(uParam0->f_41), 0);
					func_55(uParam0, 18);
				}
				else
				{
					uParam0->f_41.f_3 = 1;
					func_178(uParam0, 1, 0);
					func_71();
					return 1;
				}
			}
			break;
		
		case 19:
			if (NETWORK::UGC_QUERY_BY_CONTENT_ID(&(Global_1602437.f_56986[0 /*6*/]), 1, func_52(iParam2)))
			{
				func_55(uParam0, 21);
			}
			break;
		
		case 21:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				uParam0->f_40 = NETWORK::UGC_GET_QUERY_RESULT();
				if (NETWORK::UGC_DID_GET_SUCCEED())
				{
				}
				else
				{
					func_178(uParam0, 1, 1);
					uParam0->f_40 = NETWORK::UGC_GET_QUERY_RESULT();
					*uParam0 = 0;
					func_71();
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					uParam0->f_5 = NETWORK::UGC_REQUEST_CONTENT_DATA_FROM_INDEX(0, 0);
					DATAFILE::DATAFILE_WATCH_REQUEST_ID(uParam0->f_5);
					func_55(uParam0, 22);
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					func_71();
					return 1;
				}
			}
			break;
		
		case 22:
			if (NETWORK::CLOUD_HAS_REQUEST_COMPLETED(uParam0->f_5))
			{
				if (NETWORK::CLOUD_DID_REQUEST_SUCCEED(uParam0->f_5))
				{
					func_55(uParam0, 23);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_55(uParam0, 0);
					return 0;
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					func_71();
					return 1;
				}
			}
			break;
		
		case 23:
			if (DATAFILE::DATAFILE_HAS_LOADED_FILE_DATA(uParam0->f_5))
			{
				if (DATAFILE::DATAFILE_SELECT_ACTIVE_FILE(uParam0->f_5))
				{
					func_88();
					func_178(uParam0, 1, 0);
					Global_1601192 = 1;
					func_71();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_178(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_71();
					return 1;
				}
			}
			break;
		
		case 18:
			if (MISC::IS_BIT_SET(Global_1602437.f_5, 0))
			{
				if (bParam7)
				{
					if (func_87(&(uParam0->f_41), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_178(uParam0, 1, 0);
						uParam0->f_41.f_3 = 1;
						uParam0->f_41.f_1 = 0;
						func_71();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_41.f_4), sParam1, 64);
					uParam0->f_41.f_3 = 1;
					func_178(uParam0, 1, 0);
					func_71();
					return 1;
				}
			}
			else
			{
				uParam0->f_41.f_3 = 1;
				func_178(uParam0, 1, 1);
				func_71();
				return 1;
			}
			break;
		
		case 10:
			if (func_104(uParam0, 0, bParam3, iParam2))
			{
				func_57();
				func_55(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (NETWORK::SET_BALANCE_ADD_MACHINES(&(Global_965455.f_1136), Global_965455.f_57, func_52(0)))
				{
					func_55(uParam0, 12);
				}
			}
			else if (NETWORK::SET_BALANCE_ADD_MACHINES(&(Global_964222.f_1136), Global_964222.f_57, func_52(0)))
			{
				func_55(uParam0, 12);
			}
			break;
		
		case 12:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				if (NETWORK::UGC_DID_GET_SUCCEED())
				{
				}
				else
				{
					func_178(uParam0, 1, 1);
					uParam0->f_40 = NETWORK::UGC_GET_QUERY_RESULT();
					*uParam0 = 0;
					func_71();
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					if (uParam0->f_16)
					{
						Global_965455.f_57 = NETWORK::UGC_GET_CONTENT_NUM();
					}
					else
					{
						Global_964222.f_57 = NETWORK::UGC_GET_CONTENT_NUM();
					}
					uParam0->f_8 = 0;
					func_178(uParam0, 0, bParam8);
					func_118(uParam0);
					func_55(uParam0, 13);
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					func_71();
					return 1;
				}
			}
			break;
		
		case 13:
			if (func_64())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_965455.f_57 - 1))
					{
						if (DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(&(Global_965455.f_1136[uParam0->f_9 /*6*/])))
						{
							func_86(uParam0, &Global_965455);
							NETWORK::UGC_CLEAR_OFFLINE_QUERY();
						}
						uParam0->f_9++;
					}
					func_71();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_964222.f_57 - 1))
					{
						if (DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(&(Global_964222.f_1136[uParam0->f_9 /*6*/])))
						{
							func_86(uParam0, &Global_964222);
							NETWORK::UGC_CLEAR_OFFLINE_QUERY();
						}
						uParam0->f_9++;
					}
					func_71();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (func_85(uParam0, &Global_965455))
				{
					if (uParam0->f_27)
					{
						func_178(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_71();
						return 1;
					}
					else
					{
						func_55(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (func_85(uParam0, &Global_964222))
			{
				if (uParam0->f_27)
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					func_71();
					return 1;
				}
				else
				{
					func_55(uParam0, 17);
					*uParam0 = 1;
				}
			}
			break;
		
		case 17:
			func_55(uParam0, 0);
			func_57();
			func_178(uParam0, 1, bParam8);
			*uParam0 = 1;
			func_71();
			return 1;
			break;
	}
	return 0;
}

int func_85(var uParam0, var uParam1)//Position - 0x3E58
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_57 - 1))
	{
		if (DATAFILE::DATAFILE_SELECT_UGC_DATA(uParam0->f_7))
		{
			if (!func_116(uParam0->f_24, uParam0->f_25, NETWORK::UGC_GET_CONTENT_USER_ID(0), NETWORK::UGC_GET_CONTENT_CATEGORY(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			func_86(uParam0, uParam1);
			uParam0->f_9++;
		}
		else
		{
			uParam0->f_8++;
		}
		if (uParam0->f_8 > 200)
		{
			func_57();
			uParam0->f_7++;
			uParam0->f_8 = 0;
		}
		if (uParam0->f_9 >= 31)
		{
			return 1;
		}
		if (uParam0->f_7 >= uParam1->f_57)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_86(var uParam0, var uParam1)//Position - 0x3EFD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	iVar1 = DATAFILE::DATADICT_GET_DICT(iVar0, "mission");
	iVar2 = DATAFILE::DATADICT_GET_DICT(iVar1, "gen");
	uParam1->f_63[uParam0->f_9 /*67*/].f_45 = { func_42(iVar2, "start") };
	if (func_64())
	{
		StringCopy(&(uParam1->f_63[uParam0->f_9 /*67*/].f_12), DATAFILE::DATADICT_GET_STRING(iVar2, "nm"), 64);
	}
	else
	{
		StringCopy(&(uParam1->f_63[uParam0->f_9 /*67*/].f_12), NETWORK::UGC_GET_CONTENT_NAME(uParam0->f_7), 64);
	}
	if (!func_64())
	{
		uParam1->f_63[uParam0->f_9 /*67*/].f_44 = NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(uParam0->f_7);
	}
	uParam1->f_63[uParam0->f_9 /*67*/].f_66 = NETWORK::UGC_GET_CONTENT_CATEGORY(uParam0->f_7);
	uParam1->f_63[uParam0->f_9 /*67*/].f_56 = DATAFILE::DATADICT_GET_INT(iVar2, "min");
	uParam1->f_63[uParam0->f_9 /*67*/].f_59 = DATAFILE::DATADICT_GET_INT(iVar2, "tnum");
	uParam1->f_63[uParam0->f_9 /*67*/].f_60 = DATAFILE::DATADICT_GET_INT(iVar2, "num");
	uParam1->f_63[uParam0->f_9 /*67*/].f_54 = DATAFILE::DATADICT_GET_INT(iVar2, "type");
	uParam1->f_63[uParam0->f_9 /*67*/].f_55 = DATAFILE::DATADICT_GET_INT(iVar2, "subtype");
	uParam1->f_63[uParam0->f_9 /*67*/].f_48 = { func_42(iVar2, "cam") };
	uParam1->f_63[uParam0->f_9 /*67*/].f_51 = { func_41(iVar2) };
	uParam1->f_63[uParam0->f_9 /*67*/].f_57 = func_43(uParam0->f_7);
	StringCopy(&(uParam1->f_63[uParam0->f_9 /*67*/].f_6), NETWORK::UGC_GET_CONTENT_USER_NAME(uParam0->f_7), 24);
	if (!func_64())
	{
		uParam1->f_63[uParam0->f_9 /*67*/].f_61 = func_39(NETWORK::UGC_GET_CONTENT_RATING(uParam0->f_7, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(uParam0->f_7, 0));
	}
	if (func_68() != 2)
	{
		if (uParam1->f_63[uParam0->f_9 /*67*/].f_60 > Global_262145.f_4709)
		{
			uParam1->f_63[uParam0->f_9 /*67*/].f_60 = Global_262145.f_4709;
		}
		if (uParam1->f_63[uParam0->f_9 /*67*/].f_56 > Global_262145.f_4709)
		{
			uParam1->f_63[uParam0->f_9 /*67*/].f_56 = Global_262145.f_4709;
		}
	}
	uParam1->f_63[uParam0->f_9 /*67*/].f_58 = DATAFILE::DATADICT_GET_INT(iVar2, "rank");
	func_38(uParam1->f_63[uParam0->f_9 /*67*/].f_54, &(uParam1->f_63[uParam0->f_9 /*67*/].f_60), &(uParam1->f_63[uParam0->f_9 /*67*/].f_56));
	if (uParam1->f_6 < uParam1->f_63[uParam0->f_9 /*67*/].f_56)
	{
		uParam1->f_6 = uParam1->f_63[uParam0->f_9 /*67*/].f_56;
	}
	if (uParam1->f_7 > uParam1->f_63[uParam0->f_9 /*67*/].f_60 || uParam1->f_7 == 0)
	{
		uParam1->f_7 = uParam1->f_63[uParam0->f_9 /*67*/].f_60;
	}
	uParam1->f_63[uParam0->f_9 /*67*/].f_65 = 1;
	MISC::SET_BIT(&(uParam1->f_63[uParam0->f_9 /*67*/].f_64), 13);
	StringCopy(&(uParam1->f_63[uParam0->f_9 /*67*/]), NETWORK::UGC_GET_CONTENT_ID(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
	if (!func_64())
	{
		StringCopy(&(uParam1->f_1136[uParam0->f_9 /*6*/]), NETWORK::UGC_GET_CONTENT_ID(uParam0->f_9), 24);
		if (NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(uParam0->f_9))
		{
			MISC::SET_BIT(&(uParam1->f_63[uParam0->f_9 /*67*/].f_64), 14);
			if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
			{
				DATAFILE::DATAFILE_DELETE();
			}
		}
	}
}

int func_87(var uParam0, char* sParam1, var uParam2, var uParam3)//Position - 0x4206
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
			}
			GRAPHICS::FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO();
			uParam0->f_1 = 1;
			break;
		
		case 1:
			if (GRAPHICS::LOAD_MISSION_CREATOR_PHOTO(sParam1, uParam3, uParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			switch (GRAPHICS::GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO(NETWORK::UGC_GET_CONTENT_PATH(0, uParam3)))
			{
				case 1:
					return 0;
				
				case 0:
					uParam0->f_3 = 1;
					return 1;
				
				case 2:
					uParam0->f_2++;
					if (uParam0->f_2 > 200)
					{
						if (*uParam0 != 0)
						{
							NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
							*uParam0 = 0;
						}
						uParam0->f_3 = 0;
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_88()//Position - 0x42BD
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
	char cVar16[16];
	var uVar20[4];
	var uVar25[4];
	var uVar30[4];
	var uVar35[4];
	var uVar40[4];
	var uVar45[4];
	var uVar50[4];
	var uVar55[4];
	var uVar60[4];
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
	int iVar80;
	int iVar81;
	int iVar82[8];
	int iVar91;
	int iVar92[8];
	struct<11> Var101;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	struct<3> Var194;
	
	iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	iVar1 = DATAFILE::DATADICT_GET_DICT(iVar0, "mission");
	iVar2 = DATAFILE::DATADICT_GET_DICT(iVar1, "endcon");
	iVar3 = DATAFILE::DATADICT_GET_DICT(iVar1, "ene");
	iVar4 = DATAFILE::DATADICT_GET_INT(iVar3, "no");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "loc");
	iVar6 = DATAFILE::DATADICT_GET_DICT(iVar1, "goto");
	iVar7 = DATAFILE::DATADICT_GET_INT(iVar6, "no");
	iVar8 = DATAFILE::DATADICT_GET_DICT(iVar1, "veh");
	iVar9 = DATAFILE::DATADICT_GET_INT(iVar8, "no");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar8, "loc");
	iVar11 = DATAFILE::DATADICT_GET_DICT(iVar1, "obj");
	iVar12 = DATAFILE::DATADICT_GET_INT(iVar11, "no");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar11, "loc");
	iVar14 = 0;
	while (iVar14 <= (Global_1602437.f_18 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1601192.f_1[iVar14] = DATAFILE::DATAARRAY_GET_INT(DATAFILE::DATADICT_GET_ARRAY(iVar2, "nrl"), iVar14);
			StringCopy(&cVar16, "txt", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar20[iVar14] = DATAFILE::DATADICT_GET_ARRAY(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar25[iVar14] = DATAFILE::DATADICT_GET_ARRAY(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs2", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar30[iVar14] = DATAFILE::DATADICT_GET_ARRAY(iVar2, &cVar16);
			iVar15 = 0;
			while (iVar15 <= (Global_1601192.f_1[iVar14] - 1))
			{
				Global_1601192.f_6[iVar14 /*18*/][iVar15] = DATAFILE::DATAARRAY_GET_INT(uVar25[iVar14], iVar15);
				Global_1601192.f_79[iVar14 /*18*/][iVar15] = DATAFILE::DATAARRAY_GET_INT(uVar30[iVar14], iVar15);
				if (uVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1601192.f_152[iVar14 /*273*/][iVar15 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(uVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1601192.f_152[iVar14 /*273*/][iVar15 /*16*/]), "", 64);
				}
				iVar15++;
			}
		}
		iVar14++;
	}
	Var101 = 8;
	Var101.f_1 = 10;
	Var101.f_1.f_11 = 10;
	Var101.f_1.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	iVar80 = 0;
	while (iVar80 <= (Global_1602437.f_18 - 1))
	{
		iVar91 = 0;
		iVar81 = 0;
		iVar190 = 0;
		iVar192 = 0;
		iVar14 = 0;
		while (iVar14 < 8)
		{
			iVar92[iVar14] = -1;
			iVar82[iVar14] = 0;
			iVar191 = 0;
			while (iVar191 < 10)
			{
				Var101[iVar14 /*11*/][iVar191] = 0;
				iVar191++;
			}
			iVar14++;
		}
		iVar14 = 0;
		while (iVar14 < Global_1601192.f_1[iVar80])
		{
			if ((!MISC::IS_BIT_SET(Global_1601192.f_6[iVar80 /*18*/][iVar14], 11) && !MISC::IS_BIT_SET(Global_1601192.f_79[iVar80 /*18*/][iVar14], 21)) && iVar81 < 8)
			{
				iVar92[iVar81] = iVar14;
				iVar81++;
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar60[iVar80] = DATAFILE::DATADICT_GET_ARRAY(iVar8, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar65[iVar80] = DATAFILE::DATADICT_GET_ARRAY(iVar8, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar9)
		{
			iVar15 = DATAFILE::DATAARRAY_GET_INT(uVar60[iVar80], iVar14);
			iVar193 = DATAFILE::DATAARRAY_GET_INT(uVar65[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !MISC::IS_BIT_SET(Global_1601192.f_6[iVar80 /*18*/][iVar193], 11)) && !MISC::IS_BIT_SET(Global_1601192.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_90(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1686009.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar10, iVar14) };
					Global_1686009.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1686009.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_89(iVar15, 1) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar70[iVar80] = DATAFILE::DATADICT_GET_ARRAY(iVar11, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar75[iVar80] = DATAFILE::DATADICT_GET_ARRAY(iVar11, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			iVar15 = DATAFILE::DATAARRAY_GET_INT(uVar70[iVar80], iVar14);
			iVar193 = DATAFILE::DATAARRAY_GET_INT(uVar75[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !MISC::IS_BIT_SET(Global_1601192.f_6[iVar80 /*18*/][iVar193], 11)) && !MISC::IS_BIT_SET(Global_1601192.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_90(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1686009.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar13, iVar14) };
					Global_1686009.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1686009.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_89(iVar15, 3) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rl", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar45[iVar80] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar50[iVar80] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar16);
		StringCopy(&cVar16, "loc", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar55[iVar80] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar7)
		{
			iVar193 = DATAFILE::DATAARRAY_GET_INT(uVar50[iVar80], iVar14);
			iVar15 = DATAFILE::DATAARRAY_GET_INT(uVar45[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !MISC::IS_BIT_SET(Global_1601192.f_6[iVar80 /*18*/][iVar193], 11)) && !MISC::IS_BIT_SET(Global_1601192.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_90(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1686009.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar55[iVar80], iVar14) };
					Global_1686009.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1686009.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_89(iVar15, 4) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar35[iVar80] = DATAFILE::DATADICT_GET_ARRAY(iVar3, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar40[iVar80] = DATAFILE::DATADICT_GET_ARRAY(iVar3, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar4)
		{
			iVar193 = DATAFILE::DATAARRAY_GET_INT(uVar40[iVar80], iVar14);
			iVar15 = DATAFILE::DATAARRAY_GET_INT(uVar35[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !MISC::IS_BIT_SET(Global_1601192.f_6[iVar80 /*18*/][iVar193], 11)) && !MISC::IS_BIT_SET(Global_1601192.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_90(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1686009.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
						{
							iVar190 = iVar191;
							iVar192 = 1;
						}
						iVar191++;
					}
					if (iVar192 == 0)
					{
						iVar82[iVar91]++;
					}
					Var194 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar5, iVar14) };
					Global_1686009.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/] = Var194.x;
					Global_1686009.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/].f_1 = Var194.f_1;
					Var101[iVar91 /*11*/][iVar190]++;
					Global_1686009.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar190] = 2;
					Global_1686009.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar190 /*3*/] = { func_89(iVar15, 2) };
				}
			}
			iVar14++;
		}
		iVar14 = 0;
		while (iVar14 < 8)
		{
			iVar191 = 0;
			while (iVar191 < 10)
			{
				if (Global_1686009.f_407[iVar14 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
				{
					Global_1686009.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] = (Global_1686009.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
					Global_1686009.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 = (Global_1686009.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
				}
				iVar191++;
			}
			iVar14++;
		}
		iVar80++;
	}
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
}

Vector3 func_89(int iParam0, int iParam1)//Position - 0x4C5E
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.x = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.x = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		
		case 2:
			Var0.x = 255;
			Var0.f_1 = 70;
			Var0.f_2 = 70;
			break;
		
		case 3:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.x = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.x = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		
		case 4:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.x = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.x = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			else if (iParam1 == 4)
			{
				Var0.x = 200;
				Var0.f_1 = 200;
				Var0.f_2 = 50;
			}
			break;
		
		case 5:
			Var0.x = 200;
			Var0.f_1 = 200;
			Var0.f_2 = 50;
			break;
		
		case 11:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.x = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.x = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		
		case 12:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.x = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.x = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		
		case 13:
			Var0.x = 70;
			Var0.f_1 = 255;
			Var0.f_2 = 70;
			break;
		
		default:
			Var0.x = 255;
			Var0.f_1 = 255;
			Var0.f_2 = 255;
			break;
	}
	return Var0;
}

int func_90(int iParam0, int iParam1, int iParam2)//Position - 0x4E37
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_91(var uParam0, bool bParam1)//Position - 0x4E65
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<6> Var4;
	struct<8> Var10;
	struct<16> Var18;
	
	if (*uParam0 != 0)
	{
		NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
		*uParam0 = 0;
	}
	*uParam0 = uVar0;
	uParam0->f_1 = uVar1;
	uParam0->f_2 = uVar2;
	uParam0->f_3 = uVar3;
	MemCopy(&(uParam0->f_4), {Var4}, 16);
	if (bParam1)
	{
		MemCopy(&(uParam0->f_20), {Var10}, 16);
		uParam0->f_36 = { Var18 };
	}
}

bool func_92()//Position - 0x4EC0
{
	return Global_2428131.f_593;
}

int func_93()//Position - 0x4ECF
{
	if (((func_97() || func_96()) || func_95()) || func_94())
	{
		return 1;
	}
	return 0;
}

bool func_94()//Position - 0x4F01
{
	return MISC::IS_BIT_SET(Global_2428131, 1);
}

bool func_95()//Position - 0x4F12
{
	return MISC::IS_BIT_SET(Global_2428131, 2);
}

bool func_96()//Position - 0x4F23
{
	return MISC::IS_BIT_SET(Global_2428131, 20);
}

var func_97()//Position - 0x4F35
{
	return Global_2428131.f_572;
}

int func_98(int iParam0)//Position - 0x4F44
{
	if ((((func_103(iParam0) || func_102(iParam0)) || func_101(iParam0)) || func_100(iParam0)) || func_99(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_99(int iParam0)//Position - 0x4F8A
{
	return iParam0 == Global_262145.f_6866;
}

bool func_100(int iParam0)//Position - 0x4F9C
{
	return iParam0 == Global_262145.f_6860;
}

bool func_101(int iParam0)//Position - 0x4FAE
{
	return iParam0 == Global_262145.f_6854;
}

bool func_102(int iParam0)//Position - 0x4FC0
{
	return iParam0 == Global_262145.f_6847;
}

bool func_103(int iParam0)//Position - 0x4FD2
{
	return iParam0 == Global_262145.f_6842;
}

int func_104(var uParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x4FE4
{
	int iVar0;
	
	if (func_61())
	{
		uParam0->f_19 = 0;
		return 1;
	}
	if (func_64())
	{
		return 1;
	}
	if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam3 == 0)
	{
		return 1;
	}
	switch (uParam0->f_19)
	{
		case 0:
			func_57();
			func_105();
			Global_1675360.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1675385.f_5 = 0;
				Global_1675385.f_4 = 0;
				Global_1675385.f_1 = 0;
				Global_1675385.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1675385.f_5 = 0;
				uParam0->f_19 = 1;
				return 0;
			}
			if (uParam0->f_18 == 0 || uParam0->f_18 == 1)
			{
				uParam0->f_19 = 1;
			}
			else if (uParam0->f_18 == 2)
			{
				uParam0->f_19 = 2;
			}
			break;
		
		case 1:
			if (DATAFILE::DATAFILE_SELECT_UGC_STATS(iParam1, 1))
			{
				if (iParam3 == 4)
				{
					iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
					Global_1675391 = DATAFILE::DATADICT_GET_INT(iVar0, "pt");
					Global_1675391.f_1 = DATAFILE::DATADICT_GET_INT(iVar0, "pu");
					Global_1675391.f_2 = DATAFILE::DATADICT_GET_INT(iVar0, "ft");
					Global_1675391.f_3 = DATAFILE::DATADICT_GET_INT(iVar0, "fu");
					Global_1675391.f_4 = DATAFILE::DATADICT_GET_INT(iVar0, "qt");
					Global_1675391.f_5 = DATAFILE::DATADICT_GET_INT(iVar0, "qu");
				}
				else
				{
					iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
					Global_1675360.f_10 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iVar0, "dt"));
					Global_1675360.f_11 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iVar0, "du"));
					Global_1675360.f_9 = (Global_1675360.f_10 / Global_1675360.f_11);
					Global_1675360.f_13 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iVar0, "pt"));
					Global_1675360.f_14 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iVar0, "pu"));
					Global_971494 = SYSTEM::ROUND(Global_1675360.f_14);
					Global_1675360.f_12 = (Global_1675360.f_13 / Global_1675360.f_14);
					Global_1675360.f_15 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iVar0, "qt"));
					Global_1675360.f_17 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iVar0, "qu"));
					Global_1675360.f_16 = (Global_1675360.f_15 / Global_1675360.f_17);
				}
				if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
				{
					DATAFILE::DATAFILE_DELETE();
				}
				if (uParam0->f_18 == 0)
				{
					uParam0->f_19 = 2;
				}
				else
				{
					uParam0->f_19 = 0;
					return 1;
				}
			}
			else
			{
				uParam0->f_8++;
				if (uParam0->f_8 > 5)
				{
					uParam0->f_19 = 0;
					uParam0->f_8 = 0;
					return 1;
				}
			}
			break;
		
		case 2:
			if (NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(iParam1))
			{
				if (bParam2)
				{
					if (DATAFILE::DATAFILE_SELECT_UGC_PLAYER_DATA(iParam1))
					{
						iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
						if (iParam3 == 0)
						{
							Global_1675360 = DATAFILE::DATADICT_GET_INT(iVar0, "quit");
							Global_1675360.f_2 = DATAFILE::DATADICT_GET_INT(iVar0, "ply");
							Global_1675360.f_8 = DATAFILE::DATADICT_GET_INT(iVar0, "fl");
							if (Global_1675360.f_2 > 0)
							{
								Global_1675360.f_5 = 1;
							}
							DATAFILE::DATAFILE_DELETE();
						}
						else if (iParam3 == 4)
						{
							Global_1675385.f_5 = DATAFILE::DATADICT_GET_BOOL(iVar0, "won");
							Global_1675385.f_4 = DATAFILE::DATADICT_GET_INT(iVar0, "ply");
							Global_1675385.f_1 = DATAFILE::DATADICT_GET_INT(iVar0, "quit");
							Global_1675385.f_2 = DATAFILE::DATADICT_GET_INT(iVar0, "fl");
						}
						uParam0->f_19 = 0;
						return 1;
					}
					else
					{
						uParam0->f_8++;
						if (uParam0->f_8 > 100)
						{
							uParam0->f_19 = 0;
							uParam0->f_8 = 0;
							return 1;
						}
					}
				}
				else
				{
					uParam0->f_17 = 1;
				}
			}
			else
			{
				uParam0->f_19 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_105()//Position - 0x533E
{
	Global_1675360 = 0;
	Global_1675360.f_2 = 0;
	Global_1675360.f_8 = 0;
	Global_1675360.f_3 = 0;
	Global_1675360.f_6 = 0;
}

int func_106(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x5367
{
	if (!func_108() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_64() && iParam1 == 0) && !bParam3)
			{
				if (Global_1602437.f_57339 == 0)
				{
					if (Global_1602437 == 0)
					{
						if (((((Global_1602437.f_1 != 6 && !MISC::IS_BIT_SET(Global_1602437.f_3, 20)) && !MISC::IS_BIT_SET(Global_1602437.f_3, 21)) && !MISC::IS_BIT_SET(Global_1602437.f_3, 22)) && !MISC::IS_BIT_SET(Global_1602437.f_3, 23)) && Global_1602437.f_1 != 5)
						{
							func_178(uParam0, 1, 1);
							uParam0->f_41.f_3 = 0;
							*uParam0 = 0;
							func_71();
							DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(uParam0->f_5);
							func_57();
							return 1;
						}
					}
					else if (Global_1602437 != 2 && Global_1602437 != 1)
					{
						func_178(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_71();
						DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(uParam0->f_5);
						func_57();
						return 1;
					}
				}
			}
		}
	}
	if (Global_1602437 == 0 && Global_1602437.f_1 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !func_64())
		{
			if (!NETWORK::UGC_IS_LANGUAGE_SUPPORTED(NETWORK::UGC_GET_CONTENT_LANGUAGE(0)))
			{
				Global_1602437.f_57330 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		func_107();
	}
	func_55(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_107()//Position - 0x54F1
{
	MISC::SET_BIT(&(Global_2428131.f_26.f_3), 7);
}

bool func_108()//Position - 0x5506
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_109(int iParam0, struct<16> Param1)//Position - 0x5517
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2437092, "", 64);
	}
	else
	{
		Global_2437092 = { Param1 };
	}
	Global_2437091 = iParam0;
}

int func_110(var uParam0, var uParam1)//Position - 0x5544
{
	var uVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	NETWORK::NETWORK_HANDLE_FROM_MEMBER_ID(uParam1, &uVar0, 13);
	if (NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&uVar0))
	{
		*uParam0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_111()//Position - 0x5591
{
	return Global_2428131.f_26.f_47;
}

int func_112()//Position - 0x55A1
{
	return Global_2435261;
}

bool func_113()//Position - 0x55AD
{
	return Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_165 != 0;
}

void func_114(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x55C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	struct<2> Var16;
	var uVar51[16];
	
	*uParam0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	iVar1 = DATAFILE::DATADICT_GET_DICT(*uParam0, "data");
	iVar2 = DATAFILE::DATADICT_GET_DICT(iVar1, "trg");
	*uParam1 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "list");
	if (iParam3 == 1)
	{
		if (DATAFILE::DATADICT_GET_TYPE(*uParam0, "open") == 1)
		{
			uParam2->f_11 = DATAFILE::DATADICT_GET_BOOL(iVar1, "open");
		}
		return;
	}
	uParam2->f_11 = DATAFILE::DATADICT_GET_BOOL(iVar1, "open");
	Var3 = { func_115(NETWORK::UGC_GET_CONTENT_USER_ID(0)) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var16, 35, &Var3);
	uParam2->f_40 = { Var16.f_1 };
	uParam2->f_56 = Var16;
	uParam2->f_4 = DATAFILE::DATADICT_GET_INT(iVar2, "scr");
	uParam2->f_5 = DATAFILE::DATADICT_GET_INT(iVar2, "time");
	uParam2->f_1 = DATAFILE::DATADICT_GET_INT(iVar1, "cash");
	uParam2->f_57 = DATAFILE::DATAARRAY_GET_COUNT(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_57 - 1))
	{
		uVar51[iVar0] = DATAFILE::DATAARRAY_GET_DICT(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1136[iVar0 /*6*/]), DATAFILE::DATADICT_GET_STRING(uVar51[iVar0], "cid"), 24);
		uParam2->f_63[iVar0 /*67*/].f_62 = DATAFILE::DATADICT_GET_INT(uVar51[iVar0], "scr");
		uParam2->f_63[iVar0 /*67*/].f_63 = DATAFILE::DATADICT_GET_INT(uVar51[iVar0], "time");
		iVar0++;
	}
}

struct<13> func_115(var uParam0)//Position - 0x5707
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(uParam0, &Var0, 13);
	return Var0;
}

int func_116(int iParam0, bool bParam1, char* sParam2, int iParam3)//Position - 0x571E
{
	struct<13> Var0;
	struct<13> Var13;
	
	if (((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { func_115(sParam2) };
		Var13 = { func_117(PLAYER::PLAYER_ID()) };
		if (bParam1)
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var13, &Var0))
			{
				return 1;
			}
			else if (!NETWORK::NETWORK_IS_FRIEND(&Var0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var13, &Var0))
			{
				return 1;
			}
			else if (NETWORK::NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(&Var0) && NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
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
			Var13 = { func_117(PLAYER::PLAYER_ID()) };
			if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var13, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<13> func_117(int iParam0)//Position - 0x57EE
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_118(var uParam0)//Position - 0x5805
{
	if (uParam0->f_16)
	{
		Global_965455.f_6 = 0;
		Global_965455.f_7 = 32;
	}
	else
	{
		Global_964222.f_6 = 0;
		Global_964222.f_7 = 32;
	}
}

void func_119(var uParam0, var uParam1, var uParam2)//Position - 0x5835
{
	int iVar0;
	var uVar1[16];
	
	*uParam0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	if (*uParam0 == 0)
	{
	}
	*uParam1 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "list");
	uParam2->f_10 = 1;
	uParam2->f_57 = DATAFILE::DATAARRAY_GET_COUNT(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_57 - 1))
	{
		uVar1[iVar0] = DATAFILE::DATAARRAY_GET_DICT(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1136[iVar0 /*6*/]), DATAFILE::DATADICT_GET_STRING(uVar1[iVar0], "cid"), 24);
		iVar0++;
	}
	uParam2->f_10 = DATAFILE::DATADICT_GET_BOOL(*uParam0, "h2h");
	uParam2->f_9 = DATAFILE::DATADICT_GET_BOOL(*uParam0, "ch");
	if (func_64())
	{
		StringCopy(&(uParam2->f_12), DATAFILE::DATADICT_GET_STRING(*uParam0, "name"), 32);
	}
}

void func_120(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x58E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	iVar1 = DATAFILE::DATADICT_GET_DICT(iVar0, "mission");
	iVar2 = DATAFILE::DATADICT_GET_DICT(iVar1, "gen");
	Global_1602437.f_57303 = DATAFILE::DATADICT_GET_INT(iVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_155(iVar1, iParam0, bParam1);
		func_154(iVar1);
		func_153(&iVar1);
		func_152(&iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (func_83())
	{
		if (!bParam2 || iParam3 == 1)
		{
			func_151(iVar1);
			func_150(iVar1);
			func_149(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_148(iVar1);
			func_147(iVar2);
			func_146(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_145(iVar1);
			func_144(iVar1);
			func_143(iVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_82())
	{
		func_141(iVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_139(iVar1);
		func_138(iVar1);
		func_137(iVar1);
		func_136(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_134(iVar1);
		func_133(iVar1);
		func_131(iVar1);
		func_127(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_1602437 == 1)
	{
		func_150(iVar1);
		func_126(iVar1);
	}
	else
	{
		func_121(iVar1);
	}
	MISC::CLEAR_BIT(&(Global_1602437.f_3), 15);
	MISC::CLEAR_BIT(&(Global_1602437.f_3), 18);
	MISC::CLEAR_BIT(&(Global_1602437.f_3), 19);
	if (func_34(Global_1602437.f_56693))
	{
		MISC::SET_BIT(&(Global_1602437.f_3), 15);
	}
	else if (func_33(Global_1602437.f_56693))
	{
		MISC::SET_BIT(&(Global_1602437.f_3), 18);
	}
	else if (func_32(Global_1602437.f_56693))
	{
		MISC::SET_BIT(&(Global_1602437.f_3), 19);
	}
}

void func_121(int iParam0)//Position - 0x5AE5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char[] cVar4[8];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14[4];
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
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	var uVar50[4];
	var uVar55[4];
	var uVar60[4];
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
	var uVar80[4];
	var uVar85[4];
	var uVar90[4];
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	int iVar137;
	int iVar138;
	int iVar139;
	int iVar140;
	int iVar141;
	int iVar142;
	int iVar143;
	int iVar144;
	int iVar145;
	int iVar146;
	int iVar147;
	int iVar148;
	int iVar149;
	int iVar150;
	int iVar151;
	int iVar152;
	var uVar153[5];
	var uVar159[5];
	var uVar165[5];
	var uVar171[5];
	var uVar177[5];
	var uVar183[5];
	var uVar189[5];
	var uVar195[5];
	int iVar201;
	int iVar202;
	int iVar203;
	int iVar204;
	int iVar205;
	int iVar206;
	int iVar207;
	int iVar208;
	int iVar209;
	int iVar210;
	int iVar211;
	int iVar212;
	int iVar213;
	int iVar214;
	int iVar215;
	int iVar216;
	int iVar217;
	int iVar218;
	int iVar219;
	int iVar220;
	int iVar221;
	int iVar222;
	int iVar223;
	int iVar224;
	int iVar225;
	int iVar226;
	int iVar227;
	var uVar228[2];
	var uVar231[2];
	
	iVar6 = DATAFILE::DATADICT_GET_DICT(iParam0, "ene");
	Global_1602437.f_36728 = DATAFILE::DATADICT_GET_INT(iVar6, "no");
	if (DATAFILE::DATADICT_GET_TYPE(iVar6, "spcap") == 2 && DATAFILE::DATADICT_GET_INT(iVar6, "spcap") != 0)
	{
		Global_1602437.f_36729 = DATAFILE::DATADICT_GET_INT(iVar6, "spcap");
	}
	else
	{
		Global_1602437.f_36729 = 50;
	}
	Global_1602437.f_36731 = DATAFILE::DATADICT_GET_INT(iVar6, "time");
	Global_1602437.f_36732 = DATAFILE::DATADICT_GET_INT(iVar6, "pal");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "loc");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "head");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "rng");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "model");
	iVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "gun");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "skill");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "rsp");
	if (Global_1602437 == 1)
	{
		uVar14[0] = DATAFILE::DATADICT_GET_ARRAY(iVar6, "team");
	}
	iVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "wep");
	iVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "hlt");
	iVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "lghlt");
	iVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "veh");
	iVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "foll");
	iVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "iaim");
	iVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "iaimt");
	iVar26 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "iaimr");
	iVar27 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "sanim");
	iVar28 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "sat");
	iVar29 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "saru");
	iVar30 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "sara");
	iVar31 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "satt");
	iVar32 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "whost");
	iVar33 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "flee");
	iVar34 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "frr");
	iVar35 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pfrmr");
	iVar36 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "psnt");
	iVar37 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "psnei");
	iVar38 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "p2sp");
	iVar39 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "p2sh");
	iVar40 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "accu");
	iVar41 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "lgacc");
	iVar42 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "cmsty");
	iVar43 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pedbs");
	iVar44 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pbstwo");
	iVar45 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pbs3");
	iVar46 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pbs4");
	iVar47 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pbs5");
	iVar48 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pbs6");
	iVar49 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pbs7");
	if (func_83())
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1602437.f_18 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "group", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar14[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar50[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar55[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "agr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar60[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "tmflw", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar65[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar70[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar75[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "cblfr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar80[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "cblto", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar85[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "gtcpr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar90[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&cVar4, "awt", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar153[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			StringCopy(&cVar4, "awr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar159[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			StringCopy(&cVar4, "awl", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar165[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			StringCopy(&cVar4, "awlr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar171[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			StringCopy(&cVar4, "aht", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar183[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			StringCopy(&cVar4, "ags", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar177[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			StringCopy(&cVar4, "agrd", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar189[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			StringCopy(&cVar4, "agvr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar195[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			iVar3++;
		}
		iVar95 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "objt");
		iVar96 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "team");
		iVar97 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "spawn");
		iVar98 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "acts");
		iVar99 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "objt2");
		iVar100 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "team2");
		iVar101 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "spawn2");
		iVar102 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "acts2");
		iVar103 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "objt3");
		iVar104 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "team3");
		iVar105 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "spawn3");
		iVar106 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "acts3");
		iVar107 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "objt4");
		iVar108 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "team4");
		iVar109 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "spawn4");
		iVar110 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "acts4");
		iVar111 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "act");
		iVar112 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pper");
		iVar113 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "infr");
		iVar114 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "cca");
		iVar115 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "ccid");
		iVar116 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "gfr");
		iVar117 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "msr");
		iVar118 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "bnr");
		iVar119 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "phor");
		iVar120 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "folr");
		iVar122 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pcvl");
		iVar123 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pcvr");
		iVar121 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pdfw");
		iVar127 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pvdp1");
		iVar128 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pvdp2");
		iVar124 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "paaw");
		iVar125 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "paav1");
		iVar126 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "paav2");
		iVar129 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "dt");
		iVar130 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "do");
		iVar131 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "dtim");
		iVar132 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "dln");
		iVar133 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pvsp");
		iVar139 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "drge");
		iVar140 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "agrot");
		iVar141 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "gtds");
		iVar142 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pstat");
		iVar143 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pstar");
		iVar144 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "dmv");
		iVar145 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "let");
		iVar146 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "escr");
		iVar147 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "actr");
		iVar148 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "actv");
		iVar149 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "actv2");
		iVar150 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "actv3");
		iVar151 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "actv4");
		iVar152 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "actv5");
		iVar201 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pedct");
		iVar203 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pdcra");
		iVar202 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pedcr");
		iVar204 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pedbc");
		iVar205 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pdbps");
		iVar206 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "avrad");
		iVar207 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pedst");
		iVar208 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "gotor");
		iVar209 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "invbs");
		iVar210 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "gort");
		iVar211 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "gorr");
		iVar212 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "gorw");
		iVar213 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "cstnm");
		iVar214 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pspdl");
		iVar215 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "psctt");
		iVar216 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pscto");
		iVar217 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pscta");
		iVar218 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "psctac");
		iVar219 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "psctv");
		iVar220 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pscth");
		iVar221 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "psctot");
		iVar222 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "psctoi");
		iVar223 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pscatd");
		iVar224 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "cutsc");
		iVar225 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "cutsh");
		iVar226 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "nmpass");
		iVar227 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "nmfail");
		iVar134 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pmcp");
		iVar135 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pmcf");
		iVar136 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pambv");
		iVar137 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pwrpt");
		iVar138 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "pcash");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar228[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			StringCopy(&cVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar231[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_36728 - 1))
	{
		if (iVar0 < 59)
		{
			Global_1602437.f_36733[iVar0 /*270*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar7, iVar0) };
			Global_1602437.f_36733[iVar0 /*270*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar8, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_4 = DATAFILE::DATAARRAY_GET_FLOAT(iVar9, iVar0);
			iVar2 = DATAFILE::DATAARRAY_GET_INT(iVar10, iVar0);
			if (iVar2 == joaat("mp_m_fibsec_01"))
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_13 = joaat("s_m_m_ciasec_01");
			}
			else if (iVar2 == joaat("ig_michelle"))
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_13 = joaat("ig_karen_daniels");
			}
			else
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_13 = iVar2;
			}
			if (!func_82() && !func_125())
			{
				if (!STREAMING::IS_MODEL_VALID(Global_1602437.f_36733[iVar0 /*270*/].f_13))
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_13 = joaat("s_m_y_cop_01");
				}
			}
			iVar2 = DATAFILE::DATAARRAY_GET_INT(iVar11, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_14 = iVar2;
			iVar2 = DATAFILE::DATAARRAY_GET_INT(iVar12, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_15 = iVar2;
			if (Global_1602437 == 1)
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_16[0] = DATAFILE::DATAARRAY_GET_INT(uVar14[0], iVar0);
			}
			Global_1602437.f_36733[iVar0 /*270*/].f_49 = DATAFILE::DATAARRAY_GET_INT(iVar23, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_35 = DATAFILE::DATAARRAY_GET_INT(iVar19, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_36 = DATAFILE::DATAARRAY_GET_INT(iVar20, iVar0);
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar21, iVar0) == 2)
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_37 = DATAFILE::DATAARRAY_GET_INT(iVar21, iVar0);
			}
			else
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_37 = -1;
			}
			Global_1602437.f_36733[iVar0 /*270*/].f_55 = DATAFILE::DATAARRAY_GET_INT(iVar22, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_31 = DATAFILE::DATAARRAY_GET_INT(iVar13, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_38 = DATAFILE::DATAARRAY_GET_INT(iVar24, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_39 = DATAFILE::DATAARRAY_GET_INT(iVar25, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_40 = DATAFILE::DATAARRAY_GET_INT(iVar26, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_41 = DATAFILE::DATAARRAY_GET_INT(iVar27, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_42 = DATAFILE::DATAARRAY_GET_INT(iVar28, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_43 = DATAFILE::DATAARRAY_GET_INT(iVar29, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_44 = DATAFILE::DATAARRAY_GET_FLOAT(iVar30, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_45 = DATAFILE::DATAARRAY_GET_INT(iVar31, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_48 = DATAFILE::DATAARRAY_GET_INT(iVar32, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_46 = DATAFILE::DATAARRAY_GET_INT(iVar33, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_5 = DATAFILE::DATAARRAY_GET_FLOAT(iVar34, iVar0);
			if ((DATAFILE::DATAARRAY_GET_TYPE(iVar35, iVar0) == 3 && DATAFILE::DATAARRAY_GET_TYPE(iVar36, iVar0) == 2) && DATAFILE::DATAARRAY_GET_TYPE(iVar37, iVar0) == 2)
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_6 = DATAFILE::DATAARRAY_GET_FLOAT(iVar35, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_7 = DATAFILE::DATAARRAY_GET_INT(iVar36, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_8 = DATAFILE::DATAARRAY_GET_INT(iVar37, iVar0);
			}
			else
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_6 = 0f;
				Global_1602437.f_36733[iVar0 /*270*/].f_7 = 0;
				Global_1602437.f_36733[iVar0 /*270*/].f_8 = -1;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar38, iVar0) == 5 && DATAFILE::DATAARRAY_GET_TYPE(iVar39, iVar0) == 3)
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_9 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar38, iVar0) };
				Global_1602437.f_36733[iVar0 /*270*/].f_12 = DATAFILE::DATAARRAY_GET_FLOAT(iVar39, iVar0);
			}
			else
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_9 = { 0f, 0f, 0f };
				Global_1602437.f_36733[iVar0 /*270*/].f_12 = 0f;
			}
			Global_1602437.f_36733[iVar0 /*270*/].f_33 = DATAFILE::DATAARRAY_GET_INT(iVar40, iVar0);
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar41, iVar0) == 2)
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_34 = DATAFILE::DATAARRAY_GET_INT(iVar41, iVar0);
			}
			else
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_34 = -1;
			}
			Global_1602437.f_36733[iVar0 /*270*/].f_47 = DATAFILE::DATAARRAY_GET_INT(iVar42, iVar0);
			Global_1602437.f_36733[iVar0 /*270*/].f_179 = DATAFILE::DATAARRAY_GET_INT(iVar43, iVar0);
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar44, iVar0) == 2)
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_180 = DATAFILE::DATAARRAY_GET_INT(iVar44, iVar0);
			}
			else
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_180 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar45, iVar0) == 2)
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_181 = DATAFILE::DATAARRAY_GET_INT(iVar45, iVar0);
			}
			else
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_181 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar46, iVar0) == 2)
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_182 = DATAFILE::DATAARRAY_GET_INT(iVar46, iVar0);
			}
			else
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_182 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar47, iVar0) == 2)
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_183 = DATAFILE::DATAARRAY_GET_INT(iVar47, iVar0);
			}
			else
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_183 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar48, iVar0) == 2)
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_184 = DATAFILE::DATAARRAY_GET_INT(iVar48, iVar0);
			}
			else
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_184 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar49, iVar0) == 2)
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_185 = DATAFILE::DATAARRAY_GET_INT(iVar49, iVar0);
			}
			else
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_185 = 0;
			}
			if (func_83())
			{
				Global_1602437.f_36733[iVar0 /*270*/].f_56 = DATAFILE::DATAARRAY_GET_INT(iVar95, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_57 = DATAFILE::DATAARRAY_GET_INT(iVar96, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_58 = DATAFILE::DATAARRAY_GET_INT(iVar97, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_60 = DATAFILE::DATAARRAY_GET_INT(iVar98, iVar0);
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar99, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_152 = DATAFILE::DATAARRAY_GET_INT(iVar99, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_149 = DATAFILE::DATAARRAY_GET_INT(iVar100, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_155 = DATAFILE::DATAARRAY_GET_INT(iVar101, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_158 = DATAFILE::DATAARRAY_GET_INT(iVar102, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_153 = DATAFILE::DATAARRAY_GET_INT(iVar103, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_150 = DATAFILE::DATAARRAY_GET_INT(iVar104, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_156 = DATAFILE::DATAARRAY_GET_INT(iVar105, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_159 = DATAFILE::DATAARRAY_GET_INT(iVar106, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_154 = DATAFILE::DATAARRAY_GET_INT(iVar107, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_151 = DATAFILE::DATAARRAY_GET_INT(iVar108, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_157 = DATAFILE::DATAARRAY_GET_INT(iVar109, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_160 = DATAFILE::DATAARRAY_GET_INT(iVar110, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_152 = -1;
					Global_1602437.f_36733[iVar0 /*270*/].f_149 = 0;
					Global_1602437.f_36733[iVar0 /*270*/].f_155 = 0;
					Global_1602437.f_36733[iVar0 /*270*/].f_158 = 0;
					Global_1602437.f_36733[iVar0 /*270*/].f_153 = -1;
					Global_1602437.f_36733[iVar0 /*270*/].f_150 = 0;
					Global_1602437.f_36733[iVar0 /*270*/].f_156 = 0;
					Global_1602437.f_36733[iVar0 /*270*/].f_159 = 0;
					Global_1602437.f_36733[iVar0 /*270*/].f_154 = -1;
					Global_1602437.f_36733[iVar0 /*270*/].f_151 = 0;
					Global_1602437.f_36733[iVar0 /*270*/].f_157 = 0;
					Global_1602437.f_36733[iVar0 /*270*/].f_160 = 0;
				}
				Global_1602437.f_36733[iVar0 /*270*/].f_59 = DATAFILE::DATAARRAY_GET_INT(iVar111, iVar0);
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar112, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_191 = DATAFILE::DATAARRAY_GET_INT(iVar112, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_191 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar113, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_192 = DATAFILE::DATAARRAY_GET_INT(iVar113, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_192 = 250;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar114, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_195 = DATAFILE::DATAARRAY_GET_INT(iVar114, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_195 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar115, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_196 = DATAFILE::DATAARRAY_GET_INT(iVar115, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_196 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar116, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_197 = DATAFILE::DATAARRAY_GET_INT(iVar116, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_197 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar117, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_193 = DATAFILE::DATAARRAY_GET_INT(iVar117, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_193 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar118, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_194 = DATAFILE::DATAARRAY_GET_INT(iVar118, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_194 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar119, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_250 = DATAFILE::DATAARRAY_GET_INT(iVar119, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_250 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar120, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_251 = DATAFILE::DATAARRAY_GET_INT(iVar120, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_251 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar122, iVar0) == 5)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_198 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar122, iVar0) };
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_198 = { 0f, 0f, 0f };
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar123, iVar0) == 5)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_201 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar123, iVar0) };
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_201 = { 0f, 0f, 0f };
				}
				if ((DATAFILE::DATAARRAY_GET_TYPE(iVar127, iVar0) == 5 && DATAFILE::DATAARRAY_GET_TYPE(iVar128, iVar0) == 5) && DATAFILE::DATAARRAY_GET_TYPE(iVar121, iVar0) == 3)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_209 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar127, iVar0) };
					Global_1602437.f_36733[iVar0 /*270*/].f_212 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar128, iVar0) };
					Global_1602437.f_36733[iVar0 /*270*/].f_215 = DATAFILE::DATAARRAY_GET_FLOAT(iVar121, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_209 = { 0f, 0f, 0f };
					Global_1602437.f_36733[iVar0 /*270*/].f_212 = { 0f, 0f, 0f };
					Global_1602437.f_36733[iVar0 /*270*/].f_215 = 1f;
				}
				if ((DATAFILE::DATAARRAY_GET_TYPE(iVar124, iVar0) == 3 && DATAFILE::DATAARRAY_GET_TYPE(iVar125, iVar0) == 5) && DATAFILE::DATAARRAY_GET_TYPE(iVar126, iVar0) == 5)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_174 = DATAFILE::DATAARRAY_GET_FLOAT(iVar124, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_168 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar125, iVar0) };
					Global_1602437.f_36733[iVar0 /*270*/].f_171 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar126, iVar0) };
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_174 = 0f;
					Global_1602437.f_36733[iVar0 /*270*/].f_168 = { 0f, 0f, 0f };
					Global_1602437.f_36733[iVar0 /*270*/].f_171 = { 0f, 0f, 0f };
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar133, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_221 = DATAFILE::DATAARRAY_GET_INT(iVar133, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_221 = 0;
				}
				Global_1602437.f_36733[iVar0 /*270*/].f_205 = DATAFILE::DATAARRAY_GET_INT(iVar129, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_204 = DATAFILE::DATAARRAY_GET_INT(iVar130, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_206 = DATAFILE::DATAARRAY_GET_INT(iVar131, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_207 = DATAFILE::DATAARRAY_GET_INT(iVar132, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_208 = DATAFILE::DATAARRAY_GET_INT(iVar139, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_216 = DATAFILE::DATAARRAY_GET_INT(iVar140, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_175 = DATAFILE::DATAARRAY_GET_INT(iVar141, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_32 = DATAFILE::DATAARRAY_GET_INT(iVar144, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_166 = DATAFILE::DATAARRAY_GET_INT(iVar145, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_176 = DATAFILE::DATAARRAY_GET_INT(iVar146, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_167 = DATAFILE::DATAARRAY_GET_INT(iVar147, iVar0);
				Global_1602437.f_36733[iVar0 /*270*/].f_61 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar148, iVar0) };
				Global_1602437.f_36733[iVar0 /*270*/].f_61 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar148, iVar0) };
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar149, iVar0) == 5)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_64[0 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar149, iVar0) };
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_64[0 /*3*/] = { 0f, 0f, 0f };
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar150, iVar0) == 5)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_64[1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar150, iVar0) };
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_64[1 /*3*/] = { 0f, 0f, 0f };
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar151, iVar0) == 5)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_64[2 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar151, iVar0) };
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_64[2 /*3*/] = { 0f, 0f, 0f };
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar152, iVar0) == 5)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_64[3 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar152, iVar0) };
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_64[3 /*3*/] = { 0f, 0f, 0f };
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar142, iVar0) == 2 && DATAFILE::DATAARRAY_GET_TYPE(iVar143, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_177 = DATAFILE::DATAARRAY_GET_INT(iVar142, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_178 = DATAFILE::DATAARRAY_GET_INT(iVar143, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_177 = -1;
					Global_1602437.f_36733[iVar0 /*270*/].f_178 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 4)
				{
					if (DATAFILE::DATAARRAY_GET_TYPE(uVar153[iVar3], iVar0) == 2)
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_78[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar153[iVar3], iVar0);
					}
					else
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_78[iVar3] = 0;
					}
					if (DATAFILE::DATAARRAY_GET_TYPE(uVar159[iVar3], iVar0) == 2)
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_84[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar159[iVar3], iVar0);
					}
					else
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_84[iVar3] = 0;
					}
					if (DATAFILE::DATAARRAY_GET_TYPE(uVar165[iVar3], iVar0) == 5 && DATAFILE::DATAARRAY_GET_TYPE(uVar171[iVar3], iVar0) == 2)
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_90[iVar3 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar165[iVar3], iVar0) };
						Global_1602437.f_36733[iVar0 /*270*/].f_106[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar171[iVar3], iVar0);
					}
					else
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_90[iVar3 /*3*/] = { 0f, 0f, 0f };
						Global_1602437.f_36733[iVar0 /*270*/].f_106[iVar3] = 3;
					}
					if (DATAFILE::DATAARRAY_GET_TYPE(uVar177[iVar3], iVar0) == 2)
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_124[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar177[iVar3], iVar0);
					}
					else
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_124[iVar3] = -1;
					}
					if (DATAFILE::DATAARRAY_GET_TYPE(uVar183[iVar3], iVar0) == 3)
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_112[iVar3] = DATAFILE::DATAARRAY_GET_FLOAT(uVar183[iVar3], iVar0);
					}
					else
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_112[iVar3] = 0f;
					}
					if (DATAFILE::DATAARRAY_GET_TYPE(uVar189[iVar3], iVar0) == 3)
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_118[iVar3] = DATAFILE::DATAARRAY_GET_FLOAT(uVar189[iVar3], iVar0);
					}
					else
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_118[iVar3] = 0f;
					}
					if (DATAFILE::DATAARRAY_GET_TYPE(uVar195[iVar3], iVar0) == 3)
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_130[iVar3] = DATAFILE::DATAARRAY_GET_FLOAT(uVar195[iVar3], iVar0);
					}
					else
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_130[iVar3] = 0f;
					}
					iVar3++;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar202, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_217 = DATAFILE::DATAARRAY_GET_INT(iVar202, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_217 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar201, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_218 = DATAFILE::DATAARRAY_GET_INT(iVar201, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_218 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar203, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_219 = DATAFILE::DATAARRAY_GET_INT(iVar203, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_219 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar207, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_220 = DATAFILE::DATAARRAY_GET_INT(iVar207, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_220 = -3;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar204, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_236 = DATAFILE::DATAARRAY_GET_INT(iVar204, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_236 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar205, iVar0) == 3)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_247 = DATAFILE::DATAARRAY_GET_FLOAT(iVar205, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_247 = 1f;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar206, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_77 = DATAFILE::DATAARRAY_GET_INT(iVar206, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_77 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar208, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_50 = DATAFILE::DATAARRAY_GET_INT(iVar208, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_50 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar209, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_51 = DATAFILE::DATAARRAY_GET_INT(iVar209, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_51 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar213, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_147 = DATAFILE::DATAARRAY_GET_INT(iVar213, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_147 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar214, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_148 = DATAFILE::DATAARRAY_GET_INT(iVar214, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_148 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar134, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_234 = DATAFILE::DATAARRAY_GET_INT(iVar134, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_234 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar135, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_235 = DATAFILE::DATAARRAY_GET_INT(iVar135, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_235 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar136, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_252 = DATAFILE::DATAARRAY_GET_INT(iVar136, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_252 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar137, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_258 = DATAFILE::DATAARRAY_GET_INT(iVar137, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_258 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar138, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_259 = DATAFILE::DATAARRAY_GET_INT(iVar138, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_259 = -1;
				}
				if ((DATAFILE::DATAARRAY_GET_TYPE(iVar215, iVar0) == 2 && DATAFILE::DATAARRAY_GET_TYPE(iVar216, iVar0) == 2) && DATAFILE::DATAARRAY_GET_TYPE(iVar217, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_136 = DATAFILE::DATAARRAY_GET_INT(iVar215, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_137 = DATAFILE::DATAARRAY_GET_INT(iVar216, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_139 = DATAFILE::DATAARRAY_GET_INT(iVar217, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_136 = -1;
					Global_1602437.f_36733[iVar0 /*270*/].f_137 = -1;
					Global_1602437.f_36733[iVar0 /*270*/].f_139 = 0;
				}
				if ((DATAFILE::DATAARRAY_GET_TYPE(iVar221, iVar0) == 2 && DATAFILE::DATAARRAY_GET_TYPE(iVar222, iVar0) == 2) && DATAFILE::DATAARRAY_GET_TYPE(iVar223, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_144 = DATAFILE::DATAARRAY_GET_INT(iVar221, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_145 = DATAFILE::DATAARRAY_GET_INT(iVar222, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_146 = DATAFILE::DATAARRAY_GET_INT(iVar223, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_144 = 0;
					Global_1602437.f_36733[iVar0 /*270*/].f_145 = -1;
					Global_1602437.f_36733[iVar0 /*270*/].f_146 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar218, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_138 = DATAFILE::DATAARRAY_GET_INT(iVar218, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_138 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar219, iVar0) == 5)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_140 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar219, iVar0) };
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_140 = { 0f, 0f, 0f };
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar220, iVar0) == 3)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_143 = DATAFILE::DATAARRAY_GET_FLOAT(iVar220, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_143 = 0f;
				}
				if ((DATAFILE::DATAARRAY_GET_TYPE(iVar210, iVar0) == 2 && DATAFILE::DATAARRAY_GET_TYPE(iVar211, iVar0) == 2) && DATAFILE::DATAARRAY_GET_TYPE(iVar212, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_52 = DATAFILE::DATAARRAY_GET_INT(iVar210, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_53 = DATAFILE::DATAARRAY_GET_INT(iVar211, iVar0);
					Global_1602437.f_36733[iVar0 /*270*/].f_54 = DATAFILE::DATAARRAY_GET_INT(iVar212, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_52 = -1;
					Global_1602437.f_36733[iVar0 /*270*/].f_53 = -1;
					Global_1602437.f_36733[iVar0 /*270*/].f_54 = joaat("weapon_pistol");
				}
				if (Global_1602437.f_1 != 6 && DATAFILE::DATAARRAY_GET_TYPE(iVar224, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_248 = DATAFILE::DATAARRAY_GET_INT(iVar224, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_248 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar226, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_232 = DATAFILE::DATAARRAY_GET_INT(iVar226, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_232 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar227, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_233 = DATAFILE::DATAARRAY_GET_INT(iVar227, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_233 = -1;
				}
				if (Global_1602437.f_1 != 6 && DATAFILE::DATAARRAY_GET_TYPE(iVar225, iVar0) == 2)
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_249 = DATAFILE::DATAARRAY_GET_INT(iVar225, iVar0);
				}
				else
				{
					Global_1602437.f_36733[iVar0 /*270*/].f_249 = 0;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (DATAFILE::DATAARRAY_GET_TYPE(uVar228[iVar1], iVar0) == 5)
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_260[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar228[iVar1], iVar0) };
					}
					else
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_260[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (DATAFILE::DATAARRAY_GET_TYPE(uVar231[iVar1], iVar0) == 3)
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_267[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar231[iVar1], iVar0);
					}
					else
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_267[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1602437.f_18 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1602437.f_36733[iVar0 /*270*/].f_16[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar14[iVar3], iVar0);
						Global_1602437.f_36733[iVar0 /*270*/].f_21[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar50[iVar3], iVar0);
						Global_1602437.f_36733[iVar0 /*270*/].f_26[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar55[iVar3], iVar0);
						if (Global_1602437.f_36733[iVar0 /*270*/].f_26[iVar3] == -1)
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_26[iVar3] = 99999;
						}
						if (DATAFILE::DATAARRAY_GET_TYPE(uVar60[iVar3], iVar0) == 2)
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_186[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar60[iVar3], iVar0);
						}
						else
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_186[iVar3] = -1;
						}
						if (DATAFILE::DATAARRAY_GET_TYPE(uVar65[iVar3], iVar0) == 2)
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_161[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar65[iVar3], iVar0);
						}
						else
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_161[iVar3] = 0;
						}
						if (DATAFILE::DATAARRAY_GET_TYPE(uVar70[iVar3], iVar0) == 2)
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_222[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar70[iVar3], iVar0);
						}
						else
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_222[iVar3] = 0;
						}
						if (DATAFILE::DATAARRAY_GET_TYPE(uVar75[iVar3], iVar0) == 2)
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_227[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar75[iVar3], iVar0);
						}
						else
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_227[iVar3] = 0;
						}
						if (DATAFILE::DATAARRAY_GET_TYPE(uVar80[iVar3], iVar0) == 2 && DATAFILE::DATAARRAY_GET_TYPE(uVar85[iVar3], iVar0) == 2)
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_237[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar80[iVar3], iVar0);
							Global_1602437.f_36733[iVar0 /*270*/].f_242[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar85[iVar3], iVar0);
						}
						else
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_237[iVar3] = -1;
							Global_1602437.f_36733[iVar0 /*270*/].f_242[iVar3] = -1;
						}
						if (DATAFILE::DATAARRAY_GET_TYPE(uVar90[iVar3], iVar0) == 2)
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_253[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar90[iVar3], iVar0);
						}
						else if (MISC::IS_BIT_SET(Global_1602437.f_21611[iVar3 /*3*/][func_124(iVar0)], func_123(iVar0)))
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_253[iVar3] = -1;
						}
						else
						{
							Global_1602437.f_36733[iVar0 /*270*/].f_253[iVar3] = -2;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	func_122(&iVar6);
}

void func_122(int iParam0)//Position - 0x80B9
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
	
	Global_1602437.f_53085[0] = DATAFILE::DATADICT_GET_INT(*iParam0, "no0");
	iVar1 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "loc0");
	iVar2 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "head0");
	iVar3 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "bit0");
	iVar4 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "veh0");
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_53085[0] - 1))
	{
		Global_1602437.f_53632[0 /*262*/][iVar0 /*9*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar1, iVar0) };
		Global_1602437.f_53632[0 /*262*/][iVar0 /*9*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar2, iVar0);
		Global_1602437.f_53632[0 /*262*/][iVar0 /*9*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar3, iVar0);
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar4, iVar0) == 2)
		{
			Global_1602437.f_53632[0 /*262*/][iVar0 /*9*/].f_7 = DATAFILE::DATAARRAY_GET_INT(iVar4, iVar0);
		}
		else
		{
			Global_1602437.f_53632[0 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1602437.f_53085[1] = DATAFILE::DATADICT_GET_INT(*iParam0, "no1");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "loc1");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "head1");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "bit1");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "veh1");
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_53085[1] - 1))
	{
		Global_1602437.f_53632[1 /*262*/][iVar0 /*9*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar5, iVar0) };
		Global_1602437.f_53632[1 /*262*/][iVar0 /*9*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar6, iVar0);
		Global_1602437.f_53632[1 /*262*/][iVar0 /*9*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar7, iVar0);
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar8, iVar0) == 2)
		{
			Global_1602437.f_53632[1 /*262*/][iVar0 /*9*/].f_7 = DATAFILE::DATAARRAY_GET_INT(iVar8, iVar0);
		}
		else
		{
			Global_1602437.f_53632[1 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1602437.f_53085[2] = DATAFILE::DATADICT_GET_INT(*iParam0, "no2");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "loc2");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "head2");
	iVar11 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "bit2");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "veh2");
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_53085[2] - 1))
	{
		Global_1602437.f_53632[2 /*262*/][iVar0 /*9*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar9, iVar0) };
		Global_1602437.f_53632[2 /*262*/][iVar0 /*9*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar10, iVar0);
		Global_1602437.f_53632[2 /*262*/][iVar0 /*9*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar11, iVar0);
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar12, iVar0) == 2)
		{
			Global_1602437.f_53632[2 /*262*/][iVar0 /*9*/].f_7 = DATAFILE::DATAARRAY_GET_INT(iVar12, iVar0);
		}
		else
		{
			Global_1602437.f_53632[2 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1602437.f_53085[3] = DATAFILE::DATADICT_GET_INT(*iParam0, "no3");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "loc3");
	iVar14 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "head3");
	iVar15 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "bit3");
	iVar16 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "veh3");
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_53085[3] - 1))
	{
		Global_1602437.f_53632[3 /*262*/][iVar0 /*9*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar13, iVar0) };
		Global_1602437.f_53632[3 /*262*/][iVar0 /*9*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar14, iVar0);
		Global_1602437.f_53632[3 /*262*/][iVar0 /*9*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar15, iVar0);
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar16, iVar0) == 2)
		{
			Global_1602437.f_53632[3 /*262*/][iVar0 /*9*/].f_7 = DATAFILE::DATAARRAY_GET_INT(iVar16, iVar0);
		}
		else
		{
			Global_1602437.f_53632[3 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
}

int func_123(int iParam0)//Position - 0x84A5
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_124(iParam0) * 31);
}

int func_124(int iParam0)//Position - 0x84D6
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_125()//Position - 0x84FC
{
	if (Global_1602437 == 6)
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0)//Position - 0x8511
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = DATAFILE::DATADICT_GET_DICT(iParam0, "ene");
	Global_1602437.f_53084 = DATAFILE::DATADICT_GET_INT(iVar1, "no");
	Global_1602437.f_26254 = DATAFILE::DATADICT_GET_INT(iVar1, "veh");
	iVar2 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "loc");
	iVar3 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "head");
	iVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "team");
	if (Global_1602437.f_53084 > 60)
	{
		Global_1602437.f_53084 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_53084 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1602437.f_53091[iVar0 /*9*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar2, iVar0) };
			Global_1602437.f_53091[iVar0 /*9*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar3, iVar0);
			Global_1602437.f_53091[iVar0 /*9*/].f_4 = DATAFILE::DATAARRAY_GET_INT(iVar4, iVar0);
		}
		iVar0++;
	}
	func_122(&iVar1);
}

void func_127(int iParam0)//Position - 0x85F8
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
	
	iVar2 = DATAFILE::DATADICT_GET_DICT(iParam0, "dprop");
	Global_1602437.f_31574 = func_130(DATAFILE::DATADICT_GET_INT(iVar2, "no"), 0, 100);
	iVar3 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "loc");
	iVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "vRot");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "head");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "model");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asst");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asso");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asss");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "pasc");
	iVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asst2");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asso2");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asss2");
	iVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "pasc2");
	iVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asst3");
	iVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asso3");
	iVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asss3");
	iVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "pasc3");
	iVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asst4");
	iVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asso4");
	iVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asss4");
	iVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "pasc4");
	iVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "prpct");
	iVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "prpcr");
	iVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "prcra");
	iVar26 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "prpbs");
	if (Global_1602437.f_31574 > 20)
	{
		Global_1602437.f_31574 = 20;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_31574 - 1))
	{
		Global_1602437.f_31576[iVar0 /*29*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar3, iVar0) };
		Global_1602437.f_31576[iVar0 /*29*/].f_3 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar4, iVar0) };
		Global_1602437.f_31576[iVar0 /*29*/].f_6 = DATAFILE::DATAARRAY_GET_FLOAT(iVar5, iVar0);
		Global_1602437.f_31576[iVar0 /*29*/].f_8 = -1;
		iVar1 = DATAFILE::DATAARRAY_GET_INT(iVar6, iVar0);
		Global_1602437.f_31576[iVar0 /*29*/].f_7 = func_129(iVar1);
		if (!STREAMING::IS_MODEL_VALID(Global_1602437.f_31576[iVar0 /*29*/].f_7))
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_7 = joaat("prop_barrel_exp_01a");
		}
		Global_1602437.f_31576[iVar0 /*29*/].f_10 = DATAFILE::DATAARRAY_GET_INT(iVar7, iVar0);
		Global_1602437.f_31576[iVar0 /*29*/].f_9 = DATAFILE::DATAARRAY_GET_INT(iVar8, iVar0);
		Global_1602437.f_31576[iVar0 /*29*/].f_11 = DATAFILE::DATAARRAY_GET_INT(iVar9, iVar0);
		if (Global_1602437.f_31576[iVar0 /*29*/].f_11 == -1)
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_11 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar11, iVar0) == 2)
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_17 = DATAFILE::DATAARRAY_GET_INT(iVar11, iVar0);
			Global_1602437.f_31576[iVar0 /*29*/].f_20 = DATAFILE::DATAARRAY_GET_INT(iVar12, iVar0);
			Global_1602437.f_31576[iVar0 /*29*/].f_23 = DATAFILE::DATAARRAY_GET_INT(iVar13, iVar0);
			Global_1602437.f_31576[iVar0 /*29*/].f_18 = DATAFILE::DATAARRAY_GET_INT(iVar15, iVar0);
			Global_1602437.f_31576[iVar0 /*29*/].f_21 = DATAFILE::DATAARRAY_GET_INT(iVar16, iVar0);
			Global_1602437.f_31576[iVar0 /*29*/].f_24 = DATAFILE::DATAARRAY_GET_INT(iVar17, iVar0);
			Global_1602437.f_31576[iVar0 /*29*/].f_19 = DATAFILE::DATAARRAY_GET_INT(iVar19, iVar0);
			Global_1602437.f_31576[iVar0 /*29*/].f_22 = DATAFILE::DATAARRAY_GET_INT(iVar20, iVar0);
			Global_1602437.f_31576[iVar0 /*29*/].f_25 = DATAFILE::DATAARRAY_GET_INT(iVar21, iVar0);
		}
		else
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_20 = -1;
			Global_1602437.f_31576[iVar0 /*29*/].f_17 = 0;
			Global_1602437.f_31576[iVar0 /*29*/].f_23 = 0;
			Global_1602437.f_31576[iVar0 /*29*/].f_21 = -1;
			Global_1602437.f_31576[iVar0 /*29*/].f_18 = 0;
			Global_1602437.f_31576[iVar0 /*29*/].f_24 = 0;
			Global_1602437.f_31576[iVar0 /*29*/].f_22 = -1;
			Global_1602437.f_31576[iVar0 /*29*/].f_19 = 0;
			Global_1602437.f_31576[iVar0 /*29*/].f_25 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar10, iVar0) == 2)
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_12 = DATAFILE::DATAARRAY_GET_INT(iVar10, iVar0);
			Global_1602437.f_31576[iVar0 /*29*/].f_26 = DATAFILE::DATAARRAY_GET_INT(iVar14, iVar0);
			Global_1602437.f_31576[iVar0 /*29*/].f_27 = DATAFILE::DATAARRAY_GET_INT(iVar18, iVar0);
			Global_1602437.f_31576[iVar0 /*29*/].f_28 = DATAFILE::DATAARRAY_GET_INT(iVar22, iVar0);
		}
		else
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_12 = 0;
			Global_1602437.f_31576[iVar0 /*29*/].f_26 = 0;
			Global_1602437.f_31576[iVar0 /*29*/].f_27 = 0;
			Global_1602437.f_31576[iVar0 /*29*/].f_28 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar24, iVar0) == 2)
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_13 = DATAFILE::DATAARRAY_GET_INT(iVar24, iVar0);
		}
		else
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_13 = -1;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar23, iVar0) == 2)
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_14 = DATAFILE::DATAARRAY_GET_INT(iVar23, iVar0);
		}
		else
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_14 = -1;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar25, iVar0) == 2)
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_15 = DATAFILE::DATAARRAY_GET_INT(iVar25, iVar0);
		}
		else
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_15 = -1;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar26, iVar0) == 2)
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_16 = DATAFILE::DATAARRAY_GET_INT(iVar26, iVar0);
		}
		else
		{
			Global_1602437.f_31576[iVar0 /*29*/].f_16 = 0;
		}
		iVar0++;
	}
	iVar27 = iVar0;
	if (func_128() || Global_1602437 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1602437.f_26306 - 1))
		{
			Global_1602437.f_31576[iVar27 /*29*/] = { Global_1602437.f_26309[iVar0 /*86*/] };
			Global_1602437.f_31576[iVar27 /*29*/].f_3 = { Global_1602437.f_26309[iVar0 /*86*/].f_4 };
			Global_1602437.f_31576[iVar27 /*29*/].f_6 = Global_1602437.f_26309[iVar0 /*86*/].f_3;
			Global_1602437.f_31576[iVar27 /*29*/].f_8 = iVar0;
			Global_1602437.f_31576[iVar27 /*29*/].f_7 = joaat("prop_container_ld_pu");
			iVar28 = 0;
			while (iVar28 <= 3)
			{
				Global_1602437.f_26309[iVar27 /*86*/].f_16[iVar28] = 0;
				Global_1602437.f_26309[iVar27 /*86*/].f_21[iVar28] = 99999;
				iVar28++;
			}
			Global_1602437.f_31575++;
			Global_1602437.f_31574++;
			iVar27++;
			iVar0++;
		}
	}
}

int func_128()//Position - 0x8C14
{
	if (Global_1602437 == 0 && Global_1602437.f_1 == 5)
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x8C37
{
	if (iParam0 == joaat("prop_offroad_tyres01"))
	{
		return joaat("lts_prop_lts_offroad_tyres01");
	}
	else if (iParam0 == joaat("prop_elecbox_24"))
	{
		return joaat("lts_prop_lts_elecbox_24");
	}
	else if (iParam0 == joaat("prop_elecbox_24b"))
	{
		return joaat("lts_prop_lts_elecbox_24b");
	}
	else if (iParam0 == joaat("prop_mp_ramp_01_tu"))
	{
		return joaat("lts_prop_lts_ramp_01");
	}
	else if (iParam0 == joaat("prop_mp_ramp_02_tu"))
	{
		return joaat("lts_prop_lts_ramp_02");
	}
	else if (iParam0 == joaat("prop_mp_ramp_03_tu"))
	{
		return joaat("lts_prop_lts_ramp_03");
	}
	else if (iParam0 == joaat("prop_bush_lrg_01e_cr"))
	{
		return joaat("prop_bush_lrg_01e_cr");
	}
	else if (iParam0 == joaat("prop_bush_med_03_cr"))
	{
		return joaat("prop_bush_med_03_cr");
	}
	if ((MISC::IS_ORBIS_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
	{
		if (iParam0 == -56302774)
		{
			return joaat("prop_tree_fallen_02");
		}
		if (iParam0 == -1924165356)
		{
			return joaat("prop_log_break_01");
		}
		if (iParam0 == 1837927001)
		{
			return joaat("prop_plant_group_04_cr");
		}
		if (iParam0 == -960602868)
		{
			return joaat("prop_bush_lrg_01c_cr");
		}
		if (iParam0 == -72825120)
		{
			return joaat("prop_bush_lrg_01e_cr2");
		}
		if (iParam0 == -713058190)
		{
			return joaat("prop_bush_med_03_cr2");
		}
	}
	else if (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION())
	{
		if (iParam0 == joaat("prop_tree_fallen_02"))
		{
			return -56302774;
		}
		if (iParam0 == joaat("prop_log_break_01"))
		{
			return -1924165356;
		}
		if (iParam0 == joaat("prop_plant_group_04_cr"))
		{
			return 1837927001;
		}
		if (iParam0 == joaat("prop_bush_lrg_01c_cr"))
		{
			return -960602868;
		}
		if (iParam0 == joaat("prop_bush_lrg_01e_cr2"))
		{
			return -72825120;
		}
		if (iParam0 == joaat("prop_bush_med_03_cr2"))
		{
			return -713058190;
		}
	}
	return iParam0;
}

int func_130(int iParam0, int iParam1, int iParam2)//Position - 0x8DEB
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

void func_131(int iParam0)//Position - 0x8E10
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
	
	iVar2 = DATAFILE::DATADICT_GET_DICT(iParam0, "prop");
	Global_1602437.f_28441 = DATAFILE::DATADICT_GET_INT(iVar2, "no");
	iVar3 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "loc");
	iVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "vRot");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "head");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "model");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asst");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asso");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asss");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "pasc");
	iVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asst2");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asso2");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asss2");
	iVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "pasc2");
	iVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asst3");
	iVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asso3");
	iVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asss3");
	iVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "pasc3");
	iVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asst4");
	iVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asso4");
	iVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "asss4");
	iVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "pasc4");
	iVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "aldel");
	iVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "alsnd");
	iVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "flvfx");
	iVar26 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "prpct");
	iVar27 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "prpcr");
	iVar28 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "prcra");
	iVar29 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "prpbs");
	if (Global_1602437.f_28441 > 100)
	{
		Global_1602437.f_28441 = 100;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_28441 - 1))
	{
		Global_1602437.f_28442[iVar0 /*31*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar3, iVar0) };
		Global_1602437.f_28442[iVar0 /*31*/].f_3 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar4, iVar0) };
		Global_1602437.f_28442[iVar0 /*31*/].f_6 = DATAFILE::DATAARRAY_GET_FLOAT(iVar5, iVar0);
		iVar1 = DATAFILE::DATAARRAY_GET_INT(iVar6, iVar0);
		Global_1602437.f_28442[iVar0 /*31*/].f_7 = func_129(iVar1);
		if (!STREAMING::IS_MODEL_VALID(Global_1602437.f_28442[iVar0 /*31*/].f_7))
		{
			Global_1602437.f_28442[iVar0 /*31*/].f_7 = joaat("prop_const_fence02b");
		}
		Global_1602437.f_28442[iVar0 /*31*/].f_9 = DATAFILE::DATAARRAY_GET_INT(iVar7, iVar0);
		Global_1602437.f_28442[iVar0 /*31*/].f_8 = DATAFILE::DATAARRAY_GET_INT(iVar8, iVar0);
		Global_1602437.f_28442[iVar0 /*31*/].f_10 = DATAFILE::DATAARRAY_GET_INT(iVar9, iVar0);
		if (Global_1602437.f_28442[iVar0 /*31*/].f_10 == -1)
		{
			Global_1602437.f_28442[iVar0 /*31*/].f_10 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar11, iVar0) == 2)
		{
			Global_1602437.f_28442[iVar0 /*31*/].f_19 = DATAFILE::DATAARRAY_GET_INT(iVar11, iVar0);
			Global_1602437.f_28442[iVar0 /*31*/].f_22 = DATAFILE::DATAARRAY_GET_INT(iVar12, iVar0);
			Global_1602437.f_28442[iVar0 /*31*/].f_25 = DATAFILE::DATAARRAY_GET_INT(iVar13, iVar0);
			Global_1602437.f_28442[iVar0 /*31*/].f_20 = DATAFILE::DATAARRAY_GET_INT(iVar15, iVar0);
			Global_1602437.f_28442[iVar0 /*31*/].f_23 = DATAFILE::DATAARRAY_GET_INT(iVar16, iVar0);
			Global_1602437.f_28442[iVar0 /*31*/].f_26 = DATAFILE::DATAARRAY_GET_INT(iVar17, iVar0);
			Global_1602437.f_28442[iVar0 /*31*/].f_21 = DATAFILE::DATAARRAY_GET_INT(iVar19, iVar0);
			Global_1602437.f_28442[iVar0 /*31*/].f_24 = DATAFILE::DATAARRAY_GET_INT(iVar20, iVar0);
			Global_1602437.f_28442[iVar0 /*31*/].f_27 = DATAFILE::DATAARRAY_GET_INT(iVar21, iVar0);
		}
		else
		{
			Global_1602437.f_28442[iVar0 /*31*/].f_22 = -1;
			Global_1602437.f_28442[iVar0 /*31*/].f_19 = 0;
			Global_1602437.f_28442[iVar0 /*31*/].f_25 = 0;
			Global_1602437.f_28442[iVar0 /*31*/].f_23 = -1;
			Global_1602437.f_28442[iVar0 /*31*/].f_20 = 0;
			Global_1602437.f_28442[iVar0 /*31*/].f_26 = 0;
			Global_1602437.f_28442[iVar0 /*31*/].f_24 = -1;
			Global_1602437.f_28442[iVar0 /*31*/].f_21 = 0;
			Global_1602437.f_28442[iVar0 /*31*/].f_27 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar10, iVar0) == 2)
		{
			Global_1602437.f_28442[iVar0 /*31*/].f_11 = DATAFILE::DATAARRAY_GET_INT(iVar10, iVar0);
			Global_1602437.f_28442[iVar0 /*31*/].f_28 = DATAFILE::DATAARRAY_GET_INT(iVar14, iVar0);
			Global_1602437.f_28442[iVar0 /*31*/].f_29 = DATAFILE::DATAARRAY_GET_INT(iVar18, iVar0);
			Global_1602437.f_28442[iVar0 /*31*/].f_30 = DATAFILE::DATAARRAY_GET_INT(iVar22, iVar0);
		}
		else
		{
			Global_1602437.f_28442[iVar0 /*31*/].f_11 = 0;
			Global_1602437.f_28442[iVar0 /*31*/].f_28 = 0;
			Global_1602437.f_28442[iVar0 /*31*/].f_29 = 0;
			Global_1602437.f_28442[iVar0 /*31*/].f_30 = 0;
		}
		Global_1602437.f_28442[iVar0 /*31*/].f_12 = DATAFILE::DATAARRAY_GET_INT(iVar23, iVar0);
		if (Global_1602437.f_28442[iVar0 /*31*/].f_12 > 0 && Global_1602437.f_28442[iVar0 /*31*/].f_12 < 1000)
		{
			Global_1602437.f_28442[iVar0 /*31*/].f_12 = func_132(Global_1602437.f_28442[iVar0 /*31*/].f_12);
		}
		Global_1602437.f_28442[iVar0 /*31*/].f_13 = DATAFILE::DATAARRAY_GET_INT(iVar24, iVar0);
		Global_1602437.f_28442[iVar0 /*31*/].f_14 = DATAFILE::DATAARRAY_GET_INT(iVar25, iVar0);
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar27, iVar0) == 2)
		{
			Global_1602437.f_28442[iVar0 /*31*/].f_15 = DATAFILE::DATAARRAY_GET_INT(iVar27, iVar0);
		}
		else
		{
			Global_1602437.f_28442[iVar0 /*31*/].f_15 = -1;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar26, iVar0) == 2)
		{
			Global_1602437.f_28442[iVar0 /*31*/].f_16 = DATAFILE::DATAARRAY_GET_INT(iVar26, iVar0);
		}
		else
		{
			Global_1602437.f_28442[iVar0 /*31*/].f_16 = -1;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar28, iVar0) == 2)
		{
			Global_1602437.f_28442[iVar0 /*31*/].f_17 = DATAFILE::DATAARRAY_GET_INT(iVar28, iVar0);
		}
		else
		{
			Global_1602437.f_28442[iVar0 /*31*/].f_17 = -1;
		}
		Global_1602437.f_28442[iVar0 /*31*/].f_18 = DATAFILE::DATAARRAY_GET_INT(iVar29, iVar0);
		iVar0++;
	}
}

int func_132(int iParam0)//Position - 0x93A0
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 5000;
		
		case 2:
			return 10000;
		
		case 3:
			return 20000;
		
		case 4:
			return 30000;
		
		case 5:
			return 45000;
		
		case 6:
			return 60000;
		
		default:
	}
	return 0;
}

void func_133(int iParam0)//Position - 0x9404
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char[] cVar4[8];
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
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	var uVar62[4];
	var uVar67[4];
	var uVar72[4];
	var uVar77[4];
	var uVar82[4];
	var uVar87[4];
	var uVar92[4];
	var uVar97[2];
	var uVar100[2];
	int iVar103;
	int iVar104;
	
	iVar6 = DATAFILE::DATADICT_GET_DICT(iParam0, "veh");
	Global_1602437.f_33011 = DATAFILE::DATADICT_GET_INT(iVar6, "no");
	Global_1602437.f_33012 = DATAFILE::DATADICT_GET_INT(iVar6, "time");
	Global_1602437.f_33013 = DATAFILE::DATADICT_GET_INT(iVar6, "pal");
	iVar7 = DATAFILE::DATADICT_GET_DICT(iParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1602437.f_18 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_1602437.f_72[iVar3 /*5346*/].f_38 - 1))
			{
				StringCopy(&cVar4, "vhr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1602437.f_36580[iVar0 /*5*/][iVar3] = DATAFILE::DATADICT_GET_INT(iVar7, &cVar4);
				StringCopy(&cVar4, "vrs", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1602437.f_21509[iVar0 /*5*/][iVar3] = DATAFILE::DATADICT_GET_INT(iVar7, &cVar4);
				iVar0++;
			}
			iVar3++;
		}
	}
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "loc");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "head");
	iVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "model");
	iVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "col");
	iVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "rsp");
	if (func_83())
	{
		iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vrr");
		iVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vrmr");
		iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vsnt");
		iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vsnei");
		iVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "v2sp");
		iVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "v2sh");
		iVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "objt");
		iVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "team");
		iVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "spwn");
		iVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "objt2");
		iVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "team2");
		iVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "spwn2");
		iVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "objt3");
		iVar26 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "team3");
		iVar27 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "spwn3");
		iVar28 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "objt4");
		iVar29 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "team4");
		iVar30 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "spwn4");
		Global_1602437.f_28440 = DATAFILE::DATADICT_GET_INT(iVar6, "nocr");
		iVar31 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "crgdm");
		iVar32 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "liv");
		iVar33 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "colc");
		iVar34 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "col2");
		Global_1602437.f_33014 = DATAFILE::DATADICT_GET_INT(iVar6, "burst");
		iVar35 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "hlth");
		iVar36 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "enghp");
		iVar37 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "ptrhp");
		iVar38 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "bdyhp");
		iVar39 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "drbs");
		iVar40 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vbs2");
		iVar41 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vbs3");
		iVar42 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vebs");
		iVar43 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vehct");
		iVar45 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vhcra");
		iVar44 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vehcr");
		iVar46 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vehbc");
		iVar47 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vehbr");
		iVar48 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vspdl");
		iVar49 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vcnm");
		iVar50 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vehap");
		iVar51 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vehat");
		iVar52 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vehdu");
		iVar53 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vldt");
		iVar54 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vldr");
		iVar55 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "cutsc");
		iVar56 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "cutsh");
		iVar60 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "nmpass");
		iVar61 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "nmfail");
		iVar57 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vmcp");
		iVar58 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vmcf");
		iVar59 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "gotor");
		iVar104 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vphrang");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar97[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			StringCopy(&cVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar100[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			iVar1++;
		}
		iVar103 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_1602437.f_18 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar62[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar67[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "tsp", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar72[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar77[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar82[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbf", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar87[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbt", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar92[iVar3] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_33011 - 1))
	{
		if (iVar0 < 32)
		{
			Global_1602437.f_33015[iVar0 /*108*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar8, iVar0) };
			Global_1602437.f_33015[iVar0 /*108*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar9, iVar0);
			iVar2 = DATAFILE::DATAARRAY_GET_INT(iVar16, iVar0);
			Global_1602437.f_33015[iVar0 /*108*/].f_12 = iVar2;
			if (!func_82())
			{
				if (!STREAMING::IS_MODEL_VALID(Global_1602437.f_33015[iVar0 /*108*/].f_12))
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_12 = joaat("baller");
				}
			}
			Global_1602437.f_33015[iVar0 /*108*/].f_23 = DATAFILE::DATAARRAY_GET_INT(iVar17, iVar0);
			Global_1602437.f_33015[iVar0 /*108*/].f_27 = DATAFILE::DATAARRAY_GET_INT(iVar18, iVar0);
			if (func_83())
			{
				if (((DATAFILE::DATAARRAY_GET_TYPE(iVar10, iVar0) == 3 && DATAFILE::DATAARRAY_GET_TYPE(iVar11, iVar0) == 3) && DATAFILE::DATAARRAY_GET_TYPE(iVar12, iVar0) == 2) && DATAFILE::DATAARRAY_GET_TYPE(iVar13, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_4 = DATAFILE::DATAARRAY_GET_FLOAT(iVar10, iVar0);
					Global_1602437.f_33015[iVar0 /*108*/].f_5 = DATAFILE::DATAARRAY_GET_FLOAT(iVar11, iVar0);
					Global_1602437.f_33015[iVar0 /*108*/].f_6 = DATAFILE::DATAARRAY_GET_INT(iVar12, iVar0);
					Global_1602437.f_33015[iVar0 /*108*/].f_7 = DATAFILE::DATAARRAY_GET_INT(iVar13, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_4 = 100f;
					Global_1602437.f_33015[iVar0 /*108*/].f_5 = 0f;
					Global_1602437.f_33015[iVar0 /*108*/].f_6 = 0;
					Global_1602437.f_33015[iVar0 /*108*/].f_7 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar14, iVar0) == 5 && DATAFILE::DATAARRAY_GET_TYPE(iVar15, iVar0) == 3)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_8 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar14, iVar0) };
					Global_1602437.f_33015[iVar0 /*108*/].f_11 = DATAFILE::DATAARRAY_GET_FLOAT(iVar15, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_8 = { 0f, 0f, 0f };
					Global_1602437.f_33015[iVar0 /*108*/].f_11 = 0f;
				}
				Global_1602437.f_33015[iVar0 /*108*/].f_34 = DATAFILE::DATAARRAY_GET_INT(iVar19, iVar0);
				Global_1602437.f_33015[iVar0 /*108*/].f_35 = DATAFILE::DATAARRAY_GET_INT(iVar20, iVar0);
				Global_1602437.f_33015[iVar0 /*108*/].f_36 = DATAFILE::DATAARRAY_GET_INT(iVar21, iVar0);
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar22, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_61 = DATAFILE::DATAARRAY_GET_INT(iVar22, iVar0);
					Global_1602437.f_33015[iVar0 /*108*/].f_58 = DATAFILE::DATAARRAY_GET_INT(iVar23, iVar0);
					Global_1602437.f_33015[iVar0 /*108*/].f_64 = DATAFILE::DATAARRAY_GET_INT(iVar24, iVar0);
					Global_1602437.f_33015[iVar0 /*108*/].f_62 = DATAFILE::DATAARRAY_GET_INT(iVar25, iVar0);
					Global_1602437.f_33015[iVar0 /*108*/].f_59 = DATAFILE::DATAARRAY_GET_INT(iVar26, iVar0);
					Global_1602437.f_33015[iVar0 /*108*/].f_65 = DATAFILE::DATAARRAY_GET_INT(iVar27, iVar0);
					Global_1602437.f_33015[iVar0 /*108*/].f_63 = DATAFILE::DATAARRAY_GET_INT(iVar28, iVar0);
					Global_1602437.f_33015[iVar0 /*108*/].f_60 = DATAFILE::DATAARRAY_GET_INT(iVar29, iVar0);
					Global_1602437.f_33015[iVar0 /*108*/].f_66 = DATAFILE::DATAARRAY_GET_INT(iVar30, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_61 = -1;
					Global_1602437.f_33015[iVar0 /*108*/].f_58 = 0;
					Global_1602437.f_33015[iVar0 /*108*/].f_64 = 0;
					Global_1602437.f_33015[iVar0 /*108*/].f_62 = -1;
					Global_1602437.f_33015[iVar0 /*108*/].f_59 = 0;
					Global_1602437.f_33015[iVar0 /*108*/].f_65 = 0;
					Global_1602437.f_33015[iVar0 /*108*/].f_63 = -1;
					Global_1602437.f_33015[iVar0 /*108*/].f_60 = 0;
					Global_1602437.f_33015[iVar0 /*108*/].f_66 = 0;
				}
				Global_1602437.f_33015[iVar0 /*108*/].f_26 = DATAFILE::DATAARRAY_GET_INT(iVar32, iVar0);
				Global_1602437.f_33015[iVar0 /*108*/].f_28 = DATAFILE::DATAARRAY_GET_INT(iVar35, iVar0);
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar36, iVar0) == 3 && DATAFILE::DATAARRAY_GET_FLOAT(iVar36, iVar0) > 0f)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_29 = DATAFILE::DATAARRAY_GET_FLOAT(iVar36, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_29 = 1001f;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar31, iVar0) == 3 && DATAFILE::DATAARRAY_GET_FLOAT(iVar31, iVar0) >= 0f)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_32 = DATAFILE::DATAARRAY_GET_FLOAT(iVar31, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_32 = 1.5f;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar37, iVar0) == 3 && DATAFILE::DATAARRAY_GET_FLOAT(iVar37, iVar0) > 0f)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_30 = DATAFILE::DATAARRAY_GET_FLOAT(iVar37, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_30 = 1001f;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar38, iVar0) == 3 && DATAFILE::DATAARRAY_GET_FLOAT(iVar38, iVar0) > 0f)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_31 = DATAFILE::DATAARRAY_GET_FLOAT(iVar38, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_31 = 1001f;
				}
				Global_1602437.f_33015[iVar0 /*108*/].f_37 = DATAFILE::DATAARRAY_GET_INT(iVar39, iVar0);
				Global_1602437.f_33015[iVar0 /*108*/].f_38 = DATAFILE::DATAARRAY_GET_INT(iVar40, iVar0);
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar41, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_39 = DATAFILE::DATAARRAY_GET_INT(iVar41, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_39 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar33, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_25 = DATAFILE::DATAARRAY_GET_INT(iVar33, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_25 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar34, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_24 = DATAFILE::DATAARRAY_GET_INT(iVar34, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_24 = -1;
				}
				Global_1602437.f_33015[iVar0 /*108*/].f_95 = DATAFILE::DATAARRAY_GET_INT(iVar42, iVar0);
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar44, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_54 = DATAFILE::DATAARRAY_GET_INT(iVar44, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_54 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar43, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_55 = DATAFILE::DATAARRAY_GET_INT(iVar43, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_55 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar45, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_56 = DATAFILE::DATAARRAY_GET_INT(iVar45, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_56 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar48, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_57 = DATAFILE::DATAARRAY_GET_INT(iVar48, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_57 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar49, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_67 = DATAFILE::DATAARRAY_GET_INT(iVar49, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_67 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar57, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_85 = DATAFILE::DATAARRAY_GET_INT(iVar57, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_85 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar58, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_86 = DATAFILE::DATAARRAY_GET_INT(iVar58, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_86 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar50, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_68 = DATAFILE::DATAARRAY_GET_INT(iVar50, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_68 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar51, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_69 = DATAFILE::DATAARRAY_GET_INT(iVar51, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_69 = 1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar52, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_82 = DATAFILE::DATAARRAY_GET_INT(iVar52, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_82 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar53, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_83 = DATAFILE::DATAARRAY_GET_INT(iVar53, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_83 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar54, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_84 = DATAFILE::DATAARRAY_GET_INT(iVar54, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_84 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar46, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_42 = DATAFILE::DATAARRAY_GET_INT(iVar46, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_42 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar47, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_43 = DATAFILE::DATAARRAY_GET_INT(iVar47, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_43 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar59, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_33 = DATAFILE::DATAARRAY_GET_INT(iVar59, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_33 = 0;
				}
				if (Global_1602437.f_1 != 6 && DATAFILE::DATAARRAY_GET_TYPE(iVar55, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_93 = DATAFILE::DATAARRAY_GET_INT(iVar55, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_93 = -1;
				}
				if (Global_1602437.f_1 != 6 && DATAFILE::DATAARRAY_GET_TYPE(iVar56, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_94 = DATAFILE::DATAARRAY_GET_INT(iVar56, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_94 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar60, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_80 = DATAFILE::DATAARRAY_GET_INT(iVar60, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_80 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar61, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_81 = DATAFILE::DATAARRAY_GET_INT(iVar61, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_81 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (DATAFILE::DATAARRAY_GET_TYPE(uVar97[iVar1], iVar0) == 5)
					{
						Global_1602437.f_33015[iVar0 /*108*/].f_97[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar97[iVar1], iVar0) };
					}
					else
					{
						Global_1602437.f_33015[iVar0 /*108*/].f_97[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (DATAFILE::DATAARRAY_GET_TYPE(uVar100[iVar1], iVar0) == 3)
					{
						Global_1602437.f_33015[iVar0 /*108*/].f_104[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar100[iVar1], iVar0);
					}
					else
					{
						Global_1602437.f_33015[iVar0 /*108*/].f_104[iVar1] = 0f;
					}
					iVar1++;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar103, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_96 = DATAFILE::DATAARRAY_GET_INT(iVar103, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_96 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar104, iVar0) == 2)
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_107 = DATAFILE::DATAARRAY_GET_INT(iVar104, iVar0);
				}
				else
				{
					Global_1602437.f_33015[iVar0 /*108*/].f_107 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1602437.f_18 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1602437.f_33015[iVar0 /*108*/].f_13[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar62[iVar3], iVar0);
						Global_1602437.f_33015[iVar0 /*108*/].f_18[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar67[iVar3], iVar0);
						if (Global_1602437.f_33015[iVar0 /*108*/].f_18[iVar3] == -1)
						{
							Global_1602437.f_33015[iVar0 /*108*/].f_18[iVar3] = 99999;
						}
						if (DATAFILE::DATAARRAY_GET_TYPE(uVar72[iVar3], iVar0) == 2)
						{
							Global_1602437.f_33015[iVar0 /*108*/].f_87[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar72[iVar3], iVar0);
						}
						else
						{
							Global_1602437.f_33015[iVar0 /*108*/].f_87[iVar3] = 0;
						}
						if (DATAFILE::DATAARRAY_GET_TYPE(uVar77[iVar3], iVar0) == 2)
						{
							Global_1602437.f_33015[iVar0 /*108*/].f_70[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar77[iVar3], iVar0);
						}
						else
						{
							Global_1602437.f_33015[iVar0 /*108*/].f_70[iVar3] = 0;
						}
						if (DATAFILE::DATAARRAY_GET_TYPE(uVar82[iVar3], iVar0) == 2)
						{
							Global_1602437.f_33015[iVar0 /*108*/].f_75[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar82[iVar3], iVar0);
						}
						else
						{
							Global_1602437.f_33015[iVar0 /*108*/].f_75[iVar3] = 0;
						}
						if (DATAFILE::DATAARRAY_GET_TYPE(uVar87[iVar3], iVar0) == 2)
						{
							Global_1602437.f_33015[iVar0 /*108*/].f_44[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar87[iVar3], iVar0);
						}
						else
						{
							Global_1602437.f_33015[iVar0 /*108*/].f_44[iVar3] = -1;
						}
						if (DATAFILE::DATAARRAY_GET_TYPE(uVar92[iVar3], iVar0) == 2)
						{
							Global_1602437.f_33015[iVar0 /*108*/].f_49[iVar3] = DATAFILE::DATAARRAY_GET_INT(uVar92[iVar3], iVar0);
						}
						else
						{
							Global_1602437.f_33015[iVar0 /*108*/].f_49[iVar3] = -1;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
}

void func_134(int iParam0)//Position - 0xA655
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
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
	
	iVar5 = DATAFILE::DATADICT_GET_DICT(iParam0, "weap");
	Global_1602437.f_32186 = DATAFILE::DATADICT_GET_INT(iVar5, "no");
	if (Global_1602437 == 0)
	{
		if (Global_1602437.f_32186 > 40)
		{
			Global_1602437.f_32186 = 40;
		}
	}
	else if (Global_1602437.f_32186 > 40)
	{
		Global_1602437.f_32186 = 40;
	}
	Global_1602437.f_32188 = DATAFILE::DATADICT_GET_INT(iVar5, "time");
	Global_1602437.f_32189 = DATAFILE::DATADICT_GET_INT(iVar5, "pal");
	Global_1602437.f_41 = DATAFILE::DATADICT_GET_INT(iVar5, "blip");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "loc");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "head");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "type");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "sub");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "bits");
	iVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "clip");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "brest1");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "brest2");
	iVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "brest3");
	iVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "brest4");
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_32186 - 1))
	{
		if (iVar0 < 40)
		{
			Global_1602437.f_32190[iVar0 /*20*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar6, iVar0) };
			Global_1602437.f_32190[iVar0 /*20*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar7, iVar0);
			iVar1 = DATAFILE::DATAARRAY_GET_INT(iVar8, iVar0);
			Global_1602437.f_32190[iVar0 /*20*/].f_12 = iVar1;
			if (!func_135(Global_1602437.f_32190[iVar0 /*20*/].f_12))
			{
				if (Global_1602437.f_32190[iVar0 /*20*/].f_12 == joaat("pickup_weapon_marksmanrifle"))
				{
					Global_1602437.f_32190[iVar0 /*20*/].f_12 = joaat("pickup_weapon_sniperrifle");
				}
				else
				{
					Global_1602437.f_32190[iVar0 /*20*/].f_12 = joaat("pickup_weapon_pistol");
				}
			}
			Global_1602437.f_32190[iVar0 /*20*/].f_4 = DATAFILE::DATAARRAY_GET_INT(iVar9, iVar0);
			Global_1602437.f_32190[iVar0 /*20*/].f_6 = DATAFILE::DATAARRAY_GET_INT(iVar10, iVar0);
			Global_1602437.f_32190[iVar0 /*20*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar11, iVar0);
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar12, iVar0) == 1)
			{
				Global_1602437.f_32190[iVar0 /*20*/].f_7[0] = DATAFILE::DATAARRAY_GET_BOOL(iVar12, iVar0);
			}
			else
			{
				Global_1602437.f_32190[iVar0 /*20*/].f_7[0] = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar13, iVar0) == 1)
			{
				Global_1602437.f_32190[iVar0 /*20*/].f_7[1] = DATAFILE::DATAARRAY_GET_BOOL(iVar13, iVar0);
			}
			else
			{
				Global_1602437.f_32190[iVar0 /*20*/].f_7[1] = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar14, iVar0) == 1)
			{
				Global_1602437.f_32190[iVar0 /*20*/].f_7[2] = DATAFILE::DATAARRAY_GET_BOOL(iVar14, iVar0);
			}
			else
			{
				Global_1602437.f_32190[iVar0 /*20*/].f_7[2] = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar15, iVar0) == 1)
			{
				Global_1602437.f_32190[iVar0 /*20*/].f_7[3] = DATAFILE::DATAARRAY_GET_BOOL(iVar15, iVar0);
			}
			else
			{
				Global_1602437.f_32190[iVar0 /*20*/].f_7[3] = 0;
			}
			StringCopy(&cVar3, "comps", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar16, iVar2) == 2)
				{
					Global_1602437.f_32190[iVar0 /*20*/].f_13[iVar2] = DATAFILE::DATAARRAY_GET_INT(iVar16, iVar2);
				}
				else
				{
					Global_1602437.f_32190[iVar0 /*20*/].f_13[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
}

int func_135(int iParam0)//Position - 0xA990
{
	switch (iParam0)
	{
		case joaat("pickup_health_standard"):
		case joaat("pickup_armour_standard"):
		case joaat("pickup_health_snack"):
		case joaat("pickup_money_variable"):
		case joaat("pickup_money_case"):
		case joaat("pickup_money_wallet"):
		case joaat("pickup_money_purse"):
		case joaat("pickup_money_dep_bag"):
		case joaat("pickup_money_med_bag"):
		case joaat("pickup_money_paper_bag"):
		case joaat("pickup_money_security_case"):
		case joaat("pickup_gang_attack_money"):
		case joaat("pickup_weapon_pistol"):
		case joaat("pickup_weapon_combatpistol"):
		case joaat("pickup_weapon_pistol50"):
		case joaat("pickup_weapon_appistol"):
		case joaat("pickup_weapon_microsmg"):
		case joaat("pickup_weapon_smg"):
		case joaat("pickup_weapon_assaultsmg"):
		case joaat("pickup_weapon_assaultrifle"):
		case joaat("pickup_weapon_carbinerifle"):
		case 1491498856:
		case joaat("pickup_weapon_advancedrifle"):
		case joaat("pickup_weapon_mg"):
		case joaat("pickup_weapon_combatmg"):
		case 975696266:
		case joaat("pickup_weapon_pumpshotgun"):
		case joaat("pickup_weapon_sawnoffshotgun"):
		case joaat("pickup_weapon_bullpupshotgun"):
		case joaat("pickup_weapon_assaultshotgun"):
		case joaat("pickup_weapon_sniperrifle"):
		case 1061513000:
		case joaat("pickup_weapon_heavysniper"):
		case joaat("pickup_weapon_grenadelauncher"):
		case joaat("pickup_weapon_rpg"):
		case joaat("pickup_weapon_minigun"):
		case joaat("pickup_weapon_grenade"):
		case joaat("pickup_weapon_smokegrenade"):
		case joaat("pickup_weapon_stickybomb"):
		case joaat("pickup_weapon_molotov"):
		case joaat("pickup_weapon_stungun"):
		case -660082779:
		case -695202657:
		case joaat("pickup_weapon_fireextinguisher"):
		case joaat("pickup_weapon_petrolcan"):
		case joaat("pickup_weapon_loudhailer"):
		case joaat("pickup_weapon_knife"):
		case joaat("pickup_weapon_nightstick"):
		case joaat("pickup_weapon_hammer"):
		case joaat("pickup_weapon_bat"):
		case joaat("pickup_weapon_crowbar"):
		case joaat("pickup_weapon_golfclub"):
		case joaat("pickup_ammo_bullet_mp"):
		case joaat("pickup_ammo_missile_mp"):
		case joaat("pickup_ammo_grenadelauncher_mp"):
		case joaat("pickup_ammo_pistol"):
		case joaat("pickup_ammo_smg"):
		case joaat("pickup_ammo_rifle"):
		case joaat("pickup_ammo_mg"):
		case joaat("pickup_ammo_shotgun"):
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("pickup_ammo_sniper"):
		case joaat("pickup_ammo_grenadelauncher"):
		case joaat("pickup_ammo_rpg"):
		case joaat("pickup_ammo_minigun"):
		case 610630637:
		case -1883407879:
		case joaat("pickup_ammo_flaregun"):
		case joaat("pickup_ammo_firework"):
		case -1892342586:
		case 2001257022:
		case joaat("pickup_vehicle_health_standard"):
		case joaat("pickup_vehicle_health_standard_low_glow"):
		case joaat("pickup_vehicle_armour_standard"):
		case joaat("pickup_vehicle_weapon_pistol"):
		case joaat("pickup_vehicle_weapon_combatpistol"):
		case joaat("pickup_vehicle_weapon_pistol50"):
		case joaat("pickup_vehicle_weapon_appistol"):
		case joaat("pickup_vehicle_weapon_microsmg"):
		case joaat("pickup_vehicle_weapon_smg"):
		case joaat("pickup_vehicle_weapon_sawnoff"):
		case joaat("pickup_vehicle_weapon_assaultsmg"):
		case joaat("pickup_vehicle_weapon_grenade"):
		case joaat("pickup_vehicle_weapon_smokegrenade"):
		case joaat("pickup_vehicle_weapon_stickybomb"):
		case joaat("pickup_vehicle_weapon_molotov"):
		case joaat("pickup_vehicle_custom_script"):
		case joaat("pickup_vehicle_custom_script_low_glow"):
		case joaat("pickup_vehicle_money_variable"):
		case joaat("pickup_portable_crate_unfixed"):
		case joaat("pickup_portable_crate_unfixed_low_glow"):
		case joaat("pickup_portable_package"):
		case joaat("pickup_portable_dlc_vehicle_package"):
		case joaat("pickup_submarine"):
		case joaat("pickup_parachute"):
		case joaat("pickup_custom_script"):
		case joaat("pickup_handcuff_key"):
		case joaat("pickup_camera"):
		case joaat("pickup_weapon_bottle"):
		case joaat("pickup_weapon_specialcarbine"):
		case joaat("pickup_weapon_snspistol"):
		case joaat("pickup_weapon_bullpuprifle"):
		case joaat("pickup_weapon_heavypistol"):
		case joaat("pickup_weapon_dagger"):
		case joaat("pickup_weapon_vintagepistol"):
		case joaat("pickup_weapon_gusenberg"):
		case joaat("pickup_weapon_firework"):
		case joaat("pickup_weapon_musket"):
		case joaat("pickup_weapon_hominglauncher"):
		case joaat("pickup_weapon_proxmine"):
		case joaat("pickup_weapon_hatchet"):
		case joaat("pickup_weapon_railgun"):
		case joaat("pickup_weapon_heavyshotgun"):
		case joaat("pickup_weapon_marksmanrifle"):
			return 1;
		
		default:
	}
	return 0;
}

void func_136(int iParam0)//Position - 0xAC55
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
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
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	var uVar59[4];
	var uVar64[4];
	var uVar69[4];
	var uVar74[4];
	
	iVar5 = DATAFILE::DATADICT_GET_DICT(iParam0, "obj");
	Global_1602437.f_26306 = DATAFILE::DATADICT_GET_INT(iVar5, "no");
	Global_1602437.f_26307 = DATAFILE::DATADICT_GET_INT(iVar5, "pal");
	Global_1602437.f_26308 = DATAFILE::DATADICT_GET_INT(iVar5, "rtm");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "loc");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "head");
	iVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "model");
	iVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ped");
	iVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "rsp");
	iVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "rot");
	iVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "cont");
	iVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "valu");
	iVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ammoforwep");
	iVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "cpup");
	iVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "cpupr");
	iVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "cpupt");
	iVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "bits");
	if (func_83())
	{
		iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obrr");
		iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obrmr");
		iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "osnt");
		iVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "osnei");
		iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "o2sp");
		iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "o2sh");
		iVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "mgbs");
		iVar26 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objct");
		iVar27 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "team");
		iVar28 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "spwn");
		iVar29 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objct2");
		iVar30 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "team2");
		iVar31 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "spwn2");
		iVar32 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objct3");
		iVar33 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "team3");
		iVar34 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "spwn3");
		iVar35 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objct4");
		iVar36 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "team4");
		iVar37 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "spwn4");
		iVar38 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "hlt");
		iVar39 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obb");
		iVar40 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obbc");
		iVar41 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objclt");
		iVar42 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objcr");
		iVar43 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obcra");
		iVar44 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ospdl");
		iVar45 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objcnm");
		iVar46 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objap");
		iVar47 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "objapt");
		iVar48 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obint");
		iVar49 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "obrom");
		iVar50 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "inco");
		iVar51 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "inhsh");
		iVar52 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vehpu");
		iVar53 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "airpu");
		iVar56 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "gotor");
		iVar57 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "nmpass");
		iVar58 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "nmfail");
		iVar54 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "omcp");
		iVar55 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "omcf");
		iVar2 = 0;
		while (iVar2 <= (Global_1602437.f_18 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&cVar3, "rule", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar59[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
				StringCopy(&cVar3, "pri", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar64[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
				StringCopy(&cVar3, "jtop", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar69[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
				StringCopy(&cVar3, "jtof", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar74[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_26306 - 1))
	{
		if (iVar0 < 20)
		{
			Global_1602437.f_26309[iVar0 /*86*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar6, iVar0) };
			Global_1602437.f_26309[iVar0 /*86*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar7, iVar0);
			iVar1 = DATAFILE::DATAARRAY_GET_INT(iVar14, iVar0);
			Global_1602437.f_26309[iVar0 /*86*/].f_15 = iVar1;
			if (Global_1602437.f_26309[iVar0 /*86*/].f_15 == joaat("hei_prop_bank_cctv_02"))
			{
				Global_1602437.f_26309[iVar0 /*86*/].f_15 = joaat("hei_prop_bank_cctv_01");
			}
			if (!STREAMING::IS_MODEL_VALID(Global_1602437.f_26309[iVar0 /*86*/].f_15))
			{
				Global_1602437.f_26309[iVar0 /*86*/].f_15 = joaat("prop_drug_package");
			}
			if (Global_1602437.f_26309[iVar0 /*86*/].f_15 == joaat("prop_cctv_cam_06a"))
			{
				Global_1602437.f_26309[iVar0 /*86*/].f_15 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_1602437.f_26309[iVar0 /*86*/].f_15 == joaat("prop_cctv_cam_07a"))
			{
				Global_1602437.f_26309[iVar0 /*86*/].f_15 = joaat("hei_prop_bank_cctv_02");
			}
			Global_1602437.f_26309[iVar0 /*86*/].f_26 = DATAFILE::DATAARRAY_GET_INT(iVar16, iVar0);
			Global_1602437.f_26309[iVar0 /*86*/].f_4 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar17, iVar0) };
			Global_1602437.f_26309[iVar0 /*86*/].f_30 = DATAFILE::DATAARRAY_GET_INT(iVar15, iVar0);
			Global_1602437.f_26309[iVar0 /*86*/].f_42 = DATAFILE::DATAARRAY_GET_INT(iVar18, iVar0);
			Global_1602437.f_26309[iVar0 /*86*/].f_43 = DATAFILE::DATAARRAY_GET_INT(iVar19, iVar0);
			Global_1602437.f_26309[iVar0 /*86*/].f_44 = DATAFILE::DATAARRAY_GET_INT(iVar20, iVar0);
			Global_1602437.f_26309[iVar0 /*86*/].f_45 = DATAFILE::DATAARRAY_GET_INT(iVar21, iVar0);
			Global_1602437.f_26309[iVar0 /*86*/].f_46 = DATAFILE::DATAARRAY_GET_INT(iVar23, iVar0);
			Global_1602437.f_26309[iVar0 /*86*/].f_47 = DATAFILE::DATAARRAY_GET_INT(iVar22, iVar0);
			Global_1602437.f_26309[iVar0 /*86*/].f_40 = DATAFILE::DATAARRAY_GET_INT(iVar24, iVar0);
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar53, iVar0) == 2)
			{
				if (DATAFILE::DATAARRAY_GET_INT(iVar53, iVar0) == 1)
				{
					if (!MISC::IS_BIT_SET(Global_1602437.f_26309[iVar0 /*86*/].f_40, 4))
					{
						MISC::SET_BIT(&(Global_1602437.f_26309[iVar0 /*86*/].f_40), 4);
					}
				}
			}
			if (func_83())
			{
				if (((DATAFILE::DATAARRAY_GET_TYPE(iVar8, iVar0) == 3 && DATAFILE::DATAARRAY_GET_TYPE(iVar9, iVar0) == 3) && DATAFILE::DATAARRAY_GET_TYPE(iVar10, iVar0) == 2) && DATAFILE::DATAARRAY_GET_TYPE(iVar11, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_7 = DATAFILE::DATAARRAY_GET_FLOAT(iVar8, iVar0);
					Global_1602437.f_26309[iVar0 /*86*/].f_8 = DATAFILE::DATAARRAY_GET_FLOAT(iVar9, iVar0);
					Global_1602437.f_26309[iVar0 /*86*/].f_9 = DATAFILE::DATAARRAY_GET_INT(iVar10, iVar0);
					Global_1602437.f_26309[iVar0 /*86*/].f_10 = DATAFILE::DATAARRAY_GET_INT(iVar11, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_7 = 50f;
					Global_1602437.f_26309[iVar0 /*86*/].f_8 = 0f;
					Global_1602437.f_26309[iVar0 /*86*/].f_9 = 0;
					Global_1602437.f_26309[iVar0 /*86*/].f_10 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar12, iVar0) == 5 && DATAFILE::DATAARRAY_GET_TYPE(iVar13, iVar0) == 3)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_11 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar12, iVar0) };
					Global_1602437.f_26309[iVar0 /*86*/].f_14 = DATAFILE::DATAARRAY_GET_FLOAT(iVar13, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_11 = { 0f, 0f, 0f };
					Global_1602437.f_26309[iVar0 /*86*/].f_14 = 0f;
				}
				Global_1602437.f_26309[iVar0 /*86*/].f_41 = DATAFILE::DATAARRAY_GET_INT(iVar25, iVar0);
				Global_1602437.f_26309[iVar0 /*86*/].f_31 = DATAFILE::DATAARRAY_GET_INT(iVar26, iVar0);
				Global_1602437.f_26309[iVar0 /*86*/].f_32 = DATAFILE::DATAARRAY_GET_INT(iVar27, iVar0);
				Global_1602437.f_26309[iVar0 /*86*/].f_33 = DATAFILE::DATAARRAY_GET_INT(iVar28, iVar0);
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar29, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_56 = DATAFILE::DATAARRAY_GET_INT(iVar29, iVar0);
					Global_1602437.f_26309[iVar0 /*86*/].f_53 = DATAFILE::DATAARRAY_GET_INT(iVar30, iVar0);
					Global_1602437.f_26309[iVar0 /*86*/].f_59 = DATAFILE::DATAARRAY_GET_INT(iVar31, iVar0);
					Global_1602437.f_26309[iVar0 /*86*/].f_57 = DATAFILE::DATAARRAY_GET_INT(iVar32, iVar0);
					Global_1602437.f_26309[iVar0 /*86*/].f_54 = DATAFILE::DATAARRAY_GET_INT(iVar33, iVar0);
					Global_1602437.f_26309[iVar0 /*86*/].f_60 = DATAFILE::DATAARRAY_GET_INT(iVar34, iVar0);
					Global_1602437.f_26309[iVar0 /*86*/].f_58 = DATAFILE::DATAARRAY_GET_INT(iVar35, iVar0);
					Global_1602437.f_26309[iVar0 /*86*/].f_55 = DATAFILE::DATAARRAY_GET_INT(iVar36, iVar0);
					Global_1602437.f_26309[iVar0 /*86*/].f_61 = DATAFILE::DATAARRAY_GET_INT(iVar37, iVar0);
				}
				Global_1602437.f_26309[iVar0 /*86*/].f_27 = DATAFILE::DATAARRAY_GET_INT(iVar38, iVar0);
				Global_1602437.f_26309[iVar0 /*86*/].f_28 = DATAFILE::DATAARRAY_GET_INT(iVar39, iVar0);
				Global_1602437.f_26309[iVar0 /*86*/].f_34 = DATAFILE::DATAARRAY_GET_INT(iVar52, iVar0);
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar40, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_29 = DATAFILE::DATAARRAY_GET_INT(iVar40, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_29 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar42, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_48 = DATAFILE::DATAARRAY_GET_INT(iVar42, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_48 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar41, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_49 = DATAFILE::DATAARRAY_GET_INT(iVar41, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_49 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar43, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_50 = DATAFILE::DATAARRAY_GET_INT(iVar43, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_50 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar44, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_52 = DATAFILE::DATAARRAY_GET_INT(iVar44, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_52 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar45, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_77 = DATAFILE::DATAARRAY_GET_INT(iVar45, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_77 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar54, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_74 = DATAFILE::DATAARRAY_GET_INT(iVar54, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_74 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar55, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_75 = DATAFILE::DATAARRAY_GET_INT(iVar55, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_75 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar46, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_78 = DATAFILE::DATAARRAY_GET_INT(iVar46, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_78 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar47, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_79 = DATAFILE::DATAARRAY_GET_INT(iVar47, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_79 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar48, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_80 = DATAFILE::DATAARRAY_GET_INT(iVar48, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_80 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar49, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_81 = DATAFILE::DATAARRAY_GET_INT(iVar49, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_81 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar50, iVar0) == 5 && DATAFILE::DATAARRAY_GET_TYPE(iVar51, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_82 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar50, iVar0) };
					Global_1602437.f_26309[iVar0 /*86*/].f_85 = DATAFILE::DATAARRAY_GET_INT(iVar51, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_82 = { 0f, 0f, 0f };
					Global_1602437.f_26309[iVar0 /*86*/].f_85 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar56, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_51 = DATAFILE::DATAARRAY_GET_INT(iVar56, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_51 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar57, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_72 = DATAFILE::DATAARRAY_GET_INT(iVar57, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_72 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar58, iVar0) == 2)
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_73 = DATAFILE::DATAARRAY_GET_INT(iVar58, iVar0);
				}
				else
				{
					Global_1602437.f_26309[iVar0 /*86*/].f_73 = -1;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_1602437.f_18 - 1))
				{
					if (iVar2 < 4)
					{
						Global_1602437.f_26309[iVar0 /*86*/].f_16[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar59[iVar2], iVar0);
						Global_1602437.f_26309[iVar0 /*86*/].f_21[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar64[iVar2], iVar0);
						if (Global_1602437.f_26309[iVar0 /*86*/].f_21[iVar2] == -1)
						{
							Global_1602437.f_26309[iVar0 /*86*/].f_21[iVar2] = 99999;
						}
						if (DATAFILE::DATAARRAY_GET_TYPE(uVar69[iVar2], iVar0) == 2)
						{
							Global_1602437.f_26309[iVar0 /*86*/].f_62[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar69[iVar2], iVar0);
						}
						else
						{
							Global_1602437.f_26309[iVar0 /*86*/].f_62[iVar2] = 0;
						}
						if (DATAFILE::DATAARRAY_GET_TYPE(uVar74[iVar2], iVar0) == 2)
						{
							Global_1602437.f_26309[iVar0 /*86*/].f_67[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar74[iVar2], iVar0);
						}
						else
						{
							Global_1602437.f_26309[iVar0 /*86*/].f_67[iVar2] = 0;
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
}

void func_137(int iParam0)//Position - 0xB8DA
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10[4];
	var uVar15[4];
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	iVar6 = DATAFILE::DATADICT_GET_DICT(iParam0, "zone");
	Global_1602437.f_57001 = DATAFILE::DATADICT_GET_INT(iVar6, "no");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vto");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "vld");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "zntp");
	iVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "znbs");
	iVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "znwd");
	iVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "znwvd");
	iVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "znatp");
	iVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "znwid");
	iVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar6, "zndel");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar10[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar15[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar6, &cVar2);
		iVar0++;
	}
	if (Global_1602437.f_57001 > 10)
	{
		Global_1602437.f_57001 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_57001 - 1))
	{
		Global_1602437.f_57024[iVar0 /*26*/][0 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar7, iVar0) };
		Global_1602437.f_57024[iVar0 /*26*/][1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar8, iVar0) };
		Global_1602437.f_57024[iVar0 /*26*/].f_9 = DATAFILE::DATAARRAY_GET_INT(iVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar10[iVar1], iVar0) == 2)
			{
				Global_1602437.f_57024[iVar0 /*26*/].f_10[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar10[iVar1], iVar0);
			}
			else
			{
				Global_1602437.f_57024[iVar0 /*26*/].f_10[iVar1] = -1;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar15[iVar1], iVar0) == 2)
			{
				Global_1602437.f_57024[iVar0 /*26*/].f_15[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar15[iVar1], iVar0);
			}
			else
			{
				Global_1602437.f_57024[iVar0 /*26*/].f_15[iVar1] = 99999;
			}
			iVar1++;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar20, iVar0) == 2)
		{
			Global_1602437.f_57024[iVar0 /*26*/].f_20 = DATAFILE::DATAARRAY_GET_INT(iVar20, iVar0);
		}
		else
		{
			Global_1602437.f_57024[iVar0 /*26*/].f_20 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar21, iVar0) == 3)
		{
			Global_1602437.f_57024[iVar0 /*26*/].f_22 = DATAFILE::DATAARRAY_GET_FLOAT(iVar21, iVar0);
		}
		else
		{
			Global_1602437.f_57024[iVar0 /*26*/].f_22 = 0f;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar22, iVar0) == 3)
		{
			Global_1602437.f_57024[iVar0 /*26*/].f_23 = DATAFILE::DATAARRAY_GET_FLOAT(iVar22, iVar0);
		}
		else
		{
			Global_1602437.f_57024[iVar0 /*26*/].f_23 = 0f;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar23, iVar0) == 2)
		{
			Global_1602437.f_57024[iVar0 /*26*/].f_8 = DATAFILE::DATAARRAY_GET_INT(iVar23, iVar0);
		}
		else
		{
			Global_1602437.f_57024[iVar0 /*26*/].f_8 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar24, iVar0) == 3)
		{
			Global_1602437.f_57024[iVar0 /*26*/].f_7 = DATAFILE::DATAARRAY_GET_FLOAT(iVar24, iVar0);
		}
		else
		{
			Global_1602437.f_57024[iVar0 /*26*/].f_7 = 0f;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar25, iVar0) == 2)
		{
			Global_1602437.f_57024[iVar0 /*26*/].f_21 = DATAFILE::DATAARRAY_GET_INT(iVar25, iVar0);
		}
		else
		{
			Global_1602437.f_57024[iVar0 /*26*/].f_21 = 0;
		}
		iVar0++;
	}
}

void func_138(int iParam0)//Position - 0xBC2A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = DATAFILE::DATADICT_GET_DICT(iParam0, "usj");
	Global_1602437.f_56376 = DATAFILE::DATADICT_GET_INT(iVar1, "no");
	iVar2 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "vto");
	iVar3 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "vld");
	iVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "vcm");
	if (Global_1602437.f_56376 > 10)
	{
		Global_1602437.f_56376 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_56376 - 1))
	{
		Global_1602437.f_56377[iVar0 /*9*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar2, iVar0) };
		Global_1602437.f_56377[iVar0 /*9*/].f_3 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar3, iVar0) };
		Global_1602437.f_56377[iVar0 /*9*/].f_6 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar4, iVar0) };
		iVar0++;
	}
}

void func_139(int iParam0)//Position - 0xBCF7
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
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
	var uVar27[4];
	
	if (DATAFILE::DATADICT_GET_DICT(iParam0, "ddtrig") == 0)
	{
		return;
	}
	iVar4 = DATAFILE::DATADICT_GET_DICT(iParam0, "ddtrig");
	Global_1602437.f_60327 = DATAFILE::DATADICT_GET_INT(iVar4, "no");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "id");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "fid");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "rule");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "team");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "pos");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "rad");
	iVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "tdel");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "tpnt");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "crkls");
	iVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "fcsped");
	iVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "prty");
	iVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dbs");
	iVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dbs2");
	iVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dspk");
	iVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "dspk2");
	iVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "panim");
	iVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "blok");
	iVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "root");
	iVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "mgveh");
	iVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "vehtg");
	iVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "prerq");
	iVar26 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "vehdm");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar27[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		iVar0++;
	}
	if (Global_1602437.f_60327 > 69)
	{
		Global_1602437.f_60327 = 69;
	}
	if (DATAFILE::DATAARRAY_GET_TYPE(iVar8, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1602437.f_60327 - 1))
		{
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar8, iVar0) == 2)
			{
				func_140(&(Global_1602437.f_57342[iVar0 /*39*/]), iVar0);
				if (iVar6 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar6, iVar0) == 2)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_1 = DATAFILE::DATAARRAY_GET_INT(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_1602437.f_57342[iVar0 /*39*/] = DATAFILE::DATAARRAY_GET_INT(iVar5, iVar0);
				}
				if (iVar7 != 0)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_2 = DATAFILE::DATAARRAY_GET_INT(iVar7, iVar0);
				}
				if (iVar8 != 0)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_3 = DATAFILE::DATAARRAY_GET_INT(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_5 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar9, iVar0) };
				}
				if (iVar10 != 0)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_8 = DATAFILE::DATAARRAY_GET_FLOAT(iVar10, iVar0);
				}
				if (iVar11 != 0)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_4 = DATAFILE::DATAARRAY_GET_INT(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_11 = DATAFILE::DATAARRAY_GET_INT(iVar12, iVar0);
				}
				if (iVar15 != 0)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_12 = DATAFILE::DATAARRAY_GET_INT(iVar15, iVar0);
				}
				if (iVar16 != 0)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_9 = DATAFILE::DATAARRAY_GET_INT(iVar16, iVar0);
				}
				if (iVar17 != 0)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_10 = DATAFILE::DATAARRAY_GET_INT(iVar17, iVar0);
				}
				if (iVar23 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar23, iVar0) == 2)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_16 = DATAFILE::DATAARRAY_GET_INT(iVar23, iVar0);
				}
				if (iVar13 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar13, iVar0) == 2)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_20 = DATAFILE::DATAARRAY_GET_INT(iVar13, iVar0);
				}
				if (iVar14 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar14, iVar0) == 2)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_21 = DATAFILE::DATAARRAY_GET_INT(iVar14, iVar0);
				}
				if (iVar18 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar18, iVar0) == 2)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_13 = DATAFILE::DATAARRAY_GET_INT(iVar18, iVar0);
				}
				if (iVar19 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar19, iVar0) == 2)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_14 = DATAFILE::DATAARRAY_GET_INT(iVar19, iVar0);
				}
				if (iVar20 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar20, iVar0) == 2)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_15 = DATAFILE::DATAARRAY_GET_INT(iVar20, iVar0);
				}
				if (iVar24 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar24, iVar0) == 2)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_17 = DATAFILE::DATAARRAY_GET_INT(iVar24, iVar0);
				}
				if (iVar25 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar25, iVar0) == 2)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_18 = DATAFILE::DATAARRAY_GET_INT(iVar25, iVar0);
				}
				if (iVar26 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar26, iVar0) == 2)
				{
					Global_1602437.f_57342[iVar0 /*39*/].f_19 = DATAFILE::DATAARRAY_GET_INT(iVar26, iVar0);
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar27[iVar1] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar27[iVar1], iVar0) == 2)
					{
						Global_1602437.f_57342[iVar0 /*39*/].f_22[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar27[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar21 != 0)
				{
					StringCopy(&(Global_1602437.f_57342[iVar0 /*39*/].f_27), DATAFILE::DATAARRAY_GET_STRING(iVar21, iVar0), 24);
				}
				if (iVar22 != 0)
				{
					StringCopy(&(Global_1602437.f_57342[iVar0 /*39*/].f_33), DATAFILE::DATAARRAY_GET_STRING(iVar22, iVar0), 24);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1602437.f_60327 - 1))
		{
			Global_1602437.f_57342[iVar0 /*39*/] = 0;
			Global_1602437.f_57342[iVar0 /*39*/].f_2 = -1;
			Global_1602437.f_57342[iVar0 /*39*/].f_3 = -1;
			Global_1602437.f_57342[iVar0 /*39*/].f_5 = { 0f, 0f, 0f };
			Global_1602437.f_57342[iVar0 /*39*/].f_8 = 3f;
			Global_1602437.f_57342[iVar0 /*39*/].f_4 = 0;
			Global_1602437.f_57342[iVar0 /*39*/].f_11 = -1;
			Global_1602437.f_57342[iVar0 /*39*/].f_20 = 0;
			Global_1602437.f_57342[iVar0 /*39*/].f_12 = 0;
			Global_1602437.f_57342[iVar0 /*39*/].f_9 = 0;
			Global_1602437.f_57342[iVar0 /*39*/].f_10 = 0;
			Global_1602437.f_57342[iVar0 /*39*/].f_13 = -1;
			Global_1602437.f_57342[iVar0 /*39*/].f_14 = -1;
			Global_1602437.f_57342[iVar0 /*39*/].f_15 = 0;
			StringCopy(&(Global_1602437.f_57342[iVar0 /*39*/].f_27), "", 24);
			StringCopy(&(Global_1602437.f_57342[iVar0 /*39*/].f_33), "", 24);
			Global_1602437.f_57342[iVar0 /*39*/].f_16 = -1;
			Global_1602437.f_57342[iVar0 /*39*/].f_17 = -1;
			Global_1602437.f_57342[iVar0 /*39*/].f_18 = -1;
			Global_1602437.f_57342[iVar0 /*39*/].f_19 = 0;
			iVar0++;
		}
	}
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, "dtmp") == 2)
	{
		Global_1602437.f_60323[0] = DATAFILE::DATADICT_GET_INT(iParam0, "dtmp");
	}
	else
	{
		Global_1602437.f_60323[0] = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, "dtmp2") == 2)
	{
		Global_1602437.f_60323[1] = DATAFILE::DATADICT_GET_INT(iParam0, "dtmp2");
	}
	else
	{
		Global_1602437.f_60323[1] = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, "dtmp3") == 2)
	{
		Global_1602437.f_60323[2] = DATAFILE::DATADICT_GET_INT(iParam0, "dtmp3");
	}
	else
	{
		Global_1602437.f_60323[2] = 0;
	}
}

void func_140(var uParam0, int iParam1)//Position - 0xC449
{
	int iVar0;
	
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = 3f;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = -1;
	uParam0->f_14 = -1;
	uParam0->f_15 = 0;
	uParam0->f_16 = -1;
	uParam0->f_18 = -1;
	uParam0->f_17 = -1;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = -1;
	StringCopy(&(uParam0->f_27), "", 24);
	StringCopy(&(uParam0->f_33), "", 24);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_22[iVar0] = -1;
		iVar0++;
	}
	if (iParam1 != -1)
	{
		MISC::CLEAR_BIT(&(Global_1602437.f_60323[(iParam1 / 32)]), (iParam1 % 32));
	}
}

void func_141(int iParam0)//Position - 0xC506
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	int iVar16;
	char[] cVar17[8];
	
	iVar2 = DATAFILE::DATADICT_GET_DICT(iParam0, "race");
	Global_1602437.f_25918 = DATAFILE::DATADICT_GET_INT(iVar2, "chp");
	iVar3 = (Global_1602437.f_25918 - 1);
	Global_1602437.f_25919 = DATAFILE::DATADICT_GET_INT(iVar2, "lap");
	Global_1602437.f_25920 = DATAFILE::DATADICT_GET_INT(iVar2, "type");
	if (func_68() == 2)
	{
		if (Global_1602437.f_25920 == 6)
		{
			Global_1602437.f_25920 = 0;
		}
		else if (Global_1602437.f_25920 == 7)
		{
			Global_1602437.f_25920 = 1;
		}
	}
	Global_1602437.f_25921 = DATAFILE::DATADICT_GET_INT(iVar2, "gtar");
	Global_1602437.f_26247 = DATAFILE::DATADICT_GET_FLOAT(iVar2, "head");
	Global_1602437.f_26248 = DATAFILE::DATADICT_GET_FLOAT(iVar2, "lrgs");
	Global_1602437.f_26249 = DATAFILE::DATADICT_GET_FLOAT(iVar2, "udgs");
	Global_1602437.f_26250 = DATAFILE::DATADICT_GET_FLOAT(iVar2, "gw");
	Global_1602437.f_26251 = DATAFILE::DATADICT_GET_FLOAT(iVar2, "gl");
	Global_1602437.f_26252 = DATAFILE::DATADICT_GET_INT(iVar2, "lanes");
	Global_1602437.f_22502 = { DATAFILE::DATADICT_GET_VECTOR(iVar2, "grid") };
	Global_1602437.f_25923 = DATAFILE::DATADICT_GET_INT(iVar2, "icv");
	Global_1602437.f_25925 = DATAFILE::DATADICT_GET_INT(iVar2, "tri1");
	Global_1602437.f_25926 = DATAFILE::DATADICT_GET_INT(iVar2, "tri2");
	Global_1602437.f_25927 = DATAFILE::DATADICT_GET_INT(iVar2, "clbs");
	Global_1602437.f_26246 = DATAFILE::DATADICT_GET_INT(iVar2, "ptp");
	Global_1602437.f_26244 = DATAFILE::DATADICT_GET_INT(iVar2, "strtg");
	Global_1602437.f_26245 = DATAFILE::DATADICT_GET_INT(iVar2, "rcdam");
	Global_1602437.f_23701 = DATAFILE::DATADICT_GET_FLOAT(iVar2, "rdis");
	Global_1602437.f_26242 = DATAFILE::DATADICT_GET_INT(iVar2, "gridty");
	iVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "chh");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "chs");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "chl");
	uVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "rsp");
	if (Global_1602437.f_25920 == 8)
	{
		Global_1602437.f_25918 = 0;
		iVar0 = 0;
		while (iVar0 <= 69)
		{
			if (!func_81(DATAFILE::DATAARRAY_GET_VECTOR(iVar6, iVar0)))
			{
				Global_1602437.f_25918++;
			}
			iVar0++;
		}
		iVar3 = Global_1602437.f_25918;
	}
	iVar8 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 70)
		{
			if (Global_1602437.f_25920 == 8)
			{
				iVar8 = func_142(iVar6, iVar8);
			}
			else
			{
				iVar8 = iVar0;
			}
			Global_1602437.f_23206[iVar0 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar6, iVar8) };
			Global_1602437.f_23488[iVar0] = DATAFILE::DATAARRAY_GET_FLOAT(iVar4, iVar8);
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar5, iVar8) == 3)
			{
				Global_1602437.f_23630[iVar0] = DATAFILE::DATAARRAY_GET_FLOAT(iVar5, iVar8);
			}
			else
			{
				Global_1602437.f_23630[iVar0] = 1f;
			}
			if (Global_1602437.f_23630[iVar0] < 1f)
			{
				Global_1602437.f_23630[iVar0] = 1f;
			}
			Global_1602437.f_23417[iVar0] = DATAFILE::DATAARRAY_GET_BOOL(uVar7, iVar8);
			iVar8++;
		}
		iVar0++;
	}
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_13 - 1))
	{
		if (iVar0 < 32)
		{
			iVar1 = DATAFILE::DATAARRAY_GET_INT(iVar9, iVar0);
			Global_1602437.f_26255[iVar0] = iVar1;
		}
		iVar0++;
	}
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "aveh");
	iVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "adlc");
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar1 = DATAFILE::DATAARRAY_GET_INT(iVar10, iVar0);
		Global_1602437.f_25928[iVar0] = iVar1;
		Global_1602437.f_25944[iVar0] = 0;
		Global_1602437.f_25944[iVar0] = DATAFILE::DATAARRAY_GET_INT(iVar11, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar17, "vspn", 8);
		StringIntConCat(&cVar17, iVar0, 8);
		uVar12[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar2, &cVar17);
		iVar16 = 0;
		while (iVar16 <= iVar3)
		{
			Global_1602437.f_22505[iVar16 /*10*/][iVar0 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar12[iVar0], iVar16) };
			iVar16++;
		}
		iVar0++;
	}
}

int func_142(int iParam0, int iParam1)//Position - 0xC8F7
{
	int iVar0;
	
	iVar0 = iParam1;
	while (iVar0 <= 69)
	{
		if (!func_81(DATAFILE::DATAARRAY_GET_VECTOR(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(int iParam0)//Position - 0xC929
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (DATAFILE::DATADICT_GET_DICT(iParam0, "dhprop") == 0)
	{
		return;
	}
	iVar1 = DATAFILE::DATADICT_GET_DICT(iParam0, "dhprop");
	Global_1602437.f_69942 = DATAFILE::DATADICT_GET_INT(iVar1, "no");
	iVar2 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "pos");
	iVar3 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "mn");
	if (Global_1602437.f_69942 > 25)
	{
		Global_1602437.f_69942 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_69942 - 1))
	{
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar2, iVar0) == 5)
		{
			Global_1602437.f_69841[iVar0 /*4*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar2, iVar0) };
			Global_1602437.f_69841[iVar0 /*4*/].f_3 = DATAFILE::DATAARRAY_GET_INT(iVar3, iVar0);
		}
		iVar0++;
	}
}

void func_144(int iParam0)//Position - 0xC9EC
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
	
	if (DATAFILE::DATADICT_GET_DICT(iParam0, "ddblip") == 0)
	{
		return;
	}
	iVar1 = DATAFILE::DATADICT_GET_DICT(iParam0, "ddblip");
	Global_1602437.f_69840 = DATAFILE::DATADICT_GET_INT(iVar1, "no");
	iVar2 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "pos");
	iVar3 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "rule");
	iVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "team");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "type");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "size");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "veh");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "clr");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "bits");
	if (Global_1602437.f_69840 > 10)
	{
		Global_1602437.f_69840 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_69840 - 1))
	{
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar2, iVar0) == 5)
		{
			Global_1602437.f_69739[iVar0 /*10*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar2, iVar0) };
			Global_1602437.f_69739[iVar0 /*10*/].f_3 = DATAFILE::DATAARRAY_GET_INT(iVar3, iVar0);
			Global_1602437.f_69739[iVar0 /*10*/].f_4 = DATAFILE::DATAARRAY_GET_INT(iVar4, iVar0);
			Global_1602437.f_69739[iVar0 /*10*/].f_8 = DATAFILE::DATAARRAY_GET_INT(iVar8, iVar0);
			Global_1602437.f_69739[iVar0 /*10*/].f_9 = DATAFILE::DATAARRAY_GET_INT(iVar9, iVar0);
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar5, iVar0) == 2)
		{
			Global_1602437.f_69739[iVar0 /*10*/].f_6 = DATAFILE::DATAARRAY_GET_INT(iVar5, iVar0);
		}
		else
		{
			Global_1602437.f_69739[iVar0 /*10*/].f_6 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar6, iVar0) == 2)
		{
			Global_1602437.f_69739[iVar0 /*10*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar6, iVar0);
		}
		else
		{
			Global_1602437.f_69739[iVar0 /*10*/].f_5 = 4;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_1602437.f_69739[iVar0 /*10*/].f_7 = DATAFILE::DATAARRAY_GET_INT(iVar7, iVar0);
		}
		else
		{
			Global_1602437.f_69739[iVar0 /*10*/].f_7 = -1;
		}
		iVar0++;
	}
}

void func_145(int iParam0)//Position - 0xCBDD
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14[5];
	var uVar20[5];
	var uVar26[5];
	var uVar32[5];
	var uVar38[5];
	var uVar44[5];
	var uVar50[5];
	var uVar56[5];
	int iVar62;
	var uVar63[5];
	var uVar69[5];
	var uVar75[5];
	
	if (DATAFILE::DATADICT_GET_DICT(iParam0, "mocap") == 0)
	{
		return;
	}
	iVar5 = DATAFILE::DATADICT_GET_DICT(iParam0, "mocap");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "name");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "bits");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "bits2");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "timer");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "rng");
	iVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ccp");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ccr");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ccs");
	iVar62 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "pcvid");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_1602437.f_66780[iVar0 /*434*/]), DATAFILE::DATAARRAY_GET_STRING(iVar6, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_1602437.f_66780[iVar0 /*434*/]), "", 64);
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_16 = DATAFILE::DATAARRAY_GET_INT(iVar7, iVar0);
		}
		else
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_16 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar8, iVar0) == 2)
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_17 = DATAFILE::DATAARRAY_GET_INT(iVar8, iVar0);
		}
		else
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_17 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar62, iVar0) == 2)
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_424 = DATAFILE::DATAARRAY_GET_INT(iVar62, iVar0);
		}
		else
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_424 = -1;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar9, iVar0) == 2)
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_61 = DATAFILE::DATAARRAY_GET_INT(iVar9, iVar0);
		}
		else
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_61 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar10, iVar0) == 2)
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_62 = DATAFILE::DATAARRAY_GET_INT(iVar10, iVar0);
		}
		else
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_62 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar11, iVar0) == 5)
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_54 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar11, iVar0) };
		}
		else
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_54 = { 0f, 0f, 0f };
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar12, iVar0) == 3)
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_60 = DATAFILE::DATAARRAY_GET_FLOAT(iVar12, iVar0);
		}
		else
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_60 = 0f;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar13, iVar0) == 5)
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_57 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar13, iVar0) };
		}
		else
		{
			Global_1602437.f_66780[iVar0 /*434*/].f_57 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar14[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar20[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar26[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar32[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar38[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar44[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
		StringCopy(&cVar3, "mcebs", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar50[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar56[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpls", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar63[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpds", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar69[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpdi", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar75[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar14[iVar0], iVar1) == 5)
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_18[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar14[iVar0], iVar1) };
			}
			else
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_18[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar20[iVar0], iVar1) == 5)
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_31[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar20[iVar0], iVar1) };
			}
			else
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_31[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar26[iVar0], iVar1) == 3)
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_44[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar26[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_44[iVar1] = 0f;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar32[iVar0], iVar1) == 3)
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_49[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar32[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_49[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar63[iVar0], iVar2) == 2)
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_425[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar63[iVar0], iVar2);
			}
			else
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_425[iVar2] = 0;
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 <= 0)
		{
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar69[iVar0], iVar2) == 2)
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_430[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar69[iVar0], iVar2);
			}
			else
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_430[iVar2] = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar75[iVar0], iVar2) == 2)
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_432[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar75[iVar0], iVar2);
			}
			else
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_432[iVar2] = 0;
			}
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar38[iVar0], iVar1) == 2)
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = DATAFILE::DATAARRAY_GET_INT(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = -1;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar44[iVar0], iVar1) == 2)
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_63[iVar1 /*12*/] = DATAFILE::DATAARRAY_GET_INT(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_63[iVar1 /*12*/] = -1;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar50[iVar0], iVar1) == 2)
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = DATAFILE::DATAARRAY_GET_INT(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_66780[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar56[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1602437.f_66780[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), DATAFILE::DATAARRAY_GET_STRING(uVar56[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_1602437.f_66780[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_146(int iParam0)//Position - 0xD3A4
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11[5];
	var uVar17[5];
	var uVar23[5];
	var uVar29[5];
	var uVar35[5];
	var uVar41[5];
	var uVar47[5];
	var uVar53[5];
	var uVar59[5];
	var uVar65[5];
	var uVar71[5];
	var uVar77[5];
	var uVar83[5];
	var uVar89[5];
	var uVar95[5];
	var uVar101[5];
	var uVar107[5];
	var uVar113[5];
	var uVar119[5];
	var uVar125[5];
	var uVar131[5];
	var uVar137[5];
	var uVar143[5];
	var uVar149[5];
	var uVar155[5];
	int iVar161;
	int iVar162;
	int iVar163;
	int iVar164;
	int iVar165;
	int iVar166;
	int iVar167;
	
	if (DATAFILE::DATADICT_GET_DICT(iParam0, "cuts") == 0)
	{
		return;
	}
	iVar4 = DATAFILE::DATADICT_GET_DICT(iParam0, "cuts");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "name");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "bits");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "shot");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "anim");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "midp");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "rng");
	iVar161 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "train");
	iVar162 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "trahl");
	iVar163 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "traou");
	iVar164 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "trapo");
	iVar165 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "ccp");
	iVar166 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "ccr");
	iVar167 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "ccs");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar5, iVar0) == 4)
		{
			StringCopy(&(Global_1602437.f_60434[iVar0 /*1269*/]), DATAFILE::DATAARRAY_GET_STRING(iVar5, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_1602437.f_60434[iVar0 /*1269*/]), "", 16);
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar6, iVar0) == 2)
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_4 = DATAFILE::DATAARRAY_GET_INT(iVar6, iVar0);
		}
		else
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_4 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar6, iVar0) == 2)
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar6, iVar0);
		}
		else
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_5 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_43 = DATAFILE::DATAARRAY_GET_INT(iVar7, iVar0);
		}
		else
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_43 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar8, iVar0) == 2)
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_42 = DATAFILE::DATAARRAY_GET_INT(iVar8, iVar0);
		}
		else
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_42 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar9, iVar0) == 2)
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_44 = DATAFILE::DATAARRAY_GET_INT(iVar9, iVar0);
		}
		else
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_44 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar10, iVar0) == 2)
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_735 = DATAFILE::DATAARRAY_GET_INT(iVar10, iVar0);
		}
		else
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_735 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar165, iVar0) == 5)
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_728 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar165, iVar0) };
		}
		else
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_728 = { 0f, 0f, 0f };
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar166, iVar0) == 3)
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_731 = DATAFILE::DATAARRAY_GET_FLOAT(iVar166, iVar0);
		}
		else
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_731 = 0f;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar167, iVar0) == 5)
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_732 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar167, iVar0) };
		}
		else
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_732 = { 0f, 0f, 0f };
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar161, iVar0) == 2)
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_436 = DATAFILE::DATAARRAY_GET_INT(iVar161, iVar0);
		}
		else
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_436 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar162, iVar0) == 2)
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_438 = DATAFILE::DATAARRAY_GET_INT(iVar162, iVar0);
		}
		else
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_438 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar163, iVar0) == 2)
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_437 = DATAFILE::DATAARRAY_GET_INT(iVar163, iVar0);
		}
		else
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_437 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar164, iVar0) == 5)
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_439 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar164, iVar0) };
		}
		else
		{
			Global_1602437.f_60434[iVar0 /*1269*/].f_439 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar2, "int", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar11[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "ctp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar17[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "sps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar23[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "eps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar29[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "srt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar35[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "ert", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar41[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "sfv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar47[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "efv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar53[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "ati", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar113[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "ato", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar119[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "atr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar125[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "ala", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar131[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "csp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar137[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "csr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar143[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "cssbs", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar71[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "skt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar77[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "skm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar83[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "eind", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar59[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "etyp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar65[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar95[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar101[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar89[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar107[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "camnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar149[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		StringCopy(&cVar2, "locnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar155[iVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar95[iVar0], iVar1) == 5)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar95[iVar0], iVar1) };
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar101[iVar0], iVar1) == 5)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar101[iVar0], iVar1) };
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar89[iVar0], iVar1) == 3)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_32[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar89[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_32[iVar1] = 0f;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar107[iVar0], iVar1) == 3)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_37[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar107[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_37[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar11[iVar0], iVar1) == 2)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_45[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar11[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_45[iVar1] = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar17[iVar0], iVar1) == 2)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_66[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar17[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_66[iVar1] = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar23[iVar0], iVar1) == 5)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar23[iVar0], iVar1) };
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar29[iVar0], iVar1) == 5)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar29[iVar0], iVar1) };
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar35[iVar0], iVar1) == 5)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar35[iVar0], iVar1) };
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar41[iVar0], iVar1) == 5)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar41[iVar0], iVar1) };
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar47[iVar0], iVar1) == 3)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_331[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar47[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_331[iVar1] = 0f;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar53[iVar0], iVar1) == 3)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_352[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar53[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_352[iVar1] = 0f;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar71[iVar0], iVar1) == 2)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_373[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar71[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_373[iVar1] = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar77[iVar0], iVar1) == 2)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_394[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar77[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_394[iVar1] = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar83[iVar0], iVar1) == 3)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_415[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar83[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_415[iVar1] = 0f;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar113[iVar0], iVar1) == 2)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_524[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar113[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_524[iVar1] = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar119[iVar0], iVar1) == 5)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar119[iVar0], iVar1) };
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar125[iVar0], iVar1) == 5)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar125[iVar0], iVar1) };
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar131[iVar0], iVar1) == 5)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar131[iVar0], iVar1) };
				Global_1602437.f_69985[iVar1] = Global_1602437.f_60434[iVar0 /*1269*/].f_667[iVar1 /*3*/];
				Global_1602437.f_70006[iVar1] = Global_1602437.f_60434[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_1;
				Global_1602437.f_70027[iVar1] = Global_1602437.f_60434[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_2;
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar137[iVar0], iVar1) == 5)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar137[iVar0], iVar1) };
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar143[iVar0], iVar1) == 3)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_503[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar143[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_503[iVar1] = 0f;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar149[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1602437.f_60434[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), DATAFILE::DATAARRAY_GET_STRING(uVar149[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1602437.f_60434[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), "", 16);
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar155[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1602437.f_60434[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), DATAFILE::DATAARRAY_GET_STRING(uVar155[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1602437.f_60434[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar59[iVar0], iVar1) == 2)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = DATAFILE::DATAARRAY_GET_INT(uVar59[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = -1;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(uVar65[iVar0], iVar1) == 2)
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_736[iVar1 /*12*/] = DATAFILE::DATAARRAY_GET_INT(uVar65[iVar0], iVar1);
			}
			else
			{
				Global_1602437.f_60434[iVar0 /*1269*/].f_736[iVar1 /*12*/] = -1;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_147(int iParam0)//Position - 0xE315
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (DATAFILE::DATADICT_GET_DICT(iParam0, "eoir") == 0 || DATAFILE::DATADICT_GET_DICT(iParam0, "eoep") == 0)
	{
		return;
	}
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iParam0, "eoid");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iParam0, "eoet");
	iVar10 = DATAFILE::DATADICT_GET_DICT(iParam0, "eoir");
	iVar11 = DATAFILE::DATADICT_GET_DICT(iParam0, "eoep");
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar8, iVar0) == 2)
		{
			Global_1602437.f_54750[iVar0] = DATAFILE::DATAARRAY_GET_INT(iVar8, iVar0);
		}
		else
		{
			Global_1602437.f_54750[iVar0] = -1;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar9, iVar0) == 2)
		{
			Global_1602437.f_54719[iVar0] = DATAFILE::DATAARRAY_GET_INT(iVar9, iVar0);
		}
		else
		{
			Global_1602437.f_54719[iVar0] = -1;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&cVar4, "eor", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (DATAFILE::DATADICT_GET_TYPE(iVar10, &cVar4) == 2)
				{
					Global_1602437.f_54781[iVar0 /*26*/][iVar1 /*5*/][iVar2] = DATAFILE::DATADICT_GET_INT(iVar10, &cVar4);
				}
				else
				{
					Global_1602437.f_54781[iVar0 /*26*/][iVar1 /*5*/][iVar2] = -1;
				}
				StringCopy(&cVar4, "eop", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (DATAFILE::DATADICT_GET_TYPE(iVar11, &cVar4) == 2)
				{
					Global_1602437.f_55562[iVar0 /*26*/][iVar1 /*5*/][iVar2] = DATAFILE::DATADICT_GET_INT(iVar11, &cVar4);
				}
				else
				{
					Global_1602437.f_54781[iVar0 /*26*/][iVar1 /*5*/][iVar2] = -1;
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		iVar12 = Global_1602437.f_54750[iVar0];
		iVar13 = Global_1602437.f_54719[iVar0];
		if (iVar12 != -1 && iVar13 != -1)
		{
			iVar3 = 0;
			while (iVar3 <= 29)
			{
				if ((iVar3 != iVar0 && Global_1602437.f_54750[iVar3] == iVar12) && Global_1602437.f_54719[iVar3] == iVar13)
				{
					Global_1602437.f_54719[iVar3] = -1;
					Global_1602437.f_54750[iVar3] = -1;
					iVar1 = 0;
					while (iVar1 <= 4)
					{
						iVar2 = 0;
						while (iVar2 <= 3)
						{
							Global_1602437.f_54781[iVar3 /*26*/][iVar1 /*5*/][iVar2] = -1;
							Global_1602437.f_55562[iVar3 /*26*/][iVar1 /*5*/][iVar2] = -1;
							iVar2++;
						}
						iVar1++;
					}
				}
				iVar3++;
			}
		}
		iVar0++;
	}
}

void func_148(int iParam0)//Position - 0xE5B6
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8[4];
	var uVar13[4];
	var uVar18[4];
	var uVar23[4];
	var uVar28[4];
	
	iVar4 = DATAFILE::DATADICT_GET_DICT(iParam0, "kill");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "no");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "mcp");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "mcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1602437.f_18 - 1))
	{
		if (iVar1 < 4)
		{
			Global_1602437.f_25907[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar5, iVar1);
			StringCopy(&cVar2, "rul", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar8[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar13[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "lim", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar18[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar23[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar28[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1602437.f_25907[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_1602437.f_25413[iVar0 /*29*/][iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar8[iVar1], iVar0);
					Global_1602437.f_25413[iVar0 /*29*/].f_5[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar13[iVar1], iVar0);
					if (Global_1602437.f_25413[iVar0 /*29*/].f_5[iVar1] == -1)
					{
						Global_1602437.f_25413[iVar0 /*29*/].f_5[iVar1] = 99999;
					}
					Global_1602437.f_25413[iVar0 /*29*/].f_10[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar18[iVar1], iVar0);
					if (DATAFILE::DATAARRAY_GET_TYPE(uVar23[iVar1], iVar0) == 2)
					{
						Global_1602437.f_25413[iVar0 /*29*/].f_15[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar23[iVar1], iVar0);
					}
					else
					{
						Global_1602437.f_25413[iVar0 /*29*/].f_15[iVar1] = 0;
					}
					if (DATAFILE::DATAARRAY_GET_TYPE(uVar28[iVar1], iVar0) == 2)
					{
						Global_1602437.f_25413[iVar0 /*29*/].f_20[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar28[iVar1], iVar0);
					}
					else
					{
						Global_1602437.f_25413[iVar0 /*29*/].f_20[iVar1] = 0;
					}
					if (DATAFILE::DATAARRAY_GET_TYPE(iVar6, iVar0) == 2)
					{
						Global_1602437.f_25413[iVar0 /*29*/].f_28 = DATAFILE::DATAARRAY_GET_INT(iVar6, iVar0);
					}
					else
					{
						Global_1602437.f_25413[iVar0 /*29*/].f_28 = -1;
					}
					if (DATAFILE::DATAARRAY_GET_TYPE(iVar7, iVar0) == 2)
					{
						Global_1602437.f_25413[iVar0 /*29*/].f_27 = DATAFILE::DATAARRAY_GET_INT(iVar7, iVar0);
					}
					else
					{
						Global_1602437.f_25413[iVar0 /*29*/].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_149(int iParam0)//Position - 0xE851
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	var uVar5[4];
	var uVar10[4];
	var uVar15[4];
	var uVar20[4];
	var uVar25[4];
	var uVar30[4];
	var uVar35[4];
	var uVar40[4];
	var uVar45[4];
	var uVar50[4];
	var uVar55[4];
	var uVar60[4];
	var uVar65[4];
	var uVar70[4];
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	
	iVar4 = DATAFILE::DATADICT_GET_DICT(iParam0, "goto");
	Global_1602437.f_25913[0] = DATAFILE::DATADICT_GET_INT(iVar4, "no");
	Global_1602437.f_4 = DATAFILE::DATADICT_GET_INT(iVar4, "atrig");
	iVar75 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lmcp");
	iVar76 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lmcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1602437.f_18 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar2, "loc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar5[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "sz", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar10[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "rl", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar15[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar20[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "wtm", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar25[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "gps", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar40[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "smc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar45[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "lbs", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar50[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "rcptp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar55[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "cmp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar30[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "air", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar35[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "veh", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar60[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar65[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar70[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1602437.f_25913[0] - 1))
			{
				Global_1602437.f_23702[iVar0 /*95*/].f_1[0 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar5[iVar1], iVar0) };
				Global_1602437.f_23702[iVar0 /*95*/].f_14[0] = DATAFILE::DATAARRAY_GET_FLOAT(uVar10[iVar1], iVar0);
				Global_1602437.f_23702[iVar0 /*95*/].f_58[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar15[iVar1], iVar0);
				Global_1602437.f_23702[iVar0 /*95*/].f_63[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar20[iVar1], iVar0);
				if (Global_1602437.f_23702[iVar0 /*95*/].f_63[iVar1] == -1)
				{
					Global_1602437.f_23702[iVar0 /*95*/].f_63[iVar1] = 99999;
				}
				Global_1602437.f_23702[iVar0 /*95*/].f_68[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar25[iVar1], iVar0);
				Global_1602437.f_23702[iVar0 /*95*/].f_46[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar55[iVar1], iVar0);
				Global_1602437.f_23702[iVar0 /*95*/].f_73[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar30[iVar1], iVar0);
				Global_1602437.f_23702[iVar0 /*95*/].f_35[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar35[iVar1], iVar0);
				Global_1602437.f_23702[iVar0 /*95*/].f_51 = DATAFILE::DATAARRAY_GET_INT(uVar50[iVar1], iVar0);
				Global_1602437.f_23702[iVar0 /*95*/].f_30[0] = DATAFILE::DATAARRAY_GET_INT(uVar40[iVar1], iVar0);
				Global_1602437.f_23702[iVar0 /*95*/].f_40[0] = DATAFILE::DATAARRAY_GET_INT(uVar45[iVar1], iVar0);
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar75, iVar0) == 2)
				{
					Global_1602437.f_23702[iVar0 /*95*/].f_90 = DATAFILE::DATAARRAY_GET_INT(iVar75, iVar0);
				}
				else
				{
					Global_1602437.f_23702[iVar0 /*95*/].f_90 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(iVar76, iVar0) == 2)
				{
					Global_1602437.f_23702[iVar0 /*95*/].f_91 = DATAFILE::DATAARRAY_GET_INT(iVar76, iVar0);
				}
				else
				{
					Global_1602437.f_23702[iVar0 /*95*/].f_91 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar60[iVar1], iVar0) == 2)
				{
					Global_1602437.f_23702[iVar0 /*95*/].f_53[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar60[iVar1], iVar0);
				}
				else
				{
					Global_1602437.f_23702[iVar0 /*95*/].f_53[iVar1] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar65[iVar1], iVar0) == 2)
				{
					Global_1602437.f_23702[iVar0 /*95*/].f_78[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar65[iVar1], iVar0);
				}
				else
				{
					Global_1602437.f_23702[iVar0 /*95*/].f_78[iVar1] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar70[iVar1], iVar0) == 2)
				{
					Global_1602437.f_23702[iVar0 /*95*/].f_83[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar70[iVar1], iVar0);
				}
				else
				{
					Global_1602437.f_23702[iVar0 /*95*/].f_83[iVar1] = 0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar77 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locbc");
	iVar78 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "loc2rd");
	iVar79 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locdir");
	iVar80 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "loctol");
	iVar81 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lochgt");
	iVar82 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locart");
	iVar83 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locaa1");
	iVar84 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locaa2");
	iVar85 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locaaw");
	iVar86 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "nmpass");
	iVar87 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "nmfail");
	iVar88 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locstd");
	iVar89 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locstm");
	iVar90 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lcbs2");
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_25913[0] - 1))
	{
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar77, iVar0) == 2)
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_45 = DATAFILE::DATAARRAY_GET_INT(iVar77, iVar0);
		}
		else
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_45 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar78, iVar0) == 3)
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_19 = DATAFILE::DATAARRAY_GET_FLOAT(iVar78, iVar0);
		}
		else
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_19 = 0f;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar79, iVar0) == 3)
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_27 = DATAFILE::DATAARRAY_GET_FLOAT(iVar79, iVar0);
		}
		else
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_27 = 0f;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar80, iVar0) == 3)
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_28 = DATAFILE::DATAARRAY_GET_FLOAT(iVar80, iVar0);
		}
		else
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_28 = 0f;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar81, iVar0) == 3)
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_29 = DATAFILE::DATAARRAY_GET_FLOAT(iVar81, iVar0);
		}
		else
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_29 = 0f;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar82, iVar0) == 2)
		{
			Global_1602437.f_23702[iVar0 /*95*/] = DATAFILE::DATAARRAY_GET_INT(iVar82, iVar0);
		}
		else
		{
			Global_1602437.f_23702[iVar0 /*95*/] = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar86, iVar0) == 2)
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_88 = DATAFILE::DATAARRAY_GET_INT(iVar86, iVar0);
		}
		else
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_88 = -1;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar87, iVar0) == 2)
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_89 = DATAFILE::DATAARRAY_GET_INT(iVar87, iVar0);
		}
		else
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_89 = -1;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar88, iVar0) == 3)
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_93 = DATAFILE::DATAARRAY_GET_FLOAT(iVar88, iVar0);
		}
		else
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_93 = 10.5f;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar89, iVar0) == 2)
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_92 = DATAFILE::DATAARRAY_GET_INT(iVar89, iVar0);
		}
		else
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_92 = 0;
		}
		if (DATAFILE::DATAARRAY_GET_TYPE(iVar90, iVar0) == 2)
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_52 = DATAFILE::DATAARRAY_GET_INT(iVar90, iVar0);
		}
		else
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_52 = 0;
		}
		if ((DATAFILE::DATAARRAY_GET_TYPE(iVar83, iVar0) == 5 && DATAFILE::DATAARRAY_GET_TYPE(iVar84, iVar0) == 5) && DATAFILE::DATAARRAY_GET_TYPE(iVar85, iVar0) == 3)
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_20 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar83, iVar0) };
			Global_1602437.f_23702[iVar0 /*95*/].f_23 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar84, iVar0) };
			Global_1602437.f_23702[iVar0 /*95*/].f_26 = DATAFILE::DATAARRAY_GET_FLOAT(iVar85, iVar0);
		}
		else
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_20 = { 0f, 0f, 0f };
			Global_1602437.f_23702[iVar0 /*95*/].f_23 = { 0f, 0f, 0f };
			Global_1602437.f_23702[iVar0 /*95*/].f_26 = 1f;
		}
		iVar0++;
	}
}

void func_150(int iParam0)//Position - 0xF0C6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (DATAFILE::DATADICT_GET_TYPE(iParam0, "cover") == 6)
	{
		iVar1 = DATAFILE::DATADICT_GET_DICT(iParam0, "cover");
		Global_1602437.f_28403 = DATAFILE::DATADICT_GET_INT(iVar1, "no");
		iVar2 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "loc");
		iVar3 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "dir");
		iVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "use");
		iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "high");
		iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_1602437.f_28403 - 1))
		{
			Global_1602437.f_28404[iVar0 /*7*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar2, iVar0) };
			Global_1602437.f_28404[iVar0 /*7*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar3, iVar0);
			Global_1602437.f_28404[iVar0 /*7*/].f_4 = DATAFILE::DATAARRAY_GET_INT(iVar4, iVar0);
			Global_1602437.f_28404[iVar0 /*7*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar5, iVar0);
			Global_1602437.f_28404[iVar0 /*7*/].f_6 = DATAFILE::DATAARRAY_GET_INT(iVar6, iVar0);
			iVar0++;
		}
	}
}

void func_151(int iParam0)//Position - 0xF1B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	
	iVar2 = DATAFILE::DATADICT_GET_DICT(iParam0, "door");
	Global_1602437.f_28116 = DATAFILE::DATADICT_GET_INT(iVar2, "no");
	iVar3 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "loc");
	iVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "fopen");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "model");
	uVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "lock");
	uVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "swing");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "udrle");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "udtem");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "udrat");
	uVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "swingu");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "audst");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "aurt");
	iVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "uaudst");
	iVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "uaurt");
	uVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "lfp");
	iVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "dtime");
	uVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "mid");
	iVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "dbs");
	iVar0 = 0;
	while (iVar0 <= (Global_1602437.f_28116 - 1))
	{
		if (iVar0 < 15)
		{
			Global_1602437.f_28117[iVar0 /*19*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar3, iVar0) };
			Global_1602437.f_28117[iVar0 /*19*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar4, iVar0);
			Global_1602437.f_28117[iVar0 /*19*/].f_14 = DATAFILE::DATAARRAY_GET_BOOL(uVar6, iVar0);
			Global_1602437.f_28117[iVar0 /*19*/].f_15 = DATAFILE::DATAARRAY_GET_BOOL(uVar7, iVar0);
			Global_1602437.f_28117[iVar0 /*19*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar8, iVar0);
			Global_1602437.f_28117[iVar0 /*19*/].f_6 = DATAFILE::DATAARRAY_GET_INT(iVar9, iVar0);
			Global_1602437.f_28117[iVar0 /*19*/].f_13 = DATAFILE::DATAARRAY_GET_FLOAT(iVar10, iVar0);
			Global_1602437.f_28117[iVar0 /*19*/].f_16 = DATAFILE::DATAARRAY_GET_BOOL(uVar11, iVar0);
			Global_1602437.f_28117[iVar0 /*19*/].f_8 = DATAFILE::DATAARRAY_GET_FLOAT(iVar13, iVar0);
			Global_1602437.f_28117[iVar0 /*19*/].f_9 = DATAFILE::DATAARRAY_GET_FLOAT(iVar12, iVar0);
			Global_1602437.f_28117[iVar0 /*19*/].f_10 = DATAFILE::DATAARRAY_GET_FLOAT(iVar15, iVar0);
			Global_1602437.f_28117[iVar0 /*19*/].f_11 = DATAFILE::DATAARRAY_GET_FLOAT(iVar14, iVar0);
			Global_1602437.f_28117[iVar0 /*19*/].f_12 = DATAFILE::DATAARRAY_GET_BOOL(uVar16, iVar0);
			Global_1602437.f_28117[iVar0 /*19*/].f_18 = DATAFILE::DATAARRAY_GET_INT(iVar19, iVar0);
			iVar1 = DATAFILE::DATAARRAY_GET_INT(iVar5, iVar0);
			Global_1602437.f_28117[iVar0 /*19*/].f_4 = iVar1;
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar17, iVar0) == 2)
			{
				Global_1602437.f_28117[iVar0 /*19*/].f_7 = DATAFILE::DATAARRAY_GET_INT(iVar17, iVar0);
			}
			else
			{
				Global_1602437.f_28117[iVar0 /*19*/].f_7 = 0;
			}
			Global_1602437.f_28117[iVar0 /*19*/].f_17 = DATAFILE::DATAARRAY_GET_BOOL(uVar18, iVar0);
		}
		iVar0++;
	}
}

void func_152(int iParam0)//Position - 0xF450
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	var uVar14[4];
	var uVar19[4];
	var uVar24[4];
	var uVar29[4];
	var uVar34[4];
	var uVar39[4];
	var uVar44[4];
	var uVar49[4];
	var uVar54[4];
	var uVar59[4];
	var uVar64[4];
	var uVar69[4];
	var uVar74[4];
	var uVar79[4];
	var uVar84[4];
	var uVar89[4];
	var uVar94[4];
	var uVar99[4];
	var uVar104[4];
	var uVar109[4];
	var uVar114[4];
	var uVar119[4];
	var uVar124[4];
	var uVar129[4];
	var uVar134[4];
	var uVar139[4];
	var uVar144[4];
	var uVar149[4];
	var uVar154[4];
	var uVar159[4];
	var uVar164[4];
	var uVar169[4];
	var uVar174[4];
	var uVar179[4];
	var uVar184[4];
	var uVar189[4];
	var uVar194[4];
	var uVar199[4];
	var uVar204[4];
	var uVar209[4];
	var uVar214[4];
	var uVar219[4];
	var uVar224[4];
	var uVar229[4];
	var uVar234[4];
	var uVar239[4];
	var uVar244[4];
	var uVar249[4];
	var uVar254[4];
	var uVar259[4];
	var uVar264[4];
	var uVar269[4];
	var uVar274[4];
	var uVar279[4];
	var uVar284[4];
	var uVar289[4];
	var uVar294[4];
	var uVar299[4];
	var uVar304[4];
	var uVar309[4];
	var uVar314[4];
	var uVar319[4];
	var uVar324[4];
	var uVar329[4];
	var uVar334[4];
	var uVar339[4];
	var uVar344[4];
	var uVar349[4];
	var uVar354[4];
	var uVar359[4];
	var uVar364[4];
	var uVar369[4];
	var uVar374[4];
	var uVar379[4];
	var uVar384[4];
	var uVar389[4];
	var uVar394[4];
	var uVar399[4];
	var uVar404[4];
	var uVar409[4];
	var uVar414[4];
	var uVar419[4];
	var uVar424[4];
	var uVar429[4];
	var uVar434[4];
	var uVar439[4];
	var uVar444[4];
	var uVar449[4];
	var uVar454[4];
	var uVar459[4];
	var uVar464[4];
	var uVar469[4];
	var uVar474[4];
	var uVar479[4];
	var uVar484[4];
	var uVar489[4];
	var uVar494[4];
	var uVar499[4];
	var uVar504[4];
	var uVar509[4];
	var uVar514[4];
	var uVar519[4];
	var uVar524[4];
	var uVar529[4];
	var uVar534[4];
	var uVar539[4];
	var uVar544[4];
	var uVar549[4];
	var uVar554[4];
	var uVar559[4];
	var uVar564[4];
	var uVar569[4];
	var uVar574[4];
	var uVar579[4];
	var uVar584[4];
	var uVar589[4];
	var uVar594[4];
	var uVar599[4];
	var uVar604[4];
	var uVar609[4];
	var uVar614[4];
	var uVar619[4];
	var uVar624[4];
	var uVar629[4];
	var uVar634[4];
	var uVar639[4];
	var uVar644[4];
	int iVar649;
	int iVar650;
	int iVar651;
	int iVar652;
	
	iVar0 = DATAFILE::DATADICT_GET_DICT(*iParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_1602437.f_18 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "tmt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar14[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "tms", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar19[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "txt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar24[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "tak", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar29[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "cap", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar34[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "rloft", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar609[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "minspd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar614[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdmx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar619[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "prmg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar624[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "traf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar629[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "shdtxt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar634[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "hitsnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar639[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "lnkdr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar39[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "lnkdr2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar44[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "hscr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar49[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "rsiv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar54[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "wprs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar59[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "wfrc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar69[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "wchg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar64[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "fkwl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar74[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "wdly", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar79[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "ttlc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar84[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "swtod", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar89[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "swtok", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar94[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "fsdtmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar259[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "mpftmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar254[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "artlit", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar99[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "mrtl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar104[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "bmbtm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar109[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gpsdp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar114[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "dcont", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar119[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "critw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar124[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "rdel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar644[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "diswp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar129[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "frndf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar134[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "dpos", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar139[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "txt1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar144[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "dpos2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar149[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "dpost", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar154[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "dotim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar159[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "dov", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar164[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "dost", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar169[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "pl2an", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar174[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "lvbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar179[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "ovwty", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar184[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "ovwid", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar189[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "wldbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar194[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "drpr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar199[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gbtp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar204[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar209[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar214[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar219[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs4", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar224[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "bdprt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar279[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "bdpst", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar284[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			bVar7 = false;
			bVar8 = false;
			bVar9 = false;
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			StringCopy(&cVar3, "opl0", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar3) == 7)
			{
				bVar7 = true;
				uVar229[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar3) == 7)
			{
				bVar8 = true;
				uVar234[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar3) == 7)
			{
				bVar9 = true;
				uVar239[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar3) == 7)
			{
				bVar10 = true;
				uVar244[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "oplbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar249[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "mpot0", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar3) == 7)
			{
				bVar11 = true;
				uVar264[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "mpot1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar3) == 7)
			{
				bVar12 = true;
				uVar269[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "mpot2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar3) == 7)
			{
				bVar13 = true;
				uVar274[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "gbnum", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar294[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gbngn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar299[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gblgn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar304[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gbcol", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar309[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gbdel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar314[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "mcstr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar319[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "mcmp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar334[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "aumx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar324[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "mpaumx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar329[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gbmax", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar339[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gbngm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar344[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gblgm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar349[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gbvhl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar354[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gbaie", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar289[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gacc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar359[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gfld", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar364[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gbat", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar369[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gbv1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar374[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gbv2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar379[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "gbaw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar384[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "txt2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar389[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "txt3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar394[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "txt4", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar399[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "txt5", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar404[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "fail", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar409[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "bfm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar424[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "wwm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar414[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "vss", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar419[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "tsc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar429[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "mcry", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar434[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "destv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar439[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "destr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar444[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "destv1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar449[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "destv2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar454[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "destw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar459[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar524[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2v1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar529[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2v2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar534[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2r", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar539[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2w", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar544[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "out2wg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar549[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "out2iv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar554[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "out2io", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar559[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "out2bs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar564[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "out2et", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar569[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "out2id", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar574[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "outb", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar464[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "outr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar469[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "outhv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar489[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "outb1v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar474[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "outb2v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar479[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "outw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar484[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "outwtg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar494[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "outiwv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar499[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "outiwo", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar504[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "outbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar509[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "outety", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar514[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "outeid", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar519[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "sia", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar579[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "stiam", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar584[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar589[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar594[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "fleer", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar604[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			StringCopy(&cVar3, "fleev", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar599[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar0, &cVar3);
			iVar649 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "tlimt");
			iVar2 = 0;
			while (iVar2 <= (Global_1602437.f_72[iVar1 /*5346*/].f_38 - 1))
			{
				if (uVar14[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_207[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar14[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_207[iVar2] = 0;
				}
				if (uVar19[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1665[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar19[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1665[iVar2] = 0;
				}
				if (uVar29[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1737[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar29[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1737[iVar2] = 0;
				}
				if (uVar34[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1755[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar34[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1755[iVar2] = 0;
				}
				if (uVar24[iVar1] != 0)
				{
					StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_2686[iVar2 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(uVar24[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_2686[iVar2 /*16*/]), "", 64);
				}
				if (uVar39[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_151[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar39[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_151[iVar2] = 0;
				}
				if (uVar44[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_169[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar44[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_169[iVar2] = 0;
				}
				if (uVar609[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5166[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar609[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5166[iVar2] = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar614[iVar1], iVar2) == 2 && Global_1602437.f_1 != 6)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5184[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar614[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5184[iVar2] = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar619[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5202[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar619[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5202[iVar2] = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar624[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5220[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar624[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5220[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar629[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5274[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar629[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5274[iVar2] = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar634[iVar1], iVar2) == 2)
				{
					iVar650 = DATAFILE::DATAARRAY_GET_INT(uVar634[iVar1], iVar2);
					if (iVar650 > 0)
					{
						Global_1602437.f_72[iVar1 /*5346*/].f_5238[iVar2] = iVar650;
					}
					else
					{
						Global_1602437.f_72[iVar1 /*5346*/].f_5238[iVar2] = 0;
					}
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5238[iVar2] = 0;
				}
				if (uVar639[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5256[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar639[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5256[iVar2] = 0;
				}
				if (Global_1602437.f_72[iVar1 /*5346*/].f_169[iVar2] == 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_169[iVar2] = -1;
				}
				if (uVar49[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_189[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar49[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_189[iVar2] = 0;
				}
				if (uVar69[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1791[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar69[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1791[iVar2] = 0;
				}
				if (uVar64[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1773[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar64[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1773[iVar2] = 0;
				}
				if (uVar74[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1813[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar74[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1813[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar79[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1833[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar79[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1833[iVar2] = 10000;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar84[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1869[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar84[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1869[iVar2] = -1;
				}
				if (uVar54[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_261[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar54[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_261[iVar2] = 0;
				}
				if (uVar59[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_279[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar59[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_279[iVar2] = 0;
				}
				if (uVar134[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_333[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar134[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_333[iVar2] = 0;
				}
				if (uVar89[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_297[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar89[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_297[iVar2] = -1;
				}
				if (uVar94[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_315[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar94[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_315[iVar2] = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar104[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1851[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar104[iVar1], iVar2);
				}
				else if (DATAFILE::DATAARRAY_GET_TYPE(iVar649, iVar1) == 2 && iVar649 != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1851[iVar2] = DATAFILE::DATAARRAY_GET_INT(iVar649, iVar1);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1851[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar99[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_369[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar99[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_369[iVar2] = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar259[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_243[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar259[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_243[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar254[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_225[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar254[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_225[iVar2] = 0;
				}
				if (uVar109[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_351[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar109[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_351[iVar2] = 0;
				}
				if (uVar114[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_387[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar114[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_387[iVar2] = 0;
				}
				if (uVar119[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5112[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar119[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5112[iVar2] = 0;
				}
				if (uVar124[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5130[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar124[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5130[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar129[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5148[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar129[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5148[iVar2] = 0;
				}
				if (uVar139[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2262[iVar2 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar139[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2262[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_128())
				{
					if (uVar144[iVar1] != 0)
					{
						StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_2959[iVar2 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(uVar144[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_2959[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar149[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2314[iVar2 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar149[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2314[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar154[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2384[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar154[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2384[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar159[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2420[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar159[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2420[iVar2] = 0;
				}
				if (uVar204[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1887[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar204[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1887[iVar2] = 0;
				}
				if (uVar199[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2366[iVar2] = DATAFILE::DATAARRAY_GET_FLOAT(uVar199[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2366[iVar2] = 0f;
				}
				if (uVar209[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2566[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar209[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2566[iVar2] = 0;
				}
				if (uVar214[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2584[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar214[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2584[iVar2] = 0;
				}
				if (uVar219[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2602[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar219[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2602[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar224[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2620[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar224[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2620[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar279[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2639[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar279[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2639[iVar2] = Global_1602437.f_72[iVar1 /*5346*/].f_1657;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar284[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2657[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar284[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2657[iVar2] = Global_1602437.f_72[iVar1 /*5346*/].f_1663;
				}
				if (bVar7)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_4939[iVar2 /*5*/][0] = DATAFILE::DATAARRAY_GET_INT(uVar229[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_4939[iVar2 /*5*/][0] = -1;
				}
				if (bVar8)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_4939[iVar2 /*5*/][1] = DATAFILE::DATAARRAY_GET_INT(uVar234[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_4939[iVar2 /*5*/][1] = -1;
				}
				if (bVar9)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_4939[iVar2 /*5*/][2] = DATAFILE::DATAARRAY_GET_INT(uVar239[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_4939[iVar2 /*5*/][2] = -1;
				}
				if (bVar10)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_4939[iVar2 /*5*/][3] = DATAFILE::DATAARRAY_GET_INT(uVar244[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_4939[iVar2 /*5*/][3] = -1;
				}
				if (bVar11)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5043[iVar2 /*4*/][0] = DATAFILE::DATAARRAY_GET_INT(uVar264[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5043[iVar2 /*4*/][0] = -1;
				}
				if (bVar12)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5043[iVar2 /*4*/][1] = DATAFILE::DATAARRAY_GET_INT(uVar269[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5043[iVar2 /*4*/][1] = -1;
				}
				if (bVar13)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5043[iVar2 /*4*/][2] = DATAFILE::DATAARRAY_GET_INT(uVar274[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5043[iVar2 /*4*/][2] = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar164[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2402[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar164[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2402[iVar2] = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar169[iVar1], iVar2) == 3)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2438[iVar2] = DATAFILE::DATAARRAY_GET_FLOAT(uVar169[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2438[iVar2] = -1f;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar174[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2476[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar174[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2476[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar179[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2458[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar179[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2458[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar184[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5292[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar184[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5292[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar189[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5310[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar189[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5310[iVar2] = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar194[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5328[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar194[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5328[iVar2] = 0;
				}
				if (uVar249[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5025[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar249[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_5025[iVar2] = 0;
				}
				if (uVar294[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1906[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar294[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1906[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar299[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2190[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar299[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2190[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar304[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2226[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar304[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2226[iVar2] = 0;
				}
				if (uVar309[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1942[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar309[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1942[iVar2] = 0;
				}
				if (uVar314[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1924[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar314[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1924[iVar2] = 0;
				}
				if (uVar319[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2494[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar319[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2494[iVar2] = 0;
				}
				if (uVar324[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2530[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar324[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2530[iVar2] = 0;
				}
				if (uVar329[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2548[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar329[iVar1], iVar2);
				}
				else if (Global_1602437.f_72[iVar1 /*5346*/].f_2530[iVar2] != 0 && MISC::IS_BIT_SET(Global_1602437.f_72[iVar1 /*5346*/].f_2602[iVar2], 8))
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2548[iVar2] = Global_1602437.f_72[iVar1 /*5346*/].f_2530[iVar2];
					Global_1602437.f_72[iVar1 /*5346*/].f_2530[iVar2] = 0;
					MISC::CLEAR_BIT(&(Global_1602437.f_72[iVar1 /*5346*/].f_2602[iVar2]), 8);
				}
				if (uVar334[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2512[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar334[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2512[iVar2] = 0;
				}
				if (uVar339[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2082[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar339[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2082[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar344[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2208[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar344[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2208[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar349[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2244[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar349[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2244[iVar2] = 0;
				}
				if (uVar289[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2172[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar289[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2172[iVar2] = 0;
				}
				if (uVar354[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2100[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar354[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2100[iVar2] = 100;
				}
				if (uVar359[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2136[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar359[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2136[iVar2] = 0;
				}
				if (uVar364[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2154[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar364[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2154[iVar2] = 0;
				}
				if (uVar369[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2118[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar369[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2118[iVar2] = 0;
				}
				if (uVar374[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1960[iVar2 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar374[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1960[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar379[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2012[iVar2 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar379[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2012[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar384[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2064[iVar2] = DATAFILE::DATAARRAY_GET_FLOAT(uVar384[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_2064[iVar2] = 0f;
				}
				if (uVar389[iVar1] != 0)
				{
					StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_3232[iVar2 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(uVar389[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_3232[iVar2 /*16*/]), "", 64);
				}
				if (!func_128())
				{
					if (uVar394[iVar1] != 0)
					{
						StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_3711[iVar2 /*6*/]), DATAFILE::DATAARRAY_GET_STRING(uVar394[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_3711[iVar2 /*6*/]), "", 24);
					}
					if (uVar399[iVar1] != 0)
					{
						StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_3505[iVar2 /*6*/]), DATAFILE::DATAARRAY_GET_STRING(uVar399[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_3505[iVar2 /*6*/]), "", 24);
					}
					if (uVar404[iVar1] != 0)
					{
						StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_3608[iVar2 /*6*/]), DATAFILE::DATAARRAY_GET_STRING(uVar404[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_3608[iVar2 /*6*/]), "", 24);
					}
				}
				if (uVar409[iVar1] != 0)
				{
					StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_3814[iVar2 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(uVar409[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_3814[iVar2 /*16*/]), "", 64);
				}
				if (uVar424[iVar1] != 0)
				{
					StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_4087[iVar2 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(uVar424[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_4087[iVar2 /*16*/]), "", 64);
				}
				if (uVar414[iVar1] != 0)
				{
					StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_4360[iVar2 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(uVar414[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_4360[iVar2 /*16*/]), "", 64);
				}
				if (uVar419[iVar1] != 0)
				{
					StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_4633[iVar2 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(uVar419[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_4633[iVar2 /*16*/]), "", 64);
				}
				if (uVar429[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1683[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar429[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1683[iVar2] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar644[iVar1], iVar2) == 2)
				{
					if (DATAFILE::DATAARRAY_GET_INT(uVar644[iVar1], iVar2) > 1)
					{
						Global_1602437.f_72[iVar1 /*5346*/].f_1719[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar644[iVar1], iVar2);
					}
					else
					{
						Global_1602437.f_72[iVar1 /*5346*/].f_1719[iVar2] = 1;
					}
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1719[iVar2] = 1;
				}
				if (uVar434[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1701[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar434[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1701[iVar2] = 0;
				}
				if (uVar474[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_3 = { DATAFILE::DATAARRAY_GET_VECTOR(uVar474[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar479[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_6 = { DATAFILE::DATAARRAY_GET_VECTOR(uVar479[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar484[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_10 = DATAFILE::DATAARRAY_GET_FLOAT(uVar484[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_10 = 0f;
				}
				if (uVar489[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_13 = { DATAFILE::DATAARRAY_GET_VECTOR(uVar489[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar464[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar464[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/] = { 0f, 0f, 0f };
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar469[iVar1], iVar2) == 3)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_9 = DATAFILE::DATAARRAY_GET_FLOAT(uVar469[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_9 = 0f;
				}
				if (uVar524[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar524[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/] = { 0f, 0f, 0f };
				}
				if (uVar534[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_3 = { DATAFILE::DATAARRAY_GET_VECTOR(uVar534[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar529[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_6 = { DATAFILE::DATAARRAY_GET_VECTOR(uVar529[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar544[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_10 = DATAFILE::DATAARRAY_GET_FLOAT(uVar544[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_10 = 0f;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar539[iVar1], iVar2) == 3)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_9 = DATAFILE::DATAARRAY_GET_FLOAT(uVar539[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_9 = 0f;
				}
				if (uVar449[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1193[iVar2 /*23*/].f_3 = { DATAFILE::DATAARRAY_GET_VECTOR(uVar449[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1193[iVar2 /*23*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar454[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1193[iVar2 /*23*/].f_6 = { DATAFILE::DATAARRAY_GET_VECTOR(uVar454[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1193[iVar2 /*23*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar459[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1193[iVar2 /*23*/].f_10 = DATAFILE::DATAARRAY_GET_FLOAT(uVar459[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1193[iVar2 /*23*/].f_10 = 0f;
				}
				if (uVar439[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1193[iVar2 /*23*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar439[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1193[iVar2 /*23*/] = { 0f, 0f, 0f };
				}
				if (uVar444[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1193[iVar2 /*23*/].f_9 = DATAFILE::DATAARRAY_GET_FLOAT(uVar444[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1193[iVar2 /*23*/].f_9 = 0f;
				}
				if (uVar599[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1585[iVar2 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar599[iVar1], iVar2) };
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1585[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar604[iVar1] != 0)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1637[iVar2] = DATAFILE::DATAARRAY_GET_FLOAT(uVar604[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_1637[iVar2] = 0f;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar494[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_19 = DATAFILE::DATAARRAY_GET_INT(uVar494[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_19 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar499[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_17 = DATAFILE::DATAARRAY_GET_INT(uVar499[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_17 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar504[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_18 = DATAFILE::DATAARRAY_GET_INT(uVar504[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_18 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar509[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_20 = DATAFILE::DATAARRAY_GET_INT(uVar509[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_20 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar514[iVar1], iVar2) == 2 && DATAFILE::DATAARRAY_GET_TYPE(uVar519[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_21 = DATAFILE::DATAARRAY_GET_INT(uVar514[iVar1], iVar2);
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_22 = DATAFILE::DATAARRAY_GET_INT(uVar519[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_21 = 0;
					Global_1602437.f_72[iVar1 /*5346*/].f_409[iVar2 /*23*/].f_22 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar549[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_19 = DATAFILE::DATAARRAY_GET_INT(uVar549[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_19 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar554[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_17 = DATAFILE::DATAARRAY_GET_INT(uVar554[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_17 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar559[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_18 = DATAFILE::DATAARRAY_GET_INT(uVar559[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_18 = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar564[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_20 = DATAFILE::DATAARRAY_GET_INT(uVar564[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_20 = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar569[iVar1], iVar2) == 2 && DATAFILE::DATAARRAY_GET_TYPE(uVar574[iVar1], iVar2) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_21 = DATAFILE::DATAARRAY_GET_INT(uVar569[iVar1], iVar2);
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_22 = DATAFILE::DATAARRAY_GET_INT(uVar574[iVar1], iVar2);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_21 = 0;
					Global_1602437.f_72[iVar1 /*5346*/].f_801[iVar2 /*23*/].f_22 = -1;
				}
				iVar2++;
			}
			iVar651 = 0;
			while (iVar651 <= 45)
			{
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar579[iVar1], iVar651) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_42[iVar651] = DATAFILE::DATAARRAY_GET_INT(uVar579[iVar1], iVar651);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_42[iVar651] = 0;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar584[iVar1], iVar651) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_92[iVar651] = DATAFILE::DATAARRAY_GET_INT(uVar584[iVar1], iVar651);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_92[iVar651] = 0;
				}
				iVar651++;
			}
			iVar652 = 0;
			while (iVar652 <= 3)
			{
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar589[iVar1], iVar652) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_141[iVar652] = DATAFILE::DATAARRAY_GET_INT(uVar589[iVar1], iVar652);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_141[iVar652] = -1;
				}
				if (DATAFILE::DATAARRAY_GET_TYPE(uVar594[iVar1], iVar652) == 2)
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_146[iVar652] = DATAFILE::DATAARRAY_GET_INT(uVar594[iVar1], iVar652);
				}
				else
				{
					Global_1602437.f_72[iVar1 /*5346*/].f_146[iVar652] = -1;
				}
				iVar652++;
			}
		}
		iVar1++;
	}
}

void func_153(int iParam0)//Position - 0x12927
{
	int iVar0;
	int iVar1;
	var uVar2;
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
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	bool bVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	var uVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	var uVar101[10];
	
	iVar0 = DATAFILE::DATADICT_GET_DICT(*iParam0, "endcon");
	iVar3 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "stpos");
	iVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "delr");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "epos");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "endr");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "vareapos");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "arear");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "time");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "plkr");
	iVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "pekr");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "vhkr");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "obkr");
	iVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "dr");
	iVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "pedr");
	iVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "vedr");
	iVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "obdr");
	iVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "lwmbs");
	iVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "flmbs");
	iVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "vdoibs");
	iVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "vdohu");
	iVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "tmbts");
	iVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "swmbs");
	iVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "gbmbs");
	iVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "pcbd");
	iVar26 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "lwbs");
	iVar27 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "woabs");
	iVar28 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "fwoabs");
	iVar29 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "fail");
	iVar30 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "vehrsp");
	iVar31 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "mtlr");
	iVar32 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "mslr");
	iVar33 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "plyl");
	iVar34 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "shd");
	iVar35 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "spar");
	iVar36 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "boud");
	iVar37 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "bla");
	iVar38 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "wla");
	iVar39 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "patm");
	iVar40 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "bnd2");
	iVar41 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "bla2");
	iVar42 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "wla2");
	iVar43 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "pat2");
	iVar44 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "inv");
	iVar45 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "inv2");
	iVar46 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "invsw");
	iVar47 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "invtm");
	iVar48 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "invrl");
	iVar49 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "sinv");
	iVar50 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "sinv2");
	iVar51 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "ppk");
	iVar52 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "mts");
	iVar53 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "spwia");
	iVar54 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "pcl");
	iVar55 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "ocl");
	iVar56 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "arrt");
	iVar57 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "numpt");
	bVar59 = true;
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "mnumpt") != 2)
	{
		bVar59 = false;
		iVar58 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "mnumpt");
	}
	iVar60 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "tcp");
	iVar61 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "tcr");
	iVar62 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "abits");
	iVar63 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "sdobs");
	iVar64 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "edobs");
	iVar65 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "dogps");
	iVar66 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "teamv");
	iVar67 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "teamrvc");
	iVar68 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "mcvbs");
	iVar69 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "mcobs");
	iVar70 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "mcpbs");
	iVar71 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "mcgbs");
	iVar72 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "rpgbs");
	iVar73 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "mcpbs1");
	iVar74 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "mcpbs2");
	iVar75 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "mcgbs1");
	iVar76 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "mcgbs2");
	iVar77 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "rpgbs1");
	iVar78 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "rpgbs2");
	iVar79 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "inpts");
	iVar80 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "ldsf1");
	iVar81 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "ldsf2");
	iVar82 = 1;
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "tehlh") == 7)
	{
		iVar83 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "tehlh");
		iVar82 = 1;
	}
	else
	{
		iVar82 = 0;
	}
	iVar84 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "spsy1");
	iVar85 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "spsy2");
	iVar86 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "trlnm");
	iVar87 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "tenms");
	iVar88 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "csttn");
	iVar89 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "nrl");
	iVar90 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "tstrt");
	iVar91 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "tstop");
	uVar92 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "sms");
	iVar93 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "tblpv1");
	iVar94 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "tblpv2");
	iVar95 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "tblpv3");
	iVar96 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "tblpv4");
	iVar97 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "thudv1");
	iVar98 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "thudv2");
	iVar99 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "thudv3");
	iVar100 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "thudv4");
	iVar1 = 0;
	while (iVar1 <= (DATAFILE::DATAARRAY_GET_COUNT(uVar92) - 1))
	{
		uVar101[iVar1] = DATAFILE::DATAARRAY_GET_DICT(uVar92, iVar1);
		Global_1602437.f_21660[iVar1 /*38*/] = DATAFILE::DATADICT_GET_INT(uVar101[iVar1], "team");
		Global_1602437.f_21660[iVar1 /*38*/].f_1 = DATAFILE::DATADICT_GET_INT(uVar101[iVar1], "rule");
		Global_1602437.f_21660[iVar1 /*38*/].f_2 = DATAFILE::DATADICT_GET_INT(uVar101[iVar1], "time");
		StringCopy(&(Global_1602437.f_21660[iVar1 /*38*/].f_4[0 /*16*/]), DATAFILE::DATADICT_GET_STRING(uVar101[iVar1], "txt0"), 64);
		StringCopy(&(Global_1602437.f_21660[iVar1 /*38*/].f_4[1 /*16*/]), DATAFILE::DATADICT_GET_STRING(uVar101[iVar1], "txt1"), 64);
		Global_1602437.f_21660[iVar1 /*38*/].f_3 = DATAFILE::DATADICT_GET_INT(uVar101[iVar1], "delay");
		Global_1602437.f_21660[iVar1 /*38*/].f_37 = DATAFILE::DATADICT_GET_INT(uVar101[iVar1], "sndall");
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_1602437.f_18 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar66 != 0)
			{
				uVar2 = DATAFILE::DATAARRAY_GET_INT(iVar66, iVar1);
				Global_1602437.f_26255[iVar1] = uVar2;
			}
			else
			{
				Global_1602437.f_26255[iVar1] = 0;
			}
			if (iVar67 != 0)
			{
				Global_1602437.f_26293[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar67, iVar1);
			}
			else
			{
				Global_1602437.f_26293[iVar1] = -1;
			}
			if (iVar3 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar3, iVar1) };
			}
			if (iVar18 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1810 = DATAFILE::DATAARRAY_GET_INT(iVar18, iVar1);
			}
			if (iVar19 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1831 = DATAFILE::DATAARRAY_GET_INT(iVar19, iVar1);
			}
			if (iVar20 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2456 = DATAFILE::DATAARRAY_GET_INT(iVar20, iVar1);
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar21, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2457 = DATAFILE::DATAARRAY_GET_INT(iVar21, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2457 = 0;
			}
			if (iVar22 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2638 = DATAFILE::DATAARRAY_GET_INT(iVar22, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1812 = DATAFILE::DATAARRAY_GET_INT(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1905 = DATAFILE::DATAARRAY_GET_INT(iVar24, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2683 = DATAFILE::DATAARRAY_GET_INT(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1809 = DATAFILE::DATAARRAY_GET_INT(iVar26, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1811 = DATAFILE::DATAARRAY_GET_INT(iVar27, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1832 = DATAFILE::DATAARRAY_GET_INT(iVar28, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2684 = DATAFILE::DATAARRAY_GET_INT(iVar29, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2685 = DATAFILE::DATAARRAY_GET_INT(iVar30, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_32 = DATAFILE::DATAARRAY_GET_INT(iVar31, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_33 = DATAFILE::DATAARRAY_GET_INT(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_35 = DATAFILE::DATAARRAY_GET_INT(iVar33, iVar1);
			}
			if (iVar35 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1658 = DATAFILE::DATAARRAY_GET_INT(iVar35, iVar1);
			}
			if (iVar36 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1656 = DATAFILE::DATAARRAY_GET_INT(iVar36, iVar1);
			}
			if (iVar37 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1655 = DATAFILE::DATAARRAY_GET_INT(iVar37, iVar1);
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar39, iVar1) == 2 && iVar39 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1657 = DATAFILE::DATAARRAY_GET_INT(iVar39, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1657 = 60000;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar40, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1662 = DATAFILE::DATAARRAY_GET_INT(iVar40, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1662 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar41, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1661 = DATAFILE::DATAARRAY_GET_INT(iVar41, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1661 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar43, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1663 = DATAFILE::DATAARRAY_GET_INT(iVar43, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1663 = 60000;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar42, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1664 = DATAFILE::DATAARRAY_GET_INT(iVar42, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1664 = 0;
			}
			if (iVar44 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_40 = DATAFILE::DATAARRAY_GET_INT(iVar44, iVar1);
			}
			if (iVar45 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_41 = DATAFILE::DATAARRAY_GET_INT(iVar45, iVar1);
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar46, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_89 = DATAFILE::DATAARRAY_GET_INT(iVar46, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_89 = -1;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar47, iVar1) == 2 && DATAFILE::DATAARRAY_GET_TYPE(iVar48, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_139 = DATAFILE::DATAARRAY_GET_INT(iVar47, iVar1);
				Global_1602437.f_72[iVar1 /*5346*/].f_140 = DATAFILE::DATAARRAY_GET_INT(iVar48, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_139 = -1;
				Global_1602437.f_72[iVar1 /*5346*/].f_140 = -1;
			}
			if (iVar49 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_90 = DATAFILE::DATAARRAY_GET_INT(iVar49, iVar1);
			}
			if (iVar50 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_91 = DATAFILE::DATAARRAY_GET_INT(iVar50, iVar1);
			}
			if (iVar51 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_36 = DATAFILE::DATAARRAY_GET_INT(iVar51, iVar1);
			}
			if (iVar52 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_37 = DATAFILE::DATAARRAY_GET_INT(iVar52, iVar1);
			}
			if (iVar53 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1659 = DATAFILE::DATAARRAY_GET_INT(iVar53, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_1660 = DATAFILE::DATAARRAY_GET_INT(iVar38, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar34, iVar1);
			}
			if (iVar54 != 0)
			{
				Global_1602437.f_21457[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar54, iVar1);
			}
			if (iVar55 != 0)
			{
				Global_1602437.f_21462[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar55, iVar1);
			}
			if (iVar56 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_34 = DATAFILE::DATAARRAY_GET_INT(iVar56, iVar1);
			}
			if (iVar57 != 0)
			{
				Global_1602437.f_20[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar57, iVar1);
			}
			if (Global_1602437.f_20[iVar1] < 1)
			{
				Global_1602437.f_20[iVar1] = 1;
			}
			if (bVar59)
			{
				Global_1602437.f_25[iVar1] = 0;
			}
			else
			{
				if (iVar58 != 0)
				{
					Global_1602437.f_25[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar58, iVar1);
				}
				if (Global_1602437.f_25[iVar1] < 0)
				{
					Global_1602437.f_25[iVar1] = 0;
				}
			}
			if (iVar60 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_4 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar60, iVar1) };
			}
			if (iVar61 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_7 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar61, iVar1) };
			}
			if (iVar62 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_405 = DATAFILE::DATAARRAY_GET_INT(iVar62, iVar1);
			}
			if (iVar63 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_406 = DATAFILE::DATAARRAY_GET_INT(iVar63, iVar1);
			}
			if (iVar64 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_407 = DATAFILE::DATAARRAY_GET_INT(iVar64, iVar1);
			}
			if (iVar65 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_408 = DATAFILE::DATAARRAY_GET_INT(iVar65, iVar1);
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar80, iVar1) == 2 && iVar80 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_187 = DATAFILE::DATAARRAY_GET_INT(iVar80, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_187 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar81, iVar1) == 2 && iVar81 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_188 = DATAFILE::DATAARRAY_GET_INT(iVar81, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_188 = 0;
			}
			if (iVar68 != 0)
			{
				Global_1602437.f_21650[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar68, iVar1);
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar69, iVar1) == 2)
			{
				Global_1602437.f_21655[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar69, iVar1);
			}
			else
			{
				Global_1602437.f_21655[iVar1] = 0;
			}
			if (iVar70 != 0)
			{
				Global_1602437.f_21606[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar70, iVar1);
			}
			if (iVar73 != 0)
			{
				Global_1602437.f_21637[iVar1 /*3*/][0] = DATAFILE::DATAARRAY_GET_INT(iVar73, iVar1);
			}
			if (iVar74 != 0)
			{
				Global_1602437.f_21637[iVar1 /*3*/][1] = DATAFILE::DATAARRAY_GET_INT(iVar74, iVar1);
			}
			if (Global_1602437.f_21606[iVar1] != 0 && Global_1602437.f_21637[iVar1 /*3*/][0] == 0)
			{
				Global_1602437.f_21637[iVar1 /*3*/][0] = Global_1602437.f_21606[iVar1];
			}
			if (iVar71 != 0)
			{
				Global_1602437.f_21601[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar71, iVar1);
			}
			if (iVar75 != 0)
			{
				Global_1602437.f_21624[iVar1 /*3*/][0] = DATAFILE::DATAARRAY_GET_INT(iVar75, iVar1);
			}
			if (iVar76 != 0)
			{
				Global_1602437.f_21624[iVar1 /*3*/][1] = DATAFILE::DATAARRAY_GET_INT(iVar76, iVar1);
			}
			if (Global_1602437.f_21601[iVar1] != 0 && Global_1602437.f_21624[iVar1 /*3*/][0] == 0)
			{
				Global_1602437.f_21624[iVar1 /*3*/][0] = Global_1602437.f_21601[iVar1];
			}
			if (iVar72 != 0)
			{
				Global_1602437.f_21596[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar72, iVar1);
			}
			if (iVar77 != 0)
			{
				Global_1602437.f_21611[iVar1 /*3*/][0] = DATAFILE::DATAARRAY_GET_INT(iVar77, iVar1);
			}
			if (iVar78 != 0)
			{
				Global_1602437.f_21611[iVar1 /*3*/][1] = DATAFILE::DATAARRAY_GET_INT(iVar78, iVar1);
			}
			if (Global_1602437.f_21596[iVar1] != 0 && Global_1602437.f_21611[iVar1 /*3*/][0] == 0)
			{
				Global_1602437.f_21611[iVar1 /*3*/][0] = Global_1602437.f_21596[iVar1];
			}
			if (iVar79 != 0)
			{
				Global_1602437.f_21472[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar79, iVar1);
			}
			if (iVar82 && iVar83 != 0)
			{
				Global_1602437.f_21504[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar83, iVar1);
			}
			else
			{
				Global_1602437.f_21504[iVar1] = 3;
			}
			if (iVar84 != 0)
			{
				StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_4906[0 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(iVar84, iVar1), 64);
			}
			if (iVar85 != 0)
			{
				StringCopy(&(Global_1602437.f_72[iVar1 /*5346*/].f_4906[1 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(iVar85, iVar1), 64);
			}
			if (iVar87 != 0)
			{
				Global_1602437.f_21477[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar87, iVar1);
			}
			if (iVar88 != 0)
			{
				StringCopy(&(Global_1602437.f_21482[iVar1 /*4*/]), DATAFILE::DATAARRAY_GET_STRING(iVar88, iVar1), 16);
			}
			if (iVar86 != 0)
			{
				Global_1602437.f_21499[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar86, iVar1);
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar90, iVar1) == 2 && iVar90 != 0)
			{
				Global_1602437.f_60329[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar90, iVar1);
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar91, iVar1) == 2 && iVar91 != 0)
			{
				Global_1602437.f_60334[iVar1] = DATAFILE::DATAARRAY_GET_INT(iVar91, iVar1);
			}
			if (iVar4 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_14 = DATAFILE::DATAARRAY_GET_INT(iVar4, iVar1);
			}
			if (iVar5 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_15 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar5, iVar1) };
			}
			if (iVar6 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_18 = DATAFILE::DATAARRAY_GET_INT(iVar6, iVar1);
			}
			if (iVar7 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_19 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar7, iVar1) };
			}
			if (iVar8 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_22 = DATAFILE::DATAARRAY_GET_INT(iVar8, iVar1);
			}
			if (iVar9 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_23 = DATAFILE::DATAARRAY_GET_INT(iVar9, iVar1);
			}
			if (iVar10 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_24 = DATAFILE::DATAARRAY_GET_INT(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_25 = DATAFILE::DATAARRAY_GET_INT(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_26 = DATAFILE::DATAARRAY_GET_INT(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_27 = DATAFILE::DATAARRAY_GET_INT(iVar13, iVar1);
			}
			if (iVar14 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_28 = DATAFILE::DATAARRAY_GET_INT(iVar14, iVar1);
			}
			if (iVar15 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_29 = DATAFILE::DATAARRAY_GET_INT(iVar15, iVar1);
			}
			if (iVar16 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_30 = DATAFILE::DATAARRAY_GET_INT(iVar16, iVar1);
			}
			if (iVar17 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_31 = DATAFILE::DATAARRAY_GET_INT(iVar17, iVar1);
			}
			if (iVar89 != 0)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_38 = DATAFILE::DATAARRAY_GET_INT(iVar89, iVar1);
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar93, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2675 = DATAFILE::DATAARRAY_GET_INT(iVar93, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2675 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar94, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2676 = DATAFILE::DATAARRAY_GET_INT(iVar94, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2676 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar95, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2677 = DATAFILE::DATAARRAY_GET_INT(iVar95, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2677 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar96, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2678 = DATAFILE::DATAARRAY_GET_INT(iVar96, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2678 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar97, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2679 = DATAFILE::DATAARRAY_GET_INT(iVar97, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2679 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar98, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2680 = DATAFILE::DATAARRAY_GET_INT(iVar98, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2680 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar99, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2681 = DATAFILE::DATAARRAY_GET_INT(iVar99, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2681 = 0;
			}
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar100, iVar1) == 2)
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2682 = DATAFILE::DATAARRAY_GET_INT(iVar100, iVar1);
			}
			else
			{
				Global_1602437.f_72[iVar1 /*5346*/].f_2682 = 0;
			}
		}
		iVar1++;
	}
}

void func_154(int iParam0)//Position - 0x13C75
{
	int iVar0;
	
	iVar0 = DATAFILE::DATADICT_GET_DICT(iParam0, "rule");
	Global_1602437.f_37 = DATAFILE::DATADICT_GET_INT(iVar0, "time");
	Global_1602437.f_39 = DATAFILE::DATADICT_GET_INT(iVar0, "score");
	Global_1602437.f_50 = DATAFILE::DATADICT_GET_INT(iVar0, "prule");
	Global_1602437.f_32187 = DATAFILE::DATADICT_GET_INT(iVar0, "ptyp");
	Global_1602437.f_40 = DATAFILE::DATADICT_GET_INT(iVar0, "blip");
	Global_1602437.f_42 = DATAFILE::DATADICT_GET_INT(iVar0, "tag");
	Global_1602437.f_43 = DATAFILE::DATADICT_GET_INT(iVar0, "voice");
	Global_1602437.f_44 = DATAFILE::DATADICT_GET_INT(iVar0, "radio");
	Global_1602437.f_45 = DATAFILE::DATADICT_GET_INT(iVar0, "aim");
	Global_1602437.f_26304 = DATAFILE::DATADICT_GET_INT(iVar0, "pol");
	Global_1602437.f_33 = DATAFILE::DATADICT_GET_INT(iVar0, "liv");
	Global_1602437.f_25922 = DATAFILE::DATADICT_GET_INT(iVar0, "traf");
	Global_1602437.f_57306 = DATAFILE::DATADICT_GET_INT(iVar0, "tod");
	Global_1602437.f_57291 = DATAFILE::DATADICT_GET_INT(iVar0, "weth");
	Global_1602437.f_57308 = DATAFILE::DATADICT_GET_INT(iVar0, "apeds");
	Global_1602437.f_57307 = DATAFILE::DATADICT_GET_INT(iVar0, "vehd");
	Global_1602437.f_48 = DATAFILE::DATADICT_GET_INT(iVar0, "vdm");
	Global_1602437.f_46 = DATAFILE::DATADICT_GET_INT(iVar0, "tdm");
	Global_1602437.f_21457[0] = DATAFILE::DATADICT_GET_INT(iVar0, "pcr");
	Global_1602437.f_21462[0] = DATAFILE::DATADICT_GET_INT(iVar0, "ocr");
}

void func_155(int iParam0, int iParam1, bool bParam2)//Position - 0x13DE4
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	int iVar8;
	char[] cVar9[8];
	char cVar11[16];
	int iVar15;
	int iVar16;
	char cVar17[16];
	int iVar21;
	int iVar22;
	var uVar23;
	int iVar24;
	int iVar25;
	char* sVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	
	iVar0 = DATAFILE::DATADICT_GET_DICT(iParam0, "gen");
	Global_1602437 = DATAFILE::DATADICT_GET_INT(iVar0, "type");
	Global_1602437.f_7 = DATAFILE::DATADICT_GET_BOOL(iVar0, "ngjob");
	MISC::IS_BIT_SET(Global_1602437.f_5, 0);
	bVar1 = DATAFILE::DATADICT_GET_BOOL(iVar0, "photo");
	if (bVar1)
	{
		MISC::SET_BIT(&(Global_1602437.f_5), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1602437.f_5), 0);
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "ivm") == 2)
	{
		Global_1602437.f_26254 = DATAFILE::DATADICT_GET_INT(iVar0, "ivm");
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "fixcam") == 2)
	{
		Global_1602437.f_60342 = DATAFILE::DATADICT_GET_INT(iVar0, "fixcam");
	}
	else
	{
		Global_1602437.f_60342 = 0;
	}
	Global_1602437.f_3 = DATAFILE::DATADICT_GET_INT(iVar0, "optbs");
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		Global_1602437.f_22041[iVar2 /*27*/] = DATAFILE::DATADICT_GET_INT(iVar0, "trainbs");
		Global_1602437.f_22041[iVar2 /*27*/].f_1 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, "trainsp") };
		Global_1602437.f_22041[iVar2 /*27*/].f_4 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, "trainep") };
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, "trains") == 3)
		{
			Global_1602437.f_22041[iVar2 /*27*/].f_25 = DATAFILE::DATADICT_GET_FLOAT(iVar0, "trains");
		}
		Global_1602437.f_22041[iVar2 /*27*/].f_26 = DATAFILE::DATADICT_GET_INT(iVar0, "trainsd");
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			Global_1602437.f_22041[iVar2 /*27*/].f_7[iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, "trainct");
			Global_1602437.f_22041[iVar2 /*27*/].f_13[iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, "trainca");
			Global_1602437.f_22041[iVar2 /*27*/].f_19[iVar3] = DATAFILE::DATADICT_GET_INT(iVar0, "trainci");
			iVar3++;
		}
		iVar2++;
	}
	Global_1602437.f_63 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, "camo") };
	Global_1602437.f_66 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, "camro") };
	Global_1602437.f_57 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, "cam") };
	Global_1602437.f_69 = DATAFILE::DATADICT_GET_FLOAT(iVar0, "camh");
	Global_1602437.f_56668 = DATAFILE::DATADICT_GET_FLOAT(iVar0, "dmbds");
	Global_1602437.f_51 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, "phpo") };
	StringCopy(&(Global_1602437.f_56851[0 /*16*/]), DATAFILE::DATADICT_GET_STRING(iVar0, "szTag"), 64);
	StringCopy(&cVar4, "nrcid", 16);
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			StringCopy(&cVar4, "nrcid", 16);
			StringIntConCat(&cVar4, iVar2, 16);
			StringCopy(&(Global_1602437.f_56986[iVar2 /*6*/]), DATAFILE::DATADICT_GET_STRING(iVar0, &cVar4), 24);
			iVar2++;
		}
	}
	if (func_83())
	{
		Global_1602437.f_1 = DATAFILE::DATADICT_GET_INT(iVar0, "subtype");
		Global_1602437.f_60339 = DATAFILE::DATADICT_GET_INT(iVar0, "testcomplete");
		if ((Global_1602437.f_1 == 6 || Global_1602437.f_1 == 5) || Global_1602437.f_1 == 4)
		{
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, "teamBal") == 2)
			{
				Global_1602437.f_60341 = DATAFILE::DATADICT_GET_INT(iVar0, "numRounds");
			}
			else
			{
				Global_1602437.f_60341 = 1;
			}
			if (Global_1602437.f_60341 < 1)
			{
				Global_1602437.f_60341 = 1;
			}
		}
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, "teamBal") == 2)
		{
			Global_1602437.f_60343 = DATAFILE::DATADICT_GET_INT(iVar0, "teamBal");
		}
		else
		{
			Global_1602437.f_60343 = 5;
		}
	}
	Global_1602437.f_60340 = DATAFILE::DATADICT_GET_INT(iVar0, "testcomplete");
	Global_1602437.f_38 = DATAFILE::DATADICT_GET_INT(iVar0, "endtype");
	Global_1602437.f_9 = DATAFILE::DATADICT_GET_INT(iVar0, "menubs");
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "ovrpc") == 2)
	{
		Global_1602437.f_36730 = DATAFILE::DATADICT_GET_INT(iVar0, "ovrpc");
	}
	else
	{
		Global_1602437.f_36730 = -1;
	}
	Global_1602437.f_10 = DATAFILE::DATADICT_GET_INT(iVar0, "menubs2");
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "menubs3") == 2)
	{
		Global_1602437.f_11 = DATAFILE::DATADICT_GET_INT(iVar0, "menubs3");
	}
	else
	{
		Global_1602437.f_11 = 0;
	}
	Global_1602437.f_26303 = DATAFILE::DATADICT_GET_INT(iVar0, "teamvbs");
	Global_1602437.f_12 = DATAFILE::DATADICT_GET_INT(iVar0, "cncmbs");
	Global_1602437.f_71752 = DATAFILE::DATADICT_GET_INT(iVar0, "todhr");
	Global_1602437.f_71753 = DATAFILE::DATADICT_GET_INT(iVar0, "todmn");
	Global_1602437.f_8 = DATAFILE::DATADICT_GET_INT(iVar0, "cmpts");
	Global_1602437.f_36 = DATAFILE::DATADICT_GET_INT(iVar0, "rank");
	Global_1602437.f_57310 = DATAFILE::DATADICT_GET_INT(iVar0, "charcon");
	Global_1602437.f_57310 = DATAFILE::DATADICT_GET_INT(iVar0, "char");
	Global_1602437.f_57312 = DATAFILE::DATADICT_GET_INT(iVar0, "xpr");
	Global_1602437.f_57313 = DATAFILE::DATADICT_GET_INT(iVar0, "cshr");
	Global_1602437.f_57317 = DATAFILE::DATADICT_GET_INT(iVar0, "ctsc");
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "ecsbs") == 2)
	{
		Global_1602437.f_68951.f_16 = DATAFILE::DATADICT_GET_INT(iVar0, "ecsbs");
	}
	else
	{
		Global_1602437.f_68951.f_16 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "ecsbs2") == 2)
	{
		Global_1602437.f_68951.f_17 = DATAFILE::DATADICT_GET_INT(iVar0, "ecsbs2");
	}
	else
	{
		Global_1602437.f_68951.f_17 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "ecsrng") == 2)
	{
		Global_1602437.f_68951.f_62 = DATAFILE::DATADICT_GET_INT(iVar0, "ecsrng");
	}
	else
	{
		Global_1602437.f_68951.f_62 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "ecscp") == 5)
	{
		Global_1602437.f_68951.f_54 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, "ecscp") };
	}
	else
	{
		Global_1602437.f_68951.f_54 = { 0f, 0f, 0f };
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "ecscr") == 3)
	{
		Global_1602437.f_68951.f_60 = DATAFILE::DATADICT_GET_FLOAT(iVar0, "ecscr");
	}
	else
	{
		Global_1602437.f_68951.f_60 = 0f;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "ecscs") == 5)
	{
		Global_1602437.f_68951.f_57 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, "ecscs") };
	}
	else
	{
		Global_1602437.f_68951.f_57 = { 0f, 0f, 0f };
	}
	iVar8 = 0;
	while (iVar8 <= 29)
	{
		StringCopy(&cVar9, "ecein", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_68951.f_63[iVar8 /*12*/].f_1 = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_68951.f_63[iVar8 /*12*/].f_1 = -1;
		}
		StringCopy(&cVar9, "ecetp", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_68951.f_63[iVar8 /*12*/] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_68951.f_63[iVar8 /*12*/] = -1;
		}
		StringCopy(&cVar9, "ecebs", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_68951.f_63[iVar8 /*12*/].f_2 = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_68951.f_63[iVar8 /*12*/].f_2 = 0;
		}
		StringCopy(&cVar9, "ecehn", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1602437.f_68951.f_63[iVar8 /*12*/].f_4), DATAFILE::DATADICT_GET_STRING(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1602437.f_68951.f_63[iVar8 /*12*/].f_4), "", 32);
		}
		iVar8++;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "clbscr") == 2)
	{
		Global_1602437.f_69944 = DATAFILE::DATADICT_GET_INT(iVar0, "clbscr");
	}
	else
	{
		Global_1602437.f_69944 = -1;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "disar") == 2)
	{
		Global_1602437.f_69945 = DATAFILE::DATADICT_GET_INT(iVar0, "disar");
	}
	else
	{
		Global_1602437.f_69945 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "rlopt") == 2)
	{
		Global_1602437.f_69733 = DATAFILE::DATADICT_GET_INT(iVar0, "rlopt");
	}
	else
	{
		Global_1602437.f_69733 = 0;
	}
	iVar15 = DATAFILE::DATADICT_GET_INT(iVar0, "gpmn");
	Global_1602437.f_71 = iVar15;
	iVar16 = DATAFILE::DATADICT_GET_INT(iVar0, "musx");
	if (iVar16 != -1)
	{
		Global_1602437.f_57305 = iVar16;
	}
	else
	{
		Global_1602437.f_57305 = -1;
	}
	Global_1602437.f_57304 = DATAFILE::DATADICT_GET_INT(iVar0, "ausc");
	Global_1602437.f_14 = DATAFILE::DATADICT_GET_INT(iVar0, "minNu");
	Global_1602437.f_13 = DATAFILE::DATADICT_GET_INT(iVar0, "num");
	if (Global_1602437.f_13 == -1)
	{
		Global_1602437.f_13 = 30;
	}
	Global_1602437.f_15 = DATAFILE::DATADICT_GET_INT(iVar0, "time");
	Global_1602437.f_54 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, "start") };
	StringCopy(&cVar17, "apart", 16);
	Global_1602437.f_69385 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, &cVar17) };
	Global_1602437.f_69399 = DATAFILE::DATADICT_GET_INT(iVar0, "apwbs");
	Global_1602437.f_69388 = DATAFILE::DATADICT_GET_INT(iVar0, "wrploc");
	Global_1602437.f_69402 = DATAFILE::DATADICT_GET_INT(iVar0, "twrst");
	Global_1602437.f_69400 = DATAFILE::DATADICT_GET_INT(iVar0, "iplop");
	Global_1602437.f_69401 = DATAFILE::DATADICT_GET_INT(iVar0, "intop");
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "copteam") == 2)
	{
		Global_1602437.f_26305 = DATAFILE::DATADICT_GET_INT(iVar0, "copteam");
	}
	else
	{
		Global_1602437.f_26305 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "pttl") == 4)
	{
		StringCopy(&(Global_1602437.f_57002), DATAFILE::DATADICT_GET_STRING(iVar0, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_1602437.f_57002), "", 64);
	}
	iVar15 = 0;
	while (iVar15 <= 3)
	{
		iVar21 = 0;
		while (iVar21 <= 1)
		{
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringConCat(&cVar9, "fs", 8);
			StringIntConCat(&cVar9, iVar21, 8);
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 4)
			{
				StringCopy(&(Global_1602437.f_71976[iVar15 /*33*/][iVar21 /*16*/]), DATAFILE::DATADICT_GET_STRING(iVar0, &cVar9), 64);
			}
			else
			{
				StringCopy(&(Global_1602437.f_71976[iVar15 /*33*/][iVar21 /*16*/]), "", 64);
			}
			iVar21++;
		}
		iVar21 = 0;
		while (iVar21 <= 21)
		{
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringConCat(&cVar9, "vl", 8);
			StringIntConCat(&cVar9, iVar21, 8);
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
			{
				Global_1602437.f_25960[iVar15 /*23*/][iVar21] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
			}
			else
			{
				Global_1602437.f_25960[iVar15 /*23*/][iVar21] = 0;
			}
			iVar21++;
		}
		iVar22 = 0;
		while (iVar22 <= 1)
		{
			iVar21 = 0;
			while (iVar21 <= 21)
			{
				StringCopy(&cVar9, "t", 8);
				StringIntConCat(&cVar9, iVar15, 8);
				StringIntConCat(&cVar9, iVar22, 8);
				StringConCat(&cVar9, "rv", 8);
				StringIntConCat(&cVar9, iVar21, 8);
				if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
				{
					Global_1602437.f_26053[iVar15 /*47*/][iVar22 /*23*/][iVar21] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
				}
				else
				{
					Global_1602437.f_26053[iVar15 /*47*/][iVar22 /*23*/][iVar21] = 0;
				}
				iVar21++;
			}
			iVar22++;
		}
		StringCopy(&cVar9, "dmaskg", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_57296[iVar15] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_57296[iVar15] = 0;
		}
		StringCopy(&cVar9, "tmrfs", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1602437.f_71911[iVar15 /*16*/]), DATAFILE::DATADICT_GET_STRING(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1602437.f_71911[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmtss", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1602437.f_72109[iVar15 /*6*/]), DATAFILE::DATADICT_GET_STRING(iVar0, &cVar9), 24);
		}
		else
		{
			StringCopy(&(Global_1602437.f_72109[iVar15 /*6*/]), "", 24);
		}
		StringCopy(&cVar9, "tmtsr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_72134[iVar15] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_72134[iVar15] = 0;
		}
		StringCopy(&cVar9, "pmscid", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_69946[iVar15] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_69946[iVar15] = -1;
		}
		StringCopy(&cVar9, "qran", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_57318[iVar15] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_57318[iVar15] = -1;
		}
		iVar15++;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 4)
	{
		StringCopy(&(Global_1602437.f_57018), DATAFILE::DATADICT_GET_STRING(iVar0, &cVar9), 24);
	}
	else
	{
		StringCopy(&(Global_1602437.f_57018), "", 24);
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "vsclout") == 2)
	{
		Global_1602437.f_60394 = DATAFILE::DATADICT_GET_INT(iVar0, "vsclout");
	}
	else
	{
		Global_1602437.f_60394 = -1;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "vsthout") == 2)
	{
		Global_1602437.f_60395 = DATAFILE::DATADICT_GET_INT(iVar0, "vsthout");
	}
	else
	{
		Global_1602437.f_60395 = -1;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "dspteam") == 2)
	{
		Global_1602437.f_69969 = DATAFILE::DATADICT_GET_INT(iVar0, "dspteam");
	}
	else
	{
		Global_1602437.f_69969 = -1;
	}
	if (!func_64() && !func_157())
	{
		if (NETWORK::UGC_IS_LANGUAGE_SUPPORTED(iParam1))
		{
			StringCopy(&(Global_1602437.f_56700), DATAFILE::DATADICT_GET_STRING(iVar0, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_1602437.f_56700), func_156(), 64);
		}
	}
	else
	{
		StringCopy(&(Global_1602437.f_56700), DATAFILE::DATADICT_GET_STRING(iVar0, "nm"), 64);
	}
	Global_1602437.f_57340 = DATAFILE::DATADICT_GET_INT(iVar0, "mgrk");
	Global_1602437.f_57341 = DATAFILE::DATADICT_GET_INT(iVar0, "mght");
	StringCopy(&(Global_1602437.f_56722[0 /*16*/]), "", 64);
	StringCopy(&(Global_1602437.f_56722[1 /*16*/]), "", 64);
	StringCopy(&(Global_1602437.f_56722[2 /*16*/]), "", 64);
	StringCopy(&(Global_1602437.f_56722[3 /*16*/]), "", 64);
	StringCopy(&(Global_1602437.f_56722[4 /*16*/]), "", 64);
	StringCopy(&(Global_1602437.f_56722[5 /*16*/]), "", 64);
	StringCopy(&(Global_1602437.f_56722[6 /*16*/]), "", 64);
	StringCopy(&(Global_1602437.f_56722[7 /*16*/]), "", 64);
	uVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar0, "dec");
	iVar24 = HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(DATAFILE::DATAARRAY_GET_STRING(uVar23, 0));
	if (iParam1 == -1 || NETWORK::UGC_IS_LANGUAGE_SUPPORTED(iParam1))
	{
		if (iVar24 <= 63)
		{
			iVar2 = 0;
			while (iVar2 <= (DATAFILE::DATAARRAY_GET_COUNT(iVar23) - 1))
			{
				StringCopy(&(Global_1602437.f_56722[iVar2 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(iVar23, iVar2), 64);
				iVar2++;
			}
		}
		else
		{
			sVar26 = DATAFILE::DATAARRAY_GET_STRING(iVar23, 0);
			iVar2 = 0;
			while (iVar2 <= 7)
			{
				if (iVar24 > (63 * iVar2))
				{
					if (iVar24 > (63 * iVar2) + 63)
					{
						iVar25 = (63 * iVar2) + 63;
					}
					else
					{
						iVar25 = iVar24;
					}
					StringCopy(&(Global_1602437.f_56722[iVar2 /*16*/]), HUD::_GET_TEXT_SUBSTRING_SLICE(sVar26, (63 * iVar2), iVar25), 64);
				}
				iVar2++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_1602437.f_56722[0 /*16*/]), func_156(), 64);
	}
	Global_1602437.f_18 = DATAFILE::DATADICT_GET_INT(iVar0, "tnum");
	Global_1602437.f_19 = DATAFILE::DATADICT_GET_INT(iVar0, "mtnum");
	if (Global_1602437 == 1)
	{
		if (Global_1602437.f_18 > 4)
		{
			Global_1602437.f_18 = 4;
		}
	}
	else if (Global_1602437.f_18 > 4)
	{
		Global_1602437.f_18 = 4;
	}
	Global_1602437.f_53090 = DATAFILE::DATADICT_GET_INT(iVar0, "atmdm");
	Global_1602437.f_32 = DATAFILE::DATADICT_GET_INT(iVar0, "trel");
	Global_1602437.f_57314 = DATAFILE::DATADICT_GET_INT(iVar0, "ltm");
	Global_1602437.f_60 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, "vcpr") };
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hstat") == 2)
	{
		Global_1602437.f_57285 = DATAFILE::DATADICT_GET_INT(iVar0, "hstat");
	}
	else
	{
		Global_1602437.f_57285 = 0;
	}
	iVar27 = 0;
	while (iVar27 <= 19)
	{
		StringCopy(&cVar9, "rzpos", 8);
		StringIntConCat(&cVar9, iVar27, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 5)
		{
			Global_1602437.f_36666[iVar27 /*3*/] = { DATAFILE::DATADICT_GET_VECTOR(iVar0, &cVar9) };
		}
		else
		{
			Global_1602437.f_36666[iVar27 /*3*/] = { 0f, 0f, 0f };
		}
		iVar27++;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "numzr") == 2)
	{
		Global_1602437.f_36727 = DATAFILE::DATADICT_GET_INT(iVar0, "numzr");
	}
	else
	{
		Global_1602437.f_36727 = 0;
	}
	iVar28 = DATAFILE::DATADICT_GET_DICT(iParam0, "ene");
	iVar29 = DATAFILE::DATADICT_GET_INT(iVar28, "no");
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hpped") == 2 && iVar29 > DATAFILE::DATADICT_GET_INT(iVar0, "hpped"))
	{
		Global_1602437.f_53081 = DATAFILE::DATADICT_GET_INT(iVar0, "hpped");
	}
	else
	{
		Global_1602437.f_53081 = -1;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hpped2") == 2 && iVar29 > DATAFILE::DATADICT_GET_INT(iVar0, "hpped2"))
	{
		Global_1602437.f_53082 = DATAFILE::DATADICT_GET_INT(iVar0, "hpped2");
	}
	else
	{
		Global_1602437.f_53082 = -1;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hpped3") == 2 && iVar29 > DATAFILE::DATADICT_GET_INT(iVar0, "hpped3"))
	{
		Global_1602437.f_53083 = DATAFILE::DATADICT_GET_INT(iVar0, "hpped3");
	}
	else
	{
		Global_1602437.f_53083 = -1;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "tshd") == 2)
	{
		Global_1602437.f_57337 = DATAFILE::DATADICT_GET_INT(iVar0, "tshd");
	}
	else
	{
		Global_1602437.f_57337 = -1;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "atspos") == 5)
	{
		Global_1602437.f_71809 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, "atspos") };
	}
	else
	{
		Global_1602437.f_71809 = { 0f, 0f, 0f };
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "atscmp") == 5)
	{
		Global_1602437.f_71803 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, "atscmp") };
	}
	else
	{
		Global_1602437.f_71803 = { 0f, 0f, 0f };
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "atscmr") == 5)
	{
		Global_1602437.f_71806 = { DATAFILE::DATADICT_GET_VECTOR(iVar0, "atscmr") };
	}
	else
	{
		Global_1602437.f_71806 = { 0f, 0f, 0f };
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "atsfov") == 3)
	{
		Global_1602437.f_71812 = DATAFILE::DATADICT_GET_FLOAT(iVar0, "atsfov");
	}
	else
	{
		Global_1602437.f_71812 = 45f;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "atshed") == 3)
	{
		Global_1602437.f_71813 = DATAFILE::DATADICT_GET_FLOAT(iVar0, "atshed");
	}
	else
	{
		Global_1602437.f_71813 = 0f;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "atsveh") == 2)
	{
		Global_1602437.f_71814 = DATAFILE::DATADICT_GET_INT(iVar0, "atsveh");
	}
	else
	{
		Global_1602437.f_71814 = 0;
	}
	Global_1602437.f_17 = Global_1602437.f_18;
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hpdt1") == 2)
	{
		Global_1602437.f_57286[0] = DATAFILE::DATADICT_GET_INT(iVar0, "hpdt1");
	}
	else
	{
		Global_1602437.f_57286[0] = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hpdt2") == 2)
	{
		Global_1602437.f_57286[1] = DATAFILE::DATADICT_GET_INT(iVar0, "hpdt2");
	}
	else
	{
		Global_1602437.f_57286[1] = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "vdt") == 2)
	{
		Global_1602437.f_57289 = DATAFILE::DATADICT_GET_INT(iVar0, "vdt");
	}
	else
	{
		Global_1602437.f_57289 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hbrbs") == 2)
	{
		Global_1602437.f_69951 = DATAFILE::DATADICT_GET_INT(iVar0, "hbrbs");
	}
	else
	{
		Global_1602437.f_69951 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hbrtt") == 2)
	{
		Global_1602437.f_69952 = DATAFILE::DATADICT_GET_INT(iVar0, "hbrtt");
	}
	else
	{
		Global_1602437.f_69952 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hbrttm") == 2)
	{
		Global_1602437.f_69953 = DATAFILE::DATADICT_GET_INT(iVar0, "hbrttm");
	}
	else
	{
		Global_1602437.f_69953 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hbrtrl") == 2)
	{
		Global_1602437.f_69954 = DATAFILE::DATADICT_GET_INT(iVar0, "hbrtrl");
	}
	else
	{
		Global_1602437.f_69954 = -1;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hbrpdt") == 2)
	{
		Global_1602437.f_69956 = DATAFILE::DATADICT_GET_INT(iVar0, "hbrpdt");
	}
	else
	{
		Global_1602437.f_69956 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hbrvdt") == 2)
	{
		Global_1602437.f_69958 = DATAFILE::DATADICT_GET_INT(iVar0, "hbrvdt");
	}
	else
	{
		Global_1602437.f_69958 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hbrkt") == 2)
	{
		Global_1602437.f_69960 = DATAFILE::DATADICT_GET_INT(iVar0, "hbrkt");
	}
	else
	{
		Global_1602437.f_69960 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hbrph") == 2)
	{
		Global_1602437.f_69963 = DATAFILE::DATADICT_GET_INT(iVar0, "hbrph");
	}
	else
	{
		Global_1602437.f_69963 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "hecam") == 2)
	{
		Global_1602437.f_69964 = DATAFILE::DATADICT_GET_INT(iVar0, "hecam");
	}
	else
	{
		Global_1602437.f_69964 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "sdrvm") == 2)
	{
		Global_1602437.f_72152 = DATAFILE::DATADICT_GET_INT(iVar0, "sdrvm");
	}
	else
	{
		Global_1602437.f_72152 = 10000;
	}
	if (((DATAFILE::DATADICT_GET_TYPE(iVar0, "hmmtt") == 2 && DATAFILE::DATADICT_GET_TYPE(iVar0, "hmmts") == 2) && DATAFILE::DATADICT_GET_TYPE(iVar0, "hmmte") == 2) && DATAFILE::DATADICT_GET_TYPE(iVar0, "hmmth") == 2)
	{
		Global_1602437.f_69965 = DATAFILE::DATADICT_GET_INT(iVar0, "hmmtt");
		Global_1602437.f_69966 = DATAFILE::DATADICT_GET_INT(iVar0, "hmmts");
		Global_1602437.f_69967 = DATAFILE::DATADICT_GET_INT(iVar0, "hmmte");
		Global_1602437.f_69968 = DATAFILE::DATADICT_GET_INT(iVar0, "hmmth");
	}
	else
	{
		Global_1602437.f_69965 = 0;
		Global_1602437.f_69966 = 0;
		Global_1602437.f_69967 = 0;
		Global_1602437.f_69968 = 0;
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar0, "tstrm") == 2)
	{
		Global_1602437.f_71751 = DATAFILE::DATADICT_GET_INT(iVar0, "tstrm");
	}
	else
	{
		Global_1602437.f_71751 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 35)
	{
		StringCopy(&cVar9, "dtspk", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1602437.f_60034[iVar2 /*8*/]), DATAFILE::DATADICT_GET_STRING(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1602437.f_60034[iVar2 /*8*/]), "", 32);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		StringCopy(&cVar9, "cspnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1602437.f_52934[iVar2 /*16*/]), DATAFILE::DATADICT_GET_STRING(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1602437.f_52934[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csvnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1602437.f_52983[iVar2 /*16*/]), DATAFILE::DATADICT_GET_STRING(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1602437.f_52983[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csonm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1602437.f_53032[iVar2 /*16*/]), DATAFILE::DATADICT_GET_STRING(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1602437.f_53032[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar30 = 0;
	while (iVar30 <= 3)
	{
		StringCopy(&cVar9, "ofit1", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_60368[iVar30 /*5*/][0] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_60368[iVar30 /*5*/][0] = 0;
		}
		StringCopy(&cVar9, "ofit2", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_60368[iVar30 /*5*/][1] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_60368[iVar30 /*5*/][1] = 0;
		}
		StringCopy(&cVar9, "ofit3", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_60368[iVar30 /*5*/][2] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_60368[iVar30 /*5*/][2] = 0;
		}
		StringCopy(&cVar9, "ofit4", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_60368[iVar30 /*5*/][3] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_60368[iVar30 /*5*/][3] = 0;
		}
		StringCopy(&cVar9, "ofs1", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_60411[iVar30 /*2*/][0] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_60411[iVar30 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "mask1", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_60425[iVar30 /*2*/][0] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_60425[iVar30 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "gear", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_60396[iVar30] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_60396[iVar30] = 0;
		}
		StringCopy(&cVar9, "geard", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_60401[iVar30] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_60401[iVar30] = -1;
		}
		StringCopy(&cVar9, "apwfr", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_69389[iVar30] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_69389[iVar30] = -1;
		}
		StringCopy(&cVar9, "apwlr", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_69394[iVar30] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_69394[iVar30] = -1;
		}
		StringCopy(&cVar9, "tcmin", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2 && !func_128())
		{
			Global_1602437.f_69728[iVar30] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_69728[iVar30] = 0;
		}
		StringCopy(&cVar9, "tmrsp", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_69734[iVar30] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_69734[iVar30] = 0;
		}
		StringCopy(&cVar9, "tmvhp", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_26288[iVar30] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_26288[iVar30] = 100;
		}
		StringCopy(&cVar9, "tblty", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_26298[iVar30] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_26298[iVar30] = 0;
		}
		StringCopy(&cVar9, "pmpos", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 5)
		{
			Global_1602437.f_56343[iVar30 /*3*/] = { DATAFILE::DATADICT_GET_VECTOR(iVar0, &cVar9) };
		}
		else
		{
			Global_1602437.f_56343[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmpoi", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 5)
		{
			Global_1602437.f_56356[iVar30 /*3*/] = { DATAFILE::DATADICT_GET_VECTOR(iVar0, &cVar9) };
		}
		else
		{
			Global_1602437.f_56356[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmrad", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 3)
		{
			Global_1602437.f_56369[iVar30] = DATAFILE::DATADICT_GET_FLOAT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_56369[iVar30] = 0f;
		}
		StringCopy(&cVar9, "dfofit", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_60389[iVar30] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_60389[iVar30] = -1;
		}
		StringCopy(&cVar9, "dfstyl", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_60420[iVar30] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_60420[iVar30] = -1;
		}
		iVar31 = 0;
		while (iVar31 <= 1)
		{
			StringCopy(&cVar11, "trstp", 16);
			StringIntConCat(&cVar11, iVar30, 16);
			if (iVar31 > 0)
			{
				StringIntConCat(&cVar11, iVar31, 16);
			}
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar11) == 5)
			{
				Global_1602437.f_56468[iVar30 /*27*/][iVar31 /*13*/][0 /*3*/] = { DATAFILE::DATADICT_GET_VECTOR(iVar0, &cVar11) };
			}
			else
			{
				Global_1602437.f_56468[iVar30 /*27*/][iVar31 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar11, "trsth", 16);
			StringIntConCat(&cVar11, iVar30, 16);
			if (iVar31 > 0)
			{
				StringIntConCat(&cVar11, iVar31, 16);
			}
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar11) == 3)
			{
				Global_1602437.f_56577[iVar30 /*11*/][iVar31 /*5*/][0] = DATAFILE::DATADICT_GET_FLOAT(iVar0, &cVar11);
			}
			else
			{
				Global_1602437.f_56577[iVar30 /*11*/][iVar31 /*5*/][0] = 0f;
			}
			iVar32 = 0;
			while (iVar32 <= 3)
			{
				StringCopy(&cVar11, "trstp", 16);
				StringIntConCat(&cVar11, iVar30, 16);
				StringIntConCat(&cVar11, iVar31, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar32, 16);
				if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar11) == 5)
				{
					Global_1602437.f_56468[iVar30 /*27*/][iVar31 /*13*/][iVar32 /*3*/] = { DATAFILE::DATADICT_GET_VECTOR(iVar0, &cVar11) };
				}
				else
				{
					Global_1602437.f_56468[iVar30 /*27*/][iVar31 /*13*/][iVar32 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar11, "trsth", 16);
				StringIntConCat(&cVar11, iVar30, 16);
				StringIntConCat(&cVar11, iVar31, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar32, 16);
				if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar11) == 3)
				{
					Global_1602437.f_56577[iVar30 /*11*/][iVar31 /*5*/][iVar32] = DATAFILE::DATADICT_GET_FLOAT(iVar0, &cVar11);
				}
				else
				{
					Global_1602437.f_56577[iVar30 /*11*/][iVar31 /*5*/][iVar32] = 0f;
				}
				iVar32++;
			}
			StringCopy(&cVar9, "trsrl", 8);
			StringIntConCat(&cVar9, iVar30, 8);
			StringIntConCat(&cVar9, iVar31, 8);
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
			{
				Global_1602437.f_72139[iVar30 /*3*/][iVar31] = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
			}
			else
			{
				Global_1602437.f_72139[iVar30 /*3*/][iVar31] = 0;
			}
			iVar31++;
		}
		iVar31 = 0;
		while (iVar31 <= 3)
		{
			StringCopy(&cVar9, "pvp", 8);
			StringIntConCat(&cVar9, iVar30, 8);
			if (iVar31 > 0)
			{
				StringIntConCat(&cVar9, iVar31, 8);
			}
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 5)
			{
				Global_1602437.f_71816[iVar30 /*13*/][iVar31 /*3*/] = { DATAFILE::DATADICT_GET_VECTOR(iVar0, &cVar9) };
			}
			else
			{
				Global_1602437.f_71816[iVar30 /*13*/][iVar31 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar9, "pvh", 8);
			StringIntConCat(&cVar9, iVar30, 8);
			if (iVar31 > 0)
			{
				StringIntConCat(&cVar9, iVar31, 8);
			}
			if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 3)
			{
				Global_1602437.f_71869[iVar30 /*5*/][iVar31] = DATAFILE::DATADICT_GET_FLOAT(iVar0, &cVar9);
			}
			else
			{
				Global_1602437.f_71869[iVar30 /*5*/][iVar31] = -1f;
			}
			iVar31++;
		}
		StringCopy(&cVar9, "tscpos", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 5)
		{
			Global_1602437.f_71754[iVar30 /*3*/] = { DATAFILE::DATADICT_GET_VECTOR(iVar0, &cVar9) };
		}
		else
		{
			Global_1602437.f_71754[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscrot", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 5)
		{
			Global_1602437.f_71767[iVar30 /*3*/] = { DATAFILE::DATADICT_GET_VECTOR(iVar0, &cVar9) };
		}
		else
		{
			Global_1602437.f_71767[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tspos", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 5)
		{
			Global_1602437.f_71780[iVar30 /*3*/] = { DATAFILE::DATADICT_GET_VECTOR(iVar0, &cVar9) };
		}
		else
		{
			Global_1602437.f_71780[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscfov", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 3)
		{
			Global_1602437.f_71793[iVar30] = DATAFILE::DATADICT_GET_FLOAT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_71793[iVar30] = 45f;
		}
		StringCopy(&cVar9, "tshead", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 3)
		{
			Global_1602437.f_71798[iVar30] = DATAFILE::DATADICT_GET_FLOAT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_71798[iVar30] = 0f;
		}
		iVar30++;
	}
	iVar2 = 0;
	while (iVar2 <= 17)
	{
		StringCopy(&cVar9, "pnid", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1602437.f_69403[iVar2 /*18*/]), DATAFILE::DATADICT_GET_STRING(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1602437.f_69403[iVar2 /*18*/]), "", 64);
		}
		StringCopy(&cVar9, "pnlv", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_1602437.f_69403[iVar2 /*18*/].f_16 = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_69403[iVar2 /*18*/].f_16 = 0;
		}
		StringCopy(&cVar9, "pnvr", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (DATAFILE::DATADICT_GET_TYPE(iVar0, &cVar9) == 2 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1602437.f_69403[iVar2 /*18*/])))
		{
			Global_1602437.f_69403[iVar2 /*18*/].f_17 = DATAFILE::DATADICT_GET_INT(iVar0, &cVar9);
		}
		else
		{
			Global_1602437.f_69403[iVar2 /*18*/].f_17 = -1;
		}
		iVar2++;
	}
}

var func_156()//Position - 0x15F34
{
	return HUD::_GET_LABEL_TEXT("CREATOR_NO_T");
}

bool func_157()//Position - 0x15F44
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 0);
}

void func_158()//Position - 0x15F5E
{
	if (func_159())
	{
		Global_2434575.f_8 = 0;
	}
	Global_2434575.f_7 = 1;
}

bool func_159()//Position - 0x15F7B
{
	return MISC::IS_BIT_SET(Global_2428131.f_2, 11);
}

int func_160(int iParam0)//Position - 0x15F8F
{
	if (MISC::IS_PS3_VERSION() || (MISC::IS_ORBIS_VERSION() && iParam0 == 0))
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1) == 0 || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, 0) == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1) == 0)
	{
		return 0;
	}
	if (func_161() == 0)
	{
		return 0;
	}
	return 1;
}

int func_161()//Position - 0x15FEA
{
	if (MISC::IS_PS3_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_XBOX360_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if ((MISC::IS_ORBIS_VERSION() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE() == 0) && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_DURANGO_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)//Position - 0x16062
{
	if (MISC::IS_PS3_VERSION() || (MISC::IS_ORBIS_VERSION() && iParam0 == 0))
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0 || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, 0) == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
	{
		return 0;
	}
	if (func_161() == 0)
	{
		return 0;
	}
	return 1;
}

void func_163(bool bParam0, bool bParam1, bool bParam2)//Position - 0x160BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Global_1602437.f_57333 = 0;
	if (bParam0)
	{
		Global_1602437.f_36730 = -1;
		Global_1602437.f_9 = 0;
		Global_1602437.f_10 = 0;
		Global_1602437.f_11 = 0;
		Global_1602437.f_69733 = 0;
		Global_1602437.f_8 = 0;
		Global_1602437.f_13 = 0;
		Global_1602437.f_38 = 0;
		Global_1602437.f_15 = 0;
		Global_1602437.f_37 = 0;
		Global_1602437.f_39 = 0;
		Global_1602437.f_40 = 0;
		Global_1602437.f_42 = 0;
		Global_1602437.f_43 = 0;
		Global_1602437.f_44 = 0;
		Global_1602437.f_45 = 0;
		Global_1602437.f_17 = 0;
		Global_1602437.f_18 = 1;
		Global_1602437.f_4 = 0;
		Global_1602437.f_33 = 0;
		Global_1602437.f_36 = 1;
		Global_1602437.f_14 = 0;
		Global_1602437.f_57310 = 0;
		Global_1602437.f_57313 = 0;
		Global_1602437.f_57312 = 0;
		Global_1602437.f_57309 = 0;
		if (bParam1)
		{
			Global_1602437.f_3 = 0;
		}
		Global_1602437.f_2 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1602437.f_21660[iVar0 /*38*/] = -1;
			Global_1602437.f_21660[iVar0 /*38*/].f_1 = -1;
			Global_1602437.f_21660[iVar0 /*38*/].f_2 = 0;
			Global_1602437.f_21660[iVar0 /*38*/].f_3 = 0;
			iVar0++;
		}
		Global_1602437.f_57314 = 0;
		Global_1602437.f_57315 = 0;
		Global_1602437.f_57316 = 0;
		Global_1602437.f_57305 = -1;
		Global_1602437.f_57304 = 0;
		Global_1602437.f_49 = 0;
		Global_1602437.f_57 = { 0f, 0f, 0f };
		Global_1602437.f_60 = { 0f, 0f, 0f };
		Global_1602437.f_63 = { 0f, 0f, 0f };
		Global_1602437.f_66 = { 0f, 0f, 0f };
		Global_1602437.f_69 = 0f;
		Global_1602437.f_56668 = 0f;
		Global_1602437.f_71 = 0;
		Global_1602437.f_57332 = 0;
		Global_1602437.f_69945 = 0;
		iVar0 = 0;
		while (iVar0 <= 13)
		{
			Global_1602437.f_25944[iVar0] = 0;
			Global_1602437.f_25928[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_1602437.f_60034[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_1602437.f_71751 = 0;
	Global_1602437.f_32 = 0;
	Global_1602437.f_51 = { 0f, 0f, 0f };
	Global_1602437.f_69944 = -1;
	Global_1602437.f_57311 = 0f;
	StringCopy(&(Global_1602437.f_56700), "", 64);
	StringCopy(&(Global_1602437.f_57002), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_1602437.f_56986[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1602437.f_56722[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_170();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_1602437.f_21660[0 /*38*/].f_4[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1602437.f_25[iVar0] = 0;
		Global_1602437.f_69728[iVar0] = 0;
		Global_1602437.f_20[iVar0] = 1;
		Global_1602437.f_56343[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1602437.f_56356[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1602437.f_56369[iVar0] = 0f;
		Global_1602437.f_71754[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1602437.f_71767[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1602437.f_71780[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1602437.f_71793[iVar0] = 45f;
		Global_1602437.f_71798[iVar0] = 0f;
		StringCopy(&(Global_1602437.f_72109[iVar0 /*6*/]), "", 24);
		Global_1602437.f_72134[iVar0] = 0;
		StringCopy(&(Global_1602437.f_71911[iVar0 /*16*/]), "", 64);
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_1602437.f_71976[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		iVar0++;
	}
	Global_1602437.f_71803 = { 0f, 0f, 0f };
	Global_1602437.f_71806 = { 0f, 0f, 0f };
	Global_1602437.f_71809 = { 0f, 0f, 0f };
	Global_1602437.f_71812 = 45f;
	Global_1602437.f_71813 = 0f;
	Global_1602437.f_71814 = 0;
	Global_1602437.f_72152 = 10000;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1602437.f_52934[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1602437.f_52983[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1602437.f_53032[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_168(&(Global_1602437.f_60434[iVar0 /*1269*/]));
		func_166(&(Global_1602437.f_66780[iVar0 /*434*/]));
		iVar0++;
	}
	func_166(&(Global_1602437.f_68951));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_1602437.f_69841[iVar0 /*4*/].f_3 = 0;
		Global_1602437.f_69841[iVar0 /*4*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1602437.f_69942 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1602437.f_36666[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1602437.f_36727 = 0;
	iVar0 = 0;
	while (iVar0 <= 68)
	{
		func_140(&(Global_1602437.f_57342[iVar0 /*39*/]), iVar0);
		iVar0++;
	}
	Global_1602437.f_60323[0] = 0;
	Global_1602437.f_60323[1] = 0;
	Global_1602437.f_60327 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_165(&(Global_1602437.f_69739[iVar0 /*10*/]));
		iVar0++;
	}
	Global_1602437.f_1 = 0;
	Global_1602437.f_57285 = 0;
	Global_1602437.f_69733 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1602437.f_57318[iVar0] = -1;
		Global_1602437.f_69946[iVar0] = -1;
		iVar0++;
	}
	Global_1602437.f_57340 = 0;
	Global_1602437.f_57341 = 0;
	Global_1602437.f_69984 = 0.5f;
	Global_1602437.f_60341 = 1;
	Global_1602437.f_60343 = 5;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1602437.f_69985[iVar0] = 0f;
		Global_1602437.f_70006[iVar0] = 0f;
		Global_1602437.f_70027[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1602437.f_26255[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1602437.f_26293[iVar0] = -1;
		iVar0++;
	}
	Global_1601192 = 0;
	Global_1602437.f_5 = 0;
	Global_1602437.f_57291 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1602437.f_21624[iVar0 /*3*/][0] = 0;
		Global_1602437.f_21624[iVar0 /*3*/][1] = 0;
		Global_1602437.f_21611[iVar0 /*3*/][0] = 0;
		Global_1602437.f_21611[iVar0 /*3*/][1] = 0;
		Global_1602437.f_21637[iVar0 /*3*/][0] = 0;
		Global_1602437.f_21637[iVar0 /*3*/][1] = 0;
		Global_1602437.f_21650[iVar0] = 0;
		Global_1602437.f_21655[iVar0] = 0;
		Global_1602437.f_60368[iVar0 /*5*/][0] = 0;
		Global_1602437.f_60368[iVar0 /*5*/][1] = 0;
		Global_1602437.f_60368[iVar0 /*5*/][2] = 0;
		Global_1602437.f_60411[iVar0 /*2*/][0] = 0;
		Global_1602437.f_60425[iVar0 /*2*/][0] = 0;
		Global_1602437.f_72[iVar0 /*5346*/] = { 0f, 0f, 0f };
		Global_1602437.f_72[iVar0 /*5346*/].f_4 = { 0f, 0f, 0f };
		Global_1602437.f_72[iVar0 /*5346*/].f_7 = { 0f, 0f, 0f };
		Global_1602437.f_72[iVar0 /*5346*/].f_11 = { 0f, 0f, 0f };
		Global_1602437.f_72[iVar0 /*5346*/].f_14 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_15 = { 0f, 0f, 0f };
		Global_1602437.f_72[iVar0 /*5346*/].f_18 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_19 = { 0f, 0f, 0f };
		Global_1602437.f_72[iVar0 /*5346*/].f_22 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_23 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_35 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_24 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_25 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_26 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_27 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_28 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_29 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_30 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_31 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_32 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_33 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_38 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_1809 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_1811 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_1832 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_1905 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_2683 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_1810 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_1812 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_2684 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_40 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_41 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_90 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_91 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_2685 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_36 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_37 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_1657 = 60000;
		Global_1602437.f_72[iVar0 /*5346*/].f_1663 = 60000;
		Global_1602437.f_72[iVar0 /*5346*/].f_2456 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_187 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_188 = 0;
		Global_1602437.f_21457[iVar0] = 0;
		Global_1602437.f_21462[iVar0] = 0;
		Global_1602437.f_21467[iVar0] = -1;
		Global_1602437.f_21477[iVar0] = 0;
		StringCopy(&(Global_1602437.f_21482[iVar0 /*4*/]), "", 16);
		Global_1602437.f_21504[iVar0] = 3;
		Global_1602437.f_21472[iVar0] = 0;
		Global_1602437.f_21499[iVar0] = 0;
		Global_1602437.f_60329[iVar0] = 0;
		Global_1602437.f_60334[iVar0] = 0;
		Global_1602437.f_26288[iVar0] = 100;
		Global_1602437.f_26298[iVar0] = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_2638 = 0;
		Global_1601192.f_1[iVar0] = 0;
		Global_1602437.f_60396[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_1602437.f_56468[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_1602437.f_56577[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0f;
				iVar2++;
			}
			Global_1602437.f_72139[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1602437.f_25960[iVar0 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1602437.f_26053[iVar0 /*47*/][0 /*23*/][iVar1] = 0;
			Global_1602437.f_26053[iVar0 /*47*/][1 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1602437.f_71816[iVar0 /*13*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1602437.f_71869[iVar0 /*5*/][iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 45)
		{
			Global_1602437.f_72[iVar0 /*5346*/].f_42[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_92[iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1602437.f_72[iVar0 /*5346*/].f_141[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_146[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1602437.f_22041[iVar1 /*27*/] = 0;
			Global_1602437.f_22041[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_1602437.f_22041[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_1602437.f_22041[iVar1 /*27*/].f_25 = 0f;
			Global_1602437.f_22041[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_1602437.f_22041[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_1602437.f_22041[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_1602437.f_22041[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_1602437.f_72[iVar0 /*5346*/].f_2566[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2584[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2602[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2620[iVar1] = 0;
			Global_1602437.f_36580[iVar1 /*5*/][iVar0] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2639[iVar1] = 60000;
			Global_1602437.f_72[iVar0 /*5346*/].f_2657[iVar1] = 60000;
			Global_1602437.f_21509[iVar1 /*5*/][iVar0] = -1;
			StringCopy(&(Global_1601192.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1601192.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_207[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_1665[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_1683[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_1701[iVar1] = 1;
			Global_1602437.f_72[iVar0 /*5346*/].f_1773[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_1791[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_1833[iVar1] = 10000;
			Global_1602437.f_72[iVar0 /*5346*/].f_1813[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_1869[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_1719[iVar1] = 1;
			Global_1602437.f_72[iVar0 /*5346*/].f_1887[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_1906[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2190[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2226[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_1942[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_1924[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2082[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2208[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2244[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2136[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2154[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2100[iVar1] = 100;
			Global_1602437.f_72[iVar0 /*5346*/].f_1960[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1602437.f_72[iVar0 /*5346*/].f_2012[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1602437.f_72[iVar0 /*5346*/].f_2064[iVar1] = 0f;
			Global_1602437.f_72[iVar0 /*5346*/].f_2118[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2172[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_297[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_315[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_333[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_369[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_225[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_243[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_351[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_387[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_5112[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_5130[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_5148[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_5166[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_5184[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_5202[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_5220[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_5238[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_5256[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_5274[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_2494[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2512[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2530[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2548[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_261[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_279[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_1737[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_1755[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_151[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_169[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_189[iVar1] = 0;
			StringCopy(&(Global_1602437.f_72[iVar0 /*5346*/].f_2686[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1602437.f_72[iVar0 /*5346*/].f_2959[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1602437.f_72[iVar0 /*5346*/].f_3232[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1602437.f_72[iVar0 /*5346*/].f_3711[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1602437.f_72[iVar0 /*5346*/].f_3505[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1602437.f_72[iVar0 /*5346*/].f_3608[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1602437.f_72[iVar0 /*5346*/].f_4906[0 /*16*/]), "", 64);
			StringCopy(&(Global_1602437.f_72[iVar0 /*5346*/].f_4906[1 /*16*/]), "", 64);
			StringCopy(&(Global_1602437.f_72[iVar0 /*5346*/].f_3814[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1602437.f_72[iVar0 /*5346*/].f_4087[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1602437.f_72[iVar0 /*5346*/].f_4360[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1602437.f_72[iVar0 /*5346*/].f_4633[iVar1 /*16*/]), "", 64);
			Global_1602437.f_72[iVar0 /*5346*/].f_2384[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2420[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2402[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_2262[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1602437.f_72[iVar0 /*5346*/].f_2314[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1602437.f_72[iVar0 /*5346*/].f_409[iVar1 /*23*/] = { 0f, 0f, 0f };
			Global_1602437.f_72[iVar0 /*5346*/].f_409[iVar1 /*23*/].f_3 = { 0f, 0f, 0f };
			Global_1602437.f_72[iVar0 /*5346*/].f_409[iVar1 /*23*/].f_6 = { 0f, 0f, 0f };
			Global_1602437.f_72[iVar0 /*5346*/].f_409[iVar1 /*23*/].f_9 = 0f;
			Global_1602437.f_72[iVar0 /*5346*/].f_409[iVar1 /*23*/].f_10 = 0f;
			Global_1602437.f_72[iVar0 /*5346*/].f_409[iVar1 /*23*/].f_19 = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_409[iVar1 /*23*/].f_17 = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_409[iVar1 /*23*/].f_13 = { 0f, 0f, 0f };
			Global_1602437.f_72[iVar0 /*5346*/].f_409[iVar1 /*23*/].f_18 = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_409[iVar1 /*23*/].f_20 = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_409[iVar1 /*23*/].f_21 = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_409[iVar1 /*23*/].f_22 = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_801[iVar1 /*23*/] = { 0f, 0f, 0f };
			Global_1602437.f_72[iVar0 /*5346*/].f_801[iVar1 /*23*/].f_3 = { 0f, 0f, 0f };
			Global_1602437.f_72[iVar0 /*5346*/].f_801[iVar1 /*23*/].f_6 = { 0f, 0f, 0f };
			Global_1602437.f_72[iVar0 /*5346*/].f_801[iVar1 /*23*/].f_9 = 0f;
			Global_1602437.f_72[iVar0 /*5346*/].f_801[iVar1 /*23*/].f_10 = 0f;
			Global_1602437.f_72[iVar0 /*5346*/].f_801[iVar1 /*23*/].f_19 = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_801[iVar1 /*23*/].f_17 = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_801[iVar1 /*23*/].f_13 = { 0f, 0f, 0f };
			Global_1602437.f_72[iVar0 /*5346*/].f_801[iVar1 /*23*/].f_18 = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_801[iVar1 /*23*/].f_20 = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_801[iVar1 /*23*/].f_21 = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_801[iVar1 /*23*/].f_22 = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_2366[iVar1] = 3f;
			Global_1602437.f_72[iVar0 /*5346*/].f_1851[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_2438[iVar1] = 10.5f;
			Global_1602437.f_72[iVar0 /*5346*/].f_4939[iVar1 /*5*/][0] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_4939[iVar1 /*5*/][1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_4939[iVar1 /*5*/][2] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_4939[iVar1 /*5*/][3] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_5025[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_5043[iVar1 /*4*/][0] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_5043[iVar1 /*4*/][1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_5043[iVar1 /*4*/][2] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_2458[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_5292[iVar1] = 0;
			Global_1602437.f_72[iVar0 /*5346*/].f_5310[iVar1] = -1;
			Global_1602437.f_72[iVar0 /*5346*/].f_5328[iVar1] = 0;
			iVar1++;
		}
		Global_1602437.f_72[iVar0 /*5346*/].f_1656 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_1662 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_1655 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_1661 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_1658 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_1659 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_1660 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_1664 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_405 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_406 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_139 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_140 = -1;
		Global_1602437.f_72[iVar0 /*5346*/].f_2675 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_2676 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_2677 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_2678 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_2679 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_2680 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_2681 = 0;
		Global_1602437.f_72[iVar0 /*5346*/].f_2682 = 0;
		iVar0++;
	}
	Global_1602437.f_54 = { 0f, 0f, 0f };
	Global_1602437.f_22502 = { 0f, 0f, 0f };
	Global_1602437.f_70 = 0f;
	Global_1602437.f_69385 = { 0f, 0f, 0f };
	Global_1602437.f_57286[0] = 0;
	Global_1602437.f_57286[1] = 0;
	Global_1602437.f_57289 = 0;
	Global_1602437.f_57285 = 0;
	Global_1602437.f_69951 = 0;
	Global_1602437.f_69952 = 0;
	Global_1602437.f_69953 = 0;
	Global_1602437.f_69954 = 0;
	Global_1602437.f_69956 = 0;
	Global_1602437.f_69958 = 0;
	Global_1602437.f_69960 = 0;
	Global_1602437.f_69963 = 0;
	Global_1602437.f_69964 = 0;
	Global_1602437.f_69965 = 0;
	Global_1602437.f_69966 = 0;
	Global_1602437.f_69967 = 0;
	Global_1602437.f_69968 = 0;
	Global_1602437.f_69973 = -1;
	Global_1602437.f_69974 = -1;
	Global_1602437.f_69975 = -1;
	Global_1602437.f_69976 = -1;
	Global_1602437.f_69977 = -1;
	Global_1602437.f_69978 = -1;
	Global_1602437.f_69979 = -1;
	Global_1602437.f_69980 = -1;
	Global_1602437.f_69981 = -1;
	Global_1602437.f_69982 = -1;
	Global_1602437.f_69983 = 1.5f;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		Global_1602437.f_23206[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1602437.f_22505[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1602437.f_22505[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1602437.f_22505[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1602437.f_23488[iVar0] = 0f;
		Global_1602437.f_23630[iVar0] = 1f;
		iVar0++;
	}
	Global_1602437.f_25918 = 0;
	if (bParam0)
	{
		Global_1602437.f_25919 = 0;
		Global_1602437.f_25927 = 0;
	}
	Global_1602437.f_25925 = 0;
	Global_1602437.f_25926 = 0;
	Global_1602437.f_26247 = 0f;
	Global_1602437.f_28441 = 0;
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		Global_1602437.f_28442[iVar0 /*31*/] = { 0f, 0f, 0f };
		Global_1602437.f_28442[iVar0 /*31*/].f_6 = 0f;
		Global_1602437.f_28442[iVar0 /*31*/].f_7 = 0;
		Global_1602437.f_28442[iVar0 /*31*/].f_9 = -1;
		Global_1602437.f_28442[iVar0 /*31*/].f_8 = -1;
		Global_1602437.f_28442[iVar0 /*31*/].f_10 = 1;
		Global_1602437.f_28442[iVar0 /*31*/].f_18 = 0;
		Global_1602437.f_28442[iVar0 /*31*/].f_12 = 0;
		Global_1602437.f_28442[iVar0 /*31*/].f_13 = 0;
		Global_1602437.f_28442[iVar0 /*31*/].f_14 = 0;
		Global_1602437.f_28442[iVar0 /*31*/].f_11 = 0;
		Global_1602437.f_28442[iVar0 /*31*/].f_28 = 0;
		Global_1602437.f_28442[iVar0 /*31*/].f_29 = 0;
		Global_1602437.f_28442[iVar0 /*31*/].f_30 = 0;
		Global_1602437.f_28442[iVar0 /*31*/].f_15 = -1;
		Global_1602437.f_28442[iVar0 /*31*/].f_16 = -1;
		Global_1602437.f_28442[iVar0 /*31*/].f_17 = -1;
		iVar0++;
	}
	Global_1602437.f_31574 = 0;
	Global_1602437.f_31575 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1602437.f_31576[iVar0 /*29*/] = { 0f, 0f, 0f };
		Global_1602437.f_31576[iVar0 /*29*/].f_6 = 0f;
		Global_1602437.f_31576[iVar0 /*29*/].f_7 = 0;
		Global_1602437.f_31576[iVar0 /*29*/].f_8 = -1;
		Global_1602437.f_31576[iVar0 /*29*/].f_10 = -1;
		Global_1602437.f_31576[iVar0 /*29*/].f_9 = -1;
		Global_1602437.f_31576[iVar0 /*29*/].f_11 = 1;
		Global_1602437.f_31576[iVar0 /*29*/].f_16 = 0;
		Global_1602437.f_31576[iVar0 /*29*/].f_12 = 0;
		Global_1602437.f_31576[iVar0 /*29*/].f_26 = 0;
		Global_1602437.f_31576[iVar0 /*29*/].f_27 = 0;
		Global_1602437.f_31576[iVar0 /*29*/].f_28 = 0;
		Global_1602437.f_31576[iVar0 /*29*/].f_13 = -1;
		Global_1602437.f_31576[iVar0 /*29*/].f_14 = -1;
		Global_1602437.f_31576[iVar0 /*29*/].f_15 = -1;
		iVar0++;
	}
	Global_1602437.f_28116 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1602437.f_28117[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_1602437.f_28117[iVar0 /*19*/].f_3 = 0f;
		Global_1602437.f_28117[iVar0 /*19*/].f_4 = 0;
		Global_1602437.f_28117[iVar0 /*19*/].f_14 = 0;
		Global_1602437.f_28117[iVar0 /*19*/].f_12 = 0;
		Global_1602437.f_28117[iVar0 /*19*/].f_15 = 0;
		Global_1602437.f_28117[iVar0 /*19*/].f_16 = 0;
		Global_1602437.f_28117[iVar0 /*19*/].f_6 = -1;
		Global_1602437.f_28117[iVar0 /*19*/].f_5 = -1;
		Global_1602437.f_28117[iVar0 /*19*/].f_13 = 0f;
		Global_1602437.f_28117[iVar0 /*19*/].f_8 = 0f;
		Global_1602437.f_28117[iVar0 /*19*/].f_9 = 0f;
		Global_1602437.f_28117[iVar0 /*19*/].f_10 = 0f;
		Global_1602437.f_28117[iVar0 /*19*/].f_11 = 0f;
		Global_1602437.f_28117[iVar0 /*19*/].f_7 = 0;
		Global_1602437.f_28117[iVar0 /*19*/].f_17 = 0;
		Global_1602437.f_28117[iVar0 /*19*/].f_18 = 0;
		iVar0++;
	}
	Global_1602437.f_28403 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1602437.f_28404[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_1602437.f_28404[iVar0 /*7*/].f_3 = 0f;
		Global_1602437.f_28404[iVar0 /*7*/].f_4 = 0;
		Global_1602437.f_28404[iVar0 /*7*/].f_5 = 0;
		Global_1602437.f_28404[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1602437.f_26248 = 3.5f;
		Global_1602437.f_26249 = 7f;
		Global_1602437.f_26250 = 0f;
		Global_1602437.f_26251 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_1602437.f_26255[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_1602437.f_26293[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1602437.f_57323 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1602437.f_25907[iVar0] = 0;
		Global_1602437.f_60389[iVar0] = -1;
		Global_1602437.f_60420[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1602437.f_25413[iVar1 /*29*/][iVar0] = 0;
			Global_1602437.f_25413[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_1602437.f_25413[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_1602437.f_25413[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_1602437.f_25413[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_1602437.f_69734[iVar0] = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1602437.f_26304 = 1;
	}
	Global_1602437.f_26306 = 0;
	Global_1602437.f_26307 = 0;
	Global_1602437.f_26308 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1602437.f_26309[iVar0 /*86*/] = { 0f, 0f, 0f };
		Global_1602437.f_26309[iVar0 /*86*/].f_4 = { 0f, 0f, 0f };
		Global_1602437.f_26309[iVar0 /*86*/].f_3 = 0f;
		Global_1602437.f_26309[iVar0 /*86*/].f_7 = 50f;
		Global_1602437.f_26309[iVar0 /*86*/].f_8 = 0f;
		Global_1602437.f_26309[iVar0 /*86*/].f_9 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_10 = -1;
		Global_1602437.f_26309[iVar0 /*86*/].f_11 = { 0f, 0f, 0f };
		Global_1602437.f_26309[iVar0 /*86*/].f_14 = 0f;
		Global_1602437.f_26309[iVar0 /*86*/].f_15 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_26 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_28 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_29 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_30 = -1;
		Global_1602437.f_26309[iVar0 /*86*/].f_41 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_40 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_42 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_43 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_44 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_45 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_46 = 60;
		Global_1602437.f_26309[iVar0 /*86*/].f_47 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_34 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_31 = -1;
		Global_1602437.f_26309[iVar0 /*86*/].f_32 = -1;
		Global_1602437.f_26309[iVar0 /*86*/].f_33 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_52 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_48 = -1;
		Global_1602437.f_26309[iVar0 /*86*/].f_49 = -1;
		Global_1602437.f_26309[iVar0 /*86*/].f_50 = -1;
		Global_1602437.f_26309[iVar0 /*86*/].f_80 = -1;
		Global_1602437.f_26309[iVar0 /*86*/].f_81 = -1;
		Global_1602437.f_26309[iVar0 /*86*/].f_82 = { 0f, 0f, 0f };
		Global_1602437.f_26309[iVar0 /*86*/].f_85 = 0;
		Global_1602437.f_26309[iVar0 /*86*/].f_78 = -1;
		Global_1602437.f_26309[iVar0 /*86*/].f_79 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1602437.f_26309[iVar0 /*86*/].f_16[iVar1] = 0;
			Global_1602437.f_26309[iVar0 /*86*/].f_21[iVar1] = 99999;
			Global_1602437.f_26309[iVar0 /*86*/].f_62[iVar1] = 0;
			Global_1602437.f_26309[iVar0 /*86*/].f_67[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_1602437.f_69403[iVar0 /*18*/]), "", 64);
		Global_1602437.f_69403[iVar0 /*18*/].f_16 = 0;
		Global_1602437.f_69403[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_1602437.f_32186 = 0;
	Global_1602437.f_32187 = 0;
	if (bParam0)
	{
		if (func_83() && !func_128())
		{
			Global_1602437.f_32188 = -1;
		}
		else
		{
			Global_1602437.f_32188 = 0;
		}
	}
	Global_1602437.f_32189 = 0;
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		Global_1602437.f_32190[iVar0 /*20*/] = { 0f, 0f, 0f };
		Global_1602437.f_32190[iVar0 /*20*/].f_3 = 0f;
		Global_1602437.f_32190[iVar0 /*20*/].f_12 = 76;
		Global_1602437.f_32190[iVar0 /*20*/].f_4 = 0;
		Global_1602437.f_32190[iVar0 /*20*/].f_5 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1602437.f_32190[iVar0 /*20*/].f_7[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_164();
	Global_1602437.f_53081 = -1;
	Global_1602437.f_53082 = -1;
	Global_1602437.f_53083 = -1;
	Global_1602437.f_57337 = -1;
	Global_1602437.f_33011 = 0;
	Global_1602437.f_28440 = 0;
	if (bParam0)
	{
		Global_1602437.f_26254 = -1;
		Global_1602437.f_25923 = -1;
	}
	Global_1602437.f_33012 = 0;
	Global_1602437.f_33013 = 0;
	Global_1602437.f_33014 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1602437.f_33015[iVar0 /*108*/] = { 0f, 0f, 0f };
		Global_1602437.f_33015[iVar0 /*108*/].f_3 = 0f;
		Global_1602437.f_33015[iVar0 /*108*/].f_4 = 50f;
		Global_1602437.f_33015[iVar0 /*108*/].f_5 = 0f;
		Global_1602437.f_33015[iVar0 /*108*/].f_6 = 0;
		Global_1602437.f_33015[iVar0 /*108*/].f_7 = -1;
		Global_1602437.f_33015[iVar0 /*108*/].f_8 = { 0f, 0f, 0f };
		Global_1602437.f_33015[iVar0 /*108*/].f_11 = 0f;
		Global_1602437.f_33015[iVar0 /*108*/].f_12 = 0;
		Global_1602437.f_33015[iVar0 /*108*/].f_23 = -1;
		Global_1602437.f_33015[iVar0 /*108*/].f_24 = -1;
		Global_1602437.f_33015[iVar0 /*108*/].f_25 = -1;
		Global_1602437.f_33015[iVar0 /*108*/].f_27 = 0;
		Global_1602437.f_33015[iVar0 /*108*/].f_28 = 100;
		Global_1602437.f_33015[iVar0 /*108*/].f_29 = 1001f;
		Global_1602437.f_33015[iVar0 /*108*/].f_30 = 1001f;
		Global_1602437.f_33015[iVar0 /*108*/].f_32 = 1.5f;
		Global_1602437.f_33015[iVar0 /*108*/].f_37 = 0;
		Global_1602437.f_33015[iVar0 /*108*/].f_96 = 0;
		Global_1602437.f_33015[iVar0 /*108*/].f_38 = 0;
		Global_1602437.f_33015[iVar0 /*108*/].f_39 = 0;
		Global_1602437.f_33015[iVar0 /*108*/].f_26 = -1;
		Global_1602437.f_33015[iVar0 /*108*/].f_42 = 0;
		Global_1602437.f_33015[iVar0 /*108*/].f_34 = -1;
		Global_1602437.f_33015[iVar0 /*108*/].f_35 = -1;
		Global_1602437.f_33015[iVar0 /*108*/].f_36 = 0;
		Global_1602437.f_33015[iVar0 /*108*/].f_54 = -1;
		Global_1602437.f_33015[iVar0 /*108*/].f_55 = -1;
		Global_1602437.f_33015[iVar0 /*108*/].f_94 = -1;
		Global_1602437.f_33015[iVar0 /*108*/].f_93 = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1602437.f_33015[iVar0 /*108*/].f_97[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1602437.f_33015[iVar0 /*108*/].f_104[iVar1] = 0f;
			iVar1++;
		}
		Global_1602437.f_33015[iVar0 /*108*/].f_56 = -1;
		Global_1602437.f_33015[iVar0 /*108*/].f_57 = 0;
		Global_1602437.f_33015[iVar0 /*108*/].f_107 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1602437.f_33015[iVar0 /*108*/].f_13[iVar1] = 0;
			Global_1602437.f_33015[iVar0 /*108*/].f_18[iVar1] = 99999;
			Global_1602437.f_33015[iVar0 /*108*/].f_87[iVar1] = 0;
			Global_1602437.f_33015[iVar0 /*108*/].f_70[iVar1] = 0;
			Global_1602437.f_33015[iVar0 /*108*/].f_75[iVar1] = 0;
			Global_1602437.f_33015[iVar0 /*108*/].f_44[iVar1] = -1;
			Global_1602437.f_33015[iVar0 /*108*/].f_49[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	Global_1602437.f_56376 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1602437.f_56377[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1602437.f_56377[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_1602437.f_56377[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1602437.f_53084 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1602437.f_53091[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1602437.f_53091[iVar0 /*9*/].f_3 = 0f;
		Global_1602437.f_53091[iVar0 /*9*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1602437.f_53085[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 28)
		{
			Global_1602437.f_53632[iVar0 /*262*/][iVar1 /*9*/] = { 0f, 0f, 0f };
			Global_1602437.f_53632[iVar0 /*262*/][iVar1 /*9*/].f_3 = 0f;
			Global_1602437.f_53632[iVar0 /*262*/][iVar1 /*9*/].f_4 = 0;
			Global_1602437.f_53632[iVar0 /*262*/][iVar1 /*9*/].f_5 = 0;
			Global_1602437.f_53632[iVar0 /*262*/][iVar1 /*9*/].f_7 = -1;
			Global_1602437.f_53632[iVar0 /*262*/][iVar1 /*9*/].f_8 = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1602437.f_36728 = 0;
	Global_1602437.f_36731 = 0;
	Global_1602437.f_36732 = 0;
	Global_1602437.f_36729 = 50;
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		Global_1602437.f_36733[iVar0 /*270*/].f_38 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_48 = 0;
		Global_1602437.f_36733[iVar0 /*270*/] = { 0f, 0f, 0f };
		Global_1602437.f_36733[iVar0 /*270*/].f_3 = 0f;
		Global_1602437.f_36733[iVar0 /*270*/].f_4 = 0f;
		Global_1602437.f_36733[iVar0 /*270*/].f_13 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_14 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_15 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_31 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_35 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_36 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_37 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_205 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_204 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_206 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_207 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_208 = 20;
		Global_1602437.f_36733[iVar0 /*270*/].f_216 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_55 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_46 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_33 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_34 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_47 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_179 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_180 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_181 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_182 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_183 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_184 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_185 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_32 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_5 = 50f;
		Global_1602437.f_36733[iVar0 /*270*/].f_6 = 0f;
		Global_1602437.f_36733[iVar0 /*270*/].f_7 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_8 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_9 = { 0f, 0f, 0f };
		Global_1602437.f_36733[iVar0 /*270*/].f_12 = 0f;
		Global_1602437.f_36733[iVar0 /*270*/].f_166 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_60 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_158 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_159 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_160 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_166 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_176 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_167 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_175 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_61 = { 0f, 0f, 0f };
		Global_1602437.f_36733[iVar0 /*270*/].f_56 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_57 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_59 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_58 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_236 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_247 = 1f;
		Global_1602437.f_36733[iVar0 /*270*/].f_77 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_191 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_51 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_192 = 250;
		Global_1602437.f_36733[iVar0 /*270*/].f_195 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_196 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_250 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_197 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_251 = 4;
		Global_1602437.f_36733[iVar0 /*270*/].f_221 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_144 = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_145 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_146 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_217 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_218 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_219 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_249 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_248 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_147 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_148 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1602437.f_36733[iVar0 /*270*/].f_16[iVar1] = 0;
			Global_1602437.f_36733[iVar0 /*270*/].f_21[iVar1] = 2;
			Global_1602437.f_36733[iVar0 /*270*/].f_26[iVar1] = 99999;
			Global_1602437.f_36733[iVar0 /*270*/].f_186[iVar1] = -1;
			Global_1602437.f_36733[iVar0 /*270*/].f_222[iVar1] = 0;
			Global_1602437.f_36733[iVar0 /*270*/].f_227[iVar1] = 0;
			Global_1602437.f_36733[iVar0 /*270*/].f_237[iVar1] = -1;
			Global_1602437.f_36733[iVar0 /*270*/].f_242[iVar1] = -1;
			Global_1602437.f_36733[iVar0 /*270*/].f_253[iVar1] = -2;
			Global_1602437.f_36733[iVar0 /*270*/].f_161[iVar1] = 0;
			iVar1++;
		}
		Global_1602437.f_36733[iVar0 /*270*/].f_112[0] = 0f;
		Global_1602437.f_36733[iVar0 /*270*/].f_118[0] = 0f;
		Global_1602437.f_36733[iVar0 /*270*/].f_130[0] = 0f;
		Global_1602437.f_36733[iVar0 /*270*/].f_78[0] = 0;
		Global_1602437.f_36733[iVar0 /*270*/].f_84[0] = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_90[0 /*3*/] = { 0f, 0f, 0f };
		Global_1602437.f_36733[iVar0 /*270*/].f_106[0] = 3;
		Global_1602437.f_36733[iVar0 /*270*/].f_124[0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1602437.f_36733[iVar0 /*270*/].f_64[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1602437.f_36733[iVar0 /*270*/].f_78[iVar1 + 1] = 0;
			Global_1602437.f_36733[iVar0 /*270*/].f_112[iVar1 + 1] = 0f;
			Global_1602437.f_36733[iVar0 /*270*/].f_118[iVar1 + 1] = 0f;
			Global_1602437.f_36733[iVar0 /*270*/].f_130[iVar1 + 1] = 0f;
			Global_1602437.f_36733[iVar0 /*270*/].f_84[iVar1 + 1] = -1;
			Global_1602437.f_36733[iVar0 /*270*/].f_90[iVar1 + 1 /*3*/] = { 0f, 0f, 0f };
			Global_1602437.f_36733[iVar0 /*270*/].f_106[iVar1 + 1] = 3;
			Global_1602437.f_36733[iVar0 /*270*/].f_124[iVar1 + 1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1602437.f_36733[iVar0 /*270*/].f_260[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1602437.f_36733[iVar0 /*270*/].f_267[iVar1] = 0f;
			iVar1++;
		}
		Global_1602437.f_36733[iVar0 /*270*/].f_177 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_178 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_252 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_258 = -1;
		Global_1602437.f_36733[iVar0 /*270*/].f_259 = -1;
		iVar0++;
	}
	Global_1602437.f_53084 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1602437.f_53091[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1602437.f_53091[iVar0 /*9*/].f_3 = 0f;
		Global_1602437.f_53091[iVar0 /*9*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1602437.f_25913[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		Global_1602437.f_23702[iVar0 /*95*/].f_51 = 0;
		Global_1602437.f_23702[iVar0 /*95*/].f_45 = 0;
		Global_1602437.f_23702[iVar0 /*95*/].f_19 = 0f;
		Global_1602437.f_23702[iVar0 /*95*/].f_27 = 0f;
		Global_1602437.f_23702[iVar0 /*95*/].f_28 = 0f;
		Global_1602437.f_23702[iVar0 /*95*/].f_29 = 0f;
		Global_1602437.f_23702[iVar0 /*95*/] = 0;
		Global_1602437.f_23702[iVar0 /*95*/].f_20 = { 0f, 0f, 0f };
		Global_1602437.f_23702[iVar0 /*95*/].f_23 = { 0f, 0f, 0f };
		Global_1602437.f_23702[iVar0 /*95*/].f_26 = 1f;
		Global_1602437.f_23702[iVar0 /*95*/].f_93 = 10.5f;
		Global_1602437.f_23702[iVar0 /*95*/].f_92 = 0;
		Global_1602437.f_23702[iVar0 /*95*/].f_52 = 0;
		if (Global_1602437.f_23702[iVar0 /*95*/].f_94 != 0)
		{
			GRAPHICS::DELETE_CHECKPOINT(Global_1602437.f_23702[iVar0 /*95*/].f_94);
			Global_1602437.f_23702[iVar0 /*95*/].f_94 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1602437.f_23702[iVar0 /*95*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1602437.f_23702[iVar0 /*95*/].f_14[iVar1] = 0f;
			Global_1602437.f_23702[iVar0 /*95*/].f_35[iVar1] = 0;
			Global_1602437.f_23702[iVar0 /*95*/].f_40[iVar1] = 0;
			Global_1602437.f_23702[iVar0 /*95*/].f_30[iVar1] = 0;
			Global_1602437.f_23702[iVar0 /*95*/].f_58[iVar1] = 0;
			Global_1602437.f_23702[iVar0 /*95*/].f_63[iVar1] = 99999;
			Global_1602437.f_23702[iVar0 /*95*/].f_68[iVar1] = 0;
			Global_1602437.f_23702[iVar0 /*95*/].f_73[iVar1] = 0;
			Global_1602437.f_23702[iVar0 /*95*/].f_53[iVar1] = 0;
			Global_1602437.f_23702[iVar0 /*95*/].f_78[iVar1] = 0;
			Global_1602437.f_23702[iVar0 /*95*/].f_83[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1602437.f_56374 = 0;
	Global_1602437.f_31 = 0;
	Global_1602437.f_71752 = 12;
	Global_1602437.f_71753 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1602437.f_69389[iVar0] = -1;
		Global_1602437.f_69394[iVar0] = -1;
		iVar0++;
	}
	Global_1602437.f_26305 = 0;
	Global_1602437.f_69969 = -1;
	Global_1602437.f_60394 = -1;
	Global_1602437.f_60395 = -1;
	Global_1602437.f_69399 = 0;
	Global_1602437.f_69388 = 0;
	Global_1602437.f_69401 = 0;
	Global_1602437.f_69400 = 0;
	Global_1602437.f_69402 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1602437.f_57296[iVar0] = 0;
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 <= 29)
	{
		Global_1602437.f_54750[iVar3] = -1;
		Global_1602437.f_54719[iVar3] = -1;
		iVar4 = 0;
		while (iVar4 <= 4)
		{
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				Global_1602437.f_54781[iVar3 /*26*/][iVar4 /*5*/][iVar5] = -1;
				Global_1602437.f_55562[iVar3 /*26*/][iVar4 /*5*/][iVar5] = -1;
				iVar5++;
			}
			iVar4++;
		}
		iVar3++;
	}
}

void func_164()//Position - 0x193E0
{
	int iVar0;
	int iVar1;
	
	Global_1602437.f_57001 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1602437.f_57024[iVar0 /*26*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1602437.f_57024[iVar0 /*26*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1602437.f_57024[iVar0 /*26*/].f_9 = 0;
		Global_1602437.f_57024[iVar0 /*26*/].f_20 = 0;
		Global_1602437.f_57024[iVar0 /*26*/].f_22 = 0f;
		Global_1602437.f_57024[iVar0 /*26*/].f_23 = 0f;
		Global_1602437.f_57024[iVar0 /*26*/].f_21 = 0;
		Global_1602437.f_57024[iVar0 /*26*/].f_7 = 0f;
		Global_1602437.f_57024[iVar0 /*26*/].f_8 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1602437.f_57024[iVar0 /*26*/].f_10[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

void func_165(var uParam0)//Position - 0x194C6
{
	uParam0->f_4 = -1;
	uParam0->f_3 = -1;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	*uParam0 = { 0f, 0f, 0f };
}

void func_166(char* sParam0)//Position - 0x194F8
{
	int iVar0;
	
	StringCopy(sParam0, "", 64);
	sParam0->f_16 = 0;
	sParam0->f_17 = 0;
	sParam0->f_54 = { 0f, 0f, 0f };
	sParam0->f_60 = 0f;
	sParam0->f_57 = { 0f, 0f, 0f };
	sParam0->f_61 = 0;
	sParam0->f_62 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_18[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_31[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_44[iVar0] = 0f;
		sParam0->f_49[iVar0] = 0f;
		iVar0++;
	}
	sParam0->f_424 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_425[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		sParam0->f_430[iVar0] = 0;
		sParam0->f_432[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_167(&(sParam0->f_63[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_167(var uParam0)//Position - 0x195D8
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 32);
}

void func_168(char* sParam0)//Position - 0x195FD
{
	int iVar0;
	
	StringCopy(sParam0, "", 16);
	sParam0->f_4 = 0;
	sParam0->f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_6[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_19[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_32[iVar0] = 0f;
		sParam0->f_37[iVar0] = 0f;
		iVar0++;
	}
	sParam0->f_1097 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_1098[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		sParam0->f_1103[iVar0] = 0;
		sParam0->f_1105[iVar0] = 0;
		iVar0++;
	}
	sParam0->f_43 = 0;
	sParam0->f_42 = 0;
	sParam0->f_44 = 0;
	sParam0->f_735 = 0;
	sParam0->f_436 = 0;
	sParam0->f_437 = 0;
	sParam0->f_438 = 0;
	sParam0->f_439 = { 0f, 0f, 0f };
	sParam0->f_728 = { 0f, 0f, 0f };
	sParam0->f_731 = 0f;
	sParam0->f_732 = { 0f, 0f, 0f };
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_169(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_167(&(sParam0->f_736[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_169(char* sParam0, int iParam1)//Position - 0x19723
{
	if (iParam1 >= 0 && iParam1 < 20)
	{
		sParam0->f_45[iParam1] = 0;
		sParam0->f_66[iParam1] = 0;
		sParam0->f_87[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_148[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_209[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_270[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_331[iParam1] = 0f;
		sParam0->f_352[iParam1] = 0f;
		sParam0->f_373[iParam1] = 0;
		sParam0->f_394[iParam1] = -1;
		sParam0->f_415[iParam1] = 0f;
		sParam0->f_442[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_503[iParam1] = 0f;
		StringCopy(&(sParam0->f_1107[iParam1 /*4*/]), "", 16);
		StringCopy(&(sParam0->f_1188[iParam1 /*4*/]), "", 16);
	}
}

void func_170()//Position - 0x197EB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1602437.f_56851[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_171()//Position - 0x19818
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (Global_1312434)
		{
			return 1;
		}
	}
	else if (Global_1312434)
	{
		Global_1312434 = 0;
	}
	return 0;
}

bool func_172()//Position - 0x19842
{
	return MISC::IS_BIT_SET(Global_964222.f_8, 0);
}

bool func_173()//Position - 0x19855
{
	return MISC::IS_BIT_SET(Global_2428131, 4);
}

bool func_174()//Position - 0x19866
{
	return MISC::IS_BIT_SET(Global_2428131, 28);
}

var func_175()//Position - 0x19878
{
	return Global_2428131.f_566;
}

void func_176()//Position - 0x19887
{
	MISC::CLEAR_BIT(&Global_2428131, 4);
}

void func_177()//Position - 0x19898
{
	MISC::CLEAR_BIT(&Global_2428131, 28);
}

void func_178(bool bParam0, bool bParam1, bool bParam2)//Position - 0x198AA
{
	struct<52> Var0;
	
	bParam0->f_5 = 0;
	bParam0->f_6 = 0;
	bParam0->f_7 = 0;
	bParam0->f_8 = 0;
	bParam0->f_9 = 0;
	bParam0->f_12 = 0;
	bParam0->f_31 = 0;
	bParam0->f_13 = 0;
	bParam0->f_14 = 0;
	bParam0->f_15 = 0;
	bParam0->f_17 = 1;
	bParam0->f_17 = 1;
	bParam0->f_18 = 0;
	bParam0->f_19 = 0;
	bParam0->f_20 = 0;
	bParam0->f_21 = -1;
	bParam0->f_3 = 0;
	bParam0->f_28 = 0;
	bParam0->f_29 = 0;
	Global_1572884[0] = 0;
	Global_1572884[1] = 0;
	bParam0->f_40 = 0;
	if (bParam2)
	{
		bParam0->f_41 = { Var0 };
	}
	if (bParam1)
	{
		func_55(bParam0, 0);
	}
}

int func_179(int iParam0)//Position - 0x19943
{
	switch (iParam0)
	{
		case 53:
			return 15;
		
		case 60:
			return 8;
		
		case 54:
			return 14;
		
		case 58:
			return 122;
		
		case 61:
			return 1;
		
		case 59:
			return 5;
		
		case 62:
			return 6;
		
		case 55:
			return 11;
		
		case 63:
			return 0;
		
		case 64:
			return 2;
		
		case 56:
			return 13;
		
		case 65:
			return 3;
		
		case 57:
			return 12;
		
		default:
	}
	return 135;
}

bool func_180()//Position - 0x199DD
{
	return Global_2394628;
}

var func_181()//Position - 0x199E9
{
	return Global_2394628.f_3;
}

