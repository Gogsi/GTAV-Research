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
	bool bLocal_42 = 0;
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
	int iLocal_77[3] = { 0, 0, 0 };
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91[5] = { 0, 0, 0, 0, 0 };
	var uLocal_97[5] = { 0, 0, 0, 0, 0 };
	int iLocal_103[5] = { 0, 0, 0, 0, 0 };
	struct<3> Local_109[5];
	float fLocal_125[5] = { 0f, 0f, 0f, 0f, 0f };
	var uLocal_131[3] = { 0, 0, 0 };
	int iLocal_135[5] = { 0, 0, 0, 0, 0 };
	var uLocal_141[5] = { 0, 0, 0, 0, 0 };
	var uLocal_147[5] = { 0, 0, 0, 0, 0 };
	int iLocal_153[5] = { 0, 0, 0, 0, 0 };
	int iLocal_159[5] = { 0, 0, 0, 0, 0 };
	int iLocal_165[5] = { 0, 0, 0, 0, 0 };
	int iLocal_171[5] = { 0, 0, 0, 0, 0 };
	int iLocal_177[5] = { 0, 0, 0, 0, 0 };
	int iLocal_183[5] = { 0, 0, 0, 0, 0 };
	struct<3> Local_189[5];
	struct<3> Local_205[5];
	struct<3> Local_221[5];
	struct<3> Local_237[5];
	var uLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	struct<3> Local_256 = { 0, 0, 0 } ;
	struct<3> Local_259 = { 0, 0, 0 } ;
	var uLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	struct<3> Local_266 = { 0, 0, 0 } ;
	struct<3> Local_269 = { 0, 0, 0 } ;
	struct<3> Local_272 = { 0, 0, 0 } ;
	float fLocal_275 = 0f;
	struct<3> Local_276[5];
	var uLocal_292[5] = { 0, 0, 0, 0, 0 };
	var uLocal_298[5] = { 0, 0, 0, 0, 0 };
	var uLocal_304[5] = { 0, 0, 0, 0, 0 };
	var uLocal_310[2] = { 0, 0 };
	var uLocal_313[5] = { 0, 0, 0, 0, 0 };
	int iLocal_319[5] = { 0, 0, 0, 0, 0 };
	struct<16> Local_325[5];
	var uLocal_406[5] = { 0, 0, 0, 0, 0 };
	struct<16> Local_412[5];
	struct<16> Local_493[5];
	var uLocal_574 = 5;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	int iLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601[5] = { 0, 0, 0, 0, 0 };
	var uLocal_607[5] = { 0, 0, 0, 0, 0 };
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	int iLocal_620 = 0;
	var uLocal_621[5] = { 0, 0, 0, 0, 0 };
	var uLocal_627 = 16;
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
	int iLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	int iLocal_798[5] = { 0, 0, 0, 0, 0 };
	int iLocal_804 = 0;
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	bool bVar1;
	
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
	iLocal_87 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(66))
	{
		func_680();
	}
	SYSTEM::WAIT(0);
	func_676(ScriptParam_0);
	func_675();
	while (iLocal_87)
	{
		SYSTEM::WAIT(0);
		if (Global_6)
		{
			Global_6 = 0;
			func_680();
		}
		iLocal_87 = 0;
		if (GlobalFunc_10372(0, Local_272, 1.5f))
		{
			func_423();
			if (!GlobalFunc_485(130) || GlobalFunc_485(131))
			{
				GlobalFunc_10373(1, &uLocal_82, Local_272, 30f, 30f, 15f, &uLocal_131);
			}
			iLocal_87 = 1;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_5(iVar0);
				iVar0++;
			}
		}
		if (func_2())
		{
			bVar1 = true;
			if (GlobalFunc_2983())
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				iLocal_87 = 1;
			}
		}
	}
	func_680();
}


int func_2()//Position - 0x14D
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = GlobalFunc_5899();
	switch (iVar0)
	{
		case 0:
			if (!GlobalFunc_230(19))
			{
				iLocal_265 = joaat("v_ilev_mchalkbrd_1");
			}
			else
			{
				iLocal_265 = joaat("v_ilev_mchalkbrd_5");
			}
			break;
		
		case 1:
			iLocal_265 = joaat("v_ilev_mchalkbrd_2");
			break;
		
		case 2:
			iLocal_265 = joaat("v_ilev_mchalkbrd_3");
			break;
		
		case 3:
			iLocal_265 = joaat("v_ilev_mchalkbrd_4");
			break;
		
		default:
			iLocal_265 = 0;
			return 0;
			break;
	}
	fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_272 + Local_266);
	fVar2 = (100f * 1f);
	fVar3 = (fVar2 * 1.25f);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263))
	{
		if (fVar1 > (fVar2 * fVar2))
		{
			return 0;
		}
		iLocal_263 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_272 + Local_266, 10f, joaat("v_ilev_mchalkbrd_1"), 1, 0, 1);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263))
		{
			return 0;
		}
		ENTITY::SET_ENTITY_VISIBLE(iLocal_263, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264))
	{
		if (fVar1 > (fVar2 * fVar2))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_265);
			return 0;
		}
		STREAMING::REQUEST_MODEL(iLocal_265);
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_265))
		{
			return 0;
		}
		iLocal_264 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_265, Local_272 + Local_266, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(iLocal_264, Vector(fLocal_275, 0f, 0f) + Local_269, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_264, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_265);
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iLocal_264) != iLocal_265)
	{
		OBJECT::DELETE_OBJECT(&iLocal_264);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_265);
		return 0;
	}
	if (fVar1 > (fVar3 * fVar3))
	{
		OBJECT::DELETE_OBJECT(&iLocal_264);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_265);
		return 0;
	}
	return 1;
}



int func_5(int iParam0)//Position - 0x3A3
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = func_403(iParam0);
	if (iLocal_77[1] || iLocal_77[2])
	{
		uVar1 = func_402(iParam0);
		func_390(iParam0, &uVar1);
	}
	if ((Global_85373[iVar0] == 141 || Global_85373[iVar0] == 140) || Global_85373[iVar0] == 49)
	{
		if (GlobalFunc_7233(&(uLocal_91[iParam0]), iVar0, &uLocal_627, iParam0 + 1, Global_85370))
		{
			GlobalFunc_5940(iVar0, Global_85373[iVar0], &(Local_276[iParam0 /*3*/]), &(uLocal_292[iParam0]));
			return 0;
		}
		iVar2 = func_402(iParam0);
		if (iLocal_77[1] || iLocal_77[2])
		{
		}
		else if (iVar2 < 3)
		{
			bVar3 = false;
			if (iVar2 == 1)
			{
				if (iVar0 == 0)
				{
					if (Global_85373[1] == 27)
					{
						bVar3 = true;
					}
				}
				if (iVar0 == 1)
				{
					if (Global_85373[0] == 7)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_131[iVar2]))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_131[iVar2], 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_131[iParam0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_131[iParam0], 1))
						{
							if (GlobalFunc_5959(uLocal_131[iParam0], "family_veh", iParam0))
							{
								VEHICLE::DELETE_VEHICLE(&(uLocal_131[iParam0]));
							}
							else
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_131[iParam0]));
							}
							iLocal_77[iVar2] = 0;
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_153[iParam0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_153[iParam0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_153[iParam0], 1, 1);
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_153[iParam0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_153[iParam0], 1)) && iLocal_165[iParam0] != joaat("prop_bong_01"))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_153[iParam0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_159[iParam0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_159[iParam0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_159[iParam0], 1, 1);
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_159[iParam0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_159[iParam0], 1)) && iLocal_171[iParam0] != joaat("prop_bong_01"))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_159[iParam0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_97[iParam0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_97[iParam0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_97[iParam0], 1))
			{
				PED::DELETE_PED(&(uLocal_97[iParam0]));
			}
		}
		if (GlobalFunc_580(4, uLocal_91[iParam0]))
		{
			GlobalFunc_583(4, uLocal_91[iParam0], 0);
			if (MISC::IS_BIT_SET(Global_34036[4 /*31*/].f_1, 5))
			{
				GlobalFunc_2447(4, 0);
			}
			if (!MISC::IS_BIT_SET(Global_34036[4 /*31*/].f_1, 4))
			{
				MISC::SET_BIT(&(Global_34036[4 /*31*/].f_1), 4);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[iParam0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_91[iParam0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_91[iParam0], 1))
			{
				if (GlobalFunc_5959(uLocal_91[iParam0], "family_ped", iParam0))
				{
					PED::DELETE_PED(&(uLocal_91[iParam0]));
				}
				else
				{
					PED::SET_PED_KEEP_TASK(uLocal_91[iParam0], 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_91[iParam0]));
				}
			}
			GlobalFunc_2985(&(uLocal_313[iParam0]), &(iLocal_319[iParam0]), &(Local_325[iParam0 /*16*/]));
		}
		return 0;
	}
	else if (func_20(&(uLocal_91[iParam0]), iVar0, Local_272 + Local_276[iParam0 /*3*/], GlobalFunc_739((fLocal_275 + uLocal_292[iParam0]), 0f, 360f), &iLocal_599, &(iLocal_601[iParam0]), &uLocal_627, iParam0 + 1, Global_85370))
	{
		func_390(iParam0, &uVar4);
		func_18(iParam0);
		func_15(iParam0);
		if (!PED::IS_PED_INJURED(uLocal_91[iParam0]))
		{
			return 1;
		}
	}
	else
	{
		func_6(&iLocal_595, &uLocal_596, &iLocal_599, &iLocal_600, Local_272, "v_michael");
		iLocal_595 = 1;
	}
	return 0;
}

void func_6(var uParam0, var uParam1, var uParam2, var uParam3, struct<3> Param4, char* sParam7)//Position - 0x759
{
	int iVar0;
	struct<3> Var1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!*uParam0)
	{
		if (!GlobalFunc_226(uParam1))
		{
			*uParam0 = 1;
		}
		else if (GlobalFunc_7072(uParam1, 1f))
		{
			*uParam0 = 1;
		}
	}
	else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		*uParam2 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			if (!INTERIOR::IS_VALID_INTERIOR(*uParam3))
			{
				*uParam3 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam7);
			}
		}
		GlobalFunc_6715(uParam1);
		*uParam0 = 0;
	}
	if (INTERIOR::IS_VALID_INTERIOR(*uParam2) && INTERIOR::IS_INTERIOR_READY(*uParam2))
	{
		if (*uParam2 == *uParam3)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return;
			}
			PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 38, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 46, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 37))
			{
				if (!Global_SAVE_DATA.FAMILY_SAVED_DATA.f_17)
				{
					GlobalFunc_159("FAM_WEAPDIS", -1);
					Global_SAVE_DATA.FAMILY_SAVED_DATA.f_17 = 1;
				}
				*uParam2 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					if (!INTERIOR::IS_VALID_INTERIOR(*uParam3))
					{
						*uParam3 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam7);
					}
				}
				GlobalFunc_6715(uParam1);
				*uParam0 = 0;
			}
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
			{
				if (iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				}
			}
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0))
			{
				if (iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object"))
				{
					WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"));
				}
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			Var1 = { INTERIOR::GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(*uParam2, 0f, 0f, 0f) };
			if (SYSTEM::VDIST2(Param4, Var1) < (5f * 5f))
			{
				if (!INTERIOR::IS_VALID_INTERIOR(*uParam3))
				{
					*uParam3 = *uParam2;
				}
			}
		}
	}
}









void func_15(int iParam0)//Position - 0xAD3
{
	func_16(&(uLocal_97[iParam0]), uLocal_91[iParam0], iLocal_103[iParam0], &(Local_109[iParam0 /*3*/]), &(fLocal_125[iParam0]));
}

void func_16(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0xAFD
{
	struct<3> Var0;
	
	if (iParam2 != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
				STREAMING::REQUEST_MODEL(iParam2);
				if (STREAMING::HAS_MODEL_LOADED(iParam2))
				{
					*iParam0 = PED::CREATE_PED(4, iParam2, Var0 + *uParam3, (ENTITY::GET_ENTITY_HEADING(iParam1) + *uParam4), 1, 1);
					GlobalFunc_2954(iParam0, -86095805);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iParam1, 1);
					if (iParam2 == joaat("s_m_y_cop_01"))
					{
						PED::SET_PED_HIGHLY_PERCEPTIVE(*iParam0, 1);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				}
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
			}
		}
		PED::DELETE_PED(iParam0);
	}
}


void func_18(int iParam0)//Position - 0xBEA
{
	int iVar0;
	
	iVar0 = func_403(iParam0);
	GlobalFunc_7227(&(iLocal_153[iParam0]), uLocal_91[iParam0], iVar0, Global_85373[iVar0], Local_272, fLocal_275, iLocal_165[iParam0], iLocal_177[iParam0], &(Local_189[iParam0 /*3*/]), &(Local_221[iParam0 /*3*/]));
	GlobalFunc_7227(&(iLocal_159[iParam0]), uLocal_91[iParam0], iVar0, Global_85373[iVar0], Local_272, fLocal_275, iLocal_171[iParam0], iLocal_183[iParam0], &(Local_205[iParam0 /*3*/]), &(Local_237[iParam0 /*3*/]));
	if (iParam0 == 3)
	{
		GlobalFunc_7227(&uLocal_253, uLocal_91[iParam0], iVar0, Global_85373[iVar0], Local_272, fLocal_275, iLocal_254, iLocal_255, &Local_256, &Local_259);
	}
}


int func_20(int iParam0, int iParam1, struct<3> Param2, float fParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10)//Position - 0xE37
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	float fVar24;
	float fVar25;
	var uVar26;
	
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((((GlobalFunc_6687(0) || GlobalFunc_6687(0)) || GlobalFunc_6687(2)) || (MISC::GET_RANDOM_EVENT_FLAG() && Global_97343)) || GlobalFunc_487())
	{
		if (Global_85373[iParam1] != 141)
		{
			GlobalFunc_2957(iParam1);
			Global_85373[iParam1] = 141;
		}
	}
	iVar0 = 0;
	iVar1 = GlobalFunc_2956(iParam1, &iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (Global_85373[iParam1] == 141 || Global_85373[iParam1] == 140)
		{
			if (GlobalFunc_7233(iParam0, iParam1, uParam8, iParam9, iParam10))
			{
				return 0;
			}
			return 0;
		}
		bVar2 = false;
		if (Global_85373[iParam1] != 123)
		{
			if (!GlobalFunc_8046(iParam1, Param2, *uParam6, uParam7))
			{
				SYSTEM::WAIT(0);
				return 0;
			}
		}
		if (Global_68509 == 0 && (iVar1 == 44 && Global_85373[5] == 96))
		{
		}
		else if (func_368(Param2, 4f))
		{
			SYSTEM::WAIT(0);
			return 0;
		}
		if (GlobalFunc_2955(Global_85373[iParam1], &sVar3))
		{
			STREAMING::REQUEST_ANIM_DICT(&sVar3);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&sVar3))
			{
				bVar2 = true;
			}
		}
		if (iVar1 != 145)
		{
			bVar19 = false;
			if (GlobalFunc_42(iVar1))
			{
				GlobalFunc_7215(iVar1);
				if (!GlobalFunc_7214(iVar1))
				{
					bVar19 = true;
				}
			}
			else
			{
				GlobalFunc_7049(iVar1);
				if (!GlobalFunc_7048(iVar1))
				{
					bVar19 = true;
				}
			}
			if ((!bVar2 && !bVar19) && !GlobalFunc_236())
			{
				if (GlobalFunc_42(iVar1))
				{
					if (GlobalFunc_11339(iParam0, iVar1, Param2, uParam5, 1, 0, 0))
					{
						GlobalFunc_2954(iParam0, iParam10);
						GlobalFunc_11296(*iParam0, iParam1, Global_85373[iParam1]);
						func_67(*iParam0, iParam1, iParam10, 0);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*iParam0, 1);
						GlobalFunc_173(uParam8, iParam9, *iParam0, GlobalFunc_2923(iParam1), 0, 1);
						iVar20 = GlobalFunc_237(iVar1);
						Global_87845[iVar20] = *iParam0;
						GlobalFunc_9023(*iParam0, 0);
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(*iParam0, 1) };
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar1] = ENTITY::GET_ENTITY_HEADING(*iParam0);
						*uParam7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(*iParam0);
					}
				}
				else if (GlobalFunc_6705(iParam0, iVar1, Param2, uParam5, 1))
				{
					GlobalFunc_2954(iParam0, iParam10);
					GlobalFunc_11296(*iParam0, iParam1, Global_85373[iParam1]);
					func_67(*iParam0, iParam1, iParam10, 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*iParam0, 1);
					GlobalFunc_173(uParam8, iParam9, *iParam0, GlobalFunc_2923(iParam1), 0, 1);
					*uParam7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(*iParam0);
				}
			}
		}
		else if (iVar0 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar0);
			if (STREAMING::HAS_MODEL_LOADED(iVar0) && !bVar2)
			{
				*iParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				GlobalFunc_2954(iParam0, iParam10);
				GlobalFunc_11296(*iParam0, iParam1, Global_85373[iParam1]);
				func_67(*iParam0, iParam1, iParam10, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*iParam0, 1);
				GlobalFunc_173(uParam8, iParam9, *iParam0, GlobalFunc_2923(iParam1), 0, 1);
			}
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			fVar21 = (CAM::_REPLAY_FREE_CAM_GET_MAX_RANGE() + 5f);
			switch (Global_85373[iParam1])
			{
				case 6:
				case 8:
				case 38:
				case 39:
				case 40:
				case 30:
				case 1:
				case 136:
				case 125:
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(*iParam0, 1)) < (fVar21 * fVar21))
					{
						RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
					}
					break;
				
				default:
					break;
				}
		}
		if (iParam1 == 12)
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
			{
				ENTITY::SET_ENTITY_VISIBLE(*iParam0, 0);
				return 0;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(*iParam0))
			{
				return 0;
			}
		}
		else if (Global_85373[iParam1] != 141)
		{
			iVar22 = -1;
			switch (iParam1)
			{
				case 0:
					iVar22 = 24;
					break;
				
				case 1:
					iVar22 = 25;
					break;
				
				case 2:
					iVar22 = 26;
					break;
				
				case 5:
					iVar22 = 29;
					break;
				
				case 10:
					iVar22 = 30;
					break;
				
				case 11:
					iVar22 = 31;
					break;
				
				case 13:
					iVar22 = 32;
					break;
			}
			if ((iVar1 != 145 && iVar22 != -1) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar23 = GlobalFunc_5942(*iParam0);
				if (iVar23 != 0)
				{
					if (!GlobalFunc_2948(-1789721694))
					{
						GlobalFunc_2947(75, ENTITY::GET_ENTITY_COORDS(*iParam0, 0), 250f, -1);
						if (GlobalFunc_7121(-1789721694, iVar22, -1, 6, GlobalFunc_8310(), iVar1, 60000, 10000, 75, iVar23, -1, 262208, 1))
						{
							GlobalFunc_2957(iParam1);
							Global_85373[iParam1] = 141;
							return 0;
						}
					}
				}
			}
			else
			{
				GlobalFunc_2957(iParam1);
				Global_85373[iParam1] = 141;
				return 0;
			}
		}
		if (iVar1 != 145)
		{
			Global_35465[iVar1] = MISC::GET_GAME_TIMER() + 20000;
		}
		fVar24 = (100f * 1.25f);
		fVar25 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(*iParam0, 0));
		if (fVar25 > (fVar24 * fVar24))
		{
			if (Global_85373[iParam1] != 141)
			{
				GlobalFunc_2957(iParam1);
				Global_85373[iParam1] = 141;
			}
		}
		if (fVar25 < 100f && !GlobalFunc_1976(*iParam0, PLAYER::PLAYER_PED_ID()))
		{
			if (Global_85373[iParam1] != 138)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 1))
				{
					GlobalFunc_2957(iParam1);
					Global_85373[iParam1] = 138;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 124, 1);
			PED::SET_PED_RESET_FLAG(*iParam0, 62, 1);
			if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 713668775) != 0 || TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 713668775) != 1)
			{
				if (GlobalFunc_2946(iParam1, &uVar26))
				{
					PED::SET_PED_CAPSULE(*iParam0, uVar26);
				}
			}
			*uParam7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(*iParam0);
			if (Global_89748 == *iParam0)
			{
				if (Global_85373[iParam1] != 140)
				{
					if (!GlobalFunc_488())
					{
						Global_89748 = 0;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}















































int func_67(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x34EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		return 0;
	}
	if (((iParam1 != 3 && Global_85373[iParam1] != 47) && Global_85373[iParam1] != 137) && Global_85373[iParam1] != 138)
	{
		TASK::CLEAR_PED_TASKS(iParam0);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	PED::SET_PED_RESET_FLAG(iParam0, 60, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 104, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam0, 0);
	iVar0 = 1;
	PED::SET_PED_RESET_FLAG(iParam0, 62, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 294, 1);
	if (Global_85373[iParam1] == 121 || Global_85373[iParam1] == 118)
	{
	}
	else
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 2);
		iVar0 = 1;
	}
	if (Global_85373[iParam1] == 108)
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 64);
		iVar0 = 1;
	}
	if (GlobalFunc_2946(iParam1, &uVar3))
	{
		PED::SET_PED_CAPSULE(iParam0, uVar3);
		iVar1 = 1;
	}
	if (!bParam3)
	{
		if (func_69(iParam0, iParam1))
		{
			iVar2 = 1;
		}
	}
	GlobalFunc_2954(&iParam0, iParam2);
	if (Global_85373[iParam1] == 116)
	{
		PED::SET_FORCE_STEP_TYPE(iParam0, 1, 20, 0);
		iVar0 = 1;
	}
	else if (Global_85373[iParam1] == 41)
	{
	}
	else
	{
		PED::SET_FORCE_STEP_TYPE(iParam0, 1, 0, 1);
		iVar0 = 1;
	}
	if (GlobalFunc_2949(Global_85373[iParam1]))
	{
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iParam0, "mood_sleeping_1", 0);
		iVar0 = 1;
	}
	else
	{
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(iParam0);
	}
	if ((iVar0 || iVar1) || iVar2)
	{
		return 1;
	}
	return 0;
}


int func_69(int iParam0, int iParam1)//Position - 0x36AC
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	sVar1 = "";
	iVar2 = 0;
	switch (Global_85373[iParam1])
	{
		case 52:
		case 67:
		case 74:
			sVar1 = "V_Michael_G_Hall";
			iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.6f, 179.4f, 72.2f, "v_michael");
			if (func_70(iParam0, iVar2, MISC::GET_HASH_KEY(sVar1)))
			{
				iVar0 = 1;
			}
			break;
		
		case 56:
		case 57:
			if (iParam1 == 0)
			{
				sVar1 = "V_Michael_1_Hall";
				iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.2079f, 181.3398f, 71.153f, "v_michael");
				if (func_70(iParam0, iVar2, MISC::GET_HASH_KEY(sVar1)))
				{
					iVar0 = 1;
				}
			}
			else
			{
				if (!Global_3)
				{
					INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam0);
				}
				iVar0 = 0;
			}
			break;
		
		case 12:
		case 13:
		case 14:
		case 15:
			sVar1 = "V_Michael_1_Hall";
			iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.2079f, 181.3398f, 71.153f, "v_michael");
			if (func_70(iParam0, iVar2, MISC::GET_HASH_KEY(sVar1)))
			{
				iVar0 = 1;
			}
			break;
		
		case 47:
			sVar1 = "V_Michael_G_Kitche";
			iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-803.4384f, 182.9567f, 73.2608f, "v_michael");
			if (func_70(iParam0, iVar2, MISC::GET_HASH_KEY(sVar1)))
			{
				iVar0 = 1;
			}
			break;
		
		case 75:
		case 84:
			sVar1 = "V_Michael_G_Kitche";
			iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-803.4384f, 182.9567f, 73.2608f, "v_michael");
			if (func_70(iParam0, iVar2, MISC::GET_HASH_KEY(sVar1)))
			{
				iVar0 = 1;
			}
			break;
		
		default:
			if (!Global_3)
			{
			}
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_70(int iParam0, int iParam1, int iParam2)//Position - 0x383D
{
	if (INTERIOR::IS_VALID_INTERIOR(iParam1))
	{
		if (INTERIOR::IS_INTERIOR_READY(iParam1))
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(uParam0, iParam1, iParam2);
			return 1;
		}
		else
		{
			INTERIOR::_0x82EBB79E258FA2B7(iParam0, iParam1);
			return 1;
		}
	}
	return 0;
}










































































































































































































































































































int func_368(struct<3> Param0, float fParam3)//Position - 0x4FD90
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	struct<3> Var6;
	float fVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0))
		{
			return 1;
		}
		Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
		fVar4 = SYSTEM::VDIST2(Param0, Var1);
		if (fVar4 < (fParam3 * fParam3))
		{
			iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
			Var6 = { 0f, 0f, 0f };
			fVar9 = 0f;
			iVar10 = 0;
			iVar11 = 1;
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, iVar5, &Var6, &fVar9, &iVar10, iVar11, 1077936128, 0))
			{
				Var12 = { 2f, 2f, 2f };
				if (CAM::IS_SPHERE_VISIBLE(Var6, SYSTEM::VMAG(Var12)))
				{
					return 1;
				}
				if (MISC::IS_AREA_OCCUPIED(Var6 - Var12, Var6 + Var12, 0, 1, 1, 0, 0, 0, 0))
				{
					return 1;
				}
				ENTITY::SET_ENTITY_COORDS(iVar0, Var6, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iVar0, fVar9);
				return 0;
			}
			return 1;
		}
	}
	return 0;
}






















void func_390(int iParam0, var uParam1)//Position - 0x52A42
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	*uParam1 = func_402(iParam0);
	if (*uParam1 < 3)
	{
		iVar0 = func_403(iParam0);
		bVar1 = false;
		if (iParam0 == 1)
		{
			if (iLocal_77[1])
			{
				bVar1 = true;
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_131[*uParam1]))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(uLocal_131[*uParam1], 0) };
					fVar5 = 30f;
					iVar6 = ENTITY::GET_ENTITY_MODEL(uLocal_131[*uParam1]);
					iVar7 = 2;
					iVar8 = VEHICLE::GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(Var2, fVar5, iVar6, iVar7, uLocal_131[*uParam1]);
					if (iVar8 != uLocal_131[*uParam1])
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_131[*uParam1]))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_131[*uParam1], 1))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_131[*uParam1]))
								{
									VEHICLE::DELETE_VEHICLE(&(uLocal_131[*uParam1]));
									iLocal_77[1] = 0;
								}
							}
						}
					}
				}
			}
		}
		else if (iParam0 == 2)
		{
			if (iLocal_77[2])
			{
				bVar1 = true;
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_131[*uParam1]))
				{
					Var9 = { ENTITY::GET_ENTITY_COORDS(uLocal_131[*uParam1], 0) };
					fVar12 = 30f;
					iVar13 = ENTITY::GET_ENTITY_MODEL(uLocal_131[*uParam1]);
					iVar14 = 2;
					iVar15 = VEHICLE::GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(Var9, fVar12, iVar13, iVar14, uLocal_131[*uParam1]);
					if (iVar15 != uLocal_131[*uParam1])
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_131[*uParam1]))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_131[*uParam1], 1))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_131[*uParam1]))
								{
									VEHICLE::DELETE_VEHICLE(&(uLocal_131[*uParam1]));
									iLocal_77[2] = 0;
								}
							}
						}
					}
				}
			}
		}
		func_391(&(uLocal_131[*uParam1]), iVar0, Local_272, fLocal_275, bVar1);
	}
}

void func_391(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x52BE3
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	struct<58> Var8;
	int iVar82;
	int iVar83;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = Global_85373[iParam1];
		if (GlobalFunc_7228(iParam1, iVar0, &Var1, &fVar4, &iVar5, &iVar6, bParam6))
		{
			if (!Global_3)
			{
				fVar7 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param2 + Var1);
				if (fVar7 < (15f * 15f) && !INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return;
				}
				Var8.f_11 = 12;
				Var8.f_31 = 25;
				Var8.f_57 = 2;
				if (iVar5 != 3)
				{
					GlobalFunc_549(iVar5, &Var8, 1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar82 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_MODEL(iVar82) == Var8)
					{
						*uParam0 = iVar82;
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*uParam0, 1);
						return;
					}
				}
				if (fVar7 < (35f * 35f))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param2 + Var1, 10f))
					{
						if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(Var8, Param2 + Var1, 0))
						{
							if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)))
							{
								return;
							}
						}
					}
				}
				else if (CAM::IS_SPHERE_VISIBLE(Param2 + Var1, 4f))
				{
					if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(Var8, Param2 + Var1, 0))
					{
						if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)))
						{
							return;
						}
					}
				}
				if (func_368(Param2 + Var1, 6f))
				{
					return;
				}
				if (MISC::IS_AREA_OCCUPIED(Param2 + Var1 - Vector(4f, 4f, 4f), Param2 + Var1 + Vector(4f, 4f, 4f), 0, 1, 0, 0, 0, 0, 0))
				{
					return;
				}
			}
			if (iVar5 != 145)
			{
				if (!GlobalFunc_5941(uParam0, iVar5, Param2 + Var1, iVar6))
				{
					if (GlobalFunc_8052(uParam0, iVar5, Param2 + Var1, GlobalFunc_739((fParam5 + fVar4), 0f, 360f), 1, iVar6))
					{
						VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam0), 15);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*uParam0, 1);
						if (iParam1 == 2)
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, 1);
						}
						if (Global_3)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 3);
						}
					}
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam0), 15);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*uParam0, 1);
					if (iParam1 == 2)
					{
						VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, 1);
					}
					if (Global_3)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 3);
					}
				}
			}
			else
			{
				iVar83 = 0;
				if (iVar83 != 0)
				{
					STREAMING::REQUEST_MODEL(iVar83);
					if (STREAMING::HAS_MODEL_LOADED(iVar83))
					{
						if (CAM::IS_SPHERE_VISIBLE(Param2 + Var1, 2.5f))
						{
							return;
						}
						if (func_368(Param2 + Var1, 6f))
						{
							return;
						}
						if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
						{
							VEHICLE::DELETE_VEHICLE(uParam0);
						}
						*uParam0 = VEHICLE::CREATE_VEHICLE(iVar83, Param2 + Var1, GlobalFunc_739((fParam5 + fVar4), 0f, 360f), 0, 0);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
						VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam0), 15);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*uParam0, 1);
						if (iVar83 == joaat("police"))
						{
							VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(*uParam0, 0);
							VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(*uParam0, 1);
							VEHICLE::SET_VEHICLE_DISABLE_TOWING(*uParam0, 1);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar83);
					}
				}
			}
		}
	}
}











int func_402(int iParam0)//Position - 0x54121
{
	switch (iParam0)
	{
		case 0:
			if (Global_85373[0] == 7)
			{
				return 1;
			}
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
	}
	return 4;
}

int func_403(int iParam0)//Position - 0x54174
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 15;
			break;
	}
	return 16;
}




















int func_423()//Position - 0x54E57
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	bVar0 = false;
	func_6(&iLocal_595, &uLocal_596, &iLocal_599, &iLocal_600, Local_272, "v_michael");
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_5(iVar1))
		{
			func_467(iVar1);
			if (!bVar0)
			{
				iVar2 = func_403(iVar1);
				if (!GlobalFunc_7235(uLocal_91[iVar1], Local_412[iVar1 /*16*/], Local_493[iVar1 /*16*/], iLocal_798[iVar1], &uLocal_614))
				{
					if (Global_3)
					{
						GlobalFunc_173(&uLocal_627, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
					}
					if (iVar1 == 4)
					{
						if (!iLocal_88)
						{
							bVar3 = true;
							Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
							Var7 = { ENTITY::GET_ENTITY_COORDS(uLocal_91[iVar1], 1) };
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var7, 0) > 5f)
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								GlobalFunc_5130(uLocal_91[iVar1], "GENERIC_HI", 3);
								GlobalFunc_6715(&uLocal_614);
								iLocal_88 = 1;
							}
						}
					}
					if (func_445(uLocal_91[iVar1], Global_85373[iVar2], &uLocal_627, "FMMAUD", &uLocal_574, &uLocal_614, &(uLocal_621[iVar1]), 1084227584, 0, 0))
					{
						bVar0 = true;
						iLocal_620 = 99;
					}
				}
			}
		}
		iVar1++;
	}
	GlobalFunc_8635(&uLocal_91, &uLocal_617);
	func_424(1, &iLocal_620, iLocal_599, iLocal_600, &uLocal_627, "FMMAUD", &uLocal_574, &uLocal_614);
	return 1;
}

int func_424(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, char* sParam5, var uParam6, var uParam7)//Position - 0x54FAD
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<2> Var7;
	int iVar11;
	
	switch (*iParam1)
	{
		case 0:
			if (INTERIOR::IS_VALID_INTERIOR(iParam3))
			{
				if (INTERIOR::IS_INTERIOR_READY(iParam3))
				{
					*iParam1 = 1;
					if (INTERIOR::IS_VALID_INTERIOR(iParam2))
					{
						if (INTERIOR::IS_INTERIOR_READY(iParam2))
						{
							*iParam1 = 99;
							return 0;
						}
					}
					Var0 = { INTERIOR::GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(iParam3, 0f, 0f, 0f) };
					Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
					fVar6 = SYSTEM::VDIST2(Var0, Var3);
					if (fVar6 < (15f * 15f))
					{
						*iParam1 = 99;
						return 0;
					}
				}
			}
			break;
		
		case 1:
			if (!GlobalFunc_747(iParam0, GlobalFunc_8310()))
			{
				return 0;
			}
			if (INTERIOR::IS_VALID_INTERIOR(iParam2))
			{
				if (INTERIOR::IS_INTERIOR_READY(iParam2))
				{
					*iParam1 = 10;
				}
			}
			break;
		
		case 10:
			if (INTERIOR::IS_VALID_INTERIOR(iParam2))
			{
				if (INTERIOR::IS_INTERIOR_READY(iParam2))
				{
					*iParam1 = 10;
				}
				else
				{
					*iParam1 = 0;
					return 0;
				}
			}
			else
			{
				*iParam1 = 0;
				return 0;
			}
			StringCopy(&Var7, "", 16);
			switch (GlobalFunc_5899())
			{
				case 0:
					StringCopy(&Var7, "FMM_HOME1", 16);
					break;
				
				case 1:
					StringCopy(&Var7, "FMM_HOME2", 16);
					break;
				
				case 2:
					StringCopy(&Var7, "", 16);
					*iParam1 = 99;
					return 0;
					break;
				
				case 3:
					if ((Global_85373[0] == 1 || Global_85373[1] == 1) || Global_85373[2] == 1)
					{
						StringCopy(&Var7, "", 16);
						*iParam1 = 99;
						return 0;
					}
					StringCopy(&Var7, "FMM_HOME3", 16);
					break;
			}
			iVar11 = 3;
			if (func_425(sParam5, &Var7, uParam4, iVar11, uParam6, 0))
			{
				GlobalFunc_6715(uParam7);
				*iParam1 = 99;
				return 1;
			}
			break;
		
		case 99:
			break;
	}
	return 0;
}

