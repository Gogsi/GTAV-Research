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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	struct<4> Local_39[10];
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
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
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
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
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 5;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 5;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 5;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 5;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 5;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 5;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 5;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 5;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 5;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 5;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 5;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 5;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 5;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 5;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 5;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	float fLocal_226 = 0f;
	float fLocal_227 = 0f;
	var uLocal_228 = 0;
	float fLocal_229 = 0f;
	float fLocal_230 = 0f;
	float fLocal_231 = 0f;
	float fLocal_232 = 0f;
	var uLocal_233 = 0;
	float fLocal_234 = 0f;
	float fLocal_235 = 0f;
	float fLocal_236 = 0f;
	float fLocal_237 = 0f;
	float fLocal_238 = 0f;
	float fLocal_239 = 0f;
	float fLocal_240 = 0f;
	float fLocal_241 = 0f;
	float fLocal_242 = 0f;
	float fLocal_243 = 0f;
	float fLocal_244 = 0f;
	float fLocal_245 = 0f;
	float fLocal_246 = 0f;
	var uLocal_247 = 5;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 5;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 5;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 5;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 5;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 5;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 5;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	int iLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 5;
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
	var uLocal_322 = 5;
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
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 5;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 5;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 5;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 5;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 5;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 3;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 5;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 5;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 3;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 3;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	struct<61> Local_452 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	struct<16> Local_522[5];
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	struct<3> Local_605 = { 0, 0, 0 } ;
	struct<3> Local_608 = { 0, 0, 0 } ;
	char* sLocal_611 = NULL;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	var uLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	struct<8> Local_626 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_634 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_642 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_650 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_658 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_666 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_674 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_682 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_690 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 16;
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
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	struct<3> Local_868 = { 0, 0, 0 } ;
	int iLocal_871 = 0;
	var uLocal_872 = 0;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	int iLocal_880 = 0;
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	int iLocal_886 = 0;
	int iLocal_887 = 0;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	int iLocal_890 = 0;
	int iLocal_891 = 0;
	char* sLocal_892 = NULL;
	int iLocal_893 = 0;
	char* sLocal_894 = NULL;
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	int iLocal_897 = 0;
	struct<3> Local_898 = { 0, 0, 0 } ;
	struct<3> Local_901 = { 0, 0, 0 } ;
	float fLocal_904 = 0f;
	int iLocal_905 = 0;
	char* sLocal_906 = NULL;
	char* sLocal_907 = NULL;
	char* sLocal_908 = NULL;
	char* sLocal_909 = NULL;
	struct<3> Local_910 = { 0, 0, 0 } ;
	struct<3> Local_913 = { 0, 0, 0 } ;
	struct<3> Local_916 = { 0, 0, 0 } ;
	struct<3> Local_919 = { 0, 0, 0 } ;
	struct<3> Local_922 = { 0, 0, 0 } ;
	float fLocal_925 = 0f;
	struct<3> Local_926 = { 0, 0, 0 } ;
	struct<3> Local_929 = { 0, 0, 0 } ;
	float fLocal_932 = 0f;
	struct<3> Local_933 = { 0, 0, 0 } ;
	struct<3> Local_936 = { 0, 0, 0 } ;
	float fLocal_939 = 0f;
	struct<3> Local_940 = { 0, 0, 0 } ;
	float fLocal_943 = 0f;
	struct<3> Local_944 = { 0, 0, 0 } ;
	float fLocal_947 = 0f;
	int iLocal_948 = 0;
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	float fLocal_951 = 0f;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	
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
	uLocal_82 = GlobalFunc_4946(64);
	uLocal_83 = GlobalFunc_4946(63);
	iLocal_84 = joaat("u_m_m_aldinapoli");
	iLocal_85 = joaat("premier");
	iLocal_101 = 1;
	iLocal_108 = 1;
	iLocal_130 = 1;
	fLocal_226 = 120f;
	fLocal_227 = 0f;
	fLocal_229 = 1f;
	fLocal_230 = 0f;
	fLocal_231 = 1f;
	fLocal_232 = 30f;
	fLocal_234 = 1f;
	fLocal_235 = 5f;
	fLocal_236 = 1f;
	fLocal_237 = 1f;
	fLocal_238 = 100f;
	fLocal_239 = 100f;
	fLocal_240 = 0f;
	fLocal_241 = 7000f;
	fLocal_242 = 0f;
	fLocal_243 = 0f;
	fLocal_244 = 0.3f;
	fLocal_245 = 0.5f;
	fLocal_246 = 50f;
	iLocal_292 = -1;
	iLocal_300 = -1;
	iLocal_301 = -1;
	iLocal_516 = 6;
	Local_605 = { -626.87f, -268.85f, 38f };
	Local_608 = { -642.32f, -238.21f, 36.86f };
	sLocal_611 = "NIG1C";
	iLocal_612 = 1;
	iLocal_616 = joaat("a_f_y_hipster_04");
	iLocal_617 = joaat("a_m_y_business_01");
	iLocal_618 = joaat("a_c_rottweiler");
	iLocal_619 = joaat("s_m_m_trucker_01");
	iLocal_620 = joaat("taxi");
	iLocal_621 = joaat("sentinel");
	iLocal_622 = joaat("habanero");
	iLocal_623 = joaat("landstalker");
	iLocal_624 = joaat("banshee");
	iLocal_625 = joaat("bjxl");
	iLocal_889 = 1;
	iLocal_891 = 1;
	sLocal_892 = "NIG1CBrake";
	iLocal_893 = 102;
	sLocal_894 = "NIG1CCrash";
	iLocal_895 = 101;
	iLocal_896 = 103;
	Local_898 = { -603.9266f, -293.9479f, 34.77906f };
	Local_901 = { -636.4999f, -242.5444f, 39.1609f };
	fLocal_904 = 20f;
	sLocal_906 = "rcmnigel1c";
	sLocal_907 = "misschop_vehicle@back_of_van";
	sLocal_908 = "gestures@f@standing@casual";
	sLocal_909 = "random@nigel@1c";
	Local_910 = { -643.8831f, -108.9039f, 36.936f };
	Local_913 = { -662.3463f, -126.844f, 36.8854f };
	Local_916 = { -627.8564f, -92.9756f, 38.0087f };
	Local_919 = { -606.6835f, -293.8564f, 34.77928f };
	Local_922 = { -642.6559f, -236.1222f, 38.88903f };
	fLocal_925 = 20f;
	Local_926 = { -608.4832f, -286.607f, 39.75064f };
	Local_929 = { -634.5681f, -246.6082f, 36.347f };
	fLocal_932 = 20f;
	Local_933 = { -620.5983f, -263.0439f, 38.76393f };
	Local_936 = { -665.5768f, -220.7088f, 35.37474f };
	fLocal_939 = 30f;
	Local_940 = { -641.8198f, -235.5721f, 37.88144f };
	fLocal_943 = 65.31715f;
	Local_944 = { -665.364f, -232.7904f, 36.64935f };
	fLocal_947 = 81.83719f;
	fLocal_951 = 1f;
	Local_452 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_452);
	GlobalFunc_8954();
	MISC::SET_MISSION_FLAG(1);
	GlobalFunc_601(2, 1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_FAIL");
		GlobalFunc_10544(1);
		func_435();
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		Global_68490 = 1;
		iLocal_81 = 0;
		while (!func_432(&Local_452))
		{
			SYSTEM::WAIT(0);
		}
		Global_68490 = 0;
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1C_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("NIGEL_1C_SCENE");
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	if (GlobalFunc_Is_Mission_Retry())
	{
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(-605.2227f, -291.6463f, 35.7791f, 38.21f, 1, 0);
				func_428(1, 1);
				func_427(1);
				func_420();
				func_414(2);
				break;
			
			case 1:
				GlobalFunc_4972(-636.6826f, -97.2394f, 37.1276f, 152.2261f, 1, 0);
				GlobalFunc_10698(&iVar1, -649.19f, -105.83f, 37.63f, 125.45f, 0, 0, 0, 1, 1, joaat("asterope"), 0, 145);
				GlobalFunc_4967(0, -1, 1);
				GlobalFunc_79(500, 1);
				func_350(1, 1, 1);
				GlobalFunc_553(789);
				iLocal_873 = 1;
				func_275();
				break;
			
			default:
				break;
		}
	}
	else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -604.1522f, -292.7876f, 35.7793f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 30.357f);
			SYSTEM::WAIT(0);
			GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		}
		GlobalFunc_79(500, 1);
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_VSTLA", 0);
		func_251(Local_452.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_520)
		{
			case 0:
				func_420();
				break;
			
			case 1:
				func_250();
				break;
			
			case 2:
				func_248();
				break;
			
			case 3:
				func_243();
				break;
			
			case 4:
				func_240();
				break;
			
			case 5:
				func_231();
				break;
			
			case 6:
				func_213();
				break;
			
			case 7:
				func_64();
				break;
			
			case 8:
				func_58();
				break;
			
			case 9:
				func_57();
				break;
			
			case 10:
				func_42();
				break;
		}
		if (iLocal_520 != 10)
		{
			func_40();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x572
{
	char* sVar0;
	int iVar1;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_603) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_603))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_603, iLocal_866);
			iLocal_888 = 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_603, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_603))
			{
				PED::SET_PED_PANIC_EXIT_SCENARIO(iLocal_603, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			TASK::CLEAR_PED_TASKS(iLocal_603);
			TASK::TASK_SMART_FLEE_PED(iLocal_603, PLAYER::PLAYER_PED_ID(), 80f, -1, 0, 0);
		}
		if (!PED::IS_PED_FLEEING(iLocal_603))
		{
			if ((func_30(iLocal_603, 1126825984) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_603, PLAYER::PLAYER_PED_ID(), 1)) && !GlobalFunc_8639(iLocal_603, 1, 0, 0, 0))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_603))
				{
					PED::SET_PED_PANIC_EXIT_SCENARIO(iLocal_603, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				}
				TASK::CLEAR_PED_TASKS(iLocal_603);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_603, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_SMART_FLEE_PED(iLocal_603, PLAYER::PLAYER_PED_ID(), 80f, -1, 0, 0);
				iLocal_888 = 1;
			}
		}
		if ((iLocal_888 == 1 && MISC::GET_GAME_TIMER() > iLocal_905) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_603, 10f))
		{
			if (GlobalFunc_111())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			switch (iVar1)
			{
				case 0:
					sVar0 = "NIG1C_GUN";
					break;
				
				case 1:
					sVar0 = "NIG1C_BUMP";
					break;
				
				case 2:
					sVar0 = "NIG1C_HIT";
					break;
				
				case 3:
					sVar0 = "NIG1C_SHOCK";
					break;
				
				default:
					sVar0 = "NIG1C_RUN";
					break;
			}
			if (GlobalFunc_10618(&uLocal_700, "NIG1CAU", sVar0, 7, GlobalFunc_4570(), 0, 0))
			{
				iLocal_905 = MISC::GET_GAME_TIMER() + 5000;
				iLocal_887 = 1;
			}
		}
	}
}





























