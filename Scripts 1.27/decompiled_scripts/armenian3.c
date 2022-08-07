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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[5] = { 0, 0, 0, 0, 0 };
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 21;
	var uLocal_82 = 6;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	int iLocal_104 = 0;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_108 = { 0, 0, 0 } ;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	struct<3> Local_117 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	struct<3> Local_123 = { 0, 0, 0 } ;
	struct<3> Local_126 = { 0, 0, 0 } ;
	struct<3> Local_129 = { 0, 0, 0 } ;
	struct<3> Local_132 = { 0, 0, 0 } ;
	struct<3> Local_135 = { 0, 0, 0 } ;
	struct<3> Local_138 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	struct<6> Local_144 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_150 = NULL;
	char* sLocal_151 = NULL;
	char* sLocal_152 = NULL;
	char* sLocal_153 = NULL;
	char* sLocal_154 = NULL;
	char* sLocal_155 = NULL;
	char* sLocal_156 = NULL;
	char* sLocal_157 = NULL;
	char* sLocal_158 = NULL;
	var uLocal_159 = 0;
	struct<3> Local_160 = { 0, 0, 0 } ;
	struct<3> Local_163 = { 0, 0, 0 } ;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181[5] = { 0, 0, 0, 0, 0 };
	int iLocal_187[2] = { 0, 0 };
	int iLocal_190[2] = { 0, 0 };
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
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	var uLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	struct<7> Local_231[7];
	int iLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	int iLocal_285 = 0;
	var uLocal_286 = 0;
	int iLocal_287[3] = { 0, 0, 0 };
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 3;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 1092616192;
	var uLocal_306 = 1101004800;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 3;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = -1;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 1000;
	var uLocal_333 = 1000;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339[4] = { 0, 0, 0, 0 };
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	char[] cLocal_346[8] = 0;
	int iLocal_347[120] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_468 = 0;
	int iLocal_469[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_490[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_521[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_542[4] = { 0, 0, 0, 0 };
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 4;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 4;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 4;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 4;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 4;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 4;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 16;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	bool bLocal_751 = 0;
	float fLocal_752 = 0f;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	char* sLocal_755 = NULL;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	bool bLocal_758 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
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
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_59 = -1;
	iLocal_61 = -1;
	iLocal_64 = 1000;
	fLocal_65 = 1000f;
	fLocal_66 = 1000f;
	Local_105 = { 0f, 0f, 0f };
	Local_108 = { -43.6345f, -1110.605f, 25.9582f };
	Local_111 = { 0f, 0f, 178.9958f };
	Local_114 = { -63.0336f, -1107.35f, 25.3198f };
	Local_117 = { -818.4653f, 180.4985f, 71.5139f };
	Local_120 = { -806.9441f, 171.6912f, 75.3206f };
	Local_123 = { -803.2621f, 176.0598f, 75.7406f };
	Local_126 = { -797.7103f, 181.8636f, 72.7925f };
	Local_129 = { -798.1318f, 181.0491f, 72.7808f };
	Local_132 = { -811.1514f, 187.6124f, 71.4744f };
	Local_135 = { -846.1608f, 158.1691f, 65.7346f };
	Local_138 = { -60.3707f, -1098.992f, 25.4262f };
	sLocal_150 = "missarmenian3";
	sLocal_151 = "missarmenian3mcs2";
	sLocal_152 = "missarmenian3leadinoutArmenian_3_int";
	sLocal_153 = "missarmenian3mcs_1a";
	sLocal_154 = "missarmenian3@simeon_tauntsidle_b";
	sLocal_155 = "MOVE_M@LEAF_BLOWER";
	sLocal_156 = "missarmenian3_gardener";
	sLocal_157 = "missarmenian3_tryopendoor";
	sLocal_158 = "missarmenian3leadinoutarm3_mcs_8";
	Local_160 = { -802.411f, 166.269f, 70.557f };
	Local_163 = { 0f, 0f, 20.64f };
	iLocal_221 = -1223666875;
	iLocal_222 = 1850241841;
	iLocal_223 = -378388578;
	iLocal_224 = 1893421006;
	iLocal_225 = -1887701248;
	iLocal_226 = -1831288286;
	iLocal_227 = -96283321;
	iLocal_228 = -293141277;
	iLocal_229 = 506750037;
	iLocal_230 = -1978427516;
	iLocal_281 = -1;
	iLocal_285 = -1;
	iLocal_291 = joaat("prop_controller_01");
	iLocal_292 = joaat("prop_headset_01");
	iLocal_293 = joaat("prop_tennis_rack_01");
	iLocal_294 = joaat("p_tennis_bag_01_s");
	iLocal_295 = joaat("weapon_pistol");
	cLocal_346 = "ARM3AUD";
	bLocal_751 = true;
	fLocal_752 = 1E-06f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_780();
		func_775(0);
	}
	MISC::SET_MISSION_FLAG(1);
	if (!GlobalFunc_Is_Mission_Retry())
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_177))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_177 = GlobalFunc_2251();
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_177) && !ENTITY::IS_ENTITY_DEAD(iLocal_177))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_177, 1);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_177, 1, 1);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_177, 1);
					}
				}
			}
		}
	}
	if (!Global_86864.f_357)
	{
		if (!GlobalFunc_Is_Mission_Retry())
		{
			bLocal_93 = false;
			while (!func_747(2, &uLocal_74, 0, 1, 0, 1, 0))
			{
				bLocal_93 = true;
				SYSTEM::WAIT(0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
		{
			iLocal_174 = Global_86864.f_9[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_174, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
	{
		if (!PED::IS_PED_INJURED(Global_86864.f_9[1]))
		{
			iLocal_176 = Global_86864.f_9[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_176, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_86864[0]))
		{
			iLocal_180 = Global_86864[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_180, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_86864[1]))
		{
			iLocal_187[0] = Global_86864[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_187[0], 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_86864[2]))
		{
			iLocal_187[1] = Global_86864[2];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_187[1], 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[3]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_86864[3]))
		{
			iLocal_181[0] = Global_86864[3];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_181[0], 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[4]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_86864[4]))
		{
			iLocal_181[1] = Global_86864[4];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_181[1], 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[5]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_86864[5]))
		{
			iLocal_181[2] = Global_86864[5];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_181[2], 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[6]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_86864[6]))
		{
			iLocal_181[3] = Global_86864[6];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_181[3], 1, 1);
		}
	}
	GlobalFunc_562(2);
	if (!GlobalFunc_Is_Mission_Retry())
	{
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			GlobalFunc_8316(1, 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_174) && !PED::IS_PED_INJURED(iLocal_174))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_174, "Siemon", 0, GlobalFunc_4946(18), 0);
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Siemon", 2, GlobalFunc_4946(18), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_176) && !PED::IS_PED_INJURED(iLocal_176))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_176, "customer", 0, joaat("a_m_m_bevhills_02"), 0);
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "customer", 2, joaat("a_m_m_bevhills_02"), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_180) && !ENTITY::IS_ENTITY_DEAD(iLocal_180))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_180, "Showroom_Car", 0, joaat("premier"), 0);
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Showroom_Car", 2, joaat("premier"), 0);
			}
			CUTSCENE::START_CUTSCENE(0);
			SYSTEM::WAIT(0);
			GlobalFunc_10063(-36.44376f, -1114.313f, 24.93915f, -58.57041f, -1111.052f, 37.43576f, 20f, -58.3923f, -1114.561f, 25.4358f, 74.8206f, GlobalFunc_625(), 1, 1, 1, 0, 0);
			if (bLocal_93)
			{
				GlobalFunc_9140(&uLocal_74, 0, 0, 2000, 1, 1, 0, 1);
				iLocal_94 = 1;
			}
			MISC::CLEAR_AREA(-47.07522f, -1114.476f, 25.43581f, 7.5f, 1, 0, 0, 0);
			MISC::CLEAR_AREA(-40.14164f, -1113.714f, 25.43738f, 5f, 1, 0, 0, 0);
			MISC::CLEAR_AREA(-57.75611f, -1112.769f, 25.43581f, 10f, 1, 0, 0, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-801.0658f, 187.0313f, 71.60547f, -797.8655f, 178.3436f, 74.83471f, 9f, 0, 0, 1);
			CAM::STOP_GAMEPLAY_HINT(1);
			func_725();
			iLocal_101 = 1;
		}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_Complications", 0);
		func_721();
		func_719();
		if (bLocal_93)
		{
			if (!GlobalFunc_Is_Mission_Retry())
			{
				if (iLocal_94 == 0)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						GlobalFunc_9140(&uLocal_74, 0, 0, 2000, 1, 1, 0, 1);
						iLocal_94 = 1;
					}
				}
			}
			else
			{
				iLocal_94 = 1;
			}
		}
		if (func_718("ARM3_GUN"))
		{
			if (iLocal_336 >= 7 && iLocal_336 <= 10)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -856.008f, 170.521f, 56.53983f, -764.7679f, 168.5071f, 86.73279f, 45f, 0, 1, 0))
		{
			if (iLocal_206 == 0)
			{
				iLocal_206 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
			}
			else if (iLocal_90 == 0)
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_206);
				if (!INTERIOR::IS_INTERIOR_READY(iLocal_206))
				{
				}
				else
				{
					iLocal_90 = 1;
				}
			}
			ENTITY::CREATE_MODEL_HIDE(-802.73f, 167.5f, 77.58f, 1f, joaat("v_ilev_mm_windowwc"), 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_208))
			{
				if (func_715(joaat("v_ilev_mm_windowwc")))
				{
					MISC::CLEAR_AREA(-801.9f, 167.7f, 76.3f, 10f, 1, 0, 0, 0);
					iLocal_208 = OBJECT::CREATE_OBJECT(joaat("v_ilev_mm_windowwc"), -801.9f, 167.7f, 76.3f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_208, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_windowwc"));
				}
			}
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_221))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_221, joaat("v_ilev_mm_doorw"), -804.95f, 171.86f, 76.89f, 1, 1, 0);
			}
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_222))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_222, joaat("v_ilev_mm_doorson"), -806.77f, 174.02f, 76.89f, 1, 1, 0);
			}
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_223))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_223, joaat("v_ilev_mm_doordaughter"), -802.7f, 176.18f, 76.89f, 1, 1, 0);
			}
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_224))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_224, joaat("v_ilev_mm_doorw"), -809.28f, 177.86f, 76.89f, 1, 1, 0);
			}
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_225))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_225, joaat("v_ilev_mm_door"), -806.28f, 186.02f, 72.62f, 1, 1, 0);
			}
			if (iLocal_336 <= 7)
			{
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_221))
				{
					if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_221) != -1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_221) != 4)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_221, -1f, 0, 0);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_221, 4, 0, 1);
					}
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_222))
				{
					if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_222) != -1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_222) != 4)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_222, -1f, 0, 0);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_222, 4, 0, 1);
					}
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_223))
				{
					if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_223) != 1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_223) != 4)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_223, 1f, 0, 0);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_223, 4, 0, 1);
					}
				}
				if (!func_718("GarageDoorLockedSkip"))
				{
					if (!func_718("DoorLocked"))
					{
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_225))
						{
							if ((OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_225) < (-0.4f - 0.05f) || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_225) > (-0.4f + 0.05f)) || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_225) != 4)
							{
								fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_225);
								if (fVar0 < -0.4f)
								{
									fVar0 = (fVar0 + (0.1f * SYSTEM::TIMESTEP()));
								}
								else if (fVar0 > -0.4f)
								{
									fVar0 = (fVar0 + (-0.1f * SYSTEM::TIMESTEP()));
								}
								OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_225, fVar0, 0, 0);
								OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_225, 4, 0, 1);
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.8881f, 183.7755f, 71.3478f, -805.1901f, 184.4428f, 73.8478f, 3.5f, 0, 1, 0))
						{
							func_712("DoorLocked", 1);
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.4023f, 189.0046f, 71.47892f, -815.2882f, 185.9782f, 74.95445f, 6.5f, 0, 1, 0))
					{
						if (func_711(4, joaat("v_ilev_mm_door"), -806.28f, 186.02f, 72.62f, 1, 1045220557, 1008981770, 0, 0))
						{
							func_712("GarageDoorSmoothClosed", 1);
						}
						else
						{
							func_712("GarageDoorSmoothClosed", 0);
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.959f, 186.0461f, 70.97479f, -804.7082f, 180.1842f, 74.3478f, 7f, 0, 1, 0))
					{
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_225))
						{
							if ((OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_225) < (-0.4f - 0.05f) || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_225) > (-0.4f + 0.05f)) || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_225) != 4)
							{
								fVar1 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_225);
								if (fVar1 < -0.4f)
								{
									fVar1 = (fVar1 + (0.1f * SYSTEM::TIMESTEP()));
								}
								else if (fVar1 > -0.4f)
								{
									fVar1 = (fVar1 + (-0.1f * SYSTEM::TIMESTEP()));
								}
								OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_225, fVar1, 0, 0);
								OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_225, 3, 0, 1);
							}
						}
					}
					else if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_225))
					{
						if ((OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_225) < (-0.4f - 0.05f) || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_225) > (-0.4f + 0.05f)) || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_225) != 4)
						{
							fVar2 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_225);
							if (fVar2 < -0.4f)
							{
								fVar2 = (fVar2 + (0.1f * SYSTEM::TIMESTEP()));
							}
							else if (fVar2 > -0.4f)
							{
								fVar2 = (fVar2 + (-0.1f * SYSTEM::TIMESTEP()));
							}
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_225, fVar2, 0, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_225, 4, 0, 1);
						}
					}
				}
				else if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_225))
				{
					if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_225) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_225) != 4)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_225, 0f, 0, 0);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_225, 4, 0, 1);
					}
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_224))
				{
					if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_224) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_224) != 4)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_224, 0f, 0, 0);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_224, 4, 0, 1);
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -864.316f, 170.8105f, 56.56639f, -757.0574f, 167.8198f, 77.38649f, 55f, 0, 1, 0))
		{
			if (iLocal_206 != 0)
			{
				if (iLocal_90 == 1)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_206);
					iLocal_90 = 0;
				}
			}
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_226))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_226, joaat("v_ilev_fib_door1"), -31.72f, -1101.85f, 26.57f, 1, 1, 0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_227))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_227, joaat("v_ilev_fib_door1"), -33.81f, -1107.58f, 26.57f, 1, 1, 0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_228))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_228, joaat("v_ilev_csr_door_l"), -59.89f, -1092.95f, 26.88f, 1, 1, 0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_229))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_229, joaat("v_ilev_csr_door_r"), -60.55f, -1094.75f, 26.89f, 1, 1, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_226))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_226) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_226) != 4)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_226, 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_226, 4, 0, 1);
			}
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_227))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_227) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_227) != 4)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_227, 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_227, 4, 0, 1);
			}
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_228))
		{
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_228) != 3)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_228, 3, 0, 1);
			}
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_229))
		{
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_229) != 3)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_229, 3, 0, 1);
			}
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_230))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_230, joaat("prop_bh1_48_gate_1"), -8489343f, 179.3079f, 70.0247f, 1, 1, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_230))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_230) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_230) != 4)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_230, 0f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_230, 4, 0, 1);
			}
		}
		if (Local_231[0 /*7*/].f_5 != -2097039789)
		{
			Local_231[0 /*7*/] = { GlobalFunc_511(38) };
			Local_231[1 /*7*/] = { GlobalFunc_511(39) };
			Local_231[2 /*7*/] = { GlobalFunc_511(41) };
			Local_231[3 /*7*/] = { GlobalFunc_511(42) };
			Local_231[4 /*7*/] = { GlobalFunc_511(43) };
			Local_231[5 /*7*/] = { GlobalFunc_511(44) };
			Local_231[6 /*7*/] = { GlobalFunc_511(46) };
		}
		iVar3 = 0;
		while (iVar3 < Local_231)
		{
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_231[iVar3 /*7*/].f_5))
			{
				if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Local_231[iVar3 /*7*/].f_5) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Local_231[iVar3 /*7*/].f_5) != 4)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_231[iVar3 /*7*/].f_5, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_231[iVar3 /*7*/].f_5, 4, 0, 1);
				}
			}
			iVar3++;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -160.9063f, -1036.916f, 41.27324f, 95.39471f, -1132.606f, 18.23477f, 280f, 0, 1, 0) || (iLocal_336 >= 8 && iLocal_336 <= 9))
		{
			if (iLocal_207 == 0)
			{
				iLocal_207 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_138, "v_carshowroom");
			}
			else if (iLocal_91 == 0)
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_207);
				if (!INTERIOR::IS_INTERIOR_READY(iLocal_207))
				{
				}
				else
				{
					iLocal_91 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -255.9818f, -1028.399f, 42.45829f, 135.9063f, -1172.973f, 21.36604f, 280f, 0, 1, 0))
		{
			if (iLocal_207 != 0)
			{
				if (iLocal_91 == 1)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_207);
					iLocal_91 = 0;
				}
			}
		}
		if (iLocal_207 != 0)
		{
			if (iLocal_336 > 7)
			{
				if (!func_718("ShowroomShutter"))
				{
					GlobalFunc_7621(179, 1, 1, 1, 0);
					func_712("ShowroomShutter", 1);
				}
			}
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_206)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.7543f, 167.4378f, 75.59586f, -804.5815f, 172.115f, 79.2408f, 3f, 0, 1, 0))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			}
		}
		if (((((MISC::IS_BULLET_IN_BOX(-850.43f, 139.94f, 61.96f, -770.38f, 191.25f, 74.2f, 1) && !PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) && func_704(PLAYER::PLAYER_PED_ID())) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -848.4577f, 168.8738f, 58.59357f, -768.443f, 168.8347f, 93.19075f, 55f)) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_178) && !ENTITY::IS_ENTITY_DEAD(iLocal_178)) && VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iLocal_178)))
		{
			iLocal_337 = 17;
			func_691();
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_690(0)))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(func_690(0), 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_690(1)))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(func_690(1), 0);
		}
		if (iLocal_89 == 0 || iLocal_754 == 1)
		{
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
		}
		else
		{
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
		}
		if (iLocal_336 == 2 || iLocal_336 == 3)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -843.0493f, 172.7284f, 68.7735f, 150f, 150f, 150f, 0, 1, 0))
			{
				if (func_715(joaat("s_m_m_gardener_01")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_175))
					{
						func_689(&iLocal_175, joaat("s_m_m_gardener_01"), -835.3764f, 184.7189f, 70.8434f, 331.4128f, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_gardener_01"));
						ENTITY::SET_ENTITY_HEALTH(iLocal_175, 101);
						PED::SET_PED_MAX_HEALTH(iLocal_175, 101);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_175, 0, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_175, 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_175, 4, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_175, 8, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_175, 10, 2, 0, 0);
						PED::SET_PED_PROP_INDEX(iLocal_175, 0, 0, 1, false);
						PED::_BLOCK_PED_DEAD_BODY_SHOCKING_EVENTS(iLocal_175, 1);
						PED::SET_PED_HEARING_RANGE(iLocal_175, 10f);
						GlobalFunc_2249(iLocal_175, 40f, 10f, 30f, -80f, 80f);
						PED::SET_PED_CONFIG_FLAG(iLocal_175, 42, 1);
						GlobalFunc_173(&uLocal_586, 2, iLocal_175, "GARDENER", 0, 1);
						iLocal_217 = OBJECT::CREATE_OBJECT(joaat("prop_leaf_blower_01"), -837.1777f, 181.6656f, 70.1302f, 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_217, iLocal_175, PED::GET_PED_BONE_INDEX(iLocal_175, 28422), Local_105, Local_105, 0, 0, 0, 0, 2, 1);
					}
					else
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_217))
						{
							if (iLocal_285 == -1)
							{
								if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("GARDEN_LEAF_BLOWER", 0))
								{
									iLocal_285 = AUDIO::GET_SOUND_ID();
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_285, "GARDENING_LEAFBLOWER_ANIM_TRIGGERED", iLocal_217, 0, 0, 0);
								}
							}
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_286))
							{
								STREAMING::REQUEST_PTFX_ASSET();
								if (STREAMING::HAS_PTFX_ASSET_LOADED())
								{
									uLocal_286 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_anim_leaf_blower", iLocal_217, 1f, 0f, -0.25f, 0f, -45f, 0f, 1065353216, 0, 0, 0);
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_175) && CAM::IS_SCREEN_FADED_IN())
						{
							if (PED::IS_PED_INJURED(iLocal_175))
							{
								if (GlobalFunc_663("ARM3_GARDEN", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
							}
							if (!PED::IS_PED_INJURED(iLocal_175))
							{
								if (func_685(sLocal_156))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_175, sLocal_156, "Blower_Idle_a", 3) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_175, 242628503) != 1)
									{
										TASK::TASK_PLAY_ANIM(iLocal_175, sLocal_156, "Blower_Idle_a", 2f, -2f, -1, 8193, 0, 0, 0, 0);
									}
								}
								if (!STREAMING::HAS_CLIP_SET_LOADED(sLocal_155))
								{
									STREAMING::REQUEST_CLIP_SET(sLocal_155);
								}
								if (func_685(sLocal_156) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_155))
								{
									if (func_718("ARM3HLP_SNEAK"))
									{
										if (!func_718("GardenerAdvance"))
										{
											if (MISC::GET_GAME_TIMER() > iLocal_62)
											{
												PED::SET_PED_MOVEMENT_CLIPSET(iLocal_175, sLocal_155, 1048576000);
												PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_175, sLocal_155);
												TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -827.8197f, 191.4635f, 72.2064f, 0.5f, -1, 0.25f, 0, 299.3068f);
												TASK::TASK_PLAY_ANIM(0, sLocal_156, "Blower_Idle_a", 2f, -2f, -1, 8193, 0, 0, 0, 0);
												TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_175, uLocal_205);
												TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
												func_712("GardenerAdvance", 1);
											}
										}
									}
								}
							}
							if (func_685(sLocal_156))
							{
								if (!func_718("ACT_stealth_kill_a_gardener"))
								{
									MISC::_REMOVE_STEALTH_KILL(784239871, 1);
									func_712("ACT_stealth_kill_a_gardener", 1);
								}
							}
							if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
							{
								iLocal_62 = MISC::GET_GAME_TIMER() + 3000;
							}
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_175, 0), 8f, 8f, 2f, 0, 1, 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_175, 3000, 0, 2);
							}
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -847.8129f, 182.998f, 66.36266f, -811.2782f, 180.2509f, 81.59295f, 30f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -843.9734f, 159.8833f, 65.3092f, -809.6868f, 159.1634f, 76.78688f, 22f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -796.666f, 190.5562f, 71.83492f, -819.0549f, 191.7352f, 84.2254f, 7f, 0, 1, 0))
							{
								EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
								if ((PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()) || WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) || !func_704(PLAYER::PLAYER_PED_ID()))
								{
									PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 28);
								}
								if (PED::IS_PED_INJURED(iLocal_175) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_175, 287195044))
								{
									GlobalFunc_703(&uLocal_193);
									ENTITY::DETACH_ENTITY(iLocal_217, 1, 0);
									if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_286))
									{
										GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_286, 0);
									}
									if (iLocal_285 != -1)
									{
										AUDIO::STOP_SOUND(iLocal_285);
										AUDIO::RELEASE_SOUND_ID(iLocal_285);
										iLocal_285 = -1;
									}
									GlobalFunc_553(29);
									func_712("GardenerTakedown", 1);
								}
								if (!HUD::DOES_BLIP_EXIST(uLocal_193) && !func_718("GardenerTakedown"))
								{
									func_681(&uLocal_193, &iLocal_175, 1);
								}
								if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iLocal_175) != iLocal_297)
								{
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_175, iLocal_297);
								}
								if (!PED::IS_PED_INJURED(iLocal_175))
								{
									if (!func_718("GardenerAlert"))
									{
										if (!func_718("GardenerTakedown") || ENTITY::IS_ENTITY_ATTACHED(iLocal_217))
										{
											if (((((PED::IS_PED_IN_COMBAT(iLocal_175, 0) || PED::IS_PED_RAGDOLL(iLocal_175)) || (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_175) && MISC::GET_GAME_TIMER() > iLocal_62)) || PED::GET_PED_ALERTNESS(iLocal_175) != 0) || PED::IS_PED_FLEEING(iLocal_175)) || (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_175, sLocal_156, "Blower_Idle_a", 3) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_175, 242628503) != 1))
											{
												func_712("ARM3_GARDEN", 0);
												if ((GlobalFunc_7066() % 2) == 0)
												{
													func_677("ARM3_GARDEN", 7, 1, 0);
												}
												else
												{
													func_677("ARM3_GARDEN2", 7, 1, 0);
												}
												func_712("ARM3_GARDEN", 1);
												TASK::CLEAR_PED_TASKS(iLocal_175);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_175, PLAYER::PLAYER_PED_ID(), 1000, 1024, 2);
												TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
												TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
												TASK::TASK_REACT_AND_FLEE_PED(0, PLAYER::PLAYER_PED_ID());
												TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_175, uLocal_205);
												TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
												while ((((ENTITY::DOES_ENTITY_EXIST(iLocal_175) && !PED::IS_PED_INJURED(iLocal_175)) && !PED::IS_PED_IN_COMBAT(iLocal_175, 0)) && !PED::IS_PED_RAGDOLL(iLocal_175)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_175, 242628503) != 1)
												{
													func_676(0);
												}
												if ((ENTITY::DOES_ENTITY_EXIST(iLocal_175) && !PED::IS_PED_INJURED(iLocal_175)) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_175, sLocal_156, "Blower_Idle_a", 3))
												{
													TASK::STOP_ANIM_TASK(iLocal_175, sLocal_156, "Blower_Idle_a", -1056964608);
												}
												ENTITY::DETACH_ENTITY(iLocal_217, 1, 0);
												if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_286))
												{
													GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_286, 0);
												}
												if (iLocal_285 != -1)
												{
													AUDIO::STOP_SOUND(iLocal_285);
													AUDIO::RELEASE_SOUND_ID(iLocal_285);
													iLocal_285 = -1;
												}
												iLocal_63 = MISC::GET_GAME_TIMER() + 2000;
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_175) && PED::IS_PED_INJURED(iLocal_175))
												{
													RECORDING::_0x293220DA1B46CEBC(5.5f, 2f, 3);
												}
												func_712("GardenerAlert", 1);
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_63)
									{
										func_676(500);
										iLocal_337 = 17;
										func_691();
									}
								}
							}
							else if (!PED::IS_PED_INJURED(iLocal_175))
							{
								if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iLocal_175) == iLocal_297)
								{
									if (PED::IS_PED_IN_COMBAT(iLocal_175, 0))
									{
										TASK::CLEAR_PED_TASKS(iLocal_175);
									}
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_175, iLocal_296);
								}
							}
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_542[0]) && !PED::IS_PED_INJURED(uLocal_542[0]))
		{
			if ((((((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_542[0], sLocal_150, "michaelappears_loop_michael") >= 1f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop2_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_542[0], sLocal_150, "michaelappears_loop2_michael") >= 1f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop3_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_542[0], sLocal_150, "michaelappears_loop3_michael") >= 1f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop4_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_542[0], sLocal_150, "michaelappears_loop4_michael") >= 1f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop5_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_542[0], sLocal_150, "michaelappears_loop5_michael") >= 1f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop6_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_542[0], sLocal_150, "michaelappears_loop6_michael") >= 1f))
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				if (iVar4 == 0)
				{
					TASK::TASK_PLAY_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop_michael", 4f, -4f, -1, 2, 0, 0, 0, 0);
				}
				else if (iVar4 == 1)
				{
					TASK::TASK_PLAY_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop2_michael", 4f, -4f, -1, 2, 0, 0, 0, 0);
				}
				else if (iVar4 == 2)
				{
					TASK::TASK_PLAY_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop3_michael", 4f, -4f, -1, 2, 0, 0, 0, 0);
				}
				else if (iVar4 == 3)
				{
					TASK::TASK_PLAY_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop4_michael", 4f, -4f, -1, 2, 0, 0, 0, 0);
				}
				else if (iVar4 == 4)
				{
					TASK::TASK_PLAY_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop5_michael", 4f, -4f, -1, 2, 0, 0, 0, 0);
				}
				else if (iVar4 == 5)
				{
					TASK::TASK_PLAY_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop6_michael", 4f, -4f, -1, 2, 0, 0, 0, 0);
				}
			}
		}
		if (func_675() && iLocal_336 == 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_542[0]))
			{
				if (((((((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_intro_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_542[0], sLocal_150, "michaelappears_intro_michael") > 0.75f) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop2_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop3_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop4_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop5_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop6_michael", 3))
				{
					if (func_718("ARM3_DRIV") && MISC::GET_GAME_TIMER() > iLocal_60)
					{
						if (!func_718("ARM3_STOP"))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_144))
							{
								if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
								{
									if (ENTITY::IS_ENTITY_UPRIGHT(iLocal_179, 1119092736) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_179))
									{
										StringCopy(&Local_144, GlobalFunc_648(), 24);
									}
								}
							}
						}
						if ((((((!GlobalFunc_5672("ARM3_PHONE") && !GlobalFunc_5672("ARM3_CRASH")) && !GlobalFunc_5672("ARM3_FLIP")) && !GlobalFunc_5672("ARM3_HIT")) && !GlobalFunc_5672("ARM3_ROUTE")) && !GlobalFunc_5672("ARM3_GOGO")) && !GlobalFunc_5672("ARM3_GETOUT"))
						{
							if ((ENTITY::GET_ENTITY_HEALTH(iLocal_179) < iLocal_64 || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_179) < fLocal_65) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_179) < fLocal_66)
							{
								if (GlobalFunc_5672("ARM3_DRIV") || GlobalFunc_5672(&Local_144))
								{
									Local_144 = { GlobalFunc_514() };
								}
								AUDIO::INTERRUPT_CONVERSATION(func_690(0), "ARM3_BGAA", "MICHAEL");
								iLocal_64 = ENTITY::GET_ENTITY_HEALTH(iLocal_179);
								fLocal_65 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_179);
								fLocal_66 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_179);
								iLocal_60 = MISC::GET_GAME_TIMER() + 12000;
							}
							if (!ENTITY::IS_ENTITY_UPRIGHT(iLocal_179, 1119092736))
							{
								if (GlobalFunc_5672("ARM3_DRIV") || GlobalFunc_5672(&Local_144))
								{
									Local_144 = { GlobalFunc_514() };
								}
								AUDIO::INTERRUPT_CONVERSATION(func_690(0), "ARM3_BPAA", "MICHAEL");
								iLocal_60 = MISC::GET_GAME_TIMER() + 12000;
							}
							iVar5 = 0;
							iVar6 = GlobalFunc_648();
							iVar5 = 0;
							while (iVar5 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
							{
								iVar7 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar5);
								switch (iVar7)
								{
									case 140:
									case 139:
										SCRIPT::GET_EVENT_DATA(0, iVar5, &iVar6, 1);
										if (ENTITY::DOES_ENTITY_EXIST(iVar6))
										{
											if (ENTITY::IS_ENTITY_A_PED(iVar6))
											{
												if (GlobalFunc_5672("ARM3_DRIV") || GlobalFunc_5672(&Local_144))
												{
													Local_144 = { GlobalFunc_514() };
												}
												AUDIO::INTERRUPT_CONVERSATION(func_690(0), "ARM3_BHAA", "MICHAEL");
												if (iVar7 == 140)
												{
													GlobalFunc_565(24, 1, 0);
												}
												iLocal_60 = MISC::GET_GAME_TIMER() + 12000;
											}
										}
										break;
								}
								iVar5++;
							}
							if (!func_718("ARM3_STOP"))
							{
								if (((((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop_michael", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop2_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop3_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop4_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop5_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop6_michael", 3))
								{
									if (((!func_718("Destination1") && !func_718("Destination2")) && !func_718("Destination3")) && !func_718("Destination4"))
									{
										if (ENTITY::GET_ENTITY_SPEED(iLocal_179) < 1f)
										{
											if (iLocal_61 == -1)
											{
												iLocal_61 = MISC::GET_GAME_TIMER() + 3000;
											}
										}
										else
										{
											iLocal_61 = -1;
										}
										if ((iLocal_61 != -1 && MISC::GET_GAME_TIMER() > iLocal_61) && !func_718("HaltVehicle"))
										{
											if (GlobalFunc_5672("ARM3_DRIV") || GlobalFunc_5672(&Local_144))
											{
												Local_144 = { GlobalFunc_514() };
											}
											AUDIO::INTERRUPT_CONVERSATION(func_690(0), "ARM3_BJAA", "MICHAEL");
											iLocal_60 = MISC::GET_GAME_TIMER() + 12000;
										}
									}
								}
							}
							if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 75))
							{
								if (GlobalFunc_5672("ARM3_DRIV") || GlobalFunc_5672(&Local_144))
								{
									Local_144 = { GlobalFunc_514() };
								}
								AUDIO::INTERRUPT_CONVERSATION(func_690(0), "ARM3_BKAA", "MICHAEL");
								iLocal_60 = MISC::GET_GAME_TIMER() + 12000;
							}
							if (GlobalFunc_116(1))
							{
								if (GlobalFunc_5672("ARM3_DRIV") || GlobalFunc_5672(&Local_144))
								{
									Local_144 = { GlobalFunc_514() };
								}
								AUDIO::INTERRUPT_CONVERSATION(func_690(0), "ARM3_BLAA", "MICHAEL");
								GlobalFunc_6685(0);
								GlobalFunc_7632(1);
								iLocal_60 = MISC::GET_GAME_TIMER() + 12000;
							}
						}
					}
				}
			}
		}
		if (GlobalFunc_8315() == 0)
		{
			GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 22);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 23);
			GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 26);
		}
		else
		{
			GlobalFunc_504(0, 23);
			GlobalFunc_503(0, 26);
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 5);
		PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 2);
		PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 3);
		PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 4);
		func_656();
		func_655();
		switch (iLocal_336)
		{
			case 0:
				func_607();
				break;
			
			case 1:
				if (func_685(sLocal_152))
				{
					func_606();
				}
				break;
			
			case 2:
				if (func_685(sLocal_152))
				{
					func_549();
				}
				break;
			
			case 3:
				if ((func_715(joaat("bjxl")) && func_715(joaat("bison3"))) && func_685(sLocal_150))
				{
					func_541();
				}
				break;
			
			case 4:
				if ((((func_715(GlobalFunc_4946(14)) && func_715(GlobalFunc_4946(15))) && func_685(sLocal_150)) && func_685(sLocal_153)) && func_685(sLocal_151))
				{
					func_516();
				}
				break;
			
			case 5:
				if (((((func_715(GlobalFunc_4946(14)) && func_715(GlobalFunc_4946(15))) && func_715(GlobalFunc_4946(17))) && func_715(GlobalFunc_4946(25))) && func_685(sLocal_150)) && func_685(sLocal_151))
				{
					func_497();
				}
				break;
			
			case 6:
				if (func_715(GlobalFunc_4917(0)) && func_685(sLocal_150))
				{
					func_303();
				}
				break;
			
			case 7:
				if (func_685(sLocal_150))
				{
					func_302();
				}
				func_299();
				break;
			
			case 8:
				func_295();
				break;
			
			case 9:
				if (func_685(sLocal_150) && func_715(joaat("prop_showroom_glass_1b")))
				{
					func_259();
				}
				break;
			
			case 10:
				if (func_715(GlobalFunc_4946(18)) && func_685(sLocal_158))
				{
					func_253();
				}
				break;
			
			case 11:
				if (func_685(sLocal_154))
				{
					func_6();
				}
				break;
			
			case 12:
				func_1();
				break;
			
			case 13:
				func_691();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x2189
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
	func_725();
	if (ENTITY::DOES_ENTITY_EXIST(func_690(0)) && !ENTITY::IS_ENTITY_DEAD(func_690(0)))
	{
		WEAPON::GIVE_WEAPON_TO_PED(func_690(0), iLocal_295, 120, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(func_690(0), joaat("weapon_unarmed"), 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[0]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_181[0], 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_181[0], 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[1]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_181[1], 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_181[1], 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[2]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_181[2], 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_181[2], 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[3]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_181[3], 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_181[3], 1);
	}
	GlobalFunc_5103(0, 0);
	iLocal_92 = 1;
	func_775(0);
}





void func_6()//Position - 0x241B
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	if (func_252())
	{
		GlobalFunc_Checkpoint3(5, "stageBeatDown", 1, 0, 0, 1);
		GlobalFunc_5671(0, 1);
		GlobalFunc_585(115, 1);
		GlobalFunc_563(1);
		func_201(PLAYER::PLAYER_ID(), 1, 0);
		if (iLocal_70)
		{
			CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_69);
			CAM::_0x2A2173E46DAECD12(0, iLocal_71);
			iLocal_70 = 0;
		}
		iLocal_89 = 1;
		HUD::ALLOW_SONAR_BLIPS(0);
		GlobalFunc_7632(1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179) && !ENTITY::IS_ENTITY_DEAD(iLocal_179))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_179, 1);
		}
		if (GlobalFunc_8315() != 0)
		{
			GlobalFunc_9134(&uLocal_542, 0);
			func_132(&uLocal_542, 1, 1, 0);
		}
		func_676(0);
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
		GlobalFunc_7694(PLAYER::PLAYER_PED_ID(), 1, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		GlobalFunc_2240(&(uLocal_542[1]));
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_174, 2);
		func_120(iLocal_174, 1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_174, 1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_174))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_174, 0);
		}
		func_681(&uLocal_200, &iLocal_174, 1);
		CUTSCENE::REQUEST_CUTSCENE("Armenian_3_MCS_9_concat", 8);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_BEAT_DOWN"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_3_BEAT_DOWN");
		}
		if (iLocal_281 == -1)
		{
			iLocal_281 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-53.73703f, -1096.984f, 26.49465f, 1.25f, 0.5f, 1f, 30f, 0, 7);
		}
		AUDIO::RECORD_BROKEN_GLASS(-57.15079f, -1097.264f, 25.42232f, 3f);
		AUDIO::RECORD_BROKEN_GLASS(-51.97326f, -1093.51f, 25.42232f, 3.5f);
		if (!func_718("WindowSmashed"))
		{
			AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN", "V_CARSHOWROOM_PS_WINDOW_BROKEN");
			func_712("WindowSmashed", 1);
		}
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::CLEAR_AREA_OF_COPS(-57.6017f, -1095.091f, 25.4343f, 500f, 0);
		MISC::ENABLE_DISPATCH_SERVICE(1, 0);
		MISC::ENABLE_DISPATCH_SERVICE(10, 0);
		MISC::ENABLE_DISPATCH_SERVICE(9, 0);
		MISC::ENABLE_DISPATCH_SERVICE(2, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		MISC::ENABLE_DISPATCH_SERVICE(4, 0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_CREATE_RANDOM_COPS(0);
		PED::SET_PED_RESET_FLAG(iLocal_174, 149, 1);
		PED::SET_PED_RESET_FLAG(iLocal_174, 69, 1);
		bLocal_758 = false;
		if (func_119())
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_174, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_174, 1);
			}
			if (iLocal_91 == 0)
			{
				iLocal_207 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_138, "v_carshowroom");
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_207);
				while (!INTERIOR::IS_INTERIOR_READY(iLocal_207))
				{
					func_676(0);
				}
				iLocal_91 = 1;
			}
			if (!bLocal_96)
			{
				func_118(-58.1243f, -1095.056f, 25.4345f, 1101004800);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_174, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_174, 0);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			func_117(PLAYER::PLAYER_PED_ID(), -58.1243f, -1095.056f, 25.4345f, 314.025f, 1);
			GlobalFunc_2239(iLocal_179, -55.8188f, -1096.415f, 25.4344f, 305.0423f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_179, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -56.13f, -1097.6f, 25.16f) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
			uLocal_335 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
			while (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_335))
			{
				uLocal_335 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
				func_676(0);
			}
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_335))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_335) != 10)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_335, 9);
				}
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_690(0)))
			{
				func_676(0);
			}
			func_676(500);
			func_117(iLocal_174, -55.6653f, -1093.487f, 25.4343f, 125.882f, 1);
			INTERIOR::_0x82EBB79E258FA2B7(iLocal_174, iLocal_207);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_174, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_174, iLocal_297);
			PED::SET_PED_AS_ENEMY(iLocal_174, 1);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(iLocal_174, func_690(0), 0f, -1f, 0f, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_174, 0, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_174, 0);
			ENTITY::SET_ENTITY_HEALTH(iLocal_174, 450);
			PED::SET_PED_MAX_HEALTH(iLocal_174, 450);
			func_117(PLAYER::PLAYER_PED_ID(), -58.1243f, -1095.056f, 25.4345f, 314.025f, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(func_690(0), iLocal_174, 0f, -1f, 0f, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_690(0), 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			RECORDING::_0x293220DA1B46CEBC(3f, 4f, 3);
			func_114(18);
			func_676(500);
			if (!iLocal_97)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
			}
		}
	}
	else
	{
		func_112("ARM3_BEAT", 7500, 1);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			func_21("Michael", func_690(0), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Siemon", iLocal_174, 0);
		}
		switch (iLocal_47)
		{
			case 0:
				if (!CUTSCENE::IS_CUTSCENE_PLAYING() || iLocal_97 == 1)
				{
					if (PED::IS_PED_PERFORMING_DEPENDENT_COMBO_LIMIT(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_718("Dodged"))
						{
							GlobalFunc_565(28, 1, 0);
							func_712("Dodged", 1);
						}
					}
					else if (func_718("Dodged"))
					{
						func_712("Dodged", 0);
					}
					if (!bLocal_758)
					{
						if (PED::GET_PED_RESET_FLAG(iLocal_174, 330))
						{
							bLocal_758 = true;
						}
					}
					else
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_174, 1) };
						if (((MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1) < 3.5f && Var0.f_2 > (Var3.f_2 - 0.15f)) && Var0.f_2 < (Var3.f_2 + 0.15f)) && !PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							bLocal_758 = false;
						}
					}
					if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.00801f, -1102.252f, 25.43435f, -59.3003f, -1092.674f, 29.43435f, 15f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -34.02697f, -1115.379f, 25.42233f, -29.3368f, -1102.295f, 28.92233f, 5.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -40.9341f, -1086.292f, 25.42233f, -25.77692f, -1091.713f, 28.9219f, 10.5f, 0, 1, 0)) || (iLocal_207 != 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_207)) && !bLocal_758) || iLocal_97 == 1)
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_174, iLocal_297);
						GlobalFunc_703(&uLocal_199);
						func_681(&uLocal_200, &iLocal_174, 1);
						if (GlobalFunc_663("ARM3_BEATBACK", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iLocal_174) == iLocal_297)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_174, 780511057) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_174, -71340211) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_174);
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_174);
								TASK::TASK_COMBAT_PED(iLocal_174, func_690(0), 0, 16);
							}
						}
						if (!func_718("ARM3HLP_LOCKON"))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								func_19("ARM3HLP_LOCKON", 1, -1);
							}
						}
						else if (!func_718("ARM3HLP_FIGHT") && !func_718("ARM3HLP_FIGHT_KM"))
						{
							if ((GlobalFunc_74("ARM3HLP_LOCKON") && MISC::GET_GAME_TIMER() > iLocal_59) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_174))
							{
								GlobalFunc_2238(1);
							}
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								if (PAD::_IS_USING_KEYBOARD(0))
								{
									func_19("ARM3HLP_FIGHT_KM", 1, -1);
								}
								else
								{
									func_19("ARM3HLP_FIGHT", 1, -1);
								}
							}
						}
						else if (!func_718("ARM3HLP_FIGHT2") && !func_718("ARM3HLP_FIGHT2_KM"))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								if (PAD::_IS_USING_KEYBOARD(0))
								{
									func_19("ARM3HLP_FIGHT2_KM", 1, -1);
								}
								else
								{
									func_19("ARM3HLP_FIGHT2", 1, -1);
								}
							}
						}
						else if (!func_718("ARM3HLP_FSTAT"))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								func_19("ARM3HLP_FSTAT", 1, -1);
							}
						}
						else if (!func_718("ARM3HLP_FSTAT2"))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								func_19("ARM3HLP_FSTAT2", 1, -1);
							}
						}
						if (SYSTEM::TIMERA() > 2000 && CAM::IS_SCREEN_FADED_IN())
						{
							if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
							{
								if (!func_718("ARM3_SLAM"))
								{
									func_677("ARM3_SLAM", 7, 1, 0);
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_55)
								{
									if (iLocal_49[0] == -1)
									{
										iLocal_49[0] = 10;
									}
									else if (iLocal_49[1] == -1)
									{
										iLocal_49[1] = 5;
									}
									if (iLocal_49[iLocal_48] > 0)
									{
										if (iLocal_48 == 0)
										{
											func_677("ARM3_FIGHTSI", 7, 0, 0);
										}
										else if (iLocal_48 == 1)
										{
											func_677("ARM3_SLAM2", 7, 0, 0);
										}
										iLocal_55 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000));
										iLocal_49[iLocal_48] = (iLocal_49[iLocal_48] - 1);
									}
									if (iLocal_48 == 0)
									{
										iLocal_48 = 1;
									}
									else if (iLocal_48 == 1)
									{
										iLocal_48 = 0;
									}
								}
							}
						}
						if (CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_174, 0);
							PED::SET_PED_RESET_FLAG(iLocal_174, 187, 1);
							if ((PED::IS_PED_INJURED(iLocal_174) || ENTITY::GET_ENTITY_HEALTH(iLocal_174) < 170) || iLocal_97 == 1)
							{
								iLocal_97 = 0;
								func_114(17);
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_BEAT_DOWN"))
								{
									AUDIO::STOP_AUDIO_SCENE("ARM_3_BEAT_DOWN");
								}
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_174, "Siemon", 0, GlobalFunc_4946(18), 3);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_179, "Jimmys_Car", 0, 0, 0);
								GlobalFunc_8316(1, 1, 1, 0);
								CUTSCENE::START_CUTSCENE(16);
								func_676(0);
								HUD::CLEAR_PRINTS();
								GlobalFunc_4956();
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_179, 0, 0, 0f);
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::CLEAR_PED_TASKS(iLocal_174);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_174, iLocal_296);
								MISC::CLEAR_AREA(-58.1243f, -1095.056f, 25.4345f, 100f, 1, 0, 0, 0);
								ENTITY::SET_ENTITY_COLLISION(iLocal_179, 0, 0);
								RECORDING::_0x48621C9FCA3EBD28(4);
								iLocal_89 = 0;
								PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_14();
							}
						}
						else
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_174, 1);
						}
						SYSTEM::SETTIMERB(0);
					}
					else
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_174, 1);
						if (!(((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.00801f, -1102.252f, 25.43435f, -59.3003f, -1092.674f, 29.43435f, 15f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -34.02697f, -1115.379f, 25.42233f, -29.3368f, -1102.295f, 28.92233f, 5.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -40.9341f, -1086.292f, 25.42233f, -25.77692f, -1091.713f, 28.9219f, 10.5f, 0, 1, 0)) || (iLocal_207 != 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_207)))
						{
							GlobalFunc_703(&uLocal_200);
							func_11(&uLocal_199, -58.1243f, -1095.056f, 25.4345f, 0);
							if (!func_718("ARM3_BEATBACK"))
							{
								func_725();
							}
							func_112("ARM3_BEATBACK", 7500, 1);
						}
						if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iLocal_174) == iLocal_297)
						{
							TASK::CLEAR_PED_TASKS(iLocal_174);
							TASK::CLEAR_PED_SECONDARY_TASK(iLocal_174);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_174, iLocal_296);
						}
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_174, -58.61181f, -1093.174f, 25.42233f, -33.44392f, -1102.318f, 29.42233f, 12.5f, 0, 1, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_174, 242628503) != 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_174, -62.596f, -1096.74f, 25.35229f, -59.57545f, -1102.166f, 29.41263f, 5f, 0, 1, 0))
								{
									TASK::TASK_GO_STRAIGHT_TO_COORD(0, -59.083f, -1097.82f, 25.4225f, 2f, 20000, 1193033728, 1056964608);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -54.8776f, -1092.944f, 25.4344f, 2f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(func_690(0), 1), 0);
								if (func_685(sLocal_154))
								{
									TASK::TASK_PLAY_ANIM(0, sLocal_154, "cmon", 1.5f, -4f, -1, 16, 0, 0, 0, 0);
								}
								TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_174, uLocal_205);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_174, 242628503) != 1)
						{
							if (PED::IS_PED_FACING_PED(iLocal_174, PLAYER::PLAYER_PED_ID(), 20f))
							{
								if (func_685(sLocal_154))
								{
									if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_174, sLocal_154, "cmon", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_174, sLocal_154, "cmon", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_174, sLocal_154, "cmon") >= 0.8f)) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_174, sLocal_154, "areyounotman", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_174, sLocal_154, "areyounotman", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_174, sLocal_154, "areyounotman") >= 0.8f))) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_174, sLocal_154, "lookathim", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_174, sLocal_154, "lookathim", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_174, sLocal_154, "lookathim") >= 0.8f)))
									{
										iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
										if (iVar6 == 0)
										{
											TASK::TASK_PLAY_ANIM(iLocal_174, sLocal_154, "cmon", 4f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_174, func_690(0), -1, 1056, 4);
										}
										else if (iVar6 == 1)
										{
											TASK::TASK_PLAY_ANIM(iLocal_174, sLocal_154, "areyounotman", 4f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_174, func_690(0), -1, 1056, 4);
										}
										else if (iVar6 == 2)
										{
											TASK::TASK_PLAY_ANIM(iLocal_174, sLocal_154, "lookathim", 4f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_174, func_690(0), -1, 1056, 4);
										}
									}
								}
								if (CAM::IS_SCREEN_FADED_IN())
								{
									if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
									{
										if (MISC::GET_GAME_TIMER() > iLocal_55)
										{
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_174, 1), 1) < 25f)
											{
												iLocal_48 = 1;
												if (iLocal_49[iLocal_48] == -1)
												{
													iLocal_49[iLocal_48] = 5;
												}
												if (iLocal_49[iLocal_48] > 0)
												{
													func_677("ARM3_SIMS", 7, 0, 0);
													iLocal_55 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
													iLocal_49[iLocal_48] = (iLocal_49[iLocal_48] - 1);
												}
											}
											else if (GlobalFunc_5672("ARM3_SIMS"))
											{
												GlobalFunc_5105();
											}
										}
									}
								}
							}
							else
							{
								if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_174, sLocal_154, "cmon", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_174, sLocal_154, "areyounotman", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_174, sLocal_154, "lookathim", 3))
								{
									TASK::CLEAR_PED_TASKS(iLocal_174);
								}
								if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_174, 1464580341) != 0 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_174, 1464580341) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_174, 1464580341) != 2)
								{
									TASK::TASK_TURN_PED_TO_FACE_COORD(iLocal_174, ENTITY::GET_ENTITY_COORDS(func_690(0), 1), 1000);
								}
							}
						}
						if (!func_718("WantedLevel"))
						{
							if (SYSTEM::TIMERB() > 20000)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								func_712("WantedLevel", 1);
							}
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_174, 1), 1) > 100f)
						{
							iLocal_337 = 19;
							func_691();
						}
					}
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				break;
			
			case 1:
				if (!func_718("ARM3HLP_LOCKON"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_19("ARM3HLP_LOCKON", 1, -1);
					}
				}
				else if (!func_718("ARM3HLP_FIGHT") && !func_718("ARM3HLP_FIGHT_KM"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (PAD::_IS_USING_KEYBOARD(0))
						{
							func_19("ARM3HLP_FIGHT_KM", 1, -1);
						}
						else
						{
							func_19("ARM3HLP_FIGHT", 1, -1);
						}
					}
				}
				else if (!func_718("ARM3HLP_FIGHT2") && !func_718("ARM3HLP_FIGHT2_KM"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (PAD::_IS_USING_KEYBOARD(0))
						{
							func_19("ARM3HLP_FIGHT2_KM", 1, -1);
						}
						else
						{
							func_19("ARM3HLP_FIGHT2", 1, -1);
						}
					}
				}
				else if (!func_718("ARM3HLP_FSTAT"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_19("ARM3HLP_FSTAT", 1, -1);
					}
				}
				else if (!func_718("ARM3HLP_FSTAT2"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_19("ARM3HLP_FSTAT2", 1, -1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmys_Car", 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_179, 1);
					ENTITY::SET_ENTITY_COLLISION(iLocal_179, 0, 0);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_179, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_179, 1);
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					iLocal_98 = 1;
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (iLocal_98)
					{
						func_118(-56.83f, -1094.947f, 25.4223f, 100f);
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					iLocal_98 = 0;
					GlobalFunc_8316(0, 1, 1, 0);
					func_8();
				}
				break;
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(0, 24) || PAD::IS_CONTROL_JUST_PRESSED(0, 140)) || PAD::IS_CONTROL_JUST_PRESSED(0, 141))
		{
			func_712("FirstPunch", 1);
		}
		if (!func_718("FirstPunch") && SYSTEM::TIMERA() < 3000)
		{
			PED::SET_PED_RESET_FLAG(iLocal_174, 149, 1);
			PED::SET_PED_RESET_FLAG(iLocal_174, 69, 1);
		}
	}
	if (func_7())
	{
		CUTSCENE::REMOVE_CUTSCENE();
		RECORDING::_0x81CBAE94390F9F89();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_676(0);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_BEAT_DOWN"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_BEAT_DOWN");
		}
		GlobalFunc_2240(&iLocal_174);
		GlobalFunc_703(&uLocal_199);
		GlobalFunc_703(&uLocal_200);
		GlobalFunc_7632(0);
		PLAYER::SET_MAX_WANTED_LEVEL(6);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		iLocal_336++;
	}
}

