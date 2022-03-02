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
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
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
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 1;
	var uLocal_83 = 0;
	var uLocal_84 = 1;
	var uLocal_85 = 0;
	var uLocal_86 = 1;
	var uLocal_87 = 0;
	var uLocal_88 = 1;
	var uLocal_89 = 0;
	var uLocal_90 = 1;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 5;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 5;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 5;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 5;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 5;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 5;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 1;
	var uLocal_133 = 0;
	var uLocal_134 = 1;
	var uLocal_135 = 0;
	var uLocal_136 = 1;
	var uLocal_137 = 0;
	var uLocal_138 = 1;
	var uLocal_139 = 0;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	var uLocal_142 = 0;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	var uLocal_147 = 0;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	float fLocal_152 = 0f;
	float fLocal_153 = 0f;
	float fLocal_154 = 0f;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	var uLocal_161 = 1;
	var uLocal_162 = 0;
	var uLocal_163 = 1;
	var uLocal_164 = 0;
	var uLocal_165 = 1;
	var uLocal_166 = 0;
	var uLocal_167 = 5;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 5;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 5;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 1;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	int iLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 1;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 1;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 5;
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
	var uLocal_272 = 1;
	var uLocal_273 = 0;
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	var uLocal_276 = 5;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 1;
	var uLocal_286 = 0;
	var uLocal_287 = 1;
	var uLocal_288 = 0;
	var uLocal_289 = 1;
	var uLocal_290 = 0;
	var uLocal_291 = 5;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 1;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 1;
	var uLocal_303 = 0;
	char* sLocal_304 = NULL;
	char* sLocal_305 = NULL;
	char* sLocal_306 = NULL;
	char* sLocal_307 = NULL;
	char* sLocal_308 = NULL;
	char* sLocal_309 = NULL;
	char* sLocal_310 = NULL;
	char* sLocal_311 = NULL;
	struct<2> Local_312 = { 0, 0 } ;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	struct<2> Local_316 = { 0, 0 } ;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	struct<2> Local_320 = { 0, 0 } ;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	struct<2> Local_324 = { 0, 0 } ;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	struct<3> Local_330 = { 0, 0, 0 } ;
	struct<3> Local_333 = { 0, 0, 0 } ;
	struct<3> Local_336 = { 0, 0, 0 } ;
	struct<3> Local_339 = { 0, 0, 0 } ;
	struct<3> Local_342 = { 0, 0, 0 } ;
	struct<3> Local_345 = { 0, 0, 0 } ;
	struct<3> Local_348 = { 0, 0, 0 } ;
	struct<3> Local_351 = { 0, 0, 0 } ;
	struct<3> Local_354 = { 0, 0, 0 } ;
	struct<3> Local_357 = { 0, 0, 0 } ;
	struct<3> Local_360 = { 0, 0, 0 } ;
	struct<3> Local_363 = { 0, 0, 0 } ;
	struct<3> Local_366 = { 0, 0, 0 } ;
	float fLocal_369 = 0f;
	float fLocal_370 = 0f;
	float fLocal_371 = 0f;
	struct<3> Local_372 = { 0, 0, 0 } ;
	struct<3> Local_375 = { 0, 0, 0 } ;
	struct<3> Local_378 = { 0, 0, 0 } ;
	struct<3> Local_381 = { 0, 0, 0 } ;
	struct<3> Local_384 = { 0, 0, 0 } ;
	struct<3> Local_387 = { 0, 0, 0 } ;
	int iLocal_390 = 0;
	var uLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	var uLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	struct<29> Local_401 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<29> Local_430 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<29> Local_459 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<27> Local_488 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	struct<7> Local_517 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	struct<13> Local_530 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_543 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_552 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	struct<6> Local_560 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	struct<6> Local_568 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	struct<6> Local_576 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	struct<6> Local_584 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	struct<6> Local_592 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	struct<6> Local_600 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	struct<6> Local_608 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	struct<6> Local_616 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	int iLocal_624[4] = { 0, 0, 0, 0 };
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 4;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 4;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 4;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 4;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 4;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 4;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 8;
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
	int iLocal_702 = 0;
	int iLocal_703 = 0;
	struct<14> Local_704 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 3;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 16;
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
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	int iLocal_894 = 0;
	int iLocal_895 = 0;
	struct<3> Local_896 = { 0, 0, 0 } ;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	var uLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	int iLocal_918 = 0;
	int iLocal_919 = 0;
	int iLocal_920 = 0;
	int iLocal_921 = 0;
	int iLocal_922 = 0;
	int iLocal_923 = 0;
	int iLocal_924 = 0;
	int iLocal_925 = 0;
	int iLocal_926 = 0;
	int iLocal_927 = 0;
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	var uLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	struct<7> Local_934 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_941 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_948 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_955 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_962 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_969 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_976 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	float fLocal_986 = 0f;
	float fLocal_987 = 0f;
	float fLocal_988 = 0f;
	float fLocal_989 = 0f;
	float fLocal_990 = 0f;
	float fLocal_991 = 0f;
	struct<8> Local_992 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1000 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1008 = 0;
	int iLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	int iLocal_1019 = 0;
	var uLocal_1020 = 0;
	int iLocal_1021 = 0;
	int iLocal_1022 = 0;
	int iLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	int iLocal_1041 = 0;
	int iLocal_1042 = 0;
	int iLocal_1043 = 0;
	int iLocal_1044 = 0;
	int iLocal_1045 = 0;
	int iLocal_1046 = 0;
	int iLocal_1047 = 0;
	int iLocal_1048 = 0;
	int iLocal_1049 = 0;
	int iLocal_1050 = 0;
	int iLocal_1051 = 0;
	int iLocal_1052 = 0;
	int iLocal_1053 = 0;
	int iLocal_1054 = 0;
	int iLocal_1055 = 0;
	int iLocal_1056 = 0;
	int iLocal_1057 = 0;
	int iLocal_1058 = 0;
	int iLocal_1059 = 0;
	int iLocal_1060 = 0;
	int iLocal_1061 = 0;
	int iLocal_1062 = 0;
	int iLocal_1063 = 0;
	int iLocal_1064 = 0;
	int iLocal_1065 = 0;
	int iLocal_1066[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1084 = 12;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 13;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 2;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	struct<13> Local_1114[3];
	struct<13> Local_1154[3];
	struct<13> Local_1194[6];
	struct<18> Local_1273[3];
	struct<18> Local_1328[1];
	struct<18> Local_1347[3];
	struct<18> Local_1402[2];
	struct<18> Local_1439[1];
	struct<18> Local_1458[2];
	struct<18> Local_1495[4];
	struct<18> Local_1568[2];
	struct<18> Local_1605[6];
	struct<18> Local_1714[1];
	struct<18> Local_1733[1];
	struct<18> Local_1752[1];
	struct<18> Local_1771[1];
	struct<18> Local_1790[2];
	struct<18> Local_1827[1];
	struct<18> Local_1846[1];
	struct<18> Local_1865[2];
	struct<18> Local_1902[1];
	struct<18> Local_1921[1];
	struct<18> Local_1940[2];
	var uLocal_1977 = 6;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	struct<13> Local_2086[5];
	struct<13> Local_2152[4];
	struct<18> Local_2205[4];
	struct<29> Local_2278[2];
	struct<29> Local_2337[2];
	struct<29> Local_2396[2];
	struct<29> Local_2455[2];
	struct<29> Local_2514[2];
	struct<29> Local_2573[2];
	struct<29> Local_2632[2];
	struct<29> Local_2691[2];
	struct<29> Local_2750[2];
	var uLocal_2809 = 2;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	struct<8> Local_2868 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	struct<13> Local_2881[5];
	struct<13> Local_2947[5];
	struct<13> Local_3013[1];
	struct<36> Local_3027[2];
	struct<36> Local_3100[2];
	struct<8> Local_3173[9];
	struct<12> Local_3246[63];
	struct<3> Local_4003[13];
	int iLocal_4043[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<29> Local_4080[3];
	struct<13> Local_4168[3];
	struct<29> Local_4208[5];
	struct<29> Local_4354[3];
	struct<8> Local_4442 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	int iLocal_4455[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_4486 = 0;
	int iLocal_4487 = 0;
	int iLocal_4488 = 0;
	int iLocal_4489 = 0;
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
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_51 = 1;
	iLocal_58 = 1;
	iLocal_80 = 1;
	fLocal_140 = 120f;
	fLocal_141 = 0f;
	fLocal_143 = 1f;
	fLocal_144 = 0f;
	fLocal_145 = 1f;
	fLocal_146 = 30f;
	fLocal_148 = 1f;
	fLocal_149 = 5f;
	fLocal_150 = 1f;
	fLocal_151 = 1f;
	fLocal_152 = 100f;
	fLocal_153 = 100f;
	fLocal_154 = 0f;
	fLocal_155 = 7000f;
	fLocal_156 = 0f;
	fLocal_157 = 0f;
	fLocal_158 = 0.3f;
	fLocal_159 = 0.5f;
	fLocal_160 = 50f;
	iLocal_190 = -1;
	iLocal_198 = -1;
	iLocal_199 = -1;
	sLocal_304 = "BALLA1";
	sLocal_305 = "BALLA2";
	sLocal_306 = "BALLA3";
	sLocal_307 = "BALLA4";
	sLocal_308 = "BALLA5";
	sLocal_309 = "BALLA6";
	sLocal_310 = "BALLA7";
	sLocal_311 = "fraone";
	StringCopy(&Local_312, "FRA1_FLAMAR", 16);
	StringCopy(&Local_316, "FRA1_GTLAMH", 16);
	StringCopy(&Local_320, "FRA1_GTTREH", 16);
	StringCopy(&Local_324, "FRA1_GTFRAH", 16);
	iLocal_328 = joaat("g_m_y_ballaorig_01");
	iLocal_329 = joaat("s_m_y_cop_01");
	Local_330 = { 96.973f, -1946.51f, 19.75f };
	Local_333 = { 102.61f, -1956.37f, 19.73f };
	Local_336 = { -34.22f, -1822.98f, 25.23f };
	Local_339 = { -25.93f, -1848.77f, 24.59f };
	Local_342 = { 86.163f, -1958.071f, 19.96f };
	Local_345 = { 0f, 0f, -8.28f };
	Local_348 = { 85.213f, -1958.021f, 19.96f };
	Local_351 = { 0f, 0f, 39.24f };
	Local_354 = { -56.96f, -1463.14f, 31.1f };
	Local_357 = { -12.5528f, -1460.213f, 29.559f };
	Local_360 = { 135.3672f, -1308.849f, 27.9842f };
	Local_363 = { 84.195f, -1946.649f, 20.1688f };
	Local_366 = { 78.1228f, -1942.162f, 19.8513f };
	fLocal_369 = 299.8389f;
	fLocal_370 = 22000f;
	fLocal_371 = 15500f;
	Local_372 = { -125.891f, -1857.574f, 0.455f };
	Local_375 = { 0f, 0f, 60f };
	Local_378 = { 0.9f, 1.5f, -0.4f };
	Local_381 = { 0.9f, -1.5f, -0.4f };
	Local_384 = { 0.9f, 1.1f, 0.2f };
	Local_387 = { 0.9f, -1.5f, 0.2f };
	StringCopy(&Local_896, "", 24);
	iLocal_927 = 1;
	iLocal_933 = 1;
	iLocal_1042 = -1;
	iLocal_1043 = -1;
	iLocal_1044 = -1;
	iLocal_1045 = -1;
	iLocal_1049 = 1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_5822(func_908(1), 1);
		GlobalFunc_5822(func_908(2), 2);
		GlobalFunc_10632();
		func_902();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_199())
	{
		func_899(&iLocal_390, GlobalFunc_198());
		iLocal_395 = GlobalFunc_2284(1);
		iLocal_396 = GlobalFunc_2284(2);
		iLocal_915 = 1;
		if (Global_84544 == 1)
		{
			iLocal_390 = func_897(iLocal_390);
		}
	}
	else
	{
		func_861(0, "DRIVE TO DEAL", 0, 0, 0, 1);
	}
	if (GlobalFunc_2(0))
	{
		if (!GlobalFunc_199())
		{
			iLocal_390 = 0;
			iLocal_915 = 1;
		}
	}
	while (true)
	{
		if (iLocal_702 == 1)
		{
			func_822(&iLocal_624, &uLocal_668);
		}
		if (iLocal_916 == 1)
		{
			func_816(&iLocal_390, &uLocal_391);
		}
		RECORDING::_0x208784099002BC30("M_HoodSafari", 0);
		if (iLocal_1065 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		switch (iLocal_390)
		{
			case 0:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
				if (func_781(iLocal_390, &iLocal_912, &iLocal_916, &uLocal_914, &iLocal_915))
				{
					if (func_690(&iLocal_913))
					{
						func_689();
						iLocal_390 = 1;
					}
				}
				break;
			
			case 1:
				if (func_781(iLocal_390, &iLocal_912, &iLocal_916, &uLocal_914, &iLocal_915))
				{
					if (func_666(&iLocal_913))
					{
						func_689();
						iLocal_390 = 2;
					}
				}
				break;
			
			case 2:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_781(iLocal_390, &iLocal_912, &iLocal_916, &uLocal_914, &iLocal_915))
				{
					if (func_648(&iLocal_913))
					{
						func_689();
						iLocal_390 = 3;
					}
				}
				break;
			
			case 3:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_781(iLocal_390, &iLocal_912, &iLocal_916, &uLocal_914, &iLocal_915))
				{
					if (func_586(&iLocal_913))
					{
						func_689();
						iLocal_390 = 5;
					}
				}
				break;
			
			case 4:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_781(iLocal_390, &iLocal_912, &iLocal_916, &uLocal_914, &iLocal_915))
				{
					if (func_228(&iLocal_913))
					{
						func_689();
						iLocal_390 = 5;
					}
				}
				break;
			
			case 5:
				if (func_781(iLocal_390, &iLocal_912, &iLocal_916, &uLocal_914, &iLocal_915))
				{
					if (func_195(&iLocal_913))
					{
						func_689();
						iLocal_390 = 6;
					}
				}
				break;
			
			case 6:
				if (func_781(iLocal_390, &iLocal_912, &iLocal_916, &uLocal_914, &iLocal_915))
				{
					if (func_33(&iLocal_913))
					{
						func_689();
						switch (iLocal_392)
						{
							case 3:
								iLocal_390 = 7;
								break;
							
							case 2:
								iLocal_390 = 8;
								break;
							
							case 1:
								iLocal_390 = 9;
								break;
							
							case 0:
								iLocal_390 = 11;
								break;
							}
						}
				}
				break;
			
			case 7:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				}
				if (func_781(iLocal_390, &iLocal_912, &iLocal_916, &uLocal_914, &iLocal_915))
				{
					if (func_30(&iLocal_913))
					{
						func_689();
						iLocal_390 = 11;
					}
				}
				break;
			
			case 8:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				}
				if (func_781(iLocal_390, &iLocal_912, &iLocal_916, &uLocal_914, &iLocal_915))
				{
					if (func_29(&iLocal_913))
					{
						func_689();
						iLocal_390 = 11;
					}
				}
				break;
			
			case 9:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				}
				if (func_781(iLocal_390, &iLocal_912, &iLocal_916, &uLocal_914, &iLocal_915))
				{
					if (func_25(&iLocal_913))
					{
						func_689();
						iLocal_390 = 11;
					}
				}
				break;
			
			case 10:
				if (func_781(iLocal_390, &iLocal_912, &iLocal_916, &uLocal_914, &iLocal_915))
				{
					if (func_23(&iLocal_913))
					{
						func_689();
						iLocal_390 = 11;
					}
				}
				break;
			
			case 11:
				switch (iLocal_392)
				{
					case 0:
					case 3:
						Global_89490 = 0;
						break;
					
					case 2:
						Global_89490 = 1;
						break;
					
					case 1:
						Global_89490 = 2;
						break;
				}
				GlobalFunc_5103(0, 0);
				func_902();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
			
			case 12:
				GlobalFunc_5822(func_908(1), 1);
				GlobalFunc_5822(func_908(2), 2);
				func_4(&uLocal_391);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				GlobalFunc_4935();
				AUDIO::TRIGGER_MUSIC_EVENT("FRA1_MISSION_FAIL");
				while (!GlobalFunc_145())
				{
					SYSTEM::WAIT(0);
				}
				func_902();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
		}
		SYSTEM::WAIT(0);
	}
}




void func_4(var uParam0)//Position - 0x7B3
{
	switch (*uParam0)
	{
		case 1:
			GlobalFunc_10835("FRA1_DBLOW");
			break;
		
		case 2:
			GlobalFunc_10835("FRA1_VDEST");
			break;
		
		case 3:
			GlobalFunc_10835("FRA1_VUND");
			break;
		
		case 6:
			GlobalFunc_10835("FRA1_LDIED");
			break;
		
		case 7:
			GlobalFunc_10835("FRA1_LLEFT");
			break;
		
		case 8:
			GlobalFunc_10835("CMN_TDIED");
			break;
		
		case 9:
			GlobalFunc_10835("CMN_TLEFT");
			break;
		
		case 10:
			GlobalFunc_10835("CMN_FDIED");
			break;
		
		case 11:
			GlobalFunc_10835("CMN_FLEFT");
			break;
		
		case 12:
			GlobalFunc_10835("FRA1_CDIED");
			break;
		
		case 13:
			GlobalFunc_10835("FRA1_CDROW");
			break;
		
		case 5:
			switch (GlobalFunc_8315())
			{
				case 1:
					GlobalFunc_10835("FRA1_FLB");
					break;
				
				case 2:
					GlobalFunc_10835("FRA1_TLB");
					break;
			}
			break;
		
		case 4:
			switch (GlobalFunc_8315())
			{
				case 1:
					GlobalFunc_10835("FRA1_FAB");
					break;
				
				case 2:
					GlobalFunc_10835("FRA1_TAB");
					break;
			}
			break;
		
		case 14:
			GlobalFunc_10835("FRA1_SDEST");
			break;
		
		case 15:
			GlobalFunc_10835("FRA1_SUND");
			break;
		
		case 16:
			GlobalFunc_10835("FRA1_FAIL");
			break;
	}
}



















int func_23(int iParam0)//Position - 0x1A0C
{
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), Local_459.f_3, Local_459.f_6, 0, 0, 0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_459.f_3, -1, 0, 0f, 1, 1, iLocal_1058, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				SYSTEM::WAIT(500);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((125.12f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(5f, 1065353216);
				*iParam0++;
			}
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			*iParam0++;
			break;
		
		case 2:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				return 1;
			}
			break;
	}
	return 0;
}


int func_25(int iParam0)//Position - 0x1B36
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_2520();
	}
	if (RECORDING::_IS_RECORDING())
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	}
	switch (*iParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(Local_608.f_1);
			STREAMING::REQUEST_ANIM_DICT("misstimelapse@franklinold_home");
			if (STREAMING::HAS_MODEL_LOADED(Local_608.f_1) && STREAMING::HAS_ANIM_DICT_LOADED("misstimelapse@franklinold_home"))
			{
				*iParam0++;
			}
			break;
		
		case 1:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1045))
			{
				FIRE::STOP_FIRE_IN_RANGE(-14.862f, -1441.208f, 31.18f, 20f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(-14.862f, -1441.208f, 31.18f, 20f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-14.862f, -1441.208f, 31.18f, 20f);
				MISC::CLEAR_AREA_OF_PEDS(-14.862f, -1441.208f, 31.18f, 10f, 0);
				MISC::CLEAR_AREA_OF_COPS(-14.862f, -1441.208f, 31.18f, 1000f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-14.862f, -1441.208f, 31.18f, 10f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(-14.862f, -1441.208f, 31.18f, 100f, 0);
				iLocal_1045 = PED::CREATE_SYNCHRONIZED_SCENE(-14.862f, -1441.208f, 31.18f, 0f, 0f, 180f, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1045, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_908(1));
				WEAPON::SET_CURRENT_PED_WEAPON(func_908(1), joaat("weapon_unarmed"), 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(func_908(1), 1);
				PED::SET_FORCE_FOOTSTEP_UPDATE(func_908(1), 1);
				TASK::TASK_SYNCHRONIZED_SCENE(func_908(1), iLocal_1045, "misstimelapse@franklinold_home", "franklin_enters_old_home", 1000f, -1000f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_908(1), 0, 0);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(613961892))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(613961892, 1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(613961892, 1, 0, 1);
				}
				ENTITY::CREATE_MODEL_HIDE(Local_608.f_2, 1f, Local_608.f_1, 0);
				Local_608 = OBJECT::CREATE_OBJECT(Local_608.f_1, Local_608.f_2, 1, 1, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_608, iLocal_1045, "franklin_enters_old_home_door", "misstimelapse@franklinold_home", 1000f, -1000f, 0, 1148846080);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_608);
				CAM::DESTROY_ALL_CAMS(0);
				uLocal_1020 = CAM::CREATE_CAMERA(964613260, 1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1020, iLocal_1045, "franklin_enters_old_home_cam_fra1", "misstimelapse@franklinold_home");
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_608.f_1);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1045))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -14.23011f, -1445.7f, 31.64616f, 4f, 4f, 3f, 0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
						}
						GlobalFunc_2882(PLAYER::GET_PLAYERS_LAST_VEHICLE());
						MISC::CLEAR_AREA(-19.1293f, -1455.206f, 29.5073f, 5f, 1, 0, 0, 0);
						ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -19.1293f, -1455.206f, 29.5073f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 94.6991f);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
						VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 1);
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.23011f, -1445.7f, 31.64616f, 4f, 4f, 3f, 0, 1, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -13.9699f, -1455.114f, 29.96629f, 1.25f, 1.25f, 1.5f, 0, 1, 0))
							{
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
								}
								GlobalFunc_2882(PLAYER::GET_PLAYERS_LAST_VEHICLE());
								MISC::CLEAR_AREA(-19.1293f, -1455.206f, 29.5073f, 5f, 1, 0, 0, 0);
								ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -19.1293f, -1455.206f, 29.5073f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 94.6991f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
								VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 1);
							}
						}
						MISC::CLEAR_AREA(-13.908f, -1455.103f, 29.4679f, 5f, 1, 0, 0, 0);
						GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), -13.908f, -1455.103f, 29.4679f, 359.4438f, 0, 0, 0);
					}
				}
				*iParam0++;
			}
			break;
		
		case 3:
			if (CAM::DOES_CAM_EXIST(uLocal_1020))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1045))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1045) >= 0.99f)
					{
						HUD::DISPLAY_HUD(1);
						HUD::DISPLAY_RADAR(1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::DESTROY_ALL_CAMS(0);
						CAM::DESTROY_CAM(uLocal_1020, 0);
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						STREAMING::REMOVE_ANIM_DICT("misstimelapse@franklinold_home");
						if (ENTITY::DOES_ENTITY_EXIST(Local_459))
						{
							PED::DELETE_PED(&Local_459);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_608))
						{
							OBJECT::DELETE_OBJECT(&Local_608);
							ENTITY::REMOVE_MODEL_HIDE(Local_608.f_2, 1f, Local_608.f_1, 0);
						}
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(613961892))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(613961892, 0f, 0, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(613961892, 4, 0, 1);
						}
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						}
						GlobalFunc_5168(2, 5, 0);
						iLocal_392 = 1;
						*iParam0++;
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1045) >= 0.925f)
					{
						if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4) || (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4))
						{
							if (iLocal_1063 == 0)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_1063 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("CamPushInNeutral"))
			{
				return 1;
			}
			break;
	}
	return 0;
}




int func_29(int iParam0)//Position - 0x227D
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_2520();
	}
	if (RECORDING::_IS_RECORDING())
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	}
	switch (*iParam0)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfra1enter_club");
			STREAMING::REQUEST_MODEL(Local_616.f_1);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_616.f_2));
			if ((STREAMING::HAS_ANIM_DICT_LOADED("missfra1enter_club") && STREAMING::HAS_MODEL_LOADED(Local_616.f_1)) && INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_616.f_2)))
			{
				*iParam0++;
			}
			break;
		
		case 1:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1044))
			{
				FIRE::STOP_FIRE_IN_RANGE(Local_616.f_2, 20f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_616.f_2, 20f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_616.f_2, 20f);
				MISC::CLEAR_AREA_OF_PEDS(Local_616.f_2, 10f, 0);
				MISC::CLEAR_AREA_OF_COPS(Local_616.f_2, 1000f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_616.f_2, 10f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_616.f_2, 10f, 0);
				iLocal_1044 = PED::CREATE_SYNCHRONIZED_SCENE(Local_616.f_2, 0f, 0f, 29f, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1044, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_908(2));
				WEAPON::SET_CURRENT_PED_WEAPON(func_908(2), joaat("weapon_unarmed"), 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(func_908(2), 1);
				PED::SET_FORCE_FOOTSTEP_UPDATE(func_908(2), 1);
				TASK::TASK_SYNCHRONIZED_SCENE(func_908(2), iLocal_1044, "missfra1enter_club", "trevor_enter_club", 1000f, -1000f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_908(2), 0, 0);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1840510598))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1840510598, 1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1840510598, 1, 0, 1);
				}
				ENTITY::CREATE_MODEL_HIDE(Local_616.f_2, 1f, Local_616.f_1, 0);
				Local_616 = OBJECT::CREATE_OBJECT(Local_616.f_1, Local_616.f_2, 1, 1, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_616, iLocal_1044, "trevor_enter_club_door", "missfra1enter_club", 1000f, -1000f, 0, 1148846080);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_616);
				CAM::DESTROY_ALL_CAMS(0);
				uLocal_1020 = CAM::CREATE_CAMERA(964613260, 1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1020, iLocal_1044, "trevor_enter_club_cam", "missfra1enter_club");
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_616.f_1);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1044))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 128.6192f, -1298.314f, 27.23268f, 132.4607f, -1305.097f, 32.19394f, 6f, 0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
						}
						GlobalFunc_2882(PLAYER::GET_PLAYERS_LAST_VEHICLE());
						MISC::CLEAR_AREA(136.4794f, -1307.488f, 27.9153f, 5f, 1, 0, 0, 0);
						ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 136.4794f, -1307.488f, 27.9153f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 300.491f);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
						VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 1);
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 128.6192f, -1298.314f, 27.23268f, 132.4607f, -1305.097f, 32.19394f, 6f, 0, 1, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 137.7774f, -1310.893f, 28.58173f, 1.25f, 1.25f, 1.5f, 0, 1, 0))
							{
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
								}
								GlobalFunc_2882(PLAYER::GET_PLAYERS_LAST_VEHICLE());
								MISC::CLEAR_AREA(136.4794f, -1307.488f, 27.9153f, 5f, 1, 0, 0, 0);
								ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 136.4794f, -1307.488f, 27.9153f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 300.491f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
								VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 1);
							}
						}
						MISC::CLEAR_AREA(137.7463f, -1310.918f, 28.0845f, 5f, 1, 0, 0, 0);
						GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), 137.7463f, -1310.918f, 28.0845f, 245.5865f, 0, 0, 0);
					}
				}
				*iParam0++;
			}
			break;
		
		case 3:
			if (CAM::DOES_CAM_EXIST(uLocal_1020))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1044))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1044) >= 0.99f)
					{
						HUD::DISPLAY_HUD(1);
						HUD::DISPLAY_RADAR(1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::DESTROY_ALL_CAMS(0);
						CAM::DESTROY_CAM(uLocal_1020, 0);
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						STREAMING::REMOVE_ANIM_DICT("missfra1enter_club");
						if (ENTITY::DOES_ENTITY_EXIST(Local_430))
						{
							PED::DELETE_PED(&Local_430);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_616))
						{
							OBJECT::DELETE_OBJECT(&Local_616);
							ENTITY::REMOVE_MODEL_HIDE(Local_616.f_2, 1f, Local_616.f_1, 0);
						}
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1840510598))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1840510598, 0f, 0, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1840510598, 4, 0, 1);
						}
						INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Local_616.f_2));
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						}
						iLocal_392 = 2;
						*iParam0++;
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1044) >= 0.91f)
					{
						if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4) || (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4))
						{
							if (iLocal_1063 == 0)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_1063 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("CamPushInNeutral"))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x2898
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_2520();
	}
	if (RECORDING::_IS_RECORDING())
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	}
	switch (*iParam0)
	{
		case 0:
			if (!CAM::DOES_CAM_EXIST(uLocal_1020))
			{
				FIRE::STOP_FIRE_IN_RANGE(-64.65f, -1451.78f, 31.12f, 20f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(-64.65f, -1451.78f, 31.12f, 20f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-64.65f, -1451.78f, 31.12f, 20f);
				MISC::CLEAR_AREA_OF_PEDS(-64.65f, -1451.78f, 31.12f, 10f, 0);
				MISC::CLEAR_AREA_OF_COPS(-64.65f, -1451.78f, 31.12f, 1000f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-64.65f, -1451.78f, 31.12f, 10f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(-64.65f, -1451.78f, 31.12f, 10f, 0);
				uLocal_1020 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(uLocal_1020, -68.5752f, -1461.095f, 33.27922f, -4.170227f, -0.026384f, -32.34303f, 44.88851f, 0, 1, 1, 2);
				CAM::SHAKE_CAM(uLocal_1020, "HAND_SHAKE", 0.125f);
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			*iParam0++;
			break;
		
		case 1:
			if (CAM::DOES_CAM_EXIST(uLocal_1020))
			{
				if (CAM::IS_CAM_RENDERING(uLocal_1020))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_SHUT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -63.82235f, -1455.468f, 33.1147f, 4f, 5f, 3f, 0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
							}
							GlobalFunc_2882(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							MISC::CLEAR_AREA(-53.1256f, -1457.981f, 30.9968f, 5f, 1, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -53.1256f, -1457.981f, 30.9968f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 276.0446f);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 1);
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -63.82235f, -1455.468f, 33.1147f, 4f, 5f, 3f, 0, 1, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -64.58475f, -1461.102f, 31.4941f, 1.25f, 1.25f, 1.5f, 0, 1, 0))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
									}
									GlobalFunc_2882(PLAYER::GET_PLAYERS_LAST_VEHICLE());
									MISC::CLEAR_AREA(-53.1256f, -1457.981f, 30.9968f, 5f, 1, 0, 0, 0);
									ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -53.1256f, -1457.981f, 30.9968f, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 276.0446f);
									VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
									VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 1);
								}
							}
							MISC::CLEAR_AREA(-64.4999f, -1461.211f, 30.9891f, 5f, 1, 0, 0, 0);
							GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), -64.4999f, -1461.211f, 30.9891f, 244.9519f, 0, 0, 0);
						}
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					if (!PED::IS_PED_INJURED(Local_401))
					{
						if (PED::IS_PED_GROUP_MEMBER(Local_401, GlobalFunc_468()))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_401);
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_401);
						GlobalFunc_2901(Local_401, -62.8937f, -1460.667f, 31.1184f, 13.649f, 0, 0, 0);
						PED::FORCE_PED_MOTION_STATE(Local_401, -668482597, 0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_401, -64.65f, -1451.78f, 31.12f, 1f, 60000, 0.25f, 0, 1193033728);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_401, 1);
					}
					Local_401.f_8 = MISC::GET_GAME_TIMER();
					*iParam0++;
				}
			}
			break;
		
		case 2:
			if (CAM::DOES_CAM_EXIST(uLocal_1020))
			{
				if (CAM::IS_CAM_RENDERING(uLocal_1020))
				{
					if (GlobalFunc_2521(7000, Local_401.f_8))
					{
						HUD::DISPLAY_HUD(1);
						HUD::DISPLAY_RADAR(1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::DESTROY_ALL_CAMS(0);
						CAM::DESTROY_CAM(uLocal_1020, 0);
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_401))
						{
							PED::DELETE_PED(&Local_401);
						}
						iLocal_392 = 3;
						*iParam0++;
					}
					else if (GlobalFunc_2521(6700, Local_401.f_8))
					{
						if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4) || (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4))
						{
							if (iLocal_1063 == 0)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_1063 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("CamPushInNeutral"))
			{
				return 1;
			}
			break;
	}
	return 0;
}



int func_33(int iParam0)//Position - 0x2DDC
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_179();
	func_136(&iLocal_1028);
	func_134(&Local_401, &(Local_1114[Local_401.f_28 /*13*/]), PLAYER::PLAYER_PED_ID());
	switch (GlobalFunc_8315())
	{
		case 1:
			func_133(PLAYER::PLAYER_PED_ID(), &Local_459, &(Local_1114[Local_459.f_28 /*13*/]), &(Local_1114[Local_401.f_28 /*13*/]));
			func_123(func_132(), &Local_430, &(Local_1114[Local_430.f_28 /*13*/]), PLAYER::PLAYER_PED_ID(), &(Local_1114[Local_401.f_28 /*13*/]), 1);
			break;
		
		case 2:
			func_133(PLAYER::PLAYER_PED_ID(), &Local_459, &(Local_1114[Local_430.f_28 /*13*/]), &(Local_1114[Local_401.f_28 /*13*/]));
			func_123(func_132(), &Local_430, &(Local_1114[Local_459.f_28 /*13*/]), PLAYER::PLAYER_PED_ID(), &(Local_1114[Local_401.f_28 /*13*/]), 1);
			break;
	}
	if (iLocal_1031 == 1)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
	}
	func_122(&(Local_2278[0 /*29*/]));
	func_121(&(Local_2947[0 /*13*/]), &Local_2337, Local_1114[Local_401.f_28 /*13*/].f_9);
	func_120(&(Local_2947[1 /*13*/]), &Local_2396, Local_1114[Local_401.f_28 /*13*/].f_9);
	func_119(&(Local_2947[2 /*13*/]), &Local_2455, Local_1114[Local_401.f_28 /*13*/].f_9);
	func_118(&(Local_2947[3 /*13*/]), &Local_2514, Local_1114[Local_401.f_28 /*13*/].f_9);
	func_117(&(Local_2947[4 /*13*/]), &Local_2573, Local_1114[Local_401.f_28 /*13*/].f_9);
	func_114(&(Local_3013[0 /*13*/]), &uLocal_2809, Local_1114[Local_401.f_28 /*13*/].f_9);
	func_107(&(Local_4354[0 /*29*/]), Local_1114[Local_401.f_28 /*13*/].f_9, Local_1114[Local_401.f_28 /*13*/].f_8);
	switch (iLocal_392)
	{
		case 3:
			func_105(&Local_316);
			if (iLocal_1031 == 0 && !GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_401.f_1))
				{
					Local_401.f_1 = GlobalFunc_7491(Local_401, 0, 145);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_401.f_1))
			{
				HUD::REMOVE_BLIP(&(Local_401.f_1));
			}
			break;
		
		case 1:
			func_105(&Local_324);
			if (iLocal_1031 == 0 && !GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), func_908(1)))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_459.f_1))
				{
					Local_459.f_1 = GlobalFunc_7491(func_908(1), 0, 145);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_459.f_1))
			{
				HUD::REMOVE_BLIP(&(Local_459.f_1));
			}
			break;
		
		case 2:
			func_105(&Local_320);
			if (iLocal_1031 == 0 && !GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), func_908(2)))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_430.f_1))
				{
					Local_430.f_1 = GlobalFunc_7491(func_908(2), 0, 145);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_430.f_1))
			{
				HUD::REMOVE_BLIP(&(Local_430.f_1));
			}
			break;
	}
	switch (*iParam0)
	{
		case 0:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!func_102("LOSE_WANTED"))
					{
						if (func_102("F1_SRCLEAR"))
						{
							if (iLocal_703 == 1)
							{
								if (CAM::IS_SCREEN_FADED_IN())
								{
									func_97("LOSE_WANTED", 7500, 1);
									iVar0 = 0;
									while (iVar0 < 3)
									{
										if (HUD::DOES_BLIP_EXIST(Local_1114[iVar0 /*13*/].f_1))
										{
											HUD::REMOVE_BLIP(&(Local_1114[iVar0 /*13*/].f_1));
										}
										iVar0++;
									}
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_JETSKI_SPLIT_UP"))
									{
										AUDIO::START_AUDIO_SCENE("FRANKLIN_1_JETSKI_SPLIT_UP");
									}
									func_96(0, 15f, 1061158912);
									GlobalFunc_574(358, 0);
									iLocal_392 = 0;
									iLocal_1031 = 0;
								}
							}
						}
					}
					switch (iLocal_392)
					{
						case 1:
							iLocal_1066[11] = 1;
							if (!func_102("FRA1_ECFRA"))
							{
								if (func_102("F1_LCFJT"))
								{
									if (!GlobalFunc_5172(&Local_704, 2))
									{
										func_97("FRA1_ECFRA", 7500, 1);
									}
								}
							}
							if (!func_102("CMN_FLEAVE"))
							{
								if (Local_430.f_13 > 50f)
								{
									func_97("CMN_FLEAVE", 7500, 1);
								}
							}
							break;
						
						case 2:
							iLocal_1066[9] = 1;
							if (!func_102("FRA1_ECTRE"))
							{
								if (func_102("F1_LCTJF"))
								{
									if (!GlobalFunc_5172(&Local_704, 2))
									{
										func_97("FRA1_ECTRE", 7500, 1);
										func_86(1);
									}
								}
							}
							if (!func_102("CMN_TLEAVE"))
							{
								if (Local_430.f_13 > 50f)
								{
									func_97("CMN_TLEAVE", 7500, 1);
								}
							}
							break;
						
						case 3:
							iLocal_1066[7] = 1;
							if (!func_102("FRA1_ECLAM"))
							{
								if (func_102("F1_LCLJFR") || func_102("F1_LCLJTR"))
								{
									if (!GlobalFunc_5172(&Local_704, 2))
									{
										func_97("FRA1_ECLAM", 7500, 1);
									}
								}
							}
							if (!func_102("CMN_LLEAVE"))
							{
								if (Local_401.f_13 > 50f)
								{
									func_97("CMN_LLEAVE", 7500, 1);
								}
							}
							break;
					}
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FRA1_STOP_TRACK");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_JETSKI_SPLIT_UP"))
					{
						AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_JETSKI_SPLIT_UP");
					}
					GlobalFunc_571(0, -1);
					GlobalFunc_1998(0);
					iLocal_1031 = 1;
					*iParam0++;
				}
			}
			break;
		
		case 1:
			switch (iLocal_392)
			{
				case 1:
				case 2:
				case 3:
					*iParam0++;
					break;
				
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iLocal_392)
			{
				case 1:
					if (func_102("F1_LCFCL"))
					{
						func_40(&Local_704, Local_357, GlobalFunc_716(), 1, func_908(1), &Local_324, "CMN_FLEAVE", 0, 1, 1, -1);
						if (HUD::DOES_BLIP_EXIST(Local_704.f_5))
						{
							if (GlobalFunc_1976(func_908(1), func_908(2)))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_908(2), -20.48883f, -1459.062f, 28.607f, -11.65812f, -1458.321f, 32.4862f, 8f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_908(1), -20.48883f, -1459.062f, 28.607f, -11.65812f, -1458.321f, 32.4862f, 8f, 0, 1, 0))
								{
									if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
									{
										func_35(&Local_704, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_1030 = 1;
										*iParam0++;
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(func_908(2), -18.03587f, -1457.588f, 31.47248f, 10f, 10f, 3f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(func_908(1), -18.03587f, -1457.588f, 31.47248f, 10f, 10f, 3f, 0, 1, 0))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
									{
										func_35(&Local_704, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_1030 = 1;
										*iParam0++;
									}
								}
								else
								{
									func_35(&Local_704, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_1030 = 1;
									*iParam0++;
								}
							}
						}
					}
					break;
				
				case 2:
					if (func_102("F1_LCTCL"))
					{
						func_40(&Local_704, Local_360, GlobalFunc_716(), 1, func_908(2), &Local_320, "CMN_TLEAVE", 0, 1, 1, -1);
						if (HUD::DOES_BLIP_EXIST(Local_704.f_5))
						{
							if (GlobalFunc_1976(func_908(1), func_908(2)))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_908(2), 130.3028f, -1311.455f, 26.95323f, 143.6308f, -1303.39f, 30.95057f, 8f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_908(1), 130.3028f, -1311.455f, 26.95323f, 143.6308f, -1303.39f, 30.95057f, 8f, 0, 1, 0))
								{
									if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
									{
										func_35(&Local_704, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_1030 = 1;
										*iParam0++;
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(func_908(2), 135.9626f, -1306.711f, 29.99781f, 8f, 8f, 3f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(func_908(1), 135.9626f, -1306.711f, 29.99781f, 8f, 8f, 3f, 0, 1, 0))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
									{
										func_35(&Local_704, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_1030 = 1;
										*iParam0++;
									}
								}
								else
								{
									func_35(&Local_704, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_1030 = 1;
									*iParam0++;
								}
							}
						}
					}
					break;
				
				case 3:
					if (func_102("F1_LCLCL"))
					{
						func_40(&Local_704, Local_354, GlobalFunc_716(), 1, Local_401, &Local_316, "CMN_LLEAVE", 0, 1, 1, -1);
						if (HUD::DOES_BLIP_EXIST(Local_704.f_5))
						{
							if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -61.23481f, -1464.39f, 30.09423f, -50.74086f, -1462.936f, 32.90931f, 8f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_401, -61.23481f, -1464.39f, 30.09423f, -50.74086f, -1462.936f, 32.90931f, 8f, 0, 1, 0))
								{
									if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
									{
										func_35(&Local_704, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_1030 = 1;
										*iParam0++;
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -58.46266f, -1461.084f, 32.95813f, 8f, 8f, 3f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_401, -58.46266f, -1461.084f, 32.95813f, 8f, 8f, 3f, 0, 1, 0))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
									{
										func_35(&Local_704, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_1030 = 1;
										*iParam0++;
									}
								}
								else
								{
									func_35(&Local_704, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_1030 = 1;
									*iParam0++;
								}
							}
						}
					}
					break;
			}
			break;
		
		case 3:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 3f, 1, 1056964608, 0, 1))
				{
					if (iLocal_1055 == 1)
					{
						switch (iLocal_392)
						{
							case 3:
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								TASK::OPEN_SEQUENCE_TASK(&uVar1);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -64.65f, -1451.78f, 31.12f, 1f, 60000, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_401, uVar1);
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								break;
							
							case 2:
								TASK::CLEAR_SEQUENCE_TASK(&uVar2);
								TASK::OPEN_SEQUENCE_TASK(&uVar2);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 129.25f, -1299.28f, 28.23f, 1f, 60000, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uVar2);
								TASK::TASK_PERFORM_SEQUENCE(func_908(2), uVar2);
								TASK::CLEAR_SEQUENCE_TASK(&uVar2);
								break;
							
							case 1:
								TASK::CLEAR_SEQUENCE_TASK(&uVar3);
								TASK::OPEN_SEQUENCE_TASK(&uVar3);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -14.0385f, -1437.246f, 30.1235f, 1f, 60000, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uVar3);
								TASK::TASK_PERFORM_SEQUENCE(func_908(1), uVar3);
								TASK::CLEAR_SEQUENCE_TASK(&uVar3);
								break;
						}
						*iParam0++;
					}
				}
			}
			else if (iLocal_1055 == 1)
			{
				*iParam0++;
			}
			break;
		
		case 4:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_2520();
			}
			switch (iLocal_392)
			{
				case 3:
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_401, 0))
					{
						return 1;
					}
					break;
				
				case 2:
					if (!PED::IS_PED_IN_ANY_VEHICLE(func_908(2), 0))
					{
						return 1;
					}
					break;
				
				case 1:
					if (!PED::IS_PED_IN_ANY_VEHICLE(func_908(1), 0))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}


void func_35(var uParam0, bool bParam1)//Position - 0x3B06
{
	func_36(uParam0, bParam1, 0);
}

void func_36(var uParam0, bool bParam1, bool bParam2)//Position - 0x3B17
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	GlobalFunc_629(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
		}
		GlobalFunc_628(iVar0, uParam0);
		GlobalFunc_627(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), iVar0);
			MISC::CLEAR_BIT(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::REMOVE_BLIP(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, false);
			}
			PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()) && uParam0->f_17[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
				}
			}
			if (!MISC::IS_BIT_SET(uParam0->f_13, 29))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		}
	}
	uParam0->f_21 = 0;
}




int func_40(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)//Position - 0x3D73
{
	return func_41(uParam0, Param1, Param4, iParam7, iParam8, 0, 0, sParam9, sParam10, sParam10, sParam10, sParam10, bParam11, bParam12, bParam13, iParam14);
}

int func_41(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)//Position - 0x3DA1
{
	return func_42(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 1, iParam8, iParam9, iParam10, 0, sParam11, sParam12, sParam13, sParam14, sParam15, GlobalFunc_648(), bParam16, bParam17, GlobalFunc_648(), 0, 0, bParam18, iParam19, 0, 0, 0, 1, 1065353216);
}

int func_42(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x3DEE
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
	func_79(uParam0);
	GlobalFunc_502();
	if (func_62(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
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
								GlobalFunc_5122(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
								GlobalFunc_5122(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
								func_36(uParam0, 1, 0);
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
								GlobalFunc_5122(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
								GlobalFunc_5122(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
							*uParam0 = GlobalFunc_7056(iParam18, 0, 0);
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
										GlobalFunc_5122(uParam0->f_17[0], "GET_IN_CAR", 3);
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
										GlobalFunc_5122(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
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




















int func_62(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x4E5D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_13, 29) && !MISC::IS_BIT_SET(uParam0->f_13, 28))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					MISC::SET_BIT(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!MISC::IS_BIT_SET(uParam0->f_13, 29) && MISC::IS_BIT_SET(uParam0->f_13, 28))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0, iVar25);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_21, 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_21, 1)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17)
					{
						if (GlobalFunc_634(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470) == 7 && !GlobalFunc_645(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
					}
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						if (GlobalFunc_7058(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!MISC::IS_BIT_SET(uParam0->f_13, 26))
	{
		if ((!GlobalFunc_5148(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!GlobalFunc_5172(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar26);
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar27]))
						{
							GlobalFunc_5122(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						GlobalFunc_5145(uParam0, "MORE_SEATS", 0);
						MISC::SET_BIT(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			MISC::CLEAR_BIT(&(uParam0->f_13), 13);
			GlobalFunc_635("MORE_SEATS");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if ((!PED::IS_PED_INJURED(uParam0->f_17[0]) || !PED::IS_PED_INJURED(uParam0->f_17[1])) || !PED::IS_PED_INJURED(uParam0->f_17[2]))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_13, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_5172(uParam0, 2))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (GlobalFunc_643(iVar13, uParam0))
						{
							GlobalFunc_5145(uParam0, "CMN_VEHSUIT", 0);
							MISC::SET_BIT(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::CLEAR_BIT(&(uParam0->f_13), 31);
					GlobalFunc_635("CMN_VEHSUIT");
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 75))
				{
					MISC::SET_BIT(&(uParam0->f_13), 21);
				}
			}
			else if (MISC::IS_BIT_SET(uParam0->f_13, 21))
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 1);
					}
					else
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 0);
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
						{
							if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (!GlobalFunc_5148(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (!GlobalFunc_642(uParam0->f_17[iVar0]))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar13))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iVar13))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(iVar13) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar13))
								{
									Var28 = { ENTITY::GET_ENTITY_COORDS(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
						{
							iVar13 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_17[iVar0], 0);
							if (!ENTITY::IS_ENTITY_DEAD(iVar13))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar13))
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iVar31 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						iVar32 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (ENTITY::DOES_ENTITY_EXIST(iVar32))
						{
							if (GlobalFunc_634(iVar32, uParam0, 0))
							{
								if (GlobalFunc_641(iVar0, uParam0) || !MISC::IS_BIT_SET(uParam0->f_13, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
									GlobalFunc_627(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										MISC::SET_BIT(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!GlobalFunc_641(iVar0, uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar32) == joaat("sentinel2"))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 4);
								}
								else
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 2);
								}
								GlobalFunc_640(iVar0, uParam0);
							}
						}
					}
					if ((!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()) && !GlobalFunc_639(uParam0->f_17[iVar0], iParam10)) && !GlobalFunc_5147(uParam0->f_17[iVar0], iParam10))
					{
						if (GlobalFunc_7058(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (((!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]))
								{
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
									}
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = MISC::GET_GAME_TIMER();
								uParam0->f_1[iVar0] = GlobalFunc_7056(uParam0->f_17[iVar0], 0, 0);
								HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									GlobalFunc_714(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
					{
						if (((GlobalFunc_5144(uParam0->f_17[iVar0], 1) || GlobalFunc_639(uParam0->f_17[iVar0], iParam10)) || iParam12) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
								GlobalFunc_635(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								GlobalFunc_714(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iParam10))
						{
							if ((ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !MISC::IS_BIT_SET(uParam0->f_13, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!GlobalFunc_5144(uParam0->f_17[iVar0], 1))
										{
											if (GlobalFunc_630(uParam0->f_17[iVar0]))
											{
												iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
									{
										if ((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !GlobalFunc_645(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) && !GlobalFunc_638(uParam0->f_17[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
											if (MISC::IS_BIT_SET(uParam0->f_13, 10))
											{
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
											}
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = GlobalFunc_7056(uParam0->f_17[iVar0], 0, 0);
										HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (GlobalFunc_7058(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
									{
										iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 0);
										PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 21))
								{
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_13, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
								MISC::SET_BIT(&(uParam0->f_13), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					GlobalFunc_635(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!GlobalFunc_5172(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
						{
							if (GlobalFunc_642(uParam0->f_17[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !GlobalFunc_642(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = MISC::GET_GAME_TIMER();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!MISC::IS_BIT_SET(uParam0->f_13, 5))
							{
								GlobalFunc_5145(uParam0, sParam7, 0);
								MISC::SET_BIT(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!GlobalFunc_637(iVar0, uParam0))
									{
										if (!MISC::IS_STRING_NULL(uVar19[iVar0]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(uVar19[iVar0], ""))
											{
												GlobalFunc_5173(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												GlobalFunc_636(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!GlobalFunc_637(iVar0, uParam0))
										{
											GlobalFunc_5145(uParam0, uVar15[iVar0], 0);
											GlobalFunc_636(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		MISC::CLEAR_BIT(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					GlobalFunc_635(uVar15[iVar0]);
				}
				iVar0++;
			}
			GlobalFunc_635("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

















void func_79(var uParam0)//Position - 0x64E4
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(uParam0->f_13, 25))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, true);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&(uParam0->f_13), 25);
	}
}







void func_86(bool bParam0)//Position - 0x66F0
{
	if (bParam0)
	{
		GlobalFunc_5211(&Global_96378, 128);
	}
	else
	{
		GlobalFunc_5312(&Global_96378, 128);
	}
}










void func_96(bool bParam0, float fParam1, int iParam2)//Position - 0x6858
{
	if (bParam0)
	{
		MISC::WATER_OVERRIDE_FADE_IN(fParam1);
		MISC::WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(0.3f);
		MISC::WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(0.25f);
		MISC::WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(0.35f);
		MISC::WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(0.35f);
		MISC::WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(0.4f);
		MISC::WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(0.25f);
		MISC::WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(0.55f);
		MISC::WATER_OVERRIDE_SET_RIPPLEDISTURB(0.05f);
		MISC::WATER_OVERRIDE_SET_RIPPLEBUMPINESS(0.42f);
		MISC::WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(0.25f);
		MISC::WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(0.5f);
		MISC::WATER_OVERRIDE_SET_STRENGTH(iParam2);
	}
	else
	{
		MISC::WATER_OVERRIDE_FADE_OUT(fParam1);
	}
}

void func_97(char* sParam0, int iParam1, bool bParam2)//Position - 0x68DD
{
	if (!func_102(sParam0))
	{
		GlobalFunc_2523(sParam0, iParam1, 1);
		func_98(sParam0, bParam2);
	}
}

void func_98(char* sParam0, bool bParam1)//Position - 0x6900
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_102(sParam0))
		{
			iVar1 = iLocal_4455;
			if (iLocal_4486 < iVar1)
			{
				iLocal_4455[iLocal_4486] = iVar0;
				iLocal_4486++;
			}
		}
	}
	else
	{
		iVar2 = func_100(iVar0);
		if (iVar2 != -1)
		{
			iLocal_4455[iVar2] = 0;
			func_99();
			iLocal_4486 = (iLocal_4486 - 1);
		}
	}
}

void func_99()//Position - 0x6963
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_4455;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_4455[iVar1] == 0)
		{
			if (iLocal_4455[iVar1 + 1] != 0)
			{
				iLocal_4455[iVar1] = iLocal_4455[iVar1 + 1];
				iLocal_4455[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

int func_100(int iParam0)//Position - 0x69BA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_4486)
	{
		if (iLocal_4455[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}


int func_102(char* sParam0)//Position - 0x6A04
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_100(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}



void func_105(char* sParam0)//Position - 0x6AEF
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!func_102(sParam0))
		{
			if (GlobalFunc_663(sParam0, 0, 0))
			{
				func_98(sParam0, 1);
			}
		}
		else if (!GlobalFunc_663(sParam0, 0, 0))
		{
			StringCopy(sParam0, "", 16);
		}
	}
}


void func_107(int iParam0, float fParam1, float fParam2)//Position - 0x6B51
{
	int iVar0;
	
	switch (iParam0->f_26)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4442))
			{
				if (fParam1 > 15000f)
				{
					STREAMING::REQUEST_MODEL(joaat("s_m_y_swat_01"));
					STREAMING::REQUEST_MODEL(Local_4442.f_6);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_4442.f_7, sLocal_311);
					if ((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_swat_01")) && STREAMING::HAS_MODEL_LOADED(Local_4442.f_6)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_4442.f_7, sLocal_311))
					{
						if (fParam1 >= fLocal_370)
						{
							Local_4442 = VEHICLE::CREATE_VEHICLE(Local_4442.f_6, Local_4442.f_2, Local_4442.f_5, 1, 1);
							Local_4354[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4442, 6, joaat("s_m_y_swat_01"), -1, 1, 1);
							Local_4354[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4442, 6, joaat("s_m_y_swat_01"), 1, 1, 1);
							Local_4354[2 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4442, 6, joaat("s_m_y_swat_01"), 2, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4354[0 /*29*/], 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4354[1 /*29*/], 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_4354[2 /*29*/], 0);
							iVar0 = 0;
							while (iVar0 <= 2)
							{
								WEAPON::GIVE_WEAPON_TO_PED(Local_4354[iVar0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
								WEAPON::GIVE_WEAPON_TO_PED(Local_4354[iVar0 /*29*/], joaat("weapon_carbinerifle"), -1, 0, 1);
								ENTITY::SET_ENTITY_HEALTH(Local_4354[iVar0 /*29*/], 250);
								PED::ADD_ARMOUR_TO_PED(Local_4354[iVar0 /*29*/], 100);
								PED::SET_PED_HEARING_RANGE(Local_4354[iVar0 /*29*/], 150f);
								PED::SET_PED_SEEING_RANGE(Local_4354[iVar0 /*29*/], 150f);
								PED::SET_PED_ID_RANGE(Local_4354[iVar0 /*29*/], 150f);
								PED::SET_PED_HIGHLY_PERCEPTIVE(Local_4354[iVar0 /*29*/], 1);
								PED::SET_PED_SHOOT_RATE(Local_4354[iVar0 /*29*/], 50);
								PED::SET_PED_ACCURACY(Local_4354[iVar0 /*29*/], 5);
								iVar0++;
							}
							TASK::TASK_VEHICLE_AIM_AT_PED(Local_4354[0 /*29*/], Local_401);
							GlobalFunc_173(&uLocal_729, 8, 0, "FRA1POLICE1", 0, 1);
							AUDIO::_0x892B6AB8F33606F5(8, Local_4442);
							VEHICLE::SET_VEHICLE_LIVERY(Local_4442, 0);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4442, Local_4442.f_7, sLocal_311, 1);
							VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_4442, 1);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_4442, 1);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4442, fParam2);
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4442);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_swat_01"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_4442.f_6);
							AUDIO::START_AUDIO_SCENE("FRANKLIN_1_JETSKI_HELI_ESCAPE");
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							}
							Local_4354[0 /*29*/].f_9 = 0;
							iLocal_1061 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 9000));
							func_112(iParam0, 17);
						}
					}
				}
			}
			break;
		
		case 17:
			PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4442, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4442))
				{
					VEHICLE::SET_PLAYBACK_SPEED(Local_4442, fParam2);
				}
				if (!PED::IS_PED_INJURED(Local_4354[0 /*29*/]))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_1061) > 0)
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								if (!PED::IS_PED_INJURED(Local_401))
								{
									TASK::TASK_VEHICLE_AIM_AT_PED(Local_4354[0 /*29*/], Local_401);
								}
								break;
							
							case 1:
								if (!PED::IS_PED_INJURED(func_908(2)))
								{
									TASK::TASK_VEHICLE_AIM_AT_PED(Local_4354[0 /*29*/], func_908(2));
								}
								break;
							
							case 2:
								if (!PED::IS_PED_INJURED(func_908(1)))
								{
									TASK::TASK_VEHICLE_AIM_AT_PED(Local_4354[0 /*29*/], func_908(1));
								}
								break;
						}
						iLocal_1061 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
					}
				}
			}
			if (fParam1 >= 80000f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4442))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4442, 0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4442);
						VEHICLE::REMOVE_VEHICLE_RECORDING(Local_4442.f_7, sLocal_311);
						iVar0 = 0;
						while (iVar0 <= 2)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_4354[iVar0 /*29*/]))
							{
								if (!PED::IS_PED_INJURED(Local_4354[iVar0 /*29*/]))
								{
									TASK::TASK_COMBAT_PED(Local_4354[iVar0 /*29*/], PLAYER::PLAYER_PED_ID(), 67108864, 16);
									PED::SET_PED_KEEP_TASK(Local_4354[iVar0 /*29*/], 1);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_4354[iVar0 /*29*/]));
								}
							}
							iVar0++;
						}
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_4442);
					}
				}
				func_112(iParam0, 6);
			}
			func_109(&Local_4354, 0, 1, 1);
			func_108(&Local_4442, 0, 1);
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4442, 0))
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_4442.f_7, sLocal_311);
			}
			break;
	}
}

void func_108(int iParam0, int iParam1, int iParam2)//Position - 0x6F4A
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0) || ENTITY::IS_ENTITY_DEAD(*iParam0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
				}
			}
			else if (iParam2 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
		iParam0->f_11 = 0;
		iParam0->f_12 = 0;
		iParam0->f_10 = 0;
		iParam0->f_8 = 0f;
		iParam0->f_9 = 0f;
	}
}

void func_109(var uParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x6FD3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_110(uParam0[iVar0 /*29*/], bParam1, iParam2, iParam3);
		iVar0++;
	}
}

void func_110(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7004
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (PED::IS_PED_INJURED(*iParam0))
				{
					iParam0->f_27 = func_111(*iParam0);
					if (ENTITY::IS_ENTITY_DEAD(*iParam0))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
					if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_2))
					{
						ITEMSET::DESTROY_ITEMSET(iParam0->f_2);
					}
				}
			}
			else if (iParam2 == 0)
			{
				if (!PED::IS_PED_INJURED(*iParam0))
				{
					if (PED::IS_PED_GROUP_MEMBER(*iParam0, GlobalFunc_468()))
					{
						PED::REMOVE_PED_FROM_GROUP(*iParam0);
					}
					PED::SET_PED_KEEP_TASK(*iParam0, iParam3);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
					if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_2))
					{
						ITEMSET::DESTROY_ITEMSET(iParam0->f_2);
					}
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (PED::IS_PED_GROUP_MEMBER(*iParam0, GlobalFunc_468()))
				{
					PED::REMOVE_PED_FROM_GROUP(*iParam0);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
			}
			PED::DELETE_PED(iParam0);
			if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
			{
				HUD::REMOVE_BLIP(&(iParam0->f_1));
			}
			if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_2))
			{
				ITEMSET::DESTROY_ITEMSET(iParam0->f_2);
			}
		}
		iParam0->f_8 = 0;
		iParam0->f_12 = 0;
		iParam0->f_13 = 0f;
		iParam0->f_15 = 0;
		iParam0->f_22 = 0;
		iParam0->f_25 = 0;
		iParam0->f_27 = 0;
		iParam0->f_28 = 3;
		iParam0->f_26 = 0;
	}
}

int func_111(int iParam0)//Position - 0x717F
{
	var uVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			uVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam0);
			if (ENTITY::IS_ENTITY_A_PED(uVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (iVar1 == func_908(1))
				{
					switch (GlobalFunc_8315())
					{
						case 1:
							if (PED::GET_PED_CAUSE_OF_DEATH(iParam0) == joaat("weapon_sniperrifle") || PED::GET_PED_CAUSE_OF_DEATH(iParam0) == joaat("weapon_advancedrifle"))
							{
								iLocal_926 = 1;
							}
							return 1;
							break;
						
						case 2:
							return 3;
							break;
					}
				}
				else if (iVar1 == func_908(2))
				{
					switch (GlobalFunc_8315())
					{
						case 1:
							return 4;
							break;
						
						case 2:
							if (PED::GET_PED_CAUSE_OF_DEATH(iParam0) == joaat("weapon_sniperrifle") || PED::GET_PED_CAUSE_OF_DEATH(iParam0) == joaat("weapon_advancedrifle"))
							{
								iLocal_926 = 1;
							}
							return 2;
							break;
					}
				}
				else if (iVar1 == Local_401)
				{
					return 5;
				}
				else if (iVar1 == Local_488)
				{
					return 6;
				}
			}
		}
	}
	return 0;
}

void func_112(int iParam0, int iParam1)//Position - 0x7278
{
	iParam0->f_15 = 0;
	iParam0->f_26 = iParam1;
}


void func_114(int iParam0, var uParam1, float fParam2)//Position - 0x7326
{
	int iVar0;
	
	switch ((uParam1[0 /*29*/])->f_26)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (fParam2 >= 85000f)
				{
					STREAMING::REQUEST_MODEL(joaat("police3"));
					STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
					{
						*uParam0 = VEHICLE::CREATE_VEHICLE(joaat("police3"), uParam0->f_2, uParam0->f_5, 1, 1);
						(*uParam1)[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						(*uParam1)[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam1)[0 /*29*/], 1);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam1)[1 /*29*/], 1);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 1);
						WEAPON::GIVE_WEAPON_TO_PED((*uParam1)[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
						WEAPON::GIVE_WEAPON_TO_PED((*uParam1)[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam1)[0 /*29*/], 2);
						PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam1)[1 /*29*/], 2);
						VEHICLE::SET_VEHICLE_SIREN(*uParam0, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
						(uParam1[0 /*29*/])->f_12 = 0;
						(uParam1[0 /*29*/])->f_15 = 0;
						(uParam1[0 /*29*/])->f_8 = MISC::GET_GAME_TIMER();
						(uParam1[1 /*29*/])->f_12 = 0;
						(uParam1[1 /*29*/])->f_15 = 0;
						(uParam1[1 /*29*/])->f_8 = MISC::GET_GAME_TIMER();
						PED::SET_CREATE_RANDOM_COPS(1);
						PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
						MISC::ENABLE_DISPATCH_SERVICE(3, 1);
						MISC::ENABLE_DISPATCH_SERVICE(5, 1);
						MISC::ENABLE_DISPATCH_SERVICE(1, 1);
						MISC::ENABLE_DISPATCH_SERVICE(6, 1);
						MISC::ENABLE_DISPATCH_SERVICE(8, 1);
						MISC::ENABLE_DISPATCH_SERVICE(10, 1);
						MISC::ENABLE_DISPATCH_SERVICE(9, 1);
						MISC::ENABLE_DISPATCH_SERVICE(13, 1);
						MISC::ENABLE_DISPATCH_SERVICE(2, 1);
						MISC::ENABLE_DISPATCH_SERVICE(4, 1);
						PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0.1f);
						func_112(uParam1[0 /*29*/], 5);
					}
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_2521(3000, (uParam1[0 /*29*/])->f_8) && GlobalFunc_2521(3000, (uParam1[1 /*29*/])->f_8))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0 /*29*/]))
					{
						(uParam1[iVar0 /*29*/])->f_13 = GlobalFunc_4951((*uParam1)[iVar0 /*29*/], PLAYER::PLAYER_PED_ID());
						if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0 /*29*/]))
						{
							switch ((uParam1[iVar0 /*29*/])->f_12)
							{
								case 0:
									if ((uParam1[iVar0 /*29*/])->f_15 == 0)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 0, 0);
										PED::SET_PED_ACCURACY((*uParam1)[iVar0 /*29*/], 1);
										PED::SET_PED_SHOOT_RATE((*uParam1)[iVar0 /*29*/], 50);
										PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 1, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 3, 1);
										PED::SET_PED_COMBAT_RANGE((*uParam1)[iVar0 /*29*/], 0);
										PED::SET_PED_COMBAT_MOVEMENT((*uParam1)[iVar0 /*29*/], 2);
										PED::SET_COMBAT_FLOAT((*uParam1)[iVar0 /*29*/], 5, 1f);
										PED::SET_COMBAT_FLOAT((*uParam1)[iVar0 /*29*/], 8, 0f);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((*uParam1)[iVar0 /*29*/], 500f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar0 /*29*/], 0);
										(uParam1[iVar0 /*29*/])->f_15 = 1;
									}
									if ((uParam1[iVar0 /*29*/])->f_15 == 1)
									{
										if ((uParam1[iVar0 /*29*/])->f_13 > 600f)
										{
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar0 /*29*/]);
										}
									}
									break;
								}
							}
					}
					iVar0++;
				}
			}
			func_109(uParam1, 0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[0 /*29*/]) && !ENTITY::DOES_ENTITY_EXIST((*uParam1)[1 /*29*/]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
				}
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_109(uParam1, 0, 0, 0);
				}
			}
			break;
	}
}



void func_117(int iParam0, var uParam1, float fParam2)//Position - 0x76D8
{
	int iVar0;
	
	switch ((uParam1[0 /*29*/])->f_26)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (fParam2 >= 60000f)
				{
					STREAMING::REQUEST_MODEL(joaat("police3"));
					STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
					{
						if (fParam2 >= 62000f)
						{
							*uParam0 = VEHICLE::CREATE_VEHICLE(joaat("police3"), uParam0->f_2, uParam0->f_5, 1, 1);
							(*uParam1)[0 /*29*/] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 693.4204f, -2529.836f, 11.4264f, 115.3417f, 1, 1);
							(*uParam1)[1 /*29*/] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 691.3856f, -2529.005f, 11.4266f, 103.4375f, 1, 1);
							WEAPON::GIVE_WEAPON_TO_PED((*uParam1)[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
							WEAPON::GIVE_WEAPON_TO_PED((*uParam1)[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
							PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam1)[0 /*29*/], 2);
							PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam1)[1 /*29*/], 2);
							VEHICLE::SET_VEHICLE_SIREN(*uParam0, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
							(uParam1[0 /*29*/])->f_12 = 0;
							(uParam1[0 /*29*/])->f_15 = 0;
							(uParam1[1 /*29*/])->f_12 = 0;
							(uParam1[1 /*29*/])->f_15 = 0;
							func_112(uParam1[0 /*29*/], 5);
						}
					}
				}
			}
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0 /*29*/]))
				{
					(uParam1[iVar0 /*29*/])->f_13 = GlobalFunc_4951((*uParam1)[iVar0 /*29*/], PLAYER::PLAYER_PED_ID());
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0 /*29*/]))
					{
						switch ((uParam1[iVar0 /*29*/])->f_12)
						{
							case 0:
								if ((uParam1[iVar0 /*29*/])->f_15 == 0)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 0, 0);
									PED::SET_PED_ACCURACY((*uParam1)[iVar0 /*29*/], 2);
									PED::SET_PED_SHOOT_RATE((*uParam1)[iVar0 /*29*/], 125);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 3, 1);
									PED::SET_PED_COMBAT_RANGE((*uParam1)[iVar0 /*29*/], 0);
									PED::SET_PED_COMBAT_MOVEMENT((*uParam1)[iVar0 /*29*/], 2);
									PED::SET_COMBAT_FLOAT((*uParam1)[iVar0 /*29*/], 5, 1f);
									PED::SET_COMBAT_FLOAT((*uParam1)[iVar0 /*29*/], 8, 0f);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((*uParam1)[iVar0 /*29*/], 250f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar0 /*29*/], 0);
									(uParam1[iVar0 /*29*/])->f_15 = 1;
								}
								if (fParam2 >= 85000f)
								{
									if ((uParam1[iVar0 /*29*/])->f_13 > 300f)
									{
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar0 /*29*/]);
									}
								}
								break;
							}
						}
				}
				iVar0++;
			}
			func_109(uParam1, 0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[0 /*29*/]) && !ENTITY::DOES_ENTITY_EXIST((*uParam1)[1 /*29*/]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
				}
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_109(uParam1, 0, 0, 0);
				}
			}
			break;
	}
}

void func_118(int iParam0, var uParam1, float fParam2)//Position - 0x7996
{
	int iVar0;
	
	switch ((uParam1[0 /*29*/])->f_26)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (fParam2 >= 55000f)
				{
					STREAMING::REQUEST_MODEL(joaat("police3"));
					STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
					VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_7, sLocal_311);
					if ((STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_7, sLocal_311))
					{
						if (fParam2 >= 60000f)
						{
							*uParam0 = VEHICLE::CREATE_VEHICLE(joaat("police3"), uParam0->f_2, uParam0->f_5, 1, 1);
							(*uParam1)[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
							(*uParam1)[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
							WEAPON::GIVE_WEAPON_TO_PED((*uParam1)[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
							WEAPON::GIVE_WEAPON_TO_PED((*uParam1)[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
							PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam1)[0 /*29*/], 2);
							PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam1)[1 /*29*/], 2);
							VEHICLE::SET_VEHICLE_SIREN(*uParam0, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam0, 1, 1);
							VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(*uParam0, 1);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, uParam0->f_7, sLocal_311, 1);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
							(uParam1[0 /*29*/])->f_12 = 0;
							(uParam1[0 /*29*/])->f_15 = 0;
							(uParam1[1 /*29*/])->f_12 = 0;
							(uParam1[1 /*29*/])->f_15 = 0;
							iLocal_1065 = MISC::GET_GAME_TIMER() + 1000;
							func_112(uParam1[0 /*29*/], 17);
						}
					}
				}
			}
			break;
		
		case 17:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_7, sLocal_311);
						func_112(uParam1[0 /*29*/], 5);
					}
				}
			}
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0 /*29*/]))
				{
					(uParam1[iVar0 /*29*/])->f_13 = GlobalFunc_4951((*uParam1)[iVar0 /*29*/], PLAYER::PLAYER_PED_ID());
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0 /*29*/]))
					{
						switch ((uParam1[iVar0 /*29*/])->f_12)
						{
							case 0:
								if ((uParam1[iVar0 /*29*/])->f_15 == 0)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 0, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 3, 1);
									PED::SET_PED_ACCURACY((*uParam1)[iVar0 /*29*/], 2);
									PED::SET_PED_SHOOT_RATE((*uParam1)[iVar0 /*29*/], 125);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((*uParam1)[iVar0 /*29*/], 250f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar0 /*29*/], 0);
									(uParam1[iVar0 /*29*/])->f_15 = 1;
								}
								if (fParam2 >= 85000f)
								{
									if ((uParam1[iVar0 /*29*/])->f_13 > 300f)
									{
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar0 /*29*/]);
									}
								}
								break;
							}
						}
				}
				iVar0++;
			}
			func_109(uParam1, 0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[0 /*29*/]) && !ENTITY::DOES_ENTITY_EXIST((*uParam1)[1 /*29*/]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
				}
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_109(uParam1, 0, 0, 0);
				}
			}
			break;
	}
}

void func_119(int iParam0, var uParam1, float fParam2)//Position - 0x7C7F
{
	int iVar0;
	
	switch ((uParam1[0 /*29*/])->f_26)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (fParam2 >= 42000f)
				{
					STREAMING::REQUEST_MODEL(joaat("police3"));
					STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
					VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_7, sLocal_311);
					if ((STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_7, sLocal_311))
					{
						if (fParam2 >= 47000f)
						{
							*uParam0 = VEHICLE::CREATE_VEHICLE(joaat("police3"), uParam0->f_2, uParam0->f_5, 1, 1);
							(*uParam1)[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
							(*uParam1)[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
							WEAPON::GIVE_WEAPON_TO_PED((*uParam1)[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
							WEAPON::GIVE_WEAPON_TO_PED((*uParam1)[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
							PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam1)[0 /*29*/], 2);
							PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam1)[1 /*29*/], 2);
							VEHICLE::SET_VEHICLE_SIREN(*uParam0, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam0, 1, 1);
							VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(*uParam0, 1);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, uParam0->f_7, sLocal_311, 1);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
							(uParam1[0 /*29*/])->f_12 = 0;
							(uParam1[0 /*29*/])->f_15 = 0;
							(uParam1[1 /*29*/])->f_12 = 0;
							(uParam1[1 /*29*/])->f_15 = 0;
							func_112(uParam1[0 /*29*/], 17);
						}
					}
				}
			}
			break;
		
		case 17:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_7, sLocal_311);
						func_112(uParam1[0 /*29*/], 5);
					}
				}
			}
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0 /*29*/]))
				{
					(uParam1[iVar0 /*29*/])->f_13 = GlobalFunc_4951((*uParam1)[iVar0 /*29*/], PLAYER::PLAYER_PED_ID());
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0 /*29*/]))
					{
						switch ((uParam1[iVar0 /*29*/])->f_12)
						{
							case 0:
								if ((uParam1[iVar0 /*29*/])->f_15 == 0)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 0, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 3, 1);
									PED::SET_PED_ACCURACY((*uParam1)[iVar0 /*29*/], 2);
									PED::SET_PED_SHOOT_RATE((*uParam1)[iVar0 /*29*/], 125);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((*uParam1)[iVar0 /*29*/], 250f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar0 /*29*/], 0);
									(uParam1[iVar0 /*29*/])->f_15 = 1;
								}
								if (fParam2 >= 70000f)
								{
									if ((uParam1[iVar0 /*29*/])->f_13 > 250f)
									{
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar0 /*29*/]);
									}
								}
								break;
							}
						}
				}
				iVar0++;
			}
			func_109(uParam1, 0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[0 /*29*/]) && !ENTITY::DOES_ENTITY_EXIST((*uParam1)[1 /*29*/]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
				}
			}
			break;
	}
}

void func_120(int iParam0, var uParam1, float fParam2)//Position - 0x7F3D
{
	int iVar0;
	
	switch ((uParam1[0 /*29*/])->f_26)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (fParam2 >= 26000f)
				{
					STREAMING::REQUEST_MODEL(joaat("police3"));
					STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
					VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_7, sLocal_311);
					if ((STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_7, sLocal_311))
					{
						if (fParam2 >= 32000f)
						{
							*uParam0 = VEHICLE::CREATE_VEHICLE(joaat("police3"), uParam0->f_2, uParam0->f_5, 1, 1);
							(*uParam1)[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
							(*uParam1)[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
							WEAPON::GIVE_WEAPON_TO_PED((*uParam1)[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
							WEAPON::GIVE_WEAPON_TO_PED((*uParam1)[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
							PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam1)[0 /*29*/], 2);
							PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam1)[1 /*29*/], 2);
							VEHICLE::SET_VEHICLE_SIREN(*uParam0, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam0, 1, 1);
							VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(*uParam0, 1);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, uParam0->f_7, sLocal_311, 1);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
							(uParam1[0 /*29*/])->f_12 = 0;
							(uParam1[0 /*29*/])->f_15 = 0;
							(uParam1[1 /*29*/])->f_12 = 0;
							(uParam1[1 /*29*/])->f_15 = 0;
							func_112(uParam1[0 /*29*/], 17);
						}
					}
				}
			}
			break;
		
		case 17:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_7, sLocal_311);
						func_112(uParam1[0 /*29*/], 5);
					}
				}
			}
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0 /*29*/]))
				{
					(uParam1[iVar0 /*29*/])->f_13 = GlobalFunc_4951((*uParam1)[iVar0 /*29*/], PLAYER::PLAYER_PED_ID());
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0 /*29*/]))
					{
						switch ((uParam1[iVar0 /*29*/])->f_12)
						{
							case 0:
								if ((uParam1[iVar0 /*29*/])->f_15 == 0)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 0, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 3, 1);
									PED::SET_PED_ACCURACY((*uParam1)[iVar0 /*29*/], 2);
									PED::SET_PED_SHOOT_RATE((*uParam1)[iVar0 /*29*/], 125);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((*uParam1)[iVar0 /*29*/], 250f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar0 /*29*/], 0);
									(uParam1[iVar0 /*29*/])->f_15 = 1;
								}
								if (fParam2 >= 60000f)
								{
									if ((uParam1[iVar0 /*29*/])->f_13 > 250f)
									{
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar0 /*29*/]);
									}
								}
								break;
							}
						}
				}
				iVar0++;
			}
			func_109(uParam1, 0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[0 /*29*/]) && !ENTITY::DOES_ENTITY_EXIST((*uParam1)[1 /*29*/]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
				}
			}
			break;
	}
}

void func_121(int iParam0, var uParam1, float fParam2)//Position - 0x81FC
{
	int iVar0;
	
	switch ((uParam1[0 /*29*/])->f_26)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (fParam2 >= 25000f)
				{
					STREAMING::REQUEST_MODEL(joaat("police3"));
					STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
					VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_7, sLocal_311);
					if ((STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_7, sLocal_311))
					{
						if (fParam2 >= 30500f)
						{
							*uParam0 = VEHICLE::CREATE_VEHICLE(joaat("police3"), uParam0->f_2, uParam0->f_5, 1, 1);
							(*uParam1)[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
							(*uParam1)[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
							WEAPON::GIVE_WEAPON_TO_PED((*uParam1)[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
							WEAPON::GIVE_WEAPON_TO_PED((*uParam1)[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
							PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam1)[0 /*29*/], 2);
							PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam1)[1 /*29*/], 2);
							VEHICLE::SET_VEHICLE_SIREN(*uParam0, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam0, 1, 1);
							VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(*uParam0, 1);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, uParam0->f_7, sLocal_311, 1);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
							(uParam1[0 /*29*/])->f_12 = 0;
							(uParam1[0 /*29*/])->f_15 = 0;
							(uParam1[1 /*29*/])->f_12 = 0;
							(uParam1[1 /*29*/])->f_15 = 0;
							func_112(uParam1[0 /*29*/], 17);
						}
					}
				}
			}
			break;
		
		case 17:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_7, sLocal_311);
						func_112(uParam1[0 /*29*/], 5);
					}
				}
			}
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0 /*29*/]))
				{
					(uParam1[iVar0 /*29*/])->f_13 = GlobalFunc_4951((*uParam1)[iVar0 /*29*/], PLAYER::PLAYER_PED_ID());
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0 /*29*/]))
					{
						switch ((uParam1[iVar0 /*29*/])->f_12)
						{
							case 0:
								if ((uParam1[iVar0 /*29*/])->f_15 == 0)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 0, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam1)[iVar0 /*29*/], 3, 1);
									PED::SET_PED_ACCURACY((*uParam1)[iVar0 /*29*/], 2);
									PED::SET_PED_SHOOT_RATE((*uParam1)[iVar0 /*29*/], 125);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((*uParam1)[iVar0 /*29*/], 250f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar0 /*29*/], 0);
									(uParam1[iVar0 /*29*/])->f_15 = 1;
								}
								if (fParam2 >= 60000f)
								{
									if ((uParam1[iVar0 /*29*/])->f_13 > 250f)
									{
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar0 /*29*/]);
									}
								}
								break;
							}
						}
				}
				iVar0++;
			}
			func_109(uParam1, 0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[0 /*29*/]) && !ENTITY::DOES_ENTITY_EXIST((*uParam1)[1 /*29*/]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
				}
			}
			break;
	}
}

void func_122(int iParam0)//Position - 0x84BA
{
	int iVar0;
	
	switch (iParam0->f_26)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_2868))
			{
				if (func_102("LOSE_WANTED"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 696.5445f, -2563.472f, -3.594771f, 679.045f, -2604.66f, 10.13908f, 16f, 0, 1, 0))
					{
						STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
						STREAMING::REQUEST_MODEL(Local_2868.f_6);
						VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2868.f_7, sLocal_311);
						if ((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")) && STREAMING::HAS_MODEL_LOADED(Local_2868.f_6)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2868.f_7, sLocal_311))
						{
							Local_2868 = VEHICLE::CREATE_VEHICLE(Local_2868.f_6, Local_2868.f_2, Local_2868.f_5, 1, 1);
							Local_2278[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2868, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
							Local_2278[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2868, 6, joaat("s_m_y_cop_01"), 1, 1, 1);
							iVar0 = 0;
							while (iVar0 < 2)
							{
								WEAPON::GIVE_WEAPON_TO_PED(Local_2278[iVar0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
								WEAPON::GIVE_WEAPON_TO_PED(Local_2278[iVar0 /*29*/], joaat("weapon_carbinerifle"), -1, 0, 1);
								ENTITY::SET_ENTITY_HEALTH(Local_2278[iVar0 /*29*/], 250);
								PED::ADD_ARMOUR_TO_PED(Local_2278[iVar0 /*29*/], 100);
								PED::SET_PED_HEARING_RANGE(Local_2278[iVar0 /*29*/], 150f);
								PED::SET_PED_SEEING_RANGE(Local_2278[iVar0 /*29*/], 150f);
								PED::SET_PED_ID_RANGE(Local_2278[iVar0 /*29*/], 150f);
								PED::SET_PED_HIGHLY_PERCEPTIVE(Local_2278[iVar0 /*29*/], 1);
								PED::SET_PED_SHOOT_RATE(Local_2278[iVar0 /*29*/], 50);
								PED::SET_PED_ACCURACY(Local_2278[iVar0 /*29*/], 5);
								iVar0++;
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2278[0 /*29*/], 1);
							VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_2868, 1);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2868, Local_2868.f_7, sLocal_311, 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_2868, 500f);
							VEHICLE::SET_PLAYBACK_SPEED(Local_2868, 1.15f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2868, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2868.f_6);
							func_112(iParam0, 17);
						}
					}
				}
			}
			break;
		
		case 17:
			if (ENTITY::DOES_ENTITY_EXIST(Local_2868))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2868, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2868))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2868) > 2250f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2868);
							VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2868.f_7, sLocal_311);
							iVar0 = 0;
							while (iVar0 < 2)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_2278[iVar0 /*29*/]))
								{
									if (!PED::IS_PED_INJURED(Local_2278[iVar0 /*29*/]))
									{
										TASK::TASK_COMBAT_PED(Local_2278[iVar0 /*29*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_KEEP_TASK(Local_2278[iVar0 /*29*/], 1);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2278[iVar0 /*29*/]));
									}
								}
								iVar0++;
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_2868);
						}
					}
				}
			}
			break;
	}
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5)//Position - 0x8758
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	var uVar8;
	float fVar9;
	float fVar10;
	var uVar11;
	int iVar12;
	struct<3> Var13;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3))
		{
			iParam1->f_13 = GlobalFunc_4951(iParam0, iParam3);
			PED::SET_PED_RESET_FLAG(iParam0, 227, 1);
			PED::SET_PED_RESET_FLAG(iParam0, 398, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam2))
					{
						uParam2->f_9 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam2);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
				{
					if (HUD::DOES_BLIP_EXIST(uParam2->f_1))
					{
						if (PED::IS_PED_IN_VEHICLE(iParam0, *uParam2, 0))
						{
							HUD::REMOVE_BLIP(&(uParam2->f_1));
						}
						if (iParam5 == 1)
						{
							HUD::REMOVE_BLIP(&(uParam2->f_1));
						}
					}
					else if (!PED::IS_PED_IN_VEHICLE(iParam0, *uParam2, 0))
					{
						if (iParam5 == 0)
						{
							uParam2->f_1 = GlobalFunc_7055(*uParam2, 0, 0);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uParam2->f_1))
				{
					HUD::REMOVE_BLIP(&(uParam2->f_1));
				}
			}
			switch (iParam1->f_26)
			{
				case 16:
					if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
						{
							uParam2->f_8 = 1.15f;
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam2))
							{
								VEHICLE::REQUEST_VEHICLE_RECORDING(uParam2->f_7, sLocal_311);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam2->f_7, sLocal_311))
								{
									func_128(*uParam2, sLocal_311, uParam2->f_8, 0, 1000f, 0, 0, 1);
								}
							}
							else
							{
								PED::SET_PED_DIES_IN_WATER(iParam0, 0);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam0, 1);
								func_112(iParam1, 17);
							}
						}
					}
					break;
				
				case 17:
					if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam2))
							{
								VEHICLE::SET_PLAYBACK_SPEED(*uParam2, uParam4->f_8);
							}
						}
					}
					if (iParam1->f_15 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_530))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_530) && !func_127(&Local_1940))
							{
								if (uParam4->f_9 >= (fLocal_371 + 1250f) && uParam4->f_9 < fLocal_370)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, 0);
									PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 512, 1);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
									func_126(iParam0, 10, 50, -687903391);
									TASK::TASK_LOOK_AT_ENTITY(iParam0, Local_530, 1500, 0, 2);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									iParam1->f_15 = 1;
								}
							}
						}
					}
					else if (uParam4->f_9 >= fLocal_370)
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						iParam1->f_15 = 0;
					}
					break;
				
				case 19:
					if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(iParam0, *uParam2, 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam2) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(*uParam2))
								{
									uParam2->f_8 = 1f;
									fVar0 = uParam4->f_9;
									Var2 = { ENTITY::GET_ENTITY_COORDS(*uParam2, 1) };
									uVar8 = VEHICLE::GET_VEHICLE_RECORDING_ID(uParam2->f_7, sLocal_311);
									Var5 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar8, fVar0) };
									fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, Var2, 1);
									if (fVar1 <= 13f)
									{
										fVar0 = (uParam4->f_9 - 500f);
									}
									else if (fVar1 > 13f && fVar1 <= 20f)
									{
										fVar0 = (uParam4->f_9 - 1000f);
									}
									else if (fVar1 > 20f && fVar1 <= 30f)
									{
										fVar0 = (uParam4->f_9 - 2000f);
									}
									else
									{
										fVar0 = (uParam4->f_9 - 3000f);
									}
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam2, uParam2->f_7, sLocal_311, 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam2, fVar0);
									VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam2, 1);
								}
								else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam2))
								{
									if (uParam2->f_9 < uParam4->f_9)
									{
										fVar10 = (uParam4->f_9 - uParam2->f_9);
										if (fVar10 > 3000f)
										{
											fVar9 = 1.4f;
										}
										else if (fVar10 > 2000f)
										{
											fVar9 = 1.3f;
										}
										else if (fVar10 > 1000f)
										{
											fVar9 = 1.2f;
										}
										else if (fVar10 > 500f)
										{
											fVar9 = 1.15f;
										}
										else
										{
											fVar9 = 1.1f;
										}
										GlobalFunc_2906(&(uParam2->f_8), fVar9, 0.01f, 1);
										VEHICLE::SET_PLAYBACK_SPEED(*uParam2, uParam2->f_8);
									}
									else
									{
										func_112(iParam1, 17);
									}
								}
							}
							else
							{
								PED::SET_PED_INTO_VEHICLE(iParam0, *uParam2, -1);
							}
						}
					}
					break;
				
				case 18:
					if (iParam1->f_15 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam2))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam2->f_7, sLocal_311))
									{
										PED::SET_PED_INTO_VEHICLE(iParam0, *uParam2, -1);
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam2, uParam2->f_7, sLocal_311, 1);
										VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam2, 73000f);
										VEHICLE::SET_PLAYBACK_SPEED(*uParam2, 0.8f);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam2, 1);
									}
								}
							}
						}
						ENTITY::SET_ENTITY_HEALTH(iParam0, 600);
						PED::SET_PED_MAX_HEALTH(iParam0, 600);
						WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_microsmg"), -1, 0, 1);
						WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_pumpshotgun"), -1, 0, 1);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, 0);
						PED::SET_PED_DIES_IN_WATER(iParam0, 0);
						iParam1->f_15 = 1;
					}
					if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam2))
							{
							}
							else
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(uParam2->f_7, sLocal_311);
								func_112(iParam1, 15);
							}
						}
					}
					if (iParam1->f_13 > 200f)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
						}
						else
						{
							PED::DELETE_PED(&iParam0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
						{
							if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(*uParam2))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam2);
									VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2->f_7, sLocal_311);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(iParam2);
									VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2->f_7, sLocal_311);
								}
							}
							else
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
								VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2->f_7, sLocal_311);
							}
						}
						if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
						{
							HUD::REMOVE_BLIP(&(iParam1->f_1));
						}
					}
					break;
				
				case 15:
					if (iParam1->f_15 == 0)
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar11);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 767.01f, -2921.19f, 5.53f, 2f, 40000, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uVar11);
						TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar11);
						TASK::CLEAR_SEQUENCE_TASK(&uVar11);
						PED::SET_PED_DIES_IN_WATER(iParam0, 0);
						iParam1->f_15 = 1;
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
					{
						if (PED::IS_PED_CLIMBING(iParam3) && !PED::IS_PED_CLIMBING(iParam0))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iParam3, 767.1375f, -2920.18f, 3.604882f, 1.5f, 1.5f, 4f, 0, 1, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) == 1)
								{
									if (ENTITY::IS_ENTITY_AT_COORD(iParam0, 768.39f, -2910.733f, 1.06323f, 14f, 10f, 5f, 0, 1, 0))
									{
										func_112(iParam1, 21);
									}
								}
							}
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) == 7)
						{
							if (iParam1->f_13 < 15f)
							{
								func_112(iParam1, 21);
							}
							else
							{
								func_112(iParam1, 20);
							}
						}
					}
					if (iParam1->f_13 > 200f)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
						}
						else
						{
							PED::DELETE_PED(&iParam0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
						{
							if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(*iParam2))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
									VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2->f_7, sLocal_311);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(iParam2);
									VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2->f_7, sLocal_311);
								}
							}
							else
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
								VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2->f_7, sLocal_311);
							}
						}
						if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
						{
							HUD::REMOVE_BLIP(&(iParam1->f_1));
						}
					}
					break;
				
				case 20:
					if (iParam1->f_15 == 0)
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						iVar12 = func_124(iParam0, joaat("COP"), 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar12))
						{
							TASK::TASK_SMART_FLEE_PED(iParam0, iVar12, 300f, -1, 0, 0);
						}
						else
						{
							Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, 0f, -2f, 0f) };
							TASK::TASK_SMART_FLEE_COORD(iParam0, Var13, 300f, -1, 0, 0);
						}
						PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 2, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
						iParam1->f_8 = MISC::GET_GAME_TIMER();
						iParam1->f_15 = 1;
					}
					if (iParam1->f_13 < 15f)
					{
						func_112(iParam1, 21);
					}
					if (iParam1->f_13 > 200f)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
						}
						else
						{
							PED::DELETE_PED(&iParam0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
						{
							if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(*iParam2))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
									VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2->f_7, sLocal_311);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(iParam2);
									VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2->f_7, sLocal_311);
								}
							}
							else
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
								VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2->f_7, sLocal_311);
							}
						}
						if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
						{
							HUD::REMOVE_BLIP(&(iParam1->f_1));
						}
					}
					if (GlobalFunc_2521(7000, iParam1->f_8))
					{
						func_112(iParam1, 20);
					}
					break;
				
				case 21:
					if (iParam1->f_15 == 0)
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						if (!PED::IS_PED_GROUP_MEMBER(iParam0, GlobalFunc_468()))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iParam0, GlobalFunc_468());
						}
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam0, 0);
						PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(iParam0, GlobalFunc_468(), 1);
						PED::SET_PED_CONFIG_FLAG(iParam0, 268, false);
						PED::SET_PED_ACCURACY(iParam0, 20);
						PED::SET_PED_SHOOT_RATE(iParam0, 115);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, 1);
						PED::SET_COMBAT_FLOAT(iParam0, 5, 0.9f);
						PED::SET_COMBAT_FLOAT(iParam0, 8, 0f);
						PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, iParam3, 0f, 0f, 0f, 7.5f, 0);
						PED::SET_PED_CAN_RAGDOLL(iParam0, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam0, 0);
						PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
						PED::SET_PED_CONFIG_FLAG(iParam0, 29, false);
						PED::SET_PED_CONFIG_FLAG(iParam0, 174, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
						switch (GlobalFunc_8315())
						{
							case 1:
								iLocal_392 = 2;
								break;
							
							case 2:
								iLocal_392 = 1;
								break;
						}
						iParam1->f_15 = 1;
					}
					if (iParam1->f_15 == 1)
					{
						if (iParam1->f_13 > 50f || !PED::IS_PED_GROUP_MEMBER(iParam0, GlobalFunc_468()))
						{
							func_112(iParam1, 10);
						}
					}
					break;
				
				case 10:
					if (iParam1->f_15 == 0)
					{
						PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, iParam3, 0f, 0f, 0f, 7.5f, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
						iParam1->f_15 = 1;
					}
					if (iParam1->f_15 == 1)
					{
						if (iParam1->f_13 <= (50f / 3f))
						{
							func_112(iParam1, 21);
						}
					}
					break;
				
				case 24:
					func_112(iParam1, 19);
					break;
				}
			}
	}
}

int func_124(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9190
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, 28);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar17]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar17]))
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2) <= (iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar17 + iParam2)]))
							{
								if (!PED::IS_PED_INJURED(iVar0[(iVar17 + iParam2)]))
								{
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar17 + iParam2)]))
											{
												return iVar0[(iVar17 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar17 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}


void func_126(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x92F8
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_ACCURACY(iParam0, iParam1);
		PED::SET_PED_SHOOT_RATE(iParam0, iParam2);
		PED::SET_PED_FIRING_PATTERN(iParam0, iParam3);
	}
}

int func_127(var uParam0)//Position - 0x9322
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if ((uParam0[iVar0 /*18*/])->f_11 == 1)
		{
			if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_128(struct<8> Param0, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, char* sParam13, float fParam14, int iParam15, float fParam16, int iParam17, int iParam18, int iParam19)//Position - 0x9369
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Param0, 0))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Param0))
		{
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Param0.f_7, sParam13))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Param0, 1, 1);
				if (iParam18 == 0)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Param0, Param0.f_7, sParam13, 1);
				}
				else if (iParam18 == 1)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Param0, Param0.f_7, sParam13, iParam19, 0, 786603);
				}
				if (fParam16 > 0f)
				{
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0, fParam16);
				}
				else if (iParam17 == 1)
				{
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0, func_129(ENTITY::GET_ENTITY_COORDS(Param0, 1), Param0.f_7, sParam13, 16));
				}
				VEHICLE::SET_PLAYBACK_SPEED(Param0, fParam14);
				if (iParam15 == 1)
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Param0);
				}
			}
		}
	}
}

float func_129(struct<3> Param0, var uParam3, char* sParam4, int iParam5)//Position - 0x940E
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	uVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(uParam3, sParam4);
	fVar1 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0);
	fVar2 = (fVar1 / 2f);
	fVar3 = (fVar1 / 2f);
	iVar4 = 0;
	while (iVar4 <= iParam5)
	{
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, GlobalFunc_253((fVar2 - fVar3), 0f, fVar1))) < SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, GlobalFunc_253((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 - fVar3);
		}
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, GlobalFunc_253((fVar2 - fVar3), 0f, fVar1))) > SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, GlobalFunc_253((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 + fVar3);
		}
		iVar4++;
	}
	return fVar2;
}



int func_132()//Position - 0x950D
{
	switch (GlobalFunc_8315())
	{
		case 1:
			return iLocal_624[2];
			break;
		
		case 2:
			return iLocal_624[1];
			break;
	}
	return 0;
}

void func_133(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x9543
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam2) && !ENTITY::IS_ENTITY_DEAD(*uParam2))
		{
			switch (iParam1->f_26)
			{
				case 16:
					uParam2->f_8 = 1.15f;
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam2))
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(uParam2->f_7, sLocal_311);
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam2->f_7, sLocal_311))
						{
							func_128(*uParam2, sLocal_311, uParam2->f_8, 0, 1000f, 0, 0, 1);
						}
					}
					else
					{
						func_112(iParam1, 17);
					}
					break;
				
				case 17:
					if (PED::IS_PED_IN_VEHICLE(iParam0, *uParam2, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uParam2->f_1))
						{
							if (GlobalFunc_663("FRA1_GETBACKIN", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							HUD::REMOVE_BLIP(&(uParam2->f_1));
							iLocal_1049 = 1;
						}
					}
					else if (!HUD::DOES_BLIP_EXIST(uParam2->f_1))
					{
						if (!func_102("FRA1_GETBACKIN"))
						{
							if (GlobalFunc_5172(&Local_704, 1))
							{
								HUD::CLEAR_PRINTS();
							}
						}
						uParam2->f_1 = GlobalFunc_7055(*uParam2, 0, 0);
						func_97("FRA1_GETBACKIN", 7500, 1);
						iLocal_1049 = 0;
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam2))
					{
						if (uParam3->f_9 > 3000f)
						{
							if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam2);
							}
						}
					}
					break;
				
				case 18:
					if (iParam1->f_15 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam2))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam2->f_7, sLocal_311))
									{
										PED::SET_PED_INTO_VEHICLE(iParam0, *uParam2, -1);
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam2, uParam2->f_7, sLocal_311, 1);
										VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam2, 73000f);
										VEHICLE::SET_PLAYBACK_SPEED(*uParam2, 0.5f);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam2, 1);
									}
								}
							}
						}
						iParam1->f_15 = 1;
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam2))
					{
						if (uParam3->f_9 > 73500f)
						{
							if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								TASK::CLEAR_PED_TASKS(iParam0);
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam2);
								func_112(iParam1, 20);
							}
						}
					}
					break;
				
				case 20:
					break;
				}
			}
	}
}

void func_134(int iParam0, int iParam1, int iParam2)//Position - 0x9745
{
	var uVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2))
		{
			iParam0->f_13 = GlobalFunc_4951(*iParam0, iParam2);
			PED::SET_PED_RESET_FLAG(*iParam0, 398, 1);
			PED::SET_PED_RESET_FLAG(*iParam0, 227, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam1))
					{
						uParam1->f_9 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam1);
					}
				}
			}
			switch (iParam0->f_26)
			{
				case 16:
					if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
						{
							uParam1->f_8 = 1.15f;
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam1))
							{
								VEHICLE::REQUEST_VEHICLE_RECORDING(uParam1->f_7, sLocal_311);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam1->f_7, sLocal_311))
								{
									func_128(*uParam1, sLocal_311, uParam1->f_8, 0, 1000f, 0, 0, 1);
								}
							}
							else
							{
								WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_microsmg"), -1, 0, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("weapon_microsmg"), 0);
								PED::SET_PED_DIES_IN_WATER(*iParam0, 0);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, 1);
								if (!HUD::DOES_BLIP_EXIST(iParam0->f_1))
								{
									iParam0->f_1 = GlobalFunc_7056(*iParam0, 0, 0);
								}
								iParam0->f_12 = 0;
								func_112(iParam0, 17);
							}
						}
					}
					break;
				
				case 17:
					if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam1))
							{
								if (uParam1->f_9 > 3000f)
								{
									switch (GlobalFunc_8315())
									{
										case 1:
											func_135(*uParam1, Local_1114[Local_459.f_28 /*13*/], &(uParam1->f_8), uParam1->f_9);
											break;
										
										case 2:
											func_135(*uParam1, Local_1114[Local_430.f_28 /*13*/], &(uParam1->f_8), uParam1->f_9);
											break;
									}
									uParam1->f_8 = GlobalFunc_253(uParam1->f_8, 0f, 2f);
									VEHICLE::SET_PLAYBACK_SPEED(*uParam1, uParam1->f_8);
								}
							}
							switch (iParam0->f_12)
							{
								case 0:
									if (ENTITY::DOES_ENTITY_EXIST(Local_530))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_530) && !func_127(&Local_1940))
										{
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_530))
											{
												if (uParam1->f_9 > 12000f)
												{
													iParam0->f_15 = 0;
													iParam0->f_12++;
												}
											}
										}
									}
									break;
								
								case 1:
									if (iParam0->f_15 == 0)
									{
										if (ENTITY::DOES_ENTITY_EXIST(Local_530))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_530))
											{
												TASK::TASK_LOOK_AT_ENTITY(*iParam0, Local_530, 3000, 0, 2);
											}
										}
										iParam0->f_15 = 1;
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_530))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_530) && !func_127(&Local_1940))
										{
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_530))
											{
												if (uParam1->f_9 > 15500f)
												{
													iParam0->f_15 = 0;
													iParam0->f_12++;
												}
											}
										}
									}
									break;
								
								case 2:
									if (iParam0->f_15 == 0)
									{
										if (ENTITY::DOES_ENTITY_EXIST(Local_530))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_530) && !func_127(&Local_1940))
											{
												if (uParam1->f_9 >= fLocal_371 && uParam1->f_9 < fLocal_370)
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 0);
													PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 1);
													PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 2, 1);
													PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, 1);
													PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, 0);
													PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 512, 1);
													TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 100f, 0);
													func_126(*iParam0, 10, 50, -687903391);
													TASK::TASK_LOOK_AT_ENTITY(*iParam0, Local_530, 1500, 0, 2);
													PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
													iParam0->f_15 = 1;
												}
											}
										}
									}
									else if (uParam1->f_9 >= fLocal_370)
									{
										TASK::CLEAR_PED_TASKS(*iParam0);
										iParam0->f_15 = 0;
									}
									break;
								}
							}
					}
					break;
				
				case 18:
					if (iParam0->f_15 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam1))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam1->f_7, sLocal_311))
									{
										PED::SET_PED_INTO_VEHICLE(*iParam0, *uParam1, -1);
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam1, uParam1->f_7, sLocal_311, 1);
										VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam1, 73000f);
										VEHICLE::SET_PLAYBACK_SPEED(*uParam1, 0.8f);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam1, 1);
									}
								}
							}
						}
						ENTITY::SET_ENTITY_HEALTH(*iParam0, 600);
						PED::SET_PED_MAX_HEALTH(*iParam0, 600);
						ENTITY::SET_ENTITY_HEALTH(*uParam1, ENTITY::GET_ENTITY_HEALTH(*uParam1) + 500);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam1, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(*uParam1) + 500f));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam1, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(*uParam1) + 500f));
						WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_microsmg"), -1, 0, 1);
						WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_assaultrifle"), -1, 0, 1);
						PED::SET_PED_CAN_RAGDOLL(*iParam0, 0);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(*iParam0, 0);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 188, true);
						TASK::CLEAR_PED_TASKS(*iParam0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
						iParam0->f_15 = 1;
					}
					if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
					{
						if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam1))
							{
								switch (GlobalFunc_8315())
								{
									case 1:
										func_135(*uParam1, Local_1114[Local_459.f_28 /*13*/], &(uParam1->f_8), uParam1->f_9);
										break;
									
									case 2:
										func_135(*uParam1, Local_1114[Local_430.f_28 /*13*/], &(uParam1->f_8), uParam1->f_9);
										break;
								}
								VEHICLE::SET_PLAYBACK_SPEED(*uParam1, uParam1->f_8);
							}
							else
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(uParam1->f_7, sLocal_311);
								func_112(iParam0, 15);
							}
						}
					}
					if (iParam0->f_13 >= 300f)
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
						{
							PED::DELETE_PED(iParam0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(*uParam1))
								{
									VEHICLE::DELETE_VEHICLE(uParam1);
									VEHICLE::REMOVE_VEHICLE_RECORDING(iParam1->f_7, sLocal_311);
								}
							}
							else
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
								VEHICLE::REMOVE_VEHICLE_RECORDING(iParam1->f_7, sLocal_311);
							}
						}
						if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
						{
							HUD::REMOVE_BLIP(&(iParam0->f_1));
						}
					}
					break;
				
				case 15:
					if (iParam0->f_15 == 0)
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1175.89f, -2582.79f, 35.03f, 2f, 60000, 0.25f, 1, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("weapon_assaultrifle"), 1);
						ENTITY::SET_ENTITY_HEALTH(*iParam0, 1200);
						PED::SET_PED_MAX_HEALTH(*iParam0, 1200);
						iParam0->f_15 = 1;
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
					{
						if (!WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &uVar1, 1))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("weapon_assaultrifle"), 1);
						}
					}
					if (iParam0->f_15 == 1)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503) == 7)
							{
								func_112(iParam0, 20);
							}
						}
					}
					if (iParam0->f_13 < 15f)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
						{
							ENTITY::SET_ENTITY_HEALTH(*iParam0, 600);
							PED::SET_PED_MAX_HEALTH(*iParam0, 600);
							func_112(iParam0, 21);
						}
					}
					if (iParam0->f_13 > 200f)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
						{
							PED::SET_PED_KEEP_TASK(*iParam0, 1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
						}
						else
						{
							PED::DELETE_PED(iParam0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(*iParam1))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
									VEHICLE::REMOVE_VEHICLE_RECORDING(iParam1->f_7, sLocal_311);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(iParam1);
									VEHICLE::REMOVE_VEHICLE_RECORDING(iParam1->f_7, sLocal_311);
								}
							}
							else
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
								VEHICLE::REMOVE_VEHICLE_RECORDING(iParam1->f_7, sLocal_311);
							}
						}
						if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
						{
							HUD::REMOVE_BLIP(&(iParam0->f_1));
						}
					}
					break;
				
				case 20:
					if (iParam0->f_15 == 0)
					{
						TASK::CLEAR_PED_TASKS(*iParam0);
						iVar2 = func_124(*iParam0, joaat("COP"), 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							TASK::TASK_SMART_FLEE_PED(*iParam0, iVar2, 300f, -1, 0, 0);
						}
						else
						{
							Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(*iParam0, 0f, -2f, 0f) };
							TASK::TASK_SMART_FLEE_COORD(*iParam0, Var3, 300f, -1, 0, 0);
						}
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 2, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
						iParam0->f_8 = MISC::GET_GAME_TIMER();
						iParam0->f_15 = 1;
					}
					if (iParam0->f_13 < 15f)
					{
						if (iLocal_1031 == 0)
						{
							ENTITY::SET_ENTITY_HEALTH(*iParam0, 600);
							PED::SET_PED_MAX_HEALTH(*iParam0, 600);
							func_112(iParam0, 21);
						}
					}
					if (iParam0->f_13 > 200f)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
						}
						else
						{
							PED::DELETE_PED(iParam0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(*iParam1))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
									VEHICLE::REMOVE_VEHICLE_RECORDING(iParam1->f_7, sLocal_311);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(iParam1);
									VEHICLE::REMOVE_VEHICLE_RECORDING(iParam1->f_7, sLocal_311);
								}
							}
							else
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
								VEHICLE::REMOVE_VEHICLE_RECORDING(iParam1->f_7, sLocal_311);
							}
						}
						if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
						{
							HUD::REMOVE_BLIP(&(iParam0->f_1));
						}
					}
					if (GlobalFunc_2521(7000, iParam0->f_8))
					{
						func_112(iParam0, 20);
					}
					break;
				
				case 21:
					if (iParam0->f_15 == 0)
					{
						TASK::CLEAR_PED_TASKS(*iParam0);
						if (!PED::IS_PED_GROUP_MEMBER(*iParam0, GlobalFunc_468()))
						{
							PED::SET_PED_AS_GROUP_MEMBER(*iParam0, GlobalFunc_468());
						}
						PED::SET_GROUP_SEPARATION_RANGE(GlobalFunc_468(), 50f);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(*iParam0, 0);
						PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(*iParam0, GlobalFunc_468(), 1);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 268, false);
						PED::SET_PED_ACCURACY(*iParam0, 20);
						PED::SET_PED_SHOOT_RATE(*iParam0, 115);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 2, 1);
						PED::SET_COMBAT_FLOAT(*iParam0, 5, 0.9f);
						PED::SET_COMBAT_FLOAT(*iParam0, 8, 0f);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*iParam0, iParam2, 0f, 0f, 0f, 7.5f, 0);
						PED::SET_PED_CAN_RAGDOLL(*iParam0, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 16);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(*iParam0, 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, 0);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 188, true);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 29, false);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 174, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
						iLocal_392 = 3;
						iParam0->f_15 = 1;
					}
					if (iParam0->f_15 == 1)
					{
						if (iParam0->f_13 > 50f || !PED::IS_PED_GROUP_MEMBER(*iParam0, GlobalFunc_468()))
						{
							func_112(iParam0, 10);
						}
					}
					break;
				
				case 10:
					if (iParam0->f_15 == 0)
					{
						PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*iParam0, iParam2, 0f, 0f, 0f, 7.5f, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
						iParam0->f_15 = 1;
					}
					if (iParam0->f_15 == 1)
					{
						if (iParam0->f_13 <= (50f / 3f))
						{
							func_112(iParam0, 21);
						}
					}
					break;
				}
			}
	}
}

void func_135(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0xA177
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1);
		fVar7 = 5f;
		fVar8 = 10f;
		fVar9 = 17.5f;
		fVar10 = 50f;
		fVar11 = 1f;
		Var12 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, Var3) };
		if (Var12.f_1 > 1f)
		{
			if (fVar6 > fVar10)
			{
				fVar11 = 5f;
			}
			else if (fVar6 > fVar9)
			{
				fVar11 = 4f;
			}
			else if (fVar6 > fVar8)
			{
				fVar11 = 3f;
			}
			else
			{
				fVar11 = 2.5f;
			}
		}
		else if (fVar6 > fVar10)
		{
			if (fParam3 < 30000f)
			{
				fVar11 = 0.5f;
			}
			else
			{
				fVar11 = 0.4f;
			}
		}
		else if (fVar6 > fVar9)
		{
			fVar11 = 0.75f;
		}
		else if (fVar6 > fVar8)
		{
			fVar11 = 1f;
		}
		else if (fVar6 > fVar7)
		{
			fVar11 = 1.25f;
		}
		else
		{
			fVar11 = 1.35f;
		}
		if (ENTITY::IS_ENTITY_AT_COORD(iParam1, 347.6082f, -2354.943f, 9.17992f, 36f, 64f, 10f, 0, 1, 0))
		{
			fVar11 = (fVar11 + 0.25f);
		}
		GlobalFunc_2906(uParam2, fVar11, 0.01f, 1);
	}
}

void func_136(int iParam0)//Position - 0xA2C2
{
	switch (*iParam0)
	{
		case 0:
			Local_1194[0 /*13*/].f_2 = { 1114.05f, -2512.1f, 32.14f };
			Local_1194[0 /*13*/].f_5 = 20.0221f;
			Local_1194[0 /*13*/].f_6 = joaat("baller");
			Local_1194[1 /*13*/].f_2 = { 1129.352f, -2510.198f, 32.2125f };
			Local_1194[1 /*13*/].f_5 = 190.3422f;
			Local_1194[1 /*13*/].f_6 = joaat("baller");
			Local_1194[2 /*13*/].f_2 = { 1150.18f, -2509.413f, 32.3467f };
			Local_1194[2 /*13*/].f_5 = 14.0235f;
			Local_1194[2 /*13*/].f_6 = joaat("baller");
			Local_1194[3 /*13*/].f_2 = { 769.01f, -2944.49f, 4.83f };
			Local_1194[3 /*13*/].f_5 = 296.0139f;
			Local_1194[3 /*13*/].f_6 = joaat("baller");
			Local_1194[4 /*13*/].f_2 = { 781.261f, -2957.335f, 4.8006f };
			Local_1194[4 /*13*/].f_5 = 249.0547f;
			Local_1194[4 /*13*/].f_6 = joaat("baller");
			Local_1194[5 /*13*/].f_2 = { 769.4281f, -2974.841f, 4.8384f };
			Local_1194[5 /*13*/].f_5 = 296.4401f;
			Local_1194[5 /*13*/].f_6 = joaat("baller");
			SYSTEM::SETTIMERA(0);
			*iParam0++;
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 250)
			{
				if (func_138(&(Local_1194[0 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					*iParam0++;
				}
			}
			break;
		
		case 2:
			if (SYSTEM::TIMERA() > 250)
			{
				if (func_138(&(Local_1194[1 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					*iParam0++;
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 250)
			{
				if (func_138(&(Local_1194[2 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					*iParam0++;
				}
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > 250)
			{
				if (func_138(&(Local_1194[3 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					*iParam0++;
				}
			}
			break;
		
		case 5:
			if (SYSTEM::TIMERA() > 250)
			{
				if (func_138(&(Local_1194[4 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					*iParam0++;
				}
			}
			break;
		
		case 6:
			if (SYSTEM::TIMERA() > 250)
			{
				if (func_138(&(Local_1194[5 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					*iParam0++;
				}
			}
			break;
		
		case 7:
			func_137(&Local_1194, 0, 1);
			break;
	}
}

void func_137(int iParam0, int iParam1, int iParam2)//Position - 0xA570
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_108(iParam0[iVar0 /*13*/], iParam1, iParam2);
		iVar0++;
	}
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xA59F
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam2 == 1)
				{
					*iParam0 = func_178(iParam0->f_6, iParam0->f_2, iParam0->f_5);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (iParam3 == 145)
				{
					*iParam0 = VEHICLE::CREATE_VEHICLE(iParam0->f_6, iParam0->f_2, iParam0->f_5, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (func_174(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
				{
					if (iParam6 != -1 && iParam7 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam7);
					}
					if (iParam5 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam5);
					}
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, iParam8, iParam9);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
					{
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam4);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam4);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (func_139(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
				{
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam4);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam4);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_139(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0xA757
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
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
				GlobalFunc_5811(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
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
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
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
				GlobalFunc_5811(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
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
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
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
				GlobalFunc_5811(iParam0, &(Var5.f_31), &(Var5.f_57));
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
						GlobalFunc_5120(iParam0);
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
					func_140(iParam1, iParam0, 0, 1);
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

void func_140(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xB53D
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((GlobalFunc_42(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
	{
		if (iParam2 > Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			GlobalFunc_8626(*iParam1, iParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, 0))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 1;
			}
			else
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
			}
		}
		else
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62));
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_65 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_69), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_70), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_71));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3209[iParam0] = 10;
		if ((VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) < 255) && GlobalFunc_6706(*iParam1, 0, &uVar0))
		{
			GlobalFunc_102(iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_57));
			if (bParam3)
			{
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_40 = 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_4 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_5 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_6 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_10 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_16 = !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_19 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27 };
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_23 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_7 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[11];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[12];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_9 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[23];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_11 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[4];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[15];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_13 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[16];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_14 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[14];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_15 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[22];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_18 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[20];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_17 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[18];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_32 = VEHICLE::_0xEEBFC7A7EFDC35B4(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_31 = GlobalFunc_192(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				GlobalFunc_4968(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7, iVar3, 1, &(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				GlobalFunc_4968(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6, -1, iVar3, 0, &(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_2));
			}
		}
	}
}


































int func_174(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0xF0B2
{
	struct<74> Var0;
	int iVar74;
	int iVar75;
	
	if (!GlobalFunc_42(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		GlobalFunc_549(iParam1, &Var0, iParam7);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][0 /*74*/] == Var0) || (iParam1 == 15 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][1 /*74*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar74 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar74 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Var0.f_2);
				iVar75 = 0;
				while (iVar75 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar75 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_11[iVar75]);
					iVar75++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, 0))
					{
						if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, 1);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, 1);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_27));
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5811(uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Var0.f_72);
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
				}
				GlobalFunc_2526(*uParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0);
			if (STREAMING::HAS_MODEL_LOADED(Var0))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Var0, Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				GlobalFunc_7141(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					GlobalFunc_2526(*uParam0);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}




int func_178(int iParam0, struct<3> Param1, float fParam4)//Position - 0xFCAD
{
	int iVar0;
	
	if (iParam0 == joaat("monroe"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 89, 89);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 88, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " FA5T66 ");
	}
	else if (iParam0 == joaat("cheetah"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 62, 62);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 68, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " SDTM1YP");
	}
	else if (iParam0 == joaat("stinger"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 27, 27);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 36, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "ALPHADOG");
		VEHICLE::SET_VEHICLE_EXTRA(iVar0, 1, true);
	}
	else if (iParam0 == joaat("jb700"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "  4G3NT");
	}
	else if (iParam0 == joaat("entityxf"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 38, 38);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 37, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " MKB652 ");
	}
	else if (iParam0 == joaat("ztype"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 0, 0);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 10, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " V1NTAG3");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
	}
	return iVar0;
}

void func_179()//Position - 0xFE30
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_102("F1_SRCLEAR"))
	{
		if (!GlobalFunc_111())
		{
			if (!GlobalFunc_5172(&Local_704, 0))
			{
				if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_SRCLEAR", 9, 0, 0, 0))
				{
					func_98("F1_SRCLEAR", 1);
				}
			}
		}
		else
		{
			GlobalFunc_5105();
		}
	}
	else if (!GlobalFunc_111())
	{
		iLocal_703 = 1;
	}
	if (iLocal_1031 == 0)
	{
		if (!GlobalFunc_5172(&Local_704, 1))
		{
			if (GlobalFunc_2522(func_908(2), Local_1114[Local_430.f_28 /*13*/]) && GlobalFunc_2522(func_908(1), Local_1114[Local_459.f_28 /*13*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1114[Local_430.f_28 /*13*/]) || VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1114[Local_459.f_28 /*13*/]))
				{
					if (Local_430.f_13 < 10f)
					{
						if (!func_102("F1_LCFTJR1"))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFTJR1", 7, 0, 0, 0))
							{
								func_98("F1_LCFTJR1", 1);
							}
						}
						else if (!func_102("F1_LCFTJR2"))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFTJR2", 7, 0, 0, 0))
							{
								func_98("F1_LCFTJR2", 1);
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(func_908(2)) && ENTITY::DOES_ENTITY_EXIST(func_908(1)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(func_908(2)) && !ENTITY::IS_ENTITY_DEAD(func_908(1)))
				{
					if (PED::IS_PED_CLIMBING(func_908(2)) || PED::IS_PED_CLIMBING(func_908(1)))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(func_908(2), 767.2809f, -2921.153f, 3.528324f, 14f, 18f, 6f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(func_908(1), 767.2809f, -2921.153f, 3.528324f, 14f, 18f, 6f, 0, 1, 0))
						{
							if (!func_102("F1_LCFCUL") && !func_102("F1_LCTCUL"))
							{
								Var0 = { ENTITY::GET_ENTITY_COORDS(func_908(2), 1) };
								Var3 = { ENTITY::GET_ENTITY_COORDS(func_908(1), 1) };
								if (PED::IS_PED_CLIMBING(func_908(1)))
								{
									if (Var3.f_2 > Var0.f_2)
									{
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFCUL", 7, 0, 0, 0))
										{
											func_98("F1_LCFCUL", 1);
										}
									}
								}
								if (PED::IS_PED_CLIMBING(func_908(2)))
								{
									if (Var3.f_2 < Var0.f_2)
									{
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTCUL", 7, 0, 0, 0))
										{
											func_98("F1_LCTCUL", 1);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		switch (iLocal_392)
		{
			case 3:
				if (!func_102("F1_LCLJF") && !func_102("F1_LCLJT"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							switch (GlobalFunc_8315())
							{
								case 1:
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLJF", 7, 0, 0, 0))
									{
										func_98("F1_LCLJF", 1);
										Local_401.f_9 = MISC::GET_GAME_TIMER();
									}
									break;
								
								case 2:
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLJT", 7, 0, 0, 0))
									{
										func_98("F1_LCLJT", 1);
										Local_401.f_9 = MISC::GET_GAME_TIMER();
									}
									break;
								}
							}
					}
				}
				else if (!func_102("F1_LCLJFR") && !func_102("F1_LCLJTR"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							switch (GlobalFunc_8315())
							{
								case 1:
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLJFR", 7, 0, 0, 0))
									{
										func_98("F1_LCLJFR", 1);
										Local_401.f_9 = MISC::GET_GAME_TIMER();
									}
									break;
								
								case 2:
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLJTR", 7, 0, 0, 0))
									{
										func_98("F1_LCLJTR", 1);
										Local_401.f_9 = MISC::GET_GAME_TIMER();
									}
									break;
								}
							}
						}
				}
				if (!func_102("F1_LCLNC"))
				{
					if (GlobalFunc_2521(10000, Local_401.f_9))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_401, 0))
								{
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLNC", 7, 0, 0, 0))
									{
										Local_401.f_9 = MISC::GET_GAME_TIMER();
										iLocal_1029++;
										if (iLocal_1029 == 2)
										{
											func_98("F1_LCLNC", 1);
										}
									}
								}
							}
						}
					}
				}
				if ((!func_102("F1_LCLNCR") && !func_102("F1_LCFSOFR")) && !func_102("F1_LCTSOTR"))
				{
					if (func_102("F1_LCLNC"))
					{
						if (GlobalFunc_2521(15000, Local_401.f_9))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_401, 0))
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
										{
											case 0:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLNCR", 7, 0, 0, 0))
												{
													Local_401.f_9 = MISC::GET_GAME_TIMER();
													iLocal_1029++;
													if (iLocal_1029 >= 7)
													{
														func_98("F1_LCLNCR", 1);
													}
												}
												break;
											
											case 1:
												switch (GlobalFunc_8315())
												{
													case 1:
														if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFSOFR", 7, 0, 0, 0))
														{
															Local_401.f_9 = MISC::GET_GAME_TIMER();
															iLocal_1029++;
															if (iLocal_1029 >= 7)
															{
																func_98("F1_LCFSOFR", 1);
															}
														}
														break;
													
													case 2:
														if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTSOTR", 7, 0, 0, 0))
														{
															Local_401.f_9 = MISC::GET_GAME_TIMER();
															iLocal_1029++;
															if (iLocal_1029 >= 7)
															{
																func_98("F1_LCTSOTR", 1);
															}
														}
														break;
												}
												break;
											}
										}
									}
								}
							}
						}
				}
				if (!func_102("F1_LCFSOF") && !func_102("F1_LCTSOT"))
				{
					if (!GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									switch (GlobalFunc_8315())
									{
										case 1:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFSOF", 7, 0, 0, 0))
											{
												func_98("F1_LCFSOF", 1);
											}
											break;
										
										case 2:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTSOT", 7, 0, 0, 0))
											{
												func_98("F1_LCTSOT", 1);
											}
											break;
										}
									}
								}
							}
						}
				}
				if (!func_102("F1_LCLSLC"))
				{
					if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLSLC", 7, 0, 0, 0))
								{
									func_98("F1_LCLSLC", 1);
								}
							}
						}
					}
				}
				else
				{
					if (!func_102("F1_LCLFC1") && !func_102("F1_LCLTC1"))
					{
						if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									switch (GlobalFunc_8315())
									{
										case 1:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLFC1", 7, 0, 0, 0))
											{
												func_98("F1_LCLFC1", 1);
											}
											break;
										
										case 2:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLTC1", 7, 0, 0, 0))
											{
												func_98("F1_LCLTC1", 1);
											}
											break;
										}
									}
								}
							}
					}
					if (!func_102("F1_LCLFC2") && !func_102("F1_LCLTC2"))
					{
						if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									switch (GlobalFunc_8315())
									{
										case 1:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLFC2", 7, 0, 0, 0))
											{
												func_98("F1_LCLFC2", 1);
												Local_401.f_9 = MISC::GET_GAME_TIMER();
											}
											break;
										
										case 2:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLTC2", 7, 0, 0, 0))
											{
												func_98("F1_LCLTC2", 1);
												Local_401.f_9 = MISC::GET_GAME_TIMER();
											}
											break;
										}
									}
								}
							}
					}
					if (!func_102("F1_LCLFC3") && !func_102("F1_LCLTC3"))
					{
						if (GlobalFunc_2521(20000, Local_401.f_9))
						{
							if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										switch (GlobalFunc_8315())
										{
											case 1:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLFC3", 7, 0, 0, 0))
												{
													func_98("F1_LCLFC3", 1);
												}
												break;
											
											case 2:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLTC3", 7, 0, 0, 0))
												{
													func_98("F1_LCLTC3", 1);
												}
												break;
											}
										}
									}
								}
						}
					}
					else
					{
						if (!func_102("F1_CHAT1") && !func_102("F1_CHAT6"))
						{
							if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										switch (GlobalFunc_8315())
										{
											case 1:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_CHAT1", 7, 0, 0, 0))
												{
													func_98("F1_CHAT1", 1);
												}
												break;
											
											case 2:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_CHAT6", 7, 0, 0, 0))
												{
													func_98("F1_CHAT6", 1);
												}
												break;
											}
										}
									}
								}
						}
						if (!func_102("F1_CHAT2") && !func_102("F1_CHAT7"))
						{
							if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										switch (GlobalFunc_8315())
										{
											case 1:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_CHAT2", 7, 0, 0, 0))
												{
													func_98("F1_CHAT2", 1);
												}
												break;
											
											case 2:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_CHAT7", 7, 0, 0, 0))
												{
													func_98("F1_CHAT7", 1);
												}
												break;
											}
										}
									}
								}
						}
						if (!func_102("F1_CHAT3") && !func_102("F1_CHAT8"))
						{
							if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										switch (GlobalFunc_8315())
										{
											case 1:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_CHAT3", 7, 0, 0, 0))
												{
													func_98("F1_CHAT3", 1);
												}
												break;
											
											case 2:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_CHAT8", 7, 0, 0, 0))
												{
													func_98("F1_CHAT8", 1);
												}
												break;
											}
										}
									}
								}
						}
						if (!func_102("F1_CHAT4") && !func_102("F1_CHAT9"))
						{
							if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										switch (GlobalFunc_8315())
										{
											case 1:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_CHAT4", 7, 0, 0, 0))
												{
													func_98("F1_CHAT4", 1);
												}
												break;
											
											case 2:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_CHAT9", 7, 0, 0, 0))
												{
													func_98("F1_CHAT9", 1);
												}
												break;
											}
										}
									}
								}
						}
						if (!func_102("F1_STRETCH"))
						{
							if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										switch (GlobalFunc_8315())
										{
											case 1:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_STRETCH", 7, 0, 0, 0))
												{
													func_98("F1_STRETCH", 1);
												}
												break;
											
											case 2:
												func_98("F1_STRETCH", 1);
												break;
											}
										}
									}
								}
						}
						if (!func_102("F1_CHAT5") && !func_102("F1_CHAT10"))
						{
							if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										switch (GlobalFunc_8315())
										{
											case 1:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_CHAT5", 7, 0, 0, 0))
												{
													func_98("F1_CHAT5", 1);
													iLocal_903 = 1;
													iLocal_905 = 0;
													iLocal_904 = MISC::GET_RANDOM_INT_IN_RANGE(12000, 15001);
													Local_401.f_9 = MISC::GET_GAME_TIMER();
												}
												break;
											
											case 2:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_CHAT10", 7, 0, 0, 0))
												{
													func_98("F1_CHAT10", 1);
													iLocal_903 = 1;
													iLocal_905 = 0;
													iLocal_904 = MISC::GET_RANDOM_INT_IN_RANGE(12000, 15001);
													Local_401.f_9 = MISC::GET_GAME_TIMER();
												}
												break;
											}
										}
									}
								}
							}
					}
					if (iLocal_903 == 1)
					{
						if (GlobalFunc_2521(iLocal_904, Local_401.f_9))
						{
							if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
							{
								if (!PLAYER::ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(PLAYER::PLAYER_ID()))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_704, 1))
										{
											if (!func_102("F1_LCLSLC_2"))
											{
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLSLC", 7, 0, 0, 0))
												{
													func_98("F1_LCLSLC_2", 1);
													iLocal_905++;
													iLocal_904 = (iLocal_904 + (iLocal_905 * MISC::GET_RANDOM_INT_IN_RANGE(8000, 10001)));
													Local_401.f_9 = MISC::GET_GAME_TIMER();
												}
											}
											else if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLRLC", 7, 0, 0, 0))
											{
												iLocal_905++;
												iLocal_904 = (iLocal_904 + (iLocal_905 * MISC::GET_RANDOM_INT_IN_RANGE(5000, 7501)));
												Local_401.f_9 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
			case 1:
				if (!func_102("F1_LCTJF") && !func_102("F1_LCFJT"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							switch (iLocal_392)
							{
								case 2:
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTJF", 7, 0, 0, 0))
									{
										func_98("F1_LCTJF", 1);
										Local_430.f_9 = MISC::GET_GAME_TIMER();
									}
									break;
								
								case 1:
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFJT", 7, 0, 0, 0))
									{
										func_98("F1_LCFJT", 1);
										Local_430.f_9 = MISC::GET_GAME_TIMER();
									}
									break;
								}
							}
						}
				}
				if (!func_102("F1_LCTNC") && !func_102("F1_LCFNC"))
				{
					if (GlobalFunc_2521(10000, Local_430.f_9))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(func_908(1), 0) && !PED::IS_PED_IN_ANY_VEHICLE(func_908(2), 0))
								{
									switch (iLocal_392)
									{
										case 2:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTNC", 7, 0, 0, 0))
											{
												Local_430.f_9 = MISC::GET_GAME_TIMER();
												func_98("F1_LCTNC", 1);
											}
											break;
										
										case 1:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFNC", 7, 0, 0, 0))
											{
												Local_430.f_9 = MISC::GET_GAME_TIMER();
												func_98("F1_LCFNC", 1);
											}
											break;
										}
									}
								}
							}
						}
				}
				if (((!func_102("F1_LCTNCR") && !func_102("F1_LCFNCR")) && !func_102("F1_LCFSOFR")) && !func_102("F1_LCTSOTR"))
				{
					if (func_102("F1_LCTNC") || func_102("F1_LCFNC"))
					{
						if (GlobalFunc_2521(15000, Local_430.f_9))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(func_908(1), 0) && !PED::IS_PED_IN_ANY_VEHICLE(func_908(2), 0))
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
										{
											case 0:
												switch (iLocal_392)
												{
													case 2:
														if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTNCR", 7, 0, 0, 0))
														{
															Local_430.f_9 = MISC::GET_GAME_TIMER();
															iLocal_1029++;
															if (iLocal_1029 >= 5)
															{
																func_98("F1_LCTNCR", 1);
															}
														}
														break;
													
													case 1:
														if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFNCR", 7, 0, 0, 0))
														{
															Local_430.f_9 = MISC::GET_GAME_TIMER();
															iLocal_1029++;
															if (iLocal_1029 >= 5)
															{
																func_98("F1_LCFNCR", 1);
															}
														}
														break;
												}
												break;
											
											case 1:
												switch (GlobalFunc_8315())
												{
													case 1:
														if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFSOFR", 7, 0, 0, 0))
														{
															Local_430.f_9 = MISC::GET_GAME_TIMER();
															iLocal_1029++;
															if (iLocal_1029 >= 5)
															{
																func_98("F1_LCFSOFR", 1);
															}
														}
														break;
													
													case 2:
														if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTSOTR", 7, 0, 0, 0))
														{
															Local_430.f_9 = MISC::GET_GAME_TIMER();
															iLocal_1029++;
															if (iLocal_1029 >= 5)
															{
																func_98("F1_LCTSOTR", 1);
															}
														}
														break;
												}
												break;
											}
										}
									}
								}
							}
						}
				}
				if (!func_102("F1_LCFSOF") && !func_102("F1_LCTSOT"))
				{
					if (!GlobalFunc_1976(func_908(2), func_908(1)))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									switch (GlobalFunc_8315())
									{
										case 1:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFSOF", 7, 0, 0, 0))
											{
												func_98("F1_LCFSOF", 1);
											}
											break;
										
										case 2:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTSOT", 7, 0, 0, 0))
											{
												func_98("F1_LCTSOT", 1);
											}
											break;
										}
									}
								}
							}
						}
				}
				if (!func_102("F1_LCTSLC") && !func_102("F1_LCFSLC"))
				{
					if (GlobalFunc_1976(func_908(1), func_908(2)))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								switch (iLocal_392)
								{
									case 2:
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTSLC", 7, 0, 0, 0))
										{
											func_98("F1_LCTSLC", 1);
											Local_430.f_9 = MISC::GET_GAME_TIMER();
										}
										break;
									
									case 1:
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFSLC", 7, 0, 0, 0))
										{
											func_98("F1_LCFSLC", 1);
											Local_430.f_9 = MISC::GET_GAME_TIMER();
										}
										break;
									}
								}
							}
					}
				}
				else
				{
					if (!func_102("F1_LCFTC1"))
					{
						if (GlobalFunc_1976(func_908(1), func_908(2)))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFTC1", 7, 0, 0, 0))
									{
										func_98("F1_LCFTC1", 1);
									}
								}
							}
						}
					}
					if (!func_102("F1_LCFTC2"))
					{
						if (GlobalFunc_1976(func_908(1), func_908(2)))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFTC2", 7, 0, 0, 0))
									{
										func_98("F1_LCFTC2", 1);
									}
								}
							}
						}
					}
					if (!func_102("F1_LCFTC3"))
					{
						if (GlobalFunc_1976(func_908(1), func_908(2)))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFTC3", 7, 0, 0, 0))
									{
										func_98("F1_LCFTC3", 1);
										iLocal_903 = 1;
										iLocal_905 = 0;
										iLocal_904 = MISC::GET_RANDOM_INT_IN_RANGE(12000, 15001);
										Local_430.f_9 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_903 == 1)
					{
						if (GlobalFunc_2521(iLocal_904, Local_430.f_9))
						{
							if (GlobalFunc_1976(func_908(1), func_908(2)))
							{
								if (!PLAYER::ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(PLAYER::PLAYER_ID()))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_704, 1))
										{
											switch (iLocal_392)
											{
												case 2:
													if (!func_102("F1_LCTSLC_2"))
													{
														if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTSLC", 7, 0, 0, 0))
														{
															func_98("F1_LCTSLC_2", 1);
															iLocal_905++;
															iLocal_904 = (iLocal_904 + (iLocal_905 * MISC::GET_RANDOM_INT_IN_RANGE(8000, 10001)));
															Local_430.f_9 = MISC::GET_GAME_TIMER();
														}
													}
													else if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTRLC", 7, 0, 0, 0))
													{
														iLocal_905++;
														iLocal_904 = (iLocal_904 + (iLocal_905 * MISC::GET_RANDOM_INT_IN_RANGE(5000, 7501)));
														Local_430.f_9 = MISC::GET_GAME_TIMER();
													}
													break;
												
												case 1:
													if (!func_102("F1_LCFSLC_2"))
													{
														if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFSLC", 7, 0, 0, 0))
														{
															func_98("F1_LCFSLC_2", 1);
															iLocal_905++;
															iLocal_904 = (iLocal_904 + (iLocal_905 * MISC::GET_RANDOM_INT_IN_RANGE(8000, 10001)));
															Local_430.f_9 = MISC::GET_GAME_TIMER();
														}
													}
													else if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFRLC", 7, 0, 0, 0))
													{
														iLocal_905++;
														iLocal_904 = (iLocal_904 + (iLocal_905 * MISC::GET_RANDOM_INT_IN_RANGE(5000, 7501)));
														Local_430.f_9 = MISC::GET_GAME_TIMER();
													}
													break;
												}
											}
										}
									}
								}
							}
						}
				}
				break;
		}
	}
	else
	{
		switch (iLocal_392)
		{
			case 3:
				if (iLocal_1030 == 0)
				{
					if (!func_102("F1_LCLCL"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLCL", 7, 0, 0, 0))
								{
									func_98("F1_LCLCL", 1);
								}
							}
						}
						else
						{
							GlobalFunc_5105();
						}
					}
					if (!func_102("F1_LCFDL1") && !func_102("F1_LCTDL1"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_704.f_5) && (func_102(&Local_316) || MISC::IS_STRING_NULL_OR_EMPTY(&Local_316)))
						{
							if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										switch (GlobalFunc_8315())
										{
											case 1:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFDL1", 7, 0, 0, 0))
												{
													func_98("F1_LCFDL1", 1);
												}
												break;
											
											case 2:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTDL1", 7, 0, 0, 0))
												{
													func_98("F1_LCTDL1", 1);
												}
												break;
											}
										}
									}
								}
							}
					}
					if (!func_102("F1_LCFDL2"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_704.f_5) && (func_102(&Local_316) || MISC::IS_STRING_NULL_OR_EMPTY(&Local_316)))
						{
							if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										switch (GlobalFunc_8315())
										{
											case 1:
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFDL2", 7, 0, 0, 0))
												{
													func_98("F1_LCFDL2", 1);
												}
												break;
											}
										}
									}
								}
							}
					}
				}
				else
				{
					if (!func_102("F1_LCLSD"))
					{
						if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_401))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLSD", 7, 0, 0, 0))
									{
										func_98("F1_LCLSD", 1);
									}
								}
							}
							else
							{
								GlobalFunc_4956();
							}
						}
						else
						{
							func_98("F1_LCLSD", 1);
						}
					}
					if (!func_102("F1_LCFDLE") && !func_102("F1_LCTDLE"))
					{
						if (func_102("F1_LCLSD"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									switch (GlobalFunc_8315())
									{
										case 1:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFDLE", 7, 0, 0, 0))
											{
												func_98("F1_LCFDLE", 1);
											}
											break;
										
										case 2:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTDLE", 7, 0, 0, 0))
											{
												func_98("F1_LCTDLE", 1);
											}
											break;
										}
									}
								}
						}
					}
					else if (!GlobalFunc_111())
					{
						iLocal_1055 = 1;
					}
				}
				break;
			
			case 2:
			case 1:
				if (iLocal_1030 == 0)
				{
					if (!func_102("F1_LCTCL") && !func_102("F1_LCFCL"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								switch (iLocal_392)
								{
									case 2:
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTCL", 7, 0, 0, 0))
										{
											func_98("F1_LCTCL", 1);
										}
										break;
									
									case 1:
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFCL", 7, 0, 0, 0))
										{
											func_98("F1_LCFCL", 1);
										}
										break;
									}
							}
						}
						else
						{
							GlobalFunc_5105();
						}
					}
					if (!func_102("F1_LCFTD1"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_704.f_5) && ((func_102(&Local_324) || MISC::IS_STRING_NULL_OR_EMPTY(&Local_324)) || (func_102(&Local_320) || MISC::IS_STRING_NULL_OR_EMPTY(&Local_320))))
						{
							if (GlobalFunc_1976(func_908(1), func_908(2)))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFTD1", 7, 0, 0, 0))
										{
											func_98("F1_LCFTD1", 1);
										}
									}
								}
							}
						}
					}
					if (!func_102("F1_LCTSD") && !func_102("F1_LCFSD"))
					{
						switch (iLocal_392)
						{
							case 2:
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_360, 1) < 75f)
								{
									if (GlobalFunc_1976(func_908(1), func_908(2)))
									{
										if (!GlobalFunc_111())
										{
											if (!GlobalFunc_5172(&Local_704, 1))
											{
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCTSD", 7, 0, 0, 0))
												{
													func_98("F1_LCTSD", 1);
												}
											}
										}
										else
										{
											GlobalFunc_5105();
										}
									}
									else
									{
										func_98("F1_LCTSD", 1);
									}
								}
								break;
							
							case 1:
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_357, 1) < 75f)
								{
									if (GlobalFunc_1976(func_908(1), func_908(2)))
									{
										if (!GlobalFunc_111())
										{
											if (!GlobalFunc_5172(&Local_704, 1))
											{
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFSD", 7, 0, 0, 0))
												{
													func_98("F1_LCFSD", 1);
												}
											}
										}
										else
										{
											GlobalFunc_5105();
										}
									}
									else
									{
										func_98("F1_LCFSD", 1);
									}
								}
								break;
							}
					}
				}
				else if (!func_102("F1_LCFTDE"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCFTDE", 7, 0, 0, 0))
							{
								func_98("F1_LCFTDE", 1);
							}
						}
					}
				}
				else if (!GlobalFunc_111())
				{
					iLocal_1055 = 1;
				}
				break;
			}
	}
}
















int func_195(int iParam0)//Position - 0x11E15
{
	func_134(&Local_401, &(Local_1114[Local_401.f_28 /*13*/]), PLAYER::PLAYER_PED_ID());
	switch (GlobalFunc_8315())
	{
		case 1:
			func_133(PLAYER::PLAYER_PED_ID(), &Local_459, &(Local_1114[Local_459.f_28 /*13*/]), &(Local_1114[Local_401.f_28 /*13*/]));
			func_123(func_132(), &Local_430, &(Local_1114[Local_430.f_28 /*13*/]), PLAYER::PLAYER_PED_ID(), &(Local_1114[Local_401.f_28 /*13*/]), 0);
			if (iLocal_1049 == 1)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_401.f_1))
				{
					Local_401.f_1 = GlobalFunc_7056(Local_401, 0, 0);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_430.f_1))
				{
					Local_430.f_1 = GlobalFunc_7056(func_908(2), 0, 0);
				}
				if (!func_102("FRA1_FDLLT") && !func_102("FRA1_TDLLF"))
				{
					if (Local_401.f_13 > 75f)
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_5105();
						}
						if (GlobalFunc_5172(&Local_704, 1))
						{
							HUD::CLEAR_PRINTS();
						}
						func_97("FRA1_FDLLT", 7500, 1);
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_401.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_401.f_1));
				}
				if (HUD::DOES_BLIP_EXIST(Local_430.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_430.f_1));
				}
			}
			if (!GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_1114[Local_459.f_28 /*13*/]))
			{
				iLocal_702 = 0;
			}
			else
			{
				iLocal_702 = 1;
			}
			break;
		
		case 2:
			func_133(PLAYER::PLAYER_PED_ID(), &Local_459, &(Local_1114[Local_430.f_28 /*13*/]), &(Local_1114[Local_401.f_28 /*13*/]));
			func_123(func_132(), &Local_430, &(Local_1114[Local_459.f_28 /*13*/]), PLAYER::PLAYER_PED_ID(), &(Local_1114[Local_401.f_28 /*13*/]), 0);
			if (iLocal_1049 == 1)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_401.f_1))
				{
					Local_401.f_1 = GlobalFunc_7056(Local_401, 0, 0);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_459.f_1))
				{
					Local_459.f_1 = GlobalFunc_7056(func_908(1), 0, 0);
				}
				if (!func_102("FRA1_FDLLT") && !func_102("FRA1_TDLLF"))
				{
					if (Local_401.f_13 > 75f)
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_5105();
						}
						if (GlobalFunc_5172(&Local_704, 1))
						{
							HUD::CLEAR_PRINTS();
						}
						RECORDING::_0x293220DA1B46CEBC(1f, 8f, 4);
						func_97("FRA1_TDLLF", 7500, 1);
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_401.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_401.f_1));
				}
				if (HUD::DOES_BLIP_EXIST(Local_459.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_459.f_1));
				}
			}
			if (!GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_1114[Local_430.f_28 /*13*/]))
			{
				iLocal_702 = 0;
			}
			else
			{
				iLocal_702 = 1;
			}
			break;
	}
	func_220();
	func_218(&(Local_543.f_8), Local_1114[Local_401.f_28 /*13*/].f_9);
	func_121(&(Local_2947[0 /*13*/]), &Local_2337, Local_1114[Local_401.f_28 /*13*/].f_9);
	func_120(&(Local_2947[1 /*13*/]), &Local_2396, Local_1114[Local_401.f_28 /*13*/].f_9);
	func_119(&(Local_2947[2 /*13*/]), &Local_2455, Local_1114[Local_401.f_28 /*13*/].f_9);
	func_118(&(Local_2947[3 /*13*/]), &Local_2514, Local_1114[Local_401.f_28 /*13*/].f_9);
	func_117(&(Local_2947[4 /*13*/]), &Local_2573, Local_1114[Local_401.f_28 /*13*/].f_9);
	func_107(&(Local_4354[0 /*29*/]), Local_1114[Local_401.f_28 /*13*/].f_9, Local_1114[Local_401.f_28 /*13*/].f_8);
	func_202(&(Local_530.f_11), Local_1114[Local_401.f_28 /*13*/].f_9, Local_1114[Local_401.f_28 /*13*/].f_8);
	func_198(&iLocal_894);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_APPROACH_RIVER"))
	{
		AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_APPROACH_RIVER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_JETSKI_START"))
	{
		if (Local_1114[Local_401.f_28 /*13*/].f_9 > 27000f)
		{
			AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_JETSKI_START");
		}
	}
	switch (*iParam0)
	{
		case 0:
			switch (GlobalFunc_8315())
			{
				case 1:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_459.f_28 /*13*/], 0))
					{
						VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_1114[Local_459.f_28 /*13*/], -15f);
					}
					break;
				
				case 2:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_430.f_28 /*13*/], 0))
					{
						VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_1114[Local_430.f_28 /*13*/], -15f);
					}
					break;
			}
			func_96(1, 3f, 0.65f);
			STREAMING::REMOVE_ANIM_DICT("missfra1");
			STREAMING::REMOVE_ANIM_DICT("missfra1mcs_2_crew_react");
			*iParam0++;
			break;
		
		case 1:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_312) && !func_102(&Local_312))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_704, 0))
					{
						if (CAM::IS_SCREEN_FADED_IN())
						{
							func_97(&Local_312, 7500, 1);
						}
					}
				}
			}
			if (Local_1114[Local_401.f_28 /*13*/].f_9 >= 74500f || func_197(func_908(1), func_908(2), Local_401, 732.77f, -2621.94f, -1.72f, 731.85f, -2562.83f, 16.46f, 36f))
			{
				if (!GlobalFunc_579())
				{
					iLocal_702 = 0;
					iLocal_1066[4] = 0;
					iLocal_1066[14] = 0;
					iLocal_1066[15] = 0;
					func_112(&Local_401, 18);
					func_112(&Local_430, 18);
					func_112(&Local_459, 20);
					return 1;
				}
			}
			break;
	}
	return 0;
}


int func_197(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6, float fParam9)//Position - 0x1232C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param3, Param6, fParam9, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Param3, Param6, fParam9, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam2))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, Param3, Param6, fParam9, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_198(int iParam0)//Position - 0x123BC
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	struct<6> Var4;
	struct<6> Var10;
	
	if (GlobalFunc_111())
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(func_908(2), 0) || !PED::IS_PED_IN_ANY_VEHICLE(func_908(1), 0))
		{
			GlobalFunc_5105();
		}
	}
	switch (*iParam0)
	{
		case 0:
			iLocal_907 = MISC::GET_GAME_TIMER();
			iLocal_908 = 2000;
			*iParam0++;
			break;
		
		case 1:
			if (!func_102("F1_SRESC1"))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_704, 1))
					{
						if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_SRESC1", 7, 0, 0, 0))
						{
							func_98("F1_SRESC1", 1);
						}
					}
				}
			}
			if (!func_102("F1_CARIN"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_530))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_530, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_530))
						{
							if (Local_401.f_12 >= 1)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_1940[0 /*18*/]) || ENTITY::DOES_ENTITY_EXIST(Local_1940[1 /*18*/]))
								{
									if (Local_1940[0 /*18*/].f_12 > 0 || Local_1940[1 /*18*/].f_12 > 0)
									{
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_CARIN", 7, 0, 0, 0))
										{
											func_98("F1_CARIN", 1);
										}
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_530))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_530, 0))
				{
					if (Local_1114[Local_401.f_28 /*13*/].f_9 < 25000f)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_530))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_1940[0 /*18*/]) || ENTITY::DOES_ENTITY_EXIST(Local_1940[1 /*18*/]))
							{
								if (Local_1940[0 /*18*/].f_12 > 0 || Local_1940[1 /*18*/].f_12 > 0)
								{
									if (GlobalFunc_2521(iLocal_908, iLocal_907))
									{
										if (!GlobalFunc_111())
										{
											if (!GlobalFunc_5172(&Local_704, 1))
											{
												iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
												if (!ENTITY::IS_ENTITY_DEAD(Local_1940[iVar0 /*18*/]))
												{
													switch (iVar0)
													{
														case 0:
															iVar1 = 5;
															sVar2 = sLocal_308;
															sVar3 = "F1_BALL5D";
															break;
														
														case 1:
															iVar1 = 6;
															sVar2 = sLocal_309;
															sVar3 = "F1_BALL6D";
															break;
													}
													GlobalFunc_173(&uLocal_729, iVar1, Local_1940[iVar0 /*18*/], sVar2, 0, 1);
													if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", sVar3, 7, 0, 0, 0))
													{
														iLocal_907 = MISC::GET_GAME_TIMER();
														iLocal_908 = (3000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2001));
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (!func_102("F1_SRPH"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4354[0 /*29*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_4354[0 /*29*/]))
					{
						if (Local_1114[Local_401.f_28 /*13*/].f_9 > 27000f)
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 0))
								{
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_SRPH", 7, 0, 0, 0))
									{
										Local_4354[0 /*29*/].f_9 = MISC::GET_GAME_TIMER();
										func_98("F1_SRPH", 1);
									}
								}
							}
						}
					}
				}
			}
			if (!func_102("F1_SRGIRLT") && !func_102("F1_SRGIRLF"))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_4208[0 /*29*/]) && !ENTITY::IS_ENTITY_DEAD(Local_4208[0 /*29*/])) && PED::IS_PED_IN_VEHICLE(Local_4208[0 /*29*/], Local_1114[0 /*13*/], 0))
				{
					if (Local_530.f_10 == 1 || Local_1114[Local_401.f_28 /*13*/].f_9 > 25000f)
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								GlobalFunc_173(&uLocal_729, 4, Local_4208[0 /*29*/], "FRA1MODEL1", 0, 1);
								if (GlobalFunc_1533(func_908(2), Local_1114[0 /*13*/], -1))
								{
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_SRGIRLT", 7, 0, 0, 0))
									{
										func_98("F1_SRGIRLT", 1);
										AUDIO::START_AUDIO_SCENE("FRANKLIN_1_JETSKI_GIRL_JUMP");
										AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
										AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", 1);
									}
								}
								else if (GlobalFunc_1533(func_908(1), Local_1114[0 /*13*/], -1))
								{
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_SRGIRLF", 7, 0, 0, 0))
									{
										func_98("F1_SRGIRLF", 1);
										AUDIO::START_AUDIO_SCENE("FRANKLIN_1_JETSKI_GIRL_JUMP");
										AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
										AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", 1);
									}
								}
							}
						}
					}
				}
			}
			else if (GlobalFunc_111())
			{
				Var4 = { GlobalFunc_560() };
				Var10 = { GlobalFunc_2209() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var4) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var10))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var4, "F1_SRGIRLT") || MISC::ARE_STRINGS_EQUAL(&Var4, "F1_SRGIRLF"))
					{
						if ((MISC::ARE_STRINGS_EQUAL(&Var10, "F1_SRGIRLT_7") || MISC::ARE_STRINGS_EQUAL(&Var10, "F1_SRGIRLF_6")) || Local_4208[0 /*29*/].f_26 == 4)
						{
							if (Local_4208[0 /*29*/].f_26 == 4)
							{
								GlobalFunc_5105();
							}
							iLocal_1033 = 1;
						}
					}
				}
			}
			else
			{
				iLocal_1033 = 1;
				AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
				AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", 0);
			}
			if (Local_1114[Local_401.f_28 /*13*/].f_9 >= 29750f)
			{
				if (!func_102("F1_SRESC2"))
				{
					if (!GlobalFunc_5172(&Local_704, 1))
					{
						if (!GlobalFunc_111())
						{
							if ((((func_102("F1_SRGIRLF") && iLocal_1032 != 0) && GlobalFunc_2521(3000, iLocal_1032)) || ((func_102("F1_SRGIRLT") && iLocal_1032 != 0) && GlobalFunc_2521(3000, iLocal_1032))) || (!func_102("F1_SRGIRLF") && !func_102("F1_SRGIRLT")))
							{
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_SRESC2", 9, 0, 0, 0))
								{
									func_98("F1_SRESC2", 1);
								}
							}
						}
					}
				}
				if (!func_102("F1_SRESC3"))
				{
					if (!GlobalFunc_5172(&Local_704, 1))
					{
						if (!GlobalFunc_111())
						{
							if ((((func_102("F1_SRGIRLF") && iLocal_1032 != 0) && GlobalFunc_2521(3000, iLocal_1032)) || ((func_102("F1_SRGIRLT") && iLocal_1032 != 0) && GlobalFunc_2521(3000, iLocal_1032))) || (!func_102("F1_SRGIRLF") && !func_102("F1_SRGIRLT")))
							{
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_SRESC3", 9, 0, 0, 0))
								{
									func_98("F1_SRESC3", 1);
								}
							}
						}
					}
				}
				if (!func_102("F1_SRRACE"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							if ((((func_102("F1_SRGIRLF") && iLocal_1032 != 0) && GlobalFunc_2521(3000, iLocal_1032)) || ((func_102("F1_SRGIRLT") && iLocal_1032 != 0) && GlobalFunc_2521(3000, iLocal_1032))) || (!func_102("F1_SRGIRLF") && !func_102("F1_SRGIRLT")))
							{
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_SRRACE", 9, 0, 0, 0))
								{
									func_98("F1_SRRACE", 1);
								}
							}
						}
					}
				}
			}
			break;
	}
}




void func_202(var uParam0, float fParam1, float fParam2)//Position - 0x12B0A
{
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_530))
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(Local_530.f_7, sLocal_311);
				if ((STREAMING::HAS_MODEL_LOADED(iLocal_328) && STREAMING::HAS_MODEL_LOADED(Local_530.f_6)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_530.f_7, sLocal_311))
				{
					if (fParam1 > 7000f)
					{
						Local_530 = func_217(&Local_530, 1000, 1, 1, -1, -1);
						Local_1940[0 /*18*/] = func_214(iLocal_328, Local_530, -1, iLocal_399, joaat("weapon_microsmg"), 245);
						Local_1940[1 /*18*/] = func_214(iLocal_328, Local_530, 0, iLocal_399, joaat("weapon_microsmg"), 245);
						func_213(&Local_1940, 0);
						iLocal_933 = 0;
						ENTITY::SET_ENTITY_VISIBLE(Local_530, 0);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_530, 1);
						func_128(Local_530, sLocal_311, fParam2, 0, 50f, 0, 0, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_328);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_530.f_6);
						AUDIO::START_AUDIO_SCENE("FRANKLIN_01_JETSKI_CHASE_CAR");
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_530, "FRANKLIN_01_GHETTO_SAFARI_GANG_CAR", 0);
						AUDIO::START_AUDIO_SCENE("FRANKLIN_1_JETSKI_CAR_ARRIVE");
						*uParam0++;
					}
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_530))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_530))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_530))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_530, fParam2);
					}
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_530))
					{
						if (fParam1 > 8000f)
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_530, 1);
							iLocal_933 = 1;
						}
					}
				}
				if (fParam1 > 30000f)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_01_JETSKI_CHASE_CAR"))
					{
						AUDIO::STOP_AUDIO_SCENE("FRANKLIN_01_JETSKI_CHASE_CAR");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_JETSKI_CAR_ARRIVE"))
					{
						AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_JETSKI_CAR_ARRIVE");
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_530))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_530))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_530, 0);
						}
					}
				}
				if (fParam1 > 35000f)
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_530);
					if (ENTITY::DOES_ENTITY_EXIST(Local_1940[0 /*18*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1940[0 /*18*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1940[1 /*18*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1940[1 /*18*/]));
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1940[0 /*18*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1940[0 /*18*/]))
				{
					switch (Local_1940[0 /*18*/].f_12)
					{
						case 0:
							if (fParam1 >= 15350f || func_211(PLAYER::PLAYER_PED_ID(), &Local_1940))
							{
								Local_1940[0 /*18*/].f_15 = 0;
								Local_1940[0 /*18*/].f_12++;
							}
							break;
						
						case 1:
							if (Local_1940[0 /*18*/].f_15 == 0)
							{
								PED::SET_PED_SEEING_RANGE(Local_1940[0 /*18*/], 100f);
								PED::SET_PED_HEARING_RANGE(Local_1940[0 /*18*/], 100f);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1940[0 /*18*/], 1, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1940[0 /*18*/], 2, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1940[0 /*18*/], 3, 0);
								func_126(Local_1940[0 /*18*/], 5, 50, -687903391);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1940[0 /*18*/], 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1940[0 /*18*/], 1);
								Local_1940[0 /*18*/].f_15 = 1;
							}
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_530))
							{
								if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(Local_1940[0 /*18*/]))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_1940[0 /*18*/], 0);
									Local_530.f_10 = 1;
								}
							}
							break;
						}
					}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1940[1 /*18*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1940[1 /*18*/]))
				{
					switch (Local_1940[1 /*18*/].f_12)
					{
						case 0:
							if (fParam1 >= 15000f || func_211(PLAYER::PLAYER_PED_ID(), &Local_1940))
							{
								Local_1940[1 /*18*/].f_15 = 0;
								Local_1940[1 /*18*/].f_12++;
							}
							break;
						
						case 1:
							if (Local_1940[1 /*18*/].f_15 == 0)
							{
								PED::SET_PED_SEEING_RANGE(Local_1940[1 /*18*/], 100f);
								PED::SET_PED_HEARING_RANGE(Local_1940[1 /*18*/], 100f);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1940[1 /*18*/], 1, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1940[1 /*18*/], 2, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1940[1 /*18*/], 3, 0);
								func_126(Local_1940[1 /*18*/], 5, 50, -687903391);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1940[1 /*18*/], 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1940[1 /*18*/], 1);
								Local_1940[1 /*18*/].f_15 = 1;
							}
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_530))
							{
								if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(Local_1940[1 /*18*/]))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_1940[1 /*18*/], 0);
									Local_530.f_10 = 1;
								}
							}
							break;
						}
					}
			}
			func_210(Local_530, &(Local_1940[0 /*18*/].f_13), fParam2, 0);
			break;
	}
	func_206(&Local_1940, 0, 1, 0, 1, 1);
	func_203(&Local_1940, iLocal_933);
}

void func_203(var uParam0, int iParam1)//Position - 0x12F66
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			GlobalFunc_661((*uParam0)[iVar0 /*18*/], &((uParam0[iVar0 /*18*/])->f_2), -1, 0, 0, 0, 500f, 0);
		}
		else
		{
			GlobalFunc_589(&((uParam0[iVar0 /*18*/])->f_2));
		}
		iVar0++;
	}
}



void func_206(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x13143
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_207(uParam0[iVar0 /*18*/], iParam1, iParam2, iParam3, iParam4, iParam5);
		if ((iParam1 == 0 && iParam2 == 0) || iParam1 == 1)
		{
			GlobalFunc_589(&((uParam0[iVar0 /*18*/])->f_2));
		}
		iVar0++;
	}
}

void func_207(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1319E
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (iParam2 == 1)
			{
				if (PED::IS_PED_INJURED(*uParam0))
				{
					if (uParam0->f_17 == 0)
					{
						if (ENTITY::IS_ENTITY_DEAD(*uParam0))
						{
							PED::REMOVE_PED_DEFENSIVE_AREA(*uParam0, 0);
						}
						if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
						{
							HUD::REMOVE_BLIP(&(uParam0->f_1));
						}
						if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_10))
						{
							ITEMSET::DESTROY_ITEMSET(uParam0->f_10);
						}
						uParam0->f_17 = func_111(*uParam0);
						uParam0->f_16++;
						if (uParam0->f_16 == 10)
						{
							uParam0->f_17 = 7;
						}
					}
					else
					{
						if (iParam5 == 1)
						{
							func_208(uParam0->f_17, &iLocal_1008, &iLocal_1009, &uLocal_1010, &uLocal_1011, &uLocal_1012, &uLocal_1013);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
					}
				}
				else if (iParam3 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					iParam0->f_1 = GlobalFunc_7056(*iParam0, 1, 0);
				}
			}
			else if (iParam2 == 0)
			{
				if (!PED::IS_PED_INJURED(*iParam0))
				{
					PED::SET_PED_KEEP_TASK(*iParam0, iParam4);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
				if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_10))
				{
					ITEMSET::DESTROY_ITEMSET(iParam0->f_10);
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (PED::IS_PED_INJURED(*iParam0) || !PED::IS_PED_INJURED(*iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !ENTITY::IS_ENTITY_DEAD(*iParam0))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
				}
				PED::DELETE_PED(iParam0);
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
		}
		if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_10))
		{
			ITEMSET::DESTROY_ITEMSET(iParam0->f_10);
		}
		iParam0->f_11 = 0;
		iParam0->f_15 = 0;
		iParam0->f_14 = 0f;
		iParam0->f_13 = 0;
		iParam0->f_12 = 0;
		iParam0->f_16 = 0;
		iParam0->f_17 = 0;
	}
}

void func_208(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1336D
{
	switch (iParam0)
	{
		case 1:
			*uParam1++;
			GlobalFunc_565(347, 1, 0);
			GlobalFunc_565(352, 1, 0);
			break;
		
		case 2:
			*uParam2++;
			GlobalFunc_565(349, 1, 0);
			GlobalFunc_565(352, 1, 0);
			break;
		
		case 3:
			*uParam3++;
			break;
		
		case 4:
			*uParam4++;
			break;
		
		case 5:
			*uParam5++;
			break;
		
		case 6:
			*uParam6++;
			break;
	}
}


void func_210(int iParam0, var uParam1, float fParam2, bool bParam3)//Position - 0x134B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (*uParam1 == 0)
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				*uParam1 = 1;
			}
		}
		else if (*uParam1 == 1)
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) > 4f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_INJURED(iVar0))
					{
						iVar1 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == PLAYER::PLAYER_PED_ID())
							{
							}
						}
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 30f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, 2000f);
						RECORDING::_0x293220DA1B46CEBC(5f, 0f, 3);
						*uParam1 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
		else if ((MISC::GET_GAME_TIMER() - *uParam1) < 800)
		{
			iVar2 = 1;
			if (!bParam3)
			{
				iVar2 = -1;
			}
			ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 0, ((20f * IntToFloat(iVar2)) * fParam2), 0f, 0f, 0f, 1.8f, 0f, 0, 1, 1, 1, 0, 1);
		}
		else
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, -100f);
			ENTITY::SET_ENTITY_HEALTH(iParam0, 1);
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0);
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1);
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				ENTITY::SET_ENTITY_HEALTH(iVar3, 0);
			}
			if (!PED::IS_PED_INJURED(iVar4))
			{
				ENTITY::SET_ENTITY_HEALTH(iVar4, 0);
			}
			if (!PED::IS_PED_INJURED(iVar5))
			{
				ENTITY::SET_ENTITY_HEALTH(iVar5, 0);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_01_JETSKI_CHASE_CAR"))
			{
				AUDIO::STOP_AUDIO_SCENE("FRANKLIN_01_JETSKI_CHASE_CAR");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_JETSKI_CAR_ARRIVE"))
			{
				AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_JETSKI_CAR_ARRIVE");
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_530))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_530))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_530, 0);
				}
			}
			Local_530.f_10 = 1;
		}
	}
}

int func_211(int iParam0, var uParam1)//Position - 0x13648
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam1 - 1))
	{
		if (func_212(iParam0, (*uParam1)[iVar0 /*18*/]))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_212(int iParam0, int iParam1)//Position - 0x13680
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, iParam0, 0))
				{
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_213(var uParam0, int iParam1)//Position - 0x136C1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*18*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*18*/], 1);
			if (iParam1 == 1)
			{
				if (!HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*18*/])->f_1))
				{
					(uParam0[iVar0 /*18*/])->f_1 = GlobalFunc_7056((*uParam0)[iVar0 /*18*/], 1, 0);
				}
			}
			(uParam0[iVar0 /*18*/])->f_11 = 1;
		}
		iVar0++;
	}
}

int func_214(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1372E
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		iVar0 = func_215(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, 1) + Vector(3f, 0f, 0f), 0f, iParam3, iParam4, iParam5, 1);
		PED::SET_PED_INTO_VEHICLE(iVar0, iParam1, iParam2);
	}
	return iVar0;
}

int func_215(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x13767
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(26, iParam0, Param1, fParam4, 1, 1);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam7);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam7);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam5);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam6, -1, 1, 1);
	WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iParam6, 1);
	WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, iParam6);
	PED::SET_PED_AS_ENEMY(iVar0, 1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iVar0, 0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 188, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 132, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 35, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 36, 1);
	PED::SET_COMBAT_FLOAT(iVar0, 12, 30f);
	if (iParam8 == 1)
	{
		GlobalFunc_593(iVar0, 0);
	}
	iLocal_1065 = MISC::GET_GAME_TIMER() + 1000;
	return iVar0;
}


int func_217(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x138C8
{
	int iVar0;
	
	iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_6, uParam0->f_2, uParam0->f_5, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam1);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar0, SYSTEM::TO_FLOAT(iParam1));
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar0, SYSTEM::TO_FLOAT(iParam1));
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar0, iParam2);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, iParam3);
	if (iParam4 != -1 && iParam5 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, iParam4, iParam5);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 0, 0);
	}
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
	return iVar0;
}

void func_218(var uParam0, float fParam1)//Position - 0x13941
{
	switch (*uParam0)
	{
		case 0:
			if (fParam1 >= 29000f)
			{
				if (func_219(&Local_543, 12.5f, 0))
				{
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_543))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_543, 351.22f, -2615.83f, 13.01f, 16f, 6f, 4f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_543))
					{
						VEHICLE::DELETE_MISSION_TRAIN(&Local_543);
						*uParam0++;
					}
				}
			}
			break;
	}
}

int func_219(var uParam0, float fParam1, int iParam2)//Position - 0x139CD
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_5);
		STREAMING::REQUEST_MODEL(uParam0->f_6);
		STREAMING::REQUEST_MODEL(uParam0->f_7);
		if ((STREAMING::HAS_MODEL_LOADED(uParam0->f_5) && STREAMING::HAS_MODEL_LOADED(uParam0->f_6)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_7))
		{
			*uParam0 = VEHICLE::CREATE_MISSION_TRAIN(uParam0->f_1, uParam0->f_2, iParam2);
			VEHICLE::SET_TRAIN_SPEED(*uParam0, fParam1);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(*uParam0, fParam1);
			ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(*uParam0, 0);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(*uParam0, 0);
			iVar0 = 0;
			while (iVar0 <= 12)
			{
				iVar1 = VEHICLE::GET_TRAIN_CARRIAGE(*uParam0, iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(iVar1, 0);
						ENTITY::SET_CAN_CLIMB_ON_ENTITY(iVar1, 0);
					}
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_5);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_7);
			return 1;
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_220()//Position - 0x13AC0
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_4208[0 /*29*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_4208[0 /*29*/]))
		{
			Local_4208[0 /*29*/].f_13 = GlobalFunc_4951(Local_4208[0 /*29*/], PLAYER::PLAYER_PED_ID());
			switch (Local_4208[0 /*29*/].f_26)
			{
				case 14:
					if (Local_4208[0 /*29*/].f_15 == 0)
					{
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_4208[0 /*29*/], 0, 0);
						PED::SET_PED_DIES_IN_WATER(Local_4208[0 /*29*/], 0);
						GlobalFunc_200(&uLocal_729, 4);
						Local_4208[0 /*29*/].f_15 = 1;
					}
					if (iLocal_1033 == 1)
					{
						func_112(&(Local_4208[0 /*29*/]), 15);
					}
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_4208[0 /*29*/], 0, 2))
					{
						func_112(&(Local_4208[0 /*29*/]), 15);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1114[0 /*13*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[0 /*13*/], 0))
						{
							iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_1114[0 /*13*/], -1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
							{
								if (!GlobalFunc_1533(iVar0, Local_1114[0 /*13*/], -1))
								{
									func_112(&(Local_4208[0 /*29*/]), 15);
								}
							}
							else
							{
								func_112(&(Local_4208[0 /*29*/]), 15);
							}
							if (!PED::IS_PED_IN_VEHICLE(Local_4208[0 /*29*/], Local_1114[0 /*13*/], 0))
							{
								func_112(&(Local_4208[0 /*29*/]), 15);
							}
							if (PED::IS_PED_IN_VEHICLE(Local_4208[0 /*29*/], Local_1114[0 /*13*/], 0))
							{
								if (((ENTITY::DOES_ENTITY_EXIST(Local_1940[0 /*18*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1940[0 /*18*/])) && PED::IS_PED_SHOOTING(Local_1940[0 /*18*/])) || ((ENTITY::DOES_ENTITY_EXIST(Local_1940[1 /*18*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1940[1 /*18*/])) && PED::IS_PED_SHOOTING(Local_1940[1 /*18*/])))
								{
									AUDIO::PLAY_PAIN(Local_4208[0 /*29*/], 5, 0, 0);
								}
								if (Local_1114[Local_401.f_28 /*13*/].f_9 > 37500f)
								{
									func_112(&(Local_4208[0 /*29*/]), 15);
								}
							}
						}
						else
						{
							func_112(&(Local_4208[0 /*29*/]), 15);
						}
					}
					break;
				
				case 15:
					if (Local_4208[0 /*29*/].f_15 == 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_4208[0 /*29*/], 0))
						{
							if (PED::IS_PED_STOPPED(Local_4208[0 /*29*/]))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(Local_4208[0 /*29*/], 0, 64);
							}
							else
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(Local_4208[0 /*29*/], 0, 4160);
							}
						}
						AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_JETSKI_GIRL_JUMP");
						GlobalFunc_5653(Local_4208[0 /*29*/], "SCREAM_PANIC", "WAVELOAD_PAIN_FEMALE", 4);
						iLocal_1032 = MISC::GET_GAME_TIMER();
						Local_4208[0 /*29*/].f_15 = 1;
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_4208[0 /*29*/], 451360105) == 7)
					{
						if (!PED::IS_PED_RAGDOLL(Local_4208[0 /*29*/]))
						{
							func_112(&(Local_4208[0 /*29*/]), 4);
						}
					}
					break;
				
				case 4:
					if (Local_4208[0 /*29*/].f_15 == 0)
					{
						AUDIO::STOP_PED_SPEAKING(Local_4208[0 /*29*/], 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[0 /*29*/], 2, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[0 /*29*/], 4, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[0 /*29*/], 128, 1);
						TASK::TASK_SMART_FLEE_PED(Local_4208[0 /*29*/], func_908(2), 300f, -1, 0, 0);
						Local_4208[0 /*29*/].f_15 = 1;
					}
					break;
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_4208[0 /*29*/], 0))
			{
				if (Local_4208[0 /*29*/].f_13 > 125f)
				{
					func_110(&(Local_4208[0 /*29*/]), 0, 0, 1);
				}
			}
		}
		else
		{
			AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_JETSKI_GIRL_JUMP");
		}
		func_110(&(Local_4208[0 /*29*/]), 0, 1, 1);
	}
	else
	{
		AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_JETSKI_GIRL_JUMP");
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4208[1 /*29*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_4208[1 /*29*/]))
		{
			Local_4208[1 /*29*/].f_13 = GlobalFunc_4951(Local_4208[1 /*29*/], PLAYER::PLAYER_PED_ID());
			if (iLocal_4487 == 0)
			{
				if (func_225(Local_4208[1 /*29*/], 1084227584))
				{
					iLocal_4487 = 1;
				}
			}
			if (!func_224(&(Local_4208[1 /*29*/]), 4))
			{
				if (func_223())
				{
					func_112(&(Local_4208[1 /*29*/]), 4);
				}
			}
			switch (Local_4208[1 /*29*/].f_26)
			{
				case 2:
				case 3:
					break;
				
				case 4:
					if (Local_4208[1 /*29*/].f_15 == 0)
					{
						TASK::CLEAR_PED_TASKS(Local_4208[1 /*29*/]);
						TASK::TASK_SMART_FLEE_COORD(Local_4208[1 /*29*/], Local_372, 300f, -1, 0, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[1 /*29*/], 4, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[1 /*29*/], 128, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[1 /*29*/], 2, 0);
						Local_4208[1 /*29*/].f_15 = 1;
					}
					break;
			}
			if (Local_4208[1 /*29*/].f_13 > 125f)
			{
				func_110(&(Local_4208[1 /*29*/]), 0, 0, 1);
			}
		}
		func_110(&(Local_4208[1 /*29*/]), 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4208[2 /*29*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_4208[2 /*29*/]))
		{
			Local_4208[2 /*29*/].f_13 = GlobalFunc_4951(Local_4208[2 /*29*/], PLAYER::PLAYER_PED_ID());
			if (iLocal_4487 == 0)
			{
				if (func_225(Local_4208[2 /*29*/], 1084227584))
				{
					iLocal_4487 = 1;
				}
			}
			if (!func_224(&(Local_4208[2 /*29*/]), 4))
			{
				if (func_223())
				{
					func_112(&(Local_4208[2 /*29*/]), 4);
				}
			}
			switch (Local_4208[2 /*29*/].f_26)
			{
				case 4:
					if (Local_4208[2 /*29*/].f_15 == 0)
					{
						TASK::CLEAR_PED_TASKS(Local_4208[2 /*29*/]);
						TASK::TASK_SMART_FLEE_COORD(Local_4208[2 /*29*/], Local_372, 300f, -1, 0, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[2 /*29*/], 4, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[2 /*29*/], 128, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[2 /*29*/], 2, 0);
						Local_4208[2 /*29*/].f_15 = 1;
					}
					break;
			}
			if (Local_4208[2 /*29*/].f_13 > 125f)
			{
				func_110(&(Local_4208[2 /*29*/]), 0, 0, 1);
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_4208[2 /*29*/]))
		{
			if (!GlobalFunc_2(0))
			{
				GlobalFunc_585(43, 1);
			}
		}
		func_110(&(Local_4208[2 /*29*/]), 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4208[3 /*29*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_4208[3 /*29*/]))
		{
			Local_4208[3 /*29*/].f_13 = GlobalFunc_4951(Local_4208[3 /*29*/], PLAYER::PLAYER_PED_ID());
			switch (Local_4208[3 /*29*/].f_26)
			{
				case 4:
					break;
			}
			if (Local_4208[3 /*29*/].f_13 > 125f)
			{
				func_110(&(Local_4208[3 /*29*/]), 0, 0, 1);
				GlobalFunc_2943(&Local_576, 0);
			}
		}
		else
		{
			GlobalFunc_2943(&Local_576, 0);
		}
		func_110(&(Local_4208[3 /*29*/]), 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4208[4 /*29*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_4208[4 /*29*/]))
		{
			Local_4208[4 /*29*/].f_13 = GlobalFunc_4951(Local_4208[4 /*29*/], PLAYER::PLAYER_PED_ID());
			switch (Local_4208[4 /*29*/].f_26)
			{
				case 4:
					break;
			}
			if (Local_4208[4 /*29*/].f_13 > 125f)
			{
				func_110(&(Local_4208[4 /*29*/]), 0, 0, 1);
				GlobalFunc_2943(&Local_600, 0);
			}
		}
		else
		{
			GlobalFunc_2943(&Local_600, 0);
		}
		func_110(&(Local_4208[4 /*29*/]), 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_584))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_584))
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_584, 0, 2))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_584, 0);
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_576) || ENTITY::DOES_ENTITY_EXIST(Local_584)) || ENTITY::DOES_ENTITY_EXIST(Local_600))
	{
		if (Local_1114[Local_401.f_28 /*13*/].f_9 > 15000f)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_576);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_584);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_600);
		}
	}
}



int func_223()//Position - 0x14245
{
	if (iLocal_4487)
	{
		return 1;
	}
	return 0;
}

int func_224(int iParam0, int iParam1)//Position - 0x14258
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (iParam0->f_26 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_225(int iParam0, int iParam1)//Position - 0x14283
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, 0, 2))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iParam0);
				return 1;
			}
			if ((((PED::HAS_PED_RECEIVED_EVENT(iParam0, 22) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 86)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 122)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 124)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 123))
			{
				return 1;
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), iParam1, 1) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), iParam1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}



int func_228(int iParam0)//Position - 0x14378
{
	func_583(&iLocal_1050);
	func_579(&Local_401, PLAYER::PLAYER_PED_ID());
	func_542(func_132(), &Local_430, PLAYER::PLAYER_PED_ID());
	func_239(&(Local_4208[2 /*29*/].f_12));
	if (Local_401.f_18 == 1)
	{
		if (Local_401.f_16 == 1)
		{
			if (GlobalFunc_2521(3000, Local_401.f_9))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_704, 1))
					{
						if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM02", 7, 0, 0, 0))
						{
							Local_401.f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					GlobalFunc_5105();
				}
			}
		}
		if (!func_102("F1_LHILL"))
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_5172(&Local_704, 1))
				{
					if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LHILL", 7, 0, 0, 0))
					{
						func_98("F1_LHILL", 1);
					}
				}
			}
		}
		if (!func_102("F1_COM03"))
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_5172(&Local_704, 1))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_401, -41.72229f, -1866.695f, 28.4905f, -61.97151f, -1891.406f, 4.101753f, 16f, 0, 1, 0))
					{
						if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM03", 7, 0, 0, 0))
						{
							func_98("F1_COM03", 1);
						}
					}
				}
			}
		}
		if (!func_102("F1_COM04"))
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_5172(&Local_704, 1))
				{
					if (!PED::IS_PED_INJURED(Local_401))
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_401))
						{
							if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_401) > 40)
							{
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM04", 7, 0, 0, 0))
								{
									func_98("F1_COM04", 1);
								}
							}
						}
					}
				}
			}
		}
		if (func_223())
		{
			if (!func_102("F1_COM05"))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_704, 1))
					{
						if (func_224(&Local_401, 11))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM05", 7, 0, 0, 0))
							{
								func_98("F1_COM05", 1);
							}
						}
					}
				}
			}
		}
		if (func_223())
		{
			if (!func_102("F1_COM06"))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_704, 1))
					{
						if (func_224(&Local_401, 12))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM06", 7, 0, 0, 0))
							{
								func_98("F1_COM06", 1);
								Local_401.f_8 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
		}
		if (func_224(&Local_401, 12) || func_224(&Local_401, 14))
		{
			if ((!GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_1114[0 /*13*/], 0) && !GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_1114[1 /*13*/], 0)) && !GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_1114[2 /*13*/], 0))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_704, 1))
					{
						if (GlobalFunc_2521(5000, Local_401.f_8))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM07", 7, 0, 0, 0))
							{
								if (!PED::IS_PED_INJURED(Local_401))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_401, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
								}
								Local_401.f_8 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
		}
		if (iLocal_4487 == 1)
		{
			if (!func_102("F1_COM08F") && !func_102("F1_COM08T"))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_704, 1))
					{
						switch (GlobalFunc_8315())
						{
							case 1:
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM08F", 7, 0, 0, 0))
								{
									func_98("F1_COM08F", 1);
								}
								break;
							
							case 2:
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM08T", 7, 0, 0, 0))
								{
									func_98("F1_COM08T", 1);
								}
								break;
							}
						}
					}
				}
		}
		if (Local_4208[2 /*29*/].f_27 != 0)
		{
			if (Local_4208[2 /*29*/].f_22 == 0)
			{
				switch (Local_4208[2 /*29*/].f_27)
				{
					case 1:
						if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM09F", 7, 0, 0, 0))
						{
							Local_4208[2 /*29*/].f_22 = 1;
						}
						break;
					
					case 2:
						if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM09F", 7, 0, 0, 0))
						{
							Local_4208[2 /*29*/].f_22 = 1;
						}
						break;
					}
				}
			}
	}
	switch (*iParam0)
	{
		case 0:
			*iParam0++;
			break;
		
		case 1:
			if (iLocal_1016 == 0)
			{
				if (func_197(func_908(1), func_908(2), Local_401, -183.2479f, -1877.746f, -8.911816f, -121.6059f, -1804.794f, 29.81538f, 72f))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("FRA1_WATER_ARRIVE"))
					{
						iLocal_1016 = 1;
					}
				}
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[0 /*13*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[1 /*13*/], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[2 /*13*/], 0))
			{
				if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1114[0 /*13*/], 1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1114[1 /*13*/], 1)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1114[2 /*13*/], 1))
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
					GlobalFunc_2520();
				}
			}
			AUDIO::PREPARE_MUSIC_EVENT("FRA1_SPEED");
			VEHICLE::REQUEST_VEHICLE_RECORDING(911, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(912, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(913, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(921, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(922, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(923, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(931, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(932, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(933, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(72, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(82, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(63, sLocal_311);
			if ((func_237(func_908(2)) && func_237(func_908(1))) && func_237(Local_401))
			{
				if (((((((((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(911, sLocal_311) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(912, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(913, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(921, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(922, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(923, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(931, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(932, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(933, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(72, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(82, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(63, sLocal_311))
				{
					if (!PED::IS_PED_INJURED(Local_4208[0 /*29*/]))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Local_4208[0 /*29*/]);
					}
					if (PED::GET_VEHICLE_PED_IS_USING(Local_401) == Local_1114[0 /*13*/])
					{
						Local_401.f_28 = 0;
						Local_1114[0 /*13*/].f_7 = 911;
						Local_1114[1 /*13*/].f_7 = 912;
						Local_1114[2 /*13*/].f_7 = 913;
					}
					else if (PED::GET_VEHICLE_PED_IS_USING(Local_401) == Local_1114[1 /*13*/])
					{
						Local_401.f_28 = 1;
						Local_1114[0 /*13*/].f_7 = 921;
						Local_1114[1 /*13*/].f_7 = 922;
						Local_1114[2 /*13*/].f_7 = 923;
					}
					else if (PED::GET_VEHICLE_PED_IS_USING(Local_401) == Local_1114[2 /*13*/])
					{
						Local_401.f_28 = 2;
						Local_1114[0 /*13*/].f_7 = 931;
						Local_1114[1 /*13*/].f_7 = 932;
						Local_1114[2 /*13*/].f_7 = 933;
					}
					func_112(&Local_401, 16);
					if (PED::GET_VEHICLE_PED_IS_USING(func_908(2)) == Local_1114[0 /*13*/])
					{
						Local_430.f_28 = 0;
					}
					else if (PED::GET_VEHICLE_PED_IS_USING(func_908(2)) == Local_1114[1 /*13*/])
					{
						Local_430.f_28 = 1;
					}
					else if (PED::GET_VEHICLE_PED_IS_USING(func_908(2)) == Local_1114[2 /*13*/])
					{
						Local_430.f_28 = 2;
					}
					func_112(&Local_430, 16);
					if (PED::GET_VEHICLE_PED_IS_USING(func_908(1)) == Local_1114[0 /*13*/])
					{
						Local_459.f_28 = 0;
					}
					else if (PED::GET_VEHICLE_PED_IS_USING(func_908(1)) == Local_1114[1 /*13*/])
					{
						Local_459.f_28 = 1;
					}
					else if (PED::GET_VEHICLE_PED_IS_USING(func_908(1)) == Local_1114[2 /*13*/])
					{
						Local_459.f_28 = 2;
					}
					func_112(&Local_459, 16);
					func_112(&(Local_4208[0 /*29*/]), 14);
					AUDIO::TRIGGER_MUSIC_EVENT("FRA1_SPEED");
					func_236(Local_459.f_28);
					func_236(Local_430.f_28);
					func_236(Local_401.f_28);
					func_109(&Local_2632, 0, 0, 1);
					func_109(&Local_2691, 0, 0, 1);
					func_109(&Local_2750, 0, 0, 1);
					if (!CAM::DOES_CAM_EXIST(uLocal_1020))
					{
						CAM::DESTROY_ALL_CAMS(0);
						uLocal_1020 = CAM::CREATE_CAMERA(964613260, 1);
						CAM::PLAY_CAM_ANIM(uLocal_1020, "jetski_escape_cam", "missfra1", -129.73f, -1857.22f, 0.35f, 0f, 0f, 0f, 0, 2);
						HUD::DISPLAY_HUD(0);
						HUD::DISPLAY_RADAR(0);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						GlobalFunc_7629();
					}
					SYSTEM::SETTIMERA(0);
					iLocal_702 = 0;
					func_231(&Global_86813, Local_401.f_28, Local_459.f_28, Local_430.f_28);
					AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_APPROACH_RIVER");
					AUDIO::START_AUDIO_SCENE("FRANKLIN_1_JETSKI_START");
					*iParam0++;
				}
			}
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_328);
			STREAMING::REQUEST_MODEL(Local_530.f_6);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_530.f_7, sLocal_311);
			GlobalFunc_5077();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			GlobalFunc_2520();
			if (!func_102("F1_LCLNCR"))
			{
				if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLNCR", 7, 0, 0, 0))
				{
					func_98("F1_LCLNCR", 1);
				}
			}
			if (SYSTEM::TIMERA() > 3600)
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_401.f_28 /*13*/]);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_401.f_28 /*13*/], 72, sLocal_311, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_401.f_28 /*13*/], 5500f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1114[Local_401.f_28 /*13*/], 1);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_430.f_28 /*13*/]);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_430.f_28 /*13*/], 63, sLocal_311, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_430.f_28 /*13*/], 5500f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1114[Local_430.f_28 /*13*/], 1);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_459.f_28 /*13*/]);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_459.f_28 /*13*/], 82, sLocal_311, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_459.f_28 /*13*/], 5500f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1114[Local_459.f_28 /*13*/], 1);
				VEHICLE::REMOVE_VEHICLE_RECORDING(911, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(912, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(913, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(921, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(922, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(923, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(931, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(932, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(933, sLocal_311);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1114[Local_401.f_28 /*13*/], 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1114[Local_430.f_28 /*13*/], 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1114[Local_459.f_28 /*13*/], 1);
				Local_1114[Local_401.f_28 /*13*/].f_7 = 72;
				Local_1114[Local_430.f_28 /*13*/].f_7 = 63;
				Local_1114[Local_459.f_28 /*13*/].f_7 = 82;
				*iParam0++;
			}
			else if (SYSTEM::TIMERA() > 3300)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					if (iLocal_1063 == 0)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1063 = 1;
					}
				}
			}
			break;
		
		case 3:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::DESTROY_ALL_CAMS(0);
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			STREAMING::REMOVE_ANIM_DICT("missfra1");
			return 1;
			break;
	}
	return 0;
}



void func_231(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14E91
{
	*uParam0 = 0;
	switch (iParam1)
	{
		case 0:
			MISC::SET_BIT(uParam0, 0);
			break;
		
		case 1:
			MISC::SET_BIT(uParam0, 1);
			break;
		
		case 2:
			MISC::SET_BIT(uParam0, 2);
			break;
	}
	switch (iParam2)
	{
		case 0:
			MISC::SET_BIT(uParam0, 3);
			break;
		
		case 1:
			MISC::SET_BIT(uParam0, 4);
			break;
		
		case 2:
			MISC::SET_BIT(uParam0, 5);
			break;
	}
	switch (iParam3)
	{
		case 0:
			MISC::SET_BIT(uParam0, 6);
			break;
		
		case 1:
			MISC::SET_BIT(uParam0, 7);
			break;
		
		case 2:
			MISC::SET_BIT(uParam0, 8);
			break;
	}
}





void func_236(int iParam0)//Position - 0x150A9
{
	if (iParam0 < 3)
	{
		VEHICLE::SET_BOAT_ANCHOR(Local_1114[iParam0 /*13*/], 0);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1114[iParam0 /*13*/], Local_1114[iParam0 /*13*/].f_7, sLocal_311, 1);
		VEHICLE::_0x796A877E459B99EA(Local_1114[iParam0 /*13*/], 1f, 0f, 0f);
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1114[iParam0 /*13*/], 1000f);
		VEHICLE::SET_PLAYBACK_SPEED(Local_1114[iParam0 /*13*/], 1.15f);
	}
}

int func_237(int iParam0)//Position - 0x15109
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Local_1114)
	{
		if (GlobalFunc_2522(iParam0, Local_1114[iVar0 /*13*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}


void func_239(var uParam0)//Position - 0x1518C
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	switch (*uParam0)
	{
		case 0:
			if ((iLocal_4043[11] == 1 || iLocal_4043[35] == 1) || func_197(func_908(1), func_908(2), Local_401, -52.43952f, -1860.439f, 23.11297f, -38.09729f, -1843.122f, 29.92283f, 84f))
			{
				Global_86814 = 0;
				*uParam0++;
			}
			break;
		
		case 1:
			if (func_138(&(Local_1114[0 /*13*/]), 0, 0, 145, 1, -1, 46, 46, 0, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1114[0 /*13*/], 0, 1);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1114[0 /*13*/], 0);
				VEHICLE::SET_BOAT_ANCHOR(Local_1114[0 /*13*/], 1);
				SYSTEM::SETTIMERA(0);
				*uParam0++;
			}
			break;
		
		case 2:
			if (SYSTEM::TIMERA() > 100)
			{
				if (func_138(&(Local_1114[1 /*13*/]), 0, 0, 145, 1, -1, 51, 51, 0, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1114[1 /*13*/], 0, 1);
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1114[1 /*13*/], 0);
					VEHICLE::SET_BOAT_ANCHOR(Local_1114[1 /*13*/], 1);
					SYSTEM::SETTIMERA(0);
					*uParam0++;
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 100)
			{
				if (func_138(&(Local_1114[2 /*13*/]), 0, 0, 145, 1, -1, 82, 82, 0, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1114[2 /*13*/], 0, 1);
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1114[2 /*13*/], 0);
					VEHICLE::SET_BOAT_ANCHOR(Local_1114[2 /*13*/], 1);
					iLocal_1066[14] = 1;
					iLocal_1066[15] = 1;
					*uParam0++;
				}
			}
			break;
		
		case 4:
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[0 /*13*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[1 /*13*/], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[2 /*13*/], 0))
			{
				STREAMING::REQUEST_MODEL(Local_4208[2 /*29*/].f_7);
				STREAMING::REQUEST_MODEL(Local_4208[3 /*29*/].f_7);
				STREAMING::REQUEST_MODEL(Local_4208[0 /*29*/].f_7);
				STREAMING::REQUEST_MODEL(Local_560.f_1);
				STREAMING::REQUEST_MODEL(Local_576.f_1);
				STREAMING::REQUEST_MODEL(Local_584.f_1);
				STREAMING::REQUEST_MODEL(Local_600.f_1);
				if ((((((STREAMING::HAS_MODEL_LOADED(Local_560.f_1) && STREAMING::HAS_MODEL_LOADED(Local_576.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_584.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_600.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_4208[2 /*29*/].f_7)) && STREAMING::HAS_MODEL_LOADED(Local_4208[3 /*29*/].f_7)) && STREAMING::HAS_MODEL_LOADED(Local_4208[0 /*29*/].f_7))
				{
					if (func_241(&(Local_4208[0 /*29*/]), 0, iLocal_400, 0, 145, 0, 1, 0, Local_1114[0 /*13*/], -1, 1))
					{
						if (func_241(&(Local_4208[1 /*29*/]), 0, iLocal_400, 0, 145, 0, 1, 0, Local_1114[1 /*13*/], -1, 1))
						{
							if (func_241(&(Local_4208[2 /*29*/]), 0, iLocal_400, 0, 145, 0, 1, 0, 0, -1, 1))
							{
								if (func_241(&(Local_4208[3 /*29*/]), 0, iLocal_400, 0, 145, 0, 1, 0, 0, -1, 1))
								{
									if (func_241(&(Local_4208[4 /*29*/]), 0, iLocal_400, 0, 145, 0, 1, 0, 0, -1, 1))
									{
										if (((func_240(&Local_560, 0) && func_240(&Local_576, 0)) && func_240(&Local_584, 0)) && func_240(&Local_600, 0))
										{
											if (!PED::IS_PED_INJURED(Local_4208[2 /*29*/]))
											{
												ENTITY::SET_ENTITY_LOD_DIST(Local_4208[2 /*29*/], 100);
												PED::SET_PED_LOD_MULTIPLIER(Local_4208[2 /*29*/], 5f);
											}
											if (!PED::IS_PED_INJURED(Local_4208[3 /*29*/]))
											{
												ENTITY::SET_ENTITY_LOD_DIST(Local_4208[3 /*29*/], 100);
												PED::SET_PED_LOD_MULTIPLIER(Local_4208[3 /*29*/], 5f);
											}
											if (!PED::IS_PED_INJURED(Local_4208[4 /*29*/]))
											{
												ENTITY::SET_ENTITY_LOD_DIST(Local_4208[4 /*29*/], 100);
												PED::SET_PED_LOD_MULTIPLIER(Local_4208[4 /*29*/], 5f);
											}
											if (!PED::IS_PED_INJURED(Local_4208[1 /*29*/]))
											{
												ENTITY::SET_ENTITY_LOD_DIST(Local_4208[1 /*29*/], 100);
												PED::SET_PED_LOD_MULTIPLIER(Local_4208[1 /*29*/], 5f);
												PED::SET_PED_DIES_WHEN_INJURED(Local_4208[1 /*29*/], 1);
												PED::SET_PED_CONFIG_FLAG(Local_4208[1 /*29*/], 281, true);
											}
											if (!PED::IS_PED_INJURED(Local_4208[0 /*29*/]))
											{
												ENTITY::SET_ENTITY_LOD_DIST(Local_4208[0 /*29*/], 100);
												PED::SET_PED_LOD_MULTIPLIER(Local_4208[0 /*29*/], 5f);
												PED::SET_PED_DIES_WHEN_INJURED(Local_4208[0 /*29*/], 1);
												PED::SET_PED_CONFIG_FLAG(Local_4208[0 /*29*/], 281, true);
											}
											if (!PED::IS_PED_INJURED(Local_4208[3 /*29*/]))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Local_576))
												{
													if (!ENTITY::IS_ENTITY_DEAD(Local_576))
													{
														if (!ENTITY::IS_ENTITY_ATTACHED(Local_576))
														{
															ENTITY::SET_ENTITY_INVINCIBLE(Local_576, 1);
															ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_576, Local_4208[3 /*29*/], PED::GET_PED_BONE_INDEX(Local_4208[3 /*29*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
														}
													}
												}
											}
											if (!PED::IS_PED_INJURED(Local_4208[4 /*29*/]))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Local_600))
												{
													if (!ENTITY::IS_ENTITY_DEAD(Local_600))
													{
														if (!ENTITY::IS_ENTITY_ATTACHED(Local_600))
														{
															ENTITY::SET_ENTITY_INVINCIBLE(Local_600, 1);
															ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_600, Local_4208[4 /*29*/], PED::GET_PED_BONE_INDEX(Local_4208[4 /*29*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
														}
													}
												}
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_4208[0 /*29*/]))
											{
												if (!ENTITY::IS_ENTITY_DEAD(Local_4208[0 /*29*/]))
												{
													PED::SET_PED_COMPONENT_VARIATION(Local_4208[0 /*29*/], 0, 1, 0, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_4208[0 /*29*/], 2, 1, 1, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_4208[0 /*29*/], 3, 0, 5, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_4208[0 /*29*/], 4, 0, 5, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_4208[0 /*29*/], 8, 1, 0, 0);
												}
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_4208[1 /*29*/]))
											{
												if (!ENTITY::IS_ENTITY_DEAD(Local_4208[1 /*29*/]))
												{
													PED::SET_PED_COMPONENT_VARIATION(Local_4208[1 /*29*/], 0, 0, 0, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_4208[1 /*29*/], 2, 2, 0, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_4208[1 /*29*/], 3, 0, 2, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_4208[1 /*29*/], 4, 0, 2, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_4208[1 /*29*/], 8, 1, 0, 0);
												}
											}
											*uParam0++;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			STREAMING::REQUEST_ANIM_DICT("missfra1");
			STREAMING::REQUEST_ANIM_DICT("missfra1mcs_2_crew_react");
			if (((STREAMING::HAS_ANIM_DICT_LOADED("missfra1") && STREAMING::HAS_ANIM_DICT_LOADED("missfra1mcs_2_crew_react")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FRANKLIN_1_CAMERAS", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FRANKLIN_1_GIRLS", 0))
			{
				if (!PED::IS_PED_INJURED(Local_4208[0 /*29*/]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_930, "FRANKLIN_1_PHOTO_SHOOT", Local_4208[0 /*29*/], 0, 0, 0);
				}
				func_112(&(Local_4208[0 /*29*/]), 1);
				func_112(&(Local_4208[1 /*29*/]), 1);
				func_112(&(Local_4208[2 /*29*/]), 1);
				func_112(&(Local_4208[3 /*29*/]), 1);
				func_112(&(Local_4208[4 /*29*/]), 1);
				*uParam0++;
			}
			break;
		
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(Local_4208[2 /*29*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_4208[2 /*29*/]))
				{
					Local_4208[2 /*29*/].f_13 = GlobalFunc_4951(Local_4208[2 /*29*/], PLAYER::PLAYER_PED_ID());
					if (iLocal_4487 == 0)
					{
						if (func_225(Local_4208[2 /*29*/], 1084227584))
						{
							iLocal_4487 = 1;
						}
					}
					if (!func_224(&(Local_4208[2 /*29*/]), 4))
					{
						if (func_223())
						{
							func_112(&(Local_4208[2 /*29*/]), 4);
						}
					}
					switch (Local_4208[2 /*29*/].f_26)
					{
						case 1:
							if (Local_4208[2 /*29*/].f_15 == 0)
							{
								GlobalFunc_2901(Local_4208[2 /*29*/], -119.6947f, -1863.988f, 0.4591f, 62.928f, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(Local_4208[2 /*29*/], "missfra1", "fra_1_mcs_2_clayidle", 1000f, -4f, -1, 1, 0, 0, 0, 0);
								Local_4208[2 /*29*/].f_15 = 1;
							}
							if (Local_401.f_26 == 11)
							{
								func_112(&(Local_4208[2 /*29*/]), 2);
							}
							break;
						
						case 2:
							if (Local_4208[2 /*29*/].f_15 == 0)
							{
								TASK::CLEAR_PED_TASKS(Local_4208[2 /*29*/]);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_401, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, Local_401, 100, 1024, 2);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_PLAY_ANIM(0, "missfra1mcs_2_crew_react", "handsup_standing_base", 4f, -4f, -1, 1, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE(Local_4208[2 /*29*/], uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								Local_4208[2 /*29*/].f_15 = 1;
							}
							AUDIO::PLAY_PAIN(Local_4208[2 /*29*/], 5, 0, 0);
							if (!func_102("F1_CLIP3"))
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									if ((((((((GlobalFunc_1461(Local_401, Local_1114[0 /*13*/], 1) || GlobalFunc_1461(Local_401, Local_1114[1 /*13*/], 1)) || GlobalFunc_1461(Local_401, Local_1114[2 /*13*/], 1)) || GlobalFunc_1461(func_908(2), Local_1114[0 /*13*/], 1)) || GlobalFunc_1461(func_908(2), Local_1114[1 /*13*/], 1)) || GlobalFunc_1461(func_908(2), Local_1114[2 /*13*/], 1)) || GlobalFunc_1461(func_908(1), Local_1114[0 /*13*/], 1)) || GlobalFunc_1461(func_908(1), Local_1114[1 /*13*/], 1)) || GlobalFunc_1461(func_908(1), Local_1114[2 /*13*/], 1))
									{
										GlobalFunc_173(&uLocal_729, 7, Local_4208[2 /*29*/], "MCCLIP", 0, 1);
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_CLIP3", 7, 0, 0, 0))
										{
											func_98("F1_CLIP3", 1);
										}
									}
								}
							}
							break;
						
						case 4:
							if (Local_4208[2 /*29*/].f_15 == 0)
							{
								TASK::CLEAR_PED_TASKS(Local_4208[2 /*29*/]);
								TASK::TASK_SMART_FLEE_COORD(Local_4208[2 /*29*/], Local_372, 300f, -1, 0, 0);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[2 /*29*/], 4, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[2 /*29*/], 128, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[2 /*29*/], 2, 0);
								Local_4208[2 /*29*/].f_15 = 1;
							}
							if (Local_4208[2 /*29*/].f_15 == 1)
							{
								if (!func_102("F1_CLIP2"))
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										GlobalFunc_173(&uLocal_729, 7, Local_4208[2 /*29*/], "MCCLIP", 0, 1);
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_CLIP2", 7, 0, 0, 0))
										{
											func_98("F1_CLIP2", 1);
										}
									}
								}
							}
							if (Local_4208[2 /*29*/].f_13 > 125f)
							{
								func_110(&(Local_4208[2 /*29*/]), 0, 0, 1);
							}
							break;
					}
				}
				else if (Local_4208[2 /*29*/].f_27 == 0)
				{
					Local_4208[2 /*29*/].f_27 = func_111(Local_4208[2 /*29*/]);
					if (!GlobalFunc_2(0))
					{
						GlobalFunc_585(43, 1);
					}
					iLocal_4487 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4208[0 /*29*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_4208[0 /*29*/]))
				{
					Local_4208[0 /*29*/].f_13 = GlobalFunc_4951(Local_4208[0 /*29*/], PLAYER::PLAYER_PED_ID());
					if (iLocal_4487 == 0)
					{
						if (func_225(Local_4208[0 /*29*/], 1084227584))
						{
							iLocal_4487 = 1;
						}
					}
					if (!func_224(&(Local_4208[0 /*29*/]), 4))
					{
						if (iLocal_4487 == 1)
						{
							func_112(&(Local_4208[0 /*29*/]), 4);
						}
					}
					switch (Local_4208[0 /*29*/].f_26)
					{
						case 1:
							if (Local_4208[0 /*29*/].f_15 == 0)
							{
								TASK::TASK_PLAY_ANIM(Local_4208[0 /*29*/], "missfra1mcs_2_crew_react", "mcs2_f_jetski_idle01", 1000f, -1.5f, -1, 1, 0f, 0, 2, 0);
								Local_4208[0 /*29*/].f_15 = 1;
							}
							if (Local_401.f_26 == 11)
							{
								func_112(&(Local_4208[0 /*29*/]), 2);
							}
							break;
						
						case 2:
							if (Local_4208[0 /*29*/].f_15 == 0)
							{
								GlobalFunc_173(&uLocal_729, 4, Local_4208[0 /*29*/], "FRA1MODEL1", 0, 1);
								TASK::CLEAR_PED_TASKS(Local_4208[0 /*29*/]);
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								TASK::OPEN_SEQUENCE_TASK(&uVar1);
								TASK::TASK_PAUSE(0, 750);
								TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, Local_1114[0 /*13*/]);
								TASK::TASK_PLAY_ANIM(0, "missfra1mcs_2_crew_react", "handsup_standing_base", 1.5f, -1.5f, -1, 17, 0f, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_4208[0 /*29*/], uVar1);
								TASK::TASK_LOOK_AT_ENTITY(Local_4208[0 /*29*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								AUDIO::STOP_SOUND(uLocal_930);
								AUDIO::PLAY_PAIN(Local_4208[0 /*29*/], 7, 0, 0);
								Local_4208[0 /*29*/].f_15 = 1;
							}
							if (PED::IS_PED_SITTING_IN_VEHICLE(Local_4208[0 /*29*/], Local_1114[0 /*13*/]))
							{
								if (GlobalFunc_1533(Local_4208[0 /*29*/], Local_1114[0 /*13*/], 0))
								{
									if (PED::GET_VEHICLE_PED_IS_ENTERING(func_908(2)) == Local_1114[0 /*13*/] || PED::GET_VEHICLE_PED_IS_ENTERING(func_908(1)) == Local_1114[0 /*13*/])
									{
										func_112(&(Local_4208[0 /*29*/]), 14);
									}
								}
							}
							break;
						
						case 14:
							if (Local_4208[0 /*29*/].f_15 == 0)
							{
								TASK::CLEAR_PED_TASKS(Local_4208[0 /*29*/]);
								Local_4208[0 /*29*/].f_15 = 1;
							}
							if (!func_102("F1_GIRLJ"))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_GIRLJ", 7, 0, 0, 0))
										{
											func_98("F1_GIRLJ", 1);
										}
									}
								}
							}
							break;
						
						case 4:
							if (Local_4208[0 /*29*/].f_15 == 0)
							{
								TASK::CLEAR_PED_TASKS(Local_4208[0 /*29*/]);
								PED::SET_PED_DIES_IN_WATER(Local_4208[0 /*29*/], 0);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[0 /*29*/], 4, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[0 /*29*/], 128, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[0 /*29*/], 2, 0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar2);
								TASK::OPEN_SEQUENCE_TASK(&uVar2);
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_4208[0 /*29*/], 0))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(0, MISC::GET_RANDOM_INT_IN_RANGE(250, 501), 64);
								}
								TASK::TASK_SMART_FLEE_COORD(0, Local_372, 300f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar2);
								TASK::TASK_PERFORM_SEQUENCE(Local_4208[0 /*29*/], uVar2);
								TASK::CLEAR_SEQUENCE_TASK(&uVar2);
								AUDIO::STOP_SOUND(uLocal_930);
								AUDIO::PLAY_PAIN(Local_4208[0 /*29*/], 5, 0, 0);
								Global_86814 = 1;
								Local_4208[0 /*29*/].f_15 = 1;
							}
							if (Local_4208[0 /*29*/].f_13 > 125f)
							{
								func_110(&(Local_4208[0 /*29*/]), 0, 0, 1);
							}
							break;
					}
				}
				else if (Local_4208[0 /*29*/].f_27 == 0)
				{
					Local_4208[0 /*29*/].f_27 = func_111(Local_4208[0 /*29*/]);
					iLocal_4487 = 1;
					Global_86814 = 1;
					AUDIO::STOP_SOUND(uLocal_930);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4208[1 /*29*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_4208[1 /*29*/]))
				{
					Local_4208[1 /*29*/].f_13 = GlobalFunc_4951(Local_4208[1 /*29*/], PLAYER::PLAYER_PED_ID());
					if (iLocal_4487 == 0)
					{
						if (func_225(Local_4208[1 /*29*/], 1084227584))
						{
							iLocal_4487 = 1;
						}
					}
					if (!func_224(&(Local_4208[1 /*29*/]), 4))
					{
						if (func_223())
						{
							func_112(&(Local_4208[1 /*29*/]), 4);
						}
					}
					switch (Local_4208[1 /*29*/].f_26)
					{
						case 1:
							if (Local_4208[1 /*29*/].f_15 == 0)
							{
								TASK::TASK_PLAY_ANIM(Local_4208[1 /*29*/], "missfra1mcs_2_crew_react", "mcs2_f_jetski_idle02", 1000f, -4f, -1, 1, 0, 0, 0, 0);
								Local_4208[1 /*29*/].f_15 = 1;
							}
							if (Local_401.f_26 == 11)
							{
								func_112(&(Local_4208[1 /*29*/]), 2);
							}
							break;
						
						case 2:
							if (Local_4208[1 /*29*/].f_15 == 0)
							{
								TASK::CLEAR_SEQUENCE_TASK(&uVar3);
								TASK::OPEN_SEQUENCE_TASK(&uVar3);
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_4208[1 /*29*/], 0))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(0, MISC::GET_RANDOM_INT_IN_RANGE(0, 251), 0);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_401, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, Local_401, 100, 1024, 2);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_PLAY_ANIM(0, "missfra1mcs_2_crew_react", "handsup_standing_base", 4f, -4f, -1, 1, 0, 0, 0, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::CLOSE_SEQUENCE_TASK(uVar3);
								TASK::TASK_PERFORM_SEQUENCE(Local_4208[1 /*29*/], uVar3);
								TASK::CLEAR_SEQUENCE_TASK(&uVar3);
								AUDIO::STOP_SOUND(uLocal_930);
								AUDIO::PLAY_PAIN(Local_4208[1 /*29*/], 5, 0, 0);
								Local_4208[1 /*29*/].f_8 = MISC::GET_GAME_TIMER();
								Local_4208[1 /*29*/].f_15 = 1;
							}
							if (GlobalFunc_2521(4000, Local_4208[1 /*29*/].f_8))
							{
								func_112(&(Local_4208[1 /*29*/]), 4);
							}
							break;
						
						case 4:
							if (Local_4208[1 /*29*/].f_15 == 0)
							{
								TASK::CLEAR_PED_TASKS(Local_4208[1 /*29*/]);
								PED::SET_PED_DIES_IN_WATER(Local_4208[1 /*29*/], 0);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[1 /*29*/], 4, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[1 /*29*/], 128, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[1 /*29*/], 2, 0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar4);
								TASK::OPEN_SEQUENCE_TASK(&uVar4);
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_4208[1 /*29*/], 0))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -164.81f, -1837.12f, -0.45f, 2f, 20000, 0.25f, 1, 1193033728);
								TASK::TASK_SMART_FLEE_COORD(0, Local_372, 300f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar4);
								TASK::TASK_PERFORM_SEQUENCE(Local_4208[1 /*29*/], uVar4);
								TASK::CLEAR_SEQUENCE_TASK(&uVar4);
								AUDIO::PLAY_PAIN(Local_4208[1 /*29*/], 7, 0, 0);
								Local_4208[1 /*29*/].f_15 = 1;
							}
							if (Local_4208[1 /*29*/].f_13 > 125f)
							{
								func_110(&(Local_4208[1 /*29*/]), 0, 0, 1);
							}
							break;
					}
				}
				else if (Local_4208[1 /*29*/].f_27 == 0)
				{
					Local_4208[1 /*29*/].f_27 = func_111(Local_4208[1 /*29*/]);
					iLocal_4487 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4208[3 /*29*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_4208[3 /*29*/]))
				{
					Local_4208[3 /*29*/].f_13 = GlobalFunc_4951(Local_4208[3 /*29*/], PLAYER::PLAYER_PED_ID());
					if (iLocal_4487 == 0)
					{
						if (func_225(Local_4208[3 /*29*/], 1084227584))
						{
							iLocal_4487 = 1;
						}
					}
					if (Local_4208[3 /*29*/].f_26 != 4)
					{
						if (func_223())
						{
							func_112(&(Local_4208[3 /*29*/]), 4);
						}
					}
					switch (Local_4208[3 /*29*/].f_26)
					{
						case 1:
							if (Local_4208[3 /*29*/].f_15 == 0)
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(Local_4208[3 /*29*/], "missfra1", "mcs2_crew_idle_m_camera", Local_372, Local_375, 1000f, -4f, -1, 4097, 0, 2, 0);
								Local_4208[3 /*29*/].f_15 = 1;
							}
							if (Local_401.f_26 == 11)
							{
								func_112(&(Local_4208[3 /*29*/]), 2);
							}
							break;
						
						case 2:
							if (Local_4208[3 /*29*/].f_15 == 0)
							{
								TASK::CLEAR_SEQUENCE_TASK(&uVar5);
								TASK::OPEN_SEQUENCE_TASK(&uVar5);
								TASK::TASK_PLAY_ANIM(0, "missfra1mcs_2_crew_react", "intro_m_camera", 1000f, -1000f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "missfra1mcs_2_crew_react", "idle_m_camera", 1000f, -4f, -1, 1, 0, 0, 0, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::CLOSE_SEQUENCE_TASK(uVar5);
								TASK::TASK_PERFORM_SEQUENCE(Local_4208[3 /*29*/], uVar5);
								TASK::CLEAR_SEQUENCE_TASK(&uVar5);
								Local_4208[3 /*29*/].f_8 = 750;
								Local_4208[3 /*29*/].f_9 = MISC::GET_GAME_TIMER();
								Local_4208[3 /*29*/].f_15 = 1;
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_576))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_576))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(Local_576))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_4208[3 /*29*/], "missfra1mcs_2_crew_react", "intro_m_camera", 3))
										{
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_4208[3 /*29*/], "missfra1mcs_2_crew_react", "intro_m_camera") > 0.5575f)
											{
												ENTITY::DETACH_ENTITY(Local_576, 0, 1);
											}
										}
									}
								}
							}
							if (GlobalFunc_2521(Local_4208[3 /*29*/].f_8, Local_4208[3 /*29*/].f_9))
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
								{
									case 0:
										GlobalFunc_5122(Local_4208[3 /*29*/], "GENERIC_SHOCKED_MED", 3);
										Local_4208[3 /*29*/].f_8 = 5250;
										Local_4208[3 /*29*/].f_9 = MISC::GET_GAME_TIMER();
										break;
									
									case 1:
										GlobalFunc_5122(Local_4208[3 /*29*/], "GENERIC_SHOCKED_HIGH", 3);
										Local_4208[3 /*29*/].f_8 = 5250;
										Local_4208[3 /*29*/].f_9 = MISC::GET_GAME_TIMER();
										break;
									
									case 2:
										GlobalFunc_5122(Local_4208[3 /*29*/], "GENERIC_FRIGHTENED_MED", 3);
										Local_4208[3 /*29*/].f_8 = 5250;
										Local_4208[3 /*29*/].f_9 = MISC::GET_GAME_TIMER();
										break;
									
									case 3:
										GlobalFunc_5122(Local_4208[3 /*29*/], "GENERIC_FRIGHTENED_HIGH", 3);
										Local_4208[3 /*29*/].f_8 = 5250;
										Local_4208[3 /*29*/].f_9 = MISC::GET_GAME_TIMER();
										break;
									
									case 4:
										GlobalFunc_5122(Local_4208[3 /*29*/], "JACKED_GENERIC", 3);
										Local_4208[3 /*29*/].f_8 = 5250;
										Local_4208[3 /*29*/].f_9 = MISC::GET_GAME_TIMER();
										break;
									}
							}
							break;
						
						case 4:
							if (Local_4208[3 /*29*/].f_15 == 0)
							{
								TASK::CLEAR_PED_TASKS(Local_4208[3 /*29*/]);
								if (ENTITY::DOES_ENTITY_EXIST(Local_576))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_576))
									{
										if (ENTITY::IS_ENTITY_ATTACHED(Local_576))
										{
											ENTITY::DETACH_ENTITY(Local_576, 0, 1);
										}
									}
								}
								TASK::TASK_SMART_FLEE_COORD(Local_4208[3 /*29*/], Local_372, 300f, -1, 0, 0);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[3 /*29*/], 4, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[3 /*29*/], 128, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[3 /*29*/], 2, 0);
								Local_4208[3 /*29*/].f_15 = 1;
							}
							if (Local_4208[3 /*29*/].f_13 > 125f)
							{
								func_110(&(Local_4208[3 /*29*/]), 0, 0, 1);
							}
							break;
					}
				}
				else if (Local_4208[3 /*29*/].f_27 == 0)
				{
					Local_4208[3 /*29*/].f_27 = func_111(Local_4208[3 /*29*/]);
					iLocal_4487 = 1;
				}
				if (PED::IS_PED_DEAD_OR_DYING(Local_4208[3 /*29*/], 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_576))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_576))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_576))
							{
								ENTITY::DETACH_ENTITY(Local_576, 0, 1);
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4208[4 /*29*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_4208[4 /*29*/]))
				{
					Local_4208[4 /*29*/].f_13 = GlobalFunc_4951(Local_4208[4 /*29*/], PLAYER::PLAYER_PED_ID());
					if (iLocal_4487 == 0)
					{
						if (func_225(Local_4208[4 /*29*/], 1084227584))
						{
							iLocal_4487 = 1;
						}
					}
					if (Local_4208[4 /*29*/].f_26 != 4)
					{
						if (func_223())
						{
							func_112(&(Local_4208[4 /*29*/]), 4);
						}
					}
					switch (Local_4208[4 /*29*/].f_26)
					{
						case 1:
							if (Local_4208[4 /*29*/].f_15 == 0)
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(Local_4208[4 /*29*/], "missfra1", "mcs2_crew_idle_m_boom", Local_372, Local_375, 1000f, -4f, -1, 4097, 0, 2, 0);
								Local_4208[4 /*29*/].f_15 = 1;
							}
							if (Local_401.f_26 == 11)
							{
								func_112(&(Local_4208[4 /*29*/]), 2);
							}
							break;
						
						case 2:
							if (Local_4208[4 /*29*/].f_15 == 0)
							{
								TASK::CLEAR_SEQUENCE_TASK(&uVar6);
								TASK::OPEN_SEQUENCE_TASK(&uVar6);
								TASK::TASK_PLAY_ANIM(0, "missfra1mcs_2_crew_react", "intro_m_boom", 1000f, -1000f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "missfra1mcs_2_crew_react", "idle_m_boom", 1000f, -4f, -1, 1, 0, 0, 0, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::CLOSE_SEQUENCE_TASK(uVar6);
								TASK::TASK_PERFORM_SEQUENCE(Local_4208[4 /*29*/], uVar6);
								TASK::CLEAR_SEQUENCE_TASK(&uVar6);
								Local_4208[4 /*29*/].f_8 = 500;
								Local_4208[4 /*29*/].f_9 = MISC::GET_GAME_TIMER();
								Local_4208[4 /*29*/].f_15 = 1;
							}
							if (GlobalFunc_2521(Local_4208[4 /*29*/].f_8, Local_4208[4 /*29*/].f_9))
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
								{
									case 0:
										GlobalFunc_5122(Local_4208[4 /*29*/], "GENERIC_SHOCKED_MED", 3);
										Local_4208[4 /*29*/].f_8 = 7000;
										Local_4208[4 /*29*/].f_9 = MISC::GET_GAME_TIMER();
										break;
									
									case 1:
										GlobalFunc_5122(Local_4208[4 /*29*/], "GENERIC_SHOCKED_HIGH", 3);
										Local_4208[4 /*29*/].f_8 = 7000;
										Local_4208[4 /*29*/].f_9 = MISC::GET_GAME_TIMER();
										break;
									
									case 2:
										GlobalFunc_5122(Local_4208[4 /*29*/], "GENERIC_CURSE_MED", 3);
										Local_4208[4 /*29*/].f_8 = 7000;
										Local_4208[4 /*29*/].f_9 = MISC::GET_GAME_TIMER();
										break;
									
									case 3:
										GlobalFunc_5122(Local_4208[4 /*29*/], "GENERIC_CURSE_HIGH", 3);
										Local_4208[4 /*29*/].f_8 = 7000;
										Local_4208[4 /*29*/].f_9 = MISC::GET_GAME_TIMER();
										break;
									
									case 4:
										GlobalFunc_5122(Local_4208[4 /*29*/], "JACKED_GENERIC", 3);
										Local_4208[4 /*29*/].f_8 = 7000;
										Local_4208[4 /*29*/].f_9 = MISC::GET_GAME_TIMER();
										break;
									}
							}
							break;
						
						case 4:
							if (Local_4208[4 /*29*/].f_15 == 0)
							{
								TASK::CLEAR_PED_TASKS(Local_4208[4 /*29*/]);
								if (ENTITY::DOES_ENTITY_EXIST(Local_600))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_600))
									{
										if (ENTITY::IS_ENTITY_ATTACHED(Local_600))
										{
											ENTITY::DETACH_ENTITY(Local_600, 0, 1);
										}
									}
								}
								TASK::TASK_SMART_FLEE_COORD(Local_4208[4 /*29*/], Local_372, 300f, -1, 0, 0);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[4 /*29*/], 4, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[4 /*29*/], 128, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_4208[4 /*29*/], 2, 0);
								Local_4208[4 /*29*/].f_15 = 1;
							}
							if (Local_4208[4 /*29*/].f_13 > 125f)
							{
								func_110(&(Local_4208[4 /*29*/]), 0, 0, 1);
							}
							break;
					}
				}
				else if (Local_4208[4 /*29*/].f_27 == 0)
				{
					Local_4208[4 /*29*/].f_27 = func_111(Local_4208[4 /*29*/]);
					iLocal_4487 = 1;
				}
				if (PED::IS_PED_DEAD_OR_DYING(Local_4208[4 /*29*/], 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_600))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_600))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_600))
							{
								ENTITY::DETACH_ENTITY(Local_600, 0, 1);
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_584))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_584))
				{
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_584, 0, 2))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_584, 0);
					}
				}
			}
			break;
	}
}

int func_240(var uParam0, int iParam1)//Position - 0x1692E
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_1);
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, uParam0->f_2, 1, 1, 0);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, uParam0->f_2, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_5, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, iParam1);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(*uParam0, 0);
			ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(*uParam0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_241(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x169B4
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			STREAMING::REQUEST_MODEL(uParam0->f_7);
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_7))
			{
				if (iParam8 == 0)
				{
					if (iParam4 == 145)
					{
						*uParam0 = PED::CREATE_PED(26, uParam0->f_7, uParam0->f_3, uParam0->f_6, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_7);
					}
					else if (GlobalFunc_6705(uParam0, iParam4, uParam0->f_3, uParam0->f_6, 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_7);
					}
					if (!PED::IS_PED_INJURED(*uParam0))
					{
						func_540(*uParam0, iParam2, iParam5, iParam10, bParam6, iParam7);
						if (iParam3 == 1)
						{
							uParam0->f_1 = GlobalFunc_7056(*uParam0, 0, 0);
						}
					}
					return 1;
				}
				else if (iParam8 != 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
					{
						if (iParam4 == 145)
						{
							*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam8, 26, uParam0->f_7, iParam9, 1, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_7);
						}
						else if (GlobalFunc_7140(uParam0, iParam4, iParam8, iParam9, 1))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_7);
						}
						if (!PED::IS_PED_INJURED(*uParam0))
						{
							func_540(*uParam0, iParam2, iParam5, iParam10, bParam6, iParam7);
							if (iParam3 == 1)
							{
								uParam0->f_1 = GlobalFunc_7056(*uParam0, 0, 0);
							}
						}
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (iParam8 == 0)
			{
				if (func_536(uParam0, iParam4, uParam0->f_3, uParam0->f_6, 1, 0, 0))
				{
					func_540(*uParam0, iParam2, iParam5, iParam10, bParam6, iParam7);
					if (iParam3 == 1)
					{
						uParam0->f_1 = GlobalFunc_7056(*uParam0, 0, 0);
					}
					return 1;
				}
			}
			else if (iParam8 != 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
				{
					if (func_242(uParam0, iParam4, iParam8, iParam9, 1, 0, 0))
					{
						func_540(*uParam0, iParam2, iParam5, iParam10, bParam6, iParam7);
						if (iParam3 == 1)
						{
							uParam0->f_1 = GlobalFunc_7056(*uParam0, 0, 0);
						}
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_242(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x16B9B
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
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, uParam3, 1, 1);
				GlobalFunc_8569(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				func_517(*iParam0);
				GlobalFunc_7933(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7932(*iParam0);
				func_244(*iParam0, bParam6);
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


int func_244(int iParam0, bool bParam1)//Position - 0x16CC6
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_337(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_337(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10984(iParam0, 3, 169))
					{
						func_488(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 6))
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 17))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 20))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 21))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 22))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 11))
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 10))
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 50))
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 14, 59))
			{
				func_488(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10984(iParam0, 8, 22))
			{
				func_488(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 14))
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10984(iParam0, 12, 13))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 14))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 15))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 4))
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 3))
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 14, 82))
			{
				func_488(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10984(iParam0, 8, 76))
			{
				func_488(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 1))
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10984(iParam0, 12, 12))
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 15))
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10984(iParam0, 3, 71))
				{
					func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 17))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 18))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 19))
			{
				if (!GlobalFunc_10986(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10984(iParam0, 12, 7))
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 6))
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 14, 88))
			{
				func_488(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10984(iParam0, 8, 17))
			{
				func_488(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10984(iParam0, 12, 11))
			{
				func_488(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}





























































































void func_337(int iParam0, int iParam1)//Position - 0x3080B
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
				iVar1 = GlobalFunc_11101(iParam0, 4, -1);
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
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
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











void func_348(int iParam0, var uParam1, bool bParam2)//Position - 0x31A5B
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
			if (GlobalFunc_11103(iParam0, iVar1, &iVar2, 0))
			{
				func_488(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11099(iParam0, iVar1, &iVar2))
			{
				func_488(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_351(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
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



int func_351(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x31CF2
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
		Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10983(iVar5, iParam1, iParam2, 1);
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
					Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 10, 0) };
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
						GlobalFunc_10983(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iVar0, uVar15[iVar0]) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10983(iVar5, iVar0, uVar15[iVar0], 1);
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
								GlobalFunc_10983(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iVar0, GlobalFunc_11098(iParam0, iVar0, -1)) };
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
			iVar57 = GlobalFunc_9234();
			if (iVar57 != -1)
			{
				GlobalFunc_9233(iVar57, 0, Global_68104);
			}
			func_438(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10983(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11097(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
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
			iVar69 = GlobalFunc_6669(iParam0, 1);
			iVar3 = GlobalFunc_11097(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10983(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
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
				iVar70 = GlobalFunc_6669(iParam0, 11);
				iVar71 = GlobalFunc_6669(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_6669(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11097(iParam0, iVar5, 11, iVar70, 3, 0);
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
					iVar70 = GlobalFunc_6669(iParam0, 11);
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
							Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 8, iVar71) };
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
										Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, 11, iVar82) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10877(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10719(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_438(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11098(iParam0, 8, -1), iParam2);
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
				func_395(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_438(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10719(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_6669(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_6669(iParam0, 7);
				if (!GlobalFunc_8360(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
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
					iVar94 = GlobalFunc_6669(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
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
					iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_351(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7688(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_10981(iParam0, 9, iVar97))
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
					iVar99 = GlobalFunc_11098(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11098(iParam0, 11, -1);
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
					iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_351(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11097(iParam0, iVar5, iParam1, iParam2, 14, 1);
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
		if (GlobalFunc_11190(iParam0, &uVar4))
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












































void func_395(int iParam0, int iParam1, bool bParam2)//Position - 0x38072
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_421(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9233(iVar1, 1, Global_68104);
	}
	func_396(iParam0, bParam2, 0);
}

void func_396(int iParam0, bool bParam1, bool bParam2)//Position - 0x380B4
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
		bVar15 = GlobalFunc_11192(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = GlobalFunc_11191(iParam0);
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
			if (GlobalFunc_8609(iVar18, iVar0))
			{
				if (GlobalFunc_5658(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9230(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8609(123, iVar0))
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
					if (GlobalFunc_8609(iVar36, iVar0))
					{
						if (GlobalFunc_9230(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
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

























void func_421(int iParam0, int iParam1)//Position - 0x3EE24
{
	struct<12> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<7> Var16;
	int iVar31;
	int iVar32;
	struct<7> Var33;
	int iVar48;
	int iVar49;
	struct<7> Var50;
	int iVar65;
	int iVar66;
	struct<7> Var67;
	int iVar82;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		iVar13 = GlobalFunc_303(iParam1);
		if (iParam0 != 0)
		{
			if (iVar13 == 3 || iVar13 == 4)
			{
				if (iParam0 == 1019352240)
				{
					GlobalFunc_9233(13, 0, Global_68104);
					GlobalFunc_9233(14, 0, Global_68104);
					GlobalFunc_9233(15, 0, Global_68104);
					GlobalFunc_9233(16, 0, Global_68104);
					GlobalFunc_9233(71, 0, Global_68104);
					GlobalFunc_9233(72, 0, Global_68104);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar13 == 3)
					{
						GlobalFunc_9233(73, 0, Global_68104);
						GlobalFunc_9233(74, 0, Global_68104);
						GlobalFunc_9233(75, 0, Global_68104);
						GlobalFunc_9233(76, 0, Global_68104);
						GlobalFunc_9233(77, 0, Global_68104);
						GlobalFunc_9233(78, 0, Global_68104);
						GlobalFunc_9233(79, 0, Global_68104);
						GlobalFunc_9233(80, 0, Global_68104);
						GlobalFunc_9233(81, 0, Global_68104);
						GlobalFunc_9233(82, 0, Global_68104);
						GlobalFunc_9233(83, 0, Global_68104);
						GlobalFunc_9233(84, 0, Global_68104);
						GlobalFunc_9233(85, 0, Global_68104);
						GlobalFunc_9233(86, 0, Global_68104);
						GlobalFunc_9233(90, 0, Global_68104);
						GlobalFunc_9233(91, 0, Global_68104);
						GlobalFunc_9233(124, 0, Global_68104);
						GlobalFunc_9233(125, 0, Global_68104);
						GlobalFunc_9233(87, 0, Global_68104);
						GlobalFunc_9233(88, 0, Global_68104);
						GlobalFunc_9233(89, 0, Global_68104);
						iVar15 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar14 = 0;
						while (iVar14 < iVar15)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar14, &Var16))
							{
								if (Var16.f_6 == 277073536)
								{
									GlobalFunc_9233((129 + iVar14), 0, Global_68104);
								}
							}
							iVar14++;
						}
					}
					else
					{
						GlobalFunc_9233(73, 0, Global_68104);
						GlobalFunc_9233(74, 0, Global_68104);
						GlobalFunc_9233(75, 0, Global_68104);
						GlobalFunc_9233(76, 0, Global_68104);
						GlobalFunc_9233(77, 0, Global_68104);
						GlobalFunc_9233(78, 0, Global_68104);
						GlobalFunc_9233(79, 0, Global_68104);
						GlobalFunc_9233(80, 0, Global_68104);
						GlobalFunc_9233(81, 0, Global_68104);
						GlobalFunc_9233(82, 0, Global_68104);
						GlobalFunc_9233(83, 0, Global_68104);
						GlobalFunc_9233(84, 0, Global_68104);
						GlobalFunc_9233(85, 0, Global_68104);
						GlobalFunc_9233(92, 0, Global_68104);
						GlobalFunc_9233(87, 0, Global_68104);
						GlobalFunc_9233(88, 0, Global_68104);
						GlobalFunc_9233(89, 0, Global_68104);
						iVar32 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar31 = 0;
						while (iVar31 < iVar32)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar31, &Var33))
							{
								if (Var33.f_6 == 277073536)
								{
									GlobalFunc_9233((129 + iVar31), 0, Global_68104);
								}
							}
							iVar31++;
						}
					}
				}
				else if (iParam0 == 2140335355)
				{
					if (iVar13 == 3)
					{
						GlobalFunc_9233(93, 0, Global_68104);
						GlobalFunc_9233(94, 0, Global_68104);
						GlobalFunc_9233(95, 0, Global_68104);
						GlobalFunc_9233(96, 0, Global_68104);
						GlobalFunc_9233(97, 0, Global_68104);
						GlobalFunc_9233(98, 0, Global_68104);
						GlobalFunc_9233(99, 0, Global_68104);
						GlobalFunc_9233(100, 0, Global_68104);
						GlobalFunc_9233(101, 0, Global_68104);
						GlobalFunc_9233(102, 0, Global_68104);
						GlobalFunc_9233(103, 0, Global_68104);
						GlobalFunc_9233(104, 0, Global_68104);
						GlobalFunc_9233(105, 0, Global_68104);
						GlobalFunc_9233(106, 0, Global_68104);
						GlobalFunc_9233(107, 0, Global_68104);
						GlobalFunc_9233(108, 0, Global_68104);
						GlobalFunc_9233(109, 0, Global_68104);
						GlobalFunc_9233(110, 0, Global_68104);
						GlobalFunc_9233(111, 0, Global_68104);
						GlobalFunc_9233(112, 0, Global_68104);
						GlobalFunc_9233(113, 0, Global_68104);
						GlobalFunc_9233(114, 0, Global_68104);
						GlobalFunc_9233(115, 0, Global_68104);
						GlobalFunc_9233(116, 0, Global_68104);
						GlobalFunc_9233(117, 0, Global_68104);
						GlobalFunc_9233(123, 0, Global_68104);
						iVar49 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar48 = 0;
						while (iVar48 < iVar49)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar48, &Var50))
							{
								if (Var50.f_6 == 2140335355)
								{
									GlobalFunc_9233((129 + iVar48), 0, Global_68104);
								}
							}
							iVar48++;
						}
					}
					else
					{
						GlobalFunc_9233(93, 0, Global_68104);
						GlobalFunc_9233(94, 0, Global_68104);
						GlobalFunc_9233(95, 0, Global_68104);
						GlobalFunc_9233(96, 0, Global_68104);
						GlobalFunc_9233(97, 0, Global_68104);
						GlobalFunc_9233(98, 0, Global_68104);
						GlobalFunc_9233(99, 0, Global_68104);
						GlobalFunc_9233(100, 0, Global_68104);
						GlobalFunc_9233(101, 0, Global_68104);
						GlobalFunc_9233(102, 0, Global_68104);
						GlobalFunc_9233(103, 0, Global_68104);
						GlobalFunc_9233(104, 0, Global_68104);
						GlobalFunc_9233(105, 0, Global_68104);
						GlobalFunc_9233(106, 0, Global_68104);
						GlobalFunc_9233(107, 0, Global_68104);
						GlobalFunc_9233(108, 0, Global_68104);
						GlobalFunc_9233(109, 0, Global_68104);
						GlobalFunc_9233(110, 0, Global_68104);
						GlobalFunc_9233(111, 0, Global_68104);
						GlobalFunc_9233(112, 0, Global_68104);
						GlobalFunc_9233(113, 0, Global_68104);
						GlobalFunc_9233(114, 0, Global_68104);
						GlobalFunc_9233(115, 0, Global_68104);
						GlobalFunc_9233(116, 0, Global_68104);
						GlobalFunc_9233(117, 0, Global_68104);
						GlobalFunc_9233(118, 0, Global_68104);
						GlobalFunc_9233(119, 0, Global_68104);
						GlobalFunc_9233(120, 0, Global_68104);
						GlobalFunc_9233(121, 0, Global_68104);
						GlobalFunc_9233(122, 0, Global_68104);
						GlobalFunc_9233(123, 0, Global_68104);
						iVar66 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar65 = 0;
						while (iVar65 < iVar66)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar65, &Var67))
							{
								if (Var67.f_6 == 2140335355)
								{
									GlobalFunc_9233((129 + iVar65), 0, Global_68104);
								}
							}
							iVar65++;
						}
					}
					return;
				}
			}
			iVar82 = 0;
			while (iVar82 < 127)
			{
				if (GlobalFunc_5658(&Var0, iVar82, iVar13, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						GlobalFunc_9233(Var0.f_11, 0, Global_68104);
					}
				}
				iVar82++;
			}
		}
	}
}

















void func_438(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x446A0
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
					iParam2 = GlobalFunc_6669(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = GlobalFunc_6669(iParam0, 11);
				if (!GlobalFunc_6737(iVar0, iVar1))
				{
					return;
				}
			}
			func_421(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!GlobalFunc_10242(iVar0, iParam2, 13) && !GlobalFunc_10242(iVar0, iParam2, 14)) && !GlobalFunc_10242(iVar0, iParam2, 15)) && !GlobalFunc_10242(iVar0, iParam2, 16)) && !GlobalFunc_10242(iVar0, iParam2, 71)) && !GlobalFunc_10242(iVar0, iParam2, 72))
				{
					func_421(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = GlobalFunc_9231(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					func_439(iParam0, iVar2);
				}
				else
				{
					GlobalFunc_9233(iVar2, 1, Global_68104);
				}
			}
		}
	}
}

void func_439(int iParam0, int iParam1)//Position - 0x447C5
{
	int iVar0;
	struct<6> Var1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = GlobalFunc_303(iParam0);
			if (!GlobalFunc_8609(iParam1, -1))
			{
				if (GlobalFunc_5658(&Var1, iParam1, iVar0, iParam0, -1))
				{
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					GlobalFunc_294(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

















































int func_488(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x5CB43
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
		Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8613(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8613(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11238(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_488(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8613(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11238(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_488(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, iVar0, GlobalFunc_11101(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11103(iParam0, iVar10, &iVar4, 1))
							{
								func_488(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_488(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10878(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_488(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_488(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_488(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_488(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_488(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8613(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11238(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_488(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8613(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11238(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_488(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11238(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_488(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11100(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11103(iParam0, iVar10, &iVar4, 0))
		{
			func_488(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11099(iParam0, iVar10, &iVar4))
		{
			func_488(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}





























void func_517(int iParam0)//Position - 0x60769
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
					iVar1 = GlobalFunc_11101(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11194(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11101(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11101(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11194(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11101(iParam0, 4, -1);
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



















int func_536(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x61463
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
			GlobalFunc_8569(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_517(*iParam0);
			GlobalFunc_7933(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7932(*iParam0);
			func_244(*iParam0, bParam8);
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




void func_540(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x615F3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_PED_AS_ENEMY(iParam0, iParam5);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, bParam4);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
			if (bParam4 == 0)
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 128);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 32, iParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, iParam3);
			PED::SET_PED_CONFIG_FLAG(iParam0, 182, !bParam4);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam0, 1);
		}
	}
}


void func_542(int iParam0, int iParam1, int iParam2)//Position - 0x616FE
{
	struct<11> Var0;
	var uVar12;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2))
		{
			PED::SET_PED_RESET_FLAG(iParam0, 398, 1);
			PED::SET_PED_RESET_FLAG(iParam0, 64, 1);
			PED::SET_PED_RESET_FLAG(iParam0, 227, 1);
			iParam1->f_13 = GlobalFunc_4951(iParam0, iParam2);
			switch (GlobalFunc_8315())
			{
				case 1:
					func_578(iParam0, joaat("weapon_pumpshotgun"), 1);
					break;
				
				case 2:
					func_578(iParam0, joaat("weapon_smg"), 1);
					break;
			}
			switch (iParam1->f_26)
			{
				case 5:
					switch (iParam1->f_12)
					{
						case 0:
							if (!HUD::DOES_BLIP_EXIST(iParam1->f_1))
							{
								iParam1->f_1 = GlobalFunc_7056(iParam0, 0, 0);
							}
							if (iParam1->f_15 == 0)
							{
								if (!PED::IS_PED_INJURED(iParam0))
								{
									ENTITY::SET_ENTITY_HEALTH(iParam0, 600);
									PED::SET_PED_MAX_HEALTH(iParam0, 600);
									PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, 0);
									WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, 0);
									WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, joaat("weapon_pumpshotgun"));
									PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 36, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 46, 1);
									PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
									if (!PED::IS_PED_IN_COVER(iParam0, 0))
									{
										GlobalFunc_2901(iParam0, iParam1->f_3, iParam1->f_6, 0, 0, 0);
										TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iParam0, Local_3246[2 /*12*/].f_1, -1, 0, 0f, 1, 0, Local_3246[2 /*12*/], 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
									}
									PED::SET_PED_USING_ACTION_MODE(iParam0, 1, -1, 0);
								}
								iParam1->f_15 = 1;
							}
							if (iLocal_4043[0] == 1)
							{
								iParam1->f_8 = MISC::GET_GAME_TIMER();
								iParam1->f_15 = 0;
								iParam1->f_23 = 0;
								iParam1->f_12++;
							}
							break;
						
						case 1:
							if (iParam1->f_15 == 0)
							{
								if (GlobalFunc_2521(850, iParam1->f_8))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_1273[0 /*18*/]) && !PED::IS_PED_INJURED(Local_1273[0 /*18*/]))
									{
										TASK::TASK_SHOOT_AT_ENTITY(iParam0, Local_1273[0 /*18*/], -1, -957453492);
									}
									else
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
									}
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									func_577(iParam0, 1, 2, 1, 0, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 35, 1);
									func_576(iParam0, 84.92673f, -1947.691f, 19.27269f, 86.48703f, -1945.87f, 21.76007f, 1.5f, 0);
									func_126(iParam0, 15, 100, -957453492);
									Local_430.f_15 = 1;
								}
							}
							if (func_574())
							{
								iParam1->f_8 = MISC::GET_GAME_TIMER();
								iParam1->f_15 = 0;
								iParam1->f_23 = 0;
								iParam1->f_12++;
							}
							break;
						
						case 2:
							if (iParam1->f_15 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
								func_577(iParam0, 1, 2, 1, 29, 0);
								func_573(iParam0, 90.05f, -1941.15f, 19.74f, 0.76f, 1);
								func_126(iParam0, 15, 90, -687903391);
								iParam1->f_15 = 1;
							}
							if (func_572())
							{
								iParam1->f_15 = 0;
								iParam1->f_23 = 0;
								iParam1->f_12++;
							}
							break;
						
						case 3:
							if (iParam1->f_15 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
								func_577(iParam0, 1, 2, 1, 29, 0);
								func_571(iParam0, 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								func_126(iParam0, 15, 90, -687903391);
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[60 /*12*/]));
								func_576(iParam0, 76.77f, -1932.37f, 19.28f, 78.38f, -1930.44f, 21.76f, 2.5f, 0);
								func_569(&Local_1000, 76.77f, -1932.37f, 19.28f, 78.38f, -1930.44f, 21.76f, 2.5f);
								iParam1->f_15 = 1;
							}
							if (iParam1->f_20 == 0)
							{
								if (func_568(iParam2, Local_1000))
								{
									func_567(iParam0, &(iParam1->f_2));
									func_576(iParam0, 76.83f, -1933.13f, 19.26f, 81.12f, -1928.17f, 21.69f, 3.5f, 0);
									func_569(&Local_1000, 76.83f, -1933.13f, 19.26f, 81.12f, -1928.17f, 21.69f, 3.5f);
									iParam1->f_20 = 1;
								}
							}
							else if (!func_568(iParam2, Local_1000))
							{
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[60 /*12*/]));
								func_576(iParam0, 76.77f, -1932.37f, 19.28f, 78.38f, -1930.44f, 21.76f, 2.5f, 0);
								func_569(&Local_1000, 76.77f, -1932.37f, 19.28f, 78.38f, -1930.44f, 21.76f, 2.5f);
								iParam1->f_20 = 0;
							}
							if (func_565())
							{
								iParam1->f_17 = 0;
								iParam1->f_15 = 0;
								iParam1->f_23 = 0;
								iParam1->f_20 = 0;
								iParam1->f_12++;
							}
							break;
						
						case 4:
							if (iParam1->f_15 == 0)
							{
								func_564(iParam0, 74.24f, -1927.3f, 19.95f, 2f, 1, 59.68f, -1915.02f, 20.58f, 0, 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
								func_577(iParam0, 1, 2, 1, 29, 0);
								func_571(iParam0, 1, 0, 1, 1, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								func_126(iParam0, 15, 90, -687903391);
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[3 /*12*/]));
								func_576(iParam0, 72.78f, -1928.84f, 19.46f, 75.01f, -1926.21f, 22.34f, 3f, 0);
								func_569(&Local_1000, 72.78f, -1928.84f, 19.46f, 75.01f, -1926.21f, 22.34f, 3f);
								iParam1->f_15 = 1;
							}
							if (iParam1->f_20 == 0)
							{
								if (func_568(iParam2, Local_1000))
								{
									func_567(iParam0, &(iParam1->f_2));
									func_576(iParam0, 72.86f, -1928.85f, 19.48f, 76.75f, -1924.1f, 21.78f, 3.5f, 0);
									func_569(&Local_1000, 72.86f, -1928.85f, 19.48f, 76.75f, -1924.1f, 21.78f, 3.5f);
									iParam1->f_20 = 1;
								}
							}
							else if (!func_568(iParam2, Local_1000))
							{
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[3 /*12*/]));
								func_576(iParam0, 72.78f, -1928.84f, 19.46f, 75.01f, -1926.21f, 22.34f, 3f, 0);
								func_569(&Local_1000, 72.78f, -1928.84f, 19.46f, 75.01f, -1926.21f, 22.34f, 3f);
								iParam1->f_20 = 0;
							}
							if (func_562())
							{
								if (func_561(iParam0, iParam2, iParam1->f_13, 25f, Local_333))
								{
									iParam1->f_17 = 0;
									iParam1->f_15 = 0;
									iParam1->f_23 = 0;
									iParam1->f_20 = 0;
									iParam1->f_12++;
								}
								else
								{
									iParam1->f_17 = 1;
								}
							}
							break;
						
						case 5:
							if (iParam1->f_15 == 0)
							{
								func_564(iParam0, 66.13f, -1920.24f, 20.46f, 2f, 1, 52.56f, -1909.63f, 20.63f, 0, 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
								func_577(iParam0, 1, 2, 1, 29, 0);
								func_571(iParam0, 1, 0, 1, 1, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								func_126(iParam0, 15, 90, -687903391);
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[11 /*12*/]));
								func_576(iParam0, 63.13f, -1921.39f, 20.15f, 65.4f, -1918.74f, 23.03f, 3f, 0);
								func_569(&Local_1000, 63.13f, -1921.39f, 20.15f, 65.4f, -1918.74f, 23.03f, 3f);
								iParam1->f_15 = 1;
							}
							if (iParam1->f_20 == 0)
							{
								if (func_568(iParam2, Local_1000))
								{
									func_567(iParam0, &(iParam1->f_2));
									func_576(iParam0, 63.63f, -1922.2f, 19.98f, 69.73f, -1915.05f, 22.44f, 5.5f, 0);
									func_569(&Local_1000, 63.63f, -1922.2f, 19.98f, 69.73f, -1915.05f, 22.44f, 5.5f);
									iParam1->f_20 = 1;
								}
							}
							else if (!func_568(iParam2, Local_1000))
							{
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[11 /*12*/]));
								func_576(iParam0, 63.13f, -1921.39f, 20.15f, 65.4f, -1918.74f, 23.03f, 3f, 0);
								func_569(&Local_1000, 63.13f, -1921.39f, 20.15f, 65.4f, -1918.74f, 23.03f, 3f);
								iParam1->f_20 = 0;
							}
							if (iLocal_1059 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_1921[0 /*18*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_1921[0 /*18*/]))
									{
										if (func_568(iParam0, Local_1000))
										{
											if (PED::IS_PED_IN_COVER(iParam0, 0))
											{
												switch (GlobalFunc_8315())
												{
													case 1:
														GlobalFunc_2998(&iLocal_624, 2, 1);
														break;
													
													case 2:
														GlobalFunc_2998(&iLocal_624, 1, 1);
														break;
												}
												iLocal_1059 = 1;
											}
										}
									}
								}
							}
							if (func_559(&(Local_1921[0 /*18*/])))
							{
								if (func_558(Local_969) || func_557() < 5)
								{
									iLocal_1059 = 0;
									GlobalFunc_2998(&iLocal_624, 2, 0);
									GlobalFunc_2998(&iLocal_624, 1, 0);
									iParam1->f_17 = 0;
									iParam1->f_15 = 0;
									iParam1->f_23 = 0;
									iParam1->f_20 = 0;
									iParam1->f_12++;
								}
							}
							break;
						
						case 6:
							if (iParam1->f_15 == 0)
							{
								func_564(iParam0, 56.78f, -1913.42f, 20.62f, 2f, 1, 52.56f, -1909.63f, 20.63f, 0, 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
								func_577(iParam0, 1, 2, 1, 29, 0);
								func_571(iParam0, 1, 0, 1, 1, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								func_126(iParam0, 15, 90, -687903391);
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[4 /*12*/]));
								func_576(iParam0, 53.54f, -1913.36f, 20.2f, 56.28f, -1910.08f, 23.04f, 3f, 0);
								func_569(&Local_1000, 53.54f, -1913.36f, 20.2f, 56.28f, -1910.08f, 23.04f, 3f);
								iParam1->f_15 = 1;
							}
							if (iParam1->f_20 == 0)
							{
								if (func_568(iParam2, Local_1000))
								{
									func_567(iParam0, &(iParam1->f_2));
									func_576(iParam0, 54.6f, -1914.03f, 20.18f, 58.81f, -1908.89f, 22.47f, 5.5f, 0);
									func_569(&Local_1000, 54.6f, -1914.03f, 20.18f, 58.81f, -1908.89f, 22.47f, 5.5f);
									iParam1->f_20 = 1;
								}
							}
							else if (!func_568(iParam2, Local_1000))
							{
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[4 /*12*/]));
								func_576(iParam0, 53.54f, -1913.36f, 20.2f, 56.28f, -1910.08f, 23.04f, 3f, 0);
								func_569(&Local_1000, 53.54f, -1913.36f, 20.2f, 56.28f, -1910.08f, 23.04f, 3f);
								iParam1->f_20 = 0;
							}
							if (iLocal_4043[15] == 1 && iLocal_4043[16] == 1)
							{
								if (func_561(iParam0, iParam2, iParam1->f_13, 25f, Local_333))
								{
									iParam1->f_17 = 0;
									iParam1->f_15 = 0;
									iParam1->f_23 = 0;
									iParam1->f_20 = 0;
									iParam1->f_12++;
								}
								else
								{
									iParam1->f_17 = 1;
								}
							}
							break;
						
						case 7:
							if (iParam1->f_15 == 0)
							{
								func_564(iParam0, 40.1f, -1900.23f, 20.85f, 2f, 1, 30.67f, -1891.61f, 21.37f, 0, 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
								func_577(iParam0, 1, 2, 1, 29, 0);
								func_571(iParam0, 1, 0, 1, 1, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								func_126(iParam0, 15, 90, -687903391);
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[10 /*12*/]));
								func_576(iParam0, 37.22f, -1901.63f, 20.41f, 39.89f, -1898.44f, 23.38f, 3f, 0);
								func_569(&Local_1000, 37.22f, -1901.63f, 20.41f, 39.89f, -1898.44f, 23.38f, 3f);
								iParam1->f_15 = 1;
							}
							if (iParam1->f_20 == 0)
							{
								if (func_568(iParam2, Local_1000))
								{
									func_567(iParam0, &(iParam1->f_2));
									func_576(iParam0, 38.18f, -1902.36f, 20.43f, 44.59f, -1894.62f, 23.76f, 6f, 0);
									func_569(&Local_1000, 38.18f, -1902.36f, 20.43f, 44.59f, -1894.62f, 23.76f, 6f);
									iParam1->f_20 = 1;
								}
							}
							else if (!func_568(iParam2, Local_1000))
							{
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[10 /*12*/]));
								func_576(iParam0, 37.22f, -1901.63f, 20.41f, 39.89f, -1898.44f, 23.38f, 3f, 0);
								func_569(&Local_1000, 37.22f, -1901.63f, 20.41f, 39.89f, -1898.44f, 23.38f, 3f);
								iParam1->f_20 = 0;
							}
							if (func_556())
							{
								if (func_561(iParam0, iParam2, iParam1->f_13, 25f, Local_333))
								{
									iParam1->f_17 = 0;
									iParam1->f_15 = 0;
									iParam1->f_23 = 0;
									iParam1->f_20 = 0;
									iParam1->f_12++;
								}
								else
								{
									iParam1->f_17 = 1;
								}
							}
							break;
						
						case 8:
							if (iParam1->f_15 == 0)
							{
								func_564(iParam0, 34.62f, -1895.43f, 21.14f, 2f, 1, 22.67f, -1884.88f, 21.8f, 0, 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
								func_577(iParam0, 1, 2, 1, 29, 0);
								func_571(iParam0, 1, 0, 1, 1, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								func_126(iParam0, 15, 90, -687903391);
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[5 /*12*/]));
								func_576(iParam0, 31.64f, -1895.74f, 20.8f, 33.99f, -1892.91f, 23.71f, 3f, 0);
								func_569(&Local_1000, 31.64f, -1895.74f, 20.8f, 33.99f, -1892.91f, 23.71f, 3f);
								iParam1->f_15 = 1;
							}
							if (iParam1->f_20 == 0)
							{
								if (func_568(iParam2, Local_1000))
								{
									func_567(iParam0, &(iParam1->f_2));
									func_576(iParam0, 32.46f, -1896.44f, 20.79f, 38.02f, -1889.85f, 24.08f, 5f, 0);
									func_569(&Local_1000, 32.46f, -1896.44f, 20.79f, 38.02f, -1889.85f, 24.08f, 5f);
									iParam1->f_20 = 1;
								}
							}
							else if (!func_568(iParam2, Local_1000))
							{
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[5 /*12*/]));
								func_576(iParam0, 31.64f, -1895.74f, 20.8f, 33.99f, -1892.91f, 23.71f, 3f, 0);
								func_569(&Local_1000, 31.64f, -1895.74f, 20.8f, 33.99f, -1892.91f, 23.71f, 3f);
								iParam1->f_20 = 0;
							}
							if (func_550())
							{
								if (func_561(iParam0, iParam2, iParam1->f_13, 25f, Local_333))
								{
									iParam1->f_17 = 0;
									iParam1->f_15 = 0;
									iParam1->f_23 = 0;
									iParam1->f_20 = 0;
									iParam1->f_12++;
								}
								else
								{
									iParam1->f_17 = 1;
								}
							}
							break;
						
						case 9:
							if (iParam1->f_15 == 0)
							{
								func_564(iParam0, 18.13f, -1881.51f, 22.03f, 2f, 1, 5.44f, -1868.51f, 22.75f, 0, 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
								func_577(iParam0, 1, 2, 1, 29, 0);
								func_571(iParam0, 1, 0, 1, 1, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								func_126(iParam0, 15, 90, -687903391);
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[61 /*12*/]));
								func_576(iParam0, 14.52f, -1883.05f, 21.67f, 17.7f, -1879.24f, 24.59f, 3f, 0);
								func_569(&Local_1000, 14.52f, -1883.05f, 21.67f, 17.7f, -1879.24f, 24.59f, 3f);
								iParam1->f_15 = 1;
							}
							if (iParam1->f_20 == 0)
							{
								if (func_568(iParam2, Local_1000))
								{
									func_567(iParam0, &(iParam1->f_2));
									func_576(iParam0, 14.78f, -1883.76f, 21.68f, 20.16f, -1877.56f, 24.94f, 5f, 0);
									func_569(&Local_1000, 14.78f, -1883.76f, 21.68f, 20.16f, -1877.56f, 24.94f, 5f);
									iParam1->f_20 = 1;
								}
							}
							else if (!func_568(iParam2, Local_1000))
							{
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[61 /*12*/]));
								func_576(iParam0, 14.52f, -1883.05f, 21.67f, 17.7f, -1879.24f, 24.59f, 3f, 0);
								func_569(&Local_1000, 14.52f, -1883.05f, 21.67f, 17.7f, -1879.24f, 24.59f, 3f);
								iParam1->f_20 = 0;
							}
							if (func_559(&(Local_1495[1 /*18*/])) && (func_559(&(Local_1495[2 /*18*/])) || func_559(&(Local_1495[0 /*18*/]))))
							{
								if (func_561(iParam0, iParam2, iParam1->f_13, 25f, Local_333))
								{
									iParam1->f_17 = 0;
									iParam1->f_15 = 0;
									iParam1->f_23 = 0;
									iParam1->f_20 = 0;
									iParam1->f_12++;
								}
								else
								{
									iParam1->f_17 = 1;
								}
							}
							break;
						
						case 10:
							if (iParam1->f_15 == 0)
							{
								func_564(iParam0, 11.21f, -1875.09f, 22.42f, 2f, 1, 5.44f, -1868.51f, 22.75f, 0, 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
								func_577(iParam0, 1, 2, 1, 29, 0);
								func_571(iParam0, 1, 0, 1, 1, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								func_126(iParam0, 15, 90, -687903391);
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[6 /*12*/]));
								func_576(iParam0, 7.52f, -1876.6f, 21.93f, 10.41f, -1873.2f, 25f, 3f, 0);
								func_569(&Local_1000, 7.52f, -1876.6f, 21.93f, 10.41f, -1873.2f, 25f, 3f);
								iParam1->f_15 = 1;
							}
							if (iParam1->f_20 == 0)
							{
								if (func_568(iParam2, Local_1000))
								{
									func_567(iParam0, &(iParam1->f_2));
									func_576(iParam0, 8.79f, -1877.08f, 21.9f, 13.3f, -1871.56f, 25.45f, 5f, 0);
									func_569(&Local_1000, 8.79f, -1877.08f, 21.9f, 13.3f, -1871.56f, 25.45f, 5f);
									iParam1->f_20 = 1;
								}
							}
							else if (!func_568(iParam2, Local_1000))
							{
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[6 /*12*/]));
								func_576(iParam0, 7.52f, -1876.6f, 21.93f, 10.41f, -1873.2f, 25f, 3f, 0);
								func_569(&Local_1000, 7.52f, -1876.6f, 21.93f, 10.41f, -1873.2f, 25f, 3f);
								iParam1->f_20 = 0;
							}
							if ((func_559(&(Local_1495[0 /*18*/])) && func_559(&(Local_1495[1 /*18*/]))) && func_559(&(Local_1495[2 /*18*/])))
							{
								if (func_561(iParam0, iParam2, iParam1->f_13, 25f, Local_333))
								{
									iParam1->f_17 = 0;
									iParam1->f_15 = 0;
									iParam1->f_23 = 0;
									iParam1->f_20 = 0;
									iParam1->f_12++;
								}
								else
								{
									iParam1->f_17 = 1;
								}
							}
							break;
						
						case 11:
							if (iParam1->f_15 == 0)
							{
								func_564(iParam0, 6.77f, -1871.65f, 22.66f, 2f, 1, 2.82f, -1852.34f, 23.32f, 0, 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
								func_577(iParam0, 1, 2, 1, 29, 0);
								func_571(iParam0, 1, 0, 1, 1, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								func_126(iParam0, 15, 90, -687903391);
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[8 /*12*/]));
								func_576(iParam0, 4.13f, -1873.69f, 22.2f, 6.66f, -1870.6f, 25.18f, 3f, 0);
								func_569(&Local_1000, 4.13f, -1873.69f, 22.2f, 6.66f, -1870.6f, 25.18f, 3f);
								iParam1->f_15 = 1;
							}
							if (iParam1->f_20 == 0)
							{
								if (func_568(iParam2, Local_1000))
								{
									func_567(iParam0, &(iParam1->f_2));
									func_576(iParam0, 4.42f, -1874.28f, 22.17f, 10.9f, -1866.32f, 25.62f, 5.5f, 0);
									func_569(&Local_1000, 4.42f, -1874.28f, 22.17f, 10.9f, -1866.32f, 25.62f, 5.5f);
									iParam1->f_20 = 1;
								}
							}
							else if (!func_568(iParam2, Local_1000))
							{
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[8 /*12*/]));
								func_576(iParam0, 4.13f, -1873.69f, 22.2f, 6.66f, -1870.6f, 25.18f, 3f, 0);
								func_569(&Local_1000, 4.13f, -1873.69f, 22.2f, 6.66f, -1870.6f, 25.18f, 3f);
								iParam1->f_20 = 0;
							}
							if ((iLocal_4043[19] == 1 && iLocal_4043[31] == 1) && iLocal_4043[11] == 1)
							{
								if (func_561(iParam0, iParam2, iParam1->f_13, 25f, Local_333))
								{
									iParam1->f_17 = 0;
									iParam1->f_15 = 0;
									iParam1->f_23 = 0;
									iParam1->f_20 = 0;
									iParam1->f_12++;
								}
								else
								{
									iParam1->f_17 = 1;
								}
							}
							break;
						
						case 12:
							if (iParam1->f_15 == 0)
							{
								if (!func_559(&(Local_1605[1 /*18*/])))
								{
									func_564(iParam0, -24.73f, -1845.16f, 24.38f, 2f, 1, -20.29f, -1850.1f, 24.1f, Local_1605[1 /*18*/], 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
								}
								else
								{
									func_564(iParam0, -24.73f, -1845.16f, 24.38f, 2f, 1, -1.23f, -1833.2f, 23.97f, Local_1605[1 /*18*/], 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
								}
								func_577(iParam0, 1, 2, 1, 29, 0);
								func_126(iParam0, 15, 100, -687903391);
								func_576(iParam0, -27.29438f, -1848.437f, 24.23226f, -24.7701f, -1845.417f, 27.36881f, 2f, 0);
								func_571(iParam0, 1, 0, 1, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								func_570(iParam0, &(iParam1->f_2), &(Local_3246[26 /*12*/]));
								iParam1->f_15 = 1;
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -44.49314f, -1867.815f, 23.29402f, -17.55952f, -1835.444f, 29.4228f, 22f, 0, 1, 0))
							{
								func_112(iParam1, 8);
							}
							break;
					}
					if (iLocal_4043[11] == 1)
					{
						func_112(iParam1, 7);
					}
					if ((iParam1->f_15 == 1 && iParam1->f_23 == 1) && iParam1->f_24 == 0)
					{
						if (func_549(iParam0, &Local_3246, &Var0, 1, 3.5f, iLocal_922))
						{
							if (Var0.f_10 == 0)
							{
								func_548(iParam0, Var0.f_1, 2f, 1, Local_336, func_124(iParam0, iLocal_399, 0, 0), 1, Var0.f_1, Local_336, 1000, 1120403456, 0, 1, 1056964608, 1056964608, 0);
								func_577(iParam0, 2, 2, 0, 0, 0);
								func_573(iParam0, Var0.f_1, 2f, 0);
								func_570(iParam0, &(iParam1->f_2), &Var0);
								switch (Var0.f_5)
								{
									case 0:
										func_571(iParam0, 1, 0, 1, 1, 1092616192, 1, 1028443341, 1067450368, 1082130432);
										break;
									
									case 1:
										func_571(iParam0, 1, 1, 0, 1, 1092616192, 1, 1028443341, 1067450368, 1082130432);
										break;
									
									default:
										func_571(iParam0, 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
										break;
								}
								iLocal_922 = 0;
								iParam1->f_24 = 1;
							}
							else if (Var0.f_10 == 1)
							{
								func_547(iParam0, Var0.f_1, 2f, 1, Local_336, func_124(iParam0, iLocal_399, 0, 0), 1, 1, 1500, 1120403456, 1056964608, 1056964608, 1, 0, -687903391);
								func_577(iParam0, 0, 2, 0, 13, 0);
								func_573(iParam0, Var0.f_1, 2f, 0);
								func_567(iParam0, &(Local_430.f_2));
								func_571(iParam0, 0, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								iLocal_922 = 1;
								iParam1->f_24 = 1;
								iParam1->f_8 = MISC::GET_GAME_TIMER();
							}
						}
					}
					break;
				
				case 7:
					if (iParam1->f_15 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, -22.67f, -1846.52f, 24.27f, 2f, 60000, 0.25f, 0, 1193033728);
						PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
						func_546(iParam0, 0.8f, 0f);
						func_126(iParam0, 30, 90, -687903391);
						func_576(iParam0, -27.29438f, -1848.437f, 24.23226f, -24.7701f, -1845.417f, 27.36881f, 2f, 0);
						func_567(iParam0, &(iParam1->f_2));
						iParam1->f_15 = 1;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -44.49314f, -1867.815f, 23.29402f, -17.55952f, -1835.444f, 29.4228f, 22f, 0, 1, 0))
					{
						func_112(iParam1, 8);
					}
					TASK::REQUEST_WAYPOINT_RECORDING("fra1_trevor");
					break;
				
				case 8:
					if (iParam1->f_15 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
						func_577(iParam0, 1, 2, 2, 0, 0);
						func_576(iParam0, -27.29438f, -1848.437f, 24.23226f, -24.7701f, -1845.417f, 27.36881f, 2f, 0);
						func_126(iParam0, 30, 100, -687903391);
						func_571(iParam0, 1, 0, 1, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
						func_570(iParam0, &(iParam1->f_2), &(Local_3246[26 /*12*/]));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
						iParam1->f_8 = MISC::GET_GAME_TIMER();
						iParam1->f_16 = 1;
						iParam1->f_15 = 1;
					}
					if (func_545() || Local_401.f_18 == 1)
					{
						func_112(iParam1, 9);
					}
					TASK::REQUEST_WAYPOINT_RECORDING("fra1_trevor");
					break;
				
				case 9:
					if (iParam1->f_15 == 0)
					{
						TASK::REQUEST_WAYPOINT_RECORDING("fra1_trevor");
						if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fra1_trevor"))
						{
							if (iParam1->f_8 != 0)
							{
								if (GlobalFunc_2521(375, iParam1->f_8))
								{
									TASK::CLEAR_PED_TASKS(iParam0);
									PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, 0);
									func_544(func_908(2), 0, 0, 0, 0, 0, 0);
									func_544(func_908(1), 0, 0, 0, 0, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, 0);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, "fra1_trevor", 0, 11, -1);
									iParam1->f_18 = 1;
									iParam1->f_15 = 1;
								}
							}
							else
							{
								iParam1->f_8 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0))
					{
						if (TASK::IS_PED_RUNNING(iParam2) || TASK::IS_PED_SPRINTING(iParam2))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, 3f, 0);
						}
						else
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, 2f, 0);
						}
					}
					else if (TASK::IS_PED_RUNNING(iParam2) || TASK::IS_PED_SPRINTING(iParam2))
					{
						TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0, 3f);
					}
					else
					{
						TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0, 2f);
					}
					if (iParam1->f_13 > 25f && iLocal_927)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_372, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_372, ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1))
						{
							func_112(iParam1, 10);
						}
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Local_1114[0 /*13*/].f_2, 1) < 20f)
					{
						func_112(iParam1, 11);
					}
					break;
				
				case 10:
					if (iParam1->f_15 == 0)
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, 0);
						func_543(iParam0, iParam2, -1, 1026);
						iParam1->f_15 = 1;
					}
					if (iParam1->f_13 < 10f || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_372, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Local_372, ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1))
					{
						TASK::TASK_CLEAR_LOOK_AT(iParam0);
						func_112(iParam1, 9);
					}
					break;
				
				case 11:
					if (iParam1->f_15 == 0)
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						TASK::OPEN_SEQUENCE_TASK(&uVar12);
						if (!PED::IS_PED_INJURED(Local_4208[0 /*29*/]))
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -114.8476f, -1864.955f, 0.4774f, Local_4208[0 /*29*/], 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_4208[0 /*29*/], -1, 1);
						}
						else
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -114.8476f, -1864.955f, 0.4774f, -166.8f, -1842.87f, 0.46f, 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
							TASK::TASK_AIM_GUN_AT_COORD(0, -166.8f, -1842.87f, 0.46f, -1, 1, 0);
						}
						TASK::CLOSE_SEQUENCE_TASK(uVar12);
						TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar12);
						TASK::CLEAR_SEQUENCE_TASK(&uVar12);
						iParam1->f_18 = 1;
						iParam1->f_15 = 1;
					}
					if (iParam1->f_15 == 1)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) == 1)
						{
							if (TASK::GET_SEQUENCE_PROGRESS(iParam0) == 1)
							{
								func_112(iParam1, 12);
							}
						}
						if ((GlobalFunc_1461(iParam2, Local_1114[0 /*13*/], 1) || GlobalFunc_1461(iParam2, Local_1114[1 /*13*/], 1)) || GlobalFunc_1461(iParam2, Local_1114[2 /*13*/], 1))
						{
							func_112(iParam1, 13);
						}
					}
					break;
				
				case 12:
					if (iParam1->f_15 == 0)
					{
						switch (GlobalFunc_8315())
						{
							case 1:
								if (!PED::IS_PED_INJURED(Local_4208[0 /*29*/]))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, Local_4208[0 /*29*/], -1, 1);
								}
								else
								{
									TASK::TASK_AIM_GUN_AT_COORD(iParam0, -159.72f, -1849.1f, 0.46f, -1, 1, 0);
								}
								break;
							
							case 2:
								if (!PED::IS_PED_INJURED(Local_4208[2 /*29*/]))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, Local_4208[2 /*29*/], -1, 1);
								}
								else
								{
									TASK::TASK_AIM_GUN_AT_COORD(iParam0, -166.8f, -1842.87f, 0.46f, -1, 1, 0);
								}
								break;
						}
						iParam1->f_25 = 1;
						iParam1->f_15 = 1;
					}
					if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam2, 1), Local_1114[0 /*13*/].f_2, 1) < 10f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam2, 1), Local_1114[0 /*13*/].f_2, 1) < 10f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam2, 1), Local_1114[0 /*13*/].f_2, 1) < 10f)
					{
						func_112(iParam1, 13);
					}
					if ((GlobalFunc_1461(iParam2, Local_1114[0 /*13*/], 1) || GlobalFunc_1461(iParam2, Local_1114[1 /*13*/], 1)) || GlobalFunc_1461(iParam2, Local_1114[2 /*13*/], 1))
					{
						func_112(iParam1, 13);
					}
					break;
				
				case 13:
					if (iParam1->f_15 == 0)
					{
						if (iParam1->f_28 == 3)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[0 /*13*/], 0))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1114[0 /*13*/], -1))
								{
									if (PED::GET_VEHICLE_PED_IS_USING(iParam2) != Local_1114[0 /*13*/] && PED::GET_VEHICLE_PED_IS_USING(Local_401) != Local_1114[0 /*13*/])
									{
										TASK::TASK_ENTER_VEHICLE(iParam0, Local_1114[0 /*13*/], 20000, -1, 2f, 8, 0);
										iParam1->f_28 = 0;
									}
								}
							}
						}
						if (iParam1->f_28 == 3)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[1 /*13*/], 0))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1114[1 /*13*/], -1))
								{
									if (PED::GET_VEHICLE_PED_IS_USING(iParam2) != Local_1114[1 /*13*/] && PED::GET_VEHICLE_PED_IS_USING(Local_401) != Local_1114[1 /*13*/])
									{
										TASK::TASK_ENTER_VEHICLE(iParam0, Local_1114[1 /*13*/], 20000, -1, 2f, 8, 0);
										iParam1->f_28 = 1;
									}
								}
							}
						}
						if (iParam1->f_28 == 3)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[2 /*13*/], 0))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1114[2 /*13*/], -1))
								{
									if (PED::GET_VEHICLE_PED_IS_USING(iParam2) != Local_1114[2 /*13*/] && PED::GET_VEHICLE_PED_IS_USING(Local_401) != Local_1114[2 /*13*/])
									{
										TASK::TASK_ENTER_VEHICLE(iParam0, Local_1114[2 /*13*/], 20000, -1, 2f, 8, 0);
										iParam1->f_28 = 2;
									}
								}
							}
						}
						if (iLocal_1062 == 0)
						{
							iLocal_1062 = MISC::GET_GAME_TIMER();
						}
						iParam1->f_25 = 1;
						iParam1->f_15 = 1;
					}
					switch (iParam1->f_28)
					{
						case 0:
						case 1:
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[iParam1->f_28 /*13*/], 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(iParam0, Local_1114[iParam1->f_28 /*13*/], 1) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470) != 1)
								{
									if (iLocal_1062 != 0)
									{
										if (GlobalFunc_2521(10000, iLocal_1062))
										{
											TASK::CLEAR_PED_TASKS(iParam0);
											PED::SET_PED_INTO_VEHICLE(iParam0, Local_1114[iParam1->f_28 /*13*/], -1);
										}
									}
								}
								if (!PED::IS_PED_IN_VEHICLE(iParam0, Local_1114[iParam1->f_28 /*13*/], 1))
								{
									if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1114[iParam1->f_28 /*13*/], -1) || Local_1114[iParam1->f_28 /*13*/] == PED::GET_VEHICLE_PED_IS_USING(iParam2)) || Local_1114[iParam1->f_28 /*13*/] == PED::GET_VEHICLE_PED_IS_USING(Local_401))
									{
										TASK::CLEAR_PED_TASKS(iParam0);
										iLocal_1062 = 0;
										iParam1->f_28 = 3;
										func_112(iParam1, 13);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470) != 0 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470) != 1)
									{
										TASK::CLEAR_PED_TASKS(iParam0);
										iParam1->f_28 = 3;
										func_112(iParam1, 13);
									}
								}
								else
								{
									if (PED::IS_PED_IN_VEHICLE(iParam0, Local_1114[iParam1->f_28 /*13*/], 1))
									{
										VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1114[iParam1->f_28 /*13*/], 0);
									}
									if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, PED::GET_VEHICLE_PED_IS_USING(iParam0)))
									{
										func_112(iParam1, 14);
									}
								}
							}
							break;
						
						case 3:
							TASK::CLEAR_PED_TASKS(iParam0);
							func_112(iParam1, 13);
							break;
					}
					break;
				
				case 14:
					if (iParam1->f_15 == 0)
					{
						iParam1->f_15 = 1;
					}
					if (!PED::IS_PED_IN_VEHICLE(iParam0, Local_1114[iParam1->f_28 /*13*/], 0))
					{
						iParam1->f_28 = 3;
						func_112(iParam1, 13);
					}
					break;
				
				case 24:
					if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
					{
						if ((!GlobalFunc_1461(iParam0, Local_1114[0 /*13*/], 1) && !GlobalFunc_1461(iParam0, Local_1114[1 /*13*/], 1)) && !GlobalFunc_1461(iParam0, Local_1114[2 /*13*/], 1))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
						}
					}
					if (iParam1->f_18 == 1)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
						{
							iParam1->f_28 = 3;
							if (iParam1->f_25 == 1)
							{
								func_112(iParam1, 13);
							}
							else
							{
								func_112(iParam1, 9);
							}
						}
					}
					else if (iParam1->f_16 == 1)
					{
						func_112(iParam1, 8);
					}
					else if (iLocal_4043[1] == 1)
					{
						func_112(iParam1, 7);
					}
					else if (iLocal_4043[1] == 0)
					{
						func_112(iParam1, 5);
						iParam1->f_15 = 1;
						iParam1->f_24 = 0;
						iParam1->f_23 = 1;
					}
					break;
				}
			}
	}
}

void func_543(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x63AB8
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam1, 0);
		TASK::TASK_LOOK_AT_ENTITY(0, iParam1, iParam2, iParam3, 2);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

void func_544(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x63B04
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		ENTITY::SET_ENTITY_PROOFS(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 118, bParam6);
	}
}

int func_545()//Position - 0x63B33
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_976, Local_976.f_3, Local_976.f_6, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_546(int iParam0, float fParam1, float fParam2)//Position - 0x63B6A
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_COMBAT_FLOAT(iParam0, 5, fParam1);
		PED::SET_COMBAT_FLOAT(iParam0, 8, fParam2);
	}
}

void func_547(int iParam0, struct<3> Param1, float fParam4, int iParam5, struct<3> Param6, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)//Position - 0x63B8F
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		if (iParam5 == 1)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, Param6, fParam4, iParam10, iParam14, iParam15, iParam16, iParam17, 0, -957453492);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, ENTITY::GET_ENTITY_COORDS(iParam9, 1), fParam4, iParam10, iParam14, iParam15, iParam16, iParam17, 0, -957453492);
			}
		}
		else if (iParam5 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param1, Param6, fParam4, iParam10, iParam14, iParam15, iParam16, 0, 0, -957453492);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, iParam9, fParam4, iParam10, iParam14, iParam15, iParam16, 0, 0, -957453492, 20000);
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam9))
		{
			if (iParam11 == 1)
			{
				TASK::TASK_SHOOT_AT_COORD(0, Param6, iParam12, iParam18);
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_COORD(0, Param6, iParam12, 0, 0);
			}
		}
		else if (iParam11 == 1)
		{
			TASK::TASK_SHOOT_AT_ENTITY(0, iParam9, iParam12, iParam18);
		}
		else
		{
			TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam9, iParam12, 0);
		}
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam13, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

void func_548(int iParam0, struct<3> Param1, float fParam4, int iParam5, struct<3> Param6, int iParam9, int iParam10, struct<3> Param11, struct<3> Param14, int iParam17, float fParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)//Position - 0x63CC1
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		if (iParam5 == 1)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, Param6, fParam4, iParam10, iParam21, iParam22, iParam20, iParam23, 0, -957453492);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, ENTITY::GET_ENTITY_COORDS(iParam9, 1), fParam4, iParam10, iParam21, iParam22, iParam20, iParam23, 0, -957453492);
			}
		}
		else if (iParam5 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param1, Param6, fParam4, iParam10, iParam21, iParam22, iParam20, 0, 0, -957453492);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, iParam9, fParam4, iParam10, iParam21, iParam22, iParam20, 0, 0, -957453492, 20000);
			}
		}
		TASK::TASK_SEEK_COVER_TO_COORDS(0, Param11, Param14, iParam17, iParam19);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam18, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

int func_549(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4, int iParam5)//Position - 0x63DB1
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = 0;
	fVar1 = 1000f;
	fVar2 = 0f;
	iVar3 = -1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam1 - 1))
		{
			if ((uParam1[iVar0 /*12*/])->f_9 == 1)
			{
				if (!PED::GET_CLOSEST_PED((uParam1[iVar0 /*12*/])->f_1, fParam4, 0, 1, &uVar4, 0, 0, -1))
				{
					if (iParam5 == 0)
					{
						fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), (uParam1[iVar0 /*12*/])->f_1, 1);
						if (fVar2 < fVar1)
						{
							if (iParam3 == 1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), (uParam1[iVar0 /*12*/])->f_1, 1) > fParam4)
								{
									fVar1 = fVar2;
									iVar3 = iVar0;
								}
							}
							else if (iParam3 == 0)
							{
								fVar1 = fVar2;
								iVar3 = iVar0;
							}
						}
					}
					else if (iParam5 == 1)
					{
						if ((uParam1[iVar0 /*12*/])->f_10 == 0)
						{
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), (uParam1[iVar0 /*12*/])->f_1, 1);
							if (fVar2 < fVar1)
							{
								if (iParam3 == 1)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), (uParam1[iVar0 /*12*/])->f_1, 1) > fParam4)
									{
										fVar1 = fVar2;
										iVar3 = iVar0;
									}
								}
								else if (iParam3 == 0)
								{
									fVar1 = fVar2;
									iVar3 = iVar0;
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (iVar3 == -1)
	{
		return 0;
	}
	*uParam2 = { *(uParam1[iVar3 /*12*/]) };
	return 1;
}

int func_550()//Position - 0x63EFE
{
	if (func_555(Local_962) || (((func_554() + func_557()) + func_552()) + func_551()) <= 2)
	{
		return 1;
	}
	return 0;
}

int func_551()//Position - 0x63F32
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= (Local_3027 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3027[iVar1 /*36*/].f_4))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_3027[iVar1 /*36*/].f_4))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Local_3100 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3100[iVar1 /*36*/].f_4))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_3100[iVar1 /*36*/].f_4))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_552()//Position - 0x63FB9
{
	return func_553(&Local_1865);
}

int func_553(var uParam0)//Position - 0x63FC8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if ((uParam0[iVar0 /*18*/])->f_11 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*18*/]))
			{
				if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*18*/]))
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_554()//Position - 0x6401C
{
	return (func_553(&Local_1439) + func_553(&Local_1458));
}

int func_555(struct<7> Param0)//Position - 0x64033
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param0, Param0.f_3, Param0.f_6, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_556()//Position - 0x64073
{
	if ((iLocal_4043[17] == 1 && iLocal_4043[18] == 1) || func_555(Local_969))
	{
		return 1;
	}
	return 0;
}

int func_557()//Position - 0x640A9
{
	return (func_553(&Local_1495) + func_553(&Local_1568));
}

int func_558(struct<7> Param0)//Position - 0x640C0
{
	if (ENTITY::DOES_ENTITY_EXIST(func_908(1)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_908(1)))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_908(1), Param0, Param0.f_3, Param0.f_6, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_908(2)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_908(2)))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_908(2), Param0, Param0.f_3, Param0.f_6, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_401))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_401))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_401, Param0, Param0.f_3, Param0.f_6, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_559(var uParam0)//Position - 0x64171
{
	if (uParam0->f_11 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (PED::IS_PED_INJURED(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
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
			return 1;
		}
	}
	return 0;
}


int func_561(int iParam0, int iParam1, float fParam2, float fParam3, struct<3> Param4)//Position - 0x641CD
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (fParam2 < fParam3)
			{
				return 1;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), Param4, 1) >= MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_562()//Position - 0x64237
{
	if (iLocal_4043[4] == 1 && ((func_563() + func_553(&Local_1347)) + func_553(&Local_1402)) < 2)
	{
		return 1;
	}
	return 0;
}

int func_563()//Position - 0x6426A
{
	return (((func_553(&Local_1273) + func_553(&Local_1714)) + func_553(&Local_1733)) + func_553(&Local_1328));
}

void func_564(int iParam0, struct<3> Param1, float fParam4, int iParam5, struct<3> Param6, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, float fParam19, int iParam20)//Position - 0x64291
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		if (iParam5 == 1)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, Param6, fParam4, iParam10, iParam16, iParam17, iParam18, iParam20, 0, iParam14);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, ENTITY::GET_ENTITY_COORDS(iParam9, 1), fParam4, iParam10, iParam16, iParam17, iParam18, iParam20, 0, iParam14);
			}
		}
		else if (iParam5 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param1, Param6, fParam4, iParam10, iParam16, iParam17, iParam18, iParam20, 0, iParam14);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, iParam9, fParam4, iParam10, iParam16, iParam17, iParam18, iParam20, 0, iParam14, 20000);
			}
		}
		if (iParam11 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				if (iParam12 == 1)
				{
					TASK::TASK_SHOOT_AT_COORD(0, Param6, iParam13, iParam14);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_COORD(0, Param6, iParam13, 0, 0);
				}
			}
			else if (iParam12 == 1)
			{
				TASK::TASK_SHOOT_AT_ENTITY(0, iParam9, iParam13, iParam14);
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam9, iParam13, 0);
			}
		}
		if (iParam15 == 1)
		{
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
		}
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam19, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

int func_565()//Position - 0x643C5
{
	if (func_558(Local_941) || (func_563() < 1 && func_566() < 2))
	{
		return 1;
	}
	return 0;
}

int func_566()//Position - 0x643F5
{
	return ((((func_553(&Local_1347) + func_553(&Local_1402)) + func_553(&Local_1752)) + func_553(&Local_1771)) + func_553(&Local_1790));
}

void func_567(int iParam0, var uParam1)//Position - 0x64424
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::REMOVE_PED_PREFERRED_COVER_SET(iParam0);
		if (ITEMSET::IS_ITEMSET_VALID(*uParam1))
		{
			ITEMSET::DESTROY_ITEMSET(*uParam1);
		}
	}
}

int func_568(int iParam0, struct<7> Param1, var uParam8)//Position - 0x6444D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (Param1.f_7 == 1)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1, 1) < Param1.f_6)
				{
					return 1;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param1, Param1.f_3, Param1.f_6, 0, 1, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_569(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x644AE
{
	*uParam0 = { Param1 };
	uParam0->f_3 = { Param4 };
	uParam0->f_6 = fParam7;
	uParam0->f_7 = 0;
}

void func_570(int iParam0, var uParam1, var uParam2)//Position - 0x644D3
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ITEMSET::IS_ITEMSET_VALID(*uParam1))
		{
			ITEMSET::DESTROY_ITEMSET(*uParam1);
		}
		if (!ITEMSET::IS_ITEMSET_VALID(*uParam1))
		{
			*uParam1 = ITEMSET::CREATE_ITEMSET(1);
		}
		ITEMSET::ADD_TO_ITEMSET(*uParam2, *uParam1);
		PED::SET_PED_PREFERRED_COVER_SET(iParam0, *uParam1);
	}
}

void func_571(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, float fParam7, float fParam8, float fParam9)//Position - 0x6451D
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, iParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 129, iParam2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, iParam3);
		PED::SET_PED_CONFIG_FLAG(iParam0, 131, iParam4);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 12, iParam6);
		if (fParam5 >= 0f)
		{
			PED::SET_COMBAT_FLOAT(iParam0, 4, fParam5);
		}
		if (fParam8 >= 0f)
		{
			PED::SET_COMBAT_FLOAT(iParam0, 3, fParam8);
		}
		if (fParam9 >= 0f)
		{
			PED::SET_COMBAT_FLOAT(iParam0, 1, fParam9);
		}
		if (fParam7 >= 0f)
		{
			PED::SET_COMBAT_FLOAT(iParam0, 0, fParam7);
		}
	}
}

int func_572()//Position - 0x645A0
{
	if (func_555(Local_934) || func_563() < 3)
	{
		return 1;
	}
	return 0;
}

void func_573(int iParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x645C5
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, Param1, fParam4, iParam5, 0);
	}
}

int func_574()//Position - 0x645E6
{
	if (func_575(Local_2086[0 /*13*/]) > 70f || func_563() < 2)
	{
		return 1;
	}
	return 0;
}

float func_575(int iParam0)//Position - 0x64612
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			return (100f * (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0) / VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0)));
		}
	}
	return -1f;
}

void func_576(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8)//Position - 0x64657
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam0, Param1, Param4, fParam7, iParam8, 0);
	}
}

void func_577(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6467C
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, iParam1);
		PED::SET_PED_COMBAT_ABILITY(iParam0, iParam2);
		PED::SET_PED_COMBAT_RANGE(iParam0, iParam3);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, 0);
		if (iParam4 != -1)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, iParam4, 1);
		}
		PED::SET_PED_CAN_RAGDOLL(iParam0, iParam5);
		if (iParam5 == 0)
		{
			PED::SET_PED_CAN_RAGDOLL(iParam0, 1);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8192);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
		}
	}
}

void func_578(int iParam0, int iParam1, int iParam2)//Position - 0x6470A
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iParam1) < 2)
		{
			WEAPON::ADD_AMMO_TO_PED(iParam0, iParam1, (WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iParam1, 1) * iParam2));
		}
	}
}

void func_579(int iParam0, int iParam1)//Position - 0x6473C
{
	var uVar0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !PED::IS_PED_INJURED(iParam1))
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 398, 1);
			PED::SET_PED_RESET_FLAG(*iParam0, 64, 1);
			PED::SET_PED_RESET_FLAG(*iParam0, 227, 1);
			iParam0->f_13 = GlobalFunc_4951(*iParam0, iParam1);
			iParam0->f_14 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, 1), Local_333, 1);
			switch (iParam0->f_26)
			{
				case 5:
					switch (iParam0->f_12)
					{
						case 0:
							if (!HUD::DOES_BLIP_EXIST(iParam0->f_1))
							{
								iParam0->f_1 = GlobalFunc_7056(*iParam0, 0, 0);
							}
							if (iParam0->f_15 == 0)
							{
								ENTITY::SET_ENTITY_HEALTH(*iParam0, 600);
								PED::SET_PED_MAX_HEALTH(*iParam0, 600);
								PED::SET_PED_SUFFERS_CRITICAL_HITS(*iParam0, 0);
								func_544(*iParam0, 0, 1, 1, 0, 0, 0);
								WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_assaultrifle"), -1, 1, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 35, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 36, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
								iParam0->f_15 = 1;
							}
							if (iLocal_4043[0] == 1)
							{
								iParam0->f_8 = MISC::GET_GAME_TIMER();
								iParam0->f_15 = 0;
								iParam0->f_12++;
							}
							break;
						
						case 1:
							if (iParam0->f_15 == 0)
							{
								if (GlobalFunc_2521(1250, iParam0->f_8))
								{
									TASK::CLEAR_SEQUENCE_TASK(&uVar0);
									TASK::OPEN_SEQUENCE_TASK(&uVar0);
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
									if (!PED::IS_PED_IN_COVER(*iParam0, 0))
									{
										TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_3246[1 /*12*/].f_1, 1750, 0, 0f, 1, 0, 0, 0);
									}
									if (!PED::IS_PED_INJURED(Local_1273[0 /*18*/]))
									{
										TASK::TASK_COMBAT_PED(0, Local_1273[0 /*18*/], 0, 16);
									}
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 150f, 0);
									TASK::CLOSE_SEQUENCE_TASK(uVar0);
									TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar0);
									TASK::CLEAR_SEQUENCE_TASK(&uVar0);
									func_577(*iParam0, 1, 2, 1, 0, 0);
									func_576(*iParam0, 83.98221f, -1948.703f, 19.78477f, 84.98069f, -1947.492f, 21.76872f, 1.5f, 0);
									func_571(*iParam0, 1, 0, 1, 1, 1092616192, 1, 1028443341, 1067450368, 1082130432);
									func_570(*iParam0, &(iParam0->f_2), &(Local_3246[1 /*12*/]));
									func_126(*iParam0, 15, 90, -957453492);
									iParam0->f_15 = 1;
								}
							}
							if (func_574())
							{
								iParam0->f_8 = MISC::GET_GAME_TIMER();
								iParam0->f_15 = 0;
								iParam0->f_12++;
							}
							break;
						
						case 2:
							if (iParam0->f_15 == 0)
							{
								if (GlobalFunc_2521(300, iParam0->f_8))
								{
									func_577(*iParam0, 1, 2, 1, 29, 0);
									func_573(*iParam0, Local_4003[0 /*3*/], 0.76f, 1);
									func_546(*iParam0, 1f, 0f);
									func_126(*iParam0, 15, 90, -957453492);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 100f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
									iParam0->f_15 = 1;
								}
							}
							if (func_572())
							{
								iParam0->f_15 = 0;
								iParam0->f_12++;
							}
							break;
						
						case 3:
							if (iParam0->f_15 == 0)
							{
								func_577(*iParam0, 1, 2, 1, 29, 0);
								func_573(*iParam0, Local_4003[1 /*3*/], 5f, 1);
								func_571(*iParam0, 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								func_546(*iParam0, 1f, 0f);
								func_126(*iParam0, 15, 90, -957453492);
								iParam0->f_15 = 1;
							}
							if (func_565())
							{
								iParam0->f_15 = 0;
								iParam0->f_12++;
							}
							break;
						
						case 4:
							if (iParam0->f_15 == 0)
							{
								func_577(*iParam0, 1, 2, 1, 29, 0);
								func_546(*iParam0, 1f, 0f);
								func_576(*iParam0, 85.60014f, -1910.209f, 19.93068f, 86.44324f, -1909.208f, 22.01096f, 1.25f, 1);
								func_569(&Local_992, 85.60014f, -1910.209f, 19.93068f, 86.44324f, -1909.208f, 22.01096f, 1.25f);
								func_571(*iParam0, 1, 1, 0, 1, 16f, 0, 0f, 3f, 8f);
								func_570(*iParam0, &(iParam0->f_2), &(Local_3246[35 /*12*/]));
								func_126(*iParam0, 15, 90, -957453492);
								iParam0->f_20 = 0;
								iParam0->f_19 = 0;
								iParam0->f_21 = 0;
								iParam0->f_15 = 1;
							}
							if (iParam0->f_21 == 0)
							{
								if (func_568(*iParam0, Local_992))
								{
									iParam0->f_21 = 1;
								}
							}
							if (iParam0->f_20 == 0)
							{
								if (func_568(iParam1, Local_992))
								{
									if (iParam0->f_21 == 0)
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 100f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
									}
									func_576(*iParam0, 87.08958f, -1909.869f, 19.59892f, 83.72433f, -1913.982f, 22.99386f, 4f, 0);
									func_569(&Local_992, 87.08958f, -1909.869f, 19.59892f, 83.72433f, -1913.982f, 22.99386f, 4f);
									func_567(*iParam0, &(iParam0->f_2));
									iParam0->f_20 = 1;
								}
							}
							else if (!func_568(iParam1, Local_992))
							{
								func_576(*iParam0, 85.60014f, -1910.209f, 19.93068f, 86.44324f, -1909.208f, 22.01096f, 1.25f, 1);
								func_569(&Local_992, 85.60014f, -1910.209f, 19.93068f, 86.44324f, -1909.208f, 22.01096f, 1.25f);
								func_570(*iParam0, &(iParam0->f_2), &(Local_3246[35 /*12*/]));
								iParam0->f_20 = 0;
							}
							if (func_582())
							{
								if (func_561(*iParam0, iParam1, iParam0->f_13, 25f, Local_333))
								{
									iParam0->f_17 = 0;
									iParam0->f_20 = 0;
									iParam0->f_15 = 0;
									iParam0->f_12++;
								}
								else
								{
									iParam0->f_17 = 1;
								}
							}
							break;
						
						case 5:
							if (iParam0->f_15 == 0)
							{
								func_577(*iParam0, 1, 2, 1, 29, 0);
								func_546(*iParam0, 1f, 0f);
								func_576(*iParam0, 77.5643f, -1895.342f, 20.49718f, 74.56469f, -1898.972f, 23.12057f, 2.5f, 0);
								func_569(&Local_992, 77.5643f, -1895.342f, 20.49718f, 74.56469f, -1898.972f, 23.12057f, 2.5f);
								func_571(*iParam0, 1, 1, 0, 1, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								func_570(*iParam0, &(iParam0->f_2), &(Local_3246[58 /*12*/]));
								func_126(*iParam0, 15, 90, -957453492);
								iParam0->f_15 = 1;
							}
							if (iParam0->f_20 == 0)
							{
								if (func_568(iParam1, Local_992))
								{
									func_573(*iParam0, 73.83f, -1897.55f, 20.67f, 4f, 0);
									func_581(&Local_992, 73.83f, -1897.55f, 20.67f, 4f);
									iParam0->f_20 = 1;
								}
							}
							else if (!func_568(iParam1, Local_992))
							{
								func_576(*iParam0, 77.5643f, -1895.342f, 20.49718f, 74.56469f, -1898.972f, 23.12057f, 2.5f, 0);
								func_569(&Local_992, 77.5643f, -1895.342f, 20.49718f, 74.56469f, -1898.972f, 23.12057f, 2.5f);
								iParam0->f_20 = 0;
							}
							if (func_559(&(Local_1921[0 /*18*/])))
							{
								if (func_580())
								{
									if (func_561(*iParam0, iParam1, iParam0->f_13, 40f, Local_333))
									{
										iParam0->f_17 = 0;
										iParam0->f_15 = 0;
										iParam0->f_20 = 0;
										iParam0->f_12++;
									}
									else
									{
										iParam0->f_17 = 1;
									}
								}
							}
							break;
						
						case 6:
							if (iParam0->f_15 == 0)
							{
								func_577(*iParam0, 1, 2, 1, 0, 0);
								func_126(*iParam0, 15, 90, -957453492);
								func_571(*iParam0, 1, 1, 0, 0, 6f, 0, 0f, 3f, 1082130432);
								func_570(*iParam0, &(iParam0->f_2), &(Local_3246[32 /*12*/]));
								func_576(*iParam0, 60.64919f, -1886.117f, 20.63106f, 59.81563f, -1887.141f, 23.16298f, 1.5f, 1);
								func_569(&Local_992, 60.64919f, -1886.117f, 20.63106f, 59.81563f, -1887.141f, 23.16298f, 1.5f);
								iParam0->f_20 = 0;
								iParam0->f_21 = 0;
								iParam0->f_15 = 1;
							}
							if (iParam0->f_21 == 0)
							{
								if (func_568(*iParam0, Local_992))
								{
									iParam0->f_21 = 1;
								}
							}
							if (iParam0->f_20 == 0)
							{
								if (func_568(iParam1, Local_992))
								{
									if (iParam0->f_21 == 0)
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 100f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
									}
									func_576(*iParam0, 61.65874f, -1886.881f, 20.17187f, 56.86921f, -1892.698f, 23.47662f, 5f, 0);
									func_569(&Local_992, 61.65874f, -1886.881f, 20.17187f, 56.86921f, -1892.698f, 23.47662f, 5f);
									func_567(*iParam0, &(iParam0->f_2));
									func_571(*iParam0, 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
									iParam0->f_20 = 1;
								}
							}
							else if (!func_568(iParam1, Local_992))
							{
								func_576(*iParam0, 60.64919f, -1886.117f, 20.63106f, 59.81563f, -1887.141f, 23.16298f, 1.5f, 0);
								func_569(&Local_992, 60.64919f, -1886.117f, 20.63106f, 59.81563f, -1887.141f, 23.16298f, 1.5f);
								func_570(*iParam0, &(iParam0->f_2), &(Local_3246[32 /*12*/]));
								iParam0->f_20 = 0;
							}
							if (func_556())
							{
								if (func_561(*iParam0, iParam1, iParam0->f_13, 25f, Local_333))
								{
									iParam0->f_17 = 0;
									iParam0->f_15 = 0;
									iParam0->f_12++;
								}
								else
								{
									iParam0->f_17 = 1;
								}
							}
							break;
						
						case 7:
							if (iParam0->f_15 == 0)
							{
								func_577(*iParam0, 1, 2, 1, 0, 0);
								func_126(*iParam0, 15, 90, -957453492);
								func_576(*iParam0, 46.91401f, -1874.783f, 20.90236f, 45.90667f, -1875.92f, 24.36218f, 1.5f, 0);
								func_569(&Local_992, 46.91401f, -1874.783f, 20.90236f, 45.90667f, -1875.92f, 24.36218f, 1.5f);
								func_571(*iParam0, 1, 1, 0, 0, 6f, 0, 0f, 3f, 1082130432);
								func_570(*iParam0, &(iParam0->f_2), &(Local_3246[28 /*12*/]));
								iParam0->f_20 = 0;
								iParam0->f_21 = 0;
								iParam0->f_15 = 1;
							}
							if (iParam0->f_21 == 0)
							{
								if (func_568(*iParam0, Local_992))
								{
									iParam0->f_21 = 1;
								}
							}
							if (iParam0->f_20 == 0)
							{
								if (func_568(iParam1, Local_992))
								{
									if (iParam0->f_21 == 0)
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 100f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
									}
									func_576(*iParam0, 48.22884f, -1875.825f, 20.86456f, 43.26864f, -1881.522f, 24.1143f, 5f, 0);
									func_569(&Local_992, 48.22884f, -1875.825f, 20.86456f, 43.26864f, -1881.522f, 24.1143f, 5f);
									func_567(*iParam0, &(iParam0->f_2));
									func_571(*iParam0, 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
									iParam0->f_20 = 1;
								}
							}
							else if (!func_568(iParam1, Local_992))
							{
								func_576(*iParam0, 46.91401f, -1874.783f, 20.90236f, 45.90667f, -1875.92f, 24.36218f, 1.5f, 0);
								func_569(&Local_992, 46.91401f, -1874.783f, 20.90236f, 45.90667f, -1875.92f, 24.36218f, 1.5f);
								func_570(*iParam0, &(iParam0->f_2), &(Local_3246[28 /*12*/]));
								iParam0->f_20 = 0;
							}
							if (func_550())
							{
								if (func_561(*iParam0, iParam1, iParam0->f_13, 25f, Local_333))
								{
									iParam0->f_17 = 0;
									iParam0->f_15 = 0;
									iParam0->f_12++;
								}
								else
								{
									iParam0->f_17 = 1;
								}
							}
							break;
						
						case 8:
							if (iParam0->f_15 == 0)
							{
								func_577(*iParam0, 1, 2, 1, 0, 0);
								func_126(*iParam0, 15, 90, -957453492);
								func_576(*iParam0, 31.006f, -1861.029f, 21.63692f, 29.67543f, -1862.521f, 25.21955f, 1.5f, 0);
								func_569(&Local_992, 31.006f, -1861.029f, 21.63692f, 29.67543f, -1862.521f, 25.21955f, 1.5f);
								func_571(*iParam0, 1, 1, 0, 0, 6f, 0, 0f, 3f, 1082130432);
								func_570(*iParam0, &(iParam0->f_2), &(Local_3246[30 /*12*/]));
								iParam0->f_20 = 0;
								iParam0->f_19 = 0;
								iParam0->f_21 = 0;
								iParam0->f_15 = 1;
							}
							if (iParam0->f_21 == 0)
							{
								if (func_568(*iParam0, Local_992))
								{
									iParam0->f_21 = 1;
								}
							}
							if (iParam0->f_20 == 0)
							{
								if (func_568(iParam1, Local_992))
								{
									if (iParam0->f_21 == 0)
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 100f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
									}
									func_576(*iParam0, 32.00068f, -1861.709f, 21.59194f, 27.47365f, -1866.847f, 25.14804f, 4f, 0);
									func_569(&Local_992, 32.00068f, -1861.709f, 21.59194f, 27.47365f, -1866.847f, 25.14804f, 4f);
									func_567(*iParam0, &(Local_401.f_2));
									func_571(*iParam0, 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
									iParam0->f_20 = 1;
								}
							}
							else if (!func_568(iParam1, Local_992))
							{
								func_576(*iParam0, 31.006f, -1861.029f, 21.63692f, 29.67543f, -1862.521f, 25.21955f, 1.5f, 0);
								func_569(&Local_992, 31.006f, -1861.029f, 21.63692f, 29.67543f, -1862.521f, 25.21955f, 1.5f);
								func_570(*iParam0, &(iParam0->f_2), &(Local_3246[30 /*12*/]));
								iParam0->f_20 = 0;
							}
							if (iLocal_4043[20] == 1)
							{
								if (func_561(*iParam0, iParam1, iParam0->f_13, 25f, Local_333))
								{
									iParam0->f_17 = 0;
									iParam0->f_19 = 0;
									iParam0->f_15 = 0;
									iParam0->f_12++;
								}
								else
								{
									iParam0->f_17 = 1;
								}
							}
							else if (iParam0->f_19 == 0)
							{
								if (!func_559(&(Local_1568[1 /*18*/])))
								{
									if (iParam0->f_21 == 1)
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_908(1), 1), Local_339, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, 1), Local_339, 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_908(2), 1), Local_339, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, 1), Local_339, 1))
										{
											func_573(*iParam0, 23.08f, -1857.19f, 22.56f, 1.25f, 1);
											iParam0->f_19 = 1;
										}
									}
								}
							}
							break;
						
						case 9:
							if (iParam0->f_15 == 0)
							{
								func_577(*iParam0, 1, 2, 1, 0, 0);
								func_126(*iParam0, 15, 90, -957453492);
								func_576(*iParam0, 21.37387f, -1852.911f, 22.2345f, 19.74262f, -1854.827f, 25.72867f, 2f, 0);
								func_569(&Local_992, 21.37387f, -1852.911f, 22.2345f, 19.74262f, -1854.827f, 25.72867f, 2f);
								func_571(*iParam0, 1, 1, 0, 0, 6f, 0, 0f, 3f, 1082130432);
								func_570(*iParam0, &(iParam0->f_2), &(Local_3246[34 /*12*/]));
								iParam0->f_20 = 0;
								iParam0->f_21 = 0;
								iParam0->f_15 = 1;
							}
							if (iParam0->f_21 == 0)
							{
								if (func_568(*iParam0, Local_992))
								{
									iParam0->f_21 = 1;
								}
							}
							if (iParam0->f_20 == 0)
							{
								if (func_568(iParam1, Local_992))
								{
									if (iParam0->f_21 == 0)
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 100f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
									}
									func_576(*iParam0, 22.46478f, -1853.238f, 22.33171f, 17.88158f, -1858.349f, 25.68258f, 4f, 0);
									func_569(&Local_992, 22.46478f, -1853.238f, 22.33171f, 17.88158f, -1858.349f, 25.68258f, 4f);
									func_567(*iParam0, &(iParam0->f_2));
									func_571(*iParam0, 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
									iParam0->f_20 = 1;
								}
							}
							else if (!func_568(iParam1, Local_992))
							{
								func_576(*iParam0, 21.37387f, -1852.911f, 22.2345f, 19.74262f, -1854.827f, 25.72867f, 2f, 0);
								func_569(&Local_992, 21.37387f, -1852.911f, 22.2345f, 19.74262f, -1854.827f, 25.72867f, 2f);
								func_570(*iParam0, &(iParam0->f_2), &(Local_3246[34 /*12*/]));
								iParam0->f_20 = 0;
							}
							if ((func_553(&Local_1495) <= 1 && iLocal_4043[20] == 1) && iLocal_4043[31] == 1)
							{
								if (func_561(*iParam0, iParam1, iParam0->f_13, 25f, Local_333))
								{
									iParam0->f_17 = 0;
									iParam0->f_15 = 0;
									iParam0->f_12++;
								}
								else
								{
									iParam0->f_17 = 1;
								}
							}
							break;
						
						case 10:
							if (iParam0->f_15 == 0)
							{
								func_577(*iParam0, 1, 2, 1, 0, 0);
								func_126(*iParam0, 15, 90, -957453492);
								func_576(*iParam0, 11.22638f, -1842.662f, 23.02982f, 7.591852f, -1846.963f, 25.803f, 4f, 0);
								func_569(&Local_992, 11.22638f, -1842.662f, 23.02982f, 7.591852f, -1846.963f, 25.803f, 4f);
								func_571(*iParam0, 1, 1, 0, 0, 6f, 0, 0f, 3f, 1082130432);
								func_570(*iParam0, &(iParam0->f_2), &(Local_3246[59 /*12*/]));
								iParam0->f_15 = 1;
							}
							if (iLocal_4043[11] == 1)
							{
								func_112(iParam0, 7);
							}
							break;
					}
					if (iLocal_4043[11] == 1)
					{
						func_112(iParam0, 7);
					}
					break;
				
				case 7:
					if (iParam0->f_15 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, -22.67f, -1846.52f, 24.27f, 2f, 60000, (0.25f * 2f), 1, 1193033728);
						func_577(*iParam0, 1, 2, 1, 29, 0);
						func_126(*iParam0, 30, 90, -957453492);
						func_576(*iParam0, -25.1684f, -1849.833f, 24.08134f, -23.60315f, -1848.054f, 27.27044f, 2f, 0);
						func_571(*iParam0, 0, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
						func_567(*iParam0, &(iParam0->f_2));
						iParam0->f_15 = 1;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_401, -43.31406f, -1866.163f, 23.55618f, -24.12021f, -1844.029f, 29.36214f, 8f, 0, 1, 0))
					{
						func_112(iParam0, 8);
					}
					break;
				
				case 8:
					if (iParam0->f_15 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 100f, 0);
						func_577(*iParam0, 1, 2, 1, 29, 0);
						func_576(*iParam0, -25.1684f, -1849.833f, 24.08134f, -23.60315f, -1848.054f, 27.27044f, 2f, 0);
						func_126(*iParam0, 30, 100, -957453492);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
						iParam0->f_16 = 1;
						iParam0->f_8 = MISC::GET_GAME_TIMER();
						iParam0->f_15 = 1;
					}
					if (func_545())
					{
						func_112(iParam0, 9);
					}
					TASK::REQUEST_WAYPOINT_RECORDING("fra1_lamar");
					break;
				
				case 9:
					if (iParam0->f_15 == 0)
					{
						TASK::REQUEST_WAYPOINT_RECORDING("fra1_lamar");
						if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fra1_lamar"))
						{
							PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
							func_544(*iParam0, 0, 0, 0, 0, 0, 0);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam0, "fra1_lamar", 0, 9, -1);
							iParam0->f_9 = MISC::GET_GAME_TIMER();
							iParam0->f_16 = 0;
							iParam0->f_18 = 1;
							iParam0->f_15 = 1;
						}
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam0))
					{
						if (TASK::IS_PED_RUNNING(iParam1) || TASK::IS_PED_SPRINTING(iParam1))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam0, 3f, 0);
						}
						else
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam0, 2f, 0);
						}
					}
					else if (TASK::IS_PED_RUNNING(iParam1) || TASK::IS_PED_SPRINTING(iParam1))
					{
						TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam0, 3f);
					}
					else
					{
						TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam0, 2f);
					}
					if (iParam0->f_13 > 25f && iLocal_927)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_372, ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_372, ENTITY::GET_ENTITY_COORDS(*iParam0, 1), 1))
						{
							func_112(iParam0, 10);
						}
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, 1), Local_1114[1 /*13*/].f_2, 1) < 20f)
					{
						func_112(iParam0, 11);
					}
					break;
				
				case 10:
					if (iParam0->f_15 == 0)
					{
						TASK::CLEAR_PED_TASKS(*iParam0);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, 0);
						func_543(*iParam0, iParam1, -1, 1026);
						iParam0->f_8 = MISC::GET_GAME_TIMER();
						iParam0->f_16 = 1;
						iParam0->f_15 = 1;
					}
					if (iParam0->f_13 < 10f || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_372, ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Local_372, ENTITY::GET_ENTITY_COORDS(*iParam0, 1), 1))
					{
						TASK::TASK_CLEAR_LOOK_AT(*iParam0);
						func_112(iParam0, 9);
					}
					else if (GlobalFunc_2521(1000, iParam0->f_8))
					{
						func_112(iParam0, 10);
					}
					break;
				
				case 11:
					if (iParam0->f_15 == 0)
					{
						TASK::CLEAR_PED_TASKS(*iParam0);
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						if (!PED::IS_PED_INJURED(Local_4208[1 /*29*/]))
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -116.9544f, -1861.35f, 0.979f, Local_4208[1 /*29*/], 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_4208[1 /*29*/], -1, 1);
						}
						else
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -116.9544f, -1861.35f, 0.979f, -164.11f, -1847.47f, 0.46f, 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
							TASK::TASK_AIM_GUN_AT_COORD(0, -164.11f, -1847.47f, 0.46f, -1, 1, 0);
						}
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						iParam0->f_18 = 1;
						iParam0->f_15 = 1;
					}
					if (iParam0->f_15 == 1)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503) == 1)
						{
							if (TASK::GET_SEQUENCE_PROGRESS(*iParam0) == 1)
							{
								func_112(iParam0, 12);
							}
						}
					}
					break;
				
				case 12:
					if (iParam0->f_15 == 0)
					{
						if (!PED::IS_PED_INJURED(Local_4208[1 /*29*/]))
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(*iParam0, Local_4208[1 /*29*/], -1, 1);
						}
						else
						{
							TASK::TASK_AIM_GUN_AT_COORD(*iParam0, -164.11f, -1847.47f, 0.46f, -1, 1, 0);
						}
						iLocal_906 = 0;
						iParam0->f_15 = 1;
					}
					if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), Local_1114[0 /*13*/].f_2, 1) < 10f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), Local_1114[1 /*13*/].f_2, 1) < 10f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), Local_1114[2 /*13*/].f_2, 1) < 10f)
					{
						if (iLocal_906 == 0)
						{
							iLocal_906 = MISC::GET_GAME_TIMER();
						}
						else if (GlobalFunc_2521(500, iLocal_906))
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							func_112(iParam0, 13);
						}
					}
					break;
				
				case 13:
					if (iParam0->f_15 == 0)
					{
						if (iParam0->f_28 == 3)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[1 /*13*/], 0))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1114[1 /*13*/], -1))
								{
									if (PED::GET_VEHICLE_PED_IS_USING(func_908(1)) != Local_1114[1 /*13*/] && PED::GET_VEHICLE_PED_IS_USING(func_908(2)) != Local_1114[1 /*13*/])
									{
										TASK::TASK_ENTER_VEHICLE(*iParam0, Local_1114[1 /*13*/], 20000, -1, 2f, 8, 0);
										iParam0->f_28 = 1;
									}
								}
							}
						}
						if (iParam0->f_28 == 3)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[2 /*13*/], 0))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1114[2 /*13*/], -1))
								{
									if (PED::GET_VEHICLE_PED_IS_USING(func_908(1)) != Local_1114[2 /*13*/] && PED::GET_VEHICLE_PED_IS_USING(func_908(2)) != Local_1114[2 /*13*/])
									{
										TASK::TASK_ENTER_VEHICLE(*iParam0, Local_1114[2 /*13*/], 20000, -1, 2f, 8, 0);
										iParam0->f_28 = 2;
									}
								}
							}
						}
						if (iParam0->f_28 == 3)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[0 /*13*/], 0))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1114[0 /*13*/], -1))
								{
									if (PED::GET_VEHICLE_PED_IS_USING(func_908(1)) != Local_1114[0 /*13*/] && PED::GET_VEHICLE_PED_IS_USING(func_908(2)) != Local_1114[0 /*13*/])
									{
										TASK::TASK_ENTER_VEHICLE(*iParam0, Local_1114[0 /*13*/], 20000, -1, 2f, 8, 0);
										iParam0->f_28 = 0;
									}
								}
							}
						}
						iParam0->f_15 = 1;
					}
					switch (iParam0->f_28)
					{
						case 0:
						case 1:
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[iParam0->f_28 /*13*/], 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(*iParam0, Local_1114[iParam0->f_28 /*13*/], 1))
								{
									if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_1114[iParam0->f_28 /*13*/], -1) || Local_1114[iParam0->f_28 /*13*/] == PED::GET_VEHICLE_PED_IS_USING(func_908(1))) || Local_1114[iParam0->f_28 /*13*/] == PED::GET_VEHICLE_PED_IS_USING(func_908(2)))
									{
										TASK::CLEAR_PED_TASKS(*iParam0);
										iParam0->f_28 = 3;
										func_112(iParam0, 13);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, -1794415470) != 0 && TASK::GET_SCRIPT_TASK_STATUS(*iParam0, -1794415470) != 1)
									{
										TASK::CLEAR_PED_TASKS(*iParam0);
										iParam0->f_28 = 3;
										func_112(iParam0, 13);
									}
								}
								else
								{
									if (PED::IS_PED_IN_VEHICLE(*iParam0, Local_1114[iParam0->f_28 /*13*/], 1))
									{
										VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1114[iParam0->f_28 /*13*/], 0);
									}
									if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, Local_1114[iParam0->f_28 /*13*/]))
									{
										func_112(iParam0, 14);
									}
								}
							}
							break;
						
						case 3:
							TASK::CLEAR_PED_TASKS(*iParam0);
							func_112(iParam0, 13);
							break;
					}
					break;
				
				case 14:
					if (iParam0->f_15 == 0)
					{
						iParam0->f_15 = 1;
					}
					if (!PED::IS_PED_IN_VEHICLE(*iParam0, Local_1114[iParam0->f_28 /*13*/], 0))
					{
						iParam0->f_28 = 3;
						func_112(iParam0, 13);
					}
					break;
				}
			}
	}
}

int func_580()//Position - 0x6611C
{
	if (func_558(Local_969) || func_557() < 2)
	{
		return 1;
	}
	return 0;
}

void func_581(var uParam0, struct<3> Param1, float fParam4)//Position - 0x66141
{
	*uParam0 = { Param1 };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = fParam4;
	uParam0->f_7 = 1;
}

int func_582()//Position - 0x66165
{
	if (func_558(Local_948) || ((func_563() + func_566()) + func_554()) <= 2)
	{
		return 1;
	}
	return 0;
}

void func_583(int iParam0)//Position - 0x66194
{
	int iVar0;
	int iVar1;
	
	if (*iParam0 == 0)
	{
		if (func_585())
		{
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2881[0 /*13*/].f_7, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2881[1 /*13*/].f_7, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2881[2 /*13*/].f_7, sLocal_311);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2881[0 /*13*/].f_7, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2881[1 /*13*/].f_7, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2881[2 /*13*/].f_7, sLocal_311))
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					Local_2881[iVar0 /*13*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), Local_2881[iVar0 /*13*/].f_2, Local_2881[iVar0 /*13*/].f_5, 1, 1);
					VEHICLE::SET_VEHICLE_SIREN(Local_2881[iVar0 /*13*/], 1);
					VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_2881[iVar0 /*13*/], 1);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_2881[iVar0 /*13*/], 0);
					iVar0++;
				}
				Local_2632[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[0 /*13*/], 6, iLocal_329, -1, 1, 1);
				Local_2632[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[0 /*13*/], 6, iLocal_329, 0, 1, 1);
				func_112(&(Local_2632[0 /*29*/]), 17);
				func_112(&(Local_2632[1 /*29*/]), 17);
				Local_2691[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[1 /*13*/], 6, iLocal_329, -1, 1, 1);
				Local_2691[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[1 /*13*/], 6, iLocal_329, 0, 1, 1);
				func_112(&(Local_2691[0 /*29*/]), 17);
				func_112(&(Local_2691[1 /*29*/]), 17);
				Local_2750[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[2 /*13*/], 6, iLocal_329, -1, 1, 1);
				Local_2750[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[2 /*13*/], 6, iLocal_329, 0, 1, 1);
				func_112(&(Local_2750[0 /*29*/]), 17);
				func_112(&(Local_2750[1 /*29*/]), 17);
				iVar0 = 0;
				while (iVar0 < 3)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2881[iVar0 /*13*/], Local_2881[iVar0 /*13*/].f_7, sLocal_311, 1);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2881[iVar0 /*13*/], 1);
					iVar0++;
				}
				VEHICLE::SET_PLAYBACK_SPEED(Local_2881[0 /*13*/], 1.25f);
				VEHICLE::SET_PLAYBACK_SPEED(Local_2881[1 /*13*/], 0.95f);
				VEHICLE::SET_PLAYBACK_SPEED(Local_2881[2 /*13*/], 0.95f);
				AUDIO::START_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_POLICE_ARRIVE");
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_Franklin_2_01", 0f);
				*iParam0 = 1;
				iLocal_1065 = MISC::GET_GAME_TIMER() + 1000;
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2632[0 /*29*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2632[0 /*29*/]))
			{
				switch (Local_2632[0 /*29*/].f_26)
				{
					case 17:
						if (Local_2632[0 /*29*/].f_15 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2881[0 /*13*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_2881[0 /*13*/]))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[0 /*13*/]))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2881[0 /*13*/], Local_2881[0 /*13*/].f_7, sLocal_311, 1);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2881[0 /*13*/], 1);
										VEHICLE::SET_PLAYBACK_SPEED(Local_2881[0 /*13*/], 1.25f);
									}
									else
									{
										WEAPON::GIVE_WEAPON_TO_PED(Local_2632[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
										PED::SET_PED_ACCURACY(Local_2632[0 /*29*/], 1);
										Local_2632[0 /*29*/].f_15 = 1;
									}
								}
							}
						}
						if (Local_2632[0 /*29*/].f_15 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2881[0 /*13*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_2881[0 /*13*/]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[0 /*13*/]))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2881[0 /*13*/]) > 10000f)
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2881[0 /*13*/]);
											VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2881[0 /*13*/].f_7, sLocal_311);
											Local_2632[0 /*29*/].f_12 = 0;
											func_112(&(Local_2632[0 /*29*/]), 5);
										}
									}
								}
							}
						}
						break;
					
					case 5:
						switch (Local_2632[0 /*29*/].f_12)
						{
							case 0:
								if (Local_2632[0 /*29*/].f_15 == 0)
								{
									WEAPON::GIVE_WEAPON_TO_PED(Local_2632[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
									PED::SET_PED_ACCURACY(Local_2632[0 /*29*/], 1);
									PED::SET_PED_SHOOT_RATE(Local_2632[0 /*29*/], 90);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[0 /*29*/], 0, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[0 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[0 /*29*/], 3, 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2632[0 /*29*/], 2);
									PED::SET_PED_COMBAT_MOVEMENT(Local_2632[0 /*29*/], 1);
									if (ENTITY::DOES_ENTITY_EXIST(Local_2881[0 /*13*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2881[0 /*13*/]))
									{
										PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_2632[0 /*29*/], Local_2881[0 /*13*/], 0f, 0f, 0f, 10f, 0);
									}
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2632[0 /*29*/], 150f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2632[0 /*29*/], 0);
									Local_2632[0 /*29*/].f_15 = 1;
								}
								if (Local_401.f_18)
								{
									Local_2632[0 /*29*/].f_12++;
									Local_2632[0 /*29*/].f_15 = 0;
								}
								break;
							
							case 1:
								if (Local_2632[0 /*29*/].f_15 == 0)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[0 /*29*/], 42, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[0 /*29*/], 50, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[0 /*29*/], 21, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[0 /*29*/], 0, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[0 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[0 /*29*/], 3, 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2632[0 /*29*/], 2);
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_2632[0 /*29*/], 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_2632[0 /*29*/], 2);
									Local_2632[0 /*29*/].f_15 = 1;
								}
								break;
						}
						break;
					}
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_2632[0 /*29*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2881[0 /*13*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_2881[0 /*13*/]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[0 /*13*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2881[0 /*13*/]);
							VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2881[0 /*13*/].f_7, sLocal_311);
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2632[1 /*29*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2632[1 /*29*/]))
			{
				switch (Local_2632[1 /*29*/].f_26)
				{
					case 17:
						if (Local_2632[1 /*29*/].f_15 == 0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_2632[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
							Local_2632[1 /*29*/].f_15 = 1;
						}
						if (Local_2632[1 /*29*/].f_15 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2881[0 /*13*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_2881[0 /*13*/]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[0 /*13*/]))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2881[0 /*13*/]) > 9500f)
										{
											func_112(&(Local_2632[1 /*29*/]), 5);
										}
									}
									else
									{
										Local_2632[1 /*29*/].f_12 = 0;
										func_112(&(Local_2632[1 /*29*/]), 5);
									}
								}
							}
						}
						break;
					
					case 5:
						switch (Local_2632[1 /*29*/].f_12)
						{
							case 0:
								if (Local_2632[1 /*29*/].f_15 == 0)
								{
									WEAPON::GIVE_WEAPON_TO_PED(Local_2632[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
									PED::SET_PED_ACCURACY(Local_2632[1 /*29*/], 1);
									PED::SET_PED_SHOOT_RATE(Local_2632[1 /*29*/], 90);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[1 /*29*/], 0, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[1 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[1 /*29*/], 3, 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2632[1 /*29*/], 2);
									PED::SET_PED_COMBAT_MOVEMENT(Local_2632[1 /*29*/], 1);
									if (ENTITY::DOES_ENTITY_EXIST(Local_2881[0 /*13*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2881[0 /*13*/]))
									{
										PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_2632[1 /*29*/], Local_2881[0 /*13*/], 0f, 0f, 0f, 10f, 0);
									}
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2632[1 /*29*/], 150f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2632[1 /*29*/], 0);
									Local_2632[1 /*29*/].f_15 = 1;
								}
								if (Local_401.f_18)
								{
									Local_2632[1 /*29*/].f_12++;
									Local_2632[1 /*29*/].f_15 = 0;
								}
								break;
							
							case 1:
								if (Local_2632[1 /*29*/].f_15 == 0)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[1 /*29*/], 42, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[1 /*29*/], 50, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[1 /*29*/], 21, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[1 /*29*/], 0, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[1 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2632[1 /*29*/], 3, 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2632[1 /*29*/], 2);
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_2632[1 /*29*/], 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_2632[1 /*29*/], 2);
									Local_2632[1 /*29*/].f_15 = 1;
								}
								break;
						}
						break;
					}
				}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2691[0 /*29*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2691[0 /*29*/]))
			{
				switch (Local_2691[0 /*29*/].f_26)
				{
					case 17:
						if (Local_2691[0 /*29*/].f_15 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2881[1 /*13*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_2881[1 /*13*/]))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[1 /*13*/]))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2881[1 /*13*/], Local_2881[1 /*13*/].f_7, sLocal_311, 1);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2881[1 /*13*/], 1);
										VEHICLE::SET_PLAYBACK_SPEED(Local_2881[1 /*13*/], 1.25f);
									}
									else
									{
										WEAPON::GIVE_WEAPON_TO_PED(Local_2691[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
										PED::SET_PED_ACCURACY(Local_2691[0 /*29*/], 1);
										Local_2691[0 /*29*/].f_15 = 1;
									}
								}
							}
						}
						if (Local_2691[0 /*29*/].f_15 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2881[1 /*13*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_2881[1 /*13*/]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[1 /*13*/]))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2881[1 /*13*/]) > 9000f)
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2881[1 /*13*/]);
											VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2881[1 /*13*/].f_7, sLocal_311);
											Local_2691[0 /*29*/].f_12 = 0;
											func_112(&(Local_2691[0 /*29*/]), 5);
										}
									}
								}
							}
						}
						break;
					
					case 5:
						switch (Local_2691[0 /*29*/].f_12)
						{
							case 0:
								if (Local_2691[0 /*29*/].f_15 == 0)
								{
									WEAPON::GIVE_WEAPON_TO_PED(Local_2691[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
									PED::SET_PED_ACCURACY(Local_2691[0 /*29*/], 1);
									PED::SET_PED_SHOOT_RATE(Local_2691[0 /*29*/], 90);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[0 /*29*/], 0, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[0 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[0 /*29*/], 3, 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2691[0 /*29*/], 2);
									PED::SET_PED_COMBAT_MOVEMENT(Local_2691[0 /*29*/], 1);
									if (ENTITY::DOES_ENTITY_EXIST(Local_2881[1 /*13*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2881[1 /*13*/]))
									{
										PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_2691[0 /*29*/], Local_2881[1 /*13*/], 0f, 0f, 0f, 10f, 0);
									}
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2691[0 /*29*/], 150f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2691[0 /*29*/], 0);
									Local_2691[0 /*29*/].f_15 = 1;
								}
								if (Local_401.f_18)
								{
									Local_2691[0 /*29*/].f_12++;
									Local_2691[0 /*29*/].f_15 = 0;
								}
								break;
							
							case 1:
								if (Local_2691[0 /*29*/].f_15 == 0)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[0 /*29*/], 42, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[0 /*29*/], 50, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[0 /*29*/], 21, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[0 /*29*/], 0, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[0 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[0 /*29*/], 3, 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2691[0 /*29*/], 2);
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_2691[0 /*29*/], 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_2691[0 /*29*/], 2);
									Local_2691[0 /*29*/].f_15 = 1;
								}
								break;
						}
						break;
					}
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_2691[0 /*29*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2881[1 /*13*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_2881[1 /*13*/]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[1 /*13*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2881[1 /*13*/]);
							VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2881[1 /*13*/].f_7, sLocal_311);
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2691[1 /*29*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2691[1 /*29*/]))
			{
				switch (Local_2691[1 /*29*/].f_26)
				{
					case 17:
						if (Local_2691[1 /*29*/].f_15 == 0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_2691[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
							Local_2691[1 /*29*/].f_15 = 1;
						}
						if (Local_2691[1 /*29*/].f_15 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2881[1 /*13*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_2881[1 /*13*/]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[1 /*13*/]))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2881[1 /*13*/]) > 8750f)
										{
											func_112(&(Local_2691[1 /*29*/]), 5);
										}
									}
									else
									{
										Local_2691[1 /*29*/].f_12 = 0;
										func_112(&(Local_2691[1 /*29*/]), 5);
									}
								}
							}
						}
						break;
					
					case 5:
						switch (Local_2691[1 /*29*/].f_12)
						{
							case 0:
								if (Local_2691[1 /*29*/].f_15 == 0)
								{
									WEAPON::GIVE_WEAPON_TO_PED(Local_2691[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
									PED::SET_PED_ACCURACY(Local_2691[1 /*29*/], 1);
									PED::SET_PED_SHOOT_RATE(Local_2691[1 /*29*/], 90);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[1 /*29*/], 0, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[1 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[1 /*29*/], 3, 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2691[1 /*29*/], 2);
									PED::SET_PED_COMBAT_MOVEMENT(Local_2691[1 /*29*/], 1);
									if (ENTITY::DOES_ENTITY_EXIST(Local_2881[1 /*13*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2881[1 /*13*/]))
									{
										PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_2691[1 /*29*/], Local_2881[1 /*13*/], 0f, 0f, 0f, 10f, 0);
									}
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2691[1 /*29*/], 150f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2691[1 /*29*/], 0);
									Local_2691[1 /*29*/].f_15 = 1;
								}
								if (Local_401.f_18)
								{
									Local_2691[1 /*29*/].f_12++;
									Local_2691[1 /*29*/].f_15 = 0;
								}
								break;
							
							case 1:
								if (Local_2691[1 /*29*/].f_15 == 0)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[1 /*29*/], 42, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[1 /*29*/], 50, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[1 /*29*/], 21, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[1 /*29*/], 0, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[1 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2691[1 /*29*/], 3, 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2691[1 /*29*/], 2);
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_2691[1 /*29*/], 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_2691[1 /*29*/], 2);
									Local_2691[1 /*29*/].f_15 = 1;
								}
								break;
						}
						break;
					}
				}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2750[0 /*29*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2750[0 /*29*/]))
			{
				switch (Local_2750[0 /*29*/].f_26)
				{
					case 17:
						if (Local_2750[0 /*29*/].f_15 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2881[2 /*13*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_2881[2 /*13*/]))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[2 /*13*/]))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2881[2 /*13*/], Local_2881[2 /*13*/].f_7, sLocal_311, 1);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2881[2 /*13*/], 1);
										VEHICLE::SET_PLAYBACK_SPEED(Local_2881[2 /*13*/], 1.25f);
									}
									else
									{
										WEAPON::GIVE_WEAPON_TO_PED(Local_2750[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
										PED::SET_PED_ACCURACY(Local_2750[0 /*29*/], 1);
										Local_2750[0 /*29*/].f_15 = 1;
									}
								}
							}
						}
						if (Local_2750[0 /*29*/].f_15 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2881[2 /*13*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_2881[2 /*13*/]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[2 /*13*/]))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2881[2 /*13*/]) > 8000f)
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2881[2 /*13*/]);
											VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2881[2 /*13*/].f_7, sLocal_311);
											Local_2750[0 /*29*/].f_12 = 0;
											func_112(&(Local_2750[0 /*29*/]), 5);
										}
									}
								}
							}
						}
						break;
					
					case 5:
						switch (Local_2750[0 /*29*/].f_12)
						{
							case 0:
								if (Local_2750[0 /*29*/].f_15 == 0)
								{
									WEAPON::GIVE_WEAPON_TO_PED(Local_2750[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
									PED::SET_PED_ACCURACY(Local_2750[0 /*29*/], 1);
									PED::SET_PED_SHOOT_RATE(Local_2750[0 /*29*/], 90);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[0 /*29*/], 0, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[0 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[0 /*29*/], 3, 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2750[0 /*29*/], 2);
									PED::SET_PED_COMBAT_MOVEMENT(Local_2750[0 /*29*/], 1);
									if (ENTITY::DOES_ENTITY_EXIST(Local_2881[2 /*13*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2881[2 /*13*/]))
									{
										PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_2750[0 /*29*/], Local_2881[2 /*13*/], 0f, 0f, 0f, 10f, 0);
									}
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2750[0 /*29*/], 150f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2750[0 /*29*/], 0);
									Local_2750[0 /*29*/].f_15 = 1;
								}
								if (Local_401.f_18)
								{
									Local_2750[0 /*29*/].f_12++;
									Local_2750[0 /*29*/].f_15 = 0;
								}
								break;
							
							case 1:
								if (Local_2750[0 /*29*/].f_15 == 0)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[0 /*29*/], 42, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[0 /*29*/], 50, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[0 /*29*/], 21, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[0 /*29*/], 0, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[0 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[0 /*29*/], 3, 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2750[0 /*29*/], 2);
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_2750[0 /*29*/], 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_2750[0 /*29*/], 2);
									Local_2750[0 /*29*/].f_15 = 1;
								}
								break;
						}
						break;
					}
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_2750[0 /*29*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2881[2 /*13*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_2881[2 /*13*/]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[2 /*13*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2881[2 /*13*/]);
							VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2881[2 /*13*/].f_7, sLocal_311);
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2750[1 /*29*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2750[1 /*29*/]))
			{
				switch (Local_2750[1 /*29*/].f_26)
				{
					case 17:
						if (Local_2750[1 /*29*/].f_15 == 0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_2750[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
							Local_2750[1 /*29*/].f_15 = 1;
						}
						if (Local_2750[1 /*29*/].f_15 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2881[2 /*13*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_2881[2 /*13*/]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[2 /*13*/]))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2881[2 /*13*/]) > 7500f)
										{
											func_112(&(Local_2750[1 /*29*/]), 5);
										}
									}
									else
									{
										Local_2750[1 /*29*/].f_12 = 0;
										func_112(&(Local_2750[1 /*29*/]), 5);
									}
								}
							}
						}
						break;
					
					case 5:
						switch (Local_2750[1 /*29*/].f_12)
						{
							case 0:
								if (Local_2750[1 /*29*/].f_15 == 0)
								{
									WEAPON::GIVE_WEAPON_TO_PED(Local_2750[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
									PED::SET_PED_ACCURACY(Local_2750[1 /*29*/], 1);
									PED::SET_PED_SHOOT_RATE(Local_2750[1 /*29*/], 90);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[1 /*29*/], 0, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[1 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[1 /*29*/], 3, 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2750[1 /*29*/], 2);
									PED::SET_PED_COMBAT_MOVEMENT(Local_2750[1 /*29*/], 1);
									if (ENTITY::DOES_ENTITY_EXIST(Local_2881[2 /*13*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2881[2 /*13*/]))
									{
										PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_2750[1 /*29*/], Local_2881[2 /*13*/], 0f, 0f, 0f, 10f, 0);
									}
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2750[1 /*29*/], 150f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2750[1 /*29*/], 0);
									Local_2750[1 /*29*/].f_15 = 1;
								}
								if (Local_401.f_18)
								{
									Local_2750[1 /*29*/].f_12++;
									Local_2750[1 /*29*/].f_15 = 0;
								}
								break;
							
							case 1:
								if (Local_2750[1 /*29*/].f_15 == 0)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[1 /*29*/], 42, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[1 /*29*/], 50, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[1 /*29*/], 21, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[1 /*29*/], 0, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[1 /*29*/], 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2750[1 /*29*/], 3, 1);
									PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2750[1 /*29*/], 2);
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_2750[1 /*29*/], 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_2750[1 /*29*/], 2);
									Local_2750[1 /*29*/].f_15 = 1;
								}
								break;
						}
						break;
					}
				}
		}
		if (iLocal_1017 == 1)
		{
			if (!func_102("F1_COP1"))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1019) > 0)
				{
					if (!GlobalFunc_111())
					{
						iVar1 = GlobalFunc_2524(PLAYER::PLAYER_PED_ID(), joaat("COP"), 1, 0, 28);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							if (((((!ENTITY::IS_ENTITY_DEAD(iVar1) && !TASK::IS_PED_IN_WRITHE(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0)) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar1)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iVar1))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iVar1, 1) < 50f)
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										GlobalFunc_200(&uLocal_729, 8);
										GlobalFunc_173(&uLocal_729, 8, iVar1, "FRA1POLICE1", 0, 1);
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COP1", 7, 0, 0, 0))
										{
											iLocal_1018++;
											iLocal_1019 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10500));
											if (iLocal_1018 >= 4)
											{
												func_98("F1_COP1", 1);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		func_109(&Local_2632, 0, 1, 0);
		func_109(&Local_2691, 0, 1, 0);
		func_109(&Local_2750, 0, 1, 0);
	}
}


int func_585()//Position - 0x67697
{
	if (func_197(func_908(1), func_908(2), Local_401, 13.0041f, -1844.279f, 20.515f, -5.4139f, -1872.29f, 25.2182f, 8f) && iLocal_4043[8])
	{
		return 1;
	}
	return 0;
}

int func_586(int iParam0)//Position - 0x676E7
{
	if (!ENTITY::IS_ENTITY_DEAD(func_908(2)))
	{
		Local_430.f_14 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_908(2), 1), Local_333, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_908(1)))
	{
		Local_459.f_14 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_908(1), 1), Local_333, 1);
	}
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_smg"), 31, 0);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pistol"), 31, 0);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_microsmg"), 31, 0);
	func_137(&Local_2086, 0, 1);
	func_646();
	func_645(&Local_488);
	func_579(&Local_401, PLAYER::PLAYER_PED_ID());
	func_542(func_132(), &Local_430, PLAYER::PLAYER_PED_ID());
	func_643(&iLocal_894);
	func_642(&iLocal_911);
	func_641(Local_459.f_14, Local_430.f_14, &Local_3246, 1112014848);
	func_239(&(Local_4208[2 /*29*/].f_12));
	func_639();
	func_637();
	func_636(&(iLocal_4043[2]), &iLocal_932);
	func_634(&(iLocal_4043[3]), iLocal_4043[2]);
	func_632(&(iLocal_4043[5]), iLocal_4043[3]);
	func_630(&(Local_2086[4 /*13*/].f_11));
	func_629(&(Local_1921[0 /*18*/].f_12));
	func_615(&(Local_1902[0 /*18*/].f_12));
	func_610(&(iLocal_4043[6]), iLocal_4043[5]);
	func_606();
	func_601(&(iLocal_4043[8]), iLocal_4043[7], 2);
	func_599();
	func_583(&(iLocal_4043[10]));
	func_593();
	switch (GlobalFunc_8315())
	{
		case 1:
			if (!func_102("FRA1_SCTLT"))
			{
				if (!PED::IS_PED_INJURED(Local_401))
				{
					if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_401) > 50f)
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							func_97("FRA1_SCTLT", 7500, 1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_102("FRA1_SCTLF"))
			{
				if (!PED::IS_PED_INJURED(Local_401))
				{
					if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_401) > 50f)
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							func_97("FRA1_SCTLF", 7500, 1);
						}
					}
				}
			}
			break;
	}
	func_592(Local_517, 1, 0.8f, 1.5f, -0.5f, 1.25f, 0, 1, 0.85f, 2.2f, 0.25f, 150f, 150f);
	func_592(Local_517, 5, 1f, -1.6f, -0.5f, 1.25f, 0, 1, 0.9f, -2.5f, 0.25f, 150f, 150f);
	func_592(Local_517, 0, -0.8f, 1.55f, -0.5f, 2f, 0, 1, -0.85f, 2.2f, 0.25f, 150f, 150f);
	func_592(Local_517, 4, -1f, -1.6f, -0.5f, 2f, 0, 1, -0.9f, -2.5f, 0.25f, 150f, 150f);
	if (!func_102("FRA1_ESCGSF") && !func_102("FRA1_ESCGST"))
	{
		if (func_102("F1_GSESCG") && func_102("F1_GSVIW"))
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !GlobalFunc_111())
			{
				switch (GlobalFunc_8315())
				{
					case 1:
						func_97("FRA1_ESCGSF", 7500, 1);
						break;
					
					case 2:
						func_97("FRA1_ESCGST", 7500, 1);
						break;
					}
				}
			}
	}
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
			{
				PHYSICS::ACTIVATE_PHYSICS(Local_517);
				ENTITY::SET_ENTITY_DYNAMIC(Local_517, 1);
				VEHICLE::SMASH_VEHICLE_WINDOW(Local_517, 0);
				VEHICLE::SET_VEHICLE_TYRE_BURST(Local_517, 0, 0, 1148846080);
				VEHICLE::SET_VEHICLE_TYRE_BURST(Local_517, 1, 0, 1148846080);
				VEHICLE::SET_VEHICLE_TYRE_BURST(Local_517, 5, 0, 1148846080);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_517, 50f);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_517, 1);
			}
			*iParam0++;
			break;
		
		case 1:
			if (iLocal_932 == 1)
			{
				iLocal_4043[0] = 1;
				*iParam0++;
			}
			break;
		
		case 2:
			if (iLocal_4043[11] == 1)
			{
				*iParam0++;
			}
			break;
		
		case 3:
			if (!func_102(&Local_312))
			{
				if (func_102("F1_LEFT"))
				{
					if (!GlobalFunc_5172(&Local_704, 2))
					{
						if ((func_224(&Local_401, 7) || func_224(&Local_401, 8)) || func_224(&Local_401, 9))
						{
							func_97(&Local_312, 7500, 1);
							AUDIO::TRIGGER_MUSIC_EVENT("FRA1_FIGHT_LEAVE");
							iLocal_933 = 0;
							iLocal_1017 = 1;
						}
					}
				}
			}
			if (func_591(PLAYER::PLAYER_PED_ID(), -46.7079f, -1871.813f, 21.33735f, -30.78839f, -1852.597f, 28.81719f, 24f))
			{
				func_861(2, "RUN TO SPEEDOPHILES", 0, 0, 0, 1);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_SHOOTOUT_MAIN"))
				{
					AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_MAIN");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_APPROACH_RIVER"))
				{
					AUDIO::START_AUDIO_SCENE("FRANKLIN_1_APPROACH_RIVER");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_SHOOTOUT_POLICE_ARRIVE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_POLICE_ARRIVE");
				}
			}
			if (func_590(func_908(2), func_908(1), Local_401, -58.72153f, -1894.919f, 21.32689f, -86.69415f, -1870.269f, -0.70383f, 34f))
			{
				func_589(&Local_3027, 0);
				func_589(&Local_3100, 0);
				func_206(&Local_1605, 1, 1, 1, 1, 1);
				GlobalFunc_2943(&Local_592, 0);
			}
			if (iLocal_1016 == 0)
			{
				if (func_197(func_908(1), func_908(2), Local_401, -183.2479f, -1877.746f, -8.911816f, -121.6059f, -1804.794f, 29.81538f, 72f))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("FRA1_WATER_ARRIVE"))
					{
						iLocal_1016 = 1;
					}
				}
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[0 /*13*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[1 /*13*/], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[2 /*13*/], 0))
			{
				if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1114[0 /*13*/], 1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1114[1 /*13*/], 1)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1114[2 /*13*/], 1))
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
					GlobalFunc_2520();
				}
			}
			AUDIO::PREPARE_MUSIC_EVENT("FRA1_SPEED");
			VEHICLE::REQUEST_VEHICLE_RECORDING(911, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(912, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(913, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(921, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(922, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(923, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(931, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(932, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(933, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(72, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(82, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(63, sLocal_311);
			if ((func_237(func_908(2)) && func_237(func_908(1))) && func_237(Local_401))
			{
				if (((((((((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(911, sLocal_311) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(912, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(913, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(921, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(922, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(923, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(931, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(932, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(933, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(72, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(82, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(63, sLocal_311))
				{
					if (!PED::IS_PED_INJURED(Local_4208[0 /*29*/]))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Local_4208[0 /*29*/]);
					}
					if (PED::GET_VEHICLE_PED_IS_USING(Local_401) == Local_1114[0 /*13*/])
					{
						Local_401.f_28 = 0;
						Local_1114[0 /*13*/].f_7 = 911;
						Local_1114[1 /*13*/].f_7 = 912;
						Local_1114[2 /*13*/].f_7 = 913;
					}
					else if (PED::GET_VEHICLE_PED_IS_USING(Local_401) == Local_1114[1 /*13*/])
					{
						Local_401.f_28 = 1;
						Local_1114[0 /*13*/].f_7 = 921;
						Local_1114[1 /*13*/].f_7 = 922;
						Local_1114[2 /*13*/].f_7 = 923;
					}
					else if (PED::GET_VEHICLE_PED_IS_USING(Local_401) == Local_1114[2 /*13*/])
					{
						Local_401.f_28 = 2;
						Local_1114[0 /*13*/].f_7 = 931;
						Local_1114[1 /*13*/].f_7 = 932;
						Local_1114[2 /*13*/].f_7 = 933;
					}
					func_112(&Local_401, 16);
					if (PED::GET_VEHICLE_PED_IS_USING(func_908(2)) == Local_1114[0 /*13*/])
					{
						Local_430.f_28 = 0;
					}
					else if (PED::GET_VEHICLE_PED_IS_USING(func_908(2)) == Local_1114[1 /*13*/])
					{
						Local_430.f_28 = 1;
					}
					else if (PED::GET_VEHICLE_PED_IS_USING(func_908(2)) == Local_1114[2 /*13*/])
					{
						Local_430.f_28 = 2;
					}
					func_112(&Local_430, 16);
					if (PED::GET_VEHICLE_PED_IS_USING(func_908(1)) == Local_1114[0 /*13*/])
					{
						Local_459.f_28 = 0;
					}
					else if (PED::GET_VEHICLE_PED_IS_USING(func_908(1)) == Local_1114[1 /*13*/])
					{
						Local_459.f_28 = 1;
					}
					else if (PED::GET_VEHICLE_PED_IS_USING(func_908(1)) == Local_1114[2 /*13*/])
					{
						Local_459.f_28 = 2;
					}
					func_112(&Local_459, 16);
					func_112(&(Local_4208[0 /*29*/]), 14);
					if (GlobalFunc_111())
					{
						GlobalFunc_5105();
					}
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					func_589(&Local_3027, 0);
					func_589(&Local_3100, 0);
					func_206(&Local_1605, 0, 0, 1, 1, 1);
					func_137(&Local_2086, 0, 0);
					func_137(&Local_2152, 0, 0);
					func_206(&Local_2205, 0, 0, 1, 1, 1);
					GlobalFunc_2943(&Local_592, 0);
					func_206(&Local_1752, 0, 0, 1, 1, 1);
					func_206(&Local_1771, 0, 0, 1, 1, 1);
					func_206(&Local_1790, 0, 0, 1, 1, 1);
					func_109(&Local_4354, 1, 0, 0);
					func_109(&Local_2632, 0, 0, 1);
					func_109(&Local_2691, 0, 0, 1);
					func_109(&Local_2750, 0, 0, 1);
					func_108(&Local_4442, 1, 0);
					func_137(&Local_2881, 0, 0);
					VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2881[0 /*13*/].f_7, sLocal_311);
					VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2881[1 /*13*/].f_7, sLocal_311);
					VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2881[2 /*13*/].f_7, sLocal_311);
					AUDIO::STOP_SOUND(uLocal_930);
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FRANKLIN_1_CAMERAS");
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FRANKLIN_1_GIRLS");
					func_588(&Local_3173, 0);
					func_587(&Local_3246, &iLocal_1056);
					if (!PED::IS_PED_INJURED(func_132()))
					{
						PED::REMOVE_PED_FROM_GROUP(func_132());
					}
					if (!PED::IS_PED_INJURED(Local_401))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_401);
					}
					if (!PED::IS_PED_INJURED(Local_488))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_488, 0);
					}
					STREAMING::REMOVE_ANIM_DICT("missfra1");
					if (iLocal_1008 >= 5 && iLocal_1009 >= 5)
					{
					}
					AUDIO::TRIGGER_MUSIC_EVENT("FRA1_SPEED");
					func_236(Local_459.f_28);
					func_236(Local_430.f_28);
					func_236(Local_401.f_28);
					if (!CAM::DOES_CAM_EXIST(uLocal_1020))
					{
						CAM::DESTROY_ALL_CAMS(0);
						uLocal_1020 = CAM::CREATE_CAMERA(964613260, 1);
						CAM::PLAY_CAM_ANIM(uLocal_1020, "jetski_escape_cam", "missfra1", -129.73f, -1857.22f, 0.35f, 0f, 0f, 0f, 0, 2);
						HUD::DISPLAY_HUD(0);
						HUD::DISPLAY_RADAR(0);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						GlobalFunc_7629();
					}
					SYSTEM::SETTIMERA(0);
					iLocal_702 = 0;
					func_231(&Global_86813, Local_401.f_28, Local_459.f_28, Local_430.f_28);
					AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_APPROACH_RIVER");
					AUDIO::START_AUDIO_SCENE("FRANKLIN_1_JETSKI_START");
					*iParam0++;
				}
			}
			break;
		
		case 4:
			STREAMING::REQUEST_MODEL(iLocal_328);
			STREAMING::REQUEST_MODEL(Local_530.f_6);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_530.f_7, sLocal_311);
			GlobalFunc_5077();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			GlobalFunc_2520();
			if (!func_102("F1_LCLNCR"))
			{
				if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCLNCR", 7, 0, 0, 0))
				{
					func_98("F1_LCLNCR", 1);
				}
			}
			if (SYSTEM::TIMERA() > 3600)
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_401.f_28 /*13*/]);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_401.f_28 /*13*/], 72, sLocal_311, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_401.f_28 /*13*/], 6000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1114[Local_401.f_28 /*13*/], 1);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_430.f_28 /*13*/]);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_430.f_28 /*13*/], 63, sLocal_311, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_430.f_28 /*13*/], 6000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1114[Local_430.f_28 /*13*/], 1);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_459.f_28 /*13*/]);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_459.f_28 /*13*/], 82, sLocal_311, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_459.f_28 /*13*/], 6000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1114[Local_459.f_28 /*13*/], 1);
				VEHICLE::REMOVE_VEHICLE_RECORDING(911, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(912, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(913, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(921, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(922, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(923, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(931, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(932, sLocal_311);
				VEHICLE::REMOVE_VEHICLE_RECORDING(933, sLocal_311);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1114[Local_401.f_28 /*13*/], 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1114[Local_430.f_28 /*13*/], 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1114[Local_459.f_28 /*13*/], 1);
				Local_1114[Local_401.f_28 /*13*/].f_7 = 72;
				Local_1114[Local_430.f_28 /*13*/].f_7 = 63;
				Local_1114[Local_459.f_28 /*13*/].f_7 = 82;
				*iParam0++;
			}
			else if (SYSTEM::TIMERA() > 3300)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					if (iLocal_1063 == 0)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1063 = 1;
					}
				}
			}
			break;
		
		case 5:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::DESTROY_ALL_CAMS(0);
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			STREAMING::REMOVE_ANIM_DICT("missfra1");
			return 1;
			break;
	}
	return 0;
}

void func_587(var uParam0, int iParam1)//Position - 0x68464
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		TASK::REMOVE_COVER_POINT((*uParam0)[iVar0 /*12*/]);
		iVar0++;
	}
	*iParam1 = 0;
	TASK::REMOVE_COVER_POINT(iLocal_1058);
	iLocal_1057 = 0;
}

void func_588(var uParam0, int iParam1)//Position - 0x6849E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		GlobalFunc_2943(uParam0[iVar0 /*8*/], iParam1);
		iVar0++;
	}
}

void func_589(int iParam0, int iParam1)//Position - 0x684CB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_207(&((iParam0[iVar0 /*36*/])->f_4), iParam1, 0, 0, 1, 0);
		(iParam0[iVar0 /*36*/])->f_30 = 0;
		iVar0++;
	}
}

int func_590(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6, float fParam9)//Position - 0x68504
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam2))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param3, Param6, fParam9, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Param3, Param6, fParam9, 0, 1, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, Param3, Param6, fParam9, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_591(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x68598
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param1, Param4, fParam7, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_592(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, struct<3> Param8, float fParam11, float fParam12)//Position - 0x685CE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, iParam1, 0))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Param2), fParam5, iParam6))
				{
					switch (iParam1)
					{
						case 0:
							VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 0, 0, 1148846080);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 0);
							break;
						
						case 1:
							VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 1, 0, 1148846080);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 1);
							break;
						
						case 4:
							VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 4, 0, 1148846080);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 2);
							break;
						
						case 5:
							VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 5, 0, 1148846080);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 3);
							break;
					}
					if (iParam7 == 1)
					{
						VEHICLE::SET_VEHICLE_DAMAGE(iParam0, Param8, fParam11, fParam12, 1);
					}
				}
			}
		}
	}
}

void func_593()//Position - 0x6869B
{
	int iVar0;
	int iVar1;
	
	if (iLocal_4043[11])
	{
		if (!iLocal_4043[12])
		{
			if (func_598())
			{
				iLocal_927 = 0;
				STREAMING::REQUEST_MODEL(iLocal_329);
				STREAMING::REQUEST_MODEL(Local_2881[3 /*13*/].f_6);
				STREAMING::REQUEST_MODEL(Local_2881[4 /*13*/].f_6);
				VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2881[3 /*13*/].f_7, sLocal_311);
				VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2881[4 /*13*/].f_7, sLocal_311);
				if ((((STREAMING::HAS_MODEL_LOADED(iLocal_329) && STREAMING::HAS_MODEL_LOADED(Local_2881[3 /*13*/].f_6)) && STREAMING::HAS_MODEL_LOADED(Local_2881[4 /*13*/].f_6)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2881[3 /*13*/].f_7, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2881[4 /*13*/].f_7, sLocal_311))
				{
					Local_2881[3 /*13*/] = func_217(&(Local_2881[3 /*13*/]), 1000, 0, 1, -1, -1);
					Local_2881[4 /*13*/] = func_217(&(Local_2881[4 /*13*/]), 1000, 0, 1, -1, -1);
					VEHICLE::SET_VEHICLE_SIREN(Local_2881[3 /*13*/], 1);
					VEHICLE::SET_VEHICLE_SIREN(Local_2881[4 /*13*/], 1);
					Local_2205[0 /*18*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[3 /*13*/], 6, iLocal_329, -1, 1, 1);
					Local_2205[1 /*18*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[3 /*13*/], 6, iLocal_329, 0, 1, 1);
					Local_2205[2 /*18*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[4 /*13*/], 6, iLocal_329, -1, 1, 1);
					Local_2205[3 /*18*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[4 /*13*/], 6, iLocal_329, 0, 1, 1);
					WEAPON::GIVE_WEAPON_TO_PED(Local_2205[0 /*18*/], joaat("weapon_pistol"), -1, 0, 1);
					WEAPON::GIVE_WEAPON_TO_PED(Local_2205[1 /*18*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
					WEAPON::GIVE_WEAPON_TO_PED(Local_2205[2 /*18*/], joaat("weapon_pistol"), -1, 0, 1);
					WEAPON::GIVE_WEAPON_TO_PED(Local_2205[3 /*18*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2205[0 /*18*/], 2);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2205[1 /*18*/], 2);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2205[2 /*18*/], 2);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_2205[3 /*18*/], 2);
					PED::SET_PED_ACCURACY(Local_2205[0 /*18*/], 1);
					PED::SET_PED_ACCURACY(Local_2205[1 /*18*/], 1);
					PED::SET_PED_ACCURACY(Local_2205[2 /*18*/], 1);
					PED::SET_PED_ACCURACY(Local_2205[3 /*18*/], 1);
					func_213(&Local_2205, 0);
					func_128(Local_2881[3 /*13*/], sLocal_311, 1f, 0, 0, 0, 0, 1);
					func_128(Local_2881[4 /*13*/], sLocal_311, 1f, 0, 0, 0, 0, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2881[3 /*13*/].f_6);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2881[4 /*13*/].f_6);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_329);
					func_597(&Local_3027, 7);
					func_597(&Local_3100, 7);
					iLocal_4043[12] = 1;
				}
			}
		}
		else
		{
			iVar0 = Local_2881[3 /*13*/];
			if (ENTITY::DOES_ENTITY_EXIST(Local_2881[0 /*13*/]))
			{
				iVar0 = Local_2881[0 /*13*/];
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_2881[1 /*13*/]))
			{
				iVar0 = Local_2881[1 /*13*/];
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2881[3 /*13*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2881[3 /*13*/], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[3 /*13*/]))
				{
					if (PED::IS_PED_INJURED(Local_2205[0 /*18*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2881[3 /*13*/]);
					}
					if (func_575(Local_2881[3 /*13*/]) > 95f)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2881[3 /*13*/]);
						VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2881[3 /*13*/].f_7, sLocal_311);
						func_595(Local_2205[0 /*18*/], iVar0, 0f, 0f, 0f);
						func_595(Local_2205[1 /*18*/], iVar0, 0f, 0f, 0f);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2881[4 /*13*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2881[4 /*13*/], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2881[4 /*13*/]))
				{
					if (PED::IS_PED_INJURED(Local_2205[2 /*18*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2881[4 /*13*/]);
					}
					if (func_575(Local_2881[4 /*13*/]) > 95f)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2881[4 /*13*/]);
						VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2881[4 /*13*/].f_7, sLocal_311);
						func_595(Local_2205[2 /*18*/], iVar0, 0f, 0f, 0f);
						func_595(Local_2205[3 /*18*/], iVar0, 0f, 0f, 0f);
					}
				}
			}
			iVar1 = 0;
			while (iVar1 <= (Local_3027 - 1))
			{
				func_594(&(Local_3027[iVar1 /*36*/]), 1);
				func_594(&(Local_3100[iVar1 /*36*/]), 1);
				iVar1++;
			}
		}
	}
}

void func_594(var uParam0, int iParam1)//Position - 0x68A7B
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_30 == 1)
	{
		if (uParam0->f_31 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				if (GlobalFunc_2521(uParam0->f_34, uParam0->f_33))
				{
					if (!CAM::IS_SPHERE_VISIBLE(*uParam0, 2f))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam0, 1) > 10f)
						{
							if (iLocal_4043[11])
							{
								iVar0 = 0;
								iVar1 = iLocal_329;
							}
							else
							{
								iVar0 = 1;
								iVar1 = iLocal_328;
							}
							uParam0->f_4 = func_215(iVar1, *uParam0, uParam0->f_3, iLocal_399, joaat("weapon_pistol"), 200, iVar0);
							if (iVar1 == iLocal_329)
							{
								PED::SET_PED_ACCURACY(uParam0->f_4, 3);
							}
							uParam0->f_4.f_16 = 0;
							if (iVar0 == 1)
							{
								uParam0->f_4.f_17 = 0;
							}
							else
							{
								uParam0->f_4.f_17 = 7;
							}
							uParam0->f_31 = 1;
							uParam0->f_32 = 0;
						}
					}
					else if (iParam1 == 1)
					{
						uParam0->f_33 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
}

void func_595(int iParam0, int iParam1, struct<3> Param2)//Position - 0x68B5B
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
	if (!GlobalFunc_100(Param2, 0f, 0f, 0f))
	{
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param2, PLAYER::PLAYER_PED_ID(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
	}
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iParam0, iParam1, 0f, 0f, 0f, 10f, 0);
	}
}


void func_597(int iParam0, int iParam1)//Position - 0x68C46
{
	int iVar0;
	
	if (iParam1 == 4)
	{
		*(iParam0[0 /*36*/]) = { 12.8661f, -1836.162f, 23.6954f };
		(iParam0[0 /*36*/])->f_3 = 64.4611f;
		(iParam0[0 /*36*/])->f_22 = { 21.6126f, -1844.294f, 23.6066f };
		(iParam0[0 /*36*/])->f_22.f_6 = 15f;
		(iParam0[0 /*36*/])->f_22.f_7 = 1;
		(iParam0[0 /*36*/])->f_34 = 8000;
		*(iParam0[1 /*36*/]) = { -16.6636f, -1859.858f, 23.795f };
		(iParam0[1 /*36*/])->f_3 = 47.6587f;
		(iParam0[1 /*36*/])->f_22 = { -16.6636f, -1859.858f, 23.795f };
		(iParam0[1 /*36*/])->f_22.f_6 = 15f;
		(iParam0[1 /*36*/])->f_22.f_7 = 1;
		(iParam0[1 /*36*/])->f_34 = 12000;
	}
	else
	{
		*(iParam0[0 /*36*/]) = { 27.3783f, -1816.603f, 24.1608f };
		(iParam0[0 /*36*/])->f_3 = 64.4611f;
		(iParam0[0 /*36*/])->f_22 = { 1.3957f, -1837.143f, 23.7967f };
		(iParam0[0 /*36*/])->f_22.f_6 = 4f;
		(iParam0[0 /*36*/])->f_22.f_7 = 1;
		(iParam0[0 /*36*/])->f_34 = 8000;
		*(iParam0[1 /*36*/]) = { 2.2555f, -1808.722f, 24.3374f };
		(iParam0[1 /*36*/])->f_3 = 47.6587f;
		(iParam0[1 /*36*/])->f_22 = { -17.9626f, -1821.148f, 24.8344f };
		(iParam0[1 /*36*/])->f_22.f_6 = 1f;
		(iParam0[1 /*36*/])->f_22.f_7 = 1;
		(iParam0[1 /*36*/])->f_34 = 12000;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		(iParam0[iVar0 /*36*/])->f_30 = 1;
		(iParam0[iVar0 /*36*/])->f_31 = 0;
		(iParam0[iVar0 /*36*/])->f_32 = 0;
		(iParam0[iVar0 /*36*/])->f_35 = 0;
		iVar0++;
	}
}

int func_598()//Position - 0x68DFC
{
	if (iLocal_4043[11] && GlobalFunc_2521(12000, iLocal_928))
	{
		return 1;
	}
	return 0;
}

void func_599()//Position - 0x68E22
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_3027 - 1))
	{
		func_600(&(Local_3027[iVar0 /*36*/]), iLocal_933);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_3100 - 1))
	{
		func_600(&(Local_3100[iVar0 /*36*/]), iLocal_933);
		iVar0++;
	}
}

void func_600(var uParam0, int iParam1)//Position - 0x68E72
{
	if (uParam0->f_31 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_4))
				{
					if (uParam0->f_32 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_4043[11])
								{
									if (Local_401.f_18 == 0)
									{
										PED::SET_PED_ACCURACY(uParam0->f_4, 1);
										func_595(uParam0->f_4, Local_2881[0 /*13*/], 0f, 0f, 0f);
									}
									else
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_4, 42, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_4, 50, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_4, 21, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_4, 0, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_4, 1, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_4, 3, 1);
										PED::SET_PED_TARGET_LOSS_RESPONSE(uParam0->f_4, 2);
										PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_4, 1);
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(uParam0->f_4, -42.08591f, -1866.87f, 23.17534f, -28.50718f, -1851.517f, 27.73919f, 5f, 0, 0);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uParam0->f_4, 3000f, 0);
									}
								}
								else
								{
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uParam0->f_4, 3000f, 0);
								}
								uParam0->f_32 = 1;
							}
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_4) || PED::IS_PED_INJURED(uParam0->f_4))
			{
				if (uParam0->f_4.f_17 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_4.f_1))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_4.f_1));
					}
					uParam0->f_4.f_17 = func_111(uParam0->f_4);
					uParam0->f_4.f_16++;
					if (uParam0->f_4.f_16 == 10)
					{
						uParam0->f_4.f_17 = 7;
					}
				}
				else
				{
					uParam0->f_35++;
					uParam0->f_33 = MISC::GET_GAME_TIMER();
					uParam0->f_31 = 0;
					uParam0->f_32 = 0;
					func_208(uParam0->f_4.f_17, &iLocal_1008, &iLocal_1009, &uLocal_1010, &uLocal_1011, &uLocal_1012, &uLocal_1013);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
				}
			}
		}
	}
	if (iParam1 == 1)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_4) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4)) && ENTITY::GET_ENTITY_MODEL(uParam0->f_4) != iLocal_329)
		{
			GlobalFunc_661(uParam0->f_4, &(uParam0->f_4.f_2), -1, 0, 0, 0, -1082130432, 0);
		}
	}
	else
	{
		GlobalFunc_589(&(uParam0->f_4.f_2));
	}
}

void func_601(var uParam0, int iParam1, int iParam2)//Position - 0x69093
{
	if (*uParam0 == 0)
	{
		if (iParam1 == 1)
		{
			if (func_553(&Local_1827) <= iParam2 || func_197(func_908(1), func_908(2), Local_401, -19.31581f, -1883.604f, 21.77807f, 27.23107f, -1846.195f, 25.67095f, 8f))
			{
				Local_1605[0 /*18*/] = func_215(iLocal_328, -16.66f, -1813.8f, 25.47f, 138.3147f, iLocal_399, joaat("weapon_microsmg"), 125, 1);
				Local_1605[1 /*18*/] = func_215(iLocal_328, -24.22f, -1856.45f, 24.01f, 330.4768f, iLocal_399, joaat("weapon_microsmg"), 120, 1);
				Local_1605[2 /*18*/] = func_215(iLocal_328, 6.5899f, -1810.973f, 24.3479f, 212.5341f, iLocal_399, joaat("weapon_assaultrifle"), 200, 1);
				func_213(&Local_1605, 0);
				func_126(Local_1605[0 /*18*/], 5, 30, -687903391);
				func_605(Local_1605[0 /*18*/], 150f, 0);
				func_577(Local_1605[0 /*18*/], 1, 0, 1, 0, 1);
				func_576(Local_1605[0 /*18*/], -16.61864f, -1821.934f, 23.79194f, -21.70616f, -1828.042f, 27.61009f, 6f, 0);
				func_604(Local_1605[1 /*18*/], Local_3246[40 /*12*/].f_1, 2f, 3000, 1, 1, 1, 1120403456, 1, 20000, 1048576000, 0);
				func_571(Local_1605[1 /*18*/], 1, 1, 0, 1, 10f, 0, 0f, 1.5f, 5f);
				func_126(Local_1605[1 /*18*/], 5, 30, -687903391);
				func_603(Local_1605[2 /*18*/], 5.45f, -1818.47f, 24.35f, 2f, 40000, 1, 1, 1120403456, 1048576000, 0);
				func_126(Local_1605[2 /*18*/], 3, 90, -687903391);
				func_576(Local_1605[2 /*18*/], -0.456124f, -1825.613f, 28.44631f, 1.161289f, -1823.675f, 30.54631f, 1.5f, 0);
				Local_1605[2 /*18*/].f_13 = MISC::GET_GAME_TIMER();
				func_564(Local_1605[3 /*18*/], Local_3246[57 /*12*/].f_1, 2f, 0, Local_333, 0, 0, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
				func_571(Local_1605[3 /*18*/], 1, 0, 0, 0, 10f, 0, 0f, 1f, 5f);
				func_126(Local_1605[3 /*18*/], 5, 60, -687903391);
				*uParam0 = 1;
			}
		}
	}
	else
	{
		func_206(&Local_1605, 0, 1, 0, 1, 1);
		func_602(&Local_1605, &(iLocal_4043[21]));
		if (!PED::IS_PED_INJURED(Local_1605[1 /*18*/]))
		{
			switch (Local_1605[1 /*18*/].f_12)
			{
				case 0:
					if (iLocal_4043[1] == 1)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1605[1 /*18*/], 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1605[1 /*18*/], 100f, 0);
						func_577(Local_1605[1 /*18*/], 2, 2, 0, 13, 1);
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_1605[1 /*18*/], 0);
						func_571(Local_1605[1 /*18*/], 0, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
						Local_1605[1 /*18*/].f_12++;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1605[2 /*18*/]))
		{
			switch (Local_1605[2 /*18*/].f_12)
			{
				case 0:
					if (iLocal_4043[1] == 1)
					{
						Local_1605[2 /*18*/].f_15 = 0;
						Local_1605[2 /*18*/].f_12++;
					}
					break;
				
				case 1:
					if (Local_1605[2 /*18*/].f_15 == 0)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_1605[2 /*18*/], 0);
						PED::SET_PED_COMBAT_RANGE(Local_1605[2 /*18*/], 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_1605[2 /*18*/], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1605[2 /*18*/], 29, 1);
						func_546(Local_1605[2 /*18*/], 1f, 0f);
						func_126(Local_1605[2 /*18*/], 5, 75, -687903391);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1605[2 /*18*/], 100f, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1605[2 /*18*/], 0);
						Local_1605[2 /*18*/].f_15 = 1;
					}
					break;
				}
		}
		func_203(&Local_1605, iLocal_933);
	}
}

void func_602(var uParam0, var uParam1)//Position - 0x6949A
{
	if (*uParam1 == 0)
	{
		if (func_127(uParam0))
		{
			*uParam1 = 1;
		}
	}
}

void func_603(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8, float fParam9, int iParam10)//Position - 0x694B6
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		if (iParam7 == 1)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, fParam4, iParam5, fParam9, iParam10, 1193033728);
		}
		else
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, Param1, fParam4, iParam5, 1193033728, 1056964608);
		}
		if (iParam6 == 1)
		{
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
		}
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam8, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

void func_604(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, float fParam12, int iParam13)//Position - 0x69532
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		if (iParam10 == 1)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, fParam4, iParam11, fParam12, iParam13, 1193033728);
		}
		else
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, Param1, fParam4, iParam11, 1193033728, 1056964608);
		}
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Param1, iParam5, iParam6, 1.5f, iParam7, iParam8, 0, 1);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam9, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

void func_605(int iParam0, float fParam1, int iParam2)//Position - 0x695C0
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
		if (iParam2 == 0)
		{
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam1, 0);
		}
		else if (!PED::IS_PED_INJURED(iParam2))
		{
			TASK::TASK_COMBAT_PED(0, iParam2, 0, 16);
		}
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

void func_606()//Position - 0x69617
{
	if (!iLocal_4043[7])
	{
		if (func_609())
		{
			STREAMING::REQUEST_MODEL(Local_2086[3 /*13*/].f_6);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2086[3 /*13*/].f_7, sLocal_311);
			if (STREAMING::HAS_MODEL_LOADED(Local_2086[3 /*13*/].f_6) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2086[3 /*13*/].f_7, sLocal_311))
			{
				Local_2086[3 /*13*/] = func_217(&(Local_2086[3 /*13*/]), 1500, 1, 1, 68, 68);
				Local_1827[0 /*18*/] = func_214(iLocal_328, Local_2086[3 /*13*/], -1, iLocal_399, joaat("weapon_pistol"), 200);
				func_213(&Local_1827, 0);
				Local_1846[0 /*18*/] = func_214(iLocal_328, Local_2086[3 /*13*/], 0, iLocal_399, joaat("weapon_microsmg"), 200);
				func_213(&Local_1846, 0);
				func_608(Local_1846[0 /*18*/], 150f);
				func_126(Local_1846[0 /*18*/], 5, 75, -957453492);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2086[3 /*13*/], 1, 1);
				VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_2086[3 /*13*/], 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2086[3 /*13*/], Local_2086[3 /*13*/].f_7, sLocal_311, 1);
				VEHICLE::SET_PLAYBACK_SPEED(Local_2086[3 /*13*/], 1.15f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2086[3 /*13*/], 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2086[3 /*13*/], "FRANKLIN_1_SHOOTOUT_CAR_03_Group", 0);
				AUDIO::START_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_CAR_ARRIVE_3");
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2086[3 /*13*/].f_6);
				iLocal_4043[7] = 1;
			}
		}
	}
	else
	{
		func_206(&Local_1827, 0, 1, 0, 1, 1);
		func_206(&Local_1846, 0, 1, 0, 1, 1);
		func_602(&Local_1827, &(iLocal_4043[30]));
		func_602(&Local_1846, &(iLocal_4043[31]));
		func_592(Local_2086[3 /*13*/], 1, Local_378, 1f, 0, 1, Local_384, 100f, 100f);
		func_592(Local_2086[3 /*13*/], 5, Local_381, 1f, 0, 1, Local_387, 100f, 100f);
		if (ENTITY::DOES_ENTITY_EXIST(Local_2086[3 /*13*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[3 /*13*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2086[3 /*13*/]))
			{
				if (func_575(Local_2086[3 /*13*/]) > 80f)
				{
					if (Local_1846[0 /*18*/].f_15 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_1846[0 /*18*/]))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Local_1846[0 /*18*/], joaat("weapon_microsmg"), 1);
							func_607(Local_1846[0 /*18*/], -0.2979f, -1855.723f, 23.3036f);
						}
						AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_CAR_ARRIVE_3");
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_2086[3 /*13*/], 0);
						Local_1846[0 /*18*/].f_15 = 1;
					}
				}
				if (func_575(Local_2086[3 /*13*/]) > 90f)
				{
					if (Local_1827[0 /*18*/].f_15 == 0)
					{
						func_605(Local_1827[0 /*18*/], 1120403456, 0);
						func_126(Local_1827[0 /*18*/], 8, 60, -687903391);
						func_571(Local_1827[0 /*18*/], 1, 0, 0, 0, 6f, 0, 0f, 3f, 1082130432);
						Local_1827[0 /*18*/].f_15 = 1;
					}
					AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_CAR_ARRIVE_3");
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_2086[3 /*13*/], 0);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2086[3 /*13*/]);
					VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2086[3 /*13*/].f_7, sLocal_311);
				}
			}
		}
		func_203(&Local_1827, iLocal_933);
		func_203(&Local_1846, iLocal_933);
	}
}

void func_607(int iParam0, struct<3> Param1)//Position - 0x69921
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, PLAYER::PLAYER_PED_ID(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
}

void func_608(int iParam0, float fParam1)//Position - 0x699A0
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, 1);
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_HEARING_RANGE(iParam0, fParam1);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, fParam1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
	}
}

int func_609()//Position - 0x699E2
{
	if (!iLocal_4043[7] && iLocal_4043[6])
	{
		if (func_558(Local_962))
		{
			return 1;
		}
	}
	return 0;
}

void func_610(var uParam0, int iParam1)//Position - 0x69A10
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		if (iParam1 == 1)
		{
			if (func_613())
			{
				Local_1495[0 /*18*/] = func_215(iLocal_328, 27.5975f, -1897.288f, 21.5562f, 309.5858f, iLocal_399, joaat("weapon_pistol"), 200, 1);
				Local_1495[1 /*18*/] = func_215(iLocal_328, 17.2164f, -1889.515f, 22.0813f, 284.5244f, iLocal_399, joaat("weapon_pistol"), 200, 1);
				Local_1495[2 /*18*/] = func_215(iLocal_328, 3.31f, -1877.65f, 22.61f, 329.787f, iLocal_399, joaat("weapon_pistol"), 200, 1);
				Local_1495[3 /*18*/] = func_215(iLocal_328, 45.0939f, -1853.906f, 21.8317f, 317.119f, iLocal_399, joaat("weapon_microsmg"), 125, 1);
				func_213(&Local_1495, 0);
				Local_1568[0 /*18*/] = func_215(iLocal_328, 46.9275f, -1865.148f, 22.2834f, 138.9487f, iLocal_399, joaat("weapon_pistol"), 200, 1);
				Local_1568[1 /*18*/] = func_215(iLocal_328, 46.7417f, -1873.098f, 21.735f, 146.0804f, iLocal_399, joaat("weapon_microsmg"), 115, 1);
				func_213(&Local_1568, 0);
				func_612(&Local_1495, 20, 40);
				func_612(&Local_1568, 20, 40);
				func_611(&Local_1495);
				func_611(&Local_1568);
				func_577(Local_1495[0 /*18*/], 1, 1, 1, 45, 1);
				func_573(Local_1495[0 /*18*/], Local_3246[50 /*12*/].f_1, 2f, 0);
				func_577(Local_1495[0 /*18*/], 1, 1, 1, 45, 1);
				func_573(Local_1568[1 /*18*/], Local_3246[49 /*12*/].f_1, 2f, 0);
				func_597(&Local_3027, 4);
				func_597(&Local_3100, 4);
				*uParam0 = 1;
			}
		}
	}
	else
	{
		if (!iLocal_4043[7] && func_557() < 3)
		{
			iVar0 = 0;
			while (iVar0 <= (Local_3027 - 1))
			{
				func_594(&(Local_3027[iVar0 /*36*/]), 0);
				func_594(&(Local_3100[iVar0 /*36*/]), 0);
				iVar0++;
			}
		}
		func_206(&Local_1495, 0, 1, 0, 1, 1);
		func_206(&Local_1568, 0, 1, 0, 1, 1);
		func_602(&Local_1495, &(iLocal_4043[19]));
		func_602(&Local_1568, &(iLocal_4043[20]));
		func_203(&Local_1495, iLocal_933);
		func_203(&Local_1568, iLocal_933);
	}
}

void func_611(var uParam0)//Position - 0x69C56
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*18*/]))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0 /*18*/], 42, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0 /*18*/], 50, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0 /*18*/], 28, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((*uParam0)[iVar0 /*18*/], 3000f, 0);
		}
		iVar0++;
	}
}

void func_612(var uParam0, int iParam1, int iParam2)//Position - 0x69CBC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*18*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0 /*18*/]))
			{
				func_126((*uParam0)[iVar0 /*18*/], iParam1, iParam2, -687903391);
			}
		}
		iVar0++;
	}
}

int func_613()//Position - 0x69D06
{
	if ((func_554() + func_614()) < 2 || func_558(Local_955))
	{
		return 1;
	}
	return 0;
}

int func_614()//Position - 0x69D30
{
	return ((func_553(&Local_1752) + func_553(&Local_1771)) + func_553(&Local_1790));
}

void func_615(var uParam0)//Position - 0x69D4F
{
	switch (*uParam0)
	{
		case 0:
			if (func_197(Local_401, func_908(1), func_908(2), 14.23632f, -1913.274f, 20.46947f, 70.22104f, -1849.265f, 24.78099f, 12f))
			{
				*uParam0++;
			}
			break;
		
		case 1:
			Local_1902[0 /*18*/] = func_215(iLocal_328, 21.69f, -1898.34f, 21.96f, 313.933f, iLocal_399, joaat("weapon_assaultrifle"), 150, 1);
			func_213(&Local_1902, 0);
			func_628(Local_1902[0 /*18*/], 28.59f, -1889.94f, 21.48f, 2f, 0, 66.79f, -1885.01f, 22.46f, func_124(Local_1902[0 /*18*/], 1862763509, 0, 0), 0, 1, 0.25f, 0.25f, 0, 1120403456, 0);
			func_577(Local_1902[0 /*18*/], 2, 2, 0, 13, 1);
			func_576(Local_1902[0 /*18*/], 24.07501f, -1891.494f, 20.61198f, 42.58776f, -1869.529f, 24.83541f, 14f, 0);
			func_126(Local_1902[0 /*18*/], 5, 80, -957453492);
			*uParam0++;
			break;
		
		case 2:
			GlobalFunc_10708(116, 3);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1902[0 /*18*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1902[0 /*18*/]))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1902[0 /*18*/], 21.02264f, -1899.346f, 21.97008f, 23.63083f, -1896.15f, 24.47103f, 2.5f, 0, 1, 0))
					{
						*uParam0++;
					}
				}
			}
			else
			{
				*uParam0++;
			}
			break;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 22.70566f, -1897.29f, 21.97008f, 21.01845f, -1899.358f, 24.47008f, 2.5f, 0, 1, 0))
	{
		GlobalFunc_10708(116, 3);
	}
	func_206(&Local_1902, 0, 1, 0, 1, 1);
	func_602(&Local_1902, &(iLocal_4043[33]));
	func_203(&Local_1902, iLocal_933);
}













void func_628(int iParam0, struct<3> Param1, float fParam4, int iParam5, struct<3> Param6, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, float fParam15, int iParam16)//Position - 0x6E181
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		if (iParam5 == 1)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, Param6, fParam4, iParam10, iParam12, iParam13, iParam14, iParam16, 0, -957453492);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, ENTITY::GET_ENTITY_COORDS(iParam9, 1), fParam4, iParam10, iParam12, iParam13, iParam14, iParam16, 0, -957453492);
			}
		}
		else if (iParam5 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param1, Param6, fParam4, iParam10, iParam12, iParam13, iParam14, 0, 0, -957453492);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, iParam9, fParam4, iParam10, iParam12, iParam13, iParam14, 0, 0, -957453492, 20000);
			}
		}
		if (iParam11 == 1)
		{
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
		}
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam15, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

void func_629(var uParam0)//Position - 0x6E26C
{
	switch (*uParam0)
	{
		case 0:
			if (func_197(Local_401, func_908(1), func_908(2), 58.92709f, -1922.503f, 19.63923f, 78.29418f, -1898.68f, 23.841f, 20f))
			{
				*uParam0++;
			}
			break;
		
		case 1:
			Local_1921[0 /*18*/] = func_215(iLocal_328, 45.6679f, -1922.823f, 20.5738f, 316.853f, iLocal_399, joaat("weapon_carbinerifle"), 200, 1);
			func_213(&Local_1921, 0);
			func_604(Local_1921[0 /*18*/], Local_3246[62 /*12*/].f_1, 2f, 3000, 1, 1, 1, 200f, 1, 20000, 1048576000, 0);
			func_577(Local_1921[0 /*18*/], 1, 2, 1, 0, 1);
			func_576(Local_1921[0 /*18*/], 52.30234f, -1920.344f, 19.5738f, 50.69417f, -1919.029f, 23.5738f, 2.5f, 0);
			func_571(Local_1921[0 /*18*/], 1, 1, 0, 0, 12f, 0, 0f, 5f, 6f);
			func_126(Local_1921[0 /*18*/], 8, 150, -957453492);
			*uParam0++;
			break;
		
		case 2:
			func_206(&Local_1921, 0, 1, 0, 1, 1);
			func_203(&Local_1921, iLocal_933);
			break;
	}
}

void func_630(var uParam0)//Position - 0x6E3B9
{
	float fVar0;
	
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(Local_2086[4 /*13*/].f_6);
			if (STREAMING::HAS_MODEL_LOADED(Local_2086[4 /*13*/].f_6))
			{
				Local_2086[4 /*13*/] = func_217(&(Local_2086[4 /*13*/]), 2000, 1, 1, 0, 113);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2086[4 /*13*/].f_6);
				*uParam0++;
			}
			break;
		
		case 1:
			if (func_558(Local_969))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2086[4 /*13*/].f_7, sLocal_311);
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2086[4 /*13*/].f_7, sLocal_311))
			{
				Local_1865[0 /*18*/] = func_214(iLocal_328, Local_2086[4 /*13*/], -1, iLocal_399, joaat("weapon_pistol"), 125);
				Local_1865[1 /*18*/] = func_214(iLocal_328, Local_2086[4 /*13*/], 2, iLocal_399, joaat("weapon_microsmg"), 150);
				func_213(&Local_1865, 0);
				if (!PED::IS_PED_INJURED(Local_1865[0 /*18*/]))
				{
					PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Local_1865[0 /*18*/], 1);
				}
				func_128(Local_2086[4 /*13*/], sLocal_311, 1.15f, 0, 250f, 0, 0, 1);
				VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_2086[4 /*13*/], 1);
				AUDIO::START_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_CAR_ARRIVE_CRASH");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[4 /*13*/], 0))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2086[4 /*13*/], "FRANKLIN_1_SHOOTOUT_CAR_CRASH_Group", 0);
				}
				*uParam0++;
			}
			break;
		
		case 3:
			if (func_631(Local_2086[4 /*13*/], &fVar0, &(Local_2086[4 /*13*/].f_10), 1))
			{
				if (fVar0 > 80f || Local_2086[4 /*13*/].f_10 == 1)
				{
					if (!PED::IS_PED_INJURED(Local_1865[0 /*18*/]))
					{
						PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Local_1865[0 /*18*/], 1);
						ENTITY::SET_ENTITY_HEALTH(Local_1865[0 /*18*/], 0);
						Local_2086[4 /*13*/].f_10 = 1;
					}
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2086[4 /*13*/]);
					VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2086[4 /*13*/].f_7, sLocal_311);
					func_605(Local_1865[1 /*18*/], 1120403456, 0);
					func_577(Local_1865[1 /*18*/], 1, 2, 1, -1, 1);
					func_573(Local_1865[1 /*18*/], 28.82f, -1882f, 21.59f, 3f, 0);
					func_126(Local_1865[1 /*18*/], 5, 60, -687903391);
					AUDIO::_0x9D3AF56E94C9AE98(Local_2086[4 /*13*/], 10000f);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2086[4 /*13*/], 50f);
					AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_CAR_ARRIVE_CRASH");
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_2086[4 /*13*/], 0);
					*uParam0++;
				}
			}
			break;
	}
	func_592(Local_2086[4 /*13*/], 0, -0.85f, 1.55f, -0.15f, 1f, 0, 1, -0.85f, 2.15f, 0.15f, 100f, 100f);
	func_592(Local_2086[4 /*13*/], 1, 0.85f, 1.55f, -0.15f, 1f, 0, 1, 1f, 0.95f, 0.15f, 100f, 100f);
	func_592(Local_2086[4 /*13*/], 4, -0.85f, -1.55f, -0.15f, 1f, 0, 1, -1f, -2.1f, 0.15f, 100f, 100f);
	func_592(Local_2086[4 /*13*/], 5, 0.85f, -1.55f, -0.15f, 1f, 0, 1, 0.95f, -2.15f, 0.15f, 100f, 100f);
	func_206(&Local_1865, 0, 1, 0, 1, 1);
	func_602(&Local_1865, &(iLocal_4043[32]));
	func_203(&Local_1865, iLocal_933);
}

int func_631(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x6E712
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				*uParam1 = func_575(iParam0);
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (PED::IS_PED_INJURED(iVar0))
					{
						*uParam2 = 1;
						if (iParam3 == 1)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
						}
					}
				}
				return 1;
			}
			else if (*uParam2 == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_632(var uParam0, int iParam1)//Position - 0x6E784
{
	if (*uParam0 == 0)
	{
		if (iParam1 == 1)
		{
			if (func_633())
			{
				Local_1439[0 /*18*/] = func_215(iLocal_328, 24.09f, -1894.78f, 21.61f, 247.1808f, iLocal_399, joaat("weapon_assaultrifle"), 200, 1);
				func_213(&Local_1439, 0);
				Local_1458[0 /*18*/] = func_215(iLocal_328, 44.57f, -1870.54f, 21.92f, 138.3147f, iLocal_399, joaat("weapon_microsmg"), 125, 1);
				Local_1458[1 /*18*/] = func_215(iLocal_328, 43.22f, -1865.36f, 21.83f, 138.3147f, iLocal_399, joaat("weapon_pistol"), 200, 1);
				func_213(&Local_1458, 0);
				func_612(&Local_1439, 20, 40);
				func_612(&Local_1458, 20, 40);
				func_611(&Local_1439);
				func_611(&Local_1458);
				*uParam0 = 1;
			}
		}
	}
	else
	{
		func_206(&Local_1439, 0, 1, 0, 1, 1);
		func_206(&Local_1458, 0, 1, 0, 1, 1);
		func_602(&Local_1439, &(iLocal_4043[17]));
		func_602(&Local_1458, &(iLocal_4043[18]));
		func_203(&Local_1439, iLocal_933);
		func_203(&Local_1458, iLocal_933);
	}
}

int func_633()//Position - 0x6E8A5
{
	if (func_566() < 3 || func_558(Local_948))
	{
		return 1;
	}
	return 0;
}

void func_634(var uParam0, int iParam1)//Position - 0x6E8CA
{
	if (*uParam0 == 0)
	{
		if (iParam1 == 1)
		{
			if (func_635())
			{
				Local_1347[0 /*18*/] = func_215(iLocal_328, 50.75f, -1912.24f, 20.63f, 283.2224f, iLocal_399, joaat("weapon_pistol"), 150, 1);
				Local_1347[1 /*18*/] = func_215(iLocal_328, 38.82f, -1911.66f, 20.95f, 311.4131f, iLocal_399, joaat("weapon_microsmg"), 200, 1);
				Local_1347[2 /*18*/] = func_215(iLocal_328, 46.45f, -1913.46f, 20.64f, 310.4631f, iLocal_399, joaat("weapon_pistol"), 125, 1);
				func_213(&Local_1347, 0);
				Local_1402[0 /*18*/] = func_215(iLocal_328, 86.95f, -1882.96f, 22.22f, 187.357f, iLocal_399, joaat("weapon_microsmg"), 125, 1);
				Local_1402[1 /*18*/] = func_215(iLocal_328, 81.71f, -1894.12f, 21.29f, 187.5137f, iLocal_399, joaat("weapon_microsmg"), 150, 1);
				func_213(&Local_1402, 0);
				func_612(&Local_1347, 5, 80);
				func_612(&Local_1402, 5, 80);
				func_577(Local_1402[0 /*18*/], 1, 1, 1, 0, 1);
				func_576(Local_1402[0 /*18*/], 71.7599f, -1899.529f, 19.4669f, 83.36124f, -1909.627f, 23.12456f, 8f, 0);
				func_577(Local_1402[1 /*18*/], 1, 1, 1, 0, 1);
				func_576(Local_1402[1 /*18*/], 71.7599f, -1899.529f, 19.4669f, 83.36124f, -1909.627f, 23.12456f, 8f, 0);
				func_611(&Local_1347);
				func_611(&Local_1402);
				*uParam0 = 1;
			}
		}
	}
	else
	{
		func_206(&Local_1347, 0, 1, 0, 1, 1);
		func_206(&Local_1402, 0, 1, 0, 1, 1);
		func_602(&Local_1347, &(iLocal_4043[15]));
		func_602(&Local_1402, &(iLocal_4043[16]));
		func_203(&Local_1347, iLocal_933);
		func_203(&Local_1402, iLocal_933);
	}
}

int func_635()//Position - 0x6EABD
{
	if (func_558(Local_934) || func_563() < 3)
	{
		return 1;
	}
	return 0;
}

void func_636(var uParam0, int iParam1)//Position - 0x6EAE2
{
	if (*uParam0 == 0)
	{
		STREAMING::REQUEST_MODEL(iLocal_328);
		STREAMING::REQUEST_MODEL(Local_2086[0 /*13*/].f_6);
		VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2086[0 /*13*/].f_7, sLocal_311);
		if ((STREAMING::HAS_MODEL_LOADED(iLocal_328) && STREAMING::HAS_MODEL_LOADED(Local_2086[0 /*13*/].f_6)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2086[0 /*13*/].f_7, sLocal_311))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1273[0 /*18*/]))
			{
				Local_1273[0 /*18*/] = func_215(iLocal_328, 73.5813f, -1944.377f, 19.8115f, 304.0889f, iLocal_399, joaat("weapon_microsmg"), 125, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1273[1 /*18*/]))
			{
				Local_1273[1 /*18*/] = func_215(iLocal_328, 81.7639f, -1904.295f, 20.5794f, 142.1008f, iLocal_399, joaat("weapon_microsmg"), 125, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1273[2 /*18*/]))
			{
				Local_1273[2 /*18*/] = func_215(iLocal_328, 79.4749f, -1908.114f, 20.3492f, 169.8566f, iLocal_399, joaat("weapon_microsmg"), 125, 1);
			}
			if (*iParam1 == 0)
			{
				func_213(&Local_1273, 0);
				*iParam1 = 1;
			}
			if (iLocal_931 == 0)
			{
				func_628(Local_1273[0 /*18*/], 81.91f, -1942.41f, 19.85f, 2f, 0, Local_363, 0, 1, 1, 1056964608, 1056964608, 1, 1120403456, 0);
			}
			func_577(Local_1273[0 /*18*/], 0, 1, 1, 13, 1);
			func_126(Local_1273[0 /*18*/], 3, 60, -957453492);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1273[1 /*18*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1273[1 /*18*/]))
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_1273[1 /*18*/], 1);
					func_573(Local_1273[1 /*18*/], 89.92f, -1918.83f, 19.63f, 3f, 0);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_1273[1 /*18*/], 0f, 0.5f);
					func_126(Local_1273[1 /*18*/], 3, 125, -957453492);
					PED::SET_COMBAT_FLOAT(Local_1273[1 /*18*/], 2, 100f);
					PED::SET_COMBAT_FLOAT(Local_1273[1 /*18*/], 13, 100f);
					PED::SET_COMBAT_FLOAT(Local_1273[1 /*18*/], 5, 0.5f);
					PED::SET_COMBAT_FLOAT(Local_1273[1 /*18*/], 8, 0f);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[1 /*18*/], 5, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[1 /*18*/], 29, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[1 /*18*/], 30, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[1 /*18*/], 23, 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1273[1 /*18*/], 150f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1273[1 /*18*/], 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1273[2 /*18*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1273[2 /*18*/]))
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_1273[2 /*18*/], 1);
					func_573(Local_1273[2 /*18*/], 86.32f, -1918.05f, 19.69f, 3f, 0);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_1273[2 /*18*/], 0f, 0.5f);
					func_126(Local_1273[2 /*18*/], 3, 125, -957453492);
					PED::SET_COMBAT_FLOAT(Local_1273[2 /*18*/], 2, 100f);
					PED::SET_COMBAT_FLOAT(Local_1273[2 /*18*/], 13, 100f);
					PED::SET_COMBAT_FLOAT(Local_1273[2 /*18*/], 5, 0.5f);
					PED::SET_COMBAT_FLOAT(Local_1273[2 /*18*/], 8, 0f);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[2 /*18*/], 5, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[2 /*18*/], 29, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[2 /*18*/], 30, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[2 /*18*/], 23, 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1273[2 /*18*/], 150f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1273[2 /*18*/], 0);
				}
			}
			Local_1328[0 /*18*/] = func_215(iLocal_328, 80.4945f, -1897.319f, 21.0409f, 146.6319f, iLocal_399, joaat("weapon_pistol"), 150, 1);
			func_213(&Local_1328, 0);
			func_577(Local_1328[0 /*18*/], 2, 0, 1, 13, 1);
			func_126(Local_1328[0 /*18*/], 5, 40, -687903391);
			func_628(Local_1328[0 /*18*/], 85.9064f, -1929.019f, 19.6911f, 2f, 1, 85.9064f, -1929.019f, 19.6911f, 0, 1, 1, 4f, 1056964608, 1, 1120403456, 0);
			Local_2086[0 /*13*/] = func_217(&(Local_2086[0 /*13*/]), 1500, 1, 1, 0, 0);
			Local_1714[0 /*18*/] = func_214(iLocal_328, Local_2086[0 /*13*/], -1, iLocal_399, joaat("weapon_microsmg"), 200);
			func_213(&Local_1714, 0);
			Local_1733[0 /*18*/] = func_214(iLocal_328, Local_2086[0 /*13*/], 0, iLocal_399, joaat("weapon_microsmg"), 115);
			func_213(&Local_1733, 0);
			Local_1733[0 /*18*/].f_15 = 0;
			Local_1733[0 /*18*/].f_12 = 0;
			func_126(Local_1714[0 /*18*/], 5, 40, -687903391);
			func_126(Local_1733[0 /*18*/], 5, 40, -687903391);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_2086[0 /*13*/], 1, 1);
			VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_2086[0 /*13*/], 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_2086[0 /*13*/], Local_2086[0 /*13*/].f_7, sLocal_311, 1);
			VEHICLE::SET_PLAYBACK_SPEED(Local_2086[0 /*13*/], 1.15f);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_2086[0 /*13*/], 1);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2086[0 /*13*/], "FRANKLIN_1_SHOOTOUT_CAR_01_Group", 0);
			AUDIO::START_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_CAR_ARRIVE_1");
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2086[0 /*13*/].f_6);
			*uParam0 = 1;
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1273[0 /*18*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1273[0 /*18*/]))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1273[0 /*18*/]))
				{
					GlobalFunc_5122(Local_1273[0 /*18*/], "GENERIC_WAR_CRY", 10);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_1273[0 /*18*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_1273[0 /*18*/], 0);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1733[0 /*18*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1733[0 /*18*/]))
			{
				switch (Local_1733[0 /*18*/].f_12)
				{
					case 0:
						if (Local_1733[0 /*18*/].f_15 == 0)
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_517))
							{
								TASK::TASK_DRIVE_BY(Local_1733[0 /*18*/], 0, Local_517, 0f, 0f, 0f, 200f, 75, 1, -753768974);
							}
							Local_1733[0 /*18*/].f_15 = 1;
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2086[0 /*13*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[0 /*13*/], 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2086[0 /*13*/]))
							{
								if (func_575(Local_2086[0 /*13*/]) > 95f)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[0 /*13*/], 0))
									{
										AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_2086[0 /*13*/], 0);
									}
									Local_1733[0 /*18*/].f_15 = 0;
									Local_1733[0 /*18*/].f_12++;
								}
							}
						}
						break;
					
					case 1:
						if (Local_1733[0 /*18*/].f_15 == 0)
						{
							func_605(Local_1733[0 /*18*/], 100f, PLAYER::PLAYER_PED_ID());
							func_126(Local_1733[0 /*18*/], 5, 50, -687903391);
							Local_1733[0 /*18*/].f_15 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2086[0 /*13*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[0 /*13*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2086[0 /*13*/]))
			{
				if (func_575(Local_2086[0 /*13*/]) > 96f)
				{
					if (Local_1714[0 /*18*/].f_15 == 0)
					{
						func_605(Local_1714[0 /*18*/], 100f, PLAYER::PLAYER_PED_ID());
						func_571(Local_1714[0 /*18*/], 1, 0, 0, 0, 10f, 0, 0f, 1f, 5f);
						func_126(Local_1714[0 /*18*/], 5, 95, -687903391);
						Local_1714[0 /*18*/].f_15 = 1;
					}
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2086[0 /*13*/]);
					VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2086[0 /*13*/].f_7, sLocal_311);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_2086[0 /*13*/], 0);
				}
			}
		}
		func_206(&Local_1273, 0, 1, 0, 1, 1);
		func_206(&Local_1328, 0, 1, 0, 1, 1);
		func_206(&Local_1714, 0, 1, 0, 1, 1);
		func_206(&Local_1733, 0, 1, 0, 1, 1);
		func_602(&Local_1273, &(iLocal_4043[13]));
		func_602(&Local_1328, &(iLocal_4043[14]));
		func_602(&Local_1714, &(iLocal_4043[24]));
		func_602(&Local_1733, &(iLocal_4043[25]));
		func_203(&Local_1273, iLocal_933);
		func_203(&Local_1328, iLocal_933);
		func_203(&Local_1714, iLocal_933);
		func_203(&Local_1733, iLocal_933);
	}
}

void func_637()//Position - 0x6F292
{
	if (!iLocal_4043[4])
	{
		if (func_638())
		{
			STREAMING::REQUEST_MODEL(Local_2086[1 /*13*/].f_6);
			STREAMING::REQUEST_MODEL(Local_2086[2 /*13*/].f_6);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2086[1 /*13*/].f_7, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2086[2 /*13*/].f_7, sLocal_311);
			if (((STREAMING::HAS_MODEL_LOADED(Local_2086[1 /*13*/].f_6) && STREAMING::HAS_MODEL_LOADED(Local_2086[2 /*13*/].f_6)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2086[1 /*13*/].f_7, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2086[2 /*13*/].f_7, sLocal_311))
			{
				Local_2086[1 /*13*/] = func_217(&(Local_2086[1 /*13*/]), 1500, 1, 1, 145, 105);
				Local_1752[0 /*18*/] = func_214(iLocal_328, Local_2086[1 /*13*/], -1, iLocal_399, joaat("weapon_microsmg"), 200);
				func_213(&Local_1752, 0);
				Local_1771[0 /*18*/] = func_214(iLocal_328, Local_2086[1 /*13*/], 0, iLocal_399, joaat("weapon_microsmg"), 115);
				func_213(&Local_1771, 0);
				Local_1771[0 /*18*/].f_15 = 0;
				Local_1771[0 /*18*/].f_12 = 0;
				Local_2086[2 /*13*/] = func_217(&(Local_2086[2 /*13*/]), 1500, 1, 1, 10, 10);
				Local_1790[0 /*18*/] = func_214(iLocal_328, Local_2086[2 /*13*/], -1, iLocal_399, joaat("weapon_microsmg"), 200);
				func_213(&Local_1790, 0);
				Local_1790[1 /*18*/].f_15 = 0;
				Local_1790[1 /*18*/].f_12 = 0;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[1 /*13*/], 0))
				{
					VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_2086[1 /*13*/], 1);
					func_128(Local_2086[1 /*13*/], sLocal_311, 1.05f, 0, 500f, 0, 0, 1);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2086[1 /*13*/], "FRANKLIN_1_SHOOTOUT_CAR_02_Group", 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[2 /*13*/], 0))
				{
					VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_2086[2 /*13*/], 1);
					func_128(Local_2086[2 /*13*/], sLocal_311, 0.95f, 0, 0, 0, 0, 1);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2086[2 /*13*/], "FRANKLIN_1_SHOOTOUT_CAR_02_Group", 0);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2086[1 /*13*/].f_6);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2086[2 /*13*/].f_6);
				iLocal_4043[4] = 1;
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1771[0 /*18*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1771[0 /*18*/]))
			{
				switch (Local_1771[0 /*18*/].f_12)
				{
					case 0:
						if (Local_1771[0 /*18*/].f_15 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2086[1 /*13*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[1 /*13*/], 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2086[1 /*13*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2086[1 /*13*/]) > 3750f)
									{
										PED::SET_PED_SEEING_RANGE(Local_1771[0 /*18*/], 200f);
										PED::SET_PED_HEARING_RANGE(Local_1771[0 /*18*/], 200f);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1771[0 /*18*/], 2, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1771[0 /*18*/], 1, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1771[0 /*18*/], 3, 0);
										func_126(Local_1771[0 /*18*/], 3, 80, -957453492);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1771[0 /*18*/], 200f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1771[0 /*18*/], 0);
										Local_1771[0 /*18*/].f_15 = 1;
									}
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2086[1 /*13*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[1 /*13*/], 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2086[1 /*13*/]))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2086[1 /*13*/]) > 5600f)
								{
									Local_1771[0 /*18*/].f_15 = 0;
									Local_1771[0 /*18*/].f_12++;
								}
							}
						}
						break;
					
					case 1:
						if (Local_1771[0 /*18*/].f_15 == 0)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1771[0 /*18*/], 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1771[0 /*18*/], 3, 1);
							AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_CAR_ARRIVE_1");
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[1 /*13*/], 0))
							{
								AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_2086[1 /*13*/], 0);
							}
							Local_1771[0 /*18*/].f_15 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1752[0 /*18*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1752[0 /*18*/]))
			{
				switch (Local_1752[0 /*18*/].f_12)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_EXIST(Local_2086[1 /*13*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[1 /*13*/], 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2086[1 /*13*/]))
							{
								if (func_575(Local_2086[1 /*13*/]) > 75f)
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2086[1 /*13*/]);
									VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2086[1 /*13*/].f_7, sLocal_311);
									Local_1752[0 /*18*/].f_15 = 0;
									Local_1752[0 /*18*/].f_12++;
								}
							}
						}
						break;
					
					case 1:
						if (Local_1752[0 /*18*/].f_15 == 0)
						{
							func_126(Local_1752[0 /*18*/], 5, 75, -687903391);
							func_595(Local_1752[0 /*18*/], Local_2086[1 /*13*/], 61.459f, -1905.011f, 20.6796f);
							AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_CAR_ARRIVE_1");
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[1 /*13*/], 0))
							{
								AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_2086[1 /*13*/], 0);
							}
							Local_1752[0 /*18*/].f_15 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1790[0 /*18*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1790[0 /*18*/]))
			{
				switch (Local_1790[0 /*18*/].f_12)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_EXIST(Local_2086[2 /*13*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[2 /*13*/], 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2086[2 /*13*/]))
							{
								if (func_575(Local_2086[2 /*13*/]) > 95f)
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2086[2 /*13*/]);
									VEHICLE::REMOVE_VEHICLE_RECORDING(Local_2086[2 /*13*/].f_7, sLocal_311);
									Local_1790[0 /*18*/].f_15 = 0;
									Local_1790[0 /*18*/].f_12++;
								}
							}
						}
						break;
					
					case 1:
						if (Local_1790[0 /*18*/].f_15 == 0)
						{
							func_126(Local_1790[0 /*18*/], 5, 75, -687903391);
							func_595(Local_1790[0 /*18*/], Local_2086[2 /*13*/], 0f, 0f, 0f);
							AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_CAR_ARRIVE_1");
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[2 /*13*/], 0))
							{
								AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_2086[2 /*13*/], 0);
							}
							Local_1790[0 /*18*/].f_15 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1790[1 /*18*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1790[1 /*18*/]))
			{
				switch (Local_1790[1 /*18*/].f_12)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_EXIST(Local_2086[2 /*13*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[2 /*13*/], 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2086[2 /*13*/]))
							{
								if (func_575(Local_2086[2 /*13*/]) > 65f)
								{
									Local_1790[1 /*18*/].f_15 = 0;
									Local_1790[1 /*18*/].f_12++;
								}
							}
						}
						break;
					
					case 1:
						if (Local_1790[1 /*18*/].f_15 == 0)
						{
							func_126(Local_1790[1 /*18*/], 5, 75, -687903391);
							func_595(Local_1790[1 /*18*/], Local_2086[2 /*13*/], 0f, 0f, 0f);
							AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_CAR_ARRIVE_1");
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[2 /*13*/], 0))
							{
								AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_2086[2 /*13*/], 0);
							}
							Local_1790[1 /*18*/].f_15 = 1;
						}
						break;
					}
				}
		}
		func_206(&Local_1752, 0, 1, 0, 1, 1);
		func_206(&Local_1771, 0, 1, 0, 1, 1);
		func_206(&Local_1790, 0, 1, 0, 1, 1);
		func_203(&Local_1752, iLocal_933);
		func_203(&Local_1771, iLocal_933);
		func_203(&Local_1790, iLocal_933);
	}
}

int func_638()//Position - 0x6F987
{
	if (func_558(Local_941) && (func_563() + func_566()) < 8)
	{
		return 1;
	}
	return 0;
}

void func_639()//Position - 0x6F9B1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_2152 - 1))
	{
		func_592(Local_2152[iVar0 /*13*/], 0, -0.85f, 1.55f, -0.15f, 2f, 0, 1, -0.85f, 2.15f, 0.15f, 100f, 100f);
		func_592(Local_2152[iVar0 /*13*/], 1, 0.85f, 1.55f, -0.15f, 2f, 0, 1, 1f, 0.95f, 0.15f, 100f, 100f);
		func_592(Local_2152[iVar0 /*13*/], 4, -0.85f, -1.55f, -0.15f, 2f, 0, 1, -1f, -2.1f, 0.15f, 100f, 100f);
		func_592(Local_2152[iVar0 /*13*/], 5, 0.85f, -1.55f, -0.15f, 2f, 0, 1, 0.95f, -2.15f, 0.15f, 100f, 100f);
		func_640(Local_2152[iVar0 /*13*/], 100);
		iVar0++;
	}
}

void func_640(int iParam0, int iParam1)//Position - 0x6FAB0
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (ENTITY::GET_ENTITY_HEALTH(iParam0) == 0)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, -100f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, -100f);
				}
				else if (ENTITY::GET_ENTITY_HEALTH(iParam0) < iParam1)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, -100f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, -100f);
					ENTITY::SET_ENTITY_HEALTH(iParam0, 100);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
				}
			}
		}
	}
}

void func_641(float fParam0, float fParam1, var uParam2, float fParam3)//Position - 0x6FB27
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam2 - 1))
	{
		if ((uParam2[iVar0 /*12*/])->f_9 == 1)
		{
			if ((((uParam2[iVar0 /*12*/])->f_8 - fParam0) - fParam3) < 0f || (((uParam2[iVar0 /*12*/])->f_8 - fParam1) - fParam3) < 0f)
			{
				(uParam2[iVar0 /*12*/])->f_9 = 0;
			}
		}
		iVar0++;
	}
}

void func_642(int iParam0)//Position - 0x6FB86
{
	switch (*iParam0)
	{
		case 0:
			if (func_590(func_908(1), func_908(2), Local_401, 31.56888f, -1875.896f, 20.77482f, -27.92671f, -1827.226f, 28.93094f, 48f))
			{
				GlobalFunc_2943(&(Local_3173[0 /*8*/]), 0);
				GlobalFunc_2943(&(Local_3173[1 /*8*/]), 0);
				GlobalFunc_2943(&(Local_3173[2 /*8*/]), 0);
				*iParam0++;
			}
			break;
		
		case 1:
			if (func_590(func_908(1), func_908(2), Local_401, 16.50817f, -1865.456f, 21.56746f, -39.96051f, -1818.817f, 29.48355f, 48f))
			{
				GlobalFunc_2943(&(Local_3173[3 /*8*/]), 0);
				GlobalFunc_2943(&(Local_3173[4 /*8*/]), 0);
				*iParam0++;
			}
			break;
		
		case 2:
			if (func_590(func_908(1), func_908(2), Local_401, -1.201015f, -1851.074f, 22.52868f, -39.96051f, -1818.817f, 29.48355f, 56f))
			{
				func_588(&Local_3173, 0);
				func_137(&Local_2086, 0, 0);
				func_137(&Local_2152, 0, 0);
				func_108(&Local_517, 0, 0);
				*iParam0++;
			}
			break;
	}
}

void func_643(int iParam0)//Position - 0x6FCC8
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	
	if (!func_102("F1_FLOW"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_908(1)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_908(1)))
			{
				if (func_644(func_908(1)) < 0.475f)
				{
					if (GlobalFunc_2521(15000, Local_459.f_10))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_FLOW", 8, 0, 0, 0))
								{
									Local_459.f_10 = MISC::GET_GAME_TIMER();
									Local_459.f_11++;
									if (Local_459.f_11 == 6)
									{
										func_98("F1_FLOW", 1);
									}
								}
							}
						}
						else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_908(1)))
						{
							GlobalFunc_5653(func_908(1), "FKN1_GSAA", "FRANKLIN", 6);
							Local_459.f_10 = MISC::GET_GAME_TIMER();
							Local_459.f_11++;
							if (Local_459.f_11 == 6)
							{
								func_98("F1_FLOW", 1);
							}
						}
					}
				}
			}
		}
	}
	if (!func_102("F1_TLOW"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_908(2)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_908(2)))
			{
				if (func_644(func_908(2)) < 0.475f)
				{
					if (GlobalFunc_2521(15000, Local_430.f_10))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_TLOW", 8, 0, 0, 0))
								{
									Local_430.f_10 = MISC::GET_GAME_TIMER();
									Local_430.f_11++;
									if (Local_430.f_11 == 6)
									{
										func_98("F1_TLOW", 1);
									}
								}
							}
						}
						else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_908(2)))
						{
							GlobalFunc_5653(func_908(2), "FKN1_GTAA", "TREVOR", 6);
							Local_430.f_10 = MISC::GET_GAME_TIMER();
							Local_430.f_11++;
							if (Local_430.f_11 == 6)
							{
								func_98("F1_TLOW", 1);
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_1059 == 1 && iLocal_1060 == 0)
	{
		switch (GlobalFunc_8315())
		{
			case 1:
				if (GlobalFunc_2521(7500, Local_430.f_10))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_HELP1", 8, 0, 0, 0))
							{
								Local_430.f_10 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_908(2)))
						{
							GlobalFunc_5653(func_908(2), "FKN1_KZAA", "TREVOR", 6);
							Local_430.f_10 = MISC::GET_GAME_TIMER();
						}
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_2521(7500, Local_459.f_10))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_FHELP1", 8, 0, 0, 0))
							{
								Local_459.f_10 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_908(1)))
						{
							GlobalFunc_5653(func_908(1), "FKN1_LBAA", "FRANKLIN", 6);
							Local_459.f_10 = MISC::GET_GAME_TIMER();
						}
					}
				}
				break;
			}
	}
	if (!func_102("F1_LLOW"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_401))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_401))
			{
				if (func_644(Local_401) < 0.475f)
				{
					if (GlobalFunc_2521(15000, Local_401.f_10))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LLOW", 8, 0, 0, 0))
								{
									Local_430.f_10 = MISC::GET_GAME_TIMER();
									Local_430.f_11++;
									if (Local_430.f_11 == 4)
									{
										func_98("F1_LLOW", 1);
									}
								}
							}
						}
						else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_401))
						{
							GlobalFunc_5653(Local_401, "FKN1_GRAA", "LAMAR", 6);
							Local_401.f_10 = MISC::GET_GAME_TIMER();
							Local_401.f_11++;
							if (Local_401.f_11 == 4)
							{
								func_98("F1_LLOW", 1);
							}
						}
					}
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (iLocal_4043[0] == 1)
			{
				if (!func_102("F1_GSESCG"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_GSESCG", 7, 0, 0, 0))
							{
								func_98("F1_GSESCG", 1);
							}
						}
					}
				}
				else if (!func_102("F1_GSVIW"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_GSVIW", 7, 0, 0, 0))
							{
								func_98("F1_GSVIW", 1);
								iLocal_908 = (5000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
								iLocal_907 = MISC::GET_GAME_TIMER();
								iLocal_903 = 1;
								iLocal_895 = MISC::GET_GAME_TIMER();
								*iParam0++;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_4043[1] == 0)
			{
				if (!func_102("F1_BALL7D"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2086[1 /*13*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2086[1 /*13*/], 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2086[1 /*13*/]))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2086[1 /*13*/]) > 3000f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_1771[0 /*18*/]))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_1771[0 /*18*/]))
										{
											if (PED::IS_PED_IN_COMBAT(Local_1771[0 /*18*/], 0))
											{
												if (!GlobalFunc_5172(&Local_704, 1))
												{
													GlobalFunc_173(&uLocal_729, 7, Local_1771[0 /*18*/], sLocal_310, 0, 1);
													if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_BALL7D", 7, 0, 0, 0))
													{
														func_98("F1_BALL7D", 1);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!func_102("F1_ROLL"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2086[4 /*13*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2086[4 /*13*/]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2086[4 /*13*/]))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_2086[4 /*13*/]) > 2000f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_401))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_401))
										{
											if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_401, Local_2086[4 /*13*/]))
											{
												if (!GlobalFunc_5172(&Local_704, 1))
												{
													if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_ROLL", 7, 0, 0, 0))
													{
														func_98("F1_ROLL", 1);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!func_102("F1_LSNIPE_3"))
				{
					if (iLocal_926 == 1)
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LSNIPE", 7, 0, 0, 0))
							{
								iLocal_925++;
								iLocal_895 = MISC::GET_GAME_TIMER();
								iLocal_926 = 0;
								if (iLocal_925 >= 3)
								{
									func_98("F1_LSNIPE_3", 1);
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_488))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_488))
					{
						switch (Local_488.f_26)
						{
							case 4:
								if (func_102("FRA1_ESCGSF") || func_102("FRA1_ESCGST"))
								{
									if (!func_102("F1_LCGO") && !func_102("F1_FCGO"))
									{
										if (Local_488.f_10 == 0)
										{
											Local_488.f_9 = 250;
											Local_488.f_10 = MISC::GET_GAME_TIMER();
										}
										else if (GlobalFunc_2521(Local_488.f_9, Local_488.f_10))
										{
											switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
											{
												case 0:
													if (!GlobalFunc_111())
													{
														if (!GlobalFunc_5172(&Local_704, 1))
														{
															if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCGO", 7, 0, 0, 0))
															{
																Local_488.f_9 = 1250;
																Local_488.f_10 = MISC::GET_GAME_TIMER();
																Local_488.f_11++;
																if (Local_488.f_11 == 2)
																{
																	func_98("F1_LCGO", 1);
																}
															}
														}
														else if (!PED::IS_PED_INJURED(Local_401))
														{
															if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_401))
															{
																GlobalFunc_5653(Local_401, "FKN1_CDAA", "LAMAR", 6);
																Local_488.f_9 = 1250;
																Local_488.f_10 = MISC::GET_GAME_TIMER();
																Local_488.f_11++;
																if (Local_488.f_11 == 2)
																{
																	func_98("F1_LCGO", 1);
																}
															}
														}
													}
													break;
												
												case 1:
													if (!GlobalFunc_111())
													{
														if (!GlobalFunc_5172(&Local_704, 1))
														{
															if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_FCGO", 7, 0, 0, 0))
															{
																Local_488.f_9 = 1250;
																Local_488.f_10 = MISC::GET_GAME_TIMER();
																Local_488.f_11++;
																if (Local_488.f_11 == 2)
																{
																	func_98("F1_FCGO", 1);
																}
															}
														}
														else if (!PED::IS_PED_INJURED(func_908(1)))
														{
															if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_908(1)))
															{
																GlobalFunc_5653(func_908(1), "FKN1_CCAA", "FRANKLIN", 6);
																Local_488.f_9 = 1250;
																Local_488.f_10 = MISC::GET_GAME_TIMER();
																Local_488.f_11++;
																if (Local_488.f_11 == 2)
																{
																	func_98("F1_FCGO", 1);
																}
															}
														}
													}
													break;
												}
											}
										}
								}
								break;
							}
						}
				}
				if (iLocal_903 == 1)
				{
					if ((!func_102("F1_LSIREN") && !func_102("F1_TSIREN")) && !func_102("F1_FSIREN"))
					{
						if (iLocal_4043[10] == 1)
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
									{
										case 0:
											StringCopy(&Local_896, "F1_LSIREN", 24);
											break;
										
										case 1:
											if (GlobalFunc_8315() == 1)
											{
												StringCopy(&Local_896, "F1_TSIREN", 24);
											}
											else if (GlobalFunc_8315() == 2)
											{
												StringCopy(&Local_896, "F1_FSIREN", 24);
											}
											break;
									}
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", &Local_896, 7, 0, 0, 0))
									{
										func_98(&Local_896, 1);
										iLocal_895 = MISC::GET_GAME_TIMER();
										iLocal_907 = MISC::GET_GAME_TIMER();
										iLocal_908 = (2000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 1001));
									}
								}
							}
						}
					}
					if (GlobalFunc_2521(6000, iLocal_895))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								if (Local_401.f_17 == 0 && Local_430.f_17 == 0)
								{
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
									{
										case 0:
											switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
											{
												case 0:
													StringCopy(&Local_896, "F1_LCMBT", 24);
													break;
												
												case 1:
													StringCopy(&Local_896, "F1_LMOVE", 24);
													break;
												
												case 2:
													StringCopy(&Local_896, "F1_LMORE", 24);
													break;
											}
											break;
										
										case 1:
											switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
											{
												case 0:
													StringCopy(&Local_896, "F1_FCMBT", 24);
													break;
												
												case 1:
													StringCopy(&Local_896, "F1_FMOVE", 24);
													break;
											}
											break;
										
										case 2:
											switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
											{
												case 0:
													StringCopy(&Local_896, "F1_TCMBT", 24);
													break;
												
												case 1:
													StringCopy(&Local_896, "F1_TMOVE", 24);
													break;
											}
											break;
									}
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", &Local_896, 7, 0, 0, 0))
									{
										iLocal_895 = MISC::GET_GAME_TIMER();
									}
								}
								else
								{
									switch (GlobalFunc_8315())
									{
										case 2:
											switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
											{
												case 0:
													if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCWTA", 7, 0, 0, 0))
													{
														iLocal_895 = MISC::GET_GAME_TIMER();
													}
													break;
												
												case 1:
													if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_FCWTA", 7, 0, 0, 0))
													{
														iLocal_895 = MISC::GET_GAME_TIMER();
													}
													break;
											}
											break;
										
										case 1:
											switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
											{
												case 0:
													if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LCWTA", 7, 0, 0, 0))
													{
														iLocal_895 = MISC::GET_GAME_TIMER();
													}
													break;
												
												case 1:
													if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_TCWTA", 7, 0, 0, 0))
													{
														iLocal_895 = MISC::GET_GAME_TIMER();
													}
													break;
											}
											break;
										}
									}
								}
							}
						}
					}
			}
			if (iLocal_4043[11] == 1)
			{
				if (!func_102("F1_BLOCK"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_BLOCK", 7, 0, 0, 0))
							{
								func_98("F1_BLOCK", 1);
							}
						}
					}
					else
					{
						GlobalFunc_4956();
					}
				}
				else if (!func_102("F1_LEFT"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_704, 1))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LEFT", 7, 0, 0, 0))
							{
								func_98("F1_LEFT", 1);
								iLocal_895 = MISC::GET_GAME_TIMER();
								*iParam0++;
							}
						}
					}
				}
			}
			if (GlobalFunc_2521(iLocal_908, iLocal_907))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_704, 1))
					{
						iVar0 = func_124(PLAYER::PLAYER_PED_ID(), iLocal_399, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0);
						if (iVar0 != 0)
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
							{
								case 0:
									iVar1 = 4;
									sVar2 = sLocal_304;
									sVar3 = "F1_BALL1";
									break;
								
								case 1:
									iVar1 = 5;
									sVar2 = sLocal_305;
									sVar3 = "F1_BALL2";
									break;
								
								case 2:
									iVar1 = 6;
									sVar2 = sLocal_306;
									sVar3 = "F1_BALL3";
									break;
								
								case 3:
									iVar1 = 4;
									sVar2 = sLocal_307;
									sVar3 = "F1_BALL4";
									break;
								
								case 4:
									iVar1 = 5;
									sVar2 = sLocal_308;
									sVar3 = "F1_BALL5";
									break;
								
								case 5:
									iVar1 = 6;
									sVar2 = sLocal_309;
									sVar3 = "F1_BALL6";
									break;
								
								case 6:
									iVar1 = 7;
									sVar2 = sLocal_310;
									sVar3 = "F1_BALL7";
									break;
							}
							GlobalFunc_173(&uLocal_729, iVar1, iVar0, sVar2, 0, 1);
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", sVar3, 7, 0, 0, 0))
							{
								iLocal_907 = MISC::GET_GAME_TIMER();
								iLocal_908 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 4001));
							}
						}
						else
						{
							iLocal_907 = MISC::GET_GAME_TIMER();
							iLocal_908 = (4000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_4043[34] == 1)
			{
				if (Local_401.f_18 == 0 && Local_430.f_18 == 0)
				{
					if (GlobalFunc_2521(5000, iLocal_895))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
								{
									case 0:
										StringCopy(&Local_896, "F1_LWAIT", 24);
										break;
									
									case 1:
										if (GlobalFunc_8315() == 1)
										{
											StringCopy(&Local_896, "F1_TWAIT", 24);
										}
										else if (GlobalFunc_8315() == 2)
										{
											StringCopy(&Local_896, "F1_FWAIT", 24);
										}
										break;
								}
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", &Local_896, 7, 0, 0, 0))
								{
									iLocal_895 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				else if (Local_401.f_18 == 1)
				{
					if (Local_401.f_16 == 1)
					{
						if (GlobalFunc_2521(3000, Local_401.f_9))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM02", 7, 0, 0, 0))
									{
										Local_401.f_9 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
					}
					if (!func_102("F1_LHILL"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_LHILL", 7, 0, 0, 0))
								{
									func_98("F1_LHILL", 1);
								}
							}
						}
					}
					if (!func_102("F1_COM03"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_401, -41.72229f, -1866.695f, 28.4905f, -61.97151f, -1891.406f, 4.101753f, 16f, 0, 1, 0))
								{
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM03", 7, 0, 0, 0))
									{
										func_98("F1_COM03", 1);
									}
								}
							}
						}
					}
					if (!func_102("F1_COM04"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								if (!PED::IS_PED_INJURED(Local_401))
								{
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_401))
									{
										if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_401) > 40)
										{
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM04", 7, 0, 0, 0))
											{
												func_98("F1_COM04", 1);
											}
										}
									}
								}
							}
						}
					}
					if (!func_223())
					{
						if (!func_102("F1_COM05"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									if (func_224(&Local_401, 11))
									{
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM05", 7, 0, 0, 0))
										{
											func_98("F1_COM05", 1);
										}
									}
								}
							}
						}
					}
					if (!func_223())
					{
						if (!func_102("F1_COM06"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									if (func_224(&Local_401, 12))
									{
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM06", 7, 0, 0, 0))
										{
											func_98("F1_COM06", 1);
											Local_401.f_8 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
					if (func_224(&Local_401, 12) || func_224(&Local_401, 14))
					{
						if ((!GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_1114[0 /*13*/], 0) && !GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_1114[1 /*13*/], 0)) && !GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_1114[2 /*13*/], 0))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									if (GlobalFunc_2521(5000, Local_401.f_8))
									{
										if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM07", 7, 0, 0, 0))
										{
											if (!PED::IS_PED_INJURED(Local_401))
											{
												TASK::TASK_LOOK_AT_ENTITY(Local_401, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
											}
											Local_401.f_8 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
					if (iLocal_4487 == 1)
					{
						if (!func_102("F1_COM08F") && !func_102("F1_COM08T"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									switch (GlobalFunc_8315())
									{
										case 1:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM08F", 7, 0, 0, 0))
											{
												func_98("F1_COM08F", 1);
											}
											break;
										
										case 2:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM08T", 7, 0, 0, 0))
											{
												func_98("F1_COM08T", 1);
											}
											break;
										}
									}
								}
							}
					}
					if (Local_4208[2 /*29*/].f_27 != 0)
					{
						if (Local_4208[2 /*29*/].f_22 == 0)
						{
							switch (Local_4208[2 /*29*/].f_27)
							{
								case 1:
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM09F", 7, 0, 0, 0))
									{
										Local_4208[2 /*29*/].f_22 = 1;
									}
									break;
								
								case 2:
									if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_COM09F", 7, 0, 0, 0))
									{
										Local_4208[2 /*29*/].f_22 = 1;
									}
									break;
								}
							}
						}
					}
			}
			break;
	}
}

float func_644(int iParam0)//Position - 0x70E64
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return ((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) - 100f) / (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0)) - 100f));
		}
	}
	return 1f;
}

void func_645(int iParam0)//Position - 0x70EA4
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			switch (iParam0->f_26)
			{
				case 0:
					if (iParam0->f_15 == 0)
					{
						ENTITY::SET_ENTITY_HEALTH(*iParam0, 800);
						PED::SET_PED_MAX_HEALTH(*iParam0, 800);
						PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(*iParam0, 32);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 16);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 16);
						WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_animal"), -1, 0, 1);
						GlobalFunc_2901(*iParam0, iParam0->f_3, iParam0->f_6, 0, 0, 0);
						iParam0->f_15 = 1;
					}
					if (iLocal_4043[0] == 1)
					{
						switch (iLocal_393)
						{
							case 2:
							case 1:
							case 0:
								func_112(iParam0, 4);
								break;
							}
					}
					break;
				
				case 4:
					if (iParam0->f_15 == 0)
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam0))
						{
							TASK::REQUEST_WAYPOINT_RECORDING("fra1_cflee");
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fra1_cflee"))
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam0, "fra1_cflee", 0, 8, -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
							}
						}
						else
						{
							iParam0->f_10 = 0;
							iParam0->f_11 = 0;
							iParam0->f_9 = 0;
							iParam0->f_12 = 0;
							iParam0->f_15 = 1;
						}
					}
					if (iParam0->f_15 == 1)
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam0, 2.5f, 1);
							iVar0 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam0);
							if (iVar0 >= 95)
							{
								if (ENTITY::IS_ENTITY_OCCLUDED(*iParam0) || !ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
								{
									PED::DELETE_PED(iParam0);
									TASK::REMOVE_WAYPOINT_RECORDING("fra1_cflee");
								}
								else
								{
									TASK::TASK_SMART_FLEE_COORD(*iParam0, ENTITY::GET_ENTITY_COORDS(*iParam0, 1), 250f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(*iParam0, 1);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
									TASK::REMOVE_WAYPOINT_RECORDING("fra1_cflee");
								}
							}
						}
					}
					break;
				}
			}
	}
}

void func_646()//Position - 0x71054
{
	if (iLocal_4043[35] == 0)
	{
		if (func_591(PLAYER::PLAYER_PED_ID(), -44.49314f, -1867.815f, 23.29402f, -17.55952f, -1835.444f, 29.4228f, 22f))
		{
			iLocal_4043[35] = 1;
		}
	}
	if (iLocal_4043[1] == 0)
	{
		if ((((iLocal_4043[19] == 1 && iLocal_4043[20] == 1) && iLocal_4043[30] == 1) && iLocal_4043[31] == 1) && iLocal_4043[11] == 1)
		{
			iLocal_4043[1] = 1;
		}
	}
	if (iLocal_4043[34] == 0)
	{
		if (iLocal_4043[11] == 1)
		{
			if (Local_430.f_16 == 1 || Local_401.f_16 == 1)
			{
				iLocal_4043[34] = 1;
			}
		}
	}
	if (iLocal_4043[11] == 0)
	{
		if (iLocal_4043[10] == 1)
		{
			if (func_647(Local_2881[0 /*13*/], -30.75871f, -1822.645f, 27.05275f, 10f, 12f, 3f) || func_647(Local_2881[1 /*13*/], -30.75871f, -1822.645f, 27.05275f, 10f, 12f, 3f))
			{
				iLocal_4043[11] = 1;
				iLocal_928 = MISC::GET_GAME_TIMER();
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_328);
			}
		}
	}
}

int func_647(int iParam0, struct<3> Param1, struct<3> Param4)//Position - 0x711A4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, Param4, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_648(int iParam0)//Position - 0x711CF
{
	switch (*iParam0)
	{
		case 0:
			STREAMING::REQUEST_IPL("SC1_27_Cut");
			if (STREAMING::IS_IPL_ACTIVE("SC1_27_Cut") && GlobalFunc_5927("fra_1_mcs_1", 1))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg"), WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg"), 1) * 2, 0, 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, joaat("player_one"), 0);
				}
				if (!PED::IS_PED_INJURED(Local_430))
				{
					PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_430, 0);
					ENTITY::SET_ENTITY_HEALTH(Local_430, 600);
					PED::SET_PED_MAX_HEALTH(Local_430, 600);
					WEAPON::SET_PED_INFINITE_AMMO(Local_430, 0, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_430, joaat("weapon_pumpshotgun"), WEAPON::GET_MAX_AMMO_IN_CLIP(Local_430, joaat("weapon_pumpshotgun"), 1) * 2, 0, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_430, 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_430, "Trevor", 0, joaat("player_two"), 0);
				}
				if (!PED::IS_PED_INJURED(Local_401))
				{
					PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_401, 0);
					ENTITY::SET_ENTITY_HEALTH(Local_401, 600);
					PED::SET_PED_MAX_HEALTH(Local_401, 600);
					WEAPON::GIVE_WEAPON_TO_PED(Local_401, joaat("weapon_assaultrifle"), -1, 0, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_401, 1);
					PED::SET_PED_PRELOAD_VARIATION_DATA(Local_401, 9, 1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_401, "Lamar", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_552))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_552))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_552))
						{
							ENTITY::DETACH_ENTITY(Local_552, 0, 1);
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_552, "missfra1leadinoutmcs_1", "money_bag", 3))
						{
							ENTITY::STOP_ENTITY_ANIM(Local_552, "money_bag", "missfra1leadinoutmcs_1", -1000f);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_552, "Michaels_Heist_Bag", 1, joaat("p_ld_heist_bag_s_1"), 0);
					}
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_592, "Coke_Block", 2, Local_592.f_1, 0);
				iLocal_1047 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg"), 1, 0, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1047, "Franklins_weapon", 0, 0, 0);
				iLocal_1048 = GlobalFunc_6830(Local_430, joaat("weapon_pumpshotgun"), 1, 0, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1048, "Trevors_weapon", 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_smg")));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pumpshotgun")));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle")));
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				GlobalFunc_5105();
				GlobalFunc_619(0);
				GlobalFunc_8316(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_908(1)))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_908(1), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(func_908(2)))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", func_908(2), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_401))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_401, 0);
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_137(&Local_2152, 1, 1);
				if (iLocal_1056 == 0)
				{
					func_653(&Local_3246);
					iLocal_1056 = 1;
				}
				MISC::CLEAR_AREA(93.38f, -1948.68f, 19.75f, 7.5f, 1, 0, 0, 0);
				MISC::CLEAR_AREA(1.5f, -1853.74f, 23.31f, 125f, 1, 0, 0, 0);
				if (iLocal_1025 == 0)
				{
					iLocal_1025 = GlobalFunc_2533(82.898f, -1949.781f, 19.79f, 5000f, 5000f, 64f);
				}
				MISC::CLEAR_AREA_OF_PEDS(Local_459.f_3, 5000f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_459.f_3, 5000f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_459.f_3, 5000f, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_517, Local_517.f_2, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_517, Local_517.f_5);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_517);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_517, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_488))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_488))
					{
						TASK::CLEAR_PED_TASKS(Local_488);
						GlobalFunc_2901(Local_488, 88.97f, -1958.81f, 19.75f, 0f, 0, 0, 0);
					}
				}
				MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 30f);
				iLocal_931 = 0;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			func_651(&iLocal_1046);
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_650(&iLocal_909);
				func_649(&iLocal_910);
				if (iLocal_1014 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 60000 && iLocal_918 == 0)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FRA1_MISSION_START"))
						{
							iLocal_1014 = 1;
						}
					}
				}
				if (iLocal_1015 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 65000 && iLocal_918 == 0)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FRA1_HUSTLER"))
						{
							iLocal_1015 = 1;
						}
					}
				}
				if (iLocal_918 == 0)
				{
					if (iLocal_1064 == 0)
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > 15000)
						{
							if (!PED::IS_PED_INJURED(Local_430))
							{
								GlobalFunc_2901(Local_430, ENTITY::GET_ENTITY_COORDS(Local_430, 1), 0f, 0, 0, 0);
								iLocal_1064 = 1;
							}
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_592))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Coke_Block", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Coke_Block", 0)))
					{
						Local_592 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Coke_Block", 0));
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_3246[0 /*12*/].f_1, -1, 0, 0.5f, 1, 0, Local_3246[0 /*12*/], 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((17f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.077f, 1065353216);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_592))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_592))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_592, Local_592.f_2, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_592, Local_592.f_5, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_592, 1);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_592, 1);
					}
				}
				RECORDING::_0x81CBAE94390F9F89();
				RECORDING::_0x293220DA1B46CEBC(0f, 10f, 3);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", Local_401.f_7))
			{
				if (!PED::IS_PED_INJURED(Local_401))
				{
					GlobalFunc_2901(Local_401, Local_401.f_3, Local_401.f_6, 0, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_401, joaat("weapon_assaultrifle"), 1);
					PED::SET_PED_COMPONENT_VARIATION(Local_401, 9, 1, 0, 0);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_401, Local_3246[1 /*12*/].f_1, -1, 0, 0.5f, 1, 0, Local_3246[1 /*12*/], 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_401, 0, 0);
					iLocal_921 = 1;
				}
				func_112(&Local_401, 5);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (!PED::IS_PED_INJURED(Local_430))
				{
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_430, Local_3246[2 /*12*/].f_1, -1, 0, 0.5f, 1, 0, Local_3246[2 /*12*/], 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_430, 0, 0);
				}
				func_112(&Local_430, 5);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_weapon", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_1047, PLAYER::PLAYER_PED_ID());
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
			{
				if (!PED::IS_PED_INJURED(Local_430))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_1048, Local_430);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if ((((((WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_smg")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pumpshotgun"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fra1_cflee")) && ENTITY::DOES_ENTITY_EXIST(Local_1273[0 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1273[1 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1273[2 /*18*/]))
				{
					if (iLocal_918 == 1)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_1273[0 /*18*/]))
						{
							GlobalFunc_2901(Local_1273[0 /*18*/], Local_366, fLocal_369, 0, 0, 0);
							func_628(Local_1273[0 /*18*/], 81.91f, -1942.41f, 19.85f, 2f, 0, Local_363, 0, 1, 1, 1056964608, 1056964608, 1, 1120403456, 0);
							func_577(Local_1273[0 /*18*/], 0, 1, 1, 13, 1);
							func_126(Local_1273[0 /*18*/], 1, 60, -957453492);
							WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_1273[0 /*18*/], 1f, 1f);
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_1273[1 /*18*/]))
						{
							PED::SET_PED_COMBAT_MOVEMENT(Local_1273[1 /*18*/], 1);
							func_573(Local_1273[1 /*18*/], 89.92f, -1918.83f, 19.63f, 3f, 0);
							WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_1273[1 /*18*/], 1f, 1f);
							func_126(Local_1273[1 /*18*/], 1, 175, -957453492);
							PED::SET_COMBAT_FLOAT(Local_1273[1 /*18*/], 2, 100f);
							PED::SET_COMBAT_FLOAT(Local_1273[1 /*18*/], 13, 100f);
							PED::SET_COMBAT_FLOAT(Local_1273[1 /*18*/], 5, 1f);
							PED::SET_COMBAT_FLOAT(Local_1273[1 /*18*/], 8, 0f);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[1 /*18*/], 5, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[1 /*18*/], 29, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[1 /*18*/], 30, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[1 /*18*/], 23, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1273[1 /*18*/], 150f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1273[1 /*18*/], 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_1273[2 /*18*/]))
						{
							PED::SET_PED_COMBAT_MOVEMENT(Local_1273[2 /*18*/], 1);
							func_573(Local_1273[2 /*18*/], 86.32f, -1918.05f, 19.69f, 3f, 0);
							WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_1273[2 /*18*/], 1f, 1f);
							func_126(Local_1273[2 /*18*/], 1, 175, -957453492);
							PED::SET_COMBAT_FLOAT(Local_1273[2 /*18*/], 2, 100f);
							PED::SET_COMBAT_FLOAT(Local_1273[2 /*18*/], 13, 100f);
							PED::SET_COMBAT_FLOAT(Local_1273[2 /*18*/], 5, 1f);
							PED::SET_COMBAT_FLOAT(Local_1273[2 /*18*/], 8, 0f);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[2 /*18*/], 5, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[2 /*18*/], 29, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[2 /*18*/], 30, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[2 /*18*/], 23, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1273[2 /*18*/], 150f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1273[2 /*18*/], 0);
						}
						iLocal_931 = 1;
						SYSTEM::WAIT(1500);
						GlobalFunc_5105();
						GlobalFunc_619(0);
						GlobalFunc_8316(0, 1, 1, 0);
						STREAMING::REMOVE_IPL("SC1_27_Cut");
						OBJECT::DELETE_OBJECT(&iLocal_1048);
						OBJECT::DELETE_OBJECT(&iLocal_1047);
						AUDIO::TRIGGER_MUSIC_EVENT("FRA1_FIGHT_START");
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(800);
						}
						return 1;
					}
					else
					{
						GlobalFunc_5105();
						GlobalFunc_619(0);
						GlobalFunc_8316(0, 1, 1, 0);
						STREAMING::REMOVE_IPL("SC1_27_Cut");
						OBJECT::DELETE_OBJECT(&iLocal_1048);
						OBJECT::DELETE_OBJECT(&iLocal_1047);
						AUDIO::TRIGGER_MUSIC_EVENT("FRA1_FIGHT_START");
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(800);
						}
						return 1;
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(iLocal_328);
				TASK::REQUEST_WAYPOINT_RECORDING("fra1_cflee");
				WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_smg"), 31, 0);
				WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pumpshotgun"), 31, 0);
				WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
				if (iLocal_918 == 0)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
						iLocal_918 = 1;
					}
				}
			}
			break;
	}
	return 0;
}

void func_649(int iParam0)//Position - 0x71C24
{
	switch (*iParam0)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_330, 1) < 400f)
			{
				*iParam0++;
			}
			break;
		
		case 1:
			if (func_138(&(Local_2152[0 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_2152[0 /*13*/], 2000);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2152[0 /*13*/], 2000f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_2152[0 /*13*/], 2000f);
				PHYSICS::ACTIVATE_PHYSICS(Local_2152[0 /*13*/]);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2152[0 /*13*/], 2);
				*iParam0++;
			}
			break;
		
		case 2:
			if (func_138(&(Local_2152[1 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_2152[1 /*13*/], 2000);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2152[1 /*13*/], 2000f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_2152[1 /*13*/], 2000f);
				PHYSICS::ACTIVATE_PHYSICS(Local_2152[1 /*13*/]);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2152[1 /*13*/], 2);
				*iParam0++;
			}
			break;
		
		case 3:
			if (func_138(&(Local_2152[2 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_2152[2 /*13*/], 2000);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2152[2 /*13*/], 2000f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_2152[2 /*13*/], 2000f);
				PHYSICS::ACTIVATE_PHYSICS(Local_2152[2 /*13*/]);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2152[2 /*13*/], 2);
				*iParam0++;
			}
			break;
		
		case 4:
			if (func_138(&(Local_2152[3 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_2152[3 /*13*/], 2000);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2152[3 /*13*/], 2000f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_2152[3 /*13*/], 2000f);
				PHYSICS::ACTIVATE_PHYSICS(Local_2152[3 /*13*/]);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2152[3 /*13*/], 2);
				*iParam0++;
			}
			break;
	}
}

void func_650(int iParam0)//Position - 0x71E01
{
	switch (*iParam0)
	{
		case 0:
			if (func_240(&(Local_3173[0 /*8*/]), 0))
			{
				*iParam0++;
			}
			break;
		
		case 1:
			if (func_240(&(Local_3173[1 /*8*/]), 0))
			{
				*iParam0++;
			}
			break;
		
		case 2:
			if (func_240(&(Local_3173[2 /*8*/]), 0))
			{
				*iParam0++;
			}
			break;
		
		case 3:
			if (func_240(&(Local_3173[3 /*8*/]), 0))
			{
				*iParam0++;
			}
			break;
		
		case 4:
			if (func_240(&(Local_3173[4 /*8*/]), 0))
			{
				*iParam0++;
			}
			break;
		
		case 5:
			if (func_240(&(Local_3173[5 /*8*/]), 0))
			{
				*iParam0++;
			}
			break;
		
		case 6:
			if (func_240(&(Local_3173[6 /*8*/]), 0))
			{
				*iParam0++;
			}
			break;
		
		case 7:
			if (func_240(&(Local_3173[7 /*8*/]), 0))
			{
				*iParam0++;
			}
			break;
		
		case 8:
			if (func_240(&(Local_3173[8 /*8*/]), 0))
			{
				*iParam0++;
			}
			break;
	}
}

void func_651(int iParam0)//Position - 0x71F29
{
	var uVar0;
	
	switch (*iParam0)
	{
		case 0:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				*iParam0++;
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(iLocal_328);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_328))
			{
				Local_1273[0 /*18*/] = func_215(iLocal_328, 73.5813f, -1944.377f, 19.8115f, 304.0889f, iLocal_399, joaat("weapon_microsmg"), 125, 1);
				Local_1273[1 /*18*/] = func_215(iLocal_328, 81.7639f, -1904.295f, 20.5794f, 142.1008f, iLocal_399, joaat("weapon_microsmg"), 125, 1);
				Local_1273[2 /*18*/] = func_215(iLocal_328, 79.4749f, -1908.114f, 20.3492f, 169.8566f, iLocal_399, joaat("weapon_microsmg"), 125, 1);
				func_213(&Local_1273, 0);
				*iParam0++;
			}
			break;
		
		case 2:
			if (iLocal_918 == 0)
			{
				if (iLocal_932 == 0)
				{
					if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 61500f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1273[0 /*18*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_1273[0 /*18*/]))
							{
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 81.91f, -1942.41f, 19.85f, Local_363, 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492);
								TASK::TASK_SHOOT_AT_COORD(0, Local_363, -1, -957453492);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE(Local_1273[0 /*18*/], uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_1273[1 /*18*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_1273[1 /*18*/]))
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_1273[1 /*18*/], 1);
								func_573(Local_1273[1 /*18*/], 89.92f, -1918.83f, 19.63f, 3f, 0);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_1273[1 /*18*/], 1f, 1f);
								func_126(Local_1273[1 /*18*/], 1, 175, -957453492);
								PED::SET_COMBAT_FLOAT(Local_1273[1 /*18*/], 2, 100f);
								PED::SET_COMBAT_FLOAT(Local_1273[1 /*18*/], 13, 100f);
								PED::SET_COMBAT_FLOAT(Local_1273[1 /*18*/], 5, 1f);
								PED::SET_COMBAT_FLOAT(Local_1273[1 /*18*/], 8, 0f);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[1 /*18*/], 5, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[1 /*18*/], 29, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[1 /*18*/], 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[1 /*18*/], 23, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1273[1 /*18*/], 150f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1273[1 /*18*/], 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_1273[2 /*18*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_1273[2 /*18*/]))
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_1273[2 /*18*/], 1);
								func_573(Local_1273[2 /*18*/], 86.32f, -1918.05f, 19.69f, 3f, 0);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_1273[2 /*18*/], 1f, 1f);
								func_126(Local_1273[2 /*18*/], 1, 175, -957453492);
								PED::SET_COMBAT_FLOAT(Local_1273[2 /*18*/], 2, 100f);
								PED::SET_COMBAT_FLOAT(Local_1273[2 /*18*/], 13, 100f);
								PED::SET_COMBAT_FLOAT(Local_1273[2 /*18*/], 5, 1f);
								PED::SET_COMBAT_FLOAT(Local_1273[2 /*18*/], 8, 0f);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[2 /*18*/], 5, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[2 /*18*/], 29, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[2 /*18*/], 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1273[2 /*18*/], 23, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1273[2 /*18*/], 150f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1273[2 /*18*/], 0);
							}
						}
						iLocal_932 = 1;
					}
				}
			}
			break;
	}
}


void func_653(var uParam0)//Position - 0x722BC
{
	int iVar0;
	
	Local_4003[0 /*3*/] = { 86.69f, -1945.9f, 19.75f };
	Local_4003[1 /*3*/] = { 92.33f, -1931.13f, 19.8f };
	Local_4003[2 /*3*/] = { 91.67f, -1926.59f, 19.77f };
	Local_4003[3 /*3*/] = { 85.91f, -1913.31f, 19.89f };
	Local_4003[4 /*3*/] = { 68.19f, -1894.92f, 20.66f };
	Local_4003[5 /*3*/] = { 46.99f, -1878.41f, 21.23f };
	Local_4003[6 /*3*/] = { 37.1f, -1873.07f, 21.66f };
	Local_4003[7 /*3*/] = { 39.3f, -1870.39f, 21.71f };
	Local_4003[8 /*3*/] = { 30.68f, -1864.43f, 22.12f };
	Local_4003[9 /*3*/] = { 21.19f, -1856.01f, 22.65f };
	Local_4003[10 /*3*/] = { 9.48f, -1846.8f, 23.27f };
	Local_4003[11 /*3*/] = { -22.67f, -1846.52f, 24.27f };
	Local_4003[12 /*3*/] = { -31.95f, -1857.39f, 24.72f };
	(uParam0[0 /*12*/])->f_1 = { 82.7797f, -1949.686f, 19.79f };
	(uParam0[0 /*12*/])->f_4 = 49.6199f;
	(uParam0[0 /*12*/])->f_5 = 2;
	(uParam0[0 /*12*/])->f_6 = 0;
	(uParam0[0 /*12*/])->f_7 = 0;
	(uParam0[0 /*12*/])->f_9 = 1;
	(uParam0[0 /*12*/])->f_10 = 0;
	(uParam0[1 /*12*/])->f_1 = { 83.7215f, -1948.412f, 19.6708f };
	(uParam0[1 /*12*/])->f_4 = 49.6199f;
	(uParam0[1 /*12*/])->f_5 = 2;
	(uParam0[1 /*12*/])->f_6 = 0;
	(uParam0[1 /*12*/])->f_7 = 0;
	(uParam0[1 /*12*/])->f_9 = 1;
	(uParam0[1 /*12*/])->f_10 = 0;
	(uParam0[2 /*12*/])->f_1 = { 85.02f, -1946.93f, 19.78f };
	(uParam0[2 /*12*/])->f_4 = 49.6199f;
	(uParam0[2 /*12*/])->f_5 = 2;
	(uParam0[2 /*12*/])->f_6 = 0;
	(uParam0[2 /*12*/])->f_7 = 0;
	(uParam0[2 /*12*/])->f_9 = 1;
	(uParam0[2 /*12*/])->f_10 = 0;
	(uParam0[3 /*12*/])->f_1 = { 72.406f, -1927.535f, 19.9848f };
	(uParam0[3 /*12*/])->f_4 = 45f;
	(uParam0[3 /*12*/])->f_5 = 0;
	(uParam0[3 /*12*/])->f_6 = 0;
	(uParam0[3 /*12*/])->f_7 = 1;
	(uParam0[3 /*12*/])->f_9 = 1;
	(uParam0[3 /*12*/])->f_10 = 0;
	(uParam0[4 /*12*/])->f_1 = { 53.0566f, -1912.4f, 20.6508f };
	(uParam0[4 /*12*/])->f_4 = 55.6465f;
	(uParam0[4 /*12*/])->f_5 = 0;
	(uParam0[4 /*12*/])->f_6 = 2;
	(uParam0[4 /*12*/])->f_7 = 1;
	(uParam0[4 /*12*/])->f_9 = 1;
	(uParam0[4 /*12*/])->f_10 = 0;
	(uParam0[5 /*12*/])->f_1 = { 31.2626f, -1894.466f, 21.2817f };
	(uParam0[5 /*12*/])->f_4 = 57.1599f;
	(uParam0[5 /*12*/])->f_5 = 0;
	(uParam0[5 /*12*/])->f_6 = 1;
	(uParam0[5 /*12*/])->f_7 = 1;
	(uParam0[5 /*12*/])->f_9 = 1;
	(uParam0[5 /*12*/])->f_10 = 0;
	(uParam0[6 /*12*/])->f_1 = { 7.9293f, -1875.033f, 22.6954f };
	(uParam0[6 /*12*/])->f_4 = 55.7332f;
	(uParam0[6 /*12*/])->f_5 = 0;
	(uParam0[6 /*12*/])->f_6 = 2;
	(uParam0[6 /*12*/])->f_7 = 1;
	(uParam0[6 /*12*/])->f_9 = 1;
	(uParam0[6 /*12*/])->f_10 = 0;
	(uParam0[7 /*12*/])->f_1 = { -22.6238f, -1849.292f, 24.1939f };
	(uParam0[7 /*12*/])->f_4 = 51.7058f;
	(uParam0[7 /*12*/])->f_5 = 0;
	(uParam0[7 /*12*/])->f_6 = 0;
	(uParam0[7 /*12*/])->f_7 = 0;
	(uParam0[7 /*12*/])->f_9 = 1;
	(uParam0[7 /*12*/])->f_10 = 0;
	(uParam0[8 /*12*/])->f_1 = { 4.0673f, -1872.077f, 22.736f };
	(uParam0[8 /*12*/])->f_4 = 53.2814f;
	(uParam0[8 /*12*/])->f_5 = 3;
	(uParam0[8 /*12*/])->f_6 = 0;
	(uParam0[8 /*12*/])->f_7 = 0;
	(uParam0[8 /*12*/])->f_9 = 1;
	(uParam0[8 /*12*/])->f_10 = 0;
	(uParam0[9 /*12*/])->f_1 = { -5.9057f, -1858.863f, 23.4581f };
	(uParam0[9 /*12*/])->f_4 = 48.0057f;
	(uParam0[9 /*12*/])->f_5 = 3;
	(uParam0[9 /*12*/])->f_6 = 1;
	(uParam0[9 /*12*/])->f_7 = 0;
	(uParam0[9 /*12*/])->f_9 = 1;
	(uParam0[9 /*12*/])->f_10 = 1;
	(uParam0[10 /*12*/])->f_1 = { 36.8745f, -1900.46f, 21.0387f };
	(uParam0[10 /*12*/])->f_4 = 53.6668f;
	(uParam0[10 /*12*/])->f_5 = 0;
	(uParam0[10 /*12*/])->f_6 = 2;
	(uParam0[10 /*12*/])->f_7 = 1;
	(uParam0[10 /*12*/])->f_9 = 1;
	(uParam0[10 /*12*/])->f_10 = 0;
	(uParam0[11 /*12*/])->f_1 = { 63.026f, -1919.994f, 20.5881f };
	(uParam0[11 /*12*/])->f_4 = 49.4401f;
	(uParam0[11 /*12*/])->f_5 = 0;
	(uParam0[11 /*12*/])->f_6 = 0;
	(uParam0[11 /*12*/])->f_7 = 1;
	(uParam0[11 /*12*/])->f_9 = 1;
	(uParam0[11 /*12*/])->f_10 = 0;
	(uParam0[12 /*12*/])->f_1 = { 57.8073f, -1909.183f, 20.467f };
	(uParam0[12 /*12*/])->f_4 = 88.5275f;
	(uParam0[12 /*12*/])->f_5 = 1;
	(uParam0[12 /*12*/])->f_6 = 0;
	(uParam0[12 /*12*/])->f_7 = 1;
	(uParam0[12 /*12*/])->f_9 = 1;
	(uParam0[12 /*12*/])->f_10 = 1;
	(uParam0[13 /*12*/])->f_1 = { 58.0236f, -1901.547f, 20.667f };
	(uParam0[13 /*12*/])->f_4 = 64.9632f;
	(uParam0[13 /*12*/])->f_5 = 1;
	(uParam0[13 /*12*/])->f_6 = 0;
	(uParam0[13 /*12*/])->f_7 = 1;
	(uParam0[13 /*12*/])->f_9 = 1;
	(uParam0[13 /*12*/])->f_10 = 1;
	(uParam0[14 /*12*/])->f_1 = { 60.5177f, -1913.545f, 20.635f };
	(uParam0[14 /*12*/])->f_4 = 44.8179f;
	(uParam0[14 /*12*/])->f_5 = 1;
	(uParam0[14 /*12*/])->f_6 = 0;
	(uParam0[14 /*12*/])->f_7 = 1;
	(uParam0[14 /*12*/])->f_9 = 1;
	(uParam0[14 /*12*/])->f_10 = 1;
	(uParam0[15 /*12*/])->f_1 = { 85.9292f, -1932.269f, 19.5994f };
	(uParam0[15 /*12*/])->f_4 = 3.0663f;
	(uParam0[15 /*12*/])->f_5 = 1;
	(uParam0[15 /*12*/])->f_6 = 0;
	(uParam0[15 /*12*/])->f_7 = 1;
	(uParam0[15 /*12*/])->f_9 = 1;
	(uParam0[15 /*12*/])->f_10 = 1;
	(uParam0[16 /*12*/])->f_1 = { 67.4052f, -1922.535f, 20.33f };
	(uParam0[16 /*12*/])->f_4 = 41.2396f;
	(uParam0[16 /*12*/])->f_5 = 1;
	(uParam0[16 /*12*/])->f_6 = 0;
	(uParam0[16 /*12*/])->f_7 = 1;
	(uParam0[16 /*12*/])->f_9 = 1;
	(uParam0[16 /*12*/])->f_10 = 1;
	(uParam0[17 /*12*/])->f_1 = { 66.5032f, -1908.588f, 20.6566f };
	(uParam0[17 /*12*/])->f_4 = 24.7455f;
	(uParam0[17 /*12*/])->f_5 = 1;
	(uParam0[17 /*12*/])->f_6 = 0;
	(uParam0[17 /*12*/])->f_7 = 1;
	(uParam0[17 /*12*/])->f_9 = 1;
	(uParam0[17 /*12*/])->f_10 = 1;
	(uParam0[18 /*12*/])->f_1 = { 43.572f, -1904.932f, 20.7482f };
	(uParam0[18 /*12*/])->f_4 = 21.7481f;
	(uParam0[18 /*12*/])->f_5 = 3;
	(uParam0[18 /*12*/])->f_6 = 0;
	(uParam0[18 /*12*/])->f_7 = 1;
	(uParam0[18 /*12*/])->f_9 = 1;
	(uParam0[18 /*12*/])->f_10 = 0;
	(uParam0[19 /*12*/])->f_1 = { 44.3755f, -1898.654f, 20.7424f };
	(uParam0[19 /*12*/])->f_4 = 78.5593f;
	(uParam0[19 /*12*/])->f_5 = 3;
	(uParam0[19 /*12*/])->f_6 = 0;
	(uParam0[19 /*12*/])->f_7 = 2;
	(uParam0[19 /*12*/])->f_9 = 1;
	(uParam0[19 /*12*/])->f_10 = 0;
	(uParam0[20 /*12*/])->f_1 = { 29.975f, -1887.279f, 21.5489f };
	(uParam0[20 /*12*/])->f_4 = 44.9622f;
	(uParam0[20 /*12*/])->f_5 = 1;
	(uParam0[20 /*12*/])->f_6 = 0;
	(uParam0[20 /*12*/])->f_7 = 1;
	(uParam0[20 /*12*/])->f_9 = 1;
	(uParam0[20 /*12*/])->f_10 = 1;
	(uParam0[21 /*12*/])->f_1 = { 28.7632f, -1881.128f, 21.6479f };
	(uParam0[21 /*12*/])->f_4 = 44.4764f;
	(uParam0[21 /*12*/])->f_5 = 1;
	(uParam0[21 /*12*/])->f_6 = 0;
	(uParam0[21 /*12*/])->f_7 = 1;
	(uParam0[21 /*12*/])->f_9 = 1;
	(uParam0[21 /*12*/])->f_10 = 1;
	(uParam0[22 /*12*/])->f_1 = { 15.4082f, -1878.679f, 22.1955f };
	(uParam0[22 /*12*/])->f_4 = 26.2613f;
	(uParam0[22 /*12*/])->f_5 = 1;
	(uParam0[22 /*12*/])->f_6 = 0;
	(uParam0[22 /*12*/])->f_7 = 1;
	(uParam0[22 /*12*/])->f_9 = 1;
	(uParam0[22 /*12*/])->f_10 = 1;
	(uParam0[23 /*12*/])->f_1 = { 18.7292f, -1869.319f, 22.3698f };
	(uParam0[23 /*12*/])->f_4 = 30.3013f;
	(uParam0[23 /*12*/])->f_5 = 1;
	(uParam0[23 /*12*/])->f_6 = 0;
	(uParam0[23 /*12*/])->f_7 = 1;
	(uParam0[23 /*12*/])->f_9 = 1;
	(uParam0[23 /*12*/])->f_10 = 1;
	(uParam0[24 /*12*/])->f_1 = { 5.0254f, -1867.162f, 22.7755f };
	(uParam0[24 /*12*/])->f_4 = 47.2275f;
	(uParam0[24 /*12*/])->f_5 = 1;
	(uParam0[24 /*12*/])->f_6 = 0;
	(uParam0[24 /*12*/])->f_7 = 1;
	(uParam0[24 /*12*/])->f_9 = 1;
	(uParam0[24 /*12*/])->f_10 = 1;
	(uParam0[25 /*12*/])->f_1 = { 4.979f, -1853.919f, 23.2154f };
	(uParam0[25 /*12*/])->f_4 = 40.7702f;
	(uParam0[25 /*12*/])->f_5 = 1;
	(uParam0[25 /*12*/])->f_6 = 0;
	(uParam0[25 /*12*/])->f_7 = 1;
	(uParam0[25 /*12*/])->f_9 = 1;
	(uParam0[25 /*12*/])->f_10 = 1;
	(uParam0[26 /*12*/])->f_1 = { -26.0429f, -1846.368f, 24.432f };
	(uParam0[26 /*12*/])->f_4 = 53.8431f;
	(uParam0[26 /*12*/])->f_5 = 0;
	(uParam0[26 /*12*/])->f_6 = 2;
	(uParam0[26 /*12*/])->f_7 = 1;
	(uParam0[26 /*12*/])->f_9 = 1;
	(uParam0[26 /*12*/])->f_10 = 0;
	(uParam0[27 /*12*/])->f_1 = { 84.004f, -1906.821f, 20.2583f };
	(uParam0[27 /*12*/])->f_4 = 226.8502f;
	(uParam0[27 /*12*/])->f_5 = 0;
	(uParam0[27 /*12*/])->f_6 = 2;
	(uParam0[27 /*12*/])->f_7 = 0;
	(uParam0[27 /*12*/])->f_9 = 0;
	(uParam0[27 /*12*/])->f_10 = 0;
	(uParam0[28 /*12*/])->f_1 = { 46.0988f, -1875.176f, 21.4052f };
	(uParam0[28 /*12*/])->f_4 = 48.7171f;
	(uParam0[28 /*12*/])->f_5 = 1;
	(uParam0[28 /*12*/])->f_6 = 2;
	(uParam0[28 /*12*/])->f_7 = 0;
	(uParam0[28 /*12*/])->f_9 = 0;
	(uParam0[28 /*12*/])->f_10 = 0;
	(uParam0[29 /*12*/])->f_1 = { 41.3668f, -1867.123f, 21.8246f };
	(uParam0[29 /*12*/])->f_4 = 76.3672f;
	(uParam0[29 /*12*/])->f_5 = 1;
	(uParam0[29 /*12*/])->f_6 = 0;
	(uParam0[29 /*12*/])->f_7 = 0;
	(uParam0[29 /*12*/])->f_9 = 0;
	(uParam0[29 /*12*/])->f_10 = 0;
	(uParam0[30 /*12*/])->f_1 = { 30.4106f, -1861.725f, 22.2593f };
	(uParam0[30 /*12*/])->f_4 = 42.8982f;
	(uParam0[30 /*12*/])->f_5 = 1;
	(uParam0[30 /*12*/])->f_6 = 2;
	(uParam0[30 /*12*/])->f_7 = 0;
	(uParam0[30 /*12*/])->f_9 = 0;
	(uParam0[30 /*12*/])->f_10 = 0;
	(uParam0[31 /*12*/])->f_1 = { -4.2944f, -1839.153f, 23.8936f };
	(uParam0[31 /*12*/])->f_4 = 46.5391f;
	(uParam0[31 /*12*/])->f_5 = 3;
	(uParam0[31 /*12*/])->f_6 = 1;
	(uParam0[31 /*12*/])->f_7 = 0;
	(uParam0[31 /*12*/])->f_9 = 0;
	(uParam0[31 /*12*/])->f_10 = 0;
	(uParam0[32 /*12*/])->f_1 = { 60.0972f, -1886.551f, 20.6859f };
	(uParam0[32 /*12*/])->f_4 = 54.8452f;
	(uParam0[32 /*12*/])->f_5 = 1;
	(uParam0[32 /*12*/])->f_6 = 2;
	(uParam0[32 /*12*/])->f_7 = 0;
	(uParam0[32 /*12*/])->f_9 = 0;
	(uParam0[32 /*12*/])->f_10 = 0;
	(uParam0[33 /*12*/])->f_1 = { 83.9598f, -1907.983f, 20.1624f };
	(uParam0[33 /*12*/])->f_4 = 222.3723f;
	(uParam0[33 /*12*/])->f_5 = 0;
	(uParam0[33 /*12*/])->f_6 = 0;
	(uParam0[33 /*12*/])->f_7 = 0;
	(uParam0[33 /*12*/])->f_9 = 0;
	(uParam0[33 /*12*/])->f_10 = 0;
	(uParam0[34 /*12*/])->f_1 = { 20.4283f, -1853.378f, 22.7687f };
	(uParam0[34 /*12*/])->f_4 = 23.7767f;
	(uParam0[34 /*12*/])->f_5 = 1;
	(uParam0[34 /*12*/])->f_6 = 2;
	(uParam0[34 /*12*/])->f_7 = 0;
	(uParam0[34 /*12*/])->f_9 = 0;
	(uParam0[34 /*12*/])->f_10 = 0;
	(uParam0[35 /*12*/])->f_1 = { 85.7919f, -1909.529f, 20.0351f };
	(uParam0[35 /*12*/])->f_4 = 23.7767f;
	(uParam0[35 /*12*/])->f_5 = 1;
	(uParam0[35 /*12*/])->f_6 = 0;
	(uParam0[35 /*12*/])->f_7 = 0;
	(uParam0[35 /*12*/])->f_9 = 0;
	(uParam0[35 /*12*/])->f_10 = 0;
	(uParam0[36 /*12*/])->f_1 = { 55.8396f, -1889.809f, 20.6355f };
	(uParam0[36 /*12*/])->f_4 = 231.9477f;
	(uParam0[36 /*12*/])->f_5 = 0;
	(uParam0[36 /*12*/])->f_6 = 0;
	(uParam0[36 /*12*/])->f_7 = 0;
	(uParam0[36 /*12*/])->f_9 = 0;
	(uParam0[36 /*12*/])->f_10 = 0;
	(uParam0[37 /*12*/])->f_1 = { 53.504f, -1881.054f, 21.0802f };
	(uParam0[37 /*12*/])->f_4 = 230.8292f;
	(uParam0[37 /*12*/])->f_5 = 0;
	(uParam0[37 /*12*/])->f_6 = 2;
	(uParam0[37 /*12*/])->f_7 = 0;
	(uParam0[37 /*12*/])->f_9 = 0;
	(uParam0[37 /*12*/])->f_10 = 0;
	(uParam0[38 /*12*/])->f_1 = { 30.4574f, -1894.115f, 21.3552f };
	(uParam0[38 /*12*/])->f_4 = 227.7727f;
	(uParam0[38 /*12*/])->f_5 = 2;
	(uParam0[38 /*12*/])->f_6 = 0;
	(uParam0[38 /*12*/])->f_7 = 0;
	(uParam0[38 /*12*/])->f_9 = 0;
	(uParam0[38 /*12*/])->f_10 = 0;
	(uParam0[39 /*12*/])->f_1 = { 0.1045f, -1825.924f, 24.33f };
	(uParam0[39 /*12*/])->f_4 = 129.9f;
	(uParam0[39 /*12*/])->f_5 = 1;
	(uParam0[39 /*12*/])->f_6 = 2;
	(uParam0[39 /*12*/])->f_7 = 4;
	(uParam0[39 /*12*/])->f_9 = 0;
	(uParam0[39 /*12*/])->f_10 = 0;
	(uParam0[40 /*12*/])->f_1 = { -19.5798f, -1851.41f, 24.0494f };
	(uParam0[40 /*12*/])->f_4 = 237.4822f;
	(uParam0[40 /*12*/])->f_5 = 1;
	(uParam0[40 /*12*/])->f_6 = 2;
	(uParam0[40 /*12*/])->f_7 = 0;
	(uParam0[40 /*12*/])->f_9 = 0;
	(uParam0[40 /*12*/])->f_10 = 0;
	(uParam0[41 /*12*/])->f_1 = { 95.237f, -1950.682f, 19.7926f };
	(uParam0[41 /*12*/])->f_4 = 148.0664f;
	(uParam0[41 /*12*/])->f_5 = 1;
	(uParam0[41 /*12*/])->f_6 = 0;
	(uParam0[41 /*12*/])->f_7 = 0;
	(uParam0[41 /*12*/])->f_9 = 0;
	(uParam0[41 /*12*/])->f_10 = 0;
	(uParam0[42 /*12*/])->f_1 = { 61.1097f, -1918.445f, 20.6104f };
	(uParam0[42 /*12*/])->f_4 = 245.9129f;
	(uParam0[42 /*12*/])->f_5 = 1;
	(uParam0[42 /*12*/])->f_6 = 0;
	(uParam0[42 /*12*/])->f_7 = 0;
	(uParam0[42 /*12*/])->f_9 = 0;
	(uParam0[42 /*12*/])->f_10 = 0;
	(uParam0[43 /*12*/])->f_1 = { 79.0345f, -1900.662f, 20.7645f };
	(uParam0[43 /*12*/])->f_4 = 234.2608f;
	(uParam0[43 /*12*/])->f_5 = 0;
	(uParam0[43 /*12*/])->f_6 = 2;
	(uParam0[43 /*12*/])->f_7 = 0;
	(uParam0[43 /*12*/])->f_9 = 0;
	(uParam0[43 /*12*/])->f_10 = 0;
	(uParam0[44 /*12*/])->f_1 = { 52.2746f, -1911.74f, 20.6309f };
	(uParam0[44 /*12*/])->f_4 = 238.6767f;
	(uParam0[44 /*12*/])->f_5 = 1;
	(uParam0[44 /*12*/])->f_6 = 2;
	(uParam0[44 /*12*/])->f_7 = 0;
	(uParam0[44 /*12*/])->f_9 = 0;
	(uParam0[44 /*12*/])->f_10 = 0;
	(uParam0[45 /*12*/])->f_1 = { 74.7971f, -1896.582f, 20.7474f };
	(uParam0[45 /*12*/])->f_4 = 221.3824f;
	(uParam0[45 /*12*/])->f_5 = 0;
	(uParam0[45 /*12*/])->f_6 = 2;
	(uParam0[45 /*12*/])->f_7 = 0;
	(uParam0[45 /*12*/])->f_9 = 0;
	(uParam0[45 /*12*/])->f_10 = 0;
	(uParam0[46 /*12*/])->f_1 = { 77.6239f, -1945.435f, 19.8055f };
	(uParam0[46 /*12*/])->f_4 = 236.819f;
	(uParam0[46 /*12*/])->f_5 = 1;
	(uParam0[46 /*12*/])->f_6 = 0;
	(uParam0[46 /*12*/])->f_7 = 0;
	(uParam0[46 /*12*/])->f_9 = 0;
	(uParam0[46 /*12*/])->f_10 = 0;
	(uParam0[47 /*12*/])->f_1 = { 87.0147f, -1919f, 19.6727f };
	(uParam0[47 /*12*/])->f_4 = 241.6554f;
	(uParam0[47 /*12*/])->f_5 = 0;
	(uParam0[47 /*12*/])->f_6 = 0;
	(uParam0[47 /*12*/])->f_7 = 0;
	(uParam0[47 /*12*/])->f_9 = 0;
	(uParam0[47 /*12*/])->f_10 = 0;
	(uParam0[48 /*12*/])->f_1 = { 45.4957f, -1874.517f, 21.4749f };
	(uParam0[48 /*12*/])->f_4 = 226.5895f;
	(uParam0[48 /*12*/])->f_5 = 0;
	(uParam0[48 /*12*/])->f_6 = 2;
	(uParam0[48 /*12*/])->f_7 = 0;
	(uParam0[48 /*12*/])->f_9 = 0;
	(uParam0[48 /*12*/])->f_10 = 0;
	(uParam0[49 /*12*/])->f_1 = { 41.1759f, -1878.124f, 21.4395f };
	(uParam0[49 /*12*/])->f_4 = 240.7377f;
	(uParam0[49 /*12*/])->f_5 = 3;
	(uParam0[49 /*12*/])->f_6 = 0;
	(uParam0[49 /*12*/])->f_7 = 0;
	(uParam0[49 /*12*/])->f_9 = 0;
	(uParam0[49 /*12*/])->f_10 = 0;
	(uParam0[50 /*12*/])->f_1 = { 38.929f, -1891.415f, 20.9758f };
	(uParam0[50 /*12*/])->f_4 = 241.1702f;
	(uParam0[50 /*12*/])->f_5 = 3;
	(uParam0[50 /*12*/])->f_6 = 0;
	(uParam0[50 /*12*/])->f_7 = 0;
	(uParam0[50 /*12*/])->f_9 = 0;
	(uParam0[50 /*12*/])->f_10 = 0;
	(uParam0[51 /*12*/])->f_1 = { 20.6281f, -1885.523f, 21.9471f };
	(uParam0[51 /*12*/])->f_4 = 236.1646f;
	(uParam0[51 /*12*/])->f_5 = 1;
	(uParam0[51 /*12*/])->f_6 = 0;
	(uParam0[51 /*12*/])->f_7 = 0;
	(uParam0[51 /*12*/])->f_9 = 0;
	(uParam0[51 /*12*/])->f_10 = 0;
	(uParam0[52 /*12*/])->f_1 = { 7.1729f, -1874.453f, 22.5758f };
	(uParam0[52 /*12*/])->f_4 = 225.0603f;
	(uParam0[52 /*12*/])->f_5 = 1;
	(uParam0[52 /*12*/])->f_6 = 2;
	(uParam0[52 /*12*/])->f_7 = 0;
	(uParam0[52 /*12*/])->f_9 = 0;
	(uParam0[52 /*12*/])->f_10 = 0;
	(uParam0[53 /*12*/])->f_1 = { 37.7745f, -1866.761f, 21.9016f };
	(uParam0[53 /*12*/])->f_4 = 242.3961f;
	(uParam0[53 /*12*/])->f_5 = 0;
	(uParam0[53 /*12*/])->f_6 = 0;
	(uParam0[53 /*12*/])->f_7 = 0;
	(uParam0[53 /*12*/])->f_9 = 0;
	(uParam0[53 /*12*/])->f_10 = 0;
	(uParam0[54 /*12*/])->f_1 = { 21.483f, -1859.044f, 22.5513f };
	(uParam0[54 /*12*/])->f_4 = 202.8038f;
	(uParam0[54 /*12*/])->f_5 = 1;
	(uParam0[54 /*12*/])->f_6 = 0;
	(uParam0[54 /*12*/])->f_7 = 0;
	(uParam0[54 /*12*/])->f_9 = 0;
	(uParam0[54 /*12*/])->f_10 = 0;
	(uParam0[55 /*12*/])->f_1 = { 12.119f, -1846.378f, 23.2628f };
	(uParam0[55 /*12*/])->f_4 = 235.3726f;
	(uParam0[55 /*12*/])->f_5 = 0;
	(uParam0[55 /*12*/])->f_6 = 2;
	(uParam0[55 /*12*/])->f_7 = 0;
	(uParam0[55 /*12*/])->f_9 = 0;
	(uParam0[55 /*12*/])->f_10 = 0;
	(uParam0[56 /*12*/])->f_1 = { -6.8817f, -1837.031f, 24.0336f };
	(uParam0[56 /*12*/])->f_4 = 227.5375f;
	(uParam0[56 /*12*/])->f_5 = 3;
	(uParam0[56 /*12*/])->f_6 = 0;
	(uParam0[56 /*12*/])->f_7 = 0;
	(uParam0[56 /*12*/])->f_9 = 0;
	(uParam0[56 /*12*/])->f_10 = 0;
	(uParam0[57 /*12*/])->f_1 = { 1.423f, -1837.101f, 23.8195f };
	(uParam0[57 /*12*/])->f_4 = 141.9094f;
	(uParam0[57 /*12*/])->f_5 = 0;
	(uParam0[57 /*12*/])->f_6 = 0;
	(uParam0[57 /*12*/])->f_7 = 0;
	(uParam0[57 /*12*/])->f_9 = 0;
	(uParam0[57 /*12*/])->f_10 = 0;
	(uParam0[58 /*12*/])->f_1 = { 75.6596f, -1897.356f, 20.7856f };
	(uParam0[58 /*12*/])->f_4 = 43.5654f;
	(uParam0[58 /*12*/])->f_5 = 1;
	(uParam0[58 /*12*/])->f_6 = 2;
	(uParam0[58 /*12*/])->f_7 = 2;
	(uParam0[58 /*12*/])->f_9 = 0;
	(uParam0[58 /*12*/])->f_10 = 0;
	(uParam0[58 /*12*/])->f_11 = 1;
	(uParam0[59 /*12*/])->f_1 = { 8.4098f, -1843.568f, 23.3954f };
	(uParam0[59 /*12*/])->f_4 = 45.1052f;
	(uParam0[59 /*12*/])->f_5 = 1;
	(uParam0[59 /*12*/])->f_6 = 0;
	(uParam0[59 /*12*/])->f_7 = 0;
	(uParam0[59 /*12*/])->f_9 = 0;
	(uParam0[59 /*12*/])->f_10 = 0;
	(uParam0[60 /*12*/])->f_1 = { 77.1253f, -1931.645f, 19.8003f };
	(uParam0[60 /*12*/])->f_4 = 52.025f;
	(uParam0[60 /*12*/])->f_5 = 0;
	(uParam0[60 /*12*/])->f_6 = 0;
	(uParam0[60 /*12*/])->f_7 = 0;
	(uParam0[60 /*12*/])->f_9 = 1;
	(uParam0[60 /*12*/])->f_10 = 0;
	(uParam0[61 /*12*/])->f_1 = { 14.8813f, -1880.98f, 22.2229f };
	(uParam0[61 /*12*/])->f_4 = 48.6704f;
	(uParam0[61 /*12*/])->f_5 = 0;
	(uParam0[61 /*12*/])->f_6 = 0;
	(uParam0[61 /*12*/])->f_7 = 0;
	(uParam0[61 /*12*/])->f_9 = 1;
	(uParam0[61 /*12*/])->f_10 = 0;
	(uParam0[62 /*12*/])->f_1 = { 52.07f, -1919.99f, 20.57f };
	(uParam0[62 /*12*/])->f_4 = 231.1549f;
	(uParam0[62 /*12*/])->f_5 = 1;
	(uParam0[62 /*12*/])->f_6 = 2;
	(uParam0[62 /*12*/])->f_7 = 2;
	(uParam0[62 /*12*/])->f_9 = 1;
	(uParam0[62 /*12*/])->f_10 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if ((uParam0[iVar0 /*12*/])->f_10 == 0)
		{
			(*uParam0)[iVar0 /*12*/] = TASK::ADD_COVER_POINT((uParam0[iVar0 /*12*/])->f_1, (uParam0[iVar0 /*12*/])->f_4, (uParam0[iVar0 /*12*/])->f_5, (uParam0[iVar0 /*12*/])->f_6, (uParam0[iVar0 /*12*/])->f_7, (uParam0[iVar0 /*12*/])->f_11);
		}
		(uParam0[iVar0 /*12*/])->f_8 = SYSTEM::VDIST2(Local_333, (uParam0[iVar0 /*12*/])->f_1);
		iVar0++;
	}
}













int func_666(int iParam0)//Position - 0x73C53
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	var uVar10;
	struct<3> Var11;
	struct<3> Var14;
	var uVar17;
	var uVar18;
	var uVar19;
	char* sVar20;
	var uVar21;
	
	MISC::SET_BIT(&(Local_704.f_13), 20);
	func_685(&iLocal_1041);
	func_679(&(Local_4080[0 /*29*/].f_12));
	func_649(&iLocal_910);
	func_675(&iLocal_894);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 239, 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 228, 1);
	}
	if (!PED::IS_PED_INJURED(Local_430))
	{
		PED::SET_PED_RESET_FLAG(Local_430, 239, 1);
		PED::SET_PED_RESET_FLAG(Local_430, 228, 1);
	}
	if (!PED::IS_PED_INJURED(Local_401))
	{
		PED::SET_PED_RESET_FLAG(Local_401, 239, 1);
		PED::SET_PED_RESET_FLAG(Local_401, 228, 1);
	}
	if (HUD::DOES_BLIP_EXIST(Local_517.f_1))
	{
		if (GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_517, 0))
		{
			if (GlobalFunc_663("FRA1_GIV", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			HUD::REMOVE_BLIP(&(Local_517.f_1));
		}
	}
	if (iLocal_1054 == 0)
	{
		if (iLocal_1053 == 0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_704.f_5))
			{
				PATHFIND::SET_GPS_DISABLED_ZONE((32.45911f - 42f), (-1468.718f - 42f), (35.1387f - 8f), (32.45911f + 42f), (-1468.718f + 42f), (35.1387f + 8f));
				iLocal_1053 = 1;
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(Local_704.f_5))
			{
				PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
				iLocal_1053 = 0;
			}
			if (HUD::DOES_BLIP_EXIST(Local_704.f_5))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 32.45911f, -1468.718f, 35.1387f, 42f, 42f, 8f, 0, 1, 0) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -52.99124f, -1465.018f, 36.12883f, 64f, 64f, 8f, 0, 1, 0))
				{
					PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_1054 = 1;
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_517, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) != 1)
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -13.81f, -1454.59f, 29.49f, 1f, 20000, 0.25f, 1, 1193033728);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -14.39f, -1456.48f, 29.41f, 1f, 20000, 0.25f, 1, 1193033728);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -18.12f, -1456.95f, 29.46f, 1f, 20000, 0.25f, 0, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_401))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_401))
					{
						if ((!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_401) && !TASK::GET_SCRIPT_TASK_STATUS(Local_401, -1794415470) == 1) && !TASK::GET_SCRIPT_TASK_STATUS(Local_401, 242628503) == 1)
						{
							PED::FORCE_PED_MOTION_STATE(Local_401, -668482597, 0, 1, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_401, 1);
							TASK::TASK_ENTER_VEHICLE(Local_401, Local_517, 20000, 0, 1f, 262145, 0);
						}
					}
				}
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_517, 2, false);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_517, 3, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_517.f_1))
				{
					Local_517.f_1 = GlobalFunc_7055(Local_517, 0, 0);
				}
				func_97("FRA1_GIV", 7500, 1);
			}
			*iParam0++;
			break;
		
		case 1:
			if (GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_517, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				GlobalFunc_2918();
			}
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_401)) && !PED::IS_PED_INJURED(Local_430)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
				if (iLocal_919 == 0)
				{
					iVar1 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 30) * 255f));
					iVar2 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 31) * 255f));
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 1)
					{
						if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if ((iVar1 < -20 || iVar1 > 20) || (iVar2 < -20 || iVar2 > 20))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, true);
								iLocal_919 = 1;
							}
						}
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 7)
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, true);
						iLocal_919 = 1;
					}
				}
				if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_517) && PED::IS_PED_SITTING_IN_VEHICLE(Local_401, Local_517)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_430, Local_517))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
					*iParam0++;
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_517, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_517.f_1))
					{
						Local_517.f_1 = GlobalFunc_7055(Local_517, 0, 0);
					}
					if (!func_102("FRA1_GBIV"))
					{
						func_97("FRA1_GBIV", 7500, 1);
						func_98("FRA1_GBIV", 1);
					}
				}
				else
				{
					if (func_102("FRA1_GBIV"))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(Local_517.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_517.f_1));
					}
				}
			}
			if (func_102("F1_SDRVE"))
			{
				if (!GlobalFunc_111())
				{
					*iParam0++;
				}
			}
			break;
		
		case 3:
			if (HUD::DOES_BLIP_EXIST(Local_517.f_1))
			{
				HUD::REMOVE_BLIP(&(Local_517.f_1));
			}
			if (func_673(&Local_704, 99.07f, -1945.1f, 19.73f, 3f, 3f, 2f, 1, Local_401, Local_430, 0, Local_517, "FRA1_GROVE", "CMN_LLEAVE", "CMN_TLEAVE", "FRA1_PICKUP", "FRA1_PICKUP", "FRA1_GIV", "FRA1_GBIV", 0, 1, 1, -1))
			{
				func_109(&Local_4080, 0, 1, 1);
				func_137(&Local_4168, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bmx"));
				GlobalFunc_7629();
				iLocal_917 = 1;
				RECORDING::_0x293220DA1B46CEBC(5f, 8f, 4);
				*iParam0++;
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_GET_TO_GROVE_ST"))
			{
				if (HUD::DOES_BLIP_EXIST(Local_704.f_5))
				{
					AUDIO::START_AUDIO_SCENE("FRANKLIN_1_GET_TO_GROVE_ST");
				}
			}
			if (GlobalFunc_331() || GlobalFunc_2233())
			{
				if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fra_1_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_330, 1) < 100f)
			{
				CUTSCENE::REQUEST_CUTSCENE("fra_1_mcs_1", 8);
				STREAMING::REQUEST_IPL("SC1_27_Cut");
				STREAMING::REQUEST_MODEL(Local_552.f_1);
				STREAMING::REQUEST_ANIM_DICT("missfra1leadinoutmcs_1");
				STREAMING::REQUEST_CLIP_SET("move_ped_wpn_jerrycan_generic");
				WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_smg"), 31, 0);
				WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pumpshotgun"), 31, 0);
				WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
				STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_smg")));
				STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pumpshotgun")));
				STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle")));
				GlobalFunc_2943(&Local_568, 1);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_908(1), 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", func_908(2), 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_401, 0);
				}
			}
			else
			{
				if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fra_1_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_530(Local_517, 6f, 1, 1056964608, 0, 1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
				{
					VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_517, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_517, 0, 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_517, 0);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				Local_488.f_12 = 0;
				Local_401.f_12 = 0;
				Local_430.f_12 = 0;
				Local_488.f_15 = 0;
				Local_401.f_15 = 0;
				Local_430.f_15 = 0;
				AUDIO::STOP_AUDIO_SCENE("FRANKLIN_1_GET_TO_GROVE_ST");
				func_35(&Local_704, 0);
				*iParam0++;
			}
			break;
		
		case 5:
			GlobalFunc_688();
			PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if ((GlobalFunc_1461(Local_401, Local_517, 0) && GlobalFunc_1461(Local_430, Local_517, 0)) && GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_517))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			}
			if (iLocal_1052 == 0)
			{
				if (iLocal_1051 == 1 || func_669(&Local_704, 85.99f, -1957.19f, 19.75f, 1.25f, 1.25f, 2f, 1, "FRA1_HOUSE", 1, 1, -1))
				{
					func_35(&Local_704, 0);
					iLocal_1052 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_401))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_401))
				{
					PED::SET_PED_RESET_FLAG(Local_401, 319, 1);
					switch (Local_401.f_12)
					{
						case 0:
							if (Local_401.f_15 == 0)
							{
								if (func_102("F1_MCS1L_1"))
								{
									Local_552.f_2 = { ENTITY::GET_ENTITY_COORDS(Local_401, 1) };
									Local_552.f_5 = { 0f, 0f, 0f };
									if (func_240(&Local_552, 0))
									{
										ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_552, Local_401, PED::GET_PED_BONE_INDEX(Local_401, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										ENTITY::PLAY_ENTITY_ANIM(Local_552, "money_bag", "missfra1leadinoutmcs_1", 1000f, 1, 0, 0, 0, 0);
										ENTITY::SET_ENTITY_VISIBLE(Local_552, 0);
									}
									PED::REMOVE_PED_FROM_GROUP(Local_401);
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_401, "move_ped_wpn_jerrycan_generic");
									Var3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfra1leadinoutmcs_1", "_leadin_intro_lamar", Local_342, Local_345, 0, 2) };
									Var6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfra1leadinoutmcs_1", "_leadin_intro_lamar", Local_342, Local_345, 0, 2) };
									TASK::CLEAR_SEQUENCE_TASK(&uVar9);
									TASK::OPEN_SEQUENCE_TASK(&uVar9);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 87.99f, -1954.83f, 19.76f, (1f + 0.2f), 20000, 0.25f, 1, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var3, (1f + 0.2f), 20000, 0.25f, 512, Var6.f_2);
									TASK::TASK_ACHIEVE_HEADING(0, Var6.f_2, 0);
									TASK::TASK_STAND_STILL(0, 10);
									TASK::CLOSE_SEQUENCE_TASK(uVar9);
									TASK::TASK_PERFORM_SEQUENCE(Local_401, uVar9);
									TASK::CLEAR_SEQUENCE_TASK(&uVar9);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_401, 128);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_401, 16);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_401, 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_401, 1);
									Local_401.f_15 = 1;
								}
							}
							if (Local_401.f_15 == 1)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_552))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_552))
									{
										if (!ENTITY::IS_ENTITY_VISIBLE(Local_552))
										{
											if (!PED::IS_PED_IN_ANY_VEHICLE(Local_401, 0))
											{
												ENTITY::SET_ENTITY_VISIBLE(Local_552, 1);
											}
										}
									}
								}
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_401, 242628503) == 7)
								{
									Local_401.f_15 = 0;
									Local_401.f_12++;
								}
							}
							break;
						
						case 1:
							if (Local_401.f_15 == 0)
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("missfra1leadinoutmcs_1"))
								{
									TASK::CLEAR_SEQUENCE_TASK(&uVar10);
									TASK::OPEN_SEQUENCE_TASK(&uVar10);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutmcs_1", "_leadin_intro_lamar", Local_342, Local_345, 4f, -4f, -1, 790536, 0, 2, 0);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutmcs_1", "_leadin_loop_lamar", Local_342, Local_345, 4f, -4f, -1, 790537, 0, 2, 0);
									TASK::CLOSE_SEQUENCE_TASK(uVar10);
									TASK::TASK_PERFORM_SEQUENCE(Local_401, uVar10);
									TASK::CLEAR_SEQUENCE_TASK(&uVar10);
									TASK::TASK_LOOK_AT_ENTITY(Local_401, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
									PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_401);
									Local_401.f_10 = MISC::GET_GAME_TIMER();
									Local_401.f_11 = 0;
									Local_401.f_15 = 1;
								}
								else
								{
									STREAMING::REQUEST_ANIM_DICT("missfra1leadinoutmcs_1");
								}
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_401, "missfra1leadinoutmcs_1", "_leadin_loop_lamar", 3))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 90.28812f, -1952.259f, 19.63969f, 84.32774f, -1959.426f, 23.12675f, 8f, 0, 1, 0))
								{
									iLocal_1051 = 1;
									Local_401.f_15 = 0;
									Local_401.f_12++;
								}
							}
							break;
						
						case 2:
							if (Local_401.f_15 == 0)
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("missfra1leadinoutmcs_1"))
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(Local_401, "missfra1leadinoutmcs_1", "_leadin_action_lamar", Local_342, Local_345, 8f, -8f, -1, 790538, 0, 2, 0);
									PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_401);
									Local_401.f_15 = 1;
								}
								else
								{
									STREAMING::REQUEST_ANIM_DICT("missfra1leadinoutmcs_1");
								}
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_401, "missfra1leadinoutmcs_1", "_leadin_action_lamar", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(Local_401, "missfra1leadinoutmcs_1", "_leadin_action_lamar", 1.25f);
							}
							break;
					}
					if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_401, "missfra1leadinoutmcs_1", "_leadin_loop_lamar", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_401, "missfra1leadinoutmcs_1", "_leadin_loop_lamar", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_401, "missfra1leadinoutmcs_1", "_leadin_action_lamar", 3))
					{
						PED::SET_PED_CAPSULE(Local_401, 0.25f);
						PED::SET_PED_RESET_FLAG(Local_401, 129, 1);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_430))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_430))
				{
					PED::SET_PED_RESET_FLAG(Local_430, 319, 1);
					switch (Local_430.f_12)
					{
						case 0:
							if (Local_430.f_15 == 0)
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(Local_401, 0))
								{
									Var11 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfra1leadinoutmcs_1", "_leadin_action_trevor", Local_348, Local_351, 0, 2) };
									Var14 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfra1leadinoutmcs_1", "_leadin_action_trevor", Local_348, Local_351, 0, 2) };
									PED::REMOVE_PED_FROM_GROUP(Local_430);
									TASK::CLEAR_SEQUENCE_TASK(&uVar17);
									TASK::OPEN_SEQUENCE_TASK(&uVar17);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 86.44f, -1955.48f, 19.77f, (1f - 0.2f), 20000, 0.25f, 1, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var11, (1f - 0.2f), 20000, 0.25f, 512, Var14.f_2);
									TASK::TASK_ACHIEVE_HEADING(0, Var14.f_2, 0);
									TASK::CLOSE_SEQUENCE_TASK(uVar17);
									TASK::TASK_PERFORM_SEQUENCE(Local_430, uVar17);
									TASK::CLEAR_SEQUENCE_TASK(&uVar17);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_430, 128);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_430, 16);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_430, 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_430, 1);
									Local_430.f_15 = 1;
								}
							}
							if (Local_430.f_15 == 1)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_430, 242628503) == 7)
								{
									Local_430.f_15 = 0;
									Local_430.f_12++;
								}
							}
							break;
						
						case 1:
							if (Local_430.f_15 == 0)
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_430, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
								Local_430.f_15 = 1;
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 90.28812f, -1952.259f, 19.63969f, 84.32774f, -1959.426f, 23.12675f, 8f, 0, 1, 0))
							{
								Local_430.f_15 = 0;
								Local_430.f_12++;
							}
							break;
						
						case 2:
							if (Local_430.f_15 == 0)
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("missfra1leadinoutmcs_1"))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_401, "missfra1leadinoutmcs_1", "_leadin_action_lamar", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_430, "missfra1leadinoutmcs_1", "_leadin_action_trevor", 4f, -4f, -1, 786442, 0, 0, 0, 0);
										Local_430.f_15 = 1;
									}
								}
								else
								{
									STREAMING::REQUEST_ANIM_DICT("missfra1leadinoutmcs_1");
								}
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_430, "missfra1leadinoutmcs_1", "_leadin_action_trevor", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(Local_430, "missfra1leadinoutmcs_1", "_leadin_action_trevor", 1.25f);
							}
							break;
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_430, "missfra1leadinoutmcs_1", "_leadin_action_trevor", 3))
					{
						PED::SET_PED_CAPSULE(Local_430, 0.25f);
						PED::SET_PED_RESET_FLAG(Local_430, 129, 1);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_488))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_488))
				{
					switch (Local_488.f_12)
					{
						case 0:
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_401, 0))
							{
								if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(Local_430, Local_517, 1, 0, 0) && VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(Local_430, Local_517, 2, 0, 0))
								{
									if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1043))
									{
										iLocal_1043 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1043, 0);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1043, Local_517, -1);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
										{
											ENTITY::PLAY_ENTITY_ANIM(Local_517, "_open_van_door_van", "missfra1leadinoutmcs_1", 1000f, 0, 0, 0, 0f, 262144);
										}
										if (ENTITY::IS_ENTITY_ATTACHED(Local_488))
										{
											ENTITY::DETACH_ENTITY(Local_488, 1, 1);
										}
										PED::SET_PED_CAN_RAGDOLL(Local_488, 1);
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_488);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_488, iLocal_1043, "missfra1leadinoutmcs_1", "chop_van_getout", 1000f, -4f, 5, 0, 1148846080, 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_488, 0, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_488, 1);
									}
								}
								else
								{
									if (ENTITY::IS_ENTITY_ATTACHED(Local_488))
									{
										ENTITY::DETACH_ENTITY(Local_488, 1, 1);
									}
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_488);
									GlobalFunc_2901(Local_488, 91.15f, -1945.23f, 19.74f, 0f, 0, 0, 0);
								}
								STREAMING::REMOVE_ANIM_DICT(func_668());
								Local_488.f_15 = 0;
								Local_488.f_12++;
							}
							break;
						
						case 1:
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1043))
							{
								Local_488.f_15 = 0;
								Local_488.f_12++;
							}
							break;
						
						case 2:
							if (Local_488.f_15 == 0)
							{
								STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@base");
								STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@enter");
								STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@idle_a");
								TASK::CLEAR_SEQUENCE_TASK(&uVar18);
								TASK::OPEN_SEQUENCE_TASK(&uVar18);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 89.63f, -1954.82f, 19.84f, (1f - 0.4f), 60000, 0.25f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 88.25f, -1956.1f, 19.83f, (1f - 0.4f), 60000, 0.25f, 512, 95f);
								TASK::CLOSE_SEQUENCE_TASK(uVar18);
								TASK::TASK_PERFORM_SEQUENCE(Local_488, uVar18);
								TASK::CLEAR_SEQUENCE_TASK(&uVar18);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_488, 1);
								Local_488.f_15 = 1;
							}
							if (Local_488.f_15 == 1)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(Local_488, 88.25f, -1956.1f, 19.83f, 1f, 1f, 1f, 0, 1, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_488, 242628503) == 7)
									{
										if ((STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_sitting@base") && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_sitting@enter")) && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_sitting@idle_a"))
										{
											Local_488.f_15 = 0;
											Local_488.f_12++;
										}
									}
								}
							}
							break;
						
						case 3:
							if (Local_488.f_15 == 0)
							{
								TASK::CLEAR_SEQUENCE_TASK(&uVar19);
								TASK::OPEN_SEQUENCE_TASK(&uVar19);
								TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_sitting@enter", "enter", 4f, -4f, -1, 786440, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_sitting@base", "base", 4f, -4f, -1, 786441, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar19);
								TASK::TASK_PERFORM_SEQUENCE(Local_488, uVar19);
								TASK::CLEAR_SEQUENCE_TASK(&uVar19);
								PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_488, 32);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 128);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 16);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_488, 1);
								Local_488.f_8 = MISC::GET_GAME_TIMER();
								Local_488.f_10 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 7501);
								Local_488.f_15 = 1;
							}
							if (Local_488.f_15 == 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_488, "creatures@rottweiler@amb@world_dog_sitting@base", "base", 3))
								{
									if (GlobalFunc_2521(Local_488.f_10, Local_488.f_8))
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												sVar20 = "idle_a";
												break;
											
											case 1:
												sVar20 = "idle_b";
												break;
											
											case 2:
												sVar20 = "idle_c";
												break;
										}
										TASK::CLEAR_SEQUENCE_TASK(&uVar21);
										TASK::OPEN_SEQUENCE_TASK(&uVar21);
										TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_sitting@idle_a", sVar20, 4f, -4f, -1, 786440, 0, 0, 0, 0);
										TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_sitting@base", "base", 4f, -4f, -1, 786441, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uVar21);
										TASK::TASK_PERFORM_SEQUENCE(Local_488, uVar21);
										TASK::CLEAR_SEQUENCE_TASK(&uVar21);
										Local_488.f_8 = MISC::GET_GAME_TIMER();
										Local_488.f_9 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 7501);
									}
								}
							}
							break;
						}
					}
			}
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_488)) && !PED::IS_PED_INJURED(Local_401)) && !PED::IS_PED_INJURED(Local_430))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_908(2), 86.65532f, -1959.259f, 19.62671f, 84.2616f, -1957.283f, 22.62671f, 3.5f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_401, 86.65532f, -1959.259f, 19.62671f, 84.2616f, -1957.283f, 22.62671f, 3.5f, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_401, "missfra1leadinoutmcs_1", "_leadin_action_lamar", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_401, "missfra1leadinoutmcs_1", "_leadin_action_lamar") > 0.725f)
						{
							PED::REMOVE_PED_FROM_GROUP(Local_488);
							STREAMING::REMOVE_ANIM_DICT("missfra1leadinoutmcs_1");
							STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@base");
							STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@enter");
							STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@idle_a");
							STREAMING::REMOVE_CLIP_SET("move_ped_wpn_jerrycan_generic");
							PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_401);
							VEHICLE::REMOVE_VEHICLE_ASSET(GlobalFunc_5112(19, 0));
							TASK::TASK_CLEAR_LOOK_AT(Local_401);
							TASK::TASK_CLEAR_LOOK_AT(Local_430);
							func_35(&Local_704, 0);
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}


char* func_668()//Position - 0x75161
{
	return "MISSCHOP_VEHICLE@BACK_OF_VAN";
}

int func_669(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11)//Position - 0x7516E
{
	return func_42(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 1, 0, 0, 0, 0, sParam8, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam9, GlobalFunc_648(), 0, 0, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}




bool func_673(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)//Position - 0x751E8
{
	return func_42(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, iParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}


void func_675(int iParam0)//Position - 0x7526A
{
	if (*iParam0 > 1 && *iParam0 < 3)
	{
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0) && !PED::IS_PED_INJURED(Local_401)) && !PED::IS_PED_INJURED(func_908(1))) && !PED::IS_PED_INJURED(func_908(2)))
		{
			if (HUD::DOES_BLIP_EXIST(Local_704.f_5))
			{
				if (GlobalFunc_111())
				{
					if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
					}
				}
				if (VEHICLE::IS_VEHICLE_STOPPED(Local_517) && ENTITY::IS_ENTITY_UPSIDEDOWN(Local_517))
				{
					if (!func_102("F1_GDVUD"))
					{
						if (iLocal_902 == 0)
						{
							if (GlobalFunc_111())
							{
								Local_896 = { GlobalFunc_514() };
								GlobalFunc_4956();
							}
							if (!GlobalFunc_5172(&Local_704, 1))
							{
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_GDVUD", 8, 0, 0, 0))
								{
									iLocal_902 = 1;
									func_98("F1_GDVUD", 1);
								}
							}
						}
					}
				}
			}
			else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (iLocal_902 == 0)
				{
					if (GlobalFunc_111())
					{
						Local_896 = { GlobalFunc_514() };
						GlobalFunc_4956();
					}
					if (!GlobalFunc_5172(&Local_704, 1))
					{
						if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_WNTD", 8, 0, 0, 0))
						{
							iLocal_902 = 1;
						}
					}
				}
			}
			else if (GlobalFunc_111())
			{
				if (!GlobalFunc_620())
				{
					GlobalFunc_619(1);
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			iLocal_895 = MISC::GET_GAME_TIMER();
			*iParam0++;
			break;
		
		case 1:
			if (((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0) && !PED::IS_PED_INJURED(func_908(1))) && !PED::IS_PED_INJURED(func_908(2))) && !PED::IS_PED_INJURED(Local_401))
			{
				if (!func_102("F1_SDRVE"))
				{
					if (GlobalFunc_2521(1500, iLocal_895))
					{
						if (!GlobalFunc_111() && !GlobalFunc_5172(&Local_704, 1))
						{
							if ((PED::IS_PED_IN_VEHICLE(func_908(1), Local_517, 1) && PED::IS_PED_IN_VEHICLE(func_908(2), Local_517, 1)) && PED::IS_PED_IN_VEHICLE(Local_401, Local_517, 1))
							{
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_SDRVE", 7, 0, 0, 0))
								{
									func_98("F1_SDRVE", 1);
								}
							}
						}
					}
				}
				else if (!GlobalFunc_111())
				{
					*iParam0++;
				}
			}
			break;
		
		case 2:
			if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0) && !ENTITY::IS_ENTITY_UPSIDEDOWN(Local_517)) && !PED::IS_PED_INJURED(func_908(1))) && !PED::IS_PED_INJURED(func_908(2))) && !PED::IS_PED_INJURED(Local_401))
			{
				if (HUD::DOES_BLIP_EXIST(Local_704.f_5))
				{
					if (!func_102("F1_DRIVE"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_704.f_5) && !GlobalFunc_5172(&Local_704, 1))
						{
							if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_DRIVE", 7, 0, 0, 0))
							{
								func_98("F1_DRIVE", 1);
								iLocal_902 = 0;
							}
						}
					}
					else if (iLocal_902 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10626(&uLocal_729, "FKN1AUD", "F1_DRIVE", &Local_896, 7, 0, 0))
							{
								iLocal_902 = 0;
								func_98("F1_GDVUD", 0);
							}
						}
					}
					if (!func_102("F1_ALLEY") && !func_102("F1_ALLEY2"))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_517, -12.46575f, -1776.52f, 29.69168f, 24f, 24f, 4f, 0, 1, 0))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
									{
										case 0:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_ALLEY", 7, 0, 0, 0))
											{
												func_98("F1_ALLEY", 1);
												iLocal_902 = 0;
											}
											break;
										
										case 1:
											if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_ALLEY2", 7, 0, 0, 0))
											{
												func_98("F1_ALLEY2", 1);
												iLocal_902 = 0;
											}
											break;
										}
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
					}
					else if (iLocal_902 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10626(&uLocal_729, "FKN1AUD", "F1_ALLEY", &Local_896, 7, 0, 0))
							{
								iLocal_902 = 0;
								func_98("F1_GDVUD", 0);
							}
						}
					}
					if (!func_102("F1_DRVE2"))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_517, -46.28057f, -1832.291f, 27.41996f, 58f, 32f, 5f, 0, 1, 0))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_DRVE2", 7, 0, 0, 0))
								{
									func_98("F1_DRVE2", 1);
									func_98("F1_ALLEY", 1);
									iLocal_902 = 0;
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
					}
					else if (iLocal_902 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10626(&uLocal_729, "FKN1AUD", "F1_DRVE2", &Local_896, 7, 0, 0))
							{
								iLocal_902 = 0;
								func_98("F1_GDVUD", 0);
							}
						}
					}
				}
				if (!func_102("F1_LCAR"))
				{
					if (iLocal_917 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10630(&uLocal_729, "FKN1AUD", "F1_LCAR", "F1_LCAR_01", 8, 0, 0))
							{
								func_98("F1_LCAR", 1);
								iLocal_895 = MISC::GET_GAME_TIMER();
								*iParam0++;
							}
						}
						else
						{
							GlobalFunc_5105();
						}
					}
				}
			}
			break;
		
		case 3:
			if (!func_102("F1_MCS1L_1"))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_704, 1))
					{
						if (GlobalFunc_10630(&uLocal_729, "FKN1AUD", "F1_MCS1L", "F1_MCS1L_1", 7, 0, 0))
						{
							func_98("F1_MCS1L_1", 1);
						}
					}
				}
			}
			if (!func_102("F1_MCS1L_2"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_401))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_401))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_401, "missfra1leadinoutmcs_1", "_leadin_action_lamar", 3))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_704, 1))
								{
									if (GlobalFunc_10630(&uLocal_729, "FKN1AUD", "F1_MCS1L", "F1_MCS1L_2", 7, 0, 0))
									{
										func_98("F1_MCS1L_2", 1);
									}
								}
							}
							else
							{
								GlobalFunc_4956();
							}
						}
					}
				}
			}
			if (!func_102("F1_HURRY"))
			{
				if (!func_102("F1_MCS1L_2"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_401))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_401))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_401, "missfra1leadinoutmcs_1", "_leadin_intro_lamar", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_401, "missfra1leadinoutmcs_1", "_leadin_loop_lamar", 3))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_704, 1))
									{
										if (GlobalFunc_2521(10000, Local_401.f_10))
										{
											if (!func_102("F1_HURRY2"))
											{
												if (GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_517, 0))
												{
													if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_HURRY2", 7, 0, 0, 0))
													{
														Local_401.f_10 = MISC::GET_GAME_TIMER();
														Local_401.f_11++;
														if (Local_401.f_11 == 2)
														{
															func_98("F1_HURRY", 1);
														}
														func_98("F1_HURRY2", 1);
														TASK::TASK_LOOK_AT_ENTITY(Local_401, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
													}
												}
											}
											if (!func_102("F1_HURRY1"))
											{
												if (GlobalFunc_10618(&uLocal_729, "FKN1AUD", "F1_HURRY1", 7, 0, 0, 0))
												{
													Local_401.f_10 = MISC::GET_GAME_TIMER();
													Local_401.f_11++;
													if (Local_401.f_11 == 2)
													{
														func_98("F1_HURRY", 1);
													}
													TASK::TASK_LOOK_AT_ENTITY(Local_401, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}




void func_679(var uParam0)//Position - 0x75AF3
{
	int iVar0;
	
	iVar0 = 0;
	switch (*uParam0)
	{
		case 0:
			if (Global_86815 == 1)
			{
				Global_86815 = 0;
				*uParam0 = -1;
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						Global_86815 = 0;
						*uParam0 = -1;
						break;
					
					case 1:
						Global_86815 = 1;
						*uParam0++;
						break;
					}
			}
			break;
		
		case 1:
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_4168[0 /*13*/].f_7, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_4168[1 /*13*/].f_7, sLocal_311);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_4168[2 /*13*/].f_7, sLocal_311);
			STREAMING::REQUEST_MODEL(joaat("bmx"));
			STREAMING::REQUEST_MODEL(joaat("g_m_y_famfor_01"));
			STREAMING::REQUEST_MODEL(joaat("g_m_y_famca_01"));
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_517, 18.16433f, -1794.524f, 25.57104f, -34.21064f, -1751.417f, 34.14804f, 36f, 0, 1, 0))
			{
				fLocal_986 = 0.715f;
				fLocal_989 = 13500f;
				fLocal_987 = 0.875f;
				fLocal_990 = 16300f;
				fLocal_988 = 0.795f;
				fLocal_991 = 15800f;
				*uParam0++;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_517, 58.18484f, -1718.745f, 27.29174f, -16.2411f, -1752.141f, 34.29174f, 32f, 0, 1, 0))
			{
				fLocal_986 = 0.715f;
				fLocal_989 = 13525f;
				fLocal_987 = 0.875f;
				fLocal_990 = 16375f;
				fLocal_988 = 0.795f;
				fLocal_991 = 15850f;
				*uParam0++;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_517, 56.54251f, -1908.32f, 19.47326f, 132.0849f, -1819.205f, 32.22878f, 96f, 0, 1, 0))
			{
				fLocal_986 = 0.735f;
				fLocal_989 = 2400f;
				fLocal_987 = 0.85f;
				fLocal_990 = 2700f;
				fLocal_988 = 0.775f;
				fLocal_991 = 2475f;
				*uParam0++;
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(Local_517, -96.57704f, -1786.544f, 32.03547f, 46f, 46f, 8f, 0, 1, 0))
			{
				fLocal_986 = 0.735f;
				fLocal_989 = 6400f;
				fLocal_987 = 0.85f;
				fLocal_990 = 6700f;
				fLocal_988 = 0.775f;
				fLocal_991 = 6500f;
				*uParam0++;
			}
			break;
		
		case 2:
			if (func_138(&(Local_4168[0 /*13*/]), 0, 0, 145, 1, -1, 58, 0, 0, 0))
			{
				if (func_138(&(Local_4168[1 /*13*/]), 0, 0, 145, 1, -1, 4, 0, 0, 0))
				{
					if (func_138(&(Local_4168[2 /*13*/]), 0, 0, 145, 1, -1, 37, 0, 0, 0))
					{
						if (func_241(&(Local_4080[2 /*29*/]), 0, iLocal_398, 0, 145, 0, 1, 0, Local_4168[2 /*13*/], -1, 1))
						{
							if (func_241(&(Local_4080[1 /*29*/]), 0, iLocal_398, 0, 145, 0, 1, 0, Local_4168[1 /*13*/], -1, 1))
							{
								if (func_241(&(Local_4080[0 /*29*/]), 0, iLocal_398, 0, 145, 0, 1, 0, Local_4168[0 /*13*/], -1, 1))
								{
									if (!PED::IS_PED_INJURED(Local_4080[0 /*29*/]))
									{
										PED::SET_PED_COMPONENT_VARIATION(Local_4080[0 /*29*/], 0, 1, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_4080[0 /*29*/], 3, 1, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_4080[0 /*29*/], 4, 0, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_4080[0 /*29*/], 8, 0, 1, 0);
										PED::SET_PED_PROP_INDEX(Local_4080[0 /*29*/], 0, 1, 0, false);
									}
									if (!PED::IS_PED_INJURED(Local_4080[1 /*29*/]))
									{
										PED::SET_PED_COMPONENT_VARIATION(Local_4080[1 /*29*/], 0, 1, 2, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_4080[1 /*29*/], 3, 1, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_4080[1 /*29*/], 4, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_4080[1 /*29*/], 8, 0, 1, 0);
										PED::SET_PED_PROP_INDEX(Local_4080[1 /*29*/], 0, 1, 0, false);
									}
									if (!PED::IS_PED_INJURED(Local_4080[2 /*29*/]))
									{
										PED::SET_PED_COMPONENT_VARIATION(Local_4080[2 /*29*/], 0, 1, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_4080[2 /*29*/], 3, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_4080[2 /*29*/], 4, 0, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(Local_4080[2 /*29*/], 8, 0, 1, 0);
										PED::SET_PED_PROP_INDEX(Local_4080[2 /*29*/], 0, 0, 0, false);
									}
									*uParam0++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			func_128(Local_4168[0 /*13*/], sLocal_311, fLocal_986, 0, fLocal_989, 0, 1, 1);
			func_128(Local_4168[1 /*13*/], sLocal_311, fLocal_987, 0, fLocal_990, 0, 1, 1);
			func_128(Local_4168[2 /*13*/], sLocal_311, fLocal_988, 0, fLocal_991, 0, 1, 1);
			*uParam0++;
			break;
		
		case 4:
			if (((((func_684(PLAYER::PLAYER_PED_ID(), &Local_4168) || func_683(PLAYER::PLAYER_PED_ID(), &Local_4080)) || func_684(Local_517, &Local_4168)) || func_683(Local_517, &Local_4080)) || func_682(PLAYER::PLAYER_PED_ID(), &Local_4168)) || func_681(PLAYER::PLAYER_PED_ID(), &Local_4080))
			{
				iVar0 = 0;
				while (iVar0 <= (Local_4168 - 1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4168[iVar0 /*13*/], 0) && !PED::IS_PED_INJURED(Local_4080[iVar0 /*29*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4168[iVar0 /*13*/]);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_4080[iVar0 /*29*/], 128, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_4080[iVar0 /*29*/], 4, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_4080[iVar0 /*29*/], 2, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_4080[iVar0 /*29*/], 8, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_4080[iVar0 /*29*/], 3, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_4080[iVar0 /*29*/], 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_4080[iVar0 /*29*/], 17, 1);
						TASK::TASK_SMART_FLEE_PED(Local_4080[iVar0 /*29*/], PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(Local_4080[iVar0 /*29*/], 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_4080[iVar0 /*29*/]));
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4168[iVar0 /*13*/]));
						VEHICLE::REMOVE_VEHICLE_RECORDING(Local_4168[iVar0 /*13*/].f_7, sLocal_311);
						*uParam0++;
					}
					iVar0++;
				}
			}
			else
			{
				func_680(Local_4080[0 /*29*/], &(Local_4168[0 /*13*/]), &iLocal_929, 8f, sLocal_311, 786597);
				func_680(Local_4080[1 /*29*/], &(Local_4168[1 /*13*/]), &iLocal_929, 8f, sLocal_311, 786597);
				func_680(Local_4080[2 /*29*/], &(Local_4168[2 /*13*/]), &iLocal_929, 8f, sLocal_311, 786597);
			}
			break;
	}
}

void func_680(int iParam0, int iParam1, int iParam2, float fParam3, char* sParam4, int iParam5)//Position - 0x76118
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(iParam0, *uParam1, 0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam1);
				}
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam1) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(*uParam1))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(iParam0, *uParam1, fParam3, iParam5);
					PED::SET_PED_KEEP_TASK(iParam0, 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam1);
					VEHICLE::REMOVE_VEHICLE_RECORDING(iParam1->f_7, sParam4);
				}
				else if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(*iParam1))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam1))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(*iParam1, PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, 0, 1, 0))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam1);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam1, iParam1->f_7, sParam4, fParam3, 786469);
						}
					}
				}
				if (*iParam2 == 0)
				{
					if (!PED::IS_PED_INJURED(iParam0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, *iParam1))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(*iParam1, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, 0, 1, 0))
								{
									VEHICLE::START_VEHICLE_HORN(*iParam1, 1000, 0, 0);
									*iParam2 = 1;
								}
							}
						}
					}
				}
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam1->f_7, sParam4);
			}
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam1->f_7, sParam4);
			}
		}
	}
}

int func_681(int iParam0, var uParam1)//Position - 0x76283
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam1 - 1))
	{
		if (func_212(iParam0, (*uParam1)[iVar0 /*29*/]))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_682(int iParam0, var uParam1)//Position - 0x762BB
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam1 - 1))
	{
		if (func_212(iParam0, (*uParam1)[iVar0 /*13*/]))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_683(int iParam0, var uParam1)//Position - 0x762F3
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= (*uParam1 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar1 /*29*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar1 /*29*/]))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*uParam1)[iVar1 /*29*/], iParam0, 1))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY((*uParam1)[iVar1 /*29*/]);
							iVar0 = 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return iVar0;
}

int func_684(int iParam0, var uParam1)//Position - 0x76361
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= (*uParam1 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar1 /*13*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar1 /*13*/]))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*uParam1)[iVar1 /*13*/], iParam0, 1))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY((*uParam1)[iVar1 /*13*/]);
							iVar0 = 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return iVar0;
}

void func_685(int iParam0)//Position - 0x763CF
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1042))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_488))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_488))
			{
				PED::SET_PED_CAPSULE(Local_488, 0.25f);
				PED::SET_PED_RESET_FLAG(Local_488, 129, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_430))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_430))
			{
				PED::SET_PED_CAPSULE(Local_430, 0.5f);
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1042))
			{
				if (!PED::IS_PED_INJURED(Local_488) && !PED::IS_PED_INJURED(Local_430))
				{
					PED::SET_PED_RESET_FLAG(Local_430, 371, 1);
					PED::SET_PED_RESET_FLAG(Local_430, 319, 1);
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_430, 713668775) == 7)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_430, 150319005) != 1)
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_430, Local_488, -1, 0, 2);
						}
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_488, 713668775) == 7 && TASK::GET_SCRIPT_TASK_STATUS(Local_430, 713668775) == 7)
					{
						*iParam0++;
					}
				}
			}
			else
			{
				*iParam0++;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_517))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_517))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1042))
					{
						iLocal_1042 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1042, Local_517, -1);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1042, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_517, iLocal_1042, "put_chop_in_van_van", "missfra1_tovan", 1000f, -1000f, 8225, 1148846080);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_517);
						if (ENTITY::DOES_ENTITY_EXIST(Local_488))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_488))
							{
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 128);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 32);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 16);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_488, iLocal_1042, "missfra1_tovan", "put_chop_in_van_chop", 1.5f, -4f, 5, 145, 1.5f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_488, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_488, 1);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_430))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_430))
							{
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_430, 128);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_430, 16);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_430, iLocal_1042, "missfra1_tovan", "put_chop_in_van_lam", 1.5f, -4f, 5, 145, 1.5f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_430, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_430, 1);
							}
						}
					}
					else
					{
						*iParam0++;
					}
				}
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_517))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_517))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_430))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_430))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_430, Local_517, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1042))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1042) > 0.9875f)
									{
										TASK::CLEAR_PED_TASKS(Local_430);
										TASK::TASK_CLEAR_LOOK_AT(Local_430);
										PED::SET_PED_INTO_VEHICLE(Local_430, Local_517, 1);
										VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_517, 2, 1, 1, 1);
									}
								}
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1042))
								{
									TASK::CLEAR_PED_TASKS(Local_430);
									TASK::TASK_CLEAR_LOOK_AT(Local_430);
									PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_430, 1);
									PED::SET_PED_INTO_VEHICLE(Local_430, Local_517, 1);
									VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_517, 2, 1, 1, 1);
								}
							}
						}
					}
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1042))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_488))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_488))
							{
								TASK::CLEAR_PED_TASKS(Local_488);
								PED::SET_PED_CAN_RAGDOLL(Local_488, 0);
								func_687(Local_488, Local_517, &uLocal_394, &uLocal_1036, 0, 1, 0, 1, 0.00955187f, -0.951951f, 0.273625f, 0);
							}
						}
						STREAMING::REMOVE_ANIM_DICT("missfra1_tovan");
						*iParam0++;
					}
				}
			}
			break;
		
		case 3:
			func_686(Local_488, Local_517, &uLocal_394, &uLocal_1036, &uLocal_1034, &uLocal_1035, 0);
			if (iLocal_917 == 1)
			{
				*iParam0++;
			}
			break;
	}
}

void func_686(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x7676F
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_ROTATION_VELOCITY(iParam1) };
		Var3 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, 1) };
		fVar6 = ENTITY::GET_ENTITY_SPEED(iParam1);
		fVar7 = (Var3.f_1 - *uParam3);
		fVar7 = (fVar7 / MISC::GET_FRAME_TIME());
		if (Var3.f_1 < 0f)
		{
			Var0.f_2 = (Var0.f_2 * -1f);
		}
		if (Var0.f_2 < -0.5f)
		{
			if (fVar6 >= 6.4f)
			{
				iVar8 = 3;
			}
		}
		else if (Var0.f_2 > 0.5f)
		{
			if (fVar6 >= 6.4f)
			{
				iVar8 = 4;
			}
		}
		else if (fVar7 > 2f)
		{
			iVar8 = 2;
		}
		else if (fVar7 < -8f)
		{
			iVar8 = 1;
		}
		else if ((iParam6 && fVar6 <= 3f) && (MISC::GET_GAME_TIMER() >= *uParam5 || *uParam2 == 5))
		{
			iVar8 = 5;
		}
		else
		{
			iVar8 = 0;
		}
		if (iVar8 != *uParam2 && MISC::GET_GAME_TIMER() >= *uParam4)
		{
			switch (iVar8)
			{
				case 0:
					sVar9 = "CHOP_SIT_LOOP";
					break;
				
				case 1:
					sVar9 = "CHOP_LEAN_FORWARDS_LOOP";
					break;
				
				case 2:
					sVar9 = "CHOP_LEAN_BACK_LOOP";
					break;
				
				case 3:
					sVar9 = "CHOP_LEAN_RIGHT_LOOP";
					break;
				
				case 4:
					sVar9 = "CHOP_LEAN_LEFT_LOOP";
					break;
				
				case 5:
					sVar9 = "CHOP_BARK";
					break;
			}
			*uParam4 = MISC::GET_GAME_TIMER() + 500;
			if (iVar8 == 5)
			{
				*uParam5 = MISC::GET_GAME_TIMER() + 3000;
			}
			TASK::TASK_PLAY_ANIM(iParam0, func_668(), sVar9, 0.8f, -0.8f, -1, 1, 0, 0, 0, 0);
			*uParam2 = iVar8;
		}
		*uParam3 = Var3.f_1;
	}
}

void func_687(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, float fParam8, float fParam9, float fParam10, int iParam11)//Position - 0x76918
{
	char* sVar0;
	float fVar1;
	float fVar2;
	
	if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (bParam5)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		}
		if (bParam4)
		{
			sVar0 = "CHOP_GROWL";
			fVar2 = 206f;
		}
		else
		{
			sVar0 = "CHOP_SIT_LOOP";
			if (!bParam6)
			{
				fVar2 = 0f;
			}
			else
			{
				fVar2 = 11.96f;
			}
		}
		if (bParam5)
		{
			fVar1 = 1000f;
		}
		else
		{
			fVar1 = 4f;
		}
		*uParam2 = 0;
		*uParam3 = 0f;
		func_688(iParam0, iParam1, fVar2, bParam6, bParam7, fParam8, fParam9, fParam10, iParam11);
		TASK::TASK_PLAY_ANIM(iParam0, func_668(), sVar0, fVar1, -8f, -1, 4097, 0, 0, 0, 0);
		if (bParam5)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
		}
	}
}

void func_688(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x769C9
{
	struct<3> Var0;
	var uVar3;
	
	if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (!bParam4)
		{
			if (!bParam3)
			{
				Var0 = { 0f, -0.5f, 0.3f };
			}
			else
			{
				Var0 = { 0.129f, -1.522f, 0.3f };
			}
			uVar3 = fParam2;
		}
		else
		{
			Var0 = { uParam5, uParam6, uParam7 };
			uVar3 = uParam8;
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, 0, Var0, 0f, 0f, uVar3, 0, 0, 0, 1, 2, 1);
	}
}

void func_689()//Position - 0x76A44
{
	iLocal_912 = 1;
	iLocal_913 = 0;
	iLocal_894 = 0;
	Local_401.f_12 = 0;
	Local_401.f_8 = 0;
	Local_401.f_16 = 0;
	Local_401.f_17 = 0;
	Local_401.f_18 = 0;
	Local_401.f_15 = 0;
	Local_401.f_20 = 0;
	Local_401.f_21 = 0;
	Local_430.f_10 = 0;
	Local_430.f_11 = 0;
	Local_430.f_12 = 0;
	Local_430.f_8 = 0;
	Local_430.f_16 = 0;
	Local_430.f_17 = 0;
	Local_430.f_20 = 0;
	Local_430.f_18 = 0;
	Local_430.f_15 = 0;
	Local_430.f_10 = 0;
	Local_430.f_11 = 0;
	Local_459.f_12 = 0;
	Local_459.f_8 = 0;
	Local_459.f_16 = 0;
	Local_459.f_17 = 0;
	Local_459.f_18 = 0;
	Local_459.f_15 = 0;
	Local_459.f_10 = 0;
	Local_459.f_11 = 0;
	iLocal_909 = 0;
	iLocal_910 = 0;
	iLocal_911 = 0;
	Local_488.f_8 = 0;
	Local_488.f_12 = 0;
	iLocal_895 = 0;
	iLocal_904 = 0;
	iLocal_905 = 0;
	iLocal_902 = 0;
	iLocal_903 = 0;
	iLocal_907 = 0;
	iLocal_908 = 0;
	Local_2152[0 /*13*/].f_11 = 0;
	Local_2086[4 /*13*/].f_11 = 0;
	Local_4208[2 /*29*/].f_12 = 0;
	Local_4208[0 /*29*/].f_12 = 0;
	iLocal_919 = 0;
	iLocal_922 = 0;
	iLocal_923 = 0;
	iLocal_927 = 1;
	iLocal_917 = 0;
	iLocal_918 = 0;
	Local_4080[0 /*29*/].f_12 = 0;
	iLocal_929 = 0;
	iLocal_933 = 1;
	Local_543.f_8 = 0;
	iLocal_703 = 0;
	iLocal_4487 = 0;
	iLocal_1014 = 0;
	iLocal_1015 = 0;
	iLocal_1016 = 0;
	iLocal_1017 = 0;
	iLocal_1019 = 0;
	iLocal_1018 = 0;
	iLocal_1028 = 0;
	iLocal_1029 = 0;
	iLocal_1030 = 0;
	iLocal_1031 = 0;
	iLocal_1032 = 0;
	iLocal_1033 = 0;
	iLocal_4488 = 0;
	iLocal_1041 = 0;
	iLocal_1046 = 0;
	StringCopy(&Local_316, "FRA1_GTLAMH", 16);
	StringCopy(&Local_320, "FRA1_GTTREH", 16);
	StringCopy(&Local_324, "FRA1_GTFRAH", 16);
	iLocal_1049 = 1;
	iLocal_1050 = 0;
	iLocal_1051 = 0;
	iLocal_1052 = 0;
	iLocal_1053 = 0;
	iLocal_1054 = 0;
	iLocal_1055 = 0;
	iLocal_1059 = 0;
	iLocal_1060 = 0;
	iLocal_925 = 0;
	iLocal_926 = 0;
	iLocal_906 = 0;
	iLocal_1061 = 0;
	iLocal_1062 = 0;
	iLocal_1063 = 0;
	iLocal_1064 = 0;
}

int func_690(var uParam0)//Position - 0x76C1D
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	var uVar14;
	
	switch (*uParam0)
	{
		case 0:
			if (GlobalFunc_8315() == 1)
			{
				if (GlobalFunc_5927("franklin_1_int", 1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_430, "Trevor", 2, Local_430.f_7, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_488, "Chop", 2, Local_488.f_7, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_401, "Lamar", 2, Local_401.f_7, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_86864.f_9[0], "Denise", 1, joaat("ig_denise"), 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_28[0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[0], 1, 1);
							Local_568 = Global_86864.f_28[0];
							ENTITY::FREEZE_ENTITY_POSITION(Local_568, 0);
							if (ENTITY::IS_ENTITY_ATTACHED(Local_568))
							{
								ENTITY::DETACH_ENTITY(Local_568, 0, 1);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_568, "Denises_Trowel", 0, Local_568.f_1, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_568, "Denises_Trowel", 2, Local_568.f_1, 0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					GlobalFunc_8316(1, 1, 1, 0);
					iLocal_4489 = 0;
					CUTSCENE::START_CUTSCENE(0);
					*uParam0++;
				}
				else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
					func_779(2, "Trevor", 2);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 0, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 1, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 2, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 3, 2, 1, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 4, 5, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 5, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 6, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 7, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 8, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 9, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 10, 1, 2, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chop", 3, 0, GlobalFunc_2578(), 0);
				}
			}
			else if (GlobalFunc_8315() == 2)
			{
				if (GlobalFunc_5927("franklin_1_int", 14))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_86864.f_9[0], "Denise", 1, joaat("ig_denise"), 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_28[0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[0], 1, 1);
							Local_568 = Global_86864.f_28[0];
							ENTITY::FREEZE_ENTITY_POSITION(Local_568, 0);
							if (ENTITY::IS_ENTITY_ATTACHED(Local_568))
							{
								ENTITY::DETACH_ENTITY(Local_568, 0, 1);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_568, "Denises_Trowel", 0, Local_568.f_1, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_568, "Denises_Trowel", 2, Local_568.f_1, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[1]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[1], 1, 1);
							Local_401 = Global_86864.f_9[1];
							func_540(Local_401, 1862763509, 0, 1, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_401, "Lamar", 0, joaat("ig_lamardavis"), 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_401, "Lamar", 2, joaat("ig_lamardavis"), 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[2]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[2], 1, 1);
							Local_488 = Global_86864.f_9[2];
							func_540(Local_488, iLocal_397, 0, 1, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_488, "Chop", 0, GlobalFunc_2579(), 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_488, "Chop", 2, GlobalFunc_2579(), 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[3]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[3], 1, 1);
							Local_459 = Global_86864.f_9[3];
							func_540(Local_459, 1862763509, 0, 1, 0, 0);
							iLocal_624[1] = Local_459;
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_459, "Franklin", 0, joaat("player_one"), 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_459, "Franklin", 2, joaat("player_one"), 0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					GlobalFunc_8316(1, 1, 1, 0);
					iLocal_4489 = 0;
					CUTSCENE::START_CUTSCENE(512);
					*uParam0++;
				}
				else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), 0);
					func_779(1, "Franklin", 2);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chop", 3, 0, GlobalFunc_2578(), 0);
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::GET_CUTSCENE_SECTION_PLAYING() >= 3 && iLocal_4489 == 0)
				{
					RECORDING::_0x48621C9FCA3EBD28(4);
					iLocal_4489 = 1;
				}
				if (func_775() && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					if (GlobalFunc_2251() == PLAYER::GET_PLAYERS_LAST_VEHICLE())
					{
						if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
						{
							GlobalFunc_2882(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -25.0246f, -1467.714f, 29.7815f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 275.6534f);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 1);
							func_760(-25.0246f, -1467.714f, 29.7815f, 275.6534f, 0, 145);
							GlobalFunc_76(24);
						}
					}
				}
				CAM::STOP_GAMEPLAY_HINT(1);
				MISC::CLEAR_AREA_OF_PEDS(-14.12f, -1448.62f, 29.65f, 250f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-14.12f, -1448.62f, 29.65f, 250f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(-14.12f, -1448.62f, 29.65f, 250f, 0);
				MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 30f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_4488 = 0;
				*uParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfra1_tovan");
			STREAMING::REQUEST_ANIM_DICT(func_668());
			VEHICLE::REQUEST_VEHICLE_ASSET(Local_517.f_6, 2);
			func_758(0, &iLocal_4488);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_568))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Denises_Trowel", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Denises_Trowel", 0)))
					{
						Local_568 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Denises_Trowel", 0));
					}
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_517))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
						Local_517 = Global_86864[0];
						if (FIRE::IS_ENTITY_ON_FIRE(Local_517))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_517, 1000);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_517, 1000f);
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_517, 1000f);
							FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_517, 1), 2.5f);
							MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_517, 1), 2.5f, 1, 0, 0, 0);
						}
						ENTITY::SET_ENTITY_COORDS(Local_517, Local_517.f_2, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_517, Local_517.f_5);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_517);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_517, 1);
						VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_517, false);
						VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_517, false);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_517, true);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_517, false, 0);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_517, 0, false);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_517, 1, false);
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 36000)
					{
						func_138(&Local_517, 0, 0, 19, 1, -1, -1, -1, 0, 0);
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(Local_517))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(Local_517, 1);
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_517);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_401))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Lamar", joaat("ig_lamardavis")))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", joaat("ig_lamardavis"))))
					{
						Local_401 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", joaat("ig_lamardavis")));
						func_540(Local_401, 1862763509, 0, 1, 0, 0);
						iLocal_920 = 1;
					}
				}
			}
			if (GlobalFunc_8315() == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_430))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Trevor", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0)))
						{
							Local_430 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0));
							func_540(Local_430, 1862763509, 0, 1, 0, 0);
							iLocal_624[2] = Local_430;
							func_337(Local_430, 1);
						}
					}
				}
			}
			if (GlobalFunc_8315() == 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_459))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Franklin", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0)))
						{
							Local_459 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0));
							func_540(Local_459, 1862763509, 0, 1, 0, 0);
							iLocal_624[1] = Local_459;
							func_337(Local_459, 1);
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_488))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Chop", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chop", 0)))
					{
						Local_488 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chop", 0));
						func_540(Local_488, iLocal_397, 0, 1, 0, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				RECORDING::_0x81CBAE94390F9F89();
			}
			if (CUTSCENE::CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY("Denises_Trowel", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_568))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_568))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_568, Local_568.f_2, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_568, Local_568.f_5, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_568, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (GlobalFunc_8315() != 1)
				{
					if (GlobalFunc_9019(&iLocal_624, 1))
					{
						func_720(&iLocal_624, 1, 1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(func_908(2)))
						{
							Local_430 = func_908(2);
							func_540(Local_430, 1862763509, 0, 1, 0, 0);
							iLocal_624[2] = Local_430;
						}
					}
				}
				if (GlobalFunc_2780() != 1)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneFranklin", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
					}
				}
				if (iLocal_918 == 0)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -13.81f, -1454.59f, 29.49f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -14.39f, -1456.48f, 29.41f, 1f, 20000, 0.25f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -18.12f, -1456.95f, 29.46f, 1f, 20000, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", joaat("cs_lamardavis")))
			{
				if (iLocal_918 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_401))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_401))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
							{
								PED::FORCE_PED_MOTION_STATE(Local_401, -668482597, 0, 1, 0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								TASK::OPEN_SEQUENCE_TASK(&uVar1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -14.57f, -1449.72f, 29.63f, 1f, 20000, 20000f, 1, 1193033728);
								TASK::TASK_ENTER_VEHICLE(0, Local_517, 20000, 0, 1f, 262145, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_401, uVar1);
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_401, 1);
							}
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (iLocal_918 == 0)
				{
					if (GlobalFunc_8315() != 1)
					{
						if (GlobalFunc_9019(&iLocal_624, 1))
						{
							func_720(&iLocal_624, 1, 1, 1);
							if (ENTITY::DOES_ENTITY_EXIST(func_908(2)))
							{
								Local_430 = func_908(2);
								func_540(Local_430, 1862763509, 0, 1, 0, 0);
								iLocal_624[2] = Local_430;
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_430))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_430))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
							{
								Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfra1_tovan", "put_chop_in_van_lam", ENTITY::GET_ENTITY_COORDS(Local_517, 1), ENTITY::GET_ENTITY_ROTATION(Local_517, 2), 0, 2) };
								Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfra1_tovan", "put_chop_in_van_lam", ENTITY::GET_ENTITY_COORDS(Local_517, 1), ENTITY::GET_ENTITY_ROTATION(Local_517, 2), 0, 2) };
								PED::FORCE_PED_MOTION_STATE(Local_430, -668482597, 0, 1, 0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_430, Var2, 0.5f, 20000, 0.25f, 512, Var5.f_2);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_430, 128);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_430, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_430, 1);
							}
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Chop", 0))
			{
				if (iLocal_918 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_488))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_488))
						{
							Var8 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfra1_tovan", "put_chop_in_van_chop", ENTITY::GET_ENTITY_COORDS(Local_517, 1), ENTITY::GET_ENTITY_ROTATION(Local_517, 2), 0, 2) };
							Var11 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfra1_tovan", "put_chop_in_van_chop", ENTITY::GET_ENTITY_COORDS(Local_517, 1), ENTITY::GET_ENTITY_ROTATION(Local_517, 2), 0, 2) };
							GlobalFunc_2901(Local_488, -14.66f, -1450.87f, 29.55f, 183.5236f, 0, 0, 0);
							PED::FORCE_PED_MOTION_STATE(Local_488, -668482597, 0, 1, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_488, Var8, 1.5f, 20000, 0.25f, 512, Var11.f_2);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 128);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 32);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_488, 1);
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if ((((((((((((ENTITY::DOES_ENTITY_EXIST(Local_488) && ENTITY::DOES_ENTITY_EXIST(Local_401)) && ENTITY::DOES_ENTITY_EXIST(Local_430)) && !ENTITY::IS_ENTITY_DEAD(Local_488)) && !ENTITY::IS_ENTITY_DEAD(Local_401)) && !ENTITY::IS_ENTITY_DEAD(Local_430)) && STREAMING::HAS_ANIM_DICT_LOADED("missfra1_tovan")) && STREAMING::HAS_ANIM_DICT_LOADED(func_668())) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_488)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_401)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_430)) && func_138(&Local_517, 0, 0, 19, 1, -1, -1, -1, 0, 0)) && GlobalFunc_8315() == 1)
				{
					if (iLocal_918 == 1)
					{
						func_758(1, &iLocal_4488);
						if (ENTITY::DOES_ENTITY_EXIST(Local_517))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_517))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1042))
								{
									iLocal_1042 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1042, Local_517, -1);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1042, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_517, iLocal_1042, "put_chop_in_van_van", "missfra1_tovan", 1000f, -1000f, 8225, 1148846080);
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_517);
									if (ENTITY::DOES_ENTITY_EXIST(Local_488))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_488))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_488);
											PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 128);
											PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 32);
											PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 16);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_488, 1);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_488, iLocal_1042, "missfra1_tovan", "put_chop_in_van_chop", 1000f, -4f, 5, 0, 1148846080, 0);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_488, 0, 0);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_430))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_430))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_430);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_430, 1);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_430, iLocal_1042, "missfra1_tovan", "put_chop_in_van_lam", 1000f, -4f, 5, 0, 1148846080, 0);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_430, 0, 0);
										}
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_401))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_401))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_401);
										GlobalFunc_2901(Local_401, Local_401.f_3, Local_401.f_6, 0, 0, 0);
										PED::FORCE_PED_MOTION_STATE(Local_401, -668482597, 0, 1, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_401, 1);
										TASK::TASK_ENTER_VEHICLE(Local_401, Local_517, 20000, 0, 1f, 262145, 0);
									}
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
									GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), Local_459.f_3, Local_459.f_6, 0, 0, 0);
									PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
									TASK::OPEN_SEQUENCE_TASK(&uVar14);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -14.25f, -1454.61f, 29.48f, 1f, 20000, 0.25f, 1, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -14.99f, -1456.87f, 29.41f, 1f, 20000, 0.25f, 1, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -18.12f, -1456.95f, 29.46f, 1f, 20000, 0.25f, 0, 1193033728);
									TASK::CLOSE_SEQUENCE_TASK(uVar14);
									TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar14);
									TASK::CLEAR_SEQUENCE_TASK(&uVar14);
								}
							}
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_568))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_568))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_568, Local_568.f_2, 0, 0, 1);
							ENTITY::SET_ENTITY_ROTATION(Local_568, Local_568.f_5, 2, 1);
							ENTITY::FREEZE_ENTITY_POSITION(Local_568, 1);
						}
					}
					GlobalFunc_534(Local_517, 0);
					func_337(func_908(2), 1);
					func_337(func_908(1), 1);
					GlobalFunc_10834(2, 1, 7);
					GlobalFunc_562(41);
					GlobalFunc_8316(0, 1, 1, 0);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					return 1;
				}
			}
			else if (iLocal_918 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_918 = 1;
				}
			}
			break;
	}
	return 0;
}






























int func_720(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x78CB7
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
	
	if (!iParam0->f_39)
	{
		if (iParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*iParam0)[iParam0->f_7] != PLAYER::PLAYER_PED_ID())
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
			if ((PED::IS_PED_RAGDOLL((*iParam0)[iParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*iParam0)[iParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*iParam0)[iParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*iParam0)[iParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = GlobalFunc_8315();
		if (!iParam0->f_23)
		{
			GlobalFunc_9198(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = GlobalFunc_584(iParam0->f_7);
		GlobalFunc_9198((*iParam0)[iParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*iParam0)[iParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
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
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*iParam0)[iParam0->f_7], bParam2, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
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
		iParam0->f_5 = GlobalFunc_237(iVar1);
		if (iParam0->f_5 == 4)
		{
			iParam0->f_5 = 3;
		}
		(*iParam0)[iParam0->f_5] = iVar0;
		(*iParam0)[iParam0->f_7] = 0;
		iParam0->f_6 = GlobalFunc_237(iVar2);
		iParam0->f_7 = 4;
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
		GlobalFunc_10873(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
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
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, false);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, true);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, true);
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
		if (PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}






































void func_758(int iParam0, int iParam1)//Position - 0x7AA45
{
	if (iParam0 == 1)
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(104.1583f, -1939.769f, 19.30119f, -117.9245f, -1754.341f, 36.95166f, 16f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(53.75493f, -1911.988f, 20.23178f, 93.24536f, -1864.881f, 31.30675f, 16f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-39.53437f, -1825.756f, 24.6141f, 2.099868f, -1775.21f, 36.11629f, 16f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(111.1981f, -1814.179f, 23.50193f, 79.26906f, -1854.318f, 33.79772f, 16f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-49.49337f, -1730.558f, 22.28655f, 94.72041f, -1853.355f, 33.61745f, 20f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-92.3586f, -1788.428f, 25.83392f, -56.55793f, -1744.573f, 38.32644f, 28f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-104.4228f, -1758.286f, 26.66664f, -88.43417f, -1738.211f, 38.37778f, 8f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-109.6088f, -1737.846f, 28.21543f, -84.35951f, -1727.573f, 36.3466f, 6f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-152.7389f, -1781.891f, 27.65895f, -103.4984f, -1751.495f, 36.63808f, 16f, 0, 0, 1);
		PATHFIND::SET_PED_PATHS_IN_AREA(-131f, -1958f, -8f, 204f, -1734f, 55f, 0, 0);
		if (iLocal_1021 == 0)
		{
			iLocal_1021 = GlobalFunc_2533(54.7f, -1914.7f, 21.18f, 1f, 1f, 1f);
		}
		if (iLocal_1022 == 0)
		{
			iLocal_1022 = GlobalFunc_2533(91.42f, -1951.3f, 21.74f, 7f, 7f, 3f);
		}
		if (iLocal_1023 == 0)
		{
			iLocal_1023 = GlobalFunc_2533(123.1f, -1932.93f, 20.27f, 1f, 1f, 1f);
		}
		if (iLocal_1024 == 0)
		{
			iLocal_1024 = GlobalFunc_2533(89.37f, -2255.94f, 3.08f, 20f, 4f, 6f);
		}
		if (iLocal_1027 == 0)
		{
			iLocal_1027 = GlobalFunc_2533(100.2395f, -1945.019f, 21.30385f, 8f, 6f, 2f);
		}
		MISC::CLEAR_AREA(Local_330, 450f, 1, 0, 0, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_330, 450f, 0, 0, 0, 0, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-109f, -1973f, 7f, 114f, -1749f, 39f, 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-109f, -1973f, 7f, 114f, -1749f, 39f);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(122f, -1943.8f, 18.7f, 130f, -1935.9f, 26.8f, 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(122f, -1943.8f, 18.7f, 130f, -1935.9f, 26.8f);
	}
	else
	{
		switch (*iParam1)
		{
			case 0:
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(104.1583f, -1939.769f, 19.30119f, -117.9245f, -1754.341f, 36.95166f, 16f, 0, 0, 1);
				*iParam1++;
				break;
			
			case 1:
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(53.75493f, -1911.988f, 20.23178f, 93.24536f, -1864.881f, 31.30675f, 16f, 0, 0, 1);
				*iParam1++;
				break;
			
			case 2:
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-39.53437f, -1825.756f, 24.6141f, 2.099868f, -1775.21f, 36.11629f, 16f, 0, 0, 1);
				*iParam1++;
				break;
			
			case 3:
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(111.1981f, -1814.179f, 23.50193f, 79.26906f, -1854.318f, 33.79772f, 16f, 0, 0, 1);
				*iParam1++;
				break;
			
			case 4:
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-49.49337f, -1730.558f, 22.28655f, 94.72041f, -1853.355f, 33.61745f, 20f, 0, 0, 1);
				*iParam1++;
				break;
			
			case 5:
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-92.3586f, -1788.428f, 25.83392f, -56.55793f, -1744.573f, 38.32644f, 28f, 0, 0, 1);
				*iParam1++;
				break;
			
			case 6:
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-104.4228f, -1758.286f, 26.66664f, -88.43417f, -1738.211f, 38.37778f, 8f, 0, 0, 1);
				*iParam1++;
				break;
			
			case 7:
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-109.6088f, -1737.846f, 28.21543f, -84.35951f, -1727.573f, 36.3466f, 6f, 0, 0, 1);
				*iParam1++;
				break;
			
			case 8:
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-152.7389f, -1781.891f, 27.65895f, -103.4984f, -1751.495f, 36.63808f, 16f, 0, 0, 1);
				*iParam1++;
				break;
			
			case 9:
				PATHFIND::SET_PED_PATHS_IN_AREA(-131f, -1958f, -8f, 204f, -1734f, 55f, 0, 0);
				*iParam1++;
				break;
			
			case 10:
				if (iLocal_1021 == 0)
				{
					iLocal_1021 = GlobalFunc_2533(54.88f, -1914.98f, 21.18f, 1f, 1f, 1f);
				}
				*iParam1++;
				break;
			
			case 11:
				if (iLocal_1022 == 0)
				{
					iLocal_1022 = GlobalFunc_2533(86.39f, -1955.41f, 20.24f, 1.5f, 1.5f, 1f);
				}
				*iParam1++;
				break;
			
			case 12:
				if (iLocal_1023 == 0)
				{
					iLocal_1023 = GlobalFunc_2533(122.1f, -1932.93f, 20.27f, 1f, 1f, 1f);
				}
				*iParam1++;
				break;
			
			case 13:
				if (iLocal_1024 == 0)
				{
					iLocal_1024 = GlobalFunc_2533(89.37f, -2255.94f, 3.08f, 20f, 4f, 6f);
				}
				*iParam1++;
				break;
			
			case 14:
				if (iLocal_1027 == 0)
				{
					iLocal_1027 = GlobalFunc_2533(100.2395f, -1945.019f, 21.30385f, 8f, 6f, 2f);
				}
				*iParam1++;
				break;
			
			case 15:
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-109f, -1973f, 7f, 114f, -1749f, 39f, 0, 1);
				*iParam1++;
				break;
			
			case 16:
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-109f, -1973f, 7f, 114f, -1749f, 39f);
				*iParam1++;
				break;
			
			case 17:
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(122f, -1943.8f, 18.7f, 130f, -1935.9f, 26.8f, 0, 1);
				*iParam1++;
				break;
			
			case 18:
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(122f, -1943.8f, 18.7f, 130f, -1935.9f, 26.8f);
				*iParam1++;
				break;
			
			case 19:
				MISC::CLEAR_AREA(Local_330, 450f, 1, 0, 0, 0);
				*iParam1++;
				break;
			
			case 20:
				MISC::CLEAR_AREA_OF_VEHICLES(Local_330, 450f, 0, 0, 0, 0, 0);
				*iParam1++;
				break;
			
			case 21:
				break;
			}
	}
}


void func_760(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x7B1CF
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
				func_761(Global_91351.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_761(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)//Position - 0x7B24A
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
		GlobalFunc_8627(iParam5);
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
		GlobalFunc_8896(iParam5, Var0, Param1, fParam4, GlobalFunc_99(iParam0));
		func_762(iParam5, iParam0, 0);
	}
}

void func_762(int iParam0, int iParam1, int iParam2)//Position - 0x7B375
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!GlobalFunc_7217(&(Global_67138.f_555[0 /*21*/]), iParam0))
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
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7681();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = GlobalFunc_104(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						GlobalFunc_8626(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}













int func_775()//Position - 0x7D033
{
	return func_776(&(Global_91351.f_2167));
}

int func_776(var uParam0)//Position - 0x7D046
{
	if (uParam0->f_12.f_42 == 0)
	{
		return 0;
	}
	if (!GlobalFunc_5650(uParam0->f_12.f_42))
	{
		return 0;
	}
	return 1;
}



void func_779(int iParam0, char* sParam1, int iParam2)//Position - 0x7D08F
{
	struct<50> Var0;
	struct<50> Var65;
	int iVar130;
	int iVar131;
	int iVar132;
	struct<14> Var133;
	int iVar147;
	int iVar148;
	int iVar149;
	int iVar150;
	int iVar151;
	int iVar152;
	
	if (!GlobalFunc_42(iParam0))
	{
		return;
	}
	Var0 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam0 /*65*/] };
	Var65 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam0 /*65*/] };
	iVar130 = 0;
	while (iVar130 < 12)
	{
		GlobalFunc_7687(0, iVar130, &(Var65.f_13[iVar130]), &(Var65[iVar130]), &(Var65.f_26[iVar130]), iParam2, iParam0);
		iVar130++;
	}
	iVar130 = 0;
	while (iVar130 < 9)
	{
		GlobalFunc_7686(0, iVar130, &(Var65.f_39[iVar130]), &(Var65.f_49[iVar130]), iParam2, iParam0);
		iVar130++;
	}
	iVar147 = GlobalFunc_4917(iParam0);
	iVar148 = 0;
	iVar149 = 0;
	iVar131 = 0;
	while (iVar131 < 12)
	{
		if (Var65.f_13[iVar131] != Var0.f_13[iVar131] || Var65[iVar131] != Var0[iVar131])
		{
			if (GlobalFunc_4911(iVar147, GlobalFunc_33(iVar131), Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar131 /*4*/][iParam0], &iVar132))
			{
				Var133 = { GlobalFunc_10878(iVar147, 2, Var65.f_59) };
				Var65.f_13[2] = Var133.f_3;
				Var65[2] = Var133.f_4;
				iVar148 = 1;
			}
			if (GlobalFunc_4912(iVar147, GlobalFunc_33(iVar131), Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar131 /*4*/][iParam0], &iVar132))
			{
				Var133 = { GlobalFunc_10878(iVar147, 1, Var65.f_62) };
				Var65.f_13[1] = Var133.f_3;
				Var65[1] = Var133.f_4;
				iVar149 = 1;
			}
		}
		iVar131++;
	}
	iVar131 = 0;
	while (iVar131 < 9)
	{
		if (Var65.f_39[iVar131] != Var0.f_39[iVar131] || Var65.f_49[iVar131] != Var0.f_49[iVar131])
		{
			if (GlobalFunc_4911(iVar147, 14, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_253[iVar131 /*4*/][iParam0], &iVar132))
			{
				Var133 = { GlobalFunc_10878(iVar147, 2, Var65.f_59) };
				Var65.f_13[2] = Var133.f_3;
				Var65[2] = Var133.f_4;
				iVar148 = 1;
			}
			if (GlobalFunc_4912(iVar147, 14, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_253[iVar131 /*4*/][iParam0], &iVar132))
			{
				Var133 = { GlobalFunc_10878(iVar147, 1, Var65.f_62) };
				Var65.f_13[1] = Var133.f_3;
				Var65[1] = Var133.f_4;
				iVar149 = 1;
			}
		}
		iVar131++;
	}
	if (iVar149 || iVar148)
	{
		iVar150 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[1 /*4*/][iParam0];
		iVar151 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[2 /*4*/][iParam0];
		iVar152 = GlobalFunc_24(iVar147, iVar151, iVar150);
		if (iVar152 != -99)
		{
			Var133 = { GlobalFunc_10878(iVar147, 0, iVar152) };
			Var65.f_13[0] = Var133.f_3;
			Var65[0] = Var133.f_4;
		}
	}
	iVar131 = 0;
	while (iVar131 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam1, iVar131, Var65.f_13[iVar131], Var65[iVar131], GlobalFunc_4917(iParam0));
		iVar131++;
	}
	iVar131 = 0;
	while (iVar131 < 9)
	{
		if (Global_89752[iParam0 /*65*/].f_39[iVar131] == -1 || Global_89752[iParam0 /*65*/].f_39[iVar131] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, iVar131, -1, 0, GlobalFunc_4917(iParam0));
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, iVar131, Var65.f_39[iVar131], Var65.f_49[iVar131], GlobalFunc_4917(iParam0));
		}
		iVar131++;
	}
	func_780(sParam1, iParam0);
}

int func_780(char* sParam0, int iParam1)//Position - 0x7D3F3
{
	var uVar0;
	struct<14> Var16;
	int iVar30;
	int iVar31;
	var uVar32;
	struct<14> Var48;
	int iVar62;
	int iVar63;
	var uVar64;
	var uVar80;
	struct<14> Var96;
	struct<14> Var110;
	int iVar124;
	int iVar125;
	
	if (GlobalFunc_5101(iParam1))
	{
		uVar0 = 15;
		uVar0 = { GlobalFunc_7617(GlobalFunc_4917(iParam1), 0) };
		iVar30 = 0;
		while (iVar30 < 15)
		{
			if (uVar0[iVar30] != -99)
			{
				Var16 = { GlobalFunc_10878(GlobalFunc_4917(iParam1), iVar30, uVar0[iVar30]) };
				if (iVar30 == 14)
				{
					iVar31 = 0;
					while (iVar31 < 9)
					{
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(uParam0, iVar31, -1, 0, GlobalFunc_4917(iParam1));
						iVar31++;
					}
				}
				else if (iVar30 != 12 && iVar30 != 13)
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, GlobalFunc_33(iVar30), Var16.f_3, Var16.f_4, GlobalFunc_4917(iParam1));
				}
			}
			iVar30++;
		}
		GlobalFunc_5100(iParam1, 0);
		return 1;
	}
	switch (iParam1)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				uVar32 = 15;
				uVar32 = { GlobalFunc_7617(GlobalFunc_4917(iParam1), 0) };
				iVar62 = 0;
				while (iVar62 < 15)
				{
					if (uVar32[iVar62] != -99)
					{
						Var48 = { GlobalFunc_10878(GlobalFunc_4917(iParam1), iVar62, uVar32[iVar62]) };
						if (iVar62 == 14)
						{
							iVar63 = 0;
							while (iVar63 < 9)
							{
								CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar63, -1, 0, GlobalFunc_4917(iParam1));
								iVar63++;
							}
						}
						else if (iVar62 != 12 && iVar62 != 13)
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, GlobalFunc_33(iVar62), Var48.f_3, Var48.f_4, GlobalFunc_4917(iParam1));
						}
					}
					iVar62++;
				}
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
			}
			break;
		
		case 2:
			uVar64 = 15;
			uVar80 = 15;
			Var96 = { GlobalFunc_10878(GlobalFunc_4917(iParam1), 3, 71) };
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/].f_13[3] == Var96.f_3)
			{
			}
			else
			{
				uVar64 = { GlobalFunc_7617(GlobalFunc_4917(iParam1), 10) };
				uVar80 = { GlobalFunc_7617(GlobalFunc_4917(iParam1), 0) };
				iVar124 = 0;
				while (iVar124 < 15)
				{
					if (uVar64[iVar124] != -99)
					{
						if (iVar124 == 14)
						{
							iVar125 = 0;
							while (iVar125 < 9)
							{
								CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar125, -1, 0, GlobalFunc_4917(iParam1));
								iVar125++;
							}
						}
						else if (iVar124 != 12 && iVar124 != 13)
						{
							if (iVar124 == 3 || iVar124 == 4)
							{
								Var96 = { GlobalFunc_10878(GlobalFunc_4917(iParam1), iVar124, uVar64[iVar124]) };
								if (Var96.f_3 == Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/].f_13[iVar124] && Var96.f_4 == Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/][iVar124])
								{
									Var110 = { GlobalFunc_10878(GlobalFunc_4917(iParam1), iVar124, uVar80[iVar124]) };
									Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/].f_13[iVar124] = Var110.f_3;
									Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/][iVar124] = Var110.f_4;
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, GlobalFunc_33(iVar124), Var110.f_3, Var110.f_4, GlobalFunc_4917(iParam1));
									if (iVar124 == 4)
									{
										Var110 = { GlobalFunc_10878(GlobalFunc_4917(iParam1), 6, uVar80[6]) };
										Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/].f_13[6] = Var110.f_3;
										Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iParam1 /*65*/][6] = Var110.f_4;
										CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, GlobalFunc_33(6), Var110.f_3, Var110.f_4, GlobalFunc_4917(iParam1));
									}
								}
							}
						}
					}
					iVar124++;
				}
			}
			break;
	}
	return 0;
}

int func_781(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x7D78B
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (*iParam1 == 0)
	{
		HUD::CLEAR_HELP(1);
		HUD::CLEAR_PRINTS();
		HUD::REQUEST_ADDITIONAL_TEXT("FRAN1", 0);
		HUD::REQUEST_ADDITIONAL_TEXT("FKN1AUD", 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_WIND(0.1f);
		MISC::SET_WIND_SPEED(0.1f);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("seashark"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_5112(19, 0), 1);
		PED::ADD_RELATIONSHIP_GROUP("DOG", &iLocal_397);
		PED::ADD_RELATIONSHIP_GROUP("BMX", &iLocal_398);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_399);
		PED::ADD_RELATIONSHIP_GROUP("FILMCREW", &iLocal_400);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_399);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_399, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_397, iLocal_399);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_399, iLocal_399);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, iLocal_400);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_397);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_400, iLocal_400);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_400, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_400, iLocal_397);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_397, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_397, iLocal_400);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, joaat("COP"));
		iLocal_393 = GlobalFunc_2576();
		uLocal_930 = AUDIO::GET_SOUND_ID();
		GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 355);
		GlobalFunc_52(0, 1);
		Global_89490 = -1;
		if (iLocal_1026 == 0)
		{
			iLocal_1026 = GlobalFunc_2533(-62.46f, -1451.8f, 33.12f, 4f, 4f, 3f);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-62.46f, -1451.8f, 33.12f, 4f, 4f, 3f, 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-62.46f, -1451.8f, 33.12f, 4f, 4f, 3f);
		}
		*iParam1++;
	}
	if (*iParam1 == 1)
	{
		func_809(iParam0);
		GlobalFunc_2535(&uLocal_1084, &uLocal_983);
		GlobalFunc_2534(&uLocal_1111, &uLocal_985);
		GlobalFunc_2910(sLocal_311, &uLocal_1097, &uLocal_984);
		func_805();
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			StringCopy(&Local_312, "FRA1_FLAMAR", 16);
		}
		*iParam2 = 0;
		*iParam1++;
	}
	if (*iParam1 == 2)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			if (GlobalFunc_8315() == 1)
			{
				GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), Local_459.f_3, Local_459.f_6, 0, 1, 0);
			}
			else if (GlobalFunc_8315() == 2)
			{
				GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), Local_430.f_3, Local_430.f_6, 0, 1, 0);
			}
			if (iParam0 == 5 || iParam0 == 6)
			{
				func_96(1, 1f, 0.65f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				GlobalFunc_7932(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("pickup_money_variable"));
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 0, 0, 0);
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
			}
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
		if (*iParam4 == 1)
		{
			switch (GlobalFunc_8315())
			{
				case 1:
					GlobalFunc_5812(Local_459.f_3, Local_459.f_6, 1, 0);
					break;
				
				case 2:
					GlobalFunc_5812(Local_430.f_3, Local_430.f_6, 1, 0);
					break;
				}
		}
		func_799(iParam0);
		*iParam1++;
	}
	if (*iParam1 == 3)
	{
		if (GlobalFunc_2531(&uLocal_1084, &uLocal_983))
		{
			if (GlobalFunc_2530(&uLocal_1111, &uLocal_985))
			{
				if (GlobalFunc_2907(sLocal_311, &uLocal_1097, &uLocal_984))
				{
					*iParam1++;
				}
			}
		}
	}
	if (*iParam1 == 4)
	{
		func_795(0);
		switch (iParam0)
		{
			case 0:
				if (GlobalFunc_2(0))
				{
					if (func_138(&Local_517, 0, 0, 19, 1, -1, -1, -1, 0, 0))
					{
						GlobalFunc_534(Local_517, 0);
						*iParam1++;
					}
				}
				else
				{
					*iParam1++;
				}
				break;
			
			case 1:
				iLocal_1066[1] = 1;
				if (func_138(&Local_517, 0, 0, 19, 1, -1, -1, -1, 0, 0) && func_240(&Local_568, 1))
				{
					iLocal_1066[2] = 1;
					iLocal_1066[3] = 1;
					GlobalFunc_503(Local_517, 351);
					GlobalFunc_504(Local_517, 348);
					GlobalFunc_534(Local_517, 0);
					if (func_241(&Local_401, 0, 1862763509, 0, 19, 0, 0, 0, 0, -1, 1))
					{
						iLocal_1066[6] = 1;
						iLocal_1066[4] = 1;
						if (func_792(&Local_488, iLocal_397, 0, 0, 0, 0, 1))
						{
							iLocal_1066[12] = 1;
							iLocal_1066[13] = 1;
							if (GlobalFunc_8315() == 1)
							{
								if (func_241(&Local_430, 1, 1862763509, 0, 2, 0, 0, 0, 0, -1, 1))
								{
									iLocal_624[2] = Local_430;
									iLocal_1066[8] = 1;
									*iParam1++;
								}
							}
							else if (GlobalFunc_8315() == 2)
							{
								if (func_241(&Local_459, 1, 1862763509, 0, 1, 0, 0, 0, 0, -1, 1))
								{
									iLocal_624[1] = Local_459;
									iLocal_1066[10] = 1;
									*iParam1++;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (func_138(&Local_517, 0, 0, 19, 1, -1, -1, -1, 0, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_517, 0);
					}
					GlobalFunc_534(Local_517, 0);
					if (func_241(&Local_401, 0, 1862763509, 0, 19, 0, 0, 0, 0, -1, 1))
					{
						iLocal_1066[6] = 1;
						iLocal_1066[4] = 1;
						if (func_792(&Local_488, iLocal_397, 0, 0, 0, 0, 1))
						{
							iLocal_1066[12] = 1;
							if (GlobalFunc_8315() == 1)
							{
								if (func_241(&Local_430, 1, 1862763509, 0, 2, 0, 0, 0, 0, -1, 1))
								{
									iLocal_624[2] = Local_430;
									iLocal_1066[8] = 1;
									*iParam1++;
								}
							}
							else if (GlobalFunc_8315() == 2)
							{
								if (func_241(&Local_459, 1, 1862763509, 0, 1, 0, 0, 0, 0, -1, 1))
								{
									iLocal_624[1] = Local_459;
									iLocal_1066[10] = 1;
									*iParam1++;
								}
							}
						}
					}
				}
				break;
			
			case 3:
				Local_401.f_28 = 3;
				Local_459.f_28 = 3;
				Local_430.f_28 = 3;
				Local_401.f_25 = 0;
				Local_459.f_25 = 0;
				Local_430.f_25 = 0;
				if (((((func_138(&Local_517, 0, 0, 19, 1, -1, -1, -1, 0, 0) && func_138(&(Local_2152[0 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0)) && func_138(&(Local_2152[1 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0)) && func_138(&(Local_2152[2 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0)) && func_138(&(Local_2152[3 /*13*/]), 0, 0, 145, 0, -1, -1, -1, 0, 0)) && func_240(&Local_592, 1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_517, 0);
					}
					GlobalFunc_534(Local_517, 0);
					if (func_241(&Local_401, 0, 1862763509, 1, 19, 0, 0, 0, 0, -1, 1))
					{
						iLocal_1066[6] = 1;
						iLocal_1066[4] = 1;
						if (func_792(&Local_488, iLocal_397, 0, 0, 0, 0, 1))
						{
							iLocal_1066[12] = 1;
							if (GlobalFunc_8315() == 1)
							{
								if (func_241(&Local_430, 1, 1862763509, 0, 2, 0, 0, 0, 0, -1, 1))
								{
									iLocal_624[2] = Local_430;
									iLocal_1066[8] = 1;
									*iParam1++;
								}
							}
							else if (GlobalFunc_8315() == 2)
							{
								if (func_241(&Local_459, 1, 1862763509, 0, 1, 0, 0, 0, 0, -1, 1))
								{
									iLocal_624[1] = Local_459;
									iLocal_1066[10] = 1;
									*iParam1++;
								}
							}
						}
					}
				}
				break;
			
			case 4:
				Local_401.f_28 = 3;
				Local_459.f_28 = 3;
				Local_430.f_28 = 3;
				Local_401.f_25 = 0;
				Local_459.f_25 = 0;
				Local_430.f_25 = 0;
				if (func_241(&Local_401, 0, 1862763509, 1, 19, 0, 0, 0, 0, -1, 1))
				{
					iLocal_1066[6] = 1;
					iLocal_1066[4] = 1;
					if (GlobalFunc_8315() == 1)
					{
						if (func_241(&Local_430, 1, 1862763509, 1, 2, 0, 0, 0, 0, -1, 1))
						{
							iLocal_624[2] = Local_430;
							iLocal_1066[8] = 1;
							*iParam1++;
						}
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (func_241(&Local_459, 1, 1862763509, 1, 1, 0, 0, 0, 0, -1, 1))
						{
							iLocal_624[1] = Local_459;
							iLocal_1066[10] = 1;
							*iParam1++;
						}
					}
				}
				break;
			
			case 5:
				if (func_138(&(Local_1114[0 /*13*/]), 0, 0, 145, 1, -1, 46, 46, 0, 0))
				{
					if (func_138(&(Local_1114[1 /*13*/]), 0, 0, 145, 1, -1, 51, 51, 0, 0))
					{
						if (func_138(&(Local_1114[2 /*13*/]), 0, 0, 145, 1, -1, 82, 82, 0, 0))
						{
							iLocal_1066[14] = 1;
							iLocal_1066[15] = 1;
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[0 /*13*/], 0))
							{
								AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1114[0 /*13*/], 0);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[1 /*13*/], 0))
							{
								AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1114[1 /*13*/], 0);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[2 /*13*/], 0))
							{
								AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1114[2 /*13*/], 0);
							}
							if (func_241(&Local_401, 0, 1862763509, 1, 19, 0, 0, 0, 0, -1, 1))
							{
								iLocal_1066[6] = 1;
								iLocal_1066[5] = 1;
								iLocal_1066[4] = 1;
								if (GlobalFunc_8315() == 1)
								{
									if (func_241(&Local_430, 1, 1862763509, 1, 2, 0, 0, 0, 0, -1, 1))
									{
										iLocal_624[2] = Local_430;
										iLocal_1066[8] = 1;
										*iParam1++;
									}
								}
								else if (GlobalFunc_8315() == 2)
								{
									if (func_241(&Local_459, 1, 1862763509, 1, 1, 0, 0, 0, 0, -1, 1))
									{
										iLocal_624[1] = Local_459;
										iLocal_1066[10] = 1;
										*iParam1++;
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (func_138(&(Local_1114[0 /*13*/]), 0, 0, 145, 1, -1, 46, 46, 0, 0))
				{
					if (func_138(&(Local_1114[1 /*13*/]), 0, 0, 145, 1, -1, 51, 51, 0, 0))
					{
						if (func_138(&(Local_1114[2 /*13*/]), 0, 0, 145, 1, -1, 82, 82, 0, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[0 /*13*/], 0))
							{
								AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1114[0 /*13*/], 0);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[1 /*13*/], 0))
							{
								AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1114[1 /*13*/], 0);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[2 /*13*/], 0))
							{
								AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1114[2 /*13*/], 0);
							}
							if (func_241(&Local_401, 0, 1862763509, 1, 19, 0, 0, 0, 0, -1, 1))
							{
								iLocal_1066[6] = 1;
								if (GlobalFunc_8315() == 1)
								{
									if (func_241(&Local_430, 1, 1862763509, 1, 2, 0, 0, 0, 0, -1, 1))
									{
										iLocal_624[2] = Local_430;
										iLocal_1066[8] = 1;
										*iParam1++;
									}
								}
								else if (GlobalFunc_8315() == 2)
								{
									if (func_241(&Local_459, 1, 1862763509, 1, 1, 0, 0, 0, 0, -1, 1))
									{
										iLocal_624[1] = Local_459;
										iLocal_1066[10] = 1;
										*iParam1++;
									}
								}
							}
						}
					}
				}
				break;
			
			case 7:
				if (func_241(&Local_401, 0, 1862763509, 0, 19, 0, 0, 0, 0, -1, 1))
				{
					iLocal_1066[6] = 1;
					*iParam1++;
				}
				break;
			
			case 8:
			case 9:
				if (GlobalFunc_8315() == 1)
				{
					if (func_241(&Local_430, 1, 1862763509, 0, 2, 0, 0, 0, 0, -1, 1))
					{
						iLocal_624[2] = Local_430;
						iLocal_1066[8] = 1;
						*iParam1++;
					}
				}
				else if (GlobalFunc_8315() == 2)
				{
					if (func_241(&Local_459, 1, 1862763509, 0, 1, 0, 0, 0, 0, -1, 1))
					{
						iLocal_624[1] = Local_459;
						iLocal_1066[10] = 1;
						*iParam1++;
					}
				}
				break;
			
			case 10:
				*iParam1++;
				break;
		}
		if (iLocal_920 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_401))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_401))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_401, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_401, 1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_401, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_401, 3, 2, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_401, 4, 5, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_401, 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_401, 6, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_401, 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_401, 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_401, 10, 1, 2, 0);
					switch (iParam0)
					{
						case 3:
						case 4:
						case 5:
						case 6:
							if (iLocal_921 == 0)
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_401, 9, 1, 0, 0);
								iLocal_921 = 1;
							}
							break;
						
						default:
							PED::SET_PED_COMPONENT_VARIATION(Local_401, 9, 0, 0, 0);
							break;
					}
					iLocal_920 = 1;
				}
			}
		}
	}
	if (*iParam1 == 5)
	{
		switch (iParam0)
		{
			case 0:
				*iParam1++;
				break;
			
			case 1:
			case 2:
				if (GlobalFunc_9019(&iLocal_624, 1))
				{
					func_720(&iLocal_624, 1, 0, 0);
					Local_430 = iLocal_624[2];
				}
				*iParam1++;
				break;
			
			case 3:
				if (GlobalFunc_9019(&iLocal_624, 1))
				{
					func_720(&iLocal_624, 1, 0, 0);
					Local_430 = iLocal_624[2];
				}
				if (func_791(&Local_3173))
				{
					if (iLocal_1056 == 0)
					{
						func_653(&Local_3246);
						iLocal_1056 = 1;
					}
					*iParam1++;
				}
				break;
			
			case 5:
				if (*uParam3 == 1 || *iParam4 == 1)
				{
					if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_9019(&iLocal_624, 1))
						{
							func_720(&iLocal_624, 1, 0, 0);
						}
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (GlobalFunc_9019(&iLocal_624, 2))
						{
							func_720(&iLocal_624, 1, 0, 0);
						}
					}
				}
				*iParam1++;
				break;
			
			case 8:
				if (*uParam3 == 1 || *iParam4 == 1)
				{
					if (GlobalFunc_9019(&iLocal_624, 1))
					{
						func_720(&iLocal_624, 1, 0, 0);
						Local_430 = iLocal_624[2];
					}
				}
				*iParam1++;
				break;
			
			case 9:
				if (*uParam3 == 1 || *iParam4 == 1)
				{
					if (GlobalFunc_9019(&iLocal_624, 2))
					{
						func_720(&iLocal_624, 1, 0, 0);
						Local_459 = iLocal_624[1];
					}
				}
				*iParam1++;
				break;
			
			case 10:
				if (iLocal_1057 == 0)
				{
					iLocal_1058 = TASK::ADD_COVER_POINT(1176.677f, -3048.621f, 4.9016f, 83.0167f, 1, 2, 2, 1);
					iLocal_1057 = 1;
				}
				*iParam1++;
				break;
			
			default:
				*iParam1++;
				break;
			}
	}
	if (*iParam1 == 6)
	{
		GlobalFunc_200(&uLocal_729, 1);
		GlobalFunc_200(&uLocal_729, 2);
		GlobalFunc_200(&uLocal_729, 3);
		GlobalFunc_200(&uLocal_729, 4);
		GlobalFunc_200(&uLocal_729, 5);
		GlobalFunc_200(&uLocal_729, 6);
		GlobalFunc_200(&uLocal_729, 7);
		GlobalFunc_200(&uLocal_729, 8);
		switch (iParam0)
		{
			case 0:
			case 2:
				break;
			
			case 1:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
				if (!PED::IS_PED_INJURED(func_908(1)))
				{
					GlobalFunc_173(&uLocal_729, 1, func_908(1), "FRANKLIN", 0, 1);
				}
				if (!PED::IS_PED_INJURED(func_908(2)))
				{
					GlobalFunc_173(&uLocal_729, 2, func_908(2), "TREVOR", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_401))
				{
					GlobalFunc_173(&uLocal_729, 3, Local_401, "LAMAR", 0, 1);
				}
				GlobalFunc_7632(0);
				GlobalFunc_563(1);
				GlobalFunc_696();
				break;
		}
		switch (iParam0)
		{
			case 3:
			case 4:
			case 5:
			case 6:
				GlobalFunc_1998(1);
				break;
			
			default:
				GlobalFunc_1998(0);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 7)
	{
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		GlobalFunc_601(8, 0);
		GlobalFunc_601(9, 0);
		switch (iParam0)
		{
			case 0:
				MISC::CLEAR_AREA(Local_330, 250f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_330, 250f, 0, 0, 0, 0, 0);
				MISC::ENABLE_DISPATCH_SERVICE(3, 1);
				MISC::ENABLE_DISPATCH_SERVICE(5, 1);
				MISC::ENABLE_DISPATCH_SERVICE(1, 1);
				MISC::ENABLE_DISPATCH_SERVICE(2, 1);
				MISC::ENABLE_DISPATCH_SERVICE(6, 1);
				MISC::ENABLE_DISPATCH_SERVICE(8, 1);
				MISC::ENABLE_DISPATCH_SERVICE(10, 1);
				MISC::ENABLE_DISPATCH_SERVICE(9, 1);
				MISC::ENABLE_DISPATCH_SERVICE(13, 1);
				MISC::ENABLE_DISPATCH_SERVICE(4, 1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (*iParam4 == 1 || *uParam3 == 1)
				{
					func_758(1, &iLocal_4488);
				}
				break;
			
			case 1:
				MISC::CLEAR_AREA(Local_330, 300f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_330, 300f, 0, 0, 0, 0, 0);
				MISC::ENABLE_DISPATCH_SERVICE(3, 1);
				MISC::ENABLE_DISPATCH_SERVICE(5, 1);
				MISC::ENABLE_DISPATCH_SERVICE(1, 1);
				MISC::ENABLE_DISPATCH_SERVICE(2, 1);
				MISC::ENABLE_DISPATCH_SERVICE(6, 1);
				MISC::ENABLE_DISPATCH_SERVICE(8, 1);
				MISC::ENABLE_DISPATCH_SERVICE(10, 1);
				MISC::ENABLE_DISPATCH_SERVICE(9, 1);
				MISC::ENABLE_DISPATCH_SERVICE(13, 1);
				MISC::ENABLE_DISPATCH_SERVICE(4, 1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				VEHICLE::SET_RANDOM_TRAINS(1);
				if (*iParam4 == 1 || *uParam3 == 1)
				{
					func_758(1, &iLocal_4488);
				}
				break;
			
			case 2:
			case 3:
			case 4:
				switch (iParam0)
				{
					case 3:
						MISC::SET_INSTANCE_PRIORITY_HINT(1);
						break;
				}
				MISC::ENABLE_DISPATCH_SERVICE(3, 0);
				MISC::ENABLE_DISPATCH_SERVICE(5, 0);
				MISC::ENABLE_DISPATCH_SERVICE(1, 0);
				MISC::ENABLE_DISPATCH_SERVICE(2, 0);
				MISC::ENABLE_DISPATCH_SERVICE(6, 0);
				MISC::ENABLE_DISPATCH_SERVICE(8, 0);
				MISC::ENABLE_DISPATCH_SERVICE(10, 0);
				MISC::ENABLE_DISPATCH_SERVICE(9, 0);
				MISC::ENABLE_DISPATCH_SERVICE(13, 0);
				MISC::ENABLE_DISPATCH_SERVICE(4, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					if (iParam0 == 4)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
					}
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				STREAMING::SET_PED_POPULATION_BUDGET(0);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				VEHICLE::SET_RANDOM_TRAINS(0);
				if (*iParam4 == 1 || *uParam3 == 1)
				{
					func_758(1, &iLocal_4488);
				}
				if (iLocal_1025 == 0)
				{
					iLocal_1025 = GlobalFunc_2533(82.898f, -1949.781f, 19.79f, 5000f, 5000f, 96f);
				}
				GlobalFunc_601(8, 1);
				GlobalFunc_601(9, 1);
				break;
			
			case 5:
				MISC::ENABLE_DISPATCH_SERVICE(3, 0);
				MISC::ENABLE_DISPATCH_SERVICE(5, 0);
				MISC::ENABLE_DISPATCH_SERVICE(1, 0);
				MISC::ENABLE_DISPATCH_SERVICE(2, 0);
				MISC::ENABLE_DISPATCH_SERVICE(6, 0);
				MISC::ENABLE_DISPATCH_SERVICE(8, 0);
				MISC::ENABLE_DISPATCH_SERVICE(10, 0);
				MISC::ENABLE_DISPATCH_SERVICE(9, 0);
				MISC::ENABLE_DISPATCH_SERVICE(13, 0);
				MISC::ENABLE_DISPATCH_SERVICE(4, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				if (*uParam3 == 1 || *iParam4 == 1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				VEHICLE::SET_RANDOM_TRAINS(0);
				if (*iParam4 == 1 || *uParam3 == 1)
				{
					func_758(1, &iLocal_4488);
				}
				if (iLocal_1025 == 0)
				{
					iLocal_1025 = GlobalFunc_2533(82.898f, -1949.781f, 19.79f, 5000f, 5000f, 64f);
				}
				if (!PED::IS_PED_INJURED(Local_401))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_401, 3);
				}
				if (!PED::IS_PED_INJURED(func_908(2)))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_908(2), 3);
				}
				if (!PED::IS_PED_INJURED(func_908(1)))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_908(1), 3);
				}
				GlobalFunc_601(8, 1);
				GlobalFunc_601(9, 1);
				break;
			
			case 6:
				MISC::ENABLE_DISPATCH_SERVICE(3, 0);
				MISC::ENABLE_DISPATCH_SERVICE(5, 0);
				MISC::ENABLE_DISPATCH_SERVICE(1, 0);
				MISC::ENABLE_DISPATCH_SERVICE(6, 0);
				MISC::ENABLE_DISPATCH_SERVICE(8, 0);
				MISC::ENABLE_DISPATCH_SERVICE(10, 0);
				MISC::ENABLE_DISPATCH_SERVICE(9, 0);
				MISC::ENABLE_DISPATCH_SERVICE(13, 0);
				MISC::ENABLE_DISPATCH_SERVICE(4, 0);
				MISC::ENABLE_DISPATCH_SERVICE(2, 1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.25f);
				VEHICLE::_0x9A75585FB2E54FAD(1133.4f, -2512.1f, 33.2f, 100f);
				VEHICLE::_0x9A75585FB2E54FAD(769.37f, -2954.11f, 4.84f, 100f);
				uLocal_1039 = VEHICLE::ADD_VEHICLE_COMBAT_ANGLED_AVOIDANCE_AREA(1034.899f, -2649.698f, -2.152824f, 1206.04f, -2625.698f, 46.10272f, 96f);
				uLocal_1040 = VEHICLE::ADD_VEHICLE_COMBAT_ANGLED_AVOIDANCE_AREA(1170.989f, -2583.811f, -1.248177f, 1184.574f, -2652.445f, 42.04342f, 32f);
				uLocal_1037 = MISC::_ADD_DISPATCH_SPAWN_BLOCKING_ANGLED_AREA(886.2516f, -2602.161f, -2.892773f, 1278.529f, -2703.512f, 17.07362f, 72f);
				uLocal_1038 = MISC::_ADD_DISPATCH_SPAWN_BLOCKING_ANGLED_AREA(1175.263f, -2587.421f, -0.919907f, 1188.792f, -2672.673f, 39.55923f, 24f);
				if (*uParam3 == 1 || *iParam4 == 1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				}
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				VEHICLE::SET_RANDOM_TRAINS(1);
				iLocal_392 = 0;
				PED::REMOVE_SCENARIO_BLOCKING_AREAS();
				if (!PED::IS_PED_INJURED(Local_401))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_401, 3);
				}
				if (!PED::IS_PED_INJURED(func_908(2)))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_908(2), 3);
				}
				if (!PED::IS_PED_INJURED(func_908(1)))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_908(1), 3);
				}
				GlobalFunc_601(8, 1);
				GlobalFunc_601(9, 1);
				break;
			
			case 7:
			case 8:
			case 9:
			case 10:
				MISC::ENABLE_DISPATCH_SERVICE(3, 1);
				MISC::ENABLE_DISPATCH_SERVICE(5, 1);
				MISC::ENABLE_DISPATCH_SERVICE(1, 1);
				MISC::ENABLE_DISPATCH_SERVICE(2, 1);
				MISC::ENABLE_DISPATCH_SERVICE(6, 1);
				MISC::ENABLE_DISPATCH_SERVICE(8, 1);
				MISC::ENABLE_DISPATCH_SERVICE(10, 0);
				MISC::ENABLE_DISPATCH_SERVICE(9, 0);
				MISC::ENABLE_DISPATCH_SERVICE(13, 1);
				MISC::ENABLE_DISPATCH_SERVICE(4, 1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				VEHICLE::SET_RANDOM_TRAINS(1);
				PED::REMOVE_SCENARIO_BLOCKING_AREAS();
				VEHICLE::_0x9A75585FB2E54FAD(1145.46f, -3116.741f, 4.8235f, 100f);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 8)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (*iParam4 == 1)
			{
				GlobalFunc_5108(0, -1, 0);
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 0);
				iVar0 = MISC::GET_GAME_TIMER() + 15000;
				while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && MISC::GET_GAME_TIMER() < iVar0)
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
		*iParam1++;
	}
	if (*iParam1 == 9)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 5:
				case 6:
					if (Global_86813 == 0)
					{
						Local_430.f_28 = 0;
						Local_401.f_28 = 1;
						Local_459.f_28 = 2;
						Local_1114[Local_401.f_28 /*13*/].f_7 = 72;
						Local_1114[Local_430.f_28 /*13*/].f_7 = 63;
						Local_1114[Local_459.f_28 /*13*/].f_7 = 82;
					}
					else
					{
						func_782(Global_86813, &(Local_401.f_28), &(Local_459.f_28), &(Local_430.f_28));
						Local_1114[Local_401.f_28 /*13*/].f_7 = 72;
						Local_1114[Local_430.f_28 /*13*/].f_7 = 63;
						Local_1114[Local_459.f_28 /*13*/].f_7 = 82;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_401.f_28 /*13*/], 0) && !PED::IS_PED_INJURED(Local_401))
					{
						PED::SET_PED_INTO_VEHICLE(Local_401, Local_1114[Local_401.f_28 /*13*/], -1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_459.f_28 /*13*/], 0) && !PED::IS_PED_INJURED(func_908(1)))
					{
						PED::SET_PED_INTO_VEHICLE(func_908(1), Local_1114[Local_459.f_28 /*13*/], -1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_430.f_28 /*13*/], 0) && !PED::IS_PED_INJURED(func_908(2)))
					{
						PED::SET_PED_INTO_VEHICLE(func_908(2), Local_1114[Local_430.f_28 /*13*/], -1);
					}
					break;
				}
		}
		*iParam1++;
	}
	if (*iParam1 == 10)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 1:
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfra1_tovan"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_517))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_517))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1042))
								{
									iLocal_1042 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1042, Local_517, -1);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1042, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_517, iLocal_1042, "put_chop_in_van_van", "missfra1_tovan", 1000f, -1000f, 8225, 1148846080);
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_517);
									if (ENTITY::DOES_ENTITY_EXIST(Local_488))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_488))
										{
											PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 128);
											PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 32);
											PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_488, 16);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_488, iLocal_1042, "missfra1_tovan", "put_chop_in_van_chop", 1f, -4f, 5, 145, 1148846080, 0);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_488, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_488, 1);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_430))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_430))
										{
											PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_430, 128);
											PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_430, 16);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_430, iLocal_1042, "missfra1_tovan", "put_chop_in_van_lam", 1f, -4f, 5, 145, 1148846080, 0);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_430, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_430, 1);
										}
									}
									if (!PED::IS_PED_INJURED(Local_401))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
										{
											TASK::TASK_ENTER_VEHICLE(Local_401, Local_517, 20000, 0, 1f, 262145, 0);
											PED::FORCE_PED_MOTION_STATE(Local_401, -668482597, 0, 0, 0);
										}
									}
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -14.25f, -1454.61f, 29.48f, 1f, 20000, 0.25f, 1, 1193033728);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -14.99f, -1456.87f, 29.41f, 1f, 20000, 0.25f, 1, 1193033728);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -18.12f, -1456.95f, 29.46f, 1f, 20000, 0.25f, 0, 1193033728);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
										TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar1);
										TASK::CLEAR_SEQUENCE_TASK(&uVar1);
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
									}
									SYSTEM::WAIT(500);
									*iParam1++;
								}
							}
						}
					}
					else
					{
						STREAMING::REQUEST_ANIM_DICT("missfra1_tovan");
					}
					break;
				
				case 3:
					STREAMING::REQUEST_MODEL(iLocal_328);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_smg"), 31, 0);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_microsmg"), 31, 0);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pumpshotgun"), 31, 0);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
					if ((!PED::IS_PED_INJURED(Local_401) && !PED::IS_PED_INJURED(func_908(2))) && !PED::IS_PED_INJURED(func_908(1)))
					{
						if (((((((STREAMING::HAS_MODEL_LOADED(iLocal_328) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_smg"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_microsmg"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pumpshotgun"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_401)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_908(2))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_908(1)))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_1273[0 /*18*/]))
							{
								Local_1273[0 /*18*/] = func_215(iLocal_328, Local_366, fLocal_369, iLocal_399, joaat("weapon_microsmg"), 125, 1);
								TASK::TASK_AIM_GUN_AT_COORD(Local_1273[0 /*18*/], Local_363, -1, 1, 0);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_1273[1 /*18*/]))
							{
								Local_1273[1 /*18*/] = func_215(iLocal_328, 81.7639f, -1904.295f, 20.5794f, 142.1008f, iLocal_399, joaat("weapon_microsmg"), 125, 1);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_1273[2 /*18*/]))
							{
								Local_1273[2 /*18*/] = func_215(iLocal_328, 79.4749f, -1908.114f, 20.3492f, 169.8566f, iLocal_399, joaat("weapon_microsmg"), 125, 1);
							}
							if (!PED::IS_PED_INJURED(func_908(1)))
							{
								GlobalFunc_2901(func_908(1), Local_459.f_3, Local_459.f_6, 0, 0, 0);
								WEAPON::GIVE_WEAPON_TO_PED(func_908(1), joaat("weapon_smg"), WEAPON::GET_AMMO_IN_PED_WEAPON(func_908(1), joaat("weapon_smg")) * 2, 1, 1);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_908(1), Local_3246[0 /*12*/].f_1, -1, 0, 0f, 1, 0, Local_3246[0 /*12*/], 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_908(1), 1, 0);
							}
							if (!PED::IS_PED_INJURED(func_908(2)))
							{
								GlobalFunc_2901(func_908(2), Local_430.f_3, Local_430.f_6, 0, 0, 0);
								WEAPON::GIVE_WEAPON_TO_PED(func_908(2), joaat("weapon_pumpshotgun"), WEAPON::GET_AMMO_IN_PED_WEAPON(func_908(2), joaat("weapon_pumpshotgun")) * 2, 1, 1);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_908(2), Local_3246[2 /*12*/].f_1, -1, 0, 0f, 1, 0, Local_3246[2 /*12*/], 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_908(2), 0, 0);
							}
							if (!PED::IS_PED_INJURED(Local_401))
							{
								GlobalFunc_2901(Local_401, Local_401.f_3, Local_401.f_6, 0, 0, 0);
								WEAPON::GIVE_WEAPON_TO_PED(Local_401, joaat("weapon_assaultrifle"), -1, 1, 1);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_401, Local_3246[1 /*12*/].f_1, -1, 0, 0f, 1, 0, Local_3246[1 /*12*/], 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_401, 0, 0);
							}
							func_112(&Local_401, 5);
							func_112(&Local_430, 5);
							SYSTEM::WAIT(500);
							*iParam1++;
						}
					}
					break;
				
				case 4:
					STREAMING::REQUEST_MODEL(joaat("police3"));
					STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_smg"), 31, 0);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pumpshotgun"), 31, 0);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
					if (iLocal_395 != 0 && iLocal_395 != joaat("weapon_unarmed"))
					{
						WEAPON::REQUEST_WEAPON_ASSET(iLocal_395, 31, 0);
					}
					if (iLocal_396 != 0 && iLocal_396 != joaat("weapon_unarmed"))
					{
						WEAPON::REQUEST_WEAPON_ASSET(iLocal_396, 31, 0);
					}
					if ((((STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_smg"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pumpshotgun"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")))
					{
						Local_2881[0 /*13*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -26.7525f, -1827.297f, 24.8785f, 284.6982f, 1, 1);
						Local_2881[1 /*13*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -36.1803f, -1829.193f, 24.9183f, 161.8743f, 1, 1);
						Local_2881[2 /*13*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -19.9758f, -1802.659f, 26.1321f, 200.3464f, 1, 1);
						iVar2 = 0;
						while (iVar2 < 3)
						{
							VEHICLE::SET_VEHICLE_SIREN(Local_2881[iVar2 /*13*/], 1);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_2881[iVar2 /*13*/], 0);
							iVar2++;
						}
						Local_2632[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[0 /*13*/], 6, iLocal_329, -1, 1, 1);
						Local_2632[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[0 /*13*/], 6, iLocal_329, 0, 1, 1);
						Local_2691[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[1 /*13*/], 6, iLocal_329, -1, 1, 1);
						Local_2691[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[1 /*13*/], 6, iLocal_329, 0, 1, 1);
						Local_2750[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[2 /*13*/], 6, iLocal_329, -1, 1, 1);
						Local_2750[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2881[2 /*13*/], 6, iLocal_329, 0, 1, 1);
						iLocal_1050 = 1;
						func_112(&(Local_2632[0 /*29*/]), 5);
						func_112(&(Local_2632[1 /*29*/]), 5);
						func_112(&(Local_2691[0 /*29*/]), 5);
						func_112(&(Local_2691[1 /*29*/]), 5);
						func_112(&(Local_2750[0 /*29*/]), 5);
						func_112(&(Local_2750[1 /*29*/]), 5);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
						if (!PED::IS_PED_INJURED(func_908(2)))
						{
							if (iLocal_396 == 0 || iLocal_396 == joaat("weapon_unarmed"))
							{
								iLocal_396 = WEAPON::GET_BEST_PED_WEAPON(func_908(2), 1);
								if (iLocal_396 == 0 || iLocal_396 == joaat("weapon_unarmed"))
								{
									iLocal_396 = joaat("weapon_pumpshotgun");
								}
							}
							if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_908(2), iLocal_396) < WEAPON::GET_MAX_AMMO_IN_CLIP(func_908(2), iLocal_396, 1))
							{
								iVar3 = WEAPON::GET_MAX_AMMO_IN_CLIP(func_908(2), iLocal_396, 1) * 2;
							}
							WEAPON::GIVE_WEAPON_TO_PED(func_908(2), iLocal_396, iVar3, 1, 1);
						}
						if (!PED::IS_PED_INJURED(func_908(1)))
						{
							if (iLocal_395 == 0 || iLocal_395 == joaat("weapon_unarmed"))
							{
								iLocal_395 = WEAPON::GET_BEST_PED_WEAPON(func_908(1), 1);
								if (iLocal_395 == 0 || iLocal_395 == joaat("weapon_unarmed"))
								{
									iLocal_395 = joaat("weapon_smg");
								}
							}
							if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_908(1), iLocal_395) < WEAPON::GET_MAX_AMMO_IN_CLIP(func_908(1), iLocal_395, 1))
							{
								iVar4 = WEAPON::GET_MAX_AMMO_IN_CLIP(func_908(1), iLocal_395, 1) * 2;
							}
							WEAPON::GIVE_WEAPON_TO_PED(func_908(1), iLocal_395, iVar4, 1, 1);
						}
						if (!PED::IS_PED_INJURED(Local_401))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_401, joaat("weapon_assaultrifle"), -1, 1, 1);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_401, -115.4358f, -1861.739f, 1.2639f, 2f, 20000, 0.25f, 0, 1193033728);
							PED::FORCE_PED_MOTION_STATE(Local_401, -530524, 0, 0, 0);
							PED::SET_PED_USING_ACTION_MODE(Local_401, 1, -1, 0);
						}
						if (!PED::IS_PED_INJURED(func_132()))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_132(), -114.8476f, -1864.955f, 0.4774f, 2f, 20000, 0.25f, 0, 1193033728);
							PED::FORCE_PED_MOTION_STATE(func_132(), -530524, 0, 0, 0);
							PED::SET_PED_USING_ACTION_MODE(func_132(), 1, -1, 0);
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3000, 0, 1, 0);
						}
						func_112(&Local_401, 9);
						func_112(&Local_430, 9);
						SYSTEM::WAIT(500);
						*iParam1++;
					}
					break;
				
				case 5:
					STREAMING::REQUEST_MODEL(iLocal_328);
					STREAMING::REQUEST_MODEL(Local_530.f_6);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_530.f_7, sLocal_311);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1114[0 /*13*/].f_7, sLocal_311);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1114[1 /*13*/].f_7, sLocal_311);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1114[2 /*13*/].f_7, sLocal_311);
					if ((Global_86814 == 0 && ENTITY::DOES_ENTITY_EXIST(Local_4208[0 /*29*/])) || Global_86814 == 1)
					{
						if (((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1114[0 /*13*/].f_7, sLocal_311) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1114[1 /*13*/].f_7, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1114[2 /*13*/].f_7, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_530.f_7, sLocal_311))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_401.f_28 /*13*/], 0))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_401.f_28 /*13*/], Local_1114[Local_401.f_28 /*13*/].f_7, sLocal_311, 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_401.f_28 /*13*/], 5500f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1114[Local_401.f_28 /*13*/], 1);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_430.f_28 /*13*/], 0))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_430.f_28 /*13*/], Local_1114[Local_430.f_28 /*13*/].f_7, sLocal_311, 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_430.f_28 /*13*/], 5500f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1114[Local_430.f_28 /*13*/], 1);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_459.f_28 /*13*/], 0))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_459.f_28 /*13*/], Local_1114[Local_459.f_28 /*13*/].f_7, sLocal_311, 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_459.f_28 /*13*/], 5500f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1114[Local_459.f_28 /*13*/], 1);
							}
							func_112(&Local_401, 16);
							func_112(&Local_430, 16);
							func_112(&Local_459, 16);
							SYSTEM::WAIT(500);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							*iParam1++;
						}
					}
					else if (Global_86814 == 0)
					{
						if (func_241(&(Local_4208[0 /*29*/]), 0, iLocal_400, 0, 145, 0, 1, 0, Local_1114[0 /*13*/], 0, 1))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_4208[0 /*29*/], 0, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_4208[0 /*29*/], 2, 1, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_4208[0 /*29*/], 3, 0, 5, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_4208[0 /*29*/], 4, 0, 5, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_4208[0 /*29*/], 8, 1, 0, 0);
							func_112(&(Local_4208[0 /*29*/]), 14);
						}
					}
					break;
				
				case 6:
					STREAMING::REQUEST_MODEL(joaat("polmav"));
					STREAMING::REQUEST_MODEL(joaat("police3"));
					STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
					STREAMING::REQUEST_MODEL(joaat("s_m_y_swat_01"));
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_4442.f_7, sLocal_311);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1114[0 /*13*/].f_7, sLocal_311);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1114[1 /*13*/].f_7, sLocal_311);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1114[2 /*13*/].f_7, sLocal_311);
					if (((((((STREAMING::HAS_MODEL_LOADED(joaat("polmav")) && STREAMING::HAS_MODEL_LOADED(joaat("police3"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_swat_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_4442.f_7, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1114[0 /*13*/].f_7, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1114[1 /*13*/].f_7, sLocal_311)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1114[2 /*13*/].f_7, sLocal_311))
					{
						Local_4442 = VEHICLE::CREATE_VEHICLE(joaat("polmav"), Local_4442.f_2, Local_4442.f_5, 1, 1);
						Local_4354[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4442, 6, joaat("s_m_y_swat_01"), -1, 1, 1);
						Local_4354[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4442, 6, joaat("s_m_y_swat_01"), 1, 1, 1);
						Local_4354[2 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4442, 6, joaat("s_m_y_swat_01"), 2, 1, 1);
						iVar5 = 0;
						while (iVar5 <= 2)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_4354[iVar5 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
							WEAPON::GIVE_WEAPON_TO_PED(Local_4354[iVar5 /*29*/], joaat("weapon_carbinerifle"), -1, 0, 1);
							PED::SET_PED_HEARING_RANGE(Local_4354[iVar5 /*29*/], 150f);
							PED::SET_PED_SEEING_RANGE(Local_4354[iVar5 /*29*/], 150f);
							PED::SET_PED_ID_RANGE(Local_4354[iVar5 /*29*/], 150f);
							PED::SET_PED_HIGHLY_PERCEPTIVE(Local_4354[iVar5 /*29*/], 1);
							PED::SET_PED_SHOOT_RATE(Local_4354[iVar5 /*29*/], 50);
							PED::SET_PED_ACCURACY(Local_4354[iVar5 /*29*/], 5);
							iVar5++;
						}
						VEHICLE::SET_VEHICLE_LIVERY(Local_4442, 0);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4442, Local_4442.f_7, sLocal_311, 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4442, 51025f);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_4442, 1);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_4442, 1);
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4442);
						Local_2947[3 /*13*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), 625.9272f, -2607.055f, 5.0864f, 286.775f, 1, 1);
						Local_2514[0 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2947[3 /*13*/], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						Local_2514[1 /*29*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2947[3 /*13*/], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
						VEHICLE::SET_VEHICLE_SIREN(Local_2947[3 /*13*/], 1);
						PED::SET_PED_AS_COP(Local_2514[0 /*29*/], 1);
						PED::SET_PED_AS_COP(Local_2514[1 /*29*/], 1);
						WEAPON::GIVE_WEAPON_TO_PED(Local_2514[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
						WEAPON::GIVE_WEAPON_TO_PED(Local_2514[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
						Local_2947[4 /*13*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), Local_2947[4 /*13*/].f_2, Local_2947[4 /*13*/].f_5, 1, 1);
						Local_2573[0 /*29*/] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 693.4204f, -2529.836f, 11.4264f, 115.3417f, 1, 1);
						Local_2573[1 /*29*/] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), 691.3856f, -2529.005f, 11.4266f, 103.4375f, 1, 1);
						WEAPON::GIVE_WEAPON_TO_PED(Local_2573[0 /*29*/], joaat("weapon_pistol"), -1, 0, 1);
						WEAPON::GIVE_WEAPON_TO_PED(Local_2573[1 /*29*/], joaat("weapon_pumpshotgun"), -1, 0, 1);
						VEHICLE::SET_VEHICLE_SIREN(Local_2947[4 /*13*/], 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("polmav"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_swat_01"));
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_401.f_28 /*13*/], 0))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_401.f_28 /*13*/], Local_1114[Local_401.f_28 /*13*/].f_7, sLocal_311, 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_401.f_28 /*13*/], 73000f);
							VEHICLE::SET_PLAYBACK_SPEED(Local_1114[Local_401.f_28 /*13*/], 0.8f);
							Local_1114[Local_401.f_28 /*13*/].f_8 = 0.8f;
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1114[Local_401.f_28 /*13*/], 1);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_430.f_28 /*13*/], 0))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_430.f_28 /*13*/], Local_1114[Local_430.f_28 /*13*/].f_7, sLocal_311, 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_430.f_28 /*13*/], 73000f);
							VEHICLE::SET_PLAYBACK_SPEED(Local_1114[Local_430.f_28 /*13*/], 0.8f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1114[Local_430.f_28 /*13*/], 1);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_459.f_28 /*13*/], 0))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_459.f_28 /*13*/], Local_1114[Local_459.f_28 /*13*/].f_7, sLocal_311, 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1114[Local_459.f_28 /*13*/], 73000f);
							VEHICLE::SET_PLAYBACK_SPEED(Local_1114[Local_459.f_28 /*13*/], 0.8f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1114[Local_459.f_28 /*13*/], 1);
						}
						func_112(&(Local_4354[0 /*29*/]), 17);
						func_112(&(Local_2337[0 /*29*/]), 4);
						func_112(&(Local_2396[0 /*29*/]), 4);
						func_112(&(Local_2455[0 /*29*/]), 4);
						func_112(&(Local_2514[0 /*29*/]), 5);
						func_112(&(Local_2573[0 /*29*/]), 5);
						func_112(&Local_401, 18);
						func_112(&Local_459, 18);
						func_112(&Local_430, 18);
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
						}
						PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
						PED::SET_CREATE_RANDOM_COPS(1);
						MISC::ENABLE_DISPATCH_SERVICE(2, 1);
						SYSTEM::WAIT(500);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						*iParam1++;
					}
					break;
				
				default:
					*iParam1++;
					break;
			}
		}
		else
		{
			*iParam1++;
		}
	}
	if (*iParam1 == 11)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (iLocal_924 == 0)
			{
				switch (iParam0)
				{
					case 3:
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.077f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((17f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
						break;
					
					default:
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						break;
				}
				iLocal_924 = 1;
			}
			switch (iParam0)
			{
				case 3:
					AUDIO::TRIGGER_MUSIC_EVENT("FRA1_FIGHT_RESTART");
					break;
				
				case 4:
					AUDIO::TRIGGER_MUSIC_EVENT("FRA1_FIGHT_LEAVE_RESTART");
					break;
				
				case 5:
				case 6:
					AUDIO::TRIGGER_MUSIC_EVENT("FRA1_SPEED_RESTART");
					break;
			}
			switch (iParam0)
			{
				case 0:
				case 2:
				case 7:
				case 8:
				case 9:
				case 10:
					break;
				
				default:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					break;
				}
		}
		switch (iParam0)
		{
			case 3:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_SHOOTOUT_MAIN"))
				{
					AUDIO::START_AUDIO_SCENE("FRANKLIN_1_SHOOTOUT_MAIN");
				}
				break;
			
			case 4:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_APPROACH_RIVER"))
				{
					AUDIO::START_AUDIO_SCENE("FRANKLIN_1_APPROACH_RIVER");
				}
				break;
			
			case 5:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_JETSKI_START"))
				{
					AUDIO::START_AUDIO_SCENE("FRANKLIN_1_JETSKI_START");
				}
				break;
			
			case 6:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_1_JETSKI_HELI_ESCAPE"))
				{
					AUDIO::START_AUDIO_SCENE("FRANKLIN_1_JETSKI_HELI_ESCAPE");
				}
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 12)
	{
		switch (iParam0)
		{
			case 1:
				func_861(0, "DRIVE TO DEAL", 0, 0, 0, 1);
				break;
			
			case 3:
				func_861(1, "GROVE STREET SHOOTOUT", 0, 0, 0, 1);
				break;
			
			case 4:
				func_861(2, "RUN TO SPEEDOPHILES", 0, 0, 0, 1);
				break;
			
			case 5:
				func_861(3, "SPEEDOPHILE RIDE", 0, 0, 0, 1);
				break;
			
			case 6:
				func_861(4, "LOSE COPS", 1, 0, 0, 1);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 13)
	{
		switch (iParam0)
		{
			case 3:
			case 4:
			case 5:
				iLocal_702 = 1;
				break;
			
			default:
				iLocal_702 = 0;
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 14)
	{
		*iParam2 = 1;
		*iParam4 = 0;
		*uParam3 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		*iParam1++;
	}
	if (*iParam1 == 15)
	{
		return 1;
	}
	return 0;
}

void func_782(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x80302
{
	if (MISC::IS_BIT_SET(iParam0, 0))
	{
		*uParam1 = 0;
	}
	else if (MISC::IS_BIT_SET(iParam0, 1))
	{
		*uParam1 = 1;
	}
	else if (MISC::IS_BIT_SET(iParam0, 2))
	{
		*uParam1 = 2;
	}
	if (MISC::IS_BIT_SET(iParam0, 3))
	{
		*uParam2 = 0;
	}
	else if (MISC::IS_BIT_SET(iParam0, 4))
	{
		*uParam2 = 1;
	}
	else if (MISC::IS_BIT_SET(iParam0, 5))
	{
		*uParam2 = 2;
	}
	if (MISC::IS_BIT_SET(iParam0, 6))
	{
		*uParam3 = 0;
	}
	else if (MISC::IS_BIT_SET(iParam0, 7))
	{
		*uParam3 = 1;
	}
	else if (MISC::IS_BIT_SET(iParam0, 8))
	{
		*uParam3 = 2;
	}
}









int func_791(var uParam0)//Position - 0x8058B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (func_240(uParam0[iVar0 /*8*/], 0))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_792(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x805BF
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_7);
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_7))
		{
			if (func_793(uParam0, uParam0->f_3, uParam0->f_6, 1))
			{
				if (!PED::IS_PED_INJURED(*uParam0))
				{
					func_540(*uParam0, iParam1, iParam3, iParam6, bParam4, iParam5);
					PED::SET_PED_CAN_RAGDOLL(*uParam0, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, 1);
					if (iParam2 == 1)
					{
						uParam0->f_1 = GlobalFunc_7056(*uParam0, 0, 0);
					}
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_7);
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

int func_793(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x8064C
{
	int iVar0;
	
	iVar0 = GlobalFunc_2579();
	STREAMING::REQUEST_MODEL(iVar0);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			PED::DELETE_PED(uParam0);
		}
		*iParam0 = PED::CREATE_PED(26, iVar0, Param1, uParam4, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 2, 0, 0, 0);
		if (Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_263)
		{
			PED::SET_PED_COMPONENT_VARIATION(*iParam0, 3, 0, Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_254.f_4, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(*iParam0, 3, 0, 4, 0);
		}
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 11, 0, 0, 0);
		PED::CLEAR_ALL_PED_PROPS(*iParam0);
		if (bParam5)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		return 1;
	}
	return 0;
}


void func_795(int iParam0)//Position - 0x80762
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_1066 - 1))
	{
		iLocal_1066[iVar0] = iParam0;
		iVar0++;
	}
}




void func_799(int iParam0)//Position - 0x8085F
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_517))
			{
				GlobalFunc_2532(Local_517.f_6, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_401))
			{
				GlobalFunc_2532(Local_401.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_430))
			{
				GlobalFunc_2532(Local_430.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_488))
			{
				GlobalFunc_2532(Local_488.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			GlobalFunc_5928(func_668(), &uLocal_1111, 2, &uLocal_985);
			GlobalFunc_5928("missfra1_tovan", &uLocal_1111, 2, &uLocal_985);
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_517))
			{
				GlobalFunc_2532(Local_517.f_6, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_401))
			{
				GlobalFunc_2532(Local_401.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_430))
			{
				GlobalFunc_2532(Local_430.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_488))
			{
				GlobalFunc_2532(Local_488.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			break;
		
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_517))
			{
				GlobalFunc_2532(Local_517.f_6, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_401))
			{
				GlobalFunc_2532(Local_401.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_430))
			{
				GlobalFunc_2532(Local_430.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_488))
			{
				GlobalFunc_2532(Local_488.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3173[0 /*8*/]))
			{
				GlobalFunc_2532(Local_3173[0 /*8*/].f_1, &uLocal_1084, 12, &uLocal_983);
			}
			TASK::REQUEST_WAYPOINT_RECORDING("fra1_cflee");
			GlobalFunc_2532(iLocal_328, &uLocal_1084, 12, &uLocal_983);
			break;
		
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_401))
			{
				GlobalFunc_2532(Local_401.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_430))
			{
				GlobalFunc_2532(Local_430.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			break;
		
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_401))
			{
				GlobalFunc_2532(Local_401.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_430))
			{
				GlobalFunc_2532(Local_430.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1114[0 /*13*/]))
			{
				GlobalFunc_2532(Local_1114[0 /*13*/].f_6, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1114[1 /*13*/]))
			{
				GlobalFunc_2532(Local_1114[1 /*13*/].f_6, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1114[2 /*13*/]))
			{
				GlobalFunc_2532(Local_1114[2 /*13*/].f_6, &uLocal_1084, 12, &uLocal_983);
			}
			GlobalFunc_2532(iLocal_328, &uLocal_1084, 12, &uLocal_983);
			GlobalFunc_2532(Local_530.f_6, &uLocal_1084, 12, &uLocal_983);
			GlobalFunc_2909(Local_530.f_7, sLocal_311, &uLocal_1097, 13, &uLocal_984);
			break;
		
		case 6:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_401))
			{
				GlobalFunc_2532(Local_401.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_430))
			{
				GlobalFunc_2532(Local_430.f_7, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1114[0 /*13*/]))
			{
				GlobalFunc_2532(Local_1114[0 /*13*/].f_6, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1114[1 /*13*/]))
			{
				GlobalFunc_2532(Local_1114[1 /*13*/].f_6, &uLocal_1084, 12, &uLocal_983);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1114[2 /*13*/]))
			{
				GlobalFunc_2532(Local_1114[2 /*13*/].f_6, &uLocal_1084, 12, &uLocal_983);
			}
			break;
		
		case 10:
			break;
	}
}






void func_805()//Position - 0x80DF8
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_4455;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_4455[iVar1] = 0;
		iVar1++;
	}
	iLocal_4486 = 0;
}




void func_809(int iParam0)//Position - 0x80EFD
{
	func_812();
	func_811();
	Local_608.f_1 = joaat("v_ilev_fa_frontdoor");
	Local_608.f_2 = { -14.8689f, -1441.182f, 31.1932f };
	Local_608.f_5 = { 0f, 0f, 0f };
	Local_616.f_1 = joaat("prop_strip_door_01");
	Local_616.f_2 = { 128.01f, -1298.565f, 29.425f };
	Local_616.f_5 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			Local_517.f_2 = { -19.1293f, -1455.206f, 29.5073f };
			Local_517.f_5 = 94.6991f;
			Local_517.f_6 = GlobalFunc_5112(19, 0);
			Local_459.f_3 = { -14.1001f, -1448.931f, 29.6472f };
			Local_459.f_6 = 190.0336f;
			Local_459.f_7 = GlobalFunc_4917(1);
			Local_430.f_3 = { -18.6223f, -1428.457f, 29.6632f };
			Local_430.f_6 = 177.6198f;
			Local_430.f_7 = GlobalFunc_4917(2);
			Local_401.f_3 = { -18.0384f, -1452.621f, 29.5806f };
			Local_401.f_6 = 122.8744f;
			Local_401.f_7 = GlobalFunc_4946(19);
			Local_488.f_3 = { -23.2493f, -1458.207f, 29.6356f };
			Local_488.f_6 = 95.2972f;
			Local_488.f_7 = GlobalFunc_2579();
			Local_568.f_2 = { -12.899f, -1446.51f, 29.6976f };
			Local_568.f_5 = { -93.24f, 0f, 40.7f };
			Local_568.f_1 = joaat("prop_cs_trowel");
			break;
		
		case 1:
			Local_517.f_2 = { -19.1293f, -1455.206f, 29.5073f };
			Local_517.f_5 = 94.6991f;
			Local_517.f_6 = GlobalFunc_5112(19, 0);
			Local_459.f_3 = { -14.1001f, -1448.931f, 29.6472f };
			Local_459.f_6 = 190.0336f;
			Local_459.f_7 = GlobalFunc_4917(1);
			Local_430.f_3 = { -14.8952f, -1455.477f, 29.439f };
			Local_430.f_6 = 95.3372f;
			Local_430.f_7 = GlobalFunc_4917(2);
			Local_401.f_3 = { -18.0384f, -1452.621f, 29.5806f };
			Local_401.f_6 = 122.8744f;
			Local_401.f_7 = GlobalFunc_4946(19);
			Local_488.f_3 = { -23.2493f, -1458.207f, 29.6356f };
			Local_488.f_6 = 95.2972f;
			Local_488.f_7 = GlobalFunc_2579();
			Local_552.f_1 = joaat("p_ld_heist_bag_s_1");
			Local_4168[0 /*13*/].f_2 = { 83.8966f, -1920.022f, 19.8475f };
			Local_4168[0 /*13*/].f_5 = 48.1261f;
			Local_4168[0 /*13*/].f_6 = joaat("bmx");
			Local_4168[0 /*13*/].f_7 = 25;
			Local_4168[1 /*13*/].f_2 = { 84.1394f, -1921.72f, 19.8443f };
			Local_4168[1 /*13*/].f_5 = 54.4925f;
			Local_4168[1 /*13*/].f_6 = joaat("bmx");
			Local_4168[1 /*13*/].f_7 = 26;
			Local_4168[2 /*13*/].f_2 = { 84.9489f, -1919.388f, 19.7905f };
			Local_4168[2 /*13*/].f_5 = 51.5015f;
			Local_4168[2 /*13*/].f_6 = joaat("bmx");
			Local_4168[2 /*13*/].f_7 = 27;
			Local_4080[0 /*29*/].f_7 = joaat("g_m_y_famfor_01");
			Local_4080[1 /*29*/].f_7 = joaat("g_m_y_famca_01");
			Local_4080[2 /*29*/].f_7 = joaat("g_m_y_famca_01");
			Local_568.f_2 = { -12.899f, -1446.51f, 29.6976f };
			Local_568.f_5 = { -93.24f, 0f, 40.7f };
			Local_568.f_1 = joaat("prop_cs_trowel");
			break;
		
		case 2:
			Local_517.f_2 = { 95.2699f, -1942.243f, 19.723f };
			Local_517.f_5 = 207.4629f;
			Local_517.f_6 = GlobalFunc_5112(19, 0);
			Local_459.f_3 = { 82.7797f, -1949.686f, 19.79f };
			Local_459.f_6 = 319.4117f;
			Local_459.f_7 = GlobalFunc_4917(1);
			Local_430.f_3 = { 85.02f, -1946.93f, 19.78f };
			Local_430.f_6 = 319.4117f;
			Local_430.f_7 = GlobalFunc_4917(2);
			Local_401.f_3 = { 83.7215f, -1948.412f, 19.6708f };
			Local_401.f_6 = 319.4117f;
			Local_401.f_7 = GlobalFunc_4946(19);
			Local_488.f_3 = { 89.0399f, -1957.47f, 19.7474f };
			Local_488.f_6 = 48.5293f;
			Local_488.f_7 = GlobalFunc_2579();
			Local_592.f_2 = { 85.6152f, -1958.089f, 20.1654f };
			Local_592.f_5 = { 0f, 0f, 153.36f };
			Local_592.f_1 = joaat("prop_coke_block_half_b");
			break;
		
		case 3:
			Local_517.f_2 = { 95.2699f, -1942.243f, 19.723f };
			Local_517.f_5 = 207.4629f;
			Local_517.f_6 = GlobalFunc_5112(19, 0);
			Local_401.f_3 = { 83.7215f, -1948.412f, 19.6708f };
			Local_401.f_6 = 319.4117f;
			Local_401.f_7 = GlobalFunc_4946(19);
			Local_430.f_3 = { 85.02f, -1946.93f, 19.78f };
			Local_430.f_6 = 319.4117f;
			Local_430.f_7 = GlobalFunc_4917(2);
			Local_459.f_3 = { 82.7797f, -1949.686f, 19.79f };
			Local_459.f_6 = 319.4117f;
			Local_459.f_7 = GlobalFunc_4917(1);
			Local_488.f_3 = { 88.84f, -1949.01f, 19.74f };
			Local_488.f_6 = 29.5409f;
			Local_488.f_7 = GlobalFunc_2579();
			Local_592.f_2 = { 85.6152f, -1958.089f, 20.1654f };
			Local_592.f_5 = { 0f, 0f, 153.36f };
			Local_592.f_1 = joaat("prop_coke_block_half_b");
			Local_2086[0 /*13*/].f_2 = { 94.6551f, -1857.827f, 23.5068f };
			Local_2086[0 /*13*/].f_5 = 149.4152f;
			Local_2086[0 /*13*/].f_6 = joaat("felon");
			Local_2086[0 /*13*/].f_7 = 1;
			Local_2086[1 /*13*/].f_2 = { 75.8712f, -1849.031f, 23.6678f };
			Local_2086[1 /*13*/].f_5 = 235.5536f;
			Local_2086[1 /*13*/].f_6 = joaat("felon");
			Local_2086[1 /*13*/].f_7 = 600;
			Local_2086[2 /*13*/].f_2 = { 123.8393f, -1869.324f, 23.2737f };
			Local_2086[2 /*13*/].f_5 = 66.8293f;
			Local_2086[2 /*13*/].f_6 = joaat("felon");
			Local_2086[2 /*13*/].f_7 = 601;
			Local_2086[3 /*13*/].f_2 = { -14.3781f, -1767.972f, 27.951f };
			Local_2086[3 /*13*/].f_5 = 233.6783f;
			Local_2086[3 /*13*/].f_6 = joaat("oracle");
			Local_2086[3 /*13*/].f_7 = 7;
			Local_2086[4 /*13*/].f_2 = { 43.1274f, -1850.763f, 21.8317f };
			Local_2086[4 /*13*/].f_5 = 139.4681f;
			Local_2086[4 /*13*/].f_6 = joaat("emperor2");
			Local_2086[4 /*13*/].f_7 = 9;
			Local_934 = { 71.12661f, -1938.604f, 19.37355f };
			Local_934.f_3 = { 121.5384f, -1907.023f, 23.435f };
			Local_934.f_6 = 14f;
			Local_941 = { 87.845f, -1911.46f, 17.9964f };
			Local_941.f_3 = { 64.6608f, -1933.177f, 23.9972f };
			Local_941.f_6 = 5f;
			Local_948 = { 31.5761f, -1913.142f, 12.64448f };
			Local_948.f_3 = { 72.2112f, -1864.884f, 27.2565f };
			Local_948.f_6 = 8f;
			Local_955 = { 50.92253f, -1870.579f, 20.41875f };
			Local_955.f_3 = { 30.111f, -1895.439f, 25.33844f };
			Local_955.f_6 = 8f;
			Local_962 = { 12.8855f, -1885.889f, 24.2318f };
			Local_962.f_3 = { 42.7759f, -1849.447f, 20.834f };
			Local_962.f_6 = 8f;
			Local_969 = { 50.92253f, -1870.579f, 20.41875f };
			Local_969.f_3 = { 30.111f, -1895.439f, 25.33844f };
			Local_969.f_6 = 16f;
			Local_976 = { -44.49314f, -1867.815f, 23.29402f };
			Local_976.f_3 = { -17.55952f, -1835.444f, 29.4228f };
			Local_976.f_6 = 22f;
			Local_530.f_2 = { -63.9716f, -1884.259f, 8.4079f };
			Local_530.f_5 = 235.0957f;
			Local_530.f_6 = joaat("oracle");
			Local_530.f_7 = 58;
			func_810();
			break;
		
		case 4:
			Local_401.f_3 = { -26.6284f, -1851.158f, 24.6834f };
			Local_401.f_6 = 125.7717f;
			Local_401.f_7 = GlobalFunc_4946(19);
			switch (GlobalFunc_8315())
			{
				case 1:
					Local_430.f_3 = { -26.9378f, -1849.246f, 24.7405f };
					Local_430.f_6 = 129.2849f;
					Local_430.f_7 = GlobalFunc_4917(2);
					Local_459.f_3 = { -23.5686f, -1845.684f, 24.3252f };
					Local_459.f_6 = 139.5157f;
					Local_459.f_7 = GlobalFunc_4917(1);
					break;
				
				case 2:
					Local_459.f_3 = { -26.9378f, -1849.246f, 24.7405f };
					Local_459.f_6 = 129.2849f;
					Local_459.f_7 = GlobalFunc_4917(2);
					Local_430.f_3 = { -23.5686f, -1845.684f, 24.3252f };
					Local_430.f_6 = 139.5157f;
					Local_430.f_7 = GlobalFunc_4917(1);
					break;
			}
			Local_530.f_2 = { -63.9716f, -1884.259f, 8.4079f };
			Local_530.f_5 = 235.0957f;
			Local_530.f_6 = joaat("oracle");
			Local_530.f_7 = 58;
			func_810();
			break;
		
		case 5:
			Local_459.f_3 = { -113.7057f, -1871.023f, 0.5306f };
			Local_459.f_6 = 142.4835f;
			Local_459.f_7 = GlobalFunc_4917(1);
			Local_430.f_3 = { -123.1736f, -1863.087f, 0.4591f };
			Local_430.f_6 = 142.4846f;
			Local_430.f_7 = GlobalFunc_4917(2);
			Local_401.f_3 = { -118.2788f, -1866.718f, 0.4708f };
			Local_401.f_6 = 142.4846f;
			Local_401.f_7 = GlobalFunc_4946(19);
			Local_530.f_2 = { -63.9716f, -1884.259f, 8.4079f };
			Local_530.f_5 = 235.0957f;
			Local_530.f_6 = joaat("oracle");
			Local_530.f_7 = 58;
			Local_4442.f_2 = { -48.0368f, -2279.313f, -12.2942f };
			Local_4442.f_5 = 276.3763f;
			Local_4442.f_6 = joaat("polmav");
			Local_4442.f_7 = 91;
			Local_543.f_1 = 23;
			Local_543.f_2 = { 217.36f, -2223.17f, 11.34f };
			Local_543.f_5 = joaat("freight");
			Local_543.f_6 = joaat("freightcar");
			Local_543.f_7 = joaat("freightcont1");
			func_810();
			break;
		
		case 6:
			Local_459.f_3 = { 696.0857f, -2584.135f, 0.15417f };
			Local_459.f_6 = 236.2914f;
			Local_459.f_7 = GlobalFunc_4917(1);
			Local_430.f_3 = { 697.1349f, -2593.274f, 0.24273f };
			Local_430.f_6 = 236.2914f;
			Local_430.f_7 = GlobalFunc_4917(2);
			Local_401.f_3 = { 708.5322f, -2593.767f, 0.31231f };
			Local_401.f_6 = 236.2914f;
			Local_401.f_7 = GlobalFunc_4946(19);
			Local_1114[0 /*13*/].f_2 = { 697.1349f, -2593.274f, 0.24273f };
			Local_1114[0 /*13*/].f_5 = 236.2914f;
			Local_1114[0 /*13*/].f_6 = joaat("seashark");
			Local_1114[0 /*13*/].f_7 = 63;
			Local_1114[1 /*13*/].f_2 = { 708.5322f, -2593.767f, 0.31231f };
			Local_1114[1 /*13*/].f_5 = 236.2914f;
			Local_1114[1 /*13*/].f_6 = joaat("seashark");
			Local_1114[1 /*13*/].f_7 = 72;
			Local_1114[2 /*13*/].f_2 = { 696.0857f, -2584.135f, 0.15417f };
			Local_1114[2 /*13*/].f_5 = 236.2914f;
			Local_1114[2 /*13*/].f_6 = joaat("seashark");
			Local_1114[2 /*13*/].f_7 = 82;
			Local_4442.f_2 = { -48.0368f, -2279.313f, -12.2942f };
			Local_4442.f_5 = 276.3763f;
			Local_4442.f_6 = joaat("polmav");
			Local_4442.f_7 = 91;
			break;
		
		case 7:
			Local_459.f_3 = { -14.1001f, -1448.931f, 29.6472f };
			Local_459.f_6 = 190.0336f;
			Local_459.f_7 = GlobalFunc_4917(1);
			Local_430.f_3 = { -14.8952f, -1455.477f, 29.439f };
			Local_430.f_6 = 95.3372f;
			Local_430.f_7 = GlobalFunc_4917(2);
			Local_401.f_3 = { -18.0384f, -1452.621f, 29.5806f };
			Local_401.f_6 = 122.8744f;
			Local_401.f_7 = GlobalFunc_4946(19);
			break;
		
		case 8:
			Local_459.f_3 = { 133.7964f, -1312.064f, 28.1227f };
			Local_459.f_6 = 350.3661f;
			Local_459.f_7 = GlobalFunc_4917(1);
			Local_430.f_3 = { 140.4018f, -1312.333f, 28.0595f };
			Local_430.f_6 = 310.2663f;
			Local_430.f_7 = GlobalFunc_4917(2);
			break;
		
		case 9:
			Local_459.f_3 = { -14.1001f, -1448.931f, 29.6472f };
			Local_459.f_6 = 190.0336f;
			Local_459.f_7 = GlobalFunc_4917(1);
			Local_430.f_3 = { -14.8952f, -1455.477f, 29.439f };
			Local_430.f_6 = 95.3372f;
			Local_430.f_7 = GlobalFunc_4917(2);
			break;
		
		case 10:
			Local_459.f_3 = { 1176.677f, -3048.621f, 4.9016f };
			Local_459.f_6 = 174.4718f;
			Local_459.f_7 = GlobalFunc_4917(1);
			Local_430.f_3 = { 1176.677f, -3048.621f, 4.9016f };
			Local_430.f_6 = 174.4718f;
			Local_430.f_7 = GlobalFunc_4917(2);
			break;
	}
}

void func_810()//Position - 0x81CB6
{
	Local_1114[0 /*13*/].f_2 = { -120.1f, -1868.2f, -0.4f };
	Local_1114[0 /*13*/].f_5 = 230.5773f;
	Local_1114[0 /*13*/].f_6 = joaat("seashark");
	Local_1114[1 /*13*/].f_2 = { -124.1f, -1864.9f, -0.4f };
	Local_1114[1 /*13*/].f_5 = 230.7892f;
	Local_1114[1 /*13*/].f_6 = joaat("seashark");
	Local_1114[2 /*13*/].f_2 = { -127.6f, -1861.95f, -0.4f };
	Local_1114[2 /*13*/].f_5 = 230.0387f;
	Local_1114[2 /*13*/].f_6 = joaat("seashark");
	Local_4208[0 /*29*/].f_3 = { -129.2383f, -1864.092f, 0.1382f };
	Local_4208[0 /*29*/].f_6 = 30.5089f;
	Local_4208[0 /*29*/].f_7 = joaat("a_f_y_beach_01");
	Local_4208[1 /*29*/].f_3 = { -120.6672f, -1864.677f, 0.4591f };
	Local_4208[1 /*29*/].f_6 = 101.7921f;
	Local_4208[1 /*29*/].f_7 = joaat("a_f_y_beach_01");
	Local_4208[2 /*29*/].f_3 = { -168.1493f, -1844.244f, 0.459f };
	Local_4208[2 /*29*/].f_6 = 233.186f;
	Local_4208[2 /*29*/].f_7 = joaat("ig_claypain");
	Local_4208[3 /*29*/].f_3 = { -160.52f, -1850.36f, 0.46f };
	Local_4208[3 /*29*/].f_6 = 202.5305f;
	Local_4208[3 /*29*/].f_7 = joaat("s_m_y_grip_01");
	Local_4208[4 /*29*/].f_3 = { -159.32f, -1852.03f, 0.46f };
	Local_4208[4 /*29*/].f_6 = 193.2793f;
	Local_4208[4 /*29*/].f_7 = joaat("s_m_y_grip_01");
	Local_560.f_2 = { -128f, -1856.1f, 0.46f };
	Local_560.f_5 = { 0f, 0f, 35f };
	Local_560.f_1 = joaat("prop_worklight_03b");
	Local_576.f_2 = { -159.36f, -1850.97f, 1f };
	Local_576.f_5 = { 0f, 0f, 0f };
	Local_576.f_1 = joaat("prop_v_cam_01");
	Local_600.f_2 = { -158.72f, -1852.29f, 1f };
	Local_600.f_5 = { 0f, 0f, 0f };
	Local_600.f_1 = joaat("prop_v_bmike_01");
	Local_584.f_2 = { -128.86f, -1857.2f, 0.695f };
	Local_584.f_5 = { 0f, 0f, 69.84f };
	Local_584.f_1 = joaat("prop_boombox_01");
}

void func_811()//Position - 0x81EFE
{
	Local_2152[0 /*13*/].f_2 = { 89.301f, -1920.606f, 19.5927f };
	Local_2152[0 /*13*/].f_5 = 52.1336f;
	Local_2152[0 /*13*/].f_6 = joaat("emperor2");
	Local_2152[1 /*13*/].f_2 = { 41.3838f, -1893.482f, 20.8455f };
	Local_2152[1 /*13*/].f_5 = 231.0601f;
	Local_2152[1 /*13*/].f_6 = joaat("emperor2");
	Local_2152[2 /*13*/].f_2 = { 68.0439f, -1915.706f, 20.4028f };
	Local_2152[2 /*13*/].f_5 = 230.4548f;
	Local_2152[2 /*13*/].f_6 = joaat("emperor2");
	Local_2152[3 /*13*/].f_2 = { 7.928f, -1865.512f, 22.6563f };
	Local_2152[3 /*13*/].f_5 = 230.2654f;
	Local_2152[3 /*13*/].f_6 = joaat("emperor2");
	Local_3173[0 /*8*/].f_2 = { 71.36f, -1926.93f, 20.06f };
	Local_3173[0 /*8*/].f_5 = { 0.3f, -2.2f, 140.38f };
	Local_3173[0 /*8*/].f_1 = joaat("p_dumpster_t");
	Local_3173[1 /*8*/].f_2 = { 84.9905f, -1908.635f, 20.1f };
	Local_3173[1 /*8*/].f_5 = { 0f, 3.2f, -40.6f };
	Local_3173[1 /*8*/].f_1 = joaat("p_dumpster_t");
	Local_3173[2 /*8*/].f_2 = { 61.91f, -1919.37f, 20.63f };
	Local_3173[2 /*8*/].f_5 = { 5.9f, -1.2f, 139.68f };
	Local_3173[2 /*8*/].f_1 = joaat("p_dumpster_t");
	Local_3173[3 /*8*/].f_2 = { 56.7225f, -1890.258f, 20.5779f };
	Local_3173[3 /*8*/].f_5 = { 2f, 0f, 25.56f };
	Local_3173[3 /*8*/].f_1 = joaat("p_dumpster_t");
	Local_3173[4 /*8*/].f_2 = { 43.1631f, -1898.245f, 20.79f };
	Local_3173[4 /*8*/].f_5 = { 2f, 1.5f, -9f };
	Local_3173[4 /*8*/].f_1 = joaat("p_dumpster_t");
	Local_3173[5 /*8*/].f_2 = { 24.1317f, -1883.124f, 21.8523f };
	Local_3173[5 /*8*/].f_5 = { 2.02f, 0f, 37.44f };
	Local_3173[5 /*8*/].f_1 = joaat("p_dumpster_t");
	Local_3173[6 /*8*/].f_2 = { 13.783f, -1880.985f, 22.2731f };
	Local_3173[6 /*8*/].f_5 = { -1.5f, -2.2f, -132.12f };
	Local_3173[6 /*8*/].f_1 = joaat("p_dumpster_t");
	Local_3173[7 /*8*/].f_2 = { 21.1804f, -1860.005f, 22.52f };
	Local_3173[7 /*8*/].f_5 = { 2.8f, 1.3f, 21.96f };
	Local_3173[7 /*8*/].f_1 = joaat("p_dumpster_t");
	Local_3173[8 /*8*/].f_2 = { 3.0904f, -1872.045f, 22.76f };
	Local_3173[8 /*8*/].f_5 = { 1.9f, 0f, 49.94f };
	Local_3173[8 /*8*/].f_1 = joaat("p_dumpster_t");
}

void func_812()//Position - 0x821F4
{
	Local_2881[0 /*13*/].f_2 = { -138.6286f, -1765.952f, 28.8108f };
	Local_2881[0 /*13*/].f_5 = 301.7188f;
	Local_2881[0 /*13*/].f_6 = joaat("police3");
	Local_2881[0 /*13*/].f_7 = 15;
	Local_2881[1 /*13*/].f_2 = { -17.0346f, -1765.37f, 27.9308f };
	Local_2881[1 /*13*/].f_5 = 231.2858f;
	Local_2881[1 /*13*/].f_6 = joaat("police3");
	Local_2881[1 /*13*/].f_7 = 16;
	Local_2881[2 /*13*/].f_2 = { -52.3304f, -1720.187f, 28.3354f };
	Local_2881[2 /*13*/].f_5 = 231.2858f;
	Local_2881[2 /*13*/].f_6 = joaat("police3");
	Local_2881[2 /*13*/].f_7 = 603;
	Local_2881[3 /*13*/].f_2 = { 3.83f, -1783.008f, 27.798f };
	Local_2881[3 /*13*/].f_5 = 131.2858f;
	Local_2881[3 /*13*/].f_6 = joaat("police3");
	Local_2881[3 /*13*/].f_7 = 17;
	Local_2881[4 /*13*/].f_2 = { 3.83f, -1783.008f, 27.798f };
	Local_2881[4 /*13*/].f_5 = 131.2858f;
	Local_2881[4 /*13*/].f_6 = joaat("police3");
	Local_2881[4 /*13*/].f_7 = 14;
	Local_2947[0 /*13*/].f_2 = { 197.1758f, -2186.019f, 6.0975f };
	Local_2947[0 /*13*/].f_5 = 93.7542f;
	Local_2947[0 /*13*/].f_7 = 701;
	Local_2947[0 /*13*/].f_6 = joaat("police3");
	Local_2947[1 /*13*/].f_2 = { 259.2205f, -2114.436f, 15.372f };
	Local_2947[1 /*13*/].f_5 = 230.7495f;
	Local_2947[1 /*13*/].f_7 = 702;
	Local_2947[1 /*13*/].f_6 = joaat("police3");
	Local_2947[2 /*13*/].f_2 = { 510.3493f, -2239.657f, 4.986f };
	Local_2947[2 /*13*/].f_5 = 187.3048f;
	Local_2947[2 /*13*/].f_7 = 703;
	Local_2947[2 /*13*/].f_6 = joaat("police3");
	Local_2947[3 /*13*/].f_2 = { 659.7458f, -2691.05f, 5.082f };
	Local_2947[3 /*13*/].f_5 = 36.9602f;
	Local_2947[3 /*13*/].f_7 = 704;
	Local_2947[2 /*13*/].f_6 = joaat("police3");
	Local_2947[4 /*13*/].f_2 = { 676.6281f, -2509.504f, 18.8334f };
	Local_2947[4 /*13*/].f_5 = 250.7224f;
	Local_2947[4 /*13*/].f_6 = joaat("police3");
	Local_2868.f_2 = { 586.5859f, -2493.784f, -10.6828f };
	Local_2868.f_5 = 204.3793f;
	Local_2868.f_7 = 706;
	Local_2868.f_6 = joaat("predator");
	Local_3013[0 /*13*/].f_2 = { 1179.093f, -2576.958f, 34.7871f };
	Local_3013[0 /*13*/].f_5 = 198.0128f;
	Local_3013[0 /*13*/].f_6 = joaat("police3");
}




void func_816(int iParam0, var uParam1)//Position - 0x8258A
{
	if (*iParam0 != 11 && *iParam0 != 12)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_517))
			{
				if (iLocal_1066[3] == 1)
				{
					if (GlobalFunc_2226(&Local_517))
					{
						*uParam1 = 3;
						*iParam0 = 12;
					}
				}
				if (iLocal_1066[2] == 1)
				{
					if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 1) || FIRE::IS_ENTITY_ON_FIRE(Local_517)) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_517, PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_517, joaat("weapon_molotov"), 0)))
					{
						*uParam1 = 2;
						*iParam0 = 12;
					}
				}
			}
			if ((ENTITY::DOES_ENTITY_EXIST(Local_1114[0 /*13*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1114[1 /*13*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1114[2 /*13*/]))
			{
				if (iLocal_1066[14] == 1)
				{
					if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[0 /*13*/], 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[1 /*13*/], 0)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[2 /*13*/], 0))
					{
						*uParam1 = 14;
						*iParam0 = 12;
					}
				}
				if (iLocal_1066[15] == 1)
				{
					if ((func_820(Local_1114[0 /*13*/]) || func_820(Local_1114[1 /*13*/])) || func_820(Local_1114[2 /*13*/]))
					{
						*uParam1 = 15;
						*iParam0 = 12;
					}
					if (*iParam0 == 3 || *iParam0 == 4)
					{
						if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[0 /*13*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[1 /*13*/], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[2 /*13*/], 0))
						{
							if ((ENTITY::IS_ENTITY_UPSIDEDOWN(Local_1114[0 /*13*/]) || ENTITY::IS_ENTITY_UPSIDEDOWN(Local_1114[1 /*13*/])) || ENTITY::IS_ENTITY_UPSIDEDOWN(Local_1114[2 /*13*/]))
							{
								*uParam1 = 15;
								*iParam0 = 12;
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_401))
			{
				if (iLocal_1066[6] == 1)
				{
					if (PED::IS_PED_INJURED(Local_401) || ENTITY::IS_ENTITY_DEAD(Local_401))
					{
						*uParam1 = 6;
						*iParam0 = 12;
					}
				}
				if (iLocal_1066[5] == 1 || iLocal_1066[4] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_401))
					{
						switch (*iParam0)
						{
							case 3:
							case 4:
								if ((Local_401.f_18 == 0 || Local_401.f_26 == 7) || Local_401.f_26 == 8)
								{
									if (!func_819())
									{
										*uParam1 = 4;
										*iParam0 = 12;
									}
									if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_401) > 100f)
									{
										*uParam1 = 4;
										*iParam0 = 12;
									}
								}
								else if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_401) > 100f && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 5.18f, -1855.46f, 22.19f, -32.06f, -1825.13f, 33.1f, 40f, 0, 1, 0))
								{
									*uParam1 = 4;
									*iParam0 = 12;
								}
								break;
							
							case 5:
								if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_401) > 150f)
								{
									*uParam1 = 5;
									*iParam0 = 12;
								}
								break;
							
							default:
								if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_401) > 100f)
								{
									*uParam1 = 4;
									*iParam0 = 12;
								}
								break;
							}
						}
				}
				if (iLocal_1066[7] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_401))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_401) > 100f)
						{
							*uParam1 = 7;
							*iParam0 = 12;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_430))
			{
				if (iLocal_1066[8] == 1)
				{
					if (PED::IS_PED_INJURED(Local_430))
					{
						*uParam1 = 8;
						*iParam0 = 12;
					}
				}
				if (iLocal_1066[9] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_430))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_430) > 100f)
						{
							*uParam1 = 9;
							*iParam0 = 12;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_459))
			{
				if (iLocal_1066[10] == 1)
				{
					if (PED::IS_PED_INJURED(Local_459))
					{
						*uParam1 = 10;
						*iParam0 = 12;
					}
				}
				if (iLocal_1066[11] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_459))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_459) > 100f)
						{
							*uParam1 = 11;
							*iParam0 = 12;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_488))
			{
				if (iLocal_1066[12] == 1)
				{
					if (PED::IS_PED_INJURED(Local_488))
					{
						*uParam1 = 12;
						*iParam0 = 12;
					}
				}
				if (iLocal_1066[13] == 1)
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_488, Local_517))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
						{
							if (ENTITY::IS_ENTITY_IN_WATER(Local_517))
							{
								if (PED::IS_PED_INJURED(Local_488))
								{
									*uParam1 = 13;
									*iParam0 = 12;
								}
							}
						}
					}
				}
			}
			if (iLocal_1066[1] == 1)
			{
				if (((func_818(PLAYER::PLAYER_PED_ID(), 1, 89.17f, -1952.71f, 19.74f, 10f) || func_818(PLAYER::PLAYER_PED_ID(), 0, 89.17f, -1952.71f, 19.74f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, 89.17f, -1952.71f, 19.74f, 10f)) || func_817(PLAYER::PLAYER_PED_ID(), -1033021910, 104.54f, -1939.98f, 19.8f, 50f))
				{
					*uParam1 = 1;
					*iParam0 = 12;
				}
				if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(85.03947f, -1958.291f, 20.12669f, 5f))
				{
					*uParam1 = 1;
					*iParam0 = 12;
				}
			}
		}
	}
}

int func_817(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x82AC0
{
	int iVar0;
	int iVar1[16];
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar1, 28);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iVar1[iVar0]))
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar1[iVar0]) == iParam1)
					{
						if (PED::IS_PED_IN_COMBAT(iVar1[iVar0], iParam0))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param2, ENTITY::GET_ENTITY_COORDS(iVar1[iVar0], 1), 1) <= fParam5)
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_818(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x82B50
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			return MISC::IS_BULLET_IN_AREA(Param2, fParam5, iParam1);
		}
	}
	return 0;
}

int func_819()//Position - 0x82B7B
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 49.51525f, -1892.617f, 14.79328f, 115.1094f, -1961.272f, 28.31184f, 84f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 53.81564f, -1893.396f, 14.59309f, -42.44677f, -1812.098f, 33.58778f, 82f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_820(int iParam0)//Position - 0x82BED
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iParam0) == 0f)
				{
					if (GlobalFunc_2226(&iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}


void func_822(var uParam0, var uParam1)//Position - 0x82C85
{
	if (!uParam1->f_20)
	{
		if (GlobalFunc_9810(uParam0, 1, 1))
		{
			if (!GlobalFunc_751(uParam0, 3))
			{
				if (uParam0->f_7 != 0)
				{
					if (uParam0->f_7 != GlobalFunc_237(GlobalFunc_8315()))
					{
						uParam1->f_12 = (*uParam0)[uParam0->f_7];
						uParam1->f_20 = 1;
						HUD::CLEAR_HELP(1);
						HUD::CLEAR_PRINTS();
					}
				}
			}
		}
	}
	else if (func_828(uParam1, 0, 1148829696, 1148829696))
	{
		if (uParam1->f_18 == 1)
		{
			if (!uParam1->f_19)
			{
				if (func_720(uParam0, 1, 1, 0))
				{
					switch (GlobalFunc_8315())
					{
						case 1:
							if (HUD::DOES_BLIP_EXIST(Local_459.f_1))
							{
								HUD::REMOVE_BLIP(&(Local_459.f_1));
							}
							if (Local_459.f_28 != 3)
							{
								if (HUD::DOES_BLIP_EXIST(Local_1114[Local_459.f_28 /*13*/].f_1))
								{
									HUD::REMOVE_BLIP(&(Local_1114[Local_459.f_28 /*13*/].f_1));
								}
							}
							func_826(&Local_430, (*uParam0)[uParam0->f_5], 1, 1862763509);
							func_825(Local_430, joaat("weapon_pumpshotgun"), 1, 1);
							func_824(func_908(1));
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_908(2), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_908(1), 0);
							iLocal_1066[8] = 1;
							iLocal_1066[10] = 0;
							func_112(&Local_430, 24);
							switch (iLocal_390)
							{
								case 3:
									func_571(func_908(2), 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
									func_571(func_908(1), 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
									break;
								
								case 5:
									if (Local_459.f_28 != 3)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_459.f_28 /*13*/], 0))
										{
											VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_1114[Local_459.f_28 /*13*/], 0f);
											VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_1114[Local_459.f_28 /*13*/], -15f);
										}
									}
									if (Local_430.f_28 != 3)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_430.f_28 /*13*/], 0))
										{
											VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_1114[Local_430.f_28 /*13*/], 0f);
										}
									}
									break;
							}
							break;
						
						case 2:
							if (HUD::DOES_BLIP_EXIST(Local_430.f_1))
							{
								HUD::REMOVE_BLIP(&(Local_430.f_1));
							}
							if (Local_430.f_28 != 3)
							{
								if (HUD::DOES_BLIP_EXIST(Local_1114[Local_430.f_28 /*13*/].f_1))
								{
									HUD::REMOVE_BLIP(&(Local_1114[Local_430.f_28 /*13*/].f_1));
								}
							}
							func_826(&Local_459, (*uParam0)[uParam0->f_5], 1, 1862763509);
							func_825(Local_459, joaat("weapon_smg"), 1, 1);
							func_824(func_908(2));
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_908(2), 0);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_908(1), 1);
							iLocal_1066[8] = 0;
							iLocal_1066[10] = 1;
							func_112(&Local_430, 24);
							switch (iLocal_390)
							{
								case 3:
									func_571(func_908(2), 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
									func_571(func_908(1), 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
									break;
								
								case 5:
									if (Local_430.f_28 != 3)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_430.f_28 /*13*/], 0))
										{
											VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_1114[Local_430.f_28 /*13*/], 0f);
											VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_1114[Local_430.f_28 /*13*/], -15f);
										}
									}
									if (Local_459.f_28 != 3)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1114[Local_459.f_28 /*13*/], 0))
										{
											VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_1114[Local_459.f_28 /*13*/], 0f);
										}
									}
									break;
							}
							break;
					}
					if (iLocal_390 == 3 || iLocal_390 == 4)
					{
						Local_430.f_16 = 0;
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) == 1)
						{
							if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							}
						}
					}
					if (!func_102("CMN_TABIL_RET"))
					{
						if (iLocal_390 == 3)
						{
							if (GlobalFunc_8315() == 2)
							{
								if (PAD::_IS_USING_KEYBOARD(0))
								{
									GlobalFunc_159("CMN_TABIL_RET_KM", 10000);
								}
								else
								{
									GlobalFunc_159("CMN_TABIL_RET", 10000);
								}
								if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								{
									PLAYER::SPECIAL_ABILITY_CHARGE_LARGE(PLAYER::PLAYER_ID(), 1, 1);
								}
								func_98("CMN_TABIL_RET", 1);
							}
						}
					}
					if (iLocal_1059 == 1)
					{
						GlobalFunc_2998(uParam0, 2, 0);
						GlobalFunc_2998(uParam0, 1, 0);
						iLocal_1060 = 1;
					}
					GlobalFunc_565(356, 1, 0);
					uParam1->f_19 = 1;
				}
			}
		}
	}
}


void func_824(int iParam0)//Position - 0x830D2
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 128);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
		PED::SET_PED_CONFIG_FLAG(iParam0, 129, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 131, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 12, 1);
		PED::SET_PED_DIES_IN_WATER(iParam0, 1);
		WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, 0);
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("player_one"):
				WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, joaat("weapon_smg"));
				break;
			
			case joaat("player_two"):
				WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, joaat("weapon_pumpshotgun"));
				break;
			}
	}
}

void func_825(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8316C
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam1, 0, 0, 1);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, iParam2);
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iParam1) < 2)
		{
			WEAPON::ADD_AMMO_TO_PED(iParam0, iParam1, (WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iParam1, 1) * iParam3));
		}
	}
}

void func_826(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x831C0
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		*uParam0 = iParam1;
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, false);
		PED::SET_PED_AS_ENEMY(iParam1, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iParam3);
		PED::SET_PED_DIES_IN_WATER(iParam1, 0);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam1, 0);
		GlobalFunc_2903(iParam1, 600);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam1, 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam1, 16);
		PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, 1);
		PED::SET_PED_CONFIG_FLAG(iParam1, 188, true);
		PED::SET_PED_CONFIG_FLAG(iParam1, 229, true);
		PED::SET_PED_CONFIG_FLAG(iParam1, 32, false);
		PED::SET_PED_CONFIG_FLAG(iParam1, 118, false);
		PED::SET_COMBAT_FLOAT(iParam1, 12, 1f);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, 1);
		if (iParam2 == 1)
		{
			if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
			{
				uParam0->f_1 = GlobalFunc_7056(*uParam0, 0, 0);
			}
		}
		uParam0->f_8 = MISC::GET_GAME_TIMER();
	}
}


int func_828(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x832EA
{
	return func_829(uParam0, 0, 3, iParam1, fParam2, fParam3, 0, 0, 0, 6, 0, 0, 0);
	return 1;
}

int func_829(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x8330B
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	int iVar10;
	var uVar11;
	
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
						uVar1 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
						func_844(uVar1, 0);
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
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					iVar0 |= 2;
				}
				if (GlobalFunc_268())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, iParam2);
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
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(iParam8);
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
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_13, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_13, 0))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_13, 1, 0);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
				{
					uVar11 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
					func_844(uVar11, 1);
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















void func_844(int iParam0, int iParam1)//Position - 0x83B98
{
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0))
	{
		VEHICLE::_0xC50CE861B55EAB8B(iParam0, iParam1);
	}
	else
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 1, 0);
		VEHICLE::_0xC50CE861B55EAB8B(iParam0, iParam1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

















void func_861(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x85180
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_89999)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_89999)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_174(1);
		if (iParam0 <= Global_89999)
		{
		}
		iVar1 = GlobalFunc_5111(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			uVar2 = GlobalFunc_5110(iVar1);
			cVar3 = { Global_81155[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_89999, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7703(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_89999, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_547(&(Global_89962.f_3));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_89999 = iParam0;
		GlobalFunc_10970(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_89999)
	{
	}
}




































int func_897(int iParam0)//Position - 0x899B4
{
	var uVar0;
	var uVar1;
	
	switch (iParam0)
	{
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return 10;
			break;
	}
	uVar1 = iParam0 + 1;
	uVar0 = uVar1;
	return uVar0;
}


void func_899(var uParam0, int iParam1)//Position - 0x89A1F
{
	if (iParam1 == 0)
	{
		*uParam0 = 1;
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 3;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 4;
	}
	else if (iParam1 == 3)
	{
		*uParam0 = 5;
	}
	else if (iParam1 == 4)
	{
		*uParam0 = 6;
	}
}



void func_902()//Position - 0x89AB3
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_4935();
	GlobalFunc_5105();
	MISC::SET_FAKE_WANTED_LEVEL(0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	}
	if (!PED::IS_PED_INJURED(Local_401))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_401, 0);
	}
	if (!PED::IS_PED_INJURED(func_908(2)))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_908(2), 0);
	}
	if (!PED::IS_PED_INJURED(func_908(1)))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_908(1), 0);
	}
	if (iLocal_923 == 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), 1);
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
		iLocal_923 = 0;
	}
	GlobalFunc_2535(&uLocal_1084, &uLocal_983);
	GlobalFunc_2910(sLocal_311, &uLocal_1097, &uLocal_984);
	GlobalFunc_2534(&uLocal_1111, &uLocal_985);
	func_35(&Local_704, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	func_110(&Local_488, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_110(&Local_401, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	if (GlobalFunc_8315() == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_430))
		{
			if (!PED::IS_PED_INJURED(Local_430))
			{
				PED::SET_PED_KEEP_TASK(Local_430, 1);
				if (PED::IS_PED_GROUP_MEMBER(Local_430, GlobalFunc_468()))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_430);
				}
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (iLocal_392 != 2)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_430);
				}
			}
			else
			{
				PED::DELETE_PED(&Local_430);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_624[2]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_624[2]));
		}
	}
	else if (GlobalFunc_8315() == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_459))
		{
			if (!PED::IS_PED_INJURED(Local_459))
			{
				PED::SET_PED_KEEP_TASK(Local_459, 1);
				if (PED::IS_PED_GROUP_MEMBER(Local_459, GlobalFunc_468()))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_459);
				}
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (iLocal_392 != 1)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_459);
				}
			}
			else
			{
				PED::DELETE_PED(&Local_459);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_624[1]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_624[1]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_517))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_517, 0))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_517, true, 0);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_517);
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&Local_517);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1114[0 /*13*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1114[0 /*13*/]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1114[0 /*13*/]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1114[0 /*13*/], 1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1114[0 /*13*/]));
			}
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1114[0 /*13*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1114[1 /*13*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1114[1 /*13*/]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1114[1 /*13*/]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1114[1 /*13*/], 1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1114[1 /*13*/]));
			}
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1114[1 /*13*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1114[2 /*13*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1114[2 /*13*/]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1114[2 /*13*/]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1114[2 /*13*/], 1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1114[2 /*13*/]));
			}
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1114[2 /*13*/]));
		}
	}
	func_108(&(Local_1154[0 /*13*/]), 1, 1);
	func_108(&(Local_1154[1 /*13*/]), 1, 1);
	func_108(&(Local_1154[2 /*13*/]), 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_543))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_543))
		{
			VEHICLE::DELETE_MISSION_TRAIN(&Local_543);
		}
	}
	VEHICLE::SET_RANDOM_TRAINS(1);
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	func_109(&Local_4080, 0, 1, 1);
	func_137(&Local_4168, 0, 0);
	func_109(&Local_4208, CAM::IS_SCREEN_FADED_OUT(), 1, 1);
	func_206(&Local_1714, 0, 0, 1, 1, 1);
	func_206(&Local_1733, 0, 0, 1, 1, 1);
	func_206(&Local_1752, 0, 0, 1, 1, 1);
	func_206(&Local_1771, 0, 0, 1, 1, 1);
	func_206(&Local_1790, 0, 0, 1, 1, 1);
	func_206(&Local_1827, 0, 0, 1, 1, 1);
	func_206(&Local_1846, 0, 0, 1, 1, 1);
	func_206(&Local_1865, 0, 0, 1, 1, 1);
	func_206(&Local_1273, 0, 0, 1, 1, 1);
	func_206(&Local_1328, 0, 0, 1, 1, 1);
	func_206(&Local_1347, 0, 0, 1, 1, 1);
	func_206(&Local_1402, 0, 0, 1, 1, 1);
	func_206(&Local_1439, 0, 0, 1, 1, 1);
	func_206(&Local_1458, 0, 0, 1, 1, 1);
	func_206(&Local_1495, 0, 0, 1, 1, 1);
	func_206(&Local_1568, 0, 0, 1, 1, 1);
	func_206(&Local_1605, 0, 0, 1, 1, 1);
	func_206(&Local_1902, 0, 0, 1, 1, 1);
	func_206(&Local_1921, 0, 0, 1, 1, 1);
	func_206(&Local_1940, 0, 0, 1, 1, 1);
	func_206(&Local_2205, 0, 0, 1, 1, 1);
	func_109(&Local_2278, 0, 0, 1);
	func_109(&Local_2337, 0, 0, 1);
	func_109(&Local_2396, 0, 0, 1);
	func_109(&Local_2455, 0, 0, 1);
	func_109(&Local_2514, 0, 0, 1);
	func_109(&Local_2573, 0, 0, 1);
	func_109(&Local_2632, 0, 0, 1);
	func_109(&Local_2691, 0, 0, 1);
	func_109(&Local_2750, 0, 0, 1);
	func_109(&uLocal_2809, 0, 0, 1);
	func_137(&Local_2086, 0, 1);
	func_137(&Local_2152, 0, 1);
	func_137(&Local_2881, 0, 1);
	func_137(&Local_2947, 0, 1);
	func_137(&Local_3013, 0, 1);
	func_137(&Local_1194, 0, 1);
	func_206(&uLocal_1977, 1, 1, 1, 1, 1);
	func_109(&Local_4354, 0, 0, 1);
	func_108(&Local_4442, 0, 0);
	func_108(&Local_2868, 0, 0);
	AUDIO::STOP_AUDIO_SCENES();
	if (ENTITY::DOES_ENTITY_EXIST(Local_530))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_530))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_530, 0);
		}
	}
	func_108(&Local_530, 0, 1);
	func_589(&Local_3027, 0);
	func_589(&Local_3100, 0);
	GlobalFunc_2943(&Local_552, 0);
	GlobalFunc_2943(&Local_560, 0);
	GlobalFunc_2943(&Local_568, 0);
	GlobalFunc_2943(&Local_576, 0);
	GlobalFunc_2943(&Local_592, 0);
	GlobalFunc_2943(&Local_600, 0);
	func_588(&Local_3173, 0);
	if (HUD::DOES_BLIP_EXIST(Local_401.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_401.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_459.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_459.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_430.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_430.f_1));
	}
	func_587(&Local_3246, &iLocal_1056);
	TASK::REMOVE_WAYPOINT_RECORDING("fra1_cflee");
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("seashark"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_5112(19, 0), 0);
	VEHICLE::REMOVE_VEHICLE_ASSET(GlobalFunc_5112(19, 0));
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(4, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	AUDIO::STOP_SOUND(uLocal_930);
	AUDIO::RELEASE_SOUND_ID(uLocal_930);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FRANKLIN_1_CAMERAS");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FRANKLIN_1_GIRLS");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	GlobalFunc_7632(0);
	GlobalFunc_563(0);
	GlobalFunc_699();
	GlobalFunc_1998(0);
	STREAMING::REMOVE_IPL("SC1_27_Cut");
	AUDIO::TRIGGER_MUSIC_EVENT("FRA1_MISSION_FAIL");
	AUDIO::CANCEL_MUSIC_EVENT("FRA1_SPEED");
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_96(0, 5f, 1061158912);
	GlobalFunc_52(1, 1);
	MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(uLocal_1037);
	MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(uLocal_1038);
	VEHICLE::REMOVE_VEHICLE_COMBAT_AVOIDANCE_AREA(uLocal_1039);
	VEHICLE::REMOVE_VEHICLE_COMBAT_AVOIDANCE_AREA(uLocal_1040);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	GlobalFunc_601(8, 0);
	GlobalFunc_601(9, 0);
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", 0);
}






int func_908(int iParam0)//Position - 0x8A41F
{
	if (GlobalFunc_8315() == iParam0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_624[GlobalFunc_237(iParam0)];
}