int func_30(int iParam0, float fParam1)//Position - 0x1384
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_170(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_31(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_31(int iParam0, float fParam1)//Position - 0x13FA
{
	return func_32(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_32(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1412
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_38(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_39[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_35();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_39[iVar4 /*4*/].f_1 = iParam0;
		Local_39[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_5962(&(Local_39[iVar4 /*4*/]), Var1, iParam1, &(Local_39[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_39[iVar4 /*4*/].f_3) < iParam4);
}



int func_35()//Position - 0x16C4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_39)
	{
		if ((Local_39[iVar0 /*4*/] == 0 && Local_39[iVar0 /*4*/].f_1 == 0) && Local_39[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}



int func_38(int iParam0, int iParam1)//Position - 0x17BA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_39)
	{
		if (Local_39[iVar0 /*4*/].f_1 == iParam0 && Local_39[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}


void func_40()//Position - 0x1821
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_604))
	{
		if (PED::IS_PED_INJURED(iLocal_604))
		{
			iLocal_515 = 3;
			iLocal_521 = 0;
			iLocal_520 = 10;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_604, PLAYER::PLAYER_PED_ID(), 1) || func_41())
		{
			PED::SET_PED_TO_RAGDOLL(iLocal_604, 500, 1000, 0, 1, 1, 0);
			iLocal_515 = 4;
			iLocal_521 = 0;
			iLocal_520 = 10;
		}
		else if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_604, 1), 2f) > 0)
		{
			PED::SET_PED_TO_RAGDOLL(iLocal_604, 500, 1000, 0, 1, 1, 0);
			iLocal_515 = 3;
			iLocal_521 = 0;
			iLocal_520 = 10;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_603))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_603))
		{
			iLocal_515 = 1;
			iLocal_521 = 0;
			iLocal_520 = 10;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_603, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_515 = 0;
			iLocal_521 = 0;
			iLocal_520 = 10;
		}
		else if (GlobalFunc_172(iLocal_603, 1, 8f, 15f) || GlobalFunc_8053(iLocal_603, 5f, 0, 0))
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_603) && !PED::IS_PED_FLEEING(iLocal_603))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_603))
				{
					PED::SET_PED_PANIC_EXIT_SCENARIO(iLocal_603, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				}
				TASK::TASK_SMART_FLEE_PED(iLocal_603, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_604) && !PED::IS_PED_FLEEING(iLocal_604))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_604, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			}
			iLocal_515 = 2;
			iLocal_521 = 0;
			iLocal_520 = 10;
		}
	}
	if ((iLocal_520 == 4 || iLocal_520 == 5) || iLocal_520 == 6)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_604) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_604, 100f))
			{
				iLocal_515 = 5;
				iLocal_521 = 0;
				iLocal_520 = 10;
			}
			else if (iLocal_873 == 0)
			{
				if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_604, 50f))
				{
					GlobalFunc_553(789);
					iLocal_873 = 1;
				}
			}
		}
	}
}

int func_41()//Position - 0x1A1B
{
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_604, PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

void func_42()//Position - 0x1A52
{
	char* sVar0;
	
	switch (iLocal_521)
	{
		case 0:
			GlobalFunc_5105();
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (HUD::DOES_BLIP_EXIST(uLocal_699))
			{
				HUD::REMOVE_BLIP(&uLocal_699);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_FAIL");
			if (!GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
			{
				iLocal_515 = 3;
			}
			switch (iLocal_515)
			{
				case 1:
					sVar0 = "N1C_F_EXMOD";
					break;
				
				case 3:
					sVar0 = "N1C_F_EXDOG";
					break;
				
				case 0:
					sVar0 = "N1C_F_MOD";
					break;
				
				case 2:
					sVar0 = "N1_C_F_THREAT";
					break;
				
				case 4:
					sVar0 = "N1C_F_DOG";
					break;
				
				case 5:
					sVar0 = "N1C_F_LOST";
					break;
				
				default:
					break;
			}
			if (iLocal_515 == 6)
			{
				GlobalFunc_10544(1);
			}
			else
			{
				GlobalFunc_10816(sVar0, 1);
			}
			iLocal_521 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_46();
				if (GlobalFunc_116(0))
				{
					GlobalFunc_6685(0);
				}
				if (GlobalFunc_111())
				{
					GlobalFunc_4935();
				}
				func_435();
			}
			break;
	}
}




void func_46()//Position - 0x1C96
{
	TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	GlobalFunc_69(&iLocal_603);
	GlobalFunc_69(&iLocal_604);
	GlobalFunc_69(&(Local_522[0 /*16*/]));
	GlobalFunc_69(&(Local_522[1 /*16*/]));
	GlobalFunc_69(&(Local_522[2 /*16*/]));
	GlobalFunc_69(&(Local_522[3 /*16*/]));
	GlobalFunc_69(&(Local_522[4 /*16*/]));
	GlobalFunc_69(&iLocal_614);
	func_49(Local_634);
	func_49(Local_626);
	func_49(Local_642);
	func_49(Local_658);
	func_49(Local_666);
	func_49(Local_674);
	func_49(Local_682);
	func_49(Local_690);
	func_49(Local_650);
	GlobalFunc_6692(&iLocal_698);
}



void func_49(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x1E14
{
	GlobalFunc_69(&(Param0.f_1));
	GlobalFunc_6692(&Param0);
}








void func_57()//Position - 0x1F2D
{
	if (iLocal_879 == 0)
	{
		if (GlobalFunc_111())
		{
			iLocal_879 = 1;
		}
	}
	if (iLocal_879 == 1)
	{
		if (!GlobalFunc_111())
		{
			HUD::CLEAR_PRINTS();
			func_275();
		}
	}
}

void func_58()//Position - 0x1F5E
{
	switch (iLocal_521)
	{
		case 0:
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
			{
				TASK::CLEAR_PED_TASKS(iLocal_604);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_604, 0.5f, 1f, 0f), 2.5f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -650.2209f, -120.7035f, 36.832f, 2.5f, 20000, 1f, 0, 40000f);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 50f, -1, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_604, uLocal_865);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1C_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("NIGEL_1C_SCENE");
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_603))
			{
				if (GlobalFunc_4951(iLocal_603, PLAYER::PLAYER_PED_ID()) < 30f)
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_603, iLocal_604, 0f, 0f, 0f, 2f, -1, 3f, 1);
				}
			}
			iLocal_949 = -1;
			iLocal_521 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				if (iLocal_949 < 0)
				{
					iLocal_949 = MISC::GET_GAME_TIMER() + 3000;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_949)
				{
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					GlobalFunc_200(&uLocal_700, 3);
					GlobalFunc_200(&uLocal_700, 4);
					GlobalFunc_200(&uLocal_700, 5);
					GlobalFunc_200(&uLocal_700, 6);
					GlobalFunc_173(&uLocal_700, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					GlobalFunc_173(&uLocal_700, 3, 0, "NIGEL", 0, 1);
					GlobalFunc_173(&uLocal_700, 4, 0, "MRSTHORNHILL", 0, 1);
					if (GlobalFunc_10638(&uLocal_700, 64, "NIG1CAU", "NIG1C_OUT", 9, 1, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(2f, 10f, 1);
						iLocal_520 = 9;
					}
				}
			}
			break;
	}
}






void func_64()//Position - 0x2297
{
	struct<3> Var0;
	
	switch (iLocal_521)
	{
		case 0:
			RECORDING::_0x293220DA1B46CEBC(4f, 8f, 1);
			func_209();
			GlobalFunc_173(&uLocal_700, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_933, Local_936, fLocal_939, 0, 1, 0))
			{
				GlobalFunc_2350(500, 1);
				GlobalFunc_9805(Local_933, Local_936, fLocal_939, Local_944, fLocal_947, GlobalFunc_625(), 1, 1, 1, 0, 0);
				func_82(Local_940, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				GlobalFunc_6453(PLAYER::PLAYER_PED_ID(), Local_940);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_943);
			}
			else
			{
				GlobalFunc_9805(-636.6932f, -96.5854f, 36.54766f, -628.8387f, -97.43069f, 38.06915f, 7f, -641.35f, -99.5f, 37.62f, 135.52f, GlobalFunc_625(), 1, 1, 1, 0, 0);
				func_82(-636.7341f, -99.131f, 37.0476f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			}
			STREAMING::REQUEST_ANIM_DICT(sLocal_909);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_909))
			{
				SYSTEM::WAIT(0);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_604);
			}
			AUDIO::STOP_SCRIPTED_CONVERSATION(1);
			if (HUD::DOES_BLIP_EXIST(uLocal_699))
			{
				HUD::REMOVE_BLIP(&uLocal_699);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				GlobalFunc_6453(PLAYER::PLAYER_PED_ID(), Var0);
				uLocal_615 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_615, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_615, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_615, sLocal_909, "take_collar_trevor", 8f, -4f, 1, 16, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_604, uLocal_615, sLocal_909, "take_collar_dog", 8f, -4f, 1, 16, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				uLocal_872 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_872, uLocal_615, "take_collar_cam", sLocal_909);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			GlobalFunc_79(500, 1);
			while (!GlobalFunc_10630(&uLocal_700, "NIG1CAU", "NIG1C_COLLAR", "NIG1C_COLLAR_2", 7, 0, 0))
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(1);
				GlobalFunc_5105();
				SYSTEM::WAIT(0);
			}
			GlobalFunc_69(&iLocal_603);
			iLocal_883 = 0;
			func_78(1);
			AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_END");
			iLocal_521 = 1;
			break;
		
		case 1:
			if (((iLocal_883 == 0 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_615)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_615) >= 0.75f) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "COLLAR", iLocal_604, "NIGEL_1C_SOUNDSET", 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_604, 3, 1, 0, 0);
				iLocal_883 = 1;
			}
			else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_615) && !GlobalFunc_111())
			{
				if (GlobalFunc_10626(&uLocal_700, "NIG1CAU", "NIG1C_COLLAR", "NIG1C_COLLAR_3", 7, 0, 0))
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
					if (CAM::DOES_CAM_EXIST(uLocal_872))
					{
						CAM::SET_CAM_ACTIVE(uLocal_872, 0);
						CAM::DESTROY_CAM(uLocal_872, 0);
					}
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					func_68(1, 1, 1, 1);
					iLocal_521 = 0;
					iLocal_520 = 8;
				}
			}
			if (GlobalFunc_4926(1000))
			{
				iLocal_521 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_2350(500, 1);
			func_82(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_615))
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_615, 1f);
			}
			SYSTEM::WAIT(3000);
			if (GlobalFunc_111())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_604, 3, 1, 0, 0);
			}
			func_65(0, 1);
			iLocal_521 = 0;
			iLocal_520 = 8;
			func_68(1, 1, 1, 1);
			GlobalFunc_79(500, 1);
			break;
	}
}