int func_7()//Position - 0x3567
{
	int iVar0;
	
	if (iLocal_88 == 1)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_87 = 0;
		iLocal_88 = 0;
		iLocal_47 = 0;
		iLocal_48 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			iLocal_49[iVar0] = -1;
			iVar0++;
		}
		iLocal_55 = 0;
		return 1;
	}
	return 0;
}

void func_8()//Position - 0x35AB
{
	iLocal_88 = 1;
}



void func_11(var uParam0, struct<3> Param1, int iParam4)//Position - 0x35EA
{
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		*uParam0 = GlobalFunc_5104(Param1, iParam4);
		HUD::SET_BLIP_PRIORITY(*uParam0, 9);
	}
}



void func_14()//Position - 0x3656
{
	SYSTEM::SETTIMERA(0);
	iLocal_47++;
}





void func_19(char* sParam0, bool bParam1, int iParam2)//Position - 0x36C2
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && MISC::GET_GAME_TIMER() > iLocal_59))
	{
		if (!func_718(sParam0))
		{
			GlobalFunc_159(sParam0, iParam2);
			func_712(sParam0, bParam1);
			iLocal_59 = MISC::GET_GAME_TIMER() + 2000;
		}
	}
}


void func_21(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3722
{
	struct<50> Var0;
	int iVar65;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	GlobalFunc_10947(iParam1, &Var0, iParam3);
	iVar65 = 0;
	while (iVar65 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar65, Var0.f_13[iVar65], Var0[iVar65], iParam2);
		iVar65++;
	}
	iVar65 = 0;
	while (iVar65 < 9)
	{
		if (Var0.f_39[iVar65] == -1 || Var0.f_39[iVar65] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, Var0.f_39[iVar65], Var0.f_49[iVar65], iParam2);
		}
		iVar65++;
	}
}



























































































int func_112(char* sParam0, int iParam1, bool bParam2)//Position - 0x1A444
{
	if (!func_718(sParam0))
	{
		GlobalFunc_164(sParam0, iParam1, 1);
		func_712(sParam0, bParam2);
		return 1;
	}
	return 0;
}


void func_114(int iParam0)//Position - 0x1A488
{
	iLocal_345 = iParam0;
	func_655();
}



void func_117(int iParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x1A4D1
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam5 == 1)
			{
				PED::SET_PED_COORDS_KEEP_VEHICLE(iParam0, Param1);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, 1);
			}
			PED::CLEAR_PED_WETNESS(iParam0);
			ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
		}
	}
}

void func_118(struct<3> Param0, float fParam3)//Position - 0x1A51B
{
	int iVar0;
	
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, fParam3, 0);
	iVar0 = MISC::GET_GAME_TIMER() + 20000;
	while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && MISC::GET_GAME_TIMER() < iVar0)
	{
		func_676(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
}

int func_119()//Position - 0x1A561
{
	if (iLocal_95 == 1)
	{
		iLocal_95 = 0;
		return 1;
	}
	return 0;
}

void func_120(int iParam0, bool bParam1)//Position - 0x1A57A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (bParam1)
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(iParam0))
				{
					ENTITY::SET_ENTITY_VISIBLE(iParam0, 1);
				}
			}
			else if (ENTITY::IS_ENTITY_VISIBLE(iParam0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iParam0, 0);
			}
		}
	}
}












int func_132(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x1BB39
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
			GlobalFunc_9136(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		GlobalFunc_9136((*uParam0)[uParam0->f_7], 0);
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
					if (MISC::IS_BIT_SET(Global_Running_Missions[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_Running_Missions[iVar4 /*5*/];
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
		func_141(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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
		func_137(iVar2, &iVar22);
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
			GlobalFunc_8311();
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





void func_137(int iParam0, int iParam1)//Position - 0x1C161
{
	switch (iParam0)
	{
		case 0:
			GlobalFunc_5669(4, *iParam1);
			GlobalFunc_5669(7, *iParam1);
			GlobalFunc_5669(8, *iParam1);
			GlobalFunc_5669(11, *iParam1);
			break;
		
		case 1:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[2 /*6*/])
			{
				GlobalFunc_5669(4, *iParam1);
			}
			GlobalFunc_5669(7, *iParam1);
			GlobalFunc_5669(8, *iParam1);
			GlobalFunc_5669(11, *iParam1);
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[126])
			{
				GlobalFunc_5669(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[20 /*6*/])
			{
				GlobalFunc_5669(4, *iParam1);
			}
			GlobalFunc_5669(7, *iParam1);
			GlobalFunc_5669(8, *iParam1);
			GlobalFunc_5669(11, *iParam1);
			break;
	}
}




void func_141(int iParam0)//Position - 0x1C345
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_30787[(38 / 32)]), (38 % 32));
			func_142(38, 0);
			MISC::SET_BIT(&(Global_30787[(41 / 32)]), (41 % 32));
			func_142(41, 0);
			MISC::SET_BIT(&(Global_30787[(43 / 32)]), (43 % 32));
			func_142(43, 0);
			MISC::SET_BIT(&(Global_30787[(42 / 32)]), (42 % 32));
			func_142(42, 0);
			MISC::SET_BIT(&(Global_30787[(44 / 32)]), (44 % 32));
			func_142(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_142(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_30787[(51 / 32)]), (51 % 32));
			func_142(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_30787[(53 / 32)]), (53 % 32));
			func_142(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_30787[(81 / 32)]), (81 % 32));
			func_142(81, 0);
			MISC::SET_BIT(&(Global_30787[(82 / 32)]), (82 % 32));
			func_142(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_30787[(47 / 32)]), (47 % 32));
			func_142(47, 0);
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_142(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_30787[(50 / 32)]), (50 % 32));
			func_142(50, 0);
			break;
	}
}

void func_142(int iParam0, int iParam1)//Position - 0x1C4D5
{
	int iVar0;
	
	if (iParam0 != 225)
	{
		if (Global_68245)
		{
			iVar0 = Global_2422140.f_73[iParam0];
		}
		else
		{
			iVar0 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
		}
		if (iVar0 != iParam1 || MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
				Global_31257[iParam0] = iParam1;
			}
			else if (Global_68245)
			{
				Global_2422140.f_73[iParam0] = iParam1;
			}
			else
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			func_144(iParam0);
			if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				GlobalFunc_510(iParam0);
			}
		}
	}
}


void func_144(int iParam0)//Position - 0x1C61C
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (!GlobalFunc_4921())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { GlobalFunc_511(iParam0) };
	if (MISC::IS_BIT_SET(Var0.f_4, 2))
	{
		GlobalFunc_8505(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	if ((MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] == 2) && fVar10 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
		Global_30805[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (MISC::IS_BIT_SET(Global_31031[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_90014.f_288 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						Global_90014.f_288 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar11 = Global_90014.f_288;
				iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
					Global_31257[iParam0] = 3;
					MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_31031[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_31257[iParam0];
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_SAVE_DATA.isGameflowActive)
		{
			iVar9 = GlobalFunc_9135(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (GlobalFunc_39(14))
		{
			iVar9 = 0;
		}
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (GlobalFunc_8989())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
	}
	if (Global_31483[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) || (Global_30805[iParam0] == 0 && Global_31257[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_30786)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (MISC::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar14 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar15 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			MISC::CLEAR_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			Global_31483[iParam0] = iVar9;
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
		GlobalFunc_510(iParam0);
		if (Global_30805[iParam0] < 2)
		{
			Global_30805[iParam0]++;
		}
	}
}

























































void func_201(int iParam0, bool bParam1, int iParam2)//Position - 0x1F6C3
{
	PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iParam2);
	bLocal_751 = bParam1;
}



















































int func_252()//Position - 0x24B9A
{
	if (iLocal_87 == 0)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_87 = 1;
		return 1;
	}
	return 0;
}

void func_253()//Position - 0x24BB8
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	if (func_252())
	{
		GlobalFunc_Checkpoint3(5, "stageBeatDown", 1, 0, 0, 1);
		func_201(PLAYER::PLAYER_ID(), 0, 2048);
		iLocal_89 = 0;
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_214))
		{
			iLocal_214 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pistol")), Local_117, 1, 1, 0);
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_214, uLocal_542[0], PED::GET_PED_BONE_INDEX(uLocal_542[0], 28422), Local_105, Local_105, 0, 0, 0, 0, 2, 1);
		GlobalFunc_2240(&iLocal_174);
		while (!GlobalFunc_7047(&iLocal_174, 18, -56.436f, -1098.818f, 25.4345f, 31.149f, 1))
		{
			func_676(0);
		}
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_174, 0);
		ENTITY::SET_ENTITY_HEALTH(iLocal_174, 400);
		PED::SET_PED_MAX_HEALTH(iLocal_174, 400);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_174, iLocal_179, 3000, 0, 2);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_174, 1);
		func_120(iLocal_174, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(18));
		GlobalFunc_173(&uLocal_586, 8, iLocal_174, "SIMEON", 0, 1);
		if (!func_718("WindowSmashed"))
		{
			AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN", "V_CARSHOWROOM_PS_WINDOW_BROKEN");
			func_712("WindowSmashed", 1);
		}
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_179, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_179, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_179, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_179, 1);
		CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_8", 4);
		RECORDING::_0x293220DA1B46CEBC(4f, 4f, 3);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		if (func_119())
		{
			func_117(PLAYER::PLAYER_PED_ID(), -56.13f, -1097.6f, 25.16f, 0f, 1);
			if (!bLocal_96)
			{
				func_118(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1101004800);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -56.13f, -1097.6f, 25.16f) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
			uLocal_335 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
			while (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_335))
			{
				uLocal_335 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
				func_676(0);
			}
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_335))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_335) != 10)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_335, 9);
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			func_114(18);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			func_21("Franklin", func_690(1), 0, 2);
			func_21("Michael", func_690(0), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Siemon", iLocal_174, 0);
		}
		RECORDING::_0x208784099002BC30("M_Complications", 0);
		switch (iLocal_47)
		{
			case 0:
				func_201(PLAYER::PLAYER_ID(), 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_179, Vector(26.58f, -1097.347f, -57.3905f) + Vector(0f, 1.23f, 2.08f), 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_179, -8.8082f, 0.1836f, -58.895f, 2, 1);
				GlobalFunc_5671(0, 1);
				GlobalFunc_585(115, 1);
				if (GlobalFunc_8315() != 0)
				{
					GlobalFunc_9134(&uLocal_542, 0);
					func_132(&uLocal_542, 1, 1, 1);
				}
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
				Var0 = { Local_105 };
				Var3 = { Local_105 };
				uVar6 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
				uLocal_284 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_284, iLocal_179, 0);
				TASK::CLEAR_PED_TASKS(func_690(0));
				PED::SET_PED_INTO_VEHICLE(func_690(0), iLocal_179, 2);
				TASK::TASK_PLAY_ANIM(func_690(0), sLocal_158, "_leadin_mic", 1000f, -4f, -1, 2, 0, 0, 0, 0);
				PED::PLAY_FACIAL_ANIM(func_690(0), "_leadin_Mic_facial", sLocal_158);
				TASK::CLEAR_PED_TASKS(func_690(1));
				TASK::CLEAR_PED_TASKS(func_690(1));
				TASK::TASK_PLAY_ANIM(func_690(1), sLocal_158, "_leadin_fra", 1000f, -4f, -1, 2, 0, 0, 0, 0);
				PED::PLAY_FACIAL_ANIM(func_690(1), "_leadin_Fra_facial", sLocal_158);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uVar6, uLocal_284, "_leadin_cam", sLocal_158);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				func_677("ARM3_SMASH1", 7, 1, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				func_14();
				break;
			
			case 1:
				GlobalFunc_763(iLocal_179, 1f, 1, 0f, 0, 1);
				func_201(PLAYER::PLAYER_ID(), 0, 0);
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_179) < 0.1f)
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_179, 5, -ENTITY::GET_ENTITY_ROTATION_VELOCITY(iLocal_179), Local_105, 0, 1, 0, 0, 0, 1);
				}
				if ((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_284) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_284) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_284) >= 0.7f)) && GlobalFunc_Has_Cutscene_Loaded())
				{
					RECORDING::_0x293220DA1B46CEBC(6f, 0f, 3);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_542[1], "Franklin", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_174, "Siemon", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_179, "Jimmys_Car", 0, 0, 0);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_179, 0, 0, 0f);
					GlobalFunc_8316(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(1);
					func_676(0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_179, 0, 1);
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					func_120(iLocal_174, 1);
					MISC::CLEAR_AREA(-36.6411f, -1102.191f, 26.3443f, 30f, 1, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[0]))
					{
						GlobalFunc_2239(iLocal_181[0], -36.6411f, -1102.191f, 26.3443f, 154.2468f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[1]))
					{
						GlobalFunc_2239(iLocal_181[1], -41.7113f, -1100.042f, 26.0671f, 138.7067f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[2]))
					{
						GlobalFunc_2239(iLocal_181[2], -46.3951f, -1097.778f, 26.3222f, 108.3411f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[3]))
					{
						GlobalFunc_2239(iLocal_181[3], -50.0989f, -1094.534f, 26.0671f, 88.9621f);
					}
					RECORDING::_0x48621C9FCA3EBD28(4);
					GlobalFunc_2241(&iLocal_214);
					func_14();
				}
				break;
			
			case 2:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[3]))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_181[3], 1);
				}
				if (!func_718("SwitchFX[Armenian_3_mcs_8]"))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((12.86667f * 1000f)) && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
						func_712("SwitchFX[Armenian_3_mcs_8]", 1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Siemon", joaat("ig_siemonyetarian")))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_174, iLocal_297);
					PED::SET_PED_AS_ENEMY(iLocal_174, 1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(iLocal_174, func_690(0), 0.5f, -1f, 0f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_174, 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_174, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmys_Car", 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_179, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					MISC::CLEAR_AREA_OF_COPS(-57.6017f, -1095.091f, 25.4343f, 500f, 0);
					MISC::ENABLE_DISPATCH_SERVICE(1, 0);
					MISC::ENABLE_DISPATCH_SERVICE(10, 0);
					MISC::ENABLE_DISPATCH_SERVICE(9, 0);
					MISC::ENABLE_DISPATCH_SERVICE(2, 0);
					MISC::ENABLE_DISPATCH_SERVICE(3, 0);
					MISC::ENABLE_DISPATCH_SERVICE(4, 0);
					MISC::ENABLE_DISPATCH_SERVICE(5, 0);
					PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
					PED::SET_CREATE_RANDOM_COPS(0);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(func_690(0), iLocal_174, 0f, -1f, 0f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_690(0), 0, 0);
					if (iLocal_70)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_69);
						CAM::_0x2A2173E46DAECD12(0, iLocal_71);
						iLocal_70 = 0;
					}
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (iLocal_70)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_69);
						CAM::_0x2A2173E46DAECD12(0, iLocal_71);
						iLocal_70 = 0;
					}
					GlobalFunc_8316(0, 1, 1, 0);
					func_201(PLAYER::PLAYER_ID(), 1, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					func_112("ARM3_BEAT", 7500, 1);
					func_19("ARM3HLP_LOCKON", 1, -1);
					func_14();
				}
				break;
			
			case 3:
				if (CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::_0x3044240D2E0FA842())
				{
					func_8();
				}
				break;
		}
		if (iLocal_47 < 2)
		{
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		PED::SET_PED_RESET_FLAG(iLocal_174, 149, 1);
		PED::SET_PED_RESET_FLAG(iLocal_174, 69, 1);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_174, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	}
	if (func_7())
	{
		RECORDING::_0x81CBAE94390F9F89();
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		GlobalFunc_8316(0, 1, 1, 0);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_676(0);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_179))
		{
			VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_179);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_179, 0);
		GlobalFunc_703(&uLocal_200);
		GlobalFunc_2241(&iLocal_214);
		iLocal_336++;
	}
}