int func_425(char* sParam0, char* sParam1, var uParam2, int iParam3, var uParam4, char* sParam5)//Position - 0x5516E
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (GlobalFunc_5946(sParam0, 7))
	{
		sVar0 = "";
		switch (GlobalFunc_8315())
		{
			case 0:
				sVar0 = "MICHAEL";
				break;
			
			case 1:
				sVar0 = "FRANKLIN";
				break;
			
			case 2:
				sVar0 = "TREVOR";
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), sVar0, 0, 1);
			if (GlobalFunc_10607(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				iVar1 = (*uParam4 - 1);
				while (iVar1 > 0)
				{
					*(uParam4[iVar1 /*4*/]) = { *(uParam4[(iVar1 - 1) /*4*/]) };
					iVar1 = (iVar1 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return 1;
			}
		}
		else
		{
			GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), sVar0, 0, 1);
			if (GlobalFunc_10607(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				GlobalFunc_619(1);
				iVar2 = (*uParam4 - 1);
				while (iVar2 > 0)
				{
					*(uParam4[iVar2 /*4*/]) = { *(uParam4[(iVar2 - 1) /*4*/]) };
					iVar2 = (iVar2 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return 1;
			}
		}
	}
	return 0;
}




















int func_445(int iParam0, int iParam1, var uParam2, char* sParam3, var uParam4, var uParam5, var uParam6, float fParam7, char* sParam8, char* sParam9)//Position - 0x55AB4
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	var uVar8;
	var uVar9;
	char* sVar10;
	float fVar11;
	int iVar12;
	struct<2> Var13;
	struct<2> Var17;
	int iVar21;
	struct<3> Var22;
	struct<2> Var25;
	
	iVar0 = 3;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		return 0;
	}
	if (GlobalFunc_5948(iParam0))
	{
		if (GlobalFunc_226(uParam5))
		{
			if (!GlobalFunc_225(uParam5))
			{
				GlobalFunc_4985(uParam5);
			}
		}
		return 0;
	}
	if ((GlobalFunc_268() || GlobalFunc_153(8, -1)) || Global_68505)
	{
		if (GlobalFunc_226(uParam5))
		{
			if (!GlobalFunc_225(uParam5))
			{
				GlobalFunc_4985(uParam5);
			}
		}
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || GlobalFunc_488())
	{
		if (GlobalFunc_226(uParam5))
		{
			if (!GlobalFunc_225(uParam5))
			{
				GlobalFunc_4985(uParam5);
			}
		}
		return 0;
	}
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	if (func_459(iParam0, iParam1, uParam2, sParam3, uParam4, uParam5, iVar0))
	{
		return 1;
	}
	GlobalFunc_81();
	sVar10 = GlobalFunc_7223(iParam1, &iVar7, &uVar8, &uVar9);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		sVar10 = sParam8;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar10))
	{
		return 0;
	}
	if (GlobalFunc_747(uVar8, 2))
	{
		if (!GlobalFunc_2965(iParam0, iParam1))
		{
			return 0;
		}
	}
	else
	{
		if (GlobalFunc_747(uVar8, 1))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var4, 0) > fParam7)
			{
				return 0;
			}
		}
		if (GlobalFunc_747(uVar8, 4))
		{
			if (MISC::ABSF((Var1.f_2 - Var4.f_2)) > 2f)
			{
				return 0;
			}
		}
		if (GlobalFunc_747(uVar8, 8))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 0;
			}
		}
	}
	if (GlobalFunc_747(uVar8, 16))
	{
		fVar11 = 10f;
		if (*uParam6 >= iVar7)
		{
			return 0;
		}
		fVar11 = (fVar11 + ((SYSTEM::TO_FLOAT(*uParam6) / SYSTEM::TO_FLOAT((iVar7 - 1))) * 10f));
		if (iParam1 == 29 || iParam1 == 30)
		{
			fVar11 = (fVar11 * 1.5f);
		}
		if (GlobalFunc_226(uParam5))
		{
			if (GlobalFunc_225(uParam5))
			{
				GlobalFunc_5947(uParam5);
			}
			if (!GlobalFunc_7072(uParam5, fVar11))
			{
				return 0;
			}
		}
	}
	if (!GlobalFunc_747(uVar9, GlobalFunc_8310()))
	{
		iVar12 = GlobalFunc_8315();
		StringCopy(&Var13, "", 16);
		switch (GlobalFunc_7234(iParam0))
		{
			case 0:
				StringCopy(&Var13, "FMM_0", 16);
				break;
			
			case 1:
				StringCopy(&Var13, "FMM_1", 16);
				break;
			
			case 2:
				StringCopy(&Var13, "FMM_2", 16);
				break;
			
			case 3:
				StringCopy(&Var13, "FMM_3_FT", 16);
				break;
			
			case 5:
				StringCopy(&Var13, "FMF_0", 16);
				if (iVar12 == 0 || iVar12 == 2)
				{
					StringCopy(&Var13, "", 16);
				}
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
		{
			if (!MISC::ARE_STRINGS_EQUAL(&Var13, "FMM_3_FT"))
			{
				switch (iVar12)
				{
					case 0:
						StringConCat(&Var13, "_MIC", 16);
						break;
					
					case 1:
						StringConCat(&Var13, "_FRA", 16);
						if (MISC::ARE_STRINGS_EQUAL(&Var13, "FMM_2_FRA"))
						{
							if (!GlobalFunc_230(17))
							{
								StringConCat(&Var13, "1", 16);
							}
							else
							{
								StringConCat(&Var13, "2", 16);
							}
						}
						break;
					
					case 2:
						StringConCat(&Var13, "_TRV", 16);
						break;
					}
			}
			if (func_425(sParam3, &Var13, uParam2, iVar0, uParam4, sParam9))
			{
				GlobalFunc_6715(uParam5);
				*uParam6 = 99;
				return 1;
			}
			return 0;
		}
		else
		{
			return 0;
		}
	}
	StringCopy(&Var17, "", 16);
	switch (GlobalFunc_8315())
	{
		case 0:
			StringCopy(&Var17, "MICHAEL", 16);
			break;
		
		case 1:
			StringCopy(&Var17, "FRANKLIN", 16);
			break;
		
		case 2:
			StringCopy(&Var17, "TREVOR", 16);
			break;
	}
	iVar21 = -1;
	Var22 = { 0f, 0f, 0f };
	if (GlobalFunc_747(uVar8, 128))
	{
		iVar21 = 1;
		Var22 = { -14.3293f, -1443.635f, 29.9f };
	}
	if (MISC::ARE_STRINGS_EQUAL("TRA_IG_MD", sVar10))
	{
		if (GlobalFunc_747(uVar8, 64))
		{
		}
		else
		{
			GlobalFunc_5211(&uVar8, 64);
		}
	}
	if (MISC::ARE_STRINGS_EQUAL("FMT_COUNTRY", sVar10))
	{
		if (GlobalFunc_747(uVar8, 64))
		{
		}
		else
		{
			GlobalFunc_5211(&uVar8, 64);
		}
	}
	if (GlobalFunc_747(uVar8, 64))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar10))
		{
			if (GlobalFunc_747(uVar8, 32))
			{
				if (!func_448(uParam2, sParam3, sVar10))
				{
					return 0;
				}
			}
			GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), &Var17, 0, 1);
			if (GlobalFunc_747(uVar8, 128))
			{
				GlobalFunc_173(uParam2, iVar21, 0, "DENISE", 0, 1);
				GlobalFunc_2964(uParam2, iVar21, Var22);
			}
			if (func_425(sParam3, sVar10, uParam2, iVar0, uParam4, sParam9))
			{
				GlobalFunc_6715(uParam5);
				*uParam6++;
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		StringCopy(&Var25, sVar10, 16);
		if (func_446(sParam3, &Var25, uParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var25))
			{
				if (GlobalFunc_747(uVar8, 32))
				{
					if (!func_448(uParam2, sParam3, &Var25))
					{
						return 0;
					}
				}
				GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), &Var17, 0, 1);
				if (GlobalFunc_747(uVar8, 128))
				{
					GlobalFunc_173(uParam2, iVar21, 0, "DENISE", 0, 1);
					GlobalFunc_2964(uParam2, iVar21, Var22);
				}
				if (func_425(sParam3, &Var25, uParam2, iVar0, uParam4, sParam9))
				{
					GlobalFunc_6715(uParam5);
					*uParam6++;
					return 1;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_446(char* sParam0, char* sParam1, var uParam2)//Position - 0x55FF9
{
	char cVar0[16];
	char cVar4[16];
	int iVar8;
	struct<4> Var9[15];
	bool bVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (GlobalFunc_5946(sParam0, 7))
	{
		cVar0 = { *sParam1 };
		StringCopy(&cVar4, "", 16);
		iVar8 = -1;
		cVar0 = { *sParam1 };
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &cVar4, 16);
		StringConCat(&cVar0, "1", 16);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
		{
			StringCopy(&cVar4, "", 16);
		}
		else
		{
			StringCopy(&cVar4, "0", 16);
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "a", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
			}
			else
			{
				return 0;
			}
		}
		bVar70 = true;
		cVar0 = { *sParam1 };
		StringConCat(&cVar0, "a", 16);
		StringConCat(&cVar0, "_", 16);
		StringConCat(&cVar0, &cVar4, 16);
		StringConCat(&cVar0, "1", 16);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
		{
			iVar8++;
			Var9[iVar8 /*4*/] = { *sParam1 };
			StringConCat(&(Var9[iVar8 /*4*/]), "a", 16);
			bVar70 = false;
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "b", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "b", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "c", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "c", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "d", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "d", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "e", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "e", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "f", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "f", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "g", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "g", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "h", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "h", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "i", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "i", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "j", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "j", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "k", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "k", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "JJJ", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "JJJ", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "m", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "m", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "n", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "n", 16);
				bVar70 = false;
			}
		}
		if (!bVar70)
		{
			bVar70 = true;
			cVar0 = { *sParam1 };
			StringConCat(&cVar0, "o", 16);
			StringConCat(&cVar0, "_", 16);
			StringConCat(&cVar0, &cVar4, 16);
			StringConCat(&cVar0, "1", 16);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
			{
				iVar8++;
				Var9[iVar8 /*4*/] = { *sParam1 };
				StringConCat(&(Var9[iVar8 /*4*/]), "o", 16);
				bVar70 = false;
			}
		}
		iVar71 = iVar8;
		iVar72 = 0;
		while (iVar72 < *uParam2)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2[iVar72 /*4*/]))
			{
				iVar73 = 0;
				while (iVar73 < Var9)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var9[iVar73 /*4*/])))
					{
						if (MISC::ARE_STRINGS_EQUAL(uParam2[iVar72 /*4*/], &(Var9[iVar73 /*4*/])))
						{
							iVar74 = iVar73;
							while (iVar74 <= (Var9 - 1))
							{
								if (iVar74 + 1 < Var9)
								{
									Var9[iVar74 /*4*/] = { Var9[iVar74 + 1 /*4*/] };
								}
								else
								{
									StringCopy(&(Var9[iVar74 /*4*/]), "", 16);
								}
								iVar74++;
							}
							iVar71 = (iVar71 - 1);
						}
					}
					iVar73++;
				}
			}
			iVar72++;
		}
		iVar75 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar71 + 1);
		*sParam1 = { Var9[iVar75 /*4*/] };
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}


int func_448(var uParam0, char* sParam1, char* sParam2)//Position - 0x566EA
{
	char cVar0[16];
	var uVar4;
	int iVar5;
	int iVar6;
	char cVar7[16];
	int iVar11;
	int iVar12;
	char cVar13[16];
	int iVar17;
	int iVar18;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam2, 16);
	StringConCat(&cVar0, "SL", 16);
	if (GlobalFunc_5946(sParam1, 7))
	{
		if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
		{
			uVar4 = HUD::_GET_LABEL_TEXT(&cVar0);
			if (MISC::IS_STRING_NULL(uVar4))
			{
				return 0;
			}
			else
			{
				iVar5 = 0;
				iVar6 = 1;
				StringCopy(&cVar7, HUD::_GET_TEXT_SUBSTRING(uVar4, iVar5, iVar6), 16);
				iVar11 = 1;
				iVar12 = 2;
				StringCopy(&cVar13, HUD::_GET_TEXT_SUBSTRING(sVar4, iVar11, iVar12), 16);
				if (MISC::STRING_TO_INT(&cVar7, &iVar17))
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar17 /*10*/]))
					{
					}
					else
					{
						return 0;
					}
				}
				if (MISC::STRING_TO_INT(&cVar13, &iVar18))
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar18 /*10*/]))
					{
					}
					else
					{
						return 0;
					}
				}
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}











