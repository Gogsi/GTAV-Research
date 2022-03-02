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
	struct<3> Local_21 = { 0, 0, 0 } ;
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
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 10;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
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
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	struct<61> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_156 = 0;
	char* sLocal_157 = NULL;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	var uLocal_163 = 0;
	struct<3> Local_164 = { 0, 0, 0 } ;
	float fLocal_167 = 0f;
	struct<3> Local_168 = { 0, 0, 0 } ;
	float fLocal_171 = 0f;
	struct<3> Local_172 = { 0, 0, 0 } ;
	float fLocal_175 = 0f;
	float fLocal_176 = 0f;
	struct<8> Local_177 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_185 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_193 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_201 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_209 = 0;
	int iLocal_210 = 0;
	var uLocal_211 = 0;
	bool bLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	var uLocal_216 = 16;
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
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	char* sLocal_334 = NULL;
	char* sLocal_335 = NULL;
	char* sLocal_336 = NULL;
	char* sLocal_337 = NULL;
	char* sLocal_338 = NULL;
	char* sLocal_339 = NULL;
	char* sLocal_340 = NULL;
	char* sLocal_341 = NULL;
	char* sLocal_342 = NULL;
	char* sLocal_343 = NULL;
	int iLocal_344 = 0;
	struct<19> Local_345[8];
	struct<15> Local_498[3];
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	var uLocal_548 = 2055493265;
	var uLocal_549 = 1065353216;
	var uLocal_550 = 1065353216;
	var uLocal_551 = 1065353216;
	var uLocal_552 = 1033476506;
	var uLocal_553 = 1033476506;
	var uLocal_554 = 0;
	var uLocal_555 = 1056964608;
	var uLocal_556 = 1045220557;
	var uLocal_557 = 0;
	var uLocal_558 = 1092616192;
	var uLocal_559 = 1093664768;
	var uLocal_560 = 1067450368;
	var uLocal_561 = 1074790400;
	var uLocal_562 = 1073741824;
	var uLocal_563 = 1075838976;
	var uLocal_564 = 99;
	var uLocal_565 = 100;
	var uLocal_566 = -1;
	var uLocal_567 = -1;
	var uLocal_568 = 1056964608;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	float fLocal_574 = 0f;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	float fLocal_580 = 0f;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	float fLocal_583 = 0f;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	struct<3> Local_586 = { 0, 0, 0 } ;
	struct<3> Local_589 = { 0, 0, 0 } ;
	float fLocal_592 = 0f;
	float fLocal_593 = 0f;
	int iLocal_594 = 0;
	bool bLocal_595 = 0;
	int iLocal_596 = 0;
	bool bLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	float fLocal_601 = 0f;
	bool bLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 3;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 1092616192;
	var uLocal_614 = 1101004800;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 3;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 16;
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
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	char* sLocal_796 = NULL;
	int iLocal_797 = 0;
	var uLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	var uLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	char* sLocal_811 = NULL;
	char* sLocal_812 = NULL;
	char* sLocal_813 = NULL;
	char* sLocal_814 = NULL;
	char* sLocal_815 = NULL;
	char* sLocal_816 = NULL;
	struct<3> Local_817[5];
	struct<11> Local_833[5];
	int iLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	struct<7> Local_893[15];
	struct<7> Local_999[15];
	int iLocal_1105 = 0;
	int iLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	float fLocal_1110 = 0f;
	int iLocal_1111 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var3;
	
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	uLocal_82 = GlobalFunc_4946(49);
	iLocal_86 = 1;
	iLocal_87 = 65;
	iLocal_88 = 49;
	iLocal_89 = 64;
	uLocal_93 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_94 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	sLocal_157 = "";
	iLocal_158 = -1;
	Local_164 = { 174.1703f, -1012.249f, 28.318f };
	fLocal_167 = 27.4862f;
	Local_168 = { 180.5319f, -970.6324f, 29.0923f };
	fLocal_171 = 80f;
	Local_172 = { 188.86f, -955.83f, 29.09f };
	fLocal_175 = 62.08f;
	fLocal_176 = 0.8f;
	bLocal_209 = true;
	sLocal_334 = "Barry";
	sLocal_335 = "Barrys_chair";
	sLocal_336 = "Barrys_protest_table";
	sLocal_337 = "Barry_Pamphlet_1";
	sLocal_338 = "DrugsTrevorClownsFightIn";
	sLocal_339 = "DrugsTrevorClownsFight";
	sLocal_340 = "DrugsTrevorClownsFightOut";
	sLocal_341 = "rcmbarry";
	sLocal_342 = "rcm_barry2";
	sLocal_343 = "BARRY_02_DRUGS";
	iLocal_544 = joaat("s_m_y_clown_01");
	iLocal_545 = joaat("speedo2");
	iLocal_546 = joaat("prop_protest_sign_01");
	iLocal_547 = joaat("weapon_assaultshotgun");
	iLocal_570 = 500;
	iLocal_571 = 2000;
	iLocal_572 = 1500;
	iLocal_573 = 3000;
	fLocal_574 = 12f;
	iLocal_575 = 5;
	fLocal_580 = 20f;
	fLocal_583 = 40f;
	Local_589 = { 0f, -3.2f, 0.6f };
	fLocal_592 = 1.5f;
	fLocal_593 = 0f;
	iLocal_599 = 5000;
	iLocal_600 = 20000;
	fLocal_601 = 8.5f;
	sLocal_796 = "AZ_BARRY_02_AMBIENCE";
	iLocal_807 = joaat("a_m_m_business_01");
	iLocal_808 = joaat("a_f_m_bevhills_02");
	iLocal_810 = -1;
	sLocal_811 = "amb@world_human_cheering@female_d";
	sLocal_812 = "base";
	sLocal_813 = "amb@world_human_cheering@male_d";
	sLocal_814 = "base";
	sLocal_815 = "special_ped@mime";
	sLocal_816 = "idle_c";
	Local_95 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_95);
	MISC::SET_MISSION_FLAG(1);
	sLocal_157 = "";
	MISC::CLEAR_AREA_OF_PROJECTILES(190.2424f, -956.379f, 28.63f, 6f, 0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		AUDIO::TRIGGER_MUSIC_EVENT("RC18B_END");
		GlobalFunc_10102(1);
		func_589();
	}
	func_556();
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(1);
	GlobalFunc_2357(Local_168, 200f, &Var0, &Var3);
	GlobalFunc_238(iLocal_579);
	GlobalFunc_238(iLocal_582);
	GlobalFunc_238(iLocal_577);
	if (GlobalFunc_2(0))
	{
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_GRT", 0);
		func_537(Local_95.f_9, 0, 0, 0, 0, 0);
		iLocal_213 = 0;
		iLocal_809 = 0;
		fLocal_593 = (fLocal_593 + MISC::GET_FRAME_TIME());
		GlobalFunc_2356();
		PED::SET_PED_NON_CREATION_AREA(Var0, Var3);
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::GET_PLAYER_INDEX());
		GlobalFunc_7629();
		func_528();
		func_514();
		func_500();
		func_494();
		switch (iLocal_158)
		{
			case -1:
				func_489(&iLocal_160);
				break;
			
			case 0:
				func_440(&iLocal_160);
				break;
			
			case 1:
				func_433(&iLocal_160);
				break;
			
			case 2:
				func_405(&iLocal_160);
				break;
			
			case 3:
				func_403(&iLocal_160);
				break;
			
			case 4:
				func_402(&iLocal_160);
				break;
			
			case 5:
				func_401(&iLocal_160);
				break;
			
			case 6:
				func_400(&iLocal_160);
				break;
			
			case 7:
				func_399(&iLocal_160);
				break;
			
			case 8:
				func_385(&iLocal_160);
				break;
			
			case 9:
				func_359(&iLocal_160);
				break;
			
			case 10:
				func_358(&iLocal_160);
				break;
			
			case 11:
				func_70(&iLocal_160);
				break;
			
			case 12:
				func_32(&iLocal_160);
				break;
		}
		if (func_31())
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sLocal_343))
			{
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sLocal_343, "DrugsEffect", ((SYSTEM::SIN((((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f) * 45f) % 360f)) * 0.25f) + 0.25f));
			}
			func_26();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x409
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	if (!bLocal_209)
	{
		return;
	}
	if (MISC::GET_GAME_TIMER() < iLocal_605)
	{
		return;
	}
	if (!bLocal_602)
	{
		return;
	}
	if (func_20())
	{
		return;
	}
	GlobalFunc_173(&uLocal_631, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	if (GlobalFunc_10607(&uLocal_631, "BARY2AU", "BARY2_FREAK", 6, 0, 0, 0))
	{
		iLocal_605 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 40000));
		if ((iLocal_604 - MISC::GET_GAME_TIMER()) < 2500)
		{
			iLocal_604 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
		}
	}
}



















int func_20()//Position - 0xD50
{
	if (GlobalFunc_663("B2_PRIME", 0, 0))
	{
		return 1;
	}
	if (GlobalFunc_663("B2_WARN", 0, 0))
	{
		return 1;
	}
	if (GlobalFunc_5172(&uLocal_606, 1))
	{
		return 1;
	}
	return 0;
}






void func_26()//Position - 0xE5C
{
	if (bLocal_209)
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_185[0 /*3*/], Local_185[1 /*3*/], Local_185.f_7, 0, 1, 0))
		{
			GlobalFunc_164("B2_WARN", 7500, 1);
			GlobalFunc_846(&uLocal_211);
			uLocal_211 = GlobalFunc_2324(Local_168, 5, 1);
			iLocal_210 = MISC::GET_GAME_TIMER() + 10000;
			bLocal_209 = false;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_193[0 /*3*/], Local_193[1 /*3*/], Local_193.f_7, 0, 1, 0))
	{
		GlobalFunc_164("B2_PRIME", 7500, 1);
		GlobalFunc_846(&uLocal_211);
		bLocal_209 = true;
	}
	else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_177[0 /*3*/], Local_177[1 /*3*/], Local_177.f_7, 0, 1, 0))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_210)
		{
		}
		func_27("B2_FAIL2");
	}
}

void func_27(char* sParam0)//Position - 0xF21
{
	if (iLocal_158 != 12)
	{
		sLocal_157 = sParam0;
		iLocal_160 = 0;
		iLocal_158 = 12;
	}
}




bool func_31()//Position - 0xFA2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iLocal_158;
	return (iVar2 > iVar0 && iVar2 < iVar1);
}

void func_32(int iParam0)//Position - 0xFC4
{
	switch (*iParam0)
	{
		case 0:
		case 1:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_68(1);
			func_66();
			func_61(1);
			AUDIO::PREPARE_MUSIC_EVENT("RC18B_END");
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_157))
			{
				GlobalFunc_10102(1);
			}
			else
			{
				GlobalFunc_10700(sLocal_157, 1);
			}
			*iParam0 = 2;
			break;
		
		case 2:
			if (GlobalFunc_145())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RC18B_END");
				GlobalFunc_5129(165.4821f, -990.514f, 29.0923f, 166.7554f);
				GlobalFunc_5166(Local_164, fLocal_167);
				func_68(1);
				func_61(1);
				func_52(1, 0, 1, 1);
				func_589();
			}
			else if (MISC::ARE_STRINGS_EQUAL(sLocal_157, "B2_FAIL2"))
			{
				if (func_33(0) && GlobalFunc_2(0))
				{
					func_589();
				}
			}
			break;
	}
}

int func_33(int iParam0)//Position - 0x1096
{
	struct<3> Var0;
	bool bVar3;
	var uVar4;
	
	bVar3 = false;
	func_514();
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
		}
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sLocal_334, 1, 0, 0, 0);
	}
	switch (iLocal_159)
	{
		case 0:
			if (iParam0 == 1)
			{
				GlobalFunc_9623("bar_4_rcm", 0);
				SCRIPT::REQUEST_SCRIPT("postRC_Barry1and2");
			}
			AUDIO::PREPARE_MUSIC_EVENT("RC18B_END");
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_159 = 1;
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2f);
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				if (GlobalFunc_234(iLocal_161))
				{
					ENTITY::DETACH_ENTITY(iLocal_161, 1, 0);
				}
			}
			uVar4 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", CAM::GET_GAMEPLAY_CAM_COORD(), CAM::GET_GAMEPLAY_CAM_ROT(2), CAM::GET_GAMEPLAY_CAM_FOV(), 1, 2);
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - CAM::GET_GAMEPLAY_CAM_COORD() };
			CAM::ATTACH_CAM_TO_ENTITY(uVar4, PLAYER::PLAYER_PED_ID(), -Var0, 1);
			if (CAM::DOES_CAM_EXIST(uVar4))
			{
				CAM::SET_CAM_ACTIVE(uVar4, 1);
			}
			iLocal_156 = MISC::GET_GAME_TIMER() + 6000;
			GlobalFunc_173(&uLocal_631, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			iLocal_159 = 2;
			break;
		
		case 2:
			bVar3 = false;
			if (iParam0 == 1)
			{
				if (GlobalFunc_10607(&uLocal_631, "BARY2AU", "BARY2_PREOUT", 8, 0, 0, 0) || MISC::GET_GAME_TIMER() > iLocal_156)
				{
					if (MISC::GET_GAME_TIMER() < iLocal_156)
					{
					}
					iLocal_156 = MISC::GET_GAME_TIMER() + 5000;
					bVar3 = true;
				}
			}
			else
			{
				iLocal_156 = MISC::GET_GAME_TIMER() + 2000;
				bVar3 = true;
			}
			if (bVar3 == 1)
			{
				iLocal_159 = 3;
			}
			break;
		
		case 3:
			bVar3 = false;
			if (iParam0 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_156)
				{
					func_39();
					GRAPHICS::ANIMPOSTFX_PLAY(sLocal_340, 0, 0);
					iLocal_156 = MISC::GET_GAME_TIMER() + 3500;
					bVar3 = true;
				}
			}
			else
			{
				bVar3 = true;
			}
			if (bVar3 == 1)
			{
				iLocal_159 = 4;
			}
			break;
		
		case 4:
			if (iParam0 == 1)
			{
				bVar3 = MISC::GET_GAME_TIMER() > iLocal_156;
			}
			else
			{
				if (MISC::GET_GAME_TIMER() < iLocal_156)
				{
				}
				iLocal_161 = GlobalFunc_7936(PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_161))
				{
					if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_161, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 7000, 7500, 0, 0, 0, 0);
						if (GlobalFunc_234(iLocal_161) && ENTITY::IS_ENTITY_ATTACHED(iLocal_161))
						{
							ENTITY::DETACH_ENTITY(iLocal_161, 1, 0);
						}
						bVar3 = true;
					}
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 7000, 7500, 0, 0, 0, 0);
					bVar3 = true;
				}
			}
			if (bVar3 == 1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RC18B_END");
				iLocal_156 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_159 = 5;
			}
			break;
		
		case 5:
			if (MISC::GET_GAME_TIMER() > iLocal_156)
			{
				if (iParam0 == 1)
				{
					GlobalFunc_2346(&iLocal_161);
					if (CAM::DOES_CAM_EXIST(uVar4))
					{
						CAM::SET_CAM_ACTIVE(uVar4, 0);
						CAM::DESTROY_CAM(uVar4, 0);
					}
					CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", 0f);
					MISC::SET_TIME_SCALE(1f);
					AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("BARRY_02_SLOWMO");
					AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
					AUDIO::SET_AUDIO_FLAG("AllowAmbientSpeechInSlowMo", 0);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_172, 200f, 0, 0, 0, 0, 0);
					GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_172, 500f);
					if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
					{
						PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
						PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
					}
				}
				return 1;
			}
			break;
	}
	return 0;
}






void func_39()//Position - 0x1D8E
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_338))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_338);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_339))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_339);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_340))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_340);
	}
}













void func_52(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2067
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, iParam3, 0);
	GlobalFunc_8316(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	HUD::CLEAR_HELP(1);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_38 != 0 && iLocal_38 != joaat("object")) && iLocal_38 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0);
				}
			}
		}
	}
	if (GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}