void func_259()//Position - 0x256C2
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	bool bVar5;
	
	if (func_252())
	{
		GlobalFunc_Checkpoint3(4, "stageRammingSpeed", 0, 0, 0, 1);
		iLocal_104 = 0;
		GlobalFunc_7632(1);
		GlobalFunc_4948(&uLocal_323, 0, 0);
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-49.9775f, -1097.287f, 25.4223f, "v_carshowroom");
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_beforeMission"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_beforeMission");
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_afterMissionA"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_afterMissionA");
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_afterMissionB"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_afterMissionB");
		}
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_inMission"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_inMission");
		}
		GlobalFunc_7621(179, 1, 0, 1, 0);
		func_201(PLAYER::PLAYER_ID(), 1, 0);
		AUDIO::STOP_PED_SPEAKING(func_690(1), 1);
		AUDIO::STOP_PED_SPEAKING(func_690(0), 1);
		STREAMING::REQUEST_CLIP_SET("clipset@missarmenian3@franklin_driving");
		while (!STREAMING::HAS_CLIP_SET_LOADED("clipset@missarmenian3@franklin_driving"))
		{
			STREAMING::REQUEST_CLIP_SET("clipset@missarmenian3@franklin_driving");
			func_299();
			func_676(0);
		}
		PED::SET_PED_IN_VEHICLE_CONTEXT(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("MISS_ARMENIAN3_FRANKLIN_TENSE"));
		iLocal_89 = 1;
		ENTITY::SET_ENTITY_PROOFS(func_690(0), 1, 1, 1, 1, 1, 1, 0, 0);
		PED::SET_PED_CONFIG_FLAG(func_690(0), 118, 0);
		PED::SET_PED_CONFIG_FLAG(func_690(0), 208, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_690(0), 1);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
		AUDIO::_FORCE_VEHICLE_ENGINE_AUDIO(iLocal_179, "BJXL_ARMENIAN_3");
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_179, 1, 1);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_214))
		{
			iLocal_214 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pistol")), Local_117, 1, 1, 0);
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_214, uLocal_542[0], PED::GET_PED_BONE_INDEX(uLocal_542[0], 28422), Local_105, Local_105, 0, 0, 0, 0, 2, 1);
		while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_542[0]))
		{
			func_676(0);
		}
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop_michael", 3))
		{
			TASK::TASK_PLAY_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop_michael", 8f, -4f, -1, 2, 0, 0, 0, 0);
		}
		GlobalFunc_173(&uLocal_586, 1, uLocal_542[0], "MICHAEL", 0, 1);
		func_725();
		func_712("ARM3_GUN", 1);
		func_712("ARM3_GUNA", 1);
		func_712("ARM3_GUNB", 1);
		GlobalFunc_703(&uLocal_199);
		func_11(&uLocal_199, Local_138, 0);
		iLocal_57 = (MISC::GET_GAME_TIMER() + 120000);
		CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_8", 8);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_RAM_DEALERSHIP"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_3_RAM_DEALERSHIP");
		}
		func_293(16);
		func_114(14);
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_179, 0);
		if (!iLocal_70)
		{
			iLocal_69 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
			iLocal_71 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
			iLocal_70 = 1;
		}
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		GlobalFunc_8316(0, 1, 1, 0);
		if (func_119())
		{
			func_114(15);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_179, 0);
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_542[0]);
			PED::SET_PED_INTO_VEHICLE(uLocal_542[0], iLocal_179, 2);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop_michael", 3))
			{
				TASK::TASK_PLAY_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop_michael", 8f, -4f, -1, 2, 0, 0, 0, 0);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_179) && !ENTITY::IS_ENTITY_DEAD(iLocal_179))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_179, 4);
				GlobalFunc_2239(iLocal_179, -72.6144f, -1106.491f, 25.0423f, 299.8838f);
			}
			MISC::CLEAR_AREA(-59.8f, -1098.78f, 24.92f, 100f, 1, 0, 0, 0);
			if (!bLocal_96)
			{
				func_118(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1101004800);
			}
			INTERIOR::REFRESH_INTERIOR(iVar0);
			iLocal_91 = 0;
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -56.13f, -1097.6f, 25.16f) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
			uLocal_335 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
			while (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_335))
			{
				uLocal_335 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
				func_676(0);
			}
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_335))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_335) != 3)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_335, 2);
				}
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_179, -148.7664f, -1150f, 23.1124f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(iLocal_179, 3.385f, 2.9552f, -88.1208f, 2, 1);
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_179, 1) };
			MISC::CLEAR_AREA(Var1, 15f, 1, 0, 0, 0);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Var1.x, Var1.f_1, 30f, -55.8188f, -1096.415f, 20f, 20f, 0, 0, 0, 0, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-57.64452f, -1097.634f, 35.42235f, -145.0667f, -1156.564f, 23.02604f, 20f, 0, 0, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -56.13f, -1097.6f, 25.16f) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (SYSTEM::TIMERA() < 100)
		{
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_179, 0);
		}
		func_112("ARM3_RAM1", 4000, 1);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			func_21("Franklin", func_690(1), 0, 2);
			func_21("Michael", func_690(0), 0, 2);
		}
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_335))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_335) != 5)
			{
				if (!func_718("rfShowroomCrash1"))
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_335, 4);
					func_712("rfShowroomCrash1", 1);
				}
			}
			else
			{
				func_712("rfShowroomCrash1", 0);
			}
		}
		else
		{
			uLocal_335 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_215))
		{
			iLocal_215 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_showroom_glass_1b"), -59.87f, -1098.84f, 27.2f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(iLocal_215, 0f, 0f, 121.5f, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_215, 1);
		}
		if (iLocal_207 != 0)
		{
			INTERIOR::_0x4C2330E61D3DEB56(iLocal_207);
		}
		if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -60.15f, -1098.69f, 25.44f, 1) < 100f && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && !GlobalFunc_111())
		{
			if (MISC::GET_GAME_TIMER() > iLocal_55)
			{
				if (iLocal_48 == 0)
				{
					func_281("ARM3_RAM", "ARM3_RAM_1", 7, 1);
					iLocal_48++;
				}
				else if (iLocal_48 == 1)
				{
					func_281("ARM3_RAM", "ARM3_RAM_2", 7, 1);
					iLocal_48++;
				}
				else if (iLocal_48 == 2)
				{
					func_281("ARM3_RAM", "ARM3_RAM_3", 7, 1);
					iLocal_48++;
				}
				iLocal_55 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 25000));
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_199))
			{
				HUD::CLEAR_PRINTS();
				func_112("ARM3_RAM1", 7500, 0);
				GlobalFunc_703(&uLocal_198);
				func_11(&uLocal_199, Local_138, 0);
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(uLocal_198))
		{
			HUD::CLEAR_PRINTS();
			func_112("ARM3_CAR2", 7500, 1);
			GlobalFunc_703(&uLocal_199);
			func_278(&uLocal_198, &iLocal_179, 0);
		}
		fLocal_72 = fLocal_73;
		fLocal_73 = MISC::GET_DISTANCE_BETWEEN_COORDS(-56.71602f, -1097.17f, 25.4223f, ENTITY::GET_ENTITY_COORDS(iLocal_179, 1), 1);
		if (ENTITY::GET_ENTITY_SPEED(iLocal_179) > 5f)
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_215, 0, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_215, 1, 0);
		}
		if ((((((OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_179, -1f, 2.2f, -0.25f), -59.76477f, -1098.799f, 25.42232f, -53.61449f, -1095.079f, 28.92234f, 5.25f, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_179, 1f, 2.2f, -0.25f), -59.76477f, -1098.799f, 25.42232f, -53.61449f, -1095.079f, 28.92234f, 5.25f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_179, -1f, -2.3f, -0.25f), -59.76477f, -1098.799f, 25.42232f, -53.61449f, -1095.079f, 28.92234f, 5.25f, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_179, 1f, -2.3f, -0.25f), -59.76477f, -1098.799f, 25.42232f, -53.61449f, -1095.079f, 28.92234f, 5.25f, 0, 1)) && ENTITY::GET_ENTITY_SPEED(iLocal_179) > 5f) && fLocal_73 < fLocal_72) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.00801f, -1102.252f, 25.43435f, -59.3003f, -1092.674f, 29.43435f, 15f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -61.38735f, -1103.479f, 24.85972f, -58.61892f, -1095.799f, 29.43435f, 10f, 0, 1, 0)))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, 0))
			{
				if (func_276(10f, 1))
				{
					GlobalFunc_7621(178, 1, 0, 1, 0);
					func_114(16);
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_335))
					{
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_335) == 5)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_335, 6);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_215))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_215, ENTITY::GET_ENTITY_COORDS(iLocal_215, 1) - Vector(10f, 0f, 0f), 1, 0, 0, 1);
					}
					if (!func_718("WindowSmashed"))
					{
						AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN", "V_CARSHOWROOM_PS_WINDOW_BROKEN");
						func_712("WindowSmashed", 1);
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ARM_3_CAR_GLASS_CRASH", 0, 1);
					PAD::SET_PAD_SHAKE(0, 500, 256);
					iVar4 = MISC::GET_GAME_TIMER() + 500;
					while ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_179, -54.03884f, -1098.502f, 25.42233f, -57.81364f, -1091.971f, 28.42233f, 4f, 0, 1, 0) && iVar4 > MISC::GET_GAME_TIMER()) && ENTITY::GET_ENTITY_SPEED(iLocal_179) > 1f)
					{
						PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
						if (iVar4 < MISC::GET_GAME_TIMER())
						{
						}
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
						func_676(0);
					}
					func_201(PLAYER::PLAYER_ID(), 0, 0);
					func_8();
				}
			}
		}
		else
		{
			GlobalFunc_9137(&uLocal_323, -55.2f, -1095.8f, 27.3f, "ARM3HLP_WINDOW", 1726668277, 1, 1, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			bVar5 = false;
			if (iLocal_104)
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 0) && !GlobalFunc_160()) && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					bVar5 = true;
					iLocal_104 = 0;
				}
				if (GlobalFunc_160() || CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					iLocal_104 = 0;
				}
			}
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 0))
			{
				iLocal_104 = 1;
			}
			if (bVar5)
			{
				if (iLocal_69 == 4)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(1);
				}
				else if (iLocal_69 == 0)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(1);
				}
				else if (iLocal_69 == 1)
				{
					if (bLocal_68)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(2);
					}
					else
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(0);
					}
					bLocal_68 = !bLocal_68;
				}
				else if (iLocal_69 == 2)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(1);
				}
				iLocal_69 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
			}
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_RAM_DEALERSHIP"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_RAM_DEALERSHIP");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_WINDOW_FOCUS_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_3_WINDOW_FOCUS_CAM");
			}
		}
		else
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_RAM_DEALERSHIP"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_3_RAM_DEALERSHIP");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_WINDOW_FOCUS_CAM"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_WINDOW_FOCUS_CAM");
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -52.02579f, -1095.311f, 32.23032f, 28f, 28f, 8f, 0, 1, 0))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_57 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -60.15f, -1098.69f, 25.44f, 1) > 200f)
			{
				iLocal_337 = 18;
				func_691();
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179) && !ENTITY::IS_ENTITY_DEAD(iLocal_179))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_542[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_542[0]))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_542[0], iLocal_179))
				{
					iLocal_337 = 20;
					func_691();
				}
			}
		}
	}
	if (func_7())
	{
		GlobalFunc_4948(&uLocal_323, 0, 0);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_RAM_DEALERSHIP"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_RAM_DEALERSHIP");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_WINDOW_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_WINDOW_FOCUS_CAM");
		}
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		if (CAM::DOES_CAM_EXIST(uLocal_204))
		{
			CAM::SET_CAM_ACTIVE(uLocal_204, 0);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		}
		if (!CAM::DOES_CAM_EXIST(uLocal_203))
		{
			uLocal_203 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_203))
		{
			CAM::SET_CAM_ACTIVE(uLocal_203, 1);
		}
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		func_725();
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, 0))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, -1);
		}
		STREAMING::REMOVE_CLIP_SET("clipset@missarmenian3@franklin_driving");
		GlobalFunc_703(&uLocal_198);
		GlobalFunc_703(&uLocal_199);
		GlobalFunc_2241(&iLocal_215);
		iLocal_336++;
	}
}

















bool func_276(float fParam0, int iParam1)//Position - 0x26FC7
{
	if (GlobalFunc_552(1, 0, 1) == 1)
	{
		if (fParam0 != 0f)
		{
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), fParam0, 1, 1, 0, 0);
		}
		func_725();
		GlobalFunc_8316(1, 1, iParam1, 0);
	}
	return GlobalFunc_552(1, 0, 1);
}


void func_278(var uParam0, int iParam1, bool bParam2)//Position - 0x270E8
{
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				*uParam0 = GlobalFunc_6783(*iParam1, bParam2, 0);
				if (bParam2 == 0)
				{
					HUD::SET_BLIP_PRIORITY(*uParam0, 7);
				}
			}
		}
	}
}



void func_281(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x271E2
{
	if (!func_718(sParam1))
	{
		while (!GlobalFunc_10630(&uLocal_586, cLocal_346, sParam0, sParam1, iParam2, 0, 0))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			func_676(0);
		}
		func_712(sParam1, bParam3);
	}
}












void func_293(int iParam0)//Position - 0x278AD
{
	iLocal_344 = iParam0;
	func_655();
}


void func_295()//Position - 0x2799B
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	
	if (func_252())
	{
		func_201(PLAYER::PLAYER_ID(), 0, 0);
		CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_6", 8);
		func_114(12);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		if (func_119())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_179) && !ENTITY::IS_ENTITY_DEAD(iLocal_179))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_179, 4);
				GlobalFunc_2239(iLocal_179, -148.7715f, -1149.903f, 23.2067f, 271.8071f);
			}
			if (!bLocal_96)
			{
				func_118(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1101004800);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			func_114(13);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			func_21("Franklin", func_690(1), 0, 2);
			func_21("Michael", func_690(0), 0, 2);
		}
		if (GlobalFunc_4926(1000))
		{
			HUD::CLEAR_PRINTS();
			func_8();
		}
		switch (iLocal_47)
		{
			case 0:
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_179, 1), 200f, 0);
				}
				if (GlobalFunc_550("Armenian_3_mcs_6"))
				{
					if (CAM::DOES_CAM_EXIST(uLocal_204))
					{
						CAM::DETACH_CAM(uLocal_204);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 384);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_542[0], "Michael", 0, 0, 384);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_179, "Jimmys_Car", 0, 0, 0);
					GlobalFunc_8316(1, 1, 1, 0);
					Var0 = { -148.7715f, -1149.903f, 23.2067f };
					fVar3 = 271.8071f;
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_179, -91.7239f, -1180.303f, 25.3327f, 3f, 3f, 3f, 0, 1, 0))
					{
						Var0 = { -91.7239f, -1180.303f, 25.3327f };
						fVar3 = 3.5979f;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_179, -64.8446f, -1130.052f, 24.7219f, 3f, 3f, 3f, 0, 1, 0))
					{
						Var0 = { -64.8446f, -1130.052f, 24.7219f };
						fVar3 = 92.7692f;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_179, -97.2467f, -1087.589f, 25.2988f, 3f, 3f, 3f, 0, 1, 0))
					{
						Var0 = { -97.2467f, -1087.589f, 25.2988f };
						fVar3 = 161.1787f;
					}
					CUTSCENE::SET_CUTSCENE_TRIGGER_AREA(Local_105, 0f, (fVar3 - 270f), 0f);
					CUTSCENE::START_CUTSCENE_AT_COORDS(Var0 + Vector(1f, 0f, 0f), 2048);
					func_676(0);
					iLocal_754 = 0;
					func_299();
					PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_179, 1), 25f, 1, 0, 0, 0);
					func_120(iLocal_214, 0);
					func_725();
					GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_179, 1);
					iLocal_89 = 0;
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					RECORDING::_0x48621C9FCA3EBD28(4);
					func_14();
				}
				break;
			
			case 1:
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_179, 1);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (!func_718("ARMENIAN_3_MCS_6_SHOT_1"))
					{
						GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_179, 1);
						func_712("ARMENIAN_3_MCS_6_SHOT_1", 1);
					}
					else if (!func_718("ARMENIAN_3_MCS_6_SHOT_2"))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((4.799f * 1000f)) && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
						{
							GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_179, 0);
							func_712("ARMENIAN_3_MCS_6_SHOT_2", 1);
						}
					}
					else if (!func_718("ARMENIAN_3_MCS_6_SHOT_3"))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((14.999f * 1000f)) && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
						{
							GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_179, 1);
							func_712("ARMENIAN_3_MCS_6_SHOT_3", 1);
						}
					}
					else if (!func_718("ARMENIAN_3_MCS_6_SHOT_4"))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((17.16567f * 1000f)) && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
						{
							GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_179, 0);
							func_712("ARMENIAN_3_MCS_6_SHOT_4", 1);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, -1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_542[0], iLocal_179, 0))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_542[0], iLocal_179, 2);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_214))
					{
						iLocal_214 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pistol")), Local_117, 1, 1, 0);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_214, uLocal_542[0], PED::GET_PED_BONE_INDEX(uLocal_542[0], 28422), Local_105, Local_105, 0, 0, 0, 0, 2, 1);
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop_michael", 3))
					{
						TASK::TASK_PLAY_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop_michael", 1000f, -4f, -1, 2, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_542[0], 0, 0);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmys_Car", 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_179, 1, 1);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_179);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_179);
				}
				VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_179, 0);
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -56.13f, -1097.6f, 25.16f) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
					Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_179, 1) };
					MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Var4.x, Var4.f_1, 30f, -55.8188f, -1096.415f, 20f, 30f, 0, 0, 0, 0, 0);
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_179, -148.7715f, -1149.903f, 23.2067f, 3f, 3f, 3f, 0, 1, 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_179, -148.7664f, -1150f, 24.1124f, 0, 0, 1);
							ENTITY::SET_ENTITY_ROTATION(iLocal_179, 3.385f, 2.9552f, -88.1208f, 2, 1);
						}
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_179, -91.7239f, -1180.303f, 25.3327f, 3f, 3f, 3f, 0, 1, 0))
						{
							GlobalFunc_2239(iLocal_179, -91.7239f, -1180.303f, 25.3327f, 3.5979f);
						}
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_179, -64.8446f, -1130.052f, 24.7219f, 3f, 3f, 3f, 0, 1, 0))
						{
							GlobalFunc_2239(iLocal_179, -64.8446f, -1130.052f, 24.7219f, 92.7692f);
						}
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_179, -97.2467f, -1087.589f, 25.2988f, 3f, 3f, 3f, 0, 1, 0))
						{
							GlobalFunc_2239(iLocal_179, -97.2467f, -1087.589f, 25.2988f, 161.1787f);
						}
					}
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-57.64452f, -1097.634f, 35.42235f, -145.0667f, -1156.564f, 23.02604f, 20f, 0, 0, 1);
					GlobalFunc_8316(0, 1, 1, 0);
					func_8();
				}
				break;
		}
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	if (func_7())
	{
		GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_179, 0);
		CUTSCENE::REMOVE_CUTSCENE();
		RECORDING::_0x81CBAE94390F9F89();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_676(0);
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		if (!PED::IS_PED_IN_VEHICLE(uLocal_542[0], iLocal_179, 0))
		{
			PED::SET_PED_INTO_VEHICLE(uLocal_542[0], iLocal_179, 2);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, 0))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, -1);
		}
		func_725();
		func_120(iLocal_214, 1);
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		GlobalFunc_8316(0, 1, 1, 0);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_179))
		{
			VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_179);
		}
		iLocal_336++;
	}
}




void func_299()//Position - 0x2811D
{
	bool bVar0;
	
	if (iLocal_753 != MISC::GET_FRAME_COUNT())
	{
		iLocal_753 = MISC::GET_FRAME_COUNT();
		if (!CAM::DOES_CAM_EXIST(uLocal_204))
		{
			uLocal_204 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			CAM::SET_CAM_FOV(uLocal_204, 28.6103f);
			CAM::SHAKE_CAM(uLocal_204, "HAND_SHAKE", 1f);
			CAM::SET_CAM_ACTIVE(uLocal_204, 1);
			if (!iLocal_70)
			{
				iLocal_69 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
				iLocal_71 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
				iLocal_70 = 1;
			}
		}
		if (iLocal_754 && ENTITY::IS_ENTITY_UPRIGHT(iLocal_179, 1119092736))
		{
			if (CAM::DOES_CAM_EXIST(uLocal_204))
			{
				if (!CAM::IS_CAM_RENDERING(uLocal_204))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (GlobalFunc_116(0))
					{
						GlobalFunc_6685(1);
					}
					PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
					PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
					GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(0.5f);
					GRAPHICS::CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE("CSM_ST_BOX4x4");
					GRAPHICS::_0x0AE73D8DF3A762B2(0);
					GRAPHICS::SET_TIMECYCLE_MODIFIER("Hint_cam");
				}
				else
				{
					STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				}
			}
		}
		else
		{
			iLocal_754 = 0;
			if (CAM::DOES_CAM_EXIST(uLocal_204))
			{
				if (CAM::IS_CAM_RENDERING(uLocal_204) || iLocal_336 == 8)
				{
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(1f);
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
					GRAPHICS::_0x0AE73D8DF3A762B2(1);
					if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
					{
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					}
					if (iLocal_336 != 7)
					{
						PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
					}
				}
			}
		}
		if (CAM::DOES_CAM_EXIST(uLocal_204) && iLocal_336 != 8)
		{
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_204, iLocal_179, -0.0481f, 2.0908f, 0.5994f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_204, iLocal_179, -0.2945f, -0.893f, 0.4086f, 1);
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_179) != 0)
		{
			INTERIOR::_0x405DC2AEF6AF95B9(INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_179));
		}
		if (CAM::DOES_CAM_EXIST(uLocal_204) && CAM::IS_CAM_ACTIVE(uLocal_204))
		{
			GlobalFunc_2243();
		}
		else
		{
			GlobalFunc_2242();
		}
		PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
		bVar0 = false;
		if (iLocal_104)
		{
			if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 0) && !GlobalFunc_160()) && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				bVar0 = true;
				iLocal_104 = 0;
			}
			if (GlobalFunc_160() || CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				iLocal_104 = 0;
			}
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 0))
		{
			iLocal_104 = 1;
		}
		if (bVar0)
		{
			if (iLocal_69 == 4)
			{
				CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(1);
			}
			else if (iLocal_69 == 0)
			{
				CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(1);
			}
			else if (iLocal_69 == 1)
			{
				if (bLocal_68)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(2);
				}
				else
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(0);
				}
				bLocal_68 = !bLocal_68;
			}
			else if (iLocal_69 == 2)
			{
				CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(1);
			}
			iLocal_69 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
		}
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
}



void func_302()//Position - 0x28393
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var7;
	var uVar10;
	var uVar13;
	int iVar16;
	int iVar17;
	
	if (func_252())
	{
		func_201(PLAYER::PLAYER_ID(), 1, 0);
		func_712("GarageDoorLockedSkip", 1);
		iLocal_89 = 1;
		GlobalFunc_6685(0);
		GlobalFunc_7632(1);
		AUDIO::STOP_PED_SPEAKING(func_690(1), 1);
		AUDIO::STOP_PED_SPEAKING(func_690(0), 1);
		if (iLocal_102 == 0)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			GlobalFunc_8316(0, 1, 1, 0);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_179))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_179);
		}
		STREAMING::REQUEST_CLIP_SET("clipset@missarmenian3@franklin_driving");
		while (!STREAMING::HAS_CLIP_SET_LOADED("clipset@missarmenian3@franklin_driving"))
		{
			STREAMING::REQUEST_CLIP_SET("clipset@missarmenian3@franklin_driving");
			func_299();
			func_676(0);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_DEALERSHIP"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_3_DRIVE_TO_DEALERSHIP");
		}
		iLocal_57 = (MISC::GET_GAME_TIMER() + 180000);
		CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_6", 8);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 0, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 0, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 0, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 0, 1);
		PATHFIND::SET_ROADS_IN_AREA(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 0, 1);
		PATHFIND::SET_ROADS_IN_AREA(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 0, 1);
		PATHFIND::SET_ROADS_IN_AREA(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 0, 1);
		PATHFIND::SET_ROADS_IN_AREA(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 0, 1);
		MISC::CLEAR_AREA(-149.383f, -1150.328f, 23.1441f, 10f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(-149.383f, -1150.328f, 23.1441f, 10f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(-149.383f, -1150.328f, 23.1441f, 10f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(-149.383f, -1150.328f, 23.1441f, 10f, 1, 0, 0, 0);
		iLocal_220 = 0;
		if (func_119())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_179) && !ENTITY::IS_ENTITY_DEAD(iLocal_179))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_179, 4);
				GlobalFunc_2239(iLocal_179, -676.2552f, -278.2624f, 35.1f, 209.8584f);
			}
			if (!bLocal_96)
			{
				func_118(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1101004800);
			}
			func_676(0);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_179, 1, 1);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_179, 20f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			func_112("ARM3_DEST", 7500, 1);
			func_11(&uLocal_199, -148.7715f, -1149.903f, 23.2067f, 1);
			HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
			HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-273.0147f, -1140.79f, 22.78436f);
			HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-148.7715f, -1149.903f, 23.2067f);
			HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			func_21("Franklin", func_690(1), 0, 2);
			func_21("Michael", func_690(0), 0, 2);
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_135, 40f, 40f, 40f, 0, 1, 0))
		{
			func_142(40, 3);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_intro_michael", 3))
		{
			if (!func_718("PistolCock"))
			{
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_542[0], sLocal_150, "michaelappears_intro_michael") > 0.4f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ARM_3_PISTOL_COCK", 0, 1);
					func_712("PistolCock", 1);
				}
			}
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_542[0], sLocal_150, "michaelappears_intro_michael") > 0.45f)
			{
				if (!func_718("ARM3_GUN"))
				{
					PED::SET_PED_IN_VEHICLE_CONTEXT(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("MISS_ARMENIAN3_FRANKLIN_TENSE"));
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_179, 5, true);
					func_114(10);
				}
				func_677("ARM3_GUN", 7, 1, 0);
			}
		}
		if ((func_718("ARM3_GUN") && !func_718("ARM3_GUNA")) && !func_718("ARM3_GUNB"))
		{
			if (!GlobalFunc_111())
			{
				if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iLocal_179)) >= 1f)
				{
					func_677("ARM3_GUNA", 7, 1, 0);
				}
				else
				{
					func_677("ARM3_GUNB", 7, 1, 0);
				}
			}
		}
		if (((((((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_intro_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_542[0], sLocal_150, "michaelappears_intro_michael") > 0.57f) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop2_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop3_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop4_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop5_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_loop6_michael", 3))
		{
			if ((func_718("ARM3_GUNA") || func_718("ARM3_GUNB")) && !GlobalFunc_111())
			{
				if ((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.701f, 19.82074f, -289.8f, -1141.7f, 67.07879f, 90f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.701f, 19.82074f, -101.7f, -1383.3f, 73.34282f, 90f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.701f, 19.82074f, 81.4f, -1129.5f, 73.33405f, 90f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.701f, 19.82074f, -22.4f, -914.9f, 72.96643f, 90f, 0, 1, 0)) && !func_718("ARM3_STOP"))
				{
					func_677("ARM3_DRIV", 7, 1, 0);
				}
			}
			if (!func_718("ARM3HLP_INCAR"))
			{
				if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						iVar0 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
						if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) && !CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
						{
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
							func_19("ARM3HLP_INCAR", 1, -1);
						}
					}
				}
			}
		}
		if (!iLocal_757 && GlobalFunc_7635(&uLocal_323, 1, 1, 0))
		{
			if (GlobalFunc_74("ARM3HLP_INCAR"))
			{
				GlobalFunc_2238(1);
			}
			iVar1 = 1;
		}
		if (GlobalFunc_160())
		{
			iLocal_757 = 1;
		}
		else
		{
			iLocal_757 = 0;
		}
		if (func_718("ARM3_GUN") || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_542[0], sLocal_150, "michaelappears_intro_michael", 3))
		{
			if (!GlobalFunc_116(0) && iVar1)
			{
				iLocal_754 = 1;
				func_299();
			}
			else
			{
				iLocal_754 = 0;
			}
		}
		if ((func_718("ARM3_GUN") && !GlobalFunc_111()) && PED::IS_PED_IN_VEHICLE(uLocal_542[0], iLocal_179, 0))
		{
			GlobalFunc_703(&uLocal_201);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, 0))
			{
				if (!GlobalFunc_111() && CAM::IS_GAMEPLAY_CAM_RENDERING())
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_199))
					{
						HUD::CLEAR_PRINTS();
						func_112("ARM3_TAKE", 7500, 0);
						GlobalFunc_703(&uLocal_198);
						func_11(&uLocal_199, -148.7715f, -1149.903f, 23.2067f, 1);
						HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
						HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-273.0147f, -1140.79f, 22.78436f);
						HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-148.7715f, -1149.903f, 23.2067f);
						HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
					}
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uLocal_198))
			{
				HUD::CLEAR_PRINTS();
				func_112("ARM3_CAR2", 7500, 1);
				GlobalFunc_703(&uLocal_199);
				func_278(&uLocal_198, &iLocal_179, 0);
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, 0) && PED::IS_PED_IN_VEHICLE(uLocal_542[0], iLocal_179, 0))
		{
			if (((!func_718("Destination1") && !func_718("Destination2")) && !func_718("Destination3")) && !func_718("Destination4"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.701f, 19.82074f, -289.8f, -1141.7f, 67.07879f, 90f, 0, 1, 0))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						func_677("ARM3_STOP", 7, 1, 0);
					}
					func_712("Destination1", 1);
				}
			}
			else if (func_718("Destination1"))
			{
				if (func_718("HaltVehicle") && GlobalFunc_763(iLocal_179, 1093140480, 1, 1056964608, 0, 1))
				{
					func_201(PLAYER::PLAYER_ID(), 0, 256);
					if (!GlobalFunc_5672("ARM3_STOP") && !GlobalFunc_5672("ARM3_DRIV"))
					{
						func_8();
					}
				}
				if ((!func_718("HaltVehicle") && ENTITY::IS_ENTITY_AT_COORD(iLocal_179, -148.7715f, -1149.903f, 23.2067f, 3f, 3f, 2f, 1, 1, 0)) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_179, 1119092736))
				{
					HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
					if (!HUD::DOES_BLIP_EXIST(uLocal_199))
					{
						HUD::CLEAR_GPS_MULTI_ROUTE();
						GlobalFunc_703(&uLocal_199);
						func_11(&uLocal_199, -148.7715f, -1149.903f, 23.2067f, 1);
					}
					func_712("HaltVehicle", 1);
				}
			}
			if (((!func_718("Destination1") && !func_718("Destination2")) && !func_718("Destination3")) && !func_718("Destination4"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.701f, 19.82074f, -101.7f, -1383.3f, 73.34282f, 90f, 0, 1, 0))
				{
					HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
					HUD::CLEAR_GPS_MULTI_ROUTE();
					GlobalFunc_703(&uLocal_199);
					func_11(&uLocal_199, -91.7239f, -1180.303f, 25.3327f, 1);
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						func_677("ARM3_STOP", 7, 1, 0);
					}
					func_712("Destination2", 1);
				}
			}
			else if (func_718("Destination2"))
			{
				if (func_718("HaltVehicle") && GlobalFunc_763(iLocal_179, 1093140480, 1, 1056964608, 0, 1))
				{
					func_201(PLAYER::PLAYER_ID(), 0, 256);
					if (!GlobalFunc_5672("ARM3_STOP") && !GlobalFunc_5672("ARM3_DRIV"))
					{
						func_8();
					}
				}
				if ((!func_718("HaltVehicle") && ENTITY::IS_ENTITY_AT_COORD(iLocal_179, -91.7239f, -1180.303f, 25.3327f, 3f, 3f, 2f, 1, 1, 0)) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_179, 1119092736))
				{
					func_712("HaltVehicle", 1);
				}
			}
			if (((!func_718("Destination1") && !func_718("Destination2")) && !func_718("Destination3")) && !func_718("Destination4"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.701f, 19.82074f, 81.4f, -1129.5f, 73.33405f, 90f, 0, 1, 0))
				{
					HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
					HUD::CLEAR_GPS_MULTI_ROUTE();
					GlobalFunc_703(&uLocal_199);
					func_11(&uLocal_199, -64.8446f, -1130.052f, 24.7219f, 1);
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						func_677("ARM3_STOP", 7, 1, 0);
					}
					func_712("Destination3", 1);
				}
			}
			else if (func_718("Destination3"))
			{
				if (func_718("HaltVehicle") && GlobalFunc_763(iLocal_179, 1093140480, 1, 1056964608, 0, 1))
				{
					func_201(PLAYER::PLAYER_ID(), 0, 256);
					if (!GlobalFunc_5672("ARM3_STOP") && !GlobalFunc_5672("ARM3_DRIV"))
					{
						func_8();
					}
				}
				if ((!func_718("HaltVehicle") && ENTITY::IS_ENTITY_AT_COORD(iLocal_179, -64.8446f, -1130.052f, 24.7219f, 3f, 3f, 2f, 1, 1, 0)) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_179, 1119092736))
				{
					func_712("HaltVehicle", 1);
				}
			}
			if (((!func_718("Destination1") && !func_718("Destination2")) && !func_718("Destination3")) && !func_718("Destination4"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.701f, 19.82074f, -22.4f, -914.9f, 72.96643f, 90f, 0, 1, 0))
				{
					HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
					HUD::CLEAR_GPS_MULTI_ROUTE();
					GlobalFunc_703(&uLocal_199);
					func_11(&uLocal_199, -97.2467f, -1087.589f, 25.2988f, 1);
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						func_677("ARM3_STOP", 7, 1, 0);
					}
					func_712("Destination4", 1);
				}
			}
			else if (func_718("Destination4"))
			{
				if (func_718("HaltVehicle") && GlobalFunc_763(iLocal_179, 1093140480, 1, 1056964608, 0, 1))
				{
					func_201(PLAYER::PLAYER_ID(), 0, 256);
					if (!GlobalFunc_5672("ARM3_STOP") && !GlobalFunc_5672("ARM3_DRIV"))
					{
						func_8();
					}
				}
				if ((!func_718("HaltVehicle") && ENTITY::IS_ENTITY_AT_COORD(iLocal_179, -97.2467f, -1087.589f, 25.2988f, 3f, 3f, 2f, 1, 1, 2)) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_179, 1119092736))
				{
					func_712("HaltVehicle", 1);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_215))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -59.8f, -1098.78f, 24.92f, 100f, 100f, 50f, 0, 1, 0))
			{
				iLocal_215 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_showroom_glass_1b"), -59.87f, -1098.84f, 27.2f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_215, 0f, 0f, 121.5f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_215, 1);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
		if (MISC::GET_GAME_TIMER() > iLocal_57)
		{
			if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_7"))
			{
				if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(func_690(0), iLocal_179, 2, 0, 0))
				{
					while (!GlobalFunc_763(iLocal_179, 10f, 10, 1056964608, 0, 1))
					{
						func_676(0);
					}
					iVar2 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_179);
					iVar16 = -1;
					MISC::GET_MODEL_DIMENSIONS(joaat("bjxl"), &Var4, &Var7);
					if (iLocal_220 == 0)
					{
						iLocal_220 = SHAPETEST::START_SHAPE_TEST_BOX(ENTITY::GET_ENTITY_COORDS(iLocal_179, 1), Var7 - Var4, ENTITY::GET_ENTITY_ROTATION(iLocal_179, 2), 2, 346, iLocal_179, 4);
					}
					if (iLocal_220 != 0)
					{
						iVar17 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_220, &iVar16, &uVar10, &uVar13, &uVar3);
						if (iVar17 == 2)
						{
							iLocal_220 = 0;
						}
						if (iVar17 != 1)
						{
							if ((((iVar16 < 1 && ENTITY::IS_ENTITY_UPRIGHT(iLocal_179, 90f)) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -52.02579f, -1095.311f, 32.23032f, 50f, 50f, 8f, 0, 1, 0)) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -148.7715f, -1149.903f, 23.2067f, 20f, 20f, 8f, 0, 1, 0)) && !(iVar2 != 0 && INTERIOR::GET_INTERIOR_GROUP_ID(iVar2) == 1))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_542[0], "Michael", 0, 0, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_179, "Franklins_Car", 0, 0, 0);
								GlobalFunc_8316(1, 1, 1, 0);
								CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
								CUTSCENE::START_CUTSCENE(0);
								if (!ENTITY::IS_ENTITY_UPRIGHT(iLocal_179, 45f))
								{
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_179);
								}
								CUTSCENE::_0x011883F41211432A(ENTITY::GET_ENTITY_COORDS(iLocal_179, 1), ENTITY::GET_ENTITY_ROTATION(iLocal_179, 2), 0);
								func_676(0);
								CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
								GlobalFunc_2241(&iLocal_214);
								while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
								{
									if (CUTSCENE::GET_CUTSCENE_TIME() >= 11900)
									{
										GlobalFunc_8316(0, 1, 1, 0);
										iLocal_337 = 18;
										func_691();
									}
									func_676(0);
								}
								GlobalFunc_8316(0, 1, 1, 0);
								iLocal_337 = 18;
								func_691();
							}
							else
							{
								iLocal_337 = 18;
								func_691();
							}
						}
					}
				}
			}
			else if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_7", 8);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179) && !ENTITY::IS_ENTITY_DEAD(iLocal_179))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_542[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_542[0]))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_542[0], iLocal_179))
				{
					iLocal_337 = 20;
					func_691();
				}
			}
		}
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	if (func_7())
	{
		GlobalFunc_4948(&uLocal_323, 0, 0);
		if (!CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_6"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
			while (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				func_676(0);
			}
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_DEALERSHIP"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_TO_DEALERSHIP");
		}
		GlobalFunc_7632(0);
		if (CAM::DOES_CAM_EXIST(uLocal_204))
		{
			if (CAM::IS_CAM_RENDERING(uLocal_204))
			{
				PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
			}
		}
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_179, 5, true);
		GlobalFunc_703(&uLocal_198);
		GlobalFunc_703(&uLocal_201);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		iLocal_336++;
	}
}