void func_65(int iParam0, bool bParam1)//Position - 0x266A
{
	CAM::RENDER_SCRIPT_CAMS(0, iParam0, 3000, 1, 0, 0);
	if (CAM::DOES_CAM_EXIST(uLocal_872))
	{
		CAM::SET_CAM_ACTIVE(uLocal_872, 0);
		CAM::DESTROY_CAM(uLocal_872, 0);
	}
	if (bParam1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5f, 1065353216);
	}
	TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	func_68(1, 1, 1, 1);
}



void func_68(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x273D
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
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}










void func_78(bool bParam0)//Position - 0x2A47
{
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-533.3358f, -316.634f, 30.99671f, -696.2714f, -30.98998f, 45.69382f, 250f, 1, bParam0, 1);
	if (bParam0)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-654.77f, -100.04f, 44.87f, -623.99f, -165.2f, 36.78f, 0);
	}
	else
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Local_910, 50f, 0, 0, 0, 0, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-698.44f, -333.93f, 33f, -532.67f, -44.35f, 40f, 0, 1);
		PED::SET_PED_NON_CREATION_AREA(-654.77f, -100.04f, 44.87f, -623.99f, -165.2f, 36.78f);
		PED::ADD_SCENARIO_BLOCKING_AREA(-654.77f, -100.04f, 44.87f, -623.99f, -165.2f, 36.78f, 0, 1, 1, 1);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_913, Local_916, 0, 1, 1, 1);
		PED::ADD_SCENARIO_BLOCKING_AREA(-714.4662f, -233.7738f, 33.0351f, -611.951f, -89.9566f, 57.408f, 0, 1, 1, 1);
		PATHFIND::SET_PED_PATHS_IN_AREA(-654.77f, -100.04f, 44.87f, -623.99f, -165.2f, 36.78f, 0, 0);
		MISC::CLEAR_AREA_OF_PEDS(-640.0048f, -140.2125f, 36.37851f, 24.25f, 0);
		MISC::CLEAR_AREA_OF_PEDS(Local_910, 50f, 0);
	}
}




void func_82(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2C6C
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
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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































































































































void func_209()//Position - 0x1F80F
{
	func_212(Local_626);
	func_212(Local_634);
	func_212(Local_642);
	func_212(Local_658);
	func_210(Local_650);
	func_210(Local_674);
	func_210(Local_682);
	func_210(Local_690);
	func_210(Local_666);
}

void func_210(struct<8> Param0)//Position - 0x1F871
{
	if (func_211(Param0))
	{
		if (PED::IS_PED_IN_VEHICLE(Param0.f_1, Param0, 0))
		{
			TASK::CLEAR_PED_TASKS(Param0.f_1);
			TASK::TASK_VEHICLE_DRIVE_WANDER(Param0.f_1, Param0, 10f, 786599);
		}
	}
}

int func_211(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x1F8AE
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Param0.f_1) && GlobalFunc_4947(Param0))
	{
		return 1;
	}
	return 0;
}

void func_212(struct<8> Param0)//Position - 0x1F8D1
{
	if (func_211(Param0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Param0))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Param0);
			TASK::TASK_VEHICLE_DRIVE_WANDER(Param0.f_1, Param0, 10f, 786599);
		}
	}
}

void func_213()//Position - 0x1F907
{
	float fVar0;
	
	switch (iLocal_521)
	{
		case 0:
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
			{
				TASK::CLEAR_PED_TASKS(iLocal_604);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, -641.7725f, -104.2859f, 37.0147f, 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_907, "chop_growl", 8f, -8f, -1, 9, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_604, uLocal_865);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_604, 1, 0);
			}
			func_78(1);
			RECORDING::_0x293220DA1B46CEBC(4f, 4f, 1);
			GlobalFunc_173(&uLocal_700, 6, iLocal_604, "MrMuffyCakes", 0, 1);
			iLocal_521 = 1;
			break;
		
		case 1:
			GlobalFunc_2216(uLocal_699, iLocal_604, 100f, 0.7f, 0);
			func_229();
			func_224();
			func_223();
			func_221();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_604))
				{
					PED::SET_PED_TO_RAGDOLL(iLocal_604, 500, 1000, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_604, 0);
				}
			}
			if (func_219())
			{
				func_216();
			}
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 1f)
			{
				fVar0 = 1f;
			}
			else
			{
				fVar0 = 2f;
			}
			if (func_214(fVar0) && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_521 = 0;
				iLocal_520 = 7;
			}
			break;
	}
}

int func_214(float fParam0)//Position - 0x1FA4E
{
	struct<3> Var0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
	{
		if (((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_PRONE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_604, Local_926, Local_929, fLocal_932, 0, 1, 0) && GlobalFunc_4568(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_604, 0f, 1f, 0f), 1.5f)) && !ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_604))
		{
			PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 500, 1000, 0, 0, 0, 0);
			PED::SET_PED_RAGDOLL_FORCE_FALL(PLAYER::PLAYER_PED_ID());
			GlobalFunc_10618(&uLocal_700, "NIG1CAU", "NIG1C_CLOSE", 7, GlobalFunc_4570(), 0, 0);
			return 0;
		}
		if (GlobalFunc_155(iLocal_604, PLAYER::PLAYER_PED_ID(), (0.8f + fParam0)))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_604, 1)) };
			if (Var0.f_1 > 0f && Var0.f_2 < 0.1f)
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_216()//Position - 0x1FBB7
{
	if (Local_522[0 /*16*/].f_14)
	{
		if (iLocal_880 == 0)
		{
			if ((GlobalFunc_IsPedNotInjuredOrDead(Local_522[0 /*16*/]) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_FLEEING(Local_522[0 /*16*/]))
			{
				if (func_218() || GlobalFunc_155(Local_522[0 /*16*/], PLAYER::PLAYER_PED_ID(), 5f))
				{
					if (GlobalFunc_155(Local_522[0 /*16*/], PLAYER::PLAYER_PED_ID(), 12f))
					{
						GlobalFunc_173(&uLocal_700, 5, Local_522[0 /*16*/], "ShockedHipsterFemale", 0, 1);
						if (GlobalFunc_10630(&uLocal_700, "NIG1CAU", "NIG1C_DOG", "NIG1C_DOG_1", 7, GlobalFunc_4570(), 0))
						{
							TASK::CLEAR_PED_TASKS(Local_522[0 /*16*/]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_522[0 /*16*/].f_9, 1f, 20000, 0.25f, 0, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
							TASK::TASK_PERFORM_SEQUENCE(Local_522[0 /*16*/], uLocal_865);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
							iLocal_880 = 1;
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_522[0 /*16*/], 5000, 0, 2);
						}
					}
				}
			}
		}
		else if (iLocal_881 == 0)
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10630(&uLocal_700, "NIG1CAU", "NIG1C_DOG", "NIG1C_DOG_2", 7, GlobalFunc_4570(), 0))
				{
					iLocal_881 = 1;
				}
			}
		}
	}
	if (iLocal_882 == 1)
	{
		if ((GlobalFunc_IsPedNotInjuredOrDead(Local_522[2 /*16*/]) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_FLEEING(Local_522[2 /*16*/]))
		{
			GlobalFunc_173(&uLocal_700, 4, Local_522[2 /*16*/], "ShockedBusinessMan", 0, 1);
			if (GlobalFunc_155(Local_522[2 /*16*/], PLAYER::PLAYER_PED_ID(), 50f))
			{
				if (GlobalFunc_10630(&uLocal_700, "NIG1CAU", "NIG1C_DOG", "NIG1C_DOG_3", 7, GlobalFunc_4570(), 0))
				{
					iLocal_882 = 0;
				}
			}
			else if (GlobalFunc_10630(&uLocal_700, "NIG1CAU", "NIG1C_DOG", "NIG1C_DOG_3", 7, 1, 0))
			{
				iLocal_882 = 0;
			}
		}
	}
	if (Local_522[1 /*16*/].f_14 == 1)
	{
		if (iLocal_886 == 1)
		{
			if ((GlobalFunc_IsPedNotInjuredOrDead(Local_522[1 /*16*/]) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_FLEEING(Local_522[1 /*16*/]))
			{
				if (GlobalFunc_155(Local_522[1 /*16*/], PLAYER::PLAYER_PED_ID(), 8f))
				{
					if (GlobalFunc_10630(&uLocal_700, "NIG1CAU", "NIG1C_DOG", "NIG1C_DOG_4", 7, GlobalFunc_4570(), 0))
					{
						TASK::CLEAR_PED_TASKS(Local_522[1 /*16*/]);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_522[1 /*16*/].f_9, 1f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
						TASK::TASK_PERFORM_SEQUENCE(Local_522[1 /*16*/], uLocal_865);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_522[1 /*16*/], 3500, 0, 2);
						iLocal_886 = 0;
					}
				}
			}
		}
	}
	if (iLocal_884 == 1)
	{
		if (func_217() > 40)
		{
			if (GlobalFunc_10630(&uLocal_700, "NIG1CAU", "NIG1C_DOG", "NIG1C_DOG_5", 7, GlobalFunc_4570(), 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_604, -1, 0, 2);
				iLocal_884 = 0;
				iLocal_885 = 1;
			}
		}
	}
	if (iLocal_885)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_604) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_604, 10f))
			{
				if (GlobalFunc_10630(&uLocal_700, "NIG1CAU", "NIG1C_COLLAR", "NIG1C_COLLAR_1", 7, GlobalFunc_4570(), 0))
				{
					iLocal_885 = 0;
				}
			}
		}
	}
}

int func_217()//Position - 0x1FF16
{
	var uVar0;
	
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_611, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &uVar0);
	return uVar0;
}

int func_218()//Position - 0x1FF33
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_522[0 /*16*/], sLocal_906, "avoid_rf", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_522[0 /*16*/], sLocal_906, "avoid_rb", 3))
	{
		return 1;
	}
	return 0;
}

int func_219()//Position - 0x1FF6E
{
	if (!GlobalFunc_111())
	{
		if (!GlobalFunc_663("N1C_WRN_DOG", 0, 0))
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


void func_221()//Position - 0x1FFB6
{
	if (iLocal_878 == 0)
	{
		if (func_211(Local_658) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_658))
			{
				VEHICLE::SET_PLAYBACK_SPEED(Local_658, fLocal_951);
				if (func_222() > 35)
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_658);
					VEHICLE::REMOVE_VEHICLE_RECORDING(2, "NIG1C_COMET2");
					TASK::CLEAR_PED_TASKS(Local_658.f_1);
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_658.f_1, Local_658, 20f, 139);
					if (func_211(Local_674))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(Local_674.f_1, Local_674, 15f, 139);
					}
					iLocal_878 = 1;
				}
				if (iLocal_876 == 0)
				{
					if (GlobalFunc_155(Local_658, iLocal_604, 6f))
					{
						VEHICLE::START_VEHICLE_HORN(Local_658, 4000, 0, 0);
						iLocal_876 = 1;
					}
				}
			}
			else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_604))
			{
				if (func_222() == 19)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_658, 2, "NIG1C_COMET2", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_658, 4400f);
					TASK::TASK_LOOK_AT_ENTITY(Local_658.f_1, iLocal_604, -1, 0, 2);
					VEHICLE::_0xBE5C1255A1830FF5(Local_658, 1);
				}
			}
		}
	}
}

