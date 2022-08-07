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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<9> Local_43 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_52[46] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_99 = 0;
	var uLocal_100[2] = { 0, 0 };
	float fLocal_103 = 0f;
	var uLocal_104 = 0;
	struct<3> Local_105 = { 0, 0, 0 } ;
	int iLocal_108 = 0;
	struct<3> Local_109 = { 0, 0, 0 } ;
	float fLocal_112 = 0f;
	struct<54> Local_113 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_167[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_178 = 0;
	struct<261> Local_179[4];
	char* sLocal_1224[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_1238 = NULL;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	int iLocal_1241 = 0;
	var uLocal_1242 = 0;
	int iLocal_1243 = 0;
	int iLocal_1244 = 0;
	int iLocal_1245 = 0;
	int iLocal_1246 = 0;
	char* sLocal_1247 = NULL;
	var uLocal_1248 = 16;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	int iLocal_1415 = 0;
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_42 = 145;
	iLocal_99 = -1;
	fLocal_103 = 0f;
	Local_105 = { 0f, 0f, 0f };
	Local_109 = { 0f, 0f, 0f };
	fLocal_112 = 0f;
	iLocal_178 = 1;
	sLocal_1238 = "";
	iLocal_1241 = -1;
	iLocal_1244 = -1;
	iLocal_1246 = -1;
	if (!GlobalFunc_501(31))
	{
		iLocal_36 = Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.FIB4_GETAWAY_STATE;
		if (iLocal_36 == 2)
		{
			MISC::SET_BIT(&uLocal_104, 10);
			Local_109 = { GlobalFunc_7729(25) };
			fLocal_112 = GlobalFunc_7728(25);
			if (GlobalFunc_7727(&Local_113, 25))
			{
				if (!MISC::IS_BIT_SET(uLocal_104, 14))
				{
					MISC::SET_BIT(&uLocal_104, 14);
				}
			}
		}
		else if (iLocal_36 == 1)
		{
		}
	}
	else
	{
		GlobalFunc_6677("AM_H_PREP8", 2, 0, -1, 10000, 7, 0, 0, 0);
		Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.FIB4_GETAWAY_STATE = iLocal_36;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			func_232(0);
			func_231();
			func_229(31, 1);
		}
		else
		{
			func_231();
			func_229(31, 0);
		}
	}
	func_224(2);
	Local_105 = { -166.1555f, -621.9833f, 31.4281f };
	while (true)
	{
		if (GlobalFunc_230(85))
		{
			GlobalFunc_5207("AM_H_PREP8", 1);
			func_229(31, 0);
		}
		if (GlobalFunc_5228(PLAYER::PLAYER_PED_ID()))
		{
			func_211();
			func_203();
			func_202();
			func_191();
			switch (iLocal_36)
			{
				case 0:
					func_160();
					break;
				
				case 1:
					func_129();
					break;
				
				case 2:
					func_128();
					break;
				
				case 3:
					func_121();
					break;
				
				case 4:
					func_15(34);
					break;
				
				case 5:
					break;
				
				default:
					break;
			}
			func_7();
		}
		else
		{
			func_1(46, 1);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, bool bParam1)//Position - 0x1F5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (46 - 1))
	{
		if (iParam0 != iVar0 && iParam0 != 46)
		{
			func_4(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iParam0 != 46)
		{
			if ((!GlobalFunc_572(func_3(iParam0)) && !Global_95996) && !MISC::IS_BIT_SET(uLocal_104, 15))
			{
				MISC::SET_BIT(&uLocal_104, 15);
				HUD::CLEAR_HELP(1);
			}
		}
		else if ((HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_95996) && !MISC::IS_BIT_SET(uLocal_104, 15))
		{
			MISC::SET_BIT(&uLocal_104, 15);
			HUD::CLEAR_HELP(1);
		}
	}
}


var func_3(int iParam0)//Position - 0x2AB
{
	return sLocal_52[iParam0];
}

void func_4(int iParam0)//Position - 0x2B9
{
	int iVar0;
	
	iVar0 = GlobalFunc_773(iParam0);
	MISC::CLEAR_BIT(&(uLocal_100[GlobalFunc_772(iParam0)]), iVar0);
}



void func_7()//Position - 0x30C
{
	if (((MISC::IS_BIT_SET(uLocal_104, 0) && !MISC::IS_BIT_SET(uLocal_104, 1)) && !MISC::IS_BIT_SET(uLocal_104, 14)) && GlobalFunc_5200())
	{
		if (GlobalFunc_774(0, 172, 0) || GlobalFunc_774(0, 173, 0))
		{
			iLocal_1246 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_1246 != -1)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_1246) < 200)
			{
				iLocal_42 = GlobalFunc_5199();
			}
			else
			{
				iLocal_1246 = -1;
			}
		}
	}
	else
	{
		iLocal_42 = 145;
		iLocal_1246 = -1;
	}
}








void func_15(int iParam0)//Position - 0x5B1
{
	func_103();
	if (iLocal_39 == 0)
	{
		switch (iLocal_40)
		{
			case 0:
				GlobalFunc_778(1);
				uLocal_1242 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
				func_1(46, 1);
				iLocal_1243 = MISC::GET_GAME_TIMER() + 3000;
				if (!MISC::IS_BIT_SET(uLocal_104, 10))
				{
					func_86();
				}
				GlobalFunc_585(iParam0, 1);
				iLocal_40 = 1;
				break;
			
			case 1:
				if (MISC::GET_GAME_TIMER() > iLocal_1243)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1242))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_1242, "SHOW_MISSION_PASSED_MESSAGE");
						GlobalFunc_726("M_FB4P3_P");
						GlobalFunc_726("M_FB4P3");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_1243 = MISC::GET_GAME_TIMER() + 10000;
						GlobalFunc_9029(0);
						iLocal_40 = 2;
					}
				}
				break;
			
			case 2:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1242) && AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI())
				{
					if (MISC::GET_GAME_TIMER() < iLocal_1243)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_1242, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else if (MISC::GET_GAME_TIMER() < iLocal_1243 + 100)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_1242, "TRANSITION_OUT");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_1243 = (iLocal_1243 - 100);
					}
					else if (MISC::GET_GAME_TIMER() < iLocal_1243 + 500)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_1242, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else
					{
						iLocal_40 = 3;
					}
				}
				break;
			
			case 3:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1242))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_1242);
				}
				GlobalFunc_778(0);
				if (iLocal_41 == 2)
				{
					GlobalFunc_66(108, 0);
				}
				if (GlobalFunc_5201(iLocal_108))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_108, 1);
				}
				GlobalFunc_776("M_FHPE", GlobalFunc_8310());
				func_72(2, 0);
				break;
			}
	}
	func_16();
}

void func_16()//Position - 0x756
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(uLocal_104, 2))
	{
		if (!GlobalFunc_100(0f, 0f, 0f, Local_109))
		{
			if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_109, 100f) && !GlobalFunc_236())
			{
				if (GlobalFunc_5201(GlobalFunc_104(25)))
				{
					iLocal_108 = GlobalFunc_104(25);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_108, 1, 1);
					if (GlobalFunc_5201(iLocal_108))
					{
						if (!DECORATOR::DECOR_EXIST_ON(iLocal_108, "GetawayVehicleValid"))
						{
							if (DECORATOR::DECOR_SET_BOOL(iLocal_108, "GetawayVehicleValid", 1))
							{
							}
						}
						MISC::SET_BIT(&uLocal_104, 0);
						MISC::SET_BIT(&uLocal_104, 2);
					}
				}
				else if (!GlobalFunc_78(25, 0))
				{
					if (!GlobalFunc_5201(GlobalFunc_104(25)))
					{
						func_63(1);
					}
				}
			}
			else if (GlobalFunc_5201(iLocal_108))
			{
				if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_109, 100f))
				{
				}
			}
		}
	}
	else
	{
		if (!GlobalFunc_100(0f, 0f, 0f, Local_109))
		{
			if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_109, 100f))
			{
				if (GlobalFunc_5201(iLocal_108))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_108, 0))
					{
						GlobalFunc_9815(iLocal_108, Local_109, fLocal_112, 25, 1);
						MISC::CLEAR_BIT(&uLocal_104, 2);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_108, 0);
						GlobalFunc_190(&iLocal_108);
						MISC::CLEAR_BIT(&uLocal_104, 0);
					}
					else
					{
						func_63(0);
					}
				}
				else if (!GlobalFunc_78(25, 0))
				{
					func_63(1);
				}
			}
			else if (!GlobalFunc_78(25, 0))
			{
				if (!GlobalFunc_5201(iLocal_108))
				{
					func_63(1);
				}
			}
			else if (!GlobalFunc_5201(iLocal_108))
			{
				iVar0 = GlobalFunc_104(25);
				if (GlobalFunc_5201(iVar0) && iVar0 != iLocal_108)
				{
					iLocal_108 = iVar0;
				}
			}
		}
		func_17();
	}
}

void func_17()//Position - 0x8F7
{
	if (MISC::IS_BIT_SET(uLocal_104, 2) && MISC::IS_BIT_SET(uLocal_104, 0))
	{
		if (GlobalFunc_5201(iLocal_108))
		{
			if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_108, 10f))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_108, 1), Local_109) >= 100f)
				{
					func_63(0);
				}
			}
		}
		else if (!GlobalFunc_78(25, 0))
		{
			if (GlobalFunc_5201(iLocal_108))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_108, 0);
			}
			GlobalFunc_190(&iLocal_108);
			func_63(1);
		}
	}
}














































void func_63(bool bParam0)//Position - 0x3B40
{
	if (MISC::IS_BIT_SET(uLocal_104, 14))
	{
		if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
		{
			if (bParam0)
			{
				func_64(10);
			}
			else
			{
				func_64(12);
			}
		}
		else if (bParam0)
		{
			func_64(11);
		}
		else
		{
			func_64(13);
		}
		if (iLocal_41 == 0)
		{
			GlobalFunc_585(45, 0);
		}
		else if (iLocal_41 == 1)
		{
			GlobalFunc_585(12, 0);
		}
		else if (iLocal_41 == 2)
		{
			GlobalFunc_585(34, 0);
		}
		if (iLocal_41 != 2)
		{
			Local_105 = { 0f, 0f, 0f };
		}
		iLocal_39 = 0;
		iLocal_40 = 0;
		MISC::CLEAR_BIT(&uLocal_104, 6);
		MISC::CLEAR_BIT(&uLocal_104, 7);
		MISC::CLEAR_BIT(&uLocal_104, 0);
		MISC::CLEAR_BIT(&uLocal_104, 1);
		MISC::CLEAR_BIT(&uLocal_104, 8);
		MISC::CLEAR_BIT(&uLocal_104, 12);
		MISC::CLEAR_BIT(&uLocal_104, 2);
		MISC::CLEAR_BIT(&uLocal_104, 14);
		if (iLocal_36 == 4)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1242))
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_1242);
			}
			GlobalFunc_778(0);
		}
		func_72(0, 0);
	}
}

