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
	var uLocal_43 = 8;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 2;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 8;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 8;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
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
	uLocal_79 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_80 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if (!GlobalFunc_4938(0))
		{
			if (Global_35461 == -1)
			{
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
		iVar0 = 0;
		while (iVar0 < 235)
		{
			if (Global_SAVE_DATA.CODE_CONTROL_RUNFLAG_ARRAY[iVar0])
			{
				if (MISC::GET_GAME_TIMER() >= Global_SAVE_DATA.CODE_CONTROL_DATA_STRUCT.CODE_CONTROL_EXECUTE_TIMER_ARRAY[iVar0])
				{
					switch (iVar0)
					{
						case 1:
							func_524();
							break;
						
						case 4:
							func_522();
							break;
						
						case 5:
							func_521();
							break;
						
						case 19:
							func_520();
							break;
						
						case 6:
							func_519();
							break;
						
						case 7:
							func_518();
							break;
						
						case 8:
							func_517();
							break;
						
						case 9:
							func_516();
							break;
						
						case 11:
							func_515();
							break;
						
						case 12:
							func_514();
							break;
						
						case 13:
							func_513();
							break;
						
						case 14:
							func_512();
							break;
						
						case 15:
							func_511();
							break;
						
						case 16:
							func_510();
							break;
						
						case 17:
							func_509();
							break;
						
						case 18:
							func_508();
							break;
						
						case 20:
							func_507();
							break;
						
						case 21:
							func_506();
							break;
						
						case 23:
							func_505();
							break;
						
						case 39:
							func_504();
							break;
						
						case 22:
							func_503();
							break;
						
						case 24:
							func_502();
							break;
						
						case 25:
							GlobalFunc_587();
							break;
						
						case 27:
							func_500();
							break;
						
						case 28:
							func_499();
							break;
						
						case 29:
							func_498();
							break;
						
						case 30:
							func_496();
							break;
						
						case 31:
							func_495();
							break;
						
						case 33:
							func_493();
							break;
						
						case 32:
							func_484(0, 1);
							break;
						
						case 160:
							func_484(1, 1);
							break;
						
						case 161:
							func_484(2, 1);
							break;
						
						case 162:
							func_484(3, 1);
							break;
						
						case 34:
							func_464();
							break;
						
						case 35:
							func_463();
							break;
						
						case 36:
							func_461(0);
							break;
						
						case 37:
							func_461(1);
							break;
						
						case 38:
							func_461(2);
							break;
						
						case 40:
							func_460();
							break;
						
						case 41:
							func_459();
							break;
						
						case 42:
							func_458();
							break;
						
						case 43:
							func_457();
							break;
						
						case 44:
							func_456();
							break;
						
						case 45:
							func_421();
							break;
						
						case 46:
							GlobalFunc_2642(6, 140);
							GlobalFunc_2642(7, 140);
							break;
						
						case 47:
							GlobalFunc_2642(6, 141);
							GlobalFunc_2642(7, 141);
							break;
						
						case 54:
							func_419();
							break;
						
						case 48:
							func_418();
							break;
						
						case 49:
							func_417();
							break;
						
						case 50:
							func_416();
							break;
						
						case 51:
							func_403();
							break;
						
						case 52:
							func_402();
							break;
						
						case 53:
							func_401();
							break;
						
						case 55:
							func_400();
							break;
						
						case 56:
							func_399();
							break;
						
						case 57:
							GlobalFunc_563(1);
							break;
						
						case 58:
							GlobalFunc_563(0);
							break;
						
						case 59:
							GlobalFunc_4927(18, 1);
							GlobalFunc_4927(19, 1);
							break;
						
						case 60:
							GlobalFunc_4927(15, 1);
							GlobalFunc_4927(16, 1);
							GlobalFunc_4927(17, 1);
							break;
						
						case 61:
							GlobalFunc_4927(12, 1);
							GlobalFunc_4927(13, 1);
							break;
						
						case 62:
							GlobalFunc_6677("AM_H_GARAGEP", 1, 0, -1, 10000, 7, 0, 0, 0);
							GlobalFunc_4927(21, 1);
							GlobalFunc_4927(22, 1);
							GlobalFunc_4927(23, 1);
							break;
						
						case 63:
							func_392();
							break;
						
						case 64:
							func_391();
							break;
						
						case 65:
							func_388();
							break;
						
						case 66:
							func_375();
							break;
						
						case 67:
							func_374();
							break;
						
						case 68:
							func_373();
							break;
						
						case 69:
							func_372();
							break;
						
						case 70:
							func_371();
							break;
						
						case 71:
							func_370();
							break;
						
						case 72:
							func_368();
							break;
						
						case 73:
							func_367();
							break;
						
						case 74:
							func_366();
							break;
						
						case 75:
							func_365();
							break;
						
						case 76:
							func_364();
							break;
						
						case 77:
							func_363();
							break;
						
						case 78:
							func_362();
							break;
						
						case joaat("mpsv_lp0_31"):
							func_361();
							break;
						
						case 80:
							func_347();
							break;
						
						case 81:
							func_346();
							AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_16_SILVERLAKE", "MIRRORPARK_LOCKED");
							MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 5);
							break;
						
						case 82:
							func_345();
							break;
						
						case 83:
							func_344();
							break;
						
						case 84:
							func_342();
							break;
						
						case 86:
							func_338();
							break;
						
						case 87:
							func_337();
							break;
						
						case 88:
							func_336();
							func_496();
							break;
						
						case 89:
							func_335();
							break;
						
						case 90:
							func_334(1);
							break;
						
						case 91:
							func_333();
							break;
						
						case 92:
							func_332();
							break;
						
						case 93:
							func_331();
							break;
						
						case 94:
							func_328();
							break;
						
						case 95:
							func_326();
							break;
						
						case 96:
							func_325();
							break;
						
						case 97:
							func_324();
							break;
						
						case 98:
							func_319();
							break;
						
						case 99:
							GlobalFunc_4927(20, 1);
							GlobalFunc_77(20, 5, 1);
							GlobalFunc_4927(14, 1);
							GlobalFunc_77(14, 5, 1);
							break;
						
						case 100:
							func_317();
							break;
						
						case 101:
							func_316();
							break;
						
						case 102:
							func_310();
							break;
						
						case 103:
							func_309();
							break;
						
						case 104:
							func_308();
							break;
						
						case 105:
							func_307();
							break;
						
						case 106:
							func_305();
							break;
						
						case 107:
							func_304();
							break;
						
						case 108:
							func_302();
							break;
						
						case 109:
							func_301();
							break;
						
						case 110:
							func_300();
							break;
						
						case 111:
							func_299();
							break;
						
						case 112:
							func_293();
							break;
						
						case 113:
							func_292();
							break;
						
						case 114:
							func_286();
							break;
						
						case 115:
							func_270();
							break;
						
						case 117:
							func_269();
							break;
						
						case 118:
							func_268();
							break;
						
						case 116:
							func_267();
							break;
						
						case 120:
							func_266();
							break;
						
						case 121:
							func_264();
							break;
						
						case 122:
							func_261();
							break;
						
						case 123:
							func_260();
							break;
						
						case 124:
							func_258();
							break;
						
						case 125:
							func_257();
							break;
						
						case 126:
							func_256();
							break;
						
						case 127:
							func_255();
							break;
						
						case 128:
							func_254();
							break;
						
						case 129:
							func_253();
							break;
						
						case 130:
							func_252();
							break;
						
						case 131:
							GlobalFunc_651(45);
							break;
						
						case 133:
							func_250(0);
							break;
						
						case 134:
							func_250(1);
							break;
						
						case 135:
							func_249(0);
							break;
						
						case 136:
							func_249(1);
							break;
						
						case 137:
							GlobalFunc_651(50);
							break;
						
						case 138:
							GlobalFunc_651(51);
							break;
						
						case 139:
							GlobalFunc_651(54);
							break;
						
						case 140:
							func_248(0);
							break;
						
						case 141:
							func_248(1);
							break;
						
						case 142:
							func_247();
							break;
						
						case 143:
							func_245();
							break;
						
						case 144:
							func_243();
							break;
						
						case 145:
							func_242();
							break;
						
						case 146:
							func_241();
							break;
						
						case 147:
							func_239();
							break;
						
						case 148:
							GlobalFunc_585(10, 1);
							break;
						
						case 149:
							func_237();
							break;
						
						case 150:
							func_236();
							break;
						
						case 151:
							func_235();
							break;
						
						case 152:
							func_234();
							break;
						
						case 153:
							func_222();
							break;
						
						case 157:
							func_219();
							break;
						
						case 163:
							func_218();
							break;
						
						case 164:
							func_217();
							break;
						
						case 165:
							func_216();
							break;
						
						case 166:
							func_214();
							break;
						
						case 167:
							func_213();
							break;
						
						case 168:
							func_203();
							break;
						
						case 173:
							func_202();
							break;
						
						case 169:
							func_201();
							break;
						
						case 170:
							func_200();
							break;
						
						case 171:
							func_199();
							break;
						
						case 172:
							func_198();
							break;
						
						case 174:
							func_197();
							break;
						
						case 175:
							func_196();
							break;
						
						case 176:
							func_195();
							break;
						
						case 177:
							func_194();
							break;
						
						case 178:
							func_193();
							break;
						
						case 179:
							func_188();
							break;
						
						case 181:
							func_186();
							break;
						
						case 182:
							func_185();
							break;
						
						case 183:
							func_184();
							break;
						
						case 184:
							func_183();
							break;
						
						case 185:
							func_182();
							break;
						
						case 186:
							func_181();
							break;
						
						case 187:
							func_179();
							break;
						
						case 188:
							func_175();
							break;
						
						case 189:
							func_171();
							break;
						
						case 190:
							func_170();
							break;
						
						case 191:
							func_168();
							break;
						
						case 192:
							func_167();
							break;
						
						case 193:
							func_166();
							break;
						
						case 194:
							func_165();
							break;
						
						case 195:
							func_164();
							break;
						
						case 196:
							func_163();
							break;
						
						case 197:
							func_162();
							break;
						
						case 198:
							func_157();
							break;
						
						case 199:
							func_73();
							break;
						
						case 200:
							func_72();
							break;
						
						case 201:
							func_61();
							break;
						
						default:
							switch (iVar0)
							{
								case 202:
									func_60();
									break;
								
								case 203:
									func_59();
									break;
								
								case 204:
									func_58();
									break;
								
								case 205:
									func_57();
									break;
								
								case 206:
									func_24();
									break;
								
								case 207:
									func_23();
									break;
								
								case 154:
									GlobalFunc_7682(-655205392);
									GlobalFunc_7682(1266526796);
									break;
								
								case 155:
									GlobalFunc_7682(1023767);
									GlobalFunc_7682(190444893);
									break;
								
								case 156:
									func_12(58, 0);
									func_12(59, 0);
									break;
								
								case 159:
									func_1();
									break;
								
								case 208:
									GlobalFunc_651(68);
									break;
								
								case 209:
									GlobalFunc_651(69);
									break;
								
								case 210:
									GlobalFunc_651(70);
									break;
								
								case 211:
									GlobalFunc_651(71);
									break;
							}
							break;
					}
					Global_SAVE_DATA.CODE_CONTROL_RUNFLAG_ARRAY[iVar0] = 0;
				}
			}
			iVar0++;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xC1B
{
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 6))
	{
		GlobalFunc_7022(-1067764575, 6, 2, 144, 1000, 5000, -1, 0, -1, 0);
		MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 6);
	}
}











void func_12(int iParam0, int iParam1)//Position - 0x1079
{
	iParam1 = iParam1;
	Global_35961 = 1;
	if (Global_39271[iParam0 /*46*/] && !Global_39271[iParam0 /*46*/].f_1)
	{
		Global_39271[iParam0 /*46*/].f_1 = 1;
		Global_39271[iParam0 /*46*/] = 0;
	}
}











void func_23()//Position - 0x1727
{
	GlobalFunc_4927(62, 1);
}

void func_24()//Position - 0x1736
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8329();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 127, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 127, (iVar1 / 10));
	}
}

































void func_57()//Position - 0x28A7
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8329();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 126, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 126, (iVar1 / 10));
	}
}

void func_58()//Position - 0x28E9
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8329();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 125, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 125, (iVar1 / 10));
	}
}

void func_59()//Position - 0x292B
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8329();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 124, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 124, (iVar1 / 10));
	}
}

void func_60()//Position - 0x296D
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8329();
	iVar1 = GlobalFunc_469(iVar0);
	if (iVar1 > 10000)
	{
		GlobalFunc_10834(iVar0, 123, 5000);
	}
	else if (iVar1 >= 10)
	{
		GlobalFunc_10834(iVar0, 123, (iVar1 / 10));
	}
}

void func_61()//Position - 0x29AF
{
	int iVar0;
	
	iVar0 = GlobalFunc_8329();
	switch (iVar0)
	{
		case 0:
			func_62(0, 26, 100000);
			break;
		
		case 1:
			func_62(1, 26, 100000);
			break;
		
		case 2:
			func_62(2, 26, 100000);
			break;
	}
}

void func_62(int iParam0, int iParam1, int iParam2)//Position - 0x2A00
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = func_70(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	fVar1 = func_65(iParam1);
	if (Global_47050[iParam1 /*36*/].f_8)
	{
		return;
	}
	iVar2 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iParam2) / fVar1));
	func_64(iParam0, iVar0, iParam1);
	func_63(iParam0, iVar0, iVar2, 1);
}