void func_61(int iParam0)//Position - 0x2230
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_345)
	{
		func_62(&(Local_345[iVar0 /*19*/]), iParam0);
		iVar0++;
	}
}

void func_62(var uParam0, int iParam1)//Position - 0x225C
{
	if (*uParam0 == 0)
	{
		return;
	}
	GlobalFunc_132(&(uParam0->f_3), iParam1, 1, 1);
	func_63(uParam0);
}

void func_63(var uParam0)//Position - 0x2280
{
	GlobalFunc_894(&(uParam0->f_5));
	GlobalFunc_846(&(uParam0->f_4));
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}



void func_66()//Position - 0x231B
{
	int iVar0;
	
	iVar0 = 0;
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 < Local_345)
		{
			if (func_67(&(Local_345[iVar0 /*19*/])))
			{
				Local_345[iVar0 /*19*/].f_2 = 0;
				TASK::TASK_SMART_FLEE_COORD(Local_345[iVar0 /*19*/].f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 400f, -1, 0, 0);
			}
			iVar0++;
		}
	}
}

bool func_67(var uParam0)//Position - 0x237B
{
	if (!*uParam0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return 0;
	}
	return ((!uParam0->f_1 && !uParam0->f_2 == 17) && !PED::IS_PED_INJURED(uParam0->f_3));
}

void func_68(int iParam0)//Position - 0x23BE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_833)
	{
		func_69(&(Local_833[iVar0 /*11*/]), iParam0);
		iVar0++;
	}
}

void func_69(var uParam0, var uParam1)//Position - 0x23EA
{
	GlobalFunc_132(uParam0, uParam1, 1, 1);
}

void func_70(int iParam0)//Position - 0x23FC
{
	int iVar0;
	
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
		}
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sLocal_334, 1, 0, 0, 0);
	}
	switch (*iParam0)
	{
		case 0:
			GlobalFunc_9623("bar_4_rcm", 0);
			GlobalFunc_8326(Local_172, 1112014848, 12, 5000, 0, 0);
			if (!SCRIPT::HAS_SCRIPT_LOADED("postRC_Barry1and2"))
			{
				SCRIPT::REQUEST_SCRIPT("postRC_Barry1and2");
			}
			GlobalFunc_11076(2, "Outro", 1, 0, 0, 1);
			*iParam0 = 1;
			break;
		
		case 1:
			if (!func_297())
			{
				return;
			}
			AUDIO::CLEAR_AMBIENT_ZONE_STATE(sLocal_796, 1);
			if (func_291(1, 1093140480, 0) && SCRIPT::HAS_SCRIPT_LOADED("postRC_Barry1and2"))
			{
				if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
				{
					PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
					PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				}
				func_285();
				iLocal_344 = 0;
				MISC::CLEAR_AREA_OF_VEHICLES(Local_172, 250f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_172, 50f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_172, 30f, 0);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_172, 500f);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_334, 2, GlobalFunc_4946(49), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_336, 2, joaat("prop_protest_table_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_335, 2, joaat("prop_chair_08"), 0);
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, joaat("player_two"), 0);
				}
				RECORDING::_0x48621C9FCA3EBD28(1);
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				GlobalFunc_79(1000, 0);
				func_282(0f, 0f, 0f, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				STREAMING::_0xEF39EE20C537E98C(183.434f, -949.1876f, 30.8535f, GlobalFunc_590(-3f, 0f, 72.9999f));
				*iParam0 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_52(1, 1, 1, 1);
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				RECORDING::_0x81CBAE94390F9F89();
				*iParam0 = 4;
			}
			else
			{
				iVar0 = CUTSCENE::GET_CUTSCENE_TIME();
				if (iVar0 > 15000)
				{
					if (GlobalFunc_5471(PLAYER::PLAYER_PED_ID(), 10000, 0))
					{
					}
				}
				if (!iLocal_344)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), 180.1684f, -948.6075f, 29.0919f);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 73f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 750, 0, 1, 0);
					iLocal_344 = 1;
				}
				if (!GlobalFunc_115(Local_95.f_41[3]))
				{
					func_274(&(Local_95.f_41[3]), iLocal_546);
				}
				if (!GlobalFunc_115(Local_95.f_28[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_334, 0)))
					{
						Local_95.f_28[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_334, 0));
						PED::SET_PED_PROP_INDEX(Local_95.f_28[0], 1, 0, 0, false);
					}
				}
				if (!GlobalFunc_115(Local_95.f_41[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_336, 0)))
					{
						Local_95.f_41[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_336, 0));
					}
				}
				if (!GlobalFunc_115(Local_95.f_41[1]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_335, 0)))
					{
						Local_95.f_41[1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_335, 0));
					}
				}
				if (CUTSCENE::CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(sLocal_336, 0))
				{
					if (GlobalFunc_115(Local_95.f_41[0]) && GlobalFunc_115(Local_95.f_41[2]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_95.f_41[2], Local_95.f_41[0], 0, 0f, -0.25f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
			break;
		
		case 3:
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			GlobalFunc_2350(250, 0);
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_272(1, 1, 1);
			}
			func_52(1, 1, 1, 1);
			GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), Local_172);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_175);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			SYSTEM::WAIT(250);
			GlobalFunc_79(250, 0);
			func_71();
			break;
		
		case 4:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
			func_71();
			break;
	}
}

void func_71()//Position - 0x282B
{
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_547, 0))
	{
		WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, iLocal_547);
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_5575(&Global_91351);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_7694(PLAYER::PLAYER_PED_ID(), 1, 0);
	}
	SYSTEM::START_NEW_SCRIPT("postRC_Barry1and2", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("postRC_Barry1and2");
	func_72(70, 1);
	func_589();
}