void func_303()//Position - 0x29506
{
	int iVar0;
	
	if (func_252())
	{
		GlobalFunc_Checkpoint3(3, "stageStealCar", 0, 0, 0, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_177) && !ENTITY::IS_ENTITY_DEAD(iLocal_177))
		{
			GlobalFunc_9138(iLocal_177);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		GlobalFunc_9132(1);
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-49.9775f, -1097.287f, 25.4223f, "v_carshowroom");
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_beforeMission"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_beforeMission");
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_afterMissionA"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_afterMissionA");
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_afterMissionB"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_afterMissionB");
		}
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_inMission"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_inMission");
		}
		GlobalFunc_7621(179, 1, 0, 1, 0);
		INTERIOR::REFRESH_INTERIOR(iVar0);
		iLocal_91 = 0;
		func_201(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_89 = 1;
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		GlobalFunc_8316(0, 1, 1, 0);
		func_490(4, joaat("v_ilev_mm_door"), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179) && !ENTITY::IS_ENTITY_DEAD(iLocal_179))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_179, 4);
		}
		iLocal_102 = 0;
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
		GlobalFunc_5669(4, PLAYER::PLAYER_PED_ID());
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[4 /*31*/], 0, 1, 1);
		GlobalFunc_173(&uLocal_586, 3, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		GlobalFunc_173(&uLocal_586, 8, 0, "SIMEON", 0, 1);
		AUDIO::STOP_PED_SPEAKING(func_690(1), 1);
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_542[0]))
		{
			func_339(&(uLocal_542[0]), 0, Local_117, 26.8488f, 0);
			func_306(uLocal_542[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_542[0], joaat("weapon_unarmed"), 1);
			func_120(uLocal_542[0], 0);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uLocal_542[0], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_542[0], iLocal_296);
			PED::SET_PED_INTO_VEHICLE(uLocal_542[0], iLocal_179, 2);
		}
		ENTITY::SET_ENTITY_PROOFS(func_690(0), 1, 1, 1, 1, 1, 1, 0, 0);
		PED::SET_PED_CONFIG_FLAG(func_690(0), 118, 0);
		PED::SET_PED_CONFIG_FLAG(func_690(0), 208, 1);
		AUDIO::STOP_PED_SPEAKING(func_690(0), 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_690(0), 1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_STEAL_CAR"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_3_STEAL_CAR");
		}
		func_114(7);
		if (func_119())
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			iLocal_206 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_206);
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_206))
			{
				func_676(0);
			}
			iLocal_90 = 1;
			func_712("GarageDoorLockedSkip", 1);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, -1);
			if (!bLocal_96)
			{
				func_118(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f);
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_179);
			PHYSICS::ACTIVATE_PHYSICS(iLocal_179);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			func_676(750);
			func_114(8);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, 0))
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				func_142(40, 3);
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_199))
			{
				HUD::CLEAR_PRINTS();
				func_112("ARM3_DEST", 7500, 1);
				GlobalFunc_703(&uLocal_198);
				func_11(&uLocal_199, -148.7715f, -1149.903f, 23.2067f, 1);
				HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-273.0147f, -1140.79f, 22.78436f);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-148.7715f, -1149.903f, 23.2067f);
				HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
			}
			if (func_718("ARM3_DEST"))
			{
				if (!func_718("ARM3_INCAR"))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -811.175f, 187.6008f, 73.30764f, 1) > 100f && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, 0))
						{
							if (GlobalFunc_7937(PLAYER::PLAYER_PED_ID()))
							{
								GlobalFunc_10638(&uLocal_586, 18, "ARM3AUD", "ARM3_INCARA", 8, 1, 0, 0, 0);
							}
							else
							{
								GlobalFunc_10638(&uLocal_586, 18, "ARM3AUD", "ARM3_INCARB", 8, 1, 0, 0, 0);
							}
							RECORDING::_0x293220DA1B46CEBC(10f, 8f, 3);
							func_712("ARM3_INCAR", 1);
						}
					}
				}
			}
			if (func_718("ARM3_INCAR"))
			{
				if (GlobalFunc_5672("ARM3_INCARA") || GlobalFunc_5672("ARM3_INCARB"))
				{
					if (PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID()))
					{
						PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
						PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
					}
				}
				else if (!PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID()))
				{
					PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
				}
			}
			if ((ENTITY::GET_ENTITY_HEALTH(iLocal_179) < iLocal_64 || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_179) < fLocal_65) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_179) < fLocal_66)
			{
				AUDIO::INTERRUPT_CONVERSATION(func_690(1), "ARM3_BRAA", "FRANKLIN");
				iLocal_64 = ENTITY::GET_ENTITY_HEALTH(iLocal_179);
				fLocal_65 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_179);
				fLocal_66 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_179);
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(uLocal_198))
		{
			HUD::CLEAR_PRINTS();
			func_112("ARM3_CAR2", 7500, 1);
			GlobalFunc_703(&uLocal_199);
			func_278(&uLocal_198, &iLocal_179, 0);
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -845.2866f, 162.1034f, 64.66984f, -845.3317f, 155.9653f, 70.58934f, 4f, 0, 1, 0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_STEAL_CAR"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_STEAL_CAR");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_EXIT_THROUGH_GATE"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_3_EXIT_THROUGH_GATE");
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (PAD::IS_CONTROL_PRESSED(0, 23) || PAD::IS_CONTROL_PRESSED(0, 75))
			{
				iLocal_102 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179) && !ENTITY::IS_ENTITY_DEAD(iLocal_179))
		{
			if (ENTITY::IS_ENTITY_UPRIGHT(iLocal_179, 1119092736))
			{
				iLocal_58 = MISC::GET_GAME_TIMER() + 10000;
				if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_179))
				{
					if (((((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -60.72f, -1100.55f, 25.4f, 1) < 1200f || iLocal_102 == 1) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, 0)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !GlobalFunc_5672("ARM3_INCARA")) && !GlobalFunc_5672("ARM3_INCARB"))
					{
						if (func_276(0, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_179, 4);
							if (!ENTITY::DOES_ENTITY_EXIST(uLocal_542[0]))
							{
								func_339(&(uLocal_542[0]), 0, Local_117, 26.8488f, 0);
								func_306(uLocal_542[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								WEAPON::SET_CURRENT_PED_WEAPON(uLocal_542[0], joaat("weapon_unarmed"), 1);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_214))
							{
								iLocal_214 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pistol")), Local_117, 1, 1, 0);
							}
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_214, uLocal_542[0], PED::GET_PED_BONE_INDEX(uLocal_542[0], 28422), Local_105, Local_105, 0, 0, 0, 0, 2, 1);
							PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uLocal_542[0], 0);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_542[0], iLocal_296);
							GlobalFunc_173(&uLocal_586, 1, uLocal_542[0], "MICHAEL", 0, 1);
							PED::SET_PED_INTO_VEHICLE(uLocal_542[0], iLocal_179, 2);
							while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_542[0]))
							{
								PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
								PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
								func_676(0);
							}
							TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
							TASK::TASK_PLAY_ANIM(0, sLocal_150, "michaelappears_intro_franklin", 8f, -8f, -1, 32, 0.31f, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_205);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
							TASK::TASK_PLAY_ANIM(0, sLocal_150, "michaelappears_intro_michael", 1000f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, sLocal_150, "michaelappears_loop_michael", 8f, -4f, -1, 2, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_542[0], uLocal_205);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_542[0], 0, 0);
							WEAPON::GIVE_WEAPON_TO_PED(uLocal_542[0], iLocal_295, 120, 1, 1);
							WEAPON::SET_CURRENT_PED_WEAPON(uLocal_542[0], iLocal_295, 1);
							func_676(0);
							CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_179, -0.1f, 1f, 1.1f, 1, 2000, 6000, 2000, -244429742);
							if (!iLocal_70)
							{
								iLocal_69 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
								iLocal_71 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
								iLocal_70 = 1;
							}
							CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(0);
							func_120(uLocal_542[0], 1);
							RECORDING::_0x293220DA1B46CEBC(0f, 15f, 3);
							func_8();
						}
					}
				}
			}
			else if (ENTITY::GET_ENTITY_SPEED(iLocal_179) < 1f && MISC::GET_GAME_TIMER() > iLocal_58)
			{
				iLocal_337 = 20;
				func_691();
			}
		}
	}
	if (func_7())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179) && !ENTITY::IS_ENTITY_DEAD(iLocal_179))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_179, 4);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_STEAL_CAR"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_STEAL_CAR");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_EXIT_THROUGH_GATE"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_EXIT_THROUGH_GATE");
		}
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_542[0]))
		{
			PED::DELETE_PED(&(uLocal_542[0]));
			func_339(&(uLocal_542[0]), 0, Local_117, 26.8488f, 0);
			func_306(uLocal_542[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_542[0], joaat("weapon_unarmed"), 1);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_214))
			{
				iLocal_214 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pistol")), Local_117, 1, 1, 0);
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_214, uLocal_542[0], PED::GET_PED_BONE_INDEX(uLocal_542[0], 28422), Local_105, Local_105, 0, 0, 0, 0, 2, 1);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uLocal_542[0], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_542[0], iLocal_296);
			PED::SET_PED_INTO_VEHICLE(uLocal_542[0], iLocal_179, 2);
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_542[0]))
			{
				func_676(0);
			}
			CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_179, -0.1f, 1f, 1.1f, 1, 2000, 6000, 2000, -244429742);
			if (!iLocal_70)
			{
				iLocal_69 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
				iLocal_71 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
				iLocal_70 = 1;
			}
			CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(0);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
			TASK::TASK_PLAY_ANIM(0, sLocal_150, "michaelappears_intro_franklin", 8f, -8f, -1, 32, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_205);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
			TASK::TASK_PLAY_ANIM(0, sLocal_150, "michaelappears_intro_michael", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sLocal_150, "michaelappears_loop_michael", 8f, -4f, -1, 2, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_542[0], uLocal_205);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_542[0], iLocal_295, 120, 1, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_542[0], iLocal_295, 1);
		}
		GlobalFunc_173(&uLocal_586, 1, uLocal_542[0], "MICHAEL", 0, 1);
		func_120(uLocal_542[0], 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
		func_142(40, 3);
		GlobalFunc_703(&uLocal_198);
		iLocal_336++;
	}
}



int func_306(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2A0C1
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
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8357(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_7062(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7062(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = GlobalFunc_7614(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7614(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7614(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68149 };
		}
		else
		{
			uVar11 = { GlobalFunc_7617(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, uVar11[iVar0]) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68165 };
						}
						else
						{
							uVar27 = { GlobalFunc_7616(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11229(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_306(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							GlobalFunc_4911(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
						}
						GlobalFunc_8357(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11229(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_306(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11064(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11063(iParam0, iVar10, &iVar4, 1))
							{
								func_306(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_306(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10836(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_306(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_306(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_306(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_306(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_306(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { GlobalFunc_7616(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11229(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_306(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11229(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_306(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11229(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_306(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11036(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11063(iParam0, iVar10, &iVar4, 0))
		{
			func_306(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11062(iParam0, iVar10, &iVar4))
		{
			func_306(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

































void func_339(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6)//Position - 0x300C0
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		while (!func_340(uParam0, iParam1, Param2, fParam5, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (iParam6 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
		}
	}
}

int func_340(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x300FD
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
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8386(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_482(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7692(*iParam0);
			func_342(*iParam0, bParam8);
			GlobalFunc_516(*iParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}


int func_342(int iParam0, bool bParam1)//Position - 0x30215
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_346(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7939(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_346(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10949(iParam0, 3, 169))
					{
						func_306(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 6))
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 11))
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 10))
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 50))
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 14, 59))
			{
				func_306(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10949(iParam0, 8, 22))
			{
				func_306(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 14))
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10949(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 4))
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 3))
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 14, 82))
			{
				func_306(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10949(iParam0, 8, 76))
			{
				func_306(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 1))
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10949(iParam0, 12, 12))
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 15))
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10949(iParam0, 3, 71))
				{
					func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10949(iParam0, 12, 7))
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 6))
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 14, 88))
			{
				func_306(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10949(iParam0, 8, 17))
			{
				func_306(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10949(iParam0, 12, 11))
			{
				func_306(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_346(int iParam0, int iParam1)//Position - 0x30964
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (GlobalFunc_42(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11064(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_348(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			GlobalFunc_8358(iParam0, &Var2, 1);
			Global_89752[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_8999();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!GlobalFunc_39(0) && !GlobalFunc_39(1)) && !GlobalFunc_39(2)) && !GlobalFunc_39(3)) && !GlobalFunc_39(4)) && !GlobalFunc_39(9)) && !GlobalFunc_39(10)))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/] = { Var2 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_7062(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_7062(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}


void func_348(int iParam0, var uParam1, bool bParam2)//Position - 0x30BDB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (GlobalFunc_42(iVar0))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (GlobalFunc_11063(iParam0, iVar1, &iVar2, 0))
			{
				func_306(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11062(iParam0, iVar1, &iVar2))
			{
				func_306(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_5668(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_351(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_5668(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_351(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_6784(740, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6784(2035, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6785(161, 1, -1, 1);
		}
	}
}



int func_351(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x30E72
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
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
	var uVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	var uVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1315831 != 4 && Global_1315831 != 5) && Global_1315831 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_219 == 2)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_68149 };
		}
		else
		{
			uVar15 = { GlobalFunc_7617(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 10, 0) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
					}
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
					{
						GlobalFunc_10920(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, uVar15[iVar0]) };
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = { Global_68165 };
							}
							else
							{
								uVar31 = { GlobalFunc_7616(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iParam4 == -1)
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
							}
							else
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
							}
							if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
							{
								GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, GlobalFunc_11066(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_351(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9005();
			if (iVar57 != -1)
			{
				GlobalFunc_9004(iVar57, 0, Global_68104);
			}
			func_434(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10920(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11065(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_351(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar68, joaat("FORCE_PROP"), 0))
		{
			iVar69 = GlobalFunc_7062(iParam0, 1);
			iVar3 = GlobalFunc_11065(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_351(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = GlobalFunc_7062(iParam0, 11);
				iVar71 = GlobalFunc_7062(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_7062(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11065(iParam0, iVar5, 11, iVar70, 3, 0);
					}
					if (iVar73 != -99)
					{
						iVar74 = iVar73;
						iVar75 = 0;
						while (iVar75 < 9)
						{
							if (GlobalFunc_308(iVar5, iVar74, iVar75) == iVar72)
							{
								iVar11 = iVar75;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar75++;
						}
					}
				}
				iVar76 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar70 = GlobalFunc_7062(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_351(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else if (GlobalFunc_6737(iVar5, iParam2))
				{
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (!GlobalFunc_6737(iVar5, iVar70))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_12"), 0)))
						{
						}
						else
						{
							iVar78 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar78 != -99)
							{
								func_351(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_351(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 8, iVar71) };
							iVar81 = Global_68106[1 /*14*/].f_4;
							iVar82 = GlobalFunc_6736(iVar5, iVar71, iVar81);
							if (iVar82 == -99)
							{
								iVar83 = iVar71;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || GlobalFunc_306(GlobalFunc_4913(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar82 = GlobalFunc_5013(iVar5, 11, -1);
										Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar82) };
										iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, Global_68106[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, iVar81);
							}
							if (iVar83 != -99)
							{
								func_351(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_351(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10622(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_434(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11066(iParam0, 8, -1), iParam2);
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = GlobalFunc_6671(2135, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = GlobalFunc_6671(2142, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_391(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_434(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_7062(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_7062(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_7062(iParam0, 7);
				if (!GlobalFunc_8525(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar87 = GlobalFunc_6671(2082, iParam10, 0);
				iVar88 = GlobalFunc_6671(2083, iParam10, 0);
				iVar89 = GlobalFunc_6671(2084, iParam10, 0);
				uVar90 = GlobalFunc_6788(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar87, iVar88, iVar89, 0f, uVar90, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar87, iVar88, iVar89, 0f, fVar90, 0f, false);
				}
				iVar91 = 0;
				while (iVar91 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar91, 0f);
					iVar91++;
				}
			}
			else
			{
				GlobalFunc_9000(iParam0, Global_68104);
			}
			iVar92 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar93 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar92, joaat("FORCE_PROP"), 0))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar93, joaat("FORCE_PROP"), 0))
				{
					iVar94 = GlobalFunc_7062(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7614(iParam0, iVar95);
						if (iVar3 == iVar96)
						{
							PED::CLEAR_PED_PROP(iParam0, iVar95);
						}
						iVar95++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_351(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7940(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_10950(iParam0, 9, iVar97))
						{
							func_351(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_351(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_351(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar98 = GlobalFunc_6671(2024, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, GlobalFunc_5005(iParam0, iVar98), GlobalFunc_282(iParam0, iVar98), GlobalFunc_81(iParam0, iVar98));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, GlobalFunc_5005(PLAYER::PLAYER_PED_ID(), iVar98), GlobalFunc_282(PLAYER::PLAYER_PED_ID(), iVar98), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), GlobalFunc_81(PLAYER::PLAYER_PED_ID(), iVar98));
					GlobalFunc_5004(PLAYER::PLAYER_ID(), iVar98);
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar99 = GlobalFunc_11066(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11066(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_351(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_351(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				GlobalFunc_5003(iParam0);
				iVar102 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar103 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar104 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar102, iVar103);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar104, joaat("FORCE_PROP"), 0))
				{
					iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_351(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11065(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_351(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11175(iParam0, &uVar4))
		{
			func_351(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_351(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_351(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_351(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar105 = GlobalFunc_308(iVar5, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), iVar11);
		if (iVar105 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_351(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}








































void func_391(int iParam0, int iParam1, bool bParam2)//Position - 0x36EEA
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_9718(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9004(iVar1, 1, Global_68104);
	}
	func_392(iParam0, bParam2, 0);
}

void func_392(int iParam0, bool bParam1, bool bParam2)//Position - 0x36F2C
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_68104;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar14 = GlobalFunc_303(iParam0);
		bVar15 = GlobalFunc_11177(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = GlobalFunc_11176(iParam0);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (GlobalFunc_8361(iVar18, iVar0))
			{
				if (GlobalFunc_5099(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9001(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8361(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar20 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar14, iVar19, &Var21))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21))
				{
					iVar36 = (129 + iVar19);
					if (GlobalFunc_8361(iVar36, iVar0))
					{
						if (GlobalFunc_9001(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var21.f_2, Var21.f_3);
							GlobalFunc_294(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}










































void func_434(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x43608
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (GlobalFunc_6737(iVar0, iParam2))
				{
					iParam1 = 8;
					iParam2 = GlobalFunc_7062(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = GlobalFunc_7062(iParam0, 11);
				if (!GlobalFunc_6737(iVar0, iVar1))
				{
					return;
				}
			}
			GlobalFunc_9718(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!GlobalFunc_9719(iVar0, iParam2, 13) && !GlobalFunc_9719(iVar0, iParam2, 14)) && !GlobalFunc_9719(iVar0, iParam2, 15)) && !GlobalFunc_9719(iVar0, iParam2, 16)) && !GlobalFunc_9719(iVar0, iParam2, 71)) && !GlobalFunc_9719(iVar0, iParam2, 72))
				{
					GlobalFunc_9718(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = GlobalFunc_9002(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					GlobalFunc_9003(iParam0, iVar2);
				}
				else
				{
					GlobalFunc_9004(iVar2, 1, Global_68104);
				}
			}
		}
	}
}
















































void func_482(int iParam0)//Position - 0x5BC5B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0))
	{
		if (!Global_89948[iVar0])
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] != 0)
			{
				if (GlobalFunc_518(iParam0) != Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0])
				{
					GlobalFunc_521(iVar0);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
				}
			}
		}
		func_348(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11064(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11064(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11064(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11064(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_348(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








void func_490(int iParam0, int iParam1, int iParam2)//Position - 0x5C66A
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iLocal_221;
			break;
		
		case 1:
			iVar0 = iLocal_222;
			break;
		
		case 2:
			iVar0 = iLocal_223;
			break;
		
		case 3:
			iVar0 = iLocal_224;
			break;
		
		case 4:
			iVar0 = iLocal_225;
			break;
	}
	iParam1 = iParam1;
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
	{
		iVar1 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iVar0);
		if (iVar1 == 1)
		{
			OBJECT::DOOR_SYSTEM_SET_SPRING_REMOVED(iVar0, iParam2, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 0, 0, 1);
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_SPRING_REMOVED(iVar0, iParam2, 0, 1);
		}
	}
}







void func_497()//Position - 0x5C864
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	var uVar10;
	
	if (func_252())
	{
		GlobalFunc_Checkpoint3(2, "stageSneakThrough", 0, 0, 0, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_177) && !ENTITY::IS_ENTITY_DEAD(iLocal_177))
		{
			GlobalFunc_9138(iLocal_177);
		}
		func_201(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_89 = 1;
		iLocal_338 = 0;
		iLocal_339[1] = 0;
		iLocal_339[2] = 0;
		iLocal_339[3] = 0;
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_179, 5, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_170))
		{
			while (!GlobalFunc_7047(&iLocal_170, 14, Local_120, 110.1351f, 1))
			{
				func_676(0);
			}
			ENTITY::SET_ENTITY_HEALTH(iLocal_170, 101);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_170, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_170, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_170, 6, 3, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_170, 118, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_170, 208, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_170, 1);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_170, sLocal_150, "jimmy_playingvideogame_base", -806.657f, 170.139f, 76.47f, 0f, 0f, 111f, 8f, -8f, -1, 3584, 0f, 2, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, 1);
			func_117(iLocal_170, Local_120, 110.1351f, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(14));
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_170, sLocal_150, "jimmy_playingvideogame_loop_d", -806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 8f, -8f, -1, 9225, 0f, 2, 0);
			func_676(0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_171))
		{
			while (!GlobalFunc_7047(&iLocal_171, 15, Local_123, 50.0651f, 1))
			{
				func_676(0);
			}
			ENTITY::SET_ENTITY_HEALTH(iLocal_171, 101);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_171, 3, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_171, 4, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_171, 6, 2, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_171, 118, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_171, 208, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_171, 1);
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_171))
			{
				func_676(0);
			}
			if (iLocal_206 == 0)
			{
				iLocal_206 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
			}
			INTERIOR::_0x82EBB79E258FA2B7(iLocal_171, iLocal_206);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(15));
			func_117(iLocal_171, -800.5298f, 170.2849f, 75.7406f, 180.0982f, 1);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_151, "tracey_argument", -806.166f, 170.525f, 76.46f, 0f, 0f, 110f, 1000f, -1000f, -1, 9216, 0.9f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_150, "tracey_idle_a", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 1000f, -8f, -1, 9224, 0f, 2, 1);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_150, "tracey_idle_b", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9224, 0f, 2, 1);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_150, "tracey_idle_c", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9224, 0f, 2, 1);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_150, "tracey_idle_d", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9225, 0f, 2, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_171, uLocal_205);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_216))
			{
				iLocal_216 = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing_02"), ENTITY::GET_ENTITY_COORDS(iLocal_171, 1), 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_216, iLocal_171, PED::GET_PED_BONE_INDEX(iLocal_171, 60309), Local_105, Local_105, 1, 1, 0, 0, 2, 1);
			}
			func_676(0);
		}
		while (!GlobalFunc_7047(&iLocal_172, 17, Local_126, 0.3001f, 1))
		{
			func_676(0);
		}
		PED::SET_PED_COMPONENT_VARIATION(iLocal_172, 2, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_172, 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_172, 4, 0, 1, 0);
		ENTITY::SET_ENTITY_HEALTH(iLocal_172, 101);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_172, 1);
		GlobalFunc_173(&uLocal_586, 4, iLocal_172, "AMANDA", 0, 1);
		if (iLocal_206 == 0)
		{
			iLocal_206 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
		}
		INTERIOR::_0x82EBB79E258FA2B7(iLocal_172, iLocal_206);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(17));
		func_676(0);
		while (!GlobalFunc_7047(&iLocal_173, 25, Local_129, -3.4667f, 1))
		{
			func_676(0);
		}
		ENTITY::SET_ENTITY_HEALTH(iLocal_173, 101);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_173, 1);
		GlobalFunc_173(&uLocal_586, 7, iLocal_173, "TENNISCOACH", 0, 1);
		if (iLocal_206 == 0)
		{
			iLocal_206 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
		}
		INTERIOR::_0x82EBB79E258FA2B7(iLocal_173, iLocal_206);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(25));
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-805.8604f, 172.6347f, 75.7407f))
		{
			iLocal_287[0] = TASK::ADD_COVER_POINT(-808.0162f, 178.515f, 71.1531f, -70f, 1, 2, 0, 1);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-805.7504f, 172.4508f, 75.7407f))
		{
			iLocal_287[1] = TASK::ADD_COVER_POINT(-805.7504f, 172.4508f, 75.7407f, 111f, 0, 2, 0, 1);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_INSIDE_HOUSE"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_3_INSIDE_HOUSE");
		}
		func_114(3);
		AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("V_MICHAEL_PS_BATHROOM_WITH_WINDOW", "V_MICHAEL_PS_BATHROOM_WITHOUT_WINDOW");
		func_278(&uLocal_198, &iLocal_179, 0);
		func_676(0);
		iLocal_212 = OBJECT::CREATE_OBJECT(iLocal_291, -801.49f, 179.15f, 72.32f, 1, 1, 0);
		func_676(0);
		iLocal_213 = OBJECT::CREATE_OBJECT(iLocal_292, -801.49f, 179.15f, 72.32f, 1, 1, 0);
		func_676(0);
		iLocal_209 = OBJECT::CREATE_OBJECT(iLocal_293, -801.49f, 179.35f, 72.32f, 1, 1, 0);
		func_676(0);
		iLocal_210 = OBJECT::CREATE_OBJECT(iLocal_293, -801.49f, 179.85f, 72.32f, 1, 1, 0);
		func_676(0);
		iLocal_211 = OBJECT::CREATE_OBJECT(iLocal_294, -801.49f, 179.55f, 72.32f, 1, 1, 0);
		func_676(0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_212, iLocal_170, PED::GET_PED_BONE_INDEX(iLocal_170, 28422), Local_105, Local_105, 0, 0, 0, 0, 2, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_213, iLocal_170, PED::GET_PED_BONE_INDEX(iLocal_170, 31086), 0.01f, 0f, 0f, -180f, 90f, 0f, 0, 0, 0, 0, 2, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_209, iLocal_172, PED::GET_PED_BONE_INDEX(iLocal_172, 28422), Local_105, Local_105, 0, 0, 0, 0, 2, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_210, iLocal_173, PED::GET_PED_BONE_INDEX(iLocal_173, 28422), Local_105, Local_105, 0, 0, 0, 0, 2, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_211, iLocal_173, PED::GET_PED_BONE_INDEX(iLocal_173, 60309), Local_105, Local_105, 0, 0, 0, 0, 2, 1);
		if (func_119())
		{
			func_117(PLAYER::PLAYER_PED_ID(), -802.6609f, 168.6319f, 75.7407f, 31.0258f, 1);
			GlobalFunc_2239(iLocal_179, Local_132, 111.6656f);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_171, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_172, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_173, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_179, 1);
			iLocal_206 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_206);
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_206))
			{
				func_676(0);
			}
			iLocal_90 = 1;
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_171, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_172, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_173, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_179, 0);
			if (!bLocal_96)
			{
				func_118(-802.1f, 167.9f, 77.7f, 20f);
			}
			func_117(PLAYER::PLAYER_PED_ID(), -802.6609f, 168.6319f, 75.7407f, 31.0258f, 1);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 0, 0);
			GlobalFunc_2239(iLocal_179, Local_132, 111.6656f);
			PHYSICS::ACTIVATE_PHYSICS(iLocal_179);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			func_114(5);
			if (!CAM::DOES_CAM_EXIST(uLocal_203))
			{
				uLocal_203 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
			}
			CAM::SET_CAM_PARAMS(uLocal_203, -802.7332f, 167.9913f, 77.42276f, -11.8075f, 0f, 17.05362f, 50f, 0, 1, 1, 2);
			CAM::SET_CAM_ACTIVE(uLocal_203, 1);
			func_676(0);
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0f, 1, 0);
			func_676(10);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_216))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_171) && !PED::IS_PED_INJURED(iLocal_171))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_171, sLocal_151, "tracey_argument", 3))
				{
					if (ENTITY::IS_ENTITY_VISIBLE(iLocal_216))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_216, 0);
					}
				}
				else if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_216))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_216, 1);
				}
			}
		}
		switch (iLocal_47)
		{
			case 0:
				func_19("ARM3HLP_AVOID", 1, -1);
				if (!GlobalFunc_111())
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_206);
					GlobalFunc_173(&uLocal_586, 6, iLocal_170, "JIMMY", 0, 1);
					func_677("ARM3_JIM1.5", 7, 1, 0);
					func_14();
				}
				break;
			
			case 1:
				if (!GlobalFunc_111())
				{
					func_112("ARM3_GETCAR", 7500, 1);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_282))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_LOOPED(uLocal_282))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_282) == 1f && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_209))
						{
							uLocal_282 = PED::CREATE_SYNCHRONIZED_SCENE(-796.971f, 185.839f, 72.717f, 0f, 0f, 51f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_172, uLocal_282, sLocal_150, "tennis_coach_loop_wife", 1000f, -4f, 8, 0, 1000f, 4);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_173, uLocal_282, sLocal_150, "tennis_coach_loop_coach", 1000f, -4f, 8, 0, 1000f, 4);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_282, 1);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_282, 0f);
							ENTITY::DETACH_ENTITY(iLocal_209, 0, 1);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_209, uLocal_282, "tennis_coach_loop_racketa", sLocal_150, 1000f, 8f, 0, 1148846080);
							ENTITY::DETACH_ENTITY(iLocal_210, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_210, 1);
							ENTITY::DETACH_ENTITY(iLocal_211, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_211, 1);
							SYSTEM::SETTIMERA(0);
						}
					}
				}
				iVar0 = 0;
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					iVar0 = 1;
				}
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
				{
					if (iLocal_49[iLocal_48] == -1)
					{
						iLocal_49[iLocal_48] = 9;
					}
					else if (iLocal_49[iLocal_48] > 0)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.1275f, 167.6575f, 75.74072f, -807.4443f, 178.8427f, 78.99088f, 3.25f, 0, 1, 0))
						{
							if (SYSTEM::TIMERB() > iLocal_56)
							{
								if (!GlobalFunc_5672("ARM3_JIM"))
								{
									func_677("ARM3_JIM", 8, 0, iVar0);
									iLocal_56 = MISC::GET_RANDOM_INT_IN_RANGE(5500, 10000);
									SYSTEM::SETTIMERB(0);
									iLocal_49[iLocal_48] = (iLocal_49[iLocal_48] - 1);
								}
							}
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.1275f, 167.6575f, 75.74072f, -807.4443f, 178.8427f, 78.99088f, 3.25f, 0, 1, 0))
					{
						if (SYSTEM::TIMERB() > iLocal_56)
						{
							GlobalFunc_5130(iLocal_170, "GENERIC_CURSE_HIGH", 3);
							iLocal_56 = MISC::GET_RANDOM_INT_IN_RANGE(5500, 10000);
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.1136f, 176.5611f, 73.9906f, -804.4435f, 182.1805f, 79.0034f, 5f, 0, 1, 0))
					{
						if ((!GlobalFunc_5672("ARM3_TRCYA") || !GlobalFunc_5672("ARM3_TRCYB")) || !GlobalFunc_5672("ARM3_TRCYC"))
						{
							GlobalFunc_173(&uLocal_586, 5, iLocal_171, "TRACEY", 0, 1);
							if (!func_718("ARM3_TRCYA"))
							{
								func_677("ARM3_TRCYA", 8, 1, 0);
								RECORDING::_0x293220DA1B46CEBC(3.5f, 4f, 3);
							}
							else if (!func_718("ARM3_TRCYB"))
							{
								func_677("ARM3_TRCYB", 8, 1, 0);
							}
							else if (!func_718("ARM3_TRCYC"))
							{
								func_677("ARM3_TRCYC", 8, 1, 0);
							}
						}
					}
				}
				if (((((func_718("ARM3_TRCYA") && func_718("ARM3_TRCYB")) && func_718("ARM3_TRCYC")) && !GlobalFunc_5672("ARM3_TRCYA")) && !GlobalFunc_5672("ARM3_TRCYB")) && !GlobalFunc_5672("ARM3_TRCYC"))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_171, sLocal_150, "tracey_idle_a", 3))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_171, sLocal_150, "tracey_idle_a", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9217, 0f, 2, 0);
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -794.9276f, 184.107f, 70.83471f, -815.3759f, 176.0862f, 74.15309f, 25f, 0, 1, 0))
				{
					if (((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_282) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_209)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_210)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_211))
					{
						uLocal_282 = PED::CREATE_SYNCHRONIZED_SCENE(-796.971f, 185.839f, 72.717f, 0f, 0f, 51f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_172, uLocal_282, sLocal_150, "tennis_coach_intro_wife", 1000f, -4f, 8, 0, 1000f, 4);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_173, uLocal_282, sLocal_150, "tennis_coach_intro_coach", 1000f, -4f, 8, 0, 1000f, 4);
						ENTITY::DETACH_ENTITY(iLocal_209, 0, 1);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_209, uLocal_282, "tennis_coach_intro_racketa", sLocal_150, 1000f, 8f, 0, 1148846080);
						ENTITY::DETACH_ENTITY(iLocal_210, 0, 1);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_210, uLocal_282, "tennis_coach_intro_racketb", sLocal_150, 1000f, 8f, 0, 1148846080);
						ENTITY::DETACH_ENTITY(iLocal_211, 0, 1);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_211, uLocal_282, "tennis_coach_intro_bag", sLocal_150, 1000f, 8f, 0, 1148846080);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_282))
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
						{
							if (!func_718("ARM3_WIFE_1"))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_LOOPED(uLocal_282) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_282) >= 0.125f)
								{
									func_281("ARM3_WIFE", "ARM3_WIFE_1", 7, 1);
									RECORDING::_0x293220DA1B46CEBC(1f, 4f, 4);
								}
							}
							if (!func_718("ARM3_WIFE_2"))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_LOOPED(uLocal_282) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_282) >= 0.335f)
								{
									func_281("ARM3_WIFE", "ARM3_WIFE_2", 7, 1);
								}
							}
							if (PED::IS_SYNCHRONIZED_SCENE_LOOPED(uLocal_282) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_282) >= 0.39f)
							{
								if (!func_718("GarageDoorSmoothClosed"))
								{
									if ((!GlobalFunc_5672("ARM3_WIFEA") || !GlobalFunc_5672("ARM3_WIFEB")) || !GlobalFunc_5672("ARM3_WIFEC"))
									{
										if (!func_718("ARM3_WIFEA"))
										{
											func_677("ARM3_WIFEA", 8, 1, 0);
											RECORDING::_0x293220DA1B46CEBC(4.5f, 6f, 3);
										}
										else if (!func_718("ARM3_WIFEB"))
										{
											func_677("ARM3_WIFEB", 8, 1, 0);
										}
										else if (!func_718("ARM3_WIFEC"))
										{
											func_677("ARM3_WIFEC", 8, 1, 0);
										}
									}
								}
							}
						}
					}
				}
				if (((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.1275f, 167.6575f, 75.74072f, -807.4443f, 178.8427f, 78.99088f, 3.25f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.1136f, 176.5611f, 73.9906f, -805.7435f, 185.8805f, 79.0034f, 5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -794.9276f, 184.107f, 70.83471f, -815.3759f, 176.0862f, 74.15309f, 25f, 0, 1, 0)) || func_718("GarageDoorSmoothClosed"))
				{
					if (func_718("ARM3_JIM"))
					{
						func_712("ARM3_JIM", 0);
					}
					if (!GlobalFunc_116(0) && GlobalFunc_111())
					{
						GlobalFunc_4935();
					}
				}
				if (!func_718("SneakReminder"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.9565f, 175.5414f, 75.74074f, -801.0405f, 178.926f, 79.24074f, 3.75f, 0, 1, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -805.7858f, 179.7488f, 75.74074f, -801.4209f, 168.2948f, 79.24074f, 11f, 0, 1, 0))
							{
								func_712("ARM3HLP_SNEAK", 0);
								func_19("ARM3HLP_SNEAK", 1, -1);
								func_712("SneakReminder", 1);
							}
						}
						else
						{
							func_712("ARM3HLP_SNEAK", 1);
							func_712("SneakReminder", 1);
						}
					}
				}
				if (GlobalFunc_74("ARM3HLP_SNEAK"))
				{
					if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_2238(1);
					}
				}
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (func_718("ARM3HLP_SNEAK"))
					{
						if (!func_718("ARM3HLP_SNEAK2"))
						{
							if (Global_86803 < 2)
							{
								func_19("ARM3HLP_SNEAK2", 1, -1);
								Global_86803 = 2;
							}
							else
							{
								func_712("ARM3HLP_SNEAK2", 1);
							}
						}
						else if (!func_718("ARM3HLP_STAT"))
						{
							if (Global_86803 < 3)
							{
								func_19("ARM3HLP_STAT", 1, -1);
								Global_86803 = 3;
							}
							else
							{
								func_712("ARM3HLP_STAT", 1);
							}
						}
						else if (!func_718("ARM3HLP_SOUNDBLIPS") && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -805.7858f, 179.7488f, 75.74074f, -801.4209f, 168.2948f, 79.24074f, 11f, 0, 1, 0))
						{
							func_19("ARM3HLP_SOUNDBLIPS", 1, -1);
						}
					}
				}
				break;
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_171, sLocal_151, "tracey_argument", 3))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_171, sLocal_151, "tracey_argument") >= 0.95f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_171, sLocal_151, "tracey_argument") < 1f)
			{
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_171, sLocal_151, "tracey_argument", 1f);
			}
		}
		func_510();
		func_507();
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.4023f, 189.0046f, 71.47892f, -815.2882f, 185.9782f, 74.95445f, 6.5f, 0, 1, 0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_INSIDE_HOUSE"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_INSIDE_HOUSE");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_ENTER_GARAGE"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_3_ENTER_GARAGE");
			}
			if (!func_718("EnterGarageAudio"))
			{
				func_114(6);
				func_712("EnterGarageAudio", 1);
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_179, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			func_8();
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -805.7858f, 179.7488f, 75.74074f, -801.4209f, 168.2948f, 79.24074f, 11f, 0, 1, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_194) && ENTITY::DOES_ENTITY_EXIST(iLocal_170))
			{
				func_681(&uLocal_194, &iLocal_170, 1);
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_195) && ENTITY::DOES_ENTITY_EXIST(iLocal_171))
			{
				uLocal_195 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_171, 1));
				HUD::SET_BLIP_COLOUR(uLocal_195, 1);
				HUD::SET_BLIP_SCALE(uLocal_195, 0.75f);
				HUD::SET_BLIP_PRIORITY(uLocal_195, 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_195, "ARM3_BLIPPED");
				Local_141 = { ENTITY::GET_ENTITY_COORDS(iLocal_171, 1) };
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_195))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_171, sLocal_151, "tracey_argument", 3))
				{
					Local_141 = { ENTITY::GET_ENTITY_COORDS(iLocal_171, 1) };
				}
				else
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_171, 1) };
					Local_141.x = (Local_141.x + ((((Var1.x - Local_141.x) / 1f) * GlobalFunc_253(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()), 1f, 2f)) * SYSTEM::TIMESTEP()));
					Local_141.f_1 = (Local_141.f_1 + ((((Var1.f_1 - Local_141.f_1) / 1f) * GlobalFunc_253(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()), 1f, 2f)) * SYSTEM::TIMESTEP()));
					Local_141.f_2 = (Local_141.f_2 + ((((Var1.f_2 - Local_141.f_2) / 1f) * GlobalFunc_253(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()), 1f, 2f)) * SYSTEM::TIMESTEP()));
				}
				Var4 = { Local_141 };
				Var7 = { HUD::GET_BLIP_COORDS(uLocal_195) };
				Var7.x = (Var7.x + ((((Var4.x - Var7.x) / 1f) * GlobalFunc_253(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()), 1f, 2f)) * SYSTEM::TIMESTEP()));
				Var7.f_1 = (Var7.f_1 + ((((Var4.f_1 - Var7.f_1) / 1f) * GlobalFunc_253(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()), 1f, 2f)) * SYSTEM::TIMESTEP()));
				Var7.f_2 = (Var7.f_2 + ((((Var4.f_2 - Var7.f_2) / 1f) * GlobalFunc_253(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()), 1f, 2f)) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(uLocal_195, Var7);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_197))
			{
				GlobalFunc_703(&uLocal_197);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_196))
			{
				GlobalFunc_703(&uLocal_196);
			}
		}
		else
		{
			if (!func_718("GarageDoorSmoothClosed"))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_197) && ENTITY::DOES_ENTITY_EXIST(iLocal_173))
				{
					func_681(&uLocal_197, &iLocal_173, 1);
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_196) && ENTITY::DOES_ENTITY_EXIST(iLocal_172))
				{
					func_681(&uLocal_196, &iLocal_172, 1);
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_197))
				{
					GlobalFunc_703(&uLocal_197);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_196))
				{
					GlobalFunc_703(&uLocal_196);
				}
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_194))
			{
				GlobalFunc_703(&uLocal_194);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_195))
			{
				GlobalFunc_703(&uLocal_195);
			}
		}
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_170) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_171)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_172)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_173)))
		{
			if (WEAPON::IS_FLASH_LIGHT_ON(PLAYER::PLAYER_PED_ID()))
			{
				if ((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 32.1361f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 179.8933f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.4743f, 169.5663f, 75.74033f, -806.6594f, 177.8588f, 78.24074f, 2.5f, 0, 1, 0))
				{
					func_505();
					if (func_685(sLocal_150))
					{
						uVar10 = PED::CREATE_SYNCHRONIZED_SCENE(-806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_170, uVar10, sLocal_150, "jimmy_playingvideogame_fail", 8f, -8f, 5, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_212, uVar10, "jimmy_playingvideogame_fail_controller", sLocal_150, 8f, -8f, 0, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_213, uVar10, "jimmy_playingvideogame_fail_headset", sLocal_150, 8f, -8f, 0, 1148846080);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(uVar10, 0.25f);
					}
					PED::SET_PED_KEEP_TASK(iLocal_170, 1);
					GlobalFunc_173(&uLocal_586, 6, iLocal_170, "JIMMY", 0, 1);
					func_677("ARM3_JIMF", 7, 1, 0);
					func_676(2000);
					iLocal_337 = 17;
					func_691();
				}
				if ((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 162.1006f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 240.0467f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.4769f, 175.8703f, 73.99074f, -807.1281f, 185.3459f, 78.25426f, 3.25f, 0, 1, 0))
				{
					if (func_685(sLocal_150))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_171, sLocal_151, "tracey_argument", 3))
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_171, sLocal_150, "tracey_fail", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 4f, -8f, -1, 9218, 0f, 2, 1);
						}
						else
						{
							TASK::TASK_REACT_AND_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID());
						}
					}
					PED::SET_PED_KEEP_TASK(iLocal_171, 1);
					GlobalFunc_173(&uLocal_586, 5, iLocal_171, "TRACEY", 0, 1);
					func_677("ARM3_TRCF", 7, 1, 0);
					func_676(2000);
					iLocal_337 = 17;
					func_691();
				}
				if ((((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 262.5618f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 315.2036f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -815.7925f, 177.1448f, 69.40309f, -796.0557f, 184.8813f, 73.85547f, 3.25f, 0, 1, 0)) || ((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 291.0086f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 330.7509f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.4074f, 186.8146f, 71.60547f, -797.2438f, 177.1144f, 74.83471f, 8f, 0, 1, 0))) || ((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 313.1061f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 337.2681f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -796.1494f, 185.4063f, 71.10547f, -806.5534f, 170.2218f, 74.83471f, 6f, 0, 1, 0)))
				{
					TASK::CLEAR_PED_TASKS(iLocal_172);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_172, PLAYER::PLAYER_PED_ID());
					PED::SET_PED_KEEP_TASK(iLocal_172, 1);
					TASK::CLEAR_PED_TASKS(iLocal_173);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_173, PLAYER::PLAYER_PED_ID());
					PED::SET_PED_KEEP_TASK(iLocal_173, 1);
					func_504();
					func_677("ARM3_WIFF", 7, 1, 0);
					func_676(2000);
					iLocal_337 = 17;
					func_691();
				}
			}
		}
		if (PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 2f);
		}
		else
		{
			PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
		}
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -805.7858f, 179.7488f, 75.74074f, -801.4209f, 168.2948f, 79.24074f, 11f, 0, 1, 0) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.75f);
		}
		else
		{
			PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
		}
		HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	if (func_7())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_INSIDE_HOUSE"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_INSIDE_HOUSE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_ENTER_GARAGE"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_ENTER_GARAGE");
		}
		if (iLocal_99)
		{
			GlobalFunc_7063(1, 5);
			iLocal_99 = 0;
		}
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_676(0);
		}
		GlobalFunc_4935();
		GlobalFunc_703(&uLocal_193);
		GlobalFunc_703(&uLocal_194);
		GlobalFunc_703(&uLocal_195);
		GlobalFunc_703(&uLocal_197);
		GlobalFunc_703(&uLocal_196);
		GlobalFunc_703(&uLocal_202);
		GlobalFunc_703(&uLocal_199);
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		PED::SET_PED_KEEP_TASK(iLocal_170, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_170);
		PED::SET_PED_KEEP_TASK(iLocal_171, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_171);
		PED::SET_PED_KEEP_TASK(iLocal_172, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_172);
		PED::SET_PED_KEEP_TASK(iLocal_173, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_173);
		GlobalFunc_2244(&iLocal_178);
		GlobalFunc_200(&uLocal_586, 4);
		GlobalFunc_200(&uLocal_586, 5);
		GlobalFunc_200(&uLocal_586, 6);
		GlobalFunc_200(&uLocal_586, 7);
		iLocal_336++;
	}
}







