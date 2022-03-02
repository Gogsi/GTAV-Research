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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = -1;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 1000;
	var uLocal_37 = 1000;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	struct<5> Local_60 = { 0, 0, 0, 0, 0 } ;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 21;
	var uLocal_68 = 6;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	struct<10> Local_72[16];
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	int iLocal_237[120] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_368 = 0;
	int iLocal_369[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_390 = 0;
	int iLocal_391[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 8;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 4;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 4;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 4;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 4;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 4;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 4;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 4;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	struct<40> Local_491[55];
	struct<40> Local_2692[40];
	var uLocal_4293 = 3;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	struct<19> Local_4414[35];
	var uLocal_5080 = 0;
	int iLocal_5081 = 0;
	int iLocal_5082 = 0;
	int iLocal_5083 = 0;
	int iLocal_5084 = 0;
	int iLocal_5085 = 0;
	int iLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	int iLocal_5089 = 0;
	int iLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092[3] = { 0, 0, 0 };
	int iLocal_5096 = 0;
	var uLocal_5097[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_5108[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_5115 = 0;
	int iLocal_5116 = 0;
	struct<5> Local_5117 = { 0, 0, 0, 0, 0 } ;
	var uLocal_5122 = 0;
	struct<27> Local_5123[8];
	struct<27> Local_5340[4];
	struct<27> Local_5449[2];
	struct<20> Local_5504[1];
	struct<20> Local_5525[1];
	struct<26> Local_5546 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_5572 = 0;
	struct<8> Local_5573 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	struct<8> Local_5583 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	struct<10> Local_5593[2];
	struct<10> Local_5614[3];
	struct<3> Local_5645 = { 0, 0, 0 } ;
	int iLocal_5648 = 0;
	int iLocal_5649 = 0;
	int iLocal_5650 = 0;
	int iLocal_5651 = 0;
	int iLocal_5652 = 0;
	int iLocal_5653 = 0;
	int iLocal_5654 = 0;
	int iLocal_5655 = 0;
	int iLocal_5656 = 0;
	int iLocal_5657 = 0;
	int iLocal_5658 = 0;
	int iLocal_5659 = 0;
	int iLocal_5660 = 0;
	int iLocal_5661[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_5683 = 0f;
	float fLocal_5684 = 0f;
	float fLocal_5685 = 0f;
	char* sLocal_5686 = NULL;
	int iLocal_5687 = 0;
	int iLocal_5688 = 0;
	int iLocal_5689 = 0;
	int iLocal_5690 = 0;
	int iLocal_5691 = 0;
	int iLocal_5692 = 0;
	int iLocal_5693 = 0;
	int iLocal_5694 = 0;
	int iLocal_5695 = 0;
	int iLocal_5696 = 0;
	int iLocal_5697 = 0;
	int iLocal_5698 = 0;
	int iLocal_5699 = 0;
	int iLocal_5700 = 0;
	int iLocal_5701 = 0;
	int iLocal_5702 = 0;
	int iLocal_5703 = 0;
	int iLocal_5704 = 0;
	int iLocal_5705 = 0;
	int iLocal_5706 = 0;
	int iLocal_5707 = 0;
	int iLocal_5708 = 0;
	int iLocal_5709 = 0;
	int iLocal_5710 = 0;
	int iLocal_5711 = 0;
	int iLocal_5712 = 0;
	var uLocal_5713 = 0;
	struct<4> Local_5714[6];
	var uLocal_5739[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5755 = 0;
	int iLocal_5756 = 0;
	var uLocal_5757[5] = { 0, 0, 0, 0, 0 };
	int iLocal_5763 = 0;
	var uLocal_5764 = 0;
	int iLocal_5765 = 0;
	int iLocal_5766 = 0;
	int iLocal_5767 = 0;
	int iLocal_5768 = 0;
	int iLocal_5769[4] = { 0, 0, 0, 0 };
	int iLocal_5774[2] = { 0, 0 };
	int iLocal_5777[4] = { 0, 0, 0, 0 };
	int iLocal_5782 = 0;
	int iLocal_5783 = 0;
	int iLocal_5784 = 0;
	int iLocal_5785 = 0;
	int iLocal_5786[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_5795 = 0;
	int iLocal_5796 = 0;
	int iLocal_5797 = 0;
	int iLocal_5798[5] = { 0, 0, 0, 0, 0 };
	int iLocal_5804 = 0;
	int iLocal_5805 = 0;
	int iLocal_5806 = 0;
	bool bLocal_5807 = 0;
	int iLocal_5808 = 0;
	int iLocal_5809 = 0;
	int iLocal_5810 = 0;
	int iLocal_5811 = 0;
	int iLocal_5812 = 0;
	int iLocal_5813 = 0;
	int iLocal_5814 = 0;
	int iLocal_5815 = 0;
	int iLocal_5816 = 0;
	int iLocal_5817 = 0;
	int iLocal_5818 = 0;
	int iLocal_5819 = 0;
	int iLocal_5820 = 0;
	int iLocal_5821 = 0;
	int iLocal_5822 = 0;
	int iLocal_5823 = 0;
	int iLocal_5824 = 0;
	int iLocal_5825 = 0;
	int iLocal_5826 = 0;
	int iLocal_5827 = 0;
	int iLocal_5828 = 0;
	var uLocal_5829 = 0;
	int iLocal_5830 = 0;
	int iLocal_5831 = 0;
	int iLocal_5832 = 0;
	int iLocal_5833 = 0;
	int iLocal_5834 = 0;
	int iLocal_5835 = 0;
	int iLocal_5836 = 0;
	int iLocal_5837 = 0;
	int iLocal_5838 = 0;
	int iLocal_5839 = 0;
	int iLocal_5840 = 0;
	int iLocal_5841 = 0;
	int iLocal_5842 = 0;
	int iLocal_5843 = 0;
	int iLocal_5844 = 0;
	int iLocal_5845 = 0;
	int iLocal_5846 = 0;
	int iLocal_5847 = 0;
	int iLocal_5848 = 0;
	int iLocal_5849 = 0;
	int iLocal_5850 = 0;
	int iLocal_5851 = 0;
	float fLocal_5852 = 0f;
	float fLocal_5853 = 0f;
	float fLocal_5854 = 0f;
	float fLocal_5855 = 0f;
	var uLocal_5856 = 0;
	float fLocal_5857 = 0f;
	float fLocal_5858 = 0f;
	float fLocal_5859 = 0f;
	struct<3> Local_5860 = { 0, 0, 0 } ;
	float fLocal_5863 = 0f;
	float fLocal_5864 = 0f;
	float fLocal_5865 = 0f;
	float fLocal_5866 = 0f;
	float fLocal_5867 = 0f;
	int iLocal_5868 = 0;
	float fLocal_5869 = 0f;
	float fLocal_5870 = 0f;
	float fLocal_5871 = 0f;
	int iLocal_5872 = 0;
	int iLocal_5873 = 0;
	int iLocal_5874 = 0;
	struct<6> Local_5875 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_5881 = 0;
	var uLocal_5882 = 1092616192;
	var uLocal_5883 = 1101004800;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 3;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	int iLocal_5900 = 0;
	int iLocal_5901 = 0;
	int iLocal_5902 = 0;
	int iLocal_5903 = 0;
	int iLocal_5904 = 0;
	int iLocal_5905 = 0;
	var uLocal_5906 = 0;
	int iLocal_5907 = 0;
	int iLocal_5908 = 0;
	int iLocal_5909 = 0;
	int iLocal_5910 = 0;
	int iLocal_5911 = 0;
	int iLocal_5912 = 0;
	int iLocal_5913 = 0;
	int iLocal_5914 = 0;
	int iLocal_5915 = 0;
	int iLocal_5916 = 0;
	int iLocal_5917 = 0;
	int iLocal_5918 = 0;
	int iLocal_5919 = 0;
	struct<3> Local_5920 = { 0, 0, 0 } ;
	int iLocal_5923 = 0;
	int iLocal_5924 = 0;
	int iLocal_5925 = 0;
	int iLocal_5926 = 0;
	int iLocal_5927 = 0;
	int iLocal_5928 = 0;
	var uLocal_5929 = 0;
	struct<3> Local_5930 = { 0, 0, 0 } ;
	int iLocal_5933 = 0;
	int iLocal_5934 = 0;
	int iLocal_5935 = 0;
	int iLocal_5936 = 0;
	float fLocal_5937 = 0f;
	int iLocal_5938 = 0;
	int iLocal_5939 = 0;
	int iLocal_5940 = 0;
	float fLocal_5941 = 0f;
	float fLocal_5942 = 0f;
	char cLocal_5943[24] = "";
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	int iLocal_5949 = 0;
	int iLocal_5950 = 0;
	int iLocal_5951 = 0;
	int iLocal_5952 = 0;
	int iLocal_5953 = 0;
	int iLocal_5954 = 0;
	int iLocal_5955 = 0;
	int iLocal_5956 = 0;
	int iLocal_5957 = 0;
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
	fLocal_41 = 80f;
	fLocal_42 = 140f;
	fLocal_43 = 180f;
	iLocal_46 = 3;
	iLocal_51 = 1;
	iLocal_52 = 65;
	iLocal_53 = 49;
	iLocal_54 = 64;
	uLocal_58 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_59 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_5645 = { 1574.84f, 3363.84f, 49.43f };
	sLocal_5686 = "RCSJC";
	iLocal_5695 = AUDIO::GET_SOUND_ID();
	iLocal_5696 = AUDIO::GET_SOUND_ID();
	iLocal_5707 = 5000;
	iLocal_5711 = -1;
	iLocal_5846 = -1;
	iLocal_5847 = -1;
	iLocal_5848 = -1;
	fLocal_5852 = 10000f;
	fLocal_5853 = 11000f;
	fLocal_5854 = 9000f;
	fLocal_5855 = 10000f;
	fLocal_5858 = 1f;
	fLocal_5866 = 1.45f;
	fLocal_5869 = 0f;
	fLocal_5870 = 10f;
	fLocal_5871 = -10f;
	iLocal_5933 = 12000;
	iLocal_5934 = 240000;
	StringCopy(&cLocal_5943, "Enemy ", 24);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
		GlobalFunc_10632();
		GlobalFunc_2237(8);
		func_800(1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_TREV2", 0);
		if (iLocal_5765)
		{
		}
		if (iLocal_5874 > 1)
		{
			if (iLocal_5874 != 10)
			{
				func_794();
			}
			func_793();
			func_792();
			if (iLocal_5874 >= 7)
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
			}
			else if (iLocal_5874 == 2)
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
			}
			else if (iLocal_5874 == 3)
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
			}
			else if (iLocal_5874 == 5)
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
			}
			else if (iLocal_5874 == 6)
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
			}
		}
		if (iLocal_5874 > 6)
		{
			func_791();
			func_790();
		}
		if (iLocal_5874 == 5)
		{
			func_789();
		}
		if (iLocal_5874 == 6)
		{
			if (iLocal_5819 > 7)
			{
				func_787();
			}
		}
		else if (iLocal_5874 > 6)
		{
			if (iLocal_5874 != 9)
			{
				func_787();
			}
		}
		if (iLocal_5874 == 6)
		{
			if (iLocal_5819 != 99)
			{
				if (iLocal_5819 > 7)
				{
					func_785();
					func_784();
				}
			}
		}
		else if (iLocal_5874 == 7)
		{
			func_785();
			if (iLocal_5819 < 2)
			{
			}
		}
		if (iLocal_5874 > 5)
		{
			func_761();
			func_760();
		}
		switch (iLocal_5874)
		{
			case 0:
				func_696();
				break;
			
			case 1:
				func_666();
				break;
			
			case 2:
				func_610();
				break;
			
			case 3:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
				func_580();
				break;
			
			case 4:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
				func_575();
				break;
			
			case 5:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
				func_555();
				break;
			
			case 6:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				func_526();
				break;
			
			case 7:
				func_497();
				break;
			
			case 8:
				func_55();
				break;
			
			case 9:
				func_38();
				break;
			
			case 10:
				func_25();
				break;
			
			case 11:
				func_21();
				break;
			
			case 12:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x37F
{
	char* sVar0;
	
	AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
	switch (iLocal_5116)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_FAIL";
			break;
		
		case 1:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_F_RON_K";
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_F_RON_L";
			break;
		
		case 3:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_F_RON_LO";
			break;
		
		case 4:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_F_RON_A";
			break;
		
		case 5:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_F_RON_S";
			break;
		
		case 7:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_R_QUAD";
			break;
		
		case 8:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_R_QUAD_S";
			break;
		
		case 9:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_T_QUAD";
			break;
		
		case 10:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_T_QUAD_S";
			break;
		
		case 12:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_F_CARGO";
			break;
		
		case 11:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_F_CUBA";
			break;
		
		case 18:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_F_CUBALA";
			break;
		
		case 13:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_F_BOATS";
			break;
		
		case 14:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_F_T_DEAD";
			break;
		
		case 15:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_FAILSHOP2";
			break;
		
		case 19:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_FAIL1";
			break;
		
		case 16:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_SPOOK";
			break;
		
		case 17:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_F_TOOLATE";
			break;
		
		case 20:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_FAILSHOP3";
			break;
		
		case 6:
			HUD::CLEAR_PRINTS();
			sVar0 = "SJC_F_A";
			break;
	}
	GlobalFunc_10835(sVar0);
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	if (bLocal_5807)
	{
	}
	GlobalFunc_565(502, 0, 1);
	STREAMING::REMOVE_IPL("airfield");
	func_800(1);
}




















void func_21()//Position - 0x1636
{
	GlobalFunc_5103(0, 0);
	GlobalFunc_2781(500);
	func_800(1);
}




void func_25()//Position - 0x1788
{
	func_37();
	if (iLocal_5819 > 1)
	{
		func_32();
	}
	if (iLocal_5819 > 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
			{
			}
		}
	}
	switch (iLocal_5819)
	{
		case 0:
			func_31(1, "RCSJC");
			func_31(2, "RCSJC");
			func_31(7, "RCSJC");
			func_31(9, "RCSJC");
			func_31(13, "RCSJC");
			func_31(23, "RCSJC");
			func_31(24, "RCSJC");
			func_31(25, "RCSJC");
			func_31(31, "RCSJC");
			func_31(32, "RCSJC");
			func_31(33, "RCSJC");
			func_31(34, "RCSJC");
			func_31(35, "RCSJC");
			func_30(joaat("g_m_y_lost_01"));
			func_30(joaat("hexer"));
			func_30(joaat("hauler"));
			func_30(joaat("tanker"));
			func_30(joaat("gburrito"));
			if (!PED::IS_PED_INJURED(Local_5546))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_5546, 1000);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_5546, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_5546, 0);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			GlobalFunc_2781(500);
			iLocal_5819++;
			break;
		
		case 1:
			if (func_29("RCSJC"))
			{
				if (func_28())
				{
					func_26(13, joaat("hexer"), 1582.074f, 3365.721f, 36.4635f, 90f, joaat("g_m_y_lost_01"), 1, 13, 0, 0, -1, joaat("weapon_carbinerifle"));
					func_26(14, joaat("hexer"), 1748.88f, 3045.37f, 61.45f, 262.61f, joaat("g_m_y_lost_01"), 1, 14, 0, 0, -1, joaat("weapon_pistol"));
					func_26(24, joaat("hexer"), 1330.454f, 3159.925f, 39.4563f, 278.982f, joaat("g_m_y_lost_01"), 1, 24, 0, 0, -1, joaat("weapon_pistol"));
					func_26(8, joaat("gburrito"), 1088.475f, 3145.329f, 39.4609f, 296.792f, joaat("g_m_y_lost_01"), 0, 0, 0, 0, -1, joaat("weapon_pistol"));
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[8 /*19*/], 1);
					func_26(25, joaat("gburrito"), 1417.43f, 3006.3f, 40.33f, 283.3621f, joaat("g_m_y_lost_01"), 1, 25, 2, 0, -1, joaat("weapon_carbinerifle"));
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[25 /*19*/], 1);
					func_26(27, joaat("gburrito"), 1548.637f, 3140.068f, 39.5341f, 317.6045f, joaat("g_m_y_lost_01"), 1, 25, 3, 0, -1, joaat("weapon_carbinerifle"));
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[27 /*19*/], 1);
					iLocal_5819++;
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				VEHICLE::SET_VEHICLE_STRONG(Local_4414[1 /*19*/], 1);
				ENTITY::SET_ENTITY_HEALTH(Local_4414[1 /*19*/], 2000);
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/], 2, "RCSJC", 1);
					VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], 0.6f);
				}
				iLocal_5819++;
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]) > 4818.6f)
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], 0.45f);
					}
				}
			}
			break;
	}
}

void func_26(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x1AA3
{
	int iVar0;
	
	Local_4414[iParam0 /*19*/] = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
	if (iParam0 != 2)
	{
		if (iParam11 != -1)
		{
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_4414[iParam0 /*19*/], iParam11);
		}
	}
	if (bParam7)
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[iParam0 /*19*/], -1))
		{
			Local_2692[iParam8 /*40*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4414[iParam0 /*19*/], 26, iParam6, -1, 1, 1);
		}
		WEAPON::GIVE_WEAPON_TO_PED(Local_2692[iParam8 /*40*/], iParam12, 999, 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(Local_2692[iParam8 /*40*/], joaat("weapon_pistol"), -1, 0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[iParam8 /*40*/], iLocal_490);
		PED::SET_PED_AS_ENEMY(Local_2692[iParam8 /*40*/], 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_2692[iParam8 /*40*/], 1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[iParam8 /*40*/], 1);
		PED::SET_PED_MONEY(Local_2692[iParam8 /*40*/], 0);
		PED::SET_PED_ACCURACY(Local_2692[iParam8 /*40*/], 3);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4414[iParam0 /*19*/], 1);
		PED::_0xF2BEBCDFAFDAA19E(0);
		PED::SET_PED_DIES_WHEN_INJURED(Local_2692[iParam8 /*40*/], 1);
		if (Local_2692[iParam8 /*40*/] != 0)
		{
			GlobalFunc_593(Local_2692[iParam8 /*40*/], 1);
		}
	}
	if (iParam9 > 0)
	{
		if (iParam9 > VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_4414[iParam0 /*19*/]))
		{
			iParam9 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_4414[iParam0 /*19*/]);
		}
		iVar0 = 1;
		while (iVar0 <= iParam9)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[iParam0 /*19*/], (iVar0 - 1)))
			{
				Local_2692[(iParam8 + iVar0) /*40*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4414[iParam0 /*19*/], 26, iParam6, (iVar0 - 1), 1, 1);
			}
			PED::SET_PED_MONEY(Local_2692[iParam8 + 1 /*40*/], 0);
			WEAPON::GIVE_WEAPON_TO_PED(Local_2692[(iParam8 + iVar0) /*40*/], joaat("weapon_carbinerifle"), 200, 1, 1);
			PED::SET_PED_COMBAT_ABILITY(Local_2692[(iParam8 + iVar0) /*40*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[(iParam8 + iVar0) /*40*/], 13, 1);
			PED::SET_PED_ACCURACY(Local_2692[(iParam8 + iVar0) /*40*/], 5);
			PED::SET_PED_COMBAT_MOVEMENT(Local_2692[(iParam8 + iVar0) /*40*/], 2);
			PED::SET_PED_COMBAT_RANGE(Local_2692[(iParam8 + iVar0) /*40*/], 2);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[(iParam8 + iVar0) /*40*/], iLocal_490);
			PED::SET_PED_AS_ENEMY(Local_2692[(iParam8 + iVar0) /*40*/], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[(iParam8 + iVar0) /*40*/], 1);
			ENTITY::SET_ENTITY_PROOFS(Local_4414[iParam0 /*19*/], 0, 0, 0, iParam10, iParam10, 0, 0, 0);
			PED::_0xF2BEBCDFAFDAA19E(0);
			PED::SET_PED_DIES_WHEN_INJURED(Local_2692[(iParam8 + iVar0) /*40*/], 1);
			GlobalFunc_593(Local_2692[(iParam8 + iVar0) /*40*/], 1);
			iVar0++;
		}
	}
}


int func_28()//Position - 0x1D85
{
	int iVar0;
	
	if (iLocal_368 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_368 - 1))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_369[iVar0]))
			{
				SYSTEM::WAIT(0);
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_29(char* sParam0)//Position - 0x1DC3
{
	int iVar0;
	
	if (iLocal_390 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_390 - 1))
		{
			if (!MISC::IS_STRING_NULL(sParam0))
			{
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_391[iVar0], sParam0))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_30(int iParam0)//Position - 0x1E08
{
	int iVar0;
	bool bVar1;
	
	STREAMING::REQUEST_MODEL(iParam0);
	if (iLocal_368 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_368 - 1))
		{
			if (iLocal_369[iVar0] == iParam0)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			iLocal_369[iLocal_368] = iParam0;
			iLocal_368++;
		}
	}
	else if (iLocal_368 == 0)
	{
		iLocal_369[0] = iParam0;
		iLocal_368++;
	}
}

void func_31(int iParam0, char* sParam1)//Position - 0x1E74
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
	if (iLocal_390 > 0)
	{
		if (iLocal_390 < 9)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_390 - 1))
			{
				if (iLocal_391[iVar0] == iParam0)
				{
					bVar1 = true;
				}
				else if (iLocal_391[iVar0] != iParam0)
				{
				}
				iVar0++;
			}
			if (!bVar1)
			{
				iLocal_391[iLocal_390] = iParam0;
				iLocal_390++;
			}
		}
	}
	else if (iLocal_390 == 0)
	{
		iLocal_391[0] = iParam0;
		iLocal_390++;
	}
}

void func_32()//Position - 0x1EFC
{
	if (!func_36("TRIGGER BIKER BY BOX"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[14 /*19*/], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[14 /*19*/]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_2692[14 /*40*/]))
						{
							if (!PED::IS_PED_INJURED(Local_2692[14 /*40*/]))
							{
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_2692[14 /*40*/], 3);
								PED::SET_PED_ACCURACY(Local_2692[14 /*40*/], 10);
								WEAPON::GIVE_WEAPON_TO_PED(Local_2692[14 /*40*/], joaat("weapon_pistol"), 999, 1, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[14 /*40*/], joaat("weapon_pistol"), 1);
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[14 /*40*/], 0))
								{
									TASK::TASK_DRIVE_BY(Local_2692[14 /*40*/], Local_5546, 0, 0f, 0f, 0f, 400f, 80, 1, -753768974);
								}
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[14 /*40*/], iLocal_490);
								VEHICLE::SET_PLAYBACK_SPEED(Local_4414[14 /*19*/], 1f);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[14 /*19*/], 0))
								{
									AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[14 /*19*/], "TREVOR_2_PLANE_WING_BIKERS_GROUP", 0);
								}
								func_33("TRIGGER BIKER BY BOX", 1);
							}
						}
					}
				}
			}
		}
	}
	if (!func_36("FROM BEHIND BIKER"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(36, "RCSJC");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(36, "RCSJC"))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]) > 16153.05f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[13 /*19*/], 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[13 /*19*/]))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[13 /*19*/], 36, "RCSJC", 1);
							}
							else
							{
								ENTITY::SET_ENTITY_PROOFS(Local_4414[13 /*19*/], 0, 0, 1, 1, 1, 0, 0, 0);
								VEHICLE::SET_PLAYBACK_SPEED(Local_4414[13 /*19*/], 1f);
								func_33("FROM BEHIND BIKER", 1);
							}
						}
					}
				}
			}
		}
	}
	if (!func_36("RUNWAY BIKER"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]) > 4283.405f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[24 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[24 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[24 /*19*/], 34, "RCSJC", 1);
						}
						else
						{
							ENTITY::SET_ENTITY_PROOFS(Local_4414[24 /*19*/], 0, 0, 1, 1, 1, 0, 0, 0);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[24 /*19*/], 1f);
							func_33("RUNWAY BIKER", 1);
						}
					}
				}
			}
		}
	}
	if (!func_36("TRIGGER RIGHT HAND SIDE VAN FIRST"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]) > 4818.6f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[8 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[8 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[8 /*19*/], 32, "RCSJC", 1);
						}
						else
						{
							ENTITY::SET_ENTITY_PROOFS(Local_4414[8 /*19*/], 0, 0, 1, 1, 1, 0, 0, 0);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[8 /*19*/], 1f);
							func_33("TRIGGER RIGHT HAND SIDE VAN FIRST", 1);
						}
					}
				}
			}
		}
	}
	if (!func_36("TRIGGER LEFT HAND SIDE VAN FIRST"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]) > 14592.76f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[25 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[25 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[25 /*19*/], 33, "RCSJC", 1);
						}
						else
						{
							ENTITY::SET_ENTITY_PROOFS(Local_4414[25 /*19*/], 0, 0, 1, 1, 1, 0, 0, 0);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[25 /*19*/], 1f);
							func_33("TRIGGER LEFT HAND SIDE VAN FIRST", 1);
						}
					}
				}
			}
		}
	}
	if (!func_36("TRIGGER FINAL VAN"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]) > 15237.84f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[27 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[27 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[27 /*19*/], 35, "RCSJC", 1);
						}
						else
						{
							ENTITY::SET_ENTITY_PROOFS(Local_4414[27 /*19*/], 0, 0, 1, 1, 1, 0, 0, 0);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[27 /*19*/], 1f);
							func_33("TRIGGER LEFT HAND SIDE VAN FIRST", 1);
						}
					}
				}
			}
		}
	}
}

void func_33(char* sParam0, bool bParam1)//Position - 0x2307
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	if (bParam1)
	{
		bVar2 = false;
		while (!bVar2 && iVar1 < iLocal_237)
		{
			if (iLocal_237[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_237[iVar1] == 0)
			{
				iLocal_237[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_35(iVar0);
		if (iVar3 != -1)
		{
			iLocal_237[iVar3] = 0;
			func_34();
		}
	}
}

void func_34()//Position - 0x237D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_237 - 1))
	{
		if (iLocal_237[iVar0] == 0)
		{
			if (iLocal_237[iVar0 + 1] != 0)
			{
				iLocal_237[iVar0] = iLocal_237[iVar0 + 1];
				iLocal_237[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_35(int iParam0)//Position - 0x23CA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_237)
	{
		if (iLocal_237[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_237[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_36(char* sParam0)//Position - 0x240A
{
	return func_35(MISC::GET_HASH_KEY(sParam0)) != -1;
}

void func_37()//Position - 0x241E
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
	{
		uLocal_5739[1] = OBJECT::CREATE_OBJECT(joaat("prop_gas_tank_02a"), 1683.27f, 3278.7f, 39.93f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(uLocal_5739[1], 0f, 0f, 109.96f, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(uLocal_5739[1], 1000);
		ENTITY::SET_ENTITY_HEALTH(uLocal_5739[1], 1000);
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_5739[1], 1);
		ENTITY::SET_ENTITY_PROOFS(uLocal_5739[1], 1, 1, 1, 1, 1, 0, 0, 0);
	}
	iLocal_5822 = 0;
	while (iLocal_5822 <= 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[iLocal_5822]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_5739[iLocal_5822], 1);
		}
		iLocal_5822++;
	}
}

void func_38()//Position - 0x24D2
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::DISPLAY_HUD(0);
	HUD::DISPLAY_RADAR(0);
	switch (iLocal_5819)
	{
		case 0:
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("TRV2_MCS_8", 3, 8);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_5808 = 0;
			HUD::CLEAR_HELP(1);
			GlobalFunc_5105();
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
			iLocal_5819++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_4414[1 /*19*/], 0);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FLIGHT_START"))
			{
				AUDIO::STOP_AUDIO_SCENE("TREVOR_2_FLIGHT_START");
			}
			func_50();
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[2 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_4414[2 /*19*/], 0);
					}
				}
				iLocal_5797 = 1;
				iLocal_5819++;
			}
			break;
		
		case 2:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (!GlobalFunc_2(0))
			{
				func_39();
			}
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			iLocal_5819++;
			break;
		
		case 3:
			if (!GlobalFunc_2(0))
			{
				GlobalFunc_2781(500);
			}
			iLocal_5874 = 11;
			break;
	}
}

void func_39()//Position - 0x25EB
{
	SYSTEM::SETTIMERA(0);
	iLocal_5768 = 1;
	while (iLocal_5768)
	{
		SYSTEM::WAIT(0);
		if (iLocal_5821 < 7)
		{
			STREAMING::SET_RENDER_HD_ONLY(1);
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		switch (iLocal_5821)
		{
			case 0:
				GlobalFunc_702(1, 1, 1);
				if (!CAM::DOES_CAM_EXIST(uLocal_5091))
				{
					uLocal_5091 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
					CAM::SET_CAM_PARAMS(uLocal_5091, 2130.669f, 4814.803f, 42.07781f, 7.432641f, -1.062589f, -174.0854f, 32.77121f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_5091, 2130.52f, 4812.049f, 42.35103f, 7.652661f, -0.093014f, -177.0403f, 32.78032f, 12000, 3, 1, 2);
					CAM::SET_CAM_FAR_CLIP(uLocal_5091, 55f);
					CAM::SHAKE_CAM(uLocal_5091, "HAND_SHAKE", 0.05f);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					PED::DELETE_PED(&Local_5546);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					if (!VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(Local_4414[1 /*19*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4414[1 /*19*/], 1000);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[1 /*19*/], 1000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_4414[1 /*19*/], 1000f);
					}
					VEHICLE::CONTROL_LANDING_GEAR(Local_4414[1 /*19*/], 2);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4414[1 /*19*/]);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[1 /*19*/], 1);
				}
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(-68.64695f, -1819.643f, 25.94197f, 30f, 2);
				AUDIO::START_AUDIO_SCENE("TREVOR_2_PROPERTY_INTRO_SCENE");
				SYSTEM::SETTIMERB(0);
				iLocal_5821++;
				break;
			
			case 1:
				if (!func_36("SJC_PROPH1"))
				{
					HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
					AUDIO::TRIGGER_MUSIC_EVENT("PROP_INTRO_START");
					GlobalFunc_1("SJC_PROPH1");
					func_33("SJC_PROPH1", 1);
				}
				if (SYSTEM::TIMERB() > 6000)
				{
					if (!func_36("SJC_PROPH2"))
					{
						HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
						GlobalFunc_1("SJC_PROPH2");
						func_33("SJC_PROPH2", 1);
					}
				}
				if (SYSTEM::TIMERB() > 12000 && STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					if (CAM::DOES_CAM_EXIST(uLocal_5091))
					{
						CAM::SET_CAM_PARAMS(uLocal_5091, -46.3f, -1828.6f, 28.2f, 5.1f, 0f, 74.6f, 29f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(uLocal_5091, -49f, -1828.9f, 28.4f, 5.3f, 0f, 71.7f, 29f, 14000, 3, 3, 2);
						CAM::SET_CAM_FAR_CLIP(uLocal_5091, 55f);
						CAM::SHAKE_CAM(uLocal_5091, "HAND_SHAKE", 0.09f);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					}
					else
					{
						uLocal_5091 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
						CAM::SET_CAM_PARAMS(uLocal_5091, -46.3f, -1828.6f, 28.2f, 5.1f, 0f, 74.6f, 29f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(uLocal_5091, -49f, -1828.9f, 28.4f, 5.3f, 0f, 71.7f, 29f, 14000, 3, 3, 2);
						CAM::SET_CAM_FAR_CLIP(uLocal_5091, 55f);
						CAM::SHAKE_CAM(uLocal_5091, "HAND_SHAKE", 0.09f);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					}
					GlobalFunc_2781(500);
					HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
					GlobalFunc_1("SJC_PROPH4B");
					GlobalFunc_8380(1, 1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					STREAMING::SET_FOCUS_POS_AND_VEL(-68.64695f, -1819.643f, 25.94197f, 0f, 0f, 0f);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(PLAYER::PLAYER_PED_ID(), 1);
					SYSTEM::SETTIMERB(0);
					iLocal_5821++;
				}
				break;
			
			case 2:
				STREAMING::NEW_LOAD_SCENE_STOP();
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(396.71f, -709.68f, 30.7f, 20f, 2);
				iLocal_5957 = -1;
				iLocal_5821++;
				break;
			
			case 3:
				if (iLocal_5957 < 0)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						iLocal_5957 = MISC::GET_GAME_TIMER();
					}
				}
				else if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					iLocal_5957 = -1;
				}
				if (((SYSTEM::TIMERB() > 7000 && iLocal_5957 >= 0) && MISC::GET_GAME_TIMER() >= iLocal_5957 + 1000) || SYSTEM::TIMERB() > 25000)
				{
					STREAMING::SET_FOCUS_POS_AND_VEL(403.6144f, -703.1547f, 28.282f, 0f, 0f, 0f);
					CAM::SET_CAM_PARAMS(uLocal_5091, 409.7f, -705.3f, 29.2f, 9.9f, 0f, 113.9f, 39.7f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_5091, 409.6f, -705f, 29.2f, 9.9f, 0f, 113.9f, 39.7f, 20010, 1, 1, 2);
					CAM::SET_CAM_ACTIVE(uLocal_5091, 1);
					CAM::SET_CAM_FAR_CLIP(uLocal_5091, 55f);
					CAM::SHAKE_CAM(uLocal_5091, "HAND_SHAKE", 0.09f);
					HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
					GlobalFunc_1("SJC_PROPH3");
					SYSTEM::SETTIMERB(0);
					iLocal_5821++;
				}
				break;
			
			case 4:
				STREAMING::NEW_LOAD_SCENE_STOP();
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
				STREAMING::NEW_LOAD_SCENE_START(-1175.83f, -1581.48f, 5.3f, 0.46f, 0.87f, -0.16f, 15f, 4);
				iLocal_5957 = -1;
				iLocal_5821++;
				break;
			
			case 5:
				if (iLocal_5957 < 0)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						iLocal_5957 = MISC::GET_GAME_TIMER();
					}
				}
				else if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					iLocal_5957 = -1;
				}
				if (((SYSTEM::TIMERB() > 7000 && iLocal_5957 >= 0) && MISC::GET_GAME_TIMER() >= iLocal_5957 + 1000) || SYSTEM::TIMERB() > 25000)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
					}
					STREAMING::SET_FOCUS_POS_AND_VEL(-1177.781f, -1582.7f, 3.261f, 0f, 0f, 0f);
					CAM::SET_CAM_PARAMS(uLocal_5091, -1177.8f, -1582.7f, 4.1f, 6.7f, 0f, -31.6f, 34f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_5091, -1177.6f, -1582.8f, 4.1f, 6.7f, 0f, -31.6f, 34f, 10010, 3, 3, 2);
					CAM::SET_CAM_ACTIVE(uLocal_5091, 1);
					CAM::SET_CAM_FAR_CLIP(uLocal_5091, 55f);
					CAM::SHAKE_CAM(uLocal_5091, "HAND_SHAKE", 0.05f);
					HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
					GlobalFunc_1("SJC_PROPH4");
					SYSTEM::SETTIMERB(0);
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
					STREAMING::REQUEST_COLLISION_AT_COORD(2120.1f, 4793f, 40.2f);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2120.1f, 4793f, 40.2f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 238.3386f);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					iLocal_5821++;
				}
				break;
			
			case 6:
				STREAMING::NEW_LOAD_SCENE_STOP();
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(2132.19f, 4782.3f, 41.93f, 30f, 1);
				iLocal_5821++;
				break;
			
			case 7:
				if ((SYSTEM::TIMERB() > 7000 && STREAMING::IS_NEW_LOAD_SCENE_LOADED()) || SYSTEM::TIMERB() > 25000)
				{
					STREAMING::CLEAR_FOCUS();
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					STREAMING::SET_RENDER_HD_ONLY(0);
					CAM::SET_CAM_PARAMS(uLocal_5091, 2116.107f, 4794.389f, 44.946f, -4.6059f, 0f, -125.4516f, 50f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_5091, 2115.914f, 4794.528f, 41.986f, -4.6059f, 0f, -125.4516f, 50f, 7100, 3, 3, 2);
					CAM::SET_CAM_FAR_CLIP(uLocal_5091, 100f);
					CAM::SHAKE_CAM(uLocal_5091, "HAND_SHAKE", 0.05f);
					HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
					AUDIO::TRIGGER_MUSIC_EVENT("PROP_INTRO_STOP");
					GlobalFunc_1("SJC_PROPH5");
					SYSTEM::SETTIMERB(0);
					iLocal_5821++;
				}
				else
				{
					STREAMING::SET_RENDER_HD_ONLY(1);
				}
				break;
			
			case 8:
				STREAMING::NEW_LOAD_SCENE_STOP();
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(2132.19f, 4782.3f, 41.93f, 60f, 2);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				iLocal_5821++;
				break;
			
			case 9:
				if (SYSTEM::TIMERB() > 3000)
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(1527.011f, 5342.485f, 269.4803f, 100f, 2);
				}
				if (SYSTEM::TIMERB() > 7000)
				{
					if (CAM::DOES_CAM_EXIST(uLocal_5091))
					{
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					CAM::SET_WIDESCREEN_BORDERS(0, 0);
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					SYSTEM::SETTIMERB(0);
					STREAMING::SET_RENDER_HD_ONLY(0);
					AUDIO::STOP_AUDIO_SCENE("TREVOR_2_PROPERTY_INTRO_SCENE");
					iLocal_5821++;
				}
				break;
			
			case 10:
				PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				if (!CAM::IS_CAM_INTERPOLATING(uLocal_5091) || SYSTEM::TIMERB() > 3000)
				{
					GlobalFunc_702(0, 0, 1);
					GlobalFunc_8380(0, 1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					STREAMING::NEW_LOAD_SCENE_STOP();
					HUD::CLEAR_HELP(1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_5821 = 0;
					GlobalFunc_8380(0, 1, 1, 0);
					iLocal_5768 = 0;
				}
				break;
		}
	}
}











void func_50()//Position - 0x30F4
{
	iLocal_5086 = 0;
	iLocal_5082 = 0;
	iLocal_5768 = 1;
	iLocal_5081 = 0;
	while (iLocal_5768)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_TREV2", 0);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		if (iLocal_5086 == 0)
		{
			if (iLocal_5083)
			{
				iLocal_5083 = 0;
			}
			else if (iLocal_5082 == 0)
			{
				iLocal_5768 = 1;
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("TRV2_MCS_8", 3, 8);
				iLocal_5813 = 0;
				iLocal_5082++;
			}
			else if (iLocal_5082 == 1)
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					else
					{
						SYSTEM::WAIT(0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
					{
						VEHICLE::CONTROL_LANDING_GEAR(Local_4414[1 /*19*/], 2);
						VEHICLE::SET_VEHICLE_FIXED(Local_4414[1 /*19*/]);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[1 /*19*/], 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_4414[1 /*19*/], "Rons_plane", 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_4414[2 /*19*/], "Trevors_plane", 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_5546, "Ron", 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 2);
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_LAND_THE_PLANE"))
					{
						AUDIO::STOP_AUDIO_SCENE("TREVOR_2_LAND_THE_PLANE");
					}
					RECORDING::_0x48621C9FCA3EBD28(4);
					HUD::CLEAR_HELP(1);
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					GlobalFunc_8380(1, 1, 1, 0);
					iLocal_5081 = 0;
					iLocal_5082 = 0;
					iLocal_5086 = 1;
				}
			}
		}
		if (iLocal_5086 == 1)
		{
			if (iLocal_5813 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
					GlobalFunc_2781(500);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_4414[2 /*19*/], 1), 100f, 1, 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
					{
						VEHICLE::CONTROL_LANDING_GEAR(Local_4414[1 /*19*/], 2);
					}
					iLocal_5904 = MISC::GET_GAME_TIMER();
					iLocal_5813 = 1;
					if (!GlobalFunc_2(0))
					{
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(396.71f, -709.68f, 30.7f, 20f, 2);
					}
				}
			}
			if (!iLocal_5081 && iLocal_5813 == 1)
			{
				if (GlobalFunc_588(&iLocal_5904, 2000))
				{
					if (GlobalFunc_1080())
					{
						iLocal_5956 = MISC::GET_GAME_TIMER();
						iLocal_5081 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (!GlobalFunc_2(0))
				{
					if (!CAM::DOES_CAM_EXIST(uLocal_5091))
					{
						HUD::CLEAR_HELP(1);
						uLocal_5091 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
						CAM::SET_CAM_PARAMS(uLocal_5091, 2130.667f, 4814.803f, 42.0757f, 6.014336f, -0.729572f, -175.5989f, 32.77788f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(uLocal_5091, 2130.52f, 4812.049f, 42.35103f, 7.652661f, -0.093014f, -177.0403f, 32.78032f, 12000, 3, 1, 2);
						CAM::SET_CAM_FAR_CLIP(uLocal_5091, 55f);
						CAM::SHAKE_CAM(uLocal_5091, "HAND_SHAKE", 0.3f);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					}
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(180f);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ron", 0))
			{
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					PED::DELETE_PED(&Local_5546);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_plane", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					if (!VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(Local_4414[2 /*19*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4414[2 /*19*/], 1000);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[2 /*19*/], 1000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_4414[2 /*19*/], 1000f);
					}
					VEHICLE::CONTROL_LANDING_GEAR(Local_4414[2 /*19*/], 2);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4414[2 /*19*/]);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4414[2 /*19*/]);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("cuban800", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					if (!VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(Local_4414[1 /*19*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4414[1 /*19*/], 1000);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[1 /*19*/], 1000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_4414[1 /*19*/], 1000f);
					}
					VEHICLE::CONTROL_LANDING_GEAR(Local_4414[1 /*19*/], 2);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4414[1 /*19*/]);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[1 /*19*/], 1);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_5813 == 1)
			{
				if (!GlobalFunc_2(0))
				{
					GlobalFunc_702(1, 1, 1);
				}
				iLocal_5086 = 2;
			}
		}
		if (iLocal_5086 == 2)
		{
			if (iLocal_5081)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
				if (!GlobalFunc_2(0))
				{
					GlobalFunc_702(1, 1, 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (!VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(Local_4414[1 /*19*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_4414[1 /*19*/], 1000);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[1 /*19*/], 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_4414[1 /*19*/], 1000f);
				}
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[1 /*19*/], 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4414[1 /*19*/], 1);
				VEHICLE::CONTROL_LANDING_GEAR(Local_4414[1 /*19*/], 2);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4414[1 /*19*/]);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[1 /*19*/], 1);
			}
			if (GlobalFunc_2(0))
			{
				GlobalFunc_8380(0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			RECORDING::_0x81CBAE94390F9F89();
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_5082 = 0;
			iLocal_5768 = 0;
			iLocal_5086 = 0;
		}
		if (iLocal_5086 == 3)
		{
			if (!GlobalFunc_588(&iLocal_5956, 8000))
			{
				if (!GlobalFunc_2(0))
				{
					while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			CUTSCENE::STOP_CUTSCENE(0);
			iLocal_5081 = 1;
			iLocal_5086 = 1;
		}
	}
}





void func_55()//Position - 0x36CD
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(-3345.175f, 3001.278f, -0.0897f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 500f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_4414[19 /*19*/]))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[19 /*19*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_4414[19 /*19*/]));
				if (ENTITY::DOES_ENTITY_EXIST(Local_2692[19 /*40*/]))
				{
					PED::DELETE_PED(&(Local_2692[19 /*40*/]));
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dinghy"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgoon_01"));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_4414[20 /*19*/]))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[20 /*19*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_4414[20 /*19*/]));
				if (ENTITY::DOES_ENTITY_EXIST(Local_2692[20 /*40*/]))
				{
					PED::DELETE_PED(&(Local_2692[20 /*40*/]));
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dinghy"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgoon_01"));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_4414[21 /*19*/]))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[21 /*19*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_4414[21 /*19*/]));
				if (ENTITY::DOES_ENTITY_EXIST(Local_2692[21 /*40*/]))
				{
					PED::DELETE_PED(&(Local_2692[21 /*40*/]));
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dinghy"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgoon_01"));
			}
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_DROP_CARGO"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_DROP_CARGO");
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5090))
	{
		func_208(10, 2149.549f, 4797.874f, 40.1225f, 73.9328f, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_4414[2 /*19*/], 1), 1) > 30f)
			{
				iLocal_5116 = 11;
				iLocal_5874 = 12;
			}
		}
	}
	if (Local_5546.f_20 != 99)
	{
		if (!PED::IS_PED_INJURED(Local_5546))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
				{
					if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_4414[1 /*19*/]) < 2f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_4414[1 /*19*/], 2153.168f, 4817.752f, 39.22271f, 2094.843f, 4791.237f, 50.0605f, 26f, 0, 1, 0))
						{
							VEHICLE::BRING_VEHICLE_TO_HALT(Local_4414[1 /*19*/], 15f, -1, 0);
							TASK::CLEAR_PED_TASKS(Local_5546);
							Local_5546.f_20 = 99;
						}
					}
				}
			}
		}
	}
	if (iLocal_5804 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1916.275f, 4707.327f, 39.83545f, 2005.07f, 4746.969f, 45.81874f, 32.5f, 0, 1, 0))
		{
			if (!func_36("TELL RON TO CIRCLE"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), 1933.875f, 4714.869f, 40.109f, 1) < 300f)
				{
					TASK::TASK_PLANE_MISSION(Local_5546, Local_4414[1 /*19*/], 0, 0, 2284.782f, 4882.645f, 195.5418f, 9, 30f, 50f, -1f, 100, 40);
					func_33("TELL RON TO CIRCLE", 1);
				}
			}
		}
		else if (func_36("TELL RON TO CIRCLE"))
		{
			TASK::TASK_PLANE_LAND(Local_5546, Local_4414[1 /*19*/], 1917.368f, 4707.804f, 40.19184f, 2001.851f, 4746.581f, 40.06049f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4414[1 /*19*/], 1);
			STREAMING::REQUEST_COLLISION_AT_COORD(1944.88f, 4720.528f, 40.06041f);
			func_33("TELL RON TO CIRCLE", 0);
		}
	}
	if (iLocal_5804 == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), 1933.875f, 4714.869f, 40.109f, 1) < 300f)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
					{
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[1 /*19*/], 0);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/]);
						TASK::TASK_PLANE_LAND(Local_5546, Local_4414[1 /*19*/], 1917.368f, 4707.804f, 40.19184f, 2001.851f, 4746.581f, 40.06049f);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4414[1 /*19*/], 1);
						STREAMING::REQUEST_COLLISION_AT_COORD(1944.88f, 4720.528f, 40.06041f);
						ENTITY::SET_ENTITY_PROOFS(Local_4414[1 /*19*/], 0, 0, 0, 1, 0, 0, 0, 0);
						Local_5546.f_20 = 0;
					}
				}
			}
			if (VEHICLE::GET_LANDING_GEAR_STATE(Local_4414[1 /*19*/]) != 2 || VEHICLE::GET_LANDING_GEAR_STATE(Local_4414[1 /*19*/]) != 0)
			{
				VEHICLE::CONTROL_LANDING_GEAR(Local_4414[1 /*19*/], 0);
			}
			else
			{
				iLocal_5804 = 1;
			}
		}
		else
		{
			if (Local_4414[1 /*19*/].f_5 != 0f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4414[1 /*19*/], 1);
					STREAMING::REQUEST_COLLISION_AT_COORD(1933.875f, 4714.869f, 40.109f);
					STREAMING::REQUEST_COLLISION_AT_COORD(2147.468f, 4814.85f, 40.2417f);
					Local_4414[1 /*19*/].f_5 = 0f;
				}
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
			{
				func_206(Local_4414[2 /*19*/], Local_4414[1 /*19*/], 2116.519f, 4798.722f, 40.0507f, 3, "RCSJC", 40f, 0.7f, 1.2f, 0);
			}
		}
	}
	else if (!func_36("TURN OFF ENGINE"))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_491[iLocal_5822 /*40*/], 71191126) != 1)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[1 /*19*/], 0, 0);
				func_33("TURN OFF ENGINE", 1);
			}
		}
	}
	switch (iLocal_5819)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FLIGHT_START"))
			{
				AUDIO::START_AUDIO_SCENE("TREVOR_2_FLIGHT_START");
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			MISC::CLEAR_AREA(2129.739f, 4790.823f, 40.0188f, 100f, 0, 0, 0, 0);
			GlobalFunc_11046(6, "Fly to airstrip", 1, 0, 0, 1);
			iLocal_5774[0] = 1;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_4414[1 /*19*/], 1, 1, 1, 1, 1, 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4414[2 /*19*/], 1);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			iLocal_5808 = 0;
			iLocal_5831 = 8;
			iLocal_5765 = 1;
			iLocal_5785 = 0;
			iLocal_5804 = 0;
			iLocal_5783 = 0;
			GlobalFunc_574(503, 0);
			GlobalFunc_2781(500);
			iLocal_5819++;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_RACE"))
			{
				if (!GlobalFunc_111())
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_2781(800);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[2 /*19*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[2 /*19*/]);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_4414[2 /*19*/], 40f);
						}
						VEHICLE::CLOSE_BOMB_BAY_DOORS(Local_4414[2 /*19*/]);
					}
					if (GlobalFunc_199())
					{
						if (!func_36("TR_pload"))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pload", 7, 0, 0, 0))
							{
								func_33("TR_pload", 1);
							}
						}
					}
					iLocal_5805 = 0;
					iLocal_5819++;
				}
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_4414[1 /*19*/], 2052.786f, 4754.016f, 39.82379f, 2039.939f, 4781.491f, 47.85648f, 250f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_4414[2 /*19*/], 2052.786f, 4754.016f, 39.82379f, 2039.939f, 4781.491f, 47.85648f, 250f, 0, 1, 0))
			{
				if (!GlobalFunc_892(0, 15))
				{
					bLocal_5807 = true;
				}
			}
			if (GlobalFunc_9194(&Local_5875, 2116.519f, 4798.722f, 40.0507f, 0.01f, 0.01f, 0.01f, 0, Local_4414[2 /*19*/], "SJC_RACE1", "SJC_GETPLNG2", "SJC_GETPLNG3", 1, 0, 1, -1))
			{
				iLocal_5819++;
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (iLocal_5805 == 0)
							{
								if (GlobalFunc_7066() == 0)
								{
									if (!GlobalFunc_5172(&Local_5875, 1))
									{
										if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_FLII", 7, 0, 0, 0))
										{
											iLocal_5805 = 1;
										}
									}
								}
								else if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_FLI", 7, 0, 0, 0))
									{
										iLocal_5805 = 1;
									}
								}
							}
						}
					}
				}
				if (iLocal_5805 == 1)
				{
					if (!func_36("TR2_DAMAGE"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
						{
							if (ENTITY::GET_ENTITY_HEALTH(Local_4414[2 /*19*/]) <= 500)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_5875, 1))
									{
										if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_DAMAGE", 7, 0, 0, 0))
										{
											func_33("TR2_DAMAGE", 1);
										}
									}
								}
							}
							else
							{
								func_33("TR2_DAMAGE", 1);
							}
						}
					}
					else if (!func_36("TR2_KEEPLOW"))
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_KEEPLOW", 7, 0, 0, 0))
							{
								func_33("TR2_KEEPLOW", 1);
							}
						}
					}
					else if (!func_36("TR2_CONT"))
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_CONT", 7, 0, 0, 0))
							{
								func_33("TR2_CONT", 1);
							}
						}
					}
					else if (!func_36("TR2_PAYMENT"))
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_PAYMENT", 7, 0, 0, 0))
							{
								func_33("TR2_PAYMENT", 1);
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
					}
					else if (!GlobalFunc_620())
					{
						GlobalFunc_619(1);
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
				{
					HUD::SET_BLIP_ROUTE(Local_5875.f_5, 0);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_5546.f_1))
				{
					Local_5546.f_1 = GlobalFunc_6783(Local_4414[1 /*19*/], 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_4414[2 /*19*/], 2052.786f, 4754.016f, 39.82379f, 2039.939f, 4781.491f, 47.85648f, 250f, 0, 1, 0))
					{
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_4414[2 /*19*/]) < 2f)
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_END"))
							{
								PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
								CUTSCENE::REMOVE_CUTSCENE();
								CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("TRV2_MCS_8", 3, 8);
								if (HUD::DOES_BLIP_EXIST(uLocal_402))
								{
									HUD::REMOVE_BLIP(&uLocal_402);
								}
								if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
								{
									HUD::REMOVE_BLIP(&(Local_5875.f_5));
								}
								if (iLocal_5812 == 0)
								{
									iLocal_5783 = 1;
									iLocal_5812 = 1;
								}
								GlobalFunc_4948(&uLocal_27, 0, 0);
								GlobalFunc_8039(2, 5, 5);
								iLocal_5819++;
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_4414[1 /*19*/], 2052.786f, 4754.016f, 39.82379f, 2039.939f, 4781.491f, 47.85648f, 250f, 0, 1, 0))
					{
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_4414[1 /*19*/]) < 2f)
						{
							if (iLocal_5812 == 0)
							{
								iLocal_5783 = 0;
								iLocal_5812 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_9194(&Local_5875, 2133.26f, 4777.97f, 39.97f, 0.01f, 0.01f, 0.01f, 0, Local_4414[2 /*19*/], "", "SJC_GETPLNG2", "SJC_GETPLNG3", 1, 0, 1, -1))
			{
				iLocal_5819++;
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
				{
					if (iLocal_5783 == 1)
					{
						if (!func_36("TR2_TBEAT"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_TBEAT", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
										func_33("TR2_TBEAT", 1);
									}
								}
							}
						}
					}
					else if (!func_36("TR2_RBEAT"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_5875, 1))
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_RBEAT", 7, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
									func_33("TR2_RBEAT", 1);
								}
							}
						}
					}
					if (func_36("TR2_TBEAT") || func_36("TR2_RBEAT"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_5875, 2))
							{
								if (!func_36("SJC_TAXIP"))
								{
									GlobalFunc_5884("SJC_SJC_TAXIP");
									GlobalFunc_159("SJC_TAXIH", -1);
									func_33("SJC_TAXIP", 1);
								}
							}
						}
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2121.526f, 4776.739f, 46.00867f, 2143.957f, 4786.68f, 39.49757f, 17.5f, 0, 1, 0))
					{
						if (iLocal_5783 == 1)
						{
							GlobalFunc_553(501);
						}
						GlobalFunc_571(0, -1);
						GlobalFunc_5652(&Local_5875, 1, 0);
						iLocal_5819++;
					}
				}
			}
			break;
		
		case 4:
			func_56();
			break;
	}
}

void func_56()//Position - 0x432C
{
	iLocal_5874++;
	func_57();
}

void func_57()//Position - 0x4340
{
	iLocal_5819 = 0;
	iLocal_5828 = 0;
	iLocal_5821 = 0;
	iLocal_5820 = 0;
	iLocal_5817 = 0;
	iLocal_5822 = 0;
	while (iLocal_5822 <= 3)
	{
		iLocal_5769[iLocal_5822] = 0;
		iLocal_5822++;
	}
	iLocal_5822 = 0;
	while (iLocal_5822 <= 1)
	{
		iLocal_5777[iLocal_5822] = 0;
		iLocal_5822++;
	}
}





















































































































































void func_206(int iParam0, int iParam1, struct<3> Param2, int iParam5, char* sParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0xEA7A
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam5, sParam6);
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam5, sParam6))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
		}
		fVar6 = (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam5, sParam6) / 2f);
		fVar7 = (fVar6 / 2f);
		if (bParam10)
		{
			if (!GlobalFunc_105(Param2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
				{
					fVar14 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param2, ENTITY::GET_ENTITY_COORDS(iParam0, 1), 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
				{
					fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param2, ENTITY::GET_ENTITY_COORDS(iParam1, 1), 0);
				}
				if (fVar13 > fVar14)
				{
					iVar15 = 1;
				}
				else
				{
					iVar15 = 0;
				}
			}
			if (iVar15 == 0)
			{
				if (iLocal_5902 == 0)
				{
					fVar8 = (fVar6 + fVar7);
					Var3 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam5, fVar8, sParam6) };
					fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1);
					fVar9 = (fVar6 - fVar7);
					Var3 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam5, fVar9, sParam6) };
					fVar11 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1);
					if (fVar10 < fVar11)
					{
						fVar6 = fVar8;
					}
					else
					{
						fVar6 = fVar9;
					}
					fVar7 = (fVar7 / 2f);
					iLocal_5903 = MISC::GET_GAME_TIMER();
					iLocal_5902 = 1;
				}
				else if (GlobalFunc_588(&iLocal_5903, 20))
				{
					iLocal_5902 = 0;
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1))
			{
				if (!GlobalFunc_105(Param2))
				{
					if (iVar15 == 0)
					{
						fVar12 = (fParam7 / MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1));
						if (fVar12 > fParam9)
						{
							fVar12 = fParam9;
						}
						if (fVar12 < fParam8)
						{
							fVar12 = fParam8;
						}
						if (bParam10)
						{
							if (fVar6 > VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam1))
							{
								if (fVar12 > fParam9)
								{
									fVar12 = fParam9;
								}
							}
						}
					}
					else
					{
						fVar12 = fParam9;
					}
				}
				else
				{
					fVar12 = (fParam7 / MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1));
				}
				VEHICLE::SET_PLAYBACK_SPEED(iParam1, fVar12);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (iParam0 == Local_4414[15 /*19*/])
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iParam0, (0.85f - (fVar12 - 1f)));
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (iParam0 == Local_4414[17 /*19*/])
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iParam0, (1f - (fVar12 - 1f)));
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (iParam0 == Local_4414[18 /*19*/])
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iParam0, (1f - (fVar12 - 1f)));
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (iParam0 == Local_4414[19 /*19*/])
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iParam0, (1f - (fVar12 - 1f)));
				}
			}
		}
	}
	else
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam5, sParam6);
	}
}


int func_208(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0xED2F
{
	if (!GlobalFunc_105(Param1))
	{
	}
	if (fParam4 != 0f)
	{
	}
	switch (iParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_5546))
			{
				if (func_329(&Local_5546, 0, 1862763509, 1, 20, 0, 0, 0, 0, -1, 1))
				{
					ENTITY::SET_ENTITY_COORDS(Local_5546, Param1, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_5546, fParam4);
					PED::SET_PED_CAN_BE_TARGETTED(Local_5546, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5546, 1862763509);
					GlobalFunc_173(&Local_72, 3, Local_5546, "NervousRon", 0, 1);
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_5546, 1);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5546, 1);
					WEAPON::GIVE_WEAPON_TO_PED(Local_5546, joaat("weapon_unarmed"), 2000, 1, 1);
					PED::SET_PED_CAN_BE_TARGETTED(Local_5546, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5546, iLocal_489);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_489, iLocal_489);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_489, 1862763509);
					PED::SET_PED_CONFIG_FLAG(Local_5546, 118, 0);
					PED::SET_PED_AS_ENEMY(Local_5546, 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_5546, 1, 0);
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_5546);
					PED::SET_PED_ACCURACY(Local_5546, 100);
					PED::SET_PED_COMBAT_ABILITY(Local_5546, 2);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_5546, 0);
					ENTITY::SET_ENTITY_HEALTH(Local_5546, 300);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_5546, 1);
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						GlobalFunc_11272(Local_5546, 14, 154, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 1, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 6, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 7, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 11, 0, 0, 0);
						PED::SET_PED_PROP_INDEX(Local_5546, 0, 0, 0, false);
						PED::SET_PED_PROP_INDEX(Local_5546, 1, 0, 0, false);
					}
					return 1;
				}
			}
			else
			{
				if (Local_72[3 /*10*/] != Local_5546)
				{
					GlobalFunc_173(&Local_72, 3, Local_5546, "NervousRon", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_5546, 1);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5546, 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_5546, joaat("weapon_unarmed"), 2000, 1, 1);
				PED::SET_PED_CAN_BE_TARGETTED(Local_5546, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5546, iLocal_489);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_489, iLocal_489);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_489, 1862763509);
				PED::SET_PED_AS_ENEMY(Local_5546, 0);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_5546, 1, 0);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_5546);
				PED::SET_PED_ACCURACY(Local_5546, 100);
				PED::SET_PED_COMBAT_ABILITY(Local_5546, 2);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_5546, 0);
				ENTITY::SET_ENTITY_HEALTH(Local_5546, 300);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_5546, 1);
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					GlobalFunc_11272(Local_5546, 14, 154, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5546, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5546, 1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5546, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5546, 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5546, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5546, 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5546, 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5546, 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5546, 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5546, 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5546, 10, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_5546, 11, 0, 0, 0);
					PED::SET_PED_PROP_INDEX(Local_5546, 0, 0, 0, false);
					PED::SET_PED_PROP_INDEX(Local_5546, 1, 0, 0, false);
				}
				return 1;
			}
			if (bParam5)
			{
				STREAMING::REQUEST_MODEL(GlobalFunc_4946(20));
			}
			break;
		
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[12 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("blazer"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("blazer"), 3);
				if (STREAMING::HAS_MODEL_LOADED(joaat("blazer")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("blazer")))
				{
					Local_4414[12 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("blazer"), Param1, fParam4, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(Local_4414[12 /*19*/], 35, 35);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_4414[12 /*19*/], "TPI1000");
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[12 /*19*/], 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4414[12 /*19*/]);
					GlobalFunc_504(Local_4414[12 /*19*/], 504);
					GlobalFunc_2223(Local_4414[12 /*19*/], 505);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_4414[12 /*19*/], 1);
					return 1;
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[12 /*19*/], 1);
				}
				return 1;
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[11 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("blazer"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("blazer"), 3);
				if (STREAMING::HAS_MODEL_LOADED(joaat("blazer")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("blazer")))
				{
					Local_4414[11 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("blazer"), Param1, fParam4, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(Local_4414[11 /*19*/], 62, 62);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_4414[11 /*19*/], "B3L13V3");
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[11 /*19*/], 0);
					}
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_4414[11 /*19*/], 0);
					AUDIO::SET_HORN_ENABLED(Local_4414[11 /*19*/], 0);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4414[11 /*19*/]);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_4414[11 /*19*/], 1);
					return 1;
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[11 /*19*/], 0);
					AUDIO::SET_HORN_ENABLED(Local_4414[11 /*19*/], 0);
				}
				return 1;
			}
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[11 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("blazer"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("blazer"), 3);
				if (STREAMING::HAS_MODEL_LOADED(joaat("blazer")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("blazer")))
				{
					Local_4414[11 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("blazer"), Param1, fParam4, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(Local_4414[11 /*19*/], 62, 62);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_4414[11 /*19*/], "B3L13V3");
					AUDIO::SET_HORN_ENABLED(Local_4414[11 /*19*/], 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[11 /*19*/], 0);
					}
					return 1;
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("blazer"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("blazer")))
				{
					return 1;
				}
			}
			break;
		
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[20 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("tailgater"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
				if (STREAMING::HAS_MODEL_LOADED(joaat("tailgater")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("tailgater")))
				{
					Local_4414[20 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), 1971.895f, 3796.539f, 31.2872f, 152.6909f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_4414[20 /*19*/], 6);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_4414[20 /*19*/], "D1RTY 10");
					AUDIO::SET_HORN_ENABLED(Local_4414[20 /*19*/], 0);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_4414[20 /*19*/], 10f);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[20 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[20 /*19*/], 0);
					}
					return 1;
				}
			}
			break;
		
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[11 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("blazer"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(29, "RCSJC");
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("blazer"), 3);
				if (STREAMING::HAS_MODEL_LOADED(joaat("blazer")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(29, "RCSJC"))
				{
					Local_4414[11 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("blazer"), Param1, fParam4, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(Local_4414[11 /*19*/], 62, 62);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_4414[11 /*19*/], "B3L13V3");
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[11 /*19*/], 0);
					}
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[11 /*19*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[11 /*19*/], 29, "RCSJC", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[11 /*19*/], (8000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[11 /*19*/])));
					}
					return 1;
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("blazer"), 3);
				VEHICLE::REQUEST_VEHICLE_RECORDING(29, "RCSJC");
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(29, "RCSJC") && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("blazer")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
					{
						ENTITY::SET_ENTITY_COORDS(Local_4414[11 /*19*/], Param1, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_4414[11 /*19*/], fParam4);
						VEHICLE::SET_VEHICLE_COLOURS(Local_4414[11 /*19*/], 62, 62);
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_4414[11 /*19*/], "B3L13V3");
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[11 /*19*/], 0);
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[11 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[11 /*19*/], 29, "RCSJC", 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[11 /*19*/], (8000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[11 /*19*/])));
						}
						return 1;
					}
				}
			}
			break;
		
		case 7:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[1 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("cuban800"));
				STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cuban800"), 3);
				if (STREAMING::HAS_MODEL_LOADED(joaat("cuban800")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("cuban800")))
				{
					func_26(1, joaat("cuban800"), Param1, fParam4, joaat("g_m_y_lost_01"), 0, 0, 0, 0, -1, joaat("weapon_carbinerifle"));
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4414[1 /*19*/], 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[1 /*19*/], 0);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_4414[1 /*19*/], 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[1 /*19*/], 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4414[1 /*19*/], 1);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_4414[1 /*19*/], 0, 0);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_4414[1 /*19*/], 1, 0);
					return 1;
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4414[1 /*19*/], 0);
					ENTITY::SET_ENTITY_COORDS(Local_4414[1 /*19*/], Param1, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_4414[1 /*19*/], fParam4);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_4414[1 /*19*/], 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[1 /*19*/], 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4414[1 /*19*/], 1);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_4414[1 /*19*/], 0, 0);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_4414[1 /*19*/], 1, 0);
				}
				return 1;
			}
			break;
		
		case 6:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[1 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("cuban800"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cuban800"), 3);
				if (STREAMING::HAS_MODEL_LOADED(joaat("cuban800")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("cuban800")))
				{
					Local_4414[1 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("cuban800"), Param1, fParam4, 1, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_4414[1 /*19*/], 0);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4414[1 /*19*/], 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[1 /*19*/], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4414[1 /*19*/], 1);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_4414[1 /*19*/], 0, 0);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_4414[1 /*19*/], 1, 0);
					return 1;
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4414[1 /*19*/], 0);
					ENTITY::SET_ENTITY_COORDS(Local_4414[1 /*19*/], Param1, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_4414[1 /*19*/], fParam4);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_4414[1 /*19*/], 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[1 /*19*/], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4414[1 /*19*/], 1);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_4414[1 /*19*/], 0, 0);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_4414[1 /*19*/], 1, 0);
				}
				return 1;
			}
			break;
		
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[2 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("cuban800"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cuban800"), 3);
				if (STREAMING::HAS_MODEL_LOADED(joaat("cuban800")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("cuban800")))
				{
					Local_4414[2 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("cuban800"), Param1, fParam4, 1, 1);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4414[2 /*19*/], 0);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_4414[2 /*19*/], 2);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[2 /*19*/], 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4414[2 /*19*/], 1);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_4414[2 /*19*/], 0, 0);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_4414[2 /*19*/], 1, 0);
					GlobalFunc_2223(Local_4414[2 /*19*/], 511);
					GlobalFunc_504(Local_4414[2 /*19*/], 512);
					return 1;
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4414[2 /*19*/], 0);
					ENTITY::SET_ENTITY_COORDS(Local_4414[2 /*19*/], Param1, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_4414[2 /*19*/], fParam4);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_4414[2 /*19*/], 2);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[2 /*19*/], 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4414[2 /*19*/], 1);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_4414[2 /*19*/], 0, 0);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_4414[2 /*19*/], 1, 0);
				}
				return 1;
			}
			break;
		
		case 10:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5090))
			{
				STREAMING::REQUEST_MODEL(joaat("dune"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("dune")))
				{
					iLocal_5090 = VEHICLE::CREATE_VEHICLE(joaat("dune"), Param1, fParam4, 1, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_5090, 1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_5090, "TH3MUL3");
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5090, 1);
					return 1;
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_5090, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_5090, Param1, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_5090, fParam4);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_5090, "TH3MUL3");
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_5090, 1);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_5090, 1);
				}
				return 1;
			}
			break;
		
		case 11:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[4 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("hauler"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("hauler")))
				{
					func_26(4, joaat("hauler"), 1681.135f, 3267.761f, 39.7872f, 121.1609f, joaat("g_m_y_lost_01"), 0, 0, 0, 0, -1, joaat("weapon_carbinerifle"));
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[5 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("tanker"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("tanker")))
				{
					func_26(5, joaat("tanker"), 1675.404f, 3284.496f, 39.868f, 196.268f, joaat("g_m_y_lost_01"), 0, 0, 0, 0, -1, joaat("weapon_carbinerifle"));
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[4 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[5 /*19*/], 0))
					{
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_4414[4 /*19*/], Local_4414[5 /*19*/], 1065353216);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[4 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[4 /*19*/], 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[4 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[4 /*19*/], 0);
				}
				return 1;
			}
			break;
		
		case 12:
			GlobalFunc_9131(28, 1, 0);
			return 1;
			break;
		
		case 13:
			if (iLocal_5096 == 0)
			{
				iLocal_5096 = INTERIOR::GET_INTERIOR_AT_COORDS(1693.352f, 3759.22f, 33.7053f);
			}
			if (INTERIOR::IS_INTERIOR_READY(iLocal_5096))
			{
				return 1;
			}
			else
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_5096);
			}
			break;
	}
	return 0;
}

























































































































int func_329(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2BF16
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_14);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_14))
			{
				if (iParam8 == 0)
				{
					if (iParam4 == 145)
					{
						*iParam0 = PED::CREATE_PED(26, iParam0->f_14, iParam0->f_10, iParam0->f_13, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_14);
					}
					else if (GlobalFunc_7102(iParam0, iParam4, iParam0->f_10, iParam0->f_13, 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_14);
					}
					if (!PED::IS_PED_INJURED(*iParam0))
					{
						func_495(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
						}
					}
				}
				else if (iParam8 != 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
					{
						if (iParam4 == 145)
						{
							*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam8, 26, iParam0->f_14, iParam9, 1, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_14);
						}
						else if (GlobalFunc_7220(iParam0, iParam4, iParam8, iParam9, 1))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_14);
						}
						if (!PED::IS_PED_INJURED(*iParam0))
						{
							func_495(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
							if (iParam3 == 1)
							{
								iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
							}
						}
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
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam8 == 0)
			{
				if (func_492(iParam0, iParam4, iParam0->f_10, iParam0->f_13, 1, 0, 0))
				{
					func_495(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
					if (iParam3 == 1)
					{
						iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
					}
					return 1;
				}
			}
			else if (iParam8 != 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
				{
					if (func_330(iParam0, iParam4, iParam8, iParam9, 1, 0, 0))
					{
						func_495(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
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

int func_330(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2C0F7
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
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				GlobalFunc_8386(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				GlobalFunc_11326(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				func_332(*uParam0, bParam6);
				GlobalFunc_516(*uParam0);
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


int func_332(int iParam0, bool bParam1)//Position - 0x2C222
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		GlobalFunc_11327(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_11327(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10915(iParam0, 3, 169))
					{
						GlobalFunc_11272(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 10))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 50))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 59))
			{
				GlobalFunc_11272(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 22))
			{
				GlobalFunc_11272(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10915(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 4))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 3))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 82))
			{
				GlobalFunc_11272(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 76))
			{
				GlobalFunc_11272(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 1))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10915(iParam0, 12, 12))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10915(iParam0, 3, 71))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 7))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 88))
			{
				GlobalFunc_11272(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 17))
			{
				GlobalFunc_11272(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11272(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}
































































































































































int func_492(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x59351
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
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8386(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			GlobalFunc_11326(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			func_332(*uParam0, bParam8);
			GlobalFunc_516(*uParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}



void func_495(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x594B6
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 32, iParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, iParam3);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, uParam4);
			PED::SET_PED_AS_ENEMY(iParam0, uParam5);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, uParam1);
		}
	}
}


void func_497()//Position - 0x59592
{
	if (iLocal_5819 < 3)
	{
		func_524();
	}
	if (iLocal_5819 > 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1058.173f, 3075.024f, 40.3747f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 100f)
		{
			func_515();
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
		{
			iLocal_5116 = 11;
			iLocal_5874 = 12;
		}
	}
	if (iLocal_5819 > 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1058.173f, 3075.024f, 40.3747f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 150f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_4414[15 /*19*/]))
			{
				func_514(Local_4414[15 /*19*/], joaat("hexer"), 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_491[15 /*40*/]))
			{
				GlobalFunc_2782(Local_491[15 /*40*/], joaat("g_m_y_lost_01"), 1, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4414[16 /*19*/]))
			{
				func_514(Local_4414[16 /*19*/], joaat("hexer"), 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_491[16 /*40*/]))
			{
				GlobalFunc_2782(Local_491[16 /*40*/], joaat("g_m_y_lost_01"), 1, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4414[17 /*19*/]))
			{
				func_514(Local_4414[17 /*19*/], joaat("hexer"), 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_491[17 /*40*/]))
			{
				GlobalFunc_2782(Local_491[17 /*40*/], joaat("g_m_y_lost_01"), 1, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4414[18 /*19*/]))
			{
				func_514(Local_4414[18 /*19*/], joaat("hexer"), 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_491[18 /*40*/]))
			{
				GlobalFunc_2782(Local_491[18 /*40*/], joaat("g_m_y_lost_01"), 1, 0, 0);
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(-3345.175f, 3001.278f, -0.0897f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 1000f)
	{
		STREAMING::REQUEST_MODEL(joaat("dinghy"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_mexgoon_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("dinghy")) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_mexgoon_01")))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[19 /*19*/]))
			{
				func_26(19, joaat("dinghy"), -3345.175f, 3001.278f, -0.0897f, 359.2722f, joaat("g_m_y_mexgoon_01"), 1, 19, 0, 0, -1, joaat("weapon_carbinerifle"));
				if (!PED::IS_PED_INJURED(Local_2692[19 /*40*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[19 /*40*/], 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[19 /*19*/], 0))
				{
					ENTITY::SET_ENTITY_LOD_DIST(Local_4414[19 /*19*/], 1000);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[20 /*19*/]))
			{
				func_26(20, joaat("dinghy"), -3359.031f, 3022.246f, -0.0774f, 145.8453f, joaat("g_m_y_mexgoon_01"), 1, 20, 0, 0, -1, joaat("weapon_carbinerifle"));
				if (!PED::IS_PED_INJURED(Local_2692[20 /*40*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[20 /*40*/], 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[20 /*19*/], 0))
				{
					ENTITY::SET_ENTITY_LOD_DIST(Local_4414[20 /*19*/], 1000);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[21 /*19*/]))
			{
				func_26(21, joaat("dinghy"), -3308.223f, 3013.059f, -0.1333f, 310.5993f, joaat("g_m_y_mexgoon_01"), 1, 21, 0, 0, -1, joaat("weapon_carbinerifle"));
				if (!PED::IS_PED_INJURED(Local_2692[21 /*40*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[21 /*40*/], 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[21 /*19*/], 0))
				{
					ENTITY::SET_ENTITY_LOD_DIST(Local_4414[21 /*19*/], 1000);
				}
			}
		}
	}
	if (!func_36("TREVOR_2_FLIGHT_START"))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_RAYFIRE"))
		{
			AUDIO::STOP_AUDIO_SCENE("TREVOR_2_RAYFIRE");
		}
		AUDIO::START_AUDIO_SCENE("TREVOR_2_FLIGHT_START");
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[1 /*19*/], "TREVOR_2_RONS_PLANE", 0);
		}
		func_33("TREVOR_2_FLIGHT_START", 1);
		RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(Local_4414[2 /*19*/]))
		{
			if (!func_36("SET FLIGHT CHECKPOINT"))
			{
				GlobalFunc_11046(5, "Fly to drop off point", 0, 0, 0, 1);
				func_33("SET FLIGHT CHECKPOINT", 1);
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]) > 84668.43f)
			{
				if (!func_36("TR2_SIG"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_SIG", 7, 0, 0, 0))
							{
								func_33("TR2_SIG", 1);
								RECORDING::_0x293220DA1B46CEBC(2f, 5f, 4);
							}
						}
					}
				}
				else if (!func_36("TR2_RES"))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_RES", 7, 0, 0, 0))
						{
							iLocal_5849 = MISC::GET_GAME_TIMER();
							func_33("TR2_RES", 1);
						}
					}
				}
				else if (!GlobalFunc_111())
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
						{
							if (iLocal_5811 == 1)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_4414[19 /*19*/], 1), 175f, 175f, 800f, 0, 1, 0))
								{
									if (!func_36("SJC_DROPH"))
									{
										iLocal_5831 = 8;
										GlobalFunc_159("SJC_DROPH", -1);
										func_33("SJC_DROPH", 1);
										iLocal_5849 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if (func_36("SJC_DROPH"))
							{
								if (GlobalFunc_588(&iLocal_5849, 1000))
								{
									if (GlobalFunc_74("SJC_DROPH"))
									{
										HUD::CLEAR_HELP(1);
									}
									func_33("SJC_DROPH", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	switch (iLocal_5819)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FLIGHT_START"))
			{
				AUDIO::START_AUDIO_SCENE("TREVOR_2_FLIGHT_START");
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_5822 = 0;
			while (iLocal_5822 <= 54)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_491[iLocal_5822 /*40*/]))
				{
					if (iLocal_5822 != 27)
					{
						if (!PED::IS_PED_INJURED(Local_491[iLocal_5822 /*40*/]))
						{
							TASK::TASK_COMBAT_PED(Local_491[iLocal_5822 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(Local_491[iLocal_5822 /*40*/], 1);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_491[iLocal_5822 /*40*/]));
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_491[iLocal_5822 /*40*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_491[iLocal_5822 /*40*/].f_1));
				}
				iLocal_5822++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				VEHICLE::SET_VEHICLE_STRONG(Local_4414[2 /*19*/], 0);
			}
			iLocal_5822 = 3;
			while (iLocal_5822 <= 34)
			{
				if (((iLocal_5822 != 15 || iLocal_5822 != 16) || iLocal_5822 != 17) || iLocal_5822 != 18)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_4414[iLocal_5822 /*19*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[iLocal_5822 /*19*/]));
					}
				}
				iLocal_5822++;
			}
			iLocal_5822 = 0;
			while (iLocal_5822 <= 39)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2692[iLocal_5822 /*40*/]))
				{
					if (((iLocal_5822 != 15 || iLocal_5822 != 16) || iLocal_5822 != 17) || iLocal_5822 != 18)
					{
						if (!PED::IS_PED_INJURED(Local_2692[iLocal_5822 /*40*/]))
						{
							TASK::TASK_COMBAT_PED(Local_2692[iLocal_5822 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(Local_2692[iLocal_5822 /*40*/], 1);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2692[iLocal_5822 /*40*/]));
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_2692[iLocal_5822 /*40*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_2692[iLocal_5822 /*40*/].f_1));
				}
				iLocal_5822++;
			}
			iLocal_5822 = 0;
			while (iLocal_5822 <= 14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[iLocal_5822]))
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_5739[iLocal_5822]));
				}
				iLocal_5822++;
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_5092[0]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_5092[0], 0);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_5092[1]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_5092[1], 0);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				iLocal_5832 = MISC::GET_GAME_TIMER();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				iLocal_5831 = 2;
			}
			GlobalFunc_2781(500);
			if (!HUD::DOES_BLIP_EXIST(Local_5546.f_1))
			{
				Local_5546.f_1 = GlobalFunc_6783(Local_4414[1 /*19*/], 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[2 /*19*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[2 /*19*/]);
				}
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4414[2 /*19*/], 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_4414[1 /*19*/], 1, 1, 1, 1, 1, 0, 0, 0);
				VEHICLE::CONTROL_LANDING_GEAR(Local_4414[1 /*19*/], 1);
			}
			STREAMING::REQUEST_PTFX_ASSET();
			func_512();
			if (iLocal_5795 == 0)
			{
				GlobalFunc_5884("SJC_FLWPLNG");
				iLocal_5795 = 1;
			}
			STREAMING::REQUEST_MODEL(joaat("prop_flare_01"));
			func_511(joaat("maverick"));
			SYSTEM::SETTIMERA(0);
			iLocal_5785 = 0;
			func_510();
			func_509();
			iLocal_5765 = 1;
			iLocal_5786[0] = 0;
			iLocal_5786[1] = 0;
			iLocal_5786[2] = 0;
			iLocal_5786[3] = 0;
			iLocal_5786[4] = 0;
			iLocal_5786[5] = 0;
			iLocal_5786[6] = 0;
			iLocal_5786[7] = 0;
			iLocal_5809 = 0;
			iLocal_5811 = 0;
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			GlobalFunc_563(1);
			fLocal_5858 = 1f;
			iLocal_5819++;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (iLocal_5785 == 0)
			{
				if (!GlobalFunc_5172(&Local_5875, 1))
				{
					if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl01", 7, 0, 0, 0))
					{
						iLocal_5785 = 1;
					}
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_5546, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 500f)
			{
				if (iLocal_5873 != 4)
				{
					if (!func_36("TR_bi01"))
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_bi01", 7, 0, 0, 0))
							{
								func_33("TR_bi01", 1);
							}
						}
					}
					else if (!func_36("TR_bi02"))
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_bi02", 7, 0, 0, 0))
							{
								func_33("TR_bi02", 1);
								iLocal_5954 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (GlobalFunc_588(&iLocal_5954, MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000)))
					{
						func_33("TR_bi02", 0);
					}
				}
			}
			if (iLocal_5785 == 1)
			{
				if (iLocal_5873 == 4)
				{
					if (iLocal_5809 == 0)
					{
						if (GlobalFunc_7066() == 0)
						{
							if (!GlobalFunc_5172(&Local_5875, 1))
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_FLY", 7, 0, 0, 0))
								{
									iLocal_5809 = 1;
								}
							}
						}
						else if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_FLYb", 7, 0, 0, 0))
							{
								iLocal_5809 = 1;
							}
						}
					}
				}
			}
			if (fLocal_5858 < 1.6f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[1 /*19*/]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
					{
						fLocal_5858 = (fLocal_5858 + 0.01f);
						VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], fLocal_5858);
					}
				}
			}
			else
			{
				func_206(Local_4414[2 /*19*/], Local_4414[1 /*19*/], -3345.547f, 3001.364f, 2.0393f, 3, "RCSJC", 180f, 0.5f, 1.8f, 1);
			}
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_flare_01")))
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
							{
								if (iLocal_5774[0])
								{
									HUD::CLEAR_PRINTS();
									GlobalFunc_5884("SJC_FLWPLNG");
									func_512();
									iLocal_5774[0] = 0;
								}
								if (ENTITY::IS_ENTITY_AT_COORD(Local_4414[1 /*19*/], -534.3039f, 4574.407f, 89.3176f, 500f, 500f, 500f, 0, 1, 0))
								{
									if (VEHICLE::GET_LANDING_GEAR_STATE(Local_4414[1 /*19*/]) != 1 && VEHICLE::GET_LANDING_GEAR_STATE(Local_4414[1 /*19*/]) != 3)
									{
										VEHICLE::CONTROL_LANDING_GEAR(Local_4414[1 /*19*/], 1);
									}
									uLocal_5764 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev2_flare_L", -3345.26f, 3003.77f, 0.68f, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
									GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(uLocal_5764, 1f, 0.84f, 0f, 0);
									iLocal_5756 = OBJECT::CREATE_OBJECT(joaat("prop_flare_01"), -3345.26f, 3003.77f, 0.68f, 1, 1, 0);
									ENTITY::SET_ENTITY_ROTATION(iLocal_5756, 0f, 90f, 0f, 2, 1);
									iLocal_5822 = 0;
									iLocal_5774[0] = 0;
									STREAMING::REQUEST_ANIM_DICT("P_cargo_chute_S");
									iLocal_5785 = 0;
									iLocal_5819++;
								}
							}
							else if (!iLocal_5774[0])
							{
								GlobalFunc_5884("SJC_GETPLNG2");
								func_512();
								func_506(0, Local_4414[2 /*19*/], 0f, 0f, 0f, 0, 2);
								iLocal_5774[0] = 1;
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_36("BRIDGETRAIN"))
			{
				STREAMING::REQUEST_MODEL(joaat("freightcont1"));
				STREAMING::REQUEST_MODEL(joaat("tankercar"));
				STREAMING::REQUEST_MODEL(joaat("freightcar"));
				STREAMING::REQUEST_MODEL(joaat("freight"));
				if (((STREAMING::HAS_MODEL_LOADED(joaat("freightcont1")) && STREAMING::HAS_MODEL_LOADED(joaat("tankercar"))) && STREAMING::HAS_MODEL_LOADED(joaat("freight"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcar")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5089))
					{
						iLocal_5089 = VEHICLE::CREATE_MISSION_TRAIN(6, -534.3039f, 4574.407f, 89.3176f, 0);
						VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_5089, 15f);
						VEHICLE::SET_TRAIN_SPEED(iLocal_5089, 15f);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont1"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tankercar"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
						iLocal_5905 = MISC::GET_GAME_TIMER();
						func_33("BRIDGETRAIN", 1);
					}
				}
			}
			if (iLocal_5873 == 4)
			{
				if (iLocal_5809 == 0)
				{
					if (GlobalFunc_7066() == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_FLY", 7, 0, 0, 0))
							{
								iLocal_5809 = 1;
							}
						}
					}
					else if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_FLYb", 7, 0, 0, 0))
						{
							iLocal_5809 = 1;
						}
					}
				}
			}
			if (fLocal_5858 < 1.8f)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
				{
					fLocal_5858 = (fLocal_5858 + 0.01f);
					VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], fLocal_5858);
				}
			}
			else
			{
				func_206(Local_4414[2 /*19*/], Local_4414[1 /*19*/], -3345.547f, 3001.364f, 2.0393f, 3, "RCSJC", 220f, 0.5f, 2.6f, 1);
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-3345.175f, 3001.278f, -0.0897f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0) < 1000f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_4414[2 /*19*/], 70f);
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_4414[2 /*19*/], 100f);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_4414[1 /*19*/], -3345.175f, 3001.278f, -0.0897f, 600f, 600f, 600f, 0, 1, 0))
			{
				STREAMING::REQUEST_MODEL(joaat("prop_drug_package"));
				STREAMING::REQUEST_MODEL(joaat("p_cargo_chute_s"));
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_2_PLANE_CARGO_BAY", 0);
				func_511(joaat("gburrito"));
				iLocal_5955 = 0;
				iLocal_5819++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
					{
						if (iLocal_5774[0])
						{
							GlobalFunc_5884("SJC_FLWPLNG");
							func_512();
							iLocal_5774[0] = 0;
						}
					}
					else if (!iLocal_5774[0])
					{
						GlobalFunc_5884("SJC_GETPLNG2");
						func_512();
						func_506(0, Local_4414[2 /*19*/], 0f, 0f, 0f, 0, 2);
						iLocal_5774[0] = 1;
					}
				}
			}
			break;
		
		case 3:
			func_206(Local_4414[2 /*19*/], Local_4414[1 /*19*/], -3345.547f, 3001.364f, 2.0393f, 3, "RCSJC", 300f, 0.5f, 2.8f, 1);
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-3345.175f, 3001.278f, -0.0897f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0) < 800f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_4414[2 /*19*/], 70f);
				}
			}
			else
			{
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_4414[2 /*19*/], 100f);
			}
			STREAMING::REQUEST_MODEL(joaat("prop_drug_package"));
			STREAMING::REQUEST_MODEL(joaat("p_cargo_chute_s"));
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_2_PLANE_CARGO_BAY", 0);
			STREAMING::REQUEST_ANIM_DICT("P_cargo_chute_S");
			if (STREAMING::HAS_ANIM_DICT_LOADED("P_cargo_chute_S"))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_drug_package")) && STREAMING::HAS_MODEL_LOADED(joaat("p_cargo_chute_s")))
				{
					if (iLocal_5955 < 3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[19 /*19*/], 0))
						{
							if (!func_36("RON NEAR BOATS"))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(Local_4414[1 /*19*/], ENTITY::GET_ENTITY_COORDS(Local_4414[19 /*19*/], 1), 200f, 200f, 800f, 0, 1, 0))
								{
									func_33("RON NEAR BOATS", 1);
								}
							}
							else
							{
								if (!func_36("TR_rLoad"))
								{
									if (GlobalFunc_10630(&Local_72, "T2AUD", "TR_pl02", "TR2_ANAA", 7, 0, 0))
									{
										func_33("TR_rLoad", 1);
									}
								}
								STREAMING::REQUEST_MODEL(joaat("p_cargo_chute_s"));
								STREAMING::REQUEST_MODEL(joaat("prop_drug_package"));
								if (STREAMING::HAS_MODEL_LOADED(joaat("p_cargo_chute_s")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_drug_package")))
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_5823) > 700)
									{
										if (!ENTITY::DOES_ENTITY_EXIST(Local_5714[iLocal_5955 /*4*/]))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
											{
												if (!ENTITY::DOES_ENTITY_EXIST(Local_5714[iLocal_5955 /*4*/].f_1))
												{
													Local_5714[iLocal_5955 /*4*/].f_1 = OBJECT::CREATE_OBJECT(joaat("p_cargo_chute_s"), ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1) - Vector(3f, 0f, 0f), 1, 1, 0);
												}
												Local_5714[iLocal_5955 /*4*/] = OBJECT::CREATE_OBJECT(joaat("prop_drug_package"), ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1) - Vector(4f, 0f, 0f), 1, 1, 0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(Local_5714[iLocal_5955 /*4*/].f_1))
										{
											ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_5714[iLocal_5955 /*4*/].f_1, Local_5714[iLocal_5955 /*4*/], 0, 0f, 0f, 0.18f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											ENTITY::APPLY_FORCE_TO_ENTITY(Local_5714[iLocal_5955 /*4*/], 1, 0f, 0f, 0f, 0f, 0f, -0.5f, 0, 1, 1, 1, 0, 1);
											OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Local_5714[iLocal_5955 /*4*/], 1);
											ENTITY::PLAY_ENTITY_ANIM(Local_5714[iLocal_5955 /*4*/].f_1, "p_cargo_chute_s_deploy", "p_cargo_chute_s", 1f, 0, 1, 0, 0, 0);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_5714[iLocal_5955 /*4*/], 1);
											ENTITY::SET_ENTITY_LOD_DIST(Local_5714[iLocal_5955 /*4*/].f_1, 500);
											ENTITY::SET_ENTITY_LOD_DIST(Local_5714[iLocal_5955 /*4*/], 500);
											iLocal_5955++;
											iLocal_5823 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
					else
					{
						iLocal_5774[0] = 0;
						iLocal_5774[1] = 0;
						iLocal_5795 = 0;
						iLocal_5810 = 0;
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
						{
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], 1f);
						}
						if (CAM::DOES_CAM_EXIST(uLocal_5091))
						{
							CAM::DESTROY_CAM(uLocal_5091, 0);
						}
						iLocal_5819++;
					}
				}
			}
			break;
		
		case 4:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-3345.175f, 3001.278f, -0.0897f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0) < 600f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_4414[2 /*19*/], 50f);
				}
			}
			else
			{
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_4414[2 /*19*/], 100f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
				{
					if (!ENTITY::IS_ENTITY_IN_WATER(Local_4414[2 /*19*/]))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_4414[2 /*19*/], -3345.175f, 3001.278f, -0.0897f, 450f, 450f, 450f, 0, 1, 0))
						{
							if (iLocal_5811 == 0)
							{
								func_504();
							}
							if (!iLocal_5774[0])
							{
								if (GlobalFunc_663("SJC_DROPG2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								func_512();
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[19 /*19*/], 0))
								{
									if (!HUD::DOES_BLIP_EXIST(uLocal_5087))
									{
										uLocal_5087 = HUD::ADD_BLIP_FOR_RADIUS(ENTITY::GET_ENTITY_COORDS(Local_4414[19 /*19*/], 1), 150f);
										HUD::SET_BLIP_COLOUR(uLocal_5087, 3);
									}
								}
								iLocal_5774[0] = 1;
								GlobalFunc_7632(1);
							}
							if (!GlobalFunc_111())
							{
								if (iLocal_5795 == 0)
								{
									GlobalFunc_5884("SJC_DROPG1");
									iLocal_5795 = 1;
								}
							}
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_4414[19 /*19*/], 1), 175f, 175f, 800f, 0, 1, 0))
							{
								if (iLocal_5774[0] == 1)
								{
									if (PAD::IS_CONTROL_JUST_PRESSED(0, 114) && !ENTITY::IS_ENTITY_UPSIDEDOWN(PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_4948(&uLocal_27, 0, 0);
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_2_cargo_drop", Local_4414[2 /*19*/], "TREVOR_2_SOUNDS", 0, 0);
										PAD::SET_PAD_SHAKE(0, 200, 256);
										HUD::CLEAR_HELP(1);
										iLocal_5838 = MISC::GET_GAME_TIMER();
										iLocal_5819++;
									}
									else
									{
										PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
									}
								}
							}
						}
						else
						{
							if (ENTITY::IS_ENTITY_AT_COORD(Local_4414[2 /*19*/], -3345.175f, 3001.278f, -0.0897f, 400f, 400f, 400f, 0, 1, 0))
							{
								PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
							}
							if (!iLocal_5774[1])
							{
								if (!GlobalFunc_111())
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
									{
										if (iLocal_5811 == 1)
										{
											if (!ENTITY::IS_ENTITY_IN_WATER(Local_4414[2 /*19*/]))
											{
												GlobalFunc_5884("SJC_DROPG2");
											}
										}
									}
									if (HUD::DOES_BLIP_EXIST(uLocal_403))
									{
										HUD::REMOVE_BLIP(&uLocal_403);
									}
									func_512();
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[19 /*19*/], 0))
									{
										if (!HUD::DOES_BLIP_EXIST(uLocal_5087))
										{
											uLocal_5087 = HUD::ADD_BLIP_FOR_RADIUS(ENTITY::GET_ENTITY_COORDS(Local_4414[19 /*19*/], 1), 150f);
											HUD::SET_BLIP_COLOUR(uLocal_5087, 3);
										}
									}
									iLocal_5774[1] = 1;
								}
							}
						}
					}
				}
				else if (!iLocal_5774[0])
				{
					GlobalFunc_5105();
					GlobalFunc_5884("SJC_GETPLNG2");
					func_512();
					func_506(0, Local_4414[2 /*19*/], 0f, 0f, 0f, 0, 2);
					iLocal_5774[0] = 1;
				}
			}
			break;
		
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_5714[4 /*4*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_5714[4 /*4*/].f_1))
					{
						Local_5714[4 /*4*/].f_1 = OBJECT::CREATE_OBJECT(joaat("p_cargo_chute_s"), ENTITY::GET_ENTITY_COORDS(Local_4414[2 /*19*/], 1) - Vector(3f, 0f, 0f), 1, 1, 0);
					}
					Local_5714[4 /*4*/] = OBJECT::CREATE_OBJECT(joaat("prop_drug_package"), ENTITY::GET_ENTITY_COORDS(Local_4414[2 /*19*/], 1) - Vector(4f, 0f, 0f), 1, 1, 0);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_5714[4 /*4*/].f_1))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(Local_5714[4 /*4*/].f_1))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_5714[4 /*4*/].f_1, Local_5714[4 /*4*/], 0, 0f, 0f, 0.18f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_5714[4 /*4*/], 1, 0f, 0f, 0f, 0f, 0f, -0.1f, 0, 1, 1, 0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_5714[4 /*4*/].f_1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_5714[4 /*4*/], 0);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Local_5714[4 /*4*/].f_1, 1);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Local_5714[4 /*4*/], 1);
					ENTITY::PLAY_ENTITY_ANIM(Local_5714[4 /*4*/].f_1, "p_cargo_chute_s_deploy", "p_cargo_chute_s", 1f, 0, 1, 0, 0, 0);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_5714[4 /*4*/], 1);
					ENTITY::SET_ENTITY_LOD_DIST(Local_5714[4 /*4*/].f_1, 500);
					ENTITY::SET_ENTITY_LOD_DIST(Local_5714[4 /*4*/], 500);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_5714[4 /*4*/]))
			{
				if (iLocal_5810 == 0)
				{
				}
				if (GlobalFunc_588(&iLocal_5838, 1500))
				{
					if (!func_36("TR_RONGUNS"))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_RONGUNS", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
								func_33("TR_RONGUNS", 1);
							}
						}
					}
					MISC::SET_TIME_SCALE(1f);
				}
				if (GlobalFunc_588(&iLocal_5838, 2000))
				{
					if (func_36("TR_RONGUNS"))
					{
						GlobalFunc_5105();
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_5087))
							{
								HUD::REMOVE_BLIP(&uLocal_5087);
							}
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pload", 7, 0, 0, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
								{
									VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], 1f);
								}
								func_33("TR_pload", 1);
								iLocal_5819++;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			func_512();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_5546.f_1))
				{
					Local_5546.f_1 = GlobalFunc_6783(Local_4414[1 /*19*/], 0, 0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_4414[2 /*19*/], 100f);
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[2 /*19*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[2 /*19*/]);
					}
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::CLEAR_PRINTS();
			iLocal_5823 = MISC::GET_GAME_TIMER();
			iLocal_5774[0] = 1;
			iLocal_5804 = 0;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_4414[1 /*19*/], 1, 1, 1, 1, 1, 0, 0, 0);
			}
			func_56();
			break;
	}
}







void func_504()//Position - 0x5AFD6
{
	SYSTEM::SETTIMERA(0);
	CAM::SET_USE_HI_DOF();
	iLocal_5768 = 1;
	while (iLocal_5768)
	{
		SYSTEM::WAIT(0);
		if (!func_36("TREVOR_2_CARGO_DOORS"))
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_2_CARGO_DOORS");
			func_33("TREVOR_2_CARGO_DOORS", 1);
		}
		RECORDING::_0x208784099002BC30("M_TREV2", 0);
		switch (iLocal_5821)
		{
			case 0:
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_2_PLANE_CARGO_BAY", 0))
				{
					if (!CAM::DOES_CAM_EXIST(uLocal_5091))
					{
						uLocal_5091 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
						CAM::SET_CAM_ACTIVE(uLocal_5091, 1);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
						{
							CAM::ATTACH_CAM_TO_ENTITY(uLocal_5091, Local_4414[2 /*19*/], 0.0204f, -1.0638f, -0.8675f, 1);
							CAM::POINT_CAM_AT_ENTITY(uLocal_5091, Local_4414[2 /*19*/], -0.0038f, 1.9361f, -0.8524f, 1);
							CAM::SET_CAM_FOV(uLocal_5091, 49.4163f);
						}
						CAM::SHAKE_CAM(uLocal_5091, "HAND_SHAKE", 0.3f);
						MISC::SET_TIME_SCALE(0.7f);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						SYSTEM::SETTIMERB(0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
						{
							VEHICLE::OPEN_BOMB_BAY_DOORS(Local_4414[2 /*19*/]);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_2_cargo_bay_open", Local_4414[2 /*19*/], "TREVOR_2_SOUNDS", 0, 0);
						}
						GlobalFunc_4948(&uLocal_27, 0, 0);
						iLocal_5821++;
					}
				}
				break;
			
			case 1:
				if (SYSTEM::TIMERB() > 1500)
				{
					if (!func_36("TREVOR_2_DROP_CARGO"))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_CARGO_DOORS"))
						{
							AUDIO::STOP_AUDIO_SCENE("TREVOR_2_CARGO_DOORS");
						}
						else
						{
							AUDIO::START_AUDIO_SCENE("TREVOR_2_DROP_CARGO");
							func_33("TREVOR_2_DROP_CARGO", 1);
						}
					}
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					CAM::SET_CAM_ACTIVE(uLocal_5091, 0);
					CAM::DESTROY_CAM(uLocal_5091, 0);
					MISC::SET_TIME_SCALE(1f);
					iLocal_5768 = 0;
					iLocal_5811 = 1;
					iLocal_5821 = 0;
				}
				break;
		}
	}
}


void func_506(int iParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6)//Position - 0x5B1F7
{
	int iVar0;
	
	if (iParam1 != 0)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_402))
		{
			HUD::REMOVE_BLIP(&uLocal_402);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_404))
		{
			HUD::REMOVE_BLIP(&uLocal_404);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_403))
			{
				uLocal_403 = GlobalFunc_6783(iParam1, bParam5, 0);
				if (iParam6 == 1)
				{
					HUD::SET_BLIP_ROUTE(uLocal_403, 1);
				}
			}
		}
	}
	else if (iParam0 != 0)
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_403))
			{
				HUD::REMOVE_BLIP(&uLocal_403);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_402))
			{
				HUD::REMOVE_BLIP(&uLocal_402);
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_404))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
				{
					uLocal_404 = GlobalFunc_6797(iParam0, bParam5, 145);
				}
				else
				{
					uLocal_404 = GlobalFunc_6797(iParam0, bParam5, 145);
				}
				if (iParam6 == 1)
				{
					HUD::SET_BLIP_ROUTE(uLocal_404, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				HUD::SET_BLIP_SCALE(uLocal_404, 1f);
			}
			else
			{
				HUD::SET_BLIP_SCALE(uLocal_404, 0.7f);
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_403))
		{
			HUD::REMOVE_BLIP(&uLocal_403);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_404))
		{
			HUD::REMOVE_BLIP(&uLocal_404);
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_402))
		{
			if (iParam6 != 0)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
			uLocal_402 = GlobalFunc_5104(Param2, iVar0);
		}
	}
}



void func_509()//Position - 0x5B3B9
{
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
}

void func_510()//Position - 0x5B3CB
{
	if (!PED::IS_PED_INJURED(Local_5546))
	{
		GlobalFunc_173(&Local_72, 3, Local_5546, "NervousRon", 0, 1);
	}
	GlobalFunc_173(&Local_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
}

void func_511(int iParam0)//Position - 0x5B400
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	if (iLocal_368 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_368 - 1))
		{
			if (iLocal_369[iVar0] == iParam0)
			{
				iVar1 = iVar0;
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_369[iVar0]);
				iLocal_369[iVar0] = 0;
			}
			iVar0++;
		}
	}
	if (iVar1 >= 0 && iLocal_368 > 1)
	{
		iVar0 = iVar1;
		while (iVar0 <= (iLocal_368 - 1))
		{
			iLocal_369[iVar0] = iLocal_369[iVar0 + 1];
			if (iVar0 == (iLocal_368 - 1))
			{
				iLocal_369[iVar0] = 0;
				iLocal_368 = (iLocal_368 - 1);
			}
			iVar0++;
		}
	}
}

void func_512()//Position - 0x5B49D
{
	if (HUD::DOES_BLIP_EXIST(uLocal_403))
	{
		HUD::REMOVE_BLIP(&uLocal_403);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_402))
	{
		HUD::REMOVE_BLIP(&uLocal_402);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_404))
	{
		HUD::REMOVE_BLIP(&uLocal_404);
	}
}


void func_514(int iParam0, int iParam1, bool bParam2)//Position - 0x5B536
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (bParam2)
			{
				VEHICLE::DELETE_VEHICLE(&iParam0);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
		}
	}
}

void func_515()//Position - 0x5B56B
{
	func_523();
	func_520(&Local_5123, 1, 0, 1);
	func_520(&Local_5340, 1, 0, 1);
	func_520(&Local_5449, 1, 0, 1);
	func_518(&Local_5504, 1, 0);
	func_518(&Local_5525, 1, 0);
	func_517(&Local_5573, 1);
	func_517(&Local_5583, 1);
	func_517(&(Local_5593[0 /*10*/]), 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5712))
	{
		OBJECT::DELETE_OBJECT(&iLocal_5712);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_5739[1]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_5739[1]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[0]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_5739[0]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_5739[0]));
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle")));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("gburrito"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_wall_light_02a"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_sniperrifle")));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stickybomb")));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont1"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tankercar"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_gas_tank_02a"));
	STREAMING::REMOVE_ANIM_DICT("misstrevor2ron_basic_moves");
	STREAMING::REMOVE_ANIM_DICT("misstrevor2hangar_death");
	if (ENTITY::DOES_ENTITY_EXIST(Local_5504[0 /*20*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5504[0 /*20*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_5504[0 /*20*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_5525[0 /*20*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5525[0 /*20*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_5525[0 /*20*/]));
		}
	}
	iLocal_5822 = 0;
	while (iLocal_5822 <= 54)
	{
		if (iLocal_5822 != 27)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_491[iLocal_5822 /*40*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_491[iLocal_5822 /*40*/]))
				{
					PED::DELETE_PED(&(Local_491[iLocal_5822 /*40*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
				}
			}
		}
		iLocal_5822++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_491[27 /*40*/]))
	{
		if (iLocal_5873 == 4)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_491[27 /*40*/], 0), 1) > 100f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_491[27 /*40*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_lost_01"));
				STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_11");
			}
		}
	}
	iLocal_5822 = 0;
	while (iLocal_5822 <= 39)
	{
		if (((iLocal_5822 != 15 || iLocal_5822 != 16) || iLocal_5822 != 17) || iLocal_5822 != 18)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2692[iLocal_5822 /*40*/]))
			{
				if (!PED::IS_PED_MODEL(Local_2692[iLocal_5822 /*40*/], joaat("g_m_y_mexgoon_01")))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_2692[iLocal_5822 /*40*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2692[iLocal_5822 /*40*/]));
					}
				}
			}
		}
		iLocal_5822++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5763))
	{
		OBJECT::DELETE_OBJECT(&iLocal_5763);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[11 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[11 /*19*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_4414[11 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[12 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[12 /*19*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_4414[12 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[4 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[4 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[4 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[5 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[5 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[5 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[10 /*19*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_4414[10 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[3 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[3 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[3 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[4 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[4 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[4 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[5 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[5 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[5 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[6 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[6 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[6 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[8 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[8 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[8 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[9 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[9 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[9 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[10 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[10 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[11 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[11 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[11 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[12 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[12 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[12 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[13 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[13 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[13 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[14 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[14 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[14 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[15 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[15 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[15 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[16 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[16 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[16 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[17 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[17 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[17 /*19*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[18 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[18 /*19*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_4414[18 /*19*/]));
		}
	}
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(7, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(9, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(13, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(23, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(24, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(25, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(14, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(15, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(16, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(17, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(32, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(33, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(34, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(35, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(36, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(37, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(38, "RCSJC");
	if (func_36("BRIDGETRAIN"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5089))
		{
			if (GlobalFunc_588(&iLocal_5905, 30000))
			{
				if (GlobalFunc_156(iLocal_5089, PLAYER::PLAYER_PED_ID(), 1) > 300f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_5089))
					{
						VEHICLE::DELETE_MISSION_TRAIN(&iLocal_5089);
					}
				}
			}
		}
	}
}


void func_517(int iParam0, int iParam1)//Position - 0x5BC80
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
		}
		ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
		if (iParam1 == 1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_518(int iParam0, int iParam1, int iParam2)//Position - 0x5BCC2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_519(iParam0[iVar0 /*20*/], iParam1, iParam2);
		iVar0++;
	}
}

void func_519(var uParam0, int iParam1, int iParam2)//Position - 0x5BCF1
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (iParam2 == 1)
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*uParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*uParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*uParam0, 0);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
				}
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1));
				}
			}
			else if (iParam2 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*uParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*uParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*uParam0, 0);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
				}
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1));
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(*uParam0) || !ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*uParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*uParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*uParam0, 0);
					VEHICLE::DELETE_VEHICLE(uParam0);
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_1));
		}
		uParam0->f_7 = 0;
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
	}
}

void func_520(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5BE12
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_521(uParam0[iVar0 /*27*/], iParam1, iParam2, iParam3);
		iVar0++;
	}
}

void func_521(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5BE43
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (PED::IS_PED_INJURED(*iParam0))
				{
					if (ENTITY::IS_ENTITY_DEAD(*iParam0))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
			}
			else if (iParam2 == 0)
			{
				if (!PED::IS_PED_INJURED(*iParam0))
				{
					PED::SET_PED_KEEP_TASK(*iParam0, iParam3);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
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
		iParam0->f_19 = 0;
		iParam0->f_18 = 0;
		iParam0->f_15 = 0;
		iParam0->f_16 = 0;
		iParam0->f_17 = 0;
		iParam0->f_24 = 0;
		iParam0->f_22 = 0;
		iParam0->f_23 = 0;
		iParam0->f_25 = 0;
		GlobalFunc_589(&(iParam0->f_2));
	}
}


void func_523()//Position - 0x5BFD3
{
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(7, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(9, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(13, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(23, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(24, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(25, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(14, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(15, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(16, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(17, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(32, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(33, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(34, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(35, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(36, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(37, "RCSJC");
	VEHICLE::REMOVE_VEHICLE_RECORDING(38, "RCSJC");
}

void func_524()//Position - 0x5C071
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 54)
	{
		if (!PED::IS_PED_INJURED(Local_491[iVar0 /*40*/]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_491[iVar0 /*40*/], 1), 1) < 100f)
			{
				GlobalFunc_661(Local_491[iVar0 /*40*/], &(Local_491[iVar0 /*40*/].f_23), -1, 0, 1, 0, -1082130432, 0);
			}
			else
			{
				GlobalFunc_589(&(Local_491[iVar0 /*40*/].f_23));
			}
		}
		else
		{
			GlobalFunc_589(&(Local_491[iVar0 /*40*/].f_23));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		if (!PED::IS_PED_INJURED(Local_2692[iVar0 /*40*/]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2692[iVar0 /*40*/], 1), 1) < 100f)
			{
				if ((iVar0 != 19 || iVar0 != 20) || iVar0 != 21)
				{
					GlobalFunc_661(Local_2692[iVar0 /*40*/], &(Local_2692[iVar0 /*40*/].f_23), -1, 0, 1, 0, -1082130432, 0);
				}
				else
				{
					GlobalFunc_589(&(Local_2692[iVar0 /*40*/].f_23));
				}
			}
			else
			{
				GlobalFunc_589(&(Local_2692[iVar0 /*40*/].f_23));
			}
		}
		else
		{
			GlobalFunc_589(&(Local_2692[iVar0 /*40*/].f_23));
		}
		iVar0++;
	}
}


void func_526()//Position - 0x5C2CF
{
	if (iLocal_5819 > 0)
	{
		func_554();
		func_553();
		func_549();
		func_548();
		func_517(&Local_5583, 1);
		if (ENTITY::DOES_ENTITY_EXIST(Local_2692[14 /*40*/]))
		{
			if (!PED::IS_PED_INJURED(Local_2692[14 /*40*/]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_2692[14 /*40*/], 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_5546, 780511057) != 1)
					{
						TASK::TASK_COMBAT_PED(Local_2692[14 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
		}
	}
	if (iLocal_5819 > 6)
	{
		if (iLocal_5819 != 98 && iLocal_5819 != 99)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
				{
					iLocal_5116 = 11;
					iLocal_5874 = 12;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_4414[10 /*19*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_491[12 /*40*/]))
	{
		if (PED::IS_PED_INJURED(Local_491[12 /*40*/]))
		{
			STREAMING::REMOVE_ANIM_DICT("misstrevor2hangar_death");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[2 /*19*/]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
		{
			func_208(8, 2474.078f, 3477.081f, 48.1862f, 191.3157f, 0);
		}
	}
	if (CAM::_0x3044240D2E0FA842())
	{
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (iLocal_5769[2])
	{
		func_547();
	}
	if (iLocal_5819 > 0 && iLocal_5819 < 5)
	{
		func_544();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			STREAMING::REQUEST_COLLISION_AT_COORD(ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1));
		}
	}
	if (iLocal_5777[0] == 1)
	{
		func_543();
		func_542();
	}
	if (iLocal_5819 > 1)
	{
		if (!func_36("SJC_WINGH"))
		{
			GlobalFunc_159("SJC_WINGH", -1);
			func_33("SJC_WINGH", 1);
		}
	}
	if (iLocal_5819 > 7)
	{
		if (iLocal_5819 != 98 && iLocal_5819 != 99)
		{
			if (!func_36("TR2_RUNW"))
			{
				if (!GlobalFunc_5172(&Local_5875, 1))
				{
					if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_RUNW", 8, 0, 0, 0))
					{
						func_33("TR2_RUNW", 1);
						iLocal_5837 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (GlobalFunc_588(&iLocal_5837, 7000))
			{
				func_33("TR2_RUNW", 0);
			}
		}
	}
	if (iLocal_5819 > 6)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
		{
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_4414[2 /*19*/], 60f);
		}
	}
	if (iLocal_5819 > 0 && iLocal_5819 < 5)
	{
		HUD::DISPLAY_AMMO_THIS_FRAME(0);
		if (!iLocal_5768)
		{
			func_541();
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_491[12 /*40*/]))
			{
				if (PED::IS_PED_INJURED(Local_491[12 /*40*/]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]) > 4818.6f)
						{
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], 0.45f);
						}
					}
				}
			}
		}
	}
	if (!iLocal_5085)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
	}
	if (iLocal_5819 > 0)
	{
		func_540();
	}
	func_539(&Local_491);
	func_539(&Local_2692);
	func_538();
	switch (iLocal_5819)
	{
		case 0:
			func_31(1, "RCSJC");
			func_31(2, "RCSJC");
			func_31(7, "RCSJC");
			func_31(9, "RCSJC");
			func_31(13, "RCSJC");
			func_31(23, "RCSJC");
			func_31(24, "RCSJC");
			func_31(25, "RCSJC");
			func_31(32, "RCSJC");
			func_31(33, "RCSJC");
			func_31(34, "RCSJC");
			func_31(35, "RCSJC");
			func_31(36, "RCSJC");
			func_31(37, "RCSJC");
			func_31(38, "RCSJC");
			func_30(joaat("g_m_y_lost_01"));
			func_30(joaat("hexer"));
			func_30(joaat("hauler"));
			func_30(joaat("tanker"));
			func_30(joaat("gburrito"));
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_carbinerifle"), 31, 0);
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("hexer"), 3);
			func_511(joaat("maverick"));
			STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_9b");
			STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_10");
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_wall_light_02a"));
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			GlobalFunc_11046(4, "Plane wing", 0, 0, 0, 1);
			iLocal_5806 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
			{
				ENTITY::SET_ENTITY_HEALTH(uLocal_5739[1], 120);
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_4414[2 /*19*/]));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				VEHICLE::SET_VEHICLE_STRONG(Local_4414[2 /*19*/], 1);
			}
			if (!PED::IS_PED_INJURED(Local_5546))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_5546, 1000);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_5546, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_5546, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[5 /*19*/]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_4414[5 /*19*/], 1);
				VEHICLE::SET_VEHICLE_STRONG(Local_4414[5 /*19*/], 0);
				ENTITY::SET_ENTITY_PROOFS(Local_4414[5 /*19*/], 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_GET_TO_PLANE"))
			{
				AUDIO::STOP_AUDIO_SCENE("TREVOR_2_GET_TO_PLANE");
			}
			else
			{
				AUDIO::START_AUDIO_SCENE("TREVOR_2_SHOOTOUT_ON_WING");
			}
			PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 64);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 2);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_5872, 1);
				if ((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0) || !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 0)) || !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 120, 1, 1);
				}
				else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0))
				{
					if (iLocal_5872 != joaat("weapon_assaultrifle"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 1);
					}
				}
				else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0))
				{
					if (iLocal_5872 != joaat("weapon_carbinerifle"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 1);
					}
				}
				else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 0))
				{
					if (iLocal_5872 != joaat("weapon_advancedrifle"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 1);
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			if (!PED::IS_PED_INJURED(Local_5546))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5546, iLocal_489);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_489, iLocal_489);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_489, iLocal_490);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_490, iLocal_489);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_489, 1862763509);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_490, 1862763509);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_5739[1]);
			}
			func_510();
			func_509();
			iLocal_5808 = 0;
			iLocal_5085 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_5739[1]);
			}
			iLocal_5836 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[14]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_5739[14], 0);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 0);
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0))
			{
				if ((iLocal_5872 != joaat("weapon_assaultrifle") && iLocal_5872 != joaat("weapon_advancedrifle")) && iLocal_5872 != joaat("weapon_carbinerifle"))
				{
					WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), GlobalFunc_3003(250, WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"))));
				}
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 0))
			{
				if ((iLocal_5872 != joaat("weapon_assaultrifle") && iLocal_5872 != joaat("weapon_advancedrifle")) && iLocal_5872 != joaat("weapon_carbinerifle"))
				{
					WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), GlobalFunc_3003(250, WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"))));
				}
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0))
			{
				if ((iLocal_5872 != joaat("weapon_assaultrifle") && iLocal_5872 != joaat("weapon_advancedrifle")) && iLocal_5872 != joaat("weapon_carbinerifle"))
				{
					WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), GlobalFunc_3003(250, WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"))));
				}
			}
			if (iLocal_5808 == 0)
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/], 2, "RCSJC", 1);
					VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], 0.6f);
				}
				else
				{
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/]);
					VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], 0.6f);
				}
			}
			WEAPON::SET_PED_INFINITE_AMMO_CLIP(PLAYER::PLAYER_PED_ID(), 1);
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_5872, 1);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_2_BIKER_GRIND", 0);
			STREAMING::REQUEST_ANIM_DICT("misstrevor2hangar_death");
			STREAMING::REQUEST_PTFX_ASSET();
			iLocal_5837 = MISC::GET_GAME_TIMER();
			iLocal_5798[0] = 0;
			iLocal_5798[1] = 0;
			iLocal_5798[2] = 0;
			iLocal_5798[3] = 0;
			iLocal_5952 = 0;
			iLocal_5951 = 0;
			iLocal_5765 = 1;
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 101, 1);
				MISC::CLEAR_AREA(1656.522f, 3246.651f, 39.5928f, 100f, 1, 0, 0, 0);
			}
			iLocal_5819 = 98;
			break;
		
		case 98:
			if (func_29("RCSJC"))
			{
				if (func_28())
				{
					if (WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_carbinerifle")))
					{
						func_26(13, joaat("hexer"), 1582.074f, 3365.721f, 36.4635f, 90f, joaat("g_m_y_lost_01"), 1, 13, 0, 0, -1, joaat("weapon_pistol"));
						func_26(14, joaat("hexer"), 1748.88f, 3045.37f, 61.45f, 262.61f, joaat("g_m_y_lost_01"), 1, 14, 0, 0, -1, joaat("weapon_pistol"));
						func_26(24, joaat("hexer"), 1330.454f, 3159.925f, 39.4563f, 278.982f, joaat("g_m_y_lost_01"), 1, 24, 0, 0, -1, joaat("weapon_sawnoffshotgun"));
						func_26(8, joaat("gburrito"), 1088.475f, 3145.329f, 39.4609f, 296.792f, joaat("g_m_y_lost_01"), 0, 0, 0, 0, -1, joaat("weapon_pistol"));
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[8 /*19*/], 1);
						func_26(25, joaat("gburrito"), 1417.43f, 3006.3f, 40.33f, 283.3621f, joaat("g_m_y_lost_01"), 1, 25, 3, 0, -1, joaat("weapon_carbinerifle"));
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[25 /*19*/], 1);
						if (!ENTITY::DOES_ENTITY_EXIST(Local_491[11 /*40*/]))
						{
							func_536(11, 17, 0, 0, 0, 1, 1);
						}
						else
						{
							func_536(12, 17, 0, 0, 0, 1, 1);
						}
						Local_491[12 /*40*/].f_15 = 0;
						iLocal_5769[0] = 1;
						if (!PED::IS_PED_INJURED(Local_2692[26 /*40*/]))
						{
							PED::DELETE_PED(&(Local_2692[26 /*40*/]));
						}
						if (!PED::IS_PED_INJURED(Local_491[15 /*40*/]))
						{
							PED::DELETE_PED(&(Local_491[15 /*40*/]));
						}
						iLocal_5819 = 99;
					}
				}
			}
			break;
		
		case 99:
			if (!CAM::_0x3044240D2E0FA842())
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_WING_PLANE"))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(2, "RCSJC");
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "RCSJC"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
						{
							GlobalFunc_6685(1);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_4414[1 /*19*/], 0, 3.84078f, 0.831592f, 0.753682f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 208245535) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 208245535) != 0)
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									TASK::TASK_AIM_GUN_SCRIPTED(PLAYER::PLAYER_PED_ID(), 986158275, 1, 1);
								}
								else
								{
									TASK::TASK_AIM_GUN_SCRIPTED(PLAYER::PLAYER_PED_ID(), 986158275, 1, 0);
								}
							}
							VEHICLE::SET_VEHICLE_STRONG(Local_4414[1 /*19*/], 1);
							ENTITY::SET_ENTITY_HEALTH(Local_4414[1 /*19*/], 2000);
							if (iLocal_5808 == 1)
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/], 2, "RCSJC", 1);
									VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], 0.6f);
								}
								else
								{
									VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/]);
									VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], 0.6f);
								}
							}
							VEHICLE::REQUEST_VEHICLE_ASSET(joaat("hexer"), 3);
							iLocal_5819 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_9b") && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_10"))
			{
				if (func_29("RCSJC"))
				{
					if (func_28())
					{
						if (WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_carbinerifle")))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
							{
								if (!PED::IS_PED_INJURED(Local_5546))
								{
									if (!PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
									{
										if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[1 /*19*/], -1))
										{
											PED::SET_PED_INTO_VEHICLE(Local_5546, Local_4414[1 /*19*/], -1);
										}
									}
									else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[1 /*19*/], 0) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
										}
										iLocal_5820 = 1;
										func_535();
										iLocal_5823 = MISC::GET_GAME_TIMER();
										func_512();
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
										{
											ENTITY::FREEZE_ENTITY_POSITION(Local_4414[2 /*19*/], 1);
											ENTITY::SET_ENTITY_PROOFS(Local_4414[2 /*19*/], 0, 0, 0, 1, 1, 0, 0, 0);
											VEHICLE::SET_VEHICLE_STRONG(Local_4414[2 /*19*/], 1);
											VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[2 /*19*/], 1);
										}
										if (!PED::IS_PED_INJURED(Local_491[11 /*40*/]))
										{
											TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_491[11 /*40*/], 1);
											WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_491[11 /*40*/], 0.5f, 0.8f);
											PED::SET_PED_ACCURACY(Local_491[11 /*40*/], 2);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
											TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 1742.772f, 3268.838f, 40.1982f, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.2f, 2f, 1, 0, 0, -957453492, 20000);
											TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
											TASK::TASK_PERFORM_SEQUENCE(Local_491[11 /*40*/], uLocal_5080);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
										}
										if (!PED::IS_PED_INJURED(Local_491[32 /*40*/]))
										{
											PED::SET_PED_CAN_BE_TARGETTED(Local_491[32 /*40*/], 1);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_491[32 /*40*/], 0);
											PED::SET_PED_COMBAT_MOVEMENT(Local_491[32 /*40*/], 1);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 2000, 0);
											TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, 1728.9f, 3293f, 40.9562f, 30f);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
											TASK::TASK_PERFORM_SEQUENCE(Local_491[32 /*40*/], uLocal_5080);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
										}
										iLocal_5819++;
									}
									else
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_5823, 1500))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
					while (CAM::IS_SCREEN_FADING_IN())
					{
						CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
						SYSTEM::WAIT(0);
						CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
					}
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_5823) > 5000)
			{
				iLocal_5777[0] = 1;
				iLocal_5785 = 0;
				iLocal_5819++;
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_4414[1 /*19*/], 1658.603f, 3243.452f, 40.8961f, 15f, 15f, 15f, 0, 1, 0))
				{
					CUTSCENE::REMOVE_CUTSCENE();
					CUTSCENE::REQUEST_CUTSCENE("TRV_2_MCS_6", 8);
					VEHICLE::REQUEST_VEHICLE_RECORDING(3, "RCSJC");
					iLocal_5819++;
				}
			}
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1594.41f, 3220.278f, 39.4116f, 15f, 15f, 15f, 0, 1, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], 0.6f);
					}
					func_534("RCSJC");
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[2 /*19*/], 1);
					}
					SYSTEM::SETTIMERA(0);
					func_30(joaat("gburrito"));
					func_30(joaat("hexer"));
					func_30(joaat("g_m_y_lost_01"));
					func_31(3, "RCSJC");
					func_31(8, "RCSJC");
					func_31(14, "RCSJC");
					func_31(15, "RCSJC");
					func_31(16, "RCSJC");
					func_31(17, "RCSJC");
					func_533();
					iLocal_5086 = 0;
					iLocal_5082 = 0;
					iLocal_5819 = 5;
				}
				else if (GlobalFunc_588(&iLocal_5837, 7000))
				{
					if (!GlobalFunc_5172(&Local_5875, 1))
					{
						if (func_532(0))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_bp02", 6, 0, 0, 0))
							{
								iLocal_5837 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			break;
		
		case 5:
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 101, 0);
			func_527();
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FLIGHT_START"))
				{
					AUDIO::START_AUDIO_SCENE("TREVOR_2_FLIGHT_START");
				}
				WEAPON::SET_PED_INFINITE_AMMO_CLIP(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), 1);
				iLocal_5085 = 1;
				iLocal_5819 = 6;
			}
			break;
		
		case 6:
			if (func_28() && func_29("RCSJC"))
			{
				if (!func_36("START_THE BIKERS"))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(14, "RCSJC");
					VEHICLE::REQUEST_VEHICLE_RECORDING(15, "RCSJC");
					VEHICLE::REQUEST_VEHICLE_RECORDING(16, "RCSJC");
					VEHICLE::REQUEST_VEHICLE_RECORDING(17, "RCSJC");
					if (((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "RCSJC") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "RCSJC")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "RCSJC")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "RCSJC"))
					{
						func_26(15, joaat("hexer"), 1769.601f, 3306.73f, 40.1565f, 143.6793f, joaat("g_m_y_lost_01"), 1, 15, 0, 0, -1, joaat("weapon_carbinerifle"));
						func_26(16, joaat("hexer"), 1032.677f, 3080.18f, 41.0803f, 272.7215f, joaat("g_m_y_lost_01"), 1, 16, 0, 0, -1, joaat("weapon_carbinerifle"));
						func_26(17, joaat("hexer"), 1032.677f, 3080.18f, 41.0803f, 272.7215f, joaat("g_m_y_lost_01"), 1, 17, 0, 0, -1, joaat("weapon_carbinerifle"));
						func_26(18, joaat("hexer"), 1685.287f, 3231.161f, 39.5343f, 272.7215f, joaat("g_m_y_lost_01"), 1, 18, 0, 0, -1, joaat("weapon_carbinerifle"));
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[15 /*19*/], 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[15 /*19*/]))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[15 /*19*/], 14, "RCSJC", 4, 0, 786468);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[15 /*19*/], fLocal_5852);
							}
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[15 /*40*/], 74, 1);
							PED::SET_PED_ACCURACY(Local_2692[15 /*40*/], 1);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[15 /*19*/], "TREVOR_2_PLANE_WING_BIKERS_GROUP", 0);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[15 /*19*/], 1f);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[16 /*19*/], 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[16 /*19*/]))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[16 /*19*/], 15, "RCSJC", 4, 0, 786468);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[16 /*19*/], fLocal_5853);
							}
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[16 /*40*/], 74, 1);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[16 /*19*/], "TREVOR_2_PLANE_WING_BIKERS_GROUP", 0);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[16 /*19*/], 1f);
							PED::SET_PED_ACCURACY(Local_2692[16 /*40*/], 1);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[17 /*19*/], 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[17 /*19*/]))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[17 /*19*/], 16, "RCSJC", 4, 0, 786468);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[17 /*19*/], fLocal_5854);
							}
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[17 /*40*/], 74, 1);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[17 /*19*/], "TREVOR_2_PLANE_WING_BIKERS_GROUP", 0);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[17 /*19*/], 1f);
							PED::SET_PED_ACCURACY(Local_2692[17 /*40*/], 1);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[18 /*19*/], 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[18 /*19*/]))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[18 /*19*/], 17, "RCSJC", 4, 0, 786468);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[18 /*19*/], fLocal_5855);
							}
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[18 /*40*/], 74, 1);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[18 /*19*/], "TREVOR_2_PLANE_WING_BIKERS_GROUP", 0);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[18 /*19*/], 1f);
							PED::SET_PED_ACCURACY(Local_2692[18 /*40*/], 1);
						}
						func_33("START_THE BIKERS", 1);
					}
				}
				else
				{
					func_26(27, joaat("gburrito"), 1548.637f, 3140.068f, 39.5341f, 317.6045f, joaat("g_m_y_lost_01"), 1, 25, 3, 0, -1, joaat("weapon_carbinerifle"));
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[27 /*19*/], 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[22 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[22 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[22 /*19*/], 17, "RCSJC", 4, 0, 786603);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[22 /*19*/], 1f);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[27 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[27 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[27 /*19*/], 35, "RCSJC", 1);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[27 /*19*/], 1f);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[13 /*19*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[13 /*19*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[13 /*19*/]);
						}
						else if (!PED::IS_PED_INJURED(Local_2692[13 /*40*/]))
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2692[13 /*40*/], 200f, 0);
						}
					}
					STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_10");
					STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_9b");
					iLocal_5819 = 8;
				}
			}
			break;
		
		case 7:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_4414[2 /*19*/], 0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[2 /*19*/], 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4414[2 /*19*/]);
					ENTITY::SET_ENTITY_PROOFS(Local_4414[2 /*19*/], 0, 0, 0, 0, 0, 0, 0, 0);
					SYSTEM::SETTIMERA(0);
					HUD::REMOVE_BLIP(&uLocal_403);
					if (HUD::DOES_BLIP_EXIST(Local_5546.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_5546.f_1));
					}
					HUD::CLEAR_PRINTS();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
					iLocal_5819++;
				}
				else
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_403))
					{
						uLocal_403 = GlobalFunc_6783(Local_4414[2 /*19*/], 0, 0);
					}
					if (!func_36("SJC_GETPLNG2"))
					{
						GlobalFunc_5884("SJC_GETPLNG2");
						func_33("SJC_GETPLNG2", 1);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(Local_4414[1 /*19*/]))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 196, 1);
				}
			}
			break;
		
		case 8:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_FLY"))
				{
					HUD::CLEAR_PRINTS();
					if (iLocal_5795 == 0)
					{
						GlobalFunc_5884("SJC_FLWPLNG");
						iLocal_5795 = 1;
					}
					GlobalFunc_159("SJC_FLYH1", -1);
					if (!HUD::DOES_BLIP_EXIST(Local_5546.f_1))
					{
						Local_5546.f_1 = GlobalFunc_6783(Local_4414[1 /*19*/], 0, 0);
					}
					fLocal_5858 = 0.6f;
					func_523();
					iLocal_5819++;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(Local_4414[1 /*19*/]))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 196, 1);
				}
			}
			break;
		
		case 9:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (fLocal_5858 < 1.3f)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
					{
						fLocal_5858 = (fLocal_5858 + 0.008f);
						VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], fLocal_5858);
					}
				}
				if (fLocal_5858 > 1.29f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						iLocal_5823 = MISC::GET_GAME_TIMER();
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
						func_56();
					}
				}
				if (!ENTITY::IS_ENTITY_IN_AIR(Local_4414[1 /*19*/]))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 196, 1);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_403))
				{
					uLocal_403 = GlobalFunc_6783(Local_4414[2 /*19*/], 0, 0);
				}
				if (!func_36("SJC_GETPLNG2"))
				{
					GlobalFunc_5884("SJC_GETPLNG2");
					func_33("SJC_GETPLNG2", 1);
				}
			}
			break;
	}
}

void func_527()//Position - 0x5D962
{
	int iVar0;
	
	iLocal_5086 = 0;
	iLocal_5768 = 1;
	iLocal_5081 = 0;
	while (iLocal_5768)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_TREV2", 0);
		if (iLocal_5086 == 0)
		{
			if (iLocal_5083)
			{
				iLocal_5083 = 0;
			}
			else if (iLocal_5082 == 0)
			{
				iLocal_5768 = 1;
				CUTSCENE::REQUEST_CUTSCENE("TRV_2_MCS_6", 8);
				VEHICLE::REQUEST_VEHICLE_RECORDING(3, "RCSJC");
				iLocal_5813 = 0;
				iLocal_5081 = 0;
				iLocal_5815 = 0;
				fLocal_5858 = 0.4f;
				GlobalFunc_8380(1, 1, 1, 0);
				func_536(27, 27, 0, 0, 0, 0, 1);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 1, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 11, 0, 0, 0);
				GlobalFunc_4935();
				iLocal_5082++;
			}
			else if (iLocal_5082 == 1)
			{
				if (GlobalFunc_109())
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					else
					{
						CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
						SYSTEM::WAIT(0);
					}
					WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_5872, 1);
					iLocal_5924 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), iLocal_5872, 1, 0, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5924))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5924, "Trevors_weapon", 1, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_4414[1 /*19*/], "Rons_Plane", 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_4414[2 /*19*/], "Trevors_Plane", 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_491[27 /*40*/], "Lost_biker", 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lost_biker", Local_491[27 /*40*/], joaat("g_m_y_lost_01"));
					}
					GlobalFunc_4935();
					GlobalFunc_5105();
					if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
					}
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					GlobalFunc_8380(1, 1, 1, 0);
					iLocal_5923 = 0;
					iLocal_5086 = 1;
				}
			}
		}
		if (iLocal_5086 == 1)
		{
			if (!iLocal_5081)
			{
				if (GlobalFunc_1080())
				{
					iLocal_5081 = 1;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[15 /*19*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[15 /*19*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[15 /*19*/]);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[16 /*19*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[16 /*19*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[16 /*19*/]);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[17 /*19*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[17 /*19*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[17 /*19*/]);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[18 /*19*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[18 /*19*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[18 /*19*/]);
						}
					}
					SYSTEM::WAIT(0);
					VEHICLE::REQUEST_VEHICLE_RECORDING(14, "RCSJC");
					VEHICLE::REQUEST_VEHICLE_RECORDING(15, "RCSJC");
					VEHICLE::REQUEST_VEHICLE_RECORDING(16, "RCSJC");
					VEHICLE::REQUEST_VEHICLE_RECORDING(17, "RCSJC");
				}
			}
			if (iLocal_5813 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_SHOOTOUT_ON_WING"))
					{
						AUDIO::STOP_AUDIO_SCENE("TREVOR_2_SHOOTOUT_ON_WING");
					}
					if (iLocal_5923 == 0)
					{
						if (CLOCK::GET_CLOCK_HOURS() < 5)
						{
							if (CLOCK::GET_CLOCK_HOURS() < 4)
							{
								CLOCK::ADD_TO_CLOCK_TIME(0, 30, 0);
							}
							else
							{
								CLOCK::ADD_TO_CLOCK_TIME(0, 5, 0);
							}
						}
						iLocal_5923 = 1;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4414[1 /*19*/], 1000);
						VEHICLE::SET_VEHICLE_FIXED(Local_4414[1 /*19*/]);
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), 100f, 1, 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4414[2 /*19*/], 1000);
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_4414[2 /*19*/], 1), 100f, 1, 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[2 /*19*/], -1))
						{
							iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_4414[2 /*19*/], -1);
							PED::DELETE_PED(&iVar0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2692[1 /*40*/]))
					{
						PED::DELETE_PED(&(Local_2692[1 /*40*/]));
					}
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_528(27);
					iLocal_5813 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Rons_Plane", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_4414[1 /*19*/], 0, 1);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_4414[1 /*19*/], 1, 1);
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[1 /*19*/], -1))
							{
								PED::SET_PED_INTO_VEHICLE(Local_5546, Local_4414[1 /*19*/], -1);
							}
						}
						else if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "RCSJC"))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/]);
							}
							if (!func_36("START_RON_PLAYBACK"))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/], 3, "RCSJC", 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/], 1000f);
								ENTITY::SET_ENTITY_PROOFS(Local_4414[1 /*19*/], 0, 0, 0, 1, 1, 0, 0, 0);
								VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_4414[1 /*19*/], 0);
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[1 /*19*/], 1, 1);
								VEHICLE::SET_PLAYBACK_SPEED(Local_4414[1 /*19*/], fLocal_5858);
								VEHICLE::SET_VEHICLE_FIXED(Local_4414[1 /*19*/]);
								VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_4414[1 /*19*/], 1);
								func_33("START_RON_PLAYBACK", 1);
							}
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_Plane", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_4414[2 /*19*/], 0, 1);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_4414[2 /*19*/], 1, 1);
					ENTITY::SET_ENTITY_COORDS(Local_4414[2 /*19*/], 1562.26f, 3225.03f, 41.12f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_4414[2 /*19*/], 108.91f);
					ENTITY::FREEZE_ENTITY_POSITION(Local_4414[2 /*19*/], 0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[2 /*19*/], 1, 1);
					VEHICLE::SET_HELI_BLADES_SPEED(Local_4414[2 /*19*/], 0.5f);
					ENTITY::SET_ENTITY_PROOFS(Local_4414[2 /*19*/], 0, 0, 0, 0, 0, 0, 0, 0);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_4414[2 /*19*/], 2f);
					VEHICLE::SET_VEHICLE_FIXED(Local_4414[2 /*19*/]);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lost_biker", 0))
			{
				if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5847))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
						{
							iLocal_5847 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_491[27 /*40*/], iLocal_5847, "misstrevor2ig_11", "idle_intro", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5847, Local_4414[2 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_4414[2 /*19*/], "chassis"));
							iLocal_5868 = 0;
							VEHICLE::DISABLE_PLANE_AILERON(Local_4414[2 /*19*/], 0, 1);
							iLocal_5873 = 1;
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[2 /*19*/], -1))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], -1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() > 13000)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FLIGHT_START"))
				{
					AUDIO::START_AUDIO_SCENE("TREVOR_2_FLIGHT_START");
				}
			}
			if (!func_36("START_THE BIKERS"))
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(14, "RCSJC");
				VEHICLE::REQUEST_VEHICLE_RECORDING(15, "RCSJC");
				VEHICLE::REQUEST_VEHICLE_RECORDING(16, "RCSJC");
				VEHICLE::REQUEST_VEHICLE_RECORDING(17, "RCSJC");
				if (((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "RCSJC") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "RCSJC")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "RCSJC")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "RCSJC"))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 1616)
					{
						func_26(15, joaat("hexer"), 1737.572f, 3308.018f, 40.2237f, 143.6793f, joaat("g_m_y_lost_01"), 1, 15, 0, 0, -1, joaat("weapon_carbinerifle"));
						func_26(16, joaat("hexer"), 1731.974f, 3307.766f, 40.2237f, 272.7215f, joaat("g_m_y_lost_01"), 1, 16, 0, 0, -1, joaat("weapon_carbinerifle"));
						func_26(17, joaat("hexer"), 1728.391f, 3308.835f, 40.2237f, 272.7215f, joaat("g_m_y_lost_01"), 1, 17, 0, 0, -1, joaat("weapon_carbinerifle"));
						func_26(18, joaat("hexer"), 1724.539f, 3309.154f, 40.2237f, 272.7215f, joaat("g_m_y_lost_01"), 1, 18, 0, 0, -1, joaat("weapon_carbinerifle"));
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[15 /*19*/], 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[15 /*19*/]))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[15 /*19*/], 14, "RCSJC", 4, 0, 786469);
								AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[15 /*19*/], "TREVOR_2_PLANE_WING_BIKERS_GROUP", 0);
								if (!iLocal_5081)
								{
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[15 /*19*/], 2000f);
								}
								else
								{
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[15 /*19*/], fLocal_5852);
								}
								VEHICLE::SET_PLAYBACK_SPEED(Local_4414[15 /*19*/], 0.7f);
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[16 /*19*/], 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[16 /*19*/]))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[16 /*19*/], 15, "RCSJC", 4, 0, 786469);
								AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[16 /*19*/], "TREVOR_2_PLANE_WING_BIKERS_GROUP", 0);
								if (!iLocal_5081)
								{
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[16 /*19*/], 3000f);
								}
								else
								{
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[16 /*19*/], fLocal_5853);
								}
								VEHICLE::SET_PLAYBACK_SPEED(Local_4414[16 /*19*/], 0.7f);
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[17 /*19*/], 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[17 /*19*/]))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[17 /*19*/], 16, "RCSJC", 4, 0, 786475);
								AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[17 /*19*/], "TREVOR_2_PLANE_WING_BIKERS_GROUP", 0);
								if (!iLocal_5081)
								{
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[17 /*19*/], 1000f);
								}
								else
								{
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[17 /*19*/], fLocal_5854);
								}
								VEHICLE::SET_PLAYBACK_SPEED(Local_4414[17 /*19*/], 0.6f);
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[18 /*19*/], 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[18 /*19*/]))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[18 /*19*/], 17, "RCSJC", 4, 0, 786475);
								AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[18 /*19*/], "TREVOR_2_PLANE_WING_BIKERS_GROUP", 0);
								if (!iLocal_5081)
								{
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[18 /*19*/], 2000f);
								}
								else
								{
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[18 /*19*/], fLocal_5855);
								}
								VEHICLE::SET_PLAYBACK_SPEED(Local_4414[18 /*19*/], 0.7f);
							}
						}
						if (((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[18 /*19*/]) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[15 /*19*/])) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[15 /*19*/])) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[15 /*19*/]))
						{
							func_33("START_THE BIKERS", 1);
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_5813 == 1)
			{
				iLocal_5086 = 2;
			}
		}
		if (iLocal_5086 == 2)
		{
			if (iLocal_5081)
			{
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "RCSJC"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[15 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[15 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[15 /*19*/], 14, "RCSJC", 4, 0, 786469);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[15 /*19*/], fLocal_5852);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[15 /*19*/], 0.7f);
						}
					}
				}
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "RCSJC"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[16 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[16 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[16 /*19*/], 15, "RCSJC", 4, 0, 786469);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[16 /*19*/], fLocal_5853);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[16 /*19*/], 0.7f);
						}
					}
				}
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "RCSJC"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[17 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[17 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[17 /*19*/], 16, "RCSJC", 4, 0, 786475);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[17 /*19*/], fLocal_5854);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[17 /*19*/], 0.6f);
						}
					}
				}
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "RCSJC"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[18 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[18 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[18 /*19*/], 17, "RCSJC", 4, 0, 786475);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[18 /*19*/], fLocal_5855);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[18 /*19*/], 0.7f);
						}
					}
				}
			}
			RECORDING::_0x81CBAE94390F9F89();
			GlobalFunc_8380(0, 1, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_5082 = 0;
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
			iLocal_5768 = 0;
			if (iLocal_5815 == 0)
			{
				iLocal_5815 = 1;
			}
			iLocal_5086 = 0;
		}
		if (iLocal_5086 == 3)
		{
			CUTSCENE::STOP_CUTSCENE(0);
			iLocal_5081 = 1;
			iLocal_5086 = 1;
		}
	}
}

void func_528(int iParam0)//Position - 0x5E611
{
	if (!PED::IS_PED_INJURED(Local_491[iParam0 /*40*/]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_491[iParam0 /*40*/], 1);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Local_491[iParam0 /*40*/], 1, 0, 1, 0);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_491[iParam0 /*40*/], 1);
		ENTITY::SET_ENTITY_HEALTH(Local_491[iParam0 /*40*/], 135);
		PED::SET_PED_ACCURACY(Local_491[iParam0 /*40*/], 80);
		PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_491[iParam0 /*40*/]);
	}
}




int func_532(bool bParam0)//Position - 0x5E7B5
{
	if (!GlobalFunc_111())
	{
		if (bParam0)
		{
			return 1;
		}
		else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			return 1;
		}
	}
	return 0;
}

void func_533()//Position - 0x5E7E8
{
	if (((((((((((((((PED::IS_PED_INJURED(Local_491[12 /*40*/]) && PED::IS_PED_INJURED(Local_491[11 /*40*/])) && PED::IS_PED_INJURED(Local_491[13 /*40*/])) && PED::IS_PED_INJURED(Local_491[14 /*40*/])) && PED::IS_PED_INJURED(Local_491[16 /*40*/])) && PED::IS_PED_INJURED(Local_2692[11 /*40*/])) && PED::IS_PED_INJURED(Local_2692[13 /*40*/])) && PED::IS_PED_INJURED(Local_2692[14 /*40*/])) && PED::IS_PED_INJURED(Local_2692[25 /*40*/])) && PED::IS_PED_INJURED(Local_2692[26 /*40*/])) && PED::IS_PED_INJURED(Local_2692[27 /*40*/])) && PED::IS_PED_INJURED(Local_2692[28 /*40*/])) && PED::IS_PED_INJURED(Local_2692[6 /*40*/])) && PED::IS_PED_INJURED(Local_2692[7 /*40*/])) && PED::IS_PED_INJURED(Local_2692[8 /*40*/])) && PED::IS_PED_INJURED(Local_2692[9 /*40*/]))
	{
		GlobalFunc_553(514);
	}
}

void func_534(char* sParam0)//Position - 0x5E8F3
{
	int iVar0;
	
	if (iLocal_390 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_390 - 1))
		{
			if (!MISC::IS_STRING_NULL(sParam0))
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_391[iVar0], sParam0);
				iLocal_391[iVar0] = 0;
			}
			iVar0++;
		}
	}
	iLocal_390 = 0;
}

void func_535()//Position - 0x5E93B
{
	int iVar0;
	
	if (iLocal_368 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_368 - 1))
		{
			if (iLocal_369[iVar0] != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_369[iVar0]);
				iLocal_369[iVar0] = 0;
			}
			iVar0++;
		}
	}
	iLocal_368 = 0;
}

void func_536(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x5E982
{
	int iVar0;
	char cVar1[24];
	
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		STREAMING::REQUEST_MODEL(Local_491[iVar0 /*40*/].f_7);
		if (STREAMING::HAS_MODEL_LOADED(Local_491[iVar0 /*40*/].f_7))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_491[iVar0 /*40*/]))
			{
				Local_491[iVar0 /*40*/] = PED::CREATE_PED(26, Local_491[iVar0 /*40*/].f_7, Local_491[iVar0 /*40*/].f_2, Local_491[iVar0 /*40*/].f_5, 1, 1);
				if (bParam2)
				{
					Local_491[iVar0 /*40*/].f_1 = GlobalFunc_6797(Local_491[iVar0 /*40*/], 1, 145);
					HUD::SET_BLIP_SCALE(Local_491[iVar0 /*40*/].f_1, 0.5f);
				}
				PED::SET_PED_TARGET_LOSS_RESPONSE(Local_491[iVar0 /*40*/], 1);
				PED::SET_PED_DIES_WHEN_INJURED(Local_491[iVar0 /*40*/], 1);
				GlobalFunc_593(Local_491[iVar0 /*40*/], 1);
				TASK::REMOVE_COVER_POINT(Local_491[iVar0 /*40*/].f_13);
				ENTITY::SET_ENTITY_HEALTH(Local_491[iVar0 /*40*/], 135);
				PED::SET_PED_DIES_WHEN_INJURED(Local_491[iVar0 /*40*/], 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_491[iVar0 /*40*/], iLocal_490);
				WEAPON::GIVE_WEAPON_TO_PED(Local_491[iVar0 /*40*/], Local_491[iVar0 /*40*/].f_6, 999, 1, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_491[iVar0 /*40*/], Local_491[iVar0 /*40*/].f_6, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_491[iVar0 /*40*/], iParam6);
				PED::SET_PED_AS_ENEMY(Local_491[iVar0 /*40*/], 1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_491[iVar0 /*40*/], 1, 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_491[iVar0 /*40*/], 1);
				PED::SET_PED_COMBAT_RANGE(Local_491[iVar0 /*40*/], 1);
				PED::SET_PED_COMBAT_ABILITY(Local_491[iVar0 /*40*/], 1);
				PED::SET_PED_ACCURACY(Local_491[iVar0 /*40*/], 10);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[iVar0 /*40*/], 5, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[iVar0 /*40*/], 49, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_491[iVar0 /*40*/], 1);
				GlobalFunc_593(Local_491[iVar0 /*40*/], 1);
				if (iParam3 == 1)
				{
					STREAMING::REQUEST_COLLISION_AT_COORD(Local_491[iVar0 /*40*/].f_2);
				}
				if (bParam4)
				{
				}
				if (iParam5 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_491[iVar0 /*40*/]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_491[iVar0 /*40*/], 0);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_491[iVar0 /*40*/], 0);
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Local_491[iVar0 /*40*/], 0, 0, 1, 0);
					}
				}
				StringCopy(&cVar1, "Enemy ", 24);
				StringIntConCat(&cVar1, iVar0, 24);
				PED::SET_PED_NAME_DEBUG(Local_491[iVar0 /*40*/], &cVar1);
			}
		}
		iVar0++;
	}
}


void func_538()//Position - 0x5EBBD
{
	if (iLocal_5806 == 0)
	{
		if (!GlobalFunc_111())
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4414[1 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl6c", 7, 0, 0, 0))
				{
					iLocal_5806 = 1;
					iLocal_5927 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	else if (GlobalFunc_588(&iLocal_5927, MISC::GET_RANDOM_INT_IN_RANGE(12000, 15000)))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_4414[1 /*19*/]);
		iLocal_5806 = 0;
	}
}

void func_539(int iParam0)//Position - 0x5EC2C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (iVar0 == 14)
		{
			GlobalFunc_661((*iParam0)[iVar0 /*40*/], &((iParam0[iVar0 /*40*/])->f_23), -1, 0, 0, 0, 150f, 0);
		}
		else
		{
			GlobalFunc_661((*iParam0)[iVar0 /*40*/], &((iParam0[iVar0 /*40*/])->f_23), -1, 0, 0, 0, -1082130432, 0);
		}
		iVar0++;
	}
}

void func_540()//Position - 0x5EC8E
{
	if (iLocal_5836 > 2)
	{
		if (GlobalFunc_588(&iLocal_5940, 2500))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_RAYFIRE"))
			{
				AUDIO::STOP_AUDIO_SCENE("TREVOR_2_RAYFIRE");
			}
		}
	}
	if (iLocal_5836 > 1)
	{
		ENTITY::SET_ENTITY_PROOFS(uLocal_5739[1], 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(Local_491[14 /*40*/]))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_491[14 /*40*/], -1442466670) != 1)
		{
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_491[14 /*40*/], 200f, 0);
		}
	}
	if (!PED::IS_PED_INJURED(Local_491[16 /*40*/]))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_491[16 /*40*/], -1442466670) != 1)
		{
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_491[16 /*40*/], 200f, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[5 /*19*/]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[5 /*19*/], 0))
		{
			if (!func_36("APPLY FORCE"))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_4414[5 /*19*/], 3, (fLocal_5869 + 10f), fLocal_5870, (fLocal_5871 - 5f), 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
				func_33("APPLY FORCE", 1);
			}
		}
	}
	switch (iLocal_5836)
	{
		case 0:
			func_33("TR2_USEB", 1);
			if (!PED::IS_PED_INJURED(Local_491[14 /*40*/]))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[14 /*40*/], 1687.45f, 3262.98f, 40.87f, 0.75f, 1, 0);
			}
			if (!PED::IS_PED_INJURED(Local_491[16 /*40*/]))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[16 /*40*/], 1697.17f, 3265.93f, 41.03f, 0.75f, 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_5739[1]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_5739[1], PLAYER::PLAYER_PED_ID(), 1))
					{
						iLocal_5836++;
					}
				}
			}
			ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_5739[1], PLAYER::PLAYER_PED_ID(), 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[5 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_4414[1 /*19*/], 1714.847f, 3253.533f, 40.9562f, 22f, 22f, 22f, 0, 1, 0))
				{
					if (!func_36("TR_pl6d"))
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl6d", 8, 0, 0, 0))
							{
								func_33("TR_pl6d", 1);
								func_33("TR2_USEB", 1);
								iLocal_5836++;
							}
						}
					}
				}
			}
			else
			{
				iLocal_5836 = 2;
			}
			break;
		
		case 1:
			if (!func_36("SJC_BLOW"))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_5739[1]))
				{
					if (!GlobalFunc_5172(&Local_5875, 2))
					{
						GlobalFunc_159("SJC_BLOW", -1);
						func_33("SJC_BLOW", 1);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_5739[1], PLAYER::PLAYER_PED_ID(), 1))
				{
					AUDIO::START_AUDIO_SCENE("TREVOR_2_RAYFIRE");
					iLocal_5940 = MISC::GET_GAME_TIMER();
					ENTITY::SET_ENTITY_HEALTH(uLocal_5739[1], 105);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_5739[1], 0);
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(uLocal_5739[1], 1), 8, 1056964608, 1, 0, 1065353216);
					iLocal_5835 = MISC::GET_GAME_TIMER();
					if (GlobalFunc_74("SJC_BLOW"))
					{
						HUD::CLEAR_HELP(1);
					}
					GlobalFunc_4935();
					iLocal_5836++;
				}
			}
			if (func_36("SJC_BLOW"))
			{
				if ((PAD::IS_CONTROL_JUST_PRESSED(0, 47) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_5739[1], PLAYER::PLAYER_PED_ID(), 1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[5 /*19*/], 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
					{
						AUDIO::START_AUDIO_SCENE("TREVOR_2_RAYFIRE");
						iLocal_5940 = MISC::GET_GAME_TIMER();
						ENTITY::SET_ENTITY_HEALTH(uLocal_5739[1], 105);
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_5739[1], 0);
						ENTITY::SET_ENTITY_INVINCIBLE(uLocal_5739[1], 0);
						ENTITY::SET_ENTITY_PROOFS(uLocal_5739[1], 0, 0, 0, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_5739[1], 1);
						ENTITY::SET_ENTITY_DYNAMIC(uLocal_5739[1], 0);
						PHYSICS::SET_DISABLE_BREAKING(uLocal_5739[1], 0);
						RECORDING::_0x293220DA1B46CEBC(2f, 4.5f, 3);
						FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(uLocal_5739[1], 1), 8, 1056964608, 1, 0, 1065353216);
						iLocal_5835 = MISC::GET_GAME_TIMER();
						if (GlobalFunc_74("SJC_BLOW"))
						{
							HUD::CLEAR_HELP(1);
						}
						GlobalFunc_4935();
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[5 /*19*/], 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_4414[5 /*19*/], 1);
						}
						iLocal_5836++;
					}
				}
				else if (!func_36("TR2_USEB"))
				{
					if (!GlobalFunc_5172(&Local_5875, 1))
					{
						if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_USEB", 8, 0, 0, 0))
						{
							func_33("TR2_USEB", 1);
							iLocal_5835 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (GlobalFunc_588(&iLocal_5835, 8000))
				{
					func_33("TR2_USEB", 0);
				}
			}
			break;
		
		case 2:
			if (!func_36("TR_pl6e"))
			{
				if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl6e", 7, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
					func_33("TR_pl6e", 1);
				}
			}
			if (GlobalFunc_588(&iLocal_5835, 500))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[5 /*19*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_4414[5 /*19*/], 0);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_4414[5 /*19*/], 3, fLocal_5869, fLocal_5870, fLocal_5871, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_4414[5 /*19*/], 1), 6, 1f, 1, 0, 1.2f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_5739[1]))
					{
						FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(uLocal_5739[1], 0), 8, 1056964608, 1, 0, 1065353216);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[4 /*19*/], 0))
				{
					VEHICLE::DETACH_VEHICLE_FROM_TRAILER(Local_4414[4 /*19*/]);
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_4414[4 /*19*/], 1), 8, 1056964608, 1, 0, 1065353216);
				}
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "Trevor_2_chopper_explode", ENTITY::GET_ENTITY_COORDS(Local_4414[5 /*19*/], 0), "TREVOR_2_SOUNDS", 0, 0, 0);
				CAM::SHAKE_GAMEPLAY_CAM("LARGE_EXPLOSION_SHAKE", 1f);
				PAD::SET_PAD_SHAKE(0, 1000, 200);
				iLocal_5822 = 14;
				while (iLocal_5822 <= 18)
				{
					if (iLocal_5822 != 15)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_491[iLocal_5822 /*40*/]))
						{
							if (!PED::IS_PED_INJURED(Local_491[iLocal_5822 /*40*/]))
							{
								ENTITY::APPLY_FORCE_TO_ENTITY(Local_491[iLocal_5822 /*40*/], 3, 0f, 4f, 3f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								ENTITY::SET_ENTITY_HEALTH(Local_491[iLocal_5822 /*40*/], 0);
							}
						}
					}
					iLocal_5822++;
				}
				iLocal_5836++;
			}
			break;
	}
}

void func_541()//Position - 0x5F2C9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
		{
			fLocal_5859 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]);
		}
	}
	switch (iLocal_5834)
	{
		case 0:
			if (iLocal_5836 == 0)
			{
				if (!func_36("TR_bp02"))
				{
					if (!GlobalFunc_5172(&Local_5875, 1))
					{
						if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_bp02", 8, 0, 0, 0))
						{
							func_33("TR_bp02", 1);
							iLocal_5837 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (GlobalFunc_588(&iLocal_5837, 7000))
				{
					func_33("TR_bp02", 0);
				}
			}
			else if (iLocal_5836 > 2)
			{
				iLocal_5834++;
			}
			break;
		
		case 1:
			if (!func_36("TR2_RLSb1"))
			{
				if (fLocal_5859 > 6701.976f && fLocal_5859 < 9652.748f)
				{
					if ((!PED::IS_PED_INJURED(Local_491[10 /*40*/]) || !PED::IS_PED_INJURED(Local_491[11 /*40*/])) || !PED::IS_PED_INJURED(Local_2692[13 /*40*/]))
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_RLSb", 8, 0, 0, 0))
							{
								func_33("TR2_RLSb1", 1);
							}
						}
					}
				}
			}
			if (!func_36("TR2_RLSb2"))
			{
				if (fLocal_5859 > 13078.12f)
				{
					if ((!PED::IS_PED_INJURED(Local_491[18 /*40*/]) || !PED::IS_PED_INJURED(Local_491[16 /*40*/])) || !PED::IS_PED_INJURED(Local_2692[14 /*40*/]))
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_RLS", 8, 0, 0, 0))
							{
								func_33("TR2_RLSb2", 1);
							}
						}
					}
				}
			}
			if (!func_36("TR2_RLSb3"))
			{
				if (fLocal_5859 > 19323.64f)
				{
					if (((!PED::IS_PED_INJURED(Local_491[6 /*40*/]) || !PED::IS_PED_INJURED(Local_491[7 /*40*/])) || !PED::IS_PED_INJURED(Local_491[8 /*40*/])) || !PED::IS_PED_INJURED(Local_491[9 /*40*/]))
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_RLSc", 8, 0, 0, 0))
							{
								func_33("TR2_RLSb3", 1);
							}
						}
					}
				}
			}
			if (!func_36("TR2_RLSb4"))
			{
				if (fLocal_5859 > 21421.93f)
				{
					if ((!PED::IS_PED_INJURED(Local_2692[28 /*40*/]) || !PED::IS_PED_INJURED(Local_2692[27 /*40*/])) || !PED::IS_PED_INJURED(Local_2692[25 /*40*/]))
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_RLSb", 8, 0, 0, 0))
							{
								func_33("TR2_RLSb4", 1);
							}
						}
					}
				}
			}
			if (func_36("TR2_RLSb4"))
			{
				if (!func_36("TR2_RLSb5"))
				{
					if (fLocal_5859 > 21375.68f)
					{
						if (!PED::IS_PED_INJURED(Local_2692[6 /*40*/]) || !PED::IS_PED_INJURED(Local_2692[7 /*40*/]))
						{
							if (!GlobalFunc_5172(&Local_5875, 1))
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_RLS", 8, 0, 0, 0))
								{
									func_33("TR2_RLSb5", 1);
								}
							}
						}
					}
				}
			}
			if (!func_36("TR2_RLSb6"))
			{
				if (fLocal_5859 > 24887.06f)
				{
					if (!PED::IS_PED_INJURED(Local_2692[24 /*40*/]) || !PED::IS_PED_INJURED(Local_491[15 /*40*/]))
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							func_33("TR2_RLSb6", 1);
						}
					}
				}
			}
			if (!func_36("TR_bp02"))
			{
				if (!GlobalFunc_5172(&Local_5875, 1))
				{
					if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_bp02", 7, 0, 0, 0))
					{
						func_33("TR_bp02", 1);
						iLocal_5837 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (GlobalFunc_588(&iLocal_5837, 9000))
			{
				func_33("TR_bp02", 0);
			}
			break;
	}
}

void func_542()//Position - 0x5F6A4
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
	{
		iVar0 = 0;
		while (iVar0 <= 54)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_491[iVar0 /*40*/]))
			{
				if (!PED::IS_PED_INJURED(Local_491[iVar0 /*40*/]))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_491[iVar0 /*40*/], Local_4414[1 /*19*/]))
					{
						if (!PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_491[iVar0 /*40*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_491[iVar0 /*40*/]))
							{
								if (!PED::IS_PED_INJURED(Local_491[iVar0 /*40*/]))
								{
									PED::SET_PED_CAN_RAGDOLL(Local_491[iVar0 /*40*/], 1);
									if (!PED::IS_PED_INJURED(Local_491[iVar0 /*40*/]))
									{
										ENTITY::APPLY_FORCE_TO_ENTITY(Local_491[iVar0 /*40*/], 3, 0f, 4f, 0.5f, 0f, 0f, 0f, PED::GET_PED_BONE_INDEX(Local_491[iVar0 /*40*/], 11816), 1, 1, 1, 0, 1);
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
}

void func_543()//Position - 0x5F76E
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0) && !PED::IS_PED_INJURED(Local_5546))
	{
		if (iLocal_5777[3])
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[25 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_4414[25 /*19*/], 1665.41f, 3232.863f, 39.6297f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (iLocal_5798[2] == 0)
					{
						if (!PED::IS_PED_INJURED(Local_2692[25 /*40*/]))
						{
							PED::SET_PED_COMBAT_MOVEMENT(Local_2692[25 /*40*/], 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[25 /*40*/], 1, 0);
							TASK::CLEAR_PED_TASKS(Local_2692[25 /*40*/]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Local_4414[1 /*19*/], Local_5546, 2f, 1, 20f, 1082130432, 1, 0, -957453492);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
							TASK::TASK_PERFORM_SEQUENCE(Local_2692[25 /*40*/], uLocal_5080);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
						}
						if (!PED::IS_PED_INJURED(Local_2692[26 /*40*/]))
						{
							PED::SET_PED_COMBAT_MOVEMENT(Local_2692[26 /*40*/], 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[26 /*40*/], 1, 0);
							TASK::CLEAR_PED_TASKS(Local_2692[26 /*40*/]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Local_4414[1 /*19*/], Local_5546, 2f, 1, 20f, 1082130432, 1, 0, -957453492);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
							TASK::TASK_PERFORM_SEQUENCE(Local_2692[26 /*40*/], uLocal_5080);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
						}
						iLocal_5798[2] = 1;
					}
				}
			}
		}
		if (iLocal_5798[3] == 0)
		{
			STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_10");
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[25 /*19*/], 0))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_10"))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_4414[25 /*19*/], 1665.41f, 3232.863f, 39.6297f, 5f, 5f, 5f, 0, 1, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[25 /*19*/], 0))
						{
							iLocal_5840 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5840, Local_4414[25 /*19*/], -1);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_4414[25 /*19*/], 2, 0, 0);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_4414[25 /*19*/], 3, 0, 0);
							if (!PED::IS_PED_INJURED(Local_2692[27 /*40*/]))
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_2692[27 /*40*/], 2);
								WEAPON::GIVE_WEAPON_TO_PED(Local_2692[27 /*40*/], joaat("weapon_pistol"), 100, 1, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[27 /*40*/], joaat("weapon_pistol"), 1);
								WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Local_2692[27 /*40*/], 1, 1, 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[27 /*40*/], 1);
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2692[27 /*40*/]);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_2692[27 /*40*/], iLocal_5840, "misstrevor2ig_10", "jump_out_of_van_ds", 1000f, -1000f, 0, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_2692[27 /*40*/], 0, 0);
							}
							if (!PED::IS_PED_INJURED(Local_2692[28 /*40*/]))
							{
								TASK::CLEAR_PED_TASKS(Local_2692[28 /*40*/]);
								PED::SET_PED_COMBAT_MOVEMENT(Local_2692[28 /*40*/], 2);
								WEAPON::GIVE_WEAPON_TO_PED(Local_2692[28 /*40*/], joaat("weapon_assaultrifle"), 100, 1, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[28 /*40*/], joaat("weapon_assaultrifle"), 1);
								WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Local_2692[28 /*40*/], 1, 1, 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[28 /*40*/], 1);
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2692[28 /*40*/]);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_2692[28 /*40*/], iLocal_5840, "misstrevor2ig_10", "jump_out_of_van_ps", 1000f, -1000f, 0, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_2692[28 /*40*/], 0, 0);
							}
							iLocal_5798[3] = 1;
						}
					}
				}
			}
		}
		if (iLocal_5798[3] == 1)
		{
			if (iLocal_5798[4] == 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5840))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5840) == 1f)
					{
						if (!PED::IS_PED_INJURED(Local_2692[27 /*40*/]))
						{
							WEAPON::GET_CURRENT_PED_WEAPON(Local_2692[27 /*40*/], &iVar0, 1);
							PED::SET_PED_COMBAT_MOVEMENT(Local_2692[27 /*40*/], 2);
							if (iVar0 != joaat("weapon_pistol"))
							{
								WEAPON::GIVE_WEAPON_TO_PED(Local_2692[27 /*40*/], joaat("weapon_pistol"), 100, 1, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[27 /*40*/], joaat("weapon_pistol"), 1);
							}
							TASK::TASK_COMBAT_PED(Local_2692[27 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_2692[27 /*40*/], 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_2692[28 /*40*/]))
						{
							WEAPON::GET_CURRENT_PED_WEAPON(Local_2692[28 /*40*/], &iVar1, 1);
							PED::SET_PED_COMBAT_MOVEMENT(Local_2692[28 /*40*/], 2);
							if (iVar1 != joaat("weapon_pistol"))
							{
								WEAPON::GIVE_WEAPON_TO_PED(Local_2692[28 /*40*/], joaat("weapon_pistol"), 100, 1, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[28 /*40*/], joaat("weapon_pistol"), 1);
							}
							TASK::TASK_COMBAT_PED(Local_2692[28 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_2692[28 /*40*/], 0, 0);
						}
						iLocal_5798[4] = 1;
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[24 /*19*/], 0))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[24 /*19*/]))
			{
				if (iLocal_5798[1] == 0)
				{
					if (!PED::IS_PED_INJURED(Local_2692[24 /*40*/]))
					{
						PED::SET_PED_COMBAT_MOVEMENT(Local_2692[24 /*40*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[24 /*40*/], 1, 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Local_4414[1 /*19*/], Local_5546, 2f, 1, 0.5f, 1082130432, 1, 0, -957453492);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
						TASK::TASK_PERFORM_SEQUENCE(Local_2692[24 /*40*/], uLocal_5080);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
					}
					iLocal_5798[1] = 1;
				}
			}
			else if (PED::IS_PED_INJURED(Local_2692[24 /*40*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[24 /*19*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[24 /*19*/]);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_4414[24 /*19*/], 1, 2f, 2f, 0f, 0f, 0f, 0f, 0, 1, 0, 1, 0, 1);
				}
			}
			else
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_2692[24 /*40*/], Local_4414[24 /*19*/], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[24 /*19*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[24 /*19*/]);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_4414[24 /*19*/], 1, 2f, 2f, 0f, 0f, 0f, 0f, 0, 1, 0, 1, 0, 1);
					}
				}
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[24 /*19*/], -1))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[24 /*19*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[24 /*19*/]);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_4414[24 /*19*/], 1, 2f, 2f, 0f, 0f, 0f, 0f, 0, 1, 0, 1, 0, 1);
					}
				}
			}
		}
	}
}

void func_544()//Position - 0x5FD81
{
	int iVar0;
	
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uLocal_5097, -1);
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_5097[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_5097[iVar0]))
			{
				if (PED::IS_PED_MODEL(uLocal_5097[iVar0], joaat("g_m_y_lost_01")))
				{
					if (GlobalFunc_588(&iLocal_5841, 9000))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_5097[iVar0], 1), 1) < 25f)
						{
							if (GlobalFunc_745())
							{
								GlobalFunc_5653(uLocal_5097[iVar0], "TR2_DMAA", "LOST5", 18);
							}
							else if (GlobalFunc_745())
							{
								GlobalFunc_5653(uLocal_5097[iVar0], "TR2_DNAA", "LOST6", 18);
							}
							else if (GlobalFunc_745())
							{
								GlobalFunc_5653(uLocal_5097[iVar0], "TR2_EFAA", "LOST7", 18);
							}
							else
							{
								GlobalFunc_5653(uLocal_5097[iVar0], "TR2_EEAA", "LOST7", 18);
							}
							iLocal_5841 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		iVar0++;
	}
}



void func_547()//Position - 0x5FEC4
{
	int iVar0;
	
	if (iLocal_5819 > 13 && iLocal_5874 == 5)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_5825) > iLocal_5824)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar0 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[5 /*19*/], 0))
				{
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_4414[5 /*19*/], 1), 14, 1f, 1, 0, 1.5f);
				}
				else
				{
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_4414[5 /*19*/], 0), 8, 1f, 1, 0, 1.5f);
				}
			}
			else if (iVar0 == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[4 /*19*/], 0))
				{
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_4414[4 /*19*/], 1), 8, 1f, 1, 0, 1.5f);
				}
				else
				{
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_4414[4 /*19*/], 0), 8, 1f, 1, 0, 1.5f);
				}
			}
			else if (iVar0 == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
				{
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(uLocal_5739[1], 1), 8, 1f, 1, 0, 1.5f);
				}
			}
			iLocal_5825 = MISC::GET_GAME_TIMER();
			iLocal_5824 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 9000);
		}
	}
}

void func_548()//Position - 0x5FFCD
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
	{
		if ((((PED::IS_PED_INJURED(Local_2692[6 /*40*/]) && PED::IS_PED_INJURED(Local_2692[7 /*40*/])) || (PED::IS_PED_INJURED(Local_2692[7 /*40*/]) && PED::IS_PED_INJURED(Local_2692[8 /*40*/]))) || (PED::IS_PED_INJURED(Local_2692[8 /*40*/]) && PED::IS_PED_INJURED(Local_2692[9 /*40*/]))) || (PED::IS_PED_INJURED(Local_2692[6 /*40*/]) && PED::IS_PED_INJURED(Local_2692[9 /*40*/])))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]) > 27007.26f)
					{
						if (!PED::IS_PED_INJURED(Local_2692[6 /*40*/]))
						{
							if (Local_2692[6 /*40*/].f_35 == 0)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[6 /*40*/], 1618.61f, 3239.81f, 40.5f, 20f, 1, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_2692[6 /*40*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[6 /*40*/], 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[6 /*40*/], 51, 1);
								Local_2692[6 /*40*/].f_35 = 1;
							}
						}
						if (!PED::IS_PED_INJURED(Local_2692[7 /*40*/]))
						{
							if (Local_2692[7 /*40*/].f_35 == 0)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[7 /*40*/], 1617.02f, 3237.31f, 40.48f, 20f, 1, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_2692[7 /*40*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[7 /*40*/], 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[7 /*40*/], 51, 1);
								Local_2692[7 /*40*/].f_35 = 1;
							}
						}
						if (!PED::IS_PED_INJURED(Local_2692[8 /*40*/]))
						{
							if (Local_2692[8 /*40*/].f_35 == 0)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[8 /*40*/], 1625.8f, 3242.82f, 40.52f, 20f, 1, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_2692[8 /*40*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[8 /*40*/], 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[8 /*40*/], 51, 1);
								Local_2692[8 /*40*/].f_35 = 1;
							}
						}
						if (!PED::IS_PED_INJURED(Local_2692[9 /*40*/]))
						{
							if (Local_2692[9 /*40*/].f_35 == 0)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[9 /*40*/], 1624.33f, 3240.26f, 40.49f, 20f, 1, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_2692[9 /*40*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[9 /*40*/], 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[9 /*40*/], 51, 1);
								Local_2692[9 /*40*/].f_35 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_549()//Position - 0x6023D
{
	if (iLocal_5769[0])
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_2_BIKER_GRIND", 0);
		STREAMING::REQUEST_ANIM_DICT("misstrevor2hangar_death");
		STREAMING::REQUEST_PTFX_ASSET();
		if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_2_BIKER_GRIND", 0) && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2hangar_death")) && STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_491[12 /*40*/]))
				{
					if (!PED::IS_PED_INJURED(Local_491[12 /*40*/]))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5840))
						{
							iLocal_5840 = PED::CREATE_SYNCHRONIZED_SCENE(1728.345f, 3288.885f, 41.175f, 0f, 0f, -75.52f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_491[12 /*40*/], iLocal_5840, "misstrevor2hangar_death", "hangar_death", 1000f, -4f, 1, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_5840, 0);
							WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Local_491[12 /*40*/], 1, 1, 1, 0);
							PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_5840, fLocal_5866);
							ENTITY::SET_ENTITY_HEALTH(Local_491[12 /*40*/], 120);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_491[12 /*40*/], 0);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_491[12 /*40*/], 0, 0);
							iLocal_5949 = 0;
						}
						else if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5840))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5840) > 0.965f || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_491[12 /*40*/], Local_4414[1 /*19*/]))
								{
									if (iLocal_5949 == 0)
									{
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_rotor_blade_blood", Local_491[12 /*40*/], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 4f, 0, 0, 0);
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BIKER_PROP_GRIND", Local_491[12 /*40*/], "TREVOR_2_SOUNDS", 0, 0);
										PED::EXPLODE_PED_HEAD(Local_491[12 /*40*/], joaat("weapon_sniperrifle"));
										iLocal_5949 = 1;
									}
								}
							}
						}
						else
						{
							STREAMING::REQUEST_PTFX_ASSET();
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(Local_491[12 /*40*/]))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_491[12 /*40*/], Local_4414[1 /*19*/]))
						{
							if (iLocal_5949 == 0)
							{
								GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_rotor_blade_blood", Local_491[12 /*40*/], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 4f, 0, 0, 0);
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BIKER_PROP_GRIND", Local_491[12 /*40*/], "TREVOR_2_SOUNDS", 0, 0);
								PED::EXPLODE_PED_HEAD(Local_491[12 /*40*/], joaat("weapon_sniperrifle"));
								iLocal_5949 = 1;
							}
						}
					}
				}
				else
				{
					func_536(12, 12, 0, 0, 0, 1, 1);
				}
			}
		}
	}
	if (!func_36("APPLY FORCE TO ROTOR PED"))
	{
		if (!PED::IS_PED_INJURED(Local_491[12 /*40*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_491[12 /*40*/], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_491[12 /*40*/], Local_4414[1 /*19*/]))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_491[12 /*40*/], 1, 0f, 3f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
					ENTITY::SET_ENTITY_HEALTH(Local_491[12 /*40*/], 0);
					func_33("APPLY FORCE TO ROTOR PED", 1);
				}
			}
		}
	}
	if (!func_36("HEXER BEHIND TRIGGER"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[7 /*19*/], 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(Local_4414[1 /*19*/], 1680.045f, 3244.736f, 39.4909f, 25f, 25f, 25f, 0, 1, 0))
			{
				if (!CAM::IS_SPHERE_VISIBLE(1742.47f, 3270.15f, 40.64f, 1f))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[7 /*19*/], -1))
					{
						Local_2692[11 /*40*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4414[7 /*19*/], 26, joaat("g_m_y_lost_01"), -1, 1, 1);
						GlobalFunc_722(Local_2692[11 /*40*/], 507);
					}
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[7 /*19*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[7 /*19*/], 0))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[7 /*19*/], "TREVOR_2_PLANE_WING_BIKERS_GROUP", 0);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[7 /*19*/], 9, "RCSJC", 1);
						VEHICLE::SET_PLAYBACK_SPEED(Local_4414[7 /*19*/], 0.7f);
					}
					if (!PED::IS_PED_INJURED(Local_2692[11 /*40*/]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[11 /*40*/], iLocal_490);
						WEAPON::GIVE_WEAPON_TO_PED(Local_2692[11 /*40*/], joaat("weapon_sawnoffshotgun"), 999, 1, 1);
						WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[11 /*40*/], joaat("weapon_sawnoffshotgun"), 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[11 /*40*/], 1);
						ENTITY::SET_ENTITY_HEALTH(Local_2692[11 /*40*/], 110);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[11 /*40*/], 0))
						{
							if (!PED::IS_PED_INJURED(Local_5546))
							{
								TASK::TASK_DRIVE_BY(Local_2692[11 /*40*/], Local_5546, 0, 0f, 0f, 0f, 100f, 20, 0, -753768974);
								PED::SET_PED_ACCURACY(Local_2692[11 /*40*/], 1);
							}
						}
					}
					func_33("HEXER BEHIND TRIGGER", 1);
				}
			}
		}
	}
	else if (PED::IS_PED_INJURED(Local_2692[11 /*40*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[7 /*19*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[7 /*19*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[7 /*19*/]);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_4414[7 /*19*/], 3, 2f, 2f, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
		}
	}
	if (!func_36("TRIGGER BIKER BY BOX"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[14 /*19*/], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[14 /*19*/]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_2692[14 /*40*/]))
						{
							if (!PED::IS_PED_INJURED(Local_2692[14 /*40*/]))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[14 /*40*/], 0))
								{
									VEHICLE::REQUEST_VEHICLE_RECORDING(38, "RCSJC");
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(38, "RCSJC"))
									{
										GlobalFunc_722(Local_2692[14 /*40*/], 507);
										PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_2692[14 /*40*/], 0);
										PED::SET_PED_ACCURACY(Local_2692[14 /*40*/], 5);
										ENTITY::SET_ENTITY_HEALTH(Local_2692[14 /*40*/], 110);
										WEAPON::GIVE_WEAPON_TO_PED(Local_2692[14 /*40*/], joaat("weapon_pistol"), 999, 1, 1);
										WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[14 /*40*/], joaat("weapon_pistol"), 1);
										TASK::TASK_DRIVE_BY(Local_2692[14 /*40*/], Local_5546, 0, 0f, 0f, 0f, 400f, 80, 1, -753768974);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[14 /*40*/], iLocal_490);
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[14 /*19*/], 38, "RCSJC", 1);
										VEHICLE::SET_PLAYBACK_SPEED(Local_4414[14 /*19*/], 1f);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[14 /*19*/], 0))
										{
											AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[14 /*19*/], "TREVOR_2_PLANE_WING_BIKERS_GROUP", 0);
										}
										func_33("TRIGGER BIKER BY BOX", 1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (!func_36("FROM BEHIND BIKER"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(36, "RCSJC");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(36, "RCSJC"))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]) > 16153.05f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[13 /*19*/], 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[13 /*19*/]))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[13 /*19*/], 36, "RCSJC", 8, 0, 786469);
							}
							else
							{
								GlobalFunc_722(Local_2692[13 /*40*/], 507);
								ENTITY::SET_ENTITY_PROOFS(Local_4414[13 /*19*/], 0, 0, 1, 1, 1, 0, 0, 0);
								ENTITY::SET_ENTITY_HEALTH(Local_2692[13 /*40*/], 110);
								VEHICLE::SET_PLAYBACK_SPEED(Local_4414[13 /*19*/], 1f);
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[13 /*40*/], 0))
								{
									if (!PED::IS_PED_INJURED(Local_2692[13 /*40*/]))
									{
										TASK::TASK_DRIVE_BY(Local_2692[13 /*40*/], Local_5546, 0, 0f, 0f, 0f, 400f, 80, 1, -753768974);
									}
								}
								func_33("FROM BEHIND BIKER", 1);
							}
						}
					}
				}
			}
		}
	}
	if (!func_36("RUNWAY BIKER"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]) > 4283.405f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[24 /*19*/], 0))
					{
						if (!PED::IS_PED_INJURED(Local_2692[24 /*40*/]))
						{
							if (!PED::IS_PED_INJURED(Local_5546))
							{
								GlobalFunc_722(Local_2692[24 /*40*/], 507);
								ENTITY::SET_ENTITY_HEALTH(Local_2692[24 /*40*/], 110);
								PED::SET_PED_ACCURACY(Local_2692[24 /*40*/], 5);
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[24 /*40*/], 0))
								{
									TASK::TASK_DRIVE_BY(Local_2692[24 /*40*/], Local_5546, 0, 0f, 0f, 0f, 400f, 80, 1, -753768974);
								}
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[24 /*40*/], iLocal_490);
								WEAPON::GIVE_WEAPON_TO_PED(Local_2692[24 /*40*/], joaat("weapon_pistol"), 999, 1, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[24 /*40*/], joaat("weapon_pistol"), 1);
							}
						}
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[24 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[24 /*19*/], 34, "RCSJC", 1);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[24 /*19*/], 0))
							{
								AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[24 /*19*/], "TREVOR_2_PLANE_WING_BIKERS_GROUP", 0);
							}
						}
						else
						{
							if (!PED::IS_PED_INJURED(Local_2692[24 /*40*/]))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[24 /*40*/], 0))
								{
									TASK::TASK_DRIVE_BY(Local_2692[24 /*40*/], Local_5546, 0, 0f, 0f, 0f, 400f, 30, 1, -753768974);
								}
							}
							ENTITY::SET_ENTITY_PROOFS(Local_4414[24 /*19*/], 0, 0, 1, 1, 1, 0, 0, 0);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[24 /*19*/], 1f);
							func_33("RUNWAY BIKER", 1);
						}
					}
				}
			}
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[24 /*19*/], 0))
	{
		if (!PED::IS_PED_INJURED(Local_2692[24 /*40*/]))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_2692[24 /*40*/], Local_4414[24 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_2692[24 /*40*/], 1612.9f, 3231.55f, 39.91f, 2f, 2f, 2f, 0, 1, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_4414[24 /*19*/]) < 1f)
					{
						if (!func_36("TRIGGER CERTAIN DEATH"))
						{
							if (!PED::IS_PED_INJURED(Local_2692[24 /*40*/]))
							{
								PED::SET_PED_ACCURACY(Local_2692[24 /*40*/], 100);
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[24 /*40*/], 0))
								{
									TASK::TASK_DRIVE_BY(Local_2692[24 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 400f, 100, 1, -753768974);
								}
								func_33("TRIGGER CERTAIN DEATH", 1);
							}
						}
					}
				}
			}
		}
	}
	if (!func_36("TRIGGER LEFT HAND SIDE VAN FIRST"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]) > 8412.054f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[25 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[25 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[25 /*19*/], 33, "RCSJC", 1);
						}
						else
						{
							if (!PED::IS_PED_INJURED(Local_2692[25 /*40*/]))
							{
								GlobalFunc_722(Local_2692[25 /*40*/], 507);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[25 /*40*/], iLocal_490);
								WEAPON::GIVE_WEAPON_TO_PED(Local_2692[25 /*40*/], joaat("weapon_carbinerifle"), 999, 1, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[25 /*40*/], joaat("weapon_carbinerifle"), 1);
								PED::SET_PED_ACCURACY(Local_2692[25 /*40*/], 1);
							}
							if (!PED::IS_PED_INJURED(Local_2692[26 /*40*/]))
							{
								if (!PED::IS_PED_INJURED(Local_5546))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[26 /*40*/], 0))
									{
										TASK::TASK_DRIVE_BY(Local_2692[26 /*40*/], Local_5546, 0, 0f, 0f, 0f, 100f, 80, 1, -753768974);
									}
									GlobalFunc_722(Local_2692[26 /*40*/], 507);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[26 /*40*/], iLocal_490);
									WEAPON::GIVE_WEAPON_TO_PED(Local_2692[26 /*40*/], joaat("weapon_carbinerifle"), 999, 1, 1);
									WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[26 /*40*/], joaat("weapon_carbinerifle"), 1);
									PED::SET_PED_ACCURACY(Local_2692[26 /*40*/], 1);
								}
							}
							if (!PED::IS_PED_INJURED(Local_2692[27 /*40*/]))
							{
								if (!PED::IS_PED_INJURED(Local_5546))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[27 /*40*/], 0))
									{
										TASK::TASK_DRIVE_BY(Local_2692[27 /*40*/], Local_5546, 0, 0f, 0f, 0f, 100f, 80, 1, -753768974);
									}
									GlobalFunc_722(Local_2692[27 /*40*/], 507);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[27 /*40*/], iLocal_490);
									WEAPON::GIVE_WEAPON_TO_PED(Local_2692[27 /*40*/], joaat("weapon_carbinerifle"), 999, 1, 1);
									WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[27 /*40*/], joaat("weapon_carbinerifle"), 1);
									PED::SET_PED_ACCURACY(Local_2692[27 /*40*/], 1);
								}
							}
							if (!PED::IS_PED_INJURED(Local_2692[28 /*40*/]))
							{
								if (!PED::IS_PED_INJURED(Local_5546))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[28 /*40*/], 0))
									{
										TASK::TASK_DRIVE_BY(Local_2692[28 /*40*/], Local_5546, 0, 0f, 0f, 0f, 100f, 80, 1, -753768974);
									}
									GlobalFunc_722(Local_2692[28 /*40*/], 507);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[28 /*40*/], iLocal_490);
									WEAPON::GIVE_WEAPON_TO_PED(Local_2692[28 /*40*/], joaat("weapon_carbinerifle"), 999, 1, 1);
									WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[28 /*40*/], joaat("weapon_carbinerifle"), 1);
									PED::SET_PED_ACCURACY(Local_2692[28 /*40*/], 1);
								}
							}
							ENTITY::SET_ENTITY_PROOFS(Local_4414[25 /*19*/], 0, 0, 1, 1, 1, 0, 0, 0);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[25 /*19*/], 1f);
							func_33("TRIGGER LEFT HAND SIDE VAN FIRST", 1);
						}
					}
				}
			}
		}
	}
	if (!func_36("TRIGGER RIGHT HAND SIDE VAN FIRST"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[1 /*19*/]) > 4818.6f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[8 /*19*/], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[8 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[8 /*19*/], 32, "RCSJC", 1);
						}
						else
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[8 /*19*/], -1))
							{
								Local_2692[6 /*40*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4414[8 /*19*/], 26, joaat("g_m_y_lost_01"), -1, 1, 1);
								GlobalFunc_722(Local_2692[6 /*40*/], 507);
								StringCopy(&cLocal_5943, "enemey 6", 24);
								PED::SET_PED_NAME_DEBUG(Local_2692[6 /*40*/], &cLocal_5943);
							}
							if (!PED::IS_PED_INJURED(Local_5546))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_2692[6 /*40*/], 135);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[6 /*40*/], iLocal_490);
								WEAPON::GIVE_WEAPON_TO_PED(Local_2692[6 /*40*/], joaat("weapon_carbinerifle"), 999, 1, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[6 /*40*/], joaat("weapon_carbinerifle"), 1);
							}
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[8 /*19*/], 0))
							{
								Local_2692[7 /*40*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4414[8 /*19*/], 26, joaat("g_m_y_lost_01"), 0, 1, 1);
								GlobalFunc_722(Local_2692[7 /*40*/], 507);
								StringCopy(&cLocal_5943, "enemey 7", 24);
								PED::SET_PED_NAME_DEBUG(Local_2692[7 /*40*/], &cLocal_5943);
							}
							if (!PED::IS_PED_INJURED(Local_2692[7 /*40*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_2692[7 /*40*/], 135);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[7 /*40*/], iLocal_490);
								WEAPON::GIVE_WEAPON_TO_PED(Local_2692[7 /*40*/], joaat("weapon_carbinerifle"), 999, 1, 1);
								PED::SET_PED_ACCURACY(Local_2692[7 /*40*/], 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[7 /*40*/], joaat("weapon_carbinerifle"), 1);
							}
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[8 /*19*/], 1))
							{
								Local_2692[8 /*40*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4414[8 /*19*/], 26, joaat("g_m_y_lost_01"), 1, 1, 1);
								GlobalFunc_722(Local_2692[8 /*40*/], 507);
								StringCopy(&cLocal_5943, "enemey 8", 24);
								PED::SET_PED_NAME_DEBUG(Local_2692[8 /*40*/], &cLocal_5943);
							}
							if (!PED::IS_PED_INJURED(Local_2692[8 /*40*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_2692[8 /*40*/], 135);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[8 /*40*/], iLocal_490);
								WEAPON::GIVE_WEAPON_TO_PED(Local_2692[8 /*40*/], joaat("weapon_carbinerifle"), 999, 1, 1);
								PED::SET_PED_ACCURACY(Local_2692[8 /*40*/], 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[8 /*40*/], joaat("weapon_carbinerifle"), 1);
							}
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[8 /*19*/], 2))
							{
								Local_2692[9 /*40*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_4414[8 /*19*/], 26, joaat("g_m_y_lost_01"), 2, 1, 1);
								GlobalFunc_722(Local_2692[9 /*40*/], 507);
								StringCopy(&cLocal_5943, "enemey 9", 24);
								PED::SET_PED_NAME_DEBUG(Local_2692[9 /*40*/], &cLocal_5943);
							}
							if (!PED::IS_PED_INJURED(Local_2692[9 /*40*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_2692[9 /*40*/], 135);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2692[9 /*40*/], iLocal_490);
								WEAPON::GIVE_WEAPON_TO_PED(Local_2692[9 /*40*/], joaat("weapon_carbinerifle"), 999, 1, 1);
								PED::SET_PED_ACCURACY(Local_2692[9 /*40*/], 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_2692[9 /*40*/], joaat("weapon_carbinerifle"), 1);
							}
							ENTITY::SET_ENTITY_PROOFS(Local_4414[8 /*19*/], 0, 0, 1, 1, 1, 0, 0, 0);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[8 /*19*/], 1f);
							func_33("TRIGGER RIGHT HAND SIDE VAN FIRST", 1);
						}
					}
				}
			}
		}
	}
	if (iLocal_5874 == 6)
	{
		if (!func_36("HIT GUY BY BOX TRIGGER"))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_4414[1 /*19*/], 1731.26f, 3265.86f, 41.78f, 25f, 25f, 25f, 0, 1, 0))
				{
					func_33("HIT GUY BY BOX TRIGGER", 1);
				}
			}
		}
		if (!iLocal_5769[1])
		{
			if (!PED::IS_PED_INJURED(Local_491[13 /*40*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					if (func_36("HIT GUY BY BOX TRIGGER"))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_491[13 /*40*/]))
						{
							PED::SET_PED_COMBAT_MOVEMENT(Local_491[13 /*40*/], 2);
							PED::SET_PED_TARGET_LOSS_RESPONSE(Local_491[13 /*40*/], 1);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 1718.51f, 3252.45f, 40.14f, PLAYER::PLAYER_PED_ID(), 3f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
							TASK::TASK_PERFORM_SEQUENCE(Local_491[13 /*40*/], uLocal_5080);
							GlobalFunc_722(Local_491[13 /*40*/], 507);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[13 /*40*/], 1718.51f, 3252.45f, 40.14f, 0.75f, 1, 0);
							Local_491[13 /*40*/].f_12 = 1;
							iLocal_5769[1] = 1;
						}
					}
				}
			}
		}
		else if (Local_491[13 /*40*/].f_15 != 99)
		{
			if (!PED::IS_PED_INJURED(Local_491[13 /*40*/]))
			{
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_491[13 /*40*/], 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_491[13 /*40*/], 1);
					TASK::TASK_COMBAT_PED(Local_491[13 /*40*/], Local_5546, 0, 16);
					Local_491[13 /*40*/].f_15 = 99;
				}
			}
		}
		if (!func_36("HIT TANKER GUYS TRIGGER"))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_4414[1 /*19*/], 1721.33f, 3256.41f, 41.87f, 15f, 15f, 15f, 0, 1, 0))
				{
					func_33("HIT TANKER GUYS TRIGGER", 1);
				}
			}
		}
		if (!func_36("TRIGGER GUYS BY TANKER"))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_491[14 /*40*/]) && ENTITY::DOES_ENTITY_EXIST(Local_491[16 /*40*/]))
				{
					if (func_36("HIT TANKER GUYS TRIGGER"))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_491[14 /*40*/]))
						{
							if (!PED::IS_PED_INJURED(Local_491[14 /*40*/]))
							{
								GlobalFunc_722(Local_491[14 /*40*/], 507);
								PED::SET_PED_COMBAT_MOVEMENT(Local_491[14 /*40*/], 2);
								PED::SET_PED_TARGET_LOSS_RESPONSE(Local_491[14 /*40*/], 1);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_4414[1 /*19*/], 1200, 0);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 1687.45f, 3262.98f, 40.87f, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
								TASK::TASK_PERFORM_SEQUENCE(Local_491[14 /*40*/], uLocal_5080);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[14 /*40*/], 1687.45f, 3262.98f, 40.87f, 0.75f, 1, 0);
								Local_491[14 /*40*/].f_12 = 1;
							}
							if (!PED::IS_PED_INJURED(Local_491[16 /*40*/]))
							{
								GlobalFunc_722(Local_491[16 /*40*/], 507);
								PED::SET_PED_COMBAT_MOVEMENT(Local_491[16 /*40*/], 2);
								PED::SET_PED_TARGET_LOSS_RESPONSE(Local_491[16 /*40*/], 1);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 1697.17f, 3265.93f, 41.03f, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
								TASK::TASK_PERFORM_SEQUENCE(Local_491[16 /*40*/], uLocal_5080);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[16 /*40*/], 1697.17f, 3265.93f, 41.03f, 0.75f, 1, 0);
								Local_491[16 /*40*/].f_12 = 1;
							}
							func_33("TRIGGER GUYS BY TANKER", 1);
						}
					}
				}
			}
		}
	}
	if (func_36("FROM BEHIND BIKER"))
	{
		func_551(Local_4414[13 /*19*/], 0, 0, 0);
	}
	if (func_36("TRIGGER BIKER BY BOX"))
	{
		func_551(Local_4414[14 /*19*/], 0, 0, 0);
	}
	if (func_36("RUNWAY BIKER"))
	{
		func_551(Local_4414[24 /*19*/], 0, 0, 0);
	}
	if (func_36("TRIGGER RIGHT HAND SIDE VAN FIRST"))
	{
		func_550();
	}
	if (func_36("TRIGGER LEFT HAND SIDE VAN FIRST"))
	{
		func_551(Local_4414[25 /*19*/], 0, 0, 0);
	}
	if (func_36("TRIGGER FINAL VAN"))
	{
		func_551(Local_4414[27 /*19*/], 0, 0, 0);
	}
}

void func_550()//Position - 0x615AE
{
	if (!func_36("TRIGGER FINAL LINE OF ENEMIES"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[8 /*19*/], 0))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[8 /*19*/]))
			{
				if (!PED::IS_PED_INJURED(Local_2692[6 /*40*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[6 /*40*/], 1, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[6 /*40*/], 4, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[6 /*40*/], 25, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[6 /*40*/], 1628.71f, 3242.08f, 40.49f, 0.75f, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[6 /*40*/], 1);
					PED::SET_PED_ACCURACY(Local_2692[6 /*40*/], 5);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_2692[6 /*40*/], 0.3f, 0.7f);
					TASK::TASK_LOOK_AT_ENTITY(Local_2692[6 /*40*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[6 /*40*/], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, MISC::GET_RANDOM_INT_IN_RANGE(0, 800), 256);
					}
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 67108864, 16);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
					TASK::TASK_PERFORM_SEQUENCE(Local_2692[6 /*40*/], uLocal_5080);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
				}
				if (!PED::IS_PED_INJURED(Local_2692[7 /*40*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[7 /*40*/], 1, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[7 /*40*/], 4, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[7 /*40*/], 25, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[7 /*40*/], 1627.43f, 3239.2f, 40.46f, 0.75f, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[7 /*40*/], 1);
					TASK::TASK_LOOK_AT_ENTITY(Local_2692[7 /*40*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					PED::SET_PED_ACCURACY(Local_2692[7 /*40*/], 5);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_2692[7 /*40*/], 0.3f, 0.7f);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[7 /*40*/], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, MISC::GET_RANDOM_INT_IN_RANGE(0, 800), 256);
					}
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 67108864, 16);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
					TASK::TASK_PERFORM_SEQUENCE(Local_2692[7 /*40*/], uLocal_5080);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
				}
				if (!PED::IS_PED_INJURED(Local_2692[8 /*40*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[8 /*40*/], 1, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[8 /*40*/], 25, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[8 /*40*/], 4, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[8 /*40*/], 1626.23f, 3245.75f, 40.55f, 0.75f, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[8 /*40*/], 1);
					TASK::TASK_LOOK_AT_ENTITY(Local_2692[8 /*40*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					PED::SET_PED_ACCURACY(Local_2692[8 /*40*/], 5);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_2692[8 /*40*/], 0.3f, 0.7f);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[8 /*40*/], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, MISC::GET_RANDOM_INT_IN_RANGE(0, 500), 256);
					}
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 67108864, 16);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
					TASK::TASK_PERFORM_SEQUENCE(Local_2692[8 /*40*/], uLocal_5080);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
				}
				if (!PED::IS_PED_INJURED(Local_2692[9 /*40*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[9 /*40*/], 1, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[9 /*40*/], 25, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[9 /*40*/], 4, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[9 /*40*/], 1628.35f, 3244.15f, 40.52f, 0.75f, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[9 /*40*/], 1);
					TASK::TASK_LOOK_AT_ENTITY(Local_2692[9 /*40*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					PED::SET_PED_ACCURACY(Local_2692[9 /*40*/], 5);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_2692[9 /*40*/], 0.3f, 0.7f);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[9 /*40*/], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, MISC::GET_RANDOM_INT_IN_RANGE(0, 1000), 256);
					}
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 67108864, 16);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
					TASK::TASK_PERFORM_SEQUENCE(Local_2692[9 /*40*/], uLocal_5080);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
				}
				Local_2692[6 /*40*/].f_15 = 0;
				Local_2692[7 /*40*/].f_15 = 0;
				Local_2692[8 /*40*/].f_15 = 0;
				Local_2692[9 /*40*/].f_15 = 0;
				func_33("TRIGGER FINAL LINE OF ENEMIES", 1);
			}
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_2692[6 /*40*/]))
		{
			if (Local_2692[6 /*40*/].f_15 != 99)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_2692[6 /*40*/], 1628.71f, 3242.08f, 40.49f, 0.75f, 0.75f, 0.75f, 0, 1, 0))
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_2692[6 /*40*/], 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[6 /*40*/], 1);
					Local_2692[6 /*40*/].f_15 = 99;
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_2692[7 /*40*/]))
		{
			if (Local_2692[7 /*40*/].f_15 != 99)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_2692[7 /*40*/], 1627.43f, 3239.2f, 40.46f, 0.75f, 0.75f, 0.75f, 0, 1, 0))
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_2692[7 /*40*/], 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[7 /*40*/], 1);
					Local_2692[7 /*40*/].f_15 = 99;
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_2692[8 /*40*/]))
		{
			if (Local_2692[8 /*40*/].f_15 != 99)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_2692[8 /*40*/], 1626.23f, 3245.75f, 40.55f, 0.75f, 0.75f, 0.75f, 0, 1, 0))
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_2692[8 /*40*/], 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[8 /*40*/], 1);
					Local_2692[8 /*40*/].f_15 = 99;
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_2692[9 /*40*/]))
		{
			if (Local_2692[9 /*40*/].f_15 != 99)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_2692[9 /*40*/], 1628.35f, 3244.15f, 40.52f, 0.75f, 0.75f, 0.75f, 0, 1, 0))
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_2692[9 /*40*/], 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[9 /*40*/], 1);
					Local_2692[9 /*40*/].f_15 = 99;
				}
			}
		}
	}
}

void func_551(int iParam0, float fParam1, float fParam2, float fParam3)//Position - 0x61B58
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1)))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1) != PLAYER::PLAYER_PED_ID())
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
				{
					iVar0 = -1;
					while (iVar0 <= (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) - 1))
					{
						iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar0);
						if (!PED::IS_PED_INJURED(iVar1))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 1, 0);
							if (!GlobalFunc_105(fParam1, fParam2, fParam3))
							{
								TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(iVar1, fParam1, fParam2, fParam3, 2f);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 0);
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503) != 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
								TASK::TASK_PERFORM_SEQUENCE(iVar1, uLocal_5080);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
							}
						}
						iVar0++;
					}
				}
			}
		}
		else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
			ENTITY::SET_ENTITY_PROOFS(iParam0, 0, 0, 0, 0, 0, 0, 0, 0);
			iVar0 = -1;
			while (iVar0 <= (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) - 1))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar0);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 1, 0);
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, 242628503) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), PLAYER::PLAYER_PED_ID(), 1f, 1, 3f, 5f, 1, 0, 0, -957453492, 20000);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
						TASK::TASK_PERFORM_SEQUENCE(iVar2, uLocal_5080);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
					}
				}
				iVar0++;
			}
		}
	}
}


void func_553()//Position - 0x61D2D
{
	switch (iLocal_5951)
	{
		case 0:
			iLocal_5951++;
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[8 /*19*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4414[8 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_4414[8 /*19*/]) < 1000)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[8 /*19*/], 500f);
						ENTITY::SET_ENTITY_HEALTH(Local_4414[8 /*19*/], 500);
						iLocal_5951++;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[8 /*19*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4414[8 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_4414[8 /*19*/]) < 500)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[8 /*19*/], 400f);
						ENTITY::SET_ENTITY_HEALTH(Local_4414[8 /*19*/], 400);
						iLocal_5951++;
					}
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[8 /*19*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4414[8 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_4414[8 /*19*/]) < 400)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[8 /*19*/], 300f);
						ENTITY::SET_ENTITY_HEALTH(Local_4414[8 /*19*/], 300);
						iLocal_5951++;
					}
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[8 /*19*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4414[8 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_4414[8 /*19*/]) < 300)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[8 /*19*/], 200f);
						ENTITY::SET_ENTITY_HEALTH(Local_4414[8 /*19*/], 200);
						iLocal_5951++;
					}
				}
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[8 /*19*/]))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_4414[8 /*19*/]) < 200)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[8 /*19*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[8 /*19*/]);
					}
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_4414[8 /*19*/], -100f);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[8 /*19*/], -500f);
					AUDIO::_0x9D3AF56E94C9AE98(Local_4414[8 /*19*/], MISC::GET_RANDOM_FLOAT_IN_RANGE(2000f, 6000f));
					iLocal_5950 = MISC::GET_GAME_TIMER();
					iLocal_5951++;
				}
			}
			break;
		
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[8 /*19*/]))
			{
				if (!GlobalFunc_588(&iLocal_5950, 600))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_4414[8 /*19*/], 0, MISC::GET_RANDOM_FLOAT_IN_RANGE(33f, 48f), 0f, 0f, 0f, 1.8f, 0f, 0, 1, 1, 1, 0, 1);
					iLocal_5950 = MISC::GET_GAME_TIMER();
					iLocal_5951++;
				}
			}
			break;
		
		case 7:
			if (GlobalFunc_588(&iLocal_5950, MISC::GET_RANDOM_INT_IN_RANGE(600, 2000)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_4414[8 /*19*/]))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_4414[8 /*19*/]))
					{
						if (GlobalFunc_745())
						{
							VEHICLE::EXPLODE_VEHICLE(Local_4414[8 /*19*/], 1, 0);
							iLocal_5951++;
						}
						else
						{
							iLocal_5951++;
						}
					}
				}
			}
			break;
	}
}

void func_554()//Position - 0x6201D
{
	switch (iLocal_5952)
	{
		case 0:
			iLocal_5952++;
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[25 /*19*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4414[25 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_4414[25 /*19*/]) < 1000)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[25 /*19*/], 800f);
						ENTITY::SET_ENTITY_HEALTH(Local_4414[25 /*19*/], 800);
						iLocal_5952++;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[25 /*19*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4414[25 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_4414[25 /*19*/]) < 800)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[25 /*19*/], 400f);
						ENTITY::SET_ENTITY_HEALTH(Local_4414[25 /*19*/], 400);
						iLocal_5952++;
					}
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[25 /*19*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4414[25 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_4414[25 /*19*/]) < 400)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[25 /*19*/], 300f);
						ENTITY::SET_ENTITY_HEALTH(Local_4414[25 /*19*/], 300);
						iLocal_5952++;
					}
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[25 /*19*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4414[25 /*19*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_4414[25 /*19*/]) < 300)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[25 /*19*/], 200f);
						ENTITY::SET_ENTITY_HEALTH(Local_4414[25 /*19*/], 200);
						iLocal_5952++;
					}
				}
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[25 /*19*/]))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_4414[25 /*19*/]) < 200)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[25 /*19*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[25 /*19*/]);
					}
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_4414[25 /*19*/], -100f);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[25 /*19*/], -500f);
					AUDIO::_0x9D3AF56E94C9AE98(Local_4414[25 /*19*/], MISC::GET_RANDOM_FLOAT_IN_RANGE(2000f, 6000f));
					iLocal_5953 = MISC::GET_GAME_TIMER();
					iLocal_5952++;
				}
			}
			break;
		
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[25 /*19*/]))
			{
				if (!GlobalFunc_588(&iLocal_5953, 600))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_4414[25 /*19*/], 0, MISC::GET_RANDOM_FLOAT_IN_RANGE(28f, 34f), 0f, 0f, 0f, 1.8f, 0f, 0, 1, 1, 1, 0, 1);
					iLocal_5953 = MISC::GET_GAME_TIMER();
					iLocal_5952++;
				}
			}
			break;
		
		case 7:
			if (GlobalFunc_588(&iLocal_5953, MISC::GET_RANDOM_INT_IN_RANGE(600, 2000)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_4414[25 /*19*/]))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_4414[25 /*19*/]))
					{
						if (GlobalFunc_745())
						{
							VEHICLE::EXPLODE_VEHICLE(Local_4414[25 /*19*/], 1, 0);
							iLocal_5952++;
						}
						else
						{
							iLocal_5952++;
						}
					}
				}
			}
			break;
	}
}

void func_555()//Position - 0x6230D
{
	if (iLocal_5819 > 0)
	{
		if (func_36("SJC_SPECIAL_H"))
		{
			if (!func_36("SJC_COMBAT_ROLL"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1699.597f, 3267.315f, 38.87961f, 1765.331f, 3283.362f, 46.51394f, 26.5f, 0, 1, 0))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_159("SJC_COMBAT_ROLL", -1);
						func_33("SJC_COMBAT_ROLL", 1);
					}
				}
			}
		}
	}
	func_574();
	func_573();
	func_539(&Local_491);
	func_539(&Local_2692);
	MISC::SET_INSTANCE_PRIORITY_HINT(1);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[1 /*19*/]))
	{
		func_208(6, 1733.376f, 3320.323f, 41.7312f, 183.4859f, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[2 /*19*/]))
	{
		func_208(8, 1573.97f, 3221.91f, 41.08f, 106.07f, 0);
	}
	else if (!func_36("VEHICLE BLOCKED"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[2 /*19*/], 0);
			func_33("VEHICLE BLOCKED", 1);
		}
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (iLocal_5819 > 3)
	{
		if (iLocal_5938)
		{
			func_571();
		}
	}
	if (iLocal_5819 > 0)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_402))
		{
			HUD::REMOVE_BLIP(&uLocal_402);
		}
		func_570();
	}
	if (!func_36("TREVOR_2_SHOOTOUT"))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_SNIPE_MAIN"))
		{
			AUDIO::STOP_AUDIO_SCENE("TREVOR_2_SNIPE_MAIN");
		}
		else
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_2_SHOOTOUT");
			func_33("TREVOR_2_SHOOTOUT", 1);
		}
	}
	if (!func_36("SJC_SPECIAL_H"))
	{
		if (iLocal_5819 > 0)
		{
			if (GlobalFunc_588(&iLocal_5939, 5000))
			{
				if (!PAD::_IS_USING_KEYBOARD(2))
				{
					GlobalFunc_159("CMN_TABIL_RET", -1);
				}
				else
				{
					GlobalFunc_159("CMN_TABIL_RET_KM", -1);
				}
				func_33("SJC_SPECIAL_H", 1);
			}
		}
	}
	if (iLocal_5796)
	{
		func_569();
	}
	if (iLocal_5819 > 2)
	{
		func_568();
		func_567();
	}
	if (iLocal_5819 > 4)
	{
		func_538();
	}
	if (iLocal_5819 < 5)
	{
		func_566();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[6 /*19*/]))
	{
		STREAMING::REQUEST_MODEL(joaat("gburrito"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("gburrito")))
		{
			func_26(6, joaat("gburrito"), 1745.71f, 3275.38f, 40.94f, 133.23f, joaat("g_m_y_lost_01"), 0, 0, 0, 0, -1, joaat("weapon_carbinerifle"));
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[6 /*19*/], 1);
		}
	}
	if (iLocal_5819 > 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/], 2, "RCSJC", 1);
				VEHICLE::_0x796A877E459B99EA(Local_4414[1 /*19*/], 0f, 0f, 0.13f);
				VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/]);
			}
		}
	}
	switch (iLocal_5819)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_4414[2 /*19*/], 1573.984f, 3221.89f, 39.4199f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_4414[2 /*19*/], 106.0713f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_4414[2 /*19*/], 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4414[2 /*19*/]);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
			{
				VEHICLE::SET_VEHICLE_LIGHTS(Local_4414[12 /*19*/], 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_4414[1 /*19*/], 2000);
				ENTITY::SET_ENTITY_PROOFS(Local_4414[1 /*19*/], 0, 0, 0, 1, 1, 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4414[12 /*19*/]);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[5 /*19*/], 0))
			{
				VEHICLE::SET_VEHICLE_STRONG(Local_4414[5 /*19*/], 1);
				ENTITY::SET_ENTITY_PROOFS(Local_4414[5 /*19*/], 1, 1, 1, 1, 1, 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[6 /*19*/], 0))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[6 /*19*/], 0);
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
			{
				ENTITY::SET_ENTITY_HEALTH(uLocal_5739[1], 120);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_491[32 /*40*/]))
			{
				if (!PED::IS_PED_INJURED(Local_491[32 /*40*/]))
				{
					PED::DELETE_PED(&(Local_491[32 /*40*/]));
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_5546))
			{
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_5546, 1000);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_5546, 0);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_5546, 0);
						PED::RESET_PED_MOVEMENT_CLIPSET(Local_5546, 1048576000);
						PED::RESET_PED_STRAFE_CLIPSET(Local_5546);
						PED::SET_PED_STEALTH_MOVEMENT(Local_5546, 1, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_5546, 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1681.212f, 3300.527f, 40.0814f, 1.3f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
						TASK::TASK_PERFORM_SEQUENCE(Local_5546, uLocal_5080);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
					}
				}
			}
			PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1732.06f, 3318.049f, 40.612f, 20f, 20f, 4.1f, 17.307f, 0, 7);
			PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1712.584f, 3304.912f, 41.96f, 13f, 13.6f, 3.7f, 15.578f, 0, 7);
			TASK::ADD_COVER_BLOCKING_AREA((1719.118f + 0.75f), (3285.014f + 0.75f), (41.28481f + 0.75f), (1719.118f - 0.75f), (3285.014f - 0.75f), (41.28481f - 0.75f), 1, 1, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			GlobalFunc_2781(500);
			GlobalFunc_11046(3, "Steal the plane", 0, 0, 0, 1);
			GlobalFunc_5884("SJC_ENEM2G");
			iLocal_5796 = 0;
			iLocal_5938 = 0;
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 1);
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REMOVE_ANIM_DICT("misstrevor2mcs_3_b");
			func_30(joaat("g_m_y_lost_01"));
			func_30(joaat("hexer"));
			func_511(joaat("maverick"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
			func_565();
			iLocal_5830 = 0;
			iLocal_5935 = 0;
			iLocal_5833 = 0;
			iLocal_5842 = 0;
			iLocal_5808 = 0;
			func_510();
			func_509();
			if (PATHFIND::ARE_ALL_NAVMESH_REGIONS_LOADED())
			{
				PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
			}
			VEHICLE::REQUEST_VEHICLE_RECORDING(20, "RCSJC");
			VEHICLE::REQUEST_VEHICLE_RECORDING(19, "RCSJC");
			VEHICLE::REQUEST_VEHICLE_RECORDING(26, "RCSJC");
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "RCSJC");
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
			{
				ENTITY::SET_ENTITY_PROOFS(uLocal_5739[1], 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[2]))
			{
				ENTITY::SET_ENTITY_PROOFS(uLocal_5739[2], 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[1 /*19*/], 0);
			}
			HUD::CLEAR_GPS_CUSTOM_ROUTE();
			if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
			{
				HUD::SET_BLIP_ROUTE(Local_5875.f_5, 0);
			}
			if (!HUD::DOES_BLIP_EXIST(Local_5546.f_1))
			{
				Local_5546.f_1 = GlobalFunc_6797(Local_5546, 0, 145);
			}
			if (STREAMING::STREAMVOL_IS_VALID(uLocal_5088))
			{
				STREAMING::STREAMVOL_DELETE(uLocal_5088);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_5593[0 /*10*/]) && ENTITY::DOES_ENTITY_EXIST(Local_4414[5 /*19*/]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_5593[0 /*10*/], 0, iLocal_490);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_4414[5 /*19*/], 0, iLocal_490);
			}
			GlobalFunc_589(&(Local_5449[0 /*27*/].f_2));
			GlobalFunc_589(&(Local_5449[1 /*27*/].f_2));
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PED::SET_PED_NON_CREATION_AREA(Vector(128.1616f, 3205.534f, 1556.037f) - Vector(93.75f, 130.75f, 250f), Vector(128.1616f, 3205.534f, 1556.037f) + Vector(93.75f, 130.75f, 250f));
			PED::SET_PED_NON_CREATION_AREA(Vector(150.8107f, 4763.091f, 2034.216f) - Vector(129.75f, 168.75f, 250f), Vector(150.8107f, 4763.091f, 2034.216f) + Vector(129.75f, 168.75f, 250f));
			PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_m_hillbilly_01"), 1);
			PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_m_hillbilly_02"), 1);
			MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
			AUDIO::TRIGGER_MUSIC_EVENT("TRV2_GO_TO_RON");
			STREAMING::REQUEST_IPL("airfield");
			iLocal_5939 = MISC::GET_GAME_TIMER();
			iLocal_5819++;
			break;
		
		case 1:
			if (func_28())
			{
				if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(26, "RCSJC") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "RCSJC")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "RCSJC"))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[0 /*19*/]))
					{
						func_26(0, joaat("hexer"), 1776.951f, 3284.262f, 40.4616f, 184.9892f, joaat("g_m_y_lost_01"), 1, 0, 0, 0, -1, joaat("weapon_carbinerifle"));
						GlobalFunc_722(Local_2692[0 /*40*/], 507);
					}
					func_536(19, 19, 0, 0, 0, 1, 1);
					func_536(28, 30, 0, 0, 0, 1, 1);
					iLocal_5838 = MISC::GET_GAME_TIMER();
					if (!ENTITY::DOES_ENTITY_EXIST(Local_491[19 /*40*/]))
					{
						GlobalFunc_722(Local_491[19 /*40*/], 507);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_491[28 /*40*/]))
					{
						GlobalFunc_722(Local_491[28 /*40*/], 507);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_491[29 /*40*/]))
					{
						GlobalFunc_722(Local_491[29 /*40*/], 507);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_491[30 /*40*/]))
					{
						GlobalFunc_722(Local_491[30 /*40*/], 507);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[8 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[8 /*19*/], 1);
						if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_4414[8 /*19*/]) != 1)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4414[8 /*19*/], 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[7 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[7 /*19*/], 1);
						if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_4414[7 /*19*/]) != 1)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_4414[7 /*19*/], 1);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[26 /*19*/]))
					{
						func_26(26, joaat("gburrito"), 1776.792f, 3331.993f, 40.2483f, 213.6601f, joaat("g_m_y_lost_01"), 1, 29, 2, 0, -1, joaat("weapon_carbinerifle"));
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[26 /*19*/], 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[26 /*19*/], 0);
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(26, "RCSJC"))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[26 /*19*/]))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[26 /*19*/], 26, "RCSJC", 1);
								VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_4414[26 /*19*/]);
							}
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_2692[29 /*40*/]))
					{
						GlobalFunc_722(Local_2692[29 /*40*/], 507);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_2692[30 /*40*/]))
					{
						GlobalFunc_722(Local_2692[30 /*40*/], 507);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_2692[31 /*40*/]))
					{
						GlobalFunc_722(Local_2692[31 /*40*/], 507);
					}
					func_511(joaat("maverick"));
					iLocal_5796 = 1;
					iLocal_5819++;
				}
			}
			break;
		
		case 2:
			VEHICLE::REQUEST_VEHICLE_RECORDING(20, "RCSJC");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "RCSJC"))
			{
				iLocal_5819++;
			}
			break;
		
		case 3:
			if (func_564())
			{
				if (func_29("RCSJC"))
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (!PED::IS_PED_INJURED(Local_491[19 /*40*/]) && !ENTITY::IS_ENTITY_DEAD(Local_491[19 /*40*/]))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[19 /*40*/], 1710.262f, 3280.256f, 40.1216f, 20f, 0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_491[19 /*40*/], 1);
							WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_491[19 /*40*/], 0.3f, 0.6f);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
							TASK::TASK_STAND_STILL(0, 1000);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
							TASK::TASK_PERFORM_SEQUENCE(Local_491[19 /*40*/], uLocal_5080);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
						}
						if (!PED::IS_PED_INJURED(Local_491[23 /*40*/]) && !ENTITY::IS_ENTITY_DEAD(Local_491[23 /*40*/]))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[23 /*40*/], 1730.3f, 3282.01f, 41.08f, 2f, 0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_491[23 /*40*/], 1);
							WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_491[23 /*40*/], 0.3f, 0.6f);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
							TASK::TASK_PERFORM_SEQUENCE(Local_491[23 /*40*/], uLocal_5080);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
						}
						if (!PED::IS_PED_INJURED(Local_491[28 /*40*/]) && !ENTITY::IS_ENTITY_DEAD(Local_491[28 /*40*/]))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[28 /*40*/], 1745.79f, 3273.51f, 41.16f, 20f, 0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_491[28 /*40*/], 1);
							WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_491[28 /*40*/], 0.3f, 0.6f);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
							TASK::TASK_STAND_STILL(0, 2000);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
							TASK::TASK_PERFORM_SEQUENCE(Local_491[28 /*40*/], uLocal_5080);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
						}
						if (!PED::IS_PED_INJURED(Local_491[29 /*40*/]) && !ENTITY::IS_ENTITY_DEAD(Local_491[29 /*40*/]))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[29 /*40*/], 1751.19f, 3289.6f, 41.11f, 15f, 0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_491[29 /*40*/], 1);
							WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_491[29 /*40*/], 0.3f, 0.6f);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
							TASK::TASK_PERFORM_SEQUENCE(Local_491[29 /*40*/], uLocal_5080);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
						}
						if (!PED::IS_PED_INJURED(Local_491[30 /*40*/]) && !ENTITY::IS_ENTITY_DEAD(Local_491[30 /*40*/]))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[30 /*40*/], 1729.194f, 3276.983f, 40.1145f, 15f, 1, 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_491[30 /*40*/], 1);
							WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_491[30 /*40*/], 0.3f, 0.4f);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
							TASK::TASK_PERFORM_SEQUENCE(Local_491[30 /*40*/], uLocal_5080);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
						}
						if (!PED::IS_PED_INJURED(Local_2692[0 /*40*/]))
						{
							PED::SET_PED_COMBAT_MOVEMENT(Local_2692[0 /*40*/], 1);
							WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_2692[0 /*40*/], 0.3f, 0.6f);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[0 /*40*/], 1724.34f, 3274.78f, 40.14f, 15f, 1, 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
						{
							ENTITY::SET_ENTITY_PROOFS(Local_4414[1 /*19*/], 0, 0, 0, 0, 0, 0, 0, 0);
						}
						iLocal_5823 = MISC::GET_GAME_TIMER();
						PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
						iLocal_5819++;
					}
				}
			}
			break;
		
		case 4:
			if (((PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0)) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1699.918f, 3325.75f, 38.89504f, 1721.699f, 3236.394f, 56.98484f, 76.25f, 0, 1, 0)))
			{
				if (!iLocal_5938)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_FIGHT_START"))
					{
						iLocal_5938 = 1;
						iLocal_5850 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (func_36("TRIGGER SHOOTOUT BIKER"))
			{
				func_551(Local_4414[0 /*19*/], 0, 0, 0);
				if (!PED::IS_PED_INJURED(Local_2692[0 /*40*/]))
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_2692[0 /*40*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[0 /*40*/], 50, 1);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_2692[0 /*40*/], 0.3f, 0.4f);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[0 /*40*/], 1719.92f, 3278.49f, 40.11f, 25f, 1, 0);
				}
			}
			if (!PED::IS_PED_INJURED(Local_2692[0 /*40*/]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[0 /*40*/], 0))
				{
					if (HUD::DOES_BLIP_EXIST(Local_2692[0 /*40*/].f_1))
					{
						HUD::SET_BLIP_SCALE(Local_2692[0 /*40*/].f_1, 0.5f);
					}
				}
			}
			if (func_561(3))
			{
				func_560();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_5823) > 5000)
			{
				if (func_561(1))
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
						{
							PED::SET_PED_STEALTH_MOVEMENT(Local_5546, 0, 0);
							if (!PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
								TASK::TASK_ENTER_VEHICLE(0, Local_4414[1 /*19*/], 20000, -1, 3f, 1, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
								TASK::TASK_PERFORM_SEQUENCE(Local_5546, uLocal_5080);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
							}
						}
					}
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5546))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(Local_5546, Local_4414[1 /*19*/], -1);
						}
					}
					AUDIO::TRIGGER_MUSIC_EVENT("TRV2_TO_PLANE");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "RCSJC");
					VEHICLE::REQUEST_VEHICLE_RECORDING(2, "RCSJC");
					VEHICLE::REQUEST_VEHICLE_RECORDING(7, "RCSJC");
					VEHICLE::REQUEST_VEHICLE_RECORDING(9, "RCSJC");
					VEHICLE::REQUEST_VEHICLE_RECORDING(13, "RCSJC");
					VEHICLE::REQUEST_VEHICLE_RECORDING(23, "RCSJC");
					VEHICLE::REQUEST_VEHICLE_RECORDING(24, "RCSJC");
					VEHICLE::REQUEST_VEHICLE_RECORDING(25, "RCSJC");
					STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
					STREAMING::REQUEST_MODEL(joaat("hexer"));
					STREAMING::REQUEST_MODEL(joaat("hauler"));
					STREAMING::REQUEST_MODEL(joaat("tanker"));
					STREAMING::REQUEST_MODEL(joaat("gburrito"));
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 1);
					STREAMING::REQUEST_ANIM_DICT("move_action@p_m_zero@armed@2h_short@idle@high_energy@a");
					STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_9a");
					iLocal_5805 = 0;
					Local_491[0 /*40*/].f_15 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
					{
						ENTITY::SET_ENTITY_PROOFS(Local_4414[1 /*19*/], 0, 0, 0, 0, 0, 0, 0, 0);
					}
					if (CAM::DOES_CAM_EXIST(uLocal_5091))
					{
						CAM::DESTROY_CAM(uLocal_5091, 0);
					}
					iLocal_5819++;
				}
			}
			break;
		
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5546) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[1 /*19*/]))
					{
						PED::SET_PED_INTO_VEHICLE(Local_5546, Local_4414[1 /*19*/], -1);
					}
					if (!GlobalFunc_2522(Local_5546, Local_4414[1 /*19*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_5546, -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(Local_5546, Local_4414[1 /*19*/], 45000, -1, 3f, 1, 0);
						}
					}
				}
			}
			func_560();
			if (!func_36("TREVOR_2_GET_TO_PLANE"))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_SHOOTOUT"))
				{
					AUDIO::STOP_AUDIO_SCENE("TREVOR_2_SHOOTOUT");
				}
				else
				{
					AUDIO::START_AUDIO_SCENE("TREVOR_2_GET_TO_PLANE");
					func_33("TREVOR_2_GET_TO_PLANE", 1);
				}
			}
			if (!PED::IS_PED_INJURED(Local_5546))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 10f)
					{
						PAD::DISABLE_CONTROL_ACTION(2, 22, 1);
						PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
					}
					else
					{
						PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 0);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1726.224f, 3320.127f, 39.72607f, 1740.298f, 3321.193f, 43.22607f, 14f, 0, 1, 0) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 5f)
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_INJURED(Local_5546))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
								{
									STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_9a");
									if ((STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_9a") && STREAMING::HAS_ANIM_DICT_LOADED("move_action@p_m_zero@armed@2h_short@idle@high_energy@a")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
										{
											VEHICLE::DELETE_VEHICLE(&(Local_4414[10 /*19*/]));
											STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
										}
										PED::SET_PED_CAN_RAGDOLL(Local_5546, 0);
										func_512();
										func_535();
										if (GlobalFunc_663("SJC_GETPLNG1", 0, 0))
										{
											HUD::CLEAR_PRINTS();
										}
										func_534("RCSJC");
										iLocal_5785 = 0;
										AUDIO::START_AUDIO_SCENE("TREVOR_2_SHOOTOUT_ON_WING");
										func_558(11, Local_491[11 /*40*/].f_2, Local_491[11 /*40*/].f_5, 0, 1);
										func_557();
										if (!PED::IS_PED_INJURED(Local_5546))
										{
											PED::SET_PED_CAN_RAGDOLL(Local_5546, 1);
										}
										iLocal_5819++;
									}
								}
								else if (iLocal_5796 == 0)
								{
									iLocal_5796 = 1;
								}
							}
						}
						else if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 2f, 1, 1056964608, 0, 1))
						{
							TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						}
					}
					else if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_403))
						{
							func_512();
							uLocal_403 = GlobalFunc_6783(Local_4414[1 /*19*/], 0, 0);
							HUD::SET_BLIP_ROUTE(uLocal_403, 1);
							if (HUD::DOES_BLIP_EXIST(Local_5546.f_1))
							{
								HUD::REMOVE_BLIP(&(Local_5546.f_1));
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[2 /*19*/], 1);
			}
			AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
			STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_9a");
			func_56();
			break;
	}
}


void func_557()//Position - 0x63863
{
	var uVar0;
	
	SYSTEM::SETTIMERA(0);
	iLocal_5768 = 1;
	if (iLocal_5821 > 0)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	while (iLocal_5768)
	{
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		RECORDING::_0x208784099002BC30("M_TREV2", 0);
		if (!func_36("TR_bp01"))
		{
			if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_bp01", 7, 0, 0, 0))
			{
				func_33("TR_bp01", 1);
			}
		}
		switch (iLocal_5821)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_9a");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_9a"))
				{
					if (!CAM::DOES_CAM_EXIST(uLocal_5091) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(1, "RCSJC");
							VEHICLE::REQUEST_VEHICLE_RECORDING(2, "RCSJC");
							VEHICLE::REQUEST_VEHICLE_RECORDING(7, "RCSJC");
							VEHICLE::REQUEST_VEHICLE_RECORDING(9, "RCSJC");
							VEHICLE::REQUEST_VEHICLE_RECORDING(13, "RCSJC");
							VEHICLE::REQUEST_VEHICLE_RECORDING(23, "RCSJC");
							VEHICLE::REQUEST_VEHICLE_RECORDING(24, "RCSJC");
							VEHICLE::REQUEST_VEHICLE_RECORDING(25, "RCSJC");
							STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
							STREAMING::REQUEST_MODEL(joaat("hexer"));
							STREAMING::REQUEST_MODEL(joaat("hauler"));
							STREAMING::REQUEST_MODEL(joaat("tanker"));
							STREAMING::REQUEST_MODEL(joaat("gburrito"));
							WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_carbinerifle"), 31, 0);
							STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_9b");
							STREAMING::REQUEST_ANIM_DICT("misstrevor2hangar_death");
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							GlobalFunc_8380(1, 1, 1, 0);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_5872, 1);
							if ((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0) || !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 0)) || !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 120, 1, 1);
							}
							else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0))
							{
								if (iLocal_5872 != joaat("weapon_assaultrifle"))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 1);
								}
							}
							else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0))
							{
								if (iLocal_5872 != joaat("weapon_carbinerifle"))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 1);
								}
							}
							else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 0))
							{
								if (iLocal_5872 != joaat("weapon_advancedrifle"))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 1);
								}
							}
							GlobalFunc_4935();
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 101, 1);
							iLocal_5923 = 0;
							iLocal_5928 = 0;
							Local_5930 = { 0f, 0f, 0f };
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
							MISC::CLEAR_AREA(1735.692f, 3292.515f, 40.1576f, 100f, 1, 0, 0, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(1735.692f, 3292.515f, 40.1576f, 100f, 0, 0, 1, 1, 0);
							if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								VEHICLE::DELETE_VEHICLE(&uVar0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_4414[11 /*19*/]))
							{
								VEHICLE::DELETE_VEHICLE(&(Local_4414[11 /*19*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer"));
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_4414[2 /*19*/]))
							{
								VEHICLE::DELETE_VEHICLE(&(Local_4414[2 /*19*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer"));
							}
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_5872, 1);
							if ((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 0)) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 120, 1, 1);
							}
							else if ((iLocal_5872 != joaat("weapon_assaultrifle") && iLocal_5872 != joaat("weapon_advancedrifle")) && iLocal_5872 != joaat("weapon_carbinerifle"))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 1);
								}
								else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 0))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 1);
								}
								else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 1);
								}
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
							{
								iLocal_5839 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5930, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_5839, "misstrevor2ig_9a", "get_on_plane_ped", 1000f, -1000f, 0, 0, 1148846080, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5839, Local_4414[1 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_4414[1 /*19*/], "chassis"));
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							uLocal_5091 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
							CAM::PLAY_CAM_ANIM(uLocal_5091, "get_on_plane_cam", "misstrevor2ig_9a", ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_4414[1 /*19*/], 0), 0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_4414[1 /*19*/]), 0, 2);
							CAM::SET_CAM_ACTIVE(uLocal_5091, 1);
							CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
							SYSTEM::SETTIMERB(0);
							iLocal_5821++;
						}
						else
						{
							iLocal_5821++;
						}
					}
				}
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_5546, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[11 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4414[11 /*19*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[12 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4414[12 /*19*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[12 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4414[12 /*19*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[0 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4414[0 /*19*/]));
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[8 /*19*/], 0))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4414[8 /*19*/]));
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[26 /*19*/], 0))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4414[26 /*19*/]));
				}
				iLocal_5821++;
				break;
			
			case 2:
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_5091) == 1f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
					{
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_4414[1 /*19*/], 0, 3.84078f, 0.831592f, 0.753682f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					TASK::TASK_AIM_GUN_SCRIPTED(PLAYER::PLAYER_PED_ID(), 986158275, 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					iLocal_5821++;
				}
				break;
			
			case 3:
				CAM::_0x59424BD75174C9B1();
				if (CAM::DOES_CAM_EXIST(uLocal_5091))
				{
					CAM::SET_CAM_ACTIVE(uLocal_5091, 0);
					CAM::RENDER_SCRIPT_CAMS(false, 1, 1500, 1, 0, 0);
				}
				RECORDING::_0x293220DA1B46CEBC(15f, 4f, 3);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[1 /*19*/], 1, 0);
				}
				CAM::SET_WIDESCREEN_BORDERS(0, 0);
				GlobalFunc_2781(500);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[8 /*19*/], 0))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4414[8 /*19*/]));
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[26 /*19*/], 0))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4414[26 /*19*/]));
				}
				HUD::CLEAR_PRINTS();
				iLocal_5821 = 0;
				GlobalFunc_8380(0, 1, 1, 0);
				GlobalFunc_4935();
				iLocal_5765 = 1;
				iLocal_5768 = 0;
				break;
		}
	}
}

void func_558(int iParam0, struct<3> Param1, float fParam4, bool bParam5, int iParam6)//Position - 0x63F11
{
	char cVar0[24];
	
	TASK::REMOVE_COVER_POINT(Local_491[iParam0 /*40*/].f_13);
	Local_491[iParam0 /*40*/] = PED::CREATE_PED(26, Local_491[iParam0 /*40*/].f_7, Param1, fParam4, 1, 1);
	if (bParam5)
	{
		Local_491[iParam0 /*40*/].f_1 = GlobalFunc_6797(Local_491[iParam0 /*40*/], 1, 145);
		HUD::SET_BLIP_SCALE(Local_491[iParam0 /*40*/].f_1, 0.5f);
	}
	PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_491[iParam0 /*40*/]);
	PED::SET_PED_DIES_WHEN_INJURED(Local_491[iParam0 /*40*/], 1);
	GlobalFunc_593(Local_491[iParam0 /*40*/], 1);
	GlobalFunc_593(Local_491[iParam0 /*40*/], 1);
	PED::SET_PED_MONEY(Local_491[iParam0 /*40*/], 0);
	ENTITY::SET_ENTITY_HEALTH(Local_491[iParam0 /*40*/], 110);
	PED::SET_PED_DIES_WHEN_INJURED(Local_491[iParam0 /*40*/], 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_491[iParam0 /*40*/], iLocal_490);
	WEAPON::GIVE_WEAPON_TO_PED(Local_491[iParam0 /*40*/], Local_491[iParam0 /*40*/].f_6, 999, 1, 1);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_491[iParam0 /*40*/], Local_491[iParam0 /*40*/].f_6, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_491[iParam0 /*40*/], iParam6);
	PED::SET_PED_AS_ENEMY(Local_491[iParam0 /*40*/], 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_491[iParam0 /*40*/], 1, 0);
	PED::SET_PED_COMBAT_MOVEMENT(Local_491[iParam0 /*40*/], 1);
	PED::SET_PED_COMBAT_RANGE(Local_491[iParam0 /*40*/], 1);
	PED::SET_PED_COMBAT_ABILITY(Local_491[iParam0 /*40*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[iParam0 /*40*/], 49, 1);
	PED::SET_PED_ACCURACY(Local_491[iParam0 /*40*/], 10);
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_491[iParam0 /*40*/], 1);
	StringCopy(&cVar0, "Enemy ", 24);
	StringIntConCat(&cVar0, iParam0, 24);
	PED::SET_PED_NAME_DEBUG(Local_491[iParam0 /*40*/], &cVar0);
}


void func_560()//Position - 0x640D0
{
	switch (iLocal_5935)
	{
		case 0:
			if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TREVOR_2_PLANE_START", 0))
			{
				fLocal_5937 = 0f;
				iLocal_5935++;
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TREVOR_2_PLANE_START", Local_4414[1 /*19*/], "TREVOR_2_SOUNDS", 0, 0);
						iLocal_5936 = MISC::GET_GAME_TIMER();
						iLocal_5935++;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_5936, 1600))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					if (fLocal_5937 > 0f)
					{
						fLocal_5937 = (fLocal_5937 - 0.001f);
						VEHICLE::SET_HELI_BLADES_SPEED(Local_4414[1 /*19*/], fLocal_5937);
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (fLocal_5937 < 0.6f)
				{
					fLocal_5937 = (fLocal_5937 + 0.001f);
					VEHICLE::SET_HELI_BLADES_SPEED(Local_4414[1 /*19*/], fLocal_5937);
				}
			}
			if (fLocal_5937 <= 0f)
			{
				if (GlobalFunc_588(&iLocal_5936, MISC::GET_RANDOM_INT_IN_RANGE(4000, 12000)))
				{
					if (!func_561(1))
					{
						iLocal_5935 = (iLocal_5935 - 1);
					}
				}
			}
			break;
	}
}

int func_561(int iParam0)//Position - 0x64203
{
	if ((func_563() + func_562()) < iParam0 + 1)
	{
		return 1;
	}
	return 0;
}

int func_562()//Position - 0x64220
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_2692)
	{
		if (!PED::IS_PED_INJURED(Local_2692[iVar0 /*40*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_563()//Position - 0x64253
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_491)
	{
		if (!PED::IS_PED_INJURED(Local_491[iVar0 /*40*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_564()//Position - 0x64286
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1704.915f, 3269.347f, 39.65241f, 1701.385f, 3317.347f, 42.64812f, 34.25f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1771.344f, 3333.743f, 38.85002f, 1686.255f, 3269.19f, 50.58174f, 44.25f, 0, 1, 0))
	{
		return 1;
	}
	if ((((((!PED::IS_PED_INJURED(Local_491[28 /*40*/]) && !PED::IS_PED_INJURED(Local_491[9 /*40*/])) && !PED::IS_PED_INJURED(Local_491[19 /*40*/])) && !PED::IS_PED_INJURED(Local_491[23 /*40*/])) && !PED::IS_PED_INJURED(Local_491[29 /*40*/])) && !PED::IS_PED_INJURED(Local_491[30 /*40*/])) && !PED::IS_PED_INJURED(Local_2692[0 /*40*/]))
	{
		if ((((((ENTITY::IS_ENTITY_ON_SCREEN(Local_491[28 /*40*/]) && ENTITY::IS_ENTITY_ON_SCREEN(Local_491[9 /*40*/])) && ENTITY::IS_ENTITY_ON_SCREEN(Local_491[19 /*40*/])) && ENTITY::IS_ENTITY_ON_SCREEN(Local_491[23 /*40*/])) && ENTITY::IS_ENTITY_ON_SCREEN(Local_491[29 /*40*/])) && ENTITY::IS_ENTITY_ON_SCREEN(Local_491[30 /*40*/])) && ENTITY::IS_ENTITY_ON_SCREEN(Local_2692[0 /*40*/]))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_565()//Position - 0x643E3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_237)
	{
		iLocal_237[iVar0] = 0;
		iVar0++;
	}
}

void func_566()//Position - 0x64408
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
	{
		if (!FIRE::IS_ENTITY_ON_FIRE(Local_4414[1 /*19*/]))
		{
			ENTITY::SET_ENTITY_PROOFS(Local_4414[1 /*19*/], 1, 1, 1, 1, 1, 0, 0, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_PROOFS(Local_4414[1 /*19*/], 0, 0, 0, 0, 0, 0, 0, 0);
		}
	}
}

void func_567()//Position - 0x64453
{
	switch (iLocal_5842)
	{
		case 0:
			iLocal_5785 = 0;
			iLocal_5842++;
			break;
		
		case 1:
			if (!GlobalFunc_5172(&Local_5875, 1))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl5p", 7, 0, 0, 0))
					{
						func_33("TR_pl5p", 1);
						iLocal_5706 = MISC::GET_GAME_TIMER();
						iLocal_5842++;
					}
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_5172(&Local_5875, 1))
			{
				if (!GlobalFunc_111())
				{
					iLocal_5842++;
				}
			}
			break;
		
		case 3:
			iLocal_5842++;
			break;
		
		case 4:
			if (iLocal_5819 > 4)
			{
				if (GlobalFunc_588(&iLocal_5843, 4000))
				{
					GlobalFunc_4935();
					if (!GlobalFunc_5172(&Local_5875, 2))
					{
						GlobalFunc_5884("SJC_GETPLNG1");
						if (HUD::DOES_BLIP_EXIST(Local_5546.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_5546.f_1));
						}
						func_506(0, Local_4414[1 /*19*/], 0f, 0f, 0f, 0, 2);
						iLocal_5843 = MISC::GET_GAME_TIMER();
						iLocal_5842++;
					}
				}
			}
			else if (((((((((((PED::IS_PED_INJURED(Local_491[23 /*40*/]) && PED::IS_PED_INJURED(Local_2692[0 /*40*/])) && PED::IS_PED_INJURED(Local_2692[29 /*40*/])) && PED::IS_PED_INJURED(Local_2692[30 /*40*/])) && PED::IS_PED_INJURED(Local_2692[31 /*40*/])) && PED::IS_PED_INJURED(Local_491[19 /*40*/])) && PED::IS_PED_INJURED(Local_491[23 /*40*/])) && PED::IS_PED_INJURED(Local_491[28 /*40*/])) && PED::IS_PED_INJURED(Local_491[29 /*40*/])) && PED::IS_PED_INJURED(Local_491[30 /*40*/])) && PED::IS_PED_INJURED(Local_491[8 /*40*/])) && PED::IS_PED_INJURED(Local_491[7 /*40*/]))
			{
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1716.055f, 3312.888f, 39.22366f, 1743.667f, 3321.383f, 44.70224f, 23.75f, 0, 1, 0))
			{
				if (!func_36("KILL CURRENT CONVO"))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_5105();
						func_33("KILL CURRENT CONVO", 1);
					}
				}
				else if (!func_36("TR2_CLR"))
				{
					if (!GlobalFunc_5172(&Local_5875, 1))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_CLR", 7, 0, 0, 0))
							{
								func_33("TR2_CLR", 1);
							}
						}
					}
				}
				else if (!func_36("TR2_CLRb"))
				{
					if (!GlobalFunc_5172(&Local_5875, 1))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_CLRb", 7, 0, 0, 0))
							{
								func_33("TR2_CLRb", 1);
								iLocal_5926 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else if (func_36("TR2_CLRb"))
				{
					if (GlobalFunc_588(&iLocal_5926, 15000))
					{
						func_33("KILL CURRENT CONVO", 1);
						func_33("TR2_CLR", 1);
						func_33("TR2_CLRb", 1);
					}
				}
			}
			else
			{
				if (func_36("TR2_CLRb"))
				{
					if (GlobalFunc_588(&iLocal_5926, 15000))
					{
						func_33("KILL CURRENT CONVO", 1);
						func_33("TR2_CLR", 1);
						func_33("TR2_CLRb", 1);
					}
				}
				if (!func_36("GET_TIMER"))
				{
					if (!GlobalFunc_111())
					{
						iLocal_5843 = MISC::GET_GAME_TIMER();
						func_33("GET_TIMER", 1);
					}
				}
				else if (!GlobalFunc_5172(&Local_5875, 1))
				{
					if (!GlobalFunc_111())
					{
						if (!func_36("TR2_SHT2"))
						{
							if (GlobalFunc_588(&iLocal_5843, MISC::GET_RANDOM_INT_IN_RANGE(12000, 19000)))
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_SHT2", 7, 0, 0, 0))
								{
									func_33("TR2_SHT2", 1);
									iLocal_5843 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else if (!func_36("TR_pl6a1"))
						{
							if (GlobalFunc_588(&iLocal_5843, MISC::GET_RANDOM_INT_IN_RANGE(12000, 19000)))
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl6a", 7, 0, 0, 0))
								{
									func_33("TR_pl6a1", 1);
									iLocal_5843 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else if (!func_36("TR2_SHT"))
						{
							if (GlobalFunc_588(&iLocal_5843, MISC::GET_RANDOM_INT_IN_RANGE(17000, 19000)) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_SHT", 7, 0, 0, 0))
								{
									func_33("TR2_SHT", 1);
									iLocal_5843 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else if (!func_36("TR_pl6a2"))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl6a", 7, 0, 0, 0))
							{
								func_33("TR_pl6a2", 1);
								iLocal_5843 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!func_36("TR2_SHT3"))
						{
							if (GlobalFunc_588(&iLocal_5843, MISC::GET_RANDOM_INT_IN_RANGE(15000, 16000)))
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_SHT3", 7, 0, 0, 0))
								{
									func_33("TR2_SHT3", 1);
									iLocal_5843 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else if (!func_36("TR2_SHT4"))
						{
							if (GlobalFunc_588(&iLocal_5843, MISC::GET_RANDOM_INT_IN_RANGE(12000, 15000)))
							{
								if (!PED::IS_PED_INJURED(Local_5546))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
									{
										if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_SHT4", 7, 0, 0, 0))
											{
												func_33("TR2_SHT4", 1);
												iLocal_5843 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
						else if (!func_36("TR_pl6a3"))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl6a", 7, 0, 0, 0))
							{
								func_33("TR_pl6a3", 1);
								iLocal_5843 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!func_36("TR2_SHT5"))
						{
							if (GlobalFunc_588(&iLocal_5843, MISC::GET_RANDOM_INT_IN_RANGE(12000, 15000)))
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_SHT5", 7, 0, 0, 0))
								{
									func_33("TR2_SHT5", 1);
									iLocal_5843 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else
						{
							if (!func_36("TR_pl6a"))
							{
								if (GlobalFunc_588(&iLocal_5843, MISC::GET_RANDOM_INT_IN_RANGE(12000, 15000)))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl6a", 7, 0, 0, 0))
									{
										func_33("TR_pl6a", 1);
										iLocal_5843 = MISC::GET_GAME_TIMER();
									}
								}
							}
							if (func_36("TR_pl6a"))
							{
								if (GlobalFunc_588(&iLocal_5843, MISC::GET_RANDOM_INT_IN_RANGE(12000, 15000)))
								{
									func_33("TR_pl6a", 0);
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 3f)
				{
					if (!GlobalFunc_5172(&Local_5875, 1))
					{
						if (!GlobalFunc_111())
						{
							if (!func_36("TR2_OVER"))
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_OVER", 7, 0, 0, 0))
								{
									func_33("TR2_OVER", 1);
									iLocal_5843 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
			if (func_36("TR2_OVER"))
			{
				if (GlobalFunc_588(&iLocal_5843, 12000))
				{
					func_33("TR2_OVER", 0);
				}
			}
			break;
		
		case 6:
			break;
	}
}

void func_568()//Position - 0x64B3B
{
	if (!PED::IS_PED_INJURED(Local_491[7 /*40*/]))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(Local_491[7 /*40*/], 1705.9f, 3290.342f, 44.3995f, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_491[7 /*40*/]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_491[7 /*40*/])) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_491[7 /*40*/], 1) < 15f)
			{
				if (Local_491[7 /*40*/].f_35 == 0)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[7 /*40*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 1, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_491[7 /*40*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[7 /*40*/], 50, 1);
					PED::SET_PED_COMBAT_RANGE(Local_491[7 /*40*/], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[7 /*40*/], 51, 1);
					Local_491[7 /*40*/].f_35 = 1;
				}
			}
		}
	}
	if (func_36("TRIGGER SHOOTOUT BIKER"))
	{
		if (!PED::IS_PED_INJURED(Local_2692[0 /*40*/]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_2692[0 /*40*/], 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_5546, 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_2692[0 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_2692[0 /*40*/]))
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(20, "RCSJC");
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "RCSJC"))
		{
			if (!func_36("TRIGGER SHOOTOUT BIKER"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[0 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[0 /*19*/], 0))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[0 /*19*/]) && !ENTITY::IS_ENTITY_OCCLUDED(Local_4414[0 /*19*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_2692[0 /*40*/], Local_4414[0 /*19*/], 0))
							{
							}
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Local_4414[0 /*19*/], 20, "RCSJC", 6f, 786469);
							VEHICLE::SET_PLAYBACK_SPEED(Local_4414[0 /*19*/], 0.7f);
							WEAPON::GIVE_WEAPON_TO_PED(Local_2692[0 /*40*/], joaat("weapon_pistol"), -1, 1, 1);
							PED::SET_PED_ACCURACY(Local_2692[0 /*40*/], 2);
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[0 /*40*/], 0))
							{
								if (!PED::IS_PED_INJURED(Local_5546))
								{
									TASK::TASK_DRIVE_BY(Local_2692[0 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 80, 1, -753768974);
								}
							}
							else
							{
								TASK::TASK_COMBAT_PED(Local_2692[0 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
							func_33("TRIGGER SHOOTOUT BIKER", 1);
						}
					}
				}
			}
		}
	}
	switch (iLocal_5833)
	{
		case 0:
			iLocal_5833++;
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_491[8 /*40*/]))
			{
				func_558(8, 1693.496f, 3291.895f, 40.1465f, 301.5915f, 0, 1);
				GlobalFunc_722(Local_491[8 /*40*/], 507);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_491[7 /*40*/]))
			{
				func_558(7, 1698.933f, 3292.513f, 47.9264f, 128.2312f, 0, 1);
				GlobalFunc_722(Local_491[7 /*40*/], 507);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_491[9 /*40*/]))
			{
				if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("g_m_y_lost_01"), 1721.59f, 3296.98f, 41.22f, 1))
				{
					func_558(9, 1721.59f, 3296.98f, 41.22f, -103.08f, 0, 1);
					GlobalFunc_722(Local_491[9 /*40*/], 507);
				}
				else
				{
					func_558(9, 1743.4f, 3301.3f, 41.22f, 173.27f, 0, 1);
					GlobalFunc_722(Local_491[9 /*40*/], 507);
				}
			}
			if ((ENTITY::DOES_ENTITY_EXIST(Local_491[7 /*40*/]) && ENTITY::DOES_ENTITY_EXIST(Local_491[8 /*40*/])) && ENTITY::DOES_ENTITY_EXIST(Local_491[9 /*40*/]))
			{
				iLocal_5833++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(Local_491[7 /*40*/]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
				TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, 1705.934f, 3290.416f, 44.3994f, 0.75f);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
				TASK::TASK_PERFORM_SEQUENCE(Local_491[7 /*40*/], uLocal_5080);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
			}
			if (!PED::IS_PED_INJURED(Local_491[8 /*40*/]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
				TASK::TASK_PERFORM_SEQUENCE(Local_491[8 /*40*/], uLocal_5080);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
				PED::SET_PED_COMBAT_MOVEMENT(Local_491[8 /*40*/], 1);
				WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_491[8 /*40*/], 30f, 60f);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[8 /*40*/], 1701.365f, 3297.682f, 40.1478f, 30f, 1, 0);
			}
			if (!PED::IS_PED_INJURED(Local_491[9 /*40*/]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
				TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, 1726.99f, 3294.21f, 41.22f, 0.75f);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
				TASK::TASK_PERFORM_SEQUENCE(Local_491[9 /*40*/], uLocal_5080);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[9 /*40*/], 50, 1);
			}
			iLocal_5850 = MISC::GET_GAME_TIMER();
			iLocal_5833++;
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Local_4414[26 /*19*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[26 /*19*/], 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[26 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[26 /*19*/], 0);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1776.792f, 3331.993f, 40.2483f, 1) < 20f)
					{
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1720.46f, 3292.012f, 39.71761f, 1719.003f, 3269.002f, 45.1552f, 5.75f, 0, 1, 0))
					{
					}
					if ((PED::IS_PED_INJURED(Local_491[8 /*40*/]) && PED::IS_PED_INJURED(Local_491[7 /*40*/])) && PED::IS_PED_INJURED(Local_2692[0 /*40*/]))
					{
					}
					if ((PED::IS_PED_INJURED(Local_491[19 /*40*/]) && PED::IS_PED_INJURED(Local_2692[0 /*40*/])) && PED::IS_PED_INJURED(Local_491[8 /*40*/]))
					{
					}
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[26 /*19*/]) && !ENTITY::IS_ENTITY_OCCLUDED(Local_4414[26 /*19*/]))
					{
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_4414[26 /*19*/], 1), 1) < 20f)
					{
					}
				}
				if (!func_36("TRIGGERED VAN EARLY"))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1785.577f, 3325.365f, 39.6384f, 1766.687f, 3360.915f, 48.24609f, 22.25f, 0, 1, 0))
					{
						if (GlobalFunc_588(&iLocal_5850, 22000))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[26 /*19*/], 0))
							{
								if (((((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1776.792f, 3331.993f, 40.2483f, 1) < 20f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1720.46f, 3292.012f, 39.71761f, 1719.003f, 3269.002f, 45.1552f, 5.75f, 0, 1, 0)) || (((PED::IS_PED_INJURED(Local_491[8 /*40*/]) && PED::IS_PED_INJURED(Local_491[7 /*40*/])) && PED::IS_PED_INJURED(Local_2692[0 /*40*/])) && PED::IS_PED_INJURED(Local_491[19 /*40*/]))) || (((PED::IS_PED_INJURED(Local_491[19 /*40*/]) && PED::IS_PED_INJURED(Local_2692[0 /*40*/])) && PED::IS_PED_INJURED(Local_491[8 /*40*/])) && PED::IS_PED_INJURED(Local_491[28 /*40*/]))) || (ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[26 /*19*/]) && !ENTITY::IS_ENTITY_OCCLUDED(Local_4414[26 /*19*/]))) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_4414[26 /*19*/], 1), 1) < 20f)
								{
									VEHICLE::REQUEST_VEHICLE_RECORDING(26, "RCSJC");
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(26, "RCSJC"))
									{
										if (!PED::IS_PED_INJURED(Local_2692[29 /*40*/]))
										{
											if (ENTITY::DOES_ENTITY_EXIST(Local_4414[26 /*19*/]))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[26 /*19*/], 0))
												{
													iLocal_5833++;
												}
											}
										}
										else
										{
											Local_2692[29 /*40*/].f_12 = 0;
											Local_2692[30 /*40*/].f_12 = 0;
											Local_2692[31 /*40*/].f_12 = 0;
											iLocal_5925 = MISC::GET_GAME_TIMER();
											iLocal_5833 = 5;
										}
									}
								}
							}
							if (PED::IS_PED_INJURED(Local_2692[29 /*40*/]))
							{
								Local_2692[29 /*40*/].f_12 = 0;
								Local_2692[30 /*40*/].f_12 = 0;
								Local_2692[31 /*40*/].f_12 = 0;
								iLocal_5925 = MISC::GET_GAME_TIMER();
								iLocal_5833 = 5;
							}
						}
					}
					else if (ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[26 /*19*/]) && !ENTITY::IS_ENTITY_OCCLUDED(Local_4414[26 /*19*/]))
					{
						Local_2692[29 /*40*/].f_12 = 0;
						Local_2692[30 /*40*/].f_12 = 0;
						Local_2692[31 /*40*/].f_12 = 0;
						iLocal_5833 = 5;
					}
				}
				else
				{
					iLocal_5833 = 6;
				}
			}
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[26 /*19*/], 0))
			{
				if (!PED::IS_PED_INJURED(Local_2692[29 /*40*/]))
				{
					if ((!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("burrito"), 1753.92f, 3294.63f, 40.94f, 0) || GlobalFunc_588(&iLocal_5925, 10000)) || (ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[26 /*19*/]) && !ENTITY::IS_ENTITY_OCCLUDED(Local_4414[26 /*19*/])))
					{
						VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_4414[26 /*19*/]);
						Local_2692[29 /*40*/].f_12 = 0;
						Local_2692[30 /*40*/].f_12 = 0;
						Local_2692[31 /*40*/].f_12 = 0;
						iLocal_5925 = MISC::GET_GAME_TIMER();
						iLocal_5833++;
					}
				}
				else
				{
					Local_2692[29 /*40*/].f_12 = 0;
					Local_2692[30 /*40*/].f_12 = 0;
					Local_2692[31 /*40*/].f_12 = 0;
					iLocal_5925 = MISC::GET_GAME_TIMER();
					iLocal_5833++;
				}
			}
			break;
		
		case 5:
			if (Local_2692[29 /*40*/].f_12 == 0)
			{
				if (!PED::IS_PED_INJURED(Local_2692[29 /*40*/]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[29 /*40*/], 0))
					{
						PED::SET_PED_COMBAT_RANGE(Local_2692[29 /*40*/], 1);
						PED::SET_PED_COMBAT_MOVEMENT(Local_2692[29 /*40*/], 1);
						func_551(Local_4414[26 /*19*/], 0, 0, 0);
					}
					else if (!HUD::DOES_BLIP_EXIST(Local_2692[29 /*40*/].f_1))
					{
						Local_2692[29 /*40*/].f_12 = 1;
					}
				}
			}
			if (Local_2692[30 /*40*/].f_12 == 0)
			{
				if (!PED::IS_PED_INJURED(Local_2692[30 /*40*/]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[30 /*40*/], 0))
					{
						PED::SET_PED_COMBAT_RANGE(Local_2692[30 /*40*/], 1);
						PED::SET_PED_COMBAT_MOVEMENT(Local_2692[30 /*40*/], 1);
						func_551(Local_4414[26 /*19*/], 0, 0, 0);
					}
					else if (!HUD::DOES_BLIP_EXIST(Local_2692[30 /*40*/].f_1))
					{
						Local_2692[30 /*40*/].f_12 = 1;
					}
				}
			}
			if (Local_2692[31 /*40*/].f_12 == 0)
			{
				if (!PED::IS_PED_INJURED(Local_2692[31 /*40*/]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2692[31 /*40*/], 0))
					{
						PED::SET_PED_COMBAT_RANGE(Local_2692[31 /*40*/], 1);
						PED::SET_PED_COMBAT_MOVEMENT(Local_2692[31 /*40*/], 1);
						func_551(Local_4414[26 /*19*/], 0, 0, 0);
					}
					else if (!HUD::DOES_BLIP_EXIST(Local_2692[31 /*40*/].f_1))
					{
						Local_2692[31 /*40*/].f_12 = 1;
					}
				}
			}
			break;
	}
}

void func_569()//Position - 0x655DE
{
	if (iLocal_5796)
	{
		if (func_36("TR_pl5p"))
		{
			if (!func_36("TR_pl04"))
			{
				if (!GlobalFunc_5172(&Local_5875, 1))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_588(&iLocal_5706, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl04", 7, 0, 0, 0))
							{
								func_33("TR_pl04", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_5546))
		{
			switch (iLocal_5830)
			{
				case 0:
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5546, 1);
						ENTITY::SET_ENTITY_HEALTH(Local_5546, 2000);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_5546, 0);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_5546, 0);
						PED::SET_PED_ACCURACY(Local_5546, 100);
						WEAPON::GIVE_WEAPON_TO_PED(Local_5546, joaat("weapon_pistol"), 200, 1, 1);
						WEAPON::SET_CURRENT_PED_WEAPON(Local_5546, joaat("weapon_pistol"), 1);
						PED::SET_PED_CAN_RAGDOLL(Local_5546, 0);
						TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_5546, 1);
						TASK::REQUEST_WAYPOINT_RECORDING("Trevor2RonPlane");
						iLocal_5844 = MISC::GET_GAME_TIMER();
						func_33("TR2_RGOTA", 1);
						iLocal_5830++;
					}
					break;
				
				case 1:
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trevor2RonPlane"))
					{
						if (!PED::IS_PED_INJURED(Local_5546))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_5546, 36f, 36f, 20f, 0, 1, 0) || GlobalFunc_588(&iLocal_5844, 35000))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5546, iLocal_489);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_489, iLocal_489);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_489, iLocal_490);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_490, iLocal_489);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_489, 1862763509);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_490, 1862763509);
								PED::SET_PED_AS_ENEMY(Local_5546, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5546, 1);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_5546, 0, 0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1714.517f, 3316.719f, 40.2176f, 2f, 20000, 0.25f, 0, 294.2834f);
									TASK::TASK_CLIMB(0, 1);
									TASK::TASK_ENTER_VEHICLE(0, Local_4414[1 /*19*/], 20000, -1, 2f, 1, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
									TASK::TASK_PERFORM_SEQUENCE(Local_5546, uLocal_5080);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
								}
								func_33("TR2_RGOTA", 0);
								iLocal_5830++;
							}
						}
					}
					break;
				
				case 2:
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_5546))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_5546, 1.8f, 0);
							iLocal_5830++;
						}
						iLocal_5830++;
					}
					break;
				
				case 3:
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_5546, 1.5f, 1.5f, 1.5f, 0, 1, 0))
						{
							TASK::CLEAR_PED_TASKS(Local_5546);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1714.517f, 3316.719f, 40.2176f, 2f, 20000, 0.25f, 0, 294.2834f);
									TASK::TASK_CLIMB(0, 1);
									TASK::TASK_ENTER_VEHICLE(0, Local_4414[1 /*19*/], 20000, -1, 2f, 1, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
									TASK::TASK_PERFORM_SEQUENCE(Local_5546, uLocal_5080);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
								}
							}
							iLocal_5830++;
						}
					}
					break;
				}
			}
	}
}

void func_570()//Position - 0x65917
{
	int iVar0;
	
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uLocal_5097, -1);
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_5097[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_5097[iVar0]))
			{
				if (PED::IS_PED_MODEL(uLocal_5097[iVar0], joaat("g_m_y_lost_01")))
				{
					if (GlobalFunc_588(&iLocal_5841, 2500))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_5097[iVar0], 1), 1) < 15f)
						{
							GlobalFunc_5653(uLocal_5097[iVar0], "TR2_DLAA", "LOST4", 3);
							iLocal_5841 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_571()//Position - 0x659BC
{
	int iVar0;
	int iVar1;
	
	if ((((((((((Local_491[7 /*40*/].f_37 == 1 || Local_491[8 /*40*/].f_37 == 1) || Local_491[9 /*40*/].f_37 == 1) || Local_2692[0 /*40*/].f_37 == 1) || Local_491[19 /*40*/].f_37 == 1) || Local_491[28 /*40*/].f_37 == 1) || Local_491[29 /*40*/].f_37 == 1) || Local_491[30 /*40*/].f_37 == 1) || Local_2692[31 /*40*/].f_37 == 1) || Local_2692[32 /*40*/].f_37 == 1) || Local_2692[33 /*40*/].f_37 == 1)
	{
	}
	if (!PED::IS_PED_INJURED(Local_491[7 /*40*/]))
	{
		if (((GlobalFunc_588(&iLocal_5850, 30000) || GlobalFunc_588(&iLocal_5850, iLocal_5933)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1745.11f, 3315.023f, 39.22351f, 1717.158f, 3308.5f, 46.47366f, 30.75f, 0, 1, 0)) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_491[7 /*40*/]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_491[7 /*40*/])))
		{
			if (Local_491[7 /*40*/].f_35 == 0)
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_491[7 /*40*/], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[7 /*40*/], 50, 1);
				PED::SET_PED_COMBAT_RANGE(Local_491[7 /*40*/], 0);
				Local_491[7 /*40*/].f_35 = 1;
			}
		}
		if (iLocal_5833 > 4)
		{
			if (GlobalFunc_588(&iLocal_5850, 80000))
			{
				if (Local_491[7 /*40*/].f_37 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[7 /*40*/], ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), 20f, 1, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_491[7 /*40*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[7 /*40*/], 50, 1);
								PED::SET_PED_COMBAT_RANGE(Local_491[7 /*40*/], 0);
								TASK::TASK_COMBAT_PED(Local_491[7 /*40*/], Local_5546, 0, 16);
								PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_491[7 /*40*/], Local_5546, 5f, 0f, 5f, -5f, 0f, -5f, 25f, 0, 0);
								Local_491[7 /*40*/].f_35 = 1;
								Local_491[7 /*40*/].f_37 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_491[8 /*40*/]))
	{
		if (((GlobalFunc_588(&iLocal_5850, 25000) || GlobalFunc_588(&iLocal_5850, iLocal_5933)) || GlobalFunc_156(Local_491[8 /*40*/], PLAYER::PLAYER_PED_ID(), 0) < 13f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1745.11f, 3315.023f, 39.22351f, 1717.158f, 3308.5f, 46.47366f, 30.75f, 0, 1, 0))
		{
			if (Local_491[8 /*40*/].f_35 == 0)
			{
				PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_491[8 /*40*/], PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 15f, 0, 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_491[8 /*40*/], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[8 /*40*/], 50, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[8 /*40*/], 51, 1);
				PED::SET_PED_COMBAT_RANGE(Local_491[8 /*40*/], 0);
				Local_491[8 /*40*/].f_35 = 1;
			}
		}
		if (iLocal_5833 > 4)
		{
			if (GlobalFunc_588(&iLocal_5850, iLocal_5934))
			{
				if (Local_491[8 /*40*/].f_37 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[8 /*40*/], ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), 10f, 1, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_491[8 /*40*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[8 /*40*/], 50, 1);
								PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_491[8 /*40*/], Local_5546, 5f, 0f, 5f, -5f, 0f, -5f, 10f, 0, 0);
								TASK::TASK_COMBAT_PED(Local_491[8 /*40*/], Local_5546, 0, 16);
								Local_491[8 /*40*/].f_35 = 1;
								Local_491[8 /*40*/].f_37 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_2692[0 /*40*/]))
	{
		if (((GlobalFunc_588(&iLocal_5850, 36000) || GlobalFunc_588(&iLocal_5850, iLocal_5933)) || GlobalFunc_156(Local_491[8 /*40*/], PLAYER::PLAYER_PED_ID(), 0) < 15f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1745.11f, 3315.023f, 39.22351f, 1717.158f, 3308.5f, 46.47366f, 30.75f, 0, 1, 0))
		{
			if (Local_2692[0 /*40*/].f_35 == 0)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[0 /*40*/], 1728.38f, 3285.12f, 40.07f, 20f, 0, 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_2692[0 /*40*/], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[0 /*40*/], 50, 1);
				PED::SET_PED_COMBAT_RANGE(Local_2692[0 /*40*/], 0);
				Local_2692[0 /*40*/].f_35 = 1;
			}
		}
		if (iLocal_5833 > 4)
		{
			if (GlobalFunc_588(&iLocal_5850, iLocal_5934))
			{
				if (Local_2692[0 /*40*/].f_37 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[0 /*40*/], ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), 15f, 1, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_2692[0 /*40*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[0 /*40*/], 50, 1);
								PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_2692[0 /*40*/], Local_5546, 5f, 0f, 5f, -5f, 0f, -5f, 10f, 0, 0);
								TASK::TASK_COMBAT_PED(Local_2692[0 /*40*/], Local_5546, 0, 16);
								Local_2692[0 /*40*/].f_35 = 1;
								Local_2692[0 /*40*/].f_37 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_491[19 /*40*/]))
	{
		if (((((((GlobalFunc_588(&iLocal_5850, 14000) && PED::IS_PED_INJURED(Local_491[8 /*40*/])) && PED::IS_PED_INJURED(Local_491[7 /*40*/])) || GlobalFunc_588(&iLocal_5850, iLocal_5933)) || GlobalFunc_156(Local_491[19 /*40*/], PLAYER::PLAYER_PED_ID(), 0) < 12f) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_491[19 /*40*/]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_491[19 /*40*/]))) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1745.11f, 3315.023f, 39.22351f, 1717.158f, 3308.5f, 46.47366f, 30.75f, 0, 1, 0)) || GlobalFunc_588(&iLocal_5850, 60000))
		{
			if (Local_491[19 /*40*/].f_35 == 0)
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_491[19 /*40*/], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[19 /*40*/], 50, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[19 /*40*/], 51, 1);
				PED::SET_PED_COMBAT_RANGE(Local_491[19 /*40*/], 0);
				Local_491[19 /*40*/].f_35 = 1;
			}
		}
		if (iLocal_5833 > 4)
		{
			if (GlobalFunc_588(&iLocal_5850, iLocal_5934))
			{
				if (Local_491[19 /*40*/].f_37 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_491[19 /*40*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[19 /*40*/], 50, 1);
								PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_491[19 /*40*/], Local_5546, 5f, 0f, 5f, -5f, 0f, -5f, 15f, 0, 0);
								TASK::TASK_COMBAT_PED(Local_491[19 /*40*/], Local_5546, 0, 16);
								Local_491[19 /*40*/].f_35 = 1;
								Local_491[19 /*40*/].f_37 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_5833 > 4)
	{
		if (!PED::IS_PED_INJURED(Local_491[28 /*40*/]))
		{
			if ((((GlobalFunc_156(Local_491[19 /*40*/], PLAYER::PLAYER_PED_ID(), 0) < 23f || GlobalFunc_588(&iLocal_5850, iLocal_5933)) || ((PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_588(&iLocal_5850, 45000)) && GlobalFunc_156(Local_491[19 /*40*/], PLAYER::PLAYER_PED_ID(), 0) < 30f)) || GlobalFunc_588(&iLocal_5850, 60000)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1745.11f, 3315.023f, 39.22351f, 1717.158f, 3308.5f, 46.47366f, 30.75f, 0, 1, 0))
			{
				if (Local_491[28 /*40*/].f_35 == 0)
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_491[28 /*40*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[28 /*40*/], 50, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[28 /*40*/], 51, 1);
					PED::SET_PED_COMBAT_RANGE(Local_491[28 /*40*/], 0);
					Local_491[28 /*40*/].f_35 = 1;
				}
			}
			if (GlobalFunc_588(&iLocal_5850, iLocal_5934))
			{
				if (Local_491[28 /*40*/].f_37 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[28 /*40*/], ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), 15f, 1, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_491[28 /*40*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[28 /*40*/], 50, 1);
								PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_491[28 /*40*/], Local_5546, 5f, 0f, 5f, -5f, 0f, -5f, 10f, 0, 0);
								TASK::TASK_COMBAT_PED(Local_491[28 /*40*/], Local_5546, 0, 16);
								Local_491[28 /*40*/].f_35 = 1;
								Local_491[28 /*40*/].f_37 = 1;
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_491[29 /*40*/]))
		{
			if (((GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_491[29 /*40*/]) < 18f || GlobalFunc_588(&iLocal_5850, iLocal_5933)) || GlobalFunc_588(&iLocal_5925, 40000)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1745.11f, 3315.023f, 39.22351f, 1717.158f, 3308.5f, 46.47366f, 30.75f, 0, 1, 0))
			{
				if (Local_491[29 /*40*/].f_35 == 0)
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_491[29 /*40*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[29 /*40*/], 50, 1);
					Local_491[29 /*40*/].f_35 = 1;
				}
			}
			if (GlobalFunc_588(&iLocal_5850, iLocal_5934))
			{
				if (Local_491[29 /*40*/].f_37 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[29 /*40*/], ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), 15f, 1, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_491[29 /*40*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[29 /*40*/], 50, 1);
								PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_491[29 /*40*/], Local_5546, 5f, 0f, 5f, -5f, 0f, -5f, 10f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[29 /*40*/], 51, 1);
								TASK::TASK_COMBAT_PED(Local_491[29 /*40*/], Local_5546, 0, 16);
								Local_491[29 /*40*/].f_35 = 1;
								Local_491[29 /*40*/].f_37 = 1;
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_491[30 /*40*/]))
		{
			if ((((GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_491[30 /*40*/]) < 28f && GlobalFunc_588(&iLocal_5925, 15000)) || GlobalFunc_588(&iLocal_5850, iLocal_5933)) || GlobalFunc_588(&iLocal_5925, 40000)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1745.11f, 3315.023f, 39.22351f, 1717.158f, 3308.5f, 46.47366f, 30.75f, 0, 1, 0))
			{
				if (Local_491[30 /*40*/].f_35 == 0)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[30 /*40*/], 1751.04f, 3289.58f, 41.11f, 20f, 1, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_491[30 /*40*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[30 /*40*/], 50, 1);
					Local_491[30 /*40*/].f_35 = 1;
				}
			}
			if (GlobalFunc_588(&iLocal_5850, iLocal_5934))
			{
				if (Local_491[30 /*40*/].f_37 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_491[30 /*40*/], ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), 15f, 1, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_491[30 /*40*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[30 /*40*/], 50, 1);
								PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_491[30 /*40*/], Local_5546, 5f, 0f, 5f, -5f, 0f, -5f, 15f, 0, 0);
								TASK::TASK_COMBAT_PED(Local_491[30 /*40*/], Local_5546, 0, 16);
								Local_491[30 /*40*/].f_35 = 1;
								Local_491[30 /*40*/].f_37 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_5833 > 4)
	{
		if (!PED::IS_PED_INJURED(Local_2692[29 /*40*/]))
		{
			if (GlobalFunc_588(&iLocal_5925, 12000))
			{
				if (Local_2692[29 /*40*/].f_35 == 0)
				{
					PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_2692[29 /*40*/], PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 30f, 0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_2692[29 /*40*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[29 /*40*/], 50, 1);
					Local_2692[29 /*40*/].f_35 = 1;
				}
			}
			if (GlobalFunc_588(&iLocal_5925, iLocal_5934))
			{
				if (Local_2692[29 /*40*/].f_37 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_2692[29 /*40*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[29 /*40*/], 50, 1);
								PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_2692[29 /*40*/], Local_5546, 5f, 0f, 5f, -5f, 0f, -5f, 20f, 0, 0);
								TASK::TASK_COMBAT_PED(Local_2692[29 /*40*/], Local_5546, 0, 16);
								Local_2692[29 /*40*/].f_35 = 1;
								Local_2692[29 /*40*/].f_37 = 1;
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_2692[30 /*40*/]))
		{
			if (GlobalFunc_588(&iLocal_5925, 14000))
			{
				if (Local_2692[30 /*40*/].f_35 == 0)
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_2692[30 /*40*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[30 /*40*/], 50, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[30 /*40*/], 51, 1);
					PED::SET_PED_COMBAT_RANGE(Local_2692[30 /*40*/], 0);
					Local_2692[30 /*40*/].f_35 = 1;
				}
			}
			if (GlobalFunc_588(&iLocal_5925, iLocal_5934))
			{
				if (Local_2692[30 /*40*/].f_37 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[30 /*40*/], ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), 20f, 1, 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_2692[30 /*40*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[30 /*40*/], 50, 1);
								PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_2692[30 /*40*/], Local_5546, 5f, 0f, 5f, -5f, 0f, -5f, 15f, 0, 0);
								TASK::TASK_COMBAT_PED(Local_2692[30 /*40*/], Local_5546, 0, 16);
								Local_2692[30 /*40*/].f_35 = 1;
								Local_2692[30 /*40*/].f_37 = 1;
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_2692[31 /*40*/]))
		{
			if (GlobalFunc_588(&iLocal_5925, 16000))
			{
				if (Local_2692[31 /*40*/].f_35 == 0)
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_2692[31 /*40*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[31 /*40*/], 50, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[31 /*40*/], 51, 1);
					PED::SET_PED_COMBAT_RANGE(Local_2692[31 /*40*/], 0);
					Local_2692[31 /*40*/].f_35 = 1;
				}
				if (GlobalFunc_588(&iLocal_5925, iLocal_5934))
				{
					if (Local_2692[31 /*40*/].f_37 == 0)
					{
						if (!PED::IS_PED_INJURED(Local_5546))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
								{
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2692[31 /*40*/], ENTITY::GET_ENTITY_COORDS(Local_4414[1 /*19*/], 1), 20f, 1, 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_2692[31 /*40*/], 2);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[31 /*40*/], 50, 1);
									PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_2692[31 /*40*/], Local_5546, 5f, 0f, 5f, -5f, 0f, -5f, 15f, 0, 0);
									TASK::TASK_COMBAT_PED(Local_2692[31 /*40*/], Local_5546, 0, 16);
									Local_2692[31 /*40*/].f_35 = 1;
									Local_2692[31 /*40*/].f_37 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (func_561(2))
		{
			iVar0 = 0;
			while (iVar0 < Local_2692)
			{
				if (Local_2692[iVar0 /*40*/].f_36 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_2692[iVar0 /*40*/]))
					{
						PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_2692[iVar0 /*40*/], PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 30f, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_2692[iVar0 /*40*/], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[iVar0 /*40*/], 50, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[iVar0 /*40*/], 13, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_2692[iVar0 /*40*/], 51, 1);
						PED::SET_PED_COMBAT_RANGE(Local_2692[iVar0 /*40*/], 0);
						TASK::TASK_COMBAT_PED(Local_2692[iVar0 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_2692[iVar0 /*40*/].f_35 = 1;
						Local_2692[iVar0 /*40*/].f_37 = 1;
						Local_2692[iVar0 /*40*/].f_36 = 1;
					}
				}
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < Local_491)
			{
				if (Local_491[iVar0 /*40*/].f_36 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_491[iVar1 /*40*/]))
					{
						PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_491[iVar1 /*40*/], PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 30f, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_491[iVar1 /*40*/], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[iVar1 /*40*/], 50, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[iVar1 /*40*/], 13, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_491[iVar1 /*40*/], 51, 1);
						PED::SET_PED_COMBAT_RANGE(Local_491[iVar1 /*40*/], 0);
						TASK::TASK_COMBAT_PED(Local_491[iVar1 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_491[iVar1 /*40*/].f_35 = 1;
						Local_491[iVar1 /*40*/].f_37 = 1;
						Local_491[iVar1 /*40*/].f_36 = 1;
					}
				}
				iVar1++;
			}
		}
	}
}


void func_573()//Position - 0x66B21
{
	STREAMING::REQUEST_PTFX_ASSET();
	STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("maverick"));
	STREAMING::REQUEST_COLLISION_AT_COORD(1693.43f, 3317.96f, 40.46f);
	if (!ENTITY::IS_ENTITY_DEAD(Local_4414[10 /*19*/]))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4414[10 /*19*/], 1);
	}
	if (STREAMING::HAS_PTFX_ASSET_LOADED() && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TREVOR_2_CHOPPER_EXPLOSION_TAIL", 0))
	{
		if (iLocal_5659 == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[10 /*19*/]))
			{
				Local_5920 = { ENTITY::GET_ENTITY_COORDS(Local_4414[10 /*19*/], 1) };
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4414[10 /*19*/], 1);
				if (Local_5920.f_2 < 43f)
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_4414[10 /*19*/]) || Local_5920.f_2 < 41.3f)
					{
						VEHICLE::SET_HELI_TAIL_EXPLODE_THROW_DASHBOARD(Local_4414[10 /*19*/], 0);
						uLocal_5092[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev2_heli_wreck", ENTITY::GET_ENTITY_COORDS(Local_4414[10 /*19*/], 0), 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						iLocal_5659 = 1;
						iLocal_5919 = MISC::GET_GAME_TIMER();
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_2_chopper_explode", Local_4414[10 /*19*/], "TREVOR_2_SOUNDS", 0, 0);
					}
				}
			}
		}
		else if (GlobalFunc_588(&iLocal_5919, 50))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_4414[10 /*19*/]))
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_trev2_heli_exp", 1704f, 3320f, 40f, -3.7f, 3.4f, -81.5f, 1065353216, 0, 0, 0);
				VEHICLE::EXPLODE_VEHICLE(Local_4414[10 /*19*/], 1, 0);
			}
		}
	}
}

void func_574()//Position - 0x66C8C
{
	if (!func_36("TRIGGERED VAN EARLY"))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1785.577f, 3325.365f, 39.6384f, 1766.687f, 3360.915f, 48.24609f, 22.25f, 0, 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_4414[26 /*19*/]))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(Local_4414[26 /*19*/]))
				{
					if (!PED::IS_PED_INJURED(Local_2692[29 /*40*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[29 /*40*/], 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, 1778.06f, 3328.92f, 40.29f, 20f);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
						TASK::TASK_PERFORM_SEQUENCE(Local_2692[29 /*40*/], uLocal_5080);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
					}
					if (!PED::IS_PED_INJURED(Local_2692[30 /*40*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[30 /*40*/], 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, 1778.06f, 3328.92f, 40.29f, 20f);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
						TASK::TASK_PERFORM_SEQUENCE(Local_2692[30 /*40*/], uLocal_5080);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
					}
					if (!PED::IS_PED_INJURED(Local_2692[31 /*40*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2692[31 /*40*/], 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_5080);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, 1778.06f, 3328.92f, 40.29f, 20f);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_5080);
						TASK::TASK_PERFORM_SEQUENCE(Local_2692[31 /*40*/], uLocal_5080);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_5080);
					}
					func_33("TRIGGERED VAN EARLY", 1);
				}
			}
		}
	}
}

void func_575()//Position - 0x66E3F
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		func_573();
	}
	switch (iLocal_5819)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
			{
				iLocal_5660 = 1;
			}
			else
			{
				iLocal_5660 = 0;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_4414[12 /*19*/], 1580.224f, 3352.752f, 34.92461f, 1560.872f, 3386.379f, 40.72059f, 19.5f, 0, 1, 0))
				{
					iLocal_5660 = 1;
				}
				else
				{
					iLocal_5660 = 0;
				}
			}
			if (iLocal_5660 == 1)
			{
				if (func_579("trv_2_mcs_4_concat", 15) && func_578(joaat("weapon_sniperrifle"), 0))
				{
					iLocal_5924 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 1, 0, 0, 0, 0);
					func_578(joaat("weapon_sniperrifle"), 1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_5924))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5924, "Trevors_weapon", 1, 0, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_4414[12 /*19*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_4414[12 /*19*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_4414[12 /*19*/], "Trevors_Quad", 0, 0, 0);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[12 /*19*/], 1, 1);
							VEHICLE::SET_VEHICLE_LIGHTS(Local_4414[12 /*19*/], 2);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_4414[10 /*19*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_4414[10 /*19*/], "Lost_heli", 0, 0, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_5449[0 /*27*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_5449[0 /*27*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_5449[0 /*27*/], "Pilot", 1, 0, 0);
						}
						else
						{
							PED::DELETE_PED(&(Local_5449[0 /*27*/]));
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_5449[1 /*27*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_5449[1 /*27*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_5449[1 /*27*/], "Lost_sniper", 1, 0, 0);
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5712))
							{
								iLocal_5712 = WEAPON::GET_WEAPON_OBJECT_FROM_PED(Local_5449[1 /*27*/], 1);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_5712))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_5712))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(iLocal_5712))
									{
										ENTITY::DETACH_ENTITY(iLocal_5712, 1, 1);
									}
									CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5712, "HC_Driver_Rifle", 1, WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle")), 0);
								}
							}
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lost_sniper", 3, joaat("g_m_y_lost_01"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "HC_Driver_Rifle", 3, WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle")), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lost_Mag", 3, WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_assaultrifle_clip_01")), 0);
						}
					}
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					GlobalFunc_589(&(Local_5449[0 /*27*/].f_2));
					GlobalFunc_589(&(Local_5449[1 /*27*/].f_2));
					GlobalFunc_8380(1, 1, 1, 0);
					GlobalFunc_4956();
					AUDIO::STOP_AUDIO_SCENE("TREVOR_2_SNIPE_MAIN");
					AUDIO::START_AUDIO_SCENE("TREVOR_2_HELI_CRASH");
					STREAMING::REQUEST_PTFX_ASSET();
					STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("maverick"));
					AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TREVOR_2_CHOPPER_EXPLOSION_TAIL", 0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					CUTSCENE::START_CUTSCENE(0);
					STREAMING::REQUEST_PTFX_ASSET();
					STREAMING::REQUEST_IPL("airfield");
					iLocal_5923 = 0;
					GlobalFunc_11046(2, "Shoot down heli cutscene", 0, 0, 0, 1);
					iLocal_5819++;
				}
				else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), joaat("player_two"));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_5449[0 /*27*/]) && !ENTITY::IS_ENTITY_DEAD(Local_5449[0 /*27*/]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Pilot", Local_5449[0 /*27*/], joaat("g_m_y_lost_01"));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_5449[1 /*27*/]) && !ENTITY::IS_ENTITY_DEAD(Local_5449[1 /*27*/]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lost_sniper", Local_5449[1 /*27*/], joaat("g_m_y_lost_01"));
					}
				}
			}
			else if (func_579("trv_2_mcs_4_concat", 23) && func_578(joaat("weapon_sniperrifle"), 0))
			{
				iLocal_5924 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 1, 0, 0, 0, 0);
				func_578(joaat("weapon_sniperrifle"), 1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5924))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5924, "Trevors_weapon", 1, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[12 /*19*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_4414[12 /*19*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_4414[12 /*19*/], "Trevors_Quad", 0, 0, 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[12 /*19*/], 1, 1);
						VEHICLE::SET_VEHICLE_LIGHTS(Local_4414[12 /*19*/], 2);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_4414[10 /*19*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_4414[10 /*19*/], "Lost_heli", 0, 0, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_5449[0 /*27*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5449[0 /*27*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_5449[0 /*27*/], "Pilot", 1, 0, 0);
					}
					else
					{
						PED::DELETE_PED(&(Local_5449[0 /*27*/]));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_5449[1 /*27*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5449[1 /*27*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_5449[1 /*27*/], "Lost_sniper", 1, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_5712))
						{
							iLocal_5712 = WEAPON::GET_WEAPON_OBJECT_FROM_PED(Local_5449[1 /*27*/], 1);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_5712))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_5712))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(iLocal_5712))
								{
									ENTITY::DETACH_ENTITY(iLocal_5712, 1, 1);
								}
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_5712, "HC_Driver_Rifle", 1, WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle")), 0);
							}
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lost_sniper", 3, joaat("g_m_y_lost_01"), 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "HC_Driver_Rifle", 3, WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle")), 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lost_Mag", 3, WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_assaultrifle_clip_01")), 0);
					}
				}
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				GlobalFunc_589(&(Local_5449[0 /*27*/].f_2));
				GlobalFunc_589(&(Local_5449[1 /*27*/].f_2));
				GlobalFunc_8380(1, 1, 1, 0);
				GlobalFunc_4956();
				AUDIO::STOP_AUDIO_SCENE("TREVOR_2_SNIPE_MAIN");
				AUDIO::START_AUDIO_SCENE("TREVOR_2_HELI_CRASH");
				STREAMING::REQUEST_PTFX_ASSET();
				STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("maverick"));
				AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TREVOR_2_CHOPPER_EXPLOSION_TAIL", 0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				CUTSCENE::START_CUTSCENE(0);
				STREAMING::REQUEST_PTFX_ASSET();
				STREAMING::REQUEST_IPL("airfield");
				iLocal_5923 = 0;
				GlobalFunc_11046(2, "Shoot down heli cutscene", 0, 0, 0, 1);
				iLocal_5819++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), joaat("player_two"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_5449[0 /*27*/]) && !ENTITY::IS_ENTITY_DEAD(Local_5449[0 /*27*/]))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Pilot", Local_5449[0 /*27*/], joaat("g_m_y_lost_01"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_5449[1 /*27*/]) && !ENTITY::IS_ENTITY_DEAD(Local_5449[1 /*27*/]))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lost_sniper", Local_5449[1 /*27*/], joaat("g_m_y_lost_01"));
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_5525[0 /*20*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_5525[0 /*20*/]));
				}
				if (iLocal_5923 == 0)
				{
					if (CLOCK::GET_CLOCK_HOURS() < 4)
					{
						CLOCK::ADD_TO_CLOCK_TIME(2, 0, 0);
					}
					else if (CLOCK::GET_CLOCK_HOURS() < 5)
					{
						CLOCK::ADD_TO_CLOCK_TIME(0, 15, 0);
					}
					ENTITY::SET_ENTITY_COORDS(Local_5546, 1681.34f, 3297.01f, 41.03f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_5546, -22.71f);
					iLocal_5923 = 1;
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_5819++;
			}
			break;
		
		case 2:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lost_heli", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_4414[10 /*19*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4414[10 /*19*/], 50);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[10 /*19*/], 50f);
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4414[10 /*19*/]);
						VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(Local_4414[10 /*19*/], 0, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[12 /*19*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_4414[12 /*19*/]))
					{
						VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Local_4414[12 /*19*/], 1, 0, 1);
					}
				}
				if (iLocal_5660 == 1)
				{
					if (iLocal_5648 == 0 || CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_4414[12 /*19*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_4414[12 /*19*/]))
								{
									PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[12 /*19*/], -1);
								}
							}
						}
					}
				}
				else if (iLocal_5648 == 0 || CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 4000, 237.4839f, 0, 0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 1, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_4414[10 /*19*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_4414[10 /*19*/], 50);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_4414[10 /*19*/], 50f);
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4414[10 /*19*/]);
						VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(Local_4414[10 /*19*/], 0, 1);
						STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("maverick"));
						STREAMING::REQUEST_COLLISION_AT_COORD(1693.43f, 3317.96f, 40.46f);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_4414[10 /*19*/], 1);
					}
				}
				GlobalFunc_8380(0, 1, 1, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				STREAMING::REMOVE_ANIM_SET("move_ped_crouched");
				STREAMING::REMOVE_ANIM_SET("move_ped_crouched_strafing");
				STREAMING::REMOVE_ANIM_DICT("guard_reactions");
				STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_2");
				STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_3");
				STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_4");
				STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_4b");
				STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_5");
				STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_5b_p2");
				STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_5c");
				STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_6");
				STREAMING::REMOVE_ANIM_DICT("missbigscore2big_2");
				STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_7");
				STREAMING::REMOVE_ANIM_DICT("misstrevor2mcs_3_b");
				STREAMING::REQUEST_ANIM_DICT("misstrevor2ron_basic_moves");
				STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@d");
				STREAMING::REMOVE_ANIM_DICT("missexile2reactions_to_gun_fire@standing@idle_a");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5712))
				{
					OBJECT::DELETE_OBJECT(&iLocal_5712);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_5924))
				{
					OBJECT::DELETE_OBJECT(&iLocal_5924);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_sniperrifle")));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle")));
				PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.5f, 1);
				RECORDING::_0x81CBAE94390F9F89();
				func_56();
				AUDIO::STOP_AUDIO_SCENE("TREVOR_2_HELI_CRASH");
			}
			else if (iLocal_5648 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_5648 = 1;
				}
			}
			break;
	}
}



int func_578(int iParam0, bool bParam1)//Position - 0x6783A
{
	int iVar0;
	
	iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(iParam0);
	if (!bParam1)
	{
		STREAMING::REQUEST_MODEL(iVar0);
		return STREAMING::HAS_MODEL_LOADED(iVar0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	return 0;
}

int func_579(char* sParam0, int iParam1)//Position - 0x67869
{
	if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sParam0))
	{
		return 1;
	}
	else
	{
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		if (iParam1 == 1)
		{
			CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sParam0, iParam1, 8);
		}
	}
	return 0;
}

void func_580()//Position - 0x678A8
{
	func_609();
	func_608();
	func_606(&Local_5546);
	func_605(&Local_5614);
	func_604(&Local_5593, iLocal_5916);
	func_602(&iLocal_5692);
	func_601(&iLocal_5693);
	func_600(&(Local_5123[0 /*27*/]), &iLocal_5697);
	func_598(&(Local_5123[1 /*27*/]), &iLocal_5698);
	func_597(&(Local_5123[2 /*27*/]), &iLocal_5699);
	func_595(&(Local_5123[3 /*27*/]), &iLocal_5700);
	func_594(&(Local_5123[4 /*27*/]), &iLocal_5701);
	func_593(&(Local_5123[5 /*27*/]), &iLocal_5702);
	func_591(&(Local_5123[6 /*27*/]), &iLocal_5703);
	func_588(&(Local_5123[7 /*27*/]), &iLocal_5704);
	func_586();
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
	if (!func_36("SNIPE REPLAY SET"))
	{
		PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1681.287f, 3289.904f, 40.413f, 2.9f, 2.2f, 1.4f, -5.26f, 0, 7);
		PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1682.755f, 3293.533f, 40.568f, 1.2f, 1.2f, 1.2f, -2.584f, 0, 7);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
		{
			VEHICLE::SET_VEHICLE_LIGHTS(Local_4414[11 /*19*/], 1);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		GlobalFunc_11046(1, "Cover Ron with Sniper Rifle", 0, 0, 0, 1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_TRAINS_VOLUME"))
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_2_TRAINS_VOLUME");
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_SNIPE_MAIN"))
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_2_SNIPE_MAIN");
		}
		iLocal_5916 = 0;
		iLocal_5660 = 0;
		iLocal_5917 = 0;
		MISC::SET_INSTANCE_PRIORITY_HINT(3);
		WEAPON::SET_FLASH_LIGHT_FADE_DISTANCE(400f);
		func_33("SNIPE REPLAY SET", 1);
	}
	switch (iLocal_5819)
	{
		case 0:
			if (func_585())
			{
				if (GlobalFunc_74("SJC_EQUIP"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (MISC::GET_PROFILE_SETTING(17) == 1)
				{
					if (!func_36("SJC_SNIPEH1"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_5546))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_5546))
							{
								GlobalFunc_159("SJC_SNIPEH1", -1);
								func_33("SJC_SNIPEH1", 1);
							}
						}
					}
				}
				else if (!func_36("SJC_SNIPEH2"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_5546))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_5546))
						{
							GlobalFunc_159("SJC_SNIPEH2", -1);
							func_33("SJC_SNIPEH2", 1);
						}
					}
				}
			}
			else if (!func_36("SJC_EQUIP"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_5546))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5546))
					{
						GlobalFunc_159("SJC_EQUIP", -1);
						func_33("SJC_EQUIP", 1);
					}
				}
			}
			if (!func_36("H_SNIPESTAT"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_5123[0 /*27*/]))
				{
					if (PED::IS_PED_INJURED(Local_5123[0 /*27*/]))
					{
						GlobalFunc_159("H_SNIPESTAT", -1);
						func_33("H_SNIPESTAT", 1);
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_5713))
			{
				if (!func_584(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_5649 = 1;
					uLocal_5713 = HUD::ADD_BLIP_FOR_COORD(Local_5645);
					if (!func_36("SJC_RETRW"))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_5105();
						}
						if (GlobalFunc_5172(&Local_5875, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						func_582("SJC_RETRW", 7500, 1);
					}
				}
			}
			else if (func_584(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_663("SJC_RETRW", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				HUD::REMOVE_BLIP(&uLocal_5713);
				iLocal_5649 = 0;
			}
			if (!func_36("SJC_SNIPEG1"))
			{
				if (func_584(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_5546))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_5546))
						{
							if (Local_5546.f_25 == 7)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5546, "misstrevor2ig_2", "idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5546, "misstrevor2ig_2", "intro", 3))
								{
									if (!func_581(Local_5546, 1094713344, 1047233823, 1055957975))
									{
										func_582("SJC_SNIPEG1", 7500, 1);
									}
								}
							}
						}
					}
				}
			}
			else if (func_581(Local_5546, 1094713344, 1047233823, 1055957975))
			{
				if (GlobalFunc_663("SJC_SNIPEG1", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
			}
			if (!func_36("SJC_ENEM1G_0"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_5123[0 /*27*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5123[0 /*27*/]))
					{
						if (func_36("TR_sn01p"))
						{
							if (!GlobalFunc_111() && !GlobalFunc_5172(&Local_5875, 2))
							{
								if (func_584(PLAYER::PLAYER_PED_ID()))
								{
									func_582("SJC_ENEM1G", 7500, 0);
									func_33("SJC_ENEM1G_0", 1);
								}
							}
						}
					}
				}
			}
			else if (ENTITY::IS_ENTITY_DEAD(Local_5123[0 /*27*/]))
			{
				if (GlobalFunc_663("SJC_ENEM1G", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
			}
			if (!func_36("SJC_LIGHTS"))
			{
				if (func_36("TR2_SHOOTL"))
				{
					GlobalFunc_159("SJC_LIGHTS", 10000);
					func_33("SJC_LIGHTS", 1);
				}
			}
			else if (func_36("TR2_LIGHTS"))
			{
				if (GlobalFunc_74("SJC_LIGHTS"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
			{
				if (func_36("TR_pl4p"))
				{
					if (!GlobalFunc_111() && !GlobalFunc_5172(&Local_5875, 2))
					{
						if (!func_36("SJC_KPILOT"))
						{
							RECORDING::_0x293220DA1B46CEBC(8f, 3f, 4);
							if (ENTITY::DOES_ENTITY_EXIST(Local_5449[0 /*27*/]) && !ENTITY::IS_ENTITY_DEAD(Local_5449[0 /*27*/]))
							{
								GlobalFunc_5884("SJC_KPILOT");
							}
							func_33("SJC_KPILOT", 1);
						}
					}
				}
				else if (func_36("SJC_PINDWN2H"))
				{
					GlobalFunc_159("SJC_PINDWN2H", -1);
					func_33("SJC_PINDWN2H", 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[12 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
					{
						iLocal_5660 = 1;
					}
					else
					{
						iLocal_5660 = 0;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_4414[12 /*19*/], 1580.224f, 3352.752f, 34.92461f, 1560.872f, 3386.379f, 40.72059f, 19.5f, 0, 1, 0))
						{
							iLocal_5660 = 1;
						}
						else
						{
							iLocal_5660 = 0;
						}
					}
				}
				if (iLocal_5660 == 1)
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("trv_2_mcs_4_concat", 15, 8);
				}
				else
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("trv_2_mcs_4_concat", 23, 8);
				}
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), joaat("player_two"));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_5449[0 /*27*/]) && !ENTITY::IS_ENTITY_DEAD(Local_5449[0 /*27*/]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Pilot", Local_5449[0 /*27*/], joaat("g_m_y_lost_01"));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_5449[1 /*27*/]) && !ENTITY::IS_ENTITY_DEAD(Local_5449[1 /*27*/]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lost_sniper", Local_5449[1 /*27*/], joaat("g_m_y_lost_01"));
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_5449[0 /*27*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_5449[0 /*27*/]))
				{
					if (iLocal_5657 == 0)
					{
						GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "TR2_DXAA", "TREVOR", 3);
						AUDIO::STOP_AUDIO_SCENE("TREVOR_2_HELI_APPROACH");
						STREAMING::NEW_LOAD_SCENE_STOP();
						HUD::CLEAR_HELP(1);
						if (STREAMING::STREAMVOL_IS_VALID(uLocal_5115))
						{
							STREAMING::STREAMVOL_DELETE(uLocal_5115);
						}
						RECORDING::_0x293220DA1B46CEBC(2f, 0f, 4);
						func_56();
						HUD::CLEAR_PRINTS();
					}
				}
			}
			break;
	}
}

int func_581(int iParam0, float fParam1, float fParam2, float fParam3)//Position - 0x67F9D
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iParam0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iParam0))
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
								{
									if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 0.001f))
									{
										if (CAM::GET_GAMEPLAY_CAM_FOV() < fParam1)
										{
											GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, 1), &fVar1, &fVar2);
											if (((fVar1 > (0.5f - fParam2) && fVar1 < (0.5f + fParam2)) && fVar2 > (0.5f - fParam3)) && fVar2 < (0.5f + fParam3))
											{
												return 1;
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
	return 0;
}

void func_582(char* sParam0, int iParam1, bool bParam2)//Position - 0x6807C
{
	if (!func_36(sParam0))
	{
		GlobalFunc_2523(sParam0, iParam1, 1);
		func_33(sParam0, bParam2);
	}
}


int func_584(int iParam0)//Position - 0x680B8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_5645, 1.8f, 1.8f, 1.8f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_585()//Position - 0x680F8
{
	int iVar0;
	
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper"))
		{
			return 1;
		}
	}
	return 0;
}

void func_586()//Position - 0x6812C
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_5546))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_5546))
		{
			if (iLocal_5657 == 1)
			{
				if (!func_36("TR2_ALERT"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_ALERT", 7, 0, 0, 0))
							{
								func_33("TR2_ALERT", 1);
							}
						}
					}
					else
					{
						GlobalFunc_4956();
					}
				}
			}
			else
			{
				if (!func_36("TR_pl0"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_5546))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_5546))
								{
									if (Local_5546.f_25 == 6)
									{
										if (ENTITY::DOES_ENTITY_EXIST(Local_4414[11 /*19*/]))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_4414[11 /*19*/]))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[11 /*19*/]))
												{
													if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[11 /*19*/]) > 13000f)
													{
														if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl0", 7, 0, 0, 0))
														{
															func_33("TR_pl0", 1);
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
				if (!func_36("TR_ronwav"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_5546))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_5546))
						{
							if (Local_5546.f_25 == 7)
							{
								if (Local_5546.f_16 == 0)
								{
									Local_5546.f_15 = 1000;
									Local_5546.f_16 = MISC::GET_GAME_TIMER();
								}
								else if (GlobalFunc_2521(Local_5546.f_15, Local_5546.f_16))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_5875, 1))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_ronwav", 7, 0, 0, 0))
											{
												Local_5546.f_15 = 10000;
												Local_5546.f_16 = MISC::GET_GAME_TIMER();
											}
										}
										else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5546))
										{
											GlobalFunc_5653(Local_5546, "TR2_QMAA", "NERVOUSRON", 4);
											Local_5546.f_15 = 10000;
											Local_5546.f_16 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
				}
				if (!func_36("TR_sf01"))
				{
					if (TASK::IS_PED_WALKING(Local_5546) || TASK::IS_PED_RUNNING(Local_5546))
					{
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_5546, 1), 2.5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_5546, 1), 5f, 1, 1))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_sf01", 7, 0, 0, 0))
									{
									}
								}
								else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5546))
								{
									GlobalFunc_5653(Local_5546, "TR2_ADAG", "NERVOUSRON", 4);
								}
							}
						}
					}
				}
				if (Local_5546.f_25 == 9)
				{
					if (!func_36("TR_RONCOW"))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5546, "misstrevor2ig_5c", "intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5546, "misstrevor2ig_5c", "plead_loop", 3))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_RONCOW", 7, 0, 0, 0))
									{
										func_33("TR_RONCOW", 1);
									}
								}
								else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5546))
								{
									GlobalFunc_5653(Local_5546, "TR2_ACAA", "NERVOUSRON", 4);
									func_33("TR_RONCOW", 1);
								}
							}
							else
							{
								GlobalFunc_4956();
							}
						}
					}
				}
				else if (func_36("TR_RONCOW"))
				{
					func_33("TR_RONCOW", 0);
				}
				if (!func_36("TR_pl1n"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_5546))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_5546))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5546, "misstrevor2ig_2", "idle", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5546, "misstrevor2ig_2", "intro", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_5546, "misstrevor2ig_2", "intro") > 0.7f))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_5875, 1))
									{
										if (func_584(PLAYER::PLAYER_PED_ID()))
										{
											if (func_581(Local_5546, 1094713344, 1047233823, 1055957975))
											{
												if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl1n", 7, 0, 0, 0))
												{
													RECORDING::_0x293220DA1B46CEBC(3f, 3f, 4);
													func_33("TR_pl1n", 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (Local_5546.f_25 != 9)
				{
					if (!func_36("TR_sn01t"))
					{
						if (!func_36("TR_pl1ng"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (func_581(Local_5546, 1094713344, 1047233823, 1055957975))
									{
										if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl1ng", 7, 0, 0, 0))
										{
											func_33("TR_pl1ng", 1);
										}
									}
								}
							}
						}
					}
					else if (!func_36("TR_pl1ng"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_5875, 1))
							{
								if (func_581(Local_5546, 1094713344, 1047233823, 1055957975))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_MOVE2", 7, 0, 0, 0))
									{
										func_33("TR_pl1ng", 1);
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_5123[0 /*27*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5123[0 /*27*/]))
					{
						if (!func_36("TR_sn01p"))
						{
							if (Local_5546.f_25 == 8)
							{
								if (Local_5546.f_18 == 1)
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5546, "misstrevor2ig_3", "point", 3))
									{
										if (!GlobalFunc_111())
										{
											if (!GlobalFunc_5172(&Local_5875, 1))
											{
												if (Local_5123[0 /*27*/].f_25 == 3)
												{
													if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_sn01p", 7, 0, 0, 0))
													{
														RECORDING::_0x293220DA1B46CEBC(1f, 3f, 4);
														func_33("TR_sn01p", 1);
													}
												}
												else
												{
													func_33("TR_sn01p", 1);
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if (!func_36("TR2_TREVMISS"))
							{
								if (Local_5123[0 /*27*/].f_25 == 2)
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_5875, 1))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_TREVMISS", 7, 0, 0, 0))
											{
												func_33("TR2_TREVMISS", 1);
											}
										}
									}
									else
									{
										GlobalFunc_4956();
									}
								}
							}
							if (!func_36("TR_pl2"))
							{
								if (func_36("SJC_ENEM1G_0"))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5546, "misstrevor2ig_3", "point", 3))
									{
										if (!GlobalFunc_111())
										{
											if (!GlobalFunc_5172(&Local_5875, 1))
											{
												if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl2", 7, 0, 0, 0))
												{
													Local_5546.f_16 = MISC::GET_GAME_TIMER();
													func_33("TR_pl2", 1);
												}
											}
										}
									}
								}
							}
							else if (!func_36("TR_POINT"))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5546, "misstrevor2ig_3", "point", 3))
								{
									if (GlobalFunc_2521(8000, Local_5546.f_16))
									{
										if (!GlobalFunc_111())
										{
											if (!GlobalFunc_5172(&Local_5875, 1))
											{
												if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_POINT", 7, 0, 0, 0))
												{
													Local_5546.f_16 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
							}
						}
					}
					if (ENTITY::IS_ENTITY_DEAD(Local_5123[0 /*27*/]))
					{
						if (!func_36("TR_pl1b"))
						{
							if (func_36("TR_sn01p"))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_5875, 1))
									{
										if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl1b", 7, 0, 0, 0))
										{
											RECORDING::_0x293220DA1B46CEBC(1.5f, 3f, 4);
											func_33("TR_pl1b", 1);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5546))
									{
										GlobalFunc_5653(Local_5546, "TR2_AVAA", "NERVOUSRON", 4);
										func_33("TR_pl1b", 1);
									}
								}
								else
								{
									GlobalFunc_4956();
								}
							}
						}
						if (!func_36("TR_sn01t"))
						{
							if (!func_36("TR_sn01p"))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_5875, 1))
									{
										if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_sn01t", 7, 0, 0, 0))
										{
											func_33("TR_sn01t", 1);
										}
									}
								}
							}
						}
						if (!func_36("TR_MOVE"))
						{
							if (func_36("TR_pl1b") || func_36("TR_sn01t"))
							{
								if ((!GlobalFunc_111() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5546)) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
								{
									if (!GlobalFunc_5172(&Local_5875, 1))
									{
										if (!func_36("TR_MOVE"))
										{
											if (func_581(Local_5546, 1094713344, 1047233823, 1055957975))
											{
												if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_MOVE2", 7, 0, 0, 0))
												{
													func_33("TR_MOVE", 1);
												}
											}
											else if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_MOVE", 7, 0, 0, 0))
											{
												func_33("TR_MOVE", 1);
											}
										}
									}
								}
							}
						}
					}
					else if (Local_5546.f_25 == 9)
					{
						if (!func_36("TR2_CAUGHT_0"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_CAUGHT", 7, 0, 0, 0))
									{
										func_33("TR2_CAUGHT_0", 1);
									}
								}
								else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5546))
								{
									GlobalFunc_5653(Local_5546, "TR2_EZAA", "NERVOUSRON", 4);
									func_33("TR2_CAUGHT_0", 1);
								}
							}
							else
							{
								GlobalFunc_4956();
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_5123[1 /*27*/]))
				{
					if (!func_36("TR2_DRIVEIN"))
					{
						if (Local_5546.f_25 == 8)
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_5123[1 /*27*/]))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5546, "misstrevor2ig_4", "hide", 3))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_5875, 1))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_DRIVEIN", 7, 0, 0, 0))
											{
												func_33("TR2_DRIVEIN", 1);
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (!func_36("TR2_SHOOTL") && !func_36("TR2_SHOOTLE"))
						{
							if (Local_5614[0 /*10*/].f_8 == 0 || Local_5614[1 /*10*/].f_8 == 0)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_5875, 1))
									{
										if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_SHOOTL", 7, 0, 0, 0))
										{
											iLocal_5709 = iLocal_5688;
											iLocal_5710 = iLocal_5687;
											Local_5546.f_16 = MISC::GET_GAME_TIMER();
											func_33("TR2_SHOOTL", 1);
										}
									}
								}
							}
							else if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_SHOOTLE", 7, 0, 0, 0))
									{
										func_33("TR2_SHOOTLE", 1);
									}
								}
							}
						}
						else
						{
							if (func_36("TR2_SHOOTL"))
							{
								if (iLocal_5709 != iLocal_5688)
								{
									if (!func_36("TR2_LIGHTS"))
									{
										if (Local_5614[0 /*10*/].f_8 == 1 && Local_5614[1 /*10*/].f_8 == 1)
										{
											if (!func_36("TR2_BREAK2"))
											{
												if (func_36("TR2_BREAK"))
												{
													if (!GlobalFunc_111())
													{
														if (!GlobalFunc_5172(&Local_5875, 1))
														{
															if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_BREAK2", 7, 0, 0, 0))
															{
																func_33("TR2_BREAK2", 1);
																func_33("TR2_WRONG", 1);
																RECORDING::_0x293220DA1B46CEBC(5f, 15f, 4);
															}
														}
														else
														{
															GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "TR2_QWAA", "TREVOR", 3);
															func_33("TR2_BREAK2", 1);
															func_33("TR2_WRONG", 1);
														}
													}
												}
											}
											if (!GlobalFunc_111())
											{
												if (!GlobalFunc_5172(&Local_5875, 1))
												{
													if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_LIGHTS", 7, 0, 0, 0))
													{
														iLocal_5709 = iLocal_5688;
														iLocal_5710 = iLocal_5687;
														func_33("TR2_LIGHTS", 1);
														func_33("TR2_BREAK", 1);
														func_33("TR2_BREAK2", 1);
														func_33("TR2_WRONG", 1);
													}
												}
											}
										}
									}
									if (!func_36("TR2_BREAK"))
									{
										if (Local_5614[0 /*10*/].f_8 == 1 || Local_5614[1 /*10*/].f_8 == 1)
										{
											if (iLocal_5710 != iLocal_5687)
											{
												if (!GlobalFunc_111())
												{
													if (!GlobalFunc_5172(&Local_5875, 1))
													{
														if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_BREAK", 7, 0, 0, 0))
														{
															iLocal_5709 = iLocal_5688;
															iLocal_5710 = iLocal_5687;
															Local_5546.f_16 = MISC::GET_GAME_TIMER();
															func_33("TR2_BREAK", 1);
														}
													}
													else
													{
														GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "TR2_QVAA", "TREVOR", 3);
														iLocal_5709 = iLocal_5688;
														iLocal_5710 = iLocal_5687;
														Local_5546.f_16 = MISC::GET_GAME_TIMER();
														func_33("TR2_BREAK", 1);
													}
												}
											}
										}
									}
									if (!func_36("TR2_WRONG"))
									{
										if (Local_5614[2 /*10*/].f_8 == 1)
										{
											if (iLocal_5710 == iLocal_5687)
											{
												if (!GlobalFunc_111())
												{
													if (!GlobalFunc_5172(&Local_5875, 1))
													{
														if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_WRONG", 7, 0, 0, 0))
														{
															iLocal_5709 = iLocal_5688;
															iLocal_5710 = iLocal_5687;
															Local_5546.f_16 = MISC::GET_GAME_TIMER();
															func_33("TR2_WRONG", 1);
														}
													}
												}
											}
										}
									}
								}
								if (!func_36("TR2_LITOUT"))
								{
									if (Local_5614[0 /*10*/].f_8 == 0 || Local_5614[1 /*10*/].f_8 == 0)
									{
										if (GlobalFunc_2521(6000, Local_5546.f_16))
										{
											if (!GlobalFunc_111())
											{
												if (!GlobalFunc_5172(&Local_5875, 1))
												{
													if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_LITOUT", 7, 0, 0, 0))
													{
														Local_5546.f_16 = MISC::GET_GAME_TIMER();
													}
												}
											}
										}
									}
								}
							}
							if (func_36("TR2_SHOOTLE"))
							{
								if (!func_36("TR2_LIGHTSE"))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_5875, 1))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_LIGHTSE", 7, 0, 0, 0))
											{
												func_33("TR2_LIGHTSE", 1);
											}
										}
									}
								}
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_5123[1 /*27*/]))
						{
							if (!func_36("TR_pl2ap"))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5123[1 /*27*/], "misstrevor2ig_4b", "biker_on_phone", 3) || fLocal_5684 >= 18000f)
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_5875, 1))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl2ap", 7, 0, 0, 0))
											{
												func_33("TR_pl2ap", 1);
											}
										}
									}
								}
							}
							if (!func_36("TR_BODY 1"))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5123[1 /*27*/], "guard_reactions", "med_down", 3))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_5875, 1))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_BODY", 7, 0, 0, 0))
											{
												func_33("TR_BODY 1", 1);
											}
										}
									}
								}
							}
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5711))
							{
								if (!func_36("TR_pl2bi"))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_5875, 1))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl2bi", 7, 0, 0, 0))
											{
												func_33("TR_pl2bi", 1);
											}
										}
									}
								}
								else if (!func_36("TR2_OUTVAN"))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_5875, 1))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_OUTVAN", 7, 0, 0, 0))
											{
												func_33("TR2_OUTVAN", 1);
											}
										}
									}
								}
								else if (!func_36("TR_pl2b"))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_5875, 1))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl2b", 7, 0, 0, 0))
											{
												func_33("TR_pl2b", 1);
											}
										}
									}
								}
							}
						}
						if (ENTITY::IS_ENTITY_DEAD(Local_5123[1 /*27*/]))
						{
							if (!func_36("Delay"))
							{
								Local_5546.f_16 = MISC::GET_GAME_TIMER();
								func_33("Delay", 1);
							}
							else if (GlobalFunc_588(&(Local_5546.f_16), 1000))
							{
								if (!func_36("TR_pl1c"))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(Local_5123[1 /*27*/], 0))
									{
										if (!GlobalFunc_111())
										{
											if (!GlobalFunc_5172(&Local_5875, 1))
											{
												if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl1c", 7, 0, 0, 0))
												{
													RECORDING::_0x293220DA1B46CEBC(2f, 2f, 4);
													func_33("TR_pl1c", 1);
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
						else if (Local_5546.f_25 == 9)
						{
							if (!func_36("TR2_CAUGHT_1"))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_5875, 1))
									{
										if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_CAUGHT", 7, 0, 0, 0))
										{
											func_33("TR2_CAUGHT_1", 1);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5546))
									{
										GlobalFunc_5653(Local_5546, "TR2_EZAA", "NERVOUSRON", 4);
										func_33("TR2_CAUGHT_1", 1);
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
				if (ENTITY::DOES_ENTITY_EXIST(Local_5123[2 /*27*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5123[2 /*27*/]))
					{
						if (!func_36("TR_guytow"))
						{
							if (func_36("TR_pl1c"))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_5875, 1))
									{
										if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_guytow", 7, 0, 0, 0))
										{
											func_33("TR_guytow", 1);
										}
									}
								}
							}
						}
						else if (!func_36("TR_pl3"))
						{
							Local_5546.f_16 = MISC::GET_GAME_TIMER();
							func_33("TR_pl3", 1);
						}
						else if (!func_36("TR_look2"))
						{
							if (GlobalFunc_2521(6000, Local_5546.f_16))
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_look2", 7, 0, 0, 0))
									{
										Local_5546.f_16 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (ENTITY::IS_ENTITY_DEAD(Local_5123[2 /*27*/]))
					{
						if (func_36("TR_guytow"))
						{
							if (!func_36("TR_pl3aa_1"))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_5875, 1))
									{
										if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl3aa", 7, 0, 0, 0))
										{
											RECORDING::_0x293220DA1B46CEBC(2f, 3f, 4);
											func_33("TR_pl3aa_1", 1);
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
					else if (Local_5546.f_25 == 9)
					{
						if (!func_36("TR2_CAUGHT_2"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_CAUGHT", 7, 0, 0, 0))
									{
										func_33("TR2_CAUGHT_2", 1);
									}
								}
								else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5546))
								{
									GlobalFunc_5653(Local_5546, "TR2_EZAA", "NERVOUSRON", 4);
									func_33("TR2_CAUGHT_2", 1);
								}
							}
							else
							{
								GlobalFunc_4956();
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_5123[3 /*27*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5123[3 /*27*/]))
					{
						if (!func_36("TR_pl3ap"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl3ap", 7, 0, 0, 0))
									{
										func_33("TR_pl3ap", 1);
									}
								}
							}
						}
						else if (!func_36("TR2_TBOTTOM"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_TBOTTOM", 7, 0, 0, 0))
									{
										func_33("TR2_TBOTTOM", 1);
									}
								}
							}
						}
					}
					if (ENTITY::IS_ENTITY_DEAD(Local_5123[3 /*27*/]))
					{
						if (!func_36("TR_pl1d"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl1d", 7, 0, 0, 0))
									{
										func_33("TR_pl1d", 1);
									}
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
					}
					else if (Local_5546.f_25 == 9)
					{
						if (!func_36("TR2_CAUGHT_3"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_CAUGHT", 7, 0, 0, 0))
									{
										func_33("TR2_CAUGHT_3", 1);
									}
								}
								else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5546))
								{
									GlobalFunc_5653(Local_5546, "TR2_EZAA", "NERVOUSRON", 4);
									func_33("TR2_CAUGHT_3", 1);
								}
							}
							else
							{
								GlobalFunc_4956();
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_5123[4 /*27*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5123[4 /*27*/]))
					{
						if (func_36("TR_guytow2b"))
						{
							if (!func_36("TR_BODY 4"))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5123[4 /*27*/], "guard_reactions", "med_down", 3))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_5875, 1))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_BODY", 7, 0, 0, 0))
											{
												func_33("TR_BODY 4", 1);
											}
										}
									}
								}
							}
						}
						if (!func_36("TR_guytow2b"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_guytow2b", 7, 0, 0, 0))
									{
										Local_5546.f_16 = MISC::GET_GAME_TIMER();
										func_33("TR_guytow2b", 1);
									}
								}
							}
						}
						else if (!func_36("TR_look2"))
						{
							if (GlobalFunc_2521(6000, Local_5546.f_16))
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_look2", 7, 0, 0, 0))
									{
										Local_5546.f_16 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (ENTITY::IS_ENTITY_DEAD(Local_5123[4 /*27*/]))
					{
						if (!func_36("TR_pl3aa_2"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl3aa", 7, 0, 0, 0))
									{
										func_33("TR_pl3aa_2", 1);
									}
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
					}
					else if (Local_5546.f_25 == 9)
					{
						if (!func_36("TR2_CAUGHT_4"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_CAUGHT", 7, 0, 0, 0))
									{
										func_33("TR2_CAUGHT_4", 1);
									}
								}
								else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5546))
								{
									GlobalFunc_5653(Local_5546, "TR2_EZAA", "NERVOUSRON", 4);
									func_33("TR2_CAUGHT_4", 1);
								}
							}
							else
							{
								GlobalFunc_4956();
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_5123[5 /*27*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5123[5 /*27*/]))
					{
						if (!func_36("TR_pl3a1"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl3a1", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(2f, 4f, 4);
										func_33("TR_pl3a1", 1);
									}
								}
							}
						}
						else if (!func_36("TR_pl3a4"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl3a4", 7, 0, 0, 0))
									{
										iLocal_5915 = MISC::GET_GAME_TIMER();
										func_33("TR_pl3a4", 1);
									}
								}
							}
						}
						else if (!func_36("TR_OUT"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_588(&iLocal_5915, 12000))
									{
										if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_OUT", 7, 0, 0, 0))
										{
											func_33("TR_OUT", 1);
										}
									}
								}
							}
						}
					}
					if (ENTITY::IS_ENTITY_DEAD(Local_5123[5 /*27*/]))
					{
						if (!func_36("TR_pl1e"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl1b", 7, 0, 0, 0))
									{
										func_33("TR_pl1e", 1);
									}
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
					}
					else if (Local_5546.f_25 == 9)
					{
						if (!func_36("TR2_CAUGHT_5"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_CAUGHT", 7, 0, 0, 0))
									{
										func_33("TR2_CAUGHT_5", 1);
									}
								}
								else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5546))
								{
									GlobalFunc_5653(Local_5546, "TR2_EZAA", "NERVOUSRON", 4);
									func_33("TR2_CAUGHT_5", 1);
								}
							}
							else
							{
								GlobalFunc_4956();
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_5123[6 /*27*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5123[6 /*27*/]))
					{
						if (func_36("TR_SECGUY"))
						{
							if (!func_36("TR_BODY 6"))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5123[6 /*27*/], "guard_reactions", "med_down", 3))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_5875, 1))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_BODY", 7, 0, 0, 0))
											{
												RECORDING::_0x293220DA1B46CEBC(2f, 3f, 4);
												func_33("TR_BODY 6", 1);
											}
										}
									}
								}
							}
						}
						if (!func_36("TR_SECGUY"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_SECGUY", 7, 0, 0, 0))
									{
										func_33("TR_SECGUY", 1);
									}
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
					}
					if (ENTITY::IS_ENTITY_DEAD(Local_5123[6 /*27*/]))
					{
						if (!func_36("TR_pl3c"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl1b", 7, 0, 0, 0))
									{
										func_33("TR_pl3c", 1);
									}
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
					}
					else if (Local_5546.f_25 == 9)
					{
						if (!func_36("TR2_CAUGHT_6"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_CAUGHT", 7, 0, 0, 0))
									{
										func_33("TR2_CAUGHT_6", 1);
									}
								}
								else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5546))
								{
									GlobalFunc_5653(Local_5546, "TR2_EZAA", "NERVOUSRON", 4);
									func_33("TR2_CAUGHT_6", 1);
								}
							}
							else
							{
								GlobalFunc_4956();
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_5123[7 /*27*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_5123[7 /*27*/]))
					{
						if (!func_36("TR_SOME"))
						{
							if (fLocal_5685 > 4000f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_5875, 1))
									{
										if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_SOME", 7, 0, 0, 0))
										{
											func_33("TR_SOME", 1);
										}
									}
								}
							}
						}
						else if (!func_36("TR2_RONSPOT18"))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5525[0 /*20*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5525[0 /*20*/]))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_5875, 1))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_RONSPOT1", 7, 0, 0, 0))
											{
												func_33("TR2_RONSPOT18", 1);
											}
										}
									}
								}
							}
						}
					}
					if (ENTITY::IS_ENTITY_DEAD(Local_5123[7 /*27*/]))
					{
						if (!func_36("TR_pl1f"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl1f", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(2f, 3f, 4);
										func_33("TR_pl1f", 1);
									}
								}
							}
						}
					}
					else if (Local_5546.f_25 == 9)
					{
						if (!func_36("TR2_CAUGHT_7"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_CAUGHT", 7, 0, 0, 0))
									{
										func_33("TR2_CAUGHT_7", 1);
									}
								}
								else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_5546))
								{
									GlobalFunc_5653(Local_5546, "TR2_EZAA", "NERVOUSRON", 4);
									func_33("TR2_CAUGHT_7", 1);
								}
							}
							else
							{
								GlobalFunc_4956();
							}
						}
					}
				}
				if (!func_36("TR_pl3a2"))
				{
					if (((((((((ENTITY::DOES_ENTITY_EXIST(Local_5123[0 /*27*/]) && ENTITY::IS_ENTITY_DEAD(Local_5123[0 /*27*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5123[1 /*27*/])) && ENTITY::IS_ENTITY_DEAD(Local_5123[1 /*27*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5123[2 /*27*/])) && ENTITY::IS_ENTITY_DEAD(Local_5123[2 /*27*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5123[3 /*27*/])) && ENTITY::IS_ENTITY_DEAD(Local_5123[3 /*27*/])) && ENTITY::DOES_ENTITY_EXIST(Local_5123[4 /*27*/])) && ENTITY::IS_ENTITY_DEAD(Local_5123[4 /*27*/]))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_5875, 1))
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl3a2", 7, 0, 0, 0))
								{
									func_33("TR_pl3a2", 1);
								}
							}
						}
					}
				}
				else if (!func_36("TR_pl3a3"))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5546, "misstrevor2ig_2", "idle", 3))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_5875, 1))
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl3a3", 7, 0, 0, 0))
								{
									Local_5546.f_16 = MISC::GET_GAME_TIMER();
									func_33("TR_pl3a3", 1);
								}
							}
						}
					}
				}
				else if (!func_36("TR_pl3a3"))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5546, "misstrevor2ig_2", "idle", 3))
					{
						if (GlobalFunc_2521(6000, Local_5546.f_16))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl3a3", 7, 0, 0, 0))
									{
										Local_5546.f_16 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				if (!func_36("TR_LOOK"))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5546, "misstrevor2ig_7", "plant_bomb", 3))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_5875, 1))
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_LOOK", 7, 0, 0, 0))
								{
									func_33("TR_LOOK", 1);
								}
							}
						}
					}
				}
				else if (!func_36("TR_TANK"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_TANK", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(3f, 3f, 4);
								func_33("TR_TANK", 1);
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_5123[7 /*27*/]))
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_5123[7 /*27*/]))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_HELI_SILENT"))
						{
							AUDIO::STOP_AUDIO_SCENE("TREVOR_2_HELI_SILENT");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_HELI_APPROACH"))
						{
							AUDIO::START_AUDIO_SCENE("TREVOR_2_HELI_APPROACH");
						}
						if (!func_36("TR_pl4p"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl4p", 7, 0, 0, 0))
									{
										func_33("TR_pl4p", 1);
										func_33("TR2_HELSE", 1);
									}
								}
							}
						}
						else if (func_36("SJC_KPILOT"))
						{
							if (!func_36("TR2_HELSE"))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_5875, 1))
									{
										if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_HELSE", 7, 0, 0, 0))
										{
											iLocal_5914 = MISC::GET_GAME_TIMER();
											func_33("TR2_HELSE", 1);
										}
									}
								}
							}
							else if (GlobalFunc_588(&iLocal_5914, MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000)))
							{
								func_33("TR2_HELSE", 0);
							}
						}
					}
					else if (func_36("TR_SOME"))
					{
						if (!func_36("TR2_RONSPOT1"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_RONSPOT1", 7, 0, 0, 0))
									{
										func_33("TR2_RONSPOT1", 1);
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


void func_588(var uParam0, int iParam1)//Position - 0x69EBE
{
	var uVar0;
	var uVar1;
	
	switch (*iParam1)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_5123[6 /*27*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_5123[6 /*27*/]) || PED::IS_PED_INJURED(Local_5123[6 /*27*/]))
				{
					if (iLocal_5657 == 0)
					{
						STREAMING::REMOVE_ANIM_DICT("guard_reactions");
						*iParam1++;
					}
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(uParam0->f_14);
			STREAMING::REQUEST_MODEL(Local_5525[0 /*20*/].f_6);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_5525[0 /*20*/].f_19, sLocal_5686);
			if ((STREAMING::HAS_MODEL_LOADED(uParam0->f_14) && STREAMING::HAS_MODEL_LOADED(Local_5525[0 /*20*/].f_6)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_5525[0 /*20*/].f_19, sLocal_5686))
			{
				if (iLocal_5655 == 1)
				{
					Local_5525[0 /*20*/] = VEHICLE::CREATE_VEHICLE(Local_5525[0 /*20*/].f_6, Local_5525[0 /*20*/].f_2, Local_5525[0 /*20*/].f_5, 1, 1);
					*uParam0 = func_590(Local_5525[0 /*20*/], uParam0->f_14, iLocal_490, -1, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 135);
					GlobalFunc_722(*uParam0, 507);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_5525[0 /*20*/]);
					PED::SET_PED_HELMET(*uParam0, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_14);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_5525[0 /*20*/].f_6);
					func_589(uParam0, 3);
					*iParam1++;
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5525[0 /*20*/], 0))
			{
				if (AUDIO::IS_HORN_ACTIVE(Local_5525[0 /*20*/]))
				{
					iLocal_5657 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_5525[0 /*20*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5525[0 /*20*/]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5525[0 /*20*/]))
					{
						fLocal_5685 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_5525[0 /*20*/]);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (uParam0->f_25 != 1)
					{
						if (iLocal_5657 == 1)
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
							{
								func_589(uParam0, 1);
							}
						}
					}
					switch (uParam0->f_25)
					{
						case 3:
							switch (uParam0->f_18)
							{
								case 0:
									if (uParam0->f_24 == 0)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5525[0 /*20*/], 0))
										{
											if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5525[0 /*20*/]))
											{
												VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5525[0 /*20*/], 1, 1);
												VEHICLE::SET_VEHICLE_LIGHTS(Local_5525[0 /*20*/], 2);
												VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_5525[0 /*20*/], 1);
												VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_5525[0 /*20*/], Local_5525[0 /*20*/].f_19, sLocal_5686, 1);
												VEHICLE::SET_PLAYBACK_SPEED(Local_5525[0 /*20*/], 0.7f);
												PED::SET_PED_SEEING_RANGE(*uParam0, 15f);
												PED::SET_PED_HEARING_RANGE(*uParam0, 15f);
												ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 500);
												ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 1);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
												iLocal_5708 = MISC::GET_GAME_TIMER();
											}
											else
											{
												uParam0->f_24 = 1;
											}
										}
									}
									if (uParam0->f_24 == 1)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5525[0 /*20*/], 0))
										{
											if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5525[0 /*20*/]) || fLocal_5685 > 8280.525f)
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5525[0 /*20*/]))
												{
													VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5525[0 /*20*/]);
												}
												VEHICLE::REMOVE_VEHICLE_RECORDING(Local_5525[0 /*20*/].f_19, sLocal_5686);
												uParam0->f_24 = 0;
												uParam0->f_18++;
												ENTITY::FREEZE_ENTITY_POSITION(Local_5525[0 /*20*/], 1);
											}
										}
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5525[0 /*20*/], 0))
									{
										if ((MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 2f, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_USING(*uParam0), PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_5525[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1))
										{
											func_589(uParam0, 2);
										}
									}
									break;
								
								case 1:
									if (uParam0->f_24 == 0)
									{
										TASK::CLEAR_SEQUENCE_TASK(&uVar0);
										TASK::OPEN_SEQUENCE_TASK(&uVar0);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1671.96f, 3260.97f, 40.6f, 1f, 20000, 0.25f, 1, 40000f);
										TASK::CLOSE_SEQUENCE_TASK(uVar0);
										TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
										TASK::CLEAR_SEQUENCE_TASK(&uVar0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
										uParam0->f_24 = 1;
									}
									if (uParam0->f_24 == 1)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) == 7 || ENTITY::IS_ENTITY_AT_COORD(*uParam0, 1671.96f, 3260.97f, 40.6f, 2f, 2f, 2f, 0, 1, 0))
										{
											func_589(uParam0, 4);
										}
									}
									if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 10f, 1, 1))
									{
										func_589(uParam0, 2);
									}
									break;
							}
							break;
						
						case 2:
							if (uParam0->f_24 == 0)
							{
								WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 1);
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5525[0 /*20*/]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5525[0 /*20*/]);
									VEHICLE::REMOVE_VEHICLE_RECORDING(Local_5525[0 /*20*/].f_19, sLocal_5686);
								}
								STREAMING::REQUEST_ANIM_DICT("missexile2reactions_to_gun_fire@standing@idle_a");
								if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2reactions_to_gun_fire@standing@idle_a") && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")))
								{
									WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("weapon_assaultrifle"), -1, 1, 1);
									WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
									PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*uParam0);
									TASK::CLEAR_SEQUENCE_TASK(&uVar1);
									TASK::OPEN_SEQUENCE_TASK(&uVar1);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 4f, -4f, -1, 2, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uVar1);
									TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
									TASK::CLEAR_SEQUENCE_TASK(&uVar1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
									WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
									uParam0->f_24 = 1;
								}
							}
							if (uParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a") >= 0.98f)
									{
										func_589(uParam0, 4);
									}
								}
							}
							break;
						
						case 4:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_SEEING_RANGE(*uParam0, 60f);
								PED::SET_PED_HEARING_RANGE(*uParam0, 60f);
								PED::SET_PED_ACCURACY(*uParam0, 100);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0f, 0f);
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 5f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 5f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 1f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
						
						case 1:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_PED_ACCURACY(*uParam0, 1);
								PED::SET_PED_SHOOT_RATE(*uParam0, 175);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0.9f, 0.9f);
								PED::SET_PED_FIRING_PATTERN(*uParam0, -957453492);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 0f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 57, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 45, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								TASK::TASK_COMBAT_PED(*uParam0, Local_5546, 67108864, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
						}
					}
			}
			if (uParam0->f_22 == 0)
			{
				if (func_581(*uParam0, 1094713344, 1047233823, 1055957975) || (GlobalFunc_588(&iLocal_5708, iLocal_5707) && uParam0->f_24))
				{
					uParam0->f_22 = 1;
				}
			}
			if (iLocal_5649 == 0)
			{
				if (uParam0->f_22 == 1)
				{
					GlobalFunc_661(*uParam0, &(uParam0->f_2), -1, 0, uParam0->f_22, 0, 500f, 0);
				}
			}
			else
			{
				GlobalFunc_589(&(uParam0->f_2));
			}
			break;
	}
}

void func_589(var uParam0, int iParam1)//Position - 0x6A698
{
	uParam0->f_24 = 0;
	uParam0->f_25 = iParam1;
}

int func_590(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6A6AB
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, 26, iParam1, iParam3, 1, 1);
		PED::SET_PED_MAX_HEALTH(iVar0, iParam6);
		ENTITY::SET_ENTITY_HEALTH(iVar0, iParam6);
		PED::SET_PED_DIES_WHEN_INJURED(iVar0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam4, -1, 0, 1);
		WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, iParam4);
		if (iParam5 != 0)
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iVar0, iParam4, iParam5);
		}
		PED::SET_PED_AS_ENEMY(iVar0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam2);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 188, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 132, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 214, 1);
		PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iVar0);
		PED::SET_COMBAT_FLOAT(iVar0, 12, 30f);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, 1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
		return iVar0;
	}
	return 0;
}

void func_591(var uParam0, int iParam1)//Position - 0x6A76A
{
	var uVar0;
	
	switch (*iParam1)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_5123[5 /*27*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_5123[5 /*27*/]) || PED::IS_PED_INJURED(Local_5123[5 /*27*/]))
				{
					if (iLocal_5657 == 0)
					{
						*iParam1++;
					}
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(uParam0->f_14);
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_14))
			{
				*uParam0 = func_592(uParam0->f_14, uParam0->f_10, uParam0->f_13, iLocal_490, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 135);
				GlobalFunc_722(*uParam0, 507);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_14);
				func_589(uParam0, 3);
				*iParam1++;
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (uParam0->f_25 != 1)
					{
						if (iLocal_5657 == 1)
						{
							func_589(uParam0, 1);
						}
					}
					switch (uParam0->f_25)
					{
						case 3:
							switch (uParam0->f_18)
							{
								case 0:
									if (uParam0->f_24 == 0)
									{
										PED::SET_PED_SEEING_RANGE(*uParam0, 25f);
										PED::SET_PED_HEARING_RANGE(*uParam0, 25f);
										ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 500);
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 1);
										TASK::CLEAR_SEQUENCE_TASK(&uVar0);
										TASK::OPEN_SEQUENCE_TASK(&uVar0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1682.43f, 3284.91f, 40.1f, 1f, 20000, 0.25f, 1, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_5123[5 /*27*/].f_10, 1f, 20000, 3f, 8192, 40000f);
										TASK::TASK_AIM_GUN_AT_COORD(0, Local_5123[5 /*27*/].f_10, 3000, 0, 0);
										TASK::TASK_PLAY_ANIM(0, "guard_reactions", "med_down", 8f, -8f, -1, 0, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uVar0);
										TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
										TASK::CLEAR_SEQUENCE_TASK(&uVar0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
										iLocal_5708 = MISC::GET_GAME_TIMER();
										uParam0->f_24 = 1;
									}
									if (uParam0->f_24 == 1)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) == 7)
										{
											func_589(uParam0, 4);
										}
									}
									if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 10f, 1, 1))
									{
										func_589(uParam0, 2);
									}
									break;
							}
							break;
						
						case 2:
							if (uParam0->f_24 == 0)
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2reactions_to_gun_fire@standing@idle_a"))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
									TASK::TASK_PLAY_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 4f, -4f, -1, 2, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
									uParam0->f_24 = 1;
								}
							}
							if (uParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a") >= 0.98f)
									{
										func_589(uParam0, 4);
									}
								}
							}
							break;
						
						case 4:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_SEEING_RANGE(*uParam0, 60f);
								PED::SET_PED_HEARING_RANGE(*uParam0, 60f);
								PED::SET_PED_ACCURACY(*uParam0, 100);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0f, 0f);
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 5f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 5f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 1f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
						
						case 1:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_PED_ACCURACY(*uParam0, 1);
								PED::SET_PED_SHOOT_RATE(*uParam0, 175);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0.9f, 0.9f);
								PED::SET_PED_FIRING_PATTERN(*uParam0, -957453492);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 0f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 57, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 45, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								TASK::TASK_COMBAT_PED(*uParam0, Local_5546, 67108864, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
						}
					}
			}
			if (uParam0->f_22 == 0)
			{
				if (func_581(*uParam0, 1094713344, 1047233823, 1055957975) || (GlobalFunc_588(&iLocal_5708, iLocal_5707) && uParam0->f_24))
				{
					uParam0->f_22 = 1;
				}
			}
			if (iLocal_5649 == 0)
			{
				GlobalFunc_661(*uParam0, &(uParam0->f_2), -1, 0, uParam0->f_22, 0, 500f, 0);
			}
			else
			{
				GlobalFunc_589(&(uParam0->f_2));
			}
			break;
	}
}

int func_592(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x6AC82
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(26, iParam0, Param1, uParam4, 1, 1);
	PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 1, 0, 0);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam8);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam8);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam5);
	PED::SET_PED_AS_ENEMY(iVar0, 1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 47, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam6, -1, 1, 1);
	WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iParam6, 1);
	WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, iParam6);
	PED::SET_PED_ACCURACY(iVar0, 100);
	if (iParam7 != 0)
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iVar0, iParam6, iParam7);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 188, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 118, 0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 132, 1);
	PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iVar0);
	PED::SET_COMBAT_FLOAT(iVar0, 12, 30f);
	return iVar0;
}

void func_593(var uParam0, int iParam1)//Position - 0x6AD49
{
	var uVar0;
	
	switch (*iParam1)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_5123[4 /*27*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_5123[4 /*27*/]) || PED::IS_PED_INJURED(Local_5123[4 /*27*/]))
				{
					if (iLocal_5657 == 0)
					{
						*iParam1++;
					}
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(uParam0->f_14);
			STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_6");
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_14) && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_6"))
			{
				if (iLocal_5654 == 1)
				{
					*uParam0 = func_592(uParam0->f_14, uParam0->f_10, uParam0->f_13, iLocal_490, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 135);
					GlobalFunc_722(*uParam0, 507);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_14);
					func_589(uParam0, 3);
					*iParam1++;
				}
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (uParam0->f_25 != 1)
					{
						if (iLocal_5657 == 1)
						{
							func_589(uParam0, 1);
						}
					}
					switch (uParam0->f_25)
					{
						case 3:
							switch (uParam0->f_18)
							{
								case 0:
									if (uParam0->f_24 == 0)
									{
										PED::SET_PED_SEEING_RANGE(*uParam0, 25f);
										PED::SET_PED_HEARING_RANGE(*uParam0, 25f);
										ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 500);
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 1);
										TASK::CLEAR_SEQUENCE_TASK(&uVar0);
										TASK::OPEN_SEQUENCE_TASK(&uVar0);
										TASK::TASK_PLAY_ANIM(0, "misstrevor2ig_6", "call_biker_biker", 1000f, -4f, -1, 0, 0.32f, 0, 0, 0);
										TASK::TASK_PLAY_ANIM(0, "misstrevor2ig_6", "idle_f", 8f, -4f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_PLAY_ANIM(0, "misstrevor2ig_6", "idle_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 1683.85f, 3299.42f, 40.09f, 1683.85f, 3299.42f, 41f, 1f, 0, 0.5f, 1082130432, 1, 0, 0, -957453492);
										TASK::CLOSE_SEQUENCE_TASK(uVar0);
										TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
										TASK::CLEAR_SEQUENCE_TASK(&uVar0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
										iLocal_5708 = MISC::GET_GAME_TIMER();
										uParam0->f_24 = 1;
									}
									if (uParam0->f_24 == 1)
									{
										if (ENTITY::IS_ENTITY_AT_COORD(*uParam0, 1685.54f, 3299.13f, 42.61f, 5.5f, 5.5f, 3f, 0, 1, 0))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) == 1)
											{
												func_589(uParam0, 1);
											}
										}
									}
									if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 10f, 1, 1))
									{
										func_589(uParam0, 2);
									}
									break;
							}
							break;
						
						case 2:
							if (uParam0->f_24 == 0)
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2reactions_to_gun_fire@standing@idle_a"))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
									TASK::TASK_PLAY_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 4f, -4f, -1, 2, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
									uParam0->f_24 = 1;
								}
							}
							if (uParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a") >= 0.98f)
									{
										func_589(uParam0, 4);
									}
								}
							}
							break;
						
						case 4:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_SEEING_RANGE(*uParam0, 60f);
								PED::SET_PED_HEARING_RANGE(*uParam0, 60f);
								PED::SET_PED_ACCURACY(*uParam0, 100);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0f, 0f);
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 5f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 5f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 1f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
						
						case 1:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_PED_ACCURACY(*uParam0, 1);
								PED::SET_PED_SHOOT_RATE(*uParam0, 175);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0.9f, 0.9f);
								PED::SET_PED_FIRING_PATTERN(*uParam0, -957453492);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 0f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 57, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 45, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								TASK::TASK_COMBAT_PED(*uParam0, Local_5546, 67108864, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
						}
				}
				if (ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					uParam0->f_10 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 0) };
				}
			}
			if (uParam0->f_22 == 0)
			{
				if (func_581(*uParam0, 1094713344, 1047233823, 1055957975) || (GlobalFunc_588(&iLocal_5708, iLocal_5707) && uParam0->f_24))
				{
					uParam0->f_22 = 1;
				}
			}
			if (iLocal_5649 == 0)
			{
				GlobalFunc_661(*uParam0, &(uParam0->f_2), -1, 0, uParam0->f_22, 0, 500f, 0);
			}
			else
			{
				GlobalFunc_589(&(uParam0->f_2));
			}
			break;
	}
}

void func_594(var uParam0, int iParam1)//Position - 0x6B2E4
{
	var uVar0;
	
	switch (*iParam1)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_5123[3 /*27*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_5123[3 /*27*/]) || PED::IS_PED_INJURED(Local_5123[3 /*27*/]))
				{
					if (iLocal_5657 == 0)
					{
						uParam0->f_10 = { 1700.9f, 3292.33f, 47.92f };
						uParam0->f_13 = 93.9332f;
						iLocal_5656 = 1;
						if (MISC::IS_AREA_OCCUPIED((1696.9f - 2f), (3291.38f - 2f), (49.42f - 2f), (1696.9f + 2f), (3291.38f + 2f), (49.42f + 2f), 0, 0, 1, 0, 0, *uParam0, 0))
						{
							uParam0->f_10 = { 1705.29f, 3291.67f, 47.9f };
							uParam0->f_13 = 37.8532f;
							iLocal_5656 = 0;
						}
						*iParam1++;
					}
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(uParam0->f_14);
			STREAMING::REQUEST_ANIM_DICT("guard_reactions");
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_14) && STREAMING::HAS_ANIM_DICT_LOADED("guard_reactions"))
			{
				*uParam0 = func_592(uParam0->f_14, uParam0->f_10, uParam0->f_13, iLocal_490, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 135);
				GlobalFunc_722(*uParam0, 507);
				PED::SET_PED_CAPSULE(*uParam0, 0.4f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_14);
				func_589(uParam0, 3);
				*iParam1++;
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (uParam0->f_25 != 1)
					{
						if (iLocal_5657 == 1)
						{
							func_589(uParam0, 1);
						}
					}
					switch (uParam0->f_25)
					{
						case 3:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_SEEING_RANGE(*uParam0, 25f);
								PED::SET_PED_HEARING_RANGE(*uParam0, 25f);
								ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 500);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 1);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								if (iLocal_5656 == 1)
								{
									TASK::TASK_GO_STRAIGHT_TO_COORD(0, 1697.77f, 3291.67f, 47.92f, (1f - 0.6f), 20000, 1193033728, 1056964608);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_5123[2 /*27*/].f_10, (1f - 0.6f), 20000, 2f, 8192, 40000f);
								TASK::TASK_AIM_GUN_AT_COORD(0, Local_5123[2 /*27*/].f_10, 2000, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "guard_reactions", "med_down", 8f, -8f, -1, 0, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
								iLocal_5708 = MISC::GET_GAME_TIMER();
								uParam0->f_24 = 1;
							}
							if (uParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "guard_reactions", "med_down", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "guard_reactions", "med_down") >= 0.98f)
									{
										func_589(uParam0, 4);
									}
								}
							}
							if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 10f, 1, 1))
							{
								func_589(uParam0, 2);
							}
							break;
						
						case 2:
							if (uParam0->f_24 == 0)
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2reactions_to_gun_fire@standing@idle_a"))
								{
									WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("weapon_assaultrifle"), -1, 1, 1);
									WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
									PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*uParam0);
									TASK::TASK_PLAY_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 4f, -4f, -1, 2, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
									uParam0->f_24 = 1;
								}
							}
							if (uParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a") >= 0.98f)
									{
										func_589(uParam0, 4);
									}
								}
							}
							break;
						
						case 4:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_SEEING_RANGE(*uParam0, 60f);
								PED::SET_PED_HEARING_RANGE(*uParam0, 60f);
								PED::SET_PED_ACCURACY(*uParam0, 100);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0f, 0f);
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_PED_ACCURACY(*uParam0, 50);
								PED::SET_PED_SHOOT_RATE(*uParam0, 125);
								PED::SET_PED_FIRING_PATTERN(*uParam0, -957453492);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 6f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 6f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 1f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 57, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
						
						case 1:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_PED_ACCURACY(*uParam0, 1);
								PED::SET_PED_SHOOT_RATE(*uParam0, 175);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0.9f, 0.9f);
								PED::SET_PED_FIRING_PATTERN(*uParam0, -957453492);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 0f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 57, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 45, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								TASK::TASK_COMBAT_PED(*uParam0, Local_5546, 67108864, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
						}
					}
			}
			if (uParam0->f_22 == 0)
			{
				if (func_581(*uParam0, 1094713344, 1047233823, 1055957975) || (GlobalFunc_588(&iLocal_5708, iLocal_5707) && uParam0->f_24))
				{
					uParam0->f_22 = 1;
				}
			}
			if (iLocal_5649 == 0)
			{
				GlobalFunc_661(*uParam0, &(uParam0->f_2), -1, 0, uParam0->f_22, 0, 500f, 0);
			}
			else
			{
				GlobalFunc_589(&(uParam0->f_2));
			}
			break;
	}
}

void func_595(var uParam0, int iParam1)//Position - 0x6B8FA
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	switch (*iParam1)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_5123[2 /*27*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_5123[2 /*27*/]) || PED::IS_PED_INJURED(Local_5123[2 /*27*/]))
				{
					if (iLocal_5657 == 0)
					{
						*iParam1++;
					}
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(uParam0->f_14);
			STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_5b_p2");
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_14) && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_5b_p2"))
			{
				*uParam0 = func_592(uParam0->f_14, uParam0->f_10, uParam0->f_13, iLocal_490, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 135);
				GlobalFunc_722(*uParam0, 507);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_14);
				func_589(uParam0, 3);
				AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
				*iParam1++;
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (uParam0->f_25 != 1)
					{
						if (iLocal_5657 == 1)
						{
							func_589(uParam0, 1);
						}
					}
					switch (uParam0->f_25)
					{
						case 3:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_SEEING_RANGE(*uParam0, 25f);
								PED::SET_PED_HEARING_RANGE(*uParam0, 25f);
								ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 500);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 1);
								Var0 = { 1714.915f, 3293.133f, 41.16f };
								Var3 = { 0f, 0f, 72.12f };
								iLocal_5653 = 1;
								if (iLocal_5652 == 1)
								{
									if (!MISC::IS_AREA_OCCUPIED((1701.31f - 5f), (3306.22f - 5f), (41.66f - 2f), (1701.31f + 5f), (3306.22f + 5f), (41.66f + 2f), 0, 1, 0, 0, 0, *uParam0, 0))
									{
										Var0 = { 1717.115f, 3302.883f, 41.16f };
										Var3 = { 0f, 0f, 105f };
										iLocal_5653 = 1;
									}
									else
									{
										iLocal_5653 = 0;
									}
								}
								if (iLocal_5653 == 1)
								{
									WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
									TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, "misstrevor2ig_5b_p2", "biker_find_body", Var0, Var3, 8f, -8f, -1, 4098, 0, 2, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
								}
								else
								{
									GlobalFunc_2901(*uParam0, 1701.279f, 3286.064f, 40.1481f, 347.2772f, 0, 0, 0);
									PED::FORCE_PED_MOTION_STATE(*uParam0, -668482597, 0, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
									PED::SET_PED_CONFIG_FLAG(*uParam0, 226, 1);
									TASK::CLEAR_SEQUENCE_TASK(&uVar6);
									TASK::OPEN_SEQUENCE_TASK(&uVar6);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1702.51f, 3289.76f, 40.15f, 0.5f, 20000, 0.25f, 1, 40000f);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1701.01f, 3293.01f, 40.15f, 0.5f, 20000, 0.25f, 1, 40000f);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_5123[0 /*27*/].f_10, Local_5123[0 /*27*/].f_10, 0.5f, 0, 2f, 1082130432, 1, 0, 0, -957453492);
									TASK::TASK_AIM_GUN_AT_COORD(0, Local_5123[0 /*27*/].f_10, 5000, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uVar6);
									TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar6);
									TASK::CLEAR_SEQUENCE_TASK(&uVar6);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
								}
								iLocal_5708 = MISC::GET_GAME_TIMER();
								uParam0->f_24 = 1;
							}
							if (uParam0->f_24 == 1)
							{
								if (iLocal_5653 == 1)
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misstrevor2ig_5b_p2", "biker_find_body", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misstrevor2ig_5b_p2", "biker_find_body") >= 0.98f)
										{
											iLocal_5657 = 1;
											STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_5b_p2");
											func_589(uParam0, 1);
										}
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) == 7)
								{
									STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_5b_p2");
									func_589(uParam0, 4);
								}
							}
							if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 10f, 1, 1))
							{
								STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_5b_p2");
								func_589(uParam0, 2);
							}
							break;
						
						case 2:
							if (uParam0->f_24 == 0)
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2reactions_to_gun_fire@standing@idle_a"))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
									TASK::TASK_PLAY_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 4f, -4f, -1, 2, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
									uParam0->f_24 = 1;
								}
							}
							if (uParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a") >= 0.98f)
									{
										func_589(uParam0, 4);
									}
								}
							}
							break;
						
						case 4:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_SEEING_RANGE(*uParam0, 60f);
								PED::SET_PED_HEARING_RANGE(*uParam0, 60f);
								PED::SET_PED_ACCURACY(*uParam0, 100);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0f, 0f);
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 5f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 5f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 1f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
						
						case 1:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_PED_ACCURACY(*uParam0, 1);
								PED::SET_PED_SHOOT_RATE(*uParam0, 175);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0.9f, 0.9f);
								PED::SET_PED_FIRING_PATTERN(*uParam0, -957453492);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 0f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 57, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 45, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								TASK::TASK_COMBAT_PED(*uParam0, Local_5546, 67108864, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
					}
				}
				else
				{
					STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_5b_p2");
				}
			}
			if (uParam0->f_22 == 0)
			{
				if (func_581(*uParam0, 1094713344, 1047233823, 1055957975) || (GlobalFunc_588(&iLocal_5708, iLocal_5707) && uParam0->f_24))
				{
					uParam0->f_22 = 1;
				}
			}
			if (iLocal_5649 == 0)
			{
				GlobalFunc_661(*uParam0, &(uParam0->f_2), -1, 0, uParam0->f_22, 0, 500f, 0);
			}
			else
			{
				GlobalFunc_589(&(uParam0->f_2));
			}
			break;
	}
}


void func_597(var uParam0, int iParam1)//Position - 0x6C029
{
	var uVar0;
	var uVar1;
	
	switch (*iParam1)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_5123[1 /*27*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_5123[1 /*27*/]) || PED::IS_PED_INJURED(Local_5123[1 /*27*/]))
				{
					if (iLocal_5657 == 0)
					{
						func_517(&Local_5573, 1);
						*iParam1++;
					}
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(uParam0->f_14);
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_14))
			{
				*uParam0 = func_592(uParam0->f_14, uParam0->f_10, uParam0->f_13, iLocal_490, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 135);
				GlobalFunc_722(*uParam0, 507);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_5117))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_5117, 1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_5117, 1, 0, 1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_14);
				func_589(uParam0, 3);
				*iParam1++;
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (uParam0->f_25 != 1)
					{
						if (iLocal_5657 == 1)
						{
							func_589(uParam0, 1);
						}
					}
					switch (uParam0->f_25)
					{
						case 3:
							switch (uParam0->f_18)
							{
								case 0:
									if (uParam0->f_24 == 0)
									{
										PED::SET_PED_SEEING_RANGE(*uParam0, 25f);
										PED::SET_PED_HEARING_RANGE(*uParam0, 25f);
										ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 500);
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 1);
										TASK::CLEAR_SEQUENCE_TASK(&uVar0);
										TASK::OPEN_SEQUENCE_TASK(&uVar0);
										TASK::TASK_GO_STRAIGHT_TO_COORD(0, 1697.77f, 3291.67f, 47.92f, 0.6f, 20000, 1193033728, 1056964608);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1699.62f, 3295.12f, 47.92f, 0.6f, 20000, 0.25f, 512, -6f);
										TASK::CLOSE_SEQUENCE_TASK(uVar0);
										TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
										TASK::CLEAR_SEQUENCE_TASK(&uVar0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
										uParam0->f_24 = 1;
									}
									STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_variations@d");
									if (uParam0->f_24 == 1)
									{
										if (ENTITY::IS_ENTITY_AT_COORD(*uParam0, 1699.62f, 3295.12f, 47.92f, 2f, 2f, 2f, 0, 1, 0))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) == 7)
											{
												uParam0->f_24 = 0;
												uParam0->f_18++;
											}
										}
									}
									if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 10f, 1, 1))
									{
										STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@d");
										func_589(uParam0, 2);
									}
									break;
								
								case 1:
									if (uParam0->f_24 == 0)
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_variations@d"))
										{
											TASK::CLEAR_SEQUENCE_TASK(&uVar1);
											TASK::OPEN_SEQUENCE_TASK(&uVar1);
											TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_variations@d", "react_big_variations_k", 8f, -8f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_variations@d", "react_big_variations_o", 8f, -8f, -1, 0, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uVar1);
											TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
											TASK::CLEAR_SEQUENCE_TASK(&uVar1);
											uParam0->f_24 = 1;
										}
									}
									if (uParam0->f_24 == 1)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) == 7)
										{
											STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@d");
											uParam0->f_24 = 0;
											uParam0->f_18++;
										}
									}
									if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 10f, 1, 1))
									{
										STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@d");
										func_589(uParam0, 2);
									}
									break;
								
								case 2:
									if (uParam0->f_24 == 0)
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, 1705.28f, 3290.59f, 44.4f, 1f, 20000, 0.25f, 0, 40000f);
										uParam0->f_24 = 1;
									}
									if (uParam0->f_24 == 1)
									{
										if (ENTITY::IS_ENTITY_AT_COORD(*uParam0, 1705.28f, 3290.59f, 45.4f, 1f, 1f, 1f, 0, 1, 0))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) == 7)
											{
												func_589(uParam0, 1);
											}
										}
									}
									if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 10f, 1, 1))
									{
										func_589(uParam0, 2);
									}
									break;
							}
							break;
						
						case 2:
							if (uParam0->f_24 == 0)
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2reactions_to_gun_fire@standing@idle_a"))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
									TASK::TASK_PLAY_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 4f, -4f, -1, 2, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
									uParam0->f_24 = 1;
								}
							}
							if (uParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a") >= 0.98f)
									{
										func_589(uParam0, 4);
									}
								}
							}
							break;
						
						case 4:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_SEEING_RANGE(*uParam0, 60f);
								PED::SET_PED_HEARING_RANGE(*uParam0, 60f);
								PED::SET_PED_ACCURACY(*uParam0, 100);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0f, 0f);
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 5f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 5f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 1f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
						
						case 1:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_PED_ACCURACY(*uParam0, 1);
								PED::SET_PED_SHOOT_RATE(*uParam0, 175);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0.9f, 0.9f);
								PED::SET_PED_FIRING_PATTERN(*uParam0, -957453492);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 0f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 57, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 45, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								TASK::TASK_COMBAT_PED(*uParam0, Local_5546, 67108864, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
						}
				}
				if (ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					uParam0->f_10 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 0) };
				}
			}
			if (uParam0->f_22 == 0)
			{
				if (func_581(*uParam0, 1094713344, 1047233823, 1055957975) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "reaction@male_stand@big_variations@d", "react_big_variations_k", 3))
				{
					uParam0->f_22 = 1;
				}
			}
			if (iLocal_5649 == 0)
			{
				GlobalFunc_661(*uParam0, &(uParam0->f_2), -1, 0, uParam0->f_22, 0, 500f, 0);
			}
			else
			{
				GlobalFunc_589(&(uParam0->f_2));
			}
			break;
	}
}

void func_598(var uParam0, int iParam1)//Position - 0x6C722
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5504[0 /*20*/], 0))
	{
		AUDIO::_0xC1805D05E6D4FE10(Local_5504[0 /*20*/]);
	}
	if (PED::IS_PED_INJURED(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5504[0 /*20*/], 0))
		{
			if (GlobalFunc_156(*uParam0, Local_5504[0 /*20*/], 1) > 2f)
			{
				PED::SET_PED_RESET_FLAG(*uParam0, 258, 1);
				PED::SET_PED_RESET_FLAG(*uParam0, 253, 0);
			}
			else
			{
				PED::SET_PED_RESET_FLAG(*uParam0, 258, 0);
				PED::SET_PED_RESET_FLAG(*uParam0, 253, 1);
			}
		}
	}
	switch (*iParam1)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_5123[0 /*27*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_5123[0 /*27*/]) || PED::IS_PED_INJURED(Local_5123[0 /*27*/]))
				{
					if (iLocal_5657 == 0)
					{
						AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TREVOR_2_VAN_REV", 0);
						*iParam1++;
					}
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(uParam0->f_14);
			STREAMING::REQUEST_MODEL(Local_5504[0 /*20*/].f_6);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_5504[0 /*20*/].f_19, sLocal_5686);
			if ((STREAMING::HAS_MODEL_LOADED(uParam0->f_14) && STREAMING::HAS_MODEL_LOADED(Local_5504[0 /*20*/].f_6)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_5504[0 /*20*/].f_19, sLocal_5686))
			{
				if (iLocal_5651 == 1)
				{
					Local_5504[0 /*20*/] = VEHICLE::CREATE_VEHICLE(Local_5504[0 /*20*/].f_6, Local_5504[0 /*20*/].f_2, Local_5504[0 /*20*/].f_5, 1, 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_5504[0 /*20*/], 1);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_5504[0 /*20*/], "TREVOR_2_BIKER_VAN_GROUP", 0);
					*uParam0 = func_590(Local_5504[0 /*20*/], uParam0->f_14, iLocal_490, -1, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 135);
					GlobalFunc_722(*uParam0, 507);
					if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
					{
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 0, 0, 0);
					}
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_5504[0 /*20*/], 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_14);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_5504[0 /*20*/].f_6);
					func_589(uParam0, 3);
					fLocal_5684 = 0f;
					*iParam1++;
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5504[0 /*20*/], 0))
			{
				if (AUDIO::IS_HORN_ACTIVE(Local_5504[0 /*20*/]))
				{
					iLocal_5657 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_5504[0 /*20*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5504[0 /*20*/]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5504[0 /*20*/]))
					{
						fLocal_5684 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_5504[0 /*20*/]);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					uParam0->f_26 = GlobalFunc_4951(*uParam0, Local_5123[0 /*27*/]);
					uParam0->f_23 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(*uParam0, Local_5123[0 /*27*/], 17);
					if (uParam0->f_25 != 1)
					{
						if (iLocal_5657 == 1)
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
							{
								func_589(uParam0, 1);
							}
						}
					}
					switch (uParam0->f_25)
					{
						case 3:
							switch (uParam0->f_18)
							{
								case 0:
									if (uParam0->f_24 == 0)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5504[0 /*20*/], 0))
										{
											if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5504[0 /*20*/]))
											{
												AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_5504[0 /*20*/], 0);
												VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5504[0 /*20*/], 1, 1);
												VEHICLE::SET_VEHICLE_LIGHTS(Local_5504[0 /*20*/], 2);
												VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_5504[0 /*20*/], 1);
												VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_5504[0 /*20*/], Local_5504[0 /*20*/].f_19, sLocal_5686, 1);
												VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_5504[0 /*20*/], 1000f);
												VEHICLE::SET_PLAYBACK_SPEED(Local_5504[0 /*20*/], 0.45f);
												VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_5504[0 /*20*/], 1);
												AUDIO::SET_VEH_RADIO_STATION(Local_5504[0 /*20*/], "RADIO_04_PUNK");
												AUDIO::SET_VEHICLE_RADIO_LOUD(Local_5504[0 /*20*/], 1);
												PED::SET_PED_SEEING_RANGE(*uParam0, 15f);
												PED::SET_PED_HEARING_RANGE(*uParam0, 15f);
												ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 500);
												ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 1);
												PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(*uParam0, 1);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
												AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_2_van_rev", Local_5504[0 /*20*/], "TREVOR_2_SOUNDS", 0, 0);
											}
											else
											{
												uParam0->f_24 = 1;
											}
										}
									}
									AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TREVOR_2_BIKER_RINGTONE", 0);
									STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_4b");
									STREAMING::REQUEST_MODEL(Local_5573.f_7);
									if (uParam0->f_24 == 1)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5504[0 /*20*/], 0))
										{
											if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5504[0 /*20*/]))
											{
												VEHICLE::REMOVE_VEHICLE_RECORDING(Local_5504[0 /*20*/].f_19, sLocal_5686);
												uParam0->f_24 = 0;
												uParam0->f_18++;
											}
										}
									}
									if (uParam0->f_23)
									{
										if (uParam0->f_26 < 5f)
										{
											if (Local_5614[0 /*10*/].f_8 == 0 || Local_5614[1 /*10*/].f_8 == 0)
											{
												func_589(uParam0, 2);
											}
										}
									}
									if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 2f, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_USING(*uParam0), PLAYER::PLAYER_PED_ID(), 1))
									{
										func_589(uParam0, 2);
									}
									if (MISC::IS_AREA_OCCUPIED((1701.96f - 6f), (3308.27f - 8f), (41.68f - 2f), (1701.96f + 6f), (3308.27f + 8f), (41.68f + 2f), 0, 0, 1, 0, 0, *uParam0, 0))
									{
										if (uParam0->f_23 == 1)
										{
											if (uParam0->f_26 < 5f)
											{
												uParam0->f_18 = 0;
												iLocal_5652 = 1;
												func_589(uParam0, 5);
											}
										}
									}
									break;
								
								case 1:
									if (uParam0->f_24 == 0)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5504[0 /*20*/], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(Local_5504[0 /*20*/], 0, 0);
											WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
											TASK::TASK_PLAY_ANIM(*uParam0, "misstrevor2ig_4b", "biker_on_phone", 4f, -4f, -1, 32, 0f, 0, 1, 0);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
											uParam0->f_24 = 1;
										}
									}
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misstrevor2ig_4b", "biker_on_phone", 3))
									{
										ENTITY::SET_ENTITY_ANIM_SPEED(*uParam0, "misstrevor2ig_4b", "biker_on_phone", 1.25f);
										if (!ENTITY::DOES_ENTITY_EXIST(Local_5573))
										{
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misstrevor2ig_4b", "biker_on_phone") >= 0.035f)
											{
												if (func_599(&Local_5573, 0))
												{
													if (ENTITY::DOES_ENTITY_EXIST(Local_5573))
													{
														if (!ENTITY::IS_ENTITY_DEAD(Local_5573))
														{
															if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_5573))
															{
																ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_5573, *uParam0, PED::GET_PED_BONE_INDEX(*uParam0, 60309), 0f, 0f, 0f, 0f, 0f, -180f, 1, 1, 0, 0, 2, 1);
															}
														}
													}
												}
											}
										}
										if (!ENTITY::IS_ENTITY_DEAD(Local_5504[0 /*20*/]))
										{
											if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_5504[0 /*20*/], 0))
											{
												if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misstrevor2ig_4b", "biker_on_phone") >= 0.21f)
												{
													VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_5504[0 /*20*/], 0, 0, 0);
												}
											}
										}
										if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5711))
										{
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misstrevor2ig_4b", "biker_on_phone") >= 0.225f)
											{
												fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misstrevor2ig_4b", "biker_on_phone");
												iLocal_5711 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
												PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5711, Local_5504[0 /*20*/], -1);
												PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_5711, 1);
												TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
												WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
												TASK::TASK_SYNCHRONIZED_SCENE(*uParam0, iLocal_5711, "misstrevor2ig_4b", "biker_on_phone", 1000f, -4f, 0, 0, 1000f, 0);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
												PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_5711, fVar0);
												PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_5711, 1.15f);
												AUDIO::PLAY_SOUND_FROM_COORD(-1, "Biker_Ring_Tone", Local_5123[0 /*27*/].f_10, "TREVOR_2_SOUNDS", 0, 0, 0);
												WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
												uParam0->f_18++;
												uParam0->f_24 = 0;
											}
										}
									}
									if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 10f, 1, 1))
									{
										func_589(uParam0, 2);
									}
									break;
								
								case 2:
									if (uParam0->f_24 == 0)
									{
										if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5711))
										{
											uParam0->f_24 = 1;
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_5573))
									{
										if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5711))
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5711) >= 0.815f)
											{
												func_517(&Local_5573, 1);
											}
										}
									}
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5711))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5711) >= 0.95f)
										{
											func_589(uParam0, 4);
										}
									}
									if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 10f, 1, 1))
									{
										func_589(uParam0, 2);
									}
									break;
							}
							break;
						
						case 2:
							if (uParam0->f_24 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_5573))
								{
									func_517(&Local_5573, 0);
								}
								if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5504[0 /*20*/], 0))
									{
										if (PED::IS_PED_IN_VEHICLE(*uParam0, Local_5504[0 /*20*/], 0))
										{
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5504[0 /*20*/]))
											{
												VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5504[0 /*20*/]);
												VEHICLE::REMOVE_VEHICLE_RECORDING(Local_5504[0 /*20*/].f_19, sLocal_5686);
											}
											AUDIO::_0x9D3AF56E94C9AE98(Local_5504[0 /*20*/], 7000f);
											TASK::CLEAR_PED_TASKS(*uParam0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
											uParam0->f_19 = 0;
											uParam0->f_24 = 1;
										}
									}
								}
								else if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2reactions_to_gun_fire@standing@idle_a"))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
									TASK::TASK_PLAY_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 4f, -4f, -1, 2, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
									uParam0->f_24 = 1;
								}
							}
							if (uParam0->f_24 == 1)
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(*uParam0))
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_USING(*uParam0), 1f, 1, 0);
									if (PED::IS_PED_STOPPED(*uParam0))
									{
										if (AUDIO::IS_HORN_ACTIVE(PED::GET_VEHICLE_PED_IS_USING(*uParam0)))
										{
											if (uParam0->f_19 == 0)
											{
												uParam0->f_19 = MISC::GET_GAME_TIMER();
											}
											else if (GlobalFunc_2521(3500, uParam0->f_19))
											{
												func_589(uParam0, 1);
											}
										}
									}
								}
							}
							if (uParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a") >= 0.98f)
									{
										func_589(uParam0, 4);
									}
								}
							}
							break;
						
						case 5:
							switch (uParam0->f_18)
							{
								case 0:
									if (uParam0->f_24 == 0)
									{
										if (ENTITY::DOES_ENTITY_EXIST(Local_5504[0 /*20*/]))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_5504[0 /*20*/]))
											{
												if (PED::IS_PED_IN_VEHICLE(*uParam0, Local_5504[0 /*20*/], 0))
												{
													if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5504[0 /*20*/]))
													{
														VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5504[0 /*20*/]);
														VEHICLE::REMOVE_VEHICLE_RECORDING(Local_5504[0 /*20*/].f_19, sLocal_5686);
													}
													TASK::CLEAR_PED_TASKS(*uParam0);
													PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
													uParam0->f_24 = 1;
												}
											}
										}
									}
									if (uParam0->f_24 == 1)
									{
										if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(*uParam0))
										{
											VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_USING(*uParam0), 0.7f, 1, 0);
											if (PED::IS_PED_STOPPED(*uParam0))
											{
												uParam0->f_18++;
												uParam0->f_24 = 0;
											}
										}
									}
									break;
								
								case 1:
									if (uParam0->f_24 == 0)
									{
										TASK::CLEAR_SEQUENCE_TASK(&uVar1);
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
										TASK::TASK_LOOK_AT_COORD(0, Local_5123[0 /*27*/].f_10, 2000, 2048, 2);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_5123[0 /*27*/].f_10, Local_5123[0 /*27*/].f_10, 0.5f, 0, 2f, 1082130432, 1, 0, 0, -957453492);
										TASK::TASK_AIM_GUN_AT_COORD(0, Local_5123[0 /*27*/].f_10, 5000, 0, 1);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
										TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
										TASK::CLEAR_SEQUENCE_TASK(&uVar1);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
										WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
										uParam0->f_24 = 1;
									}
									if (uParam0->f_24 == 1)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) == 7)
										{
											func_589(uParam0, 4);
										}
									}
									if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 10f, 1, 1))
									{
										func_589(uParam0, 2);
									}
									break;
							}
							break;
						
						case 4:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_SEEING_RANGE(*uParam0, 60f);
								PED::SET_PED_HEARING_RANGE(*uParam0, 60f);
								PED::SET_PED_ACCURACY(*uParam0, 100);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0f, 0f);
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 3f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 3f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 1f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								TASK::CLEAR_SEQUENCE_TASK(&uVar2);
								TASK::OPEN_SEQUENCE_TASK(&uVar2);
								if (!PED::IS_PED_INJURED(Local_5546))
								{
									TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_5546, 1), 2000, 2048, 2);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_5546, 1), ENTITY::GET_ENTITY_COORDS(Local_5546, 1), 0.5f, 0, 3f, 1082130432, 1, 0, 0, -957453492);
								}
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar2);
								TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar2);
								TASK::CLEAR_SEQUENCE_TASK(&uVar2);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
								uParam0->f_24 = 1;
							}
							break;
						
						case 1:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_PED_ACCURACY(*uParam0, 1);
								PED::SET_PED_SHOOT_RATE(*uParam0, 175);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0.9f, 0.9f);
								PED::SET_PED_FIRING_PATTERN(*uParam0, -957453492);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 0f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 57, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 45, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								TASK::TASK_COMBAT_PED(*uParam0, Local_5546, 67108864, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
					}
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5504[0 /*20*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5504[0 /*20*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_5504[0 /*20*/]);
							VEHICLE::REMOVE_VEHICLE_RECORDING(Local_5504[0 /*20*/].f_19, sLocal_5686);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_5573))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_5573))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_5573))
							{
								ENTITY::DETACH_ENTITY(Local_5573, 0, 1);
							}
						}
					}
					if (uParam0->f_18 == 1)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misstrevor2ig_4b", "biker_on_phone", 3))
						{
							TASK::STOP_ANIM_PLAYBACK(*uParam0, 0, 1);
						}
					}
				}
			}
			if (uParam0->f_22 == 0)
			{
				if (func_581(*uParam0, 1094713344, 1047233823, 1055957975))
				{
					uParam0->f_22 = 1;
				}
			}
			if (iLocal_5649 == 0)
			{
				if (uParam0->f_22 == 1)
				{
					GlobalFunc_661(*uParam0, &(uParam0->f_2), -1, 0, uParam0->f_22, 0, 500f, 0);
				}
			}
			else
			{
				GlobalFunc_589(&(uParam0->f_2));
			}
			break;
	}
}

int func_599(int iParam0, int iParam1)//Position - 0x6D62B
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_7);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_7))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_7, iParam0->f_1, 1, 1, 0);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, iParam0->f_1, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, iParam0->f_4, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, iParam1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_7);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_600(var uParam0, int iParam1)//Position - 0x6D6A4
{
	var uVar0;
	
	switch (*iParam1)
	{
		case 0:
			*iParam1++;
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(uParam0->f_14);
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_14))
			{
				if (iLocal_5650 == 1)
				{
					*uParam0 = func_592(uParam0->f_14, uParam0->f_10, uParam0->f_13, iLocal_490, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 135);
					GlobalFunc_722(*uParam0, 507);
					if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
					{
						ENTITY::SET_ENTITY_HEALTH(*uParam0, 150);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 0, 0, 0);
					}
					PED::SET_PED_LOD_MULTIPLIER(*uParam0, 1.3f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_14);
					func_589(uParam0, 3);
					*iParam1++;
				}
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (uParam0->f_25 != 1)
					{
						if (iLocal_5657 == 1)
						{
							func_589(uParam0, 1);
						}
					}
					switch (uParam0->f_25)
					{
						case 3:
							if (uParam0->f_24 == 0)
							{
								TASK::CLEAR_PED_TASKS(*uParam0);
								PED::SET_PED_SEEING_RANGE(*uParam0, 25f);
								PED::SET_PED_HEARING_RANGE(*uParam0, 25f);
								ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 500);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 1);
								PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*uParam0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1701.37f, 3296.68f, 41.15f, 1f, 20000, 0.25f, 512, 48.13f);
								TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_DRINKING", 0, 1);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
								uParam0->f_24 = 1;
							}
							WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 1);
							STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle")));
							STREAMING::REQUEST_ANIM_DICT("missexile2reactions_to_gun_fire@standing@idle_a");
							if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 10f, 1, 1))
							{
								func_589(uParam0, 2);
							}
							break;
						
						case 2:
							if (uParam0->f_24 == 0)
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2reactions_to_gun_fire@standing@idle_a"))
								{
									WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("weapon_assaultrifle"), -1, 1, 1);
									WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_assaultrifle"), 1);
									PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*uParam0);
									TASK::TASK_PLAY_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 4f, -4f, -1, 2, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
									uParam0->f_24 = 1;
								}
							}
							if (uParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missexile2reactions_to_gun_fire@standing@idle_a", "standing_idle_a") >= 0.98f)
									{
										func_589(uParam0, 4);
									}
								}
							}
							break;
						
						case 4:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_SEEING_RANGE(*uParam0, 60f);
								PED::SET_PED_HEARING_RANGE(*uParam0, 60f);
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0f, 0f);
								PED::SET_PED_ACCURACY(*uParam0, 100);
								PED::SET_PED_SHOOT_RATE(*uParam0, 125);
								PED::SET_PED_FIRING_PATTERN(*uParam0, -957453492);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 6f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 6f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 1f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 57, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
						
						case 1:
							if (uParam0->f_24 == 0)
							{
								PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*uParam0, Local_5546, 0f, 0f, 0f, 2f, 0);
								PED::SET_PED_ACCURACY(*uParam0, 1);
								PED::SET_PED_SHOOT_RATE(*uParam0, 175);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*uParam0, 0.9f, 0.9f);
								PED::SET_PED_FIRING_PATTERN(*uParam0, -957453492);
								PED::SET_COMBAT_FLOAT(*uParam0, 2, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 13, 100f);
								PED::SET_COMBAT_FLOAT(*uParam0, 5, 1f);
								PED::SET_COMBAT_FLOAT(*uParam0, 8, 0f);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 57, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 45, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 23, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 4, 0);
								TASK::TASK_COMBAT_PED(*uParam0, Local_5546, 67108864, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
								uParam0->f_24 = 1;
							}
							break;
					}
				}
				else
				{
					uParam0->f_10 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 0) };
				}
			}
			if (uParam0->f_22 == 0)
			{
				if (func_581(*uParam0, 1094713344, 1047233823, 1055957975) || func_36("SJC_ENEM1G_0"))
				{
					uParam0->f_22 = 1;
				}
			}
			if (iLocal_5649 == 0)
			{
				GlobalFunc_661(*uParam0, &(uParam0->f_2), -1, 0, uParam0->f_22, 0, 500f, 0);
			}
			else
			{
				GlobalFunc_589(&(uParam0->f_2));
			}
			break;
	}
}

void func_601(int iParam0)//Position - 0x6DC2C
{
	int iVar0;
	
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ALARM_KLAXON_03", 0);
	switch (*iParam0)
	{
		case 0:
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 1717.39f, 3300.94f, 40.21f, 100f))
			{
				iLocal_5657 = 1;
			}
			if (iLocal_5657 == 1)
			{
				if (iLocal_5694 == 0)
				{
					iLocal_5694 = MISC::GET_GAME_TIMER();
				}
				else if (GlobalFunc_2521(2000, iLocal_5694))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_5695, "ALARMS_KLAXON_03_FAR", 1701.05f, 3292.24f, 53.29f, 0, 0, 0, 0);
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_5696, "ALARMS_KLAXON_03_CLOSE", 1701.05f, 3292.24f, 53.29f, 0, 0, 0, 0);
					*iParam0++;
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("g_m_y_lost_01"));
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 1);
			STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle")));
			if ((STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_lost_01")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle"))))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					Local_5340[iVar0 /*27*/] = func_592(joaat("g_m_y_lost_01"), Local_5340[iVar0 /*27*/].f_10, Local_5340[iVar0 /*27*/].f_13, iLocal_490, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 200);
					GlobalFunc_722(Local_5340[iVar0 /*27*/], 507);
					ENTITY::SET_ENTITY_LOD_DIST(Local_5340[iVar0 /*27*/], 500);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_5340[iVar0 /*27*/], 1);
					PED::SET_PED_COMBAT_RANGE(Local_5340[iVar0 /*27*/], 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_5340[iVar0 /*27*/], 1);
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Local_5340[iVar0 /*27*/], Local_5546, 0f, 0f, 0f, 2f, 0);
					PED::SET_PED_ACCURACY(Local_5340[iVar0 /*27*/], 1);
					PED::SET_PED_SHOOT_RATE(Local_5340[iVar0 /*27*/], 175);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_5340[iVar0 /*27*/], 0.9f, 0.9f);
					PED::SET_PED_FIRING_PATTERN(Local_5340[iVar0 /*27*/], -957453492);
					PED::SET_COMBAT_FLOAT(Local_5340[iVar0 /*27*/], 5, 1f);
					PED::SET_COMBAT_FLOAT(Local_5340[iVar0 /*27*/], 8, 0f);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5340[iVar0 /*27*/], 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5340[iVar0 /*27*/], 42, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5340[iVar0 /*27*/], 50, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5340[iVar0 /*27*/], 5, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5340[iVar0 /*27*/], 57, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5340[iVar0 /*27*/], 29, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5340[iVar0 /*27*/], 45, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5340[iVar0 /*27*/], 30, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5340[iVar0 /*27*/], 23, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_5340[iVar0 /*27*/], 4, 0);
					TASK::TASK_COMBAT_PED(Local_5340[iVar0 /*27*/], Local_5546, 67108864, 16);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5340[iVar0 /*27*/], 0);
					iVar0++;
				}
				iLocal_5658 = 1;
				iLocal_5694 = MISC::GET_GAME_TIMER();
				*iParam0++;
			}
			break;
		
		case 2:
			*iParam0++;
			break;
	}
}

void func_602(int iParam0)//Position - 0x6DEF1
{
	int iVar0;
	
	func_603(1575.048f, 3363.594f, 47.635f, 10f, 15f, "SJC_RETRW", "SJC_DISTWARN1", 6);
	switch (*iParam0)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_5123[7 /*27*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_5123[7 /*27*/]) || PED::IS_PED_INJURED(Local_5123[7 /*27*/]))
				{
					if (iLocal_5657 == 0)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_HELI_SILENT"))
						{
							AUDIO::START_AUDIO_SCENE("TREVOR_2_HELI_SILENT");
						}
						*iParam0++;
					}
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(Local_4414[10 /*19*/].f_6);
			STREAMING::REQUEST_MODEL(Local_5449[0 /*27*/].f_14);
			STREAMING::REQUEST_MODEL(Local_5449[1 /*27*/].f_14);
			STREAMING::REQUEST_ANIM_DICT("misstrevor2mcs_3_b");
			STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_assaultrifle")));
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 1);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_4414[10 /*19*/].f_7, sLocal_5686);
			if ((((((STREAMING::HAS_MODEL_LOADED(Local_4414[10 /*19*/].f_6) && STREAMING::HAS_MODEL_LOADED(Local_5449[0 /*27*/].f_14)) && STREAMING::HAS_MODEL_LOADED(Local_5449[1 /*27*/].f_14)) && STREAMING::HAS_MODEL_LOADED(Local_5449[1 /*27*/].f_14)) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2mcs_3_b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_4414[10 /*19*/].f_7, sLocal_5686))
			{
				Local_4414[10 /*19*/] = VEHICLE::CREATE_VEHICLE(Local_4414[10 /*19*/].f_6, Local_4414[10 /*19*/].f_2, Local_4414[10 /*19*/].f_5, 1, 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[10 /*19*/], "TREVOR_2_Helicopter", 0);
				Local_5449[0 /*27*/] = func_590(Local_4414[10 /*19*/], Local_5449[0 /*27*/].f_14, iLocal_490, -1, joaat("weapon_pistol"), 0, 135);
				GlobalFunc_722(Local_5449[0 /*27*/], 507);
				Local_5449[1 /*27*/] = func_590(Local_4414[10 /*19*/], Local_5449[1 /*27*/].f_14, iLocal_490, 2, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 135);
				GlobalFunc_722(Local_5449[1 /*27*/], 507);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_4414[10 /*19*/].f_6);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_5449[0 /*27*/].f_14);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_5449[1 /*27*/].f_14);
				func_589(&(Local_5449[0 /*27*/]), 3);
				func_589(&(Local_5449[1 /*27*/]), 3);
				*iParam0++;
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_4414[10 /*19*/]))
				{
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_4414[10 /*19*/], joaat("weapon_railgun"), 0))
					{
						iVar0 = 1;
					}
				}
				else if (VEHICLE::GET_VEHICLE_CAUSE_OF_DESTRUCTION(Local_4414[10 /*19*/]) == joaat("weapon_railgun"))
				{
					iVar0 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_5449[0 /*27*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5449[0 /*27*/]))
				{
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_5449[0 /*27*/], joaat("weapon_railgun"), 0))
					{
						iVar0 = 1;
					}
				}
				else if (PED::GET_PED_CAUSE_OF_DEATH(Local_5449[0 /*27*/]) == joaat("weapon_railgun"))
				{
					iVar0 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_5449[1 /*27*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5449[1 /*27*/]))
				{
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_5449[1 /*27*/], joaat("weapon_railgun"), 0))
					{
						iVar0 = 1;
					}
				}
				else if (PED::GET_PED_CAUSE_OF_DEATH(Local_5449[1 /*27*/]) == joaat("weapon_railgun"))
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
				{
					iLocal_5657 = 1;
					VEHICLE::EXPLODE_VEHICLE(Local_4414[10 /*19*/], 1, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_4414[10 /*19*/]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[10 /*19*/]))
					{
						fLocal_5683 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[10 /*19*/]);
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_4414[10 /*19*/], PLAYER::PLAYER_PED_ID(), 0))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_4414[10 /*19*/], joaat("weapon_sniperrifle"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_4414[10 /*19*/], joaat("weapon_heavysniper"), 0))
						{
							iLocal_5689++;
							GlobalFunc_565(513, 1, 0);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_4414[10 /*19*/]);
						}
					}
					if (iLocal_5689 >= 4)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_5449[0 /*27*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_5449[0 /*27*/]))
							{
								MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_5449[0 /*27*/], 0f, 1f, 0f), PED::GET_PED_BONE_COORDS(Local_5449[0 /*27*/], 31086, 0f, 0f, 0f), 20, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
								PED::APPLY_DAMAGE_TO_PED(Local_5449[0 /*27*/], 100, 1);
							}
						}
					}
				}
			}
			if (iLocal_5690 != 0)
			{
				if (GlobalFunc_2521(12500, iLocal_5690))
				{
					iLocal_5657 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_5449[0 /*27*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5449[0 /*27*/]))
				{
					if (Local_5449[0 /*27*/].f_25 != 1)
					{
						if (iLocal_5657 == 1)
						{
							func_589(&(Local_5449[0 /*27*/]), 1);
						}
					}
					switch (Local_5449[0 /*27*/].f_25)
					{
						case 3:
							switch (Local_5449[0 /*27*/].f_18)
							{
								case 0:
									if (Local_5449[0 /*27*/].f_24 == 0)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[10 /*19*/], 0))
										{
											if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[10 /*19*/]))
											{
												VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[10 /*19*/], 1, 1);
												VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4414[10 /*19*/]);
												VEHICLE::SET_VEHICLE_LIGHTS(Local_4414[10 /*19*/], 2);
												VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_4414[10 /*19*/], 1);
												VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[10 /*19*/], Local_4414[10 /*19*/].f_7, sLocal_5686, 1);
												VEHICLE::SET_PLAYBACK_SPEED(Local_4414[10 /*19*/], 0.6f);
												PED::SET_PED_SEEING_RANGE(Local_5449[0 /*27*/], 15f);
												PED::SET_PED_HEARING_RANGE(Local_5449[0 /*27*/], 15f);
												ENTITY::SET_ENTITY_LOD_DIST(Local_5449[0 /*27*/], 500);
												ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_5449[0 /*27*/], 1);
												TASK::TASK_PLAY_ANIM(Local_5449[0 /*27*/], "misstrevor2mcs_3_b", "idle_peda", 8f, -8f, -1, 1, 0, 0, 0, 0);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5449[0 /*27*/], 1);
											}
											else
											{
												Local_5449[0 /*27*/].f_24 = 1;
											}
										}
									}
									if (Local_5449[0 /*27*/].f_24 == 1)
									{
										if ((MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_5449[0 /*27*/], 1), 2.5f, 1, 1) || (ENTITY::DOES_ENTITY_EXIST(Local_5449[1 /*27*/]) && ENTITY::IS_ENTITY_DEAD(Local_5449[1 /*27*/]))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_USING(Local_5449[0 /*27*/]), PLAYER::PLAYER_PED_ID(), 1))
										{
											iLocal_5691 = MISC::GET_GAME_TIMER();
										}
										if (iLocal_5691 != 0)
										{
											if (GlobalFunc_2521(3000, iLocal_5691))
											{
												iLocal_5690 = MISC::GET_GAME_TIMER();
												func_589(&(Local_5449[0 /*27*/]), 1);
											}
										}
									}
									break;
							}
							break;
						
						case 1:
							if (Local_5449[0 /*27*/].f_24 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_4414[10 /*19*/]))
									{
										if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[10 /*19*/]))
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_4414[10 /*19*/]);
											VEHICLE::REMOVE_VEHICLE_RECORDING(Local_4414[10 /*19*/].f_7, sLocal_5686);
										}
										TASK::TASK_HELI_MISSION(Local_5449[0 /*27*/], Local_4414[10 /*19*/], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 18f, 2f, -1f, SYSTEM::CEIL(ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_4414[10 /*19*/])) + 10, (SYSTEM::CEIL(ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_4414[10 /*19*/])) - 10), -1082130432, 0);
									}
								}
								Local_5449[0 /*27*/].f_24 = 1;
							}
							break;
					}
					if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(Local_5449[0 /*27*/], 31086, 0f, 0f, 0f), 0.25f, 1) || MISC::HAS_BULLET_IMPACTED_IN_AREA(PED::GET_PED_BONE_COORDS(Local_5449[0 /*27*/], 31086, 0f, 0f, 0f), 0.25f, 1, 1))
					{
						PED::APPLY_DAMAGE_TO_PED(Local_5449[0 /*27*/], 100, 1);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_5449[1 /*27*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_5449[1 /*27*/]))
				{
					if (Local_5449[1 /*27*/].f_25 != 1)
					{
						if (iLocal_5657 == 1)
						{
							func_589(&(Local_5449[1 /*27*/]), 1);
						}
					}
					switch (Local_5449[1 /*27*/].f_25)
					{
						case 3:
							switch (Local_5449[1 /*27*/].f_18)
							{
								case 0:
									if (Local_5449[1 /*27*/].f_24 == 0)
									{
										ENTITY::SET_ENTITY_LOD_DIST(Local_5449[1 /*27*/], 500);
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_5449[1 /*27*/], 1);
										WEAPON::GIVE_WEAPON_TO_PED(Local_5449[1 /*27*/], joaat("weapon_assaultrifle"), -1, 1, 1);
										WEAPON::SET_CURRENT_PED_WEAPON(Local_5449[1 /*27*/], joaat("weapon_assaultrifle"), 1);
										iLocal_5712 = GlobalFunc_6830(Local_5449[1 /*27*/], joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0);
										ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_5712, Local_5449[1 /*27*/], PED::GET_PED_BONE_INDEX(Local_5449[1 /*27*/], 28422), 0.12f, 0.05f, -0.01f, -90f, -10.8f, 0f, 1, 1, 0, 0, 2, 1);
										TASK::TASK_PLAY_ANIM(Local_5449[1 /*27*/], "misstrevor2mcs_3_b", "idle_pedb", 8f, -8f, -1, 1, 0, 0, 0, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5449[1 /*27*/], 1);
										Local_5449[1 /*27*/].f_24 = 1;
									}
									if (Local_5449[1 /*27*/].f_24 == 1)
									{
										if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_5449[1 /*27*/], 1), 2.5f, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_USING(Local_5449[1 /*27*/]), PLAYER::PLAYER_PED_ID(), 1))
										{
											iLocal_5691 = MISC::GET_GAME_TIMER();
										}
										if (iLocal_5691 != 0)
										{
											if (GlobalFunc_2521(3000, iLocal_5691))
											{
												iLocal_5690 = MISC::GET_GAME_TIMER();
												func_589(&(Local_5449[1 /*27*/]), 1);
											}
										}
										if (fLocal_5683 > 67500f)
										{
											iLocal_5657 = 1;
											func_589(&(Local_5449[1 /*27*/]), 1);
										}
									}
									break;
							}
							break;
						
						case 1:
							if (Local_5449[1 /*27*/].f_24 == 0)
							{
								PED::SET_PED_ACCURACY(Local_5449[1 /*27*/], 3);
								PED::SET_PED_SHOOT_RATE(Local_5449[1 /*27*/], 150);
								PED::SET_PED_SEEING_RANGE(Local_5449[1 /*27*/], 100f);
								PED::SET_PED_HEARING_RANGE(Local_5449[1 /*27*/], 100f);
								PED::SET_PED_FIRING_PATTERN(Local_5449[1 /*27*/], -957453492);
								PED::SET_COMBAT_FLOAT(Local_5449[1 /*27*/], 2, 100f);
								PED::SET_COMBAT_FLOAT(Local_5449[1 /*27*/], 13, 100f);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_5449[1 /*27*/], 5, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_5449[1 /*27*/], 1, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_5449[1 /*27*/], 3, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_5449[1 /*27*/], 30, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_5449[1 /*27*/], 23, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_5449[1 /*27*/], 250f, 0);
								if (!PED::IS_PED_INJURED(Local_5546))
								{
									TASK::TASK_DRIVE_BY(Local_5449[1 /*27*/], Local_5546, 0, 0f, 0f, 0f, -1f, 60, 0, -753768974);
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5449[1 /*27*/], 0);
								Local_5449[1 /*27*/].f_24 = 1;
							}
							break;
						}
					}
			}
			GlobalFunc_661(Local_5449[0 /*27*/], &(Local_5449[0 /*27*/].f_2), -1, 0, 1, 0, 500f, 0);
			GlobalFunc_661(Local_5449[1 /*27*/], &(Local_5449[1 /*27*/].f_2), -1, 0, 1, 0, 500f, 0);
			break;
	}
}

void func_603(struct<3> Param0, float fParam3, float fParam4, char* sParam5, char* sParam6, int iParam7)//Position - 0x6E924
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param0, 1) > fParam4)
	{
		iLocal_5116 = iParam7;
		iLocal_5874 = 12;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param0, 1) > fParam3)
	{
		if (!iLocal_5782)
		{
			GlobalFunc_5884(sParam5);
			iLocal_5782 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param0, 1) < (fParam3 - 25f))
	{
		if (iLocal_5782)
		{
			GlobalFunc_5884(sParam6);
			iLocal_5782 = 0;
		}
	}
}

void func_604(var uParam0, bool bParam1)//Position - 0x6E9AB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*10*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0 /*10*/]))
			{
				if (bParam1)
				{
					ENTITY::SET_ENTITY_INVINCIBLE((*uParam0)[iVar0 /*10*/], 0);
					ENTITY::SET_ENTITY_PROOFS((*uParam0)[iVar0 /*10*/], 0, 0, 0, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_DYNAMIC((*uParam0)[iVar0 /*10*/], 0);
					PHYSICS::SET_DISABLE_BREAKING((*uParam0)[iVar0 /*10*/], 0);
				}
			}
		}
		iVar0++;
	}
}

void func_605(var uParam0)//Position - 0x6EA1A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_5504[0 /*20*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_5504[0 /*20*/]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5504[0 /*20*/]))
			{
				if (fLocal_5684 > 9148.755f)
				{
					if (Local_5614[0 /*10*/].f_8 == 0 && Local_5614[1 /*10*/].f_8 == 0)
					{
						if (!func_36("SJC_LIGHTSBL"))
						{
							if (!GlobalFunc_111())
							{
								if (Local_5614[0 /*10*/].f_8 == 0)
								{
									if (!HUD::DOES_BLIP_EXIST(Local_5614[0 /*10*/].f_9))
									{
										Local_5614[0 /*10*/].f_9 = HUD::ADD_BLIP_FOR_COORD(1700.94f, 3295.07f, 45.95f);
										HUD::SET_BLIP_COLOUR(Local_5614[0 /*10*/].f_9, 2);
										HUD::SET_BLIP_SCALE(Local_5614[0 /*10*/].f_9, 0.5f);
										HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_5614[0 /*10*/].f_9, "SJC_LIGHTSBLI");
									}
								}
								if (Local_5614[1 /*10*/].f_8 == 0)
								{
									if (!HUD::DOES_BLIP_EXIST(Local_5614[1 /*10*/].f_9))
									{
										Local_5614[1 /*10*/].f_9 = HUD::ADD_BLIP_FOR_COORD(1697.88f, 3293.11f, 47.24f);
										HUD::SET_BLIP_COLOUR(Local_5614[1 /*10*/].f_9, 2);
										HUD::SET_BLIP_SCALE(Local_5614[1 /*10*/].f_9, 0.5f);
										HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_5614[1 /*10*/].f_9, "SJC_LIGHTSBLI");
									}
								}
								GlobalFunc_5884("SJC_LIGHTSBL");
								func_33("SJC_LIGHTSBL", 1);
							}
						}
					}
				}
			}
		}
	}
	if (Local_5614[0 /*10*/].f_8)
	{
		if (HUD::DOES_BLIP_EXIST(Local_5614[0 /*10*/].f_9))
		{
			HUD::REMOVE_BLIP(&(Local_5614[0 /*10*/].f_9));
		}
	}
	if (Local_5614[1 /*10*/].f_8)
	{
		if (HUD::DOES_BLIP_EXIST(Local_5614[1 /*10*/].f_9))
		{
			HUD::REMOVE_BLIP(&(Local_5614[1 /*10*/].f_9));
		}
	}
	if (GlobalFunc_663("SJC_LIGHTSBL", 0, 0))
	{
		if (Local_5614[0 /*10*/].f_8 && Local_5614[1 /*10*/].f_8)
		{
			HUD::CLEAR_PRINTS();
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS((uParam0[iVar0 /*10*/])->f_1, 1f, (uParam0[iVar0 /*10*/])->f_7, 0))
		{
			if ((uParam0[iVar0 /*10*/])->f_8 == 0)
			{
				if (OBJECT::HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN((uParam0[iVar0 /*10*/])->f_1, 1f, (uParam0[iVar0 /*10*/])->f_7, 1))
				{
					switch (iVar0)
					{
						case 0:
						case 1:
							iLocal_5687++;
							break;
					}
					iLocal_5688++;
					(uParam0[iVar0 /*10*/])->f_8 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_606(int iParam0)//Position - 0x6EC61
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (iLocal_5649 == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					iParam0->f_1 = GlobalFunc_6797(*iParam0, 0, 145);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
			{
				HUD::REMOVE_BLIP(&(iParam0->f_1));
			}
			switch (iParam0->f_25)
			{
				case 0:
					ENTITY::SET_ENTITY_HEALTH(*iParam0, 120);
					ENTITY::SET_ENTITY_LOD_DIST(*iParam0, 500);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
					{
						ENTITY::SET_ENTITY_LOD_DIST(Local_4414[11 /*19*/], 500);
					}
					func_589(iParam0, 6);
					break;
				
				case 6:
					if (iParam0->f_24 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[11 /*19*/]))
							{
								if (!PED::IS_PED_IN_VEHICLE(*iParam0, Local_4414[11 /*19*/], 0))
								{
									PED::SET_PED_INTO_VEHICLE(*iParam0, Local_4414[11 /*19*/], -1);
								}
								VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_4414[11 /*19*/], 1);
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[11 /*19*/], 1, 0);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[11 /*19*/], 29, sLocal_5686, 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[11 /*19*/], 9250f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_4414[11 /*19*/], 1);
								VEHICLE::SET_VEHICLE_LIGHTS(Local_4414[11 /*19*/], 1);
							}
							else
							{
								PED::_0x6647C5F6F5792496(*iParam0, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
								iParam0->f_24 = 1;
							}
						}
					}
					STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_2");
					STREAMING::REQUEST_ANIM_DICT("misstrevor2ron_basic_moves");
					STREAMING::REQUEST_ANIM_SET("move_ped_crouched");
					STREAMING::REQUEST_ANIM_SET("move_ped_crouched_strafing");
					if (iParam0->f_24 == 1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(*iParam0, Local_4414[11 /*19*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[11 /*19*/]))
								{
									if ((STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_2") && STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched")) && STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched_strafing"))
									{
										AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_4414[11 /*19*/], 0);
										func_589(iParam0, 7);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (iParam0->f_24 == 0)
					{
						if ((STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_2") && STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched")) && STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched_strafing"))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[11 /*19*/], 0, 1);
								VEHICLE::SET_VEHICLE_LIGHTS(Local_4414[11 /*19*/], 1);
								PED::SET_PED_STEALTH_MOVEMENT(*iParam0, 0, 0);
								PED::SET_PED_MOVEMENT_CLIPSET(*iParam0, "move_ped_crouched", 1048576000);
								PED::SET_PED_STRAFE_CLIPSET(*iParam0, "move_ped_crouched_strafing");
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, "misstrevor2ig_2", "intro", ENTITY::GET_ENTITY_COORDS(Local_4414[11 /*19*/], 1), ENTITY::GET_ENTITY_ROTATION(Local_4414[11 /*19*/], 2), 1000f, -8f, -1, 5128, 0, 2, 0);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, "misstrevor2ig_2", "idle", ENTITY::GET_ENTITY_COORDS(Local_4414[11 /*19*/], 1), ENTITY::GET_ENTITY_ROTATION(Local_4414[11 /*19*/], 2), 8f, -4f, -1, 5129, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*iParam0, 0, 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*iParam0, Local_4414[11 /*19*/], 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
								func_33("QUAD NO LONGER NEEDED", 1);
								PED::_0x6647C5F6F5792496(*iParam0, 0);
								iParam0->f_24 = 1;
							}
						}
					}
					if (iParam0->f_24 == 1)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_2", "idle", 3))
						{
							if (func_584(PLAYER::PLAYER_PED_ID()))
							{
								if (func_581(*iParam0, 1094713344, 1047233823, 1055957975))
								{
									iParam0->f_19 = 0;
									iParam0->f_18 = 0;
									iParam0->f_16 = 0;
									iParam0->f_17 = 0;
									iLocal_5650 = 1;
									func_589(iParam0, 8);
								}
							}
						}
					}
					break;
				
				case 9:
					if (iParam0->f_24 == 0)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_5c", "intro", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_5c", "plead_loop", 3))
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							if (!PED::IS_PED_INJURED(Local_5546))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_5123[7 /*27*/]))
								{
									if (!PED::IS_PED_INJURED(Local_5123[7 /*27*/]))
									{
										if (GlobalFunc_4951(Local_5546, Local_5123[7 /*27*/]) < 12f)
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_5123[7 /*27*/], 0);
										}
									}
								}
							}
							TASK::TASK_PLAY_ANIM(0, "misstrevor2ig_5c", "intro", 4f, -8f, -1, 8, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "misstrevor2ig_5c", "plead_loop", 8f, -8f, -1, 9, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*iParam0, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
							iParam0->f_24 = 1;
						}
						else
						{
							iParam0->f_24 = 1;
						}
					}
					if (iParam0->f_24 == 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_5c", "outro_live", 3))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_5c", "plead_loop", 3))
							{
								iVar2 = GlobalFunc_2524(*iParam0, iLocal_490, 0, 0, 28);
								if ((!ENTITY::DOES_ENTITY_EXIST(iVar2) || (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_DEAD(iVar2))) || ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2)) && GlobalFunc_4951(*iParam0, iVar2) > 12.5f))
								{
									TASK::CLEAR_PED_TASKS(*iParam0);
									TASK::TASK_PLAY_ANIM(*iParam0, "misstrevor2ig_5c", "outro_live", 8f, -8f, -1, 10, 0, 0, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*iParam0, 0, 0);
								}
							}
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_5c", "outro_live", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misstrevor2ig_5c", "outro_live") >= 0.95f)
							{
								func_589(iParam0, 8);
							}
						}
					}
					break;
				
				case 8:
					switch (iParam0->f_18)
					{
						case 0:
							if (iParam0->f_24 == 0)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_2", "idle", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misstrevor2ig_2", "idle") > 0.65f)
									{
										TASK::CLEAR_SEQUENCE_TASK(&uVar3);
										TASK::OPEN_SEQUENCE_TASK(&uVar3);
										TASK::TASK_PLAY_ANIM(0, "misstrevor2ig_2", "outro", 4f, -4f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1722.83f, 3343.36f, 40.58f, 2f, 60000, 0.25f, 8193, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1698.65f, 3334.9f, 40.5f, 2f, 60000, 0.25f, 8193, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1695.43f, 3333.25f, 41.49f, 1f, 60000, 0.25f, 512, -170.3f);
										TASK::CLOSE_SEQUENCE_TASK(uVar3);
										TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar3);
										TASK::CLEAR_SEQUENCE_TASK(&uVar3);
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503) == 1)
								{
									iParam0->f_24 = 1;
								}
							}
							STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_3");
							STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_4");
							STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_5c");
							if (iParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(*iParam0, 1695.18f, 3332.86f, 40.49f, 3f, 3f, 3f, 0, 1, 0))
								{
									switch (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503))
									{
										case 1:
											if (ENTITY::DOES_ENTITY_EXIST(Local_5123[0 /*27*/]))
											{
												if (ENTITY::IS_ENTITY_DEAD(Local_5123[0 /*27*/]) || PED::IS_PED_INJURED(Local_5123[0 /*27*/]))
												{
													if (TASK::GET_SEQUENCE_PROGRESS(*iParam0) == 3)
													{
														STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_2");
														iParam0->f_24 = 0;
														iParam0->f_18++;
													}
												}
											}
											break;
										
										case 7:
											STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_2");
											iParam0->f_24 = 0;
											iParam0->f_18++;
											break;
										}
									}
							}
							break;
						
						case 1:
							if (iParam0->f_24 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_5123[0 /*27*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_5123[0 /*27*/]))
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_3"))
										{
											TASK::TASK_PLAY_ANIM(*iParam0, "misstrevor2ig_3", "point", 4f, -4f, -1, 1, 0, 0, 0, 0);
										}
									}
								}
								iParam0->f_24 = 1;
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_5123[0 /*27*/]))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_5123[0 /*27*/]) || PED::IS_PED_INJURED(Local_5123[0 /*27*/]))
								{
									iParam0->f_24 = 0;
									iParam0->f_18++;
								}
							}
							break;
						
						case 2:
							if (iParam0->f_24 == 0)
							{
								TASK::CLEAR_PED_TASKS(*iParam0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar4);
								TASK::OPEN_SEQUENCE_TASK(&uVar4);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1692.16f, 3328.63f, 41.47f, 1f, 20000, 0.25f, 512, -180f);
								TASK::TASK_PLAY_ANIM(0, "misstrevor2ron_basic_moves", "idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar4);
								TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar4);
								TASK::CLEAR_SEQUENCE_TASK(&uVar4);
								iParam0->f_24 = 1;
							}
							if (iParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(*iParam0, 1692.16f, 3328.63f, 41.47f, 0.3f, 0.3f, 2f, 0, 1, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503) == 1)
									{
										iLocal_5651 = 1;
										iParam0->f_24 = 0;
										iParam0->f_18++;
									}
								}
							}
							break;
						
						case 3:
							if (iParam0->f_24 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_5123[1 /*27*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_5123[1 /*27*/]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Local_5504[0 /*20*/]))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_5504[0 /*20*/]))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_5504[0 /*20*/]))
												{
													if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_5504[0 /*20*/]) > 2000f)
													{
														TASK::CLEAR_SEQUENCE_TASK(&uVar5);
														TASK::OPEN_SEQUENCE_TASK(&uVar5);
														TASK::TASK_PLAY_ANIM_ADVANCED(0, "misstrevor2ig_4", "hide", ENTITY::GET_ENTITY_COORDS(*iParam0, 1), ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 4f, -4f, -1, 4096, 0, 2, 0);
														TASK::TASK_TURN_PED_TO_FACE_COORD(0, 1697.71f, 3314.78f, 40.15f, 0);
														TASK::TASK_PLAY_ANIM(0, "misstrevor2ig_3", "point", 8f, -8f, -1, 1, 0, 0, 0, 0);
														TASK::CLOSE_SEQUENCE_TASK(uVar5);
														TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar5);
														TASK::CLEAR_SEQUENCE_TASK(&uVar5);
														PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*iParam0, 0, 0);
														iParam0->f_24 = 1;
													}
												}
											}
										}
									}
									else
									{
										iParam0->f_24 = 1;
									}
								}
							}
							if (iParam0->f_24 == 1)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_4", "hide", 3))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_5123[1 /*27*/]))
									{
										if (ENTITY::IS_ENTITY_DEAD(Local_5123[1 /*27*/]) || PED::IS_PED_INJURED(Local_5123[1 /*27*/]))
										{
											STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_4");
											iParam0->f_24 = 0;
											iParam0->f_18++;
										}
									}
								}
							}
							break;
						
						case 4:
							if (iParam0->f_24 == 0)
							{
								TASK::CLEAR_PED_TASKS(*iParam0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, 1692.33f, 3328.83f, 40.47f, 2f, 20000, 0.25f, 0, 168.17f);
								iParam0->f_24 = 1;
							}
							if (iParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(*iParam0, 1692.163f, 3328.627f, 41.472f, 0.5f, 0.5f, 2f, 0, 1, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 713668775) == 7)
									{
										iParam0->f_24 = 0;
										iParam0->f_18++;
									}
								}
							}
							break;
						
						case 5:
							if (iParam0->f_24 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_5123[2 /*27*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_5123[2 /*27*/]))
									{
										STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_5");
										if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_5"))
										{
											TASK::TASK_PLAY_ANIM(*iParam0, "misstrevor2ig_5", "point_at_sniper", 4f, -4f, -1, 1, 0, 0, 0, 0);
											iParam0->f_24 = 1;
										}
									}
									else
									{
										iParam0->f_24 = 1;
									}
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_5123[2 /*27*/]))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_5123[2 /*27*/]) || PED::IS_PED_INJURED(Local_5123[2 /*27*/]))
								{
									iParam0->f_24 = 0;
									iParam0->f_18++;
								}
							}
							break;
						
						case 6:
							if (iParam0->f_24 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_5123[3 /*27*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_5123[3 /*27*/]))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_5", "point_at_sniper", 3))
										{
											STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_5");
											if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_5"))
											{
												TASK::TASK_PLAY_ANIM(*iParam0, "misstrevor2ig_5", "point_at_sniper", 4f, -4f, -1, 1, 0, 0, 0, 0);
												iParam0->f_24 = 1;
											}
										}
										else
										{
											iParam0->f_24 = 1;
										}
									}
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_5123[3 /*27*/]))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_5123[3 /*27*/]) || PED::IS_PED_INJURED(Local_5123[3 /*27*/]))
								{
									iParam0->f_24 = 0;
									iParam0->f_18++;
								}
							}
							break;
						
						case 7:
							if (iParam0->f_24 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_5123[4 /*27*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_5123[4 /*27*/]))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_3", "point", 3))
										{
											STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_3");
											if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_3"))
											{
												TASK::TASK_PLAY_ANIM(*iParam0, "misstrevor2ig_3", "point", 4f, -4f, -1, 1, 0, 0, 0, 0);
												iParam0->f_24 = 1;
											}
										}
										else
										{
											iParam0->f_24 = 1;
										}
									}
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_5123[4 /*27*/]))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_5123[4 /*27*/]) || PED::IS_PED_INJURED(Local_5123[4 /*27*/]))
								{
									iParam0->f_24 = 0;
									iParam0->f_18++;
								}
							}
							break;
						
						case 8:
							if (iParam0->f_24 == 0)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_2", "idle", 3))
								{
									STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_2");
									if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_2"))
									{
										TASK::CLEAR_SEQUENCE_TASK(&uVar6);
										TASK::OPEN_SEQUENCE_TASK(&uVar6);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
										TASK::TASK_PLAY_ANIM(0, "misstrevor2ig_2", "idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uVar6);
										TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar6);
										TASK::CLEAR_SEQUENCE_TASK(&uVar6);
										iParam0->f_24 = 1;
									}
								}
							}
							if (iParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_2", "idle", 3))
								{
									if (func_584(PLAYER::PLAYER_PED_ID()))
									{
										if (func_581(*iParam0, 1094713344, 1047233823, 1055957975))
										{
											iLocal_5654 = 1;
											iParam0->f_24 = 0;
											iParam0->f_18++;
										}
									}
								}
							}
							break;
						
						case 9:
							if (iParam0->f_24 == 0)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_2", "idle", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misstrevor2ig_2", "idle") > 0.65f)
									{
										TASK::CLEAR_SEQUENCE_TASK(&uVar7);
										TASK::OPEN_SEQUENCE_TASK(&uVar7);
										TASK::TASK_PLAY_ANIM(0, "misstrevor2ig_2", "outro", 4f, -4f, -1, 0, 0, 0, 0, 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1687.19f, 3297.24f, 40.13f, 2f, -1, 0.25f, 8192, 40000f);
										TASK::CLOSE_SEQUENCE_TASK(uVar7);
										TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar7);
										TASK::CLEAR_SEQUENCE_TASK(&uVar7);
										iParam0->f_24 = 1;
									}
								}
							}
							if (iParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(*iParam0, 1685.4f, 3296.7f, 41.09f, 3f, 3f, 1.5f, 0, 1, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503) == 7)
									{
										iParam0->f_24 = 0;
										iParam0->f_18++;
									}
								}
							}
							break;
						
						case 10:
							if (iParam0->f_24 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_5123[5 /*27*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_5123[5 /*27*/]))
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_3"))
										{
											TASK::TASK_PLAY_ANIM(*iParam0, "misstrevor2ig_3", "point", 4f, -4f, -1, 1, 0, 0, 0, 0);
										}
									}
								}
								iParam0->f_24 = 1;
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_5123[5 /*27*/]))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_5123[5 /*27*/]) || PED::IS_PED_INJURED(Local_5123[5 /*27*/]))
								{
									iParam0->f_24 = 0;
									iParam0->f_18++;
								}
							}
							break;
						
						case 11:
							if (iParam0->f_24 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_5123[6 /*27*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_5123[6 /*27*/]))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misstrevor2ig_3", "point", 3))
										{
											STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_3");
											if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_3"))
											{
												TASK::TASK_PLAY_ANIM(*iParam0, "misstrevor2ig_3", "point", 4f, -4f, -1, 1, 0, 0, 0, 0);
												iParam0->f_24 = 1;
											}
										}
										else
										{
											iParam0->f_24 = 1;
										}
									}
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_5123[6 /*27*/]))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_5123[6 /*27*/]) || PED::IS_PED_INJURED(Local_5123[6 /*27*/]))
								{
									iParam0->f_24 = 0;
									iParam0->f_18++;
								}
							}
							break;
						
						case 12:
							if (iParam0->f_24 == 0)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, 1680.91f, 3280.3f, 40.94f, 2f, 20000, 0.25f, 0, -160.04f);
								iParam0->f_24 = 1;
							}
							STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_7");
							STREAMING::REQUEST_MODEL(Local_5583.f_7);
							if (iParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(*iParam0, 1680.91f, 3280.3f, 40.94f, 0.7f, 0.7f, 2f, 0, 1, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 713668775) == 7)
									{
										iParam0->f_24 = 0;
										iParam0->f_18++;
									}
								}
							}
							break;
						
						case 13:
							if (iParam0->f_24 == 0)
							{
								STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_7");
								if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_7"))
								{
									iLocal_5913 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 180f, 2);
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
									{
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5913, uLocal_5739[1], -1);
									}
									TASK::TASK_SYNCHRONIZED_SCENE(*iParam0, iLocal_5913, "misstrevor2ig_7", "plant_bomb", 8f, -8f, 0, 0, 4f, 0);
									iLocal_5655 = 1;
									iParam0->f_24 = 1;
								}
							}
							if (iParam0->f_24 == 1)
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5913))
								{
									PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_5913, 1.25f);
									if (!ENTITY::DOES_ENTITY_EXIST(Local_5583))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5913) >= 0.385f)
										{
											if (func_599(&Local_5583, 0))
											{
												if (!ENTITY::IS_ENTITY_ATTACHED(Local_5583))
												{
													ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_5583, *iParam0, PED::GET_PED_BONE_INDEX(*iParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
												}
											}
										}
									}
									else if (!ENTITY::IS_ENTITY_DEAD(Local_5583))
									{
										if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_5583, *iParam0))
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5913) >= 0.705f)
											{
												ENTITY::DETACH_ENTITY(Local_5583, 0, 1);
												ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_5583, 1681.77f, 3280.74f, 40.66f, 0, 0, 1);
												ENTITY::SET_ENTITY_ROTATION(Local_5583, 176.66f, -51.67f, -156.23f, 2, 1);
												ENTITY::FREEZE_ENTITY_POSITION(Local_5583, 1);
											}
										}
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5913) >= 0.99f)
									{
										iParam0->f_24 = 0;
										iParam0->f_18++;
									}
								}
							}
							break;
						
						case 14:
							if (iParam0->f_24 == 0)
							{
								TASK::CLEAR_SEQUENCE_TASK(&uVar8);
								TASK::OPEN_SEQUENCE_TASK(&uVar8);
								if (!PED::IS_PED_INJURED(Local_5123[7 /*27*/]))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1678.177f, 3290.145f, 39.9616f, 1f, 20000, 0.25f, 512, 201.6975f);
								}
								else
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1678.177f, 3290.145f, 39.9616f, 1f, 20000, 0.25f, 512, 300f);
								}
								TASK::TASK_PLAY_ANIM(0, "misstrevor2ron_basic_moves", "idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar8);
								TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar8);
								TASK::CLEAR_SEQUENCE_TASK(&uVar8);
								iParam0->f_24 = 1;
							}
							if (iParam0->f_24 == 1)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(*iParam0, 1678.45f, 3290.73f, 41.46f, 2f, 2f, 2f, 0, 1, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503) == 1)
									{
										iParam0->f_24 = 0;
										iParam0->f_18++;
									}
								}
							}
							break;
						
						case 15:
							if (iParam0->f_24 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_4414[10 /*19*/]))
									{
										if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[10 /*19*/]))
										{
											if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_4414[10 /*19*/]) > 12000f)
											{
												TASK::TASK_PLAY_ANIM(*iParam0, "misstrevor2ig_5", "point_at_sniper", 8f, -8f, -1, 1, 0, 0, 0, 0);
												iParam0->f_24 = 1;
											}
										}
									}
								}
							}
							break;
					}
					iVar9 = GlobalFunc_2524(*iParam0, iLocal_490, 0, 0, 28);
					if (ENTITY::DOES_ENTITY_EXIST(iVar9))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar9))
						{
							if (GlobalFunc_4951(*iParam0, iVar9) < 10f)
							{
								func_589(iParam0, 9);
							}
						}
					}
					break;
				}
			}
	}
}


void func_608()//Position - 0x70138
{
	int iVar0;
	
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_sniperrifle"))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle")) < 1)
			{
				WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 20);
			}
		}
		if (iVar0 == joaat("weapon_heavysniper"))
		{
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper")) < 1)
			{
				WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), 20);
			}
		}
	}
}

void func_609()//Position - 0x701A2
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_5593[0 /*10*/]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_5593[0 /*10*/], PLAYER::PLAYER_PED_ID(), 0))
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_5593[0 /*10*/], joaat("weapon_sniperrifle"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_5593[0 /*10*/], joaat("weapon_heavysniper"), 0))
			{
				iLocal_5917++;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_5593[0 /*10*/]);
			}
		}
	}
	if (iLocal_5917 >= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_5593[0 /*10*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_5593[0 /*10*/]))
			{
				if (!iLocal_5916)
				{
					iLocal_5916 = 1;
				}
			}
		}
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_5739[1], PLAYER::PLAYER_PED_ID(), 0))
	{
		ENTITY::SET_ENTITY_PROOFS(uLocal_5739[1], 0, 0, 0, 0, 0, 0, 0, 0);
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_5739[1], joaat("weapon_sniperrifle"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_5739[1], joaat("weapon_heavysniper"), 0))
		{
			iLocal_5917++;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_5739[1]);
		}
	}
	if (!iLocal_5918)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uLocal_5739[1], 1);
			iLocal_5918 = 1;
		}
	}
	if (iLocal_5917 >= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
		{
			if (!iLocal_5916)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uLocal_5739[1], 0);
				ENTITY::SET_ENTITY_PROOFS(uLocal_5739[1], 0, 0, 0, 0, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_5739[1], 1);
				ENTITY::SET_ENTITY_DYNAMIC(uLocal_5739[1], 0);
				PHYSICS::SET_DISABLE_BREAKING(uLocal_5739[1], 0);
				iLocal_5916 = 1;
			}
		}
	}
}

void func_610()//Position - 0x70310
{
	if (iLocal_5819 < 5)
	{
		func_665();
	}
	func_664();
	func_663();
	if (!func_36("BUDDIES IN VEHICLE"))
	{
		if (!PED::IS_PED_INJURED(Local_5546))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_5546, 1f);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[11 /*19*/], 0))
				{
					func_33("BUDDIES IN VEHICLE", 1);
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1574.341f, 3361.412f, 40.62634f, 1577.552f, 3361.42f, 43.37634f, 3.75f, 0, 1, 0))
	{
		if (!PED::IS_PED_INJURED(Local_5546))
		{
			if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_5546, 1) < 6f)
				{
					PAD::DISABLE_CONTROL_ACTION(2, 263, 1);
					PAD::DISABLE_CONTROL_ACTION(2, 264, 1);
				}
			}
		}
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), GlobalFunc_546(29)) < (250f * 250f))
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	}
	switch (iLocal_5819)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_662();
			}
			GlobalFunc_9223(2, joaat("weapon_sniperrifle"), 1, 1);
			GlobalFunc_8634(29, 1);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 173, 1);
			ENTITY::CREATE_FORCED_OBJECT(1681.02f, 3282.843f, 39.9353f, 50f, joaat("prop_gas_tank_02a"), 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_510();
			STREAMING::REQUEST_IPL("airfield");
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("blazer"), 3);
			if (!PED::IS_PED_INJURED(Local_5546))
			{
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_5546, 1);
				PED::SET_PED_STEERS_AROUND_OBJECTS(Local_5546, 0);
			}
			if (!func_36("TR2_AMN"))
			{
				if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_AMN", 7, 0, 0, 0))
				{
					func_33("TR2_AMN", 1);
				}
			}
			if (!PED::IS_PED_INJURED(Local_5546))
			{
				PED::SET_PED_CONFIG_FLAG(Local_5546, 269, 1);
			}
			RECORDING::_0x293220DA1B46CEBC(3f, 8f, 3);
			func_33("START RON GOTO GUNSHOP", 0);
			func_33("RON ARRIVES AT GUNSHOP", 0);
			func_33("GET BACK IN QUAD", 0);
			func_33("START RON GOTO TOWER", 0);
			func_565();
			GlobalFunc_562(63);
			iLocal_5907 = 0;
			MISC::SET_WEATHER_TYPE_PERSIST("OVERCAST");
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 1, 0, 1);
			AUDIO::START_AUDIO_SCENE("TREVOR_2_DRIVE_ATV");
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_4414[11 /*19*/], "TREVOR_2_RONS_ATV", 0);
			MISC::SET_INSTANCE_PRIORITY_HINT(3);
			iLocal_5819++;
			GlobalFunc_2781(500);
			break;
		
		case 1:
			if (GlobalFunc_9194(&Local_5875, 1698.343f, 3753.313f, 33.7053f, 0.1f, 0.1f, 2f, 0, Local_4414[12 /*19*/], "SJC_GOTOSHOP", "SJC_GETONQ", "SJC_GETONQ1", 1, 0, 1, -1))
			{
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_5875.f_5) || GlobalFunc_8372(29))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1672.159f, 3752.786f, 32.55024f, 1721.808f, 3781.365f, 43.2375f, 53f, 0, 1, 0))
					{
						GlobalFunc_5105();
						GlobalFunc_5652(&Local_5875, 1, 0);
						iLocal_5819++;
					}
					else if (!GlobalFunc_5172(&Local_5875, 1))
					{
						if (iLocal_5805 == 0)
						{
							if (!PED::IS_PED_INJURED(Local_5546))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
								{
									if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[11 /*19*/], 0))
									{
										if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_TRAINS_VOLUME"))
										{
											AUDIO::START_AUDIO_SCENE("TREVOR_2_TRAINS_VOLUME");
										}
										if (GlobalFunc_156(Local_5546, PLAYER::PLAYER_PED_ID(), 1) > 10f)
										{
											if (GlobalFunc_7066() == 0)
											{
												if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_AMND", 7, 0, 0, 0))
												{
													iLocal_5805 = 1;
												}
											}
											else if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_AMND", 7, 0, 0, 0))
											{
												iLocal_5805 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(Local_5546.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_5546.f_1));
				}
				if (iLocal_5805 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
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
						if (!GlobalFunc_663("LOSE_WANTED", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
					}
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[12 /*19*/], 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1698.876f, 3750.415f, 32.37654f, 1700.869f, 3752.534f, 36.85978f, 3.25f, 0, 1, 0))
					{
						if (!func_36("TR2_STOP_DRIVE"))
						{
							if (GlobalFunc_530(Local_4414[12 /*19*/], 2f, 1, 1056964608, 0, 1))
							{
								TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[12 /*19*/], 0);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
								func_33("TR2_STOP_DRIVE", 1);
							}
						}
					}
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[12 /*19*/], 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1700.229f, 3745.691f, 32.50348f, 1710.552f, 3756.383f, 35.84982f, 4.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1703.237f, 3766.65f, 32.92269f, 1712.972f, 3757.287f, 35.86057f, 4.5f, 0, 1, 0))
					{
						if (!func_36("TR2_STOP_DRIVE_BY_SHOP"))
						{
							if (GlobalFunc_530(Local_4414[12 /*19*/], 3f, 1, 1056964608, 0, 1))
							{
								TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[12 /*19*/], 0);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
								func_33("TR2_STOP_DRIVE_BY_SHOP", 1);
							}
						}
						else
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						}
					}
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (func_646(&Local_5875, 1698.343f, 3753.313f, 33.7053f, 0.1f, 0.1f, 2f, 0, "", 0, 1, -1, 1))
			{
			}
			else if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1699.789f, 3758.148f, 33.45532f, 1695.031f, 3752.867f, 36.20532f, 5.75f, 0, 1, 0) || GlobalFunc_8372(29))
				{
					RECORDING::_0x293220DA1B46CEBC(8f, 5f, 3);
					if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
					{
						HUD::REMOVE_BLIP(&(Local_5875.f_5));
					}
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (PED::IS_PED_IN_GROUP(Local_5546))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_5546);
						}
					}
					PED::GET_CLOSEST_PED(1692.278f, 3760.911f, 33.7053f, 20f, 1, 1, &iLocal_5912, 0, 1, -1);
					GlobalFunc_173(&Local_72, 8, iLocal_5912, "MELVIN", 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_5912))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_5912, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					}
					iLocal_5805 = 0;
					GlobalFunc_5652(&Local_5875, 1, 0);
					GlobalFunc_4503(joaat("weapon_sniperrifle"));
					iLocal_5909 = 0;
					iLocal_5819++;
				}
			}
			break;
		
		case 3:
			if (func_36("TR2_RZAA"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(1699.376f, 3752.179f, 33.71643f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 20f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
					iLocal_5116 = 20;
					iLocal_5874 = 12;
				}
			}
			if (!func_36("UNPAUSE"))
			{
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
					func_33("UNPAUSE", 1);
				}
			}
			if (GlobalFunc_8372(29))
			{
				if (!func_36("TR2_RZAA"))
				{
					if (!GlobalFunc_5172(&Local_5875, 1))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_IAMN", 7, 0, 0, 0))
							{
								func_33("TR2_RZAA", 1);
							}
						}
					}
				}
			}
			else if ((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0) && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max"))) && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
			{
			}
			else if (func_36("TR2_IAMN"))
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_5105();
				}
			}
			if (!GlobalFunc_8388(29))
			{
				if (func_36("TR2_RZAA"))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")) && !WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
					{
						if (!func_36("SJC_BUYATTACH"))
						{
							if (!GlobalFunc_5172(&Local_5875, 2))
							{
								GlobalFunc_5884("SJC_BUYATTACH");
								func_33("SJC_BUYATTACH", 1);
							}
						}
					}
					else
					{
						if (!func_36("SJC_BUYSCOP"))
						{
							if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")) && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
							{
								if (!GlobalFunc_5172(&Local_5875, 2))
								{
									GlobalFunc_5884("SJC_BUYSCOP");
									func_33("SJC_BUYSCOP", 1);
								}
							}
						}
						if (!func_36("SJC_BUYSIL"))
						{
							if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
							{
								if (!GlobalFunc_5172(&Local_5875, 2))
								{
									GlobalFunc_5884("SJC_BUYSIL");
									func_33("SJC_BUYSIL", 1);
								}
							}
						}
					}
				}
			}
			else if ((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0) && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max"))) && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
			{
				if (!func_36("TR2_QLAA"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "TR2_QLAA", "TREVOR", 3);
						func_33("TR2_QLAA", 1);
					}
				}
			}
			else
			{
				if (GlobalFunc_8388(29) && Global_90014.f_1 == joaat("weapon_sniperrifle"))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0))
					{
						if (!func_36("TR2_QJAA SNIPE"))
						{
							GlobalFunc_4956();
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
							{
								GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "TR2_DRAA", "TREVOR", 3);
								func_33("TR2_QJAA SNIPE", 1);
							}
						}
					}
					else
					{
						if (func_36("TR2_QJAA"))
						{
							if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")) && !WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
							{
								if (!func_36("TR2_DSAA"))
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
									{
										GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "TR2_DSAA", "TREVOR", 3);
										func_33("TR2_DSAA", 1);
									}
								}
							}
						}
						if (func_36("TR2_DSAA"))
						{
							if (func_36("TR2_QKAA"))
							{
								if (!func_36("TR2_DUAA"))
								{
									if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")) && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
									{
										if (!func_36("TR2_DUAA"))
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
											{
												GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "TR2_DUAA", "TREVOR", 3);
												func_33("TR2_DUAA", 1);
											}
										}
									}
								}
							}
						}
						if (func_36("TR2_DSAA"))
						{
							if (func_36("TR2_XYAA"))
							{
								if (!func_36("TR2_EBAA"))
								{
									if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")) && !WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
									{
										if (!func_36("TR2_EBAA"))
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
											{
												GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "TR2_EBAA", "TREVOR", 3);
												func_33("TR2_EBAA", 1);
											}
										}
									}
								}
							}
						}
					}
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0))
				{
					if (!func_36("TR2_QJAA"))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "TR2_QJAA", "TREVOR", 3);
							func_33("TR2_QJAA", 1);
						}
					}
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")))
				{
					if (!func_36("TR2_QKAA"))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "TR2_QKAA", "TREVOR", 3);
							func_33("TR2_QKAA", 1);
						}
					}
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
				{
					if (!func_36("TR2_XYAA"))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "TR2_XYAA", "TREVOR", 3);
							func_33("TR2_XYAA", 1);
						}
					}
				}
			}
			if ((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0) && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max"))) && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
			{
				if (!GlobalFunc_8388(29))
				{
					HUD::CLEAR_PRINTS();
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_5652(&Local_5875, 1, 0);
						if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
						{
							HUD::REMOVE_BLIP(&(Local_5875.f_5));
						}
						GRAPHICS::SET_SEETHROUGH(0);
						func_33("TR2_RNSC", 1);
						GlobalFunc_8634(29, 0);
						iLocal_5819++;
					}
				}
			}
			else if (!func_36("LEFT THE SHOP"))
			{
				if (!GlobalFunc_8372(29))
				{
					GlobalFunc_5652(&Local_5875, 1, 0);
					func_33("LEFT THE SHOP", 1);
				}
			}
			else
			{
				if (func_646(&Local_5875, 1698.343f, 3753.313f, 33.7053f, 0.1f, 0.1f, 2f, 0, "", 1, 1, -1, 1))
				{
				}
				else if (!iLocal_5909)
				{
					if (!GlobalFunc_5172(&Local_5875, 2))
					{
						if ((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0) && !WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max"))) && !WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
						{
							iLocal_5909 = 1;
							GlobalFunc_5884("SJC_BACKSHOP");
						}
						if ((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0) && !WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"))) && !WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")))
						{
							iLocal_5909 = 1;
							GlobalFunc_5884("SJC_BACKSHOPBO");
						}
						if ((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0) && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"))) && !WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")))
						{
							iLocal_5909 = 1;
							GlobalFunc_5884("SJC_BACKSHOPSC");
						}
						if ((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0) && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max"))) && !WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
						{
							iLocal_5909 = 1;
							GlobalFunc_5884("SJC_BACKSHOPSI");
						}
					}
				}
				if (GlobalFunc_8372(29))
				{
					if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
					{
						HUD::REMOVE_BLIP(&(Local_5875.f_5));
					}
					if (((GlobalFunc_663("SJC_BACKSHOPSI", 0, 0) || GlobalFunc_663("SJC_BACKSHOPSC", 0, 0)) || GlobalFunc_663("SJC_BACKSHOPBO", 0, 0)) || GlobalFunc_663("SJC_BACKSHOP", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					GlobalFunc_5652(&Local_5875, 1, 0);
					func_33("LEFT THE SHOP", 0);
					iLocal_5909 = 0;
				}
			}
			break;
		
		case 4:
			if (!GlobalFunc_8372(29))
			{
				if (iLocal_5096 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_5096);
				}
			}
			if (iLocal_5805 == 1)
			{
				if (!func_36("MAIN CONVO FINISHED"))
				{
					if (!GlobalFunc_111())
					{
						func_33("MAIN CONVO FINISHED", 1);
						iLocal_5911 = MISC::GET_GAME_TIMER();
					}
				}
				else if (!func_36("TR_dr01a"))
				{
					if (!GlobalFunc_5172(&Local_5875, 1))
					{
						if (GlobalFunc_588(&iLocal_5911, MISC::GET_RANDOM_INT_IN_RANGE(14000, 22000)))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_dr01a", 7, 0, 0, 0))
							{
								func_33("TR_dr01a", 1);
								iLocal_5910 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else if (GlobalFunc_588(&iLocal_5910, MISC::GET_RANDOM_INT_IN_RANGE(12000, 40000)))
				{
					func_33("TR_dr01a", 0);
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1580f, 3364.239f, 37.5f, 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_36("TR_pl5op"))
				{
					if (!GlobalFunc_5172(&Local_5875, 1))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl5op", 7, 0, 0, 0))
							{
								func_33("TR_pl5op", 1);
							}
						}
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
			{
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					if (GlobalFunc_9194(&Local_5875, 1576.64f, 3360.53f, 42.13f, 6f, 6f, 2f, 0, Local_4414[12 /*19*/], "SJC_GETWAR", "SJC_GETONQ", "SJC_GETONQ1", 1, 0, 1, -1))
					{
						if (GlobalFunc_530(Local_4414[12 /*19*/], 10.5f, 1, 1056964608, 0, 1))
						{
							if (HUD::DOES_BLIP_EXIST(Local_5875))
							{
								HUD::REMOVE_BLIP(&Local_5875);
							}
							AUDIO::STOP_AUDIO_SCENE("TREVOR_2_DRIVE_ATV");
							GlobalFunc_5652(&Local_5875, 1, 0);
							GlobalFunc_5105();
							iLocal_5805 = 0;
							iLocal_5819++;
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
						{
							HUD::SET_BLIP_COLOUR(Local_5875.f_5, 3);
							HUD::SET_BLIP_ROUTE_COLOUR(Local_5875.f_5, 3);
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_5875.f_5, "CMN_FRBLIP");
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1580f, 3364.239f, 37.5f, 6f, 6f, 6f, 0, 1, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[12 /*19*/], 0))
							{
								if (GlobalFunc_530(Local_4414[12 /*19*/], 10.5f, 1, 1056964608, 0, 1))
								{
									if (GlobalFunc_663("SJC_GETONQ1", 0, 0))
									{
										HUD::CLEAR_PRINTS();
									}
									AUDIO::STOP_AUDIO_SCENE("TREVOR_2_DRIVE_ATV");
									GlobalFunc_5652(&Local_5875, 1, 0);
									GlobalFunc_5105();
									iLocal_5805 = 0;
									iLocal_5819++;
								}
							}
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1580f, 3364.239f, 37.5f, 30f, 30f, 30f, 0, 1, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[12 /*19*/], 0))
						{
							if (GlobalFunc_663("SJC_GETONQ1", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							AUDIO::STOP_AUDIO_SCENE("TREVOR_2_DRIVE_ATV");
							GlobalFunc_5105();
							iLocal_5805 = 0;
							iLocal_5819++;
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
						{
							if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (iLocal_5805 == 0)
									{
										if (GlobalFunc_7066() == 0)
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_COME", 7, 0, 0, 0))
											{
												iLocal_5805 = 1;
											}
										}
										else if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_COME", 7, 0, 0, 0))
										{
											iLocal_5805 = 1;
										}
									}
								}
							}
						}
						if (iLocal_5805 == 1)
						{
							if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
							{
								if (!GlobalFunc_5172(&Local_5875, 1))
								{
									if (!GlobalFunc_111())
									{
										if (!func_36("TR2_GOTKIT"))
										{
											if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_GOTKIT", 7, 0, 0, 0))
											{
												func_33("TR2_GOTKIT", 1);
											}
										}
									}
								}
							}
							if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
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
			}
			break;
		
		case 5:
			if (func_36("STREAM AIRSTRIP"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(1574.838f, 3363.775f, 47.6348f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 20f)
				{
					uLocal_5115 = STREAMING::STREAMVOL_CREATE_SPHERE(1700.36f, 3293.01f, 48.86f, 10f, 12, 33);
					func_33("STREAM AIRSTRIP", 1);
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(1574.838f, 3363.775f, 47.6348f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 30f)
			{
				if (STREAMING::STREAMVOL_IS_VALID(uLocal_5115))
				{
					STREAMING::STREAMVOL_DELETE(uLocal_5115);
					func_33("STREAM AIRSTRIP", 0);
				}
			}
			if (Local_5546.f_21 != 99)
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_5546, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				Local_5546.f_21 = 99;
			}
			if (!func_36("TR_pl5op"))
			{
				if (!GlobalFunc_5172(&Local_5875, 1))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl5op", 7, 0, 0, 0))
						{
							func_33("TR_pl5op", 1);
						}
					}
				}
			}
			else
			{
				if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1572.096f, 3363.188f, 40.87634f, 1577.558f, 3363.069f, 43.12634f, 7.5f, 0, 1, 0))
					{
						if (!func_36("TR2_RNSC"))
						{
							if (!GlobalFunc_5172(&Local_5875, 1))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_RNSC", 7, 0, 0, 0))
									{
										iLocal_5851 = MISC::GET_GAME_TIMER();
										func_33("TR2_RNSC", 1);
									}
								}
							}
						}
						else if (GlobalFunc_588(&iLocal_5851, MISC::GET_RANDOM_INT_IN_RANGE(26000, 30000)))
						{
							func_33("TR2_RNSC", 0);
						}
					}
				}
				if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1572.096f, 3363.188f, 40.87634f, 1577.558f, 3363.069f, 43.12634f, 7.5f, 0, 1, 0))
					{
						if (!func_36("TR2_RNLC"))
						{
							if (!GlobalFunc_5172(&Local_5875, 1))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_RNLC", 7, 0, 0, 0))
									{
										iLocal_5851 = MISC::GET_GAME_TIMER();
										func_33("TR2_RNLC", 1);
									}
								}
							}
						}
						else if (GlobalFunc_588(&iLocal_5851, MISC::GET_RANDOM_INT_IN_RANGE(16000, 22000)))
						{
							func_33("TR2_RNLC", 0);
						}
					}
				}
				if (!func_36("LOAD FOR TOD"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1579.699f, 3363.894f, 35.41975f, 1569.984f, 3363.613f, 49.30503f, 10.25f, 0, 1, 0))
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1708.601f, 3328.965f, 40.1454f, 20f, 2);
						func_33("LOAD FOR TOD", 1);
					}
				}
				else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1579.699f, 3363.894f, 35.41975f, 1569.984f, 3363.613f, 49.30503f, 10.25f, 0, 1, 0))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					func_33("LOAD FOR TOD", 0);
				}
				if (func_646(&Local_5875, 1574.838f, 3363.775f, 47.6348f, 0.1f, 0.1f, 2f, 1, "SJC_TOWERG", 0, 1, -1, 1))
				{
					if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(Local_5546))
						{
							TASK::TASK_CLEAR_LOOK_AT(Local_5546);
						}
						GlobalFunc_5105();
						RECORDING::_0x293220DA1B46CEBC(5f, 4f, 4);
						VEHICLE::REQUEST_VEHICLE_RECORDING(29, "RCSJC");
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(1);
						iLocal_5908 = 0;
						GlobalFunc_5652(&Local_5875, 1, 0);
						AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_START");
						AUDIO::STOP_AUDIO_SCENE("TREVOR_2_DRIVE_ATV");
						iLocal_5819++;
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1576.692f, 3363.695f, 47.53484f, 1572.984f, 3363.694f, 50.38483f, 4.5f, 0, 1, 0))
				{
					if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(Local_5546))
						{
							TASK::TASK_CLEAR_LOOK_AT(Local_5546);
						}
						GlobalFunc_5105();
						VEHICLE::REQUEST_VEHICLE_RECORDING(29, "RCSJC");
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(1);
						iLocal_5908 = 0;
						GlobalFunc_5652(&Local_5875, 1, 0);
						AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_START");
						AUDIO::STOP_AUDIO_SCENE("TREVOR_2_DRIVE_ATV");
						iLocal_5819++;
					}
				}
				else if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
				{
					if (!func_36("TR_CALL2"))
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_CALL2", 7, 0, 0, 0))
								{
									func_33("TR_CALL2", 1);
								}
							}
						}
					}
				}
			}
			break;
		
		case 6:
			Local_60.f_1 = GlobalFunc_7719();
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			if (func_614(63, &Local_60, 1, 1, 1, 1, 1))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				GlobalFunc_9025(&Local_60, 0, 0, 2000, 0, 1, 1, 1);
				STREAMING::NEW_LOAD_SCENE_STOP();
				if (STREAMING::STREAMVOL_IS_VALID(uLocal_5115))
				{
					STREAMING::STREAMVOL_DELETE(uLocal_5115);
				}
				RECORDING::_0x293220DA1B46CEBC(10f, 3f, 4);
				iLocal_5819++;
			}
			else if (iLocal_5908 == 0)
			{
				if (CAM::DOES_CAM_EXIST(Local_60.f_4))
				{
					if (CAM::IS_CAM_ACTIVE(Local_60.f_4))
					{
						if (!func_36("TIMECYCLE SHIFT"))
						{
							if (CAM::GET_CAM_SPLINE_PHASE(Local_60.f_4) > 0.2f)
							{
								func_33("TIMECYCLE SHIFT", 1);
							}
						}
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(29, "RCSJC"))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1576.11f, 3363.309f, 47.6348f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 252.6176f);
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 1);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
							{
								ENTITY::SET_ENTITY_COORDS(Local_4414[12 /*19*/], 1578.81f, 3358.61f, 37.03f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_4414[12 /*19*/], 250.73f);
							}
							if (!PED::IS_PED_INJURED(Local_5546))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
								{
									if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[11 /*19*/], 0))
									{
										if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[11 /*19*/]))
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[11 /*19*/], 29, "RCSJC", 1);
											VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_4414[11 /*19*/]);
											PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_5546, 1);
											VEHICLE::SET_VEHICLE_LIGHTS(Local_4414[11 /*19*/], 1);
											iLocal_5908 = 1;
										}
									}
									else if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[11 /*19*/], -1))
									{
										PED::SET_PED_INTO_VEHICLE(Local_5546, Local_4414[11 /*19*/], -1);
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_36("TR_CALL3"))
			{
				if (!GlobalFunc_5172(&Local_5875, 1))
				{
					if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_CALL3", 7, 0, 0, 0))
					{
						func_33("TR_CALL3", 1);
					}
				}
			}
			else if (!func_36("TR_pl0b"))
			{
				if (GlobalFunc_7066() == 0)
				{
					if (!GlobalFunc_5172(&Local_5875, 1))
					{
						if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl0b", 7, 0, 0, 0))
						{
							func_33("TR_pl0b", 1);
						}
					}
				}
				else if (!GlobalFunc_5172(&Local_5875, 1))
				{
					if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_pl0a", 7, 0, 0, 0))
					{
						func_33("TR_pl0b", 1);
					}
				}
			}
			else if (!PED::IS_PED_INJURED(Local_5546))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[11 /*19*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[11 /*19*/]))
						{
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_4414[11 /*19*/]);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_5546, 1);
							ENTITY::SET_ENTITY_HEALTH(Local_5546, 300);
							iLocal_5819++;
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[11 /*19*/], 29, "RCSJC", 1);
						}
					}
					else if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[11 /*19*/], -1))
					{
						PED::SET_PED_INTO_VEHICLE(Local_5546, Local_4414[11 /*19*/], -1);
					}
				}
			}
			break;
		
		case 8:
			if (!PED::IS_PED_INJURED(Local_5546))
			{
				PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_5546, 128);
			}
			TASK::REMOVE_WAYPOINT_RECORDING("trv2QuadGun");
			TASK::REMOVE_WAYPOINT_RECORDING("trv2QuadGtoA");
			GlobalFunc_4503(0);
			func_611();
			STREAMING::REQUEST_IPL("airfield");
			func_56();
			break;
	}
}

void func_611()//Position - 0x71DB1
{
	Local_5123[0 /*27*/].f_10 = { 1695.79f, 3293.9f, 40.15f };
	Local_5123[0 /*27*/].f_13 = 307.0567f;
	Local_5123[0 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5123[1 /*27*/].f_10 = { 1695.79f, 3293.9f, 40.15f };
	Local_5123[1 /*27*/].f_13 = 307.0567f;
	Local_5123[1 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5123[2 /*27*/].f_10 = { 1700.506f, 3293.064f, 47.9264f };
	Local_5123[2 /*27*/].f_13 = 110.6841f;
	Local_5123[2 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5123[3 /*27*/].f_10 = { 1726.12f, 3291.04f, 40.15f };
	Local_5123[3 /*27*/].f_13 = 97.0908f;
	Local_5123[3 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5123[4 /*27*/].f_10 = { 1700.902f, 3292.332f, 47.9264f };
	Local_5123[4 /*27*/].f_13 = 93.9332f;
	Local_5123[4 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5123[5 /*27*/].f_10 = { 1683.58f, 3285.26f, 40.95f };
	Local_5123[5 /*27*/].f_13 = 82.84f;
	Local_5123[5 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5123[6 /*27*/].f_10 = { 1685.6f, 3286.9f, 40.14f };
	Local_5123[6 /*27*/].f_13 = 123.9396f;
	Local_5123[6 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5123[7 /*27*/].f_10 = { 1683.33f, 3285.52f, 40.14f };
	Local_5123[7 /*27*/].f_13 = 128.5609f;
	Local_5123[7 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5340[0 /*27*/].f_10 = { 1741.264f, 3334.529f, 40.1464f };
	Local_5340[0 /*27*/].f_13 = 345.8902f;
	Local_5340[0 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5340[1 /*27*/].f_10 = { 1716.54f, 3303.203f, 40.2142f };
	Local_5340[1 /*27*/].f_13 = 129.2187f;
	Local_5340[1 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5340[2 /*27*/].f_10 = { 1716.157f, 3293.475f, 40.1894f };
	Local_5340[2 /*27*/].f_13 = 109.6988f;
	Local_5340[2 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5340[3 /*27*/].f_10 = { 1685.341f, 3286.74f, 40.1467f };
	Local_5340[3 /*27*/].f_13 = 127.0312f;
	Local_5340[3 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5449[0 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5449[1 /*27*/].f_14 = joaat("g_m_y_lost_01");
	Local_5504[0 /*20*/].f_2 = { 1887.128f, 3236.906f, 44.2666f };
	Local_5504[0 /*20*/].f_5 = 117.7584f;
	Local_5504[0 /*20*/].f_6 = joaat("gburrito");
	Local_5504[0 /*20*/].f_19 = 31;
	Local_5525[0 /*20*/].f_2 = { 1700.169f, 3276.51f, 40.1465f };
	Local_5525[0 /*20*/].f_5 = 127.9391f;
	Local_5525[0 /*20*/].f_6 = joaat("hexer");
	Local_5525[0 /*20*/].f_19 = 39;
	Local_4414[10 /*19*/].f_6 = joaat("maverick");
	Local_4414[10 /*19*/].f_2 = { 1706.702f, 3322.242f, 40.1486f };
	Local_4414[10 /*19*/].f_5 = 311.7382f;
	Local_4414[10 /*19*/].f_7 = 6;
	Local_5593[0 /*10*/].f_1 = { 1683.27f, 3278.7f, 39.93f };
	Local_5593[0 /*10*/].f_4 = { 0f, 0f, 109.96f };
	Local_5593[0 /*10*/].f_7 = joaat("prop_gas_tank_02a");
	Local_5614[0 /*10*/].f_1 = { 1700.91f, 3295.05f, 45.89f };
	Local_5614[0 /*10*/].f_7 = joaat("prop_wall_light_02a");
	Local_5614[1 /*10*/].f_1 = { 1697.82f, 3293.07f, 47.24f };
	Local_5614[1 /*10*/].f_7 = joaat("prop_wall_light_02a");
	Local_5614[2 /*10*/].f_1 = { 1699.36f, 3289.41f, 51.26f };
	Local_5614[2 /*10*/].f_7 = joaat("prop_wall_light_02a");
	Local_5573.f_1 = { 1729.523f, 3299.398f, 40.2263f };
	Local_5573.f_4 = { 0f, 0f, 0f };
	Local_5573.f_7 = joaat("prop_phone_ing");
	Local_5583.f_1 = { 1686.3f, 3279.27f, 40.1f };
	Local_5583.f_4 = { 0f, 0f, 0f };
	Local_5583.f_7 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stickybomb"));
	Local_5117 = 1328388057;
	Local_5117.f_1 = { 1697.855f, 3292.497f, 49.0851f };
	Local_5117.f_4 = joaat("prop_cs4_05_tdoor");
}



bool func_614(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x723B7
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_615(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_615(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x723E5
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((GlobalFunc_2(0) && !bParam2) && !bParam4)
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
			fVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
				fVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				GlobalFunc_7641(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
			fVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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































bool func_646(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x74725
{
	return GlobalFunc_8566(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 3, 0, 0, 0, 0, sParam8, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam9, GlobalFunc_648(), 0, 0, bParam10, iParam11, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), bParam12, 1065353216);
}
















void func_662()//Position - 0x75D0A
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (!PED::IS_PED_INJURED(Local_5546))
	{
		GlobalFunc_11272(Local_5546, 14, 154, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_5546, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_5546, 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_5546, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_5546, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_5546, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_5546, 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_5546, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_5546, 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_5546, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_5546, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_5546, 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_5546, 11, 0, 0, 0);
		PED::SET_PED_PROP_INDEX(Local_5546, 0, 0, 0, false);
		PED::SET_PED_PROP_INDEX(Local_5546, 1, 0, 0, false);
	}
}

void func_663()//Position - 0x75DF0
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(1700.029f, 3752.931f, 33.71693f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 80f)
	{
		func_208(13, 0f, 0f, 0f, 0, 0);
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(1700.029f, 3752.931f, 33.71693f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 100f)
	{
		if (!GlobalFunc_8372(29))
		{
			if (iLocal_5096 != 0)
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_5096);
			}
		}
	}
}

int func_664()//Position - 0x75E6B
{
	int iVar0;
	
	iVar0 = iLocal_5874 + 1;
	switch (iLocal_5828)
	{
		case 0:
			if (iVar0 == 3)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1580f, 3364.239f, 37.5f, 100f, 100f, 100f, 0, 1, 0))
				{
					func_535();
					func_30(joaat("cuban800"));
					func_30(joaat("hauler"));
					func_30(joaat("tanker"));
					func_30(joaat("gburrito"));
					func_30(joaat("g_m_y_lost_01"));
					func_30(GlobalFunc_4946(20));
					func_30(joaat("prop_gas_tank_02a"));
					func_30(joaat("blazer"));
					iLocal_5828++;
				}
			}
			break;
		
		case 1:
			if (iVar0 != 2 || iVar0 != 0)
			{
				if (func_28())
				{
					iLocal_5828++;
				}
			}
			break;
		
		case 2:
			if (iVar0 == 3)
			{
				if (iLocal_5819 > 1 && iLocal_5819 < 7)
				{
					while (!func_208(6, 1733.376f, 3320.323f, 41.7312f, 183.4859f, 0) || !func_208(8, 1573.97f, 3221.91f, 41.08f, 106.07f, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[2 /*19*/], 0);
					}
					func_37();
					func_535();
					iLocal_5828++;
				}
			}
			break;
		
		case 3:
			if (iVar0 == 3)
			{
				while (!func_208(11, 0f, 0f, 0f, 0f, 0))
				{
					SYSTEM::WAIT(0);
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_665()//Position - 0x75FFF
{
	var uVar0;
	
	if (GlobalFunc_8372(29))
	{
		if (!func_36("WARP RON"))
		{
			if (!PED::IS_PED_INJURED(Local_5546))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_5546);
				ENTITY::SET_ENTITY_COORDS(Local_5546, 1576.75f, 3360.88f, 42.13f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_5546, -135.27f);
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_5546, "WORLD_HUMAN_BINOCULARS", 0, 0);
				ENTITY::SET_ENTITY_HEALTH(Local_5546, 120);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[11 /*19*/], 0, 1);
				ENTITY::SET_ENTITY_COORDS(Local_4414[11 /*19*/], 1573.863f, 3353.94f, 37.04436f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_4414[11 /*19*/], -53.5711f);
			}
			func_33("WARP RON", 1);
		}
	}
	switch (iLocal_5907)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
			{
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					if (!GlobalFunc_2522(Local_5546, Local_4414[11 /*19*/]))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[11 /*19*/], -1))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_5546, -1794415470) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(Local_5546, Local_4414[11 /*19*/], 20000, -1, 1f, 1, 0);
							}
						}
					}
					else
					{
						PED::SET_PED_STEERS_AROUND_OBJECTS(Local_5546, 1);
						TASK::REQUEST_WAYPOINT_RECORDING("trv2QuadGtoA");
						iLocal_5907++;
					}
				}
			}
			break;
		
		case 1:
			TASK::REQUEST_WAYPOINT_RECORDING("trv2QuadGtoA");
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("trv2QuadGtoA"))
			{
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_5546, Local_4414[11 /*19*/]))
						{
							PED::SET_PED_CONFIG_FLAG(Local_5546, 269, 0);
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_5546, Local_4414[11 /*19*/], "trv2QuadGtoA", 786469, 0, 8, -1, -1082130432, 0, 1073741824);
							MISC::CLEAR_AREA(1703.014f, 3751.74f, 32.22282f, 30f, 1, 0, 0, 0);
							iLocal_5907++;
						}
						else
						{
							iLocal_5907 = (iLocal_5907 - 1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(Local_5546))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
				{
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[11 /*19*/]))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(Local_4414[11 /*19*/], 1f, 2000, 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[11 /*19*/], 0, 0);
						iLocal_5907++;
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(Local_5546))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_4414[11 /*19*/]) < 1f)
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_5546, 144);
						TASK::SET_PED_PATH_CAN_USE_LADDERS(Local_5546, 1);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[11 /*19*/], 0))
						{
							TASK::TASK_LEAVE_VEHICLE(0, Local_4414[11 /*19*/], 0);
						}
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1576.75f, 3360.88f, 42.13f, 1f, 20000, 0.25f, 0, -135.27f);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_BINOCULARS", 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_5546, uVar0);
						iLocal_5907++;
					}
				}
			}
			break;
	}
}

void func_666()//Position - 0x7630A
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	iLocal_5768 = 1;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (iLocal_5086 == 0)
	{
		if (iLocal_5083)
		{
			iLocal_5083 = 0;
		}
		else if (iLocal_5082 == 0)
		{
			iLocal_5768 = 1;
			iLocal_5813 = 0;
			GlobalFunc_7621(78, 1, 0, 1, 0);
			CUTSCENE::REQUEST_CUTSCENE("trevor_2_int", 8);
			SYSTEM::SETTIMERA(0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
			{
				if (!PED::IS_PED_INJURED(Global_86864.f_9[0]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
					Local_5546 = Global_86864.f_9[0];
					PED::SET_PED_CAN_BE_TARGETTED(Local_5546, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5546, 1862763509);
					GlobalFunc_173(&Local_72, 3, Local_5546, "NervousRon", 0, 1);
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_5546, 1);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_5546, 1);
					WEAPON::GIVE_WEAPON_TO_PED(Local_5546, joaat("weapon_unarmed"), 2000, 1, 1);
					PED::SET_PED_CAN_BE_TARGETTED(Local_5546, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5546, iLocal_489);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_489, iLocal_489);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_489, 1862763509);
					PED::SET_PED_CONFIG_FLAG(Local_5546, 118, 0);
					PED::SET_PED_AS_ENEMY(Local_5546, 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_5546, 1, 0);
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_5546);
					PED::SET_PED_ACCURACY(Local_5546, 100);
					PED::SET_PED_COMBAT_ABILITY(Local_5546, 2);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_5546, 0);
					ENTITY::SET_ENTITY_HEALTH(Local_5546, 300);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_5546, 1);
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						GlobalFunc_11272(Local_5546, 14, 154, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 1, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 6, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 7, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 11, 0, 0, 0);
						PED::SET_PED_PROP_INDEX(Local_5546, 0, 0, 0, false);
						PED::SET_PED_PROP_INDEX(Local_5546, 1, 0, 0, false);
					}
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_5546))
			{
				while (!func_208(0, 1987.05f, 3810.564f, 32.10027f, -166.1576f, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			STREAMING::SET_PED_POPULATION_BUDGET(0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
			iLocal_5081 = 0;
			iLocal_5082++;
		}
		else if (iLocal_5082 == 1)
		{
			if (GlobalFunc_109())
			{
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_5546, "Ron", 0, 0, 0);
				}
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				GlobalFunc_8380(1, 1, 1, 0);
				if (GlobalFunc_2(0))
				{
					GlobalFunc_2781(500);
				}
				iLocal_5081 = 0;
				iLocal_5082 = 0;
				iLocal_5086 = 1;
			}
		}
	}
	if (iLocal_5086 == 1)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (iLocal_5813 == 0)
			{
				PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
				else
				{
					iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (!VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
					{
						iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
						MISC::GET_MODEL_DIMENSIONS(iVar1, &Var2, &Var5);
						fVar8 = (-Var2.f_2 + Var5.f_2);
						if (fVar8 < 2.6f && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 50f)
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
							if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 1967.105f, 3821.76f, 31.3842f, 3f, 3f, 3f, 0, 1, 0))
							{
								GlobalFunc_10236(iVar0, 1967.105f, 3821.26f, 31.3842f, 120.7252f, 24, 0);
								ENTITY::SET_ENTITY_COORDS(iVar0, 1967.105f, 3821.26f, 31.3842f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar0, 120.7252f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
							}
							else if (!MISC::IS_POSITION_OCCUPIED(1978.105f, 3827.76f, 31.3842f, 5f, 0, 1, 0, 0, 0, 0, 0) || ENTITY::IS_ENTITY_AT_COORD(iVar0, 1978.105f, 3827.76f, 31.3842f, 5f, 5f, 5f, 0, 1, 0))
							{
								GlobalFunc_10236(iVar0, 1978.105f, 3827.76f, 31.3842f, 301.7252f, 24, 0);
								ENTITY::SET_ENTITY_COORDS(iVar0, 1978.105f, 3827.76f, 31.3842f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar0, 301.7252f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
							}
							else
							{
								GlobalFunc_10236(iVar0, -1191.065f, -1504.345f, 3.3697f, 303.3213f, 24, 0);
								ENTITY::SET_ENTITY_COORDS(iVar0, -1191.065f, -1504.345f, 3.3697f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar0, 303.3213f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
							}
						}
					}
				}
				MISC::CLEAR_AREA(-1191.065f, -1504.345f, 3.3697f, 200f, 1, 0, 0, 0);
				GlobalFunc_76(24);
				iLocal_5904 = MISC::GET_GAME_TIMER();
				CAM::STOP_GAMEPLAY_HINT(1);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(0);
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0))
				{
					WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"));
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max"));
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"));
				}
				iLocal_5813 = 1;
			}
		}
		if (CUTSCENE::GET_CUTSCENE_TIME() > 63944)
		{
			func_208(2, 1990.43f, 3810.89f, 31.79f, 112.15f, 0);
			func_208(5, 1987.9f, 3811.76f, 31.62f, 116.12f, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_5546))
		{
			iVar9 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ron", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar9))
			{
				Local_5546 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_11272(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 241.5321f, 0, 0);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 1, 0);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ron", 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
			{
				if (!PED::IS_PED_INJURED(Local_5546))
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						GlobalFunc_11272(Local_5546, 14, 154, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 1, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 6, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 7, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_5546, 11, 0, 0, 0);
						PED::SET_PED_PROP_INDEX(Local_5546, 0, 0, 0, false);
						PED::SET_PED_PROP_INDEX(Local_5546, 1, 0, 0, false);
					}
					TASK::TASK_ENTER_VEHICLE(Local_5546, Local_4414[11 /*19*/], 20000, -1, 1f, 1, 0);
					PED::FORCE_PED_MOTION_STATE(Local_5546, -668482597, 1, 1, 0);
				}
			}
		}
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				iLocal_5081 = 1;
			}
		}
		if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_5813 == 1)
		{
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			iLocal_5086 = 2;
		}
	}
	RECORDING::_0x208784099002BC30("M_TREV2", 0);
	if (iLocal_5086 == 2)
	{
		if (iLocal_5081)
		{
			if (!CAM::IS_SCREEN_FADING_OUT() || !CAM::IS_SCREEN_FADED_OUT())
			{
				GlobalFunc_2787(500);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CUTSCENE::STOP_CUTSCENE(0);
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			while (!func_208(0, 1987.05f, 3810.564f, 32.10027f, -166.1576f, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_208(2, 1990.43f, 3810.89f, 31.79f, 112.15f, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_208(5, 1987.9f, 3811.76f, 31.62f, 116.12f, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			if (iLocal_5084 == 0)
			{
				PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_489);
				PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_490);
				iLocal_5084 = 1;
			}
		}
		RECORDING::_0x81CBAE94390F9F89();
		GlobalFunc_8380(0, 1, 1, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		GlobalFunc_562(63);
		STREAMING::REMOVE_ANIM_DICT("misstrevor2leadinouttrv_2_int");
		iLocal_5082 = 0;
		iLocal_5086 = 0;
		iLocal_5874 = 2;
		iLocal_5768 = 0;
	}
	if (iLocal_5086 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(0);
		iLocal_5081 = 1;
		iLocal_5086 = 1;
	}
}






























void func_696()//Position - 0x7D539
{
	HUD::REQUEST_ADDITIONAL_TEXT("SJC", 0);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("GRAPESEED_PLANES"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GRAPESEED_PLANES", 0);
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SANDY_PLANES"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("SANDY_PLANES", 0);
	}
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_490);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_489);
	if (iLocal_5084 == 0)
	{
		PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_489);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_490);
		iLocal_5084 = 1;
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blazer"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blazer2"), 1);
	TASK::ADD_COVER_BLOCKING_AREA((1719.118f + 0.75f), (3285.014f + 0.75f), (41.28481f + 2f), (1719.118f - 0.75f), (3285.014f - 0.75f), (41.28481f - 2f), 1, 1, 1, 0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_490, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_490, iLocal_489);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_489, iLocal_490);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_489, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_489);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_490, iLocal_490);
	MISC::SET_WIND(0f);
	iLocal_5816 = 0;
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(2));
	GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 508);
	GlobalFunc_8365(1982.383f, 3807.19f, 31.1531f, 10f, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1735.59f, 3222.956f, 47.8356f, 1770.144f, 3264.656f, 28.1638f, 0, 1);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_626();
	GlobalFunc_2224(1);
	func_753();
	GlobalFunc_563(1);
	if (GlobalFunc_199())
	{
		if (GlobalFunc_198() >= 0 && GlobalFunc_198() < 11)
		{
			iLocal_5818 = GlobalFunc_198();
			if (Global_84544 == 1)
			{
				if (iLocal_5818 < 11)
				{
					if (iLocal_5818 == 0)
					{
						GlobalFunc_4972(1574.78f, 3363.098f, 47.6349f, 245.3244f, 1, 0);
						iLocal_5874 = 3;
					}
					else if (iLocal_5818 == 1)
					{
						GlobalFunc_4972(1574.78f, 3363.098f, 47.6349f, 245.3244f, 1, 0);
						iLocal_5874 = 4;
					}
					else if (iLocal_5818 == 2)
					{
						GlobalFunc_4972(1583.03f, 3361.128f, 36.6399f, 245.3244f, 1, 0);
						iLocal_5874 = 5;
					}
					else if (iLocal_5818 == 3)
					{
						GlobalFunc_4972(1729.684f, 3316.879f, 40.2261f, 332.4664f, 1, 0);
						iLocal_5874 = 6;
					}
					else if (iLocal_5818 == 4)
					{
						GlobalFunc_4972(842.7066f, 3217.68f, 37.4018f, 65.258f, 1, 0);
						iLocal_5874 = 7;
					}
					else if (iLocal_5818 == 5)
					{
						GlobalFunc_4972(-3353.65f, 2931.213f, -89.9603f, 177.927f, 1, 0);
						iLocal_5874 = 8;
					}
					else if (iLocal_5818 == 6)
					{
						GlobalFunc_4972(2136.907f, 4782.583f, 39.9702f, 105.1115f, 1, 0);
						iLocal_5874 = 9;
					}
					else if (iLocal_5818 == 7)
					{
						GlobalFunc_4972(2136.907f, 4782.583f, 39.9702f, 105.1115f, 1, 0);
						iLocal_5874 = 9;
					}
					else
					{
						CAM::DO_SCREEN_FADE_IN(250);
						iLocal_5874 = 11;
					}
				}
				else
				{
					CAM::DO_SCREEN_FADE_IN(250);
					iLocal_5874 = 11;
				}
			}
			else if (iLocal_5818 == 0)
			{
				GlobalFunc_4972(1981.9f, 3816.16f, 31.356f, 241.4918f, 1, 0);
				iLocal_5874 = 2;
			}
			else if (iLocal_5818 == 1)
			{
				GlobalFunc_4972(1574.78f, 3363.098f, 47.6349f, 245.3244f, 1, 0);
				iLocal_5874 = 3;
			}
			else if (iLocal_5818 == 2)
			{
				GlobalFunc_4972(1574.78f, 3363.098f, 47.6349f, 245.3244f, 1, 0);
				iLocal_5874 = 4;
			}
			else if (iLocal_5818 == 3)
			{
				GlobalFunc_4972(1583.03f, 3361.128f, 36.6399f, 245.3244f, 1, 0);
				iLocal_5874 = 5;
			}
			else if (iLocal_5818 == 4)
			{
				GlobalFunc_4972(1729.684f, 3316.879f, 40.2261f, 332.4664f, 1, 0);
				iLocal_5874 = 6;
			}
			else if (iLocal_5818 == 5)
			{
				GlobalFunc_4972(842.7066f, 3217.68f, 37.4018f, 65.258f, 1, 0);
				iLocal_5874 = 7;
			}
			else if (iLocal_5818 == 6)
			{
				GlobalFunc_4972(-3353.65f, 2931.213f, -89.9603f, 177.927f, 1, 0);
				iLocal_5874 = 8;
			}
			else if (iLocal_5818 == 7)
			{
				GlobalFunc_4972(2136.907f, 4782.583f, 39.9702f, 105.1115f, 1, 0);
				iLocal_5874 = 8;
			}
		}
		else if (iLocal_5818 == 0)
		{
			if (Global_84544 == 1)
			{
				iLocal_5874 = 3;
			}
			else
			{
				iLocal_5874 = 2;
			}
		}
		else
		{
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_5874 = 1;
		}
		if (!GlobalFunc_199())
		{
			func_749(iLocal_5874);
		}
	}
	else
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_5874 = 1;
	}
	if (iLocal_5874 < 0 || iLocal_5874 > 11)
	{
	}
	if (iLocal_5874 != 1)
	{
		while (!iLocal_5767)
		{
			SYSTEM::WAIT(0);
			func_697(iLocal_5874);
		}
	}
}

void func_697(int iParam0)//Position - 0x7DA36
{
	AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
	if (!iLocal_5766)
	{
		if (iParam0 != 1)
		{
			GlobalFunc_2787(500);
			func_800(0);
		}
		iLocal_5766 = 1;
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_403))
	{
		HUD::REMOVE_BLIP(&uLocal_403);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_402))
	{
		HUD::REMOVE_BLIP(&uLocal_402);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_404))
	{
		HUD::REMOVE_BLIP(&uLocal_404);
	}
	if (!func_36("TRV2_MISSION_FAIL"))
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL"))
		{
			func_33("TRV2_MISSION_FAIL", 1);
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::WASH_DECALS_IN_RANGE(1701.425f, 3303.774f, 40.164f, 1000f, 1f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(1701.425f, 3303.774f, 40.164f, 1000f);
		OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("pickup_weapon_assaultrifle"));
		MISC::CLEAR_AREA(1734.226f, 3315.776f, 40.2237f, 1000f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(1701.425f, 3303.774f, 40.164f, 1000f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(1575.8f, 3362.9f, 49.2f, 1000f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(1995.725f, 3812.294f, 31.2603f, 1000f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(1694.698f, 3315.126f, 40.2384f, 1000f, 1, 0, 0, 0);
	}
	PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(2));
	GlobalFunc_629(&Local_5875);
	PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	HUD::CLEAR_PRINTS();
	GlobalFunc_4935();
	func_747();
	func_565();
	func_746();
	if (iParam0 > 4)
	{
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
	}
	iLocal_5836 = 0;
	switch (iLocal_5817)
	{
		case 0:
			if (iParam0 > 2 && iParam0 < 7)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			}
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_5695 = AUDIO::GET_SOUND_ID();
			iLocal_5696 = AUDIO::GET_SOUND_ID();
			func_662();
			func_521(&Local_5546, 1, 0, 1);
			func_520(&Local_5123, 1, 0, 1);
			func_520(&Local_5340, 1, 0, 1);
			func_520(&Local_5449, 1, 0, 1);
			func_518(&Local_5504, 1, 0);
			func_518(&Local_5525, 1, 0);
			func_517(&Local_5573, 1);
			func_517(&Local_5583, 1);
			func_517(&(Local_5593[0 /*10*/]), 1);
			if (TASK::DOES_SCENARIO_GROUP_EXIST("GRAPESEED_PLANES"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("GRAPESEED_PLANES", 0);
			}
			if (TASK::DOES_SCENARIO_GROUP_EXIST("SANDY_PLANES"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("SANDY_PLANES", 0);
			}
			iLocal_5083 = 1;
			func_753();
			if (iParam0 == 1)
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0))
				{
					WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"));
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max"));
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"));
				}
				CUTSCENE::REQUEST_CUTSCENE("trevor_2_int", 8);
				iLocal_5817++;
			}
			else if (iParam0 == 2)
			{
				GlobalFunc_8522(29);
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0))
				{
					WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"));
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max"));
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"));
				}
				Local_5546.f_10 = { 1980.27f, 3815.93f, 31.356f };
				Local_5546.f_13 = -94.68f;
				func_535();
				while (!func_208(0, 1980.27f, 3815.93f, 31.356f, -94.68f, 0))
				{
					SYSTEM::WAIT(0);
				}
				while (!func_208(2, 1990.4f, 3810.9f, 31.73f, 112.13f, 0))
				{
					SYSTEM::WAIT(0);
				}
				while (!func_208(5, 1987.89f, 3811.75f, 31.63f, 116f, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[12 /*19*/], 0))
						{
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[11 /*19*/], 0))
						{
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1981.9f, 3816.16f, 31.356f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 241.4918f);
				}
				iLocal_5817++;
			}
			else if (iParam0 == 3)
			{
				func_611();
				iLocal_5695 = AUDIO::GET_SOUND_ID();
				iLocal_5696 = AUDIO::GET_SOUND_ID();
				while (!func_208(1, 1668.903f, 3390.791f, 36.8178f, 256.2998f, 0) || !func_208(0, 1665.903f, 3390.791f, 36.8178f, 256.2998f, 0))
				{
					SYSTEM::WAIT(0);
				}
				func_37();
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 40, 1, 1);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max"));
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"));
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[11 /*19*/], 0))
						{
							PED::SET_PED_INTO_VEHICLE(Local_5546, Local_4414[11 /*19*/], -1);
						}
					}
				}
				iLocal_5661[1] = 1;
				iLocal_5661[19] = 1;
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("OVERCAST");
				CLOCK::SET_CLOCK_TIME(0, 0, 0);
				iLocal_5817++;
			}
			else if (iParam0 == 4)
			{
				func_611();
				Local_5546.f_10 = { 1682.53f, 3298.15f, 41.1f };
				Local_5546.f_13 = -31.24f;
				while (((!func_208(0, 1682.53f, 3298.15f, 41.1f, -31.24f, 0) || !func_208(5, 1579.57f, 3358.952f, 36.5113f, 235.93f, 0)) || !func_208(1, 1725.997f, 3367.55f, 39.0636f, 237.5522f, 0)) || !func_208(11, 0f, 0f, 0f, 0f, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (func_599(&(Local_5593[0 /*10*/]), 1))
				{
					STREAMING::REQUEST_MODEL(joaat("maverick"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("maverick")))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
						{
							Local_4414[10 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("maverick"), 1708.665f, 3349.96f, 39.7627f, 93.9915f, 1, 1);
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_4414[10 /*19*/]))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_4414[10 /*19*/], 1);
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
							iLocal_5817++;
						}
					}
				}
			}
			else if (iParam0 == 5 || iParam0 == 6)
			{
				func_535();
				func_30(joaat("cuban800"));
				func_30(joaat("hauler"));
				func_30(joaat("tanker"));
				func_30(joaat("gburrito"));
				func_30(joaat("hexer"));
				func_30(joaat("g_m_y_lost_01"));
				func_30(joaat("prop_gas_tank_02a"));
				if (iParam0 == 5)
				{
					func_30(joaat("blazer"));
				}
				MISC::CLEAR_AREA(1734.226f, 3315.776f, 40.2237f, 1000f, 1, 0, 0, 0);
				MISC::CLEAR_AREA(1556.018f, 3223.941f, 39.4842f, 300f, 1, 0, 0, 0);
				if (iParam0 == 5 || iParam0 == 6)
				{
					if (iParam0 == 6)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_4414[12 /*19*/]))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_4414[12 /*19*/]));
						}
						VEHICLE::REQUEST_VEHICLE_RECORDING(2, "RCSJC");
						MISC::CLEAR_AREA(1556.018f, 3223.941f, 39.4842f, 300f, 1, 0, 0, 0);
						STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_9b");
						STREAMING::REQUEST_PTFX_ASSET();
						WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 1);
					}
					func_30(joaat("maverick"));
				}
				STREAMING::REQUEST_PTFX_ASSET();
				iLocal_5817++;
			}
			else if (iParam0 == 7)
			{
				if (func_702(2, 1))
				{
					STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_11");
					func_535();
					MISC::CLEAR_AREA(1556.018f, 3223.941f, 39.4842f, 300f, 1, 0, 0, 0);
					func_30(joaat("cuban800"));
					func_30(joaat("g_m_y_lost_01"));
					func_31(3, "RCSJC");
					iLocal_5817++;
				}
			}
			else if (iParam0 == 8)
			{
				if (func_702(2, 1))
				{
					func_535();
					MISC::CLEAR_AREA(1556.018f, 3223.941f, 39.4842f, 300f, 1, 0, 0, 0);
					func_30(joaat("cuban800"));
					func_30(joaat("g_m_y_lost_01"));
					func_31(3, "RCSJC");
					iLocal_5817++;
				}
			}
			else if (iParam0 == 9)
			{
				if (func_702(2, 1))
				{
					func_535();
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2136.907f, 4782.583f, 39.9702f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 80.2803f);
					func_30(joaat("cuban800"));
					iLocal_5817++;
				}
			}
			else if (iParam0 == 10)
			{
				if (func_702(2, 1))
				{
					func_535();
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1752.55f, 3290.156f, 40.1121f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 109.6693f);
					func_30(joaat("cuban800"));
					iLocal_5817++;
				}
			}
			break;
		
		case 1:
			if (iParam0 == 1)
			{
				iLocal_5817++;
			}
			if (iParam0 == 0 || iParam0 == 2)
			{
				if (func_29("RCSJC"))
				{
					if (func_28())
					{
						if (iParam0 == 2)
						{
							iLocal_5817++;
						}
						else
						{
							iLocal_5817++;
						}
					}
				}
			}
			else if (func_29("RCSJC"))
			{
				if (func_28())
				{
					if (iParam0 == 2)
					{
						iLocal_5817++;
					}
					else if (iParam0 == 7)
					{
						iLocal_5817++;
					}
					else if (iParam0 == 3)
					{
						iLocal_5817++;
					}
					else if (iParam0 == 4)
					{
						iLocal_5817++;
					}
					else if (iParam0 == 5)
					{
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[10 /*19*/], 0))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_4414[10 /*19*/], 0);
								ENTITY::SET_ENTITY_HEALTH(Local_4414[10 /*19*/], 0);
								FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_4414[10 /*19*/], 1), 9, 1056964608, 1, 0, 1065353216);
								VEHICLE::EXPLODE_VEHICLE(Local_4414[10 /*19*/], 1, 0);
							}
							iLocal_5817++;
						}
					}
					else if (iParam0 == 6)
					{
						if ((WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")) && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_9b")) && STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							iLocal_5817++;
						}
					}
					else if (iParam0 == 8)
					{
						iLocal_5817++;
					}
					else if (iParam0 == 9)
					{
						iLocal_5817++;
					}
					else if (iParam0 == 10)
					{
						iLocal_5817++;
					}
				}
			}
			break;
		
		case 2:
			if (iParam0 == 1)
			{
				iLocal_5874 = 1;
			}
			else if (iParam0 == 2)
			{
				if (GlobalFunc_188())
				{
					GlobalFunc_4967(0, -1, 1);
				}
				else
				{
					STREAMING::LOAD_ALL_OBJECTS_NOW();
					while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						SYSTEM::WAIT(0);
					}
					STREAMING::LOAD_SCENE(1985.123f, 3814.149f, 31.2009f);
				}
				iLocal_5874 = 2;
			}
			else if (iParam0 == 3)
			{
				while ((((!func_208(3, 1668.903f, 3390.791f, 36.8178f, 256.2998f, 0) || !func_208(5, 1582.074f, 3365.721f, 36.4635f, 247.3211f, 0)) || !func_208(0, 1582.538f, 3360.707f, 36.6835f, 37.563f, 0)) || !func_208(11, 0f, 0f, 0f, 0f, 0)) || !func_208(8, 1573.97f, 3221.91f, 41.08f, 106.07f, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[2 /*19*/], 0);
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), GlobalFunc_3003(25, WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"))), 1, 1);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max"));
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 1);
				}
				func_662();
				func_37();
				if (!GlobalFunc_188())
				{
					STREAMING::LOAD_ALL_OBJECTS_NOW();
					while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						SYSTEM::WAIT(0);
					}
					STREAMING::LOAD_SCENE(1575.05f, 3363.294f, 47.635f);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1575.903f, 3362.873f, 47.6349f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 245.1024f);
				}
				if (!func_36("TRV2_SNIPE_RESTART"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_SNIPE_RESTART"))
					{
						func_33("TRV2_SNIPE_RESTART", 1);
					}
				}
				if (GlobalFunc_188())
				{
					GlobalFunc_4967(0, -1, 1);
				}
				iLocal_5874 = 3;
			}
			else if (iParam0 == 4)
			{
				if (!func_36("TRV2_TOWER_RESTART"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_TOWER_RESTART"))
					{
						func_33("TRV2_TOWER_RESTART", 1);
					}
				}
				Local_5546.f_10 = { 1682.53f, 3298.15f, 41.1f };
				Local_5546.f_13 = -31.24f;
				while (!func_208(0, 1682.53f, 3298.15f, 41.1f, -31.24f, 0))
				{
					SYSTEM::WAIT(0);
				}
				func_37();
				if (GlobalFunc_188())
				{
					GlobalFunc_4967(0, -1, 1);
				}
				GlobalFunc_4967(0, -1, 1);
				iLocal_5874 = 4;
			}
			else if (iParam0 == 5 || iParam0 == 6)
			{
				Local_5546.f_10 = { 1682.53f, 3298.15f, 41.1f };
				Local_5546.f_13 = -31.24f;
				while (((!func_208(6, 1733.376f, 3320.323f, 41.7312f, 183.4859f, 0) || !func_208(8, 2474.078f, 3477.081f, 48.1862f, 191.3157f, 0)) || !func_208(0, 1682.53f, 3298.15f, 41.1f, -31.24f, 0)) || !func_208(11, 0f, 0f, 0f, 0f, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[1 /*19*/], 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[2 /*19*/], 0);
				}
				func_26(7, joaat("hexer"), 1744.517f, 3271.191f, 40.1741f, 82.2751f, joaat("g_m_y_lost_01"), 0, 0, 0, 0, -1, joaat("weapon_carbinerifle"));
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[8 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_4414[8 /*19*/]));
				}
				MISC::CLEAR_AREA(1694.698f, 3315.126f, 40.2384f, 100f, 1, 0, 0, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_4414[8 /*19*/]))
				{
					func_26(8, joaat("gburrito"), 1698.52f, 3313.73f, 40.97f, 21.63f, joaat("g_m_y_lost_01"), 0, 0, 0, 0, -1, joaat("weapon_carbinerifle"));
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[8 /*19*/], 1);
				}
				func_26(6, joaat("gburrito"), 1745.71f, 3275.38f, 40.94f, 133.23f, joaat("g_m_y_lost_01"), 0, 0, 0, 0, -1, joaat("weapon_carbinerifle"));
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[6 /*19*/], 1);
				func_26(10, joaat("maverick"), 1706.702f, 3322.242f, 40.1486f, 311.7382f, joaat("g_m_y_lost_01"), 1, 10, 0, 0, -1, joaat("weapon_carbinerifle"));
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_4414[10 /*19*/], 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_4414[2 /*19*/], 1564.581f, 3225.473f, 39.4794f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_4414[2 /*19*/], 99.5075f);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[2 /*19*/], 0);
				}
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 1583.824f, 3357.4f, 36.6356f);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 232.1282f);
				func_662();
				func_37();
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[1]))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(uLocal_5739[1], 0);
					ENTITY::SET_ENTITY_PROOFS(uLocal_5739[1], 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (iParam0 == 5)
				{
					while (!func_208(5, 1601.909f, 3351.969f, 37.3035f, 249.6865f, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
					{
						ENTITY::SET_ENTITY_COORDS(Local_4414[12 /*19*/], 1601.909f, 3351.969f, 37.3035f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_4414[12 /*19*/], 249.6865f);
					}
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						PED::SET_PED_DUCKING(Local_5546, 1);
					}
					if (!func_36("TRV2_STEAL_PLANE_RESTART"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_STEAL_PLANE_RESTART"))
						{
							func_33("TRV2_STEAL_PLANE_RESTART", 1);
						}
					}
					if (GlobalFunc_188())
					{
						GlobalFunc_4967(Local_4414[12 /*19*/], -1, 1);
					}
					else
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[12 /*19*/], 0))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[12 /*19*/], -1))
							{
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_4414[12 /*19*/], 1);
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[12 /*19*/], -1);
							}
						}
						STREAMING::LOAD_ALL_OBJECTS_NOW();
						while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
						{
							SYSTEM::WAIT(0);
						}
						STREAMING::LOAD_SCENE(1601.909f, 3351.969f, 37.3035f);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_4414[10 /*19*/]))
					{
						VEHICLE::SET_HELI_TAIL_EXPLODE_THROW_DASHBOARD(Local_4414[10 /*19*/], 0);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4414[10 /*19*/]);
						uLocal_5092[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev2_heli_wreck", ENTITY::GET_ENTITY_COORDS(Local_4414[10 /*19*/], 0), 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_HEALTH(Local_4414[10 /*19*/], 0);
						FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_4414[10 /*19*/], 1), 9, 1056964608, 1, 0, 1065353216);
						VEHICLE::EXPLODE_VEHICLE(Local_4414[10 /*19*/], 1, 0);
					}
					if (!func_36("TRV2_TOWER_RESTART"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_TOWER_RESTART"))
						{
							func_33("TRV2_TOWER_RESTART", 1);
						}
					}
					iLocal_5874 = 5;
				}
				else if (iParam0 == 6)
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "RCSJC"))
					{
						while (!func_208(0, 1678.886f, 3285.786f, 39.9321f, 41.677f, 0))
						{
							SYSTEM::WAIT(0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0) && !PED::IS_PED_INJURED(Local_5546))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[1 /*19*/], -1))
							{
								PED::SET_PED_INTO_VEHICLE(Local_5546, Local_4414[1 /*19*/], -1);
							}
						}
						if (!func_36("TRV2_WING_RESTART"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_WING_RESTART"))
							{
								func_33("TRV2_WING_RESTART", 1);
							}
						}
						iLocal_5836 = 0;
						if (GlobalFunc_188())
						{
							GlobalFunc_4967(0, -1, 1);
						}
						else
						{
							STREAMING::LOAD_ALL_OBJECTS_NOW();
							while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
							{
								SYSTEM::WAIT(0);
							}
							STREAMING::LOAD_SCENE(1732.395f, 3319.714f, 40.2235f);
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_4414[10 /*19*/]))
						{
							VEHICLE::SET_HELI_TAIL_EXPLODE_THROW_DASHBOARD(Local_4414[10 /*19*/], 0);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_4414[10 /*19*/]);
							uLocal_5092[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev2_heli_wreck", ENTITY::GET_ENTITY_COORDS(Local_4414[10 /*19*/], 0), 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
							ENTITY::SET_ENTITY_HEALTH(Local_4414[10 /*19*/], 0);
							FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_4414[10 /*19*/], 1), 9, 1056964608, 1, 0, 1065353216);
							VEHICLE::EXPLODE_VEHICLE(Local_4414[10 /*19*/], 1, 0);
						}
						iLocal_5874 = 6;
					}
				}
			}
			else if (iParam0 == 7)
			{
				while ((!func_208(0, 1678.886f, 3285.786f, 39.9321f, 41.677f, 0) || !func_208(6, 1677.036f, 3245.119f, 41.0376f, 101.662f, 0)) || !func_208(8, 842.7066f, 3217.68f, 37.4018f, 65.258f, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_4414[2 /*19*/], 1);
				}
				func_662();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[1 /*19*/], 3, "RCSJC", 4, 0, 786603);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_4414[1 /*19*/], 1);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/], 23118.31f);
					VEHICLE::CONTROL_LANDING_GEAR(Local_4414[1 /*19*/], 3);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[1 /*19*/], 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4414[1 /*19*/]);
					if (ENTITY::DOES_ENTITY_EXIST(Local_2692[1 /*40*/]))
					{
						PED::DELETE_PED(&(Local_2692[1 /*40*/]));
					}
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[1 /*19*/], -1))
						{
							PED::SET_PED_INTO_VEHICLE(Local_5546, Local_4414[1 /*19*/], -1);
						}
					}
				}
				func_536(27, 27, 0, 0, 0, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 1, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_491[27 /*40*/], 11, 0, 0, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_4414[2 /*19*/], 0);
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[2 /*19*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_4414[2 /*19*/], 3, "RCSJC", 4, 0, 786603);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[2 /*19*/], 18218.31f);
					if (ENTITY::DOES_ENTITY_EXIST(Local_2692[2 /*40*/]))
					{
						PED::DELETE_PED(&(Local_2692[2 /*40*/]));
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[2 /*19*/], 1, 1);
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4414[2 /*19*/]);
						VEHICLE::CONTROL_LANDING_GEAR(Local_4414[2 /*19*/], 3);
					}
				}
				iLocal_5823 = MISC::GET_GAME_TIMER();
				if (!func_36("TRV2_FLY_RESTART"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_FLY_RESTART"))
					{
						func_33("TRV2_FLY_RESTART", 1);
					}
				}
				if (GlobalFunc_188())
				{
					GlobalFunc_4967(Local_4414[2 /*19*/], -1, 1);
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[2 /*19*/], -1))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], -1);
						}
					}
					STREAMING::LOAD_SCENE(842.7066f, 3217.68f, 37.4018f);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				iLocal_5874 = 7;
			}
			else if (iParam0 == 8)
			{
				while ((!func_208(0, 1678.886f, 3285.786f, 39.9321f, 41.677f, 0) || !func_208(6, 1677.036f, 3245.119f, 41.0376f, 101.662f, 0)) || !func_208(8, -3353.65f, 2931.213f, 37.9603f, 177.927f, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_4414[2 /*19*/], 1);
				}
				func_662();
				if (!func_36("TRV2_RACE_RESTART"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_RACE_RESTART"))
					{
						func_33("TRV2_RACE_RESTART", 1);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[1 /*19*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/], 3, "RCSJC", 0);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[1 /*19*/], 129981f);
					VEHICLE::CONTROL_LANDING_GEAR(Local_4414[1 /*19*/], 3);
					if (ENTITY::DOES_ENTITY_EXIST(Local_2692[1 /*40*/]))
					{
						PED::DELETE_PED(&(Local_2692[1 /*40*/]));
					}
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[1 /*19*/], -1))
						{
							PED::SET_PED_INTO_VEHICLE(Local_5546, Local_4414[1 /*19*/], -1);
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_4414[2 /*19*/], 0);
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[2 /*19*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_4414[2 /*19*/], 3, "RCSJC", 0);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_4414[2 /*19*/], 126981f);
					if (ENTITY::DOES_ENTITY_EXIST(Local_2692[2 /*40*/]))
					{
						PED::DELETE_PED(&(Local_2692[2 /*40*/]));
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_4414[2 /*19*/], 1, 1);
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_4414[2 /*19*/]);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], -1);
						VEHICLE::CONTROL_LANDING_GEAR(Local_4414[2 /*19*/], 3);
					}
				}
				if (GlobalFunc_188())
				{
					GlobalFunc_4967(Local_4414[2 /*19*/], -1, 1);
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[2 /*19*/], -1))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], -1);
					}
					STREAMING::LOAD_SCENE(-3353.65f, 2931.213f, -89.9603f);
					STREAMING::NEW_LOAD_SCENE_START(-3353.65f, 2931.213f, -89.9603f, GlobalFunc_107(Vector(133.0806f, 2630.564f, -1500.016f) - Vector(-89.9603f, 2931.213f, -3353.65f)), 100f, 0);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				iLocal_5874 = 8;
			}
			else if (iParam0 == 9)
			{
				while ((!func_208(0, 1678.886f, 3285.786f, 39.9321f, 41.677f, 0) || !func_208(6, 1677.036f, 3245.119f, 41.0376f, 101.662f, 0)) || !func_208(8, 2116.519f, 4798.722f, 40.0507f, 191.3157f, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[2 /*19*/], -1))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], -1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					VEHICLE::CONTROL_LANDING_GEAR(Local_4414[2 /*19*/], 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_4414[2 /*19*/]))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_4414[2 /*19*/], 1);
				}
				func_662();
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("TRV2_MCS_8", 3, 8);
				if (GlobalFunc_188())
				{
					GlobalFunc_4967(0, -1, 1);
				}
				else
				{
					STREAMING::LOAD_SCENE(2136.907f, 4782.583f, 39.9702f);
				}
				iLocal_5874 = 9;
			}
			else if (iParam0 == 10)
			{
				while (!func_208(6, 1987.05f, 3810.564f, 32.10027f, -166.1576f, 0) || !func_208(8, 2474.078f, 3477.081f, 48.1862f, 191.3157f, 0))
				{
					SYSTEM::WAIT(0);
				}
				while (!func_208(0, 1678.886f, 3285.786f, 39.9321f, 41.677f, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0) && !PED::IS_PED_INJURED(Local_5546))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_4414[1 /*19*/], -1))
					{
						PED::SET_PED_INTO_VEHICLE(Local_5546, Local_4414[1 /*19*/], -1);
					}
				}
				STREAMING::LOAD_ALL_OBJECTS_NOW();
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::LOAD_SCENE(1732.395f, 3319.714f, 40.2235f);
				iLocal_5874 = 10;
			}
			if (!PED::IS_PED_INJURED(Local_5546))
			{
				GlobalFunc_173(&Local_72, 3, Local_5546, "NervousRon", 0, 1);
				GlobalFunc_173(&Local_72, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			iLocal_5819 = 0;
			iLocal_5767 = 1;
			iLocal_5765 = 1;
			iLocal_5817 = 0;
			iLocal_5808 = 1;
			break;
	}
}





int func_702(int iParam0, bool bParam1)//Position - 0x7F62F
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
		func_330(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_492(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	GlobalFunc_10979(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}












































void func_746()//Position - 0x84E6A
{
	iLocal_5648 = 0;
	iLocal_5649 = 0;
	iLocal_5694 = 0;
	iLocal_5705 = 0;
	iLocal_5690 = 0;
	iLocal_5691 = 0;
	iLocal_5689 = 0;
	iLocal_5688 = 0;
	iLocal_5709 = 0;
	iLocal_5687 = 0;
	iLocal_5710 = 0;
	iLocal_5692 = 0;
	iLocal_5697 = 0;
	iLocal_5698 = 0;
	iLocal_5699 = 0;
	iLocal_5700 = 0;
	iLocal_5701 = 0;
	iLocal_5702 = 0;
	iLocal_5703 = 0;
	iLocal_5704 = 0;
	iLocal_5693 = 0;
	fLocal_5684 = 0f;
	fLocal_5685 = 0f;
	fLocal_5683 = 0f;
	iLocal_5650 = 0;
	iLocal_5651 = 0;
	iLocal_5654 = 0;
	iLocal_5655 = 0;
	iLocal_5652 = 0;
	iLocal_5653 = 0;
	iLocal_5656 = 0;
	iLocal_5657 = 0;
	iLocal_5658 = 0;
	iLocal_5711 = -1;
}

void func_747()//Position - 0x84EFA
{
	if (GlobalFunc_8633(2))
	{
		if (iLocal_5874 < 5 && iLocal_5874 > 2)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 40, 0, 0);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max"));
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"));
				GRAPHICS::SET_SEETHROUGH(0);
			}
			else
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")))
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max"));
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"));
				}
			}
		}
	}
	if ((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_advancedrifle"), 0)) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 120, 0, 0);
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0))
	{
		WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), GlobalFunc_3003(120, WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"))));
	}
}


void func_749(int iParam0)//Position - 0x85056
{
	if (iParam0 == 0 || iParam0 == 2)
	{
		Local_5860 = { 1987.705f, 3813.734f, 31.2125f };
		fLocal_5857 = 180.5414f;
	}
	else if (iParam0 == 3)
	{
		Local_5860 = { 1574.78f, 3363.098f, 47.6349f };
		fLocal_5857 = 245.3244f;
	}
	else if (iParam0 == 4)
	{
		Local_5860 = { 1574.78f, 3363.098f, 47.6349f };
		fLocal_5857 = 245.3244f;
	}
	else if (iParam0 == 5)
	{
		Local_5860 = { 1583.03f, 3361.128f, 36.6399f };
		fLocal_5857 = 245.3244f;
	}
	else if (iParam0 == 6)
	{
		Local_5860 = { 1729.684f, 3316.879f, 40.2261f };
		fLocal_5857 = 332.4664f;
	}
	else if (iParam0 == 7)
	{
		Local_5860 = { 842.7066f, 3217.68f, 37.4018f };
		fLocal_5857 = 65.258f;
	}
	GlobalFunc_2788(Local_5860, fLocal_5857, 1);
}




void func_753()//Position - 0x85264
{
	Local_5546.f_10 = { 1738.32f, 3345.343f, 40.2626f };
	Local_5546.f_13 = 101.9829f;
	Local_5546.f_14 = joaat("cs_nervousron");
	Local_491[0 /*40*/].f_2 = { 1695.794f, 3293.902f, 40.1491f };
	Local_491[0 /*40*/].f_5 = 307.0567f;
	Local_491[0 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[0 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[1 /*40*/].f_2 = { 1726.52f, 3291.54f, 41.2f };
	Local_491[1 /*40*/].f_5 = 147.5838f;
	Local_491[1 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[1 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[2 /*40*/].f_2 = { 1726.125f, 3291.043f, 40.1531f };
	Local_491[2 /*40*/].f_5 = 97.0908f;
	Local_491[2 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[2 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[2 /*40*/].f_8 = { 1697.159f, 3313.768f, 40.1481f };
	Local_491[3 /*40*/].f_2 = { 1701.905f, 3287.501f, 47.2312f };
	Local_491[3 /*40*/].f_5 = 119.5233f;
	Local_491[3 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[3 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[3 /*40*/].f_8 = { 1763.371f, 3287.446f, 40.172f };
	Local_491[4 /*40*/].f_2 = { 1684.756f, 3287.304f, 40.1491f };
	Local_491[4 /*40*/].f_5 = 41.154f;
	Local_491[4 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[4 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[5 /*40*/].f_2 = { 1712.454f, 3293.564f, 40.1649f };
	Local_491[5 /*40*/].f_5 = 62.9918f;
	Local_491[5 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[5 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[6 /*40*/].f_2 = { 1693.927f, 3292.39f, 40.1503f };
	Local_491[6 /*40*/].f_5 = 325.6591f;
	Local_491[6 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[6 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[6 /*40*/].f_8 = { 1708.811f, 3296.233f, 40.1512f };
	Local_491[7 /*40*/].f_2 = { 1693.691f, 3292.358f, 40.1491f };
	Local_491[7 /*40*/].f_5 = 217.1215f;
	Local_491[7 /*40*/].f_6 = joaat("weapon_pistol");
	Local_491[7 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[8 /*40*/].f_2 = { 1701.184f, 3287.765f, 40.1502f };
	Local_491[8 /*40*/].f_5 = 7.6591f;
	Local_491[8 /*40*/].f_6 = joaat("weapon_pistol");
	Local_491[8 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[9 /*40*/].f_2 = { 1724.58f, 3275.33f, 41.13f };
	Local_491[9 /*40*/].f_5 = 61.88f;
	Local_491[9 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[9 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[10 /*40*/].f_2 = { 1748.68f, 3275.61f, 40.12f };
	Local_491[10 /*40*/].f_5 = 42.4657f;
	Local_491[10 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[10 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[11 /*40*/].f_2 = { 1748.42f, 3272.33f, 40.17f };
	Local_491[11 /*40*/].f_5 = 34.3434f;
	Local_491[11 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[11 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[12 /*40*/].f_2 = { 1723.038f, 3290.328f, 40.2005f };
	Local_491[12 /*40*/].f_5 = 30.1818f;
	Local_491[12 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[12 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[13 /*40*/].f_2 = { 1719.85f, 3233.018f, 40.5404f };
	Local_491[13 /*40*/].f_5 = 12.9925f;
	Local_491[13 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[13 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[14 /*40*/].f_2 = { 1679.75f, 3264.483f, 39.7197f };
	Local_491[14 /*40*/].f_5 = 218.2584f;
	Local_491[14 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[14 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[15 /*40*/].f_2 = { 1580.058f, 3219.149f, 39.4144f };
	Local_491[15 /*40*/].f_5 = 254.621f;
	Local_491[15 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[15 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[16 /*40*/].f_2 = { 1691.452f, 3271.159f, 39.9328f };
	Local_491[16 /*40*/].f_5 = 240.1006f;
	Local_491[16 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[16 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[17 /*40*/].f_2 = { 1683.58f, 3285.26f, 40.95f };
	Local_491[17 /*40*/].f_5 = 82.84f;
	Local_491[17 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[17 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[18 /*40*/].f_2 = { 1691.884f, 3274.279f, 40.0108f };
	Local_491[18 /*40*/].f_5 = 263.0063f;
	Local_491[18 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[18 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[19 /*40*/].f_2 = { 1713.301f, 3274.138f, 40.1518f };
	Local_491[19 /*40*/].f_5 = 1.8871f;
	Local_491[19 /*40*/].f_6 = joaat("weapon_sawnoffshotgun");
	Local_491[19 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[20 /*40*/].f_2 = { 1708.372f, 3285.856f, 47.902f };
	Local_491[20 /*40*/].f_5 = 294.3297f;
	Local_491[20 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[20 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[21 /*40*/].f_2 = { 1701.535f, 3292.094f, 48.4063f };
	Local_491[21 /*40*/].f_5 = 11.612f;
	Local_491[21 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[21 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[22 /*40*/].f_2 = { 1730.547f, 3308.754f, 40.1517f };
	Local_491[22 /*40*/].f_5 = 183.2464f;
	Local_491[22 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[22 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[22 /*40*/].f_8 = { 1729.575f, 3288.033f, 40.1538f };
	Local_491[23 /*40*/].f_2 = { 1731.6f, 3278.658f, 40.1009f };
	Local_491[23 /*40*/].f_5 = 32.1404f;
	Local_491[23 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[23 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[24 /*40*/].f_2 = { 1741.563f, 3273.582f, 40.1562f };
	Local_491[24 /*40*/].f_5 = 246.8833f;
	Local_491[24 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[24 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[25 /*40*/].f_2 = { 1755.227f, 3299.583f, 40.1551f };
	Local_491[25 /*40*/].f_5 = 190.3749f;
	Local_491[25 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[25 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[26 /*40*/].f_2 = { 1757.954f, 3296.831f, 40.1557f };
	Local_491[26 /*40*/].f_5 = 72.9738f;
	Local_491[26 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[26 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[27 /*40*/].f_2 = { 1590.118f, 3223.726f, 39.4141f };
	Local_491[27 /*40*/].f_5 = 103.4968f;
	Local_491[27 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_491[27 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[28 /*40*/].f_2 = { 1746.866f, 3274.401f, 40.1354f };
	Local_491[28 /*40*/].f_5 = 76.9593f;
	Local_491[28 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[28 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[29 /*40*/].f_2 = { 1751.12f, 3289.48f, 41.11f };
	Local_491[29 /*40*/].f_5 = 91.02f;
	Local_491[29 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[29 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[30 /*40*/].f_2 = { 1729.17f, 3276.962f, 40.1146f };
	Local_491[30 /*40*/].f_5 = 40.8308f;
	Local_491[30 /*40*/].f_6 = joaat("weapon_pistol");
	Local_491[30 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[31 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[32 /*40*/].f_2 = { 1731.927f, 3297.885f, 40.2261f };
	Local_491[32 /*40*/].f_5 = 195.9035f;
	Local_491[32 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_491[32 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_491[33 /*40*/].f_2 = { 1731.066f, 3419.657f, 36.9629f };
	Local_491[33 /*40*/].f_5 = 126.972f;
	Local_491[33 /*40*/].f_6 = joaat("weapon_unarmed");
	Local_491[33 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_2692[1 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_2692[1 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_2692[1 /*40*/].f_8 = { 1744.26f, 3256.7f, 40.9f };
	Local_2692[2 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_2692[2 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_2692[2 /*40*/].f_8 = { 1733.74f, 3239.8f, 40.6416f };
	Local_2692[6 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_2692[6 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_2692[6 /*40*/].f_8 = { 1684.663f, 3242.67f, 39.5164f };
	Local_2692[8 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_2692[8 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_2692[8 /*40*/].f_8 = { 1744.319f, 3276.453f, 40.1562f };
	Local_2692[9 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_2692[9 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_2692[9 /*40*/].f_8 = { 1762.554f, 3266.373f, 40.9775f };
	Local_2692[10 /*40*/].f_6 = joaat("weapon_carbinerifle");
	Local_2692[10 /*40*/].f_7 = joaat("g_m_y_lost_01");
	Local_2692[10 /*40*/].f_8 = { 1685.153f, 3278.753f, 40.0407f };
}







void func_760()//Position - 0x85F59
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
	{
		if (!iLocal_5786[0])
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -136.4585f, 4276.761f, 29.56263f, -197.2442f, 4222.989f, 43.77049f, 9f, 0, 1, 0))
				{
					GlobalFunc_565(502, 1, 0);
					iLocal_5786[0] = 1;
				}
			}
		}
		if (!iLocal_5786[1])
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -509.28f, 4377.606f, 26.79379f, -523.0926f, 4479.798f, 88.048f, 8.5f, 0, 1, 0))
				{
					GlobalFunc_565(502, 1, 0);
					iLocal_5786[1] = 1;
				}
			}
		}
		if (!iLocal_5786[2])
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1807.457f, 4712.741f, -0.492477f, -1996.501f, 4523.395f, 56.04794f, 19.75f, 0, 1, 0))
				{
					GlobalFunc_565(502, 1, 0);
					iLocal_5786[2] = 1;
				}
			}
		}
		if (!iLocal_5786[3])
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2701.28f, 2368.256f, -0.621469f, -2611.711f, 2953.843f, 12.48369f, 16.25f, 0, 1, 0))
				{
					GlobalFunc_565(502, 1, 0);
					iLocal_5786[3] = 1;
				}
			}
		}
		if (!iLocal_5786[4])
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1505.684f, 2710.376f, -1.330758f, -1378.12f, 2608.957f, 15.50247f, 16.25f, 0, 1, 0))
				{
					GlobalFunc_565(502, 1, 0);
					iLocal_5786[4] = 1;
				}
			}
		}
		if (!iLocal_5786[5])
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -439.5014f, 2967.737f, 5.94632f, -384.5487f, 2955.279f, 24.55413f, 7.25f, 0, 1, 0))
				{
					GlobalFunc_565(502, 1, 0);
					iLocal_5786[5] = 1;
				}
			}
		}
		if (!iLocal_5786[6])
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 150.5869f, 3350.779f, 25.92635f, 97.21603f, 3382.603f, 47.22371f, 5.5f, 0, 1, 0))
				{
					GlobalFunc_565(502, 1, 0);
					iLocal_5786[6] = 1;
				}
			}
		}
		if (!iLocal_5786[7])
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 127.5069f, 3419.874f, 17.40908f, 149.3864f, 3410.061f, 38.73085f, 15f, 0, 1, 0))
				{
					GlobalFunc_565(502, 1, 0);
					iLocal_5786[7] = 1;
				}
			}
		}
	}
}

void func_761()//Position - 0x86257
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (iLocal_5831 > 8)
		{
			if (iLocal_5819 < 3)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FOCUS_CAM_RUNWAY"))
				{
					AUDIO::START_AUDIO_SCENE("TREVOR_2_FOCUS_CAM_RUNWAY");
				}
			}
			else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FOCUS_CAM_RON"))
			{
				AUDIO::START_AUDIO_SCENE("TREVOR_2_FOCUS_CAM_RON");
			}
		}
		else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FOCUS_CAM_RON"))
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_2_FOCUS_CAM_RON");
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FOCUS_CAM_RON"))
		{
			AUDIO::STOP_AUDIO_SCENE("TREVOR_2_FOCUS_CAM_RON");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FOCUS_CAM_RUNWAY"))
		{
			AUDIO::STOP_AUDIO_SCENE("TREVOR_2_FOCUS_CAM_RUNWAY");
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
	{
		if (iLocal_5874 == 7)
		{
			if (iLocal_5819 == 4)
			{
				if (iLocal_5811 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[19 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[19 /*19*/], 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[19 /*19*/], 0))
						{
							GlobalFunc_10591(&uLocal_27, Local_4414[19 /*19*/], 0, 0, 1, 1, 1);
						}
					}
				}
			}
			if (iLocal_5819 < 4)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
					{
						GlobalFunc_10591(&uLocal_27, Local_4414[1 /*19*/], 0, 0, 1, 1, 1);
					}
					else
					{
						GlobalFunc_4948(&uLocal_27, 0, 0);
					}
				}
				else
				{
					GlobalFunc_4948(&uLocal_27, 0, 0);
				}
			}
		}
		else if (iLocal_5831 > 8)
		{
			if (iLocal_5819 < 3)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
					{
						GlobalFunc_9268(&uLocal_27, 2127.49f, 4803.145f, 40.0305f, 0, 0, 1, 1, 1);
					}
					else
					{
						GlobalFunc_4948(&uLocal_27, 0, 0);
					}
				}
			}
			else
			{
				GlobalFunc_4948(&uLocal_27, 0, 0);
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
				{
					GlobalFunc_10591(&uLocal_27, Local_4414[1 /*19*/], 0, 0, 1, 1, 1);
				}
				else
				{
					GlobalFunc_4948(&uLocal_27, 0, 0);
				}
			}
			else
			{
				GlobalFunc_4948(&uLocal_27, 0, 0);
			}
		}
	}
	if (!GlobalFunc_4953(1, 1, 0))
	{
		GlobalFunc_4948(&uLocal_27, 0, 0);
	}
}























void func_784()//Position - 0x875AF
{
	int iVar0;
	
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uLocal_5097, -1);
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_5097[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_5097[iVar0]))
			{
				if (PED::IS_PED_MODEL(uLocal_5097[iVar0], joaat("g_m_y_lost_01")))
				{
					if (GlobalFunc_588(&iLocal_5841, 1500))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_5097[iVar0], 1), 1) < 25f)
						{
							GlobalFunc_5653(uLocal_5097[iVar0], "TR2_DNAA", "LOST6", 3);
							iLocal_5841 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_785()//Position - 0x87654
{
	STREAMING::REQUEST_ANIM_DICT("misstrevor2ig_11");
	if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2ig_11"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_4414[2 /*19*/]) && !PED::IS_PED_INJURED(Local_491[27 /*40*/]))
		{
			func_786();
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (iLocal_5873 > 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						if (((GlobalFunc_588(&iLocal_5845, 18000) || ENTITY::IS_ENTITY_UPSIDEDOWN(PLAYER::PLAYER_PED_ID())) || ENTITY::GET_ENTITY_ROLL(Local_4414[2 /*19*/]) > 160f) || ENTITY::GET_ENTITY_ROLL(Local_4414[2 /*19*/]) < -160f)
						{
							if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
							{
								if (func_36("IN THE AIR"))
								{
									if (iLocal_5873 != 4)
									{
										GlobalFunc_4935();
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_5546, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 500f)
										{
											AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_491[27 /*40*/]);
											AUDIO::DISABLE_PED_PAIN_AUDIO(Local_491[27 /*40*/], 1);
											GlobalFunc_5653(Local_491[27 /*40*/], "TR2_ZAAA", "LOST1", 3);
											iLocal_5868 = 0;
											ENTITY::SET_ENTITY_COLLISION(Local_491[27 /*40*/], 1, 0);
											if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
											{
												ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_491[27 /*40*/]);
												TASK::SET_HIGH_FALL_TASK(Local_491[27 /*40*/], 2000, 10000, 0);
											}
											iLocal_5873 = 4;
										}
										else
										{
											AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_491[27 /*40*/]);
											ENTITY::SET_ENTITY_COLLISION(Local_491[27 /*40*/], 1, 0);
											if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
											{
												ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_491[27 /*40*/]);
												TASK::SET_HIGH_FALL_TASK(Local_491[27 /*40*/], 2000, 10000, 0);
											}
											AUDIO::DISABLE_PED_PAIN_AUDIO(Local_491[27 /*40*/], 1);
											GlobalFunc_5653(Local_491[27 /*40*/], "TR2_ZAAA", "LOST1", 3);
											iLocal_5868 = 0;
											iLocal_5873 = 4;
										}
									}
								}
							}
						}
						else if (iLocal_5873 != 4)
						{
							if (iLocal_5873 == 1)
							{
								if (ENTITY::GET_ENTITY_ROLL(Local_4414[2 /*19*/]) <= -20f)
								{
									if (iLocal_5873 != 3 || iLocal_5873 != 2)
									{
										iLocal_5868 = 0;
										iLocal_5873 = 3;
									}
								}
								else if (ENTITY::GET_ENTITY_ROLL(Local_4414[2 /*19*/]) >= 20f)
								{
									if (iLocal_5873 != 2 || iLocal_5873 != 3)
									{
										iLocal_5868 = 0;
										iLocal_5873 = 2;
									}
								}
							}
						}
					}
				}
			}
			if (!func_36("IN THE AIR"))
			{
				if (iLocal_5873 > 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
					{
						if (ENTITY::IS_ENTITY_IN_AIR(Local_4414[2 /*19*/]))
						{
							iLocal_5845 = MISC::GET_GAME_TIMER();
							func_33("IN THE AIR", 1);
						}
					}
				}
			}
			if (iLocal_5873 != 4)
			{
				if (!func_36("BIKER ON WING SHOUT"))
				{
					GlobalFunc_5653(Local_491[27 /*40*/], "TR2_EOAA", "LOST6", 3);
					func_33("BIKER ON WING SHOUT", 1);
					iLocal_5901 = MISC::GET_GAME_TIMER();
				}
				else if (GlobalFunc_588(&iLocal_5901, MISC::GET_RANDOM_INT_IN_RANGE(7000, 9000)))
				{
					func_33("BIKER ON WING SHOUT", 0);
				}
			}
			switch (iLocal_5873)
			{
				case 0:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5847))
					{
						iLocal_5847 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_491[27 /*40*/], iLocal_5847, "misstrevor2ig_11", "idle_intro", 1000f, -4f, 0, 0, 1148846080, 0);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5847, Local_4414[2 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_4414[2 /*19*/], "chassis"));
						iLocal_5868 = 0;
						VEHICLE::DISABLE_PLANE_AILERON(Local_4414[2 /*19*/], 0, 1);
						ENTITY::SET_ENTITY_COLLISION(Local_491[27 /*40*/], 0, 0);
						iLocal_5873 = 1;
					}
					break;
				
				case 1:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5847))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5847) >= 1f)
						{
							iLocal_5848 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_491[27 /*40*/], iLocal_5848, "misstrevor2ig_11", "idle", 4f, -4f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_5848, 1);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5848, Local_4414[2 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_4414[2 /*19*/], "chassis"));
						}
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5846))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5846))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5846) >= 1f)
							{
								iLocal_5848 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_491[27 /*40*/], iLocal_5848, "misstrevor2ig_11", "idle", 4f, -4f, 0, 0, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_5848, 1);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5848, Local_4414[2 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_4414[2 /*19*/], "chassis"));
							}
						}
					}
					else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5848))
					{
						if (func_36("IN THE AIR"))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
							{
								if (((GlobalFunc_588(&iLocal_5845, 25000) || ENTITY::IS_ENTITY_UPSIDEDOWN(PLAYER::PLAYER_PED_ID())) || ENTITY::GET_ENTITY_ROLL(Local_4414[2 /*19*/]) > 180f) || ENTITY::GET_ENTITY_ROLL(Local_4414[2 /*19*/]) < -180f)
								{
									if (iLocal_5873 != 4)
									{
										if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
										{
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_5546, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 500f)
											{
												AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_491[27 /*40*/]);
												AUDIO::DISABLE_PED_PAIN_AUDIO(Local_491[27 /*40*/], 1);
												GlobalFunc_5653(Local_491[27 /*40*/], "TR2_ZAAA", "LOST1", 3);
												if (iLocal_5873 != 4)
												{
													iLocal_5873 = 4;
												}
											}
											else
											{
												AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_491[27 /*40*/]);
												GlobalFunc_5653(Local_491[27 /*40*/], "TR2_ZAAA", "LOST1", 3);
												if (iLocal_5873 != 4)
												{
													iLocal_5873 = 4;
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
					switch (iLocal_5868)
					{
						case 0:
							iLocal_5846 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_491[27 /*40*/], iLocal_5846, "misstrevor2ig_11", "turn_left_intro", 4f, -4f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_5846, 0);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5846, Local_4414[2 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_4414[2 /*19*/], "chassis"));
							iLocal_5868++;
							break;
						
						case 1:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5846))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5846) >= 1f)
								{
									iLocal_5846 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_491[27 /*40*/], iLocal_5846, "misstrevor2ig_11", "turn_left_loop", 4f, -4f, 0, 0, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_5846, 1);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5846, Local_4414[2 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_4414[2 /*19*/], "chassis"));
									iLocal_5868++;
								}
							}
							break;
						
						case 2:
							if (ENTITY::GET_ENTITY_ROLL(Local_4414[2 /*19*/]) > -10f)
							{
								iLocal_5868++;
							}
							break;
						
						case 3:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5846))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_491[27 /*40*/], "misstrevor2ig_11", "turn_left_loop", 3))
								{
									iLocal_5846 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_491[27 /*40*/], iLocal_5846, "misstrevor2ig_11", "turn_left_outro", 4f, -4f, 0, 0, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_5846, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5846, Local_4414[2 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_4414[2 /*19*/], "chassis"));
									iLocal_5868++;
								}
							}
							break;
						
						case 4:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5846))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5846) >= 1f)
								{
									iLocal_5848 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_491[27 /*40*/], iLocal_5848, "misstrevor2ig_11", "idle", 4f, -4f, 0, 0, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_5848, 1);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5848, Local_4414[2 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_4414[2 /*19*/], "chassis"));
									iLocal_5873 = 1;
									iLocal_5868 = 0;
								}
							}
							break;
					}
					break;
				
				case 3:
					switch (iLocal_5868)
					{
						case 0:
							iLocal_5846 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_491[27 /*40*/], iLocal_5846, "misstrevor2ig_11", "turn_right_intro", 4f, -4f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_5846, 0);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5846, Local_4414[2 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_4414[2 /*19*/], "chassis"));
							iLocal_5868++;
							break;
						
						case 1:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5846))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5846) >= 1f)
								{
									iLocal_5846 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_491[27 /*40*/], iLocal_5846, "misstrevor2ig_11", "turn_right_loop", 4f, -4f, 0, 0, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_5846, 1);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5846, Local_4414[2 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_4414[2 /*19*/], "chassis"));
									iLocal_5868++;
								}
							}
							break;
						
						case 2:
							if (ENTITY::GET_ENTITY_ROLL(Local_4414[2 /*19*/]) < 10f)
							{
								iLocal_5868++;
							}
							break;
						
						case 3:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5846))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_491[27 /*40*/], "misstrevor2ig_11", "turn_right_loop", 3))
								{
									iLocal_5846 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_491[27 /*40*/], iLocal_5846, "misstrevor2ig_11", "turn_right_outro", 4f, -4f, 0, 0, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_5846, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5846, Local_4414[2 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_4414[2 /*19*/], "chassis"));
									iLocal_5868++;
								}
							}
							break;
						
						case 4:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5846))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_5846) >= 1f)
								{
									iLocal_5848 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_491[27 /*40*/], iLocal_5848, "misstrevor2ig_11", "idle", 4f, -4f, 0, 0, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_5848, 1);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_5848, Local_4414[2 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_4414[2 /*19*/], "chassis"));
									iLocal_5873 = 1;
									iLocal_5868 = 0;
								}
							}
							break;
					}
					break;
				
				case 4:
					switch (iLocal_5868)
					{
						case 0:
							ENTITY::SET_ENTITY_COLLISION(Local_491[27 /*40*/], 1, 0);
							if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
							{
								ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_491[27 /*40*/]);
								TASK::SET_HIGH_FALL_TASK(Local_491[27 /*40*/], 2000, 10000, 0);
							}
							VEHICLE::DISABLE_PLANE_AILERON(Local_4414[2 /*19*/], 0, 0);
							STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_11");
							if (HUD::DOES_BLIP_EXIST(Local_491[27 /*40*/].f_1))
							{
								HUD::REMOVE_BLIP(&(Local_491[27 /*40*/].f_1));
							}
							RECORDING::_0x293220DA1B46CEBC(1f, 1073741824, 3);
							iLocal_5900 = MISC::GET_GAME_TIMER();
							iLocal_5868++;
							break;
						
						case 1:
							if (!func_36("TR_bi03"))
							{
								if (GlobalFunc_10618(&Local_72, "T2AUD", "TR_bi03", 7, 0, 0, 0))
								{
									func_33("TR_bi03", 1);
								}
							}
							else if (GlobalFunc_588(&iLocal_5900, 3000))
							{
								if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_491[27 /*40*/], 0);
									iLocal_5868++;
								}
							}
							break;
					}
					break;
				}
			}
	}
}

void func_786()//Position - 0x8810B
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_4414[2 /*19*/]))
	{
		fLocal_5864 = fLocal_5863;
		fLocal_5863 = ENTITY::GET_ENTITY_HEADING(Local_4414[2 /*19*/]);
		fLocal_5865 = (fLocal_5863 - fLocal_5864);
		if (fLocal_5865 > 180f)
		{
			fLocal_5865 = (fLocal_5865 - 360f);
		}
		else if (fLocal_5865 < -180f)
		{
			fLocal_5865 = (fLocal_5865 + 360f);
		}
		if (fLocal_5867 >= 0.1f)
		{
			fLocal_5867 = 0f;
		}
		else
		{
			fLocal_5867 = (fLocal_5867 + (1f * SYSTEM::TIMESTEP()));
		}
	}
}

void func_787()//Position - 0x88191
{
	if (!func_36("TR2_DAMAGE"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_4414[2 /*19*/]) < 300f)
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_5875, 1))
					{
						if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_DAMAGE", 7, 0, 0, 0))
						{
							func_33("TR2_DAMAGE", 1);
						}
					}
				}
			}
		}
	}
	if (iLocal_5831 > 7)
	{
		if (iLocal_5831 != 99 || iLocal_5831 != 97)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/]))
				{
					fLocal_5942 = func_788(Local_4414[2 /*19*/], &fLocal_5941);
					HUD::_SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL((fLocal_5941 + 46f));
				}
			}
		}
	}
	switch (iLocal_5831)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if ((ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 12f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_4414[2 /*19*/], 1308.81f, 3144.014f, 37.4141f, 1406.187f, 3170.944f, 59.41155f, 51.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_AIR(Local_4414[1 /*19*/]))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
					{
						if (GlobalFunc_74("SJC_FLYH1"))
						{
							HUD::CLEAR_HELP(1);
							iLocal_5832 = MISC::GET_GAME_TIMER();
							iLocal_5831++;
						}
						else
						{
							iLocal_5832 = MISC::GET_GAME_TIMER();
							iLocal_5831++;
						}
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(Local_4414[1 /*19*/]))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 196, 1);
					}
				}
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4414[2 /*19*/], 0))
				{
					if (!GlobalFunc_74("SJC_FLYH1"))
					{
						GlobalFunc_159("SJC_FLYH3", 12000);
						iLocal_5832 = MISC::GET_GAME_TIMER();
						iLocal_5831++;
					}
				}
				else if (GlobalFunc_74("SJC_FLYH3"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			else
			{
				HUD::CLEAR_HELP(1);
				iLocal_5831++;
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_5832, 12000) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_74("SJC_FLYH3"))
				{
					HUD::CLEAR_HELP(1);
					GlobalFunc_159("SJC_FLYH2", 12000);
					iLocal_5832 = MISC::GET_GAME_TIMER();
					iLocal_5831++;
				}
				else
				{
					GlobalFunc_159("SJC_FLYH2", 12000);
					iLocal_5832 = MISC::GET_GAME_TIMER();
					iLocal_5831++;
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_588(&iLocal_5832, 12000))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					if (VEHICLE::GET_LANDING_GEAR_STATE(Local_4414[2 /*19*/]) == 2 || VEHICLE::GET_LANDING_GEAR_STATE(Local_4414[2 /*19*/]) == 0)
					{
						if (!GlobalFunc_74("SJC_FLYH2"))
						{
							GlobalFunc_159("SJC_FLYH4", 12000);
							iLocal_5832 = MISC::GET_GAME_TIMER();
							iLocal_5831++;
						}
					}
					else
					{
						HUD::CLEAR_HELP(1);
						iLocal_5831++;
					}
				}
			}
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				if ((GlobalFunc_588(&iLocal_5832, 7000) || VEHICLE::GET_LANDING_GEAR_STATE(Local_4414[2 /*19*/]) == 1) || VEHICLE::GET_LANDING_GEAR_STATE(Local_4414[2 /*19*/]) == 3)
				{
					if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_491[27 /*40*/]))
						{
							HUD::CLEAR_HELP(1);
							iLocal_5832 = MISC::GET_GAME_TIMER();
							iLocal_5831++;
						}
						else
						{
							HUD::CLEAR_HELP(1);
							iLocal_5831++;
						}
					}
					else
					{
						HUD::CLEAR_HELP(1);
						iLocal_5831++;
					}
				}
			}
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(Local_491[27 /*40*/]))
			{
				if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(Local_491[27 /*40*/]))
					{
						HUD::CLEAR_HELP(1);
						iLocal_5832 = MISC::GET_GAME_TIMER();
						iLocal_5831++;
					}
				}
			}
			else
			{
				HUD::CLEAR_HELP(1);
				iLocal_5832 = MISC::GET_GAME_TIMER();
				iLocal_5831++;
			}
			break;
		
		case 6:
			if (GlobalFunc_588(&iLocal_5832, 1400))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_159("SJC_PILOTHS1", -1);
					iLocal_5832 = MISC::GET_GAME_TIMER();
					iLocal_5831++;
				}
			}
			break;
		
		case 7:
			if (GlobalFunc_588(&iLocal_5832, 7000))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_159("SJC_PILOTHS2", -1);
					iLocal_5832 = MISC::GET_GAME_TIMER();
					iLocal_5831 = 99;
				}
			}
			break;
		
		case 99:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -2819.091f, 3326.993f, 31.81007f, 1) < 1000f)
			{
				if (GlobalFunc_588(&iLocal_5832, 7000))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_159("SJC_BASHLP", -1);
						iLocal_5832 = MISC::GET_GAME_TIMER();
						iLocal_5831 = 97;
					}
				}
			}
			break;
		
		case 97:
			if (iLocal_5874 == 7)
			{
				if (!func_36("TR2_MILB"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_5875, 1))
						{
							if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_MILB", 7, 0, 0, 0))
							{
								func_33("TR2_MILB", 1);
							}
						}
					}
				}
				else if (GlobalFunc_588(&iLocal_5832, 7000))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_159("SJC_LOWHLP", -1);
						iLocal_5832 = MISC::GET_GAME_TIMER();
						iLocal_5831 = 8;
					}
				}
			}
			else
			{
				iLocal_5831 = 8;
			}
			break;
		
		case 8:
			if (iLocal_5874 == 8)
			{
				if (!func_36("SJC_FLYH5"))
				{
					if (GlobalFunc_588(&iLocal_5832, 7000))
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							func_33("SJC_FLYH5", 1);
						}
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2121.557f, 4803.938f, 40.1959f, 1) < 1300f)
				{
					if (GlobalFunc_4953(1, 1, 0))
					{
						HUD::CLEAR_HELP(1);
						GlobalFunc_159("SJC_CAMLAND", -1);
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FLY_BACK"))
					{
						AUDIO::STOP_AUDIO_SCENE("TREVOR_2_FLY_BACK");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FLY_BACK"))
					{
						AUDIO::START_AUDIO_SCENE("TREVOR_2_LAND_THE_PLANE");
					}
					iLocal_5832 = MISC::GET_GAME_TIMER();
					iLocal_5831++;
				}
			}
			break;
		
		case 9:
			if (!GlobalFunc_4953(1, 1, 0) && GlobalFunc_74("SJC_CAMLAND"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (iLocal_5874 == 8)
			{
				if (GlobalFunc_588(&iLocal_5832, 7000))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2121.557f, 4803.938f, 40.1959f, 1) < 800f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
						{
							if (VEHICLE::GET_LANDING_GEAR_STATE(Local_4414[2 /*19*/]) == 3 || VEHICLE::GET_LANDING_GEAR_STATE(Local_4414[2 /*19*/]) == 1)
							{
								HUD::CLEAR_HELP(1);
								GlobalFunc_159("SJC_DEPLOY", -1);
								iLocal_5831++;
							}
							else
							{
								iLocal_5831++;
							}
						}
					}
				}
			}
			break;
		
		case 10:
			if (iLocal_5874 == 8)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
				{
					if (VEHICLE::GET_LANDING_GEAR_STATE(Local_4414[2 /*19*/]) == 2 || VEHICLE::GET_LANDING_GEAR_STATE(Local_4414[2 /*19*/]) == 0)
					{
						if (GlobalFunc_74("SJC_DEPLOY"))
						{
							HUD::CLEAR_HELP(1);
						}
						iLocal_5832 = MISC::GET_GAME_TIMER();
						iLocal_5831++;
					}
				}
			}
			break;
		
		case 11:
			GlobalFunc_159("SJC_FLYH2", 10000);
			iLocal_5831++;
			break;
	}
}

float func_788(int iParam0, var uParam1)//Position - 0x888CD
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, uParam1);
	if (*uParam1 < 0f)
	{
		*uParam1 = 0f;
	}
	fLocal_5942 = (Var0.f_2 - *uParam1);
	if (fLocal_5942 < 0f)
	{
		fLocal_5942 = (fLocal_5942 * -1f);
	}
	return fLocal_5942;
}

void func_789()//Position - 0x88915
{
	if (iLocal_5816 == 0)
	{
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_5108[2]))
		{
			uLocal_5108[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 1697.46f, 3290.95f, 40.98f, -1.02f, -0.35f, 157.86f, 0, -1, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_5108[2]))
		{
			uLocal_5108[3] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 1687.15f, 3286.16f, 41.22f, -0.31f, -0.27f, 69.39f, 0, -1, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_5108[1]))
		{
			uLocal_5108[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_pumpshotgun"), 1688.75f, 3292.56f, 40.9f, -89.87f, 0.35f, -13.93f, 0, 50, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_5108[0]))
		{
			uLocal_5108[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_armour_standard"), 1750.317f, 3294.205f, 40.1137f, -89.43f, 0.29f, 5.86f, 0, -1, 2, 1, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_5108[4]))
		{
			uLocal_5108[4] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_grenade"), 1727.83f, 3277.28f, 40.15f, 90.52f, 30.58f, -162.35f, 0, 4, 2, 1, 0);
		}
		iLocal_5816 = 1;
	}
}

void func_790()//Position - 0x88A69
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_5714[iVar0 /*4*/]) && ENTITY::DOES_ENTITY_EXIST(Local_5714[iVar0 /*4*/].f_1))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(Local_5714[iVar0 /*4*/]))
			{
				OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Local_5714[iVar0 /*4*/], 1);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_5714[iVar0 /*4*/], 1, 0f, 0f, 0f, 0f, 0f, -0.2f, 0, 1, 1, 1, 0, 1);
				Local_5714[iVar0 /*4*/].f_3 = 0;
			}
			else if (Local_5714[iVar0 /*4*/].f_3 == 0)
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_5714[iVar0 /*4*/].f_1, "p_cargo_chute_s_crumple", "p_cargo_chute_s", 1f, 0, 1, 0, 0, 0);
				Local_5714[iVar0 /*4*/].f_2 = MISC::GET_GAME_TIMER();
				Local_5714[iVar0 /*4*/].f_3 = 1;
			}
			else if (GlobalFunc_588(&(Local_5714[iVar0 /*4*/].f_2), 2000))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_5714[iVar0 /*4*/].f_1))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_5714[iVar0 /*4*/].f_1))
					{
						OBJECT::DELETE_OBJECT(&(Local_5714[iVar0 /*4*/].f_1));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cargo_chute_s"));
					}
				}
			}
		}
		iVar0++;
	}
}

void func_791()//Position - 0x88B76
{
	if (!func_36("TR2_MILB"))
	{
		if (HUD::DOES_BLIP_EXIST(Local_5875.f_5))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2861.891f, 3415.217f, 13.77781f, -1654.712f, 2763.592f, 467.4865f, 325f, 0, 1, 0))
			{
				if (!GlobalFunc_5172(&Local_5875, 1))
				{
					if (GlobalFunc_10618(&Local_72, "T2AUD", "TR2_MILB", 8, 0, 0, 0))
					{
						func_33("TR2_MILB", 1);
					}
				}
				else
				{
					GlobalFunc_5105();
				}
			}
		}
	}
}

void func_792()//Position - 0x88BFC
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
		if (iVar0 == joaat("weapon_unarmed"))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		}
		else
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!PED::IS_PED_INJURED(Local_5546))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_5546, &iVar1, 1);
		if (iVar1 == joaat("weapon_unarmed"))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_5546, 1);
		}
		else
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_5546, 1);
		}
	}
}

void func_793()//Position - 0x88C6E
{
	iLocal_5826 = 0;
	while (iLocal_5826 <= 54)
	{
		if (iLocal_5826 != 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_491[iLocal_5826 /*40*/]))
			{
				if (PED::IS_PED_INJURED(Local_491[iLocal_5826 /*40*/]))
				{
					if (HUD::DOES_BLIP_EXIST(Local_491[iLocal_5826 /*40*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_491[iLocal_5826 /*40*/].f_1));
					}
				}
			}
		}
		iLocal_5826++;
	}
	iLocal_5826 = 0;
	while (iLocal_5826 <= 39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2692[iLocal_5826 /*40*/]))
		{
			if (PED::IS_PED_INJURED(Local_2692[iLocal_5826 /*40*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_2692[iLocal_5826 /*40*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_2692[iLocal_5826 /*40*/].f_1));
				}
			}
		}
		iLocal_5826++;
	}
	switch (iLocal_5820)
	{
		case 0:
			break;
		
		case 1:
			iLocal_5826 = 13;
			while (iLocal_5826 <= 20)
			{
				if (Local_491[iLocal_5826 /*40*/].f_12 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_491[iLocal_5826 /*40*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_491[iLocal_5826 /*40*/], 1120685857) != 1)
						{
							PED::SET_PED_COMBAT_MOVEMENT(Local_491[iLocal_5826 /*40*/], 0);
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_491[iLocal_5826 /*40*/], ENTITY::GET_ENTITY_COORDS(Local_491[iLocal_5826 /*40*/], 1), 100f, 0);
							if (!HUD::DOES_BLIP_EXIST(Local_491[iLocal_5826 /*40*/].f_1))
							{
							}
						}
					}
				}
				iLocal_5826++;
			}
			iLocal_5827 = 0;
			while (iLocal_5827 <= 39)
			{
				if (!PED::IS_PED_INJURED(Local_2692[iLocal_5827 /*40*/]))
				{
				}
				iLocal_5827++;
			}
			break;
	}
}

void func_794()//Position - 0x88DEF
{
	if (iLocal_5874 == 3)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (iLocal_5661[1] == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_5546))
				{
					if (PED::IS_PED_INJURED(Local_5546) || ENTITY::IS_ENTITY_DEAD(Local_5546))
					{
						if (iLocal_5705 == 0)
						{
							iLocal_5705 = MISC::GET_GAME_TIMER();
						}
						else if (GlobalFunc_2521(2000, iLocal_5705))
						{
							iLocal_5116 = 1;
							iLocal_5874 = 12;
						}
					}
				}
			}
			if (iLocal_5657 == 1)
			{
				if (iLocal_5658 == 1)
				{
					if (GlobalFunc_2521(7500, iLocal_5694))
					{
						iLocal_5116 = 19;
						iLocal_5874 = 12;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_5546))
	{
		if (PED::IS_PED_INJURED(Local_5546))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
			iLocal_5116 = 1;
			iLocal_5874 = 12;
		}
	}
	if (iLocal_5874 == 2)
	{
		if (iLocal_5819 < 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_4414[12 /*19*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[12 /*19*/], 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
					iLocal_5116 = 9;
					iLocal_5874 = 12;
				}
				else if (GlobalFunc_2250(&(Local_4414[12 /*19*/])))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
					iLocal_5116 = 10;
					iLocal_5874 = 12;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_4414[11 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
				iLocal_5116 = 7;
				iLocal_5874 = 12;
			}
			else if (((VEHICLE::IS_VEHICLE_TYRE_BURST(Local_4414[11 /*19*/], 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_4414[11 /*19*/], 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_4414[11 /*19*/], 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_4414[11 /*19*/], 5, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
				iLocal_5116 = 7;
				iLocal_5874 = 12;
			}
			else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_4414[11 /*19*/]))
			{
				if (GlobalFunc_2250(&(Local_4414[11 /*19*/])))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
					iLocal_5116 = 8;
					iLocal_5874 = 12;
				}
			}
		}
	}
	if (iLocal_5874 == 3)
	{
		if (CLOCK::GET_CLOCK_HOURS() > 4)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
			iLocal_5116 = 17;
			iLocal_5874 = 12;
		}
		if (!func_36("QUAD NO LONGER NEEDED"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_4414[11 /*19*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[11 /*19*/], 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
					iLocal_5116 = 7;
					iLocal_5874 = 12;
				}
			}
		}
	}
	if (iLocal_5874 < 4)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1778.177f, 3334.226f, 39.18927f, 1690.478f, 3246.944f, 58.62189f, 125f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1719.216f, 3253.996f, 37.8946f, 1483.964f, 3196.578f, 58.1641f, 125f, 0, 1, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
				iLocal_5116 = 16;
				iLocal_5874 = 12;
			}
		}
	}
	if (iLocal_5874 == 7 || iLocal_5874 == 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_4414[2 /*19*/]))
		{
			if (!func_797(Local_4414[2 /*19*/]))
			{
				if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_491[27 /*40*/], 1, 0);
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_491[27 /*40*/]);
					TASK::SET_HIGH_FALL_TASK(Local_491[27 /*40*/], 2000, 10000, 0);
				}
				GlobalFunc_4935();
				AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
				iLocal_5116 = 12;
				iLocal_5874 = 12;
			}
			else if (!VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(Local_4414[2 /*19*/]))
			{
				GlobalFunc_5105();
				AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
				iLocal_5116 = 18;
				iLocal_5874 = 12;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_4414[1 /*19*/]))
		{
			if (!func_797(Local_4414[1 /*19*/]))
			{
				if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_491[27 /*40*/], 1, 0);
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_491[27 /*40*/]);
					TASK::SET_HIGH_FALL_TASK(Local_491[27 /*40*/], 2000, 10000, 0);
				}
				GlobalFunc_4935();
				AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
				iLocal_5116 = 12;
				iLocal_5874 = 12;
			}
		}
	}
	else if (iLocal_5874 != 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_4414[1 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
			{
				if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_491[27 /*40*/], 1, 0);
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_491[27 /*40*/]);
					TASK::SET_HIGH_FALL_TASK(Local_491[27 /*40*/], 2000, 10000, 0);
				}
				GlobalFunc_5105();
				AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
				iLocal_5116 = 12;
				iLocal_5874 = 12;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_4414[2 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
			{
				if (!PED::IS_PED_INJURED(Local_491[27 /*40*/]))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_491[27 /*40*/], 1, 0);
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_491[27 /*40*/]);
					TASK::SET_HIGH_FALL_TASK(Local_491[27 /*40*/], 2000, 10000, 0);
				}
				GlobalFunc_5105();
				AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
				iLocal_5116 = 12;
				iLocal_5874 = 12;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[19 /*19*/]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[19 /*19*/], 0))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
			iLocal_5116 = 13;
			iLocal_5874 = 12;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2692[19 /*40*/]))
	{
		if (PED::IS_PED_INJURED(Local_2692[19 /*40*/]))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
			iLocal_5116 = 14;
			iLocal_5874 = 12;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2692[20 /*40*/]))
	{
		if (PED::IS_PED_INJURED(Local_2692[20 /*40*/]))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
			iLocal_5116 = 14;
			iLocal_5874 = 12;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2692[21 /*40*/]))
	{
		if (PED::IS_PED_INJURED(Local_2692[21 /*40*/]))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
			iLocal_5116 = 14;
			iLocal_5874 = 12;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[20 /*19*/]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[20 /*19*/], 0))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
			iLocal_5116 = 13;
			iLocal_5874 = 12;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_4414[21 /*19*/]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[21 /*19*/], 0))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
			iLocal_5116 = 13;
			iLocal_5874 = 12;
		}
	}
	if (iLocal_5874 == 2)
	{
		if (iLocal_5819 < 4)
		{
			if (GlobalFunc_8624(29))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
				iLocal_5116 = 15;
				iLocal_5874 = 12;
			}
		}
	}
	if (iLocal_5874 > 1 && iLocal_5874 < 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1751.958f, 3391.119f, 35.98867f, 1516.484f, 3299.361f, 46.03533f, 118.25f, 0, 1, 0))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
				iLocal_5116 = 16;
				iLocal_5874 = 12;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_5546))
	{
		if (!PED::IS_PED_INJURED(Local_5546))
		{
			if (iLocal_5874 == 2)
			{
				if (iLocal_5819 > 3)
				{
					func_795(ENTITY::GET_ENTITY_COORDS(Local_5546, 1), 500f, 750f, "SJC_DISTWARN", "", 2, 0, "");
				}
			}
			else if (iLocal_5874 == 3)
			{
				func_603(1575.048f, 3363.594f, 47.635f, 10f, 40f, "SJC_RETRW", "SJC_DISTWARN1", 6);
			}
			else if (iLocal_5874 == 5)
			{
				if (iLocal_5819 < 5 && iLocal_5819 > 0)
				{
					func_795(ENTITY::GET_ENTITY_COORDS(Local_5546, 1), 200f, 250f, "SJC_DISTWARN", "", 2, 0, "");
				}
				if (iLocal_5819 == 5)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[1 /*19*/], 0))
					{
						if (PED::IS_PED_IN_VEHICLE(Local_5546, Local_4414[1 /*19*/], 0))
						{
							func_795(ENTITY::GET_ENTITY_COORDS(Local_5546, 1), 150f, 200f, "SJC_LOSINGG", "SJC_GETPLNG2", 2, 0, "");
						}
						else
						{
							func_795(ENTITY::GET_ENTITY_COORDS(Local_5546, 1), 150f, 200f, "SJC_DISTWARN", "SJC_ENEM2G", 2, 0, "");
						}
					}
				}
			}
			else if (iLocal_5874 == 6)
			{
				if (iLocal_5819 > 5)
				{
					func_795(ENTITY::GET_ENTITY_COORDS(Local_5546, 1), 300f, 350f, "SJC_DISTWARN", "SJC_FLWPLNG", 3, 0, "");
				}
			}
			else if (iLocal_5874 == 7)
			{
				if (iLocal_5819 == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[19 /*19*/], 0))
					{
						func_795(ENTITY::GET_ENTITY_COORDS(Local_4414[19 /*19*/], 1), 1200f, 2000f, "", "SJC_DROPG1", 2, 1, "TR2_DBAA");
					}
				}
				else if (iLocal_5819 > 4)
				{
				}
				else
				{
					func_795(ENTITY::GET_ENTITY_COORDS(Local_5546, 1), 500f, 700f, "SJC_DISTWARN", "SJC_FLWPLNG", 2, 1, "TR2_DBAA");
				}
			}
		}
	}
}

void func_795(struct<3> Param0, float fParam3, float fParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8, char* sParam9)//Position - 0x8961C
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param0, 1) > fParam4)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
		iLocal_5116 = iParam7;
		iLocal_5874 = 12;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param0, 1) > fParam3)
	{
		if (!iLocal_5782)
		{
			if (!GlobalFunc_620())
			{
				GlobalFunc_619(1);
				HUD::CLEAR_PRINTS();
			}
			if (!GlobalFunc_5172(&Local_5875, 2))
			{
				if (bParam8)
				{
					if (!PED::IS_PED_INJURED(Local_5546))
					{
						GlobalFunc_5653(Local_5546, sParam9, "NervousRon", 4);
					}
				}
				GlobalFunc_5884(sParam5);
				iLocal_5782 = 1;
			}
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param0, 1) < (fParam3 - 100f))
	{
		if (iLocal_5782)
		{
			if (GlobalFunc_620())
			{
				GlobalFunc_619(0);
			}
			GlobalFunc_5884(sParam6);
			iLocal_5782 = 0;
		}
	}
}


int func_797(int iParam0)//Position - 0x89702
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (func_798(&iParam0))
		{
			return 0;
		}
		else if (!VEHICLE::ARE_PLANE_PROPELLERS_INTACT(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_798(var uParam0)//Position - 0x89742
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 0, 5000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 3, 20000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}


void func_800(bool bParam0)//Position - 0x897E5
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 64);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 2);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	GlobalFunc_563(0);
	STREAMING::NEW_LOAD_SCENE_STOP();
	CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 1, 0, 1);
	WEAPON::SET_FLASH_LIGHT_FADE_DISTANCE(-1f);
	GlobalFunc_4503(0);
	GlobalFunc_8634(29, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blazer"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blazer2"), 0);
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_5115))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_5115);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL");
	if (!func_36("TRV2_MISSION_FAIL"))
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("TRV2_MISSION_FAIL"))
		{
			func_33("TRV2_MISSION_FAIL", 1);
		}
	}
	func_746();
	func_521(&Local_5546, 0, 0, 1);
	func_520(&Local_5123, 0, 0, 1);
	func_520(&Local_5340, 0, 0, 1);
	func_520(&Local_5449, 0, 0, 1);
	func_518(&Local_5504, 0, 0);
	func_518(&Local_5525, 0, 0);
	func_517(&Local_5573, 0);
	func_517(&Local_5583, 0);
	func_517(&(Local_5593[0 /*10*/]), 0);
	if (iLocal_5695 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_5695))
		{
			AUDIO::STOP_SOUND(iLocal_5695);
		}
	}
	if (iLocal_5696 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_5696))
		{
			AUDIO::STOP_SOUND(iLocal_5696);
		}
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST("GRAPESEED_PLANES"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GRAPESEED_PLANES", 1);
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SANDY_PLANES"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("SANDY_PLANES", 1);
	}
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_5088))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_5088);
	}
	if (HUD::DOES_BLIP_EXIST(Local_5546.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_5546.f_1));
	}
	func_812(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_2224(0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_m_hillbilly_01"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_m_hillbilly_02"), 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), 1);
	}
	STREAMING::SET_RENDER_HD_ONLY(0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	TASK::REMOVE_WAYPOINT_RECORDING("trv2QuadGun");
	TASK::REMOVE_WAYPOINT_RECORDING("trv2QuadGtoA");
	if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		CUTSCENE::STOP_CUTSCENE(0);
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	func_811();
	if (iLocal_5814)
	{
		HUD::SET_GPS_CUSTOM_ROUTE_RENDER(0, 18, 30);
		HUD::CLEAR_GPS_CUSTOM_ROUTE();
		iLocal_5814 = 0;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	VEHICLE::SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(250f);
	iVar0 = 0;
	while (iVar0 <= 54)
	{
		GlobalFunc_589(&(Local_491[iVar0 /*40*/].f_23));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_5108[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(uLocal_5108[iVar0]);
		}
		iVar0++;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5090))
		{
			func_808(&iLocal_5090);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_5090))
	{
		GlobalFunc_131(&iLocal_5090);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_4414[2 /*19*/], 0))
	{
		VEHICLE::CLOSE_BOMB_BAY_DOORS(Local_4414[2 /*19*/]);
	}
	GlobalFunc_860();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 101, 0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_5764))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_5764, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5756))
	{
		OBJECT::DELETE_OBJECT(&iLocal_5756);
	}
	func_805(PLAYER::PLAYER_PED_ID(), 14, 154);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 0);
	}
	GlobalFunc_629(&Local_5875);
	func_535();
	func_534("RCSJC");
	PED::CLEAR_PED_NON_CREATION_AREA();
	iLocal_5836 = 0;
	if (PATHFIND::ARE_ALL_NAVMESH_REGIONS_LOADED())
	{
		PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_5755))
	{
		OBJECT::DELETE_OBJECT(&iLocal_5755);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
		}
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_DUCKING(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (!bParam0)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::WASH_DECALS_IN_RANGE(1701.425f, 3303.774f, 40.164f, 1000f, 1f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(1701.425f, 3303.774f, 40.164f, 1000f);
		OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("pickup_weapon_assaultrifle"));
		MISC::CLEAR_AREA(1701.425f, 3303.774f, 40.164f, 1000f, 1, 0, 0, 0);
		MISC::CLEAR_AREA(1995.725f, 3812.294f, 31.2603f, 1000f, 1, 0, 0, 0);
	}
	if (iLocal_5797 == 0)
	{
		GlobalFunc_4935();
	}
	func_804();
	GlobalFunc_7632(0);
	if (HUD::DOES_BLIP_EXIST(uLocal_402))
	{
		HUD::REMOVE_BLIP(&uLocal_402);
	}
	iLocal_5822 = 0;
	while (iLocal_5822 <= 54)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_491[iLocal_5822 /*40*/]))
		{
			if (bParam0)
			{
				if (!PED::IS_PED_INJURED(Local_491[iLocal_5822 /*40*/]))
				{
					PED::SET_PED_KEEP_TASK(Local_491[iLocal_5822 /*40*/], 1);
				}
				Local_491[iLocal_5822 /*40*/].f_15 = 0;
				Local_491[iLocal_5822 /*40*/].f_35 = 0;
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_491[iLocal_5822 /*40*/]));
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				Local_491[iLocal_5822 /*40*/].f_15 = 0;
				Local_491[iLocal_5822 /*40*/].f_35 = 0;
				PED::DELETE_PED(&(Local_491[iLocal_5822 /*40*/]));
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_491[iLocal_5822 /*40*/]))
				{
					PED::SET_PED_KEEP_TASK(Local_491[iLocal_5822 /*40*/], 1);
				}
				Local_491[iLocal_5822 /*40*/].f_35 = 0;
				Local_491[iLocal_5822 /*40*/].f_15 = 0;
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_491[iLocal_5822 /*40*/]));
			}
		}
		iLocal_5822++;
	}
	iLocal_5822 = 0;
	while (iLocal_5822 <= 39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2692[iLocal_5822 /*40*/]))
		{
			if (bParam0)
			{
				if (!PED::IS_PED_INJURED(Local_2692[iLocal_5822 /*40*/]))
				{
					PED::SET_PED_KEEP_TASK(Local_2692[iLocal_5822 /*40*/], 1);
				}
				Local_2692[iLocal_5822 /*40*/].f_35 = 0;
				Local_2692[iLocal_5822 /*40*/].f_15 = 0;
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2692[iLocal_5822 /*40*/]));
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				Local_2692[iLocal_5822 /*40*/].f_35 = 0;
				Local_2692[iLocal_5822 /*40*/].f_15 = 0;
				PED::DELETE_PED(&(Local_2692[iLocal_5822 /*40*/]));
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_2692[iLocal_5822 /*40*/]))
				{
					PED::SET_PED_KEEP_TASK(Local_2692[iLocal_5822 /*40*/], 1);
				}
				Local_2692[iLocal_5822 /*40*/].f_35 = 0;
				Local_2692[iLocal_5822 /*40*/].f_15 = 0;
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_491[iLocal_5822 /*40*/]));
			}
		}
		iLocal_5822++;
	}
	iLocal_5822 = 0;
	while (iLocal_5822 <= 4)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5757[iLocal_5822]))
			{
				OBJECT::DELETE_OBJECT(&(uLocal_5757[iLocal_5822]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uLocal_5757[iLocal_5822]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_5757[iLocal_5822]));
		}
		iLocal_5822++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_5763))
	{
		OBJECT::DELETE_OBJECT(&iLocal_5763);
	}
	iLocal_5822 = 0;
	while (iLocal_5822 <= 34)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_4414[iLocal_5822 /*19*/]))
		{
			if (bParam0)
			{
				GlobalFunc_131(&(Local_4414[iLocal_5822 /*19*/]));
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(Local_4414[iLocal_5822 /*19*/]));
			}
		}
		iLocal_5822++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_5546))
	{
		if (HUD::DOES_BLIP_EXIST(Local_5546.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_5546.f_1));
		}
		if (bParam0)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_5546);
		}
		else
		{
			PED::DELETE_PED(&Local_5546);
		}
	}
	iLocal_5822 = 0;
	while (iLocal_5822 <= 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_5739[iLocal_5822]))
		{
			if (bParam0)
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_5739[iLocal_5822]));
			}
			else
			{
				OBJECT::DELETE_OBJECT(&(uLocal_5739[iLocal_5822]));
			}
		}
		iLocal_5822++;
	}
	GlobalFunc_7139(&Local_5875, 0);
	STREAMING::REMOVE_ANIM_SET("move_ped_crouched");
	STREAMING::REMOVE_ANIM_SET("move_ped_crouched_strafing");
	STREAMING::REMOVE_ANIM_DICT("guard_reactions");
	STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_2");
	STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_3");
	STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_4");
	STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_4b");
	STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_5");
	STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_5b_p2");
	STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_5c");
	STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_6");
	STREAMING::REMOVE_ANIM_DICT("missbigscore2big_2");
	STREAMING::REMOVE_ANIM_DICT("misstrevor2ig_7");
	STREAMING::REMOVE_ANIM_DICT("misstrevor2mcs_3_b");
	STREAMING::REQUEST_ANIM_DICT("misstrevor2ron_basic_moves");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@d");
	STREAMING::REMOVE_ANIM_DICT("missexile2reactions_to_gun_fire@standing@idle_a");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	iLocal_5784 = 0;
	iLocal_5816 = 0;
	func_802("RCSJC");
	func_512();
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_5092[0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_5092[0], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_5092[1]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_5092[1], 0);
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	iLocal_5873 = 0;
	iLocal_5868 = 0;
	iLocal_5659 = 0;
	if (!bParam0)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::CLEAR_AREA(1764.937f, 3270.389f, 40.3731f, 1000f, 1, 1, 0, 0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
		func_57();
		HUD::CLEAR_PRINTS();
	}
	else
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
		GlobalFunc_698();
		PLAYER::SET_MAX_WANTED_LEVEL(6);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}


void func_802(char* sParam0)//Position - 0x8A0CE
{
	func_535();
	func_534(sParam0);
}


void func_804()//Position - 0x8A0F1
{
	iLocal_5822 = 0;
	while (iLocal_5822 <= 54)
	{
		if (HUD::DOES_BLIP_EXIST(Local_491[iLocal_5822 /*40*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_491[iLocal_5822 /*40*/].f_1));
		}
		iLocal_5822++;
	}
	iLocal_5822 = 0;
	while (iLocal_5822 <= 39)
	{
		if (HUD::DOES_BLIP_EXIST(Local_2692[iLocal_5822 /*40*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_2692[iLocal_5822 /*40*/].f_1));
		}
		iLocal_5822++;
	}
}

int func_805(int iParam0, int iParam1, int iParam2)//Position - 0x8A165
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(uParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10915(iParam0, iParam1, iParam2))
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
				func_805(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_805(iParam0, 14, uVar20[iVar18]))
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
	if (GlobalFunc_11037(iParam0, iVar0, &iVar46, 0))
	{
		GlobalFunc_11272(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11035(iParam0, iVar0, &iVar46))
	{
		GlobalFunc_11272(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}



void func_808(var uParam0)//Position - 0x8A37F
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		if (GlobalFunc_5745(*uParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
			{
				if (GlobalFunc_777(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(uParam0);
			}
		}
		else
		{
			if (GlobalFunc_777(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(uParam0);
		}
	}
}



void func_811()//Position - 0x8A465
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_DRIVE_ATV"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_DRIVE_ATV");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_PROPERTY_INTRO_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_PROPERTY_INTRO_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FOCUS_CAM_RON"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_FOCUS_CAM_RON");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_TRAINS_VOLUME"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_TRAINS_VOLUME");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_SNIPE_MAIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_SNIPE_MAIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_SNIPER_SIGHTS"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_SNIPER_SIGHTS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_SNIPE_FOCUS"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_SNIPE_FOCUS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_HELI_SILENT"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_HELI_SILENT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_HELI_APPROACH"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_HELI_APPROACH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_HELI_CRASH"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_HELI_CRASH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_SHOOTOUT"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_SHOOTOUT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_GET_TO_PLANE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_GET_TO_PLANE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_SHOOTOUT_ON_WING"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_SHOOTOUT_ON_WING");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_RAYFIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FLIGHT_START"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_FLIGHT_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_CARGO_DOORS"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_CARGO_DOORS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_DROP_CARGO"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_DROP_CARGO");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FLY_BACK"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_FLY_BACK");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_LAND_THE_PLANE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_LAND_THE_PLANE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FOCUS_CAM_RON"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_FOCUS_CAM_RON");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_2_FOCUS_CAM_RON"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_2_FOCUS_CAM_RON");
	}
}

void func_812(int iParam0)//Position - 0x8A61E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_5661 - 1))
	{
		iLocal_5661[iVar0] = iParam0;
		iVar0++;
	}
}