void func_72(int iParam0, bool bParam1)//Position - 0x2893
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8537();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_96440[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_6)
	{
		return;
	}
	GlobalFunc_9620(iVar0, 0);
	MISC::SET_BIT(&Global_68493, 1);
	if (Global_96440[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		GlobalFunc_54(&(Global_96440[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	GlobalFunc_8949(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_2365(&uVar1, GlobalFunc_8310());
	func_98();
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset, 3))
	{
		GlobalFunc_18();
	}
	GlobalFunc_8306();
	if (iParam0 == 210 || iParam0 == 211)
	{
		GlobalFunc_7610(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		GlobalFunc_7610(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		GlobalFunc_7610(iParam0, 0, 0);
	}
	GlobalFunc_4907();
}


























void func_98()//Position - 0x3BFE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_87736[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = GlobalFunc_6674(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_213(iVar1, 14, iVar2))
				{
					func_99(iVar1, 14, iVar2);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_99(int iParam0, int iParam1, int iParam2)//Position - 0x3CBF
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_213(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_99(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_99(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_68106[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { GlobalFunc_7617(iVar0, 0) };
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (func_140(iParam0, iVar0, &iVar46, 0))
	{
		func_102(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_100(iParam0, iVar0, &iVar46))
	{
		func_102(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}

int func_100(int iParam0, int iParam1, int iParam2)//Position - 0x3E78
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_213(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}


int func_102(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x3F3F
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
		GlobalFunc_8308(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6694(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6694(iParam0, 9);
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
			iVar7 = GlobalFunc_7634(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7634(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7634(iParam0, 2);
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
							GlobalFunc_2364(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_110(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_102(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8308(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_110(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_102(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, func_108(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_140(iParam0, iVar10, &iVar4, 1))
							{
								func_102(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_102(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_102(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_102(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_102(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_102(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_102(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_2364(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_110(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_102(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_2364(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8308(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_110(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_102(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_110(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_102(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (func_140(iParam0, iVar10, &iVar4, 0))
		{
			func_102(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_100(iParam0, iVar10, &iVar4))
		{
			func_102(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}






int func_108(int iParam0, int iParam1, int iParam2)//Position - 0x4F54
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_213(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_213(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7634(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_6694(iParam0, iParam1);
		}
	}
	return -99;
}


int func_110(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x52FC
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = GlobalFunc_6694(uParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_6694(uParam0, 2);
				iVar0 = GlobalFunc_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		GlobalFunc_4911(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		GlobalFunc_4912(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (GlobalFunc_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!GlobalFunc_7633(uParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_7633(uParam0, 3, 135, 150))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!GlobalFunc_7633(uParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_7633(uParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_7633(uParam0, 3, 176, 191) && !GlobalFunc_7633(uParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = GlobalFunc_6694(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_6694(uParam0, 11);
								iVar5 = GlobalFunc_11158(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_6694(uParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!GlobalFunc_22(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = GlobalFunc_6694(uParam0, 8);
								iVar8 = GlobalFunc_6694(uParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = GlobalFunc_11158(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11158(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = GlobalFunc_6694(uParam0, 11);
								iVar0 = GlobalFunc_11158(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}






























int func_140(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x95F4
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_213(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}









































































int func_213(int iParam0, int iParam1, int iParam2)//Position - 0x1FBA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_213(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_213(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10836(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_213(iParam0, 14, iVar4))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_68106[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = GlobalFunc_6694(iParam0, iVar2);
						Global_68106[2 /*14*/] = { GlobalFunc_10836(iVar0, iVar2, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_68106[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar32 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_213(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
	{
		return 1;
	}
	return 0;
}



























































void func_272(bool bParam0, int iParam1, int iParam2)//Position - 0x282E3
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_52(iParam1, iParam2, 1, 1);
		}
	}
}


void func_274(var uParam0, int iParam1)//Position - 0x28374
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { 192.4462f, -953.5946f, 29.0919f };
	fVar3 = 23.45f;
	GlobalFunc_5725(uParam0, iParam1, Var0, fVar3);
}








void func_282(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x28599
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		GlobalFunc_8955(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (func_213(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_102(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_213(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_102(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_213(PLAYER::PLAYER_PED_ID(), 8, 1) || func_213(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_102(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_213(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_102(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam10)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
		if (bParam12)
		{
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
		}
		HUD::CLEAR_PRINTS();
		if (iParam11 == 1)
		{
			HUD::CLEAR_HELP(1);
		}
		if (iParam3 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_38 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_38 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}



void func_285()//Position - 0x2879E
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sLocal_343))
	{
		AUDIO::STOP_AUDIO_SCENE(sLocal_343);
	}
	GlobalFunc_894(&iLocal_810);
	func_68(1);
	func_66();
	func_61(1);
	func_287();
	if (ENTITY::DOES_ENTITY_EXIST(Local_95.f_28[0]))
	{
		PED::DELETE_PED(&(Local_95.f_28[0]));
	}
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::GET_PLAYER_INDEX(), 1f);
	PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
	PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(2));
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	GlobalFunc_846(&uLocal_211);
	func_286();
	GRAPHICS::ENABLE_CLOWN_BLOOD_VFX(0);
}

void func_286()//Position - 0x28827
{
	if (CAM::DOES_CAM_EXIST(uLocal_806))
	{
		CAM::SET_CAM_ACTIVE(uLocal_806, 0);
		CAM::DESTROY_CAM(uLocal_806, 0);
	}
}

void func_287()//Position - 0x28849
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_498)
	{
		func_288(&(Local_498[iVar0 /*15*/]));
		iVar0++;
	}
}

void func_288(var uParam0)//Position - 0x28873
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
	}
	VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(uParam0->f_3, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_3, 0, 0);
	GlobalFunc_131(&(uParam0->f_3));
	func_289(uParam0);
}

void func_289(var uParam0)//Position - 0x288C0
{
	GlobalFunc_846(&(uParam0->f_4));
	uParam0->f_3 = 0;
	*uParam0 = 0;
	uParam0->f_4 = 0;
}


int func_291(int iParam0, float fParam1, int iParam2)//Position - 0x28915
{
	int iVar0;
	
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_113(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fParam1, 1, 1056964608, 0, 1))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!GlobalFunc_7104(PLAYER::PLAYER_PED_ID(), -828834893))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	GlobalFunc_112();
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!GlobalFunc_109())
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	return 1;
}






int func_297()//Position - 0x28C21
{
	var uVar0;
	
	uVar0 = GlobalFunc_2366(0);
	STREAMING::REQUEST_CLIP_SET(uVar0);
	if (!STREAMING::HAS_CLIP_SET_LOADED(uVar0))
	{
		return 0;
	}
	return 1;
}





























































void func_358(int iParam0)//Position - 0x2D540
{
	switch (*iParam0)
	{
		case 0:
		case 1:
			GlobalFunc_79(500, 0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (func_33(1))
			{
				*iParam0 = 4;
			}
			break;
		
		case 4:
			*iParam0 = 0;
			iLocal_158 = 11;
			break;
	}
}

void func_359(int iParam0)//Position - 0x2D59A
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			fLocal_593 = 0f;
			iLocal_575 = 8;
			func_384();
			*iParam0 = 1;
			break;
		
		case 1:
			if (fLocal_593 < 0.5f)
			{
				return;
			}
			iLocal_1111 = 0;
			iLocal_576 = 0;
			fLocal_583 = 2f;
			iLocal_569 = 0;
			iLocal_585 = 1;
			iLocal_584 = 0;
			fLocal_574 = 2f;
			GlobalFunc_235(&uLocal_1107);
			if (func_382(&iVar0))
			{
				if (func_376(&(Local_345[iVar0 /*19*/]), 195.1091f, -933.9568f, 29.6918f, 325f, 1, 0))
				{
				}
			}
			*iParam0 = 2;
			break;
		
		case 2:
			if (iLocal_576 >= 15)
			{
				iLocal_584 = 0;
			}
			else if (!iLocal_584)
			{
				func_375();
			}
			func_365();
			if ((func_363() && iLocal_584 == 0) && iLocal_576 >= 10)
			{
				func_360(&iLocal_799);
				if (iLocal_581 == 0)
				{
					iLocal_799 = 0;
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			*iParam0 = 0;
			iLocal_158 = 10;
			break;
	}
}

void func_360(bool bParam0)//Position - 0x2D69A
{
	int iVar0;
	
	if (!*bParam0)
	{
		if (iLocal_581 == 1)
		{
			iVar0 = func_362();
			if (iVar0 != -1)
			{
				func_361(&(Local_345[iVar0 /*19*/]), 1, 1);
				Local_345[iVar0 /*19*/].f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_600, (iLocal_600 + iLocal_599)));
				PED::REMOVE_PED_DEFENSIVE_AREA(Local_345[iVar0 /*19*/].f_3, 0);
			}
			*bParam0 = 1;
		}
	}
}

void func_361(var uParam0, bool bParam1, bool bParam2)//Position - 0x2D6FA
{
	if (iLocal_799)
	{
		if (!bParam1)
		{
			bParam1 = true;
			bParam2 = true;
		}
	}
	if (!bParam2)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 24, bParam1);
	}
	else
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 50, true);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 13, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 0, !bParam1);
	if (bParam1)
	{
		if (!bParam2)
		{
			PED::SET_PED_COMBAT_ABILITY(uParam0->f_3, 2);
			PED::SET_PED_ACCURACY(uParam0->f_3, 70);
		}
		else
		{
			PED::SET_PED_ACCURACY(uParam0->f_3, 12);
			PED::SET_PED_COMBAT_ABILITY(uParam0->f_3, 1);
			PED::REMOVE_PED_DEFENSIVE_AREA(uParam0->f_3, 1);
			PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 40f), 0);
		}
		PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 2);
		PED::SET_PED_COMBAT_RANGE(uParam0->f_3, 0);
	}
	else
	{
		PED::SET_PED_ACCURACY(uParam0->f_3, 12);
		PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 1);
		PED::SET_PED_COMBAT_RANGE(uParam0->f_3, 1);
		PED::SET_PED_COMBAT_ABILITY(uParam0->f_3, 1);
	}
}

int func_362()//Position - 0x2D7E1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_345)
	{
		if (func_67(&(Local_345[iVar0 /*19*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_363()//Position - 0x2D814
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_498)
	{
		if (!func_364(&(Local_498[iVar0 /*15*/])))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_364(var uParam0)//Position - 0x2D847
{
	if (*uParam0 == 0)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return 1;
	}
	return ENTITY::IS_ENTITY_DEAD(uParam0->f_3);
}

void func_365()//Position - 0x2D872
{
	if (iLocal_1106)
	{
		return;
	}
	if (iLocal_576 < 2)
	{
		return;
	}
	GlobalFunc_7777(&uLocal_1107);
	if (!GlobalFunc_7084(&uLocal_1107, 1.5f))
	{
		return;
	}
	if (func_366())
	{
		if (GlobalFunc_5172(&uLocal_606, 1))
		{
			return;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	GlobalFunc_173(&uLocal_631, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	if (GlobalFunc_10607(&uLocal_631, "BARY2AU", "BARY2_DUPE", 8, 0, 0, 0))
	{
		iLocal_1106 = 1;
	}
}

int func_366()//Position - 0x2D8F3
{
	if (GlobalFunc_663("B2_PRIME", 0, 0))
	{
		return 1;
	}
	if (GlobalFunc_663("B2_WARN", 0, 0))
	{
		return 1;
	}
	return 0;
}









void func_375()//Position - 0x2DA3C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_345)
	{
		if (!GlobalFunc_100(Local_345[iVar0 /*19*/].f_16, 0f, 0f, 0f))
		{
			iLocal_584 = 1;
			Local_586 = { Local_345[iVar0 /*19*/].f_16 };
			Local_345[iVar0 /*19*/].f_16 = { 0f, 0f, 0f };
			iVar0 = (Local_345 - 1);
		}
		iVar0++;
	}
}

int func_376(var uParam0, struct<3> Param1, int iParam4, bool bParam5, bool bParam6)//Position - 0x2DA9A
{
	int iVar0;
	var uVar1;
	
	if (iLocal_158 != 9)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &uVar1))
		{
			Param1.f_2 = uVar1;
		}
		if (Param1.f_2 < 28f)
		{
			return 0;
		}
	}
	uParam0->f_3 = PED::CREATE_PED(26, iLocal_544, Param1, iParam4, 1, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return 0;
	}
	uParam0->f_5 = -1;
	func_380(uParam0->f_3);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 24, false);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(uParam0->f_3, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, -2065892691);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
	iVar0 = (ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_3) / 2);
	ENTITY::SET_ENTITY_HEALTH(uParam0->f_3, iVar0);
	ENTITY::SET_ENTITY_MAX_HEALTH(uParam0->f_3, iVar0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_3, 1, 0);
	PED::SET_PED_MONEY(uParam0->f_3, 0);
	PED::SET_PED_ALERTNESS(uParam0->f_3, 3);
	PED::SET_PED_TARGET_LOSS_RESPONSE(uParam0->f_3, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 13, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 0, true);
	PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 1);
	AUDIO::STOP_PED_SPEAKING(uParam0->f_3, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_3, "CLOWNS");
	if (!bParam6)
	{
		if (!bParam5)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar0 == 0)
			{
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_3, joaat("weapon_smg"), -1, 1, 1);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_3, joaat("weapon_pistol"), -1, 1, 1);
			}
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_3, joaat("weapon_smg"), -1, 1, 1);
		}
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
			PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 1);
			break;
		
		case 1:
			PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 2);
			break;
		
		case 2:
			PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 3);
			break;
	}
	*uParam0 = 1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 1;
	uParam0->f_11 = MISC::GET_GAME_TIMER();
	GlobalFunc_928(uParam0, 0);
	uParam0->f_16 = { 0f, 0f, 0f };
	PED::SET_PED_CAN_PEEK_IN_COVER(uParam0->f_3, 1);
	GlobalFunc_846(&(uParam0->f_4));
	if (GlobalFunc_745())
	{
		PED::SET_PED_PROP_INDEX(uParam0->f_3, 0, 0, 0, false);
	}
	PED::SET_PED_CAN_COWER_IN_COVER(uParam0->f_3, 0);
	PED::SET_PED_CAN_PEEK_IN_COVER(uParam0->f_3, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 1, false);
	PED::SET_PED_AS_ENEMY(uParam0->f_3, 1);
	PED::SET_PED_DIES_WHEN_INJURED(uParam0->f_3, 1);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(uParam0->f_3, 1);
	PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(12f, 50f), 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_3, 1);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, 0);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3, 1);
	uParam0->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(125, 1000));
	func_377(uParam0->f_3, &uLocal_548, 0);
	StringCopy(&(uParam0->f_7), "clown_idle_", 16);
	StringIntConCat(&(uParam0->f_7), MISC::GET_RANDOM_INT_IN_RANGE(0, 6), 16);
	TASK::TASK_PLAY_ANIM(uParam0->f_3, sLocal_342, &(uParam0->f_7), 8f, -2f, -1, 0, 0, 0, 0, 0);
	uParam0->f_13 = MISC::GET_GAME_TIMER() + 30000;
	iLocal_576++;
	return 1;
}

void func_377(var uParam0, var uParam1, bool bParam2)//Position - 0x2DD60
{
	int iVar0;
	
	WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(uParam0, uParam1->f_6, uParam1->f_7);
	PED::SET_PED_SHOOT_RATE(uParam0, MISC::GET_RANDOM_INT_IN_RANGE(uParam1->f_16, uParam1->f_17));
	PED::SET_PED_FIRING_PATTERN(uParam0, *uParam1);
	PED::SET_COMBAT_FLOAT(uParam0, 3, MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam1->f_12, uParam1->f_13));
	PED::SET_COMBAT_FLOAT(uParam0, 4, MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam1->f_10, uParam1->f_11));
	PED::SET_COMBAT_FLOAT(uParam0, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam1->f_14, uParam1->f_15));
	if (bParam2)
	{
		PED::SET_COMBAT_FLOAT(uParam0, 6, uParam1->f_5);
	}
	else
	{
		PED::SET_COMBAT_FLOAT(uParam0, 6, uParam1->f_4);
	}
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), uParam1->f_1);
	PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), uParam1->f_2);
	PLAYER::SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), uParam1->f_3);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0, 13, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < uParam1->f_20);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0, 42, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < uParam1->f_8);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0, 11, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < uParam1->f_9);
	if (uParam1->f_19 != -1)
	{
		iVar0 = uParam1->f_19;
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	switch (iVar0)
	{
		case 0:
			PED::SET_PED_COMBAT_RANGE(uParam0, 0);
			break;
		
		case 1:
			PED::SET_PED_COMBAT_RANGE(uParam0, 1);
			break;
		
		case 2:
			PED::SET_PED_COMBAT_RANGE(uParam0, 2);
			break;
		
		default:
			PED::SET_PED_COMBAT_RANGE(uParam0, 1);
			break;
	}
	if (uParam1->f_18 != -1)
	{
		iVar0 = uParam1->f_18;
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	switch (iVar0)
	{
		case 0:
			PED::SET_PED_COMBAT_ABILITY(uParam0, 0);
			break;
		
		case 1:
			PED::SET_PED_COMBAT_ABILITY(uParam0, 1);
			break;
		
		case 2:
			PED::SET_PED_COMBAT_ABILITY(uParam0, 2);
			break;
		
		default:
			PED::SET_PED_COMBAT_ABILITY(uParam0, 1);
			break;
	}
}



void func_380(int iParam0)//Position - 0x2DF34
{
	float fVar0;
	
	fVar0 = GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(uParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	ENTITY::SET_ENTITY_HEADING(iParam0, fVar0);
}


int func_382(int iParam0)//Position - 0x2DFC0
{
	int iVar0;
	
	iVar0 = 0;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_345)
	{
		if (Local_345[iVar0 /*19*/] == 0)
		{
			*iParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}


void func_384()//Position - 0x2E00E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_345)
	{
		Local_345[iVar0 /*19*/].f_16 = { 0f, 0f, 0f };
		iVar0++;
	}
}

void func_385(int iParam0)//Position - 0x2E03B
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			fLocal_593 = 0f;
			iLocal_575 = 8;
			*iParam0 = 1;
			break;
		
		case 1:
			if (fLocal_593 < 0.5f)
			{
				return;
			}
			iLocal_584 = 1;
			iLocal_585 = 1;
			iLocal_576 = 0;
			Local_586 = { 210.0355f, -902.0938f, 29.69242f };
			fLocal_583 = 20f;
			if (func_398(&iVar0))
			{
				func_397(&(Local_498[iVar0 /*15*/]), 247.8f, -880.3f, 33f, 129.46f, 1, 6000, 600, 2000);
			}
			if (func_398(&iVar0))
			{
				func_397(&(Local_498[iVar0 /*15*/]), 218.4f, -868.5f, 33f, 228.6f, -1, 14000, 1100, 2000);
			}
			GlobalFunc_7777(&uLocal_1107);
			fLocal_1110 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 8f);
			*iParam0 = 2;
			break;
		
		case 2:
			if (!iLocal_799)
			{
				if (GlobalFunc_7950(&uLocal_1107, fLocal_1110))
				{
					func_386(2, 5, 5, 0);
					fLocal_1110 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 30f);
					GlobalFunc_7777(&uLocal_1107);
				}
			}
			if (iLocal_576 >= 5)
			{
				iLocal_584 = 0;
			}
			if (func_363() && iLocal_584 == 0)
			{
				func_360(&iLocal_799);
				if (iLocal_581 == 0)
				{
					iLocal_799 = 0;
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			*iParam0 = 0;
			iLocal_158 = 9;
			break;
	}
}

void func_386(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2E19F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam1 < 1 || iParam2 > 5) || iParam1 > iParam2)
	{
		return;
	}
	iVar0 = (5 - func_395());
	if (iVar0 < iParam1)
	{
		if (iVar0 > 0)
		{
			iParam1 = iVar0;
		}
		else
		{
			return;
		}
	}
	if (iVar0 < iParam2)
	{
		if (iVar0 > 0)
		{
			iParam2 = iVar0;
		}
		else
		{
			return;
		}
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(iParam1, iParam2);
	if (func_392(iParam0, &iVar3, !bParam3))
	{
		if (bParam3)
		{
			if (func_382(&iVar2))
			{
				if (func_376(&(Local_345[iVar2 /*19*/]), Local_999[iVar3 /*7*/].f_1, Local_999[iVar3 /*7*/].f_4, 1, 1))
				{
					GlobalFunc_928(&(Local_345[iVar2 /*19*/]), 2);
					func_387(&(Local_999[iVar3 /*7*/]), iVar1, 0);
				}
			}
		}
		else
		{
			func_387(&(Local_999[iVar3 /*7*/]), iVar1, !bParam3);
		}
	}
}

void func_387(var uParam0, int iParam1, bool bParam2)//Position - 0x2E276
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<3> Var3;
	
	if (iParam1 > 5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (func_391(&iVar1))
		{
			Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1, uParam0->f_4, Local_817[iVar0 /*3*/]) };
			if (bParam2)
			{
				uVar2 = GlobalFunc_830(uParam0->f_1, Var3);
			}
			else
			{
				uVar2 = GlobalFunc_830(Var3, uParam0->f_1);
			}
			func_389(iVar1, Var3, uVar2);
			func_388(iVar1);
			if (iLocal_810 == -1 && !bParam2)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_810, "CROWD_WATCHING", Local_833[iVar1 /*11*/], 0, 0, 0);
			}
			Local_833[iVar1 /*11*/].f_10 = bParam2;
		}
		iVar0++;
	}
}

int func_388(int iParam0)//Position - 0x2E32C
{
	var uVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_833[iParam0 /*11*/].f_2, &uVar0))
	{
		Local_833[iParam0 /*11*/].f_2.f_2 = uVar0;
	}
	if (Local_833[iParam0 /*11*/].f_2.f_2 < 28f)
	{
		return 0;
	}
	Local_833[iParam0 /*11*/] = PED::CREATE_PED(26, Local_833[iParam0 /*11*/].f_1, Local_833[iParam0 /*11*/].f_2, Local_833[iParam0 /*11*/].f_5, 1, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_833[iParam0 /*11*/]))
	{
		return 0;
	}
	PED::_0x733C87D4CE22BEA2(Local_833[iParam0 /*11*/]);
	AUDIO::STOP_PED_SPEAKING(Local_833[iParam0 /*11*/], 1);
	PED::SET_PED_DIES_WHEN_INJURED(Local_833[iParam0 /*11*/], 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_833[iParam0 /*11*/], 1);
	PED::SET_PED_MONEY(Local_833[iParam0 /*11*/], 0);
	ENTITY::SET_ENTITY_HEALTH(Local_833[iParam0 /*11*/], 100);
	Local_833[iParam0 /*11*/].f_6 = 0;
	Local_833[iParam0 /*11*/].f_7 = 1;
	Local_833[iParam0 /*11*/].f_10 = 0;
	return 1;
}

void func_389(int iParam0, struct<3> Param1, var uParam4)//Position - 0x2E413
{
	if (GlobalFunc_745())
	{
		Local_833[iParam0 /*11*/].f_1 = iLocal_808;
	}
	else
	{
		Local_833[iParam0 /*11*/].f_1 = iLocal_807;
	}
	Local_833[iParam0 /*11*/].f_2 = { Param1 };
	Local_833[iParam0 /*11*/].f_5 = uParam4;
	Local_833[iParam0 /*11*/].f_7 = 0;
}


int func_391(var uParam0)//Position - 0x2E47B
{
	int iVar0;
	
	iVar0 = 0;
	*uParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_833)
	{
		if (Local_833[iVar0 /*11*/].f_7 == 0)
		{
			*uParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_392(int iParam0, var uParam1, bool bParam2)//Position - 0x2E4B5
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	func_394();
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Local_893[iVar0 /*7*/] == iParam0)
		{
			if (Local_893[iVar0 /*7*/].f_6 == bParam2)
			{
				if (iVar1 < Local_999)
				{
					if (!PED::IS_ANY_PED_NEAR_POINT(Local_893[iVar0 /*7*/].f_1, 7f))
					{
						func_393(iVar0, iVar1);
						iVar1++;
					}
				}
				else
				{
					iVar0 = 15;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
	}
	else
	{
		*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		return 1;
	}
	return 0;
}

void func_393(int iParam0, int iParam1)//Position - 0x2E540
{
	Local_999[iParam1 /*7*/] = Local_893[iParam0 /*7*/];
	Local_999[iParam1 /*7*/].f_1 = { Local_893[iParam0 /*7*/].f_1 };
	Local_999[iParam1 /*7*/].f_4 = Local_893[iParam0 /*7*/].f_4;
	Local_999[iParam1 /*7*/].f_6 = Local_893[iParam0 /*7*/].f_6;
}

void func_394()//Position - 0x2E590
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_999)
	{
		Local_999[iVar0 /*7*/] = 3;
		Local_999[iVar0 /*7*/].f_1 = { 0f, 0f, 0f };
		Local_999[iVar0 /*7*/].f_4 = -1f;
		Local_999[iVar0 /*7*/].f_5 = -1;
		Local_999[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
}

int func_395()//Position - 0x2E5E0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Local_833)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_833[iVar0 /*11*/]))
		{
			if (!PED::IS_PED_INJURED(Local_833[iVar0 /*11*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}


int func_397(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2E645
{
	float fVar0;
	
	MISC::CLEAR_AREA_OF_VEHICLES(Param1, 5f, 0, 0, 0, 0, 0);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1 + Vector(0.23f, 0f, 0f), &fVar0))
	{
		Param1.f_2 = fVar0;
	}
	uParam0->f_3 = VEHICLE::CREATE_VEHICLE(iLocal_545, Param1, fParam4, 1, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return 0;
	}
	fVar0 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(uParam0->f_3)) / 1.5f);
	ENTITY::SET_ENTITY_HEALTH(uParam0->f_3, SYSTEM::FLOOR(fVar0));
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(uParam0->f_3, 1, 1862763509);
	VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(uParam0->f_3, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_3, 1, 0);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_3, 1);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_3, 0, 0);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3, 1);
	ENTITY::SET_ENTITY_PROOFS(uParam0->f_3, 0, 1, 0, 0, 0, 0, 0, 0);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(uParam0->f_3, 0);
	*uParam0 = 1;
	uParam0->f_6 = (MISC::GET_GAME_TIMER() + iParam6);
	uParam0->f_7 = 0;
	uParam0->f_2 = 1;
	uParam0->f_10 = 0;
	uParam0->f_13 = iParam5;
	uParam0->f_11 = iParam7;
	uParam0->f_12 = iParam8;
	return 1;
}

int func_398(int iParam0)//Position - 0x2E755
{
	int iVar0;
	
	iVar0 = 0;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_498)
	{
		if (Local_498[iVar0 /*15*/] == 0)
		{
			*iParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_399(int iParam0)//Position - 0x2E78D
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			fLocal_593 = 0f;
			iLocal_585 = 0;
			iLocal_584 = 0;
			iLocal_575 = 6;
			*iParam0 = 1;
			break;
		
		case 1:
			if (fLocal_593 < 0.5f)
			{
				return;
			}
			iLocal_584 = 0;
			GlobalFunc_11076(1, "Half Way", 0, 0, 0, 1);
			if (func_398(&iVar0))
			{
				func_397(&(Local_498[iVar0 /*15*/]), 173.7f, -918.9f, 32.2f, 235.72f, -1, 1250, 1150, 1750);
			}
			if (func_398(&iVar0))
			{
				func_397(&(Local_498[iVar0 /*15*/]), 214.2f, -947.3f, 32.2f, 53.64f, -1, 8250, 850, 2000);
			}
			GlobalFunc_7777(&uLocal_1107);
			*iParam0 = 2;
			break;
		
		case 2:
			if (iLocal_581 > 1)
			{
				if (GlobalFunc_7950(&uLocal_1107, MISC::GET_RANDOM_FLOAT_IN_RANGE(9f, 12f)))
				{
					func_386(1, 5, 5, 0);
				}
			}
			if (func_363())
			{
				func_360(&iLocal_799);
				if (iLocal_581 == 0)
				{
					iLocal_799 = 0;
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			*iParam0 = 0;
			iLocal_158 = 8;
			break;
	}
}

void func_400(int iParam0)//Position - 0x2E8B2
{
	switch (*iParam0)
	{
		case 0:
			fLocal_593 = 0f;
			iLocal_575 = 5;
			*iParam0 = 1;
			break;
		
		case 1:
			if (fLocal_593 < 0.5f)
			{
				return;
			}
			iLocal_584 = 1;
			iLocal_585 = 1;
			Local_586 = { 188.0858f, -952.7253f, 33.09226f };
			fLocal_583 = 16f;
			iLocal_576 = 0;
			*iParam0 = 2;
			break;
		
		case 2:
			if (iLocal_576 >= 3)
			{
				iLocal_584 = 0;
			}
			if (func_363() && iLocal_584 == 0)
			{
				func_360(&iLocal_799);
				if (iLocal_581 == 0)
				{
					iLocal_799 = 0;
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			*iParam0 = 0;
			iLocal_158 = 7;
			break;
	}
}

void func_401(int iParam0)//Position - 0x2E966
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
		case 1:
			iLocal_575 = 5;
			if (func_382(&iVar0))
			{
				func_376(&(Local_345[iVar0 /*19*/]), 202.1f, -999.3f, 30.6f, 0, 0, 0);
			}
			if (func_382(&iVar0))
			{
				func_376(&(Local_345[iVar0 /*19*/]), 200.6f, -989.3f, 30.6f, 0, 0, 0);
			}
			if (func_382(&iVar0))
			{
				func_376(&(Local_345[iVar0 /*19*/]), 192.3f, -994.7f, 30.6f, 0, 0, 0);
			}
			func_386(0, 2, 5, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (func_363())
			{
				func_360(&iLocal_799);
				if (iLocal_581 == 0)
				{
					iLocal_799 = 0;
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			*iParam0 = 0;
			iLocal_158 = 6;
			break;
	}
}

void func_402(int iParam0)//Position - 0x2EA40
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
		case 1:
			iLocal_575 = 5;
			if (func_398(&iVar0))
			{
				if (func_397(&(Local_498[iVar0 /*15*/]), 151.2f, -962.3f, 30.1f, 213.2f, 1, 0, 1250, 2500))
				{
					*iParam0 = 2;
				}
			}
			break;
		
		case 2:
			if (func_363())
			{
				func_360(&iLocal_799);
				if (iLocal_581 == 0)
				{
					iLocal_799 = 0;
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			*iParam0 = 0;
			iLocal_158 = 5;
			break;
	}
}

void func_403(int iParam0)//Position - 0x2EAD0
{
	switch (*iParam0)
	{
		case 0:
			*iParam0 = 1;
			iLocal_575 = 5;
			break;
		
		case 1:
			bLocal_602 = true;
			func_404();
			*iParam0 = 2;
			break;
		
		case 2:
			if (iLocal_581 == 0)
			{
				iLocal_799 = 0;
				*iParam0 = 4;
			}
			break;
		
		case 4:
			*iParam0 = 0;
			iLocal_158 = 4;
			break;
	}
}

void func_404()//Position - 0x2EB2E
{
	int iVar0;
	
	if (iLocal_215 == 1)
	{
		return;
	}
	if (func_382(&iVar0))
	{
		if (func_376(&(Local_345[iVar0 /*19*/]), 181.1f, -951.9f, 30.1f, 0, 0, 0))
		{
		}
	}
	if (func_382(&iVar0))
	{
		if (func_376(&(Local_345[iVar0 /*19*/]), 173f, -956.9f, 30.1f, 0, 0, 0))
		{
			Local_345[iVar0 /*19*/].f_11 = 0;
		}
	}
	if (func_382(&iVar0))
	{
		if (func_376(&(Local_345[iVar0 /*19*/]), 174.7f, -948.1f, 30.1f, 0, 0, 0))
		{
			Local_345[iVar0 /*19*/].f_11 = 0;
		}
	}
	func_386(0, 5, 5, 1);
	iLocal_215 = 1;
}

void func_405(int iParam0)//Position - 0x2EBD9
{
	switch (*iParam0)
	{
		case 0:
			while (!GlobalFunc_5731(&uLocal_216))
			{
				SYSTEM::WAIT(0);
			}
			if (!iLocal_800)
			{
				func_429();
				iLocal_800 = 1;
			}
			func_421();
			*iParam0 = 1;
			iLocal_575 = 5;
			GlobalFunc_4923(&Local_95, 0, 1);
			func_409(&Local_95, 1, 1, 0);
			func_408();
			GlobalFunc_11076(0, "Mission Start", 0, 0, 0, 1);
			break;
		
		case 1:
			HUD::CLEAR_PRINTS();
			GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sLocal_343))
			{
				AUDIO::START_AUDIO_SCENE(sLocal_343);
			}
			PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
			AUDIO::SET_AMBIENT_ZONE_STATE(sLocal_796, 1, 0);
			func_406();
			func_421();
			GlobalFunc_79(500, 0);
			*iParam0 = 2;
			break;
		
		case 2:
			if (func_421())
			{
				*iParam0 = 4;
			}
			break;
		
		case 4:
			*iParam0 = 0;
			iLocal_158 = 3;
			break;
	}
}

void func_406()//Position - 0x2ECB5
{
	GlobalFunc_173(&uLocal_631, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	iLocal_605 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000);
	iLocal_604 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000);
	bLocal_602 = false;
}


void func_408()//Position - 0x2ED58
{
	iLocal_35 = MISC::GET_GAME_TIMER();
}

void func_409(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2ED66
{
	GlobalFunc_7101(uParam0, iParam1);
	GlobalFunc_8321(uParam0, bParam2);
	GlobalFunc_7100(uParam0, bParam3);
}












int func_421()//Position - 0x2F0AC
{
	GlobalFunc_234(Local_345[iLocal_802 /*19*/].f_3);
	GlobalFunc_234(Local_345[iLocal_803 /*19*/].f_3);
	GlobalFunc_234(Local_345[iLocal_804 /*19*/].f_3);
	GlobalFunc_234(PLAYER::PLAYER_PED_ID());
	if (!iLocal_805)
	{
		if (iLocal_889 == 9 && MISC::GET_GAME_TIMER() > iLocal_603)
		{
			GlobalFunc_173(&uLocal_631, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			if (GlobalFunc_10607(&uLocal_631, "BARY2AU", "BARY2_FREAK", 8, 1, 0, 0))
			{
				iLocal_805 = 1;
			}
		}
	}
	switch (iLocal_889)
	{
		case 0:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			if (iLocal_214 == 0)
			{
				iLocal_214 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("RC18B_START");
			}
			if ((func_428(&(Local_345[iLocal_802 /*19*/]), "clown_idle_0", 0) && func_428(&(Local_345[iLocal_803 /*19*/]), "clown_idle_6", 0.1f)) && func_428(&(Local_345[iLocal_804 /*19*/]), "clown_idle_3", 0.1f))
			{
				iLocal_889 = 1;
			}
			break;
		
		case 1:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_345[iLocal_804 /*19*/].f_3))
			{
				GlobalFunc_5117(Local_345[iLocal_804 /*19*/].f_3, "CLOWN_LAUGH", "CLOWNS", 10);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_806))
			{
				if (CAM::IS_CAM_ACTIVE(uLocal_806))
				{
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), 187.789f, -959.6204f, 29.00801f, 85f, 0, 1);
					GlobalFunc_235(&uLocal_890);
					iLocal_889 = 6;
				}
			}
			break;
		
		case 6:
			func_424(&(Local_345[iLocal_803 /*19*/]));
			func_424(&(Local_345[iLocal_804 /*19*/]));
			if (func_424(&(Local_345[iLocal_802 /*19*/])))
			{
				func_423();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 2000, 1, 0, 0);
				}
				else
				{
					CAM::RENDER_SCRIPT_CAMS(0, 1, 2000, 1, 0, 0);
				}
				CAM::SET_CAM_ACTIVE(uLocal_806, 0);
				iLocal_889 = 7;
			}
			break;
		
		case 7:
			func_424(&(Local_345[iLocal_803 /*19*/]));
			func_424(&(Local_345[iLocal_804 /*19*/]));
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				GlobalFunc_164("B2_PRIME", 7500, 1);
				func_52(1, 0, 1, 1);
				iLocal_889 = 8;
			}
			break;
		
		case 8:
			func_424(&(Local_345[iLocal_803 /*19*/]));
			func_424(&(Local_345[iLocal_804 /*19*/]));
			if (func_422(&(Local_345[iLocal_802 /*19*/])))
			{
				iLocal_603 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_889 = 9;
			}
			break;
		
		case 9:
			func_422(&(Local_345[iLocal_802 /*19*/]));
			func_422(&(Local_345[iLocal_803 /*19*/]));
			func_422(&(Local_345[iLocal_804 /*19*/]));
			if (iLocal_581 == 0)
			{
				iLocal_889 = 10;
				return 1;
			}
			break;
		
		case 10:
			break;
	}
	return 0;
}

int func_422(var uParam0)//Position - 0x2F382
{
	if (!GlobalFunc_234(uParam0->f_3))
	{
		return 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 780511057) > 1)
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, sLocal_342, &(uParam0->f_7), 3))
		{
			uParam0->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_599, iLocal_600));
			uParam0->f_2 = 12;
			TASK::TASK_COMBAT_PED(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 134217728, 16);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_423()//Position - 0x2F3F7
{
	int iVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_547, 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_547, -1, 1, 1);
		}
		else if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1) || iVar0 != iLocal_547)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_547, 1);
		}
		WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_547, 10000);
		WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 1, iLocal_547);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
		if (WEAPON::DOES_WEAPON_TAKE_WEAPON_COMPONENT(iLocal_547, joaat("component_assaultshotgun_clip_02")))
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_547, joaat("component_assaultshotgun_clip_02"));
		}
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
	}
}