void func_64(int iParam0)//Position - 0x3C27
{
	int iVar0;
	
	iVar0 = GlobalFunc_773(iParam0);
	MISC::SET_BIT(&(uLocal_100[GlobalFunc_772(iParam0)]), iVar0);
}








void func_72(int iParam0, bool bParam1)//Position - 0x3D4F
{
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.FIB4_GETAWAY_STATE = iParam0;
	iLocal_36 = iParam0;
	if (bParam1)
	{
		return;
	}
	GlobalFunc_4907();
}














void func_86()//Position - 0x40FF
{
	Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iMissionsCompleted++;
	if (iLocal_41 == 0)
	{
		STATS::STAT_SET_INT(joaat("fl_co_fb4p3"), Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iMissionsCompleted, 1);
		if (func_95())
		{
			if (GlobalFunc_230(74) || (GlobalFunc_230(75) && GlobalFunc_5202()))
			{
				GlobalFunc_585(46, 1);
			}
		}
	}
	func_87();
	MISC::SET_BIT(&uLocal_104, 10);
}

void func_87()//Position - 0x416D
{
	if (iLocal_41 == 0)
	{
		GlobalFunc_7610(23, 0, 0);
	}
	else if (iLocal_41 == 1)
	{
	}
	else if (iLocal_41 == 2)
	{
	}
}








int func_95()//Position - 0x4A2E
{
	if (iLocal_41 == 0)
	{
		return func_100();
	}
	else if (iLocal_41 == 1)
	{
		return GlobalFunc_5203();
	}
	else if (iLocal_41 == 2)
	{
		return func_96();
	}
	return 0;
}

int func_96()//Position - 0x4A64
{
	if ((GlobalFunc_230(79) && GlobalFunc_230(83)) && GlobalFunc_485(func_98()))
	{
		return 1;
	}
	return 0;
}


int func_98()//Position - 0x4ABF
{
	if (iLocal_41 == 0)
	{
		return 45;
	}
	else if (iLocal_41 == 1)
	{
		return 12;
	}
	else if (iLocal_41 == 2)
	{
		return 34;
	}
	return -1;
}


int func_100()//Position - 0x4B05
{
	if (func_101(33, 37) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0, int iParam1)//Position - 0x4B1D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		if (GlobalFunc_230(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (GlobalFunc_485(func_98()))
	{
		iVar0++;
	}
	return iVar0;
}


void func_103()//Position - 0x4B72
{
	struct<6> Var0;
	
	if (iLocal_39 != 0)
	{
		Var0 = { GlobalFunc_560() };
		switch (iLocal_39)
		{
			case 1:
				if (iLocal_41 != 2)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
						{
							GlobalFunc_783("LOCAUD", Local_43.f_7);
							GlobalFunc_782(1);
							iLocal_39 = 2;
						}
						else if (MISC::IS_BIT_SET(uLocal_104, 10) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 0)
						{
							GlobalFunc_783("LOCAUD", Local_43.f_7);
							GlobalFunc_782(1);
							iLocal_39 = 2;
						}
					}
				}
				else
				{
					iLocal_39 = 0;
				}
				if (GlobalFunc_781())
				{
					iLocal_39 = 3;
				}
				break;
			
			case 2:
				if (GlobalFunc_781())
				{
					iLocal_39 = 3;
				}
				if (!MISC::IS_BIT_SET(uLocal_104, 10))
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
					{
						func_110(Var0);
					}
				}
				else
				{
					iLocal_39 = 3;
				}
				break;
			
			case 3:
				if (!GlobalFunc_687())
				{
					iLocal_39 = 4;
				}
				break;
			
			case 4:
				if (!GlobalFunc_116(0))
				{
					if (iLocal_41 == 1)
					{
						GlobalFunc_780(Local_43.f_8);
					}
					iLocal_39 = 5;
				}
				break;
			
			case 5:
				if (GlobalFunc_8315() == 0)
				{
					if (iLocal_41 == 0)
					{
						if (func_95())
						{
							if ((GlobalFunc_230(74) || GlobalFunc_230(75)) && GlobalFunc_5202())
							{
								GlobalFunc_9030(1);
								iLocal_39 = 0;
							}
							else
							{
								GlobalFunc_9030(0);
								iLocal_39 = 0;
							}
						}
						else
						{
							iLocal_39 = 0;
						}
					}
					else
					{
						iLocal_39 = 0;
					}
				}
				else
				{
					if (iLocal_41 == 0)
					{
						if (func_95())
						{
							if (!GlobalFunc_230(3))
							{
								GlobalFunc_66(50, 0);
							}
						}
					}
					iLocal_39 = 0;
				}
				break;
			}
	}
}







void func_110(struct<6> Param0)//Position - 0x507C
{
	if (iLocal_41 == 0)
	{
		func_115(Param0);
	}
	else if (iLocal_41 == 1)
	{
		func_111(Param0);
	}
}

void func_111(struct<6> Param0)//Position - 0x50A3
{
	if (func_95())
	{
		func_112(Param0, 1);
	}
	else
	{
		func_112(Param0, 0);
	}
}

void func_112(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)//Position - 0x50C7
{
	struct<4> Var0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, Local_43.f_7))
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
			{
				if (iLocal_41 == 0)
				{
					Var0 = { GlobalFunc_9032(bParam6) };
					GlobalFunc_585(46, 1);
					GlobalFunc_783(sLocal_1247, &Var0);
					GlobalFunc_782(1);
				}
				else if (iLocal_41 == 1)
				{
					Var0 = { GlobalFunc_9031(bParam6) };
					GlobalFunc_783(sLocal_1247, &Var0);
					GlobalFunc_782(1);
				}
				iLocal_39 = 3;
			}
		}
	}
}



void func_115(struct<6> Param0)//Position - 0x520B
{
	if (func_95())
	{
		if (func_116())
		{
			if (GlobalFunc_8315() != 0)
			{
				func_112(Param0, 1);
			}
			else
			{
				iLocal_39 = 3;
			}
		}
		else if (GlobalFunc_8315() != 0)
		{
			func_112(Param0, 0);
		}
		else
		{
			iLocal_39 = 3;
		}
	}
	else
	{
		iLocal_39 = 3;
	}
}

int func_116()//Position - 0x5258
{
	if (iLocal_41 == 0)
	{
		if ((GlobalFunc_230(74) || GlobalFunc_230(74)) && GlobalFunc_5202())
		{
			return 1;
		}
	}
	else if (iLocal_41 == 1)
	{
		if (GlobalFunc_230(68))
		{
			return 1;
		}
	}
	return 0;
}





void func_121()//Position - 0x531B
{
	func_122();
}

void func_122()//Position - 0x5327
{
	func_126();
	func_123();
}

void func_123()//Position - 0x5337
{
	if (GlobalFunc_785() == 85)
	{
		if (GlobalFunc_Is_Mission_Retry() && !GlobalFunc_78(25, 0))
		{
			if (Local_113.f_42 != 0)
			{
				GlobalFunc_8387(25, Local_113, Local_109, fLocal_112, 145);
			}
		}
	}
}



void func_126()//Position - 0x53A6
{
	if (!GlobalFunc_100(Local_109, 0f, 0f, 0f) && GlobalFunc_785() != func_127())
	{
		if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_109, 60f))
		{
			if (GlobalFunc_5201(GlobalFunc_104(25)))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(GlobalFunc_104(25), 1), Local_109) >= 100f)
				{
					func_63(0);
				}
			}
			else if (!GlobalFunc_78(25, 0))
			{
				func_63(1);
			}
		}
	}
}

int func_127()//Position - 0x5420
{
	if (iLocal_41 == 0)
	{
		return 38;
	}
	else if (iLocal_41 == 1)
	{
		return 69;
	}
	else if (iLocal_41 == 2)
	{
		return 85;
	}
	return -1;
}

void func_128()//Position - 0x5450
{
	func_16();
	func_103();
}

void func_129()//Position - 0x5460
{
	func_143();
	func_139();
	func_136();
	func_103();
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_105, 150f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -176.9431f, -651.257f, 31.2136f, -150.9563f, -579.7476f, 35.4245f, 50f, 0, 1, 0))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Local_105, 6f, 0, 1, 0, 0, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.4253f, -622.0479f, 31.42444f, -162.2762f, -620.509f, 35.42448f, 0, 1);
	}
	if (!MISC::IS_BIT_SET(uLocal_104, 18))
	{
		if (!GlobalFunc_116(0) && !GlobalFunc_687())
		{
			GlobalFunc_164(sLocal_52[4], 7500, 0);
			MISC::SET_BIT(&uLocal_104, 18);
		}
	}
	if (MISC::IS_BIT_SET(uLocal_104, 0))
	{
		if (MISC::IS_BIT_SET(uLocal_104, 1))
		{
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
			GlobalFunc_846(&uLocal_1413);
			if (!iLocal_1415)
			{
				iLocal_1415 = 1;
				if (!GlobalFunc_663("PRC_GETOUT", 0, 0))
				{
					GlobalFunc_164("PRC_GETOUT", 7500, 0);
				}
			}
			if (GlobalFunc_5201(iLocal_108))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_108, 0))
				{
					if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_108))
					{
						func_131();
						GlobalFunc_54(&uLocal_1414);
						GlobalFunc_585(35, 0);
						if (GlobalFunc_663("PRC_GETOUT", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.4253f, -622.0479f, 31.42444f, -162.2762f, -620.509f, 35.42448f, 1, 1);
						func_72(4, 0);
					}
				}
			}
		}
		else
		{
			if (GlobalFunc_663("PRC_GETOUT", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			iLocal_1415 = 0;
		}
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_104, 18);
		GlobalFunc_54(&uLocal_1414);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.4253f, -622.0479f, 31.42444f, -162.2762f, -620.509f, 35.42448f, 1, 1);
		func_72(0, 1);
	}
}


void func_131()//Position - 0x566A
{
	if (!MISC::IS_BIT_SET(uLocal_104, 6))
	{
		if (GlobalFunc_5201(iLocal_108))
		{
			Local_109 = { ENTITY::GET_ENTITY_COORDS(iLocal_108, 1) };
			fLocal_112 = ENTITY::GET_ENTITY_HEADING(iLocal_108);
			MISC::SET_BIT(&uLocal_104, 6);
			MISC::SET_BIT(&uLocal_104, 2);
			GlobalFunc_4932(iLocal_108, &Local_113);
			GlobalFunc_9815(iLocal_108, Local_109, fLocal_112, 25, 1);
			MISC::SET_BIT(&uLocal_104, 14);
			GlobalFunc_790(iLocal_108);
		}
	}
}