void func_63(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2A56
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 > 9)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iParam1];
			break;
		
		case 1:
			iVar0 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iParam1];
			break;
		
		case 2:
			iVar0 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iParam1];
			break;
	}
	if (Global_47050[iVar0 /*36*/].f_9 <= 0f)
	{
		return;
	}
	iVar1 = 0;
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iParam1] = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iParam1] + iParam2);
				iVar1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iParam1];
				break;
			
			case 1:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iParam1] = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iParam1] + iParam2);
				iVar1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iParam1];
				break;
			
			case 2:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iParam1] = (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iParam1] + iParam2);
				iVar1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iParam1];
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iParam1] = iParam2;
				iVar1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iParam1];
				break;
			
			case 1:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iParam1] = iParam2;
				iVar1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iParam1];
				break;
			
			case 2:
				Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iParam1] = iParam2;
				iVar1 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iParam1];
				break;
			}
	}
	if (Global_47050[iVar0 /*36*/].f_8)
	{
		iVar2 = Global_47050[iVar0 /*36*/].f_35;
		if (iVar2 > -1)
		{
			STATS::STAT_SET_INT(Global_49931[iVar2 /*7*/].f_3[iParam0], iVar1, 1);
		}
	}
	return;
}

void func_64(int iParam0, int iParam1, int iParam2)//Position - 0x2C33
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iParam1] = iParam2;
			break;
		
		case 1:
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iParam1] = iParam2;
			break;
		
		case 2:
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iParam1] = iParam2;
			break;
	}
	return;
}

float func_65(int iParam0)//Position - 0x2CA0
{
	int iVar0;
	float fVar1;
	
	iVar0 = iParam0;
	fVar1 = (Global_47050[iParam0 /*36*/].f_9 * func_66(iVar0));
	return (SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fVar1 * 100f))) / 100f);
}

float func_66(int iParam0)//Position - 0x2CD4
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = 1f;
	switch (iParam0)
	{
		case 61:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
			{
				fVar0 = 0.5f;
			}
			break;
		
		case 73:
			if (GlobalFunc_526(25))
			{
				fVar0 = (fVar0 * 3f);
			}
			else
			{
				if (GlobalFunc_526(74) || GlobalFunc_526(75))
				{
					fVar0 = (fVar0 * 0.95f);
				}
				if (GlobalFunc_526(14))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (GlobalFunc_526(16))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (GlobalFunc_526(48))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (GlobalFunc_526(24))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (GlobalFunc_526(27))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
		
		case 66:
			if (GlobalFunc_526(49))
			{
				fVar0 = (fVar0 * 0.5f);
			}
			if (GlobalFunc_526(10))
			{
				fVar0 = (fVar0 * 0.95f);
			}
			break;
		
		case 59:
			if (GlobalFunc_526(93))
			{
				if (!GlobalFunc_526(47))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (GlobalFunc_526(38))
			{
				if (!GlobalFunc_526(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (GlobalFunc_526(84))
			{
				if (!GlobalFunc_526(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			break;
		
		case 69:
			if (GlobalFunc_526(90))
			{
				if (!GlobalFunc_526(14))
				{
					fVar0 = (fVar0 * 0.7f);
				}
			}
			break;
		
		case 16:
			if (GlobalFunc_526(28))
			{
				fVar0 = (fVar0 * 2f);
			}
			break;
		
		case 52:
			if (GlobalFunc_526(93))
			{
				if (!GlobalFunc_526(28))
				{
					fVar0 = (fVar0 * 0.6f);
				}
			}
			break;
		
		case 56:
			if (GlobalFunc_526(61))
			{
				if (!GlobalFunc_526(49))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
	}
	if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_442 < 1)
	{
		return fVar0;
	}
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_443[iVar2] == iParam0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 > -1)
	{
		fVar0 = func_68(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_452[iVar1], Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_461[iVar1]);
	}
	if (fVar0 > 1f)
	{
		fVar3 = (fVar0 - 1f);
		iVar4 = iParam0;
		iVar5 = GlobalFunc_2035(0, iVar4);
		iVar6 = GlobalFunc_2035(1, iVar4);
		iVar7 = GlobalFunc_2035(2, iVar4);
		if (((iVar5 + iVar6) + iVar7) > 0)
		{
			iVar8 = ((Global_51925[0] + Global_51925[1]) + Global_51925[2]);
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar2]));
				}
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar2]));
				}
				if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar2]));
				}
				iVar2++;
			}
			iVar9 = 700000000;
			iVar10 = 1000000000;
			if (iVar8 > iVar10)
			{
				fVar3 = 0f;
			}
			else if (iVar8 < iVar9)
			{
				fVar3 = 1f;
			}
			else
			{
				fVar11 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
				fVar12 = SYSTEM::TO_FLOAT((iVar10 - iVar9));
				fVar3 = (fVar3 * (1f - (fVar11 / fVar12)));
			}
		}
		fVar0 = (1f + fVar3);
	}
	return fVar0;
}


float func_68(int iParam0, int iParam1)//Position - 0x30BE
{
	float fVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	fVar0 = 0f;
	if (iParam0 < 1)
	{
		return 1f;
	}
	bVar1 = MISC::IS_BIT_SET(iParam1, 0);
	fVar2 = SYSTEM::TO_FLOAT(iParam0);
	iVar3 = 0;
	if (MISC::IS_BIT_SET(iParam1, 3))
	{
		iVar3++;
	}
	if (MISC::IS_BIT_SET(iParam1, 4))
	{
		iVar3 += 2;
	}
	if (MISC::IS_BIT_SET(iParam1, 5))
	{
		iVar3 += 4;
	}
	if (MISC::IS_BIT_SET(iParam1, 20))
	{
		iVar3 += 8;
	}
	fVar4 = SYSTEM::TO_FLOAT((3 * iVar3));
	if (MISC::IS_BIT_SET(iParam1, 2))
	{
		fVar4 = (fVar4 * 7f);
	}
	if (MISC::IS_BIT_SET(iParam1, 1))
	{
		if (GlobalFunc_526(21))
		{
			return 1f;
		}
	}
	else if (fVar4 < 1f)
	{
		return 1f;
	}
	fVar5 = (1f - (fVar2 / fVar4));
	if (MISC::IS_BIT_SET(iParam1, 16))
	{
		fVar0 = (fVar0 - 0.5f);
	}
	if (MISC::IS_BIT_SET(iParam1, 17))
	{
		fVar0 = (fVar0 - 0.25f);
	}
	if (MISC::IS_BIT_SET(iParam1, 18))
	{
		fVar0 = (fVar0 - 0.1f);
	}
	if (MISC::IS_BIT_SET(iParam1, 19))
	{
		fVar0 = (fVar0 - 0.33f);
	}
	if (bVar1)
	{
		fVar0 = -fVar0;
	}
	if (!MISC::IS_BIT_SET(iParam1, 1))
	{
		if (MISC::IS_BIT_SET(iParam1, 6))
		{
			fVar6 = 0f;
			if (MISC::IS_BIT_SET(iParam1, 8))
			{
				fVar6 = (fVar6 + 0.5f);
			}
			if (MISC::IS_BIT_SET(iParam1, 9))
			{
				fVar6 = (fVar6 + 0.25f);
			}
			if (MISC::IS_BIT_SET(iParam1, 10))
			{
				fVar6 = (fVar6 + 0.125f);
			}
			if (fVar5 < fVar6)
			{
				fVar7 = (fVar5 / fVar6);
				if (MISC::IS_BIT_SET(iParam1, 7))
				{
					fVar7 = (1f - fVar7);
					fVar7 = (fVar7 * fVar7);
					fVar7 = (1f - fVar7);
				}
				fVar0 = (fVar0 * fVar7);
			}
		}
		if (MISC::IS_BIT_SET(iParam1, 11))
		{
			fVar8 = 0f;
			if (MISC::IS_BIT_SET(iParam1, 13))
			{
				fVar8 = (fVar8 + 0.5f);
			}
			if (MISC::IS_BIT_SET(iParam1, 14))
			{
				fVar8 = (fVar8 + 0.25f);
			}
			if (MISC::IS_BIT_SET(iParam1, 15))
			{
				fVar8 = (fVar8 + 0.125f);
			}
			fVar9 = (1f - fVar8);
			if (fVar5 > fVar9)
			{
				fVar10 = ((fVar5 - fVar9) / fVar8);
				if (MISC::IS_BIT_SET(iParam1, 12))
				{
					fVar10 = (fVar10 * fVar10);
				}
				fVar0 = (fVar0 * (1f - fVar10));
			}
		}
	}
	fVar0 = (1f + fVar0);
	return fVar0;
}


int func_70(int iParam0, int iParam1)//Position - 0x32F6
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = -1;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < 10)
	{
		if (GlobalFunc_2035(iParam0, iVar2) == 0 && !bVar1)
		{
			iVar0 = iVar2;
		}
		if (GlobalFunc_2034(iParam0, iVar2) == iParam1 && GlobalFunc_2035(iParam0, iVar2) > 0)
		{
			bVar1 = true;
			iVar0 = iVar2;
		}
		iVar2++;
	}
	return iVar0;
}


void func_72()//Position - 0x33BE
{
	int iVar0;
	
	iVar0 = GlobalFunc_8329();
	switch (iVar0)
	{
		case 0:
			func_62(0, 48, 100000);
			break;
		
		case 1:
			func_62(1, 48, 100000);
			break;
		
		case 2:
			func_62(2, 48, 100000);
			break;
	}
}

void func_73()//Position - 0x340F
{
	int iVar0;
	
	iVar0 = GlobalFunc_8329();
	switch (iVar0)
	{
		case 0:
			if (!GlobalFunc_10916(GlobalFunc_4917(0), 12, 37))
			{
				GlobalFunc_10922(GlobalFunc_4917(0), 12, 37, 1);
				GlobalFunc_11042(GlobalFunc_4917(0), 12, 37, 1, 1);
			}
			else
			{
				GlobalFunc_10922(GlobalFunc_4917(0), 12, 36, 1);
				GlobalFunc_11042(GlobalFunc_4917(0), 12, 36, 1, 1);
			}
			break;
		
		case 1:
			if (!GlobalFunc_10916(GlobalFunc_4917(1), 12, 33))
			{
				GlobalFunc_10922(GlobalFunc_4917(1), 12, 33, 1);
				GlobalFunc_11042(GlobalFunc_4917(1), 12, 33, 1, 1);
			}
			else
			{
				GlobalFunc_10922(GlobalFunc_4917(1), 12, 25, 1);
				GlobalFunc_11042(GlobalFunc_4917(1), 12, 25, 1, 1);
			}
			break;
		
		case 2:
			if (!GlobalFunc_10916(GlobalFunc_4917(2), 12, 40))
			{
				GlobalFunc_10922(GlobalFunc_4917(2), 12, 40, 1);
				GlobalFunc_11042(GlobalFunc_4917(2), 12, 40, 1, 1);
			}
			else
			{
				GlobalFunc_10922(GlobalFunc_4917(2), 12, 37, 1);
				GlobalFunc_11042(GlobalFunc_4917(2), 12, 37, 1, 1);
			}
			break;
	}
}




















































































void func_157()//Position - 0x1B813
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&iVar0, 19);
	MISC::SET_BIT(&iVar0, 20);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 10);
	MISC::SET_BIT(&iVar0, 7);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 12);
	MISC::SET_BIT(&iVar0, 13);
	MISC::SET_BIT(&iVar0, 14);
	MISC::SET_BIT(&iVar0, 15);
	func_159(33, iVar0, 0);
	func_158(2);
}

void func_158(int iParam0)//Position - 0x1B881
{
	Global_51922 = iParam0;
}

void func_159(int iParam0, int iParam1, bool bParam2)//Position - 0x1B88E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_452[iVar1] > 0)
		{
			if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_443[iVar1] == iParam0)
			{
				iVar0 = iVar1;
			}
		}
		else
		{
			iVar2 = iVar1;
		}
		iVar1++;
	}
	if (iVar0 != -1 || iVar2 == -1)
	{
		return;
	}
	iVar3 = 0;
	if (MISC::IS_BIT_SET(iParam1, 3))
	{
		iVar3++;
	}
	if (MISC::IS_BIT_SET(iParam1, 4))
	{
		iVar3 += 2;
	}
	if (MISC::IS_BIT_SET(iParam1, 5))
	{
		iVar3 += 4;
	}
	if (MISC::IS_BIT_SET(iParam1, 20))
	{
		iVar3 += 8;
	}
	if (iVar3 == 0 && !MISC::IS_BIT_SET(iParam1, 1))
	{
		return;
	}
	iVar3 *= 3;
	if (MISC::IS_BIT_SET(iParam1, 2))
	{
		iVar3 *= 7;
	}
	Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_442++;
	Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_461[iVar2] = iParam1;
	Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_443[iVar2] = iParam0;
	Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_452[iVar2] = iVar3;
	if (!bParam2)
	{
		if (!GlobalFunc_63(54))
		{
			GlobalFunc_6677("AM_H_STOCKS", 1, 0, 40000, 10000, 7, 0, 139, 0);
		}
	}
	func_160(iParam0, 0);
}