int func_424(var uParam0)//Position - 0x2F4AE
{
	if (!GlobalFunc_234(uParam0->f_3))
	{
		return 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 1630799643) > 1)
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, sLocal_342, &(uParam0->f_7), 3))
		{
			uParam0->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_599, iLocal_600));
			TASK::TASK_AIM_GUN_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 1);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}




int func_428(var uParam0, char* sParam1, int iParam2)//Position - 0x2F780
{
	if (uParam0->f_2 == 0)
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, sLocal_342, sParam1, 3))
		{
			StringCopy(&(uParam0->f_7), sParam1, 16);
			TASK::TASK_PLAY_ANIM(uParam0->f_3, sLocal_342, &(uParam0->f_7), 8f, -1f, -1, 0, iParam2, 0, 0, 0);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_429()//Position - 0x2F7CE
{
	int iVar0;
	
	if (func_382(&iVar0))
	{
		if (func_376(&(Local_345[iVar0 /*19*/]), 163.9249f, -956.996f, 29.09192f, 262.4564f, 1, 0))
		{
			iLocal_802 = iVar0;
			GlobalFunc_928(&(Local_345[iLocal_802 /*19*/]), 1);
		}
	}
	if (func_382(&iVar0))
	{
		func_376(&(Local_345[iVar0 /*19*/]), 166.4477f, -955.0585f, 29.09192f, 263.4564f, 0, 0);
		iLocal_803 = iVar0;
		GlobalFunc_928(&(Local_345[iLocal_803 /*19*/]), 1);
	}
	if (func_382(&iVar0))
	{
		func_376(&(Local_345[iVar0 /*19*/]), 168.952f, -960.7564f, 29.07847f, 265.4564f, 0, 0);
		iLocal_804 = iVar0;
		GlobalFunc_928(&(Local_345[iLocal_804 /*19*/]), 1);
	}
}




void func_433(int iParam0)//Position - 0x2FCA4
{
	switch (*iParam0)
	{
		case 0:
		case 1:
			GlobalFunc_79(500, 0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_438();
			func_436();
			func_434();
			*iParam0 = 2;
			break;
		
		case 2:
			break;
		
		case 4:
			break;
	}
}

void func_434()//Position - 0x2FCF6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_498)
	{
		func_435(&(Local_498[iVar0 /*15*/]));
		iVar0++;
	}
}

void func_435(var uParam0)//Position - 0x2FD20
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	GlobalFunc_846(&(uParam0->f_4));
	if (GlobalFunc_234(uParam0->f_3))
	{
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(uParam0->f_3, 0);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_3, 0, 0);
	}
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 0))
		{
			GlobalFunc_131(&(uParam0->f_3));
		}
		else
		{
			GlobalFunc_6689(&(uParam0->f_3));
		}
	}
	func_289(uParam0);
}

void func_436()//Position - 0x2FD9B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_345)
	{
		func_437(&(Local_345[iVar0 /*19*/]));
		iVar0++;
	}
}

void func_437(var uParam0)//Position - 0x2FDC5
{
	if (*uParam0 == 0)
	{
		return;
	}
	GlobalFunc_881(&(uParam0->f_3));
	func_63(uParam0);
}

void func_438()//Position - 0x2FDE5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_833)
	{
		func_439(&(Local_833[iVar0 /*11*/]));
		iVar0++;
	}
}

void func_439(var uParam0)//Position - 0x2FE0F
{
	if (uParam0->f_7 == 1)
	{
		uParam0->f_7 = 0;
	}
	GlobalFunc_881(uParam0);
}