void func_136()//Position - 0x5754
{
	switch (iLocal_37)
	{
		case 0:
			if (((!HUD::DOES_BLIP_EXIST(uLocal_1413) && MISC::IS_BIT_SET(uLocal_104, 0)) && !MISC::IS_BIT_SET(uLocal_104, 1)) && MISC::IS_BIT_SET(uLocal_104, 18))
			{
				uLocal_1413 = GlobalFunc_5104(Local_105, 1);
				PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
			}
			break;
		
		case 1:
			GlobalFunc_846(&uLocal_1413);
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
			break;
		
		case 2:
			break;
	}
}



void func_139()//Position - 0x580F
{
	if (GlobalFunc_485(35))
	{
		if (iLocal_37 == 0)
		{
			if (!MISC::IS_BIT_SET(uLocal_104, 1))
			{
				if (GlobalFunc_5201(iLocal_108))
				{
					ENTITY::IS_ENTITY_AT_COORD(iLocal_108, Local_105, 4f, 4f, 2f, 1, 1, 0);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_108, -168.8162f, -619.9002f, 31.42446f, -162.6423f, -622.0781f, 33.42446f, 4.14f, 0, 1, 0))
					{
						func_142(24, 46);
						if (func_141(iLocal_108))
						{
							if (GlobalFunc_3020(1077936128, 1))
							{
								MISC::SET_BIT(&uLocal_104, 1);
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(uLocal_104, 0))
			{
				if (!GlobalFunc_775(iLocal_108, Local_105, 10f) || ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_108))
				{
					MISC::CLEAR_BIT(&uLocal_104, 1);
				}
			}
		}
	}
}


int func_141(int iParam0)//Position - 0x5954
{
	struct<3> Var0;
	
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
	{
		func_64(39);
		return 0;
	}
	if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0, 0) && !VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(PLAYER::PLAYER_PED_ID(), iParam0, 0, 0, 0))
	{
		func_64(37);
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
	{
		func_64(36);
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	if (Var0.x >= 10f || Var0.x <= -10f)
	{
		func_64(42);
		return 0;
	}
	else if (Var0.f_1 >= 15f || Var0.f_1 <= -15f)
	{
		func_64(43);
		return 0;
	}
	return 1;
}

void func_142(int iParam0, int iParam1)//Position - 0x5A09
{
	func_4(iParam0);
	if (GlobalFunc_572(func_3(iParam0)))
	{
		HUD::CLEAR_HELP(1);
		MISC::SET_BIT(&uLocal_104, 15);
	}
	if (iParam1 != 46)
	{
		func_4(iParam1);
		if (GlobalFunc_572(func_3(iParam1)))
		{
			HUD::CLEAR_HELP(1);
			MISC::SET_BIT(&uLocal_104, 15);
		}
	}
}

void func_143()//Position - 0x5A58
{
	int iVar0;
	int iVar1;
	
	if ((Global_34913 == 15 && !GlobalFunc_487()) || GlobalFunc_485(35))
	{
		if (iLocal_37 == 0)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!MISC::IS_BIT_SET(uLocal_104, 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!MISC::IS_BIT_SET(uLocal_104, 7))
						{
							iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (GlobalFunc_5201(iVar0))
							{
								if (!GlobalFunc_797(iVar0))
								{
									if (func_151(iVar0) && !GlobalFunc_796())
									{
										if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
										{
											if (!MISC::IS_BIT_SET(uLocal_104, 19))
											{
												func_64(9);
												MISC::SET_BIT(&uLocal_104, 19);
											}
											else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
											{
												func_64(17);
											}
											else
											{
												func_64(18);
											}
											iLocal_108 = iVar0;
											if (DECORATOR::DECOR_SET_BOOL(iLocal_108, "GetawayVehicleValid", 1))
											{
											}
											ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_108, 1, 1);
											MISC::SET_BIT(&uLocal_104, 0);
											MISC::SET_BIT(&uLocal_104, 8);
											MISC::SET_BIT(&uLocal_104, 7);
											return;
										}
										else
										{
											GlobalFunc_190(&iLocal_108);
											MISC::CLEAR_BIT(&uLocal_104, 7);
											MISC::CLEAR_BIT(&uLocal_104, 0);
											return;
										}
									}
									if (DECORATOR::DECOR_SET_BOOL(iVar0, "GetawayVehicleValid", 0))
									{
									}
									MISC::SET_BIT(&uLocal_104, 7);
								}
								else if (GlobalFunc_795(iVar0))
								{
									iLocal_108 = iVar0;
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_108, 1, 1);
									MISC::SET_BIT(&uLocal_104, 0);
									MISC::SET_BIT(&uLocal_104, 8);
									MISC::SET_BIT(&uLocal_104, 7);
									return;
								}
							}
							else
							{
								GlobalFunc_190(&iLocal_108);
								MISC::SET_BIT(&uLocal_104, 7);
								MISC::CLEAR_BIT(&uLocal_104, 0);
							}
						}
						else if (MISC::IS_BIT_SET(uLocal_104, 0))
						{
							if (!GlobalFunc_5201(iLocal_108))
							{
								GlobalFunc_190(&iLocal_108);
								MISC::SET_BIT(&uLocal_104, 0);
								MISC::SET_BIT(&uLocal_104, 8);
								MISC::SET_BIT(&uLocal_104, 7);
							}
						}
					}
					else if (MISC::IS_BIT_SET(uLocal_104, 8))
					{
						iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (GlobalFunc_5201(iVar1))
						{
							if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iVar1, 10f) && !DECORATOR::DECOR_EXIST_ON(iVar1, "Getaway_Winched"))
							{
								iLocal_108 = iVar1;
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_108, 1, 1);
								MISC::SET_BIT(&uLocal_104, 0);
								MISC::SET_BIT(&uLocal_104, 7);
							}
						}
					}
					else
					{
						MISC::CLEAR_BIT(&uLocal_104, 7);
					}
				}
				else if (GlobalFunc_5201(iLocal_108))
				{
					if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_108, 80f))
					{
						func_64(5);
						MISC::SET_BIT(&uLocal_104, 8);
						GlobalFunc_190(&iLocal_108);
						MISC::CLEAR_BIT(&uLocal_104, 0);
						MISC::CLEAR_BIT(&uLocal_104, 7);
						func_231();
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_108)
						{
							GlobalFunc_190(&iLocal_108);
							func_142(17, 46);
							func_142(18, 46);
							func_142(14, 46);
							func_148();
							if (GlobalFunc_5200())
							{
								GlobalFunc_6823(0);
							}
							func_231();
						}
					}
					else if (!func_144(iLocal_108))
					{
						if (DECORATOR::DECOR_SET_BOOL(iLocal_108, "GetawayVehicleValid", 0))
						{
						}
						func_142(17, 46);
						func_142(18, 46);
						GlobalFunc_190(&iLocal_108);
						func_231();
						func_148();
					}
				}
				else
				{
					GlobalFunc_190(&iLocal_108);
					func_148();
					func_231();
				}
			}
		}
	}
}

int func_144(int iParam0)//Position - 0x5D32
{
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < 300f)
	{
		func_64(6);
		return 0;
	}
	return 1;
}




void func_148()//Position - 0x5E6E
{
	MISC::CLEAR_BIT(&uLocal_104, 0);
	MISC::CLEAR_BIT(&uLocal_104, 8);
	MISC::CLEAR_BIT(&uLocal_104, 7);
}