void func_160(int iParam0, bool bParam1)//Position - 0x1B9DA
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (Global_47050[iParam0 /*36*/].f_8)
	{
		return;
	}
	fVar0 = Global_47050[iParam0 /*36*/].f_9;
	if (!bParam1)
	{
		fVar0 = func_65(iParam0);
	}
	if (fVar0 == 0f)
	{
		return;
	}
	Global_47050[iParam0 /*36*/].f_14[Global_47050[iParam0 /*36*/].f_13] = fVar0;
	if (fVar0 > Global_47050[iParam0 /*36*/].f_31)
	{
		Global_47050[iParam0 /*36*/].f_31 = fVar0;
	}
	if (fVar0 < Global_47050[iParam0 /*36*/].f_32)
	{
		Global_47050[iParam0 /*36*/].f_32 = fVar0;
	}
	Global_47050[iParam0 /*36*/].f_13++;
	if (Global_47050[iParam0 /*36*/].f_13 >= 16)
	{
		Global_47050[iParam0 /*36*/].f_13 = 0;
	}
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < 16)
	{
		fVar1 = (fVar1 + Global_47050[iParam0 /*36*/].f_14[iVar2]);
		iVar2++;
	}
	fVar1 = (fVar1 / SYSTEM::TO_FLOAT(16));
	Global_47050[iParam0 /*36*/].f_33 = (fVar0 - fVar1);
	Global_47050[iParam0 /*36*/].f_34 = ((Global_47050[iParam0 /*36*/].f_33 / fVar1) * 100f);
}


void func_162()//Position - 0x1BB29
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 9);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 13);
	func_159(49, iVar0, 0);
	func_158(2);
}

void func_163()//Position - 0x1BB7E
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 20);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 12);
	MISC::SET_BIT(&iVar0, 13);
	MISC::SET_BIT(&iVar0, 14);
	MISC::SET_BIT(&iVar0, 15);
	func_159(36, iVar0, 0);
	func_158(2);
}

void func_164()//Position - 0x1BBCF
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 17);
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 13);
	MISC::SET_BIT(&iVar0, 14);
	MISC::SET_BIT(&iVar0, 12);
	func_159(12, iVar0, 0);
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&iVar0, 17);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 7);
	MISC::SET_BIT(&iVar0, 9);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 13);
	MISC::SET_BIT(&iVar0, 12);
	func_159(15, iVar0, 0);
	func_158(2);
}

void func_165()//Position - 0x1BC7C
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 17);
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 10);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 15);
	MISC::SET_BIT(&iVar0, 12);
	func_159(65, iVar0, 0);
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 10);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 13);
	func_159(40, iVar0, 0);
	func_158(2);
}

void func_166()//Position - 0x1BD29
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 20);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 10);
	MISC::SET_BIT(&iVar0, 7);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 12);
	MISC::SET_BIT(&iVar0, 13);
	func_159(79, iVar0, 0);
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 6);
	MISC::SET_BIT(&iVar0, 10);
	MISC::SET_BIT(&iVar0, 7);
	MISC::SET_BIT(&iVar0, 11);
	MISC::SET_BIT(&iVar0, 12);
	MISC::SET_BIT(&iVar0, 13);
	func_159(43, iVar0, 0);
	func_158(2);
}

void func_167()//Position - 0x1BDDE
{
	int iVar0;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 16);
	MISC::SET_BIT(&iVar0, 17);
	func_159(61, iVar0, 1);
	Global_47050[61 /*36*/].f_9 = (Global_47050[61 /*36*/].f_9 * 0.544f);
	func_158(1);
}

void func_168()//Position - 0x1BE26
{
	func_169(3);
	func_169(22);
	func_169(25);
	func_169(26);
	func_169(27);
	func_169(28);
	func_169(29);
	func_169(30);
	func_169(31);
	func_169(32);
	func_169(33);
	func_169(34);
	func_169(35);
	func_169(36);
	func_169(37);
	func_169(38);
	func_169(39);
	func_169(40);
	func_169(41);
	func_169(42);
	func_169(43);
	func_169(52);
	func_169(53);
	func_169(54);
	func_169(55);
	func_169(56);
}

void func_169(int iParam0)//Position - 0x1BEC9
{
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 0);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 1);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 2);
}

void func_170()//Position - 0x1BF01
{
	func_169(0);
	func_169(1);
	func_169(2);
	func_169(9);
	func_169(10);
	func_169(11);
	func_169(12);
	func_169(13);
	func_169(14);
	func_169(15);
	func_169(16);
	func_169(21);
}

void func_171()//Position - 0x1BF4E
{
	PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	switch (Global_SAVE_DATA.eStreetRaceToUnlock)
	{
		case 2:
			MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked), 2);
			if (SYSTEM::VDIST2(GlobalFunc_80(PLAYER::PLAYER_ID()), GlobalFunc_2247(87, 0)) < 43681f)
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), 2);
			}
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked), 3);
			if (SYSTEM::VDIST2(GlobalFunc_80(PLAYER::PLAYER_ID()), GlobalFunc_2247(88, 0)) < 43681f)
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), 3);
			}
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked), 4);
			if (SYSTEM::VDIST2(GlobalFunc_80(PLAYER::PLAYER_ID()), GlobalFunc_2247(89, 0)) < 43681f)
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), 4);
			}
			break;
	}
	GlobalFunc_4907();
}




void func_175()//Position - 0x1C0D1
{
	GlobalFunc_585(104, 1);
	GlobalFunc_9660(103, 1, 1);
}




void func_179()//Position - 0x1C3B2
{
	GlobalFunc_7168(1794975438, 1, 2, 103, 360000, 10000, -1, 188, -1, 0, 1);
}


void func_181()//Position - 0x1C4F0
{
	GlobalFunc_585(103, 1);
	GlobalFunc_9660(103, 1, 1);
}

void func_182()//Position - 0x1C507
{
	GlobalFunc_7168(969002696, 1, 2, 103, 360000, 10000, 66, 186, -1, 0, 1);
}

void func_183()//Position - 0x1C52A
{
	GlobalFunc_585(102, 1);
}

void func_184()//Position - 0x1C539
{
	GlobalFunc_7168(-1444331296, 1, 2, 50, 120000, 10000, -1, 184, -1, 0, 1);
}

void func_185()//Position - 0x1C55C
{
	GlobalFunc_585(83, 1);
	GlobalFunc_9660(99, 1, 1);
}

void func_186()//Position - 0x1C573
{
	if (GlobalFunc_84())
	{
		GlobalFunc_7022(-1871231456, 6, 2, 99, 30000, 10000, -1, 182, -1, 0);
	}
}


void func_188()//Position - 0x1C61E
{
	GlobalFunc_585(107, 1);
	GlobalFunc_7610(286, 0, 0);
}





void func_193()//Position - 0x1CE47
{
	GlobalFunc_585(100, 1);
}

void func_194()//Position - 0x1CE56
{
	GlobalFunc_7022(-1674789340, 1, 4, 64, 60000, 10000, -1, 178, -1, 0);
}

void func_195()//Position - 0x1CE78
{
	GlobalFunc_585(105, 1);
}

void func_196()//Position - 0x1CE87
{
	GlobalFunc_585(99, 1);
}

void func_197()//Position - 0x1CE96
{
	GlobalFunc_7168(-1134717682, 1, 4, 54, 1920000, 10000, -1, 175, -1, 0, 1);
}

void func_198()//Position - 0x1CEB9
{
	GlobalFunc_585(97, 1);
}

void func_199()//Position - 0x1CEC8
{
	GlobalFunc_7168(-1159983966, 1, 2, 52, 200000, 10000, -1, 172, -1, 0, 1);
	func_201();
}

void func_200()//Position - 0x1CEEF
{
	GlobalFunc_585(96, 1);
}

void func_201()//Position - 0x1CEFE
{
	GlobalFunc_11042(GlobalFunc_4917(1), 12, 10, 1, 1);
}

void func_202()//Position - 0x1CF15
{
	GlobalFunc_585(92, 1);
	GlobalFunc_585(93, 1);
	GlobalFunc_4927(37, 1);
}

void func_203()//Position - 0x1CF32
{
	GlobalFunc_8950(8);
	GlobalFunc_7610(287, 0, 0);
	GlobalFunc_585(106, 1);
}










void func_213()//Position - 0x21223
{
	GlobalFunc_585(85, 1);
}

void func_214()//Position - 0x21232
{
	if (GlobalFunc_794(5) && GlobalFunc_794(6))
	{
		GlobalFunc_7168(1800466587, 1, 2, 49, 1920000, 10000, -1, 167, -1, 0, 1);
	}
}


void func_216()//Position - 0x21295
{
	GlobalFunc_585(84, 1);
}

void func_217()//Position - 0x212A4
{
	GlobalFunc_7168(483349085, 1, 2, 49, 120000, 10000, -1, 165, -1, 0, 1);
}

void func_218()//Position - 0x212C7
{
	GlobalFunc_585(110, 1);
}

void func_219()//Position - 0x212D6
{
	if (func_221())
	{
		GlobalFunc_10829(1, 95, 500000, 0, 0);
	}
}


int func_221()//Position - 0x213D9
{
	if (DLC::IS_DLC_PRESENT(-65181770))
	{
		return 1;
	}
	return 0;
}

void func_222()//Position - 0x213F2
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (GlobalFunc_891(43))
	{
		Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[81] = 1;
		uVar0 = Global_68514.f_12526[22 /*2*/];
		iVar1 = Global_68514.f_12526[22 /*2*/].f_1;
		iVar2 = uVar0;
		iVar3 = -1;
		bVar4 = false;
		while (iVar2 <= iVar1 && !bVar4)
		{
			if (Global_68514.f_6825[iVar2 /*3*/] == 531432813)
			{
				iVar3 = Global_68514.f_6825[iVar2 /*3*/].f_2;
				iVar5 = Global_68514.f_109[iVar3 /*4*/];
				if (iVar5 == 128)
				{
					Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[22 /*3*/].f_1 = iVar2;
					bVar4 = true;
				}
			}
			iVar2++;
		}
		iVar6 = GlobalFunc_2636(43);
		iVar7 = func_231(43);
		GlobalFunc_7999(iVar6);
		GlobalFunc_5841(Global_81119[iVar7 /*5*/]);
	}
}









int func_231(int iParam0)//Position - 0x218D6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_81119[iVar0 /*5*/] != -1)
		{
			if (Global_68514.f_109[Global_81119[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}



void func_234()//Position - 0x219AF
{
	ENTITY::REMOVE_MODEL_HIDE(-18.3539f, -1438.784f, 31.305f, 3f, joaat("v_ilev_frnkwarddr1"), 0);
	ENTITY::REMOVE_MODEL_HIDE(-18.3594f, -1438.133f, 31.305f, 3f, joaat("v_ilev_frnkwarddr2"), 0);
}

void func_235()//Position - 0x219EB
{
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset, 3))
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset), 3);
	}
	else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset, 4))
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset), 4);
	}
	else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset, 5))
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset), 5);
	}
}

void func_236()//Position - 0x21A5F
{
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset, 0))
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset), 0);
	}
	else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset, 1))
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset), 1);
	}
	else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset, 2))
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset), 2);
	}
}

void func_237()//Position - 0x21AD3
{
	int iVar0;
	
	iVar0 = GlobalFunc_8329();
	if (GlobalFunc_42(iVar0))
	{
		switch (iVar0)
		{
			case 0:
				GlobalFunc_10608(0, 1, 38, 60000, 0);
				GlobalFunc_9660(95, 0, 0);
				break;
			
			case 1:
				GlobalFunc_10608(1, 1, 38, 60000, 0);
				GlobalFunc_9660(95, 1, 0);
				break;
			
			case 2:
				GlobalFunc_10608(2, 1, 38, 60000, 0);
				GlobalFunc_9660(95, 2, 0);
				break;
			}
	}
	GlobalFunc_7682(-1199050901);
	GlobalFunc_7682(1082655975);
	GlobalFunc_7682(-2100435596);
}


void func_239()//Position - 0x21BB1
{
	int iVar0;
	
	iVar0 = func_240(1801771084);
	if (iVar0 != -1)
	{
		Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/].Queue_Time = (MISC::GET_GAME_TIMER() + 100000);
	}
	iVar0 = func_240(-1716308760);
	if (iVar0 != -1)
	{
		Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/].Queue_Time = (MISC::GET_GAME_TIMER() + 100000);
	}
	func_372();
}

int func_240(int iParam0)//Position - 0x21C0B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_241()//Position - 0x21C43
{
	GlobalFunc_7168(341684477, 1, 7, 45, 30000, 5000, -1, 0, -1, 0, 1);
}

void func_242()//Position - 0x21C64
{
	int iVar0;
	
	iVar0 = func_240(1635046052);
	if (iVar0 != -1)
	{
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Had_Response = 1;
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Response = 0;
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = 1635046052;
		GlobalFunc_585(79, 1);
	}
	GlobalFunc_7682(1635046052);
}

void func_243()//Position - 0x21CB3
{
	if (GlobalFunc_230(59))
	{
		GlobalFunc_7168(1328556918, 0, 2, 0, 6000, 6000, -1, 142, -1, 262148, 1);
	}
}


void func_245()//Position - 0x21D0C
{
	if (GlobalFunc_230(9))
	{
		GlobalFunc_6831(-1074970768, 0, 1, 31, 3, 6000, 6000, -1, -1, 142, -1, 1060);
	}
}


void func_247()//Position - 0x21EBA
{
	GlobalFunc_585(51, 1);
}

void func_248(bool bParam0)//Position - 0x21EC9
{
	TASK::SET_SCENARIO_GROUP_ENABLED("LOST_BIKERS", bParam0);
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 2);
	}
}

void func_249(bool bParam0)//Position - 0x21EFF
{
	GlobalFunc_2198(108, bParam0, 0);
}

void func_250(bool bParam0)//Position - 0x21F10
{
	GlobalFunc_2198(96, bParam0, 0);
}