int func_459(int iParam0, int iParam1, var uParam2, char* sParam3, var uParam4, var uParam5, int iParam6)//Position - 0x57B22
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	bool bVar12;
	int iVar13;
	char cVar14[16];
	int iVar18;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar6 = GlobalFunc_8315();
	iVar7 = GlobalFunc_7234(iParam0);
	StringCopy(&Var8, "", 16);
	switch (iVar7)
	{
		case 0:
			if (Global_85373[0] == 18)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_0", 16);
			break;
		
		case 1:
			if (Global_85373[1] == 42)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_1", 16);
			break;
		
		case 2:
			if (Global_85373[2] == 65 || Global_85373[2] == 66)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_2", 16);
			break;
		
		case 3:
			if (iVar6 == 1 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_3", 16);
			break;
		
		case 4:
			if (iVar6 == 1 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMM_4", 16);
			break;
		
		case 5:
			if (iVar6 == 0 || iVar6 == 2)
			{
				return 0;
			}
			StringCopy(&Var8, "FMF_0", 16);
			break;
		
		case 6:
			if (iVar6 == 0)
			{
				return 0;
			}
			StringCopy(&Var8, "FMF_1", 16);
			break;
		
		case 10:
			if (iVar6 == 1)
			{
				return 0;
			}
			StringCopy(&Var8, "FMT_0", 16);
			break;
		
		case 11:
			if (iVar6 == 1 || iVar6 == 0)
			{
				return 0;
			}
			StringCopy(&Var8, "FMT_3", 16);
			break;
		
		default:
			return 0;
			break;
	}
	switch (iVar6)
	{
		case 0:
			if (((iVar7 == 0 || iVar7 == 1) || iVar7 == 3) || iVar7 == 4)
			{
				StringConCat(&Var8, "_M0", 16);
			}
			else if (!GlobalFunc_485(131))
			{
				StringConCat(&Var8, "_M0", 16);
			}
			else
			{
				StringConCat(&Var8, "_M1", 16);
			}
			break;
		
		case 1:
			StringConCat(&Var8, "_F", 16);
			break;
		
		case 2:
			if (iVar7 == 11)
			{
				StringConCat(&Var8, "_T0", 16);
			}
			else if (!GlobalFunc_485(130))
			{
				StringConCat(&Var8, "_T0", 16);
			}
			else
			{
				StringConCat(&Var8, "_T1", 16);
			}
			break;
	}
	if (SYSTEM::VDIST2(Var0, Var3) > 100f)
	{
		return 0;
	}
	if (iParam1 == 6 || iParam1 == 31)
	{
		if (MISC::ABSF((Var3.f_2 - Var0.f_2)) > 2f)
		{
			return 0;
		}
	}
	else if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0) || !ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		return 0;
	}
	bVar12 = false;
	switch (iParam1)
	{
		case 10:
		case 8:
		case 1:
		case 39:
		case 40:
		case 30:
		case 136:
			bVar12 = true;
			break;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(0, 46) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 46))
	{
		return 0;
	}
	if (!bVar12)
	{
		iVar13 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0);
		if (Global_90014.f_289 != iVar13)
		{
			return 0;
		}
	}
	cVar14 = { Var8 };
	StringConCat(&cVar14, "_01", 16);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cVar14))
	{
		iVar18 = 1;
	}
	else
	{
		iVar18 = 0;
	}
	if (iVar18 || func_446(sParam3, &Var8, uParam4))
	{
		if (iVar7 == 5)
		{
			if (iVar6 == 0)
			{
				GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			else if (iVar6 == 1)
			{
				GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			}
			else if (iVar6 == 2)
			{
				GlobalFunc_173(uParam2, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
		}
		if (func_425(sParam3, &Var8, uParam2, iParam6, uParam4, 0))
		{
			GlobalFunc_6715(uParam5);
			return 1;
		}
	}
	iParam1 = iParam1;
	return 0;
}








int func_467(int iParam0)//Position - 0x58375
{
	int iVar0;
	
	iVar0 = func_403(iParam0);
	func_468(iParam0, Global_85373[iVar0]);
	return 0;
}

void func_468(int iParam0, int iParam1)//Position - 0x58394
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	var uVar13;
	int iVar14;
	int iVar15;
	struct<3> Var16;
	var uVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	struct<3> Var26;
	int iVar29;
	int iVar30;
	char[] cVar31[8];
	int iVar47;
	float fVar48;
	var uVar49;
	struct<3> Var50;
	int iVar53;
	struct<16> Var54;
	bool bVar70;
	int iVar71;
	struct<3> Var72;
	int iVar75;
	int iVar76;
	char[] cVar77[8];
	int iVar93;
	float fVar94;
	int iVar95;
	char* sVar96;
	char* sVar97;
	int iVar98;
	struct<3> Var99;
	int iVar102;
	int iVar103;
	char[] cVar104[8];
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	char* sVar124;
	char* sVar125;
	struct<3> Var126;
	struct<3> Var129;
	char* sVar132;
	char* sVar133;
	int iVar134;
	struct<3> Var135;
	int iVar138;
	int iVar139;
	char cVar140[64];
	int iVar156;
	int iVar157;
	struct<3> Var158;
	int iVar161;
	int iVar162;
	char cVar163[64];
	int iVar179;
	int iVar180;
	struct<3> Var181;
	int iVar184;
	int iVar185;
	char cVar186[64];
	int iVar202;
	int iVar203;
	struct<3> Var204;
	int iVar207;
	int iVar208;
	char cVar209[64];
	int iVar225;
	int iVar226;
	struct<3> Var227;
	int iVar230;
	int iVar231;
	char cVar232[64];
	int iVar248;
	int iVar249;
	struct<3> Var250;
	int iVar253;
	int iVar254;
	char cVar255[64];
	int iVar271;
	struct<3> Var272;
	float fVar275;
	struct<3> Var276;
	float fVar279;
	struct<3> Var280;
	struct<3> Var283;
	struct<3> Var286;
	struct<3> Var289;
	float fVar292;
	float fVar293;
	int iVar294;
	var uVar295;
	int iVar296;
	int iVar297;
	struct<3> Var298;
	int iVar301;
	int iVar302;
	char cVar303[64];
	int iVar319;
	int iVar320;
	struct<3> Var321;
	int iVar324;
	int iVar325;
	char cVar326[64];
	int iVar342;
	int iVar343;
	struct<3> Var344;
	int iVar347;
	int iVar348;
	char cVar349[64];
	int iVar365;
	
	iVar0 = func_403(iParam0);
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				if (GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "FAMILY_ON_LAPTOPS", "", 0, &(Local_325[iParam0 /*16*/]), 0))
				{
				}
			}
			if (iParam0 == 1)
			{
				if (!GlobalFunc_557(&uLocal_81))
				{
					GlobalFunc_5115(&uLocal_81);
				}
				else
				{
					GlobalFunc_556(&uLocal_81, 0, 0);
				}
			}
			if (iParam0 == 2)
			{
				if (func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uLocal_141[iParam0]))
					{
						iVar7 = joaat("v_ilev_m_dinechair");
						Var4 = { -796.65f, 181.23f, 71.83f };
						if (INTERIOR::IS_VALID_INTERIOR(iLocal_601[iParam0]))
						{
							if (INTERIOR::IS_INTERIOR_READY(iLocal_601[iParam0]))
							{
								uLocal_141[iParam0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var4, 10f, iVar7, 1, 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_141[iParam0]))
								{
									INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_141[iParam0], iLocal_601[iParam0], INTERIOR::GET_ROOM_KEY_FROM_ENTITY(uLocal_91[iParam0]));
									ENTITY::SET_ENTITY_COLLISION(uLocal_141[iParam0], 0, 0);
								}
							}
						}
					}
					else
					{
						func_663(&(uLocal_141[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "_Amanda", "_Chair", &(iLocal_798[iParam0]), 12);
					}
					func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "_Amanda", "_Novel", &(iLocal_798[iParam0]), 12);
				}
			}
			else if (func_661(uLocal_91[iParam0], iVar0, iParam1, &(uLocal_141[iParam0]), &uLocal_797))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_141[iParam0]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_141[iParam0], Local_272 + Local_276[iParam0 /*3*/], 1, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(uLocal_141[iParam0], 0f, 0f, (fLocal_275 + uLocal_292[iParam0]), 2, 1);
				}
				func_659(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275);
			}
			break;
		
		case 1:
			func_658(uLocal_91[iParam0], iVar0, iParam1);
			if (iParam0 == 1)
			{
				func_645(iParam1, &(uLocal_607[iParam0]));
			}
			break;
		
		case 2:
		case 3:
			if (iParam0 == 0)
			{
				func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[0]), 1, 1);
				func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "_Jimmy", "_Prop_Laptop_01a", &(iLocal_798[iParam0]), 12);
				if (func_661(uLocal_91[iParam0], iVar0, iParam1, &(uLocal_141[iParam0]), &uLocal_797))
				{
				}
			}
			else if (iParam0 == 1)
			{
				func_642(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_493[0 /*16*/], "_JIMMY", &(iLocal_798[0]));
				if (func_661(uLocal_91[iParam0], iVar0, iParam1, &(uLocal_141[iParam0]), &uLocal_797))
				{
				}
			}
			else if (func_642(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_493[0 /*16*/], "_JIMMY", &(iLocal_798[0])))
			{
				if (!bLocal_42)
				{
					if (func_661(uLocal_91[iParam0], iVar0, iParam1, &(uLocal_141[iParam0]), &uLocal_797))
					{
					}
				}
			}
			if ((iParam0 != 0 && !ENTITY::DOES_ENTITY_EXIST(uLocal_91[0])) && Global_24489 == 0)
			{
				if (!iLocal_90)
				{
					iVar8 = 0;
					iVar9 = GlobalFunc_2956(0, &iVar8);
					GlobalFunc_7049(iVar9);
					if (GlobalFunc_7048(iVar9))
					{
						if (!GlobalFunc_6705(&(uLocal_91[0]), iVar9, Local_272 + Local_276[iParam0 /*3*/], GlobalFunc_739((fLocal_275 + uLocal_292[iParam0]), 0f, 360f), 1))
						{
							Var10 = { Local_272 + Local_276[iParam0 /*3*/] };
							uVar13 = GlobalFunc_739((fLocal_275 + uLocal_292[iParam0]), 0f, 360f);
						}
						else
						{
							Global_85373[0] = iParam1;
							GlobalFunc_2954(&(uLocal_91[0]), Global_85370);
							GlobalFunc_11296(uLocal_91[0], 0, Global_85373[0]);
							func_67(uLocal_91[0], 0, Global_85370, 0);
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uLocal_91[0], 1);
							GlobalFunc_173(&uLocal_627, 0 + 1, uLocal_91[0], GlobalFunc_2923(0), 0, 1);
							iLocal_601[0] = INTERIOR::GET_INTERIOR_FROM_ENTITY(uLocal_91[0]);
							iLocal_90 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[0]), 1, 1);
				GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
			}
			else if (iParam0 == 1)
			{
				func_642(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_493[0 /*16*/], "_JIMMY", &(iLocal_798[0]));
				GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
			}
			else
			{
				func_642(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_493[0 /*16*/], "_JIMMY", &(iLocal_798[0]));
				GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
			}
			if ((iParam0 != 0 && !ENTITY::DOES_ENTITY_EXIST(uLocal_91[0])) && Global_24489 == 0)
			{
				if (!iLocal_90)
				{
					iVar14 = 0;
					iVar15 = GlobalFunc_2956(0, &iVar14);
					GlobalFunc_7049(iVar15);
					if (GlobalFunc_7048(iVar15))
					{
						if (!GlobalFunc_6705(&(uLocal_91[0]), iVar15, Local_272 + Local_276[iParam0 /*3*/], GlobalFunc_739((fLocal_275 + uLocal_292[iParam0]), 0f, 360f), 1))
						{
							Var16 = { Local_272 + Local_276[iParam0 /*3*/] };
							uVar19 = GlobalFunc_739((fLocal_275 + uLocal_292[iParam0]), 0f, 360f);
						}
						else
						{
							Global_85373[0] = iParam1;
							GlobalFunc_2954(&(uLocal_91[0]), Global_85370);
							GlobalFunc_11296(uLocal_91[0], 0, Global_85373[0]);
							func_67(uLocal_91[0], 0, Global_85370, 0);
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uLocal_91[0], 1);
							GlobalFunc_173(&uLocal_627, 0 + 1, uLocal_91[0], GlobalFunc_2923(0), 0, 1);
							iLocal_601[0] = INTERIOR::GET_INTERIOR_FROM_ENTITY(uLocal_91[0]);
							iLocal_90 = 1;
						}
					}
				}
			}
			func_639(&(uLocal_91[iParam0]), iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), 137);
			break;
		
		case 18:
			func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 1);
			GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
			break;
		
		case 5:
		case 21:
			func_645(iParam1, &(uLocal_607[iParam0]));
			if (GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "SON_GAMING", "", 0, &(Local_325[iParam0 /*16*/]), 0))
			{
			}
			iLocal_595 = 1;
			fVar20 = 0.7f;
			if (iParam1 == 5)
			{
				func_638(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(iLocal_798[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 138, "FMMAUD", "", "JIM_IG_2c", &uLocal_574, &uLocal_627, &uLocal_614, 0, 4);
				fVar20 = 0.7f;
			}
			else if (iParam1 == 21)
			{
				func_638(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(iLocal_798[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 138, "FMMAUD", "", "FAMR_IG_1", &uLocal_574, &uLocal_627, &uLocal_614, 0, 4);
				fVar20 = 0.1f;
			}
			func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_Controller", &(iLocal_798[iParam0]), 12);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_798[iParam0]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_798[iParam0]) <= 0.7f || iLocal_135[iParam0] <= 1)
				{
					func_663(&(iLocal_159[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_Headset", &(iLocal_798[iParam0]), 12);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_159[iParam0]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_159[iParam0]))
					{
						ENTITY::DETACH_ENTITY(iLocal_159[iParam0], 1, 1);
					}
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_159[iParam0], 8f, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_159[iParam0], 1);
				}
				if (iLocal_135[iParam0] < 3)
				{
					func_632(iVar0, iParam1);
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_798[iParam0]) <= fVar20)
				{
				}
				else if (GlobalFunc_2799(5))
				{
					GlobalFunc_2991(5);
					GlobalFunc_7063(1, 5);
				}
			}
			break;
		
		case 6:
			func_626(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, 1090519040, -1056964608);
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "SON_RAPPING_IN_THE_SHOWER", "AFT_SON_RAPPING_IN_THE_SHOWER_MASTER", uLocal_91[iParam0], &(Local_325[iParam0 /*16*/]), 0);
			break;
		
		case 7:
			func_623(uLocal_91[iParam0], iVar0, &(uLocal_131[1]), 1, iParam1, &(iLocal_135[iParam0]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 4, "FMMAUD", "FMM_0_3", "FMM_0_3", &uLocal_574, -1f, &uLocal_627, &uLocal_614, "GENERIC_INSULT_MED", &iLocal_599, 0);
			break;
		
		case 22:
			func_623(uLocal_91[iParam0], iVar0, &(uLocal_131[0]), 0, iParam1, &(iLocal_135[iParam0]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 4, "FMMAUD", "FMM7_0_3", "FMM7_0_3", &uLocal_574, -1f, &uLocal_627, &uLocal_614, "GENERIC_INSULT_MED", &iLocal_599, 0);
			break;
		
		case 23:
			func_620(uLocal_91[iParam0], iVar0, &(uLocal_131[0]), 0, iParam1, &(iLocal_135[iParam0]), Local_272, fLocal_275, -825.5043f, 182.7998f, 70.7502f, 4, 137, "FMMAUD", "FMM7_0_4", &uLocal_574, &uLocal_627, &uLocal_614);
			break;
		
		case 8:
			if (!func_580(GlobalFunc_8315(), uLocal_91[iParam0], iVar0, iParam1, 1, Local_272 + Vector(1f, 0f, 0f), fLocal_275, &(iLocal_135[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), &iLocal_804, "FMMAUD", "FMM_0_4b", &uLocal_574, &(iLocal_798[iParam0]), &uLocal_627, &uLocal_614, 4, 0))
			{
				func_658(uLocal_91[iParam0], iVar0, iParam1);
			}
			func_579(&(uLocal_313[iParam0]), "AFT_SON_PORN", ENTITY::GET_ENTITY_COORDS(uLocal_91[iParam0], 1));
			func_645(iParam1, &(uLocal_607[iParam0]));
			iLocal_595 = 1;
			break;
		
		case 9:
			func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 1);
			break;
		
		case 10:
			func_578(uLocal_91[iParam0]);
			func_645(iParam1, &(uLocal_607[iParam0]));
			iLocal_595 = 1;
			GlobalFunc_7223(iParam1, &iVar1, &uVar2, &uVar3);
			if (uLocal_621[iParam0] >= iVar1)
			{
				func_445(uLocal_91[iParam0], Global_85373[iVar0], &uLocal_627, "FMMAUD", &uLocal_574, &uLocal_614, &(uLocal_621[iParam0]), 1084227584, "FMM_0_6x", 0);
			}
			break;
		
		case 11:
			func_626(uLocal_91[iParam0], iVar0, iParam1, Local_272 + Vector(1f, 0f, 0f), fLocal_275, 4f, -4f);
			break;
		
		case 12:
			iVar21 = 141;
			if (iParam0 == 0)
			{
				iVar21 = 10;
			}
			else if (iParam0 == 1)
			{
				iVar21 = 30;
			}
			func_638(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(iLocal_798[0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), iVar21, "FMMAUD", "TRA_IG_12", "TRA_IG_9a", &uLocal_574, &uLocal_627, &uLocal_614, 0, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_412[iParam0 /*16*/])))
			{
				if (iParam0 == 0)
				{
					func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 0, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "JIMMY", "DOOR2", &(iLocal_798[0]), 1);
				}
				else if (iParam0 == 1)
				{
					func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "TRACY", "DOOR1", &(iLocal_798[0]), 1);
				}
			}
			if (Global_85373[iVar0] != iParam1)
			{
				func_576(iParam0);
				GlobalFunc_5940(iVar0, Global_85373[iVar0], &(Local_276[iParam0 /*3*/]), &(uLocal_292[iParam0]));
				func_575(iParam0);
			}
			break;
		
		case 13:
			iVar22 = 141;
			if (iParam0 == 0)
			{
				iVar22 = 10;
			}
			else if (iParam0 == 1)
			{
				iVar22 = 30;
			}
			func_638(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(iLocal_798[0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), iVar22, "FMMAUD", "TRA_IG_12", "TRA_IG_9b", &uLocal_574, &uLocal_627, &uLocal_614, 0, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_412[iParam0 /*16*/])))
			{
				if (iParam0 == 0)
				{
					func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 0, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "JIMMY", "DOOR2", &(iLocal_798[0]), 1);
				}
				else if (iParam0 == 1)
				{
					func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "TRACY", "DOOR1", &(iLocal_798[0]), 1);
				}
			}
			if (Global_85373[iVar0] != iParam1)
			{
				func_576(iParam0);
				GlobalFunc_5940(iVar0, Global_85373[iVar0], &(Local_276[iParam0 /*3*/]), &(uLocal_292[iParam0]));
				func_575(iParam0);
			}
			break;
		
		case 14:
			iVar23 = 141;
			if (iParam0 == 0)
			{
				iVar23 = 10;
			}
			else if (iParam0 == 1)
			{
				iVar23 = 30;
			}
			func_638(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(iLocal_798[0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), iVar23, "FMMAUD", "TRA_IG_12", "TRA_IG_9c", &uLocal_574, &uLocal_627, &uLocal_614, 0, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_412[iParam0 /*16*/])))
			{
				if (iParam0 == 0)
				{
					func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 0, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "JIMMY", "DOOR2", &(iLocal_798[0]), 1);
				}
				else if (iParam0 == 1)
				{
					func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "TRACY", "DOOR1", &(iLocal_798[0]), 1);
				}
			}
			if (Global_85373[iVar0] != iParam1)
			{
				func_576(iParam0);
				GlobalFunc_5940(iVar0, Global_85373[iVar0], &(Local_276[iParam0 /*3*/]), &(uLocal_292[iParam0]));
				func_575(iParam0);
			}
			break;
		
		case 15:
			iVar24 = 141;
			if (iParam0 == 0)
			{
				iVar24 = 10;
			}
			else if (iParam0 == 1)
			{
				iVar24 = 30;
			}
			func_638(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(iLocal_798[0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), iVar24, "FMMAUD", "TRA_IG_12", "TRA_IG_9d", &uLocal_574, &uLocal_627, &uLocal_614, 0, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_412[iParam0 /*16*/])))
			{
				if (iParam0 == 0)
				{
					func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 0, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "JIMMY", "DOOR2", &(iLocal_798[0]), 1);
				}
				else if (iParam0 == 1)
				{
					func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "TRACY", "DOOR1", &(iLocal_798[0]), 1);
				}
			}
			if (Global_85373[iVar0] != iParam1)
			{
				func_576(iParam0);
				GlobalFunc_5940(iVar0, Global_85373[iVar0], &(Local_276[iParam0 /*3*/]), &(uLocal_292[iParam0]));
				func_575(iParam0);
			}
			break;
		
		case 16:
			func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0);
			func_572(uLocal_91[iParam0], iParam1, "scr_fam_bong_smoke", &(uLocal_304[iParam0]), &(uLocal_298[iParam0]), Local_412[iParam0 /*16*/], Local_493[iParam0 /*16*/], &(iLocal_798[iParam0]), "exhale", 5f, 0, 0);
			func_572(uLocal_91[iParam0], iParam1, "cs_mich1_lighter_flame", &(uLocal_310[0]), &(uLocal_298[iParam0]), Local_412[iParam0 /*16*/], Local_493[iParam0 /*16*/], &(iLocal_798[iParam0]), "flame", 6f, 0, iLocal_153[iParam0]);
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
			{
				GlobalFunc_2984(0, &iVar25, &Var26, &iVar29, &iVar30, &cVar31, &iVar47);
				OBJECT::ADD_DOOR_TO_SYSTEM(iVar30, iVar25, Var26, 1, 1, 0);
			}
			else
			{
				fVar48 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(1850241841);
				if (MISC::ABSF(fVar48) < 0.15f)
				{
					func_570(uLocal_91[iParam0], iParam1, "scr_fam_door_smoke", &(uLocal_310[1]), 7f);
				}
				else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_310[1]))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_310[1], 0);
				}
			}
			if (GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "SON_SMOKING_WEED_IN_A_BONG", "", 0, &(Local_325[iParam0 /*16*/]), 0))
			{
			}
			break;
		
		case 17:
			if (func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 1))
			{
			}
			func_577(&(uLocal_147[iParam0]), &uVar49, iVar0, 4, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_Fridge_L", &(iLocal_798[iParam0]), 0);
			func_577(&(uLocal_141[iParam0]), &uVar49, iVar0, 5, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_Fridge_R", &(iLocal_798[iParam0]), 0);
			iLocal_595 = 1;
			break;
		
		case 20:
			if (GlobalFunc_7244(uLocal_91[iParam0], iVar0, iParam1, Local_272 + Vector(1f, 0f, 0f), fLocal_275, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), &(iLocal_798[iParam0]), iLocal_153[iParam0], iLocal_159[iParam0], uLocal_796))
			{
				if (!func_566(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272 + Vector(1f, 0f, 0f), fLocal_275))
				{
					func_626(uLocal_91[iParam0], iVar0, iParam1, Local_272 + Vector(1f, 0f, 0f), fLocal_275, 4f, -4f);
				}
				func_565(uLocal_91[iParam0], "BREATHING", &uLocal_614, 1077936128);
				GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
			}
			break;
		
		case 24:
			if (iParam0 == 0)
			{
				if (GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "PRM7_ROUNDTABLE", "", 0, &(Local_325[iParam0 /*16*/]), 0))
				{
				}
			}
			func_563(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 1090519040, -1056964608);
			func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "_Jimmy", "_Lap_Top", &(iLocal_798[iParam0]), 12);
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_141[iParam0]))
			{
				Var50 = { -796.655f, 181.225f, 71.836f };
				iVar53 = joaat("v_ilev_m_dinechair");
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_601[iParam0]))
				{
					if (INTERIOR::IS_INTERIOR_READY(iLocal_601[iParam0]))
					{
						uLocal_141[iParam0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var50, 5f, iVar53, 1, 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_141[iParam0]))
						{
							INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_141[iParam0], iLocal_601[iParam0], INTERIOR::GET_ROOM_KEY_FROM_ENTITY(uLocal_91[iParam0]));
							ENTITY::SET_ENTITY_COLLISION(uLocal_141[iParam0], 0, 0);
						}
					}
				}
			}
			else
			{
				func_663(&(uLocal_141[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "_Jimmy", "_Chair", &(iLocal_798[iParam0]), 12);
			}
			break;
		
		case 19:
			func_563(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 1090519040, -1056964608);
			func_639(&(uLocal_91[iParam0]), iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), 137);
			break;
		
		case 25:
			if (iParam0 == 0)
			{
				func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[0]), 1, 1);
				GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
			}
			else
			{
				func_642(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_493[0 /*16*/], "_JIMMY", &(iLocal_798[0]));
				GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
			}
			func_639(&(uLocal_91[iParam0]), iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), 137);
			break;
		
		case 26:
			if (func_661(uLocal_91[iParam0], iVar0, iParam1, &(uLocal_141[iParam0]), &uLocal_797))
			{
				if (!func_566(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275))
				{
					func_658(uLocal_91[iParam0], iVar0, iParam1);
				}
				GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
			}
			break;
		
		case 46:
			if (func_661(uLocal_91[iParam0], iVar0, iParam1, &(uLocal_141[iParam0]), &uLocal_797))
			{
				func_658(uLocal_91[iParam0], iVar0, iParam1);
				GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
			}
			break;
		
		case 32:
			func_562(uLocal_91[iParam0], iVar0, iParam1);
			func_659(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272 + Vector(1f, 0f, 0f), fLocal_275);
			func_639(&(uLocal_91[iParam0]), iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), 137);
			if (MISC::IS_STRING_NULL_OR_EMPTY("base_face"))
			{
				if (iLocal_792 == 0)
				{
					if (func_445(uLocal_91[iParam0], Global_85373[iVar0], &uLocal_627, "FMMAUD", &uLocal_574, &uLocal_614, &(uLocal_621[iParam0]), 5.3f, "TRA_IG_MD", "base_face"))
					{
						iLocal_792 = 2;
					}
				}
			}
			else
			{
				switch (iLocal_792)
				{
					case 0:
						if (func_445(uLocal_91[iParam0], Global_85373[iVar0], &uLocal_627, "FMMAUD", &uLocal_574, &uLocal_614, &(uLocal_621[iParam0]), (5.3f + 2f), "TRA_IG_MD", "base_face"))
						{
							GlobalFunc_235(&uLocal_793);
							STREAMING::REQUEST_ANIM_DICT("timetable@tracy@ig_5@base");
							iLocal_792 = 1;
						}
						break;
					
					case 1:
						if (!STREAMING::HAS_ANIM_DICT_LOADED("timetable@tracy@ig_5@base"))
						{
							STREAMING::REQUEST_ANIM_DICT("timetable@tracy@ig_5@base");
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_91[iParam0], 1), 0) > 5.3f)
						{
						}
						else if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uLocal_91[iParam0], 1), 0.5f))
						{
						}
						else if (!GlobalFunc_226(&uLocal_793))
						{
							GlobalFunc_6715(&uLocal_793);
						}
						else if (!GlobalFunc_7072(&uLocal_793, 0.5f))
						{
						}
						else
						{
							GlobalFunc_619(0);
							TASK::TASK_PLAY_ANIM(uLocal_91[iParam0], "timetable@tracy@ig_5@base", "base_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
							GlobalFunc_235(&uLocal_793);
							GlobalFunc_6715(&uLocal_614);
							iLocal_792 = 2;
						}
						break;
					
					case 2:
						break;
					
					default:
						break;
					}
			}
			if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_406[iParam0]))
			{
				uLocal_406[iParam0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(ENTITY::GET_ENTITY_COORDS(uLocal_91[iParam0], 1), 2f, 2f, 2f, 0f, 0, 7);
			}
			break;
		
		case 27:
			func_623(uLocal_91[iParam0], iVar0, &(uLocal_131[1]), 1, iParam1, &(iLocal_135[iParam0]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 4, "FMMAUD", "FMM_1_2", "", &uLocal_574, -1f, &uLocal_627, &uLocal_614, "GENERIC_INSULT_MED", &iLocal_599, 0);
			break;
		
		case 41:
			func_561(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]));
			break;
		
		case 33:
			func_562(uLocal_91[iParam0], iVar0, iParam1);
			func_659(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272 + Vector(1f, 0f, 0f), fLocal_275);
			func_639(&(uLocal_91[iParam0]), iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), 137);
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "DAUGHTER_MD_DANCING_PRACTICE", "", 0, &(Local_325[iParam0 /*16*/]), 0);
			func_565(uLocal_91[iParam0], "EXERCISING", &uLocal_614, 1077936128);
			if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_406[iParam0]))
			{
				uLocal_406[iParam0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(ENTITY::GET_ENTITY_COORDS(uLocal_91[iParam0], 1), 2f, 2f, 2f, 0f, 0, 7);
			}
			break;
		
		case 38:
			if (GlobalFunc_7244(uLocal_91[iParam0], iVar0, iParam1, Local_272 + Vector(1f, 0f, 0f), fLocal_275, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), &(iLocal_798[iParam0]), iLocal_153[iParam0], iLocal_159[iParam0], uLocal_796))
			{
				func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 1);
				Var54 = { Local_493[iParam0 /*16*/] };
				StringConCat(&Var54, "_face", 64);
				func_560(uLocal_91[iParam0], Local_412[iParam0 /*16*/], Var54, 0);
				func_645(iParam1, &(uLocal_607[iParam0]));
				GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "FAMILY_SOUNDS_02", "", 0, &(Local_325[iParam0 /*16*/]), 0);
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_91[iParam0]))
				{
					if (func_572(uLocal_91[iParam0], iParam1, "scr_tracey_puke", &(uLocal_304[iParam0]), &(uLocal_298[iParam0]), Local_412[iParam0 /*16*/], Local_493[iParam0 /*16*/], &(iLocal_798[iParam0]), "exhale", 5f, 0, 0))
					{
						iLocal_319[iParam0] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_319[iParam0], "MICHAELS_HOUSE_DAUGHTER_SICK_ONESHOT", uLocal_91[iParam0], 0, 0, 0);
					}
					else if (AUDIO::HAS_SOUND_FINISHED(iLocal_319[iParam0]))
					{
						AUDIO::STOP_SOUND(iLocal_319[iParam0]);
						iLocal_319[iParam0] = -1;
					}
				}
				else if (AUDIO::HAS_SOUND_FINISHED(iLocal_319[iParam0]))
				{
					AUDIO::STOP_SOUND(iLocal_319[iParam0]);
					iLocal_319[iParam0] = -1;
				}
				if (!iLocal_89)
				{
					if (uLocal_621[iParam0] > 0)
					{
						if (func_425("FMMAUD", "TRA_MICRE", &uLocal_627, 3, &uLocal_574, 0))
						{
							GlobalFunc_6715(&uLocal_614);
							iLocal_89 = 1;
						}
					}
				}
				iLocal_595 = 1;
			}
			break;
		
		case 31:
			func_626(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, 1090519040, -1056964608);
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "DAUGHTER_SHOWER", "AFT_DAUGHTER_SHOWER_MASTER", uLocal_91[iParam0], &(Local_325[iParam0 /*16*/]), 0);
			break;
		
		case 34:
			func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 1);
			func_639(&(uLocal_91[iParam0]), iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), 137);
			if (iParam0 == 1)
			{
				if (!GlobalFunc_557(&uLocal_81))
				{
					GlobalFunc_5115(&uLocal_81);
				}
				else
				{
					GlobalFunc_556(&uLocal_81, 0, 0);
				}
			}
			break;
		
		case 35:
			func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0);
			func_639(&(uLocal_91[iParam0]), iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), 137);
			break;
		
		case 37:
			bVar70 = true;
			if (!func_638(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(iLocal_798[1]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 40, "FMMAUD", "", "TRA_IG_4", &uLocal_574, &uLocal_627, &uLocal_614, 0, 4))
			{
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_412[iParam0 /*16*/])))
			{
				if (!PED::IS_PED_INJURED(uLocal_97[iParam0]))
				{
					func_559(uLocal_97[iParam0], &(iLocal_798[iParam0]), Local_412[iParam0 /*16*/], Local_493[iParam0 /*16*/], "TRACY", "BOY");
				}
				if (bVar70)
				{
					func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "TRACY", "DOOR", &(iLocal_798[1]), 1);
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_798[1]))
					{
					}
					else if (PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_798[1]))
					{
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_798[1]) >= 0.99f)
					{
						GlobalFunc_2984(1, &iVar71, &Var72, &iVar75, &iVar76, &cVar77, &iVar93);
						if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar76))
						{
							OBJECT::ADD_DOOR_TO_SYSTEM(iVar76, iVar71, Var72, 1, 1, 0);
						}
						if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar76))
						{
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar76, 4, 1, 0);
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar76, 0f, 1, 0);
						}
					}
				}
			}
			if (Global_85373[iVar0] == 40)
			{
				GlobalFunc_6715(&uLocal_793);
			}
			break;
		
		case 39:
			func_658(uLocal_91[iParam0], iVar0, iParam1);
			func_645(iParam1, &(uLocal_607[iParam0]));
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "FAMILY_SOUNDS_02", "MICHAELS_HOUSE_DAUGHTER_SNIFF_DRUGS", uLocal_91[iParam0], &(Local_325[iParam0 /*16*/]), 0);
			iLocal_595 = 1;
			break;
		
		case 40:
			func_658(uLocal_91[iParam0], iVar0, iParam1);
			func_645(iParam1, &(uLocal_607[iParam0]));
			if (!GlobalFunc_226(&uLocal_793) || GlobalFunc_7072(&uLocal_793, 5f))
			{
				GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "DAUGHTER_SEX_SOUNDS_FROM_ROOM", "AFT_DAUGHTER_SEX_vb", uLocal_91[iParam0], &(Local_325[iParam0 /*16*/]), 0);
			}
			iLocal_595 = 1;
			break;
		
		case 36:
			if (!func_566(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272 + Vector(1f, 0f, 0f), fLocal_275))
			{
				fVar94 = 8f;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_412[iParam0 /*16*/])) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_493[iParam0 /*16*/])))
				{
					fVar94 = 2f;
				}
				func_626(uLocal_91[iParam0], iVar0, iParam1, Local_272 + Vector(1f, 0f, 0f), fLocal_275, fVar94, -8f);
			}
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "FAMILY_SOUNDS_01", "MICHAELS_HOUSE_DAUGHTER_CRY", uLocal_91[iParam0], &(Local_325[iParam0 /*16*/]), 0);
			iLocal_595 = 1;
			break;
		
		case 28:
			if (!func_580(GlobalFunc_8315(), uLocal_91[iParam0], iVar0, iParam1, 1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), &iLocal_804, "FMMAUD", "TRA_IG_14", &uLocal_574, &(iLocal_798[iParam0]), &uLocal_627, &uLocal_614, 4, joaat("p_banknote_s")))
			{
				func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0);
			}
			break;
		
		case 42:
			func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 1);
			GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
			func_565(uLocal_91[iParam0], "SLEEPING", &uLocal_614, 1077936128);
			break;
		
		case 43:
			func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 1);
			GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
			func_565(uLocal_91[iParam0], "SLEEPING", &uLocal_614, 1077936128);
			break;
		
		case 29:
		case 30:
		case 44:
			if (GlobalFunc_7244(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), &(iLocal_798[iParam0]), iLocal_153[iParam0], iLocal_159[iParam0], uLocal_796))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_91[iParam0]))
				{
					func_563(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 1090519040, -1056964608);
				}
				else
				{
					func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0);
				}
				GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
			}
			if (iParam0 == 1)
			{
				if (!GlobalFunc_557(&uLocal_81))
				{
					GlobalFunc_5115(&uLocal_81);
				}
				else
				{
					GlobalFunc_556(&uLocal_81, 0, 0);
				}
			}
			if (Global_85373[iVar0] == 30)
			{
				func_645(iParam1, &(uLocal_607[iParam0]));
			}
			break;
		
		case 45:
			if (GlobalFunc_7244(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), &(iLocal_798[iParam0]), iLocal_153[iParam0], iLocal_159[iParam0], uLocal_796))
			{
				func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 1);
			}
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "DAUGHTER_STUDYING_DOES_NAILS", "", 0, &(Local_325[iParam0 /*16*/]), 0);
			break;
		
		case 47:
			iVar95 = 141;
			if (iParam0 == 2)
			{
				iVar95 = 138;
			}
			else if (iParam0 == 3)
			{
				iVar95 = 77;
				func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_SCOURER", &(iLocal_798[iParam0]), 12);
				if (iLocal_135[iParam0] == 1)
				{
					INTERIOR::FORCE_ROOM_FOR_ENTITY(uLocal_91[iParam0], iLocal_601[iParam0], MISC::GET_HASH_KEY("V_Michael_G_Kitche"));
				}
			}
			func_638(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(iLocal_798[2]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), iVar95, "FMMAUD", "", "AM_IG_9", &uLocal_574, &uLocal_627, &uLocal_614, 0, 4);
			if (iLocal_135[iParam0] < 1)
			{
				if (iParam0 == 3)
				{
					func_445(uLocal_91[iParam0], Global_85373[iVar0], &uLocal_627, "FMMAUD", &uLocal_574, &uLocal_614, &(uLocal_621[iParam0]), 1084227584, "MA_SHOUT", 0);
				}
			}
			break;
		
		case 48:
		case 68:
			if (!func_566(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275))
			{
				func_626(uLocal_91[iParam0], iVar0, iParam1, Local_272 + Vector(1f, 0f, 0f), fLocal_275, 1090519040, -1056964608);
			}
			func_639(&(uLocal_91[iParam0]), iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), 137);
			break;
		
		case 49:
			func_468(iParam0, 140);
			break;
		
		case 50:
		case 69:
			if (GlobalFunc_7244(uLocal_91[iParam0], iVar0, iParam1, Local_272 + Vector(1f, 0f, 0f), fLocal_275, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), &(iLocal_798[iParam0]), iLocal_153[iParam0], iLocal_159[iParam0], uLocal_796))
			{
				func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0);
			}
			break;
		
		case 51:
			func_623(uLocal_91[iParam0], iVar0, &(uLocal_131[2]), 2, iParam1, &(iLocal_135[iParam0]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 4, "FMMAUD", "AM_IG_MD", "AM_IG_MD2", &uLocal_574, 0.8f, &uLocal_627, &uLocal_614, "DISMISS_MICHAEL", &iLocal_599, 0);
			break;
		
		case 52:
		case 67:
			sVar96 = "";
			sVar97 = "";
			if (iParam1 == 52)
			{
				sVar96 = "AM_IG_7";
				sVar97 = "AM_IG_7";
			}
			else if (iParam1 == 67)
			{
				sVar96 = "AMr_IG_7";
				sVar97 = "AMr_IG_7";
			}
			func_553(&(uLocal_91[iParam0]), iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), iLocal_153[iParam0], iLocal_159[iParam0], &(iLocal_798[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 137, iLocal_600, "v_michael_g_front", "FMMAUD", sVar96, sVar97, &uLocal_574, &uLocal_627, &uLocal_614, &(uLocal_621[iParam0]), 4);
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "WIFE_WITH_SHOPPING_BAGS_ENTER", "", 0, &(Local_325[iParam0 /*16*/]), 0);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_798[iParam0]) && MISC::ARE_STRINGS_EQUAL(&(Local_493[iParam0 /*16*/]), "IG_7_ENTER"))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_798[iParam0]) <= 0.45f || iLocal_135[iParam0] <= 1)
				{
					func_577(&(uLocal_147[2]), &(uLocal_141[2]), iVar0, 9, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_Door_R", &(iLocal_798[2]), 1);
				}
				else
				{
					if (iLocal_135[iParam0] == 2)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[2]))
						{
							iVar98 = 0;
							Var99 = { 0f, 0f, 0f };
							iVar102 = 225;
							iVar103 = 825812850;
							iVar120 = 0;
							GlobalFunc_2984(9, &iVar98, &Var99, &iVar102, &iVar103, &cVar104, &iVar120);
							ENTITY::REMOVE_MODEL_HIDE(Var99, 1.5f, iVar98, 0);
							OBJECT::DELETE_OBJECT(&(uLocal_147[2]));
						}
					}
					if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
					{
					}
					else if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-2127416656) == 4)
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 0, 1, 0);
					}
				}
			}
			if (MISC::ARE_STRINGS_EQUAL(&(Local_493[iParam0 /*16*/]), "IG_7_ENTER"))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_798[2]) < 0.95f)
				{
					func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_Bag_L", &(iLocal_798[2]), 12);
					func_663(&(iLocal_159[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_Bag_R", &(iLocal_798[2]), 12);
				}
			}
			break;
		
		case 53:
			if (GlobalFunc_7244(uLocal_91[iParam0], iVar0, iParam1, Local_272 + Vector(1f, 0f, 0f), fLocal_275, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), &(iLocal_798[iParam0]), iLocal_153[iParam0], iLocal_159[iParam0], uLocal_796))
			{
				if (iLocal_165[iParam0] != joaat("p_tumbler_01_s") || iLocal_171[iParam0] != joaat("p_whiskey_bottle_s"))
				{
					if (iLocal_165[iParam0] == 0 || iLocal_171[iParam0] == 0)
					{
					}
					func_575(iParam0);
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_153[iParam0]) && ENTITY::GET_ENTITY_MODEL(iLocal_153[iParam0]) != iLocal_165[iParam0])
					{
						OBJECT::DELETE_OBJECT(&(iLocal_153[iParam0]));
						iLocal_165[iParam0] = 0;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_159[iParam0]) && ENTITY::GET_ENTITY_MODEL(iLocal_159[iParam0]) != iLocal_171[iParam0])
					{
						OBJECT::DELETE_OBJECT(&(iLocal_159[iParam0]));
						iLocal_171[iParam0] = 0;
					}
				}
				if (GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "WIFE_GETS_DRUNK_IN_KITCHEN", "", 0, &(Local_325[iParam0 /*16*/]), 0))
				{
				}
				func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0);
				func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_glass", &(iLocal_798[iParam0]), 12);
				func_663(&(iLocal_159[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_bottle", &(iLocal_798[iParam0]), 12);
			}
			break;
		
		case 54:
		case 70:
			if (GlobalFunc_7244(uLocal_91[iParam0], iVar0, iParam1, Local_272 + Vector(1f, 0f, 0f), fLocal_275, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), &(iLocal_798[iParam0]), iLocal_153[iParam0], iLocal_159[iParam0], uLocal_796))
			{
				if (func_661(uLocal_91[iParam0], iVar0, iParam1, &(uLocal_141[iParam0]), &uLocal_797))
				{
					if (!func_566(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275))
					{
						func_658(uLocal_91[iParam0], iVar0, iParam1);
					}
					GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_153[iParam0]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_153[iParam0]))
						{
							ENTITY::DETACH_ENTITY(iLocal_153[iParam0], 1, 1);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_153[iParam0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_153[iParam0], 1))
						{
							OBJECT::DELETE_OBJECT(&(iLocal_153[iParam0]));
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_159[iParam0]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_159[iParam0]))
						{
							ENTITY::DETACH_ENTITY(iLocal_159[iParam0], 1, 1);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_159[iParam0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_159[iParam0], 1))
						{
							OBJECT::DELETE_OBJECT(&(iLocal_159[iParam0]));
						}
					}
				}
			}
			break;
		
		case 64:
		case 55:
		case 71:
			if (!func_566(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272 + Vector(1f, 0f, 0f), fLocal_275))
			{
				func_626(uLocal_91[iParam0], iVar0, iParam1, Local_272 + Vector(1f, 0f, 0f), fLocal_275, 1090519040, -1056964608);
			}
			GlobalFunc_2981(uLocal_91[iParam0], iVar0, iParam1);
			break;
		
		case 56:
			iVar121 = 141;
			if (iParam0 == 2)
			{
				iVar121 = 53;
			}
			else if (iParam0 == 0)
			{
				iVar121 = 10;
			}
			func_638(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(iLocal_798[0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), iVar121, "FMMAUD", "", "AM_IG_2b", &uLocal_574, &uLocal_627, &uLocal_614, 0, 4);
			if (iParam0 == 0)
			{
				func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 0, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "JIMMY", "DOOR", &(iLocal_798[0]), 1);
			}
			break;
		
		case 57:
			iVar122 = 141;
			if (iParam0 == 2)
			{
				iVar122 = 53;
			}
			else if (iParam0 == 0)
			{
				iVar122 = 10;
			}
			func_638(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(iLocal_798[0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), iVar122, "FMMAUD", "", "AM_IG_2c", &uLocal_574, &uLocal_627, &uLocal_614, 0, 4);
			if (iParam0 == 0)
			{
				func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 0, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "JIMMY", "DOOR", &(iLocal_798[0]), 1);
			}
			break;
		
		case 58:
			iVar123 = 141;
			if (iParam0 == 2)
			{
				iVar123 = 141;
			}
			else if (iParam0 == 1)
			{
				iVar123 = 30;
			}
			func_638(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(iLocal_798[1]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), iVar123, "FMMAUD", "", "AM_IG_3", &uLocal_574, &uLocal_627, &uLocal_614, 0, 4);
			if (iParam0 == 1)
			{
				func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "TRACY", "DOOR", &(iLocal_798[1]), 1);
			}
			if (iParam0 == 2)
			{
				if (Global_85373[iVar0] != iParam1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_91[iParam0], -800.7849f, 182.5544f, 73.68f, 1f, -1, 0.25f, 0, 1193033728);
				}
			}
			break;
		
		case 59:
		case 72:
			sVar124 = "";
			if (iParam1 == 59)
			{
				sVar124 = "AM_IG_11";
			}
			else if (iParam1 == 72)
			{
				sVar124 = "AMr_IG_11";
			}
			func_659(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272 + Vector(1f, 0f, 0f), fLocal_275);
			func_552(uLocal_91[iParam0], iVar0, 60, "FMMAUD", sVar124, &uLocal_574, &uLocal_627, &uLocal_614, &iParam1, 4);
			iParam1 = Global_85373[iVar0];
			break;
		
		case 60:
			func_551(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), &(iLocal_135[iParam0]), &(iLocal_153[iParam0]), &(iLocal_165[iParam0]), 1);
			break;
		
		case 61:
		case 63:
			sVar125 = "";
			if (iParam1 == 61)
			{
				sVar125 = "AM_IG_6";
			}
			else if (iParam1 == 63)
			{
				sVar125 = "AMr_IG_6";
			}
			func_638(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(iLocal_798[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 62, "FMMAUD", "", sVar125, &uLocal_574, &uLocal_627, &uLocal_614, 0, 4);
			if (iLocal_135[iParam0] < 3)
			{
				GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "WIFE_USING_VIBRATOR", "AFT_WIFE_USING_VIBRATOR_MASTER", iLocal_153[iParam0], &(Local_325[iParam0 /*16*/]), 0);
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_798[iParam0]) <= 0.6f)
			{
				GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "WIFE_USING_VIBRATOR", "AFT_WIFE_USING_VIBRATOR_MASTER", iLocal_153[iParam0], &(Local_325[iParam0 /*16*/]), 0);
			}
			else if (iLocal_319[iParam0] != -1)
			{
				AUDIO::STOP_SOUND(iLocal_319[iParam0]);
				iLocal_319[iParam0] = -1;
			}
			if (iLocal_135[iParam0] < 3)
			{
				func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_Vibrator", &(iLocal_798[iParam0]), 12);
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_798[iParam0]) <= 0.8f)
			{
				func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_Vibrator", &(iLocal_798[iParam0]), 12);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_153[iParam0]))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_153[iParam0], 1000f, 1);
				ENTITY::DETACH_ENTITY(iLocal_153[iParam0], 1, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_153[iParam0], 0);
				ENTITY::SET_ENTITY_DYNAMIC(iLocal_153[iParam0], 1);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_153[iParam0]));
				iLocal_165[iParam0] = 0;
			}
			if (Global_85373[iVar0] == 62)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_153[iParam0]))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_153[iParam0], 1000f, 1);
					ENTITY::DETACH_ENTITY(iLocal_153[iParam0], 1, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_153[iParam0], 0);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_153[iParam0], 1);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_153[iParam0]));
				}
				if (iLocal_319[iParam0] != -1)
				{
					AUDIO::STOP_SOUND(iLocal_319[iParam0]);
					iLocal_319[iParam0] = -1;
				}
			}
			iLocal_595 = 1;
			break;
		
		case 62:
			func_563(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 1000f, -8f);
			break;
		
		case 65:
			func_563(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 1090519040, -1056964608);
			break;
		
		case 66:
			func_563(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 1090519040, -1056964608);
			break;
		
		case 73:
			func_638(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), &(iLocal_798[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 138, "FMMAUD", "", "FAMR_IG_6", &uLocal_574, &uLocal_627, &uLocal_614, 0.4f, 4);
			func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "_amanda", "_glass", &(iLocal_798[iParam0]), 12);
			if (iLocal_135[iParam0] > 0)
			{
				STREAMING::REQUEST_MODEL(joaat("prop_wheat_grass_half"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_wheat_grass_half")) && MISC::ARE_STRINGS_EQUAL(&(Local_493[iParam0 /*16*/]), "Ugh_kale_Amanda"))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_798[iParam0]) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_798[iParam0]) >= 0.99f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_153[iParam0]) && iLocal_165[iParam0] == joaat("p_w_grass_gls_s"))
						{
							Var126 = { ENTITY::GET_ENTITY_COORDS(iLocal_153[iParam0], 1) };
							Var129 = { ENTITY::GET_ENTITY_ROTATION(iLocal_153[iParam0], 2) };
							OBJECT::DELETE_OBJECT(&(iLocal_153[iParam0]));
							iLocal_153[iParam0] = OBJECT::CREATE_OBJECT(joaat("prop_wheat_grass_half"), Var126, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_153[iParam0], Var129, 2, 1);
							func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "_amanda", "_glass", &(iLocal_798[iParam0]), 12);
							iLocal_165[iParam0] = joaat("prop_wheat_grass_half");
						}
					}
				}
			}
			break;
		
		case 74:
			sVar132 = "";
			sVar133 = "";
			if (iParam0 == 2)
			{
				if (iParam1 == 74)
				{
					sVar132 = "FAMR_IG_7";
					sVar133 = "";
				}
			}
			else if (iLocal_135[iParam0] == 0 && iLocal_135[2] > 0)
			{
				iLocal_135[iParam0] = iLocal_135[2];
			}
			func_553(&(uLocal_91[iParam0]), iVar0, iParam1, Local_272, fLocal_275, &(iLocal_135[iParam0]), iLocal_153[iParam0], iLocal_159[iParam0], &(iLocal_798[2]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 137, iLocal_600, "v_michael_g_front", "FMMAUD", sVar132, sVar133, &uLocal_574, &uLocal_627, &uLocal_614, &(uLocal_621[iParam0]), 4);
			if (iParam0 == 2)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(Local_493[iParam0 /*16*/]), "AmandaBase_Amanda"))
				{
					func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 8, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "Amanda", "Door_L", &(iLocal_798[2]), 1);
					func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "Amanda", "Bag_01", &(iLocal_798[2]), 12);
					func_663(&(iLocal_159[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "Amanda", "Bag_02", &(iLocal_798[2]), 12);
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[2]))
					{
						iVar134 = 0;
						Var135 = { 0f, 0f, 0f };
						iVar138 = 225;
						iVar139 = 825812850;
						StringCopy(&cVar140, "", 64);
						iVar156 = 0;
						GlobalFunc_2984(8, &iVar134, &Var135, &iVar138, &iVar139, &cVar140, &iVar156);
						ENTITY::REMOVE_MODEL_HIDE(Var135, 1.5f, iVar134, 0);
						OBJECT::DELETE_OBJECT(&(uLocal_147[2]));
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 1, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 1, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_159[1]))
					{
						iVar157 = 0;
						Var158 = { 0f, 0f, 0f };
						iVar161 = 225;
						iVar162 = 825812850;
						StringCopy(&cVar163, "", 64);
						iVar179 = 0;
						GlobalFunc_2984(9, &iVar157, &Var158, &iVar161, &iVar162, &cVar163, &iVar179);
						ENTITY::REMOVE_MODEL_HIDE(Var158, 1.5f, iVar157, 0);
						OBJECT::DELETE_OBJECT(&(uLocal_147[1]));
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 1, 1);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 1, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_153[2]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_153[iParam0], -8f, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_159[2]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_159[iParam0], -8f, 1);
					}
				}
			}
			else if (iParam0 == 1)
			{
				func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 9, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "Tracy", "Door_R", &(iLocal_798[2]), 1);
				if (iLocal_165[iParam0] == 0 || iLocal_171[iParam0] == 0)
				{
					func_575(iParam0);
				}
				func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "Tracy", "Bag_03", &(iLocal_798[2]), 12);
				func_663(&(iLocal_159[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "Tracy", "Bag_04", &(iLocal_798[2]), 12);
				if (Global_85373[iVar0] != iParam1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[2]))
					{
						iVar180 = 0;
						Var181 = { 0f, 0f, 0f };
						iVar184 = 225;
						iVar185 = 825812850;
						StringCopy(&cVar186, "", 64);
						iVar202 = 0;
						GlobalFunc_2984(8, &iVar180, &Var181, &iVar184, &iVar185, &cVar186, &iVar202);
						ENTITY::REMOVE_MODEL_HIDE(Var181, 1.5f, iVar180, 0);
						OBJECT::DELETE_OBJECT(&(uLocal_147[2]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[1]))
					{
						iVar203 = 0;
						Var204 = { 0f, 0f, 0f };
						iVar207 = 225;
						iVar208 = 825812850;
						StringCopy(&cVar209, "", 64);
						iVar225 = 0;
						GlobalFunc_2984(9, &iVar203, &Var204, &iVar207, &iVar208, &cVar209, &iVar225);
						ENTITY::REMOVE_MODEL_HIDE(Var204, 1.5f, iVar203, 0);
						OBJECT::DELETE_OBJECT(&(uLocal_147[1]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_153[2]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_153[iParam0], -8f, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_159[2]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_159[iParam0], -8f, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_153[1]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_153[iParam0], -8f, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_159[1]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_159[iParam0], -8f, 1);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 1, 1);
				}
			}
			else if (iParam0 == 0)
			{
				func_577(&(uLocal_147[iParam0]), &(uLocal_141[iParam0]), iVar0, 9, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "Jimmy", "Door_R", &(iLocal_798[2]), 1);
				if (iLocal_165[iParam0] == 0 || iLocal_171[iParam0] == 0)
				{
					func_575(iParam0);
				}
				func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "Jimmy", "Bag_03", &(iLocal_798[2]), 12);
				func_663(&(iLocal_159[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "Jimmy", "Bag_04", &(iLocal_798[2]), 12);
				if (Global_85373[iVar0] != iParam1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[2]))
					{
						iVar226 = 0;
						Var227 = { 0f, 0f, 0f };
						iVar230 = 225;
						iVar231 = 825812850;
						StringCopy(&cVar232, "", 64);
						iVar248 = 0;
						GlobalFunc_2984(8, &iVar226, &Var227, &iVar230, &iVar231, &cVar232, &iVar248);
						ENTITY::REMOVE_MODEL_HIDE(Var227, 1.5f, iVar226, 0);
						OBJECT::DELETE_OBJECT(&(uLocal_147[2]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[0]))
					{
						iVar249 = 0;
						Var250 = { 0f, 0f, 0f };
						iVar253 = 225;
						iVar254 = 825812850;
						StringCopy(&cVar255, "", 64);
						iVar271 = 0;
						GlobalFunc_2984(9, &iVar249, &Var250, &iVar253, &iVar254, &cVar255, &iVar271);
						ENTITY::REMOVE_MODEL_HIDE(Var250, 1.5f, iVar249, 0);
						OBJECT::DELETE_OBJECT(&(uLocal_147[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_153[2]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_153[2], -8f, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_159[2]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_159[2], -8f, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_153[0]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_153[0], -8f, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_159[0]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_159[0], -8f, 1);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 1, 1);
				}
			}
			if (iParam0 == 2)
			{
			}
			else if (Global_85373[iVar0] != iParam1)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_91[iParam0], -799.1418f, 183.7505f, 71.6055f, 1f, -1, 0.25f, 0, 1193033728);
			}
			break;
		
		case 75:
		case 84:
			func_547(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_798[iParam0]), &(iLocal_159[iParam0]), joaat("prop_scourer_01"), &(iLocal_171[iParam0]), 28422, &(iLocal_135[iParam0]), &(uLocal_406[iParam0]), uLocal_796);
			func_545(iParam1, &uLocal_613, Local_272);
			break;
		
		case 76:
		case 78:
		case 85:
			func_659(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272 + Vector(1f, 0f, 0f), fLocal_275);
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "MEXMAID_CLEAN_SURFACE", "", 0, &(Local_325[iParam0 /*16*/]), 0);
			break;
		
		case 77:
			func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 1);
			func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_SCOURER", &(iLocal_798[iParam0]), 12);
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "MEXMAID_CLEAN_SURFACE", "", 0, &(Local_325[iParam0 /*16*/]), 0);
			break;
		
		case joaat("mpsv_lp0_31"):
		case 86:
			func_562(uLocal_91[iParam0], iVar0, iParam1);
			func_659(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272 + Vector(1f, 0f, 0f), fLocal_275);
			if (!Global_3)
			{
				func_645(iParam1, &(uLocal_607[iParam0]));
			}
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "MEXMAID_CLEAN_WINDOW", "", 0, &(Local_325[iParam0 /*16*/]), 0);
			break;
		
		case 80:
			func_659(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272 + Vector(1f, 0f, 0f), fLocal_275);
			func_545(iParam1, &uLocal_613, Local_272);
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "MEXMAID_CLEAN_WINDOW", "", 0, &(Local_325[iParam0 /*16*/]), 0);
			break;
		
		case 81:
			func_563(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 0, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), 1090519040, -1056964608);
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "MEXMAID_DOES_THE_DISHES", "", 0, &(Local_325[iParam0 /*16*/]), 0);
			break;
		
		case 82:
			func_659(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272 + Vector(1f, 0f, 0f), fLocal_275);
			func_552(uLocal_91[iParam0], iVar0, 83, "FMMAUD", "MA_IG_8", &uLocal_574, &uLocal_627, &uLocal_614, &iParam1, 4);
			break;
		
		case 83:
			func_551(uLocal_91[iParam0], iVar0, iParam1, Local_272, fLocal_275, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), &(iLocal_135[iParam0]), &(iLocal_153[iParam0]), &(iLocal_165[iParam0]), 1);
			break;
		
		case 87:
			func_541(uLocal_91[iParam0], iVar0, iParam1, &(iLocal_135[iParam0]));
			break;
		
		case 88:
			func_541(uLocal_91[iParam0], iVar0, iParam1, &(iLocal_135[iParam0]));
			break;
		
		case 89:
			if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_91[iParam0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (3.5f * 3.5f))
			{
				func_659(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272 + Vector(1f, 0f, 0f), fLocal_275);
			}
			else
			{
				func_626(uLocal_91[iParam0], iVar0, iParam1, Local_272 + Vector(1f, 0f, 0f), fLocal_275, 4f, -4f);
			}
			if (GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "GARDENER_CLEANING_POOL", "", 0, &(Local_325[iParam0 /*16*/]), 0))
			{
			}
			break;
		
		case 90:
			func_664(uLocal_91[iParam0], iVar0, iParam1, &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), Local_272, fLocal_275, &(iLocal_798[iParam0]), 1, 1);
			func_663(&(iLocal_153[iParam0]), &(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "", "_LAWNMOWER", &(iLocal_798[iParam0]), 12);
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "GARDEN_MOWER", "", 0, &(Local_325[iParam0 /*16*/]), 0);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_798[iParam0]))
			{
				if (GlobalFunc_5940(iVar0, iParam1, &Var272, &fVar275))
				{
					Var276 = { -2.16f, -9.36f, 0f };
					PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_798[iParam0], Local_272 + Var272, Vector((fLocal_275 + fVar275), 0f, 0f) + Var276, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_153[iParam0]))
				{
					fVar279 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_798[iParam0]);
					Var280 = { 0.046f, 0f, 0f };
					Var283 = { -0.12f, -0.36f, 0.3f };
					Var286 = { PED::GET_PED_BONE_COORDS(uLocal_91[iParam0], 28422, Var280) };
					Var289 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_153[iParam0], Var283) };
					Var286 = { PED::GET_PED_BONE_COORDS(uLocal_91[iParam0], 28422, Var280) };
					Var289 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_153[iParam0], Var283) };
					fVar292 = -1f;
					fVar293 = -1f;
					if (ENTITY::FIND_ANIM_EVENT_PHASE(&(Local_412[iParam0 /*16*/]), &(Local_493[iParam0 /*16*/]), "shoot", &fVar292, &fVar293))
					{
					}
					else
					{
						switch (MISC::GET_HASH_KEY(&(Local_493[iParam0 /*16*/])))
						{
							case 2:
							case 1155669136:
							case 980164514:
								fVar292 = -1f;
								fVar293 = -1f;
								break;
							
							case -443833860:
							case -263281629:
								fVar292 = 0f;
								fVar293 = 1f;
								break;
							
							case -1700983776:
							case 453966243:
								fVar292 = -1f;
								fVar293 = -1f;
								break;
							
							case 156985755:
							case -265837615:
								fVar292 = -1f;
								fVar293 = -1f;
								break;
							
							default:
								break;
							}
					}
					if (fVar292 >= 0f && fVar293 >= 0f)
					{
						if (fVar279 >= fVar292 && fVar279 <= fVar293)
						{
							if (!PHYSICS::DOES_ROPE_EXIST(&uLocal_262))
							{
								PHYSICS::ROPE_LOAD_TEXTURES();
								uLocal_262 = PHYSICS::ADD_ROPE(Var289, 0f, 0f, 0f, 0.4f, 1, -1082130432, 1056964608, 1056964608, 0, 0, 1, 1065353216, 0, 0);
							}
							else
							{
								PHYSICS::PIN_ROPE_VERTEX(uLocal_262, 0, Var286);
								PHYSICS::PIN_ROPE_VERTEX(uLocal_262, (PHYSICS::GET_ROPE_VERTEX_COUNT(uLocal_262) - 1), Var289);
							}
						}
						else if (PHYSICS::DOES_ROPE_EXIST(&uLocal_262))
						{
							PHYSICS::DELETE_ROPE(&uLocal_262);
							PHYSICS::ROPE_UNLOAD_TEXTURES();
						}
					}
					else if (PHYSICS::DOES_ROPE_EXIST(&uLocal_262))
					{
						PHYSICS::DELETE_ROPE(&uLocal_262);
					}
				}
			}
			break;
		
		case 91:
			func_658(uLocal_91[iParam0], iVar0, iParam1);
			GlobalFunc_5961(iParam1, &(uLocal_313[iParam0]), &(iLocal_319[iParam0]), "GARDEN_WATER_PLANTS", "MICHAELS_GARDEN_WATER", uLocal_91[iParam0], &(Local_325[iParam0 /*16*/]), 0);
			if (iLocal_599 == iLocal_601[iParam0])
			{
				func_570(uLocal_91[iParam0], iParam1, "scr_pts_gardner_watering", &(uLocal_304[iParam0]), 4f);
			}
			else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_304[iParam0]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_304[iParam0], 0);
			}
			break;
		
		case 92:
			func_578(uLocal_91[iParam0]);
			break;
		
		case 93:
			func_541(uLocal_91[iParam0], iVar0, iParam1, &(iLocal_135[iParam0]));
			break;
		
		case 137:
			func_471(uLocal_91[iParam0], iVar0, Local_272, 1082130432, 1);
			break;
		
		case 138:
			func_469(uLocal_91[iParam0], iVar0, &(iLocal_135[iParam0]), &(iLocal_153[iParam0]), &(iLocal_165[iParam0]), &(iLocal_159[iParam0]), &(iLocal_171[iParam0]), &(uLocal_141[iParam0]), &(iLocal_798[iParam0]));
			if (Global_24489 == 3)
			{
				if (iLocal_135[iParam0] == 2)
				{
					if (TASK::PED_HAS_USE_SCENARIO_TASK(uLocal_91[iParam0]))
					{
						iVar294 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(uLocal_91[iParam0], &uVar295, &iVar296);
						if (iVar296 <= 0)
						{
							iVar294 = iVar294;
							TASK::CLEAR_PED_TASKS(uLocal_91[iParam0]);
							iLocal_135[iParam0] = 0;
						}
					}
				}
			}
			break;
		
		case 140:
		case 141:
			break;
		
		default:
			break;
	}
	if (Global_85373[iVar0] == 140)
	{
		if ((iParam1 == 52 || iParam1 == 67) || iParam1 == 74)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[2]))
			{
				iVar297 = 0;
				Var298 = { 0f, 0f, 0f };
				iVar301 = 225;
				iVar302 = 825812850;
				StringCopy(&cVar303, "", 64);
				iVar319 = 0;
				GlobalFunc_2984(8, &iVar297, &Var298, &iVar301, &iVar302, &cVar303, &iVar319);
				ENTITY::REMOVE_MODEL_HIDE(Var298, 1.5f, iVar297, 0);
				GlobalFunc_2984(9, &iVar297, &Var298, &iVar301, &iVar302, &cVar303, &iVar319);
				ENTITY::REMOVE_MODEL_HIDE(Var298, 1.5f, iVar297, 0);
				OBJECT::DELETE_OBJECT(&(uLocal_147[2]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[1]))
			{
				iVar320 = 0;
				Var321 = { 0f, 0f, 0f };
				iVar324 = 225;
				iVar325 = 825812850;
				StringCopy(&cVar326, "", 64);
				iVar342 = 0;
				GlobalFunc_2984(9, &iVar320, &Var321, &iVar324, &iVar325, &cVar326, &iVar342);
				ENTITY::REMOVE_MODEL_HIDE(Var321, 1.5f, iVar320, 0);
				OBJECT::DELETE_OBJECT(&(uLocal_147[1]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[0]))
			{
				iVar343 = 0;
				Var344 = { 0f, 0f, 0f };
				iVar347 = 225;
				iVar348 = 825812850;
				StringCopy(&cVar349, "", 64);
				iVar365 = 0;
				GlobalFunc_2984(9, &iVar343, &Var344, &iVar347, &iVar348, &cVar349, &iVar365);
				ENTITY::REMOVE_MODEL_HIDE(Var344, 1.5f, iVar343, 0);
				OBJECT::DELETE_OBJECT(&(uLocal_147[0]));
			}
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 1, 1);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 1, 1);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 1, 1);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 1, 1);
		}
	}
	if (Global_85373[iVar0] != iParam1 && iParam1 != 82)
	{
		if (((iParam1 == 37 || iParam1 == 56) || iParam1 == 57) || iParam1 == 58)
		{
			func_576(iParam0);
		}
		GlobalFunc_5940(iVar0, Global_85373[iVar0], &(Local_276[iParam0 /*3*/]), &(uLocal_292[iParam0]));
		func_67(uLocal_91[iParam0], iVar0, Global_85370, 1);
		if (iLocal_165[iVar0] != 0)
		{
			iLocal_153[iVar0] = 0;
		}
		if (iLocal_171[iVar0] != 0)
		{
			iLocal_159[iVar0] = 0;
		}
		func_575(iParam0);
		iLocal_319[iParam0] = -1;
	}
}