int func_151(int iParam0)//Position - 0x5F11
{
	if ((func_157() && func_153(iParam0)) && func_152(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0)//Position - 0x5F3B
{
	int iVar0;
	
	iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	if (iVar0 >= 3)
	{
		return 1;
	}
	func_64(15);
	return 0;
}

int func_153(int iParam0)//Position - 0x5F5C
{
	if ((func_155(iParam0) && !func_154(iParam0)) && func_144(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)//Position - 0x5F89
{
	int iVar0;
	
	iVar0 = GlobalFunc_99(iParam0);
	if (iVar0 == 0)
	{
		func_64(25);
		return 1;
	}
	if (iVar0 == 1)
	{
		func_64(26);
		return 1;
	}
	if (iVar0 == 2)
	{
		func_64(27);
		return 1;
	}
	if (GlobalFunc_85(iParam0))
	{
		func_64(14);
		return 1;
	}
	return 0;
}

int func_155(int iParam0)//Position - 0x5FDD
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!func_156(iVar0))
	{
		if (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iVar0) > 0.165f && VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(iVar0) > 31f)
		{
			return 1;
		}
	}
	func_64(14);
	return 0;
}

int func_156(int iParam0)//Position - 0x6022
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iLocal_167[iVar0] == iParam0)
		{
			if (iVar0 == 0 && !GlobalFunc_230(33))
			{
				MISC::SET_BIT(&uLocal_104, 3);
			}
			else if (iVar0 == 1 && !GlobalFunc_230(34))
			{
				MISC::SET_BIT(&uLocal_104, 3);
			}
			else
			{
				MISC::CLEAR_BIT(&uLocal_104, 3);
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_157()//Position - 0x608E
{
	if ((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
	{
		func_64(14);
		return 0;
	}
	return 1;
}



void func_160()//Position - 0x6123
{
	int iVar0;
	
	func_143();
	func_103();
	func_190();
	if (func_188())
	{
		if (func_182(&uLocal_1414) && func_161(&iVar0))
		{
			func_232(0);
			if (iVar0 == 1)
			{
				func_72(iVar0, 0);
			}
			else
			{
				func_72(iVar0, 1);
			}
		}
	}
}

int func_161(var uParam0)//Position - 0x616F
{
	var uVar0;
	
	if (MISC::IS_BIT_SET(uLocal_104, 0))
	{
		func_174();
		if (func_162())
		{
			uVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar0))
			{
				if (iLocal_41 == 2)
				{
					*uParam0 = 1;
				}
				else
				{
					*uParam0 = 4;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_162()//Position - 0x61B2
{
	if (GlobalFunc_10640(&uLocal_1248, Local_43.f_8, sLocal_1247, Local_43.f_4, 9, 1, 0, 0, 0))
	{
		iLocal_39 = 1;
		GlobalFunc_786(191, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		return 1;
	}
	return 0;
}












void func_174()//Position - 0x68A3
{
	int iVar0;
	
	iVar0 = GlobalFunc_8315();
	func_175(iVar0, func_181(iVar0));
}

void func_175(int iParam0, var uParam1)//Position - 0x68BD
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			Local_43 = 0;
			Local_43.f_1 = "MICHAEL";
			if (iLocal_41 == 0)
			{
				Local_43.f_2 = 1;
				Local_43.f_3 = "FRANKLIN";
				Local_43.f_8 = 5;
			}
			else
			{
				Local_43.f_2 = 3;
				Local_43.f_3 = "LESTER";
				if (iLocal_41 == 1)
				{
					Local_43.f_8 = 6;
				}
				else
				{
					Local_43.f_8 = 12;
				}
			}
			Local_43.f_5 = "FBI_3_FRESP";
			func_179(iParam0);
			break;
		
		case 1:
			Local_43 = 1;
			Local_43.f_1 = "FRANKLIN";
			if (iLocal_41 == 0)
			{
				Local_43.f_2 = 0;
				Local_43.f_3 = "MICHAEL";
				Local_43.f_8 = 9;
			}
			else
			{
				Local_43.f_2 = 3;
				Local_43.f_3 = "LESTER";
				if (iLocal_41 == 1)
				{
					Local_43.f_8 = 7;
				}
				else
				{
					Local_43.f_8 = 12;
				}
			}
			Local_43.f_5 = "FBI_3_MRESP";
			func_179(iParam0);
			break;
		
		case 2:
			Local_43 = 2;
			Local_43.f_1 = "TREVOR";
			if (iLocal_41 == 0)
			{
				Local_43.f_2 = 0;
				Local_43.f_3 = "MICHAEL";
				Local_43.f_8 = 8;
			}
			else
			{
				Local_43.f_2 = 3;
				Local_43.f_3 = "LESTER";
				if (iLocal_41 == 1)
				{
					Local_43.f_8 = 7;
				}
				else
				{
					Local_43.f_8 = 12;
				}
			}
			Local_43.f_5 = "FBI_3_MRESP";
			func_179(iParam0);
			break;
	}
	if (iLocal_41 == 1)
	{
		if (iParam0 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
		GlobalFunc_9621(Local_43.f_8, iVar0, 0);
	}
	GlobalFunc_173(&uLocal_1248, Local_43, PLAYER::PLAYER_PED_ID(), Local_43.f_1, 0, 1);
	GlobalFunc_173(&uLocal_1248, Local_43.f_2, 0, Local_43.f_3, 0, 1);
	Local_43.f_4 = uParam1;
}




void func_179(int iParam0)//Position - 0x6CF5
{
	Local_43.f_6 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	func_180(iParam0);
}

void func_180(int iParam0)//Position - 0x6D14
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_43.f_6))
	{
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "SanAnd"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M77";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F78";
			}
			else
			{
				Local_43.f_7 = "LOC_T78";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Alamo"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M101";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F1";
			}
			else
			{
				Local_43.f_7 = "LOC_T1";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Alta"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M1";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F2";
			}
			else
			{
				Local_43.f_7 = "LOC_T2";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Airp"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M48";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F49";
			}
			else
			{
				Local_43.f_7 = "LOC_T49";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "ArmyB"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M28";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F29";
			}
			else
			{
				Local_43.f_7 = "LOC_T29";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "BhamCa"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M2";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F3";
			}
			else
			{
				Local_43.f_7 = "LOC_T3";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Banning"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M3";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F4";
			}
			else
			{
				Local_43.f_7 = "LOC_T4";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Baytre"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M4";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F5";
			}
			else
			{
				Local_43.f_7 = "LOC_T5";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Beach"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M93";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F94";
			}
			else
			{
				Local_43.f_7 = "LOC_T94";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "BradT"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M7";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F8";
			}
			else
			{
				Local_43.f_7 = "LOC_T8";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "BradP"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M6";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F7";
			}
			else
			{
				Local_43.f_7 = "LOC_T7";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Burton"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M8";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F9";
			}
			else
			{
				Local_43.f_7 = "LOC_T9";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "CANNY"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M70";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F71";
			}
			else
			{
				Local_43.f_7 = "LOC_T71";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "CCreak"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M10";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F11";
			}
			else
			{
				Local_43.f_7 = "LOC_T11";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "CalafB"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M9";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F10";
			}
			else
			{
				Local_43.f_7 = "LOC_T10";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "ChamH"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M11";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F12";
			}
			else
			{
				Local_43.f_7 = "LOC_T12";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "CHU"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M13";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F14";
			}
			else
			{
				Local_43.f_7 = "LOC_T14";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "CHIL"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M96";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F97";
			}
			else
			{
				Local_43.f_7 = "LOC_T97";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "COSI"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M14";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F15";
			}
			else
			{
				Local_43.f_7 = "LOC_T15";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "CMSW"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M12";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F13";
			}
			else
			{
				Local_43.f_7 = "LOC_T13";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Cypre"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M15";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F16";
			}
			else
			{
				Local_43.f_7 = "LOC_T16";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Davis"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M16";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F17";
			}
			else
			{
				Local_43.f_7 = "LOC_T17";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Desrt"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M32";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F33";
			}
			else
			{
				Local_43.f_7 = "LOC_T33";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "DelBe"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M19";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F20";
			}
			else
			{
				Local_43.f_7 = "LOC_T20";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "DelPe"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M18";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F19";
			}
			else
			{
				Local_43.f_7 = "LOC_T19";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "DelSol"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F42";
			}
			else
			{
				Local_43.f_7 = "LOC_T42";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Downt"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M20";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F21";
			}
			else
			{
				Local_43.f_7 = "LOC_T21";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "DTVine"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M21";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F22";
			}
			else
			{
				Local_43.f_7 = "LOC_T22";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Eclips"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M24";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F25";
			}
			else
			{
				Local_43.f_7 = "LOC_T25";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "ELSant"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M22";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F23";
			}
			else
			{
				Local_43.f_7 = "LOC_T23";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "EBuro"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M25";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F26";
			}
			else
			{
				Local_43.f_7 = "LOC_T26";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "ELGorl"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M26";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F27";
			}
			else
			{
				Local_43.f_7 = "LOC_T27";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Elysian"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M27";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F28";
			}
			else
			{
				Local_43.f_7 = "LOC_T28";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Galli"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M31";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F32";
			}
			else
			{
				Local_43.f_7 = "LOC_T32";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Galfish"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M29";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F30";
			}
			else
			{
				Local_43.f_7 = "LOC_T30";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Greatc"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M34";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F35";
			}
			else
			{
				Local_43.f_7 = "LOC_T35";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Golf"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M35";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F36";
			}
			else
			{
				Local_43.f_7 = "LOC_T36";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "GrapeS"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M33";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F34";
			}
			else
			{
				Local_43.f_7 = "LOC_T34";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Hawick"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M37";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F38";
			}
			else
			{
				Local_43.f_7 = "LOC_T38";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Harmo"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M36";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F37";
			}
			else
			{
				Local_43.f_7 = "LOC_T37";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Heart"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M38";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F39";
			}
			else
			{
				Local_43.f_7 = "LOC_T39";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "HumLab"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M39";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F40";
			}
			else
			{
				Local_43.f_7 = "LOC_T40";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "HORS"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M97";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F98";
			}
			else
			{
				Local_43.f_7 = "LOC_T98";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Koreat"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M46";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F47";
			}
			else
			{
				Local_43.f_7 = "LOC_T47";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Jail"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M5";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F6";
			}
			else
			{
				Local_43.f_7 = "LOC_T6";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LAct"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M45";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F46";
			}
			else
			{
				Local_43.f_7 = "LOC_T46";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LDam"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M44";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F45";
			}
			else
			{
				Local_43.f_7 = "LOC_T45";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Lago"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M43";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F44";
			}
			else
			{
				Local_43.f_7 = "LOC_T44";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LegSqu"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F";
			}
			else
			{
				Local_43.f_7 = "LOC_T";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LosSF"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M47";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F48";
			}
			else
			{
				Local_43.f_7 = "LOC_T48";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LMesa"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M40";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F41";
			}
			else
			{
				Local_43.f_7 = "LOC_T41";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LosPuer"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F42";
			}
			else
			{
				Local_43.f_7 = "LOC_T42";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LosPFy"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M42";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F43";
			}
			else
			{
				Local_43.f_7 = "LOC_T43";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "LOSTMC"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F";
			}
			else
			{
				Local_43.f_7 = "LOC_T";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Mirr"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M50";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F51";
			}
			else
			{
				Local_43.f_7 = "LOC_T51";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Morn"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M52";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F53";
			}
			else
			{
				Local_43.f_7 = "LOC_T53";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Murri"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M56";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F57";
			}
			else
			{
				Local_43.f_7 = "LOC_T57";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "MTChil"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M53";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F54";
			}
			else
			{
				Local_43.f_7 = "LOC_T54";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "MTJose"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M55";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F56";
			}
			else
			{
				Local_43.f_7 = "LOC_T56";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "MTGordo"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M54";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F55";
			}
			else
			{
				Local_43.f_7 = "LOC_T55";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Movie"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M72";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F73";
			}
			else
			{
				Local_43.f_7 = "LOC_T73";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "NCHU"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M57";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F58";
			}
			else
			{
				Local_43.f_7 = "LOC_T58";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Noose"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F85";
			}
			else
			{
				Local_43.f_7 = "LOC_T85";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Oceana"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M60";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F61";
			}
			else
			{
				Local_43.f_7 = "LOC_T61";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Observ"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M30";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F31";
			}
			else
			{
				Local_43.f_7 = "LOC_T31";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Palmpow"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M64";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F65";
			}
			else
			{
				Local_43.f_7 = "LOC_T65";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "PBOX"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M66";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F67";
			}
			else
			{
				Local_43.f_7 = "LOC_T67";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "PBluff"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M59";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F60";
			}
			else
			{
				Local_43.f_7 = "LOC_T60";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Paleto"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M61";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F62";
			}
			else
			{
				Local_43.f_7 = "LOC_T62";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "PalCov"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M62";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F63";
			}
			else
			{
				Local_43.f_7 = "LOC_T63";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "PalFor"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M63";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F64";
			}
			else
			{
				Local_43.f_7 = "LOC_T64";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "PalHigh"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M65";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F66";
			}
			else
			{
				Local_43.f_7 = "LOC_T66";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "ProcoB"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M68";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F69";
			}
			else
			{
				Local_43.f_7 = "LOC_T69";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Prol"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M58";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F59";
			}
			else
			{
				Local_43.f_7 = "LOC_T59";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "RTRAK"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M71";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F72";
			}
			else
			{
				Local_43.f_7 = "LOC_T72";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Rancho"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M69";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F70";
			}
			else
			{
				Local_43.f_7 = "LOC_T70";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "RGLEN"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M74";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F75";
			}
			else
			{
				Local_43.f_7 = "LOC_T75";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Richm"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M73";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F74";
			}
			else
			{
				Local_43.f_7 = "LOC_T74";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Rockf"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M75";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F76";
			}
			else
			{
				Local_43.f_7 = "LOC_T76";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "SANDY"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M79";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F80";
			}
			else
			{
				Local_43.f_7 = "LOC_T80";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "TongvaH"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M87";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F88";
			}
			else
			{
				Local_43.f_7 = "LOC_T88";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "TongvaV"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M88";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F89";
			}
			else
			{
				Local_43.f_7 = "LOC_T89";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "East_V"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M23";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F24";
			}
			else
			{
				Local_43.f_7 = "LOC_T24";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Zenora"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M80";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F81";
			}
			else
			{
				Local_43.f_7 = "LOC_T81";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Slab"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M81";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F82";
			}
			else
			{
				Local_43.f_7 = "LOC_T82";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "SKID"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M51";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F52";
			}
			else
			{
				Local_43.f_7 = "LOC_T52";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "SLSant"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M82";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F83";
			}
			else
			{
				Local_43.f_7 = "LOC_T83";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Stad"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M49";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F50";
			}
			else
			{
				Local_43.f_7 = "LOC_T50";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Tatamo"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F85";
			}
			else
			{
				Local_43.f_7 = "LOC_T85";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Termina"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M85";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F86";
			}
			else
			{
				Local_43.f_7 = "LOC_T86";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "TEXTI"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M86";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F87";
			}
			else
			{
				Local_43.f_7 = "LOC_T87";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "WVine"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M99";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F100";
			}
			else
			{
				Local_43.f_7 = "LOC_T100";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "UtopiaG"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M89";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F90";
			}
			else
			{
				Local_43.f_7 = "LOC_T90";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Vesp"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M92";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F93";
			}
			else
			{
				Local_43.f_7 = "LOC_T93";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "VCana"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M94";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F95";
			}
			else
			{
				Local_43.f_7 = "LOC_T95";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Vine"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M95";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F96";
			}
			else
			{
				Local_43.f_7 = "LOC_T96";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "WMirror"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M98";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F99";
			}
			else
			{
				Local_43.f_7 = "LOC_T99";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "WindF"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M76";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F77";
			}
			else
			{
				Local_43.f_7 = "LOC_T77";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "Zancudo"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M100";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F101";
			}
			else
			{
				Local_43.f_7 = "LOC_T101";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "SanChia"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M78";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F79";
			}
			else
			{
				Local_43.f_7 = "LOC_T79";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "STRAW"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M83";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F84";
			}
			else
			{
				Local_43.f_7 = "LOC_T84";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "zQ_UAR"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M17";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F18";
			}
			else
			{
				Local_43.f_7 = "LOC_T18";
			}
			return;
		}
		if (MISC::ARE_STRINGS_EQUAL(Local_43.f_6, "ZP_ORT"))
		{
			if (iParam0 == 0)
			{
				Local_43.f_7 = "LOC_M67";
			}
			else if (iParam0 == 1)
			{
				Local_43.f_7 = "LOC_F68";
			}
			else
			{
				Local_43.f_7 = "LOC_T68";
			}
			return;
		}
		if (iParam0 == 0)
		{
			Local_43.f_7 = "LOC_M";
		}
		else if (iParam0 == 1)
		{
			Local_43.f_7 = "LOC_M";
		}
		else
		{
			Local_43.f_7 = "LOC_M";
		}
	}
	else if (iParam0 == 0)
	{
		Local_43.f_7 = "LOC_M";
	}
	else if (iParam0 == 1)
	{
		Local_43.f_7 = "LOC_F";
	}
	else
	{
		Local_43.f_7 = "LOC_T";
	}
}

char* func_181(int iParam0)//Position - 0x85A5
{
	char* sVar0;
	
	if (!MISC::IS_BIT_SET(uLocal_104, 10))
	{
		if (iLocal_41 == 0)
		{
			sLocal_1247 = "FBIPRAU";
		}
		else if (iLocal_41 == 1)
		{
			sLocal_1247 = "AHFAUD";
		}
		else if (iLocal_41 == 2)
		{
			sLocal_1247 = "FHFAUD";
		}
		if (iLocal_41 == 0)
		{
			if (iParam0 == 0)
			{
				sVar0 = "FBI_3_MDRPC";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "FBI_3_FDRPC";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "FBI_3_TDRPC";
			}
		}
		else if (iLocal_41 == 1)
		{
			if (iParam0 == 0)
			{
				sVar0 = "AH_MDRPC";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "AH_FDRPC";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "AH_TDRPC";
			}
		}
		else if (iLocal_41 == 2)
		{
			if (iParam0 == 0)
			{
				sVar0 = "FHP_PICKCM";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "FHP_PICKCF";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "FHP_PICKCT";
			}
		}
	}
	else
	{
		sLocal_1247 = "FHFAUD";
		if (iParam0 == 0)
		{
			sVar0 = "FHP_MOVEM";
		}
		else if (iParam0 == 1)
		{
			sVar0 = "FHP_MOVEF";
		}
		else if (iParam0 == 2)
		{
			sVar0 = "FHP_MOVET";
		}
	}
	return sVar0;
}

int func_182(var uParam0)//Position - 0x86B2
{
	switch (GlobalFunc_7733(uParam0, 1, 5, 0, 0))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			GlobalFunc_585(35, 0);
			GlobalFunc_6823(0);
			return 0;
			break;
		
		case 2:
			GlobalFunc_585(35, 1);
			return 0;
			break;
	}
	return 0;
}






int func_188()//Position - 0x8A9E
{
	if (MISC::IS_BIT_SET(uLocal_104, 0))
	{
		if (GlobalFunc_5201(iLocal_108))
		{
			if (GlobalFunc_791(12))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_190()//Position - 0x8B10
{
	if (MISC::IS_BIT_SET(uLocal_104, 0))
	{
		if (!MISC::IS_BIT_SET(uLocal_104, 11))
		{
			func_232(1);
		}
	}
	else if (MISC::IS_BIT_SET(uLocal_104, 11))
	{
		func_232(0);
	}
}

void func_191()//Position - 0x8B46
{
	int iVar0;
	int iVar1;
	
	if (((((((Global_34913 == 15 && iLocal_36 != 3) && MISC::IS_BIT_SET(uLocal_104, 5)) && !GlobalFunc_487()) && Global_68242 == -1) && !GlobalFunc_489()) && !GlobalFunc_39(9)) || GlobalFunc_485(35))
	{
		func_200();
		func_199();
		switch (iLocal_38)
		{
			case 0:
				if (MISC::IS_BIT_SET(uLocal_104, 17))
				{
					iVar0 = -1;
					while (iVar0 < (36 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_198(uLocal_100[0], &iVar0);
						}
					}
					MISC::CLEAR_BIT(&uLocal_104, 17);
				}
				else
				{
					iVar0 = 31;
					while (iVar0 < (46 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_198(uLocal_100[1], &iVar0);
						}
					}
					MISC::SET_BIT(&uLocal_104, 17);
				}
				break;
			
			case 1:
			case 2:
			case 3:
			case 4:
				func_193(iLocal_99, 1);
				break;
		}
	}
	else if (((((((Global_34913 != 15 || Global_34913 != 0) || Global_34913 != 2) || Global_34913 != 4) || Global_34913 != 17) || GlobalFunc_487()) || Global_68242 == -1) || Global_96408)
	{
		iVar1 = 0;
		if (GlobalFunc_784())
		{
			iVar1 = 1;
		}
		else if (Global_96408)
		{
			iVar1 = 2;
		}
		if (MISC::IS_BIT_SET(uLocal_100[GlobalFunc_772(iVar1)], iVar1))
		{
			func_193(iVar1, 0);
		}
	}
}


void func_193(int iParam0, bool bParam1)//Position - 0x8CED
{
	switch (iLocal_38)
	{
		case 1:
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_6824(GlobalFunc_8315())) && !GlobalFunc_488())
			{
				GlobalFunc_573(func_3(iParam0), 15000);
				iLocal_38 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_572(func_3(iParam0)))
			{
				fLocal_103 = 0f;
				iLocal_38 = 3;
			}
			else
			{
				fLocal_103 = (fLocal_103 + MISC::GET_FRAME_TIME());
				if (fLocal_103 >= 20f)
				{
					iLocal_38 = 4;
				}
				else if (MISC::IS_BIT_SET(uLocal_104, 15))
				{
					func_4(iParam0);
					MISC::CLEAR_BIT(&uLocal_104, 15);
					iLocal_38 = 4;
				}
			}
			break;
		
		case 3:
			if (!GlobalFunc_572(func_3(iParam0)))
			{
				if (fLocal_103 >= 7.5f || MISC::IS_BIT_SET(uLocal_104, 15))
				{
					func_4(iParam0);
					MISC::CLEAR_BIT(&uLocal_104, 15);
					iLocal_38 = 4;
				}
				else if (bParam1)
				{
					iLocal_38 = 0;
				}
				else
				{
					iLocal_38 = 1;
					fLocal_103 = 0f;
				}
			}
			else
			{
				fLocal_103 = (fLocal_103 + MISC::GET_FRAME_TIME());
			}
			break;
		
		case 4:
			fLocal_103 = 0f;
			iLocal_38 = 0;
			break;
	}
}





void func_198(var uParam0, int iParam1)//Position - 0x8F2F
{
	int iVar0;
	
	iVar0 = GlobalFunc_773(*iParam1);
	if (MISC::IS_BIT_SET(uParam0, iVar0))
	{
		if (!MISC::IS_BIT_SET(uLocal_104, 3))
		{
			iLocal_99 = *iParam1;
			iLocal_38 = 1;
			fLocal_103 = 0f;
			func_4(44);
			func_4(45);
			iLocal_1244 = MISC::GET_GAME_TIMER();
			*iParam1 = 46;
		}
		else if (14 == iVar0)
		{
			func_4(iVar0);
			*iParam1 = 46;
		}
		else
		{
			iLocal_99 = *iParam1;
			iLocal_38 = 1;
			fLocal_103 = 0f;
			*iParam1 = 46;
		}
	}
}

void func_199()//Position - 0x8FA1
{
	if (iLocal_36 == 0 || iLocal_36 == 1)
	{
		switch (iLocal_37)
		{
			case 0:
				if (GlobalFunc_663(func_3(3), 0, 0))
				{
					MISC::SET_BIT(&uLocal_104, 15);
					HUD::CLEAR_HELP(1);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					if (((((((!GlobalFunc_572(func_3(7)) && !GlobalFunc_572(func_3(8))) && !GlobalFunc_572(func_3(10))) && !GlobalFunc_572(func_3(11))) && !GlobalFunc_572(func_3(12))) && !GlobalFunc_572(func_3(13))) && !GlobalFunc_784()) && !Global_95996)
					{
						MISC::SET_BIT(&uLocal_104, 15);
						HUD::CLEAR_HELP(1);
					}
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				if (MISC::IS_BIT_SET(uLocal_104, 0))
				{
					if (iLocal_41 == 2)
					{
						if (iLocal_36 == 1)
						{
							if (GlobalFunc_5201(iLocal_108))
							{
								func_64(3);
								func_1(3, 1);
							}
						}
						iLocal_37 = 2;
					}
					else
					{
						if (GlobalFunc_5201(iLocal_108))
						{
							func_64(3);
							func_1(3, 1);
						}
						iLocal_37 = 2;
					}
				}
				else
				{
					iLocal_37 = 2;
				}
				break;
			
			case 2:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (GlobalFunc_572(func_3(3)))
					{
						MISC::SET_BIT(&uLocal_104, 15);
						HUD::CLEAR_HELP(1);
					}
					iLocal_37 = 0;
				}
				break;
			}
	}
}

void func_200()//Position - 0x90F9
{
	if ((((!GlobalFunc_485(func_98()) && !GlobalFunc_485(35)) && !GlobalFunc_6824(GlobalFunc_8315())) && !GlobalFunc_488()) && !GlobalFunc_687())
	{
		if (iLocal_1245 < 2 && (MISC::GET_GAME_TIMER() - iLocal_1244) > 480000)
		{
			if (iLocal_41 != 2)
			{
				func_64(44);
			}
			else
			{
				func_64(45);
			}
			iLocal_1245++;
		}
	}
}


void func_202()//Position - 0x919C
{
	if (GlobalFunc_236())
	{
		if (MISC::IS_BIT_SET(uLocal_104, 2))
		{
			if (GlobalFunc_5201(iLocal_108))
			{
				GlobalFunc_9815(iLocal_108, Local_109, fLocal_112, 25, 1);
				GlobalFunc_190(&iLocal_108);
			}
			MISC::CLEAR_BIT(&uLocal_104, 2);
		}
		func_1(46, 1);
		func_232(0);
	}
}

void func_203()//Position - 0x91E6
{
	if (!func_208())
	{
		if (!GlobalFunc_489())
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					func_205();
				}
			}
		}
	}
	else if (iLocal_36 != 3)
	{
		func_204();
	}
}