void func_252()//Position - 0x21F63
{
	GlobalFunc_11042(GlobalFunc_4917(0), 12, 3, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(0), 12, 12, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(0), 12, 4, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(0), 12, 11, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(0), 12, 14, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(0), 12, 15, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(0), 12, 17, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(0), 12, 23, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(0), 12, 24, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(1), 12, 5, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(1), 12, 1, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(1), 12, 4, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(1), 12, 8, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(1), 12, 10, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(1), 8, 9, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(2), 12, 3, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(2), 12, 2, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(2), 12, 7, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(2), 12, 11, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(2), 12, 13, 1, 1);
	GlobalFunc_11042(GlobalFunc_4917(2), 12, 8, 1, 1);
}

void func_253()//Position - 0x220A6
{
	GlobalFunc_6831(466185907, 1, 2, 14, 3, 200000, 180000, -1, -1, 0, -1, 0);
	GlobalFunc_6831(185453884, 1, 4, 14, 3, 350000, 180000, -1, -1, 0, -1, 0);
}

void func_254()//Position - 0x220E6
{
	Global_35465[12] = (MISC::GET_GAME_TIMER() + 120000);
}

void func_255()//Position - 0x220FE
{
	Global_35465[15] = (MISC::GET_GAME_TIMER() + 120000);
}

void func_256()//Position - 0x22116
{
	Global_35465[14] = (MISC::GET_GAME_TIMER() + 120000);
}

void func_257()//Position - 0x2212E
{
	Global_35465[17] = (MISC::GET_GAME_TIMER() + 120000);
}

void func_258()//Position - 0x22146
{
	if (!GlobalFunc_485(42))
	{
		if (GlobalFunc_230(44))
		{
			GlobalFunc_585(42, 1);
		}
		else if (GlobalFunc_230(40))
		{
			GlobalFunc_585(42, 1);
		}
	}
}


void func_260()//Position - 0x221A8
{
	GlobalFunc_585(75, 1);
}

void func_261()//Position - 0x221B7
{
	if (GlobalFunc_8329() == 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_5669(4, PLAYER::PLAYER_PED_ID());
		}
	}
}



void func_264()//Position - 0x222C7
{
	int iVar0;
	int iVar1;
	
	if (!GlobalFunc_230(74) || !GlobalFunc_230(75))
	{
		if (GlobalFunc_230(60))
		{
			iVar0 = func_240(-749738207);
			if (iVar0 != -1)
			{
				iVar1 = MISC::GET_GAME_TIMER() + 20000;
				if (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/].Queue_Time > iVar1)
				{
					Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/].Queue_Time = iVar1;
				}
			}
			iVar0 = func_265(1269300253);
			if (iVar0 != -1)
			{
				iVar1 = MISC::GET_GAME_TIMER() + 20000;
				if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar0 /*14*/].Queue_Time > iVar1)
				{
					Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar0 /*14*/].Queue_Time = iVar1;
				}
			}
		}
	}
}

int func_265(int iParam0)//Position - 0x2236B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar0 /*14*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_266()//Position - 0x223A7
{
	int iVar0;
	int iVar1;
	
	if (!GlobalFunc_230(83))
	{
		if (GlobalFunc_230(79))
		{
			iVar0 = func_265(2073240496);
			if (iVar0 != -1)
			{
				iVar1 = MISC::GET_GAME_TIMER() + 25000;
				if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar0 /*14*/].Queue_Time > iVar1)
				{
					Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar0 /*14*/].Queue_Time = iVar1;
				}
			}
		}
	}
}

void func_267()//Position - 0x22403
{
	int iVar0;
	int iVar1;
	
	if (!GlobalFunc_230(51))
	{
		if (GlobalFunc_230(22))
		{
			if (GlobalFunc_230(60))
			{
				iVar0 = func_240(-464957327);
				if (iVar0 != -1)
				{
					iVar1 = MISC::GET_GAME_TIMER() + 25000;
					if (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/].Queue_Time > iVar1)
					{
						Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar0 /*15*/].Queue_Time = iVar1;
					}
				}
			}
		}
	}
}

void func_268()//Position - 0x22462
{
	GlobalFunc_585(15, 1);
}

void func_269()//Position - 0x22471
{
	int iVar0;
	
	MISC::CLEAR_AREA(689.6588f, -962.4214f, 22.4975f, 25f, 1, 0, 0, 0);
	if (!GlobalFunc_230(88))
	{
		if (!GlobalFunc_891(88))
		{
			iVar0 = func_265(-270587643);
			if (iVar0 != -1)
			{
				GlobalFunc_7682(-270587643);
				GlobalFunc_585(15, 1);
			}
		}
	}
}

void func_270()//Position - 0x224CB
{
	if (!GlobalFunc_63(22))
	{
		GlobalFunc_9221(22, 1, 0);
		GlobalFunc_9221(23, 1, 0);
		GlobalFunc_9221(24, 1, 0);
		GlobalFunc_9221(25, 1, 0);
		GlobalFunc_9221(26, 1, 0);
		GlobalFunc_9221(27, 1, 0);
		GlobalFunc_5843(43);
		GlobalFunc_5774(43);
		GlobalFunc_6677("AM_H_TATTOO", 1, 3000, -1, 10000, 7, 0, 0, 0);
		GlobalFunc_6677("AM_H_SHOUT", 0, 20000, -1, 10000, 7, 0, 0, 0);
		GlobalFunc_651(22);
	}
}
















void func_286()//Position - 0x22F05
{
	func_288(1);
	GlobalFunc_2448(0);
	GlobalFunc_585(60, 1);
}


void func_288(int iParam0)//Position - 0x22F82
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_290(1);
		PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		if (iParam0 == 1)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			iVar5 = 0;
			Var0.f_2 = (Var0.f_2 + 1.5f);
			iVar3 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(Var0, 1, &fVar4);
			if (iVar3 == 1)
			{
				iVar5 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				iVar5 = 1;
			}
			if (iVar5 == 1)
			{
				Var0.f_2 = (fVar4 + 10f);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
			}
			else if (iVar3 == 2)
			{
			}
		}
		func_289(1);
	}
}

void func_289(int iParam0)//Position - 0x23022
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			MISC::SET_BIT(&(Global_89962.f_20), 15);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
			}
			else
			{
				if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				}
			}
		}
		else if (MISC::IS_BIT_SET(Global_89962.f_20, 15))
		{
			bVar0 = false;
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar1)))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar1, 0);
						bVar0 = true;
					}
				}
			}
			if (!bVar0)
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			MISC::CLEAR_BIT(&(Global_89962.f_20), 15);
		}
	}
}

void func_290(int iParam0)//Position - 0x23109
{
	struct<3> Var0;
	
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_89962.f_20, 19))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
			}
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
			WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(PLAYER::PLAYER_PED_ID());
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			MISC::CLEAR_AREA(Var0, 100f, 1, 0, 0, 0);
			MISC::SET_BIT(&(Global_89962.f_20), 19);
		}
	}
	else if (MISC::IS_BIT_SET(Global_89962.f_20, 19))
	{
		GlobalFunc_2225();
		MISC::CLEAR_BIT(&(Global_89962.f_20), 19);
	}
}


void func_292()//Position - 0x23258
{
	GlobalFunc_7682(-128912482);
	GlobalFunc_7682(-131238069);
	GlobalFunc_7682(-330732224);
	if (GlobalFunc_485(28) && GlobalFunc_485(29))
	{
		GlobalFunc_585(36, 1);
	}
}

void func_293()//Position - 0x23299
{
	GlobalFunc_7682(2095586439);
	GlobalFunc_7682(1608868018);
	GlobalFunc_7682(1134611425);
	GlobalFunc_7682(187813079);
	GlobalFunc_7682(-39544602);
	GlobalFunc_7682(-997367701);
	GlobalFunc_5207("AM_H_GAUNT_R", 1);
	GlobalFunc_585(29, 1);
	if (GlobalFunc_485(28))
	{
		GlobalFunc_585(36, 1);
	}
}






void func_299()//Position - 0x23687
{
	GlobalFunc_7682(-1631047976);
	GlobalFunc_7682(962970051);
	GlobalFunc_7682(-1323797481);
	GlobalFunc_5207("AM_H_GAUNT_R", 1);
}

void func_300()//Position - 0x236B6
{
	GlobalFunc_7682(-1980743701);
	GlobalFunc_7682(1567521709);
	GlobalFunc_7682(-1687842043);
	GlobalFunc_5207("AM_H_GAUNT_R", 1);
}

void func_301()//Position - 0x236E5
{
	GlobalFunc_7682(-553769964);
	GlobalFunc_7682(-1434443191);
	GlobalFunc_7682(-2032593637);
	GlobalFunc_7682(-458789713);
	GlobalFunc_7682(321648831);
	GlobalFunc_7682(312697495);
	GlobalFunc_585(28, 1);
	if (GlobalFunc_485(29))
	{
		GlobalFunc_585(36, 1);
	}
}

void func_302()//Position - 0x23740
{
	if (GlobalFunc_230(79))
	{
		if (GlobalFunc_230(83))
		{
			func_303(-128912482, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1028);
			func_303(-131238069, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1028);
			func_303(-330732224, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1028);
		}
		else
		{
			func_303(-128912482, -1106471007, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1024);
			func_303(-131238069, -1106471007, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1024);
			func_303(-330732224, -1106471007, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1024);
		}
	}
	else if (GlobalFunc_230(83))
	{
		func_303(-128912482, 94848458, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1024);
		func_303(-131238069, 94848458, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1024);
		func_303(-330732224, 94848458, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1024);
	}
	else
	{
		func_303(-128912482, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1024);
		func_303(-131238069, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1024);
		func_303(-330732224, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1024);
	}
}

int func_303(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x23904
{
	struct<15> Var0;
	int iVar15;
	
	if (GlobalFunc_2(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == iParam5)
	{
		return 0;
	}
	if (((iParam5 != 144 && iParam5 != 0) && iParam5 != 1) && iParam5 != 2)
	{
		return 0;
	}
	if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls < 9)
	{
		Var0 = iParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call == Var0)
		{
			Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
		}
		Var0.f_3 = GlobalFunc_779(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam8);
		Var0.f_1 = iParam12;
		iVar15 = 0;
		MISC::SET_BIT(&iVar15, iParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::SET_BIT(&(Var0.f_1), 13);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls /*15*/] = { Var0 };
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls++;
		GlobalFunc_5093(iParam5);
		return 1;
	}
	return 0;
}