int func_222()//Position - 0x200B7
{
	var uVar0;
	
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_611, ENTITY::GET_ENTITY_COORDS(iLocal_604, 1), &uVar0);
	return uVar0;
}

void func_223()//Position - 0x200D3
{
	if (iLocal_877 == 0)
	{
		if (func_211(Local_642) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_642))
			{
				VEHICLE::SET_PLAYBACK_SPEED(Local_642, fLocal_951);
				if (func_222() > 32)
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_642);
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, "NIG1C_COMET");
					TASK::CLEAR_PED_TASKS(Local_642.f_1);
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_642.f_1, Local_642, 20f, 786599);
					iLocal_877 = 1;
				}
				if (iLocal_875 == 0)
				{
					if (GlobalFunc_155(Local_642, iLocal_604, 6f))
					{
						VEHICLE::START_VEHICLE_HORN(Local_642, 3000, 0, 0);
						iLocal_875 = 1;
					}
				}
			}
			else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_604))
			{
				if (func_222() > 25)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_642, 1, "NIG1C_COMET", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_642, 2500f);
					TASK::TASK_LOOK_AT_ENTITY(Local_642.f_1, iLocal_604, -1, 0, 2);
					if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_614))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_614, iLocal_604, -1, 0, 2);
					}
				}
			}
			VEHICLE::_0xBE5C1255A1830FF5(Local_642, 1);
		}
	}
}

void func_224()//Position - 0x201CC
{
	if (iLocal_513 != 6)
	{
		if ((func_211(Local_634) && func_211(Local_626)) && func_211(Local_666))
		{
			if (iLocal_874 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_604, -662.7688f, -208.3171f, 35.49321f, -674.6289f, -214.6519f, 38.80591f, 6.5f, 0, 1, 0))
				{
					VEHICLE::START_VEHICLE_HORN(Local_626, 1500, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(Local_626.f_1, iLocal_604, 5000, 0, 2);
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_522[2 /*16*/]))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_522[2 /*16*/]))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_522[2 /*16*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
						TASK::TASK_PAUSE(0, 500);
						TASK::TASK_PLAY_ANIM(0, sLocal_906, "reaction_backward_big_intro_c", 8f, -8f, -1, 8192, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_906, "react_big_variations_a", 8f, -8f, -1, 8192, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_906, "exit_to_generic", 8f, -8f, -1, 8192, 0, 0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
						TASK::TASK_PERFORM_SEQUENCE(Local_522[2 /*16*/], uLocal_865);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
					}
					iLocal_874 = 1;
				}
			}
			switch (iLocal_513)
			{
				case 0:
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_604))
					{
						if (func_222() > 8)
						{
							iLocal_513 = 1;
						}
					}
					break;
				
				case 1:
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_626, iLocal_893, sLocal_892, 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_634, iLocal_895, sLocal_894, 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_666, iLocal_896, sLocal_894, 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_626, 2000f);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_634, 2650f);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_666, 6000f);
					iLocal_513 = 2;
					break;
				
				case 2:
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_634) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_666)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_626))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_626, 0.7f);
						VEHICLE::SET_PLAYBACK_SPEED(Local_634, 0.7f);
						VEHICLE::SET_PLAYBACK_SPEED(Local_666, 0.85f);
						if (GlobalFunc_155(Local_634, Local_666, 7f))
						{
							iLocal_513 = 3;
						}
					}
					break;
				
				case 3:
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_634);
					VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_895, sLocal_894);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_666);
					VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_896, sLocal_894);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_626);
					VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_893, sLocal_892);
					TASK::TASK_VEHICLE_MISSION(Local_666.f_1, Local_666, Local_634, 2, 20f, 262144, 0.5f, 2f, 1);
					TASK::TASK_VEHICLE_MISSION(Local_634.f_1, Local_634, Local_666, 2, 20f, 262144, 0.5f, 2f, 1);
					VEHICLE::START_VEHICLE_HORN(Local_634, 800, 0, 0);
					iLocal_513 = 4;
					break;
				
				case 4:
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_634))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_666, 5, 1000);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
						TASK::TASK_PERFORM_SEQUENCE(Local_666.f_1, uLocal_865);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
						TASK::TASK_VEHICLE_TEMP_ACTION(Local_634.f_1, Local_634, 4, 1000);
						VEHICLE::SMASH_VEHICLE_WINDOW(Local_634, 2);
						VEHICLE::SMASH_VEHICLE_WINDOW(Local_634, 0);
						iLocal_882 = 1;
						EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(79, Local_666, -1f);
						if (func_211(Local_690))
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_690.f_1, Local_690, -567.85f, -288.8f, 34.08f, 12f, 0, iLocal_622, 24, 5f, 5f);
						}
						iLocal_513 = 5;
					}
					break;
				
				case 5:
					if (ENTITY::GET_ENTITY_SPEED(Local_634) < 0.5f && ENTITY::GET_ENTITY_SPEED(Local_666) < 0.5f)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
						TASK::TASK_PAUSE(0, 1000);
						TASK::TASK_LEAVE_VEHICLE(0, Local_666, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_634.f_1, -1f, 1f, 0f), 1.3f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_634.f_1, 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_906, "react_big_variations_a", 8f, -8f, -1, 8192, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_906, "exit_to_generic", 8f, -8f, -1, 8192, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
						TASK::TASK_PERFORM_SEQUENCE(Local_666.f_1, uLocal_865);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
						TASK::TASK_LEAVE_VEHICLE(0, Local_626, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_666, 2500);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_634.f_1, -1f, 1f, 0f), 1.2f, 20000, 1f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_634.f_1, 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_906, "react_big_variations_a", 8f, -8f, -1, 8192, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_906, "exit_to_generic", 8f, -8f, -1, 8192, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
						TASK::TASK_PERFORM_SEQUENCE(Local_626.f_1, uLocal_865);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
						ENTITY::SET_ENTITY_HEALTH(Local_634.f_1, 0);
						iLocal_518 = 0;
						iLocal_519 = 0;
						iLocal_513 = 6;
					}
					break;
				
				case 6:
					break;
			}
		}
		else if (func_211(Local_690))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_604))
			{
				if (func_222() > 19)
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_690.f_1, Local_690, -567.85f, -288.8f, 34.08f, 12f, 0, iLocal_622, 24, 5f, 5f);
					iLocal_513 = 6;
				}
			}
		}
	}
	else if ((GlobalFunc_4947(Local_634) && GlobalFunc_4947(Local_626)) && GlobalFunc_4947(Local_666))
	{
		VEHICLE::_0xBE5C1255A1830FF5(Local_634, 1);
		VEHICLE::_0xBE5C1255A1830FF5(Local_626, 1);
		VEHICLE::_0xBE5C1255A1830FF5(Local_666, 1);
		func_225();
	}
}

void func_225()//Position - 0x20747
{
	if ((GlobalFunc_IsPedNotInjuredOrDead(Local_666.f_1) && GlobalFunc_115(Local_666)) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_518)
		{
			case 0:
				if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_634, 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_626, 0)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_666, 0))
				{
					TASK::CLEAR_PED_TASKS(Local_666.f_1);
					if (func_228() == joaat("weapon_unarmed"))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_666.f_1, 5, 1);
					}
					TASK::TASK_COMBAT_PED(Local_666.f_1, PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_518 = 1;
				}
				if (PED::IS_PED_FLEEING(Local_666.f_1))
				{
					iLocal_518 = 4;
				}
				break;
			
			case 1:
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_666, 0))
				{
					if (((!GlobalFunc_155(Local_666.f_1, Local_666, 20f) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_666, 20f)) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_666.f_1, 10f)) && !PED::IS_PED_FLEEING(Local_666.f_1))
					{
						TASK::CLEAR_PED_TASKS(Local_666.f_1);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_666.f_1, PLAYER::PLAYER_PED_ID(), -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_666.f_1, 17, 1);
						iLocal_518 = 2;
					}
				}
				if (PED::IS_PED_FLEEING(Local_666.f_1))
				{
					iLocal_518 = 4;
				}
				if (func_226(Local_666.f_1, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_666.f_1, 5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_666.f_1, 17, 1);
					TASK::CLEAR_PED_TASKS(Local_666.f_1);
					TASK::TASK_SMART_FLEE_PED(Local_666.f_1, PLAYER::PLAYER_PED_ID(), 60f, -1, 0, 0);
					iLocal_518 = 4;
				}
				break;
			
			case 2:
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_666.f_1, 1) < 8f)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_666.f_1, 5, 1);
					TASK::TASK_COMBAT_PED(Local_666.f_1, PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_518 = 1;
				}
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_666.f_1, 1) > 20f)
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
					TASK::TASK_ENTER_VEHICLE(0, Local_666, -1, -1, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
					TASK::TASK_PERFORM_SEQUENCE(Local_666.f_1, uLocal_865);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
					iLocal_518 = 3;
				}
				if (PED::IS_PED_FLEEING(Local_666.f_1))
				{
					iLocal_518 = 4;
				}
				break;
			
			case 3:
				if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_666.f_1, 8f))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_666.f_1, 5, 1);
					TASK::TASK_COMBAT_PED(Local_666.f_1, PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_518 = 1;
				}
				if (PED::IS_PED_FLEEING(Local_666.f_1))
				{
					iLocal_518 = 4;
				}
				break;
			}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_626.f_1))
	{
		switch (iLocal_519)
		{
			case 0:
				if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_634, 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_626, 0)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_666, 0))
				{
					TASK::CLEAR_PED_TASKS(Local_626.f_1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_626.f_1, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_519 = 1;
				}
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_226(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x20A60
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8639(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return GlobalFunc_171(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_30(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}


int func_228()//Position - 0x20B62
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, 1);
	return uVar0;
}

void func_229()//Position - 0x20B78
{
	if (func_211(Local_650) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
	{
		switch (iLocal_514)
		{
			case 0:
				break;
			
			case 1:
				ENTITY::SET_ENTITY_COORDS(Local_650, -616.56f, -176.6f, 37.26f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_650, 117.29f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_650);
				if (GlobalFunc_4947(Local_634))
				{
					TASK::TASK_VEHICLE_MISSION(Local_650.f_1, Local_650, Local_634, 12, 15f, 262144, 20f, 5f, 1);
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_650, 10f);
				iLocal_514 = 2;
				break;
			
			case 2:
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_650.f_1, 15f);
				if (GlobalFunc_155(iLocal_604, Local_650.f_1, 18f))
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 2f, 0);
					iLocal_514 = 3;
				}
				break;
			
			case 3:
				TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_650, 10, 500);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_650, 4, 1000);
				TASK::TASK_PAUSE(0, 1000);
				TASK::TASK_LEAVE_VEHICLE(0, Local_650, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
				TASK::TASK_PERFORM_SEQUENCE(Local_650.f_1, uLocal_865);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
				VEHICLE::START_VEHICLE_HORN(Local_650, 1000, 0, 0);
				iLocal_514 = 4;
				break;
			
			case 4:
				if ((TASK::GET_SCRIPT_TASK_STATUS(Local_650.f_1, 242628503) != 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_650, -1)) && !PED::IS_PED_FLEEING(Local_650.f_1))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_650, -2f, 2f, 0f), 2f, 20000, 0.25f, 0, 40000f);
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_626.f_1))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_626.f_1, 5000);
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000);
					}
					TASK::TASK_ENTER_VEHICLE(0, Local_650, -1, -1, 1.8f, 9, 0);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_650, 10f, 131);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
					TASK::TASK_PERFORM_SEQUENCE(Local_650.f_1, uLocal_865);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
					iLocal_514 = 5;
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_650, 0) && !PED::IS_PED_FLEEING(Local_650.f_1))
				{
					TASK::CLEAR_PED_TASKS(Local_650.f_1);
					iLocal_514 = 6;
				}
				VEHICLE::_0xBE5C1255A1830FF5(Local_650, 1);
				break;
			
			case 5:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_650, 0) && !PED::IS_PED_FLEEING(Local_650.f_1))
				{
					TASK::CLEAR_PED_TASKS(Local_650.f_1);
					iLocal_514 = 6;
				}
				break;
			
			case 6:
				TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
				TASK::TASK_ENTER_VEHICLE(0, Local_650, -1, -1, 2.5f, 9, 0);
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_650, PLAYER::PLAYER_PED_ID(), 8, 20f, 20, 100f, 5f, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
				TASK::TASK_PERFORM_SEQUENCE(Local_650.f_1, uLocal_865);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
				iLocal_514 = 7;
				break;
			
			case 7:
				break;
			}
	}
}