int func_469(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x5C701
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	char* sVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	var uVar23;
	var uVar24;
	struct<3> Var25;
	int iVar28;
	var uVar29;
	var uVar30;
	int iVar31;
	var uVar32;
	var uVar33;
	struct<3> Var34;
	struct<3> Var37;
	int iVar40;
	float fVar41;
	int iVar42;
	
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(*uParam8);
	}
	if (*uParam8 != -1)
	{
		*uParam8 = -1;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1805844857) != 1)
		{
			iVar11 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar0[iVar12]) && !PED::IS_PED_INJURED(uVar0[iVar12]))
				{
					if (PED::GET_PED_TYPE(uVar0[iVar12]) == 6)
					{
						TASK::TASK_SMART_FLEE_PED(iParam0, uVar0[iVar12], 75f, -1, 1, 0);
						*uParam2 = 0;
						return 0;
					}
				}
				iVar12++;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -251125078) != 1)
			{
				TASK::TASK_SMART_FLEE_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 75f, -1, 1, 0);
				*uParam2 = 0;
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam3, iParam0))
			{
				ENTITY::DETACH_ENTITY(*uParam3, 1, 1);
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam3, iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, 1, 1);
				}
				*uParam4 = 0;
				*uParam3 = 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam5))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam5, iParam0))
			{
				ENTITY::DETACH_ENTITY(*uParam5, 1, 1);
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam5, iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, 1, 1);
				}
				*uParam6 = 0;
				*uParam5 = 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam7))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam7, iParam0))
			{
				ENTITY::DETACH_ENTITY(*uParam7, 1, 1);
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam7, iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, 1, 1);
				}
				*uParam7 = 0;
			}
		}
		return 1;
	}
	switch (*uParam2)
	{
		case 0:
			if (func_471(iParam0, iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 0), 40f, 1))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
				*uParam2 = 0;
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam3))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam3, iParam0))
				{
					ENTITY::DETACH_ENTITY(*uParam3, 1, 1);
					*uParam3 = 0;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam5))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam5, iParam0))
				{
					ENTITY::DETACH_ENTITY(*uParam5, 1, 1);
					*uParam3 = 0;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam7))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam7, iParam0))
				{
					ENTITY::DETACH_ENTITY(*uParam7, 1, 1);
					*uParam7 = 0;
				}
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) != 1)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, GlobalFunc_5949(iParam0, iParam1, 1), 1f, -1, 0.25f, 0, 1193033728);
					return 0;
				}
			}
			else
			{
				SYSTEM::WAIT(5);
				if (PED::IS_PED_INJURED(iParam0))
				{
					return 0;
				}
				iVar13 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar14, &uVar15);
				if (iVar13 != 2)
				{
					*uParam2 = 1;
					return 0;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iParam0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, GlobalFunc_5949(iParam0, iParam1, 0), 1f, -1, 0.25f, 0, 1193033728);
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iParam0) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) == 1)
					{
						iVar13 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar14, &uVar15);
						if (iVar13 != 2)
						{
							*uParam2 = 1;
							return 0;
						}
					}
				}
			}
			sVar16 = "PROP_HUMAN_SEAT_CHAIR";
			bVar17 = true;
			if (GlobalFunc_2952(69, &iVar18, &iVar19, &iVar20, &iVar21))
			{
				if (iParam1 == iVar18)
				{
					if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) == iVar20 && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) == iVar21)
					{
						if (TASK::IS_SCENARIO_TYPE_ENABLED(sVar16))
						{
							TASK::SET_SCENARIO_TYPE_ENABLED(sVar16, 0);
							bVar17 = false;
						}
					}
				}
			}
			if (INTERIOR::IS_COLLISION_MARKED_OUTSIDE(ENTITY::GET_ENTITY_COORDS(iParam0, 0)))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
				{
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 8192);
					TASK::TASK_WANDER_STANDARD(iParam0, 1193033728, 0);
					*uParam2 = 1;
					return 0;
				}
			}
			break;
		
		case 1:
			if (func_471(iParam0, iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 0), 40f, 1))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
				*uParam2 = 0;
				return 1;
			}
			if (!TASK::DOES_SCENARIO_EXIST_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 5f, 1))
			{
			}
			else if (TASK::IS_SCENARIO_OCCUPIED(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 5f, 1))
			{
			}
			else
			{
				if (bVar17)
				{
				}
				if (Global_24489 == 3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar16) && TASK::IS_SCENARIO_TYPE_ENABLED(sVar16))
					{
						TASK::SET_SCENARIO_TYPE_ENABLED(sVar16, 0);
						return 0;
					}
				}
				if (!TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1647992574) != 1)
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, 1), 5f, 0);
				}
				else
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
					*uParam2 = 2;
					return 0;
				}
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) == 1)
			{
				iVar22 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar23, &uVar24);
				if (iVar22 == 2)
				{
					Var25 = { GlobalFunc_5949(iParam0, iParam1, 0) };
					TASK::CLEAR_PED_TASKS(iParam0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Var25, 1f, -1, 0.25f, 0, 1193033728);
					*uParam2 = 0;
					return 0;
				}
				return 0;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 923520851) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1146898486) == 1)
			{
				iVar28 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar29, &uVar30);
				if (iVar28 == 2)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, GlobalFunc_5949(iParam0, iParam1, 1), 1f, -1, 0.25f, 0, 1193033728);
					*uParam2 = 0;
					return 0;
				}
			}
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
				*uParam2 = 0;
				return 0;
			}
			if (((TASK::GET_SCRIPT_TASK_STATUS(iParam0, 923520851) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1146898486) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1146898486) == 1)
			{
			}
			else
			{
				*uParam2 = 0;
				return 0;
			}
			return 1;
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1647992574) != 1)
			{
				if (!Global_24489 == 3)
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 5f, 1))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, 1), 5f, 0);
						iVar31 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &uVar32, &uVar33);
						if (iVar31 == 2 || iVar31 == 0)
						{
							Var34 = { GlobalFunc_5949(iParam0, iParam1, 1) };
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Var34, 1f, -1, 0.25f, 0, 1193033728);
							*uParam2 = 0;
							return 0;
						}
					}
					else
					{
						*uParam2 = 1;
						return 0;
					}
				}
				else
				{
					Var37 = { GlobalFunc_5949(iParam0, iParam1, 1) };
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Var37, 1f, -1, 0.25f, 0, 1193033728);
					*uParam2 = 0;
					return 0;
				}
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(iParam0))
			{
			}
			else
			{
				iVar40 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iParam0, &fVar41, &iVar42);
				if (func_471(iParam0, iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 0), 40f, 1))
				{
					return 1;
				}
				if (iVar42 > 0)
				{
					if (TASK::IS_SCENARIO_OCCUPIED(ENTITY::GET_ENTITY_COORDS(iParam0, 1), (fVar41 + 0.5f), 1))
					{
						iVar40 = iVar40;
						TASK::CLEAR_PED_TASKS(iParam0);
						*uParam2 = 1;
						return 0;
					}
				}
			}
			break;
		
		default:
			break;
	}
	iParam1 = iParam1;
	return 0;
}


int func_471(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x5D283
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (SYSTEM::VDIST2(Param2, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > (fParam5 * fParam5))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) != 1)
		{
			iVar0 = -1;
			fVar1 = 0.25f;
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Param2, 1f, iVar0, fVar1, 0, 1193033728);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
		if (GlobalFunc_11240(iParam1, &iVar2, 1))
		{
			if (GlobalFunc_9264(iParam1, iVar2))
			{
				GlobalFunc_7241(iParam1, iVar2);
				return 1;
			}
		}
	}
	if (bParam6)
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
		GlobalFunc_7241(iParam1, 138);
	}
	return 0;
}






































































int func_541(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x617D0
{
	char* sVar0;
	char[] cVar16[8];
	int iVar32;
	int iVar33;
	
	if (func_542(iParam1, iParam2, &sVar0, &cVar16, &iVar32, &iVar33))
	{
		if (!TASK::IS_SCENARIO_TYPE_ENABLED(&cVar16))
		{
			TASK::SET_SCENARIO_TYPE_ENABLED(&cVar16, 1);
			return 0;
		}
		else
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 993674639) != 1)
			{
				if (*uParam3 > 0)
				{
					*uParam3 = 0;
					GlobalFunc_7241(iParam1, 138);
					return 0;
				}
				TASK::TASK_START_SCENARIO_IN_PLACE(iParam0, &cVar16, 0, 0);
				*uParam3++;
				if (GlobalFunc_2951(iVar32, 262144))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
					PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				}
				return 1;
			}
			return 1;
		}
	}
	return 0;
}

int func_542(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x61868
{
	*iParam4 = 9;
	*iParam5 = 0;
	switch (iParam1)
	{
		case 0:
			StringCopy(sParam2, "TIMETABLE@AMANDA@IG_12", 64);
			*iParam4 |= 262146;
			*iParam4 = (*iParam4 - 1);
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam3, "jimmy_", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam3, "tracy_", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 2:
					StringCopy(sParam3, "_amanda", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
				
				case 1:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
				
				case 2:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			*iParam4 |= 262146;
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Amanda", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Jimmy", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_9", 64);
					StringCopy(sParam3, "base_Tracy", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Amanda", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Jimmy", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_10", 64);
					StringCopy(sParam3, "base_Tracy", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 5:
		case 21:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_2@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_BASE", 64);
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					*iParam4 |= 2560;
					return 1;
					break;
			}
			break;
		
		case 7:
		case 22:
			switch (iParam0)
			{
				case 0:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 33816576;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_3@SLEEPING", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_STAND_MOBILE", 64);
					*iParam5 = 4;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_5@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 262144;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_2@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_2@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_7@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_7@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_8@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_8@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_11@", 64);
					StringCopy(sParam3, "BASE_JIMMY", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_9_11@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_1@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_2", 64);
					StringCopy(sParam3, "Jimmy_BASE", 64);
					*iParam4 |= 262144;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
					StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_BASE_Jimmy", 64);
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "SWITCH@MICHAEL@ON_SOFA", 64);
					StringCopy(sParam3, "BASE_Jimmy", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
					StringCopy(sParam2, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
					StringCopy(sParam3, "MICS3_15_BASE_JIMMY", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@JIMMY@MICS3_IG_15@", 64);
					StringCopy(sParam3, "MICS3_15_BASE_TRACY", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_3@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam5 = 2;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_5", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262146;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_8", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					*iParam4 |= 786434;
					return 1;
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_7@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					*iParam4 |= 2560;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_2", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_15", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_4@", 64);
					StringCopy(sParam3, "BASE_TRACY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_1@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 34340864;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@IG_14@", 64);
					StringCopy(sParam3, "IG_14_BASE_TRACY", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 42:
			return func_542(iParam0, 43, sParam2, sParam3, iParam4, iParam5);
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@SLEEP@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 44:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@FAMR_IG_4", 64);
					StringCopy(sParam3, "base", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam2, "TIMETABLE@TRACY@FAMR_IG_5", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_542(iParam0, 26, sParam2, sParam3, iParam4, iParam5);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_9", 64);
					StringCopy(sParam3, "IG_9_BASE_AMANDA", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 3:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_9", 64);
					StringCopy(sParam3, "IG_9_BASE_MAID", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@FACEMASK@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 262146;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 49:
			return func_542(iParam0, 140, sParam2, sParam3, iParam4, iParam5);
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@MAGDEMO_IG_2_SYNCED", 64);
					StringCopy(sParam3, "base_demo", 64);
					*iParam4 |= 1;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_7", 64);
					StringCopy(sParam3, "IG_7_ENTER", 64);
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK_IN_KITCHEN@", 64);
					StringCopy(sParam3, "amanda_gets_drunk_", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_5", 64);
					StringCopy(sParam3, "IG_5_BASE", 64);
					*iParam5 = 2;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 64:
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@DRUNK@BASE", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 786434;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_P2_BASE_AMANDA", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P2", 64);
					StringCopy(sParam3, "IG_2_P2_BASE_JIMMY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P3", 64);
					StringCopy(sParam3, "IG2_P3_BASE_AMANDA", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 0:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_2_P3", 64);
					StringCopy(sParam3, "IG2_P3_BASE_JIMMY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE_AMANDA", 64);
					*iParam5 = 0;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE_TRACY", 64);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
					StringCopy(sParam3, "IG_11_BASE", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 60:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_11", 64);
					StringCopy(sParam3, "IG_11_IAmAFastLearner", 64);
					*iParam4 |= 266240;
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 61:
		case 63:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_6", 64);
					StringCopy(sParam3, "IG_6_BASE", 64);
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 62:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@AMANDA@IG_6", 64);
					StringCopy(sParam3, "IG_6_END_BASE", 64);
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "SWITCH@MICHAEL@BEDROOM", 64);
					StringCopy(sParam3, "BED_LOOP_02_Amanda", 64);
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "SWITCH@MICHAEL@GETS_READY", 64);
					StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_IDLE_AMA", 64);
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_6", 64);
					StringCopy(sParam3, "BASE_Amanda", 64);
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_7", 64);
					StringCopy(sParam3, "ThanksDad_Amanda", 64);
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 3;
					return 1;
					break;
				
				case 1:
					StringCopy(sParam2, "TIMETABLE@REUNITED@IG_7", 64);
					StringCopy(sParam3, "ThanksDad_Tracy", 64);
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_WINDOW@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 1;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_SURFACE", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 77:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_SURFACE_1@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
		case 86:
		case 80:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@CLEANING_WINDOW", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@IG_2@", 64);
					StringCopy(sParam3, "IG_2_BASE", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam2, "TIMETABLE@MAID@IG_8@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					if (iParam1 == 82)
					{
						*iParam5 = 3;
					}
					if (iParam1 == 83)
					{
						*iParam5 = 2;
					}
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_GARDENER_LEAF_BLOWER", 64);
					*iParam5 = 4;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_GARDENER_PLANT", 64);
					*iParam5 = 4;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@CLEAN_POOL@", 64);
					StringCopy(sParam3, "Base_gardener", 64);
					*iParam5 = 3;
					*iParam4 |= 262146;
					*iParam4 = (*iParam4 - 1);
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@LAWNMOW@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "TIMETABLE@GARDENER@FILLING_CAN", 64);
					StringCopy(sParam3, "GAR_IG_5_Filling_Can", 64);
					*iParam4 |= 262144;
					*iParam5 = 0;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_STAND_MOBILE", 64);
					*iParam5 = 4;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					StringCopy(sParam2, "null", 64);
					StringCopy(sParam3, "WORLD_HUMAN_SMOKING", 64);
					*iParam5 = 4;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_1", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					*iParam4 |= 262146;
					*iParam4 = (*iParam4 - 1);
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_2", 64);
					StringCopy(sParam3, "base", 64);
					*iParam5 = 2;
					*iParam4 |= 262146;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_3", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					*iParam4 |= 786434;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					StringCopy(sParam2, "TIMETABLE@DENICE@IG_4", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					GlobalFunc_2976(iParam1, sParam2, "", sParam3, "", iParam5);
					return 0;
					break;
				
				case 7:
					GlobalFunc_2976(iParam1, sParam2, "", sParam3, "", iParam5);
					return 0;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@HAND_RADIO_IG_1", 64);
					StringCopy(sParam3, "IG_1_BASE", 64);
					*iParam4 |= 262144;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 101:
		case 119:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_2", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 102:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
					StringCopy(sParam3, "LAYING", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 103:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3_COUCH", 64);
					StringCopy(sParam3, "BASE", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_4_SMOKING_METH", 64);
					StringCopy(sParam3, "BASE", 64);
					*iParam4 = 263176;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@MOONSHINE_IG_5", 64);
					StringCopy(sParam3, "IG_5_", 64);
					*iParam4 |= 262152;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_6", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262152;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_CHAIR", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_CLUBCHAIR", 64);
					StringCopy(sParam3, "ON_CLUBCHAIR", 64);
					*iParam5 = 3;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@ON_SOFA", 64);
					StringCopy(sParam3, "SIT_Sofa", 64);
					*iParam5 = 3;
					*iParam4 |= 33816576;
					return 1;
					break;
			}
			break;
		
		case 110:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEbase", 64);
					StringCopy(sParam3, "TALK_PHONE_Base", 64);
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 111:
			switch (iParam0)
			{
				case 8:
					StringCopy(sParam2, "TIMETABLE@MICHAEL@TALK_PHONEEXIT", 64);
					StringCopy(sParam3, "TALK_PHONE_Exit", 64);
					*iParam4 |= 266240;
					*iParam5 = 2;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@IG_1", 64);
					StringCopy(sParam3, "IG_1_", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 11:
					StringCopy(sParam2, "TIMETABLE@TREVOR@IG_1", 64);
					StringCopy(sParam3, "IG_1_", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@TRV_IG_2", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 11:
					StringCopy(sParam2, "TIMETABLE@TREVOR@TRV_IG_2", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@SMOKING_METH", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 = 267272;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@ON_THE_TOILET", 64);
					StringCopy(sParam3, "TrevOnLav_", 64);
					*iParam4 |= 786434;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "TIMETABLE@TREVOR@GRENADE_THROWING", 64);
					StringCopy(sParam3, "GRENADE_THROWING_trev", 64);
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					StringCopy(sParam2, "SWITCH@TREVOR@BED", 64);
					StringCopy(sParam3, "GC_TRV_IG_7", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_1", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_3", 64);
					StringCopy(sParam3, "IG_3_BASE", 64);
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					StringCopy(sParam2, "TIMETABLE@RON@IG_4", 64);
					StringCopy(sParam3, "IG_4_BASE", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_1", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					*iParam4 |= 786434;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_2@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
				
				case 8:
					StringCopy(sParam2, "TIMETABLE@PATRICIA@PAT_IG_3@", 64);
					StringCopy(sParam3, "", 64);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CLEAN_KITCHEN", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CRYINGONBED", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262146;
					*iParam4 = (*iParam4 - 1);
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "SWITCH@TREVOR@FLOYD_CRYING", 64);
					StringCopy(sParam3, "Console_end_LOOP_FLOYD", 64);
					return 1;
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "SWITCH@TREVOR@PINEAPPLE", 64);
					StringCopy(sParam3, "Pineapple_EXIT_LOOP_FLOYD", 64);
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CALLING", 64);
					StringCopy(sParam3, "base", 64);
					*iParam5 = 2;
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@ENDING_CALL", 64);
					StringCopy(sParam3, "base", 64);
					*iParam4 |= 266240;
					return 1;
					break;
			}
			break;
		
		case 132:
		case 133:
		case 134:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@HIDING_BEHIND_COUCH", 64);
					StringCopy(sParam3, "idle", 64);
					*iParam4 |= 262144;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					StringCopy(sParam2, "TIMETABLE@FLOYD@CRYINGONBED_IG_5@", 64);
					StringCopy(sParam3, "", 64);
					*iParam4 |= 262144;
					*iParam5 = 3;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
				
				case 14:
					GlobalFunc_5954(iParam1, sParam2, sParam3, iParam5);
					return 1;
					break;
			}
			break;
		
		case 138:
		case 137:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*iParam4 = -1;
			*iParam5 = 5;
			return 0;
			break;
		
		case 140:
		case 141:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*iParam4 = -1;
			*iParam5 = 5;
			return 0;
			break;
		
		default:
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "", 64);
			*iParam4 = -1;
			*iParam5 = 5;
			return 0;
			break;
	}
	StringCopy(sParam2, "", 64);
	StringCopy(sParam3, "", 64);
	*iParam4 = -1;
	*iParam5 = 5;
	return 0;
}



int func_545(int iParam0, var uParam1, struct<3> Param2)//Position - 0x63561
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	
	switch (iParam0)
	{
		case 80:
			iVar0 = 1110;
			Var1 = { Vector(73.06655f, 183.218f, -812.7162f) - Param2 };
			Var4 = { 0f, 0f, -1f };
			Var7 = { GlobalFunc_107(1f, 0f, 0f) };
			fVar10 = 1f;
			fVar11 = 1f;
			fVar12 = 1f;
			fVar13 = 1f;
			fVar14 = 1f;
			fVar15 = 1f;
			fVar16 = -1f;
			break;
		
		default:
			return 0;
			break;
	}
	if (!GRAPHICS::IS_DECAL_ALIVE(*uParam1))
	{
		*uParam1 = GRAPHICS::ADD_DECAL(iVar0, Param2 + Var1, Var4, Var7, fVar10, fVar11, fVar12, fVar13, fVar14, fVar15, fVar16, 0, 0, 0);
	}
	return 1;
}


int func_547(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, var uParam7, var uParam8, int iParam9, var uParam10, int iParam11, var uParam12, var uParam13, var uParam14)//Position - 0x6363A
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4[5];
	var uVar20[5];
	int iVar26;
	float fVar27;
	int iVar28;
	struct<3> Var29;
	float fVar32;
	char* sVar33;
	char[] cVar49[8];
	char[] cVar65[8];
	char[] cVar81[8];
	char[] cVar97[8];
	char[] cVar113[8];
	int iVar129;
	struct<3> Var130;
	var uVar133;
	struct<3> Var134;
	var uVar137;
	bool bVar138;
	float fVar139;
	float fVar140;
	bool bVar141;
	float fVar142;
	bool bVar143;
	float fVar144;
	
	if (GlobalFunc_5940(iParam1, iParam2, &Var0, &fVar3))
	{
		if (func_550(iParam1, iParam2, &Var4, &uVar20))
		{
			iVar26 = 20000;
			fVar27 = 0.01f;
			iVar28 = 4096;
			Var29 = { Param3 + Var0 };
			fVar32 = (fParam6 + fVar3);
			if (func_549(iParam0, iParam1, iParam2, *uParam13, &sVar33, &cVar49, &cVar65, &cVar81, &cVar97, &cVar113, &iVar129))
			{
				if (GlobalFunc_2951(iVar129, 1))
				{
					GlobalFunc_2988(&iVar129, 1);
				}
				if (GlobalFunc_2951(iVar129, 262144))
				{
				}
				else
				{
					GlobalFunc_2953(&iVar129, 262144);
				}
				switch (*uParam12)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_EXIST(*uParam8))
						{
							OBJECT::DELETE_OBJECT(uParam8);
							*uParam10 = 0;
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Var29 + Var4[*uParam13 /*3*/]) >= (1f * 1f))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) != 1)
								{
									Var130.x = (fVar32 + uVar20[*uParam13]);
									TASK::OPEN_SEQUENCE_TASK(&uVar133);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, Var29 + Var4[*uParam13 /*3*/], 1f, iVar26, fVar27, iVar28, Var130, (fVar32 + uVar20[*uParam13]));
									TASK::CLOSE_SEQUENCE_TASK(uVar133);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar133);
									TASK::CLEAR_SEQUENCE_TASK(&uVar133);
								}
							}
						}
						else
						{
							STREAMING::REQUEST_MODEL(iParam9);
							STREAMING::REQUEST_ANIM_DICT(&sVar33);
							STREAMING::REQUEST_ANIM_DICT(&cVar65);
							STREAMING::REQUEST_ANIM_DICT(&cVar97);
							*uParam12 = 1;
						}
						break;
					
					case 1:
						if (((STREAMING::HAS_MODEL_LOADED(iParam9) && STREAMING::HAS_ANIM_DICT_LOADED(&sVar33)) && STREAMING::HAS_ANIM_DICT_LOADED(&cVar65)) && STREAMING::HAS_ANIM_DICT_LOADED(&cVar97))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
							{
								Var134.x = (fVar32 + uVar20[*uParam13]);
								TASK::OPEN_SEQUENCE_TASK(&uVar137);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, Var29 + Var4[*uParam13 /*3*/], 1f, iVar26, fVar27, iVar28, Var134, (fVar32 + uVar20[*uParam13]));
								TASK::CLOSE_SEQUENCE_TASK(uVar137);
								TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar137);
								TASK::CLEAR_SEQUENCE_TASK(&uVar137);
							}
							*uParam12 = 2;
						}
						break;
					
					case 2:
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 0), Var29 + Var4[*uParam13 /*3*/], 1) <= 0.5f)
							{
								PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
								if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar33))
								{
									if (MISC::ARE_STRINGS_EQUAL(&sVar33, "TIMETABLE@MAID@CLEANING_SURFACE_1@"))
									{
										TASK::TASK_PLAY_ANIM(iParam0, &sVar33, &cVar49, 1.5f, -1000f, -1, iVar129 | 2, 0f, 0, 0, 0);
									}
									else
									{
										*uParam7 = PED::CREATE_SYNCHRONIZED_SCENE(Var29 + Var4[*uParam13 /*3*/], 0f, 0f, (fVar32 + uVar20[*uParam13]), 2);
										TASK::TASK_SYNCHRONIZED_SCENE(iParam0, *uParam7, &sVar33, &cVar49, 1.5f, -1.5f, 5, 0, 1.5f, 0);
									}
								}
								*uParam12 = 3;
							}
						}
						break;
					
					case 3:
						bVar138 = false;
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam7))
						{
							fVar139 = PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam7);
							if (fVar139 >= 0.3f)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(*uParam8))
								{
									*uParam10 = iParam9;
									*uParam8 = OBJECT::CREATE_OBJECT(iParam9, PED::GET_PED_BONE_COORDS(iParam0, iParam11, 0f, 0f, 0f), 1, 1, 0);
									ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam8, iParam0, PED::GET_PED_BONE_INDEX(iParam0, iParam11), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 1, 0, 2, 1);
								}
							}
							if (fVar139 >= 0.99f)
							{
								bVar138 = true;
							}
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &sVar33, &cVar49, 3))
						{
							fVar140 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, &sVar33, &cVar49);
							if (fVar140 >= 0.3f)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(*uParam8))
								{
									*uParam10 = iParam9;
									*uParam8 = OBJECT::CREATE_OBJECT(iParam9, PED::GET_PED_BONE_COORDS(iParam0, iParam11, 0f, 0f, 0f), 1, 1, 0);
									ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam8, iParam0, PED::GET_PED_BONE_INDEX(iParam0, iParam11), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 1, 0, 2, 1);
								}
							}
							if (fVar140 >= 0.99f)
							{
								bVar138 = true;
							}
						}
						else
						{
							bVar138 = true;
						}
						if (bVar138)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam7))
							{
								PED::DETACH_SYNCHRONIZED_SCENE(*uParam7);
							}
							*uParam7 = -1;
							if (STREAMING::HAS_ANIM_DICT_LOADED(&cVar65))
							{
								TASK::TASK_PLAY_ANIM(iParam0, &cVar65, &cVar81, 1000f, -1000f, -1, iVar129 | 2, 0f, 0, 0, 0);
							}
							*uParam12 = 4;
						}
						break;
					
					case 4:
						bVar141 = false;
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &cVar65, &cVar81, 3))
						{
							fVar142 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, &cVar65, &cVar81);
							if (fVar142 >= 0.99f)
							{
								bVar141 = true;
							}
						}
						else
						{
							bVar141 = true;
						}
						if (bVar141)
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED(&cVar97))
							{
								TASK::TASK_PLAY_ANIM(iParam0, &cVar97, &cVar113, 1000f, -8f, -1, iVar129, 0f, 0, 0, 0);
							}
							*uParam12 = 5;
						}
						break;
					
					case 5:
						bVar143 = false;
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &cVar97, &cVar113, 3))
						{
							fVar144 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, &cVar97, &cVar113);
							if (fVar144 >= 0.7f)
							{
								if (ENTITY::DOES_ENTITY_EXIST(*uParam8))
								{
									OBJECT::DELETE_OBJECT(uParam8);
									*uParam10 = 0;
								}
							}
						}
						else
						{
							bVar143 = true;
						}
						if (bVar143)
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam9);
							STREAMING::REMOVE_ANIM_DICT(&sVar33);
							STREAMING::REMOVE_ANIM_DICT(&cVar65);
							STREAMING::REMOVE_ANIM_DICT(&cVar97);
							*uParam13++;
							if (*uParam13 >= Var4.x)
							{
								*uParam13 = 0;
							}
							PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
							*uParam12 = 0;
						}
						break;
				}
				return 1;
			}
		}
	}
	uParam14 = uParam14;
	return 0;
}