void func_504()//Position - 0x5E436
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_209))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_282))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_209, 0f, 1);
		}
		ENTITY::DETACH_ENTITY(iLocal_209, 0, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_209, 0);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_209);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_210))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_282))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_210, 0f, 1);
		}
		ENTITY::DETACH_ENTITY(iLocal_210, 0, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_210, 0);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_210);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_211))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_282))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_211, 0f, 1);
		}
		ENTITY::DETACH_ENTITY(iLocal_211, 0, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_211, 0);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_211);
	}
}

void func_505()//Position - 0x5E4D1
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_212))
	{
		ENTITY::DETACH_ENTITY(iLocal_212, 0, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_212, 0);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_212);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_213))
	{
		ENTITY::DETACH_ENTITY(iLocal_213, 0, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_213, 0);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_213);
	}
}


void func_507()//Position - 0x5E53C
{
	if (iLocal_100 == 0)
	{
		if (GlobalFunc_2203(4))
		{
			func_508(4, 1);
			iLocal_100 = 1;
		}
	}
}

void func_508(int iParam0, int iParam1)//Position - 0x5E55B
{
	if (iParam0 != -1)
	{
		Global_24504[iParam0 /*11*/].f_8 = iParam1;
	}
}


void func_510()//Position - 0x5E593
{
	if (iLocal_99 == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.0943f, 167.7748f, 75.24073f, -808.8539f, 184.6587f, 79.76219f, 11.75f, 0, 1, 0))
		{
			if (GlobalFunc_2203(5))
			{
				GlobalFunc_5649(5, 0, 6, 0, 0);
				GRAPHICS::SET_TV_VOLUME(0f);
				iLocal_99 = 1;
			}
		}
	}
}






void func_516()//Position - 0x5E8C5
{
	int iVar0;
	
	if (func_252())
	{
		GlobalFunc_Checkpoint3(2, "stageSneakThrough", 0, 0, 0, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_177) && !ENTITY::IS_ENTITY_DEAD(iLocal_177))
		{
			GlobalFunc_9138(iLocal_177);
		}
		func_201(PLAYER::PLAYER_ID(), 0, 256);
		iLocal_89 = 1;
		while (!GlobalFunc_7047(&iLocal_170, 14, Local_120, 110.1351f, 1))
		{
			func_676(0);
		}
		ENTITY::SET_ENTITY_HEALTH(iLocal_170, 101);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_170, 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_170, 10, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_170, 6, 3, 0, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_170, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_170, 208, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_170, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_170, sLocal_150, "jimmy_playingvideogame_base", -804.75f, 175.55f, 75.75f, 0f, 0f, 111f, 8f, -8f, -1, 3584, 0f, 2, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, 1);
		func_117(iLocal_170, Local_120, 110.1351f, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(14));
		func_676(0);
		while (!GlobalFunc_7047(&iLocal_171, 15, Local_123, 50.0651f, 1))
		{
			func_676(0);
		}
		ENTITY::SET_ENTITY_HEALTH(iLocal_171, 101);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_171, 3, 3, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_171, 4, 3, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_171, 6, 2, 0, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_171, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_171, 208, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_171, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(15));
		func_114(3);
		func_120(iLocal_170, 0);
		func_120(iLocal_171, 0);
		if (func_119())
		{
			func_117(PLAYER::PLAYER_PED_ID(), -802.1424f, 166.1851f, 75.4634f, 19.113f, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_153, "climb_in_window_v2", Local_160, Local_163, 0, 2), 1f, 20000, GlobalFunc_2245(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_153, "climb_in_window_v2", Local_160, Local_163, 0, 2)), 1056964608);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			func_114(4);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (!func_718("ARM3_EAVDROP_3"))
		{
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
			{
				GlobalFunc_173(&uLocal_586, 5, iLocal_171, "TRACEY", 0, 1);
				GlobalFunc_173(&uLocal_586, 6, iLocal_170, "JIMMY", 0, 1);
				func_281("ARM3_EAVDROP", "ARM3_EAVDROP_3", 7, 1);
			}
		}
		switch (iLocal_47)
		{
			case 0:
				func_14();
				break;
			
			case 1:
				if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_153, "climb_in_window_v2", Local_160, Local_163, 0, 2), 0.2f, 0.2f, 3f, 0, 1, 0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_171)) || SYSTEM::TIMERA() > 5000)
				{
					uLocal_159 = PED::CREATE_SYNCHRONIZED_SCENE(Local_160, Local_163, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_159, sLocal_153, "climb_in_window_v2", 1.5f, -1.5f, 4, 0, 1.5f, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_159, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					RECORDING::_0x293220DA1B46CEBC(8f, 10f, 3);
					func_14();
				}
				break;
			
			case 2:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_159) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_159) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_159) >= 0.95f))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_8();
				}
				break;
			}
	}
	if (func_7())
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (iVar0 != iLocal_177)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iLocal_177 = iVar0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_177) && !ENTITY::IS_ENTITY_DEAD(iLocal_177))
		{
			GlobalFunc_2239(iLocal_177, -855.576f, 172.7193f, 67.1646f, 352.4847f);
			VEHICLE::SET_VEHICLE_FIXED(iLocal_177);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177);
			func_517(-855.576f, 172.7193f, 67.1646f, 352.4847f, 0, 1);
		}
		func_120(iLocal_170, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_170, sLocal_150, "jimmy_playingvideogame_loop_d", -806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 8f, -8f, -1, 9225, 0f, 2, 0);
		func_120(iLocal_171, 1);
		func_117(iLocal_171, -800.5298f, 170.2849f, 75.7406f, 180.0982f, 1);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_151, "tracey_argument", -806.166f, 170.525f, 76.46f, 0f, 0f, 110f, 1000f, -1000f, -1, 9216, 0.9f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_150, "tracey_idle_a", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 1000f, -8f, -1, 9224, 0f, 2, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_150, "tracey_idle_b", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9224, 0f, 2, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_150, "tracey_idle_c", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9224, 0f, 2, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_150, "tracey_idle_d", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9225, 0f, 2, 1);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_171, uLocal_205);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_216))
		{
			iLocal_216 = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing_02"), ENTITY::GET_ENTITY_COORDS(iLocal_171, 1), 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_216, iLocal_171, PED::GET_PED_BONE_INDEX(iLocal_171, 60309), Local_105, Local_105, 1, 1, 0, 0, 2, 1);
		}
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_171, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
		iLocal_336++;
	}
}

void func_517(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x5EE9C
{
	struct<3> Var0;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_91351.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_91351.f_4, 0))
		{
			if (GlobalFunc_104(24) != Global_91351.f_4)
			{
				if (iParam4 == 1)
				{
					if (GlobalFunc_6683(ENTITY::GET_ENTITY_COORDS(Global_91351.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_518(Global_91351.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_518(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)//Position - 0x5EF17
{
	struct<54> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[25], 0))
			{
				if (Global_67138.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		GlobalFunc_8319(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		GlobalFunc_4932(iParam0, &Var0);
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_68102 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		GlobalFunc_8387(iParam5, Var0, Param1, fParam4, GlobalFunc_99(iParam0));
		func_519(iParam5, iParam0, 0);
	}
}

void func_519(int iParam0, int iParam1, int iParam2)//Position - 0x5F042
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!GlobalFunc_6682(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67138.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_68045 != -1 && Global_68045 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7719();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = GlobalFunc_104(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						GlobalFunc_8526(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}






















void func_541()//Position - 0x61521
{
	if (func_252())
	{
		func_201(PLAYER::PLAYER_ID(), 1, 0);
		GlobalFunc_8316(0, 1, 1, 0);
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
		GlobalFunc_Checkpoint3(1, "stageClimbUp", 0, 0, PLAYER::PLAYER_PED_ID(), 1);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_177))
		{
			if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != 0)
			{
				iLocal_177 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_177, 1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_177, 1, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_177, 1);
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() != 0)
			{
				iLocal_177 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if ((ENTITY::IS_ENTITY_DEAD(iLocal_177) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_177, 0)) || ((!ENTITY::IS_ENTITY_DEAD(iLocal_177) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_177, 0)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_177, 1), 1) > 75f))
				{
					iLocal_177 = 0;
				}
				else
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_177, 1, 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_177, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_177) && !ENTITY::IS_ENTITY_DEAD(iLocal_177))
		{
			GlobalFunc_9138(iLocal_177);
		}
		bLocal_103 = false;
		iLocal_89 = 1;
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_178))
		{
			func_548(&iLocal_178, joaat("bison3"), -800.1796f, 164.9729f, 70.5296f, 111.0221f, 132, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_178, 2);
			VEHICLE::SET_VEHICLE_ALARM(iLocal_178, 1);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison3"));
		func_548(&iLocal_179, joaat("bjxl"), Local_132, 111.6656f, 126, 0);
		func_546(iLocal_179);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_179, 5, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_179, Local_132, 0, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_CLIMB_INTO_GARDEN"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_3_CLIMB_INTO_GARDEN");
		}
		while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_3_03", 0))
		{
			func_676(0);
		}
		GlobalFunc_703(&uLocal_199);
		func_278(&uLocal_198, &iLocal_179, 0);
		if (func_119())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			func_117(PLAYER::PLAYER_PED_ID(), -851.866f, 178.7462f, 68.6477f, 262.7337f, 1);
			if (!bLocal_96)
			{
				func_118(-851.866f, 178.7462f, 68.6477f, 50f);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			func_676(1500);
			func_114(2);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			MISC::CLEAR_AREA(-851.866f, 178.7462f, 68.6477f, 10f, 1, 0, 0, 0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (func_112("ARM3_FIND", 7500, 1))
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 9f, 3);
			}
		}
		func_142(40, 4);
		if (!func_718("AudioTrackStart"))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -852.5234f, 171.6916f, 56.97251f, -816.6844f, 169.0597f, 90.5098f, 50.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -762.3162f, 171.4667f, 58.85421f, -821.1784f, 164.803f, 90.09219f, 45f, 0, 1, 0)) || bLocal_103))
			{
				func_114(1);
				func_712("AudioTrackStart", 1);
			}
		}
		if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			func_712("RagdollBlock", 1);
		}
		else if (func_718("RagdollBlock"))
		{
			if (((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.0405f, 180.1613f, 70.22781f, -816.3772f, 175.8327f, 75.22781f, 5f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797.3832f, 175.2608f, 71.83491f, -792.3354f, 177.3061f, 74.83491f, 4f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -791.3479f, 179.4418f, 71.83491f, -793.3248f, 184.5443f, 74.83491f, 4f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -816.4725f, 182.1317f, 70.8271f, -818.8613f, 188.3884f, 75.31989f, 5f, 0, 1, 0))
			{
				func_712("RagdollBlock", 0);
			}
		}
		if (!func_718("TryFrontDoor1"))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -817.4048f, 178.4506f, (71.2278f - 10f), 100f, 100f, 100f, 0, 1, 0))
			{
				if (func_685(sLocal_157) && !func_718("RagdollBlock"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.0405f, 180.1613f, 71.22781f, -816.3772f, 175.8327f, 75.22781f, 2f, 0, 1, 0) || (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.0405f, 180.1613f, 70.22781f, -816.3772f, 175.8327f, 75.22781f, 5f, 0, 1, 0) && (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) > 1f && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))) && (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 217.7497f || ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 9.0051f)) && !GlobalFunc_116(0)))
					{
						if (GlobalFunc_116(0))
						{
							GlobalFunc_6685(0);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(func_690(1), joaat("weapon_unarmed"), 1);
						if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_157, "LockedDoor_TryOpen_Stealth", -816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 0, 2), 1f, -1, GlobalFunc_2245(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_157, "LockedDoor_TryOpen_Stealth", -816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 0, 2)), 1056964608);
						}
						else
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_157, "lockeddoor_tryopen", -816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 0, 2), 1f, -1, GlobalFunc_2245(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_157, "lockeddoor_tryopen", -816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 0, 2)), 1056964608);
						}
						iLocal_67 = MISC::GET_GAME_TIMER() + 10000;
						func_712("TryFrontDoor1", 1);
					}
				}
			}
		}
		else if (!func_718("ARM3_LOCK_1"))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_166))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 1)
				{
					if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					{
						if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_157, "LockedDoor_TryOpen_Stealth", -816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 0, 2), 0.2f, 0.2f, 3f, 0, 1, 0) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_157, "lockeddoor_tryopen", -816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 0, 2), 0.2f, 0.2f, 3f, 0, 1, 0))
						{
							uLocal_166 = PED::CREATE_SYNCHRONIZED_SCENE(-816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 2);
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_166, sLocal_157, "LockedDoor_TryOpen_Stealth", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							else
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_166, sLocal_157, "lockeddoor_tryopen", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_166, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_166, 0);
							RECORDING::_0x293220DA1B46CEBC(2f, 3.5f, 3);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_166))
			{
				GlobalFunc_7629();
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_166) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_166) >= 0.9f) || MISC::GET_GAME_TIMER() > iLocal_67)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_712("ARM3_LOCK_1", 1);
			}
		}
		if (!func_718("TryFrontDoor2"))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -795.44f, 177.572f, (71.825f - 10f), 100f, 100f, 100f, 0, 1, 0))
			{
				if (func_685(sLocal_157) && !func_718("RagdollBlock"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -796.5758f, 177.1061f, 71.83519f, -794.4295f, 177.9503f, 75.33519f, 2f, 0, 1, 0) || (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797.3832f, 175.2608f, 71.83491f, -792.3354f, 177.3061f, 74.83491f, 4f, 0, 1, 0) && (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) > 1f && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))) && (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 107.1689f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 32.9229f)) && !GlobalFunc_116(0)))
					{
						if (GlobalFunc_116(0))
						{
							GlobalFunc_6685(0);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(func_690(1), joaat("weapon_unarmed"), 1);
						if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_157, "LockedDoor_TryOpen_Stealth", -795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 0, 2), 1f, -1, GlobalFunc_2245(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_157, "LockedDoor_TryOpen_Stealth", -795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 0, 2)), 1056964608);
						}
						else
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_157, "lockeddoor_tryopen", -795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 0, 2), 1f, -1, GlobalFunc_2245(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_157, "lockeddoor_tryopen", -795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 0, 2)), 1056964608);
						}
						iLocal_67 = MISC::GET_GAME_TIMER() + 10000;
						func_712("TryFrontDoor2", 1);
					}
				}
			}
		}
		else if (!func_718("ARM3_LOCK_2"))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_167))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 1)
				{
					if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					{
						if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_157, "LockedDoor_TryOpen_Stealth", -795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 0, 2), 0.2f, 0.2f, 3f, 0, 1, 0) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_157, "lockeddoor_tryopen", -795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 0, 2), 0.2f, 0.2f, 3f, 0, 1, 0))
						{
							uLocal_167 = PED::CREATE_SYNCHRONIZED_SCENE(-795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 2);
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_167, sLocal_157, "LockedDoor_TryOpen_Stealth", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							else
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_167, sLocal_157, "lockeddoor_tryopen", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_167, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_167, 0);
							RECORDING::_0x293220DA1B46CEBC(2f, 3.5f, 3);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_167))
			{
				GlobalFunc_7629();
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_167) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_167) >= 0.9f) || MISC::GET_GAME_TIMER() > iLocal_67)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_712("ARM3_LOCK_2", 1);
			}
		}
		if (!func_718("TryFrontDoor3"))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -793.703f, 181.647f, (71.825f - 10f), 100f, 100f, 100f, 0, 1, 0))
			{
				if (func_685(sLocal_157) && !func_718("RagdollBlock"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -793.2989f, 180.4899f, 71.83519f, -794.1301f, 182.6513f, 75.33519f, 2f, 0, 1, 0) || (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -791.3479f, 179.4418f, 71.83491f, -793.3248f, 184.5443f, 74.83491f, 4f, 0, 1, 0) && (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) > 1f && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))) && (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 34.2561f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 176.6008f)) && !GlobalFunc_116(0)))
					{
						if (GlobalFunc_116(0))
						{
							GlobalFunc_6685(0);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(func_690(1), joaat("weapon_unarmed"), 1);
						if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_157, "LockedDoor_TryOpen_Stealth", -793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 0, 2), 1f, -1, GlobalFunc_2245(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_157, "LockedDoor_TryOpen_Stealth", -793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 0, 2)), 1056964608);
						}
						else
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_157, "lockeddoor_tryopen", -793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 0, 2), 1f, -1, GlobalFunc_2245(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_157, "lockeddoor_tryopen", -793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 0, 2)), 1056964608);
						}
						iLocal_67 = MISC::GET_GAME_TIMER() + 10000;
						func_712("TryFrontDoor3", 1);
					}
				}
			}
		}
		else if (!func_718("ARM3_LOCK_3"))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_168))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 1)
				{
					if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					{
						if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_157, "LockedDoor_TryOpen_Stealth", -793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 0, 2), 0.2f, 0.2f, 3f, 0, 1, 0) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_157, "lockeddoor_tryopen", -793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 0, 2), 0.2f, 0.2f, 3f, 0, 1, 0))
						{
							uLocal_168 = PED::CREATE_SYNCHRONIZED_SCENE(-793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 2);
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_168, sLocal_157, "LockedDoor_TryOpen_Stealth", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							else
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_168, sLocal_157, "lockeddoor_tryopen", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_168, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_168, 0);
							RECORDING::_0x293220DA1B46CEBC(2f, 3.4f, 3);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_168))
			{
				GlobalFunc_7629();
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_168) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_168) >= 0.9f) || MISC::GET_GAME_TIMER() > iLocal_67)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_712("ARM3_LOCK_3", 1);
			}
		}
		if (!func_718("TryFrontDoor4"))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -793.703f, 181.647f, (71.825f - 10f), 100f, 100f, 100f, 0, 1, 0))
			{
				if (func_685(sLocal_157) && !func_718("RagdollBlock"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -816.3821f, 188.4097f, 71.47899f, -815.0385f, 182.7216f, 74.92583f, 2.5f, 0, 1, 0) || (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -816.4725f, 182.1317f, 70.8271f, -818.8613f, 188.3884f, 75.31989f, 5f, 0, 1, 0) && (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) > 1f && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))) && (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 217.7497f || ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 9.0051f)) && !GlobalFunc_116(0)))
					{
						if (GlobalFunc_116(0))
						{
							GlobalFunc_6685(0);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(func_690(1), joaat("weapon_unarmed"), 1);
						if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_150, "open_garage_fail_stealth", -815.94f, 185.655f, 72.4578f, 0f, 0f, -69f, 0, 2), 1f, -1, GlobalFunc_2245(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_150, "open_garage_fail_stealth", -815.94f, 185.655f, 72.4578f, 0f, 0f, -69f, 0, 2)), 1056964608);
						}
						else
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_150, "open_garage_fail", -815.84f, 185.695f, 72.465f, 0f, 0f, -69f, 0, 2), 1f, -1, GlobalFunc_2245(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_150, "open_garage_fail", -815.84f, 185.695f, 72.465f, 0f, 0f, -69f, 0, 2)), 1056964608);
						}
						RECORDING::_0x293220DA1B46CEBC(2f, 3.5f, 3);
						iLocal_67 = MISC::GET_GAME_TIMER() + 10000;
						func_712("TryFrontDoor4", 1);
					}
				}
			}
		}
		else if (!func_718("ARM3_LOCK_4"))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_169))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 1)
				{
					if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					{
						if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_150, "open_garage_fail_stealth", -815.94f, 185.655f, 72.4578f, 0f, 0f, -69f, 0, 2), 0.2f, 0.2f, 3f, 0, 1, 0) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_150, "open_garage_fail", -815.84f, 185.695f, 72.465f, 0f, 0f, -69f, 0, 2), 0.2f, 0.2f, 3f, 0, 1, 0))
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								uLocal_169 = PED::CREATE_SYNCHRONIZED_SCENE(-815.94f, 185.655f, 72.4578f, 0f, 0f, -69f, 2);
							}
							else
							{
								uLocal_169 = PED::CREATE_SYNCHRONIZED_SCENE(-815.84f, 185.695f, 72.465f, 0f, 0f, -69f, 2);
							}
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_169, sLocal_150, "open_garage_fail_stealth", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							else
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_169, sLocal_150, "open_garage_fail", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_169, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_169, 0);
							RECORDING::_0x293220DA1B46CEBC(2f, 3.5f, 3);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_169))
			{
				GlobalFunc_7629();
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_169) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_169) >= 0.9f) || MISC::GET_GAME_TIMER() > iLocal_67)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_712("ARM3_LOCK_4", 1);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1835780023))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		if (bLocal_103)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_193))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_175) && !PED::IS_PED_INJURED(iLocal_175))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_175) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_175))
					{
						if (!GlobalFunc_663("ARM3_FIND", 0, 0))
						{
							func_112("ARM3_GARDEN", 7500, 1);
						}
					}
				}
			}
			if (!func_718("ARM3HLP_SNEAK"))
			{
				func_19("ARM3HLP_SNEAK", 1, -1);
				Global_86803 = 1;
			}
			else if (!func_718("ARM3HLP_SNEAK2"))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_19("ARM3HLP_SNEAK2", 1, -1);
					Global_86803 = 2;
				}
			}
			else if (!func_718("AH_H_TAKEDOWN"))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_175, 0), 4f, 4f, 2f, 0, 1, 0) && CAM::IS_SCREEN_FADED_IN()))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -829.6057f, 194.8425f, 62.43079f, -832.3174f, 151.8274f, 87.16362f, 30f, 0, 1, 0))
					{
						GlobalFunc_Display_Help_Text("AH_H_TAKEDOWN");
						iLocal_59 = MISC::GET_GAME_TIMER() + 10000;
						GlobalFunc_651(21);
						func_712("AH_H_TAKEDOWN", 1);
					}
				}
			}
			else if (!func_718("ARM3HLP_STAT"))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_175, 0), 8f, 8f, 4f, 0, 1, 0))
				{
					if (GlobalFunc_74("AH_H_TAKEDOWN"))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_59)
						{
							GlobalFunc_2238(1);
						}
					}
				}
				if ((((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || PED::WAS_PED_KILLED_BY_STEALTH(iLocal_175)) || PED::WAS_PED_KILLED_BY_TAKEDOWN(iLocal_175)) || PED::WAS_PED_KNOCKED_OUT(iLocal_175)) || PED::IS_PED_INJURED(iLocal_175))
				{
					if (GlobalFunc_74("AH_H_TAKEDOWN"))
					{
						GlobalFunc_2238(1);
					}
					else
					{
						func_19("ARM3HLP_STAT", 1, -1);
						RECORDING::_0x293220DA1B46CEBC(2.5f, 4f, 3);
						Global_86803 = 3;
					}
				}
			}
		}
		if (GlobalFunc_74("ARM3HLP_SNEAK"))
		{
			if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_2238(1);
			}
		}
		bLocal_103 = ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -847.8129f, 182.998f, 66.36266f, -811.2782f, 180.2509f, 81.59295f, 30f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -843.9734f, 159.8833f, 65.3092f, -809.6868f, 159.1634f, 76.78688f, 22f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.6176f, 161.9533f, 59.90513f, -765.1132f, 168.8679f, 104.2193f, 40f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -772.1868f, 136.9512f, 65.97417f, -772.2764f, 151.5758f, 101.4745f, 20.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -823.9943f, 190.3666f, 71.40189f, -773.8348f, 189.7171f, 107.4835f, 10f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -776.787f, 185.3354f, 71.33521f, -770.1446f, 190.4548f, 107.8587f, 10f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -850.6434f, 145.5961f, 58.64393f, -783.1994f, 146.323f, 97.66776f, 10f, 0, 1, 0));
		if (!func_718("GardenerTakedown"))
		{
			if (bLocal_103)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_CLIMB_INTO_GARDEN"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_3_CLIMB_INTO_GARDEN");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TAKE_OUT_GARDENER"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_3_TAKE_OUT_GARDENER");
				}
			}
			else
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TAKE_OUT_GARDENER"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_3_TAKE_OUT_GARDENER");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_CLIMB_INTO_GARDEN"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_3_CLIMB_INTO_GARDEN");
				}
			}
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_175) && !PED::IS_PED_INJURED(iLocal_175)) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_175))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TARGET_GARDENER"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_3_TARGET_GARDENER");
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TARGET_GARDENER"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_TARGET_GARDENER");
			}
		}
		else
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_CLIMB_INTO_GARDEN"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_CLIMB_INTO_GARDEN");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TAKE_OUT_GARDENER"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_TAKE_OUT_GARDENER");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TARGET_GARDENER"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_TARGET_GARDENER");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_ENTER_HOUSE"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_3_ENTER_HOUSE");
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.9664f, 162.5094f, 69.05923f, -785.8609f, 168.4987f, 80.87254f, 17f, 0, 1, 0))
		{
			func_19("ARM3HLP_CLIMB", 1, 12000);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.6855f, 164.1852f, 70.53752f, -792.5071f, 167.9696f, 77.39737f, 7f, 0, 1, 0) || (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_178, 0f, 2.15f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_178, 0f, -2.07f, 5f), 2f, 0, 1, 0)))
		{
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -802.1f, 167.1f, 76.5f, 8000, 2048, 3);
			PLAYER::_0x9EDD76E87D5D51BA(PLAYER::PLAYER_ID());
		}
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !GlobalFunc_111())
		{
			if (!func_718("ARM3_EAVDROP_1"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5347f, 160.427f, 73.34288f, -804.0911f, 172.1335f, 79.74031f, 10f, 0, 1, 0))
				{
					GlobalFunc_173(&uLocal_586, 5, 0, "TRACEY", 0, 1);
					GlobalFunc_173(&uLocal_586, 6, 0, "JIMMY", 0, 1);
					func_281("ARM3_EAVDROP", "ARM3_EAVDROP_1", 7, 1);
				}
			}
			else if (!func_718("ARM3_EAVDROP_2"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5347f, 160.427f, 73.34288f, -804.0911f, 172.1335f, 79.74031f, 10f, 0, 1, 0))
				{
					GlobalFunc_173(&uLocal_586, 5, 0, "TRACEY", 0, 1);
					GlobalFunc_173(&uLocal_586, 6, 0, "JIMMY", 0, 1);
					func_281("ARM3_EAVDROP", "ARM3_EAVDROP_2", 7, 1);
				}
			}
			else if (!func_718("ARM3_EAVDROP_3"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5347f, 160.427f, 73.34288f, -804.0911f, 172.1335f, 79.74031f, 10f, 0, 1, 0))
				{
					GlobalFunc_173(&uLocal_586, 5, 0, "TRACEY", 0, 1);
					GlobalFunc_173(&uLocal_586, 6, 0, "JIMMY", 0, 1);
					func_281("ARM3_EAVDROP", "ARM3_EAVDROP_3", 7, 1);
				}
			}
		}
		if (GlobalFunc_74("ARM3HLP_CLIMB"))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -804.2656f, 163.1071f, 76.96302f, 5f, 5f, 2f, 0, 1, 0))
			{
				GlobalFunc_2238(1);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.2634f, 164.7415f, 74.86486f, -802.5189f, 168.108f, 79.74074f, 4f, 0, 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
		}
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (func_718("ClimbInTrigger"))
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 0 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 2)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_712("ClimbInTrigger", 0);
				}
			}
			if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.6701f, 166.0046f, 74.84126f, -802.5189f, 168.108f, 79.74074f, 2f, 0, 1, 0) && !GlobalFunc_116(0)) && !GlobalFunc_701()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.0397f, 169.53f, 75.74064f, -802.2932f, 167.5902f, 79.05743f, 1.5f, 0, 1, 0))
			{
				func_201(PLAYER::PLAYER_ID(), 0, 256);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_153, "climb_in_window_v2", Local_160, Local_163, 0, 2), 1f, 20000, GlobalFunc_2245(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_153, "climb_in_window_v2", Local_160, Local_163, 0, 2)), 1056964608);
				func_712("ClimbInTrigger", 1);
			}
		}
		else if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_153, "climb_in_window_v2", Local_160, Local_163, 0, 2), 0.5f, 0.5f, 3f, 0, 1, 0) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
		{
			func_8();
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.6701f, 166.0046f, 74.84126f, -802.5189f, 168.108f, 79.74074f, 2f, 0, 1, 0))
		{
			func_201(PLAYER::PLAYER_ID(), 1, 0);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.1f);
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	}
	if (func_7())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_CLIMB_INTO_GARDEN"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_CLIMB_INTO_GARDEN");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TAKE_OUT_GARDENER"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_TAKE_OUT_GARDENER");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TARGET_GARDENER"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_TARGET_GARDENER");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_ENTER_HOUSE"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_ENTER_HOUSE");
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_286))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_286, 0);
		}
		if (iLocal_285 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_285);
			AUDIO::RELEASE_SOUND_ID(iLocal_285);
			iLocal_285 = -1;
		}
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
		{
			GlobalFunc_2240(&iLocal_175);
			GlobalFunc_2241(&iLocal_217);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_gardener_01"));
			STREAMING::REMOVE_ANIM_DICT(sLocal_156);
			if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_155))
			{
				STREAMING::REMOVE_CLIP_SET(sLocal_155);
			}
		}
		GlobalFunc_7632(0);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("ARM_3_03");
		GlobalFunc_703(&uLocal_199);
		GlobalFunc_2238(1);
		iLocal_336++;
	}
}