void func_231()//Position - 0x20FAF
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	switch (iLocal_521)
	{
		case 0:
			func_239();
			iLocal_878 = 0;
			iLocal_877 = 0;
			iLocal_874 = 0;
			iLocal_880 = 0;
			iLocal_881 = 0;
			iLocal_882 = 0;
			iLocal_884 = 0;
			iLocal_886 = 0;
			MISC::CLEAR_AREA_OF_VEHICLES(-628.8963f, -183.1741f, 36.76265f, 50f, 1, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-679.2649f, -250.0605f, 35.60568f, 21.75f, 1, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-655.583f, -298.5198f, 34.45316f, 39.75f, 1, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-670.7004f, -99.16148f, 36.77983f, 60f, 1, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-561.3182f, -153.0898f, 36.6348f, 50f, 1, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-590.6263f, -247.0923f, 34.69418f, 35f, 1, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(Local_910, 50f, 0, 0, 0, 0, 0);
			if (!func_238())
			{
				return;
			}
			iLocal_513 = 0;
			iLocal_514 = 0;
			func_237(0);
			func_237(1);
			func_237(2);
			func_237(4);
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_522[0 /*16*/]))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_522[0 /*16*/], "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, 1);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_522[2 /*16*/]))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_522[2 /*16*/], "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, 1);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_522[4 /*16*/]))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_522[4 /*16*/], "WORLD_HUMAN_STAND_MOBILE", 0, 0);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_522[1 /*16*/]))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_522[1 /*16*/], "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				PED::SET_PED_COMPONENT_VARIATION(Local_522[1 /*16*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_522[1 /*16*/], 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_522[1 /*16*/], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_522[1 /*16*/], 4, 0, 0, 0);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_620);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_621);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_622);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_625);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_624);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_617);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_619);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("firetruk"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_623);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_616);
			if (func_211(Local_682))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_682, -758.84f, -115.64f, 36.89f, 12f, 0, Local_682.f_2, 17, 1f, 1f);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
				TASK::TASK_PERFORM_SEQUENCE(Local_682.f_1, uLocal_865);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
			}
			if (func_211(Local_674))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_674, -655.18f, -202.16f, 36.43f, 18f, 0, iLocal_625, 17, 1f, 1f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_674, -643.56f, -196.16f, 36.58f, 10f, 0, iLocal_625, 17, 1f, 1f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_674, -633.4f, -191.1f, 36.67f, 5f, 0, iLocal_625, 17, 1f, 1f);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
				TASK::TASK_PERFORM_SEQUENCE(Local_674.f_1, uLocal_865);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
			}
			Local_522[0 /*16*/].f_13 = 0;
			Local_522[0 /*16*/].f_14 = 0;
			Local_522[1 /*16*/].f_13 = 0;
			Local_522[1 /*16*/].f_14 = 0;
			Local_522[4 /*16*/].f_13 = 0;
			Local_522[4 /*16*/].f_14 = 0;
			iLocal_886 = 1;
			iLocal_884 = 1;
			iLocal_889 = 1;
			iLocal_890 = 0;
			RECORDING::_0x293220DA1B46CEBC(4f, 4f, 1);
			iLocal_521 = 1;
			break;
		
		case 1:
			GlobalFunc_2216(uLocal_699, iLocal_604, 100f, 0.7f, 0);
			if (func_219())
			{
				func_216();
			}
			if (iLocal_889 == 1)
			{
				if (func_222() > 7)
				{
					if (func_211(Local_682))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_682, -758.84f, -115.64f, 36.89f, 12f, 0, Local_682.f_2, 17, 1f, 1f);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
						TASK::TASK_PERFORM_SEQUENCE(Local_682.f_1, uLocal_865);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
					}
					if (func_211(Local_674))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_674, -655.18f, -202.16f, 36.43f, 18f, 0, iLocal_625, 17, 1f, 1f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_674, -643.56f, -196.16f, 36.58f, 10f, 0, iLocal_625, 17, 1f, 1f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_674, -633.4f, -191.1f, 36.67f, 5f, 0, iLocal_625, 17, 1f, 1f);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
						TASK::TASK_PERFORM_SEQUENCE(Local_674.f_1, uLocal_865);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
					}
					iLocal_889 = 0;
				}
			}
			else if (iLocal_890 == 0)
			{
				if (func_211(Local_682))
				{
					if (func_217() > 25)
					{
						TASK::CLEAR_PED_TASKS(Local_682.f_1);
						ENTITY::SET_ENTITY_COORDS(Local_682, -678.85f, -95.08f, 36.86f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_682, 208.7f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_682.f_1, Local_682, -567.85f, -288.8f, 34.08f, 12f, 0, iLocal_620, 786599, 5f, 5f);
						iLocal_890 = 1;
					}
				}
			}
			if (iLocal_514 == 0)
			{
				if (func_222() > 12)
				{
					iLocal_514 = 1;
				}
			}
			func_235();
			func_234(0);
			func_234(1);
			func_233();
			func_229();
			func_224();
			func_223();
			func_221();
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_604, Local_868, 3f, 3f, 2f, 0, 1, 0))
			{
				iLocal_521 = 0;
				iLocal_520 = 6;
			}
			if (func_214(0))
			{
				func_232();
			}
			break;
	}
}

void func_232()//Position - 0x2150E
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_603))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_603, PLAYER::PLAYER_PED_ID(), -1);
	}
	iLocal_521 = 0;
	iLocal_520 = 7;
}

void func_233()//Position - 0x21534
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_522[4 /*16*/]) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
	{
		if (Local_522[4 /*16*/].f_13 == 0)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(Local_522[4 /*16*/], iLocal_604, 2.5f, 2.5f, 2f, 0, 1, 0))
			{
				TASK::CLEAR_PED_TASKS(Local_522[4 /*16*/]);
				PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_522[4 /*16*/], 1500, 2000, 1, -ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_522[4 /*16*/]), 1f, 0f, 0f, 0f, 0f, 0f, 0f);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_604, -1, 0, 2);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -631.84f, -153.48f, 36.83f, 1f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_604, 0);
				TASK::TASK_PAUSE(0, 1500);
				TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
				TASK::TASK_PERFORM_SEQUENCE(Local_522[4 /*16*/], uLocal_865);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
				Local_522[4 /*16*/].f_13 = 1;
			}
		}
	}
}

void func_234(int iParam0)//Position - 0x21622
{
	struct<3> Var0;
	
	if (!Local_522[iParam0 /*16*/].f_14)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_522[iParam0 /*16*/]) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
		{
			if (!Local_522[iParam0 /*16*/].f_13)
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_604))
				{
					if (func_222() > Local_522[iParam0 /*16*/].f_12)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
						if (iLocal_517 == 3)
						{
							TASK::TASK_PAUSE(0, 1000);
						}
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_522[iParam0 /*16*/].f_6, 1f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
						TASK::TASK_PERFORM_SEQUENCE(Local_522[iParam0 /*16*/], uLocal_865);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
						Local_522[iParam0 /*16*/].f_13 = 1;
					}
				}
			}
			else if (GlobalFunc_155(Local_522[iParam0 /*16*/], iLocal_604, 3f))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_522[iParam0 /*16*/], ENTITY::GET_ENTITY_COORDS(iLocal_604, 1)) };
				TASK::CLEAR_PED_TASKS(Local_522[iParam0 /*16*/]);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_604, -1, 0, 2);
				if (Var0.f_1 > 0.7f)
				{
					TASK::TASK_PLAY_ANIM(0, sLocal_906, Local_522[iParam0 /*16*/].f_15, 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, sLocal_906, "avoid_rb", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_604, 0);
				TASK::TASK_PAUSE(0, 1000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_522[iParam0 /*16*/].f_9, 1f, 20000, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
				TASK::TASK_PERFORM_SEQUENCE(Local_522[iParam0 /*16*/], uLocal_865);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
				Local_522[iParam0 /*16*/].f_14 = 1;
			}
		}
	}
}

void func_235()//Position - 0x217BF
{
	if ((GlobalFunc_IsPedNotInjuredOrDead(iLocal_603) && GlobalFunc_713(iLocal_603, Local_608, 1) < 5f) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_608, 1) < 25f)
	{
		if (iLocal_612)
		{
			if (GlobalFunc_10630(&uLocal_700, "NIG1CAU", "NIG1C_CHASE", "NIG1C_CHASE_2", 7, GlobalFunc_4570(), 0))
			{
				iLocal_612 = 0;
				iLocal_613 = MISC::GET_GAME_TIMER() + 5000;
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_604, -1, 0, 2);
			}
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_613 && !GlobalFunc_111())
		{
			if (GlobalFunc_10618(&uLocal_700, "NIG1CAU", "NIG1C_WAIT", 7, GlobalFunc_4570(), 0, 0))
			{
				iLocal_613 = MISC::GET_GAME_TIMER() + 5000;
			}
		}
	}
}


