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
	bool bLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	bool bLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	bool bLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	var uLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	float fLocal_61[11] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_73[11] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_85[11] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_97[11] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_109[11] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_121 = 0f;
	float fLocal_122 = 0f;
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	float fLocal_125[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_148[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_171[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_194[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_217[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_240[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_263[1] = { 0f };
	float fLocal_265[1] = { 0f };
	float fLocal_267[1] = { 0f };
	float fLocal_269[1] = { 0f };
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	float fLocal_273 = 0f;
	float fLocal_274 = 0f;
	float fLocal_275 = 0f;
	float fLocal_276 = 0f;
	float fLocal_277 = 0f;
	float fLocal_278 = 0f;
	float fLocal_279 = 0f;
	float fLocal_280 = 0f;
	float fLocal_281 = 0f;
	float fLocal_282 = 0f;
	float fLocal_283 = 0f;
	float fLocal_284 = 0f;
	float fLocal_285 = 0f;
	float fLocal_286 = 0f;
	float fLocal_287 = 0f;
	float fLocal_288 = 0f;
	float fLocal_289 = 0f;
	float fLocal_290 = 0f;
	float fLocal_291 = 0f;
	int iLocal_292[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_304[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_316[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_328[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_351[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_374[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_397[1] = { 0 };
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	struct<3> Local_416[11];
	struct<3> Local_450[1];
	struct<3> Local_454[22];
	struct<3> Local_521 = { 0, 0, 0 } ;
	struct<3> Local_524 = { 0, 0, 0 } ;
	struct<3> Local_527 = { 0, 0, 0 } ;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	struct<3> Local_536 = { 0, 0, 0 } ;
	struct<3> Local_539 = { 0, 0, 0 } ;
	struct<3> Local_542 = { 0, 0, 0 } ;
	struct<3> Local_545 = { 0, 0, 0 } ;
	char cLocal_548[64] = "";
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_577[1] = { 0 };
	int iLocal_579[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_617[5] = { 0, 0, 0, 0, 0 };
	int iLocal_623[1] = { 0 };
	int iLocal_625[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_648[1] = { 0 };
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	var uLocal_653 = 5;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = -1;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 1000;
	var uLocal_669 = 1000;
	var uLocal_670 = 0;
	int iLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	float fLocal_674 = 0f;
	float fLocal_675 = 0f;
	float fLocal_676 = 0f;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	int iLocal_693 = 0;
	int iLocal_694 = 0;
	int iLocal_695 = 0;
	int iLocal_696 = 0;
	int iLocal_697 = 0;
	int iLocal_698 = 0;
	bool bLocal_699 = 0;
	int iLocal_700 = 0;
	int iLocal_701 = 0;
	float fLocal_702 = 0f;
	int iLocal_703 = 0;
	int iLocal_704 = 0;
	int iLocal_705 = 0;
	int iLocal_706 = 0;
	int iLocal_707[5] = { 0, 0, 0, 0, 0 };
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	int iLocal_719[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_800 = { 0, 0, 0 } ;
	struct<3> Local_803 = { 0, 0, 0 } ;
	struct<3> Local_806 = { 0, 0, 0 } ;
	var uLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	var uLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	var uLocal_828 = 0;
	int iLocal_829 = 0;
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
	int iLocal_843[1] = { 0 };
	var uLocal_845 = 0;
	struct<3> Local_846 = { 0, 0, 0 } ;
	struct<3> Local_849 = { 0, 0, 0 } ;
	struct<65> Local_852[4];
	struct<65> Local_1113[5];
	struct<65> Local_1439[5];
	struct<18> Local_1765[3];
	struct<34> Local_1820[50];
	struct<34> Local_3521[5];
	var uLocal_3692[5] = { 0, 0, 0, 0, 0 };
	struct<34> Local_3698[3];
	struct<18> Local_3801[30];
	int iLocal_4342 = 0;
	struct<283> Local_4343[5];
	struct<10> Local_5759 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_5769 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_5779[5];
	struct<9> Local_5825 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_5834[26];
	struct<8> Local_6147 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	struct<8> Local_6159 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	struct<12> Local_6171[2];
	struct<12> Local_6196[2];
	struct<6> Local_6221 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_6227 = 0;
	var uLocal_6228 = 1092616192;
	var uLocal_6229 = 1101004800;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 3;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	int iLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 4;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 3;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	int iLocal_6257 = 0;
	int iLocal_6258 = 0;
	var uLocal_6259 = 0;
	int iLocal_6260 = 0;
	int iLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	int iLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	int iLocal_6269 = 0;
	int iLocal_6270 = 0;
	int iLocal_6271 = 0;
	int iLocal_6272 = 0;
	int iLocal_6273 = 0;
	int iLocal_6274 = 0;
	var uLocal_6275 = 0;
	int iLocal_6276 = 0;
	int iLocal_6277 = 0;
	int iLocal_6278 = 0;
	int iLocal_6279 = 0;
	int iLocal_6280 = 0;
	int iLocal_6281 = 0;
	int iLocal_6282 = 0;
	int iLocal_6283 = 0;
	var uLocal_6284[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_6301 = 0;
	char* sLocal_6302 = NULL;
	var uLocal_6303 = 0;
	int iLocal_6304 = 0;
	int iLocal_6305 = 0;
	float fLocal_6306 = 0f;
	int iLocal_6307 = 0;
	int iLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	bool bLocal_6314 = 0;
	int iLocal_6315 = 0;
	int iLocal_6316 = 0;
	int iLocal_6317 = 0;
	int iLocal_6318 = 0;
	int iLocal_6319 = 0;
	int iLocal_6320 = 0;
	int iLocal_6321 = 0;
	int iLocal_6322 = 0;
	bool bLocal_6323 = 0;
	int iLocal_6324 = 0;
	int iLocal_6325 = 0;
	int iLocal_6326 = 0;
	int iLocal_6327 = 0;
	int iLocal_6328 = 0;
	bool bLocal_6329 = 0;
	int iLocal_6330 = 0;
	int iLocal_6331 = 0;
	int iLocal_6332 = 0;
	int iLocal_6333 = 0;
	int iLocal_6334 = 0;
	int iLocal_6335 = 0;
	int iLocal_6336 = 0;
	int iLocal_6337 = 0;
	int iLocal_6338 = 0;
	int iLocal_6339 = 0;
	bool bLocal_6340 = 0;
	int iLocal_6341 = 0;
	int iLocal_6342 = 0;
	int iLocal_6343 = 0;
	int iLocal_6344[5] = { 0, 0, 0, 0, 0 };
	int iLocal_6350[2] = { 0, 0 };
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	int iLocal_6355[26] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_6382[26] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_6409[4] = { 0, 0, 0, 0 };
	int iLocal_6414 = 0;
	char* sLocal_6415 = NULL;
	int iLocal_6416 = 0;
	var uLocal_6417 = 2;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	int iLocal_6420 = 0;
	float fLocal_6421 = 0f;
	float fLocal_6422 = 0f;
	int iLocal_6423 = 0;
	int iLocal_6424 = 0;
	int iLocal_6425 = 0;
	int iLocal_6426 = 0;
	int iLocal_6427 = 0;
	int iLocal_6428 = 0;
	int iLocal_6429 = 0;
	int iLocal_6430 = 0;
	int iLocal_6431 = 0;
	int iLocal_6432 = 0;
	int iLocal_6433 = 0;
	int iLocal_6434 = 0;
	int iLocal_6435 = 0;
	int iLocal_6436 = 0;
	struct<3> Local_6437 = { 0, 0, 0 } ;
	struct<3> Local_6440 = { 0, 0, 0 } ;
	int iLocal_6443[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_6464 = 0;
	struct<3> Local_6465[20];
	struct<3> Local_6526 = { 0, 0, 0 } ;
	struct<3> Local_6529 = { 0, 0, 0 } ;
	int iLocal_6532 = 0;
	int iLocal_6533 = 0;
	int iLocal_6534 = 0;
	int iLocal_6535 = 0;
	int iLocal_6536 = 0;
	int iLocal_6537 = 0;
	var uLocal_6538 = 5;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	int iLocal_6544 = 0;
	int iLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	int iLocal_6549 = 0;
	int iLocal_6550 = 0;
	int iLocal_6551 = 0;
	int iLocal_6552 = 0;
	var uLocal_6553 = 0;
	int iLocal_6554 = 0;
	float fLocal_6555 = 0f;
	float fLocal_6556 = 0f;
	float fLocal_6557 = 0f;
	int iLocal_6558 = 0;
	int iLocal_6559 = 0;
	int iLocal_6560 = 0;
	int iLocal_6561 = 0;
	int iLocal_6562 = 0;
	int iLocal_6563 = 0;
	int iLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	int iLocal_6571 = 0;
	int iLocal_6572 = 0;
	char* sLocal_6573 = NULL;
	char* sLocal_6574 = NULL;
	char* sLocal_6575 = NULL;
	float fLocal_6576 = 0f;
	bool bLocal_6577 = 0;
	var uLocal_6578 = 4;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 0;
	var uLocal_6584 = 0;
	var uLocal_6585 = 0;
	var uLocal_6586 = 4;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = 4;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 4;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 4;
	var uLocal_6603 = 0;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 4;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 4;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	struct<10> Local_6622[16];
	var uLocal_6783 = 0;
	var uLocal_6784 = 0;
	var uLocal_6785 = 0;
	var uLocal_6786 = 0;
	int iLocal_6787 = 0;
	int iLocal_6788 = 0;
	struct<3> Local_6789 = { 0, 0, 0 } ;
	int iLocal_6792 = 0;
	struct<3> Local_6793[50];
	int iLocal_6944 = 0;
	struct<4> Local_6945[50];
	var uLocal_7146 = 0;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	int iLocal_7149 = 0;
	struct<126> Local_7150 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_7276 = 0;
	int iLocal_7277 = 0;
	int iLocal_7278 = 0;
	int iLocal_7279 = 0;
	int iLocal_7280 = 0;
	var uLocal_7281 = 0;
	int iLocal_7282 = 0;
	float fLocal_7283 = 0f;
	char* sLocal_7284 = NULL;
	int iLocal_7285 = 0;
	var uLocal_7286 = 0;
	int iLocal_7287 = 0;
	int iLocal_7288 = 0;
	int iLocal_7289 = 0;
	int iLocal_7290 = 0;
	int iLocal_7291 = 0;
	int iLocal_7292 = 0;
	int iLocal_7293 = 0;
	int iLocal_7294 = 0;
	int iLocal_7295 = 0;
	int iLocal_7296 = 0;
	int iLocal_7297[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_7308 = 0;
	int iLocal_7309 = 0;
	int iLocal_7310 = 0;
	int iLocal_7311 = 0;
	int iLocal_7312 = 0;
	int iLocal_7313 = 0;
	int iLocal_7314 = 0;
	int iLocal_7315 = 0;
	int iLocal_7316 = 0;
	int iLocal_7317 = 0;
	int iLocal_7318 = 0;
	int iLocal_7319 = 0;
	bool bLocal_7320 = 0;
	bool bLocal_7321 = 0;
	int iLocal_7322 = 0;
	int iLocal_7323 = 0;
	int iLocal_7324 = 0;
	int iLocal_7325 = 0;
	int iLocal_7326 = 0;
	int iLocal_7327 = 0;
	int iLocal_7328 = 0;
	int iLocal_7329 = 0;
	int iLocal_7330 = 0;
	int iLocal_7331 = 0;
	int iLocal_7332 = 0;
	int iLocal_7333 = 0;
	int iLocal_7334 = 0;
	int iLocal_7335 = 0;
	int iLocal_7336 = 0;
	int iLocal_7337 = 0;
	int iLocal_7338 = 0;
	int iLocal_7339 = 0;
	int iLocal_7340 = 0;
	int iLocal_7341 = 0;
	int iLocal_7342 = 0;
	int iLocal_7343 = 0;
	int iLocal_7344 = 0;
	int iLocal_7345 = 0;
	var uLocal_7346 = 0;
	int iLocal_7347 = 0;
	int iLocal_7348 = 0;
	int iLocal_7349 = 0;
	int iLocal_7350 = 0;
	int iLocal_7351 = 0;
	int iLocal_7352 = 0;
	int iLocal_7353 = 0;
	int iLocal_7354 = 0;
	int iLocal_7355 = 0;
	int iLocal_7356 = 0;
	struct<3> Local_7357 = { 0, 0, 0 } ;
	struct<3> Local_7360 = { 0, 0, 0 } ;
	int iLocal_7363 = 0;
	int iLocal_7364 = 0;
	int iLocal_7365 = 0;
	int iLocal_7366 = 0;
	int iLocal_7367 = 0;
	int iLocal_7368 = 0;
	int iLocal_7369 = 0;
	int iLocal_7370 = 0;
	int iLocal_7371 = 0;
	var uLocal_7372 = 0;
	var uLocal_7373 = 0;
	var uLocal_7374 = 0;
	var uLocal_7375 = 0;
	var uLocal_7376 = 0;
	int iLocal_7377 = 0;
	int iLocal_7378 = 0;
	struct<3> Local_7379 = { 0, 0, 0 } ;
	struct<3> Local_7382 = { 0, 0, 0 } ;
	int iLocal_7385 = 0;
	int iLocal_7386 = 0;
	int iLocal_7387 = 0;
	int iLocal_7388 = 0;
	int iLocal_7389 = 0;
	int iLocal_7390 = 0;
	int iLocal_7391 = 0;
	bool bLocal_7392 = 0;
	int iLocal_7393 = 0;
	int iLocal_7394 = 0;
	int iLocal_7395 = 0;
	int iLocal_7396 = 0;
	int iLocal_7397 = 0;
	int iLocal_7398 = 0;
	int iLocal_7399 = 0;
	int iLocal_7400 = 0;
	int iLocal_7401 = 0;
	int iLocal_7402 = 0;
	int iLocal_7403 = 0;
	int iLocal_7404 = 0;
	char* sLocal_7405 = NULL;
	int iLocal_7406 = 0;
	int iLocal_7407 = 0;
	int iLocal_7408 = 0;
	int iLocal_7409 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	bLocal_30 = true;
	bLocal_37 = true;
	bLocal_59 = true;
	fLocal_271 = 120f;
	fLocal_272 = 0f;
	fLocal_274 = 1f;
	fLocal_275 = 0f;
	fLocal_276 = 1f;
	fLocal_277 = 30f;
	fLocal_279 = 1f;
	fLocal_280 = 5f;
	fLocal_281 = 1f;
	fLocal_282 = 1f;
	fLocal_283 = 100f;
	fLocal_284 = 100f;
	fLocal_285 = 0f;
	fLocal_286 = 7000f;
	fLocal_287 = 0f;
	fLocal_288 = 0f;
	fLocal_289 = 0.3f;
	fLocal_290 = 0.5f;
	fLocal_291 = 50f;
	iLocal_402 = -1;
	iLocal_410 = -1;
	iLocal_411 = -1;
	iLocal_671 = 3;
	fLocal_674 = 80f;
	fLocal_675 = 140f;
	fLocal_676 = 180f;
	iLocal_682 = 1;
	iLocal_683 = 65;
	iLocal_684 = 49;
	iLocal_685 = 64;
	uLocal_689 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_690 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_702 = 360f;
	Local_800 = { -0.875f, -1.75f, -0.475f };
	Local_803 = { 0.875f, -1.75f, -0.475f };
	Local_806 = { 0f, 0f, 0f };
	Local_846 = { 1972.02f, 3817.854f, 33.424f };
	Local_849 = { 0f, 0f, -152.75f };
	sLocal_6302 = "t1actcam";
	bLocal_6314 = true;
	bLocal_6323 = true;
	sLocal_6415 = "Trev1ChaseDw";
	Local_6437 = { 1981.118f, 3817.199f, 31.3807f };
	Local_6440 = { 80.2901f, 3619.446f, 38.6997f };
	Local_6526 = { 0f, 10f, 5f };
	Local_6529 = { 64.9021f, 3695.381f, 38.7647f };
	fLocal_6556 = 1f;
	fLocal_6557 = 323.8188f;
	sLocal_6573 = "TrevOne";
	sLocal_6574 = "T1M1AUD";
	sLocal_6575 = "TREV1";
	Local_7357 = { 52.16f, 3661.33f, 38.77f };
	Local_7360 = { 52.16f, 3661.33f, 38.77f };
	iLocal_7386 = AUDIO::GET_SOUND_ID();
	MISC::SET_MISSION_FLAG(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
		{
			func_869();
		}
		GlobalFunc_5822(PLAYER::PLAYER_PED_ID(), 2);
		AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
		GlobalFunc_10632();
		func_852(0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_5769))
	{
		if (!PED::IS_PED_INJURED(Local_5769))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_5769, 0);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_5769, 0);
		}
	}
	iLocal_6246 = 0;
	iLocal_4342 = 0;
	while (bLocal_6314)
	{
		RECORDING::_0x208784099002BC30("M_MrPhilips", 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_5759))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iLocal_6571, joaat("COP")) != 5)
					{
						if (!PED::IS_PED_INJURED(Local_5759))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5759, 0);
						}
						if (!PED::IS_PED_INJURED(Local_5769))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5769, 0);
						}
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6571, joaat("COP"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_6571);
					}
				}
				else if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iLocal_6571, joaat("COP")) != 255)
				{
					if (!PED::IS_PED_INJURED(Local_5759))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5759, 1);
					}
					if (!PED::IS_PED_INJURED(Local_5769))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5769, 1);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_6571, joaat("COP"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("COP"), iLocal_6571);
				}
			}
			if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
			{
				func_869();
			}
		}
		if (iLocal_6246 > 0)
		{
			if (iLocal_6246 == 1)
			{
				VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
			}
			if (iLocal_6246 == 4)
			{
				VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
			if (iLocal_6246 > 4 && iLocal_6246 < 8)
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.4f);
			}
			if (iLocal_6246 == 8)
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
			}
		}
		func_851();
		switch (iLocal_6246)
		{
			case 0:
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(24.5298f, 3590.733f, 0f, 147.1179f, 3772.426f, 100f, 0, 1);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(5.9328f, 3682.41f, 0f, 110.0308f, 3801.651f, 100f, 0, 1);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(24.5298f, 3590.733f, 0f, 147.1179f, 3772.426f, 100f);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(5.9328f, 3682.41f, 0f, 110.0308f, 3801.651f, 100f);
				Global_91351.f_2161 = { GlobalFunc_2247(213, 0) };
				if (GlobalFunc_Is_Mission_Retry())
				{
					iLocal_716 = GlobalFunc_2284(2);
					if (iLocal_716 != 0 && iLocal_716 != joaat("weapon_unarmed"))
					{
						WEAPON::REQUEST_WEAPON_ASSET(iLocal_716, 31, 0);
					}
					if (GlobalFunc_2284(2) != joaat("weapon_unarmed") && GlobalFunc_2284(2) != 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), GlobalFunc_2284(2), 0))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), GlobalFunc_2284(2), 1);
							}
						}
					}
					else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0), 1);
					}
					if (Global_84544 == 1)
					{
						func_840();
						iLocal_6316 = GlobalFunc_Get_Mission_Fail_Checkpoint();
						iLocal_6316++;
						iLocal_6315 = 0;
						if (iLocal_6316 < 10)
						{
							if (iLocal_6316 == 0)
							{
								GlobalFunc_5116(1995.97f, 3829.84f, 32.27f, 100.81f, 1, 0);
								iLocal_6246 = 1;
							}
							else if (iLocal_6316 == 1)
							{
								GlobalFunc_5116(2016.42f, 4642.44f, 40.1808f, 143.064f, 1, 0);
								iLocal_6246 = 2;
							}
							else if (iLocal_6316 == 2)
							{
								GlobalFunc_5116(58.4031f, 3630.96f, 38.7482f, 20.8123f, 1, 0);
								iLocal_6246 = 4;
							}
							else if (iLocal_6316 == 3)
							{
								GlobalFunc_5116(80.4212f, 3607.046f, 38.6962f, 189.0543f, 1, 0);
								iLocal_6246 = 5;
							}
							else if (iLocal_6316 == 4)
							{
								GlobalFunc_5116(-11.4373f, 3007.784f, 40.6016f, 180.4163f, 1, 0);
								iLocal_6246 = 6;
							}
							else if (iLocal_6316 == 5)
							{
								GlobalFunc_5116(-45.8227f, 3094.887f, 26.0223f, 23.9401f, 1, 0);
								iLocal_6246 = 7;
							}
							else if (iLocal_6316 == 6)
							{
								GlobalFunc_5116(-6.8119f, 3039.899f, 39.677f, 287.4757f, 1, 0);
								iLocal_6246 = 8;
							}
							else if (iLocal_6316 == 7)
							{
								GlobalFunc_5116(1952.23f, 3787.396f, 31.2922f, 27.2205f, 1, 0);
								iLocal_6246 = 9;
							}
						}
						else
						{
							iLocal_6246 = 10;
						}
					}
					else
					{
						func_840();
						iLocal_6316 = GlobalFunc_Get_Mission_Fail_Checkpoint();
						iLocal_6315 = 0;
						if (iLocal_6316 == 0)
						{
							GlobalFunc_5116(1995.97f, 3829.84f, 32.27f, 100.81f, 1, 0);
							iLocal_6246 = 1;
						}
						else if (iLocal_6316 == 1)
						{
							GlobalFunc_5116(1965.354f, 4646.601f, 39.8213f, 99.27f, 1, 0);
							iLocal_6246 = 3;
						}
						else if (iLocal_6316 == 2)
						{
							GlobalFunc_5116(58.4031f, 3630.96f, 38.7482f, 20.8123f, 1, 0);
							iLocal_6246 = 4;
						}
						else if (iLocal_6316 == 3)
						{
							GlobalFunc_5116(80.4212f, 3607.046f, 38.6962f, 189.0543f, 1, 0);
							iLocal_6246 = 5;
						}
						else if (iLocal_6316 == 4)
						{
							GlobalFunc_5116(-11.4373f, 3007.784f, 40.6016f, 180.4163f, 1, 0);
							iLocal_6246 = 6;
						}
						else if (iLocal_6316 == 5)
						{
							GlobalFunc_5116(-45.8227f, 3094.887f, 26.0223f, 23.9401f, 1, 0);
							iLocal_6246 = 7;
						}
						else if (iLocal_6316 == 6)
						{
							GlobalFunc_5116(-6.8119f, 3039.899f, 39.677f, 287.4757f, 1, 0);
							iLocal_6246 = 8;
						}
					}
					func_824();
				}
				else
				{
					if (!GlobalFunc_Is_Mission_Retry())
					{
						func_777();
					}
					func_840();
				}
				break;
			
			case 1:
				if (func_768())
				{
					iLocal_6246 = 2;
				}
				break;
			
			case 2:
				if (func_760())
				{
					iLocal_6246 = 3;
				}
				break;
			
			case 3:
				if (func_714())
				{
					iLocal_6246 = 4;
				}
				break;
			
			case 4:
				if (func_613())
				{
					iLocal_6246 = 5;
				}
				break;
			
			case 5:
				if (func_595())
				{
					iLocal_6246 = 6;
				}
				break;
			
			case 6:
				if (func_571())
				{
					iLocal_6246 = 7;
				}
				break;
			
			case 7:
				if (func_556())
				{
					iLocal_6246 = 8;
				}
				break;
			
			case 8:
				if (func_501())
				{
					iLocal_6246 = 9;
				}
				break;
			
			case 9:
				if (func_96())
				{
					iLocal_6246 = 10;
				}
				break;
			
			case 10:
				func_93();
				break;
			
			case 12:
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_6147))
		{
			if (!iLocal_714)
			{
				GlobalFunc_504(Local_6147, 491);
				iLocal_714 = 1;
			}
		}
		else if (iLocal_714)
		{
			GlobalFunc_504(0, 491);
			iLocal_714 = 0;
		}
		if (iLocal_6246 == 4 || iLocal_6246 == 3)
		{
		}
		func_9();
		if (bLocal_6577)
		{
			func_852(1, 0);
		}
		if (iLocal_6246 > 6)
		{
		}
		func_7();
		func_1();
		SYSTEM::WAIT(0);
	}
	func_852(0, 0);
}

void func_1()//Position - 0x8CB
{
	if (!PED::IS_PED_INJURED(Local_5759))
	{
		if (iLocal_6246 == 1)
		{
			switch (iLocal_6536)
			{
				case 0:
					iLocal_6536++;
					break;
				
				case 1:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 0))
						{
							PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Local_5759, 1);
						}
					}
					iLocal_6536++;
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
		}
		else if (iLocal_6246 == 3)
		{
			switch (iLocal_6536)
			{
				case 0:
					if (!PED::IS_PED_GROUP_MEMBER(Local_5759, GlobalFunc_468()))
					{
						PED::SET_PED_AS_GROUP_MEMBER(Local_5759, GlobalFunc_468());
					}
					iLocal_6536++;
					break;
				
				case 1:
					break;
			}
		}
		else if (iLocal_6246 == 4)
		{
			switch (iLocal_6536)
			{
				case 0:
					if (HUD::DOES_BLIP_EXIST(Local_5759.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_5759.f_1));
					}
					if (PED::IS_PED_GROUP_MEMBER(Local_5759, GlobalFunc_468()))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_5759);
					}
					PED::SET_PED_ACCURACY(Local_5759, 100);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5759, 3, 0);
					iLocal_6536++;
					break;
				
				case 1:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						func_5(Local_5759);
						if (PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 0))
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_6147) < 2f)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5759, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_5759, 3, 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_5759, 1);
								PED::SET_PED_TO_LOAD_COVER(Local_5759, 1);
								PED::REMOVE_PED_FROM_GROUP(Local_5759);
								PED::SET_PED_ACCURACY(Local_5759, 10);
								ENTITY::SET_ENTITY_HEALTH(Local_5759, 800);
								PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_5759, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_5759, 0, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_5759, 11, 1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_5759, ENTITY::GET_ENTITY_COORDS(Local_6147, 0), 6f, 0, 0);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5759, iLocal_6571);
								PED::SET_PED_CAN_BE_TARGETTED(Local_5759, 0);
								PED::SET_PED_CONFIG_FLAG(Local_5759, 118, 1);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6572, 1862763509);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_6571, iLocal_6571);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_6571, 1862763509);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_5759, 0, iLocal_6572);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5759, 0);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6571, iLocal_6572);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_6572, iLocal_6571);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_5759, 36, 1);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 320);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
								TASK::TASK_PERFORM_SEQUENCE(Local_5759, uLocal_6565);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
								iLocal_6536++;
							}
						}
						else
						{
							iLocal_6536++;
						}
					}
					break;
				
				case 2:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5759, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_5759, 3, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_5759, 12, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_5759, 0, 1);
						PED::SET_PED_COMBAT_MOVEMENT(Local_5759, 1);
						PED::SET_PED_ACCURACY(Local_5759, 10);
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_5759, 0))
						{
							func_5(Local_5759);
							if (!HUD::DOES_BLIP_EXIST(Local_5759.f_1))
							{
								Local_5759.f_1 = HUD::ADD_BLIP_FOR_ENTITY(Local_5759);
								HUD::SET_BLIP_AS_FRIENDLY(Local_5759.f_1, 1);
								HUD::SET_BLIP_SCALE(Local_5759.f_1, 0.5f);
							}
							iLocal_6536++;
						}
					}
					break;
			}
		}
		else if (iLocal_6246 == 6)
		{
			switch (iLocal_6536)
			{
				case 0:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 0))
						{
							if (!PED::IS_PED_GROUP_MEMBER(Local_5759, GlobalFunc_468()))
							{
								PED::SET_PED_AS_GROUP_MEMBER(Local_5759, GlobalFunc_468());
							}
							TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_6147, 8f, 0f, 0f), 2f, 20000, 0.25f, 0, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
							TASK::TASK_PERFORM_SEQUENCE(Local_5759, uLocal_6565);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
						}
					}
					iLocal_6536++;
					break;
				
				case 1:
					break;
			}
		}
		else if (iLocal_6246 == 7)
		{
			switch (iLocal_6536)
			{
				case 0:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_GROUP_MEMBER(Local_5759, GlobalFunc_468()))
							{
								PED::SET_PED_AS_GROUP_MEMBER(Local_5759, GlobalFunc_468());
							}
							iLocal_6536++;
						}
					}
					break;
				
				case 1:
					break;
				}
			}
	}
	if (!PED::IS_PED_INJURED(Local_5769))
	{
		if (iLocal_6246 == 1)
		{
			switch (iLocal_6537)
			{
				case 0:
					iLocal_6537++;
					break;
				
				case 1:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
							{
								PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Local_5769, 1);
							}
						}
					}
					iLocal_6537++;
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
		}
		else if (iLocal_6246 == 3)
		{
			switch (iLocal_6537)
			{
				case 0:
					if (!PED::IS_PED_GROUP_MEMBER(Local_5769, GlobalFunc_468()))
					{
						PED::SET_PED_AS_GROUP_MEMBER(Local_5769, GlobalFunc_468());
					}
					iLocal_6537++;
					break;
				
				case 1:
					break;
			}
		}
		else if (iLocal_6246 == 4)
		{
			switch (iLocal_6537)
			{
				case 0:
					if (HUD::DOES_BLIP_EXIST(Local_5769.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_5769.f_1));
					}
					if (PED::IS_PED_GROUP_MEMBER(Local_5769, GlobalFunc_468()))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_5769);
					}
					PED::SET_PED_ACCURACY(Local_5769, 100);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5769, 3, 0);
					TASK::CLEAR_PED_TASKS(Local_5769);
					iLocal_6537++;
					break;
				
				case 1:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						func_5(Local_5769);
						PED::REMOVE_PED_FROM_GROUP(Local_5769);
						if (PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_6147) < 2f)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5769, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_5769, 3, 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_5769, 1);
								PED::SET_PED_TO_LOAD_COVER(Local_5769, 1);
								PED::REMOVE_PED_FROM_GROUP(Local_5769);
								PED::SET_PED_ACCURACY(Local_5769, 1);
								ENTITY::SET_ENTITY_HEALTH(Local_5769, 800);
								PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_5769, 0);
								PED::SET_PED_CAN_BE_TARGETTED(Local_5769, 0);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5769, iLocal_6571);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_5769, 0, 1);
								PED::SET_PED_CONFIG_FLAG(Local_5769, 118, 1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_5769, ENTITY::GET_ENTITY_COORDS(Local_6147, 0), 8f, 0, 0);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6572, 1862763509);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_6571, iLocal_6571);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_6571, 1862763509);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6571, iLocal_6572);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_6572, iLocal_6571);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5769, 0);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_5769, 0, iLocal_6572);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_5769, 36, 1);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 1000, 320);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
								TASK::TASK_PERFORM_SEQUENCE(Local_5769, uLocal_6565);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
								iLocal_6537++;
							}
						}
						else
						{
							iLocal_6537++;
						}
					}
					break;
				
				case 2:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5769, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_5769, 3, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_5769, 13, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_5769, 30, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_5769, 0, 1);
						PED::SET_PED_ACCURACY(Local_5769, 25);
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_5769, 0))
						{
							func_5(Local_5769);
							if (!PED::IS_PED_INJURED(Local_5769))
							{
								if (!HUD::DOES_BLIP_EXIST(Local_5769.f_1))
								{
									Local_5769.f_1 = GlobalFunc_6797(Local_5769, 0, 24);
									HUD::SET_BLIP_AS_FRIENDLY(Local_5769.f_1, 1);
								}
							}
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_6571, 1862763509);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_6571);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_6147, 0, iLocal_6571);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_6147, 0, iLocal_6572);
							VEHICLE::SET_VEHICLE_STRONG(Local_6147, 1);
							iLocal_6537++;
						}
					}
					break;
			}
		}
		else if (iLocal_6246 == 6)
		{
			switch (iLocal_6537)
			{
				case 0:
					break;
				
				case 1:
					break;
			}
		}
		else if (iLocal_6246 == 7)
		{
			switch (iLocal_6537)
			{
				case 0:
					break;
				
				case 1:
					break;
				}
			}
	}
}




void func_5(int iParam0)//Position - 0x1189
{
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iParam0, 1, 1, 1, 0);
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_pumpshotgun"), 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_pumpshotgun"), 1);
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_assaultrifle"), 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_assaultrifle"), 1);
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_smg"), 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_smg"), 1);
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_grenadelauncher"), 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_grenadelauncher"), 1);
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_heavysniper"), 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_heavysniper"), 1);
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_combatpistol"), 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_combatpistol"), 1);
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_pistol"), 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_pistol"), 1);
	}
}


void func_7()//Position - 0x127A
{
	if (iLocal_6246 == 3)
	{
		switch (iLocal_6534)
		{
			case 0:
				iLocal_6558 = 0;
				while (iLocal_6558 <= 3)
				{
					if (!PED::IS_PED_INJURED(Local_852[iLocal_6558 /*65*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852[iLocal_6558 /*65*/], 1);
					}
					iLocal_6558++;
				}
				iLocal_6534++;
				break;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6159))
			{
				if (iLocal_6558 == 1)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_6159.f_1))
					{
						Local_6159.f_1 = GlobalFunc_6783(Local_6159, 0, 0);
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(Local_6159.f_1))
			{
				HUD::REMOVE_BLIP(&(Local_6159.f_1));
			}
			if (!PED::IS_PED_INJURED(Local_852[0 /*65*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_852[0 /*65*/], 0);
			}
			if (!PED::IS_PED_INJURED(Local_852[1 /*65*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_852[1 /*65*/], 0);
			}
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_6171[0 /*12*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_6171[0 /*12*/].f_1));
			}
			if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_852[2 /*65*/], 0);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_852[2 /*65*/], Local_6171[0 /*12*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_6171[0 /*12*/].f_1))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_852[2 /*65*/], 0);
					HUD::REMOVE_BLIP(&(Local_6171[0 /*12*/].f_1));
				}
			}
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[1 /*12*/], 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_6171[1 /*12*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_6171[1 /*12*/].f_1));
			}
			if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_852[3 /*65*/], 0);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_852[3 /*65*/], Local_6171[1 /*12*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_6171[1 /*12*/].f_1))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_852[3 /*65*/], 0);
					HUD::REMOVE_BLIP(&(Local_6171[1 /*12*/].f_1));
				}
			}
		}
	}
}


void func_9()//Position - 0x1485
{
	if (iLocal_6246 != 12 && iLocal_6246 != 11)
	{
		if (bLocal_699)
		{
			if (bLocal_6577 == 0)
			{
				if (func_90(Local_6147))
				{
					if (!func_89("TRV1_FAIL"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
						{
							func_88("TRV1_FAIL", 1);
						}
					}
					func_31(7);
				}
			}
			if (iLocal_6246 < 2)
			{
				if ((((((ENTITY::DOES_ENTITY_EXIST(Local_6171[0 /*12*/]) && ENTITY::DOES_ENTITY_EXIST(Local_6171[1 /*12*/])) && ENTITY::DOES_ENTITY_EXIST(Local_852[0 /*65*/])) && ENTITY::DOES_ENTITY_EXIST(Local_852[1 /*65*/])) && ENTITY::DOES_ENTITY_EXIST(Local_852[2 /*65*/])) && ENTITY::DOES_ENTITY_EXIST(Local_852[3 /*65*/])) && ENTITY::DOES_ENTITY_EXIST(Local_6159))
				{
					if ((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_6171[0 /*12*/], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_6171[1 /*12*/], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_852[0 /*65*/], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_852[1 /*65*/], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_852[2 /*65*/], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_852[3 /*65*/], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_6159, PLAYER::PLAYER_PED_ID(), 1))
					{
						if (Local_852[0 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_852[0 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_852[0 /*65*/], 1, 1);
								TASK::TASK_COMBAT_PED(Local_852[0 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_852[0 /*65*/].f_24 = 99;
							}
						}
						if (Local_852[1 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_852[1 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_852[1 /*65*/], 1, 1);
								TASK::TASK_COMBAT_PED(Local_852[1 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_852[1 /*65*/].f_24 = 99;
							}
						}
						if (Local_852[2 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_852[2 /*65*/], 1, 1);
								TASK::TASK_COMBAT_PED(Local_852[2 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_852[2 /*65*/].f_24 = 99;
							}
						}
						if (Local_852[3 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_852[3 /*65*/], 1, 1);
								TASK::TASK_COMBAT_PED(Local_852[3 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_852[3 /*65*/].f_24 = 99;
							}
						}
						if (!func_89("TRV1_FAIL"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
							{
								func_88("TRV1_FAIL", 1);
							}
						}
						func_31(13);
					}
				}
				if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[1 /*12*/], 0)) && !PED::IS_PED_INJURED(Local_852[0 /*65*/])) && !PED::IS_PED_INJURED(Local_852[1 /*65*/])) && !PED::IS_PED_INJURED(Local_852[2 /*65*/])) && !PED::IS_PED_INJURED(Local_852[3 /*65*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
				{
					if (((((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_6171[0 /*12*/]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_6171[1 /*12*/])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_852[0 /*65*/])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_852[1 /*65*/])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_852[2 /*65*/])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_852[3 /*65*/]))
					{
						if (Local_852[0 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_852[0 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_852[0 /*65*/], 1, 1);
								TASK::TASK_COMBAT_PED(Local_852[0 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_852[0 /*65*/].f_24 = 99;
							}
						}
						if (Local_852[1 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_852[1 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_852[1 /*65*/], 1, 1);
								TASK::TASK_COMBAT_PED(Local_852[1 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_852[1 /*65*/].f_24 = 99;
							}
						}
						if (Local_852[2 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_852[2 /*65*/], 1, 1);
								TASK::TASK_COMBAT_PED(Local_852[2 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_852[2 /*65*/].f_24 = 99;
							}
						}
						if (Local_852[3 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_852[3 /*65*/], 1, 1);
								TASK::TASK_COMBAT_PED(Local_852[3 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_852[3 /*65*/].f_24 = 99;
							}
						}
						if (!func_89("TRV1_FAIL"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
							{
								func_88("TRV1_FAIL", 1);
							}
						}
						func_31(13);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6159, 1))
					{
						if (!func_89("TRV1_FAIL"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
							{
								func_88("TRV1_FAIL", 1);
							}
						}
						func_31(13);
					}
				}
				if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(1983.11f, 4658.885f, 38.2422f, 1935.873f, 4626.833f, 56.16904f, 59.5f, joaat("weapon_grenade"), 0) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(1983.11f, 4658.885f, 38.2422f, 1935.873f, 4626.833f, 56.16904f, 59.5f, joaat("weapon_smokegrenade"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(1983.11f, 4658.885f, 38.2422f, 1935.873f, 4626.833f, 56.16904f, 59.5f, joaat("weapon_stickybomb"), 0))
				{
					if (Local_852[0 /*65*/].f_24 != 99)
					{
						if (!PED::IS_PED_INJURED(Local_852[0 /*65*/]))
						{
							ENTITY::DETACH_ENTITY(Local_852[0 /*65*/], 1, 1);
							TASK::TASK_COMBAT_PED(Local_852[0 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_852[0 /*65*/].f_24 = 99;
						}
					}
					if (Local_852[1 /*65*/].f_24 != 99)
					{
						if (!PED::IS_PED_INJURED(Local_852[1 /*65*/]))
						{
							ENTITY::DETACH_ENTITY(Local_852[1 /*65*/], 1, 1);
							TASK::TASK_COMBAT_PED(Local_852[1 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_852[1 /*65*/].f_24 = 99;
						}
					}
					if (Local_852[2 /*65*/].f_24 != 99)
					{
						if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
						{
							ENTITY::DETACH_ENTITY(Local_852[2 /*65*/], 1, 1);
							TASK::TASK_COMBAT_PED(Local_852[2 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_852[2 /*65*/].f_24 = 99;
						}
					}
					if (Local_852[3 /*65*/].f_24 != 99)
					{
						if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
						{
							ENTITY::DETACH_ENTITY(Local_852[3 /*65*/], 1, 1);
							TASK::TASK_COMBAT_PED(Local_852[3 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_852[3 /*65*/].f_24 = 99;
						}
					}
					if (!func_89("TRV1_FAIL"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
						{
							func_88("TRV1_FAIL", 1);
						}
					}
					func_31(13);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_6171[0 /*12*/]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_6171[1 /*12*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[1 /*12*/], 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_6171[0 /*12*/], 1) < 10f || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_6171[1 /*12*/], 1) < 10f)
										{
											if (Local_852[0 /*65*/].f_24 != 99)
											{
												if (!PED::IS_PED_INJURED(Local_852[0 /*65*/]))
												{
													ENTITY::DETACH_ENTITY(Local_852[0 /*65*/], 1, 1);
													TASK::TASK_COMBAT_PED(Local_852[0 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
													Local_852[0 /*65*/].f_24 = 99;
												}
											}
											if (Local_852[1 /*65*/].f_24 != 99)
											{
												if (!PED::IS_PED_INJURED(Local_852[1 /*65*/]))
												{
													ENTITY::DETACH_ENTITY(Local_852[1 /*65*/], 1, 1);
													TASK::TASK_COMBAT_PED(Local_852[1 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
													Local_852[1 /*65*/].f_24 = 99;
												}
											}
											if (Local_852[2 /*65*/].f_24 != 99)
											{
												if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
												{
													ENTITY::DETACH_ENTITY(Local_852[2 /*65*/], 1, 1);
													TASK::TASK_COMBAT_PED(Local_852[2 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
													Local_852[2 /*65*/].f_24 = 99;
												}
											}
											if (Local_852[3 /*65*/].f_24 != 99)
											{
												if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
												{
													ENTITY::DETACH_ENTITY(Local_852[3 /*65*/], 1, 1);
													TASK::TASK_COMBAT_PED(Local_852[3 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
													Local_852[3 /*65*/].f_24 = 99;
												}
											}
											if (!func_89("TRV1_FAIL"))
											{
												if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
												{
													func_88("TRV1_FAIL", 1);
												}
											}
											func_31(13);
										}
									}
								}
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_6171[0 /*12*/], 1) < 30f)
								{
									if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
									{
										if (!func_89("TRV1_FAIL"))
										{
											if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
											{
												func_88("TRV1_FAIL", 1);
											}
										}
										func_31(13);
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_6246 > 0)
			{
				if (bLocal_6577 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_5759))
					{
						if (!PED::IS_PED_INJURED(Local_5759))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5759, 0), 1) > 250f)
							{
								if (!func_89("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_88("TRV1_FAIL", 1);
									}
								}
								func_31(4);
							}
						}
						else if (iLocal_6317 == 0 && bLocal_6577 == 0)
						{
							if (!func_89("TRV1_FAIL"))
							{
								if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
								{
									func_88("TRV1_FAIL", 1);
								}
							}
							func_31(3);
						}
					}
				}
			}
			if (iLocal_6246 < 6)
			{
				if (bLocal_6577 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_5769) && ENTITY::DOES_ENTITY_EXIST(Local_5759))
					{
						if (PED::IS_PED_INJURED(Local_5769) && PED::IS_PED_INJURED(Local_5759))
						{
							if (iLocal_6317 == 0 && bLocal_6577 == 0)
							{
								if (!func_89("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_88("TRV1_FAIL", 1);
									}
								}
								func_31(6);
							}
						}
						else if (iLocal_6246 != 6)
						{
							if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5769, 0), 1) > 220f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5759, 0), 1) > 200f) || ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5769, 0), 1) > 200f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5759, 0), 1) > 220f) && !func_89("WADE LEAVE")))
							{
								if (!func_89("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_88("TRV1_FAIL", 1);
									}
								}
								func_31(5);
							}
							else
							{
								if (!PED::IS_PED_INJURED(Local_5759))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5759, 0), 1) > 250f)
									{
										if (!func_89("TRV1_FAIL"))
										{
											if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
											{
												func_88("TRV1_FAIL", 1);
											}
										}
										func_31(4);
									}
								}
								else
								{
									if (!func_89("TRV1_FAIL"))
									{
										if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
										{
											func_88("TRV1_FAIL", 1);
										}
									}
									func_31(3);
								}
								if (!PED::IS_PED_INJURED(Local_5769))
								{
									if (!func_89("WADE LEAVE"))
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5769, 0), 1) > 250f)
										{
											if (!func_89("TRV1_FAIL"))
											{
												if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
												{
													func_88("TRV1_FAIL", 1);
												}
											}
											func_31(2);
										}
									}
								}
								else
								{
									if (!func_89("TRV1_FAIL"))
									{
										if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
										{
											func_88("TRV1_FAIL", 1);
										}
									}
									func_31(1);
								}
							}
						}
						else if (iLocal_6561 > 6)
						{
							if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5769, 0), 1) > 220f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5759, 0), 1) > 200f) || ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5769, 0), 1) > 200f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5759, 0), 1) > 220f) && !func_89("WADE LEAVE")))
							{
								if (!func_89("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_88("TRV1_FAIL", 1);
									}
								}
								func_31(5);
							}
							else
							{
								if (!PED::IS_PED_INJURED(Local_5759))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5759, 0), 1) > 250f)
									{
										if (!func_89("TRV1_FAIL"))
										{
											if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
											{
												func_88("TRV1_FAIL", 1);
											}
										}
										func_31(4);
									}
								}
								else
								{
									if (!func_89("TRV1_FAIL"))
									{
										if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
										{
											func_88("TRV1_FAIL", 1);
										}
									}
									func_31(3);
								}
								if (!PED::IS_PED_INJURED(Local_5769))
								{
									if (!func_89("WADE LEAVE"))
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5769, 0), 1) > 250f)
										{
											if (!func_89("TRV1_FAIL"))
											{
												if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
												{
													func_88("TRV1_FAIL", 1);
												}
											}
											func_31(2);
										}
									}
								}
								else
								{
									if (!func_89("TRV1_FAIL"))
									{
										if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
										{
											func_88("TRV1_FAIL", 1);
										}
									}
									func_31(1);
								}
							}
						}
						else
						{
							if (PED::IS_PED_INJURED(Local_5759))
							{
								if (!func_89("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_88("TRV1_FAIL", 1);
									}
								}
								func_31(3);
							}
							if (PED::IS_PED_INJURED(Local_5769))
							{
								if (!func_89("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_88("TRV1_FAIL", 1);
									}
								}
								func_31(1);
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_5759))
					{
						if (!PED::IS_PED_INJURED(Local_5759))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5759, 0), 1) > 250f)
							{
								if (!func_89("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_88("TRV1_FAIL", 1);
									}
								}
								func_31(4);
							}
						}
						else if (iLocal_6317 == 0 && bLocal_6577 == 0)
						{
							if (!func_89("TRV1_FAIL"))
							{
								if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
								{
									func_88("TRV1_FAIL", 1);
								}
							}
							func_31(3);
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_5759))
			{
				if (!PED::IS_PED_INJURED(Local_5759))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5759, 0), 1) > 250f)
					{
						if (!func_89("TRV1_FAIL"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
							{
								func_88("TRV1_FAIL", 1);
							}
						}
						func_31(4);
					}
				}
				else if (iLocal_6317 == 0 && bLocal_6577 == 0)
				{
					if (!func_89("TRV1_FAIL"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
						{
							func_88("TRV1_FAIL", 1);
						}
					}
					func_31(3);
				}
			}
			if (iLocal_6246 == 3)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_6159, 0), 1) > 260f)
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_6159, -57.91199f, 3656.893f, 65.65813f, 146.75f, 65.25f, 27.25f, 0, 1, 0))
						{
							if (HUD::DOES_BLIP_EXIST(Local_6159.f_1))
							{
								HUD::REMOVE_BLIP(&(Local_6159.f_1));
							}
							if (iLocal_816 == 0)
							{
								GlobalFunc_4956();
								if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_CFAIL", 7, 0, 0, 0))
								{
									iLocal_816 = 1;
									iLocal_6552 = MISC::GET_GAME_TIMER();
								}
							}
							else if (GlobalFunc_588(&iLocal_6552, 2000))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
								func_31(11);
							}
						}
					}
				}
				if ((PED::IS_PED_INJURED(Local_852[0 /*65*/]) && PED::IS_PED_INJURED(Local_852[2 /*65*/])) && PED::IS_PED_INJURED(Local_852[3 /*65*/]))
				{
					if (iLocal_816 == 0)
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_CFAIL", 7, 0, 0, 0))
						{
							iLocal_816 = 1;
							iLocal_6552 = MISC::GET_GAME_TIMER();
						}
					}
					else if (GlobalFunc_588(&iLocal_6552, 2000))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
						func_31(9);
					}
				}
				if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0)) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[1 /*12*/], 0))
				{
					if (iLocal_816 == 0)
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_CFAIL", 7, 0, 0, 0))
						{
							iLocal_816 = 1;
							iLocal_6552 = MISC::GET_GAME_TIMER();
						}
					}
					else if (GlobalFunc_588(&iLocal_6552, 2000))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
						func_31(12);
					}
				}
			}
			if (iLocal_6246 == 6)
			{
				if (iLocal_6561 == 10)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 4.003344f, 2990.984f, 61.9202f, -63.75819f, 3131.932f, 17.69805f, 39.25f, 0, 1, 0))
					{
						if (!func_89("TRV1_FAIL"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
							{
								func_88("TRV1_FAIL", 1);
							}
						}
						func_31(17);
					}
				}
			}
			if (iLocal_6246 == 6)
			{
				if (iLocal_6561 == 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6564))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_6564, -17.11758f, 3015.451f, 48.26401f, -55.7696f, 3129.688f, 23.96065f, 30.5f, 0, 1, 0))
							{
								func_31(17);
							}
						}
					}
				}
			}
		}
	}
}






















void func_31(int iParam0)//Position - 0x2DF2
{
	char* sVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
	GlobalFunc_5822(PLAYER::PLAYER_PED_ID(), 2);
	switch (iParam0)
	{
		case 0:
			sVar0 = "M_FAIL";
			break;
		
		case 8:
			sVar0 = "TRV_FAIL4";
			break;
		
		case 7:
			sVar0 = "TRV_FAIL4";
			break;
		
		case 3:
			sVar0 = "TRV_FAIL2";
			break;
		
		case 4:
			sVar0 = "TRV_FAIL3";
			break;
		
		case 1:
			sVar0 = "TRV_FAIL10";
			break;
		
		case 2:
			sVar0 = "TRV_FAIL11";
			break;
		
		case 5:
			sVar0 = "TRV_BOTH_LEFT";
			break;
		
		case 6:
			sVar0 = "TRV_BOTH_LEFT";
			break;
		
		case 10:
			sVar0 = "TRV_FAIL6";
			break;
		
		case 12:
			sVar0 = "TRV_FAIL7";
			break;
		
		case 9:
			sVar0 = "TRV_FAIL9";
			break;
		
		case 14:
			sVar0 = "TRV_TPFAIL";
			break;
		
		case 13:
			sVar0 = "TRV_FAIL12";
			break;
		
		case 11:
			sVar0 = "TRV_FAIL13";
			break;
		
		case 15:
			sVar0 = "TRV_ORTL";
			break;
		
		case 16:
			sVar0 = "TRV_FAIL14";
			break;
		
		case 17:
			sVar0 = "TRV_ORFF";
			break;
		
		default:
			GlobalFunc_164("M_FAIL", 7500, 0);
			break;
	}
	if (!func_89("TRV1_FAIL"))
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
		{
			func_88("TRV1_FAIL", 1);
		}
	}
	GlobalFunc_10835(sVar0);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		fVar5 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar1) == GlobalFunc_4931(2, 0))
					{
						GlobalFunc_5166(Var2, fVar5);
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar1, GlobalFunc_4931(2, 0)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, -1))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, -1);
					}
				}
			}
		}
	}
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_10944(2, 0);
	func_852(0, 0);
	bLocal_6577 = true;
}

























































void func_88(char* sParam0, bool bParam1)//Position - 0x8E6F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = (iLocal_719 - 1);
	if (bParam1)
	{
		bVar2 = false;
		while (iVar1 > -1 && !bVar2)
		{
			if (iLocal_719[iVar1] == 0)
			{
				iLocal_719[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	else
	{
		while (iVar1 > -1)
		{
			if (iLocal_719[iVar1] == iVar0)
			{
				iLocal_719[iVar1] = 0;
			}
			iVar1 = (iVar1 - 1);
		}
	}
}

int func_89(char* sParam0)//Position - 0x8EE3
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = (iLocal_719 - 1);
	while (iVar1 > -1)
	{
		if (iLocal_719[iVar1] == iVar0)
		{
			return 1;
		}
		iVar1 = (iVar1 - 1);
	}
	return 0;
}

int func_90(int iParam0)//Position - 0x8F1A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("bodhi2")))
			{
				if (iLocal_6788 == 0)
				{
					Local_6789 = { GlobalFunc_107(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, 1f) - ENTITY::GET_ENTITY_COORDS(iParam0, 0)) };
					if ((MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Local_6789.x, Local_6789.f_2, 0f, 1f)) > 80f || MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Local_6789.f_1, Local_6789.f_2, 0f, 1f)) > 80f) || ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
					{
						iLocal_6787 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					Local_6789 = { GlobalFunc_107(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, 1f) - ENTITY::GET_ENTITY_COORDS(iParam0, 0)) };
					if ((MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Local_6789.x, Local_6789.f_2, 0f, 1f)) > 80f || MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Local_6789.f_1, Local_6789.f_2, 0f, 1f)) > 80f) || ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
					{
						if (GlobalFunc_588(&iLocal_6787, 1000))
						{
							return 1;
						}
					}
					else
					{
						iLocal_6788 = 0;
					}
				}
			}
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
			{
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



void func_93()//Position - 0x9122
{
	GlobalFunc_5103(0, 0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
	func_852(0, 1);
}



int func_96()//Position - 0x925A
{
	if (iLocal_6324 == 0)
	{
		func_500();
		func_460(6, "Drop Off Ron", 1, 0, 0, 1);
		iLocal_6324 = 1;
	}
	if (!iLocal_6315)
	{
		func_459();
		func_455();
		HUD::SET_RADAR_ZOOM(0);
		func_454();
		iLocal_6561 = 0;
		iLocal_6315 = 1;
		bLocal_699 = true;
		if (!iLocal_6343)
		{
			func_453();
			iLocal_6343 = 1;
		}
		CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_4", 8);
	}
	else
	{
		switch (iLocal_6561)
		{
			case 0:
				iLocal_694 = 0;
				CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_4", 8);
				GlobalFunc_4935();
				iLocal_6561++;
				break;
			
			case 1:
				func_446();
				iLocal_6261 = 0;
				iLocal_6561++;
				break;
			
			case 2:
				if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					func_115();
				}
				HUD::DISPLAY_HUD(1);
				iLocal_6561++;
				break;
			
			case 3:
				break;
		}
		if (iLocal_6561 >= 3)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREAS();
			func_107();
			GlobalFunc_657();
			GlobalFunc_8380(0, 1, 0, 0);
			func_97(1, 0, 2000);
			iLocal_6315 = 0;
			return 1;
		}
	}
	return 0;
}

void func_97(bool bParam0, int iParam1, int iParam2)//Position - 0x935B
{
	if (iLocal_7149)
	{
		HUD::DISPLAY_HUD(1);
		HUD::DISPLAY_RADAR(1);
		CAM::SET_WIDESCREEN_BORDERS(0, 500);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (CAM::DOES_CAM_EXIST(uLocal_7146))
			{
				CAM::SET_CAM_ACTIVE(uLocal_7146, 0);
				CAM::DESTROY_CAM(uLocal_7146, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_7147))
			{
				CAM::SET_CAM_ACTIVE(uLocal_7147, 0);
				CAM::DESTROY_CAM(uLocal_7147, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_7148))
			{
				CAM::SET_CAM_ACTIVE(uLocal_7148, 0);
				CAM::DESTROY_CAM(uLocal_7148, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, iParam1, iParam2, 1, 0, 0);
			CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_7149 = 0;
		}
	}
}










void func_107()//Position - 0x962D
{
	GlobalFunc_238(iLocal_6533);
	GlobalFunc_238(iLocal_6532);
	GlobalFunc_238(iLocal_6545);
	GlobalFunc_2453(fLocal_6556);
	GlobalFunc_238(iLocal_6272);
	iLocal_6561 = 0;
	iLocal_6535 = 0;
	iLocal_6536 = 0;
	iLocal_6537 = 0;
	iLocal_6544 = 0;
	iLocal_6534 = 0;
	iLocal_6532 = 0;
	iLocal_6533 = 0;
	iLocal_6550 = 0;
	iLocal_6551 = 0;
	iLocal_6554 = 0;
	iLocal_6554 = 0;
	iLocal_6324 = 0;
	iLocal_6545 = 0;
	GlobalFunc_5652(&Local_6221, 1, 0);
	GlobalFunc_7139(&Local_6221, 0);
}








void func_115()//Position - 0x992B
{
	SYSTEM::SETTIMERA(0);
	iLocal_6321 = 1;
	func_121(16, 0f, 0f, 0f, 0, 0);
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
	if (CAM::DOES_CAM_EXIST(uLocal_6570))
	{
	}
	while (iLocal_6321)
	{
		SYSTEM::WAIT(0);
		if (iLocal_6261 > 2)
		{
			if (GlobalFunc_4926(1000))
			{
				SYSTEM::SETTIMERB(7001);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1972.824f, 3816.688f, 32.4287f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 208.2972f);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 208.2972f, 0, 0);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 1, 0);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::_0x2F7F2B26DD3F18EE(-1f, 1f);
					CAM::_SET_GAMEPLAY_CAM_RAW_YAW(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				CAM::SET_WIDESCREEN_BORDERS(0, 0);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6147, 0, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_6147);
					VEHICLE::SET_VEHICLE_LIGHTS(Local_6147, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					ENTITY::SET_ENTITY_LOD_DIST(Local_6147, -1);
				}
				HUD::DISPLAY_HUD(1);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
				iLocal_6261 = 6;
				iLocal_6321 = 0;
			}
			else
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
		}
		if (func_89("T1Safehouse"))
		{
			if (!func_89("Leave vehicle"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6147))
					{
						VEHICLE::SET_VEHICLE_LIGHTS(Local_6147, 1);
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0);
						func_88("Leave vehicle", 1);
					}
				}
			}
		}
		switch (iLocal_6261)
		{
			case 0:
				GlobalFunc_2781(500);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				CAM::SET_WIDESCREEN_BORDERS(1, 0);
				GlobalFunc_159("TRV_SAFEH_1", -1);
				SYSTEM::SETTIMERB(0);
				STREAMING::REQUEST_ANIM_DICT("misstrevor1bathroom");
				if (!func_89("PIN INTERIOR END"))
				{
					if (func_121(16, 0f, 0f, 0f, 0, 0))
					{
						func_88("PIN INTERIOR END", 1);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!GlobalFunc_1533(PLAYER::PLAYER_PED_ID(), Local_6147, -1))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, -1);
					}
					VEHICLE::SET_VEHICLE_LIGHTS(Local_6147, 1);
				}
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "T1Safehouse");
				AUDIO::LOAD_STREAM("TREVOR_SAFE_HOUSE_INTRO_MASTER", 0);
				iLocal_6261++;
				break;
			
			case 1:
				if (!func_89("T1Safehouse"))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "T1Safehouse"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_6147))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6147))
								{
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6147, 1, 1);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_6147, 1, "T1Safehouse", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_6147, 3000f);
									VEHICLE::SET_PLAYBACK_SPEED(Local_6147, 0.7f);
									VEHICLE::SET_VEHICLE_LIGHTS(Local_6147, 2);
									func_88("T1Safehouse", 1);
								}
							}
						}
					}
				}
				if (AUDIO::LOAD_STREAM("TREVOR_SAFE_HOUSE_INTRO_MASTER", 0) || CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_6570) > 0.45f)
				{
					if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_6570) > 0.5f)
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1973.757f, 3816.875f, 33.8607f, 8f, 2);
						iLocal_6261++;
					}
				}
				break;
			
			case 2:
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_6570) == 1f)
				{
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1969.823f, 3818.315f, 32.4985f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 152.1604f);
					CAM::PLAY_CAM_ANIM(uLocal_6570, "trv_trailer_tut_int_cam", "misstrevor1", 1971.579f, 3819.524f, 32.956f, 0f, 0f, 121.25f, 0, 2);
					CAM::SET_CAM_ACTIVE(uLocal_6570, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					CAM::SET_WIDESCREEN_BORDERS(1, 0);
					GlobalFunc_159("TRV_SAFEH_2", -1);
					SYSTEM::SETTIMERB(0);
					STREAMING::NEW_LOAD_SCENE_STOP();
					AUDIO::PLAY_STREAM_FRONTEND();
					iLocal_6261++;
				}
				break;
			
			case 3:
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_6570) > 0.5f)
				{
					GlobalFunc_159("TRV_SAFEH_3", -1);
					iLocal_6261++;
				}
				break;
			
			case 4:
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_6570) >= 0.99f)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_845))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							uLocal_845 = PED::CREATE_SYNCHRONIZED_SCENE(Local_846, Local_849, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_845, "misstrevor1bathroom", "trevor_peeing", 1000f, -8f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_845, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 1);
						}
					}
				}
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_6570) == 1f)
				{
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_6570, uLocal_845, "trevor_peeing_cam", "misstrevor1bathroom");
					CAM::SET_CAM_ACTIVE(uLocal_6570, 1);
					iLocal_6261++;
				}
				break;
			
			case 5:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_845))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_845) > 0.99f)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_6570))
						{
							CAM::STOP_CAM_POINTING(uLocal_6570);
							CAM::SET_CAM_ACTIVE(uLocal_6570, 0);
							CAM::DESTROY_CAM(uLocal_6570, 0);
							CAM::RENDER_SCRIPT_CAMS(0, 1, 1500, 1, 0, 0);
						}
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -8f, 1);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						STREAMING::NEW_LOAD_SCENE_STOP();
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						CAM::SET_WIDESCREEN_BORDERS(0, 0);
						HUD::CLEAR_HELP(1);
						HUD::CLEAR_PRINTS();
						iLocal_6261++;
					}
				}
				break;
			
			case 6:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6147, 0, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_6147);
					VEHICLE::SET_VEHICLE_LIGHTS(Local_6147, 0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					ENTITY::SET_ENTITY_LOD_DIST(Local_6147, -1);
				}
				HUD::DISPLAY_HUD(1);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
				iLocal_6261 = 0;
				GlobalFunc_702(0, 0, 1);
				CUTSCENE::_0x06EE9048FD080382(0);
				iLocal_6321 = 0;
				break;
		}
	}
}






int func_121(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x9F85
{
	if (!GlobalFunc_105(Param1))
	{
	}
	if (fParam4 != 0f)
	{
	}
	switch (iParam0)
	{
		case 4:
			STREAMING::REQUEST_MODEL(joaat("bodhi2"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("bodhi2")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_6147))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("bodhi2"), 3);
					func_415(&Local_6147, 2, Local_6147.f_2, Local_6147.f_5, 1, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_6147);
						VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(Local_6147, 0);
					}
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("bodhi2"), 3);
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("bodhi2")))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
						{
							VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(Local_6147, 0);
							VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_6147, 0, 0);
							VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_6147, 0, 0);
							VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_6147, 1, 0);
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_6147, 1);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_6147, 1);
							GlobalFunc_503(Local_6147, -1);
							return 1;
						}
					}
				}
			}
			break;
		
		case 19:
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_6578[2]))
			{
				func_131(&(uLocal_6578[2]), 2, Param1, fParam4, 1, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(uLocal_6578[2]))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_6578[2], 0);
				GlobalFunc_504(uLocal_6578[2], 495);
				return 1;
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_5759))
			{
				if (GlobalFunc_7047(&Local_5759, 20, Local_5759.f_2, Local_5759.f_5, 1))
				{
					if (!PED::IS_PED_INJURED(Local_5759))
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_5759, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5759, 1862763509);
						GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
						PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_5759, 0);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_5759, 1);
						func_127();
						return 1;
					}
				}
			}
			else
			{
				if (Local_6622[3 /*10*/] != Local_5759)
				{
					func_126(Local_5759, 0, 0);
					GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
				}
				return 1;
			}
			if (bParam5)
			{
				STREAMING::REQUEST_MODEL(GlobalFunc_4946(20));
			}
			break;
		
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_5769))
			{
				if (GlobalFunc_7047(&Local_5769, 24, Local_5769.f_2, Local_5769.f_5, 1))
				{
					if (!PED::IS_PED_INJURED(Local_5769))
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_5769, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5769, 1862763509);
						GlobalFunc_173(&Local_6622, 4, Local_5769, "Wade", 0, 1);
						PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_5769, 0);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_5769, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_5769, 1);
						ENTITY::SET_ENTITY_LOD_DIST(Local_5769, 50);
						func_126(Local_5769, 1, 0);
						return 1;
					}
				}
			}
			else
			{
				if (Local_6622[4 /*10*/] != Local_5769)
				{
					func_126(Local_5769, 1, 0);
					GlobalFunc_173(&Local_6622, 4, Local_5769, "Wade", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_5769))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_5769, 1);
				}
				return 1;
			}
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6563))
			{
				if (GlobalFunc_7047(&iLocal_6563, 66, 2017.58f, 3827.92f, 31.78f, -86.69f, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_6563, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6563, 1862763509);
					return 1;
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_6563))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6563, 1862763509);
				}
				return 1;
			}
			break;
		
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6562))
			{
				STREAMING::REQUEST_MODEL(joaat("ig_johnnyklebitz"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("ig_johnnyklebitz")))
				{
					iLocal_6562 = PED::CREATE_PED(26, joaat("ig_johnnyklebitz"), 2017.58f, 3827.92f, 31.78f, -86.69f, 1, 1);
					func_124(iLocal_6562, 494);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_6562, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6562, 1);
					return 1;
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_6562))
				{
				}
				return 1;
			}
			break;
		
		case 6:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_852[2 /*65*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("ig_terry"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("ig_terry")))
				{
					Local_852[2 /*65*/] = PED::CREATE_PED(26, joaat("ig_terry"), Local_852[2 /*65*/].f_2, Local_852[2 /*65*/].f_5, 1, 1);
					func_124(Local_852[2 /*65*/], 494);
					PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_852[2 /*65*/], 0);
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_852[3 /*65*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("ig_clay"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("ig_clay")))
				{
					Local_852[3 /*65*/] = PED::CREATE_PED(26, joaat("ig_clay"), Local_852[3 /*65*/].f_2, Local_852[3 /*65*/].f_5, 1, 1);
					func_124(Local_852[3 /*65*/], 494);
					PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_852[3 /*65*/], 0);
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 7:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_6171[0 /*12*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("hexer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("hexer")))
				{
					Local_6171[0 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_6171[0 /*12*/].f_6, Local_6171[0 /*12*/].f_2, Local_6171[0 /*12*/].f_5, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(Local_6171[0 /*12*/], 0, 0);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_6171[0 /*12*/], 15f);
					AUDIO::SET_HORN_ENABLED(Local_6171[0 /*12*/], 0);
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_6171[1 /*12*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("hexer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("hexer")))
				{
					Local_6171[1 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_6171[1 /*12*/].f_6, Local_6171[1 /*12*/].f_2, Local_6171[1 /*12*/].f_5, 1, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_6171[1 /*12*/], 7);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_6171[1 /*12*/], 15f);
					AUDIO::SET_HORN_ENABLED(Local_6171[1 /*12*/], 0);
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 11:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_5825))
			{
				if (GlobalFunc_7047(&Local_5825, 38, Local_5825.f_2, Local_5825.f_5, 1))
				{
					GlobalFunc_200(&Local_6622, 7);
					GlobalFunc_173(&Local_6622, 7, Local_5825, "Ortega", 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_5825, 1);
					PED::SET_PED_CONFIG_FLAG(Local_5825, 208, 1);
					func_124(Local_5825, 494);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5825, 1);
					PED::SET_PED_COMPONENT_VARIATION(Local_5825, 8, 1, 0, 0);
					return 1;
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_5825))
				{
					PED::SET_PED_CONFIG_FLAG(Local_5825, 208, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_5825, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5825, 1);
					GlobalFunc_173(&Local_6622, 7, Local_5825, "Ortega", 0, 1);
				}
				return 1;
			}
			break;
		
		case 13:
			STREAMING::REQUEST_ANIM_DICT("misstrevor1");
			if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1"))
			{
				return 1;
			}
			break;
		
		case 12:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6564))
			{
				STREAMING::REQUEST_MODEL(joaat("proptrailer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("proptrailer")))
				{
					iLocal_6564 = VEHICLE::CREATE_VEHICLE(joaat("proptrailer"), -51.8943f, 3110.966f, 23.2366f, 44.8533f, 1, 1);
					ENTITY::SET_ENTITY_COORDS(iLocal_6564, -51.8943f, 3110.966f, 23.2366f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_6564, 44.8533f);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_6564, 1);
					func_122(1);
					return 1;
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_6564, -51.8943f, 3110.966f, 23.2366f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_6564, 44.8533f);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_6564, 1);
				}
				return 1;
			}
			break;
		
		case 15:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6464))
			{
				STREAMING::REQUEST_MODEL(joaat("prop_watercrate_01"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_watercrate_01")))
				{
					iLocal_6464 = OBJECT::CREATE_OBJECT(joaat("prop_watercrate_01"), 37.52f, 3731.39f, 38.62f, 1, 1, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_6464, 37.52f, 3731.39f, 38.62f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iLocal_6464, -0.37f, -5.54f, -43.64f, 2, 1);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_6464, 1);
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 16:
			if (iLocal_810 == 0)
			{
				iLocal_810 = INTERIOR::GET_INTERIOR_AT_COORDS(1974.436f, 3819.332f, 32.4363f);
				iLocal_6336 = 0;
			}
			if (INTERIOR::IS_INTERIOR_READY(iLocal_810))
			{
				if (iLocal_6336 == 0)
				{
					iLocal_6336 = 1;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_810);
			}
			break;
		
		case 17:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6420))
			{
				STREAMING::REQUEST_MODEL(joaat("hexer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("hexer")))
				{
					if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("hexer"), 28.8999f, 3616.106f, 38.9847f, 1))
					{
						iLocal_6420 = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 28.8999f, 3616.106f, 38.9847f, 92.04f, 1, 1);
						ENTITY::SET_ENTITY_COORDS(iLocal_6420, 28.8999f, 3616.106f, 38.9847f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_6420, 92.04f);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_6420, 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6420, 0);
						func_88("WADE BIKE RIGHT", 1);
						return 1;
					}
					else
					{
						iLocal_6420 = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 104.0991f, 3592.698f, 38.7392f, 103.0751f, 1, 1);
						ENTITY::SET_ENTITY_COORDS(iLocal_6420, 104.0991f, 3592.698f, 38.7392f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_6420, 103.0751f);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_6420, 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6420, 0);
						func_88("WADE BIKE LEFT", 1);
						return 1;
					}
				}
			}
			break;
		
		case 18:
			if (!OBJECT::DOES_PICKUP_EXIST(uLocal_842))
			{
				uLocal_842 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_petrolcan"), -51.76f, 3088.96f, 26.98f, -101.64f, -0.08f, -22.76f, 0, -1, 2, 1, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_122(bool bParam0)//Position - 0xA8F2
{
	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_6564))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_6564, 6, false);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_6564, 1, true);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_6564))
	{
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_6564, 1, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_6564, 2, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_6564, 3, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_6564, 4, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_6564, 5, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_6564, 6, true);
	}
}


void func_124(int iParam0, int iParam1)//Position - 0xA97D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_66998[iVar0 /*2*/] == 0)
		{
			Global_66998[iVar0 /*2*/] = iParam0;
			Global_66998[iVar0 /*2*/].f_1 = iParam1;
			if (iVar0 == Global_67031)
			{
				Global_67031++;
			}
			return;
		}
		iVar0++;
	}
}


void func_126(struct<8> Param0, var uParam8, var uParam9, int iParam10, bool bParam11)//Position - 0xA9FE
{
	if (ENTITY::DOES_ENTITY_EXIST(Param0))
	{
		if (!PED::IS_PED_INJURED(Param0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Param0, Param0.f_6, -1, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(Param0, Param0.f_7, 2000, 0, 1);
			PED::SET_PED_CAN_BE_TARGETTED(Param0, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Param0, iLocal_6571);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(Param0, 0);
			if (bParam11)
			{
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Param0, iParam10);
			}
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Param0, 0);
			PED::SET_PED_AS_ENEMY(Param0, 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Param0, 1, 0);
			ENTITY::SET_ENTITY_HEALTH(Param0, 200);
			PED::SET_PED_CONFIG_FLAG(Param0, 32, 0);
		}
	}
}

void func_127()//Position - 0xAA80
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_5759))
	{
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_5759, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5759, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5759, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5759, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5759, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5759, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5759, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5759, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5759, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5759, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5759, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5759, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_5759, 0, 0, 0, false);
			PED::SET_PED_PROP_INDEX(Local_5759, 1, 0, 0, false);
		}
	}
}




int func_131(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0xACAA
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
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			GlobalFunc_8364(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			GlobalFunc_11318(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7707(*iParam0);
			GlobalFunc_11333(*iParam0, bParam8);
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




























































































































































































































































































int func_415(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x55189
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
				GlobalFunc_5121(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_4970(iParam0);
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
				GlobalFunc_5121(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_4970(iParam0);
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
				GlobalFunc_5121(iParam0, &(Var5.f_31), &(Var5.f_57));
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
						GlobalFunc_4970(iParam0);
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
					func_416(iParam1, iParam0, 0, 1);
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

void func_416(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x55F6F
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
			GlobalFunc_8919(*iParam1, iParam0);
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






























void func_446()//Position - 0x597DE
{
	iLocal_6321 = 1;
	while (iLocal_6321)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_MrPhilips", 0);
		if (iLocal_4342 == 0)
		{
			if (iLocal_696)
			{
				iLocal_696 = 0;
			}
			else if (iLocal_694 == 0)
			{
				iLocal_6321 = 1;
				func_454();
				func_449(0);
				CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_4", 8);
				if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					STREAMING::REQUEST_ANIM_DICT("misstrevor1bathroom");
					STREAMING::REQUEST_ANIM_DICT("misstrevor1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "T1Safehouse");
				}
				iLocal_694++;
			}
			else if (iLocal_694 == 1)
			{
				if ((GlobalFunc_Has_Cutscene_Loaded() && (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1bathroom") || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))) && (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1") || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0)))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					else
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(Local_5759))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_5759, "Ron", 1, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_6147, "Trevors_car", 0, 0, 0);
					}
					CUTSCENE::START_CUTSCENE(2048);
					RECORDING::_0x48621C9FCA3EBD28(4);
					SYSTEM::WAIT(0);
					MISC::CLEAR_AREA(Local_6440, 100f, 1, 0, 0, 0);
					HUD::DISPLAY_HUD(0);
					GlobalFunc_8380(1, 1, 0, 0);
					iLocal_693 = 0;
					iLocal_694 = 0;
					iLocal_4342 = 1;
				}
			}
		}
		if (iLocal_4342 == 1)
		{
			func_121(16, 0f, 0f, 0f, 0, 0);
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					CUTSCENE::_0x06EE9048FD080382(1);
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 10000)
				{
					PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
				}
				if (iLocal_703 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						AUDIO::SET_VEH_RADIO_STATION(Local_6147, "OFF");
					}
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
					MISC::CLEAR_AREA(1986.128f, 3814.437f, 31.2913f, 200f, 1, 0, 0, 0);
					GlobalFunc_2781(500);
					iLocal_703 = 1;
				}
				else if (!iLocal_693)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						GlobalFunc_2787(500);
						iLocal_4342 = 3;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_car", 0))
			{
				if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "T1Safehouse"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_6147))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
							{
								AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
								VEHICLE::SET_VEHICLE_LIGHTS(Local_6147, 4);
							}
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!GlobalFunc_1533(PLAYER::PLAYER_PED_ID(), Local_6147, -1))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, -1);
					}
				}
			}
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				if (!func_89("START LOAD SCENE SAFE"))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 4178)
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1973.845f, 3818.447f, 32.4363f, 15f, 2);
						func_88("START LOAD SCENE SAFE", 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					HUD::DISPLAY_HUD(0);
					CAM::DESTROY_CAM(uLocal_6570, 0);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_TREVOR_TRAILER_RADIO_01", 1);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_TREVOR_TRAILER_RADIO_01", "RADIO_06_COUNTRY");
					if (!CAM::DOES_CAM_EXIST(uLocal_6570))
					{
						uLocal_6570 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
						CAM::SET_CAM_COORD(uLocal_6570, 1f, 1f, 1f);
					}
					CAM::PLAY_CAM_ANIM(uLocal_6570, "trv_trailer_tut_ext_cam", "misstrevor1", 1986.238f, 3815.098f, 32.793f, 0f, 0f, -154f, 0, 2);
					CAM::SET_CAM_ACTIVE(uLocal_6570, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					MISC::CLEAR_AREA(1973.845f, 3818.447f, 32.4363f, 30f, 1, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_5769))
					{
						PED::DELETE_PED(&Local_5769);
					}
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_703 == 1)
			{
				iLocal_4342 = 2;
			}
		}
		if (iLocal_4342 == 2)
		{
			if (iLocal_693)
			{
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6309))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6309, 0);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6310))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6310, 0);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6311))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6311, 0);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6312))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6312, 0);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6313))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6313, 0);
			}
			HUD::DISPLAY_RADAR(0);
			GlobalFunc_8380(0, 1, 0, 0);
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				HUD::DISPLAY_HUD(0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			CUTSCENE::REMOVE_CUTSCENE();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_6147, 0, 1);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_6147, 1, 1);
			}
			RECORDING::_0x81CBAE94390F9F89();
			iLocal_694 = 0;
			iLocal_4342 = 0;
			iLocal_6321 = 0;
		}
		if (iLocal_4342 == 3)
		{
			CUTSCENE::STOP_CUTSCENE(0);
			iLocal_693 = 1;
			iLocal_4342 = 1;
		}
	}
}



void func_449(int iParam0)//Position - 0x59CA4
{
	func_450(iParam0);
	if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 3)
	{
		Local_5759.f_2 = { 1983.88f, 3828.55f, 31.3972f };
		Local_5759.f_5 = 28.7057f;
		Local_5759.f_6 = joaat("weapon_pistol");
		Local_5759.f_7 = joaat("weapon_unarmed");
		Local_5769.f_2 = { 1981.66f, 3831.05f, 31.3972f };
		Local_5769.f_5 = 206.1794f;
		Local_5769.f_6 = joaat("weapon_sawnoffshotgun");
		Local_5769.f_7 = joaat("weapon_unarmed");
		Local_6147.f_2 = { 1983.17f, 3829.76f, 32.4f };
		Local_6147.f_5 = 294.44f;
		Local_6147.f_7 = Local_7150.f_39;
		Local_6159.f_2 = { 1948.87f, 4638.04f, 40.39f };
		Local_6159.f_5 = 66.68f;
		Local_6159.f_6 = Local_7150.f_4;
		Local_6159.f_7 = Local_7150.f_40;
		Local_6171[0 /*12*/].f_2 = { 1962.815f, 4635.393f, 40.241f };
		Local_6171[0 /*12*/].f_5 = 140.022f;
		Local_6171[0 /*12*/].f_6 = Local_7150;
		Local_6171[0 /*12*/].f_7 = Local_7150.f_41;
		Local_6171[1 /*12*/].f_2 = { 1960.587f, 4632.432f, 40.1918f };
		Local_6171[1 /*12*/].f_5 = 58.5726f;
		Local_6171[1 /*12*/].f_6 = Local_7150;
		Local_6171[1 /*12*/].f_7 = Local_7150.f_42;
		Local_852[1 /*65*/].f_2 = { 1966.756f, 4634.725f, 40.7667f };
		Local_852[1 /*65*/].f_5 = 23.7752f;
		Local_852[2 /*65*/].f_2 = { 1966.051f, 4638.446f, 40.7751f };
		Local_852[2 /*65*/].f_5 = 153.9032f;
		Local_852[2 /*65*/].f_16 = joaat("ig_terry");
		Local_852[3 /*65*/].f_2 = { 1963.537f, 4636.041f, 40.8039f };
		Local_852[3 /*65*/].f_5 = 32.1947f;
		Local_852[3 /*65*/].f_16 = joaat("ig_clay");
		Local_852[0 /*65*/].f_2 = { 1951.334f, 4636.043f, 40.6186f };
		Local_852[0 /*65*/].f_5 = -105.84f;
		Local_6171[0 /*12*/].f_2 = { 1965.54f, 4637.74f, 40.25f };
		Local_6171[0 /*12*/].f_5 = 92.63f;
		Local_6171[1 /*12*/].f_2 = { 1963.45f, 4636.52f, 40.24f };
		Local_6171[1 /*12*/].f_5 = 59.72f;
		Local_5779[0 /*9*/].f_2 = { 360.3275f, 4444.916f, 61.9223f };
		Local_5779[0 /*9*/].f_5 = 126.5533f;
		Local_5779[0 /*9*/].f_6 = Local_7150.f_9;
		Local_5779[1 /*9*/].f_2 = { 358.3185f, 4442.645f, 61.8962f };
		Local_5779[1 /*9*/].f_5 = 20.1394f;
		Local_5779[1 /*9*/].f_6 = Local_7150.f_9;
		Local_6196[0 /*12*/].f_2 = { 355.3197f, 4442.639f, 61.9571f };
		Local_6196[0 /*12*/].f_5 = 6.6736f;
		Local_6196[0 /*12*/].f_6 = Local_7150.f_2;
		Local_6196[1 /*12*/].f_2 = { 377.0306f, 4405.799f, 61.3879f };
		Local_6196[1 /*12*/].f_5 = 31.7967f;
		Local_6196[1 /*12*/].f_6 = Local_7150.f_1;
	}
	else if (iParam0 == 4)
	{
		Local_5834[0 /*12*/].f_2 = { 13.6181f, 3702.155f, 38.6766f };
		Local_5834[0 /*12*/].f_5 = 286.8863f;
		Local_5834[0 /*12*/].f_6 = Local_7150.f_4;
		Local_5834[0 /*12*/].f_7 = Local_7150.f_43;
		Local_5834[1 /*12*/].f_2 = { 64.3812f, 3665.045f, 38.7237f };
		Local_5834[1 /*12*/].f_5 = 289.1604f;
		Local_5834[1 /*12*/].f_6 = Local_7150.f_4;
		Local_5834[2 /*12*/].f_2 = { 101.7281f, 3742.227f, 38.7385f };
		Local_5834[2 /*12*/].f_5 = 126.7107f;
		Local_5834[2 /*12*/].f_6 = Local_7150;
		Local_5834[3 /*12*/].f_2 = { 96.845f, 3687.785f, 38.6517f };
		Local_5834[3 /*12*/].f_5 = 273.4825f;
		Local_5834[3 /*12*/].f_6 = Local_7150.f_4;
		Local_5834[4 /*12*/].f_2 = { 31.7653f, 3660.328f, 38.793f };
		Local_5834[4 /*12*/].f_5 = 281.1249f;
		Local_5834[4 /*12*/].f_6 = Local_7150;
		Local_5834[5 /*12*/].f_2 = { 12.51f, 3686.04f, 39.15f };
		Local_5834[5 /*12*/].f_5 = 299.13f;
		Local_5834[5 /*12*/].f_6 = Local_7150;
		Local_5834[6 /*12*/].f_2 = { 58.7611f, 3724.391f, 38.7233f };
		Local_5834[6 /*12*/].f_5 = 52.6504f;
		Local_5834[6 /*12*/].f_6 = Local_7150;
		Local_5834[7 /*12*/].f_2 = { 60.6066f, 3724.972f, 38.7202f };
		Local_5834[7 /*12*/].f_5 = 50.1891f;
		Local_5834[7 /*12*/].f_6 = Local_7150;
		Local_5834[8 /*12*/].f_2 = { 60.1503f, 3665.415f, 38.7929f };
		Local_5834[8 /*12*/].f_5 = 82.5423f;
		Local_5834[8 /*12*/].f_6 = Local_7150;
		Local_5834[9 /*12*/].f_2 = { 59.5704f, 3663.169f, 38.6055f };
		Local_5834[9 /*12*/].f_5 = 97.7429f;
		Local_5834[9 /*12*/].f_6 = Local_7150;
		Local_5834[10 /*12*/].f_2 = { 66.2237f, 3625.187f, 38.6523f };
		Local_5834[10 /*12*/].f_5 = 312.2219f;
		Local_5834[10 /*12*/].f_6 = Local_7150.f_5;
		Local_5834[11 /*12*/].f_2 = { 86.8213f, 3637.78f, 38.7683f };
		Local_5834[11 /*12*/].f_5 = 357.0385f;
		Local_5834[11 /*12*/].f_6 = Local_7150.f_5;
		Local_5834[12 /*12*/].f_2 = { 34.3147f, 3719.135f, 38.6821f };
		Local_5834[12 /*12*/].f_5 = 153.6358f;
		Local_5834[12 /*12*/].f_6 = Local_7150.f_5;
		Local_5834[13 /*12*/].f_2 = { 42.9015f, 3683.588f, 38.6273f };
		Local_5834[13 /*12*/].f_5 = (38.882f + 180f);
		Local_5834[13 /*12*/].f_6 = Local_7150.f_5;
		Local_5834[14 /*12*/].f_2 = { 26.0817f, 3681.396f, 38.6321f };
		Local_5834[14 /*12*/].f_5 = 114.3899f;
		Local_5834[14 /*12*/].f_6 = Local_7150.f_4;
		Local_5834[15 /*12*/].f_2 = { 39.2248f, 3728.508f, 39.1479f };
		Local_5834[15 /*12*/].f_5 = 105.9004f;
		Local_5834[15 /*12*/].f_6 = Local_7150;
		Local_5834[19 /*12*/].f_2 = { 78.0597f, 3684.483f, 38.512f };
		Local_5834[16 /*12*/].f_5 = 105.9004f;
		Local_5834[16 /*12*/].f_6 = Local_7150;
		Local_5834[17 /*12*/].f_2 = { 40.5676f, 3730.775f, 39.1645f };
		Local_5834[17 /*12*/].f_5 = 113.6521f;
		Local_5834[17 /*12*/].f_6 = Local_7150;
		Local_5834[18 /*12*/].f_2 = { 125.975f, 3720.184f, 38.7542f };
		Local_5834[18 /*12*/].f_5 = 282.1393f;
		Local_5834[18 /*12*/].f_6 = Local_7150.f_4;
		Local_5834[19 /*12*/].f_2 = { 78.0597f, 3684.483f, 38.512f };
		Local_5834[19 /*12*/].f_5 = 337.7484f;
		Local_5834[19 /*12*/].f_6 = Local_7150.f_5;
		Local_5834[20 /*12*/].f_2 = { 103.8368f, 3700.442f, 38.8312f };
		Local_5834[20 /*12*/].f_5 = 113.2645f;
		Local_5834[20 /*12*/].f_6 = Local_7150;
		Local_5834[21 /*12*/].f_2 = { 106.9271f, 3699.746f, 39.2054f };
		Local_5834[21 /*12*/].f_5 = 115.34f;
		Local_5834[21 /*12*/].f_6 = Local_7150;
		Local_5834[22 /*12*/].f_2 = { 107.3253f, 3704.323f, 39.2635f };
		Local_5834[22 /*12*/].f_5 = 99.51f;
		Local_5834[22 /*12*/].f_6 = Local_7150;
		Local_5834[23 /*12*/].f_2 = { 88.3355f, 3704.193f, 38.5818f };
		Local_5834[23 /*12*/].f_5 = 53.3843f;
		Local_5834[23 /*12*/].f_6 = Local_7150.f_5;
		Local_5834[24 /*12*/].f_2 = { 75.7059f, 3740.968f, 39.1979f };
		Local_5834[24 /*12*/].f_5 = 229.04f;
		Local_5834[24 /*12*/].f_6 = Local_7150;
		Local_5834[25 /*12*/].f_2 = { 71.3323f, 3742.776f, 39.2591f };
		Local_5834[25 /*12*/].f_5 = 271.1641f;
		Local_5834[25 /*12*/].f_6 = Local_7150;
		Local_6159.f_6 = Local_7150.f_4;
		Local_6171[0 /*12*/].f_2 = { 71.6588f, 3648.163f, 38.5417f };
		Local_6171[0 /*12*/].f_5 = 240.6028f;
		Local_6171[0 /*12*/].f_6 = Local_7150;
		Local_6171[1 /*12*/].f_2 = { 74.1199f, 3653.316f, 38.8485f };
		Local_6171[1 /*12*/].f_5 = 249.5172f;
		Local_6171[1 /*12*/].f_6 = Local_7150;
	}
	else if (iParam0 == 6 || iParam0 == 7)
	{
		Local_6159.f_2 = { -20.1293f, 3039.469f, 40.0023f };
		Local_6159.f_5 = 292.0927f;
		Local_6159.f_6 = Local_7150.f_6;
		Local_5825.f_2 = { -21.5156f, 3036.358f, 40.2379f };
		Local_5825.f_5 = 287.3651f;
	}
	else if (iParam0 == 4 || iParam0 == 7)
	{
		Local_6159.f_2 = { -20.1293f, 3039.469f, 40.0023f };
		Local_6159.f_5 = 292.0927f;
		Local_6159.f_6 = Local_7150.f_6;
		Local_5825.f_2 = { -21.5156f, 3036.358f, 40.2379f };
		Local_5825.f_5 = 287.3651f;
	}
	else if (iParam0 == 5)
	{
		Local_6159.f_2 = { -20.1293f, 3039.469f, 40.0023f };
		Local_6159.f_5 = 292.0927f;
		Local_6159.f_6 = Local_7150.f_6;
		Local_5825.f_2 = { -21.5156f, 3036.358f, 40.2379f };
		Local_5825.f_5 = 287.3651f;
	}
}

void func_450(int iParam0)//Position - 0x5A6B6
{
	if (((iParam0 == 0 || iParam0 == 1) || iParam0 == 3) || iParam0 == 4)
	{
		func_451(&(Local_852[0 /*65*/]), 1952.884f, 4634.713f, 39.599f, 49.8737f, joaat("weapon_pistol"), Local_7150.f_7, 1, 2, 1, 5, 11, 0, 0, 0, Local_7150.f_33, Local_7150.f_34, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 1, 1, 5);
		func_451(&(Local_852[1 /*65*/]), 1955.643f, 4637.195f, 39.661f, 109.1915f, joaat("weapon_pumpshotgun"), Local_7150.f_7, 1, 2, 1, 6, 11, 0, 0, 0, Local_7150.f_33, Local_7150.f_34, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 1, 1, 5);
		func_451(&(Local_852[2 /*65*/]), 1957.107f, 4636.986f, 39.6963f, 112.9889f, joaat("weapon_smg"), Local_7150.f_8, 1, 2, 1, 14, 11, 0, 0, 0, Local_7150.f_33, Local_7150.f_34, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 1, 1, 5);
		func_451(&(Local_852[3 /*65*/]), 1956.072f, 4633.996f, 39.6426f, 90.1262f, joaat("weapon_carbinerifle"), Local_7150.f_8, 1, 2, 1, 6, 11, 0, 0, 0, Local_7150.f_33, Local_7150.f_34, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 1, 1, 5);
	}
	if (iParam0 == 4)
	{
	}
}

void func_451(var uParam0, struct<3> Param1, float fParam4, int iParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16, struct<3> Param17, struct<3> Param20, float fParam23, int iParam24, int iParam25, int iParam26, struct<3> Param27, struct<3> Param30, float fParam33, int iParam34, int iParam35, int iParam36, bool bParam37, int iParam38, int iParam39)//Position - 0x5A831
{
	uParam0->f_2 = { Param1 };
	uParam0->f_5 = fParam4;
	uParam0->f_14 = iParam5;
	uParam0->f_16 = uParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_18 = iParam8;
	uParam0->f_19 = iParam9;
	uParam0->f_30[0] = iParam10;
	uParam0->f_30[1] = iParam11;
	uParam0->f_30[2] = iParam12;
	uParam0->f_30[3] = iParam13;
	uParam0->f_30[4] = iParam14;
	uParam0->f_37 = uParam15;
	uParam0->f_38 = uParam16;
	uParam0->f_47 = { Param17 };
	uParam0->f_40 = { Param20 };
	uParam0->f_43 = fParam23;
	uParam0->f_44 = iParam24;
	uParam0->f_45 = iParam25;
	uParam0->f_46 = iParam26;
	uParam0->f_61 = bParam37;
	if (!bParam37)
	{
		uParam0->f_58 = { Param27 };
		uParam0->f_51 = { Param30 };
		uParam0->f_54 = fParam33;
		uParam0->f_55 = iParam34;
		uParam0->f_56 = iParam35;
		uParam0->f_57 = iParam36;
	}
	uParam0->f_62 = iParam38;
	uParam0->f_63 = iParam39;
	uParam0->f_23 = 0;
	uParam0->f_39 = 0;
	uParam0->f_50 = 0;
	uParam0->f_30[5] = 0;
}


void func_453()//Position - 0x5A937
{
	PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.675f, 0.251f, 10f, 0.85f, 0, 0f, "Scripted_Ped_Splash_Back");
	PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 5, 0.397f, 0.28f, 320f, 0.65f, 0, 0f, "Scripted_Ped_Splash_Back");
	PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 5, 0.297f, 0.08f, 320f, 0.65f, 0, 0f, "Scripted_Ped_Splash_Back");
}

void func_454()//Position - 0x5A9AB
{
	if (iLocal_6246 == 0 || iLocal_6246 == 1)
	{
		Local_6437 = { 1981.118f, 3817.199f, 31.3807f };
		Local_6440 = { 2016.42f, 4642.44f, 40.1808f };
		fLocal_6557 = 323.8188f;
	}
	else if (iLocal_6246 == 2)
	{
		Local_6437 = { 2016.42f, 4642.44f, 40.1808f };
		Local_6440 = { 1969.603f, 4647.312f, 39.9437f };
		fLocal_6557 = 143.064f;
	}
	else if (iLocal_6246 == 3)
	{
		Local_6437 = { 1969.603f, 4647.312f, 39.9437f };
		Local_6440 = { 80.2901f, 3619.446f, 38.6997f };
		fLocal_6557 = 118.0796f;
	}
	else if (iLocal_6246 == 4)
	{
		Local_6437 = { 80.2901f, 3619.446f, 38.6997f };
		Local_6440 = { 80.2901f, 3619.446f, 38.6997f };
		fLocal_6557 = 16.2939f;
	}
	else if (iLocal_6246 == 5)
	{
		Local_6437 = { 64.4564f, 3073.858f, 40.2777f };
		Local_6440 = { 80.2901f, 3619.446f, 38.6997f };
		fLocal_6557 = 132.797f;
	}
	else if (iLocal_6246 == 6)
	{
		Local_6437 = { 81.2743f, 3609.298f, 38.73f };
		Local_6440 = { 81.2743f, 3609.298f, 38.73f };
		fLocal_6557 = 180.4163f;
	}
	else if (iLocal_6246 == 7)
	{
		Local_6437 = { -43.9504f, 3022.545f, 39.5891f };
		Local_6440 = { -43.9504f, 3022.545f, 39.5891f };
		fLocal_6557 = 115.181f;
	}
	else if (iLocal_6246 == 8)
	{
		Local_6437 = { -6.8119f, 3039.899f, 39.677f };
		Local_6440 = { 1681.555f, 3725.458f, 32.949f };
		fLocal_6557 = 287.4757f;
	}
	else if (iLocal_6246 == 9)
	{
		Local_6437 = { 1952.23f, 3787.396f, 31.2922f };
		Local_6440 = { 1952.23f, 3787.396f, 31.2922f };
		fLocal_6557 = 27.2205f;
	}
}

void func_455()//Position - 0x5ABC8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_6792 - 1))
	{
		if (Local_6793[iVar0 /*3*/] != 0)
		{
			if (Local_6793[iVar0 /*3*/].f_1)
			{
				if (!Local_6793[iVar0 /*3*/].f_2)
				{
					func_458(Local_6793[iVar0 /*3*/], 1, 1);
					Local_6793[iVar0 /*3*/].f_2 = 1;
				}
			}
			else if (Local_6793[iVar0 /*3*/].f_2)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_6793[iVar0 /*3*/]);
				Local_6793[iVar0 /*3*/].f_2 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_6944 - 1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_6945[iVar0 /*4*/], "missing") && Local_6945[iVar0 /*4*/].f_1 != -1)
		{
			if (Local_6945[iVar0 /*4*/].f_2)
			{
				if (!Local_6945[iVar0 /*4*/].f_3)
				{
					func_456(Local_6945[iVar0 /*4*/].f_1, Local_6945[iVar0 /*4*/], 1, 1);
					Local_6945[iVar0 /*4*/].f_3 = 1;
				}
			}
			else if (Local_6945[iVar0 /*4*/].f_3)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_6945[iVar0 /*4*/].f_1, Local_6945[iVar0 /*4*/]);
				Local_6945[iVar0 /*4*/].f_3 = 0;
			}
		}
		iVar0++;
	}
}

void func_456(int iParam0, char* sParam1, bool bParam2, bool bParam3)//Position - 0x5ACE5
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0, uParam1);
	if (bParam2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::LOAD_ALL_OBJECTS_NOW();
		}
		while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1))
		{
			if (bParam3)
			{
				func_457(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_457(int iParam0)//Position - 0x5AD26
{
	SYSTEM::WAIT(iParam0);
	func_851();
}

void func_458(int iParam0, bool bParam1, bool bParam2)//Position - 0x5AD38
{
	STREAMING::REQUEST_MODEL(iParam0);
	if (bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::LOAD_ALL_OBJECTS_NOW();
		}
		while (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			if (bParam2)
			{
				func_457(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_459()//Position - 0x5AD75
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_6792 - 1))
	{
		Local_6793[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_6944 - 1))
	{
		Local_6945[iVar0 /*4*/].f_2 = 0;
		iVar0++;
	}
}

void func_460(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5ADBD
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
		if (iParam0 != Global_Current_Checkpoint)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_Current_Checkpoint)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_174(1);
		if (iParam0 <= Global_Current_Checkpoint)
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
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_Current_Checkpoint, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7706(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_Current_Checkpoint, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_547(&(Global_Mission_Fail_State.Failed_Script_Name));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_Current_Checkpoint = iParam0;
		func_461(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_Current_Checkpoint)
	{
	}
}

void func_461(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x5AF35
{
	func_462(&Global_93588, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_462(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x5AF51
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7626();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10628(&(uParam0->f_2161), 0);
		GlobalFunc_7705(PLAYER::PLAYER_PED_ID());
		GlobalFunc_7700(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar1];
		if (iVar1 == GlobalFunc_8315())
		{
			GlobalFunc_8358(PLAYER::PLAYER_PED_ID(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89752[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89752[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89752[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89752[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89752[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89752[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89752[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89752[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89752[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89752[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51925[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_464(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	GlobalFunc_542(&(uParam0->f_2233));
	uParam3 = uParam3;
	uParam2 = uParam2;
}


void func_464(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5BDF7
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = GlobalFunc_6674(iParam2);
	}
	if (func_470(iParam2, &iVar0, iParam3, iParam5))
	{
		GlobalFunc_8370(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				GlobalFunc_8370(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}






int func_470(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x5C099
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (GlobalFunc_5651(*uParam1, GlobalFunc_8315(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}






























void func_500()//Position - 0x5FC18
{
	if (iLocal_6246 == 0)
	{
		GlobalFunc_200(&Local_6622, 1);
		GlobalFunc_200(&Local_6622, 2);
		GlobalFunc_200(&Local_6622, 3);
		GlobalFunc_200(&Local_6622, 4);
		GlobalFunc_200(&Local_6622, 5);
		GlobalFunc_200(&Local_6622, 6);
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_5769))
		{
			GlobalFunc_173(&Local_6622, 4, Local_5769, "Wade", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&Local_6622, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_6246 == 1)
	{
		GlobalFunc_200(&Local_6622, 1);
		GlobalFunc_200(&Local_6622, 2);
		GlobalFunc_200(&Local_6622, 3);
		GlobalFunc_200(&Local_6622, 4);
		GlobalFunc_200(&Local_6622, 5);
		GlobalFunc_200(&Local_6622, 6);
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_5769))
		{
			GlobalFunc_173(&Local_6622, 4, Local_5769, "Wade", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&Local_6622, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_6246 == 2)
	{
		GlobalFunc_200(&Local_6622, 1);
		GlobalFunc_200(&Local_6622, 2);
		GlobalFunc_200(&Local_6622, 3);
		GlobalFunc_200(&Local_6622, 4);
		GlobalFunc_200(&Local_6622, 5);
		GlobalFunc_200(&Local_6622, 6);
		if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
		{
			GlobalFunc_173(&Local_6622, 5, Local_852[2 /*65*/], "TERRY", 1, 1);
		}
		if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
		{
			GlobalFunc_173(&Local_6622, 6, Local_852[3 /*65*/], "CLAY", 1, 1);
		}
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_5769))
		{
			GlobalFunc_173(&Local_6622, 4, Local_5769, "Wade", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&Local_6622, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_6246 == 3)
	{
		GlobalFunc_200(&Local_6622, 1);
		GlobalFunc_200(&Local_6622, 2);
		GlobalFunc_200(&Local_6622, 3);
		GlobalFunc_200(&Local_6622, 4);
		GlobalFunc_200(&Local_6622, 5);
		GlobalFunc_200(&Local_6622, 6);
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_5769))
		{
			GlobalFunc_173(&Local_6622, 4, Local_5769, "Wade", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&Local_6622, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_6246 == 4)
	{
		GlobalFunc_200(&Local_6622, 1);
		GlobalFunc_200(&Local_6622, 2);
		GlobalFunc_200(&Local_6622, 3);
		GlobalFunc_200(&Local_6622, 4);
		GlobalFunc_200(&Local_6622, 5);
		GlobalFunc_200(&Local_6622, 6);
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_5769))
		{
			GlobalFunc_173(&Local_6622, 4, Local_5769, "Wade", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&Local_6622, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_6246 == 6)
	{
		GlobalFunc_200(&Local_6622, 1);
		GlobalFunc_200(&Local_6622, 2);
		GlobalFunc_200(&Local_6622, 3);
		GlobalFunc_200(&Local_6622, 4);
		GlobalFunc_200(&Local_6622, 5);
		GlobalFunc_200(&Local_6622, 6);
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_5769))
		{
			GlobalFunc_173(&Local_6622, 4, Local_5769, "Wade", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&Local_6622, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_6246 == 7)
	{
		GlobalFunc_200(&Local_6622, 1);
		GlobalFunc_200(&Local_6622, 2);
		GlobalFunc_200(&Local_6622, 3);
		GlobalFunc_200(&Local_6622, 4);
		GlobalFunc_200(&Local_6622, 5);
		GlobalFunc_200(&Local_6622, 6);
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&Local_6622, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_5825))
		{
			GlobalFunc_173(&Local_6622, 7, Local_5825, "ORTEGA", 0, 1);
		}
	}
	if (iLocal_6246 == 8)
	{
		GlobalFunc_200(&Local_6622, 1);
		GlobalFunc_200(&Local_6622, 2);
		GlobalFunc_200(&Local_6622, 3);
		GlobalFunc_200(&Local_6622, 4);
		GlobalFunc_200(&Local_6622, 5);
		GlobalFunc_200(&Local_6622, 6);
		GlobalFunc_200(&Local_6622, 7);
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&Local_6622, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_6246 == 9)
	{
		GlobalFunc_200(&Local_6622, 4);
		GlobalFunc_200(&Local_6622, 5);
		GlobalFunc_200(&Local_6622, 6);
		GlobalFunc_200(&Local_6622, 7);
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&Local_6622, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
}

int func_501()//Position - 0x6012A
{
	func_555();
	if (ENTITY::DOES_ENTITY_EXIST(Local_5825))
	{
		if (PED::IS_PED_INJURED(Local_5825))
		{
			GlobalFunc_585(132, 1);
			STATS::STAT_SET_BOOL(joaat("sp_killed_ortega"), 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_5825))
	{
		if (!PED::IS_PED_INJURED(Local_5825))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5825, 0), 1) > 100f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5825))
				{
					PED::DELETE_PED(&Local_5825);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_ortega"));
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5825, 0), 1) > 100f)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5825))
			{
				PED::DELETE_PED(&Local_5825);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_ortega"));
			}
		}
	}
	if (!func_89("TREVOR_1_DRIVE_HOME"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
			{
				AUDIO::START_AUDIO_SCENE("TREVOR_1_DRIVE_HOME");
				func_88("TREVOR_1_DRIVE_HOME", 1);
			}
		}
	}
	if (iLocal_6324 == 0)
	{
		func_500();
		func_460(6, "Drop Off Ron", 1, 0, 0, 1);
		iLocal_6324 = 1;
		iLocal_6320 = 0;
		PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(2));
		if (HUD::DOES_BLIP_EXIST(Local_5825.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_5825.f_1));
		}
	}
	if (!iLocal_6315)
	{
		if (iLocal_6308)
		{
			if (STREAMING::_0xFB199266061F820A())
			{
				STREAMING::_0xF4A0DADB70F57FA6();
				if (STREAMING::IS_IPL_ACTIVE("TRV1_Trail_end") && STREAMING::IS_IPL_ACTIVE("CS3_05_water_grp2"))
				{
					iLocal_6308 = 0;
				}
				else
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			func_460(6, "Drop Off Ron", 1, 0, 0, 1);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(2));
			func_459();
			func_455();
			HUD::SET_RADAR_ZOOM(0);
			func_454();
			iLocal_6561 = 0;
			bLocal_699 = true;
			iLocal_7407 = 0;
			iLocal_7408 = 0;
			STREAMING::REMOVE_IPL("TRV1_Trail_start");
			STREAMING::REQUEST_IPL("TRV1_Trail_end");
			if (!iLocal_6343)
			{
				func_453();
				iLocal_6343 = 1;
			}
			iLocal_6315 = 1;
		}
	}
	else
	{
		switch (iLocal_6561)
		{
			case 0:
				func_553(500);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_6147, 0f);
					if (!func_89("BAJS"))
					{
						if (!PED::IS_PED_INJURED(Local_5759) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 1))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 1))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_5759, -1794415470) == 7)
								{
									if (!PED::IS_PED_GROUP_MEMBER(Local_5759, GlobalFunc_468()))
									{
										PED::SET_PED_AS_GROUP_MEMBER(Local_5759, GlobalFunc_468());
									}
									TASK::TASK_ENTER_VEHICLE(Local_5759, Local_6147, -1, 0, 2f, 1, 0);
									func_88("BAJS", 1);
								}
							}
						}
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1952.23f, 3787.396f, 31.2922f, 1) < 100f && !GlobalFunc_2233())
				{
					if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						STREAMING::REQUEST_ANIM_DICT("misstrevor1bathroom");
						STREAMING::REQUEST_ANIM_DICT("misstrevor1");
						VEHICLE::REQUEST_VEHICLE_RECORDING(1, "T1Safehouse");
					}
					CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_4", 8);
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1952.23f, 3787.396f, 31.2922f, 1) > 120f || GlobalFunc_2233())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (func_513(&Local_6221, 1952.23f, 3787.396f, 31.2922f, 7f, 7f, 2f, 1, Local_5759, Local_6147, Local_7150.f_112, Local_7150.f_109, Local_7150.f_118, Local_7150.f_111, 0, 1, 1, -1))
				{
					if (GlobalFunc_530(Local_6147, 10.5f, 1, 1056964608, 0, 1))
					{
						GlobalFunc_5105();
						func_107();
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						RECORDING::_0x293220DA1B46CEBC(3f, 3f, 4);
						iLocal_6561++;
					}
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_ORTEGA_KILLED"))
							{
								AUDIO::STOP_AUDIO_SCENE("TREVOR_1_ORTEGA_KILLED");
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_6221.f_5))
					{
						if (!func_89("CLEAR LOOK AT"))
						{
							if (!PED::IS_PED_INJURED(Local_5759))
							{
								AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
								TASK::TASK_CLEAR_LOOK_AT(Local_5759);
								func_88("CLEAR LOOK AT", 1);
							}
						}
						if (iLocal_6320 == 1)
						{
							if (iLocal_7408 == 0)
							{
								if (GlobalFunc_111())
								{
									AUDIO::PREPARE_MUSIC_EVENT("TRV1_END_TRUCK");
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_END_TRUCK"))
									{
										iLocal_7408 = 1;
									}
								}
							}
						}
						if (func_508())
						{
							if (iLocal_6320 == 0)
							{
								if (!GlobalFunc_5172(&Local_6221, 1))
								{
									if (GlobalFunc_7066() == 0)
									{
										if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_DR1", 7, 0, 0, 0))
										{
											RECORDING::_0x293220DA1B46CEBC(2f, 12f, 3);
											HUD::SET_RADAR_ZOOM(0);
											iLocal_6320 = 1;
										}
									}
									else if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_EIA", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(2f, 12f, 3);
										HUD::SET_RADAR_ZOOM(0);
										iLocal_6320 = 1;
									}
								}
							}
						}
					}
					else if (!func_89("HASGOTINVEHICLE"))
					{
						if (iLocal_7407 == 0)
						{
							if (!GlobalFunc_5172(&Local_6221, 2))
							{
								if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_LETSG", 7, 0, 0, 0))
								{
									if (!PED::IS_PED_INJURED(Local_5759))
									{
										TASK::TASK_LOOK_AT_ENTITY(Local_5759, PLAYER::PLAYER_PED_ID(), 6000, 0, 2);
									}
									iLocal_7407 = 1;
								}
							}
						}
					}
					if (!func_89("HASGOTINVEHICLE"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
							{
								func_88("HASGOTINVEHICLE", 1);
							}
						}
					}
					if (iLocal_6561 == 0)
					{
						if (iLocal_6320 == 1)
						{
							if (HUD::DOES_BLIP_EXIST(Local_6221.f_5))
							{
								if (GlobalFunc_620())
								{
									GlobalFunc_619(0);
									HUD::CLEAR_PRINTS();
								}
							}
							else if (!GlobalFunc_620())
							{
								GlobalFunc_619(1);
								HUD::CLEAR_PRINTS();
							}
						}
					}
				}
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_6221))
					{
						Local_6221 = HUD::ADD_BLIP_FOR_ENTITY(Local_6147);
						HUD::SET_BLIP_COLOUR(Local_6221, 3);
					}
				}
				break;
			
			case 1:
				if (!GlobalFunc_111())
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_DRIVE_HOME"))
					{
						AUDIO::STOP_AUDIO_SCENE("TREVOR_1_DRIVE_HOME");
					}
					iLocal_6561++;
				}
				break;
		}
		if (iLocal_6561 >= 2)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_6568))
			{
				HUD::REMOVE_BLIP(&uLocal_6568);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_6567))
			{
				HUD::REMOVE_BLIP(&uLocal_6567);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_6569))
			{
				HUD::REMOVE_BLIP(&uLocal_6569);
			}
			iLocal_6324 = 0;
			iLocal_6315 = 0;
			return 1;
		}
	}
	return 0;
}







int func_508()//Position - 0x60830
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 1;
	}
	return 0;
}





bool func_513(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x60A27
{
	return func_514(uParam0, Param1, Param4, iParam7, iParam8, 0, 0, iParam9, sParam10, sParam11, sParam11, sParam11, sParam11, sParam12, sParam13, bParam14, bParam15, bParam16, iParam17);
}

bool func_514(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)//Position - 0x60A5B
{
	return func_515(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, uParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}

int func_515(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x60AA5
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
	uParam0->f_17[0] = uParam15;
	uParam0->f_17[1] = uParam16;
	uParam0->f_17[2] = uParam17;
	uParam0->f_16 = uParam15;
	GlobalFunc_647(uParam0);
	GlobalFunc_646(uParam0);
	GlobalFunc_502();
	if (GlobalFunc_8035(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
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






































void func_553(int iParam0)//Position - 0x63250
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
	while (CAM::IS_SCREEN_FADING_IN())
	{
		func_457(0);
	}
}


void func_555()//Position - 0x632C3
{
	switch (iLocal_7399)
	{
		case 0:
			if (!PED::IS_PED_INJURED(Local_5825))
			{
				if (iLocal_818 == 1)
				{
					if (GlobalFunc_588(&iLocal_7400, 3000))
					{
						uLocal_6553 = PED::CREATE_SYNCHRONIZED_SCENE(-46.236f, 3096.727f, 25.513f, 3f, 0f, -162.72f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_6553, "misstrevor1", "ortega_kneel_to_stand_ort", 8f, -8f, 261, 16, 1148846080, 0);
						iLocal_7399++;
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_5825))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6553))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_6553) > 0.99f)
					{
						TASK::TASK_SMART_FLEE_PED(Local_5825, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						iLocal_7399++;
					}
				}
			}
			break;
	}
}

int func_556()//Position - 0x63392
{
	func_570();
	func_555();
	if (ENTITY::DOES_ENTITY_EXIST(Local_5825))
	{
		if (PED::IS_PED_INJURED(Local_5825))
		{
			GlobalFunc_585(132, 1);
			STATS::STAT_SET_BOOL(joaat("sp_killed_ortega"), 1, 1);
		}
		else
		{
			PED::SET_PED_CAPSULE(Local_5825, 0.5f);
		}
	}
	sLocal_7405 = "T1M1_RAGEKIL";
	if (!PED::IS_PED_INJURED(Local_5825))
	{
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
		{
			GlobalFunc_4956();
			if (!iLocal_7404)
			{
				if (!GlobalFunc_5172(&Local_6221, 1))
				{
					if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_SPECIAL", 7, 0, 0, 0))
					{
						iLocal_7404 = 1;
					}
				}
			}
		}
	}
	if (iLocal_6561 == 1)
	{
		if (!PED::IS_PED_INJURED(Local_5825))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_5825, 1) > 8f)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_5825, 1) > 25f)
				{
					func_31(15);
				}
				else if (!GlobalFunc_5172(&Local_6221, 2))
				{
					if (!func_89("TRV_ORTRET"))
					{
						if (iLocal_6331 == 0)
						{
							GlobalFunc_619(1);
							iLocal_6331 = 1;
							func_569("TRV_ORTRET", 7500);
						}
					}
				}
				else if (!func_89("TRV_ORTRET"))
				{
					func_569("TRV_ORTRET", 7500);
					func_88("TRV_ORTRET", 1);
				}
			}
			else
			{
				if (GlobalFunc_663("TRV_ORTRET", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
			}
		}
		else if (GlobalFunc_620())
		{
			GlobalFunc_619(0);
		}
	}
	if (iLocal_6561 > 1)
	{
		if (!PED::IS_PED_INJURED(Local_5825))
		{
			AUDIO::OVERRIDE_TREVOR_RAGE("T1M1_FLAA");
			func_566();
		}
		else
		{
			AUDIO::RESET_TREVOR_RAGE();
			GlobalFunc_200(&Local_6622, 7);
			if (HUD::DOES_BLIP_EXIST(Local_5825.f_1))
			{
				HUD::REMOVE_BLIP(&(Local_5825.f_1));
			}
		}
	}
	if (iLocal_6561 > 1)
	{
		if (iLocal_6307 == 0)
		{
			if (!PED::IS_PED_INJURED(Local_5825))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6553))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_6553) == 1f)
					{
						uLocal_6553 = PED::CREATE_SYNCHRONIZED_SCENE(-46.236f, 3096.727f, 25.513f, 3f, 0f, -162.72f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_6553, "misstrevor1", "ortega_kneel_loop_ort", 1000f, -1000f, 1, 16, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_6553, 1);
						iLocal_6307 = 1;
					}
				}
			}
		}
	}
	if (iLocal_6324 == 0)
	{
		PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(2));
		func_500();
		func_460(5, "Kill / Threaten Ortega", 0, 0, 0, 1);
		iLocal_6425 = 0;
		iLocal_6324 = 1;
	}
	if (!iLocal_6315)
	{
		if (!func_89("TRIGGER STAGE START"))
		{
			func_460(5, "Kill / Threaten Ortega", 0, 0, 0, 1);
			func_459();
			func_564(Local_7150.f_1);
			func_455();
			func_454();
			func_449(6);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			SYSTEM::SETTIMERA(0);
			if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1"))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6553))
				{
					if (!PED::IS_PED_INJURED(Local_5825) && !PED::IS_PED_INJURED(Local_5759))
					{
						uLocal_6553 = PED::CREATE_SYNCHRONIZED_SCENE(-46.236f, 3096.727f, 25.513f, 3f, 0f, -162.72f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_6553, "misstrevor1", "ortega_stand_loop_ort", 1000f, -1000f, 261, 16, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_6553, 1);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_6147, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			STREAMING::REMOVE_IPL("TRV1_Trail_start");
			STREAMING::REQUEST_IPL("TRV1_Trail_end");
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_122(1);
			}
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			iLocal_6307 = 0;
			iLocal_6561 = 0;
			iLocal_7396 = 0;
			iLocal_7404 = 0;
			iLocal_7399 = 0;
			iLocal_818 = 0;
			bLocal_699 = true;
			iLocal_6283 = MISC::GET_GAME_TIMER();
			func_88("TRIGGER STAGE START", 1);
		}
		if (!iLocal_6343)
		{
			func_453();
			iLocal_6343 = 1;
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (GlobalFunc_588(&iLocal_6283, 1800))
			{
				func_553(500);
				iLocal_6315 = 1;
			}
		}
		else
		{
			iLocal_6315 = 1;
		}
	}
	else
	{
		if (PED::IS_PED_INJURED(Local_5825))
		{
			if (iLocal_6561 > 0 && iLocal_6561 < 3)
			{
				iLocal_6561 = 3;
			}
		}
		if (iLocal_6561 > 0 && iLocal_6561 < 2)
		{
			if (!GlobalFunc_701())
			{
				GlobalFunc_7632(1);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 188, 1);
		}
		else if (GlobalFunc_701())
		{
			GlobalFunc_7632(0);
		}
		switch (iLocal_6561)
		{
			case 0:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_5825.f_1))
					{
						if (!PED::IS_PED_INJURED(Local_5825))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_5825, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							Local_5825.f_1 = GlobalFunc_6783(Local_5825, 1, 0);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_6147, 0);
					}
					if (!PED::IS_PED_INJURED(Local_5825))
					{
						ENTITY::SET_ENTITY_PROOFS(Local_5825, 0, 0, 0, 0, 0, 0, 0, 0);
						PED::SET_PED_CONFIG_FLAG(Local_5825, 185, 1);
						PED::SET_PED_CONFIG_FLAG(Local_5825, 118, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_5825, 0);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_5825, 0);
						PED::SET_PED_CAN_RAGDOLL(Local_5825, 1);
						ENTITY::SET_ENTITY_HEALTH(Local_5825, 110);
					}
					if (!PED::IS_PED_INJURED(Local_5759))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_5759, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						AUDIO::STOP_PED_SPEAKING(Local_5759, 1);
					}
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun")) < 2)
					{
						WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 10);
					}
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 1);
					}
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 1);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					HUD::CLEAR_PRINTS();
					MISC::SET_TIME_SCALE(1f);
					iLocal_7399 = 0;
					iLocal_6331 = 0;
					iLocal_7401 = 0;
					iLocal_7402 = 0;
					iLocal_7403 = 0;
					iLocal_7404 = 0;
					iLocal_6307 = 0;
					iLocal_6308 = 0;
					func_569(Local_7150.f_114, 7500);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_THREATEN_ORTEGA"))
					{
						AUDIO::START_AUDIO_SCENE("TREVOR_1_THREATEN_ORTEGA");
					}
					if (!PED::IS_PED_INJURED(Local_5825))
					{
						GlobalFunc_5653(Local_5825, "T1M1_GGAA", "ORTEGA", 3);
					}
					GlobalFunc_2781(500);
					iLocal_6561++;
				}
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(Local_5825))
				{
					if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_5825) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_5825)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_5825, PLAYER::PLAYER_PED_ID())) || GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_5825, 0), 0.5f))
					{
						if (HUD::DOES_BLIP_EXIST(Local_5825.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_5825.f_1));
						}
						if (GlobalFunc_663(Local_7150.f_114, 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6553))
						{
							uLocal_6553 = PED::CREATE_SYNCHRONIZED_SCENE(-46.236f, 3096.727f, 25.513f, 3f, 0f, -162.72f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_6553, "misstrevor1", "ortega_stand_to_kneel_ort", 8f, -8f, 261, 16, 1148846080, 0);
							iLocal_6561++;
						}
					}
					else if (!iLocal_7402)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5825))
						{
							if (!GlobalFunc_5172(&Local_6221, 1))
							{
								if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_IG4A", 7, 0, 0, 0))
								{
									iLocal_7402 = 1;
									iLocal_6279 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					else if (GlobalFunc_588(&iLocal_6279, MISC::GET_RANDOM_INT_IN_RANGE(10000, 12000)))
					{
						iLocal_7402 = 0;
					}
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(Local_5825))
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_5825, 0), 0.5f))
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5825))
							{
								if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_ORTGAS", 7, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									Local_5825.f_1 = GlobalFunc_6783(Local_5825, 1, 0);
									iLocal_6425 = 0;
									iLocal_6320 = 0;
									func_500();
									iLocal_6561++;
								}
							}
						}
						else
						{
							SYSTEM::SETTIMERA(0);
							Local_5825.f_1 = GlobalFunc_6783(Local_5825, 1, 0);
							iLocal_6425 = 0;
							iLocal_6320 = 0;
							func_500();
							iLocal_6561++;
						}
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_5825))
					{
						if (!PED::IS_PED_INJURED(Local_5825))
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(Local_5825, 1, 0f, 4f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_5825.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_5825.f_1));
					}
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					HUD::SET_RADAR_ZOOM(0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_6147, 1);
					}
					iLocal_6561++;
				}
				break;
			
			case 3:
				if (!PED::IS_PED_INJURED(Local_5825))
				{
					if (!iLocal_7401)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5825))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_6221, 1))
								{
									if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_THREAT", 7, 0, 0, 0))
									{
										iLocal_7401 = 1;
									}
								}
							}
						}
					}
				}
				if (PED::IS_PED_INJURED(Local_5825))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_THREATEN_ORTEGA"))
					{
						AUDIO::STOP_AUDIO_SCENE("TREVOR_1_THREATEN_ORTEGA");
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(1);
					}
					else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_ORTEGA_KILLED"))
					{
						AUDIO::START_AUDIO_SCENE("TREVOR_1_ORTEGA_KILLED");
					}
					if (iLocal_7406 == 0)
					{
						GlobalFunc_4935();
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", sLocal_7405, 7, 0, 0, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_5825))
							{
								if (!PED::IS_PED_INJURED(Local_5825))
								{
									ENTITY::APPLY_FORCE_TO_ENTITY(Local_5825, 1, 0f, 4f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
								}
							}
							if (HUD::DOES_BLIP_EXIST(Local_5825.f_1))
							{
								HUD::REMOVE_BLIP(&(Local_5825.f_1));
							}
							RECORDING::_0x293220DA1B46CEBC(3f, 3f, 4);
							GlobalFunc_585(132, 1);
							iLocal_7406 = 1;
						}
					}
					else if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_6221, 1))
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_RONORTD", 7, 0, 0, 0))
							{
								if (!PED::IS_PED_INJURED(Local_5759))
								{
									TASK::CLEAR_PED_TASKS(Local_5759);
								}
								iLocal_6561++;
							}
						}
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(Local_5825))
					{
						if (PED::IS_PED_RAGDOLL(Local_5825))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_5825, 0);
						}
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_5825, 0), 1) > 7f)
					{
						if (HUD::DOES_BLIP_EXIST(Local_5825.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_5825.f_1));
						}
						GlobalFunc_5105();
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_NOSH", 7, 0, 0, 0))
						{
							if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_5825))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6553))
								{
									uLocal_6553 = PED::CREATE_SYNCHRONIZED_SCENE(-46.236f, 3096.727f, 25.513f, 3f, 0f, -162.72f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_6553, "misstrevor1", "ortega_kneel_outro_ort", 8f, -8f, 261, 16, 1148846080, 0);
									func_88("ORTEGA SPARED", 1);
									if (!PED::IS_PED_INJURED(Local_5759))
									{
										TASK::CLEAR_PED_TASKS(Local_5759);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
									{
										VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_6147, 1);
									}
									iLocal_7400 = MISC::GET_GAME_TIMER();
									iLocal_818 = 1;
									iLocal_6561++;
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(Local_5759))
								{
									TASK::CLEAR_PED_TASKS(Local_5759);
								}
								TASK::TASK_SMART_FLEE_PED(Local_5825, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
								func_88("ORTEGA SPARED", 1);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
								{
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_6147, 1);
								}
								iLocal_6561++;
							}
						}
					}
					else if (iLocal_7401 == 1)
					{
						if (!iLocal_7403)
						{
							if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_5825, 0), 0.5f))
							{
								if (!GlobalFunc_5172(&Local_6221, 1))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_ORTGAS", 7, 0, 0, 0))
										{
											iLocal_7403 = 1;
											iLocal_6279 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
							else if (!GlobalFunc_5172(&Local_6221, 1))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_BEG", 7, 0, 0, 0))
									{
										iLocal_7403 = 1;
										iLocal_6279 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						else if (GlobalFunc_588(&iLocal_6279, MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000)))
						{
							if (!GlobalFunc_5172(&Local_6221, 1))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_COWER", 7, 0, 0, 0))
									{
										iLocal_7403 = 0;
									}
								}
							}
						}
					}
				}
				break;
		}
		if (iLocal_6561 >= 4)
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_THREATEN_ORTEGA"))
			{
				AUDIO::STOP_AUDIO_SCENE("TREVOR_1_THREATEN_ORTEGA");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_6147, 1);
			}
			STREAMING::REMOVE_ANIM_DICT("MISSCOMMON@HANDS_UP_FLINCH");
			PLAYER::SET_MAX_WANTED_LEVEL(6);
			HUD::SET_RADAR_ZOOM(0);
			GlobalFunc_200(&Local_6622, 5);
			if (!PED::IS_PED_INJURED(Local_5759))
			{
				AUDIO::STOP_PED_SPEAKING(Local_5759, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5759, 0);
				if (!PED::IS_PED_GROUP_MEMBER(Local_5759, GlobalFunc_468()))
				{
					TASK::CLEAR_PED_TASKS(Local_5759);
					PED::SET_PED_AS_GROUP_MEMBER(Local_5759, GlobalFunc_468());
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_5825.f_1))
			{
				HUD::REMOVE_BLIP(&(Local_5825.f_1));
			}
			func_107();
			AUDIO::RESET_TREVOR_RAGE();
			iLocal_6315 = 0;
			iLocal_6324 = 0;
			return 1;
		}
	}
	return 0;
}








void func_564(int iParam0)//Position - 0x641D5
{
	int iVar0;
	
	iVar0 = func_565(iParam0);
	if (iVar0 != -1)
	{
		Local_6793[iVar0 /*3*/].f_1 = 1;
	}
}

int func_565(int iParam0)//Position - 0x641F5
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = -1;
	bVar1 = false;
	iVar2 = 0;
	while (!bVar1)
	{
		if (Local_6793[iVar2 /*3*/] == iParam0)
		{
			bVar1 = true;
			iVar0 = iVar2;
		}
		else
		{
			iVar2++;
			if (iVar2 >= iLocal_6792)
			{
				bVar1 = true;
			}
		}
	}
	return iVar0;
}

void func_566()//Position - 0x64238
{
	if (HUD::DOES_BLIP_EXIST(Local_5825.f_1))
	{
		func_567(&(Local_5825.f_1), &(Local_5825.f_8), &(Local_5825.f_7));
	}
	if (iLocal_6425 == 0)
	{
		iLocal_6425 = 1;
	}
	if (!HUD::DOES_BLIP_EXIST(Local_5825.f_1))
	{
	}
}

int func_567(var uParam0, var uParam1, var uParam2)//Position - 0x64278
{
	if ((MISC::GET_GAME_TIMER() - *uParam1) > 500)
	{
		if (*uParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(*uParam0, true);
			HUD::SET_BLIP_COLOUR(*uParam0, 3);
			*uParam1 = MISC::GET_GAME_TIMER();
			*uParam2 = 0;
			return 1;
		}
		else
		{
			HUD::SET_BLIP_COLOUR(*uParam0, 1);
			HUD::SET_BLIP_AS_FRIENDLY(*uParam0, false);
			*uParam1 = MISC::GET_GAME_TIMER();
			*uParam2 = 1;
			return 1;
		}
	}
	return 0;
}


void func_569(char* sParam0, int iParam1)//Position - 0x642F7
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (!MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		{
			GlobalFunc_164(sParam0, iParam1, 1);
		}
	}
}

void func_570()//Position - 0x6431F
{
	switch (iLocal_7396)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("MISSCOMMON@HANDS_UP_FLINCH");
			if (STREAMING::HAS_ANIM_DICT_LOADED("MISSCOMMON@HANDS_UP_FLINCH"))
			{
				iLocal_7396++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_5825))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_5825, 0), 5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_5825, 0), 10f, 1, 1))
				{
					iLocal_7396++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(Local_5825))
			{
				iLocal_7397 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				if (iLocal_7397 == 0)
				{
					TASK::TASK_PLAY_ANIM(Local_5825, "MISSCOMMON@HANDS_UP_FLINCH", "FLINCH_ADDITIVE_A", 8f, -8f, -1, 288, 0f, 0, 0, 0);
				}
				if (iLocal_7397 == 1)
				{
					TASK::TASK_PLAY_ANIM(Local_5825, "MISSCOMMON@HANDS_UP_FLINCH", "FLINCH_ADDITIVE_B", 8f, -8f, -1, 288, 0f, 0, 0, 0);
				}
				if (iLocal_7397 == 2)
				{
					TASK::TASK_PLAY_ANIM(Local_5825, "MISSCOMMON@HANDS_UP_FLINCH", "FLINCH_ADDITIVE_C", 8f, -8f, -1, 288, 0f, 0, 0, 0);
				}
				iLocal_7396++;
				iLocal_7398 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 3:
			if (GlobalFunc_588(&iLocal_7398, 1800))
			{
				iLocal_7396 = 1;
			}
			break;
	}
}

int func_571()//Position - 0x6445F
{
	struct<3> Var0;
	int iVar3;
	
	PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_5825))
	{
		if (PED::IS_PED_INJURED(Local_5825) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_5825, PLAYER::PLAYER_PED_ID(), 1))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
			func_31(16);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_6564, -30.08188f, 3046.693f, 48.06496f, -40.07621f, 3069.23f, 31.24353f, 11.25f, 0, 1, 0))
		{
			VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_6564, 0.35f);
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_6564, -435.0204f, -1242.034f, 48.43407f, -448.8804f, -1342.776f, 30.26572f, 24f, 0, 1, 0))
		{
			VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_6564, 0.3f);
		}
		else
		{
			VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_6564, 0.65f);
		}
	}
	if (!PED::IS_PED_INJURED(Local_5825))
	{
		PED::SET_PED_RESET_FLAG(Local_5825, 249, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_7394))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_7394))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (!iLocal_7395)
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_6147, iLocal_7394))
					{
						ENTITY::SET_ENTITY_LIGHTS(iLocal_7394, 0);
						OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_7394, -1, 0);
						iLocal_7395 = 1;
					}
				}
			}
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_7394))
	{
		iLocal_7394 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1700.87f, 3295.02f, 45.95f, 1f, joaat("prop_wall_light_02a"), 1, 0, 1);
	}
	GlobalFunc_163();
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	GlobalFunc_187();
	if (iLocal_6561 < 2)
	{
		if (!func_89("T1M1_ORT"))
		{
			if (!PED::IS_PED_INJURED(Local_5825))
			{
				GlobalFunc_5653(Local_5825, "T1M1_GDAA", "ORTEGA", 11);
				iLocal_7387 = MISC::GET_GAME_TIMER();
				func_88("T1M1_ORT", 1);
			}
		}
		else if (GlobalFunc_588(&iLocal_7387, MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000)))
		{
			func_88("T1M1_ORT", 0);
		}
	}
	else if (iLocal_6561 < 4)
	{
		Var0 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_6564) };
		if (!func_89("T1M1_ORT2"))
		{
			if (Var0.f_1 > 0f)
			{
				if (!PED::IS_PED_INJURED(Local_5825))
				{
					GlobalFunc_5653(Local_5825, "T1M1_GEAA", "ORTEGA", 11);
					iLocal_7387 = MISC::GET_GAME_TIMER();
					func_88("T1M1_ORT2", 1);
				}
			}
		}
		else if (GlobalFunc_588(&iLocal_7387, MISC::GET_RANDOM_INT_IN_RANGE(15000, 18000)))
		{
			func_88("T1M1_ORT2", 0);
		}
	}
	else if (!func_89("T1M1_ORT3"))
	{
		if (!PED::IS_PED_INJURED(Local_5825))
		{
			GlobalFunc_5653(Local_5825, "T1M1_GFAA", "ORTEGA", 11);
			iLocal_7387 = MISC::GET_GAME_TIMER();
			func_88("T1M1_ORT3", 1);
		}
	}
	else if (GlobalFunc_588(&iLocal_7387, MISC::GET_RANDOM_INT_IN_RANGE(15000, 18000)))
	{
		func_88("T1M1_ORT3", 0);
	}
	if (iLocal_6561 > 0 && iLocal_6561 < 4)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 71))
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_7386))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_7386, "TREVOR_1_RAM_TRAILER_REVS", Local_6147, 0, 0, 0);
					}
				}
				else
				{
					AUDIO::STOP_SOUND(iLocal_7386);
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_7386);
			}
		}
	}
	func_591();
	iVar3 = joaat("weapon_pumpshotgun");
	if (iLocal_6561 < 3)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_702);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_702);
	}
	if (!iLocal_7389)
	{
		if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_1_TRAILER_IMPACTS", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_1_TRAILER_IMPACTS_1", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_1_TRAILER_IMPACTS_2", 0))
		{
			iLocal_7389 = 1;
		}
	}
	if (iLocal_6561 > 0 && iLocal_6561 < 4)
	{
		if (iLocal_7390 == 0)
		{
			if (!iLocal_715)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
				{
					if (!PED::IS_PED_INJURED(Local_5825))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_828))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_828) > 0.99f)
							{
								uLocal_828 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_828, "misstrevor1ig_7", "Ortega_02_Trevor_Arrival_Reaction", 4f, -8f, 0, 0, 1148846080, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_828, iLocal_6564, -1);
								iLocal_715 = 1;
							}
						}
					}
				}
			}
			else if (!func_89("SHOUT IDLE"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
				{
					if (!PED::IS_PED_INJURED(Local_5825))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_828))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_828) > 0.99f)
							{
								uLocal_828 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_828, "misstrevor1ig_7", "Ortega_03_Shouting_Idle", 8f, -8f, 0, 0, 1148846080, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_828, iLocal_6564, -1);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_828, 1);
								func_88("SHOUT IDLE", 1);
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_6324 == 0)
	{
		PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(2));
		func_500();
		func_460(4, "Push the trailer", 0, 0, 0, 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		iLocal_6342 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
		bLocal_6340 = true;
		CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
		iLocal_6339 = 1;
		iLocal_6324 = 1;
	}
	func_590();
	func_589();
	if (!iLocal_6315)
	{
		func_460(4, "Push the trailer", 0, 0, 0, 1);
		GlobalFunc_860();
		func_459();
		func_455();
		STREAMING::REQUEST_MODEL(joaat("proptrailer"));
		STREAMING::REQUEST_MODEL(GlobalFunc_4946(38));
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::LOAD_SCENE(-19.4662f, 3023.335f, 39.9864f);
			func_587();
			while (iLocal_6426 == 1)
			{
				SYSTEM::WAIT(0);
			}
		}
		if (iLocal_6308 == 0)
		{
		}
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		func_454();
		func_449(6);
		STREAMING::REMOVE_IPL("TRV1_Trail_end");
		STREAMING::REQUEST_IPL("TRV1_Trail_start");
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "trev1");
		iLocal_6428 = 1;
		iLocal_6315 = 1;
		iLocal_7389 = 0;
		bLocal_7392 = false;
		iLocal_6431 = 0;
		iLocal_6432 = 0;
		iLocal_6433 = 0;
		bLocal_699 = true;
		iLocal_6561 = 0;
		if (!iLocal_6343)
		{
			func_453();
			iLocal_6343 = 1;
		}
	}
	else
	{
		switch (iLocal_6561)
		{
			case 0:
				if (iLocal_6308 == 1)
				{
					STREAMING::REQUEST_ANIM_DICT("misstrevor1ig_7");
					if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1ig_7"))
					{
						uLocal_718 = CAM::CREATE_CAMERA(26379945, 1);
						CAM::SET_CAM_PARAMS(uLocal_718, -7.0672f, 3000.614f, 41.8584f, -6.9699f, -0.1718f, 33.9582f, 27.386f, 0, 1, 1, 2);
						CAM::SET_CAM_FOV(uLocal_718, 27.386f);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_718, 0f);
						CAM::SET_CAM_ACTIVE(uLocal_718, 1);
						CAM::SHAKE_CAM(uLocal_718, "HAND_SHAKE", 0.6f);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						HUD::LOCK_MINIMAP_ANGLE(29);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
						{
							if (!PED::IS_PED_INJURED(Local_5825))
							{
								uLocal_828 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_828, "misstrevor1ig_7", "Ortega_03_Shouting_Idle", 8f, -8f, 0, 0, 1148846080, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_828, iLocal_6564, -1);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_828, 1);
							}
						}
						STREAMING::REQUEST_PTFX_ASSET();
						STREAMING::REQUEST_ANIM_DICT("misstrevor1");
						iLocal_6308 = 0;
						func_553(500);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
						{
							VEHICLE::SET_VEHICLE_BURNOUT(Local_6147, 1);
						}
						iLocal_6260 = MISC::GET_GAME_TIMER();
						GlobalFunc_702(0, 0, 1);
						iLocal_7390 = 1;
						iLocal_6561++;
					}
				}
				else
				{
					STREAMING::REQUEST_ANIM_DICT("misstrevor1ig_7");
					if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1ig_7"))
					{
						STREAMING::REQUEST_ANIM_DICT("misstrevor1");
						STREAMING::REQUEST_PTFX_ASSET();
						GlobalFunc_702(0, 0, 1);
						iLocal_7390 = 0;
						iLocal_7393 = MISC::GET_GAME_TIMER();
						iLocal_6561++;
					}
				}
				break;
			
			case 1:
				PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 285, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 283, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 284, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
				if (HUD::DOES_BLIP_EXIST(uLocal_6567))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 71) || PAD::IS_CONTROL_PRESSED(0, 71))
					{
						STREAMING::REQUEST_ANIM_DICT("misstrevor1");
						if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1"))
						{
							if (!PED::IS_PED_INJURED(Local_5759))
							{
								PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_5759, 1);
							}
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_6147, 1);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
							{
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6564, 0);
								VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_6564, 0.4f);
							}
							VEHICLE::REQUEST_VEHICLE_RECORDING(1, "pushtrailer");
							uLocal_717 = CAM::CREATE_CAMERA(26379945, 0);
							CAM::DETACH_CAM(uLocal_717);
							CAM::DETACH_CAM(uLocal_718);
							CAM::SET_CAM_PARAMS(uLocal_718, CAM::GET_CAM_COORD(uLocal_718), CAM::GET_CAM_ROT(uLocal_718, 2), CAM::GET_CAM_FOV(uLocal_718), 0, 1, 1, 2);
							CAM::SHAKE_CAM(uLocal_718, "ROAD_VIBRATION_SHAKE", 0.4f);
							Local_7382 = { func_586() };
							Local_7382.f_2 = 41.9f;
							CAM::SET_CAM_COORD(uLocal_717, Local_7382);
							CAM::SET_CAM_ROT(uLocal_717, -6.8007f, 0.0945f, 34.2821f, 2);
							Local_7379 = { func_586() };
							Local_7382 = { Local_7382 + Local_7379 - Local_7382 * FtoV((7.5f * MISC::GET_FRAME_TIME())) };
							Local_7382.f_2 = 41.9f;
							CAM::SET_CAM_COORD(uLocal_717, Local_7382);
							CAM::SET_CAM_FOV(uLocal_717, 27.386f);
							CAM::SHAKE_CAM(uLocal_717, "ROAD_VIBRATION_SHAKE", 0.2f);
							CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_717, 0f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_717, uLocal_718, 2000, 1, 1);
							iLocal_6260 = MISC::GET_GAME_TIMER();
							if (GlobalFunc_74("TRV_ACCEL"))
							{
								HUD::CLEAR_HELP(1);
							}
							iLocal_6326 = 1;
							CUTSCENE::REMOVE_CUTSCENE();
							GlobalFunc_8380(0, 1, 0, 0);
							AUDIO::PREPARE_MUSIC_EVENT("TRV1_RAM_TRAILER");
							func_88("T1M1_PT1", 1);
							GlobalFunc_5105();
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
							{
								if (!PED::IS_PED_INJURED(Local_5825))
								{
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_5825, iLocal_6564, 0);
								}
							}
							iLocal_6561++;
						}
					}
				}
				else
				{
					if (GlobalFunc_588(&iLocal_7393, 6000))
					{
						GlobalFunc_5105();
					}
					if (!GlobalFunc_111())
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						GlobalFunc_159("TRV_ACCEL", -1);
						func_569("TRV_PUSH", 7500);
						uLocal_6567 = GlobalFunc_5104(-49.0106f, 3098.955f, 24.7669f, 0);
					}
				}
				break;
			
			case 2:
				PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 285, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 283, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 284, 1);
				Local_7379 = { func_586() };
				Local_7382 = { Local_7379 };
				Local_7382.f_2 = 41.9f;
				CAM::SHAKE_CAM(uLocal_717, "ROAD_VIBRATION_SHAKE", 0.2f);
				if (GlobalFunc_588(&iLocal_6260, 2000))
				{
					AUDIO::PREPARE_MUSIC_EVENT("TRV1_RAM_TRAILER");
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_RAM_TRAILER"))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
						{
							VEHICLE::SET_VEHICLE_BURNOUT(Local_6147, 0);
							if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6353) && GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6354))
							{
								GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_6353, 0);
								GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_6354, 0);
								iLocal_6327 = 0;
							}
							iLocal_6326 = 0;
						}
						CUTSCENE::REMOVE_CUTSCENE();
						CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_3_CONCAT", 8);
						GlobalFunc_5105();
						iLocal_6436 = 1;
						iLocal_6332 = 0;
						iLocal_6261 = 0;
						iLocal_7385 = 0;
						iLocal_7388 = 0;
						STREAMING::_0x95A7DABDDBB78AE7("CS3_05_water_grp1", "CS3_05_water_grp2");
						iLocal_6561++;
					}
				}
				break;
			
			case 3:
				CAM::_0x59424BD75174C9B1();
				if (!func_89("T1M1_EDA"))
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_EDA", 7, 0, 0, 0))
							{
								func_88("T1M1_EDA", 1);
							}
						}
					}
					else
					{
						GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "T1M1_EDAA", "TREVOR", 34);
						func_88("T1M1_EDA", 1);
					}
				}
				else if (!func_89("T1M1_SPECIAL"))
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_SPECIAL", 7, 0, 0, 0))
							{
								func_88("T1M1_SPECIAL", 1);
							}
						}
					}
					else if (!GlobalFunc_111())
					{
						GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "T1M1_GKAA", "TREVOR", 34);
						func_88("T1M1_EDA", 1);
					}
				}
				func_584();
				Local_7379 = { func_586() };
				Local_7382 = { Local_7379 };
				Local_7382.f_2 = 41.9f;
				if (CAM::DOES_CAM_EXIST(uLocal_717))
				{
					if (!CAM::IS_CAM_INTERPOLATING(uLocal_717) && !CAM::IS_CAM_INTERPOLATING(uLocal_718))
					{
						CAM::SET_CAM_COORD(uLocal_717, Local_7382);
						CAM::SHAKE_CAM(uLocal_717, "ROAD_VIBRATION_SHAKE", 0.3f);
					}
				}
				if (iLocal_6436 == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_6147, -20.86685f, 3021.173f, 39.50019f, -17.27662f, 3023.548f, 43.2811f, 7f, 0, 1, 0))
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_6147) < 3f)
							{
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_6147, 3f);
							}
						}
					}
					if (!bLocal_7392)
					{
						if (iLocal_6428 == 0)
						{
							func_583();
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_6147, 0);
						ENTITY::SET_ENTITY_PROOFS(Local_6147, 0, 0, 0, 1, 0, 0, 0, 0);
					}
					PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 285, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 283, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 284, 1);
				}
				else if (iLocal_6332 == 0)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_EEB", 7, 0, 0, 0))
						{
							iLocal_6332 = 1;
						}
					}
				}
				else if (!func_89("T1M1_EGA"))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_EGA", 7, 0, 0, 0))
						{
							func_88("T1M1_EGA", 1);
						}
					}
				}
				if (iLocal_6436 == 0)
				{
					if (iLocal_6321 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
						{
							if (!PED::IS_PED_INJURED(Local_5825))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_828))
								{
									if (!bLocal_7392)
									{
										uLocal_828 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_828, "misstrevor1ig_7", "Ortega_06_Fall_Back_Into_Trailer", 8f, -8f, 0, 0, 1148846080, 0);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_828, iLocal_6564, -1);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_828, 0);
										bLocal_7392 = true;
									}
								}
							}
						}
					}
				}
				if (bLocal_7392)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						if (!PED::IS_PED_INJURED(Local_5825))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_828))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_828) > 0.99f)
								{
									if (!func_89("FALL BACK LOOP"))
									{
										uLocal_828 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_828, "misstrevor1ig_7", "Ortega_07_Holding_Onto_Side_Wall_Idle", 8f, -8f, 0, 0, 1148846080, 0);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_828, iLocal_6564, -1);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_828, 1);
										func_88("FALL BACK LOOP", 1);
									}
								}
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_6564, -101.2708f, 3104.847f, 22.0871f, -16.64432f, 3122.307f, 26.64207f, 28.25f, 0, 1, 0))
				{
					if (iLocal_6435 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev1_trailer_splash", iLocal_6564, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
							iLocal_6435 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_6564))
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_6564, -101.2708f, 3104.847f, 22.0871f, -16.64432f, 3122.307f, 26.64207f, 28.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_6564, -45.0578f, 3085.645f, 24.61068f, -46.8141f, 3118.266f, 33.36924f, 23.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_6564, -59.43705f, 3101.389f, 23.71039f, -13.1343f, 3108.064f, 35.35013f, 35.25f, 0, 1, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
						{
							ENTITY::SET_ENTITY_PROOFS(iLocal_6564, 0, 0, 0, 0, 0, 0, 0, 0);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_6564, 0);
						}
						PAD::SET_PAD_SHAKE(0, 2000, 256);
						SYSTEM::SETTIMERB(0);
						if (HUD::DOES_BLIP_EXIST(uLocal_6567))
						{
							HUD::REMOVE_BLIP(&uLocal_6567);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_6568))
						{
							HUD::REMOVE_BLIP(&uLocal_6568);
						}
						SYSTEM::SETTIMERB(0);
						GlobalFunc_7632(0);
						iLocal_694 = 0;
						GlobalFunc_4935();
						CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_3_CONCAT", 8);
						iLocal_7391 = 0;
						iLocal_6561++;
					}
					else if (func_513(&Local_6221, -49.0106f, 3098.955f, 24.7669f, 0.1f, 0.1f, 0.1f, 0, Local_5759, Local_6147, "", "TRV_BDY2", "", Local_7150.f_111, 0, 0, 1, -1))
					{
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Local_6221.f_5))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_6564))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_6564, 0);
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_6567))
							{
								HUD::SET_BLIP_ALPHA(uLocal_6567, 255);
							}
							HUD::SET_BLIP_ALPHA(Local_6221.f_5, 0);
							HUD::SET_BLIP_ROUTE(Local_6221.f_5, 0);
							if (!HUD::DOES_BLIP_EXIST(uLocal_6567))
							{
								uLocal_6567 = GlobalFunc_5104(-49.0106f, 3098.955f, 24.7669f, 0);
								GlobalFunc_159("TRV_ACCEL", -1);
								func_569("TRV_PUSH", 7500);
							}
							else if (iLocal_6436 == 0)
							{
								if (!iLocal_7388)
								{
									if (!GlobalFunc_5172(&Local_6221, 1))
									{
										if (!GlobalFunc_111())
										{
											if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_EFA", 7, 0, 0, 0))
											{
												iLocal_7388 = 1;
												iLocal_820 = MISC::GET_GAME_TIMER();
												iLocal_7385++;
											}
										}
									}
								}
								else if (iLocal_7385 < 3)
								{
									if (!GlobalFunc_588(&iLocal_820, MISC::GET_RANDOM_INT_IN_RANGE(2000, 7000)))
									{
										iLocal_7388 = 0;
									}
								}
							}
						}
						else
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_6567))
							{
								HUD::SET_BLIP_ALPHA(uLocal_6567, 0);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_6564))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_6564, 1);
							}
							if (GlobalFunc_111())
							{
								GlobalFunc_5105();
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_6564))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_6564, 1) > 60f)
							{
								func_31(15);
							}
						}
					}
				}
				break;
			
			case 4:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_6564, -101.2708f, 3104.847f, 22.0871f, -16.64432f, 3122.307f, 26.64207f, 28.25f, 0, 1, 0))
				{
					if (iLocal_6435 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev1_trailer_splash", iLocal_6564, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
							iLocal_6435 = 1;
						}
					}
				}
				if (bLocal_7392)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						if (!PED::IS_PED_INJURED(Local_5825))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_828))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_828) > 0.99f)
								{
									if (!func_89("FALL BACK LOOP"))
									{
										uLocal_828 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_828, "misstrevor1ig_7", "Ortega_07_Holding_Onto_Side_Wall_Idle", 8f, -8f, 0, 0, 1148846080, 0);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_828, iLocal_6564, -1);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_828, 1);
										func_88("FALL BACK LOOP", 1);
									}
								}
							}
						}
					}
				}
				if (func_89("FALL BACK LOOP"))
				{
					if (iLocal_7391 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
						{
							if (!PED::IS_PED_INJURED(Local_5825))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_828))
								{
									uLocal_828 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_828, "misstrevor1ig_7", "Ortega_08_Run_To_Door_Outro", 8f, -8f, 0, 0, 1148846080, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_828, iLocal_6564, -1);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_828, 0);
									iLocal_7391 = 1;
								}
							}
						}
					}
				}
				if (SYSTEM::TIMERB() > 500)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6313))
					{
						GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6313, 0);
					}
				}
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				if (SYSTEM::TIMERB() > 20)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6313))
					{
						GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6313, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						VEHICLE::SET_VEHICLE_STRONG(iLocal_6564, 0);
					}
					func_581(0, 1045220557, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_6147))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 17891328);
						}
						if (!PED::IS_PED_INJURED(Local_5759))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(Local_5759, 0, 17891328);
						}
					}
					iLocal_4342 = 0;
					iLocal_6335 = 0;
					iLocal_694 = 0;
					AUDIO::STOP_SOUND(iLocal_7386);
					iLocal_6561++;
				}
				else
				{
					VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_6564, 0.3f);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_6564, 1, 0f, 1f, -1f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
					}
				}
				break;
			
			case 5:
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				func_572();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_6147, 1);
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0))
				{
					if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, 1))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 1);
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_6147, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
				{
					if (!PED::IS_PED_INJURED(Local_5825))
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_5825, iLocal_6564, 1);
					}
				}
				iLocal_6561++;
				break;
			
			case 6:
				if (!PED::IS_PED_INJURED(Local_5825) && !PED::IS_PED_INJURED(Local_5759))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_6564, 1, 1);
					}
					if (ENTITY::IS_ENTITY_ATTACHED(Local_5825))
					{
						ENTITY::DETACH_ENTITY(Local_5825, 1, 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						ENTITY::SET_ENTITY_PROOFS(Local_6147, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.3f);
					iLocal_6561++;
				}
				break;
		}
		if (iLocal_6561 >= 7)
		{
			func_107();
			iLocal_6324 = 0;
			iLocal_6307 = 0;
			iLocal_6315 = 0;
			return 1;
		}
	}
	return 0;
}

void func_572()//Position - 0x65A42
{
	int iVar0;
	
	iLocal_6321 = 1;
	while (iLocal_6321)
	{
		func_851();
		SYSTEM::WAIT(0);
		func_851();
		RECORDING::_0x208784099002BC30("M_MrPhilips", 0);
		if (iLocal_4342 == 0)
		{
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if (iLocal_696)
			{
				iLocal_696 = 0;
			}
			else if (iLocal_694 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
				{
					VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_6564, 0.3f);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_PUSH_THE_TRAILER"))
				{
					AUDIO::STOP_AUDIO_SCENE("TREVOR_1_PUSH_THE_TRAILER");
				}
				iLocal_6321 = 1;
				iLocal_703 = 0;
				func_454();
				func_449(0);
				CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_3_CONCAT", 8);
				STREAMING::REQUEST_ANIM_DICT("misstrevor1");
				iLocal_694++;
			}
			else if (iLocal_694 == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
				{
					VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_6564, 0.3f);
				}
				if ((GlobalFunc_Has_Cutscene_Loaded() && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1")) && STREAMING::_0xFB199266061F820A())
				{
					func_851();
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					else
					{
						SYSTEM::WAIT(0);
					}
					func_851();
					iLocal_7368 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 1, 0, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_7368))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_7368, "Trevors_weapon", 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (!PED::IS_PED_INJURED(Local_5759))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_5759, "Ron", 0, 0, 0);
							PED::REMOVE_PED_FROM_GROUP(Local_5759);
						}
					}
					if (!PED::IS_PED_INJURED(Local_5825))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_5825, "Ortega", 0, 0, 0);
						GlobalFunc_173(&Local_6622, 7, Local_5825, "ORTEGA", 0, 1);
					}
					if (!PED::IS_PED_INJURED(Local_5825))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_5825, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_5825);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_5825, 0);
					}
					if (ENTITY::IS_ENTITY_ATTACHED(Local_5825))
					{
						ENTITY::DETACH_ENTITY(Local_5825, 0, 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_6147, "Trevors_car", 0, 0, 0);
						ENTITY::SET_ENTITY_VISIBLE(Local_6147, 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_6564, "Ortega_Trailer", 0, 0, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_6564, 1);
					}
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_5825))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_5825, 1);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_828))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_5825, -1000f, 1);
					}
					CUTSCENE::START_CUTSCENE(2048);
					GlobalFunc_702(1, 0, 1);
					RECORDING::_0x48621C9FCA3EBD28(4);
					GlobalFunc_2772(5000);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					GlobalFunc_8380(1, 1, 0, 0);
					iLocal_6335 = 0;
					iLocal_7370 = 0;
					iLocal_693 = 0;
					iLocal_694 = 0;
					iLocal_4342 = 1;
				}
			}
		}
		if (iLocal_4342 == 1)
		{
			if (!iLocal_7370)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 1941)
				{
					iLocal_7367 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Ortega", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_7367))
					{
						iLocal_7369 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_7367);
						if (!PED::IS_PED_INJURED(iLocal_7369))
						{
							PED::SET_PED_WETNESS_HEIGHT(iLocal_7369, 2f);
							iLocal_7370 = 1;
						}
					}
				}
			}
			if (iLocal_703 == 0)
			{
				iLocal_6339 = 0;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
				{
					VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_6564, 0.3f);
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					STREAMING::_0xF4A0DADB70F57FA6();
					GlobalFunc_7621(3, 1, 0, 1, 0);
					GlobalFunc_7621(4, 1, 0, 1, 0);
					if (!PED::IS_PED_INJURED(Local_5825))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_5825, 1);
						PED::SET_PED_WETNESS_HEIGHT(Local_5825, 2f);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_6564, 1, 1, 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_6147, 0, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_6147, 1, 0, 0f);
					}
					MISC::CLEAR_AREA(-46.236f, 3096.727f, 25.713f, 100f, 1, 0, 0, 0);
					iLocal_829 = MISC::GET_GAME_TIMER();
					iLocal_703 = 1;
				}
			}
			else if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (GlobalFunc_588(&iLocal_829, 2000))
				{
					if (!iLocal_693)
					{
						if (GlobalFunc_1080())
						{
							GlobalFunc_2787(500);
							iLocal_4342 = 3;
						}
					}
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (bLocal_6340)
				{
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_6342);
					if ((!iLocal_6341 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) && CUTSCENE::GET_CUTSCENE_TIME() > (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - 300))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_6341 = 1;
					}
				}
				if (!func_89("TRV1_THREATEN"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_THREATEN"))
					{
						func_88("TRV1_THREATEN", 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(25.5704f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8.7712f, 1065353216);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_6564, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_6564, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_7368, PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -45.77f, 3094.91f, 25.9681f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 23.8494f);
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0))
				{
					iVar0 = joaat("weapon_pumpshotgun");
					if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 1);
					}
				}
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
				if (iLocal_6335 == 0)
				{
					iLocal_6335 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ron", 0))
			{
				if (!PED::IS_PED_INJURED(Local_5759))
				{
					ENTITY::SET_ENTITY_COORDS(Local_5759, -42.33623f, 3088.567f, 28.48037f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_5759, 34.38021f);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ortega_Trailer", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_6564, -51.98f, 3110.83f, 24.89f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_6564, 46.79f);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_6564, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_car", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_6147);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ortega", 0))
			{
				if (!PED::IS_PED_INJURED(Local_5825))
				{
					if (!func_89("ThreatenSceneMain"))
					{
						uLocal_6553 = PED::CREATE_SYNCHRONIZED_SCENE(-46.236f, 3096.727f, 25.513f, 3f, 0f, -162.72f, 2);
						ENTITY::DETACH_ENTITY(Local_5825, 1, 1);
						ENTITY::SET_ENTITY_PROOFS(Local_5825, 0, 0, 0, 0, 0, 0, 0, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_6553, "misstrevor1", "ortega_stand_loop_ort", 1000f, -1000f, 1, 16, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_6553, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_5825, 0, 0);
						func_88("ThreatenSceneMain", 1);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_703 == 1)
			{
				iLocal_4342 = 2;
			}
		}
		if (iLocal_4342 == 2)
		{
			STREAMING::REMOVE_IPL("TRV1_Trail_start");
			STREAMING::REQUEST_IPL("TRV1_Trail_end");
			if (iLocal_693)
			{
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			RECORDING::_0x81CBAE94390F9F89();
			GlobalFunc_8380(0, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			CUTSCENE::_0x06EE9048FD080382(0);
			GlobalFunc_702(0, 0, 1);
			iLocal_694 = 0;
			iLocal_4342 = 0;
			iLocal_6321 = 0;
		}
		if (iLocal_4342 == 3)
		{
			CUTSCENE::STOP_CUTSCENE(0);
			iLocal_693 = 1;
			iLocal_4342 = 1;
		}
	}
}









void func_581(int iParam0, float fParam1, int iParam2)//Position - 0x6A5EA
{
	float fVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
		{
			if (iParam2 == 1)
			{
				GlobalFunc_8380(1, 1, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 278, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 279, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			}
			fVar0 = ENTITY::GET_ENTITY_SPEED(iVar1);
			while (fVar0 > fParam1)
			{
				func_851();
				SYSTEM::WAIT(0);
				func_851();
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					fVar0 = ENTITY::GET_ENTITY_SPEED(iVar1);
					func_582(&iVar1);
					PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 278, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 279, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), iParam0, 0);
			GlobalFunc_8380(0, 1, 0, 0);
		}
	}
}

void func_582(int iParam0)//Position - 0x6A6CD
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		fLocal_6555 = ENTITY::GET_ENTITY_SPEED(*iParam0);
		if (fLocal_6555 > 7f)
		{
			if (iLocal_6319 == 0)
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), *iParam0, 6, 8000);
				TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), *iParam0, 24, 8000);
				iLocal_6319 = 1;
			}
		}
		else if (fLocal_6555 > 0.1f)
		{
			if (iLocal_6319 == 1)
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), *iParam0, 4, 8000);
				iLocal_6319 = 0;
			}
		}
		else if (iLocal_6319 == 0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			iLocal_6319 = 1;
		}
	}
}

int func_583()//Position - 0x6A75B
{
	SYSTEM::SETTIMERA(0);
	iLocal_6321 = 1;
	GlobalFunc_187();
	while (iLocal_6321)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_MrPhilips", 0);
		PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 278, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 279, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 286, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 287, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 79, 1);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_ARRIVE_AT_TRAILER"))
		{
			AUDIO::STOP_AUDIO_SCENE("TREVOR_1_ARRIVE_AT_TRAILER");
		}
		else if (!func_89("TREVOR_1_PUSH_THE_TRAILER"))
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_1_PUSH_THE_TRAILER");
			func_88("TREVOR_1_PUSH_THE_TRAILER", 1);
		}
		if (iLocal_6261 > 0)
		{
			if (iLocal_6332 == 0)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_EEB", 7, 0, 0, 0))
					{
						iLocal_6332 = 1;
					}
				}
			}
			else if (!func_89("T1M1_EGA"))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_EGA", 7, 0, 0, 0))
					{
						func_88("T1M1_EGA", 1);
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (PAD::IS_CONTROL_PRESSED(2, 208))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6147))
				{
					VEHICLE::SET_PLAYBACK_SPEED(Local_6147, 1f);
				}
			}
			else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6147))
			{
				VEHICLE::SET_PLAYBACK_SPEED(Local_6147, 0.5f);
			}
		}
		switch (iLocal_6261)
		{
			case 0:
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_TRAILER_SMASHED"))
				{
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					CAM::SET_WIDESCREEN_BORDERS(1, 0);
					CAM::DESTROY_ALL_CAMS(0);
					uLocal_717 = CAM::CREATE_CAMERA(26379945, 1);
					uLocal_718 = CAM::CREATE_CAMERA(26379945, 1);
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_717, Local_6147, 3.5569f, -1.6759f, 0.2972f, 1);
					CAM::POINT_CAM_AT_ENTITY(uLocal_717, Local_6147, 1.7662f, 0.6973f, 0.6989f, 1);
					CAM::SET_CAM_FOV(uLocal_717, 27.2793f);
					CAM::SHAKE_CAM(uLocal_717, "ROAD_VIBRATION_SHAKE", 2.5f);
					CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_717, 0.2f);
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_718, Local_6147, 0.0629f, -3.1695f, 1.5953f, 1);
					CAM::POINT_CAM_AT_ENTITY(uLocal_718, Local_6147, 0.0554f, -0.1993f, 1.1738f, 1);
					CAM::SET_CAM_FOV(uLocal_718, 34.4262f);
					CAM::SHAKE_CAM(uLocal_718, "ROAD_VIBRATION_SHAKE", 2.5f);
					CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_718, 0.2f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_718, uLocal_717, 1500, 1, 1);
					CAM::SHAKE_CAM(uLocal_717, "ROAD_VIBRATION_SHAKE", 2.5f);
					CAM::SHAKE_CAM(uLocal_718, "ROAD_VIBRATION_SHAKE", 2.5f);
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "pushtrailer");
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "pushtrailer"))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6147))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_6147, 1, "pushtrailer", 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_6147, 719f);
							}
						}
					}
					func_122(1);
					MISC::SET_TIME_SCALE(0.5f);
					AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_T1_TRAILER_SMASH");
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					HUD::UNLOCK_MINIMAP_ANGLE();
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						if (!PED::IS_PED_INJURED(Local_5825))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_828))
							{
								uLocal_828 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_828, "misstrevor1ig_7", "Ortega_04_1st_Hit_Reaction", 8f, -8f, 0, 0, 1148846080, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_828, iLocal_6564, -1);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_828, 0);
							}
						}
					}
					SYSTEM::SETTIMERB(0);
					GlobalFunc_4935();
					iLocal_6261++;
				}
				break;
			
			case 1:
				if (!func_89("PANIC IDLE"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						if (!PED::IS_PED_INJURED(Local_5825))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_828))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_828) > 0.99f)
								{
									uLocal_828 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_828, "misstrevor1ig_7", "Ortega_05_Panic_Idle", 8f, -8f, 0, 0, 1148846080, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_828, iLocal_6564, -1);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_828, 1);
									func_88("PANIC IDLE", 1);
								}
							}
						}
					}
				}
				if (SYSTEM::TIMERB() > 3000)
				{
					CAM::RENDER_SCRIPT_CAMS(0, 1, 1000, 1, 0, 0);
					CAM::SET_WIDESCREEN_BORDERS(0, 0);
					MISC::SET_TIME_SCALE(1f);
					AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_T1_TRAILER_SMASH");
					CAM::DESTROY_ALL_CAMS(0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_6147);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					GlobalFunc_2781(500);
					iLocal_6261 = 0;
					iLocal_6436 = 0;
					iLocal_6321 = 0;
					if (!PED::IS_PED_INJURED(Local_5825))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_5825))
						{
							ENTITY::SET_ENTITY_PROOFS(Local_5825, 1, 1, 1, 1, 1, 0, 0, 0);
						}
					}
					return 1;
				}
				break;
		}
	}
	return 0;
}

void func_584()//Position - 0x6AC0B
{
	switch (iLocal_6273)
	{
		case 0:
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_1_TRAILER_IMPACTS", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_1_TRAILER_IMPACTS_1", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_1_TRAILER_IMPACTS_2", 0))
			{
				iLocal_6273++;
			}
			break;
		
		case 1:
			iLocal_6273++;
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_6564, -35.57f, 3050.7f, 39.65f, 4f, 4f, 4f, 0, 1, 0))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TREVOR_1_TRAILER_IMPACT_MASTER_B", iLocal_6564, 0, 0, 0);
					iLocal_6273++;
				}
			}
			break;
	}
}


Vector3 func_586()//Position - 0x6ACC6
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
	{
		return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_6147, 0.5784f, -8.406f, 0.9975f);
	}
	return -7.6414f, 3002.242f, 41.5575f;
}

void func_587()//Position - 0x6AD01
{
	if (iLocal_6426 == 1)
	{
		if (iLocal_6427 == 0)
		{
			STREAMING::REMOVE_IPL("TRV1_Trail_end");
			STREAMING::REQUEST_IPL("TRV1_Trail_start");
			ENTITY::CREATE_MODEL_HIDE(-24.722f, 3032.973f, 40.336f, 20f, joaat("prop_trailr_base_static"), 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6564))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_6564);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_6427 = 1;
		}
		if (STREAMING::HAS_MODEL_LOADED(joaat("proptrailer")))
		{
			if (iLocal_6427 == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6564))
				{
					iLocal_6564 = VEHICLE::CREATE_VEHICLE(joaat("proptrailer"), -24.78f, 3032.923f, 40.376f, 25f, 0, 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_6564, -24.78f, 3032.923f, 40.376f, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iLocal_6564, 0.0073f, 0.0009f, 25f, 2, 1);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_6564, 0.0001f, 0f, 0.2164f, 0.9763f);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_6564, 1);
					ENTITY::SET_ENTITY_COLLISION(iLocal_6564, 1, 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6564, 0);
					GlobalFunc_504(iLocal_6564, 489);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_6564, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						VEHICLE::SET_VEHICLE_STRONG(iLocal_6564, 1);
					}
					func_122(0);
				}
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(joaat("proptrailer"));
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -24.722f, 3032.973f, 40.336f, 30f, 30f, 6f, 0, 1, 0) || iLocal_6246 == 6)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6564))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_6564, 1, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_6564, 0);
							iLocal_6426 = 0;
						}
					}
				}
			}
		}
	}
}


void func_589()//Position - 0x6AED9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[15 /*12*/], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[15 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_1820[12 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[15 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_1820[12 /*34*/], Local_5834[15 /*12*/], 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[15 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_1820[12 /*34*/]))
		{
			if (iLocal_6246 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_1820[12 /*34*/], 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_1820[12 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_5834[15 /*12*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[15 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[15 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[16 /*12*/], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[16 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_1820[13 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[16 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_1820[13 /*34*/], Local_5834[16 /*12*/], 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[16 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_1820[13 /*34*/]))
		{
			if (iLocal_6246 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_1820[13 /*34*/], 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_1820[13 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_5834[16 /*12*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[16 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[16 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[17 /*12*/], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[17 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_1820[14 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[17 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_1820[14 /*34*/], Local_5834[17 /*12*/], 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[17 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_1820[14 /*34*/]))
		{
			if (iLocal_6246 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_1820[14 /*34*/], 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_1820[14 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_5834[14 /*12*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[14 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[14 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[24 /*12*/], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[24 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_1820[24 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[24 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_1820[24 /*34*/], Local_5834[24 /*12*/], 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[24 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_1820[24 /*34*/]))
		{
			if (iLocal_6246 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_1820[24 /*34*/], 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_1820[24 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_5834[24 /*12*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[24 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[24 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[25 /*12*/], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[25 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_1820[25 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[25 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_1820[25 /*34*/], Local_5834[25 /*12*/], 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[25 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_1820[25 /*34*/]))
		{
			if (iLocal_6246 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_1820[25 /*34*/], 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_1820[25 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_5834[25 /*12*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[25 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[25 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[20 /*12*/], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[20 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_1820[32 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[20 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_1820[32 /*34*/], Local_5834[20 /*12*/], 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[20 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_1820[32 /*34*/]))
		{
			if (iLocal_6246 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_1820[32 /*34*/], 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_1820[32 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_5834[20 /*12*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[20 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[20 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[21 /*12*/], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[21 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_1820[33 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[21 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_1820[33 /*34*/], Local_5834[21 /*12*/], 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[21 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_1820[33 /*34*/]))
		{
			if (iLocal_6246 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_1820[33 /*34*/], 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_1820[33 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_5834[21 /*12*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[21 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[21 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[22 /*12*/], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[22 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_1820[34 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[22 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_1820[34 /*34*/], Local_5834[22 /*12*/], 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[22 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_1820[34 /*34*/]))
		{
			if (iLocal_6246 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_1820[34 /*34*/], 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_1820[34 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_5834[22 /*12*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[22 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[22 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[2 /*12*/], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[2 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_1820[28 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[2 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_1820[28 /*34*/], Local_5834[2 /*12*/], 0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[2 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_1820[28 /*34*/]))
		{
			if (iLocal_6246 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_1820[28 /*34*/], 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_1820[28 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_5834[2 /*12*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[2 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[2 /*12*/]);
		}
	}
}

void func_590()//Position - 0x6B5C6
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
			{
				if (GlobalFunc_105(Local_6526))
				{
				}
				if (iLocal_6434 == 1)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6313))
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_6313, "Speed", (ENTITY::GET_ENTITY_SPEED(iLocal_6564) / 20f), 0);
					}
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_6147, iLocal_6564))
				{
					if (iLocal_6428)
					{
						STREAMING::REQUEST_PTFX_ASSET();
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_6564, 1, 0f, ((0.9f * ENTITY::GET_ENTITY_SPEED(Local_6147)) + 0.7f), 0.5f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev1_trailer_boosh", iLocal_6564, 1.6f, 1.6f, 3.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
							STREAMING::REQUEST_PTFX_ASSET();
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TREVOR_1_TRAILER_IMPACT_MASTER_A", iLocal_6564, 0, 0, 0);
							iLocal_6434 = 0;
							iLocal_6435 = 0;
							iLocal_6428 = 0;
						}
					}
					else
					{
						if (iLocal_6434 == 0)
						{
							uLocal_6313 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_crash_dust", iLocal_6564, 2f, 2f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
							iLocal_6434 = 1;
						}
						if (iLocal_6431 == 0)
						{
							STREAMING::REQUEST_PTFX_ASSET();
							if (STREAMING::HAS_PTFX_ASSET_LOADED())
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_6564, 0), -49.0106f, 3098.955f, 24.7669f, 1) < 50f)
								{
									ENTITY::SET_ENTITY_PROOFS(iLocal_6564, 0, 0, 0, 0, 0, 0, 0, 0);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_6564, 0);
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_6564, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_6564, 9), 2000f, 200f, 1);
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_6564, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_6564, 0), 80f, 20f, 1);
									uLocal_6309 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_trailer_wires", iLocal_6564, 1.6f, 1.6f, 3.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									uLocal_6310 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_trailer_wires", iLocal_6564, -1.6f, 1.6f, 3.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TREVOR_1_TRAILER_IMPACT_MASTER_C", iLocal_6564, 0, 0, 0);
									ENTITY::SET_ENTITY_PROOFS(iLocal_6564, 1, 1, 1, 0, 1, 0, 0, 0);
									iLocal_6431 = 1;
								}
							}
						}
						if (iLocal_6432 == 0)
						{
							STREAMING::REQUEST_PTFX_ASSET();
							if (STREAMING::HAS_PTFX_ASSET_LOADED())
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_6564, 0), -49.0106f, 3098.955f, 24.7669f, 1) < 18f)
								{
									ENTITY::SET_ENTITY_PROOFS(iLocal_6564, 0, 0, 0, 0, 0, 0, 0, 0);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_6564, 0);
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_6564, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_6564, 7), 2000f, 200f, 1);
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_6564, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_6564, 0), 60f, 40f, 1);
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev1_trailer_boosh", iLocal_6564, -1.6f, 5.4f, 3.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									uLocal_6311 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_trailer_wires", iLocal_6564, -1.6f, 5.4f, 3.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TREVOR_1_TRAILER_IMPACT_MASTER_C", iLocal_6564, 0, 0, 0);
									ENTITY::SET_ENTITY_PROOFS(iLocal_6564, 1, 1, 1, 0, 1, 0, 0, 0);
									iLocal_6432 = 1;
								}
							}
						}
						if (iLocal_6433 == 0)
						{
							STREAMING::REQUEST_PTFX_ASSET();
							if (STREAMING::HAS_PTFX_ASSET_LOADED())
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_6564, 0), -49.0106f, 3098.955f, 24.7669f, 1) < 10f)
								{
									ENTITY::SET_ENTITY_PROOFS(iLocal_6564, 0, 0, 0, 0, 0, 0, 0, 0);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_6564, 0);
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_6564, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_6564, 13), 2000f, 200f, 1);
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_6564, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_6564, 0), 120f, 20f, 1);
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev1_trailer_boosh", iLocal_6564, 1.6f, 5.6f, 3.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									uLocal_6312 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_trailer_wires", iLocal_6564, 1.6f, 5.6f, 3.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TREVOR_1_TRAILER_IMPACT_MASTER_C", iLocal_6564, 0, 0, 0);
									ENTITY::SET_ENTITY_PROOFS(iLocal_6564, 1, 1, 1, 0, 1, 0, 0, 0);
									iLocal_6433 = 1;
								}
							}
						}
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_6564, -101.2708f, 3104.847f, 22.0871f, -16.64432f, 3122.307f, 26.64207f, 28.25f, 0, 1, 0))
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_6564, 0, 0f, ((1.8f * ENTITY::GET_ENTITY_SPEED(Local_6147)) + 3f), -1f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						}
					}
				}
			}
		}
	}
}

void func_591()//Position - 0x6BA1E
{
	float fVar0;
	float fVar1;
	
	if (iLocal_6326 == 1 || iLocal_6561 == 9)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 208))
		{
			iLocal_6326 = 1;
			fVar0 = GlobalFunc_253((fVar0 + (0.2f * SYSTEM::TIMESTEP())), 0f, 0.3f);
			fVar1 = GlobalFunc_253((fVar1 + (0.25f * SYSTEM::TIMESTEP())), 0f, 1f);
			PAD::SET_PAD_SHAKE(0, 500, 256);
		}
		else
		{
			PAD::SET_PAD_SHAKE(0, 0, 0);
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6353))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_6353, 0);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6354))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_6354, 0);
			}
			iLocal_6326 = 0;
			iLocal_6327 = 0;
			fVar0 = GlobalFunc_253((fVar0 - (0.4f * SYSTEM::TIMESTEP())), 0f, 0.3f);
			fVar1 = 0f;
		}
	}
	else
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6353))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_6353, 0);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6354))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_6354, 0);
		}
	}
	if (CAM::DOES_CAM_EXIST(uLocal_6570))
	{
		CAM::SHAKE_CAM(uLocal_6570, "HAND_SHAKE", fVar0);
	}
	if (iLocal_6326)
	{
		if (iLocal_6327 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6353) && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6354))
					{
						uLocal_6353 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_wheelspin_dirt", Local_6147, Local_800, Local_806, 1065353216, 0, 0, 0);
						uLocal_6354 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_wheelspin_dirt", Local_6147, Local_803, Local_806, 1065353216, 0, 0, 0);
						iLocal_6327 = 1;
					}
				}
			}
		}
		else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6353) && GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6354))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_6353, "wheelspin", fVar1, 0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_6354, "wheelspin", fVar1, 0);
		}
	}
}




int func_595()//Position - 0x6BC0B
{
	int iVar0;
	
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_RAYFIRE");
	}
	if (iLocal_6308 == 0)
	{
		if (iLocal_6315)
		{
			func_612();
		}
	}
	if (iLocal_6308 == 0)
	{
		if (!iLocal_7378)
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("Trevor_1_Shootout_Start"))
			{
				AUDIO::STOP_AUDIO_SCENE("Trevor_1_Shootout_Start");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
				{
					AUDIO::START_AUDIO_SCENE("TREVOR_1_SHOOTOUT_BIKERS_FLEE");
					iLocal_7378 = 1;
				}
			}
		}
	}
	if (iLocal_6561 > 6)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_SHOOTOUT_BIKERS_FLEE"))
		{
			AUDIO::STOP_AUDIO_SCENE("TREVOR_1_SHOOTOUT_BIKERS_FLEE");
		}
		else if (iLocal_7377 == 0)
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_1_DRIVE_TO_TRAILER");
			iLocal_7377 = 1;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -25.12118f, 3033.678f, 47.19183f, 150f, 150f, 150f, 0, 1, 0))
	{
		func_587();
	}
	func_607();
	if (iLocal_6561 > 10)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_702);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_702);
	}
	if (iLocal_6561 < 6)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_6147, 25f, 25f, 25f, 0, 1, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.8f);
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
		{
			if (GlobalFunc_663("TRV_GT11", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
		}
	}
	func_606();
	func_605();
	func_601();
	func_589();
	if (func_89("T1M1_CUT1"))
	{
		if (GlobalFunc_111())
		{
			MemCopy(&uLocal_7372, {GlobalFunc_560()}, 4);
			if (MISC::ARE_STRINGS_EQUAL(&uLocal_7372, "T1M1_CUT1"))
			{
				if (!PED::IS_PED_INJURED(Local_5769))
				{
					if (GlobalFunc_156(Local_5769, PLAYER::PLAYER_PED_ID(), 1) > 40f)
					{
						GlobalFunc_4956();
					}
				}
			}
		}
	}
	if (func_89("T1M1_CUT1"))
	{
		if (!func_89("T1M1_WADEBO"))
		{
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				if (GlobalFunc_156(Local_5769, PLAYER::PLAYER_PED_ID(), 1) < 30f)
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_WADEBO", 8, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(8f, 3f, 4);
								func_88("T1M1_WADEBO", 1);
							}
						}
					}
				}
			}
		}
	}
	if (!iLocal_6315)
	{
		RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
		func_460(3, "Drive to the trailer", 0, 0, 0, 1);
		GlobalFunc_860();
		func_459();
		func_455();
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), 1);
		func_454();
		func_599();
		func_449(6);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6564))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_6564);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_6147, 0f);
		}
		STREAMING::REMOVE_IPL("TRV1_Trail_end");
		STREAMING::REQUEST_IPL("TRV1_Trail_start");
		STREAMING::REQUEST_MODEL(joaat("proptrailer"));
		STREAMING::REQUEST_MODEL(GlobalFunc_4946(38));
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "trev1");
		if (!PED::IS_PED_INJURED(Local_5769))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_5769);
		}
		iLocal_6426 = 1;
		iLocal_6561 = 0;
		iLocal_6427 = 0;
		iLocal_6315 = 1;
		iLocal_6428 = 1;
		iLocal_7371 = 0;
		iLocal_7377 = 0;
		iLocal_7378 = 0;
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		iLocal_6431 = 0;
		iLocal_6432 = 0;
		iLocal_6433 = 0;
		bLocal_699 = true;
		iLocal_815 = 0;
		iLocal_704 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			VEHICLE::SET_VEHICLE_STRONG(Local_6147, 0);
		}
		if (!iLocal_6343)
		{
			func_453();
			iLocal_6343 = 1;
		}
		func_553(500);
	}
	else
	{
		switch (iLocal_6561)
		{
			case 0:
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), 1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), 1);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_01"), 1);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_02"), 1);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_03"), 1);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(46.94767f, 3042.975f, -17.54682f) - Vector(10f, 20f, 20f), Vector(46.94767f, 3042.975f, -17.54682f) + Vector(10f, 20f, 20f), 0, 1);
				MISC::CLEAR_AREA(-17.54682f, 3042.975f, 46.94767f, 40f, 1, 0, 0, 0);
				if (HUD::DOES_BLIP_EXIST(Local_5769.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_5769.f_1));
				}
				if (HUD::DOES_BLIP_EXIST(Local_5759.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_5759.f_1));
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(1, "trevone");
				VEHICLE::REMOVE_VEHICLE_RECORDING(2, "trevone");
				VEHICLE::REMOVE_VEHICLE_RECORDING(3, "trevone");
				VEHICLE::REMOVE_VEHICLE_RECORDING(4, "trevone");
				VEHICLE::REMOVE_VEHICLE_RECORDING(200, "trev1chasedw");
				VEHICLE::REMOVE_VEHICLE_RECORDING(201, "trev1chasedw");
				VEHICLE::REMOVE_VEHICLE_RECORDING(202, "trev1chasedw");
				VEHICLE::REMOVE_VEHICLE_RECORDING(203, "trev1chasedw");
				VEHICLE::REMOVE_VEHICLE_RECORDING(204, "trev1chasedw");
				VEHICLE::REMOVE_VEHICLE_RECORDING(205, "trev1chasedw");
				if (iLocal_6308 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_5769) && !PED::IS_PED_INJURED(Local_5759))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5769, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5759, 0);
					}
					if (iLocal_815)
					{
						STREAMING::REMOVE_IPL("TRV1_Trail_end");
						STREAMING::REQUEST_IPL("TRV1_Trail_start");
						MISC::SET_TIME_SCALE(1f);
						iLocal_694 = 0;
						HUD::SET_RADAR_ZOOM(0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_6147, 1);
						}
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
						MISC::SET_TIME_SCALE(1f);
						iLocal_6273 = 0;
						STREAMING::REQUEST_MODEL(GlobalFunc_4946(38));
						CUTSCENE::REMOVE_CUTSCENE();
						STREAMING::REQUEST_ANIM_DICT("misstrevor1trv_1_mcs_2");
						iVar0 = 0;
						while (iVar0 < Local_3698)
						{
							if (HUD::DOES_BLIP_EXIST(Local_3698[iVar0 /*34*/].f_33))
							{
								HUD::REMOVE_BLIP(&(Local_3698[iVar0 /*34*/].f_33));
							}
							iVar0++;
						}
						iLocal_6337 = 0;
						iLocal_6561++;
					}
					else if (!iLocal_704)
					{
						GlobalFunc_5105();
						if (!GlobalFunc_5172(&Local_6221, 1))
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_DZA", 8, 0, 0, 0))
							{
								iLocal_704 = 1;
							}
						}
					}
					else if (!iLocal_815)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
							{
								if (!GlobalFunc_5172(&Local_6221, 2))
								{
									func_569("TRV_GT11", 7500);
									if (!HUD::DOES_BLIP_EXIST(Local_6221))
									{
										Local_6221 = GlobalFunc_6783(Local_6147, 0, 0);
									}
									iLocal_815 = 1;
								}
							}
							else
							{
								iLocal_815 = 1;
							}
						}
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(Local_5769))
					{
						ENTITY::SET_ENTITY_LOD_DIST(Local_5769, 80);
					}
					if (!func_89("TRV1_DRIVE_TRAILER_RT"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_DRIVE_TRAILER_RT"))
						{
							func_88("TRV1_DRIVE_TRAILER_RT", 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
					}
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), 1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), 1);
					PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_01"), 1);
					PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_02"), 1);
					PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_03"), 1);
					func_553(500);
					HUD::SET_RADAR_ZOOM(0);
					iLocal_6320 = 0;
					func_88("WADE LEAVE", 1);
					iLocal_6561 = 6;
				}
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT("misstrevor1trv_1_mcs_2");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1trv_1_mcs_2"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (!PED::IS_PED_INJURED(Local_5769) && !PED::IS_PED_INJURED(Local_5759))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0) && PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 0))
							{
								if (!PED::IS_PED_INJURED(Local_5769))
								{
									STREAMING::REQUEST_MODEL(GlobalFunc_4946(38));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_02"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("gburrito"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rebel"));
									if (HUD::DOES_BLIP_EXIST(Local_5769.f_1))
									{
										HUD::REMOVE_BLIP(&(Local_5769.f_1));
									}
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
								{
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_6147, 1);
								}
								STREAMING::REQUEST_MODEL(GlobalFunc_4946(38));
								iLocal_6561++;
							}
							else if (!iLocal_6337)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_5769) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_6147, 1) < 50f)
									{
										if (!ENTITY::IS_ENTITY_OCCLUDED(Local_6147))
										{
											if (!PED::IS_PED_INJURED(Local_5769) && !PED::IS_PED_INJURED(Local_5759))
											{
												if ((ENTITY::IS_ENTITY_ON_SCREEN(Local_5769) || ENTITY::IS_ENTITY_ON_SCREEN(Local_5759)) || ENTITY::IS_ENTITY_ON_SCREEN(Local_6147))
												{
													GlobalFunc_5105();
													HUD::CLEAR_PRINTS();
													if (!GlobalFunc_5172(&Local_6221, 1))
													{
														if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_EEA", 7, 0, 0, 0))
														{
															if (!PED::IS_PED_INJURED(Local_5769))
															{
																if (!PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
																{
																	TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
																	if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(Local_5769, Local_6147, 1, 0, 0))
																	{
																		TASK::TASK_ENTER_VEHICLE(0, Local_6147, 240000, 1, 2f, 1, 0);
																	}
																	else
																	{
																		TASK::TASK_ENTER_VEHICLE(0, Local_6147, 240000, 2, 2f, 1, 0);
																	}
																	TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
																	TASK::TASK_PERFORM_SEQUENCE(Local_5769, uLocal_6565);
																	TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
																	PED::REMOVE_PED_FROM_GROUP(Local_5769);
																}
															}
															if (!PED::IS_PED_INJURED(Local_5759))
															{
																if (!PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 0))
																{
																	TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
																	TASK::TASK_PAUSE(0, 800);
																	TASK::TASK_ENTER_VEHICLE(0, Local_6147, 240000, 0, 2f, 1, 0);
																	TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
																	TASK::TASK_PERFORM_SEQUENCE(Local_5759, uLocal_6565);
																	TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
																	PED::REMOVE_PED_FROM_GROUP(Local_5759);
																}
															}
															iLocal_6337 = 1;
														}
													}
												}
												else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
												{
													GlobalFunc_5105();
													HUD::CLEAR_PRINTS();
													if (!GlobalFunc_5172(&Local_6221, 1))
													{
														if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_EEA", 7, 0, 0, 0))
														{
															if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_6147, 1) > 5f)
															{
																if (!PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 0))
																{
																	PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
																}
																PED::REMOVE_PED_FROM_GROUP(Local_5759);
																if (!PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
																{
																	PED::SET_PED_INTO_VEHICLE(Local_5769, Local_6147, 1);
																}
																PED::REMOVE_PED_FROM_GROUP(Local_5769);
																iLocal_6337 = 1;
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
				}
				break;
			
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!PED::IS_PED_INJURED(Local_5769) && !PED::IS_PED_INJURED(Local_5759))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_6147, 1);
						PED::REMOVE_PED_FROM_GROUP(Local_5759);
						PED::REMOVE_PED_FROM_GROUP(Local_5769);
						TASK::TASK_LOOK_AT_ENTITY(Local_5759, PLAYER::PLAYER_PED_ID(), 8000, 2048, 2);
						if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(Local_5769, Local_6147, 1, 0, 0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_5769);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_5769, 0, 0);
							uLocal_6265 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_6265, Local_6147, -1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_5769, Local_6147, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_5769, uLocal_6265, "misstrevor1trv_1_mcs_2", "wait_enter_wade", 1000f, -8f, 4, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_6265, 0);
						}
						iLocal_6333 = 1;
						iLocal_6561++;
					}
				}
				break;
			
			case 3:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_6147, 30f, 30f, 30f, 0, 1, 0))
					{
						HUD::CLEAR_PRINTS();
						iLocal_6561++;
					}
					else if (iLocal_6333 == 1)
					{
					}
					else if (iLocal_6333 == 0)
					{
						if (GlobalFunc_588(&iLocal_6283, 16000))
						{
							iLocal_6333 = 1;
						}
					}
				}
				break;
			
			case 4:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!PED::IS_PED_INJURED(Local_5769) && !PED::IS_PED_INJURED(Local_5759))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_6147, 1);
						if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(Local_5769, Local_6147, 1, 0, 0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_6147))
						{
							uLocal_6265 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_6265, Local_6147, -1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_5769, Local_6147, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_5769, uLocal_6265, "misstrevor1trv_1_mcs_2", "jump_out_wade", 8f, -4f, 5, 17, 1148846080, 0);
						}
						else
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(Local_5769, 0, 4194304);
						}
						func_88("WADE LEAVE", 1);
						iLocal_6561++;
					}
				}
				break;
			
			case 5:
				if (!func_89("TRV1_TRUCK"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_TRUCK"))
					{
						func_88("TRV1_TRUCK", 1);
					}
				}
				if (!func_89("T1M1_CUT1"))
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						GlobalFunc_173(&Local_6622, 4, Local_5769, "WADE", 0, 1);
						GlobalFunc_173(&Local_6622, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_CUT1", 7, 0, 0, 0))
						{
							func_88("T1M1_CUT1", 1);
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!PED::IS_PED_INJURED(Local_5769))
					{
						if (!PED::IS_PED_INJURED(Local_5769) && !PED::IS_PED_INJURED(Local_5759))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6265))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_6265) > 0.84f || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
								{
									if (!PED::IS_PED_INJURED(Local_5759))
									{
										if (!PED::IS_PED_GROUP_MEMBER(Local_5759, GlobalFunc_468()))
										{
											PED::SET_PED_AS_GROUP_MEMBER(Local_5759, GlobalFunc_468());
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5759, 1);
										}
									}
									if (!PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 0))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_5759);
										PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
										PED::REMOVE_PED_FROM_GROUP(Local_5759);
									}
									PED::REMOVE_PED_FROM_GROUP(Local_5759);
									TASK::TASK_CLEAR_LOOK_AT(Local_5759);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
									{
										VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_6147, 1);
										ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_5769, Local_6147, 1);
										iLocal_6561++;
									}
								}
							}
							else if (!PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
							{
								if (!PED::IS_PED_INJURED(Local_5759))
								{
									if (!PED::IS_PED_GROUP_MEMBER(Local_5759, GlobalFunc_468()))
									{
										PED::SET_PED_AS_GROUP_MEMBER(Local_5759, GlobalFunc_468());
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5759, 1);
									}
								}
								if (!PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 0))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_5759);
									PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
									PED::REMOVE_PED_FROM_GROUP(Local_5759);
								}
								PED::REMOVE_PED_FROM_GROUP(Local_5759);
								TASK::TASK_CLEAR_LOOK_AT(Local_5759);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
								{
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_6147, 1);
									iLocal_6561++;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6265))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_6265) < 0.84f || PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
						{
							PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 1))
					{
						if (HUD::DOES_BLIP_EXIST(Local_6221))
						{
							HUD::REMOVE_BLIP(&Local_6221);
						}
					}
					else if (!HUD::DOES_BLIP_EXIST(Local_6221))
					{
						Local_6221 = GlobalFunc_6783(Local_6147, 0, 0);
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
					{
						if (HUD::DOES_BLIP_EXIST(Local_6221))
						{
							HUD::REMOVE_BLIP(&Local_6221);
						}
						GlobalFunc_5652(&Local_6221, 1, 0);
						iLocal_6320 = 0;
						iLocal_6561++;
					}
					if (!PED::IS_PED_INJURED(Local_5759))
					{
						PED::SET_PED_CONFIG_FLAG(Local_5759, 118, 1);
					}
				}
				break;
			
			case 7:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.7649f, 2998.757f, 40.0025f, 100f, 100f, 20f, 0, 1, 0))
				{
					if (func_121(11, -40.6843f, 3103.764f, 24.8673f, 160.9775f, 0))
					{
						if (!func_89("SETUP ORTEGA"))
						{
							if (!PED::IS_PED_INJURED(Local_5759))
							{
								PED::SET_PED_CONFIG_FLAG(Local_5759, 118, 1);
							}
							if (!PED::IS_PED_INJURED(Local_5825))
							{
								GlobalFunc_173(&Local_6622, 7, Local_5825, "ORTEGA", 0, 1);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_5825, 1);
								ENTITY::SET_ENTITY_VISIBLE(Local_5825, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5825, 1);
								STREAMING::REQUEST_ANIM_DICT("misstrevor1");
								func_88("SETUP ORTEGA", 1);
							}
						}
					}
				}
				else if (func_89("SETUP ORTEGA"))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.7649f, 2998.757f, 40.0025f, 150f, 150f, 20f, 0, 1, 0))
					{
						PED::DELETE_PED(&Local_5825);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_ortega"));
						GlobalFunc_200(&Local_6622, 7);
						func_88("SETUP ORTEGA", 0);
					}
				}
				if (func_513(&Local_6221, -8.5212f, 3010.064f, 39.6299f, 0.1f, 0.1f, 2f, 1, Local_5759, Local_6147, "TRV_GT4", "", "", Local_7150.f_111, 0, 1, 1, -1))
				{
				}
				else
				{
					iLocal_6308 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_6147, 1);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_6567))
					{
						HUD::REMOVE_BLIP(&uLocal_6567);
					}
					if (HUD::DOES_BLIP_EXIST(Local_6221.f_5))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.7649f, 2998.757f, 40.0025f, 45f, 45f, 6.6875f, 0, 1, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_6567))
							{
								HUD::REMOVE_BLIP(&uLocal_6567);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_6564, 1);
							}
							iLocal_6561++;
							VEHICLE::REQUEST_VEHICLE_RECORDING(1, "trev1");
						}
						if (!GlobalFunc_5172(&Local_6221, 1))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_7066() == 0)
								{
									if (iLocal_6320 == 0)
									{
										if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_ORTCHAT", 7, 0, 0, 0))
										{
											iLocal_6320 = 1;
										}
									}
								}
								else if (iLocal_6320 == 0)
								{
									if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_ORTCHA2", 7, 0, 0, 0))
									{
										iLocal_6320 = 1;
									}
								}
							}
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_6564, 1);
					}
					if (iLocal_6320 == 1)
					{
						if (HUD::DOES_BLIP_EXIST(Local_6221.f_5))
						{
							if (GlobalFunc_620())
							{
								HUD::CLEAR_PRINTS();
								GlobalFunc_619(0);
							}
						}
						else if (!GlobalFunc_620())
						{
							if (GlobalFunc_663(Local_7150.f_111, 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							GlobalFunc_619(1);
						}
					}
				}
				break;
			
			case 8:
				if (func_513(&Local_6221, -8.5212f, 3010.064f, 39.6299f, 0.1f, 0.1f, 2f, 1, Local_5759, Local_6147, "", "", Local_7150.f_118, Local_7150.f_111, 0, 0, 1, -1))
				{
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(Local_6221.f_5))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
						{
							if (((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_6147, 7.509832f, 3010.018f, 39.36629f, -12.36574f, 3050.342f, 44.15579f, 11.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_6147, -48.96839f, 3035.861f, 38.89233f, -12.36574f, 3050.342f, 44.15579f, 11.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_6147, -33.54588f, 2974.621f, 38.42772f, -46.36054f, 3038.442f, 44.53813f, 11.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_6147, -48.85867f, 2977.304f, 40.54283f, 15.35008f, 3010.139f, 50.7527f, 11.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_6147, -17.56364f, 3013.615f, 52.53856f, -48.49613f, 3098.485f, 15.1455f, 47f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(Local_6147, -14.7649f, 2998.757f, 40.0025f, 10f, 10f, 10f, 0, 1, 0)) || GlobalFunc_156(iLocal_6564, Local_6147, 1) < 20f) || MISC::GET_DISTANCE_BETWEEN_COORDS(0.75f, 3023.01f, 39.73f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 4f)
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147))
								{
									STREAMING::REQUEST_ANIM_DICT("misstrevor1");
									STREAMING::REQUEST_ANIM_DICT("misstrevor1ig_7");
									if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1") && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1ig_7"))
									{
										RECORDING::_0x293220DA1B46CEBC(3f, 4f, 4);
										if (HUD::DOES_BLIP_EXIST(uLocal_6567))
										{
											HUD::REMOVE_BLIP(&uLocal_6567);
										}
										if (HUD::DOES_BLIP_EXIST(uLocal_6568))
										{
											HUD::REMOVE_BLIP(&uLocal_6568);
										}
										if (HUD::DOES_BLIP_EXIST(Local_6221.f_5))
										{
											HUD::REMOVE_BLIP(&(Local_6221.f_5));
										}
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
										{
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_6564, 0);
										}
										VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_6564, 0);
										HUD::SET_RADAR_ZOOM(200);
										STREAMING::REQUEST_PTFX_ASSET();
										ENTITY::SET_ENTITY_PROOFS(Local_6147, 0, 0, 1, 1, 1, 0, 0, 0);
										GlobalFunc_5105();
										GlobalFunc_173(&Local_6622, 7, Local_5825, "ORTEGA", 0, 1);
										STREAMING::REQUEST_ANIM_DICT("misstrevor1");
										iLocal_6561++;
									}
									else
									{
										STREAMING::REQUEST_ANIM_DICT("misstrevor1");
									}
								}
							}
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_6564, 1);
					}
					if (iLocal_6320 == 1)
					{
						if (HUD::DOES_BLIP_EXIST(Local_6221.f_5))
						{
							if (GlobalFunc_620())
							{
								HUD::CLEAR_PRINTS();
								GlobalFunc_619(0);
							}
						}
						else if (!GlobalFunc_620())
						{
							if (GlobalFunc_663(Local_7150.f_111, 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							GlobalFunc_619(1);
						}
					}
				}
				break;
			
			case 9:
				CUTSCENE::_0x06EE9048FD080382(1);
				STREAMING::REQUEST_ANIM_DICT("misstrevor1");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "trev1") && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_TRAILER"))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6147))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_6147, 1, "trev1", 1);
							}
							else
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_6147, 5900f);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
								{
									VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_6147, 0);
									VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_6147, 1);
									VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_6147, 4);
									VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_6147, 5);
									if (FIRE::IS_ENTITY_ON_FIRE(Local_6147))
									{
										FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_6147, 0), 20f);
										VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_6147, 1000f);
										VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_6147, 1000f);
									}
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
								{
									MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(iLocal_6564, 0), 100f, 0, 0, 1, 1, 1);
								}
								if (!PED::IS_PED_INJURED(Local_5759))
								{
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_5759, 0);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_6564, 0);
								}
								HUD::LOCK_MINIMAP_ANGLE(29);
								MISC::CLEAR_AREA(-16.19f, 3016.65f, 40.51f, 100f, 1, 0, 0, 0);
								GlobalFunc_702(1, 0, 1);
								func_598(1, 1);
								GlobalFunc_2885();
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
								GlobalFunc_8380(1, 1, 0, 0);
								CAM::PLAY_CAM_ANIM(uLocal_6570, "ort_trailer_cam01", "misstrevor1", -30.163f, 3024.143f, 39.913f, 0f, 0f, -133.5f, 0, 2);
								CAM::SET_CAM_ACTIVE(uLocal_6570, 1);
								CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
								uLocal_7376 = CAM::CREATE_CAMERA(26379945, 0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
								{
									if (!PED::IS_PED_INJURED(Local_5825))
									{
										ENTITY::SET_ENTITY_VISIBLE(Local_5825, 1);
										ENTITY::FREEZE_ENTITY_POSITION(Local_5825, 0);
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_5825);
										uLocal_828 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_828, "misstrevor1ig_7", "ortega_01_drinking_idle_intro", 1000f, -8f, 0, 0, 1148846080, 0);
										PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_828, 0.9f);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_828, iLocal_6564, -1);
									}
								}
								SYSTEM::SETTIMERB(0);
								iLocal_6320 = 0;
								GlobalFunc_5105();
								AUDIO::STOP_AUDIO_SCENE("TREVOR_1_DRIVE_TO_TRAILER");
								AUDIO::START_AUDIO_SCENE("TREVOR_1_ARRIVE_AT_TRAILER");
								iLocal_715 = 0;
								iLocal_6561++;
							}
						}
					}
					else
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(1, "trev1");
					}
				}
				break;
			
			case 10:
				if (!iLocal_715)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						if (!PED::IS_PED_INJURED(Local_5825))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_828))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_828) > 0.99f)
								{
									uLocal_828 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_828, "misstrevor1ig_7", "Ortega_02_Trevor_Arrival_Reaction", 8f, -8f, 0, 0, 1148846080, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_828, iLocal_6564, -1);
									iLocal_715 = 1;
								}
							}
						}
					}
				}
				if (!func_89("T1M1_LINE"))
				{
					if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_LINE", 7, 0, 0, 0))
					{
						func_88("T1M1_LINE", 1);
					}
				}
				CAM::SET_CAM_PARAMS(uLocal_7376, CAM::GET_CAM_COORD(uLocal_6570), CAM::GET_CAM_ROT(uLocal_6570, 2), CAM::GET_CAM_FOV(uLocal_6570), 0, 1, 1, 2);
				CAM::SHAKE_CAM(uLocal_7376, "HAND_SHAKE", 0.6f);
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_6570) > 0.99f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
						{
						}
						if (!PED::IS_PED_INJURED(Local_5759))
						{
							if (!GlobalFunc_1533(Local_5759, Local_6147, 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
							}
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!GlobalFunc_1533(PLAYER::PLAYER_PED_ID(), Local_6147, -1))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, -1);
							}
						}
					}
					uLocal_718 = CAM::CREATE_CAMERA(26379945, 0);
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_718, Local_6147, 0.5784f, -8.406f, 0.9975f, 1);
					CAM::POINT_CAM_AT_ENTITY(uLocal_718, Local_6147, 0.2264f, -5.4394f, 0.7215f, 1);
					CAM::SET_CAM_FOV(uLocal_718, 27.386f);
					CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_718, 0f);
					CAM::SET_CAM_ACTIVE(uLocal_718, 1);
					CAM::SHAKE_CAM(uLocal_718, "HAND_SHAKE", 0.6f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_718, uLocal_7376, 1500, 1, 1);
					iLocal_6260 = MISC::GET_GAME_TIMER();
					iLocal_6561++;
				}
				break;
			
			case 11:
				if (!iLocal_715)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						if (!PED::IS_PED_INJURED(Local_5825))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_828))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_828) > 0.99f)
								{
									uLocal_828 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_828, "misstrevor1ig_7", "Ortega_02_Trevor_Arrival_Reaction", 8f, -8f, 0, 0, 1148846080, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_828, iLocal_6564, -1);
									iLocal_715 = 1;
								}
							}
						}
					}
				}
				else if (!func_89("SHOUT IDLE"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
					{
						if (!PED::IS_PED_INJURED(Local_5825))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_828))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_828) > 0.99f)
								{
									uLocal_828 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_5825, uLocal_828, "misstrevor1ig_7", "Ortega_03_Shouting_Idle", 8f, -8f, 0, 0, 1148846080, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_828, iLocal_6564, -1);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_828, 1);
									func_88("SHOUT IDLE", 1);
								}
							}
						}
					}
				}
				PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 285, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 283, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 284, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
				if (GlobalFunc_588(&iLocal_6260, 2500))
				{
					func_596(0, 0, 0, 0, 0);
					GlobalFunc_657();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						VEHICLE::SET_VEHICLE_BURNOUT(Local_6147, 1);
					}
					GlobalFunc_8380(1, 1, 0, 0);
					GlobalFunc_7632(1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					iLocal_6436 = 1;
					iLocal_6260 = MISC::GET_GAME_TIMER();
					iLocal_6320 = 0;
					iLocal_6326 = 0;
					iLocal_6327 = 0;
					iLocal_6308 = 0;
					iLocal_6561++;
				}
				break;
		}
		if (iLocal_6561 >= 12)
		{
			RECORDING::_0x293220DA1B46CEBC(5f, 2f, 4);
			if (HUD::DOES_BLIP_EXIST(uLocal_6568))
			{
				HUD::REMOVE_BLIP(&uLocal_6568);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_6567))
			{
				HUD::REMOVE_BLIP(&uLocal_6567);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_6569))
			{
				HUD::REMOVE_BLIP(&uLocal_6569);
			}
			iLocal_6315 = 0;
			iLocal_6561 = 0;
			return 1;
		}
	}
	return 0;
}

void func_596(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6D6D0
{
	if (iLocal_7149)
	{
		HUD::DISPLAY_HUD(1);
		HUD::DISPLAY_RADAR(1);
		CAM::SET_WIDESCREEN_BORDERS(0, 500);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (bParam4)
			{
				if (CAM::DOES_CAM_EXIST(uLocal_6570))
				{
					CAM::SET_CAM_ACTIVE(uLocal_6570, 0);
					CAM::DESTROY_CAM(uLocal_6570, 0);
				}
				CAM::RENDER_SCRIPT_CAMS(0, iParam1, iParam2, 1, 0, 0);
				CAM::STOP_GAMEPLAY_CAM_SHAKING(bParam4);
			}
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
			if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), iParam3, 0);
			GlobalFunc_8380(0, 1, 0, 0);
			iLocal_7149 = 0;
		}
	}
}


void func_598(bool bParam0, bool bParam1)//Position - 0x6D77A
{
	if (!iLocal_7149)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!bParam1)
			{
				uLocal_6570 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
				CAM::SET_CAM_COORD(uLocal_6570, 1f, 1f, 1f);
			}
			else
			{
				uLocal_6570 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
				CAM::SET_CAM_COORD(uLocal_6570, 1f, 1f, 1f);
			}
			HUD::DISPLAY_HUD(0);
			HUD::DISPLAY_RADAR(0);
			CAM::SET_WIDESCREEN_BORDERS(1, 500);
			if (bParam0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 4);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			}
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
			GlobalFunc_8380(1, 1, 0, 0);
		}
		SYSTEM::SETTIMERB(0);
		iLocal_7149 = 1;
	}
}

void func_599()//Position - 0x6D814
{
	int iVar0;
	
	iVar0 = (iLocal_719 - 1);
	while (iVar0 > -1)
	{
		iLocal_719[iVar0] = 0;
		iVar0 = (iVar0 - 1);
	}
}


void func_601()//Position - 0x6D85E
{
	int iVar0;
	
	if (!Local_3521[0 /*34*/].f_1)
	{
		if (!PED::IS_PED_INJURED(Local_3521[0 /*34*/]))
		{
			func_604(&(Local_3521[0 /*34*/]), 1);
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_3521[0 /*34*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_3521[0 /*34*/], 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3521[0 /*34*/], 1);
			func_603(1);
			TASK::TASK_SMART_FLEE_PED(Local_3521[0 /*34*/], PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			Local_3521[0 /*34*/].f_1 = 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_3521[0 /*34*/]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_3521[0 /*34*/], 2f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3521[0 /*34*/]))
		{
			if (PED::IS_PED_INJURED(Local_3521[0 /*34*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_3521[0 /*34*/].f_33))
				{
					HUD::REMOVE_BLIP(&(Local_3521[0 /*34*/].f_33));
				}
			}
			else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_3521[0 /*34*/], 1) > 150f)
			{
				HUD::REMOVE_BLIP(&(Local_3521[0 /*34*/].f_33));
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_3521[0 /*34*/]))
				{
					PED::DELETE_PED(&(Local_3521[0 /*34*/]));
				}
			}
		}
	}
	if (!Local_3521[1 /*34*/].f_1)
	{
		if (!PED::IS_PED_INJURED(Local_3521[1 /*34*/]))
		{
			func_604(&(Local_3521[1 /*34*/]), 1);
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_3521[1 /*34*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_3521[1 /*34*/], 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3521[1 /*34*/], 1);
			func_603(1);
			TASK::TASK_SMART_FLEE_PED(Local_3521[1 /*34*/], PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			Local_3521[1 /*34*/].f_1 = 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_3521[1 /*34*/]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_3521[1 /*34*/], 2f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3521[1 /*34*/]))
		{
			if (PED::IS_PED_INJURED(Local_3521[1 /*34*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_3521[1 /*34*/].f_33))
				{
					HUD::REMOVE_BLIP(&(Local_3521[1 /*34*/].f_33));
				}
			}
			else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_3521[1 /*34*/], 1) > 150f)
			{
				HUD::REMOVE_BLIP(&(Local_3521[1 /*34*/].f_33));
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_3521[1 /*34*/]))
				{
					PED::DELETE_PED(&(Local_3521[1 /*34*/]));
				}
			}
		}
	}
	if (!Local_3521[2 /*34*/].f_1)
	{
		if (!PED::IS_PED_INJURED(Local_3521[2 /*34*/]))
		{
			func_604(&(Local_3521[2 /*34*/]), 1);
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_3521[2 /*34*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_3521[2 /*34*/], 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3521[2 /*34*/], 1);
			func_603(1);
			TASK::TASK_SMART_FLEE_PED(Local_3521[2 /*34*/], PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			Local_3521[2 /*34*/].f_1 = 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_3521[2 /*34*/]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_3521[2 /*34*/], 2f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3521[2 /*34*/]))
		{
			if (PED::IS_PED_INJURED(Local_3521[2 /*34*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_3521[2 /*34*/].f_33))
				{
					HUD::REMOVE_BLIP(&(Local_3521[2 /*34*/].f_33));
				}
			}
			else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_3521[2 /*34*/], 1) > 150f)
			{
				HUD::REMOVE_BLIP(&(Local_3521[2 /*34*/].f_33));
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_3521[2 /*34*/]))
				{
					PED::DELETE_PED(&(Local_3521[2 /*34*/]));
				}
			}
		}
	}
	if (!Local_3521[3 /*34*/].f_1)
	{
		if (!PED::IS_PED_INJURED(Local_3521[3 /*34*/]))
		{
			func_604(&(Local_3521[3 /*34*/]), 1);
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_3521[3 /*34*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_3521[3 /*34*/], 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3521[3 /*34*/], 1);
			func_603(1);
			TASK::TASK_SMART_FLEE_PED(Local_3521[3 /*34*/], PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			Local_3521[3 /*34*/].f_1 = 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_3521[3 /*34*/]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_3521[3 /*34*/], 2f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3521[3 /*34*/]))
		{
			if (PED::IS_PED_INJURED(Local_3521[3 /*34*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_3521[3 /*34*/].f_33))
				{
					HUD::REMOVE_BLIP(&(Local_3521[3 /*34*/].f_33));
				}
			}
			else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_3521[3 /*34*/], 1) > 150f)
			{
				HUD::REMOVE_BLIP(&(Local_3521[3 /*34*/].f_33));
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_3521[3 /*34*/]))
				{
					PED::DELETE_PED(&(Local_3521[3 /*34*/]));
				}
			}
		}
	}
	if (!Local_3521[4 /*34*/].f_1)
	{
		if (!PED::IS_PED_INJURED(Local_3521[4 /*34*/]))
		{
			func_604(&(Local_3521[4 /*34*/]), 1);
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_3521[4 /*34*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_3521[4 /*34*/], 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3521[4 /*34*/], 1);
			func_603(1);
			TASK::TASK_SMART_FLEE_PED(Local_3521[4 /*34*/], PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			Local_3521[4 /*34*/].f_1 = 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_3521[4 /*34*/]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_3521[4 /*34*/], 2f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3521[4 /*34*/]))
		{
			if (PED::IS_PED_INJURED(Local_3521[4 /*34*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_3521[4 /*34*/].f_33))
				{
					HUD::REMOVE_BLIP(&(Local_3521[4 /*34*/].f_33));
				}
			}
			else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_3521[4 /*34*/], 1) > 150f)
			{
				HUD::REMOVE_BLIP(&(Local_3521[4 /*34*/].f_33));
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_3521[4 /*34*/]))
				{
					PED::DELETE_PED(&(Local_3521[4 /*34*/]));
				}
			}
		}
	}
	if (Local_3521[0 /*34*/].f_29 == 0)
	{
		if (!PED::IS_PED_INJURED(Local_3521[0 /*34*/]))
		{
			GlobalFunc_5130(Local_3521[0 /*34*/], "FALL_BACK", 18);
			Local_3521[0 /*34*/].f_9 = MISC::GET_GAME_TIMER();
			Local_3521[0 /*34*/].f_29 = 1;
		}
	}
	else if (GlobalFunc_588(&(Local_3521[0 /*34*/].f_9), MISC::GET_RANDOM_INT_IN_RANGE(6000, 14000)))
	{
		Local_3521[0 /*34*/].f_29 = 0;
	}
	if (Local_3521[1 /*34*/].f_29 == 0)
	{
		if (!PED::IS_PED_INJURED(Local_3521[1 /*34*/]))
		{
			GlobalFunc_5130(Local_3521[1 /*34*/], "FALL_BACK", 18);
			Local_3521[1 /*34*/].f_9 = MISC::GET_GAME_TIMER();
			func_88("GANG 1 FALL_BACK", 1);
			Local_3521[1 /*34*/].f_29 = 1;
		}
	}
	else if (GlobalFunc_588(&(Local_3521[1 /*34*/].f_9), MISC::GET_RANDOM_INT_IN_RANGE(6000, 14000)))
	{
		Local_3521[1 /*34*/].f_29 = 0;
	}
	if (Local_3521[2 /*34*/].f_29 == 0)
	{
		if (!PED::IS_PED_INJURED(Local_3521[2 /*34*/]))
		{
			GlobalFunc_5130(Local_3521[2 /*34*/], "FALL_BACK", 18);
			Local_3521[2 /*34*/].f_9 = MISC::GET_GAME_TIMER();
			func_88("GANG 2 FALL_BACK", 1);
			Local_3521[2 /*34*/].f_29 = 1;
		}
	}
	else if (GlobalFunc_588(&(Local_3521[2 /*34*/].f_9), MISC::GET_RANDOM_INT_IN_RANGE(6000, 14000)))
	{
		Local_3521[2 /*34*/].f_29 = 0;
	}
	if (Local_3521[3 /*34*/].f_29 == 0)
	{
		if (!PED::IS_PED_INJURED(Local_3521[3 /*34*/]))
		{
			GlobalFunc_5130(Local_3521[3 /*34*/], "FALL_BACK", 18);
			Local_3521[3 /*34*/].f_9 = MISC::GET_GAME_TIMER();
			func_88("GANG 3 FALL_BACK", 1);
			Local_3521[3 /*34*/].f_29 = 1;
		}
	}
	else if (GlobalFunc_588(&(Local_3521[3 /*34*/].f_9), MISC::GET_RANDOM_INT_IN_RANGE(6000, 14000)))
	{
		Local_3521[3 /*34*/].f_29 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3521[iVar0 /*34*/]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_3692[iVar0]))
		{
			uLocal_3692[iVar0] = Local_3521[iVar0 /*34*/];
		}
		iVar0++;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(uLocal_3692[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_3692[1])) && ENTITY::DOES_ENTITY_EXIST(uLocal_3692[2])) && ENTITY::DOES_ENTITY_EXIST(uLocal_3692[3]))
	{
		if (((PED::IS_PED_INJURED(uLocal_3692[0]) && PED::IS_PED_INJURED(uLocal_3692[1])) && PED::IS_PED_INJURED(uLocal_3692[2])) && PED::IS_PED_INJURED(uLocal_3692[3]))
		{
			GlobalFunc_553(486);
		}
	}
	if ((((!HUD::DOES_BLIP_EXIST(Local_3521[0 /*34*/].f_33) && !HUD::DOES_BLIP_EXIST(Local_3521[1 /*34*/].f_33)) && !HUD::DOES_BLIP_EXIST(Local_3521[2 /*34*/].f_33)) && !HUD::DOES_BLIP_EXIST(Local_3521[3 /*34*/].f_33)) && !HUD::DOES_BLIP_EXIST(Local_3521[4 /*34*/].f_33))
	{
	}
}


void func_603(bool bParam0)//Position - 0x6E087
{
	bLocal_60 = bParam0;
}

void func_604(var uParam0, bool bParam1)//Position - 0x6E093
{
	uParam0->f_30 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_18 = 0;
	uParam0->f_26 = 0;
	uParam0->f_9 = 0;
	uParam0->f_6 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (bParam1)
		{
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				TASK::CLEAR_PED_TASKS(*uParam0);
			}
		}
		PED::REMOVE_PED_DEFENSIVE_AREA(*uParam0, 0);
	}
}

void func_605()//Position - 0x6E0F7
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_3698[0 /*34*/]))
	{
		if (!PED::IS_PED_INJURED(Local_3698[0 /*34*/]))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_3698[0 /*34*/]))
			{
				PED::DELETE_PED(&(Local_3698[0 /*34*/]));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3698[1 /*34*/]))
	{
		if (!PED::IS_PED_INJURED(Local_3698[1 /*34*/]))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_3698[1 /*34*/]))
			{
				PED::DELETE_PED(&(Local_3698[1 /*34*/]));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3698[2 /*34*/]))
	{
		if (!PED::IS_PED_INJURED(Local_3698[2 /*34*/]))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_3698[2 /*34*/]))
			{
				PED::DELETE_PED(&(Local_3698[2 /*34*/]));
			}
		}
	}
}

void func_606()//Position - 0x6E198
{
	if (iLocal_7371 == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_gascyl_02a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_gascyl_02a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_rottweiler"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_7150.f_7);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_7150.f_8);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_7150.f_4);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_7150);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_7150.f_5);
		VEHICLE::REMOVE_VEHICLE_RECORDING(200, "trev1chasedw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(201, "trev1chasedw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(202, "trev1chasedw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(203, "trev1chasedw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(204, "trev1chasedw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(205, "trev1chasedw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(9, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(11, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(12, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(13, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(14, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(15, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(16, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(17, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(18, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(19, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(20, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(21, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(22, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(23, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(2, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(3, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(4, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(5, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(6, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(7, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(8, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(9, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(10, "t1b");
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("hexer"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("gburrito"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dloader"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rebel"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("biff"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_gascyl_01a"));
		iLocal_7371 = 1;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(66.0912f, 3632.116f, 38.61f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) > 120f)
	{
		iLocal_6558 = 0;
		while (iLocal_6558 < Local_1820)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1820[iLocal_6558 /*34*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[iLocal_6558 /*34*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1820[iLocal_6558 /*34*/]));
				}
			}
			iLocal_6558++;
		}
		iLocal_6558 = 0;
		while (iLocal_6558 < Local_3698)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_3698[iLocal_6558 /*34*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_3698[iLocal_6558 /*34*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_3698[iLocal_6558 /*34*/]));
				}
			}
			iLocal_6558++;
		}
		iLocal_6558 = 0;
		while (iLocal_6558 < Local_5834)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[iLocal_6558 /*12*/], 0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_5834[iLocal_6558 /*12*/], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) > 120f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[iLocal_6558 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_5834[iLocal_6558 /*12*/]));
					}
				}
			}
			iLocal_6558++;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_6159))
			{
				VEHICLE::DELETE_VEHICLE(&Local_6159);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_6171[0 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_6171[0 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[1 /*12*/], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_6171[1 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_6171[1 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[5 /*12*/], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[5 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_5834[5 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[6 /*12*/], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[6 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_5834[6 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[7 /*12*/], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[7 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_5834[7 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[15 /*12*/], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[15 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_5834[15 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[16 /*12*/], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[16 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_5834[16 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[17 /*12*/], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[17 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_5834[17 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[20 /*12*/], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[20 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_5834[20 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[21 /*12*/], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[21 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_5834[21 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[22 /*12*/], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[22 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_5834[22 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[24 /*12*/], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[24 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_5834[24 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[25 /*12*/], 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[25 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_5834[25 /*12*/]));
			}
		}
		iLocal_6558 = 0;
		while (iLocal_6558 < iLocal_6443)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[iLocal_6558]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_6443[iLocal_6558]));
			}
			iLocal_6558++;
		}
	}
}

void func_607()//Position - 0x6E6DD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_1820 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_1820[iVar0 /*34*/]))
		{
			if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_1820[iVar0 /*34*/]) < 100f)
			{
				func_609(Local_1820[iVar0 /*34*/], &(Local_1820[iVar0 /*34*/].f_10));
			}
			else
			{
				GlobalFunc_589(&(Local_1820[iVar0 /*34*/].f_10));
			}
		}
		else
		{
			GlobalFunc_589(&(Local_1820[iVar0 /*34*/].f_10));
		}
		iVar0++;
	}
}


void func_609(int iParam0, var uParam1)//Position - 0x6E7C4
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_BLIP_EXIST(*uParam1))
		{
			*uParam1 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
			HUD::SET_BLIP_SCALE(*uParam1, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
			HUD::SET_BLIP_PRIORITY(*uParam1, GlobalFunc_1961(8));
			HUD::SHOW_HEIGHT_ON_BLIP(*uParam1, 1);
			HUD::SET_BLIP_ALPHA(*uParam1, 255);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_270");
			MISC::CLEAR_BIT(&(uParam1->f_6), 0);
			MISC::CLEAR_BIT(&(uParam1->f_6), 1);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam1->f_3 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				uParam1->f_5 = MISC::GET_GAME_TIMER();
			}
		}
		else if (MISC::IS_BIT_SET(uParam1->f_6, 0))
		{
			HUD::SET_BLIP_COLOUR(*uParam1, 1);
			HUD::SET_BLIP_ALPHA(*uParam1, 255);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_270");
			MISC::CLEAR_BIT(&(uParam1->f_6), 0);
			MISC::CLEAR_BIT(&(uParam1->f_6), 1);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam1->f_3 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				uParam1->f_5 = MISC::GET_GAME_TIMER();
			}
		}
		else if (!MISC::IS_BIT_SET(uParam1->f_6, 1))
		{
			HUD::SET_BLIP_COLOUR(*uParam1, 1);
			HUD::SET_BLIP_ALPHA(*uParam1, 255);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_270");
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam1->f_3 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				uParam1->f_5 = MISC::GET_GAME_TIMER();
			}
			MISC::CLEAR_BIT(&(uParam1->f_6), 0);
			MISC::SET_BIT(&(uParam1->f_6), 1);
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam1->f_3) > 1000)
				{
					bVar0 = true;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - uParam1->f_5) > 1000)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				switch (HUD::GET_BLIP_COLOUR(*uParam1))
				{
					case 1:
						HUD::SET_BLIP_COLOUR(*uParam1, 3);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_270");
						break;
					
					case 3:
						HUD::SET_BLIP_COLOUR(*uParam1, 1);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_270");
						break;
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam1->f_3 = NETWORK::GET_NETWORK_TIME();
				}
				else
				{
					uParam1->f_5 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*uParam1))
	{
		GlobalFunc_589(uParam1);
	}
}



void func_612()//Position - 0x6EA52
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_5769))
	{
		PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(1834.356f, 1442.536f, 2189.515f, 4781.186f);
	}
	if (iLocal_6338 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_5769))
		{
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_5769, 1) > 100f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5769))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_5769) > 200f)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5769))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_6420))
								{
									VEHICLE::DELETE_VEHICLE(&iLocal_6420);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
								}
								PED::DELETE_PED(&Local_5769);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_wade"));
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_6308 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6420))
		{
			func_121(17, 0f, 0f, 0f, 0, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6265))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_6265) < 0.95f)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
						{
							PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
						}
						else
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_6147, 0);
						}
					}
					else
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_5769, -4f, 1);
						ENTITY::DETACH_ENTITY(Local_5769, 1, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_6147, 0);
					}
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_6147, 0);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				if (iLocal_6561 > 5)
				{
					if (iLocal_6338 == 0)
					{
						if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(1834.356f, 1442.536f, 2189.515f, 4781.186f))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6265))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_6265) > 0.95f)
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_5769, -4f, 1);
									ENTITY::DETACH_ENTITY(Local_5769, 1, 1);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
									if (func_89("WADE BIKE RIGHT"))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6420, 0))
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 41.2664f, 3615.513f, 38.625f, 1f, -1, 0.25f, 0, 1193033728);
											TASK::TASK_ENTER_VEHICLE(0, iLocal_6420, -1, -1, 2f, 1, 0);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_6420, 1982.723f, 3831.495f, 31.3972f, 30f, 0, joaat("hexer"), 788517, 20f, 1f);
											TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2000f, -1, 0, 0);
										}
										else
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -6.8398f, 3611.417f, 40.613f, 1f, -1, 0.25f, 0, 1193033728);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.3429f, 3884.16f, 36.4223f, 2f, -1, 0.25f, 0, 1193033728);
											TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2000f, -1, 0, 0);
										}
									}
									else if (func_89("WADE BIKE LEFT"))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6420, 0))
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 104.0991f, 3592.698f, 38.7392f, 1f, -1, 0.25f, 0, 1193033728);
											TASK::TASK_ENTER_VEHICLE(0, iLocal_6420, -1, -1, 2f, 1, 0);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_6420, 1982.723f, 3831.495f, 31.3972f, 30f, 0, joaat("hexer"), 788517, 20f, 1f);
											TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2000f, -1, 0, 0);
										}
										else
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -6.8398f, 3611.417f, 40.613f, 1f, -1, 0.25f, 0, 1193033728);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.3429f, 3884.16f, 36.4223f, 2f, -1, 0.25f, 0, 1193033728);
											TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2000f, -1, 0, 0);
										}
									}
									else
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -6.8398f, 3611.417f, 40.613f, 1f, -1, 0.25f, 0, 1193033728);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.3429f, 3884.16f, 36.4223f, 2f, -1, 0.25f, 0, 1193033728);
										TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2000f, -1, 0, 0);
									}
									TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
									TASK::TASK_PERFORM_SEQUENCE(Local_5769, uLocal_6565);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
									PED::SET_PED_KEEP_TASK(Local_5769, 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_wade"));
									iLocal_6338 = 1;
								}
							}
							else if (!PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
								if (func_89("WADE BIKE RIGHT"))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6420, 0))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 41.2664f, 3615.513f, 38.625f, 1f, -1, 0.25f, 0, 1193033728);
										TASK::TASK_ENTER_VEHICLE(0, iLocal_6420, -1, -1, 2f, 1, 0);
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_6420, 1982.723f, 3831.495f, 31.3972f, 30f, 0, joaat("hexer"), 2048, 20f, 1f);
										TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2000f, -1, 0, 0);
									}
									else
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -6.8398f, 3611.417f, 40.613f, 1f, -1, 0.25f, 0, 1193033728);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.3429f, 3884.16f, 36.4223f, 2f, -1, 0.25f, 0, 1193033728);
										TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2000f, -1, 0, 0);
									}
								}
								else if (func_89("WADE BIKE LEFT"))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6420, 0))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 104.0991f, 3592.698f, 38.7392f, 1f, -1, 0.25f, 0, 1193033728);
										TASK::TASK_ENTER_VEHICLE(0, iLocal_6420, -1, -1, 2f, 1, 0);
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_6420, 1982.723f, 3831.495f, 31.3972f, 30f, 0, joaat("hexer"), 2048, 20f, 1f);
										TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2000f, -1, 0, 0);
									}
									else
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -6.8398f, 3611.417f, 40.613f, 1f, -1, 0.25f, 0, 1193033728);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.3429f, 3884.16f, 36.4223f, 2f, -1, 0.25f, 0, 1193033728);
										TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2000f, -1, 0, 0);
									}
								}
								else
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -6.8398f, 3611.417f, 40.613f, 1f, -1, 0.25f, 0, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.3429f, 3884.16f, 36.4223f, 2f, -1, 0.25f, 0, 1193033728);
									TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2000f, -1, 0, 0);
								}
								TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
								TASK::TASK_PERFORM_SEQUENCE(Local_5769, uLocal_6565);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
								PED::SET_PED_KEEP_TASK(Local_5769, 1);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_wade"));
								iLocal_6338 = 1;
							}
						}
					}
					else
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_5769, PLAYER::PLAYER_PED_ID(), 1))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_5769, 1805844857) != 1)
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_5769, -4f, 1);
								ENTITY::DETACH_ENTITY(Local_5769, 1, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5769, 0);
								TASK::TASK_SMART_FLEE_PED(Local_5769, PLAYER::PLAYER_PED_ID(), 2000f, -1, 0, 0);
							}
						}
						if (!func_89("WADE MUMBLE"))
						{
							GlobalFunc_5653(Local_5769, "T1M1_FNAA", "LOST1", 3);
							func_88("WADE MUMBLE", 1);
							iLocal_823 = MISC::GET_GAME_TIMER();
						}
						else if (GlobalFunc_588(&iLocal_823, 8000))
						{
							func_88("WADE MUMBLE", 0);
						}
					}
				}
			}
		}
	}
}

int func_613()//Position - 0x6F17D
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	struct<34> Var4[10];
	bool bVar345;
	float fVar346;
	bool bVar347;
	int iVar348;
	
	if (iLocal_7366 == 0)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(Local_5759))
			{
				PED::SET_PED_CONFIG_FLAG(Local_5759, 211, 0);
			}
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				PED::SET_PED_CONFIG_FLAG(Local_5769, 211, 0);
			}
			iLocal_7366 = 1;
		}
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(1);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_KILL_BIKERS"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_CHASE_KILL_BIKERS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_FOLLOW_VAN"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_CHASE_FOLLOW_VAN");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_KILL_BIKERS") && !AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_FOLLOW_VAN"))
	{
		if (!func_89("TREVOR_1_SHOOTOUT_START"))
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_1_SHOOTOUT_START");
			func_88("TREVOR_1_SHOOTOUT_START", 1);
		}
	}
	if (!func_89("TRV1_AT_CARAVAN"))
	{
		if (!PED::IS_PED_INJURED(Local_5759) && !PED::IS_PED_INJURED(Local_5769))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 1) && !PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 1))
			{
				AUDIO::PREPARE_MUSIC_EVENT("TRV1_AT_CARAVAN");
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_AT_CARAVAN"))
				{
					func_88("TRV1_AT_CARAVAN", 1);
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 72.50677f, 3597.106f, 58.68276f, 75.93925f, 3772.75f, 25.81833f, 170f, 0, 1, 0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 67.07f, 3703.85f, 39.56f, 1) > 125f)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_6567))
			{
				GlobalFunc_5105();
				if (!GlobalFunc_111() && !GlobalFunc_5172(&Local_6221, 1))
				{
					HUD::CLEAR_PRINTS();
					func_569("TRV_RETTP", 7500);
					uLocal_6567 = GlobalFunc_5104(67.07f, 3703.85f, 39.56f, 0);
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 67.07f, 3703.85f, 39.56f, 1) > 150f)
			{
				func_31(14);
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_6567))
		{
			HUD::REMOVE_BLIP(&uLocal_6567);
		}
		if (GlobalFunc_663("TRV_RETTP", 0, 0))
		{
			HUD::CLEAR_PRINTS();
		}
	}
	if (PED::IS_PED_INJURED(Local_852[3 /*65*/]))
	{
		if (HUD::DOES_BLIP_EXIST(Local_852[3 /*65*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_852[3 /*65*/].f_1));
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_852[3 /*65*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_852[3 /*65*/].f_16);
	}
	if (PED::IS_PED_INJURED(Local_852[2 /*65*/]))
	{
		if (HUD::DOES_BLIP_EXIST(Local_852[2 /*65*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_852[2 /*65*/].f_1));
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_852[2 /*65*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_852[2 /*65*/].f_16);
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_6270) > 200)
	{
		PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 10f, 0, 1, &uVar0, 0, 0, -1);
		iLocal_6270 = MISC::GET_GAME_TIMER();
	}
	func_712(&Local_1820, 0);
	func_712(&Local_3698, 0);
	func_711();
	func_710();
	func_707();
	func_589();
	func_705();
	func_703();
	func_702();
	if (iLocal_6315)
	{
		func_701();
	}
	func_700();
	func_699();
	if (iLocal_700 == 1)
	{
		if (GlobalFunc_588(&iLocal_7365, 60000))
		{
			func_698();
		}
	}
	if (iLocal_6324 == 0)
	{
		func_500();
		func_460(2, "Caravan Park Fight", 0, 0, 0, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_01"), 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_02"), 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_03"), 1);
		iLocal_7350 = 0;
		iLocal_6324 = 1;
	}
	iVar3 = joaat("prop_gascyl_01a");
	bVar345 = false;
	if (!ENTITY::IS_ENTITY_DEAD(Local_6159))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6159))
		{
			func_658(Local_6159, 1f);
		}
		else
		{
			bVar345 = true;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_6171[0 /*12*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[0 /*12*/]))
		{
			if (bVar345)
			{
				VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_6171[0 /*12*/]);
			}
			else
			{
				VEHICLE::SET_PLAYBACK_SPEED(Local_6171[0 /*12*/], 1f);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_6171[1 /*12*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[1 /*12*/]))
		{
			if (bVar345)
			{
				VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_6171[1 /*12*/]);
			}
			else
			{
				VEHICLE::SET_PLAYBACK_SPEED(Local_6171[1 /*12*/], 1f);
			}
		}
	}
	if (!iLocal_6315)
	{
		STREAMING::REQUEST_MODEL(iVar3);
		STREAMING::REQUEST_MODEL(joaat("prop_gascyl_02a"));
		STREAMING::REQUEST_MODEL(Local_7150.f_7);
		STREAMING::REQUEST_MODEL(Local_7150.f_8);
		if (((STREAMING::HAS_MODEL_LOADED(iVar3) && STREAMING::HAS_MODEL_LOADED(joaat("prop_gascyl_02a"))) && STREAMING::HAS_MODEL_LOADED(Local_7150.f_7)) && STREAMING::HAS_MODEL_LOADED(Local_7150.f_8))
		{
			STREAMING::REQUEST_MODEL(Local_7150.f_4);
			STREAMING::REQUEST_MODEL(Local_7150);
			STREAMING::REQUEST_MODEL(Local_7150.f_5);
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(9, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(11, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(12, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(13, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(14, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(15, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(16, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(17, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(18, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(19, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(20, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(21, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(22, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(23, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(3, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(4, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(5, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(6, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(7, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(8, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(9, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(10, "t1b");
			if ((((((((((((((((((((((((((STREAMING::HAS_MODEL_LOADED(Local_7150.f_4) && STREAMING::HAS_MODEL_LOADED(Local_7150)) && STREAMING::HAS_MODEL_LOADED(Local_7150.f_5)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "t1b"))
			{
				GlobalFunc_5105();
				func_459();
				func_564(Local_7150.f_7);
				func_564(Local_7150.f_8);
				func_564(Local_7150.f_4);
				func_564(Local_7150);
				func_564(Local_7150.f_5);
				func_454();
				func_449(4);
				iLocal_6558 = 0;
				if (!ENTITY::DOES_ENTITY_EXIST(Local_5834[4 /*12*/]))
				{
					while (iLocal_6558 < 26)
					{
						if (func_657(&(Local_5834[iLocal_6558 /*12*/])))
						{
							if (iLocal_6558 == 10)
							{
								VEHICLE::DELETE_VEHICLE(&(Local_5834[iLocal_6558 /*12*/]));
							}
							if (iLocal_6558 == 11)
							{
								VEHICLE::DELETE_VEHICLE(&(Local_5834[iLocal_6558 /*12*/]));
							}
							if (iLocal_6558 == 12)
							{
								VEHICLE::SET_VEHICLE_COLOURS(Local_5834[iLocal_6558 /*12*/], 10, 10);
							}
							if (iLocal_6558 == 13)
							{
								VEHICLE::SET_VEHICLE_COLOURS(Local_5834[iLocal_6558 /*12*/], 4, 4);
							}
							if (iLocal_6558 == 23)
							{
								VEHICLE::SET_VEHICLE_COLOURS(Local_5834[iLocal_6558 /*12*/], 13, 13);
							}
							if (iLocal_6558 == 19)
							{
								VEHICLE::SET_VEHICLE_COLOURS(Local_5834[iLocal_6558 /*12*/], 13, 13);
							}
							iLocal_6558++;
						}
						else
						{
							func_457(0);
						}
					}
					func_581(0, 1045220557, 1);
				}
				iLocal_6558 = 0;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[4 /*12*/], 0))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_5834[4 /*12*/], 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_5834[4 /*12*/], 1, "trevor1dw", 1);
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[4 /*12*/]);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[12 /*12*/], 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 51.19f, 3735.08f, 39.24f, 1) > 20f)
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_5834[12 /*12*/], 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_5834[12 /*12*/], 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_5834[12 /*12*/], 10, "t1b", 1);
						VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[12 /*12*/]);
						ENTITY::SET_ENTITY_HEALTH(Local_5834[12 /*12*/], 300);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[5 /*12*/], 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[5 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_5834[5 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[6 /*12*/], 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[6 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_5834[6 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[7 /*12*/], 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[7 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_5834[7 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[15 /*12*/], 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[15 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_5834[15 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[16 /*12*/], 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[16 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_5834[16 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[17 /*12*/], 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[17 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_5834[17 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[20 /*12*/], 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[20 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_5834[20 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[21 /*12*/], 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[21 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_5834[21 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[22 /*12*/], 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[22 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_5834[22 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[24 /*12*/], 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[24 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_5834[24 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[25 /*12*/], 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5834[25 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_5834[25 /*12*/]));
					}
				}
				iLocal_6558 = 0;
				while (iLocal_6558 < iLocal_6443)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[iLocal_6558]))
					{
						OBJECT::DELETE_OBJECT(&(iLocal_6443[iLocal_6558]));
					}
					iLocal_6558++;
				}
				if (HUD::DOES_BLIP_EXIST(Local_6159.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_6159.f_1));
				}
				if (HUD::DOES_BLIP_EXIST(Local_6171[0 /*12*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_6171[0 /*12*/].f_1));
				}
				if (HUD::DOES_BLIP_EXIST(Local_6171[1 /*12*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_6171[1 /*12*/].f_1));
				}
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				MISC::ENABLE_DISPATCH_SERVICE(3, 0);
				iLocal_6544 = 0;
				Local_6465[0 /*3*/] = { 61f, 3669.8f, 39.16f };
				Local_6465[1 /*3*/] = { 33.31f, 3668.32f, 39.11f };
				Local_6465[2 /*3*/] = { 39.02f, 3688.35f, 38.94f };
				Local_6465[3 /*3*/] = { 63.43f, 3685.22f, 39.22f };
				Local_6465[4 /*3*/] = { 93.32f, 3717.06f, 39.01f };
				Local_6465[5 /*3*/] = { 104.2f, 3730.56f, 38.93f };
				Local_6465[6 /*3*/] = { 91.72f, 3684.61f, 38.94f };
				Local_6465[8 /*3*/] = { 80.07f, 3689.77f, 39f };
				Local_6465[9 /*3*/] = { 79.87f, 3690.17f, 38.89f };
				Local_6465[10 /*3*/] = { 66.32f, 3657.64f, 39.09f };
				Local_6465[11 /*3*/] = { 71.49f, 3746.65f, 39.13f };
				Local_6465[12 /*3*/] = { 66.98f, 3691.36f, 39.17f };
				Local_6465[13 /*3*/] = { 95.6f, 3745.61f, 39.17f };
				Local_6465[7 /*3*/] = { 39.84553f, 3735.912f, 38.52788f };
				Local_6465[14 /*3*/] = { 35.61419f, 3731.957f, 38.52788f };
				iLocal_6558 = 0;
				iLocal_6558 = 0;
				while (iLocal_6558 < Local_6465.x)
				{
					if (!GlobalFunc_100(Local_6465[iLocal_6558 /*3*/], 0f, 0f, 0f))
					{
						if (iLocal_6558 == 14 || iLocal_6558 == 7)
						{
							iLocal_6443[iLocal_6558] = OBJECT::CREATE_OBJECT(joaat("prop_gascyl_02a"), Local_6465[iLocal_6558 /*3*/], 1, 1, 0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[iLocal_6558]))
							{
								OBJECT::SET_OBJECT_TARGETTABLE(iLocal_6443[iLocal_6558], 1);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_6443[iLocal_6558], 1, 40f);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_6443[iLocal_6558], 1);
							}
						}
						else
						{
							MISC::GET_GROUND_Z_FOR_3D_COORD(Local_6465[iLocal_6558 /*3*/], &fVar346);
							fVar346 = (fVar346 + 0.4f);
							Local_6465[iLocal_6558 /*3*/].f_2 = fVar346;
							iLocal_6443[iLocal_6558] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar3, Local_6465[iLocal_6558 /*3*/], 1, 1, 0);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_6443[iLocal_6558], 1);
						}
					}
					iLocal_6558++;
				}
				iLocal_6558 = 0;
				iLocal_6558 = 0;
				while (iLocal_6558 < iLocal_6355)
				{
					iLocal_6355[iLocal_6558] = 0;
					iLocal_6382[iLocal_6558] = 0;
					iLocal_6558++;
				}
				iLocal_6382[12] = 1;
				iLocal_6382[13] = 1;
				iLocal_6382[18] = 1;
				iLocal_6382[19] = 1;
				HUD::SET_RADAR_ZOOM(1);
				GlobalFunc_200(&Local_6622, 4);
				if (!ENTITY::IS_ENTITY_DEAD(Local_852[0 /*65*/]))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_852[0 /*65*/], 0);
					Local_1820[2 /*34*/] = Local_852[0 /*65*/];
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_852[1 /*65*/]))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_852[1 /*65*/], 0);
					Local_1820[3 /*34*/] = Local_852[1 /*65*/];
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_852[2 /*65*/]))
				{
					Local_1820[0 /*34*/] = Local_852[2 /*65*/];
					if (HUD::DOES_BLIP_EXIST(Local_852[2 /*65*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_852[2 /*65*/].f_1));
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_852[3 /*65*/]))
				{
					Local_1820[1 /*34*/] = Local_852[3 /*65*/];
					if (HUD::DOES_BLIP_EXIST(Local_852[3 /*65*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_852[3 /*65*/].f_1));
					}
				}
				if (iLocal_6246 < 6)
				{
					GlobalFunc_7621(48, 0, 0, 1, 0);
				}
				else
				{
					GlobalFunc_7621(48, 2, 0, 1, 0);
				}
				GlobalFunc_7621(38, 0, 0, 1, 0);
				GlobalFunc_7621(40, 0, 0, 1, 0);
				GlobalFunc_7621(42, 0, 0, 1, 0);
				GlobalFunc_7621(44, 0, 0, 1, 0);
				GlobalFunc_7621(46, 0, 0, 1, 0);
				GlobalFunc_7621(37, 0, 0, 1, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PED::ADD_SCENARIO_BLOCKING_AREA(Local_6529 + Vector(100f, 100f, 100f), Local_6529 - Vector(100f, 100f, 100f), 0, 1, 1, 1);
					MISC::CLEAR_AREA(Local_6529, 500f, 1, 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_5759))
				{
					GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_5769))
				{
					GlobalFunc_173(&Local_6622, 4, Local_5769, "Wade", 0, 1);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_173(&Local_6622, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				}
				if (iLocal_6429 == 1)
				{
					GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6566, 0);
				}
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_6247))
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_6247, 11);
				}
				MISC::ENABLE_DISPATCH_SERVICE(3, 0);
				MISC::ENABLE_DISPATCH_SERVICE(5, 0);
				func_654(21);
				func_654(4);
				func_654(7);
				func_654(22);
				func_654(18);
				func_654(5);
				func_654(6);
				func_654(19);
				func_654(8);
				func_654(20);
				if (iLocal_6308 == 0)
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pumpshotgun"), 31, 0);
							if (WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pumpshotgun")))
							{
								if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0))
								{
									WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 65, 0, 1);
								}
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							}
						}
						else if (iLocal_814 == 0)
						{
							WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pumpshotgun"), 31, 0);
							if (WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pumpshotgun")))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0);
									iLocal_814 = 1;
								}
							}
						}
					}
				}
				if (iLocal_6308 == 1)
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						uLocal_809 = TASK::ADD_COVER_POINT(58.4031f, 3630.96f, 38.7482f, 24.4402f, 0, 2, 3, 1);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), 58.4031f, 3630.96f, 38.7482f, -1, 1, 0f, 1, 0, uLocal_809, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 173, 1);
						iLocal_716 = GlobalFunc_2284(2);
						if (iLocal_716 != 0 && iLocal_716 != joaat("weapon_unarmed"))
						{
							WEAPON::REQUEST_WEAPON_ASSET(iLocal_716, 31, 0);
						}
						if (GlobalFunc_2284(2) != joaat("weapon_unarmed") && GlobalFunc_2284(2) != 0)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), GlobalFunc_2284(2), 1);
							}
						}
						else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0), 1);
						}
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f), 0, 1);
						VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f));
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
					}
				}
				GlobalFunc_200(&Local_6622, 4);
				GlobalFunc_200(&Local_6622, 5);
				iLocal_6561 = 0;
				iLocal_6549 = 0;
				iLocal_7331 = 0;
				iLocal_7333 = 0;
				iLocal_7330 = 0;
				iLocal_7334 = 0;
				iLocal_6304 = 0;
				iLocal_7338 = 0;
				iLocal_7339 = 0;
				iLocal_7341 = 0;
				iLocal_826 = 0;
				iLocal_7343 = 0;
				iLocal_7336 = 0;
				iLocal_6414 = 0;
				iLocal_7276 = 0;
				iLocal_7277 = 0;
				iLocal_7279 = 0;
				iLocal_6424 = 0;
				iLocal_7278 = 0;
				iLocal_6322 = 0;
				iLocal_6315 = 1;
				iLocal_7349 = 0;
				Local_1820[40 /*34*/].f_31 = 0;
				Local_1820[40 /*34*/].f_30 = 0;
				Local_1820[2 /*34*/].f_31 = 0;
				Local_1820[2 /*34*/].f_30 = 0;
				Local_1820[16 /*34*/].f_30 = 0;
				Local_1820[16 /*34*/].f_32 = 0;
				Local_1820[15 /*34*/].f_30 = 0;
				iLocal_707[0] = 0;
				iLocal_707[1] = 0;
				iLocal_707[2] = 0;
				iLocal_707[3] = 0;
				iLocal_707[4] = 0;
				iLocal_713 = 0;
				iLocal_7336 = 0;
				iLocal_7366 = 0;
				iLocal_6338 = 0;
				GlobalFunc_10617(112, 0);
				GlobalFunc_10617(113, 0);
				iLocal_811 = MISC::GET_GAME_TIMER();
				iLocal_700 = 0;
				iLocal_813 = 0;
				bLocal_699 = true;
				if (!iLocal_6343)
				{
					func_453();
					iLocal_6343 = 1;
				}
			}
		}
	}
	else
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar348, 1))
		{
			if (iVar348 == joaat("weapon_sawnoffshotgun") || iVar348 == joaat("weapon_pumpshotgun"))
			{
				bVar347 = true;
			}
			else
			{
				bVar347 = false;
			}
		}
		else
		{
			bVar347 = false;
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (GlobalFunc_588(&iLocal_811, 800))
			{
				func_553(500);
			}
		}
		if (func_89("SET UP TRUCK FOR SHOOTOUT"))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				VEHICLE::SET_VEHICLE_STRONG(Local_6147, 1);
				func_88("SET UP TRUCK FOR SHOOTOUT", 1);
			}
		}
		if (bVar347)
		{
			iLocal_6558 = 0;
			iLocal_6558 = 0;
			while (iLocal_6558 < Local_5834)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5834[iLocal_6558 /*12*/]))
				{
					if (iLocal_6382[iLocal_6558])
					{
						if (iLocal_6355[iLocal_6558] == 0)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_5834[iLocal_6558 /*12*/], PLAYER::PLAYER_PED_ID(), 1))
							{
								VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_5834[iLocal_6558 /*12*/], 100f);
								VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_5834[iLocal_6558 /*12*/], 1);
								iLocal_6355[iLocal_6558] = MISC::GET_GAME_TIMER();
							}
						}
						else if (func_653(iLocal_6355[iLocal_6558], 5000))
						{
							VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_5834[iLocal_6558 /*12*/], 0);
							iLocal_6382[iLocal_6558] = 0;
						}
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_5834[iLocal_6558 /*12*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						func_652(Local_5834[iLocal_6558 /*12*/], Local_5834[iLocal_6558 /*12*/].f_6);
					}
				}
				iLocal_6558++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_6159))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_6159, PLAYER::PLAYER_PED_ID(), 1))
				{
					func_652(Local_6159, Local_6159.f_6);
				}
			}
		}
		iLocal_6558 = 0;
		iLocal_6558 = 0;
		while (iLocal_6558 < iLocal_6409)
		{
			if (!iLocal_6409[iLocal_6558])
			{
				if (func_651(iLocal_6558))
				{
					iLocal_6409[iLocal_6558] = 1;
				}
			}
			iLocal_6558++;
		}
		if (iLocal_700 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (!PED::IS_PED_INJURED(Local_5759))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_5759);
					PED::SET_PED_ACCURACY(Local_5759, 1);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_5759, 80f, 90f);
					ENTITY::SET_ENTITY_HEALTH(Local_5759, 800);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_5759, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5759, 0, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5759, 11, 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_5759, ENTITY::GET_ENTITY_COORDS(Local_6147, 0), 4f, 0, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5759, iLocal_6571);
					PED::SET_PED_CAN_BE_TARGETTED(Local_5759, 0);
					PED::SET_PED_CONFIG_FLAG(Local_5759, 118, 0);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6572, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_6571, iLocal_6571);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_6571, 1862763509);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_5759, 0, iLocal_6572);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5759, 0);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6571, iLocal_6572);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_6572, iLocal_6571);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5759, 36, 1);
					PED::SET_PED_SEEING_RANGE(Local_5759, 500f);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_5759, 1);
					PED::SET_PED_CONFIG_FLAG(Local_5759, 211, 1);
					if (!HUD::DOES_BLIP_EXIST(Local_5759.f_1))
					{
						Local_5759.f_1 = GlobalFunc_6797(Local_5759, 0, 20);
						HUD::SET_BLIP_AS_FRIENDLY(Local_5759.f_1, true);
					}
				}
				if (!PED::IS_PED_INJURED(Local_5769))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_5769);
					PED::SET_PED_ACCURACY(Local_5769, 1);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_5769, 80f, 90f);
					ENTITY::SET_ENTITY_HEALTH(Local_5769, 800);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_5769, 0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_5769, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5769, iLocal_6571);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5769, 0, 1);
					PED::SET_PED_CONFIG_FLAG(Local_5769, 118, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_5769, ENTITY::GET_ENTITY_COORDS(Local_6147, 0), 6f, 0, 0);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6572, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_6571, iLocal_6571);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_6571, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6571, iLocal_6572);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_6572, iLocal_6571);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5769, 36, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5769, 0);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_5769, 0, iLocal_6572);
					PED::SET_PED_SEEING_RANGE(Local_5769, 500f);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_5769, 1);
					PED::SET_PED_CONFIG_FLAG(Local_5769, 211, 1);
					if (!HUD::DOES_BLIP_EXIST(Local_5769.f_1))
					{
						Local_5769.f_1 = GlobalFunc_6797(Local_5769, 0, 24);
						HUD::SET_BLIP_AS_FRIENDLY(Local_5769.f_1, true);
					}
				}
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_6571, 1862763509);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_6571);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6571, iLocal_6572);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_6572, iLocal_6571);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_6147, 0, iLocal_6571);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_6147, 1, iLocal_6572);
				VEHICLE::SET_VEHICLE_STRONG(Local_6147, 1);
				iLocal_7365 = MISC::GET_GAME_TIMER();
				iLocal_700 = 1;
			}
		}
		if (!Local_1820[0 /*34*/].f_2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_6171[0 /*12*/]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[0 /*12*/]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1820[0 /*34*/]))
					{
						if (!PED::IS_PED_INJURED(Local_1820[0 /*34*/]))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1820[0 /*34*/], iLocal_6572);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[0 /*34*/], 37, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[0 /*34*/], 0);
							PED::SET_PED_ACCURACY(Local_1820[0 /*34*/], 0);
							WEAPON::GIVE_WEAPON_TO_PED(Local_1820[0 /*34*/], joaat("weapon_pistol"), 200, 1, 1);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[0 /*34*/], 55.775f, 3672.739f, 38.8194f, 2f, 0, 0);
							TASK::OPEN_SEQUENCE_TASK(&uVar2);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uVar2);
						}
					}
					if (!PED::IS_PED_INJURED(Local_1820[0 /*34*/]))
					{
						TASK::TASK_PERFORM_SEQUENCE(Local_1820[0 /*34*/], uVar2);
					}
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
					Local_1820[0 /*34*/].f_2 = 1;
				}
			}
		}
		else if (func_650(Local_1820[0 /*34*/], 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1820[0 /*34*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[0 /*34*/]))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[0 /*34*/], 1) > 20f)
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_1820[0 /*34*/]));
						PED::DELETE_PED(&(Local_1820[0 /*34*/]));
					}
				}
			}
		}
		if (!Local_1820[1 /*34*/].f_2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_6171[1 /*12*/]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[1 /*12*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1820[1 /*34*/]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1820[1 /*34*/], iLocal_6572);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[1 /*34*/], 37, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[1 /*34*/], 0);
						PED::SET_PED_ACCURACY(Local_1820[1 /*34*/], 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[1 /*34*/], 63.7196f, 3658.601f, 38.4564f, 2f, 0, 0);
						WEAPON::GIVE_WEAPON_TO_PED(Local_1820[1 /*34*/], joaat("weapon_pistol"), -1, 1, 1);
					}
					if (!PED::IS_PED_INJURED(Local_1820[1 /*34*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar2);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uVar2);
						TASK::TASK_PERFORM_SEQUENCE(Local_1820[1 /*34*/], uVar2);
					}
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
					Local_1820[1 /*34*/].f_2 = 1;
				}
			}
		}
		else if (func_650(Local_1820[1 /*34*/], 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1820[1 /*34*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[1 /*34*/]))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[1 /*34*/], 1) > 20f)
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_1820[1 /*34*/]));
						PED::DELETE_PED(&(Local_1820[1 /*34*/]));
					}
				}
			}
		}
		if (!Local_1820[2 /*34*/].f_1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_6159))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6159))
				{
					if (!PED::IS_PED_INJURED(Local_1820[2 /*34*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_1820[2 /*34*/], 120);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1820[2 /*34*/], iLocal_6572);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[2 /*34*/], 0);
						PED::SET_PED_ACCURACY(Local_1820[2 /*34*/], 1);
						WEAPON::GIVE_WEAPON_TO_PED(Local_1820[2 /*34*/], joaat("weapon_pistol"), -1, 1, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[2 /*34*/], 50.2847f, 3665.541f, 38.7129f, 8f, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_1820[2 /*34*/], 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[2 /*34*/], 35, 1);
						PED::SET_PED_TO_LOAD_COVER(Local_1820[2 /*34*/], 1);
						TASK::OPEN_SEQUENCE_TASK(&uVar2);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uVar2);
						TASK::TASK_PERFORM_SEQUENCE(Local_1820[2 /*34*/], uVar2);
						TASK::CLEAR_SEQUENCE_TASK(&uVar2);
						GlobalFunc_5130(Local_1820[2 /*34*/], "GENERIC_WAR_CRY", 18);
						Local_1820[2 /*34*/].f_2 = 1;
						Local_1820[2 /*34*/].f_1 = 1;
					}
				}
			}
		}
		else if (Local_1820[2 /*34*/].f_1 == 1)
		{
			if (Local_1820[2 /*34*/].f_30 == 0)
			{
				if (!PED::IS_PED_INJURED(Local_1820[2 /*34*/]))
				{
					if (func_89("DID CHASE"))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1820[2 /*34*/], PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_588(&iLocal_7365, 25000))
						{
							GlobalFunc_5130(Local_1820[2 /*34*/], "GENERIC_CURSE_HIGH", 18);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[2 /*34*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[2 /*34*/], ENTITY::GET_ENTITY_COORDS(Local_1820[2 /*34*/], 0), 20f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[2 /*34*/], 50, 1);
							PED::SET_PED_COMBAT_RANGE(Local_1820[2 /*34*/], 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[2 /*34*/], 51, 1);
							Local_1820[2 /*34*/].f_30 = 1;
						}
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1820[2 /*34*/], PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_588(&iLocal_7365, 8000))
					{
						GlobalFunc_5130(Local_1820[2 /*34*/], "GENERIC_CURSE_HIGH", 18);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[2 /*34*/], 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[2 /*34*/], ENTITY::GET_ENTITY_COORDS(Local_1820[2 /*34*/], 0), 20f, 0, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[2 /*34*/], 50, 1);
						PED::SET_PED_COMBAT_RANGE(Local_1820[2 /*34*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[2 /*34*/], 51, 1);
						Local_1820[2 /*34*/].f_30 = 1;
					}
				}
			}
		}
		if (!Local_1820[3 /*34*/].f_2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_6159))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6159))
				{
					if (!PED::IS_PED_INJURED(Local_1820[3 /*34*/]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1820[3 /*34*/], iLocal_6572);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[3 /*34*/], 37, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[3 /*34*/], 0);
						PED::SET_PED_ACCURACY(Local_1820[3 /*34*/], 1);
						WEAPON::GIVE_WEAPON_TO_PED(Local_1820[3 /*34*/], joaat("weapon_pistol"), -1, 1, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[3 /*34*/], 55.3607f, 3672.665f, 38.8215f, 2f, 0, 0);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uVar2);
					if (!PED::IS_PED_INJURED(Local_1820[3 /*34*/]))
					{
						TASK::TASK_PERFORM_SEQUENCE(Local_1820[3 /*34*/], uVar2);
					}
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
					Local_1820[3 /*34*/].f_2 = 1;
				}
			}
		}
		else if (func_650(Local_1820[3 /*34*/], 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1820[3 /*34*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[3 /*34*/]))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[3 /*34*/], 1) > 20f)
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_1820[3 /*34*/]));
						PED::DELETE_PED(&(Local_1820[3 /*34*/]));
					}
				}
			}
		}
		if (!func_648(4))
		{
			func_647(bVar347);
			func_646();
			func_645();
			func_644();
			func_642();
			func_640();
			func_639();
			func_638();
			func_637();
			func_636();
			func_635();
			func_634();
			func_630();
		}
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!Local_1820[40 /*34*/].f_31)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[40 /*34*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[40 /*34*/], 1);
					TASK::TASK_COMBAT_PED(Local_1820[40 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::REMOVE_COVER_POINT(Local_1820[40 /*34*/].f_19);
					Local_1820[40 /*34*/].f_19 = TASK::ADD_COVER_POINT(53.0982f, 3645.862f, 38.6581f, 185.3102f, 1, 1, 1, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[40 /*34*/], 53.31f, 3646.12f, 39.66f, 4f, 1, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_1820[40 /*34*/], 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[40 /*34*/], 51, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[40 /*34*/], 50, 1);
					GlobalFunc_5130(Local_1820[40 /*34*/], "GENERIC_WAR_CRY", 18);
					Local_1820[40 /*34*/].f_31 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(Local_1820[40 /*34*/]))
			{
				if (Local_1820[40 /*34*/].f_30 == 0)
				{
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1820[40 /*34*/], PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_588(&iLocal_7365, 10000)) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_1820[40 /*34*/]) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_1820[40 /*34*/]) && GlobalFunc_588(&iLocal_7365, 4000))))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[40 /*34*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[40 /*34*/], 50, 1);
						PED::SET_PED_COMBAT_RANGE(Local_1820[40 /*34*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[40 /*34*/], 51, 1);
						PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_1820[40 /*34*/], PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 25f, 0, 0);
						GlobalFunc_5130(Local_1820[40 /*34*/], "GENERIC_WAR_CRY", 18);
						Local_1820[40 /*34*/].f_30 = 1;
					}
				}
			}
			if (Local_1820[16 /*34*/].f_1)
			{
				if (!PED::IS_PED_INJURED(Local_1820[16 /*34*/]))
				{
					if (Local_1820[16 /*34*/].f_30 == 0)
					{
						if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1820[16 /*34*/], PLAYER::PLAYER_PED_ID(), 1) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_1820[16 /*34*/]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_1820[16 /*34*/]))) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 23.03563f, 3659.842f, 37.53075f, 40.42809f, 3684.75f, 45.73746f, 12.25f, 0, 1, 0)) || (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[16 /*34*/], 1) < 22f && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[12 /*12*/], 0)))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[16 /*34*/], 0);
							PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_1820[16 /*34*/], PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 25f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[16 /*34*/], 50, 1);
							PED::SET_PED_COMBAT_RANGE(Local_1820[16 /*34*/], 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[16 /*34*/], 51, 1);
							Local_1820[16 /*34*/].f_30 = 1;
						}
					}
				}
			}
			if (Local_1820[15 /*34*/].f_1)
			{
				if (!PED::IS_PED_INJURED(Local_1820[15 /*34*/]))
				{
					if (Local_1820[15 /*34*/].f_30 == 0)
					{
						if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1820[15 /*34*/], PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_156(Local_1820[15 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < 20f) || PED::IS_PED_INJURED(Local_1820[6 /*34*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[15 /*34*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[15 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 20f, 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[15 /*34*/], 50, 1);
							PED::SET_PED_COMBAT_RANGE(Local_1820[15 /*34*/], 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[15 /*34*/], 51, 1);
							Local_1820[15 /*34*/].f_30 = 1;
						}
					}
				}
			}
			if (!Local_1820[9 /*34*/].f_1)
			{
				Local_1820[9 /*34*/].f_1 = 1;
			}
			else
			{
				if (!iLocal_6409[1])
				{
					if (func_651(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 81.03938f, 3683.04f, 37.95245f, 100.1882f, 3642.278f, 43.71773f, 39.5f, 0, 1, 0))
						{
						}
					}
				}
				if (!Local_1820[21 /*34*/].f_1)
				{
					if (func_629())
					{
						if (Local_1820[21 /*34*/].f_1 == 0)
						{
							if (func_628(108.7403f, 3718.448f, 39.7577f, 1f, 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 108.7403f, 3718.448f, 39.7577f, 1) < 30f)
							{
								Local_1820[21 /*34*/].f_1 = 1;
								Local_1820[22 /*34*/].f_1 = 1;
							}
						}
					}
					else if (Local_1820[21 /*34*/].f_1 == 0)
					{
						if (func_628(108.7403f, 3718.448f, 39.7577f, 1f, 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 108.7403f, 3718.448f, 39.7577f, 1) < 30f)
						{
							Local_1820[21 /*34*/].f_1 = 1;
							Local_1820[22 /*34*/].f_1 = 1;
						}
					}
				}
			}
			if (!Local_1820[29 /*34*/].f_1)
			{
				if (func_627())
				{
					func_654(3);
					Local_1820[29 /*34*/].f_1 = 1;
					Local_1820[30 /*34*/].f_1 = 1;
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1820[29 /*34*/]))
				{
					if (func_650(Local_1820[29 /*34*/], 1, 0))
					{
						if (!func_625())
						{
							PED::DELETE_PED(&(Local_1820[29 /*34*/]));
						}
						else
						{
							func_624(29, 0, 1, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1820[30 /*34*/]))
				{
					if (func_650(Local_1820[30 /*34*/], 1, 0))
					{
						if (!func_625())
						{
							PED::DELETE_PED(&(Local_1820[30 /*34*/]));
						}
						else
						{
							func_624(30, 0, 1, 1);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1820[15 /*34*/]))
			{
				if (!Local_1820[6 /*34*/].f_1)
				{
					if (iLocal_700 == 1)
					{
						Var4[0 /*34*/] = { Local_1820[40 /*34*/] };
						Var4[1 /*34*/] = { Local_1820[2 /*34*/] };
						if (((((func_623(&Var4, 2, 2, 1, 1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 47.68305f, 3660.82f, 38.26171f, 55.50465f, 3671.675f, 43.23418f, 2.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 41.59353f, 3653.653f, 37.46062f, 20.17816f, 3651.211f, 44.4404f, 4.5f, 0, 1, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 32.48455f, 3667.249f, 39.54953f, 1) < 26f) || GlobalFunc_588(&iLocal_7365, 30000)) || PED::IS_PED_INJURED(Local_1820[15 /*34*/]))
						{
							if (!PED::IS_PED_INJURED(Local_1820[6 /*34*/]))
							{
								GlobalFunc_5130(Local_1820[6 /*34*/], "GENERIC_FUCK_YOU", 24);
							}
							Local_1820[6 /*34*/].f_1 = 1;
							Local_3698[0 /*34*/].f_1 = 1;
						}
					}
				}
			}
			if (!Local_1820[15 /*34*/].f_1)
			{
				Var4[0 /*34*/] = { Local_1820[9 /*34*/] };
				Var4[1 /*34*/] = { Local_1820[11 /*34*/] };
				Var4[2 /*34*/] = { Local_1820[17 /*34*/] };
				if (func_623(&Var4, 3, 3, 1, 1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -4.104918f, 3693.259f, 37.89281f, 29.59784f, 3712.84f, 41.89134f, 34.25f, 0, 1, 0))
				{
					Local_1820[15 /*34*/].f_1 = 1;
				}
				if (!PED::IS_PED_INJURED(Local_1820[15 /*34*/]))
				{
					if (iLocal_6554 > 0)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[15 /*34*/]))
						{
							Local_1820[15 /*34*/].f_1 = 1;
						}
					}
				}
			}
			if (!Local_1820[16 /*34*/].f_1)
			{
				if (!PED::IS_PED_INJURED(Local_1820[16 /*34*/]))
				{
					if (GlobalFunc_156(Local_1820[16 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < 25f)
					{
						if (GlobalFunc_156(Local_1820[16 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < 15f || !ENTITY::IS_ENTITY_OCCLUDED(Local_1820[16 /*34*/]))
						{
							Local_1820[16 /*34*/].f_1 = 1;
						}
					}
				}
			}
			if (iLocal_700 == 1)
			{
				if (!Local_1820[16 /*34*/].f_1)
				{
					if (!PED::IS_PED_INJURED(Local_1820[16 /*34*/]))
					{
						if (GlobalFunc_156(Local_1820[16 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < 65f || GlobalFunc_588(&iLocal_7365, 20000))
						{
							Local_1820[16 /*34*/].f_1 = 1;
							Local_1820[15 /*34*/].f_1 = 1;
						}
					}
				}
			}
			if (!Local_1820[37 /*34*/].f_1)
			{
				if (func_622())
				{
					if (iLocal_7336 > 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_5834[20 /*12*/]))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[20 /*12*/]))
							{
								Local_1820[36 /*34*/].f_1 = 1;
								Local_1820[37 /*34*/].f_1 = 1;
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 73.80382f, 3736.188f, 38.35057f, 72.86808f, 3746.608f, 41.4457f, 2.25f, 0, 1, 0))
				{
					Local_1820[35 /*34*/].f_1 = 1;
					Local_1820[36 /*34*/].f_20 = { 49.4762f, 3719.531f, 38.7279f };
					Local_1820[36 /*34*/].f_18 = 8;
					Local_1820[36 /*34*/].f_1 = 1;
					Local_1820[37 /*34*/].f_20 = { 55.5819f, 3713.405f, 38.8812f };
					Local_1820[37 /*34*/].f_8 = 150;
					Local_1820[37 /*34*/].f_1 = 1;
				}
			}
			if (!Local_1820[27 /*34*/].f_1)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 95.18041f, 3739.18f, 36.01311f, 129.4137f, 3713.15f, 40.91453f, 25.25f, 0, 1, 0) || (ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[27 /*34*/]) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1820[27 /*34*/], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 20f)) || iLocal_6322)
				{
					Local_1820[26 /*34*/].f_1 = 1;
					Local_1820[27 /*34*/].f_1 = 1;
					Local_3698[1 /*34*/].f_1 = 1;
				}
				else if (iLocal_7334 > 0)
				{
					if (Local_1820[24 /*34*/].f_1)
					{
						if (Local_1820[25 /*34*/].f_1)
						{
							Var4[0 /*34*/] = { Local_1820[24 /*34*/] };
							Var4[1 /*34*/] = { Local_1820[25 /*34*/] };
							if (func_623(&Var4, 2, 2, 1, 1))
							{
								Local_1820[26 /*34*/].f_1 = 1;
								Local_1820[27 /*34*/].f_1 = 1;
								Local_3698[1 /*34*/].f_1 = 1;
							}
						}
					}
				}
			}
			if (func_621())
			{
				if (!Local_1820[35 /*34*/].f_1)
				{
					Local_1820[35 /*34*/].f_20 = { 24.4197f, 3726.095f, 38.6186f };
					Local_1820[35 /*34*/].f_18 = 1;
					Local_1820[35 /*34*/].f_26 = 0;
					Local_1820[35 /*34*/].f_27 = 1;
					Local_1820[35 /*34*/].f_1 = 1;
				}
			}
			if (!iLocal_6322)
			{
				func_620();
				if (func_619())
				{
					if (!Local_1820[35 /*34*/].f_1)
					{
						Local_1820[35 /*34*/].f_20 = { 40.5141f, 3720.741f, 38.9402f };
						Local_1820[35 /*34*/].f_18 = 8;
						Local_1820[35 /*34*/].f_26 = 0;
						Local_1820[35 /*34*/].f_27 = 1;
						Local_1820[35 /*34*/].f_1 = 1;
					}
					if (!Local_1820[36 /*34*/].f_1)
					{
						Local_1820[36 /*34*/].f_20 = { 34.6777f, 3711.956f, 39.1706f };
						Local_1820[36 /*34*/].f_18 = 8;
						Local_1820[36 /*34*/].f_26 = 0;
						Local_1820[36 /*34*/].f_27 = 1;
						Local_1820[36 /*34*/].f_1 = 1;
					}
					iLocal_6322 = 1;
				}
			}
			else
			{
				if (!Local_1820[28 /*34*/].f_1)
				{
					Local_1820[28 /*34*/].f_20 = { 106.4858f, 3741.25f, 38.7412f };
					Local_1820[28 /*34*/].f_26 = 0;
					Local_1820[28 /*34*/].f_27 = 2;
					Local_1820[28 /*34*/].f_1 = 1;
				}
				if (!Local_1820[20 /*34*/].f_1)
				{
					if (!PED::IS_PED_INJURED(Local_1820[20 /*34*/]))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1820[20 /*34*/]);
						ENTITY::SET_ENTITY_COORDS(Local_1820[20 /*34*/], 99.7073f, 3688.615f, 38.7123f, 1, 0, 0, 1);
						Local_1820[20 /*34*/].f_20 = { 99.7073f, 3688.615f, 38.7123f };
						Local_1820[20 /*34*/].f_26 = 2;
						Local_1820[20 /*34*/].f_27 = 1;
						Local_1820[20 /*34*/].f_1 = 1;
					}
				}
				if (!Local_1820[15 /*34*/].f_1)
				{
					Local_1820[15 /*34*/].f_1 = 1;
				}
				if (!Local_1820[16 /*34*/].f_1)
				{
					Local_1820[16 /*34*/].f_1 = 1;
				}
			}
		}
		func_616(&Local_1820);
		func_615();
		func_614();
		if ((((iLocal_707[0] == 1 || iLocal_707[1] == 1) || iLocal_707[2] == 1) || iLocal_707[3] == 1) || iLocal_707[4] == 1)
		{
			if (func_648(4))
			{
				AUDIO::CANCEL_MUSIC_EVENT("TRV1_EXPLODE");
				AUDIO::PREPARE_MUSIC_EVENT("TRV1_BIKERS_FLEE");
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_BIKERS_FLEE"))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_6571, iLocal_6572);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_6572, iLocal_6571);
					if (!PED::IS_PED_INJURED(Local_1820[31 /*34*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_1820[31 /*34*/], 120);
					}
					iVar1 = 0;
					while (iVar1 <= 49)
					{
						GlobalFunc_589(&(Local_1820[iVar1 /*34*/].f_10));
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 <= 2)
					{
						GlobalFunc_589(&(Local_3698[iVar1 /*34*/].f_10));
						iVar1++;
					}
					iLocal_6558 = 0;
					iVar1 = 0;
					while (iVar1 < Local_3698)
					{
						if (!PED::IS_PED_INJURED(Local_3698[iVar1 /*34*/]))
						{
							if (Local_3698[iVar1 /*34*/].f_29 == 0)
							{
								TASK::TASK_SMART_FLEE_PED(Local_3698[iVar1 /*34*/], PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
							}
						}
						iVar1++;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_3521[0 /*34*/]))
					{
						iLocal_6558 = 0;
						iVar1 = 0;
						while (iVar1 < Local_1820)
						{
							if (!PED::IS_PED_INJURED(Local_1820[iVar1 /*34*/]))
							{
								Local_3521[0 /*34*/] = { Local_1820[iVar1 /*34*/] };
								func_604(&(Local_3521[0 /*34*/]), 1);
								Local_3521[0 /*34*/].f_9 = MISC::GET_GAME_TIMER();
							}
							iVar1++;
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_3521[1 /*34*/]))
					{
						iLocal_6558 = 0;
						iVar1 = 0;
						while (iVar1 < Local_1820)
						{
							if (!PED::IS_PED_INJURED(Local_1820[iVar1 /*34*/]))
							{
								if (Local_3521[0 /*34*/] != Local_1820[iVar1 /*34*/] && Local_3521[2 /*34*/] != Local_1820[iVar1 /*34*/])
								{
									Local_3521[1 /*34*/] = { Local_1820[iVar1 /*34*/] };
									func_604(&(Local_3521[1 /*34*/]), 1);
									Local_3521[1 /*34*/].f_9 = MISC::GET_GAME_TIMER();
								}
							}
							iVar1++;
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_3521[2 /*34*/]))
					{
						iLocal_6558 = 0;
						iVar1 = 0;
						while (iVar1 < Local_1820)
						{
							if (!PED::IS_PED_INJURED(Local_1820[iVar1 /*34*/]))
							{
								if (Local_3521[0 /*34*/] != Local_1820[iVar1 /*34*/] && Local_3521[1 /*34*/] != Local_1820[iVar1 /*34*/])
								{
									Local_3521[2 /*34*/] = { Local_1820[iVar1 /*34*/] };
									func_604(&(Local_3521[2 /*34*/]), 1);
									Local_3521[2 /*34*/].f_9 = MISC::GET_GAME_TIMER();
								}
							}
							iVar1++;
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_3521[3 /*34*/]))
					{
						iLocal_6558 = 0;
						iVar1 = 0;
						while (iVar1 < Local_1820)
						{
							if (!PED::IS_PED_INJURED(Local_1820[iVar1 /*34*/]))
							{
								if ((Local_3521[0 /*34*/] != Local_1820[iVar1 /*34*/] && Local_3521[1 /*34*/] != Local_1820[iVar1 /*34*/]) && Local_3521[2 /*34*/] != Local_1820[iVar1 /*34*/])
								{
									Local_3521[3 /*34*/] = { Local_1820[iVar1 /*34*/] };
									func_604(&(Local_3521[3 /*34*/]), 1);
									Local_3521[3 /*34*/].f_9 = MISC::GET_GAME_TIMER();
								}
							}
							iVar1++;
						}
					}
					MISC::SET_TIME_SCALE(1f);
					func_601();
					iLocal_704 = 0;
					iLocal_6324 = 0;
					iLocal_6315 = 0;
					iLocal_6308 = 0;
					return 1;
				}
			}
		}
		else if (func_648(4))
		{
			iLocal_713 = 1;
			func_642();
		}
	}
	return 0;
}

void func_614()//Position - 0x71EAF
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_3698)
	{
		if (!PED::IS_PED_INJURED(Local_3698[iVar0 /*34*/]))
		{
			if (Local_3698[iVar0 /*34*/].f_1)
			{
				if (!Local_3698[iVar0 /*34*/].f_2)
				{
					Local_3698[iVar0 /*34*/].f_20 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_3698[iVar0 /*34*/], 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_3698[iVar0 /*34*/], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
					}
					Local_3698[iVar0 /*34*/].f_9 = MISC::GET_GAME_TIMER();
					Local_3698[iVar0 /*34*/].f_2 = 1;
				}
				else if (func_650(Local_3698[iVar0 /*34*/], 1, 0))
				{
					Local_3698[iVar0 /*34*/].f_2 = 0;
				}
				else if (func_653(Local_3698[iVar0 /*34*/].f_9, 2000))
				{
					if (GlobalFunc_156(Local_3698[iVar0 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_3698[iVar0 /*34*/], 0), Local_3698[iVar0 /*34*/].f_20, 1))
					{
						Local_3698[iVar0 /*34*/].f_2 = 0;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_615()//Position - 0x71FCA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_1820)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1820[iVar0 /*34*/]))
		{
			if (!PED::IS_PED_INJURED(Local_1820[iVar0 /*34*/]))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_1820[iVar0 /*34*/].f_33))
				{
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_1820[iVar0 /*34*/].f_33))
			{
				HUD::REMOVE_BLIP(&(Local_1820[iVar0 /*34*/].f_33));
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_3698)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3698[iVar1 /*34*/]))
		{
			if (!PED::IS_PED_INJURED(Local_3698[iVar1 /*34*/]))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_3698[iVar1 /*34*/].f_33))
				{
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_3698[iVar1 /*34*/].f_33))
			{
				HUD::REMOVE_BLIP(&(Local_3698[iVar1 /*34*/].f_33));
			}
		}
		iVar1++;
	}
}

void func_616(int iParam0)//Position - 0x72096
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (iVar0 != 23)
		{
			if ((iParam0[iVar0 /*34*/])->f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0 /*34*/]))
				{
					if (!(iParam0[iVar0 /*34*/])->f_2 && !(iParam0[iVar0 /*34*/])->f_3)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0 /*34*/], 1);
						ENTITY::SET_ENTITY_VISIBLE((*iParam0)[iVar0 /*34*/], 1);
						PED::SET_PED_CAN_BE_TARGETTED((*iParam0)[iVar0 /*34*/], 1);
						if ((((((iParam0[iVar0 /*34*/])->f_18 == 0 || (iParam0[iVar0 /*34*/])->f_18 == 4) || (iParam0[iVar0 /*34*/])->f_18 == 6) || (iParam0[iVar0 /*34*/])->f_18 == 5) && ENTITY::IS_ENTITY_AT_COORD((*iParam0)[iVar0 /*34*/], (iParam0[iVar0 /*34*/])->f_20, 1f, 1f, 1.5f, 0, 1, 0)) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE((*iParam0)[iVar0 /*34*/]))
						{
							(iParam0[iVar0 /*34*/])->f_2 = 1;
						}
						else
						{
							switch ((iParam0[iVar0 /*34*/])->f_18)
							{
								case 0:
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], 242628503) != 1)
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										if (PED::IS_PED_IN_ANY_VEHICLE((*iParam0)[iVar0 /*34*/], 0))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
										}
										if (PED::IS_PED_DUCKING((*iParam0)[iVar0 /*34*/]))
										{
											TASK::TASK_TOGGLE_DUCK(0, 0);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (iParam0[iVar0 /*34*/])->f_20, 2f, -1, 0.5f, 0, 1193033728);
										TASK::TASK_PAUSE(0, (iParam0[iVar0 /*34*/])->f_8);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
									}
									break;
								
								case 8:
									PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iVar0 /*34*/], 2);
									PED::SET_PED_COMBAT_ATTRIBUTES((*iParam0)[iVar0 /*34*/], 50, 1);
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], 242628503) != 1)
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										TASK::TASK_PAUSE(0, (iParam0[iVar0 /*34*/])->f_8);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (iParam0[iVar0 /*34*/])->f_20, 2f, -1, 0.5f, 0, 1193033728);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
									}
									break;
								
								case 1:
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], 242628503) != 1)
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										TASK::TASK_PAUSE(0, (iParam0[iVar0 /*34*/])->f_8);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (iParam0[iVar0 /*34*/])->f_20, 2f, -1, 0.5f, 0, 1193033728);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
									}
									break;
								
								case 4:
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], 242628503) != 1)
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										if (PED::IS_PED_IN_ANY_VEHICLE((*iParam0)[iVar0 /*34*/], 0))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
										}
										if (PED::IS_PED_DUCKING((*iParam0)[iVar0 /*34*/]))
										{
											TASK::TASK_TOGGLE_DUCK(0, 0);
										}
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, (iParam0[iVar0 /*34*/])->f_20, PLAYER::PLAYER_PED_ID(), 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492, -1);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
									}
									break;
								
								case 6:
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], 242628503) != 1)
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, (iParam0[iVar0 /*34*/])->f_20, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, -1);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
									}
									break;
								
								case 5:
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], 242628503) != 1)
									{
										if (func_618((iParam0[iVar0 /*34*/])->f_20))
										{
											TASK::OPEN_SEQUENCE_TASK(&uVar1);
											TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, (iParam0[iVar0 /*34*/])->f_20, (iParam0[iVar0 /*34*/])->f_23, 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492);
											TASK::CLOSE_SEQUENCE_TASK(uVar1);
										}
										else
										{
											TASK::OPEN_SEQUENCE_TASK(&uVar1);
											TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
											TASK::CLOSE_SEQUENCE_TASK(uVar1);
										}
									}
									break;
								
								case 7:
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], 242628503) != 1)
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, (iParam0[iVar0 /*34*/])->f_19, (iParam0[iVar0 /*34*/])->f_23, 50, 0);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
									}
									break;
								
								case 9:
									break;
							}
							if ((iVar0 != 23 || iVar0 != 38) || iVar0 != 39)
							{
								if ((iParam0[iVar0 /*34*/])->f_2 == 0)
								{
									if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*34*/]))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], 242628503) != 1)
										{
											TASK::TASK_PERFORM_SEQUENCE((*iParam0)[iVar0 /*34*/], uVar1);
										}
									}
									TASK::CLEAR_SEQUENCE_TASK(&uVar1);
									(iParam0[iVar0 /*34*/])->f_2 = 1;
								}
							}
						}
					}
					else if (!(iParam0[iVar0 /*34*/])->f_4 || (iParam0[iVar0 /*34*/])->f_3)
					{
						if (!(iParam0[iVar0 /*34*/])->f_5 || (iParam0[iVar0 /*34*/])->f_7 == 0)
						{
							if ((func_650((*iParam0)[iVar0 /*34*/], 1, 0) || ((iParam0[iVar0 /*34*/])->f_18 == 7 && ENTITY::IS_ENTITY_AT_COORD((*iParam0)[iVar0 /*34*/], (iParam0[iVar0 /*34*/])->f_20, 0.5f, 0.5f, 2f, 0, 1, 0))) || (iParam0[iVar0 /*34*/])->f_3)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0 /*34*/], 0);
								PED::SET_PED_TARGET_LOSS_RESPONSE((*iParam0)[iVar0 /*34*/], 1);
								if (iVar0 != 23)
								{
									if (iVar0 != 4)
									{
										func_617(iParam0[iVar0 /*34*/], (iParam0[iVar0 /*34*/])->f_26);
									}
									TASK::OPEN_SEQUENCE_TASK(&uVar1);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									TASK::CLOSE_SEQUENCE_TASK(uVar1);
									if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*34*/]))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], 242628503) != 1)
										{
											TASK::TASK_PERFORM_SEQUENCE((*iParam0)[iVar0 /*34*/], uVar1);
										}
									}
									TASK::CLEAR_SEQUENCE_TASK(&uVar1);
									(iParam0[iVar0 /*34*/])->f_4 = 1;
									(iParam0[iVar0 /*34*/])->f_3 = 0;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_617(var uParam0, int iParam1)//Position - 0x725DA
{
	switch (iParam1)
	{
		case 1:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam0->f_20, 2f, 0, 0);
			break;
		
		case 2:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam0->f_20, 5f, 0, 0);
			break;
		
		case 3:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam0->f_20, 15f, 0, 0);
			break;
		
		case 0:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam0->f_20, 1.5f, 1, 0);
			break;
	}
}

int func_618(struct<3> Param0)//Position - 0x72655
{
	if (Param0.x < 1f && Param0.x > -1f)
	{
		return 1;
	}
	if (Param0.f_1 < 1f && Param0.f_1 > -1f)
	{
		return 1;
	}
	if (Param0.f_2 < 1f && Param0.f_2 > -1f)
	{
		return 1;
	}
	return 0;
}

int func_619()//Position - 0x726A2
{
	if (!iLocal_7279)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 57.34861f, 3687.819f, 37.31507f, 62.9187f, 3683.527f, 42.5903f, 4.5f, 0, 1, 0))
		{
			iLocal_7279 = 1;
		}
	}
	return iLocal_7279;
}

void func_620()//Position - 0x726E9
{
	var uVar0;
	
	switch (iLocal_7345)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 94.53677f, 3723.669f, 38.37366f, 114.6799f, 3747.91f, 41.59075f, 7.75f, 0, 1, 0))
			{
				if (!PED::IS_PED_INJURED(Local_1820[28 /*34*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5834[2 /*12*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_5834[2 /*12*/], 12, "trevor1dw", 1);
						VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[2 /*12*/]);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_TOGGLE_DUCK(0, 0);
						TASK::TASK_ENTER_VEHICLE(0, Local_5834[2 /*12*/], 20000, -1, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_1820[28 /*34*/], uVar0);
						iLocal_7345++;
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_1820[28 /*34*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5834[2 /*12*/]))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1820[28 /*34*/], Local_5834[2 /*12*/]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[2 /*12*/]))
						{
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[2 /*12*/]);
							iLocal_6382[2] = 1;
							iLocal_7345++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!Local_1820[28 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1820[28 /*34*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5834[2 /*12*/]))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[2 /*12*/]))
						{
							func_624(28, 2, 1, 1);
							Local_1820[28 /*34*/].f_1 = 1;
						}
						else if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_1820[28 /*34*/], Local_5834[2 /*12*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[2 /*12*/]);
							func_624(28, 2, 1, 1);
							Local_1820[28 /*34*/].f_1 = 1;
						}
					}
					else
					{
						func_624(28, 2, 1, 1);
						Local_1820[28 /*34*/].f_1 = 1;
					}
				}
			}
			break;
	}
}

int func_621()//Position - 0x728A8
{
	if (!iLocal_7280)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 18.02788f, 3694.494f, 38.19763f, 48.18136f, 3696.424f, 42.92246f, 5.5f, 0, 1, 0))
		{
			iLocal_7280 = 1;
		}
	}
	return iLocal_7280;
}

int func_622()//Position - 0x728EF
{
	if (!iLocal_7277)
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 37.15265f, 3706.875f, 37.90971f, 4.259892f, 3739.114f, 42.77991f, 4.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 53.15781f, 3696.173f, 36.25422f, 49.15935f, 3698.804f, 42.21606f, 4.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 35.96158f, 3703.884f, 43.00388f, -31.53632f, 3739.534f, 34.28732f, 4.5f, 0, 1, 0))
		{
			iLocal_7277 = 1;
		}
	}
	return iLocal_7277;
}

int func_623(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7299E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		if ((uParam0[iVar0 /*34*/])->f_1 || !bParam4)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*34*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0 /*34*/]) || PED::IS_PED_FATALLY_INJURED((*uParam0)[iVar0 /*34*/]))
				{
					iVar1++;
				}
				else if (bParam3)
				{
					if (PED::IS_PED_INJURED((*uParam0)[iVar0 /*34*/]))
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_624(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x72A26
{
	if (!Local_1820[iParam0 /*34*/].f_1)
	{
		if (!PED::IS_PED_INJURED(Local_1820[iParam0 /*34*/]))
		{
			Local_1820[iParam0 /*34*/].f_20 = { ENTITY::GET_ENTITY_COORDS(Local_1820[iParam0 /*34*/], 0) };
			Local_1820[iParam0 /*34*/].f_26 = iParam1;
			Local_1820[iParam0 /*34*/].f_27 = iParam2;
			Local_1820[iParam0 /*34*/].f_1 = iParam3;
			Local_1820[iParam0 /*34*/].f_18 = 0;
		}
	}
}

bool func_625()//Position - 0x72A8C
{
	return ((func_619() || func_622()) || func_626());
}

int func_626()//Position - 0x72AAC
{
	if (!iLocal_7276)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 70.83387f, 3733.275f, 38.04837f, 64.49149f, 3769.235f, 41.59755f, 4.5f, 0, 1, 0))
		{
			iLocal_7276 = 1;
		}
	}
	return iLocal_7276;
}

int func_627()//Position - 0x72AF3
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 54.44471f, 3703.153f, 38.25422f, 36.61494f, 3672.933f, 41.04847f, 7.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 32.20564f, 3684.38f, 38.20072f, 43.32622f, 3675.423f, 41.2275f, 7.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 27.50165f, 3679.27f, 38.13203f, 42.3119f, 3671f, 41.20667f, 7.5f, 0, 1, 0))
	{
		if (func_628(66.5306f, 3729.271f, 41.0291f, 1f, 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 66.5306f, 3729.271f, 41.0291f, 1) < 10f)
		{
			return 1;
		}
	}
	return 0;
}

int func_628(struct<3> Param0, float fParam3, float fParam4)//Position - 0x72BDE
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_40)
		{
			if (!bLocal_27)
			{
				if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var3 = { Var0 - Param0 };
						if ((SYSTEM::VMAG(Var3) - fParam3) < fParam4)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_629()//Position - 0x72C42
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	if (!iLocal_6414)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 70.16672f, 3673.62f, 38.336f, 94.23613f, 3675.33f, 41.01178f, 5f, 0, 1, 0) || (fVar0 > 4f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 70.16672f, 3673.62f, 38.336f, 94.23613f, 3675.33f, 41.01178f, 15f, 0, 1, 0)))
		{
			iLocal_6414 = 1;
		}
	}
	return iLocal_6414;
}

void func_630()//Position - 0x72CCC
{
	var uVar0;
	
	switch (iLocal_6278)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1820[43 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 14.7984f, 3725.87f, 42.4778f, 1) < 60f)
				{
					if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("g_m_y_lost_01"), 11.88f, 3728.81f, 43.45f, 1))
					{
						Local_1820[43 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 11.88f, 3728.81f, 43.45f, -152.39f, joaat("weapon_assaultrifle"), 0, 1, 1);
					}
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_1820[43 /*34*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[43 /*34*/], 37, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_1820[43 /*34*/], 1024, 0);
				}
				iLocal_6278++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_1820[43 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 14.7984f, 3725.87f, 42.4778f, 1) < 100f || !ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("g_m_y_lost_01"), 12.3359f, 3728.388f, 42.4859f, 1))
				{
					PED::SET_PED_ACCURACY(Local_1820[43 /*34*/], 0);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_1820[43 /*34*/], 20f, 80f);
					PED::SET_PED_SEEING_RANGE(Local_1820[43 /*34*/], 200f);
					ENTITY::SET_ENTITY_HEALTH(Local_1820[43 /*34*/], 110);
					PED::SET_PED_COMBAT_RANGE(Local_1820[43 /*34*/], 2);
					PED::SET_PED_COMBAT_MOVEMENT(Local_1820[43 /*34*/], 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[43 /*34*/], 14.45f, 3726.33f, 43.45f, 0.75f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_1820[43 /*34*/], uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_6278++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(Local_1820[43 /*34*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1820[43 /*34*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_1820[43 /*34*/], 0);
					iLocal_6278++;
				}
			}
			if (!PED::IS_PED_INJURED(Local_1820[43 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 14.7984f, 3725.87f, 42.4778f, 1) < 40f)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[43 /*34*/], 30, 1);
					PED::SET_PED_ACCURACY(Local_1820[43 /*34*/], 1);
					iLocal_6278++;
				}
			}
			break;
	}
}

int func_631(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x72F3A
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::CREATE_PED(26, iParam0, Param2, fParam5, 1, 1);
	func_124(iVar0, 494);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam6, -1, iParam9, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam1);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, 1);
	PED::_0xF2BEBCDFAFDAA19E(0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 132, 1);
	PED::SET_PED_KEEP_TASK(iVar0, 1);
	if (GlobalFunc_745())
	{
		if (GlobalFunc_745())
		{
			PED::SET_PED_DIES_WHEN_INJURED(iVar0, 0);
		}
	}
	if (bParam7)
	{
		iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(Param2);
		if (iVar1 != 0)
		{
			INTERIOR::_0x82EBB79E258FA2B7(iVar0, iVar1);
		}
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 135);
	GlobalFunc_593(iVar0, 1);
	PED::SET_PED_AS_ENEMY(iVar0, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, iParam8);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iVar0, 0);
	PED::SET_PED_USING_ACTION_MODE(iVar0, 1, -1, "DEFAULT_ACTION");
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 49, 1);
	return iVar0;
}



void func_634()//Position - 0x730C6
{
	switch (iLocal_7341)
	{
		case 0:
			if (!PED::IS_PED_INJURED(Local_1820[31 /*34*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_1820[31 /*34*/], 200);
				PED::SET_PED_ACCURACY(Local_1820[31 /*34*/], 5);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[31 /*34*/], 78.199f, 3706.467f, 40.0819f, 20f, 0, 0);
			}
			iLocal_7341++;
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_1820[31 /*34*/]))
			{
				if (GlobalFunc_156(Local_1820[31 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < 100f)
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1820[31 /*34*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[31 /*34*/]))
						{
							GlobalFunc_5130(Local_1820[31 /*34*/], "GENERIC_WAR_CRY", 18);
							iLocal_7341++;
						}
					}
					else
					{
						GlobalFunc_5130(Local_1820[31 /*34*/], "GENERIC_FUCK_YOU", 18);
						iLocal_7341++;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_156(Local_1820[31 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < 45f)
			{
				if (!PED::IS_PED_INJURED(Local_1820[31 /*34*/]))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[31 /*34*/]))
					{
						PED::SET_PED_COMBAT_RANGE(Local_1820[31 /*34*/], 0);
						GlobalFunc_5130(Local_1820[31 /*34*/], "GENERIC_WAR_CRY", 18);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[31 /*34*/], 49, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[31 /*34*/], 51, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[31 /*34*/], 13, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[31 /*34*/], 50, 1);
						PED::SET_PED_COMBAT_MOVEMENT(Local_1820[31 /*34*/], 2);
						PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_1820[31 /*34*/], PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 15f, 0, 0);
						TASK::TASK_COMBAT_PED(Local_1820[31 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						iLocal_7341++;
					}
				}
			}
			break;
	}
}

void func_635()//Position - 0x73299
{
	var uVar0;
	
	switch (iLocal_7339)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1820[42 /*34*/]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 73.32565f, 3728.408f, 37.96853f, 49.22218f, 3694.147f, 43.25521f, 38.75f, 0, 1, 0) && !CAM::IS_SPHERE_VISIBLE(84.6956f, 3722.677f, 38.7396f, 1f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_1820[42 /*34*/]))
					{
						Local_1820[42 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 84.6956f, 3722.677f, 38.7396f, 127.651f, joaat("weapon_sawnoffshotgun"), 0, 1, 1);
						iLocal_7339++;
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_1820[42 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_1820[42 /*34*/], 0), 1) < 60f || ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[42 /*34*/]))
				{
					PED::SET_PED_ACCURACY(Local_1820[42 /*34*/], 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[42 /*34*/], 81.9903f, 3721.394f, 38.7452f, 1f, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_1820[42 /*34*/], uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[42 /*34*/], 0);
					iLocal_7340 = MISC::GET_GAME_TIMER();
					iLocal_7339++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(Local_1820[42 /*34*/]))
			{
				if (GlobalFunc_588(&iLocal_7340, 12000))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[42 /*34*/]))
					{
						PED::SET_PED_ACCURACY(Local_1820[42 /*34*/], 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[42 /*34*/], 57.0861f, 3724.424f, 38.7258f, 20f, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_1820[42 /*34*/], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[42 /*34*/], 50, 1);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_1820[42 /*34*/], uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[42 /*34*/], 0);
						iLocal_7339++;
					}
				}
			}
			break;
	}
}

void func_636()//Position - 0x734C6
{
	var uVar0;
	
	switch (iLocal_7343)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1820[44 /*34*/]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 75.33037f, 3727.14f, 38.2265f, 53.21163f, 3696.098f, 50.75488f, 34f, 0, 1, 0) && !CAM::IS_SPHERE_VISIBLE(84.4422f, 3723.24f, 38.7385f, 1f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_1820[44 /*34*/]))
					{
						Local_1820[44 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 84.4422f, 3723.24f, 38.7385f, 165.5727f, joaat("weapon_pistol"), 0, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[44 /*34*/], 0);
						PED::SET_PED_ACCURACY(Local_1820[44 /*34*/], 10);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[44 /*34*/], 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[44 /*34*/], 69.9965f, 3717.589f, 38.7549f, 15f, 1, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_1820[44 /*34*/], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[44 /*34*/], 50, 1);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_1820[44 /*34*/], uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						iLocal_7343++;
					}
				}
			}
			break;
		
		case 1:
			break;
	}
}

void func_637()//Position - 0x73613
{
	var uVar0;
	
	switch (iLocal_7344)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1820[23 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 63.8115f, 3682.983f, 38.8342f, 1) < 80f && !CAM::IS_SPHERE_VISIBLE(63.8115f, 3682.983f, 38.8342f, 1f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_1820[23 /*34*/]))
					{
						Local_1820[23 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 63.8115f, 3682.983f, 38.8342f, 165.5727f, joaat("weapon_microsmg"), 0, 1, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[23 /*34*/], 59.8701f, 3697.167f, 38.7549f, 2f, 1, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[23 /*34*/], 0);
						iLocal_7344++;
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_1820[23 /*34*/]))
			{
				if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_1820[23 /*34*/], 0), 1) < 35f && ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[23 /*34*/])) || (PED::IS_PED_INJURED(Local_1820[27 /*34*/]) && Local_1820[27 /*34*/].f_1 == 1))
				{
					PED::SET_PED_ACCURACY(Local_1820[23 /*34*/], 1);
					PED::SET_PED_COMBAT_MOVEMENT(Local_1820[23 /*34*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[23 /*34*/], 50, 1);
					PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_1820[23 /*34*/], PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 15f, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_1820[23 /*34*/], uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[23 /*34*/], 0);
					iLocal_7344++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(Local_1820[23 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_1820[23 /*34*/], 0), 1) > 100f)
				{
					PED::SET_PED_ACCURACY(Local_1820[23 /*34*/], 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[23 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 10f, 1, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[23 /*34*/], 51, 1);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_1820[23 /*34*/], uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_7344++;
				}
			}
			break;
	}
}

void func_638()//Position - 0x73882
{
	var uVar0;
	
	switch (iLocal_7342)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1820[41 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 67.31f, 3713.33f, 39.75f, 1) < 80f && !CAM::IS_SPHERE_VISIBLE(67.31f, 3713.33f, 39.75f, 1f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_1820[41 /*34*/]))
					{
						Local_1820[41 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 67.31f, 3713.33f, 39.75f, 25.56f, joaat("weapon_sawnoffshotgun"), 0, 1, 1);
						iLocal_7342++;
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_1820[41 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(Local_1820[41 /*34*/], 0), 1) < 60f || ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[41 /*34*/]))
				{
					PED::SET_PED_ACCURACY(Local_1820[41 /*34*/], 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[41 /*34*/], 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[41 /*34*/], 67.31f, 3713.33f, 39.75f, 15f, 0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_1820[41 /*34*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[41 /*34*/], 50, 1);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_1820[41 /*34*/], uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_7342++;
				}
			}
			break;
	}
}

void func_639()//Position - 0x73A02
{
	var uVar0;
	
	switch (iLocal_7338)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 53.84319f, 3684.475f, 38.25425f, 32.56451f, 3676.024f, 40.03286f, 8.75f, 0, 1, 0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1820[10 /*34*/]))
				{
					Local_1820[10 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 17.7291f, 3702.891f, 38.7281f, 224.5845f, joaat("weapon_sawnoffshotgun"), 0, 1, 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[10 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 20f, 0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_1820[10 /*34*/], 2);
					iLocal_7338++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_1820[10 /*34*/]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_1820[10 /*34*/], uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[10 /*34*/], 0);
				iLocal_7338++;
			}
			break;
	}
}

void func_640()//Position - 0x73B10
{
	switch (iLocal_7337)
	{
		case 0:
			if (!iLocal_6322)
			{
				if (!Local_1820[13 /*34*/].f_1)
				{
					if (func_626())
					{
						func_654(15);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_5834[15 /*12*/], 16, "trevor1Dw", 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5834[15 /*12*/], 1, 0);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_5834[16 /*12*/], 17, "trevor1Dw", 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5834[16 /*12*/], 1, 0);
						AUDIO::START_AUDIO_SCENE("TREVOR_1_BIKES");
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[15 /*12*/], 0))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[15 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[16 /*12*/], 0))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[16 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
						}
						iLocal_707[4] = 1;
						iLocal_7337++;
					}
				}
			}
			break;
		
		case 1:
			if (!Local_1820[12 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5834[15 /*12*/]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[15 /*12*/]))
					{
						Local_1820[12 /*34*/].f_20 = { 46.171f, 3723.021f, 38.6841f };
						Local_1820[12 /*34*/].f_18 = 4;
						Local_1820[12 /*34*/].f_26 = 0;
						Local_1820[12 /*34*/].f_27 = 1;
						Local_1820[12 /*34*/].f_1 = 1;
					}
				}
			}
			if (!Local_1820[13 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5834[16 /*12*/]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[16 /*12*/]))
					{
						Local_1820[13 /*34*/].f_20 = { 49.2689f, 3736.771f, 38.5828f };
						Local_1820[13 /*34*/].f_18 = 4;
						Local_1820[13 /*34*/].f_26 = 0;
						Local_1820[13 /*34*/].f_27 = 1;
						Local_1820[13 /*34*/].f_1 = 1;
					}
				}
			}
			break;
	}
	if (iLocal_7337 > 0)
	{
		func_641(12, 15);
		func_641(13, 16);
	}
}

void func_641(int iParam0, int iParam1)//Position - 0x73CDB
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_5834[iParam1 /*12*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[iParam1 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_1820[iParam0 /*34*/]))
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 4f, 3);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[iParam1 /*12*/]);
			}
			else if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_1820[iParam0 /*34*/], Local_5834[iParam1 /*12*/]))
			{
				RECORDING::_0x293220DA1B46CEBC(4f, 4f, 3);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[iParam1 /*12*/]);
			}
		}
	}
}

void func_642()//Position - 0x73D4B
{
	switch (iLocal_7336)
	{
		case 0:
			if (!iLocal_713)
			{
				if (!iLocal_6322)
				{
					if (func_622())
					{
						func_654(14);
						if (ENTITY::DOES_ENTITY_EXIST(Local_5834[20 /*12*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5834[20 /*12*/], 1, 0);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[20 /*12*/]);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_5834[21 /*12*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5834[21 /*12*/], 1, 0);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[21 /*12*/]);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_5834[22 /*12*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5834[22 /*12*/], 1, 0);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[22 /*12*/]);
						}
						AUDIO::START_AUDIO_SCENE("TREVOR_1_BIKES");
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[20 /*12*/], 0))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[20 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[21 /*12*/], 0))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[21 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[22 /*12*/], 0))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[22 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
						}
						iLocal_7335 = MISC::GET_GAME_TIMER();
						iLocal_707[3] = 1;
						iLocal_7336++;
					}
				}
			}
			else
			{
				func_654(14);
				if (ENTITY::DOES_ENTITY_EXIST(Local_5834[20 /*12*/]))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5834[20 /*12*/], 1, 0);
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[20 /*12*/]);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_5834[21 /*12*/]))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5834[21 /*12*/], 1, 0);
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[21 /*12*/]);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_5834[22 /*12*/]))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5834[22 /*12*/], 1, 0);
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[22 /*12*/]);
				}
				AUDIO::START_AUDIO_SCENE("TREVOR_1_BIKES");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[20 /*12*/], 0))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[20 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[21 /*12*/], 0))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[21 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[22 /*12*/], 0))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[22 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
				}
				iLocal_7335 = MISC::GET_GAME_TIMER();
				iLocal_7336++;
			}
			break;
		
		case 1:
			if (GlobalFunc_588(&iLocal_7335, 6000))
			{
				iLocal_707[3] = 1;
			}
			if (!Local_1820[32 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5834[20 /*12*/]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[20 /*12*/]))
					{
						Local_1820[32 /*34*/].f_20 = { 42.1645f, 3721.843f, 38.5633f };
						Local_1820[32 /*34*/].f_18 = 4;
						Local_1820[32 /*34*/].f_26 = 2;
						Local_1820[32 /*34*/].f_27 = 1;
						Local_1820[32 /*34*/].f_1 = 1;
					}
				}
			}
			else if (Local_1820[32 /*34*/].f_30 == 0)
			{
				if (!PED::IS_PED_INJURED(Local_1820[32 /*34*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[20 /*12*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[20 /*12*/]))
						{
							if (GlobalFunc_588(&iLocal_7335, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[32 /*34*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[32 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 20f, 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[32 /*34*/], 50, 1);
								PED::SET_PED_COMBAT_RANGE(Local_1820[32 /*34*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[32 /*34*/], 51, 1);
								Local_1820[32 /*34*/].f_30 = 1;
							}
						}
					}
				}
			}
			if (!Local_1820[33 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5834[21 /*12*/]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[21 /*12*/]))
					{
						Local_1820[33 /*34*/].f_20 = { 49.8538f, 3723.226f, 38.6739f };
						Local_1820[33 /*34*/].f_18 = 4;
						Local_1820[33 /*34*/].f_26 = 2;
						Local_1820[33 /*34*/].f_27 = 1;
						Local_1820[33 /*34*/].f_1 = 1;
					}
				}
			}
			else if (Local_1820[33 /*34*/].f_30 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[21 /*12*/], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[21 /*12*/]))
					{
						if (!PED::IS_PED_INJURED(Local_1820[33 /*34*/]))
						{
							if (GlobalFunc_588(&iLocal_7335, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[33 /*34*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[33 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 20f, 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[33 /*34*/], 50, 1);
								PED::SET_PED_COMBAT_RANGE(Local_1820[33 /*34*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[33 /*34*/], 51, 1);
								Local_1820[33 /*34*/].f_30 = 1;
							}
						}
					}
				}
			}
			if (!Local_1820[34 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5834[22 /*12*/]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[22 /*12*/]))
					{
						Local_1820[34 /*34*/].f_20 = { 42.9824f, 3736.397f, 38.5268f };
						Local_1820[34 /*34*/].f_18 = 4;
						Local_1820[34 /*34*/].f_26 = 2;
						Local_1820[34 /*34*/].f_27 = 1;
						Local_1820[34 /*34*/].f_1 = 1;
					}
				}
			}
			else
			{
				func_643(&(Local_1820[34 /*34*/]), &(Local_1820[32 /*34*/]), 1);
				if (Local_1820[34 /*34*/].f_30 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[22 /*12*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[22 /*12*/]))
						{
							if (!PED::IS_PED_INJURED(Local_1820[34 /*34*/]))
							{
								if (GlobalFunc_588(&iLocal_7335, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[34 /*34*/], 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[34 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 20f, 1, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[34 /*34*/], 50, 1);
									PED::SET_PED_COMBAT_RANGE(Local_1820[34 /*34*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[34 /*34*/], 51, 1);
									Local_1820[34 /*34*/].f_30 = 1;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_643(var uParam0, var uParam1, bool bParam2)//Position - 0x742DC
{
	struct<34> Var0[2];
	
	if (!uParam0->f_6)
	{
		if (!GlobalFunc_100(uParam1->f_20, uParam0->f_20))
		{
			Var0[0 /*34*/] = { *uParam1 };
			if (func_623(&Var0, 1, 1, 1, 1))
			{
				func_604(uParam0, 1);
				if (bParam2)
				{
					uParam0->f_18 = 6;
				}
				else
				{
					uParam0->f_18 = 4;
				}
				uParam0->f_26 = uParam1->f_26;
				uParam0->f_20 = { uParam1->f_20 };
				uParam0->f_6 = 1;
				uParam0->f_1 = 1;
				uParam0->f_27 = 1;
			}
		}
	}
}

void func_644()//Position - 0x7435B
{
	struct<34> Var0[3];
	
	switch (iLocal_7334)
	{
		case 0:
			Var0[0 /*34*/] = { Local_1820[22 /*34*/] };
			Var0[1 /*34*/] = { Local_1820[21 /*34*/] };
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 81.83764f, 3707.142f, 37.45756f, 117.799f, 3685.55f, 41.42723f, 8.25f, 0, 1, 0) || func_623(&Var0, 2, 2, 1, 1))
			{
				if (!func_628(Local_5834[24 /*12*/].f_2, 0.1f, 1120403456))
				{
					func_654(13);
					iLocal_707[2] = 1;
					iLocal_7334++;
				}
			}
			break;
		
		case 1:
			if (!Local_1820[24 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5834[24 /*12*/]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[24 /*12*/]))
					{
						Local_1820[24 /*34*/].f_20 = { 96.8904f, 3713.253f, 38.5539f };
						Local_1820[24 /*34*/].f_18 = 4;
						Local_1820[24 /*34*/].f_27 = 2;
						Local_1820[24 /*34*/].f_26 = 3;
						Local_1820[24 /*34*/].f_1 = 1;
					}
				}
			}
			if (!Local_1820[25 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5834[25 /*12*/]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[25 /*12*/]))
					{
						Local_1820[25 /*34*/].f_20 = { 104.9613f, 3713.582f, 38.7133f };
						Local_1820[25 /*34*/].f_18 = 4;
						Local_1820[25 /*34*/].f_27 = 2;
						Local_1820[25 /*34*/].f_26 = 3;
						Local_1820[25 /*34*/].f_1 = 1;
					}
				}
			}
			break;
	}
}

void func_645()//Position - 0x744F1
{
	switch (iLocal_7333)
	{
		case 0:
			if (!Local_1820[32 /*34*/].f_1)
			{
				if (Local_1820[9 /*34*/].f_1)
				{
					if (!iLocal_6409[1])
					{
						if (func_651(0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 81.03938f, 3683.04f, 37.95245f, 100.1882f, 3642.278f, 43.71773f, 39.5f, 0, 1, 0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Local_5834[20 /*12*/].f_2, 2.5f))
								{
									func_654(12);
									if (ENTITY::DOES_ENTITY_EXIST(Local_5834[20 /*12*/]))
									{
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_5834[21 /*12*/]))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5834[21 /*12*/], 1, 0);
										VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[21 /*12*/]);
										VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_5834[21 /*12*/], 1);
										VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_5834[21 /*12*/], 50f);
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_5834[22 /*12*/]))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5834[22 /*12*/], 1, 0);
										VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[22 /*12*/]);
									}
									AUDIO::START_AUDIO_SCENE("TREVOR_1_BIKES");
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[21 /*12*/], 0))
									{
										AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[21 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[22 /*12*/], 0))
									{
										AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[22 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
									}
									iLocal_707[1] = 1;
									iLocal_7332 = MISC::GET_GAME_TIMER();
									iLocal_7333++;
								}
							}
						}
					}
					else
					{
						iLocal_7333 = 100;
					}
				}
			}
			break;
		
		case 1:
			if (!Local_1820[32 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5834[20 /*12*/]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[20 /*12*/]))
					{
						Local_1820[32 /*34*/].f_20 = { 80.4992f, 3674.014f, 38.7078f };
						Local_1820[32 /*34*/].f_26 = 2;
						Local_1820[32 /*34*/].f_27 = 2;
						Local_1820[32 /*34*/].f_18 = 4;
						Local_1820[32 /*34*/].f_1 = 1;
					}
				}
			}
			else if (Local_1820[32 /*34*/].f_30 == 0)
			{
				if (GlobalFunc_588(&iLocal_7332, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[32 /*34*/], 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[32 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 20f, 1, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[32 /*34*/], 50, 1);
					PED::SET_PED_COMBAT_RANGE(Local_1820[32 /*34*/], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[32 /*34*/], 51, 1);
					Local_1820[32 /*34*/].f_30 = 1;
				}
			}
			if (!Local_1820[33 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5834[21 /*12*/]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[21 /*12*/]))
					{
						Local_1820[33 /*34*/].f_20 = { 91.1677f, 3666.931f, 38.703f };
						Local_1820[33 /*34*/].f_26 = 0;
						Local_1820[33 /*34*/].f_27 = 1;
						Local_1820[33 /*34*/].f_18 = 4;
						Local_1820[33 /*34*/].f_1 = 1;
					}
				}
			}
			else if (Local_1820[33 /*34*/].f_30 == 0)
			{
				if (GlobalFunc_588(&iLocal_7332, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[33 /*34*/], 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[33 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 20f, 1, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[33 /*34*/], 50, 1);
					PED::SET_PED_COMBAT_RANGE(Local_1820[33 /*34*/], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[33 /*34*/], 51, 1);
					Local_1820[33 /*34*/].f_30 = 1;
				}
			}
			if (!Local_1820[34 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5834[22 /*12*/]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[22 /*12*/]))
					{
						Local_1820[34 /*34*/].f_20 = { 78.0473f, 3686.213f, 38.5502f };
						Local_1820[34 /*34*/].f_26 = 0;
						Local_1820[34 /*34*/].f_27 = 1;
						Local_1820[34 /*34*/].f_18 = 4;
						Local_1820[34 /*34*/].f_1 = 1;
					}
				}
			}
			else
			{
				func_643(&(Local_1820[34 /*34*/]), &(Local_1820[32 /*34*/]), 1);
				if (Local_1820[34 /*34*/].f_30 == 0)
				{
					if (GlobalFunc_588(&iLocal_7332, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[34 /*34*/], 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[34 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 20f, 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[34 /*34*/], 50, 1);
						PED::SET_PED_COMBAT_RANGE(Local_1820[34 /*34*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[34 /*34*/], 51, 1);
						Local_1820[34 /*34*/].f_30 = 1;
					}
				}
			}
			break;
	}
}

void func_646()//Position - 0x7493C
{
	struct<34> Var0[4];
	var uVar137;
	int iVar138;
	
	switch (iLocal_7331)
	{
		case 0:
			Var0[0 /*34*/] = { Local_1820[17 /*34*/] };
			Var0[1 /*34*/] = { Local_1820[18 /*34*/] };
			Var0[2 /*34*/] = { Local_1820[11 /*34*/] };
			if (!Local_1820[13 /*34*/].f_1)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -4.104918f, 3693.259f, 37.89281f, 29.59784f, 3712.84f, 41.89134f, 34.25f, 0, 1, 0) || func_623(&Var0, 3, 3, 1, 1)) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 23.30928f, 3706.248f, 38.45564f, 34.66791f, 3684.702f, 43.45407f, 25.5f, 0, 1, 0) && func_623(&Var0, 2, 2, 1, 1)))
				{
					func_654(11);
					iVar138 = VEHICLE::GET_CLOSEST_VEHICLE(52.4589f, 3664.125f, 38.6962f, 5f, joaat("gburrito"), 2);
					if (ENTITY::DOES_ENTITY_EXIST(iVar138))
					{
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_5834[15 /*12*/]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[15 /*12*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5834[15 /*12*/], 1, 1);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[15 /*12*/]);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_5834[16 /*12*/]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[16 /*12*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5834[16 /*12*/], 1, 1);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[16 /*12*/]);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_5834[17 /*12*/]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[17 /*12*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5834[17 /*12*/], 1, 1);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[17 /*12*/]);
						}
					}
					AUDIO::START_AUDIO_SCENE("TREVOR_1_BIKES");
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[17 /*12*/], 0))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[17 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[16 /*12*/], 0))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[16 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[15 /*12*/], 0))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[15 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
					}
					iLocal_707[0] = 1;
					iLocal_7331++;
				}
			}
			break;
		
		case 1:
			if (!Local_1820[14 /*34*/].f_1)
			{
				if (!PED::IS_PED_INJURED(Local_1820[14 /*34*/]))
				{
					if (!Local_1820[14 /*34*/].f_2)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_5834[17 /*12*/]))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[17 /*12*/]))
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar137);
								TASK::TASK_LEAVE_VEHICLE(0, Local_5834[17 /*12*/], 256);
								TASK::CLOSE_SEQUENCE_TASK(uVar137);
								TASK::TASK_PERFORM_SEQUENCE(Local_1820[14 /*34*/], uVar137);
								TASK::CLEAR_SEQUENCE_TASK(&uVar137);
								Local_1820[14 /*34*/].f_2 = 1;
							}
						}
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1820[14 /*34*/], 0))
					{
						Local_1820[14 /*34*/].f_2 = 0;
						Local_1820[14 /*34*/].f_27 = 1;
						Local_1820[14 /*34*/].f_18 = 4;
						Local_1820[14 /*34*/].f_26 = 2;
						Local_1820[14 /*34*/].f_20 = { 27.011f, 3701.751f, 38.6947f };
						Local_1820[14 /*34*/].f_1 = 1;
					}
				}
			}
			if (!Local_1820[12 /*34*/].f_1)
			{
				if (!PED::IS_PED_INJURED(Local_1820[12 /*34*/]))
				{
					if (!Local_1820[12 /*34*/].f_2)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_5834[15 /*12*/]))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[15 /*12*/]))
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar137);
								TASK::TASK_LEAVE_VEHICLE(0, Local_5834[15 /*12*/], 256);
								TASK::CLOSE_SEQUENCE_TASK(uVar137);
								TASK::TASK_PERFORM_SEQUENCE(Local_1820[12 /*34*/], uVar137);
								TASK::CLEAR_SEQUENCE_TASK(&uVar137);
								Local_1820[12 /*34*/].f_2 = 1;
							}
						}
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1820[12 /*34*/], 0))
					{
						Local_1820[12 /*34*/].f_2 = 0;
						Local_1820[12 /*34*/].f_27 = 1;
						Local_1820[12 /*34*/].f_18 = 4;
						Local_1820[12 /*34*/].f_26 = 2;
						Local_1820[12 /*34*/].f_20 = { 27.011f, 3701.751f, 38.6947f };
						Local_1820[12 /*34*/].f_1 = 1;
					}
				}
			}
			if (!Local_1820[13 /*34*/].f_1)
			{
				if (!PED::IS_PED_INJURED(Local_1820[13 /*34*/]))
				{
					if (!Local_1820[13 /*34*/].f_2)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_5834[16 /*12*/]))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[16 /*12*/]))
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar137);
								TASK::TASK_PAUSE(0, 300);
								TASK::TASK_LEAVE_VEHICLE(0, Local_5834[16 /*12*/], 256);
								TASK::CLOSE_SEQUENCE_TASK(uVar137);
								TASK::TASK_PERFORM_SEQUENCE(Local_1820[13 /*34*/], uVar137);
								TASK::CLEAR_SEQUENCE_TASK(&uVar137);
								Local_1820[13 /*34*/].f_2 = 1;
							}
						}
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1820[13 /*34*/], 0))
					{
						Local_1820[13 /*34*/].f_2 = 0;
						Local_1820[13 /*34*/].f_27 = 1;
						Local_1820[13 /*34*/].f_18 = 4;
						Local_1820[13 /*34*/].f_26 = 0;
						Local_1820[13 /*34*/].f_20 = { 34.171f, 3704.29f, 38.5311f };
						Local_1820[13 /*34*/].f_1 = 1;
					}
				}
			}
			break;
	}
}

void func_647(bool bParam0)//Position - 0x74E0C
{
	var uVar0;
	struct<34> Var1[2];
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[4 /*12*/], 0))
	{
		if (!PED::IS_PED_INJURED(Local_1820[7 /*34*/]))
		{
			switch (iLocal_6549)
			{
				case 0:
					Var1[0 /*34*/] = { Local_1820[6 /*34*/] };
					Var1[1 /*34*/] = { Local_1820[40 /*34*/] };
					if ((((((((func_623(&Var1, 1, 1, 1, 1) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[7 /*34*/], 1) < 23f) || (func_623(&Var1, 2, 2, 1, 1) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[7 /*34*/], 1) < 35f)) || (func_623(&Var1, 2, 2, 1, 1) && !ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("g_m_y_lost_01"), 29.6f, 3661.92f, 40.63f, 1))) || PED::IS_PED_INJURED(Local_1820[6 /*34*/])) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 29.58f, 3661.88f, 39.63f, 1) < 4f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 32.45f, 3667.45f, 39.56f, 1) < 1f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 54.94906f, 3672.498f, 38.23081f, 39.54633f, 3657.83f, 43.00036f, 2.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 41.48467f, 3655.523f, 37.77835f, 20.27399f, 3649.47f, 43.4985f, 2.5f, 0, 1, 0))
					{
						if (!PED::IS_PED_INJURED(Local_1820[7 /*34*/]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[4 /*12*/], 0))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_5834[4 /*12*/], 1);
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_5834[4 /*12*/], -1f, 0f, 0f), PLAYER::PLAYER_PED_ID(), 2f, 1, 1f, 1f, 1, 0, 0, -957453492, -1);
								TASK::TASK_ENTER_VEHICLE(0, Local_5834[4 /*12*/], 20000, -1, 2f, 1, 0);
								TASK::TASK_DRIVE_BY(0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0f, 20, 1, -753768974);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								ENTITY::SET_ENTITY_VISIBLE(Local_1820[7 /*34*/], 1);
								TASK::TASK_PERFORM_SEQUENCE(Local_1820[7 /*34*/], uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								GlobalFunc_5130(Local_1820[7 /*34*/], "FALL_BACK", 18);
								iLocal_6549++;
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), PLAYER::PLAYER_PED_ID(), 2f, 1, 1f, 1f, 1, 0, 0, -957453492, -1);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								ENTITY::SET_ENTITY_VISIBLE(Local_1820[7 /*34*/], 1);
								TASK::TASK_PERFORM_SEQUENCE(Local_1820[7 /*34*/], uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								GlobalFunc_5130(Local_1820[7 /*34*/], "FALL_BACK", 18);
								iLocal_6549++;
							}
						}
					}
					break;
				
				case 1:
					if (!PED::IS_PED_INJURED(Local_1820[7 /*34*/]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1820[7 /*34*/], Local_5834[4 /*12*/]))
						{
							if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[7 /*34*/]))
							{
								VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[4 /*12*/]);
								GlobalFunc_5130(Local_1820[7 /*34*/], "FALL_BACK", 18);
								iLocal_6549++;
							}
						}
					}
					break;
				
				case 2:
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_1820[7 /*34*/], Local_5834[4 /*12*/]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[4 /*12*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[4 /*12*/]);
						}
						Local_1820[7 /*34*/].f_20 = { ENTITY::GET_ENTITY_COORDS(Local_1820[7 /*34*/], 0) };
						Local_1820[7 /*34*/].f_26 = 2;
						Local_1820[7 /*34*/].f_27 = 1;
						Local_1820[7 /*34*/].f_1 = 1;
					}
					else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[4 /*12*/]))
					{
						iLocal_6549++;
					}
					if (bParam0)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_5834[4 /*12*/], PLAYER::PLAYER_PED_ID(), 1))
						{
							if (GlobalFunc_156(Local_5834[4 /*12*/], PLAYER::PLAYER_PED_ID(), 1) < 25f)
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[4 /*12*/]);
								VEHICLE::EXPLODE_VEHICLE(Local_5834[4 /*12*/], 1, 0);
								VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_5834[4 /*12*/], 1);
								VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_5834[4 /*12*/], 100f);
								iLocal_6549++;
							}
						}
					}
					break;
				
				case 3:
					if (!ENTITY::IS_ENTITY_DEAD(Local_5834[4 /*12*/]))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[4 /*12*/]))
						{
							PED::SET_PED_COMBAT_MOVEMENT(Local_1820[7 /*34*/], 1);
							PED::SET_PED_ACCURACY(Local_1820[7 /*34*/], 1);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
							TASK::TASK_LEAVE_VEHICLE(0, Local_5834[4 /*12*/], 256);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), PLAYER::PLAYER_PED_ID(), 1f, 1, 1f, 1f, 1, 0, 0, -957453492, -1);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
							TASK::TASK_PERFORM_SEQUENCE(Local_1820[7 /*34*/], uLocal_6565);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[7 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3f, 1, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[7 /*34*/], 0);
							iLocal_6549++;
						}
					}
					else
					{
						PED::SET_PED_COMBAT_MOVEMENT(Local_1820[7 /*34*/], 1);
						PED::SET_PED_ACCURACY(Local_1820[7 /*34*/], 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
						TASK::TASK_LEAVE_VEHICLE(0, Local_5834[4 /*12*/], 256);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), PLAYER::PLAYER_PED_ID(), 1f, 1, 1f, 1f, 1, 0, 0, -957453492, -1);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
						TASK::TASK_PERFORM_SEQUENCE(Local_1820[7 /*34*/], uLocal_6565);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[7 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3f, 1, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[7 /*34*/], 0);
						iLocal_6549++;
					}
					break;
			}
		}
		else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[4 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[4 /*12*/]);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_5834[4 /*12*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[4 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[4 /*12*/]);
		}
	}
}

int func_648(int iParam0)//Position - 0x753AE
{
	if (func_649() < iParam0 + 1)
	{
		return 1;
	}
	return 0;
}

int func_649()//Position - 0x753C6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_1820)
	{
		if (!PED::IS_PED_INJURED(Local_1820[iVar0 /*34*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_650(int iParam0, bool bParam1, int iParam2)//Position - 0x753F9
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503);
		if (bParam1)
		{
			if (iVar0 == 7)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (iVar0 == 1)
		{
			iVar1 = TASK::GET_SEQUENCE_PROGRESS(iParam0);
			if (iVar1 > iParam2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_651(int iParam0)//Position - 0x7544B
{
	switch (iParam0)
	{
		case 0:
			return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 34.39107f, 3649.478f, 38.02622f, 110.6019f, 3682.793f, 41.25408f, 28f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 47.66907f, 3613.861f, 36.75443f, 110.7327f, 3641.736f, 42.00429f, 48.5f, 0, 1, 0));
			break;
		
		case 2:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 40.02887f, 3666.858f, 37.27187f, 3.502873f, 3738.677f, 43.3126f, 48f, 0, 1, 0);
			break;
		
		case 3:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 75.48908f, 3766.716f, 37.4406f, 107.0986f, 3696.768f, 41.24031f, 33.5f, 0, 1, 0);
			break;
		
		case 1:
			return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 65.11323f, 3708.477f, 33.26513f, 37.23098f, 3766.059f, 41.77897f, 39.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 78.02715f, 3703.877f, 34.60822f, 59.60519f, 3716.406f, 44.75361f, 41f, 0, 1, 0));
			break;
	}
	return 0;
}

void func_652(int iParam0, int iParam1)//Position - 0x755AB
{
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam1))
	{
		if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 6, 0))
		{
			VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 6, 0, 1148846080);
		}
		if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 7, 0))
		{
			VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 7, 0, 1148846080);
		}
	}
	else
	{
		if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, 0))
		{
			VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 0, 0, 1148846080);
		}
		if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, 0))
		{
			VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 1, 0, 1148846080);
		}
		if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, 0))
		{
			VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 4, 0, 1148846080);
		}
		if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, 0))
		{
			VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 5, 0, 1148846080);
		}
	}
}

int func_653(int iParam0, int iParam1)//Position - 0x75655
{
	int iVar0;
	
	if (iParam0 > 0)
	{
		iVar0 = MISC::GET_GAME_TIMER();
		if ((iVar0 - iParam0) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_654(int iParam0)//Position - 0x75678
{
	switch (iParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3801[0 /*18*/]))
			{
				Local_3801[0 /*18*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 19.1347f, 3684.347f, 38.7443f, 286.0925f, joaat("weapon_pistol"), 0, 1, 1);
				Local_3801[0 /*18*/].f_14 = { 47.1648f, 3694.547f, 38.7542f };
				func_656(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3801[5 /*18*/]))
			{
				Local_3801[5 /*18*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 49.8133f, 3680.696f, 38.7198f, 106.7312f, joaat("weapon_pistol"), 0, 1, 1);
				Local_3801[5 /*18*/].f_14 = { 22.702f, 3675.85f, 38.7505f };
				Local_3801[5 /*18*/].f_13 = 1;
				func_656(5);
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3801[6 /*18*/]))
			{
				Local_3801[6 /*18*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 16.2309f, 3705.187f, 38.6814f, 224.6131f, joaat("weapon_pistol"), 0, 1, 1);
				Local_3801[6 /*18*/].f_14 = { 48.7237f, 3686.033f, 38.7423f };
				func_656(6);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3801[7 /*18*/]))
			{
				Local_3801[7 /*18*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 34.1578f, 3708.816f, 38.5332f, 162.9502f, joaat("weapon_pistol"), 0, 1, 1);
				Local_3801[7 /*18*/].f_14 = { 24.8406f, 3683.792f, 38.6336f };
				Local_3801[7 /*18*/].f_13 = 1;
				func_656(7);
			}
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3801[1 /*18*/]))
			{
				Local_3801[1 /*18*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 96.1861f, 3661.269f, 38.7541f, 286.0925f, joaat("weapon_pistol"), 0, 1, 1);
				Local_3801[1 /*18*/].f_14 = { 68.3437f, 3677.772f, 38.8119f };
				func_656(1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3801[2 /*18*/]))
			{
				Local_3801[2 /*18*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 77.7008f, 3700.202f, 38.7543f, 230.1184f, joaat("weapon_pistol"), 0, 1, 1);
				Local_3801[2 /*18*/].f_14 = { 96.6802f, 3687.279f, 38.6327f };
				Local_3801[2 /*18*/].f_13 = 1;
				func_656(2);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3801[3 /*18*/]))
			{
				Local_3801[3 /*18*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 69.0141f, 3676.449f, 38.731f, 257.5091f, joaat("weapon_pistol"), 0, 1, 1);
				Local_3801[3 /*18*/].f_14 = { 109.1527f, 3678.107f, 38.7541f };
				Local_3801[3 /*18*/].f_13 = 1;
				func_656(3);
			}
			break;
		
		case 3:
			Local_1820[29 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 71.5719f, 3721.491f, 38.7652f, 87.2615f, joaat("weapon_pistol"), 0, 1, 1);
			Local_1820[29 /*34*/].f_20 = { 51.6792f, 3723.356f, 38.7029f };
			Local_1820[29 /*34*/].f_27 = 1;
			Local_1820[29 /*34*/].f_18 = 4;
			Local_1820[29 /*34*/].f_26 = 2;
			Local_1820[30 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 64.8816f, 3708.014f, 38.7651f, 59.2328f, joaat("weapon_pistol"), 0, 1, 1);
			Local_1820[30 /*34*/].f_20 = { 46.815f, 3715.067f, 38.7372f };
			Local_1820[30 /*34*/].f_27 = 1;
			Local_1820[30 /*34*/].f_18 = 4;
			Local_1820[30 /*34*/].f_26 = 2;
			break;
		
		case 21:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1820[31 /*34*/]))
			{
				Local_1820[31 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 79.16f, 3710.42f, 40.7f, 119.71f, joaat("weapon_assaultrifle"), 0, 1, 1);
				Local_1820[31 /*34*/].f_20 = { 75.36f, 3717.01f, 39.75f };
				Local_1820[31 /*34*/].f_27 = 2;
				Local_1820[31 /*34*/].f_18 = 4;
				Local_1820[31 /*34*/].f_26 = 3;
			}
			break;
		
		case 4:
			Local_1820[40 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 63.6262f, 3659.529f, 38.5275f, 178.7849f, joaat("weapon_pistol"), 0, 1, 1);
			PED::SET_PED_TO_LOAD_COVER(Local_1820[40 /*34*/], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_1820[40 /*34*/], 1);
			break;
		
		case 5:
			Local_1820[9 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 95.0368f, 3689.203f, 38.5154f, 174.3295f, joaat("weapon_pistol"), 0, 1, 1);
			Local_1820[9 /*34*/].f_20 = { 95.0368f, 3689.203f, 38.5154f };
			Local_1820[9 /*34*/].f_26 = 0;
			Local_1820[9 /*34*/].f_27 = 1;
			PED::SET_PED_SEEING_RANGE(Local_1820[9 /*34*/], 35f);
			PED::SET_PED_HEARING_RANGE(Local_1820[9 /*34*/], 35f);
			PED::SET_PED_COMBAT_RANGE(Local_1820[9 /*34*/], 0);
			break;
		
		case 7:
			Local_1820[6 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 30.87f, 3667.35f, 40.67f, -91.16f, joaat("weapon_pumpshotgun"), 0, 1, 1);
			Local_1820[6 /*34*/].f_18 = 4;
			Local_1820[6 /*34*/].f_20 = { 33.8241f, 3666.755f, 38.7235f };
			Local_1820[6 /*34*/].f_27 = 1;
			Local_1820[6 /*34*/].f_26 = 1;
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[6 /*34*/], 51, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[6 /*34*/], 50, 1);
			ENTITY::SET_ENTITY_HEALTH(Local_1820[6 /*34*/], 120);
			PED::SET_PED_ACCURACY(Local_1820[6 /*34*/], 1);
			Local_1820[7 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 28.5441f, 3663.88f, 39.7258f, 205.9603f, joaat("weapon_pistol"), 0, 1, 1);
			PED::SET_PED_ACCURACY(Local_1820[7 /*34*/], 1);
			break;
		
		case 9:
			if (!ENTITY::IS_ENTITY_DEAD(Local_5834[12 /*12*/]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1820[17 /*34*/]))
				{
					Local_1820[17 /*34*/] = func_655(Local_5834[12 /*12*/], joaat("g_m_y_lost_01"), iLocal_6572, joaat("weapon_pistol"), -1, 0, 1);
				}
			}
			break;
		
		case 10:
			Local_1820[8 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 49.4862f, 3691.022f, 38.7542f, 95.4359f, joaat("weapon_pistol"), 0, 1, 1);
			Local_1820[8 /*34*/].f_20 = { 41.5072f, 3686.138f, 38.5641f };
			Local_1820[8 /*34*/].f_26 = 2;
			Local_1820[8 /*34*/].f_27 = 1;
			Local_1820[8 /*34*/].f_18 = 4;
			Local_1820[9 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 95.0368f, 3689.203f, 38.5154f, 174.3295f, joaat("weapon_pistol"), 0, 1, 1);
			Local_1820[9 /*34*/].f_20 = { 95.0368f, 3689.203f, 38.5154f };
			Local_1820[9 /*34*/].f_26 = 0;
			Local_1820[9 /*34*/].f_27 = 1;
			Local_1820[11 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 15.9229f, 3705.11f, 38.6844f, 274.0622f, joaat("weapon_pistol"), 0, 1, 1);
			Local_1820[11 /*34*/].f_20 = { 35.1732f, 3704.942f, 38.6235f };
			Local_1820[11 /*34*/].f_26 = 0;
			Local_1820[11 /*34*/].f_27 = 1;
			break;
		
		case 11:
			if (!Local_1820[34 /*34*/].f_1)
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "t1b") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "t1b"))
				{
					Local_5834[15 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_7150, 56.8454f, 3690.152f, 38.9216f, 334.078f, 1, 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_5834[15 /*12*/], 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_5834[15 /*12*/], 4, "t1b", 2, 1000, 786603);
					VEHICLE::SET_PLAYBACK_SPEED(Local_5834[15 /*12*/], 1.1f);
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[15 /*12*/]);
					Local_1820[12 /*34*/] = func_655(Local_5834[15 /*12*/], joaat("g_m_y_lost_01"), iLocal_6572, joaat("weapon_sawnoffshotgun"), -1, 0, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[15 /*12*/], 0) && !PED::IS_PED_INJURED(Local_1820[12 /*34*/]))
					{
						TASK::TASK_DRIVE_BY(Local_1820[12 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0f, 30, 1, -753768974);
						PED::SET_PED_ACCURACY(Local_1820[12 /*34*/], 1);
						ENTITY::SET_ENTITY_HEALTH(Local_1820[12 /*34*/], 120);
					}
					Local_5834[16 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_7150, 58.6292f, 3692.525f, 38.9216f, 243.7529f, 1, 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_5834[16 /*12*/], 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_5834[16 /*12*/], 3, "t1b", 2, 1000, 786603);
					VEHICLE::SET_PLAYBACK_SPEED(Local_5834[16 /*12*/], 1.1f);
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[16 /*12*/]);
					Local_1820[13 /*34*/] = func_655(Local_5834[16 /*12*/], joaat("g_m_y_lost_01"), iLocal_6572, joaat("weapon_sawnoffshotgun"), -1, 0, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[16 /*12*/], 0) && !PED::IS_PED_INJURED(Local_1820[13 /*34*/]))
					{
						TASK::TASK_DRIVE_BY(Local_1820[13 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0f, 30, 1, -753768974);
						PED::SET_PED_ACCURACY(Local_1820[13 /*34*/], 1);
						ENTITY::SET_ENTITY_HEALTH(Local_1820[13 /*34*/], 120);
					}
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(3, "t1be");
					VEHICLE::REQUEST_VEHICLE_RECORDING(4, "t1b");
				}
			}
			break;
		
		case 12:
			break;
		
		case 13:
			Local_5834[24 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_7150, Local_5834[24 /*12*/].f_2, Local_5834[24 /*12*/].f_5, 1, 1);
			Local_1820[24 /*34*/] = func_655(Local_5834[24 /*12*/], joaat("g_m_y_lost_01"), iLocal_6572, joaat("weapon_pistol"), -1, 0, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_5834[24 /*12*/], 5, "t1b", 2, 1000, 786603);
			if (!PED::IS_PED_INJURED(Local_1820[24 /*34*/]))
			{
				TASK::TASK_DRIVE_BY(Local_1820[24 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0f, 20, 1, -753768974);
			}
			Local_5834[25 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_7150, Local_5834[25 /*12*/].f_2, Local_5834[25 /*12*/].f_5, 1, 1);
			Local_1820[25 /*34*/] = func_655(Local_5834[25 /*12*/], joaat("g_m_y_lost_01"), iLocal_6572, joaat("weapon_pistol"), -1, 0, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_5834[25 /*12*/], 6, "t1b", 2, 0, 786603);
			if (!PED::IS_PED_INJURED(Local_1820[25 /*34*/]))
			{
				TASK::TASK_DRIVE_BY(Local_1820[25 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0f, 20, 1, -753768974);
			}
			break;
		
		case 14:
			Local_5834[20 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_7150, 86.6435f, 3736.639f, 38.6777f, 65.1543f, 1, 1);
			Local_1820[32 /*34*/] = func_655(Local_5834[20 /*12*/], joaat("g_m_y_lost_01"), iLocal_6572, joaat("weapon_pistol"), -1, 0, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_5834[20 /*12*/], 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_5834[20 /*12*/], 13, "trevor1dw", 2, 1000, 786603);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[20 /*12*/]);
			Local_5834[22 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_7150, 88.933f, 3739.403f, 39.1818f, 69.048f, 1, 1);
			Local_1820[34 /*34*/] = func_655(Local_5834[22 /*12*/], joaat("g_m_y_lost_01"), iLocal_6572, joaat("weapon_pistol"), -1, 0, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_5834[22 /*12*/], 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_5834[22 /*12*/], 15, "trevor1dw", 2, 1000, 786603);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[22 /*12*/]);
			break;
		
		case 15:
			if (!Local_1820[34 /*34*/].f_1)
			{
				Local_5834[15 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_7150, 56.8454f, 3690.152f, 38.9216f, 334.078f, 1, 1);
				Local_1820[12 /*34*/] = func_655(Local_5834[15 /*12*/], joaat("g_m_y_lost_01"), iLocal_6572, joaat("weapon_pistol"), -1, 0, 1);
				Local_5834[16 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_7150, 58.6292f, 3692.525f, 38.9216f, 243.7529f, 1, 1);
				Local_1820[13 /*34*/] = func_655(Local_5834[16 /*12*/], joaat("g_m_y_lost_01"), iLocal_6572, joaat("weapon_sawnoffshotgun"), -1, 0, 1);
			}
			break;
		
		case 16:
			Local_5834[20 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_7150, 88.5008f, 3736.934f, 38.6946f, 57.4576f, 1, 1);
			Local_1820[32 /*34*/] = func_655(Local_5834[20 /*12*/], joaat("g_m_y_lost_01"), iLocal_6572, joaat("weapon_pistol"), -1, 0, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_5834[20 /*12*/], 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_5834[20 /*12*/], 19, "trevor1dw", 2, 1000, 786603);
			Local_5834[22 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_7150, 91.7644f, 3737.062f, 38.6493f, 57.2141f, 1, 1);
			Local_1820[34 /*34*/] = func_655(Local_5834[22 /*12*/], joaat("g_m_y_lost_01"), iLocal_6572, joaat("weapon_pistol"), -1, 0, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_5834[22 /*12*/], 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_5834[22 /*12*/], 21, "trevor1dw", 2, 1000, 786603);
			break;
		
		case 17:
			Local_5834[15 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_7150, 5.78f, 3660.17f, 39.64f, 55.61f, 1, 1);
			Local_1820[12 /*34*/] = func_655(Local_5834[15 /*12*/], joaat("g_m_y_lost_01"), iLocal_6572, joaat("weapon_pistol"), -1, 0, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_5834[15 /*12*/], 22, "trevor1dw", 2, 1000, 786603);
			Local_5834[16 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_7150, 4.62f, 3658.89f, 39.69f, 55.61f, 1, 1);
			Local_1820[13 /*34*/] = func_655(Local_5834[16 /*12*/], joaat("g_m_y_lost_01"), iLocal_6572, joaat("weapon_pistol"), -1, 0, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_5834[16 /*12*/], 23, "trevor1dw", 2, 1000, 786603);
			break;
		
		case 8:
			Local_1820[27 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 92.0689f, 3751.104f, 39.7797f, 234.5336f, joaat("weapon_pumpshotgun"), 0, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[27 /*34*/], 62.1389f, 3695.906f, 40.2992f, 2f, 0, 0);
			Local_1820[27 /*34*/].f_20 = { 62.1389f, 3695.906f, 40.2992f };
			Local_1820[27 /*34*/].f_26 = 2;
			Local_1820[27 /*34*/].f_27 = 1;
			Local_1820[27 /*34*/].f_18 = 5;
			Local_1820[38 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 31.7563f, 3734.149f, 39.6287f, 160.693f, joaat("weapon_pistol"), 0, 1, 1);
			Local_1820[38 /*34*/].f_18 = 5;
			Local_1820[38 /*34*/].f_26 = 2;
			Local_1820[38 /*34*/].f_27 = 2;
			Local_1820[38 /*34*/].f_20 = { 37.5261f, 3714.569f, 38.6235f };
			Local_1820[39 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 31.03f, 3735.61f, 40.63f, 173.79f, joaat("weapon_pistol"), 0, 1, 1);
			Local_1820[39 /*34*/].f_18 = 0;
			Local_1820[39 /*34*/].f_26 = 2;
			Local_1820[39 /*34*/].f_27 = 1;
			Local_1820[39 /*34*/].f_20 = { 31.03f, 3735.39f, 40.63f };
			break;
		
		case 18:
			Local_1820[15 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 50.7065f, 3698.115f, 38.7549f, 150.7802f, joaat("weapon_pistol"), 0, 1, 1);
			Local_1820[15 /*34*/].f_26 = 2;
			Local_1820[15 /*34*/].f_27 = 1;
			Local_1820[15 /*34*/].f_18 = 4;
			Local_1820[15 /*34*/].f_20 = { 37.2f, 3667.34f, 39.61f };
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[15 /*34*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[15 /*34*/], 37, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[15 /*34*/], 37.2f, 3667.34f, 39.61f, 2f, 1, 0);
			PED::SET_PED_ACCURACY(Local_1820[15 /*34*/], 1);
			Local_1820[16 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 50.99f, 3695.97f, 39.75f, -152.64f, joaat("weapon_pumpshotgun"), 0, 1, 1);
			Local_1820[16 /*34*/].f_26 = 3;
			Local_1820[16 /*34*/].f_27 = 2;
			Local_1820[16 /*34*/].f_18 = 8;
			Local_1820[16 /*34*/].f_20 = { 27.3f, 3684.03f, 39.51f };
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[16 /*34*/], 27.3f, 3684.03f, 39.51f, 10f, 1, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[16 /*34*/], 0);
			break;
		
		case 19:
			if (!ENTITY::IS_ENTITY_DEAD(Local_5834[3 /*12*/]))
			{
			}
			break;
		
		case 6:
			Local_1820[21 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 91.8644f, 3717.286f, 38.7288f, 158.26f, joaat("weapon_pistol"), 0, 1, 1);
			Local_1820[21 /*34*/].f_20 = { 91.8644f, 3717.286f, 38.7288f };
			Local_1820[21 /*34*/].f_18 = 0;
			Local_1820[21 /*34*/].f_26 = 0;
			Local_1820[22 /*34*/] = func_631(joaat("g_m_y_lost_01"), iLocal_6572, 90.3136f, 3704.232f, 38.5071f, 103.4727f, joaat("weapon_pistol"), 0, 1, 1);
			Local_1820[22 /*34*/].f_20 = { 90.3136f, 3704.232f, 38.5071f };
			Local_1820[22 /*34*/].f_18 = 0;
			Local_1820[22 /*34*/].f_26 = 0;
			break;
		
		case 20:
			break;
		
		case 22:
			break;
	}
}

int func_655(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x767B0
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, 26, iParam1, iParam4, 1, 1);
		func_124(iVar0, 494);
	}
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam3, -1, iParam6, 1);
	WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iParam3, iParam6);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam2);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar0, 0);
	PED::SET_PED_AS_ENEMY(iVar0, 1);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, iParam5);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iVar0, 0);
	ENTITY::SET_ENTITY_HEALTH(iVar0, 125);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
	GlobalFunc_593(iVar0, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 132, 1);
	PED::SET_PED_KEEP_TASK(iVar0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 37, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 49, 1);
	PED::SET_PED_USING_ACTION_MODE(iVar0, 1, -1, "DEFAULT_ACTION");
	return iVar0;
}

void func_656(int iParam0)//Position - 0x76864
{
	Local_3801[iParam0 /*18*/].f_2 = 0;
	Local_3801[iParam0 /*18*/].f_1 = 0;
	Local_3801[iParam0 /*18*/].f_4 = 0;
	if (HUD::DOES_BLIP_EXIST(Local_3801[iParam0 /*18*/].f_17))
	{
		HUD::REMOVE_BLIP(&(Local_3801[iParam0 /*18*/].f_17));
	}
}

int func_657(int iParam0)//Position - 0x768A7
{
	STREAMING::REQUEST_MODEL(iParam0->f_6);
	if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam0->f_6, iParam0->f_2, iParam0->f_5, 1, 1);
			iParam0->f_8 = 0;
			iParam0->f_9 = 0;
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, 15f);
			return 1;
		}
	}
	return 0;
}

void func_658(int iParam0, float fParam1)//Position - 0x7690D
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_58 = false;
	if (!bLocal_40)
	{
		if (bLocal_39)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_40 = true;
		}
	}
	else if (!bLocal_39)
	{
		GlobalFunc_2214();
		bLocal_40 = false;
	}
	if (bLocal_39)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_33)
	{
		if (iLocal_28)
		{
			fLocal_276 = 0f;
		}
		else
		{
			fLocal_276 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_38 = 1;
					}
					else
					{
						iLocal_38 = 0;
					}
				}
				fLocal_273 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_274) * fLocal_276));
				if (bLocal_37)
				{
					func_694(iParam0, fLocal_273);
					GlobalFunc_2913(iParam0, fLocal_283);
					if (fLocal_278 > 1000f)
					{
						if (iLocal_415 == 0)
						{
							GlobalFunc_2912(iParam0, fLocal_283);
						}
						fVar0 = ((fLocal_273 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_415) * 2000f));
						func_691(iParam0, fVar0, fLocal_277);
						iLocal_415++;
						if (iLocal_415 > 2)
						{
							fLocal_278 = 0f;
						}
					}
					else
					{
						iLocal_415 = 0;
						fLocal_278 = (fLocal_278 + (MISC::GET_FRAME_TIME() * 1000f));
					}
				}
			}
		}
		iVar4 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				iVar4 = 1;
			}
		}
		if (fLocal_273 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_45)
		{
			if (!bLocal_27)
			{
				func_687(iParam0, ((fParam1 * fLocal_274) * fLocal_276), 0);
				if (!iLocal_48)
				{
				}
				iLocal_48 = 0;
			}
			if (bLocal_30)
			{
				func_683(iParam0);
			}
			if (!bLocal_27)
			{
				func_666(iParam0, ((fParam1 * fLocal_274) * fLocal_276), 0);
			}
		}
		if (iLocal_35)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_650 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_521 = { ENTITY::GET_ENTITY_COORDS(iLocal_650, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_650, &fLocal_121, &fLocal_122, &fLocal_123, &fLocal_124);
				}
			}
			iLocal_35 = 0;
		}
		if (iLocal_34)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_650))
			{
				GlobalFunc_2210(iLocal_651);
				iLocal_651 = iLocal_650;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_651, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_651, Local_521, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_651, fLocal_121, fLocal_122, fLocal_123, fLocal_124);
			}
			fLocal_272 = fLocal_275;
			bLocal_27 = true;
			iLocal_34 = 0;
		}
		if (bLocal_27)
		{
			while (!func_659(&iParam0, fLocal_272))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_28 = 1;
		}
		if (iLocal_41)
		{
			iLocal_41 = 0;
		}
	}
}

int func_659(int iParam0, float fParam1)//Position - 0x76BA0
{
	if (!iLocal_42)
	{
		bLocal_27 = true;
		func_661();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_402 == -1)
			{
				while (!func_660(iParam0, iLocal_402, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_32)
				{
					iLocal_28 = 1;
					fLocal_276 = 0f;
					iLocal_403 = 0;
					iLocal_405 = 0;
					iLocal_404 = 0;
					iLocal_399 = 0;
					iLocal_400 = 0;
					iLocal_401 = 0;
					iLocal_406 = 0;
					iLocal_407 = 0;
					iLocal_408 = 0;
				}
			}
		}
		iLocal_42 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_274) * fLocal_276));
				func_660(iParam0, iLocal_402, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_273 = fParam1;
		iLocal_409 = 0;
		iLocal_412 = 0;
		fLocal_288 = 0f;
		fLocal_287 = 0f;
		func_666(*iParam0, ((1f * fLocal_274) * fLocal_276), 1);
		func_687(*iParam0, ((1f * fLocal_274) * fLocal_276), 1);
		func_683(*iParam0);
		if ((iLocal_406 == 0 && iLocal_407 == 0) && iLocal_408 == 0)
		{
			iLocal_28 = 0;
			bLocal_27 = false;
			iLocal_42 = 0;
			return 1;
		}
	}
	return 0;
}

int func_660(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x76CD2
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_548);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_548))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_548, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_410 && iParam1 != iLocal_411)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_548, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_548, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_548, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_548, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_548))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_548);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_548, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_410 && iParam1 != iLocal_411)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_548, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_548, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_548, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_548, 1);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_661()//Position - 0x76EB8
{
	func_664();
	func_663();
	func_662();
}

void func_662()//Position - 0x76ECC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_625[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_625[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_625[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_625[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_625[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_625[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_625[iVar0]));
			}
		}
		iLocal_351[iVar0] = 0;
		if (!bLocal_39 && !bLocal_52)
		{
			if (iLocal_328[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_328[iVar0], &cLocal_548);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!iLocal_579[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_579[iVar0]);
		}
		iVar0++;
	}
}

void func_663()//Position - 0x76FC2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_623[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_623[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_623[iVar0]));
			}
		}
		iLocal_397[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!iLocal_577[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_577[iVar0]);
		}
		iVar0++;
	}
	iLocal_404 = 0;
	iLocal_401 = 0;
}

void func_664()//Position - 0x7703D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_605[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_605[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_605[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_605[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_605[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_605[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_605[iVar0]));
			}
		}
		if (!bLocal_39 && !bLocal_52)
		{
			if (iLocal_292[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_292[iVar0], &cLocal_548);
			}
		}
		iLocal_304[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!iLocal_565[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_565[iVar0]);
		}
		iVar0++;
	}
	iLocal_403 = 0;
	iLocal_399 = 0;
}


void func_666(int iParam0, float fParam1, bool bParam2)//Position - 0x77152
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	float fVar13;
	bool bVar14;
	bool bVar15;
	var uVar16;
	var uVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	
	bVar15 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	uVar16 = PED::CAN_CREATE_RANDOM_DRIVER();
	uVar17 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	bVar18 = false;
	if (bVar15)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = iLocal_405;
		while (iVar0 < 22)
		{
			if (iLocal_351[iVar0] != 99)
			{
				if (iLocal_351[iVar0] == 0)
				{
					if (iLocal_328[iVar0] > 0)
					{
						if (!bLocal_27)
						{
							if (fLocal_273 > (fLocal_217[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_579[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_374[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_579[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_374[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_374[iVar0]), 1);
								iLocal_351[iVar0]++;
								iLocal_407++;
							}
						}
						else
						{
							fVar12 = (fLocal_273 - fLocal_217[iVar0]);
							fVar12 = (fVar12 * fLocal_240[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_681(iLocal_328[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_579[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_374[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_579[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_374[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_374[iVar0]), 1);
									iLocal_351[iVar0]++;
									iLocal_407++;
								}
								else
								{
									iLocal_351[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_351[iVar0] = 99;
					}
				}
				else if (iLocal_351[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_328[iVar0], &cLocal_548);
					if (MISC::IS_BIT_SET(iLocal_374[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_54 && ((!MISC::IS_BIT_SET(iLocal_374[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_374[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_679());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_679());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_625[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_579[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_579[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_328[iVar0], &cLocal_548))
							{
								if (fLocal_273 >= (fLocal_217[iVar0] - (fLocal_286 * fParam1)))
								{
									if ((iLocal_41 || bParam2) || (!bLocal_58 && !func_678(Local_454[iVar0 /*3*/], Var9, 5f, fLocal_284)))
									{
										if (bLocal_37)
										{
											func_677(Local_454[iVar0 /*3*/], Var9, fLocal_277);
										}
										iLocal_625[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_579[iVar0], Local_454[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_579[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_625[iVar0], 0);
										}
										if (uLocal_50 && !MISC::IS_BIT_SET(iLocal_374[iVar0], 0))
										{
											func_676(iLocal_625[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_374[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_625[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_625[iVar0], Local_454[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_625[iVar0], fLocal_125[iVar0], fLocal_148[iVar0], fLocal_171[iVar0], fLocal_194[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_579[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_579[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_625[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_374[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_625[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_625[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_625[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_579[iVar0]);
										iLocal_407 = (iLocal_407 - 1);
										iLocal_351[iVar0]++;
										bLocal_58 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_625[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_625[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_625[iVar0], Local_454[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_625[iVar0], fLocal_125[iVar0], fLocal_148[iVar0], fLocal_171[iVar0], fLocal_194[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_579[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_579[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_625[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_625[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_579[iVar0]);
							iLocal_407 = (iLocal_407 - 1);
							iLocal_351[iVar0]++;
						}
					}
				}
				else if (iLocal_351[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_328[iVar0], &cLocal_548);
					if (!MISC::IS_BIT_SET(iLocal_374[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_374[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_54 && ((!MISC::IS_BIT_SET(iLocal_374[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_374[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_679());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_679());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_625[iVar0]))
						{
							if (!bLocal_58 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_625[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_625[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_41)
									{
										func_674(&(iLocal_625[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_374[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_625[iVar0], 0))
					{
						if (fLocal_273 >= fLocal_217[iVar0])
						{
							if (5 > iLocal_400)
							{
								fVar12 = (fLocal_273 - fLocal_217[iVar0]);
								fVar12 = (fVar12 * fLocal_240[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_328[iVar0], &cLocal_548))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_328[iVar0], &cLocal_548))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_625[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_328[iVar0], fVar12, &cLocal_548) };
										if (((!func_678(Var3, Var9, 5f, fLocal_284) && func_678(Var6, Var9, 5f, fLocal_284)) && !iLocal_41) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_374[iVar0], 1))
											{
												func_674(&(iLocal_625[iVar0]), iVar19, 1);
											}
											iLocal_400++;
											iLocal_351[iVar0]++;
										}
										else if (((!bLocal_58 || MISC::IS_BIT_SET(iLocal_374[iVar0], 1)) || iLocal_41) || bParam2)
										{
											if (func_660(&(iLocal_625[iVar0]), iLocal_328[iVar0], fVar12, 1, 0, 0, bLocal_56, bLocal_55))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_625[iVar0], (fParam1 * fLocal_240[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_625[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_374[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_625[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_625[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_625[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_579[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_625[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_374[iVar0], 1))
												{
													func_674(&(iLocal_625[iVar0]), iVar19, 1);
												}
												iLocal_400++;
												iLocal_351[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_374[iVar0], 1))
										{
											func_674(&(iLocal_625[iVar0]), iVar19, 1);
										}
										iLocal_400++;
										iLocal_351[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_374[iVar0], 1))
								{
									func_674(&(iLocal_625[iVar0]), iVar19, 1);
								}
								iLocal_400++;
								iLocal_351[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_374[iVar0], 1))
						{
							func_674(&(iLocal_625[iVar0]), iVar19, 1);
						}
						iLocal_400++;
						iLocal_351[iVar0]++;
					}
				}
				else if (iLocal_351[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_625[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_625[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_625[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_31 && !iLocal_28) && !bLocal_47) && (((!bLocal_56 && !bLocal_55) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_625[iVar0])) || func_673(iLocal_625[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_49)
											{
												bVar14 = true;
											}
											else
											{
												fVar13 = ENTITY::GET_ENTITY_SPEED(iVar2);
												if (fVar13 < 1f)
												{
													bVar14 = true;
												}
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_625[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_625[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_625[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												GlobalFunc_5929(iLocal_625[iVar0]);
												iLocal_351[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_625[iVar0], (fParam1 * fLocal_240[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_625[iVar0]);
							}
						}
						else
						{
							iLocal_351[iVar0]++;
						}
					}
					else
					{
						iLocal_351[iVar0]++;
					}
				}
				else if (iLocal_351[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_625[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_625[iVar0]))
						{
							iLocal_351[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_625[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_625[iVar0], (fParam1 * fLocal_240[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_625[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_328[iVar0], &cLocal_548))
							{
								if (fLocal_273 > (fLocal_217[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_328[iVar0], &cLocal_548)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_625[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_625[iVar0]);
							}
						}
					}
					else
					{
						iLocal_351[iVar0]++;
					}
				}
				else if (iLocal_351[iVar0] == 5)
				{
					if (!iLocal_625[iVar0] == iLocal_652)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_625[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_625[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_625[iVar0]);
									if (fVar13 < 8f)
									{
										fVar13 = 8f;
									}
									if (fVar13 > 62.9f)
									{
										fVar13 = 62.9f;
									}
									TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar1, fVar13);
								}
							}
						}
						if (!bLocal_39 && !bLocal_52)
						{
							if (iLocal_328[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_328[iVar0], &cLocal_548);
							}
						}
						if (!bLocal_29)
						{
							if (!bLocal_57)
							{
								GlobalFunc_2210(iLocal_625[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_625[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_625[iVar0]));
						}
					}
					iLocal_400 = (iLocal_400 - 1);
					iLocal_351[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_405 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_667();
	}
}

void func_667()//Position - 0x77D3C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_625[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_625[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_625[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_625[iVar0]);
				}
			}
			GlobalFunc_2911(iLocal_625[iVar0]);
			GlobalFunc_2210(iLocal_625[iVar0]);
		}
		iLocal_351[iVar0] = 0;
		iLocal_374[iVar0] = 0;
		if (!bLocal_39 && !bLocal_52)
		{
			if (iLocal_328[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_328[iVar0], &cLocal_548);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!iLocal_579[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_579[iVar0]);
		}
		iVar0++;
	}
	iLocal_405 = 0;
}






int func_673(int iParam0)//Position - 0x78007
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_53)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1))
				{
					if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar1, &iVar0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_674(var uParam0, int iParam1, bool bParam2)//Position - 0x78064
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_564);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
			}
			else if (iParam1 == 1)
			{
				iVar0 = PED::CREATE_RANDOM_PED_AS_DRIVER(*uParam0, 1);
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
				{
					PED::GIVE_PED_HELMET(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_679(), -1, 0, 0);
				if (bLocal_59)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_679());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_60)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_58 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_676(var uParam0)//Position - 0x78170
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_603 >= -1 && iLocal_604 >= -1)
	{
		while (iVar0 == iLocal_603 || iVar0 == iLocal_604)
		{
			iVar0++;
		}
	}
	else if (iLocal_603 >= -1)
	{
		if (iVar0 == iLocal_603)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 0, 0);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 2, 2);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 4, 4);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 27, 27);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 7, 7);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 73, 73);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 68, 68);
			break;
		
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 62, 62);
			break;
		
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 132, 132);
			break;
		
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 117, 0);
			break;
		
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 52, 52);
			break;
		
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 88, 88);
			break;
		
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 1, 1);
			break;
		
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 36, 36);
			break;
		
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 95, 95);
			break;
		
		default:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 73, 73);
			break;
	}
}

void func_677(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x782E9
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_40)
	{
		if (!func_678(Param0, Param3, fParam6, 200f))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iVar1, Param0, fParam6, fParam6, fParam6, 0, 1, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam6, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_678(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x78359
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_40)
		{
			if (!bLocal_27)
			{
				if (SYSTEM::VMAG2(Param3 - Param0) - fParam6) < (fParam7 * fParam7)
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam6))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_679()//Position - 0x783A0
{
	if (iLocal_602 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_602;
}


float func_681(int iParam0)//Position - 0x783CA
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_548);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_548))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_548);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_548);
	return uVar0;
}


void func_683(int iParam0)//Position - 0x78480
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	bool bVar8;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		bVar7 = false;
		bVar8 = false;
		iVar0 = iLocal_404;
		while (iVar0 < 1)
		{
			switch (iLocal_397[iVar0])
			{
				case 0:
					if (!iLocal_577[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_450[iVar0 /*3*/], fLocal_271, fLocal_271, fLocal_271, 0, 1, 0))
						{
							iLocal_406++;
							iLocal_397[iVar0]++;
						}
					}
					else
					{
						iLocal_397[iVar0] = 99;
					}
					break;
				
				case 1:
					if (1 > iLocal_401)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_623[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_577[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_577[iVar0]))
							{
								if ((bLocal_27 || iLocal_41) || (!bLocal_58 && !func_678(Local_450[iVar0 /*3*/], Var1, 5f, fLocal_284)))
								{
									if (bLocal_37)
									{
										func_677(Local_450[iVar0 /*3*/], Var1, fLocal_277);
									}
									iLocal_623[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_577[iVar0], Local_450[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_577[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_623[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_623[iVar0], fLocal_263[iVar0], fLocal_265[iVar0], fLocal_267[iVar0], fLocal_269[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_577[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_623[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_623[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_577[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_623[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_623[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_623[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_623[iVar0], 1);
									iLocal_406 = (iLocal_406 - 1);
									iLocal_401++;
									iLocal_397[iVar0]++;
									bLocal_58 = true;
								}
							}
						}
						else
						{
							iLocal_406 = (iLocal_406 - 1);
							iLocal_401++;
							iLocal_397[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_623[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_623[iVar0], 1) };
						}
						if (fLocal_285 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_285 * fLocal_285))
						{
							if (!GlobalFunc_5654(iLocal_623[iVar0], iParam0, 0))
							{
								if (!bLocal_29)
								{
									GlobalFunc_2210(iLocal_623[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_623[iVar0]));
								}
								iLocal_401 = (iLocal_401 - 1);
								iLocal_397[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_397[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_404 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_684();
	}
}

void func_684()//Position - 0x78775
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_623[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_623[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_623[iVar0], 1, 0);
			}
			GlobalFunc_2210(iLocal_623[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!iLocal_577[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_577[iVar0]);
		}
		iVar0++;
	}
	iLocal_404 = 0;
	iLocal_401 = 0;
}



void func_687(int iParam0, float fParam1, int iParam2)//Position - 0x78810
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	float fVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	bool bVar24;
	struct<3> Var25;
	
	iVar5 = 0;
	bVar18 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	uVar19 = PED::CAN_CREATE_RANDOM_DRIVER();
	uVar20 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	if (bVar18)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		Var12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	iVar1 = 0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fLocal_273 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_403;
		while (iVar0 < 11 && !bVar23)
		{
			if (iLocal_304[iVar0] != 99)
			{
				if (iLocal_304[iVar0] == 0)
				{
					if (iLocal_292[iVar0] > 0 && iLocal_565[iVar0] != 0)
					{
						if (!bLocal_27)
						{
							if (fLocal_273 < (fLocal_109[iVar0] + 20000f))
							{
								if (fLocal_273 >= (fLocal_109[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_565[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_316[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_565[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_316[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_316[iVar0]), 1);
									iLocal_408++;
									iLocal_304[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar23 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_690(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_273 - fLocal_109[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_681(iLocal_292[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_565[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_316[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_565[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_316[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_316[iVar0]), 1);
									iLocal_408++;
									iLocal_304[iVar0]++;
								}
								else
								{
									func_690(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_690(iVar0, 1090519040);
					}
				}
				else if (iLocal_304[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_292[iVar0], &cLocal_548);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_316[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_54 && ((!MISC::IS_BIT_SET(iLocal_316[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_316[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_679());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_679());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_605[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_565[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_565[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_292[iVar0], &cLocal_548)) && bVar17)
						{
							if (fLocal_273 >= (fLocal_109[iVar0] - (fLocal_286 * fParam1)))
							{
								if ((iLocal_41 || iParam2) || (!bLocal_58 && !func_678(Local_416[iVar0 /*3*/], Var12, 5f, fLocal_284)))
								{
									if (bLocal_37)
									{
										func_677(Local_416[iVar0 /*3*/], Var12, fLocal_277);
									}
									iLocal_605[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_565[iVar0], Local_416[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_565[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_605[iVar0], 0);
									}
									if (uLocal_50 && !MISC::IS_BIT_SET(iLocal_316[iVar0], 0))
									{
										func_676(iLocal_605[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_605[iVar0], Local_416[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_605[iVar0], fLocal_61[iVar0], fLocal_73[iVar0], fLocal_85[iVar0], fLocal_97[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_565[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_565[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_605[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_316[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_605[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_316[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_605[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_605[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_605[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_605[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_565[iVar0]);
									iLocal_408 = (iLocal_408 - 1);
									iLocal_304[iVar0]++;
									bLocal_58 = true;
								}
								else if (fLocal_273 > fLocal_109[iVar0])
								{
									iLocal_408 = (iLocal_408 - 1);
									func_690(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_304[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_414 || iLocal_414 == 0)) || iLocal_41) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_316[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_316[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_54 && ((!MISC::IS_BIT_SET(iLocal_316[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_316[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_679());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_679());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_605[iVar0]))
							{
								if (!bLocal_58 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_605[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_605[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_41)
										{
											func_674(&(iLocal_605[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_316[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_605[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_292[iVar0], &cLocal_548);
							if (fLocal_273 >= fLocal_109[iVar0])
							{
								if (5 > iLocal_399)
								{
									fVar15 = (fLocal_273 - fLocal_109[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_292[iVar0], &cLocal_548))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_292[iVar0], &cLocal_548))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_605[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_292[iVar0], fVar15, &cLocal_548) };
											if (!func_678(Var6, Var12, 5f, fLocal_284) && func_678(Var9, Var12, 5f, fLocal_284))
											{
												if (!MISC::IS_BIT_SET(iLocal_316[iVar0], 1))
												{
													func_674(&(iLocal_605[iVar0]), iVar21, 0);
												}
												func_690(iVar0, 1090519040);
											}
											else if (((!bLocal_58 || MISC::IS_BIT_SET(iLocal_316[iVar0], 1)) || iLocal_41) || iParam2)
											{
												if (func_660(&(iLocal_605[iVar0]), iLocal_292[iVar0], fVar15, 1, 0, 0, 1, bLocal_55))
												{
													if (!MISC::IS_BIT_SET(iLocal_316[iVar0], 1))
													{
														func_674(&(iLocal_605[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_605[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_605[iVar0], fParam1);
													iLocal_399++;
													iLocal_304[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_316[iVar0], 1))
											{
												func_674(&(iLocal_605[iVar0]), iVar21, 0);
											}
											func_690(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_292[iVar0], &cLocal_548))
									{
										if (!MISC::IS_BIT_SET(iLocal_316[iVar0], 1))
										{
											func_674(&(iLocal_605[iVar0]), iVar21, 0);
										}
										func_690(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_316[iVar0], 1))
									{
										func_674(&(iLocal_605[iVar0]), iVar21, 0);
									}
									func_690(iVar0, 1090519040);
								}
							}
							else if (iLocal_38 && !bLocal_46)
							{
								if (!MISC::IS_BIT_SET(iLocal_316[iVar0], 1))
								{
									func_674(&(iLocal_605[iVar0]), iVar21, 0);
								}
								func_690(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_316[iVar0], 1))
							{
								func_674(&(iLocal_605[iVar0]), iVar21, 0);
							}
							func_690(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_414 = iVar0;
					}
				}
				else if (iLocal_304[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_605[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_605[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_605[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_36)
									{
										if ((!bLocal_31 && !iLocal_28) && func_673(iLocal_605[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_413 || iLocal_413 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_605[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_605[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_413 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_51 && !MISC::IS_BIT_SET(iLocal_316[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_413 || iLocal_413 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_605[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_413 = iVar0;
										}
									}
									if (bVar24)
									{
										GlobalFunc_5929(iLocal_605[iVar0]);
										iLocal_304[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_605[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_605[iVar0]);
							}
						}
						else
						{
							iLocal_304[iVar0]++;
						}
					}
					else
					{
						iLocal_304[iVar0]++;
					}
				}
				else if (iLocal_304[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_605[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_605[iVar0]))
						{
							iLocal_304[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_605[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_605[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_605[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_292[iVar0], &cLocal_548))
							{
								if (fLocal_273 > (fLocal_109[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_292[iVar0], &cLocal_548)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_605[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_605[iVar0]);
							}
						}
					}
					else
					{
						iLocal_304[iVar0]++;
					}
				}
				else if (iLocal_304[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_605[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_605[iVar0]);
					}
					iLocal_399 = (iLocal_399 - 1);
					func_690(iVar0, fVar16);
				}
				if (iVar22 == -1)
				{
					iVar22 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar22 != -1)
		{
			iLocal_403 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_413 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_414 = 0;
		}
	}
	else
	{
		func_688();
	}
}

void func_688()//Position - 0x7936B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_605[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_605[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_605[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_605[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_605[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_605[iVar0]);
				}
			}
			GlobalFunc_2911(iLocal_605[iVar0]);
			GlobalFunc_2210(iLocal_605[iVar0]);
		}
		iLocal_304[iVar0] = 0;
		iLocal_316[iVar0] = 0;
		if (!bLocal_39 && !bLocal_52)
		{
			if (iLocal_292[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_292[iVar0], &cLocal_548);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!iLocal_565[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_565[iVar0]);
		}
		iVar0++;
	}
	iLocal_403 = 0;
	iLocal_399 = 0;
}


void func_690(int iParam0, float fParam1)//Position - 0x794BC
{
	int iVar0;
	
	if (!iLocal_565[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_565[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_605[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_605[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_605[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_605[iParam0], -1);
		if (!PED::IS_PED_INJURED(iVar0) && iVar0 != PLAYER::PLAYER_PED_ID())
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 0);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_605[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_60)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_29)
	{
		if (!bLocal_57)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_2210(iLocal_605[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_605[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_605[iParam0]));
		}
	}
	if (!bLocal_39 && !bLocal_52)
	{
		if (iLocal_292[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_292[iParam0], &cLocal_548);
		}
	}
	iLocal_304[iParam0] = 99;
}

void func_691(int iParam0, float fParam1, float fParam2)//Position - 0x79615
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fParam1) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Var7 = { Var4 - Var1 };
			fVar13 = SYSTEM::VMAG(Var7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_677(Var1, Var10, fVar13);
		}
	}
}



void func_694(int iParam0, float fParam1)//Position - 0x79732
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_287 + 2000f);
		fVar2 = (fLocal_288 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_409 == 0)
				{
					Local_536 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_287) };
					iLocal_409++;
				}
				else if (iLocal_409 == 1)
				{
					Local_539 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar1) };
					iLocal_409++;
				}
				else if (!bLocal_58)
				{
					if (Local_536.x > Local_539.x)
					{
						fVar3 = Local_536.x;
						Local_536.x = Local_539.x;
						Local_539.x = fVar3;
					}
					if (Local_536.f_1 > Local_539.f_1)
					{
						fVar3 = Local_536.f_1;
						Local_536.f_1 = Local_539.f_1;
						Local_539.f_1 = fVar3;
					}
					if (Local_536.f_2 > Local_539.f_2)
					{
						fVar3 = Local_536.f_2;
						Local_536.f_2 = Local_539.f_2;
						Local_539.f_2 = fVar3;
					}
					Local_536 = { Local_536 - Vector(fLocal_291, fLocal_291, fLocal_291) };
					Local_539 = { Local_539 + Vector(fLocal_291, fLocal_291, fLocal_291) };
					PATHFIND::SET_ROADS_IN_AREA(Local_536, Local_539, 0, 0);
					fLocal_287 = fVar1;
					iLocal_409 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_412 == 0)
			{
				Local_542 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_288) };
				iLocal_412++;
			}
			else if (iLocal_412 == 1)
			{
				Local_545 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar2) };
				iLocal_412++;
			}
			else if (!bLocal_58 && !bVar4)
			{
				if (Local_542.x > Local_545.x)
				{
					fVar3 = Local_542.x;
					Local_542.x = Local_545.x;
					Local_545.x = fVar3;
				}
				if (Local_542.f_1 > Local_545.f_1)
				{
					fVar3 = Local_542.f_1;
					Local_542.f_1 = Local_545.f_1;
					Local_545.f_1 = fVar3;
				}
				if (Local_542.f_2 > Local_545.f_2)
				{
					fVar3 = Local_542.f_2;
					Local_542.f_2 = Local_545.f_2;
					Local_545.f_2 = fVar3;
				}
				Local_542 = { Local_542 - Vector(fLocal_291, fLocal_291, fLocal_291) };
				Local_545 = { Local_545 + Vector(fLocal_291, fLocal_291, fLocal_291) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_542, Local_545, 1);
				fLocal_288 = fVar2;
				iLocal_412 = 0;
			}
		}
	}
}




void func_698()//Position - 0x79A94
{
	if (!PED::IS_PED_INJURED(Local_1820[7 /*34*/]))
	{
		if (Local_1820[7 /*34*/].f_1 == 1)
		{
			if (Local_1820[7 /*34*/].f_30 == 0)
			{
				if (ENTITY::IS_ENTITY_VISIBLE(Local_1820[7 /*34*/]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_1820[7 /*34*/]) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[7 /*34*/], 1) > 120f)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[7 /*34*/], 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[7 /*34*/], ENTITY::GET_ENTITY_COORDS(Local_1820[7 /*34*/], 0), 20f, 0, 0);
						Local_1820[7 /*34*/].f_30 = 1;
					}
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_1820[10 /*34*/]))
	{
		if (Local_1820[10 /*34*/].f_1 == 1)
		{
			if (Local_1820[10 /*34*/].f_30 == 0)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_1820[10 /*34*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[10 /*34*/], 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[10 /*34*/], ENTITY::GET_ENTITY_COORDS(Local_1820[10 /*34*/], 0), 20f, 0, 0);
					Local_1820[10 /*34*/].f_30 = 1;
				}
			}
		}
	}
}

void func_699()//Position - 0x79B92
{
	if (iLocal_7363 == 0)
	{
		if (GlobalFunc_745())
		{
			if (!PED::IS_PED_INJURED(Local_5759))
			{
				if (!PED::IS_PED_INJURED(Local_5769))
				{
					if (!GlobalFunc_111() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759))
					{
						GlobalFunc_5653(Local_5769, "T1M1_GYAA", "WADE", 34);
						iLocal_7364 = MISC::GET_GAME_TIMER();
						iLocal_7363 = 1;
					}
				}
			}
		}
		else if (!PED::IS_PED_INJURED(Local_5769))
		{
			if (!PED::IS_PED_INJURED(Local_5759))
			{
				if (!GlobalFunc_111() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5769))
				{
					GlobalFunc_5653(Local_5759, "T1M1_GZAA", "RON", 34);
					iLocal_7364 = MISC::GET_GAME_TIMER();
					iLocal_7363 = 1;
				}
			}
		}
	}
	else if (GlobalFunc_588(&iLocal_7364, MISC::GET_RANDOM_INT_IN_RANGE(8000, 18000)))
	{
		iLocal_7363 = 0;
	}
}

void func_700()//Position - 0x79C58
{
	if (iLocal_700)
	{
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_5759, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_5759, 1120685857) != 1)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_5759, ENTITY::GET_ENTITY_COORDS(Local_5759, 0), 100f, 0);
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_5769))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_5769, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_5769, 1120685857) != 1)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_5769, ENTITY::GET_ENTITY_COORDS(Local_5769, 0), 100f, 0);
				}
			}
		}
	}
}

void func_701()//Position - 0x79CDE
{
	switch (iLocal_826)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_6159, 0, 0, 0, 0, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_6159, 1);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_6159, 499f);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_6159, 1);
				VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_6159, 0);
			}
			GRAPHICS::ADD_PETROL_DECAL(Local_7357 + Vector(0f, 0f, 0f), 1.5f, 2f, 1f);
			iLocal_826++;
			break;
		
		case 1:
			GRAPHICS::ADD_PETROL_DECAL(Local_7357 + Vector(0f, 0.5f, 0f), 1.5f, 2f, 1f);
			iLocal_826++;
			break;
		
		case 2:
			GRAPHICS::ADD_PETROL_DECAL(Local_7357 + Vector(0f, 0.5f, 0.5f), 1.5f, 2f, 1f);
			iLocal_826++;
			break;
		
		case 3:
			GRAPHICS::ADD_PETROL_DECAL(Local_7357 + Vector(0f, 0f, 0.5f), 1.5f, 2f, 1f);
			iLocal_826++;
			break;
		
		case 4:
			GRAPHICS::ADD_PETROL_DECAL(Local_7357 + Vector(0f, -0.5f, 0f), 1.5f, 2f, 1f);
			iLocal_826++;
			break;
		
		case 5:
			GRAPHICS::ADD_PETROL_DECAL(Local_7357 + Vector(0f, -0.5f, -0.5f), 1.5f, 2f, 1f);
			iLocal_826++;
			break;
		
		case 6:
			GRAPHICS::ADD_PETROL_DECAL(Local_7357 + Vector(0f, 0f, -0.5f), 1.5f, 2f, 1f);
			iLocal_826++;
			break;
		
		case 7:
			GRAPHICS::ADD_PETROL_DECAL(Local_7357 + Vector(0f, 0.5f, -0.5f), 1.5f, 2f, 1f);
			iLocal_826++;
			break;
		
		case 8:
			GRAPHICS::START_PETROL_TRAIL_DECALS(1f);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_7360, 1f);
			iLocal_826++;
			break;
		
		case 9:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(52.47f, 3660.36f, 38.81f, 0.5f);
			iLocal_826++;
			break;
		
		case 10:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(52.8f, 3659.22f, 38.72f, 0.5f);
			iLocal_826++;
			break;
		
		case 11:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(53.16f, 3658.02f, 38.7f, 0.5f);
			iLocal_826++;
			break;
		
		case 12:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(53.62f, 3656.85f, 38.69f, 0.5f);
			iLocal_826++;
			break;
		
		case 13:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(54.16f, 3655.95f, 38.69f, 0.5f);
			iLocal_826++;
			break;
		
		case 14:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(54.76f, 3655.08f, 38.7f, 0.5f);
			iLocal_826++;
			break;
		
		case 15:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(55.44f, 3654.26f, 38.69f, 0.5f);
			iLocal_826++;
			break;
		
		case 16:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(56.21f, 3653.11f, 38.69f, 0.5f);
			iLocal_826++;
			break;
		
		case 17:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(57.01f, 3651.88f, 38.7f, 0.5f);
			iLocal_826++;
			break;
		
		case 18:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(57.9966f, 3650.196f, 38.6798f, 0.5f);
			GRAPHICS::END_PETROL_TRAIL_DECALS();
			iLocal_826++;
			break;
		
		case 19:
			if (ENTITY::DOES_ENTITY_EXIST(Local_6159))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
				{
					if (GlobalFunc_156(Local_6159, PLAYER::PLAYER_PED_ID(), 1) > 12f)
					{
						if (FIRE::IS_ENTITY_ON_FIRE(Local_6159))
						{
							VEHICLE::EXPLODE_VEHICLE(Local_6159, 1, 0);
							iLocal_826++;
						}
					}
				}
			}
			break;
	}
}

void func_702()//Position - 0x7A093
{
	if (iLocal_813 == 0)
	{
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_830))
		{
			uLocal_830 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_armour_standard"), 30.45f, 3669.81f, 40.31f, 90.41f, 0.56f, -52.25f, 0, -1, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_831))
		{
			uLocal_831 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 66.33f, 3711.64f, 39.45f, -0.22f, 0.33f, -58.33f, 0, -1, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_832))
		{
			uLocal_832 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 14.63f, 3719.88f, 39.53f, 1.52f, 2.15f, 60.76f, 0, -1, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_833))
		{
			uLocal_833 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 46.52f, 3683.28f, 39.89f, 90.7f, 0.05f, 48.06f, 0, -1, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_834))
		{
			uLocal_834 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 66.98f, 3686.43f, 39.12f, 178.74f, -0.08f, 10.16f, 0, -1, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_835))
		{
			uLocal_835 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_assaultrifle"), 30.81f, 3669.59f, 40.26f, 94.06f, -0.32f, 79.76f, 0, 100, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_836))
		{
			uLocal_836 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_assaultrifle"), 56.63f, 3690.69f, 38.95f, -85.78f, 0.05f, 90.26f, 0, 100, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_837))
		{
			uLocal_837 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_wallet"), 57.78f, 3690.51f, 38.94f, -92.04f, 1.4f, -6.62f, 0, 3, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_838))
		{
			uLocal_838 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_wallet"), 31.08f, 3670.03f, 40.25f, -92.28f, -1.83f, -100.58f, 0, 42, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_839))
		{
			uLocal_839 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_paper_bag"), 10.93f, 3735.69f, 39.66f, 1.37f, 0.19f, 0.28f, 0, 314, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_840))
		{
			uLocal_840 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_bat"), 72.28f, 3703.08f, 39.73f, 90.25f, 2.47f, 155.49f, 0, -1, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_841))
		{
			uLocal_841 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_assaultrifle"), 63.9f, 3682.91f, 38.86f, -89.24f, 0.48f, -1.06f, 0, 50, 2, 1, 0);
		}
		iLocal_813 = 1;
	}
}

void func_703()//Position - 0x7A364
{
	int iVar0;
	
	if (iLocal_695 > 1)
	{
		func_704();
	}
	switch (iLocal_695)
	{
		case 0:
			GlobalFunc_173(&Local_6622, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			if (!func_89("T1M1_PH8"))
			{
				if (!GlobalFunc_5172(&Local_6221, 1))
				{
					if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_PH8", 7, 0, 0, 0))
					{
						iLocal_695++;
					}
				}
			}
			else
			{
				iLocal_695++;
			}
			break;
		
		case 1:
			if (!func_89("TRV_GT3"))
			{
				if (!GlobalFunc_5172(&Local_6221, 2))
				{
					func_569("TRV_GT3", 7500);
					func_88("TRV_GT3", 1);
				}
			}
			else
			{
				iLocal_6274 = MISC::GET_GAME_TIMER();
				func_88("TRV_GT3", 0);
				iLocal_695 = 99;
			}
			break;
		
		case 99:
			iLocal_695 = 2;
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_6274, MISC::GET_RANDOM_INT_IN_RANGE(18000, 20000)))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_P21", 7, 0, 0, 0))
						{
							iLocal_6274 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_695 == iVar0)
							{
								iLocal_695++;
							}
							else
							{
								iLocal_695 = iVar0;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_588(&iLocal_6274, MISC::GET_RANDOM_INT_IN_RANGE(18000, 20000)))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_P20", 7, 0, 0, 0))
						{
							iLocal_6274 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_695 == iVar0)
							{
								iLocal_695++;
							}
							else
							{
								iLocal_695 = iVar0;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_588(&iLocal_6274, MISC::GET_RANDOM_INT_IN_RANGE(14000, 20000)))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_P18", 7, 0, 0, 0))
						{
							iLocal_6274 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_695 == iVar0)
							{
								iLocal_695++;
							}
							else
							{
								iLocal_695 = iVar0;
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_588(&iLocal_6274, MISC::GET_RANDOM_INT_IN_RANGE(18000, 22000)))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_P10", 7, 0, 0, 0))
						{
							iLocal_6274 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_695 == iVar0)
							{
								iLocal_695++;
							}
							else
							{
								iLocal_695 = iVar0;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (GlobalFunc_588(&iLocal_6274, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_P23", 7, 0, 0, 0))
						{
							iLocal_6274 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_695 == iVar0)
							{
								iLocal_695++;
							}
							else
							{
								iLocal_695 = iVar0;
							}
						}
					}
				}
			}
			break;
		
		case 7:
			if (GlobalFunc_588(&iLocal_6274, MISC::GET_RANDOM_INT_IN_RANGE(15000, 23000)))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_PH9", 7, 0, 0, 0))
						{
							iLocal_6274 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_695 == iVar0)
							{
								iLocal_695++;
							}
							else
							{
								iLocal_695 = iVar0;
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (GlobalFunc_588(&iLocal_6274, MISC::GET_RANDOM_INT_IN_RANGE(14000, 22000)))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_P22", 7, 0, 0, 0))
						{
							iLocal_6274 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_695 == iVar0)
							{
								iLocal_695++;
							}
							else
							{
								iLocal_695 = iVar0;
							}
						}
					}
				}
			}
			break;
		
		case 9:
			if (GlobalFunc_588(&iLocal_6274, MISC::GET_RANDOM_INT_IN_RANGE(18000, 22000)))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_P19", 7, 0, 0, 0))
						{
							iLocal_6274 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_695 == iVar0)
							{
								iLocal_695++;
							}
							else
							{
								iLocal_695 = iVar0;
							}
						}
					}
				}
			}
			break;
		
		case 10:
			if (GlobalFunc_588(&iLocal_6274, MISC::GET_RANDOM_INT_IN_RANGE(18000, 24000)))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_DXA", 7, 0, 0, 0))
						{
							iLocal_6274 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_695 == iVar0)
							{
								iLocal_695++;
							}
							else
							{
								iLocal_695 = iVar0;
							}
						}
					}
				}
			}
			break;
		
		case 11:
			if (GlobalFunc_588(&iLocal_6274, MISC::GET_RANDOM_INT_IN_RANGE(18000, 20000)))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_DYA", 7, 0, 0, 0))
						{
							iLocal_6274 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_695 == iVar0)
							{
								iLocal_695++;
							}
							else
							{
								iLocal_695 = iVar0;
							}
						}
					}
				}
			}
			break;
	}
}

void func_704()//Position - 0x7A891
{
	if (!iLocal_7350)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[12 /*12*/], 0))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_5834[12 /*12*/], 1) < 35f || (iLocal_6554 > 3 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_5834[12 /*12*/], PLAYER::PLAYER_PED_ID(), 1)))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_5834[12 /*12*/]))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_FIG2", 8, 0, 0, 0))
						{
							iLocal_7350 = 1;
						}
					}
				}
			}
		}
	}
	if (func_89("T1M1_FIG2"))
	{
		if (!func_89("T1M1_DVA"))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[12 /*12*/], 0))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_5834[12 /*12*/], 1) < 25f)
				{
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_5834[12 /*12*/], -1))
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(Local_5834[12 /*12*/]))
						{
							if (!PED::IS_PED_INJURED(Local_1820[17 /*34*/]))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_DVA", 8, 0, 0, 0))
									{
										iLocal_6282 = MISC::GET_GAME_TIMER();
										func_88("T1M1_DVA", 1);
									}
								}
							}
						}
					}
				}
			}
		}
		else if (GlobalFunc_588(&iLocal_6282, 12000))
		{
			func_88("T1M1_DVA", 0);
		}
	}
	if (iLocal_706 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_5834[12 /*12*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[12 /*12*/], 0))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_BLOW3", 8, 0, 0, 0))
					{
						iLocal_706 = 1;
					}
				}
			}
		}
	}
	if (iLocal_6304 < 4)
	{
		if (!func_89("T1M1_METH"))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[12 /*12*/], 0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 36.9364f, 3730.9f, 38.6028f, 1) < 45f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[14]))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_6443[14]))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_METH", 8, 0, 0, 0))
								{
									iLocal_7347 = MISC::GET_GAME_TIMER();
									func_88("T1M1_METH", 1);
									func_88("T1M1_METH_ONCE", 1);
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[7]))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_6443[7]))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_METH", 8, 0, 0, 0))
								{
									iLocal_7347 = MISC::GET_GAME_TIMER();
									func_88("T1M1_METH", 1);
									func_88("T1M1_METH_ONCE", 1);
								}
							}
						}
					}
				}
			}
		}
		else if (GlobalFunc_588(&iLocal_7347, 16000))
		{
			func_88("T1M1_METH", 0);
		}
	}
	if (iLocal_6304 > 3)
	{
		if (!iLocal_7349)
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_BLOW", 8, 0, 0, 0))
				{
					iLocal_7349 = 1;
				}
			}
		}
	}
	if (!func_89("T1M1_DVA"))
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 12f))
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_BLOW2", 8, 0, 0, 0))
				{
					iLocal_7348 = MISC::GET_GAME_TIMER();
					func_88("T1M1_BLOW2", 1);
				}
			}
		}
	}
	else if (GlobalFunc_588(&iLocal_7348, 12000))
	{
		func_88("T1M1_BLOW2", 0);
	}
	if (!func_89("T1M1_DUA"))
	{
		if (!PED::IS_PED_INJURED(Local_1820[12 /*34*/]))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[12 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_1820[12 /*34*/], 0))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_1820[12 /*34*/]))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_6281 = MISC::GET_GAME_TIMER();
								func_88("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_1820[13 /*34*/]))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[13 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_1820[13 /*34*/], 0))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_1820[13 /*34*/]))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_6281 = MISC::GET_GAME_TIMER();
								func_88("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_1820[32 /*34*/]))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[32 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_1820[32 /*34*/], 0))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_1820[32 /*34*/]))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_6281 = MISC::GET_GAME_TIMER();
								func_88("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_1820[33 /*34*/]))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[33 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_1820[33 /*34*/], 0))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_1820[33 /*34*/]))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_6281 = MISC::GET_GAME_TIMER();
								func_88("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_1820[34 /*34*/]))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[34 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_1820[34 /*34*/], 0))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_1820[34 /*34*/]))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_6281 = MISC::GET_GAME_TIMER();
								func_88("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_1820[24 /*34*/]))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[24 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_1820[24 /*34*/], 0))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_1820[24 /*34*/]))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_6281 = MISC::GET_GAME_TIMER();
								func_88("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_1820[25 /*34*/]))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[25 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_1820[25 /*34*/], 0))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_1820[25 /*34*/]))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_6281 = MISC::GET_GAME_TIMER();
								func_88("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_1820[7 /*34*/]))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_1820[7 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_1820[7 /*34*/], 0))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_1820[7 /*34*/]))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_6281 = MISC::GET_GAME_TIMER();
								func_88("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
	}
	else if (GlobalFunc_588(&iLocal_6281, 12000))
	{
		func_88("T1M1_DUA", 0);
	}
}

void func_705()//Position - 0x7AF99
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_706(PLAYER::PLAYER_PED_ID(), iLocal_6572, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_MODEL(iVar0, joaat("g_m_y_lost_01")))
			{
				if (GlobalFunc_588(&iLocal_6271, 9000) || iLocal_6334 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iVar0, 0), 1) < 20f || iLocal_6334 == 0)
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						if (iVar1 == 0)
						{
							GlobalFunc_5653(iVar0, "T1M1_EJAA", "LOST1", 9);
							iLocal_6271 = MISC::GET_GAME_TIMER();
							iLocal_6334 = 1;
						}
						if (iVar1 == 1)
						{
							GlobalFunc_5653(iVar0, "T1M1_EKAA", "LOST2", 9);
							iLocal_6271 = MISC::GET_GAME_TIMER();
							iLocal_6334 = 1;
						}
						if (iVar1 == 2)
						{
							GlobalFunc_5653(iVar0, "T1M1_ELAA", "LOST3", 9);
							iLocal_6271 = MISC::GET_GAME_TIMER();
							iLocal_6334 = 1;
						}
					}
				}
			}
		}
	}
}

int func_706(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7B088
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, -1);
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

void func_707()//Position - 0x7B18B
{
	if (iLocal_6554 > 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[12 /*12*/], 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_7355 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_5834[12 /*12*/], iLocal_7355, 1) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_5834[12 /*12*/], iLocal_7355))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[12 /*12*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[12 /*12*/]);
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[12 /*12*/], 0))
		{
			if (PED::IS_PED_INJURED(Local_1820[17 /*34*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[12 /*12*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[12 /*12*/]);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[12 /*12*/], 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_5834[12 /*12*/], 75.25226f, 3649.63f, 37.52011f, 68.41589f, 3646.147f, 41.06026f, 5f, 0, 1, 0) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[12 /*12*/]))
			{
				if (!Local_1820[17 /*34*/].f_1)
				{
					if (!Local_1820[17 /*34*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_1820[17 /*34*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_5834[12 /*12*/]))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1820[17 /*34*/], Local_5834[12 /*12*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
									TASK::TASK_LEAVE_VEHICLE(0, Local_5834[12 /*12*/], 256);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
									TASK::TASK_PERFORM_SEQUENCE(Local_1820[17 /*34*/], uLocal_6565);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
									Local_1820[17 /*34*/].f_2 = 1;
								}
							}
						}
					}
					else if (func_650(Local_1820[17 /*34*/], 1, 0))
					{
						func_624(17, 3, 1, 1);
						Local_1820[17 /*34*/].f_1 = 1;
					}
				}
			}
		}
		else if (!Local_1820[17 /*34*/].f_1)
		{
			if (!Local_1820[17 /*34*/].f_2)
			{
				if (!PED::IS_PED_INJURED(Local_1820[17 /*34*/]))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
					TASK::TASK_PERFORM_SEQUENCE(Local_1820[17 /*34*/], uLocal_6565);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
					Local_1820[17 /*34*/].f_2 = 1;
				}
			}
			else if (func_650(Local_1820[17 /*34*/], 1, 0))
			{
				GlobalFunc_5130(Local_1820[17 /*34*/], "GENERIC_CURSE_HIGH", 18);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[17 /*34*/], 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[17 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 20f, 1, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[17 /*34*/], 50, 1);
				PED::SET_PED_COMBAT_RANGE(Local_1820[17 /*34*/], 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[17 /*34*/], 51, 1);
				Local_1820[17 /*34*/].f_1 = 1;
			}
		}
	}
	switch (iLocal_6554)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[12 /*12*/], 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 29.07231f, 3683.839f, 38.08233f, 38.74586f, 3665.139f, 42.13492f, 48.25f, 0, 1, 0) || (iLocal_6549 > 0 && PED::IS_PED_INJURED(Local_1820[7 /*34*/])))
				{
					if (func_628(27.5448f, 3716.177f, 39.0345f, 1f, 200f))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 25.3476f, 3659.571f, 37.75853f, 33.6828f, 3675.039f, 43.51378f, 5f, 0, 1, 0))
						{
							func_654(9);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_5834[12 /*12*/]);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5834[12 /*12*/], "TREVOR_1_ONCOMING_TRUCK_Group", 0);
							func_709(Local_1820[17 /*34*/], Local_5834[12 /*12*/]);
							VEHICLE::SET_PLAYBACK_SPEED(Local_5834[12 /*12*/], 0.55f);
							iLocal_706 = 0;
							iLocal_6554++;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 116.2513f, 3682.786f, 38.00512f, 71.23152f, 3689.022f, 42.00512f, 12.5f, 0, 1, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[12 /*12*/], 0))
					{
						if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_5834[12 /*12*/], 0), 1f))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_5834[12 /*12*/]))
							{
								VEHICLE::DELETE_VEHICLE(&(Local_5834[12 /*12*/]));
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(Local_5834[12 /*12*/]))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
				{
					if (func_708())
					{
						if (ENTITY::GET_ENTITY_HEALTH(Local_5834[12 /*12*/]) < 1000)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_5834[12 /*12*/], 500f);
							ENTITY::SET_ENTITY_HEALTH(Local_5834[12 /*12*/], 500);
							iLocal_6554 = 3;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_5834[12 /*12*/]))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_5834[12 /*12*/]) < 500)
					{
						if (func_708())
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_5834[12 /*12*/], 400f);
							ENTITY::SET_ENTITY_HEALTH(Local_5834[12 /*12*/], 400);
							iLocal_6554++;
						}
					}
				}
				else
				{
					iLocal_6554++;
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_5834[12 /*12*/]))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_5834[12 /*12*/]) < 400)
					{
						if (func_708())
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_5834[12 /*12*/], 300f);
							ENTITY::SET_ENTITY_HEALTH(Local_5834[12 /*12*/], 300);
							iLocal_6554++;
						}
					}
				}
				else
				{
					iLocal_6554++;
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_5834[12 /*12*/]))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_5834[12 /*12*/]) < 400)
					{
						if (func_708())
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[12 /*12*/]))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[12 /*12*/]);
							}
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_5834[12 /*12*/], -100f);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_5834[12 /*12*/], -500f);
							AUDIO::_0x9D3AF56E94C9AE98(Local_5834[12 /*12*/], 4000f);
							iLocal_7354 = MISC::GET_GAME_TIMER();
							iLocal_6554++;
						}
					}
				}
				else
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5834[12 /*12*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5834[12 /*12*/]);
					}
					AUDIO::_0x9D3AF56E94C9AE98(Local_5834[12 /*12*/], 4000f);
					iLocal_6554++;
				}
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(Local_5834[12 /*12*/]))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
				{
					if (!GlobalFunc_588(&iLocal_7354, 600))
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_5834[12 /*12*/], 0, 28f, 0f, 0f, 0f, 1.8f, 0f, 0, 1, 1, 1, 0, 1);
						iLocal_7354 = MISC::GET_GAME_TIMER();
						iLocal_6554++;
					}
					if (ENTITY::GET_ENTITY_HEALTH(Local_5834[12 /*12*/]) < 150)
					{
						iLocal_6554++;
					}
				}
				else
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_5834[12 /*12*/], 0, 6f, 0f, 0f, 0f, 1.8f, 0f, 0, 1, 1, 1, 0, 1);
					iLocal_6554++;
				}
			}
			break;
		
		case 6:
			if (GlobalFunc_588(&iLocal_7354, 600))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5834[12 /*12*/]))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_5834[12 /*12*/]))
					{
						VEHICLE::EXPLODE_VEHICLE(Local_5834[12 /*12*/], 1, 0);
						iLocal_6554++;
					}
				}
			}
			break;
	}
}

int func_708()//Position - 0x7B89E
{
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_7353, 0);
	if (iLocal_7353 == joaat("weapon_sawnoffshotgun") || iLocal_7353 == joaat("weapon_pumpshotgun"))
	{
		return 1;
	}
	return 0;
}

void func_709(int iParam0, int iParam1)//Position - 0x7B8D6
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_DRIVE_BY(0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 60, 0, -753768974);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				}
			}
		}
	}
}

void func_710()//Position - 0x7B941
{
	int iVar0;
	
	if (iLocal_6304 > 4 && iLocal_6304 < 11)
	{
		GlobalFunc_187();
	}
	if (iLocal_6304 > 6)
	{
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_6247))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_6247) == 9 || OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_6247) == 10)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("ent_ray_meth_dust_settle", 40.8358f, 3729.02f, 38.6786f, 0f, 0f, -63.8749f, 1065353216, 0, 0, 0);
					GlobalFunc_7621(48, 1, 0, 1, 0);
					GlobalFunc_7621(49, 1, 0, 1, 0);
				}
			}
		}
	}
	if (iLocal_6304 > 4)
	{
		if (iLocal_6246 == 4)
		{
			if (!iLocal_7356)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_SHOOTOUT_START"))
				{
					AUDIO::STOP_AUDIO_SCENE("TREVOR_1_SHOOTOUT_START");
				}
				else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SLOWMO_T1_RAYFIRE_EXPLOSION"))
				{
					AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_T1_RAYFIRE_EXPLOSION");
					AUDIO::START_AUDIO_SCENE("TREVOR_1_RAYFIRE");
					iLocal_7356 = 1;
				}
			}
		}
	}
	if (iLocal_6304 < 4)
	{
		if (!func_89("GANG ENEMY 38 TRIGGERED"))
		{
			if (!PED::IS_PED_INJURED(Local_1820[38 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 36.9364f, 3730.9f, 38.6028f, 1) < 58f)
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1820[38 /*34*/]))
					{
						if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("g_m_y_lost_01"), ENTITY::GET_ENTITY_COORDS(Local_1820[38 /*34*/], 0), 1))
						{
							if (!PED::IS_PED_INJURED(Local_1820[38 /*34*/]))
							{
								PED::SET_PED_CAN_BE_TARGETTED(Local_1820[38 /*34*/], 1);
							}
							PED::SET_PED_ACCURACY(Local_1820[38 /*34*/], 1);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 34.9035f, 3730.633f, 38.5661f, PLAYER::PLAYER_PED_ID(), 1f, 1, 1f, 1f, 1, 0, 0, -957453492, -1);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
							TASK::TASK_PERFORM_SEQUENCE(Local_1820[38 /*34*/], uLocal_6565);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1820[38 /*34*/], 34.9035f, 3730.633f, 38.5661f, 20f, 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1820[38 /*34*/], 51, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[38 /*34*/], 0);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1820[38 /*34*/], 1);
							GlobalFunc_5130(Local_1820[38 /*34*/], "GENERIC_WAR_CRY", 18);
							func_88("GANG ENEMY 38 TRIGGERED", 1);
						}
					}
				}
			}
		}
	}
	if (iLocal_6304 > 2 && iLocal_6304 < 4)
	{
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("prop_gascyl_02a"), 35.61419f, 3731.957f, 38.52788f, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[14]))
			{
				OBJECT::SET_OBJECT_TARGETTABLE(iLocal_6443[14], 1);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_6443[14], 1, 0.5f);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[14]))
		{
			OBJECT::SET_OBJECT_TARGETTABLE(iLocal_6443[14], 0);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_6443[14], 0, 0.5f);
		}
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("prop_gascyl_02a"), 39.84553f, 3735.912f, 38.52788f, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[7]))
			{
				OBJECT::SET_OBJECT_TARGETTABLE(iLocal_6443[7], 1);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_6443[7], 1, 0.5f);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[7]))
		{
			OBJECT::SET_OBJECT_TARGETTABLE(iLocal_6443[7], 0);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_6443[7], 0, 0.5f);
		}
	}
	switch (iLocal_6304)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 36.9364f, 3730.9f, 38.6028f, 1) < 90f)
			{
				if (!PED::IS_PED_INJURED(Local_1820[39 /*34*/]))
				{
					PED::SET_PED_CAN_BE_TARGETTED(Local_1820[39 /*34*/], 1);
					PED::SET_PED_COMBAT_MOVEMENT(Local_1820[39 /*34*/], 0);
					PED::SET_PED_ACCURACY(Local_1820[39 /*34*/], 1);
					TASK::TASK_COMBAT_PED(Local_1820[39 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[39 /*34*/], 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1820[39 /*34*/], 1);
				}
				iLocal_7356 = 0;
				iLocal_6304++;
			}
			break;
		
		case 1:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 36.9364f, 3730.9f, 38.6028f, 1) < 85f)
			{
				if (AUDIO::LOAD_STREAM("TREVOR_1_TRAILER_EXPLODE_MASTER", 0))
				{
					uLocal_6247 = OBJECT::GET_RAYFIRE_MAP_OBJECT(36.9364f, 3730.9f, 38.6028f, 10f, "DES_methtrailer");
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_6247))
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_6247, 4);
						iLocal_6304++;
					}
				}
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[14]) || ENTITY::DOES_ENTITY_EXIST(iLocal_6443[7]))
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("prop_gascyl_02a"), 35.61419f, 3731.957f, 38.52788f, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[14]))
					{
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_6443[14], 1);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_6443[14], 1, 0.5f);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_6443[14]);
						WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_6443[14]);
						iLocal_6304++;
					}
				}
				else if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("prop_gascyl_02a"), 39.84553f, 3735.912f, 38.52788f, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[7]))
					{
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_6443[7], 1);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_6443[7], 1, 0.5f);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_6443[7]);
						WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_6443[7]);
						iLocal_6304++;
					}
				}
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[14]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_6443[14], PLAYER::PLAYER_PED_ID(), 1))
				{
					PAD::SET_PAD_SHAKE(0, 1500, 255);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_6443[14], 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_6443[14], 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[7]))
					{
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_6443[7], 0);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_6443[7], 0, 0f);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_6443[7], 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_6443[7], 0);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_6443[7], 1);
						FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_6443[14], 0), 8, 2f, 0, 0, 0f);
						ENTITY::SET_ENTITY_HEALTH(iLocal_6443[7], 0);
					}
					if (!PED::IS_PED_INJURED(Local_1820[38 /*34*/]))
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_1820[38 /*34*/], 1);
					}
					if (!PED::IS_PED_INJURED(Local_1820[39 /*34*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[39 /*34*/], 1);
						PED::SET_PED_CAN_BE_TARGETTED(Local_1820[39 /*34*/], 1);
					}
					OBJECT::SET_OBJECT_TARGETTABLE(iLocal_6443[14], 0);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_6443[14], 0, 0f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[7]))
					{
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_6443[7], 0);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_6443[7], 0, 0f);
					}
					STREAMING::REQUEST_PTFX_ASSET();
					AUDIO::PREPARE_MUSIC_EVENT("TRV1_EXPLODE");
					iLocal_6304 = 4;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[7]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_6443[7], PLAYER::PLAYER_PED_ID(), 1))
				{
					PAD::SET_PAD_SHAKE(0, 1500, 255);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_6443[7], 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_6443[7], 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[14]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_6443[14], 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_6443[14], 0);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_6443[14], 1);
						FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_6443[7], 0), 8, 2f, 0, 0, 0f);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_6443[14], 0, 0.5f);
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_6443[14], 0);
					}
					if (!PED::IS_PED_INJURED(Local_1820[38 /*34*/]))
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_1820[38 /*34*/], 1);
					}
					if (!PED::IS_PED_INJURED(Local_1820[39 /*34*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1820[39 /*34*/], 1);
						PED::SET_PED_CAN_BE_TARGETTED(Local_1820[39 /*34*/], 1);
					}
					OBJECT::SET_OBJECT_TARGETTABLE(iLocal_6443[7], 0);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_6443[7], 0, 0f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[14]))
					{
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_6443[14], 0, 0.5f);
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_6443[14], 0);
					}
					STREAMING::REQUEST_PTFX_ASSET();
					AUDIO::PREPARE_MUSIC_EVENT("TRV1_EXPLODE");
					iLocal_6304 = 4;
				}
			}
			break;
		
		case 4:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_6247))
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_6247, 4);
				STREAMING::REQUEST_PTFX_ASSET();
				iLocal_6304++;
			}
			else
			{
				uLocal_6247 = OBJECT::GET_RAYFIRE_MAP_OBJECT(36.9364f, 3730.9f, 38.6028f, 10f, "DES_methtrailer");
			}
			break;
		
		case 5:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_6247))
			{
				iVar0 = OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_6247);
				if (iVar0 == 5)
				{
					AUDIO::PREPARE_MUSIC_EVENT("TRV1_EXPLODE");
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_EXPLODE"))
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_6247, 6);
						AUDIO::PLAY_STREAM_FROM_POSITION(30.9258f, 3735.736f, 39.6296f);
						iLocal_6305 = MISC::GET_GAME_TIMER();
						MISC::SET_TIME_SCALE(0.2f);
						fLocal_6306 = 0.2f;
						iLocal_6304++;
					}
				}
				else if (iVar0 != 4)
				{
					iLocal_6304 = 0;
				}
			}
			else
			{
				iLocal_6304 = 0;
			}
			break;
		
		case 6:
			if (GlobalFunc_588(&iLocal_6305, 120))
			{
				FIRE::ADD_EXPLOSION(37.73f, 3734.61f, 39.77f, 8, 2f, 0, 0, 0f);
				FIRE::ADD_EXPLOSION(31.0599f, 3736.056f, 39.6304f, 27, 2f, 0, 0, 0f);
				RECORDING::_0x293220DA1B46CEBC(2f, 2f, 3);
				if (!ENTITY::IS_ENTITY_DEAD(Local_1820[38 /*34*/]))
				{
					PED::SET_PED_TO_RAGDOLL(Local_1820[38 /*34*/], 5000, 5000, 2, 0, 0, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_1820[38 /*34*/], 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f), MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 3f), 6f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_1820[39 /*34*/]))
				{
					PED::SET_PED_TO_RAGDOLL(Local_1820[39 /*34*/], 5000, 5000, 2, 0, 0, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_1820[39 /*34*/], 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f), MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 3f), 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
				}
				iLocal_6304++;
				PLAYER::SPECIAL_ABILITY_CHARGE_MEDIUM(PLAYER::PLAYER_ID(), 1, 1);
				PAD::SET_PAD_SHAKE(0, 1500, 255);
			}
			break;
		
		case 7:
			if (GlobalFunc_588(&iLocal_6305, 300) || !func_628(30.8884f, 3733.926f, 39.6283f, 1f, 1120403456))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1820[38 /*34*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_1820[38 /*34*/], 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_1820[39 /*34*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_1820[39 /*34*/], 1);
				}
			}
			if (GlobalFunc_588(&iLocal_6305, 1000) || !func_628(30.8884f, 3733.926f, 39.6283f, 1f, 1120403456))
			{
				iLocal_6304++;
			}
			break;
		
		case 8:
			if (fLocal_6306 < 1f || !func_628(30.8884f, 3733.926f, 39.6283f, 1f, 1120403456))
			{
				MISC::SET_TIME_SCALE(1f);
				iLocal_6304++;
			}
			break;
		
		case 9:
			AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_T1_RAYFIRE_EXPLOSION");
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_RAYFIRE"))
			{
				AUDIO::STOP_AUDIO_SCENE("TREVOR_1_RAYFIRE");
			}
			else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_SHOOTOUT_START"))
			{
				AUDIO::START_AUDIO_SCENE("TREVOR_1_SHOOTOUT_START");
			}
			else
			{
				iLocal_6304++;
			}
			break;
		
		case 10:
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				MISC::SET_TIME_SCALE(1f);
				iLocal_6304++;
			}
			break;
	}
}

void func_711()//Position - 0x7C40D
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (!GlobalFunc_111())
		{
			if (!GlobalFunc_5172(&Local_6221, 1))
			{
				if (iLocal_7351 == 0)
				{
					if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_BIKERAG", 7, 0, 0, 0))
					{
						iLocal_7352 = MISC::GET_GAME_TIMER();
						iLocal_7351 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_7351 == 1)
	{
		if (GlobalFunc_588(&iLocal_7352, 8000))
		{
			iLocal_7351 = 0;
		}
	}
	switch (iLocal_6550)
	{
		case 0:
			iLocal_822 = MISC::GET_GAME_TIMER();
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("hexer"), 3);
			iLocal_6550++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("hexer")))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
					{
						if (GlobalFunc_588(&iLocal_822, 3000))
						{
							VEHICLE::REQUEST_VEHICLE_ASSET(joaat("hexer"), 3);
							PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(2));
							PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.8f, 1);
							if (PAD::_IS_USING_KEYBOARD(0))
							{
								GlobalFunc_159("TRV_NRAGEH1_KM", 10000);
							}
							else
							{
								GlobalFunc_159("TRV_NRAGEH1", 10000);
							}
							HUD::FLASH_ABILITY_BAR(10000);
							iLocal_822 = MISC::GET_GAME_TIMER();
							iLocal_6550++;
						}
					}
					else if (GlobalFunc_588(&iLocal_822, 30000))
					{
						VEHICLE::REQUEST_VEHICLE_ASSET(joaat("hexer"), 3);
						PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(2));
						PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.8f, 1);
						if (PAD::_IS_USING_KEYBOARD(0))
						{
							GlobalFunc_159("TRV_NRAGEH1_KM", 10000);
						}
						else
						{
							GlobalFunc_159("TRV_NRAGEH1", 10000);
						}
						HUD::FLASH_ABILITY_BAR(10000);
						iLocal_822 = MISC::GET_GAME_TIMER();
						iLocal_6550++;
					}
				}
			}
			break;
		
		case 2:
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()) || GlobalFunc_588(&iLocal_822, 20000))
			{
				GlobalFunc_159("TRV_NRAGEH2", 10000);
				iLocal_822 = MISC::GET_GAME_TIMER();
				iLocal_6550++;
			}
			break;
		
		case 3:
			if (GlobalFunc_588(&iLocal_822, 10000))
			{
				HUD::CLEAR_HELP(1);
				GlobalFunc_159("TRV_NRAGEH3", -1);
				iLocal_822 = MISC::GET_GAME_TIMER();
				iLocal_6550++;
			}
			break;
		
		case 4:
			if (GlobalFunc_588(&iLocal_822, 10000))
			{
				HUD::CLEAR_HELP(1);
				iLocal_822 = MISC::GET_GAME_TIMER();
				iLocal_6550++;
			}
			break;
		
		case 5:
			if (!func_89("TRV_GT3"))
			{
				if (!GlobalFunc_5172(&Local_6221, 2))
				{
					func_569("TRV_GT3", 7500);
					func_88("TRV_GT3", 1);
					iLocal_822 = MISC::GET_GAME_TIMER();
					iLocal_6550++;
				}
			}
			break;
		
		case 6:
			if (GlobalFunc_588(&iLocal_822, 7000))
			{
				GlobalFunc_159("TRV_LOCK_BEHIND", 10000);
				iLocal_822 = MISC::GET_GAME_TIMER();
				iLocal_6550++;
			}
			break;
		
		case 7:
			if (GlobalFunc_588(&iLocal_822, 9000))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
				{
					GlobalFunc_159("TRV_GO_ROUND", 9000);
					iLocal_822 = MISC::GET_GAME_TIMER();
					iLocal_6550++;
				}
			}
			break;
		
		case 8:
			if (GlobalFunc_588(&iLocal_822, 9000))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 57.3667f, 3699.955f, 37.75487f, 76.10999f, 3725.176f, 44.23741f, 22.75f, 0, 1, 0))
				{
					GlobalFunc_159("TRV_JUMP_OVER", 9000);
					iLocal_6550++;
				}
			}
			break;
	}
}

void func_712(int iParam0, int iParam1)//Position - 0x7C74F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		GlobalFunc_4729((*iParam0)[iVar0 /*34*/], &((iParam0[iVar0 /*34*/])->f_10), -1, 0, iParam1, 0, -1082130432, 0);
		iVar0++;
	}
}


int func_714()//Position - 0x7C8AB
{
	int iVar0;
	
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	if (ENTITY::DOES_ENTITY_EXIST(Local_852[2 /*65*/]))
	{
		if (PED::IS_PED_INJURED(Local_852[2 /*65*/]))
		{
			if (!func_89("TERRY DEATH"))
			{
				GlobalFunc_200(&Local_6622, 6);
				if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
				{
					GlobalFunc_5653(Local_852[3 /*65*/], "T1M1_GBAA", "CLAY", 11);
				}
				func_88("TERRY DEATH", 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_852[3 /*65*/]))
	{
		if (PED::IS_PED_INJURED(Local_852[3 /*65*/]))
		{
			if (!func_89("CLAY DEATH"))
			{
				GlobalFunc_200(&Local_6622, 7);
				if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
				{
					GlobalFunc_5653(Local_852[2 /*65*/], "T1M1_GCAA", "TERRY", 11);
				}
				func_88("CLAY DEATH", 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_852[2 /*65*/]))
	{
		if (PED::IS_PED_INJURED(Local_852[2 /*65*/]))
		{
			if (!func_89("CLAY DEATH"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_852[2 /*65*/], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) > 40f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_852[2 /*65*/]))
					{
						PED::DELETE_PED(&(Local_852[2 /*65*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_terry"));
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_852[3 /*65*/]))
	{
		if (PED::IS_PED_INJURED(Local_852[3 /*65*/]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_852[3 /*65*/], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) > 40f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_852[3 /*65*/]))
				{
					PED::DELETE_PED(&(Local_852[3 /*65*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_clay"));
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
	{
		ENTITY::SET_ENTITY_HEALTH(Local_852[3 /*65*/], 175);
	}
	if (!func_89("TREVOR_1_CHASE_KILL_BIKERS"))
	{
		AUDIO::START_AUDIO_SCENE("TREVOR_1_CHASE_KILL_BIKERS");
		func_88("TREVOR_1_CHASE_KILL_BIKERS", 1);
	}
	else if (PED::IS_PED_INJURED(Local_852[2 /*65*/]) && PED::IS_PED_INJURED(Local_852[3 /*65*/]))
	{
		if (!func_89("STOP_TREVOR_1_CHASE_KILL_BIKERS"))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_KILL_BIKERS"))
			{
				AUDIO::STOP_AUDIO_SCENE("TREVOR_1_CHASE_KILL_BIKERS");
				func_88("STOP_TREVOR_1_CHASE_KILL_BIKERS", 1);
			}
		}
		else if (!func_89("TREVOR_1_CHASE_FOLLOW_VAN"))
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_1_CHASE_FOLLOW_VAN");
			func_88("TREVOR_1_CHASE_FOLLOW_VAN", 1);
		}
	}
	if (iLocal_6324 == 1)
	{
		if (!iLocal_7326)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_6159))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_6159, "TREVOR_1_CHASE_VAN_Group", 0);
					iLocal_7326 = 1;
				}
			}
		}
		if (!iLocal_7327)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_6171[0 /*12*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_6171[0 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
					iLocal_7327 = 1;
				}
			}
		}
		if (!iLocal_7328)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_6171[1 /*12*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[1 /*12*/], 0))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_6171[1 /*12*/], "TREVOR_1_BIKES_GROUP", 0);
					iLocal_7328 = 1;
				}
			}
		}
	}
	if (PED::IS_PED_INJURED(Local_852[2 /*65*/]) && PED::IS_PED_INJURED(Local_852[3 /*65*/]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_6171[0 /*12*/], 0);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_6171[1 /*12*/], 0);
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(58.4031f, 3630.96f, 38.7482f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) > 100f)
	{
		func_759();
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_6270) > 200)
	{
		iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 10f, 0, GlobalFunc_2220());
		iLocal_6270 = MISC::GET_GAME_TIMER();
	}
	if (iLocal_6330 == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 48.10947f, 3642.522f, 38.33442f, 1) < 100f)
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f), 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f));
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f), 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f));
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_6529 + Vector(100f, 100f, 100f), Local_6529 - Vector(100f, 100f, 100f), 0, 1, 1, 1);
			MISC::CLEAR_AREA(Local_6529, 500f, 1, 0, 0, 0);
			iLocal_6330 = 1;
		}
	}
	func_738();
	func_737();
	func_736();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147))
		{
			func_735(iVar0);
			func_734(iVar0);
		}
	}
	if (iLocal_4342 == 0)
	{
		func_460(1, "Chase the bikers", 0, 0, 0, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f), 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f));
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f), 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f));
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_6529 + Vector(100f, 100f, 100f), Local_6529 - Vector(100f, 100f, 100f), 0, 1, 1, 1);
		MISC::CLEAR_AREA(Local_6529, 500f, 1, 0, 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(Local_852[2 /*65*/]))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_852[2 /*65*/], 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_852[3 /*65*/]))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_852[3 /*65*/], 0);
		}
		fLocal_6421 = 127000f;
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		if (!ENTITY::IS_ENTITY_DEAD(Local_6159))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_6171[0 /*12*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_6171[1 /*12*/]))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_852[2 /*65*/].f_1))
					{
						Local_852[2 /*65*/].f_1 = GlobalFunc_6797(Local_852[2 /*65*/], 1, 145);
					}
					if (!HUD::DOES_BLIP_EXIST(Local_852[3 /*65*/].f_1))
					{
						Local_852[3 /*65*/].f_1 = GlobalFunc_6797(Local_852[3 /*65*/], 1, 145);
					}
					if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852[2 /*65*/], 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_852[2 /*65*/], iLocal_6572);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6572, 1862763509);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_6572);
						PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_852[2 /*65*/], 0);
					}
					if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852[3 /*65*/], 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_852[3 /*65*/], iLocal_6572);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6572, 1862763509);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_6572);
						PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_852[3 /*65*/], 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0))
					{
						if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_852[2 /*65*/], Local_6171[0 /*12*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_852[2 /*65*/], Local_6171[0 /*12*/], -1);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[1 /*12*/], 0))
					{
						if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_852[3 /*65*/], Local_6171[1 /*12*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_852[3 /*65*/], Local_6171[1 /*12*/], -1);
							}
						}
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(202, sLocal_6415);
					VEHICLE::REQUEST_VEHICLE_RECORDING(203, sLocal_6415);
					STREAMING::REQUEST_MODEL(joaat("trflat"));
					STREAMING::REQUEST_MODEL(joaat("scrap"));
					PHYSICS::ROPE_LOAD_TEXTURES();
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6159))
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(200, sLocal_6415);
						VEHICLE::REQUEST_VEHICLE_RECORDING(204, sLocal_6415);
						VEHICLE::REQUEST_VEHICLE_RECORDING(205, sLocal_6415);
						if (((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(200, sLocal_6415) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, sLocal_6415)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(205, sLocal_6415)) && PHYSICS::ROPE_ARE_TEXTURES_LOADED())
						{
							func_733(0, 1);
							func_727(sLocal_6415, 200, 1, 1);
							func_726();
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_6159);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_6171[0 /*12*/]);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_6171[1 /*12*/]);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_6159, 200, sLocal_6415, 1);
							if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(Local_6159))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6159, 1, 1);
							}
							if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(Local_6171[0 /*12*/]))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6171[0 /*12*/], 1, 1);
							}
							if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(Local_6171[1 /*12*/]))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6171[1 /*12*/], 1, 1);
							}
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_6171[0 /*12*/], 204, sLocal_6415, 1, 0, 786468);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_6171[1 /*12*/], 205, sLocal_6415, 1, 0, 786468);
							if (iLocal_6308 == 1)
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_6171[0 /*12*/], 2400f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_6171[0 /*12*/], 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_6171[1 /*12*/], 2400f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_6171[1 /*12*/], 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_6159, 2400f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_6159, 1);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_6147, 15f);
								if (ENTITY::DOES_ENTITY_EXIST(Local_852[0 /*65*/]))
								{
									if (!PED::IS_PED_INJURED(Local_852[0 /*65*/]))
									{
										PED::SET_PED_INTO_VEHICLE(Local_852[0 /*65*/], Local_6159, -1);
									}
								}
							}
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
							if (!PED::IS_PED_INJURED(Local_5759))
							{
								PED::SET_PED_CONFIG_FLAG(Local_5759, 32, 0);
								PED::REMOVE_PED_FROM_GROUP(Local_5759);
							}
							if (!PED::IS_PED_INJURED(Local_5769))
							{
								PED::SET_PED_CONFIG_FLAG(Local_5769, 32, 0);
								PED::REMOVE_PED_FROM_GROUP(Local_5769);
							}
						}
					}
					else
					{
						iLocal_6283 = MISC::GET_GAME_TIMER();
						iLocal_6423 = 0;
						iLocal_7325 = 0;
						func_553(500);
						bLocal_699 = true;
						iLocal_816 = 0;
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), 1);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), 1);
						PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_01"), 1);
						PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_02"), 1);
						PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_03"), 1);
						iLocal_4342 = 1;
					}
				}
			}
		}
		if (!iLocal_6343)
		{
			func_453();
			iLocal_6343 = 1;
		}
	}
	if (iLocal_4342 == 1)
	{
		if (iLocal_6324 == 0)
		{
			iLocal_7326 = 0;
			iLocal_7327 = 0;
			iLocal_7328 = 0;
			iLocal_705 = 0;
			if (!func_89("TRV1_CHASING"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_CHASING"))
				{
					func_88("TRV1_CHASING", 1);
				}
			}
			GlobalFunc_173(&Local_6622, 7, Local_852[3 /*65*/], "CLAY", 0, 1);
			GlobalFunc_173(&Local_6622, 6, Local_852[2 /*65*/], "TERRY", 0, 1);
			func_500();
			func_460(1, "Chase the bikers", 0, 0, 0, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
			if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852[2 /*65*/], 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_852[2 /*65*/], iLocal_6572);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6572, 1862763509);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_6572);
				PED::SET_PED_DIES_WHEN_INJURED(Local_852[2 /*65*/], 1);
				PED::SET_PED_CONFIG_FLAG(Local_852[2 /*65*/], 188, 1);
				ENTITY::SET_ENTITY_LOD_DIST(Local_852[2 /*65*/], 250);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_852[2 /*65*/], 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_6171[0 /*12*/], 0);
					ENTITY::SET_ENTITY_LOD_DIST(Local_6171[0 /*12*/], 250);
				}
			}
			if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852[3 /*65*/], 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_852[3 /*65*/], iLocal_6572);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6572, 1862763509);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_6572);
				PED::SET_PED_DIES_WHEN_INJURED(Local_852[3 /*65*/], 1);
				PED::SET_PED_CONFIG_FLAG(Local_852[3 /*65*/], 188, 1);
				ENTITY::SET_ENTITY_LOD_DIST(Local_852[3 /*65*/], 250);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_852[3 /*65*/], 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[1 /*12*/], 0))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_6171[1 /*12*/], 0);
					ENTITY::SET_ENTITY_LOD_DIST(Local_6171[1 /*12*/], 250);
				}
			}
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
			if (!PED::IS_PED_INJURED(Local_5759))
			{
				PED::SET_PED_CONFIG_FLAG(Local_5759, 32, 0);
				PED::REMOVE_PED_FROM_GROUP(Local_5759);
			}
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				PED::SET_PED_CONFIG_FLAG(Local_5769, 32, 0);
				PED::REMOVE_PED_FROM_GROUP(Local_5769);
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol")) < 65)
				{
					WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), (65 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"))));
				}
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 65, 1, 1);
			}
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(24.5298f, 3590.733f, 0f, 147.1179f, 3772.426f, 100f, 0, 1);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(5.9328f, 3682.41f, 0f, 110.0308f, 3801.651f, 100f, 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(24.5298f, 3590.733f, 0f, 147.1179f, 3772.426f, 100f);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(5.9328f, 3682.41f, 0f, 110.0308f, 3801.651f, 100f);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f), 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f));
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f), 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f));
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_6529 + Vector(100f, 100f, 100f), Local_6529 - Vector(100f, 100f, 100f), 0, 1, 1, 1);
			MISC::CLEAR_AREA(Local_6529, 500f, 1, 0, 0, 0);
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_5769, Local_852[2 /*65*/], 4000, 0, 2);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6562))
			{
				if (!PED::IS_PED_INJURED(iLocal_6562))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_6562);
				}
				PED::DELETE_PED(&iLocal_6562);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_johnnyklebitz"));
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_johnnyklebitz"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_6563))
			{
				if (!PED::IS_PED_INJURED(iLocal_6563))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_6563);
				}
				PED::DELETE_PED(&iLocal_6563);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_ashley"));
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_ashley"));
			}
			iLocal_6344[0] = 0;
			iLocal_6344[1] = 0;
			iLocal_6344[2] = 0;
			iLocal_6344[3] = 0;
			iLocal_6344[4] = 0;
			iLocal_6350[0] = 0;
			iLocal_6350[1] = 0;
			iLocal_6277 = 0;
			iLocal_6258 = 0;
			fLocal_283 = 200f;
			bLocal_55 = true;
			PLAYER::SPECIAL_ABILITY_LOCK(GlobalFunc_4917(2));
			Local_852[2 /*65*/].f_24 = 0;
			iLocal_6324 = 1;
			iLocal_6330 = 0;
			iLocal_812 = 0;
			iLocal_7329 = 0;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (!PED::IS_PED_INJURED(Local_5769) && !PED::IS_PED_INJURED(Local_5759))
			{
				if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0) && PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0)) && PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 0))
				{
					if (!func_89("VEHICLE_JUMP"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_6147, 470.9808f, 4323.729f, 58.77616f, 450.0194f, 4341.243f, 83.47552f, 20f, 0, 1, 0))
							{
								if (!PED::IS_PED_INJURED(Local_5769))
								{
									if (GlobalFunc_111())
									{
										GlobalFunc_4935();
									}
									else if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_6147))
									{
										RECORDING::_0x293220DA1B46CEBC(3f, 6f, 2);
										GlobalFunc_5130(Local_5769, "VEHICLE_JUMP", 4);
										func_88("VEHICLE_JUMP", 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(Local_6159.f_1))
						{
							Local_6159.f_1 = GlobalFunc_6783(Local_6159, 1, 0);
						}
						else
						{
							GlobalFunc_2216(Local_6159.f_1, Local_6159, 260f, 1061158912, 0);
						}
					}
					if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
					{
						if (!HUD::DOES_BLIP_EXIST(Local_852[2 /*65*/].f_1))
						{
							Local_852[2 /*65*/].f_1 = GlobalFunc_6797(Local_852[2 /*65*/], 1, 145);
						}
						else
						{
							GlobalFunc_2216(Local_852[2 /*65*/].f_1, Local_852[2 /*65*/], 260f, 1061158912, 0);
						}
					}
					if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
					{
						if (!HUD::DOES_BLIP_EXIST(Local_852[3 /*65*/].f_1))
						{
							Local_852[3 /*65*/].f_1 = GlobalFunc_6797(Local_852[3 /*65*/], 1, 145);
						}
						else
						{
							GlobalFunc_2216(Local_852[3 /*65*/].f_1, Local_852[3 /*65*/], 260f, 1061158912, 0);
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_6147.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_6147.f_1));
					}
					if (HUD::DOES_BLIP_EXIST(Local_5769.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_5769.f_1));
					}
					if (HUD::DOES_BLIP_EXIST(Local_5759.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_5759.f_1));
					}
					if (iLocal_7329)
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						iLocal_7329 = 0;
					}
					if (func_89("KILL ON GET OUT"))
					{
						func_88("KILL ON GET OUT", 0);
					}
					if ((GlobalFunc_663("TRV_GETIN2", 0, 0) || GlobalFunc_663("TRV_BDY4", 0, 0)) || GlobalFunc_663("TRV_BDY2", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					func_724();
				}
				else
				{
					if (GlobalFunc_111())
					{
						if (!func_89("KILL ON GET OUT"))
						{
							GlobalFunc_5105();
						}
					}
					else
					{
						func_88("KILL ON GET OUT", 1);
					}
					if (HUD::DOES_BLIP_EXIST(Local_6159.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_6159.f_1));
					}
					if (HUD::DOES_BLIP_EXIST(Local_852[2 /*65*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_852[2 /*65*/].f_1));
					}
					if (HUD::DOES_BLIP_EXIST(Local_852[3 /*65*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_852[3 /*65*/].f_1));
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
						{
							if (!HUD::DOES_BLIP_EXIST(Local_6147.f_1))
							{
								Local_6147.f_1 = GlobalFunc_6783(Local_6147, 0, 0);
							}
							else if (!func_89("T1M1_GET_BACK_IN"))
							{
								func_569("TRV_GETIN2", 7500);
								func_88("T1M1_GET_BACK_IN", 1);
							}
						}
						else if (GlobalFunc_663("TRV_GETIN2", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (!PED::IS_PED_INJURED(Local_5769))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 1))
							{
								if (!iLocal_7329)
								{
									if (!GlobalFunc_111())
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_5769, 20000, 2048, 2);
										GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "T1M1_GTAA", "TREVOR", 4);
										iLocal_7329 = 1;
									}
								}
								if (!HUD::DOES_BLIP_EXIST(Local_5769.f_1))
								{
									Local_5769.f_1 = GlobalFunc_6797(Local_5769, 0, 24);
									TASK::TASK_ENTER_VEHICLE(Local_5769, Local_6147, -1, 1, 2f, 1, 0);
								}
								else
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_5769, -1794415470) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(Local_5769, Local_6147, -1, 1, 2f, 1, 0);
									}
									if (!func_89("TRV_BDY4"))
									{
										RECORDING::_0x293220DA1B46CEBC(6f, 3f, 3);
										func_569("TRV_BDY4", 7500);
										func_88("TRV_BDY4", 1);
									}
								}
							}
							else
							{
								if (GlobalFunc_663("TRV_BDY4", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (HUD::DOES_BLIP_EXIST(Local_5769.f_1))
								{
									HUD::REMOVE_BLIP(&(Local_5769.f_1));
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (!PED::IS_PED_INJURED(Local_5759))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 1))
							{
								if (!HUD::DOES_BLIP_EXIST(Local_5759.f_1))
								{
									Local_5759.f_1 = GlobalFunc_6797(Local_5759, 0, 20);
									TASK::TASK_ENTER_VEHICLE(Local_5759, Local_6147, -1, 0, 2f, 1, 0);
								}
								else
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_5759, -1794415470) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(Local_5759, Local_6147, -1, 0, 2f, 1, 0);
									}
									if (!func_89("TRV_BDY2"))
									{
										func_569("TRV_BDY2", 7500);
										func_88("TRV_BDY2", 1);
									}
								}
							}
							else
							{
								if (GlobalFunc_663("TRV_BDY2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (HUD::DOES_BLIP_EXIST(Local_5759.f_1))
								{
									HUD::REMOVE_BLIP(&(Local_5759.f_1));
								}
							}
						}
					}
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_6159))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6159))
			{
				fLocal_6576 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_6159);
				func_719(Local_6159, PLAYER::PLAYER_PED_ID(), &fLocal_6422, 63f, 34f, 80f, 0.6f, 1.4f, 1065353216, 1);
				func_658(Local_6159, fLocal_6422);
				if (!ENTITY::IS_ENTITY_DEAD(Local_6171[0 /*12*/]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[0 /*12*/]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_6171[0 /*12*/], fLocal_6422);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_6171[1 /*12*/]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[1 /*12*/]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_6171[1 /*12*/], fLocal_6422);
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 72.50677f, 3597.106f, 58.68276f, 75.93925f, 3772.75f, 25.81833f, 170f, 0, 1, 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 67.07f, 3703.85f, 39.56f, 1) > 180f)
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_6567))
						{
							GlobalFunc_5105();
							if (!GlobalFunc_5172(&Local_6221, 1))
							{
								HUD::CLEAR_PRINTS();
								if (HUD::DOES_BLIP_EXIST(Local_6159.f_1))
								{
									HUD::REMOVE_BLIP(&(Local_6159.f_1));
								}
								func_569("TRV_GETTP", 7500);
								uLocal_6567 = GlobalFunc_5104(67.07f, 3703.85f, 39.56f, 0);
							}
						}
						if (iLocal_705 == 0)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 66.10986f, 3599.583f, 27.9711f, 77.20415f, 3772.014f, 46.43766f, 163.25f, 0, 1, 0))
							{
								iLocal_705 = 1;
							}
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 67.07f, 3703.85f, 39.56f, 1) > 220f)
						{
							if (PED::IS_PED_INJURED(Local_852[2 /*65*/]) && !PED::IS_PED_INJURED(Local_852[3 /*65*/]))
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_6159) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_852[3 /*65*/]))
								{
									func_31(14);
								}
							}
							if (PED::IS_PED_INJURED(Local_852[3 /*65*/]) && !PED::IS_PED_INJURED(Local_852[2 /*65*/]))
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_6159) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_852[2 /*65*/]))
								{
									func_31(14);
								}
							}
							if (PED::IS_PED_INJURED(Local_852[3 /*65*/]) && PED::IS_PED_INJURED(Local_852[2 /*65*/]))
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_6159))
								{
									func_31(14);
								}
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_6567))
					{
						HUD::REMOVE_BLIP(&uLocal_6567);
					}
					if (GlobalFunc_663("TRV_RETTP", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
				}
				func_733(0, 1);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 109.9095f, 3633.051f, 38.25427f, 46.70765f, 3628.709f, 41.25438f, 35.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 48.10947f, 3642.522f, 38.33442f, -0.472603f, 3714.274f, 45.37389f, 35.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 105.5211f, 3622.35f, 38.25427f, 133.0189f, 3721.928f, 40.9775f, 35.5f, 0, 1, 0))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("scrap"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trflat"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_johnnyklebitz"));
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("hexer"), 3);
					if (!func_89("T1M1_PH8"))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_PH8", 7, 0, 0, 0))
						{
							func_88("T1M1_PH8", 1);
						}
					}
					if (GlobalFunc_530(Local_6147, 10f, 1, 1056964608, 0, 1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 173, 1);
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
							if (GlobalFunc_116(0))
							{
								GlobalFunc_6685(1);
							}
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0))
							{
								if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun")) > 0)
								{
									WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pumpshotgun"), 31, 0);
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 1);
								}
							}
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_6567))
						{
							HUD::REMOVE_BLIP(&uLocal_6567);
						}
						if (GlobalFunc_663("TRV_RETTP", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						iLocal_814 = 0;
						GlobalFunc_4948(&uLocal_659, 0, 0);
						func_88("DID CHASE", 1);
						iLocal_4342 = 2;
					}
				}
			}
			else if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 109.9095f, 3633.051f, 38.25427f, 46.70765f, 3628.709f, 41.25438f, 35.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 48.10947f, 3642.522f, 38.33442f, -0.472603f, 3714.274f, 45.37389f, 35.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 105.5211f, 3622.35f, 38.25427f, 133.0189f, 3721.928f, 40.9775f, 35.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 72.50677f, 3597.106f, 58.68276f, 75.93925f, 3772.75f, 25.81833f, 170f, 0, 1, 0))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("scrap"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trflat"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_johnnyklebitz"));
				if (HUD::DOES_BLIP_EXIST(uLocal_6567))
				{
					HUD::REMOVE_BLIP(&uLocal_6567);
				}
				if (GlobalFunc_663("TRV_RETTP", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				iLocal_814 = 1;
				GlobalFunc_4948(&uLocal_659, 0, 0);
				func_88("DID CHASE", 1);
				iLocal_4342 = 2;
			}
		}
		func_716(Local_6159, 1209362944, 1210002944);
		if (Local_852[2 /*65*/].f_24 == 0)
		{
			if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_6171[0 /*12*/]))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_852[2 /*65*/], Local_6171[0 /*12*/]))
					{
						WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_852[2 /*65*/], joaat("weapon_unarmed"));
						TASK::TASK_DRIVE_BY(Local_852[2 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 30f, 100, 1, -753768974);
						Local_852[2 /*65*/].f_25 = MISC::GET_GAME_TIMER();
						Local_852[2 /*65*/].f_24 = 1;
					}
				}
			}
		}
		else if (Local_852[2 /*65*/].f_24 == 1)
		{
			if (GlobalFunc_588(&(Local_852[2 /*65*/].f_25), 3000))
			{
				if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_852[2 /*65*/]);
					Local_852[2 /*65*/].f_24 = 2;
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_852[2 /*65*/].f_1))
		{
			if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_6171[0 /*12*/]))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_852[2 /*65*/], Local_6171[0 /*12*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_852[2 /*65*/], 0);
						GlobalFunc_565(494, 1, 0);
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[0 /*12*/]))
						{
							RECORDING::_0x293220DA1B46CEBC(4f, 5f, 4);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_6171[0 /*12*/]);
							ENTITY::APPLY_FORCE_TO_ENTITY(Local_6171[0 /*12*/], 0, 8f, 0f, 0f, 0f, 1.8f, 0f, 0, 1, 1, 1, 0, 1);
						}
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_852[2 /*65*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_852[2 /*65*/]);
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_6171[0 /*12*/]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[0 /*12*/]))
					{
						RECORDING::_0x293220DA1B46CEBC(4f, 5f, 4);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_6171[0 /*12*/]);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_6171[0 /*12*/], 0, 8f, 0f, 0f, 0f, 1.8f, 0f, 0, 1, 1, 1, 0, 1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_6171[0 /*12*/]))
				{
					if (HUD::DOES_BLIP_EXIST(Local_852[2 /*65*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_852[2 /*65*/].f_1));
					}
				}
			}
		}
		else if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_6171[0 /*12*/]))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_852[2 /*65*/], Local_6171[0 /*12*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_852[2 /*65*/], 0);
					GlobalFunc_565(494, 1, 0);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[0 /*12*/]))
					{
						RECORDING::_0x293220DA1B46CEBC(4f, 5f, 4);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_6171[0 /*12*/], 0, 8f, 0f, 0f, 0f, 1.8f, 0f, 0, 1, 1, 1, 0, 1);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_6171[0 /*12*/]);
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_852[2 /*65*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_852[2 /*65*/]);
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_6171[0 /*12*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[0 /*12*/]))
				{
					RECORDING::_0x293220DA1B46CEBC(4f, 5f, 4);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_6171[0 /*12*/], 0, 8f, 0f, 0f, 0f, 1.8f, 0f, 0, 1, 1, 1, 0, 1);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_6171[0 /*12*/]);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_852[2 /*65*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_852[2 /*65*/].f_1));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_852[3 /*65*/].f_1))
		{
			if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_6171[1 /*12*/]))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_852[3 /*65*/], Local_6171[1 /*12*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_852[3 /*65*/], 0);
						GlobalFunc_565(494, 1, 0);
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[1 /*12*/]))
						{
							RECORDING::_0x293220DA1B46CEBC(4f, 5f, 4);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_6171[1 /*12*/]);
						}
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_6171[1 /*12*/]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[1 /*12*/]))
					{
						RECORDING::_0x293220DA1B46CEBC(4f, 5f, 4);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_6171[1 /*12*/], 0, 8f, 0f, 0f, 0f, 1.8f, 0f, 0, 1, 1, 1, 0, 1);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_6171[1 /*12*/]);
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_852[3 /*65*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_852[3 /*65*/].f_1));
				}
			}
		}
		else if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_6171[1 /*12*/]))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_852[3 /*65*/], Local_6171[1 /*12*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_852[3 /*65*/], 0);
					GlobalFunc_565(494, 1, 0);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[1 /*12*/]))
					{
						RECORDING::_0x293220DA1B46CEBC(4f, 5f, 4);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_6171[1 /*12*/], 0, 8f, 0f, 0f, 0f, 1.8f, 0f, 0, 1, 1, 1, 0, 1);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_6171[1 /*12*/]);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_6171[1 /*12*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[1 /*12*/]))
				{
					RECORDING::_0x293220DA1B46CEBC(4f, 5f, 4);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_6171[1 /*12*/]);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_852[3 /*65*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_852[3 /*65*/].f_1));
			}
		}
		if (PED::IS_PED_INJURED(Local_852[2 /*65*/]) && PED::IS_PED_INJURED(Local_852[3 /*65*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_852[3 /*65*/]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_852[2 /*65*/]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_852[3 /*65*/].f_16);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_852[2 /*65*/].f_16);
			GlobalFunc_553(490);
		}
	}
	if (iLocal_4342 == 2)
	{
		RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
		PHYSICS::ROPE_UNLOAD_TEXTURES();
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_02"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dloader"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("biff"));
		if (HUD::DOES_BLIP_EXIST(Local_6147.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_6147.f_1));
		}
		if (HUD::DOES_BLIP_EXIST(Local_5769.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_5769.f_1));
		}
		if (HUD::DOES_BLIP_EXIST(Local_5759.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_5759.f_1));
		}
		iLocal_6536 = 0;
		iLocal_6537 = 0;
		iLocal_6324 = 0;
		func_88("DID CHASE", 1);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_6159, 0);
		if (ENTITY::DOES_ENTITY_EXIST(Local_6171[1 /*12*/]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_6171[1 /*12*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_6171[0 /*12*/]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_6171[0 /*12*/], 0);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_FOCUS_CAM_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("TREVOR_1_FOCUS_CAM_SCENE");
		}
		GlobalFunc_4948(&uLocal_659, 0, 0);
		return 1;
	}
	return 0;
}


void func_716(int iParam0, float fParam1, float fParam2)//Position - 0x7E899
{
	int iVar0;
	int iVar1;
	
	iVar1 = joaat("prop_gascyl_01a");
	if (!ENTITY::DOES_ENTITY_EXIST(Local_5834[4 /*12*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (func_717(iParam0, fParam1))
			{
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(24.5298f, 3590.733f, 0f, 147.1179f, 3772.426f, 100f, 0, 1);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(5.9328f, 3682.41f, 0f, 110.0308f, 3801.651f, 100f, 0, 1);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(24.5298f, 3590.733f, 0f, 147.1179f, 3772.426f, 100f);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(5.9328f, 3682.41f, 0f, 110.0308f, 3801.651f, 100f);
				STREAMING::REQUEST_MODEL(joaat("prop_gascyl_02a"));
				STREAMING::REQUEST_MODEL(joaat("hexer"));
				STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
				STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_02"));
				STREAMING::REQUEST_MODEL(joaat("rebel"));
				STREAMING::REQUEST_MODEL(iVar1);
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(9, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(11, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(12, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(13, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(14, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(15, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(16, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(17, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(18, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(19, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(20, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(21, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(22, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(23, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(3, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(4, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(5, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(6, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(7, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(8, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(9, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(10, "t1b");
				if (((((((((((((((((((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("hexer")) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("rebel"))) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_gascyl_02a"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "t1b"))
				{
					if (func_717(iParam0, fParam2))
					{
						func_449(4);
						iVar0 = 0;
						while (iVar0 < Local_5834)
						{
							if (iVar0 != 10 && iVar0 != 11)
							{
								if (!GlobalFunc_100(Local_5834[iVar0 /*12*/].f_2, 0f, 0f, 0f))
								{
									func_657(&(Local_5834[iVar0 /*12*/]));
									if (iVar0 == 10)
									{
										VEHICLE::SET_VEHICLE_COLOURS(Local_5834[iVar0 /*12*/], 0, 0);
									}
									if (iVar0 == 11)
									{
										VEHICLE::SET_VEHICLE_COLOURS(Local_5834[iVar0 /*12*/], 62, 62);
									}
									if (iVar0 == 12)
									{
										VEHICLE::SET_VEHICLE_COLOURS(Local_5834[iVar0 /*12*/], 10, 10);
									}
									if (iVar0 == 13)
									{
										VEHICLE::SET_VEHICLE_COLOURS(Local_5834[iVar0 /*12*/], 4, 4);
									}
									if (iVar0 == 23)
									{
										VEHICLE::SET_VEHICLE_COLOURS(Local_5834[iVar0 /*12*/], 13, 13);
									}
									if (iVar0 == 19)
									{
										VEHICLE::SET_VEHICLE_COLOURS(Local_5834[iVar0 /*12*/], 13, 13);
									}
								}
							}
							iVar0++;
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[6 /*12*/], 0))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_5834[6 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[7 /*12*/], 0))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_5834[7 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[15 /*12*/], 0))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_5834[15 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[16 /*12*/], 0))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_5834[16 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[17 /*12*/], 0))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_5834[17 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[20 /*12*/], 0))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_5834[20 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[21 /*12*/], 0))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_5834[21 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[22 /*12*/], 0))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_5834[22 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[24 /*12*/], 0))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_5834[24 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5834[25 /*12*/], 0))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_5834[25 /*12*/]));
						}
					}
				}
			}
		}
	}
}

int func_717(int iParam0, float fParam1)//Position - 0x7EE17
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
			if (fVar0 > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_719(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9)//Position - 0x7EF2B
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!fParam4 < fParam3)
	{
		fParam4 = (fParam3 - 0.1f);
	}
	if (fParam6 > fParam8)
	{
		fParam8 = fParam6;
	}
	fVar0 = (fParam7 / fParam8);
	fVar1 = (fParam6 / fParam8);
	fVar2 = (((fParam5 - fParam3) * (1f / 0.4f)) + fParam3);
	func_720(iParam0, iParam1, uParam2, fParam8, fParam4, fParam3, fVar2, fVar0, 1f, fVar1, bParam9);
}

void func_720(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x7EF8B
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
	int iVar9;
	int iVar10;
	
	if (iLocal_43 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_43 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_282;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = GlobalFunc_2916(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (GlobalFunc_5657(iParam1, iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (GlobalFunc_2915(iParam0, iParam1) < fParam5)
			{
				fVar1 = GlobalFunc_3022(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_44 = 1;
		}
		else if (iLocal_44)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_44 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *uParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_289 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_290 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				iVar9 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9))
				{
					iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_280 - fLocal_281));
							fVar1 = (fVar1 + fLocal_281);
							fLocal_279 = fVar1;
							if (fLocal_279 < fLocal_281)
							{
								fLocal_279 = fLocal_281;
							}
							if (fLocal_279 > fLocal_280)
							{
								fLocal_279 = fLocal_280;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_279);
						}
					}
				}
			}
		}
	}
}




void func_724()//Position - 0x7F3AD
{
	if (iLocal_6277 > 0)
	{
		if (!iLocal_7297[0])
		{
			if (PED::IS_PED_INJURED(Local_852[2 /*65*/]) || PED::IS_PED_INJURED(Local_852[3 /*65*/]))
			{
				if (!PED::IS_PED_INJURED(Local_5759))
				{
					if (GlobalFunc_111())
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759))
						{
							AUDIO::INTERRUPT_CONVERSATION(Local_5759, "T1M1_CSAA", "NervousRon");
							iLocal_7294 = MISC::GET_GAME_TIMER();
							iLocal_7297[0] = 1;
						}
					}
					else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_BK1", 7, 0, 0, 0))
						{
							iLocal_7294 = MISC::GET_GAME_TIMER();
							iLocal_7297[0] = 1;
						}
					}
				}
			}
		}
		else if (!iLocal_7297[1])
		{
			if (GlobalFunc_588(&iLocal_7294, 1200))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759))
				{
					if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
						iLocal_7297[1] = 1;
					}
					else
					{
						iLocal_7297[1] = 1;
					}
				}
			}
		}
		if (iLocal_7297[0])
		{
			if (!iLocal_7297[2])
			{
				if (PED::IS_PED_INJURED(Local_852[2 /*65*/]) && PED::IS_PED_INJURED(Local_852[3 /*65*/]))
				{
					if (!PED::IS_PED_INJURED(Local_5759))
					{
						if (GlobalFunc_111())
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759))
							{
								AUDIO::INTERRUPT_CONVERSATION(Local_5759, "T1M1_CRAA", "NervousRon");
								if (!ENTITY::IS_ENTITY_DEAD(Local_6159))
								{
									if (!HUD::DOES_BLIP_EXIST(Local_6159.f_1))
									{
										Local_6159.f_1 = GlobalFunc_6783(Local_6159, 0, 0);
									}
								}
								iLocal_812 = 1;
								iLocal_7297[2] = 1;
							}
						}
						else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759))
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_BK1a", 7, 0, 0, 0))
							{
								bLocal_7321 = true;
								iLocal_7294 = MISC::GET_GAME_TIMER();
								iLocal_7297[2] = 1;
							}
						}
					}
				}
			}
			else if (!iLocal_7297[3])
			{
				if (!PED::IS_PED_INJURED(Local_5759))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_CV1", 7, 0, 0, 0))
							{
								iLocal_7294 = MISC::GET_GAME_TIMER();
								iLocal_7297[3] = 1;
							}
						}
					}
				}
			}
			else if (!iLocal_7297[4])
			{
				if (GlobalFunc_588(&iLocal_7294, 1200))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
							iLocal_7297[4] = 1;
						}
						else
						{
							iLocal_7297[4] = 1;
						}
					}
				}
			}
		}
	}
	switch (iLocal_6277)
	{
		case 0:
			iLocal_6283 = MISC::GET_GAME_TIMER();
			iLocal_7297[0] = 0;
			iLocal_7297[1] = 0;
			iLocal_7297[2] = 0;
			iLocal_7297[3] = 0;
			iLocal_7297[4] = 0;
			iLocal_7308 = 0;
			iLocal_7309 = 0;
			iLocal_7310 = 0;
			iLocal_7311 = 0;
			iLocal_7312 = 0;
			iLocal_7313 = 0;
			iLocal_7314 = 0;
			iLocal_7315 = 0;
			iLocal_7316 = 0;
			iLocal_7317 = 0;
			iLocal_7318 = 0;
			iLocal_7319 = 0;
			bLocal_7320 = false;
			bLocal_7321 = false;
			iLocal_7322 = 0;
			iLocal_7323 = 0;
			iLocal_7324 = 0;
			iLocal_6277++;
			break;
		
		case 1:
			if (GlobalFunc_588(&iLocal_6283, 200))
			{
				if (!iLocal_7308)
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_PLAN1", 7, 0, 0, 0))
						{
							if (!HUD::DOES_BLIP_EXIST(Local_6159.f_1))
							{
								Local_6159.f_1 = GlobalFunc_6783(Local_6159, 0, 0);
							}
							iLocal_7308 = 1;
						}
					}
				}
				else if (!GlobalFunc_5172(&Local_6221, 2))
				{
					if (!func_89("TRV_GT2"))
					{
						func_569("TRV_GT2", 7500);
						func_88("TRV_GT2", 1);
						STREAMING::REMOVE_ANIM_DICT("misstrevor1leadinout");
						iLocal_6277++;
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]) || !PED::IS_PED_INJURED(Local_852[3 /*65*/]))
			{
				if (!func_89("T1M1_PLAN2"))
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_PLAN2", 7, 0, 0, 0))
						{
							func_88("T1M1_PLAN2", 1);
							iLocal_6277 = 99;
						}
					}
				}
			}
			else
			{
				func_88("T1M1_PLAN2", 1);
				iLocal_6277 = 99;
			}
			break;
		
		case 3:
			break;
		
		case 4:
			if (!func_89("T1M1_PH6a"))
			{
				if (iLocal_6350[0] == 1)
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_625[2], 0))
						{
							if (!PED::IS_PED_INJURED(Local_5769))
							{
								AUDIO::INTERRUPT_CONVERSATION(Local_5769, "T1M1_CVAA", "Wade");
								TASK::TASK_LOOK_AT_ENTITY(Local_5769, iLocal_625[2], 3000, 0, 2);
								func_88("T1M1_PH6a", 1);
								iLocal_6277 = 99;
							}
						}
					}
				}
			}
			if (!func_89("T1M1_PH6b"))
			{
				if (iLocal_6350[1] == 1)
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_625[3], 0))
						{
							if (!PED::IS_PED_INJURED(Local_5769))
							{
								AUDIO::INTERRUPT_CONVERSATION(Local_5769, "T1M1_CVAA", "Wade");
								TASK::TASK_LOOK_AT_ENTITY(Local_5769, iLocal_625[3], 4000, 0, 2);
								func_88("T1M1_PH6b", 1);
								iLocal_6277 = 99;
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (fLocal_6576 > 2000f)
			{
				if (!iLocal_7309)
				{
					if (!GlobalFunc_663("TRV_GT2", 0, 0))
					{
						if (!GlobalFunc_5172(&Local_6221, 1))
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_LO1", 7, 0, 0, 0))
							{
								iLocal_7309 = 1;
								iLocal_7310 = 0;
							}
						}
					}
				}
				else if (!iLocal_7310)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_TR1", 7, 0, 0, 0))
						{
							iLocal_7310 = 1;
							iLocal_6552 = MISC::GET_GAME_TIMER();
							iLocal_6277 = 99;
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_6344[0] == 1)
			{
				if (!func_89("T1M1_PH6a"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (!GlobalFunc_5172(&Local_6221, 1))
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_PH6a", 8, 0, 0, 0))
							{
								func_88("T1M1_PH6a", 1);
								iLocal_6277 = 99;
							}
						}
					}
				}
			}
			if (iLocal_6344[1] == 1)
			{
				if (!func_89("T1M1_PH7"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1554.187f, 4565.205f, 40.33238f, 1602.851f, 4569.143f, 61.20334f, 32.5f, 0, 1, 0))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (!GlobalFunc_5172(&Local_6221, 1))
							{
								if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_PH7", 8, 0, 0, 0))
								{
									func_88("T1M1_PH7", 1);
									iLocal_6277 = 99;
								}
							}
						}
					}
					else
					{
						func_88("T1M1_PH7", 1);
						iLocal_6277 = 99;
					}
				}
			}
			if (iLocal_6344[2] == 1)
			{
				if (!func_89("T1M1_CH3"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 851.4785f, 4493.243f, 66.63512f, 927.0613f, 4454.147f, 48.63412f, 42.25f, 0, 1, 0))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (!GlobalFunc_5172(&Local_6221, 1))
							{
								if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_CH3", 8, 0, 0, 0))
								{
									func_88("T1M1_CH3", 1);
									iLocal_6277 = 99;
								}
							}
						}
					}
					else
					{
						func_88("T1M1_CH3", 1);
						iLocal_6277 = 99;
					}
				}
			}
			if (iLocal_6344[3] == 1)
			{
				if (!func_89("T1M1_WRONG"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (!GlobalFunc_5172(&Local_6221, 1))
						{
							if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_WRONG", 8, 0, 0, 0))
							{
								iLocal_6277 = 99;
							}
						}
					}
				}
			}
			if (iLocal_6344[4] == 1)
			{
				if (!func_89("T1M1_PH5"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 484.5662f, 4313.896f, 63.55545f, 588.7974f, 4230.479f, 41.4734f, 68.5f, 0, 1, 0))
						{
							if (!GlobalFunc_5172(&Local_6221, 1))
							{
								if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_PH5", 8, 0, 0, 0))
								{
									iLocal_6277 = 99;
								}
							}
						}
						else
						{
							iLocal_6277 = 99;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_89("T1M1_SH1"))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5759) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
				{
					if (!GlobalFunc_5172(&Local_6221, 1))
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_SH1", 7, 0, 0, 0))
						{
							func_88("T1M1_SH1", 1);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_6159);
							}
							iLocal_7296 = MISC::GET_GAME_TIMER();
							iLocal_6277 = 99;
						}
					}
				}
			}
			break;
		
		case 99:
			if (!iLocal_7309)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
				{
					if (GlobalFunc_156(Local_6159, PLAYER::PLAYER_PED_ID(), 1) > 120f)
					{
						GlobalFunc_5105();
						iLocal_6277 = 5;
					}
				}
			}
			if (GlobalFunc_156(Local_6159, PLAYER::PLAYER_PED_ID(), 1) < 120f)
			{
				if (!func_89("T1M1_SH1"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_6159, joaat("weapon_sawnoffshotgun"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_6159, joaat("weapon_pistol"), 0))
						{
							iLocal_6277 = 7;
						}
					}
				}
				else if (GlobalFunc_588(&iLocal_7296, 12000))
				{
					func_88("T1M1_SH1", 0);
				}
				if (func_89("T1M1_SH1"))
				{
					if (GlobalFunc_588(&iLocal_6283, 14000))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
						{
							func_88("T1M1_SH1", 0);
							WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_6159);
						}
					}
				}
				if (iLocal_6350[0] == 0)
				{
					if (fLocal_6576 > 11000f && fLocal_6576 < 13500f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_625[2]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
							{
								if (GlobalFunc_156(iLocal_625[2], PLAYER::PLAYER_PED_ID(), 1) < 100f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_6147, 1522.84f, 4546.915f, 49.74072f, 1462.442f, 4495.471f, 55.65763f, 23.75f, 0, 1, 0))
								{
									GlobalFunc_5105();
									iLocal_6350[0] = 1;
									iLocal_6277 = 4;
								}
							}
						}
					}
				}
				if (iLocal_6350[1] == 0)
				{
					if (fLocal_6576 > 27032.73f && fLocal_6576 < 32271.68f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_625[3]))
						{
							if (GlobalFunc_156(iLocal_625[3], PLAYER::PLAYER_PED_ID(), 1) < 100f)
							{
								GlobalFunc_5105();
								iLocal_6350[1] = 1;
								iLocal_6277 = 4;
							}
						}
					}
				}
				if (iLocal_6344[1] == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1540.915f, 4560.515f, 60.55084f, 1608.807f, 4570.184f, 44.29767f, 23.5f, 0, 1, 0))
					{
						GlobalFunc_5105();
						iLocal_6344[1] = 1;
						iLocal_6277 = 6;
					}
				}
				if (iLocal_6344[2] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 851.4785f, 4493.243f, 66.63512f, 927.0613f, 4454.147f, 48.63412f, 42.25f, 0, 1, 0))
							{
								GlobalFunc_5105();
								iLocal_6344[2] = 1;
								iLocal_6277 = 6;
							}
						}
					}
				}
				if (iLocal_6344[3] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147))
						{
							if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1693.08f, 4644.204f, 38.85639f, 1740.775f, 4590.881f, 45.14293f, 16.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1442.973f, 4475.325f, 45.25573f, 1424.132f, 4421.522f, 57.02333f, 16.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 803.6602f, 4214.711f, 36.83533f, 724.1263f, 4179.516f, 53.70875f, 16.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 153.1442f, 4434.268f, 65.04311f, 106.765f, 4484.393f, 99.22237f, 16.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -215.0587f, 4222.676f, 32.50944f, -278.967f, 4226.646f, 56.41425f, 16.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -267.8767f, 3942.876f, 30.22438f, -322.6649f, 4011.222f, 58.2155f, 16.25f, 0, 1, 0))
							{
								GlobalFunc_5105();
								iLocal_6344[3] = 1;
								iLocal_6280 = MISC::GET_GAME_TIMER();
								iLocal_6277 = 6;
							}
						}
					}
				}
				else if (GlobalFunc_588(&iLocal_6280, 9000))
				{
					iLocal_6344[3] = 0;
				}
				if (iLocal_6344[4] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 484.5662f, 4313.896f, 63.55545f, 588.7974f, 4230.479f, 41.4734f, 68.5f, 0, 1, 0))
							{
								GlobalFunc_5105();
								iLocal_6344[4] = 1;
								iLocal_6277 = 6;
							}
						}
					}
				}
				if (iLocal_7310)
				{
					if (GlobalFunc_588(&iLocal_6552, 15000))
					{
						iLocal_7309 = 0;
						iLocal_7310 = 0;
					}
				}
				if (fLocal_6576 > 13500f)
				{
					if (!iLocal_7311)
					{
						if (func_89("T1M1_PH7") || fLocal_6576 > 31917f)
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_6221, 1))
								{
									if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_CHAT2", 7, 0, 0, 0))
									{
										iLocal_7311 = 1;
										iLocal_825 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					else if (!iLocal_7312)
					{
						if (GlobalFunc_588(&iLocal_6277, 1000))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_6221, 1))
								{
									if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_GRD", 7, 0, 0, 0))
									{
										iLocal_825 = MISC::GET_GAME_TIMER();
										iLocal_7312 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_7313)
					{
						if (func_89("T1M1_CH3") || GlobalFunc_588(&iLocal_825, 20000))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_6221, 1))
								{
									if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_GR2", 7, 0, 0, 0))
									{
										iLocal_825 = MISC::GET_GAME_TIMER();
										iLocal_7313 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_7314)
					{
						if (func_89("T1M1_CH3") || GlobalFunc_588(&iLocal_825, 15000))
						{
							if (fLocal_6576 > 101482f)
							{
								if (!GlobalFunc_111())
								{
									iLocal_825 = MISC::GET_GAME_TIMER();
									iLocal_7314 = 1;
								}
							}
						}
					}
					else if (!iLocal_7315)
					{
						if (GlobalFunc_588(&iLocal_825, 6000))
						{
							if (fLocal_6576 > 101482f)
							{
								if (!GlobalFunc_111())
								{
									iLocal_7315 = 1;
								}
							}
						}
					}
					else if (!iLocal_7316)
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_6221, 1))
							{
								iLocal_7316 = 1;
								iLocal_825 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (!iLocal_7317)
					{
						if (GlobalFunc_588(&iLocal_825, 6000))
						{
							if (GlobalFunc_7066() == 0)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_6221, 1))
									{
										if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_GR7", 7, 0, 0, 0))
										{
											iLocal_7317 = 1;
										}
									}
								}
							}
							else if (!iLocal_7318)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_6221, 1))
									{
										if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_GR6", 7, 0, 0, 0))
										{
											iLocal_7318 = 1;
											iLocal_7317 = 1;
										}
									}
								}
							}
						}
					}
					else if (!iLocal_7319)
					{
						if (GlobalFunc_588(&iLocal_825, 6000))
						{
							if (bLocal_7321)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_6221, 1))
									{
										if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_GR4", 7, 0, 0, 0))
										{
											func_88("VANNERSPLAYED", 1);
											bLocal_7320 = true;
											iLocal_7319 = 1;
											iLocal_825 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
							else
							{
								iLocal_7319 = 1;
							}
						}
					}
					else if (!iLocal_7322)
					{
						if (GlobalFunc_588(&iLocal_825, 6000))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_6221, 1))
								{
									iLocal_7322 = 1;
								}
							}
						}
					}
					else if (!iLocal_7323)
					{
						if (!bLocal_7320)
						{
							if (bLocal_7321)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_6221, 1))
									{
										if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_GR4", 7, 0, 0, 0))
										{
											iLocal_7323 = 1;
										}
									}
								}
							}
							else
							{
								iLocal_7323 = 1;
							}
						}
						else
						{
							iLocal_7323 = 1;
						}
					}
					else
					{
						if (!iLocal_7295)
						{
							if (fLocal_6576 < 166729.8f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_6221, 1))
									{
										if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_CHASE", 7, 0, 0, 0))
										{
											iLocal_7295 = 1;
											iLocal_7293 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
						else if (GlobalFunc_588(&iLocal_7293, MISC::GET_RANDOM_INT_IN_RANGE(7000, 15000)))
						{
							iLocal_7295 = 0;
						}
						if (fLocal_6576 > 166729.8f)
						{
							if (!iLocal_7324)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_6221, 1))
									{
										if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_BIK", 7, 0, 0, 0))
										{
											iLocal_7324 = 1;
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


void func_726()//Position - 0x805D2
{
	Local_454[1 /*3*/] = { 362.3041f, 4431.962f, 62.5045f };
	fLocal_125[1] = 0f;
	fLocal_148[1] = 0f;
	fLocal_171[1] = 0f;
	fLocal_194[1] = 1f;
	iLocal_328[1] = 1;
	fLocal_217[1] = 10087.1f;
	fLocal_240[1] = 0.9f;
	iLocal_579[1] = joaat("bulldozer");
	Local_454[2 /*3*/] = { 1429.402f, 4440.572f, 49.3761f };
	fLocal_125[2] = 0.0614f;
	fLocal_148[2] = -0.0066f;
	fLocal_171[2] = -0.1807f;
	fLocal_194[2] = 0.9816f;
	iLocal_328[2] = 2;
	fLocal_217[2] = 20000f;
	fLocal_240[2] = 1.1f;
	iLocal_579[2] = joaat("bison2");
	Local_454[3 /*3*/] = { -60.2279f, 4374.563f, 53.8577f };
	fLocal_125[3] = 0.0385f;
	fLocal_148[3] = 0.0081f;
	fLocal_171[3] = -0.0796f;
	fLocal_194[3] = 0.996f;
	iLocal_328[3] = 3;
	fLocal_217[3] = 115000f;
	fLocal_240[3] = 1f;
	iLocal_579[3] = joaat("emperor2");
	Local_454[4 /*3*/] = { -203.6284f, 3797.005f, 39.4701f };
	fLocal_125[4] = -0.0002f;
	fLocal_148[4] = 0.0336f;
	fLocal_171[4] = 0.1906f;
	fLocal_194[4] = 0.9811f;
	iLocal_328[4] = 4;
	fLocal_217[4] = 142000f;
	fLocal_240[4] = 0.8f;
	iLocal_579[4] = joaat("dloader");
	Local_454[5 /*3*/] = { 865.3905f, 4273.831f, 50.9768f };
	fLocal_125[5] = 0.0095f;
	fLocal_148[5] = 0.0174f;
	fLocal_171[5] = 0.0895f;
	fLocal_194[5] = 0.9958f;
	iLocal_328[5] = 5;
	fLocal_217[5] = 50000f;
	fLocal_240[5] = 1f;
	iLocal_579[5] = joaat("scrap");
	Local_454[11 /*3*/] = { -217.3212f, 4159.64f, 41.9787f };
	fLocal_125[11] = 0f;
	fLocal_148[11] = 0f;
	fLocal_171[11] = 0f;
	fLocal_194[11] = 1f;
	iLocal_328[11] = 11;
	fLocal_217[11] = 134573.8f;
	fLocal_240[11] = 1f;
	iLocal_579[11] = joaat("towtruck2");
}

void func_727(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x80815
{
	struct<3> Var0;
	
	StringCopy(&cLocal_548, sParam0, 64);
	bLocal_37 = true;
	iLocal_42 = 0;
	iLocal_399 = 0;
	iLocal_400 = 0;
	iLocal_401 = 0;
	iLocal_402 = iParam1;
	iLocal_403 = 0;
	iLocal_404 = 0;
	iLocal_405 = 0;
	iLocal_409 = 0;
	iLocal_412 = 0;
	iLocal_410 = -1;
	iLocal_411 = -1;
	iLocal_413 = 0;
	iLocal_414 = 0;
	fLocal_287 = 0f;
	fLocal_288 = 0f;
	fLocal_273 = 0f;
	iLocal_43 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_524.x = (Var0.x - 100f);
		Local_524.f_1 = (Var0.f_1 - 100f);
		Local_524.f_2 = (Var0.f_2 - 100f);
		Local_527.x = (Var0.x + 100f);
		Local_527.f_1 = (Var0.f_1 + 100f);
		Local_527.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_524, Local_527, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_564);
	GlobalFunc_2512();
	if (bParam3)
	{
		GlobalFunc_9132(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_CREATE_RANDOM_COPS(0);
	}
	func_728();
}

void func_728()//Position - 0x80937
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iLocal_605[iVar0] = 0;
		Local_416[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_61[iVar0] = 0f;
		fLocal_73[iVar0] = 0f;
		fLocal_85[iVar0] = 0f;
		fLocal_97[iVar0] = 0f;
		iLocal_292[iVar0] = 0;
		fLocal_109[iVar0] = 0f;
		iLocal_304[iVar0] = 0;
		iLocal_565[iVar0] = 0;
		iLocal_316[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_617[iVar0] = 0;
		iVar0++;
	}
	iLocal_399 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_623[iVar0] = 0;
		Local_450[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_263[iVar0] = 0f;
		fLocal_265[iVar0] = 0f;
		fLocal_267[iVar0] = 0f;
		fLocal_269[iVar0] = 0f;
		iLocal_397[iVar0] = 0;
		iLocal_577[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_648[iVar0] = 0;
		iVar0++;
	}
	iLocal_401 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iLocal_625[iVar0] = 0;
		Local_454[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_125[iVar0] = 0f;
		fLocal_148[iVar0] = 0f;
		fLocal_171[iVar0] = 0f;
		fLocal_194[iVar0] = 0f;
		iLocal_328[iVar0] = 0;
		fLocal_217[iVar0] = 0f;
		iLocal_351[iVar0] = 0;
		iLocal_579[iVar0] = 0;
		iLocal_374[iVar0] = 0;
		iVar0++;
	}
	iLocal_400 = 0;
	iLocal_403 = 0;
	iLocal_406 = 0;
	iLocal_407 = 0;
	iLocal_408 = 0;
}





void func_733(bool bParam0, bool bParam1)//Position - 0x80BE3
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_548))
	{
		iLocal_43 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_564);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_59)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_679());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_688();
			func_684();
			func_667();
		}
		else
		{
			func_661();
			func_728();
		}
		if (bParam1)
		{
			GlobalFunc_9132(0);
		}
	}
}

void func_734(int iParam0)//Position - 0x80C9F
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if ((((iParam0 == iLocal_625[1] || iParam0 == iLocal_625[2]) || iParam0 == iLocal_625[3]) || iParam0 == iLocal_625[4]) || iParam0 == iLocal_625[5])
	{
		bVar0 = true;
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_6271) > 3000 || (bVar0 && (MISC::GET_GAME_TIMER() - iLocal_6271) > 1000))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (!GlobalFunc_111())
			{
				if (((!ENTITY::IS_ENTITY_DEAD(iParam0) && iParam0 != Local_6159) && iParam0 != Local_6171[0 /*12*/]) && iParam0 != Local_6171[1 /*12*/])
				{
					bVar2 = false;
					iVar3 = 0;
					if (bVar0)
					{
						iVar3 = 1;
					}
					else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Local_6147))
					{
						bVar2 = true;
					}
					else if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) > 2f)
					{
						if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iParam0) - ENTITY::GET_ENTITY_HEADING(Local_6147))) > 60f)
						{
							iVar3 = 1;
						}
					}
					if (bVar2 || iVar3)
					{
						iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
						if (!PED::IS_PED_INJURED(iVar1))
						{
							if (bVar2)
							{
								GlobalFunc_5130(iVar1, "GENERIC_CURSE_HIGH", 5);
							}
							else
							{
								GlobalFunc_5130(iVar1, "GENERIC_INSULT_HIGH", 5);
							}
							iLocal_6271 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
}

void func_735(int iParam0)//Position - 0x80DF8
{
	int iVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_6269) > 1800)
	{
		if ((iParam0 != Local_6159 && iParam0 != Local_6171[0 /*12*/]) && iParam0 != Local_6171[1 /*12*/])
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
				if (!PED::IS_PED_INJURED(iVar0))
				{
					VEHICLE::START_VEHICLE_HORN(iParam0, 2000, 0, 0);
					iLocal_6269 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_736()//Position - 0x80E62
{
	switch (iLocal_6258)
	{
		case 0:
			iLocal_6257 = MISC::GET_GAME_TIMER();
			iLocal_6258++;
			break;
		
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 68) || PAD::IS_CONTROL_JUST_PRESSED(0, 114))
			{
				iLocal_6258 = 99;
			}
			else if (GlobalFunc_588(&iLocal_6257, 35000))
			{
				iLocal_6258++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]) || !PED::IS_PED_INJURED(Local_852[3 /*65*/]))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_7292, 0);
					if (iLocal_7292 == joaat("weapon_unarmed"))
					{
						if (!func_89("TRV_DRIVEH1"))
						{
							GlobalFunc_159("TRV_DRIVEH1", -1);
						}
					}
					else
					{
						HUD::CLEAR_HELP(1);
						if (!PAD::GET_IS_USING_ALTERNATE_DRIVEBY() && !PAD::_IS_USING_KEYBOARD(0))
						{
							GlobalFunc_159("TRV_DRIVEH2", -1);
						}
						else
						{
							GlobalFunc_159("TRV_DRIVEH3", -1);
						}
						iLocal_6258++;
					}
				}
			}
			break;
		
		case 3:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 69))
			{
				if (GlobalFunc_74("TRV_DRIVEH2") || GlobalFunc_74("TRV_DRIVEH3"))
				{
					HUD::CLEAR_HELP(1);
					iLocal_6258 = 99;
				}
			}
			break;
	}
}

void func_737()//Position - 0x80F99
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
				{
					if (!iLocal_7325)
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_5769, Local_6159, -1, 2048, 2);
						iLocal_7325 = 1;
					}
				}
			}
			else if (iLocal_7325)
			{
				if (!PED::IS_PED_INJURED(Local_5769))
				{
					TASK::TASK_CLEAR_LOOK_AT(Local_5769);
				}
				iLocal_7325 = 0;
			}
		}
	}
}

void func_738()//Position - 0x81009
{
	if (iLocal_4342 != 2)
	{
		if (fLocal_6576 > 5500f)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
				{
					GlobalFunc_10692(&uLocal_659, Local_6159, 0, 0, 1, 1, 1);
				}
			}
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_FOCUS_CAM_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_1_FOCUS_CAM_SCENE");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_FOCUS_CAM_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_FOCUS_CAM_SCENE");
	}
}





















void func_759()//Position - 0x81E3A
{
	if (iLocal_827 > 0)
	{
		if (iLocal_827 != 1)
		{
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!GlobalFunc_1533(Local_5769, Local_6147, 1))
					{
						iLocal_827 = 1;
					}
				}
			}
		}
	}
	switch (iLocal_827)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("misstrevor1ig_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1ig_2"))
			{
				iLocal_827++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0) && GlobalFunc_1533(Local_5769, Local_6147, 1))
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_6147) > 22f && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_6147))
						{
							if (fLocal_7283 > (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_6147)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_6147)))
							{
								func_88("WADE NOISE REQUIRED", 1);
								iLocal_827 = 2;
							}
						}
						else if (ENTITY::GET_ENTITY_SPEED(Local_6147) > 6f && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_6147))
						{
							if (fLocal_7283 > (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_6147)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_6147)))
							{
								func_88("WADE NOISE REQUIRED", 1);
								iLocal_827 = 3;
							}
						}
						else if (ENTITY::GET_ENTITY_SPEED(Local_6147) > 25f && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_6147))
						{
							func_88("WADE NOISE REQUIRED", 1);
							iLocal_827 = 4;
						}
						else if (ENTITY::GET_ENTITY_SPEED(Local_6147) > 10f && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_6147))
						{
							iLocal_827 = 5;
						}
						else if (ENTITY::GET_ENTITY_SPEED(Local_6147) > 27f)
						{
							func_88("WADE NOISE REQUIRED", 1);
							if (iLocal_6246 == 3)
							{
								iLocal_827 = 4;
							}
						}
						else if (ENTITY::GET_ENTITY_SPEED(Local_6147) > 10f)
						{
							if (iLocal_6246 == 3)
							{
								iLocal_827 = 5;
							}
						}
						else if (ENTITY::GET_ENTITY_SPEED(Local_6147) < 1f)
						{
							if (!MISC::IS_STRING_NULL(sLocal_7284))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5769, "misstrevor1ig_2", sLocal_7284, 1))
								{
									TASK::STOP_ANIM_TASK(Local_5769, "misstrevor1ig_2", sLocal_7284, -1056964608);
								}
							}
						}
						fLocal_7283 = (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_6147)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_6147));
					}
					else if (!MISC::IS_STRING_NULL(sLocal_7284))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5769, "misstrevor1ig_2", sLocal_7284, 1))
						{
							TASK::STOP_ANIM_TASK(Local_5769, "misstrevor1ig_2", sLocal_7284, -1056964608);
						}
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(Local_5769) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
				{
					iLocal_7285 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					if (iLocal_7285 == 0)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "impact_large_01_wade", 8f, -8f, -1, 40, 0f, 0, 0, 0);
						sLocal_7284 = "impact_large_01_wade";
						iLocal_827 = 99;
					}
					if (iLocal_7285 == 1)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "impact_large_02_wade", 8f, -8f, -1, 40, 0f, 0, 0, 0);
						sLocal_7284 = "impact_large_02_wade";
						iLocal_827 = 99;
					}
					if (iLocal_7285 == 2)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "impact_large_03_wade", 8f, -8f, -1, 40, 0f, 0, 0, 0);
						sLocal_7284 = "impact_large_03_wade";
						iLocal_827 = 99;
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(Local_5769) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
				{
					iLocal_7285 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					if (iLocal_7285 == 0)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "impact_small_01_wade", 8f, -8f, -1, 32, 0f, 0, 0, 0);
						sLocal_7284 = "impact_small_01_wade";
						iLocal_827 = 99;
					}
					if (iLocal_7285 == 1)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "impact_small_02_wade", 8f, -8f, -1, 32, 0f, 0, 0, 0);
						sLocal_7284 = "impact_small_02_wade";
						iLocal_827 = 99;
					}
					if (iLocal_7285 == 2)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "impact_small_03_wade", 8f, -8f, -1, 32, 0f, 0, 0, 0);
						sLocal_7284 = "impact_small_03_wade";
						iLocal_827 = 99;
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(Local_5769) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
				{
					iLocal_7285 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					if (iLocal_7285 == 0)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "bumps_loop_large_01_wade", 8f, -8f, -1, 32, 0f, 0, 0, 0);
						sLocal_7284 = "bumps_loop_large_01_wade";
						iLocal_827 = 99;
					}
					if (iLocal_7285 == 1)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "bumps_loop_large_02_wade", 8f, -8f, -1, 32, 0f, 0, 0, 0);
						sLocal_7284 = "bumps_loop_large_02_wade";
						iLocal_827 = 99;
					}
					if (iLocal_7285 == 2)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "impact_small_01_wade", 8f, -8f, -1, 32, 0f, 0, 0, 0);
						sLocal_7284 = "impact_small_01_wade";
						iLocal_827 = 99;
					}
					if (iLocal_7285 == 3)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "impact_small_02_wade", 8f, -8f, -1, 32, 0f, 0, 0, 0);
						sLocal_7284 = "impact_small_02_wade";
						iLocal_827 = 99;
					}
					if (iLocal_7285 == 4)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "bumps_loop_large_02_wade", 8f, -8f, -1, 32, 0f, 0, 0, 0);
						sLocal_7284 = "bumps_loop_large_02_wade";
						iLocal_827 = 99;
					}
					if (iLocal_7285 == 5)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "bumps_loop_large_01_wade", 8f, -8f, -1, 32, 0f, 0, 0, 0);
						sLocal_7284 = "bumps_loop_large_01_wade";
						iLocal_827 = 99;
					}
					if (iLocal_7285 == 6)
					{
						if (!func_89("iRandAnim6"))
						{
							TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "impact_large_01_wade", 8f, -8f, -1, 40, 0f, 0, 0, 0);
							sLocal_7284 = "impact_large_01_wade";
							func_88("iRandAnim6", 1);
							iLocal_827 = 99;
						}
					}
					if (iLocal_7285 == 7)
					{
						if (!func_89("iRandAnim7"))
						{
							TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "impact_large_02_wade", 8f, -8f, -1, 40, 0f, 0, 0, 0);
							sLocal_7284 = "impact_large_02_wade";
							func_88("iRandAnim7", 1);
							iLocal_827 = 99;
						}
					}
					if (iLocal_7285 == 8)
					{
						if (!func_89("iRandAnim8"))
						{
							TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "impact_large_03_wade", 8f, -8f, -1, 40, 0f, 0, 0, 0);
							sLocal_7284 = "impact_large_03_wade";
							func_88("iRandAnim8", 1);
							iLocal_827 = 9;
						}
					}
					if (iLocal_7285 == 9)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "impact_small_03_wade", 8f, -8f, -1, 32, 0f, 0, 0, 0);
						sLocal_7284 = "impact_small_03_wade";
						iLocal_827 = 99;
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(Local_5769) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
				{
					iLocal_7285 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					if (iLocal_7285 == 0)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "bumps_loop_small_01_wade", 8f, -8f, -1, 32, 0f, 0, 0, 0);
						sLocal_7284 = "bumps_loop_small_01_wade";
						iLocal_827 = 99;
					}
					if (iLocal_7285 == 1)
					{
						TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1ig_2", "bumps_loop_small_02_wade", 8f, -8f, -1, 32, 0f, 0, 0, 0);
						sLocal_7284 = "bumps_loop_small_02_wade";
						iLocal_827 = 99;
					}
				}
			}
			break;
		
		case 99:
			if (!GlobalFunc_111())
			{
				if (func_89("WADE NOISE REQUIRED"))
				{
					if (!func_89("WADE NOISE"))
					{
						if (!PED::IS_PED_INJURED(Local_5769))
						{
							GlobalFunc_5653(Local_5769, "T1M1_FMAA", "WADE", 3);
							func_88("WADE NOISE", 1);
							uLocal_7286 = MISC::GET_GAME_TIMER();
						}
					}
					else if (GlobalFunc_588(&uLocal_7286, MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000)))
					{
						func_88("WADE NOISE", 0);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_5769) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
				{
					if (!MISC::IS_STRING_NULL(sLocal_7284))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5769, "misstrevor1ig_2", sLocal_7284, 1))
						{
							func_88("WADE NOISE REQUIRED", 0);
							iLocal_827 = 1;
						}
					}
				}
				else if (!MISC::IS_STRING_NULL(sLocal_7284))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5769, "misstrevor1ig_2", sLocal_7284, 1))
					{
						TASK::STOP_ANIM_TASK(Local_5769, "misstrevor1ig_2", sLocal_7284, -1056964608);
					}
				}
			}
			break;
	}
}

int func_760()//Position - 0x8267B
{
	func_759();
	if (iLocal_6561 < 3)
	{
		if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
		{
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
	}
	if (iLocal_6561 < 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 79, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 286, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 287, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 4, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 5, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 6, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 3, 1);
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1976.33f, 4652.762f, 39.18322f, 1952.473f, 4637.664f, 45.6045f, 21.75f, 0, 1, 0))
		{
			if (iLocal_7290 == 0)
			{
				CAM::SET_GAMEPLAY_COORD_HINT(1965.21f, 4635.468f, 41.0095f, -1, 1500, 2000, 0);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				iLocal_7290 = 1;
			}
		}
		else if (iLocal_7290 == 1)
		{
			CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
			CAM::STOP_GAMEPLAY_HINT(0);
			iLocal_7290 = 0;
		}
	}
	if (!iLocal_6315)
	{
		if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
		{
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_6159))
		{
			Local_6159.f_6 = Local_7150.f_4;
			func_564(Local_7150.f_4);
			func_564(Local_7150);
			func_564(Local_7150.f_7);
			func_564(Local_7150.f_20);
			func_564(Local_7150.f_21);
			func_766(sLocal_6573, Local_6147.f_7);
			func_766(sLocal_6573, Local_6159.f_7);
			func_766(sLocal_6573, Local_6171[0 /*12*/].f_7);
			func_766(sLocal_6573, Local_6171[1 /*12*/].f_7);
			func_455();
			STREAMING::REQUEST_MODEL(Local_7150.f_21);
			STREAMING::REQUEST_MODEL(Local_7150.f_20);
			VEHICLE::REQUEST_VEHICLE_RECORDING(200, sLocal_6415);
			VEHICLE::REQUEST_VEHICLE_RECORDING(201, sLocal_6415);
			VEHICLE::REQUEST_VEHICLE_RECORDING(204, sLocal_6415);
			VEHICLE::REQUEST_VEHICLE_RECORDING(205, sLocal_6415);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				STREAMING::LOAD_ALL_OBJECTS_NOW();
			}
			while (!func_657(&Local_6159))
			{
				func_457(0);
			}
			while (func_657(&(Local_6171[0 /*12*/])))
			{
				func_457(0);
			}
			while (func_657(&(Local_6171[1 /*12*/])))
			{
				func_457(0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
			{
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_6159, 15f);
			}
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f), 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f));
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f), 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f));
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_6529 + Vector(100f, 100f, 100f), Local_6529 - Vector(100f, 100f, 100f), 0, 1, 1, 1);
			MISC::CLEAR_AREA(Local_6529, 500f, 1, 0, 0, 0);
			func_763(1);
			bLocal_699 = true;
			func_762();
		}
		func_454();
		func_449(3);
		if (!iLocal_6343)
		{
			func_453();
			iLocal_6343 = 1;
		}
		iLocal_6558 = 0;
		while (iLocal_6558 <= 3)
		{
			if (!PED::IS_PED_INJURED(Local_852[iLocal_6558 /*65*/]))
			{
				if (iLocal_6558 == 0 || iLocal_6558 == 1)
				{
					PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_852[iLocal_6558 /*65*/], 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852[iLocal_6558 /*65*/], 1);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_852[iLocal_6558 /*65*/], 1);
			}
			iLocal_6558++;
		}
		if (!PED::IS_PED_INJURED(Local_5759))
		{
		}
		if (!PED::IS_PED_INJURED(Local_5769))
		{
		}
		SYSTEM::SETTIMERB(0);
		iLocal_6561 = 0;
		iLocal_6315 = 1;
		func_500();
	}
	else
	{
		switch (iLocal_6561)
		{
			case 0:
				func_500();
				VEHICLE::REQUEST_VEHICLE_RECORDING(200, sLocal_6415);
				VEHICLE::REQUEST_VEHICLE_RECORDING(201, sLocal_6415);
				VEHICLE::REQUEST_VEHICLE_RECORDING(204, sLocal_6415);
				VEHICLE::REQUEST_VEHICLE_RECORDING(205, sLocal_6415);
				CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_1_P1", 8);
				PLAYER::SPECIAL_ABILITY_LOCK(GlobalFunc_4917(2));
				GlobalFunc_5105();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				GlobalFunc_173(&Local_6622, 0, Local_852[1 /*65*/], "BIKER1", 0, 1);
				GlobalFunc_173(&Local_6622, 1, Local_852[2 /*65*/], "BIKER2", 0, 1);
				iLocal_821 = 0;
				iLocal_694 = 0;
				iLocal_4342 = 0;
				iLocal_6561++;
				break;
			
			case 1:
				if (!GlobalFunc_111())
				{
					GlobalFunc_200(&Local_6622, 0);
					GlobalFunc_200(&Local_6622, 1);
					GlobalFunc_173(&Local_6622, 1, Local_852[2 /*65*/], "BIKER2", 0, 1);
					VEHICLE::REQUEST_VEHICLE_RECORDING(200, sLocal_6415);
					VEHICLE::REQUEST_VEHICLE_RECORDING(201, sLocal_6415);
					VEHICLE::REQUEST_VEHICLE_RECORDING(204, sLocal_6415);
					VEHICLE::REQUEST_VEHICLE_RECORDING(205, sLocal_6415);
					STREAMING::REMOVE_ANIM_DICT("misstrevor1");
					iLocal_6561++;
				}
				break;
			
			case 2:
				func_761();
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					GlobalFunc_200(&Local_6622, 0);
					GlobalFunc_200(&Local_6622, 1);
					iLocal_6561++;
				}
				break;
		}
		if (iLocal_6561 > 2)
		{
			if (((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(200, sLocal_6415) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, sLocal_6415)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, sLocal_6415)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(205, sLocal_6415))
			{
				func_727(sLocal_6415, 200, 1, 1);
				func_726();
				if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_852[2 /*65*/], 175);
				}
				if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_852[3 /*65*/], 175);
				}
				if (!PED::IS_PED_INJURED(Local_5759))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_5759);
				}
				if (!PED::IS_PED_INJURED(Local_5769))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_5769);
				}
				if (!PED::IS_PED_INJURED(Local_5759))
				{
				}
				if (!PED::IS_PED_INJURED(Local_5769))
				{
				}
				iLocal_6315 = 0;
				iLocal_6324 = 0;
				return 1;
			}
		}
	}
	return 0;
}

void func_761()//Position - 0x82C78
{
	iLocal_6321 = 1;
	while (iLocal_6321)
	{
		SYSTEM::WAIT(0);
		if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
		{
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		RECORDING::_0x208784099002BC30("M_MrPhilips", 0);
		if (iLocal_4342 == 0)
		{
			if (iLocal_696)
			{
				iLocal_696 = 0;
			}
			else if (iLocal_694 == 0)
			{
				if (func_89("TREVOR_1_DRIVE_TO_BIKERS"))
				{
					AUDIO::STOP_AUDIO_SCENE("TREVOR_1_DRIVE_TO_BIKERS");
				}
				iLocal_6321 = 1;
				func_454();
				STREAMING::REQUEST_ANIM_DICT("misstrevor1leadinout");
				CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_1_P1", 8);
				iLocal_703 = 0;
				iLocal_693 = 0;
				iLocal_7291 = 0;
				iLocal_694++;
			}
			else if (iLocal_694 == 1)
			{
				if (GlobalFunc_Has_Cutscene_Loaded())
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1leadinout"))
					{
						GlobalFunc_4935();
						GlobalFunc_2885();
						GlobalFunc_8380(1, 1, 1, 0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_5759))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_5759, "Ron", 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_5769))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_5769, "Wade", 0, 0, 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_6147, "Trevors_car", 0, 0, 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_6159, "Lost_Van", 0, 0, 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_6171[0 /*12*/], "Clays_bike", 0, 0, 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[1 /*12*/], 0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_6171[1 /*12*/], "Terrys_bike", 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_852[0 /*65*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_852[0 /*65*/], "Other_Lost_biker", 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_852[1 /*65*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_852[1 /*65*/], "Lost_biker", 1, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_852[2 /*65*/], "Terry", 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_852[3 /*65*/], "Clay", 0, 0, 0);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6147, 0, 0);
						if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_852[2 /*65*/], Local_6171[0 /*12*/]))
								{
									ENTITY::DETACH_ENTITY(Local_852[2 /*65*/], 0, 1);
									ENTITY::DETACH_ENTITY(Local_6171[0 /*12*/], 0, 1);
								}
							}
						}
						CUTSCENE::START_CUTSCENE(0);
						STREAMING::_0xF8155A7F03DDFC8E(0);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						else
						{
							SYSTEM::WAIT(0);
						}
						iLocal_4342 = 1;
					}
				}
			}
		}
		if (iLocal_4342 == 1)
		{
			if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_703 == 0)
				{
					RECORDING::_0x48621C9FCA3EBD28(4);
					PED::ADD_SCENARIO_BLOCKING_AREA((Local_6437.x - 100f), (Local_6437.f_1 - 100f), (Local_6437.f_2 - 100f), (Local_6437.x + 100f), (Local_6437.f_1 + 100f), (Local_6437.f_2 + 100f), 0, 1, 1, 1);
					MISC::CLEAR_AREA_OF_PEDS(Local_6437, 100f, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_6437, 200f, 0, 0, 0, 0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_6147, 0);
						VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_6147, 1);
						VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_6147, 4);
						VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_6147, 5);
						if (FIRE::IS_ENTITY_ON_FIRE(Local_6147))
						{
							FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_6147, 0), 20f);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_6147, 1000f);
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_6147, 1000f);
						}
					}
					MISC::CLEAR_AREA(1963.419f, 4644.103f, 39.7482f, 100f, 1, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_843[0]))
					{
						OBJECT::DELETE_OBJECT(&(iLocal_843[0]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f), 0, 1);
					VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f));
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_6147, 0, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_6147, 1, 0, 0f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6562))
					{
						if (!PED::IS_PED_INJURED(iLocal_6562))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_6562);
						}
						PED::DELETE_PED(&iLocal_6562);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_johnnyklebitz"));
					}
					else
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_johnnyklebitz"));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_6563))
					{
						if (!PED::IS_PED_INJURED(iLocal_6563))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_6563);
						}
						PED::DELETE_PED(&iLocal_6563);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_ashley"));
					}
					else
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_ashley"));
					}
					if (!PED::IS_PED_INJURED(Local_5759))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_5759);
					}
					if (!PED::IS_PED_INJURED(Local_5769))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_5769);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_ashley"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_johnnyklebitz"));
					PED::ADD_SCENARIO_BLOCKING_AREA(Local_6529 + Vector(100f, 100f, 100f), Local_6529 - Vector(100f, 100f, 100f), 0, 1, 1, 1);
					VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
					MISC::CLEAR_AREA(Local_6529, 500f, 1, 0, 0, 0);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_6147.f_7, sLocal_6573);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_6159.f_7, sLocal_6573);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_6171[0 /*12*/].f_7, sLocal_6573);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_6171[1 /*12*/].f_7, sLocal_6573);
					VEHICLE::REQUEST_VEHICLE_RECORDING(200, sLocal_6415);
					VEHICLE::REQUEST_VEHICLE_RECORDING(201, sLocal_6415);
					VEHICLE::REQUEST_VEHICLE_RECORDING(204, sLocal_6415);
					VEHICLE::REQUEST_VEHICLE_RECORDING(205, sLocal_6415);
					CAM::STOP_GAMEPLAY_HINT(0);
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
					iLocal_703 = 1;
				}
				else if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() < 49954)
					{
						if (!iLocal_693)
						{
							if (GlobalFunc_1080())
							{
								GlobalFunc_2787(500);
								iLocal_4342 = 3;
							}
						}
					}
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() > 22500)
			{
				if (!func_89("TRV1_START"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_START"))
					{
						func_88("TRV1_START", 1);
					}
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() > 41200)
			{
				if (!func_89("TRV1_CHASE_STARTS"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_CHASE_STARTS"))
					{
						func_88("TRV1_CHASE_STARTS", 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Other_Lost_Biker", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
				{
					if (!PED::IS_PED_INJURED(Local_852[0 /*65*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_852[0 /*65*/], Local_6159, 0))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6159, 1, 1);
							PED::SET_PED_INTO_VEHICLE(Local_852[0 /*65*/], Local_6159, -1);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_6147, -1))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, -1);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Wade", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!PED::IS_PED_INJURED(Local_5769))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_6147, 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_852[2 /*65*/]))
							{
								PED::SET_PED_INTO_VEHICLE(Local_5769, Local_6147, 1);
								if (!CAM::IS_SCREEN_FADED_OUT())
								{
									TASK::TASK_PLAY_ANIM(Local_5769, "misstrevor1leadinout", "leadout_action_wade", 1000f, -8f, -1, 0, 0f, 0, 0, 0);
								}
								TASK::TASK_LOOK_AT_ENTITY(Local_5769, Local_852[2 /*65*/], -1, 2048, 3);
								PED::REMOVE_PED_FROM_GROUP(Local_5769);
							}
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ron", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!PED::IS_PED_INJURED(Local_5759))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_6147, 0))
						{
							PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
							PED::REMOVE_PED_FROM_GROUP(Local_5759);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_car", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_6147, 0, 1);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_6147, 1, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6147, 1, 1);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TREVOR_1_LEAD_OUT_CR", Local_6147, 0, 0, 0);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_6147, 7f);
					iLocal_7291 = 1;
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (iLocal_7291 == 0)
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Local_6147, 1, 1, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lost_Van", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_6159, 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_6159, 200, sLocal_6415, 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_6159, 3000f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_6159, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lost_biker", 0))
			{
				if (!PED::IS_PED_INJURED(Local_852[1 /*65*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_852[1 /*65*/], 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Clay", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0))
				{
					if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_852[2 /*65*/], Local_6171[0 /*12*/]))
						{
							ENTITY::DETACH_ENTITY(Local_852[2 /*65*/], 1, 1);
							ENTITY::DETACH_ENTITY(Local_6171[0 /*12*/], 1, 1);
						}
						else if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_852[2 /*65*/], Local_6171[0 /*12*/], 0))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_852[2 /*65*/], 0);
								PED::SET_PED_INTO_VEHICLE(Local_852[2 /*65*/], Local_6171[0 /*12*/], -1);
							}
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Clays_bike", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[0 /*12*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_6171[0 /*12*/], 204, sLocal_6415, 1, 0, 786468);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6171[0 /*12*/], 1, 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_6171[0 /*12*/], 3000f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_6171[0 /*12*/], 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Terry", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[1 /*12*/], 0))
				{
					if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_852[3 /*65*/], Local_6171[1 /*12*/], 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_852[3 /*65*/], 0);
							PED::SET_PED_INTO_VEHICLE(Local_852[3 /*65*/], Local_6171[1 /*12*/], -1);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Terrys_bike", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[1 /*12*/], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[1 /*12*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_6171[1 /*12*/], 205, sLocal_6415, 1, 0, 786468);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6171[1 /*12*/], 1, 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_6171[1 /*12*/], 3000f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_6171[1 /*12*/], 1);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_703 == 1)
			{
				iLocal_4342 = 2;
			}
		}
		if (iLocal_4342 == 2)
		{
			if (iLocal_693)
			{
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::LOAD_SCENE(1963.419f, 4644.103f, 39.7482f);
			}
			RECORDING::_0x81CBAE94390F9F89();
			GlobalFunc_657();
			AUDIO::TRIGGER_MUSIC_EVENT("TRV1_CHASE_CS_SKIP");
			CUTSCENE::REMOVE_CUTSCENE();
			GlobalFunc_8380(0, 1, 1, 0);
			iLocal_694 = 0;
			iLocal_4342 = 0;
			iLocal_6321 = 0;
		}
		if (iLocal_4342 == 3)
		{
			CUTSCENE::STOP_CUTSCENE(0);
			iLocal_693 = 1;
			iLocal_4342 = 1;
		}
	}
}

void func_762()//Position - 0x83708
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
	{
		ENTITY::SET_ENTITY_QUATERNION(Local_6159, 0.0109f, 0.0036f, 0.6236f, 0.7816f);
		ENTITY::SET_ENTITY_HEALTH(Local_6159, 4000);
		VEHICLE::SET_VEHICLE_EXTRA(Local_6159, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_6159, 2, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_6159, 3, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_6159, 4, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_6159, 5, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_6159, 6, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_6159, 7, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_6159, 8, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_6159, 9, true);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_6159, 1);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_6159, 15f);
		ENTITY::SET_ENTITY_PROOFS(Local_6159, 0, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_763(bool bParam0)//Position - 0x837B6
{
	if (bParam0)
	{
		iLocal_6558 = 0;
		while (iLocal_6558 <= 3)
		{
			STREAMING::REQUEST_MODEL(Local_852[iLocal_6558 /*65*/].f_16);
			if (STREAMING::HAS_MODEL_LOADED(Local_852[iLocal_6558 /*65*/].f_16))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_852[iLocal_6558 /*65*/]))
				{
					func_764(&(Local_852[iLocal_6558 /*65*/]), 0);
					func_124(Local_852[iLocal_6558 /*65*/], 494);
				}
				if (iLocal_6558 > 1)
				{
					if (!PED::IS_PED_INJURED(Local_852[iLocal_6558 /*65*/]))
					{
						PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_852[iLocal_6558 /*65*/], 1);
						ENTITY::SET_ENTITY_HEALTH(Local_852[iLocal_6558 /*65*/], 150);
						PED::SET_PED_MAX_HEALTH(Local_852[iLocal_6558 /*65*/], 150);
					}
				}
			}
			else
			{
				while (!STREAMING::HAS_MODEL_LOADED(Local_852[iLocal_6558 /*65*/].f_16))
				{
					STREAMING::REQUEST_MODEL(Local_852[iLocal_6558 /*65*/].f_16);
					SYSTEM::WAIT(0);
				}
			}
			iLocal_6558++;
		}
	}
	else
	{
		iLocal_6558 = 0;
		while (iLocal_6558 <= 1)
		{
			STREAMING::REQUEST_MODEL(Local_852[iLocal_6558 /*65*/].f_16);
			if (STREAMING::HAS_MODEL_LOADED(Local_852[iLocal_6558 /*65*/].f_16))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_852[iLocal_6558 /*65*/]))
				{
					func_764(&(Local_852[iLocal_6558 /*65*/]), 0);
				}
				if (iLocal_6558 > 1)
				{
					if (!PED::IS_PED_INJURED(Local_852[iLocal_6558 /*65*/]))
					{
						PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_852[iLocal_6558 /*65*/], 1);
						ENTITY::SET_ENTITY_HEALTH(Local_852[iLocal_6558 /*65*/], 150);
						PED::SET_PED_MAX_HEALTH(Local_852[iLocal_6558 /*65*/], 150);
					}
				}
			}
			else
			{
				while (!STREAMING::HAS_MODEL_LOADED(Local_852[iLocal_6558 /*65*/].f_16))
				{
					STREAMING::REQUEST_MODEL(Local_852[iLocal_6558 /*65*/].f_16);
					SYSTEM::WAIT(0);
				}
			}
			iLocal_6558++;
		}
	}
}

void func_764(var uParam0, bool bParam1)//Position - 0x8394F
{
	STREAMING::REQUEST_MODEL(uParam0->f_16);
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_16))
	{
		*uParam0 = PED::CREATE_PED(26, uParam0->f_16, uParam0->f_2, uParam0->f_5, 1, 1);
		func_124(*uParam0, 494);
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_14, -1, 1, 1);
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_6572);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_6572);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_6572);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*uParam0, 0);
		PED::SET_PED_AS_ENEMY(*uParam0, 1);
		if (bParam1)
		{
			func_765(uParam0);
		}
	}
}

void func_765(var uParam0)//Position - 0x839DC
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		PED::SET_PED_COMBAT_ABILITY(*uParam0, uParam0->f_19);
		PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(*uParam0, uParam0->f_20, 20);
		PED::SET_PED_COMBAT_RANGE(*uParam0, uParam0->f_18);
		PED::SET_PED_ACCURACY(*uParam0, uParam0->f_21);
		PED::SET_PED_HEARING_RANGE(*uParam0, 100f);
		PED::SET_PED_SEEING_RANGE(*uParam0, 100f);
		uParam0->f_25 = 0;
		uParam0->f_26 = MISC::GET_GAME_TIMER();
		uParam0->f_24 = 0;
		if (uParam0->f_23)
		{
			TASK::REMOVE_COVER_POINT(uParam0->f_22);
			uParam0->f_23 = 0;
		}
	}
}

void func_766(char* sParam0, int iParam1)//Position - 0x83A64
{
	int iVar0;
	
	iVar0 = func_767(sParam0, iParam1);
	if (iVar0 != -1)
	{
		Local_6945[iVar0 /*4*/].f_2 = 1;
	}
}

int func_767(char* sParam0, int iParam1)//Position - 0x83A86
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = -1;
	bVar1 = false;
	iVar2 = 0;
	while (!bVar1)
	{
		if (MISC::ARE_STRINGS_EQUAL(Local_6945[iVar2 /*4*/], sParam0) && Local_6945[iVar2 /*4*/].f_1 == iParam1)
		{
			bVar1 = true;
			iVar0 = iVar2;
		}
		else
		{
			iVar2++;
			if (iVar2 >= iLocal_6944)
			{
				bVar1 = true;
			}
		}
	}
	return iVar0;
}

int func_768()//Position - 0x83ADE
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_6147))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1978.169f, 4656.045f, 37.96959f, 1948.443f, 4626.579f, 49.55375f, 24.5f, 0, 1, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 79, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 286, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 287, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 4, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 5, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 6, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 3, 1);
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10f);
					if (iLocal_7290 == 0)
					{
						if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4)
						{
							CAM::SET_GAMEPLAY_COORD_HINT(1965.21f, 4635.468f, 41.0095f, -1, 1500, 2000, 0);
							CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
							CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.2f);
							iLocal_7290 = 1;
						}
					}
					else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
					{
						CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
						CAM::STOP_GAMEPLAY_HINT(0);
						iLocal_7290 = 0;
					}
				}
				else if (iLocal_7290 == 1)
				{
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
					CAM::STOP_GAMEPLAY_HINT(0);
					iLocal_7290 = 0;
				}
			}
		}
	}
	if (!func_89("TREVOR_1_DRIVE_TO_BIKERS"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
			{
				AUDIO::START_AUDIO_SCENE("TREVOR_1_DRIVE_TO_BIKERS");
				func_88("TREVOR_1_DRIVE_TO_BIKERS", 1);
			}
		}
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	func_759();
	if (iLocal_6325 == 1)
	{
		func_776();
	}
	if (iLocal_6561 > 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
			}
		}
	}
	if (iLocal_6561 > 1)
	{
		func_774();
	}
	func_773();
	func_772();
	if (iLocal_6324 == 0)
	{
		func_500();
		func_460(0, "Get to Chase", 0, 0, 0, 1);
		PLAYER::SPECIAL_ABILITY_LOCK(GlobalFunc_4917(2));
		iLocal_6324 = 1;
	}
	if (!func_89("BUDDIES IN VEHICLE"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
		{
			if (!PED::IS_PED_INJURED(Local_5769) && !PED::IS_PED_INJURED(Local_5759))
			{
				PED::SET_PED_RESET_FLAG(Local_5769, 190, 1);
				if ((TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_5769, 2f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_5759, 2f);
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_5769, 1f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_5759, 1f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0) && PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 0))
					{
						func_88("BUDDIES IN VEHICLE", 1);
					}
				}
			}
		}
	}
	if (!iLocal_6315)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
		{
			if (!func_89("DO LOAD SCENE"))
			{
				STREAMING::LOAD_SCENE(1982.723f, 3831.495f, 31.3972f);
			}
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 1, 0, 1);
			if (!PED::IS_PED_INJURED(Local_5759) && !PED::IS_PED_INJURED(Local_5769))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5759))
					{
						ENTITY::SET_ENTITY_COORDS(Local_5759, 2000.46f, 3831.18f, 31.29f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_5759, 90.19f);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_5759, 1);
						func_127();
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_5769))
					{
						ENTITY::SET_ENTITY_COORDS(Local_5769, 1999.89f, 3829.58f, 31.3f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_5769, 91.42f);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_5769, 1);
						func_771();
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1995.97f, 3829.84f, 31.2735f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 100.81f);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(PLAYER::PLAYER_PED_ID(), 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
				}
			}
		}
		func_459();
		func_455();
		iLocal_6561 = 0;
		iLocal_7290 = 0;
		iLocal_817 = 0;
		iLocal_6325 = 0;
		bLocal_699 = true;
		iLocal_6320 = 0;
		if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			func_553(500);
			iLocal_6315 = 1;
		}
		if (!iLocal_6343)
		{
			func_453();
			iLocal_6343 = 1;
		}
	}
	else
	{
		switch (iLocal_6561)
		{
			case 0:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!PED::IS_PED_INJURED(Local_5759))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_5759);
					}
					if (!PED::IS_PED_INJURED(Local_5769))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_5769);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_5769, 1);
					}
				}
				if (!func_89("BLOOD"))
				{
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.657f, 0.566f, 126.36f, 0.07f, 3, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.589f, 0.266f, 0f, 0.01f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.612f, 0.269f, 126.36f, 0.22f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.709f, 0.396f, 126.36f, 0f, 1, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 200.36f, 0.1f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 111.36f, 0.05f, 2, 0f, "cs_trev1_blood");
					func_88("BLOOD", 1);
				}
				if (iLocal_810 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_810);
				}
				iLocal_7282 = 0;
				iLocal_701 = 0;
				bLocal_699 = true;
				iLocal_6328 = 0;
				Local_5759.f_9 = 0;
				Local_852[0 /*65*/].f_14 = joaat("weapon_assaultrifle");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
				iLocal_7289 = 0;
				iLocal_6561++;
				break;
			
			case 1:
				if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_S1", 7, 0, 0, 0))
				{
					iLocal_6561++;
				}
				break;
			
			case 2:
				func_769();
				if (func_514(&Local_6221, 1962.463f, 4646.934f, 39.753f, 0.001f, 0.001f, 2f, 1, Local_5759, Local_5769, 0, Local_6147, "TRV_GT1", Local_7150.f_117, "TRV_BDY3", "", "TRV_BDY5", "TRV_GTTT", Local_7150.f_111, 0, 1, 1, -1))
				{
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(Local_6221.f_5))
					{
						if (!GlobalFunc_5172(&Local_6221, 1))
						{
							if (!GlobalFunc_111())
							{
								if (iLocal_6320 == 0)
								{
									if (GlobalFunc_7066() == 0)
									{
										if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_AL1", 7, 0, 0, 0))
										{
											func_88("T1M1_AL1", 1);
											if (!PED::IS_PED_INJURED(Local_5769))
											{
												TASK::TASK_LOOK_AT_ENTITY(Local_5769, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
											}
											iLocal_6320 = 1;
										}
									}
									else if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_PH1", 7, 0, 0, 0))
									{
										func_88("T1M1_PH1", 1);
										iLocal_6320 = 1;
									}
								}
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1934.794f, 4634.039f, 38.48875f, 1966.493f, 4647.708f, 42.86581f, 15.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1949.083f, 4634.543f, 38.65303f, 1923.866f, 4645.179f, 42.06091f, 15.5f, 0, 1, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
							{
								if (!iLocal_817)
								{
									GlobalFunc_173(&Local_6622, 0, Local_852[1 /*65*/], "BIKER1", 0, 1);
									GlobalFunc_173(&Local_6622, 1, Local_852[2 /*65*/], "BIKER2", 0, 1);
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_MCS1_LI", 7, 0, 0, 0))
										{
											if ((!PED::IS_PED_INJURED(Local_852[1 /*65*/]) && !PED::IS_PED_INJURED(Local_852[2 /*65*/])) && !PED::IS_PED_INJURED(Local_852[3 /*65*/]))
											{
												if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
												{
													TASK::TASK_PLAY_ANIM(Local_852[2 /*65*/], "misstrevor1", "gang_chatting_leadin_b", 2f, -4f, -1, 1, 0f, 0, 0, 0);
												}
												uLocal_6262 = PED::CREATE_SYNCHRONIZED_SCENE(1967.647f, 4635.184f, 40.156f, 0f, 0f, 110f, 2);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_852[1 /*65*/], uLocal_6262, "misstrevor1", "gang_chatting_leadin_a", 2f, -4f, 0, 16, 1148846080, 0);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_852[3 /*65*/], uLocal_6262, "misstrevor1", "gang_chatting_leadin_c", 2f, -4f, 0, 16, 1148846080, 0);
												iLocal_817 = 1;
											}
										}
									}
								}
								if (ENTITY::GET_ENTITY_SPEED(Local_6147) < 10f)
								{
									iLocal_7288 = 15;
								}
								else
								{
									iLocal_7288 = 10;
								}
								if (GlobalFunc_530(Local_6147, SYSTEM::TO_FLOAT(iLocal_7288), 1, 1056964608, 0, 1))
								{
									GlobalFunc_6685(0);
									GlobalFunc_5105();
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
									if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(PLAYER::PLAYER_PED_ID(), Local_6147, -1, 0, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
											TASK::TASK_PAUSE(0, 1000);
											TASK::TASK_LEAVE_VEHICLE(0, Local_6147, 256);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
											TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_6565);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
										}
									}
									if (!PED::IS_PED_INJURED(Local_5759))
									{
										PED::REMOVE_PED_FROM_GROUP(Local_5759);
									}
									if (!PED::IS_PED_INJURED(Local_5769))
									{
										PED::REMOVE_PED_FROM_GROUP(Local_5769);
									}
									Local_5759.f_9 = 0;
									iLocal_6283 = MISC::GET_GAME_TIMER();
									HUD::REMOVE_BLIP(&(Local_6221.f_5));
									if (!PED::IS_PED_INJURED(Local_5769))
									{
										TASK::TASK_CLEAR_LOOK_AT(Local_5769);
									}
									RECORDING::_0x293220DA1B46CEBC(3f, 3f, 4);
									iLocal_6561++;
								}
							}
						}
						if (GlobalFunc_588(&iLocal_7287, 2000))
						{
							if (iLocal_7289 == 1)
							{
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								iLocal_7289 = 0;
							}
						}
					}
					if (iLocal_6561 == 2)
					{
						if (iLocal_6320 == 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
							{
								if (!PED::IS_PED_INJURED(Local_5769) && !PED::IS_PED_INJURED(Local_5759))
								{
									if ((HUD::DOES_BLIP_EXIST(Local_6221.f_5) && PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0)) && PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 0))
									{
										if (GlobalFunc_620())
										{
											HUD::CLEAR_PRINTS();
											GlobalFunc_619(0);
										}
									}
									else if (!GlobalFunc_620())
									{
										if (GlobalFunc_663(Local_7150.f_111, 0, 0))
										{
											HUD::CLEAR_PRINTS();
										}
										GlobalFunc_619(1);
									}
									else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
									{
										if (!PED::IS_PED_INJURED(Local_5769))
										{
											if (!PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 1))
											{
												if (!iLocal_7289)
												{
													TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_5769, 20000, 2048, 2);
													GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "T1M1_GSAA", "TREVOR", 4);
													iLocal_7289 = 1;
													iLocal_7287 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_5759.f_9 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2013.3f, 4635.465f, 48.70377f, 2083.67f, 4704.757f, 28.95832f, 30f, 0, 1, 0))
						{
							if (!GlobalFunc_5172(&Local_6221, 1))
							{
								if (func_508())
								{
									if (Local_5759.f_9 == 0)
									{
										if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_NR1", 7, 0, 0, 0))
										{
											Local_5759.f_9 = 1;
										}
									}
								}
							}
						}
					}
					if (Local_5759.f_9 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2000.089f, 4623.684f, 39.67076f, 1928.133f, 4592.135f, 43.34277f, 25.25f, 0, 1, 0))
						{
							if (!GlobalFunc_5172(&Local_6221, 1))
							{
								if (func_508())
								{
									if (Local_5759.f_9 == 0)
									{
										if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_NR2", 7, 0, 0, 0))
										{
											Local_5759.f_9 = 1;
										}
									}
								}
							}
						}
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(1959.78f, 4645.957f, 39.74654f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 70f)
					{
						if (iLocal_701 == 0)
						{
							iLocal_701 = 1;
							CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_1_P1", 8);
							STREAMING::_0xF8155A7F03DDFC8E(3);
						}
					}
					else if (iLocal_701 == 1)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(1959.78f, 4645.957f, 39.74654f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) > 95f)
						{
							CUTSCENE::REMOVE_CUTSCENE();
							STREAMING::_0xF8155A7F03DDFC8E(0);
							iLocal_701 = 0;
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1961.604f, 4645.741f, 39.7129f, 300f, 300f, 150f, 0, 1, 0))
					{
						if ((((((!ENTITY::DOES_ENTITY_EXIST(Local_6159) || !ENTITY::DOES_ENTITY_EXIST(Local_6171[0 /*12*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_6171[1 /*12*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_852[0 /*65*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_852[1 /*65*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_852[2 /*65*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_852[3 /*65*/]))
						{
							STREAMING::REQUEST_MODEL(Local_7150.f_4);
							STREAMING::REQUEST_MODEL(Local_7150);
							STREAMING::REQUEST_MODEL(Local_7150.f_7);
							if ((STREAMING::HAS_MODEL_LOADED(Local_7150.f_4) && STREAMING::HAS_MODEL_LOADED(Local_7150.f_4)) && STREAMING::HAS_MODEL_LOADED(Local_7150.f_4))
							{
								STREAMING::REQUEST_MODEL(joaat("ig_clay"));
								STREAMING::REQUEST_MODEL(joaat("ig_terry"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
								if ((STREAMING::HAS_MODEL_LOADED(Local_7150.f_7) && STREAMING::HAS_MODEL_LOADED(joaat("ig_clay"))) && STREAMING::HAS_MODEL_LOADED(joaat("ig_terry")))
								{
									if ((STREAMING::HAS_MODEL_LOADED(Local_7150.f_7) && STREAMING::HAS_MODEL_LOADED(joaat("ig_clay"))) && STREAMING::HAS_MODEL_LOADED(joaat("ig_terry")))
									{
										func_763(1);
									}
									STREAMING::SET_PED_POPULATION_BUDGET(2);
									STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
									if (STREAMING::HAS_MODEL_LOADED(Local_7150.f_4) && STREAMING::HAS_MODEL_LOADED(Local_7150))
									{
										if (!ENTITY::DOES_ENTITY_EXIST(Local_6159))
										{
											Local_6159 = VEHICLE::CREATE_VEHICLE(Local_6159.f_6, Local_6159.f_2, Local_6159.f_5, 1, 1);
											VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_6159, 15f);
										}
										else
										{
											func_762();
										}
										if (!ENTITY::DOES_ENTITY_EXIST(Local_6171[0 /*12*/]))
										{
											func_121(7, 0f, 0f, 0f, 0, 0);
										}
										if (!ENTITY::DOES_ENTITY_EXIST(Local_6171[1 /*12*/]))
										{
											func_121(8, 0f, 0f, 0f, 0, 0);
										}
									}
								}
							}
						}
						else if (iLocal_6325 == 0)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2015.999f, 4641.445f, 41.1899f, 50f, 50f, 50f, 0, 1, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_6159))
								{
									if ((!PED::IS_PED_INJURED(Local_852[1 /*65*/]) && !PED::IS_PED_INJURED(Local_852[2 /*65*/])) && !PED::IS_PED_INJURED(Local_852[3 /*65*/]))
									{
										STREAMING::REQUEST_ANIM_DICT("misstrevor1");
										if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01")))
										{
											if (!ENTITY::DOES_ENTITY_EXIST(iLocal_843[0]))
											{
												iLocal_843[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_beer_bot_01"), 1967.647f, 4635.184f, 40.156f, 1, 1, 0);
											}
											else if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_843[0]))
											{
												ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_843[0], Local_852[1 /*65*/], PED::GET_PED_BONE_INDEX(Local_852[1 /*65*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												ENTITY::SET_ENTITY_VISIBLE(iLocal_843[0], 1);
											}
											else if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1"))
											{
												WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Local_852[1 /*65*/], 0, 1, 1, 0);
												WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Local_852[2 /*65*/], 0, 1, 1, 0);
												WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Local_852[3 /*65*/], 0, 1, 1, 0);
												if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0))
													{
														ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_852[2 /*65*/], Local_6171[0 /*12*/], -1, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
													}
												}
												if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
												{
													PED::SET_PED_PROP_INDEX(Local_852[3 /*65*/], 0, 0, 0, false);
												}
												if (!PED::IS_PED_INJURED(Local_852[1 /*65*/]))
												{
													PED::SET_PED_COMPONENT_VARIATION(Local_852[1 /*65*/], 0, 0, 0, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_852[1 /*65*/], 3, 0, 0, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_852[1 /*65*/], 4, 0, 0, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_852[1 /*65*/], 10, 0, 0, 0);
												}
												if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
												{
													TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle01_b", 8f, -4f, -1, 0, 0f, 0, 0, 0);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle02_b", 8f, -4f, -1, 0, 0f, 0, 0, 0);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle03_b", 8f, -4f, -1, 0, 0f, 0, 0, 0);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle03_b", 8f, -4f, -1, 0, 0f, 0, 0, 0);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle01_b", 8f, -4f, -1, 0, 0f, 0, 0, 0);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle02_b", 8f, -4f, -1, 0, 0f, 0, 0, 0);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle01_b", 8f, -4f, -1, 0, 0f, 0, 0, 0);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle02_b", 8f, -8f, -1, 1, 0f, 0, 0, 0);
													TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
													TASK::TASK_PERFORM_SEQUENCE(Local_852[2 /*65*/], uLocal_6565);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
												}
												if (!PED::IS_PED_INJURED(Local_852[0 /*65*/]))
												{
													WEAPON::SET_CURRENT_PED_WEAPON(Local_852[0 /*65*/], joaat("weapon_unarmed"), 1);
													TASK::TASK_START_SCENARIO_IN_PLACE(Local_852[0 /*65*/], "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
												}
												uLocal_6262 = PED::CREATE_SYNCHRONIZED_SCENE(1967.647f, 4635.184f, 40.156f, 0f, 0f, 110f, 2);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_852[1 /*65*/], uLocal_6262, "misstrevor1", "gang_chatting_idle01_a", 1000f, -4f, 0, 16, 1148846080, 0);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_852[3 /*65*/], uLocal_6262, "misstrevor1", "gang_chatting_idle01_c", 1000f, -4f, 0, 16, 1148846080, 0);
												iLocal_6266 = 0;
												iLocal_6325 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_817)
				{
					GlobalFunc_173(&Local_6622, 0, Local_852[1 /*65*/], "BIKER1", 0, 1);
					GlobalFunc_173(&Local_6622, 1, Local_852[2 /*65*/], "BIKER2", 0, 1);
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_MCS1_LI", 7, 0, 0, 0))
						{
							if ((!PED::IS_PED_INJURED(Local_852[1 /*65*/]) && !PED::IS_PED_INJURED(Local_852[2 /*65*/])) && !PED::IS_PED_INJURED(Local_852[3 /*65*/]))
							{
								if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
								{
									TASK::TASK_PLAY_ANIM(Local_852[2 /*65*/], "misstrevor1", "gang_chatting_leadin_b", 2f, -4f, -1, 1, 0f, 0, 0, 0);
								}
								uLocal_6262 = PED::CREATE_SYNCHRONIZED_SCENE(1967.647f, 4635.184f, 40.156f, 0f, 0f, 110f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_852[1 /*65*/], uLocal_6262, "misstrevor1", "gang_chatting_leadin_a", 2f, -4f, 0, 16, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_852[3 /*65*/], uLocal_6262, "misstrevor1", "gang_chatting_leadin_c", 2f, -4f, 0, 16, 1148846080, 0);
								iLocal_817 = 1;
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0) || GlobalFunc_588(&iLocal_6283, 3000))
					{
						iLocal_6561++;
					}
				}
				break;
		}
		if (iLocal_6561 >= 3)
		{
			if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
		}
		if (iLocal_6561 >= 4)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_6568))
			{
				HUD::REMOVE_BLIP(&uLocal_6568);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_6567))
			{
				HUD::REMOVE_BLIP(&uLocal_6567);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_6569))
			{
				HUD::REMOVE_BLIP(&uLocal_6569);
			}
			iLocal_6315 = 0;
			return 1;
		}
	}
	return 0;
}

int func_769()//Position - 0x84DBF
{
	if (iLocal_6246 == 1)
	{
		switch (iLocal_6544)
		{
			case 0:
				if (func_770() == 1)
				{
					iLocal_6544++;
				}
				break;
			
			case 1:
				return 1;
				break;
		}
	}
	else if (iLocal_6246 == 3)
	{
		switch (iLocal_6544)
		{
			case 0:
				if (func_770() == 1)
				{
					iLocal_6544++;
				}
				break;
			
			case 1:
				return 1;
				break;
			}
	}
	return 0;
}

int func_770()//Position - 0x84E35
{
	int iVar0;
	
	iVar0 = iLocal_6246 + 1;
	switch (iLocal_6535)
	{
		case 0:
			if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2016.42f, 4642.44f, 40.1808f, 300f, 300f, 300f, 0, 1, 0))
				{
					iLocal_6535++;
				}
			}
			else if (iVar0 == 4)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 80.2901f, 3619.446f, 38.6997f, 300f, 300f, 300f, 0, 1, 0))
				{
					iLocal_6535++;
				}
			}
			else if (iVar0 == 6 || iVar0 == 7)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -30.5141f, 3025.337f, 39.6005f, 300f, 300f, 300f, 0, 1, 0))
				{
					iLocal_6535++;
				}
			}
			break;
		
		case 1:
			if ((iVar0 == 1 || iVar0 == 3) || iVar0 == 2)
			{
				iLocal_6535++;
			}
			else if (iVar0 == 7 || iVar0 == 7)
			{
				STREAMING::REQUEST_ANIM_DICT(Local_7150.f_22);
				if (STREAMING::HAS_ANIM_DICT_LOADED(Local_7150.f_22))
				{
					iLocal_6535++;
				}
			}
			else
			{
				iLocal_6535++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_771()//Position - 0x84F9F
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_5769))
	{
		if (!PED::IS_PED_INJURED(Local_5769))
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_5769, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5769, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5769, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5769, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5769, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5769, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5769, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5769, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5769, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5769, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5769, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_5769, 11, 0, 0, 0);
		}
	}
}

void func_772()//Position - 0x85044
{
	if (iLocal_6328 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_6563))
		{
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_6563))
			{
				if (!func_89("WIMPER"))
				{
					GlobalFunc_5653(iLocal_6563, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
					uLocal_7281 = MISC::GET_GAME_TIMER();
					func_88("WIMPER", 1);
				}
				else if (GlobalFunc_588(&uLocal_7281, MISC::GET_RANDOM_INT_IN_RANGE(0, 100)))
				{
					func_88("WIMPER", 0);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_6563))
	{
		PED::SET_PED_CAPSULE(iLocal_6563, 0.5f);
		PED::SET_PED_RESET_FLAG(iLocal_6563, 249, 1);
	}
	if (!PED::IS_PED_INJURED(iLocal_6562))
	{
		if (!PED::IS_PED_INJURED(iLocal_6563))
		{
			if ((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_6562) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_6562)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_6562)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_6563)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_6563)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_6563)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(2017.886f, 3830.87f, 30.86502f, 2017.531f, 3824.716f, 34.66686f, 6.25f, joaat("weapon_grenade"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(2017.886f, 3830.87f, 30.86502f, 2017.531f, 3824.716f, 34.66686f, 6.25f, joaat("weapon_stickybomb"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(2017.886f, 3830.87f, 30.86502f, 2017.531f, 3824.716f, 34.66686f, 6.25f, joaat("weapon_smokegrenade"), 0)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_6563, 2f, 2f, 3f, 0, 1, 0)) || PED::IS_PED_BEING_STUNNED(iLocal_6562, 0))
			{
				if (iLocal_6328 == 0)
				{
					if (!PED::IS_PED_RAGDOLL(iLocal_6563))
					{
						if (!PED::IS_PED_FLEEING(iLocal_6563))
						{
							uLocal_6268 = PED::CREATE_SYNCHRONIZED_SCENE(2017.841f, 3828.193f, 31.52f, 0f, 0f, -4f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6563, uLocal_6268, "misstrevor1", "stand_ashley", 8f, -8f, 1, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_6268, 0);
							ENTITY::SET_ENTITY_HEALTH(iLocal_6562, 0);
							iLocal_6328 = 1;
						}
					}
				}
				ENTITY::SET_ENTITY_HEALTH(iLocal_6562, 0);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_6562, 0);
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_6563))
	{
		if (!PED::IS_PED_RAGDOLL(iLocal_6563))
		{
			if (iLocal_6328 == 0)
			{
				uLocal_6268 = PED::CREATE_SYNCHRONIZED_SCENE(2017.841f, 3828.193f, 31.52f, 0f, 0f, -4f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6563, uLocal_6268, "misstrevor1", "stand_ashley", 8f, -8f, 1, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_6268, 0);
				iLocal_6328 = 1;
			}
		}
	}
	if (iLocal_6328 == 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_6563))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6268))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_6268) == 1f)
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_6563, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
				}
			}
		}
	}
	if (iLocal_6561 > 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6563))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_6563, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) > 125f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_6563))
				{
					PED::DELETE_PED(&iLocal_6563);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_ashley"));
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6562))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_6562, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) > 125f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_6562))
				{
					PED::DELETE_PED(&iLocal_6562);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_johnnyklebitz"));
				}
			}
		}
	}
}

void func_773()//Position - 0x853B7
{
	switch (iLocal_824)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("misstrevor1");
			if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1"))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6267))
				{
					if (!PED::IS_PED_INJURED(iLocal_6562) && !PED::IS_PED_INJURED(iLocal_6563))
					{
						uLocal_6267 = PED::CREATE_SYNCHRONIZED_SCENE(2017.841f, 3828.193f, 31.445f, -1f, -4f, -4f, 2);
						if (!PED::IS_PED_INJURED(iLocal_6562))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6562, uLocal_6267, "misstrevor1", "mr_philips_idle_johnny", 1000f, -1000f, 1, 0, 1148846080, 0);
							TASK::TASK_PLAY_ANIM(iLocal_6562, "FACIALS@GEN_MALE@BASE", "dead_1", 8f, -8f, -1, 33, 0f, 0, 0, 0);
							ENTITY::SET_ENTITY_HEALTH(iLocal_6562, 101);
							AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_6562, 1);
							AUDIO::STOP_PED_SPEAKING(iLocal_6562, 1);
							PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_6562, 0);
							PED::SET_PED_DIES_WHEN_INJURED(iLocal_6562, 1);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_6562, 0, 1, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6562, 1);
							PED::SET_PED_CONFIG_FLAG(iLocal_6562, 118, 0);
							PED::SET_PED_CONFIG_FLAG(iLocal_6562, 208, 1);
							TASK::TASK_PLAY_ANIM(iLocal_6562, "FACIALS@GEN_MALE@BASE", "dead_1", 8f, -8f, -1, 33, 0f, 0, 0, 0);
							Local_1765[0 /*18*/].f_1 = 1110;
							Local_1765[0 /*18*/].f_2 = { 2018.58f, 3828.41f, 31.61f };
							Local_1765[0 /*18*/].f_5 = { 0f, 0f, -1f };
							Local_1765[0 /*18*/].f_8 = { GlobalFunc_107(0f, 1f, 0f) };
							Local_1765[0 /*18*/].f_11 = 0.8f;
							Local_1765[0 /*18*/].f_12 = 0.8f;
							Local_1765[0 /*18*/].f_13 = 1f;
							Local_1765[0 /*18*/].f_14 = -1f;
							Local_1765[0 /*18*/].f_15 = 0.3f;
							Local_1765[0 /*18*/].f_17 = 0;
							Local_1765[1 /*18*/].f_1 = 1015;
							Local_1765[1 /*18*/].f_2 = { 2018.69f, 3827.87f, 31.63f };
							Local_1765[1 /*18*/].f_5 = { 0f, 0f, -1f };
							Local_1765[1 /*18*/].f_8 = { GlobalFunc_107(0f, 1f, 0f) };
							Local_1765[1 /*18*/].f_11 = 0.9f;
							Local_1765[1 /*18*/].f_12 = 0.8f;
							Local_1765[1 /*18*/].f_13 = 1f;
							Local_1765[1 /*18*/].f_14 = -1f;
							Local_1765[1 /*18*/].f_15 = 0.3f;
							Local_1765[1 /*18*/].f_17 = 0;
							Local_1765[2 /*18*/].f_1 = 1015;
							Local_1765[2 /*18*/].f_2 = { 2017.87f, 3828.09f, 31.52f };
							Local_1765[2 /*18*/].f_5 = { 0f, 0f, -1f };
							Local_1765[2 /*18*/].f_8 = { GlobalFunc_107(0f, 1f, 0f) };
							Local_1765[2 /*18*/].f_11 = 2f;
							Local_1765[2 /*18*/].f_12 = 2f;
							Local_1765[2 /*18*/].f_13 = 1f;
							Local_1765[2 /*18*/].f_14 = -1f;
							Local_1765[2 /*18*/].f_15 = 0.3f;
							Local_1765[2 /*18*/].f_17 = 0;
							Local_1765[0 /*18*/] = GRAPHICS::ADD_DECAL(Local_1765[0 /*18*/].f_1, Local_1765[0 /*18*/].f_2, Local_1765[0 /*18*/].f_5, Local_1765[0 /*18*/].f_8, Local_1765[0 /*18*/].f_11, Local_1765[0 /*18*/].f_12, 0.196f, 0f, 0f, Local_1765[0 /*18*/].f_13, Local_1765[0 /*18*/].f_14, 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_6562))
						{
							PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_6562, 16);
						}
						if (!PED::IS_PED_INJURED(iLocal_6563))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_6563, 1862763509);
							PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_6563, 0);
							ENTITY::SET_ENTITY_HEALTH(iLocal_6563, 101);
							PED::SET_PED_CONFIG_FLAG(iLocal_6563, 208, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_6563, 17, 1);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_6563, uLocal_6267, "misstrevor1", "mr_philips_idle_ashley", 1000f, -1000f, 1, 0, 1148846080, 0);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_6563, 1);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_6267, 1);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_6562, iLocal_6563, 1);
						iLocal_824++;
					}
				}
			}
			break;
		
		case 1:
			Local_1765[1 /*18*/] = GRAPHICS::ADD_DECAL(Local_1765[1 /*18*/].f_1, Local_1765[1 /*18*/].f_2, Local_1765[1 /*18*/].f_5, Local_1765[1 /*18*/].f_8, Local_1765[1 /*18*/].f_11, Local_1765[1 /*18*/].f_12, 0.196f, 0f, 0f, Local_1765[1 /*18*/].f_13, Local_1765[1 /*18*/].f_14, 0, 0, 0);
			iLocal_824++;
			break;
		
		case 2:
			Local_1765[2 /*18*/] = GRAPHICS::ADD_DECAL(Local_1765[2 /*18*/].f_1, Local_1765[2 /*18*/].f_2, Local_1765[2 /*18*/].f_5, Local_1765[2 /*18*/].f_8, Local_1765[2 /*18*/].f_11, Local_1765[2 /*18*/].f_12, 0.196f, 0f, 0f, Local_1765[2 /*18*/].f_13, Local_1765[2 /*18*/].f_14, 0, 0, 0);
			iLocal_824++;
			break;
	}
}

void func_774()//Position - 0x85838
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6563))
	{
		if (PED::IS_PED_INJURED(iLocal_6563))
		{
			iLocal_7282 = 1;
		}
	}
	switch (iLocal_6276)
	{
		case 0:
			if (func_89("T1M1_AL1"))
			{
				iLocal_6276++;
			}
			break;
		
		case 1:
			if (iLocal_7282 == 1)
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 9)
				{
					GlobalFunc_5105();
					iLocal_6276++;
				}
			}
			break;
		
		case 2:
			if (!func_89("T1M1_KA"))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&Local_6622, "T1M1AUD", "T1M1_KA", 7, 0, 0, 0))
					{
						func_88("T1M1_KA", 1);
						func_88("T1M1_AL1", 0);
						iLocal_6276++;
					}
				}
			}
			break;
		
		case 3:
			if (!func_89("T1M1_AL1"))
			{
				if (GlobalFunc_10626(&Local_6622, "T1M1AUD", "T1M1_AL1", "T1M1_CFAL", 7, 0, 0))
				{
					func_88("T1M1_AL1", 1);
					iLocal_6276++;
				}
			}
			break;
		
		case 4:
			break;
	}
}


void func_776()//Position - 0x85991
{
	switch (iLocal_6266)
	{
		case 0:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6262))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_6262) == 1f)
				{
					uLocal_6263 = PED::CREATE_SYNCHRONIZED_SCENE(1967.647f, 4635.184f, 40.156f, 0f, 0f, 110f, 2);
					if (!PED::IS_PED_INJURED(Local_852[1 /*65*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_852[1 /*65*/], uLocal_6263, "misstrevor1", "gang_chatting_idle02_a", 1000f, -1000f, 0, 16, 1148846080, 0);
					}
					if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_852[3 /*65*/], uLocal_6263, "misstrevor1", "gang_chatting_idle02_c", 1000f, -1000f, 0, 16, 1148846080, 0);
					}
					iLocal_6266++;
				}
			}
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6263))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_6263) == 1f)
				{
					uLocal_6264 = PED::CREATE_SYNCHRONIZED_SCENE(1967.647f, 4635.184f, 40.156f, 0f, 0f, 110f, 2);
					if (!PED::IS_PED_INJURED(Local_852[1 /*65*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_852[1 /*65*/], uLocal_6264, "misstrevor1", "gang_chatting_idle03_a", 1000f, -1000f, 0, 16, 1148846080, 0);
					}
					if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_852[3 /*65*/], uLocal_6264, "misstrevor1", "gang_chatting_idle03_c", 1000f, -1000f, 0, 16, 1148846080, 0);
					}
					iLocal_6266++;
				}
			}
			break;
		
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_6264))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_6264) == 1f)
				{
					uLocal_6262 = PED::CREATE_SYNCHRONIZED_SCENE(1967.647f, 4635.184f, 40.156f, 0f, 0f, 110f, 2);
					if (!PED::IS_PED_INJURED(Local_852[1 /*65*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_852[1 /*65*/], uLocal_6262, "misstrevor1", "gang_chatting_idle01_a", 1000f, -1000f, 0, 16, 1148846080, 0);
					}
					if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_852[3 /*65*/], uLocal_6262, "misstrevor1", "gang_chatting_idle01_c", 1000f, -1000f, 0, 16, 1148846080, 0);
					}
					iLocal_6266 = 0;
				}
			}
			break;
	}
}

void func_777()//Position - 0x85BB6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_6321 = 1;
	while (iLocal_6321)
	{
		SYSTEM::WAIT(0);
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		RECORDING::_0x208784099002BC30("M_MrPhilips", 0);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		if (GlobalFunc_8315() == 1)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		if (iLocal_703 == 1)
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_5759))
				{
					iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ron", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						Local_5759 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					}
				}
				else if (Local_5759.f_9 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_5759))
					{
						func_127();
						Local_5759.f_9 = 1;
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_5769))
				{
					iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						Local_5769 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
					}
				}
				else if (Local_5769.f_9 == 0)
				{
					func_771();
					Local_5769.f_9 = 1;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6562))
				{
					iVar2 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Johnny", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						iLocal_6562 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6563))
				{
					iVar3 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ashley", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						iLocal_6563 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
					}
				}
			}
		}
		if (iLocal_4342 == 0)
		{
			if (iLocal_696)
			{
				iLocal_696 = 0;
			}
			else if (iLocal_694 == 0)
			{
				GlobalFunc_52(0, 1);
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]) || !ENTITY::DOES_ENTITY_EXIST(uLocal_6578[2]))
					{
						while (!func_121(19, 0f, 0f, 0f, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						GlobalFunc_11257(uLocal_6578[2], 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					if (GlobalFunc_8315() == 2)
					{
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), 1);
							}
						}
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1975.385f, 3818.865f, 32.4363f, 1f, 3);
						MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
						CLOCK::SET_CLOCK_TIME(13, 0, 0);
						func_121(16, 0f, 0f, 0f, 0, 0);
						while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							SYSTEM::WAIT(0);
						}
					}
					else
					{
						while (!func_121(19, 0f, 0f, 0f, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						GlobalFunc_11257(uLocal_6578[2], 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				STREAMING::SET_PED_POPULATION_BUDGET(0);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				iLocal_6321 = 1;
				func_454();
				func_449(0);
				STREAMING::REQUEST_ANIM_DICT("misstrevor1");
				if (GlobalFunc_8315() == 0)
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("TREVOR_1_INT", 8183, 8);
				}
				if (GlobalFunc_8315() == 1)
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("TREVOR_1_INT", 8180, 8);
				}
				if (GlobalFunc_8315() == 2)
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("TREVOR_1_INT", 8176, 8);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
						uLocal_6578[0] = Global_86864.f_9[0];
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
				{
					if (!PED::IS_PED_INJURED(Global_86864.f_9[1]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[1], 1, 1);
						uLocal_6578[2] = Global_86864.f_9[1];
					}
				}
				GlobalFunc_585(117, 1);
				GlobalFunc_5671(2, 1);
				bLocal_6329 = false;
				iLocal_703 = 0;
				iLocal_7409 = 0;
				Local_5769.f_9 = 0;
				iLocal_824 = 0;
				iLocal_693 = 0;
				iLocal_694 = 1;
			}
			else if (iLocal_694 == 1)
			{
				if (GlobalFunc_8315() == 0)
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
				}
				else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					GlobalFunc_11116(0, "Michael", 2);
				}
				if (GlobalFunc_8315() == 1)
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
				}
				else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					GlobalFunc_11116(1, "Franklin", 2);
				}
				if (GlobalFunc_Has_Cutscene_Loaded())
				{
					if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						else
						{
							SYSTEM::WAIT(0);
						}
					}
					if (GlobalFunc_8315() == 0)
					{
						if (GlobalFunc_8315() != 2)
						{
							GlobalFunc_9134(&uLocal_6578, 2);
							GlobalFunc_10946(&uLocal_6578, 1, 1, 0);
							CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_6578[0]);
							STREAMING::SET_FOCUS_ENTITY(uLocal_6578[0]);
						}
					}
					if (GlobalFunc_8315() == 1)
					{
						if (GlobalFunc_8315() != 2)
						{
							GlobalFunc_9134(&uLocal_6578, 2);
							GlobalFunc_10946(&uLocal_6578, 1, 1, 0);
							CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_6578[1]);
							STREAMING::SET_FOCUS_ENTITY(uLocal_6578[1]);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_6578[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_6578[0]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_6578[0], "Michael", 1, 0, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_6578[1]))
					{
						if (!PED::IS_PED_INJURED(uLocal_6578[1]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_6578[1], "Franklin", 1, 0, 0);
						}
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Ron", 2, GlobalFunc_4946(20), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Wade", 2, GlobalFunc_4946(24), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Johnny", 2, joaat("ig_johnnyklebitz"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Ashley", 2, joaat("ig_ashley"), 0);
					STREAMING::REQUEST_ANIM_DICT("misstrevor1");
					GlobalFunc_562(62);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					STREAMING::REMOVE_IPL("cs4_04_trash");
					GlobalFunc_8380(1, 1, 1, 0);
					iLocal_4342 = 1;
				}
			}
		}
		if (iLocal_4342 == 1)
		{
			if (iLocal_703 == 1)
			{
				if (!iLocal_693)
				{
					if (GlobalFunc_588(&iLocal_829, 2000) && CUTSCENE::GET_CUTSCENE_TIME() < 225005)
					{
						if (GlobalFunc_1080())
						{
							iLocal_4342 = 3;
							CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
							MISC::CLEAR_AREA(2001.83f, 3830.42f, 31.28f, 15f, 1, 0, 0, 0);
							iLocal_693 = 1;
						}
					}
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 234894)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 18, 1);
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(0);
				}
				if (!iLocal_6343)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 202893)
					{
						func_453();
						iLocal_6343 = 1;
					}
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 121400)
				{
					func_121(4, 0f, 0f, 0f, 0, 0);
				}
				if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 96400)
					{
						MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
						CLOCK::SET_CLOCK_TIME(13, 0, 0);
					}
					if (!func_89("STREAMING REQUEST"))
					{
						if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 73934.33f)
						{
							func_88("STREAMING REQUEST", 1);
						}
					}
					else if (!func_89("PIN INTERIOR"))
					{
					}
				}
				if (!func_89("SWITCH FOCUS"))
				{
					if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 88467.67f)
					{
						func_88("SWITCH FOCUS", 1);
					}
				}
				else if (!func_89("PAUSE FOR STREAMING"))
				{
					func_88("PAUSE FOR STREAMING", 1);
				}
				if (!func_89("UNPIN"))
				{
					if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 115433.3f)
					{
						if (iLocal_810 != 0)
						{
							INTERIOR::UNPIN_INTERIOR(iLocal_810);
							func_88("UNPIN", 1);
						}
					}
				}
				if (iLocal_703 == 0)
				{
					if (GlobalFunc_Is_Mission_Retry())
					{
						GlobalFunc_2781(500);
					}
					if (GlobalFunc_8315() == 2)
					{
						iLocal_697 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_697, 0))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_697, -16.303f, -1457.598f, 29.4831f, 20f, 20f, 10f, 0, 1, 0) && ENTITY::GET_ENTITY_MODEL(iLocal_697) != GlobalFunc_4931(2, 1))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_697, 1, 0);
								ENTITY::SET_ENTITY_COORDS(iLocal_697, -24.9712f, -1436.666f, 29.6542f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_697, 180.5934f);
							}
						}
						func_784(1963.691f, 3809.464f, 30.89227f, 1994.772f, 3826.749f, 37.40618f, 29.5f, 1992.2f, 3834f, 32.3f, 207.5433f, 0, 1, 1, 0, 0);
						GlobalFunc_11319(PLAYER::PLAYER_PED_ID(), 1);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(uLocal_6578[2]))
					{
						if (!PED::IS_PED_INJURED(uLocal_6578[2]))
						{
							GlobalFunc_11319(uLocal_6578[2], 1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
					{
						OBJECT::DELETE_OBJECT(&(Global_86864.f_28[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_6578[1]))
					{
						if (!PED::IS_PED_INJURED(uLocal_6578[1]))
						{
							PED::REMOVE_PED_HELMET(uLocal_6578[1], 1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_6578[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_6578[0]))
						{
							PED::REMOVE_PED_HELMET(uLocal_6578[0], 1);
						}
					}
					STREAMING::_0xBEB2D9A1D9A8F55A(10, 10, 10, 10);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
					STREAMING::REMOVE_ANIM_DICT("missheist_jewelleadinoutjh_endscene");
					MISC::CLEAR_AREA(1975.373f, 3818.316f, 32.4363f, 200f, 1, 0, 0, 0);
					MISC::CLEAR_AREA(-820.7342f, 179.5471f, 68.11261f, 100f, 1, 1, 0, 0);
					iLocal_829 = MISC::GET_GAME_TIMER();
					CAM::STOP_GAMEPLAY_HINT(0);
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
					iLocal_703 = 1;
				}
			}
			if (bLocal_6329)
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Johnny", joaat("ig_johnnyklebitz")))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Johnny", 0, 0, 0, joaat("ig_johnnyklebitz"));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				STREAMING::NEW_LOAD_SCENE_STOP();
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				if (!func_89("BLOOD"))
				{
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.657f, 0.566f, 126.36f, 0.07f, 3, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.589f, 0.266f, 0f, 0.01f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.612f, 0.269f, 126.36f, 0.22f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.709f, 0.396f, 126.36f, 0f, 1, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 200.36f, 0.1f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 111.36f, 0.05f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 111.36f, 0.05f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.1f, 0.383f, 111.36f, 0.05f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.05f, 0.383f, 111.36f, 0.05f, 2, 0f, "cs_trev1_blood");
					func_88("BLOOD", 1);
				}
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 4000, 96f, 0, 0);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 1);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ron", 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5759))
				{
					func_127();
					PED::FORCE_PED_MOTION_STATE(Local_5759, -668482597, 0, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Wade", 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5769))
				{
					func_771();
					PED::FORCE_PED_MOTION_STATE(Local_5769, -668482597, 0, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ashley", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				GlobalFunc_585(117, 1);
				GlobalFunc_5671(2, 1);
				if (GlobalFunc_8315() != 2)
				{
					if (GlobalFunc_9134(&uLocal_6578, 2))
					{
						GlobalFunc_10946(&uLocal_6578, 0, 1, 0);
						STREAMING::CLEAR_FOCUS();
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), 1);
					}
				}
				func_88("TRV1_INT CAM EXIT", 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_6147))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_703 == 1)
			{
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
				iLocal_4342 = 2;
			}
		}
		if (iLocal_4342 == 2)
		{
			if (iLocal_693)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					RECORDING::_0x13B350B8AD0EEE10();
					CUTSCENE::STOP_CUTSCENE(1);
					while (CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						SYSTEM::WAIT(0);
					}
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					CLOCK::SET_CLOCK_TIME(13, 0, 0);
					GlobalFunc_585(117, 1);
					GlobalFunc_5671(2, 1);
					STREAMING::CLEAR_FOCUS();
					if (iLocal_698 == 0)
					{
						if (PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_6571) && PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_6572))
						{
							iLocal_698 = 1;
						}
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6572, iLocal_6571);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6572, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6571, iLocal_6572);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_6571, 1862763509);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
					{
						if (!PED::IS_PED_INJURED(Local_5769) && !PED::IS_PED_INJURED(Local_5759))
						{
							if (iLocal_6430 == 0)
							{
								func_773();
								iLocal_6430 = 1;
							}
						}
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
					if (!func_89("DO LOAD SCENE"))
					{
						STREAMING::LOAD_SCENE(1995.97f, 3829.84f, 32.27f);
						func_88("DO LOAD SCENE", 1);
					}
					iLocal_7409 = 1;
				}
				else
				{
					GlobalFunc_2787(200);
				}
			}
			GlobalFunc_52(1, 1);
			if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
			GlobalFunc_565(494, 1, 0);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			if (iLocal_693)
			{
				if (iLocal_7409 == 1)
				{
					GlobalFunc_8380(0, 1, 1, 0);
					iLocal_694 = 0;
					iLocal_4342 = 0;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
					Local_5769.f_9 = 0;
					GlobalFunc_585(117, 1);
					GlobalFunc_5671(2, 1);
					func_783();
					iLocal_6321 = 0;
				}
			}
			else
			{
				GlobalFunc_8380(0, 1, 1, 0);
				iLocal_694 = 0;
				iLocal_4342 = 0;
				Local_5769.f_9 = 0;
				iLocal_6321 = 0;
			}
			if (!iLocal_6343)
			{
				func_453();
				iLocal_6343 = 1;
			}
		}
		if (iLocal_4342 == 3)
		{
			GlobalFunc_2787(200);
			CUTSCENE::STOP_CUTSCENE(1);
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			if (GlobalFunc_8315() != 2)
			{
				func_778(2, 1);
			}
			STREAMING::CLEAR_FOCUS();
			STREAMING::NEW_LOAD_SCENE_STOP();
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
			if (iLocal_698 == 0)
			{
				if (PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_6571) && PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_6572))
				{
					iLocal_698 = 1;
				}
			}
			while ((((!func_121(1, 0f, 0f, 0f, 0, 0) || !func_121(0, 0f, 0f, 0f, 0, 0)) || !func_121(3, 0f, 0f, 0f, 0, 0)) || !func_121(2, 0f, 0f, 0f, 0, 0)) || !func_121(4, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_5759))
			{
				ENTITY::SET_ENTITY_COORDS(Local_5759, 2001.55f, 3831.55f, 31.2735f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_5759, 94.23f);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_5759, 1);
				func_127();
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_5769))
			{
				ENTITY::SET_ENTITY_COORDS(Local_5769, 2000.4f, 3829.17f, 32.3f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_5769, 85.16f);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_5769, 1);
				func_771();
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1995.97f, 3829.84f, 31.2735f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 100.81f);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(PLAYER::PLAYER_PED_ID(), 1);
			}
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				if (!func_89("DO LOAD SCENE"))
				{
					STREAMING::LOAD_SCENE(1983.148f, 3831.198f, 31.3746f);
					func_88("DO LOAD SCENE", 1);
				}
			}
			iLocal_693 = 1;
			iLocal_4342 = 2;
		}
	}
}

int func_778(int iParam0, bool bParam1)//Position - 0x86AB9
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
		func_781(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_131(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	GlobalFunc_10946(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_781(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x86C71
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
				GlobalFunc_8364(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				GlobalFunc_11318(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7707(*iParam0);
				GlobalFunc_11333(*iParam0, bParam6);
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


void func_783()//Position - 0x86D51
{
	if (GlobalFunc_8315() != 2)
	{
		while (!func_778(2, 1))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_784(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x86D73
{
	func_785(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_785(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x86D9C
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (bParam18)
			{
				GlobalFunc_186(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (GlobalFunc_4966(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param3 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (GlobalFunc_5651(iVar0, GlobalFunc_8315(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!GlobalFunc_105(Param11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(iVar0, &Var4, &Var7);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar13))
						{
							Param11.x = (Param11.x + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.x - Var4.x) > Param11.x)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param7, 5f, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam10);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param7, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1, 0, 0, 1);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			}
			iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
			{
				ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}







































void func_824()//Position - 0x89305
{
	if (!func_89("TRV1_FAIL"))
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
		{
			func_88("TRV1_FAIL", 1);
		}
	}
	if (iLocal_6246 > 2)
	{
		if (!func_89("BLOOD"))
		{
			PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.657f, 0.566f, 126.36f, 0.07f, 3, 0f, "cs_trev1_blood");
			PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.589f, 0.266f, 0f, 0.01f, 2, 0f, "cs_trev1_blood");
			PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.612f, 0.269f, 126.36f, 0.22f, 2, 0f, "cs_trev1_blood");
			PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.709f, 0.396f, 126.36f, 0f, 1, 0f, "cs_trev1_blood");
			PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 200.36f, 0.1f, 2, 0f, "cs_trev1_blood");
			PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 111.36f, 0.05f, 2, 0f, "cs_trev1_blood");
			func_88("BLOOD", 1);
		}
	}
	STREAMING::CLEAR_FOCUS();
	func_837();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	HUD::UNLOCK_MINIMAP_ANGLE();
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	if (CAM::DOES_CAM_EXIST(uLocal_6570))
	{
		CAM::DESTROY_CAM(uLocal_6570, 0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	bLocal_699 = false;
	iLocal_816 = 0;
	HUD::TOGGLE_STEALTH_RADAR(0);
	if (iLocal_6246 < 5)
	{
		GlobalFunc_7621(48, 0, 0, 1, 0);
	}
	else
	{
		GlobalFunc_7621(48, 2, 0, 1, 0);
	}
	GlobalFunc_7621(38, 0, 0, 1, 0);
	GlobalFunc_7621(40, 0, 0, 1, 0);
	GlobalFunc_7621(42, 0, 0, 1, 0);
	GlobalFunc_7621(44, 0, 0, 1, 0);
	GlobalFunc_7621(46, 0, 0, 1, 0);
	GlobalFunc_7621(37, 0, 0, 1, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_01"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_02"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_03"), 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_6529 + Vector(100f, 100f, 100f), Local_6529 - Vector(100f, 100f, 100f), 0, 1, 1, 1);
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
	PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	HUD::CLEAR_PRINTS();
	iLocal_6536 = 0;
	iLocal_6537 = 0;
	iLocal_704 = 0;
	GlobalFunc_4935();
	GlobalFunc_10944(2, 1);
	GlobalFunc_563(1);
	while (!func_121(4, 0f, 0f, 0f, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_121(1, 0f, 0f, 0f, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (iLocal_6246 < 5)
	{
		while (!func_121(0, 0f, 0f, 0f, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (iLocal_6246 == 7)
	{
		while ((!func_121(11, 0f, 0f, 0f, 0, 0) || !func_121(12, 0f, 0f, 0f, 0, 0)) || !func_121(13, 0f, 0f, 0f, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (iLocal_6246 == 6)
	{
		while (!func_121(11, -40.6843f, 3103.764f, 24.8673f, 160.9775f, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	if (!PED::IS_PED_INJURED(Local_5759))
	{
		func_126(Local_5759, 0, 0);
		GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
	}
	if (!PED::IS_PED_INJURED(Local_5769))
	{
		func_126(Local_5769, 1, 0);
		GlobalFunc_173(&Local_6622, 4, Local_5769, "Wade", 0, 1);
	}
	iLocal_827 = 0;
	iLocal_6324 = 0;
	switch (iLocal_6246)
	{
		case 0:
			func_459();
			func_455();
			break;
		
		case 1:
			iLocal_824 = 0;
			iLocal_6430 = 0;
			while (!func_121(2, 0f, 0f, 0f, 0, 0) || !func_121(3, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			func_459();
			func_455();
			func_454();
			func_449(1);
			MISC::CLEAR_AREA(1983.447f, 3826.676f, 31.3778f, 50f, 1, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_5759))
			{
				ENTITY::SET_ENTITY_COORDS(Local_5759, 2000.46f, 3831.18f, 31.29f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_5759, 90.19f);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_5759, 1);
				func_127();
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_5769))
			{
				ENTITY::SET_ENTITY_COORDS(Local_5769, 1999.89f, 3829.58f, 31.3f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_5769, 91.42f);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_5769, 1);
				func_771();
			}
			if (GlobalFunc_188())
			{
				GlobalFunc_5108(0, -1, 1);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1995.97f, 3829.84f, 32.27f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 100.81f);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(PLAYER::PLAYER_PED_ID(), 1);
			}
			GlobalFunc_585(132, 0);
			GlobalFunc_7621(3, 0, 0, 1, 0);
			GlobalFunc_7621(4, 0, 0, 1, 0);
			break;
		
		case 2:
			CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_1_P1", 8);
			func_459();
			func_564(Local_7150.f_4);
			func_564(Local_7150);
			func_564(Local_7150.f_7);
			func_564(Local_7150.f_21);
			func_564(Local_7150.f_20);
			func_455();
			STREAMING::REQUEST_MODEL(Local_7150.f_21);
			STREAMING::REQUEST_MODEL(Local_7150.f_20);
			func_454();
			func_449(2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_6147, Local_6437, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_6147, fLocal_6557);
			}
			if (GlobalFunc_188())
			{
				GlobalFunc_5108(0, -1, 1);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				func_832(Local_6437, fLocal_6557);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_5769, Local_6147, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6147, 1, 1);
			}
			func_127();
			GlobalFunc_585(132, 0);
			GlobalFunc_7621(3, 0, 0, 1, 0);
			GlobalFunc_7621(4, 0, 0, 1, 0);
			break;
		
		case 3:
			func_459();
			func_564(Local_7150.f_4);
			func_564(Local_7150);
			func_564(Local_7150.f_7);
			func_564(Local_7150.f_21);
			func_564(Local_7150.f_20);
			while (!func_121(1, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_121(0, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			func_127();
			func_455();
			STREAMING::REQUEST_MODEL(Local_7150.f_21);
			STREAMING::REQUEST_MODEL(Local_7150.f_20);
			if (bLocal_6323)
			{
				STREAMING::REQUEST_MODEL(joaat("rebel"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(200, sLocal_6415);
				VEHICLE::REQUEST_VEHICLE_RECORDING(201, sLocal_6415);
				VEHICLE::REQUEST_VEHICLE_RECORDING(204, sLocal_6415);
				VEHICLE::REQUEST_VEHICLE_RECORDING(205, sLocal_6415);
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Trevor1dw");
				while ((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(200, sLocal_6415) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, sLocal_6415)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, sLocal_6415)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(205, sLocal_6415)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Trevor1dw"))
				{
					SYSTEM::WAIT(0);
				}
			}
			func_454();
			func_449(3);
			while (!func_657(&Local_6159))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_121(7, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_121(8, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
			{
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_6159, 15f);
			}
			func_762();
			while (!func_121(6, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_121(5, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (iLocal_812 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_6171[0 /*12*/], 4000);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_6171[0 /*12*/], 1);
					ENTITY::SET_ENTITY_QUATERNION(Local_6171[0 /*12*/], 0.0118f, 0.0096f, 0.5264f, 0.8501f);
					ENTITY::SET_ENTITY_PROOFS(Local_6171[0 /*12*/], 0, 0, 0, 1, 0, 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[1 /*12*/], 0))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_6171[1 /*12*/], 4000);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_6171[1 /*12*/], 1);
					ENTITY::SET_ENTITY_QUATERNION(Local_6171[1 /*12*/], 0.0099f, 0.0088f, 0.5793f, 0.815f);
					ENTITY::SET_ENTITY_PROOFS(Local_6171[1 /*12*/], 0, 0, 0, 1, 0, 0, 0, 0);
				}
			}
			if (iLocal_812 == 0)
			{
				func_763(1);
			}
			else
			{
				iLocal_6558 = 0;
				while (iLocal_6558 <= 2)
				{
					STREAMING::REQUEST_MODEL(Local_852[iLocal_6558 /*65*/].f_16);
					if (STREAMING::HAS_MODEL_LOADED(Local_852[iLocal_6558 /*65*/].f_16))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_852[iLocal_6558 /*65*/]))
						{
							func_764(&(Local_852[iLocal_6558 /*65*/]), 0);
						}
						if (iLocal_6558 > 1)
						{
							if (!PED::IS_PED_INJURED(Local_852[iLocal_6558 /*65*/]))
							{
								PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_852[iLocal_6558 /*65*/], 1);
								ENTITY::SET_ENTITY_HEALTH(Local_852[iLocal_6558 /*65*/], 150);
								PED::SET_PED_MAX_HEALTH(Local_852[iLocal_6558 /*65*/], 150);
							}
						}
					}
					else
					{
						while (!STREAMING::HAS_MODEL_LOADED(Local_852[iLocal_6558 /*65*/].f_16))
						{
							STREAMING::REQUEST_MODEL(Local_852[iLocal_6558 /*65*/].f_16);
							SYSTEM::WAIT(0);
						}
					}
					iLocal_6558++;
				}
			}
			iLocal_6558 = 0;
			while (iLocal_6558 <= 3)
			{
				if (!PED::IS_PED_INJURED(Local_852[iLocal_6558 /*65*/]))
				{
					if (iLocal_6558 == 0 || iLocal_6558 == 1)
					{
						PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_852[iLocal_6558 /*65*/], 0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852[iLocal_6558 /*65*/], 1);
				}
				iLocal_6558++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_6147, 1965.354f, 4646.601f, 39.8213f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_6147, 99.27f);
			}
			if (GlobalFunc_188())
			{
				GlobalFunc_5108(Local_6147, -1, 1);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				func_832(1965.354f, 4646.601f, 39.8213f, 99.27f);
			}
			if (!PED::IS_PED_INJURED(Local_5759))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_5759);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5759, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_5759, 0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_5769);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5769, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_5769, 0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_5769, Local_6147, 1);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6147, 1, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_6147, 1f);
			}
			GlobalFunc_7621(3, 0, 0, 1, 0);
			GlobalFunc_7621(4, 0, 0, 1, 0);
			GlobalFunc_585(132, 0);
			if (!func_89("TRV1_CHASE_BIKERS_RT"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_CHASE_BIKERS_RT"))
				{
					func_88("TRV1_CHASE_BIKERS_RT", 1);
				}
			}
			iLocal_6308 = 1;
			break;
		
		case 4:
			func_459();
			func_564(Local_7150.f_7);
			func_564(Local_7150.f_8);
			func_564(Local_7150.f_4);
			func_564(Local_7150.f_1);
			func_564(Local_7150);
			func_455();
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("hexer"), 3);
			if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(58.4031f, 3630.96f, 38.7482f))
			{
				TASK::REMOVE_COVER_POINT(uLocal_809);
			}
			if (bLocal_6323)
			{
				STREAMING::REQUEST_MODEL(joaat("rebel"));
				STREAMING::REQUEST_MODEL(joaat("prop_gascyl_01a"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(9, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(10, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(11, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(12, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(13, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(14, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(15, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(16, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(17, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(18, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(19, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(20, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(21, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(22, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(23, "Trevor1dw");
				while ((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("rebel")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_gascyl_01a"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("hexer")))
				{
					SYSTEM::WAIT(0);
				}
			}
			func_454();
			func_449(4);
			while (!func_657(&Local_6159))
			{
				SYSTEM::WAIT(0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
			{
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_6159, 15f);
			}
			func_763(0);
			func_831();
			func_762();
			func_733(0, 1);
			iLocal_6558 = 0;
			while (iLocal_6558 <= 3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_852[iLocal_6558 /*65*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852[iLocal_6558 /*65*/], 1);
				}
				iLocal_6558++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_6147, Local_6437, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_6147, fLocal_6557);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_6159, 51.74f, 3662.95f, 39.52f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_6159, 16.84f);
			}
			if (GlobalFunc_188())
			{
				GlobalFunc_5108(0, -1, 1);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				func_832(71.4078f, 3619.49f, 38.7163f, 338.4296f);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 58.4031f, 3630.96f, 38.7482f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 20.8123f);
			}
			if (!PED::IS_PED_INJURED(Local_5759))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_5759);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5759, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_5759, 0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_5769);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5769, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_5769, 0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_5769, Local_6147, 1);
					}
				}
			}
			GlobalFunc_7621(3, 0, 0, 1, 0);
			GlobalFunc_7621(4, 0, 0, 1, 0);
			GlobalFunc_585(132, 0);
			iLocal_6308 = 1;
			func_88("TRV1_AT_CARAVAN", 1);
			if (!func_89("TRV1_CARAVAN_RT"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_CARAVAN_RT"))
				{
					func_88("TRV1_CARAVAN_RT", 1);
				}
			}
			func_127();
			iLocal_6278 = 0;
			iLocal_826 = 0;
			iLocal_6334 = 0;
			iLocal_6315 = 0;
			break;
		
		case 5:
			STREAMING::REQUEST_MODEL(joaat("proptrailer"));
			STREAMING::REQUEST_MODEL(GlobalFunc_4946(38));
			if (!STREAMING::HAS_MODEL_LOADED(joaat("proptrailer")))
			{
				SYSTEM::WAIT(0);
			}
			CUTSCENE::REMOVE_CUTSCENE();
			func_459();
			func_455();
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(46.94767f, 3042.975f, -17.54682f) - Vector(10f, 20f, 20f), Vector(46.94767f, 3042.975f, -17.54682f) + Vector(10f, 20f, 20f), 0, 1);
			MISC::CLEAR_AREA(-17.54682f, 3042.975f, 46.94767f, 40f, 1, 0, 0, 0);
			func_454();
			func_449(6);
			func_587();
			if (ENTITY::DOES_ENTITY_EXIST(Local_5769))
			{
				PED::DELETE_PED(&Local_5769);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_wade"));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_6147, 80.4212f, 3607.046f, 38.6962f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_6147, 189.0543f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (!GlobalFunc_1533(Local_5759, Local_6147, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
				}
			}
			if (GlobalFunc_188())
			{
				GlobalFunc_5108(Local_6147, -1, 1);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				func_832(80.4212f, 3607.046f, 38.6962f, 189.0543f);
			}
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f);
			MISC::CLEAR_AREA(-11.4394f, 3007.779f, 39.6286f, 40f, 1, 0, 0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6147, 1, 1);
			}
			iLocal_6308 = 1;
			func_127();
			if (!func_89("TRV1_DRIVE_TRAILER_RT"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_DRIVE_TRAILER_RT"))
				{
					func_88("TRV1_DRIVE_TRAILER_RT", 1);
				}
			}
			GlobalFunc_585(132, 0);
			GlobalFunc_7621(3, 0, 0, 1, 0);
			GlobalFunc_7621(4, 0, 0, 1, 0);
			break;
		
		case 6:
			STREAMING::REQUEST_MODEL(joaat("proptrailer"));
			STREAMING::REQUEST_MODEL(GlobalFunc_4946(38));
			STREAMING::REQUEST_ANIM_DICT("misstrevor1");
			STREAMING::REQUEST_ANIM_DICT("misstrevor1ig_7");
			if (!STREAMING::HAS_MODEL_LOADED(joaat("proptrailer")) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(38)))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_6426 = 1;
			iLocal_6427 = 0;
			CUTSCENE::REMOVE_CUTSCENE();
			func_459();
			func_455();
			func_454();
			func_449(6);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(46.94767f, 3042.975f, -17.54682f) - Vector(10f, 20f, 20f), Vector(46.94767f, 3042.975f, -17.54682f) + Vector(10f, 20f, 20f), 0, 1);
			MISC::CLEAR_AREA(-17.54682f, 3042.975f, 46.94767f, 40f, 1, 0, 0, 0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f);
			MISC::CLEAR_AREA(-20.1293f, 3039.469f, 40.0023f, 40f, 1, 0, 0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_6147, -11.4373f, 3007.784f, 40.6016f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(Local_6147, -2.0516f, -0.7819f, 27.5497f, 2, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (!GlobalFunc_1533(Local_5759, Local_6147, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
				}
			}
			if (GlobalFunc_188())
			{
				GlobalFunc_5108(Local_6147, -1, 1);
			}
			else
			{
				func_832(-11.4373f, 3007.784f, 40.6016f, 180.4163f);
				if (!ENTITY::IS_ENTITY_DEAD(Local_6147))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_6147, -11.4373f, 3007.784f, 40.6016f, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(Local_6147, -2.0516f, -0.7819f, 27.5497f, 2, 1);
					AUDIO::SET_VEH_RADIO_STATION(Local_6147, "OFF");
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, -1);
					}
				}
			}
			func_587();
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6564) && iLocal_6426 == 1)
			{
				SYSTEM::WAIT(0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6147, 1, 1);
			}
			iLocal_6315 = 0;
			iLocal_6308 = 1;
			func_127();
			if (!func_89("TRV1_PUSH_TRAILER_RT"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_PUSH_TRAILER_RT"))
				{
					func_88("TRV1_PUSH_TRAILER_RT", 1);
				}
			}
			GlobalFunc_585(132, 0);
			GlobalFunc_7621(3, 0, 0, 1, 0);
			GlobalFunc_7621(4, 0, 0, 1, 0);
			break;
		
		case 7:
			iLocal_818 = 0;
			CUTSCENE::REMOVE_CUTSCENE();
			func_459();
			func_455();
			func_454();
			func_449(7);
			STREAMING::REQUEST_COLLISION_AT_COORD(-44.7763f, 3090.854f, 26.7873f);
			STREAMING::REQUEST_COLLISION_AT_COORD(-39.71f, 3081.9f, 30.35f);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f);
			MISC::CLEAR_AREA(-11.4394f, 3007.779f, 39.6286f, 40f, 1, 0, 0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_6147, -39.71f, 3081.9f, 30.35f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_6147, 341.54f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_6147);
				ENTITY::SET_ENTITY_VISIBLE(Local_6147, 1);
			}
			if (GlobalFunc_188())
			{
				GlobalFunc_5108(0, -1, 1);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_6147))
				{
					func_832(Local_6437, fLocal_6557);
				}
				ENTITY::SET_ENTITY_COORDS(Local_6147, -39.71f, 3081.9f, 30.35f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_6147, 341.54f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_6147);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -45.7971f, 3094.898f, 25.9671f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 23.9393f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6564, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_6564, -51.8943f, 3110.966f, 23.2366f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_6564, 44.8533f);
				func_122(1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_5759))
			{
				if (!PED::IS_PED_INJURED(Local_5759))
				{
					ENTITY::SET_ENTITY_COORDS(Local_5759, -44.7763f, 3090.854f, 26.7873f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_COORDS(Local_5759, -42.33623f, 3088.567f, 28.48037f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_5759, 34.38021f);
				}
			}
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(46.94767f, 3042.975f, -17.54682f) - Vector(10f, 20f, 20f), Vector(46.94767f, 3042.975f, -17.54682f) + Vector(10f, 20f, 20f), 0, 1);
			MISC::CLEAR_AREA(-17.54682f, 3042.975f, 46.94767f, 40f, 1, 0, 0, 0);
			MISC::CLEAR_AREA(-20.1293f, 3039.469f, 40.0023f, 40f, 1, 0, 0, 0);
			if (!PED::IS_PED_INJURED(Local_5825))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_5825, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_5825);
			}
			GlobalFunc_585(132, 0);
			if (!func_89("TRV1_ORTEGA_RT"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_ORTEGA_RT"))
				{
					func_88("TRV1_ORTEGA_RT", 1);
				}
			}
			func_127();
			iLocal_6308 = 1;
			break;
		
		case 8:
			STREAMING::REMOVE_IPL("TRV1_Trail_start");
			STREAMING::REQUEST_IPL("TRV1_Trail_end");
			CUTSCENE::REMOVE_CUTSCENE();
			func_459();
			func_455();
			func_454();
			func_449(8);
			STREAMING::REQUEST_COLLISION_AT_COORD(-39.71f, 3081.9f, 30.35f);
			MISC::CLEAR_AREA(-11.4394f, 3007.779f, 39.6286f, 40f, 1, 0, 0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_6147, -39.71f, 3081.9f, 30.35f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_6147, 342.3264f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_6147);
				ENTITY::SET_ENTITY_VISIBLE(Local_6147, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (!GlobalFunc_1533(Local_5759, Local_6147, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
				}
			}
			if (GlobalFunc_188())
			{
				GlobalFunc_5108(Local_6147, -1, 1);
			}
			else
			{
				func_832(Local_6437, fLocal_6557);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_6147, -39.71f, 3081.9f, 30.35f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_6147, 341.54f);
					ENTITY::SET_ENTITY_VISIBLE(Local_6147, 1);
				}
				STREAMING::LOAD_SCENE(-39.5698f, 3081.808f, 29.3679f);
			}
			STREAMING::_0x95A7DABDDBB78AE7("CS3_05_water_grp1", "CS3_05_water_grp2");
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6147, 1, 1);
			}
			GlobalFunc_7621(3, 1, 0, 1, 0);
			GlobalFunc_7621(4, 1, 0, 1, 0);
			func_127();
			GlobalFunc_4927(35, 1);
			GlobalFunc_76(35);
			iLocal_6308 = 1;
			break;
		
		case 9:
			func_459();
			func_455();
			func_454();
			func_449(9);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_6147, Local_6437, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_6147, fLocal_6557);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				if (!GlobalFunc_1533(Local_5759, Local_6147, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
				}
			}
			if (GlobalFunc_188())
			{
				GlobalFunc_5108(Local_6147, -1, 1);
			}
			else
			{
				func_832(Local_6437, fLocal_6557);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_6147, 1, 1);
			}
			func_127();
			GlobalFunc_7621(3, 1, 0, 1, 0);
			GlobalFunc_7621(4, 1, 0, 1, 0);
			iLocal_6308 = 1;
			break;
		
		case 10:
			func_93();
			break;
	}
	func_826();
	if (iLocal_6246 == 4)
	{
		GlobalFunc_730(29.8107f);
	}
	else if (iLocal_6246 == 1)
	{
		GlobalFunc_730(-65f);
	}
	else
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
}


void func_826()//Position - 0x8AC41
{
	func_107();
	iLocal_6558 = 0;
	while (iLocal_6558 <= 4)
	{
		Local_1113[iLocal_6558 /*65*/].f_24 = 0;
		iLocal_6558++;
	}
	iLocal_6558 = 0;
	while (iLocal_6558 <= 4)
	{
		Local_1439[iLocal_6558 /*65*/].f_24 = 0;
		iLocal_6558++;
	}
	iLocal_6319 = 0;
	iLocal_6426 = 0;
	iLocal_6324 = 0;
}





void func_831()//Position - 0x8AD7B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6159, 0))
	{
		if (!PED::IS_PED_INJURED(Local_852[0 /*65*/]))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_852[0 /*65*/], Local_6159, 0))
			{
				TASK::CLEAR_PED_TASKS(Local_852[0 /*65*/]);
				PED::SET_PED_INTO_VEHICLE(Local_852[0 /*65*/], Local_6159, -1);
			}
		}
		if (!PED::IS_PED_INJURED(Local_852[1 /*65*/]))
		{
			PED::DELETE_PED(&(Local_852[1 /*65*/]));
		}
		if ((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6159) && iLocal_6246 != 4) && iLocal_6246 != 3)
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_6159, Local_6159.f_7, sLocal_6573, 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_6159, 300f);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[0 /*12*/], 0))
	{
		if (!PED::IS_PED_INJURED(Local_852[2 /*65*/]))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_852[2 /*65*/], Local_6171[0 /*12*/], 0))
			{
				TASK::CLEAR_PED_TASKS(Local_852[2 /*65*/]);
				PED::SET_PED_INTO_VEHICLE(Local_852[2 /*65*/], Local_6171[0 /*12*/], -1);
			}
		}
		if ((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[0 /*12*/]) && iLocal_6246 != 4) && iLocal_6246 != 3)
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_6171[0 /*12*/], Local_6171[0 /*12*/].f_7, sLocal_6573, 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_6171[0 /*12*/], 300f);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6171[1 /*12*/], 0))
	{
		if (!PED::IS_PED_INJURED(Local_852[3 /*65*/]))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_852[3 /*65*/], Local_6171[1 /*12*/], 0))
			{
				TASK::CLEAR_PED_TASKS(Local_852[3 /*65*/]);
				PED::SET_PED_INTO_VEHICLE(Local_852[3 /*65*/], Local_6171[1 /*12*/], -1);
			}
		}
		if ((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_6171[1 /*12*/]) && iLocal_6246 != 4) && iLocal_6246 != 3)
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_6171[1 /*12*/], Local_6171[1 /*12*/].f_7, sLocal_6573, 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_6171[1 /*12*/], 300f);
		}
	}
}

void func_832(struct<3> Param0, float fParam3)//Position - 0x8AF3F
{
	STREAMING::LOAD_SCENE(Param0);
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_6147, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, -1);
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, -1);
			}
		}
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_5759, 1);
			TASK::CLEAR_PED_TASKS(Local_5759);
			if (!PED::IS_PED_IN_VEHICLE(Local_5759, Local_6147, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_5759, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
				}
				else
				{
					PED::SET_PED_INTO_VEHICLE(Local_5759, Local_6147, 0);
				}
			}
		}
		if (iLocal_6246 < 6)
		{
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_5769, 1);
				TASK::CLEAR_PED_TASKS(Local_5759);
				if (!PED::IS_PED_IN_VEHICLE(Local_5769, Local_6147, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_5769, 0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_5769, Local_6147, 1);
					}
					else
					{
						PED::SET_PED_INTO_VEHICLE(Local_5769, Local_6147, 1);
					}
				}
			}
		}
		PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Param0);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_6147);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		MISC::CLEAR_AREA(Param0, 300f, 1, 0, 0, 0);
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_5759, 0);
		}
		if (!PED::IS_PED_INJURED(Local_5769))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_5769, 0);
		}
	}
}





void func_837()//Position - 0x8B1CE
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_DRIVE_TO_BIKERS"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_DRIVE_TO_BIKERS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_FOCUS_CAM_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_FOCUS_CAM_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_FOLLOW_VAN"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_CHASE_FOLLOW_VAN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_KILL_BIKERS"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_CHASE_KILL_BIKERS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_SHOOTOUT_START"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_SHOOTOUT_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_RAYFIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_SHOOTOUT_BIKERS_FLEE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_SHOOTOUT_BIKERS_FLEE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_DRIVE_TO_TRAILER"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_DRIVE_TO_TRAILER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_ARRIVE_AT_TRAILER"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_ARRIVE_AT_TRAILER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_PUSH_THE_TRAILER"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_PUSH_THE_TRAILER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_THREATEN_ORTEGA"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_THREATEN_ORTEGA");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_ORTEGA_KILLED"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_ORTEGA_KILLED");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_DRIVE_HOME"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_DRIVE_HOME");
	}
}



void func_840()//Position - 0x8B3A6
{
	MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	func_783();
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
		}
	}
	GlobalFunc_10617(112, 0);
	GlobalFunc_10617(113, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_01"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_02"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_03"), 1);
	func_847();
	func_843();
	func_842();
	HUD::TOGGLE_STEALTH_RADAR(0);
	func_841(sLocal_6575, 0, 1, 0);
	func_841(sLocal_6574, 6, 1, 0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 173, 1);
	if (iLocal_698 == 0)
	{
		if (PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_6571) && PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_6572))
		{
			iLocal_698 = 1;
		}
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6572, iLocal_6571);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6572, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_6571, iLocal_6572);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_6571, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_6571);
	func_454();
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	uLocal_6578.f_6 = 2;
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 65, 0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 65, 0, 1);
	iLocal_6318 = 1;
	func_449(0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_6147))
	{
		while (!func_121(4, Local_6147.f_2, Local_6147.f_5, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_5759))
	{
		while (!func_121(1, Local_5759.f_2, Local_5759.f_5, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_5769))
	{
		while (!func_121(0, Local_5769.f_2, Local_5769.f_5, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	GlobalFunc_7621(3, 0, 0, 1, 0);
	GlobalFunc_7621(4, 0, 0, 1, 0);
	if (!PED::IS_PED_INJURED(Local_5759))
	{
		func_126(Local_5759, 0, 0);
	}
	if (!PED::IS_PED_INJURED(Local_5769))
	{
		func_126(Local_5769, 1, 0);
	}
	GlobalFunc_200(&Local_6622, 1);
	GlobalFunc_200(&Local_6622, 2);
	GlobalFunc_200(&Local_6622, 3);
	GlobalFunc_200(&Local_6622, 4);
	GlobalFunc_200(&Local_6622, 5);
	GlobalFunc_200(&Local_6622, 6);
	if (!PED::IS_PED_INJURED(Local_5759))
	{
		GlobalFunc_173(&Local_6622, 3, Local_5759, "NervousRon", 0, 1);
	}
	if (!PED::IS_PED_INJURED(Local_5769))
	{
		GlobalFunc_173(&Local_6622, 4, Local_5769, "Wade", 0, 1);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&Local_6622, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	if (iLocal_6246 < 6)
	{
		GlobalFunc_7621(48, 0, 0, 1, 0);
	}
	else
	{
		GlobalFunc_7621(48, 2, 0, 1, 0);
	}
	GlobalFunc_7621(38, 0, 0, 1, 0);
	GlobalFunc_7621(40, 0, 0, 1, 0);
	GlobalFunc_7621(42, 0, 0, 1, 0);
	GlobalFunc_7621(44, 0, 0, 1, 0);
	GlobalFunc_7621(46, 0, 0, 1, 0);
	GlobalFunc_7621(37, 0, 0, 1, 0);
	GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 495);
	GlobalFunc_10944(2, 1);
	GlobalFunc_563(1);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	iLocal_6561 = 0;
	iLocal_6324 = 0;
	iLocal_6315 = 0;
	iLocal_6246 = 1;
}

void func_841(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x8B6D1
{
	HUD::REQUEST_ADDITIONAL_TEXT(sParam0, iParam1);
	if (bParam2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::LOAD_ALL_OBJECTS_NOW();
		}
		while (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(sParam0, iParam1))
		{
			if (bParam3)
			{
				func_457(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_842()//Position - 0x8B712
{
	iLocal_6561 = 0;
}

void func_843()//Position - 0x8B71E
{
	func_846();
	func_845(Local_7150);
	func_845(Local_7150.f_1);
	func_845(Local_7150.f_2);
	func_845(Local_7150.f_4);
	func_845(Local_7150.f_5);
	func_845(Local_7150.f_6);
	func_845(Local_7150.f_7);
	func_845(Local_7150.f_8);
	func_844(sLocal_6573, Local_7150.f_39);
	func_844(sLocal_6573, Local_7150.f_40);
	func_844(sLocal_6573, Local_7150.f_41);
	func_844(sLocal_6573, Local_7150.f_42);
	func_844(sLocal_6573, Local_7150.f_43);
	func_844(sLocal_6573, Local_7150.f_44);
	func_844(sLocal_6573, Local_7150.f_45);
	func_844(sLocal_6573, Local_7150.f_46);
	func_844(sLocal_6573, Local_7150.f_47);
	func_844(sLocal_6573, Local_7150.f_48);
	func_844(sLocal_6573, Local_7150.f_49);
	func_844(sLocal_6573, Local_7150.f_50);
	func_844(sLocal_6573, Local_7150.f_51);
	func_844(sLocal_6573, Local_7150.f_52);
	func_844(sLocal_6573, Local_7150.f_53);
	func_844(sLocal_6573, Local_7150.f_54);
	func_844(sLocal_6573, Local_7150.f_55);
}

void func_844(char* sParam0, var uParam1)//Position - 0x8B83C
{
	if (iLocal_6944 < 50)
	{
		Local_6945[iLocal_6944 /*4*/] = sParam0;
		Local_6945[iLocal_6944 /*4*/].f_1 = uParam1;
		Local_6945[iLocal_6944 /*4*/].f_2 = 0;
		Local_6945[iLocal_6944 /*4*/].f_3 = 0;
		iLocal_6944++;
	}
}

void func_845(int iParam0)//Position - 0x8B883
{
	if (iLocal_6792 < 50)
	{
		Local_6793[iLocal_6792 /*3*/] = iParam0;
		Local_6793[iLocal_6792 /*3*/].f_1 = 0;
		Local_6793[iLocal_6792 /*3*/].f_2 = 0;
		iLocal_6792++;
	}
}

void func_846()//Position - 0x8B8BE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		Local_6793[iVar0 /*3*/] = 0;
		Local_6793[iVar0 /*3*/].f_1 = 0;
		Local_6793[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	iLocal_6792 = 0;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		Local_6945[iVar0 /*4*/] = "missing";
		Local_6945[iVar0 /*4*/].f_1 = -1;
		Local_6945[iVar0 /*4*/].f_2 = 0;
		Local_6945[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
	iLocal_6944 = 0;
}

void func_847()//Position - 0x8B93A
{
	Local_7150 = joaat("hexer");
	Local_7150.f_1 = joaat("biff");
	Local_7150.f_2 = joaat("tractor2");
	Local_7150.f_4 = joaat("gburrito");
	Local_7150.f_5 = joaat("rebel");
	Local_7150.f_6 = joaat("towtruck");
	Local_7150.f_7 = joaat("g_m_y_lost_01");
	Local_7150.f_8 = joaat("g_m_y_lost_02");
	Local_7150.f_19 = joaat("proptrailer");
	Local_7150.f_20 = joaat("ig_clay");
	Local_7150.f_21 = joaat("ig_terry");
	Local_7150.f_32 = "misstrevor1";
	Local_7150.f_33 = "animdictnotrequired";
	Local_7150.f_34 = "animnotrequired";
	Local_7150.f_35 = "ROAD_VIBRATION_SHAKE";
	Local_7150.f_36 = "JOLT_SHAKE";
	Local_7150.f_37 = "HAND_SHAKE";
	Local_7150.f_38 = "SKY_DIVING_SHAKE";
	Local_7150.f_39 = 1;
	Local_7150.f_40 = 2;
	Local_7150.f_41 = 3;
	Local_7150.f_42 = 4;
	Local_7150.f_43 = 14;
	Local_7150.f_44 = 5;
	Local_7150.f_45 = 6;
	Local_7150.f_46 = 7;
	Local_7150.f_47 = 13;
	Local_7150.f_48 = 12;
	Local_7150.f_49 = 11;
	Local_7150.f_50 = 15;
	Local_7150.f_51 = 16;
	Local_7150.f_52 = 17;
	Local_7150.f_53 = 18;
	Local_7150.f_54 = 19;
	Local_7150.f_55 = 20;
	Local_7150.f_56 = 0;
	Local_7150.f_57 = "T1M1_PH1";
	Local_7150.f_58 = "T1M1_PH2";
	Local_7150.f_59 = "T1M1_PH3";
	Local_7150.f_60 = "T1M1_PH4";
	Local_7150.f_61 = "T1M1_PH5";
	Local_7150.f_62 = "T1M1_PH6";
	Local_7150.f_63 = "T1M1_PH7";
	Local_7150.f_64 = "T1M1_PH8";
	Local_7150.f_65 = "T1M1_PH9";
	Local_7150.f_66 = "T1M1_P10";
	Local_7150.f_67 = "T1M1_P11";
	Local_7150.f_68 = "T1M1_P12";
	Local_7150.f_69 = "T1M1_P13";
	Local_7150.f_70 = "T1M1_P14";
	Local_7150.f_71 = "T1M1_P15";
	Local_7150.f_72 = "T1M1_P16";
	Local_7150.f_73 = "T1M1_P17";
	Local_7150.f_74 = "T1M1_P18";
	Local_7150.f_75 = "T1M1_P19";
	Local_7150.f_76 = "T1M1_P20";
	Local_7150.f_77 = "T1M1_P21";
	Local_7150.f_78 = "T1M1_P22";
	Local_7150.f_79 = "T1M1_P23";
	Local_7150.f_80 = "T1M1_P24";
	Local_7150.f_81 = "T1M1_C1";
	Local_7150.f_82 = "T1M1_C2";
	Local_7150.f_83 = "T1M1_C3";
	Local_7150.f_84 = "T1M1_C4";
	Local_7150.f_85 = "T1M1_C5";
	Local_7150.f_86 = "T1M1_C6";
	Local_7150.f_87 = "T1M1_C7";
	Local_7150.f_88 = "T1M1_C8";
	Local_7150.f_89 = "T1M1_C9";
	Local_7150.f_90 = "T1M1_C10";
	Local_7150.f_91 = "T1M1_F1";
	Local_7150.f_92 = "T1M1_F2";
	Local_7150.f_93 = "T1M1_F3";
	Local_7150.f_94 = "T1M1_F4";
	Local_7150.f_95 = "T1M1_F5";
	Local_7150.f_96 = "T1M1_F6";
	Local_7150.f_97 = "T1M1_F7";
	Local_7150.f_98 = "T1M1_F8";
	Local_7150.f_99 = "T1M1_F9";
	Local_7150.f_100 = "T1M1_F10";
	Local_7150.f_101 = "T1M1_F11";
	Local_7150.f_102 = "T1M1_F12";
	Local_7150.f_103 = "T1M1_F13";
	Local_7150.f_104 = "M_PASS";
	Local_7150.f_105 = "M_FAIL";
	Local_7150.f_106 = "TRV_GT2";
	Local_7150.f_107 = "TRV_GT3";
	Local_7150.f_108 = "TRV_COVER1";
	Local_7150.f_109 = "TRV_BDY2";
	Local_7150.f_110 = "TRV_GT5";
	Local_7150.f_111 = "TRV_GETIN2";
	Local_7150.f_112 = "TRV_GT7";
	Local_7150.f_113 = "TRV_GT9";
	Local_7150.f_114 = "TRV_GT10";
	Local_7150.f_115 = "TRV_GT1";
	Local_7150.f_116 = "TRV_GT4";
	Local_7150.f_117 = "TRV_BDY1";
	Local_7150.f_118 = "TRV_GETIN1";
	Local_7150.f_119 = "TRV_COVER2";
	Local_7150.f_120 = "TRV_HULKSMASH0";
	Local_7150.f_121 = "TRV_HULKSMASH";
	Local_7150.f_122 = "TRV_HULKSMASH1";
	Local_7150.f_123 = "TRV_GRENADE";
	Local_7150.f_124 = "TRV_GT6_3";
	Local_7150.f_125 = "TRV_GT6_4";
}




void func_851()//Position - 0x8BDA5
{
	if (iLocal_6339)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
}

void func_852(bool bParam0, bool bParam1)//Position - 0x8BDB7
{
	STREAMING::REQUEST_IPL("cs4_04_trash");
	CUTSCENE::_0x06EE9048FD080382(0);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PHYSICS::ROPE_UNLOAD_TEXTURES();
	func_837();
	HUD::DISPLAY_HUD(1);
	STREAMING::CLEAR_FOCUS();
	STREAMING::_0xF8155A7F03DDFC8E(0);
	GlobalFunc_619(0);
	GlobalFunc_4935();
	if (GlobalFunc_701())
	{
		GlobalFunc_7632(0);
	}
	GRAPHICS::_0x908311265D42A820(1f);
	GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1f);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		}
	}
	if (!func_89("TRV1_FAIL"))
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
		{
			func_88("TRV1_FAIL", 1);
		}
	}
	func_853(0, bParam1);
	AUDIO::STOP_STREAM();
	HUD::UNLOCK_MINIMAP_ANGLE();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_6529 + Vector(50f, 50f, 50f), Local_6529 - Vector(50f, 50f, 50f), 1, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_01"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_02"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("g_m_y_lost_03"), 0);
	iLocal_6343 = 0;
	GlobalFunc_4948(&uLocal_659, 0, 0);
	GlobalFunc_563(0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	if (bParam0)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_853(bool bParam0, bool bParam1)//Position - 0x8BED8
{
	int iVar0;
	
	if (!bParam1)
	{
		GlobalFunc_5671(2, 0);
		GlobalFunc_7621(48, 0, 0, 1, 0);
	}
	else
	{
		GlobalFunc_7621(48, 2, 0, 1, 0);
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		CUTSCENE::STOP_CUTSCENE(1);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(68.4629f, 3625.604f, 38.6427f))
	{
		TASK::REMOVE_COVER_POINT(uLocal_809);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_835))
	{
		OBJECT::REMOVE_PICKUP(uLocal_835);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_836))
	{
		OBJECT::REMOVE_PICKUP(uLocal_836);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_830))
	{
		OBJECT::REMOVE_PICKUP(uLocal_830);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_831))
	{
		OBJECT::REMOVE_PICKUP(uLocal_831);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_832))
	{
		OBJECT::REMOVE_PICKUP(uLocal_832);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_833))
	{
		OBJECT::REMOVE_PICKUP(uLocal_833);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_834))
	{
		OBJECT::REMOVE_PICKUP(uLocal_834);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_837))
	{
		OBJECT::REMOVE_PICKUP(uLocal_837);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_838))
	{
		OBJECT::REMOVE_PICKUP(uLocal_838);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_839))
	{
		OBJECT::REMOVE_PICKUP(uLocal_839);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_840))
	{
		OBJECT::REMOVE_PICKUP(uLocal_840);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_841))
	{
		OBJECT::REMOVE_PICKUP(uLocal_841);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_842))
	{
		OBJECT::REMOVE_PICKUP(uLocal_842);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_6570))
	{
		CAM::DESTROY_CAM(uLocal_6570, 0);
	}
	STREAMING::REMOVE_IPL("TRV1_Trail_start");
	STREAMING::REQUEST_IPL("TRV1_Trail_end");
	GlobalFunc_4948(&uLocal_659, 0, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(2017.34f, 3828.292f, 31.4734f, 100f);
	}
	GlobalFunc_10617(112, 1);
	GlobalFunc_10617(113, 1);
	func_864(uLocal_6284[0], sLocal_6302);
	func_864(uLocal_6284[1], sLocal_6302);
	func_864(uLocal_6284[2], sLocal_6302);
	func_864(uLocal_6284[3], sLocal_6302);
	func_864(uLocal_6284[4], sLocal_6302);
	func_864(uLocal_6284[5], sLocal_6302);
	func_864(uLocal_6284[6], sLocal_6302);
	func_864(uLocal_6284[7], sLocal_6302);
	func_864(uLocal_6284[8], sLocal_6302);
	func_864(uLocal_6284[9], sLocal_6302);
	func_864(uLocal_6284[11], sLocal_6302);
	func_864(uLocal_6284[12], sLocal_6302);
	func_864(uLocal_6284[13], sLocal_6302);
	func_864(uLocal_6284[14], sLocal_6302);
	func_864(uLocal_6284[15], sLocal_6302);
	func_733(0, 1);
	iLocal_816 = 0;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		GlobalFunc_589(&(Local_1820[iVar0 /*34*/].f_10));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_843[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_843[iVar0]));
		}
		iVar0++;
	}
	CAM::DESTROY_ALL_CAMS(0);
	iLocal_694 = 0;
	iLocal_827 = 0;
	func_599();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	iLocal_6430 = 0;
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	HUD::SET_RADAR_ZOOM(0);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_6416))
	{
		GlobalFunc_7108(&iLocal_6416);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6564))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GlobalFunc_7108(&iLocal_6564);
		}
		else
		{
			GlobalFunc_190(&iLocal_6564);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_6301))
	{
		GlobalFunc_7108(&iLocal_6301);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_6303))
	{
		CAM::DESTROY_CAM(uLocal_6303, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6353))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6353, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6354))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6354, 0);
	}
	GlobalFunc_860();
	STREAMING::REMOVE_PTFX_ASSET();
	iLocal_6558 = 0;
	while (iLocal_6558 < Local_1820)
	{
		func_604(&(Local_1820[iLocal_6558 /*34*/]), 0);
		if (ENTITY::DOES_ENTITY_EXIST(Local_1820[iLocal_6558 /*34*/]))
		{
			if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1820[iLocal_6558 /*34*/]))
				{
					PED::DELETE_PED(&(Local_1820[iLocal_6558 /*34*/]));
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_1820[iLocal_6558 /*34*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_1820[iLocal_6558 /*34*/], 132, 1);
					PED::SET_PED_KEEP_TASK(Local_1820[iLocal_6558 /*34*/], 1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1820[iLocal_6558 /*34*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_1820[iLocal_6558 /*34*/].f_33))
		{
			HUD::REMOVE_BLIP(&(Local_1820[iLocal_6558 /*34*/].f_33));
		}
		iLocal_6558++;
	}
	iLocal_6558 = 0;
	while (iLocal_6558 < Local_3698)
	{
		Local_3698[iLocal_6558 /*34*/].f_1 = 0;
		Local_3698[iLocal_6558 /*34*/].f_2 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_3698[iLocal_6558 /*34*/]))
		{
			if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
			{
				PED::DELETE_PED(&(Local_3698[iLocal_6558 /*34*/]));
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_3698[iLocal_6558 /*34*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_3698[iLocal_6558 /*34*/], 132, 1);
					PED::SET_PED_KEEP_TASK(Local_3698[iLocal_6558 /*34*/], 1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_3698[iLocal_6558 /*34*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_3698[iLocal_6558 /*34*/].f_33))
		{
			HUD::REMOVE_BLIP(&(Local_3698[iLocal_6558 /*34*/].f_33));
		}
		iLocal_6558++;
	}
	iLocal_6558 = 0;
	while (iLocal_6558 < iLocal_6443)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6443[iLocal_6558]))
		{
			if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
			{
				OBJECT::DELETE_OBJECT(&(iLocal_6443[iLocal_6558]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_6443[iLocal_6558]));
			}
		}
		iLocal_6558++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_5759))
	{
		if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
		{
			PED::DELETE_PED(&Local_5759);
		}
		else if (bParam1 == 0)
		{
			if (!PED::IS_PED_INJURED(Local_5759))
			{
				PED::SET_PED_CONFIG_FLAG(Local_5759, 132, 1);
				PED::SET_PED_KEEP_TASK(Local_5759, 1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_5759);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_5769))
	{
		if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
		{
			PED::DELETE_PED(&Local_5769);
		}
		else
		{
			if (!PED::IS_PED_INJURED(Local_5769))
			{
				PED::SET_PED_CONFIG_FLAG(Local_5769, 132, 1);
				PED::SET_PED_KEEP_TASK(Local_5769, 1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_5769);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6562))
	{
		if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!PED::IS_PED_INJURED(iLocal_6562))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_6562);
			}
			PED::DELETE_PED(&iLocal_6562);
		}
		else
		{
			if (!PED::IS_PED_DEAD_OR_DYING(iLocal_6562, 1))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_6562, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_6562))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_6562);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_6562);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6563))
	{
		if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!PED::IS_PED_INJURED(iLocal_6563))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_6563);
			}
			PED::DELETE_PED(&iLocal_6563);
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_6563))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_6563))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_6563);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_6563, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 200f, -1, 0, 0);
				}
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_6563);
		}
	}
	iLocal_6558 = 0;
	while (iLocal_6558 <= 3)
	{
		func_859(&(Local_852[iLocal_6558 /*65*/]), bParam0);
		iLocal_6558++;
	}
	iLocal_6559 = 0;
	while (iLocal_6559 <= 4)
	{
		iLocal_6560 = 0;
		while (iLocal_6560 <= 3)
		{
			func_859(&(Local_4343[iLocal_6559 /*283*/][iLocal_6560 /*65*/]), bParam0);
			iLocal_6560++;
		}
		iLocal_6559++;
	}
	iLocal_4342 = 0;
	GlobalFunc_4720(uLocal_6568);
	GlobalFunc_4720(uLocal_6567);
	GlobalFunc_4720(uLocal_6569);
	iLocal_6559 = 0;
	while (iLocal_6559 <= 4)
	{
		GlobalFunc_4720(Local_4343[iLocal_6559 /*283*/].f_261);
		iLocal_6559++;
	}
	iLocal_6558 = 0;
	while (iLocal_6558 <= 4)
	{
		GlobalFunc_4720(Local_5779[iLocal_6558 /*9*/].f_1);
		iLocal_6558++;
	}
	GlobalFunc_4720(Local_5759.f_1);
	GlobalFunc_4720(Local_5769.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_6147))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_6147, 0))
			{
				func_857(Local_6147, bParam0);
			}
			else if (bParam0 == 1)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				func_857(Local_6147, bParam0);
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN())
				{
					if (bParam1 == 0)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
				func_857(Local_6147, bParam0);
			}
		}
		else
		{
			func_857(Local_6147, bParam0);
		}
	}
	func_857(Local_6159, bParam0);
	iLocal_6558 = 0;
	while (iLocal_6558 <= 1)
	{
		func_857(Local_6171[iLocal_6558 /*12*/], bParam0);
		iLocal_6558++;
	}
	iLocal_6558 = 0;
	while (iLocal_6558 <= 25)
	{
		func_857(Local_5834[iLocal_6558 /*12*/], bParam0);
		iLocal_6558++;
	}
	iLocal_6558 = 0;
	while (iLocal_6558 <= 1)
	{
		func_857(Local_6196[iLocal_6558 /*12*/], bParam0);
		iLocal_6558++;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6309))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6309, 0);
		iLocal_6431 = 0;
		iLocal_6432 = 0;
		iLocal_6433 = 0;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6310))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6310, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6311))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6311, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6312))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6312, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_6313))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_6313, 0);
	}
	func_856(&Local_5769, bParam0);
	func_856(&Local_5759, bParam0);
	func_856(&Local_5825, bParam0);
	iLocal_6558 = 0;
	while (iLocal_6558 <= 4)
	{
		func_856(&(Local_5779[iLocal_6558 /*9*/]), bParam0);
		iLocal_6558++;
	}
	func_855();
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
	CAM::DESTROY_ALL_CAMS(0);
	func_599();
	func_97(1, 0, 2000);
	if (iLocal_6318 == 1)
	{
		GlobalFunc_139();
	}
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-110.4747f, 4277.038f, 35.7174f, -214.5608f, 4205.549f, 49.4689f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(5.9328f, 3682.41f, 0f, 110.0308f, 3801.651f, 100f, 1, 1);
	MISC::SET_TIME_SCALE(1f);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
}


void func_855()//Position - 0x8C8D8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_6792 - 1))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_6793[iVar0 /*3*/]);
		Local_6793[iVar0 /*3*/].f_1 = 0;
		Local_6793[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_6944 - 1))
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(Local_6945[iVar0 /*4*/].f_1, Local_6945[iVar0 /*4*/]);
		Local_6945[iVar0 /*4*/].f_2 = 0;
		Local_6945[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

void func_856(int iParam0, bool bParam1)//Position - 0x8C953
{
	if (bParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
				{
					ENTITY::DETACH_ENTITY(*uParam0, 0, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
			PED::DELETE_PED(uParam0);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 132, 1);
			PED::SET_PED_KEEP_TASK(*iParam0, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_857(int iParam0, bool bParam1)//Position - 0x8C9D0
{
	if (bParam1 || CAM::IS_SCREEN_FADED_OUT())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1) == iParam0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iParam0, 0) + Vector(0f, 0f, 2f), 1, 0, 0, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, 0, 1);
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 1, 0);
			GlobalFunc_7108(&iParam0);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		GlobalFunc_190(&iParam0);
	}
}


void func_859(var uParam0, bool bParam1)//Position - 0x8CA7B
{
	func_856(uParam0, bParam1);
	GlobalFunc_4720(uParam0->f_1);
	if (uParam0->f_23)
	{
		TASK::REMOVE_COVER_POINT(uParam0->f_22);
		uParam0->f_23 = 0;
	}
	uParam0->f_24 = 0;
}





void func_864(int iParam0, char* sParam1)//Position - 0x8CBC9
{
	VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0, sParam1);
}





void func_869()//Position - 0x8CE23
{
	var uVar0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_5769))
	{
		if (!PED::IS_PED_INJURED(Local_5769))
		{
			PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(Local_5769, 0), 10f, 0, 1, &uVar0, 0, 0, -1);
			if (!func_89("WADE ARREST"))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_6565);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_HANDS_UP(0, -1, uVar0, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_6565);
				TASK::TASK_PERFORM_SEQUENCE(Local_5769, uLocal_6565);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_6565);
				PED::SET_PED_KEEP_TASK(Local_5769, 1);
				func_88("WADE ARREST", 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_5759))
	{
		if (!PED::IS_PED_INJURED(Local_5759))
		{
			PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(Local_5759, 0), 10f, 0, 1, &uVar1, 0, 0, -1);
			if (!func_89("RON ARREST"))
			{
				TASK::TASK_HANDS_UP(Local_5759, -1, 0, -1, 0);
				PED::SET_PED_KEEP_TASK(Local_5769, 1);
				func_88("RON ARREST", 1);
			}
		}
	}
}