int func_546(int iParam0)//Position - 0x632CF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		GlobalFunc_534(iParam0, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, "57EIG117");
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iParam0, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iParam0, 1);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iParam0, 1);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iParam0, 0, 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
		return 1;
	}
	return 0;
}


void func_548(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7)//Position - 0x6333B
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
		if (iParam6 >= 0)
		{
			VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam6);
		}
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, iParam7);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*iParam0, 1);
	}
}

void func_549()//Position - 0x63381
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (func_252())
	{
		func_201(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_89 = 1;
		iLocal_89 = 1;
		if (func_119())
		{
			func_117(PLAYER::PLAYER_PED_ID(), -50.0827f, -1114.944f, 25.4358f, 88.4128f, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_180))
			{
				STREAMING::REQUEST_MODEL(joaat("premier"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
			{
				STREAMING::REQUEST_MODEL(GlobalFunc_4946(18));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
			{
				STREAMING::REQUEST_MODEL(joaat("a_m_m_bevhills_02"));
			}
			while (((!ENTITY::DOES_ENTITY_EXIST(iLocal_180) && !STREAMING::HAS_MODEL_LOADED(joaat("premier"))) || (!ENTITY::DOES_ENTITY_EXIST(iLocal_174) && !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(18)))) || (!ENTITY::DOES_ENTITY_EXIST(iLocal_176) && !STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_bevhills_02"))))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_180))
			{
				STREAMING::REQUEST_MODEL(joaat("premier"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("premier")))
				{
					SYSTEM::WAIT(0);
				}
				func_548(&iLocal_180, joaat("premier"), Local_108, 178.9958f, -1, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_180, 43, 43);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_180, 10, true);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_180, 11, true);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_180, 12, true);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_180, 43, 134);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_180, 10);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_180, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("premier"));
				ENTITY::PLAY_ENTITY_ANIM(iLocal_180, "_leadout_action_simeon_car", sLocal_152, 1000f, 0, 1, 0, 0f, 262144);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
			{
				while (!GlobalFunc_7047(&iLocal_174, 18, -42.4751f, -1110.932f, 25.4343f, 312.8127f, 1))
				{
					func_676(0);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_174, iLocal_296);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_174, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(18));
				GlobalFunc_173(&uLocal_586, 8, iLocal_174, "SIMEON", 0, 1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_152, "_leadout_action_simeon", Local_108, Local_111, 1000f, -4f, -1, 790536, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_152, "_leadout_loop_simeon", Local_108, Local_111, 4f, -4f, -1, 790537, 0f, 2, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_174, uLocal_205);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_174, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(18));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
			{
				func_689(&iLocal_176, joaat("a_m_m_bevhills_02"), -39.8746f, -1100.579f, 25.4343f, 139.6499f, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 4, 0, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_176, iLocal_296);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_176, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_bevhills_02"));
				GlobalFunc_173(&uLocal_586, 7, iLocal_176, "MrKenneth", 0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_180) && !ENTITY::IS_ENTITY_DEAD(iLocal_180))
				{
					Var0 = { Local_105 };
					Var3 = { Local_105 };
					uLocal_283 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_283, iLocal_180, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_180, "seat_dside_f"));
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_176, uLocal_283, sLocal_152, "_leadout_action_customer", 1000f, -8f, 4, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_283, 1);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_176, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_bevhills_02"));
			}
			CLOCK::SET_CLOCK_TIME(10, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			func_676(10);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_174) && ENTITY::DOES_ENTITY_EXIST(iLocal_176)) && ENTITY::DOES_ENTITY_EXIST(iLocal_180))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_174, 0), 200f, 200f, 10f, 0, 1, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_180))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_180, 1);
					ENTITY::STOP_ENTITY_ANIM(iLocal_180, "_leadout_loop_simeon_car", sLocal_152, -1000f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_180, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_180, 0);
				GlobalFunc_2240(&iLocal_174);
				GlobalFunc_2240(&iLocal_176);
				GlobalFunc_2244(&iLocal_180);
			}
			else
			{
				if (!GlobalFunc_111())
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_174, 0), 15f, 15f, 5f, 0, 1, 0) && !MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_174, 0) - Vector(5f, 7.5f, 7.5f), ENTITY::GET_ENTITY_COORDS(iLocal_174, 0) + Vector(5f, 7.5f, 7.5f), 1))
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
						{
							iVar6 = 0;
						}
						else
						{
							iVar6 = 1;
						}
						if (!func_718("ARM3_INT_LO"))
						{
							func_677("ARM3_INT_LO", 7, 1, iVar6);
						}
						else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_55)
							{
								if (!func_718("ARM3_LOC1_1"))
								{
									func_281("ARM3_LOC1", "ARM3_LOC1_1", 7, 1);
								}
								else if (!func_718("ARM3_LOC1_2"))
								{
									func_281("ARM3_LOC1", "ARM3_LOC1_2", 7, 1);
								}
								else if (!func_718("ARM3_LOC1_3"))
								{
									func_281("ARM3_LOC1", "ARM3_LOC1_3", 7, 1);
									iLocal_55 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
								}
								else if (!func_718("ARM3_HANG_01"))
								{
									func_677("ARM3_HANG", 7, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_174, func_690(1), 2000, 0, 2);
									iLocal_55 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
									func_712("ARM3_HANG_01", 1);
								}
								else if (!func_718("ARM3_LOC2_1"))
								{
									func_281("ARM3_LOC2", "ARM3_LOC2_1", 7, 1);
								}
								else if (!func_718("ARM3_LOC2_2"))
								{
									func_281("ARM3_LOC2", "ARM3_LOC2_2", 7, 1);
								}
								else if (!func_718("ARM3_LOC2_3"))
								{
									func_281("ARM3_LOC2", "ARM3_LOC2_3", 7, 1);
									iLocal_55 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
								}
								else if (!func_718("ARM3_HANG_02"))
								{
									func_677("ARM3_HANG", 7, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_174, func_690(1), 2000, 0, 2);
									iLocal_55 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
									func_712("ARM3_HANG_02", 1);
								}
								else if (!func_718("ARM3_LOC3_1"))
								{
									func_281("ARM3_LOC3", "ARM3_LOC3_1", 7, 1);
								}
								else if (!func_718("ARM3_LOC3_2"))
								{
									func_281("ARM3_LOC3", "ARM3_LOC3_2", 7, 1);
									iLocal_55 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
								}
								else if (!func_718("ARM3_HANG_03"))
								{
									func_677("ARM3_HANG", 7, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_174, func_690(1), 2000, 0, 2);
									iLocal_55 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
									func_712("ARM3_HANG_03", 1);
								}
								else if (!func_718("ARM3_LOC4_1"))
								{
									func_281("ARM3_LOC4", "ARM3_LOC4_1", 7, 1);
								}
								else if (!func_718("ARM3_LOC4_2"))
								{
									func_281("ARM3_LOC4", "ARM3_LOC4_2", 7, 1);
									iLocal_55 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
								}
								else if (iLocal_49[iLocal_48] == -1)
								{
									iLocal_49[iLocal_48] = 4;
								}
								else if (iLocal_49[iLocal_48] > 0)
								{
									iLocal_55 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
									iLocal_49[iLocal_48] = (iLocal_49[iLocal_48] - 1);
									if (iLocal_48 == 0)
									{
										func_677("ARM3_LOCS", 7, 0, 0);
										iLocal_48++;
									}
									else if (iLocal_48 == 1)
									{
										func_677("ARM3_LOCM", 7, 0, 0);
										iLocal_48 = 0;
									}
								}
							}
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_180))
				{
					if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_180, 0) < 0.6f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_180, 0) > 0.7f)
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_180, 0, 0, 0.64f);
					}
				}
				if (!func_718("AchievedDoorAngle"))
				{
					if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_180, 0) > 0.6f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_180, 0) < 0.7f)
					{
						func_712("AchievedDoorAngle", 1);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_176))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_283) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_283) >= 1f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_176);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_180) && !ENTITY::IS_ENTITY_DEAD(iLocal_180))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_176, iLocal_180, -1);
						}
						TASK::TASK_PLAY_ANIM(iLocal_176, sLocal_152, "_leadout_loop_customer", 1000f, -4f, -1, 33, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_176, 0, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_180))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_180, sLocal_152, "_leadout_action_simeon_car", 3))
					{
						if (!PED::IS_PED_INJURED(iLocal_174))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_174, sLocal_152, "_leadout_action_simeon", 3))
							{
								ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_180, sLocal_152, "_leadout_action_simeon_car", ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_174, sLocal_152, "_leadout_action_simeon"));
							}
						}
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_180, sLocal_152, "_leadout_action_simeon_car") >= 1f)
						{
							ENTITY::PLAY_ENTITY_ANIM(iLocal_180, "_leadout_loop_simeon_car", sLocal_152, 1000f, 1, 0, 0, 0f, 262144);
						}
					}
				}
				iVar7 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || (((ENTITY::DOES_ENTITY_EXIST(iVar7) && !ENTITY::IS_ENTITY_DEAD(iVar7)) && ENTITY::IS_ENTITY_AT_COORD(iVar7, Local_108, 10f, 10f, 10f, 0, 1, 0)) && ENTITY::GET_ENTITY_SPEED(iVar7) > 1f)) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_180, 0) - Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_180, 0) - Vector(3f, 3f, 3f), 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_180, 0);
					func_712("AchievedDoorAngle", 0);
				}
				else if (func_718("AchievedDoorAngle"))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_180, 1);
				}
				if (((((((((MISC::IS_BULLET_IN_ANGLED_AREA(-49.79261f, -1109.161f, 24.93576f, -31.39041f, -1115.63f, 32.42232f, 16f, 1) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -49.79261f, -1109.161f, 24.93576f, -31.39041f, -1115.63f, 32.42232f, 16f)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_180, 0), 10f) > 0) || ((!ENTITY::IS_ENTITY_DEAD(iLocal_180) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_180)) && (!ENTITY::IS_ENTITY_AT_COORD(iLocal_180, Local_108, 0.25f, 0.25f, 1f, 0, 1, 0) || (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_180, 0f, 2.15f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_180, 0f, -2.07f, 5f), 2f, 0, 1, 0))))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_180) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_180, PLAYER::PLAYER_PED_ID(), 1))) || (((!PED::IS_PED_INJURED(iLocal_174) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_174, sLocal_152, "_leadout_action_simeon", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_174, sLocal_152, "_leadout_loop_simeon", 3))) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_174)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_174))) || (((!PED::IS_PED_INJURED(iLocal_176) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_283) && !(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_176, sLocal_152, "_leadout_loop_customer", 3) || PED::IS_PED_IN_VEHICLE(iLocal_176, iLocal_180, 0)))) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_176)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_176))) || PED::IS_PED_RAGDOLL(iLocal_174)) || ((PED::IS_PED_INJURED(iLocal_174) || PED::IS_PED_INJURED(iLocal_176)) || ENTITY::IS_ENTITY_DEAD(iLocal_180))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_180) && (func_718("AchievedDoorAngle") && (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_180, 0) < 0.6f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_180, 0) > 0.7f))))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_283) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_283) < 0.568f)
					{
						if (!PED::IS_PED_INJURED(iLocal_174))
						{
							TASK::CLEAR_PED_TASKS(iLocal_174);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_174, PLAYER::PLAYER_PED_ID(), 0);
							PED::SET_PED_KEEP_TASK(iLocal_174, 1);
							GlobalFunc_173(&uLocal_586, 8, iLocal_174, "SIMEON", 0, 1);
							func_677("ARM3_DISRUPT", 7, 1, 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_176))
						{
							TASK::CLEAR_PED_TASKS(iLocal_176);
							TASK::CLEAR_PED_SECONDARY_TASK(iLocal_176);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_176, 0))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							}
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_176, uLocal_205);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
							PED::SET_PED_KEEP_TASK(iLocal_176, 1);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_180))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_180, sLocal_152, "_leadout_action_simeon_car", 3))
							{
								ENTITY::STOP_ENTITY_ANIM(iLocal_180, "_leadout_action_simeon_car", sLocal_152, -1000f);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_180, sLocal_152, "_leadout_loop_simeon_car", 3))
							{
								ENTITY::STOP_ENTITY_ANIM(iLocal_180, "_leadout_loop_simeon_car", sLocal_152, -1000f);
							}
						}
					}
					iLocal_337 = 12;
					func_691();
				}
			}
		}
		if (!func_718("ARM3_ARV"))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_MICHAELS_HOUSE"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_3_DRIVE_TO_MICHAELS_HOUSE");
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_135, 1) < 1000f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_135, 1) > 100f)
			{
				GlobalFunc_173(&uLocal_586, 8, 0, "SIMEON", 0, 1);
				GlobalFunc_10638(&uLocal_586, 18, "ARM3AUD", "ARM3_ARV", 8, 1, 0, 0, 1);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_MICHAELS_HOUSE"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_TO_MICHAELS_HOUSE");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_PHONE_SIMEON"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_3_DRIVE_PHONE_SIMEON");
				}
				func_712("ARM3_ARV", 1);
			}
		}
		else
		{
			if (GlobalFunc_1397() || GlobalFunc_781())
			{
				if (!func_718("RejectedCall"))
				{
					SYSTEM::SETTIMERB(0);
					func_712("RejectedCall", 1);
				}
			}
			if (func_718("RejectedCall"))
			{
				if (!func_718("ARM3_CALLTXT") && SYSTEM::TIMERB() > 2000)
				{
					func_592(18, "ARM3_CALLTXT", 1, 1, 0, 0, 0, 1, 0, 1);
					func_712("ARM3_CALLTXT", 1);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_178))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_135, 1) < 150f)
			{
				if (func_715(joaat("bison3")))
				{
					func_548(&iLocal_178, joaat("bison3"), -800.1796f, 164.9729f, 70.5296f, 111.0221f, 132, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_178, 2);
					VEHICLE::SET_VEHICLE_ALARM(iLocal_178, 1);
				}
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -809.6893f, 167.7382f, 80.49918f, 55f, 35f, 25f, 0, 1, 0))
		{
			bVar8 = ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -847.8129f, 182.998f, 66.36266f, -811.2782f, 180.2509f, 81.59295f, 30f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -843.9734f, 159.8833f, 65.3092f, -809.6868f, 159.1634f, 76.78688f, 22f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.6176f, 161.9533f, 59.90513f, -765.1132f, 168.8679f, 104.2193f, 40f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -772.1868f, 136.9512f, 65.97417f, -772.2764f, 151.5758f, 101.4745f, 20.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -823.9943f, 190.3666f, 71.40189f, -773.8348f, 189.7171f, 107.4835f, 10f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -776.787f, 185.3354f, 71.33521f, -770.1446f, 190.4548f, 107.8587f, 10f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -850.6434f, 145.5961f, 58.64393f, -783.1994f, 146.323f, 97.66776f, 10f, 0, 1, 0));
		}
		if (func_555(&uLocal_298, -853.2845f, 178.8083f, 68.6371f, 6f, 6f, 2f, 1, "ARM3_GO", 1, 1, -1) || bVar8)
		{
			func_8();
		}
		if (iLocal_207 != 0)
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_207)
			{
				if (iLocal_181[0] == 0 || !ENTITY::DOES_ENTITY_EXIST(iLocal_181[0]))
				{
					iLocal_181[0] = VEHICLE::GET_CLOSEST_VEHICLE(-36.5853f, -1101.474f, 26.3444f, 5f, joaat("bjxl"), 4);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[0]))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_181[0], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_181[0], 0);
				}
				if (iLocal_181[1] == 0 || !ENTITY::DOES_ENTITY_EXIST(iLocal_181[1]))
				{
					iLocal_181[1] = VEHICLE::GET_CLOSEST_VEHICLE(-41.4259f, -1099.648f, 26.0534f, 5f, joaat("tailgater"), 4);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[1]))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_181[1], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_181[1], 0);
				}
				if (iLocal_181[2] == 0 || !ENTITY::DOES_ENTITY_EXIST(iLocal_181[2]))
				{
					iLocal_181[2] = VEHICLE::GET_CLOSEST_VEHICLE(-46.2594f, -1097.839f, 26.3444f, 5f, joaat("bjxl"), 4);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[2]))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_181[2], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_181[2], 0);
				}
				if (iLocal_181[3] == 0 || !ENTITY::DOES_ENTITY_EXIST(iLocal_181[3]))
				{
					iLocal_181[3] = VEHICLE::GET_CLOSEST_VEHICLE(-50.08f, -1094.463f, 26.0671f, 5f, joaat("tailgater"), 4);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[3]))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_181[3], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_181[3], 0);
				}
				if (iLocal_181[4] == 0 || !ENTITY::DOES_ENTITY_EXIST(iLocal_181[4]))
				{
					iLocal_181[4] = VEHICLE::GET_CLOSEST_VEHICLE(-37.4128f, -1088.562f, 26.0671f, 5f, joaat("tailgater"), 4);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[4]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[4]))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_181[4], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_181[4], 0);
				}
			}
		}
	}
	if (func_7())
	{
		GlobalFunc_5652(&uLocal_298, 1, 0);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_MICHAELS_HOUSE"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_TO_MICHAELS_HOUSE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_PHONE_SIMEON"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_PHONE_SIMEON");
		}
		GlobalFunc_2240(&iLocal_176);
		GlobalFunc_2240(&iLocal_174);
		HUD::CLEAR_PRINTS();
		GlobalFunc_703(&uLocal_198);
		GlobalFunc_200(&uLocal_586, 8);
		iLocal_336++;
	}
}






int func_555(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11)//Position - 0x6487A
{
	return func_556(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 1, 0, 0, 0, 0, sParam8, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam9, GlobalFunc_648(), 0, 0, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_556(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x648CB
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	GlobalFunc_647(uParam0);
	GlobalFunc_646(uParam0);
	GlobalFunc_502();
	if (GlobalFunc_7931(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		GlobalFunc_635(sParam20);
		GlobalFunc_635(sParam21);
		GlobalFunc_635(sParam22);
		GlobalFunc_635(sParam23);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam18, 0))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 23))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 23);
					}
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (GlobalFunc_5146(uParam0, iParam29))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
					}
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				GlobalFunc_635(sParam24);
				GlobalFunc_635(sParam27);
				GlobalFunc_635("MORE_SEATS");
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						GlobalFunc_635(sParam19);
					}
					if (HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(uParam0);
					}
					if ((!GlobalFunc_5172(uParam0, 1) && !GlobalFunc_633(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*uParam0))
						{
							HUD::REMOVE_BLIP(uParam0);
						}
						uParam0->f_5 = GlobalFunc_5104(Var3, 0);
						if (!iParam31 == -1)
						{
							HUD::SET_BLIP_SPRITE(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							GlobalFunc_714(uParam0->f_5, uParam0);
						}
					}
					else if (!GlobalFunc_537(Var3, HUD::GET_BLIP_COORDS(uParam0->f_5), 0.1f))
					{
						HUD::SET_BLIP_COORDS(uParam0->f_5, Var3);
						if (bParam35)
						{
							GlobalFunc_714(uParam0->f_5, uParam0);
						}
					}
					if (!GlobalFunc_5172(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_13, 2))
						{
							GlobalFunc_5145(uParam0, sParam19, 0);
							MISC::SET_BIT(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (MISC::IS_BIT_SET(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar2], GlobalFunc_468()) || !GlobalFunc_5144(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (GlobalFunc_5143(uParam0))
							{
								GlobalFunc_635(sParam19);
								GlobalFunc_635(sParam24);
								GlobalFunc_635(sParam20);
								GlobalFunc_635(sParam21);
								GlobalFunc_635(sParam22);
								GlobalFunc_635(sParam23);
								GlobalFunc_635("LOSE_WANTED");
								GlobalFunc_635("MORE_SEATS");
								GlobalFunc_635(sParam27);
								GlobalFunc_5652(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam18))
			{
				if ((bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!MISC::IS_BIT_SET(uParam0->f_13, 9) && !MISC::IS_BIT_SET(uParam0->f_13, 22)))
				{
					GlobalFunc_635(sParam24);
					GlobalFunc_635(sParam27);
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5) || HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						HUD::REMOVE_BLIP(uParam0);
						GlobalFunc_635(sParam19);
					}
					if ((!GlobalFunc_5172(uParam0, 1) && !GlobalFunc_633(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(*uParam0))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_5));
								GlobalFunc_635(sParam19);
							}
							*uParam0 = GlobalFunc_6783(iParam18, 0, 0);
							HUD::SET_BLIP_DISPLAY(*uParam0, 2);
							if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								GlobalFunc_714(*uParam0, uParam0);
							}
						}
						if (!GlobalFunc_5172(uParam0, 2))
						{
							if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (MISC::IS_BIT_SET(uParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam27))
								{
									if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
									{
										GlobalFunc_5145(uParam0, sParam27, 0);
										MISC::SET_BIT(&(uParam0->f_13), 4);
									}
								}
								else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
								{
									GlobalFunc_5145(uParam0, sParam24, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
								if (!MISC::IS_BIT_SET(uParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
									{
										GlobalFunc_5130(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_5));
					GlobalFunc_635(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!GlobalFunc_5172(uParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8);
									if (!PED::IS_PED_INJURED(uParam0->f_17[iVar9]))
									{
										GlobalFunc_5130(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									GlobalFunc_5145(uParam0, "MORE_SEATS", 0);
									MISC::SET_BIT(&(uParam0->f_13), 13);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								if (MISC::IS_BIT_SET(uParam0->f_13, 9))
								{
									GlobalFunc_5145(uParam0, sParam27, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!GlobalFunc_5172(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
						{
							GlobalFunc_5145(uParam0, sParam24, 0);
							MISC::SET_BIT(&(uParam0->f_13), 3);
							MISC::CLEAR_BIT(&(uParam0->f_13), 4);
						}
						else if (MISC::IS_BIT_SET(uParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam27))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
								{
									GlobalFunc_5145(uParam0, sParam27, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(uParam0->f_13, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 0);
		}
		GlobalFunc_635(sParam19);
		GlobalFunc_635(sParam24);
		GlobalFunc_635(sParam27);
		GlobalFunc_635(sParam24);
		GlobalFunc_635("LOSE_WANTED");
		if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*uParam0))
		{
			HUD::REMOVE_BLIP(uParam0);
		}
	}
	MISC::CLEAR_BIT(&(uParam0->f_13), 11);
	MISC::CLEAR_BIT(&(uParam0->f_13), 12);
	return 0;
}




































int func_592(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x66DC2
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_2263, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_593(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			Global_2873[3 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			MISC::SET_BIT(&Global_2263, 1);
			MISC::SET_BIT(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_593(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x66E5A
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	GlobalFunc_8951();
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
		GlobalFunc_8951();
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
		GlobalFunc_8951();
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
			GlobalFunc_6927(1);
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}













void func_606()//Position - 0x67CE4
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (func_252())
	{
		func_201(PLAYER::PLAYER_ID(), 0, 0);
		iLocal_89 = 0;
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_180))
		{
			STREAMING::REQUEST_MODEL(joaat("premier"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("premier")))
			{
				SYSTEM::WAIT(0);
			}
			func_548(&iLocal_180, joaat("premier"), Local_108, 178.9958f, -1, 0);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_180, 43, 43);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_180, 10, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_180, 11, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_180, 12, true);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_180, 43, 134);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_180, 10);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_180, 0);
			ENTITY::PLAY_ENTITY_ANIM(iLocal_180, "_leadout_action_simeon_car", sLocal_152, 1000f, 0, 1, 0, 0f, 262144);
		}
		if (bLocal_96 == 0 && iLocal_101 == 0)
		{
			CUTSCENE::REQUEST_CUTSCENE("Armenian_3_int", 8);
		}
		if (func_119())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		switch (iLocal_47)
		{
			case 0:
				if (bLocal_96 == 0 && iLocal_101 == 0)
				{
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						func_21("Franklin", func_690(1), 0, 2);
					}
				}
				if ((bLocal_96 == 1 || iLocal_101 == 1) || CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_int"))
				{
					if (bLocal_96 == 0 && iLocal_101 == 0)
					{
						GlobalFunc_8316(1, 1, 1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_174) && !PED::IS_PED_INJURED(iLocal_174))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_174, "Siemon", 0, GlobalFunc_4946(18), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Siemon", 2, GlobalFunc_4946(18), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_176) && !PED::IS_PED_INJURED(iLocal_176))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_176, "customer", 0, joaat("a_m_m_bevhills_02"), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "customer", 2, joaat("a_m_m_bevhills_02"), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_180) && !ENTITY::IS_ENTITY_DEAD(iLocal_180))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_180, -1000f, 1);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_180, "Showroom_Car", 0, joaat("premier"), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Showroom_Car", 2, joaat("premier"), 0);
						}
						CUTSCENE::START_CUTSCENE(0);
						func_676(0);
						GlobalFunc_10063(-36.44376f, -1114.313f, 24.93915f, -58.57041f, -1111.052f, 37.43576f, 20f, -58.3923f, -1114.561f, 25.4358f, 74.8206f, GlobalFunc_625(), 1, 1, 1, 0, 0);
						MISC::CLEAR_AREA(-48.88689f, -1111.567f, 25.43577f, 12f, 1, 0, 0, 0);
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-801.0658f, 187.0313f, 71.60547f, -797.8655f, 178.3436f, 74.83471f, 9f, 0, 0, 1);
						CAM::STOP_GAMEPLAY_HINT(1);
						func_725();
						if (bLocal_93)
						{
							GlobalFunc_9140(&uLocal_74, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_94 = 1;
						}
						func_120(iLocal_187[0], 1);
						func_120(iLocal_187[1], 1);
						RECORDING::_0x48621C9FCA3EBD28(4);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_177) && !ENTITY::IS_ENTITY_DEAD(iLocal_177))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_177);
					}
					func_14();
				}
				break;
			
			case 1:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
				{
					iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Siemon", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						iLocal_174 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_174, iLocal_296);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_174, 1);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
				{
					iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("customer", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						iLocal_176 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_176, iLocal_296);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_176, 1);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_180))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_180))
					{
						iVar2 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							iLocal_180 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2);
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_180, 43, 43);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_180, 43, 134);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Showroom_Car", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_180) && !ENTITY::IS_ENTITY_DEAD(iLocal_180))
					{
						GlobalFunc_2239(iLocal_180, Local_108, 178.9958f);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_180, 10);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_180, 0);
						ENTITY::PLAY_ENTITY_ANIM(iLocal_180, "_leadout_action_simeon_car", sLocal_152, 1000f, 0, 1, 0, 0f, 262144);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Siemon", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_174) && !ENTITY::IS_ENTITY_DEAD(iLocal_174))
					{
						GlobalFunc_173(&uLocal_586, 8, iLocal_174, "SIMEON", 0, 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_152, "_leadout_action_simeon", Local_108, Local_111, 1000f, -4f, -1, 790536, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_152, "_leadout_loop_simeon", Local_108, Local_111, 4f, -4f, -1, 798729, 0f, 2, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_174, uLocal_205);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_174, 0, 0);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("customer", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_176) && !ENTITY::IS_ENTITY_DEAD(iLocal_176))
					{
						GlobalFunc_173(&uLocal_586, 7, iLocal_176, "MrKenneth", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_180) && !ENTITY::IS_ENTITY_DEAD(iLocal_180))
						{
							Var3 = { Local_105 };
							Var6 = { Local_105 };
							uLocal_283 = PED::CREATE_SYNCHRONIZED_SCENE(Var3, Var6, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_283, iLocal_180, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_180, "seat_dside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_176, uLocal_283, sLocal_152, "_leadout_action_customer", 1000f, -8f, 4, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_283, 1);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_176, 0, 0);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
					PED::FORCE_PED_MOTION_STATE(func_690(1), -668482597, 1, 1, 0);
				}
				if (bLocal_96 == 1 || CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_180))
					{
						STREAMING::REQUEST_MODEL(joaat("premier"));
						while (!STREAMING::HAS_MODEL_LOADED(joaat("premier")))
						{
							SYSTEM::WAIT(0);
						}
						func_548(&iLocal_180, joaat("premier"), Local_108, 178.9958f, -1, 0);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_180, 43, 43);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_180, 10, true);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_180, 11, true);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_180, 12, true);
						VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_180, 43, 134);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_180, 10);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_180, 0);
						ENTITY::PLAY_ENTITY_ANIM(iLocal_180, "_leadout_action_simeon_car", sLocal_152, 1000f, 0, 1, 0, 0f, 262144);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_4946(18));
						while (!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(18)))
						{
							SYSTEM::WAIT(0);
						}
						while (!GlobalFunc_7047(&iLocal_174, 18, -42.4751f, -1110.932f, 25.4343f, 312.8127f, 1))
						{
							func_676(0);
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_174, iLocal_296);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_174, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(18));
						GlobalFunc_173(&uLocal_586, 8, iLocal_174, "SIMEON", 0, 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_152, "_leadout_action_simeon", Local_108, Local_111, 1000f, -4f, -1, 790536, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_152, "_leadout_loop_simeon", Local_108, Local_111, 4f, -4f, -1, 790537, 0f, 2, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_174, uLocal_205);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_174, 0, 0);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
					{
						STREAMING::REQUEST_MODEL(joaat("a_m_m_bevhills_02"));
						while (!STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_bevhills_02")))
						{
							SYSTEM::WAIT(0);
						}
						func_689(&iLocal_176, joaat("a_m_m_bevhills_02"), -39.8746f, -1100.579f, 25.4343f, 139.6499f, 1);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 4, 0, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_176, iLocal_296);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_176, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_bevhills_02"));
						GlobalFunc_173(&uLocal_586, 7, iLocal_176, "MrKenneth", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_180) && !ENTITY::IS_ENTITY_DEAD(iLocal_180))
						{
							Var9 = { Local_105 };
							Var12 = { Local_105 };
							uLocal_283 = PED::CREATE_SYNCHRONIZED_SCENE(Var9, Var12, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_283, iLocal_180, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_180, "seat_dside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_176, uLocal_283, sLocal_152, "_leadout_action_customer", 1000f, -8f, 4, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_283, 1);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_176, 0, 0);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("premier"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tailgater"));
					GlobalFunc_8316(0, 1, 1, 0);
					func_8();
				}
				break;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
	}
	if (func_7())
	{
		RECORDING::_0x81CBAE94390F9F89();
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-801.0658f, 187.0313f, 71.60547f, -797.8655f, 178.3436f, 74.83471f, 9f, 1);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_676(0);
		}
		GlobalFunc_8316(0, 1, 1, 0);
		iLocal_336++;
	}
}