void func_440(int iParam0)//Position - 0x2FE2A
{
	int iVar0;
	char* sVar1;
	
	switch (*iParam0)
	{
		case 0:
			GlobalFunc_9623("BAR_3_RCM", 0);
			iLocal_160 = 1;
			func_408();
			break;
		
		case 1:
			iLocal_344 = 0;
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
				}
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sLocal_334, 1, 0, 0, 0);
			}
			if (func_291(1, 1093140480, 0))
			{
				if (GlobalFunc_115(Local_95.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_28[0], sLocal_334, 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_28[0], sLocal_334, 2, GlobalFunc_4946(49), 0);
				}
				if (GlobalFunc_115(Local_95.f_41[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[0], sLocal_336, 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[0], sLocal_336, 2, joaat("prop_protest_table_01"), 0);
				}
				if (GlobalFunc_115(Local_95.f_41[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[1], sLocal_335, 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_95.f_41[1], sLocal_335, 2, joaat("prop_chair_08"), 0);
				}
				if (GlobalFunc_115(Local_95.f_41[2]))
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_95.f_41[2]));
					GlobalFunc_863(sLocal_337);
				}
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
				}
				uLocal_806 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 188.1366f, -957.7827f, 30.6514f, -5.5067f, -8f, 92.8053f, 40f, 0, 2);
				GlobalFunc_9161();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(1);
				CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
				SYSTEM::WAIT(0);
				GlobalFunc_5733(0, 0, 1, 0);
				func_451();
				func_282(Local_172, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				GlobalFunc_5732(&uLocal_163, 0);
				func_39();
				func_274(&(Local_95.f_41[3]), iLocal_546);
				GlobalFunc_79(500, 0);
				func_444();
				iLocal_160 = 2;
			}
			break;
		
		case 2:
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				MISC::SET_TIME_SCALE(fLocal_176);
				AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("BARRY_02_SLOWMO");
				AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
				AUDIO::SET_AUDIO_FLAG("AllowAmbientSpeechInSlowMo", 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				iLocal_160 = 0;
				iLocal_158 = 2;
			}
			else
			{
				iVar0 = CUTSCENE::GET_CUTSCENE_TIME();
				if (bLocal_36)
				{
					HUD::SET_TEXT_SCALE(0.5f, 0.5f);
					GlobalFunc_2354(0.1f, 0.1f, "NUMBER", iVar0, 0);
				}
				if (GlobalFunc_5731(&uLocal_216))
				{
					if (!iLocal_797)
					{
						CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(1);
						iLocal_797 = 1;
					}
					if (iVar0 < 59000)
					{
						if (GlobalFunc_4926(1000))
						{
							iLocal_160 = 3;
							return;
						}
					}
				}
				if (iLocal_214 == 0)
				{
					if (iVar0 >= 54000)
					{
						iLocal_214 = 1;
						sVar1 = sLocal_338;
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							sVar1 = sLocal_339;
						}
						GRAPHICS::ANIMPOSTFX_PLAY(sVar1, 0, 1);
						AUDIO::TRIGGER_MUSIC_EVENT("RC18B_START");
					}
				}
				if (iLocal_800 == 0 && iVar0 >= 59000)
				{
					func_429();
					iLocal_800 = 1;
				}
				else if (iLocal_800)
				{
					func_421();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					RECORDING::_0x81CBAE94390F9F89();
					if (CAM::DOES_CAM_EXIST(uLocal_806))
					{
						CAM::SET_CAM_ACTIVE(uLocal_806, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						CAM::SHAKE_CAM(uLocal_806, "DRUNK_SHAKE", 1065353216);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
				}
			}
			break;
		
		case 3:
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			GlobalFunc_2350(250, 1);
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_272(1, 1, 1);
			}
			if (iLocal_214 == 0)
			{
				iLocal_214 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("RC18B_START");
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_339))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sLocal_339, 0, 1);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if (CAM::DOES_CAM_EXIST(uLocal_806))
			{
				CAM::SET_CAM_ACTIVE(uLocal_806, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::SHAKE_CAM(uLocal_806, "DRUNK_SHAKE", 1065353216);
			}
			SYSTEM::WAIT(500);
			if (iLocal_800)
			{
				func_421();
			}
			iLocal_160 = 0;
			iLocal_158 = 2;
			break;
		
		case 4:
			break;
	}
}




void func_444()//Position - 0x30298
{
	GlobalFunc_5397(&uLocal_216, 0, 4, "SCRIPT\BARRY_02_CLOWN_A", 0);
	GlobalFunc_5397(&uLocal_216, 1, 4, "SCRIPT\BARRY_02_CLOWN_B", 0);
	GlobalFunc_5397(&uLocal_216, 2, 4, "SCRIPT\BARRY_02_CLOWN_C", 0);
	GlobalFunc_5730(&uLocal_216, 3, iLocal_544);
	GlobalFunc_5730(&uLocal_216, 4, iLocal_545);
	func_447(&uLocal_216, 5, "BARY2", 0);
	GlobalFunc_5397(&uLocal_216, 6, 2, sLocal_341, 0);
	GlobalFunc_5729(&uLocal_216, 7);
	GlobalFunc_5397(&uLocal_216, 8, 2, sLocal_342, 0);
	GlobalFunc_5730(&uLocal_216, 9, iLocal_807);
	GlobalFunc_5730(&uLocal_216, 10, iLocal_808);
	GlobalFunc_5397(&uLocal_216, 11, 2, sLocal_811, 0);
	GlobalFunc_5397(&uLocal_216, 12, 2, sLocal_813, 0);
	GlobalFunc_5397(&uLocal_216, 13, 2, sLocal_815, 0);
	GlobalFunc_5730(&uLocal_216, 14, iLocal_546);
}



int func_447(var uParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x303CE
{
	if (MISC::IS_BIT_SET(uParam0->f_113, iParam1) || MISC::IS_BIT_SET(uParam0->f_114, iParam1))
	{
		return 1;
	}
	GlobalFunc_1481(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = 8;
	(uParam0[iParam1 /*7*/])->f_3 = sParam2;
	(uParam0[iParam1 /*7*/])->f_5 = iParam3;
	return 1;
}




void func_451()//Position - 0x30613
{
	int iVar0;
	
	if (!GlobalFunc_115(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
	{
		Local_164 = { 180.47f, -1017.79f, 30.01f };
		fLocal_167 = 206.45f;
		GlobalFunc_9805(Local_201[0 /*3*/], Local_201[1 /*3*/], Local_201.f_7, Local_164, fLocal_167, 0f, 0f, 0f, 1, 0, 1, 0, 0);
		GlobalFunc_10701(Local_164, fLocal_167, 0, 145);
	}
	else
	{
		GlobalFunc_9805(Local_201[0 /*3*/], Local_201[1 /*3*/], Local_201.f_7, Local_164, fLocal_167, GlobalFunc_625(), 1, 0, 1, 0, 0);
		if (GlobalFunc_7091(0f, 0f, 0f, 1))
		{
			GlobalFunc_10701(Local_164, fLocal_167, 0, 145);
		}
	}
}






































void func_489(int iParam0)//Position - 0x33739
{
	var uVar0;
	
	GlobalFunc_8320();
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	func_491();
	switch (*iParam0)
	{
		case 0:
			func_444();
			GlobalFunc_2355(sLocal_342, 0);
			*iParam0 = 1;
			if (GlobalFunc_115(Local_95.f_28[0]))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_95.f_28[0], 0f, 0f, 0.3f, 1, -1, 3000, 2000, 0);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0f);
				}
				else
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_95.f_28[0], 0.6f, 0f, 0.3f, 1, -1, 3000, 2000, 0);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.04f);
				}
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.43f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(-0.02f);
				CAM::SET_GAMEPLAY_HINT_FOV(30f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_95.f_28[0], -1, 0, 2);
				}
			}
			break;
		
		case 1:
			if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_342) && !GlobalFunc_111())
			{
				uVar0 = 16;
				GlobalFunc_173(&uVar0, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				GlobalFunc_173(&uVar0, 0, Local_95.f_28[0], "BARRY", 0, 1);
				if (GlobalFunc_10607(&uVar0, "BARY2AU", "BAR_3_RCM_LI", 7, 0, 0, 0))
				{
					TASK::TASK_PLAY_ANIM(Local_95.f_28[0], sLocal_342, "lead_in", 8f, -4f, -1, 2, 0, 0, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(Local_95.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
					*iParam0 = 2;
					iLocal_594 = MISC::GET_GAME_TIMER() + 30000;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_115(Local_95.f_28[0]))
			{
				if (!GlobalFunc_111() || MISC::GET_GAME_TIMER() > iLocal_594)
				{
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					*iParam0 = 4;
				}
			}
			break;
		
		case 3:
			break;
		
		case 4:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			iLocal_158 = 0;
			*iParam0 = 0;
			break;
	}
}


void func_491()//Position - 0x33984
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 189.1399f, -955.8049f, 29.09192f, 187.5274f, -955.0106f, 31.09192f, 2.5f, 0, 1, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				if (GlobalFunc_115(Local_95.f_28[0]))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_95.f_28[0], 0);
				}
			}
		}
	}
}



void func_494()//Position - 0x33A68
{
	int iVar0;
	struct<3> Var1;
	
	if (iLocal_581 >= iLocal_575 || iLocal_584 == 0)
	{
		return;
	}
	if (MISC::GET_GAME_TIMER() < iLocal_569)
	{
		return;
	}
	if (!func_382(&iVar0))
	{
		return;
	}
	if (iLocal_158 == 9)
	{
		if (iLocal_1111 >= 2)
		{
			iLocal_584 = 0;
			iLocal_1111 = 0;
			return;
		}
	}
	if (iLocal_585)
	{
		Var1 = { GlobalFunc_5726(Local_586, fLocal_583, 2f) };
	}
	else
	{
		Var1 = { GlobalFunc_5726(Local_168, fLocal_583, 2f) };
	}
	if (!func_495(&Var1))
	{
		return;
	}
	if (func_376(&(Local_345[iVar0 /*19*/]), Var1, 0, 0, 0))
	{
		if (iLocal_158 == 9)
		{
			iLocal_569 = MISC::GET_GAME_TIMER() + 25;
			iLocal_1111++;
		}
		else
		{
			iLocal_569 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_570, iLocal_571));
		}
	}
}

int func_495(var uParam0)//Position - 0x33B34
{
	struct<3> Var0;
	var uVar3;
	float fVar4;
	struct<3> Var5;
	
	fVar4 = 2f;
	if (iLocal_158 != 9)
	{
		if (!PATHFIND::GET_SAFE_COORD_FOR_PED(*uParam0, 0, &Var0, 14))
		{
			return 0;
		}
	}
	else
	{
		Var0 = { *uParam0 };
		fVar4 = 0.5f;
		if (Var0.f_2 < 29.1f)
		{
			Var0.f_2 = 30f;
		}
	}
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3))
	{
		return 0;
	}
	Var0.f_2 = uVar3;
	if (iLocal_158 != 9)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_168, 1) > fLocal_171)
		{
			return 0;
		}
	}
	if (GlobalFunc_2367(PLAYER::PLAYER_PED_ID(), Var0, 1) < fLocal_574)
	{
		return 0;
	}
	if (bLocal_595)
	{
		if (func_496(Var0, fVar4, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 0;
		}
	}
	else if (PED::IS_ANY_PED_NEAR_POINT(Var0, fVar4))
	{
		return 0;
	}
	if (iLocal_158 == 9)
	{
		Var5 = { Var0 };
		if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Var0, 0, &Var5, 14))
		{
			return 0;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 211.8852f, -931.1685f, 29.6915f, 220.7504f, -918.6229f, 32.44152f, 2f, 0, 1))
	{
		return 0;
	}
	if (Var0.f_2 < 28.58f)
	{
		return 0;
	}
	*uParam0 = { Var0 };
	return 1;
}

bool func_496(struct<3> Param0, float fParam3, var uParam4, int iParam5)//Position - 0x33C6F
{
	return MISC::IS_POSITION_OCCUPIED(Param0, fParam3, 0, 0, 1, 0, 0, uParam4, iParam5);
}




void func_500()//Position - 0x33D42
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_582 = 0;
	iVar0 = 0;
	while (iVar0 < Local_498)
	{
		if (func_501(&(Local_498[iVar0 /*15*/])))
		{
			iLocal_582++;
		}
		iVar0++;
	}
}