void func_237(int iParam0)//Position - 0x218B6
{
	struct<3> Var0;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_522[iParam0 /*16*/]))
	{
		PED::DELETE_PED(&(Local_522[iParam0 /*16*/]));
	}
	if (STREAMING::HAS_MODEL_LOADED(Local_522[iParam0 /*16*/].f_1))
	{
		Local_522[iParam0 /*16*/] = PED::CREATE_PED(5, Local_522[iParam0 /*16*/].f_1, Local_522[iParam0 /*16*/].f_2, Local_522[iParam0 /*16*/].f_5, 1, 1);
		Var0 = { Local_522[iParam0 /*16*/].f_2 };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3);
		ENTITY::SET_ENTITY_COORDS(Local_522[iParam0 /*16*/], Var0.x, Var0.f_1, fVar3, 1, 0, 0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_522[iParam0 /*16*/], uLocal_867);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_522[iParam0 /*16*/], 17, 1);
	}
}

int func_238()//Position - 0x2195F
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_626))
		{
			if (STREAMING::HAS_MODEL_LOADED(Local_626.f_2) && STREAMING::HAS_MODEL_LOADED(Local_626.f_3))
			{
				Local_626 = VEHICLE::CREATE_VEHICLE(Local_626.f_2, Local_626.f_4, Local_626.f_7, 1, 1);
				Local_626.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_626, 4, Local_626.f_3, -1, 1, 1);
				VEHICLE::_0xBE5C1255A1830FF5(Local_626, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_626, 3);
				PED::SET_PED_MONEY(Local_626.f_1, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_626.f_1, 17, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_626.f_1, iLocal_867);
				PED::SET_PED_CONFIG_FLAG(Local_626.f_1, 115, 1);
			}
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_634))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_622) && STREAMING::HAS_MODEL_LOADED(iLocal_617))
			{
				Local_634 = VEHICLE::CREATE_VEHICLE(iLocal_622, -591.7191f, -166.3491f, 37.8459f, 35f, 1, 1);
				Local_634.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_634, 5, iLocal_617, -1, 1, 1);
				PED::SET_PED_CONFIG_FLAG(Local_634.f_1, 32, 1);
				VEHICLE::_0xBE5C1255A1830FF5(Local_634, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_634, 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_634.f_1, 17, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_634.f_1, iLocal_867);
			}
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_642))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_620) && STREAMING::HAS_MODEL_LOADED(iLocal_619))
			{
				Local_642 = VEHICLE::CREATE_VEHICLE(iLocal_620, -651.4f, -153.68f, 36.95f, 217.44f, 1, 1);
				Local_642.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_642, 4, iLocal_619, -1, 1, 1);
				iLocal_614 = PED::CREATE_PED_INSIDE_VEHICLE(Local_642, 4, iLocal_617, 2, 1, 1);
				VEHICLE::_0xBE5C1255A1830FF5(Local_642, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_642, 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_642.f_1, 17, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_614, 17, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_642.f_1, iLocal_867);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_614, iLocal_867);
			}
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_658))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_621) && STREAMING::HAS_MODEL_LOADED(iLocal_617))
			{
				Local_658 = VEHICLE::CREATE_VEHICLE(iLocal_621, -525.33f, -137.35f, 38.04f, 111.2f, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_658);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_658, 3);
				if (!GlobalFunc_IsPedNotInjuredOrDead(Local_658.f_1))
				{
					Local_658.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_658, 4, iLocal_617, -1, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_658.f_1, 17, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_658.f_1, iLocal_867);
				}
			}
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_666))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_620) && STREAMING::HAS_MODEL_LOADED(iLocal_619))
			{
				Local_666 = VEHICLE::CREATE_VEHICLE(iLocal_620, Local_666.f_4, Local_666.f_7, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_666);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_666, 3);
				if (!GlobalFunc_IsPedNotInjuredOrDead(Local_666.f_1))
				{
					Local_666.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_666, 4, iLocal_619, -1, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_666.f_1, 17, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_666.f_1, iLocal_867);
				}
			}
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_650))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_623) && STREAMING::HAS_MODEL_LOADED(iLocal_617))
			{
				Local_650 = VEHICLE::CREATE_VEHICLE(iLocal_623, -584.32f, -156.66f, 36.95f, 117.29f, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_650);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_650, 3);
				Local_650.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_650, 4, iLocal_617, -1, 1, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_650.f_1, 17, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_650.f_1, iLocal_867);
			}
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_674))
	{
		if (STREAMING::HAS_MODEL_LOADED(Local_674.f_2) && STREAMING::HAS_MODEL_LOADED(iLocal_619))
		{
			Local_674 = VEHICLE::CREATE_VEHICLE(iLocal_625, -683.3f, -238.03f, 36.63f, 29.79f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_674);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_674, 3);
			if (!GlobalFunc_IsPedNotInjuredOrDead(Local_674.f_1))
			{
				Local_674.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_674, 4, iLocal_619, -1, 1, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_674.f_1, 17, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_674.f_1, iLocal_867);
			}
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_682))
	{
		if (STREAMING::HAS_MODEL_LOADED(Local_682.f_2) && STREAMING::HAS_MODEL_LOADED(Local_682.f_3))
		{
			Local_682 = VEHICLE::CREATE_VEHICLE(Local_682.f_2, Local_682.f_4, Local_682.f_7, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_682);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_682, 3);
			if (!GlobalFunc_IsPedNotInjuredOrDead(Local_682.f_1))
			{
				Local_682.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_682, 4, Local_682.f_3, -1, 1, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_682.f_1, 17, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_682.f_1, iLocal_867);
			}
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_690))
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_622) && STREAMING::HAS_MODEL_LOADED(iLocal_619))
		{
			Local_690 = VEHICLE::CREATE_VEHICLE(iLocal_622, Local_690.f_4, Local_690.f_7, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_690);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_690, 3);
			if (!GlobalFunc_IsPedNotInjuredOrDead(Local_690.f_1))
			{
				Local_690.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_690, 4, iLocal_619, -1, 1, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_690.f_1, 17, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_690.f_1, iLocal_867);
			}
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_698))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("firetruk")))
		{
			iLocal_698 = VEHICLE::CREATE_VEHICLE(joaat("firetruk"), -637.88f, -112.82f, 38.1f, 83.08f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_698);
		}
		return 0;
	}
	return 1;
}

void func_239()//Position - 0x21EB2
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_895, sLocal_894);
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_896, sLocal_894);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "NIG1C_COMET");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "NIG1C_COMET2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "NIG1CEscort");
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_893, sLocal_892);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "NIG1C_FIRE");
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_611);
	STREAMING::REQUEST_MODEL(iLocal_620);
	STREAMING::REQUEST_MODEL(iLocal_621);
	STREAMING::REQUEST_MODEL(iLocal_622);
	STREAMING::REQUEST_MODEL(iLocal_625);
	STREAMING::REQUEST_MODEL(iLocal_624);
	STREAMING::REQUEST_MODEL(iLocal_623);
	STREAMING::REQUEST_MODEL(iLocal_616);
	STREAMING::REQUEST_MODEL(iLocal_617);
	STREAMING::REQUEST_MODEL(joaat("firetruk"));
	STREAMING::REQUEST_MODEL(iLocal_619);
	STREAMING::REQUEST_ANIM_DICT(sLocal_906);
	STREAMING::REQUEST_ANIM_DICT(sLocal_909);
	STREAMING::REQUEST_ANIM_DICT(sLocal_908);
	STREAMING::REQUEST_ANIM_DICT(sLocal_907);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1C_COLLAR", 0);
}

void func_240()//Position - 0x21F71
{
	bool bVar0;
	
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	func_239();
	switch (iLocal_521)
	{
		case 0:
			if (!HUD::DOES_BLIP_EXIST(uLocal_699))
			{
				uLocal_699 = GlobalFunc_4955(iLocal_604, 1, 1, 5);
			}
			GlobalFunc_164("N1C_CATCH", 7500, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_START");
			CAM::STOP_GAMEPLAY_HINT(0);
			func_78(0);
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_611, &iLocal_871);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_611, (iLocal_871 - 1), &Local_868);
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
			{
				TASK::CLEAR_PED_TASKS(iLocal_604);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_611, 0, 616, -1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_604, uLocal_865);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
			}
			if ((iLocal_950 != 1 && GlobalFunc_IsPedNotInjuredOrDead(iLocal_603)) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
			{
				TASK::CLEAR_PED_TASKS(iLocal_603);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
				if (iLocal_950 == 2)
				{
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_604, -1, 0, 2);
					TASK::TASK_PAUSE(0, 500);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_604, -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_604, 1500);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_608, 2.2f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_PLAY_ANIM(0, sLocal_906, "IDLE_D", 2f, -8f, -1, 8193, 0, 0, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_603, uLocal_865);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
			}
			iLocal_612 = 1;
			iLocal_613 = 0;
			RECORDING::_0x293220DA1B46CEBC(3f, 10f, 1);
			iLocal_521 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_111() || iLocal_887 == 1)
			{
				bVar0 = false;
				if ((GlobalFunc_IsPedNotInjuredOrDead(iLocal_603) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID())) && GlobalFunc_155(iLocal_603, PLAYER::PLAYER_PED_ID(), 35f))
				{
					bVar0 = GlobalFunc_10630(&uLocal_700, "NIG1CAU", "NIG1C_CHASE", "NIG1C_CHASE_1", 9, GlobalFunc_4570(), 0);
				}
				else
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					iLocal_521 = 2;
				}
			}
			if (func_214(0))
			{
				func_232();
			}
			GlobalFunc_2216(uLocal_699, iLocal_604, 100f, 0.7f, 0);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_604, 2f);
			break;
		
		case 2:
			GlobalFunc_2216(uLocal_699, iLocal_604, 100f, 0.7f, 0);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_604, 3f);
			func_235();
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_604))
			{
				iLocal_521 = 0;
				iLocal_520 = 5;
			}
			if (func_214(0))
			{
				func_232();
			}
			break;
	}
}



void func_243()//Position - 0x22253
{
	switch (iLocal_521)
	{
		case 0:
			if (func_228() != joaat("weapon_unarmed"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				iLocal_516 = 0;
			}
			else
			{
				iLocal_516 = 1;
			}
			iLocal_521 = 1;
			break;
		
		case 1:
			func_245();
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			if (iLocal_887 == 1)
			{
				iLocal_950 = 1;
				iLocal_521 = 0;
				iLocal_520 = 4;
			}
			if (func_244())
			{
				if (GlobalFunc_111())
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(1);
				}
				iLocal_950 = 0;
				iLocal_521 = 0;
				iLocal_520 = 4;
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iLocal_603) == iLocal_866)
			{
				if (GlobalFunc_111())
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				}
				iLocal_950 = 3;
				iLocal_521 = 0;
				iLocal_520 = 4;
			}
			break;
	}
}