void func_607()//Position - 0x685BA
{
	if (func_252())
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(GlobalFunc_2247(162, 0) - Vector(15f, 25f, 25f), GlobalFunc_2247(170, 0) + Vector(15f, 25f, 25f), 0, 1, 1, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(29.43694f, -1105.479f, -46.89022f) - Vector(5f, 20f, 20f), Vector(29.43694f, -1105.479f, -46.89022f) + Vector(5f, 20f, 20f), 0, 1);
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			MISC::CLEAR_AREA(-46.89022f, -1105.479f, 29.43694f, 20f, 1, 0, 0, 0);
		}
		MISC::CLEAR_AREA(-47.07522f, -1114.476f, 25.43581f, 7.5f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(-40.14164f, -1113.714f, 25.43738f, 5f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(-57.75611f, -1112.769f, 25.43581f, 10f, 1, 0, 0, 0);
		iLocal_99 = 0;
		iLocal_100 = 0;
		MISC::CLEAR_AREA(Local_135, 500f, 1, 0, 0, 0);
		PED::ADD_SCENARIO_BLOCKING_AREA(Vector(70.56245f, 166.219f, -804.9835f) - Vector(15f, 35f, 50f), Vector(70.56245f, 166.219f, -804.9835f) + Vector(15f, 35f, 50f), 0, 1, 1, 1);
		TASK::ADD_COVER_BLOCKING_AREA(Vector(77.24071f, 173.0956f, -807.3651f) - Vector(1.5f, 1f, 1f), Vector(77.24071f, 173.0956f, -807.3651f) + Vector(1.5f, 1f, 1f), 1, 1, 1, 1);
		TASK::ADD_COVER_BLOCKING_AREA(Vector(77.24074f, 174.2419f, -801.8395f) - Vector(1.5f, 2f, 1.5f), Vector(77.24074f, 174.2419f, -801.8395f) + Vector(1.5f, 2f, 1.5f), 1, 1, 1, 1);
		TASK::ADD_COVER_BLOCKING_AREA(Vector(73.34528f, 181.6336f, -797.6738f) - Vector(2f, 4f, 3.5f), Vector(73.34528f, 181.6336f, -797.6738f) + Vector(2f, 4f, 3.5f), 1, 1, 1, 1);
		TASK::ADD_COVER_BLOCKING_AREA(Vector(73.35547f, 184.0061f, -799.449f) - Vector(2f, 4.5f, 4.5f), Vector(73.35547f, 184.0061f, -799.449f) + Vector(2f, 4.5f, 4.5f), 1, 1, 1, 1);
		HUD::REQUEST_ADDITIONAL_TEXT("ARM3", 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_221))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_221, joaat("v_ilev_mm_doorw"), -804.95f, 171.86f, 76.89f, 1, 1, 0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_222))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_222, joaat("v_ilev_mm_doorson"), -806.77f, 174.02f, 76.89f, 1, 1, 0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_223))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_223, joaat("v_ilev_mm_doordaughter"), -802.7f, 176.18f, 76.89f, 1, 1, 0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_224))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_224, joaat("v_ilev_mm_doorw"), -809.28f, 177.86f, 76.89f, 1, 1, 0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_225))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_225, joaat("v_ilev_mm_door"), -806.28f, 186.02f, 72.62f, 1, 1, 0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_226))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_226, joaat("v_ilev_fib_door1"), -31.72f, -1101.85f, 26.57f, 1, 1, 0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_227))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_227, joaat("v_ilev_fib_door1"), -33.81f, -1107.58f, 26.57f, 1, 1, 0);
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_296);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_297);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_296, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_296);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_296, iLocal_297);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_297, iLocal_296);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_297);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_297, 1862763509);
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Mansion_1");
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(29.43694f, -1105.479f, -46.89022f) - Vector(5f, 20f, 20f), Vector(29.43694f, -1105.479f, -46.89022f) + Vector(5f, 20f, 20f), 0, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bjxl"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("patriot"), 1);
		while (!func_650(1, 1))
		{
			SYSTEM::WAIT(0);
		}
		while (GlobalFunc_8315() != 1)
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_583(4, PLAYER::PLAYER_PED_ID(), 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[4 /*31*/], 1, 1, 1);
		GlobalFunc_173(&uLocal_586, 3, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		GlobalFunc_173(&uLocal_586, 8, 0, "SIMEON", 0, 1);
		if (iLocal_207 == 0)
		{
			iLocal_207 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_138, "v_carshowroom");
		}
		STREAMING::REQUEST_MODEL(joaat("tailgater"));
		STREAMING::REQUEST_MODEL(joaat("bjxl"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("tailgater")) || !STREAMING::HAS_MODEL_LOADED(joaat("bjxl")))
		{
			STREAMING::REQUEST_MODEL(joaat("tailgater"));
			STREAMING::REQUEST_MODEL(joaat("bjxl"));
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_181[0]))
		{
			func_548(&(iLocal_181[0]), joaat("bjxl"), -36.6411f, -1102.191f, 25.4223f, 154.2468f, -1, 0);
			INTERIOR::_0x82EBB79E258FA2B7(iLocal_181[0], iLocal_207);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_181[1]))
		{
			func_548(&(iLocal_181[1]), joaat("tailgater"), -41.7113f, -1100.042f, 25.4223f, 138.7067f, -1, 0);
			INTERIOR::_0x82EBB79E258FA2B7(iLocal_181[1], iLocal_207);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_181[2]))
		{
			func_548(&(iLocal_181[2]), joaat("bjxl"), -46.3951f, -1097.778f, 25.4223f, 108.3411f, -1, 0);
			INTERIOR::_0x82EBB79E258FA2B7(iLocal_181[2], iLocal_207);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_181[3]))
		{
			func_548(&(iLocal_181[3]), joaat("tailgater"), -50.0989f, -1094.534f, 25.4223f, 88.9621f, -1, 0);
			INTERIOR::_0x82EBB79E258FA2B7(iLocal_181[3], iLocal_207);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[0]))
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_181[0], 39, 39);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_181[0], 29, 134);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_181[0], 10, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_181[0], 11, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_181[0], 12, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_181[0], 10);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_181[0], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[1]))
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_181[1], 68, 68);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_181[1], 68, 134);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_181[1], 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_181[1], 2, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_181[1], 3, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_181[1], 10);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_181[1], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[2]))
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_181[2], 6, 3);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_181[2], 10, 134);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_181[2], 10, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_181[2], 11, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_181[2], 12, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_181[2], 10);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_181[2], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_181[3]))
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_181[3], 42, 42);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_181[3], 42, 134);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_181[3], 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_181[3], 2, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_181[3], 3, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_181[3], 10);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_181[3], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_187[0]))
		{
			func_548(&(iLocal_187[0]), joaat("tailgater"), Vector(25.4364f, -1105.855f, -57.1048f) + Vector(0f, -1.55f, 4.32f) * Vector(0f, 0f, 0f), 190.0401f, -1, 0);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_187[0], 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_187[0], 2, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_187[0], 3, true);
			if (!GlobalFunc_Is_Mission_Retry())
			{
				func_120(iLocal_187[0], 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_187[1]))
		{
			func_548(&(iLocal_187[1]), joaat("tailgater"), Vector(25.4364f, -1105.855f, -57.1048f) + Vector(0f, -1.55f, 4.32f) * Vector(1f, 1f, 1f), 190.0401f, -1, 0);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_187[1], 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_187[1], 2, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_187[1], 3, true);
			if (!GlobalFunc_Is_Mission_Retry())
			{
				func_120(iLocal_187[1], 0);
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tailgater"));
		if (func_119())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		func_8();
	}
	if (func_7())
	{
		iLocal_336++;
		if (GlobalFunc_Is_Mission_Retry())
		{
			if (Global_84544 == 1)
			{
				func_608(GlobalFunc_Get_Mission_Fail_Checkpoint() + 1);
			}
			else
			{
				func_608(GlobalFunc_Get_Mission_Fail_Checkpoint());
			}
		}
		else
		{
			Global_86803 = 0;
		}
	}
}

void func_608(int iParam0)//Position - 0x68E8E
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { Local_114 };
			fVar3 = 113.3946f;
			break;
		
		case 1:
			Var0 = { -851.866f, 178.7462f, 68.6477f };
			fVar3 = 262.7337f;
			break;
		
		case 2:
			Var0 = { -802.6609f, 168.6319f, 75.7407f };
			fVar3 = 31.0258f;
			break;
		
		case 3:
			Var0 = { Local_132 };
			fVar3 = 111.6656f;
			break;
		
		case 4:
			Var0 = { -72.6144f, -1106.491f, 25.0423f };
			fVar3 = 299.8838f;
			break;
		
		case 5:
			Var0 = { -58.1243f, -1095.056f, 25.4345f };
			fVar3 = 314.025f;
			break;
		
		case 6:
			Var0 = { -63.8593f, -1092.518f, 25.5585f };
			fVar3 = 71.5067f;
			break;
	}
	GlobalFunc_4972(Var0, fVar3, 0, 0);
	GlobalFunc_4967(0, -1, 0);
	switch (iParam0)
	{
		case 0:
			func_117(PLAYER::PLAYER_PED_ID(), Local_114, 113.3946f, 1);
			func_609(&iLocal_177, -58.3923f, -1114.561f, 25.4358f, 74.8206f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_177))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_177, 1, 1);
			}
			iLocal_336 = 2;
			break;
		
		case 1:
			func_117(PLAYER::PLAYER_PED_ID(), -851.866f, 178.7462f, 68.6477f, 262.7337f, 1);
			func_609(&iLocal_177, -855.576f, 172.7193f, 67.1646f, 352.4847f, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_177))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_177, 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_177) && !ENTITY::IS_ENTITY_DEAD(iLocal_177))
			{
				GlobalFunc_2239(iLocal_177, -855.576f, 172.7193f, 67.1646f, 352.4847f);
				VEHICLE::SET_VEHICLE_FIXED(iLocal_177);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_177, 1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_177, 1, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_177, 1);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			iLocal_336 = 3;
			break;
		
		case 2:
			func_609(&iLocal_177, -855.576f, 172.7193f, 67.1646f, 352.4847f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_177))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_177, 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_177) && !ENTITY::IS_ENTITY_DEAD(iLocal_177))
			{
				GlobalFunc_2239(iLocal_177, -855.576f, 172.7193f, 67.1646f, 352.4847f);
				VEHICLE::SET_VEHICLE_FIXED(iLocal_177);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_177, 1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_177, 1, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_177, 1);
			}
			STREAMING::REQUEST_MODEL(joaat("bjxl"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("bjxl")))
			{
				SYSTEM::WAIT(0);
			}
			func_548(&iLocal_179, joaat("bjxl"), Local_132, 111.6656f, 126, 0);
			func_546(iLocal_179);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_179, 5, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_179, Local_132, 0, 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
			STREAMING::REQUEST_MODEL(joaat("bison3"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("bison3")))
			{
				SYSTEM::WAIT(0);
			}
			func_548(&iLocal_178, joaat("bison3"), -800.1796f, 164.9729f, 70.5296f, 111.0221f, 132, 0);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_178, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_178, 2);
			VEHICLE::SET_VEHICLE_ALARM(iLocal_178, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison3"));
			BRAIN::_0x6E91B04E08773030("ob_tv");
			uLocal_219 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_219))
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_219, 11);
			}
			iLocal_336 = 5;
			break;
		
		case 3:
			iLocal_206 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_206);
			func_609(&iLocal_177, -855.576f, 172.7193f, 67.1646f, 352.4847f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_177))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_177, 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_177) && !ENTITY::IS_ENTITY_DEAD(iLocal_177))
			{
				GlobalFunc_2239(iLocal_177, -855.576f, 172.7193f, 67.1646f, 352.4847f);
				VEHICLE::SET_VEHICLE_FIXED(iLocal_177);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_177, 1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_177, 1, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_177, 1);
			}
			STREAMING::REQUEST_MODEL(joaat("bjxl"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("bjxl")))
			{
				SYSTEM::WAIT(0);
			}
			func_548(&iLocal_179, joaat("bjxl"), Local_132, 111.6656f, 126, 0);
			func_546(iLocal_179);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_179, 5, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_179, Local_132, 0, 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
			GlobalFunc_9132(1);
			iLocal_336 = 6;
			break;
		
		case 4:
			STREAMING::REQUEST_MODEL(joaat("bjxl"));
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("bjxl")) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)))
			{
				SYSTEM::WAIT(0);
			}
			func_548(&iLocal_179, joaat("bjxl"), Local_132, 111.6656f, 126, 0);
			func_546(iLocal_179);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_179, 5, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
			GlobalFunc_2240(&(uLocal_542[0]));
			func_339(&(uLocal_542[0]), 0, Local_117, 26.8488f, 0);
			func_306(uLocal_542[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_542[0], joaat("weapon_unarmed"), 1);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_214))
			{
				iLocal_214 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pistol")), Local_117, 1, 1, 0);
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_214, uLocal_542[0], PED::GET_PED_BONE_INDEX(uLocal_542[0], 28422), Local_105, Local_105, 0, 0, 0, 0, 2, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_542[0], iLocal_296);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uLocal_542[0], 0);
			GlobalFunc_173(&uLocal_586, 1, uLocal_542[0], "MICHAEL", 0, 1);
			func_712("ARM3_GUN", 1);
			func_712("ARM3_GUNA", 1);
			func_712("ARM3_GUNB", 1);
			GlobalFunc_9132(1);
			if (Global_84544 == 1)
			{
				iLocal_336 = 8;
			}
			else
			{
				iLocal_336 = 9;
			}
			break;
		
		case 5:
			iLocal_207 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_138, "v_carshowroom");
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_207);
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_207))
			{
				func_676(0);
			}
			iLocal_91 = 1;
			STREAMING::REQUEST_MODEL(joaat("bjxl"));
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
			STREAMING::REQUEST_MODEL(GlobalFunc_4946(18));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("bjxl")) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0))) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(18)))
			{
				SYSTEM::WAIT(0);
			}
			func_548(&iLocal_179, joaat("bjxl"), Local_132, 111.6656f, 126, 0);
			func_546(iLocal_179);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_179, 5, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
			GlobalFunc_2240(&(uLocal_542[0]));
			func_339(&(uLocal_542[0]), 0, Local_117, 26.8488f, 0);
			func_306(uLocal_542[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_542[0], joaat("weapon_unarmed"), 1);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uLocal_542[0], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_542[0], iLocal_296);
			GlobalFunc_173(&uLocal_586, 1, uLocal_542[0], "MICHAEL", 0, 1);
			while (!GlobalFunc_7047(&iLocal_174, 18, -56.436f, -1098.818f, 25.4345f, 31.149f, 1))
			{
				func_676(0);
			}
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_174, 0);
			ENTITY::SET_ENTITY_HEALTH(iLocal_174, 400);
			PED::SET_PED_MAX_HEALTH(iLocal_174, 400);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_174, iLocal_179, 3000, 0, 2);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_174, 1);
			func_120(iLocal_174, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(18));
			GlobalFunc_173(&uLocal_586, 8, iLocal_174, "SIMEON", 0, 1);
			func_712("ARM3_GUN", 1);
			func_712("ARM3_GUNA", 1);
			func_712("ARM3_GUNB", 1);
			GlobalFunc_9132(1);
			iLocal_336 = 11;
			break;
		
		case 6:
			iLocal_207 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_138, "v_carshowroom");
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_207);
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_207))
			{
				func_676(0);
			}
			iLocal_91 = 1;
			STREAMING::REQUEST_MODEL(joaat("bjxl"));
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
			STREAMING::REQUEST_MODEL(GlobalFunc_4946(18));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("bjxl")) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0))) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(18)))
			{
				SYSTEM::WAIT(0);
			}
			func_548(&iLocal_179, joaat("bjxl"), Local_132, 111.6656f, 126, 0);
			func_546(iLocal_179);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_179, 5, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
			GlobalFunc_2240(&(uLocal_542[0]));
			func_339(&(uLocal_542[0]), 0, Local_117, 26.8488f, 0);
			func_306(uLocal_542[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_542[0], joaat("weapon_unarmed"), 1);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uLocal_542[0], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_542[0], iLocal_296);
			GlobalFunc_173(&uLocal_586, 1, uLocal_542[0], "MICHAEL", 0, 1);
			while (!GlobalFunc_7047(&iLocal_174, 18, -56.436f, -1098.818f, 25.4345f, 31.149f, 1))
			{
				func_676(0);
			}
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_174, 0);
			ENTITY::SET_ENTITY_HEALTH(iLocal_174, 400);
			PED::SET_PED_MAX_HEALTH(iLocal_174, 400);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_174, iLocal_179, 3000, 0, 2);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_174, 1);
			func_120(iLocal_174, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(18));
			GlobalFunc_173(&uLocal_586, 8, iLocal_174, "SIMEON", 0, 1);
			func_712("ARM3_GUN", 1);
			func_712("ARM3_GUNA", 1);
			func_712("ARM3_GUNB", 1);
			GlobalFunc_9132(1);
			iLocal_97 = 1;
			iLocal_336 = 11;
			break;
	}
	iLocal_95 = 1;
	bLocal_96 = true;
}

void func_609(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x6984D
{
	int iVar0;
	
	iVar0 = 1;
	if (!GlobalFunc_Is_Mission_Retry() || !GlobalFunc_7698())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!GlobalFunc_9009(iParam6, iParam7, iParam8))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		GlobalFunc_8368();
		while (!GlobalFunc_8367())
		{
			SYSTEM::WAIT(0);
		}
		*iParam0 = func_629(Param1, fParam4);
	}
	else if (iParam9 == 1)
	{
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
		{
			Param1 = { Global_93588.f_2167 };
			fParam4 = Global_93588.f_2167.f_6;
		}
		MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
		GlobalFunc_8365(Param1, 5f, 0);
		if (GlobalFunc_42(iParam12))
		{
			GlobalFunc_6791(iParam12, 0);
			while (!func_610(iParam0, iParam12, Param1, fParam4, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(iParam10);
			while (!STREAMING::HAS_MODEL_LOADED(iParam10))
			{
				SYSTEM::WAIT(0);
			}
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam10, Param1, fParam4, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (iParam11 == 0)
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 0);
				}
				else if (iParam11 > 0)
				{
					VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam11, iParam11);
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam10);
		}
	}
	if (iParam5 == 1)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0)) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, -1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
		}
	}
}

int func_610(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x699D5
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (GlobalFunc_42(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		GlobalFunc_97(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var5)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar79 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5107(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5106(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar80 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5107(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5106(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var5);
			if (STREAMING::HAS_MODEL_LOADED(Var5))
			{
				bVar81 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, fParam5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				StringCopy(&cVar82, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var5.f_5, Var5.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var5.f_7, Var5.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var5.f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var5.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var5.f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var5.f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var5.f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var5.f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var5.f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var5.f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
						}
					}
				}
				GlobalFunc_5107(iParam0, &(Var5.f_31), &(Var5.f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5106(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208 = 1;
					GlobalFunc_9139(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var5);
				}
				if (bVar81)
				{
					GlobalFunc_531(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}



















int func_629(struct<3> Param0, float fParam3)//Position - 0x6D4C2
{
	return func_630(&(Global_93588.f_2167), Param0, fParam3, 0);
}

int func_630(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x6D4DC
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (GlobalFunc_6794(uParam0))
	{
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_42 == joaat("monster") || uParam0->f_12.f_42 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (GlobalFunc_7696(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
			GlobalFunc_8365(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_42, Param1, fParam4, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
				}
				GlobalFunc_7065(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_42) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_42))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.x, Param1.f_1, (Param1.f_2 + 30f), Param1.x, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							GlobalFunc_6791(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							GlobalFunc_6791(uParam0->f_11, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, 0);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
					GlobalFunc_531(iVar0, uParam0->f_11);
				}
				else if ((!GlobalFunc_8366(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar8 = GlobalFunc_536(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						GlobalFunc_7695(iVar8);
					}
				}
				if (((Global_Mission_Fail_State != 13 && Global_Mission_Fail_State != 10) && Global_Mission_Fail_State != 11) && Global_Mission_Fail_State != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_Mission_Fail_State.Failed_Script_Name)) == Global_68102)
					{
						if (uParam0->f_12.f_42 == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[21 /*54*/].f_42)
						{
							GlobalFunc_4927(24, 0);
							GlobalFunc_7695(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					GlobalFunc_8526(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_42);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}




















int func_650(int iParam0, bool bParam1)//Position - 0x6E29D
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
		func_653(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_340(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_132(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_653(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6E455
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
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				GlobalFunc_8386(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				func_482(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7692(*iParam0);
				func_342(*iParam0, bParam6);
				GlobalFunc_516(*iParam0);
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


void func_655()//Position - 0x6E545
{
	if (iLocal_345 == 0 && (!AUDIO::IS_MUSIC_ONESHOT_PLAYING() || MISC::GET_GAME_TIMER() > iLocal_756))
	{
		switch (iLocal_344)
		{
			case 1:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_755) || !MISC::ARE_STRINGS_EQUAL(sLocal_755, "ARM3_START"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_755))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_755);
					}
					sLocal_755 = "ARM3_START";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("ARM3_START"))
				{
					iLocal_344 = 0;
				}
				break;
			
			case 10:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_755) || !MISC::ARE_STRINGS_EQUAL(sLocal_755, "ARM3_MIC"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_755))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_755);
					}
					sLocal_755 = "ARM3_MIC";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("ARM3_MIC"))
				{
					iLocal_344 = 0;
				}
				break;
			
			case 16:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_755) || !MISC::ARE_STRINGS_EQUAL(sLocal_755, "ARM3_HIT"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_755))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_755);
					}
					sLocal_755 = "ARM3_HIT";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("ARM3_HIT"))
				{
					iLocal_344 = 0;
				}
				break;
			}
	}
	switch (iLocal_345)
	{
		case 1:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_755) || !MISC::ARE_STRINGS_EQUAL(sLocal_755, "ARM3_START"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_755))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_755);
				}
				sLocal_755 = "ARM3_START";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("ARM3_START"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_START"))
				{
					iLocal_756 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_345 = 0;
				}
			}
			break;
		
		case 2:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_1"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 3:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_WINDOW"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 4:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_2"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 5:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_3"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 6:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_GARAGE_STOP"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 7:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_CAR"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 8:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_4"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 9:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_CALL"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 10:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_755) || !MISC::ARE_STRINGS_EQUAL(sLocal_755, "ARM3_MIC"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_755))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_755);
				}
				sLocal_755 = "ARM3_MIC";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("ARM3_MIC"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_MIC"))
				{
					iLocal_756 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_345 = 0;
				}
			}
			break;
		
		case 11:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_5"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 12:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_CS"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 13:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_6"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 14:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_SPEED"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 15:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_7"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 16:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_755) || !MISC::ARE_STRINGS_EQUAL(sLocal_755, "ARM3_HIT"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_755))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_755);
				}
				sLocal_755 = "ARM3_HIT";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("ARM3_HIT"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_HIT"))
				{
					iLocal_756 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_345 = 0;
				}
			}
			break;
		
		case 17:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_HIT_STOP"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 18:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_8"))
			{
				iLocal_345 = 0;
			}
			break;
		
		case 19:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_FAIL"))
			{
				iLocal_345 = 0;
			}
			break;
	}
}

void func_656()//Position - 0x6E940
{
	if (iLocal_336 == 3 || (iLocal_336 >= 4 && iLocal_336 <= 5))
	{
		func_715(GlobalFunc_4946(14));
	}
	if (iLocal_336 == 3 || (iLocal_336 >= 4 && iLocal_336 <= 5))
	{
		func_715(GlobalFunc_4946(15));
	}
	if (iLocal_336 >= 4 && iLocal_336 <= 5)
	{
		func_715(GlobalFunc_4946(17));
	}
	if (iLocal_336 >= 4 && iLocal_336 <= 5)
	{
		func_715(GlobalFunc_4946(25));
	}
	if ((iLocal_336 == 2 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_135, 1) < 200f) || (iLocal_336 >= 3 && iLocal_336 <= 11))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_179))
		{
			func_715(joaat("bjxl"));
		}
	}
	if (iLocal_336 == 5 || iLocal_336 == 6)
	{
		func_715(GlobalFunc_4917(0));
	}
	if (iLocal_336 >= 8 && iLocal_336 <= 9)
	{
		func_715(joaat("prop_showroom_glass_1b"));
	}
	if (iLocal_336 >= 9 && iLocal_336 <= 10)
	{
		func_715(GlobalFunc_4946(18));
	}
	if (iLocal_336 >= 5 && iLocal_336 <= 10)
	{
		func_715(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pistol")));
	}
	if ((iLocal_336 == 2 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_135, 1) < 200f) || (iLocal_336 >= 3 && iLocal_336 <= 9))
	{
		func_685(sLocal_150);
	}
	else
	{
		func_657(sLocal_150);
	}
	if (iLocal_336 >= 3 && iLocal_336 <= 5)
	{
		func_685(sLocal_151);
	}
	else
	{
		func_657(sLocal_151);
	}
	if (iLocal_336 >= 3 && iLocal_336 <= 4)
	{
		func_685(sLocal_153);
	}
	else
	{
		func_657(sLocal_153);
	}
	if (!iLocal_336 == 3)
	{
		func_657(sLocal_157);
	}
	if (iLocal_336 >= 10 && iLocal_336 <= 11)
	{
		func_685(sLocal_154);
	}
	else
	{
		func_657(sLocal_154);
	}
	if (iLocal_336 >= 9 && iLocal_336 <= 10)
	{
		func_685(sLocal_158);
	}
	else
	{
		func_657(sLocal_158);
	}
	if ((iLocal_336 == 5 || iLocal_336 == 6) || iLocal_336 == 7)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_3_01", 0);
	}
	if (iLocal_336 == 9 || iLocal_336 == 10)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_3_02_CAR_CRASH", 0);
	}
}

void func_657(char* sParam0)//Position - 0x6EBCB
{
	if (func_659(sParam0))
	{
		STREAMING::REMOVE_ANIM_DICT(sParam0);
		func_658(sParam0, 0);
	}
}

void func_658(char* sParam0, bool bParam1)//Position - 0x6EBE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_521;
	iVar2 = 0;
	bVar3 = false;
	while (iVar2 < iVar1 && !bVar3)
	{
		if (bParam1)
		{
			if (iLocal_521[iVar2] == 0)
			{
				iLocal_521[iVar2] = iVar0;
				bVar3 = true;
			}
		}
		else if (iLocal_521[iVar2] == iVar0)
		{
			iLocal_521[iVar2] = 0;
			bVar3 = true;
		}
		iVar2++;
	}
}

int func_659(char* sParam0)//Position - 0x6EC53
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_521;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_521[iVar2] == iVar0)
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}
















int func_675()//Position - 0x6F0C7
{
	if (bLocal_751)
	{
		return 1;
	}
	return 0;
}

void func_676(int iParam0)//Position - 0x6F0DA
{
	int iVar0;
	
	iVar0 = (MISC::GET_GAME_TIMER() + iParam0);
	while (MISC::GET_GAME_TIMER() <= iVar0)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_Complications", 0);
		func_721();
	}
}

void func_677(char* sParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x6F109
{
	if (!func_718(sParam0))
	{
		while (!GlobalFunc_10618(&uLocal_586, cLocal_346, sParam0, iParam1, iParam3, 0, 0))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			func_676(0);
		}
		func_712(sParam0, bParam2);
	}
}




void func_681(var uParam0, int iParam1, bool bParam2)//Position - 0x6F1EB
{
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!PED::IS_PED_INJURED(*iParam1))
			{
				*uParam0 = GlobalFunc_6797(*iParam1, bParam2, 145);
				if (bParam2 == 0)
				{
					HUD::SET_BLIP_PRIORITY(*uParam0, 7);
				}
			}
		}
	}
}




int func_685(char* sParam0)//Position - 0x6F30A
{
	if (!func_659(sParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(sParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
		{
			func_658(sParam0, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}




void func_689(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6)//Position - 0x6F42F
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam5, 1, 1);
		if (iParam6 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
		}
	}
}

int func_690(int iParam0)//Position - 0x6F462
{
	if (GlobalFunc_8315() == iParam0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return uLocal_542[GlobalFunc_237(iParam0)];
}

void func_691()//Position - 0x6F488
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_2238(1);
	func_114(19);
	switch (iLocal_337)
	{
		case 0:
			GlobalFunc_509("ARM3_FAIL");
			break;
		
		case 1:
			GlobalFunc_509("ARM3_FAIL");
			break;
		
		case 2:
			if (iLocal_336 < 7)
			{
				GlobalFunc_509("ARM3_BLOWN");
			}
			else
			{
				GlobalFunc_509("CMN_MDIED");
			}
			break;
		
		case 3:
			GlobalFunc_509("CMN_FDIED");
			break;
		
		case 4:
			GlobalFunc_509("ARM3_BLOWN");
			break;
		
		case 5:
			GlobalFunc_509("ARM3_FNOISE");
			break;
		
		case 6:
			GlobalFunc_509("ARM3_BLOWN");
			break;
		
		case 7:
			GlobalFunc_509("ARM3_FNOISE");
			break;
		
		case 8:
			GlobalFunc_509("ARM3_BLOWN");
			break;
		
		case 9:
			GlobalFunc_509("ARM3_BLOWN");
			break;
		
		case 10:
			GlobalFunc_509("ARM3_BLOWN");
			break;
		
		case 13:
			GlobalFunc_509("ARM3_FNOISE");
			break;
		
		case 14:
			GlobalFunc_509("ARM3_FNOISE2");
			break;
		
		case 15:
			GlobalFunc_509("ARM3_FNOISE3");
			break;
		
		case 16:
			GlobalFunc_509("ARM3_BLOWN");
			break;
		
		case 17:
			GlobalFunc_509("ARM3_FNOISE");
			break;
		
		case 18:
			GlobalFunc_509("ARM3_IGNORE");
			break;
		
		case 19:
			GlobalFunc_509("ARM3_FLED");
			break;
		
		case 20:
			GlobalFunc_509("CMN_GENDEST");
			break;
		
		case 21:
			GlobalFunc_509("ARM3_FEXP");
			break;
		
		case 22:
			if (iLocal_336 < 7)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -74.61548f, -1102.602f, 24.00692f, -28.39191f, -1119.144f, 41.55816f, 50f, 0, 1, 0))
				{
					GlobalFunc_509("ARM3_FDISRUPT");
				}
				else
				{
					GlobalFunc_509("ARM3_FCOPSALERT");
				}
			}
			else if (iLocal_336 < 11)
			{
				GlobalFunc_509("ARM3_FCOPSALERT");
			}
			else
			{
				GlobalFunc_509("ARM3_FCOPSALERT");
			}
			break;
		
		case 11:
			GlobalFunc_509("ARM3_FSIMEON");
			break;
		
		case 12:
			GlobalFunc_509("ARM3_FDISRUPT");
			break;
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		func_504();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_175) && PED::IS_PED_INJURED(iLocal_175))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_217) && ENTITY::IS_ENTITY_ATTACHED(iLocal_217))
		{
			ENTITY::DETACH_ENTITY(iLocal_217, 1, 0);
		}
	}
	GlobalFunc_10616(0);
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
	{
		CUTSCENE::STOP_CUTSCENE(1);
		SYSTEM::WAIT(0);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	while (CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	func_780();
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -23.30297f, -1107.542f, 24.67208f, -61.43049f, -1093.553f, 35.48602f, 40f, 0, 1, 0))
	{
		GlobalFunc_5129(-63.1009f, -1092.901f, 25.5257f, 71.4989f);
		GlobalFunc_5166(-70.5736f, -1088.596f, 25.5754f, 340.4931f);
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.415f, 135.2188f, 57.20585f, -807.6046f, 199.8809f, 94.7416f, 90f, 0, 1, 0))
	{
		GlobalFunc_5129(-853.5109f, 179.5495f, 68.8114f, 173.1056f);
		GlobalFunc_5166(-855.8997f, 172.389f, 66.9269f, 355.198f);
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_335))
	{
		if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_335) != 10)
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_335, 9);
		}
	}
	func_775(0);
}













int func_704(int iParam0)//Position - 0x706BE
{
	var uVar0;
	int iVar1;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(uVar0);
	if (((((((iVar1 == joaat("GROUP_PISTOL") || iVar1 == joaat("GROUP_SMG")) || iVar1 == joaat("GROUP_RIFLE")) || iVar1 == joaat("GROUP_MG")) || iVar1 == joaat("GROUP_SHOTGUN")) || iVar1 == joaat("GROUP_SNIPER")) || iVar1 == joaat("GROUP_HEAVY")) || iVar1 == 88899580)
	{
		return 1;
	}
	return 0;
}