void func_204()//Position - 0x9227
{
	if (iLocal_36 != 4)
	{
		if (iLocal_36 != 2)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_95996)
			{
				MISC::SET_BIT(&uLocal_104, 15);
				HUD::CLEAR_HELP(1);
			}
			if (MISC::IS_BIT_SET(uLocal_104, 0))
			{
				if (GlobalFunc_5201(iLocal_108))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_108, 0);
				}
				GlobalFunc_190(&iLocal_108);
				func_148();
				if (iLocal_41 != 2)
				{
					Local_105 = { 0f, 0f, 0f };
				}
				MISC::CLEAR_BIT(&uLocal_104, 8);
			}
		}
		else if (MISC::IS_BIT_SET(uLocal_104, 0))
		{
			GlobalFunc_9815(iLocal_108, Local_109, fLocal_112, 25, 1);
			if (GlobalFunc_5201(iLocal_108))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_108, 0);
			}
			GlobalFunc_190(&iLocal_108);
			func_148();
		}
		if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5))
		{
			HUD::CLEAR_ADDITIONAL_TEXT(5, 0);
			MISC::CLEAR_BIT(&uLocal_104, 4);
			MISC::CLEAR_BIT(&uLocal_104, 5);
			func_232(0);
			if (GlobalFunc_784())
			{
				func_1(1, 1);
			}
			else
			{
				func_1(0, 1);
			}
		}
		iLocal_36 = 3;
	}
}