int func_549(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)//Position - 0x63B53
{
	struct<16> Var0;
	struct<16> Var16;
	int iVar32;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	switch (iParam2)
	{
		case 75:
		case 84:
			switch (iParam3)
			{
				case 0:
					StringCopy(sParam4, "TIMETABLE@MAID@CLEANING_SURFACE_1@", 64);
					StringCopy(sParam5, "IG_9_ENTER", 64);
					StringCopy(sParam6, "TIMETABLE@MAID@CLEANING_SURFACE_1@", 64);
					StringCopy(sParam7, "IG_9_BASE", 64);
					StringCopy(sParam8, "TIMETABLE@MAID@CLEANING_SURFACE_1@", 64);
					StringCopy(sParam9, "IG_9_EXIT", 64);
					return 1;
					break;
				
				case 1:
				case 2:
				case 3:
				case 4:
					if (func_542(iParam1, iParam2, &Var0, &Var16, iParam10, &iVar32))
					{
						*sParam4 = { Var0 };
						StringConCat(sParam4, "ENTER", 64);
						*sParam5 = { Var16 };
						StringConCat(sParam5, "enter", 64);
						*sParam6 = { Var0 };
						StringConCat(sParam6, "BASE", 64);
						*sParam7 = { Var16 };
						StringConCat(sParam7, "base", 64);
						*sParam8 = { Var0 };
						StringConCat(sParam8, "EXIT", 64);
						*sParam9 = { Var16 };
						StringConCat(sParam9, "exit", 64);
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_550(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x63C6E
{
	*(uParam2[0 /*3*/]) = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 41:
			switch (iParam0)
			{
				case 1:
					(*uParam3)[0] = 0f;
					*(uParam2[1 /*3*/]) = { -4.5f, 9.6f, -1.2f };
					(*uParam3)[1] = 0f;
					*(uParam2[2 /*3*/]) = { -6.3f, 7.8f, -4.5f };
					(*uParam3)[2] = 0f;
					*(uParam2[3 /*3*/]) = { -0.5f, 0.2f, -3.8f };
					(*uParam3)[3] = 0f;
					*(uParam2[4 /*3*/]) = { -0.9f, 12.9f, -4.1f };
					(*uParam3)[4] = 0f;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			*(uParam2[0 /*3*/]) = { -6.38f, -3.71f, 1f };
			(*uParam3)[0] = 82.5f;
			*(uParam2[1 /*3*/]) = { -1.858f, -4.623f, 1.192f };
			(*uParam3)[1] = 162f;
			*(uParam2[2 /*3*/]) = { -8.3066f, -15.8344f, 1.1816f };
			(*uParam3)[2] = 162f;
			*(uParam2[3 /*3*/]) = { -15.208f, -4.177f, 0.5f };
			(*uParam3)[3] = 71.3f;
			*(uParam2[4 /*3*/]) = { -7.4216f, -9.6486f, 5.1f };
			(*uParam3)[4] = -110.7f;
			return 1;
			break;
	}
	return 0;
}

int func_551(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, char* sParam7, char* sParam8, var uParam9, var uParam10, var uParam11, bool bParam12)//Position - 0x63DCA
{
	struct<16> Var0;
	struct<16> Var16;
	int iVar32;
	int iVar33;
	float fVar34;
	char* sVar35;
	float fVar36;
	var uVar37;
	
	switch (*uParam9)
	{
		case 0:
			StringCopy(sParam7, "", 64);
			StringCopy(sParam7, "", 64);
			if (func_542(iParam1, iParam2, &Var0, &Var16, &iVar32, &iVar33))
			{
			}
			if (iVar33 != 2)
			{
				STREAMING::REQUEST_ANIM_DICT(&Var0);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var0))
				{
					return 0;
				}
				if (GlobalFunc_2951(iVar32, 1))
				{
					GlobalFunc_2988(&iVar32, 1);
				}
				TASK::TASK_PLAY_ANIM(iParam0, &Var0, &Var16, 8f, -1.5f, -1, iVar32, 0, 0, 0, 0);
				*sParam7 = { Var0 };
				*sParam8 = { Var16 };
				*uParam9 = 1;
			}
			else if (func_566(iParam0, iParam1, iParam2, sParam7, sParam8, Param3, fParam6))
			{
				*uParam9 = 1;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam7, sParam8, 3))
			{
				fVar34 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam7, sParam8);
				if (fVar34 >= 1f)
				{
					TASK::CLEAR_PED_TASKS(iParam0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(*uParam10))
				{
					sVar35 = "hangup";
					if (ENTITY::FIND_ANIM_EVENT_PHASE(sParam7, sParam8, sVar35, &fVar36, &uVar37))
					{
					}
					else
					{
						fVar36 = -1f;
						if (MISC::ARE_STRINGS_EQUAL(sParam7, "TIMETABLE@MAID@IG_8@"))
						{
							if (MISC::ARE_STRINGS_EQUAL(sParam8, "IG_8_IDLE_A"))
							{
								fVar36 = 0.85f;
							}
						}
						if (fVar36 < 0f)
						{
							fVar36 = 0.5f;
						}
					}
					if (fVar34 < fVar36)
					{
					}
					else
					{
						if (ENTITY::IS_ENTITY_ATTACHED(*uParam10))
						{
							ENTITY::DETACH_ENTITY(*uParam10, 1, 1);
						}
						if (bParam12)
						{
							*uParam11 = 0;
							OBJECT::DELETE_OBJECT(uParam10);
						}
					}
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(*uParam10))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(*uParam10))
					{
						ENTITY::DETACH_ENTITY(*uParam10, 1, 1);
					}
					if (bParam12)
					{
						*uParam11 = 0;
						OBJECT::DELETE_OBJECT(uParam10);
					}
				}
				StringCopy(sParam7, "", 64);
				StringCopy(sParam8, "", 64);
				*uParam9 = 2;
			}
			break;
		
		case 2:
			if (bParam12)
			{
				if (ENTITY::DOES_ENTITY_EXIST(*uParam10))
				{
				}
			}
			GlobalFunc_7241(iParam1, 138);
			*uParam9 = 0;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_552(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9)//Position - 0x63FA3
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	
	if (Global_85373[iParam1] != iParam2)
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > (7f * 7f))
		{
			return 0;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
		{
			return 0;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
			GlobalFunc_7223(iParam2, &uVar0, &uVar1, &uVar2);
			if (!GlobalFunc_747(uVar2, GlobalFunc_8310()))
			{
				return 0;
			}
			if (GlobalFunc_747(uVar1, 64))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					if (func_425(sParam3, sParam4, uParam6, iParam9, uParam5, 0))
					{
						GlobalFunc_6715(uParam7);
						Global_85373[iParam1] = iParam2;
						return 1;
					}
				}
			}
			else
			{
				StringCopy(&Var3, sParam4, 16);
				if (func_446(sParam3, &Var3, uParam5))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
					{
						if (func_425(sParam3, &Var3, uParam6, iParam9, uParam5, 0))
						{
							GlobalFunc_6715(uParam7);
							Global_85373[iParam1] = iParam2;
							return 1;
						}
					}
				}
			}
			return 0;
		}
		Global_85373[iParam1] = iParam2;
		*iParam8 = Global_85373[iParam1];
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_553(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, var uParam7, int iParam8, int iParam9, var uParam10, char* sParam11, char* sParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, var uParam19, var uParam20, var uParam21, var uParam22, int iParam23)//Position - 0x640C8
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	struct<2> Var10;
	var uVar14;
	var uVar15;
	var uVar16;
	struct<3> Var17;
	float fVar20;
	char* sVar21;
	
	switch (*uParam7)
	{
		case 0:
			if (!GlobalFunc_5960(*iParam0, iParam2, Param3, fParam6))
			{
				func_556(*iParam0, 0);
				func_556(iParam8, 0);
				func_556(iParam9, 0);
				Var0 = { -7.5f, -2.95f, 0.57f };
				Var3 = { 3f, 3f, 1.5f };
				fVar6 = -22f;
				if (GlobalFunc_2978(PLAYER::PLAYER_PED_ID(), Param3 + Var0, Var3, (fParam6 + fVar6), 0, 1, 0))
				{
					GlobalFunc_2642(iParam1, 140);
					PED::DELETE_PED(iParam0);
					return 0;
				}
			}
			else
			{
				func_556(*iParam0, 1);
				func_556(iParam8, 1);
				func_556(iParam9, 1);
				GlobalFunc_7223(iParam2, &uVar7, &uVar8, &uVar9);
				if (!GlobalFunc_747(uVar9, GlobalFunc_8310()))
				{
					return 0;
				}
				if (GlobalFunc_747(uVar8, 64))
				{
					if (func_425(sParam16, sParam17, uParam20, iParam23, uParam19, 0))
					{
						GlobalFunc_6715(uParam21);
						if (MISC::ARE_STRINGS_EQUAL(sParam17, sParam18))
						{
							*uParam22++;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam10))
						{
							PED::SET_SYNCHRONIZED_SCENE_RATE(*uParam10, 1f);
						}
						*uParam7 = 1;
						return 0;
					}
				}
				else
				{
					StringCopy(&Var10, sParam17, 16);
					if (func_446(sParam16, &Var10, uParam19))
					{
						if (func_425(sParam16, &Var10, uParam20, iParam23, uParam19, 0))
						{
							GlobalFunc_6715(uParam21);
							if (MISC::ARE_STRINGS_EQUAL(sParam17, sParam18))
							{
								*uParam22++;
							}
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam10))
							{
								PED::SET_SYNCHRONIZED_SCENE_RATE(*uParam10, 1f);
							}
							*uParam7 = 1;
							return 0;
						}
					}
				}
			}
			if (func_563(*iParam0, iParam1, iParam2, Param3, fParam6, uParam10, 0, 0, sParam11, sParam12, 1090519040, -1056964608))
			{
				if (INTERIOR::IS_VALID_INTERIOR(iParam14) && INTERIOR::IS_INTERIOR_READY(iParam14))
				{
					INTERIOR::FORCE_ROOM_FOR_ENTITY(*iParam0, iParam14, MISC::GET_HASH_KEY(sParam15));
					if (ENTITY::DOES_ENTITY_EXIST(iParam8))
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam8, iParam14, MISC::GET_HASH_KEY(sParam15));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam9))
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam9, iParam14, MISC::GET_HASH_KEY(sParam15));
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam10))
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(*uParam10, 0f);
				}
			}
			break;
		
		case 1:
			if (func_563(*iParam0, iParam1, iParam2, Param3, fParam6, uParam10, 0, 1, sParam11, sParam12, 8f, -1000f))
			{
				func_556(*iParam0, 1);
				func_556(iParam8, 1);
				func_556(iParam9, 1);
				if (INTERIOR::IS_VALID_INTERIOR(iParam14) && INTERIOR::IS_INTERIOR_READY(iParam14))
				{
					INTERIOR::FORCE_ROOM_FOR_ENTITY(*iParam0, iParam14, MISC::GET_HASH_KEY(sParam15));
					if (ENTITY::DOES_ENTITY_EXIST(iParam8))
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam8, iParam14, MISC::GET_HASH_KEY(sParam15));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam9))
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam9, iParam14, MISC::GET_HASH_KEY(sParam15));
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam10))
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(*uParam10, 1f);
				}
				*uParam7 = 2;
				return 0;
			}
			break;
		
		case 2:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam10) || PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam10) >= 0.95f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam8))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iParam8))
					{
						ENTITY::DETACH_ENTITY(iParam8, 1, 1);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam10))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iParam8, -1000f, 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iParam9))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iParam9))
					{
						ENTITY::DETACH_ENTITY(iParam9, 1, 1);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam10))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iParam9, -1000f, 1);
					}
				}
				if (iParam1 == 2)
				{
					*uParam7 = 3;
				}
				else
				{
					*uParam7 = 0;
					GlobalFunc_7241(iParam1, iParam13);
					return 0;
				}
			}
			break;
		
		case 3:
			GlobalFunc_7223(iParam2, &uVar14, &uVar15, &uVar16);
			func_664(*iParam0, iParam1, iParam2, sParam11, sParam12, Param3, fParam6, uParam10, 1, 1);
			if (func_445(*iParam0, iParam2, uParam20, sParam16, uParam19, uParam21, uParam22, 16f, sParam18, 0))
			{
			}
			break;
		
		case 4:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam10))
			{
				Var17 = { 0f, 0f, 0f };
				fVar20 = 0f;
				if (GlobalFunc_5940(iParam1, iParam2, &Var17, &fVar20))
				{
					*uParam10 = PED::CREATE_SYNCHRONIZED_SCENE(Param3 + Var17, 0f, 0f, (fParam6 + fVar20), 2);
				}
			}
			sVar21 = GlobalFunc_7243(*iParam0, iParam1, iParam2);
			TASK::TASK_SYNCHRONIZED_SCENE(*iParam0, *uParam10, sParam11, sVar21, 8f, -1.5f, 1, 0, 1000f, 0);
			PED::SET_FORCE_FOOTSTEP_UPDATE(*iParam0, 1);
			PED::SET_SYNCHRONIZED_SCENE_PHASE(*uParam10, 0f);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam10, 0);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam10, 0);
			StringCopy(sParam12, sVar21, 64);
			*uParam7 = 5;
			return 0;
			break;
		
		case 5:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam10))
			{
				*uParam7 = 0;
				GlobalFunc_7241(iParam1, iParam13);
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}



void func_556(int iParam0, bool bParam1)//Position - 0x64869
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		if (ENTITY::IS_ENTITY_VISIBLE(iParam0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0, 0);
			ENTITY::SET_ENTITY_COLLISION(iParam0, 0, 0);
		}
	}
	else if (!ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0, 1);
		ENTITY::SET_ENTITY_COLLISION(iParam0, 1, 0);
	}
}



int func_559(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, char* sParam34, char* sParam35)//Position - 0x678CF
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<16> Var8;
	char cVar24[64];
	
	STREAMING::REQUEST_ANIM_DICT(&uParam2);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&uParam2))
	{
		STREAMING::REQUEST_ANIM_DICT(&uParam2);
		return 0;
	}
	else
	{
		fVar0 = 8f;
		fVar1 = -8f;
		iVar2 = 1;
		iVar3 = 16;
		fVar4 = 1000f;
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1))
		{
			return 0;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam34))
		{
			return 0;
		}
		iVar5 = HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam18);
		iVar6 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam34);
		iVar7 = (iVar5 - iVar6);
		StringCopy(&Var8, HUD::_GET_TEXT_SUBSTRING(&uParam18, 0, iVar7), 64);
		cVar24 = { Var8 };
		StringConCat(&cVar24, sParam35, 64);
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &uParam2, &cVar24, 2) || PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam1) <= 0.001f)
		{
			if (GlobalFunc_2951(iVar3, 1))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
				PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			}
			TASK::TASK_SYNCHRONIZED_SCENE(iParam0, *uParam1, &uParam2, &cVar24, fVar0, fVar1, iVar2, iVar3, fVar4, 0);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_560(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char[4] cParam17, char[4] cParam18, char[4] cParam19, char[4] cParam20, char[4] cParam21, char[4] cParam22, char[4] cParam23, char[4] cParam24, char[4] cParam25, char[4] cParam26, char[4] cParam27, char[4] cParam28, char[4] cParam29, char[4] cParam30, char[4] cParam31, char[4] cParam32, int iParam33)//Position - 0x679CB
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
	{
		return 0;
	}
	STREAMING::REQUEST_ANIM_DICT(&uParam1);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&uParam1))
	{
		STREAMING::REQUEST_ANIM_DICT(&uParam1);
		return 0;
	}
	else
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &uParam1, &cParam17, 3))
		{
			TASK::TASK_PLAY_ANIM(iParam0, &uParam1, &cParam17, 8f, -8f, -1, 32 | iParam33, 0, 0, 0, 0);
			return 1;
		}
		return 1;
	}
	return 0;
}

int func_561(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, var uParam7)//Position - 0x67A33
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4[5];
	var uVar20;
	struct<3> Var26;
	
	if (GlobalFunc_5940(iParam1, iParam2, &Var0, &fVar3))
	{
		uVar20 = 5;
		if (func_550(iParam1, iParam2, &Var4, &uVar20))
		{
			Var26 = { Param3 + Var0 };
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Var26 + Var4[*uParam7 /*3*/]) >= (1f * 1f))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) != 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Var26 + Var4[*uParam7 /*3*/], 1f, 20000, 1048576000, 0, 1193033728);
				}
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				*uParam7++;
				if (*uParam7 >= Var4.x)
				{
					*uParam7 = 0;
				}
			}
			return 1;
		}
	}
	fParam6 = fParam6;
	return 0;
}

int func_562(int iParam0, int iParam1, int iParam2)//Position - 0x67AE8
{
	if (!Global_3)
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_91[iParam1], 1)) < (40f * 40f))
			{
				return 0;
			}
		}
		Global_85373[iParam1] = 141;
		return 1;
	}
	iParam2 = iParam2;
	return 0;
}

int func_563(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, var uParam7, int iParam8, int iParam9, char* sParam10, char* sParam11, int iParam12, int iParam13)//Position - 0x67B5C
{
	struct<16> Var0;
	struct<16> Var16;
	var uVar32;
	var uVar33;
	struct<3> Var34;
	float fVar37;
	int iVar38;
	int iVar39;
	float fVar40;
	int iVar41;
	
	if (func_542(iParam1, iParam2, &Var0, &Var16, &uVar32, &uVar33) && GlobalFunc_5940(iParam1, iParam2, &Var34, &fVar37))
	{
		STREAMING::REQUEST_ANIM_DICT(&Var0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var0))
		{
			STREAMING::REQUEST_ANIM_DICT(&Var0);
			StringCopy(sParam10, "", 64);
			StringCopy(sParam11, "", 64);
			return 0;
		}
		else
		{
			iVar38 = 5;
			iVar39 = 16;
			fVar40 = 1000f;
			iVar41 = 0;
			GlobalFunc_2977(iParam1, iParam2, &iVar41);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam7))
			{
				*uParam7 = PED::CREATE_SYNCHRONIZED_SCENE(Param3 + Var34, 0f, 0f, (fParam6 + fVar37), 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam7, iParam8);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam7, iParam9);
				PED::SET_SYNCHRONIZED_SCENE_RATE(*uParam7, 1f);
				if (GlobalFunc_2951(iVar39, 1))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
					PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				}
				TASK::TASK_SYNCHRONIZED_SCENE(iParam0, *uParam7, &Var0, &Var16, iParam12, iParam13, iVar38, iVar39, fVar40, iVar41);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
				*sParam10 = { Var0 };
				*sParam11 = { Var16 };
				return 0;
			}
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var0, &Var16, 2))
			{
				if (GlobalFunc_2951(iVar39, 1))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
					PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				}
				TASK::TASK_SYNCHRONIZED_SCENE(iParam0, *uParam7, &Var0, &Var16, iParam12, iParam13, iVar38, iVar39, fVar40, iVar41);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam7, iParam8);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam7, iParam9);
				*sParam10 = { Var0 };
				*sParam11 = { Var16 };
				return 0;
			}
			return 1;
		}
	}
	StringCopy(sParam10, "", 64);
	StringCopy(sParam11, "", 64);
	return 0;
}


int func_565(int iParam0, char* sParam1, var uParam2, float fParam3)//Position - 0x67ECC
{
	float fVar0;
	float fVar1;
	
	if (GlobalFunc_5948(iParam0))
	{
		return 0;
	}
	if (!GlobalFunc_226(uParam2))
	{
		return 0;
	}
	fVar0 = GlobalFunc_4981(uParam2);
	if (!GlobalFunc_7072(uParam2, 1f))
	{
		return 0;
	}
	fVar1 = ((fVar0 % fParam3) / fParam3);
	if (fVar1 < 0.9f)
	{
		return 0;
	}
	GlobalFunc_5130(iParam0, sParam1, 24);
	return 1;
}

int func_566(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<3> Param5, float fParam8)//Position - 0x67F2A
{
	float fVar0;
	struct<16> Var1;
	struct<16> Var17;
	char* sVar33;
	char[] cVar49[8];
	int iVar65;
	int iVar66;
	int iVar67;
	float fVar68;
	
	Param5 = { Param5 };
	fParam8 = fParam8;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam3, sParam4, 3))
		{
			fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam3, sParam4);
			if (fVar0 <= 0.99f)
			{
				return 1;
			}
		}
		StringCopy(sParam3, "", 64);
		StringCopy(sParam4, "", 64);
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
	{
		if (GlobalFunc_8637(iParam1, iParam2, &Var1, &Var17, -1))
		{
			STREAMING::REQUEST_ANIM_DICT(&Var1);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&Var1))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var1, &Var17, 3))
				{
					if (func_542(iParam1, iParam2, &sVar33, &cVar49, &iVar65, &iVar66))
					{
						if (GlobalFunc_2951(iVar65, 1))
						{
							GlobalFunc_2988(&iVar65, 1);
						}
						if (GlobalFunc_2951(iVar65, 262144))
						{
							PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
							PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
						}
						GlobalFunc_2977(iParam1, iParam2, &iVar67);
						fVar68 = -8f;
						if (iParam2 == 60 || iParam2 == 83)
						{
							fVar68 = -1.5f;
						}
						if (iParam2 == 60)
						{
							if (GlobalFunc_2951(iVar65, 33554432))
							{
							}
							else
							{
								GlobalFunc_2953(&iVar65, 33554432);
							}
							fVar68 = -4f;
						}
						TASK::TASK_PLAY_ANIM(iParam0, &Var1, &Var17, 8f, fVar68, -1, iVar65, 0f, 0, iVar67, 0);
						*sParam3 = { Var1 };
						*sParam4 = { Var17 };
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		return 0;
	}
	return 0;
}




int func_570(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4)//Position - 0x68DB2
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	switch (iParam1)
	{
		case 16:
			if (*uParam3 == 0)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (!STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					STREAMING::REQUEST_PTFX_ASSET();
				}
				else if (!MISC::ARE_STRINGS_EQUAL(sParam2, "scr_fam_door_smoke"))
				{
					if (ENTITY::IS_ENTITY_A_PED(iParam0))
					{
					}
					else
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
						{
							return 0;
						}
						Var0 = { 0f, 0f, 0.05f };
						Var3 = { 0f, 0f, 0f };
						*uParam3 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sParam2, iParam0, Var0, Var3, 1f, 0, 0, 0);
					}
				}
				else
				{
					Var0 = { -806.8f, 174f, 76.9f };
					Var3 = { 0f, 0f, 0f };
					*uParam3 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sParam2, Var0, Var3, 1f, 0, 0, 0, 0);
				}
				return 0;
			}
			else
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam3))
				{
				}
				return 1;
			}
			break;
			return 0;
			break;
		
		case 91:
			if (*uParam3 == 0)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (!STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					STREAMING::REQUEST_PTFX_ASSET();
				}
				else
				{
					Var6 = { 0f, 0f, 0f };
					Var9 = { 0f, 0f, 0f };
					*uParam3 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE(sParam2, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), Var6, Var9, 60309, 1f, 0, 0, 0);
					return 1;
				}
			}
			return 0;
			break;
		
		case 120:
			if (*uParam3 == 0)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (!STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					STREAMING::REQUEST_PTFX_ASSET();
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
					{
						return 0;
					}
					Var12 = { 0f, 0f, 0f };
					Var15 = { 0f, 0f, 0f };
					*uParam3 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sParam2, iParam0, Var12, Var15, 1f, 0, 0, 0);
					return 1;
				}
			}
			return 0;
			break;
	}
	fParam4 = fParam4;
	*uParam3 = 0;
	return 0;
}


int func_572(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, char* sParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, char[4] cParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, char[4] cParam38, float fParam39, bool bParam40, int iParam41)//Position - 0x6921E
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (iParam41 == 0)
	{
		iParam41 = iParam0;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam41, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 100f)
	{
		return 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&sParam5))
	{
		fVar0 = -1f;
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &sParam5, &cParam21, 1))
		{
			fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, &sParam5, &cParam21);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &sParam5, &cParam21, 2))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam37))
			{
				fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam37);
			}
		}
		if (fVar0 >= 0f)
		{
			if (func_574(&sParam5, &cParam21, cParam38, &fVar1, &fVar2))
			{
				if (fVar0 >= fVar1 && fVar0 <= fVar2)
				{
					if (bParam40)
					{
						if (func_570(iParam41, iParam1, sParam2, uParam3, fParam39))
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (func_573(iParam41, iParam1, sParam2, uParam4, fParam39))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (bParam40 && GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam3))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam3, 0);
				}
			}
		}
	}
	*uParam4 = 0;
	*uParam3 = 0;
	return 0;
}

int func_573(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x6932E
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	
	switch (iParam1)
	{
		case 16:
			if (!*uParam3)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (!STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					STREAMING::REQUEST_PTFX_ASSET();
				}
				else if (!MISC::ARE_STRINGS_EQUAL(sParam2, "scr_fam_door_smoke"))
				{
					if (ENTITY::IS_ENTITY_A_PED(iParam0))
					{
						Var0 = { 0f, 0f, 0f };
						Var3 = { 0f, 0f, 0f };
						if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(sParam2, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), Var0, Var3, 31086, 1f, 0, 0, 0))
						{
							*uParam3 = 1;
						}
					}
				}
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 38:
			if (!*uParam3)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (!STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					STREAMING::REQUEST_PTFX_ASSET();
				}
				else
				{
					Var6 = { 0f, 0f, 0f };
					Var9 = { 0f, 0f, 0f };
					fVar12 = 1f;
					if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(sParam2, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), Var6, Var9, 31086, fVar12, 0, 0, 0))
					{
						*uParam3 = 1;
						return 1;
					}
				}
			}
			return 0;
			break;
	}
	uParam4 = uParam4;
	return 0;
}

int func_574(char* sParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x69417
{
	if (ENTITY::FIND_ANIM_EVENT_PHASE(sParam0, sParam1, sParam2, uParam3, uParam4))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam2, "exhale"))
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "TIMETABLE@TRACY@IG_7@BASE") && MISC::ARE_STRINGS_EQUAL(sParam1, "BASE"))
		{
			*uParam3 = -1f;
			*uParam4 = -1f;
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_A") && MISC::ARE_STRINGS_EQUAL(sParam1, "IDLE_A"))
		{
			*uParam3 = 0.058f;
			*uParam4 = 0.195f;
			return 1;
		}
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_A") && MISC::ARE_STRINGS_EQUAL(sParam1, "IDLE_B"))
		{
			*uParam3 = 0.298f;
			*uParam4 = 0.357f;
			return 1;
		}
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_A") && MISC::ARE_STRINGS_EQUAL(sParam1, "IDLE_C"))
		{
			*uParam3 = 0.298f;
			*uParam4 = 0.357f;
			return 1;
		}
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "TIMETABLE@TRACY@IG_7@IDLE_B") && MISC::ARE_STRINGS_EQUAL(sParam1, "IDLE_D"))
		{
			*uParam3 = 0.298f;
			*uParam4 = 0.357f;
			return 1;
		}
	}
	return 0;
}