int func_501(var uParam0)//Position - 0x33D7B
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	var uVar11;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return 0;
	}
	iVar6 = iLocal_572 * 2;
	uVar1 = func_513(uParam0->f_3, 1);
	if (uParam0->f_2 < 15)
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1) };
		if (Var3.f_2 < 21f)
		{
		}
		if (uVar1 || Var3.f_2 < 21f)
		{
			uParam0->f_2 = 15;
			if (uParam0->f_8 == 0)
			{
				if (iLocal_579 < 4)
				{
					GlobalFunc_565(743, 1, 0);
				}
			}
			iLocal_579++;
		}
	}
	if (uParam0->f_9 == 0)
	{
		if (GlobalFunc_114(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 1) < fLocal_580 || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 1))
		{
			uParam0->f_6 = (MISC::GET_GAME_TIMER() + iVar6);
			uParam0->f_9 = 1;
		}
	}
	if (bLocal_212)
	{
		if (uParam0->f_9 == 0)
		{
			GlobalFunc_2368(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1), fLocal_580, 255, 0, 0, 255, 32);
		}
		else
		{
			GlobalFunc_2368(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1), fLocal_580, 0, 0, 255, 255, 32);
		}
	}
	switch (uParam0->f_2)
	{
		case 1:
			if (MISC::GET_GAME_TIMER() >= uParam0->f_6)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", uParam0->f_3, 0f, 0f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
				uParam0->f_6 = MISC::GET_GAME_TIMER() + 250;
				uParam0->f_2 = 2;
				uParam0->f_5 = 0f;
				func_509(uParam0->f_3, SYSTEM::FLOOR(uParam0->f_5), &iLocal_213);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, 1);
				if (uParam0->f_7 == 0)
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_3, "BARRY_02_VEHICLE_SETTING", 0);
					uParam0->f_7 = 1;
				}
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_3))
				{
					uParam0->f_5 = 255f;
				}
			}
			break;
		
		case 2:
			uParam0->f_5 = (uParam0->f_5 + (MISC::GET_FRAME_TIME() * 1024f));
			if (uParam0->f_5 > 255f)
			{
				uParam0->f_5 = 255f;
			}
			if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_3))
			{
				func_509(uParam0->f_3, SYSTEM::FLOOR(uParam0->f_5), &iLocal_213);
			}
			else
			{
				ENTITY::RESET_ENTITY_ALPHA(uParam0->f_3);
			}
			if (MISC::GET_GAME_TIMER() >= uParam0->f_6 || uParam0->f_5 >= 255f)
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, 1);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_3, 1, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_3, 0);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3, 0);
				ENTITY::RESET_ENTITY_ALPHA(uParam0->f_3);
				GlobalFunc_846(&(uParam0->f_4));
				uParam0->f_4 = GlobalFunc_5740(uParam0->f_3, 0, 5);
				uParam0->f_2 = 12;
				VEHICLE::START_VEHICLE_HORN(uParam0->f_3, 4000, 0, 0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_3, 1, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_3, fLocal_601);
				uParam0->f_6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_572, iLocal_573));
				if (uParam0->f_13 != 0)
				{
					uParam0->f_2 = 10;
				}
			}
			break;
		
		case 10:
			if (iLocal_581 >= iLocal_575)
			{
				return 1;
			}
			if (func_382(&iVar0))
			{
				uParam0->f_14 = iVar0;
				if (func_506(&(Local_345[uParam0->f_14 /*19*/]), uParam0->f_3, 1))
				{
					Local_345[uParam0->f_14 /*19*/].f_2 = 0;
					GlobalFunc_846(&(Local_345[uParam0->f_14 /*19*/].f_4));
					TASK::CLEAR_PED_TASKS(Local_345[uParam0->f_14 /*19*/].f_3);
					TASK::OPEN_SEQUENCE_TASK(&uVar2);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, uParam0->f_3, 32, uParam0->f_11);
					if (uParam0->f_13 == 1)
					{
						TASK::TASK_VEHICLE_TEMP_ACTION(0, uParam0->f_3, 5, uParam0->f_12);
					}
					else if (uParam0->f_13 == -1)
					{
						TASK::TASK_VEHICLE_TEMP_ACTION(0, uParam0->f_3, 4, uParam0->f_12);
					}
					TASK::CLOSE_SEQUENCE_TASK(uVar2);
					TASK::TASK_PERFORM_SEQUENCE(Local_345[uParam0->f_14 /*19*/].f_3, uVar2);
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
					uParam0->f_2 = 11;
				}
			}
			break;
		
		case 11:
			if (GlobalFunc_115(Local_345[uParam0->f_14 /*19*/].f_3))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_345[uParam0->f_14 /*19*/].f_3, 242628503) == 7)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					TASK::TASK_LEAVE_VEHICLE(0, uParam0->f_3, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(Local_345[uParam0->f_14 /*19*/].f_3, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					Local_345[uParam0->f_14 /*19*/].f_4 = GlobalFunc_5739(Local_345[uParam0->f_14 /*19*/].f_3, 1, 0, 5);
					Local_345[uParam0->f_14 /*19*/].f_2 = 14;
					uParam0->f_2 = 12;
				}
			}
			else
			{
				TASK::TASK_EVERYONE_LEAVE_VEHICLE(uParam0->f_3);
				uParam0->f_6 = (MISC::GET_GAME_TIMER() + iVar6);
				uParam0->f_2 = 12;
			}
			break;
		
		case 12:
			if (bLocal_597 == 0 && iLocal_1105)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_598 && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_3))
				{
					if (GlobalFunc_114(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 50f)
					{
						func_504();
					}
				}
			}
			if (MISC::GET_GAME_TIMER() < uParam0->f_6)
			{
				return 1;
			}
			if (iLocal_581 >= iLocal_575)
			{
				return 1;
			}
			Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, -3.3f, -0.7f) };
			if (bLocal_212)
			{
				GlobalFunc_2368(Var8, 1.5f, 255, 0, 0, 255, 32);
			}
			if (func_503(Var8, 1.5f))
			{
				return 1;
			}
			if (func_382(&iVar0))
			{
				if (func_506(&(Local_345[iVar0 /*19*/]), uParam0->f_3, 0))
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", uParam0->f_3, Local_589, 0f, 0f, 0f, fLocal_592, 0, 0, 0);
					Local_345[iVar0 /*19*/].f_2 = 14;
					GlobalFunc_928(&(Local_345[iVar0 /*19*/]), 4);
					uParam0->f_8 = 1;
					uParam0->f_10++;
					uParam0->f_5 = 0f;
					ENTITY::SET_ENTITY_VISIBLE(Local_345[iVar0 /*19*/].f_3, 0);
					Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-6.5f, -10f), -0.7f) };
					TASK::OPEN_SEQUENCE_TASK(&uVar11);
					TASK::TASK_SWAP_WEAPON(0, 1);
					TASK::TASK_LEAVE_VEHICLE(0, uParam0->f_3, 256);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Var8, PLAYER::PLAYER_PED_ID(), 1f, 1, 1.5f, 2f, 1, 0, 0, -957453492, 20000);
					TASK::CLOSE_SEQUENCE_TASK(uVar11);
					TASK::TASK_PERFORM_SEQUENCE(Local_345[iVar0 /*19*/].f_3, uVar11);
					TASK::CLEAR_SEQUENCE_TASK(&uVar11);
					if (uParam0->f_9 == 0)
					{
						uParam0->f_6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_572 * 4, iLocal_573 * 4));
					}
					else
					{
						uParam0->f_6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_572 + 500, iLocal_573));
					}
					if (uParam0->f_10 > 5)
					{
						uParam0->f_6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_572 * 4, iLocal_573 * 4));
						uParam0->f_10 = 0;
					}
					if (iLocal_596 == 0)
					{
						GlobalFunc_159("B2_CAR_HLP", -1);
						iLocal_596 = 1;
					}
					if (!iLocal_1105)
					{
						iLocal_598 = (MISC::GET_GAME_TIMER() + iLocal_573 + 500);
						iLocal_1105 = 1;
					}
				}
			}
			break;
		
		case 15:
			GlobalFunc_846(&(uParam0->f_4));
			if (uParam0->f_7)
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_3, 0);
				uParam0->f_7 = 0;
			}
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3, 0);
			VEHICLE::EXPLODE_VEHICLE(uParam0->f_3, 1, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "HOORAY", "BARRY_02_SOUNDSET", 1);
			uParam0->f_2 = 16;
			uParam0->f_6 = MISC::GET_GAME_TIMER() + 1500;
			uParam0->f_5 = 255f;
			if (!bLocal_597)
			{
				if (iLocal_1105)
				{
					iLocal_1105 = 0;
				}
			}
			break;
		
		case 16:
			if (MISC::GET_GAME_TIMER() > uParam0->f_6)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_clown_death", ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 0), ENTITY::GET_ENTITY_ROTATION(uParam0->f_3, 2), 3f, 0, 0, 0);
				uParam0->f_6 = MISC::GET_GAME_TIMER() + 400;
				uParam0->f_2 = 17;
			}
			break;
		
		case 17:
			if (MISC::GET_GAME_TIMER() > uParam0->f_6)
			{
				uParam0->f_5 = (uParam0->f_5 - (MISC::GET_FRAME_TIME() * 512f));
				if (uParam0->f_5 < 0f)
				{
					uParam0->f_5 = 0f;
				}
				GlobalFunc_234(uParam0->f_3);
				if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_3))
				{
					func_509(uParam0->f_3, SYSTEM::FLOOR(uParam0->f_5), &iLocal_213);
				}
				if (uParam0->f_5 <= 0f)
				{
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1), 2f);
					RECORDING::_0x293220DA1B46CEBC(4f, 1073741824, 3);
					func_435(uParam0);
					return 0;
				}
			}
			break;
	}
	return 1;
}


int func_503(struct<3> Param0, float fParam3)//Position - 0x34523
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_345)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_345[iVar0 /*19*/].f_3))
		{
			if (GlobalFunc_2367(Local_345[iVar0 /*19*/].f_3, Param0, 1) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_504()//Position - 0x3456C
{
	if (func_366())
	{
		if (GlobalFunc_5172(&uLocal_606, 1))
		{
			return;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	GlobalFunc_173(&uLocal_631, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	if (GlobalFunc_10607(&uLocal_631, "BARY2AU", "BARY2_ONEOFF", 7, 0, 0, 0))
	{
		bLocal_597 = true;
	}
}


int func_506(var uParam0, var uParam1, int iParam2)//Position - 0x34612
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	if (iParam2 == 0)
	{
		if (!func_507(uParam1))
		{
			return 0;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam1, 1))
		{
			iVar1 = 1;
		}
		else if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam1, 2))
		{
			iVar1 = 2;
		}
		else
		{
			return 0;
		}
	}
	uParam0->f_3 = PED::CREATE_PED_INSIDE_VEHICLE(uParam1, 26, iLocal_544, iVar1, 1, 1);
	GlobalFunc_846(&(uParam0->f_4));
	uParam0->f_4 = GlobalFunc_5739(uParam0->f_3, 1, 0, 5);
	uParam0->f_5 = -1;
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 24, false);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(uParam0->f_3, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, -2065892691);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
	iVar0 = (ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_3) / 2);
	ENTITY::SET_ENTITY_HEALTH(uParam0->f_3, iVar0);
	ENTITY::SET_ENTITY_MAX_HEALTH(uParam0->f_3, iVar0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_3, 1, 0);
	PED::SET_PED_MONEY(uParam0->f_3, 0);
	PED::SET_PED_ALERTNESS(uParam0->f_3, 3);
	PED::SET_PED_TARGET_LOSS_RESPONSE(uParam0->f_3, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 13, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 0, true);
	PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 1);
	AUDIO::STOP_PED_SPEAKING(uParam0->f_3, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_3, "CLOWNS");
	WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_3, joaat("weapon_pistol"), -1, 1, 1);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
			PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 1);
			break;
		
		case 1:
			PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 2);
			break;
		
		case 2:
			PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_3, 3);
			break;
	}
	*uParam0 = 1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	GlobalFunc_928(uParam0, 0);
	uParam0->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(SYSTEM::ROUND((IntToFloat(iLocal_599) * 1.5f)), iLocal_600));
	PED::SET_PED_CAN_COWER_IN_COVER(uParam0->f_3, 0);
	PED::SET_PED_CAN_PEEK_IN_COVER(uParam0->f_3, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 1, false);
	PED::SET_PED_AS_ENEMY(uParam0->f_3, 1);
	PED::SET_PED_DIES_WHEN_INJURED(uParam0->f_3, 1);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(uParam0->f_3, 1);
	PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(12f, 50f), 0);
	TASK::CLEAR_PED_TASKS(uParam0->f_3);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
	func_377(uParam0->f_3, &uLocal_548, 0);
	if (GlobalFunc_745())
	{
		PED::SET_PED_PROP_INDEX(uParam0->f_3, 0, 0, 0, false);
	}
	uParam0->f_13 = (MISC::GET_GAME_TIMER() + (30000 + SYSTEM::ROUND((30000f * 0.5f))));
	iLocal_576++;
	return 1;
}

int func_507(int iParam0)//Position - 0x34858
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
		{
			return 1;
		}
	}
	return 0;
}


void func_509(var uParam0, int iParam1, int iParam2)//Position - 0x348D8
{
	if (*iParam2 >= 8)
	{
		return;
	}
	ENTITY::SET_ENTITY_ALPHA(uParam0, iParam1, 0);
	*iParam2++;
}




int func_513(int iParam0, bool bParam1)//Position - 0x34AB7
{
	if (!GlobalFunc_234(iParam0))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) == 0)
	{
		return 1;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_514()//Position - 0x34AFD
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_345)
	{
		func_516(&(Local_345[iVar0 /*19*/]));
		iVar0++;
	}
	iLocal_581 = func_515();
}

int func_515()//Position - 0x34B2E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Local_345)
	{
		if (func_67(&(Local_345[iVar0 /*19*/])))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_516(var uParam0)//Position - 0x34B66
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	char* sVar5;
	float fVar6;
	float fVar7;
	
	if (*uParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_62(uParam0, 1);
		return;
	}
	GlobalFunc_234(uParam0->f_3);
	GlobalFunc_234(PLAYER::PLAYER_PED_ID());
	if (!func_527(uParam0))
	{
		if ((ENTITY::IS_ENTITY_DEAD(uParam0->f_3) || PED::IS_PED_INJURED(uParam0->f_3)) || PED::IS_PED_DEAD_OR_DYING(uParam0->f_3, 0))
		{
			iVar4 = 500;
			if (((uParam0->f_2 == 7 || uParam0->f_2 == 6) || uParam0->f_2 == 8) || uParam0->f_2 == 9)
			{
				if (iLocal_578 < 6)
				{
					GlobalFunc_565(744, 1, 0);
				}
				iLocal_578++;
			}
			if (iLocal_158 == 9)
			{
				iVar4 = 100;
			}
			GlobalFunc_5179("CLOWN_DEATH", "CLOWNS", ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1), 10);
			uParam0->f_2 = 15;
			uParam0->f_12 = (MISC::GET_GAME_TIMER() + iVar4);
			GlobalFunc_894(&(uParam0->f_5));
			if (GlobalFunc_1098(uParam0) != 0)
			{
				GlobalFunc_928(uParam0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
			{
				PED::EXPLODE_PED_HEAD(uParam0->f_3, joaat("weapon_sniperrifle"));
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 1))
			{
				func_524();
			}
			if (iLocal_158 == 9)
			{
				uParam0->f_16 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1) };
			}
			GlobalFunc_846(&(uParam0->f_4));
			iLocal_577++;
		}
	}
	switch (uParam0->f_2)
	{
		case 1:
			if (MISC::GET_GAME_TIMER() >= uParam0->f_12 || iLocal_158 == 9)
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3, 1);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", uParam0->f_3, 0f, 0f, -0.1f, 0f, 0f, 0f, 1.5f, 0, 0, 0);
				uParam0->f_12 = MISC::GET_GAME_TIMER() + 250;
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1) };
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() > uParam0->f_12)
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, 1);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_3, 0);
				GlobalFunc_846(&(uParam0->f_4));
				uParam0->f_4 = GlobalFunc_5739(uParam0->f_3, 1, 0, 5);
				switch (uParam0->f_14)
				{
					case 1:
						uParam0->f_2 = 0;
						break;
					
					case 2:
						uParam0->f_2 = 8;
						break;
					
					case 0:
						uParam0->f_2 = 12;
						if (uParam0->f_11 != 0)
						{
							uParam0->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_599, iLocal_600));
						}
						else
						{
							uParam0->f_2 = 6;
						}
						break;
					
					default:
						uParam0->f_2 = 12;
						break;
				}
				if (GlobalFunc_745())
				{
					GlobalFunc_5117(uParam0->f_3, "CLOWN_LAUGH", "CLOWNS", 10);
				}
			}
			break;
		
		case 3:
			GlobalFunc_846(&(uParam0->f_4));
			GlobalFunc_894(&(uParam0->f_5));
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_3, 1);
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_clown_appears", ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1), ENTITY::GET_ENTITY_ROTATION(uParam0->f_3, 2), 1.5f, 0, 0, 0);
			uParam0->f_12 = MISC::GET_GAME_TIMER() + 125;
			uParam0->f_2 = 4;
			break;
		
		case 4:
			if (MISC::GET_GAME_TIMER() > uParam0->f_12)
			{
				PED::DELETE_PED(&(uParam0->f_3));
				func_62(uParam0, 1);
				*uParam0 = 0;
			}
			break;
		
		case 12:
			if (GlobalFunc_1098(uParam0) == 3)
			{
				if (func_523(uParam0->f_3, &(uParam0->f_15), 22f))
				{
					func_361(uParam0, 1, 0);
					uParam0->f_2 = 13;
					return;
				}
			}
			else if (func_523(uParam0->f_3, &(uParam0->f_15), 12f))
			{
				func_361(uParam0, 1, 0);
				uParam0->f_2 = 13;
				return;
			}
			if (GlobalFunc_1098(uParam0) == 4 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) <= 1)
			{
				return;
			}
			else if (GlobalFunc_1098(uParam0) != 0)
			{
				GlobalFunc_928(uParam0, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 780511057) > 1)
			{
				if (MISC::GET_GAME_TIMER() > uParam0->f_13)
				{
					func_361(uParam0, 1, 1);
				}
				else
				{
					func_361(uParam0, 0, 0);
				}
				TASK::TASK_COMBAT_PED(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 134217728, 16);
				if (GlobalFunc_745())
				{
					GlobalFunc_5117(uParam0->f_3, "CLOWN_LAUGH", "CLOWNS", 10);
				}
			}
			if (MISC::GET_GAME_TIMER() > uParam0->f_11)
			{
				if (!PED::IS_PED_IN_COVER(uParam0->f_3, 0))
				{
					func_361(uParam0, 0, 0);
					uParam0->f_2 = 6;
				}
				else
				{
					uParam0->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_599, (iLocal_600 / 2)));
				}
			}
			Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1) };
			if (Var0.f_2 < 27.7f)
			{
				uParam0->f_2 = 4;
				return;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0->f_3, 220.5318f, -918.4567f, 27.53389f, 211.7581f, -931.4215f, 39.6918f, 2.5f, 0, 1, 0))
			{
				uParam0->f_2 = 4;
				return;
			}
			break;
		
		case 13:
			if (!func_522(uParam0) || func_521(uParam0->f_3, uParam0->f_15) > 22f)
			{
				uParam0->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_599, iLocal_600));
				uParam0->f_15 = 0;
				uParam0->f_2 = 12;
			}
			else
			{
				if (GlobalFunc_1098(uParam0) != 3)
				{
					GlobalFunc_928(uParam0, 3);
				}
				func_520(uParam0);
			}
			break;
		
		case 6:
			func_519(uParam0, 1);
			uParam0->f_2 = 7;
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, sLocal_342, &(uParam0->f_7), 3))
			{
				uParam0->f_2 = 12;
				uParam0->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_599, iLocal_600));
			}
			break;
		
		case 8:
			func_519(uParam0, 0);
			uParam0->f_2 = 9;
			break;
		
		case 9:
			if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_7), sLocal_816))
			{
				sVar5 = sLocal_815;
				fVar6 = 0.802f;
				fVar7 = 0.815f;
			}
			else
			{
				sVar5 = sLocal_342;
				fVar6 = 0.95f;
				fVar7 = 0.99f;
			}
			if (func_518(uParam0, sVar5, fVar6, fVar7, &iLocal_801))
			{
				GlobalFunc_928(&(Local_345[iLocal_802 /*19*/]), 3);
				uParam0->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_599, iLocal_600));
				uParam0->f_2 = 12;
			}
			break;
		
		case 14:
			uParam0->f_6 = (uParam0->f_6 + (MISC::GET_FRAME_TIME() * 512f));
			if (uParam0->f_6 < 2f)
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, 1);
				if (uParam0->f_6 > 255f)
				{
					uParam0->f_6 = 255f;
					ENTITY::RESET_ENTITY_ALPHA(uParam0->f_3);
					uParam0->f_2 = 12;
				}
				else if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_3))
				{
					func_517(uParam0->f_3, SYSTEM::FLOOR(uParam0->f_6), &iLocal_213);
				}
				else
				{
					ENTITY::RESET_ENTITY_ALPHA(uParam0->f_3);
				}
			}
			break;
		
		case 5:
			break;
		
		case 15:
			GlobalFunc_846(&(uParam0->f_4));
			if (MISC::GET_GAME_TIMER() > uParam0->f_12)
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3) || PED::IS_PED_INJURED(uParam0->f_3))
				{
					GlobalFunc_894(&(uParam0->f_5));
					if (!ENTITY::IS_ENTITY_IN_AIR(uParam0->f_3))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1) };
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3))
						{
							Var0.f_2 = uVar3;
							Var0.f_2 = (Var0.f_2 + 1f);
						}
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_clown_death", Var0, ENTITY::GET_ENTITY_ROTATION(uParam0->f_3, 2), 2f, 0, 0, 0);
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "clown_die_wrapper", Var0, "BARRY_02_SOUNDSET", 0, 0, 0);
						uParam0->f_2 = 17;
						if (iLocal_158 == 9)
						{
							uParam0->f_12 = MISC::GET_GAME_TIMER() + 100;
						}
						else
						{
							uParam0->f_12 = MISC::GET_GAME_TIMER() + 500;
						}
						uParam0->f_6 = 255f;
						GlobalFunc_846(&(uParam0->f_4));
					}
				}
			}
			break;
		
		case 17:
			if (MISC::GET_GAME_TIMER() > uParam0->f_12)
			{
				uParam0->f_6 = (uParam0->f_6 - (MISC::GET_FRAME_TIME() * 512f));
				if (uParam0->f_6 < 0f)
				{
					uParam0->f_6 = 0f;
				}
				func_517(uParam0->f_3, SYSTEM::FLOOR(uParam0->f_6), &iLocal_213);
				if (uParam0->f_6 <= 0f || !ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_3))
				{
					uParam0->f_1 = 1;
					GlobalFunc_894(&(uParam0->f_5));
					func_437(uParam0);
					*uParam0 = 0;
				}
			}
			break;
	}
}

