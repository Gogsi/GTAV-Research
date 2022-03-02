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
			iVar19 = GlobalFunc_1871(Global_2394628.f_4);
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
				GlobalFunc_1144();
				GlobalFunc_1143();
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
					GlobalFunc_1225();
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
							GlobalFunc_3370();
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
						GlobalFunc_3370();
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
							GlobalFunc_3370();
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
				GlobalFunc_3370();
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
				GlobalFunc_3370();
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
			if (GlobalFunc_362(PLAYER::PLAYER_ID()) || GlobalFunc_361(PLAYER::PLAYER_ID()))
			{
				if (!GlobalFunc_1341(PLAYER::PLAYER_ID(), 1))
				{
					SCRIPT::TERMINATE_THIS_THREAD();
				}
			}
		}
	}
}




int func_4(bool bParam0)//Position - 0x4B5
{
	if (!GlobalFunc_2067())
	{
		if (GlobalFunc_6874())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (GlobalFunc_1173())
			{
				return 0;
			}
			if (GlobalFunc_2133())
			{
				return 0;
			}
			GlobalFunc_5624();
			GlobalFunc_1172();
			GlobalFunc_3749();
			if (GlobalFunc_2067())
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
			if (NETWORK::UGC_QUERY_BY_CONTENT_IDS(&Global_2394690, bParam0->f_13, 1, GlobalFunc_1171(0)))
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
				GlobalFunc_1172();
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
							GlobalFunc_1172();
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
	if (GlobalFunc_2067())
	{
		if (GlobalFunc_2680(NETWORK::UGC_GET_CONTENT_ID(bParam0->f_7)))
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
		GlobalFunc_2679();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794503.f_108499[iVar4] = 0;
			Global_794503.f_108485[iVar4] = 0;
			iVar4++;
		}
		if (GlobalFunc_6714())
		{
			GlobalFunc_8005(1);
			GlobalFunc_8005(0);
			GlobalFunc_5861(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794503.f_4[bParam0->f_9 /*86*/] = { Var5 };
	if (!GlobalFunc_2067())
	{
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_4 = NETWORK::UGC_GET_CONTENT_FILE_VERSION(bParam0->f_7, 0);
		Global_794503.f_4[bParam0->f_9 /*86*/].f_67 = GlobalFunc_2098(bParam0->f_7);
		Global_794503.f_4[bParam0->f_9 /*86*/].f_66 = NETWORK::UGC_GET_CONTENT_FILE_VERSION(bParam0->f_7, Global_794503.f_4[bParam0->f_9 /*86*/].f_67);
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_5 = NETWORK::UGC_GET_CONTENT_LANGUAGE(bParam0->f_7);
	}
	Global_794503.f_4[bParam0->f_9 /*86*/].f_56 = { GlobalFunc_2088(iVar2, "start") };
	if (DATAFILE::DATADICT_GET_TYPE(iVar2, "optbs") == 2)
	{
		Global_794503.f_4[bParam0->f_9 /*86*/].f_76 = DATAFILE::DATADICT_GET_INT(iVar2, "optbs");
	}
	MISC::CLEAR_BIT(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 15);
	MISC::CLEAR_BIT(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 18);
	MISC::CLEAR_BIT(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 19);
	Global_794503.f_4[bParam0->f_9 /*86*/].f_59 = { GlobalFunc_2088(iVar2, "cam") };
	Global_794503.f_4[bParam0->f_9 /*86*/].f_62 = { GlobalFunc_2087(iVar2) };
	if (!GlobalFunc_2067())
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
	if (GlobalFunc_2067())
	{
		StringCopy(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_6), GlobalFunc_2095(), 64);
	}
	else
	{
		StringCopy(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_6), NETWORK::UGC_GET_CONTENT_USER_ID(bParam0->f_7), 64);
	}
	Global_794503.f_4[bParam0->f_9 /*86*/].f_70 = DATAFILE::DATADICT_GET_INT(iVar2, "rank");
	Global_794503.f_96153[bParam0->f_9 /*11*/] = DATAFILE::DATADICT_GET_INT(iVar2, "tnum");
	if (!GlobalFunc_2067())
	{
		Global_794503.f_4[bParam0->f_9 /*86*/].f_73 = GlobalFunc_2096(NETWORK::UGC_GET_CONTENT_RATING(bParam0->f_7, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(bParam0->f_7, 0));
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_3 = NETWORK::UGC_GET_CONTENT_RATING_COUNT(bParam0->f_7, 0);
	}
	Global_794503.f_4[bParam0->f_9 /*86*/].f_75 = DATAFILE::DATADICT_GET_INT(iVar2, "charcon");
	Global_794503.f_4[bParam0->f_9 /*86*/].f_77 = DATAFILE::DATADICT_GET_INT(iVar2, "ltm");
	if (Global_794503.f_4[bParam0->f_9 /*86*/].f_65 == 6 && !bParam1)
	{
		if (Global_963585.f_598 < 85)
		{
			Global_794503.f_4[bParam0->f_9 /*86*/].f_68 = Global_963585.f_598;
			Global_963585[Global_794503.f_4[bParam0->f_9 /*86*/].f_68 /*3*/] = { GlobalFunc_2088(iVar2, "area") };
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
	GlobalFunc_2086(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, &(Global_794503.f_4[bParam0->f_9 /*86*/].f_71), &(Global_794503.f_4[bParam0->f_9 /*86*/].f_69));
	if (GlobalFunc_2067())
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
			if (GlobalFunc_2677(bParam0->f_9))
			{
				Global_794503.f_108485[7]++;
			}
			else if (GlobalFunc_2676(bParam0->f_9))
			{
				Global_794503.f_108485[4]++;
			}
			else if (GlobalFunc_2675(bParam0->f_9))
			{
				Global_794503.f_108485[10]++;
			}
		}
	}
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
	if (!GlobalFunc_2067())
	{
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_1 = MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(bParam0->f_7));
		if ((Global_794503.f_108484 < 5 && Global_794503.f_4[bParam0->f_9 /*86*/].f_65 == 0) && Global_794503.f_4[bParam0->f_9 /*86*/].f_68 == 1)
		{
			Global_794503.f_96153[bParam0->f_9 /*11*/].f_9 = Global_794503.f_108484;
			StringCopy(&(Global_794503.f_108453[Global_794503.f_108484 /*6*/]), NETWORK::UGC_GET_ROOT_CONTENT_ID(bParam0->f_7), 24);
			Global_794503.f_108484++;
		}
		GlobalFunc_5857(Global_794503.f_96153[bParam0->f_9 /*11*/].f_1, &(Global_794503.f_4[bParam0->f_9 /*86*/].f_76));
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
		if (GlobalFunc_6714())
		{
			GlobalFunc_8820(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, Global_794503.f_4[bParam0->f_9 /*86*/].f_68, MISC::IS_BIT_SET(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 14), Global_794503.f_4[bParam0->f_9 /*86*/].f_70, 0);
			GlobalFunc_8819(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, Global_794503.f_4[bParam0->f_9 /*86*/].f_68, Global_794503.f_4[bParam0->f_9 /*86*/].f_70, 0);
			GlobalFunc_9452(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, Global_794503.f_4[bParam0->f_9 /*86*/].f_68, Global_794503.f_4[bParam0->f_9 /*86*/].f_75, Global_794503.f_4[bParam0->f_9 /*86*/].f_70, MISC::IS_BIT_SET(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 14));
			GlobalFunc_9451(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, Global_794503.f_4[bParam0->f_9 /*86*/].f_68, Global_794503.f_4[bParam0->f_9 /*86*/].f_75, Global_794503.f_4[bParam0->f_9 /*86*/].f_70);
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
	GlobalFunc_3294(1);
	return 1;
}


void func_55(bool bParam0, int iParam1)//Position - 0x258D
{
	bParam0->f_4 = iParam1;
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
			if (GlobalFunc_1173())
			{
				return 0;
			}
			GlobalFunc_5624();
			GlobalFunc_1172();
			if (GlobalFunc_2067())
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
			if (NETWORK::SET_BALANCE_ADD_MACHINE(sParam1, GlobalFunc_1171(0)))
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
	sParam0->f_56 = { GlobalFunc_2088(iVar2, "start") };
	sParam0->f_59 = { GlobalFunc_2088(iVar2, "cam") };
	sParam0->f_62 = { GlobalFunc_2087(iVar2) };
	sParam0->f_65 = DATAFILE::DATADICT_GET_INT(iVar2, "type");
	sParam0->f_68 = DATAFILE::DATADICT_GET_INT(iVar2, "subtype");
	sParam0->f_78 = DATAFILE::DATADICT_GET_INT(iVar2, "testcomplete");
	sParam0->f_69 = DATAFILE::DATADICT_GET_INT(iVar2, "min");
	sParam0->f_70 = DATAFILE::DATADICT_GET_INT(iVar2, "rank");
	sParam0->f_71 = DATAFILE::DATADICT_GET_INT(iVar2, "num");
	sParam0->f_73 = GlobalFunc_2096(NETWORK::UGC_GET_CONTENT_RATING(iParam1, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = DATAFILE::DATADICT_GET_INT(iVar2, "charcon");
	if (GlobalFunc_3() != 2)
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
	if (!GlobalFunc_2067())
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
	GlobalFunc_1172();
}


bool func_69()//Position - 0x290F
{
	return Global_2394628.f_1;
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
	if ((GlobalFunc_1622() && GlobalFunc_2137()) || GlobalFunc_2136())
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
		if (!GlobalFunc_2135())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (GlobalFunc_2134())
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
		if (GlobalFunc_2133())
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
				GlobalFunc_7036(1, 1, bParam11);
			}
			MISC::SET_BIT(uParam2, 1);
			func_178(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_84(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, iParam13))
		{
			if (((GlobalFunc_2085() || Global_1602437 == 31) || Global_1602437 == 6) || Global_1602437 == 4)
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
			else if (GlobalFunc_1472())
			{
				Global_2476470.f_7 = 9901;
				Global_2476470.f_8 = Global_1602437.f_25919 + 1;
				if (GlobalFunc_105(Global_1602437.f_22502))
				{
					Global_1602437.f_22502 = { Global_1602437.f_54 };
				}
			}
			MISC::SET_BIT(uParam2, 2);
			MISC::CLEAR_BIT(uParam2, 1);
			MISC::SET_BIT(uParam2, 3);
			if (*uParam0)
			{
				GlobalFunc_2084();
				GlobalFunc_2083();
				if (GlobalFunc_990())
				{
					GlobalFunc_5605(Global_1602437.f_13);
				}
				Global_1602437.f_57336 = 1;
			}
			else
			{
				GlobalFunc_1143();
			}
			if (!GlobalFunc_2080())
			{
				GlobalFunc_2079();
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
		if (GlobalFunc_2133() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!GlobalFunc_2067() || (iParam2 != 0 && iParam2 != 1))
	{
		if (GlobalFunc_6874())
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
			uParam0->f_24 = GlobalFunc_5626(1);
			uParam0->f_25 = GlobalFunc_5625(1);
			if (GlobalFunc_1173())
			{
				return 0;
			}
			GlobalFunc_5624();
			GlobalFunc_1172();
			if (GlobalFunc_2067() || bParam9)
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(1);
			}
			else
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(0);
			}
			GlobalFunc_5623();
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
			if (GlobalFunc_2067() || bParam9)
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
						GlobalFunc_7925(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_55(uParam0, 9);
						*uParam0 = 1;
						GlobalFunc_1225();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_965455.f_34), sParam1, 24);
							Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_19 = { Global_965455.f_12 };
							GlobalFunc_5611(&iVar1, &uVar0, &Global_965455);
							if (Global_965455.f_57 == 0)
							{
								func_178(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								GlobalFunc_1172();
								GlobalFunc_1225();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_964222.f_34), sParam1, 24);
							Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_19 = { Global_964222.f_12 };
							GlobalFunc_5611(&iVar1, &uVar0, &Global_964222);
							uParam0->f_8 = 0;
							if (Global_964222.f_57 == 0)
							{
								func_178(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								GlobalFunc_1172();
								GlobalFunc_1225();
								return 1;
							}
						}
						GlobalFunc_1172();
						NETWORK::UGC_CLEAR_OFFLINE_QUERY();
						NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(1);
						GlobalFunc_2100(uParam0);
						func_55(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						GlobalFunc_1225();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					GlobalFunc_1225();
					GlobalFunc_1172();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = NETWORK::UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(GlobalFunc_1171(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				DATAFILE::DATAFILE_WATCH_REQUEST_ID(uParam0->f_5);
				func_55(uParam0, 4);
			}
			else if (bParam10)
			{
				if (NETWORK::UGC_QUERY_BY_CONTENT_ID(sParam1, 1, GlobalFunc_1171(iParam2)))
				{
					func_55(uParam0, 3);
				}
			}
			else if (NETWORK::SET_BALANCE_ADD_MACHINE(sParam1, GlobalFunc_1171(iParam2)))
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
					GlobalFunc_1225();
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					if (!bParam12 && !GlobalFunc_5610(uParam0->f_24, uParam0->f_25, NETWORK::UGC_GET_CONTENT_USER_ID(0), NETWORK::UGC_GET_CONTENT_CATEGORY(0)))
					{
						func_178(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						GlobalFunc_1225();
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
								GlobalFunc_5611(&iVar1, &uVar0, &Global_965455);
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_964222.f_12), NETWORK::UGC_GET_CONTENT_NAME(0), 32);
								StringCopy(&(Global_964222.f_28), NETWORK::UGC_GET_CONTENT_ID(0), 24);
								StringCopy(&(Global_964222.f_34), sParam1, 24);
								Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_19 = { Global_964222.f_12 };
								GlobalFunc_5611(&iVar1, &uVar0, &Global_964222);
								uParam0->f_8 = 0;
							}
							GlobalFunc_1172();
							func_55(uParam0, 10);
						}
						else
						{
							func_178(uParam0, 1, 1);
							*uParam0 = 0;
							GlobalFunc_1225();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (DATAFILE::DATAFILE_SELECT_UGC_DATA(0))
						{
							if (uParam0->f_16)
							{
								GlobalFunc_5609(&iVar1, &uVar0, &Global_965455, iParam6);
								if (iParam6 == 1)
								{
									func_178(uParam0, 1, 1);
									*uParam0 = 1;
									GlobalFunc_1225();
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
								GlobalFunc_5609(&iVar1, &uVar0, &Global_964222, iParam6);
								if (iParam6 == 1)
								{
									func_178(uParam0, 1, 1);
									*uParam0 = 1;
									GlobalFunc_1225();
									return 1;
								}
								StringCopy(&(Global_964222.f_12), NETWORK::UGC_GET_CONTENT_NAME(0), 32);
								StringCopy(&(Global_964222.f_28), NETWORK::UGC_GET_CONTENT_ID(0), 24);
								StringCopy(&(Global_964222.f_34), sParam1, 24);
								Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_19 = { Global_964222.f_12 };
								uParam0->f_8 = 0;
							}
							GlobalFunc_1172();
							func_55(uParam0, 10);
						}
						else
						{
							func_178(uParam0, 1, 1);
							*uParam0 = 0;
							GlobalFunc_1225();
							return 1;
						}
					}
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					GlobalFunc_1225();
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
					GlobalFunc_1225();
					return 1;
				}
			}
			else if (GlobalFunc_1277() || GlobalFunc_1711() == 4)
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
			if (bParam13 && !GlobalFunc_1041())
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
							GlobalFunc_7036(1, 1, bParam11);
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
							uParam0->f_23 = GlobalFunc_2098(0);
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
									GlobalFunc_2097(1, Var17);
								}
								else
								{
									GlobalFunc_2097(0, Var17);
								}
							}
							else
							{
								GlobalFunc_2097(0, Var17);
							}
							Global_1602437.f_6 = GlobalFunc_2096(NETWORK::UGC_GET_CONTENT_RATING(0, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(0, 0));
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
							if (!GlobalFunc_2067())
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
								StringCopy(&(Global_1602437.f_56669), GlobalFunc_2095(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_1602437.f_56980), sParam1, 24);
						}
						uParam0->f_31 = 0;
						if (!GlobalFunc_2067())
						{
							GlobalFunc_7925(uParam0->f_34, bParam11, (bParam13 || uParam14), uParam0->f_31);
							if (bParam13 || uParam14)
							{
								func_55(uParam0, 5);
								return 0;
							}
						}
						else
						{
							GlobalFunc_7925(-1, bParam11, 0, 0);
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
						GlobalFunc_1225();
						DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(uParam0->f_5);
						GlobalFunc_1172();
						return 1;
					}
					DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(uParam0->f_5);
					GlobalFunc_1172();
				}
				else if (iParam2 == 0)
				{
					func_178(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					GlobalFunc_1225();
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
						GlobalFunc_1225();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			GlobalFunc_7925(uParam0->f_34, bParam11, (bParam13 || uParam14), uParam0->f_31);
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
			if (GlobalFunc_7924(uParam0, 0, bParam3, 0))
			{
				func_55(uParam0, 0);
				GlobalFunc_1172();
				if ((((GlobalFunc_5608(Global_1602437.f_56693) && GlobalFunc_2085()) && !bParam9) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1602437.f_56986[0 /*6*/]))) && (GlobalFunc_1277() || (GlobalFunc_5396() && !GlobalFunc_2093())))
				{
					uParam0->f_8 = 0;
					func_55(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = GlobalFunc_2098(0);
						uParam0->f_21 = NETWORK::UGC_GET_CONTENT_FILE_VERSION(0, uParam0->f_23);
					}
					GlobalFunc_2092(&(uParam0->f_41), 0);
					func_55(uParam0, 18);
				}
				else
				{
					uParam0->f_41.f_3 = 1;
					func_178(uParam0, 1, 0);
					GlobalFunc_1225();
					return 1;
				}
			}
			break;
		
		case 19:
			if (NETWORK::UGC_QUERY_BY_CONTENT_ID(&(Global_1602437.f_56986[0 /*6*/]), 1, GlobalFunc_1171(iParam2)))
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
					GlobalFunc_1225();
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
					GlobalFunc_1225();
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
					GlobalFunc_1225();
					return 1;
				}
			}
			break;
		
		case 23:
			if (DATAFILE::DATAFILE_HAS_LOADED_FILE_DATA(uParam0->f_5))
			{
				if (DATAFILE::DATAFILE_SELECT_ACTIVE_FILE(uParam0->f_5))
				{
					GlobalFunc_5607();
					func_178(uParam0, 1, 0);
					Global_1601192 = 1;
					GlobalFunc_1225();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_178(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					GlobalFunc_1225();
					return 1;
				}
			}
			break;
		
		case 18:
			if (MISC::IS_BIT_SET(Global_1602437.f_5, 0))
			{
				if (bParam7)
				{
					if (GlobalFunc_2089(&(uParam0->f_41), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_178(uParam0, 1, 0);
						uParam0->f_41.f_3 = 1;
						uParam0->f_41.f_1 = 0;
						GlobalFunc_1225();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_41.f_4), sParam1, 64);
					uParam0->f_41.f_3 = 1;
					func_178(uParam0, 1, 0);
					GlobalFunc_1225();
					return 1;
				}
			}
			else
			{
				uParam0->f_41.f_3 = 1;
				func_178(uParam0, 1, 1);
				GlobalFunc_1225();
				return 1;
			}
			break;
		
		case 10:
			if (GlobalFunc_7924(uParam0, 0, bParam3, iParam2))
			{
				GlobalFunc_1172();
				func_55(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (NETWORK::SET_BALANCE_ADD_MACHINES(&(Global_965455.f_1136), Global_965455.f_57, GlobalFunc_1171(0)))
				{
					func_55(uParam0, 12);
				}
			}
			else if (NETWORK::SET_BALANCE_ADD_MACHINES(&(Global_964222.f_1136), Global_964222.f_57, GlobalFunc_1171(0)))
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
					GlobalFunc_1225();
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
					GlobalFunc_2100(uParam0);
					func_55(uParam0, 13);
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					GlobalFunc_1225();
					return 1;
				}
			}
			break;
		
		case 13:
			if (GlobalFunc_2067())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_965455.f_57 - 1))
					{
						if (DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(&(Global_965455.f_1136[uParam0->f_9 /*6*/])))
						{
							GlobalFunc_5606(uParam0, &Global_965455);
							NETWORK::UGC_CLEAR_OFFLINE_QUERY();
						}
						uParam0->f_9++;
					}
					GlobalFunc_1225();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_964222.f_57 - 1))
					{
						if (DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(&(Global_964222.f_1136[uParam0->f_9 /*6*/])))
						{
							GlobalFunc_5606(uParam0, &Global_964222);
							NETWORK::UGC_CLEAR_OFFLINE_QUERY();
						}
						uParam0->f_9++;
					}
					GlobalFunc_1225();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (GlobalFunc_7032(uParam0, &Global_965455))
				{
					if (uParam0->f_27)
					{
						func_178(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						GlobalFunc_1225();
						return 1;
					}
					else
					{
						func_55(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (GlobalFunc_7032(uParam0, &Global_964222))
			{
				if (uParam0->f_27)
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					GlobalFunc_1225();
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
			GlobalFunc_1172();
			func_178(uParam0, 1, bParam8);
			*uParam0 = 1;
			GlobalFunc_1225();
			return 1;
			break;
	}
	return 0;
}






















int func_106(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x5367
{
	if (!GlobalFunc_442() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!GlobalFunc_2067() && iParam1 == 0) && !bParam3)
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
							GlobalFunc_1225();
							DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(uParam0->f_5);
							GlobalFunc_1172();
							return 1;
						}
					}
					else if (Global_1602437 != 2 && Global_1602437 != 1)
					{
						func_178(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						GlobalFunc_1225();
						DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(uParam0->f_5);
						GlobalFunc_1172();
						return 1;
					}
				}
			}
		}
	}
	if (Global_1602437 == 0 && Global_1602437.f_1 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !GlobalFunc_2067())
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
		GlobalFunc_2094();
	}
	func_55(uParam0, 9);
	*uParam0 = 1;
	return 0;
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


bool func_180()//Position - 0x199DD
{
	return Global_2394628;
}

var func_181()//Position - 0x199E9
{
	return Global_2394628.f_3;
}