void func_575(int iParam0)//Position - 0x69535
{
	int iVar0;
	
	iLocal_165[iParam0] = 0;
	iLocal_177[iParam0] = -1;
	Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
	Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
	iLocal_171[iParam0] = 0;
	iLocal_183[iParam0] = -1;
	Local_205[iParam0 /*3*/] = { 0f, 0f, 0f };
	Local_237[iParam0 /*3*/] = { 0f, 0f, 0f };
	iVar0 = func_403(iParam0);
	switch (Global_85373[iVar0])
	{
		case 0:
		case 24:
			switch (iVar0)
			{
				case 0:
					iLocal_165[iParam0] = joaat("prop_laptop_jimmy");
					iLocal_177[iParam0] = -1;
					Local_189[iParam0 /*3*/] = { 0.789f, -0.13f, 0.709f };
					Local_221[iParam0 /*3*/] = { 180f, 180f, 0f };
					break;
				
				case 1:
					iLocal_165[iParam0] = joaat("prop_npc_phone");
					iLocal_177[iParam0] = 28422;
					Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
					Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
					break;
				
				case 2:
					iLocal_165[iParam0] = joaat("p_novel_01_s");
					iLocal_177[iParam0] = 28422;
					Local_189[iParam0 /*3*/] = { 0f, 0f, -0.03f };
					Local_221[iParam0 /*3*/] = { 0f, 6f, 0f };
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					iLocal_165[iParam0] = joaat("prop_laptop_jimmy");
					iLocal_177[iParam0] = -1;
					Local_189[iParam0 /*3*/] = { 0.789f, -0.13f, 0.709f };
					Local_221[iParam0 /*3*/] = { 180f, 180f, 0f };
					break;
				
				case 1:
					iLocal_165[iParam0] = joaat("v_res_tt_bowl");
					iLocal_177[iParam0] = -1;
					Local_189[iParam0 /*3*/] = { 0.273f, 0.716f, 0.763f };
					Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
					break;
				
				case 2:
					iLocal_165[iParam0] = joaat("v_res_mcofcup");
					iLocal_177[iParam0] = -1;
					Local_189[iParam0 /*3*/] = { -0.195f, -0.535f, 0.732f };
					Local_221[iParam0 /*3*/] = { 0f, 0f, 33f };
					break;
			}
			break;
		
		case 3:
			switch (iVar0)
			{
				case 0:
					iLocal_165[iParam0] = joaat("prop_laptop_jimmy");
					iLocal_177[iParam0] = -1;
					Local_189[iParam0 /*3*/] = { 0.789f, -0.13f, 0.709f };
					Local_221[iParam0 /*3*/] = { 180f, 180f, 0f };
					break;
				
				case 1:
					iLocal_165[iParam0] = joaat("v_res_tt_pizzaplate");
					iLocal_177[iParam0] = -1;
					Local_189[iParam0 /*3*/] = { 0.273f, 0.716f, 0.763f };
					Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
					break;
				
				case 2:
					iLocal_165[iParam0] = joaat("prop_pizza_box_01");
					iLocal_177[iParam0] = -1;
					Local_189[iParam0 /*3*/] = { 0.3f, -0.463f, 0.732f };
					Local_221[iParam0 /*3*/] = { 0f, 0f, 156f };
					break;
			}
			break;
		
		case 16:
			iLocal_171[iParam0] = joaat("prop_bong_01");
			iLocal_183[iParam0] = 28422;
			Local_205[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_237[iParam0 /*3*/] = { 0f, 0f, 0f };
			iLocal_165[iParam0] = joaat("p_cs_lighter_01");
			iLocal_177[iParam0] = 60309;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 5:
		case 21:
			iLocal_165[iParam0] = joaat("prop_controller_01");
			iLocal_177[iParam0] = 28422;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			iLocal_171[iParam0] = joaat("prop_headset_01");
			iLocal_183[iParam0] = 60309;
			Local_205[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_237[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 37:
			iLocal_103[iParam0] = joaat("a_m_y_hipster_01");
			Local_109[iParam0 /*3*/] = { 0.55f, 0.4f, -0.9f };
			fLocal_125[iParam0] = 130f;
			break;
		
		case 29:
		case 30:
		case 44:
			iLocal_165[iParam0] = joaat("prop_npc_phone");
			iLocal_177[iParam0] = 60309;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 34:
			iLocal_165[iParam0] = joaat("prop_npc_phone");
			iLocal_177[iParam0] = 60309;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 45:
			iLocal_165[iParam0] = joaat("prop_cs_nail_file");
			iLocal_177[iParam0] = 60309;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 28:
			iLocal_171[iParam0] = joaat("prop_cs_beer_bot_01");
			iLocal_183[iParam0] = 28422;
			Local_205[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_237[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 50:
		case 69:
			iLocal_165[iParam0] = joaat("prop_yoga_mat_01");
			iLocal_177[iParam0] = -1;
			Local_189[iParam0 /*3*/] = { 0f, 0f, -1.022f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 90f };
			break;
		
		case 52:
		case 67:
			iLocal_165[iParam0] = joaat("prop_cs_shopping_bag");
			iLocal_177[iParam0] = 60309;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			iLocal_171[iParam0] = joaat("prop_cs_shopping_bag");
			iLocal_183[iParam0] = 28422;
			Local_205[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_237[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 74:
			switch (iVar0)
			{
				case 0:
				case 1:
					iLocal_165[iParam0] = joaat("prop_cs_shopping_bag");
					iLocal_177[iParam0] = 60309;
					Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
					Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
					iLocal_171[iParam0] = joaat("prop_cs_shopping_bag");
					iLocal_183[iParam0] = 28422;
					Local_205[iParam0 /*3*/] = { 0f, 0f, 0f };
					Local_237[iParam0 /*3*/] = { 0f, 0f, 0f };
					break;
				
				case 2:
					iLocal_165[iParam0] = joaat("prop_cs_shopping_bag");
					iLocal_177[iParam0] = 60309;
					Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
					Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
					iLocal_171[iParam0] = joaat("prop_cs_shopping_bag");
					iLocal_183[iParam0] = 28422;
					Local_205[iParam0 /*3*/] = { 0f, 0f, 0f };
					Local_237[iParam0 /*3*/] = { 0f, 0f, 0f };
					break;
			}
			break;
		
		case 53:
			iLocal_165[iParam0] = joaat("p_tumbler_01_s");
			iLocal_177[iParam0] = 28422;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			iLocal_171[iParam0] = joaat("p_whiskey_bottle_s");
			iLocal_183[iParam0] = 60309;
			Local_205[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_237[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 59:
		case 72:
		case 60:
			iLocal_165[iParam0] = joaat("prop_npc_phone");
			iLocal_177[iParam0] = 28422;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 64:
		case 55:
		case 71:
			iLocal_165[iParam0] = joaat("prop_wine_glass");
			iLocal_177[iParam0] = 60309;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			iLocal_171[iParam0] = joaat("prop_wine_bot_01");
			iLocal_183[iParam0] = -1;
			if (Global_85373[iVar0] == 64)
			{
				Local_205[iParam0 /*3*/] = { Vector(-0.639f, -0.222f, -0.713f) - Vector(0.03f, 0f, 0f) };
				Local_237[iParam0 /*3*/] = { 0f, -90f, -117.599f };
			}
			else
			{
				Local_205[iParam0 /*3*/] = { Vector(-0.456f, 0.741f, -0.047f) - Vector(0.03f, 0f, 0f) };
				Local_237[iParam0 /*3*/] = { 0f, -90f, -81.599f };
			}
			break;
		
		case 61:
		case 63:
			iLocal_165[iParam0] = joaat("prop_cs_dildo_01");
			iLocal_177[iParam0] = -1;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 73:
			iLocal_165[iParam0] = joaat("p_w_grass_gls_s");
			iLocal_177[iParam0] = -1;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 76:
		case 77:
		case 78:
		case 85:
		case 47:
			switch (iVar0)
			{
				case 3:
					iLocal_165[iParam0] = joaat("prop_scourer_01");
					iLocal_177[iParam0] = 28422;
					Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
					Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
					if (Global_85373[iVar0] != 77 && Global_85373[iVar0] != 47)
					{
						iLocal_171[iParam0] = joaat("prop_blox_spray");
						iLocal_183[iParam0] = 60309;
						Local_205[iParam0 /*3*/] = { 0f, 0f, 0f };
						Local_237[iParam0 /*3*/] = { 0f, 0f, 0f };
					}
					break;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
		case 86:
		case 80:
			switch (iVar0)
			{
				case 3:
					iLocal_165[iParam0] = joaat("prop_scourer_01");
					iLocal_177[iParam0] = 28422;
					Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
					Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
					break;
			}
			break;
		
		case 81:
			switch (iVar0)
			{
				case 3:
					iLocal_165[iParam0] = joaat("v_res_tt_plate01");
					iLocal_177[iParam0] = 60309;
					Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
					Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
					iLocal_171[iParam0] = joaat("prop_scourer_01");
					iLocal_183[iParam0] = 28422;
					Local_205[iParam0 /*3*/] = { 0f, 0f, 0f };
					Local_237[iParam0 /*3*/] = { 0f, 0f, 0f };
					iLocal_254 = joaat("prop_cs_sink_filler");
					iLocal_255 = -1;
					Local_256 = { 0.571f, 0.218f, 0f };
					Local_259 = { 0f, 0f, -75f };
					break;
			}
			break;
		
		case 82:
		case 83:
			iLocal_165[iParam0] = joaat("prop_cs_fork");
			iLocal_177[iParam0] = 28422;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 89:
			iLocal_165[iParam0] = joaat("prop_poolskimmer");
			iLocal_177[iParam0] = 28422;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 90:
			iLocal_165[iParam0] = joaat("prop_lawnmower_01");
			iLocal_177[iParam0] = -1;
			Local_189[iParam0 /*3*/] = { IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-1, 1)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-1, 1)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-1, 1)) };
			Local_221[iParam0 /*3*/] = { 0f, 0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-180, 180)) };
			break;
		
		case 91:
			iLocal_165[iParam0] = joaat("prop_wateringcan");
			iLocal_177[iParam0] = -1;
			Local_189[iParam0 /*3*/] = { -0.237f, 0.636f, 0.168f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		case 93:
			iLocal_165[iParam0] = joaat("p_amb_joint_01");
			iLocal_177[iParam0] = 28422;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
		
		default:
			iLocal_103[iParam0] = 0;
			Local_109[iParam0 /*3*/] = { 0f, 0f, 0f };
			fLocal_125[iParam0] = 0f;
			iLocal_165[iParam0] = 0;
			iLocal_177[iParam0] = -1;
			Local_189[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_221[iParam0 /*3*/] = { 0f, 0f, 0f };
			iLocal_171[iParam0] = 0;
			iLocal_183[iParam0] = -1;
			Local_205[iParam0 /*3*/] = { 0f, 0f, 0f };
			Local_237[iParam0 /*3*/] = { 0f, 0f, 0f };
			break;
	}
	Local_266 = { 15.9154f, 4.45155f, 2.06741f };
	Local_269 = { 0f, 0f, -21.8314f };
}

int func_576(int iParam0)//Position - 0x6A04B
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar22;
	
	iVar0 = 0;
	Var1 = { 0f, 0f, 0f };
	iVar4 = 225;
	iVar5 = 825812850;
	StringCopy(&cVar6, "", 64);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		GlobalFunc_2984(0, &iVar0, &Var1, &iVar4, &iVar5, &cVar6, &iVar22);
	}
	else if (iParam0 == 1)
	{
		GlobalFunc_2984(1, &iVar0, &Var1, &iVar4, &iVar5, &cVar6, &iVar22);
	}
	else
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[iParam0]))
	{
		ENTITY::REMOVE_MODEL_HIDE(Var1, 1.5f, iVar0, 0);
		OBJECT::DELETE_OBJECT(&(uLocal_147[iParam0]));
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar5))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar5, 4, 1, 1);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar5, 0f, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_141[iParam0]))
	{
		OBJECT::DELETE_OBJECT(&(uLocal_141[iParam0]));
	}
	return 1;
}

int func_577(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, var uParam5, char* sParam6, char* sParam7, var uParam8, bool bParam9)//Position - 0x6A104
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	int iVar22;
	float fVar23;
	bool bVar24;
	float fVar25;
	
	iVar0 = 0;
	Var1 = { 0f, 0f, 0f };
	iVar4 = 225;
	iVar5 = 825812850;
	iVar22 = 0;
	GlobalFunc_2984(iParam3, &iVar0, &Var1, &iVar4, &iVar5, &cVar6, &iVar22);
	if (iVar0 != 0)
	{
	}
	else
	{
		return 0;
	}
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8))
	{
		return 0;
	}
	else if (PED::IS_SYNCHRONIZED_SCENE_LOOPED(*uParam8))
	{
	}
	else if (!bParam9)
	{
	}
	else
	{
		fVar23 = 0.95f;
		if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam8))
		{
			fVar23 = 1f;
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam8) >= fVar23)
		{
			bVar24 = false;
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				OBJECT::DELETE_OBJECT(uParam1);
				bVar24 = true;
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				ENTITY::REMOVE_MODEL_HIDE(Var1, 1.5f, iVar0, 0);
				OBJECT::DELETE_OBJECT(uParam0);
				bVar24 = true;
			}
			if (bVar24)
			{
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar5))
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar5, 4, 1, 1);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar5, 0f, 1, 1);
				}
			}
			return 0;
		}
	}
	fVar25 = 999f;
	switch (iParam3)
	{
		case 0:
			fVar25 = 300f;
			break;
		
		case 1:
			fVar25 = 210f;
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Var1, 10f, iVar0, 0))
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(iVar5, iVar0, Var1, 1, 1, 0);
				return 0;
			}
		}
		else
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			STREAMING::REQUEST_MODEL(iVar0);
			return 0;
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar5))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar5, 5, 1, 1);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar5, 0.1f, 1, 1);
		}
		ENTITY::CREATE_MODEL_HIDE(Var1, 1.5f, iVar0, 0);
		*uParam0 = OBJECT::CREATE_OBJECT(iVar0, Var1, 1, 1, 0);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(*uParam0, 0);
		func_69(*uParam0, iParam2);
		if (bParam9)
		{
			if (fVar25 < 360f)
			{
				*uParam1 = OBJECT::CREATE_OBJECT(iVar0, Var1 + Vector(-1f, 0f, 0f), 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(*uParam1, 0f, 0f, fVar25, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(*uParam1, 1);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(*uParam1, 0);
				func_69(*uParam0, iParam2);
				ENTITY::SET_ENTITY_ALPHA(*uParam1, 5, 0);
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		func_663(uParam0, sParam4, uParam5, sParam6, sParam7, uParam8, 12);
		SYSTEM::WAIT(0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar5, 0f, 1, 1);
	}
	if (func_663(uParam0, sParam4, uParam5, sParam6, sParam7, uParam8, 12))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar5))
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar5, 5, 1, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar5, 1f, 1, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_578(int iParam0)//Position - 0x6A37E
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 936589729) != 1)
	{
		TASK::TASK_USE_MOBILE_PHONE(iParam0, 1, 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
		PED::SET_PED_CONFIG_FLAG(iParam0, 185, 1);
		PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
		return 1;
	}
	return 1;
}

int func_579(var uParam0, char* sParam1, struct<3> Param2)//Position - 0x6A3C2
{
	switch (*uParam0)
	{
		case 0:
			if (AUDIO::LOAD_STREAM(sParam1, 0))
			{
				if (MISC::ARE_STRINGS_EQUAL(sParam1, "AFT_SON_PORN"))
				{
					AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 1);
				}
				AUDIO::PLAY_STREAM_FROM_POSITION(Param2);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_580(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, float fParam8, var uParam9, var uParam10, var uParam11, int iParam12, char* sParam13, char* sParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, int iParam20)//Position - 0x6A41A
{
	char* sVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	char cVar12[64];
	char cVar28[64];
	char cVar44[64];
	char cVar60[64];
	char cVar76[64];
	int iVar92;
	int iVar93;
	bool bVar94;
	int iVar95;
	var uVar96;
	int iVar97;
	struct<3> Var98;
	float fVar101;
	char cVar102[16];
	int iVar106;
	float fVar107;
	struct<16> Var108;
	struct<16> Var124;
	int iVar140;
	int iVar141;
	float fVar142;
	float fVar143;
	int iVar144;
	int iVar145;
	float fVar146;
	
	if (!GlobalFunc_747(iParam4, GlobalFunc_2962(iParam0)))
	{
		return 0;
	}
	if (*uParam9 == -1)
	{
		return 0;
	}
	sVar0 = 0;
	iVar1 = -1;
	Var2 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	StringCopy(&cVar12, "", 64);
	StringCopy(&cVar28, "", 64);
	StringCopy(&cVar44, "", 64);
	StringCopy(&cVar60, "", 64);
	StringCopy(&cVar76, "", 64);
	iVar92 = -99;
	iVar93 = -1;
	switch (iParam3)
	{
		case 28:
			sVar0 = "PAY_M_DAUG";
			iVar1 = 50;
			Var5 = { 0f, 0f, -0.75f };
			StringCopy(&cVar12, "TIMETABLE@TRACY@IG_14@", 64);
			StringCopy(&cVar28, "IG_14_IWishAll_A_PLAYER", 64);
			StringCopy(&cVar44, "IG_14_IWishAll_A_TRACY", 64);
			StringCopy(&cVar60, "IG_14_IWishAll_A_NOTE", 64);
			StringCopy(&cVar76, "IG_14_IWishAll_A_CAM", 64);
			Var8 = { 0f, 0f, 0f };
			fVar11 = 0f;
			iVar93 = 99;
			iVar92 = 20;
			break;
		
		case 8:
			sVar0 = "PAY_M_SON";
			iVar1 = 0;
			Var5 = { 0f, 6f, 0f };
			StringCopy(&cVar12, "TIMETABLE@JIMMY@DOORKNOCK@", 64);
			StringCopy(&cVar28, "KNOCKDOOR_IDLE", 64);
			StringCopy(&cVar44, "", 64);
			StringCopy(&cVar60, "", 64);
			StringCopy(&cVar76, "KNOCKDOOR_IDLE_CAM", 64);
			Var8 = { 0.501f, 6.602f, 0f };
			fVar11 = 242.1f;
			iVar93 = -1;
			iVar92 = 20;
			break;
		
		default:
			return 0;
			break;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var2 + Var5, 2f, 2f, 1f, 0, 1, 1) && !GlobalFunc_116(0))
	{
		STREAMING::REQUEST_ANIM_DICT(&cVar12);
		if (iParam20 != 0)
		{
			STREAMING::REQUEST_MODEL(iParam20);
		}
		if (iVar1 > 0)
		{
			if (GlobalFunc_469(iParam0) < iVar1)
			{
				if (*iParam12 != -1)
				{
					GlobalFunc_5084(iParam12);
					func_614(sVar0, iVar1, 1);
				}
				return 0;
			}
		}
		bVar94 = true;
		if (iParam20 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(iParam20))
			{
				bVar94 = false;
			}
		}
		if ((!STREAMING::HAS_ANIM_DICT_LOADED(&cVar12) || !GlobalFunc_5946(sParam13, 7)) || !bVar94)
		{
			return 0;
		}
		if (*iParam12 == -1)
		{
			GlobalFunc_6774(iParam12, 3, sVar0, 1, 0);
		}
		else if (func_612(*iParam12))
		{
			if (!GlobalFunc_2990(sVar0, iVar1))
			{
				GlobalFunc_2989(sVar0, iVar1);
			}
		}
		if (!GlobalFunc_5079(*iParam12, 1))
		{
			return 0;
		}
		else
		{
			GlobalFunc_4956();
			*uParam9 = 0;
			while ((*uParam9 > -1 && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PED::IS_PED_INJURED(iParam1))
			{
				switch (*uParam9)
				{
					case 0:
						if (*iParam12 != -1)
						{
							GlobalFunc_5084(iParam12);
						}
						if (GlobalFunc_2990(sVar0, iVar1))
						{
							HUD::CLEAR_HELP(1);
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam16))
						{
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam16, 1);
						}
						STREAMING::REQUEST_ANIM_DICT(&cVar12);
						if (iParam20 != 0)
						{
							STREAMING::REQUEST_MODEL(iParam20);
						}
						GlobalFunc_4935();
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						HUD::DISPLAY_RADAR(0);
						*uParam9 = 1;
						break;
					
					case 1:
						iVar97 = 1;
						if (iParam20 != 0)
						{
							if (!STREAMING::HAS_MODEL_LOADED(iParam20))
							{
								iVar97 = 0;
							}
						}
						if (STREAMING::HAS_ANIM_DICT_LOADED(&cVar12) && iVar97)
						{
							*uParam9 = iVar92;
						}
						break;
					
					case 2:
						if (func_425(sParam13, sParam14, uParam17, iParam19, uParam15, 0))
						{
							GlobalFunc_6715(uParam18);
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), &cVar12, &cVar28, 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(iParam1, &cVar12, &cVar44, 8f, -8f, -1, 0, 0, 0, 0, 0);
							*uParam9 = 3;
						}
						break;
					
					case 3:
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cVar12, &cVar28, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, &cVar12, &cVar44, 3))
						{
							*uParam9 = -1;
						}
						break;
					
					case 20:
						if (!func_425(sParam13, sParam14, uParam17, iParam19, uParam15, 0))
						{
						}
						else
						{
							Var98 = { 0f, 0f, 0f };
							fVar101 = 0f;
							if (GlobalFunc_5940(iParam2, iParam3, &Var98, &fVar101))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam16))
								{
									PED::DETACH_SYNCHRONIZED_SCENE(*uParam16);
								}
								*uParam16 = -1;
								if (iVar93 == 99)
								{
									MemCopy(&cVar102, {Global_15311}, 4);
									StringConCat(&cVar102, "A", 16);
									iVar106 = AUDIO::_0xAA19F5572C38B564(&cVar102);
									if (iVar106 < 0)
									{
										iVar106 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
									}
									switch (iVar106)
									{
										case 0:
										case 1:
											StringCopy(&cVar28, "IG_14_IWishAll_A_PLAYER", 64);
											StringCopy(&cVar44, "IG_14_IWishAll_A_TRACY", 64);
											StringCopy(&cVar60, "IG_14_IWishAll_A_NOTE", 64);
											StringCopy(&cVar76, "IG_14_IWishAll_A_CAM", 64);
											break;
										
										case 2:
										case 3:
											StringCopy(&cVar28, "IG_14_IWishAll_B_PLAYER", 64);
											StringCopy(&cVar44, "IG_14_IWishAll_B_TRACY", 64);
											StringCopy(&cVar60, "IG_14_IWishAll_B_NOTE", 64);
											StringCopy(&cVar76, "IG_14_IWishAll_B_CAM", 64);
											break;
										
										case 4:
										case 5:
											StringCopy(&cVar28, "IG_14_ParentingAtItsFinest_PLAYER", 64);
											StringCopy(&cVar44, "IG_14_ParentingAtItsFinest_TRACY", 64);
											StringCopy(&cVar60, "IG_14_ParentingAtItsFinest_NOTE", 64);
											StringCopy(&cVar76, "IG_14_ParentingAtItsFinest_CAM", 64);
											break;
										}
								}
								*uParam16 = PED::CREATE_SYNCHRONIZED_SCENE(Param5 + Var98 + Var8, 0f, 0f, ((fParam8 + fVar101) + fVar11), 2);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam16, 0);
								PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam16, 1);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar28))
								{
									TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), *uParam16, &cVar12, &cVar28, 1000f, -4f, 0, 16, 1000f, 0);
								}
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar44))
								{
									TASK::TASK_SYNCHRONIZED_SCENE(iParam1, *uParam16, &cVar12, &cVar44, 1000f, -1000f, 0, 16, 1000f, 0);
								}
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar60))
								{
									iVar95 = OBJECT::CREATE_OBJECT(iParam20, Param5 + Var98, 1, 1, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iVar95, *uParam16, &cVar60, &cVar12, 1000f, 8f, 0, 1000f);
								}
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar76))
								{
									uVar96 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uVar96, *uParam16, &cVar76, &cVar12);
									CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
								}
								GlobalFunc_6715(uParam18);
								*uParam9 = 30;
							}
						}
						break;
					
					case 30:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam16))
						{
							fVar107 = PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam16);
							if (fVar107 >= 0.95f)
							{
								*uParam9 = 40;
							}
						}
						else
						{
							*uParam9 = 40;
						}
						break;
					
					case 40:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam16))
						{
						}
						StringCopy(&Var108, "", 64);
						StringCopy(&Var124, "", 64);
						iVar140 = 0;
						iVar141 = 0;
						fVar142 = 1000f;
						fVar143 = -8f;
						iVar144 = 1;
						iVar145 = 16;
						fVar146 = 1000f;
						if (func_542(iParam2, iParam3, &Var108, &Var124, &iVar140, &iVar141))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar44))
							{
								if (GlobalFunc_2951(iVar145, 1))
								{
									PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam1, 8208);
									PED::SET_PED_CAN_EVASIVE_DIVE(iParam1, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, 1);
								}
								PED::SET_SYNCHRONIZED_SCENE_PHASE(*uParam16, 0f);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam16, 1);
								PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam16, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(iParam1, *uParam16, &Var108, &Var124, fVar142, fVar143, iVar144, iVar145, fVar146, 0);
								PED::SET_FORCE_FOOTSTEP_UPDATE(iParam1, 1);
								*uParam10 = { Var108 };
								*uParam11 = { Var124 };
							}
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 0);
							*uParam9 = -1;
						}
						break;
					
					default:
						break;
				}
				SYSTEM::WAIT(0);
			}
			if (iParam20 != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam20);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar95))
			{
				OBJECT::DELETE_OBJECT(&iVar95);
			}
			if (CAM::DOES_CAM_EXIST(uVar96))
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
				CAM::DESTROY_CAM(uVar96, 0);
			}
			if (!PED::IS_PED_INJURED(iParam1) && iVar1 > 0)
			{
				GlobalFunc_10871(iParam0, 32, iVar1);
			}
			HUD::DISPLAY_RADAR(1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			GlobalFunc_6715(uParam18);
			if (PED::IS_PED_INJURED(iParam1))
			{
				return 0;
			}
		}
		return 1;
	}
	else
	{
		if (*iParam12 != -1)
		{
			GlobalFunc_5084(iParam12);
			if (GlobalFunc_2990(sVar0, iVar1))
			{
				HUD::CLEAR_HELP(1);
			}
		}
		if (iParam20 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam20);
		}
	}
	return 0;
}
































int func_612(int iParam0)//Position - 0x6BBB5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = GlobalFunc_465(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar3 = -1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (Global_35613[iVar1 /*18*/])
		{
			if (Global_35613[iVar1 /*18*/].f_2 > iVar2)
			{
				iVar3 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar3 == iVar0)
	{
		return 1;
	}
	return 0;
}


void func_614(char* sParam0, int iParam1, int iParam2)//Position - 0x6BD27
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_96008)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_96008[iVar0 /*28*/]), sParam0) || func_616(iVar0, sParam0, iParam1))
		{
			HUD::CLEAR_FLOATING_HELP(iVar0, iParam2);
			GlobalFunc_1452(iVar0);
		}
		iVar0++;
	}
}


var func_616(int iParam0, char* sParam1, int iParam2)//Position - 0x6BDE0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}




int func_620(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, struct<3> Param6, float fParam9, struct<3> Param10, int iParam13, int iParam14, char* sParam15, char* sParam16, var uParam17, var uParam18, var uParam19)//Position - 0x6BF05
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	iVar0 = 4;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		iParam3 = iParam3;
		*uParam5 = 0;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
		{
			iVar1 = -1;
			fVar2 = 1f;
			iVar3 = 1;
			iVar4 = -1;
			switch (*uParam5)
			{
				case 0:
					if (!func_622(iParam0, iParam1, iParam4, *uParam2, iParam13, Param6, fParam9, -1))
					{
						return 0;
					}
					fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 0), Param10);
					if (!PED::IS_PED_SITTING_IN_VEHICLE(iParam0, *uParam2))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
						{
							PED::SET_PED_INTO_VEHICLE(iParam0, *uParam2, iVar1);
							return 0;
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iParam0, *uParam2, iVar4, iVar1, fVar2, iVar3, 0);
						}
					}
					else
					{
						if (iParam13 != 27)
						{
							if (!GlobalFunc_580(iParam13, iParam0))
							{
								GlobalFunc_5125(iParam13, iParam0);
							}
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1817882002) != 1)
						{
							fVar6 = 7.5f;
							iVar7 = 786599;
							iVar8 = 0;
							fVar9 = 3f;
							fVar10 = -1f;
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam0, *uParam2, Param10, fVar6, iVar8, 0, iVar7, fVar9, fVar10);
						}
					}
					if (fVar5 <= 25f)
					{
						TASK::TASK_LEAVE_VEHICLE(iParam0, *uParam2, 0);
						*uParam5 = 1;
					}
					break;
				
				case 1:
					if (func_425(sParam15, sParam16, uParam18, iVar0, uParam17, 0))
					{
						GlobalFunc_6715(uParam19);
						GlobalFunc_7241(iParam1, iParam14);
						return 1;
					}
					break;
				
				default:
					break;
			}
		}
		else
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 923520851) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1146898486) != 1)
			{
				TASK::TASK_WANDER_STANDARD(iParam0, 1193033728, 0);
			}
			return 0;
		}
		return 1;
	}
	return 0;
}