void func_205()//Position - 0x9306
{
	func_207();
	if (MISC::IS_BIT_SET(uLocal_104, 4))
	{
		if (!MISC::IS_BIT_SET(uLocal_104, 5) && !MISC::IS_BIT_SET(uLocal_104, 16))
		{
			HUD::REQUEST_ADDITIONAL_TEXT("GETAWY", 5);
			if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5))
			{
				MISC::SET_BIT(&uLocal_104, 5);
			}
			if (MISC::IS_BIT_SET(uLocal_104, 5))
			{
				func_206();
				iLocal_38 = 0;
				MISC::CLEAR_BIT(&uLocal_104, 7);
				MISC::CLEAR_BIT(&uLocal_104, 0);
				MISC::CLEAR_BIT(&uLocal_104, 1);
				if (GlobalFunc_572(func_3(0)))
				{
					HUD::CLEAR_HELP(1);
				}
				func_4(0);
				iLocal_36 = Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.FIB4_GETAWAY_STATE;
			}
		}
	}
}

void func_206()//Position - 0x939B
{
	if (!GlobalFunc_485(func_98()))
	{
		if (!MISC::IS_BIT_SET(uLocal_104, 12))
		{
			if (func_95())
			{
				if (iLocal_41 != 2)
				{
					func_64(44);
				}
				else
				{
					func_64(45);
				}
				MISC::SET_BIT(&uLocal_104, 12);
			}
		}
	}
}

void func_207()//Position - 0x93DF
{
	if (!HUD::IS_STREAMING_ADDITIONAL_TEXT(5))
	{
		MISC::SET_BIT(&uLocal_104, 4);
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_104, 4);
	}
}

int func_208()//Position - 0x9401
{
	if (iLocal_41 != 2)
	{
		if (iLocal_41 == 1 && GlobalFunc_8315() == 2)
		{
			if (!MISC::IS_BIT_SET(uLocal_104, 16))
			{
				MISC::SET_BIT(&uLocal_104, 16);
			}
			return 1;
		}
		else if (MISC::IS_BIT_SET(uLocal_104, 16))
		{
			MISC::CLEAR_BIT(&uLocal_104, 16);
		}
		if (func_209())
		{
			return 0;
		}
	}
	else if (GlobalFunc_485(35))
	{
		return 0;
	}
	else if (func_209())
	{
		return 0;
	}
	return 1;
}

int func_209()//Position - 0x9479
{
	if (((((Global_34913 == 15 && !GlobalFunc_487()) && Global_68242 == -1) && !GlobalFunc_784()) && !func_210(1112014848)) && !Global_96408)
	{
		return 1;
	}
	return 0;
}

int func_210(float fParam0)//Position - 0x94C7
{
	if (iLocal_41 == 1)
	{
		if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Global_Heist_Start_Locations[1 /*15*/], fParam0))
		{
			return 1;
		}
	}
	else if (iLocal_41 == 2)
	{
		if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Global_Heist_Start_Locations[0 /*15*/], fParam0))
		{
			return 1;
		}
	}
	else if (iLocal_41 == 0)
	{
		if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Global_Heist_Start_Locations[3 /*15*/], fParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_211()//Position - 0x9536
{
	if (!MISC::IS_BIT_SET(uLocal_104, 13))
	{
		if (GlobalFunc_9033())
		{
			MISC::SET_BIT(&uLocal_104, 13);
		}
	}
	else if (!GlobalFunc_9033())
	{
		MISC::CLEAR_BIT(&uLocal_104, 7);
		MISC::CLEAR_BIT(&uLocal_104, 0);
		MISC::CLEAR_BIT(&uLocal_104, 1);
		MISC::CLEAR_BIT(&uLocal_104, 13);
	}
}













void func_224(int iParam0)//Position - 0x9D07
{
	iLocal_41 = iParam0;
	if (iLocal_41 == 0)
	{
		sLocal_1247 = "FBIPRAU";
	}
	else if (iLocal_41 == 1)
	{
		sLocal_1247 = "AHFAUD";
	}
	else if (iLocal_41 == 2)
	{
		sLocal_1247 = "FHFAUD";
	}
	iLocal_167[0] = joaat("trash");
	iLocal_167[1] = joaat("towtruck");
	iLocal_167[2] = joaat("ambulance");
	iLocal_167[3] = joaat("barracks2");
	iLocal_167[4] = joaat("stretch");
	iLocal_167[5] = joaat("phantom");
	iLocal_167[6] = joaat("packer");
	iLocal_167[7] = joaat("blazer");
	iLocal_167[8] = joaat("blazer2");
	if (iLocal_41 != 0)
	{
		iLocal_167[9] = joaat("sentinel2");
	}
	else
	{
		iLocal_167[9] = 0;
	}
	func_227();
	func_225();
	MISC::SET_BIT(&uLocal_104, 17);
	iLocal_1244 = MISC::GET_GAME_TIMER();
}

void func_225()//Position - 0x9DCD
{
	sLocal_52[0] = "AM_H_FBIC1A";
	sLocal_52[1] = "AM_H_FBIC1B";
	sLocal_52[2] = "AM_H_FBIC1C";
	sLocal_52[3] = "PRC_WANT";
	sLocal_52[4] = "PRC_DROPOFF";
	sLocal_52[5] = "PRC_INVALVEH";
	sLocal_52[6] = "PRC_HEALTH";
	sLocal_52[7] = func_226(7);
	sLocal_52[8] = func_226(8);
	sLocal_52[9] = "PRC_USEFIRST";
	sLocal_52[10] = func_226(10);
	sLocal_52[11] = func_226(11);
	sLocal_52[13] = func_226(13);
	sLocal_52[12] = func_226(12);
	sLocal_52[14] = "PRC_UNUSE";
	sLocal_52[15] = "PRC_SEATS";
	sLocal_52[16] = "PRC_CBOBVAL";
	sLocal_52[17] = func_226(17);
	sLocal_52[18] = func_226(18);
	sLocal_52[20] = func_226(20);
	sLocal_52[21] = "PRC_PUBAREA";
	sLocal_52[22] = "PRC_LAWAREA";
	sLocal_52[23] = "PRC_RESAREA";
	sLocal_52[24] = "PRC_STOP";
	sLocal_52[25] = "PRC_OWNEDM";
	sLocal_52[26] = "PRC_OWNEDF";
	sLocal_52[27] = "PRC_OWNEDT";
	sLocal_52[28] = "PRC_SECROUTE";
	sLocal_52[29] = "PRC_CLOSELOT";
	sLocal_52[30] = "PRC_CLOSELES";
	sLocal_52[31] = "PRC_CLSAGNT";
	sLocal_52[32] = "PRC_CLOSESAFE_M";
	sLocal_52[33] = "PRC_CLOSESAFE_F";
	sLocal_52[34] = "PRC_CLOSESAFE_T";
	sLocal_52[35] = "PRC_PEDS";
	sLocal_52[36] = "PRC_WATER";
	sLocal_52[37] = "PRC_OBST";
	sLocal_52[38] = "PRC_OBSTVEH";
	sLocal_52[39] = "PRC_UPDWN";
	sLocal_52[40] = "PRC_NEARROAD";
	sLocal_52[41] = "PRC_ONROAD";
	sLocal_52[19] = "PRC_PLAN";
	sLocal_52[42] = "PRC_TOOSTEEP";
	sLocal_52[43] = "PRC_UNEVEN";
	sLocal_52[44] = "PRC_REMIND";
	sLocal_52[45] = "PRC_REMINDA";
}

char* func_226(int iParam0)//Position - 0x9FAA
{
	char* sVar0;
	
	if (iLocal_41 == 0)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFT";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEM";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARTF";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARM";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWM";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWTF";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACC";
		}
	}
	else if (iLocal_41 == 1)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEML";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCRFL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCRML";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWML";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWFL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFL";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITML";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	else if (iLocal_41 == 2)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	return sVar0;
}