void func_304()//Position - 0x23A61
{
	if (GlobalFunc_230(79))
	{
		if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[34])
		{
			func_303(187813079, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1028);
			func_303(-39544602, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1028);
			func_303(-997367701, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1028);
		}
		else
		{
			func_303(187813079, -1394105734, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
			func_303(-39544602, -1394105734, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
			func_303(-997367701, -1394105734, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
		}
	}
	else if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[34])
	{
		func_303(187813079, 94848458, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
		func_303(-39544602, 94848458, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
		func_303(-997367701, 94848458, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
	}
	else
	{
		func_303(187813079, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
		func_303(-39544602, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
		func_303(-997367701, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
	}
}

void func_305()//Position - 0x23C37
{
	int iVar0;
	
	iVar0 = 0;
	if (GlobalFunc_230(80))
	{
		iVar0++;
	}
	if (GlobalFunc_230(81))
	{
		iVar0++;
	}
	if (GlobalFunc_230(82))
	{
		iVar0++;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_6822(-1980743701, 0, 0, 12, 3, 6000, 6000, -1, 110, 0, 1024);
		GlobalFunc_6822(1567521709, 0, 1, 12, 3, 6000, 6000, -1, 110, 0, 1024);
		GlobalFunc_6822(-1687842043, 0, 2, 12, 3, 6000, 6000, -1, 110, 0, 1024);
	}
	else if (iVar0 == 2)
	{
		GlobalFunc_6822(-1631047976, 0, 0, 12, 3, 6000, 6000, -1, 111, 0, 1024);
		GlobalFunc_6822(962970051, 0, 1, 12, 3, 6000, 6000, -1, 111, 0, 1024);
		GlobalFunc_6822(-1323797481, 0, 2, 12, 3, 6000, 6000, -1, 111, 0, 1024);
	}
	else if (iVar0 == 3)
	{
		if (GlobalFunc_230(78))
		{
			func_303(2095586439, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1028);
			func_303(1608868018, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1028);
			func_303(1134611425, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1028);
		}
		else
		{
			func_303(2095586439, 1679209251, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
			func_303(1608868018, 1679209251, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
			func_303(1134611425, 1679209251, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
		}
		GlobalFunc_7682(1694883968);
	}
}


void func_307()//Position - 0x23F62
{
	if (GlobalFunc_230(83))
	{
		if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[34])
		{
			func_303(-458789713, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1028);
			func_303(321648831, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1028);
			func_303(312697495, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1028);
		}
		else
		{
			func_303(-458789713, -1394105734, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
			func_303(321648831, -1394105734, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
			func_303(312697495, -1394105734, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
		}
	}
	else if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[34])
	{
		func_303(-458789713, -1106471007, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
		func_303(321648831, -1106471007, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
		func_303(312697495, -1106471007, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
	}
	else
	{
		func_303(-458789713, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
		func_303(321648831, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
		func_303(312697495, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
	}
}

void func_308()//Position - 0x24139
{
	if ((GlobalFunc_230(80) && GlobalFunc_230(81)) && GlobalFunc_230(82))
	{
		func_303(-553769964, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1028);
		func_303(-1434443191, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1028);
		func_303(-2032593637, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1028);
	}
	else
	{
		func_303(-553769964, -268883259, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
		func_303(-1434443191, -268883259, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
		func_303(-2032593637, -268883259, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
	}
}

void func_309()//Position - 0x2422F
{
	GlobalFunc_585(30, 1);
	Global_87284 = 1;
}

void func_310()//Position - 0x24243
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_5133(4, 4);
	if ((iVar0 != 0 && iVar0 != 15) && GlobalFunc_595(iVar0) == 2)
	{
		iVar1 = 60000;
		switch (GlobalFunc_697(iVar0))
		{
			case 2:
				GlobalFunc_7022(692693384, 1, 7, 12, iVar1, 10000, -1, 103, -1, 4);
				break;
			
			case 1:
				GlobalFunc_7022(1209844154, 1, 7, 12, iVar1, 10000, -1, 103, -1, 4);
				break;
			
			case 0:
				GlobalFunc_7022(-1144971313, 1, 7, 12, iVar1, 10000, -1, 103, -1, 4);
				break;
		}
	}
	else if (!GlobalFunc_2(0))
	{
	}
}






void func_316()//Position - 0x243D8
{
	switch (GlobalFunc_597(7))
	{
		case 1:
			break;
		
		case 2:
			GlobalFunc_11042(GlobalFunc_4917(0), 12, 31, 1, 1);
			GlobalFunc_11042(GlobalFunc_4917(1), 12, 22, 1, 1);
			break;
	}
}

void func_317()//Position - 0x2441A
{
	if (HUD::DOES_BLIP_EXIST(Global_67138.f_208[14]))
	{
		HUD::SET_BLIP_FLASHES(Global_67138.f_208[14], 1);
		HUD::SET_BLIP_FLASH_TIMER(Global_67138.f_208[14], 10000);
	}
	GlobalFunc_6677("AM_H_LHNGR", 2, 1000, -1, 10000, 7, 0, 0, 0);
}


void func_319()//Position - 0x244A2
{
	func_320(2, 1);
}

void func_320(int iParam0, bool bParam1)//Position - 0x244B0
{
	int iVar0;
	char* sVar1;
	
	MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), iParam0);
	switch (iParam0)
	{
		case 10:
			MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dialogue_Bitset), 14);
			break;
		
		case 13:
			MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dialogue_Bitset), 16);
			break;
		
		case 12:
			MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dialogue_Bitset), 15);
			break;
		
		case 11:
			MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dialogue_Bitset), 17);
			break;
	}
	if (!bParam1)
	{
		iVar0 = 0;
		switch (GlobalFunc_595(iParam0))
		{
			case 1:
				iVar0 = 6;
				break;
			
			case 3:
				iVar0 = 4;
				break;
			
			case 2:
				iVar0 = 5;
				break;
		}
		sVar1 = GlobalFunc_5165(iParam0);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("FEED_CREW_U");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(GlobalFunc_5165(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(sVar1, sVar1, 0, iVar0, "", 0);
		if (!GlobalFunc_63(45))
		{
			GlobalFunc_6677("AM_H_CREWU", 2, 0, 20000, 10000, GlobalFunc_8546(), 0, 131, 0);
		}
	}
}




void func_324()//Position - 0x246E4
{
	func_320(3, 1);
}

void func_325()//Position - 0x246F2
{
	func_320(5, 1);
}

void func_326()//Position - 0x24700
{
	GlobalFunc_4927(57, 1);
	GlobalFunc_76(57);
	GlobalFunc_585(109, 1);
}


void func_328()//Position - 0x24741
{
	GlobalFunc_5843(157);
	GlobalFunc_5843(158);
	GlobalFunc_2198(157, 1, 0);
	GlobalFunc_2198(158, 1, 0);
	GlobalFunc_2637(157, 5);
	GlobalFunc_2637(158, 5);
	GlobalFunc_5773(157);
	GlobalFunc_5773(158);
}



void func_331()//Position - 0x2483A
{
	GlobalFunc_5843(155);
	GlobalFunc_5843(156);
	GlobalFunc_2198(155, 1, 0);
	GlobalFunc_2198(156, 1, 0);
	GlobalFunc_2637(155, 5);
	GlobalFunc_2637(156, 5);
}

void func_332()//Position - 0x2486C
{
	GlobalFunc_5843(160);
	GlobalFunc_5843(159);
	GlobalFunc_2198(160, 1, 0);
	GlobalFunc_2198(159, 1, 0);
}

void func_333()//Position - 0x24890
{
	int iVar0;
	var uVar1;
	
	if (!GlobalFunc_2(0))
	{
		STATS::STAT_GET_FLOAT(joaat("sp0_dist_running"), &uVar1, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1583[0] = uVar1;
		STATS::STAT_GET_INT(joaat("sp0_unarmed_hits"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1587[0] = iVar0;
		STATS::STAT_GET_INT(joaat("sp0_number_near_miss"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1591[0] = iVar0;
		STATS::STAT_GET_FLOAT(joaat("sp0_dist_walk_st"), &uVar1, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1595[0] = uVar1;
		STATS::STAT_GET_INT(joaat("sp0_kills_stealth"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1599[0] = iVar0;
		STATS::STAT_GET_INT(joaat("sp0_hits_mission"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1603[0] = iVar0;
		STATS::STAT_GET_INT(joaat("sp0_hits_peds_vehicles"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1607[0] = (iVar0 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1603[0]);
		STATS::STAT_GET_FLOAT(joaat("sp1_dist_running"), &uVar1, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1583[1] = uVar1;
		STATS::STAT_GET_INT(joaat("sp1_unarmed_hits"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1587[1] = iVar0;
		STATS::STAT_GET_INT(joaat("sp1_number_near_miss"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1591[1] = iVar0;
		STATS::STAT_GET_FLOAT(joaat("sp1_dist_walk_st"), &uVar1, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1595[1] = uVar1;
		STATS::STAT_GET_INT(joaat("sp1_kills_stealth"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1599[1] = iVar0;
		STATS::STAT_GET_INT(joaat("sp1_hits_mission"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1603[1] = iVar0;
		STATS::STAT_GET_INT(joaat("sp0_hits_peds_vehicles"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1607[1] = (iVar0 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1603[1]);
		STATS::STAT_GET_FLOAT(joaat("sp2_dist_running"), &uVar1, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1583[2] = uVar1;
		STATS::STAT_GET_INT(joaat("sp2_unarmed_hits"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1587[2] = iVar0;
		STATS::STAT_GET_INT(joaat("sp2_number_near_miss"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1591[2] = iVar0;
		STATS::STAT_GET_FLOAT(joaat("sp2_dist_walk_st"), &uVar1, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1595[2] = uVar1;
		STATS::STAT_GET_INT(joaat("sp2_kills_stealth"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1599[2] = iVar0;
		STATS::STAT_GET_INT(joaat("sp2_hits_mission"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1603[2] = iVar0;
		STATS::STAT_GET_INT(joaat("sp2_hits_peds_vehicles"), &iVar0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1607[2] = (iVar0 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1603[2]);
	}
}

void func_334(bool bParam0)//Position - 0x24B5F
{
	GlobalFunc_185();
	if (!Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_232 && GlobalFunc_526(53))
	{
		Global_51925[0] = 4000;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[0 /*69*/] = 0;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[0 /*69*/].f_1 = 0;
		Global_51925[1] = 4000;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[1 /*69*/] = 0;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[1 /*69*/].f_1 = 0;
		Global_51925[2] = 4000;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[2 /*69*/] = 0;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[2 /*69*/].f_1 = 0;
		GlobalFunc_175(2);
		GlobalFunc_175(0);
		GlobalFunc_175(1);
		GlobalFunc_10608(2, 1, 36, 22300, 0);
		GlobalFunc_10608(2, 0, 13, 678, 0);
		GlobalFunc_10608(2, 1, 36, 45200, 0);
		GlobalFunc_10608(2, 0, 6, 200, 0);
		GlobalFunc_10608(2, 0, 4, 12, 0);
		GlobalFunc_10608(2, 0, 4, 14, 0);
		GlobalFunc_10608(2, 0, 8, 280, 0);
		GlobalFunc_10608(2, 1, 36, 30200, 0);
		GlobalFunc_10608(2, 0, 13, 185, 0);
		GlobalFunc_10608(1, 0, 5, 45, 0);
		GlobalFunc_10608(1, 0, 10, 400, 0);
		GlobalFunc_10608(1, 0, 11, 19, 0);
		GlobalFunc_10608(1, 0, 7, 149, 0);
		GlobalFunc_10608(1, 0, 4, 19, 0);
		GlobalFunc_10608(0, 0, 4, 19, 0);
		GlobalFunc_10608(0, 0, 7, 2313, 0);
		GlobalFunc_10608(0, 0, 5, 20, 0);
		GlobalFunc_10608(0, 0, 9, 5633, 0);
		GlobalFunc_10608(0, 0, 12, 700, 0);
		STATS::STAT_SET_INT(joaat("sp0_money_total_spent"), 0, 1);
		STATS::STAT_SET_INT(joaat("sp1_money_total_spent"), 0, 1);
		STATS::STAT_SET_INT(joaat("sp2_money_total_spent"), 0, 1);
		Global_51925[2] = 10666;
		Global_51925[0] = 3085;
		Global_51925[1] = 1178;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_232 = 1;
	}
	if (bParam0)
	{
		Global_51925[2] = 108654;
		Global_51925[0] = 7860;
		Global_51925[1] = 78;
	}
	GlobalFunc_175(2);
	GlobalFunc_175(0);
	GlobalFunc_175(1);
}

void func_335()//Position - 0x24D5C
{
	GlobalFunc_7682(-2116452823);
	GlobalFunc_7682(1880611494);
	GlobalFunc_585(41, 1);
}

void func_336()//Position - 0x24D7F
{
	GlobalFunc_9221(7, 1, 0);
	GlobalFunc_9221(8, 1, 0);
	GlobalFunc_9221(9, 1, 0);
	GlobalFunc_9221(10, 1, 0);
	GlobalFunc_9221(11, 1, 0);
	GlobalFunc_9221(12, 1, 0);
	GlobalFunc_9221(13, 1, 0);
	GlobalFunc_9221(14, 1, 0);
	GlobalFunc_9221(15, 1, 0);
	GlobalFunc_9221(16, 1, 0);
	GlobalFunc_9221(17, 1, 0);
	GlobalFunc_9221(18, 1, 0);
	GlobalFunc_9221(19, 1, 0);
	GlobalFunc_9221(20, 1, 0);
	GlobalFunc_5774(26);
}

void func_337()//Position - 0x24DFC
{
	GlobalFunc_10829(2, 36, 62680, 0, 0);
}

void func_338()//Position - 0x24E11
{
	func_339(1, 1);
	GlobalFunc_585(11, 1);
}

int func_339(int iParam0, bool bParam1)//Position - 0x24E27
{
	if (!GlobalFunc_236() && GlobalFunc_42(iParam0))
	{
		if (!GlobalFunc_8575(iParam0) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Global_87845.f_45 = iParam0;
			Global_87845.f_46 = 0;
			Global_87845.f_44 = 1;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
				}
				MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 5f, 0);
			}
			return 1;
		}
	}
	return 0;
}



void func_342()//Position - 0x24ED2
{
	if (GlobalFunc_2033(0) >= 22000)
	{
		GlobalFunc_10834(0, 35, 22000);
	}
	else
	{
		GlobalFunc_10834(0, 35, GlobalFunc_2033(0));
	}
}


void func_344()//Position - 0x24F0F
{
	if (GlobalFunc_2033(0) >= 9500)
	{
		GlobalFunc_10834(0, 34, 9500);
	}
	else
	{
		GlobalFunc_10834(0, 34, GlobalFunc_2033(0));
	}
}

void func_345()//Position - 0x24F3D
{
	int iVar0;
	
	if (GlobalFunc_2033(0) >= 7500)
	{
		GlobalFunc_10834(0, 33, 5000);
	}
	else
	{
		iVar0 = SYSTEM::ROUND((IntToFloat(GlobalFunc_2033(0)) * 0.8f));
		if (iVar0 > 5000)
		{
			iVar0 = 5000;
		}
		GlobalFunc_10834(0, 33, iVar0);
	}
}

void func_346()//Position - 0x24F87
{
	int iVar0;
	
	if (GlobalFunc_2033(0) >= 5500)
	{
		GlobalFunc_10834(0, 34, 3000);
	}
	else
	{
		iVar0 = SYSTEM::ROUND((IntToFloat(GlobalFunc_2033(0)) * 0.8f));
		if (iVar0 > 3000)
		{
			iVar0 = 3000;
		}
		GlobalFunc_10834(0, 34, iVar0);
	}
}

void func_347()//Position - 0x24FD1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_2[0];
	if (iVar0 == 0)
	{
		iVar0 = 12000000;
	}
	iVar1 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_2[1];
	if (iVar1 == 0)
	{
		iVar1 = 12000000;
	}
	iVar2 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_2[2];
	if (iVar2 == 0)
	{
		iVar2 = 12000000;
	}
	if (func_360(7))
	{
		func_352(7, 0);
	}
	else if (!func_351(7))
	{
		func_348(7, 0);
	}
	if (func_360(8))
	{
		func_352(8, 0);
	}
	else if (!func_351(8))
	{
		func_348(8, 0);
	}
	if (GlobalFunc_485(136))
	{
		GlobalFunc_10608(0, 1, 32, SYSTEM::ROUND((IntToFloat(iVar0) + (IntToFloat(iVar2) / 2f))), 0);
		GlobalFunc_10608(1, 1, 32, SYSTEM::ROUND((IntToFloat(iVar1) + (IntToFloat(iVar2) / 2f))), 0);
	}
	else if (GlobalFunc_485(135))
	{
		GlobalFunc_10608(1, 1, 32, iVar1, 0);
		GlobalFunc_10608(2, 1, 32, iVar2, 0);
	}
	else
	{
		GlobalFunc_10608(0, 1, 32, iVar0, 0);
		GlobalFunc_10608(1, 1, 32, iVar1, 0);
		GlobalFunc_10608(2, 1, 32, iVar2, 0);
	}
}

void func_348(int iParam0, bool bParam1)//Position - 0x250F9
{
	func_349(iParam0, bParam1);
}

void func_349(int iParam0, bool bParam1)//Position - 0x25109
{
	Global_35961 = 1;
	if (!Global_39271[iParam0 /*46*/] && !Global_39271[iParam0 /*46*/].f_1)
	{
		Global_39271[iParam0 /*46*/] = 1;
		func_352(iParam0, bParam1);
	}
	else
	{
		GlobalFunc_2026(iParam0);
		func_349(iParam0, bParam1);
	}
}


bool func_351(int iParam0)//Position - 0x25192
{
	return Global_39271[iParam0 /*46*/].f_1;
}

void func_352(int iParam0, bool bParam1)//Position - 0x251A3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_39271[iParam0 /*46*/] && !Global_39271[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_39271[iParam0 /*46*/].f_31 == Global_39271[iParam0 /*46*/].f_30)
	{
		iVar0 = (Global_39271[iParam0 /*46*/].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_35970[Global_39271[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_39271[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_39271[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_39271[iParam0 /*46*/].f_8[Global_39271[iParam0 /*46*/].f_31];
	Global_39271[iParam0 /*46*/].f_31++;
	GlobalFunc_2638(iParam0, iVar1);
	Global_39271[iParam0 /*46*/].f_45 = Global_35970[iVar1 /*12*/].f_10;
	Global_39271[iParam0 /*46*/].f_43 = Global_35970[iVar1 /*12*/].f_11;
	iVar2 = Global_39271[iParam0 /*46*/].f_2;
	GlobalFunc_10235(Global_35970[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_39271[iParam0 /*46*/].f_3[iVar3] != Global_35970[iVar1 /*12*/].f_2 && Global_39271[iParam0 /*46*/].f_3[iVar3] != Global_35970[iVar1 /*12*/].f_3)
		{
			GlobalFunc_10235(Global_39271[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_39271[iParam0 /*46*/].f_31 == Global_39271[iParam0 /*46*/].f_30)
	{
		if (Global_35970[Global_39271[iParam0 /*46*/].f_32[(Global_39271[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4 == 0)
		{
			Global_39271[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}








bool func_360(int iParam0)//Position - 0x26167
{
	return Global_39271[iParam0 /*46*/];
}

void func_361()//Position - 0x26176
{
	GlobalFunc_7022(801347631, 1, 7, 12, 1000, 1000, -1, 80, -1, 0);
}

void func_362()//Position - 0x26197
{
	int iVar0;
	
	iVar0 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[3 /*23*/].f_2[1];
	if (iVar0 == 0)
	{
		iVar0 = 200000;
	}
	GlobalFunc_10608(1, 1, 94, iVar0, 0);
}

void func_363()//Position - 0x261C9
{
	if (func_360(7))
	{
		func_352(7, 0);
	}
	else if (!func_351(7))
	{
		func_348(7, 0);
	}
	GlobalFunc_66(78, 0);
}

void func_364()//Position - 0x261F8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[2 /*23*/].f_2[0];
	if (iVar0 == 0)
	{
		iVar0 = 325000;
	}
	iVar1 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[2 /*23*/].f_2[1];
	if (iVar1 == 0)
	{
		iVar1 = 325000;
	}
	iVar2 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[2 /*23*/].f_2[2];
	if (iVar2 == 0)
	{
		iVar2 = 325000;
	}
	GlobalFunc_10608(0, 1, 94, iVar0, 0);
	GlobalFunc_10608(1, 1, 94, iVar1, 0);
	GlobalFunc_10608(2, 1, 94, iVar2, 0);
}

void func_365()//Position - 0x2627E
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_2[0];
	if (iVar0 == 0)
	{
		iVar0 = 83100;
	}
	iVar1 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_2[1];
	if (iVar1 == 0)
	{
		iVar1 = 28000;
	}
	GlobalFunc_10608(0, 1, 32, iVar0, 0);
	GlobalFunc_10608(1, 1, 32, iVar1, 0);
	GlobalFunc_66(74, 60000);
	GlobalFunc_7682(1595158098);
	GlobalFunc_7682(-420969532);
	GlobalFunc_66(128, 0);
}

void func_366()//Position - 0x262FE
{
	if (func_360(7))
	{
		func_352(7, 0);
	}
	else if (!func_351(7))
	{
		func_348(7, 0);
	}
	if (func_360(6))
	{
		func_352(6, 0);
	}
	else if (!func_351(6))
	{
		func_348(6, 0);
	}
}

void func_367()//Position - 0x26346
{
	func_320(11, 0);
}

void func_368()//Position - 0x26355
{
	if (!GlobalFunc_2639(12))
	{
		GlobalFunc_9660(46, 0, 0);
		func_320(12, 0);
	}
}


void func_370()//Position - 0x2638C
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), 1);
	}
	GlobalFunc_585(68, 1);
}

void func_371()//Position - 0x263AF
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), 1);
	}
	GlobalFunc_585(67, 1);
}

void func_372()//Position - 0x263D2
{
	GlobalFunc_9660(40, 2, 1);
}

void func_373()//Position - 0x263E2
{
	GlobalFunc_9660(31, 2, 1);
}

void func_374()//Position - 0x263F2
{
	GlobalFunc_9660(31, 0, 1);
}

void func_375()//Position - 0x26402
{
	GlobalFunc_8596(19, 2, 1);
	GlobalFunc_9660(19, 2, 1);
}













void func_388()//Position - 0x2687D
{
	int iVar0;
	
	iVar0 = 81;
	if (GlobalFunc_2641(81) && GlobalFunc_474(81))
	{
		HUD::SET_BLIP_FLASHES(Global_Mission_Blips[iVar0 /*23*/].f_19, 1);
		HUD::SET_BLIP_FLASH_TIMER(Global_Mission_Blips[iVar0 /*23*/].f_19, 10000);
	}
}



void func_391()//Position - 0x26958
{
	var uVar0;
	
	uVar0 = HUD::GET_FIRST_BLIP_INFO_ID(66);
	if (HUD::DOES_BLIP_EXIST(uVar0))
	{
		HUD::SET_BLIP_FLASHES(uVar0, 1);
		HUD::SET_BLIP_FLASH_TIMER(uVar0, 10000);
	}
}

void func_392()//Position - 0x26981
{
	int iVar0;
	
	iVar0 = 242;
	while (iVar0 <= 261)
	{
		if ((func_393(iVar0) && !HUD::IS_RADAR_HIDDEN()) && !MISC::IS_FRONTEND_FADING())
		{
			HUD::SET_BLIP_FLASHES(Global_Mission_Blips[iVar0 /*23*/].f_19, 1);
			HUD::SET_BLIP_FLASH_TIMER(Global_Mission_Blips[iVar0 /*23*/].f_19, 10000);
		}
		iVar0++;
	}
}

int func_393(int iParam0)//Position - 0x269D9
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	if (HUD::DOES_BLIP_EXIST(Global_Mission_Blips[iVar0 /*23*/].f_19))
	{
		if (HUD::IS_BLIP_ON_MINIMAP(Global_Mission_Blips[iVar0 /*23*/].f_19))
		{
			return 1;
		}
	}
	return 0;
}






void func_399()//Position - 0x26CCD
{
	GlobalFunc_7682(-375893868);
	GlobalFunc_7682(-658009473);
	GlobalFunc_585(50, 1);
}

void func_400()//Position - 0x26CF0
{
	GlobalFunc_7682(546458037);
	if (!GlobalFunc_2(0))
	{
		GlobalFunc_6677("AM_H_CHOP", 0, 3000, -1, 10000, 2, 0, 0, 0);
	}
	GlobalFunc_585(63, 1);
	if (!GlobalFunc_485(126))
	{
		GlobalFunc_2198(137, 1, 0);
		GlobalFunc_5843(137);
		GlobalFunc_5774(137);
		GlobalFunc_7621(80, 1, 0, 1, 0);
	}
	else
	{
		GlobalFunc_2198(138, 1, 0);
		GlobalFunc_5773(138);
		GlobalFunc_5843(138);
	}
}

void func_401()//Position - 0x26D65
{
	GlobalFunc_7682(-651018670);
	GlobalFunc_7682(-236506853);
	GlobalFunc_585(14, 1);
}

void func_402()//Position - 0x26D88
{
	if (!GlobalFunc_485(48))
	{
		GlobalFunc_585(48, 1);
	}
}

void func_403()//Position - 0x26DA1
{
	if (!GlobalFunc_485(48))
	{
		GlobalFunc_585(48, 1);
		if (GlobalFunc_8329() != 1)
		{
			func_404(12, 1, "ASS1_MIS", 1, 0, 0, 0, 0, 0, 0, 1);
		}
	}
	GlobalFunc_7682(1323596299);
	GlobalFunc_7682(-1205448796);
}

int func_404(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x26DEA
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	
	MISC::CLEAR_BIT(&Global_2263, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	if (func_405(iParam0, sParam2, iParam3, iVar0, sVar1, sVar3, iVar2, iParam4, iParam5, iParam6, bParam8, iParam9, iParam10, iVar4, sVar5, sVar6, iParam1) == 1)
	{
		if (bParam8 == 1)
		{
			Global_2970 = iParam7;
			Global_2873[3 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			MISC::SET_BIT(&Global_2263, 1);
			MISC::SET_BIT(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_405(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x26E7F
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	GlobalFunc_8971();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (GlobalFunc_5406() == 0)
	{
		GlobalFunc_5405();
		return 0;
	}
	GlobalFunc_2246(Global_16759);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/]), sParam1, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_24 = iParam2;
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_25 = iParam7;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_26 = uParam8;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_29 = uParam9;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_30 = uParam12;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_31 = uParam11;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_28 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_33), sParam4, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_50), sParam5, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_2263, 10))
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
		Global_2969 = 4;
		GlobalFunc_1494(0);
		GlobalFunc_1494(2);
		GlobalFunc_1494(1);
	}
	else
	{
		GlobalFunc_8971();
		switch (iParam16)
		{
			case 3:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[Global_14393] = 1;
				break;
			
			case 0:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14393)
			{
				case 0:
					GlobalFunc_1494(0);
					Global_2969 = 0;
					break;
				
				case 1:
					GlobalFunc_1494(1);
					Global_2969 = 1;
					break;
				
				case 2:
					GlobalFunc_1494(2);
					Global_2969 = 2;
					break;
				
				case 3:
					GlobalFunc_1494(3);
					Global_2969 = 3;
					break;
				
				default:
					Global_2969 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_2263, 10))
		{
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16761[Global_16759] = 0;
	if (bParam10)
	{
		GlobalFunc_8971();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!GlobalFunc_268())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_406(1);
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_406(int iParam0)//Position - 0x27336
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
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (GlobalFunc_39(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_256(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_407(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68245)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2543383[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2543383[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2543383[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_407(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35962;
											break;
										
										case 1:
											iVar6 = Global_35963;
											break;
										
										case 2:
											iVar6 = Global_35964;
											break;
										
										default:
											break;
									}
									func_407(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_407(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_256(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2269);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_256(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_256(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GlobalFunc_256(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								func_407(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_407(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x277CC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam7))
	{
		GlobalFunc_256(iParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		GlobalFunc_256(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		GlobalFunc_256(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		GlobalFunc_256(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		GlobalFunc_256(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}









void func_416()//Position - 0x27CBE
{
	GlobalFunc_7168(1323596299, 1, 2, 12, 15000, 5000, -1, 51, -1, 0, 1);
	GlobalFunc_7168(-1205448796, 1, 5, 1, 15000, 5000, -1, 51, -1, 0, 1);
	GlobalFunc_7682(1635608802);
}

void func_417()//Position - 0x27D03
{
	GlobalFunc_7682(-2014002000);
	GlobalFunc_7682(-314546970);
	GlobalFunc_7682(-1306479777);
	GlobalFunc_7682(-1652588035);
	GlobalFunc_7682(-125167689);
	GlobalFunc_585(47, 1);
}

void func_418()//Position - 0x27D44
{
	GlobalFunc_7682(-444489072);
	GlobalFunc_7682(154402960);
	GlobalFunc_495(23, 2);
	GlobalFunc_5094(23);
	GlobalFunc_585(44, 1);
}

void func_419()//Position - 0x27D75
{
	GlobalFunc_7682(1269300253);
	GlobalFunc_7682(-749738207);
	GlobalFunc_585(23, 1);
}


void func_421()//Position - 0x27DAA
{
	int iVar0;
	int iVar1;
	
	GlobalFunc_585(126, 1);
	GlobalFunc_10954(6, 1);
	GlobalFunc_5845(6, 1);
	GlobalFunc_10954(5, 0);
	GlobalFunc_4927(4, 1);
	GlobalFunc_4927(5, 1);
	if (GlobalFunc_2539(157) != 1)
	{
		GlobalFunc_7621(156, 1, 0, 1, 0);
	}
	GlobalFunc_7621(159, 1, 0, 1, 0);
	GlobalFunc_7621(160, 1, 0, 1, 0);
	GlobalFunc_7621(96, 1, 0, 1, 0);
	iVar0 = GlobalFunc_8329();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_42(iVar0))
		{
			if (iVar0 == 1)
			{
				GlobalFunc_5669(12, PLAYER::PLAYER_PED_ID());
			}
		}
	}
	GlobalFunc_5845(5, 0);
	GlobalFunc_4927(2, 0);
	GlobalFunc_4927(3, 0);
	GlobalFunc_7621(153, 1, 0, 1, 0);
	GlobalFunc_7621(155, 0, 0, 1, 0);
	GlobalFunc_7621(154, 0, 0, 1, 0);
	GlobalFunc_7621(80, 0, 0, 1, 0);
	if (!GlobalFunc_485(63))
	{
		GlobalFunc_7682(546458037);
		GlobalFunc_7682(1674644829);
		if (!GlobalFunc_2(0))
		{
			GlobalFunc_6677("AM_H_CHOP", 0, 3000, -1, 10000, 2, 0, 0, 0);
			GlobalFunc_7168(1674644829, 1, 2, 19, 10000, 10000, -1, 0, -1, 524288, 1);
		}
		GlobalFunc_585(63, 1);
	}
	GlobalFunc_2198(137, 0, 0);
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("chop")) == 0)
	{
		GlobalFunc_2198(138, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA.f_24[1 /*5*/][iVar1] = 1;
		iVar1++;
	}
	Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_264 = 1;
	if (!GlobalFunc_2(0))
	{
		GlobalFunc_6677("AM_H_HILLS", 2, 3000, -1, 10000, 2, 0, 0, 0);
	}
}



































void func_456()//Position - 0x2C925
{
	GlobalFunc_585(118, 1);
	GlobalFunc_4927(3, 1);
}

void func_457()//Position - 0x2C93A
{
	GlobalFunc_585(9, 1);
}

void func_458()//Position - 0x2C949
{
	GlobalFunc_7168(866793964, 1, 2, 19, 60000, 10000, 2, 44, -1, 262144, 1);
}

void func_459()//Position - 0x2C96F
{
	GlobalFunc_7682(-1982006572);
	GlobalFunc_7682(-1501908698);
	GlobalFunc_585(62, 1);
	GlobalFunc_7168(-899711929, 1, 2, 19, 800000, 20000, -1, 0, -1, 0, 1);
}

void func_460()//Position - 0x2C9AC
{
	func_348(40, 1);
	func_348(48, 1);
	func_348(58, 1);
	func_348(71, 1);
}

void func_461(int iParam0)//Position - 0x2C9D0
{
	GlobalFunc_521(iParam0);
}


void func_463()//Position - 0x2CC08
{
	GlobalFunc_6677("AM_H_SHOOT", 2, 3000, 60000, 10000, 7, 0, 0, 0);
}

void func_464()//Position - 0x2CC27
{
	int iVar0;
	
	GlobalFunc_5843(48);
	GlobalFunc_2644(48, 1);
	GlobalFunc_2196(0, 11, 1);
	GlobalFunc_9221(28, 1, 0);
	GlobalFunc_9221(29, 1, 0);
	GlobalFunc_9221(30, 1, 0);
	GlobalFunc_9221(31, 1, 0);
	GlobalFunc_9221(32, 1, 0);
	GlobalFunc_9221(33, 1, 0);
	GlobalFunc_9221(34, 1, 0);
	GlobalFunc_9221(35, 1, 0);
	GlobalFunc_9221(36, 1, 0);
	GlobalFunc_9221(37, 1, 0);
	GlobalFunc_9221(38, 1, 0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		GlobalFunc_9223(iVar0, joaat("weapon_assaultrifle"), 1, 1);
		GlobalFunc_9223(iVar0, joaat("weapon_grenade"), 1, 1);
		GlobalFunc_9223(iVar0, joaat("weapon_pistol"), 1, 1);
		GlobalFunc_9223(iVar0, joaat("weapon_microsmg"), 1, 1);
		GlobalFunc_9223(iVar0, joaat("weapon_smg"), 1, 1);
		GlobalFunc_9223(iVar0, joaat("weapon_knife"), 1, 1);
		iVar0++;
	}
}




















void func_484(int iParam0, bool bParam1)//Position - 0x2EB94
{
	int iVar0;
	
	if (bParam1)
	{
		GlobalFunc_9221(39, 1, 0);
		GlobalFunc_9221(40, 1, 0);
		GlobalFunc_9221(41, 1, 0);
		GlobalFunc_9221(42, 1, 0);
		GlobalFunc_9221(43, 1, 0);
	}
	func_485(1, iParam0, 0);
	func_485(2, iParam0, 1);
	func_485(3, iParam0, 2);
	func_485(4, iParam0, 3);
	func_485(103, iParam0, 3);
	func_485(5, iParam0, 0);
	func_485(6, iParam0, 0);
	func_485(7, iParam0, 0);
	func_485(8, iParam0, 0);
	func_485(9, iParam0, 0);
	func_485(10, iParam0, 0);
	func_485(11, iParam0, 0);
	func_485(12, iParam0, 0);
	func_485(13, iParam0, 0);
	func_485(14, iParam0, 2);
	func_485(15, iParam0, 3);
	func_485(16, iParam0, 3);
	func_485(17, iParam0, 0);
	func_485(18, iParam0, 1);
	func_485(19, iParam0, 2);
	func_485(20, iParam0, 2);
	func_485(101, iParam0, 3);
	func_485(102, iParam0, 3);
	func_485(21, iParam0, 0);
	func_485(22, iParam0, 1);
	func_485(23, iParam0, 2);
	func_485(24, iParam0, 3);
	func_485(25, iParam0, 0);
	func_485(26, iParam0, 1);
	func_485(27, iParam0, 2);
	func_485(28, iParam0, 3);
	func_485(29, iParam0, 0);
	func_485(30, iParam0, 0);
	func_485(31, iParam0, 1);
	func_485(32, iParam0, 2);
	func_485(33, iParam0, 3);
	func_485(34, iParam0, 0);
	func_485(35, iParam0, 0);
	func_485(36, iParam0, 0);
	func_485(37, iParam0, 0);
	func_485(38, iParam0, 0);
	func_485(39, iParam0, 0);
	func_485(40, iParam0, 0);
	func_485(41, iParam0, 0);
	func_485(42, iParam0, 0);
	func_485(43, iParam0, 0);
	func_485(44, iParam0, 2);
	func_485(45, iParam0, 3);
	func_485(99, iParam0, 1);
	func_485(46, iParam0, 1);
	func_485(55, iParam0, 0);
	func_485(60, iParam0, 0);
	func_485(59, iParam0, 1);
	func_485(58, iParam0, 1);
	func_485(56, iParam0, 2);
	func_485(57, iParam0, 3);
	func_485(47, iParam0, 0);
	func_485(48, iParam0, 1);
	func_485(49, iParam0, 2);
	func_485(50, iParam0, 3);
	func_485(51, iParam0, 0);
	func_485(52, iParam0, 1);
	func_485(53, iParam0, 2);
	func_485(54, iParam0, 3);
	func_485(106, iParam0, 3);
	func_485(61, iParam0, 0);
	func_485(62, iParam0, 1);
	func_485(63, iParam0, 1);
	func_485(64, iParam0, 2);
	func_485(65, iParam0, 2);
	func_485(66, iParam0, 0);
	func_485(67, iParam0, 1);
	func_485(68, iParam0, 2);
	func_485(69, iParam0, 3);
	func_485(70, iParam0, 3);
	func_485(71, iParam0, 3);
	func_485(72, iParam0, 0);
	func_485(73, iParam0, 0);
	func_485(74, iParam0, 1);
	func_485(75, iParam0, 2);
	func_485(76, iParam0, 3);
	func_485(77, iParam0, 0);
	func_485(78, iParam0, 1);
	func_485(79, iParam0, 2);
	func_485(80, iParam0, 3);
	func_485(100, iParam0, 3);
	func_485(81, iParam0, 0);
	func_485(82, iParam0, 1);
	func_485(83, iParam0, 2);
	func_485(84, iParam0, 3);
	func_485(105, iParam0, 3);
	func_485(85, iParam0, 0);
	func_485(86, iParam0, 0);
	func_485(87, iParam0, 0);
	func_485(88, iParam0, 0);
	func_485(104, iParam0, 0);
	func_485(91, iParam0, 0);
	func_485(92, iParam0, 1);
	func_485(93, iParam0, 2);
	func_485(94, iParam0, 3);
	func_485(95, iParam0, 0);
	func_485(96, iParam0, 1);
	func_485(97, iParam0, 2);
	func_485(98, iParam0, 3);
	if (iParam0 >= 3)
	{
		iVar0 = 0;
		while (iVar0 < 90)
		{
			func_485(iVar0, iParam0, 3);
			iVar0++;
		}
	}
}

void func_485(int iParam0, int iParam1, int iParam2)//Position - 0x2EF8C
{
	int iVar0;
	
	if (iParam1 >= iParam2)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1469[(iParam0 / 32)], (iParam0 % 32)))
		{
			iVar0 = 0;
			while (iVar0 < Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT)
			{
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iVar0 /*43*/].f_42 = 1;
				iVar0++;
			}
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1469[(iParam0 / 32)]), (iParam0 % 32));
			if (iParam2 == 0)
			{
				func_486(0, iParam0, "");
			}
		}
	}
}

void func_486(int iParam0, int iParam1, char* sParam2)//Position - 0x2F00F
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
	
	if (iParam1 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam0 == 0)
			{
				iVar0 = 0;
				while (iVar0 < 151)
				{
					iVar1 = iVar0 * 3;
					iVar2 = GlobalFunc_2482(MISC::GET_HASH_KEY(sParam2));
					if (iVar2 != -1)
					{
						MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1336[(iVar1 + (iVar2 / 32))]), (iVar2 % 32));
					}
					iVar0++;
				}
			}
			else
			{
				iVar3 = GlobalFunc_2481(iParam0);
				if (iVar3 != -1)
				{
					iVar4 = iVar3 * 3;
					iVar5 = GlobalFunc_2482(MISC::GET_HASH_KEY(sParam2));
					if (iVar5 != -1)
					{
						MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1336[(iVar4 + (iVar5 / 32))]), (iVar5 % 32));
					}
				}
			}
		}
		return;
	}
	if (iParam0 == 0)
	{
		iVar6 = 0;
		while (iVar6 < 151)
		{
			if (func_487(iParam1))
			{
				iVar7 = (iVar6 * 4 + (iParam1 / 32));
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_44[iVar7]), (iParam1 % 32));
				}
				else
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_73[iVar7]), (iParam1 % 32));
				}
			}
			iVar6++;
		}
	}
	else if (func_487(iParam1))
	{
		iVar8 = GlobalFunc_2481(iParam0);
		if (iVar8 != -1)
		{
			iVar9 = (iVar8 * 4 + (iParam1 / 32));
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_44[iVar9]), (iParam1 % 32));
			}
			else
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_73[iVar9]), (iParam1 % 32));
			}
		}
	}
}

int func_487(int iParam0)//Position - 0x2F197
{
	if (iParam0 == -1)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1469[(iParam0 / 32)], (iParam0 % 32));
	}
	if (GlobalFunc_3() == 0)
	{
		return func_488(iParam0);
	}
	return 1;
}

bool func_488(int iParam0)//Position - 0x2F1E3
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_489(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}

var func_489(var uParam0)//Position - 0x2F203
{
	var uVar0;
	
	uVar0 = GlobalFunc_6671(GlobalFunc_5793(uParam0), -1, 0);
	return uVar0;
}




void func_493()//Position - 0x2FD6D
{
	GlobalFunc_9221(21, 1, 0);
	GlobalFunc_1293(21);
	func_494();
}

void func_494()//Position - 0x2FD87
{
	GlobalFunc_10922(joaat("player_zero"), 14, 31, 1);
	GlobalFunc_10922(joaat("player_zero"), 14, 32, 1);
	GlobalFunc_10922(joaat("player_zero"), 14, 33, 1);
	GlobalFunc_10922(joaat("player_zero"), 14, 34, 1);
	GlobalFunc_10922(joaat("player_zero"), 14, 35, 1);
	GlobalFunc_10922(joaat("player_zero"), 14, 36, 1);
	GlobalFunc_10922(joaat("player_zero"), 14, 37, 1);
	GlobalFunc_10922(joaat("player_zero"), 14, 38, 1);
	GlobalFunc_10922(joaat("player_zero"), 14, 39, 1);
	GlobalFunc_10922(joaat("player_zero"), 14, 40, 1);
	GlobalFunc_10922(joaat("player_zero"), 14, 41, 1);
	GlobalFunc_10922(joaat("player_zero"), 14, 42, 1);
	GlobalFunc_10922(joaat("player_zero"), 14, 43, 1);
	GlobalFunc_10922(joaat("player_zero"), 14, 44, 1);
	GlobalFunc_10922(joaat("player_zero"), 9, 9, 1);
	GlobalFunc_10922(joaat("player_zero"), 9, 10, 1);
	GlobalFunc_10922(joaat("player_zero"), 9, 11, 1);
	GlobalFunc_10922(joaat("player_zero"), 9, 12, 1);
	GlobalFunc_10922(joaat("player_zero"), 9, 13, 1);
	GlobalFunc_10922(joaat("player_zero"), 9, 14, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 26, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 27, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 28, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 29, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 30, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 31, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 32, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 33, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 34, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 35, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 36, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 37, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 38, 1);
	GlobalFunc_10922(joaat("player_one"), 14, 39, 1);
	GlobalFunc_10922(joaat("player_one"), 9, 5, 1);
	GlobalFunc_10922(joaat("player_one"), 9, 6, 1);
	GlobalFunc_10922(joaat("player_one"), 9, 7, 1);
	GlobalFunc_10922(joaat("player_one"), 9, 8, 1);
	GlobalFunc_10922(joaat("player_one"), 9, 9, 1);
	GlobalFunc_10922(joaat("player_one"), 9, 10, 1);
	GlobalFunc_10922(joaat("player_two"), 14, 49, 1);
	GlobalFunc_10922(joaat("player_two"), 14, 50, 1);
	GlobalFunc_10922(joaat("player_two"), 14, 51, 1);
	GlobalFunc_10922(joaat("player_two"), 14, 52, 1);
	GlobalFunc_10922(joaat("player_two"), 14, 53, 1);
	GlobalFunc_10922(joaat("player_two"), 14, 54, 1);
	GlobalFunc_10922(joaat("player_two"), 14, 55, 1);
	GlobalFunc_10922(joaat("player_two"), 14, 56, 1);
	GlobalFunc_10922(joaat("player_two"), 14, 57, 1);
	GlobalFunc_10922(joaat("player_two"), 14, 58, 1);
	GlobalFunc_10922(joaat("player_two"), 14, 59, 1);
	GlobalFunc_10922(joaat("player_two"), 14, 60, 1);
	GlobalFunc_10922(joaat("player_two"), 9, 9, 1);
	GlobalFunc_10922(joaat("player_two"), 9, 10, 1);
	GlobalFunc_10922(joaat("player_two"), 9, 11, 1);
	GlobalFunc_10922(joaat("player_two"), 9, 12, 1);
	GlobalFunc_10922(joaat("player_two"), 9, 13, 1);
	GlobalFunc_10922(joaat("player_two"), 9, 14, 1);
	GlobalFunc_10922(joaat("player_two"), 9, 15, 1);
	GlobalFunc_10922(joaat("player_two"), 9, 16, 1);
}

void func_495()//Position - 0x300DA
{
	GlobalFunc_9221(0, 1, 0);
	GlobalFunc_9221(1, 1, 0);
	GlobalFunc_9221(2, 1, 0);
	GlobalFunc_9221(3, 1, 0);
	GlobalFunc_9221(4, 1, 0);
	GlobalFunc_9221(5, 1, 0);
	GlobalFunc_9221(6, 1, 0);
}

void func_496()//Position - 0x30113
{
	GlobalFunc_2645(30, 1);
}


void func_498()//Position - 0x30187
{
	GlobalFunc_2645(13, 1);
}

void func_499()//Position - 0x30196
{
	GlobalFunc_2645(32, 1);
}

void func_500()//Position - 0x301A5
{
	GlobalFunc_2645(23, 1);
	GlobalFunc_2645(15, 1);
	GlobalFunc_2645(29, 1);
	GlobalFunc_2645(24, 1);
	GlobalFunc_2645(17, 1);
	GlobalFunc_2645(11, 1);
	GlobalFunc_2645(16, 1);
	GlobalFunc_2645(18, 1);
	GlobalFunc_2645(12, 1);
	GlobalFunc_2645(27, 1);
	GlobalFunc_2645(19, 1);
	GlobalFunc_2645(28, 1);
	GlobalFunc_2645(22, 1);
	GlobalFunc_2645(21, 1);
	GlobalFunc_2645(14, 1);
	GlobalFunc_2645(7, 1);
	GlobalFunc_2645(3, 1);
	GlobalFunc_2645(30, 0);
}


void func_502()//Position - 0x30231
{
	GlobalFunc_585(74, 1);
	GlobalFunc_2645(0, 1);
	GlobalFunc_2645(1, 1);
	GlobalFunc_2645(26, 1);
	GlobalFunc_2645(2, 1);
	GlobalFunc_2645(4, 1);
	GlobalFunc_2645(9, 1);
	GlobalFunc_2645(5, 1);
	GlobalFunc_2645(6, 1);
	GlobalFunc_2645(10, 1);
	GlobalFunc_2645(8, 1);
	GlobalFunc_2645(20, 1);
	GlobalFunc_2645(25, 1);
	GlobalFunc_2645(31, 1);
}

void func_503()//Position - 0x30295
{
	GlobalFunc_2198(67, 1, 0);
	GlobalFunc_2198(95, 1, 0);
	GlobalFunc_2198(96, 1, 0);
	GlobalFunc_2198(97, 1, 0);
	GlobalFunc_2198(98, 1, 0);
	GlobalFunc_2198(99, 1, 0);
	GlobalFunc_2198(100, 1, 0);
	GlobalFunc_2198(101, 1, 0);
	GlobalFunc_2198(102, 1, 0);
	GlobalFunc_2196(0, 2, 1);
	GlobalFunc_2196(0, 13, 1);
	GlobalFunc_6677("AM_H_SWTCH5", 2, 3000, -1, 10000, 7, 0, 0, 0);
	GlobalFunc_5843(67);
	GlobalFunc_5843(95);
	GlobalFunc_7682(-1900821691);
	GlobalFunc_7682(-1845612607);
}

void func_504()//Position - 0x30328
{
	GlobalFunc_6677("AM_H_CRCE", 0, 3000, -1, 10000, 7, 0, 0, 0);
	GlobalFunc_2196(0, 19, 1);
	GlobalFunc_5843(64);
	GlobalFunc_2198(64, 1, 0);
	GlobalFunc_5774(64);
}

void func_505()//Position - 0x30360
{
	if (GlobalFunc_84())
	{
		if (GlobalFunc_485(136))
		{
			func_504();
		}
		else
		{
			GlobalFunc_7168(1139718847, 6, 4, 20, 120000, 30000, -1, 39, -1, 0, 1);
		}
		Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bTextRegistered = 1;
	}
}

void func_506()//Position - 0x303A4
{
	GlobalFunc_5843(109);
	GlobalFunc_5843(110);
	GlobalFunc_2198(109, 1, 0);
	GlobalFunc_2198(110, 1, 0);
	GlobalFunc_2196(0, 18, 1);
	GlobalFunc_5774(109);
}

void func_507()//Position - 0x303D6
{
	GlobalFunc_5843(106);
	GlobalFunc_2198(106, 1, 0);
	GlobalFunc_2196(0, 17, 1);
	GlobalFunc_7621(113, 1, 0, 1, 0);
	GlobalFunc_5774(106);
	GlobalFunc_6677("AM_H_FOU", 0, 3000, -1, 10000, 7, 0, 0, 0);
}

void func_508()//Position - 0x30418
{
	GlobalFunc_2196(0, 14, 1);
}

void func_509()//Position - 0x30428
{
	GlobalFunc_2196(0, 12, 1);
	GlobalFunc_585(56, 1);
}

void func_510()//Position - 0x3043F
{
	GlobalFunc_2196(0, 10, 1);
	GlobalFunc_5843(94);
	GlobalFunc_2198(94, 1, 0);
	BRAIN::_0x6D6840CEE8845831("launcher_stunts");
	GlobalFunc_5774(94);
	GlobalFunc_6677("AM_H_STNTP", 1, 3000, -1, 10000, 7, 0, 0, 0);
}

void func_511()//Position - 0x3047F
{
	GlobalFunc_5843(93);
	GlobalFunc_2198(93, 1, 0);
	GlobalFunc_2196(0, 9, 1);
}

void func_512()//Position - 0x3049D
{
	GlobalFunc_6677("AM_H_SRAC", 0, 3000, -1, 10000, 2, 0, 0, 0);
}

void func_513()//Position - 0x304B9
{
	GlobalFunc_2196(0, 8, 1);
	MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked), 0);
	MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked), 1);
	if (SYSTEM::VDIST2(GlobalFunc_80(PLAYER::PLAYER_ID()), GlobalFunc_2247(86, 0)) < 43681f)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), 1);
	}
	if (SYSTEM::VDIST2(GlobalFunc_80(PLAYER::PLAYER_ID()), GlobalFunc_2247(85, 0)) < 43681f)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), 0);
	}
}

void func_514()//Position - 0x30539
{
	GlobalFunc_2196(0, 7, 1);
	Global_SAVE_DATA.bSeaRaceFirstBlip = 0;
	MISC::SET_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea), 0);
	MISC::SET_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea), 1);
	MISC::SET_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea), 2);
	MISC::SET_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea), 3);
}

void func_515()//Position - 0x30588
{
	GlobalFunc_7682(1440910066);
	GlobalFunc_7682(2063740346);
	GlobalFunc_7682(957098437);
	func_514();
	GlobalFunc_6677("AM_H_SEAR", 0, 3000, -1, 10000, 7, 0, 0, 0);
}

void func_516()//Position - 0x305C6
{
	GlobalFunc_5843(75);
	GlobalFunc_2196(0, 5, 1);
	GlobalFunc_2198(75, 1, 0);
	GlobalFunc_5774(75);
	GlobalFunc_6677("AM_H_PLTSC", 0, 3000, -1, 10000, 7, 0, 0, 0);
}

void func_517()//Position - 0x305FD
{
	GlobalFunc_5843(69);
	GlobalFunc_2196(0, 4, 1);
	GlobalFunc_585(69, 1);
	GlobalFunc_2198(69, 1, 0);
	GlobalFunc_5774(69);
	GlobalFunc_6677("AM_H_OFFRR", 0, 3000, -1, 10000, 4, 0, 0, 0);
}

void func_518()//Position - 0x3063B
{
	GlobalFunc_2198(68, 1, 0);
	GlobalFunc_11042(GlobalFunc_4917(2), 12, 20, 1, 1);
	GlobalFunc_2196(0, 3, 1);
	GlobalFunc_5774(68);
	GlobalFunc_5843(68);
	GlobalFunc_6677("AM_H_HUNT", 0, 3000, -1, 10000, 4, 0, 0, 0);
}

void func_519()//Position - 0x30681
{
	GlobalFunc_2198(67, 1, 0);
	GlobalFunc_2196(0, 2, 1);
	GlobalFunc_5774(67);
	GlobalFunc_5843(67);
	GlobalFunc_6677("AM_H_GOLF", 0, 3000, -1, 10000, 7, 0, 0, 0);
}

void func_520()//Position - 0x306B8
{
	GlobalFunc_2196(0, 15, 1);
	GlobalFunc_2196(0, 16, 1);
	GlobalFunc_5774(104);
	GlobalFunc_5774(105);
	GlobalFunc_5843(104);
	GlobalFunc_5843(105);
}

void func_521()//Position - 0x306E8
{
	GlobalFunc_5843(66);
	GlobalFunc_2198(66, 1, 0);
	GlobalFunc_2196(0, 1, 1);
	GlobalFunc_585(73, 1);
	GlobalFunc_5774(66);
	GlobalFunc_5843(66);
}

void func_522()//Position - 0x30718
{
	int iVar0;
	
	GlobalFunc_2198(124, 1, 0);
	GlobalFunc_2198(125, 1, 0);
	GlobalFunc_2198(126, 1, 0);
	GlobalFunc_2198(127, 1, 0);
	GlobalFunc_2198(128, 1, 0);
	GlobalFunc_2198(129, 1, 0);
	GlobalFunc_2198(130, 1, 0);
	GlobalFunc_2198(131, 1, 0);
	GlobalFunc_2198(132, 1, 0);
	GlobalFunc_2198(133, 1, 0);
	GlobalFunc_2198(134, 1, 0);
	GlobalFunc_2198(135, 1, 0);
	GlobalFunc_2198(136, 1, 0);
	iVar0 = 124;
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags, (124 - iVar0)))
	{
		GlobalFunc_2416(124, 1);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags, (125 - iVar0)))
	{
		GlobalFunc_2416(125, 1);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags, (126 - iVar0)))
	{
		GlobalFunc_2416(126, 1);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags, (127 - iVar0)))
	{
		GlobalFunc_2416(127, 1);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags, (128 - iVar0)))
	{
		GlobalFunc_2416(128, 1);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags, (129 - iVar0)))
	{
		GlobalFunc_2416(129, 1);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags, (130 - iVar0)))
	{
		GlobalFunc_2416(130, 1);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags, (131 - iVar0)))
	{
		GlobalFunc_2416(131, 1);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags, (132 - iVar0)))
	{
		GlobalFunc_2416(132, 1);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags, (133 - iVar0)))
	{
		GlobalFunc_2416(133, 1);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags, (134 - iVar0)))
	{
		GlobalFunc_2416(134, 1);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags, (135 - iVar0)))
	{
		GlobalFunc_2416(135, 1);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.BASEJUMP_SAVED_STRUCT.BJ_iCompletedFlags, (136 - iVar0)))
	{
		GlobalFunc_2416(136, 1);
	}
	GlobalFunc_2196(0, 0, 1);
	GlobalFunc_5774(124);
	GlobalFunc_5843(124);
	GlobalFunc_6677("AM_H_BASEJ", 0, 3000, -1, 10000, 7, 0, 0, 0);
	GlobalFunc_7168(-1783809705, 1, 2, 52, 200000, 10000, 64, 170, -1, 0, 1);
}


void func_524()//Position - 0x309C3
{
	GlobalFunc_5843(111);
	GlobalFunc_5843(112);
	GlobalFunc_5843(113);
	GlobalFunc_2198(111, 1, 0);
	GlobalFunc_2198(112, 1, 0);
	GlobalFunc_2198(113, 1, 0);
	GlobalFunc_585(53, 1);
}