int func_244()//Position - 0x22303
{
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
	{
		if (GlobalFunc_155(iLocal_604, PLAYER::PLAYER_PED_ID(), 6.5f))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -630.4753f, -263.9552f, 37.40532f, -621.4487f, -258.8588f, 39.22013f, 4f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_245()//Position - 0x2236B
{
	struct<20> Var0;
	struct<22> Var22;
	
	switch (iLocal_516)
	{
		case 0:
			if (func_228() == joaat("weapon_unarmed"))
			{
				iLocal_516 = 1;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				Var0.f_4 = 1065353216;
				Var0.f_5 = 1065353216;
				Var0.f_9 = 1065353216;
				Var0.f_10 = 1065353216;
				Var0.f_14 = 1065353216;
				Var0.f_15 = 1065353216;
				Var0.f_17 = 1040187392;
				Var0.f_18 = 1040187392;
				Var0.f_19 = -1;
				Var22.f_4 = 1065353216;
				Var22.f_5 = 1065353216;
				Var22.f_9 = 1065353216;
				Var22.f_10 = 1065353216;
				Var22.f_14 = 1065353216;
				Var22.f_15 = 1065353216;
				Var22.f_17 = 1040187392;
				Var22.f_18 = 1040187392;
				Var22.f_19 = -1;
				Var22 = 1;
				Var22.f_2 = "hailing_whistle_waive_a";
				Var22.f_1 = sLocal_906;
				Var22.f_3 = 0f;
				Var22.f_4 = 1f;
				Var22.f_5 = 0.5f;
				Var22.f_16 = MISC::GET_HASH_KEY("BONEMASK_HEAD_NECK_AND_L_ARM");
				Var22.f_20 = 48;
				Var22.f_21 = 1024;
				TASK::TASK_SCRIPTED_ANIMATION(PLAYER::PLAYER_PED_ID(), &Var22, &Var0, &Var0, 0.25f, 0.25f);
			}
			RECORDING::_0x293220DA1B46CEBC(3f, 2f, 0);
			if (GlobalFunc_115(iLocal_604))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_604, 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
			}
			iLocal_948 = MISC::GET_GAME_TIMER() + 750;
			iLocal_516 = 2;
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() > iLocal_948 && GlobalFunc_IsPedNotInjuredOrDead(iLocal_603))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_603))
				{
					PED::SET_PED_PANIC_EXIT_SCENARIO(iLocal_603, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				}
				iLocal_516 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_603) && GlobalFunc_10630(&uLocal_700, "NIG1CAU", "NIG1C_MODEL", "NIG1C_MODEL_1", 7, 0, 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_603, PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_865);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_908, "gesture_easy_now", 8f, -8f, -1, 8, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_865);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_603, uLocal_865);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_865);
				iLocal_891 = 1;
				iLocal_948 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_516 = 5;
			}
			break;
		
		case 5:
			func_247();
			if (MISC::GET_GAME_TIMER() > iLocal_948 && GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_604, -628.1631f, -261.5749f, 37.6045f, 1.5f, 20000, 0.25f, 0, -15.13f);
				iLocal_516 = 4;
			}
			break;
		
		case 4:
			func_247();
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_604) && GlobalFunc_775(iLocal_604, -628.1631f, -261.5749f, 37.6045f, 2f))
			{
				HUD::CLEAR_PRINTS();
				iLocal_950 = 0;
				iLocal_521 = 0;
				iLocal_520 = 4;
			}
			break;
	}
}


void func_247()//Position - 0x2266B
{
	if (iLocal_891)
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_10630(&uLocal_700, "NIG1CAU", "NIG1C_MODEL", "NIG1C_MODEL_2", 7, 1, 0))
			{
				iLocal_891 = 0;
			}
		}
	}
}

void func_248()//Position - 0x2269D
{
	func_249();
	switch (iLocal_521)
	{
		case 0:
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_603, -1, 0, 2);
			if (!HUD::DOES_BLIP_EXIST(uLocal_699))
			{
				RECORDING::_0x293220DA1B46CEBC(2f, 10f, 1);
				uLocal_699 = GlobalFunc_4955(iLocal_604, 1, 1, 5);
				GlobalFunc_164("N1C_INIT", 7500, 1);
				AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_FORA");
			}
			iLocal_521 = 1;
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_926, Local_929, fLocal_932, 0, 1, 0))
			{
				iLocal_521 = 0;
				iLocal_520 = 3;
			}
			if (PED::IS_PED_FLEEING(iLocal_603))
			{
				if (GlobalFunc_111())
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				}
				iLocal_950 = 1;
				iLocal_521 = 0;
				iLocal_520 = 4;
			}
			break;
	}
}

void func_249()//Position - 0x22753
{
	bool bVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_603))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_897 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_898, Local_901, fLocal_904, 0, 1, 0))
		{
			bVar0 = false;
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				bVar0 = GlobalFunc_10618(&uLocal_700, "NIG1CAU", "NIG1C_SHOP", 8, 1, 0, 0);
			}
			else
			{
				bVar0 = GlobalFunc_10618(&uLocal_700, "NIG1CAU", "NIG1C_SHOP", 8, 0, 0, 0);
			}
			if (bVar0)
			{
				iLocal_897 = MISC::GET_GAME_TIMER() + 7000;
			}
		}
	}
}

void func_250()//Position - 0x227D3
{
	func_249();
	switch (iLocal_521)
	{
		case 0:
			uLocal_699 = GlobalFunc_4955(iLocal_604, 1, 1, 5);
			GlobalFunc_164("N1C_INIT", 7500, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_FORA");
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_919, Local_922, fLocal_925, 0, 1, 0))
			{
				iLocal_521 = 0;
				iLocal_520 = 2;
			}
			else
			{
				iLocal_521 = 1;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_919, Local_922, fLocal_925, 0, 1, 0))
			{
				iLocal_521 = 0;
				iLocal_520 = 2;
			}
			if (PED::IS_PED_FLEEING(iLocal_603))
			{
				if (GlobalFunc_111())
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				}
				HUD::CLEAR_PRINTS();
				GlobalFunc_164("N1C_CATCH", 7500, 1);
				AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_START");
				iLocal_950 = 1;
				iLocal_521 = 0;
				iLocal_520 = 4;
			}
			break;
	}
}

void func_251(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x228A4
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
























void func_275()//Position - 0x2386A
{
	func_276(98, 1);
	func_435();
}

void func_276(int iParam0, bool bParam1)//Position - 0x2387D
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8314();
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
	GlobalFunc_9520(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_43(&uVar1, GlobalFunc_8310());
	GlobalFunc_11303();
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










































































void func_350(int iParam0, int iParam1, int iParam2)//Position - 0x2BF3D
{
	func_68(0, 0, iParam2, 1);
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
































































void func_414(int iParam0)//Position - 0x33121
{
	int iVar0;
	
	func_428(1, 1);
	func_40();
	HUD::CLEAR_PRINTS();
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_604);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_603))
	{
		TASK::CLEAR_PED_TASKS(iLocal_603);
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	iLocal_887 = 0;
	iLocal_888 = 0;
	GlobalFunc_7632(0);
	func_65(0, 1);
	if (HUD::DOES_BLIP_EXIST(uLocal_699))
	{
		HUD::REMOVE_BLIP(&uLocal_699);
	}
	GlobalFunc_69(&(Local_522[0 /*16*/]));
	GlobalFunc_69(&(Local_522[1 /*16*/]));
	GlobalFunc_69(&(Local_522[2 /*16*/]));
	GlobalFunc_69(&(Local_522[3 /*16*/]));
	GlobalFunc_69(&(Local_522[4 /*16*/]));
	GlobalFunc_69(&iLocal_614);
	GlobalFunc_69(&iLocal_603);
	GlobalFunc_69(&iLocal_604);
	func_49(Local_634);
	func_49(Local_626);
	func_49(Local_642);
	func_49(Local_658);
	func_49(Local_666);
	func_49(Local_674);
	func_49(Local_682);
	func_49(Local_690);
	func_49(Local_650);
	GlobalFunc_6692(&iLocal_698);
	MISC::CLEAR_AREA_OF_VEHICLES(-669.0843f, -209.1426f, 36.27277f, 25.25f, 0, 0, 0, 0, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_910, 50f, 0, 0, 0, 0, 0);
	MISC::CLEAR_AREA_OF_PEDS(-670.1719f, -208.0861f, 36.25821f, 7.25f, 0);
	iLocal_521 = 0;
	GlobalFunc_173(&uLocal_700, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	switch (iParam0)
	{
		case 0:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -604.82f, -350.1f, 34.01f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -7.52f);
			func_427(1);
			func_417();
			iLocal_520 = 1;
			break;
		
		case 1:
			func_239();
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -604.82f, -350.1f, 34.01f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -7.52f);
			func_427(1);
			func_417();
			GlobalFunc_173(&uLocal_700, 3, iLocal_603, "KERRY", 0, 1);
			iLocal_520 = 1;
			break;
		
		case 2:
			func_239();
			func_415();
			if (!GlobalFunc_188())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -605.2227f, -291.6463f, 35.7791f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 38.21f);
			}
			func_427(1);
			func_417();
			GlobalFunc_173(&uLocal_700, 3, iLocal_603, "KERRY", 0, 1);
			iLocal_520 = 2;
			break;
		
		case 3:
			func_239();
			func_415();
			uLocal_699 = GlobalFunc_4955(iLocal_604, 1, 1, 5);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -630.43f, -255.38f, 37.5f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 27.58f);
			iLocal_603 = PED::CREATE_PED(5, iLocal_616, Local_605, 27.58f, 1, 1);
			GlobalFunc_6453(iLocal_603, Local_605);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_603, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_603, 2, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_603, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_603, 4, 0, 0, 0);
			iLocal_604 = PED::CREATE_PED(26, iLocal_618, -633.89f, -250.1f, 37.38f, 50f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_604, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_604, 4, 0, 1, 0);
			GlobalFunc_173(&uLocal_700, 3, iLocal_603, "KERRY", 0, 1);
			func_78(0);
			iLocal_520 = 4;
			break;
		
		case 4:
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_611);
			STREAMING::REQUEST_MODEL(iLocal_618);
			while (!STREAMING::HAS_MODEL_LOADED(iLocal_618))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_604 = PED::CREATE_PED(26, iLocal_618, -636.42f, -95.84f, 37.48f, -95.46f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_604, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_604, 4, 0, 1, 0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -636.21f, -96.51f, 37.2f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -5.46f);
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			iLocal_520 = 7;
			break;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_618);
	if (GlobalFunc_188())
	{
		GlobalFunc_10698(&iVar0, -597.52f, -307.37f, 34.5f, 120.04f, 0, 0, 0, 1, 1, joaat("asterope"), 0, 145);
		PED::INSTANTLY_FILL_PED_POPULATION();
		GlobalFunc_4967(0, -1, 1);
	}
	else
	{
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
		PED::INSTANTLY_FILL_PED_POPULATION();
	}
	func_350(1, 1, 1);
}