int func_622(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9)//Position - 0x6C155
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	float fVar18;
	struct<3> Var19;
	struct<3> Var22;
	struct<3> Var25;
	struct<3> Var28;
	struct<3> Var31;
	float fVar34;
	float fVar35;
	float fVar36;
	
	if (!MISC::IS_BIT_SET(Global_34036[iParam4 /*31*/].f_1, 6))
	{
		GlobalFunc_2447(iParam4, 1);
		MISC::CLEAR_BIT(&(Global_34036[iParam4 /*31*/].f_1), 4);
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470) == 1)
	{
		return 1;
	}
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam3, iParam9))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam3, iParam9) != iParam0)
		{
			return 0;
		}
	}
	if (iParam1 == 2)
	{
		if (GlobalFunc_5940(iParam1, iParam2, &Var0, &fVar3))
		{
			Var4 = { Param5 + Var0 };
			Var7 = { 0f, 0f, 0f };
			Var10 = { 12f, 12f, 2f };
			fVar13 = (fParam8 + fVar3);
			fVar14 = 9f;
			if (iParam2 == 51)
			{
				Var7 = { -0.4f, -2.7f, 0.5f };
				Var10 = { Vector(2f, 5f, 3f) + Vector(0f, 0.5f, 0.5f) };
				fVar14 = 80f;
			}
			if (!GlobalFunc_2978(PLAYER::PLAYER_PED_ID(), Var4 + Var7, Var10, (fVar13 + fVar14), 0, 1, 0))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam1 == 6 || iParam1 == 7)
	{
		return 1;
	}
	if (iParam2 == 23)
	{
		if (GlobalFunc_5940(iParam1, iParam2, &Var15, &fVar18))
		{
			Var19 = { Param5 + Var15 };
			Var22 = { 30f, 25f, 6.9f };
			Var25 = { 5f, 0f, 0f };
			Var28 = { 24f, 30f, 10f };
			Var31 = { 45f, 36f, 0f };
			fVar34 = (fParam8 + fVar18);
			fVar35 = 6f;
			if (GlobalFunc_2978(PLAYER::PLAYER_PED_ID(), Var19 + Var22, Var28, (fVar34 + fVar35), 0, 1, 0) || GlobalFunc_2978(PLAYER::PLAYER_PED_ID(), Var19 + Var25, Var31, (fVar34 + fVar35), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
	{
		return 0;
	}
	fVar36 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1));
	if (fVar36 > (15f * 15f))
	{
		return 0;
	}
	return 1;
}

int func_623(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, struct<3> Param6, float fParam9, var uParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, var uParam15, float fParam16, var uParam17, var uParam18, char* sParam19, var uParam20, int iParam21)//Position - 0x6C363
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	char cVar21[64];
	char cVar37[64];
	var uVar53;
	var uVar54;
	char* sVar55;
	char[] cVar71[8];
	struct<3> Var87;
	float fVar90;
	float fVar91;
	float fVar92;
	char* sVar93;
	char* sVar94;
	float fVar95;
	int iVar96;
	struct<3> Var97;
	struct<3> Var100;
	char* sVar103;
	int iVar111;
	float fVar112;
	float fVar113;
	int iVar114;
	bool bVar115;
	char* sVar116;
	
	iVar0 = 4;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		*uParam5 = 0;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iParam0, *uParam2))
			{
				iVar1 = -1;
				fVar2 = 1f;
				iVar3 = 1;
				iVar4 = -1;
				StringCopy(&Var5, "", 64);
				StringCopy(&cVar21, "", 64);
				StringCopy(&cVar37, "", 64);
				switch (*uParam5)
				{
					case 0:
						if (!func_622(iParam0, iParam1, iParam4, *uParam2, iParam11, Param6, fParam9, iVar1))
						{
							if (iParam4 == 51)
							{
								if (func_563(iParam0, iParam1, iParam4, Param6, fParam9, uParam10, 1, 0, &sVar55, &cVar71, 1090519040, -1056964608))
								{
								}
							}
							else if (func_578(iParam0))
							{
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iParam0);
							GlobalFunc_2447(iParam11, 1);
							MISC::CLEAR_BIT(&(Global_34036[iParam11 /*31*/].f_1), 4);
							if (iParam4 == 51)
							{
								*uParam5 = 2;
							}
							else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
							{
								if (func_425(sParam12, sParam13, uParam17, iVar0, uParam15, 0))
								{
									VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam2), 3);
									*uParam5 = 3;
								}
							}
							else
							{
								VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam2), 3);
								*uParam5 = 3;
							}
						}
						break;
					
					case 2:
						if (func_542(iParam1, iParam4, &Var5, &cVar21, &uVar53, &uVar54))
						{
							STREAMING::REQUEST_ANIM_DICT(&Var5);
							if (STREAMING::HAS_ANIM_DICT_LOADED(&Var5))
							{
								if (func_425(sParam12, sParam13, uParam17, iVar0, uParam15, 0))
								{
									if (iParam4 != 51)
									{
										StringCopy(&cVar37, "exit", 64);
									}
									else
									{
										StringCopy(&cVar37, "exit_demo", 64);
									}
									if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam10))
									{
										Var87 = { 0f, 0f, 0f };
										fVar90 = 0f;
										if (GlobalFunc_5940(iParam1, iParam4, &Var87, &fVar90))
										{
											*uParam10 = PED::CREATE_SYNCHRONIZED_SCENE(Param6 + Var87, 0f, 0f, (fParam9 + fVar90), 2);
										}
									}
									PED::SET_SYNCHRONIZED_SCENE_PHASE(*uParam10, 0f);
									TASK::TASK_SYNCHRONIZED_SCENE(iParam0, *uParam10, &Var5, &cVar37, 8f, -4f, 3, 0, 1000f, 0);
									PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
									GlobalFunc_6715(uParam18);
									*uParam5 = 4;
								}
							}
						}
						break;
					
					case 4:
						if (MISC::IS_STRING_NULL_OR_EMPTY(sParam14))
						{
							*uParam5 = 5;
							return 1;
						}
						if (fParam16 <= 0f)
						{
							*uParam5 = 5;
							return 1;
						}
						if (func_542(iParam1, iParam4, &Var5, &cVar21, &uVar53, &uVar54))
						{
							if (iParam4 != 51)
							{
								StringCopy(&cVar37, "exit", 64);
							}
							else
							{
								StringCopy(&cVar37, "exit_demo", 64);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 3))
							{
								if (func_425(sParam12, sParam14, uParam17, iVar0, uParam15, "face"))
								{
									*uParam5 = 6;
								}
							}
						}
						break;
					
					case 6:
						if (MISC::IS_STRING_NULL_OR_EMPTY(sParam14))
						{
							*uParam5 = 5;
							return 1;
						}
						if (fParam16 <= 0f)
						{
							*uParam5 = 5;
							return 1;
						}
						if (func_542(iParam1, iParam4, &Var5, &cVar21, &uVar53, &uVar54))
						{
							if (iParam4 != 51)
							{
								StringCopy(&cVar37, "exit", 64);
							}
							else
							{
								StringCopy(&cVar37, "exit_demo", 64);
							}
							fVar91 = -1f;
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 1))
							{
								fVar91 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, &Var5, &cVar37);
							}
							else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 2))
							{
								fVar91 = PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam10);
							}
							else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 3))
							{
								fVar91 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, &Var5, &cVar37);
							}
							if (fVar91 >= 0f)
							{
								if (fVar91 >= fParam16)
								{
									GlobalFunc_619(0);
									GlobalFunc_6715(uParam18);
									*uParam5 = 5;
								}
							}
						}
						break;
					
					case 5:
						if (func_542(iParam1, iParam4, &Var5, &cVar21, &uVar53, &uVar54))
						{
							if (iParam4 != 51)
							{
								StringCopy(&cVar37, "exit", 64);
							}
							else
							{
								StringCopy(&cVar37, "exit_demo", 64);
							}
							fVar92 = -1f;
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 1))
							{
								fVar92 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, &Var5, &cVar37);
							}
							else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 2))
							{
								fVar92 = PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam10);
							}
							else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &Var5, &cVar37, 3))
							{
								fVar92 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, &Var5, &cVar37);
							}
							if (fVar92 >= 0f)
							{
								if (fVar92 >= 0.88f)
								{
									PED::FORCE_PED_MOTION_STATE(iParam0, -668482597, 0, 1, 0);
									TASK::CLEAR_PED_TASKS(iParam0);
									TASK::TASK_ENTER_VEHICLE(iParam0, *uParam2, iVar4, iVar1, fVar2, iVar3, 0);
									GlobalFunc_2447(iParam11, 1);
									MISC::CLEAR_BIT(&(Global_34036[iParam11 /*31*/].f_1), 4);
									VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam2), 3);
									*uParam5 = 3;
									return 1;
								}
							}
							else
							{
								PED::FORCE_PED_MOTION_STATE(iParam0, -668482597, 0, 1, 0);
								TASK::CLEAR_PED_TASKS(iParam0);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam2, iVar1))
								{
									TASK::TASK_ENTER_VEHICLE(iParam0, *uParam2, iVar4, iVar1, fVar2, iVar3, 0);
								}
								GlobalFunc_2447(iParam11, 1);
								MISC::CLEAR_BIT(&(Global_34036[iParam11 /*31*/].f_1), 4);
								VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(*uParam2), 3);
								*uParam5 = 3;
								return 1;
							}
						}
						break;
					
					case 3:
					case 33:
						if (!func_622(iParam0, iParam1, iParam4, *uParam2, iParam11, Param6, fParam9, iVar1))
						{
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam2, iVar1))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 923520851) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1146898486) != 1)
								{
									TASK::TASK_WANDER_STANDARD(iParam0, 1193033728, 0);
								}
								if (*uParam5 == 3)
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam19))
									{
										if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iParam0, 0)) < 5f && !(((AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) || AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)) || GlobalFunc_111()) || GlobalFunc_617()))
										{
											switch (iParam1)
											{
												case 2:
													sVar93 = "AMANDA_NORMAL";
													break;
												
												case 0:
													sVar93 = "JIMMY_NORMAL";
													break;
												
												case 1:
													sVar93 = "TRACY_NORMAL";
													break;
											}
											GlobalFunc_5653(iParam0, sParam19, sVar93, 24);
											*uParam5 = 33;
										}
									}
								}
								return 0;
							}
						}
						else
						{
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam2, iVar1))
							{
								if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam2, iVar1) != iParam0)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 923520851) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1146898486) != 1)
									{
										TASK::TASK_WANDER_STANDARD(iParam0, 1193033728, 0);
									}
								}
								if (*uParam5 == 3)
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam19))
									{
										if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iParam0, 0)) < 5f && !(((AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) || AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)) || GlobalFunc_111()) || GlobalFunc_617()))
										{
											switch (iParam1)
											{
												case 2:
													sVar94 = "AMANDA_NORMAL";
													break;
												
												case 0:
													sVar94 = "JIMMY_NORMAL";
													break;
												
												case 1:
													sVar94 = "TRACY_NORMAL";
													break;
											}
											GlobalFunc_5653(iParam0, sParam19, sVar94, 24);
											*uParam5 = 33;
										}
									}
								}
								return 0;
							}
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(*uParam2, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > 2500f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) != 1)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(*uParam2, 1), 1f, -1, 1048576000, 0, 1193033728);
								}
								return 0;
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470) != 1)
							{
								if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(ENTITY::GET_ENTITY_MODEL(*uParam2)))
								{
								}
								else
								{
									TASK::TASK_ENTER_VEHICLE(iParam0, *uParam2, iVar4, iVar1, fVar2, iVar3, 0);
								}
							}
							else if (PED::GET_PED_CONFIG_FLAG(iParam0, 104, 1))
							{
								PED::SET_PED_RESET_FLAG(iParam0, 60, 1);
							}
							if (!PED::IS_PED_INJURED(iParam21))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(iParam21, *uParam2))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iParam21, -1794415470) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(iParam21, *uParam2, iVar4, -2, fVar2, iVar3, 0);
									}
								}
							}
						}
						break;
					
					default:
						break;
				}
			}
			else
			{
				*uParam5 = 0;
				fVar95 = 20f;
				iVar96 = 786603;
				Var97 = { -825.7757f, 177.2016f, 71.9871f };
				Var100 = { -844.4757f, 156.9072f, 67.0048f };
				if (!func_624(iParam0, iParam3, Var97, Var100, &sVar103))
				{
					if (INTERIOR::IS_VALID_INTERIOR(*uParam20) && INTERIOR::IS_INTERIOR_READY(*uParam20))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(*uParam2))
						{
							ENTITY::SET_ENTITY_COORDS(*uParam2, Var97, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(*uParam2, MISC::GET_HEADING_FROM_VECTOR_2D((Var100.x - Var97.x), (Var100.f_1 - Var97.f_1)));
						}
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&sVar103))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1817882002) != 1)
						{
							iVar111 = 0;
							fVar112 = 3f;
							fVar113 = -1f;
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam0, *uParam2, Var100, (fVar95 * 0.5f), iVar111, 0, 786599, fVar112, fVar113);
							if (iParam11 != 27)
							{
								if (!GlobalFunc_580(iParam11, iParam0))
								{
									GlobalFunc_5125(iParam11, iParam0);
								}
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -235832601) != 1)
					{
						TASK::REQUEST_WAYPOINT_RECORDING(&sVar103);
						if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&sVar103))
						{
							if (iParam11 != 27)
							{
								GlobalFunc_2447(iParam11, 1);
								MISC::CLEAR_BIT(&(Global_34036[iParam11 /*31*/].f_1), 4);
								if (!GlobalFunc_580(iParam11, iParam0))
								{
									GlobalFunc_5125(iParam11, iParam0);
								}
								if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Global_34036[iParam11 /*31*/]) > -1f)
								{
									return 1;
								}
							}
							iVar114 = 0;
							if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -827.1387f, 176.3679f, 69.9464f) > 2.5f)
							{
								iVar114 = 8;
							}
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam0, *uParam2, &sVar103, iVar96, iVar114, 16, -1, -1082130432, 0, 1073741824);
						}
					}
				}
				else
				{
					bVar115 = false;
					if (!PED::IS_PED_INJURED(iParam21))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(iParam21, *uParam2))
						{
							bVar115 = true;
							if (TASK::GET_SCRIPT_TASK_STATUS(iParam21, -1794415470) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(iParam21, *uParam2, -1, -2, 1f, 1, 0);
							}
						}
					}
					if (PED::IS_PED_IN_VEHICLE(iParam0, *uParam2, 0))
					{
						if (bVar115)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -2118855366) != 1)
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(iParam0, *uParam2, 24, 500);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -258271821) != 1)
						{
							TASK::TASK_VEHICLE_DRIVE_WANDER(iParam0, *uParam2, fVar95, iVar96);
							if (iParam11 != 27)
							{
								if (!GlobalFunc_580(iParam11, iParam0))
								{
									GlobalFunc_5125(iParam11, iParam0);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam19))
			{
				switch (iParam1)
				{
					case 2:
						sVar116 = "AMANDA_NORMAL";
						break;
					
					case 0:
						sVar116 = "JIMMY_NORMAL";
						break;
					
					case 1:
						sVar116 = "TRACY_NORMAL";
						break;
				}
				GlobalFunc_5653(iParam0, sParam19, sVar116, 24);
			}
			*uParam5 = 0;
			GlobalFunc_7241(iParam1, 138);
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_624(int iParam0, int iParam1, struct<3> Param2, struct<3> Param5, char* sParam8)//Position - 0x6CD64
{
	float fVar0;
	float fVar1;
	
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -258271821) == 1)
	{
		return 1;
	}
	switch (iParam1)
	{
		case 2:
			fVar0 = SYSTEM::VMAG(Param5 - Param2);
			fVar1 = (fVar0 - 2f);
			if (SYSTEM::VDIST2(Param2, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > (fVar1 * fVar1))
			{
				return 1;
			}
			StringCopy(sParam8, "family_m_wife_drive", 32);
			return 0;
			break;
		
		case 1:
			fVar0 = SYSTEM::VMAG(Param5 - Param2);
			fVar1 = (fVar0 - 2f);
			if (SYSTEM::VDIST2(Param2, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > (fVar1 * fVar1))
			{
				return 1;
			}
			StringCopy(sParam8, "family_m_daughter_drive", 32);
			return 0;
			break;
	}
	return 1;
}


int func_626(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, float fParam7, float fParam8)//Position - 0x6CE2E
{
	char* sVar0;
	char[] cVar16[8];
	int iVar32;
	var uVar33;
	struct<3> Var34;
	float fVar37;
	int iVar38;
	
	if (func_542(iParam1, iParam2, &sVar0, &cVar16, &iVar32, &uVar33) && GlobalFunc_5940(iParam1, iParam2, &Var34, &fVar37))
	{
		STREAMING::REQUEST_ANIM_DICT(&sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
		{
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			return 0;
		}
		else
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &sVar0, &cVar16, 3))
			{
				GlobalFunc_2977(iParam1, iParam2, &iVar38);
				if (GlobalFunc_2951(iVar32, 262144))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8208);
					PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				}
				TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, &sVar0, &cVar16, Param3 + Var34, 0f, 0f, (fParam6 + fVar37), fParam7, fParam8, -1, iVar32, 0f, 2, iVar38);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
				return 1;
			}
			return 1;
		}
	}
	return 0;
}






void func_632(int iParam0, int iParam1)//Position - 0x6D0A5
{
	switch (iParam1)
	{
		case 33:
		case 32:
			if (GlobalFunc_2920(4))
			{
				if (!GlobalFunc_2799(4))
				{
					GlobalFunc_5649(4, 2, 7, 0, 0);
					GlobalFunc_2979(4, 1);
				}
				else if (!GlobalFunc_2202(5))
				{
					if (!GRAPHICS::_IS_TV_PLAYLIST_ITEM_PLAYING(-646850510))
					{
						GRAPHICS::SET_TV_CHANNEL_PLAYLIST(2, "PL_SP_WORKOUT", 0);
						GRAPHICS::SET_TV_CHANNEL(2);
					}
				}
			}
			else
			{
				return;
			}
			break;
		
		case 34:
		case 35:
		case 19:
		case 25:
		case 4:
		case 48:
		case 68:
			if (GlobalFunc_2920(4))
			{
				if (!GlobalFunc_2799(4))
				{
					GlobalFunc_5649(4, 0, 1, 0, 0);
					GlobalFunc_2979(4, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 5:
		case 21:
			if (GlobalFunc_2920(5))
			{
				if (!GlobalFunc_2799(5))
				{
					GlobalFunc_5649(5, 2, 5, 0, 0);
					GlobalFunc_2979(5, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 96:
		case 98:
			if (GlobalFunc_2920(0))
			{
				if (!GlobalFunc_2799(0))
				{
					GlobalFunc_5649(0, 0, 1, 0, 0);
					GlobalFunc_2979(0, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		default:
			iParam0 = iParam0;
			break;
	}
}






int func_638(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, var uParam7, var uParam8, char* sParam9, char* sParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, var uParam15, var uParam16, var uParam17, float fParam18, int iParam19)//Position - 0x6D2C1
{
	var uVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	struct<2> Var4;
	struct<2> Var8;
	var uVar12;
	int iVar13;
	int iVar14;
	char* sVar15;
	var uVar31;
	var uVar32;
	struct<3> Var33;
	float fVar36;
	char* sVar37;
	float fVar38;
	float fVar39;
	int iVar40;
	int iVar41;
	char* sVar42;
	char cVar58[64];
	var uVar74;
	var uVar75;
	float fVar76;
	float fVar77;
	
	switch (*uParam7)
	{
		case 0:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8))
			{
				if (GlobalFunc_5960(iParam0, iParam2, Param3, fParam6))
				{
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
					{
						func_563(iParam0, iParam1, iParam2, Param3, fParam6, uParam8, 1, 0, sParam9, sParam10, 1090519040, -1056964608);
						return 0;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam12) && MISC::IS_STRING_NULL_OR_EMPTY(sParam14))
					{
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam8, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam8, 1);
						*uParam7 = 1;
						return 0;
					}
					GlobalFunc_7223(iParam2, &uVar0, &uVar1, &uVar2);
					if (!GlobalFunc_747(uVar2, GlobalFunc_8310()))
					{
					}
					else if (GlobalFunc_747(uVar1, 64))
					{
						bVar3 = false;
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam14))
						{
							if (func_425(sParam12, sParam14, uParam16, iParam19, uParam15, 0))
							{
								GlobalFunc_6715(uParam17);
								bVar3 = true;
							}
						}
						else if (iParam2 == 129)
						{
							bVar3 = true;
						}
						if (fParam18 != 0f)
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam8, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam8, 1);
							*uParam7 = 1;
							return 0;
						}
					}
					else
					{
						StringCopy(&Var4, sParam14, 16);
						if (func_446(sParam12, &Var4, uParam15))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
							{
								if (func_425(sParam12, &Var4, uParam16, iParam19, uParam15, 0))
								{
									GlobalFunc_6715(uParam17);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam8, 0);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam8, 1);
									*uParam7 = 1;
									return 0;
								}
							}
						}
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_LOOPED(*uParam8))
				{
					*uParam7 = 1;
					return 0;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					if (!GlobalFunc_226(uParam17))
					{
						GlobalFunc_7731(uParam17);
					}
					StringCopy(&Var8, sParam13, 16);
					if (func_446(sParam12, &Var8, uParam15))
					{
						func_445(iParam0, iParam2, uParam16, sParam12, uParam15, uParam17, &uVar12, 10f, &Var8, 0);
					}
				}
			}
			iVar13 = 8f;
			iVar14 = -8f;
			if ((iParam2 == 132 || iParam2 == 133) || iParam2 == 134)
			{
				iVar13 = 8f;
				iVar14 = -4f;
			}
			if (!func_563(iParam0, iParam1, iParam2, Param3, fParam6, uParam8, 1, 0, sParam9, sParam10, iVar13, iVar14))
			{
				return 0;
			}
			break;
		
		case 1:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
			{
				func_542(iParam1, iParam2, sParam9, &sVar15, &uVar31, &uVar32);
				STREAMING::REQUEST_ANIM_DICT(sParam9);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(sParam9))
				{
					return 0;
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8))
			{
				Var33 = { 0f, 0f, 0f };
				fVar36 = 0f;
				if (GlobalFunc_5940(iParam1, iParam2, &Var33, &fVar36))
				{
					*uParam8 = PED::CREATE_SYNCHRONIZED_SCENE(Param3 + Var33, 0f, 0f, (fParam6 + fVar36), 2);
				}
			}
			sVar37 = GlobalFunc_7243(iParam0, iParam1, iParam2);
			fVar38 = 8f;
			fVar39 = -1.5f;
			iVar40 = 1;
			iVar41 = 16;
			if (iParam2 == 47)
			{
				fVar38 = 1000f;
			}
			if ((iParam2 == 132 || iParam2 == 133) || iParam2 == 134)
			{
				fVar38 = 4f;
			}
			if (iParam11 == 141)
			{
				iVar40 |= 2;
			}
			else if (((((iParam2 == 132 || iParam2 == 133) || iParam2 == 134) || iParam2 == 73) || iParam2 == 120) || iParam2 == 129)
			{
				fVar39 = -1.5f;
			}
			else
			{
				fVar39 = -1000f;
			}
			if (iParam2 == 56)
			{
				if (iParam1 == 2)
				{
					fVar39 = -1.5f;
				}
			}
			else if (iParam2 == 57)
			{
				if (iParam1 == 2)
				{
					fVar39 = -1.5f;
				}
			}
			else if (iParam2 == 58)
			{
				if (iParam1 == 2)
				{
					fVar39 = -1.5f;
				}
			}
			TASK::TASK_SYNCHRONIZED_SCENE(iParam0, *uParam8, sParam9, sVar37, fVar38, fVar39, iVar40, iVar41, 1000f, 0);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
			PED::SET_SYNCHRONIZED_SCENE_PHASE(*uParam8, 0f);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam8, 0);
			if (iParam2 == 73)
			{
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam8, 0);
			}
			else
			{
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam8, 1);
			}
			StringCopy(sParam10, sVar37, 64);
			PED::SET_PED_CONFIG_FLAG(iParam0, 185, 1);
			*uParam7 = 2;
			return 0;
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1785177548) == 1)
			{
				*uParam7 = 3;
				if (fParam18 != 0f)
				{
					*uParam7 = 33;
				}
			}
			break;
		
		case 3:
		case 33:
			if (func_542(iParam1, iParam2, &sVar42, &cVar58, &uVar74, &uVar75))
			{
				StringCopy(&cVar58, GlobalFunc_7243(iParam0, iParam1, iParam2), 64);
			}
			if (fParam18 != 0f && *uParam7 != 3)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8) && PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam8) >= fParam18)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam14))
					{
						if (func_425(sParam12, sParam14, uParam16, iParam19, uParam15, 0))
						{
							GlobalFunc_6715(uParam17);
							*uParam7 = 3;
						}
					}
				}
			}
			if (ENTITY::FIND_ANIM_EVENT_PHASE(&sVar42, &cVar58, "WalkInterruptible", &fVar76, &fVar77))
			{
			}
			else
			{
				fVar76 = 0.95f;
				fVar77 = 1f;
				if (iParam2 == 21)
				{
					fVar76 = 0.44f;
					fVar77 = 1f;
				}
				if (iParam2 == 56)
				{
					if (iParam1 == 2)
					{
						fVar76 = 0.78f;
						fVar77 = 1f;
					}
				}
				else if (iParam2 == 57)
				{
					if (iParam1 == 2)
					{
						fVar76 = 0.73f;
						fVar77 = 1f;
					}
				}
				else if (iParam2 == 58)
				{
					if (iParam1 == 2)
					{
						fVar76 = 0.8f;
						fVar77 = 1f;
					}
				}
				if (iParam2 == 120)
				{
					fVar76 = 0.8f;
					fVar77 = 1f;
				}
				if ((iParam2 == 132 || iParam2 == 133) || iParam2 == 134)
				{
					fVar76 = 0.75f;
					fVar77 = 1f;
				}
				if (iParam2 == 73)
				{
					fVar76 = 5f;
					fVar77 = 1f;
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8) && PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam8) >= fVar76))
			{
				GlobalFunc_6715(uParam17);
				if (iParam11 == 141)
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 1.5f, 0f), 1f, 20000, 1193033728, 1056964608);
					PED::FORCE_PED_MOTION_STATE(iParam0, -668482597, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
					*uParam7 = 4;
				}
				else
				{
					if (iParam11 == 137 || iParam11 == 138)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8))
						{
							PED::DETACH_SYNCHRONIZED_SCENE(*uParam8);
						}
						*uParam8 = -1;
					}
					GlobalFunc_6715(uParam17);
					*uParam7 = 0;
					GlobalFunc_7241(iParam1, iParam11);
					return 0;
				}
			}
			break;
		
		case 4:
			*uParam7 = 0;
			GlobalFunc_7241(iParam1, 138);
			break;
		
		case 5:
			if (iParam11 == 137 || iParam11 == 138)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam8))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(*uParam8);
				}
				*uParam8 = -1;
			}
			GlobalFunc_6715(uParam17);
			*uParam7 = 0;
			GlobalFunc_7241(iParam1, iParam11);
			return 0;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_639(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, var uParam7, int iParam8)//Position - 0x6D92C
{
	int iVar0;
	struct<4> Var1;
	float fVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	struct<3> Var13;
	float fVar16;
	char* sVar17;
	char* sVar18;
	
	if (Global_24489 == 0)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			return 0;
		}
		iVar0 = GlobalFunc_5187();
		if (iVar0 != 318)
		{
			StringCopy(&Var1, "", 32);
			fVar9 = 0f;
			if (GlobalFunc_2980(iVar0, &Var1, &fVar9, &uVar10, &uVar11, &uVar12))
			{
				return 0;
			}
		}
		func_632(iParam1, iParam2);
		return 1;
	}
	if (GlobalFunc_5940(iParam1, iParam2, &Var13, &fVar16))
	{
		Var13 = { Var13 + Param3 };
		fVar16 = (fVar16 + fParam6);
		sVar17 = "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT";
		sVar18 = "EXIT_FORWARD";
		switch (iParam2)
		{
			case 4:
				*uParam7 = 3;
				break;
			
			case 19:
			case 25:
				*uParam7 = 3;
				break;
			
			case 48:
			case 68:
				sVar17 = "";
				sVar18 = "";
				*uParam7 = 3;
				break;
			
			case 32:
			case 33:
				sVar17 = "";
				sVar18 = "";
				*uParam7 = 3;
				break;
			
			case 34:
				*uParam7 = 3;
				break;
			
			case 35:
				*uParam7 = 3;
				break;
			
			case 96:
			case 98:
				*uParam7 = 3;
				break;
			
			default:
				return 0;
				break;
		}
		switch (*uParam7)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT(sVar17);
				if (STREAMING::HAS_ANIM_DICT_LOADED(sVar17))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, sVar17, sVar18, Var13, 0f, 0f, fVar16, 1000f, -8f, -1, 8, 0f, 2, 0);
					*uParam7 = 1;
					return 0;
				}
				break;
			
			case 1:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, sVar17, sVar18, 3))
				{
					*uParam7 = 2;
					return 0;
				}
				break;
			
			case 2:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
				{
					STREAMING::REMOVE_ANIM_DICT(sVar17);
				}
				GlobalFunc_5130(*iParam0, "GENERIC_INSULT_MED", 24);
				TASK::CLEAR_PED_TASKS(*iParam0);
				GlobalFunc_7241(iParam1, iParam8);
				*uParam7 = 0;
				return 0;
				break;
			
			case 3:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
				{
					STREAMING::REMOVE_ANIM_DICT(sVar17);
				}
				if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
				{
					PED::DELETE_PED(iParam0);
				}
				GlobalFunc_7241(iParam1, 140);
				*uParam7 = 0;
				return 0;
				break;
			
			default:
				return 0;
				break;
			}
	}
	return 0;
}



int func_642(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<16> Param5, char* sParam21, var uParam22)//Position - 0x6DF6A
{
	var uVar0;
	var uVar97;
	int iVar194;
	var uVar195;
	var uVar196;
	int iVar197;
	var uVar198;
	var uVar201;
	int iVar202;
	int iVar203;
	float fVar204;
	int iVar205;
	
	uVar0 = 6;
	uVar97 = 6;
	if (func_644(iParam1, iParam2, &uVar0, &uVar97, &iVar194, &uVar195, &uVar196, &iVar197) && GlobalFunc_5940(iParam1, iParam2, &uVar198, &uVar201))
	{
		iVar202 = 1;
		iVar203 = 16;
		fVar204 = 1000f;
		iVar205 = 0;
		GlobalFunc_2977(iParam1, iParam2, &iVar205);
		if (GlobalFunc_2951(iVar197, 8))
		{
			GlobalFunc_2953(&iVar202, 4);
		}
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam22))
		{
			return 0;
		}
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam3, sParam4, 2) || PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam22) <= 0.001f)
		{
			func_643(iParam0, *uParam22, &uVar0, &uVar97, iVar194, sParam3, sParam4, Param5, sParam21, uVar195, uVar196, iVar202, iVar203, fVar204, iVar205);
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_643(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, char* sParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, char* sParam23, float fParam24, float fParam25, int iParam26, int iParam27, float fParam28, int iParam29)//Position - 0x6E032
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[64];
	int iVar20;
	int iVar21;
	int iVar22;
	char cVar23[64];
	struct<16> Var39;
	struct<16> Var55;
	
	iVar0 = -1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam7))
	{
		iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam7);
		iVar2 = HUD::GET_LENGTH_OF_LITERAL_STRING(uParam23);
		iVar3 = (iVar1 - iVar2);
		StringCopy(&cVar4, HUD::_GET_TEXT_SUBSTRING(&uParam7, 0, iVar3), 64);
		iVar20 = 0;
		while (iVar20 < iParam4 + 1)
		{
			iVar21 = iVar3;
			iVar22 = HUD::GET_LENGTH_OF_LITERAL_STRING(uParam3[iVar20 /*16*/]);
			if (iVar21 > iVar22)
			{
				iVar21 = iVar22;
			}
			StringCopy(&cVar23, HUD::_GET_TEXT_SUBSTRING(uParam3[iVar20 /*16*/], 0, iVar21), 64);
			if (MISC::ARE_STRINGS_EQUAL(&cVar4, &cVar23))
			{
				iVar0 = iVar20;
			}
			iVar20++;
		}
	}
	else
	{
		return;
	}
	if (iVar0 == -1)
	{
		return;
	}
	Var39 = { *(uParam2[iVar0 /*16*/]) };
	Var55 = { *(uParam3[iVar0 /*16*/]) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var39))
	{
		STREAMING::REQUEST_ANIM_DICT(&Var39);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var39))
		{
			STREAMING::REQUEST_ANIM_DICT(&Var39);
		}
		else
		{
			if (GlobalFunc_2951(iParam27, 1))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
				PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			}
			if (!GlobalFunc_2951(iParam27, 64))
			{
				GlobalFunc_2953(&iParam27, 64);
			}
			TASK::TASK_SYNCHRONIZED_SCENE(iParam0, uParam1, &Var39, &Var55, uParam24, uParam25, iParam26, iParam27, fParam28, iParam29);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			*sParam5 = { Var39 };
			*sParam6 = { Var55 };
		}
	}
}