void func_227()//Position - 0xA170
{
	sLocal_1224[0] = "ARMYB";
	sLocal_1224[1] = "AIRP";
	sLocal_1224[2] = "STAD";
	sLocal_1224[3] = "TERMINA";
	sLocal_1224[4] = "MOVIE";
	sLocal_1224[5] = "JAIL";
	sLocal_1224[6] = "OCEANA";
	sLocal_1224[7] = "GOLF";
	sLocal_1224[8] = "HORS";
	sLocal_1224[9] = "MTCHIL";
	sLocal_1224[10] = "MTGORDO";
	sLocal_1224[11] = "SANCHIA";
	sLocal_1224[12] = "TATAMO";
	Local_179[0 /*261*/][0 /*8*/] = { GlobalFunc_800("DELBE", -1615.257f, -952.5944f, 20.01716f, -2160.706f, -423f, -1.28679f, 327.8f) };
	Local_179[0 /*261*/][1 /*8*/] = { GlobalFunc_800("DELBE", -1521.716f, -914.5676f, 20.17247f, -1855.715f, -1325.784f, -44.79295f, 254.8f) };
	Local_179[0 /*261*/][2 /*8*/] = { GlobalFunc_800("BEACH", -1162.37f, -1815.008f, 15.33822f, -1553.207f, -1098.685f, 0.46467f, 253.91f) };
	Local_179[0 /*261*/][3 /*8*/] = { GlobalFunc_800("BEACH", -1464.219f, -1136.783f, 0.32167f, -2241.566f, -358.8849f, 20.32481f, 282.21f) };
	Local_179[0 /*261*/][4 /*8*/] = { GlobalFunc_800("PBOX", 156.4109f, -1042.641f, 22.31273f, 238.6382f, -821.1217f, 35.10069f, 176.96f) };
	Local_179[0 /*261*/][5 /*8*/] = { GlobalFunc_800("CHIL", 883.1121f, 534.7283f, 115.725f, 559.7425f, 644.602f, 150.5971f, 301.08f) };
	Local_179[0 /*261*/][6 /*8*/] = { GlobalFunc_800("EAST_V", 941.4531f, -329.4256f, 60.77003f, 727.7651f, -200.9519f, 75.59085f, 88.89f) };
	Local_179[0 /*261*/][7 /*8*/] = { GlobalFunc_800("EAST_V", 689.1177f, -273.1406f, 60.21559f, 834.7326f, -352.1655f, 50.92442f, 81.23f) };
	Local_179[0 /*261*/][8 /*8*/] = { GlobalFunc_800("MIRR", 1048.499f, -357.0332f, 60.92149f, 1401.581f, -783.8975f, 75.7477f, 325.93f) };
	Local_179[0 /*261*/][9 /*8*/] = { GlobalFunc_800("MIRR", 892.2836f, -461.5752f, 70.86029f, 1161.301f, -829.8299f, 45.90131f, 184.12f) };
	Local_179[0 /*261*/][10 /*8*/] = { GlobalFunc_800("VCANA", -1161.361f, -1143.716f, -5.71593f, -864.9714f, -981.1257f, 21.09691f, 328.65f) };
	Local_179[0 /*261*/][11 /*8*/] = { GlobalFunc_800("BAYTRE", 251.4011f, 1068.347f, 280.6663f, 189.6012f, 1272.352f, 143.8035f, 160.32f) };
	Local_179[0 /*261*/][13 /*8*/] = { GlobalFunc_800("OBSERV", -450.9835f, 1048.408f, 252.945f, -389.564f, 1244.504f, 370.2469f, 199.93f) };
	Local_179[0 /*261*/][14 /*8*/] = { GlobalFunc_800("AIRP", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_179[0 /*261*/][15 /*8*/] = { GlobalFunc_800("TERMINA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_179[0 /*261*/][16 /*8*/] = { GlobalFunc_800("STAD", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_179[0 /*261*/][17 /*8*/] = { GlobalFunc_800("MOVIE", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_179[0 /*261*/][18 /*8*/] = { GlobalFunc_800("GOLF", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_179[0 /*261*/][19 /*8*/] = { GlobalFunc_800("HORS", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_179[0 /*261*/][20 /*8*/] = { GlobalFunc_800("PBOX", -28.39781f, -1071.245f, 50.21438f, -49.8352f, -1131.277f, 20.02555f, 55.12f) };
	Local_179[0 /*261*/][21 /*8*/] = { GlobalFunc_800("LOSSF", 843.1962f, 25.93548f, 65.16061f, 1138.687f, 363.0587f, 105.4128f, 61.11f) };
	Local_179[0 /*261*/][22 /*8*/] = { GlobalFunc_800("ROCKF", -992.5638f, -199.7673f, 30.74956f, -687.9904f, -43.23445f, 80.93306f, 80.53f) };
	Local_179[0 /*261*/][23 /*8*/] = { GlobalFunc_800("ROCKF", -251.8548f, -446.2141f, 29.5887f, -362.685f, -434.7425f, 90.931f, 50f) };
	Local_179[0 /*261*/][24 /*8*/] = { GlobalFunc_800("ALTA", 180.2637f, -404.9771f, 40.1713f, 289.9432f, -445.1485f, 124.3793f, 100f) };
	Local_179[0 /*261*/][25 /*8*/] = { GlobalFunc_800("ALTA", 343.8481f, -323.1273f, 80.7749f, 427.08f, -361.0469f, 45.3411f, 85f) };
	Local_179[0 /*261*/][26 /*8*/] = { GlobalFunc_800("RANCHO", 414.5057f, -2092.1f, 19.8533f, 350.8093f, -2158.395f, 12.3916f, 55f) };
	Local_179[0 /*261*/][27 /*8*/] = { GlobalFunc_800("RANCHO", 283.7474f, -2103.918f, 12.9242f, 391.8871f, -1983.204f, 33.0042f, 100f) };
	Local_179[0 /*261*/][28 /*8*/] = { GlobalFunc_800("PBOX", 85.038f, -670.3274f, 42.8642f, 227.8234f, -722.2458f, 274f, 175f) };
	Local_179[0 /*261*/][29 /*8*/] = { GlobalFunc_800("PBOX", -107.2516f, -906.36f, 28.2051f, -49.9007f, -752.925f, 330f, 125f) };
	Local_179[0 /*261*/][30 /*8*/] = { GlobalFunc_800("TEXTI", 456.8563f, -683.8335f, 32.2903f, 457.5504f, -819.4669f, 25.9553f, 14.4f) };
	Local_179[0 /*261*/][31 /*8*/] = { GlobalFunc_800("ROCKF", -699.7205f, -227.3646f, 67.818f, -645.1068f, -332.5107f, 30.9132f, 127.1f) };
	Local_179[0 /*261*/].f_260 = 0;
	Local_179[0 /*261*/].f_257 = 32;
	Local_179[2 /*261*/][0 /*8*/] = { GlobalFunc_800("PBOX", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_179[2 /*261*/][1 /*8*/] = { GlobalFunc_800("DOWNT", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_179[2 /*261*/][2 /*8*/] = { GlobalFunc_800("COSI", 1426.934f, 1225.115f, 90.76305f, 1429.982f, 1006.831f, 120.6643f, 259.89f) };
	Local_179[2 /*261*/][3 /*8*/] = { GlobalFunc_800("COSI", 3503.56f, 3546.403f, 20.18748f, 3513.955f, 3875.795f, 72.94806f, 393.78f) };
	Local_179[2 /*261*/][4 /*8*/] = { GlobalFunc_800("SKID", 403.5404f, -864.4694f, 20.33799f, 396.3441f, -1127.325f, 35.49262f, 325.93f) };
	Local_179[2 /*261*/][5 /*8*/] = { GlobalFunc_800("JAIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_179[2 /*261*/][6 /*8*/] = { GlobalFunc_800("ARMYB", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_179[2 /*261*/].f_260 = 2;
	Local_179[2 /*261*/].f_257 = 7;
	Local_179[1 /*261*/][0 /*8*/] = { GlobalFunc_800("PALETO", -422.8618f, 6068.399f, 20.34662f, -282.7452f, 6206.324f, 50.46586f, 196.61f) };
	Local_179[1 /*261*/][1 /*8*/] = { GlobalFunc_800("ROCKF", -755.2506f, 147.4266f, 75.41048f, -1079.033f, 169.3806f, 50.46801f, 179.12f) };
	Local_179[1 /*261*/][2 /*8*/] = { GlobalFunc_800("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_179[1 /*261*/][3 /*8*/] = { GlobalFunc_800("ROCKF", -890.4999f, 431.1449f, 90.29848f, -875.3576f, 232.3266f, 60.20724f, 263.82f) };
	Local_179[1 /*261*/][4 /*8*/] = { GlobalFunc_800("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_179[1 /*261*/][5 /*8*/] = { GlobalFunc_800("ROCKF", -1198.183f, 638.6367f, 115.1066f, -444.509f, 750.9377f, 198.2971f, 473.88f) };
	Local_179[1 /*261*/][6 /*8*/] = { GlobalFunc_800("ROCKF", -844.4075f, 400.9413f, 80.433f, -109.5311f, 420.5014f, 120.2088f, 256.03f) };
	Local_179[1 /*261*/][7 /*8*/] = { GlobalFunc_800("ROCKF", -518.6213f, 648.8265f, 130.9352f, -64.0709f, 582.4504f, 215.3084f, 162.72f) };
	Local_179[1 /*261*/][8 /*8*/] = { GlobalFunc_800("RICHM", -934.9802f, 349.6101f, 85.77298f, -1432.451f, 269.9804f, 50.7303f, 185.03f) };
	Local_179[1 /*261*/][9 /*8*/] = { GlobalFunc_800("RICHM", -1633.813f, -69.53224f, 65.10236f, -1446.823f, 69.71544f, 48.23926f, 214.92f) };
	Local_179[1 /*261*/][10 /*8*/] = { GlobalFunc_800("RICHM", -1732.258f, 444.1353f, 130.1258f, -2065.69f, 412.2121f, 98.09863f, 175.17f) };
	Local_179[1 /*261*/][11 /*8*/] = { GlobalFunc_800("RICHM", -1618.036f, 50.95197f, 70.95364f, -1396.514f, 221.1004f, 50.84464f, 161.61f) };
	Local_179[1 /*261*/][12 /*8*/] = { GlobalFunc_800("RICHM", -1801.285f, 106.8786f, 72.12892f, -1541.74f, 263.3738f, 50.44112f, 155.88f) };
	Local_179[1 /*261*/][13 /*8*/] = { GlobalFunc_800("PELUFF", -2208.563f, 146.4101f, 150.9325f, -2350.122f, 486.6066f, 200.5952f, 299.18f) };
	Local_179[1 /*261*/][14 /*8*/] = { GlobalFunc_800("PELUFF", -1852.326f, 134.4172f, 70.06226f, -1994.387f, 299.6283f, 100.9652f, 182.04f) };
	Local_179[1 /*261*/][15 /*8*/] = { GlobalFunc_800("CHIL", -1982.67f, 505.9648f, 100.9364f, -1918.843f, 713.6382f, 150.7395f, 168.9f) };
	Local_179[1 /*261*/][16 /*8*/] = { GlobalFunc_800("CHIL", -1455.751f, 887.3351f, 191.9757f, -1663.207f, 767.3684f, 160.8108f, 239.65f) };
	Local_179[1 /*261*/][17 /*8*/] = { GlobalFunc_800("CHIL", -1570.222f, 508.2056f, 140.3884f, -808.9532f, 526.4333f, 90.18556f, 238.43f) };
	Local_179[1 /*261*/][18 /*8*/] = { GlobalFunc_800("CHIL", 242.6204f, 583.5905f, 159.4043f, 268.0424f, 827.4494f, 201.6953f, 105.09f) };
	Local_179[1 /*261*/][19 /*8*/] = { GlobalFunc_800("CHIL", -21.10285f, 706.8648f, 150.7263f, -210.4382f, 1056.276f, 280.3182f, 290.15f) };
	Local_179[1 /*261*/][20 /*8*/] = { GlobalFunc_800("RGLEN", -1837.538f, 774.2984f, 120.5629f, -1765.842f, 831.0044f, 160.3584f, 68.09f) };
	Local_179[1 /*261*/][21 /*8*/] = { GlobalFunc_800("DIVINE", -372.0849f, 372.7183f, 100.6043f, 390.2198f, 532.5167f, 180.538f, 305.88f) };
	Local_179[1 /*261*/].f_260 = 1;
	Local_179[1 /*261*/].f_257 = 22;
	Local_179[3 /*261*/][0 /*8*/] = { GlobalFunc_800("MTCHIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_179[3 /*261*/][1 /*8*/] = { GlobalFunc_800("MTGORDO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_179[3 /*261*/][2 /*8*/] = { GlobalFunc_800("SANCHIA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_179[3 /*261*/][3 /*8*/] = { GlobalFunc_800("TATAMO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_179[3 /*261*/][4 /*8*/] = { GlobalFunc_800("ELYSIAN", 531.2397f, -3019.267f, 50f, 530.1656f, -3393.623f, -22.4165f, 210f) };
	Local_179[3 /*261*/][5 /*8*/] = { GlobalFunc_800("ELYSIAN", 569.1023f, -2913.018f, 15.891f, 420.8226f, -2912.775f, -15.0372f, 25f) };
	Local_179[3 /*261*/][6 /*8*/] = { GlobalFunc_800("ELYSIAN", 495.1012f, -2833.175f, 5.164f, 460.1983f, -2813.528f, 0.4269f, 12f) };
	Local_179[3 /*261*/][7 /*8*/] = { GlobalFunc_800("ELYSIAN", 675.2973f, -2747.45f, 4.952f, 689.2358f, -2747.396f, 10.9001f, 4.3f) };
	Local_179[3 /*261*/][8 /*8*/] = { GlobalFunc_800("CYPRE", 533.437f, -2693.279f, 17.4952f, 588.6345f, -2693.462f, 5.3007f, 15f) };
	Local_179[3 /*261*/][9 /*8*/] = { GlobalFunc_800("CYPRE", 534.9656f, -2699.136f, 4.9004f, 560.1779f, -2662.192f, 9.0007f, 15f) };
	Local_179[3 /*261*/][10 /*8*/] = { GlobalFunc_800("CYPRE", 583.903f, -2689.207f, 16.9771f, 549.8469f, -2665.318f, 3.9007f, 17.3f) };
	Local_179[3 /*261*/][11 /*8*/] = { GlobalFunc_800("CYPRE", 683.428f, -2635.134f, 9.3367f, 694.4725f, -2679.66f, 4.7815f, 10f) };
	Local_179[3 /*261*/][12 /*8*/] = { GlobalFunc_800("CYPRE", 695.2171f, -2694.769f, 5.9815f, 695.5035f, -2679.168f, 4.8365f, 10f) };
	Local_179[3 /*261*/][13 /*8*/] = { GlobalFunc_800("CYPRE", 731.7991f, -2659.58f, 4.7713f, 732.5307f, -2678.4f, 10.5065f, 25f) };
	Local_179[3 /*261*/][14 /*8*/] = { GlobalFunc_800("ELYSIAN", 86.1885f, -2430.696f, -0.1888f, 119.1515f, -2453.121f, 2.8614f, 13f) };
	Local_179[3 /*261*/][15 /*8*/] = { GlobalFunc_800("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_179[3 /*261*/][16 /*8*/] = { GlobalFunc_800("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_179[3 /*261*/][17 /*8*/] = { GlobalFunc_800("ELYSIAN", 283.1514f, -2456.777f, 19.4609f, 290.2325f, -2403.611f, 4.2465f, 20.5f) };
	Local_179[3 /*261*/][18 /*8*/] = { GlobalFunc_800("ELYSIAN", 266.0341f, -2446.724f, 19.4623f, 308.3783f, -2414.544f, 4.5423f, 20.5f) };
	Local_179[3 /*261*/][19 /*8*/] = { GlobalFunc_800("ELYSIAN", 303.5269f, -2451.446f, 19.4091f, 270.9798f, -2409.452f, 4.4609f, 20.5f) };
	Local_179[3 /*261*/][20 /*8*/] = { GlobalFunc_800("RANCHO", 515.026f, -1653.54f, 37.2615f, 582.571f, -1577.825f, 26.3365f, 100f) };
	Local_179[3 /*261*/][21 /*8*/] = { GlobalFunc_800("BURTON", -150.7403f, -419.0541f, 28.6163f, -52.8669f, -453.5552f, 39.4051f, 100f) };
	Local_179[3 /*261*/][22 /*8*/] = { GlobalFunc_800("SanAnd", 50.2035f, -470.7132f, 36.9003f, 102.0394f, -322.0089f, 115f, 130f) };
	Local_179[3 /*261*/][23 /*8*/] = { GlobalFunc_800("ALTA", 499.1769f, -241.2495f, 47.3462f, 393.5317f, -205.7358f, 79.3132f, 120f) };
	Local_179[3 /*261*/][24 /*8*/] = { GlobalFunc_800("DTVINE", 422.3247f, 62.118f, 113.2905f, 478.494f, 43.322f, 83.4541f, 80f) };
	Local_179[3 /*261*/][25 /*8*/] = { GlobalFunc_800("DTVINE", 385.4908f, 56.1423f, 159.58f, 332.458f, -87.6805f, 63.3657f, 80f) };
	Local_179[3 /*261*/][26 /*8*/] = { GlobalFunc_800("DTVINE", 213.6192f, 90.2228f, 98.9357f, 203.3067f, 61.8088f, 86.9197f, 60f) };
	Local_179[3 /*261*/][27 /*8*/] = { GlobalFunc_800("DTVINE", 192.813f, -14.9451f, 85.3158f, 149.2689f, 0.6803f, 67.0343f, 40f) };
	Local_179[3 /*261*/][28 /*8*/] = { GlobalFunc_800("WVINE", 16.1659f, 61.8685f, 70.8467f, -17.1751f, 74.3771f, 76.88f, 4.5f) };
	Local_179[3 /*261*/][29 /*8*/] = { GlobalFunc_800("WVINE", -86.5425f, 84.8701f, 80.2147f, -50.4826f, 67.7335f, 70.297f, 20f) };
	Local_179[3 /*261*/][30 /*8*/] = { GlobalFunc_800("ELGORL", 3449.839f, 5173.981f, 0.0662f, 3412.309f, 5166.89f, 14.8342f, 33.7f) };
	Local_179[3 /*261*/].f_260 = 3;
	Local_179[3 /*261*/].f_257 = 31;
	if (GlobalFunc_5228(PLAYER::PLAYER_PED_ID()))
	{
		sLocal_1238 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
}


void func_229(int iParam0, bool bParam1)//Position - 0xB4D5
{
	if (GlobalFunc_5201(iLocal_108))
	{
		GlobalFunc_190(&iLocal_108);
	}
	if (!bParam1)
	{
		GlobalFunc_492(iParam0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}


void func_231()//Position - 0xB557
{
	if (GlobalFunc_485(35))
	{
		GlobalFunc_585(35, 0);
		GlobalFunc_54(&uLocal_1414);
	}
	GlobalFunc_846(&uLocal_1413);
}

void func_232(bool bParam0)//Position - 0xB57D
{
	char* sVar0;
	
	if (bParam0)
	{
		sVar0 = "PRC_MARK";
		if (iLocal_41 == 2)
		{
			sVar0 = "PRC_MARKVEH";
			GlobalFunc_808(sVar0);
		}
		else if (iLocal_41 == 0)
		{
			if (GlobalFunc_8315() == 0)
			{
				GlobalFunc_807(sVar0);
				GlobalFunc_806(sVar0);
			}
			else if (GlobalFunc_8315() == 1)
			{
				GlobalFunc_805(sVar0);
			}
			else
			{
				GlobalFunc_805(sVar0);
			}
		}
		else if (iLocal_41 == 1)
		{
			if (GlobalFunc_8315() == 0)
			{
				GlobalFunc_807(sVar0);
				GlobalFunc_808(sVar0);
			}
			else if (GlobalFunc_8315() == 1)
			{
				GlobalFunc_805(sVar0);
				GlobalFunc_808(sVar0);
			}
			else
			{
				GlobalFunc_805(sVar0);
				GlobalFunc_808(sVar0);
			}
		}
		MISC::SET_BIT(&uLocal_104, 11);
	}
	else if (MISC::IS_BIT_SET(uLocal_104, 11))
	{
		GlobalFunc_804();
		GlobalFunc_803();
		GlobalFunc_802();
		GlobalFunc_801();
		MISC::CLEAR_BIT(&uLocal_104, 11);
	}
}