void func_517(var uParam0, int iParam1, int iParam2)//Position - 0x35318
{
	if (*iParam2 >= 8)
	{
		return;
	}
	ENTITY::SET_ENTITY_ALPHA(uParam0, iParam1, 0);
	*iParam2++;
}

int func_518(var uParam0, char* sParam1, float fParam2, float fParam3, int iParam4)//Position - 0x3533C
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, sParam1, &(uParam0->f_7), 3))
	{
		if (!*iParam4)
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, sParam1, &(uParam0->f_7)) >= fParam2 && !WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_3, joaat("weapon_smg"), 0))
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_clown_appears", PED::GET_PED_BONE_COORDS(uParam0->f_3, 57005, 0f, 0f, 0f), 0f, 0f, 0f, 0.3f, 0, 0, 0);
				*iParam4 = 1;
			}
		}
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, sParam1, &(uParam0->f_7)) >= fParam3)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_3, joaat("weapon_smg"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_3, joaat("weapon_smg"), -1, 1, 1);
			}
			*iParam4 = 0;
			return 1;
		}
	}
	else
	{
		func_519(uParam0, 1);
	}
	return 0;
}

void func_519(var uParam0, bool bParam1)//Position - 0x353F6
{
	int iVar0;
	
	iVar0 = -1;
	if (!bParam1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	}
	if (iVar0 == 0)
	{
		StringCopy(&(uParam0->f_7), sLocal_816, 16);
		TASK::TASK_PLAY_ANIM(uParam0->f_3, sLocal_815, &(uParam0->f_7), 8f, -4f, -1, 0, 0.625f, 0, 0, 0);
	}
	else
	{
		StringCopy(&(uParam0->f_7), "clown_idle_", 16);
		StringIntConCat(&(uParam0->f_7), MISC::GET_RANDOM_INT_IN_RANGE(0, 6), 16);
		TASK::TASK_PLAY_ANIM(uParam0->f_3, sLocal_342, &(uParam0->f_7), 8f, -1f, -1, 0, 0, 0, 0, 0);
	}
}

void func_520(var uParam0)//Position - 0x35475
{
	var uVar0;
	
	if (PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_INJURED(uParam0->f_15))
	{
		return;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1)
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		if (GlobalFunc_114(uParam0->f_3, uParam0->f_15, 0) <= 5f)
		{
			TASK::TASK_AIM_GUN_AT_ENTITY(0, uParam0->f_15, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), 0);
			TASK::TASK_SHOOT_AT_ENTITY(0, uParam0->f_15, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), -957453492);
		}
		TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, uParam0->f_15, uParam0->f_15, 2f, 1, 3f, 4.5f, 1, 0, -957453492);
		TASK::TASK_COMBAT_PED(0, uParam0->f_15, 67108864, 16);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		if (GlobalFunc_745())
		{
			GlobalFunc_5117(uParam0->f_3, "CLOWN_LAUGH", "CLOWNS", 10);
		}
	}
}

float func_521(var uParam0, var uParam1)//Position - 0x35547
{
	return GlobalFunc_114(uParam0, uParam1, 1);
}

int func_522(var uParam0)//Position - 0x35558
{
	if (func_67(uParam0))
	{
		if (uParam0->f_15 != 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_15))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_15) && !PED::IS_PED_DEAD_OR_DYING(uParam0->f_15, 1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_523(int iParam0, var uParam1, float fParam2)//Position - 0x3559D
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (PED::IS_PED_INJURED(uParam0))
	{
		return 0;
	}
	fVar2 = 1000f;
	*uParam1 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_833 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_833[iVar0 /*11*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_833[iVar0 /*11*/]))
			{
				if (!PED::IS_PED_INJURED(Local_833[iVar0 /*11*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_833[iVar0 /*11*/], 1))
				{
					fVar1 = func_521(iParam0, Local_833[iVar0 /*11*/]);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						*uParam1 = Local_833[iVar0 /*11*/];
					}
				}
			}
		}
		iVar0++;
	}
	if (*uParam1 != 0 && fVar2 < fParam2)
	{
		return 1;
	}
	*uParam1 = 0;
	return 0;
}

void func_524()//Position - 0x35651
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	if (MISC::GET_GAME_TIMER() < iLocal_604)
	{
		return;
	}
	if (!bLocal_602)
	{
		return;
	}
	if (func_20())
	{
		return;
	}
	GlobalFunc_173(&uLocal_631, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	if (GlobalFunc_10607(&uLocal_631, "BARY2AU", "BARY2_FIGHT", 6, 0, 0, 0))
	{
		iLocal_604 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000));
		if ((iLocal_605 - MISC::GET_GAME_TIMER()) < 2500)
		{
			iLocal_605 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
		}
	}
}



bool func_527(var uParam0)//Position - 0x35705
{
	return (uParam0->f_2 == 15 || uParam0->f_2 == 17);
}

void func_528()//Position - 0x35721
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_833)
	{
		func_529(iVar0);
		iVar0++;
	}
}

void func_529(int iParam0)//Position - 0x35746
{
	struct<3> Var0;
	var uVar3;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_833[iParam0 /*11*/]))
	{
		return;
	}
	if (!Local_833[iParam0 /*11*/].f_7)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_833[iParam0 /*11*/]) || PED::IS_PED_DEAD_OR_DYING(Local_833[iParam0 /*11*/], 1))
	{
		if (Local_833[iParam0 /*11*/].f_6 < 5)
		{
			if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_833[iParam0 /*11*/], iLocal_547, 0))
			{
			}
			GlobalFunc_894(&iLocal_810);
			Local_833[iParam0 /*11*/].f_8 = MISC::GET_GAME_TIMER() + 500;
			Local_833[iParam0 /*11*/].f_6 = 5;
		}
	}
	switch (Local_833[iParam0 /*11*/].f_6)
	{
		case 0:
			Local_833[iParam0 /*11*/].f_9 = (Local_833[iParam0 /*11*/].f_9 + (MISC::GET_FRAME_TIME() * 512f));
			if (Local_833[iParam0 /*11*/].f_9 < 2f)
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_833[iParam0 /*11*/], 0);
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_833[iParam0 /*11*/], 1);
				if (Local_833[iParam0 /*11*/].f_9 > 255f)
				{
					Local_833[iParam0 /*11*/].f_9 = 255f;
					ENTITY::RESET_ENTITY_ALPHA(Local_833[iParam0 /*11*/]);
					Local_833[iParam0 /*11*/].f_6 = 1;
				}
				else if (ENTITY::IS_ENTITY_ON_SCREEN(Local_833[iParam0 /*11*/]))
				{
					func_517(Local_833[iParam0 /*11*/], SYSTEM::FLOOR(Local_833[iParam0 /*11*/].f_9), &iLocal_809);
				}
				else
				{
					ENTITY::RESET_ENTITY_ALPHA(Local_833[iParam0 /*11*/]);
				}
			}
			break;
		
		case 1:
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_833[iParam0 /*11*/]))
			{
				Local_833[iParam0 /*11*/].f_6 = 4;
				if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_833[iParam0 /*11*/], iLocal_547, 0))
				{
				}
				GlobalFunc_894(&iLocal_810);
			}
			else if (func_531(iParam0))
			{
				Local_833[iParam0 /*11*/].f_6 = 2;
				GlobalFunc_894(&iLocal_810);
			}
			else
			{
				func_530(iParam0);
			}
			break;
		
		case 2:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_115(Local_833[iParam0 /*11*/]))
				{
					if (Local_833[iParam0 /*11*/].f_10)
					{
						Var0 = { 0f, -2.5f, 0f };
					}
					else
					{
						Var0 = { 0f, 1.75f, 0f };
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar3);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_833[iParam0 /*11*/], Var0), 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar3);
					TASK::CLEAR_PED_TASKS(Local_833[iParam0 /*11*/]);
					TASK::TASK_PERFORM_SEQUENCE(Local_833[iParam0 /*11*/], uVar3);
					TASK::CLEAR_SEQUENCE_TASK(&uVar3);
					Local_833[iParam0 /*11*/].f_6 = 3;
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_833[iParam0 /*11*/], Local_177[0 /*3*/], Local_177[1 /*3*/], Local_177.f_7, 0, 1, 0))
			{
				Local_833[iParam0 /*11*/].f_8 = MISC::GET_GAME_TIMER() + 500;
				Local_833[iParam0 /*11*/].f_6 = 4;
			}
			break;
		
		case 4:
			PED::EXPLODE_PED_HEAD(Local_833[iParam0 /*11*/], joaat("weapon_sniperrifle"));
			PED::APPLY_DAMAGE_TO_PED(Local_833[iParam0 /*11*/], 1000, 1);
			Local_833[iParam0 /*11*/].f_8 = MISC::GET_GAME_TIMER() + 500;
			Local_833[iParam0 /*11*/].f_6 = 5;
			break;
		
		case 5:
			if (MISC::GET_GAME_TIMER() > Local_833[iParam0 /*11*/].f_8)
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_833[iParam0 /*11*/]) || PED::IS_PED_INJURED(Local_833[iParam0 /*11*/]))
				{
					Local_833[iParam0 /*11*/].f_8 = MISC::GET_GAME_TIMER() + 500;
					Local_833[iParam0 /*11*/].f_9 = 255f;
					Local_833[iParam0 /*11*/].f_6 = 6;
				}
			}
			break;
		
		case 6:
			if (MISC::GET_GAME_TIMER() > Local_833[iParam0 /*11*/].f_8)
			{
				Local_833[iParam0 /*11*/].f_9 = (Local_833[iParam0 /*11*/].f_9 - (MISC::GET_FRAME_TIME() * 1024f));
				if (Local_833[iParam0 /*11*/].f_9 < 0f)
				{
					Local_833[iParam0 /*11*/].f_9 = 0f;
				}
				func_517(Local_833[iParam0 /*11*/], SYSTEM::FLOOR(Local_833[iParam0 /*11*/].f_9), &iLocal_809);
				if (Local_833[iParam0 /*11*/].f_9 <= 0f || !ENTITY::IS_ENTITY_ON_SCREEN(Local_833[iParam0 /*11*/]))
				{
					Local_833[iParam0 /*11*/].f_7 = 0;
					func_439(&(Local_833[iParam0 /*11*/]));
					Local_833[iParam0 /*11*/].f_6 = 7;
				}
			}
			break;
		
		case 7:
			break;
	}
}

void func_530(int iParam0)//Position - 0x35B2D
{
	if (Local_833[iParam0 /*11*/].f_1 == iLocal_807)
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_833[iParam0 /*11*/], sLocal_813, sLocal_814, 3))
		{
			TASK::TASK_PLAY_ANIM(Local_833[iParam0 /*11*/], sLocal_813, sLocal_814, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f), 0, 0, 0);
		}
	}
	else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_833[iParam0 /*11*/], sLocal_811, sLocal_812, 3))
	{
		TASK::TASK_PLAY_ANIM(Local_833[iParam0 /*11*/], sLocal_811, sLocal_812, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f), 0, 0, 0);
	}
}

int func_531(int iParam0)//Position - 0x35BC7
{
	struct<3> Var0;
	int iVar3;
	
	if (iLocal_158 == 2)
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_833[iParam0 /*11*/], 0) };
	if (Local_833[iParam0 /*11*/].f_10)
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(Var0, (5f - 1f), 1, 1))
	{
		return 1;
	}
	iVar3 = 0;
	while (iVar3 < Local_833)
	{
		if (iVar3 != iParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_833[iVar3 /*11*/]))
			{
				if (PED::IS_PED_DEAD_OR_DYING(Local_833[iVar3 /*11*/], 1) || PED::IS_PED_INJURED(Local_833[iVar3 /*11*/]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(Local_833[iVar3 /*11*/], 0), 0) < 20f)
					{
						return 1;
					}
				}
			}
		}
		iVar3++;
	}
	return 0;
}






void func_537(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x35E01
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_68499 != 6)
	{
		if (Global_68501 == -1)
		{
			if (GlobalFunc_7630(1, Param0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_20 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_21 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_20 = 0f;
				}
				else
				{
					fLocal_20 = (fLocal_20 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_20 = 0f;
			}
		}
		else
		{
			if (!GlobalFunc_7630(0, Param0))
			{
				Global_68501 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_68501);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_68499)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar12 = GlobalFunc_8315();
				if (Global_68502 == 1 && Global_68500 == 62)
				{
					iVar12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214;
				}
				switch (iVar12)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { GlobalFunc_6686(Global_68500, Global_68502, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_25 = 0.14f;
				}
				else
				{
					fLocal_25 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_25)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_21.x, (Local_21.f_1 + fLocal_24));
							Global_68504 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_68503 == 1)
				{
					GlobalFunc_53();
					fLocal_20 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_20 = 0f;
			}
		}
	}
}



