int func_644(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x6E17A
{
	struct<16> Var0;
	struct<16> Var16;
	var uVar32;
	
	*uParam5 = 4f;
	*uParam6 = -4f;
	if (func_542(iParam0, iParam1, &Var0, &Var16, uParam7, &uVar32))
	{
		switch (iParam1)
		{
			case 0:
			case 24:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam2[2 /*16*/]) = { Var0 };
				if (iParam0 != 2)
				{
					*(uParam3[0 /*16*/]) = { Var16 };
					StringConCat(uParam3[0 /*16*/], "base", 64);
					*(uParam3[1 /*16*/]) = { Var16 };
					StringConCat(uParam3[1 /*16*/], "idle_a", 64);
					*(uParam3[2 /*16*/]) = { Var16 };
					StringConCat(uParam3[2 /*16*/], "idle_b", 64);
				}
				else
				{
					StringCopy(uParam3[0 /*16*/], "base", 64);
					StringConCat(uParam3[0 /*16*/], &Var16, 64);
					StringCopy(uParam3[1 /*16*/], "idle_a", 64);
					StringConCat(uParam3[1 /*16*/], &Var16, 64);
					StringCopy(uParam3[2 /*16*/], "idle_b", 64);
					StringConCat(uParam3[2 /*16*/], &Var16, 64);
				}
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 2:
			case 3:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "eat_takeout", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "eating_disorder", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "getting_fit", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "your_boyfriend", 64);
				switch (iParam0)
				{
					case 2:
						StringConCat(uParam3[0 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[1 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[2 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[3 /*16*/], "_Amanda", 64);
						break;
					
					case 0:
						StringConCat(uParam3[0 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[1 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[2 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[3 /*16*/], "_Jimmy", 64);
						break;
					
					case 1:
						StringConCat(uParam3[0 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[1 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[2 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[3 /*16*/], "_Tracy", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 4:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IsThisTheBest", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "ShouldntYouGuys", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "watching_this", 64);
				switch (iParam0)
				{
					case 2:
						StringConCat(uParam3[0 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[1 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[2 /*16*/], "_Amanda", 64);
						StringConCat(uParam3[3 /*16*/], "_Amanda", 64);
						break;
					
					case 0:
						StringConCat(uParam3[0 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[1 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[2 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[3 /*16*/], "_Jimmy", 64);
						break;
					
					case 1:
						StringConCat(uParam3[0 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[1 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[2 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[3 /*16*/], "_Tracy", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 18:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@SLEEPING", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@BASE", 64);
				StringCopy(uParam3[1 /*16*/], "Base", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_a", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_b", 64);
				*uParam4 = 3;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 16:
				StringCopy(uParam2[0 /*16*/], "TIMETABLE@JIMMY@IG_1@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				StringCopy(uParam2[1 /*16*/], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Thats_Some_Good_Shit", 64);
				StringCopy(uParam2[2 /*16*/], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Whole_Chamber_Dog", 64);
				StringCopy(uParam2[3 /*16*/], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Hydrotropic_Bud_Or_Something", 64);
				StringCopy(uParam2[4 /*16*/], "TIMETABLE@JIMMY@IG_1@IDLE_A", 64);
				StringCopy(uParam3[4 /*16*/], "Dont_Dudge_Me_Dad", 64);
				*uParam4 = 4;
				break;
			
			case 9:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Body_High2", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "Grow_This_Strain", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "Helps_My_Glands", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "Bring_Me_Some_Food", 64);
				*uParam4 = 4;
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 25:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "MICS3_15_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IDLE_A", 64);
				switch (iParam0)
				{
					case 0:
						StringConCat(uParam3[0 /*16*/], "_Jimmy", 64);
						StringConCat(uParam3[1 /*16*/], "_Jimmy", 64);
						break;
					
					case 1:
						StringConCat(uParam3[0 /*16*/], "_Tracy", 64);
						StringConCat(uParam3[1 /*16*/], "_Tracy", 64);
						break;
				}
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 32:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				*uParam5 = 8f;
				*uParam6 = -8f;
				*uParam7 |= 2;
				break;
			
			case 33:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				*uParam5 = 8f;
				*uParam6 = -8f;
				*uParam7 |= 2;
				break;
			
			case 34:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				break;
			
			case 35:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				break;
			
			case 42:
			case 43:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringCopy(uParam3[5 /*16*/], "Idle_e", 64);
				*uParam4 = 5;
				break;
			
			case 38:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "Idle_d", 64);
				*uParam4 = 4;
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 50:
			case 69:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_4_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_4_IDLE", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 52:
			case 67:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "idle_d", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringCopy(uParam3[5 /*16*/], "idle_e", 64);
				*uParam4 = 5;
				break;
			
			case 74:
				StringCopy(uParam2[0 /*16*/], "TIMETABLE@REUNITED@IG_7", 64);
				StringCopy(uParam3[0 /*16*/], "AmandaBase_Amanda", 64);
				*uParam4 = 0;
				StringCopy(uParam2[1 /*16*/], "", 64);
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 53:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "amanda_gets_drunk_loop1", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "amanda_gets_drunk_loop2", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "amanda_gets_drunk_loop3", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 59:
			case 72:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var16 };
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_11_IDLE_OhReallyWow", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_11_IDLE_UhHuh", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_11_IDLE_UmHumYesIKnow", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "IG_11_IDLE_YouRSoBad", 64);
				*uParam4 = 4;
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 76:
			case 78:
			case 85:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 77:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_9_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_9_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_9_IDLE_B", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case joaat("mpsv_lp0_31"):
			case 86:
			case 80:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				if (!Global_3)
				{
					*(uParam2[4 /*16*/]) = { Var0 };
					StringConCat(uParam2[4 /*16*/], "@IDLE_B", 64);
					StringCopy(uParam3[4 /*16*/], "idle_d", 64);
					*(uParam2[5 /*16*/]) = { Var0 };
					StringConCat(uParam2[5 /*16*/], "@IDLE_B", 64);
					StringCopy(uParam3[5 /*16*/], "idle_e", 64);
					*uParam4 = 5;
				}
				break;
			
			case 81:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_2_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_2_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_2_IDLE_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_2_IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 82:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_8_BASE", 64);
				*uParam4 = 0;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 89:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "idle_a_gardener", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_b_gardener", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_c_gardener", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				*(uParam3[3 /*16*/]) = { Var16 };
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 93:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Idle_Cough", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Smoke_Idle", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 94:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 96:
			case 98:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 97:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 107:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				StringCopy(uParam3[0 /*16*/], "ON_CHAIR_Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "ON_CHAIR_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "ON_CHAIR_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[3 /*16*/], "ON_CHAIR_C", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "ON_CHAIR_D", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "IDLE_C", 64);
				StringCopy(uParam3[5 /*16*/], "ON_CHAIR_E", 64);
				*uParam4 = 5;
				break;
			
			case 108:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				StringCopy(uParam3[0 /*16*/], "ON_CLUBCHAIR_Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "ON_CLUBCHAIR_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "ON_CLUBCHAIR_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[3 /*16*/], "ON_CLUBCHAIR_C", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "IDLE_B", 64);
				StringCopy(uParam3[4 /*16*/], "ON_CLUBCHAIR_D", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "IDLE_C", 64);
				StringCopy(uParam3[5 /*16*/], "ON_CLUBCHAIR_E", 64);
				*uParam4 = 5;
				break;
			
			case 109:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				*(uParam3[0 /*16*/]) = { Var16 };
				StringConCat(uParam3[0 /*16*/], "_Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				*(uParam3[1 /*16*/]) = { Var16 };
				StringConCat(uParam3[1 /*16*/], "_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				*(uParam3[2 /*16*/]) = { Var16 };
				StringConCat(uParam3[2 /*16*/], "_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_A", 64);
				*(uParam3[3 /*16*/]) = { Var16 };
				StringConCat(uParam3[3 /*16*/], "_C", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringConCat(uParam2[4 /*16*/], "IDLE_B", 64);
				*(uParam3[4 /*16*/]) = { Var16 };
				StringConCat(uParam3[4 /*16*/], "_D", 64);
				*(uParam2[5 /*16*/]) = { Var0 };
				StringConCat(uParam2[5 /*16*/], "IDLE_B", 64);
				*(uParam3[5 /*16*/]) = { Var16 };
				StringConCat(uParam3[5 /*16*/], "_E", 64);
				*uParam4 = 5;
				break;
			
			case 118:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_1_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_1_IDLE_A", 64);
				*uParam4 = 1;
				*uParam5 = 1.5f;
				*uParam6 = -1.5f;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 101:
			case 119:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_2_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_2_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_2_IDLE_B", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 121:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_4_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_4_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_4_IDLE_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_4_IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 105:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var16 };
				StringConCat(uParam3[0 /*16*/], "BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var16 };
				StringConCat(uParam3[1 /*16*/], "IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				*(uParam3[2 /*16*/]) = { Var16 };
				StringConCat(uParam3[2 /*16*/], "IDLE_B", 64);
				*uParam4 = 2;
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 106:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_6_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_6_IDLE_A", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_6_IDLE_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_6_IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 112:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 113:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var16 };
				StringConCat(uParam3[0 /*16*/], "BaseLoop", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var16 };
				StringConCat(uParam3[1 /*16*/], "StruggleLoop", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 115:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var16 };
				StringConCat(uParam3[0 /*16*/], "_BASE", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var16 };
				StringConCat(uParam3[1 /*16*/], "_IDLE_01", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				*(uParam3[2 /*16*/]) = { Var16 };
				StringConCat(uParam3[2 /*16*/], "_IDLE_02", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				*(uParam3[3 /*16*/]) = { Var16 };
				StringConCat(uParam3[3 /*16*/], "_IDLE_03", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 122:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Clean_Up", 64);
				*uParam4 = 1;
				StringCopy(uParam2[2 /*16*/], "", 64);
				StringCopy(uParam2[3 /*16*/], "", 64);
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 123:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "IDLE_B", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "IDLE_B", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "IDLE_C", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 135:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 17:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 28:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "IG_14_BASE_TRACY", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "IG_14_IDLE_A_WhatRUDoingHere_TRACY", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "IG_14_IDLE_B_ReallyLoveUDad_TRACY", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "IG_14_IDLE_C_YouGotAnyBlowDad_TRACY", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 29:
			case 30:
			case 44:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Idle_a", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "Idle_b", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "Idle_c", 64);
				*uParam4 = 2;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 45:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "FAMR_IG_5_IAmAboutToCrackThis", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "FAMR_IG_5_IAmTotallyOnTop", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "FAMR_IG_5_IAmTryingtoConcentrate", 64);
				*(uParam2[4 /*16*/]) = { Var0 };
				StringCopy(uParam3[4 /*16*/], "FAMR_IG_5_ThisCollegeStuff", 64);
				*uParam4 = 4;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 90:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringCopy(uParam3[1 /*16*/], "idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringCopy(uParam3[2 /*16*/], "idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringCopy(uParam3[3 /*16*/], "idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 116:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var16 };
				StringConCat(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var16 };
				StringConCat(uParam3[1 /*16*/], "TheDesertIsSoBeautiful", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				*(uParam3[2 /*16*/]) = { Var16 };
				StringConCat(uParam3[2 /*16*/], "TheDontKnowWhy", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				*(uParam3[3 /*16*/]) = { Var16 };
				StringConCat(uParam3[3 /*16*/], "ThereAreJustSomeMoments", 64);
				switch (iParam0)
				{
					case 9:
						StringConCat(uParam3[0 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[1 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[2 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[3 /*16*/], "_TREVOR", 64);
						break;
					
					case 11:
						StringConCat(uParam3[0 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[1 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[2 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[3 /*16*/], "_PATRICIA", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 117:
				*(uParam2[0 /*16*/]) = { Var0 };
				*(uParam3[0 /*16*/]) = { Var16 };
				StringConCat(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				*(uParam3[1 /*16*/]) = { Var16 };
				StringConCat(uParam3[1 /*16*/], "Making_Me_Blush", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				*(uParam3[2 /*16*/]) = { Var16 };
				StringConCat(uParam3[2 /*16*/], "Met_You_20_Years_Ago", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				*(uParam3[3 /*16*/]) = { Var16 };
				StringConCat(uParam3[3 /*16*/], "You_Blinked", 64);
				switch (iParam0)
				{
					case 9:
						StringConCat(uParam3[0 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[1 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[2 /*16*/], "_TREVOR", 64);
						StringConCat(uParam3[3 /*16*/], "_TREVOR", 64);
						break;
					
					case 11:
						StringConCat(uParam3[0 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[1 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[2 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[3 /*16*/], "_PATRICIA", 64);
						break;
				}
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 124:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringCopy(uParam3[0 /*16*/], "PAT_IG_3", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "BASE", 64);
				StringCopy(uParam3[1 /*16*/], "BASE", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "ALT_1", 64);
				StringCopy(uParam3[2 /*16*/], "ALT_1", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "ALT_2", 64);
				StringCopy(uParam3[3 /*16*/], "ALT_2", 64);
				switch (iParam0)
				{
					case 11:
						StringConCat(uParam3[0 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[1 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[2 /*16*/], "_PATRICIA", 64);
						StringConCat(uParam3[3 /*16*/], "_PATRICIA", 64);
						break;
					
					case 8:
						StringConCat(uParam3[0 /*16*/], "_MICHAEL", 64);
						StringConCat(uParam3[1 /*16*/], "_MICHAEL", 64);
						StringConCat(uParam3[2 /*16*/], "_MICHAEL", 64);
						StringConCat(uParam3[3 /*16*/], "_MICHAEL", 64);
						break;
				}
				*uParam4 = 3;
				*uParam5 = 1000f;
				*uParam6 = -1000f;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 126:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			case 127:
				*(uParam2[0 /*16*/]) = { Var0 };
				StringConCat(uParam2[0 /*16*/], "@BASE", 64);
				StringCopy(uParam3[0 /*16*/], "Base", 64);
				*(uParam2[1 /*16*/]) = { Var0 };
				StringConCat(uParam2[1 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[1 /*16*/], "Idle_a", 64);
				*(uParam2[2 /*16*/]) = { Var0 };
				StringConCat(uParam2[2 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[2 /*16*/], "Idle_b", 64);
				*(uParam2[3 /*16*/]) = { Var0 };
				StringConCat(uParam2[3 /*16*/], "@IDLE_A", 64);
				StringCopy(uParam3[3 /*16*/], "Idle_c", 64);
				*uParam4 = 3;
				StringCopy(uParam2[4 /*16*/], "", 64);
				StringCopy(uParam2[5 /*16*/], "", 64);
				break;
			
			default:
				*uParam4 = -1;
				return 0;
				break;
			}
	}
	return 1;
}

int func_645(int iParam0, var uParam1)//Position - 0x70602
{
	switch (iParam0)
	{
		case 5:
			func_646(0, 5, uParam1, -1f);
			return 1;
			break;
		
		case 21:
			return func_645(5, uParam1);
			break;
		
		case 10:
			func_646(0, 4, uParam1, 0);
			return 1;
			break;
		
		case 8:
			func_646(0, 4, uParam1, 0);
			return 1;
			break;
		
		case 1:
			func_646(1, 4, uParam1, 0);
			return 1;
			break;
		
		case 38:
			func_646(2, 5, uParam1, -0.75f);
			return 1;
			break;
		
		case 39:
			func_646(2, 4, uParam1, 0);
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1700375831))
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1700375831, 4, 1, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1700375831, 0f, 1, 1);
			}
			return 1;
			break;
		
		case 40:
			func_646(1, 4, uParam1, 0);
			return 1;
			break;
		
		case 30:
			func_646(1, 4, uParam1, 0);
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
		case 86:
			switch (*uParam1)
			{
				case 7:
					func_646(6, 4, uParam1, 0);
					break;
				
				case 6:
					func_646(7, 4, uParam1, 0);
					break;
				
				default:
					if (GlobalFunc_745())
					{
						func_646(6, 4, uParam1, 0);
					}
					else
					{
						func_646(7, 4, uParam1, 0);
					}
					break;
			}
			return 1;
			break;
		
		case 136:
			func_646(10, 4, uParam1, 0);
			return 1;
			break;
	}
	*uParam1 = 12;
	return 0;
}

int func_646(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0x70784
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	struct<16> Var6;
	bool bVar22;
	struct<16> Var23;
	
	iVar0 = 0;
	Var1 = { 0f, 0f, 0f };
	iVar4 = 225;
	iVar5 = 825812850;
	bVar22 = false;
	GlobalFunc_2984(iParam0, &iVar0, &Var1, &iVar4, &iVar5, &Var6, &bVar22);
	StringCopy(&Var23, "", 64);
	if (!bVar22)
	{
		Var23 = { Var6 };
	}
	func_647(iVar0, Var1, iVar4, iVar5, iParam1, fParam3, Var23);
	*uParam2 = iParam0;
	return 1;
}

int func_647(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, float fParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)//Position - 0x707EB
{
	int iVar0;
	float fVar1;
	
	if (iParam4 != 225)
	{
		GlobalFunc_10686(iParam4, iParam6);
	}
	else if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam5))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iParam5, iParam0, Param1, 1, 1, 0);
	}
	else
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam8))
		{
			if (MISC::GET_HASH_KEY(&uParam8) == Global_90014.f_289)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam5, 0, 1, 0);
				return 0;
			}
		}
		iVar0 = 0;
		if (iParam6 == 4)
		{
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam5) != 4)
			{
				if (fParam7 < 0.5f)
				{
					iVar0 = 1;
				}
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param1) > (3f * 3f) || iVar0)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam5, iParam6, 1, 1);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam5, fParam7, 1, 1);
			if (iParam6 == 4)
			{
				fVar1 = (CAM::_REPLAY_FREE_CAM_GET_MAX_RANGE() + 5f);
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param1) < (fVar1 * fVar1))
				{
					RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				}
			}
		}
	}
	fParam7 = fParam7;
	return 0;
}











int func_658(int iParam0, int iParam1, int iParam2)//Position - 0x71C40
{
	char* sVar0;
	char[] cVar16[8];
	var uVar32;
	var uVar33;
	
	if (func_542(iParam1, iParam2, &sVar0, &cVar16, &uVar32, &uVar33))
	{
		STREAMING::REQUEST_ANIM_DICT(&sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
		{
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			return 0;
		}
		else
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, &sVar0, &cVar16, 3))
			{
				TASK::TASK_PLAY_ANIM(iParam0, &sVar0, &cVar16, 8f, -8f, -1, uVar32, 0, 0, 0, 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
				return 1;
			}
			return 1;
		}
	}
	return 0;
}

int func_659(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<3> Param5, float fParam8)//Position - 0x71CB2
{
	var uVar0;
	var uVar97;
	int iVar194;
	var uVar195;
	var uVar196;
	int iVar197;
	struct<3> Var198;
	float fVar201;
	int iVar202;
	bool bVar203;
	float fVar204;
	
	uVar0 = 6;
	uVar97 = 6;
	if (func_644(iParam1, iParam2, &uVar0, &uVar97, &iVar194, &uVar195, &uVar196, &iVar197))
	{
		if (GlobalFunc_5940(iParam1, iParam2, &Var198, &fVar201))
		{
			GlobalFunc_2977(iParam1, iParam2, &iVar202);
			bVar203 = false;
			if (!bVar203)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam3, sParam4, 1))
					{
						fVar204 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam3, sParam4);
						if (fVar204 >= 0.99f)
						{
							func_660(iParam0, &uVar0, &uVar97, iVar194, Param5 + Var198, 0f, 0f, (fParam8 + fVar201), sParam3, sParam4, uVar195, uVar196, -1, iVar197, 0, 2, iVar202);
						}
						bVar203 = true;
					}
				}
			}
			if (!bVar203)
			{
				func_660(iParam0, &uVar0, &uVar97, iVar194, Param5 + Var198, 0f, 0f, (fParam8 + fVar201), sParam3, sParam4, uVar195, uVar196, -1, iVar197, 0, 2, iVar202);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam3, sParam4, 3);
		}
		return 0;
	}
	StringCopy(sParam3, "", 64);
	StringCopy(sParam4, "", 64);
	return 0;
}

void func_660(int iParam0, var uParam1, var uParam2, int iParam3, struct<3> Param4, struct<3> Param7, char* sParam10, char* sParam11, float fParam12, float fParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)//Position - 0x71DB7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<16> Var4;
	struct<16> Var20;
	
	iVar0 = iParam3;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		iVar1 = 0;
		while (iVar1 < iParam3 + 1)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam10, uParam1[iVar1 /*16*/]) && MISC::ARE_STRINGS_EQUAL(sParam11, uParam2[iVar1 /*16*/]))
			{
				if (iVar1 != 0)
				{
					iVar2 = iVar1;
					while (iVar2 <= (*uParam1 - 1))
					{
						if (iVar2 + 1 < *uParam1)
						{
							*(uParam1[iVar2 /*16*/]) = { *(uParam1[iVar2 + 1 /*16*/]) };
							*(uParam2[iVar2 /*16*/]) = { *(uParam2[iVar2 + 1 /*16*/]) };
						}
						else
						{
							StringCopy(uParam1[iVar2 /*16*/], "", 64);
							StringCopy(uParam2[iVar2 /*16*/], "", 64);
						}
						iVar2++;
					}
					iVar0 = (iVar0 - 1);
				}
			}
			iVar1++;
		}
	}
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0 + 1);
	Var4 = { *(uParam1[iVar3 /*16*/]) };
	Var20 = { *(uParam2[iVar3 /*16*/]) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
	{
		STREAMING::REQUEST_ANIM_DICT(&Var4);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var4))
		{
			STREAMING::REQUEST_ANIM_DICT(&Var4);
		}
		else
		{
			if (GlobalFunc_2951(iParam15, 1))
			{
				GlobalFunc_2988(&iParam15, 1);
			}
			if (GlobalFunc_2951(iParam15, 2))
			{
			}
			else
			{
				GlobalFunc_2953(&iParam15, 2);
			}
			if (GlobalFunc_2951(iParam15, 262144))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
				PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			}
			TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, &Var4, &Var20, Param4, Param7, uParam12, uParam13, iParam14, iParam15, iParam16, iParam17, iParam18);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iParam0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			*sParam10 = { Var4 };
			*sParam11 = { Var20 };
		}
	}
}

int func_661(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0x71F50
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	struct<3> Var14;
	struct<3> Var17;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	struct<3> Var25;
	struct<3> Var28;
	struct<3> Var31;
	struct<3> Var34;
	
	iVar0 = 0;
	Var1 = { 0f, 0f, 0f };
	Var4 = { 0f, 0f, 0f };
	Var7 = { 0f, 0f, 0f };
	Var10 = { 0f, 0f, 0f };
	iVar13 = 0;
	Var14 = { 0f, 0f, 0f };
	Var17 = { 0f, 0f, 0f };
	iVar20 = 0;
	iVar21 = 0;
	if (Var4.x == Var14.x)
	{
		if (Var17.x == Var14.x)
		{
		}
	}
	switch (iParam2)
	{
		case 0:
		case 24:
			if (iParam2 == 0)
			{
				iVar21 = 1;
			}
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -797.77f, 180.96f, 71.83f };
					Var4 = { 0f, 0f, 0f };
					Var7 = { 0f, 0f, 1f };
					Var10 = { 0f, 0f, 180f };
					iVar20 = 0;
					break;
				
				case 1:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -797.46f, 179.88f, 71.83f };
					Var4 = { 0f, 0f, 0f };
					Var7 = { 0f, 0f, 1f };
					Var10 = { 0f, 0f, 180f };
					iVar20 = 0;
					break;
				
				case 2:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -796.65f, 181.23f, 71.83f };
					Var4 = { 0f, 0f, 0f };
					Var7 = { 0f, 0f, -1f };
					Var10 = { 0f, 0f, 180f };
					iVar20 = 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			iVar21 = 1;
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -797.774f, 180.96f, 71.836f };
					Var4 = { 0f, 0f, 0f };
					Var7 = { 0f, 0f, -1f };
					Var10 = { 0f, 0f, 180f };
					iVar20 = 1;
					break;
				
				case 1:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -796.655f, 181.225f, 71.836f };
					Var4 = { 0f, 0f, 0f };
					Var7 = { 0f, 0f, -1f };
					Var10 = { 0f, 0f, 180f };
					iVar20 = 1;
					break;
				
				case 2:
					iVar0 = joaat("v_ilev_m_dinechair");
					Var1 = { -797.461f, 179.875f, 71.836f };
					Var4 = { 0f, 0f, 0f };
					Var7 = { 0f, 0f, -1f };
					Var10 = { 0f, 0f, 180f };
					iVar20 = 1;
					break;
			}
			iVar20 = 1;
			break;
		
		case 26:
		case 46:
		case 54:
		case 70:
			iVar21 = 1;
			iVar0 = joaat("prop_patio_lounger1");
			Var1 = { -784f, 188.2f, 71.8f };
			Var4 = { 0f, 0f, 0f };
			if (iParam2 == 54 || iParam2 == 70)
			{
				Var7 = { -0.09f, -1.57f, 1f };
				Var10 = { 0f, 0f, 180f };
			}
			break;
		
		case 117:
			switch (iParam1)
			{
				case 9:
					return 0;
					break;
				
				case 11:
					iVar0 = joaat("prop_chair_06");
					Var1 = { 1977.433f, 3819.045f, 32.453f };
					Var4 = { 0f, 0f, 0f };
					Var7 = { 0.05f, 0f, -0.6f };
					Var10 = { 0f, 0f, 180f };
					iVar20 = 1;
					break;
			}
			break;
		
		default:
			return 0;
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		*uParam3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var1, 10f, iVar0, 1, 0, 1);
	}
	else if (ENTITY::GET_ENTITY_MODEL(*uParam3) != iVar0)
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, *uParam3))
		{
			ENTITY::DETACH_ENTITY(iParam0, 1, 1);
		}
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam3, iParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam3, 1, 1);
		}
		*uParam3 = 0;
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		return 0;
	}
	else
	{
		if (iVar20 == 0)
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, *uParam3))
			{
				iVar22 = 0;
				iVar23 = 1;
				iVar24 = 0;
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, *uParam3, iVar13, Var7, Var10, iVar21, iVar22, iVar23, iVar24, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, 0);
				if (func_662(*uParam3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam3, 1);
				}
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*uParam3, iParam0, 0);
				return 0;
			}
		}
		else if (iVar20 == 1)
		{
			Var25 = { ENTITY::GET_ENTITY_COORDS(*uParam3, 1) };
			Var28 = { ENTITY::GET_ENTITY_ROTATION(*uParam3, 2) };
			Var31 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) + Var7 };
			Var34 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) + Var10 };
			if (SYSTEM::VDIST(Var25, Var31) > 0.1f || (SYSTEM::VDIST(Var28, Var34) > 0.1f && SYSTEM::VDIST(Var28, Var34) < 360f))
			{
				ENTITY::SET_ENTITY_COORDS(*uParam3, ENTITY::GET_ENTITY_COORDS(iParam0, 1) + Var7, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(*uParam3, ENTITY::GET_ENTITY_ROTATION(iParam0, 2) + Var10, 2, 1);
				if (func_662(*uParam3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam3, 1);
				}
				ENTITY::SET_ENTITY_DYNAMIC(*uParam3, 0);
				ENTITY::SET_ENTITY_COLLISION(*uParam3, 0, 0);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*uParam3, iParam0, 0);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, *uParam3, 0);
			}
			else if (iParam2 == 2 || iParam2 == 3)
			{
				if (iParam1 == 2)
				{
					bLocal_42 = true;
				}
			}
		}
		return 1;
	}
	return 0;
}

int func_662(int iParam0)//Position - 0x7240D
{
	if (ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("v_ilev_m_sofa") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("v_ilev_m_dinechair"))
	{
		return 0;
	}
	return 1;
}

int func_663(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)//Position - 0x7243B
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	char cVar19[64];
	float fVar35;
	float fVar36;
	int iVar37;
	float fVar38;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			iVar0 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2))
			{
				iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
			}
			iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam3);
			iVar2 = (iVar0 - iVar1);
			StringCopy(&Var3, "", 64);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				StringCopy(&Var3, HUD::_GET_TEXT_SUBSTRING(sParam2, 0, iVar2), 64);
			}
			cVar19 = { Var3 };
			StringConCat(&cVar19, sParam4, 64);
			if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(*uParam0))
			{
				if (!STREAMING::HAS_ANIM_DICT_LOADED(sParam1))
				{
					STREAMING::REQUEST_ANIM_DICT(sParam1);
					return 0;
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, sParam1, &cVar19, 3))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam5))
					{
						return 0;
					}
					if (iParam6 < 11)
					{
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
					{
						ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
					}
					fVar35 = 8f;
					fVar36 = -8f;
					iVar37 = 5;
					fVar38 = 1000f;
					if (((ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("s_prop_hdphones") || ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("v_res_fa_chair02")) || ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("p_novel_01_s")) || ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("p_whiskey_bottle_s"))
					{
						fVar35 = 1000f;
						fVar36 = -1000f;
					}
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(*uParam0, *uParam5, &cVar19, sParam1, fVar35, fVar36, iVar37, fVar38);
					if (fVar35 == 1000f)
					{
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(*uParam0);
					}
					return 1;
				}
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		return 0;
	}
	return 0;
}

int func_664(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, struct<3> Param5, float fParam8, var uParam9, int iParam10, bool bParam11)//Position - 0x725BF
{
	struct<16> Var0[6];
	var uVar97;
	int iVar194;
	var uVar195;
	float fVar196;
	float fVar197;
	var uVar198;
	struct<3> Var199;
	float fVar202;
	int iVar203;
	int iVar204;
	float fVar205;
	int iVar206;
	
	uVar97 = 6;
	if (func_644(iParam1, iParam2, &Var0, &uVar97, &iVar194, &fVar196, &fVar197, &uVar198) && GlobalFunc_5940(iParam1, iParam2, &Var199, &fVar202))
	{
		iVar203 = 1;
		iVar204 = 16;
		fVar205 = 1000f;
		iVar206 = 0;
		GlobalFunc_2977(iParam1, iParam2, &iVar206);
		if (GlobalFunc_2951(uVar198, 8))
		{
			GlobalFunc_2953(&iVar203, 4);
		}
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam9))
		{
			if (iParam2 == 127)
			{
				fVar196 = 1000f;
				fVar205 = fVar196;
			}
			else if (iParam2 == 53)
			{
				fVar196 = 2f;
				fVar205 = fVar196;
			}
			else if (iParam2 == 18)
			{
				fVar196 = 1000f;
				fVar205 = fVar196;
				fVar197 = -1000f;
			}
			else if (iParam2 == 117)
			{
				fVar196 = 1000f;
				fVar205 = fVar196;
				fVar197 = -1000f;
			}
			else if (iParam2 == 115)
			{
				fVar196 = 1000f;
				fVar205 = fVar196;
				fVar197 = -1000f;
			}
			else
			{
				fVar196 = 4f;
				fVar205 = 1000f;
			}
			STREAMING::REQUEST_ANIM_DICT(&(Var0[0 /*16*/]));
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&(Var0[0 /*16*/])))
			{
				return 0;
			}
			if (*uParam9 > 0)
			{
				*uParam9 = -1;
			}
			*uParam9 = PED::CREATE_SYNCHRONIZED_SCENE(Param5 + Var199, 0f, 0f, (fParam8 + fVar202), 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam9, iParam10);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam9, bParam11);
			uVar195 = GlobalFunc_5955(iParam0, *uParam9, &Var0, &uVar97, iVar194, sParam3, sParam4, fVar196, fVar197, iVar203, iVar204, fVar205, iVar206);
			return uVar195;
		}
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam3, sParam4, 2))
		{
			if (!GlobalFunc_5955(iParam0, *uParam9, &Var0, &uVar97, iVar194, sParam3, sParam4, fVar196, -1000f, iVar203, iVar204, fVar205, iVar206))
			{
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam9, true);
				return 0;
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(*uParam9, iParam10);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*uParam9, bParam11);
		}
		if (bParam11)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam9) >= 0.999f)
			{
				GlobalFunc_5955(iParam0, *uParam9, &Var0, &uVar97, iVar194, sParam3, sParam4, 1000f, -1000f, iVar203, iVar204, 1000f, iVar206);
			}
		}
		return 1;
	}
	return 0;
}











void func_675()//Position - 0x72E32
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_601[iVar0] = 0;
		iVar0++;
	}
	GlobalFunc_173(&uLocal_627, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
}

void func_676(struct<4> Param0)//Position - 0x72E65
{
	int iVar0;
	
	Local_272 = { Param0 };
	fLocal_275 = Param0.f_3;
	GlobalFunc_11273(0);
	GlobalFunc_11273(1);
	GlobalFunc_11273(2);
	GlobalFunc_11273(3);
	if (!GlobalFunc_891(17))
	{
		GlobalFunc_11273(4);
	}
	GlobalFunc_11273(8);
	func_678();
	GlobalFunc_5940(0, Global_85373[0], &(Local_276[0 /*3*/]), &(uLocal_292[0]));
	GlobalFunc_5940(1, Global_85373[1], &(Local_276[1 /*3*/]), &(uLocal_292[1]));
	GlobalFunc_5940(2, Global_85373[2], &(Local_276[2 /*3*/]), &(uLocal_292[2]));
	GlobalFunc_5940(3, Global_85373[3], &(Local_276[3 /*3*/]), &(uLocal_292[3]));
	GlobalFunc_5940(4, Global_85373[4], &(Local_276[4 /*3*/]), &(uLocal_292[4]));
	iLocal_254 = 0;
	iLocal_255 = -1;
	Local_256 = { 0f, 0f, 0f };
	Local_259 = { 0f, 0f, 0f };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_575(iVar0);
		iLocal_319[iVar0] = -1;
		iLocal_798[iVar0] = -1;
		iVar0++;
	}
	iLocal_804 = -1;
	GlobalFunc_5958();
}


int func_678()//Position - 0x73063
{
	int iVar0;
	int iVar1;
	
	iLocal_77[0] = 0;
	iVar0 = GlobalFunc_5187();
	if (iVar0 == 89 || iVar0 == 161)
	{
		iLocal_77[1] = 0;
		iLocal_77[2] = 0;
		return 0;
	}
	switch (GlobalFunc_5899())
	{
		case 1:
		case 2:
		case 4:
			iLocal_77[1] = 0;
			iLocal_77[2] = 0;
			return 0;
			break;
	}
	if ((Global_85373[0] == 7 || Global_85373[1] == 27) || Global_85373[2] == 51)
	{
		iLocal_77[1] = 0;
		iLocal_77[2] = 0;
		return 0;
	}
	if (GlobalFunc_230(21) && !GlobalFunc_230(22))
	{
		iLocal_77[1] = 0;
		iLocal_77[2] = 0;
		return 0;
	}
	if (GlobalFunc_891(2))
	{
		iLocal_77[1] = 1;
		iLocal_77[2] = 1;
		return 1;
	}
	if (GlobalFunc_891(17))
	{
		iLocal_77[1] = 0;
		iLocal_77[2] = 0;
		return 1;
	}
	if (GlobalFunc_891(18))
	{
		iLocal_77[1] = 0;
		iLocal_77[2] = 0;
		return 1;
	}
	if (GlobalFunc_891(19))
	{
		iLocal_77[1] = 0;
		iLocal_77[2] = 0;
		return 1;
	}
	if (Global_68509 == 19)
	{
		iLocal_77[1] = 0;
		iLocal_77[2] = 0;
		return 1;
	}
	if (GlobalFunc_891(44))
	{
		iLocal_77[1] = 1;
		iLocal_77[2] = 0;
		return 1;
	}
	if (GlobalFunc_891(62))
	{
		iLocal_77[1] = 0;
		iLocal_77[2] = 0;
		return 1;
	}
	if (GlobalFunc_891(20))
	{
		iLocal_77[1] = 0;
		iLocal_77[2] = 0;
		return 1;
	}
	if (GlobalFunc_891(21))
	{
		iLocal_77[1] = 0;
		iLocal_77[2] = 1;
		return 1;
	}
	if (GlobalFunc_891(49))
	{
		iLocal_77[1] = 1;
		iLocal_77[2] = 1;
		return 1;
	}
	if (GlobalFunc_891(90))
	{
		iLocal_77[1] = 0;
		iLocal_77[2] = 1;
		return 1;
	}
	if (GlobalFunc_891(52))
	{
		iLocal_77[1] = 0;
		iLocal_77[2] = 0;
		return 1;
	}
	if (Global_68509 == 52)
	{
		iLocal_77[1] = 0;
		iLocal_77[2] = 0;
		return 1;
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar1)
	{
		case 0:
			iLocal_77[1] = 1;
			iLocal_77[2] = 0;
			break;
		
		case 1:
			iLocal_77[1] = 0;
			iLocal_77[2] = 1;
			break;
		
		case 2:
			iLocal_77[1] = 0;
			iLocal_77[2] = 0;
			break;
		
		default:
			break;
	}
	return (iLocal_77[1] || iLocal_77[2]);
}


void func_680()//Position - 0x73316
{
	int iVar0;
	int iVar1;
	
	func_696(&uLocal_91, &uLocal_141);
	GlobalFunc_8638(&iLocal_798, &uLocal_131, &uLocal_91, &iLocal_153, &iLocal_165, &uLocal_97, &iLocal_103, &uLocal_313, &iLocal_319, &Local_325);
	if (iLocal_804 != -1)
	{
		GlobalFunc_5084(&iLocal_804);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_159)
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_147[iVar0]));
		if (GlobalFunc_5959(iLocal_159[iVar0], "family_prop_r", -1))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_159[iVar0]));
		}
		if (iLocal_171[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_171[iVar0]);
		}
		iVar0++;
	}
	if (GlobalFunc_5959(uLocal_253, "family_sink_prop", -1))
	{
		OBJECT::DELETE_OBJECT(&uLocal_253);
	}
	if (iLocal_254 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_254);
	}
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_264);
	iLocal_263 = 0;
	MISC::CLEAR_AREA_OF_OBJECTS(Local_272 + Local_266, 5f, 0);
	GlobalFunc_5114(&uLocal_81);
	if (iLocal_265 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_265);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_403(iVar0);
		if (Global_85373[iVar1] != 141)
		{
			GlobalFunc_2957(iVar1);
			Global_85373[iVar1] = 141;
		}
		GlobalFunc_7242(iVar1);
		iVar0++;
	}
	GlobalFunc_555();
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("PROP_HUMAN_SEAT_CHAIR"))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("PROP_HUMAN_SEAT_CHAIR", 1);
	}
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}
















int func_696(var uParam0, var uParam1)//Position - 0x73DCB
{
	int iVar0;
	
	bLocal_42 = bLocal_42;
	bLocal_42 = false;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
		{
			ENTITY::REMOVE_MODEL_HIDE(ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar0], 1), 5f, ENTITY::GET_ENTITY_MODEL((*uParam1)[iVar0]), 0);
			if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY((*uParam0)[iVar0], (*uParam1)[iVar0]))
				{
					if (func_662((*uParam1)[iVar0]))
					{
						ENTITY::FREEZE_ENTITY_POSITION((*uParam1)[iVar0], 0);
					}
					ENTITY::FREEZE_ENTITY_POSITION((*uParam0)[iVar0], 0);
					ENTITY::DETACH_ENTITY((*uParam0)[iVar0], 1, 1);
				}
			}
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam1[iVar0]);
		iVar0++;
	}
	return 0;
}