int func_711(int iParam0, int iParam1, struct<3> Param2, bool bParam5, float fParam6, float fParam7, float fParam8, int iParam9)//Position - 0x7773F
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
			iVar1 = iLocal_221;
			break;
		
		case 1:
			iVar1 = iLocal_222;
			break;
		
		case 2:
			iVar1 = iLocal_223;
			break;
		
		case 3:
			iVar1 = iLocal_224;
			break;
		
		case 4:
			iVar1 = iLocal_225;
			break;
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar1))
	{
		iVar2 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iVar1);
		fVar3 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iVar1);
		fVar3 = fVar3;
		iVar2 = iVar2;
		iParam1 = iParam1;
		OBJECT::DOOR_SYSTEM_SET_SPRING_REMOVED(iVar1, iParam9, 1, 0);
		if (fVar0 <= (fParam8 + -fParam7) || fVar0 >= (fParam8 + fParam7))
		{
			if (fVar0 > fParam8)
			{
				fVar0 = (fVar0 - fParam6);
			}
			else if (fVar0 < fParam8)
			{
				fVar0 = (fVar0 + fParam6);
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar1, fVar0, 0, 0);
			MISC::CLEAR_AREA_OF_OBJECTS(Param2, 2f, 0);
			if (bParam5)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar1, 1, 0, 1);
			}
			else
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar1, 0, 0, 1);
			}
			return 0;
		}
		else
		{
			fVar0 = fParam8;
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar1, fVar0, 0, 0);
			if (bParam5)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar1, 1, 0, 1);
			}
			else
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar1, 0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_712(char* sParam0, bool bParam1)//Position - 0x7785E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_718(sParam0))
		{
			iVar1 = iLocal_347;
			if (iLocal_468 < iVar1)
			{
				iLocal_347[iLocal_468] = iVar0;
				iLocal_468++;
			}
		}
	}
	else
	{
		iVar2 = func_714(iVar0);
		if (iVar2 != -1)
		{
			iLocal_347[iVar2] = 0;
			func_713();
			iLocal_468 = (iLocal_468 - 1);
		}
	}
}

void func_713()//Position - 0x778C1
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_347;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_347[iVar1] == 0)
		{
			if (iLocal_347[iVar1 + 1] != 0)
			{
				iLocal_347[iVar1] = iLocal_347[iVar1 + 1];
				iLocal_347[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

int func_714(int iParam0)//Position - 0x77918
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_468)
	{
		if (iLocal_347[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_715(int iParam0)//Position - 0x77949
{
	if (!func_717(iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			func_716(iParam0, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_716(var uParam0, bool bParam1)//Position - 0x77979
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam0;
	iVar1 = 0;
	bVar2 = false;
	while (iVar1 < iLocal_469 && !bVar2)
	{
		if (bParam1)
		{
			if (iLocal_469[iVar1] == 0)
			{
				iLocal_469[iVar1] = iVar0;
				bVar2 = true;
			}
		}
		else if (iLocal_469[iVar1] == iVar0)
		{
			iLocal_469[iVar1] = 0;
			bVar2 = true;
		}
		iVar1++;
	}
}

int func_717(var uParam0)//Position - 0x779DB
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = 0;
	while (iVar1 < iLocal_469)
	{
		if (iLocal_469[iVar1] == iVar0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_718(char* sParam0)//Position - 0x77A0C
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_714(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}

void func_719()//Position - 0x77A2B
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	var uVar12;
	var uVar13;
	
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_170) || ENTITY::DOES_ENTITY_EXIST(iLocal_171)) || ENTITY::DOES_ENTITY_EXIST(iLocal_172)) || ENTITY::DOES_ENTITY_EXIST(iLocal_173))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.1275f, 167.6575f, 75.74072f, -807.4443f, 178.8427f, 78.99088f, 3.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.7242f, 167.1417f, 75.74088f, -809.2186f, 173.5083f, 79.24088f, 5f, 0, 1, 0))
			{
				if (iLocal_338 != 1)
				{
					if (CUTSCENE::HAS_CUTSCENE_LOADED() && !CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_3"))
					{
						CUTSCENE::REMOVE_CUTSCENE();
					}
					else
					{
						CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_3", 8);
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							func_21("Franklin", func_690(1), 0, 2);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", iLocal_170, 0);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
						}
						if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_3"))
						{
							iLocal_338 = 1;
						}
					}
				}
			}
		}
		if (iLocal_338 == 1)
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.7242f, 167.1417f, 75.74088f, -809.2186f, 173.5083f, 79.24088f, 5f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.7697f, 174.021f, 75.74074f, -806.3124f, 172.8101f, 78.24074f, 0.75f, 0, 1, 0)) || iLocal_339[1])
			{
				iLocal_339[1] = 1;
				if (GlobalFunc_550("Armenian_3_mcs_3"))
				{
					func_725();
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_170, "Jimmy", 0, 0, 0);
					GlobalFunc_8316(1, 1, 1, 0);
					GlobalFunc_6685(1);
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					func_676(0);
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
					MISC::CLEAR_AREA(-808.4632f, 171.2454f, 75.7504f, 50f, 1, 0, 0, 0);
					GlobalFunc_2241(&iLocal_212);
					GlobalFunc_2241(&iLocal_213);
					while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 900)
						{
							GlobalFunc_8316(0, 1, 1, 0);
							iLocal_337 = 5;
							func_691();
						}
						func_676(0);
					}
					GlobalFunc_8316(0, 1, 1, 0);
					iLocal_337 = 5;
					func_691();
				}
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.1136f, 176.5611f, 73.9906f, -805.7435f, 185.8805f, 79.0034f, 5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.6448f, 169.0609f, 75.74088f, -802.534f, 176.0849f, 79.24088f, 4f, 0, 1, 0))
			{
				if (iLocal_338 != 2)
				{
					if (CUTSCENE::HAS_CUTSCENE_LOADED() && !CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_4"))
					{
						CUTSCENE::REMOVE_CUTSCENE();
					}
					else
					{
						CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_4", 8);
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							func_21("Franklin", func_690(1), 0, 2);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Tracy", iLocal_171, 0);
						}
						if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_4"))
						{
							iLocal_338 = 2;
						}
					}
				}
			}
		}
		if (iLocal_338 == 2)
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.6448f, 169.0609f, 75.74088f, -802.534f, 176.0849f, 79.24088f, 4f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.7047f, 176.1768f, 75.74074f, -803.912f, 175.7128f, 78.24074f, 0.75f, 0, 1, 0)) || iLocal_339[2])
			{
				iLocal_339[2] = 1;
				if (GlobalFunc_550("Armenian_3_mcs_4"))
				{
					func_725();
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_171, "Tracy", 0, 0, 0);
					GlobalFunc_8316(1, 1, 1, 0);
					GlobalFunc_6685(1);
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					func_676(0);
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
					MISC::CLEAR_AREA(-801.2631f, 173.2075f, 75.7504f, 50f, 1, 0, 0, 0);
					GlobalFunc_2241(&iLocal_216);
					while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 4900)
						{
							GlobalFunc_8316(0, 1, 1, 0);
							iLocal_337 = 7;
							func_691();
						}
						func_676(0);
					}
					GlobalFunc_8316(0, 1, 1, 0);
					iLocal_337 = 7;
					func_691();
				}
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -794.9276f, 184.107f, 70.83471f, -815.3759f, 176.0862f, 74.15309f, 25f, 0, 1, 0))
			{
				if (iLocal_338 != 3)
				{
					if (CUTSCENE::HAS_CUTSCENE_LOADED() && !CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_5"))
					{
						CUTSCENE::REMOVE_CUTSCENE();
					}
					else
					{
						CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_5", 8);
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							func_21("Franklin", func_690(1), 0, 2);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Amanda", iLocal_172, 0);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("TennisCoach", iLocal_173, 0);
						}
						if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_5"))
						{
							iLocal_338 = 3;
						}
					}
				}
			}
		}
		if (iLocal_338 == 3)
		{
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -795.9236f, 177.4962f, 70.83471f, -799.761f, 187.485f, 74.60547f, 5.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.2227f, 185.6554f, 71.60547f, -804.6547f, 184.058f, 75.35743f, 2.75f, 0, 1, 0)) || func_718("CaughtWifeCoach")) || iLocal_339[3])
			{
				iLocal_339[3] = 1;
				if (GlobalFunc_550("Armenian_3_mcs_5"))
				{
					func_725();
					iLocal_337 = 13;
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_172, "Amanda", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_173, "TennisCoach", 0, 0, 0);
					GlobalFunc_8316(1, 1, 1, 0);
					GlobalFunc_6685(1);
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					func_676(0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_209))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_282))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_209, 0f, 1);
						}
						ENTITY::DETACH_ENTITY(iLocal_209, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_209, 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_209, -796.5159f, 183.8585f, 72.0977f, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_209, -17.1906f, -143.6059f, -99.3626f, 2, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_210))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_282))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_210, 0f, 1);
						}
						ENTITY::DETACH_ENTITY(iLocal_210, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_210, 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_210, -796.4891f, 183.8672f, 72.102f, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_210, -17.1865f, -146.0179f, -99.366f, 2, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_211))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_282))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_211, 0f, 1);
						}
						ENTITY::DETACH_ENTITY(iLocal_211, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_211, 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_211, -796.1265f, 184.2115f, 71.8298f, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_211, -10.7331f, 12.345f, -171.9909f, 2, 1);
					}
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
					MISC::CLEAR_AREA(-801.7021f, 183.1848f, 71.6055f, 50f, 1, 0, 0, 0);
					while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 6400)
						{
							GlobalFunc_8316(0, 1, 1, 0);
							func_691();
						}
						func_676(0);
					}
					GlobalFunc_8316(0, 1, 1, 0);
					func_691();
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -815.6755f, 173.8023f, 70.68333f, -793.9424f, 182.0436f, 81.83512f, 30f, 0, 1, 0))
		{
			if ((((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) && func_704(PLAYER::PLAYER_PED_ID())) || (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_206 && GlobalFunc_617()))
			{
				func_676(200);
				func_725();
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_170, 1) };
				Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_171, 1) };
				Var9 = { ENTITY::GET_ENTITY_COORDS(iLocal_172, 1) };
				if (!PED::IS_PED_INJURED(iLocal_170))
				{
					func_505();
					if (func_685(sLocal_150))
					{
						uVar12 = PED::CREATE_SYNCHRONIZED_SCENE(-806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_170, uVar12, sLocal_150, "jimmy_playingvideogame_fail", 8f, -8f, 5, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_212, uVar12, "jimmy_playingvideogame_fail_controller", sLocal_150, 8f, -8f, 0, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_213, uVar12, "jimmy_playingvideogame_fail_headset", sLocal_150, 8f, -8f, 0, 1148846080);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(uVar12, 0.25f);
					}
					PED::SET_PED_KEEP_TASK(iLocal_170, 1);
					if (Var0.f_2 > (Var3.f_2 - 2f) && Var0.f_2 < (Var3.f_2 + 2f))
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1) < 10f && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var6, 1)) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var9, 1))
						{
							GlobalFunc_173(&uLocal_586, 6, iLocal_170, "JIMMY", 0, 1);
							func_677("ARM3_JIMF", 7, 1, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_171))
				{
					if (func_685(sLocal_150))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_171, sLocal_151, "tracey_argument", 3))
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_171, sLocal_150, "tracey_fail", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 4f, -8f, -1, 9218, 0f, 2, 1);
						}
						else
						{
							TASK::TASK_REACT_AND_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID());
						}
					}
					PED::SET_PED_KEEP_TASK(iLocal_171, 1);
					if (Var0.f_2 > (Var6.f_2 - 2f) && Var0.f_2 < (Var6.f_2 + 2f))
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var6, 1) < 10f && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var6, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1)) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var6, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var9, 1))
						{
							GlobalFunc_173(&uLocal_586, 5, iLocal_171, "TRACEY", 0, 1);
							func_677("ARM3_TRCF", 7, 1, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_172))
				{
					TASK::CLEAR_PED_TASKS(iLocal_172);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_172, PLAYER::PLAYER_PED_ID());
					PED::SET_PED_KEEP_TASK(iLocal_172, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_173))
				{
					TASK::CLEAR_PED_TASKS(iLocal_173);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_173, PLAYER::PLAYER_PED_ID());
					PED::SET_PED_KEEP_TASK(iLocal_173, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_172) && !PED::IS_PED_INJURED(iLocal_173))
				{
					if (Var0.f_2 > (Var9.f_2 - 2f) && Var0.f_2 < (Var9.f_2 + 2f))
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var9, 1) < 10f && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var9, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1)) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var9, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var6, 1))
						{
							func_677("ARM3_WIFF", 7, 1, 0);
						}
					}
				}
				func_504();
				func_676(2000);
				iLocal_337 = 16;
				func_691();
			}
		}
		if (iLocal_336 > 5 || (iLocal_336 == 5 && iLocal_47 > 0))
		{
			if (!CUTSCENE::IS_CUTSCENE_PLAYING() && CAM::IS_SCREEN_FADED_IN())
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -815.6755f, 173.8023f, 70.68333f, -793.9424f, 182.0436f, 81.83512f, 30f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -802.7598f, 168.7392f, 77.2407f, 0.5f, 0.5f, 1.5f, 0, 1, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
					{
						if (((((PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_170) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.6287f, 170.7219f, 75.27358f, -804.6641f, 176.915f, 78.24829f, 1.5f, 0, 1, 0)) || MISC::IS_BULLET_IN_ANGLED_AREA(-808.9304f, 173.6554f, 74.24014f, -806.4302f, 166.9747f, 79.24074f, 4.25f, 1)) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_170, 1) - Vector(1.5f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iLocal_170, 1) + Vector(1.5f, 2f, 2f), 1))
						{
							func_505();
							if (func_685(sLocal_150))
							{
								uVar13 = PED::CREATE_SYNCHRONIZED_SCENE(-806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_170, uVar13, sLocal_150, "jimmy_playingvideogame_fail", 8f, -8f, 5, 0, 1148846080, 0);
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_212, uVar13, "jimmy_playingvideogame_fail_controller", sLocal_150, 8f, -8f, 0, 1148846080);
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_213, uVar13, "jimmy_playingvideogame_fail_headset", sLocal_150, 8f, -8f, 0, 1148846080);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(uVar13, 0.25f);
							}
							PED::SET_PED_KEEP_TASK(iLocal_170, 1);
							GlobalFunc_173(&uLocal_586, 6, iLocal_170, "JIMMY", 0, 1);
							func_677("ARM3_JIMF", 7, 1, 0);
							func_676(2800);
							iLocal_337 = 17;
							func_691();
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_171) && !PED::IS_PED_INJURED(iLocal_171))
					{
						if (((((PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_171) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.033f, 172.5135f, 75.74074f, -806.9184f, 185.4249f, 78.50414f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.7142f, 176.1402f, 75.74074f, -806.8047f, 179.2973f, 79.2408f, 3f, 0, 1, 0))) || MISC::IS_BULLET_IN_ANGLED_AREA(-802.3978f, 176.1553f, 74.24074f, -799.6302f, 168.9907f, 79.24074f, 4f, 1)) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_171, 1) - Vector(1.5f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iLocal_171, 1) + Vector(1.5f, 2f, 2f), 1))
						{
							if (func_685(sLocal_150))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_171, sLocal_151, "tracey_argument", 3))
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_171, sLocal_150, "tracey_fail", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 4f, -8f, -1, 9218, 0f, 2, 1);
								}
								else
								{
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID());
								}
							}
							PED::SET_PED_KEEP_TASK(iLocal_171, 1);
							GlobalFunc_173(&uLocal_586, 5, iLocal_171, "TRACEY", 0, 1);
							func_677("ARM3_TRCF", 7, 1, 0);
							func_676(2000);
							iLocal_337 = 17;
							func_691();
						}
					}
					if (((ENTITY::DOES_ENTITY_EXIST(iLocal_172) && !PED::IS_PED_INJURED(iLocal_172)) && ENTITY::DOES_ENTITY_EXIST(iLocal_173)) && !PED::IS_PED_INJURED(iLocal_173))
					{
						if ((((((((((PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_172) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_173)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -794.9276f, 184.107f, 70.83471f, -815.3759f, 176.0862f, 74.15309f, 25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.3734f, 189.0489f, 71.47702f, -815.2399f, 185.9976f, 74.97866f, 6.5f, 0, 1, 0)) || ((!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) >= 1f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.0699f, 179.8812f, 71.15309f, -794.9532f, 184.0973f, 73.83471f, 10f, 0, 1, 0))) && (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_172, -796.0438f, 184.9799f, 71.60547f, -801.0977f, 183.0096f, 74.60547f, 2f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_173, -796.0438f, 184.9799f, 71.60547f, -801.0977f, 183.0096f, 74.60547f, 2f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.577f, 179.8697f, 71.15309f, -807.6133f, 183.7363f, 75.80472f, 4.25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.8881f, 183.7755f, 71.3478f, -805.1901f, 184.4428f, 73.8478f, 3.5f, 0, 1, 0))) || MISC::IS_BULLET_IN_ANGLED_AREA(-803.2972f, 186.0434f, 70.10547f, -801.1071f, 180.297f, 75.33471f, 4f, 1)) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_172, 1) - Vector(1.5f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iLocal_172, 1) + Vector(1.5f, 2f, 2f), 1)) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_173, 1) - Vector(1.5f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iLocal_173, 1) + Vector(1.5f, 2f, 2f), 1))
						{
							if (!func_718("CaughtWifeCoach"))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -810.3356f, 179.1674f, 71.15309f, -796.0867f, 184.913f, 74.35547f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.0658f, 187.0313f, 71.60547f, -797.8655f, 178.3436f, 74.83471f, 9f, 0, 1, 0))
								{
									func_201(PLAYER::PLAYER_ID(), 0, 0);
									func_712("CaughtWifeCoach", 1);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_172);
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_172, PLAYER::PLAYER_PED_ID());
									PED::SET_PED_KEEP_TASK(iLocal_172, 1);
									TASK::CLEAR_PED_TASKS(iLocal_173);
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_173, PLAYER::PLAYER_PED_ID());
									PED::SET_PED_KEEP_TASK(iLocal_173, 1);
									func_504();
									func_677("ARM3_WIFF", 7, 1, 0);
									func_676(2000);
									iLocal_337 = 17;
									func_691();
								}
							}
						}
					}
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -757.2531f, 167.1764f, 57.20297f, -854.1731f, 169.9511f, 82.6092f, 70f, 0, 1, 0))
	{
		if (((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) && func_704(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_337 = 16;
			func_691();
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (iLocal_336 < 5)
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -846.8918f, 183.0051f, 55.97863f, -767.8685f, 178.762f, 97.74928f, 28f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -843.8002f, 155.6993f, 50.81583f, -766.0428f, 152.7066f, 91.47469f, 27f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -760.6635f, 190.6463f, 68.49724f, -775.1f, 201.8823f, 84.69663f, 10f, 0, 1, 0))
			{
				iLocal_337 = 17;
				func_691();
			}
		}
	}
}


void func_721()//Position - 0x78CFD
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_337 = 1;
		func_691();
	}
	if (func_724(&(uLocal_542[0])))
	{
		iLocal_337 = 2;
		func_691();
	}
	if (func_724(&(uLocal_542[1])) && CAM::IS_SCREEN_FADED_IN())
	{
		iLocal_337 = 3;
		func_691();
	}
	if (func_724(&iLocal_170))
	{
		iLocal_337 = 4;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
		{
			if (!PED::IS_PED_INJURED(iLocal_171))
			{
				if (func_685(sLocal_150))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_171, sLocal_151, "tracey_argument", 3))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_171, sLocal_150, "tracey_fail", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 4f, -8f, -1, 9218, 0f, 2, 1);
					}
					else
					{
						TASK::TASK_REACT_AND_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID());
					}
				}
				PED::SET_PED_KEEP_TASK(iLocal_171, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
		{
			if (!PED::IS_PED_INJURED(iLocal_172))
			{
				TASK::CLEAR_PED_TASKS(iLocal_172);
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_172, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_KEEP_TASK(iLocal_172, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_173))
		{
			if (!PED::IS_PED_INJURED(iLocal_173))
			{
				TASK::CLEAR_PED_TASKS(iLocal_173);
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_173, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_KEEP_TASK(iLocal_173, 1);
			}
		}
		func_691();
	}
	if (func_724(&iLocal_171))
	{
		iLocal_337 = 6;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
		{
			if (!PED::IS_PED_INJURED(iLocal_170))
			{
				func_505();
				if (func_685(sLocal_150))
				{
					uVar0 = PED::CREATE_SYNCHRONIZED_SCENE(-806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_170, uVar0, sLocal_150, "jimmy_playingvideogame_fail", 8f, -8f, 5, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_212, uVar0, "jimmy_playingvideogame_fail_controller", sLocal_150, 8f, -8f, 0, 1148846080);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_213, uVar0, "jimmy_playingvideogame_fail_headset", sLocal_150, 8f, -8f, 0, 1148846080);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uVar0, 0.25f);
				}
				PED::SET_PED_KEEP_TASK(iLocal_170, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
		{
			if (!PED::IS_PED_INJURED(iLocal_172))
			{
				TASK::CLEAR_PED_TASKS(iLocal_172);
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_172, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_KEEP_TASK(iLocal_172, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_173))
		{
			if (!PED::IS_PED_INJURED(iLocal_173))
			{
				TASK::CLEAR_PED_TASKS(iLocal_173);
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_173, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_KEEP_TASK(iLocal_173, 1);
			}
		}
		func_691();
	}
	if (func_724(&iLocal_172))
	{
		iLocal_337 = 8;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
		{
			if (!PED::IS_PED_INJURED(iLocal_170))
			{
				func_505();
				if (func_685(sLocal_150))
				{
					uVar1 = PED::CREATE_SYNCHRONIZED_SCENE(-806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_170, uVar1, sLocal_150, "jimmy_playingvideogame_fail", 8f, -8f, 5, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_212, uVar1, "jimmy_playingvideogame_fail_controller", sLocal_150, 8f, -8f, 0, 1148846080);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_213, uVar1, "jimmy_playingvideogame_fail_headset", sLocal_150, 8f, -8f, 0, 1148846080);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uVar1, 0.25f);
				}
				PED::SET_PED_KEEP_TASK(iLocal_170, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
		{
			if (!PED::IS_PED_INJURED(iLocal_171))
			{
				if (func_685(sLocal_150))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_171, sLocal_151, "tracey_argument", 3))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_171, sLocal_150, "tracey_fail", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 4f, -8f, -1, 9218, 0f, 2, 1);
					}
					else
					{
						TASK::TASK_REACT_AND_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID());
					}
				}
				PED::SET_PED_KEEP_TASK(iLocal_171, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_173))
		{
			if (!PED::IS_PED_INJURED(iLocal_173))
			{
				TASK::CLEAR_PED_TASKS(iLocal_173);
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_173, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_KEEP_TASK(iLocal_173, 1);
			}
		}
		func_691();
	}
	if (func_724(&iLocal_173))
	{
		iLocal_337 = 9;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
		{
			if (!PED::IS_PED_INJURED(iLocal_170))
			{
				func_505();
				if (func_685(sLocal_150))
				{
					uVar2 = PED::CREATE_SYNCHRONIZED_SCENE(-806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_170, uVar2, sLocal_150, "jimmy_playingvideogame_fail", 8f, -8f, 5, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_212, uVar2, "jimmy_playingvideogame_fail_controller", sLocal_150, 8f, -8f, 0, 1148846080);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_213, uVar2, "jimmy_playingvideogame_fail_headset", sLocal_150, 8f, -8f, 0, 1148846080);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uVar2, 0.25f);
				}
				PED::SET_PED_KEEP_TASK(iLocal_170, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
		{
			if (!PED::IS_PED_INJURED(iLocal_171))
			{
				if (func_685(sLocal_150))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_171, sLocal_151, "tracey_argument", 3))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_171, sLocal_150, "tracey_fail", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 4f, -8f, -1, 9218, 0f, 2, 1);
					}
					else
					{
						TASK::TASK_REACT_AND_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID());
					}
				}
				PED::SET_PED_KEEP_TASK(iLocal_171, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
		{
			if (!PED::IS_PED_INJURED(iLocal_172))
			{
				TASK::CLEAR_PED_TASKS(iLocal_172);
				PED::SET_PED_KEEP_TASK(iLocal_172, 1);
			}
		}
		func_691();
	}
	if (func_724(&iLocal_174))
	{
		iLocal_337 = 11;
		func_691();
	}
	if (func_722(&iLocal_179) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_179) && !ENTITY::IS_ENTITY_DEAD(iLocal_179)) && (((VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_179, 0) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_179, 1)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_179, 2)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_179, 3))))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (iLocal_336 < 10)
			{
				iLocal_337 = 20;
				func_691();
			}
		}
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -26.94456f, -1103.164f, 25.43429f, -59.32895f, -1091.362f, 28.62826f, 18f) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -41.24382f, -1087.122f, 25.43436f, -26.13362f, -1092.687f, 28.43388f, 11.75f))
	{
		if (iLocal_336 < 7)
		{
			iLocal_337 = 21;
			func_691();
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if ((iLocal_336 >= 3 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -741.3532f, 175.7011f, 44.15182f, -871.8698f, 171.4576f, 116.6769f, 100f, 0, 1, 0)) || (((iLocal_336 == 2 && ENTITY::DOES_ENTITY_EXIST(iLocal_174)) && ENTITY::DOES_ENTITY_EXIST(iLocal_176)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -74.61548f, -1102.602f, 24.00692f, -28.39191f, -1119.144f, 41.55816f, 50f, 0, 1, 0)))
		{
			iLocal_337 = 22;
			func_691();
		}
	}
}

int func_722(int iParam0)//Position - 0x79376
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if ((ENTITY::IS_ENTITY_DEAD(*iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 1)) || GlobalFunc_2250(iParam0))
		{
			return 1;
		}
	}
	return 0;
}


int func_724(int iParam0)//Position - 0x7940C
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*iParam0) || PED::IS_PED_INJURED(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_725()//Position - 0x7943A
{
	HUD::CLEAR_PRINTS();
	GlobalFunc_2238(1);
	GlobalFunc_5385(1);
	GlobalFunc_4956();
}






















bool func_747(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x7A17C
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_748(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_748(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x7A1AA
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !GlobalFunc_5183(uParam0->f_8, uParam0->f_7))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
				}
			}
			uVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!GlobalFunc_5183(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				CAM::DESTROY_CAM(uParam0->f_4, 0);
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
					}
					iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 0);
						}
						ENTITY::SET_ENTITY_VISIBLE(iVar2, 0);
					}
				}
				uVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				GlobalFunc_7641(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar4, 0);
				}
			}
			uVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (GlobalFunc_9141(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
					CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (GlobalFunc_9141(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					GlobalFunc_9141(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4) && CAM::IS_CAM_INTERPOLATING(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > MISC::GET_GAME_TIMER())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}



























void func_775(int iParam0)//Position - 0x7C449
{
	int iVar0;
	
	if (iLocal_86)
	{
		RECORDING::_0x81CBAE94390F9F89();
		iLocal_86 = 0;
	}
	iLocal_104 = 0;
	GlobalFunc_504(0, -1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_690(1)) && !PED::IS_PED_INJURED(func_690(1)))
	{
		PED::RESET_PED_IN_VEHICLE_CONTEXT(func_690(1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_690(0)) && !PED::IS_PED_INJURED(func_690(0)))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(func_690(0), 1);
	}
	PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
	PLAYER::DISABLE_PLAYER_FIRING(PLAYER::PLAYER_ID(), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_179))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_179))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_179, 1);
		}
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_221))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_221);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_222))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_222);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_223))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_223);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_224))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_224);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_225))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_225);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_226))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_226);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_227))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_227);
	}
	AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_MICHAEL_PS_BATHROOM_WITH_WINDOW");
	GlobalFunc_5669(4, PLAYER::PLAYER_PED_ID());
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[4 /*31*/], 0, 1, 1);
	if (iLocal_92 == 0)
	{
		GlobalFunc_7621(178, 0, 0, 1, 0);
	}
	if (iLocal_92 == 0)
	{
		if (func_718("WindowSmashed"))
		{
			AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			func_712("WindowSmashed", 0);
		}
	}
	iLocal_90 = 0;
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	GlobalFunc_9132(0);
	GlobalFunc_5652(&uLocal_298, 1, 0);
	iLocal_64 = 1000;
	fLocal_65 = 1000f;
	fLocal_66 = 1000f;
	iLocal_61 = -1;
	iLocal_89 = 1;
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(1f);
	GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	GRAPHICS::_0x0AE73D8DF3A762B2(1);
	GlobalFunc_4948(&uLocal_323, 0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
	CAM::STOP_GAMEPLAY_HINT(1);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_286))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_286, 0);
	}
	if (iLocal_92 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_542[0]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_542[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_542[1]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_542[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_174);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_170);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_171);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_172);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_173))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_173);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_176))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_176);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_175);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_217);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_gardener_01"));
		STREAMING::REMOVE_ANIM_DICT(sLocal_156);
		if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_155))
		{
			STREAMING::REMOVE_CLIP_SET(sLocal_155);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_177) && !ENTITY::IS_ENTITY_DEAD(iLocal_177))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_177) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_177, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_177);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_180))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_180);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_178);
	}
	if (!iLocal_92)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_179);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_181)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_181[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_187)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_187[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_187[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_187[iVar0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_187[iVar0], 1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_187[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_190)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_190[iVar0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_190[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_208))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_208) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_208))
		{
			GlobalFunc_2241(&iLocal_208);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_208))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_208);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_209))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_209);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_210))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_210);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_211))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_211);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_212))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_212);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_213))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_213);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_214))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_214);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_215))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_215);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_216))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_216);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_218))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_218);
	}
	ENTITY::REMOVE_MODEL_HIDE(-802.73f, 167.5f, 77.58f, 1f, joaat("v_ilev_mm_windowwc"), 0);
	if (iLocal_92)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179))
		{
			if (ENTITY::GET_ENTITY_MODEL(iLocal_179) == joaat("bjxl"))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_179);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_179, 0);
				PHYSICS::ACTIVATE_PHYSICS(iLocal_179);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_179, true);
				GlobalFunc_4927(36, 1);
				func_519(36, iLocal_179, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_181)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_181[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_187)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_187[iVar0]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_187[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_190)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_190[iVar0]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_190[iVar0]));
			}
			iVar0++;
		}
	}
	if (func_718("ACT_stealth_kill_a_gardener"))
	{
		MISC::_REMOVE_STEALTH_KILL(784239871, 0);
	}
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	if (iLocal_70)
	{
		CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_69);
		CAM::_0x2A2173E46DAECD12(0, iLocal_71);
		iLocal_70 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_287)
	{
		TASK::REMOVE_COVER_POINT(iLocal_287[iVar0]);
		iVar0++;
	}
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	if (iLocal_281 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_281);
		iLocal_281 = -1;
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bjxl"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("patriot"), 0);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(10, 1);
	MISC::ENABLE_DISPATCH_SERVICE(9, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(4, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-57.64452f, -1097.634f, 35.42235f, -145.0667f, -1156.564f, 23.02604f, 20f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-801.0658f, 187.0313f, 71.60547f, -797.8655f, 178.3436f, 74.83471f, 9f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(29.43694f, -1105.479f, -46.89022f) - Vector(5f, 20f, 20f), Vector(29.43694f, -1105.479f, -46.89022f) + Vector(5f, 20f, 20f), 1, 1);
	VEHICLE::_0x0A436B8643716D14();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	GlobalFunc_703(&uLocal_196);
	GlobalFunc_703(&uLocal_197);
	GlobalFunc_703(&uLocal_194);
	GlobalFunc_703(&uLocal_195);
	GlobalFunc_703(&uLocal_193);
	GlobalFunc_703(&uLocal_202);
	GlobalFunc_703(&uLocal_198);
	GlobalFunc_703(&uLocal_199);
	GlobalFunc_703(&uLocal_200);
	GlobalFunc_703(&uLocal_201);
	HUD::CLEAR_GPS_MULTI_ROUTE();
	if (iLocal_285 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_285);
		AUDIO::RELEASE_SOUND_ID(iLocal_285);
		iLocal_285 = -1;
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_MICHAELS_HOUSE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_TO_MICHAELS_HOUSE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_PHONE_SIMEON"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_PHONE_SIMEON");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_CLIMB_INTO_GARDEN"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_CLIMB_INTO_GARDEN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TAKE_OUT_GARDENER"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_TAKE_OUT_GARDENER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TARGET_GARDENER"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_TARGET_GARDENER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_ENTER_HOUSE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_ENTER_HOUSE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_INSIDE_HOUSE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_INSIDE_HOUSE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_ENTER_GARAGE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_ENTER_GARAGE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_STEAL_CAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_STEAL_CAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_EXIT_THROUGH_GATE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_EXIT_THROUGH_GATE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_DEALERSHIP"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_TO_DEALERSHIP");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_RAM_DEALERSHIP"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_RAM_DEALERSHIP");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_WINDOW_FOCUS_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_WINDOW_FOCUS_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_BEAT_DOWN"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_BEAT_DOWN");
	}
	func_114(19);
	AUDIO::STOP_STREAM();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
	GlobalFunc_200(&uLocal_586, 1);
	GlobalFunc_200(&uLocal_586, 3);
	GlobalFunc_200(&uLocal_586, 4);
	GlobalFunc_200(&uLocal_586, 5);
	GlobalFunc_200(&uLocal_586, 6);
	GlobalFunc_200(&uLocal_586, 7);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	HUD::ALLOW_SONAR_BLIPS(1);
	GlobalFunc_563(0);
	GlobalFunc_8316(0, 1, 1, 0);
	GlobalFunc_5671(0, 0);
	GlobalFunc_585(115, 0);
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_296);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_297);
	func_779();
	func_778();
	func_777();
	func_776();
	GlobalFunc_8316(0, 1, 1, 0);
	func_725();
	SYSTEM::SETTIMERA(0);
	iLocal_47 = 0;
	iLocal_48 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		iLocal_49[iVar0] = -1;
		iVar0++;
	}
	iLocal_55 = 0;
	iLocal_59 = -1;
	iLocal_87 = 0;
	bLocal_96 = false;
	iLocal_97 = 0;
	iLocal_98 = 0;
	iLocal_92 = 0;
	if (iParam0 == 0)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_776()//Position - 0x7CE16
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_521;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_521[iVar1] = 0;
		iVar1++;
	}
}

void func_777()//Position - 0x7CE41
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_490)
	{
		iLocal_490[iVar0] = 0;
		iVar0++;
	}
}

void func_778()//Position - 0x7CE68
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_469)
	{
		iLocal_469[iVar0] = 0;
		iVar0++;
	}
}

void func_779()//Position - 0x7CE8F
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_347;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_347[iVar1] = 0;
		iVar1++;
	}
	iLocal_468 = 0;
}

void func_780()//Position - 0x7CEBE
{
	if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
	{
		GlobalFunc_5129(-27.8311f, -1084.006f, 25.5727f, 339.9998f);
		GlobalFunc_5166(-26.5693f, -1082.295f, 25.582f, 70.3239f);
	}
}