void func_556()//Position - 0x36897
{
	int iVar0;
	
	func_444();
	GlobalFunc_2361(&Local_185, 226.2213f, -848.2081f, 25.42136f, 163.9146f, -1012.38f, 54.88147f, 131.75f);
	Local_193 = { GlobalFunc_5741(Local_185, -10f) };
	Local_177 = { GlobalFunc_5741(Local_185, 20f) };
	GlobalFunc_2361(&Local_201, 168.85f, -1001.024f, 23.09129f, 225.9042f, -862.5969f, 34.09233f, 55f);
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(0);
	GlobalFunc_9158(1);
	OBJECT::_0xF92099527DB8E2A7(2047, 1);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), 0);
		uLocal_798 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
	}
	GlobalFunc_2362(0);
	GlobalFunc_7632(1);
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("extrasunny", 10f);
	PLAYER::SPECIAL_ABILITY_LOCK(GlobalFunc_4917(2));
	PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID());
	func_577();
	GlobalFunc_601(20, 1);
	GlobalFunc_601(4, 1);
	GlobalFunc_563(1);
	if (GlobalFunc_199() == 1)
	{
		Global_68490 = 1;
		iLocal_81 = 0;
		while (!func_565(&Local_95))
		{
			SYSTEM::WAIT(0);
		}
		Global_68490 = 0;
		GlobalFunc_5733(0, 0, 1, 1);
		GlobalFunc_5732(&uLocal_163, 0);
		AUDIO::SET_AMBIENT_ZONE_STATE(sLocal_796, 1, 0);
		while (!GlobalFunc_5731(&uLocal_216))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_158 = 3;
		iLocal_160 = 0;
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
		iVar0 = GlobalFunc_198();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(Local_172, fLocal_175, 0, 0);
				func_558(1);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_339))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sLocal_339, 0, 1);
				}
				break;
			
			case 1:
				GlobalFunc_4972(188.932f, -952.0983f, 29.0923f, 325.7944f, 0, 0);
				func_406();
				func_558(6);
				GlobalFunc_164("B2_PRIME", 7500, 1);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_339))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sLocal_339, 0, 1);
				}
				break;
			
			case 2:
				GlobalFunc_2350(500, 1);
				func_558(10);
				break;
			
			default:
				break;
			}
	}
	GRAPHICS::ENABLE_CLOWN_BLOOD_VFX(1);
	func_557(&uLocal_548);
}

void func_557(var uParam0)//Position - 0x36AC0
{
	*uParam0 = 2055493265;
	uParam0->f_4 = 0.12f;
	uParam0->f_5 = 0.12f;
	uParam0->f_6 = 0.1f;
	uParam0->f_7 = 0.3f;
	uParam0->f_10 = 10f;
	uParam0->f_11 = 11f;
	uParam0->f_12 = 1.25f;
	uParam0->f_13 = 2.25f;
	uParam0->f_14 = 2f;
	uParam0->f_15 = 2.5f;
	uParam0->f_16 = 25;
	uParam0->f_17 = 60;
	uParam0->f_2 = 0.2f;
}

void func_558(int iParam0)//Position - 0x36B3B
{
	func_562(1, 1);
	func_577();
	func_438();
	func_436();
	func_434();
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	}
	GlobalFunc_4923(&Local_95, 0, 1);
	func_409(&Local_95, 1, 1, 0);
	switch (iParam0)
	{
		case 0:
			AUDIO::TRIGGER_MUSIC_EVENT("RC18B_END");
			GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), Local_172);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_175);
			iLocal_162 = 0;
			break;
		
		case 1:
			if (!GlobalFunc_188())
			{
				GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), Local_172);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_175);
			}
			uLocal_806 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 188.1366f, -957.7827f, 30.6514f, -5.5067f, -8f, 92.8053f, 40f, 0, 2);
			if (CAM::DOES_CAM_EXIST(uLocal_806))
			{
				CAM::SET_CAM_ACTIVE(uLocal_806, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::SHAKE_CAM(uLocal_806, "DRUNK_SHAKE", 1065353216);
			}
			iLocal_162 = 2;
			break;
		
		case 2:
			GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), Local_172);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_175);
			iLocal_162 = 3;
			break;
		
		case 3:
			GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), 179.1285f, -961.58f, 29.0923f);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 143.3596f);
			iLocal_162 = 4;
			break;
		
		case 4:
			GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), 176.0677f, -976.4255f, 29.0923f);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 324.8268f);
			iLocal_162 = 5;
			break;
		
		case 5:
			GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), 188.0644f, -948.7751f, 29.0923f);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 329.9782f);
			iLocal_162 = 6;
			break;
		
		case 6:
			if (!GlobalFunc_188())
			{
				GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), 188.932f, -952.0983f, 29.0923f);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 325.7944f);
			}
			iLocal_162 = 7;
			break;
		
		case 7:
			GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), 213.3817f, -919.8522f, 29.6929f);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 323.943f);
			iLocal_162 = 8;
			break;
		
		case 8:
			GlobalFunc_5724(PLAYER::PLAYER_PED_ID(), 209.8298f, -912.4507f, 29.6921f);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 138.4911f);
			iLocal_162 = 9;
			break;
		
		case 9:
			iLocal_162 = 10;
			break;
		
		case 10:
			iLocal_162 = 11;
			break;
		
		case 11:
			iLocal_162 = 1;
			break;
	}
	iLocal_158 = iLocal_162;
	iLocal_160 = 0;
	if (iLocal_162 > 1 && iLocal_162 < 10)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RC18B_START");
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sLocal_343))
		{
			AUDIO::START_AUDIO_SCENE(sLocal_343);
		}
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_339, 0, 1);
		MISC::SET_TIME_SCALE(fLocal_176);
		AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("BARRY_02_SLOWMO");
		AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("BARRY_02_SLOWMO");
		AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
		AUDIO::SET_AUDIO_FLAG("AllowAmbientSpeechInSlowMo", 1);
		func_423();
	}
	GlobalFunc_5733(0, 0, 1, 1);
	GlobalFunc_4967(0, -1, 0);
	if (iLocal_162 == 11 || iLocal_162 == 2)
	{
		func_559(1, 0, 0);
	}
	else
	{
		func_559(1, 1, 1);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	GRAPHICS::ANIMPOSTFX_PLAY(sLocal_338, 0, 1);
}

void func_559(int iParam0, int iParam1, int iParam2)//Position - 0x36E78
{
	func_52(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		GlobalFunc_79(500, 0);
	}
}



void func_562(bool bParam0, bool bParam1)//Position - 0x36F84
{
	if (bParam0)
	{
		func_272(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_282(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}



int func_565(var uParam0)//Position - 0x37076
{
	int iVar0[5];
	struct<3> Var6;
	float fVar9;
	int iVar10;
	bool bVar11;
	
	Var6 = { 190.2424f, -956.479f, 29.08f };
	fVar9 = 69.171f;
	iVar0[0] = uLocal_82;
	iVar0[1] = joaat("prop_protest_table_01");
	iVar0[2] = joaat("prop_chair_08");
	iVar0[3] = joaat("p_a4_sheets_s");
	iVar0[4] = joaat("prop_protest_sign_01");
	switch (iLocal_81)
	{
		case 0:
			uParam0->f_16 = 5;
			StringCopy(&(uParam0->f_9), "BAR_3_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_27 = 0;
			uParam0->f_17[0 /*3*/] = { 190.0315f, -956.3355f, 29.09192f };
			uParam0->f_17[1 /*3*/] = { 178.0458f, -950.6594f, 31.09358f };
			uParam0->f_24 = 23f;
			iVar10 = 0;
			while (iVar10 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar10]);
				iVar10++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "rcm_barry2", "lead_in_loop", "lead_in_loop");
			iLocal_81 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_81 = 2;
			break;
		
		case 2:
			bVar11 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 49, Var6, fVar9, "RC LAUNCHER: BARRY 2", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 1, 0, 0, false);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				MISC::CLEAR_AREA_OF_OBJECTS(189.5964f, -956.0344f, 29.09179f, 2f, 0);
				GlobalFunc_5725(&(uParam0->f_41[0]), iVar0[1], 189.5964f, -956.0344f, 29.09179f, GlobalFunc_569(-2.01f));
				if (GlobalFunc_115(uParam0->f_41[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
					GlobalFunc_5725(&(uParam0->f_41[2]), iVar0[3], 189.7901f, -956.1675f, 29.8229f, GlobalFunc_569(-2.01f));
					if (GlobalFunc_115(uParam0->f_41[2]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], 1);
					}
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				GlobalFunc_5725(&(uParam0->f_41[1]), iVar0[2], 190.417f, -956.511f, 29.09179f, -99.157f);
				if (GlobalFunc_115(uParam0->f_41[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], 1);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[1], 0, 0);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (bVar11)
			{
				iLocal_81 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], 1862763509);
				ENTITY::SET_ENTITY_COORDS(uParam0->f_28[0], Var6, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_28[0], fVar9);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 1);
				TASK::TASK_PLAY_ANIM(uParam0->f_28[0], uParam0->f_48, uParam0->f_48.f_1, 8f, -8f, -1, 9, 0, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (GlobalFunc_115(uParam0->f_41[0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
			}
			if (GlobalFunc_115(uParam0->f_41[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], 1);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[1], 1, 0);
			}
			func_274(&(uParam0->f_41[3]), iVar0[4]);
			iVar10 = 0;
			while (iVar10 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar10]);
				iVar10++;
			}
			return 1;
			break;
	}
	return 0;
}












void func_577()//Position - 0x37683
{
	fLocal_583 = 40f;
	iLocal_569 = 0;
	iLocal_570 = 500;
	iLocal_571 = 2000;
	iLocal_572 = 1500;
	iLocal_573 = 3000;
	fLocal_574 = 12f;
	iLocal_575 = 5;
	iLocal_576 = 0;
	iLocal_577 = 0;
	iLocal_579 = 0;
	iLocal_584 = 0;
	iLocal_215 = 0;
	fLocal_593 = 0f;
	iLocal_581 = 0;
	iLocal_582 = 0;
	iLocal_159 = 0;
	iLocal_797 = 0;
	iLocal_799 = 0;
	iLocal_889 = 0;
	iLocal_800 = 0;
	iLocal_801 = 0;
	iLocal_805 = 0;
	iLocal_1105 = 0;
	iLocal_1106 = 0;
	iLocal_1111 = 0;
	func_579();
	func_578();
}

void func_578()//Position - 0x37709
{
	Local_817[0 /*3*/] = { 0f, 2f, 0f };
	Local_817[1 /*3*/] = { -1f, 1.75f, 0f };
	Local_817[2 /*3*/] = { 1.25f, 1.75f, 0f };
	Local_817[3 /*3*/] = { 2f, 2.25f, 0f };
	Local_817[4 /*3*/] = { -2.25f, 2.5f, 0f };
}

void func_579()//Position - 0x37760
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		Local_893[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_893[0 /*7*/] = 0;
	Local_893[0 /*7*/].f_1 = { 174.1163f, -979.6599f, 30.0923f };
	Local_893[0 /*7*/].f_4 = 341.3244f;
	Local_893[1 /*7*/] = 0;
	Local_893[1 /*7*/].f_1 = { 184.8053f, -980.3381f, 30.0923f };
	Local_893[1 /*7*/].f_4 = 50.2065f;
	Local_893[2 /*7*/] = 0;
	Local_893[2 /*7*/].f_1 = { 192.9764f, -972.7697f, 30.0923f };
	Local_893[2 /*7*/].f_4 = 32.8447f;
	Local_893[3 /*7*/] = 0;
	Local_893[3 /*7*/].f_1 = { 195.3397f, -989.392f, 30.0923f };
	Local_893[3 /*7*/].f_4 = 2.9484f;
	Local_893[4 /*7*/] = 1;
	Local_893[4 /*7*/].f_1 = { 185.1147f, -917.48f, 29.6923f };
	Local_893[4 /*7*/].f_4 = 146.3272f;
	Local_893[5 /*7*/] = 1;
	Local_893[5 /*7*/].f_1 = { 212.4505f, -945.4181f, 30.6921f };
	Local_893[5 /*7*/].f_4 = 64.489f;
	Local_893[6 /*7*/] = 1;
	Local_893[6 /*7*/].f_1 = { 209.6497f, -926.5642f, 30.6921f };
	Local_893[6 /*7*/].f_4 = 119.3868f;
	Local_893[7 /*7*/] = 1;
	Local_893[7 /*7*/].f_1 = { 197.8188f, -916.9774f, 30.6929f };
	Local_893[7 /*7*/].f_4 = 248.16f;
	Local_893[8 /*7*/] = 1;
	Local_893[8 /*7*/].f_1 = { 168.9134f, -916.1412f, 30.6921f };
	Local_893[8 /*7*/].f_4 = 245.16f;
	Local_893[8 /*7*/].f_6 = 1;
	Local_893[9 /*7*/] = 1;
	Local_893[9 /*7*/].f_1 = { 220.6332f, -952.7892f, 30.0924f };
	Local_893[9 /*7*/].f_4 = 63.294f;
	Local_893[9 /*7*/].f_6 = 1;
	Local_893[10 /*7*/] = 1;
	Local_893[10 /*7*/].f_1 = { 226.5618f, -909.9656f, 30.6922f };
	Local_893[10 /*7*/].f_4 = 119.7046f;
	Local_893[10 /*7*/].f_6 = 1;
	Local_893[11 /*7*/] = 2;
	Local_893[11 /*7*/].f_1 = { 229.2508f, -904.2552f, 30.6922f };
	Local_893[11 /*7*/].f_4 = 56.9046f;
	Local_893[12 /*7*/] = 2;
	Local_893[12 /*7*/].f_1 = { 205.4078f, -898.1343f, 30.1166f };
	Local_893[12 /*7*/].f_4 = 144.7924f;
	Local_893[13 /*7*/] = 2;
	Local_893[13 /*7*/].f_1 = { 222.5962f, -855.839f, 30.1816f };
	Local_893[13 /*7*/].f_4 = 204.4446f;
	Local_893[13 /*7*/].f_6 = 1;
	Local_893[14 /*7*/] = 2;
	Local_893[14 /*7*/].f_1 = { 182.0917f, -886.959f, 30.1164f };
	Local_893[14 /*7*/].f_4 = 236.4387f;
	Local_893[14 /*7*/].f_6 = 1;
}










void func_589()//Position - 0x37D05
{
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
	}
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::GET_PLAYER_INDEX(), 1f);
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::GET_PLAYER_INDEX(), 1f);
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_547, 0))
	{
		WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, iLocal_547);
	}
	func_39();
	func_285();
	GlobalFunc_6925(&uLocal_216);
	GlobalFunc_9158(0);
	PAD::SET_PAD_SHAKE(0, 0, 0);
	GlobalFunc_563(0);
	CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", 0f);
	func_438();
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), uLocal_798);
	}
	GlobalFunc_846(&uLocal_211);
	func_61(1);
	PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
	GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_172, 500f);
	MISC::SET_TIME_SCALE(1f);
	AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("BARRY_02_SLOWMO");
	AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
	AUDIO::SET_AUDIO_FLAG("AllowAmbientSpeechInSlowMo", 0);
	GlobalFunc_601(20, 0);
	GlobalFunc_601(4, 0);
	GlobalFunc_2362(1);
	OBJECT::_0xA2C1F5E92AFE49ED();
	GlobalFunc_7632(0);
	GlobalFunc_5733(1, 1, 0, 0);
	GlobalFunc_2363(uLocal_163);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	AUDIO::CLEAR_AMBIENT_ZONE_STATE(sLocal_796, 1);
	func_409(&Local_95, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}