void func_415()//Position - 0x33570
{
	while (!func_416())
	{
		SYSTEM::WAIT(0);
	}
}

int func_416()//Position - 0x33588
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_620))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_621))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_622))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_625))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_624))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_623))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_616))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_617))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("firetruk")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_619))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_906))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_908))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_907))
	{
		return 0;
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_616, 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_617, 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_619, 1);
	return 1;
}

void func_417()//Position - 0x3366E
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_604))
	{
		PED::DELETE_PED(&iLocal_604);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_603))
	{
		PED::DELETE_PED(&iLocal_603);
	}
	iLocal_81 = 0;
	while (!func_432(&Local_452))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_603 = Local_452.f_28[0];
	iLocal_604 = Local_452.f_28[1];
	GlobalFunc_6453(iLocal_603, Local_605);
}



void func_420()//Position - 0x3375F
{
	func_427(0);
	if (func_426())
	{
		func_425();
		func_424();
		if (GlobalFunc_116(0))
		{
			GlobalFunc_6685(0);
		}
		GlobalFunc_9621(64, 2, 0);
		PED::ADD_RELATIONSHIP_GROUP("PUSHED", &iLocal_866);
		PED::ADD_RELATIONSHIP_GROUP("DRIVERS", &iLocal_867);
		MISC::CLEAR_AREA_OF_VEHICLES(-633.4493f, -248.2691f, 35.87451f, 50f, 0, 0, 0, 0, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_910, 50f, 0, 0, 0, 0, 0);
		GlobalFunc_3041();
		func_239();
		iLocal_603 = Local_452.f_28[0];
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_603))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_603, 1);
		}
		iLocal_604 = Local_452.f_28[1];
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_604))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_604, 1);
		}
		GlobalFunc_173(&uLocal_700, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		GlobalFunc_173(&uLocal_700, 3, iLocal_603, "KERRY", 0, 1);
		iLocal_897 = MISC::GET_GAME_TIMER() + 3000;
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("firetruk"), 1);
		iLocal_521 = 0;
		iLocal_520 = 1;
	}
}




void func_424()//Position - 0x33A94
{
	Local_626.f_2 = iLocal_624;
	Local_626.f_4 = { -655.81f, -278.73f, 35.21f };
	Local_626.f_7 = 35f;
	Local_626.f_3 = iLocal_616;
	Local_634.f_2 = iLocal_622;
	Local_634.f_4 = { -591.7191f, -166.3491f, 37.8459f };
	Local_634.f_7 = 35f;
	Local_634.f_3 = iLocal_617;
	Local_642.f_2 = iLocal_620;
	Local_642.f_4 = { -651.4f, -153.68f, 36.95f };
	Local_642.f_7 = 217.44f;
	Local_642.f_3 = iLocal_619;
	Local_658.f_2 = iLocal_621;
	Local_658.f_4 = { -525.33f, -137.35f, 38.04f };
	Local_658.f_7 = 111.2f;
	Local_658.f_3 = iLocal_617;
	Local_674.f_2 = iLocal_622;
	Local_674.f_4 = { -683.3f, -238.03f, 36.63f };
	Local_674.f_7 = 29.79f;
	Local_674.f_3 = iLocal_619;
	Local_682.f_2 = iLocal_620;
	Local_682.f_4 = { -674.44f, -262.95f, 35.97f };
	Local_682.f_7 = 29.8f;
	Local_682.f_3 = iLocal_619;
	Local_666.f_2 = iLocal_620;
	Local_666.f_4 = { -644.56f, -155.68f, 37.32f };
	Local_666.f_7 = 208.31f;
	Local_666.f_3 = iLocal_619;
	Local_690.f_2 = iLocal_622;
	Local_690.f_4 = { -641.91f, -158.94f, 36.7f };
	Local_690.f_7 = 208.7f;
	Local_690.f_3 = iLocal_619;
}

void func_425()//Position - 0x33C1C
{
	Local_522[0 /*16*/].f_1 = iLocal_616;
	Local_522[0 /*16*/].f_5 = 65.71f;
	Local_522[0 /*16*/].f_2 = { -645.97f, -177.03f, 37f };
	Local_522[0 /*16*/].f_6 = { -643.84f, -181.83f, 36.69f };
	Local_522[0 /*16*/].f_9 = { -691.2f, -207.27f, 36.25f };
	Local_522[0 /*16*/].f_12 = 21;
	Local_522[0 /*16*/].f_13 = 0;
	Local_522[0 /*16*/].f_14 = 0;
	Local_522[0 /*16*/].f_15 = "avoid_rf";
	Local_522[1 /*16*/].f_1 = iLocal_616;
	Local_522[1 /*16*/].f_5 = -50f;
	Local_522[1 /*16*/].f_2 = { -643.92f, -135.89f, 37.84f };
	Local_522[1 /*16*/].f_6 = { -634.06f, -147.8f, 36.87f };
	Local_522[1 /*16*/].f_9 = { -623.98f, -162.83f, 36.85f };
	Local_522[1 /*16*/].f_12 = 28;
	Local_522[1 /*16*/].f_13 = 0;
	Local_522[1 /*16*/].f_14 = 0;
	Local_522[1 /*16*/].f_15 = "avoid_fr";
	Local_522[2 /*16*/].f_1 = iLocal_617;
	Local_522[2 /*16*/].f_5 = 5.73f;
	Local_522[2 /*16*/].f_2 = { -671.58f, -195.03f, 37.39f };
	Local_522[2 /*16*/].f_14 = 0;
	Local_522[4 /*16*/].f_1 = iLocal_617;
	Local_522[4 /*16*/].f_5 = -108.48f;
	Local_522[4 /*16*/].f_2 = { -632.18f, -154.89f, 37.83f };
	Local_522[4 /*16*/].f_13 = 0;
}

int func_426()//Position - 0x33DAF
{
	if ((STREAMING::HAS_MODEL_LOADED(iLocal_616) && STREAMING::HAS_MODEL_LOADED(iLocal_618)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 1;
	}
	return 0;
}

void func_427(bool bParam0)//Position - 0x33DDC
{
	HUD::REQUEST_ADDITIONAL_TEXT("NIG1CAU", 6);
	HUD::REQUEST_ADDITIONAL_TEXT("NIGEL1C", 0);
	STREAMING::REQUEST_MODEL(iLocal_616);
	STREAMING::REQUEST_MODEL(iLocal_618);
	if (bParam0)
	{
		while (!func_426())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_428(bool bParam0, bool bParam1)//Position - 0x33E19
{
	if (bParam0)
	{
		func_429(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_82(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_429(bool bParam0, int iParam1, int iParam2)//Position - 0x33E4C
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
			func_68(iParam1, iParam2, 1, 1);
		}
	}
}



int func_432(var uParam0)//Position - 0x33F6A
{
	int iVar0[2];
	int iVar3;
	char* sVar4;
	var uVar5;
	
	sVar4 = "rcmnigel1cnmt_1c";
	iVar0[0] = joaat("ig_kerrymcintosh");
	iVar0[1] = joaat("a_c_rottweiler");
	switch (iLocal_81)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -650.5558f, -217.0627f, 35.55435f };
			uParam0->f_17[1 /*3*/] = { -601.4099f, -300.3887f, 64.24574f };
			uParam0->f_24 = 35f;
			uParam0->f_27 = 1;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar4);
			iLocal_81 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
			{
				return 0;
			}
			iLocal_81 = 2;
			break;
		
		case 2:
			uParam0->f_28[0] = PED::CREATE_PED(26, iVar0[0], -626.87f, -268.85f, 38f, 121f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[0], 17, 1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[0], 1);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], 0);
			AUDIO::STOP_PED_SPEAKING(uParam0->f_28[0], 1);
			TASK::OPEN_SEQUENCE_TASK(&uVar5);
			TASK::TASK_PLAY_ANIM(0, sVar4, "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "dexy_stay_there", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "price_tag", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "such_a_good", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "this_looks", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "who_would", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uVar5, 1);
			TASK::CLOSE_SEQUENCE_TASK(uVar5);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uVar5);
			TASK::CLEAR_SEQUENCE_TASK(&uVar5);
			uParam0->f_28[1] = PED::CREATE_PED(26, iVar0[1], -627.4f, -267.12f, 38.23f, -59.95f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 132, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[1], 1);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}



void func_435()//Position - 0x342FB
{
	if (GlobalFunc_9159())
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1C_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("NIGEL_1C_SCENE");
		}
		func_78(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_ADDITIONAL_TEXT(6, 1);
		HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	}
	func_447();
	GlobalFunc_601(2, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("firetruk"), 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_436(&Local_452, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_436(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x34377
{
	GlobalFunc_6690(uParam0, iParam1);
	GlobalFunc_8620(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}











void func_447()//Position - 0x34575
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_866);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_867);
	if (HUD::DOES_BLIP_EXIST(uLocal_699))
	{
		HUD::REMOVE_BLIP(&uLocal_699);
	}
	GlobalFunc_132(&iLocal_603, 1, 0, 1);
	GlobalFunc_132(&iLocal_604, 1, 0, 1);
	GlobalFunc_132(&iLocal_614, 0, 0, 1);
	GlobalFunc_131(&iLocal_698);
	func_449(Local_634);
	func_449(Local_650);
	func_449(Local_626);
	func_449(Local_642);
	func_449(Local_658);
	func_449(Local_666);
	func_449(Local_674);
	func_449(Local_682);
	func_449(Local_690);
	func_448(0);
	func_448(1);
	func_448(2);
	func_448(4);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 0);
	STREAMING::REMOVE_ANIM_DICT(sLocal_906);
	STREAMING::REMOVE_ANIM_DICT(sLocal_909);
	STREAMING::REMOVE_ANIM_DICT(sLocal_907);
	STREAMING::REMOVE_ANIM_DICT(sLocal_908);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_895, sLocal_894);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_896, sLocal_894);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_893, sLocal_892);
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "NIG1C_COMET");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "NIG1C_COMET2");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "NIG1CEscort");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "NIG1C_FIRE");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_616, 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_617, 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_619, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_620);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_621);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_622);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_625);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_624);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_623);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_616);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_618);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_617);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_619);
}

void func_448(int iParam0)//Position - 0x346F8
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_522[iParam0 /*16*/]))
	{
		GlobalFunc_132(&(Local_522[iParam0 /*16*/]), 0, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_522[iParam0 /*16*/].f_1);
	}
}

void func_449(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x34729
{
	GlobalFunc_132(&(Param0.f_1), 1, 0, 1);
	GlobalFunc_131(&Param0);
}

























